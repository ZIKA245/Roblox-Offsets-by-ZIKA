// Engine Security Class : RBX::Security::uint_error
// VTable RVA            : 0x715e1f0 (2 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x6ca790
void RBX__Security__uint_error_vfunc_00_0x6ca790(void* self, void* arg1, void* arg2) {
    /* +0x6ca790 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x6ca795 */ __asm { push     rdi }
    /* +0x6ca796 */ __asm { sub      rsp, 0x20 }
    /* +0x6ca79a */ __asm { mov      ebx, edx }
    /* +0x6ca79c */ __asm { mov      rdi, rcx }
    /* +0x6ca79f */ __asm { lea      rax, [rip + 0x5e57522] }
    /* +0x6ca7a6 */ __asm { mov      qword ptr [rcx], rax }
    /* +0x6ca7a9 */ __asm { add      rcx, 8 }
    /* +0x6ca7ad */ __asm { call     0x5e04a40 }
    /* +0x6ca7b2 */ __asm { test     bl, 1 }
    /* +0x6ca7b5 */ __asm { je       0x6ca7c0 }
    /* +0x6ca7b7 */ __asm { mov      rcx, rdi }
    /* +0x6ca7ba */ __asm { call     0x4955ac0 }
    /* +0x6ca7bf */ __asm { nop       }
    /* +0x6ca7c0 */ __asm { mov      rax, rdi }
    /* +0x6ca7c3 */ __asm { mov      rbx, qword ptr [rsp + 0x30] }
    /* +0x6ca7c8 */ __asm { add      rsp, 0x20 }
    /* +0x6ca7cc */ __asm { pop      rdi }
    /* +0x6ca7cd */ __asm { ret       }
}

// VTable Slot [1] | RVA 0x6ca770
void RBX__Security__uint_error_vfunc_01_0x6ca770(void* self, void* arg1, void* arg2) {
    /* +0x6ca770 */ __asm { mov      rdx, qword ptr [rcx + 8] }
    /* +0x6ca774 */ __asm { lea      rax, [rip + 0x5f7c6ad] }
    /* +0x6ca77b */ __asm { test     rdx, rdx }
    /* +0x6ca77e */ __asm { cmovne   rax, rdx }
    /* +0x6ca782 */ __asm { ret       }
}
