import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

// Targeted decompiler: finds functions that reference security-relevant
// strings or call security-relevant imports, and exports their C pseudocode.
public class DecompTargets extends GhidraScript {

    static final int MAX_TOTAL = 4000;
    static final int MAX_PER_NEEDLE = 40;
    static final int PER_FUNC_TIMEOUT = 60;

    static final String[] NEEDLES = {
        "X-Client-Geo-Region", "X-Client-Time-Format", "Anthropic-Device-ID",
        "Anthropic-Client-Platform", "Anthropic-Client-OS-Version", "Anthropic-Client-App",
        "__Host-ant_trusted_device", "AnthropicClientAppIdentifier",
        "bind_attestation", "AppAttest", "app_attest", "appAttest",
        "Reattest", "reattest", "LoginAttest", "deviceCheckToken",
        "trusted_device_id_", "device_token_fingerprint", "DeviceCheck",
        "siftscience", "beaconKey", "initial_device_ifv", "mobile_events",
        "carrierISOCountryCode", "radioAccessTechnology", "mobileCountryCode",
        "pdp_ip", "utun", "stun:", "turn:",
        "TimezoneOffset", "secondsFromGMT", "systemTimeZone",
        "requestWhenInUseAuthorization", "CLGeocoder",
        "geo.region", "X-FORWARDED-FOR", "clientIp",
        "is_emulator", "MobileSubstrate",
        "identifierForVendor", "idfv",
        "CFNetworkCopySystemProxySettings", "kCFProxy",
        "bootstrap", "Bootstrap"
    };

    static final String[] IMPORT_SYMS = {
        "getifaddrs", "if_nametoindex", "sysctlbyname", "sysctl",
        "SCNetworkReachabilityGetFlags",
        "OBJC_CLASS_$_DCAppAttestService", "OBJC_CLASS_$_DCDevice",
        "OBJC_CLASS_$_CTTelephonyNetworkInfo", "OBJC_CLASS_$_CTCarrier",
        "OBJC_CLASS_$_CLLocationManager", "OBJC_CLASS_$_CLGeocoder",
        "OBJC_CLASS_$_NSTimeZone", "SecItemAdd"
    };

    static final long[] EXTRA_ADDRS = {
        0x100abb390L, 0x100abb928L, 0x100abac64L, 0x100abb0b0L,
        0x10459a984L, 0x105543a04L
    };

    PrintWriter index;
    Map<Function, String> queueMap = new HashMap<>();
    Map<Function, Set<String>> funcNeedles = new HashMap<>();
    DecompInterface di;
    int decompiled = 0;

    @Override
    public void run() throws Exception {
        String outDir = ".";
        if (getScriptArgs().length > 0) outDir = getScriptArgs()[0];
        new File(outDir).mkdirs();
        index = new PrintWriter(new FileWriter(outDir + "/index.tsv"));

        di = new DecompInterface();
        DecompileOptions o = new DecompileOptions();
        di.setOptions(o);
        di.openProgram(currentProgram);

        // 1. string needles
        DataIterator dit = currentProgram.getListing().getDefinedData(true);
        Map<String, Integer> needleCount = new HashMap<>();
        while (dit.hasNext()) {
            if (decompiled > MAX_TOTAL) break;
            Data d = dit.next();
            if (!d.hasStringValue()) continue;
            String v = (String) d.getValue();
            if (v == null || v.length() < 4) continue;
            for (String n : NEEDLES) {
                if (!v.contains(n)) continue;
                int c = needleCount.getOrDefault(n, 0);
                if (c >= MAX_PER_NEEDLE) break;
                needleCount.put(n, c + 1);
                for (Reference r : getReferencesTo(d.getAddress())) {
                    Function f = getFunctionContaining(r.getFromAddress());
                    if (f == null) continue;
                    addNeedle(f, n);
                    enqueue(f);
                }
                break;
            }
        }

        // 2. import symbol callers
        for (String name : IMPORT_SYMS) {
            SymbolIterator sit = currentProgram.getSymbolTable().getSymbolIterator(name, true);
            while (sit.hasNext()) {
                Symbol s = sit.next();
                for (Reference r : getReferencesTo(s.getAddress())) {
                    Function f = getFunctionContaining(r.getFromAddress());
                    if (f == null) continue;
                    addNeedle(f, "import:" + name);
                    enqueue(f);
                }
            }
        }

        // 3. explicit addresses
        for (long a : EXTRA_ADDRS) {
            Address ad = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(a);
            Function f = getFunctionContaining(ad);
            if (f != null) { addNeedle(f, "addr:0x" + Long.toHexString(a)); enqueue(f); }
        }

        // 4. decompile queue
        for (Map.Entry<Function, Set<String>> e : funcNeedles.entrySet()) {
            if (decompiled > MAX_TOTAL) break;
            Function f = e.getKey();
            try {
                DecompileResults res = di.decompileFunction(f, PER_FUNC_TIMEOUT, monitor);
                String code = (res != null && res.getDecompiledFunction() != null)
                        ? res.getDecompiledFunction().getC() : "// decompile failed\n";
                String fname = sanitize(f.getName());
                if (fname.length() > 90) fname = fname.substring(0, 90);
                String file = String.format("%s/%05d__%s__0x%s.c", outDir, decompiled, fname,
                        f.getEntryPoint());
                PrintWriter pw = new PrintWriter(new FileWriter(file));
                pw.println("// FUNCTION: " + f.getName());
                pw.println("// ENTRY: 0x" + f.getEntryPoint());
                pw.println("// MATCHED: " + e.getValue());
                pw.println();
                pw.print(code);
                pw.close();
                index.println(file + "\t" + f.getName() + "\t" + f.getEntryPoint() + "\t" + e.getValue());
                decompiled++;
                if (decompiled % 100 == 0) println("decompiled " + decompiled);
            } catch (Exception ex) {
                println("ERR " + f.getName() + ": " + ex);
            }
        }
        index.close();
        println("DONE decompiled=" + decompiled);

        // 5. full function inventory for module mapping
        PrintWriter inv = new PrintWriter(new FileWriter(outDir + "/functions.tsv"));
        FunctionIterator fit = currentProgram.getFunctionManager().getFunctions(true);
        while (fit.hasNext()) {
            Function f = fit.next();
            long size = 0;
            try { size = f.getBody().getNumAddresses(); } catch (Exception ignore) {}
            inv.println(f.getEntryPoint() + "\t" + size + "\t" + f.getName());
        }
        inv.close();
        di.dispose();
    }

    void addNeedle(Function f, String n) {
        Set<String> s = funcNeedles.get(f);
        if (s == null) { s = new HashSet<>(); funcNeedles.put(f, s); }
        s.add(n);
    }

    void enqueue(Function f) { }

    String sanitize(String s) {
        return s.replaceAll("[^A-Za-z0-9_.$-]", "_");
    }
}
