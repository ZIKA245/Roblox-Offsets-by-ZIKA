/*  Dumped By       : ZIKA
/*  Dumped With     : ZIKA Dumper
/*  Roblox Version  : version-2c6fd5e09aaf4cfa
/*  Dumper Version  : 4.0.0
/*  Dumped At       : 13:33:30 2026-11-24
/*  INT3 & Thunks   : 4898
*/

#pragma once

#include <cstdint>
#include <string>

namespace PEReport {
    inline constexpr uintptr_t ExeBase = 0x7ff65b250000;
    inline constexpr uintptr_t DllBase = 0x7fffa4770000;
    inline constexpr uintptr_t ExeTempestEntryRva = 0x9366004;
    inline constexpr uintptr_t ExeTempestTargetDllRva = 0xf35e30;
    inline constexpr uintptr_t ExeResolvedCrtOepRva = 0x5de50c0;
    inline constexpr uintptr_t DllEntryPointRva = 0xcb7f00;
    inline constexpr uintptr_t DllEntryRunRva = 0x7f5ce0;
    inline constexpr size_t TextCachedPages = 7401;
    inline constexpr size_t TextTotalPages = 25654;
    inline constexpr size_t TotalIatThunks = 1830;
    inline constexpr size_t TotalNonPaddingInt3Traps = 42456;
}

