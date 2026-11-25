// Engine Security Class : RBX::IntegrityService
// VTable RVA            : 0x7087cc0 (76 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x306adc0
// [Undecrypted .text page at RVA 0x306adc0 — run with --watch while playing to capture]
void RBX__IntegrityService_vfunc_00_0x306adc0(/* encrypted page */);

// VTable Slot [1] | RVA 0x1c1f1a0
void RBX__IntegrityService_vfunc_01_0x1c1f1a0(void* self, void* arg1, void* arg2) {
    /* +0x1c1f1a0 */ __asm { mov      eax, 0xe98c18d }
    /* +0x1c1f1a5 */ __asm { ret       }
}

// VTable Slot [2] | RVA 0x1c396e0
void RBX__IntegrityService_vfunc_02_0x1c396e0(void* self, void* arg1, void* arg2) {
    /* +0x1c396e0 */ __asm { mov      rax, qword ptr [rdx] }
    /* +0x1c396e3 */ __asm { mov      r9, rdx }
    /* +0x1c396e6 */ __asm { mov      rdx, rcx }
    /* +0x1c396e9 */ __asm { mov      rcx, r9 }
    /* +0x1c396ec */ __asm { mov      rax, qword ptr [rax + 0x38] }
    /* +0x1c396f0 */ __asm { jmp      qword ptr [rip + 0x4800649] }
    /* +0x1c396f7 */ __asm { int3      }
}

