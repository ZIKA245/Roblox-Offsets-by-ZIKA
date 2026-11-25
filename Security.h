/*  Dumped By       : ZIKA
/*  Dumped With     : ZIKA Dumper
/*  Roblox Version  : version-2c6fd5e09aaf4cfa
/*  Dumper Version  : 4.0.0
/*  Dumped At       : 17:37:33 2026-11-24
/*  Security Items  : 140
*/

#pragma once

#include <cstdint>
#include <string>

namespace CFG {
    inline constexpr uintptr_t DllGuardCFCheckFunctionPointer = 0x1106990;
    inline constexpr uintptr_t DllGuardCFDispatchFunctionPointer = 0x11069a0;
    inline constexpr uintptr_t GuardCFCheckFunctionPointer = 0x6439d30;
    inline constexpr uintptr_t GuardCFCheckTargetRva = 0x6dc400;
    inline constexpr uintptr_t GuardCFDispatchFunctionPointer = 0x6439d40;
    inline constexpr uintptr_t GuardCFDispatchHyperionRva = 0xce3990;
}

namespace GameAntiCheat {
    inline constexpr uintptr_t HumanoidWalkspeedCheck = 0x39c; // mirror float check
}

namespace Hyperion {
    inline constexpr uintptr_t CallbackInnerHandlerRva = 0x720b50;
    inline constexpr uintptr_t DllByfronRva = 0x60000;
    inline constexpr uintptr_t DllByfronSize = 0xedf376;
    inline constexpr uintptr_t DllDataRva = 0x10000;
    inline constexpr uintptr_t DllDataSize = 0x3fc16;
    inline constexpr uintptr_t DllEntryPointRva = 0xcb7f00;
    inline constexpr uintptr_t DllEntryRunRva = 0x7f5ce0;
    inline constexpr uintptr_t DllExceptionDirRva = 0x1107d28;
    inline constexpr uintptr_t DllExceptionFuncCount = 0x712;
    inline constexpr uintptr_t DllFptableRva = 0x50000;
    inline constexpr uintptr_t DllFptableSize = 0x100;
    inline constexpr uintptr_t DllRdataRva = 0xf40000;
    inline constexpr uintptr_t DllRdataSize = 0x1e4814;
    inline constexpr uintptr_t DllRelocRva = 0x1140000;
    inline constexpr uintptr_t DllResolvedDynamicApis = 0x77;
    inline constexpr uintptr_t DllRsrcRva = 0x1130000;
    inline constexpr uintptr_t DllSecurityCookieRva = 0x10040;
    inline constexpr uintptr_t DllSize = 0x1150000;
    inline constexpr uintptr_t DllTlsCallback0Rva = 0xd1feb0;
    inline constexpr uintptr_t DllTlsCallbacksArrayRva = 0x11070b8;
    inline constexpr uintptr_t ExeByfronRva = 0x9367000;
    inline constexpr uintptr_t ExeEncryptedPdataRva = 0x8e5e000;
    inline constexpr uintptr_t ExeEncryptedPdataSize = 0x3109ec;
    inline constexpr uintptr_t ExeImportHyperionIatRva = 0x9367242;
    inline constexpr uintptr_t ExeResolvedCrtOepRva = 0x5de50c0;
    inline constexpr uintptr_t ExeTempestEntryRva = 0x9366004;
    inline constexpr uintptr_t ExeTempestTargetDllRva = 0xf35e30;
    inline constexpr uintptr_t ExeTextCachedPages = 0x1e39;
    inline constexpr uintptr_t ExeTextEncryptedBytes = 0x45fc38c;
    inline constexpr uintptr_t ExeTextReadableBytes = 0x1e39000;
    inline constexpr uintptr_t ExeTextReadableRegions = 0x5c6;
    inline constexpr uintptr_t ExeTextTotalBytes = 0x643538c;
    inline constexpr uintptr_t ExeTextTotalPages = 0x6436;
    inline constexpr uintptr_t FpTableActiveSlots = 0x4;
    inline constexpr uintptr_t MasterExceptionDispatcherRva = 0xb75d30;
    inline constexpr uintptr_t ResolvedImmediateSyscalls = 0x0;
    inline constexpr uintptr_t TotalDetectedExportHooks = 0x42;
    inline constexpr uintptr_t TotalSyscallInstructions = 0x145b;
}

