// Engine Security Class : RBX::Security::ClientQoSImpl
// VTable RVA            : 0x715e208 (21 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x4e495f0
// [Undecrypted .text page at RVA 0x4e495f0 — run with --watch while playing to capture]
void RBX__Security__ClientQoSImpl_vfunc_00_0x4e495f0(/* encrypted page */);

// VTable Slot [1] | RVA 0x1b79390
void RBX__Security__ClientQoSImpl_vfunc_01_0x1b79390(void* self, void* arg1, void* arg2) {
    /* +0x1b79390 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1b79393 */ __asm { mov      rax, qword ptr [rax + 0x50] }
    /* +0x1b79397 */ __asm { jmp      qword ptr [rip + 0x48c09a2] }
    /* +0x1b7939e */ __asm { int3      }
}

// VTable Slot [2] | RVA 0x1b799f0
void RBX__Security__ClientQoSImpl_vfunc_02_0x1b799f0(void* self, void* arg1, void* arg2) {
    /* +0x1b799f0 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1b799f3 */ __asm { mov      rax, qword ptr [rax + 0x58] }
    /* +0x1b799f7 */ __asm { jmp      qword ptr [rip + 0x48c0342] }
    /* +0x1b799fe */ __asm { int3      }
}

// VTable Slot [3] | RVA 0x4e49640
// [Undecrypted .text page at RVA 0x4e49640 — run with --watch while playing to capture]
void RBX__Security__ClientQoSImpl_vfunc_03_0x4e49640(/* encrypted page */);

// VTable Slot [4] | RVA 0x6dc400
void RBX__Security__ClientQoSImpl_vfunc_04_0x6dc400(void* self, void* arg1, void* arg2) {
    /* +0x6dc400 */ __asm { ret      0 }
    /* +0x6dc403 */ __asm { int3      }
}

// VTable Slot [5] | RVA 0x4e49700
// [Undecrypted .text page at RVA 0x4e49700 — run with --watch while playing to capture]
void RBX__Security__ClientQoSImpl_vfunc_05_0x4e49700(/* encrypted page */);

// VTable Slot [6] | RVA 0x4e49950
// [Undecrypted .text page at RVA 0x4e49950 — run with --watch while playing to capture]
void RBX__Security__ClientQoSImpl_vfunc_06_0x4e49950(/* encrypted page */);

// VTable Slot [7] | RVA 0x4e49bf0
// [Undecrypted .text page at RVA 0x4e49bf0 — run with --watch while playing to capture]
void RBX__Security__ClientQoSImpl_vfunc_07_0x4e49bf0(/* encrypted page */);

