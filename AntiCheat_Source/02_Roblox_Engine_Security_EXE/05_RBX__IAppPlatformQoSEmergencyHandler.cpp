// Engine Security Class : RBX::IAppPlatformQoSEmergencyHandler
// VTable RVA            : 0x7156ce0 (6 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x5e05000
void RBX__IAppPlatformQoSEmergencyHandler_vfunc_00_0x5e05000(void* self, void* arg1, void* arg2) {
    /* +0x5e05000 */ __asm { sub      rsp, 0x28 }
    /* +0x5e05004 */ __asm { call     0x5e04fe8 }
    /* +0x5e05009 */ __asm { test     rax, rax }
    /* +0x5e0500c */ __asm { je       0x5e05014 }
    /* +0x5e0500e */ __asm { call     qword ptr [rip + 0x634d2c] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x5e05014 */ __asm { call     0x5e12280 }
    /* +0x5e05019 */ __asm { int3      }
}

// Slot [1] -> shared stub 0x5e05000

// Slot [2] -> shared stub 0x5e05000

// Slot [3] -> shared stub 0x5e05000

// Slot [4] -> shared stub 0x5e05000

// Slot [5] -> shared stub 0x5e05000