namespace HyperionThreads {
    inline constexpr uintptr_t Thread_2872 = 0x319df0; // Hyperion start RVA
}

namespace IAT {
    inline constexpr uintptr_t IatEndRva = 0x6439d58;
    inline constexpr uintptr_t IatStartRva = 0x6438000;
    inline constexpr uintptr_t ImportedDllCount = 0x16;
    inline constexpr uintptr_t LazySentinelCount = 0x21f;
    inline constexpr uintptr_t ResolvedApiCount = 0x195;
}

namespace Int3AndThunks {
    inline constexpr uintptr_t TotalIatThunks = 0x74e;
    inline constexpr uintptr_t TotalNonPaddingInt3Traps = 0xad24;
}

namespace KernelTelemetry {
    inline constexpr uintptr_t HyperionThreads = 0x1;
    inline constexpr uintptr_t PrivateExecThreads = 0x0;
    inline constexpr uintptr_t TotalKernelDrivers = 0xd0;
    inline constexpr uintptr_t TotalProcessThreads = 0x48;
}

namespace PData {
    inline constexpr uintptr_t DllValidPdataCount = 0x712;
    inline constexpr uintptr_t ExeEncryptedPdataCount = 0x41629;
    inline constexpr uintptr_t ExeEncryptedPdataRva = 0x8e5e000;
    inline constexpr uintptr_t ExeReconstructedFuncCount = 0x115f9;
}

namespace ProcessSecurity {
    inline constexpr uintptr_t OsBuildNumber = 0x66bc;
    inline constexpr uintptr_t PebBeingDebugged = 0x0;
    inline constexpr uintptr_t PebNtGlobalFlag = 0x0;
    inline constexpr uintptr_t PrivateExecRegionCount = 0x13;
    inline constexpr uintptr_t RwxRegion0_ExeRva = 0x9366000;
    inline constexpr uintptr_t RwxRegion0_Size = 0x1000;
    inline constexpr uintptr_t RwxRegionCount = 0x1;
    inline constexpr uintptr_t TotalCommittedMB = 0xb25;
    inline constexpr uintptr_t TotalLoadedModules = 0x70;
}

namespace HyperionFpTable {
    inline constexpr uintptr_t Slot_0x0_Rva = 0x3ef70; // -> KERNEL32.DLL!AreFileApisANSI
    inline constexpr uintptr_t Slot_0x18_Rva = 0xd61a0; // -> ntdll.dll!RtlFlsGetValue2
    inline constexpr uintptr_t Slot_0x90_Rva = 0x12030; // -> KERNELBASE.dll!LCMapStringEx
    inline constexpr uintptr_t Slot_0xf8_Rva = 0x1010; // -> cryptbase.dll!SystemFunction036
}

namespace HyperionHooks {
    struct HookRecord {
        const char* moduleName;
        const char* exportName;
        uintptr_t exportRva;
        uintptr_t handlerRva;
        bool inHyperionDll;
    };

    namespace KERNELBASE_dll {
        inline constexpr uintptr_t GetCurrentProcessId_ExportRva = 0x101ec0;
        inline constexpr uintptr_t GetCurrentProcessId_HyperionRva = 0xeed670;
        inline constexpr uintptr_t SetUnhandledExceptionFilter_ExportRva = 0xe9fe0;
        inline constexpr uintptr_t SetUnhandledExceptionFilter_HyperionRva = 0xd17810;
    }

