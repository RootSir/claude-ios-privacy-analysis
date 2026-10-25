# 关键反编译代码片段（用户画像 / 隐私审查 / 硬件指纹）

从 58 个定向导出的 Ghidra 伪代码文件中筛出与用户画像、隐私审查、硬件指纹直接相关的函数。全部为 App Store 已脱壳样本（v1.261023.20，无本地符号，函数名为地址）。Ghidra 对无符号 Swift 二进制会丢失上下文寄存器（`unaff_x20`），函数内的对象归属标注见报告第 9 章证据审计。

## 目录索引

### 请求头与设备身份
| 文件 | 函数 | 内容 |
|---|---|---|
| `00003__FUN_100ababe8__0x100ababe8.c` | ClaudeNetworkingCommon 请求头构建闭包 | 全部 Anthropic 头（Device-ID、Geo-Region、Client-*）+ 每请求随机 UUID + X-Authorization + "US" 兜底字面量 |
| `fu_001__0x100abba6c.c` | X-Authorization 值获取 | 授权头取值路径 |
| `fu_007__0x100abb0f0.c` | AppIdentifier 字典查找 | Geo-Region 缓存字典读取 |
| `fu_016__0x100abb1f0.c` | 头构建器 thunk | 模块内调用入口 |
| `anthropic-request-headers.txt` | — | 字符串区原始证据 |

### 硬件指纹与设备证明
| 文件 | 函数 | 内容 |
|---|---|---|
| `00001__FUN_1050d20e4__0x1050d20e4.c` | IDFV 采集 | identifierForVendor |
| `00040__FUN_104412878__0x104412878.c` | AppAttestEnroller | App Attest 注册（`ClaudeDeviceCheck/AppAttestEnroller.swift`） |
| `00028__FUN_10440fb28__0x10440fb28.c` | AppAttest 注册链 | App Attest 流程 |
| `00022__FUN_10441be18__0x10441be18.c` | DeviceCheckTokenReporter | DeviceCheck token 上报（`DeviceCheckTokenReporter.swift`） |
| `00029__FUN_1010aff78__0x1010aff78.c` | TrustedDeviceStore | 可信设备存储 |
| `00006__FUN_1013db750__0x1013db750.c` | Reattest 轮换 | `anthropic.reattest_rotate.v1` 协议标签 |
| `00034__FUN_1058ecc60__0x1058ecc60.c` | requestWhenInUseAuthorization | 定位授权 |

### 用户画像采集
| 文件 | 函数 | 内容 |
|---|---|---|
| `00013__FUN_1055439e8__0x1055439e8.c` | 蜂窝网络判定 | getifaddrs + `pdp_ip` 前缀匹配（Google Maps SDK） |
| `00042__FUN_10459a7a8__0x10459a7a8.c` | 本地 IP 枚举 | getifaddrs + IPv4/IPv6 地址收集（Google Maps SDK） |
| `00012__FUN_1058dec00__0x1058dec00.c` | mobileCountryCode | Datadog 运营商国家码访问器 |
| `00007__FUN_105903140__0x105903140.c` | setTimezoneOffsetSeconds: | Datadog 时区写入 |
| `00009__FUN_10590b700__0x10590b700.c` | systemTimeZone | 时区读取 |
| `fu_011__0x10504778c.c` | readTimezoneOffset_ | 时区读取（持久化链路） |
| `fu_012__0x105047fb8.c` | storeTimezoneOffset_ | 时区写入本地文件 |
| `fu_008__0x1043c1a94.c` | KSCrash 崩溃上下文字典 | 崩溃报告设备画像全字段构建（294 行） |

### 字段清单（从二进制字符串区直接提取）
| 文件 | 内容 |
|---|---|
| `sift-device-properties-fields.txt` | Sift devprops payload 全字段（SIM 国家码、IDFV、设备名、本地地址列表、页面标题、电池/贴近状态等 28 项） |
| `sift-jailbreak-paths-decoded.txt` | 越狱取证路径清单（ROT13 解码后，24 条） |
| `kscrash-device-profile-fields.txt` | 崩溃报告全字段（77 项） |

## 复核要点
- "US" 兜底字面量：见报告证据审计修正 1——字面量与写入路径确证，触发条件（ctx+0x48）未还原。
- `X-Client-Time-Format`：已在复核中确认归属 Google Maps SDK，不在本目录。
- Sift 字段表与 Datadog 字段的通道归属：见证据审计修正 2。