// VTable Slot [8] | RVA 0x4e4a4f0
void RBX__Security__ClientQoSImpl_vfunc_08_0x4e4a4f0(void* self, void* arg1, void* arg2) {
    /* +0x4e4a4f0 */ __asm { mov      qword ptr [rsp + 0x18], rsi }
    /* +0x4e4a4f5 */ __asm { push     rdi }
    /* +0x4e4a4f6 */ __asm { sub      rsp, 0x20 }
    /* +0x4e4a4fa */ __asm { mov      rax, qword ptr [rdx] }
    /* +0x4e4a4fd */ __asm { mov      rsi, rdx }
    /* +0x4e4a500 */ __asm { mov      rdi, rcx }
    /* +0x4e4a503 */ __asm { test     rax, rax }
    /* +0x4e4a506 */ __asm { je       0x4e4a583 }
    /* +0x4e4a508 */ __asm { mov      rax, qword ptr [rax + 0x20] }
    /* +0x4e4a50c */ __asm { test     rax, rax }
    /* +0x4e4a50f */ __asm { je       0x4e4a583 }
    /* +0x4e4a511 */ __asm { cmp      byte ptr [rax + 8], 0 }
    /* +0x4e4a515 */ __asm { je       0x4e4a583 }
    /* +0x4e4a517 */ __asm { mov      qword ptr [rsp + 0x30], rbx }
    /* +0x4e4a51c */ __asm { mov      ebx, dword ptr [rip + 0x32f93ee] }
    /* +0x4e4a522 */ __asm { cmp      ebx, 0xa }
    /* +0x4e4a525 */ __asm { jle      0x4e4a52e }
    /* +0x4e4a527 */ __asm { mov      ebx, 0xa }
    /* +0x4e4a52c */ __asm { jmp      0x4e4a538 }
    /* +0x4e4a52e */ __asm { mov      eax, 1 }
    /* +0x4e4a533 */ __asm { cmp      ebx, eax }
    /* +0x4e4a535 */ __asm { cmovl    ebx, eax }
    /* +0x4e4a538 */ __asm { lea      rcx, [rsp + 0x38] }
    /* +0x4e4a53d */ __asm { call     0x495a220 }
    /* +0x4e4a542 */ __asm { movsd    xmm0, qword ptr [rax] }
    /* +0x4e4a546 */ __asm { subsd    xmm0, qword ptr [rdi + 0x50] }
    /* +0x4e4a54b */ __asm { cvttsd2si eax, xmm0 }
    /* +0x4e4a54f */ __asm { cmp      eax, ebx }
    /* +0x4e4a551 */ __asm { mov      rbx, qword ptr [rsp + 0x30] }
    /* +0x4e4a556 */ __asm { jl       0x4e4a583 }
    /* +0x4e4a558 */ __asm { lea      rcx, [rsp + 0x38] }
    /* +0x4e4a55d */ __asm { call     0x495a220 }
    /* +0x4e4a562 */ __asm { movsd    xmm0, qword ptr [rsp + 0x38] }
    /* +0x4e4a568 */ __asm { mov      rdx, rsi }
    /* +0x4e4a56b */ __asm { movsd    qword ptr [rdi + 0x50], xmm0 }
    /* +0x4e4a570 */ __asm { mov      rcx, rdi }
    /* +0x4e4a573 */ __asm { mov      rax, qword ptr [rdi] }
    /* +0x4e4a576 */ __asm { mov      rax, qword ptr [rax + 0x90] }
    /* +0x4e4a57d */ __asm { call     qword ptr [rip + 0x15ef7bd] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x4e4a583 */ __asm { mov      rsi, qword ptr [rsp + 0x40] }
    /* +0x4e4a588 */ __asm { add      rsp, 0x20 }
    /* +0x4e4a58c */ __asm { pop      rdi }
    /* +0x4e4a58d */ __asm { ret       }
}

// VTable Slot [9] | RVA 0x4e4b3f0
void RBX__Security__ClientQoSImpl_vfunc_09_0x4e4b3f0(void* self, void* arg1, void* arg2) {
    /* +0x4e4b3f0 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x4e4b3f5 */ __asm { mov      qword ptr [rsp + 0x10], rdx }
    /* +0x4e4b3fa */ __asm { push     rbp }
    /* +0x4e4b3fb */ __asm { push     rsi }
    /* +0x4e4b3fc */ __asm { push     rdi }
    /* +0x4e4b3fd */ __asm { push     r12 }
    /* +0x4e4b3ff */ __asm { push     r13 }
    /* +0x4e4b401 */ __asm { push     r14 }
    /* +0x4e4b403 */ __asm { push     r15 }
    /* +0x4e4b405 */ __asm { lea      rbp, [rsp - 0x27] }
    /* +0x4e4b40a */ __asm { sub      rsp, 0xc0 }
    /* +0x4e4b411 */ __asm { mov      rdi, r8 }
    /* +0x4e4b414 */ __asm { mov      rsi, rdx }
    /* +0x4e4b417 */ __asm { xor      r12d, r12d }
    /* +0x4e4b41a */ __asm { mov      dword ptr [rbp - 0x49], r12d }
    /* +0x4e4b41e */ __asm { mov      ecx, 0x80 }
    /* +0x4e4b423 */ __asm { call     0x4956040 }
    /* +0x4e4b428 */ __asm { mov      r13, rax }
    /* +0x4e4b42b */ __asm { test     rax, rax }
    /* +0x4e4b42e */ __asm { je       0x4e4b734 }
    /* +0x4e4b434 */ __asm { mov      dword ptr [rax + 8], 1 }
    /* +0x4e4b43b */ __asm { mov      dword ptr [rax + 0xc], 1 }
    /* +0x4e4b442 */ __asm { lea      rax, [rip + 0x2312e9f] }
    /* +0x4e4b449 */ __asm { mov      qword ptr [r13], rax }
    /* +0x4e4b44d */ __asm { lea      rcx, [r13 + 0x10] }
    /* +0x4e4b451 */ __asm { mov      qword ptr [r13 + 0x18], r12 }
    /* +0x4e4b455 */ __asm { mov      byte ptr [rcx + 8], r12b }
    /* +0x4e4b459 */ __asm { lea      rax, [rip + 0x2312eb0] }
    /* +0x4e4b460 */ __asm { mov      qword ptr [rcx], rax }
    /* +0x4e4b463 */ __asm { mov      dword ptr [rcx + 0x10], r12d }
    /* +0x4e4b467 */ __asm { mov      qword ptr [rcx + 0x18], r12 }
    /* +0x4e4b46b */ __asm { mov      qword ptr [rcx + 0x20], r12 }
    /* +0x4e4b46f */ __asm { mov      qword ptr [rcx + 0x28], r12 }
    /* +0x4e4b473 */ __asm { mov      qword ptr [rcx + 0x30], r12 }
    /* +0x4e4b477 */ __asm { mov      qword ptr [rcx + 0x38], r12 }
    /* +0x4e4b47b */ __asm { mov      qword ptr [rcx + 0x40], r12 }
    /* +0x4e4b47f */ __asm { mov      qword ptr [rcx + 0x48], r12 }
    /* +0x4e4b483 */ __asm { mov      qword ptr [rcx + 0x50], r12 }
    /* +0x4e4b487 */ __asm { mov      qword ptr [rcx + 0x58], r12 }
    /* +0x4e4b48b */ __asm { mov      dword ptr [rcx + 0x60], r12d }
    /* +0x4e4b48f */ __asm { lea      rax, [rcx + 0x68] }
    /* +0x4e4b493 */ __asm { test     rax, rax }
    /* +0x4e4b496 */ __asm { je       0x4e4b49f }
    /* +0x4e4b498 */ __asm { mov      qword ptr [rax], 1 }
    /* +0x4e4b49f */ __asm { mov      qword ptr [rbp - 0x41], rcx }
    /* +0x4e4b4a3 */ __asm { mov      qword ptr [rbp - 0x39], r13 }
    /* +0x4e4b4a7 */ __asm { mov      r8, qword ptr [rdi] }
    /* +0x4e4b4aa */ __asm { xorps    xmm0, xmm0 }
    /* +0x4e4b4ad */ __asm { movdqu   xmmword ptr [rbp - 0x59], xmm0 }
    /* +0x4e4b4b2 */ __asm { mov      rdx, qword ptr [r8 + 8] }
    /* +0x4e4b4b6 */ __asm { test     rdx, rdx }
    /* +0x4e4b4b9 */ __asm { je       0x4e4b4e1 }
    /* +0x4e4b4bb */ __asm { mov      eax, dword ptr [rdx + 8] }
    /* +0x4e4b4be */ __asm { test     eax, eax }
    /* +0x4e4b4c0 */ __asm { je       0x4e4b4e1 }
    /* +0x4e4b4c2 */ __asm { lea      ecx, [rax + 1] }
    /* +0x4e4b4c5 */ __asm { lock cmpxchg dword ptr [rdx + 8], ecx }
    /* +0x4e4b4ca */ __asm { je       0x4e4b4d2 }
    /* +0x4e4b4cc */ __asm { test     eax, eax }
    /* +0x4e4b4ce */ __asm { jne      0x4e4b4c2 }
    /* +0x4e4b4d0 */ __asm { jmp      0x4e4b4e1 }
    /* +0x4e4b4d2 */ __asm { mov      rax, qword ptr [r8] }
    /* +0x4e4b4d5 */ __asm { mov      qword ptr [rbp - 0x59], rax }
    /* +0x4e4b4d9 */ __asm { mov      rax, qword ptr [r8 + 8] }
    /* +0x4e4b4dd */ __asm { mov      qword ptr [rbp - 0x51], rax }
    /* +0x4e4b4e1 */ __asm { mov      rdi, qword ptr [rdi] }
    /* +0x4e4b4e4 */ __asm { xorps    xmm0, xmm0 }
    /* +0x4e4b4e7 */ __asm { movdqu   xmmword ptr [rbp - 0x79], xmm0 }
    /* +0x4e4b4ec */ __asm { mov      rdx, qword ptr [rdi + 0x18] }
    /* +0x4e4b4f0 */ __asm { test     rdx, rdx }
    /* +0x4e4b4f3 */ __asm { je       0x4e4b512 }
    /* +0x4e4b4f5 */ __asm { mov      eax, dword ptr [rdx + 8] }
    /* +0x4e4b4f8 */ __asm { test     eax, eax }
    /* +0x4e4b4fa */ __asm { je       0x4e4b512 }
    /* +0x4e4b4fc */ __asm { nop      dword ptr [rax] }
    /* +0x4e4b500 */ __asm { lea      ecx, [rax + 1] }
    /* +0x4e4b503 */ __asm { lock cmpxchg dword ptr [rdx + 8], ecx }
    /* +0x4e4b508 */ __asm { je       0x4e4b5ba }
    /* +0x4e4b50e */ __asm { test     eax, eax }
    /* +0x4e4b510 */ __asm { jne      0x4e4b500 }
    /* +0x4e4b512 */ __asm { mov      rdi, qword ptr [rbp - 0x71] }
    /* +0x4e4b516 */ __asm { mov      rax, qword ptr [rbp - 0x59] }
    /* +0x4e4b51a */ __asm { test     rax, rax }
    /* +0x4e4b51d */ __asm { je       0x4e4b6ee }
    /* +0x4e4b523 */ __asm { cmp      qword ptr [rbp - 0x79], 0 }
    /* +0x4e4b528 */ __asm { je       0x4e4b6ee }
    /* +0x4e4b52e */ __asm { cmp      dword ptr [rax + 0x970], 1 }
    /* +0x4e4b535 */ __asm { jne      0x4e4b6ee }
    /* +0x4e4b53b */ __asm { lea      rbx, [rax + 0x1f0] }
    /* +0x4e4b542 */ __asm { mov      rcx, rbx }
    /* +0x4e4b545 */ __asm { call     0x40625d0 }
    /* +0x4e4b54a */ __asm { test     rax, rax }
    /* +0x4e4b54d */ __asm { je       0x4e4b55c }
    /* +0x4e4b54f */ __asm { cmp      dword ptr [rax + 0x980], 1 }
    /* +0x4e4b556 */ __asm { je       0x4e4b6ee }
    /* +0x4e4b55c */ __asm { mov      rcx, rbx }
    /* +0x4e4b55f */ __asm { call     0xe29600 }
    /* +0x4e4b564 */ __asm { mov      qword ptr [rbp + 0x7f], rax }
    /* +0x4e4b568 */ __asm { mov      rcx, qword ptr [rbp - 0x79] }
    /* +0x4e4b56c */ __asm { mov      rbx, qword ptr [rcx + 0x18] }
    /* +0x4e4b570 */ __asm { call     0x48a3360 }
    /* +0x4e4b575 */ __asm { movzx    edx, word ptr [rbx + 0x1c0] }
    /* +0x4e4b57c */ __asm { movzx    ecx, word ptr [rax + 0x1c0] }
    /* +0x4e4b583 */ __asm { sub      edx, ecx }
    /* +0x4e4b585 */ __asm { movzx    ecx, word ptr [rax + 0x1c2] }
    /* +0x4e4b58c */ __asm { cmp      edx, ecx }
    /* +0x4e4b58e */ __asm { ja       0x4e4b5cf }
    /* +0x4e4b590 */ __asm { test     rdi, rdi }
    /* +0x4e4b593 */ __asm { je       0x4e4b59d }
    /* +0x4e4b595 */ __asm { lock inc dword ptr [rdi + 8] }
    /* +0x4e4b599 */ __asm { mov      rdi, qword ptr [rbp - 0x71] }
    /* +0x4e4b59d */ __asm { mov      rbx, qword ptr [rbp - 0x79] }
    /* +0x4e4b5a1 */ __asm { mov      qword ptr [rbp - 0x69], rbx }
    /* +0x4e4b5a5 */ __asm { mov      r14, rdi }
    /* +0x4e4b5a8 */ __asm { mov      qword ptr [rbp - 0x61], rdi }
    /* +0x4e4b5ac */ __asm { mov      rcx, r12 }
    /* +0x4e4b5af */ __asm { mov      qword ptr [rbp - 0x11], rcx }
    /* +0x4e4b5b3 */ __asm { mov      esi, 0x16 }
    /* +0x4e4b5b8 */ __asm { jmp      0x4e4b5ea }
    /* +0x4e4b5ba */ __asm { mov      rax, qword ptr [rdi + 0x10] }
    /* +0x4e4b5be */ __asm { mov      qword ptr [rbp - 0x79], rax }
    /* +0x4e4b5c2 */ __asm { mov      rdi, qword ptr [rdi + 0x18] }
    /* +0x4e4b5c6 */ __asm { mov      qword ptr [rbp - 0x71], rdi }
    /* +0x4e4b5ca */ __asm { jmp      0x4e4b516 }
    /* +0x4e4b5cf */ __asm { mov      r14, r12 }
    /* +0x4e4b5d2 */ __asm { mov      rbx, r12 }
    /* +0x4e4b5d5 */ __asm { mov      qword ptr [rbp - 0x69], r12 }
    /* +0x4e4b5d9 */ __asm { mov      qword ptr [rbp - 0x61], r12 }
    /* +0x4e4b5dd */ __asm { mov      qword ptr [rbp + 0x1f], r12 }
    /* +0x4e4b5e1 */ __asm { mov      esi, 0x12 }
    /* +0x4e4b5e6 */ __asm { mov      rcx, qword ptr [rbp - 0x11] }
    /* +0x4e4b5ea */ __asm { test     sil, 4 }
    /* +0x4e4b5ee */ __asm { je       0x4e4b5fe }
    /* +0x4e4b5f0 */ __asm { and      esi, 0xfffffffb }
    /* +0x4e4b5f3 */ __asm { test     rcx, rcx }
    /* +0x4e4b5f6 */ __asm { je       0x4e4b5fe }
    /* +0x4e4b5f8 */ __asm { call     0x6daf40 }
    /* +0x4e4b5fd */ __asm { nop       }
    /* +0x4e4b5fe */ __asm { lea      rdx, [rbp + 7] }
    /* +0x4e4b602 */ __asm { mov      rcx, rbx }
    /* +0x4e4b605 */ __asm { call     0x462f6a0 }
    /* +0x4e4b60a */ __asm { mov      r15, rax }
    /* +0x4e4b60d */ __asm { mov      rbx, qword ptr [rax] }
    /* +0x4e4b610 */ __asm { test     rbx, rbx }
    /* +0x4e4b613 */ __asm { je       0x4e4b664 }
    /* +0x4e4b615 */ __asm { mov      rbx, qword ptr [rbx + 0x18] }
    /* +0x4e4b619 */ __asm { call     0x9e5200 }
    /* +0x4e4b61e */ __asm { movzx    edx, word ptr [rbx + 0x1c0] }
    /* +0x4e4b625 */ __asm { movzx    ecx, word ptr [rax + 0x1c0] }
    /* +0x4e4b62c */ __asm { sub      edx, ecx }
    /* +0x4e4b62e */ __asm { movzx    ecx, word ptr [rax + 0x1c2] }
    /* +0x4e4b635 */ __asm { cmp      edx, ecx }
    /* +0x4e4b637 */ __asm { ja       0x4e4b664 }
    /* +0x4e4b639 */ __asm { mov      r12, qword ptr [r15] }
    /* +0x4e4b63c */ __asm { mov      rax, qword ptr [r15 + 8] }
    /* +0x4e4b640 */ __asm { test     rax, rax }
    /* +0x4e4b643 */ __asm { je       0x4e4b651 }
    /* +0x4e4b645 */ __asm { lock inc dword ptr [rax + 8] }
    /* +0x4e4b649 */ __asm { mov      rdi, qword ptr [rbp - 0x71] }
    /* +0x4e4b64d */ __asm { mov      r14, qword ptr [rbp - 0x61] }
    /* +0x4e4b651 */ __asm { mov      rax, qword ptr [r15 + 8] }
    /* +0x4e4b655 */ __asm { mov      qword ptr [rbp - 0x29], rax }
    /* +0x4e4b659 */ __asm { lea      rax, [rbp - 0x31] }
    /* +0x4e4b65d */ __asm { mov      ecx, 0xa0 }
    /* +0x4e4b662 */ __asm { jmp      0x4e4b671 }
    /* +0x4e4b664 */ __asm { mov      qword ptr [rbp - 1], r12 }
    /* +0x4e4b668 */ __asm { lea      rax, [rbp - 9] }
    /* +0x4e4b66c */ __asm { mov      ecx, 0xc0 }
    /* +0x4e4b671 */ __asm { mov      rbx, qword ptr [rax + 8] }
    /* +0x4e4b675 */ __asm { xor      edx, edx }
    /* +0x4e4b677 */ __asm { mov      qword ptr [rax], rdx }
    /* +0x4e4b67a */ __asm { mov      qword ptr [rax + 8], rdx }
    /* +0x4e4b67e */ __asm { or       esi, ecx }
    /* +0x4e4b680 */ __asm { test     sil, 0x40 }
    /* +0x4e4b684 */ __asm { je       0x4e4b697 }
    /* +0x4e4b686 */ __asm { and      esi, 0xffffffbf }
    /* +0x4e4b689 */ __asm { mov      rcx, qword ptr [rbp - 1] }
    /* +0x4e4b68d */ __asm { test     rcx, rcx }
    /* +0x4e4b690 */ __asm { je       0x4e4b697 }
    /* +0x4e4b692 */ __asm { call     0x6daf40 }
}

// Slot [10] -> shared stub 0x6dc400

// Slot [11] -> shared stub 0x6dc400

// VTable Slot [12] | RVA 0x4e4d140
void RBX__Security__ClientQoSImpl_vfunc_12_0x4e4d140(void* self, void* arg1, void* arg2) {
    /* +0x4e4d140 */ __asm { push     rbx }
    /* +0x4e4d142 */ __asm { sub      rsp, 0x20 }
    /* +0x4e4d146 */ __asm { mov      rbx, rdx }
    /* +0x4e4d149 */ __asm { mov      rdx, r8 }
    /* +0x4e4d14c */ __asm { mov      rcx, rbx }
    /* +0x4e4d14f */ __asm { call     0x4e49190 }
    /* +0x4e4d154 */ __asm { mov      rax, rbx }
    /* +0x4e4d157 */ __asm { add      rsp, 0x20 }
    /* +0x4e4d15b */ __asm { pop      rbx }
    /* +0x4e4d15c */ __asm { ret       }
}

// Slot [13] -> shared stub 0x6dc400

// Slot [14] -> shared stub 0x6dc400

// Slot [15] -> shared stub 0x6dc400

// Slot [16] -> shared stub 0x6dc400

// VTable Slot [17] | RVA 0x4e42c90
// [Undecrypted .text page at RVA 0x4e42c90 — run with --watch while playing to capture]
void RBX__Security__ClientQoSImpl_vfunc_17_0x4e42c90(/* encrypted page */);

// VTable Slot [18] | RVA 0x4e4b3e0
void RBX__Security__ClientQoSImpl_vfunc_18_0x4e4b3e0(void* self, void* arg1, void* arg2) {
    /* +0x4e4b3e0 */ __asm { jmp      0x4e4cc40 }
    /* +0x4e4b3e5 */ __asm { int3      }
}

// VTable Slot [19] | RVA 0x4e4ed20
void RBX__Security__ClientQoSImpl_vfunc_19_0x4e4ed20(void* self, void* arg1, void* arg2) {
    /* +0x4e4ed20 */ __asm { jmp      0x4e4b990 }
    /* +0x4e4ed25 */ __asm { int3      }
}

// VTable Slot [20] | RVA 0x4e4ed30
void RBX__Security__ClientQoSImpl_vfunc_20_0x4e4ed30(void* self, void* arg1, void* arg2) {
    /* +0x4e4ed30 */ __asm { mov      qword ptr [rsp + 0x10], rbx }
    /* +0x4e4ed35 */ __asm { push     rdi }
    /* +0x4e4ed36 */ __asm { sub      rsp, 0x20 }
    /* +0x4e4ed3a */ __asm { mov      rdi, rdx }
    /* +0x4e4ed3d */ __asm { mov      rbx, rcx }
    /* +0x4e4ed40 */ __asm { mov      qword ptr [rsp + 0x30], rcx }
    /* +0x4e4ed45 */ __asm { xor      eax, eax }
    /* +0x4e4ed47 */ __asm { mov      qword ptr [rcx], rax }
    /* +0x4e4ed4a */ __asm { mov      qword ptr [rcx + 8], rax }
    /* +0x4e4ed4e */ __asm { cmp      qword ptr [rdx + 8], rax }
    /* +0x4e4ed52 */ __asm { je       0x4e4ed66 }
    /* +0x4e4ed54 */ __asm { mov      rax, qword ptr [rdx] }
    /* +0x4e4ed57 */ __asm { mov      qword ptr [rcx], rax }
    /* +0x4e4ed5a */ __asm { mov      rax, qword ptr [rdx + 8] }
    /* +0x4e4ed5e */ __asm { mov      qword ptr [rcx + 8], rax }
    /* +0x4e4ed62 */ __asm { lock inc dword ptr [rax + 0xc] }
    /* +0x4e4ed66 */ __asm { add      rcx, 0x10 }
    /* +0x4e4ed6a */ __asm { add      rdx, 0x10 }
    /* +0x4e4ed6e */ __asm { call     0x6f7510 }
    /* +0x4e4ed73 */ __asm { movzx    eax, byte ptr [rdi + 0x30] }
    /* +0x4e4ed77 */ __asm { mov      byte ptr [rbx + 0x30], al }
    /* +0x4e4ed7a */ __asm { mov      rbx, qword ptr [rsp + 0x38] }
    /* +0x4e4ed7f */ __asm { add      rsp, 0x20 }
    /* +0x4e4ed83 */ __asm { pop      rdi }
    /* +0x4e4ed84 */ __asm { ret       }
}