    namespace ntdll_dll {
        inline constexpr uintptr_t KiRaiseUserExceptionDispatcher_ExportRva = 0x16a4c0;
        inline constexpr uintptr_t KiRaiseUserExceptionDispatcher_HyperionRva = 0xa11850;
        inline constexpr uintptr_t KiUserApcDispatcher_ExportRva = 0x16a2e0;
        inline constexpr uintptr_t KiUserApcDispatcher_HyperionRva = 0xce38d0;
        inline constexpr uintptr_t KiUserCallbackDispatcher_ExportRva = 0x16a400;
        inline constexpr uintptr_t KiUserCallbackDispatcher_HyperionRva = 0xce37e0;
        inline constexpr uintptr_t KiUserExceptionDispatcher_ExportRva = 0x16a450;
        inline constexpr uintptr_t KiUserExceptionDispatcher_HyperionRva = 0xce37c0;
        inline constexpr uintptr_t LdrInitializeThunk_ExportRva = 0xdff50;
        inline constexpr uintptr_t LdrInitializeThunk_HyperionRva = 0xce38e0;
        inline constexpr uintptr_t NtAllocateVirtualMemory_ExportRva = 0x1666d0;
        inline constexpr uintptr_t NtAllocateVirtualMemory_HyperionRva = 0xb091c0;
        inline constexpr uint32_t NtAllocateVirtualMemory_SSN = 0x18;
        inline constexpr uintptr_t NtAllocateVirtualMemoryEx_ExportRva = 0x1672c0;
        inline constexpr uintptr_t NtAllocateVirtualMemoryEx_HyperionRva = 0xf2e360;
        inline constexpr uint32_t NtAllocateVirtualMemoryEx_SSN = 0x78;
        inline constexpr uintptr_t NtContinue_ExportRva = 0x166c30;
        inline constexpr uintptr_t NtContinue_HyperionRva = 0xa25eb0;
        inline constexpr uint32_t NtContinue_SSN = 0x43;
        inline constexpr uintptr_t NtContinueEx_ExportRva = 0x167860;
        inline constexpr uintptr_t NtContinueEx_HyperionRva = 0xe88770;
        inline constexpr uint32_t NtContinueEx_SSN = 0xa5;
        inline constexpr uintptr_t NtCreateSection_ExportRva = 0x166d10;
        inline constexpr uintptr_t NtCreateSection_HyperionRva = 0xb4bfb0;
        inline constexpr uint32_t NtCreateSection_SSN = 0x4a;
        inline constexpr uintptr_t NtCreateSectionEx_ExportRva = 0x167c80;
        inline constexpr uintptr_t NtCreateSectionEx_HyperionRva = 0xcb4c70;
        inline constexpr uint32_t NtCreateSectionEx_SSN = 0xc6;
        inline constexpr uintptr_t NtCreateThread_ExportRva = 0x166d90;
        inline constexpr uintptr_t NtCreateThread_HyperionRva = 0xb592d0;
        inline constexpr uint32_t NtCreateThread_SSN = 0x4e;
        inline constexpr uintptr_t NtCreateThreadEx_ExportRva = 0x167ce0;
        inline constexpr uintptr_t NtCreateThreadEx_HyperionRva = 0xa0ca40;
        inline constexpr uint32_t NtCreateThreadEx_SSN = 0xc9;
        inline constexpr uintptr_t NtFreeVirtualMemory_ExportRva = 0x166790;
        inline constexpr uintptr_t NtFreeVirtualMemory_HyperionRva = 0x75ad70;
        inline constexpr uint32_t NtFreeVirtualMemory_SSN = 0x1e;
        inline constexpr uintptr_t NtMapViewOfSection_ExportRva = 0x1668d0;
        inline constexpr uintptr_t NtMapViewOfSection_HyperionRva = 0xf2b5f0;
        inline constexpr uint32_t NtMapViewOfSection_SSN = 0x28;
        inline constexpr uintptr_t NtMapViewOfSectionEx_ExportRva = 0x1687a0;
        inline constexpr uintptr_t NtMapViewOfSectionEx_HyperionRva = 0x31c110;
        inline constexpr uint32_t NtMapViewOfSectionEx_SSN = 0x11f;
        inline constexpr uintptr_t NtProtectVirtualMemory_ExportRva = 0x166dd0;
        inline constexpr uintptr_t NtProtectVirtualMemory_HyperionRva = 0x9c90b0;
        inline constexpr uint32_t NtProtectVirtualMemory_SSN = 0x50;
        inline constexpr uintptr_t NtQuerySystemInformation_ExportRva = 0x166a90;
        inline constexpr uintptr_t NtQuerySystemInformation_HyperionRva = 0xa08210;
        inline constexpr uint32_t NtQuerySystemInformation_SSN = 0x36;
        inline constexpr uintptr_t NtQueryVirtualMemory_ExportRva = 0x166830;
        inline constexpr uintptr_t NtQueryVirtualMemory_HyperionRva = 0x9e6370;
        inline constexpr uint32_t NtQueryVirtualMemory_SSN = 0x23;
        inline constexpr uintptr_t NtRaiseException_ExportRva = 0x169260;
        inline constexpr uintptr_t NtRaiseException_HyperionRva = 0xb163a0;
        inline constexpr uint32_t NtRaiseException_SSN = 0x175;
        inline constexpr uintptr_t NtRaiseHardError_ExportRva = 0x169280;
        inline constexpr uintptr_t NtRaiseHardError_HyperionRva = 0xa08d20;
        inline constexpr uint32_t NtRaiseHardError_SSN = 0x176;
        inline constexpr uintptr_t NtSetContextThread_ExportRva = 0x169720;
        inline constexpr uintptr_t NtSetContextThread_HyperionRva = 0xda1f40;
        inline constexpr uint32_t NtSetContextThread_SSN = 0x19b;
        inline constexpr uintptr_t NtSuspendThread_ExportRva = 0x169dc0;
        inline constexpr uintptr_t NtSuspendThread_HyperionRva = 0x75de20;
        inline constexpr uint32_t NtSuspendThread_SSN = 0x1d0;
        inline constexpr uintptr_t NtTerminateProcess_ExportRva = 0x166950;
        inline constexpr uintptr_t NtTerminateProcess_HyperionRva = 0xe15c50;
        inline constexpr uint32_t NtTerminateProcess_SSN = 0x2c;
        inline constexpr uintptr_t NtTerminateThread_ExportRva = 0x166e30;
        inline constexpr uintptr_t NtTerminateThread_HyperionRva = 0xcd33b0;
        inline constexpr uint32_t NtTerminateThread_SSN = 0x53;
        inline constexpr uintptr_t NtUnmapViewOfSection_ExportRva = 0x166910;
        inline constexpr uintptr_t NtUnmapViewOfSection_HyperionRva = 0xc93d80;
        inline constexpr uint32_t NtUnmapViewOfSection_SSN = 0x2a;
        inline constexpr uintptr_t NtUnmapViewOfSectionEx_ExportRva = 0x169fc0;
        inline constexpr uintptr_t NtUnmapViewOfSectionEx_HyperionRva = 0xf3d900;
        inline constexpr uint32_t NtUnmapViewOfSectionEx_SSN = 0x1e0;
        inline constexpr uintptr_t RtlExitUserProcess_ExportRva = 0xc9d00;
        inline constexpr uintptr_t RtlExitUserProcess_HyperionRva = 0xb67c40;
        inline constexpr uintptr_t RtlGetNativeSystemInformation_ExportRva = 0x166a90;
        inline constexpr uintptr_t RtlGetNativeSystemInformation_HyperionRva = 0xa08210;
        inline constexpr uint32_t RtlGetNativeSystemInformation_SSN = 0x36;
        inline constexpr uintptr_t ZwAllocateVirtualMemory_ExportRva = 0x1666d0;
        inline constexpr uintptr_t ZwAllocateVirtualMemory_HyperionRva = 0xb091c0;
        inline constexpr uint32_t ZwAllocateVirtualMemory_SSN = 0x18;
        inline constexpr uintptr_t ZwAllocateVirtualMemoryEx_ExportRva = 0x1672c0;
        inline constexpr uintptr_t ZwAllocateVirtualMemoryEx_HyperionRva = 0xf2e360;
        inline constexpr uint32_t ZwAllocateVirtualMemoryEx_SSN = 0x78;
        inline constexpr uintptr_t ZwContinue_ExportRva = 0x166c30;
        inline constexpr uintptr_t ZwContinue_HyperionRva = 0xa25eb0;
        inline constexpr uint32_t ZwContinue_SSN = 0x43;
        inline constexpr uintptr_t ZwContinueEx_ExportRva = 0x167860;
        inline constexpr uintptr_t ZwContinueEx_HyperionRva = 0xe88770;
        inline constexpr uint32_t ZwContinueEx_SSN = 0xa5;
        inline constexpr uintptr_t ZwCreateSection_ExportRva = 0x166d10;
        inline constexpr uintptr_t ZwCreateSection_HyperionRva = 0xb4bfb0;
        inline constexpr uint32_t ZwCreateSection_SSN = 0x4a;
        inline constexpr uintptr_t ZwCreateSectionEx_ExportRva = 0x167c80;
        inline constexpr uintptr_t ZwCreateSectionEx_HyperionRva = 0xcb4c70;
        inline constexpr uint32_t ZwCreateSectionEx_SSN = 0xc6;
        inline constexpr uintptr_t ZwCreateThread_ExportRva = 0x166d90;
        inline constexpr uintptr_t ZwCreateThread_HyperionRva = 0xb592d0;
        inline constexpr uint32_t ZwCreateThread_SSN = 0x4e;
        inline constexpr uintptr_t ZwCreateThreadEx_ExportRva = 0x167ce0;
        inline constexpr uintptr_t ZwCreateThreadEx_HyperionRva = 0xa0ca40;
        inline constexpr uint32_t ZwCreateThreadEx_SSN = 0xc9;
        inline constexpr uintptr_t ZwFreeVirtualMemory_ExportRva = 0x166790;
        inline constexpr uintptr_t ZwFreeVirtualMemory_HyperionRva = 0x75ad70;
        inline constexpr uint32_t ZwFreeVirtualMemory_SSN = 0x1e;
        inline constexpr uintptr_t ZwMapViewOfSection_ExportRva = 0x1668d0;
        inline constexpr uintptr_t ZwMapViewOfSection_HyperionRva = 0xf2b5f0;
        inline constexpr uint32_t ZwMapViewOfSection_SSN = 0x28;
        inline constexpr uintptr_t ZwMapViewOfSectionEx_ExportRva = 0x1687a0;
        inline constexpr uintptr_t ZwMapViewOfSectionEx_HyperionRva = 0x31c110;
        inline constexpr uint32_t ZwMapViewOfSectionEx_SSN = 0x11f;
        inline constexpr uintptr_t ZwProtectVirtualMemory_ExportRva = 0x166dd0;
        inline constexpr uintptr_t ZwProtectVirtualMemory_HyperionRva = 0x9c90b0;
        inline constexpr uint32_t ZwProtectVirtualMemory_SSN = 0x50;
        inline constexpr uintptr_t ZwQuerySystemInformation_ExportRva = 0x166a90;
        inline constexpr uintptr_t ZwQuerySystemInformation_HyperionRva = 0xa08210;
        inline constexpr uint32_t ZwQuerySystemInformation_SSN = 0x36;
        inline constexpr uintptr_t ZwQueryVirtualMemory_ExportRva = 0x166830;
        inline constexpr uintptr_t ZwQueryVirtualMemory_HyperionRva = 0x9e6370;
        inline constexpr uint32_t ZwQueryVirtualMemory_SSN = 0x23;
        inline constexpr uintptr_t ZwRaiseException_ExportRva = 0x169260;
        inline constexpr uintptr_t ZwRaiseException_HyperionRva = 0xb163a0;
        inline constexpr uint32_t ZwRaiseException_SSN = 0x175;
        inline constexpr uintptr_t ZwRaiseHardError_ExportRva = 0x169280;
        inline constexpr uintptr_t ZwRaiseHardError_HyperionRva = 0xa08d20;
        inline constexpr uint32_t ZwRaiseHardError_SSN = 0x176;
        inline constexpr uintptr_t ZwSetContextThread_ExportRva = 0x169720;
        inline constexpr uintptr_t ZwSetContextThread_HyperionRva = 0xda1f40;
        inline constexpr uint32_t ZwSetContextThread_SSN = 0x19b;
        inline constexpr uintptr_t ZwSuspendThread_ExportRva = 0x169dc0;
        inline constexpr uintptr_t ZwSuspendThread_HyperionRva = 0x75de20;
        inline constexpr uint32_t ZwSuspendThread_SSN = 0x1d0;
        inline constexpr uintptr_t ZwTerminateProcess_ExportRva = 0x166950;
        inline constexpr uintptr_t ZwTerminateProcess_HyperionRva = 0xe15c50;
        inline constexpr uint32_t ZwTerminateProcess_SSN = 0x2c;
        inline constexpr uintptr_t ZwTerminateThread_ExportRva = 0x166e30;
        inline constexpr uintptr_t ZwTerminateThread_HyperionRva = 0xcd33b0;
        inline constexpr uint32_t ZwTerminateThread_SSN = 0x53;
        inline constexpr uintptr_t ZwUnmapViewOfSection_ExportRva = 0x166910;
        inline constexpr uintptr_t ZwUnmapViewOfSection_HyperionRva = 0xc93d80;
        inline constexpr uint32_t ZwUnmapViewOfSection_SSN = 0x2a;
        inline constexpr uintptr_t ZwUnmapViewOfSectionEx_ExportRva = 0x169fc0;
        inline constexpr uintptr_t ZwUnmapViewOfSectionEx_HyperionRva = 0xf3d900;
        inline constexpr uint32_t ZwUnmapViewOfSectionEx_SSN = 0x1e0;
    }

