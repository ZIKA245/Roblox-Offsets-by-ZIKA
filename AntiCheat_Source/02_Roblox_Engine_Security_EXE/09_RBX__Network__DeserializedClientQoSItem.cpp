// Engine Security Class : RBX::Network::DeserializedClientQoSItem
// VTable RVA            : 0x7145398 (3 virtual methods)
#include <cstdint>

// VTable Slot [0] | RVA 0x48aecc0
void RBX__Network__DeserializedClientQoSItem_vfunc_00_0x48aecc0(void* self, void* arg1, void* arg2) {
    /* +0x48aecc0 */ __asm { mov      qword ptr [rsp + 8], rbx }
    /* +0x48aecc5 */ __asm { push     rdi }
    /* +0x48aecc6 */ __asm { sub      rsp, 0x20 }
    /* +0x48aecca */ __asm { mov      ebx, edx }
    /* +0x48aeccc */ __asm { mov      rdi, rcx }
    /* +0x48aeccf */ __asm { lea      rax, [rip + 0x28966c2] }
    /* +0x48aecd6 */ __asm { mov      qword ptr [rcx], rax }
    /* +0x48aecd9 */ __asm { add      rcx, 0x28 }
    /* +0x48aecdd */ __asm { call     0x6f8fb0 }
    /* +0x48aece2 */ __asm { lea      rax, [rip + 0x288cb57] }
    /* +0x48aece9 */ __asm { mov      qword ptr [rdi], rax }
    /* +0x48aecec */ __asm { test     bl, 1 }
    /* +0x48aecef */ __asm { je       0x48aecfa }
    /* +0x48aecf1 */ __asm { mov      rcx, rdi }
    /* +0x48aecf4 */ __asm { call     0x4955ac0 }
    /* +0x48aecf9 */ __asm { nop       }
    /* +0x48aecfa */ __asm { mov      rax, rdi }
    /* +0x48aecfd */ __asm { mov      rbx, qword ptr [rsp + 0x30] }
    /* +0x48aed02 */ __asm { add      rsp, 0x20 }
    /* +0x48aed06 */ __asm { pop      rdi }
    /* +0x48aed07 */ __asm { ret       }
}

