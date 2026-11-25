// Engine Security Class : XZ::2::RBX::VAppQoSInstance::SA?AV?$SubsystemHandle::RBX::$0A::RBX::VAppQoSInstance::Subsystem<>::RBX::RBX::VAppQoSInstance::V?$SubsystemDefaultFactory::?1???$startup::SubsystemHandleImplForT
// VTable RVA            : 0x713a160 (5 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x45cd1d0
void XZ__2__RBX__VAppQoSInstance__SA_AV__SubsystemHandle__RBX___0A__R_vfunc_00_0x45cd1d0(void* self, void* arg1, void* arg2) {
    /* +0x45cd1d0 */ __asm { mov      qword ptr [rsp + 0x18], rbx }
    /* +0x45cd1d5 */ __asm { mov      qword ptr [rsp + 0x20], rbp }
    /* +0x45cd1da */ __asm { push     rsi }
    /* +0x45cd1db */ __asm { push     rdi }
    /* +0x45cd1dc */ __asm { push     r14 }
    /* +0x45cd1de */ __asm { sub      rsp, 0x70 }
    /* +0x45cd1e2 */ __asm { mov      rbp, rcx }
    /* +0x45cd1e5 */ __asm { mov      edx, 1 }
    /* +0x45cd1ea */ __asm { lock xadd dword ptr [rcx + 0x20], edx }
    /* +0x45cd1ef */ __asm { mov      eax, edx }
    /* +0x45cd1f1 */ __asm { and      eax, 0x3fffffff }
    /* +0x45cd1f6 */ __asm { cmp      eax, 0x3fffffff }
    /* +0x45cd1fb */ __asm { je       0x45cd3b3 }
    /* +0x45cd201 */ __asm { and      edx, 0xc0000000 }
    /* +0x45cd207 */ __asm { cmp      edx, 0x80000000 }
    /* +0x45cd20d */ __asm { je       0x45cd363 }
    /* +0x45cd213 */ __asm { lea      rbx, [rcx + 8] }
    /* +0x45cd217 */ __asm { mov      qword ptr [rsp + 0x30], rbx }
    /* +0x45cd21c */ __asm { mov      byte ptr [rsp + 0x38], 1 }
    /* +0x45cd221 */ __asm { xor      r14d, r14d }
    /* +0x45cd224 */ __asm { mov      edi, r14d }
    /* +0x45cd227 */ __asm { mov      rsi, qword ptr [rbx] }
    /* +0x45cd22a */ __asm { call     0xc8a0 }
    /* +0x45cd22f */ __asm { cmp      rsi, rax }
    /* +0x45cd232 */ __asm { je       0x45cd279 }
    /* +0x45cd234 */ __asm { test     rsi, rsi }
    /* +0x45cd237 */ __asm { jne      0x45cd24a }
    /* +0x45cd239 */ __asm { call     0xc8a0 }
    /* +0x45cd23e */ __asm { mov      rcx, rax }
    /* +0x45cd241 */ __asm { xor      eax, eax }
    /* +0x45cd243 */ __asm { lock cmpxchg qword ptr [rbx], rcx }
    /* +0x45cd248 */ __asm { je       0x45cd279 }
    /* +0x45cd24a */ __asm { cmp      rdi, 0x10 }
    /* +0x45cd24e */ __asm { jb       0x45cd272 }
    /* +0x45cd250 */ __asm { xor      r8d, r8d }
    /* +0x45cd253 */ __asm { xor      edx, edx }
    /* +0x45cd255 */ __asm { lea      rcx, [rsp + 0x98] }
    /* +0x45cd25d */ __asm { call     0xc880 }
    /* +0x45cd262 */ __asm { test     al, al }
    /* +0x45cd264 */ __asm { je       0x45cd272 }
    /* +0x45cd266 */ __asm { mov      cl, 1 }
    /* +0x45cd268 */ __asm { call     0xcb40 }
    /* +0x45cd26d */ __asm { inc      rdi }
    /* +0x45cd270 */ __asm { jmp      0x45cd227 }
    /* +0x45cd272 */ __asm { pause     }
    /* +0x45cd274 */ __asm { inc      rdi }
    /* +0x45cd277 */ __asm { jmp      0x45cd227 }
    /* +0x45cd279 */ __asm { inc      qword ptr [rbx + 8] }
    /* +0x45cd27d */ __asm { cmp      qword ptr [rbp + 0x18], 0 }
    /* +0x45cd282 */ __asm { jne      0x45cd353 }
    /* +0x45cd288 */ __asm { mov      rcx, qword ptr [rip + 0x3ed7bc1] }
    /* +0x45cd28f */ __asm { nop       }
    /* +0x45cd290 */ __asm { mov      rdx, rbp }
    /* +0x45cd293 */ __asm { call     0x4959930 }
    /* +0x45cd298 */ __asm { mov      edx, 8 }
    /* +0x45cd29d */ __asm { lea      ecx, [rdx + 0x50] }
    /* +0x45cd2a0 */ __asm { call     0x4956380 }
    /* +0x45cd2a5 */ __asm { mov      rbx, rax }
    /* +0x45cd2a8 */ __asm { mov      qword ptr [rsp + 0x90], rax }
    /* +0x45cd2b0 */ __asm { lea      rax, [rip + 0x2ecb541] }
    /* +0x45cd2b7 */ __asm { mov      qword ptr [rsp + 0x20], rax }
    /* +0x45cd2bc */ __asm { mov      qword ptr [rsp + 0x28], 0xe }
    /* +0x45cd2c5 */ __asm { movups   xmm0, xmmword ptr [rsp + 0x20] }
    /* +0x45cd2ca */ __asm { movups   xmmword ptr [rbx + 8], xmm0 }
    /* +0x45cd2ce */ __asm { lea      rax, [rip + 0x2b7993b] }
    /* +0x45cd2d5 */ __asm { mov      qword ptr [rbx], rax }
    /* +0x45cd2d8 */ __asm { mov      ecx, 8 }
    /* +0x45cd2dd */ __asm { call     0x4956040 }
    /* +0x45cd2e2 */ __asm { test     rax, rax }
    /* +0x45cd2e5 */ __asm { je       0x45cd397 }
    /* +0x45cd2eb */ __asm { lea      rcx, [rip + 0x2b798c6] }
    /* +0x45cd2f2 */ __asm { mov      qword ptr [rax], rcx }
    /* +0x45cd2f5 */ __asm { mov      qword ptr [rbx + 0x18], rax }
    /* +0x45cd2f9 */ __asm { mov      qword ptr [rbx + 0x20], r14 }
    /* +0x45cd2fd */ __asm { mov      qword ptr [rbx + 0x28], r14 }
    /* +0x45cd301 */ __asm { mov      qword ptr [rbx + 0x30], r14 }
    /* +0x45cd305 */ __asm { mov      qword ptr [rbx + 0x38], r14 }
    /* +0x45cd309 */ __asm { mov      ecx, 0x20 }
    /* +0x45cd30e */ __asm { call     0x4956040 }
    /* +0x45cd313 */ __asm { test     rax, rax }
    /* +0x45cd316 */ __asm { je       0x45cd37b }
    /* +0x45cd318 */ __asm { mov      qword ptr [rax], rax }
    /* +0x45cd31b */ __asm { mov      qword ptr [rax + 8], rax }
    /* +0x45cd31f */ __asm { mov      qword ptr [rbx + 0x30], rax }
    /* +0x45cd323 */ __asm { lea      rax, [rbx + 0x40] }
    /* +0x45cd327 */ __asm { test     rax, rax }
    /* +0x45cd32a */ __asm { je       0x45cd333 }
    /* +0x45cd32c */ __asm { mov      qword ptr [rax], 1 }
    /* +0x45cd333 */ __asm { lea      rax, [rbx + 0x48] }
    /* +0x45cd337 */ __asm { test     rax, rax }
    /* +0x45cd33a */ __asm { je       0x45cd343 }
    /* +0x45cd33c */ __asm { mov      qword ptr [rax], 1 }
    /* +0x45cd343 */ __asm { mov      byte ptr [rbx + 0x50], 0 }
    /* +0x45cd347 */ __asm { mov      qword ptr [rbp + 0x18], rbx }
    /* +0x45cd34b */ __asm { lock or  dword ptr [rbp + 0x20], 0x80000000 }
    /* +0x45cd353 */ __asm { mov      rax, qword ptr [rsp + 0x30] }
    /* +0x45cd358 */ __asm { sub      qword ptr [rax + 8], 1 }
    /* +0x45cd35d */ __asm { jne      0x45cd363 }
    /* +0x45cd35f */ __asm { nop       }
    /* +0x45cd360 */ __asm { mov      qword ptr [rax], r14 }
    /* +0x45cd363 */ __asm { mov      rax, rbp }
    /* +0x45cd366 */ __asm { lea      r11, [rsp + 0x70] }
    /* +0x45cd36b */ __asm { mov      rbx, qword ptr [r11 + 0x30] }
    /* +0x45cd36f */ __asm { mov      rbp, qword ptr [r11 + 0x38] }
    /* +0x45cd373 */ __asm { mov      rsp, r11 }
    /* +0x45cd376 */ __asm { pop      r14 }
    /* +0x45cd378 */ __asm { pop      rdi }
    /* +0x45cd379 */ __asm { pop      rsi }
    /* +0x45cd37a */ __asm { ret       }
}

