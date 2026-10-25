# Claude iOS App 逆向分析：隐私采集与风控信号全景

对 Claude iOS 客户端（v1.261023.20，App Store 已脱壳样本）的完整静态逆向研究。Ghidra 全量自动分析 **688,893 个函数**（7,190 秒），定向导出 41 个安全相关函数的 C 伪代码，交叉验证工具链：otool / nm / strings / plutil / codesign。

**完整报告（9 章，中文）**：[`report/claude-ios-privacy-report.html`](report/claude-ios-privacy-report.html) — 浏览器直接打开。

> ⚠️ 本仓库**不含** IPA、二进制或任何 Anthropic 版权材料，仅含分析产出。本工作是隐私透明度研究，**不构成任何规避平台风控的操作指引**。

## 核心发现（TL;DR）

1. **客户端没有 VPN 检测和真实 IP 探测逻辑**。全程序反编译后仅有的 2 处 `getifaddrs` 调用者均归属 Google Maps SDK（蜂窝判定 `pdp_ip` + 本地 IPv4/IPv6 枚举）；无 ipify/STUN 类客户端探测。出口 IP 判定完全在服务端。
2. **设备身份是硬件级、全流程绑定的**：每个请求携带 `Anthropic-Device-ID`；登录、会话、内购、积分兑换全部要求 App Attest 证明（`LoginAttestation` / `SessionReattest` 周期性重证明 / `bind_attestation`）；DeviceCheck token 随时刷新。
3. **商业反欺诈平台 Sift Science 完整嵌入**：设备属性采集 + Keychain 持久标识（重装不消失）+ 首次 IDFV，上报 `api3.siftscience.com/mobile_events`；遥测管道存在 `siftOnly / fraudMonitoring` 专用事件分类。
4. **SIM 卡国家码与运营商信息由 Datadog SDK 采集上报**（`carrierISOCountryCode` / `radioAccessTechnology`）——**走 VPN 也暴露**；时区偏移经 Datadog（`setTimezoneOffsetSeconds:`，反编译定位）与 Firebase GDT 上报。
5. **`X-Client-Geo-Region` 请求头**的值来自服务端下发缓存，缺省兜底**硬编码 `"US"`**（Swift 小字符串字面量从机器码解出）；同一函数还有每请求随机 UUID 与 `X-Authorization` 头。
6. **Sentry Session Replay（屏幕会话回放）模块完整集成**，隐私级别可配置，启用状态由服务端决定。
7. 一方模块经 Swift 源码路径断言钉死：`ClaudeDeviceCheck/DeviceCheckTokenReporter.swift`、`ClaudeTrustedDevice/TrustedDeviceStore.swift`（`anthropic.reattest.v1`）、`ClaudeSentry/SentryBootstrap.swift`。
8. **隐私正向项**：发送图片剥离位置 EXIF；无 IDFA；无通讯录/蓝牙/本地网络/后台定位权限；定位仅 WhenInUse。

封号维度分析（服务端执行架构、五层持久设备身份链、一致性校验逻辑）见报告第 8 章。**封号规则本身在服务端，二进制中不可见**——本仓库证明的是信号采集链路的存在，不声称任何具体封号归因。

## 证据分级

报告内每个结论标注三级：**【实锤】**（静态直接可见，附地址/字符串）／**【推断】**（基于组件标准行为）／**【未发现】**（静态未找到，≠ 运行时绝无）。

## 目录结构

```
├── report/claude-ios-privacy-report.html   # 完整报告（独立 HTML，9 章）
├── tools/
│   ├── DecompTargets.java                  # Ghidra 定向反编译导出脚本
│   │                                       #   （字符串引用 + 导入符号调用者 + 指定地址追踪）
│   ├── PreDisableObjc.java                 # 禁用崩溃的 ObjC 分析器与逐符号派生进程的 Swift 解串器
│   └── build_standalone.py                 # 报告独立版打包器
└── evidence/
    ├── decompiled/  (41 个 .c)             # 定向导出的伪代码（头部含匹配原因与地址）
    ├── index.tsv                           # 函数 ↔ 匹配 needle 索引
    └── functions.tsv                       # 全量 688,893 函数清单（地址/大小/符号）
```

## 方法与复现要点

- Ghidra 12.1.4 headless（JDK 21），AARCH64:AppleSilicon:swift，全量分析 7,190 秒，工程库 2.1 GB
- 排障记录（复现时会遇到）：① ObjC 元数据分析器对本样本类型编码崩溃，Ghidra 12 中的名字是 `Objective-C Type Metadata Analyzer`；② `Demangler Swift` 对每条符号派生一个 `swift-demangle` 子进程，几十万符号需数小时，建议禁用；③ `-analysisTimeoutPerFile` 单位是**秒**不是分钟；④ Ghidra 拒绝在含点前缀目录组件（如 `.zcode`）的路径下建工程；⑤ 分析中断后可用 `-process` 续跑，无需重新导入
- 无本地符号（App Store strip），函数名以地址命名；模块归属依据地址区间 + 字符串邻域 + 源码路径断言

## 局限

静态分析 ≠ 运行时观测；未做动态抓包验证字段实际取值；封号阈值与规则不可见。

## License

分析产出与脚本以 [MIT](LICENSE) 发布，仅指本仓库内容，不含任何 Anthropic 或 Apple 的版权材料。
