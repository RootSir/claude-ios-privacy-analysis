import ghidra.app.script.GhidraScript;

// Disable Objective-C analyzers (the "Objective-C 2 Metadata" analyzer crashes
// on this binary's type encodings) before auto-analysis starts.
public class PreDisableObjc extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] names = {
            "Objective-C Type Metadata Analyzer",
            "Demangler Swift",
            "Demangler GNU",
            "Demangler Rust",
            "Decompiler Parameter ID",
            "Decompiler Switch Analysis"
        };
        for (String n : names) {
            try {
                setAnalysisOption(currentProgram, n, "false");
                println("disabled: " + n);
            } catch (Exception e) {
                println("could not disable: " + n + " -> " + e);
            }
        }
    }
}