    namespace ucrtbase_dll {
        inline constexpr uintptr_t ceil_ExportRva = 0xf8020;
        inline constexpr uintptr_t ceil_TargetAddr = 0x7ff84e0088d0;
        inline constexpr uintptr_t ceilf_ExportRva = 0xf8030;
        inline constexpr uintptr_t ceilf_TargetAddr = 0x7ff84e0088e0;
        inline constexpr uintptr_t floor_ExportRva = 0xf8040;
        inline constexpr uintptr_t floor_TargetAddr = 0x7ff84e0088b0;
        inline constexpr uintptr_t floorf_ExportRva = 0xf8050;
        inline constexpr uintptr_t floorf_TargetAddr = 0x7ff84e0088c0;
        inline constexpr uintptr_t nearbyint_ExportRva = 0xf8060;
        inline constexpr uintptr_t nearbyint_TargetAddr = 0x7ff84e008920;
        inline constexpr uintptr_t nearbyintf_ExportRva = 0xf8070;
        inline constexpr uintptr_t nearbyintf_TargetAddr = 0x7ff84e008940;
        inline constexpr uintptr_t nearbyintl_ExportRva = 0xf8080;
        inline constexpr uintptr_t nearbyintl_TargetAddr = 0x7ff84e008930;
        inline constexpr uintptr_t rint_ExportRva = 0xf8090;
        inline constexpr uintptr_t rint_TargetAddr = 0x7ff84e008950;
        inline constexpr uintptr_t rintf_ExportRva = 0xf80a0;
        inline constexpr uintptr_t rintf_TargetAddr = 0x7ff84e008970;
        inline constexpr uintptr_t rintl_ExportRva = 0xf80b0;
        inline constexpr uintptr_t rintl_TargetAddr = 0x7ff84e008960;
        inline constexpr uintptr_t trunc_ExportRva = 0xf80c0;
        inline constexpr uintptr_t trunc_TargetAddr = 0x7ff84e0088f0;
        inline constexpr uintptr_t truncf_ExportRva = 0xf80d0;
        inline constexpr uintptr_t truncf_TargetAddr = 0x7ff84e008910;
        inline constexpr uintptr_t truncl_ExportRva = 0xf80e0;
        inline constexpr uintptr_t truncl_TargetAddr = 0x7ff84e008900;
    }

}
