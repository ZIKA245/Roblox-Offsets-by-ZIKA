// Engine Security Class : RBX::AppQoSInstance
// VTable RVA            : 0x7146c10 (1 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x4930d10
void RBX__AppQoSInstance_vfunc_00_0x4930d10(void* self, void* arg1, void* arg2) {
    /* +0x4930d10 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x4930d15 */ __asm { push     rdi }
    /* +0x4930d16 */ __asm { sub      rsp, 0x20 }
    /* +0x4930d1a */ __asm { mov      edi, edx }
    /* +0x4930d1c */ __asm { mov      rbx, rcx }
    /* +0x4930d1f */ __asm { lea      rax, [rip + 0x2815eea] }
    /* +0x4930d26 */ __asm { mov      qword ptr [rcx], rax }
    /* +0x4930d29 */ __asm { add      rcx, 0x48 }
    /* +0x4930d2d */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x4930d30 */ __asm { test     al, 1 }
    /* +0x4930d32 */ __asm { jne      0x4930d39 }
    /* +0x4930d34 */ __asm { call     0xcca0 }
    /* +0x4930d39 */ __asm { lea      rcx, [rbx + 0x40] }
    /* +0x4930d3d */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x4930d40 */ __asm { test     al, 1 }
    /* +0x4930d42 */ __asm { jne      0x4930d49 }
    /* +0x4930d44 */ __asm { call     0xcca0 }
    /* +0x4930d49 */ __asm { lea      rcx, [rbx + 0x30] }
    /* +0x4930d4d */ __asm { call     0x2903ed0 }
    /* +0x4930d52 */ __asm { mov      rcx, qword ptr [rbx + 0x28] }
    /* +0x4930d56 */ __asm { test     rcx, rcx }
    /* +0x4930d59 */ __asm { je       0x4930d60 }
    /* +0x4930d5b */ __asm { call     0x6daf40 }
    /* +0x4930d60 */ __asm { mov      rcx, qword ptr [rbx + 0x18] }
    /* +0x4930d64 */ __asm { test     rcx, rcx }
    /* +0x4930d67 */ __asm { je       0x4930d7a }
    /* +0x4930d69 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x4930d6c */ __asm { mov      edx, 1 }
    /* +0x4930d71 */ __asm { mov      rax, qword ptr [rax] }
    /* +0x4930d74 */ __asm { call     qword ptr [rip + 0x1b08fc6] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x4930d7a */ __asm { test     dil, 1 }
    /* +0x4930d7e */ __asm { je       0x4930d89 }
    /* +0x4930d80 */ __asm { mov      rcx, rbx }
    /* +0x4930d83 */ __asm { call     0x4955ac0 }
    /* +0x4930d88 */ __asm { nop       }
    /* +0x4930d89 */ __asm { mov      rax, rbx }
    /* +0x4930d8c */ __asm { mov      rbx, qword ptr [rsp + 0x30] }
    /* +0x4930d91 */ __asm { add      rsp, 0x20 }
    /* +0x4930d95 */ __asm { pop      rdi }
    /* +0x4930d96 */ __asm { ret       }
}