// VTable Slot [1] | RVA 0x6fc440
void XZ__2__RBX__VAppQoSInstance__SA_AV__SubsystemHandle__RBX___0A__R_vfunc_01_0x6fc440(void* self, void* arg1, void* arg2) {
    /* +0x6fc440 */ __asm { mov      eax, dword ptr [rcx + 0x20] }
    /* +0x6fc443 */ __asm { mov      r8, rcx }
    /* +0x6fc446 */ __asm { nop      word ptr [rax + rax] }
    /* +0x6fc450 */ __asm { mov      edx, eax }
    /* +0x6fc452 */ __asm { and      edx, 0xc0000000 }
    /* +0x6fc458 */ __asm { cmp      edx, 0x80000000 }
    /* +0x6fc45e */ __asm { jne      0x6fc46f }
    /* +0x6fc460 */ __asm { lea      ecx, [rax + 1] }
    /* +0x6fc463 */ __asm { lock cmpxchg dword ptr [r8 + 0x20], ecx }
    /* +0x6fc469 */ __asm { jne      0x6fc450 }
    /* +0x6fc46b */ __asm { mov      rax, r8 }
    /* +0x6fc46e */ __asm { ret       }
}

// VTable Slot [2] | RVA 0x6fc480
void XZ__2__RBX__VAppQoSInstance__SA_AV__SubsystemHandle__RBX___0A__R_vfunc_02_0x6fc480(void* self, void* arg1, void* arg2) {
    /* +0x6fc480 */ __asm { sub      rsp, 0x28 }
    /* +0x6fc484 */ __asm { mov      eax, 0xffffffff }
    /* +0x6fc489 */ __asm { lock xadd dword ptr [rcx + 0x20], eax }
    /* +0x6fc48e */ __asm { test     eax, 0x3fffffff }
    /* +0x6fc493 */ __asm { je       0x6fc49a }
    /* +0x6fc495 */ __asm { add      rsp, 0x28 }
    /* +0x6fc499 */ __asm { ret       }
}

