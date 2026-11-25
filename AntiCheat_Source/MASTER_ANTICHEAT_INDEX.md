# Complete Multi-Layer Anti-Cheat & Security Source Reconstruction

- **Client Version:** `version-2c6fd5e09aaf4cfa`
- **Layer 1 (`RobloxPlayerBeta.dll` — Hyperion / Byfron):** `1956` procedures (`1715` full C++ AST, `241` structured asm fallback), `123` dynamic APIs resolved
- **Layer 2 (`RobloxPlayerBeta.exe` — Engine Internal Security):** `23` subsystems (`RBX::IntegrityService`, `SecurityChannelJob`, `ServerSecurityCheckJob`, `ClientQoS*`, `tempest`, `.byfron`)

## Layer 1 — `01_Hyperion_Byfron_DLL/`

| File | Subsystem | Procedures |
|---|---|---:|
| `01_Hyperion_Byfron_DLL/src/01_entry_and_loader.cpp` | Entrypoints, TLS & Initialization | 11 |
| `01_Hyperion_Byfron_DLL/src/02_exception_and_dispatcher.cpp` | Exception & Page Fault Dispatchers | 9 |
| `01_Hyperion_Byfron_DLL/src/03_memory_and_section_handlers.cpp` | Virtual Memory & Section Handlers | 11 |
| `01_Hyperion_Byfron_DLL/src/04_thread_and_process_handlers.cpp` | Thread, Process & Worker Routines | 10 |
| `01_Hyperion_Byfron_DLL/src/05_cfg_and_callbacks.cpp` | Control Flow Guard & User Callback Dispatchers | 7 |
| `01_Hyperion_Byfron_DLL/src/06_syscall_wrappers.cpp` | Inline Syscall Routines | 14 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_00_0x6e1c0_0x2fedd0.cpp` | Internal Routines Cluster 00 (0x6e1c0 .. 0x2fedd0) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_01_0x2fee50_0x3428e0.cpp` | Internal Routines Cluster 01 (0x2fee50 .. 0x3428e0) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_02_0x3429f0_0x5b5c20.cpp` | Internal Routines Cluster 02 (0x3429f0 .. 0x5b5c20) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_03_0x711a30_0x762030.cpp` | Internal Routines Cluster 03 (0x711a30 .. 0x762030) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_04_0x762070_0x85b360.cpp` | Internal Routines Cluster 04 (0x762070 .. 0x85b360) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_05_0x85b450_0x8e9f10.cpp` | Internal Routines Cluster 05 (0x85b450 .. 0x8e9f10) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_06_0x8ea080_0x98e380.cpp` | Internal Routines Cluster 06 (0x8ea080 .. 0x98e380) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_07_0x98e4f0_0x9f9410.cpp` | Internal Routines Cluster 07 (0x98e4f0 .. 0x9f9410) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_08_0x9f9710_0xa99560.cpp` | Internal Routines Cluster 08 (0x9f9710 .. 0xa99560) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_09_0xa99690_0xaa3854.cpp` | Internal Routines Cluster 09 (0xa99690 .. 0xaa3854) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_10_0xaa3870_0xaf1f90.cpp` | Internal Routines Cluster 10 (0xaa3870 .. 0xaf1f90) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_11_0xaf2140_0xb65830.cpp` | Internal Routines Cluster 11 (0xaf2140 .. 0xb65830) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_12_0xb65b14_0xc94ee0.cpp` | Internal Routines Cluster 12 (0xb65b14 .. 0xc94ee0) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_13_0xc95074_0xd1d1a0.cpp` | Internal Routines Cluster 13 (0xc95074 .. 0xd1d1a0) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_14_0xd1d280_0xda3b10.cpp` | Internal Routines Cluster 14 (0xd1d280 .. 0xda3b10) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_15_0xda3b30_0xe65760.cpp` | Internal Routines Cluster 15 (0xda3b30 .. 0xe65760) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_16_0xe66360_0xe9b330.cpp` | Internal Routines Cluster 16 (0xe66360 .. 0xe9b330) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_17_0xe9b350_0xef0a30.cpp` | Internal Routines Cluster 17 (0xe9b350 .. 0xef0a30) | 100 |
| `01_Hyperion_Byfron_DLL/src/clusters/cluster_18_0xef7170_0xf3f345.cpp` | Internal Routines Cluster 18 (0xef7170 .. 0xf3f345) | 94 |

## Layer 2 — `02_Roblox_Engine_Security_EXE/`

