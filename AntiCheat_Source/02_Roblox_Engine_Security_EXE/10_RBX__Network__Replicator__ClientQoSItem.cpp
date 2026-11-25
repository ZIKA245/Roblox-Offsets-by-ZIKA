// Engine Security Class : RBX::Network::Replicator::ClientQoSItem
// VTable RVA            : 0x71453b8 (9 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x48aed10
void RBX__Network__Replicator__ClientQoSItem_vfunc_00_0x48aed10(void* self, void* arg1, void* arg2) {
    /* +0x48aed10 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x48aed15 */ __asm { push     rdi }
    /* +0x48aed16 */ __asm { sub      rsp, 0x20 }
    /* +0x48aed1a */ __asm { mov      ebx, edx }
    /* +0x48aed1c */ __asm { mov      rdi, rcx }
    /* +0x48aed1f */ __asm { add      rcx, 0x48 }
    /* +0x48aed23 */ __asm { call     0x6f8fb0 }
    /* +0x48aed28 */ __asm { lea      rax, [rip + 0x288bf51] }
    /* +0x48aed2f */ __asm { mov      qword ptr [rdi], rax }
    /* +0x48aed32 */ __asm { test     bl, 1 }
    /* +0x48aed35 */ __asm { je       0x48aed40 }
    /* +0x48aed37 */ __asm { mov      rcx, rdi }
    /* +0x48aed3a */ __asm { call     0x4955ac0 }
    /* +0x48aed3f */ __asm { nop       }
    /* +0x48aed40 */ __asm { mov      rax, rdi }
    /* +0x48aed43 */ __asm { mov      rbx, qword ptr [rsp + 0x30] }
    /* +0x48aed48 */ __asm { add      rsp, 0x20 }
    /* +0x48aed4c */ __asm { pop      rdi }
    /* +0x48aed4d */ __asm { ret       }
}

// VTable Slot [1] | RVA 0x48aeec0
void RBX__Network__Replicator__ClientQoSItem_vfunc_01_0x48aeec0(void* self, void* arg1, void* arg2) {
    /* +0x48aeec0 */ __asm { mov      qword ptr [rsp + 0x10], rbx }
    /* +0x48aeec5 */ __asm { push     rdi }
    /* +0x48aeec6 */ __asm { sub      rsp, 0x30 }
    /* +0x48aeeca */ __asm { mov      rdi, rcx }
    /* +0x48aeecd */ __asm { mov      rbx, rdx }
    /* +0x48aeed0 */ __asm { mov      rcx, qword ptr [rcx + 0x18] }
    /* +0x48aeed4 */ __asm { mov      rax, qword ptr [rcx + 0x4ba0] }
    /* +0x48aeedb */ __asm { inc      dword ptr [rax + 0x7c] }
    /* +0x48aeede */ __asm { cmp      byte ptr [rip + 0x384533b], 0 }
    /* +0x48aeee5 */ __asm { je       0x48aef13 }
    /* +0x48aeee7 */ __asm { cmp      byte ptr [rip + 0x384531a], 0 }
    /* +0x48aeeee */ __asm { mov      r8b, 0x1f }
    /* +0x48aeef1 */ __asm { je       0x48aef0c }
    /* +0x48aeef3 */ __asm { mov      eax, dword ptr [rcx + 0x3fa8] }
    /* +0x48aeef9 */ __asm { shr      rax, 0xc }
    /* +0x48aeefd */ __asm { test     al, 1 }
    /* +0x48aeeff */ __asm { movzx    r8d, r8b }
    /* +0x48aef03 */ __asm { mov      eax, 0x52 }
    /* +0x48aef08 */ __asm { cmovne   r8d, eax }
    /* +0x48aef0c */ __asm { mov      byte ptr [rsp + 0x40], r8b }
    /* +0x48aef11 */ __asm { jmp      0x48aef18 }
    /* +0x48aef13 */ __asm { mov      byte ptr [rsp + 0x40], 0x1f }
    /* +0x48aef18 */ __asm { mov      r8d, 1 }
    /* +0x48aef1e */ __asm { lea      rdx, [rsp + 0x40] }
    /* +0x48aef23 */ __asm { mov      rcx, rbx }
    /* +0x48aef26 */ __asm { call     0x1c2a620 }
    /* +0x48aef2b */ __asm { movzx    eax, byte ptr [rdi + 0x40] }
    /* +0x48aef2f */ __asm { lea      rdx, [rsp + 0x40] }
    /* +0x48aef34 */ __asm { mov      r8d, 1 }
    /* +0x48aef3a */ __asm { mov      byte ptr [rsp + 0x40], al }
    /* +0x48aef3e */ __asm { mov      rcx, rbx }
    /* +0x48aef41 */ __asm { call     0x1c2a620 }
    /* +0x48aef46 */ __asm { movzx    eax, byte ptr [rdi + 0x41] }
    /* +0x48aef4a */ __asm { lea      rdx, [rsp + 0x40] }
    /* +0x48aef4f */ __asm { mov      r8d, 1 }
    /* +0x48aef55 */ __asm { mov      byte ptr [rsp + 0x40], al }
    /* +0x48aef59 */ __asm { mov      rcx, rbx }
    /* +0x48aef5c */ __asm { call     0x1c2a620 }
    /* +0x48aef61 */ __asm { cmp      qword ptr [rdi + 0x60], 0x10 }
    /* +0x48aef66 */ __asm { lea      rax, [rdi + 0x48] }
    /* +0x48aef6a */ __asm { mov      rcx, qword ptr [rax + 0x10] }
    /* +0x48aef6e */ __asm { jb       0x48aef73 }
    /* +0x48aef70 */ __asm { mov      rax, qword ptr [rax] }
    /* +0x48aef73 */ __asm { mov      r8d, dword ptr [rdi + 0x58] }
    /* +0x48aef77 */ __asm { lea      rdx, [rsp + 0x20] }
    /* +0x48aef7c */ __asm { mov      qword ptr [rsp + 0x28], rcx }
    /* +0x48aef81 */ __asm { mov      rcx, rbx }
    /* +0x48aef84 */ __asm { mov      qword ptr [rsp + 0x20], rax }
    /* +0x48aef89 */ __asm { call     0x1c2a6c0 }
    /* +0x48aef8e */ __asm { mov      rbx, qword ptr [rsp + 0x48] }
    /* +0x48aef93 */ __asm { mov      al, 1 }
    /* +0x48aef95 */ __asm { add      rsp, 0x30 }
    /* +0x48aef99 */ __asm { pop      rdi }
    /* +0x48aef9a */ __asm { ret       }
}