// VTable Slot [3] | RVA 0x217e1e0
// [Undecrypted .text page at RVA 0x217e1e0 — run with --watch while playing to capture]
void XZ__2__RBX__VAppQoSInstance__SA_AV__SubsystemHandle__RBX___0A__R_vfunc_03_0x217e1e0(/* encrypted page */);

// VTable Slot [4] | RVA 0x6fc8b0
void XZ__2__RBX__VAppQoSInstance__SA_AV__SubsystemHandle__RBX___0A__R_vfunc_04_0x6fc8b0(void* self, void* arg1, void* arg2) {
    /* +0x6fc8b0 */ __asm { mov      qword ptr [rsp + 0x10], rbx }
    /* +0x6fc8b5 */ __asm { mov      qword ptr [rsp + 0x20], rbp }
    /* +0x6fc8ba */ __asm { push     rsi }
    /* +0x6fc8bb */ __asm { push     rdi }
    /* +0x6fc8bc */ __asm { push     r14 }
    /* +0x6fc8be */ __asm { sub      rsp, 0x20 }
    /* +0x6fc8c2 */ __asm { mov      r14, rdx }
    /* +0x6fc8c5 */ __asm { mov      rbx, rcx }
    /* +0x6fc8c8 */ __asm { xor      ebp, ebp }
    /* +0x6fc8ca */ __asm { mov      esi, ebp }
    /* +0x6fc8cc */ __asm { nop      dword ptr [rax] }
    /* +0x6fc8d0 */ __asm { mov      rdi, qword ptr [rbx + 8] }
    /* +0x6fc8d4 */ __asm { call     0xc8a0 }
    /* +0x6fc8d9 */ __asm { cmp      rdi, rax }
    /* +0x6fc8dc */ __asm { je       0x6fc921 }
    /* +0x6fc8de */ __asm { test     rdi, rdi }
    /* +0x6fc8e1 */ __asm { jne      0x6fc8f5 }
    /* +0x6fc8e3 */ __asm { call     0xc8a0 }
    /* +0x6fc8e8 */ __asm { mov      rcx, rax }
    /* +0x6fc8eb */ __asm { xor      eax, eax }
    /* +0x6fc8ed */ __asm { lock cmpxchg qword ptr [rbx + 8], rcx }
    /* +0x6fc8f3 */ __asm { je       0x6fc921 }
    /* +0x6fc8f5 */ __asm { cmp      rsi, 0x10 }
    /* +0x6fc8f9 */ __asm { jb       0x6fc91a }
    /* +0x6fc8fb */ __asm { xor      r8d, r8d }
    /* +0x6fc8fe */ __asm { xor      edx, edx }
    /* +0x6fc900 */ __asm { lea      rcx, [rsp + 0x50] }
    /* +0x6fc905 */ __asm { call     0xc880 }
    /* +0x6fc90a */ __asm { test     al, al }
    /* +0x6fc90c */ __asm { je       0x6fc91a }
    /* +0x6fc90e */ __asm { mov      cl, 1 }
    /* +0x6fc910 */ __asm { call     0xcb40 }
    /* +0x6fc915 */ __asm { inc      rsi }
    /* +0x6fc918 */ __asm { jmp      0x6fc8d0 }
    /* +0x6fc91a */ __asm { pause     }
    /* +0x6fc91c */ __asm { inc      rsi }
    /* +0x6fc91f */ __asm { jmp      0x6fc8d0 }
    /* +0x6fc921 */ __asm { inc      qword ptr [rbx + 0x10] }
    /* +0x6fc925 */ __asm { mov      rax, qword ptr [rbx + 0x10] }
    /* +0x6fc929 */ __asm { mov      rcx, qword ptr [rbx + 0x18] }
    /* +0x6fc92d */ __asm { dec      rax }
    /* +0x6fc930 */ __asm { test     rcx, rcx }
    /* +0x6fc933 */ __asm { je       0x6fc93f }
    /* +0x6fc935 */ __asm { movups   xmm0, xmmword ptr [rcx + 8] }
    /* +0x6fc939 */ __asm { movups   xmmword ptr [r14], xmm0 }
    /* +0x6fc93d */ __asm { jmp      0x6fc946 }
    /* +0x6fc93f */ __asm { mov      qword ptr [r14], rbp }
    /* +0x6fc942 */ __asm { mov      qword ptr [r14 + 8], rbp }
    /* +0x6fc946 */ __asm { mov      qword ptr [rbx + 0x10], rax }
    /* +0x6fc94a */ __asm { test     rax, rax }
    /* +0x6fc94d */ __asm { mov      rax, r14 }
    /* +0x6fc950 */ __asm { jne      0x6fc957 }
    /* +0x6fc952 */ __asm { nop       }
    /* +0x6fc953 */ __asm { mov      qword ptr [rbx + 8], rbp }
    /* +0x6fc957 */ __asm { mov      rbx, qword ptr [rsp + 0x48] }
    /* +0x6fc95c */ __asm { mov      rbp, qword ptr [rsp + 0x58] }
    /* +0x6fc961 */ __asm { add      rsp, 0x20 }
    /* +0x6fc965 */ __asm { pop      r14 }
    /* +0x6fc967 */ __asm { pop      rdi }
    /* +0x6fc968 */ __asm { pop      rsi }
    /* +0x6fc969 */ __asm { ret       }
}