// VTable Slot [3] | RVA 0x1c44010
void RBX__IntegrityService_vfunc_03_0x1c44010(void* self, void* arg1, void* arg2) {
    /* +0x1c44010 */ __asm { mov      qword ptr [rsp + 0x10], rbx }
    /* +0x1c44015 */ __asm { push     rbp }
    /* +0x1c44016 */ __asm { push     rsi }
    /* +0x1c44017 */ __asm { push     rdi }
    /* +0x1c44018 */ __asm { sub      rsp, 0x80 }
    /* +0x1c4401f */ __asm { mov      rsi, r9 }
    /* +0x1c44022 */ __asm { mov      rbp, r8 }
    /* +0x1c44025 */ __asm { mov      rdi, rdx }
    /* +0x1c44028 */ __asm { mov      rbx, rcx }
    /* +0x1c4402b */ __asm { cmp      qword ptr [rcx + 0x60], 0 }
    /* +0x1c44030 */ __asm { je       0x1c44050 }
    /* +0x1c44032 */ __asm { cmp      byte ptr [rip + 0x64b0a8f], 0 }
    /* +0x1c44039 */ __asm { mov      rax, qword ptr [rip + 0x64b0c08] }
    /* +0x1c44040 */ __asm { jne      0x1c44049 }
    /* +0x1c44042 */ __asm { mov      rax, qword ptr [rip + 0x64b0c07] }
    /* +0x1c44049 */ __asm { call     qword ptr [rip + 0x47f5cf1] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c4404f */ __asm { nop       }
    /* +0x1c44050 */ __asm { lea      rax, [rip + 0x53f3559] }
    /* +0x1c44057 */ __asm { mov      qword ptr [rsp + 0x30], rax }
    /* +0x1c4405c */ __asm { mov      qword ptr [rsp + 0x38], rdi }
    /* +0x1c44061 */ __asm { mov      ecx, 0x18 }
    /* +0x1c44066 */ __asm { call     0x4956040 }
    /* +0x1c4406b */ __asm { test     rax, rax }
    /* +0x1c4406e */ __asm { je       0x1c4411d }
    /* +0x1c44074 */ __asm { mov      qword ptr [rsp + 0x28], rax }
    /* +0x1c44079 */ __asm { mov      rdx, rbp }
    /* +0x1c4407c */ __asm { mov      rcx, rax }
    /* +0x1c4407f */ __asm { call     0xffc540 }
    /* +0x1c44084 */ __asm { nop       }
    /* +0x1c44085 */ __asm { mov      rdx, rax }
    /* +0x1c44088 */ __asm { lea      rcx, [rsp + 0x40] }
    /* +0x1c4408d */ __asm { call     0xd29440 }
    /* +0x1c44092 */ __asm { movups   xmm0, xmmword ptr [rsi] }
    /* +0x1c44095 */ __asm { movups   xmmword ptr [rsp + 0x50], xmm0 }
    /* +0x1c4409a */ __asm { lea      rax, [rsp + 0x30] }
    /* +0x1c4409f */ __asm { mov      qword ptr [rsp + 0x28], rax }
    /* +0x1c440a4 */ __asm { mov      dword ptr [rsp + 0x20], 3 }
    /* +0x1c440ac */ __asm { mov      rax, qword ptr [rbx + 0x48] }
    /* +0x1c440b0 */ __asm { test     rax, rax }
    /* +0x1c440b3 */ __asm { je       0x1c440e7 }
    /* +0x1c440b5 */ __asm { cmp      qword ptr [rax + 8], 0 }
    /* +0x1c440ba */ __asm { je       0x1c440e7 }
    /* +0x1c440bc */ __asm { mov      edx, 1 }
    /* +0x1c440c1 */ __asm { mov      rcx, qword ptr [rip + 0x688b340] }
    /* +0x1c440c8 */ __asm { call     0xc700 }
    /* +0x1c440cd */ __asm { cmp      qword ptr [rax], 0 }
    /* +0x1c440d1 */ __asm { jne      0x1c44109 }
    /* +0x1c440d3 */ __asm { lea      r8, [rsp + 0x28] }
    /* +0x1c440d8 */ __asm { lea      rdx, [rsp + 0x20] }
    /* +0x1c440dd */ __asm { mov      rcx, qword ptr [rbx + 0x48] }
    /* +0x1c440e1 */ __asm { call     0x7d7f00 }
    /* +0x1c440e6 */ __asm { nop       }
    /* +0x1c440e7 */ __asm { mov      rcx, qword ptr [rsp + 0x48] }
    /* +0x1c440ec */ __asm { test     rcx, rcx }
    /* +0x1c440ef */ __asm { je       0x1c440f6 }
    /* +0x1c440f1 */ __asm { call     0x6daf40 }
    /* +0x1c440f6 */ __asm { mov      rbx, qword ptr [rsp + 0xa8] }
    /* +0x1c440fe */ __asm { add      rsp, 0x80 }
    /* +0x1c44105 */ __asm { pop      rdi }
    /* +0x1c44106 */ __asm { pop      rsi }
    /* +0x1c44107 */ __asm { pop      rbp }
    /* +0x1c44108 */ __asm { ret       }
}

// VTable Slot [4] | RVA 0x6dc430
void RBX__IntegrityService_vfunc_04_0x6dc430(void* self, void* arg1, void* arg2) {
    /* +0x6dc430 */ __asm { xor      al, al }
    /* +0x6dc432 */ __asm { ret       }
}

// VTable Slot [5] | RVA 0x6dc400
void RBX__IntegrityService_vfunc_05_0x6dc400(void* self, void* arg1, void* arg2) {
    /* +0x6dc400 */ __asm { ret      0 }
    /* +0x6dc403 */ __asm { int3      }
}

// VTable Slot [6] | RVA 0x793ed0
void RBX__IntegrityService_vfunc_06_0x793ed0(void* self, void* arg1, void* arg2) {
    /* +0x793ed0 */ __asm { cmp      rdx, 1 }
    /* +0x793ed4 */ __asm { je       0x793ed9 }
    /* +0x793ed6 */ __asm { xor      eax, eax }
    /* +0x793ed8 */ __asm { ret       }
}

// VTable Slot [7] | RVA 0x306d6b0
// [Undecrypted .text page at RVA 0x306d6b0 — run with --watch while playing to capture]
void RBX__IntegrityService_vfunc_07_0x306d6b0(/* encrypted page */);

// VTable Slot [8] | RVA 0x1c3dbf0
void RBX__IntegrityService_vfunc_08_0x1c3dbf0(void* self, void* arg1, void* arg2) {
    /* +0x1c3dbf0 */ __asm { push     rbx }
    /* +0x1c3dbf2 */ __asm { sub      rsp, 0x20 }
    /* +0x1c3dbf6 */ __asm { mov      rbx, rcx }
    /* +0x1c3dbf9 */ __asm { call     0x1c4d900 }
    /* +0x1c3dbfe */ __asm { test     rax, rax }
    /* +0x1c3dc01 */ __asm { je       0x1c3dc0a }
    /* +0x1c3dc03 */ __asm { mov      qword ptr [rax], 0 }
    /* +0x1c3dc0a */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c3dc0d */ __asm { mov      rcx, rbx }
    /* +0x1c3dc10 */ __asm { mov      rax, qword ptr [rax + 0x1a0] }
    /* +0x1c3dc17 */ __asm { add      rsp, 0x20 }
    /* +0x1c3dc1b */ __asm { pop      rbx }
    /* +0x1c3dc1c */ __asm { jmp      qword ptr [rip + 0x47fc11d] }
    /* +0x1c3dc23 */ __asm { int3      }
}

// VTable Slot [9] | RVA 0x77d610
void RBX__IntegrityService_vfunc_09_0x77d610(void* self, void* arg1, void* arg2) {
    /* +0x77d610 */ __asm { cmp      r8b, 3 }
    /* +0x77d614 */ __asm { jne      0x77d61f }
    /* +0x77d616 */ __asm { add      rcx, 0x58 }
    /* +0x77d61a */ __asm { jmp      0x27c21f0 }
    /* +0x77d61f */ __asm { cmp      r8b, 4 }
    /* +0x77d623 */ __asm { jne      0x77d62e }
    /* +0x77d625 */ __asm { add      rcx, 0x58 }
    /* +0x77d629 */ __asm { jmp      0x27c27a0 }
    /* +0x77d62e */ __asm { ret       }
}

// VTable Slot [10] | RVA 0x1c432c0
void RBX__IntegrityService_vfunc_10_0x1c432c0(void* self, void* arg1, void* arg2) {
    /* +0x1c432c0 */ __asm { sub      rsp, 0x28 }
    /* +0x1c432c4 */ __asm { cmp      byte ptr [rip + 0x686120b], 0 }
    /* +0x1c432cb */ __asm { mov      rdx, rcx }
    /* +0x1c432ce */ __asm { je       0x1c432eb }
    /* +0x1c432d0 */ __asm { cmp      byte ptr [rip + 0x64b16c1], 0 }
    /* +0x1c432d7 */ __asm { je       0x1c432eb }
    /* +0x1c432d9 */ __asm { cmp      byte ptr [rip + 0x64b1830], 0 }
    /* +0x1c432e0 */ __asm { je       0x1c432eb }
    /* +0x1c432e2 */ __asm { add      rsp, 0x28 }
    /* +0x1c432e6 */ __asm { jmp      0x1c43380 }
    /* +0x1c432eb */ __asm { mov      rcx, qword ptr [rcx + 0x70] }
    /* +0x1c432ef */ __asm { test     rcx, rcx }
    /* +0x1c432f2 */ __asm { je       0x1c4337a }
    /* +0x1c432f8 */ __asm { mov      r8, qword ptr [rcx + 8] }
    /* +0x1c432fc */ __asm { xor      r9d, r9d }
    /* +0x1c432ff */ __asm { mov      rcx, qword ptr [rcx] }
    /* +0x1c43302 */ __asm { mov      qword ptr [rsp + 0x30], rbx }
    /* +0x1c43307 */ __asm { cmp      rcx, r8 }
    /* +0x1c4330a */ __asm { je       0x1c43320 }
    /* +0x1c4330c */ __asm { nop      dword ptr [rax] }
    /* +0x1c43310 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c43313 */ __asm { add      rcx, 0x10 }
    /* +0x1c43317 */ __asm { mov      qword ptr [rax + 0x60], r9 }
    /* +0x1c4331b */ __asm { cmp      rcx, r8 }
    /* +0x1c4331e */ __asm { jne      0x1c43310 }
    /* +0x1c43320 */ __asm { mov      rbx, qword ptr [rdx + 0x78] }
    /* +0x1c43324 */ __asm { mov      qword ptr [rdx + 0x70], r9 }
    /* +0x1c43328 */ __asm { mov      qword ptr [rdx + 0x78], r9 }
    /* +0x1c4332c */ __asm { test     rbx, rbx }
    /* +0x1c4332f */ __asm { je       0x1c43375 }
    /* +0x1c43331 */ __asm { mov      qword ptr [rsp + 0x20], rdi }
    /* +0x1c43336 */ __asm { mov      edi, 0xffffffff }
    /* +0x1c4333b */ __asm { mov      eax, edi }
    /* +0x1c4333d */ __asm { lock xadd dword ptr [rbx + 8], eax }
    /* +0x1c43342 */ __asm { cmp      eax, 1 }
    /* +0x1c43345 */ __asm { jne      0x1c43370 }
    /* +0x1c43347 */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c4334a */ __asm { mov      rcx, rbx }
    /* +0x1c4334d */ __asm { mov      rax, qword ptr [rax] }
    /* +0x1c43350 */ __asm { call     qword ptr [rip + 0x47f69ea] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c43356 */ __asm { lock xadd dword ptr [rbx + 0xc], edi }
    /* +0x1c4335b */ __asm { cmp      edi, 1 }
    /* +0x1c4335e */ __asm { jne      0x1c43370 }
    /* +0x1c43360 */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c43363 */ __asm { mov      rcx, rbx }
    /* +0x1c43366 */ __asm { mov      rax, qword ptr [rax + 8] }
    /* +0x1c4336a */ __asm { call     qword ptr [rip + 0x47f69d0] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c43370 */ __asm { mov      rdi, qword ptr [rsp + 0x20] }
    /* +0x1c43375 */ __asm { mov      rbx, qword ptr [rsp + 0x30] }
    /* +0x1c4337a */ __asm { add      rsp, 0x28 }
    /* +0x1c4337e */ __asm { ret       }
}

// Slot [11] -> shared stub 0x6dc400

// Slot [12] -> shared stub 0x6dc400

// VTable Slot [13] | RVA 0x787050
void RBX__IntegrityService_vfunc_13_0x787050(void* self, void* arg1, void* arg2) {
    /* +0x787050 */ __asm { mov      rax, qword ptr [rcx + 0x18] }
    /* +0x787054 */ __asm { cmp      qword ptr [rax + 0x190], 0 }
    /* +0x78705c */ __asm { jne      0x787067 }
    /* +0x78705e */ __asm { cmp      byte ptr [rcx + 0x93], 0 }
    /* +0x787065 */ __asm { je       0x78706f }
    /* +0x787067 */ __asm { xor      r8d, r8d }
    /* +0x78706a */ __asm { jmp      0x1c3cb70 }
    /* +0x78706f */ __asm { ret       }
}

// VTable Slot [14] | RVA 0x787030
void RBX__IntegrityService_vfunc_14_0x787030(void* self, void* arg1, void* arg2) {
    /* +0x787030 */ __asm { mov      rax, qword ptr [rcx + 0x18] }
    /* +0x787034 */ __asm { cmp      byte ptr [rax + 0x190], 0 }
    /* +0x78703b */ __asm { jne      0x787046 }
    /* +0x78703d */ __asm { cmp      byte ptr [rcx + 0x93], 0 }
    /* +0x787044 */ __asm { je       0x78704e }
    /* +0x787046 */ __asm { mov      r8b, 1 }
    /* +0x787049 */ __asm { jmp      0x1c3cb70 }
    /* +0x78704e */ __asm { ret       }
}

// VTable Slot [15] | RVA 0x1c3cdf0
void RBX__IntegrityService_vfunc_15_0x1c3cdf0(void* self, void* arg1, void* arg2) {
    /* +0x1c3cdf0 */ __asm { sub      rsp, 0x28 }
    /* +0x1c3cdf4 */ __asm { mov      r8, qword ptr [rcx + 0x18] }
    /* +0x1c3cdf8 */ __asm { mov      r10, rdx }
    /* +0x1c3cdfb */ __asm { mov      rdx, qword ptr [r8 + 0x190] }
    /* +0x1c3ce02 */ __asm { mov      rax, rdx }
    /* +0x1c3ce05 */ __asm { and      rax, r10 }
    /* +0x1c3ce08 */ __asm { cmp      rax, rdx }
    /* +0x1c3ce0b */ __asm { jne      0x1c3ce27 }
    /* +0x1c3ce0d */ __asm { movzx    eax, byte ptr [rcx + 0x93] }
    /* +0x1c3ce14 */ __asm { test     al, al }
    /* +0x1c3ce16 */ __asm { je       0x1c3ce22 }
    /* +0x1c3ce18 */ __asm { mov      ecx, eax }
    /* +0x1c3ce1a */ __asm { and      rax, r10 }
    /* +0x1c3ce1d */ __asm { cmp      rax, rcx }
    /* +0x1c3ce20 */ __asm { jne      0x1c3ce4c }
    /* +0x1c3ce22 */ __asm { add      rsp, 0x28 }
    /* +0x1c3ce26 */ __asm { ret       }
}

// VTable Slot [16] | RVA 0x786fb0
void RBX__IntegrityService_vfunc_16_0x786fb0(void* self, void* arg1, void* arg2) {
    /* +0x786fb0 */ __asm { sub      rsp, 0x28 }
    /* +0x786fb4 */ __asm { mov      r8, qword ptr [rcx + 0x18] }
    /* +0x786fb8 */ __asm { mov      r10, rdx }
    /* +0x786fbb */ __asm { movzx    edx, byte ptr [r8 + 0x190] }
    /* +0x786fc3 */ __asm { mov      eax, edx }
    /* +0x786fc5 */ __asm { and      rax, r10 }
    /* +0x786fc8 */ __asm { cmp      rax, rdx }
    /* +0x786fcb */ __asm { jne      0x786fe7 }
    /* +0x786fcd */ __asm { movzx    eax, byte ptr [rcx + 0x93] }
    /* +0x786fd4 */ __asm { test     al, al }
    /* +0x786fd6 */ __asm { je       0x786fe2 }
    /* +0x786fd8 */ __asm { mov      ecx, eax }
    /* +0x786fda */ __asm { and      rax, r10 }
    /* +0x786fdd */ __asm { cmp      rax, rcx }
    /* +0x786fe0 */ __asm { jne      0x78700c }
    /* +0x786fe2 */ __asm { add      rsp, 0x28 }
    /* +0x786fe6 */ __asm { ret       }
}

// VTable Slot [17] | RVA 0x1c49aa0
void RBX__IntegrityService_vfunc_17_0x1c49aa0(void* self, void* arg1, void* arg2) {
    /* +0x1c49aa0 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x1c49aa5 */ __asm { mov      qword ptr [rsp + 0x10], rsi }
    /* +0x1c49aaa */ __asm { push     rdi }
    /* +0x1c49aab */ __asm { sub      rsp, 0x20 }
    /* +0x1c49aaf */ __asm { mov      rbx, rdx }
    /* +0x1c49ab2 */ __asm { mov      rdi, rcx }
    /* +0x1c49ab5 */ __asm { mov      rsi, qword ptr [rip + 0x64ab15c] }
    /* +0x1c49abc */ __asm { call     0x1c4eb30 }
    /* +0x1c49ac1 */ __asm { test     rax, rax }
    /* +0x1c49ac4 */ __asm { jne      0x1c49ae9 }
    /* +0x1c49ac6 */ __asm { mov      rax, qword ptr gs:[0x58] }
    /* +0x1c49acf */ __asm { mov      edx, 0x28 }
    /* +0x1c49ad4 */ __asm { mov      rcx, qword ptr [rax] }
    /* +0x1c49ad7 */ __asm { mov      eax, dword ptr [rdx + rcx] }
    /* +0x1c49ada */ __asm { cmp      dword ptr [rip + 0x7141650], eax }
    /* +0x1c49ae0 */ __asm { jg       0x1c49b0e }
    /* +0x1c49ae2 */ __asm { lea      rax, [rip + 0x714164f] }
    /* +0x1c49ae9 */ __asm { mov      r8, rax }
    /* +0x1c49aec */ __asm { mov      rdx, rdi }
    /* +0x1c49aef */ __asm { mov      rcx, rbx }
    /* +0x1c49af2 */ __asm { mov      rax, rsi }
    /* +0x1c49af5 */ __asm { call     qword ptr [rip + 0x47f0245] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c49afb */ __asm { mov      rax, rbx }
    /* +0x1c49afe */ __asm { mov      rbx, qword ptr [rsp + 0x30] }
    /* +0x1c49b03 */ __asm { mov      rsi, qword ptr [rsp + 0x38] }
    /* +0x1c49b08 */ __asm { add      rsp, 0x20 }
    /* +0x1c49b0c */ __asm { pop      rdi }
    /* +0x1c49b0d */ __asm { ret       }
}

// VTable Slot [18] | RVA 0x1c3d010
void RBX__IntegrityService_vfunc_18_0x1c3d010(void* self, void* arg1, void* arg2) {
    /* +0x1c3d010 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x1c3d015 */ __asm { push     rbp }
    /* +0x1c3d016 */ __asm { push     rsi }
    /* +0x1c3d017 */ __asm { push     rdi }
    /* +0x1c3d018 */ __asm { sub      rsp, 0x20 }
    /* +0x1c3d01c */ __asm { movzx    ebp, r8b }
    /* +0x1c3d020 */ __asm { mov      rdi, rcx }
    /* +0x1c3d023 */ __asm { movzx    esi, word ptr [rdx + 0x9c] }
    /* +0x1c3d02a */ __asm { cmp      esi, 0xffff }
    /* +0x1c3d030 */ __asm { je       0x1c3d100 }
    /* +0x1c3d036 */ __asm { cmp      esi, 0x40 }
    /* +0x1c3d039 */ __asm { jae      0x1c3d0ed }
    /* +0x1c3d03f */ __asm { mov      ecx, dword ptr [rip + 0x68715d3] }
    /* +0x1c3d045 */ __asm { call     0x4954e70 }
    /* +0x1c3d04a */ __asm { mov      dword ptr [rsp + 0x48], eax }
    /* +0x1c3d04e */ __asm { mov      rcx, rdi }
    /* +0x1c3d051 */ __asm { call     0x9bbf80 }
    /* +0x1c3d056 */ __asm { mov      rbx, rax }
    /* +0x1c3d059 */ __asm { mov      rax, qword ptr [rdi + 0x50] }
    /* +0x1c3d05d */ __asm { and      rax, 0xfffffffffffffff8 }
    /* +0x1c3d061 */ __asm { je       0x1c3d06b }
    /* +0x1c3d063 */ __asm { mov      edi, dword ptr [rax + 0xc4] }
    /* +0x1c3d069 */ __asm { jmp      0x1c3d06d }
    /* +0x1c3d06b */ __asm { xor      edi, edi }
    /* +0x1c3d06d */ __asm { mov      eax, dword ptr [rbx + 0x20] }
    /* +0x1c3d070 */ __asm { nop       }
    /* +0x1c3d071 */ __asm { cmp      eax, edi }
    /* +0x1c3d073 */ __asm { je       0x1c3d0a0 }
    /* +0x1c3d075 */ __asm { mov      eax, 0xffffffff }
    /* +0x1c3d07a */ __asm { xchg     dword ptr [rbx + 0x20], eax }
    /* +0x1c3d07d */ __asm { cmp      eax, -1 }
    /* +0x1c3d080 */ __asm { jne      0x1c3d08d }
    /* +0x1c3d082 */ __asm { mov      eax, dword ptr [rbx + 0x20] }
    /* +0x1c3d085 */ __asm { nop       }
    /* +0x1c3d086 */ __asm { cmp      eax, -1 }
    /* +0x1c3d089 */ __asm { je       0x1c3d082 }
    /* +0x1c3d08b */ __asm { jmp      0x1c3d0a0 }
    /* +0x1c3d08d */ __asm { cmp      qword ptr [rbx + 0x18], 0 }
    /* +0x1c3d092 */ __asm { je       0x1c3d09c }
    /* +0x1c3d094 */ __asm { mov      rcx, rbx }
    /* +0x1c3d097 */ __asm { call     0x1c0da80 }
    /* +0x1c3d09c */ __asm { nop       }
    /* +0x1c3d09d */ __asm { mov      dword ptr [rbx + 0x20], edi }
    /* +0x1c3d0a0 */ __asm { lea      rdx, [rsp + 0x58] }
    /* +0x1c3d0a5 */ __asm { mov      rcx, rbx }
    /* +0x1c3d0a8 */ __asm { call     0x1c4d6a0 }
    /* +0x1c3d0ad */ __asm { mov      rbx, qword ptr [rax] }
    /* +0x1c3d0b0 */ __asm { mov      ecx, dword ptr [rsp + 0x48] }
    /* +0x1c3d0b4 */ __asm { call     0x4954e70 }
    /* +0x1c3d0b9 */ __asm { nop       }
    /* +0x1c3d0ba */ __asm { mov      rcx, rsi }
    /* +0x1c3d0bd */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c3d0c0 */ __asm { test     bpl, bpl }
    /* +0x1c3d0c3 */ __asm { je       0x1c3d0d9 }
    /* +0x1c3d0c5 */ __asm { bts      rax, rcx }
    /* +0x1c3d0c9 */ __asm { mov      qword ptr [rbx], rax }
    /* +0x1c3d0cc */ __asm { mov      rbx, qword ptr [rsp + 0x40] }
    /* +0x1c3d0d1 */ __asm { add      rsp, 0x20 }
    /* +0x1c3d0d5 */ __asm { pop      rdi }
    /* +0x1c3d0d6 */ __asm { pop      rsi }
    /* +0x1c3d0d7 */ __asm { pop      rbp }
    /* +0x1c3d0d8 */ __asm { ret       }
}

// VTable Slot [19] | RVA 0x6daf90
void RBX__IntegrityService_vfunc_19_0x6daf90(void* self, void* arg1, void* arg2) {
    /* +0x6daf90 */ __asm { xor      eax, eax }
    /* +0x6daf92 */ __asm { ret       }
}

// Slot [20] -> shared stub 0x6dc430

// VTable Slot [21] | RVA 0x755a70
void RBX__IntegrityService_vfunc_21_0x755a70(void* self, void* arg1, void* arg2) {
    /* +0x755a70 */ __asm { mov      rax, qword ptr [rcx + 0x68] }
    /* +0x755a74 */ __asm { ret       }
}

// VTable Slot [22] | RVA 0x1c43930
void RBX__IntegrityService_vfunc_22_0x1c43930(void* self, void* arg1, void* arg2) {
    /* +0x1c43930 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x1c43935 */ __asm { mov      qword ptr [rsp + 0x20], rsi }
    /* +0x1c4393a */ __asm { mov      qword ptr [rsp + 0x10], rdx }
    /* +0x1c4393f */ __asm { push     rdi }
    /* +0x1c43940 */ __asm { sub      rsp, 0x30 }
    /* +0x1c43944 */ __asm { mov      rsi, rdx }
    /* +0x1c43947 */ __asm { mov      rdi, rcx }
    /* +0x1c4394a */ __asm { mov      dword ptr [rsp + 0x20], 0 }
    /* +0x1c43952 */ __asm { mov      ecx, dword ptr [rip + 0x686f1c0] }
    /* +0x1c43958 */ __asm { call     0x4954e70 }
    /* +0x1c4395d */ __asm { mov      ebx, eax }
    /* +0x1c4395f */ __asm { mov      dword ptr [rsp + 0x50], eax }
    /* +0x1c43963 */ __asm { mov      qword ptr [rsi], 0 }
    /* +0x1c4396a */ __asm { mov      qword ptr [rsi + 0x10], 0 }
    /* +0x1c43972 */ __asm { mov      qword ptr [rsi + 0x18], 0xf }
    /* +0x1c4397a */ __asm { mov      byte ptr [rsi], 0 }
    /* +0x1c4397d */ __asm { mov      dword ptr [rsp + 0x20], 1 }
    /* +0x1c43985 */ __asm { mov      rdx, rsi }
    /* +0x1c43988 */ __asm { mov      rcx, rdi }
    /* +0x1c4398b */ __asm { call     0x1c43720 }
    /* +0x1c43990 */ __asm { nop       }
    /* +0x1c43991 */ __asm { mov      ecx, ebx }
    /* +0x1c43993 */ __asm { call     0x4954e70 }
    /* +0x1c43998 */ __asm { nop       }
    /* +0x1c43999 */ __asm { mov      rax, rsi }
    /* +0x1c4399c */ __asm { mov      rbx, qword ptr [rsp + 0x40] }
    /* +0x1c439a1 */ __asm { mov      rsi, qword ptr [rsp + 0x58] }
    /* +0x1c439a6 */ __asm { add      rsp, 0x30 }
    /* +0x1c439aa */ __asm { pop      rdi }
    /* +0x1c439ab */ __asm { ret       }
}

// Slot [23] -> shared stub 0x6dc400

// VTable Slot [24] | RVA 0x1c43cb0
void RBX__IntegrityService_vfunc_24_0x1c43cb0(void* self, void* arg1, void* arg2) {
    /* +0x1c43cb0 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x1c43cb5 */ __asm { push     rdi }
    /* +0x1c43cb6 */ __asm { sub      rsp, 0x30 }
    /* +0x1c43cba */ __asm { mov      rdi, rdx }
    /* +0x1c43cbd */ __asm { mov      rbx, rcx }
    /* +0x1c43cc0 */ __asm { mov      rcx, qword ptr [rcx + 0x60] }
    /* +0x1c43cc4 */ __asm { test     rcx, rcx }
    /* +0x1c43cc7 */ __asm { je       0x1c43cdf }
    /* +0x1c43cc9 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c43ccc */ __asm { mov      r8, rdx }
    /* +0x1c43ccf */ __asm { mov      rdx, rbx }
    /* +0x1c43cd2 */ __asm { mov      rax, qword ptr [rax + 0x210] }
    /* +0x1c43cd9 */ __asm { call     qword ptr [rip + 0x47f6061] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c43cdf */ __asm { mov      r9, qword ptr [rbx + 0x60] }
    /* +0x1c43ce3 */ __asm { test     r9, r9 }
    /* +0x1c43ce6 */ __asm { je       0x1c43d48 }
    /* +0x1c43ce8 */ __asm { mov      rax, qword ptr [r9] }
    /* +0x1c43ceb */ __asm { mov      r10, qword ptr [rax + 0x218] }
    /* +0x1c43cf2 */ __asm { mov      rdx, qword ptr [rbx + 0x10] }
    /* +0x1c43cf6 */ __asm { test     rdx, rdx }
    /* +0x1c43cf9 */ __asm { je       0x1c43d53 }
    /* +0x1c43cfb */ __asm { mov      eax, dword ptr [rdx + 8] }
    /* +0x1c43cfe */ __asm { test     eax, eax }
    /* +0x1c43d00 */ __asm { je       0x1c43d53 }
    /* +0x1c43d02 */ __asm { lea      ecx, [rax + 1] }
    /* +0x1c43d05 */ __asm { lock cmpxchg dword ptr [rdx + 8], ecx }
    /* +0x1c43d0a */ __asm { je       0x1c43d12 }
    /* +0x1c43d0c */ __asm { test     eax, eax }
    /* +0x1c43d0e */ __asm { je       0x1c43d53 }
    /* +0x1c43d10 */ __asm { jmp      0x1c43d02 }
    /* +0x1c43d12 */ __asm { mov      rdx, qword ptr [rbx + 8] }
    /* +0x1c43d16 */ __asm { mov      r8, qword ptr [rbx + 0x10] }
    /* +0x1c43d1a */ __asm { mov      qword ptr [rsp + 0x20], rdx }
    /* +0x1c43d1f */ __asm { mov      qword ptr [rsp + 0x28], r8 }
    /* +0x1c43d24 */ __asm { mov      r8, rdi }
    /* +0x1c43d27 */ __asm { lea      rdx, [rsp + 0x20] }
    /* +0x1c43d2c */ __asm { mov      rcx, r9 }
    /* +0x1c43d2f */ __asm { mov      rax, r10 }
    /* +0x1c43d32 */ __asm { call     qword ptr [rip + 0x47f6008] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c43d38 */ __asm { nop       }
    /* +0x1c43d39 */ __asm { mov      rcx, qword ptr [rsp + 0x28] }
    /* +0x1c43d3e */ __asm { test     rcx, rcx }
    /* +0x1c43d41 */ __asm { je       0x1c43d48 }
    /* +0x1c43d43 */ __asm { call     0x6daf40 }
    /* +0x1c43d48 */ __asm { mov      rbx, qword ptr [rsp + 0x40] }
    /* +0x1c43d4d */ __asm { add      rsp, 0x30 }
    /* +0x1c43d51 */ __asm { pop      rdi }
    /* +0x1c43d52 */ __asm { ret       }
}

// Slot [25] -> shared stub 0x6daf90

// VTable Slot [26] | RVA 0x1c3da30
void RBX__IntegrityService_vfunc_26_0x1c3da30(void* self, void* arg1, void* arg2) {
    /* +0x1c3da30 */ __asm { mov      rcx, rdx }
    /* +0x1c3da33 */ __asm { jmp      0x86f130 }
    /* +0x1c3da38 */ __asm { int3      }
}

// VTable Slot [27] | RVA 0x1c439b0
void RBX__IntegrityService_vfunc_27_0x1c439b0(void* self, void* arg1, void* arg2) {
    /* +0x1c439b0 */ __asm { sub      rsp, 0x38 }
    /* +0x1c439b4 */ __asm { mov      r9, rcx }
    /* +0x1c439b7 */ __asm { movzx    r8d, byte ptr [rcx + 0x92] }
    /* +0x1c439bf */ __asm { movzx    eax, r8b }
    /* +0x1c439c3 */ __asm { shr      al, 3 }
    /* +0x1c439c6 */ __asm { and      al, 1 }
    /* +0x1c439c8 */ __asm { cmp      al, dl }
    /* +0x1c439ca */ __asm { je       0x1c43a0f }
    /* +0x1c439cc */ __asm { movzx    eax, r8b }
    /* +0x1c439d0 */ __asm { and      al, 0x17 }
    /* +0x1c439d2 */ __asm { or       r8b, 8 }
    /* +0x1c439d6 */ __asm { movzx    ecx, r8b }
    /* +0x1c439da */ __asm { movzx    eax, al }
    /* +0x1c439dd */ __asm { test     dl, dl }
    /* +0x1c439df */ __asm { cmove    ecx, eax }
    /* +0x1c439e2 */ __asm { mov      byte ptr [r9 + 0x92], cl }
    /* +0x1c439e9 */ __asm { lea      rax, [rip + 0x52a5888] }
    /* +0x1c439f0 */ __asm { mov      qword ptr [rsp + 0x20], rax }
    /* +0x1c439f5 */ __asm { lea      rax, [rip + 0x69dbf74] }
    /* +0x1c439fc */ __asm { mov      qword ptr [rsp + 0x28], rax }
    /* +0x1c43a01 */ __asm { lea      rdx, [rsp + 0x20] }
    /* +0x1c43a06 */ __asm { mov      rcx, r9 }
    /* +0x1c43a09 */ __asm { call     0x1c1f220 }
    /* +0x1c43a0e */ __asm { nop       }
    /* +0x1c43a0f */ __asm { add      rsp, 0x38 }
    /* +0x1c43a13 */ __asm { ret       }
}

// VTable Slot [28] | RVA 0x1c451b0
void RBX__IntegrityService_vfunc_28_0x1c451b0(void* self, void* arg1, void* arg2) {
    /* +0x1c451b0 */ __asm { sub      rsp, 0x28 }
    /* +0x1c451b4 */ __asm { lea      rax, [rip + 0x69db4a5] }
    /* +0x1c451bb */ __asm { cmp      rdx, rax }
    /* +0x1c451be */ __asm { je       0x1c45202 }
    /* +0x1c451c0 */ __asm { lea      rax, [rip + 0x69db3c9] }
    /* +0x1c451c7 */ __asm { cmp      rdx, rax }
    /* +0x1c451ca */ __asm { je       0x1c45202 }
    /* +0x1c451cc */ __asm { lea      rax, [rip + 0x69db55d] }
    /* +0x1c451d3 */ __asm { cmp      rdx, rax }
    /* +0x1c451d6 */ __asm { je       0x1c45202 }
    /* +0x1c451d8 */ __asm { lea      rax, [rip + 0x69db621] }
    /* +0x1c451df */ __asm { cmp      rdx, rax }
    /* +0x1c451e2 */ __asm { jne      0x1c451fb }
    /* +0x1c451e4 */ __asm { mov      rax, qword ptr [rip + 0x64af9f5] }
    /* +0x1c451eb */ __asm { call     qword ptr [rip + 0x47f4b4f] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c451f1 */ __asm { test     al, al }
    /* +0x1c451f3 */ __asm { sete     al }
    /* +0x1c451f6 */ __asm { add      rsp, 0x28 }
    /* +0x1c451fa */ __asm { ret       }
}

// Slot [29] -> shared stub 0x6dc430

// VTable Slot [30] | RVA 0x786f90
void RBX__IntegrityService_vfunc_30_0x786f90(void* self, void* arg1, void* arg2) {
    /* +0x786f90 */ __asm { mov      rax, qword ptr [rcx + 0x18] }
    /* +0x786f94 */ __asm { mov      eax, dword ptr [rax + 0x1c4] }
    /* +0x786f9a */ __asm { shr      eax, 3 }
    /* +0x786f9d */ __asm { not      al }
    /* +0x786f9f */ __asm { and      al, 1 }
    /* +0x786fa1 */ __asm { ret       }
}

// VTable Slot [31] | RVA 0x1c3d9d0
void RBX__IntegrityService_vfunc_31_0x1c3d9d0(void* self, void* arg1, void* arg2) {
    /* +0x1c3d9d0 */ __asm { mov      qword ptr [rsp + 0x10], rdx }
    /* +0x1c3d9d5 */ __asm { push     rbx }
    /* +0x1c3d9d6 */ __asm { sub      rsp, 0x20 }
    /* +0x1c3d9da */ __asm { mov      rbx, rdx }
    /* +0x1c3d9dd */ __asm { xorps    xmm0, xmm0 }
    /* +0x1c3d9e0 */ __asm { mov      rcx, rbx }
    /* +0x1c3d9e3 */ __asm { movss    dword ptr [rsp + 0x38], xmm0 }
    /* +0x1c3d9e9 */ __asm { lea      rdx, [rsp + 0x38] }
    /* +0x1c3d9ee */ __asm { call     0x819940 }
    /* +0x1c3d9f3 */ __asm { mov      rax, rbx }
    /* +0x1c3d9f6 */ __asm { add      rsp, 0x20 }
    /* +0x1c3d9fa */ __asm { pop      rbx }
    /* +0x1c3d9fb */ __asm { ret       }
}

// VTable Slot [32] | RVA 0x1c3da00
void RBX__IntegrityService_vfunc_32_0x1c3da00(void* self, void* arg1, void* arg2) {
    /* +0x1c3da00 */ __asm { mov      qword ptr [rsp + 0x10], rdx }
    /* +0x1c3da05 */ __asm { push     rbx }
    /* +0x1c3da06 */ __asm { sub      rsp, 0x20 }
    /* +0x1c3da0a */ __asm { mov      rbx, rdx }
    /* +0x1c3da0d */ __asm { xorps    xmm0, xmm0 }
    /* +0x1c3da10 */ __asm { mov      rcx, rbx }
    /* +0x1c3da13 */ __asm { movss    dword ptr [rsp + 0x38], xmm0 }
    /* +0x1c3da19 */ __asm { lea      rdx, [rsp + 0x38] }
    /* +0x1c3da1e */ __asm { call     0x1c4b270 }
    /* +0x1c3da23 */ __asm { mov      rax, rbx }
    /* +0x1c3da26 */ __asm { add      rsp, 0x20 }
    /* +0x1c3da2a */ __asm { pop      rbx }
    /* +0x1c3da2b */ __asm { ret       }
}

// Slot [33] -> shared stub 0x6daf90

// VTable Slot [34] | RVA 0x1c47ef0
void RBX__IntegrityService_vfunc_34_0x1c47ef0(void* self, void* arg1, void* arg2) {
    /* +0x1c47ef0 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x1c47ef5 */ __asm { push     rdi }
    /* +0x1c47ef6 */ __asm { sub      rsp, 0x50 }
    /* +0x1c47efa */ __asm { mov      rdi, rcx }
    /* +0x1c47efd */ __asm { xorps    xmm0, xmm0 }
    /* +0x1c47f00 */ __asm { movdqu   xmmword ptr [rsp + 0x20], xmm0 }
    /* +0x1c47f06 */ __asm { mov      ecx, 0x18 }
    /* +0x1c47f0b */ __asm { call     0x4956040 }
    /* +0x1c47f10 */ __asm { mov      rbx, rax }
    /* +0x1c47f13 */ __asm { test     rax, rax }
    /* +0x1c47f16 */ __asm { je       0x1c47fbb }
    /* +0x1c47f1c */ __asm { xor      eax, eax }
    /* +0x1c47f1e */ __asm { mov      qword ptr [rbx], rax }
    /* +0x1c47f21 */ __asm { mov      qword ptr [rbx + 8], rax }
    /* +0x1c47f25 */ __asm { mov      qword ptr [rbx + 0x10], rax }
    /* +0x1c47f29 */ __asm { mov      qword ptr [rsp + 0x68], rbx }
    /* +0x1c47f2e */ __asm { lea      ecx, [rax + 0x18] }
    /* +0x1c47f31 */ __asm { call     0x4956040 }
    /* +0x1c47f36 */ __asm { test     rax, rax }
    /* +0x1c47f39 */ __asm { je       0x1c47f9f }
    /* +0x1c47f3b */ __asm { mov      dword ptr [rax + 8], 1 }
    /* +0x1c47f42 */ __asm { mov      dword ptr [rax + 0xc], 1 }
    /* +0x1c47f49 */ __asm { lea      rcx, [rip + 0x53ef320] }
    /* +0x1c47f50 */ __asm { mov      qword ptr [rax], rcx }
    /* +0x1c47f53 */ __asm { mov      qword ptr [rax + 0x10], rbx }
    /* +0x1c47f57 */ __asm { mov      qword ptr [rsp + 0x20], rbx }
    /* +0x1c47f5c */ __asm { mov      rcx, qword ptr [rsp + 0x28] }
    /* +0x1c47f61 */ __asm { mov      qword ptr [rsp + 0x28], rax }
    /* +0x1c47f66 */ __asm { test     rcx, rcx }
    /* +0x1c47f69 */ __asm { je       0x1c47f70 }
    /* +0x1c47f6b */ __asm { call     0x6daf40 }
    /* +0x1c47f70 */ __asm { mov      r9b, 1 }
    /* +0x1c47f73 */ __asm { lea      r8, [rsp + 0x20] }
    /* +0x1c47f78 */ __asm { movzx    edx, r9b }
    /* +0x1c47f7c */ __asm { mov      rcx, rdi }
    /* +0x1c47f7f */ __asm { call     0x1c48170 }
    /* +0x1c47f84 */ __asm { nop       }
    /* +0x1c47f85 */ __asm { mov      rcx, qword ptr [rsp + 0x28] }
    /* +0x1c47f8a */ __asm { test     rcx, rcx }
    /* +0x1c47f8d */ __asm { je       0x1c47f94 }
    /* +0x1c47f8f */ __asm { call     0x6daf40 }
    /* +0x1c47f94 */ __asm { mov      rbx, qword ptr [rsp + 0x60] }
    /* +0x1c47f99 */ __asm { add      rsp, 0x50 }
    /* +0x1c47f9d */ __asm { pop      rdi }
    /* +0x1c47f9e */ __asm { ret       }
}

// VTable Slot [35] | RVA 0x1c476e0
void RBX__IntegrityService_vfunc_35_0x1c476e0(void* self, void* arg1, void* arg2) {
    /* +0x1c476e0 */ __asm { push     rbx }
    /* +0x1c476e2 */ __asm { sub      rsp, 0x40 }
    /* +0x1c476e6 */ __asm { mov      rbx, rcx }
    /* +0x1c476e9 */ __asm { lea      rax, [rip + 0x53efea0] }
    /* +0x1c476f0 */ __asm { mov      qword ptr [rsp + 0x28], rax }
    /* +0x1c476f5 */ __asm { lea      rax, [rsp + 0x28] }
    /* +0x1c476fa */ __asm { mov      qword ptr [rsp + 0x30], rax }
    /* +0x1c476ff */ __asm { mov      dword ptr [rsp + 0x20], 8 }
    /* +0x1c47707 */ __asm { mov      rax, qword ptr [rcx + 0x48] }
    /* +0x1c4770b */ __asm { test     rax, rax }
    /* +0x1c4770e */ __asm { je       0x1c47742 }
    /* +0x1c47710 */ __asm { cmp      qword ptr [rax + 8], 0 }
    /* +0x1c47715 */ __asm { je       0x1c47742 }
    /* +0x1c47717 */ __asm { mov      edx, 1 }
    /* +0x1c4771c */ __asm { mov      rcx, qword ptr [rip + 0x6887ce5] }
    /* +0x1c47723 */ __asm { call     0xc700 }
    /* +0x1c47728 */ __asm { cmp      qword ptr [rax], 0 }
    /* +0x1c4772c */ __asm { jne      0x1c47748 }
    /* +0x1c4772e */ __asm { lea      r8, [rsp + 0x30] }
    /* +0x1c47733 */ __asm { lea      rdx, [rsp + 0x20] }
    /* +0x1c47738 */ __asm { mov      rcx, qword ptr [rbx + 0x48] }
    /* +0x1c4773c */ __asm { call     0x7d7f00 }
    /* +0x1c47741 */ __asm { nop       }
    /* +0x1c47742 */ __asm { add      rsp, 0x40 }
    /* +0x1c47746 */ __asm { pop      rbx }
    /* +0x1c47747 */ __asm { ret       }
}

// Slot [36] -> shared stub 0x6dc430

// Slot [37] -> shared stub 0x6dc400

// Slot [38] -> shared stub 0x6dc400

// VTable Slot [39] | RVA 0x1c42f30
void RBX__IntegrityService_vfunc_39_0x1c42f30(void* self, void* arg1, void* arg2) {
    /* +0x1c42f30 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x1c42f35 */ __asm { mov      qword ptr [rsp + 0x10], rsi }
    /* +0x1c42f3a */ __asm { push     rdi }
    /* +0x1c42f3b */ __asm { sub      rsp, 0x30 }
    /* +0x1c42f3f */ __asm { mov      rax, qword ptr [rdx] }
    /* +0x1c42f42 */ __asm { xor      edi, edi }
    /* +0x1c42f44 */ __asm { movaps   xmmword ptr [rsp + 0x20], xmm6 }
    /* +0x1c42f49 */ __asm { mov      rsi, r8 }
    /* +0x1c42f4c */ __asm { movaps   xmm6, xmm3 }
    /* +0x1c42f4f */ __asm { mov      rbx, rdx }
    /* +0x1c42f52 */ __asm { cmp      dword ptr [rax + 8], edi }
    /* +0x1c42f55 */ __asm { jle      0x1c42f8d }
    /* +0x1c42f57 */ __asm { nop      word ptr [rax + rax] }
    /* +0x1c42f60 */ __asm { movsxd   rax, dword ptr [rbx + 8] }
    /* +0x1c42f64 */ __asm { movaps   xmm1, xmm6 }
    /* +0x1c42f67 */ __asm { mov      r9, rax }
    /* +0x1c42f6a */ __asm { inc      eax }
    /* +0x1c42f6c */ __asm { mov      dword ptr [rbx + 8], eax }
    /* +0x1c42f6f */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c42f72 */ __asm { mov      rcx, qword ptr [rax] }
    /* +0x1c42f75 */ __asm { mulss    xmm1, dword ptr [rcx + r9*4] }
    /* +0x1c42f7b */ __asm { mov      rcx, qword ptr [rsi] }
    /* +0x1c42f7e */ __asm { call     0x1b95070 }
    /* +0x1c42f83 */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c42f86 */ __asm { inc      edi }
    /* +0x1c42f88 */ __asm { cmp      edi, dword ptr [rax + 8] }
    /* +0x1c42f8b */ __asm { jl       0x1c42f60 }
    /* +0x1c42f8d */ __asm { mov      rbx, qword ptr [rsp + 0x40] }
    /* +0x1c42f92 */ __asm { mov      rsi, qword ptr [rsp + 0x48] }
    /* +0x1c42f97 */ __asm { movaps   xmm6, xmmword ptr [rsp + 0x20] }
    /* +0x1c42f9c */ __asm { add      rsp, 0x30 }
    /* +0x1c42fa0 */ __asm { pop      rdi }
    /* +0x1c42fa1 */ __asm { ret       }
}

// VTable Slot [40] | RVA 0x1c42650
void RBX__IntegrityService_vfunc_40_0x1c42650(void* self, void* arg1, void* arg2) {
    /* +0x1c42650 */ __asm { push     rbx }
    /* +0x1c42652 */ __asm { sub      rsp, 0x20 }
    /* +0x1c42656 */ __asm { mov      r8d, 2 }
    /* +0x1c4265c */ __asm { mov      rbx, rdx }
    /* +0x1c4265f */ __asm { call     0x1c40e70 }
    /* +0x1c42664 */ __asm { mov      rax, rbx }
    /* +0x1c42667 */ __asm { add      rsp, 0x20 }
    /* +0x1c4266b */ __asm { pop      rbx }
    /* +0x1c4266c */ __asm { ret       }
}

// VTable Slot [41] | RVA 0x1c3bf00
void RBX__IntegrityService_vfunc_41_0x1c3bf00(void* self, void* arg1, void* arg2) {
    /* +0x1c3bf00 */ __asm { mov      qword ptr [rsp + 0x18], rbx }
    /* +0x1c3bf05 */ __asm { push     rdi }
    /* +0x1c3bf06 */ __asm { sub      rsp, 0x40 }
    /* +0x1c3bf0a */ __asm { mov      edx, 4 }
    /* +0x1c3bf0f */ __asm { mov      dword ptr [rsp + 0x50], edx }
    /* +0x1c3bf13 */ __asm { cmp      qword ptr [rcx + 0x70], 0 }
    /* +0x1c3bf18 */ __asm { je       0x1c3bfed }
    /* +0x1c3bf1e */ __asm { mov      rax, qword ptr [rcx + 0x78] }
    /* +0x1c3bf22 */ __asm { test     rax, rax }
    /* +0x1c3bf25 */ __asm { je       0x1c3bf2f }
    /* +0x1c3bf27 */ __asm { lock inc dword ptr [rax + 8] }
    /* +0x1c3bf2b */ __asm { mov      edx, dword ptr [rsp + 0x50] }
    /* +0x1c3bf2f */ __asm { mov      rax, qword ptr [rcx + 0x70] }
    /* +0x1c3bf33 */ __asm { mov      qword ptr [rsp + 0x30], rax }
    /* +0x1c3bf38 */ __asm { mov      rcx, qword ptr [rcx + 0x78] }
    /* +0x1c3bf3c */ __asm { mov      qword ptr [rsp + 0x38], rcx }
    /* +0x1c3bf41 */ __asm { mov      rbx, qword ptr [rax] }
    /* +0x1c3bf44 */ __asm { mov      rdi, qword ptr [rax + 8] }
    /* +0x1c3bf48 */ __asm { cmp      rbx, rdi }
    /* +0x1c3bf4b */ __asm { je       0x1c3bf98 }
    /* +0x1c3bf4d */ __asm { nop      dword ptr [rax] }
    /* +0x1c3bf50 */ __asm { xorps    xmm0, xmm0 }
    /* +0x1c3bf53 */ __asm { movdqu   xmmword ptr [rsp + 0x20], xmm0 }
    /* +0x1c3bf59 */ __asm { mov      rax, qword ptr [rbx + 8] }
    /* +0x1c3bf5d */ __asm { test     rax, rax }
    /* +0x1c3bf60 */ __asm { je       0x1c3bf66 }
    /* +0x1c3bf62 */ __asm { lock inc dword ptr [rax + 8] }
    /* +0x1c3bf66 */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c3bf69 */ __asm { mov      qword ptr [rsp + 0x20], rax }
    /* +0x1c3bf6e */ __asm { mov      rax, qword ptr [rbx + 8] }
    /* +0x1c3bf72 */ __asm { mov      qword ptr [rsp + 0x28], rax }
    /* +0x1c3bf77 */ __asm { lea      rdx, [rsp + 0x50] }
    /* +0x1c3bf7c */ __asm { lea      rcx, [rsp + 0x20] }
    /* +0x1c3bf81 */ __asm { call     0x1c3beb0 }
    /* +0x1c3bf86 */ __asm { add      rbx, 0x10 }
    /* +0x1c3bf8a */ __asm { cmp      rbx, rdi }
    /* +0x1c3bf8d */ __asm { jne      0x1c3bf50 }
    /* +0x1c3bf8f */ __asm { mov      edx, dword ptr [rsp + 0x50] }
    /* +0x1c3bf93 */ __asm { mov      rcx, qword ptr [rsp + 0x38] }
    /* +0x1c3bf98 */ __asm { test     rcx, rcx }
    /* +0x1c3bf9b */ __asm { je       0x1c3bfed }
    /* +0x1c3bf9d */ __asm { mov      edi, 0xffffffff }
    /* +0x1c3bfa2 */ __asm { mov      eax, edi }
    /* +0x1c3bfa4 */ __asm { lock xadd dword ptr [rcx + 8], eax }
    /* +0x1c3bfa9 */ __asm { cmp      eax, 1 }
    /* +0x1c3bfac */ __asm { jne      0x1c3bfde }
    /* +0x1c3bfae */ __asm { mov      rbx, qword ptr [rsp + 0x38] }
    /* +0x1c3bfb3 */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c3bfb6 */ __asm { mov      rcx, rbx }
    /* +0x1c3bfb9 */ __asm { mov      rax, qword ptr [rax] }
    /* +0x1c3bfbc */ __asm { call     qword ptr [rip + 0x47fdd7e] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c3bfc2 */ __asm { lock xadd dword ptr [rbx + 0xc], edi }
    /* +0x1c3bfc7 */ __asm { cmp      edi, 1 }
    /* +0x1c3bfca */ __asm { jne      0x1c3bfde }
    /* +0x1c3bfcc */ __asm { mov      rcx, qword ptr [rsp + 0x38] }
    /* +0x1c3bfd1 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c3bfd4 */ __asm { mov      rax, qword ptr [rax + 8] }
    /* +0x1c3bfd8 */ __asm { call     qword ptr [rip + 0x47fdd62] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c3bfde */ __asm { mov      eax, dword ptr [rsp + 0x50] }
    /* +0x1c3bfe2 */ __asm { mov      rbx, qword ptr [rsp + 0x60] }
    /* +0x1c3bfe7 */ __asm { add      rsp, 0x40 }
    /* +0x1c3bfeb */ __asm { pop      rdi }
    /* +0x1c3bfec */ __asm { ret       }
}

// VTable Slot [42] | RVA 0x786f70
void RBX__IntegrityService_vfunc_42_0x786f70(void* self, void* arg1, void* arg2) {
    /* +0x786f70 */ __asm { mov      rcx, qword ptr [rcx + 0x60] }
    /* +0x786f74 */ __asm { test     rcx, rcx }
    /* +0x786f77 */ __asm { jne      0x786f7c }
    /* +0x786f79 */ __asm { mov      al, 1 }
    /* +0x786f7b */ __asm { ret       }
}

// Slot [43] -> shared stub 0x6dc430

// VTable Slot [44] | RVA 0x306aef0
// [Undecrypted .text page at RVA 0x306aef0 — run with --watch while playing to capture]
void RBX__IntegrityService_vfunc_44_0x306aef0(/* encrypted page */);

// VTable Slot [45] | RVA 0x1c3be50
void RBX__IntegrityService_vfunc_45_0x1c3be50(void* self, void* arg1, void* arg2) {
    /* +0x1c3be50 */ __asm { push     rbx }
    /* +0x1c3be52 */ __asm { sub      rsp, 0x20 }
    /* +0x1c3be56 */ __asm { mov      rbx, rdx }
    /* +0x1c3be59 */ __asm { mov      rdx, qword ptr [rcx + 0x50] }
    /* +0x1c3be5d */ __asm { and      rdx, 0xfffffffffffffff8 }
    /* +0x1c3be61 */ __asm { mov      rcx, rbx }
    /* +0x1c3be64 */ __asm { call     0xe294e0 }
    /* +0x1c3be69 */ __asm { mov      rax, rbx }
    /* +0x1c3be6c */ __asm { add      rsp, 0x20 }
    /* +0x1c3be70 */ __asm { pop      rbx }
    /* +0x1c3be71 */ __asm { ret       }
}

// VTable Slot [46] | RVA 0x27c3d90
void RBX__IntegrityService_vfunc_46_0x27c3d90(void* self, void* arg1, void* arg2) {
    /* +0x27c3d90 */ __asm { jmp      0x27c3cd0 }
    /* +0x27c3d95 */ __asm { int3      }
}

// VTable Slot [47] | RVA 0x1c3c280
void RBX__IntegrityService_vfunc_47_0x1c3c280(void* self, void* arg1, void* arg2) {
    /* +0x1c3c280 */ __asm { mov      qword ptr [rsp + 0x10], rbx }
    /* +0x1c3c285 */ __asm { mov      qword ptr [rsp + 0x18], rbp }
    /* +0x1c3c28a */ __asm { push     rsi }
    /* +0x1c3c28b */ __asm { sub      rsp, 0x20 }
    /* +0x1c3c28f */ __asm { mov      rbx, qword ptr [rcx + 0x70] }
    /* +0x1c3c293 */ __asm { mov      rsi, r8 }
    /* +0x1c3c296 */ __asm { mov      rbp, rdx }
    /* +0x1c3c299 */ __asm { test     rbx, rbx }
    /* +0x1c3c29c */ __asm { je       0x1c3c2d7 }
    /* +0x1c3c29e */ __asm { mov      qword ptr [rsp + 0x30], rdi }
    /* +0x1c3c2a3 */ __asm { mov      rdi, qword ptr [rbx + 8] }
    /* +0x1c3c2a7 */ __asm { mov      rbx, qword ptr [rbx] }
    /* +0x1c3c2aa */ __asm { cmp      rbx, rdi }
    /* +0x1c3c2ad */ __asm { je       0x1c3c2d2 }
    /* +0x1c3c2af */ __asm { nop       }
    /* +0x1c3c2b0 */ __asm { mov      rcx, qword ptr [rbx] }
    /* +0x1c3c2b3 */ __asm { mov      r8, rsi }
    /* +0x1c3c2b6 */ __asm { mov      rdx, rbp }
    /* +0x1c3c2b9 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c3c2bc */ __asm { mov      rax, qword ptr [rax + 0x178] }
    /* +0x1c3c2c3 */ __asm { call     qword ptr [rip + 0x47fda77] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c3c2c9 */ __asm { add      rbx, 0x10 }
    /* +0x1c3c2cd */ __asm { cmp      rbx, rdi }
    /* +0x1c3c2d0 */ __asm { jne      0x1c3c2b0 }
    /* +0x1c3c2d2 */ __asm { mov      rdi, qword ptr [rsp + 0x30] }
    /* +0x1c3c2d7 */ __asm { mov      rbx, qword ptr [rsp + 0x38] }
    /* +0x1c3c2dc */ __asm { mov      rbp, qword ptr [rsp + 0x40] }
    /* +0x1c3c2e1 */ __asm { add      rsp, 0x20 }
    /* +0x1c3c2e5 */ __asm { pop      rsi }
    /* +0x1c3c2e6 */ __asm { ret       }
}

// Slot [48] -> shared stub 0x6dc400

// VTable Slot [49] | RVA 0x72fc60
void RBX__IntegrityService_vfunc_49_0x72fc60(void* self, void* arg1, void* arg2) {
    /* +0x72fc60 */ __asm { mov      eax, 0xffffffff }
    /* +0x72fc65 */ __asm { ret       }
}

// Slot [50] -> shared stub 0x6dc430

// Slot [51] -> shared stub 0x6dc400

// Slot [52] -> shared stub 0x6dc400

// Slot [53] -> shared stub 0x6dc400

// VTable Slot [54] | RVA 0x1c3c230
void RBX__IntegrityService_vfunc_54_0x1c3c230(void* self, void* arg1, void* arg2) {
    /* +0x1c3c230 */ __asm { sub      rsp, 0x28 }
    /* +0x1c3c234 */ __asm { mov      rcx, qword ptr [rcx + 0x60] }
    /* +0x1c3c238 */ __asm { test     rcx, rcx }
    /* +0x1c3c23b */ __asm { je       0x1c3c275 }
    /* +0x1c3c23d */ __asm { mov      rax, qword ptr [r8 + 0x60] }
    /* +0x1c3c241 */ __asm { cmp      rcx, rax }
    /* +0x1c3c244 */ __asm { je       0x1c3c275 }
    /* +0x1c3c246 */ __asm { test     rax, rax }
    /* +0x1c3c249 */ __asm { je       0x1c3c25d }
    /* +0x1c3c24b */ __asm { mov      rdx, qword ptr [rax + 0x60] }
    /* +0x1c3c24f */ __asm { cmp      rdx, rcx }
    /* +0x1c3c252 */ __asm { je       0x1c3c275 }
    /* +0x1c3c254 */ __asm { call     0xd7c8e0 }
    /* +0x1c3c259 */ __asm { test     al, al }
    /* +0x1c3c25b */ __asm { jne      0x1c3c275 }
    /* +0x1c3c25d */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c3c260 */ __asm { mov      rdx, rcx }
    /* +0x1c3c263 */ __asm { mov      rax, qword ptr [rax + 0x1b0] }
    /* +0x1c3c26a */ __asm { add      rsp, 0x28 }
    /* +0x1c3c26e */ __asm { jmp      qword ptr [rip + 0x47fdacb] }
    /* +0x1c3c275 */ __asm { add      rsp, 0x28 }
    /* +0x1c3c279 */ __asm { ret       }
}

// Slot [55] -> shared stub 0x6dc430

// Slot [56] -> shared stub 0x6dc430

// Slot [57] -> shared stub 0x6dc430

// VTable Slot [58] | RVA 0xd03a10
// [Undecrypted .text page at RVA 0xd03a10 — run with --watch while playing to capture]
void RBX__IntegrityService_vfunc_58_0xd03a10(/* encrypted page */);

// VTable Slot [59] | RVA 0x1c49400
void RBX__IntegrityService_vfunc_59_0x1c49400(void* self, void* arg1, void* arg2) {
    /* +0x1c49400 */ __asm { mov      qword ptr [rsp + 0x18], rbx }
    /* +0x1c49405 */ __asm { push     rbp }
    /* +0x1c49406 */ __asm { push     rsi }
    /* +0x1c49407 */ __asm { push     rdi }
    /* +0x1c49408 */ __asm { push     r12 }
    /* +0x1c4940a */ __asm { push     r13 }
    /* +0x1c4940c */ __asm { push     r14 }
    /* +0x1c4940e */ __asm { push     r15 }
    /* +0x1c49410 */ __asm { lea      rbp, [rsp - 0x40] }
    /* +0x1c49415 */ __asm { sub      rsp, 0x140 }
    /* +0x1c4941c */ __asm { mov      r12, rdx }
    /* +0x1c4941f */ __asm { mov      qword ptr [rsp + 0x28], rdx }
    /* +0x1c49424 */ __asm { mov      r13, rcx }
    /* +0x1c49427 */ __asm { xor      esi, esi }
    /* +0x1c49429 */ __asm { mov      edi, esi }
    /* +0x1c4942b */ __asm { mov      dword ptr [rsp + 0x20], esi }
    /* +0x1c4942f */ __asm { mov      rax, qword ptr [rdx + 0x10] }
    /* +0x1c49433 */ __asm { test     rax, rax }
    /* +0x1c49436 */ __asm { je       0x1c49485 }
    /* +0x1c49438 */ __asm { mov      rdx, qword ptr [rcx + 0x50] }
    /* +0x1c4943c */ __asm { mov      rax, qword ptr [rax + 0x50] }
    /* +0x1c49440 */ __asm { and      rax, 0xfffffffffffffff8 }
    /* +0x1c49444 */ __asm { and      rdx, 0xfffffffffffffff8 }
    /* +0x1c49448 */ __asm { je       0x1c49485 }
    /* +0x1c4944a */ __asm { test     rax, rax }
    /* +0x1c4944d */ __asm { je       0x1c49485 }
    /* +0x1c4944f */ __asm { cmp      rdx, rax }
    /* +0x1c49452 */ __asm { je       0x1c49485 }
    /* +0x1c49454 */ __asm { xorps    xmm0, xmm0 }
    /* +0x1c49457 */ __asm { xor      eax, eax }
    /* +0x1c49459 */ __asm { movups   xmmword ptr [rbp - 8], xmm0 }
    /* +0x1c4945d */ __asm { mov      qword ptr [rbp + 8], rax }
    /* +0x1c49461 */ __asm { lea      rcx, [rip + 0x53eddc8] }
    /* +0x1c49468 */ __asm { and      rcx, 0xfffffffffffffffb }
    /* +0x1c4946c */ __asm { or       rcx, 2 }
    /* +0x1c49470 */ __asm { mov      rax, rcx }
    /* +0x1c49473 */ __asm { and      rax, 0xfffffffffffffffc }
    /* +0x1c49477 */ __asm { test     rax, -8 }
    /* +0x1c4947d */ __asm { cmovne   rcx, rsi }
    /* +0x1c49481 */ __asm { mov      qword ptr [rbp + 0x10], rcx }
    /* +0x1c49485 */ __asm { mov      rcx, r13 }
    /* +0x1c49488 */ __asm { mov      rax, qword ptr [rip + 0x64ab7a1] }
    /* +0x1c4948f */ __asm { call     qword ptr [rip + 0x47f08ab] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c49495 */ __asm { mov      r14d, 0xffffffff }
    /* +0x1c4949b */ __asm { cmp      qword ptr [r13 + 0x70], 0 }
    /* +0x1c494a0 */ __asm { je       0x1c49538 }
    /* +0x1c494a6 */ __asm { mov      rax, qword ptr [r13 + 0x78] }
    /* +0x1c494aa */ __asm { test     rax, rax }
    /* +0x1c494ad */ __asm { je       0x1c494b3 }
    /* +0x1c494af */ __asm { lock inc dword ptr [rax + 8] }
    /* +0x1c494b3 */ __asm { mov      rsi, qword ptr [r13 + 0x70] }
    /* +0x1c494b7 */ __asm { mov      qword ptr [rsp + 0x60], rsi }
    /* +0x1c494bc */ __asm { mov      r15, qword ptr [r13 + 0x78] }
    /* +0x1c494c0 */ __asm { mov      qword ptr [rsp + 0x68], r15 }
    /* +0x1c494c5 */ __asm { mov      rbx, qword ptr [rsi] }
    /* +0x1c494c8 */ __asm { cmp      rbx, qword ptr [rsi + 8] }
    /* +0x1c494cc */ __asm { je       0x1c494f0 }
    /* +0x1c494ce */ __asm { nop       }
    /* +0x1c494d0 */ __asm { mov      rcx, qword ptr [rbx] }
    /* +0x1c494d3 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c494d6 */ __asm { mov      rdx, r12 }
    /* +0x1c494d9 */ __asm { mov      rax, qword ptr [rax + 0x1d8] }
    /* +0x1c494e0 */ __asm { call     qword ptr [rip + 0x47f085a] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c494e6 */ __asm { add      rbx, 0x10 }
    /* +0x1c494ea */ __asm { cmp      rbx, qword ptr [rsi + 8] }
    /* +0x1c494ee */ __asm { jne      0x1c494d0 }
    /* +0x1c494f0 */ __asm { test     r15, r15 }
    /* +0x1c494f3 */ __asm { je       0x1c49536 }
    /* +0x1c494f5 */ __asm { mov      eax, r14d }
    /* +0x1c494f8 */ __asm { lock xadd dword ptr [r15 + 8], eax }
    /* +0x1c494fe */ __asm { cmp      eax, 1 }
    /* +0x1c49501 */ __asm { jne      0x1c49536 }
    /* +0x1c49503 */ __asm { mov      rbx, qword ptr [rsp + 0x68] }
    /* +0x1c49508 */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c4950b */ __asm { mov      rcx, rbx }
    /* +0x1c4950e */ __asm { mov      rax, qword ptr [rax] }
    /* +0x1c49511 */ __asm { call     qword ptr [rip + 0x47f0829] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c49517 */ __asm { mov      eax, r14d }
    /* +0x1c4951a */ __asm { lock xadd dword ptr [rbx + 0xc], eax }
    /* +0x1c4951f */ __asm { cmp      eax, 1 }
    /* +0x1c49522 */ __asm { jne      0x1c49536 }
    /* +0x1c49524 */ __asm { mov      rcx, qword ptr [rsp + 0x68] }
    /* +0x1c49529 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c4952c */ __asm { mov      rax, qword ptr [rax + 8] }
    /* +0x1c49530 */ __asm { call     qword ptr [rip + 0x47f080a] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c49536 */ __asm { xor      esi, esi }
    /* +0x1c49538 */ __asm { mov      rax, qword ptr [r13 + 0x48] }
    /* +0x1c4953c */ __asm { test     rax, rax }
    /* +0x1c4953f */ __asm { je       0x1c4982f }
    /* +0x1c49545 */ __asm { cmp      qword ptr [rax + 8], 0 }
    /* +0x1c4954a */ __asm { je       0x1c4982f }
    /* +0x1c49550 */ __asm { mov      rbx, qword ptr [r12 + 0x10] }
    /* +0x1c49555 */ __asm { test     rbx, rbx }
    /* +0x1c49558 */ __asm { je       0x1c495b3 }
    /* +0x1c4955a */ __asm { mov      rdx, qword ptr [rbx + 0x10] }
    /* +0x1c4955e */ __asm { test     rdx, rdx }
    /* +0x1c49561 */ __asm { je       0x1c49a7b }
    /* +0x1c49567 */ __asm { mov      eax, dword ptr [rdx + 8] }
    /* +0x1c4956a */ __asm { test     eax, eax }
    /* +0x1c4956c */ __asm { je       0x1c49a7b }
    /* +0x1c49572 */ __asm { lea      ecx, [rax + 1] }
    /* +0x1c49575 */ __asm { lock cmpxchg dword ptr [rdx + 8], ecx }
    /* +0x1c4957a */ __asm { je       0x1c49586 }
    /* +0x1c4957c */ __asm { test     eax, eax }
    /* +0x1c4957e */ __asm { je       0x1c49a7b }
    /* +0x1c49584 */ __asm { jmp      0x1c49572 }
    /* +0x1c49586 */ __asm { mov      r15, qword ptr [rbx + 8] }
    /* +0x1c4958a */ __asm { mov      rbx, qword ptr [rbx + 0x10] }
    /* +0x1c4958e */ __asm { mov      qword ptr [rsp + 0x38], r15 }
    /* +0x1c49593 */ __asm { mov      qword ptr [rsp + 0x40], rbx }
    /* +0x1c49598 */ __asm { mov      qword ptr [rbp + 0x20], rsi }
    /* +0x1c4959c */ __asm { mov      edi, 0x19 }
    /* +0x1c495a1 */ __asm { test     rsi, rsi }
    /* +0x1c495a4 */ __asm { je       0x1c495ae }
    /* +0x1c495a6 */ __asm { mov      rcx, rsi }
    /* +0x1c495a9 */ __asm { call     0x6daf40 }
    /* +0x1c495ae */ __asm { and      edi, 0xfffffffe }
    /* +0x1c495b1 */ __asm { jmp      0x1c495da }
    /* +0x1c495b3 */ __asm { mov      rbx, rsi }
    /* +0x1c495b6 */ __asm { mov      r15, rsi }
    /* +0x1c495b9 */ __asm { mov      qword ptr [rsp + 0x38], rsi }
    /* +0x1c495be */ __asm { mov      qword ptr [rsp + 0x40], rbx }
    /* +0x1c495c3 */ __asm { mov      qword ptr [rbp + 0x30], rsi }
    /* +0x1c495c7 */ __asm { mov      edi, 8 }
    /* +0x1c495cc */ __asm { test     rsi, rsi }
    /* +0x1c495cf */ __asm { je       0x1c495da }
    /* +0x1c495d1 */ __asm { mov      rcx, rsi }
    /* +0x1c495d4 */ __asm { call     0x6daf40 }
    /* +0x1c495d9 */ __asm { nop       }
    /* +0x1c495da */ __asm { mov      r8, qword ptr [r12] }
    /* +0x1c495de */ __asm { test     r8, r8 }
    /* +0x1c495e1 */ __asm { je       0x1c49630 }
    /* +0x1c495e3 */ __asm { mov      rdx, qword ptr [r8 + 0x10] }
    /* +0x1c495e7 */ __asm { test     rdx, rdx }
    /* +0x1c495ea */ __asm { je       0x1c49a81 }
    /* +0x1c495f0 */ __asm { mov      eax, dword ptr [rdx + 8] }
    /* +0x1c495f3 */ __asm { test     eax, eax }
    /* +0x1c495f5 */ __asm { je       0x1c49a81 }
    /* +0x1c495fb */ __asm { nop      dword ptr [rax + rax] }
    /* +0x1c49600 */ __asm { lea      ecx, [rax + 1] }
    /* +0x1c49603 */ __asm { lock cmpxchg dword ptr [rdx + 8], ecx }
    /* +0x1c49608 */ __asm { je       0x1c49614 }
    /* +0x1c4960a */ __asm { test     eax, eax }
    /* +0x1c4960c */ __asm { je       0x1c49a81 }
    /* +0x1c49612 */ __asm { jmp      0x1c49600 }
    /* +0x1c49614 */ __asm { mov      r12, qword ptr [r8 + 8] }
    /* +0x1c49618 */ __asm { mov      rax, qword ptr [r8 + 0x10] }
    /* +0x1c4961c */ __asm { mov      qword ptr [rbp - 0x50], rax }
    /* +0x1c49620 */ __asm { lea      rax, [rbp - 0x58] }
    /* +0x1c49624 */ __asm { mov      ecx, 0x360 }
    /* +0x1c49629 */ __asm { mov      rbx, qword ptr [rsp + 0x40] }
    /* +0x1c4962e */ __asm { jmp      0x1c49640 }
    /* +0x1c49630 */ __asm { mov      qword ptr [rbp - 0x60], rsi }
    /* +0x1c49634 */ __asm { lea      rax, [rbp - 0x68] }
    /* +0x1c49638 */ __asm { mov      r12, rsi }
    /* +0x1c4963b */ __asm { mov      ecx, 0x180 }
    /* +0x1c49640 */ __asm { mov      rsi, qword ptr [rax + 8] }
    /* +0x1c49644 */ __asm { xor      edx, edx }
    /* +0x1c49646 */ __asm { mov      qword ptr [rax], rdx }
    /* +0x1c49649 */ __asm { mov      qword ptr [rax + 8], rdx }
    /* +0x1c4964d */ __asm { or       edi, ecx }
    /* +0x1c4964f */ __asm { test     dil, dil }
    /* +0x1c49652 */ __asm { jns      0x1c49666 }
    /* +0x1c49654 */ __asm { btr      edi, 7 }
    /* +0x1c49658 */ __asm { mov      rcx, qword ptr [rbp - 0x60] }
    /* +0x1c4965c */ __asm { test     rcx, rcx }
    /* +0x1c4965f */ __asm { je       0x1c49666 }
    /* +0x1c49661 */ __asm { call     0x6daf40 }
    /* +0x1c49666 */ __asm { test     dil, 0x40 }
    /* +0x1c4966a */ __asm { je       0x1c4967d }
    /* +0x1c4966c */ __asm { and      edi, 0xffffffbf }
    /* +0x1c4966f */ __asm { mov      rcx, qword ptr [rbp - 0x50] }
    /* +0x1c49673 */ __asm { test     rcx, rcx }
    /* +0x1c49676 */ __asm { je       0x1c4967d }
    /* +0x1c49678 */ __asm { call     0x6daf40 }
    /* +0x1c4967d */ __asm { test     dil, 0x20 }
    /* +0x1c49681 */ __asm { je       0x1c49686 }
    /* +0x1c49683 */ __asm { and      edi, 0xffffffdf }
    /* +0x1c49686 */ __asm { lea      rax, [rip + 0x53eded3] }
    /* +0x1c4968d */ __asm { mov      qword ptr [rsp + 0x70], rax }
}

// Slot [60] -> shared stub 0x6dc400

// VTable Slot [61] | RVA 0x1c47e60
void RBX__IntegrityService_vfunc_61_0x1c47e60(void* self, void* arg1, void* arg2) {
    /* +0x1c47e60 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x1c47e65 */ __asm { push     rdi }
    /* +0x1c47e66 */ __asm { sub      rsp, 0x30 }
    /* +0x1c47e6a */ __asm { mov      rbx, rdx }
    /* +0x1c47e6d */ __asm { call     0x1c513c0 }
    /* +0x1c47e72 */ __asm { mov      rdi, rax }
    /* +0x1c47e75 */ __asm { test     rax, rax }
    /* +0x1c47e78 */ __asm { je       0x1c47ed9 }
    /* +0x1c47e7a */ __asm { test     rbx, rbx }
    /* +0x1c47e7d */ __asm { je       0x1c47eb0 }
    /* +0x1c47e7f */ __asm { mov      r8, qword ptr [rbx + 0x10] }
    /* +0x1c47e83 */ __asm { test     r8, r8 }
    /* +0x1c47e86 */ __asm { je       0x1c47ee4 }
    /* +0x1c47e88 */ __asm { mov      eax, dword ptr [r8 + 8] }
    /* +0x1c47e8c */ __asm { test     eax, eax }
    /* +0x1c47e8e */ __asm { je       0x1c47ee4 }
    /* +0x1c47e90 */ __asm { lea      ecx, [rax + 1] }
    /* +0x1c47e93 */ __asm { lock cmpxchg dword ptr [r8 + 8], ecx }
    /* +0x1c47e99 */ __asm { je       0x1c47ea1 }
    /* +0x1c47e9b */ __asm { test     eax, eax }
    /* +0x1c47e9d */ __asm { je       0x1c47ee4 }
    /* +0x1c47e9f */ __asm { jmp      0x1c47e90 }
    /* +0x1c47ea1 */ __asm { mov      rax, qword ptr [rbx + 8] }
    /* +0x1c47ea5 */ __asm { mov      rcx, qword ptr [rbx + 0x10] }
    /* +0x1c47ea9 */ __asm { mov      qword ptr [rsp + 0x20], rax }
    /* +0x1c47eae */ __asm { jmp      0x1c47eb7 }
    /* +0x1c47eb0 */ __asm { xor      ecx, ecx }
    /* +0x1c47eb2 */ __asm { mov      qword ptr [rsp + 0x20], rcx }
    /* +0x1c47eb7 */ __asm { mov      qword ptr [rsp + 0x28], rcx }
    /* +0x1c47ebc */ __asm { lea      rdx, [rsp + 0x20] }
    /* +0x1c47ec1 */ __asm { mov      rcx, rdi }
    /* +0x1c47ec4 */ __asm { call     0x7d8d40 }
    /* +0x1c47ec9 */ __asm { nop       }
    /* +0x1c47eca */ __asm { mov      rcx, qword ptr [rsp + 0x28] }
    /* +0x1c47ecf */ __asm { test     rcx, rcx }
    /* +0x1c47ed2 */ __asm { je       0x1c47ed9 }
    /* +0x1c47ed4 */ __asm { call     0x6daf40 }
    /* +0x1c47ed9 */ __asm { mov      rbx, qword ptr [rsp + 0x40] }
    /* +0x1c47ede */ __asm { add      rsp, 0x30 }
    /* +0x1c47ee2 */ __asm { pop      rdi }
    /* +0x1c47ee3 */ __asm { ret       }
}

// VTable Slot [62] | RVA 0x1c42f00
void RBX__IntegrityService_vfunc_62_0x1c42f00(void* self, void* arg1, void* arg2) {
    /* +0x1c42f00 */ __asm { push     rbx }
    /* +0x1c42f02 */ __asm { sub      rsp, 0x20 }
    /* +0x1c42f06 */ __asm { mov      rbx, rdx }
    /* +0x1c42f09 */ __asm { call     0x1c514f0 }
    /* +0x1c42f0e */ __asm { test     rax, rax }
    /* +0x1c42f11 */ __asm { je       0x1c42f23 }
    /* +0x1c42f13 */ __asm { mov      rdx, rbx }
    /* +0x1c42f16 */ __asm { mov      rcx, rax }
    /* +0x1c42f19 */ __asm { add      rsp, 0x20 }
    /* +0x1c42f1d */ __asm { pop      rbx }
    /* +0x1c42f1e */ __asm { jmp      0x7d8d40 }
    /* +0x1c42f23 */ __asm { add      rsp, 0x20 }
    /* +0x1c42f27 */ __asm { pop      rbx }
    /* +0x1c42f28 */ __asm { ret       }
}

// Slot [63] -> shared stub 0x6dc400

// Slot [64] -> shared stub 0x6dc400

// Slot [65] -> shared stub 0x6dc400

// VTable Slot [66] | RVA 0x1c3c000
void RBX__IntegrityService_vfunc_66_0x1c3c000(void* self, void* arg1, void* arg2) {
    /* +0x1c3c000 */ __asm { mov      rcx, qword ptr [rcx + 0x60] }
    /* +0x1c3c004 */ __asm { test     rcx, rcx }
    /* +0x1c3c007 */ __asm { je       0x1c3c01a }
    /* +0x1c3c009 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c3c00c */ __asm { mov      rax, qword ptr [rax + 0x210] }
    /* +0x1c3c013 */ __asm { jmp      qword ptr [rip + 0x47fdd26] }
    /* +0x1c3c01a */ __asm { ret       }
}

// VTable Slot [67] | RVA 0x1c3e420
void RBX__IntegrityService_vfunc_67_0x1c3e420(void* self, void* arg1, void* arg2) {
    /* +0x1c3e420 */ __asm { mov      qword ptr [rsp + 0x10], rbx }
    /* +0x1c3e425 */ __asm { mov      qword ptr [rsp + 0x18], rsi }
    /* +0x1c3e42a */ __asm { push     rdi }
    /* +0x1c3e42b */ __asm { sub      rsp, 0x20 }
    /* +0x1c3e42f */ __asm { mov      rsi, r8 }
    /* +0x1c3e432 */ __asm { mov      qword ptr [rsp + 0x30], r8 }
    /* +0x1c3e437 */ __asm { mov      rdi, rdx }
    /* +0x1c3e43a */ __asm { mov      rbx, rcx }
    /* +0x1c3e43d */ __asm { call     0x1c516c0 }
    /* +0x1c3e442 */ __asm { test     rax, rax }
    /* +0x1c3e445 */ __asm { je       0x1c3e457 }
    /* +0x1c3e447 */ __asm { lea      r8, [rsp + 0x30] }
    /* +0x1c3e44c */ __asm { mov      rdx, rdi }
    /* +0x1c3e44f */ __asm { mov      rcx, rax }
    /* +0x1c3e452 */ __asm { call     0xb4bb90 }
    /* +0x1c3e457 */ __asm { mov      rcx, qword ptr [rbx + 0x60] }
    /* +0x1c3e45b */ __asm { test     rcx, rcx }
    /* +0x1c3e45e */ __asm { je       0x1c3e476 }
    /* +0x1c3e460 */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c3e463 */ __asm { mov      r8, rsi }
    /* +0x1c3e466 */ __asm { mov      rdx, rdi }
    /* +0x1c3e469 */ __asm { mov      rax, qword ptr [rax + 0x218] }
    /* +0x1c3e470 */ __asm { call     qword ptr [rip + 0x47fb8ca] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c3e476 */ __asm { mov      rbx, qword ptr [rsp + 0x38] }
    /* +0x1c3e47b */ __asm { mov      rsi, qword ptr [rsp + 0x40] }
    /* +0x1c3e480 */ __asm { add      rsp, 0x20 }
    /* +0x1c3e484 */ __asm { pop      rdi }
    /* +0x1c3e485 */ __asm { ret       }
}

// VTable Slot [68] | RVA 0x1c48420
void RBX__IntegrityService_vfunc_68_0x1c48420(void* self, void* arg1, void* arg2) {
    /* +0x1c48420 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x1c48425 */ __asm { mov      qword ptr [rsp + 0x18], r8 }
    /* +0x1c4842a */ __asm { mov      qword ptr [rsp + 0x10], rdx }
    /* +0x1c4842f */ __asm { push     rbp }
    /* +0x1c48430 */ __asm { push     rsi }
    /* +0x1c48431 */ __asm { push     rdi }
    /* +0x1c48432 */ __asm { push     r14 }
    /* +0x1c48434 */ __asm { push     r15 }
    /* +0x1c48436 */ __asm { sub      rsp, 0x20 }
    /* +0x1c4843a */ __asm { mov      rdi, r8 }
    /* +0x1c4843d */ __asm { mov      r15, rdx }
    /* +0x1c48440 */ __asm { mov      rbx, rcx }
    /* +0x1c48443 */ __asm { call     0x1c51880 }
    /* +0x1c48448 */ __asm { test     rax, rax }
    /* +0x1c4844b */ __asm { je       0x1c48455 }
    /* +0x1c4844d */ __asm { mov      rcx, rax }
    /* +0x1c48450 */ __asm { call     0x7385b0 }
    /* +0x1c48455 */ __asm { mov      rcx, rbx }
    /* +0x1c48458 */ __asm { call     0x1c51910 }
    /* +0x1c4845d */ __asm { test     rax, rax }
    /* +0x1c48460 */ __asm { je       0x1c484cc }
    /* +0x1c48462 */ __asm { mov      r14, qword ptr [rax + 8] }
    /* +0x1c48466 */ __asm { mov      rbx, qword ptr [r14] }
    /* +0x1c48469 */ __asm { cmp      rbx, r14 }
    /* +0x1c4846c */ __asm { je       0x1c484cc }
    /* +0x1c4846e */ __asm { mov      ebp, 1 }
    /* +0x1c48473 */ __asm { mov      rdx, qword ptr [r15] }
    /* +0x1c48476 */ __asm { test     rdx, rdx }
    /* +0x1c48479 */ __asm { je       0x1c484b8 }
    /* +0x1c4847b */ __asm { cmp      qword ptr [rdi], 0 }
    /* +0x1c4847f */ __asm { je       0x1c48489 }
    /* +0x1c48481 */ __asm { xor      sil, sil }
    /* +0x1c48484 */ __asm { mov      r8, qword ptr [rdi] }
    /* +0x1c48487 */ __asm { jmp      0x1c4849a }
    /* +0x1c48489 */ __asm { test     rdx, rdx }
    /* +0x1c4848c */ __asm { je       0x1c484b8 }
    /* +0x1c4848e */ __asm { mov      r8, qword ptr [rdi] }
    /* +0x1c48491 */ __asm { movzx    esi, bpl }
    /* +0x1c48495 */ __asm { test     r8, r8 }
    /* +0x1c48498 */ __asm { je       0x1c484b8 }
    /* +0x1c4849a */ __asm { mov      rcx, qword ptr [rbx + 0x10] }
    /* +0x1c4849e */ __asm { mov      rax, qword ptr [rcx] }
    /* +0x1c484a1 */ __asm { mov      rax, qword ptr [rax + 0x40] }
    /* +0x1c484a5 */ __asm { call     qword ptr [rip + 0x47f1895] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c484ab */ __asm { movzx    ecx, sil }
    /* +0x1c484af */ __asm { test     al, al }
    /* +0x1c484b1 */ __asm { cmove    ecx, ebp }
    /* +0x1c484b4 */ __asm { test     cl, cl }
    /* +0x1c484b6 */ __asm { je       0x1c484c1 }
    /* +0x1c484b8 */ __asm { mov      rcx, qword ptr [rbx + 0x18] }
    /* +0x1c484bc */ __asm { call     0x7385b0 }
    /* +0x1c484c1 */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c484c4 */ __asm { mov      rbx, rax }
    /* +0x1c484c7 */ __asm { cmp      rax, r14 }
    /* +0x1c484ca */ __asm { jne      0x1c48473 }
    /* +0x1c484cc */ __asm { mov      rcx, r15 }
    /* +0x1c484cf */ __asm { call     0x86f130 }
    /* +0x1c484d4 */ __asm { nop       }
    /* +0x1c484d5 */ __asm { mov      rcx, rdi }
    /* +0x1c484d8 */ __asm { mov      rbx, qword ptr [rsp + 0x50] }
    /* +0x1c484dd */ __asm { add      rsp, 0x20 }
    /* +0x1c484e1 */ __asm { pop      r15 }
    /* +0x1c484e3 */ __asm { pop      r14 }
    /* +0x1c484e5 */ __asm { pop      rdi }
    /* +0x1c484e6 */ __asm { pop      rsi }
    /* +0x1c484e7 */ __asm { pop      rbp }
    /* +0x1c484e8 */ __asm { jmp      0x86f130 }
    /* +0x1c484ed */ __asm { int3      }
}

// VTable Slot [69] | RVA 0x1c3da40
void RBX__IntegrityService_vfunc_69_0x1c3da40(void* self, void* arg1, void* arg2) {
    /* +0x1c3da40 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x1c3da45 */ __asm { mov      qword ptr [rsp + 0x18], rbp }
    /* +0x1c3da4a */ __asm { mov      qword ptr [rsp + 0x10], rdx }
    /* +0x1c3da4f */ __asm { push     rsi }
    /* +0x1c3da50 */ __asm { push     rdi }
    /* +0x1c3da51 */ __asm { push     r14 }
    /* +0x1c3da53 */ __asm { sub      rsp, 0x30 }
    /* +0x1c3da57 */ __asm { mov      rbp, r9 }
    /* +0x1c3da5a */ __asm { mov      rdi, r8 }
    /* +0x1c3da5d */ __asm { mov      rsi, rdx }
    /* +0x1c3da60 */ __asm { mov      r14, rcx }
    /* +0x1c3da63 */ __asm { mov      dword ptr [rsp + 0x20], 0 }
    /* +0x1c3da6b */ __asm { mov      rdx, r8 }
    /* +0x1c3da6e */ __asm { cmp      qword ptr [r8 + 0x18], 0x10 }
    /* +0x1c3da73 */ __asm { jb       0x1c3da78 }
    /* +0x1c3da75 */ __asm { mov      rdx, qword ptr [r8] }
    /* +0x1c3da78 */ __asm { mov      rcx, qword ptr [rcx + 0x18] }
    /* +0x1c3da7c */ __asm { call     0x1c2e290 }
    /* +0x1c3da81 */ __asm { mov      rbx, rax }
    /* +0x1c3da84 */ __asm { test     rax, rax }
    /* +0x1c3da87 */ __asm { je       0x1c3db80 }
    /* +0x1c3da8d */ __asm { mov      ecx, dword ptr [rax + 0xac] }
    /* +0x1c3da93 */ __asm { shr      ecx, 4 }
    /* +0x1c3da96 */ __asm { test     cl, 1 }
    /* +0x1c3da99 */ __asm { je       0x1c3db80 }
    /* +0x1c3da9f */ __asm { movzx    ecx, byte ptr [rax + 0x38] }
    /* +0x1c3daa3 */ __asm { shr      cl, 4 }
    /* +0x1c3daa6 */ __asm { test     cl, 1 }
    /* +0x1c3daa9 */ __asm { jne      0x1c3db80 }
    /* +0x1c3daaf */ __asm { mov      rax, qword ptr [rax] }
    /* +0x1c3dab2 */ __asm { mov      rcx, rbx }
    /* +0x1c3dab5 */ __asm { mov      rax, qword ptr [rax + 0x10] }
    /* +0x1c3dab9 */ __asm { call     qword ptr [rip + 0x47fc281] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c3dabf */ __asm { test     al, al }
    /* +0x1c3dac1 */ __asm { jne      0x1c3db98 }
    /* +0x1c3dac7 */ __asm { mov      edx, 1 }
    /* +0x1c3dacc */ __asm { mov      rcx, qword ptr [rip + 0x68712a5] }
    /* +0x1c3dad3 */ __asm { call     0xc700 }
    /* +0x1c3dad8 */ __asm { mov      r9, qword ptr [rbx + 8] }
    /* +0x1c3dadc */ __asm { cmp      qword ptr [r9 + 0x18], 0x10 }
    /* +0x1c3dae1 */ __asm { jb       0x1c3dae6 }
    /* +0x1c3dae3 */ __asm { mov      r9, qword ptr [r9] }
    /* +0x1c3dae6 */ __asm { lea      r8, [rip + 0x56454bb] }
    /* +0x1c3daed */ __asm { mov      rdx, qword ptr [rbx + 0x38] }
    /* +0x1c3daf1 */ __asm { mov      rcx, rax }
    /* +0x1c3daf4 */ __asm { call     0x77c790 }
    /* +0x1c3daf9 */ __asm { cmp      byte ptr [rbp + 0x20], 0 }
    /* +0x1c3dafd */ __asm { jne      0x1c3db58 }
    /* +0x1c3daff */ __asm { mov      rcx, rsi }
    /* +0x1c3db02 */ __asm { call     0x77e920 }
    /* +0x1c3db07 */ __asm { mov      dword ptr [rsp + 0x20], 1 }
    /* +0x1c3db0f */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x1c3db12 */ __asm { mov      rcx, rbx }
    /* +0x1c3db15 */ __asm { mov      rax, qword ptr [rax + 0x18] }
    /* +0x1c3db19 */ __asm { call     qword ptr [rip + 0x47fc221] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c3db1f */ __asm { mov      r9, qword ptr [rbx] }
    /* +0x1c3db22 */ __asm { mov      r8, rsi }
    /* +0x1c3db25 */ __asm { mov      rdx, r14 }
    /* +0x1c3db28 */ __asm { mov      rcx, rbx }
    /* +0x1c3db2b */ __asm { test     al, al }
    /* +0x1c3db2d */ __asm { je       0x1c3db35 }
    /* +0x1c3db2f */ __asm { mov      rax, qword ptr [r9 + 0x30] }
    /* +0x1c3db33 */ __asm { jmp      0x1c3db3c }
    /* +0x1c3db35 */ __asm { mov      rax, qword ptr [r9 + 0x88] }
    /* +0x1c3db3c */ __asm { call     qword ptr [rip + 0x47fc1fe] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x1c3db42 */ __asm { mov      rax, rsi }
    /* +0x1c3db45 */ __asm { mov      rbx, qword ptr [rsp + 0x50] }
    /* +0x1c3db4a */ __asm { mov      rbp, qword ptr [rsp + 0x60] }
    /* +0x1c3db4f */ __asm { add      rsp, 0x30 }
    /* +0x1c3db53 */ __asm { pop      r14 }
    /* +0x1c3db55 */ __asm { pop      rdi }
    /* +0x1c3db56 */ __asm { pop      rsi }
    /* +0x1c3db57 */ __asm { ret       }
}

// Slot [70] -> shared stub 0x6dc430

// VTable Slot [71] | RVA 0x1c436a0
void RBX__IntegrityService_vfunc_71_0x1c436a0(void* self, void* arg1, void* arg2) {
    /* +0x1c436a0 */ __asm { sub      rsp, 0x18 }
    /* +0x1c436a4 */ __asm { mov      rax, qword ptr [rip + 0x6495035] }
    /* +0x1c436ab */ __asm { xor      rax, rsp }
    /* +0x1c436ae */ __asm { mov      qword ptr [rsp + 8], rax }
    /* +0x1c436b3 */ __asm { mov      qword ptr [rsp], rdx }
    /* +0x1c436b7 */ __asm { mov      qword ptr [rsp], r8 }
    /* +0x1c436bb */ __asm { cmp      qword ptr [r8 + 0x10], 0x64 }
    /* +0x1c436c0 */ __asm { jbe      0x1c436db }
    /* +0x1c436c2 */ __asm { mov      rax, r8 }
    /* +0x1c436c5 */ __asm { cmp      qword ptr [r8 + 0x18], 0x10 }
    /* +0x1c436ca */ __asm { jb       0x1c436cf }
    /* +0x1c436cc */ __asm { mov      rax, qword ptr [r8] }
    /* +0x1c436cf */ __asm { mov      qword ptr [r8 + 0x10], 0x64 }
    /* +0x1c436d7 */ __asm { mov      byte ptr [rax + 0x64], 0 }
    /* +0x1c436db */ __asm { xor      eax, eax }
    /* +0x1c436dd */ __asm { mov      qword ptr [rdx], rax }
    /* +0x1c436e0 */ __asm { mov      qword ptr [rdx + 0x10], rax }
    /* +0x1c436e4 */ __asm { mov      qword ptr [rdx + 0x18], rax }
    /* +0x1c436e8 */ __asm { movups   xmm0, xmmword ptr [r8] }
    /* +0x1c436ec */ __asm { movups   xmmword ptr [rdx], xmm0 }
    /* +0x1c436ef */ __asm { movups   xmm1, xmmword ptr [r8 + 0x10] }
    /* +0x1c436f4 */ __asm { movups   xmmword ptr [rdx + 0x10], xmm1 }
    /* +0x1c436f8 */ __asm { mov      qword ptr [r8 + 0x10], rax }
    /* +0x1c436fc */ __asm { mov      qword ptr [r8 + 0x18], 0xf }
    /* +0x1c43704 */ __asm { mov      byte ptr [r8], al }
    /* +0x1c43707 */ __asm { mov      rax, rdx }
    /* +0x1c4370a */ __asm { mov      rcx, qword ptr [rsp + 8] }
    /* +0x1c4370f */ __asm { xor      rcx, rsp }
    /* +0x1c43712 */ __asm { call     0x5de48a0 }
    /* +0x1c43717 */ __asm { add      rsp, 0x18 }
    /* +0x1c4371b */ __asm { ret       }
}

// Slot [72] -> shared stub 0x6dc400

// Slot [73] -> shared stub 0x6dc400

// Slot [74] -> shared stub 0x6dc400

// Slot [75] -> shared stub 0x6dc400
