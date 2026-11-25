// Engine Security Class : ?A0xfc8aa143::AppQoSDefaultImpl
// VTable RVA            : 0x7146bb8 (10 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x12be490
void _A0xfc8aa143__AppQoSDefaultImpl_vfunc_00_0x12be490(void* self, void* arg1, void* arg2) {
    /* +0x12be490 */ __asm { push     rbx }
    /* +0x12be492 */ __asm { sub      rsp, 0x20 }
    /* +0x12be496 */ __asm { mov      rbx, rcx }
    /* +0x12be499 */ __asm { test     dl, 1 }
    /* +0x12be49c */ __asm { je       0x12be4a4 }
    /* +0x12be49e */ __asm { call     0x4955ac0 }
    /* +0x12be4a3 */ __asm { nop       }
    /* +0x12be4a4 */ __asm { mov      rax, rbx }
    /* +0x12be4a7 */ __asm { add      rsp, 0x20 }
    /* +0x12be4ab */ __asm { pop      rbx }
    /* +0x12be4ac */ __asm { ret       }
}

// VTable Slot [1] | RVA 0x6dc400
void _A0xfc8aa143__AppQoSDefaultImpl_vfunc_01_0x6dc400(void* self, void* arg1, void* arg2) {
    /* +0x6dc400 */ __asm { ret      0 }
    /* +0x6dc403 */ __asm { int3      }
}

// Slot [2] -> shared stub 0x6dc400

// Slot [3] -> shared stub 0x6dc400

// Slot [4] -> shared stub 0x6dc400

// Slot [5] -> shared stub 0x6dc400

// Slot [6] -> shared stub 0x6dc400

// Slot [7] -> shared stub 0x6dc400

// Slot [8] -> shared stub 0x6dc400

// VTable Slot [9] | RVA 0x4930680
void _A0xfc8aa143__AppQoSDefaultImpl_vfunc_09_0x4930680(void* self, void* arg1, void* arg2) {
    /* +0x4930680 */ __asm { push     rbx }
    /* +0x4930682 */ __asm { sub      rsp, 0x40 }
    /* +0x4930686 */ __asm { mov      ecx, 0x20 }
    /* +0x493068b */ __asm { mov      rbx, rdx }
    /* +0x493068e */ __asm { call     0x4956040 }
    /* +0x4930693 */ __asm { test     rax, rax }
    /* +0x4930696 */ __asm { je       0x49306da }
    /* +0x4930698 */ __asm { mov      dword ptr [rax + 8], 1 }
    /* +0x493069f */ __asm { lea      rcx, [rip + 0x28165ba] }
    /* +0x49306a6 */ __asm { mov      qword ptr [rax], rcx }
    /* +0x49306a9 */ __asm { lea      rdx, [rip + 0x28165a0] }
    /* +0x49306b0 */ __asm { mov      dword ptr [rax + 0xc], 1 }
    /* +0x49306b7 */ __asm { lea      rcx, [rax + 0x10] }
    /* +0x49306bb */ __asm { mov      qword ptr [rax + 0x18], 0 }
    /* +0x49306c3 */ __asm { mov      qword ptr [rcx], rdx }
    /* +0x49306c6 */ __asm { mov      byte ptr [rcx + 8], 0 }
    /* +0x49306ca */ __asm { mov      qword ptr [rbx + 8], rax }
    /* +0x49306ce */ __asm { mov      rax, rbx }
    /* +0x49306d1 */ __asm { mov      qword ptr [rbx], rcx }
    /* +0x49306d4 */ __asm { add      rsp, 0x40 }
    /* +0x49306d8 */ __asm { pop      rbx }
    /* +0x49306d9 */ __asm { ret       }
}
