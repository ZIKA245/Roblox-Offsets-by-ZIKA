// Engine Security Class : RBX::Network::SecurityChannelJob
// VTable RVA            : 0x7145428 (9 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x6dc430
void RBX__Network__SecurityChannelJob_vfunc_00_0x6dc430(void* self, void* arg1, void* arg2) {
    /* +0x6dc430 */ __asm { xor      al, al }
    /* +0x6dc432 */ __asm { ret       }
}

// VTable Slot [1] | RVA 0x4067bc0
void RBX__Network__SecurityChannelJob_vfunc_01_0x4067bc0(void* self, void* arg1, void* arg2) {
    /* +0x4067bc0 */ __asm { mov      qword ptr [rsp + 0x10], rbx }
    /* +0x4067bc5 */ __asm { push     rbp }
    /* +0x4067bc6 */ __asm { push     rsi }
    /* +0x4067bc7 */ __asm { push     rdi }
    /* +0x4067bc8 */ __asm { push     r14 }
    /* +0x4067bca */ __asm { push     r15 }
    /* +0x4067bcc */ __asm { lea      rbp, [rsp - 0x37] }
    /* +0x4067bd1 */ __asm { sub      rsp, 0x100 }
    /* +0x4067bd8 */ __asm { mov      rsi, rdx }
    /* +0x4067bdb */ __asm { mov      rdi, rcx }
    /* +0x4067bde */ __asm { cmp      byte ptr [rcx + 0x190], 0 }
    /* +0x4067be5 */ __asm { jne      0x4067c04 }
    /* +0x4067be7 */ __asm { mov      rax, qword ptr [rcx + 0x198] }
    /* +0x4067bee */ __asm { movzx    eax, byte ptr [rax + 0x768] }
    /* +0x4067bf5 */ __asm { nop       }
    /* +0x4067bf6 */ __asm { test     al, al }
    /* +0x4067bf8 */ __asm { je       0x4067c04 }
    /* +0x4067bfa */ __asm { mov      eax, 1 }
    /* +0x4067bff */ __asm { jmp      0x4067fb5 }
    /* +0x4067c04 */ __asm { mov      r8, qword ptr [rcx + 0x198] }
    /* +0x4067c0b */ __asm { test     r8, r8 }
    /* +0x4067c0e */ __asm { je       0x4067c67 }
    /* +0x4067c10 */ __asm { mov      rdx, qword ptr [r8 + 0xa50] }
    /* +0x4067c17 */ __asm { test     rdx, rdx }
    /* +0x4067c1a */ __asm { je       0x4067c67 }
    /* +0x4067c1c */ __asm { mov      eax, dword ptr [rdx + 8] }
    /* +0x4067c1f */ __asm { test     eax, eax }
    /* +0x4067c21 */ __asm { je       0x4067c67 }
    /* +0x4067c23 */ __asm { lea      ecx, [rax + 1] }
    /* +0x4067c26 */ __asm { lock cmpxchg dword ptr [rdx + 8], ecx }
    /* +0x4067c2b */ __asm { je       0x4067c33 }
    /* +0x4067c2d */ __asm { test     eax, eax }
    /* +0x4067c2f */ __asm { jne      0x4067c23 }
    /* +0x4067c31 */ __asm { jmp      0x4067c67 }
    /* +0x4067c33 */ __asm { mov      rax, qword ptr [r8 + 0xa48] }
    /* +0x4067c3a */ __asm { mov      rcx, qword ptr [r8 + 0xa50] }
    /* +0x4067c41 */ __asm { test     rax, rax }
    /* +0x4067c44 */ __asm { je       0x4067c5d }
    /* +0x4067c46 */ __asm { mov      qword ptr [rbp - 1], rax }
    /* +0x4067c4a */ __asm { mov      qword ptr [rbp + 7], rcx }
    /* +0x4067c4e */ __asm { lea      rdx, [rbp - 1] }
    /* +0x4067c52 */ __asm { lea      rcx, [rbp + 0xf] }
    /* +0x4067c56 */ __asm { call     0x1bf7f70 }
    /* +0x4067c5b */ __asm { jmp      0x4067c6b }
    /* +0x4067c5d */ __asm { test     rcx, rcx }
    /* +0x4067c60 */ __asm { je       0x4067c67 }
    /* +0x4067c62 */ __asm { call     0x6daf40 }
    /* +0x4067c67 */ __asm { mov      byte ptr [rbp + 0x27], 0 }
    /* +0x4067c6b */ __asm { cmp      byte ptr [rip + 0x40c012e], 0 }
    /* +0x4067c72 */ __asm { je       0x4067c84 }
    /* +0x4067c74 */ __asm { cmp      byte ptr [rbp + 0x27], 0 }
    /* +0x4067c78 */ __asm { jne      0x4067c84 }
    /* +0x4067c7a */ __asm { mov      edi, 1 }
    /* +0x4067c7f */ __asm { jmp      0x4067fa4 }
    /* +0x4067c84 */ __asm { mov      r8d, dword ptr [rdi + 0x1a4] }
    /* +0x4067c8b */ __asm { shl      r8d, 0xa }
    /* +0x4067c8f */ __asm { call     0x4954c10 }
    /* +0x4067c94 */ __asm { test     rax, rax }
    /* +0x4067c97 */ __asm { je       0x4067cac }
    /* +0x4067c99 */ __asm { mov      ebx, dword ptr [rax] }
    /* +0x4067c9b */ __asm { mov      ecx, ebx }
    /* +0x4067c9d */ __asm { xor      ecx, r8d }
    /* +0x4067ca0 */ __asm { and      ecx, 0x7c00 }
    /* +0x4067ca6 */ __asm { xor      ecx, ebx }
    /* +0x4067ca8 */ __asm { mov      dword ptr [rax], ecx }
    /* +0x4067caa */ __asm { jmp      0x4067cbb }
    /* +0x4067cac */ __asm { mov      edx, 0x7c00 }
    /* +0x4067cb1 */ __asm { mov      ecx, r8d }
    /* +0x4067cb4 */ __asm { call     0x4954d30 }
    /* +0x4067cb9 */ __asm { mov      ebx, eax }
    /* +0x4067cbb */ __asm { shr      ebx, 0xa }
    /* +0x4067cbe */ __asm { and      ebx, 0x1f }
    /* +0x4067cc1 */ __asm { mov      dword ptr [rbp + 0x67], ebx }
    /* +0x4067cc4 */ __asm { movzx    eax, byte ptr [rdi + 0x1a8] }
    /* +0x4067ccb */ __asm { xorps    xmm0, xmm0 }
    /* +0x4067cce */ __asm { movdqa   xmmword ptr [rsp + 0x30], xmm0 }
    /* +0x4067cd4 */ __asm { xorps    xmm1, xmm1 }
    /* +0x4067cd7 */ __asm { movdqa   xmmword ptr [rsp + 0x40], xmm1 }
    /* +0x4067cdd */ __asm { movdqa   xmm0, xmmword ptr [rip + 0x354af9b] }
    /* +0x4067ce5 */ __asm { movdqa   xmmword ptr [rbp - 0x79], xmm0 }
    /* +0x4067cea */ __asm { movdqa   xmmword ptr [rbp - 0x69], xmm1 }
    /* +0x4067cef */ __asm { xor      r15d, r15d }
    /* +0x4067cf2 */ __asm { mov      qword ptr [rbp - 0x59], r15 }
    /* +0x4067cf6 */ __asm { mov      qword ptr [rbp - 0x51], r15 }
    /* +0x4067cfa */ __asm { mov      qword ptr [rbp - 0x49], r15 }
    /* +0x4067cfe */ __asm { mov      qword ptr [rbp - 0x41], r15 }
    /* +0x4067d02 */ __asm { mov      dword ptr [rbp - 0x39], r15d }
    /* +0x4067d06 */ __asm { mov      qword ptr [rbp - 0x31], r15 }
    /* +0x4067d0a */ __asm { mov      qword ptr [rbp - 0x29], r15 }
    /* +0x4067d0e */ __asm { mov      qword ptr [rbp - 0x21], 0xffffffffffffffff }
    /* +0x4067d16 */ __asm { mov      byte ptr [rbp - 0x19], al }
    /* +0x4067d19 */ __asm { test     al, al }
    /* +0x4067d1b */ __asm { je       0x4067d33 }
    /* +0x4067d1d */ __asm { lea      r8, [rbp - 0x21] }
    /* +0x4067d21 */ __asm { mov      rdx, qword ptr [rdi + 0x188] }
    /* +0x4067d28 */ __asm { lea      rcx, [rsp + 0x30] }
    /* +0x4067d2d */ __asm { call     0x2973e30 }
    /* +0x4067d32 */ __asm { nop       }
    /* +0x4067d33 */ __asm { mov      byte ptr [rbp + 0x7b], 0 }
    /* +0x4067d37 */ __asm { cmp      byte ptr [rip + 0x409d1d2], 0 }
    /* +0x4067d3e */ __asm { je       0x4067d52 }
    /* +0x4067d40 */ __asm { mov      ecx, dword ptr [rdi + 0x1a0] }
    /* +0x4067d46 */ __asm { call     0x29cd170 }
    /* +0x4067d4b */ __asm { mov      dword ptr [rbp + 0x77], eax }
    /* +0x4067d4e */ __asm { mov      byte ptr [rbp + 0x7b], 1 }
    /* +0x4067d52 */ __asm { mov      rax, qword ptr [rdi] }
    /* +0x4067d55 */ __asm { mov      rdx, rsi }
    /* +0x4067d58 */ __asm { mov      rcx, rdi }
    /* +0x4067d5b */ __asm { mov      rax, qword ptr [rax + 0x40] }
    /* +0x4067d5f */ __asm { call     qword ptr [rip + 0x23d1fdb] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x4067d65 */ __asm { mov      edi, eax }
    /* +0x4067d67 */ __asm { cmp      byte ptr [rbp + 0x7b], 0 }
    /* +0x4067d6b */ __asm { je       0x4067d76 }
    /* +0x4067d6d */ __asm { mov      ecx, dword ptr [rbp + 0x77] }
    /* +0x4067d70 */ __asm { call     0x29cd170 }
    /* +0x4067d75 */ __asm { nop       }
    /* +0x4067d76 */ __asm { cmp      byte ptr [rbp - 0x19], 0 }
    /* +0x4067d7a */ __asm { je       0x4067f7c }
    /* +0x4067d80 */ __asm { mov      rsi, qword ptr [rbp - 0x21] }
    /* +0x4067d84 */ __asm { cmp      rsi, -1 }
    /* +0x4067d88 */ __asm { je       0x4067f7c }
    /* +0x4067d8e */ __asm { rdtsc     }
    /* +0x4067d90 */ __asm { shl      rdx, 0x20 }
    /* +0x4067d94 */ __asm { or       rax, rdx }
    /* +0x4067d97 */ __asm { mov      r14, rax }
    /* +0x4067d9a */ __asm { sub      r14, qword ptr [rip + 0x4c7288f] }
    /* +0x4067da1 */ __asm { call     0x2973cd0 }
    /* +0x4067da6 */ __asm { mov      r9, qword ptr [rsp + 0x40] }
    /* +0x4067dab */ __asm { movsxd   rcx, dword ptr [rax + 0xfc58] }
    /* +0x4067db2 */ __asm { nop       }
    /* +0x4067db3 */ __asm { mov      r8, r14 }
    /* +0x4067db6 */ __asm { sub      r8, rsi }
    /* +0x4067db9 */ __asm { and      r9d, 0x3fff }
    /* +0x4067dc0 */ __asm { imul     rdx, rcx, 0xa80 }
    /* +0x4067dc7 */ __asm { add      r9, rdx }
    /* +0x4067dca */ __asm { lock xadd qword ptr [rax + r9*8], r8 }
    /* +0x4067dd0 */ __asm { cmp      qword ptr [rbp - 0x71], -1 }
    /* +0x4067dd5 */ __asm { je       0x4067f5a }
    /* +0x4067ddb */ __asm { mov      rax, qword ptr [rbp - 0x31] }
    /* +0x4067ddf */ __asm { test     rax, rax }
    /* +0x4067de2 */ __asm { je       0x4067e2a }
    /* +0x4067de4 */ __asm { mov      rdx, r15 }
    /* +0x4067de7 */ __asm { cmp      qword ptr [rbp - 0x29], 1 }
    /* +0x4067dec */ __asm { sete     dl }
    /* +0x4067def */ __asm { add      rdx, 2 }
    /* +0x4067df3 */ __asm { shl      rdx, 0x30 }
    /* +0x4067df7 */ __asm { movabs   rcx, 0xffffffffffff }
    /* +0x4067e01 */ __asm { and      rax, rcx }
    /* +0x4067e04 */ __asm { or       rdx, rax }
    /* +0x4067e07 */ __asm { mov      qword ptr [rbp + 0x7f], r15 }
    /* +0x4067e0b */ __asm { lea      rax, [rbp + 0x7f] }
    /* +0x4067e0f */ __asm { mov      qword ptr [rsp + 0x28], rax }
    /* +0x4067e14 */ __asm { mov      qword ptr [rsp + 0x20], r15 }
    /* +0x4067e19 */ __asm { xor      r9d, r9d }
    /* +0x4067e1c */ __asm { xor      r8d, r8d }
    /* +0x4067e1f */ __asm { mov      cl, 0x21 }
    /* +0x4067e21 */ __asm { call     0x29a42e0 }
    /* +0x4067e26 */ __asm { mov      qword ptr [rbp - 0x29], r15 }
    /* +0x4067e2a */ __asm { cmp      byte ptr [rip + 0x443c6a5], 0 }
    /* +0x4067e31 */ __asm { je       0x4067f1e }
    /* +0x4067e37 */ __asm { cmp      byte ptr [rip + 0x409c0e2], 0 }
    /* +0x4067e3e */ __asm { je       0x4067f1e }
    /* +0x4067e44 */ __asm { call     0x497fea0 }
    /* +0x4067e49 */ __asm { mov      rcx, qword ptr [rax] }
    /* +0x4067e4c */ __asm { test     rcx, rcx }
    /* +0x4067e4f */ __asm { jne      0x4067e55 }
    /* +0x4067e51 */ __asm { lea      rcx, [rax + 8] }
    /* +0x4067e55 */ __asm { mov      edx, dword ptr [rcx] }
    /* +0x4067e57 */ __asm { mov      r8d, dword ptr [rcx + 4] }
    /* +0x4067e5b */ __asm { mov      r9, qword ptr [rcx + 8] }
    /* +0x4067e5f */ __asm { mov      r10, qword ptr [rcx + 0x10] }
    /* +0x4067e63 */ __asm { mov      ecx, dword ptr [rbp - 0x41] }
    /* +0x4067e66 */ __asm { test     ecx, ecx }
    /* +0x4067e68 */ __asm { je       0x4067ead }
    /* +0x4067e6a */ __asm { mov      rbx, qword ptr [rbp - 0x51] }
    /* +0x4067e6e */ __asm { cmp      r9, rbx }
    /* +0x4067e71 */ __asm { jb       0x4067ead }
    /* +0x4067e73 */ __asm { mov      rsi, qword ptr [rbp - 0x49] }
    /* +0x4067e77 */ __asm { cmp      r10, rsi }
    /* +0x4067e7a */ __asm { jb       0x4067ead }
}

// VTable Slot [2] | RVA 0x6dc400
void RBX__Network__SecurityChannelJob_vfunc_02_0x6dc400(void* self, void* arg1, void* arg2) {
    /* +0x6dc400 */ __asm { ret      0 }
    /* +0x6dc403 */ __asm { int3      }
}

// Slot [3] -> shared stub 0x6dc400

// Slot [4] -> shared stub 0x6dc400

// VTable Slot [5] | RVA 0x6dcfd0
void RBX__Network__SecurityChannelJob_vfunc_05_0x6dcfd0(void* self, void* arg1, void* arg2) {
    /* +0x6dcfd0 */ __asm { mov      eax, 1 }
    /* +0x6dcfd5 */ __asm { ret       }
}

// VTable Slot [6] | RVA 0x4067b60
void RBX__Network__SecurityChannelJob_vfunc_06_0x4067b60(void* self, void* arg1, void* arg2) {
    /* +0x4067b60 */ __asm { movsxd   rax, dword ptr [rip + 0x40c0221] }
    /* +0x4067b67 */ __asm { ret       }
}

// VTable Slot [7] | RVA 0x2903270
void RBX__Network__SecurityChannelJob_vfunc_07_0x2903270(void* self, void* arg1, void* arg2) {
    /* +0x2903270 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x2903275 */ __asm { push     rdi }
    /* +0x2903276 */ __asm { sub      rsp, 0x20 }
    /* +0x290327a */ __asm { mov      ebx, edx }
    /* +0x290327c */ __asm { mov      rdi, rcx }
    /* +0x290327f */ __asm { call     0x296ed50 }
    /* +0x2903284 */ __asm { test     bl, 1 }
    /* +0x2903287 */ __asm { je       0x2903292 }
    /* +0x2903289 */ __asm { mov      rcx, rdi }
    /* +0x290328c */ __asm { call     0x4955ac0 }
    /* +0x2903291 */ __asm { nop       }
    /* +0x2903292 */ __asm { mov      rax, rdi }
    /* +0x2903295 */ __asm { mov      rbx, qword ptr [rsp + 0x30] }
    /* +0x290329a */ __asm { add      rsp, 0x20 }
    /* +0x290329e */ __asm { pop      rdi }
    /* +0x290329f */ __asm { ret       }
}

// VTable Slot [8] | RVA 0x48af390
void RBX__Network__SecurityChannelJob_vfunc_08_0x48af390(void* self, void* arg1, void* arg2) {
    /* +0x48af390 */ __asm { mov      rax, rsp }
    /* +0x48af393 */ __asm { push     rbp }
    /* +0x48af394 */ __asm { push     rbx }
    /* +0x48af395 */ __asm { push     rsi }
    /* +0x48af396 */ __asm { push     rdi }
    /* +0x48af397 */ __asm { push     r12 }
    /* +0x48af399 */ __asm { push     r14 }
    /* +0x48af39b */ __asm { push     r15 }
    /* +0x48af39d */ __asm { lea      rbp, [rax - 0x5f] }
    /* +0x48af3a1 */ __asm { sub      rsp, 0xd0 }
    /* +0x48af3a8 */ __asm { movaps   xmmword ptr [rax - 0x48], xmm6 }
    /* +0x48af3ac */ __asm { movaps   xmmword ptr [rax - 0x58], xmm7 }
    /* +0x48af3b0 */ __asm { mov      rdi, rdx }
    /* +0x48af3b3 */ __asm { mov      rbx, rcx }
    /* +0x48af3b6 */ __asm { mov      rax, qword ptr gs:[0x58] }
    /* +0x48af3bf */ __asm { mov      ecx, 0x28 }
    /* +0x48af3c4 */ __asm { mov      r8, qword ptr [rax] }
    /* +0x48af3c7 */ __asm { xor      r15d, r15d }
    /* +0x48af3ca */ __asm { mov      r14d, 0xffffffff }
    /* +0x48af3d0 */ __asm { mov      eax, dword ptr [rcx + r8] }
    /* +0x48af3d4 */ __asm { cmp      dword ptr [rip + 0x454395e], eax }
    /* +0x48af3da */ __asm { jg       0x48af7a4 }
    /* +0x48af3e0 */ __asm { xorps    xmm0, xmm0 }
    /* +0x48af3e3 */ __asm { movdqa   xmmword ptr [rbp - 0x79], xmm0 }
    /* +0x48af3e8 */ __asm { xorps    xmm1, xmm1 }
    /* +0x48af3eb */ __asm { movdqa   xmmword ptr [rbp - 0x69], xmm1 }
    /* +0x48af3f0 */ __asm { movdqa   xmm0, xmmword ptr [rip + 0x2d03888] }
    /* +0x48af3f8 */ __asm { movdqa   xmmword ptr [rbp - 0x59], xmm0 }
    /* +0x48af3fd */ __asm { movdqa   xmmword ptr [rbp - 0x49], xmm1 }
    /* +0x48af402 */ __asm { mov      qword ptr [rbp - 0x39], r15 }
    /* +0x48af406 */ __asm { mov      qword ptr [rbp - 0x31], r15 }
    /* +0x48af40a */ __asm { mov      qword ptr [rbp - 0x29], r15 }
    /* +0x48af40e */ __asm { mov      qword ptr [rbp - 0x21], r15 }
    /* +0x48af412 */ __asm { mov      dword ptr [rbp - 0x19], r15d }
    /* +0x48af416 */ __asm { mov      qword ptr [rbp - 0x11], r15 }
    /* +0x48af41a */ __asm { mov      qword ptr [rbp - 9], r15 }
    /* +0x48af41e */ __asm { mov      byte ptr [rsp + 0x20], 0 }
    /* +0x48af423 */ __asm { xor      r9d, r9d }
    /* +0x48af426 */ __asm { lea      r8, [r9 - 1] }
    /* +0x48af42a */ __asm { mov      rdx, qword ptr [rip + 0x454390f] }
    /* +0x48af431 */ __asm { lea      rcx, [rbp - 0x79] }
    /* +0x48af435 */ __asm { call     0x2924c40 }
    /* +0x48af43a */ __asm { nop       }
    /* +0x48af43b */ __asm { mov      r12d, 1 }
    /* +0x48af441 */ __asm { mov      eax, dword ptr [rip + 0x3889781] }
    /* +0x48af447 */ __asm { cmp      eax, 0x3c }
    /* +0x48af44a */ __asm { jle      0x48af472 }
    /* +0x48af44c */ __asm { lea      eax, [r12 + 0x3b] }
    /* +0x48af451 */ __asm { jmp      0x48af479 }
    /* +0x48af453 */ __asm { movzx    r8d, byte ptr [rcx + rax] }
    /* +0x48af458 */ __asm { inc      rax }
    /* +0x48af45b */ __asm { cmp      r8b, byte ptr [r10 + rax - 1] }
    /* +0x48af460 */ __asm { jne      0x48af7fd }
    /* +0x48af466 */ __asm { cmp      rax, 4 }
    /* +0x48af46a */ __asm { je       0x48af7f8 }
    /* +0x48af470 */ __asm { jmp      0x48af453 }
    /* +0x48af472 */ __asm { cmp      eax, r12d }
    /* +0x48af475 */ __asm { cmovl    eax, r12d }
    /* +0x48af479 */ __asm { movd     xmm1, eax }
    /* +0x48af47d */ __asm { cvtdq2ps xmm1, xmm1 }
    /* +0x48af480 */ __asm { movss    xmm7, dword ptr [rip + 0x2cf022c] }
    /* +0x48af488 */ __asm { movaps   xmm0, xmm7 }
    /* +0x48af48b */ __asm { divss    xmm0, xmm1 }
    /* +0x48af48f */ __asm { cvtps2pd xmm2, xmm0 }
    /* +0x48af492 */ __asm { movsd    xmm3, qword ptr [rdi + 8] }
    /* +0x48af497 */ __asm { mov      dword ptr [rbp + 0x77], 0x3f800000 }
    /* +0x48af49e */ __asm { mov      dword ptr [rbp + 0x67], 0x3f800000 }
    /* +0x48af4a5 */ __asm { mulsd    xmm3, xmm2 }
    /* +0x48af4a9 */ __asm { addsd    xmm3, qword ptr [rbx + 0x178] }
    /* +0x48af4b1 */ __asm { cvtpd2ps xmm6, xmm3 }
    /* +0x48af4b5 */ __asm { movaps   xmm0, xmm6 }
    /* +0x48af4b8 */ __asm { call     0x60a2a44 }
    /* +0x48af4bd */ __asm { movss    dword ptr [rbp + 0x6f], xmm0 }
    /* +0x48af4c2 */ __asm { lea      rax, [rbp + 0x67] }
    /* +0x48af4c6 */ __asm { lea      rcx, [rbp + 0x6f] }
    /* +0x48af4ca */ __asm { comiss   xmm0, xmm7 }
    /* +0x48af4cd */ __asm { cmovbe   rax, rcx }
    /* +0x48af4d1 */ __asm { movss    xmm2, dword ptr [rax] }
    /* +0x48af4d5 */ __asm { subss    xmm6, xmm2 }
    /* +0x48af4d9 */ __asm { movss    dword ptr [rbp + 0x67], xmm6 }
    /* +0x48af4de */ __asm { lea      rax, [rbp + 0x77] }
    /* +0x48af4e2 */ __asm { lea      rcx, [rbp + 0x67] }
    /* +0x48af4e6 */ __asm { comiss   xmm6, xmm7 }
    /* +0x48af4e9 */ __asm { cmovbe   rax, rcx }
    /* +0x48af4ed */ __asm { movss    xmm0, dword ptr [rax] }
    /* +0x48af4f1 */ __asm { cvtps2pd xmm0, xmm0 }
    /* +0x48af4f4 */ __asm { movsd    qword ptr [rbx + 0x178], xmm0 }
    /* +0x48af4fc */ __asm { xorps    xmm1, xmm1 }
    /* +0x48af4ff */ __asm { comiss   xmm1, xmm2 }
    /* +0x48af502 */ __asm { jb       0x48af509 }
    /* +0x48af504 */ __asm { xorps    xmm0, xmm0 }
    /* +0x48af507 */ __asm { jmp      0x48af50c }
    /* +0x48af509 */ __asm { cvtps2pd xmm0, xmm2 }
    /* +0x48af50c */ __asm { cvtpd2ps xmm0, xmm0 }
    /* +0x48af510 */ __asm { comiss   xmm0, xmm7 }
    /* +0x48af513 */ __asm { jb       0x48af54c }
    /* +0x48af515 */ __asm { mov      rax, qword ptr [rbx + 0x1b0] }
    /* +0x48af51c */ __asm { mov      rdi, qword ptr [rax + 0x7c8] }
    /* +0x48af523 */ __asm { mov      rbx, qword ptr [rax + 0x7c0] }
    /* +0x48af52a */ __asm { cmp      rbx, rdi }
    /* +0x48af52d */ __asm { je       0x48af54c }
    /* +0x48af52f */ __asm { nop       }
    /* +0x48af530 */ __asm { mov      rcx, qword ptr [rbx] }
    /* +0x48af533 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x48af536 */ __asm { mov      rax, qword ptr [rax + 0x330] }
    /* +0x48af53d */ __asm { call     qword ptr [rip + 0x1b8a7fd] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x48af543 */ __asm { add      rbx, 8 }
    /* +0x48af547 */ __asm { cmp      rbx, rdi }
    /* +0x48af54a */ __asm { jne      0x48af530 }
    /* +0x48af54c */ __asm { cmp      qword ptr [rbp - 0x51], -1 }
    /* +0x48af551 */ __asm { je       0x48af767 }
    /* +0x48af557 */ __asm { mov      rax, qword ptr [rbp - 0x11] }
    /* +0x48af55b */ __asm { test     rax, rax }
    /* +0x48af55e */ __asm { je       0x48af5a6 }
    /* +0x48af560 */ __asm { mov      rdx, r15 }
    /* +0x48af563 */ __asm { cmp      qword ptr [rbp - 9], 1 }
    /* +0x48af568 */ __asm { sete     dl }
    /* +0x48af56b */ __asm { add      rdx, 2 }
    /* +0x48af56f */ __asm { shl      rdx, 0x30 }
    /* +0x48af573 */ __asm { movabs   rcx, 0xffffffffffff }
    /* +0x48af57d */ __asm { and      rax, rcx }
    /* +0x48af580 */ __asm { or       rdx, rax }
    /* +0x48af583 */ __asm { mov      qword ptr [rbp + 0x67], r15 }
    /* +0x48af587 */ __asm { lea      rax, [rbp + 0x67] }
    /* +0x48af58b */ __asm { mov      qword ptr [rsp + 0x28], rax }
    /* +0x48af590 */ __asm { mov      qword ptr [rsp + 0x20], r15 }
    /* +0x48af595 */ __asm { xor      r9d, r9d }
    /* +0x48af598 */ __asm { xor      r8d, r8d }
    /* +0x48af59b */ __asm { mov      cl, 0x21 }
    /* +0x48af59d */ __asm { call     0x29a42e0 }
    /* +0x48af5a2 */ __asm { mov      qword ptr [rbp - 9], r15 }
    /* +0x48af5a6 */ __asm { cmp      byte ptr [rip + 0x3bf4f29], 0 }
    /* +0x48af5ad */ __asm { je       0x48af699 }
    /* +0x48af5b3 */ __asm { cmp      byte ptr [rip + 0x3854966], 0 }
    /* +0x48af5ba */ __asm { je       0x48af699 }
    /* +0x48af5c0 */ __asm { call     0x497fea0 }
    /* +0x48af5c5 */ __asm { mov      rcx, qword ptr [rax] }
    /* +0x48af5c8 */ __asm { test     rcx, rcx }
    /* +0x48af5cb */ __asm { jne      0x48af5d1 }
    /* +0x48af5cd */ __asm { lea      rcx, [rax + 8] }
    /* +0x48af5d1 */ __asm { mov      edx, dword ptr [rcx] }
    /* +0x48af5d3 */ __asm { mov      r8d, dword ptr [rcx + 4] }
    /* +0x48af5d7 */ __asm { mov      r9, qword ptr [rcx + 8] }
    /* +0x48af5db */ __asm { mov      r10, qword ptr [rcx + 0x10] }
    /* +0x48af5df */ __asm { mov      ecx, dword ptr [rbp - 0x21] }
    /* +0x48af5e2 */ __asm { test     ecx, ecx }
    /* +0x48af5e4 */ __asm { je       0x48af629 }
    /* +0x48af5e6 */ __asm { mov      rbx, qword ptr [rbp - 0x31] }
    /* +0x48af5ea */ __asm { cmp      r9, rbx }
    /* +0x48af5ed */ __asm { jb       0x48af629 }
    /* +0x48af5ef */ __asm { mov      rdi, qword ptr [rbp - 0x29] }
    /* +0x48af5f3 */ __asm { cmp      r10, rdi }
    /* +0x48af5f6 */ __asm { jb       0x48af629 }
    /* +0x48af5f8 */ __asm { cmp      edx, ecx }
    /* +0x48af5fa */ __asm { jb       0x48af629 }
    /* +0x48af5fc */ __asm { mov      r11d, dword ptr [rbp - 0x1d] }
    /* +0x48af600 */ __asm { cmp      r8d, r11d }
    /* +0x48af603 */ __asm { jb       0x48af629 }
    /* +0x48af605 */ __asm { mov      rax, r9 }
    /* +0x48af608 */ __asm { sub      rax, rbx }
    /* +0x48af60b */ __asm { add      qword ptr [rbp - 0x49], rax }
    /* +0x48af60f */ __asm { mov      rax, r10 }
    /* +0x48af612 */ __asm { sub      rax, rdi }
    /* +0x48af615 */ __asm { add      qword ptr [rbp - 0x41], rax }
    /* +0x48af619 */ __asm { mov      eax, edx }
    /* +0x48af61b */ __asm { sub      eax, ecx }
    /* +0x48af61d */ __asm { add      dword ptr [rbp - 0x39], eax }
    /* +0x48af620 */ __asm { mov      eax, r8d }
    /* +0x48af623 */ __asm { sub      eax, r11d }
    /* +0x48af626 */ __asm { add      dword ptr [rbp - 0x35], eax }
    /* +0x48af629 */ __asm { mov      rax, qword ptr [rbp - 0x71] }
    /* +0x48af62d */ __asm { test     rax, rax }
    /* +0x48af630 */ __asm { je       0x48af641 }
    /* +0x48af632 */ __asm { mov      qword ptr [rax + 0x48], r9 }
    /* +0x48af636 */ __asm { mov      qword ptr [rax + 0x50], r10 }
    /* +0x48af63a */ __asm { mov      dword ptr [rax + 0x58], edx }
    /* +0x48af63d */ __asm { mov      dword ptr [rax + 0x5c], r8d }
    /* +0x48af641 */ __asm { mov      rdx, qword ptr [rbp - 0x39] }
    /* +0x48af645 */ __asm { and      edx, 0xffffff }
    /* +0x48af64b */ __asm { shl      rdx, 0x18 }
}
