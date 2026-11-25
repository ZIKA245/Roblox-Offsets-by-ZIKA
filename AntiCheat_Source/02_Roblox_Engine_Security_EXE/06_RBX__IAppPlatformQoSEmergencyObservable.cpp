// Engine Security Class : RBX::IAppPlatformQoSEmergencyObservable
// VTable RVA            : 0x7156b78 (3 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x6db670
void RBX__IAppPlatformQoSEmergencyObservable_vfunc_00_0x6db670(void* self, void* arg1, void* arg2) {
    /* +0x6db670 */ __asm { push     rbx }
    /* +0x6db672 */ __asm { sub      rsp, 0x20 }
    /* +0x6db676 */ __asm { mov      rbx, rcx }
    /* +0x6db679 */ __asm { test     dl, 1 }
    /* +0x6db67c */ __asm { je       0x6db684 }
    /* +0x6db67e */ __asm { call     0x4955ac0 }
    /* +0x6db683 */ __asm { nop       }
    /* +0x6db684 */ __asm { mov      rax, rbx }
    /* +0x6db687 */ __asm { add      rsp, 0x20 }
    /* +0x6db68b */ __asm { pop      rbx }
    /* +0x6db68c */ __asm { ret       }
}

// VTable Slot [1] | RVA 0x5e05000
void RBX__IAppPlatformQoSEmergencyObservable_vfunc_01_0x5e05000(void* self, void* arg1, void* arg2) {
    /* +0x5e05000 */ __asm { sub      rsp, 0x28 }
    /* +0x5e05004 */ __asm { call     0x5e04fe8 }
    /* +0x5e05009 */ __asm { test     rax, rax }
    /* +0x5e0500c */ __asm { je       0x5e05014 }
    /* +0x5e0500e */ __asm { call     qword ptr [rip + 0x634d2c] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x5e05014 */ __asm { call     0x5e12280 }
    /* +0x5e05019 */ __asm { int3      }
}

// Slot [2] -> shared stub 0x5e05000
