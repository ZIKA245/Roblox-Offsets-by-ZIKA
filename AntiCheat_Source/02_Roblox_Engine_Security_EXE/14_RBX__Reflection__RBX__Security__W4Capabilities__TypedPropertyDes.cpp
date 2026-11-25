// Engine Security Class : RBX::Reflection::RBX::Security::W4Capabilities::TypedPropertyDescriptor<>::GetSet
// VTable RVA            : 0x7050d48 (7 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x27c1e80
void RBX__Reflection__RBX__Security__W4Capabilities__TypedPropertyDes_vfunc_00_0x27c1e80(void* self, void* arg1, void* arg2) {
    /* +0x27c1e80 */ __asm { push     rbx }
    /* +0x27c1e82 */ __asm { sub      rsp, 0x20 }
    /* +0x27c1e86 */ __asm { mov      rbx, rcx }
    /* +0x27c1e89 */ __asm { lea      rax, [rip + 0x488eeb8] }
    /* +0x27c1e90 */ __asm { mov      qword ptr [rcx], rax }
    /* +0x27c1e93 */ __asm { test     dl, 1 }
    /* +0x27c1e96 */ __asm { je       0x27c1e9e }
    /* +0x27c1e98 */ __asm { call     0x4955ac0 }
    /* +0x27c1e9d */ __asm { nop       }
    /* +0x27c1e9e */ __asm { mov      rax, rbx }
    /* +0x27c1ea1 */ __asm { add      rsp, 0x20 }
    /* +0x27c1ea5 */ __asm { pop      rbx }
    /* +0x27c1ea6 */ __asm { ret       }
}

// VTable Slot [1] | RVA 0x5e05000
void RBX__Reflection__RBX__Security__W4Capabilities__TypedPropertyDes_vfunc_01_0x5e05000(void* self, void* arg1, void* arg2) {
    /* +0x5e05000 */ __asm { sub      rsp, 0x28 }
    /* +0x5e05004 */ __asm { call     0x5e04fe8 }
    /* +0x5e05009 */ __asm { test     rax, rax }
    /* +0x5e0500c */ __asm { je       0x5e05014 }
    /* +0x5e0500e */ __asm { call     qword ptr [rip + 0x634d2c] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x5e05014 */ __asm { call     0x5e12280 }
    /* +0x5e05019 */ __asm { int3      }
}

// Slot [2] -> shared stub 0x5e05000

// Slot [3] -> shared stub 0x5e05000

// Slot [4] -> shared stub 0x5e05000

// Slot [5] -> shared stub 0x5e05000

// Slot [6] -> shared stub 0x5e05000
