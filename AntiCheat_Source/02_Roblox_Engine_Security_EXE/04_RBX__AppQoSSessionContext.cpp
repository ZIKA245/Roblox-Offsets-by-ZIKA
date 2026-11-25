// Engine Security Class : RBX::AppQoSSessionContext
// VTable RVA            : 0x7146c50 (1 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x6db670
void RBX__AppQoSSessionContext_vfunc_00_0x6db670(void* self, void* arg1, void* arg2) {
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