// VTable Slot [2] | RVA 0xcd0e30
void RBX__Network__Replicator__ClientQoSItem_vfunc_02_0xcd0e30(void* self, void* arg1, void* arg2) {
    /* +0xcd0e30 */ __asm { mov      eax, 0x1f }
    /* +0xcd0e35 */ __asm { ret       }
}

// VTable Slot [3] | RVA 0x6dc430
void RBX__Network__Replicator__ClientQoSItem_vfunc_03_0x6dc430(void* self, void* arg1, void* arg2) {
    /* +0x6dc430 */ __asm { xor      al, al }
    /* +0x6dc432 */ __asm { ret       }
}

// Slot [4] -> shared stub 0x6dc430

// Slot [5] -> shared stub 0x6dc430

// VTable Slot [6] | RVA 0x7b2470
void RBX__Network__Replicator__ClientQoSItem_vfunc_06_0x7b2470(void* self, void* arg1, void* arg2) {
    /* +0x7b2470 */ __asm { xor      eax, eax }
    /* +0x7b2472 */ __asm { mov      qword ptr [rdx], rax }
    /* +0x7b2475 */ __asm { mov      qword ptr [rdx + 8], rax }
    /* +0x7b2479 */ __asm { mov      rax, rdx }
    /* +0x7b247c */ __asm { ret       }
}

// Slot [7] -> shared stub 0x6dc430

// VTable Slot [8] | RVA 0x45d7550
void RBX__Network__Replicator__ClientQoSItem_vfunc_08_0x45d7550(void* self, void* arg1, void* arg2) {
    /* +0x45d7550 */ __asm { push     rbx }
    /* +0x45d7552 */ __asm { sub      rsp, 0x20 }
    /* +0x45d7556 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x45d7559 */ __asm { mov      rbx, rdx }
    /* +0x45d755c */ __asm { mov      rax, qword ptr [rax + 0x10] }
    /* +0x45d7560 */ __asm { call     qword ptr [rip + 0x1e627da] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x45d7566 */ __asm { mov      ecx, eax }
    /* +0x45d7568 */ __asm { call     0x47a4370 }
    /* +0x45d756d */ __asm { xor      ecx, ecx }
    /* +0x45d756f */ __asm { mov      qword ptr [rbx + 0x18], 0xf }
    /* +0x45d7577 */ __asm { mov      qword ptr [rbx], rcx }
    /* +0x45d757a */ __asm { mov      r8, 0xffffffffffffffff }
    /* +0x45d7581 */ __asm { mov      qword ptr [rbx + 0x10], rcx }
    /* +0x45d7585 */ __asm { mov      byte ptr [rbx], cl }
    /* +0x45d7587 */ __asm { inc      r8 }
    /* +0x45d758a */ __asm { cmp      byte ptr [rax + r8], cl }
    /* +0x45d758e */ __asm { jne      0x45d7587 }
    /* +0x45d7590 */ __asm { mov      rdx, rax }
    /* +0x45d7593 */ __asm { mov      rcx, rbx }
    /* +0x45d7596 */ __asm { call     0x6f7000 }
    /* +0x45d759b */ __asm { mov      rax, rbx }
    /* +0x45d759e */ __asm { add      rsp, 0x20 }
    /* +0x45d75a2 */ __asm { pop      rbx }
    /* +0x45d75a3 */ __asm { ret       }
}