/* Sample IAT Thunks & Non-Padding INT3 Traps:
   [EXE] trap_isolated @ 0x1a4e -> INT3 (CC)
   [EXE] trap_isolated @ 0x2377 -> INT3 (CC)
   [EXE] trap_isolated @ 0x43d5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x44c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4d40 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4d4a -> INT3 (CC)
   [EXE] trap_isolated @ 0x4d54 -> INT3 (CC)
   [EXE] trap_isolated @ 0x50cb -> INT3 (CC)
   [EXE] trap_isolated @ 0x5262 -> INT3 (CC)
   [EXE] trap_isolated @ 0x58a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x739c -> INT3 (CC)
   [EXE] trap_isolated @ 0x797d -> INT3 (CC)
   [EXE] trap_isolated @ 0x976e -> INT3 (CC)
   [EXE] trap_isolated @ 0x9f60 -> INT3 (CC)
   [EXE] trap_isolated @ 0xa450 -> INT3 (CC)
   [EXE] trap_isolated @ 0xb6f4 -> INT3 (CC)
   [EXE] trap_isolated @ 0xc580 -> INT3 (CC)
   [EXE] trap_isolated @ 0xcef4 -> INT3 (CC)
   [EXE] trap_isolated @ 0xddd1 -> INT3 (CC)
   [EXE] trap_isolated @ 0xe9c3 -> INT3 (CC)
   [EXE] trap_isolated @ 0xef38 -> INT3 (CC)
   [EXE] trap_isolated @ 0xfd38 -> INT3 (CC)
   [EXE] iat_thunk @ 0x11410 -> ntdll.dll!RtlWakeAddressSingle
   [EXE] trap_isolated @ 0x13042 -> INT3 (CC)
   [EXE] trap_isolated @ 0x130a6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x147e3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x148e9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x14d4d -> INT3 (CC)
   [EXE] trap_isolated @ 0x14d62 -> INT3 (CC)
   [EXE] trap_isolated @ 0x1851a -> INT3 (CC)
   [EXE] trap_isolated @ 0x1cba3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x1cbe3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x1cc47 -> INT3 (CC)
   [EXE] trap_isolated @ 0x1cc87 -> INT3 (CC)
   [EXE] trap_isolated @ 0x1cca3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x1cce9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x1cd4d -> INT3 (CC)
   [EXE] trap_isolated @ 0x1d3c2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x2f912 -> INT3 (CC)
   [EXE] trap_isolated @ 0x2f92a -> INT3 (CC)
   [EXE] trap_isolated @ 0x2fba7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x2fd27 -> INT3 (CC)
   [EXE] trap_isolated @ 0x2fd76 -> INT3 (CC)
   [EXE] trap_isolated @ 0x2ff06 -> INT3 (CC)
   [EXE] trap_isolated @ 0x2ffe1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3001d -> INT3 (CC)
   [EXE] trap_isolated @ 0x30133 -> INT3 (CC)
   [EXE] trap_isolated @ 0x30153 -> INT3 (CC)
   [EXE] trap_isolated @ 0x301a7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3033a -> INT3 (CC)
   [EXE] trap_isolated @ 0x30389 -> INT3 (CC)
   [EXE] trap_isolated @ 0x304a1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x304c1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x30515 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3083a -> INT3 (CC)
   [EXE] trap_isolated @ 0x3087b -> INT3 (CC)
   [EXE] trap_isolated @ 0x30cac -> INT3 (CC)
   [EXE] trap_isolated @ 0x30ced -> INT3 (CC)
   [EXE] trap_isolated @ 0x30d74 -> INT3 (CC)
   [EXE] trap_isolated @ 0x30d94 -> INT3 (CC)
   [EXE] trap_isolated @ 0x30de8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x30f9c -> INT3 (CC)
   [EXE] trap_isolated @ 0x3402a -> INT3 (CC)
   [EXE] trap_isolated @ 0x340b8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x34141 -> INT3 (CC)
   [EXE] trap_isolated @ 0x355a9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x35887 -> INT3 (CC)
   [EXE] trap_isolated @ 0x358e7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x35911 -> INT3 (CC)
   [EXE] trap_isolated @ 0x359f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x35a7e -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e1ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e35e -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e447 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e4f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e4fa -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e5ce -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e6c1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e773 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e778 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e832 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e84b -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e874 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e908 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e90c -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e9d2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3e9eb -> INT3 (CC)
   [EXE] trap_isolated @ 0x3ea14 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3eabb -> INT3 (CC)
   [EXE] trap_isolated @ 0x3ead2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3ebc2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3ede2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3eff9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3f0f8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3f269 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3f368 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3f4f9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3f5f8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3f769 -> INT3 (CC)
   [EXE] trap_isolated @ 0x3f868 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4226a -> INT3 (CC)
   [EXE] trap_isolated @ 0x42d07 -> INT3 (CC)
   [EXE] trap_isolated @ 0x42e76 -> INT3 (CC)
   [EXE] trap_isolated @ 0x42ea8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x43969 -> INT3 (CC)
   [EXE] trap_isolated @ 0x43974 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4399e -> INT3 (CC)
   [EXE] trap_isolated @ 0x43a1e -> INT3 (CC)
   [EXE] trap_isolated @ 0x43dfc -> INT3 (CC)
   [EXE] trap_isolated @ 0x43e98 -> INT3 (CC)
   [EXE] trap_isolated @ 0x43fce -> INT3 (CC)
   [EXE] trap_isolated @ 0x4c410 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4da5b -> INT3 (CC)
   [EXE] trap_isolated @ 0x4db17 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4deec -> INT3 (CC)
   [EXE] trap_isolated @ 0x4def7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4ec40 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4ecfb -> INT3 (CC)
   [EXE] trap_isolated @ 0x4ed94 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4ee7c -> INT3 (CC)
   [EXE] trap_isolated @ 0x4f232 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4f456 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4f504 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4f647 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4f6c7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4f898 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4f90d -> INT3 (CC)
   [EXE] trap_isolated @ 0x4faa9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4fb24 -> INT3 (CC)
   [EXE] trap_isolated @ 0x4fe30 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5b766 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5b7d0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5b839 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5b85c -> INT3 (CC)
   [EXE] trap_isolated @ 0x5b8a4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5b90b -> INT3 (CC)
   [EXE] trap_isolated @ 0x5b975 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5b996 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5b9dc -> INT3 (CC)
   [EXE] trap_isolated @ 0x5ba45 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5baad -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bb18 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bb81 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bba4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bbec -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bc53 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bcbd -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bcde -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bd24 -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bd8d -> INT3 (CC)
   [EXE] trap_isolated @ 0x5bf9e -> INT3 (CC)
   [EXE] trap_isolated @ 0x60268 -> INT3 (CC)
   [EXE] trap_isolated @ 0x602d2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6033d -> INT3 (CC)
   [EXE] trap_isolated @ 0x60360 -> INT3 (CC)
   [EXE] trap_isolated @ 0x603a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x60413 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6047e -> INT3 (CC)
   [EXE] trap_isolated @ 0x604a1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x604e9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x60554 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6062a -> INT3 (CC)
   [EXE] trap_isolated @ 0x60695 -> INT3 (CC)
   [EXE] trap_isolated @ 0x606b8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x60700 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6076b -> INT3 (CC)
   [EXE] trap_isolated @ 0x607d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x607f9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x60841 -> INT3 (CC)
   [EXE] trap_isolated @ 0x608ac -> INT3 (CC)
   [EXE] trap_isolated @ 0x60ac0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x60cac -> INT3 (CC)
   [EXE] trap_isolated @ 0x63013 -> INT3 (CC)
   [EXE] trap_isolated @ 0x63061 -> INT3 (CC)
   [EXE] trap_isolated @ 0x630a7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6310e -> INT3 (CC)
   [EXE] trap_isolated @ 0x63127 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6322d -> INT3 (CC)
   [EXE] trap_isolated @ 0x63273 -> INT3 (CC)
   [EXE] trap_isolated @ 0x632da -> INT3 (CC)
   [EXE] trap_isolated @ 0x632f3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x63341 -> INT3 (CC)
   [EXE] trap_isolated @ 0x63387 -> INT3 (CC)
   [EXE] trap_isolated @ 0x633ee -> INT3 (CC)
   [EXE] trap_isolated @ 0x63407 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6350d -> INT3 (CC)
   [EXE] trap_isolated @ 0x63814 -> INT3 (CC)
   [EXE] trap_isolated @ 0x63989 -> INT3 (CC)
   [EXE] trap_isolated @ 0x63a27 -> INT3 (CC)
   [EXE] trap_isolated @ 0x63ce6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x63d71 -> INT3 (CC)
   [EXE] trap_isolated @ 0x63ee1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6423e -> INT3 (CC)
   [EXE] trap_isolated @ 0x642c9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x643b9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x64415 -> INT3 (CC)
   [EXE] trap_isolated @ 0x645bc -> INT3 (CC)
   [EXE] trap_isolated @ 0x64618 -> INT3 (CC)
   [EXE] trap_isolated @ 0x646e7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x64743 -> INT3 (CC)
   [EXE] trap_isolated @ 0x648db -> INT3 (CC)
   [EXE] trap_isolated @ 0x64937 -> INT3 (CC)
   [EXE] trap_isolated @ 0x649a1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x64a7c -> INT3 (CC)
   [EXE] trap_isolated @ 0x64ad8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x64c6b -> INT3 (CC)
   [EXE] trap_isolated @ 0x64cc7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x64f27 -> INT3 (CC)
   [EXE] trap_isolated @ 0x65074 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73e80 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73ef5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73f2a -> INT3 (CC)
   [EXE] trap_isolated @ 0x73f55 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73f7c -> INT3 (CC)
   [EXE] trap_isolated @ 0x73fdd -> INT3 (CC)
   [EXE] trap_isolated @ 0x9e771 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9e829 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9e83a -> INT3 (CC)
   [EXE] trap_isolated @ 0x9e8b9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9e8cd -> INT3 (CC)
   [EXE] trap_isolated @ 0x9e9ce -> INT3 (CC)
   [EXE] trap_isolated @ 0x9e9e2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fb65 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fb6c -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fb72 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fb79 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fd05 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fd11 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fd18 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fd1e -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fd25 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fe99 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9fea5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9feac -> INT3 (CC)
   [EXE] trap_isolated @ 0x9feb2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9feb9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ca095 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ca15e -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ca3dd -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ca440 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ca50c -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ca598 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ca617 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6cc0c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6cc750 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ccdea -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ccedb -> INT3 (CC)
   [EXE] trap_isolated @ 0x6cd824 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6cee5e -> INT3 (CC)
   [EXE] trap_isolated @ 0x6cf286 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d0a4d -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d1490 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d14fe -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d2029 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d20d7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d214d -> INT3 (CC)
   [EXE] iat_thunk @ 0x6d28ed -> ntdll.dll!RtlInitializeConditionVariable
   [EXE] trap_isolated @ 0x6d2a4b -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d3100 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d33bd -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d3a01 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d4231 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d4263 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d4280 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d428b -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d44f2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d45e9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d4a5b -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d612d -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d640a -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d73ad -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d8603 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d8abb -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d92a2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6d9b40 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da13c -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da48b -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da508 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da601 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da63d -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da64a -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da678 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da91a -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da92d -> INT3 (CC)
   [EXE] trap_isolated @ 0x6da938 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6db040 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6db13e -> INT3 (CC)
   [EXE] trap_isolated @ 0x6db444 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6db4f7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6dba23 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6dbbaa -> INT3 (CC)
   [EXE] iat_thunk @ 0x6dbd61 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x6dc2ac -> INT3 (CC)
   [EXE] iat_thunk @ 0x6dc597 -> KERNELBASE.dll!RaiseException
   [EXE] iat_thunk @ 0x6dc5d1 -> KERNELBASE.dll!InitializeCriticalSectionEx
   [EXE] iat_thunk @ 0x6dc97f -> HyperionLazy(0xc53c)
   [EXE] trap_isolated @ 0x6dcb90 -> INT3 (CC)
   [EXE] iat_thunk @ 0x6dcc35 -> combase.dll!CoTaskMemFree
   [EXE] trap_isolated @ 0x6e1778 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e1820 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e2152 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e24a7 -> INT3 (CC)
   [EXE] iat_thunk @ 0x6e2511 -> HyperionLazy(0xdebc)
   [EXE] trap_isolated @ 0x6e4e11 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e4e1c -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e7663 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e79f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e7c52 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e7c55 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e7dab -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e7f6c -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e813b -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e82c1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e8301 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e853e -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e8557 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6e85b8 -> INT3 (CC)
   [EXE] cd03 @ 0x6ea512 -> INT 3 (CD 03)
   [EXE] trap_isolated @ 0x6ea51c -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea5a3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea5de -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea638 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea6b9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea714 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea73b -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea768 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea779 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea792 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea879 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ea892 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eaa02 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eaa69 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eaa95 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eaaba -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eab65 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eab68 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eacf0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eadb8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eae8e -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eaeee -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb26a -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb293 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb2ac -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb2b9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb2c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb6a7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb7ca -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb847 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb857 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb868 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6eb878 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ebd74 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ebe63 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ebf20 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ebf30 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f41e2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f4871 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f4b28 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f4c20 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f4eec -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f5527 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f584d -> INT3 (CC)
   [EXE] iat_thunk @ 0x6f58cf -> KERNELBASE.dll!CloseHandle
   [EXE] trap_isolated @ 0x6f5db8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x6f5e71 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x6f5ef8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f5fb8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f6af4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f6be5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f6beb -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f6f37 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f71a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f7208 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f7258 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f76ea -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f79d4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f7b44 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f7b6a -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f7b75 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f7c86 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f8749 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f8754 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f8e67 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f8e6d -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f9131 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f91f3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f932e -> INT3 (CC)
   [EXE] iat_thunk @ 0x6f951e -> KERNELBASE.dll!CloseHandle
   [EXE] trap_isolated @ 0x6f96d3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f9b22 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f9b72 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f9e82 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6f9f6e -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fa010 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fa2e7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fa77c -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fa870 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fab0c -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fac1a -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fae87 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6faeda -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fb045 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fb2d2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fb3de -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fb4e8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fb59a -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fb802 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fba5b -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fbaca -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fbb63 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fbfc9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fc059 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fc23a -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fcdcc -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fce17 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fce4b -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fce51 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fd0fa -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fd452 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fd717 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fd81d -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fd823 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fd941 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fd9a4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6fd9c0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x6fddd2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x6fe341 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ff1a7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ff2a6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ff5f6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ff7cb -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ff857 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ff940 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ffa0c -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ffc25 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ffdd0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ffe35 -> INT3 (CC)
   [EXE] trap_isolated @ 0x6ffeda -> INT3 (CC)
   [EXE] trap_isolated @ 0x700069 -> INT3 (CC)
   [EXE] trap_isolated @ 0x70047e -> INT3 (CC)
   [EXE] trap_isolated @ 0x700b49 -> INT3 (CC)
   [EXE] trap_isolated @ 0x700c90 -> INT3 (CC)
   [EXE] trap_isolated @ 0x700c96 -> INT3 (CC)
   [EXE] trap_isolated @ 0x700de1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x700e78 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7010f8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7018fd -> INT3 (CC)
   [EXE] trap_isolated @ 0x701b71 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7025ea -> INT3 (CC)
   [EXE] trap_isolated @ 0x7026ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x7026f8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x702810 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x702add -> INT3 (CC)
   [EXE] trap_isolated @ 0x702c84 -> INT3 (CC)
   [EXE] trap_isolated @ 0x702f88 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7032e0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x703335 -> INT3 (CC)
   [EXE] trap_isolated @ 0x703347 -> INT3 (CC)
   [EXE] trap_isolated @ 0x704529 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7047b9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x704933 -> INT3 (CC)
   [EXE] iat_thunk @ 0x704ab5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x704e30 -> INT3 (CC)
   [EXE] trap_isolated @ 0x704e95 -> INT3 (CC)
   [EXE] trap_isolated @ 0x70500d -> INT3 (CC)
   [EXE] trap_isolated @ 0x705730 -> INT3 (CC)
   [EXE] trap_isolated @ 0x705781 -> INT3 (CC)
   [EXE] trap_isolated @ 0x705795 -> INT3 (CC)
   [EXE] trap_isolated @ 0x705ec1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x706254 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7062b2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x707b04 -> INT3 (CC)
   [EXE] trap_isolated @ 0x707ba4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x707ba7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x707c94 -> INT3 (CC)
   [EXE] trap_isolated @ 0x707c97 -> INT3 (CC)
   [EXE] trap_isolated @ 0x707cd1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x707db1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x707ed7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x707ee2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x70812d -> INT3 (CC)
   [EXE] iat_thunk @ 0x708355 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x70849a -> INT3 (CC)
   [EXE] trap_isolated @ 0x708700 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7090da -> INT3 (CC)
   [EXE] trap_isolated @ 0x70918d -> INT3 (CC)
   [EXE] trap_isolated @ 0x709264 -> INT3 (CC)
   [EXE] trap_isolated @ 0x70934d -> INT3 (CC)
   [EXE] trap_isolated @ 0x709746 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7098a7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x709a3a -> INT3 (CC)
   [EXE] iat_thunk @ 0x709ab4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x709cc4 -> HyperionLazy(0xe9fc)
   [EXE] iat_thunk @ 0x709dab -> HyperionLazy(0x897c)
   [EXE] trap_isolated @ 0x711d70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x71217b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7121a4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7121aa -> INT3 (CC)
   [EXE] trap_isolated @ 0x7121b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7121b6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x71246b -> INT3 (CC)
   [EXE] trap_isolated @ 0x712768 -> INT3 (CC)
   [EXE] trap_isolated @ 0x712a23 -> INT3 (CC)
   [EXE] trap_isolated @ 0x712cc8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x712d97 -> INT3 (CC)
   [EXE] trap_isolated @ 0x712d9d -> INT3 (CC)
   [EXE] trap_isolated @ 0x727012 -> INT3 (CC)
   [EXE] trap_isolated @ 0x727018 -> INT3 (CC)
   [EXE] trap_isolated @ 0x72701e -> INT3 (CC)
   [EXE] trap_isolated @ 0x727024 -> INT3 (CC)
   [EXE] trap_isolated @ 0x72702a -> INT3 (CC)
   [EXE] trap_isolated @ 0x72703c -> INT3 (CC)
   [EXE] trap_isolated @ 0x72704e -> INT3 (CC)
   [EXE] trap_isolated @ 0x727a79 -> INT3 (CC)
   [EXE] iat_thunk @ 0x727b38 -> USER32.dll!sub_0x17860
   [EXE] trap_isolated @ 0x727c86 -> INT3 (CC)
   [EXE] trap_isolated @ 0x727c89 -> INT3 (CC)
   [EXE] trap_isolated @ 0x727e2a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7281b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7281c4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x728220 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7283f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x728851 -> INT3 (CC)
   [EXE] trap_isolated @ 0x72885a -> INT3 (CC)
   [EXE] trap_isolated @ 0x728f40 -> INT3 (CC)
   [EXE] trap_isolated @ 0x72cb34 -> INT3 (CC)
   [EXE] trap_isolated @ 0x72ce6a -> INT3 (CC)
   [EXE] iat_thunk @ 0x72d1bf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x72e108 -> INT3 (CC)
   [EXE] trap_isolated @ 0x72e9d1 -> INT3 (CC)
   [EXE] iat_thunk @ 0x72ead5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x72ec98 -> INT3 (CC)
   [EXE] iat_thunk @ 0x72eeb5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x72ef05 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x72f118 -> INT3 (CC)
   [EXE] trap_isolated @ 0x72ff49 -> INT3 (CC)
   [EXE] trap_isolated @ 0x730062 -> INT3 (CC)
   [EXE] trap_isolated @ 0x730306 -> INT3 (CC)
   [EXE] trap_isolated @ 0x730ca2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7311ab -> INT3 (CC)
   [EXE] trap_isolated @ 0x7312f3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x731423 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73154d -> INT3 (CC)
   [EXE] trap_isolated @ 0x73167d -> INT3 (CC)
   [EXE] trap_isolated @ 0x731770 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73190e -> INT3 (CC)
   [EXE] trap_isolated @ 0x731964 -> INT3 (CC)
   [EXE] trap_isolated @ 0x731d70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x731dc6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x731e19 -> INT3 (CC)
   [EXE] trap_isolated @ 0x731fd0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x732203 -> INT3 (CC)
   [EXE] trap_isolated @ 0x732604 -> INT3 (CC)
   [EXE] trap_isolated @ 0x732f2c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7333c6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7333f8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7333fe -> INT3 (CC)
   [EXE] trap_isolated @ 0x73378d -> INT3 (CC)
   [EXE] trap_isolated @ 0x733c42 -> INT3 (CC)
   [EXE] trap_isolated @ 0x733c74 -> INT3 (CC)
   [EXE] trap_isolated @ 0x733c7a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7346b7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7346bd -> INT3 (CC)
   [EXE] trap_isolated @ 0x7346c3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x734cde -> INT3 (CC)
   [EXE] trap_isolated @ 0x734e6e -> INT3 (CC)
   [EXE] trap_isolated @ 0x734fa0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7351c3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x735579 -> INT3 (CC)
   [EXE] trap_isolated @ 0x737132 -> INT3 (CC)
   [EXE] trap_isolated @ 0x737158 -> INT3 (CC)
   [EXE] trap_isolated @ 0x737170 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7371d4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7372e4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x737841 -> INT3 (CC)
   [EXE] trap_isolated @ 0x737970 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7379ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x737b4b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7381ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x738529 -> INT3 (CC)
   [EXE] trap_isolated @ 0x738670 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7386ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x738bf6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x738cd0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x739433 -> INT3 (CC)
   [EXE] iat_thunk @ 0x73973a -> combase.dll!CoTaskMemFree
   [EXE] iat_thunk @ 0x73975f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x73977e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7397a6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7397c5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x739ade -> INT3 (CC)
   [EXE] trap_isolated @ 0x739ef4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73abe0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73b193 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73b33b -> INT3 (CC)
   [EXE] trap_isolated @ 0x73b93c -> INT3 (CC)
   [EXE] iat_thunk @ 0x73bac9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x73bae3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x73bb08 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x73bc94 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73bd47 -> INT3 (CC)
   [EXE] iat_thunk @ 0x73bd79 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x73be35 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x73c097 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73c365 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73c5aa -> INT3 (CC)
   [EXE] trap_isolated @ 0x73c6a8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x73c855 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x73c869 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x73c888 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x73c933 -> HyperionLazy(0xe57c)
   [EXE] iat_thunk @ 0x73c975 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x73cae5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73cd3c -> INT3 (CC)
   [EXE] trap_isolated @ 0x73ce6b -> INT3 (CC)
   [EXE] trap_isolated @ 0x73cf37 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73d00c -> INT3 (CC)
   [EXE] trap_isolated @ 0x73d108 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73d1ea -> INT3 (CC)
   [EXE] trap_isolated @ 0x73d3b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73d85a -> INT3 (CC)
   [EXE] trap_isolated @ 0x73d8b9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73d92b -> INT3 (CC)
   [EXE] trap_isolated @ 0x73d97e -> INT3 (CC)
   [EXE] trap_isolated @ 0x73d9bb -> INT3 (CC)
   [EXE] trap_isolated @ 0x73db78 -> INT3 (CC)
   [EXE] iat_thunk @ 0x73df72 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x73e447 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73e550 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73e8f8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73e9e8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73eae3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73f381 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73fa6c -> INT3 (CC)
   [EXE] trap_isolated @ 0x73fbe7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x73fc91 -> INT3 (CC)
   [EXE] trap_isolated @ 0x740070 -> INT3 (CC)
   [EXE] trap_isolated @ 0x740bdd -> INT3 (CC)
   [EXE] trap_isolated @ 0x740cb0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x740ec0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x740f0b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x741252 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x741ca7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x741d93 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7421cc -> INT3 (CC)
   [EXE] trap_isolated @ 0x742880 -> INT3 (CC)
   [EXE] trap_isolated @ 0x742a9c -> INT3 (CC)
   [EXE] trap_isolated @ 0x742ebd -> INT3 (CC)
   [EXE] trap_isolated @ 0x743155 -> INT3 (CC)
   [EXE] trap_isolated @ 0x743449 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7436b4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7436ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x743b4a -> INT3 (CC)
   [EXE] trap_isolated @ 0x743b86 -> INT3 (CC)
   [EXE] trap_isolated @ 0x743f97 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7442a4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7442de -> INT3 (CC)
   [EXE] trap_isolated @ 0x744318 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7443e7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74449c -> INT3 (CC)
   [EXE] trap_isolated @ 0x74474a -> INT3 (CC)
   [EXE] trap_isolated @ 0x744886 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7448cc -> INT3 (CC)
   [EXE] trap_isolated @ 0x744e38 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7461a9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7461b8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7463b7 -> INT3 (CC)
   [EXE] iat_thunk @ 0x746469 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x74684e -> INT3 (CC)
   [EXE] iat_thunk @ 0x746bf9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x746fe0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x747155 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7476f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x747741 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7477b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x747984 -> INT3 (CC)
   [EXE] trap_isolated @ 0x747bf9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x747bfc -> INT3 (CC)
   [EXE] trap_isolated @ 0x747de9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7491ac -> INT3 (CC)
   [EXE] trap_isolated @ 0x749316 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7493a9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x749a06 -> INT3 (CC)
   [EXE] trap_isolated @ 0x749bd7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x749fb5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74a1d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74a5eb -> INT3 (CC)
   [EXE] trap_isolated @ 0x74a816 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74a880 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74a9e0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74aba3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74ad3c -> INT3 (CC)
   [EXE] trap_isolated @ 0x74ae4d -> INT3 (CC)
   [EXE] trap_isolated @ 0x74c015 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74c140 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74c60b -> INT3 (CC)
   [EXE] trap_isolated @ 0x74c836 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74cb28 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74ce88 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74cf40 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74d33d -> INT3 (CC)
   [EXE] iat_thunk @ 0x74d3b8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x74d550 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x74d7be -> INT3 (CC)
   [EXE] trap_isolated @ 0x74d968 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74da8c -> INT3 (CC)
   [EXE] trap_isolated @ 0x74dd4c -> INT3 (CC)
   [EXE] trap_isolated @ 0x74e161 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74e301 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74e756 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74e836 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74eae6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x74efc2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75001a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7503d7 -> INT3 (CC)
   [EXE] iat_thunk @ 0x750419 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7507f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x750b75 -> INT3 (CC)
   [EXE] trap_isolated @ 0x750db1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7551b1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x755433 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75551b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7555e7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x755751 -> INT3 (CC)
   [EXE] trap_isolated @ 0x755757 -> INT3 (CC)
   [EXE] trap_isolated @ 0x755972 -> INT3 (CC)
   [EXE] iat_thunk @ 0x755bdf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x755bf4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x755c14 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x755d70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7563c9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7566e9 -> INT3 (CC)
   [EXE] iat_thunk @ 0x756731 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7567d8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x757159 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x75732d -> INT3 (CC)
   [EXE] trap_isolated @ 0x75743a -> INT3 (CC)
   [EXE] trap_isolated @ 0x757463 -> INT3 (CC)
   [EXE] trap_isolated @ 0x757733 -> INT3 (CC)
   [EXE] trap_isolated @ 0x757979 -> INT3 (CC)
   [EXE] trap_isolated @ 0x757be1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x757be4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x758404 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7585a8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x758b86 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x758e2d -> INT3 (CC)
   [EXE] trap_isolated @ 0x75936c -> INT3 (CC)
   [EXE] trap_isolated @ 0x759461 -> INT3 (CC)
   [EXE] iat_thunk @ 0x75981f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7598d9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x759b5c -> INT3 (CC)
   [EXE] trap_isolated @ 0x759c88 -> INT3 (CC)
   [EXE] trap_isolated @ 0x759f41 -> INT3 (CC)
   [EXE] trap_isolated @ 0x759fc5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75a0a4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75a670 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75a83c -> INT3 (CC)
   [EXE] trap_isolated @ 0x75a971 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75ab79 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75aef8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75af35 -> INT3 (CC)
   [EXE] iat_thunk @ 0x75af54 -> HyperionLazy(0xa3fc)
   [EXE] trap_isolated @ 0x75b22d -> INT3 (CC)
   [EXE] trap_isolated @ 0x75b568 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75bb77 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75bdbe -> INT3 (CC)
   [EXE] trap_isolated @ 0x75d18d -> INT3 (CC)
   [EXE] trap_isolated @ 0x75d4d1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75d809 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75da20 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75da30 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75e3bb -> INT3 (CC)
   [EXE] trap_isolated @ 0x75e5ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x75e5b4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75ea2d -> INT3 (CC)
   [EXE] trap_isolated @ 0x75eb98 -> INT3 (CC)
   [EXE] trap_isolated @ 0x75ecf8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7652c2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7655d2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x765832 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76748b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7674b7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7675d9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7676fe -> INT3 (CC)
   [EXE] trap_isolated @ 0x767781 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7677f1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x767861 -> INT3 (CC)
   [EXE] trap_isolated @ 0x767c22 -> INT3 (CC)
   [EXE] trap_isolated @ 0x767fd8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768110 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768273 -> INT3 (CC)
   [EXE] iat_thunk @ 0x76841d -> HyperionLazy(0x893c)
   [EXE] iat_thunk @ 0x7684ae -> HyperionLazy(0xe27c)
   [EXE] trap_isolated @ 0x76859c -> INT3 (CC)
   [EXE] iat_thunk @ 0x7685f8 -> KERNELBASE.dll!LocalFree
   [EXE] trap_isolated @ 0x7686bb -> INT3 (CC)
   [EXE] trap_isolated @ 0x7689b9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7689c8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7689d7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768a0c -> INT3 (CC)
   [EXE] trap_isolated @ 0x768a1b -> INT3 (CC)
   [EXE] trap_isolated @ 0x768a2a -> INT3 (CC)
   [EXE] trap_isolated @ 0x768ad1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768ae0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768b0a -> INT3 (CC)
   [EXE] trap_isolated @ 0x768b19 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768b54 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768b63 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768b72 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768ba9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768bc3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x768bdd -> INT3 (CC)
   [EXE] trap_isolated @ 0x768dab -> INT3 (CC)
   [EXE] trap_isolated @ 0x769b85 -> INT3 (CC)
   [EXE] trap_isolated @ 0x769db8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a16c -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a251 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a30c -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a31b -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a32a -> INT3 (CC)
   [EXE] iat_thunk @ 0x76a3c0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x76a428 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a4f2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a5c8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a5d7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a5fa -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a61c -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a628 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a667 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a693 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a6a2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a6b1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a7cc -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a84c -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a85b -> INT3 (CC)
   [EXE] trap_isolated @ 0x76a86a -> INT3 (CC)
   [EXE] iat_thunk @ 0x76a9c0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x76ab3a -> INT3 (CC)
   [EXE] trap_isolated @ 0x76ac88 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76ae69 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76af80 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76af88 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76afcd -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b01e -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b030 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b039 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b04b -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b06d -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b089 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b094 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b09c -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b0ba -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b1ac -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b1c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b1e7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b237 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b40c -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b422 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b438 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b44d -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b467 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b4ba -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b4dc -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b5bb -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b5d7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b680 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b6ba -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b950 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b96c -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b98d -> INT3 (CC)
   [EXE] trap_isolated @ 0x76b9d0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76ba79 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76ba95 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76bab6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76bb92 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76bbae -> INT3 (CC)
   [EXE] trap_isolated @ 0x76bc71 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76bc8d -> INT3 (CC)
   [EXE] trap_isolated @ 0x76bcae -> INT3 (CC)
   [EXE] trap_isolated @ 0x76bd51 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76bd6d -> INT3 (CC)
   [EXE] trap_isolated @ 0x76bd8e -> INT3 (CC)
   [EXE] trap_isolated @ 0x76be35 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76be51 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76be72 -> INT3 (CC)
   [EXE] trap_isolated @ 0x76beb6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772038 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772082 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7720be -> INT3 (CC)
   [EXE] iat_thunk @ 0x7720cf -> HyperionLazy(0x99f3)
   [EXE] trap_isolated @ 0x7721b9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7721fc -> INT3 (CC)
   [EXE] trap_isolated @ 0x772210 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772224 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772242 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7722ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x772306 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77233a -> INT3 (CC)
   [EXE] trap_isolated @ 0x77243c -> INT3 (CC)
   [EXE] trap_isolated @ 0x77249c -> INT3 (CC)
   [EXE] trap_isolated @ 0x772682 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7726ca -> INT3 (CC)
   [EXE] trap_isolated @ 0x7726d0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772731 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772748 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772773 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77279e -> INT3 (CC)
   [EXE] trap_isolated @ 0x7727c6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7727e4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772801 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77281e -> INT3 (CC)
   [EXE] trap_isolated @ 0x77282a -> INT3 (CC)
   [EXE] trap_isolated @ 0x772897 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7728ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x7728c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7728d9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772904 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772929 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772947 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772964 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772981 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77298d -> INT3 (CC)
   [EXE] trap_isolated @ 0x772a15 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772a2c -> INT3 (CC)
   [EXE] trap_isolated @ 0x772a41 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772a54 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772a78 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772ab2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772ac9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772ade -> INT3 (CC)
   [EXE] trap_isolated @ 0x772af1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772b19 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772b59 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772b95 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772be2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772bfd -> INT3 (CC)
   [EXE] trap_isolated @ 0x772c18 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772c33 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772c4e -> INT3 (CC)
   [EXE] trap_isolated @ 0x772c69 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772c74 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772e66 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772ed8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772ef5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772f0e -> INT3 (CC)
   [EXE] trap_isolated @ 0x772f30 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772f48 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772f64 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772f80 -> INT3 (CC)
   [EXE] trap_isolated @ 0x772f9c -> INT3 (CC)
   [EXE] trap_isolated @ 0x773073 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7731d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773216 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77331b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7733a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7733d4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7733f9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773425 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77344d -> INT3 (CC)
   [EXE] trap_isolated @ 0x773455 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773476 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773519 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77355a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7735bd -> INT3 (CC)
   [EXE] trap_isolated @ 0x7735d5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7735ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x77360e -> INT3 (CC)
   [EXE] trap_isolated @ 0x773622 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77365c -> INT3 (CC)
   [EXE] trap_isolated @ 0x773679 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773687 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77372a -> INT3 (CC)
   [EXE] trap_isolated @ 0x773865 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773888 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7738ab -> INT3 (CC)
   [EXE] trap_isolated @ 0x7738d8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773904 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77394d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7739a3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7739bb -> INT3 (CC)
   [EXE] trap_isolated @ 0x7739e3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773a08 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773a26 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773a32 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773a6c -> INT3 (CC)
   [EXE] trap_isolated @ 0x773ab4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773b9c -> INT3 (CC)
   [EXE] trap_isolated @ 0x773c94 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773cab -> INT3 (CC)
   [EXE] trap_isolated @ 0x773cd2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773d5a -> INT3 (CC)
   [EXE] trap_isolated @ 0x773d71 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773d8a -> INT3 (CC)
   [EXE] trap_isolated @ 0x773da0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773e22 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773e39 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773e5c -> INT3 (CC)
   [EXE] trap_isolated @ 0x773e79 -> INT3 (CC)
   [EXE] trap_isolated @ 0x773efc -> INT3 (CC)
   [EXE] trap_isolated @ 0x77b060 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77b1da -> INT3 (CC)
   [EXE] trap_isolated @ 0x77b2f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77b370 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77b3ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x77b875 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77bbd9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77bd22 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77bd5e -> INT3 (CC)
   [EXE] trap_isolated @ 0x77c902 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77c9cc -> INT3 (CC)
   [EXE] trap_isolated @ 0x77ccc3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77cfac -> INT3 (CC)
   [EXE] trap_isolated @ 0x77cfb6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77d011 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77d01b -> INT3 (CC)
   [EXE] trap_isolated @ 0x77d088 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77d0f7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77d10a -> INT3 (CC)
   [EXE] trap_isolated @ 0x77d3b2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77d5bc -> INT3 (CC)
   [EXE] trap_isolated @ 0x77d9ac -> INT3 (CC)
   [EXE] trap_isolated @ 0x77d9b4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77dec6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77e45a -> INT3 (CC)
   [EXE] trap_isolated @ 0x77e485 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77e9c1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77e9db -> INT3 (CC)
   [EXE] iat_thunk @ 0x77eb60 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x77ece5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77ef95 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77f286 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77f360 -> INT3 (CC)
   [EXE] iat_thunk @ 0x77f3bf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x77f42a -> INT3 (CC)
   [EXE] trap_isolated @ 0x77f4a1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77f521 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77f636 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77f6a9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77f709 -> INT3 (CC)
   [EXE] iat_thunk @ 0x77f72f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x77f74f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x77f76f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x77f7ea -> INT3 (CC)
   [EXE] trap_isolated @ 0x77f85a -> INT3 (CC)
   [EXE] trap_isolated @ 0x77f8d1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x77fe4c -> INT3 (CC)
   [EXE] trap_isolated @ 0x77feed -> INT3 (CC)
   [EXE] trap_isolated @ 0x77ff85 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78002c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7800dc -> INT3 (CC)
   [EXE] trap_isolated @ 0x7801bb -> INT3 (CC)
   [EXE] trap_isolated @ 0x78028e -> INT3 (CC)
   [EXE] trap_isolated @ 0x780345 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7803e5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78048c -> INT3 (CC)
   [EXE] trap_isolated @ 0x780804 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7809f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x780ab0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x780c57 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7810f6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x781296 -> INT3 (CC)
   [EXE] trap_isolated @ 0x781590 -> INT3 (CC)
   [EXE] trap_isolated @ 0x781690 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7817a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x781836 -> INT3 (CC)
   [EXE] trap_isolated @ 0x781a13 -> INT3 (CC)
   [EXE] trap_isolated @ 0x781ab7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x781bb6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x781d93 -> INT3 (CC)
   [EXE] trap_isolated @ 0x781dfd -> INT3 (CC)
   [EXE] trap_isolated @ 0x7822c6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x782649 -> INT3 (CC)
   [EXE] trap_isolated @ 0x782742 -> INT3 (CC)
   [EXE] trap_isolated @ 0x782840 -> INT3 (CC)
   [EXE] trap_isolated @ 0x782869 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7829fe -> INT3 (CC)
   [EXE] trap_isolated @ 0x782bbe -> INT3 (CC)
   [EXE] trap_isolated @ 0x782f20 -> INT3 (CC)
   [EXE] trap_isolated @ 0x783267 -> INT3 (CC)
   [EXE] trap_isolated @ 0x783962 -> INT3 (CC)
   [EXE] trap_isolated @ 0x783a25 -> INT3 (CC)
   [EXE] trap_isolated @ 0x783b79 -> INT3 (CC)
   [EXE] iat_thunk @ 0x783bb6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x783c6d -> INT3 (CC)
   [EXE] trap_isolated @ 0x783d9d -> INT3 (CC)
   [EXE] trap_isolated @ 0x784073 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7840cb -> INT3 (CC)
   [EXE] trap_isolated @ 0x7843ce -> INT3 (CC)
   [EXE] trap_isolated @ 0x784460 -> INT3 (CC)
   [EXE] trap_isolated @ 0x784609 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7846cb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7846eb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x784888 -> INT3 (CC)
   [EXE] trap_isolated @ 0x784c95 -> INT3 (CC)
   [EXE] trap_isolated @ 0x785a78 -> INT3 (CC)
   [EXE] trap_isolated @ 0x785ae4 -> INT3 (CC)
   [EXE] iat_thunk @ 0x785f0f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x78619f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7861bf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x786220 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7869ea -> INT3 (CC)
   [EXE] iat_thunk @ 0x786e89 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x786f49 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x786f87 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x78700b -> INT3 (CC)
   [EXE] trap_isolated @ 0x787438 -> INT3 (CC)
   [EXE] trap_isolated @ 0x787ae6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x787bf0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x787bf3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78900c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7890a7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x789617 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7897e0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x789860 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x789fa2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78a2b2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78a612 -> INT3 (CC)
   [EXE] iat_thunk @ 0x78a63f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x78a6bd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x78aa70 -> INT3 (CC)
   [EXE] iat_thunk @ 0x78ab63 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x78b13d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x78b914 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78bed0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78c335 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78c652 -> INT3 (CC)
   [EXE] iat_thunk @ 0x78c846 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x78c870 -> INT3 (CC)
   [EXE] iat_thunk @ 0x78c90a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x78c929 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x78c9dd -> INT3 (CC)
   [EXE] trap_isolated @ 0x78cb0d -> INT3 (CC)
   [EXE] trap_isolated @ 0x78cbee -> INT3 (CC)
   [EXE] trap_isolated @ 0x78cf72 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78d060 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78d097 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78d21b -> INT3 (CC)
   [EXE] trap_isolated @ 0x78d831 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78da40 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78dc23 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78dd8e -> INT3 (CC)
   [EXE] trap_isolated @ 0x78ddaa -> INT3 (CC)
   [EXE] trap_isolated @ 0x78ddb9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78dfd0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78e853 -> INT3 (CC)
   [EXE] iat_thunk @ 0x78ea7b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x78f268 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f2f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f35c -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f3be -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f416 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f476 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f4dd -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f55e -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f5ce -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f5d0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f626 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78f9dd -> INT3 (CC)
   [EXE] trap_isolated @ 0x78fb6c -> INT3 (CC)
   [EXE] trap_isolated @ 0x78fe31 -> INT3 (CC)
   [EXE] trap_isolated @ 0x78feed -> INT3 (CC)
   [EXE] iat_thunk @ 0x79049b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7904c6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x790b70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x790ce0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x790de0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x790ecd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x79111d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x791cbb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x791d73 -> INT3 (CC)
   [EXE] trap_isolated @ 0x791dd0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x792b70 -> INT3 (CC)
   [EXE] iat_thunk @ 0x792bdb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x793008 -> INT3 (CC)
   [EXE] trap_isolated @ 0x793125 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7934a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x793846 -> INT3 (CC)
   [EXE] trap_isolated @ 0x793b06 -> INT3 (CC)
   [EXE] trap_isolated @ 0x793ca6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7941d5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7942e4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7944a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x794860 -> INT3 (CC)
   [EXE] trap_isolated @ 0x794a16 -> INT3 (CC)
   [EXE] trap_isolated @ 0x794e76 -> INT3 (CC)
   [EXE] trap_isolated @ 0x795016 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7951bc -> INT3 (CC)
   [EXE] trap_isolated @ 0x795356 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7954f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x79578a -> INT3 (CC)
   [EXE] trap_isolated @ 0x795cc9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x795ced -> INT3 (CC)
   [EXE] trap_isolated @ 0x7960f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7966a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7968cc -> INT3 (CC)
   [EXE] trap_isolated @ 0x7973dd -> INT3 (CC)
   [EXE] trap_isolated @ 0x7973eb -> INT3 (CC)
   [EXE] trap_isolated @ 0x797403 -> INT3 (CC)
   [EXE] trap_isolated @ 0x797422 -> INT3 (CC)
   [EXE] trap_isolated @ 0x797443 -> INT3 (CC)
   [EXE] trap_isolated @ 0x79744c -> INT3 (CC)
   [EXE] iat_thunk @ 0x79755b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x797586 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x797638 -> INT3 (CC)
   [EXE] trap_isolated @ 0x797b12 -> INT3 (CC)
   [EXE] trap_isolated @ 0x797c52 -> INT3 (CC)
   [EXE] trap_isolated @ 0x797c55 -> INT3 (CC)
   [EXE] trap_isolated @ 0x797e41 -> INT3 (CC)
   [EXE] trap_isolated @ 0x797fe6 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7984df -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x798860 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7989a8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x798cc0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x799140 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x79965d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7998bc -> INT3 (CC)
   [EXE] trap_isolated @ 0x799b69 -> INT3 (CC)
   [EXE] trap_isolated @ 0x799ea5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x79a640 -> INT3 (CC)
   [EXE] trap_isolated @ 0x79a69b -> INT3 (CC)
   [EXE] trap_isolated @ 0x79abca -> INT3 (CC)
   [EXE] trap_isolated @ 0x79ac5b -> INT3 (CC)
   [EXE] iat_thunk @ 0x79ad8a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x79b144 -> INT3 (CC)
   [EXE] trap_isolated @ 0x79b8d2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a377c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a3e23 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a3f18 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a3f43 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a425a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a4647 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a470e -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a4744 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a4820 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a4b67 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a4d06 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a4ea6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a966c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a97b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a9848 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a998e -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a99f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7a99fb -> INT3 (CC)
   [EXE] iat_thunk @ 0x7a9eeb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7a9f16 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7aa149 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7aa19a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7aa22b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7aa3e4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7aa52c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7aaf70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ac870 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7ac90a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7ac926 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7aca0b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7acad9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7acb99 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7ad88c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ada2a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7adaf7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7adcb5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7add08 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7adea0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7af118 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7afa00 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7afae7 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7afbad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7afd70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b0a97 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b0c37 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b0d70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b0fb5 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7b15f6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7b1613 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7b16d6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7b1797 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7b1868 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7b1b6b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b2947 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b2d9c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b3209 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7b3769 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7b46dc -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b4dd2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b62f2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b6730 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b789a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b7af0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b7e03 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7b9401 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ba299 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ba736 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ba8d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7bae5a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7bd0a8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7be0bd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7be65d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7be826 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7be9c6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7bec95 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7bee36 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7befd5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c0440 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c0476 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c04e0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c07fa -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c0d90 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c0da1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1170 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7c155d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7c180c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c19c7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1ad6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1d3b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1d44 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1d50 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1d5b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1d6c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1d73 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1d81 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c1d9b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c221a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c22ab -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c2370 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7c23c9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7c25a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c2df8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c6056 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c607b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c62a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c7f09 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c7f10 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c7f1a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c7f21 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c7f2b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c7f36 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c7f3d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c7f43 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c7f85 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7c90dc -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ced96 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7cf196 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7cf4a3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7cf526 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7cf816 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7cfa82 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7cfc70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7cfdf2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d004e -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d07c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d0d9a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d1a8a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d1b79 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d1fd3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d21f1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d24c4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d25b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d26d4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d2a80 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d2c77 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d2f36 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d30d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d32b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d34f6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d3a5c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d3d2b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d3ec6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d6580 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d66ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d67e0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d6c1a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d7021 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d7223 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d72a9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d7433 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d7841 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d7c51 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d7c54 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d7f20 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d8092 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d8480 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d8720 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d8e90 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d8ebe -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d9097 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d925d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d94ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d9ba0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d9c4b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7d9e7b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7da80b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7da811 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dab5b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dac9b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dacb7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dacc6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7daeab -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dafeb -> INT3 (CC)
   [EXE] trap_isolated @ 0x7db007 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7db016 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7db2fa -> INT3 (CC)
   [EXE] trap_isolated @ 0x7db3b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7db9f6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dba5a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dba93 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dc0cb -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dc0fa -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dc32b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dc4c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dc693 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dc980 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dcefa -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dd0c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dd863 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dda69 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ddc69 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dde60 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de060 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de1ce -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de1ea -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de1f9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de200 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de3db -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de51b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de537 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de546 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de743 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de8ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de8ca -> INT3 (CC)
   [EXE] trap_isolated @ 0x7de8d9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7decb7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7decd3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dee1b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dee37 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7def85 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7def94 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7defa1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7defb0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7df0e5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7df101 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7df3d9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7df783 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7df7c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dfc08 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dfed3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7dff10 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7dffed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7e0220 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7e065e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7e069a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7e0a7e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7e0aae -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7e0ba3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7e0bbe -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7e10a2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e1432 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e1669 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7e172d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7e1970 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e1bc9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e1d5c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e1d70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e1e6d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e20d1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e2392 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e2445 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e25d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e271d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e28d6 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7e2915 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7e2a35 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7e2b40 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7e2dd5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7e3138 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e3270 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e32d3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e33c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e35a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e35f4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e378d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e38c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e3a10 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e3deb -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e3f86 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e522d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e54e6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e5670 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e5687 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e5c09 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e5d93 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e5fe0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e5ffc -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e6125 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e62a3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e643c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e6b4b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e6c8b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e6ca7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e6cb6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e6e40 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7e6e8a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7e6fa2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7e6fbc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x7e722d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7e7470 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e7a86 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e7c40 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e7d50 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e7ee6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e7f8c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e90d8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e91d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e937d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e9443 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e9633 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e9670 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e96a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e997a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7e9cfd -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ea02e -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ea28e -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ea46d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ea571 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ea850 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ea913 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ea950 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eaac1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eab7a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eabea -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eac61 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eace1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eae89 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eaee9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eaf6a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eafda -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eb051 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eb0a5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eb275 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eb790 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eb7cc -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eb8c9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eba8a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ebada -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ebb80 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ec2dd -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ec368 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ec55a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ec620 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ec6e3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ec720 -> INT3 (CC)
   [EXE] iat_thunk @ 0x7ec7fd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x7ecb88 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ecbe0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ecde6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ecf85 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ed07b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ed26d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ed4e3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ed520 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7edba3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7edbe0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7edfaa -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ee134 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ee272 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ee2e8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ee805 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eea5c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eedd8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ef133 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ef695 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ef7f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7ef951 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7efab0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7efcd6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7eff15 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f0092 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f04e6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f0686 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f0887 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f0a6d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f0c06 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f0fed -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f10ba -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f1186 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f13b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f1446 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f15e6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f1786 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f17f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f191a -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f1af3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f1c95 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f2341 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f247e -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f25fe -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f281b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f2824 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f2830 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f283b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f284c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f2853 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f2861 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f287b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f2cc1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f2da9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f2e75 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f2f32 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f32d3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3880 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f399c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3a04 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3a91 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3b14 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3bfb -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3c80 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3cb2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3cc3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3d36 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3e1d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3f0c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3f42 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3f7b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3f8d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f3fb5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f4025 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f4042 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f405e -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f4070 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f4094 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f40a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f4645 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f4791 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f4865 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f4cbb -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f8150 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f8300 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f83f7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f88c3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f88e9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f8f53 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f913e -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f960b -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f9624 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f964d -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f9888 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f9934 -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f9c5c -> INT3 (CC)
   [EXE] trap_isolated @ 0x7f9e70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8002a3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x800d75 -> INT3 (CC)
   [EXE] trap_isolated @ 0x800f55 -> INT3 (CC)
   [EXE] trap_isolated @ 0x801ba2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x801c81 -> INT3 (CC)
   [EXE] trap_isolated @ 0x801e25 -> INT3 (CC)
   [EXE] trap_isolated @ 0x801ff9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8022d8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80248d -> INT3 (CC)
   [EXE] trap_isolated @ 0x802d3b -> INT3 (CC)
   [EXE] trap_isolated @ 0x802eae -> INT3 (CC)
   [EXE] trap_isolated @ 0x803239 -> INT3 (CC)
   [EXE] trap_isolated @ 0x803246 -> INT3 (CC)
   [EXE] trap_isolated @ 0x803330 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80381e -> INT3 (CC)
   [EXE] trap_isolated @ 0x803851 -> INT3 (CC)
   [EXE] trap_isolated @ 0x803865 -> INT3 (CC)
   [EXE] trap_isolated @ 0x803877 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80388b -> INT3 (CC)
   [EXE] iat_thunk @ 0x80390a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8039a5 -> INT3 (CC)
   [EXE] iat_thunk @ 0x803a91 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x803f4d -> INT3 (CC)
   [EXE] trap_isolated @ 0x804077 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80407d -> INT3 (CC)
   [EXE] trap_isolated @ 0x804923 -> INT3 (CC)
   [EXE] cd03 @ 0x804941 -> INT 3 (CD 03)
   [EXE] trap_isolated @ 0x8051c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80529e -> INT3 (CC)
   [EXE] trap_isolated @ 0x8055bd -> INT3 (CC)
   [EXE] trap_isolated @ 0x805d01 -> INT3 (CC)
   [EXE] trap_isolated @ 0x805ec1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x805fd8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8061ed -> INT3 (CC)
   [EXE] iat_thunk @ 0x806247 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8063b7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8063c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8064b4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8067a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x806bf7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8071a0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x807657 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x80776e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8077a0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8078be -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x807ab0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x807d70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x807e93 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8084ea -> INT3 (CC)
   [EXE] trap_isolated @ 0x808c81 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80958c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8096fc -> INT3 (CC)
   [EXE] trap_isolated @ 0x80b170 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80b1a6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80b1b1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80b26d -> INT3 (CC)
   [EXE] trap_isolated @ 0x80b2d1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80b9c9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80bf00 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80c5b8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x80c858 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x80c8d4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80cb5a -> INT3 (CC)
   [EXE] trap_isolated @ 0x80cf6e -> INT3 (CC)
   [EXE] trap_isolated @ 0x80cfa7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80d023 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80d099 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80d2a5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80d2bb -> INT3 (CC)
   [EXE] trap_isolated @ 0x80d5b4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80d5eb -> INT3 (CC)
   [EXE] trap_isolated @ 0x80d996 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80dce1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80de88 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80e2c8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80e43b -> INT3 (CC)
   [EXE] trap_isolated @ 0x80eaa9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80f778 -> INT3 (CC)
   [EXE] trap_isolated @ 0x80ff9e -> INT3 (CC)
   [EXE] trap_isolated @ 0x8138c4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8138f8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8139a4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x814410 -> INT3 (CC)
   [EXE] trap_isolated @ 0x814470 -> INT3 (CC)
   [EXE] trap_isolated @ 0x814626 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81466d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8146c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x814a3c -> INT3 (CC)
   [EXE] trap_isolated @ 0x814a99 -> INT3 (CC)
   [EXE] trap_isolated @ 0x814ac1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x814b65 -> INT3 (CC)
   [EXE] trap_isolated @ 0x814e45 -> INT3 (CC)
   [EXE] trap_isolated @ 0x819010 -> INT3 (CC)
   [EXE] trap_isolated @ 0x819a79 -> INT3 (CC)
   [EXE] trap_isolated @ 0x819a95 -> INT3 (CC)
   [EXE] trap_isolated @ 0x819d02 -> INT3 (CC)
   [EXE] trap_isolated @ 0x819ea3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81a4b9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81a868 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81a86e -> INT3 (CC)
   [EXE] trap_isolated @ 0x81a989 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81ab3a -> INT3 (CC)
   [EXE] trap_isolated @ 0x81ab40 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81ae7d -> INT3 (CC)
   [EXE] trap_isolated @ 0x81af85 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81af8b -> INT3 (CC)
   [EXE] trap_isolated @ 0x81b12d -> INT3 (CC)
   [EXE] trap_isolated @ 0x81b133 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81b3ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x81c536 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81c872 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81c989 -> INT3 (CC)
   [EXE] iat_thunk @ 0x81cc9f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x81ceb1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81ceb7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81cfa0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x81d1c6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x81d1e5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x81d20f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x81d9ef -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x81dbf8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x81dd16 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8276e8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8279cc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x827e81 -> INT3 (CC)
   [EXE] trap_isolated @ 0x828611 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82888e -> INT3 (CC)
   [EXE] trap_isolated @ 0x828b1a -> INT3 (CC)
   [EXE] trap_isolated @ 0x828c52 -> INT3 (CC)
   [EXE] trap_isolated @ 0x828d82 -> INT3 (CC)
   [EXE] trap_isolated @ 0x828eac -> INT3 (CC)
   [EXE] trap_isolated @ 0x828fdc -> INT3 (CC)
   [EXE] trap_isolated @ 0x829269 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8292ba -> INT3 (CC)
   [EXE] trap_isolated @ 0x829421 -> INT3 (CC)
   [EXE] trap_isolated @ 0x829c67 -> INT3 (CC)
   [EXE] trap_isolated @ 0x829df9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82a368 -> INT3 (CC)
   [EXE] iat_thunk @ 0x82a448 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x82a7de -> INT3 (CC)
   [EXE] trap_isolated @ 0x82abf0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82b3be -> INT3 (CC)
   [EXE] trap_isolated @ 0x82b40b -> INT3 (CC)
   [EXE] trap_isolated @ 0x82b4e0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82b649 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82b6c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82b713 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82b751 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82c179 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82c376 -> INT3 (CC)
   [EXE] iat_thunk @ 0x82cbec -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x82d836 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82dba5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82dd71 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82df99 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82dfc0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82eae0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82eb42 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82ec96 -> INT3 (CC)
   [EXE] trap_isolated @ 0x82ece9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x837326 -> INT3 (CC)
   [EXE] trap_isolated @ 0x837470 -> INT3 (CC)
   [EXE] trap_isolated @ 0x837627 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8377f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x837980 -> INT3 (CC)
   [EXE] trap_isolated @ 0x837d15 -> INT3 (CC)
   [EXE] trap_isolated @ 0x837f73 -> INT3 (CC)
   [EXE] trap_isolated @ 0x838090 -> INT3 (CC)
   [EXE] trap_isolated @ 0x83815e -> INT3 (CC)
   [EXE] iat_thunk @ 0x8389ed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x839eed -> INT3 (CC)
   [EXE] trap_isolated @ 0x84325a -> INT3 (CC)
   [EXE] trap_isolated @ 0x843400 -> INT3 (CC)
   [EXE] trap_isolated @ 0x843548 -> INT3 (CC)
   [EXE] trap_isolated @ 0x843c4c -> INT3 (CC)
   [EXE] trap_isolated @ 0x843cb2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x843cc0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x843fbd -> INT3 (CC)
   [EXE] trap_isolated @ 0x8444e7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8445a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x844ad3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x844b70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x844d25 -> INT3 (CC)
   [EXE] trap_isolated @ 0x844f22 -> INT3 (CC)
   [EXE] trap_isolated @ 0x847213 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84735a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8474e2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8474e8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8476a3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x847968 -> INT3 (CC)
   [EXE] trap_isolated @ 0x847ad2 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8482de -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x84845e -> INT3 (CC)
   [EXE] iat_thunk @ 0x84861b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8489c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x848b88 -> INT3 (CC)
   [EXE] trap_isolated @ 0x849213 -> INT3 (CC)
   [EXE] trap_isolated @ 0x849363 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8497a1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x849946 -> INT3 (CC)
   [EXE] trap_isolated @ 0x849a34 -> INT3 (CC)
   [EXE] trap_isolated @ 0x849c06 -> INT3 (CC)
   [EXE] iat_thunk @ 0x849d8b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x849db6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x849f00 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84a133 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84a145 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84a540 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84adb2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84ae29 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84ae47 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84b0f2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84b169 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84b187 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84b2ec -> INT3 (CC)
   [EXE] trap_isolated @ 0x84c13e -> INT3 (CC)
   [EXE] iat_thunk @ 0x84c4ad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x84c670 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84cbdc -> INT3 (CC)
   [EXE] trap_isolated @ 0x84cf16 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84d080 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84d09d -> INT3 (CC)
   [EXE] trap_isolated @ 0x84d0b6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84d38b -> INT3 (CC)
   [EXE] trap_isolated @ 0x84d597 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84d89e -> INT3 (CC)
   [EXE] iat_thunk @ 0x84da0f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x84da2f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x84da4f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x84daef -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x84db0f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x84db8f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x84dbaf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x84dbcf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x84dc72 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84dd90 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84e54c -> INT3 (CC)
   [EXE] trap_isolated @ 0x84e5d8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84eee9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84ef1d -> INT3 (CC)
   [EXE] trap_isolated @ 0x84ef35 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84ef3b -> INT3 (CC)
   [EXE] trap_isolated @ 0x84ef41 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84ef47 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84ef61 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84f9c3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x84fdfb -> INT3 (CC)
   [EXE] trap_isolated @ 0x8501a3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x850840 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8508e2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x850e39 -> INT3 (CC)
   [EXE] trap_isolated @ 0x852518 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85255c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8527d3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x852908 -> INT3 (CC)
   [EXE] trap_isolated @ 0x852a58 -> INT3 (CC)
   [EXE] trap_isolated @ 0x852d5a -> INT3 (CC)
   [EXE] trap_isolated @ 0x852d89 -> INT3 (CC)
   [EXE] trap_isolated @ 0x857066 -> INT3 (CC)
   [EXE] trap_isolated @ 0x857206 -> INT3 (CC)
   [EXE] trap_isolated @ 0x857437 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85757e -> INT3 (CC)
   [EXE] trap_isolated @ 0x857630 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85784e -> INT3 (CC)
   [EXE] trap_isolated @ 0x857a5a -> INT3 (CC)
   [EXE] trap_isolated @ 0x858180 -> INT3 (CC)
   [EXE] trap_isolated @ 0x858b9b -> INT3 (CC)
   [EXE] trap_isolated @ 0x858d33 -> INT3 (CC)
   [EXE] trap_isolated @ 0x858d4c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8594ca -> INT3 (CC)
   [EXE] trap_isolated @ 0x8598ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x859df8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85a152 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85a172 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85a180 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85a18a -> INT3 (CC)
   [EXE] trap_isolated @ 0x85a43b -> INT3 (CC)
   [EXE] trap_isolated @ 0x85a5fd -> INT3 (CC)
   [EXE] trap_isolated @ 0x85a72d -> INT3 (CC)
   [EXE] trap_isolated @ 0x85ab7d -> INT3 (CC)
   [EXE] trap_isolated @ 0x85b736 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85b8ba -> INT3 (CC)
   [EXE] trap_isolated @ 0x85b965 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85ba26 -> INT3 (CC)
   [EXE] trap_isolated @ 0x85bd16 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86105e -> INT3 (CC)
   [EXE] trap_isolated @ 0x861172 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8612be -> INT3 (CC)
   [EXE] trap_isolated @ 0x861338 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8614ce -> INT3 (CC)
   [EXE] trap_isolated @ 0x8614d0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8615e5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x861765 -> INT3 (CC)
   [EXE] trap_isolated @ 0x861948 -> INT3 (CC)
   [EXE] trap_isolated @ 0x861cfb -> INT3 (CC)
   [EXE] trap_isolated @ 0x861e96 -> INT3 (CC)
   [EXE] trap_isolated @ 0x861f05 -> INT3 (CC)
   [EXE] trap_isolated @ 0x862153 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8622f6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8626dd -> INT3 (CC)
   [EXE] trap_isolated @ 0x862876 -> INT3 (CC)
   [EXE] trap_isolated @ 0x862980 -> INT3 (CC)
   [EXE] trap_isolated @ 0x862a16 -> INT3 (CC)
   [EXE] trap_isolated @ 0x862cd6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x866176 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8661e8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x866436 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8665d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x866776 -> INT3 (CC)
   [EXE] trap_isolated @ 0x866a36 -> INT3 (CC)
   [EXE] trap_isolated @ 0x866d06 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86727d -> INT3 (CC)
   [EXE] trap_isolated @ 0x86728b -> INT3 (CC)
   [EXE] trap_isolated @ 0x867420 -> INT3 (CC)
   [EXE] trap_isolated @ 0x867ffc -> INT3 (CC)
   [EXE] trap_isolated @ 0x86823d -> INT3 (CC)
   [EXE] iat_thunk @ 0x8686ba -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8689c2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x868a89 -> INT3 (CC)
   [EXE] trap_isolated @ 0x868b55 -> INT3 (CC)
   [EXE] trap_isolated @ 0x868c3c -> INT3 (CC)
   [EXE] trap_isolated @ 0x868da0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x868eb5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x868f62 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8690c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8691c2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x869272 -> INT3 (CC)
   [EXE] trap_isolated @ 0x869339 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86952d -> INT3 (CC)
   [EXE] trap_isolated @ 0x86961c -> INT3 (CC)
   [EXE] trap_isolated @ 0x86999c -> INT3 (CC)
   [EXE] trap_isolated @ 0x869ad8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x869d8b -> INT3 (CC)
   [EXE] trap_isolated @ 0x86a03b -> INT3 (CC)
   [EXE] trap_isolated @ 0x86a3a9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86a583 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86a6ee -> INT3 (CC)
   [EXE] trap_isolated @ 0x86a70a -> INT3 (CC)
   [EXE] trap_isolated @ 0x86a719 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86a930 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86ab26 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86ab42 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86adf0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86b39d -> INT3 (CC)
   [EXE] trap_isolated @ 0x86b619 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86b809 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86b9e4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86bb4d -> INT3 (CC)
   [EXE] trap_isolated @ 0x86bd68 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86bec0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86c1d1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86c376 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86c580 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86c75d -> INT3 (CC)
   [EXE] trap_isolated @ 0x86ca1c -> INT3 (CC)
   [EXE] trap_isolated @ 0x86ccfe -> INT3 (CC)
   [EXE] trap_isolated @ 0x86d16e -> INT3 (CC)
   [EXE] trap_isolated @ 0x86d425 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86d42b -> INT3 (CC)
   [EXE] iat_thunk @ 0x86d9ba -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x86f7c4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x86fef0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x870431 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87056c -> INT3 (CC)
   [EXE] trap_isolated @ 0x870723 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8707c7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x870b7b -> INT3 (CC)
   [EXE] trap_isolated @ 0x871070 -> INT3 (CC)
   [EXE] iat_thunk @ 0x87110a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x871126 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x87119d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8711b8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x871279 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x87135b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x871439 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x87149e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8715e5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x871649 -> INT3 (CC)
   [EXE] trap_isolated @ 0x871a6a -> INT3 (CC)
   [EXE] trap_isolated @ 0x871bc4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x871e03 -> INT3 (CC)
   [EXE] trap_isolated @ 0x872da4 -> INT3 (CC)
   [EXE] iat_thunk @ 0x872e3e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x872e70 -> INT3 (CC)
   [EXE] iat_thunk @ 0x872f09 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x873c9d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x873d70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8740b8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8742fc -> INT3 (CC)
   [EXE] trap_isolated @ 0x874615 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8748a9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8748c6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x87498a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x874ab0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x874cc0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8767fd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x876a4d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8785b5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8786f1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x878c17 -> INT3 (CC)
   [EXE] trap_isolated @ 0x878cae -> INT3 (CC)
   [EXE] iat_thunk @ 0x87908e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8791c9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x87924f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x87931a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x87a416 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87a550 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87a6cd -> INT3 (CC)
   [EXE] trap_isolated @ 0x87aa6e -> INT3 (CC)
   [EXE] trap_isolated @ 0x87c5f9 -> INT3 (CC)
   [EXE] iat_thunk @ 0x87c92d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x87d491 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87db20 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87dda0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87df98 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87f1c2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87f1f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87f44c -> INT3 (CC)
   [EXE] iat_thunk @ 0x87f4dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x87f72d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x87f970 -> INT3 (CC)
   [EXE] trap_isolated @ 0x87ffc0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x880056 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8801fd -> INT3 (CC)
   [EXE] iat_thunk @ 0x88107b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x881189 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8814cb -> INT3 (CC)
   [EXE] trap_isolated @ 0x881753 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8818be -> INT3 (CC)
   [EXE] trap_isolated @ 0x8818da -> INT3 (CC)
   [EXE] trap_isolated @ 0x8818e9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x881d1b -> INT3 (CC)
   [EXE] trap_isolated @ 0x882730 -> INT3 (CC)
   [EXE] trap_isolated @ 0x882e4e -> INT3 (CC)
   [EXE] trap_isolated @ 0x883142 -> INT3 (CC)
   [EXE] trap_isolated @ 0x883b91 -> INT3 (CC)
   [EXE] trap_isolated @ 0x883bad -> INT3 (CC)
   [EXE] trap_isolated @ 0x883f81 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8843a8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x88493d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x884b8d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x885e50 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8861f0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8863bd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x88660d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x886670 -> INT3 (CC)
   [EXE] iat_thunk @ 0x88685d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x886aad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x886c70 -> INT3 (CC)
   [EXE] iat_thunk @ 0x888306 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x888370 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8883c9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8885a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88a6e1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88a882 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88b1b3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88b393 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88bc08 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88bda0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x88be4d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x88c09d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x88c170 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c33e -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c485 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c582 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c605 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c67d -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c6ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c768 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c7fd -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c869 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c8f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c975 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88c9ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x88cabb -> INT3 (CC)
   [EXE] trap_isolated @ 0x88cbf2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88cd25 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88cda5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88ce1d -> INT3 (CC)
   [EXE] trap_isolated @ 0x88ce8d -> INT3 (CC)
   [EXE] trap_isolated @ 0x88cf08 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88cf9a -> INT3 (CC)
   [EXE] trap_isolated @ 0x88d009 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88d058 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88d075 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88d095 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88d0f5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88d115 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88d18d -> INT3 (CC)
   [EXE] trap_isolated @ 0x88dd5d -> INT3 (CC)
   [EXE] trap_isolated @ 0x88e1b6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x88e6d9 -> INT3 (CC)
   [EXE] iat_thunk @ 0x88ec99 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x88f09b -> INT3 (CC)
   [EXE] trap_isolated @ 0x88f2ec -> INT3 (CC)
   [EXE] trap_isolated @ 0x890177 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8901f0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8903cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x891550 -> INT3 (CC)
   [EXE] trap_isolated @ 0x891cc7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x892507 -> INT3 (CC)
   [EXE] trap_isolated @ 0x892570 -> INT3 (CC)
   [EXE] trap_isolated @ 0x892a25 -> INT3 (CC)
   [EXE] trap_isolated @ 0x892b79 -> INT3 (CC)
   [EXE] trap_isolated @ 0x893082 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8932d6 -> INT3 (CC)
   [EXE] iat_thunk @ 0x89336d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8936dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x89392d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x893b7d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x893dcd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x89826d -> INT3 (CC)
   [EXE] trap_isolated @ 0x89827b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8984ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x8984b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x898710 -> INT3 (CC)
   [EXE] trap_isolated @ 0x89872c -> INT3 (CC)
   [EXE] trap_isolated @ 0x89919d -> INT3 (CC)
   [EXE] trap_isolated @ 0x899a92 -> INT3 (CC)
   [EXE] trap_isolated @ 0x899b1b -> INT3 (CC)
   [EXE] trap_isolated @ 0x899bd0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x89b13d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x89c1a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x89c350 -> INT3 (CC)
   [EXE] iat_thunk @ 0x89c61d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x89c86d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x89d100 -> INT3 (CC)
   [EXE] trap_isolated @ 0x89d190 -> INT3 (CC)
   [EXE] trap_isolated @ 0x89d314 -> INT3 (CC)
   [EXE] trap_isolated @ 0x89da52 -> INT3 (CC)
   [EXE] trap_isolated @ 0x89dd84 -> INT3 (CC)
   [EXE] trap_isolated @ 0x89dff3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a1080 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a12b1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a1312 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a1410 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a1550 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a162a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a177c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a1cd1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a1cf3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a2040 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a2056 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a21a5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a21ab -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a22f6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a22fc -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a25ac -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a28d3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a2abc -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a33aa -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a36fc -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a3c82 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a3e90 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a4114 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a42d7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a434c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a4504 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a46d4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a5628 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a5654 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a568c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a570a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a5d6b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a5e09 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a5e22 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a5f32 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a6647 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a6721 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a6829 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a69e6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a6a49 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8a6e7d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8a6e8c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a8363 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a8c66 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a8dca -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a8e2a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a8e6e -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a8e9a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a8fa0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a9e8c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a9eb5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8a9ff9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8aa0b7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8aa5a2 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ab1e6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8ab2a9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8ab3d7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ab51d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ab64d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8abd70 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8abddb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8ac0fa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8ac66c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ac6a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ac723 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ad07d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ad38d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ad490 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ad526 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8adcb5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ae221 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ae243 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ae590 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ae5a6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ae6e7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ae87c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ae882 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8aeb48 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8aeeac -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af0fc -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af24b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af281 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af372 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af395 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af3ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af432 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af4a4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af522 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af553 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af649 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af707 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8af940 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8afd83 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b06e4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b08a7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b091c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b0ad4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b0ca4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b1487 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b1bf8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b1c24 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b1c5c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b1cda -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b1ece -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b1f75 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b1f94 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b20a4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b2bf7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b2cd1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b2dd9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b2f96 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b2ff9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b3546 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8b3ef6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8b3fb9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8b4050 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b409d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8b41cd -> INT3 (CC)
   [EXE] iat_thunk @ 0x8b47eb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8b498c -> INT3 (CC)
   [EXE] iat_thunk @ 0x8b49da -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8b4a68 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8bbc57 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8bbd31 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8bbe39 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8bbff6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8bc059 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8bc922 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8bcabd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8bcd0d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8bcd70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c002b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c016b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c0187 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c0196 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c0ebe -> INT3 (CC)
   [EXE] iat_thunk @ 0x8c1fcd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8c3210 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c3350 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c3470 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8c34c9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c34e6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c35f9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c370b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c37da -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c3a2a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8c3d3a -> INT3 (CC)
   [EXE] iat_thunk @ 0x8c427d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c4869 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c4886 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c4949 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8c4970 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8c4a0a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8c4d4b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c4f20 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c51ab -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c5452 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c5ccd -> INT3 (CC)
   [EXE] iat_thunk @ 0x8c5fdd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c622d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8c647d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8c6768 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c68cc -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c6d11 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c6e48 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c6f96 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8c98a8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8c98f0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8c9aa8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8c9ae1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8ca362 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ca4dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8ca780 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ca84d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8caa9d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8cab70 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8caced -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8cb157 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cb3d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cb420 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cb5e0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cb88d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cc0e4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cc3a6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cc4b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cc679 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cc984 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ccb26 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cccc6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cd990 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cdae9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ce13e -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ce37a -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ce729 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8ce746 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8ce770 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ce809 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8ce870 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ce8ca -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8cecea -> INT3 (CC)
   [EXE] iat_thunk @ 0x8cef47 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8cef51 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cf08c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cf2b0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cf8a6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8cf8ac -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d0061 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d018a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d05a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d0b41 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d0c6a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d0fd0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d1621 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d174a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d1b62 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d1d33 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d22e0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d239d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d25c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d25f6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d26bc -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d2ad6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d2e90 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d4300 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8d44ed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8d473d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8d498d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8d4bdd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8d4e2d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8d507d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8d51e3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d7140 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d737c -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d81a0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8d8439 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8d8a5b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d8b1a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d8bc0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d8d5d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d9870 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8d9da0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8d9e4d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8da09d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8da170 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8da5a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dad4b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dad51 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8db5ac -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dbbb2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dbd70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dbe06 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dc2b2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dc345 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dc352 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dc415 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dc73b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dc848 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dd226 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dd330 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dd3c6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dd68b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dd825 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dd9c6 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ddae0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8ddb1b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8dec21 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8deca8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8dede6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8defe9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8df1e6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e0178 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e03e3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e0586 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e084b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e09e5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e0b85 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e0d26 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e10a3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e1363 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e13f1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e14ad -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e1870 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e187e -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e191b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e1ea2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e1f65 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8e2089 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8e214a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8e25cb -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e2a21 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e3594 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e36e9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e3833 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e46ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e4a96 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e4cc3 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8e4d6d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8e4fbd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8e520d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8e5217 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e5270 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e58f7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e5c30 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e7123 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e7158 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e7260 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e745d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e7555 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e7aed -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e7ccd -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e7fb8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e8140 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e81d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e8376 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e8448 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e8633 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e87d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e8b67 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8e962d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8e9cb6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8e9da8 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ea079 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8ea096 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8ea15a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8ea425 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ea42b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8eab51 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ec780 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ec9e0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ed0e6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8ed111 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8ed1aa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8ed269 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8ed34b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8ed7e0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ed8ad -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ed9dd -> INT3 (CC)
   [EXE] iat_thunk @ 0x8edab9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8edd48 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8edd4e -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ee305 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ee491 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8ef976 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8f043d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8f068d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8f0c46 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f11e0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f13f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f1970 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8f1b26 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8f1be9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8f1d6b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8f1e89 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8f22da -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f2380 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f2784 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f278a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f2ac0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f2e31 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f2f5a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f35c1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f36ea -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f3ea1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f3fca -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f54b5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f54f8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f55bb -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f6106 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8f6996 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8f6a59 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8f6b70 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8f6bdb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8f6cf9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8f714a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f71f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f7490 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8f774d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8f7769 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8f78cb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x8f78e6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8f7b77 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f7f97 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8f8d12 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fa222 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fa552 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fa7a5 -> INT3 (CC)
   [EXE] iat_thunk @ 0x8fa83d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x8fac4a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fade0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fb2f6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fb491 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fb6d1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fb862 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fbaa1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fbe9b -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fc0b5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fc23d -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fc489 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fce48 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fd664 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fd9a2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fdc4a -> INT3 (CC)
   [EXE] trap_isolated @ 0x8fde2a -> INT3 (CC)
   [EXE] trap_isolated @ 0x905175 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90529e -> INT3 (CC)
   [EXE] trap_isolated @ 0x90541e -> INT3 (CC)
   [EXE] trap_isolated @ 0x90559e -> INT3 (CC)
   [EXE] trap_isolated @ 0x905725 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9058ae -> INT3 (CC)
   [EXE] trap_isolated @ 0x905a2e -> INT3 (CC)
   [EXE] trap_isolated @ 0x905bb9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x905c10 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90644e -> INT3 (CC)
   [EXE] trap_isolated @ 0x90685e -> INT3 (CC)
   [EXE] trap_isolated @ 0x9069cb -> INT3 (CC)
   [EXE] cd03 @ 0x906c41 -> INT 3 (CD 03)
   [EXE] trap_isolated @ 0x906cfe -> INT3 (CC)
   [EXE] trap_isolated @ 0x906d05 -> INT3 (CC)
   [EXE] trap_isolated @ 0x906ed5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x906ede -> INT3 (CC)
   [EXE] trap_isolated @ 0x906f05 -> INT3 (CC)
   [EXE] trap_isolated @ 0x906f2c -> INT3 (CC)
   [EXE] trap_isolated @ 0x906f50 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9071e8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x907422 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9075b4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90775c -> INT3 (CC)
   [EXE] trap_isolated @ 0x907904 -> INT3 (CC)
   [EXE] iat_thunk @ 0x907c79 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x907d39 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x907fe2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9081bd -> INT3 (CC)
   [EXE] trap_isolated @ 0x9081cb -> INT3 (CC)
   [EXE] trap_isolated @ 0x90823e -> INT3 (CC)
   [EXE] trap_isolated @ 0x908542 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90898a -> INT3 (CC)
   [EXE] trap_isolated @ 0x908c72 -> INT3 (CC)
   [EXE] trap_isolated @ 0x908fe2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90b150 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90b350 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90b3a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90b8e5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90b901 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90ba22 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90c3ca -> INT3 (CC)
   [EXE] trap_isolated @ 0x90c3ed -> INT3 (CC)
   [EXE] trap_isolated @ 0x90c721 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90c897 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90c8ad -> INT3 (CC)
   [EXE] trap_isolated @ 0x90c9c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90c9cb -> INT3 (CC)
   [EXE] trap_isolated @ 0x90d06e -> INT3 (CC)
   [EXE] trap_isolated @ 0x90d08b -> INT3 (CC)
   [EXE] trap_isolated @ 0x90d0ab -> INT3 (CC)
   [EXE] trap_isolated @ 0x90d102 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90faa8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90fc1b -> INT3 (CC)
   [EXE] trap_isolated @ 0x90fcb9 -> INT3 (CC)
   [EXE] trap_isolated @ 0x90fdd2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x910783 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9112c4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x911322 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91133a -> INT3 (CC)
   [EXE] trap_isolated @ 0x911c70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x911df2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x912102 -> INT3 (CC)
   [EXE] trap_isolated @ 0x912412 -> INT3 (CC)
   [EXE] trap_isolated @ 0x912534 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9128a7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x912ad2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x912c18 -> INT3 (CC)
   [EXE] trap_isolated @ 0x912ee2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x912fa5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x913232 -> INT3 (CC)
   [EXE] trap_isolated @ 0x913486 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9136b2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91390e -> INT3 (CC)
   [EXE] trap_isolated @ 0x913b46 -> INT3 (CC)
   [EXE] trap_isolated @ 0x913e66 -> INT3 (CC)
   [EXE] iat_thunk @ 0x913fad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x914170 -> INT3 (CC)
   [EXE] iat_thunk @ 0x9141fd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x91444d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x91469d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x914770 -> INT3 (CC)
   [EXE] trap_isolated @ 0x914950 -> INT3 (CC)
   [EXE] trap_isolated @ 0x914dd7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x919989 -> INT3 (CC)
   [EXE] trap_isolated @ 0x919b09 -> INT3 (CC)
   [EXE] trap_isolated @ 0x919cfb -> INT3 (CC)
   [EXE] trap_isolated @ 0x919ed5 -> INT3 (CC)
   [EXE] iat_thunk @ 0x91a269 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x91a65b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x91aa6b -> INT3 (CC)
   [EXE] trap_isolated @ 0x91ad0b -> INT3 (CC)
   [EXE] trap_isolated @ 0x91ad70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91b0db -> INT3 (CC)
   [EXE] trap_isolated @ 0x91b5fa -> INT3 (CC)
   [EXE] trap_isolated @ 0x91bc0a -> INT3 (CC)
   [EXE] trap_isolated @ 0x91c03c -> INT3 (CC)
   [EXE] trap_isolated @ 0x91c29b -> INT3 (CC)
   [EXE] trap_isolated @ 0x91cb7c -> INT3 (CC)
   [EXE] trap_isolated @ 0x91ccdc -> INT3 (CC)
   [EXE] trap_isolated @ 0x91cf00 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91d04d -> INT3 (CC)
   [EXE] trap_isolated @ 0x91d100 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91d300 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91d59b -> INT3 (CC)
   [EXE] trap_isolated @ 0x91d9cc -> INT3 (CC)
   [EXE] trap_isolated @ 0x91dd75 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91dd91 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91dfaa -> INT3 (CC)
   [EXE] trap_isolated @ 0x91e86b -> INT3 (CC)
   [EXE] trap_isolated @ 0x91e871 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91ecd2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91ecd8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91edc0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91ef31 -> INT3 (CC)
   [EXE] trap_isolated @ 0x91f4a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9202d2 -> INT3 (CC)
   [EXE] iat_thunk @ 0x92058d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x920a5b -> INT3 (CC)
   [EXE] trap_isolated @ 0x920c6c -> INT3 (CC)
   [EXE] trap_isolated @ 0x921080 -> INT3 (CC)
   [EXE] trap_isolated @ 0x921a9b -> INT3 (CC)
   [EXE] trap_isolated @ 0x922d96 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9232a7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x923400 -> INT3 (CC)
   [EXE] iat_thunk @ 0x9234ba -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x923b4e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x923dcc -> INT3 (CC)
   [EXE] trap_isolated @ 0x9242a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9248c0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x924c02 -> INT3 (CC)
   [EXE] iat_thunk @ 0x924cdd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x924f80 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9251b5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x925319 -> INT3 (CC)
   [EXE] trap_isolated @ 0x92537c -> INT3 (CC)
   [EXE] trap_isolated @ 0x9259f0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x925cf4 -> INT3 (CC)
   [EXE] trap_isolated @ 0x92746b -> INT3 (CC)
   [EXE] trap_isolated @ 0x9275ab -> INT3 (CC)
   [EXE] trap_isolated @ 0x9275c7 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9275d6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x927b47 -> INT3 (CC)
   [EXE] trap_isolated @ 0x927b4d -> INT3 (CC)
   [EXE] trap_isolated @ 0x927f1c -> INT3 (CC)
   [EXE] iat_thunk @ 0x92830d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x928370 -> INT3 (CC)
   [EXE] trap_isolated @ 0x9286a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x928fd2 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93d1c5 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93d1e1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93d57b -> INT3 (CC)
   [EXE] trap_isolated @ 0x93d581 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93dc80 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93e1a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93f6a8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93fae8 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93fb30 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93fd39 -> INT3 (CC)
   [EXE] trap_isolated @ 0x93fe77 -> INT3 (CC)
   [EXE] trap_isolated @ 0x940210 -> INT3 (CC)
   [EXE] trap_isolated @ 0x940410 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94043e -> INT3 (CC)
   [EXE] trap_isolated @ 0x94049e -> INT3 (CC)
   [EXE] trap_isolated @ 0x940730 -> INT3 (CC)
   [EXE] iat_thunk @ 0x940989 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x940b70 -> INT3 (CC)
   [EXE] iat_thunk @ 0x940d5b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x94599c -> INT3 (CC)
   [EXE] trap_isolated @ 0x945afc -> INT3 (CC)
   [EXE] trap_isolated @ 0x945de0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x945fe0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x946038 -> INT3 (CC)
   [EXE] trap_isolated @ 0x946101 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94698c -> INT3 (CC)
   [EXE] trap_isolated @ 0x946f86 -> INT3 (CC)
   [EXE] trap_isolated @ 0x947259 -> INT3 (CC)
   [EXE] trap_isolated @ 0x947670 -> INT3 (CC)
   [EXE] trap_isolated @ 0x947752 -> INT3 (CC)
   [EXE] trap_isolated @ 0x947815 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94792d -> INT3 (CC)
   [EXE] trap_isolated @ 0x94793b -> INT3 (CC)
   [EXE] trap_isolated @ 0x947a5d -> INT3 (CC)
   [EXE] trap_isolated @ 0x947ca0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x948420 -> INT3 (CC)
   [EXE] iat_thunk @ 0x9486b3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x948970 -> INT3 (CC)
   [EXE] trap_isolated @ 0x948b4e -> INT3 (CC)
   [EXE] trap_isolated @ 0x948fa0 -> INT3 (CC)
   [EXE] iat_thunk @ 0x94904d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x9496b6 -> INT3 (CC)
   [EXE] trap_isolated @ 0x949860 -> INT3 (CC)
   [EXE] trap_isolated @ 0x949a50 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94a251 -> INT3 (CC)
   [EXE] iat_thunk @ 0x94a6dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x94ab24 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94ae70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94af70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94b070 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94b7a1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94c270 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94c370 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94cd90 -> INT3 (CC)
   [EXE] iat_thunk @ 0x94d08d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x94d0c3 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94d0f1 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94d133 -> INT3 (CC)
   [EXE] iat_thunk @ 0x94d6a9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x94d6c6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x94da5b -> INT3 (CC)
   [EXE] iat_thunk @ 0x94dedd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x94e699 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x94e6b6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x94e8a0 -> INT3 (CC)
   [EXE] trap_isolated @ 0x94ed50 -> INT3 (CC)
   [EXE] trap_isolated @ 0x953213 -> INT3 (CC)
   [EXE] trap_isolated @ 0x95334e -> INT3 (CC)
   [EXE] trap_isolated @ 0x95381e -> INT3 (CC)
   [EXE] trap_isolated @ 0x953d70 -> INT3 (CC)
   [EXE] trap_isolated @ 0x953d88 -> INT3 (CC)
   [EXE] trap_isolated @ 0x953e91 -> INT3 (CC)
   [EXE] trap_isolated @ 0x954228 -> INT3 (CC)
   [EXE] trap_isolated @ 0x954331 -> INT3 (CC)
   [EXE] trap_isolated @ 0x95467e -> INT3 (CC)
   [EXE] trap_isolated @ 0x954890 -> INT3 (CC)
   [EXE] trap_isolated @ 0x954aaa -> INT3 (CC)
   [EXE] trap_isolated @ 0x954b50 -> INT3 (CC)
   [EXE] trap_isolated @ 0x954f73 -> INT3 (CC)
   [EXE] trap_isolated @ 0x955422 -> INT3 (CC)
   [EXE] iat_thunk @ 0x95590c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x95593c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] trap_isolated @ 0x955a51 -> INT3 (CC)
   [EXE] iat_thunk @ 0x9666c6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9666e0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x966876 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x966890 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x969f7d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x96a1cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x97cc2d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x97ce7d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x97d0cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x97e32b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x980d4d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x98368d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x992dad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x99e9c1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x9a13d0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x9a3451 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x9af041 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x9bfefa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c233d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c258d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c27dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c2a2d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c2c7d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c2ecd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c311d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c336d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c35bd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c380d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c3a5d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c80e3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c8267 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9c8294 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9d6959 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9e142e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9e144c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9e9c0d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x9e9e5d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa0d98a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa0d99a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa0d9aa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa0d9ba -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa0d9ca -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa0d9da -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa1d30d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa1d884 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa1da64 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa31c06 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa31cc9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa31de9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3251b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3254a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa35e2d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa37495 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa37ae8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa386ca -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa38790 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3e7bd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3ea0d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3ec5d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3eead -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3f0fd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3f34d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3f59d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3f7ed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3fa3d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3fc8d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa3fedd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa4df19 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa4df36 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa4e33b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa4e42b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa4e459 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa4e5b9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa4e67a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa5023b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa50266 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa50389 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa51e8d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa5333d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa8831b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa88336 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa8856b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa88586 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa8868b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa886a6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa887ae -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa887cc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa88eae -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa88ecc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa88fdb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa88ff9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa895bb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa895d9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa8980e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa8982c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa89cce -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa89cec -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa8a8be -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa8a8dc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa8ac4e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa8ac6c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa92547 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa9606a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa9607a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xa9608a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xaad91b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xaadd2d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xab180a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xab1826 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xab33cb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xab33f6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xad51b6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xad51d0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xad554d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xad67f9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xad6816 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xad68fb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xad875d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xadfb6d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xae01aa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xae0269 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xae09df -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xae0a01 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xae336d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xae35bd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xae380d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xae3a5d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xaf86bb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xafe2aa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xafe2c9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xafeb69 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xafec4b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xaff1fd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb02229 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb02246 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb025ea -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb02609 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb05bb2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb05bd3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb06dfd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb23e8d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb240dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb3eaad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb3ecfd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb3ef4d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb3f19d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb70dad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb7485d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb74aad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb74cfd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb8808d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb88809 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb88c9a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb89abd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb89d0d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb92fbd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xb93c19 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xba12d3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xba28fb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xba32b9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xba37b9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbc2fa9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbc2fc6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbc30ab -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbc317a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbc3239 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbc5efa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbc70fd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbc734d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbc759d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbcfa3a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbcfb49 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbd07f6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbd0818 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbd0c8d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbd461a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbd4afb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbf5393 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbf5bed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbf5e3d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbf608d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xbf62dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xbf7ff6 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xbf8050 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc00332 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc00363 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc00394 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc003c5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc00402 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xc059bd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc1569b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc16acd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc16d1d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc6227d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc624b9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc63375 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc67cbc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc67d6c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc68345 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc689d2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc6ca59 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc70ddd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xc75b4e -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc764df -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc76511 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc765d5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc76607 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc7666b -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc76874 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc76c02 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc7f49d -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc7f4e3 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc7fd78 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc80334 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc803b4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc80431 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc804c9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc805e1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8062c -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc80837 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc80b01 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc80bb3 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc80e08 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc80ef9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8402d -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8403e -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc84056 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc840ce -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc844c2 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc84eb5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc84f56 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc853d9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc85696 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xc8591a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xc89dae -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc89e4f -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8a51c -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8a5c1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8a5d9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8a5ed -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8a60a -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8a61e -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8abab -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8ac1e -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8ac4c -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8acbf -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8bf1b -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8bf8e -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc8bfbc -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xc9210b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc9231b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xc9234a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xc92736 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc943c5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc94438 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc94470 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc944e3 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xc9477d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xc9478d -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc948e9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc94b93 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xc94c5e -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xc9a1b6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xca0081 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca0ea4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca0eb1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca15d1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca15f9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca1606 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca1613 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca1f6d -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca1f86 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca1f93 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca1fac -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca1fe8 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca2011 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca2541 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca254e -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca257f -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca25a7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca25b4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca2724 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca288e -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca2d3d -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca2d50 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca2d82 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca2d8f -> INT 3 (CD 03)
   [EXE] cd03 @ 0xca3c5e -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xca7fbf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xcaaa8b -> INT 3 (CD 03)
   [EXE] cd03 @ 0xcaad11 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xcab353 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xcab5e8 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xcb04a1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xcb07b3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xcb7326 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xcbb99b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xcbc60c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xce102b -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xce108c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd0465a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd1be97 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd1e382 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd1e3a2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd271e7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd28b4a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd3243e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd32da3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd34502 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd34682 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd34702 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65c82 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65ca4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65cc2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65d52 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65d72 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65d92 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65db2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65dd2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65df2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd65e12 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd68ad3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd6a729 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd6ebf2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd6ec12 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd6ec32 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd7278d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd75e6c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9cadb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9cb06 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9cd3a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9ceb9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9e47b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9e496 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9e57b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9e596 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9e80b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9e826 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9e90b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xd9e926 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda258d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda2869 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda2886 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda2aba -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda340b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda38ad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda41bb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda41df -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda452a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda46c5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda46df -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda46fe -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda488a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda48ac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda49d6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda49f5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda62e9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda6339 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda63ad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xda65fd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdb596a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdb5986 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdb5a6b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdb5b39 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc10b6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc1332 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc1353 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc1443 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc1465 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc184d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc1cb9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc28a9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc28cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc319e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc400d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc425d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc68c9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc68e6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc69aa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc6a8b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc6ca9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc934e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc949e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdc95ee -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdca2cb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdca2fb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdcbb8d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdcbf2b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdcbf46 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdcc6f2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdcc713 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdccd2d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdccf7d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdd5529 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdd6828 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdd6849 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdd69d8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdd69f9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdd6a1e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xddacdb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xddd1ed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xddd43d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xddefcd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xde8386 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xde83a6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xde84f9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xde8519 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xde8692 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdea43a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdee6c8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdee81e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdee83c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdf15ee -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdf4a10 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdf4a35 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdf4b50 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdf4b75 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdf701d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdf726d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdf74bd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdffcda -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xdffcea -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe06c3d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe07339 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe10529 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe1d4f0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe2e755 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe389a3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe389e2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xe3bdd9 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xe41aad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe4519d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe453ed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe46b6a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe746d1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe74710 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe749c1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe74a11 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe750fe -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe75131 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe75a6a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe7646d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xe766bd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xea8265 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xea8485 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeadee0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeae970 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeaf5bb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeaf5e1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeafd3b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeafd61 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeb01ad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeb01d3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeb056d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeb4bdd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeb4e2d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeb507d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeb52cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeb551d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xeb576d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xed99e1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xed9a03 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xed9fed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xee00ca -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xee98cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xef28ca -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xef311d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf233d7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf4787d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf47acd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf6904e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf6907e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf75453 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xf860b1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xf89713 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xf9105f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xf918ff -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xf91b58 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf91bb6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf91c98 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf92115 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf924a8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xf98117 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xf98371 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0xfa65a7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0xfc216d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0xfec3d4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0xffae81 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x100135d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10100a5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1011632 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10118bb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10118db -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10421a5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x105d011 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x10681a2 -> ntdll.dll!RtlFreeHeap
   [EXE] iat_thunk @ 0x1073b56 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1073b75 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1074e95 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10760d5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x107f690 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x108709f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x108712e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1094100 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1094469 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10bd9ef -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10e61b5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10e6693 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10fbb40 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x10fd199 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x110e790 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1116690 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1116ce9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1118e48 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x111b430 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x111ced8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x111da0d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x111ebcc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x11252aa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1127eab -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x11284d7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x112cbe0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1133192 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1133875 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x114a9f4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x116c006 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1176bc2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1198a61 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x11c969d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x11c96a6 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x11c96b0 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x11db5d2 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x120b965 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x120ba18 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x120cc05 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x12465b9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1246840 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1246cd0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1247335 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x12474f5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1248691 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x12b419b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x12ba8d7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x12d5147 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x12dac87 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x12dae72 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1300f54 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1301dd4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1304ac0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x130acf7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x130cb6f -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1310187 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1310372 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x1317313 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x133815d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13381b3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x133e007 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13466ad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1346927 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1346b12 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x135a09f -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1364cf0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x137fbdf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1380488 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x138b630 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13a5159 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13a5178 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13a54df -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13a553f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13abcd5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b2f42 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b2f79 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b331b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b3369 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b3388 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b3771 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b3791 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b3891 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b38b1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b38d1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b38f1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13b3911 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13c3c8b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13c3cac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13c3ccc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13c3edc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13c3efc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13c3f4a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13c763f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13c8d51 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13ce170 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13d0c90 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13d41b1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13d4351 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13d4471 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13d718a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13d719a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13d71aa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x13ed732 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x13f38ce -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x13f9acd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x13fd003 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x13fe42c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x14073ec -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1411592 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x14117f1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x14202ee -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1426641 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x14283a1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x1432ff1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1447f07 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1447f19 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1447f97 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1447fa9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x14737a1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x147e832 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1486e91 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x148a524 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x148c980 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x148c9bc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x14ae641 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x14c6b4c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1506f9c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1535b70 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1561af2 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x1561b05 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1579165 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x15799f5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x157d0a5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x157d245 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x157fb77 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1595d05 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x15e5929 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x15e5946 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1603a8f -> HyperionLazy(0xbdbc)
   [EXE] iat_thunk @ 0x1615416 -> GDI32.dll!DeleteObject
   [EXE] iat_thunk @ 0x161548f -> KERNEL32.DLL!GetLastError
   [EXE] iat_thunk @ 0x161575e -> HyperionLazy(0x9dfc)
   [EXE] iat_thunk @ 0x1615b49 -> HyperionLazy(0x9f33)
   [EXE] iat_thunk @ 0x1618ef9 -> USER32.dll!DestroyCursor
   [EXE] iat_thunk @ 0x161adbb -> HyperionLazy(0x967c)
   [EXE] iat_thunk @ 0x161b046 -> USER32.dll!SystemParametersInfoA
   [EXE] cd03 @ 0x161b7c1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x164abce -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x164abeb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x164ac3c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x164ac54 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1650e36 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1654cc8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x16a829f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x16ab231 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x16d1e9f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x16d201f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x16d4f28 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x16d5139 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x16d5fd7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x16dee50 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x16fb8d0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x16ff900 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x171b20c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1733e1e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1737d67 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1742949 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x176934f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x176bde2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x176d126 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x176d30c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x176ff41 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x1770881 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x1770fb1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1772a16 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x181a5bc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x182626f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x182889c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x182f0a4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x182f0d6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x183da9c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x183e901 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x183f051 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x183fac7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x183fc3d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1847416 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1847a4e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x18582f0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x185c680 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x185cd73 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x186fc04 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x187df61 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x188762c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x18f5ab1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x191b5d7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1944f96 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1964b0c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1976a80 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x19e3191 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x19f0e12 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1a09b9c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1a09d9f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1a09f1f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1a2a89e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1aa900a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1accc3b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1ae60d1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x1b51b41 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x1b74e82 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1b77ef7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1b78297 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1b78dd3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1b96e1a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1b96e6a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1baff82 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1bf7034 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1c1dff9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x1c21d81 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1c226f8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c2344c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c2346c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c23bd3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c27f7d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c296e5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c396f1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c3c014 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c3c26f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c3d182 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c3dc1d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c4a8dc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1c4a8f1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1cadb11 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1cd343f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1cdd9a4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1d4a413 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x1d4a853 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1d60d4a -> KERNELBASE.dll!CloseHandle
   [EXE] iat_thunk @ 0x1d684e4 -> KERNELBASE.dll!LocalFree
   [EXE] iat_thunk @ 0x1d69c31 -> KERNELBASE.dll!TlsSetValue
   [EXE] iat_thunk @ 0x1d69c5f -> KERNEL32.DLL!TlsGetValue
   [EXE] iat_thunk @ 0x1d69f09 -> ntdll.dll!RtlFreeHeap
   [EXE] iat_thunk @ 0x1d6a677 -> KERNELBASE.dll!SetEvent
   [EXE] iat_thunk @ 0x1d6a6c1 -> KERNELBASE.dll!SetEvent
   [EXE] iat_thunk @ 0x1d8441e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1d8443e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1d8c3ad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1d8f36d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1d8f4cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1d9726b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1d973e7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1d9f630 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1da5463 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1da5f42 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1dad528 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x1dd6458 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1dddb80 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1ea9421 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x1f6af06 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] cd03 @ 0x1fa1849 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x1fc1adf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fc1c98 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fc2495 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcb884 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcbab1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcc54f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcc708 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcc78f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcc948 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcc9cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fccb63 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fccbef -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fccd96 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcce0f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fccfa3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcd1cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcd28f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcd448 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcd4cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcd663 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcd6ed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcd879 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcd8ed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcdabd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcdb7c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcdd15 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcdd9d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcdf33 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcdfaf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fce168 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fce21a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fce29f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fce458 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fce4dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fce6b4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fce7d5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fce8c3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fce978 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcea5d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fceb21 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcebed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcecad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcee43 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcef2d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcf018 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcf09d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fcf233 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fd7cc2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x1fd7f42 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x200a7cf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x200df91 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x200e1f2 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x200e451 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x200e6b2 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2011965 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x201a39c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x201a7bf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x2023092 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x20284c1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x204a74b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x205d762 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x205de3f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x205fb24 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2063bdd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2063c14 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2063c9a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2063cfa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x206a0fe -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x206a235 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x206ab88 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2078bda -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x207c65b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20825ac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x208262b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20829d0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2082a60 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2082aa0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2087692 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20876b2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2094bd0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20ab8cc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20c0051 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20c232a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20c2b3b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20c815f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20c8853 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20c8daf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20c990b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20cb7df -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20cb956 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20d6ccb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20dff2e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x20e372c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x21048b9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2104c74 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2105911 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x21060b7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x21062c7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2106c46 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x21071f7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2107318 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210742b -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2107685 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2107949 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2107bba -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2108669 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210898d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2108e3f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210905f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2109dc7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210a142 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210a2a4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210aaef -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210adf4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210af70 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210b1c4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210b622 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210bdc1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210c057 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210c2b1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210c42f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210c9d5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210cb01 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210cc93 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x210ccef -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x210ceac -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210cffc -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210d1bc -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210d2e5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210d3f5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210d5b2 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x210d5cf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x210d5ef -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x210d6e2 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210d8e9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210dc8b -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210f8f3 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x210fdcc -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2110ad7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2111056 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2111e56 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2112bfd -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2112d11 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x211318e -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2113428 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2113a32 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2113e4e -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2114049 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x211421d -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x212016e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x212030e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x2125526 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x21256f6 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x212edf2 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x212fb77 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x212fcff -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2132c00 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x21330ee -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2133114 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2134713 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x213489d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x21350ba -> INT 3 (CD 03)
   [EXE] cd03 @ 0x21350d6 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x213c531 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2167d29 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2174820 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21aa004 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21b89cf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21b89ef -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21b8a0f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21bbb8c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21bbbac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21bbbcc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21bbc4c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21bbe0c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21bbe2c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21f15ad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x21fd850 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2216f75 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2260c9b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x241d3e4 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x241d50a -> ntdll.dll!RtlDeleteCriticalSection
   [EXE] iat_thunk @ 0x241d5f0 -> ntdll.dll!RtlDeleteCriticalSection
   [EXE] cd03 @ 0x241ec2b -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x244fbe8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2450029 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x2482974 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2483b0b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2483dd8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2486877 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2486acf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2487157 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x248b368 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x24a0c51 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x24d75bc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x24e5c6d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x24f1e5a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x251f474 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2520e61 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252c3a4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252c4b4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252c4d4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252c4f4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252c514 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252c534 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252c554 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252c574 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252cd24 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x252cd44 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x256c013 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x25dc92a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x25e3f0a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x25eb1c1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x25f318c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x25fb411 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x25fc391 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x25fd29f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x25fda5c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2603b9f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2606741 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2606761 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x26168ad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2641316 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2641366 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2641456 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x264149a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x26414e6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x264152a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2641589 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2649683 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2649b67 -> ntdll.dll!RtlEnterCriticalSection
   [EXE] iat_thunk @ 0x2649b6e -> ntdll.dll!RtlAcquireSRWLockExclusive
   [EXE] iat_thunk @ 0x2649bc7 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x2649bce -> ntdll.dll!RtlReleaseSRWLockExclusive
   [EXE] iat_thunk @ 0x2649d8f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2649f03 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2649fad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2653476 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2655e29 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2655e39 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2655e49 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2655e59 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2655e69 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2655e79 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2655e8c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2655eac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2656638 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x26567ca -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x26568d2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x26569c9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x265708c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x265adee -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x265cdda -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x265ecdf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2666b43 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2667f33 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2667f65 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x26760f4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x26de7e1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x26de801 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2706bd2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2708939 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2708957 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2708ab7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b1b0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b3fd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b41d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b43d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b45d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b47d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b69d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b72d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b750 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b7ba -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b879 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b8c9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b8f5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b93c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b95c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270b97c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x270bd08 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x27107d6 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x271fb06 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2720354 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2721232 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2724f77 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x275f0a5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f558 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f592 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f608 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f74f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f7ba -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f825 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f868 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f87a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f88c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f8ff -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f95f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275f974 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275fa26 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275fa90 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275fad3 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275fae8 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275fafa -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275fb6c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x275fbc7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x276005a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x27602c7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2760304 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2760333 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x276034e -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2784cea -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2784cf6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27bf10b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27bf548 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27c10fd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27c179d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27c3486 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27c49cb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27c6cc4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27c8adc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27c8afc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27c8b1c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27c8d6c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27d60f0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x27e3e5a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x27fb04d -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x281411a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x281bed6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2826b48 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2826bbd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2831428 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28316f7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2831732 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2831ae8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2832572 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2835256 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2835286 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28352b6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28352fe -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x283532f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x28362a5 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2844a5c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28bb186 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28bbc41 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28bbd15 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28bbd3d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28bdf45 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28beb3a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28beb5a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28bf3db -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28bf42d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28bf45d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28c1f3e -> KERNELBASE.dll!ReleaseSemaphore
   [EXE] iat_thunk @ 0x28fc547 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x28fde07 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x29388ec -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2938fac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x293dee1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x293f043 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2944a9f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x294548f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x29652ef -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x296595f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x296b1f6 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x296b55d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x296bf3b -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x296ee9c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x297081f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x297603b -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2976a7f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2983bc8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x29b70e7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x29b713d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2ad4dc6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2ad4e12 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2b86fd7 -> KERNELBASE.dll!VirtualFree
   [EXE] iat_thunk @ 0x2b96cbd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x2b98299 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2ba760f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2ba763e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2ba91d6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2babf2a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2bae67f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2bae94f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2bb1ec6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2bb344f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2bb349f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2bc93a0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2bd5d8e -> WS2_32.dll!closesocket
   [EXE] cd03 @ 0x2bd81e1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2bd8442 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2bf91da -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2bf9839 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2bfe0dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c0378e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c0584f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c09607 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c0e13b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c0e2ac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c0f258 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c119b1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c13db1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c1489b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c148ee -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c14a7c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c186b3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c18fd8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c18fe8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c18ff8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c19d9c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c1a0db -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c1d1a6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c1f732 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c1f7aa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c1f80a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c1f867 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c1f8b0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c226b9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c22fed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c2300b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c23a3b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c29122 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c3a1d1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c3a4ee -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c3a530 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c3aefd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c3b35f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c3c2a5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c3d4f2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c3d654 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c42017 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c44d26 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c44d5b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x2c4996f -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2c5ac2e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2c5adb0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2d11c1b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2d11c3b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2d11c5b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2d11c78 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2d482c1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2d486b6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2d48867 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2d489cd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2d646ee -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2da5e9e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2da6061 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2da6091 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2da60e7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2da64bb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2da7739 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2da77e1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2dc9ee0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2dcc110 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2dcc179 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2dd5e19 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e1390c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e146d9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e15a55 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e15a67 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e1ceca -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e1cf0a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e1cf4d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e1cf8d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e1d1c0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e2f125 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e2f16e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e2f1b8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e2f204 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e2f268 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2e2fe32 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x2e3de4e -> INT 3 (CD 03)
   [EXE] cd03 @ 0x2e46001 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2f23620 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2f45aa2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2f6c1b6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2f9d48a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x2f9dc02 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x2fb9129 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x2feb654 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3049332 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x308b5b8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x30c1931 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x30db3ab -> INT 3 (CD 03)
   [EXE] cd03 @ 0x30e88f1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x30e9f51 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x31018b1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3159a20 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x315e241 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x31b2921 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x32cc48f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x32f5480 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x333333a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3338048 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x333818b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x33387cc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3338ad3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x333b059 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x333fc19 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x334520b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x335c991 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x335cb88 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x335cd0b -> INT 3 (CD 03)
   [EXE] cd03 @ 0x335cf27 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3362d52 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x336a108 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x33804b1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x33892ce -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x34371f4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x34394a4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x343b460 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x343c0ac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x34927d0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3492be3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x34b46b4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b49e7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b5489 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b54af -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b54d5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b5678 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b5838 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b59fa -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b5c5d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b5e1a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b5fda -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b619a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b635a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b651a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b66da -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b689a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b6aff -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b6cb8 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b6e7a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b80af -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b830d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b84ca -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b872f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b88ea -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b8aaa -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b8d0f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34b8f6f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x34baaf2 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x351b8f2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x351dfaf -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3522386 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x352af2d -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x353281d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x353cab0 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x353fc45 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x353fcbe -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x355bc7d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3592151 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x359216a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35929aa -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35929b6 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35a04c3 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35a1252 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35a1f31 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x35bfdad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x35ce879 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35e94df -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35f2362 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35f9e51 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35fcd16 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35fd254 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35fe53f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x35ff5ea -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3613597 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3615633 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3616e30 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3616e4b -> INT 3 (CD 03)
   [EXE] cd03 @ 0x361ac4b -> INT 3 (CD 03)
   [EXE] cd03 @ 0x361ac98 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x36269c0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3626cba -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3626d35 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x363d5d3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x363d606 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3640e70 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3648756 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x365329b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x36674f4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3667517 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3668643 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3671f85 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3673440 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x367355f -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x367e10f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x367e12f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x367e14f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x367e2dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x368064e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x36827e7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x368d5fc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x368d72c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x368d74c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x368d76c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x368d78c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x368db53 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x368db6c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x368db8c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x36950e6 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36950f0 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36950fc -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3695107 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3695111 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x369511c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x369e14e -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x36a14d0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x36a90c2 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36d9c1a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36d9c42 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36e5ed8 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x36ece59 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x36ecef7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x36ecf19 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x36ef041 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36f4813 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36f491c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36f5a97 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36f5aa6 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36f5ab4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36f5bf1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36f5bfb -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36f5d5e -> INT 3 (CD 03)
   [EXE] cd03 @ 0x36f5d68 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x36fbc7a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x370527d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x371561f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3716e07 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x375c13f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x37602b7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3760352 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x376b31e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x376bee1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x377b6e9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x377b709 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x377c909 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x377c929 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x377f3fb -> INT 3 (CD 03)
   [EXE] cd03 @ 0x377fa9b -> INT 3 (CD 03)
   [EXE] cd03 @ 0x37839f1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x37851bb -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x37a64c5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x37a6509 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x37ada8b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x37aeb6d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x37e0603 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x37efff7 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3802b5a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3813351 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x38133c3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x382534c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3827287 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x38660cd -> INT 3 (CD 03)
   [EXE] cd03 @ 0x387e31b -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x387ef6f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x388049b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3887531 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x388e6b8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x388fc78 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x388fc9c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x388fcec -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x388fe87 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3890055 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x389008f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3890b51 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3895772 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x389911c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x389c351 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x38abce3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x38bf993 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x38bfb6b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x38bff5b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x38c06cd -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c09d0 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c0b2d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c0b42 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c0ea4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c0feb -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c1098 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c1374 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c13bd -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c187c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c1b66 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c1fc9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c2fba -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c2fc2 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c3f3c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c3f44 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c3f4d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c3f56 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c3f68 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c3f70 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c3f79 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c42a0 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c42ab -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c42b3 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c44c9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c450f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c455f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c4889 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c4a51 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c4b95 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c4bbc -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c6759 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c6a2d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c6a4c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c6fe1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c7005 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c8573 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x38c857c -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x398f66d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398f690 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398f7d4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398f857 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398f8e4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398f967 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398f98d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398f9e0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fa03 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fa50 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fa70 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fa93 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fab0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fb97 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fc27 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fc50 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fc73 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fcc0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398fce3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x398ff60 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x39ab9e1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x39b8961 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x39b8bad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x39bd97f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x39ce3c7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x39ce3e7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x39ce407 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x39e103a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x39e6e6d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x39e8461 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3a07392 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3a18089 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3a18189 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3a4024c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3a97313 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3a97369 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3a98a79 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3a98dc7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3b18536 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3b22dd8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3b367b1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3b36a11 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3b45e6c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3b6ea64 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3b7dc97 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3b80657 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3be0177 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3be084d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3be08b0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3be08d4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3be09eb -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3be0a12 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3be3360 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3be33b0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3be7ed1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3bee476 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3c1909b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3c1a16f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3c90b0c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3caa901 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3d0d4a1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3d0efb0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3d0f134 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3d1c59b -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3d1e07a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3d3bb41 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3d68f16 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e0e127 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e0e193 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e0e1dd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e0e22d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e0e27b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e0e314 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e0e35b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e0e3ab -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3e1306a -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3e1578a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3e19416 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x3e1991d -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3e2b1f5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e50eec -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e687bf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e699b8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e69edf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e7272d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e75d5b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e75e26 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e76d66 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e7c762 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e800a5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e81930 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e846e8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e8498c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e84a66 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e88912 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e8901d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3e9f380 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3ea61ab -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3ea62ea -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3ea9d71 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3eab77b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3eab8ba -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3eaf2c1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3eb1755 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3eb23a6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3ed107f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3ed2bd3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3eef1e6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3ef8a92 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3f11b77 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3f60952 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3f721e7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3f8644f -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3fbb6a1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3fbd701 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3fd51f0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x3fd9dd7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x3fddfdb -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x3ff5d19 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4039fc7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4069f5d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x40a3250 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x40ad8b5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x40b126d -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x40ece4d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x40eceaa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x40f4507 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x40fcde7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x4106761 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x41094c7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x411c324 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x411d524 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x411f924 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x412c8b6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x412f337 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x41aeb3f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x420b4a8 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4467250 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x446797f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x44679b2 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x44a9efb -> INT 3 (CD 03)
   [EXE] cd03 @ 0x44a9f29 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x44a9f65 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x44aa017 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x44bbace -> INT 3 (CD 03)
   [EXE] cd03 @ 0x44bbb4a -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x44c4df0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44cbc9f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44cbcbe -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44cc460 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2a71 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2b71 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2bcf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2bef -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2c6d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2ccf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2cf2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2d12 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2d32 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2d52 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2d76 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2d92 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2db2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2dd7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2e67 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2ec2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2ee7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2f07 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d2f93 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3028 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d31a2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d31c2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d31e2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3202 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3222 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3362 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3382 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d33a2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d33d2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3532 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d39f4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3a14 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3a34 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3a54 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3a74 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3ea4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3edd -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d3fd3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d400d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d404d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d408d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d42f4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d4314 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d4334 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d4354 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d45c4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d45e4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d4604 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d4854 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d51a4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d51c4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d51e4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d5204 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d5224 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d5484 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d576e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d5794 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d57b4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d57d4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d57f4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d5814 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d7934 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d797f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d799f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d7b6b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d7b8c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44d7bac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x44fb258 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x452030b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x452db17 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4534f9d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x4539841 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x454da24 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x454db14 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x454f8ea -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x45b6726 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x45d7ced -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x45d7eda -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x45d7f6f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x45d7f8f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x462de72 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x462dede -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x46687aa -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4684bbf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4685481 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x468cb9b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x46bd8db -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x46bd93f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x46c1256 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x46dda3c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x46ddbf0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x472cc7d -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4731ba9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x476c45b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x476c488 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x47dc910 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47dca28 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47de251 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47de7c7 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47e091c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47e18c7 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x47e6034 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x47e7128 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47e7552 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47e79c5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47e7ce3 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47e7f5a -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47e81ca -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f60b9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f61b5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f62e9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f6378 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f640b -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f69ba -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f6abf -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f70be -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f724c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f7437 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f8c4f -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f96a6 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47f9722 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47fa1d9 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47fa279 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47fa699 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x47fdce0 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4805acc -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x480b3c4 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x480bc37 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x480c1f5 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x482c414 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x48b47be -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x48ea3db -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x48fdac5 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x490d73e -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4917a39 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x49180bd -> INT 3 (CD 03)
   [EXE] cd03 @ 0x491813d -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4918a8b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4918ac2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4918b09 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x4918cde -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4919162 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x49192f6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x4919cb1 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4919fc3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4919ff6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x491a046 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x491a1db -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x491a2d9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x491a2f6 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x491a31a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x491a33e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x491a362 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4929a68 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4929a83 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4929de8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4929e03 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4929f08 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4929f23 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x492e4b5 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x492e51d -> INT 3 (CD 03)
   [EXE] cd03 @ 0x492e52c -> INT 3 (CD 03)
   [EXE] cd03 @ 0x492e594 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x492e5fc -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4969d48 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x496cc1e -> CRYPTSP.dll!CryptReleaseContext
   [EXE] iat_thunk @ 0x496e5c8 -> CRYPTSP.dll!CryptHashData
   [EXE] iat_thunk @ 0x4992962 -> KERNELBASE.dll!VirtualFree
   [EXE] cd03 @ 0x4996e80 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x4997d76 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x4997f31 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4a515c4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4a54852 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4ac52cf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4ae637c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x4b51bcf -> INT 3 (CD 03)
   [EXE] cd03 @ 0x4b51c07 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x4bc6968 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x4bc6ac2 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x4becc13 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4bed92b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4bed94b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4bed970 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4bed98d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4bed9ad -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c6cd69 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c82107 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c87467 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c8bf5c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c91c87 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c91df7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c93837 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c93847 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c93857 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c93867 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c93877 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c93887 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c93897 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c938a7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c938b7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c938ca -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c938d7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c938e7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c938f7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4c93907 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4df059a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4df5aa1 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4df5acf -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4df909f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4dfae68 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x4e5f875 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x50849e2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5084a68 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5109513 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x51119e0 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5111b12 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5254bf9 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x526b4c8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x528aa88 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x528ad08 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x528ad26 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x528cce5 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x52ac808 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x52af26a -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x52b5b28 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x531e81d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5905094 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x59052d3 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5996532 -> combase.dll!CoUninitialize
   [EXE] cd03 @ 0x59c77ff -> INT 3 (CD 03)
   [EXE] cd03 @ 0x59e3a8f -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x5ae814e -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5ae8823 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5aebc2f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5aed643 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5aed66b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5af9074 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5af946d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5af9571 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5af9604 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5af9611 -> ntdll.dll!RtlEnterCriticalSection
   [EXE] iat_thunk @ 0x5af9641 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x5af9752 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5af9980 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5af9c5d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5af9e3f -> KERNEL32.DLL!GetProcAddress
   [EXE] cd03 @ 0x5af9f6b -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x5af9fd7 -> KERNELBASE.dll!WideCharToMultiByte
   [EXE] iat_thunk @ 0x5afc47a -> combase.dll!CoUninitialize
   [EXE] iat_thunk @ 0x5afd7b7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5afd996 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5afde6d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5afdead -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5afdf3d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5aff691 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b01911 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b01974 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b01ee2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b033d8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b0349f -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b034b2 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b034c1 -> KERNELBASE.dll!CloseHandle
   [EXE] iat_thunk @ 0x5b037a2 -> KERNELBASE.dll!WaitForSingleObjectEx
   [EXE] iat_thunk @ 0x5b03858 -> KERNEL32.DLL!TlsGetValue
   [EXE] iat_thunk @ 0x5b03a18 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b03a28 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b03c3b -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b041ac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b041ee -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b04449 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5b044a4 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] cd03 @ 0x5bbb4df -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x5d501fb -> HyperionLazy(0x967c)
   [EXE] iat_thunk @ 0x5d50c90 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5d81461 -> KERNEL32.DLL!GetLastError
   [EXE] iat_thunk @ 0x5de4e54 -> ntdll.dll!RtlInitializeSListHead
   [EXE] iat_thunk @ 0x5de575c -> RobloxPlayerBeta.dll!sub_0xd17810
   [EXE] iat_thunk @ 0x5de5975 -> KERNEL32.DLL!GetCurrentThreadId
   [EXE] iat_thunk @ 0x5de5a59 -> KERNELBASE.dll!SwitchToThread
   [EXE] iat_thunk @ 0x5de5cda -> KERNEL32.DLL!GetLastError
   [EXE] iat_thunk @ 0x5de6481 -> KERNELBASE.dll!LocalFree
   [EXE] iat_thunk @ 0x5dea8d3 -> ntdll.dll!RtlInitializeConditionVariable
   [EXE] iat_thunk @ 0x5dea8f4 -> KERNELBASE.dll!InitializeCriticalSectionEx
   [EXE] iat_thunk @ 0x5dea905 -> ntdll.dll!RtlEnterCriticalSection
   [EXE] iat_thunk @ 0x5dea915 -> ntdll.dll!RtlAcquireSRWLockExclusive
   [EXE] iat_thunk @ 0x5deaad5 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x5deaae5 -> ntdll.dll!RtlReleaseSRWLockExclusive
   [EXE] iat_thunk @ 0x5deab3c -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5deabe5 -> ntdll.dll!RtlWakeAllConditionVariable
   [EXE] iat_thunk @ 0x5deabf5 -> HyperionLazy(0x8df3)
   [EXE] iat_thunk @ 0x5deacf6 -> ntdll.dll!RtlInitializeConditionVariable
   [EXE] iat_thunk @ 0x5deaeb8 -> ntdll.dll!RtlAcquireSRWLockExclusive
   [EXE] iat_thunk @ 0x5deaec8 -> ntdll.dll!RtlReleaseSRWLockExclusive
   [EXE] iat_thunk @ 0x5deb295 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5deb29c -> KERNELBASE.dll!GetSystemTimeAsFileTime
   [EXE] iat_thunk @ 0x5deb2ac -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5deb2bd -> KERNELBASE.dll!InitializeCriticalSectionEx
   [EXE] iat_thunk @ 0x5e0a0ed -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5e11907 -> ntdll.dll!RtlEnterCriticalSection
   [EXE] iat_thunk @ 0x5e1195b -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x5e11ae7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5e11af3 -> KERNELBASE.dll!TlsAlloc
   [EXE] iat_thunk @ 0x5e11b30 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5e11b3c -> HyperionLazy(0x8c73)
   [EXE] iat_thunk @ 0x5e11b78 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x5e11b84 -> KERNEL32.DLL!TlsGetValue
   [EXE] iat_thunk @ 0x5e124c9 -> ntdll.dll!RtlEnterCriticalSection
   [EXE] iat_thunk @ 0x5e124d5 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x5e145f1 -> HyperionLazy(0x85f3)
   [EXE] iat_thunk @ 0x5e29185 -> ntdll.dll!RtlEnterCriticalSection
   [EXE] iat_thunk @ 0x5e2926d -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] cd03 @ 0x5e3b21f -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x5e3ead2 -> RobloxPlayerBeta.dll!sub_0xce3780
   [EXE] iat_thunk @ 0x5e3f40b -> ntdll.dll!RtlEnterCriticalSection
   [EXE] iat_thunk @ 0x5e3f46b -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x5e3f489 -> ntdll.dll!RtlEnterCriticalSection
   [EXE] iat_thunk @ 0x5e3f498 -> ntdll.dll!RtlLeaveCriticalSection
   [EXE] iat_thunk @ 0x5e3fd2c -> RobloxPlayerBeta.dll!sub_0xce3780
   [EXE] iat_thunk @ 0x5e3ffb7 -> RobloxPlayerBeta.dll!sub_0xce3780
   [EXE] iat_thunk @ 0x5e4000f -> RobloxPlayerBeta.dll!sub_0xce3780
   [EXE] iat_thunk @ 0x5e40054 -> RobloxPlayerBeta.dll!sub_0xce3780
   [EXE] iat_thunk @ 0x5e401f1 -> KERNELBASE.dll!FlsAlloc
   [EXE] iat_thunk @ 0x5e401f9 -> HyperionLazy(0xa573)
   [EXE] iat_thunk @ 0x5e40201 -> KERNEL32.DLL!FlsGetValue
   [EXE] iat_thunk @ 0x5e40209 -> KERNELBASE.dll!FlsSetValue
   [EXE] iat_thunk @ 0x5e40530 -> RobloxPlayerBeta.dll!sub_0xce3780
   [EXE] iat_thunk @ 0x5e4054d -> HyperionLazy(0xa273)
   [EXE] iat_thunk @ 0x5e40762 -> RobloxPlayerBeta.dll!sub_0xce3780
   [EXE] iat_thunk @ 0x5e407fd -> RobloxPlayerBeta.dll!sub_0xce3780
   [EXE] iat_thunk @ 0x5e4084c -> RobloxPlayerBeta.dll!sub_0xce3780
   [EXE] iat_thunk @ 0x5e45194 -> KERNELBASE.dll!MultiByteToWideChar
   [EXE] iat_thunk @ 0x5e45243 -> KERNELBASE.dll!WideCharToMultiByte
   [EXE] iat_thunk @ 0x5e4dde1 -> KERNELBASE.dll!GetStringTypeW
   [EXE] iat_thunk @ 0x5e4f230 -> KERNELBASE.dll!WriteFile
   [EXE] iat_thunk @ 0x5e4f240 -> KERNELBASE.dll!Sleep
   [EXE] iat_thunk @ 0x5e4f250 -> KERNEL32.DLL!GetLastError
   [EXE] iat_thunk @ 0x5e4f260 -> KERNELBASE.dll!CloseHandle
   [EXE] iat_thunk @ 0x5e4f270 -> KERNELBASE.dll!GetSystemInfo
   [EXE] iat_thunk @ 0x5e4f280 -> ntdll.dll!RtlQueryPerformanceCounter
   [EXE] iat_thunk @ 0x5e4f290 -> ntdll.dll!RtlFreeHeap
   [EXE] iat_thunk @ 0x5e4f2a0 -> KERNELBASE.dll!WaitForSingleObject
   [EXE] iat_thunk @ 0x5e4f2b0 -> KERNELBASE.dll!MultiByteToWideChar
   [EXE] iat_thunk @ 0x5e4f2c0 -> KERNELBASE.dll!FormatMessageW
   [EXE] iat_thunk @ 0x5e4f2d0 -> KERNELBASE.dll!WaitForSingleObjectEx
   [EXE] iat_thunk @ 0x5e4f2e0 -> ntdll.dll!RtlAllocateHeap
   [EXE] iat_thunk @ 0x5e4f2f0 -> KERNEL32.DLL!GetCurrentProcessId
   [EXE] iat_thunk @ 0x5e4f300 -> KERNEL32.DLL!GetProcessHeap
   [EXE] iat_thunk @ 0x5e4f310 -> KERNELBASE.dll!WideCharToMultiByte
   [EXE] iat_thunk @ 0x5e4f320 -> KERNELBASE.dll!GetSystemTimeAsFileTime
   [EXE] iat_thunk @ 0x5e4f330 -> HyperionLazy(0xdd7c)
   [EXE] iat_thunk @ 0x5e4f340 -> KERNELBASE.dll!UnmapViewOfFile
   [EXE] iat_thunk @ 0x5e4f350 -> KERNELBASE.dll!MapViewOfFile
   [EXE] iat_thunk @ 0x5e4f360 -> KERNELBASE.dll!CreateFileMappingW
   [EXE] iat_thunk @ 0x5e4f370 -> KERNELBASE.dll!LocalFree
   [EXE] iat_thunk @ 0x5e4f380 -> KERNELBASE.dll!GetFileAttributesW
   [EXE] iat_thunk @ 0x5e4f390 -> KERNELBASE.dll!CreateFileW
   [EXE] iat_thunk @ 0x5e4f3a0 -> KERNEL32.DLL!GetTickCount64
   [EXE] iat_thunk @ 0x5e4f3b0 -> KERNELBASE.dll!GetFullPathNameW
   [EXE] iat_thunk @ 0x5e4f3c0 -> KERNELBASE.dll!SetEndOfFile
   [EXE] iat_thunk @ 0x5e4f3d0 -> KERNELBASE.dll!GetTempPathW
   [EXE] iat_thunk @ 0x5e4f3e0 -> KERNELBASE.dll!GetFileAttributesExW
   [EXE] iat_thunk @ 0x5e4f3f0 -> KERNELBASE.dll!DeleteFileW
   [EXE] iat_thunk @ 0x5e4f400 -> KERNELBASE.dll!SetFilePointerEx
   [EXE] iat_thunk @ 0x5e4f410 -> KERNELBASE.dll!AreFileApisANSI
   [EXE] iat_thunk @ 0x5e4f420 -> KERNELBASE.dll!ReadFile
   [EXE] iat_thunk @ 0x5e4f430 -> KERNELBASE.dll!FlushFileBuffers
   [EXE] iat_thunk @ 0x5e4f440 -> KERNELBASE.dll!GetFileSizeEx
   [EXE] iat_thunk @ 0x5e4f450 -> HyperionLazy(0xbff3)
   [EXE] iat_thunk @ 0x5e4f460 -> KERNELBASE.dll!UnlockFileEx
   [EXE] iat_thunk @ 0x5e4f470 -> HyperionLazy(0xb873)
   [EXE] iat_thunk @ 0x5e4f480 -> HyperionLazy(0xb8b3)
   [EXE] iat_thunk @ 0x5e4f490 -> HyperionLazy(0xb8f3)
   [EXE] iat_thunk @ 0x5e4f4a0 -> HyperionLazy(0xb973)
   [EXE] iat_thunk @ 0x5e4f4b0 -> HyperionLazy(0xb9b3)
   [EXE] iat_thunk @ 0x5e4f4c0 -> KERNELBASE.dll!LockFileEx
   [EXE] iat_thunk @ 0x5e4f4d0 -> KERNELBASE.dll!GetDriveTypeW
   [EXE] iat_thunk @ 0x5e4f4e0 -> HyperionLazy(0xa733)
   [EXE] iat_thunk @ 0x5e4f4f0 -> cryptbase.dll!SystemFunction036
   [EXE] iat_thunk @ 0x5e4f500 -> advapi32.dll!ConvertStringSecurityDescriptorToSecurityDescriptorW
   [EXE] cd03 @ 0x5e531d1 -> INT 3 (CD 03)
   [EXE] cd03 @ 0x5e687bd -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x5ea3b22 -> KERNEL32.DLL!GetCurrentThreadId
   [EXE] iat_thunk @ 0x5ea3ec4 -> KERNELBASE.dll!TlsSetValue
   [EXE] cd03 @ 0x5faf285 -> INT 3 (CD 03)
   [EXE] iat_thunk @ 0x609d7bf -> KERNEL32.DLL!GetLastError
   [EXE] iat_thunk @ 0x60a5710 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x641e968 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c39d -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c4b7 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c748 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c768 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c788 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c7a8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c7c8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c7e8 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c808 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c828 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c848 -> RobloxPlayerBeta.dll!sub_0xce3990
   [EXE] iat_thunk @ 0x642c868 -> RobloxPlayerBeta.dll!sub_0xce3990
   [DLL] cd03 @ 0x63b46 -> Hyperion INT 3
   [DLL] cd03 @ 0x96a6b -> Hyperion INT 3
   [DLL] cd03 @ 0xf8afd -> Hyperion INT 3
   [DLL] cd03 @ 0x210a5f -> Hyperion INT 3
   [DLL] cd03 @ 0x2a564f -> Hyperion INT 3
   [DLL] cd03 @ 0x2ab963 -> Hyperion INT 3
   [DLL] cd03 @ 0x327020 -> Hyperion INT 3
   [DLL] cd03 @ 0x3b315c -> Hyperion INT 3
   [DLL] cd03 @ 0x3bb45c -> Hyperion INT 3
   [DLL] cd03 @ 0x3bb55e -> Hyperion INT 3
   [DLL] cd03 @ 0x3be355 -> Hyperion INT 3
   [DLL] cd03 @ 0x3be4c0 -> Hyperion INT 3
   [DLL] cd03 @ 0x3d1aba -> Hyperion INT 3
   [DLL] cd03 @ 0x3d1b7d -> Hyperion INT 3
   [DLL] cd03 @ 0x3d1c9e -> Hyperion INT 3
   [DLL] cd03 @ 0x3dc352 -> Hyperion INT 3
   [DLL] cd03 @ 0x438ac2 -> Hyperion INT 3
   [DLL] cd03 @ 0x44913e -> Hyperion INT 3
   [DLL] cd03 @ 0x472e48 -> Hyperion INT 3
   [DLL] cd03 @ 0x498581 -> Hyperion INT 3
   [DLL] cd03 @ 0x4b971b -> Hyperion INT 3
   [DLL] cd03 @ 0x4dea57 -> Hyperion INT 3
   [DLL] cd03 @ 0x514976 -> Hyperion INT 3
   [DLL] cd03 @ 0x537a8c -> Hyperion INT 3
   [DLL] cd03 @ 0x577c7c -> Hyperion INT 3
   [DLL] cd03 @ 0x60725f -> Hyperion INT 3
   [DLL] cd03 @ 0x71d7be -> Hyperion INT 3
   [DLL] cd03 @ 0x71e490 -> Hyperion INT 3
   [DLL] cd03 @ 0x7bf769 -> Hyperion INT 3
   [DLL] cd03 @ 0x7c6813 -> Hyperion INT 3
   [DLL] cd03 @ 0x7e271d -> Hyperion INT 3
   [DLL] cd03 @ 0x83ee77 -> Hyperion INT 3
   [DLL] cd03 @ 0x865cba -> Hyperion INT 3
   [DLL] cd03 @ 0x89ea70 -> Hyperion INT 3
   [DLL] cd03 @ 0x8ab9de -> Hyperion INT 3
   [DLL] cd03 @ 0x8ae847 -> Hyperion INT 3
   [DLL] cd03 @ 0x8b0cdf -> Hyperion INT 3
   [DLL] cd03 @ 0x8f09bf -> Hyperion INT 3
   [DLL] cd03 @ 0x95640a -> Hyperion INT 3
   [DLL] cd03 @ 0x9fe1e5 -> Hyperion INT 3
   [DLL] cd03 @ 0x9fe1fd -> Hyperion INT 3
   [DLL] cd03 @ 0xa32101 -> Hyperion INT 3
   [DLL] cd03 @ 0xa682ea -> Hyperion INT 3
   [DLL] cd03 @ 0xa788b4 -> Hyperion INT 3
   [DLL] cd03 @ 0xa81bfc -> Hyperion INT 3
   [DLL] cd03 @ 0xa8c344 -> Hyperion INT 3
   [DLL] cd03 @ 0xab3b6b -> Hyperion INT 3
   [DLL] cd03 @ 0xacb3df -> Hyperion INT 3
   [DLL] cd03 @ 0xace329 -> Hyperion INT 3
   [DLL] cd03 @ 0xad80ae -> Hyperion INT 3
   [DLL] cd03 @ 0xb4d273 -> Hyperion INT 3
   [DLL] cd03 @ 0xb61334 -> Hyperion INT 3
   [DLL] cd03 @ 0xc4eeb7 -> Hyperion INT 3
   [DLL] cd03 @ 0xcb7809 -> Hyperion INT 3
   [DLL] cd03 @ 0xd34fc8 -> Hyperion INT 3
   [DLL] cd03 @ 0xd374c8 -> Hyperion INT 3
   [DLL] cd03 @ 0xd3ea38 -> Hyperion INT 3
   [DLL] cd03 @ 0xdcdf53 -> Hyperion INT 3
   [DLL] cd03 @ 0xdd22a8 -> Hyperion INT 3
   [DLL] cd03 @ 0xdd22dc -> Hyperion INT 3
   [DLL] cd03 @ 0xe20056 -> Hyperion INT 3
   [DLL] cd03 @ 0xe52c7a -> Hyperion INT 3
   [DLL] cd03 @ 0xe58da5 -> Hyperion INT 3
   [DLL] cd03 @ 0xebba9f -> Hyperion INT 3
   [DLL] cd03 @ 0xec7284 -> Hyperion INT 3
   [DLL] cd03 @ 0xf05e1e -> Hyperion INT 3
*/