| File | Engine Class / Section | Virtuals / Blocks | Decrypted Now |
|---|---|---:|---:|
| `02_Roblox_Engine_Security_EXE/00_exe_tempest_and_byfron_bridge.cpp` | `EXE tempest & .byfron Bootstrap Bridge` | 3 | 3 |
| `02_Roblox_Engine_Security_EXE/01__A0xfc8aa143__AppQoSDefaultImpl.cpp` | `?A0xfc8aa143::AppQoSDefaultImpl` | 10 | 3 |
| `02_Roblox_Engine_Security_EXE/02_RBX__AppPlatformQoSEmergencyHandler.cpp` | `RBX::AppPlatformQoSEmergencyHandler` | 6 | 0 |
| `02_Roblox_Engine_Security_EXE/03_RBX__AppQoSInstance.cpp` | `RBX::AppQoSInstance` | 1 | 1 |
| `02_Roblox_Engine_Security_EXE/04_RBX__AppQoSSessionContext.cpp` | `RBX::AppQoSSessionContext` | 1 | 1 |
| `02_Roblox_Engine_Security_EXE/05_RBX__IAppPlatformQoSEmergencyHandler.cpp` | `RBX::IAppPlatformQoSEmergencyHandler` | 6 | 1 |
| `02_Roblox_Engine_Security_EXE/06_RBX__IAppPlatformQoSEmergencyObservable.cpp` | `RBX::IAppPlatformQoSEmergencyObservable` | 3 | 2 |
| `02_Roblox_Engine_Security_EXE/07_RBX__IntegrityService.cpp` | `RBX::IntegrityService` | 76 | 44 |
| `02_Roblox_Engine_Security_EXE/08_RBX__NativeAppPlatformQoSEmergencyHandler.cpp` | `RBX::NativeAppPlatformQoSEmergencyHandler` | 6 | 0 |
| `02_Roblox_Engine_Security_EXE/09_RBX__Network__DeserializedClientQoSItem.cpp` | `RBX::Network::DeserializedClientQoSItem` | 3 | 3 |
| `02_Roblox_Engine_Security_EXE/10_RBX__Network__Replicator__ClientQoSItem.cpp` | `RBX::Network::Replicator::ClientQoSItem` | 9 | 6 |
| `02_Roblox_Engine_Security_EXE/11_RBX__Network__SecurityChannelJob.cpp` | `RBX::Network::SecurityChannelJob` | 9 | 7 |
| `02_Roblox_Engine_Security_EXE/12_RBX__Network__ServerSecurityCheckJob.cpp` | `RBX::Network::ServerSecurityCheckJob` | 14 | 11 |
| `02_Roblox_Engine_Security_EXE/13_RBX__Reflection__RBX__Enums__W4StreamingIntegrityMode__TypedProp.cpp` | `RBX::Reflection::RBX::Enums::W4StreamingIntegrityMode::TypedPropertyDescriptor<>::GetSet` | 7 | 1 |
| `02_Roblox_Engine_Security_EXE/14_RBX__Reflection__RBX__Security__W4Capabilities__TypedPropertyDes.cpp` | `RBX::Reflection::RBX::Security::W4Capabilities::TypedPropertyDescriptor<>::GetSet` | 7 | 2 |
| `02_Roblox_Engine_Security_EXE/15_RBX__Security__ClientQoSContext.cpp` | `RBX::Security::ClientQoSContext` | 1 | 0 |
| `02_Roblox_Engine_Security_EXE/16_RBX__Security__ClientQoSImpl.cpp` | `RBX::Security::ClientQoSImpl` | 21 | 9 |
| `02_Roblox_Engine_Security_EXE/17_RBX__Security__ClientQoSImplWindows.cpp` | `RBX::Security::ClientQoSImplWindows` | 25 | 9 |
| `02_Roblox_Engine_Security_EXE/18_RBX__Security__QuicSessionCrypto.cpp` | `RBX::Security::QuicSessionCrypto` | 3 | 0 |
| `02_Roblox_Engine_Security_EXE/19_RBX__Security__RakPeerCrypto.cpp` | `RBX::Security::RakPeerCrypto` | 1 | 0 |
| `02_Roblox_Engine_Security_EXE/20_RBX__Security__SessionCrypto.cpp` | `RBX::Security::SessionCrypto` | 1 | 0 |
| `02_Roblox_Engine_Security_EXE/21_RBX__Security__uint_error.cpp` | `RBX::Security::uint_error` | 2 | 2 |
| `02_Roblox_Engine_Security_EXE/22_XZ__2__RBX__VAppQoSInstance__SA_AV__SubsystemHandle__RBX___0A__R.cpp` | `XZ::2::RBX::VAppQoSInstance::SA?AV?$SubsystemHandle::RBX::$0A::RBX::VAppQoSInstance::Subsystem<>::RBX::RBX::VAppQoSInstance::V?$SubsystemDefaultFactory::?1???$startup::SubsystemHandleImplForT` | 5 | 4 |
