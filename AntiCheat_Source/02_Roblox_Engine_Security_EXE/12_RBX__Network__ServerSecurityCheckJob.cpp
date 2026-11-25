// Engine Security Class : RBX::Network::ServerSecurityCheckJob
// VTable RVA            : 0x7145478 (14 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x6dc430
void RBX__Network__ServerSecurityCheckJob_vfunc_00_0x6dc430(void* self, void* arg1, void* arg2) {
    /* +0x6dc430 */ __asm { xor      al, al }
    /* +0x6dc432 */ __asm { ret       }
}

// VTable Slot [1] | RVA 0x4067bc0
void RBX__Network__ServerSecurityCheckJob_vfunc_01_0x4067bc0(void* self, void* arg1, void* arg2) {
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
void RBX__Network__ServerSecurityCheckJob_vfunc_02_0x6dc400(void* self, void* arg1, void* arg2) {
    /* +0x6dc400 */ __asm { ret      0 }
    /* +0x6dc403 */ __asm { int3      }
}

// Slot [3] -> shared stub 0x6dc400

// Slot [4] -> shared stub 0x6dc400

// VTable Slot [5] | RVA 0x6dcfd0
void RBX__Network__ServerSecurityCheckJob_vfunc_05_0x6dcfd0(void* self, void* arg1, void* arg2) {
    /* +0x6dcfd0 */ __asm { mov      eax, 1 }
    /* +0x6dcfd5 */ __asm { ret       }
}

// VTable Slot [6] | RVA 0x4067b60
void RBX__Network__ServerSecurityCheckJob_vfunc_06_0x4067b60(void* self, void* arg1, void* arg2) {
    /* +0x4067b60 */ __asm { movsxd   rax, dword ptr [rip + 0x40c0221] }
    /* +0x4067b67 */ __asm { ret       }
}

// VTable Slot [7] | RVA 0x2903270
void RBX__Network__ServerSecurityCheckJob_vfunc_07_0x2903270(void* self, void* arg1, void* arg2) {
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

// VTable Slot [8] | RVA 0x48b2db0
void RBX__Network__ServerSecurityCheckJob_vfunc_08_0x48b2db0(void* self, void* arg1, void* arg2) {
    /* +0x48b2db0 */ __asm { mov      rax, rsp }
    /* +0x48b2db3 */ __asm { push     rbp }
    /* +0x48b2db4 */ __asm { push     rbx }
    /* +0x48b2db5 */ __asm { push     rsi }
    /* +0x48b2db6 */ __asm { push     rdi }
    /* +0x48b2db7 */ __asm { push     r12 }
    /* +0x48b2db9 */ __asm { push     r14 }
    /* +0x48b2dbb */ __asm { push     r15 }
    /* +0x48b2dbd */ __asm { lea      rbp, [rax - 0x5f] }
    /* +0x48b2dc1 */ __asm { sub      rsp, 0xd0 }
    /* +0x48b2dc8 */ __asm { movaps   xmmword ptr [rax - 0x48], xmm6 }
    /* +0x48b2dcc */ __asm { movaps   xmmword ptr [rax - 0x58], xmm7 }
    /* +0x48b2dd0 */ __asm { mov      rdi, rdx }
    /* +0x48b2dd3 */ __asm { mov      rbx, rcx }
    /* +0x48b2dd6 */ __asm { mov      rax, qword ptr gs:[0x58] }
    /* +0x48b2ddf */ __asm { mov      ecx, 0x28 }
    /* +0x48b2de4 */ __asm { mov      r8, qword ptr [rax] }
    /* +0x48b2de7 */ __asm { xor      r15d, r15d }
    /* +0x48b2dea */ __asm { mov      r14d, 0xffffffff }
    /* +0x48b2df0 */ __asm { mov      eax, dword ptr [rcx + r8] }
    /* +0x48b2df4 */ __asm { cmp      dword ptr [rip + 0x453ff4e], eax }
    /* +0x48b2dfa */ __asm { jg       0x48b31c4 }
    /* +0x48b2e00 */ __asm { xorps    xmm0, xmm0 }
    /* +0x48b2e03 */ __asm { movdqa   xmmword ptr [rbp - 0x79], xmm0 }
    /* +0x48b2e08 */ __asm { xorps    xmm1, xmm1 }
    /* +0x48b2e0b */ __asm { movdqa   xmmword ptr [rbp - 0x69], xmm1 }
    /* +0x48b2e10 */ __asm { movdqa   xmm0, xmmword ptr [rip + 0x2cffe68] }
    /* +0x48b2e18 */ __asm { movdqa   xmmword ptr [rbp - 0x59], xmm0 }
    /* +0x48b2e1d */ __asm { movdqa   xmmword ptr [rbp - 0x49], xmm1 }
    /* +0x48b2e22 */ __asm { mov      qword ptr [rbp - 0x39], r15 }
    /* +0x48b2e26 */ __asm { mov      qword ptr [rbp - 0x31], r15 }
    /* +0x48b2e2a */ __asm { mov      qword ptr [rbp - 0x29], r15 }
    /* +0x48b2e2e */ __asm { mov      qword ptr [rbp - 0x21], r15 }
    /* +0x48b2e32 */ __asm { mov      dword ptr [rbp - 0x19], r15d }
    /* +0x48b2e36 */ __asm { mov      qword ptr [rbp - 0x11], r15 }
    /* +0x48b2e3a */ __asm { mov      qword ptr [rbp - 9], r15 }
    /* +0x48b2e3e */ __asm { mov      byte ptr [rsp + 0x20], 0 }
    /* +0x48b2e43 */ __asm { xor      r9d, r9d }
    /* +0x48b2e46 */ __asm { lea      r8, [r9 - 1] }
    /* +0x48b2e4a */ __asm { mov      rdx, qword ptr [rip + 0x453feff] }
    /* +0x48b2e51 */ __asm { lea      rcx, [rbp - 0x79] }
    /* +0x48b2e55 */ __asm { call     0x2924c40 }
    /* +0x48b2e5a */ __asm { nop       }
    /* +0x48b2e5b */ __asm { mov      r12d, 1 }
    /* +0x48b2e61 */ __asm { mov      eax, dword ptr [rip + 0x3885d91] }
    /* +0x48b2e67 */ __asm { cmp      eax, 0x3c }
    /* +0x48b2e6a */ __asm { jle      0x48b2e92 }
    /* +0x48b2e6c */ __asm { lea      eax, [r12 + 0x3b] }
    /* +0x48b2e71 */ __asm { jmp      0x48b2e99 }
    /* +0x48b2e73 */ __asm { movzx    r8d, byte ptr [rcx + rax] }
    /* +0x48b2e78 */ __asm { inc      rax }
    /* +0x48b2e7b */ __asm { cmp      r8b, byte ptr [r10 + rax - 1] }
    /* +0x48b2e80 */ __asm { jne      0x48b321d }
    /* +0x48b2e86 */ __asm { cmp      rax, 4 }
    /* +0x48b2e8a */ __asm { je       0x48b3218 }
    /* +0x48b2e90 */ __asm { jmp      0x48b2e73 }
    /* +0x48b2e92 */ __asm { cmp      eax, r12d }
    /* +0x48b2e95 */ __asm { cmovl    eax, r12d }
    /* +0x48b2e99 */ __asm { movd     xmm1, eax }
    /* +0x48b2e9d */ __asm { cvtdq2ps xmm1, xmm1 }
    /* +0x48b2ea0 */ __asm { movss    xmm7, dword ptr [rip + 0x2cec80c] }
    /* +0x48b2ea8 */ __asm { movaps   xmm0, xmm7 }
    /* +0x48b2eab */ __asm { divss    xmm0, xmm1 }
    /* +0x48b2eaf */ __asm { cvtps2pd xmm2, xmm0 }
    /* +0x48b2eb2 */ __asm { movsd    xmm3, qword ptr [rdi + 8] }
    /* +0x48b2eb7 */ __asm { mov      dword ptr [rbp + 0x77], 0x3f800000 }
    /* +0x48b2ebe */ __asm { mov      dword ptr [rbp + 0x67], 0x3f800000 }
    /* +0x48b2ec5 */ __asm { mulsd    xmm3, xmm2 }
    /* +0x48b2ec9 */ __asm { addsd    xmm3, qword ptr [rbx + 0x178] }
    /* +0x48b2ed1 */ __asm { cvtpd2ps xmm6, xmm3 }
    /* +0x48b2ed5 */ __asm { movaps   xmm0, xmm6 }
    /* +0x48b2ed8 */ __asm { call     0x60a2a44 }
    /* +0x48b2edd */ __asm { movss    dword ptr [rbp + 0x6f], xmm0 }
    /* +0x48b2ee2 */ __asm { lea      rax, [rbp + 0x67] }
    /* +0x48b2ee6 */ __asm { lea      rcx, [rbp + 0x6f] }
    /* +0x48b2eea */ __asm { comiss   xmm0, xmm7 }
    /* +0x48b2eed */ __asm { cmovbe   rax, rcx }
    /* +0x48b2ef1 */ __asm { movss    xmm2, dword ptr [rax] }
    /* +0x48b2ef5 */ __asm { subss    xmm6, xmm2 }
    /* +0x48b2ef9 */ __asm { movss    dword ptr [rbp + 0x67], xmm6 }
    /* +0x48b2efe */ __asm { lea      rax, [rbp + 0x77] }
    /* +0x48b2f02 */ __asm { lea      rcx, [rbp + 0x67] }
    /* +0x48b2f06 */ __asm { comiss   xmm6, xmm7 }
    /* +0x48b2f09 */ __asm { cmovbe   rax, rcx }
    /* +0x48b2f0d */ __asm { movss    xmm0, dword ptr [rax] }
    /* +0x48b2f11 */ __asm { cvtps2pd xmm0, xmm0 }
    /* +0x48b2f14 */ __asm { movsd    qword ptr [rbx + 0x178], xmm0 }
    /* +0x48b2f1c */ __asm { xorps    xmm1, xmm1 }
    /* +0x48b2f1f */ __asm { comiss   xmm1, xmm2 }
    /* +0x48b2f22 */ __asm { jb       0x48b2f29 }
    /* +0x48b2f24 */ __asm { xorps    xmm0, xmm0 }
    /* +0x48b2f27 */ __asm { jmp      0x48b2f2c }
    /* +0x48b2f29 */ __asm { cvtps2pd xmm0, xmm2 }
    /* +0x48b2f2c */ __asm { cvtpd2ps xmm0, xmm0 }
    /* +0x48b2f30 */ __asm { comiss   xmm0, xmm7 }
    /* +0x48b2f33 */ __asm { jb       0x48b2f6c }
    /* +0x48b2f35 */ __asm { mov      rax, qword ptr [rbx + 0x1b0] }
    /* +0x48b2f3c */ __asm { mov      rdi, qword ptr [rax + 0x7c8] }
    /* +0x48b2f43 */ __asm { mov      rbx, qword ptr [rax + 0x7c0] }
    /* +0x48b2f4a */ __asm { cmp      rbx, rdi }
    /* +0x48b2f4d */ __asm { je       0x48b2f6c }
    /* +0x48b2f4f */ __asm { nop       }
    /* +0x48b2f50 */ __asm { mov      rcx, qword ptr [rbx] }
    /* +0x48b2f53 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x48b2f56 */ __asm { mov      rax, qword ptr [rax + 0x328] }
    /* +0x48b2f5d */ __asm { call     qword ptr [rip + 0x1b86ddd] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x48b2f63 */ __asm { add      rbx, 8 }
    /* +0x48b2f67 */ __asm { cmp      rbx, rdi }
    /* +0x48b2f6a */ __asm { jne      0x48b2f50 }
    /* +0x48b2f6c */ __asm { cmp      qword ptr [rbp - 0x51], -1 }
    /* +0x48b2f71 */ __asm { je       0x48b3187 }
    /* +0x48b2f77 */ __asm { mov      rax, qword ptr [rbp - 0x11] }
    /* +0x48b2f7b */ __asm { test     rax, rax }
    /* +0x48b2f7e */ __asm { je       0x48b2fc6 }
    /* +0x48b2f80 */ __asm { mov      rdx, r15 }
    /* +0x48b2f83 */ __asm { cmp      qword ptr [rbp - 9], 1 }
    /* +0x48b2f88 */ __asm { sete     dl }
    /* +0x48b2f8b */ __asm { add      rdx, 2 }
    /* +0x48b2f8f */ __asm { shl      rdx, 0x30 }
    /* +0x48b2f93 */ __asm { movabs   rcx, 0xffffffffffff }
    /* +0x48b2f9d */ __asm { and      rax, rcx }
    /* +0x48b2fa0 */ __asm { or       rdx, rax }
    /* +0x48b2fa3 */ __asm { mov      qword ptr [rbp + 0x67], r15 }
    /* +0x48b2fa7 */ __asm { lea      rax, [rbp + 0x67] }
    /* +0x48b2fab */ __asm { mov      qword ptr [rsp + 0x28], rax }
    /* +0x48b2fb0 */ __asm { mov      qword ptr [rsp + 0x20], r15 }
    /* +0x48b2fb5 */ __asm { xor      r9d, r9d }
    /* +0x48b2fb8 */ __asm { xor      r8d, r8d }
    /* +0x48b2fbb */ __asm { mov      cl, 0x21 }
    /* +0x48b2fbd */ __asm { call     0x29a42e0 }
    /* +0x48b2fc2 */ __asm { mov      qword ptr [rbp - 9], r15 }
    /* +0x48b2fc6 */ __asm { cmp      byte ptr [rip + 0x3bf1509], 0 }
    /* +0x48b2fcd */ __asm { je       0x48b30b9 }
    /* +0x48b2fd3 */ __asm { cmp      byte ptr [rip + 0x3850f46], 0 }
    /* +0x48b2fda */ __asm { je       0x48b30b9 }
    /* +0x48b2fe0 */ __asm { call     0x497fea0 }
    /* +0x48b2fe5 */ __asm { mov      rcx, qword ptr [rax] }
    /* +0x48b2fe8 */ __asm { test     rcx, rcx }
    /* +0x48b2feb */ __asm { jne      0x48b2ff1 }
    /* +0x48b2fed */ __asm { lea      rcx, [rax + 8] }
    /* +0x48b2ff1 */ __asm { mov      edx, dword ptr [rcx] }
    /* +0x48b2ff3 */ __asm { mov      r8d, dword ptr [rcx + 4] }
    /* +0x48b2ff7 */ __asm { mov      r9, qword ptr [rcx + 8] }
    /* +0x48b2ffb */ __asm { mov      r10, qword ptr [rcx + 0x10] }
    /* +0x48b2fff */ __asm { mov      ecx, dword ptr [rbp - 0x21] }
    /* +0x48b3002 */ __asm { test     ecx, ecx }
    /* +0x48b3004 */ __asm { je       0x48b3049 }
    /* +0x48b3006 */ __asm { mov      rbx, qword ptr [rbp - 0x31] }
    /* +0x48b300a */ __asm { cmp      r9, rbx }
    /* +0x48b300d */ __asm { jb       0x48b3049 }
    /* +0x48b300f */ __asm { mov      rdi, qword ptr [rbp - 0x29] }
    /* +0x48b3013 */ __asm { cmp      r10, rdi }
    /* +0x48b3016 */ __asm { jb       0x48b3049 }
    /* +0x48b3018 */ __asm { cmp      edx, ecx }
    /* +0x48b301a */ __asm { jb       0x48b3049 }
    /* +0x48b301c */ __asm { mov      r11d, dword ptr [rbp - 0x1d] }
    /* +0x48b3020 */ __asm { cmp      r8d, r11d }
    /* +0x48b3023 */ __asm { jb       0x48b3049 }
    /* +0x48b3025 */ __asm { mov      rax, r9 }
    /* +0x48b3028 */ __asm { sub      rax, rbx }
    /* +0x48b302b */ __asm { add      qword ptr [rbp - 0x49], rax }
    /* +0x48b302f */ __asm { mov      rax, r10 }
    /* +0x48b3032 */ __asm { sub      rax, rdi }
    /* +0x48b3035 */ __asm { add      qword ptr [rbp - 0x41], rax }
    /* +0x48b3039 */ __asm { mov      eax, edx }
    /* +0x48b303b */ __asm { sub      eax, ecx }
    /* +0x48b303d */ __asm { add      dword ptr [rbp - 0x39], eax }
    /* +0x48b3040 */ __asm { mov      eax, r8d }
    /* +0x48b3043 */ __asm { sub      eax, r11d }
    /* +0x48b3046 */ __asm { add      dword ptr [rbp - 0x35], eax }
    /* +0x48b3049 */ __asm { mov      rax, qword ptr [rbp - 0x71] }
    /* +0x48b304d */ __asm { test     rax, rax }
    /* +0x48b3050 */ __asm { je       0x48b3061 }
    /* +0x48b3052 */ __asm { mov      qword ptr [rax + 0x48], r9 }
    /* +0x48b3056 */ __asm { mov      qword ptr [rax + 0x50], r10 }
    /* +0x48b305a */ __asm { mov      dword ptr [rax + 0x58], edx }
    /* +0x48b305d */ __asm { mov      dword ptr [rax + 0x5c], r8d }
    /* +0x48b3061 */ __asm { mov      rdx, qword ptr [rbp - 0x39] }
    /* +0x48b3065 */ __asm { and      edx, 0xffffff }
    /* +0x48b306b */ __asm { shl      rdx, 0x18 }
}

// VTable Slot [9] | RVA 0x48b4a90
void RBX__Network__ServerSecurityCheckJob_vfunc_09_0x48b4a90(void* self, void* arg1, void* arg2) {
    /* +0x48b4a90 */ __asm { jmp      0x48b43f0 }
    /* +0x48b4a95 */ __asm { int3      }
}

// VTable Slot [10] | RVA 0x120d1a0
// [Undecrypted .text page at RVA 0x120d1a0 — run with --watch while playing to capture]
void RBX__Network__ServerSecurityCheckJob_vfunc_10_0x120d1a0(/* encrypted page */);

// VTable Slot [11] | RVA 0x48b4aa0
void RBX__Network__ServerSecurityCheckJob_vfunc_11_0x48b4aa0(void* self, void* arg1, void* arg2) {
    /* +0x48b4aa0 */ __asm { int3      }
    /* +0x48b4aa1 */ __asm { int3      }
}

// VTable Slot [12] | RVA 0x48b47d0
void RBX__Network__ServerSecurityCheckJob_vfunc_12_0x48b47d0(void* self, void* arg1, void* arg2) {
    /* +0x48b47d0 */ __asm { mov      qword ptr [rsp + 0x18], rbx }
    /* +0x48b47d5 */ __asm { push     rbp }
    /* +0x48b47d6 */ __asm { push     rsi }
    /* +0x48b47d7 */ __asm { push     rdi }
    /* +0x48b47d8 */ __asm { lea      rbp, [rsp - 0x47] }
    /* +0x48b47dd */ __asm { sub      rsp, 0xe0 }
    /* +0x48b47e4 */ __asm { mov      rax, qword ptr [rip + 0x3823ef5] }
    /* +0x48b47eb */ __asm { xor      rax, rsp }
    /* +0x48b47ee */ __asm { mov      qword ptr [rbp + 0x37], rax }
    /* +0x48b47f2 */ __asm { mov      rdi, rcx }
    /* +0x48b47f5 */ __asm { lea      rbx, [rdx + 0x1f0] }
    /* +0x48b47fc */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x48b47ff */ __asm { mov      rcx, rbx }
    /* +0x48b4802 */ __asm { mov      rax, qword ptr [rax + 0x260] }
    /* +0x48b4809 */ __asm { call     qword ptr [rip + 0x1b85531] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x48b480f */ __asm { xor      esi, esi }
    /* +0x48b4811 */ __asm { test     al, al }
    /* +0x48b4813 */ __asm { jne      0x48b4833 }
    /* +0x48b4815 */ __asm { call     0x27c4080 }
    /* +0x48b481a */ __asm { mov      qword ptr [rbp - 0x61], rsi }
    /* +0x48b481e */ __asm { mov      qword ptr [rbp - 0x49], 0xf }
    /* +0x48b4826 */ __asm { mov      qword ptr [rbp - 0x51], rsi }
    /* +0x48b482a */ __asm { lea      rcx, [rbp - 0x61] }
    /* +0x48b482e */ __asm { call     0x6f8fb0 }
    /* +0x48b4833 */ __asm { mov      rcx, rbx }
    /* +0x48b4836 */ __asm { call     0x45d0550 }
    /* +0x48b483b */ __asm { mov      rcx, qword ptr [rax] }
    /* +0x48b483e */ __asm { test     rcx, rcx }
    /* +0x48b4841 */ __asm { je       0x48b4912 }
    /* +0x48b4847 */ __asm { call     0x45cd140 }
    /* +0x48b484c */ __asm { mov      rbx, rax }
    /* +0x48b484f */ __asm { test     rax, rax }
    /* +0x48b4852 */ __asm { je       0x48b4912 }
    /* +0x48b4858 */ __asm { mov      r11, qword ptr [rdi + 0x18] }
    /* +0x48b485c */ __asm { mov      qword ptr [rdi + 0x18], rsi }
    /* +0x48b4860 */ __asm { mov      r10, qword ptr [rdi + 0x10] }
    /* +0x48b4864 */ __asm { mov      qword ptr [rdi + 0x10], rsi }
    /* +0x48b4868 */ __asm { mov      r9, qword ptr [rdi + 8] }
    /* +0x48b486c */ __asm { mov      qword ptr [rdi + 8], rsi }
    /* +0x48b4870 */ __asm { mov      r8, qword ptr [rdi] }
    /* +0x48b4873 */ __asm { mov      edx, dword ptr [rdi + 0x20] }
    /* +0x48b4876 */ __asm { mov      qword ptr [rbp - 0x31], rsi }
    /* +0x48b487a */ __asm { mov      qword ptr [rbp - 0x29], rsi }
    /* +0x48b487e */ __asm { lea      rax, [rip + 0x28863fb] }
    /* +0x48b4885 */ __asm { mov      qword ptr [rbp - 0x39], rax }
    /* +0x48b4889 */ __asm { mov      qword ptr [rbp - 0x21], rbx }
    /* +0x48b488d */ __asm { mov      rax, qword ptr [rbx + 0x3b28] }
    /* +0x48b4894 */ __asm { mov      rcx, qword ptr [rax + 0x870] }
    /* +0x48b489b */ __asm { mov      qword ptr [rbp - 0x19], rcx }
    /* +0x48b489f */ __asm { mov      byte ptr [rbp - 0x11], sil }
    /* +0x48b48a3 */ __asm { xorps    xmm0, xmm0 }
    /* +0x48b48a6 */ __asm { movsd    qword ptr [rbp - 9], xmm0 }
    /* +0x48b48ab */ __asm { mov      qword ptr [rbp - 1], rsi }
    /* +0x48b48af */ __asm { lea      rax, [rip + 0x2890c4a] }
    /* +0x48b48b6 */ __asm { mov      qword ptr [rbp - 0x39], rax }
    /* +0x48b48ba */ __asm { mov      dword ptr [rbp + 7], edx }
    /* +0x48b48bd */ __asm { mov      qword ptr [rbp + 0xf], r8 }
    /* +0x48b48c1 */ __asm { mov      qword ptr [rbp + 0x17], r9 }
    /* +0x48b48c5 */ __asm { mov      qword ptr [rbp + 0x1f], r10 }
    /* +0x48b48c9 */ __asm { mov      qword ptr [rbp + 0x27], r11 }
    /* +0x48b48cd */ __asm { lea      rdx, [rbp - 0x39] }
    /* +0x48b48d1 */ __asm { mov      rcx, rbx }
    /* +0x48b48d4 */ __asm { cmp      byte ptr [rip + 0x383fbe5], 0 }
    /* +0x48b48db */ __asm { je       0x48b48e4 }
    /* +0x48b48dd */ __asm { call     0x46318c0 }
    /* +0x48b48e2 */ __asm { jmp      0x48b48ea }
    /* +0x48b48e4 */ __asm { call     0x46310f0 }
    /* +0x48b48e9 */ __asm { nop       }
    /* +0x48b48ea */ __asm { mov      rdx, qword ptr [rbp + 0x17] }
    /* +0x48b48ee */ __asm { test     rdx, rdx }
    /* +0x48b48f1 */ __asm { je       0x48b4912 }
    /* +0x48b48f3 */ __asm { mov      r8, qword ptr [rbp + 0x27] }
    /* +0x48b48f7 */ __asm { sub      r8, rdx }
    /* +0x48b48fa */ __asm { mov      rcx, qword ptr [rbp + 0xf] }
    /* +0x48b48fe */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x48b4901 */ __asm { mov      r9d, 1 }
    /* +0x48b4907 */ __asm { mov      rax, qword ptr [rax + 0x10] }
    /* +0x48b490b */ __asm { call     qword ptr [rip + 0x1b8542f] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x48b4911 */ __asm { nop       }
    /* +0x48b4912 */ __asm { mov      rcx, qword ptr [rbp + 0x37] }
    /* +0x48b4916 */ __asm { xor      rcx, rsp }
    /* +0x48b4919 */ __asm { call     0x5de48a0 }
    /* +0x48b491e */ __asm { mov      rbx, qword ptr [rsp + 0x110] }
    /* +0x48b4926 */ __asm { add      rsp, 0xe0 }
    /* +0x48b492d */ __asm { pop      rdi }
    /* +0x48b492e */ __asm { pop      rsi }
    /* +0x48b492f */ __asm { pop      rbp }
    /* +0x48b4930 */ __asm { ret       }
}

// VTable Slot [13] | RVA 0x48b4940
void RBX__Network__ServerSecurityCheckJob_vfunc_13_0x48b4940(void* self, void* arg1, void* arg2) {
    /* +0x48b4940 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x48b4945 */ __asm { mov      qword ptr [rsp + 0x10], rbp }
    /* +0x48b494a */ __asm { mov      qword ptr [rsp + 0x18], rsi }
    /* +0x48b494f */ __asm { mov      qword ptr [rsp + 0x20], rdi }
    /* +0x48b4954 */ __asm { push     r14 }
    /* +0x48b4956 */ __asm { sub      rsp, 0x20 }
    /* +0x48b495a */ __asm { mov      r14, rdx }
    /* +0x48b495d */ __asm { mov      rsi, rcx }
    /* +0x48b4960 */ __asm { mov      rax, qword ptr [rdx] }
    /* +0x48b4963 */ __asm { mov      qword ptr [rcx], rax }
    /* +0x48b4966 */ __asm { xor      eax, eax }
    /* +0x48b4968 */ __asm { mov      qword ptr [rcx + 8], rax }
    /* +0x48b496c */ __asm { mov      qword ptr [rcx + 0x10], rax }
    /* +0x48b4970 */ __asm { mov      qword ptr [rcx + 0x18], rax }
    /* +0x48b4974 */ __asm { mov      rbx, qword ptr [rdx + 8] }
    /* +0x48b4978 */ __asm { mov      rbp, qword ptr [rdx + 0x10] }
    /* +0x48b497c */ __asm { cmp      rbx, rbp }
    /* +0x48b497f */ __asm { int3      }
}