// VTable Slot [1] | RVA 0x48aefa0
void RBX__Network__DeserializedClientQoSItem_vfunc_01_0x48aefa0(void* self, void* arg1, void* arg2) {
    /* +0x48aefa0 */ __asm { mov      qword ptr [rsp + 0x18], rbx }
    /* +0x48aefa5 */ __asm { push     rsi }
    /* +0x48aefa6 */ __asm { push     rdi }
    /* +0x48aefa7 */ __asm { push     r14 }
    /* +0x48aefa9 */ __asm { sub      rsp, 0x80 }
    /* +0x48aefb0 */ __asm { mov      rax, qword ptr [rip + 0x3829729] }
    /* +0x48aefb7 */ __asm { xor      rax, rsp }
    /* +0x48aefba */ __asm { mov      qword ptr [rsp + 0x78], rax }
    /* +0x48aefbf */ __asm { mov      rax, rdx }
    /* +0x48aefc2 */ __asm { mov      rsi, rcx }
    /* +0x48aefc5 */ __asm { xor      edi, edi }
    /* +0x48aefc7 */ __asm { mov      dword ptr [rsp + 0x20], edi }
    /* +0x48aefcb */ __asm { lea      r9, [rip + 0x3b2a23e] }
    /* +0x48aefd2 */ __asm { lea      r8, [rip + 0x3b29a1f] }
    /* +0x48aefd9 */ __asm { xor      edx, edx }
    /* +0x48aefdb */ __asm { mov      rcx, rax }
    /* +0x48aefde */ __asm { call     0x5e064d0 }
    /* +0x48aefe3 */ __asm { mov      r14, rax }
    /* +0x48aefe6 */ __asm { test     rax, rax }
    /* +0x48aefe9 */ __asm { je       0x48af0d6 }
    /* +0x48aefef */ __asm { lea      rcx, [rsp + 0x30] }
    /* +0x48aeff4 */ __asm { call     0x45cbc10 }
    /* +0x48aeff9 */ __asm { mov      rbx, qword ptr [rax] }
    /* +0x48aeffc */ __asm { mov      qword ptr [rax], rdi }
    /* +0x48aefff */ __asm { mov      qword ptr [rsp + 0x50], rbx }
    /* +0x48af004 */ __asm { test     rbx, rbx }
    /* +0x48af007 */ __asm { je       0x48af00d }
    /* +0x48af009 */ __asm { mov      rdi, qword ptr [rbx + 0x18] }
    /* +0x48af00d */ __asm { lea      rax, [rsi + 0x28] }
    /* +0x48af011 */ __asm { mov      rcx, qword ptr [rax + 0x10] }
    /* +0x48af015 */ __asm { cmp      qword ptr [rax + 0x18], 0x10 }
    /* +0x48af01a */ __asm { jb       0x48af01f }
    /* +0x48af01c */ __asm { mov      rax, qword ptr [rax] }
    /* +0x48af01f */ __asm { mov      qword ptr [rsp + 0x40], rax }
    /* +0x48af024 */ __asm { mov      qword ptr [rsp + 0x48], rcx }
    /* +0x48af029 */ __asm { movzx    esi, byte ptr [rsi + 0x21] }
    /* +0x48af02d */ __asm { mov      rax, qword ptr [r14] }
    /* +0x48af030 */ __asm { lea      rdx, [rsp + 0x58] }
    /* +0x48af035 */ __asm { mov      rcx, r14 }
    /* +0x48af038 */ __asm { mov      rax, qword ptr [rax + 0x5b8] }
    /* +0x48af03f */ __asm { call     qword ptr [rip + 0x1b8acfb] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x48af045 */ __asm { nop       }
    /* +0x48af046 */ __asm { mov      rcx, qword ptr [rax + 0x10] }
    /* +0x48af04a */ __asm { cmp      qword ptr [rax + 0x18], 0x10 }
    /* +0x48af04f */ __asm { jb       0x48af054 }
    /* +0x48af051 */ __asm { mov      rax, qword ptr [rax] }
    /* +0x48af054 */ __asm { mov      qword ptr [rsp + 0x30], rax }
    /* +0x48af059 */ __asm { mov      qword ptr [rsp + 0x38], rcx }
    /* +0x48af05e */ __asm { movaps   xmm0, xmmword ptr [rsp + 0x40] }
    /* +0x48af063 */ __asm { movdqa   xmmword ptr [rsp + 0x40], xmm0 }
    /* +0x48af069 */ __asm { movaps   xmm1, xmmword ptr [rsp + 0x30] }
    /* +0x48af06e */ __asm { movdqa   xmmword ptr [rsp + 0x30], xmm1 }
    /* +0x48af074 */ __asm { lea      r9, [rsp + 0x40] }
    /* +0x48af079 */ __asm { movzx    r8d, sil }
    /* +0x48af07d */ __asm { lea      rdx, [rsp + 0x30] }
    /* +0x48af082 */ __asm { mov      rcx, rdi }
    /* +0x48af085 */ __asm { call     0x49328d0 }
    /* +0x48af08a */ __asm { nop       }
    /* +0x48af08b */ __asm { mov      rax, qword ptr [rsp + 0x70] }
    /* +0x48af090 */ __asm { cmp      rax, 0x10 }
    /* +0x48af094 */ __asm { jb       0x48af0c0 }
    /* +0x48af096 */ __asm { inc      rax }
    /* +0x48af099 */ __asm { mov      rcx, qword ptr [rsp + 0x58] }
    /* +0x48af09e */ __asm { mov      rdx, rcx }
    /* +0x48af0a1 */ __asm { cmp      rax, 0x1000 }
    /* +0x48af0a7 */ __asm { jb       0x48af0ba }
    /* +0x48af0a9 */ __asm { mov      rcx, qword ptr [rcx - 8] }
    /* +0x48af0ad */ __asm { sub      rdx, rcx }
    /* +0x48af0b0 */ __asm { lea      rax, [rdx - 8] }
    /* +0x48af0b4 */ __asm { cmp      rax, 0x1f }
    /* +0x48af0b8 */ __asm { ja       0x48af0fc }
    /* +0x48af0ba */ __asm { call     0x4955ac0 }
    /* +0x48af0bf */ __asm { nop       }
    /* +0x48af0c0 */ __asm { test     rbx, rbx }
    /* +0x48af0c3 */ __asm { je       0x48af0d6 }
    /* +0x48af0c5 */ __asm { mov      rax, qword ptr [rbx] }
    /* +0x48af0c8 */ __asm { mov      rcx, rbx }
    /* +0x48af0cb */ __asm { mov      rax, qword ptr [rax + 0x10] }
    /* +0x48af0cf */ __asm { call     qword ptr [rip + 0x1b8ac6b] } // -> RobloxPlayerBeta.dll!sub_0xce3990
    /* +0x48af0d5 */ __asm { nop       }
    /* +0x48af0d6 */ __asm { mov      eax, 1 }
    /* +0x48af0db */ __asm { mov      rcx, qword ptr [rsp + 0x78] }
    /* +0x48af0e0 */ __asm { xor      rcx, rsp }
    /* +0x48af0e3 */ __asm { call     0x5de48a0 }
    /* +0x48af0e8 */ __asm { mov      rbx, qword ptr [rsp + 0xb0] }
    /* +0x48af0f0 */ __asm { add      rsp, 0x80 }
    /* +0x48af0f7 */ __asm { pop      r14 }
    /* +0x48af0f9 */ __asm { pop      rdi }
    /* +0x48af0fa */ __asm { pop      rsi }
    /* +0x48af0fb */ __asm { ret       }
}

// VTable Slot [2] | RVA 0x6dc400
void RBX__Network__DeserializedClientQoSItem_vfunc_02_0x6dc400(void* self, void* arg1, void* arg2) {
    /* +0x6dc400 */ __asm { ret      0 }
    /* +0x6dc403 */ __asm { int3      }
}
