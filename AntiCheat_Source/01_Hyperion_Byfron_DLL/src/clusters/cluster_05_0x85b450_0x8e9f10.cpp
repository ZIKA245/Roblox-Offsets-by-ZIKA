// Subsystem: Internal Routines Cluster 05 (0x85b450 .. 0x8e9f10)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : Catch@7fffa4fcb450  |  RVA: 0x85b450  |  Size: 279 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4fcb450(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 0x1560) = 0xc000009a;
  *(uint64_t *)(param_2 + 600) = *(uint64_t *)(param_2 + 0xea0);
  *(uint64_t *)(param_2 + 0x1540) = (uint64_t)*(uint32_t *)(param_2 + 0x1280);
  return &UNK_7fffa4f76497;
}


// ============================================================================
// Function : Catch@7fffa4fcb570  |  RVA: 0x85b570  |  Size: 279 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4fcb570(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 0x1278) = 0xc000009a;
  *(uint64_t *)(param_2 + 600) = *(uint64_t *)(param_2 + 0xea0);
  *(uint64_t *)(param_2 + 0x1540) = (uint64_t)*(uint32_t *)(param_2 + 0x1280);
  return &UNK_7fffa4f81f60;
}


// ============================================================================
// Function : Unwind@7fffa4fcb690  |  RVA: 0x85b690  |  Size: 4128 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4fcb690(void) {
    /* +0x85b690 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x85b695 */ __asm { PUSH RBP }
    /* +0x85b696 */ __asm { PUSH RSI }
    /* +0x85b697 */ __asm { PUSH RBX }
    /* +0x85b698 */ __asm { PUSH R15 }
    /* +0x85b69a */ __asm { PUSH R12 }
    /* +0x85b69c */ __asm { PUSH RDI }
    /* +0x85b69d */ __asm { PUSH R13 }
    /* +0x85b69f */ __asm { PUSH R14 }
    /* +0x85b6a1 */ __asm { SUB RSP,0x108 }
    /* +0x85b6a8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x85b6af */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x85b6b6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM10 }
    /* +0x85b6bd */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM8 }
    /* +0x85b6c7 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM15 }
    /* +0x85b6d1 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM11 }
    /* +0x85b6db */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x85b6e4 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM9 }
    /* +0x85b6ee */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM6 }
    /* +0x85b6f7 */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM14 }
    /* +0x85b701 */ __asm { MOVDQA xmmword ptr [RSP + 0xf0],XMM12 }
    /* +0x85b70b */ __asm { MOV RSI,qword ptr [RBP + 0x1440] }
    /* +0x85b712 */ __asm { RDTSC }
    /* +0x85b714 */ __asm { SHL RDX,0x20 }
    /* +0x85b718 */ __asm { OR RDX,RAX }
    /* +0x85b71b */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0x85b725 */ __asm { IMUL RDX,RAX }
    /* +0x85b729 */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0x85b733 */ __asm { ADD RDX,RAX }
    /* +0x85b736 */ __asm { MOV RCX,RDX }
    /* +0x85b739 */ __asm { SHR RCX,0x3b }
    /* +0x85b73d */ __asm { MOV R8,RDX }
    /* +0x85b740 */ __asm { SHR R8,0x1b }
    /* +0x85b744 */ __asm { SHR RDX,0x2d }
    /* +0x85b748 */ __asm { XOR R8D,EDX }
    /* +0x85b74b */ __asm { ROR R8D,CL }
    /* +0x85b74e */ __asm { AND R8D,0x3 }
    /* +0x85b752 */ __asm { CMP R8D,0x2 }
    /* +0x85b756 */ __asm { JNC 0x7fffa4fcb834 }
    /* +0x85b75c */ __asm { MOV R10W,0xe698 }
    /* +0x85b761 */ __asm { XOR R10D,dword ptr [RBP + 0xec0] }
    /* +0x85b768 */ __asm { MOV RAX,qword ptr [RBP + 0x1740] }
    /* +0x85b76f */ __asm { ADD R10D,EAX }
    /* +0x85b772 */ __asm { XOR R10D,0x3684 }
    /* +0x85b779 */ __asm { MOVZX R10D,R10W }
    /* +0x85b77d */ __asm { CMP R8D,R10D }
    /* +0x85b780 */ __asm { JZ 0x7fffa4fcbbff }
    /* +0x85b786 */ __asm { MOV R10,0x0 }
    /* +0x85b78d */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x85b794 */ __asm { NOP }
    /* +0x85b795 */ __asm { MOV R10D,0x2b07928 }
    /* +0x85b79b */ __asm { MOV RAX,0xd478e8d63f92a00 }
    /* +0x85b7a5 */ __asm { CMP R10,RAX }
    /* +0x85b7a8 */ __asm { SETNZ DL }
    /* +0x85b7ab */ __asm { MOV R8D,0xa20b8741 }
    /* +0x85b7b1 */ __asm { XOR R8D,0xa715e81d }
    /* +0x85b7b8 */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85b7bf */ __asm { ROL R8D,CL }
    /* +0x85b7c2 */ __asm { XOR R8D,dword ptr [RBP + 0xe40] }
    /* +0x85b7c9 */ __asm { CMP R8,0x155a7299 }
    /* +0x85b7d0 */ __asm { SETZ CL }
    /* +0x85b7d3 */ __asm { CMP CL,DL }
    /* +0x85b7d5 */ __asm { JNZ 0x7fffa4fcc874 }
    /* +0x85b7db */ __asm { MOV R8D,dword ptr [R10 + 0x7d4d899c] }
    /* +0x85b7e2 */ __asm { MOV RAX,0x5555555555555556 }
    /* +0x85b7ec */ __asm { IMUL R8,RAX }
    /* +0x85b7f0 */ __asm { MOV RAX,0x5555555555555555 }
    /* +0x85b7fa */ __asm { CMP R8,RAX }
    /* +0x85b7fd */ __asm { JA 0x7fffa4fcbf3e }
    /* +0x85b803 */ __asm { LEA R10,[0x7fffa47c4907] }
    /* +0x85b80a */ __asm { MOV RAX,-0x8241587d9686b57 }
    /* +0x85b814 */ __asm { CMP R10,RAX }
    /* +0x85b817 */ __asm { NOP }
    /* +0x85b818 */ __asm { NOP }
    /* +0x85b819 */ __asm { NOP }
    /* +0x85b81a */ __asm { NOP }
    /* +0x85b81b */ __asm { NOP }
    /* +0x85b81c */ __asm { NOP }
    /* +0x85b81d */ __asm { NOP }
    /* +0x85b81e */ __asm { NOP }
    /* +0x85b81f */ __asm { NOP }
    /* +0x85b820 */ __asm { NOP }
    /* +0x85b821 */ __asm { MOV qword ptr [RBP + 0xc10],RDX }
    /* +0x85b828 */ __asm { MOV EAX,dword ptr [R10 + -0x78cf] }
    /* +0x85b82f */ __asm { JMP 0x7fffa4fcc75f }
    /* +0x85b834 */ __asm { CMP R8D,0x3 }
    /* +0x85b838 */ __asm { JZ 0x7fffa4fcbcd2 }
    /* +0x85b83e */ __asm { LEA R10,[0x7fffa47c1f12] }
    /* +0x85b845 */ __asm { MOV RAX,0x5fde6ad9d33e4404 }
    /* +0x85b84f */ __asm { CMP R10,RAX }
    /* +0x85b852 */ __asm { JZ 0x7fffa4fcc87c }
    /* +0x85b858 */ __asm { MOV R8D,0x9e13ef96 }
    /* +0x85b85e */ __asm { MOVZX EDX,uint8_t ptr [R10 + -0x5885] }
    /* +0x85b866 */ __asm { XOR R8D,dword ptr [RBP + 0xff0] }
    /* +0x85b86d */ __asm { IMUL R8D,R8D,-0x76e013bd }
    /* +0x85b874 */ __asm { XOR R8D,0xd838fa26 }
    /* +0x85b87b */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85b882 */ __asm { ROR R8D,CL }
    /* +0x85b885 */ __asm { MOVZX ECX,uint8_t ptr [R10 + RDX*0x4 + -0x5875] }
    /* +0x85b88e */ __asm { ROL CL,0x4 }
    /* +0x85b891 */ __asm { MOV uint8_t ptr [RBP + 0xc10],CL }
    /* +0x85b897 */ __asm { MOVZX ECX,uint8_t ptr [R10 + RDX*0x4 + -0x5874] }
    /* +0x85b8a0 */ __asm { ROL CL,0x4 }
    /* +0x85b8a3 */ __asm { MOV uint8_t ptr [RBP + 0xc11],CL }
    /* +0x85b8a9 */ __asm { MOVZX ECX,uint8_t ptr [R10 + RDX*0x4 + -0x5873] }
    /* +0x85b8b2 */ __asm { ROL CL,0x4 }
    /* +0x85b8b5 */ __asm { MOV uint8_t ptr [RBP + 0xc12],CL }
    /* +0x85b8bb */ __asm { MOVZX ECX,uint8_t ptr [R10 + RDX*0x4 + -0x5872] }
    /* +0x85b8c4 */ __asm { ROL CL,0x4 }
    /* +0x85b8c7 */ __asm { MOV uint8_t ptr [RBP + 0xc13],CL }
    /* +0x85b8cd */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x85b8d3 */ __asm { XOR R10D,dword ptr [RBP + 0xc10] }
    /* +0x85b8da */ __asm { MOVZX ECX,uint8_t ptr [R8] }
    /* +0x85b8de */ __asm { MOVD XMM4,R10D }
    /* +0x85b8e3 */ __asm { RDTSC }
    /* +0x85b8e5 */ __asm { SHL RDX,0x20 }
    /* +0x85b8e9 */ __asm { OR RDX,RAX }
    /* +0x85b8ec */ __asm { MOV R8D,0x1 }
    /* +0x85b8f2 */ __asm { SHL R8D,CL }
    /* +0x85b8f5 */ __asm { MOVD XMM2,R8D }
    /* +0x85b8fa */ __asm { PAND XMM2,XMM4 }
    /* +0x85b8fe */ __asm { MOVD R8D,XMM2 }
    /* +0x85b903 */ __asm { TEST R8D,R8D }
    /* +0x85b906 */ __asm { JZ 0x7fffa4fcc213 }
    /* +0x85b90c */ __asm { MOV R8,-0x14c83b66ca9b0b8f }
    /* +0x85b916 */ __asm { MOV RAX,-0x5a46117eacb056b3 }
    /* +0x85b920 */ __asm { IMUL RDX,RAX }
    /* +0x85b924 */ __asm { MOV R10D,0xa5ee8158 }
    /* +0x85b92a */ __asm { IMUL R10D,R10D,-0x1593e3bb }
    /* +0x85b931 */ __asm { MOV R9,qword ptr [RBP + 0x1740] }
    /* +0x85b938 */ __asm { ADD R10D,R9D }
    /* +0x85b93b */ __asm { XOR R8,R9 }
    /* +0x85b93e */ __asm { MOV RCX,qword ptr [RBP + 0x1d0] }
    /* +0x85b945 */ __asm { ROL R8,CL }
    /* +0x85b948 */ __asm { XOR R8,0x7d7c0250 }
    /* +0x85b94f */ __asm { ROL R8,0x2c }
    /* +0x85b953 */ __asm { ADD R8,RDX }
    /* +0x85b956 */ __asm { MOV RDX,R8 }
    /* +0x85b959 */ __asm { SHR RDX,0x2d }
    /* +0x85b95d */ __asm { MOVD XMM4,EDX }
    /* +0x85b961 */ __asm { MOVQ XMM2,R8 }
    /* +0x85b966 */ __asm { SHR R8,0x3b }
    /* +0x85b96a */ __asm { PSRLQ XMM2,0x1b }
    /* +0x85b96f */ __asm { PXOR XMM2,XMM4 }
    /* +0x85b973 */ __asm { MOVD EAX,XMM2 }
    /* +0x85b977 */ __asm { MOV ECX,R8D }
    /* +0x85b97a */ __asm { ROR EAX,CL }
    /* +0x85b97c */ __asm { NOT R10D }
    /* +0x85b97f */ __asm { MOV dword ptr [RBP + 0xc10],R10D }
    /* +0x85b986 */ __asm { MOV R8D,dword ptr [RBP + 0xc10] }
    /* +0x85b98d */ __asm { CMP EAX,0x10ea177 }
    /* +0x85b992 */ __asm { JA 0x7fffa4fcbb4a }
    /* +0x85b998 */ __asm { MOV dword ptr [RBP + 0xc10],0x1f1caa53 }
    /* +0x85b9a2 */ __asm { MOV R8D,dword ptr [RBP + 0xc10] }
    /* +0x85b9a9 */ __asm { MOV RAX,-0x4eff5990dfaa1f5d }
    /* +0x85b9b3 */ __asm { XOR RAX,qword ptr [RBP + 0xe50] }
    /* +0x85b9ba */ __asm { ADD RAX,qword ptr [RBP + 0x1740] }
    /* +0x85b9c1 */ __asm { MOV R10D,0xdeb7e362 }
    /* +0x85b9c7 */ __asm { ROL RAX,0xd }
    /* +0x85b9cb */ __asm { IMUL RAX,RAX,-0xc29d8f1 }
    /* +0x85b9d2 */ __asm { CMP R10,RAX }
    /* +0x85b9d5 */ __asm { JZ 0x7fffa4fcc884 }
    /* +0x85b9db */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x85b9e2 */ __asm { MOV RDX,0x0 }
    /* +0x85b9e9 */ __asm { NOP }
    /* +0x85b9ea */ __asm { MOV RAX,0x55555b115dab73b5 }
    /* +0x85b9f4 */ __asm { XOR RAX,qword ptr [RBP + 0xe40] }
    /* +0x85b9fb */ __asm { ROL RAX,0x32 }
    /* +0x85b9ff */ __asm { XOR RAX,qword ptr [RBP + 0x1740] }
    /* +0x85ba06 */ __asm { MOV R8D,dword ptr [R10 + -0x5eb9e09e] }
    /* +0x85ba0d */ __asm { MOV RDX,0x5555555555555556 }
    /* +0x85ba17 */ __asm { IMUL R8,RDX }
    /* +0x85ba1b */ __asm { CMP R8,RAX }
    /* +0x85ba1e */ __asm { JNC 0x7fffa4fcbb4a }
    /* +0x85ba24 */ __asm { PXOR XMM4,XMM4 }
    /* +0x85ba28 */ __asm { MOVDQA xmmword ptr [RBP + 0xc10],XMM4 }
    /* +0x85ba30 */ __asm { MOV dword ptr [RBP],0xd8651742 }
    /* +0x85ba37 */ __asm { MOV R8D,dword ptr [RBP] }
    /* +0x85ba3b */ __asm { CMP R8D,0x1350cef6 }
    /* +0x85ba42 */ __asm { JBE 0x7fffa4fcc893 }
    /* +0x85ba48 */ __asm { PUSHFQ }
    /* +0x85ba49 */ __asm { POP R11 }
    /* +0x85ba4b */ __asm { TEST R11D,0x100 }
    /* +0x85ba52 */ __asm { NOP }
    /* +0x85ba53 */ __asm { NOP }
    /* +0x85ba54 */ __asm { NOP }
    /* +0x85ba55 */ __asm { NOP }
    /* +0x85ba56 */ __asm { NOP }
    /* +0x85ba57 */ __asm { NOP }
    /* +0x85ba58 */ __asm { NOP }
    /* +0x85ba59 */ __asm { NOP }
    /* +0x85ba5a */ __asm { NOP }
    /* +0x85ba5b */ __asm { NOP }
    /* +0x85ba5c */ __asm { NOP }
    /* +0x85ba5d */ __asm { MOV R8D,0x2e46b062 }
    /* +0x85ba63 */ __asm { MOV dword ptr [RBP + 0xc10],0x0 }
    /* +0x85ba6d */ __asm { PUSHFQ }
    /* +0x85ba6e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x85ba76 */ __asm { POPFQ }
    /* +0x85ba77 */ __asm { MOV RDX,qword ptr [RBP + 0x1740] }
    /* +0x85ba7e */ __asm { XOR R8D,EDX }
    /* +0x85ba81 */ __asm { ADD R8D,0xdabdc965 }
    /* +0x85ba88 */ __asm { ROL R8D,0xa }
    /* +0x85ba8c */ __asm { ADD R8D,dword ptr [RBP + 0x1610] }
    /* +0x85ba93 */ __asm { MOV dword ptr [RBP],R8D }
    /* +0x85ba97 */ __asm { MOV R8D,dword ptr [RBP] }
    /* +0x85ba9b */ __asm { CMP R8D,0x7f8a1c0c }
    /* +0x85baa2 */ __asm { JNC 0x7fffa4fcc89b }
    /* +0x85baa8 */ __asm { MOV dword ptr [RBP],0xf2d99dee }
    /* +0x85baaf */ __asm { MOV R8D,dword ptr [RBP] }
    /* +0x85bab3 */ __asm { TEST R8B,0x1 }
    /* +0x85bab7 */ __asm { JNZ 0x7fffa4fcc8a3 }
    /* +0x85babd */ __asm { LEA R10,[0x7fffa47bc98c] }
    /* +0x85bac4 */ __asm { MOV RAX,0x4039be6e7e602cb4 }
    /* +0x85bace */ __asm { CMP R10,RAX }
    /* +0x85bad1 */ __asm { JNZ 0x7fffa4fcbad4 }
    /* +0x85bad3 */ __asm { POP RBX }
    /* +0x85bad4 */ __asm { MOV R11,qword ptr [RBP + 0xe88] }
    /* +0x85badb */ __asm { MOVD XMM4,R11D }
    /* +0x85bae0 */ __asm { MOV R12,qword ptr [RBP + 0xfb8] }
    /* +0x85bae7 */ __asm { OR R12D,0x1 }
    /* +0x85baeb */ __asm { MOV R8W,0xb202 }
    /* +0x85baf0 */ __asm { MOV AX,0xb83c }
    /* +0x85baf4 */ __asm { MOV ECX,EDX }
    /* +0x85baf6 */ __asm { SUB ECX,EAX }
    /* +0x85baf8 */ __asm { MOV qword ptr [RBP],RDX }
    /* +0x85bafc */ __asm { ADD ECX,0x34fa }
    /* +0x85bb02 */ __asm { MOVZX R9D,CX }
    /* +0x85bb06 */ __asm { MOV EAX,dword ptr [R10 + -0x4c4] }
    /* +0x85bb0d */ __asm { IMUL R8D,R12D }
    /* +0x85bb11 */ __asm { ADD R8D,0xffff9bf6 }
    /* +0x85bb18 */ __asm { MOVD XMM2,R8D }
    /* +0x85bb1d */ __asm { PMULLW XMM2,XMM4 }
    /* +0x85bb21 */ __asm { PEXTRW EDX,XMM2,0x0 }
    /* +0x85bb26 */ __asm { MOV R8W,0xfe1e }
    /* +0x85bb2b */ __asm { IMUL R8D,R11D }
    /* +0x85bb2f */ __asm { XOR R8D,0x5a59 }
    /* +0x85bb36 */ __asm { ADD R8D,dword ptr [RBP + 0xe20] }
    /* +0x85bb3d */ __asm { MOVSX R10,R8W }
    /* +0x85bb41 */ __asm { LEA R8,[RBP + 0xc10] }
    /* +0x85bb48 */ __asm { SYSCALL }
    /* +0x85bb4a */ __asm { MOV EAX,0xd3eb16f2 }
    /* +0x85bb4f */ __asm { IMUL EAX,dword ptr [RBP + 0xe60] }
    /* +0x85bb56 */ __asm { MOV R8D,0xd9e26798 }
    /* +0x85bb5c */ __asm { MOV EDX,0xb085126c }
    /* +0x85bb61 */ __asm { SUB EDX,dword ptr [RBP + 0xed8] }
    /* +0x85bb67 */ __asm { ADD EAX,0x6cdf0374 }
    /* +0x85bb6c */ __asm { ADD R8D,0xe5b8c325 }
    /* +0x85bb73 */ __asm { XOR R8D,0x9da87dcf }
    /* +0x85bb7a */ __asm { LEA R10,[0x7fffa477ff69] }
    /* +0x85bb81 */ __asm { MOVQ XMM4,R10 }
    /* +0x85bb86 */ __asm { MOV R11,qword ptr [RBP + 0x1740] }
    /* +0x85bb8d */ __asm { XOR EDX,R11D }
    /* +0x85bb90 */ __asm { ROL EDX,0x1 }
    /* +0x85bb92 */ __asm { XOR RDX,R10 }
    /* +0x85bb95 */ __asm { CDQE }
    /* +0x85bb97 */ __asm { MOV ECX,0x91e11d34 }
    /* +0x85bb9c */ __asm { SUB ECX,R11D }
    /* +0x85bb9f */ __asm { XOR ECX,0xe98b1b4d }
    /* +0x85bba5 */ __asm { IMUL ECX,ECX,0x665739f1 }
    /* +0x85bbab */ __asm { NOT ECX }
    /* +0x85bbad */ __asm { MOVD XMM2,ECX }
    /* +0x85bbb1 */ __asm { PSUBQ XMM4,XMM2 }
    /* +0x85bbb5 */ __asm { MOVQ R9,XMM4 }
    /* +0x85bbba */ __asm { SUB R8D,R11D }
    /* +0x85bbbd */ __asm { CMP RAX,R8 }
    /* +0x85bbc0 */ __asm { CMOVNC R9,RDX }
    /* +0x85bbc4 */ __asm { ADD R9,-0x3887a607 }
    /* +0x85bbcb */ __asm { MOV RAX,-0x57d1b5449c1b7a7 }
    /* +0x85bbd5 */ __asm { CMP R9,RAX }
    /* +0x85bbd8 */ __asm { NOP }
    /* +0x85bbd9 */ __asm { NOP }
    /* +0x85bbda */ __asm { NOP }
    /* +0x85bbdb */ __asm { NOP }
    /* +0x85bbdc */ __asm { NOP }
    /* +0x85bbdd */ __asm { NOP }
    /* +0x85bbde */ __asm { NOP }
    /* +0x85bbdf */ __asm { NOP }
    /* +0x85bbe0 */ __asm { NOP }
    /* +0x85bbe1 */ __asm { NOP }
    /* +0x85bbe2 */ __asm { NOP }
    /* +0x85bbe3 */ __asm { NOP }
    /* +0x85bbe4 */ __asm { NOP }
    /* +0x85bbe5 */ __asm { NOP }
    /* +0x85bbe6 */ __asm { NOP }
    /* +0x85bbe7 */ __asm { NOP }
    /* +0x85bbe8 */ __asm { NOP }
    /* +0x85bbff */ __asm { LEA R10,[0x7fffa47b67de] }
    /* +0x85bc06 */ __asm { MOV RAX,0x7d8bcd6134d98ad1 }
    /* +0x85bc10 */ __asm { CMP R10,RAX }
    /* +0x85bc13 */ __asm { JZ 0x7fffa4fcc8ae }
    /* +0x85bc19 */ __asm { MOV RDX,0x0 }
    /* +0x85bc20 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x85bc27 */ __asm { NOP }
    /* +0x85bc28 */ __asm { MOVZX R8D,uint8_t ptr [R10 + 0x5f6b] }
    /* +0x85bc30 */ __asm { MOVZX ECX,uint8_t ptr [R10 + R8*0x4 + 0x5f71] }
    /* +0x85bc39 */ __asm { NOT CL }
    /* +0x85bc3b */ __asm { ROL CL,0x5 }
    /* +0x85bc3e */ __asm { MOV uint8_t ptr [RBP + 0xc10],CL }
    /* +0x85bc44 */ __asm { MOVZX ECX,uint8_t ptr [R10 + R8*0x4 + 0x5f72] }
    /* +0x85bc4d */ __asm { NOT CL }
    /* +0x85bc4f */ __asm { ROL CL,0x5 }
    /* +0x85bc52 */ __asm { MOV uint8_t ptr [RBP + 0xc11],CL }
    /* +0x85bc58 */ __asm { MOVZX ECX,uint8_t ptr [R10 + R8*0x4 + 0x5f73] }
    /* +0x85bc61 */ __asm { NOT CL }
    /* +0x85bc63 */ __asm { ROL CL,0x5 }
    /* +0x85bc66 */ __asm { MOV uint8_t ptr [RBP + 0xc12],CL }
    /* +0x85bc6c */ __asm { MOVZX ECX,uint8_t ptr [R10 + R8*0x4 + 0x5f74] }
    /* +0x85bc75 */ __asm { NOT CL }
    /* +0x85bc77 */ __asm { ROL CL,0x5 }
    /* +0x85bc7a */ __asm { MOV uint8_t ptr [RBP + 0xc13],CL }
    /* +0x85bc80 */ __asm { MOV R8D,0x9102c3cc }
    /* +0x85bc86 */ __asm { XOR R8D,dword ptr [RBP + 0xc10] }
    /* +0x85bc8d */ __asm { BT R8D,R8D }
    /* +0x85bc91 */ __asm { JNC 0x7fffa4fcc4b2 }
    /* +0x85bc97 */ __asm { LEA R10,[0x7fffa47bdf9f] }
    /* +0x85bc9e */ __asm { MOV RAX,0x718c348760fa53b3 }
    /* +0x85bca8 */ __asm { CMP R10,RAX }
    /* +0x85bcab */ __asm { NOP }
    /* +0x85bcac */ __asm { NOP }
    /* +0x85bcad */ __asm { NOP }
    /* +0x85bcae */ __asm { NOP }
    /* +0x85bcaf */ __asm { NOP }
    /* +0x85bcb0 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x85bcb7 */ __asm { NOP }
    /* +0x85bcb8 */ __asm { MOV RDX,0x0 }
    /* +0x85bcbf */ __asm { MOV qword ptr [RBP + 0xc10],RDX }
    /* +0x85bcc6 */ __asm { MOV EAX,dword ptr [R10 + -0x1a73] }
    /* +0x85bccd */ __asm { JMP 0x7fffa4fcc75f }
    /* +0x85bcd2 */ __asm { RDTSC }
    /* +0x85bcd4 */ __asm { SHL RDX,0x20 }
    /* +0x85bcd8 */ __asm { OR RDX,RAX }
    /* +0x85bcdb */ __asm { MOV RAX,-0x5b596a0ee0e87373 }
    /* +0x85bce5 */ __asm { IMUL RDX,RAX }
    /* +0x85bce9 */ __asm { MOV RAX,-0x7e89b8255e5983de }
    /* +0x85bcf3 */ __asm { ADD RDX,RAX }
    /* +0x85bcf6 */ __asm { MOV R8,RDX }
    /* +0x85bcf9 */ __asm { SHR R8,0x2d }
    /* +0x85bcfd */ __asm { MOV RCX,RDX }
    /* +0x85bd00 */ __asm { SHR RCX,0x3b }
    /* +0x85bd04 */ __asm { SHR RDX,0x1b }
    /* +0x85bd08 */ __asm { XOR R8D,EDX }
    /* +0x85bd0b */ __asm { ROR R8D,CL }
    /* +0x85bd0e */ __asm { MOV dword ptr [RBP + 0xc10],0xc75c9851 }
    /* +0x85bd18 */ __asm { MOV R10D,dword ptr [RBP + 0xc10] }
    /* +0x85bd1f */ __asm { TEST R10B,0x1 }
    /* +0x85bd23 */ __asm { NOP }
    /* +0x85bd24 */ __asm { NOP }
    /* +0x85bd25 */ __asm { NOP }
    /* +0x85bd26 */ __asm { NOP }
    /* +0x85bd27 */ __asm { NOP }
    /* +0x85bd28 */ __asm { NOP }
    /* +0x85bd29 */ __asm { NOP }
    /* +0x85bd2a */ __asm { CMP R8D,0x10b3940 }
    /* +0x85bd31 */ __asm { JA 0x7fffa4fcbf12 }
    /* +0x85bd37 */ __asm { PUSHFQ }
    /* +0x85bd38 */ __asm { POP R11 }
    /* +0x85bd3a */ __asm { TEST R11D,0x100 }
    /* +0x85bd41 */ __asm { NOP }
    /* +0x85bd42 */ __asm { NOP }
    /* +0x85bd43 */ __asm { NOP }
    /* +0x85bd44 */ __asm { NOP }
    /* +0x85bd45 */ __asm { NOP }
    /* +0x85bd46 */ __asm { NOP }
    /* +0x85bd47 */ __asm { NOP }
    /* +0x85bd48 */ __asm { NOP }
    /* +0x85bd49 */ __asm { NOP }
    /* +0x85bd4a */ __asm { NOP }
    /* +0x85bd4b */ __asm { MOV dword ptr [RBP + 0xc10],0xcbeff0ef }
    /* +0x85bd55 */ __asm { MOV R8D,dword ptr [RBP + 0xc10] }
    /* +0x85bd5c */ __asm { MOV DX,0x8920 }
    /* +0x85bd60 */ __asm { MOV R10,qword ptr [RBP + 0x1200] }
    /* +0x85bd67 */ __asm { ADD R10D,EDX }
    /* +0x85bd6a */ __asm { ADD R10D,-0x14 }
    /* +0x85bd6e */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85bd75 */ __asm { ROR R10W,CL }
    /* +0x85bd79 */ __asm { MOVZX R10D,R10W }
    /* +0x85bd7d */ __asm { CMP R8D,R10D }
    /* +0x85bd80 */ __asm { JGE 0x7fffa4fcc8b7 }
    /* +0x85bd86 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x85bd8d */ __asm { NOP }
    /* +0x85bd8e */ __asm { MOV R10,0x0 }
    /* +0x85bd95 */ __asm { PXOR XMM4,XMM4 }
    /* +0x85bd99 */ __asm { MOVDQA xmmword ptr [RBP + 0xc10],XMM4 }
    /* +0x85bda1 */ __asm { MOV RAX,qword ptr [RBP + 0x1050] }
    /* +0x85bda8 */ __asm { CMP qword ptr [RBP + 0x12f0],RAX }
    /* +0x85bdaf */ __asm { JZ 0x7fffa4fcc8bf }
    /* +0x85bdb5 */ __asm { MOV dword ptr [RBP + 0xc10],0x0 }
    /* +0x85bdbf */ __asm { PUSHFQ }
    /* +0x85bdc0 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x85bdc8 */ __asm { POPFQ }
    /* +0x85bdc9 */ __asm { MOV dword ptr [RBP],0xe9f64efb }
    /* +0x85bdd0 */ __asm { MOV EAX,dword ptr [RBP] }
    /* +0x85bdd3 */ __asm { XOR R8D,R8D }
    /* +0x85bdd6 */ __asm { XOR R10D,R10D }
    /* +0x85bdd9 */ __asm { TEST EAX,EAX }
    /* +0x85bddb */ __asm { SETZ R8B }
    /* +0x85bddf */ __asm { MOV EAX,0xfd65f8cd }
    /* +0x85bde4 */ __asm { SETS R10B }
    /* +0x85bde8 */ __asm { MOV R12,qword ptr [RBP + 0x1380] }
    /* +0x85bdef */ __asm { OR R12D,0x1 }
    /* +0x85bdf3 */ __asm { IMUL EDX,EAX,-0x6e526efb }
    /* +0x85bdf9 */ __asm { MOV R11,qword ptr [RBP + 0x1740] }
    /* +0x85be00 */ __asm { SUB EDX,R11D }
    /* +0x85be03 */ __asm { ADD EDX,0x2eb8ba77 }
    /* +0x85be09 */ __asm { MOV EAX,0x3bf2ffd3 }
    /* +0x85be0e */ __asm { MOV RCX,qword ptr [RBP + 0x1048] }
    /* +0x85be15 */ __asm { ROL EDX,CL }
    /* +0x85be17 */ __asm { IMUL R9D,EAX,-0x59299021 }
    /* +0x85be1e */ __asm { MOV ECX,R11D }
    /* +0x85be21 */ __asm { ROR R9D,CL }
    /* +0x85be24 */ __asm { IMUL R9D,R12D }
    /* +0x85be28 */ __asm { NOT R9D }
    /* +0x85be2b */ __asm { CMP R9,RDX }
    /* +0x85be2e */ __asm { CMOVG R8D,R10D }
    /* +0x85be32 */ __asm { TEST R8B,R8B }
    /* +0x85be35 */ __asm { JZ 0x7fffa4fcc8c7 }
    /* +0x85be3b */ __asm { MOV R10,0x0 }
    /* +0x85be42 */ __asm { NOP }
    /* +0x85be43 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x85be4a */ __asm { MOV dword ptr [RBP],0x308a0100 }
    /* +0x85be51 */ __asm { MOV R8D,dword ptr [RBP] }
    /* +0x85be55 */ __asm { LEA RAX,[0x7fffa4783395] }
    /* +0x85be5c */ __asm { MOV R8,-0x3014b87c8144a945 }
    /* +0x85be66 */ __asm { CMP RAX,R8 }
    /* +0x85be69 */ __asm { JZ 0x7fffa4fcc8cf }
    /* +0x85be6f */ __asm { MOV R10D,0xc4149222 }
    /* +0x85be75 */ __asm { MOV R8,qword ptr [RBP + 0xe40] }
    /* +0x85be7c */ __asm { ADD R8D,0x5149 }
    /* +0x85be83 */ __asm { MOV R9,qword ptr [RBP + 0x1740] }
    /* +0x85be8a */ __asm { SUB R10D,R9D }
    /* +0x85be8d */ __asm { IMUL EDX,R10D,0x5005c7b1 }
    /* +0x85be94 */ __asm { NOT EDX }
    /* +0x85be96 */ __asm { MOV qword ptr [RBP],R10 }
    /* +0x85be9a */ __asm { MOV R10W,0x2a0f }
    /* +0x85be9f */ __asm { MOVD XMM4,R10D }
    /* +0x85bea4 */ __asm { MOV EAX,dword ptr [RDX + RAX*0x1 + 0x58] }
    /* +0x85bea8 */ __asm { MOV R11W,0x9a62 }
    /* +0x85bead */ __asm { MOV R10D,0xfaae6290 }
    /* +0x85beb3 */ __asm { MOV RDX,qword ptr [RBP + 0x1310] }
    /* +0x85beba */ __asm { IMUL EDX,R10D }
    /* +0x85bebe */ __asm { ADD EDX,0x7ee65b4f }
    /* +0x85bec4 */ __asm { MOV RCX,qword ptr [RBP + 0xfa8] }
    /* +0x85becb */ __asm { ROR EDX,CL }
    /* +0x85becd */ __asm { MOVD XMM2,R8D }
    /* +0x85bed2 */ __asm { PADDW XMM2,XMM4 }
    /* +0x85bed6 */ __asm { ROL EDX,0x1d }
    /* +0x85bed9 */ __asm { MOVSXD R10,EDX }
    /* +0x85bedc */ __asm { MOV R8D,R9D }
    /* +0x85bedf */ __asm { XOR R8D,R11D }
    /* +0x85bee2 */ __asm { IMUL R8D,R8D,-0x1b65 }
    /* +0x85bee9 */ __asm { MOV RCX,qword ptr [RBP + 0xfb8] }
    /* +0x85bef0 */ __asm { ROL R8W,CL }
    /* +0x85bef4 */ __asm { MOVZX R9D,R8W }
    /* +0x85bef8 */ __asm { MOVD R8D,XMM2 }
    /* +0x85befd */ __asm { IMUL R8D,dword ptr [RBP + 0xe88] }
    /* +0x85bf05 */ __asm { MOVZX EDX,R8W }
    /* +0x85bf09 */ __asm { LEA R8,[RBP + 0xc10] }
    /* +0x85bf10 */ __asm { SYSCALL }
    /* +0x85bf12 */ __asm { LEA R10,[0x7fffa477d063] }
    /* +0x85bf19 */ __asm { MOV RAX,0x1ca3a77029ff0e2b }
    /* +0x85bf23 */ __asm { CMP R10,RAX }
    /* +0x85bf26 */ __asm { NOP }
    /* +0x85bf27 */ __asm { NOP }
    /* +0x85bf28 */ __asm { NOP }
    /* +0x85bf29 */ __asm { NOP }
    /* +0x85bf2a */ __asm { NOP }
    /* +0x85bf2b */ __asm { MOV qword ptr [RBP + 0xc10],RDX }
    /* +0x85bf32 */ __asm { MOV EAX,dword ptr [R10 + 0x7df9] }
    /* +0x85bf39 */ __asm { JMP 0x7fffa4fcc75f }
    /* +0x85bf3e */ __asm { RDTSC }
    /* +0x85bf40 */ __asm { SHL RDX,0x20 }
    /* +0x85bf44 */ __asm { OR RDX,RAX }
    /* +0x85bf47 */ __asm { MOV RAX,-0x583f2dd720db9bdb }
    /* +0x85bf51 */ __asm { IMUL RDX,RAX }
    /* +0x85bf55 */ __asm { MOV RAX,0x3157a6e43795106e }
    /* +0x85bf5f */ __asm { ADD RDX,RAX }
    /* +0x85bf62 */ __asm { MOV R9,RDX }
    /* +0x85bf65 */ __asm { SHR R9,0x1b }
    /* +0x85bf69 */ __asm { MOV R10D,0xa6350299 }
    /* +0x85bf6f */ __asm { MOV R8,RDX }
    /* +0x85bf72 */ __asm { SHR R8,0x3b }
    /* +0x85bf76 */ __asm { MOV EAX,0x74342b49 }
    /* +0x85bf7b */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85bf82 */ __asm { ADD EAX,ECX }
    /* +0x85bf84 */ __asm { IMUL R10D,R10D,-0x25f7001 }
    /* +0x85bf8b */ __asm { ROR R10D,CL }
    /* +0x85bf8e */ __asm { XOR R10D,dword ptr [RBP + 0x1608] }
    /* +0x85bf95 */ __asm { MOVSXD R10,R10D }
    /* +0x85bf98 */ __asm { MOV ECX,0x289e2930 }
    /* +0x85bf9d */ __asm { SUB ECX,EAX }
    /* +0x85bf9f */ __asm { MOV R11,qword ptr [RBP + 0xe60] }
    /* +0x85bfa6 */ __asm { IMUL R11D,ECX }
    /* +0x85bfaa */ __asm { SHR RDX,0x2d }
    /* +0x85bfae */ __asm { MOV EAX,R9D }
    /* +0x85bfb1 */ __asm { XOR EAX,EDX }
    /* +0x85bfb3 */ __asm { IMUL EDX,R9D }
    /* +0x85bfb7 */ __asm { CMP R11,R10 }
    /* +0x85bfba */ __asm { CMOVNZ EDX,EAX }
    /* +0x85bfbd */ __asm { MOV ECX,R8D }
}


// ============================================================================
// Function : Unwind@7fffa4fcc970  |  RVA: 0x85c970  |  Size: 176 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcc970(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1690) & 0x1f;
  (*(code *)((int64_t)
             (int)(~(0x130f8839 << bVar2 | 0x130f8839U >> 0x20 - bVar2) +
                  (int)*(uint64_t *)(param_2 + 0x17c0)) + 0x7fffa562e017))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Catch@7fffa4fcca20  |  RVA: 0x85ca20  |  Size: 242 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4fcca20(void)

{
  return &UNK_7fffa4fc6c05;
}


// ============================================================================
// Function : Unwind@7fffa4fccb20  |  RVA: 0x85cb20  |  Size: 316 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fccb20(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x10c0) != 0) {
    uVar2 = *(uint32_t *)(param_2 + 0x2c8) ^ 0x10e3070d;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x17c0) & 0x1f;
    (*(code *)(&UNK_7fffa50909ab +
              (int)((uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) * 0x7ab30425 + 0x552240ee)))
              (*(int64_t *)(param_2 + 0x10c0));
  }
  *(uint64_t *)(param_2 + 0x1558) = *(uint64_t *)(param_2 + 600);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fccc60  |  RVA: 0x85cc60  |  Size: 397 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fccc60(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint16_t uVar3;
  
  if (*(char *)(param_2 + 0x300) == '\x01') {
    if (0xf < *(uint64_t *)(param_2 + 0x2f8)) {
      uVar3 = (short)*(uint32_t *)(param_2 + 0xf08) * -0x69f4 ^ 0x699e;
      bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x13f8) & 0xf;
      pcVar2 = (code *)((int64_t)
                        (short)((uint16_t)*(uint64_t *)(param_2 + 0x1280) ^
                               (uVar3 << bVar1 | uVar3 >> 0x10 - bVar1)) + 0x7fffa568d056);
      (*pcVar2)(*(uint64_t *)(param_2 + 0x1280),pcVar2,
                *(uint64_t *)(param_2 + 0x2e0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x2e0),
                *(uint64_t *)(param_2 + 0x17c0));
    }
    *(uint64_t *)(param_2 + 0x2f0) = 0;
    *(uint64_t *)(param_2 + 0x2f8) = 0xf;
    *(uint8_t *)(param_2 + 0x2e0) = 0;
  }
  *(uint64_t *)(param_2 + 0x1558) = *(uint64_t *)(param_2 + 600);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fccdf0  |  RVA: 0x85cdf0  |  Size: 177 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fccdf0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  
  uVar2 = (int)*(uint64_t *)(param_2 + 0xf58) + 0x9e3e78ea;
  (*(code *)((int64_t)
             (int)((uVar2 * 0x400000 | uVar2 >> 10) - (int)*(uint64_t *)(param_2 + 0x17c0)) +
            0x7fffa562e1b0))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcceb0  |  RVA: 0x85ceb0  |  Size: 464 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcceb0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  lVar5 = (int64_t)
          (int)((*(int *)(param_2 + 0x1688) + 0x864c59b7U ^ (uint32_t)*(uint64_t *)(param_2 + 0x17c0))
               * -0x73ce906f);
  uVar6 = (uint64_t)
          *(uint8_t *)((int64_t)
                    (~(*(int *)(param_2 + 0x1390) * -0x7a01831a) + *(int *)(param_2 + 0xf58)) +
                   0x7fffa479076a);
  bVar1 = *(uint8_t *)(lVar5 + 0x7fffa478ea1a + uVar6 * 8);
  bVar2 = *(uint8_t *)(lVar5 + 0x7fffa478ea1b + uVar6 * 8);
  bVar3 = *(uint8_t *)(lVar5 + 0x7fffa478ea15 + uVar6 * 8);
  bVar4 = *(uint8_t *)(lVar5 + 0x7fffa478ea17 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc93) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = *(uint8_t *)(lVar5 + 0x7fffa478ea19 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc95) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = *(uint8_t *)(lVar5 + 0x7fffa478ea14 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc90) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = *(uint8_t *)(lVar5 + 0x7fffa478ea16 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc92) = bVar4 << 2 | bVar4 >> 6;
  *(uint8_t *)(param_2 + 0xc97) = bVar2 << 2 | bVar2 >> 6;
  *(uint8_t *)(param_2 + 0xc91) = bVar3 << 2 | bVar3 >> 6;
  bVar2 = *(uint8_t *)(lVar5 + 0x7fffa478ea18 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc96) = bVar1 << 2 | bVar1 >> 6;
  *(uint8_t *)(param_2 + 0xc94) = bVar2 << 2 | bVar2 >> 6;
  (**(code **)(param_2 + 0xc90))(*(uint64_t *)(param_2 + 0xfd0));
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcd080  |  RVA: 0x85d080  |  Size: 377 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcd080(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  code *pcVar2;
  
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    if ((uint64_t)(*(int *)(param_2 + 0x1688) + 0x17b3da9) < *(uint64_t *)(param_2 + 0x98)) {
      uVar1 = *(uint64_t *)(param_2 + 0x80);
      pcVar2 = (code *)((int64_t)(short)~((short)*(uint32_t *)(param_2 + 0xf28) * -0x6e8) +
                       0x7fffa568b119);
      (*pcVar2)(param_1,pcVar2,uVar1 >> 0x3d ^ uVar1);
    }
    *(uint64_t *)(param_2 + 0x90) = 0;
    *(uint8_t *)(param_2 + 0x80) = 0;
    *(uint64_t *)(param_2 + 0x98) = 0xf;
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcd200  |  RVA: 0x85d200  |  Size: 287 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcd200(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x218) != 0) {
    uVar2 = (-0x763 - (short)*(uint32_t *)(param_2 + 0x2c8)) * -0x56e1;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x17c0) & 0xf;
    (*(code *)((int64_t)(short)(uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) + 0x7fffa50889fa))
              (*(int64_t *)(param_2 + 0x218));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcd320  |  RVA: 0x85d320  |  Size: 181 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcd320(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xf58) & 0xf;
  (*(code *)(&UNK_7fffa5627f3e +
            (short)(((0x352e << bVar2 | 0x352eU >> 0x10 - bVar2) ^
                    (uint16_t)*(uint64_t *)(param_2 + 0x17c0)) + 0x991c)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcd3e0  |  RVA: 0x85d3e0  |  Size: 682 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcd3e0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  int64_t lVar3;
  uint8_t bVar4;
  uint16_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x17c0);
  bVar2 = bVar4 & 0xf;
  bVar4 = bVar4 & 0xf;
  uVar6 = (int64_t)
          (short)((-0x4327 << bVar4 | 0xbcd9U >> 0x10 - bVar4) -
                 (short)*(uint32_t *)(param_2 + 0xf58)) ^ 0xffffffffffffe8be;
  uVar7 = (uint64_t)
          *(uint8_t *)((int64_t)(short)(0x3653U >> bVar2 | 0x3653 << 0x10 - bVar2) + 0x7fffa478993d);
  bVar4 = *(uint8_t *)(uVar6 + 0x7fffa478db05 + uVar7 * 8);
  bVar2 = *(uint8_t *)(uVar6 + 0x7fffa478db02 + uVar7 * 8);
  bVar1 = *(uint8_t *)(uVar6 + 0x7fffa478db04 + uVar7 * 8);
  *(uint8_t *)(param_2 + 0xc94) = bVar4 << 2 | bVar4 >> 6;
  *(uint8_t *)(param_2 + 0xc91) = bVar2 << 2 | bVar2 >> 6;
  bVar4 = *(uint8_t *)(uVar6 + 0x7fffa478db03 + uVar7 * 8);
  *(uint8_t *)(param_2 + 0xc92) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = *(uint8_t *)(uVar6 + 0x7fffa478db06 + uVar7 * 8);
  *(uint8_t *)(param_2 + 0xc95) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = *(uint8_t *)(uVar6 + 0x7fffa478db07 + uVar7 * 8);
  *(uint8_t *)(param_2 + 0xc93) = bVar1 << 2 | bVar1 >> 6;
  *(uint8_t *)(param_2 + 0xc96) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = *(uint8_t *)(uVar6 + 0x7fffa478db08 + uVar7 * 8);
  *(uint8_t *)(param_2 + 0xc97) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = *(uint8_t *)(uVar6 + 0x7fffa478db01 + uVar7 * 8);
  *(uint8_t *)(param_2 + 0xc90) = bVar4 << 2 | bVar4 >> 6;
  (**(code **)(param_2 + 0xc90))(*(uint64_t *)(param_2 + 0x2f0));
  lVar3 = (int64_t)
          (int)((*(int *)(param_2 + 0x1390) * 0x791b81f8 ^ *(uint32_t *)(param_2 + 0x1688)) *
                -0x60086de5 + 0xf5b4146);
  uVar5 = (uint16_t)*(uint64_t *)(param_2 + 0x13f8) ^ 0x8f63;
  uVar6 = (uint64_t)*(uint8_t *)((int64_t)(short)~(uVar5 << 10 | uVar5 >> 6) + 0x7fffa4787c06);
  bVar4 = *(uint8_t *)(lVar3 + 0x7fffa478f514 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc91) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = *(uint8_t *)(lVar3 + 0x7fffa478f513 + uVar6 * 8);
  bVar2 = *(uint8_t *)(lVar3 + 0x7fffa478f516 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc93) = bVar2 << 2 | bVar2 >> 6;
  bVar2 = *(uint8_t *)(lVar3 + 0x7fffa478f51a + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc97) = bVar2 << 2 | bVar2 >> 6;
  bVar2 = *(uint8_t *)(lVar3 + 0x7fffa478f515 + uVar6 * 8);
  bVar1 = *(uint8_t *)(lVar3 + 0x7fffa478f517 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc94) = bVar1 << 2 | bVar1 >> 6;
  bVar1 = *(uint8_t *)(lVar3 + 0x7fffa478f519 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc90) = bVar4 << 2 | bVar4 >> 6;
  *(uint8_t *)(param_2 + 0xc96) = bVar1 << 2 | bVar1 >> 6;
  *(uint8_t *)(param_2 + 0xc92) = bVar2 << 2 | bVar2 >> 6;
  bVar4 = *(uint8_t *)(lVar3 + 0x7fffa478f518 + uVar6 * 8);
  *(uint8_t *)(param_2 + 0xc95) = bVar4 << 2 | bVar4 >> 6;
  (**(code **)(param_2 + 0xc90))(*(uint64_t *)(param_2 + 0x2f8));
  return;
}


// ============================================================================
// Function : Catch@7fffa4fcd690  |  RVA: 0x85d690  |  Size: 232 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa4fcd690(void)

{
  return &UNK_7fffa4fcaf60;
}


// ============================================================================
// Function : Unwind@7fffa4fcd780  |  RVA: 0x85d780  |  Size: 168 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcd780(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint16_t uVar2;
  
  uVar2 = (short)*(uint32_t *)(param_2 + 0xf28) * -0x38ca + 0xac33;
  (*(code *)((int64_t)(short)(uVar2 * 4 | uVar2 >> 0xe) + 0x7fffa56261e9))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcd830  |  RVA: 0x85d830  |  Size: 996 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcd830(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  uint16_t uVar9;
  uint32_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint8_t bVar13;
  uint32_t uVar14;
  
  *(uint64_t *)(param_2 + 0x1280) = 0x7fffa47cb7af;
  *(uint64_t *)(param_2 + 0x1308) = 0x7fffa47c7ea1;
  *(uint64_t *)(param_2 + 0x12a0) = 0x7fffa47c4632;
  *(uint64_t *)(param_2 + 0xea0) = 0x7fffa47c7d4a;
  *(uint64_t *)(param_2 + 0x12f0) = 0x7fffa47cbee1;
  *(uint32_t *)(param_2 + 0x1c0) = 0x6872e848;
  *(uint32_t *)(param_2 + 0x1278) = 0x6872b5c7;
  uVar14 = (uint32_t)*(uint64_t *)(param_2 + 0x17c0);
  uVar9 = (uint16_t)*(uint64_t *)(param_2 + 0x17c0);
  *(uint64_t *)(param_2 + 0x1560) = 0x7fffa47c97d5;
  *(uint64_t *)(param_2 + 0xf70) = 0x7fffa47c6950;
  bVar8 = (uint8_t)*(uint64_t *)(param_2 + 0xf58);
  *(uint64_t *)(param_2 + 0x1690) = 0x7fffa47c28fc;
  uVar12 = (uint64_t)
           *(uint8_t *)((int64_t)
                     (short)((0x9326 - uVar9 ^ (uint16_t)*(uint64_t *)(param_2 + 0x13f8)) + 0x2531)
                    + 0x7fffa47bdabc);
  uVar10 = (int)*(uint64_t *)(param_2 + 0xf58) + 0x566b344a;
  bVar7 = (uint8_t)*(uint64_t *)(param_2 + 0x2c8) & 0x1f;
  *(uint32_t *)(param_2 + 0xf50) = 0xce4474e5U >> bVar7 | -0x31bb8b1b << 0x20 - bVar7;
  lVar11 = (int64_t)(int)~(uVar10 * 0x40000000 | uVar10 >> 2) + *(int64_t *)(param_2 + 0x1308);
  bVar7 = *(uint8_t *)(lVar11 + 0x19 + uVar12 * 8);
  bVar13 = *(uint8_t *)(*(int64_t *)(param_2 + 0x12f0) + 0x41 +
                    (int64_t)
                    (int)((0xf31bb637U >> (bVar8 & 0x1f) | -0xce449c9 << 0x20 - (bVar8 & 0x1f)) ^
                         uVar14));
  uVar9 = uVar9 ^ 0xca7f;
  bVar1 = *(uint8_t *)(lVar11 + 0x1a + uVar12 * 8);
  bVar2 = *(uint8_t *)(*(int64_t *)(param_2 + 0x12a0) + 0x42 +
                   ((int64_t)
                    (short)((short)((int)*(uint64_t *)(param_2 + 0x2c8) - uVar14) +
                           (short)*(uint32_t *)(param_2 + 0x1278) * -0x44a3) ^ 0x256aU));
  bVar3 = *(uint8_t *)(*(int64_t *)(param_2 + 0x1690) + 0x47 +
                   (int64_t)
                   (short)((uVar9 << (bVar8 & 0xf) | uVar9 >> 0x10 - (bVar8 & 0xf)) + 0xef6f));
  uVar10 = (uint32_t)*(uint64_t *)(param_2 + 0x1688);
  bVar4 = *(uint8_t *)(*(int64_t *)(param_2 + 0xf70) + 0x45 +
                   (int64_t)(int)~((*(int *)(param_2 + 0x1c0) - uVar14) * -0x4ff25477 ^ uVar10));
  bVar5 = *(uint8_t *)(lVar11 + 0x1b + uVar12 * 8);
  bVar6 = *(uint8_t *)(lVar11 + 0x1f + uVar12 * 8);
  *(uint8_t *)(param_2 + 0x2e3) =
       ~(*(uint8_t *)(lVar11 + 0x1c + uVar12 * 8) ^
        *(uint8_t *)((int64_t)
                  (short)~((short)*(uint32_t *)(param_2 + 0xf08) * -0x73f4 ^
                          (uint16_t)*(uint32_t *)(param_2 + 0x13f8)) + 0x7fffa47c1756));
  *(uint8_t *)(param_2 + 0x2e4) = ~(bVar4 ^ *(uint8_t *)(lVar11 + 0x1d + uVar12 * 8));
  *(uint8_t *)(param_2 + 0x2e1) = ~(bVar1 ^ bVar2);
  *(uint8_t *)(param_2 + 0x2e0) = ~(bVar7 ^ bVar13);
  bVar7 = *(uint8_t *)(lVar11 + 0x20 + uVar12 * 8);
  bVar13 = *(uint8_t *)(*(int64_t *)(param_2 + 0x1560) + 0x48 +
                    (int64_t)(int)((uVar14 - uVar10) + -0x3a8e8b32));
  uVar10 = (uVar14 ^ 0x37963096) - uVar10;
  *(uint8_t *)(param_2 + 0x2e2) =
       ~(bVar5 ^ *(uint8_t *)(*(int64_t *)(param_2 + 0x1280) + 0x43 +
                          (int64_t)(int)(uVar10 * 0x10 | uVar10 >> 0x1c)));
  bVar1 = *(uint8_t *)(lVar11 + 0x1e + uVar12 * 8);
  *(uint8_t *)(param_2 + 0x2e6) = ~(bVar3 ^ bVar6);
  *(uint8_t *)(param_2 + 0x2e7) = ~(bVar7 ^ bVar13);
  bVar7 = *(uint8_t *)(*(int64_t *)(param_2 + 0xea0) + 0x46 +
                   (int64_t)(int)(*(int *)(param_2 + 0xf50) - uVar14));
  bVar13 = bVar7 | bVar1;
  if (((uVar14 ^ 0xccc757a1) >> (bVar8 & 0x1f) | (uVar14 ^ 0xccc757a1) << 0x20 - (bVar8 & 0x1f)) <
      ~((0xe70d0ab4 - uVar14) * 0x20000 | 0xe70d0ab4 - uVar14 >> 0xf) * 0x17dedb4f) {
    bVar13 = bVar1 ^ bVar7;
  }
  *(uint8_t *)(param_2 + 0x2e5) = ~bVar13;
  (**(code **)(param_2 + 0x2e0))(*(uint64_t *)(param_2 + 0x1048));
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcdc20  |  RVA: 0x85dc20  |  Size: 3621 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4fcdc20(void) {
    /* +0x85dc20 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x85dc25 */ __asm { PUSH RBP }
    /* +0x85dc26 */ __asm { PUSH RSI }
    /* +0x85dc27 */ __asm { PUSH RBX }
    /* +0x85dc28 */ __asm { PUSH R15 }
    /* +0x85dc2a */ __asm { PUSH R12 }
    /* +0x85dc2c */ __asm { PUSH RDI }
    /* +0x85dc2d */ __asm { PUSH R13 }
    /* +0x85dc2f */ __asm { PUSH R14 }
    /* +0x85dc31 */ __asm { SUB RSP,0x108 }
    /* +0x85dc38 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x85dc3f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x85dc46 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM10 }
    /* +0x85dc4d */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM8 }
    /* +0x85dc57 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM15 }
    /* +0x85dc61 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM11 }
    /* +0x85dc6b */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x85dc74 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM9 }
    /* +0x85dc7e */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM6 }
    /* +0x85dc87 */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM14 }
    /* +0x85dc91 */ __asm { MOVDQA xmmword ptr [RSP + 0xf0],XMM12 }
    /* +0x85dc9b */ __asm { MOV RSI,qword ptr [RBP + 0xdc8] }
    /* +0x85dca2 */ __asm { MOV dword ptr [RBP + 0x260],0x93544973 }
    /* +0x85dcac */ __asm { MOV R8D,dword ptr [RBP + 0x260] }
    /* +0x85dcb3 */ __asm { MOV qword ptr [RBP + 0xfc0],0x0 }
    /* +0x85dcbe */ __asm { RDTSC }
    /* +0x85dcc0 */ __asm { SHL RDX,0x20 }
    /* +0x85dcc4 */ __asm { OR RDX,RAX }
    /* +0x85dcc7 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0x85dcd1 */ __asm { IMUL RDX,RAX }
    /* +0x85dcd5 */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0x85dcdf */ __asm { ADD RDX,RAX }
    /* +0x85dce2 */ __asm { MOV RCX,RDX }
    /* +0x85dce5 */ __asm { SHR RCX,0x3b }
    /* +0x85dce9 */ __asm { MOV R8,RDX }
    /* +0x85dcec */ __asm { SHR R8,0x1b }
    /* +0x85dcf0 */ __asm { SHR RDX,0x2d }
    /* +0x85dcf4 */ __asm { XOR R8D,EDX }
    /* +0x85dcf7 */ __asm { ROR R8D,CL }
    /* +0x85dcfa */ __asm { AND R8D,0x3 }
    /* +0x85dcfe */ __asm { CMP R8D,0x2 }
    /* +0x85dd02 */ __asm { JNC 0x7fffa4fcde15 }
    /* +0x85dd08 */ __asm { CMP R8D,0x1 }
    /* +0x85dd0c */ __asm { JNZ 0x7fffa4fcdf49 }
    /* +0x85dd12 */ __asm { MOV EAX,0xafe6165f }
    /* +0x85dd17 */ __asm { MOV R8,0x5f435e42af6a31e2 }
    /* +0x85dd21 */ __asm { CMP RAX,R8 }
    /* +0x85dd24 */ __asm { NOP }
    /* +0x85dd25 */ __asm { NOP }
    /* +0x85dd26 */ __asm { NOP }
    /* +0x85dd27 */ __asm { NOP }
    /* +0x85dd28 */ __asm { NOP }
    /* +0x85dd29 */ __asm { MOV R8D,0xec71ad04 }
    /* +0x85dd2f */ __asm { IMUL R8D,R8D,0x2867e0ad }
    /* +0x85dd36 */ __asm { MOV RCX,qword ptr [RBP + 0x248] }
    /* +0x85dd3d */ __asm { ROR R8D,CL }
    /* +0x85dd40 */ __asm { MOV RDX,qword ptr [RBP + 0x1740] }
    /* +0x85dd47 */ __asm { SUB R8D,EDX }
    /* +0x85dd4a */ __asm { IMUL R8D,R8D,0x3c75fadf }
    /* +0x85dd51 */ __asm { MOVSXD R8,R8D }
    /* +0x85dd54 */ __asm { MOV R8,qword ptr [R8 + RAX*0x1 + 0x8] }
    /* +0x85dd59 */ __asm { MOV RDX,-0x500e34c1f42f91db }
    /* +0x85dd63 */ __asm { MOV RAX,R8 }
    /* +0x85dd66 */ __asm { MUL RDX }
    /* +0x85dd69 */ __asm { MOV R9,RDX }
    /* +0x85dd6c */ __asm { MOV EDX,0x146fb1c }
    /* +0x85dd71 */ __asm { MOV RAX,R8 }
    /* +0x85dd74 */ __asm { MUL RDX }
    /* +0x85dd77 */ __asm { ADD RAX,R9 }
    /* +0x85dd7a */ __asm { ADC RDX,0x0 }
    /* +0x85dd7e */ __asm { MOV R8D,0x7502ec72 }
    /* +0x85dd84 */ __asm { IMUL R8D,dword ptr [RBP + 0x1310] }
    /* +0x85dd8c */ __asm { ROL R8D,0x10 }
    /* +0x85dd90 */ __asm { MOV R9D,0xfef670f4 }
    /* +0x85dd96 */ __asm { SUB R9D,R8D }
    /* +0x85dd99 */ __asm { AND EDX,0x1 }
    /* +0x85dd9c */ __asm { OR RDX,R9 }
    /* +0x85dd9f */ __asm { JNZ 0x7fffa4fce33e }
    /* +0x85dda5 */ __asm { LEA RDX,[0x7fffa47c3735] }
    /* +0x85ddac */ __asm { MOV RAX,0x7ec45ca9dc78a5aa }
    /* +0x85ddb6 */ __asm { CMP RDX,RAX }
    /* +0x85ddb9 */ __asm { JNZ 0x7fffa4fcddbd }
    /* +0x85ddbb */ __asm { SBB AL,0xd5 }
    /* +0x85ddbd */ __asm { MOV R8W,0xba26 }
    /* +0x85ddc2 */ __asm { ADD R8D,0xffffc747 }
    /* +0x85ddc9 */ __asm { MOV R10W,0xbf95 }
    /* +0x85ddce */ __asm { IMUL R10D,R10D,-0xb5d }
    /* +0x85ddd5 */ __asm { MOV R11,qword ptr [RBP + 0xed8] }
    /* +0x85dddc */ __asm { MOV ECX,R11D }
    /* +0x85dddf */ __asm { ROL R10W,CL }
    /* +0x85dde3 */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85ddea */ __asm { ROL R8W,CL }
    /* +0x85ddee */ __asm { NOT R10D }
    /* +0x85ddf1 */ __asm { MOVZX R9D,R10W }
    /* +0x85ddf5 */ __asm { ADD R8D,R11D }
    /* +0x85ddf8 */ __asm { XOR R8D,0x6a4f }
    /* +0x85ddff */ __asm { MOVSX R10,R8W }
    /* +0x85de03 */ __asm { MOV qword ptr [RBP + 0x260],R11 }
    /* +0x85de0a */ __asm { MOV EAX,dword ptr [RDX + -0x67a1] }
    /* +0x85de10 */ __asm { JMP 0x7fffa4fce9d6 }
    /* +0x85de15 */ __asm { CMP R8D,0x3 }
    /* +0x85de19 */ __asm { JZ 0x7fffa4fce25a }
    /* +0x85de1f */ __asm { MOV R10D,0x2bac92de }
    /* +0x85de25 */ __asm { MOV RAX,-0x58ff59477e3c97cb }
    /* +0x85de2f */ __asm { CMP R10,RAX }
    /* +0x85de32 */ __asm { NOP }
    /* +0x85de33 */ __asm { NOP }
    /* +0x85de34 */ __asm { NOP }
    /* +0x85de35 */ __asm { NOP }
    /* +0x85de36 */ __asm { NOP }
    /* +0x85de37 */ __asm { MOV R8,qword ptr [R10 + 0x54516d2a] }
    /* +0x85de3e */ __asm { MOV RDX,-0x20c1c305a44304c2 }
    /* +0x85de48 */ __asm { MOV RAX,R8 }
    /* +0x85de4b */ __asm { MUL RDX }
    /* +0x85de4e */ __asm { MOV R9,RDX }
    /* +0x85de51 */ __asm { MOV EDX,0x1462408 }
    /* +0x85de56 */ __asm { MOV RAX,R8 }
    /* +0x85de59 */ __asm { MUL RDX }
    /* +0x85de5c */ __asm { ADD RAX,R9 }
    /* +0x85de5f */ __asm { ADC RDX,0x0 }
    /* +0x85de63 */ __asm { TEST DL,0x1 }
    /* +0x85de66 */ __asm { JZ 0x7fffa4fce640 }
    /* +0x85de6c */ __asm { MOV RAX,0x53cddbefad2bbba2 }
    /* +0x85de76 */ __asm { MOV R8,-0xe0ea77b8 }
    /* +0x85de80 */ __asm { ADD R8,RAX }
    /* +0x85de83 */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85de8a */ __asm { ROR R8,CL }
    /* +0x85de8d */ __asm { LEA RAX,[0x7fffa47bf85d] }
    /* +0x85de94 */ __asm { MOV RDX,-0x616bdcf20ff0dc2b }
    /* +0x85de9e */ __asm { IMUL RDX,RAX }
    /* +0x85dea2 */ __asm { MOV R9,-0x8c7f613e }
    /* +0x85deac */ __asm { ADD R9,RDX }
    /* +0x85deaf */ __asm { XOR R9,R8 }
    /* +0x85deb2 */ __asm { CMP R9,-0x1 }
    /* +0x85deb6 */ __asm { NOP }
    /* +0x85deb7 */ __asm { NOP }
    /* +0x85deb8 */ __asm { NOP }
    /* +0x85deb9 */ __asm { NOP }
    /* +0x85deba */ __asm { NOP }
    /* +0x85debb */ __asm { MOV R10W,0xf297 }
    /* +0x85dec0 */ __asm { MOV R8W,0x7d3 }
    /* +0x85dec5 */ __asm { SUB R8D,dword ptr [RBP + 0x248] }
    /* +0x85decc */ __asm { MOV R11,qword ptr [RBP + 0x1740] }
    /* +0x85ded3 */ __asm { MOV ECX,R11D }
    /* +0x85ded6 */ __asm { ROL R8W,CL }
    /* +0x85deda */ __asm { IMUL R10D,R10D,0x2323 }
    /* +0x85dee1 */ __asm { ADD R10D,0xffffb5a9 }
    /* +0x85dee8 */ __asm { MOV RCX,qword ptr [RBP + 0xed8] }
    /* +0x85deef */ __asm { ROR R10W,CL }
    /* +0x85def3 */ __asm { MOV qword ptr [RBP + 0x260],RDX }
    /* +0x85defa */ __asm { MOVD XMM4,R10D }
    /* +0x85deff */ __asm { MOV R10W,0xd924 }
    /* +0x85df04 */ __asm { MOV RDX,qword ptr [RBP + 0x1378] }
    /* +0x85df0b */ __asm { XOR EDX,R10D }
    /* +0x85df0e */ __asm { ROL DX,0xc }
    /* +0x85df12 */ __asm { MOV ECX,R11D }
    /* +0x85df15 */ __asm { ROL DX,CL }
    /* +0x85df18 */ __asm { ADD EDX,0xfffff930 }
    /* +0x85df1e */ __asm { MOVZX R9D,DX }
    /* +0x85df22 */ __asm { ADD R8D,0xffffddaa }
    /* +0x85df29 */ __asm { MOVSX R10,R8W }
    /* +0x85df2d */ __asm { MOVD XMM2,R11D }
    /* +0x85df32 */ __asm { PADDW XMM2,XMM4 }
    /* +0x85df36 */ __asm { MOVD R8D,XMM2 }
    /* +0x85df3b */ __asm { MOVSX R8,R8W }
    /* +0x85df3f */ __asm { MOV EAX,dword ptr [R8 + RAX*0x1 + 0x44] }
    /* +0x85df44 */ __asm { JMP 0x7fffa4fce9d6 }
    /* +0x85df49 */ __asm { RDTSC }
    /* +0x85df4b */ __asm { SHL RDX,0x20 }
    /* +0x85df4f */ __asm { OR RDX,RAX }
    /* +0x85df52 */ __asm { MOV RAX,-0x83d143f70980d4b }
    /* +0x85df5c */ __asm { IMUL RDX,RAX }
    /* +0x85df60 */ __asm { MOV R8,-0x1d72df1770fa090a }
    /* +0x85df6a */ __asm { ADD R8,RDX }
    /* +0x85df6d */ __asm { MOV RCX,R8 }
    /* +0x85df70 */ __asm { SHR RCX,0x3b }
    /* +0x85df74 */ __asm { MOV RDX,R8 }
    /* +0x85df77 */ __asm { SHR RDX,0x1b }
    /* +0x85df7b */ __asm { SHR R8,0x2d }
    /* +0x85df7f */ __asm { XOR R8D,EDX }
    /* +0x85df82 */ __asm { ROR R8D,CL }
    /* +0x85df85 */ __asm { MOV dword ptr [RBP + 0x260],0x19ae64c6 }
    /* +0x85df8f */ __asm { MOV R10D,dword ptr [RBP + 0x260] }
    /* +0x85df96 */ __asm { CMP R10D,0xae1255a3 }
    /* +0x85df9d */ __asm { NOP }
    /* +0x85df9e */ __asm { NOP }
    /* +0x85df9f */ __asm { NOP }
    /* +0x85dfa0 */ __asm { NOP }
    /* +0x85dfa1 */ __asm { NOP }
    /* +0x85dfa2 */ __asm { NOP }
    /* +0x85dfa3 */ __asm { NOP }
    /* +0x85dfa4 */ __asm { NOP }
    /* +0x85dfa5 */ __asm { NOP }
    /* +0x85dfa6 */ __asm { CMP R8D,0x41a8eb }
    /* +0x85dfad */ __asm { JA 0x7fffa4fce1cb }
    /* +0x85dfb3 */ __asm { MOV R8W,0x8e50 }
    /* +0x85dfb8 */ __asm { XOR R8D,dword ptr [RBP + 0xed8] }
    /* +0x85dfbf */ __asm { MOVZX R8D,R8W }
    /* +0x85dfc3 */ __asm { XOR R8,0x1ca }
    /* +0x85dfca */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x85dfce */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x85dfd2 */ __asm { MOV R10,0x42b0af2b114038b5 }
    /* +0x85dfdc */ __asm { OR R10,RAX }
    /* +0x85dfdf */ __asm { MOV RAX,0x3bffe5c0277ec4c7 }
    /* +0x85dfe9 */ __asm { CMP R10,RAX }
    /* +0x85dfec */ __asm { NOP }
    /* +0x85dfed */ __asm { NOP }
    /* +0x85dfee */ __asm { NOP }
    /* +0x85dfef */ __asm { NOP }
    /* +0x85dff0 */ __asm { NOP }
    /* +0x85dff1 */ __asm { MOV R10D,0x113d2dff }
    /* +0x85dff7 */ __asm { MOV RAX,-0x88ed3a3d2b63c6b }
    /* +0x85e001 */ __asm { CMP R10,RAX }
    /* +0x85e004 */ __asm { NOP }
    /* +0x85e005 */ __asm { NOP }
    /* +0x85e006 */ __asm { NOP }
    /* +0x85e007 */ __asm { NOP }
    /* +0x85e008 */ __asm { NOP }
    /* +0x85e009 */ __asm { MOV RDX,0x0 }
    /* +0x85e010 */ __asm { NOP }
    /* +0x85e011 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x85e018 */ __asm { MOV R8D,dword ptr [R10 + 0x6ec0d4c5] }
    /* +0x85e01f */ __asm { MOV RAX,0x5555555555555556 }
    /* +0x85e029 */ __asm { IMUL R8,RAX }
    /* +0x85e02d */ __asm { MOV RAX,0x5555555555555555 }
    /* +0x85e037 */ __asm { CMP R8,RAX }
    /* +0x85e03a */ __asm { JA 0x7fffa4fce1cb }
    /* +0x85e040 */ __asm { PXOR XMM4,XMM4 }
    /* +0x85e044 */ __asm { MOVDQA xmmword ptr [RBP + 0x260],XMM4 }
    /* +0x85e04c */ __asm { MOV dword ptr [RBP + 0xc10],0xf1ec1b34 }
    /* +0x85e056 */ __asm { MOV R8D,dword ptr [RBP + 0xc10] }
    /* +0x85e05d */ __asm { TEST R8B,0x1 }
    /* +0x85e061 */ __asm { JZ 0x7fffa4fce081 }
    /* +0x85e063 */ __asm { NOP }
    /* +0x85e064 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x85e06b */ __asm { MOV R10,0x0 }
    /* +0x85e072 */ __asm { CMP AL,0xbe }
    /* +0x85e075 */ __asm { SCASD RDI }
    /* +0x85e076 */ __asm { SBB AL,0xb9 }
    /* +0x85e078 */ __asm { LODSD RSI }
    /* +0x85e079 */ __asm { INSB RDI,DX }
    /* +0x85e07b */ __asm { IMUL uint8_t ptr [RCX + -0x7d81ec33] }
    /* +0x85e081 */ __asm { MOV dword ptr [RBP + 0x260],0x0 }
    /* +0x85e08b */ __asm { MOV dword ptr [RBP + 0xc10],0x3c912054 }
    /* +0x85e095 */ __asm { MOV R8D,dword ptr [RBP + 0xc10] }
    /* +0x85e09c */ __asm { CMP R8D,0x6ab4e3c5 }
    /* +0x85e0a3 */ __asm { JNC 0x7fffa4fcea53 }
    /* +0x85e0a9 */ __asm { PUSHFQ }
    /* +0x85e0aa */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x85e0b2 */ __asm { POPFQ }
    /* +0x85e0b3 */ __asm { MOV dword ptr [RBP + 0xc10],0x5da1470c }
    /* +0x85e0bd */ __asm { MOV R8D,dword ptr [RBP + 0xc10] }
    /* +0x85e0c4 */ __asm { MOV R10D,0x30b36402 }
    /* +0x85e0ca */ __asm { LEA RDX,[0x7fffa478611c] }
    /* +0x85e0d1 */ __asm { MOV RAX,-0x16d190f51247e080 }
    /* +0x85e0db */ __asm { XOR R8D,R8D }
    /* +0x85e0de */ __asm { CMP RDX,RAX }
    /* +0x85e0e1 */ __asm { SETZ R8B }
    /* +0x85e0e5 */ __asm { IMUL R9D,R10D,-0x69cd260d }
    /* +0x85e0ec */ __asm { MOV RCX,qword ptr [RBP + 0x1608] }
    /* +0x85e0f3 */ __asm { ROL R9D,CL }
    /* +0x85e0f6 */ __asm { NOT R9D }
    /* +0x85e0f9 */ __asm { MOV R10,qword ptr [RBP + 0x1740] }
    /* +0x85e100 */ __asm { ADD R9D,R10D }
    /* +0x85e103 */ __asm { MOV RAX,0x6a85e92e35f81468 }
    /* +0x85e10d */ __asm { MOV R11D,0x96cf7ddc }
    /* +0x85e113 */ __asm { SUB R11D,R10D }
    /* +0x85e116 */ __asm { MOV RCX,qword ptr [RBP + 0x248] }
    /* +0x85e11d */ __asm { ROR R11D,CL }
    /* +0x85e120 */ __asm { ROR R11D,0x1 }
    /* +0x85e123 */ __asm { ADD RAX,R10 }
    /* +0x85e126 */ __asm { ROL RAX,0x10 }
    /* +0x85e12a */ __asm { ADD RAX,-0x3482c9c7 }
    /* +0x85e130 */ __asm { XOR RAX,RCX }
    /* +0x85e133 */ __asm { XOR R10D,R10D }
    /* +0x85e136 */ __asm { CMP RDX,RAX }
    /* +0x85e139 */ __asm { SETNC R10B }
    /* +0x85e13d */ __asm { CMP R9,R11 }
    /* +0x85e140 */ __asm { CMOVL R10D,R8D }
    /* +0x85e144 */ __asm { CMP R10B,0x1 }
    /* +0x85e148 */ __asm { JZ 0x7fffa4fcea5b }
    /* +0x85e14e */ __asm { MOVD XMM4,dword ptr [RBP + 0xed8] }
    /* +0x85e156 */ __asm { MOV R8W,0x8648 }
    /* +0x85e15b */ __asm { MOV R10D,0xd78acfc3 }
    /* +0x85e161 */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85e168 */ __asm { SUB R10D,ECX }
    /* +0x85e16b */ __asm { XOR R10D,dword ptr [RBP + 0x1608] }
    /* +0x85e172 */ __asm { ADD R10D,0x9f0371e8 }
    /* +0x85e179 */ __asm { MOV R9W,0xa65b }
    /* +0x85e17e */ __asm { NOT R9D }
    /* +0x85e181 */ __asm { MOV RAX,qword ptr [RBP + 0x248] }
    /* +0x85e188 */ __asm { ADD EAX,R9D }
    /* +0x85e18b */ __asm { ROR AX,CL }
    /* +0x85e18e */ __asm { MOVSXD R10,R10D }
    /* +0x85e191 */ __asm { IMUL ECX,EAX,-0x2b2d }
    /* +0x85e197 */ __asm { MOV qword ptr [RBP + 0xc10],R11 }
    /* +0x85e19e */ __asm { MOV EAX,dword ptr [RDX + -0x1290] }
    /* +0x85e1a4 */ __asm { MOVD XMM2,R8D }
    /* +0x85e1a9 */ __asm { PADDW XMM2,XMM4 }
    /* +0x85e1ad */ __asm { MOVD R8D,XMM2 }
    /* +0x85e1b2 */ __asm { MOV R11D,0x1652 }
    /* +0x85e1b8 */ __asm { SUB R11D,R8D }
    /* +0x85e1bb */ __asm { MOVZX R9D,R11W }
    /* +0x85e1bf */ __asm { MOVZX EDX,CX }
    /* +0x85e1c2 */ __asm { LEA R8,[RBP + 0x260] }
    /* +0x85e1c9 */ __asm { SYSCALL }
    /* +0x85e1cb */ __asm { LEA R10,[0x7fffa4781d93] }
    /* +0x85e1d2 */ __asm { MOV RAX,-0x55348a2fa7a0028 }
    /* +0x85e1dc */ __asm { CMP R10,RAX }
    /* +0x85e1df */ __asm { NOP }
    /* +0x85e1e0 */ __asm { NOP }
    /* +0x85e1e1 */ __asm { NOP }
    /* +0x85e1e2 */ __asm { NOP }
    /* +0x85e1e3 */ __asm { NOP }
    /* +0x85e1e4 */ __asm { NOP }
    /* +0x85e1e5 */ __asm { NOP }
    /* +0x85e1e6 */ __asm { NOP }
    /* +0x85e1e7 */ __asm { NOP }
    /* +0x85e1e8 */ __asm { NOP }
    /* +0x85e1e9 */ __asm { NOP }
    /* +0x85e1ea */ __asm { NOP }
    /* +0x85e1eb */ __asm { NOP }
    /* +0x85e1ec */ __asm { NOP }
    /* +0x85e1ed */ __asm { NOP }
    /* +0x85e1ee */ __asm { NOP }
    /* +0x85e1ef */ __asm { NOP }
    /* +0x85e25a */ __asm { MOV R8D,0x58a5de49 }
    /* +0x85e260 */ __asm { MOV R10D,0x771d935b }
    /* +0x85e266 */ __asm { NOT R8D }
    /* +0x85e269 */ __asm { MOV EAX,0xb4b1839e }
    /* +0x85e26e */ __asm { IMUL EDX,EAX,-0x19ef806f }
    /* +0x85e274 */ __asm { MOV R9,qword ptr [RBP + 0x1740] }
    /* +0x85e27b */ __asm { SUB EDX,R9D }
    /* +0x85e27e */ __asm { ROL EDX,0x13 }
    /* +0x85e281 */ __asm { MOV R11,qword ptr [RBP + 0x1608] }
    /* +0x85e288 */ __asm { MOV ECX,R11D }
    /* +0x85e28b */ __asm { ROL EDX,CL }
    /* +0x85e28d */ __asm { MOV EAX,0x723eed1c }
    /* +0x85e292 */ __asm { IMUL EAX,EAX,0x5bc6530b }
    /* +0x85e298 */ __asm { MOV ECX,R9D }
    /* +0x85e29b */ __asm { ROL EAX,CL }
    /* +0x85e29d */ __asm { ADD R8D,R9D }
    /* +0x85e2a0 */ __asm { MOV ECX,R11D }
    /* +0x85e2a3 */ __asm { ROR R8D,CL }
    /* +0x85e2a6 */ __asm { NOT EAX }
    /* +0x85e2a8 */ __asm { CDQE }
    /* +0x85e2aa */ __asm { ROL R8D,0x1e }
    /* +0x85e2ae */ __asm { MOV R8D,dword ptr [R10 + R8*0x1 + 0x240] }
    /* +0x85e2b6 */ __asm { MOV R10D,R8D }
    /* +0x85e2b9 */ __asm { AND R10D,0x1 }
    /* +0x85e2bd */ __asm { CMP RDX,RAX }
    /* +0x85e2c0 */ __asm { CMOVLE R10D,R8D }
    /* +0x85e2c4 */ __asm { TEST R10D,R10D }
    /* +0x85e2c7 */ __asm { JZ 0x7fffa4fce973 }
    /* +0x85e2cd */ __asm { LEA R10,[0x7fffa47c2912] }
    /* +0x85e2d4 */ __asm { MOV RAX,0x7d29e308d8a11dc6 }
    /* +0x85e2de */ __asm { CMP R10,RAX }
    /* +0x85e2e1 */ __asm { JZ 0x7fffa4fcea67 }
    /* +0x85e2e7 */ __asm { MOV RAX,qword ptr [RBP + 0xed8] }
    /* +0x85e2ee */ __asm { MOV R8D,EAX }
    /* +0x85e2f1 */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85e2f8 */ __asm { SUB R8D,ECX }
    /* +0x85e2fb */ __asm { MOVD XMM4,R8D }
    /* +0x85e300 */ __asm { MOV qword ptr [RBP + 0x260],RDX }
    /* +0x85e307 */ __asm { MOV R8W,0x5005 }
    /* +0x85e30c */ __asm { ADD R8D,EAX }
    /* +0x85e30f */ __asm { NOT R8D }
    /* +0x85e312 */ __asm { ROL R8W,CL }
    /* +0x85e316 */ __asm { MOV EAX,0x8f7af358 }
    /* +0x85e31b */ __asm { MOVD XMM2,EAX }
    /* +0x85e31f */ __asm { PADDD XMM2,XMM4 }
    /* +0x85e323 */ __asm { MOV EAX,dword ptr [R10 + -0x597e] }
    /* +0x85e32a */ __asm { MOVZX R9D,R8W }
    /* +0x85e32e */ __asm { MOVD R8D,XMM2 }
    /* +0x85e333 */ __asm { NOT R8D }
    /* +0x85e336 */ __asm { MOVSXD R10,R8D }
    /* +0x85e339 */ __asm { JMP 0x7fffa4fce9d6 }
    /* +0x85e33e */ __asm { RDTSC }
    /* +0x85e340 */ __asm { SHL RDX,0x20 }
    /* +0x85e344 */ __asm { OR RDX,RAX }
    /* +0x85e347 */ __asm { MOV RAX,-0x583f2dd720db9bdb }
    /* +0x85e351 */ __asm { IMUL RAX,RDX }
    /* +0x85e355 */ __asm { MOV R8,-0x13f68678f90f28c6 }
    /* +0x85e35f */ __asm { ADD R8,RAX }
    /* +0x85e362 */ __asm { MOV RCX,R8 }
    /* +0x85e365 */ __asm { SHR RCX,0x3b }
    /* +0x85e369 */ __asm { MOV RDX,R8 }
    /* +0x85e36c */ __asm { SHR RDX,0x2d }
    /* +0x85e370 */ __asm { SHR R8,0x1b }
    /* +0x85e374 */ __asm { XOR R8D,EDX }
    /* +0x85e377 */ __asm { ROR R8D,CL }
    /* +0x85e37a */ __asm { MOV dword ptr [RBP + 0x260],0xfffeaf3f }
    /* +0x85e384 */ __asm { MOV R10D,dword ptr [RBP + 0x260] }
    /* +0x85e38b */ __asm { CMP R10D,0xcc065b6e }
    /* +0x85e392 */ __asm { JBE 0x7fffa4fcea6f }
    /* +0x85e398 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x85e39f */ __asm { MOV R10,0x0 }
    /* +0x85e3a6 */ __asm { NOP }
    /* +0x85e3a7 */ __asm { CMP R8D,0x426cceb }
    /* +0x85e3ae */ __asm { JA 0x7fffa4fce5c2 }
    /* +0x85e3b4 */ __asm { MOV R8D,0xfa891bde }
    /* +0x85e3ba */ __asm { SUB R8D,dword ptr [RBP + 0x248] }
    /* +0x85e3c1 */ __asm { ROL R8D,0x1c }
    /* +0x85e3c5 */ __asm { IMUL R8D,dword ptr [RBP + 0x1310] }
    /* +0x85e3cd */ __asm { MOV dword ptr [RBP + 0x260],R8D }
    /* +0x85e3d4 */ __asm { MOV R8D,dword ptr [RBP + 0x260] }
    /* +0x85e3db */ __asm { TEST R8B,0x1 }
    /* +0x85e3df */ __asm { NOP }
    /* +0x85e3e0 */ __asm { NOP }
    /* +0x85e3e1 */ __asm { NOP }
    /* +0x85e3e2 */ __asm { NOP }
    /* +0x85e3e3 */ __asm { NOP }
    /* +0x85e3e4 */ __asm { MOV R10D,0xc6a0419a }
    /* +0x85e3ea */ __asm { MOV RDX,R10 }
    /* +0x85e3ed */ __asm { ROL RDX,0x12 }
    /* +0x85e3f1 */ __asm { MOV R8D,0xc660bcd3 }
    /* +0x85e3f7 */ __asm { XOR R8D,dword ptr [RBP + 0x248] }
    /* +0x85e3fe */ __asm { XOR R8D,0x514f8e64 }
    /* +0x85e405 */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85e40c */ __asm { ROL R8D,CL }
    /* +0x85e40f */ __asm { SUB RDX,R8 }
    /* +0x85e412 */ __asm { MOV RAX,-0x19ba36c990886b3f }
    /* +0x85e41c */ __asm { CMP RDX,RAX }
    /* +0x85e41f */ __asm { JZ 0x7fffa4fcea83 }
    /* +0x85e425 */ __asm { MOV R8D,dword ptr [R10 + -0x46a23ed6] }
    /* +0x85e42c */ __asm { MOV RAX,0x5555555555555556 }
    /* +0x85e436 */ __asm { IMUL R8,RAX }
    /* +0x85e43a */ __asm { MOV RAX,0x5555555555555555 }
    /* +0x85e444 */ __asm { CMP R8,RAX }
    /* +0x85e447 */ __asm { JA 0x7fffa4fce5c2 }
    /* +0x85e44d */ __asm { PXOR XMM4,XMM4 }
    /* +0x85e451 */ __asm { MOVDQA xmmword ptr [RBP + 0x260],XMM4 }
    /* +0x85e459 */ __asm { MOV dword ptr [RBP + 0xc10],0x21000a20 }
    /* +0x85e463 */ __asm { MOV R8D,dword ptr [RBP + 0xc10] }
    /* +0x85e46a */ __asm { TEST R8D,R8D }
    /* +0x85e46d */ __asm { JS 0x7fffa4fcea8b }
    /* +0x85e473 */ __asm { PUSHFQ }
    /* +0x85e474 */ __asm { POP R11 }
    /* +0x85e476 */ __asm { TEST R11D,0x100 }
    /* +0x85e47d */ __asm { NOP }
    /* +0x85e47e */ __asm { NOP }
    /* +0x85e47f */ __asm { NOP }
    /* +0x85e480 */ __asm { NOP }
    /* +0x85e481 */ __asm { NOP }
    /* +0x85e482 */ __asm { MOV dword ptr [RBP + 0x260],0x0 }
    /* +0x85e48c */ __asm { MOV dword ptr [RBP + 0xc10],0xf5b1026e }
    /* +0x85e496 */ __asm { MOV R8D,dword ptr [RBP + 0xc10] }
    /* +0x85e49d */ __asm { CMP R8D,0xb5d1d98f }
    /* +0x85e4a4 */ __asm { JBE 0x7fffa4fcea94 }
    /* +0x85e4aa */ __asm { MOV R8D,0xb37ff683 }
    /* +0x85e4b0 */ __asm { ADD R8D,0x7ffe02d4 }
    /* +0x85e4b7 */ __asm { ROL R8D,0x17 }
    /* +0x85e4bb */ __asm { PUSHFQ }
    /* +0x85e4bc */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x85e4c4 */ __asm { POPFQ }
    /* +0x85e4c5 */ __asm { MOV RDX,qword ptr [RBP + 0x1740] }
    /* +0x85e4cc */ __asm { SUB R8D,EDX }
    /* +0x85e4cf */ __asm { XOR R8D,dword ptr [RBP + 0x248] }
    /* +0x85e4d6 */ __asm { MOV dword ptr [RBP + 0xc10],R8D }
    /* +0x85e4dd */ __asm { MOV R8D,dword ptr [RBP + 0xc10] }
    /* +0x85e4e4 */ __asm { TEST R8B,0x1 }
    /* +0x85e4e8 */ __asm { NOP }
    /* +0x85e4e9 */ __asm { NOP }
    /* +0x85e4ea */ __asm { NOP }
    /* +0x85e4eb */ __asm { NOP }
    /* +0x85e4ec */ __asm { NOP }
    /* +0x85e4ed */ __asm { LEA R10,[0x7fffa47b626a] }
    /* +0x85e4f4 */ __asm { MOV RDX,R10 }
    /* +0x85e4f7 */ __asm { MOV RAX,0x3c30e5cd519242c9 }
    /* +0x85e501 */ __asm { ADD RAX,qword ptr [RBP + 0xed8] }
    /* +0x85e508 */ __asm { MOV R8,-0xacd21047 }
    /* +0x85e512 */ __asm { ADD R8,RAX }
    /* +0x85e515 */ __asm { MOV RCX,qword ptr [RBP + 0x1740] }
    /* +0x85e51c */ __asm { ROL R8,CL }
    /* +0x85e51f */ __asm { ROL RDX,0x2f }
    /* +0x85e523 */ __asm { IMUL R8,RDX }
    /* +0x85e527 */ __asm { MOV EAX,0xc7fe366f }
    /* +0x85e52c */ __asm { XOR RAX,R8 }
    /* +0x85e52f */ __asm { MOV R8,0x517affd727bb116c }
    /* +0x85e539 */ __asm { CMP RAX,R8 }
    /* +0x85e53c */ __asm { NOP }
    /* +0x85e53d */ __asm { NOP }
    /* +0x85e53e */ __asm { NOP }
    /* +0x85e53f */ __asm { NOP }
    /* +0x85e540 */ __asm { NOP }
    /* +0x85e541 */ __asm { MOV R8D,0xe701be16 }
    /* +0x85e547 */ __asm { MOV CX,0x5ec9 }
    /* +0x85e54b */ __asm { MOV qword ptr [RBP + 0xc10],RDX }
    /* +0x85e552 */ __asm { MOV RDX,qword ptr [RBP + 0x1378] }
    /* +0x85e559 */ __asm { SUB ECX,EDX }
    /* +0x85e55b */ __asm { MOVD XMM4,EDX }
    /* +0x85e55f */ __asm { MOV RDX,qword ptr [RBP + 0x248] }
    /* +0x85e566 */ __asm { MOV R11,qword ptr [RBP + 0x1740] }
    /* +0x85e56d */ __asm { SUB EDX,R11D }
    /* +0x85e570 */ __asm { ADD R8D,EDX }
    /* +0x85e573 */ __asm { ADD R8D,0xc38105fd }
    /* +0x85e57a */ __asm { MOV EAX,dword ptr [R10 + 0x625e] }
    /* +0x85e581 */ __asm { XOR ECX,0x11d3 }
    /* +0x85e587 */ __asm { IMUL ECX,dword ptr [RBP + 0xe88] }
    /* +0x85e58e */ __asm { MOVZX R9D,CX }
}


// ============================================================================
// Function : Unwind@7fffa4fceac0  |  RVA: 0x85eac0  |  Size: 356 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fceac0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0xca8)) {
    uVar2 = *(int *)(param_2 + 0x1c0) * (*(uint32_t *)(param_2 + 0x1688) ^ 0x5300e593);
    uVar2 = uVar2 * 0x8000 | uVar2 >> 0x11;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x17c0) & 0x1f;
    (*(code *)((int64_t)(int)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x7fffa56956af))
              (*(uint64_t *)(param_2 + 0x17c0),0x7fffa56956af,
               *(uint64_t *)(param_2 + 0xc90) >> 0x3d ^ *(uint64_t *)(param_2 + 0xc90));
  }
  *(uint64_t *)(param_2 + 0x1558) = *(uint64_t *)(param_2 + 600);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcec30  |  RVA: 0x85ec30  |  Size: 365 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcec30(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  if (0xf < *(uint64_t *)(param_2 + 0x2f8)) {
    uVar3 = (uint16_t)*(uint64_t *)(param_2 + 0x17c0) ^ 0x63e1;
    uVar3 = uVar3 << 6 | uVar3 >> 10;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x2c8) & 0xf;
    uVar1 = *(uint64_t *)(param_2 + 0x2e0);
    (*(code *)((int64_t)(short)(uVar3 >> bVar2 | uVar3 << 0x10 - bVar2) + 0x7fffa568c850))
              (*(uint64_t *)(param_2 + 0xf58),uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fceda0  |  RVA: 0x85eda0  |  Size: 339 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fceda0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = *(uint64_t *)(param_2 + 5000);
  (*(code *)(&UNK_7fffa4ef275f + (int)((uint32_t)*(uint64_t *)(param_2 + 0xf58) ^ 0x5668e81b)))
            (0x1523b6c1,
             &UNK_7fffa4ef275f + (int)((uint32_t)*(uint64_t *)(param_2 + 0xf58) ^ 0x5668e81b),
             (uVar1 << 0x36 | uVar1 >> 10) ^ (uVar1 << 0x21 | uVar1 >> 0x1f) ^ uVar1);
  *(uint64_t *)(param_2 + 0x1558) = *(uint64_t *)(param_2 + 600);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fcef00  |  RVA: 0x85ef00  |  Size: 287 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fcef00(uint64_t param_1,int64_t param_2)

{
  if (*(int64_t *)(param_2 + 0x1558) != 0) {
    (*(code *)(&UNK_7fffa508f737 +
              (int)(*(int *)(param_2 + 0x2c8) + 0x385dfc5dU ^
                   (uint32_t)*(uint64_t *)(param_2 + 0x17c0))))();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4fcf020  |  RVA: 0x85f020  |  Size: 1 bytes
// Callers  : FUN_7fffa50cbb12@0x95bb12, FUN_7fffa51562d4@0x9e62d4, FUN_7fffa565b84c@0xeeb84c, FUN_7fffa5668cb9@0xef8cb9
// Callees  : none
// ============================================================================
void FUN_7fffa4fcf020(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4fcf030  |  RVA: 0x85f030  |  Size: 541 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4fcf030(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa4785c26 = 0;
  uRam00007fffa4785c4c = 0;
  uRam00007fffa4785c54 = 0;
  uRam00007fffa4785c3c = 0;
  uRam00007fffa4785c44 = 0;
  uRam00007fffa4785c2c = 0;
  uRam00007fffa4785c34 = 0;
  uRam00007fffa4785c69 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)(uVar1 >> 0x20)) << 0x20 | uVar1 & 0xffffffff) * 0x81ea42a9ce02b13 +
          1;
  lVar3 = 3;
  while( true ) {
    lVar2 = lVar2 * 0x81ea42a9ce02b13 + 1;
    lVar4 = lVar2 * 0x81ea42a9ce02b13 + 1;
    *(char *)(lVar3 + 0x7fffa4785c23) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar3 + 0x7fffa4785c22) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar4 * 0x81ea42a9ce02b13 + 1;
    *(char *)(lVar3 + 0x7fffa4785c24) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar2 * 0x81ea42a9ce02b13 + 1;
    *(char *)(lVar3 + 0x7fffa4785c25) = (char)((uint64_t)lVar2 >> 0x20);
    if (lVar3 == 0x4f) break;
    lVar3 = lVar3 + 4;
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa4785c26 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa4785c2c) = 0;
  bRam00007fffa4785c26 = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4fcf250  |  RVA: 0x85f250  |  Size: 7461 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4fcfa25) */
/* WARNING: Removing unreachable block (ram,0x7fffa4fd020f) */
/* WARNING: Removing unreachable block (ram,0x7fffa4fd087e) */
/* WARNING: Removing unreachable block (ram,0x7fffa4fd0b8b) */
/* WARNING: Removing unreachable block (ram,0x7fffa4fcfd0c) */
/* WARNING: Removing unreachable block (ram,0x7fffa4fd06f1) */
/* WARNING: Removing unreachable block (ram,0x7fffa4fd0936) */

int64_t FUN_7fffa4fcf250(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int iVar5;
  uint8_t bVar6;
  uint8_t auVar7 [16];
  char cVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t *puVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint32_t uVar22;
  int iVar23;
  uint64_t *puVar24;
  code *pcVar25;
  uint64_t uVar26;
  int iVar27;
  uint64_t uVar28;
  int *piVar29;
  uint64_t *puVar30;
  uint64_t *puVar31;
  uint64_t uVar32;
  bool bVar33;
  uint8_t auVar34 [16];
  uint64_t uStack_1b0;
  uint64_t *puStack_1a8;
  uint64_t *puStack_1a0;
  uint64_t uStack_198;
  uint32_t uStack_18c;
  uint64_t uStack_188;
  int64_t lStack_180;
  uint64_t *puStack_178;
  uint64_t *puStack_170;
  uint32_t uStack_164;
  uint64_t *puStack_160;
  uint64_t *puStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t *puStack_138;
  uint64_t *puStack_130;
  uint32_t uStack_128;
  uint32_t uStack_124;
  uint64_t uStack_120;
  int64_t lStack_118;
  uint32_t uStack_10c;
  uint64_t *puStack_108;
  uint32_t uStack_100;
  int iStack_fc;
  int64_t lStack_f8;
  uint32_t *puStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t *puStack_d0;
  uint64_t uStack_c8;
  code *pcStack_c0;
  uint64_t uStack_b8;
  int64_t lStack_b0;
  uint64_t *puStack_a8;
  uint32_t uStack_9c;
  
  uVar13 = *(uint32_t *)(param_1 + 0x2c);
  uVar19 = (uint64_t)uVar13;
  puStack_108 = (uint64_t *)((int64_t)param_4 + param_5 + -0x10);
  lStack_b0 = *(int64_t *)(param_1 + 8);
  uStack_120 = (int64_t)puStack_108 - (int64_t)(lStack_b0 + uVar19);
  uVar12 = (int)uStack_120 + 1;
  uVar15 = 8;
  if (uVar12 < 8) {
    uVar15 = uVar12;
  }
  uStack_18c = 0;
  if ((uint64_t *)(lStack_b0 + uVar19) <= puStack_108) {
    uStack_18c = uVar15;
  }
  uVar15 = *(uint32_t *)(param_1 + 0x18);
  uStack_148 = (uint64_t)uVar15;
  uStack_124 = *(uint32_t *)(param_1 + 0x10c);
  uVar12 = 6;
  if (uStack_124 < 6) {
    uVar12 = uStack_124;
  }
  puStack_a8 = (uint64_t *)(lStack_b0 + uStack_148);
  uStack_9c = 4;
  if (4 < uVar12) {
    uStack_9c = uVar12;
  }
  puVar24 = (uint64_t *)((uint64_t)(param_4 == puStack_a8) + (int64_t)param_4);
  uStack_128 = *(uint32_t *)(param_1 + 0x110);
  uVar22 = 6;
  if (uStack_128 < 6) {
    uVar22 = uStack_128;
  }
  if (uVar22 < 5) {
    uVar22 = 4;
  }
  lStack_180 = *(int64_t *)(param_1 + 0x10);
  uStack_10c = *param_3;
  uStack_100 = param_3[1];
  uVar3 = *(uint32_t *)(param_1 + 0x100);
  *(uint32_t *)(param_1 + 300) = 0;
  uStack_18c = uStack_18c + uVar13;
  uVar4 = *(uint32_t *)(param_1 + 0x1c);
  uStack_150 = (uint64_t)uStack_18c;
  if (uVar13 < uStack_18c) {
    uVar26 = *(uint64_t *)(param_1 + 0x60);
    cVar8 = (char)*(uint32_t *)(param_1 + 0x34);
    do {
      if (uStack_128 < 6) {
        if (uStack_128 == 5) {
          uVar16 = *(int64_t *)(lStack_b0 + uVar19) * -0x30e4432345000000;
          goto LAB_7fffa4fcf52a;
        }
LAB_7fffa4fcf4e6:
        uVar13 = (*(int *)(lStack_b0 + uVar19) * -0x61c8864f ^ (uint32_t)uVar26) >>
                 (0x18U - cVar8 & 0x1f);
      }
      else {
        if (uVar22 != 6) goto LAB_7fffa4fcf4e6;
        uVar16 = *(int64_t *)(lStack_b0 + uVar19) * -0x30e4432340650000;
LAB_7fffa4fcf52a:
        uVar13 = (uint32_t)((uVar16 ^ uVar26) >> (0x38U - cVar8 & 0x3f));
      }
      *(uint32_t *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar19 & 7) * 4) = uVar13;
      if (uStack_150 - 1 == uVar19) break;
      uVar19 = uVar19 + 1;
    } while( true );
  }
  puStack_138 = (uint64_t *)(param_5 + (int64_t)param_4);
  puStack_f0 = param_3;
  if (puVar24 < puStack_108) {
    puStack_130 = (uint64_t *)(lStack_180 + uStack_148);
    puStack_d0 = (uint64_t *)((uint64_t)uVar4 + lStack_180);
    uStack_164 = 1 << ((uint8_t)uVar3 & 0x1f);
    puStack_160 = (uint64_t *)((int64_t)puStack_138 + -1);
    puVar1 = (uint64_t *)((int64_t)puStack_138 - 7);
    puStack_178 = (uint64_t *)((int64_t)puStack_138 + -3);
    iStack_fc = uVar15 - 1;
    puStack_158 = puStack_138 + -4;
    lStack_118 = uStack_148 + 8 + lStack_b0;
    uStack_188 = param_1;
    uStack_e8 = uStack_148;
    do {
      uVar19 = uStack_188;
      iVar27 = ((int)puVar24 - (int)lStack_b0) + 1;
      uVar13 = iVar27 - uStack_10c;
      iVar5 = *(int *)(param_1 + 0x1c);
      lVar17 = lStack_b0;
      if (uVar13 < (uint32_t)uStack_e8) {
        lVar17 = lStack_180;
      }
      iVar23 = iVar27 - uStack_164;
      if ((uint32_t)(iVar27 - iVar5) <= uStack_164) {
        iVar23 = iVar5;
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        iVar23 = iVar5;
      }
      if (((uint32_t)(iVar27 - iVar23) < uStack_10c) || (iStack_fc - uVar13 < 3)) {
LAB_7fffa4fcf78e:
        uStack_1b0 = 999999999;
        puStack_1a0 = puVar24;
        if (uStack_128 < 5) {
          if (uStack_124 < 5) {
            lVar17 = ((param_1 << 2 | param_1 >> 0x3e) ^ param_1 ^ (param_1 << 9 | param_1 >> 0x37)
                     ^ 0xffffffffa21ec8f9) * -0xfffffffffffff;
            FUN_7fffa561dc20(&uStack_1b0,puVar24,
                             ((int64_t)puStack_138 << 0x3f) + (int64_t)puStack_138);
            uVar26 = lVar17 * -0xfffffffffffff - 0xd26bbe7d;
            uVar15 = uStack_10c;
            uVar13 = uStack_100;
          }
          else if (uStack_124 == 5) {
            puVar31 = puStack_138;
            FUN_7fffa55f1500(&uStack_1b0,puVar24);
            uVar19 = ((int64_t)puVar31 << 0x2a | (uint64_t)puVar31 >> 0x16) ^
                     ((int64_t)puVar31 << 0x2b | (uint64_t)puVar31 >> 0x15) ^ (uint64_t)puVar31;
            uVar19 = (uVar19 << 0x14 | uVar19 >> 0x2c) ^ (uVar19 << 0x16 | uVar19 >> 0x2a) ^ uVar19;
            uVar19 = (uVar19 << 0x28 | uVar19 >> 0x18) ^ (uVar19 << 0x2c | uVar19 >> 0x14) ^ uVar19;
            uVar19 = (uVar19 << 0x18 | uVar19 >> 0x28) ^ (uVar19 << 0x10 | uVar19 >> 0x30) ^ uVar19;
            uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) ^ (uVar19 << 0x30 | uVar19 >> 0x10) ^ uVar19;
            uVar26 = uVar19 << 0x20 | uVar19 >> 0x20;
            uVar15 = uStack_10c;
            uVar13 = uStack_100;
          }
          else {
            pcVar25 = (code *)((int64_t)(short)(((uint16_t)uStack_9c | 1) * -0x59a1 + 0x223d) +
                              0x7fffa517a3aa);
            bVar6 = (uint8_t)uStack_9c & 0x1f;
            (*pcVar25)(param_1 ^ (0xff80f01fU >> bVar6 | -0x7f0fe1 << 0x20 - bVar6),0x17fe9ff7);
            uVar26 = ((int64_t)pcVar25 * -0x5555555555555555 + 0x5555555548961e29) *
                     0x100000000000001;
            uVar15 = uStack_10c;
            uVar13 = uStack_100;
          }
        }
        else if (uStack_128 == 5) {
          if (uStack_124 < 5) {
            pcStack_c0 = (code *)CONCAT44(pcStack_c0._4_4_,0xea0e9a2c);
            uStack_b8 = (uint64_t)uStack_124;
            uStack_198 = ~uStack_b8;
            puStack_170 = (uint64_t *)0x5397b9aa;
            uStack_d8 = 0x3187c8f8;
            lStack_f8 = ((uint64_t)(uStack_124 ^ uStack_18c & uVar12) +
                        (uint64_t)((uVar12 ^ uStack_18c) & (uint32_t)uStack_198)) * -0x7e35775e;
            uStack_e0 = 0x96833a8e;
            puStack_1a8 = (uint64_t *)CONCAT44(puStack_1a8._4_4_,0xe0092678);
            uStack_140 = 0x2853f1bf;
            uStack_c8 = param_1 - 0x5c4bfbec;
            uVar26 = (int64_t)puStack_138 + 0x41ec0db;
            FUN_7fffa547a400(&uStack_1b0,puVar24,uVar26,uStack_c8 * 0x80 | uStack_c8 >> 0x39);
            uVar26 = (uVar26 << 0x1c | uVar26 >> 0x24) ^ (uVar26 << 0x3e | uVar26 >> 2) ^ uVar26;
            uVar26 = (uVar26 << 0x3c | uVar26 >> 4) ^ (uVar26 << 0x38 | uVar26 >> 8) ^ uVar26;
            uVar26 = (uVar26 << 0x38 | uVar26 >> 8) ^ (uVar26 << 0x30 | uVar26 >> 0x10) ^ uVar26;
            uVar26 = (uVar26 << 0x30 | uVar26 >> 0x10) ^ (uVar26 << 0x20 | uVar26 >> 0x20) ^ uVar26;
            uVar16 = uVar26 << 0x20 | uVar26 >> 0x20;
            param_1 = uVar19;
            uVar26 = uVar16 + 0xffc00ffc00ffc01;
            uVar15 = uStack_10c;
            uVar13 = uStack_100;
            if (puStack_170 == (uint64_t *)0x5397b9aa) {
              uVar26 = uVar16 * 0xffc00ffc00ffc01;
              uVar15 = uStack_10c;
            }
          }
          else if (uStack_124 == 5) {
            uVar26 = ((int64_t)puVar24 << 0x30) + (int64_t)puVar24;
            uVar19 = ((int64_t)puStack_138 << 0x37 | (uint64_t)puStack_138 >> 9) ^
                     ((int64_t)puStack_138 << 0x15 | (uint64_t)puStack_138 >> 0x2b) ^
                     (uint64_t)puStack_138;
            FUN_7fffa5609610(param_1,uVar19 << 0xd | uVar19 >> 0x33);
            uVar26 = uVar26 >> 1 ^ uVar26;
            uVar26 = uVar26 >> 2 ^ uVar26;
            uVar26 = uVar26 >> 4 ^ uVar26;
            uVar26 = uVar26 >> 8 ^ uVar26;
            uVar26 = uVar26 >> 0x10 ^ uVar26;
            uVar26 = uVar26 >> 0x20 ^ uVar26;
            uVar15 = uStack_10c;
            uVar13 = uStack_100;
          }
          else {
            uVar19 = (*(code *)(&UNK_7fffa528b360 +
                               (int)((0x81fffec1 - uStack_9c) * 0x80 |
                                    0x81fffec1 - uStack_9c >> 0x19)))
                               (param_1 << 0x1d | param_1 >> 0x23,puVar24,&uStack_1b0);
            uVar26 = ~uVar19 >> 0x33 ^ ~uVar19;
            uVar15 = uStack_10c;
            uVar13 = uStack_100;
          }
        }
        else if (uStack_124 < 5) {
          uVar19 = param_1 + 0x3adc4736;
          uVar19 = (uVar19 * 0x20000000 | uVar19 >> 0x23) ^ (uVar19 * 0x80 | uVar19 >> 0x39) ^
                   (uVar19 << 0x24 | uVar19 >> 0x1c);
          FUN_7fffa5251f50(puStack_138,
                           (uint64_t)(uStack_124 != 5) * 0xc0000090 + 0x90d04344 |
                           (uint64_t)(uStack_124 != 5) * -0x108682232,FUN_7fffa5251f50,
                           uVar19 - 0x3b0fc4f5);
          uVar26 = uVar19 - 0xf40f6131;
          uVar15 = uStack_10c;
          uVar13 = uStack_100;
        }
        else if (uStack_124 == 5) {
          puStack_170 = (uint64_t *)((int64_t)&uStack_1b0 * 0x11000000);
          pcStack_c0 = FUN_7fffa5696410;
          puStack_1a8 = (uint64_t *)(param_1 * 0x1d11073615a9);
          uVar26 = (int64_t)&uStack_1b0 * 0x11;
          lVar17 = FUN_7fffa5696410(puVar24,puStack_138,
                                    (uStack_120 & uStack_148 & ~(uint64_t)uVar12) * 0x5254986e,
                                    (uVar26 ^ (uint64_t)puStack_170) - (uVar26 << 0x25));
          uVar26 = lVar17 * 0x1e22c07081a64d69;
          uVar26 = (lVar17 * 0x1603840d326b4800 | uVar26 >> 0x35) ^
                   (lVar17 * 0x3840d326b4800000 | uVar26 >> 0x29) ^ uVar26;
          uVar26 = (uVar26 << 0x16 | uVar26 >> 0x2a) ^ (uVar26 << 0x2e | uVar26 >> 0x12) ^ uVar26;
          uVar26 = (uVar26 << 0x2c | uVar26 >> 0x14) ^ (uVar26 << 0x1c | uVar26 >> 0x24) ^ uVar26;
          param_1 = uVar19;
          uVar26 = (uVar26 << 0x38 | uVar26 >> 8) ^ (uVar26 << 0x18 | uVar26 >> 0x28) ^ uVar26;
          uVar15 = uStack_10c;
          uVar13 = uStack_100;
        }
        else {
          uVar19 = param_1 >> 5 ^ param_1;
          uVar26 = uVar19 << 0x3d | uVar19 >> 3;
          uVar19 = ((int64_t)&uStack_1b0 * 0x8000000 | (uint64_t)&uStack_1b0 >> 0x25) ^
                   ((int64_t)&uStack_1b0 << 0x27 | (uint64_t)&uStack_1b0 >> 0x19) ^
                   (uint64_t)&uStack_1b0;
          auVar34._8_4_ = (int)uVar19;
          auVar34._0_8_ = uVar19;
          auVar34._12_4_ = (int)(uVar19 >> 0x20);
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = 0xffffffffffffffff;
          auVar7._12_4_ = 0xffffffff;
          (*(code *)((int64_t)(short)(((uint16_t)uStack_9c ^ 0xd773) * -0x172d) + 0x7fffa52ca681))
                    (((SUB168(auVar34 ^ auVar7,0) >> 0x20) * 0xa38cffbb << 0x20) +
                     (uint64_t)SUB164(auVar34 ^ auVar7,0) * 0xa38cffbb ^ 0xffffffffffffffff,
                     0xd1ee8e90);
          uVar26 = uVar26 - 0x69f1c0f7;
          uVar15 = uStack_10c;
          uVar13 = uStack_100;
        }
        uStack_100 = uVar15;
        uStack_10c = uStack_100;
        if (3 < uVar26) {
          puVar31 = puVar24;
          if (uStack_1b0 < 4) {
            uStack_100 = uVar13;
          }
          else {
            uVar19 = (int64_t)puVar24 + (3 - (uStack_1b0 + lStack_b0));
            puVar14 = puStack_a8;
            lVar17 = lStack_b0;
            if ((uint32_t)uVar19 < (uint32_t)uStack_e8) {
              puVar14 = puStack_d0;
              lVar17 = lStack_180;
            }
            uVar19 = uVar19 & 0xffffffff;
            if (puVar14 < (uint64_t *)(lVar17 + uVar19) && param_4 < puVar24) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + -1);
              puVar31 = (uint64_t *)(lVar17 + uVar19);
              do {
                puVar31 = (uint64_t *)((int64_t)puVar31 + -1);
                if ((char)*puVar24 != *(char *)puVar31) break;
                uVar26 = uVar26 + 1;
                bVar33 = param_4 < puVar24;
                puVar24 = (uint64_t *)((int64_t)puVar24 + -1);
              } while (bVar33 && puVar14 < puVar31);
              puVar31 = (uint64_t *)((int64_t)puVar24 + 1);
            }
            uStack_10c = (int)uStack_1b0 - 3;
          }
          goto LAB_7fffa4fd0695;
        }
        uVar19 = (int64_t)puVar24 - (int64_t)param_4;
        puVar24 = (uint64_t *)((int64_t)puVar24 + (uVar19 >> 8) + 1);
        *(uint32_t *)(param_1 + 300) = (uint32_t)(0x8ff < uVar19);
        uStack_100 = uVar13;
      }
      else {
        puVar31 = (uint64_t *)((int64_t)puVar24 + 1);
        piVar29 = (int *)(lVar17 + (uint64_t)uVar13);
        if (*(int *)puVar31 != *piVar29) goto LAB_7fffa4fcf78e;
        puVar14 = (uint64_t *)(piVar29 + 1);
        puStack_1a8 = (uint64_t *)((int64_t)puVar24 + 5);
        puStack_170 = puStack_138;
        if (uVar13 < (uint32_t)uStack_e8) {
          puStack_170 = puStack_130;
        }
        puVar18 = (uint64_t *)((int64_t)puVar24 + (int64_t)puStack_170 + (5 - (int64_t)puVar14))
        ;
        if (puStack_138 <= puVar18) {
          puVar18 = puStack_138;
        }
        puVar21 = puVar14;
        puVar30 = puStack_1a8;
        if (puStack_1a8 < (uint64_t *)((int64_t)puVar18 - 7U)) {
          if (*puVar14 == *puStack_1a8) {
            lVar20 = 0;
            do {
              puVar21 = (uint64_t *)((int64_t)puVar24 + lVar20 + 0xd);
              if ((uint64_t *)((int64_t)puVar18 - 7U) <= puVar21) {
                puVar30 = (uint64_t *)((int64_t)puVar24 + lVar20 + 0xd);
                puVar21 = (uint64_t *)((int64_t)piVar29 + lVar20 + 0xc);
                goto LAB_7fffa4fd04d3;
              }
              uVar19 = *puVar21;
              uVar26 = *(uint64_t *)((uint64_t)uVar13 + lVar17 + 0xc + lVar20);
              lVar20 = lVar20 + 8;
            } while (uVar26 == uVar19);
            uVar13 = 0;
            for (uVar26 = uVar26 ^ uVar19; (uVar26 & 1) == 0;
                uVar26 = uVar26 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar26 = (uint64_t)(uVar13 >> 3) + lVar20;
          }
          else {
            uVar13 = 0;
            for (uVar19 = *puStack_1a8 ^ *puVar14; (uVar19 & 1) == 0;
                uVar19 = uVar19 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar26 = (uint64_t)(uVar13 >> 3);
          }
        }
        else {
LAB_7fffa4fd04d3:
          if ((puVar30 < (uint64_t *)((int64_t)puVar18 - 3U)) && ((int)*puVar21 == (int)*puVar30))
          {
            puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
          }
          if ((puVar30 < (uint64_t *)((int64_t)puVar18 - 1U)) &&
             ((short)*puVar21 == (short)*puVar30)) {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
            puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
          }
          if (puVar30 < puVar18) {
            puVar30 = (uint64_t *)
                      ((int64_t)puVar30 + (uint64_t)((char)*puVar21 == (char)*puVar30));
          }
          uVar26 = (int64_t)puVar30 - (int64_t)puStack_1a8;
        }
        if ((uint64_t *)((int64_t)puVar14 + uVar26) == puStack_170) {
          puVar21 = (uint64_t *)((int64_t)puStack_1a8 + uVar26);
          puVar14 = puVar21;
          puVar18 = puStack_a8;
          if (puVar21 < puVar1) {
            if (*puStack_a8 == *puVar21) {
              puVar14 = (uint64_t *)((int64_t)puVar24 + uVar26 + 0xd);
              lVar17 = 8;
              if (puVar14 < puVar1) {
LAB_7fffa4fd05b0:
                if (*(uint64_t *)((int64_t)puStack_a8 + lVar17) == *puVar14)
                goto code_r0x7fffa4fd05c8;
                uVar13 = 0;
                for (uVar19 = *(uint64_t *)((int64_t)puStack_a8 + lVar17) ^ *puVar14;
                    (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                  uVar13 = uVar13 + 1;
                }
                uVar19 = (uint64_t)(uVar13 >> 3) + lVar17;
                goto LAB_7fffa4fd066b;
              }
LAB_7fffa4fd05d7:
              puVar18 = (uint64_t *)(lVar17 + (int64_t)puStack_a8);
              goto LAB_7fffa4fd05df;
            }
            uVar13 = 0;
            for (uVar19 = *puVar21 ^ *puStack_a8; (uVar19 & 1) == 0;
                uVar19 = uVar19 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar19 = (uint64_t)(uVar13 >> 3);
          }
          else {
LAB_7fffa4fd05df:
            if ((puVar14 < puStack_178) && ((int)*puVar18 == (int)*puVar14)) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
              puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
            }
            if ((puVar14 < puStack_160) && ((short)*puVar18 == (short)*puVar14)) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
              puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
            }
            if (puVar14 < puStack_138) {
              puVar14 = (uint64_t *)
                        ((int64_t)puVar14 + (uint64_t)((char)*puVar18 == (char)*puVar14));
            }
            uVar19 = (int64_t)puVar14 - (int64_t)puVar21;
          }
LAB_7fffa4fd066b:
          uVar26 = uVar26 + uVar19;
        }
        uVar26 = uVar26 + 4;
        uStack_1b0 = 1;
        param_1 = uStack_188;
LAB_7fffa4fd0695:
        puVar24 = (uint64_t *)param_2[3];
        uVar19 = (int64_t)puVar31 - (int64_t)param_4;
        if (puStack_158 < puVar31) {
          puVar14 = puVar24;
          if (param_4 <= puStack_158) {
            puVar14 = (uint64_t *)((int64_t)puVar24 + ((int64_t)puStack_158 - (int64_t)param_4))
            ;
            uVar16 = param_4[1];
            *puVar24 = *param_4;
            puVar24[1] = uVar16;
            if (0x10 < (int64_t)puStack_158 - (int64_t)param_4) {
              puVar24 = puVar24 + 6;
              do {
                bVar33 = puVar24 < puVar14;
                uVar16 = param_4[3];
                puVar24[-4] = param_4[2];
                puVar24[-3] = uVar16;
                uVar16 = param_4[5];
                puVar24[-2] = param_4[4];
                puVar24[-1] = uVar16;
                puVar24 = puVar24 + 4;
                param_4 = param_4 + 4;
              } while (bVar33);
            }
            param_4 = puStack_158;
          }
          if (param_4 < puVar31) {
            uVar16 = (int64_t)puVar31 - (int64_t)param_4;
            if ((uVar16 < 4) || ((uint64_t)((int64_t)puVar14 - (int64_t)param_4) < 0x20)) {
LAB_7fffa4fd07fe:
              puVar24 = puVar14;
            }
            else {
              if (uVar16 < 0x20) {
                uVar32 = 0;
              }
              else {
                uVar32 = uVar16 & 0xffffffffffffffe0;
                uVar28 = 0;
                do {
                  uVar11 = ((uint64_t *)((int64_t)param_4 + uVar28))[1];
                  puVar2 = (uint64_t *)((int64_t)param_4 + uVar28 + 0x10);
                  uVar9 = *puVar2;
                  uVar10 = puVar2[1];
                  *(uint64_t *)((int64_t)puVar14 + uVar28) =
                       *(uint64_t *)((int64_t)param_4 + uVar28);
                  ((uint64_t *)((int64_t)puVar14 + uVar28))[1] = uVar11;
                  puVar2 = (uint64_t *)((int64_t)puVar14 + uVar28 + 0x10);
                  *puVar2 = uVar9;
                  puVar2[1] = uVar10;
                  uVar28 = uVar28 + 0x20;
                } while (uVar32 != uVar28);
                if (uVar16 == uVar32) goto LAB_7fffa4fd09f0;
                if ((uVar16 & 0x1c) == 0) {
                  puVar14 = (uint64_t *)((int64_t)puVar14 + uVar32);
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar32);
                  goto LAB_7fffa4fd07fe;
                }
              }
              uVar28 = uVar16 & 0xfffffffffffffffc;
              puVar24 = (uint64_t *)((int64_t)puVar14 + uVar28);
              do {
                *(uint32_t *)((int64_t)puVar14 + uVar32) =
                     *(uint32_t *)((int64_t)param_4 + uVar32);
                uVar32 = uVar32 + 4;
              } while (uVar28 != uVar32);
              if (uVar16 == uVar28) goto LAB_7fffa4fd09f0;
              param_4 = (uint64_t *)((int64_t)param_4 + uVar28);
            }
            uVar13 = (int)puVar31 - (int)param_4;
            uVar16 = (uint64_t)uVar13 & 7;
            puVar14 = param_4;
            puVar18 = param_4;
            if ((uVar13 & 7) != 0) {
              do {
                puVar14 = (uint64_t *)((int64_t)puVar18 + 1);
                *(char *)puVar24 = (char)*puVar18;
                puVar24 = (uint64_t *)((int64_t)puVar24 + 1);
                uVar16 = uVar16 - 1;
                puVar18 = puVar14;
              } while (uVar16 != 0);
            }
            if ((uint64_t)((int64_t)param_4 - (int64_t)puVar31) < 0xfffffffffffffff9) {
              lVar17 = 0;
              while( true ) {
                *(uint8_t *)((int64_t)puVar24 + lVar17) =
                     *(uint8_t *)((int64_t)puVar14 + lVar17);
                *(uint8_t *)((int64_t)puVar24 + lVar17 + 1) =
                     *(uint8_t *)((int64_t)puVar14 + lVar17 + 1);
                *(uint8_t *)((int64_t)puVar24 + lVar17 + 2) =
                     *(uint8_t *)((int64_t)puVar14 + lVar17 + 2);
                *(uint8_t *)((int64_t)puVar24 + lVar17 + 3) =
                     *(uint8_t *)((int64_t)puVar14 + lVar17 + 3);
                *(uint8_t *)((int64_t)puVar24 + lVar17 + 4) =
                     *(uint8_t *)((int64_t)puVar14 + lVar17 + 4);
                *(uint8_t *)((int64_t)puVar24 + lVar17 + 5) =
                     *(uint8_t *)((int64_t)puVar14 + lVar17 + 5);
                *(uint8_t *)((int64_t)puVar24 + lVar17 + 6) =
                     *(uint8_t *)((int64_t)puVar14 + lVar17 + 6);
                *(uint8_t *)((int64_t)puVar24 + lVar17 + 7) =
                     *(uint8_t *)((int64_t)puVar14 + lVar17 + 7);
                if ((uint64_t *)((int64_t)puVar14 + lVar17 + 8) == puVar31) break;
                lVar17 = lVar17 + 8;
              }
            }
          }
LAB_7fffa4fd09f0:
          lVar17 = param_2[1];
          param_2[3] = param_2[3] + uVar19;
          if (0xffff < uVar19) {
            *(uint32_t *)(param_2 + 9) = 1;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar17 - *param_2) >> 3);
          }
          param_1 = uStack_188;
        }
        else {
          uVar16 = param_4[1];
          *puVar24 = *param_4;
          puVar24[1] = uVar16;
          if (0x10 < uVar19) {
            lVar17 = param_2[3];
            uVar16 = param_4[3];
            *(uint64_t *)(lVar17 + 0x10) = param_4[2];
            *(uint64_t *)(lVar17 + 0x18) = uVar16;
            if (0x20 < (int64_t)uVar19) {
              uVar16 = lVar17 + 0x40;
              param_4 = param_4 + 6;
              while( true ) {
                uVar32 = param_4[-1];
                *(uint64_t *)(uVar16 - 0x20) = param_4[-2];
                *(uint64_t *)(uVar16 - 0x18) = uVar32;
                uVar32 = param_4[1];
                *(uint64_t *)(uVar16 - 0x10) = *param_4;
                *(uint64_t *)(uVar16 - 8) = uVar32;
                if (lVar17 + uVar19 <= uVar16) break;
                uVar16 = uVar16 + 0x20;
                param_4 = param_4 + 4;
              }
            }
            goto LAB_7fffa4fd09f0;
          }
          lVar17 = param_2[1];
          param_2[3] = param_2[3] + uVar19;
        }
        *(short *)(lVar17 + 4) = (short)uVar19;
        *(int *)param_2[1] = (int)uStack_1b0;
        if (0xffff < uVar26 - 3) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        }
        *(short *)(param_2[1] + 6) = (short)(uVar26 - 3);
        param_2[1] = param_2[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          uVar13 = *(uint32_t *)(param_1 + 0x2c);
          uVar19 = (uint64_t)uVar13;
          uVar15 = ((int)puStack_108 - (int)(uint64_t *)(lStack_b0 + uVar19)) + 1;
          if (7 < uVar15) {
            uVar15 = 8;
          }
          if (puStack_108 < (uint64_t *)(lStack_b0 + uVar19)) {
            uVar15 = 0;
          }
          if (uVar13 < uVar15 + uVar13) {
            uVar16 = *(uint64_t *)(param_1 + 0x60);
            cVar8 = (char)*(uint32_t *)(param_1 + 0x34);
            if (5 < uStack_128) goto LAB_7fffa4fd0ef0;
            do {
              if (uStack_128 == 5) {
                uVar32 = *(int64_t *)(lStack_b0 + uVar19) * -0x30e4432345000000;
                goto LAB_7fffa4fd0f2a;
              }
              uVar32 = (uint64_t)
                       ((*(int *)(lStack_b0 + uVar19) * -0x61c8864f ^ (uint32_t)uVar16) >>
                       (0x18U - cVar8 & 0x1f));
              while( true ) {
                *(int *)(uStack_188 + 0x40 + (uint64_t)((uint32_t)uVar19 & 7) * 4) = (int)uVar32;
                param_1 = uStack_188;
                if ((uint64_t)(uVar15 + uVar13) - 1 == uVar19) goto LAB_7fffa4fd0ac1;
                uVar19 = uVar19 + 1;
                if (uStack_128 < 6) break;
LAB_7fffa4fd0ef0:
                uVar32 = *(int64_t *)(lStack_b0 + uVar19) * -0x30e4432340650000;
LAB_7fffa4fd0f2a:
                uVar32 = (uVar32 ^ uVar16) >> (0x38U - cVar8 & 0x3f);
              }
            } while( true );
          }
LAB_7fffa4fd0ac1:
          *(uint32_t *)(param_1 + 300) = 0;
        }
        param_4 = (uint64_t *)((int64_t)puVar31 + uVar26);
        if (puStack_108 < param_4) {
          puVar24 = param_4;
        }
        else {
          uVar13 = uStack_100;
          do {
            uStack_100 = uStack_10c;
            iVar5 = *(int *)(param_1 + 0x1c);
            iVar23 = (int)param_4 - (int)lStack_b0;
            uVar15 = iVar23 - uVar13;
            iVar27 = iVar23 - uStack_164;
            if ((uint32_t)(iVar23 - iVar5) <= uStack_164) {
              iVar27 = iVar5;
            }
            if (*(int *)(param_1 + 0x28) != 0) {
              iVar27 = iVar5;
            }
            lVar17 = lStack_b0;
            if (uVar15 < (uint32_t)uStack_e8) {
              lVar17 = lStack_180;
            }
            puVar24 = param_4;
            uStack_10c = uStack_100;
            if (iStack_fc - uVar15 < 3) {
              uStack_100 = uVar13;
              break;
            }
            if ((uint32_t)(iVar23 - iVar27) < uVar13) {
              uStack_100 = uVar13;
              break;
            }
            piVar29 = (int *)(lVar17 + (uint64_t)uVar15);
            if ((int)*param_4 != *piVar29) {
              uStack_100 = uVar13;
              break;
            }
            puVar24 = (uint64_t *)((int64_t)param_4 + 4);
            puVar31 = (uint64_t *)(piVar29 + 1);
            puVar14 = puStack_138;
            if (uVar15 < (uint32_t)uStack_e8) {
              puVar14 = puStack_130;
            }
            puVar18 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar14 + (4 - (int64_t)puVar31))
            ;
            if (puStack_138 <= puVar18) {
              puVar18 = puStack_138;
            }
            puVar21 = puVar24;
            puVar30 = puVar31;
            if (puVar24 < (uint64_t *)((int64_t)puVar18 - 7U)) {
              if (*puVar31 == *puVar24) {
                lVar17 = 0xc;
LAB_7fffa4fd0c60:
                puVar21 = (uint64_t *)((int64_t)param_4 + lVar17);
                if (puVar21 < (uint64_t *)((int64_t)puVar18 - 7U)) {
                  if (*(uint64_t *)((int64_t)piVar29 + lVar17) == *puVar21)
                  goto code_r0x7fffa4fd0c79;
                  uVar15 = 0;
                  for (uVar19 = *(uint64_t *)((int64_t)piVar29 + lVar17) ^ *puVar21;
                      (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar19 = ((uint64_t)(uVar15 >> 3) + lVar17) - 4;
                  goto LAB_7fffa4fd0cf2;
                }
                puVar30 = (uint64_t *)((int64_t)piVar29 + lVar17);
                goto LAB_7fffa4fd0c85;
              }
              uVar15 = 0;
              for (uVar19 = *puVar31 ^ *puVar24; (uVar19 & 1) == 0;
                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                uVar15 = uVar15 + 1;
              }
              uVar19 = (uint64_t)(uVar15 >> 3);
            }
            else {
LAB_7fffa4fd0c85:
              if ((puVar21 < (uint64_t *)((int64_t)puVar18 - 3U)) &&
                 ((int)*puVar30 == (int)*puVar21)) {
                puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
                puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
              }
              if ((puVar21 < (uint64_t *)((int64_t)puVar18 - 1U)) &&
                 ((short)*puVar30 == (short)*puVar21)) {
                puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
                puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
              }
              if (puVar21 < puVar18) {
                puVar21 = (uint64_t *)
                          ((int64_t)puVar21 + (uint64_t)((char)*puVar30 == (char)*puVar21));
              }
              uVar19 = (int64_t)puVar21 - (int64_t)puVar24;
            }
LAB_7fffa4fd0cf2:
            if ((uint64_t *)((int64_t)puVar31 + uVar19) == puVar14) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + uVar19);
              puVar31 = puStack_a8;
              puVar14 = puVar24;
              if (puVar24 < puVar1) {
                if (*puStack_a8 == *puVar24) {
                  lVar17 = 0;
                  do {
                    puVar31 = (uint64_t *)((int64_t)param_4 + lVar17 + uVar19 + 0xc);
                    if (puVar1 <= puVar31) {
                      puVar14 = (uint64_t *)((int64_t)param_4 + lVar17 + uVar19 + 0xc);
                      puVar31 = (uint64_t *)(lVar17 + lStack_118);
                      goto LAB_7fffa4fd0e08;
                    }
                    uVar26 = *puVar31;
                    puVar31 = (uint64_t *)(lStack_118 + lVar17);
                    lVar17 = lVar17 + 8;
                  } while (*puVar31 == uVar26);
                  uVar15 = 0;
                  for (uVar26 = *puVar31 ^ uVar26; (uVar26 & 1) == 0;
                      uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar26 = (uint64_t)(uVar15 >> 3) + lVar17;
                }
                else {
                  uVar15 = 0;
                  for (uVar26 = *puVar24 ^ *puStack_a8; (uVar26 & 1) == 0;
                      uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar26 = (uint64_t)(uVar15 >> 3);
                }
              }
              else {
LAB_7fffa4fd0e08:
                if ((puVar14 < puStack_178) && ((int)*puVar31 == (int)*puVar14)) {
                  puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
                  puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
                }
                if ((puVar14 < puStack_160) && ((short)*puVar31 == (short)*puVar14)) {
                  puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
                  puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
                }
                if (puVar14 < puStack_138) {
                  puVar14 = (uint64_t *)
                            ((int64_t)puVar14 + (uint64_t)((char)*puVar31 == (char)*puVar14));
                }
                uVar26 = (int64_t)puVar14 - (int64_t)puVar24;
              }
              uVar19 = uVar19 + uVar26;
            }
            if (param_4 <= puStack_158) {
              puVar24 = (uint64_t *)param_2[3];
              uVar26 = param_4[1];
              *puVar24 = *param_4;
              puVar24[1] = uVar26;
            }
            *(uint16_t *)(param_2[1] + 4) = 0;
            *(uint32_t *)param_2[1] = 1;
            if (0xffff < uVar19 + 1) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            param_4 = (uint64_t *)((int64_t)param_4 + uVar19 + 4);
            *(short *)(param_2[1] + 6) = (short)(uVar19 + 1);
            param_2[1] = param_2[1] + 8;
            puVar24 = param_4;
            uStack_10c = uVar13;
            uVar13 = uStack_100;
          } while (param_4 <= puStack_108);
        }
      }
    } while (puVar24 < puStack_108);
  }
  puStack_f0[1] = uStack_100;
  *puStack_f0 = uStack_10c;
  return (int64_t)puStack_138 - (int64_t)param_4;
code_r0x7fffa4fd05c8:
  puVar14 = puVar14 + 1;
  lVar17 = lVar17 + 8;
  if (puVar1 <= puVar14) goto LAB_7fffa4fd05d7;
  goto LAB_7fffa4fd05b0;
code_r0x7fffa4fd0c79:
  lVar17 = lVar17 + 8;
  goto LAB_7fffa4fd0c60;
}


// ============================================================================
// Function : FUN_7fffa4fd0fe0  |  RVA: 0x860fe0  |  Size: 275 bytes
// Callers  : none
// Callees  : FUN_7fffa4fd7775@0x867775
// ============================================================================
void FUN_7fffa4fd0fe0(code *param_1,code *param_2,uint64_t *param_3,uint32_t param_4)

{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uStack_38;
  
  (*param_1)(0xffffffffffffffff,*param_3);
  if (param_4 != 0) {
    uVar3 = (uint64_t)param_4;
    while( true ) {
      uVar3 = uVar3 - 1;
      uStack_38 = (uint64_t)*(uint32_t *)(param_3 + 1);
      iVar2 = (*param_2)(param_3[2],0xffffffffffffffff,param_3,0,uStack_38,0,&uStack_38,2,0x400000,
                         *(uint32_t *)((int64_t)param_3 + 0xc));
      if (iVar2 < 0) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(iVar2);
        FUN_7fffa4fd7775();
        return;
      }
      if (uVar3 == 0) break;
      param_3 = param_3 + 5;
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4fd1100  |  RVA: 0x861100  |  Size: 118 bytes
// Callers  : FUN_7fffa549ab90@0xd2ab90, FUN_7fffa522496c@0xab496c, FUN_7fffa52c4238@0xb54238, FUN_7fffa50c9360@0x959360
// Callees  : FUN_7fffa5660680@0xef0680, FUN_7fffa560e460@0xe9e460, FUN_7fffa5181628@0xa11628
// ============================================================================
void FUN_7fffa4fd1100(int64_t param_1)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa5181628();
  *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(lVar1 + 0x90);
  *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(lVar1 + 0x88);
  FUN_7fffa5660680(lVar1,(uint64_t *)(param_1 + 0x18),*(uint64_t *)(param_1 + 8));
  FUN_7fffa560e460(lVar1,param_1 + 0x20,*(uint64_t *)(param_1 + 8));
  if ((*(uint32_t *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint32_t *)(lVar1 + 0x3a8) = *(uint32_t *)(lVar1 + 0x3a8) | 2;
    *(uint8_t *)(param_1 + 0x28) = 2;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4fd1180  |  RVA: 0x861180  |  Size: 21692 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4fd1180(void) {
    /* +0x861180 */ __asm { PUSH RBP }
    /* +0x861181 */ __asm { PUSH R13 }
    /* +0x861183 */ __asm { PUSH R15 }
    /* +0x861185 */ __asm { PUSH R12 }
    /* +0x861187 */ __asm { PUSH RDI }
    /* +0x861188 */ __asm { PUSH RBX }
    /* +0x861189 */ __asm { PUSH RSI }
    /* +0x86118a */ __asm { PUSH R14 }
    /* +0x86118c */ __asm { SUB RSP,0x278 }
    /* +0x861193 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x86119b */ __asm { MOVDQA xmmword ptr [RBP + 0x1e0],XMM15 }
    /* +0x8611a4 */ __asm { MOV qword ptr [RBP + 0x1d8],-0x2 }
    /* +0x8611af */ __asm { MOV RDI,R9 }
    /* +0x8611b2 */ __asm { MOV R8W,0x5c8f }
    /* +0x8611b7 */ __asm { MOV RDX,RCX }
    /* +0x8611ba */ __asm { ROL RDX,0xb }
    /* +0x8611be */ __asm { ROL RDI,0x39 }
    /* +0x8611c2 */ __asm { MOV R11D,0x236cf872 }
    /* +0x8611c8 */ __asm { SUB R11D,EAX }
    /* +0x8611cb */ __asm { ROL R11D,0x15 }
    /* +0x8611cf */ __asm { MOV qword ptr [RBP + 0xa0],R10 }
    /* +0x8611d6 */ __asm { MOV R10D,0xb6d9a2a1 }
    /* +0x8611dc */ __asm { XOR R8D,EAX }
    /* +0x8611df */ __asm { ADD R10D,EAX }
    /* +0x8611e2 */ __asm { XOR R10D,0x30ada900 }
    /* +0x8611e9 */ __asm { ADD R8D,0xffffe4f1 }
    /* +0x8611f0 */ __asm { MOVZX R8D,R8W }
    /* +0x8611f4 */ __asm { XOR R8,0x3fbd }
    /* +0x8611fb */ __asm { MOV R14D,0x3911eeee }
    /* +0x861201 */ __asm { MOV R9,RCX }
    /* +0x861204 */ __asm { ROL R9,0x9 }
    /* +0x861208 */ __asm { XOR R9,RDX }
    /* +0x86120b */ __asm { XOR R9,RCX }
    /* +0x86120e */ __asm { MOV RDX,R9 }
    /* +0x861211 */ __asm { ROL RDX,0x12 }
    /* +0x861215 */ __asm { MOV RCX,R9 }
    /* +0x861218 */ __asm { ROL RCX,0x16 }
    /* +0x86121c */ __asm { SUB RDI,R10 }
    /* +0x86121f */ __asm { LEA R10D,[RAX + R14*0x1] }
    /* +0x861223 */ __asm { ADD R10D,0xc34258d5 }
    /* +0x86122a */ __asm { XOR R10D,0x65ad5e53 }
    /* +0x861231 */ __asm { XOR RCX,RDX }
    /* +0x861234 */ __asm { XOR RCX,R9 }
    /* +0x861237 */ __asm { MOV RDX,RCX }
    /* +0x86123a */ __asm { ROL RDX,0x24 }
    /* +0x86123e */ __asm { MOV R9,RCX }
    /* +0x861241 */ __asm { ROL R9,0x2c }
    /* +0x861245 */ __asm { XOR R9,RDX }
    /* +0x861248 */ __asm { XOR R9,RCX }
    /* +0x86124b */ __asm { MOV RDX,R9 }
    /* +0x86124e */ __asm { ROL RDX,0x18 }
    /* +0x861252 */ __asm { MOV RBX,R9 }
    /* +0x861255 */ __asm { ROL RBX,0x8 }
    /* +0x861259 */ __asm { XOR RBX,RDX }
    /* +0x86125c */ __asm { XOR RBX,R9 }
    /* +0x86125f */ __asm { MOV RDX,RBX }
    /* +0x861262 */ __asm { ROL RDX,0x10 }
    /* +0x861266 */ __asm { MOVSXD R9,R10D }
    /* +0x861269 */ __asm { MOV RCX,RBX }
    /* +0x86126c */ __asm { ROL RCX,0x30 }
    /* +0x861270 */ __asm { XOR RCX,RDX }
    /* +0x861273 */ __asm { XOR RCX,RBX }
    /* +0x861276 */ __asm { MOV RDX,RCX }
    /* +0x861279 */ __asm { ROL RDX,0x20 }
    /* +0x86127d */ __asm { XOR R10D,R10D }
    /* +0x861280 */ __asm { CMP R11,R9 }
    /* +0x861283 */ __asm { CMOVA R10,RDX }
    /* +0x861287 */ __asm { OR R10,RCX }
    /* +0x86128a */ __asm { MOV qword ptr [RBP + 0xc8],R10 }
    /* +0x861291 */ __asm { MOV RDX,qword ptr GS:[R8] }
    /* +0x861295 */ __asm { MOV RDX,qword ptr [RDX + 0x5b8] }
    /* +0x86129c */ __asm { ADD RDX,-0x60a2f3d3 }
    /* +0x8612a3 */ __asm { XOR RDX,0x764b8fe1 }
    /* +0x8612aa */ __asm { MOV R9,-0x294fae75d6e6d0b7 }
    /* +0x8612b4 */ __asm { CMP RDX,R9 }
    /* +0x8612b7 */ __asm { NOP }
    /* +0x8612b8 */ __asm { NOP }
    /* +0x8612b9 */ __asm { NOP }
    /* +0x8612ba */ __asm { NOP }
    /* +0x8612bb */ __asm { NOP }
    /* +0x8612bc */ __asm { NOP }
    /* +0x8612bd */ __asm { NOP }
    /* +0x8612be */ __asm { NOP }
    /* +0x8612bf */ __asm { NOP }
    /* +0x8612c0 */ __asm { NOP }
    /* +0x8612c1 */ __asm { NOP }
    /* +0x8612c2 */ __asm { MOV dword ptr [RBP + 0x110],0x1000164 }
    /* +0x8612cc */ __asm { MOV R10D,dword ptr [RBP + 0x110] }
    /* +0x8612d3 */ __asm { MOV dword ptr [RBP + 0x1a8],R10D }
    /* +0x8612da */ __asm { LEA RDX,[0x7fffa4a91c45] }
    /* +0x8612e1 */ __asm { MOV R10W,0x2d30 }
    /* +0x8612e6 */ __asm { ADD R10D,0x39bd }
    /* +0x8612ed */ __asm { MOV R11D,EAX }
    /* +0x8612f0 */ __asm { XOR R11D,R10D }
    /* +0x8612f3 */ __asm { ADD R11D,0x31fd }
    /* +0x8612fa */ __asm { MOVSX R9,R11W }
    /* +0x8612fe */ __asm { ADD R9,RDX }
    /* +0x861301 */ __asm { MOV R11D,0x43486279 }
    /* +0x861307 */ __asm { MOV qword ptr [RBP + 0x50],RAX }
    /* +0x86130b */ __asm { ADD R11D,EAX }
    /* +0x86130e */ __asm { XOR R11D,0xdbc26ac4 }
    /* +0x861315 */ __asm { MOV qword ptr [RBP + 0xf0],R11 }
    /* +0x86131c */ __asm { MOV qword ptr [RBP + 0x198],0x0 }
    /* +0x861327 */ __asm { MOV ECX,0x218 }
    /* +0x86132c */ __asm { CALL R9 }
    /* +0x86132f */ __asm { MOV RSI,RAX }
    /* +0x861332 */ __asm { RDTSC }
    /* +0x861334 */ __asm { SHL RDX,0x20 }
    /* +0x861338 */ __asm { OR RDX,RAX }
    /* +0x86133b */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0x861345 */ __asm { IMUL RDX,R9 }
    /* +0x861349 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0x861353 */ __asm { ADD RDX,R9 }
    /* +0x861356 */ __asm { MOV RCX,RDX }
    /* +0x861359 */ __asm { SHR RCX,0x3b }
    /* +0x86135d */ __asm { MOV R11,RDX }
    /* +0x861360 */ __asm { SHR R11,0x1b }
    /* +0x861364 */ __asm { SHR RDX,0x2d }
    /* +0x861368 */ __asm { XOR R11D,EDX }
    /* +0x86136b */ __asm { ROR R11D,CL }
    /* +0x86136e */ __asm { AND R11D,0x3 }
    /* +0x861372 */ __asm { CMP R11D,0x2 }
    /* +0x861376 */ __asm { JC 0x7fffa4fd159b }
    /* +0x86137c */ __asm { CMP R11D,0x3 }
    /* +0x861380 */ __asm { MOV R13,qword ptr [RBP + 0x50] }
    /* +0x861384 */ __asm { PXOR XMM0,XMM0 }
    /* +0x861388 */ __asm { JZ 0x7fffa4fd16ed }
    /* +0x86138e */ __asm { MOVDQA xmmword ptr [RBP + 0x110],XMM0 }
    /* +0x861396 */ __asm { MOV dword ptr [RBP + -0x8],0x21208020 }
    /* +0x86139d */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x8613a1 */ __asm { MOV ECX,R10D }
    /* +0x8613a4 */ __asm { AND ECX,0x1 }
    /* +0x8613a7 */ __asm { MOV R15D,R13D }
    /* +0x8613aa */ __asm { OR R15D,0x1 }
    /* +0x8613ae */ __asm { MOV R11D,0x650b5513 }
    /* +0x8613b4 */ __asm { IMUL R11D,R15D }
    /* +0x8613b8 */ __asm { XOR R11D,0x87962a8b }
    /* +0x8613bf */ __asm { MOV EDX,0xadf872d2 }
    /* +0x8613c4 */ __asm { CMP R11,RDX }
    /* +0x8613c7 */ __asm { CMOVNZ ECX,R10D }
    /* +0x8613cb */ __asm { TEST ECX,ECX }
    /* +0x8613cd */ __asm { NOP }
    /* +0x8613ce */ __asm { NOP }
    /* +0x8613cf */ __asm { NOP }
    /* +0x8613d0 */ __asm { NOP }
    /* +0x8613d1 */ __asm { NOP }
    /* +0x8613d2 */ __asm { NOP }
    /* +0x8613d3 */ __asm { MOV R10W,0xf9fc }
    /* +0x8613d8 */ __asm { MOV dword ptr [RBP + 0x110],0x0 }
    /* +0x8613e2 */ __asm { XOR R10D,R13D }
    /* +0x8613e5 */ __asm { NOT R10D }
    /* +0x8613e8 */ __asm { MOVZX R11D,R10W }
    /* +0x8613ec */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0x8613f0 */ __asm { MOV RDX,qword ptr [RDX + 0x18] }
    /* +0x8613f4 */ __asm { ROL RDX,0x36 }
    /* +0x8613f8 */ __asm { MOV R9D,0xbd6e8774 }
    /* +0x8613fe */ __asm { ADD R9,RDX }
    /* +0x861401 */ __asm { MOV RDX,-0x442c454b7ecb03e2 }
    /* +0x86140b */ __asm { CMP R9,RDX }
    /* +0x86140e */ __asm { NOP }
    /* +0x86140f */ __asm { NOP }
    /* +0x861410 */ __asm { NOP }
    /* +0x861411 */ __asm { NOP }
    /* +0x861412 */ __asm { NOP }
    /* +0x861413 */ __asm { NOP }
    /* +0x861414 */ __asm { NOP }
    /* +0x861415 */ __asm { NOP }
    /* +0x861416 */ __asm { NOP }
    /* +0x861417 */ __asm { NOP }
    /* +0x861418 */ __asm { NOP }
    /* +0x861419 */ __asm { NOP }
    /* +0x86141a */ __asm { NOP }
    /* +0x86141b */ __asm { NOP }
    /* +0x86141c */ __asm { NOP }
    /* +0x86141d */ __asm { NOP }
    /* +0x86141e */ __asm { NOP }
    /* +0x86159b */ __asm { CMP R11D,0x1 }
    /* +0x86159f */ __asm { MOV R13,qword ptr [RBP + 0x50] }
    /* +0x8615a3 */ __asm { JZ 0x7fffa4fd18db }
    /* +0x8615a9 */ __asm { MOV RCX,0x0 }
    /* +0x8615b0 */ __asm { NOP }
    /* +0x8615b1 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x8615b8 */ __asm { PXOR XMM0,XMM0 }
    /* +0x8615bc */ __asm { MOVDQA xmmword ptr [RBP + 0x110],XMM0 }
    /* +0x8615c4 */ __asm { MOV dword ptr [RBP + -0x8],0x104b10d8 }
    /* +0x8615cb */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x8615cf */ __asm { MOV dword ptr [RBP + 0x110],0x0 }
    /* +0x8615d9 */ __asm { MOV dword ptr [RBP + -0x8],0xf6ec13c6 }
    /* +0x8615e0 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x8615e4 */ __asm { MOV dword ptr [RBP + -0x8],0x540caa45 }
    /* +0x8615eb */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x8615ef */ __asm { TEST R10B,0x1 }
    /* +0x8615f3 */ __asm { NOP }
    /* +0x8615f4 */ __asm { NOP }
    /* +0x8615f5 */ __asm { NOP }
    /* +0x8615f6 */ __asm { NOP }
    /* +0x8615f7 */ __asm { NOP }
    /* +0x8615f8 */ __asm { LEA RCX,[0x7fffa47b95c2] }
    /* +0x8615ff */ __asm { MOV RDX,-0x192a96dda12183b8 }
    /* +0x861609 */ __asm { CMP RCX,RDX }
    /* +0x86160c */ __asm { NOP }
    /* +0x86160d */ __asm { NOP }
    /* +0x86160e */ __asm { NOP }
    /* +0x86160f */ __asm { NOP }
    /* +0x861610 */ __asm { NOP }
    /* +0x861611 */ __asm { MOV qword ptr [RBP + -0x8],R8 }
    /* +0x861615 */ __asm { MOV EAX,dword ptr [RCX + 0x2f06] }
    /* +0x86161b */ __asm { MOV R10W,0x2270 }
    /* +0x861620 */ __asm { IMUL R10D,R10D,0x4d5 }
    /* +0x861627 */ __asm { ROL R10W,0xc }
    /* +0x86162c */ __asm { XOR R10D,R13D }
    /* +0x86162f */ __asm { MOVZX R9D,R10W }
    /* +0x861633 */ __asm { MOV R10D,R13D }
    /* +0x861636 */ __asm { OR R10D,0x1 }
    /* +0x86163a */ __asm { MOV R11W,0x6cb9 }
    /* +0x86163f */ __asm { ADD R11D,0xffffe7fc }
    /* +0x861646 */ __asm { IMUL R11D,R10D }
    /* +0x86164a */ __asm { MOV R8W,0x20b3 }
    /* +0x86164f */ __asm { ADD R8D,0xffffac9e }
    /* +0x861656 */ __asm { XOR R8D,0xcd54 }
    /* +0x86165d */ __asm { MOV ECX,R13D }
    /* +0x861660 */ __asm { ROL R8W,CL }
    /* +0x861664 */ __asm { MOVSX R10,R11W }
    /* +0x861668 */ __asm { LEA R15,[0x7fffa47bfb15] }
    /* +0x86166f */ __asm { MOVZX EDX,R8W }
    /* +0x861673 */ __asm { LEA R8,[RBP + 0x110] }
    /* +0x86167a */ __asm { SYSCALL }
    /* +0x86167c */ __asm { MOV RDX,0x707f1fef134438db }
    /* +0x861686 */ __asm { CMP R15,RDX }
    /* +0x861689 */ __asm { JZ 0x7fffa4fd9cec }
    /* +0x86168f */ __asm { MOV R10D,0x987a0662 }
    /* +0x861695 */ __asm { MOV R11W,0x412f }
    /* +0x86169a */ __asm { ADD R11D,0xfffffed1 }
    /* +0x8616a1 */ __asm { MOV ECX,R13D }
    /* +0x8616a4 */ __asm { ROL R11W,CL }
    /* +0x8616a8 */ __asm { MOVZX R8D,R11W }
    /* +0x8616ac */ __asm { SUB R10D,R13D }
    /* +0x8616af */ __asm { ROL R10D,0x1 }
    /* +0x8616b2 */ __asm { MOV qword ptr [RBP + 0x110],RCX }
    /* +0x8616b9 */ __asm { MOVSXD R10,R10D }
    /* +0x8616bc */ __asm { MOV R11D,0x3b561daf }
    /* +0x8616c2 */ __asm { ADD R11D,0x5d23e6cc }
    /* +0x8616c9 */ __asm { XOR R11D,R13D }
    /* +0x8616cc */ __asm { MOV ECX,0x2daf582c }
    /* +0x8616d1 */ __asm { IMUL ECX,ECX,0x3fffff03 }
    /* +0x8616d7 */ __asm { ADD ECX,0x2649ecbb }
    /* +0x8616dd */ __asm { MOVSXD RAX,ECX }
    /* +0x8616e0 */ __asm { MOV EAX,dword ptr [R15 + RAX*0x1 + 0x8c] }
    /* +0x8616e8 */ __asm { JMP 0x7fffa4fd1a0c }
    /* +0x8616ed */ __asm { MOVDQA xmmword ptr [RBP + 0x110],XMM0 }
    /* +0x8616f5 */ __asm { MOV R10W,0xa662 }
    /* +0x8616fa */ __asm { NOT R10D }
    /* +0x8616fd */ __asm { ADD R10D,R13D }
    /* +0x861700 */ __asm { ROL R10W,0x8 }
    /* +0x861705 */ __asm { MOVZX R11D,R10W }
    /* +0x861709 */ __asm { MOV RDX,0x38d2e93879664754 }
    /* +0x861713 */ __asm { MOV R9,qword ptr [RBP + 0x238] }
    /* +0x86171a */ __asm { IMUL RDX,RDX,0x274d8a49 }
    /* +0x861721 */ __asm { ADD R9,qword ptr GS:[R11] }
    /* +0x861725 */ __asm { ROL R9,0x4 }
    /* +0x861729 */ __asm { ADD R9,0x6118556 }
    /* +0x861730 */ __asm { ADD RDX,R13 }
    /* +0x861733 */ __asm { IMUL RDX,R9 }
    /* +0x861737 */ __asm { MOV R9,-0x25d1eaa7fb50bc2c }
    /* +0x861741 */ __asm { CMP RDX,R9 }
    /* +0x861744 */ __asm { NOP }
    /* +0x861745 */ __asm { NOP }
    /* +0x861746 */ __asm { NOP }
    /* +0x861747 */ __asm { NOP }
    /* +0x861748 */ __asm { NOP }
    /* +0x861749 */ __asm { PUSHFQ }
    /* +0x86174a */ __asm { POP R8 }
    /* +0x86174c */ __asm { MOV dword ptr [RBP + 0x110],0x0 }
    /* +0x861756 */ __asm { TEST R8D,0x100 }
    /* +0x86175d */ __asm { NOP }
    /* +0x86175e */ __asm { NOP }
    /* +0x86175f */ __asm { NOP }
    /* +0x861760 */ __asm { NOP }
    /* +0x861761 */ __asm { NOP }
    /* +0x861762 */ __asm { NOP }
    /* +0x861763 */ __asm { NOP }
    /* +0x861764 */ __asm { NOP }
    /* +0x861765 */ __asm { NOP }
    /* +0x861766 */ __asm { NOP }
    /* +0x861767 */ __asm { MOV dword ptr [RBP + -0x8],0x6ecbb43f }
    /* +0x86176e */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x861772 */ __asm { CMP R10D,0x837abb27 }
    /* +0x861779 */ __asm { NOP }
    /* +0x86177a */ __asm { NOP }
    /* +0x86177b */ __asm { NOP }
    /* +0x86177c */ __asm { NOP }
    /* +0x86177d */ __asm { NOP }
    /* +0x86177e */ __asm { NOP }
    /* +0x86177f */ __asm { NOP }
    /* +0x861780 */ __asm { NOP }
    /* +0x861781 */ __asm { NOP }
    /* +0x861782 */ __asm { MOV dword ptr [RBP + -0x8],0xd0908766 }
    /* +0x861789 */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x86178c */ __asm { MOV R10D,0x4c1501c7 }
    /* +0x861792 */ __asm { MOV R8D,0x565194de }
    /* +0x861798 */ __asm { MOV R11D,0x567a23cb }
    /* +0x86179e */ __asm { SUB R11D,R10D }
    /* +0x8617a1 */ __asm { XOR R10D,R10D }
    /* +0x8617a4 */ __asm { AND ECX,0x1 }
    /* +0x8617a7 */ __asm { SETZ R10B }
    /* +0x8617ab */ __asm { MOV DX,0x663 }
    /* +0x8617af */ __asm { XOR EDX,R13D }
    /* +0x8617b2 */ __asm { IMUL EDX,EDX,0x6b }
    /* +0x8617b5 */ __asm { MOVZX EDX,DX }
    /* +0x8617b8 */ __asm { XOR EAX,EAX }
    /* +0x8617ba */ __asm { CMP ECX,EDX }
    /* +0x8617bc */ __asm { SETBE AL }
    /* +0x8617bf */ __asm { IMUL ECX,R8D,0x7119be53 }
    /* +0x8617c6 */ __asm { SUB ECX,R13D }
    /* +0x8617c9 */ __asm { XOR ECX,0xbef2cfc4 }
    /* +0x8617cf */ __asm { MOVSXD RDX,ECX }
    /* +0x8617d2 */ __asm { CMP R11,RDX }
    /* +0x8617d5 */ __asm { CMOVNC R10D,EAX }
    /* +0x8617d9 */ __asm { TEST R10B,R10B }
    /* +0x8617dc */ __asm { NOP }
    /* +0x8617dd */ __asm { NOP }
    /* +0x8617de */ __asm { NOP }
    /* +0x8617df */ __asm { NOP }
    /* +0x8617e0 */ __asm { NOP }
    /* +0x8617e1 */ __asm { LEA RCX,[0x7fffa4780832] }
    /* +0x8617e8 */ __asm { MOV RDX,-0x24be1f813d51df7c }
    /* +0x8617f2 */ __asm { CMP RCX,RDX }
    /* +0x8617f5 */ __asm { JZ 0x7fffa4fd9cf9 }
    /* +0x8617fb */ __asm { LEA R15,[0x7fffa47877fa] }
    /* +0x861802 */ __asm { MOV R8,R15 }
    /* +0x861805 */ __asm { ROL R8,0x3 }
    /* +0x861809 */ __asm { MOV R10D,0x6785f99c }
    /* +0x86180f */ __asm { MOV R11W,0xa859 }
    /* +0x861814 */ __asm { SUB R11D,R13D }
    /* +0x861817 */ __asm { MOV DX,0xb4b9 }
    /* +0x86181b */ __asm { SUB EDX,R13D }
    /* +0x86181e */ __asm { ROL DX,0x7 }
    /* +0x861822 */ __asm { IMUL R11D,R11D,-0x5d01 }
    /* +0x861829 */ __asm { ADD EDX,0xffffd4b9 }
    /* +0x86182f */ __asm { MOVZX R9D,DX }
    /* +0x861833 */ __asm { ADD R10D,R13D }
    /* +0x861836 */ __asm { ROL R10D,0x15 }
    /* +0x86183a */ __asm { MOVSXD R10,R10D }
    /* +0x86183d */ __asm { MOV R14D,0xdc1749a1 }
    /* +0x861843 */ __asm { XOR R14D,0xee906461 }
    /* +0x86184a */ __asm { ROL R14D,0x1a }
    /* +0x86184e */ __asm { XOR R14,R8 }
    /* +0x861851 */ __asm { ROL R11W,0x2 }
    /* +0x861856 */ __asm { MOVZX EDX,R11W }
    /* +0x86185a */ __asm { MOV qword ptr [RBP + -0x8],R8 }
    /* +0x86185e */ __asm { MOV EAX,dword ptr [RCX + 0x3dea] }
    /* +0x861864 */ __asm { LEA R8,[RBP + 0x110] }
    /* +0x86186b */ __asm { SYSCALL }
    /* +0x86186d */ __asm { MOV RDX,-0x1016188c84f103d0 }
    /* +0x861877 */ __asm { CMP R14,RDX }
    /* +0x86187a */ __asm { NOP }
    /* +0x86187b */ __asm { NOP }
    /* +0x86187c */ __asm { NOP }
    /* +0x86187d */ __asm { NOP }
    /* +0x86187e */ __asm { NOP }
    /* +0x86187f */ __asm { MOV ECX,R13D }
    /* +0x861882 */ __asm { OR ECX,0x1 }
    /* +0x861885 */ __asm { MOV R10D,R13D }
    /* +0x861888 */ __asm { OR R10D,0x1 }
    /* +0x86188c */ __asm { MOV qword ptr [RBP + 0x110],R8 }
    /* +0x861893 */ __asm { MOV EAX,dword ptr [R15 + -0x318a] }
    /* +0x86189a */ __asm { MOV R11W,0xb4a3 }
    /* +0x86189f */ __asm { IMUL R11D,R10D }
    /* +0x8618a3 */ __asm { ADD R11D,0x52f9 }
    /* +0x8618aa */ __asm { MOVZX R8D,R11W }
    /* +0x8618ae */ __asm { MOV R10D,0xfa72ea6a }
    /* +0x8618b4 */ __asm { IMUL R11D,R10D,-0x3291da57 }
    /* +0x8618bb */ __asm { MOV R10W,0xbc19 }
    /* +0x8618c0 */ __asm { SUB R10D,R13D }
    /* +0x8618c3 */ __asm { ADD R10D,0x4a49 }
    /* +0x8618ca */ __asm { MOVSX R10,R10W }
    /* +0x8618ce */ __asm { ROL R11D,0x17 }
    /* +0x8618d2 */ __asm { IMUL R11D,ECX }
    /* +0x8618d6 */ __asm { JMP 0x7fffa4fd1a0c }
    /* +0x8618db */ __asm { PXOR XMM0,XMM0 }
    /* +0x8618df */ __asm { MOVDQA xmmword ptr [RBP + 0x110],XMM0 }
    /* +0x8618e7 */ __asm { MOV dword ptr [RBP + -0x8],0x907816c1 }
    /* +0x8618ee */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x8618f2 */ __asm { MOV dword ptr [RBP + 0x110],0x0 }
    /* +0x8618fc */ __asm { MOV dword ptr [RBP + -0x8],0x541e9309 }
    /* +0x861903 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x861907 */ __asm { MOV R10W,0x4ca5 }
    /* +0x86190c */ __asm { IMUL R10D,R10D,0x4cbd }
    /* +0x861913 */ __asm { ADD R10D,0x7432 }
    /* +0x86191a */ __asm { XOR R10D,R13D }
    /* +0x86191d */ __asm { MOVZX R11D,R10W }
    /* +0x861921 */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0x861925 */ __asm { MOV R9,-0xd7b731f8098df67 }
    /* +0x86192f */ __asm { CMP qword ptr [RDX + 0x18],R9 }
    /* +0x861933 */ __asm { NOP }
    /* +0x861934 */ __asm { NOP }
    /* +0x861935 */ __asm { NOP }
    /* +0x861936 */ __asm { NOP }
    /* +0x861937 */ __asm { NOP }
    /* +0x861938 */ __asm { LEA RCX,[0x7fffa47b8dc6] }
    /* +0x86193f */ __asm { MOV RDX,-0x259770194c8e662d }
    /* +0x861949 */ __asm { CMP RCX,RDX }
    /* +0x86194c */ __asm { NOP }
    /* +0x86194d */ __asm { NOP }
    /* +0x86194e */ __asm { NOP }
    /* +0x86194f */ __asm { NOP }
    /* +0x861950 */ __asm { NOP }
    /* +0x861951 */ __asm { NOP }
    /* +0x861952 */ __asm { NOP }
    /* +0x861953 */ __asm { NOP }
    /* +0x861954 */ __asm { LEA R15,[0x7fffa47b911d] }
    /* +0x86195b */ __asm { MOV R10W,0x2198 }
    /* +0x861960 */ __asm { SUB R10D,R13D }
    /* +0x861963 */ __asm { ADD R10D,0xffffe4cd }
    /* +0x86196a */ __asm { MOV AX,0xfddf }
    /* +0x86196e */ __asm { LEA R11D,[RAX + RAX*0x2] }
    /* +0x861972 */ __asm { ADD R11D,R13D }
    /* +0x861975 */ __asm { MOV R8W,0xe9d3 }
    /* +0x86197a */ __asm { SUB R8D,R13D }
    /* +0x86197d */ __asm { ADD R8D,0x1d30 }
    /* +0x861984 */ __asm { ROL R8W,0xe }
    /* +0x861989 */ __asm { MOVZX EDX,R8W }
    /* +0x86198d */ __asm { ROL R10W,0x3 }
    /* +0x861992 */ __asm { MOVZX R9D,R10W }
    /* +0x861996 */ __asm { NOT R11D }
    /* +0x861999 */ __asm { MOVSX R10,R11W }
    /* +0x86199d */ __asm { MOV qword ptr [RBP + -0x8],R8 }
    /* +0x8619a1 */ __asm { MOV EAX,dword ptr [RCX + 0x3702] }
    /* +0x8619a7 */ __asm { LEA R8,[RBP + 0x110] }
    /* +0x8619ae */ __asm { SYSCALL }
    /* +0x8619b0 */ __asm { MOV RDX,0x2440cba4ec34a883 }
    /* +0x8619ba */ __asm { CMP R15,RDX }
    /* +0x8619bd */ __asm { JZ 0x7fffa4fd9d06 }
    /* +0x8619c3 */ __asm { MOV R10D,0x6dfd0440 }
    /* +0x8619c9 */ __asm { XOR R10D,0x6dfd0440 }
    /* +0x8619d0 */ __asm { ROL R10D,0x9 }
    /* +0x8619d4 */ __asm { MOV qword ptr [RBP + 0x110],RCX }
    /* +0x8619db */ __asm { MOV CX,0x13ab }
    /* +0x8619df */ __asm { XOR ECX,R13D }
    /* +0x8619e2 */ __asm { NOT R10D }
    /* +0x8619e5 */ __asm { MOVSXD R10,R10D }
    /* +0x8619e8 */ __asm { IMUL ECX,ECX,-0x7325 }
    /* +0x8619ee */ __asm { MOVZX R11D,CX }
    /* +0x8619f2 */ __asm { MOV EAX,dword ptr [R15 + 0x33c3] }
    /* +0x8619f9 */ __asm { MOV R8W,0xe51a }
    /* +0x8619fe */ __asm { LEA ECX,[R8 + R13*0x1] }
    /* +0x861a02 */ __asm { ADD ECX,0x1485 }
    /* +0x861a08 */ __asm { MOVZX R8D,CX }
    /* +0x861a0c */ __asm { LEA RDX,[RBP + 0xf0] }
    /* +0x861a13 */ __asm { MOV qword ptr [RSP + 0x30],RDX }
    /* +0x861a18 */ __asm { MOV qword ptr [RSP + 0x28],R11 }
    /* +0x861a1d */ __asm { MOV R9,RSI }
    /* +0x861a20 */ __asm { MOV RDX,qword ptr [RBP + 0xc8] }
    /* +0x861a27 */ __asm { SYSCALL }
    /* +0x861a29 */ __asm { MOV R10D,0x30671b75 }
    /* +0x861a2f */ __asm { MOV ECX,0x39e71b75 }
    /* +0x861a34 */ __asm { SUB ECX,R10D }
    /* +0x861a37 */ __asm { ROL ECX,0x7 }
    /* +0x861a3a */ __asm { CMP EAX,ECX }
    /* +0x861a3c */ __asm { MOV qword ptr [RBP + 0x30],RDI }
    /* +0x861a40 */ __asm { JGE 0x7fffa4fd1cf2 }
    /* +0x861a46 */ __asm { MOV R10D,0xbca467a9 }
    /* +0x861a4c */ __asm { XOR R10D,R13D }
    /* +0x861a4f */ __asm { ADD R10D,0x5d02724f }
    /* +0x861a56 */ __asm { XOR R10D,EAX }
    /* +0x861a59 */ __asm { CMP R10D,0x1e0d41c }
    /* +0x861a60 */ __asm { JNZ 0x7fffa4fd1d40 }
    /* +0x861a66 */ __asm { LEA R9,[0x7fffa4a95082] }
    /* +0x861a6d */ __asm { MOV RDX,qword ptr [RBP + 0xf0] }
    /* +0x861a74 */ __asm { MOV R10D,0x3158a532 }
    /* +0x861a7a */ __asm { IMUL R10D,R10D,0x71e766d3 }
    /* +0x861a81 */ __asm { MOV ECX,R13D }
    /* +0x861a84 */ __asm { ROL R10D,CL }
    /* +0x861a87 */ __asm { NOT R10D }
    /* +0x861a8a */ __asm { MOVSXD R11,R10D }
    /* +0x861a8d */ __asm { ADD R11,R9 }
    /* +0x861a90 */ __asm { MOV qword ptr [RBP + 0x198],RSI }
    /* +0x861a97 */ __asm { MOV RCX,RDX }
    /* +0x861a9a */ __asm { CALL R11 }
    /* +0x861a9d */ __asm { MOV R14,RAX }
    /* +0x861aa0 */ __asm { MOV R10W,0x1565 }
    /* +0x861aa5 */ __asm { LEA RDX,[0x7fffa508a0d6] }
    /* +0x861aac */ __asm { IMUL R11D,R10D,0x729d }
    /* +0x861ab3 */ __asm { MOV R13,qword ptr [RBP + 0x50] }
    /* +0x861ab7 */ __asm { MOV R15D,R13D }
    /* +0x861aba */ __asm { OR R15D,0x1 }
    /* +0x861abe */ __asm { XOR R11D,0xffffe7bf }
    /* +0x861ac5 */ __asm { IMUL R11D,R15D }
    /* +0x861ac9 */ __asm { MOVSX R9,R11W }
    /* +0x861acd */ __asm { ADD R9,RDX }
    /* +0x861ad0 */ __asm { MOV RCX,0x0 }
    /* +0x861ad7 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x861ade */ __asm { NOP }
    /* +0x861adf */ __asm { MOV RCX,RSI }
    /* +0x861ae2 */ __asm { CALL R9 }
    /* +0x861ae5 */ __asm { MOV R12,qword ptr [RBP + 0xf0] }
    /* +0x861aec */ __asm { RDTSC }
    /* +0x861aee */ __asm { SHL RDX,0x20 }
    /* +0x861af2 */ __asm { OR RDX,RAX }
    /* +0x861af5 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
}


// ============================================================================
// Function : FUN_7fffa4fd7775  |  RVA: 0x867775  |  Size: 12211 bytes
// Callers  : FUN_7fffa4fd0fe0@0x860fe0
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4fd7775(void) {
    /* +0x867775 */ __asm { ADD AL,0xb }
    /* +0x867777 */ __asm { MOV EAX,[0xf987114be7b94907] }
    /* +0x867780 */ __asm { MOV R14D,0x7d8b4c8d }
    /* +0x867786 */ __asm { PUSH RAX }
    /* +0x867787 */ __asm { ADD ECX,R15D }
    /* +0x86778a */ __asm { ROL ECX,0x7 }
    /* +0x86778d */ __asm { XOR ECX,ESI }
    /* +0x86778f */ __asm { MOVSXD R11,ECX }
    /* +0x867792 */ __asm { MOV RAX,0x6a751232e6d5b903 }
    /* +0x86779c */ __asm { IMUL RAX,R11 }
    /* +0x8677a0 */ __asm { ROL RAX,0x38 }
    /* +0x8677a4 */ __asm { ADD R9,-0x506240da }
    /* +0x8677ab */ __asm { XOR R9,R15 }
    /* +0x8677ae */ __asm { MOV EBX,0x9e179473 }
    /* +0x8677b3 */ __asm { ADD RBX,R9 }
    /* +0x8677b6 */ __asm { MOV RDI,qword ptr [RBP + 0xe8] }
    /* +0x8677bd */ __asm { MOV ECX,EDI }
    /* +0x8677bf */ __asm { ROL RBX,CL }
    /* +0x8677c2 */ __asm { MOV R9,-0x3c2d39e53b3fd52f }
    /* +0x8677cc */ __asm { IMUL R9,RAX }
    /* +0x8677d0 */ __asm { CMP RBX,R9 }
    /* +0x8677d3 */ __asm { JZ 0x7fffa4fd788f }
    /* +0x8677d9 */ __asm { MOV CX,0x9c76 }
    /* +0x8677dd */ __asm { MOV word ptr [RBP + 0x152],R8W }
    /* +0x8677e5 */ __asm { XOR ECX,0x15a5 }
    /* +0x8677eb */ __asm { MOV R11D,ESI }
    /* +0x8677ee */ __asm { SUB R11D,ECX }
    /* +0x8677f1 */ __asm { ADD R11D,0xfffffe32 }
    /* +0x8677f8 */ __asm { MOVZX R11D,R11W }
    /* +0x8677fc */ __asm { MOV R14D,0x3ee53b00 }
    /* +0x867802 */ __asm { ADD R14D,ESI }
    /* +0x867805 */ __asm { NOT R14D }
    /* +0x867808 */ __asm { ROL R14D,0x19 }
    /* +0x86780c */ __asm { ADD R14D,0x6733acd5 }
    /* +0x867813 */ __asm { MOV R9,qword ptr GS:[R11] }
    /* +0x867817 */ __asm { PXOR XMM0,XMM0 }
    /* +0x86781b */ __asm { MOVDQU xmmword ptr [RDX],XMM0 }
    /* +0x86781f */ __asm { MOV dword ptr [RBP + 0x128],0x40 }
    /* +0x867829 */ __asm { MOV RDX,qword ptr [R9 + 0x20] }
    /* +0x86782d */ __asm { MOV qword ptr [RBP + 0x120],R13 }
    /* +0x867834 */ __asm { MOV R9,qword ptr [RDX + 0x48] }
    /* +0x867838 */ __asm { RDTSC }
    /* +0x86783a */ __asm { SHL RDX,0x20 }
    /* +0x86783e */ __asm { OR RDX,RAX }
    /* +0x867841 */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0x86784b */ __asm { IMUL RDX,R11 }
    /* +0x86784f */ __asm { MOV qword ptr [RBP + 0x158],R12 }
    /* +0x867856 */ __asm { MOV word ptr [RBP + 0x150],R10W }
    /* +0x86785e */ __asm { MOV R11,-0x22b18422c4a9c65e }
    /* +0x867868 */ __asm { ADD RDX,R11 }
    /* +0x86786b */ __asm { MOV RCX,RDX }
    /* +0x86786e */ __asm { SHR RCX,0x3b }
    /* +0x867872 */ __asm { MOV R11,RDX }
    /* +0x867875 */ __asm { SHR R11,0x2d }
    /* +0x867879 */ __asm { MOV qword ptr [RBP + 0x118],R9 }
    /* +0x867880 */ __asm { MOV dword ptr [RBP + 0x110],0x30 }
    /* +0x86788a */ __asm { JMP 0x7fffa4fd7943 }
    /* +0x86788f */ __asm { MOV AX,0x515a }
    /* +0x867893 */ __asm { MOV word ptr [RBP + 0x152],R8W }
    /* +0x86789b */ __asm { MOV dword ptr [RBP + 0x110],0x30 }
    /* +0x8678a5 */ __asm { MOV R8D,0x31b9f488 }
    /* +0x8678ab */ __asm { SUB R8D,R11D }
    /* +0x8678ae */ __asm { MOV ECX,R15D }
    /* +0x8678b1 */ __asm { ROR R8D,CL }
    /* +0x8678b4 */ __asm { IMUL EAX,dword ptr [RBP + 0x64] }
    /* +0x8678b8 */ __asm { XOR EAX,0x8036 }
    /* +0x8678bd */ __asm { MOV R14D,0x9e8a9452 }
    /* +0x8678c3 */ __asm { SUB R14D,R8D }
    /* +0x8678c6 */ __asm { MOV ECX,EDI }
    /* +0x8678c8 */ __asm { ROL AX,CL }
    /* +0x8678cb */ __asm { MOV word ptr [RBP + 0x150],R10W }
    /* +0x8678d3 */ __asm { ROL AX,0xe }
    /* +0x8678d7 */ __asm { MOV qword ptr [RBP + 0x158],R12 }
    /* +0x8678de */ __asm { ADD EAX,R11D }
    /* +0x8678e1 */ __asm { MOVZX R11D,AX }
    /* +0x8678e5 */ __asm { MOV R9,qword ptr GS:[R11] }
    /* +0x8678e9 */ __asm { MOV dword ptr [RBP + 0x128],0x40 }
    /* +0x8678f3 */ __asm { MOV qword ptr [RBP + 0x120],R13 }
    /* +0x8678fa */ __asm { MOV R9,qword ptr [R9 + 0x20] }
    /* +0x8678fe */ __asm { MOV R9,qword ptr [R9 + 0x48] }
    /* +0x867902 */ __asm { MOV qword ptr [RBP + 0x118],R9 }
    /* +0x867909 */ __asm { PXOR XMM0,XMM0 }
    /* +0x86790d */ __asm { MOVDQU xmmword ptr [RDX],XMM0 }
    /* +0x867911 */ __asm { RDTSC }
    /* +0x867913 */ __asm { SHL RDX,0x20 }
    /* +0x867917 */ __asm { OR RDX,RAX }
    /* +0x86791a */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0x867924 */ __asm { IMUL RDX,R9 }
    /* +0x867928 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0x867932 */ __asm { ADD RDX,R9 }
    /* +0x867935 */ __asm { MOV R11,RDX }
    /* +0x867938 */ __asm { SHR R11,0x2d }
    /* +0x86793c */ __asm { MOV RCX,RDX }
    /* +0x86793f */ __asm { SHR RCX,0x3b }
    /* +0x867943 */ __asm { SHR RDX,0x1b }
    /* +0x867947 */ __asm { XOR EDX,R11D }
    /* +0x86794a */ __asm { ROR EDX,CL }
    /* +0x86794c */ __asm { MOV RDI,qword ptr [RBP + 0x30] }
    /* +0x867950 */ __asm { AND EDX,0x3 }
    /* +0x867953 */ __asm { CMP EDX,0x2 }
    /* +0x867956 */ __asm { JC 0x7fffa4fd7d45 }
    /* +0x86795c */ __asm { MOV R10W,0x8661 }
    /* +0x867961 */ __asm { NOT R10D }
    /* +0x867964 */ __asm { MOV RSI,qword ptr [RBP + 0x50] }
    /* +0x867968 */ __asm { ADD R10D,ESI }
    /* +0x86796b */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0x86796f */ __asm { ROL R10W,CL }
    /* +0x867973 */ __asm { MOVZX R10D,R10W }
    /* +0x867977 */ __asm { CMP EDX,R10D }
    /* +0x86797a */ __asm { MOV R12,qword ptr [RBP + 0xe8] }
    /* +0x867981 */ __asm { JNC 0x7fffa4fd8192 }
    /* +0x867987 */ __asm { MOV RDX,-0x7f71977f000ba4a2 }
    /* +0x867991 */ __asm { MOV R9,-0xc65f7121 }
    /* +0x86799b */ __asm { ADD R9,RDX }
    /* +0x86799e */ __asm { XOR R9,RSI }
    /* +0x8679a1 */ __asm { MOV RDX,-0xbd088989 }
    /* +0x8679ab */ __asm { ADD RDX,R9 }
    /* +0x8679ae */ __asm { XOR RDX,R14 }
    /* +0x8679b1 */ __asm { MOV ECX,0xe3df282 }
    /* +0x8679b6 */ __asm { CMP RCX,RDX }
    /* +0x8679b9 */ __asm { NOP }
    /* +0x8679ba */ __asm { NOP }
    /* +0x8679bb */ __asm { NOP }
    /* +0x8679bc */ __asm { NOP }
    /* +0x8679bd */ __asm { NOP }
    /* +0x8679be */ __asm { NOP }
    /* +0x8679bf */ __asm { NOP }
    /* +0x8679c0 */ __asm { NOP }
    /* +0x8679c1 */ __asm { NOP }
    /* +0x8679c2 */ __asm { NOP }
    /* +0x8679c3 */ __asm { NOP }
    /* +0x8679c4 */ __asm { NOP }
    /* +0x8679c5 */ __asm { MOV R9,qword ptr [RCX + 0x71c00d86] }
    /* +0x8679cc */ __asm { MOV RDX,0x52b8331a758d96b7 }
    /* +0x8679d6 */ __asm { MOV RAX,R9 }
    /* +0x8679d9 */ __asm { MUL RDX }
    /* +0x8679dc */ __asm { MOV R11,RDX }
    /* +0x8679df */ __asm { MOV EDX,0x1461534 }
    /* +0x8679e4 */ __asm { MOV RAX,R9 }
    /* +0x8679e7 */ __asm { MUL RDX }
    /* +0x8679ea */ __asm { MOV RCX,RDX }
    /* +0x8679ed */ __asm { ADD RAX,R11 }
    /* +0x8679f0 */ __asm { ADC RCX,0x0 }
    /* +0x8679f4 */ __asm { RDTSC }
    /* +0x8679f6 */ __asm { SHL RDX,0x20 }
    /* +0x8679fa */ __asm { OR RDX,RAX }
    /* +0x8679fd */ __asm { TEST CL,0x1 }
    /* +0x867a00 */ __asm { JNZ 0x7fffa4fd866e }
    /* +0x867a06 */ __asm { MOV R9,-0x4b061743ec0c107b }
    /* +0x867a10 */ __asm { IMUL RDX,R9 }
    /* +0x867a14 */ __asm { MOV R8,-0x6b1a96ed57a3997a }
    /* +0x867a1e */ __asm { ADD R8,RDX }
    /* +0x867a21 */ __asm { MOV R11,R8 }
    /* +0x867a24 */ __asm { SHR R11,0x2d }
    /* +0x867a28 */ __asm { MOV RCX,R8 }
    /* +0x867a2b */ __asm { SHR RCX,0x3b }
    /* +0x867a2f */ __asm { SHR R8,0x1b }
    /* +0x867a33 */ __asm { XOR R11D,R8D }
    /* +0x867a36 */ __asm { ROR R11D,CL }
    /* +0x867a39 */ __asm { MOV RDX,0x5ad23e55d0bc56ef }
    /* +0x867a43 */ __asm { MOV R9,qword ptr [RBP + 0x188] }
    /* +0x867a4a */ __asm { CMP qword ptr [R9 + -0xf20],RDX }
    /* +0x867a51 */ __asm { NOP }
    /* +0x867a52 */ __asm { NOP }
    /* +0x867a53 */ __asm { NOP }
    /* +0x867a54 */ __asm { NOP }
    /* +0x867a55 */ __asm { NOP }
    /* +0x867a56 */ __asm { NOP }
    /* +0x867a57 */ __asm { NOP }
    /* +0x867a58 */ __asm { NOP }
    /* +0x867a59 */ __asm { NOP }
    /* +0x867a5a */ __asm { NOP }
    /* +0x867a5b */ __asm { NOP }
    /* +0x867a5c */ __asm { NOP }
    /* +0x867a5d */ __asm { NOP }
    /* +0x867a5e */ __asm { NOP }
    /* +0x867a5f */ __asm { NOP }
    /* +0x867a60 */ __asm { NOP }
    /* +0x867a61 */ __asm { NOP }
    /* +0x867d45 */ __asm { CMP EDX,0x1 }
    /* +0x867d48 */ __asm { MOV RSI,qword ptr [RBP + 0x50] }
    /* +0x867d4c */ __asm { MOV R12,qword ptr [RBP + 0xe8] }
    /* +0x867d53 */ __asm { JNZ 0x7fffa4fd82bb }
    /* +0x867d59 */ __asm { MOV RDX,0x4b32faaaa8bcbeac }
    /* +0x867d63 */ __asm { ADD RDX,0x505de7e5 }
    /* +0x867d6a */ __asm { XOR RDX,RSI }
    /* +0x867d6d */ __asm { MOV ECX,R14D }
    /* +0x867d70 */ __asm { ROR RDX,CL }
    /* +0x867d73 */ __asm { MOV R8D,0x8dd0d39e }
    /* +0x867d79 */ __asm { MOV EAX,0x91a186d4 }
    /* +0x867d7e */ __asm { MOV R9,R8 }
    /* +0x867d81 */ __asm { ROL R9,0x23 }
    /* +0x867d85 */ __asm { XOR R9,-0x2f47d6a9 }
    /* +0x867d8c */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0x867d90 */ __asm { LEA R11D,[RCX + RAX*0x1] }
    /* +0x867d94 */ __asm { ADD R11D,0xb6f1289e }
    /* +0x867d9b */ __asm { ROL R11D,0x19 }
    /* +0x867d9f */ __asm { SUB R11D,ESI }
    /* +0x867da2 */ __asm { ADD R11,R9 }
    /* +0x867da5 */ __asm { CMP RDX,R11 }
    /* +0x867da8 */ __asm { JZ 0x7fffa4fdf651 }
    /* +0x867dae */ __asm { MOV R10W,0x663 }
    /* +0x867db3 */ __asm { XOR R10D,ESI }
    /* +0x867db6 */ __asm { IMUL R10D,R10D,-0x6871 }
    /* +0x867dbd */ __asm { ROR R10W,CL }
    /* +0x867dc1 */ __asm { MOV R11D,dword ptr [R8 + -0xdd2d15e] }
    /* +0x867dc8 */ __asm { AND R11D,0x1 }
    /* +0x867dcc */ __asm { MOVZX R10D,R10W }
    /* +0x867dd0 */ __asm { CMP R11D,R10D }
    /* +0x867dd3 */ __asm { MOV EDI,dword ptr [RBP + 0x64] }
    /* +0x867dd6 */ __asm { JZ 0x7fffa4fd8956 }
    /* +0x867ddc */ __asm { MOV R15D,ECX }
    /* +0x867ddf */ __asm { OR R15D,0x1 }
    /* +0x867de3 */ __asm { MOV R10W,0x1aea }
    /* +0x867de8 */ __asm { ADD R10D,0xfffff312 }
    /* +0x867def */ __asm { MOV R8D,ESI }
    /* +0x867df2 */ __asm { XOR R8D,R10D }
    /* +0x867df5 */ __asm { IMUL R8D,R15D }
    /* +0x867df9 */ __asm { RDTSC }
    /* +0x867dfb */ __asm { SHL RDX,0x20 }
    /* +0x867dff */ __asm { OR RDX,RAX }
    /* +0x867e02 */ __asm { MOV R9,-0x158b4ad174161d9b }
    /* +0x867e0c */ __asm { IMUL R9,RDX }
    /* +0x867e10 */ __asm { MOV R11,-0x7ac6d9a290711a12 }
    /* +0x867e1a */ __asm { ADD R11,R9 }
    /* +0x867e1d */ __asm { MOV R10,R11 }
    /* +0x867e20 */ __asm { SHR R10,0x2d }
    /* +0x867e24 */ __asm { MOV RCX,R11 }
    /* +0x867e27 */ __asm { SHR RCX,0x3b }
    /* +0x867e2b */ __asm { NOT R8D }
    /* +0x867e2e */ __asm { MOVZX R8D,R8W }
    /* +0x867e32 */ __asm { SHR R11,0x1b }
    /* +0x867e36 */ __asm { XOR R11D,R10D }
    /* +0x867e39 */ __asm { ROR R11D,CL }
    /* +0x867e3c */ __asm { MOV RDX,qword ptr GS:[R8] }
    /* +0x867e40 */ __asm { MOV R9,0x4ffca6d20b072473 }
    /* +0x867e4a */ __asm { CMP qword ptr [RDX + 0x450],R9 }
    /* +0x867e51 */ __asm { NOP }
    /* +0x867e52 */ __asm { NOP }
    /* +0x867e53 */ __asm { NOP }
    /* +0x867e54 */ __asm { NOP }
    /* +0x867e55 */ __asm { NOP }
    /* +0x867e56 */ __asm { CMP R11D,0x1069f2 }
    /* +0x867e5d */ __asm { JA 0x7fffa4fd8099 }
    /* +0x867e63 */ __asm { MOV AX,0x91ae }
    /* +0x867e67 */ __asm { XOR EAX,dword ptr [RBP + 0x28] }
    /* +0x867e6a */ __asm { LEA R10D,[RSI + RAX*0x1] }
    /* +0x867e6e */ __asm { ADD R10D,0xffffdc1e }
    /* +0x867e75 */ __asm { MOVZX R11D,R10W }
    /* +0x867e79 */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0x867e7d */ __asm { MOV R11D,0x1aa8557c }
    /* +0x867e83 */ __asm { MOV EAX,0x67ac1a9f }
    /* +0x867e88 */ __asm { ADD R11D,0xcb3bd11d }
    /* +0x867e8f */ __asm { ROL R11D,0x1 }
    /* +0x867e92 */ __asm { ADD R11D,ESI }
    /* +0x867e95 */ __asm { NOT R11D }
    /* +0x867e98 */ __asm { LEA R8D,[R14 + RAX*0x1] }
    /* +0x867e9c */ __asm { ADD R8D,0x6c2c5c8e }
    /* +0x867ea3 */ __asm { MOV ECX,ESI }
    /* +0x867ea5 */ __asm { ROR R8D,CL }
    /* +0x867ea8 */ __asm { MOV RDX,qword ptr [RDX + 0x60] }
    /* +0x867eac */ __asm { MOV RCX,0x2fb402058c0cfa5b }
    /* +0x867eb6 */ __asm { SUB RDX,RCX }
    /* +0x867eb9 */ __asm { IMUL R8,RDX }
    /* +0x867ebd */ __asm { ADD RDX,-0x30f3da9d }
    /* +0x867ec4 */ __asm { MOV R9D,0xbf833e45 }
    /* +0x867eca */ __asm { CMP R11,R9 }
    /* +0x867ecd */ __asm { CMOVZ RDX,R8 }
    /* +0x867ed1 */ __asm { MOV R9,-0x666d479193f97a4b }
    /* +0x867edb */ __asm { IMUL R9,RDX }
    /* +0x867edf */ __asm { ADD R9,-0x21a23fec }
    /* +0x867ee6 */ __asm { MOV RDX,-0x13d0eaf31fbca400 }
    /* +0x867ef0 */ __asm { CMP R9,RDX }
    /* +0x867ef3 */ __asm { NOP }
    /* +0x867ef4 */ __asm { NOP }
    /* +0x867ef5 */ __asm { NOP }
    /* +0x867ef6 */ __asm { NOP }
    /* +0x867ef7 */ __asm { NOP }
    /* +0x867ef8 */ __asm { NOP }
    /* +0x867ef9 */ __asm { NOP }
    /* +0x867efa */ __asm { NOP }
    /* +0x867efb */ __asm { NOP }
    /* +0x867efc */ __asm { NOP }
    /* +0x867efd */ __asm { LEA RCX,[0x7fffa47ba826] }
    /* +0x867f04 */ __asm { MOV EDX,0xf44e5691 }
    /* +0x867f09 */ __asm { ADD RDX,RCX }
    /* +0x867f0c */ __asm { MOV R9,0x3cde91882a9e696d }
    /* +0x867f16 */ __asm { CMP RDX,R9 }
    /* +0x867f19 */ __asm { NOP }
    /* +0x867f1a */ __asm { NOP }
    /* +0x867f1b */ __asm { NOP }
    /* +0x867f1c */ __asm { NOP }
    /* +0x867f1d */ __asm { NOP }
    /* +0x867f1e */ __asm { MOV R10D,0x20bde346 }
    /* +0x867f24 */ __asm { ADD R10D,ESI }
    /* +0x867f27 */ __asm { ROL R10D,0x8 }
    /* +0x867f2b */ __asm { IMUL R11D,R10D,0x3caf78c3 }
    /* +0x867f32 */ __asm { MOVZX EAX,uint8_t ptr [RCX + 0x1e67] }
    /* +0x867f39 */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + 0x1e77] }
    /* +0x867f42 */ __asm { ROL R10B,0x4 }
    /* +0x867f46 */ __asm { MOV uint8_t ptr [RBP + 0x70],R10B }
    /* +0x867f4a */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + 0x1e78] }
    /* +0x867f53 */ __asm { ROL R10B,0x4 }
    /* +0x867f57 */ __asm { MOV uint8_t ptr [RBP + 0x71],R10B }
    /* +0x867f5b */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + 0x1e79] }
    /* +0x867f64 */ __asm { ROL R10B,0x4 }
    /* +0x867f68 */ __asm { MOV uint8_t ptr [RBP + 0x72],R10B }
    /* +0x867f6c */ __asm { MOVZX EAX,uint8_t ptr [RCX + RAX*0x4 + 0x1e7a] }
    /* +0x867f74 */ __asm { ROL AL,0x4 }
    /* +0x867f77 */ __asm { NOT R11D }
    /* +0x867f7a */ __asm { MOV uint8_t ptr [RBP + 0x73],AL }
    /* +0x867f7d */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x867f83 */ __asm { XOR R10D,dword ptr [RBP + 0x70] }
    /* +0x867f87 */ __asm { MOV ECX,dword ptr [R11] }
    /* +0x867f8a */ __asm { BT R10D,ECX }
    /* +0x867f8e */ __asm { JNC 0x7fffa4fd8099 }
    /* +0x867f94 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM0 }
    /* +0x867f99 */ __asm { MOV dword ptr [RBP + 0xb8],0xd0195a41 }
    /* +0x867fa3 */ __asm { MOV R10D,dword ptr [RBP + 0xb8] }
    /* +0x867faa */ __asm { CMP R10D,0x7e4d95ff }
    /* +0x867fb1 */ __asm { JBE 0x7fffa4fdf6e3 }
    /* +0x867fb7 */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0x867fbe */ __asm { MOV dword ptr [RBP + 0xb8],0x668491c5 }
    /* +0x867fc8 */ __asm { MOV R10D,dword ptr [RBP + 0xb8] }
    /* +0x867fcf */ __asm { TEST R10B,0x1 }
    /* +0x867fd3 */ __asm { JZ 0x7fffa4fdf6eb }
    /* +0x867fd9 */ __asm { MOV R10W,0x9fcd }
    /* +0x867fde */ __asm { IMUL R10D,EDI }
    /* +0x867fe2 */ __asm { XOR R10D,dword ptr [RBP + 0x28] }
    /* +0x867fe6 */ __asm { ADD R10D,0xffffe9ea }
    /* +0x867fed */ __asm { MOVZX R11D,R10W }
    /* +0x867ff1 */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0x867ff5 */ __asm { MOV R9,-0x55573160cedcc9c1 }
    /* +0x867fff */ __asm { SUB R9,RSI }
    /* +0x868002 */ __asm { MOV ECX,R12D }
    /* +0x868005 */ __asm { ROR R9,CL }
    /* +0x868008 */ __asm { MOV R11,-0xb711d068 }
    /* +0x868012 */ __asm { ADD R11,R9 }
    /* +0x868015 */ __asm { CMP RDX,R11 }
    /* +0x868018 */ __asm { NOP }
    /* +0x868019 */ __asm { NOP }
    /* +0x86801a */ __asm { NOP }
    /* +0x86801b */ __asm { NOP }
    /* +0x86801c */ __asm { NOP }
    /* +0x86801d */ __asm { NOP }
    /* +0x86801e */ __asm { NOP }
    /* +0x86801f */ __asm { NOP }
    /* +0x868020 */ __asm { LEA R8,[0x7fffa4782ac0] }
    /* +0x868027 */ __asm { MOV RDX,-0x52ba8d0875b12636 }
    /* +0x868031 */ __asm { CMP R8,RDX }
    /* +0x868034 */ __asm { JNZ 0x7fffa4fd803b }
    /* +0x868036 */ __asm { MOV EBP,0x85ecf243 }
    /* +0x86803b */ __asm { MOV R10W,0x27a9 }
    /* +0x868040 */ __asm { XOR R10D,0xffffa207 }
    /* +0x868047 */ __asm { MOV RAX,qword ptr [RBP + 0x28] }
    /* +0x86804b */ __asm { SUB R10D,EAX }
    /* +0x86804e */ __asm { ADD R10D,ESI }
    /* +0x868051 */ __asm { MOVZX R9D,R10W }
    /* +0x868055 */ __asm { MOV R11W,0x6564 }
    /* +0x86805a */ __asm { MOV R10W,0x25f }
    /* +0x86805f */ __asm { SUB R10D,EAX }
    /* +0x868062 */ __asm { MOV ECX,ESI }
    /* +0x868064 */ __asm { ROR R10W,CL }
    /* +0x868068 */ __asm { XOR R11D,0x428 }
    /* +0x86806f */ __asm { ADD R10D,0x3134 }
    /* +0x868076 */ __asm { MOVSX R10,R10W }
    /* +0x86807a */ __asm { ROR R11W,CL }
    /* +0x86807e */ __asm { MOV qword ptr [RBP + 0xb8],RCX }
    /* +0x868085 */ __asm { SUB R11D,EAX }
    /* +0x868088 */ __asm { MOVZX EDX,R11W }
    /* +0x86808c */ __asm { MOV EAX,dword ptr [R8 + 0x1b5c] }
    /* +0x868093 */ __asm { LEA R8,[RBP + 0x70] }
    /* +0x868097 */ __asm { SYSCALL }
    /* +0x868099 */ __asm { MOV RAX,0x4cd2f83a53ab13b }
    /* +0x8680a3 */ __asm { LEA R8,[0x7fffa47886b5] }
    /* +0x8680aa */ __asm { XOR RAX,R12 }
    /* +0x8680ad */ __asm { LEA RDX,[RSI + RAX*0x1] }
    /* +0x8680b1 */ __asm { ADD RDX,-0x147ad202 }
    /* +0x8680b8 */ __asm { CMP R8,RDX }
    /* +0x8680bb */ __asm { NOP }
    /* +0x8680bc */ __asm { NOP }
    /* +0x8680bd */ __asm { NOP }
    /* +0x8680be */ __asm { NOP }
    /* +0x8680bf */ __asm { NOP }
    /* +0x8680c0 */ __asm { NOP }
    /* +0x8680c1 */ __asm { NOP }
    /* +0x8680c2 */ __asm { NOP }
    /* +0x8680c3 */ __asm { NOP }
    /* +0x8680c4 */ __asm { NOP }
    /* +0x8680c5 */ __asm { NOP }
    /* +0x8680c6 */ __asm { NOP }
    /* +0x8680c7 */ __asm { NOP }
    /* +0x8680c8 */ __asm { NOP }
    /* +0x8680c9 */ __asm { NOP }
    /* +0x8680ca */ __asm { NOP }
    /* +0x8680cb */ __asm { NOP }
    /* +0x868192 */ __asm { MOV ECX,0xa8a0ee9 }
    /* +0x868197 */ __asm { MOV RDX,-0x15e1c09beebacdbc }
    /* +0x8681a1 */ __asm { CMP RCX,RDX }
    /* +0x8681a4 */ __asm { NOP }
    /* +0x8681a5 */ __asm { NOP }
    /* +0x8681a6 */ __asm { NOP }
    /* +0x8681a7 */ __asm { NOP }
    /* +0x8681a8 */ __asm { NOP }
    /* +0x8681a9 */ __asm { MOV R9,qword ptr [RCX + 0x7573f11f] }
    /* +0x8681b0 */ __asm { MOV RDX,-0x26144dde93ce1113 }
    /* +0x8681ba */ __asm { MOV RAX,R9 }
    /* +0x8681bd */ __asm { MUL RDX }
    /* +0x8681c0 */ __asm { MOV R11,RDX }
    /* +0x8681c3 */ __asm { MOV EDX,0x1475c79 }
    /* +0x8681c8 */ __asm { MOV RAX,R9 }
    /* +0x8681cb */ __asm { MUL RDX }
    /* +0x8681ce */ __asm { ADD RAX,R11 }
    /* +0x8681d1 */ __asm { ADC RDX,0x0 }
    /* +0x8681d5 */ __asm { TEST DL,0x1 }
    /* +0x8681d8 */ __asm { JNZ 0x7fffa4fd8a40 }
    /* +0x8681de */ __asm { LEA R8,[0x7fffa47c0e3e] }
    /* +0x8681e5 */ __asm { MOV RDX,0x77ef3a7bc208bf11 }
    /* +0x8681ef */ __asm { CMP R8,RDX }
    /* +0x8681f2 */ __asm { NOP }
    /* +0x8681f3 */ __asm { NOP }
    /* +0x8681f4 */ __asm { NOP }
    /* +0x8681f5 */ __asm { NOP }
    /* +0x8681f6 */ __asm { NOP }
    /* +0x8681f7 */ __asm { NOP }
    /* +0x8681f8 */ __asm { NOP }
    /* +0x8681f9 */ __asm { NOP }
    /* +0x8681fa */ __asm { NOP }
    /* +0x8681fb */ __asm { NOP }
    /* +0x8681fc */ __asm { NOP }
    /* +0x8681fd */ __asm { NOP }
    /* +0x8681fe */ __asm { NOP }
    /* +0x8681ff */ __asm { NOP }
    /* +0x868200 */ __asm { NOP }
    /* +0x868201 */ __asm { NOP }
    /* +0x868202 */ __asm { NOP }
    /* +0x8682bb */ __asm { RDTSC }
    /* +0x8682bd */ __asm { SHL RDX,0x20 }
    /* +0x8682c1 */ __asm { OR RDX,RAX }
    /* +0x8682c4 */ __asm { MOV R9,-0x5a46117eacb056b3 }
    /* +0x8682ce */ __asm { IMUL R9,RDX }
    /* +0x8682d2 */ __asm { MOV RCX,0x200b5994dbd33f6 }
    /* +0x8682dc */ __asm { ADD RCX,R9 }
    /* +0x8682df */ __asm { MOV R11,RCX }
    /* +0x8682e2 */ __asm { SHR R11,0x1b }
    /* +0x8682e6 */ __asm { MOV R8,RCX }
    /* +0x8682e9 */ __asm { SHR R8,0x2d }
    /* +0x8682ed */ __asm { XOR R8D,R11D }
    /* +0x8682f0 */ __asm { SHR RCX,0x3b }
    /* +0x8682f4 */ __asm { ROR R8D,CL }
    /* +0x8682f7 */ __asm { MOV dword ptr [RBP + 0x70],0x9ff76edd }
    /* +0x8682fe */ __asm { MOV R10D,dword ptr [RBP + 0x70] }
    /* +0x868302 */ __asm { CMP R8D,0x10f8fee }
    /* +0x868309 */ __asm { JA 0x7fffa4fd859a }
    /* +0x86830f */ __asm { MOV R10D,R14D }
    /* +0x868312 */ __asm { OR R10D,0x1 }
    /* +0x868316 */ __asm { MOV AX,0xd5b6 }
    /* +0x86831a */ __asm { IMUL EAX,R10D }
    /* +0x86831e */ __asm { LEA R10D,[RSI + RAX*0x1] }
    /* +0x868322 */ __asm { ADD R10D,0x146f }
    /* +0x868329 */ __asm { MOVZX R11D,R10W }
    /* +0x86832d */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0x868331 */ __asm { MOV R8D,0x2022bb90 }
    /* +0x868337 */ __asm { MOV R10D,R11D }
    /* +0x86833a */ __asm { ADD R8D,0x96918562 }
    /* +0x868341 */ __asm { MOV ECX,ESI }
    /* +0x868343 */ __asm { ROL R8D,CL }
    /* +0x868346 */ __asm { AND R10D,0x60 }
    /* +0x86834a */ __asm { ADD R11,0x60 }
    /* +0x86834e */ __asm { XOR R8D,dword ptr [RBP + 0x28] }
    /* +0x868352 */ __asm { MOV EDX,0xc7a49215 }
    /* +0x868357 */ __asm { CMP R8,RDX }
    /* +0x86835a */ __asm { CMOVZ R11,R10 }
    /* +0x86835e */ __asm { MOV RDX,-0x31dc735dc3015b8b }
    /* +0x868368 */ __asm { CMP qword ptr [R11],RDX }
    /* +0x86836b */ __asm { JZ 0x7fffa4fd9b19 }
    /* +0x868371 */ __asm { LEA RCX,[0x7fffa47b9afb] }
    /* +0x868378 */ __asm { MOV RDX,0x332567c5cd2b826e }
    /* +0x868382 */ __asm { CMP RCX,RDX }
    /* +0x868385 */ __asm { NOP }
    /* +0x868386 */ __asm { NOP }
    /* +0x868387 */ __asm { NOP }
    /* +0x868388 */ __asm { NOP }
    /* +0x868389 */ __asm { NOP }
    /* +0x86838a */ __asm { MOVZX EAX,uint8_t ptr [RCX + 0x2c4e] }
    /* +0x868391 */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + 0x2c54] }
    /* +0x86839a */ __asm { NOT R10B }
    /* +0x86839d */ __asm { ROL R10B,0x5 }
    /* +0x8683a1 */ __asm { MOV uint8_t ptr [RBP + 0x70],R10B }
    /* +0x8683a5 */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + 0x2c55] }
    /* +0x8683ae */ __asm { NOT R10B }
    /* +0x8683b1 */ __asm { ROL R10B,0x5 }
    /* +0x8683b5 */ __asm { MOV uint8_t ptr [RBP + 0x71],R10B }
    /* +0x8683b9 */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + 0x2c56] }
    /* +0x8683c2 */ __asm { NOT R10B }
    /* +0x8683c5 */ __asm { ROL R10B,0x5 }
    /* +0x8683c9 */ __asm { MOV uint8_t ptr [RBP + 0x72],R10B }
    /* +0x8683cd */ __asm { MOVZX EAX,uint8_t ptr [RCX + RAX*0x4 + 0x2c57] }
    /* +0x8683d5 */ __asm { NOT AL }
    /* +0x8683d7 */ __asm { ROL AL,0x5 }
}


// ============================================================================
// Function : Unwind@7fffa4fdf750  |  RVA: 0x86f750  |  Size: 201 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fdf750(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  code *pcVar2;
  uint32_t uVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x1a8)) {
    iVar1 = (int)*(uint64_t *)(param_2 + 0x68);
    uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0xd0);
    pcVar2 = (code *)((int64_t)(int)((uVar3 ^ 0xb194f6fc) + *(int *)(param_2 + 0xa8)) +
                     0x7fffa568ff90);
    (*pcVar2)((iVar1 * -0x5b000000 | (uint32_t)(iVar1 * 0x49f1bca5) >> 8) ^ uVar3,pcVar2,
              *(uint64_t *)(param_2 + 400) >> 0x3d ^ *(uint64_t *)(param_2 + 400));
  }
  *(uint16_t *)(param_2 + 400) = 0;
  *(uint64_t *)(param_2 + 0x1a0) = 0;
  *(uint64_t *)(param_2 + 0x1a8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fdf820  |  RVA: 0x86f820  |  Size: 174 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fdf820(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x108)) {
    uVar2 = (uint32_t)*(uint64_t *)(param_2 + 0x168) ^ 0x8910;
    uVar1 = *(uint64_t *)(param_2 + 0xf0);
    (*(code *)((int64_t)
               (short)(((uint16_t)uVar2 >> 1 | (uint16_t)((uVar2 & 1) != 0) << 0xf) *
                      (short)*(uint32_t *)(param_2 + 0xe4)) + 0x7fffa568db26))
              (param_1,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint16_t *)(param_2 + 0xf0) = 0;
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint64_t *)(param_2 + 0x100) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fdf8d0  |  RVA: 0x86f8d0  |  Size: 150 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fdf8d0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0x3c2bcbf3 - (int)*(uint64_t *)(param_2 + 0xd0);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xd0) & 0x1f;
  iVar2 = *(int *)(param_2 + 0x254) * (0x19ea515cU >> bVar1 | 0x19ea515c << 0x20 - bVar1);
  (*(code *)(&UNK_7fffa513d89d +
            (int)((uint32_t)*(uint64_t *)(param_2 + 0x228) ^
                 (uVar3 >> 1 | (uint32_t)((uVar3 & 1) != 0) << 0x1f))))
            (iVar2,&UNK_7fffa513d89d,(int64_t)iVar2);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fdf970  |  RVA: 0x86f970  |  Size: 4411 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4fdf970(void) {
    /* +0x86f970 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x86f975 */ __asm { PUSH RBP }
    /* +0x86f976 */ __asm { PUSH R13 }
    /* +0x86f978 */ __asm { PUSH R15 }
    /* +0x86f97a */ __asm { PUSH R12 }
    /* +0x86f97c */ __asm { PUSH RDI }
    /* +0x86f97d */ __asm { PUSH RBX }
    /* +0x86f97e */ __asm { PUSH RSI }
    /* +0x86f97f */ __asm { PUSH R14 }
    /* +0x86f981 */ __asm { SUB RSP,0x78 }
    /* +0x86f985 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x86f98c */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM15 }
    /* +0x86f993 */ __asm { MOV RBX,qword ptr [RBP + 0x1b0] }
    /* +0x86f99a */ __asm { RDTSC }
    /* +0x86f99c */ __asm { SHL RDX,0x20 }
    /* +0x86f9a0 */ __asm { OR RDX,RAX }
    /* +0x86f9a3 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0x86f9ad */ __asm { IMUL RDX,R9 }
    /* +0x86f9b1 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0x86f9bb */ __asm { ADD RDX,R9 }
    /* +0x86f9be */ __asm { MOV R11,RDX }
    /* +0x86f9c1 */ __asm { SHR R11,0x2d }
    /* +0x86f9c5 */ __asm { MOV RCX,RDX }
    /* +0x86f9c8 */ __asm { SHR RCX,0x3b }
    /* +0x86f9cc */ __asm { SHR RDX,0x1b }
    /* +0x86f9d0 */ __asm { XOR R11D,EDX }
    /* +0x86f9d3 */ __asm { ROR R11D,CL }
    /* +0x86f9d6 */ __asm { AND R11D,0x3 }
    /* +0x86f9da */ __asm { CMP R11D,0x2 }
    /* +0x86f9de */ __asm { JC 0x7fffa4fdfc70 }
    /* +0x86f9e4 */ __asm { CMP R11D,0x3 }
    /* +0x86f9e8 */ __asm { JNZ 0x7fffa4fdfd67 }
    /* +0x86f9ee */ __asm { LEA R9,[0x7fffa47c1fd0] }
    /* +0x86f9f5 */ __asm { MOV RDX,-0x55569b2984aed163 }
    /* +0x86f9ff */ __asm { CMP R9,RDX }
    /* +0x86fa02 */ __asm { JNZ 0x7fffa4fdfa0b }
    /* +0x86fa04 */ __asm { MOV AH,0x57 }
    /* +0x86fa06 */ __asm { POPFQ }
    /* +0x86fa07 */ __asm { JC 0x7fffa4fdf9de }
    /* +0x86fa09 */ __asm { CLI }
    /* +0x86fa0a */ __asm { CLC }
    /* +0x86fa0b */ __asm { MOV R10D,0xd7695f7 }
    /* +0x86fa11 */ __asm { MOV R11W,0x1420 }
    /* +0x86fa16 */ __asm { ADD R11D,dword ptr [RBP + 0xe8] }
    /* +0x86fa1d */ __asm { NOT R11D }
    /* +0x86fa20 */ __asm { MOV RCX,qword ptr [RBP + 0x50] }
    /* +0x86fa24 */ __asm { SUB R11D,ECX }
    /* +0x86fa27 */ __asm { MOVSX RDX,R11W }
    /* +0x86fa2b */ __asm { ADD R10D,dword ptr [RBP + 0x28] }
    /* +0x86fa2f */ __asm { IMUL R11D,R10D,-0x3fffff71 }
    /* +0x86fa36 */ __asm { XOR R11D,ECX }
    /* +0x86fa39 */ __asm { MOV R10,R9 }
    /* +0x86fa3c */ __asm { ADD R10,RDX }
    /* +0x86fa3f */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x1 + 0xe] }
    /* +0x86fa45 */ __asm { MOVZX EDX,uint8_t ptr [R10 + RAX*0x4 + 0x1e] }
    /* +0x86fa4b */ __asm { ROL DL,0x4 }
    /* +0x86fa4e */ __asm { MOV uint8_t ptr [RBP + 0x70],DL }
    /* +0x86fa51 */ __asm { MOVZX EDX,uint8_t ptr [R10 + RAX*0x4 + 0x1f] }
    /* +0x86fa57 */ __asm { ROL DL,0x4 }
    /* +0x86fa5a */ __asm { MOV uint8_t ptr [RBP + 0x71],DL }
    /* +0x86fa5d */ __asm { MOVZX EDX,uint8_t ptr [R10 + RAX*0x4 + 0x20] }
    /* +0x86fa63 */ __asm { ROL DL,0x4 }
    /* +0x86fa66 */ __asm { MOV uint8_t ptr [RBP + 0x72],DL }
    /* +0x86fa69 */ __asm { MOVZX EAX,uint8_t ptr [R10 + RAX*0x4 + 0x21] }
    /* +0x86fa6f */ __asm { ROL AL,0x4 }
    /* +0x86fa72 */ __asm { MOV uint8_t ptr [RBP + 0x73],AL }
    /* +0x86fa75 */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x86fa7b */ __asm { XOR R10D,dword ptr [RBP + 0x70] }
    /* +0x86fa7f */ __asm { NOT R11D }
    /* +0x86fa82 */ __asm { MOV ECX,dword ptr [R11] }
    /* +0x86fa85 */ __asm { RDTSC }
    /* +0x86fa87 */ __asm { SHL RDX,0x20 }
    /* +0x86fa8b */ __asm { OR RDX,RAX }
    /* +0x86fa8e */ __asm { BT R10D,ECX }
    /* +0x86fa92 */ __asm { JNC 0x7fffa4fe0202 }
    /* +0x86fa98 */ __asm { MOV R9,0x12a7bcdc3c1a3372 }
    /* +0x86faa2 */ __asm { MOV R11,0x20000000857 }
    /* +0x86faac */ __asm { ADD R11,R9 }
    /* +0x86faaf */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x86fab6 */ __asm { NOP }
    /* +0x86fab7 */ __asm { MOV RCX,0x0 }
    /* +0x86fabe */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0x86fac2 */ __asm { OR RCX,0x1 }
    /* +0x86fac6 */ __asm { IMUL RCX,R11 }
    /* +0x86faca */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0x86fad4 */ __asm { IMUL RDX,R9 }
    /* +0x86fad8 */ __asm { MOV R10,qword ptr [RBP + 0x50] }
    /* +0x86fadc */ __asm { XOR R10,RCX }
    /* +0x86fadf */ __asm { ADD R10,RDX }
    /* +0x86fae2 */ __asm { MOV RCX,R10 }
    /* +0x86fae5 */ __asm { SHR RCX,0x3b }
    /* +0x86fae9 */ __asm { MOV R11,R10 }
    /* +0x86faec */ __asm { SHR R11,0x1b }
    /* +0x86faf0 */ __asm { SHR R10,0x2d }
    /* +0x86faf4 */ __asm { XOR R11D,R10D }
    /* +0x86faf7 */ __asm { ROR R11D,CL }
    /* +0x86fafa */ __asm { MOV dword ptr [RBP + 0x70],0xc0631 }
    /* +0x86fb01 */ __asm { MOV R10D,dword ptr [RBP + 0x70] }
    /* +0x86fb05 */ __asm { TEST R10B,0x1 }
    /* +0x86fb09 */ __asm { JZ 0x7fffa4fe0a5d }
    /* +0x86fb0f */ __asm { CMP R11D,0x104ee26 }
    /* +0x86fb16 */ __asm { JA 0x7fffa4fdfc5a }
    /* +0x86fb1c */ __asm { MOV dword ptr [RBP + 0x70],0xf28a1b }
    /* +0x86fb23 */ __asm { MOV R10D,dword ptr [RBP + 0x70] }
    /* +0x86fb27 */ __asm { CMP R10D,0x6e62e507 }
    /* +0x86fb2e */ __asm { JNC 0x7fffa4fe0a73 }
    /* +0x86fb34 */ __asm { PXOR XMM0,XMM0 }
    /* +0x86fb38 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM0 }
    /* +0x86fb3d */ __asm { MOV R10D,0x8cce7bed }
    /* +0x86fb43 */ __asm { XOR R10D,0xac87626c }
    /* +0x86fb4a */ __asm { ADD R10D,0xb20b4e79 }
    /* +0x86fb51 */ __asm { XOR R10D,dword ptr [RBP + 0x50] }
    /* +0x86fb55 */ __asm { MOV dword ptr [RBP + 0x150],R10D }
    /* +0x86fb5c */ __asm { MOV R10D,dword ptr [RBP + 0x150] }
    /* +0x86fb63 */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0x86fb6a */ __asm { MOV dword ptr [RBP + 0x150],0x5120088d }
    /* +0x86fb74 */ __asm { MOV R10D,dword ptr [RBP + 0x150] }
    /* +0x86fb7b */ __asm { CMP R10D,0x8b7a0fc0 }
    /* +0x86fb82 */ __asm { JNC 0x7fffa4fe0a7b }
    /* +0x86fb88 */ __asm { PUSHFQ }
    /* +0x86fb89 */ __asm { POP R8 }
    /* +0x86fb8b */ __asm { TEST R8D,0x100 }
    /* +0x86fb92 */ __asm { NOP }
    /* +0x86fb93 */ __asm { NOP }
    /* +0x86fb94 */ __asm { NOP }
    /* +0x86fb95 */ __asm { NOP }
    /* +0x86fb96 */ __asm { NOP }
    /* +0x86fb97 */ __asm { MOV dword ptr [RBP + 0x150],0xccaae728 }
    /* +0x86fba1 */ __asm { MOV R10D,dword ptr [RBP + 0x150] }
    /* +0x86fba8 */ __asm { MOV RDX,qword ptr [RBP + 0x28] }
    /* +0x86fbac */ __asm { MOV ECX,EDX }
    /* +0x86fbae */ __asm { OR ECX,0x1 }
    /* +0x86fbb1 */ __asm { MOV R11W,0x2a67 }
    /* +0x86fbb6 */ __asm { IMUL R11D,ECX }
    /* +0x86fbba */ __asm { ROL R11W,0x2 }
    /* +0x86fbbf */ __asm { ADD R11D,dword ptr [RBP + 0x50] }
    /* +0x86fbc3 */ __asm { MOVZX ECX,R11W }
    /* +0x86fbc7 */ __asm { CMP R10D,ECX }
    /* +0x86fbca */ __asm { NOP }
    /* +0x86fbcb */ __asm { NOP }
    /* +0x86fbcc */ __asm { NOP }
    /* +0x86fbcd */ __asm { NOP }
    /* +0x86fbce */ __asm { LEA R8,[0x7fffa478c7f3] }
    /* +0x86fbd5 */ __asm { PUSHFQ }
    /* +0x86fbd6 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x86fbde */ __asm { POPFQ }
    /* +0x86fbdf */ __asm { MOV RDX,-0x1445446da0ff494c }
    /* +0x86fbe9 */ __asm { CMP R8,RDX }
    /* +0x86fbec */ __asm { JZ 0x7fffa4fe0a92 }
    /* +0x86fbf2 */ __asm { MOV R10W,0xc171 }
    /* +0x86fbf7 */ __asm { MOV qword ptr [RBP + 0x150],RCX }
    /* +0x86fbfe */ __asm { MOV RAX,qword ptr [RBP + 0xe8] }
    /* +0x86fc05 */ __asm { OR EAX,0x1 }
    /* +0x86fc08 */ __asm { IMUL EAX,R10D }
    /* +0x86fc0c */ __asm { ADD EAX,0xffffbb03 }
    /* +0x86fc11 */ __asm { MOV RCX,qword ptr [RBP + 0x50] }
    /* +0x86fc15 */ __asm { ROR AX,CL }
    /* +0x86fc18 */ __asm { MOV R10D,0xcfb47cd1 }
    /* +0x86fc1e */ __asm { MOV R9,qword ptr [RBP + 0x28] }
    /* +0x86fc22 */ __asm { ADD R10D,R9D }
    /* +0x86fc25 */ __asm { XOR R10D,0x5a3af72d }
    /* +0x86fc2c */ __asm { ROR R10D,CL }
    /* +0x86fc2f */ __asm { MOV R11W,0xf9dd }
    /* +0x86fc34 */ __asm { XOR R11D,ECX }
    /* +0x86fc37 */ __asm { ADD R11D,0x56 }
    /* +0x86fc3b */ __asm { MOV ECX,R9D }
    /* +0x86fc3e */ __asm { ROL R11W,CL }
    /* +0x86fc42 */ __asm { MOVZX R9D,AX }
    /* +0x86fc46 */ __asm { MOVSXD R10,R10D }
    /* +0x86fc49 */ __asm { MOVZX EDX,R11W }
    /* +0x86fc4d */ __asm { MOV EAX,dword ptr [R8 + -0x7967] }
    /* +0x86fc54 */ __asm { LEA R8,[RBP + 0x70] }
    /* +0x86fc58 */ __asm { SYSCALL }
    /* +0x86fc5a */ __asm { LEA RCX,[0x7fffa477cdd4] }
    /* +0x86fc61 */ __asm { MOV qword ptr [RBP + 0x70],R8 }
    /* +0x86fc65 */ __asm { MOV EAX,dword ptr [RCX + 0x8088] }
    /* +0x86fc6b */ __asm { JMP 0x7fffa4fe0a32 }
    /* +0x86fc70 */ __asm { CMP R11D,0x1 }
    /* +0x86fc74 */ __asm { JNZ 0x7fffa4fdfe5d }
    /* +0x86fc7a */ __asm { LEA R8,[0x7fffa47c1966] }
    /* +0x86fc81 */ __asm { NOP }
    /* +0x86fc82 */ __asm { MOV RCX,0x0 }
    /* +0x86fc89 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x86fc90 */ __asm { MOV RDX,-0x635ec411df74af68 }
    /* +0x86fc9a */ __asm { CMP R8,RDX }
    /* +0x86fc9d */ __asm { JZ 0x7fffa4fe0a99 }
    /* +0x86fca3 */ __asm { MOV R10D,0xf1c3d700 }
    /* +0x86fca9 */ __asm { MOV RCX,qword ptr [RBP + 0x50] }
    /* +0x86fcad */ __asm { XOR R10D,ECX }
    /* +0x86fcb0 */ __asm { IMUL R11D,R10D,0x1b4ade1 }
    /* +0x86fcb7 */ __asm { MOV R9,qword ptr [RBP + 0x28] }
    /* +0x86fcbb */ __asm { SUB R11D,R9D }
    /* +0x86fcbe */ __asm { ROL R11D,0x4 }
    /* +0x86fcc2 */ __asm { MOV R10D,0xd007b859 }
    /* +0x86fcc8 */ __asm { IMUL R10D,R10D,0x49ce0041 }
    /* +0x86fccf */ __asm { ADD R10D,R9D }
    /* +0x86fcd2 */ __asm { ROR R10D,CL }
    /* +0x86fcd5 */ __asm { IMUL ECX,R10D,0x1ad0c7a1 }
    /* +0x86fcdc */ __asm { CMP RCX,R11 }
    /* +0x86fcdf */ __asm { JNC 0x7fffa4fe054d }
    /* +0x86fce5 */ __asm { MOV ECX,0x62220ff7 }
    /* +0x86fcea */ __asm { ADD ECX,dword ptr [RBP + 0x50] }
    /* +0x86fced */ __asm { MOV R10D,0xf7a03db2 }
    /* +0x86fcf3 */ __asm { XOR R10D,0xa427d488 }
    /* +0x86fcfa */ __asm { ROL R10D,0x1 }
    /* +0x86fcfd */ __asm { MOV R9,qword ptr [RBP + 0x38] }
    /* +0x86fd01 */ __asm { IMUL R10D,R9D }
    /* +0x86fd05 */ __asm { MOV R11D,0xfcb91869 }
    /* +0x86fd0b */ __asm { SUB R11D,ECX }
    /* +0x86fd0e */ __asm { LEA RDX,[R8 + -0x52e7] }
    /* +0x86fd15 */ __asm { MOV EAX,0xc47e7ea4 }
    /* +0x86fd1a */ __asm { OR R8,-0x52e7 }
    /* +0x86fd21 */ __asm { IMUL EAX,R9D }
    /* +0x86fd25 */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0x86fd29 */ __asm { ROR EAX,CL }
    /* +0x86fd2b */ __asm { IMUL ECX,EAX,0x4f22ee5 }
    /* +0x86fd31 */ __asm { XOR ECX,0x6bc5f5b1 }
    /* +0x86fd37 */ __asm { CMP R11,RCX }
    /* +0x86fd3a */ __asm { CMOVC R8,RDX }
    /* +0x86fd3e */ __asm { MOVZX EAX,uint8_t ptr [R8 + 0xe] }
    /* +0x86fd43 */ __asm { LEA RDX,[R8 + RAX*0x4 + 0x1e] }
    /* +0x86fd48 */ __asm { MOVZX R9D,uint8_t ptr [R8 + RAX*0x4 + 0x1e] }
    /* +0x86fd4e */ __asm { MOVZX EAX,uint8_t ptr [R8 + RAX*0x4 + 0x1f] }
    /* +0x86fd54 */ __asm { NOT R10D }
    /* +0x86fd57 */ __asm { MOVSXD R11,R10D }
    /* +0x86fd5a */ __asm { ROL R9B,0x4 }
    /* +0x86fd5e */ __asm { MOV uint8_t ptr [RBP + 0x70],R9B }
    /* +0x86fd62 */ __asm { JMP 0x7fffa4fe0595 }
    /* +0x86fd67 */ __asm { LEA RCX,[0x7fffa47bebdc] }
    /* +0x86fd6e */ __asm { MOV RDX,-0xe4377a84288dcac }
    /* +0x86fd78 */ __asm { CMP RCX,RDX }
    /* +0x86fd7b */ __asm { NOP }
    /* +0x86fd7c */ __asm { NOP }
    /* +0x86fd7d */ __asm { NOP }
    /* +0x86fd7e */ __asm { NOP }
    /* +0x86fd7f */ __asm { NOP }
    /* +0x86fd80 */ __asm { MOV RDX,qword ptr [RBP + 0x28] }
    /* +0x86fd84 */ __asm { MOV R10D,EDX }
    /* +0x86fd87 */ __asm { OR R10D,0x1 }
    /* +0x86fd8b */ __asm { MOV R11D,0x9bc94b0 }
    /* +0x86fd91 */ __asm { IMUL R11D,R10D }
    /* +0x86fd95 */ __asm { XOR R11D,0x5595e1a5 }
    /* +0x86fd9c */ __asm { IMUL R11D,dword ptr [RBP + 0x38] }
    /* +0x86fda1 */ __asm { ROL R11D,0x1a }
    /* +0x86fda5 */ __asm { MOVZX EAX,uint8_t ptr [RCX + -0x254f] }
    /* +0x86fdac */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + -0x253f] }
    /* +0x86fdb5 */ __asm { ROL R10B,0x4 }
    /* +0x86fdb9 */ __asm { MOV uint8_t ptr [RBP + 0x70],R10B }
    /* +0x86fdbd */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + -0x253e] }
    /* +0x86fdc6 */ __asm { ROL R10B,0x4 }
    /* +0x86fdca */ __asm { MOV uint8_t ptr [RBP + 0x71],R10B }
    /* +0x86fdce */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + -0x253d] }
    /* +0x86fdd7 */ __asm { ROL R10B,0x4 }
    /* +0x86fddb */ __asm { MOV uint8_t ptr [RBP + 0x72],R10B }
    /* +0x86fddf */ __asm { MOVZX EAX,uint8_t ptr [RCX + RAX*0x4 + -0x253c] }
    /* +0x86fde7 */ __asm { ROL AL,0x4 }
    /* +0x86fdea */ __asm { MOV uint8_t ptr [RBP + 0x73],AL }
    /* +0x86fded */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x86fdf3 */ __asm { XOR R10D,dword ptr [RBP + 0x70] }
    /* +0x86fdf7 */ __asm { MOV ECX,dword ptr [R11] }
    /* +0x86fdfa */ __asm { BT R10D,ECX }
    /* +0x86fdfe */ __asm { JNC 0x7fffa4fe060d }
    /* +0x86fe04 */ __asm { MOV R11D,0xf5d3d265 }
    /* +0x86fe0a */ __asm { ADD R11D,0x4873daa7 }
    /* +0x86fe11 */ __asm { LEA R8,[0x7fffa47b9eaf] }
    /* +0x86fe18 */ __asm { MOV R9,R8 }
    /* +0x86fe1b */ __asm { ROL R9,0x2 }
    /* +0x86fe1f */ __asm { IMUL R11D,dword ptr [RBP + 0x38] }
    /* +0x86fe24 */ __asm { MOV RCX,qword ptr [RBP + 0xe8] }
    /* +0x86fe2b */ __asm { ROL R11D,CL }
    /* +0x86fe2e */ __asm { SUB R9,R11 }
    /* +0x86fe31 */ __asm { MOV RDX,-0x44711e52fb1138c2 }
    /* +0x86fe3b */ __asm { CMP R9,RDX }
    /* +0x86fe3e */ __asm { NOP }
    /* +0x86fe3f */ __asm { NOP }
    /* +0x86fe40 */ __asm { NOP }
    /* +0x86fe41 */ __asm { NOP }
    /* +0x86fe42 */ __asm { NOP }
    /* +0x86fe43 */ __asm { NOP }
    /* +0x86fe44 */ __asm { NOP }
    /* +0x86fe45 */ __asm { NOP }
    /* +0x86fe46 */ __asm { NOP }
    /* +0x86fe47 */ __asm { NOP }
    /* +0x86fe48 */ __asm { NOP }
    /* +0x86fe49 */ __asm { NOP }
    /* +0x86fe4a */ __asm { NOP }
    /* +0x86fe4b */ __asm { NOP }
    /* +0x86fe4c */ __asm { NOP }
    /* +0x86fe4d */ __asm { MOV qword ptr [RBP + 0x70],RCX }
    /* +0x86fe51 */ __asm { MOV EAX,dword ptr [R8 + 0x267d] }
    /* +0x86fe58 */ __asm { JMP 0x7fffa4fe0a32 }
    /* +0x86fe5d */ __asm { MOV RDX,0x7e6123a60cc2413d }
    /* +0x86fe67 */ __asm { XOR RDX,qword ptr [RBP + 0xe8] }
    /* +0x86fe6e */ __asm { ROL RDX,0x14 }
    /* +0x86fe72 */ __asm { MOV RCX,qword ptr [RBP + 0x50] }
    /* +0x86fe76 */ __asm { ROL RDX,CL }
    /* +0x86fe79 */ __asm { LEA R8,[0x7fffa47babf2] }
    /* +0x86fe80 */ __asm { IMUL RDX,RDX,0x342eb227 }
    /* +0x86fe87 */ __asm { CMP R8,RDX }
    /* +0x86fe8a */ __asm { NOP }
    /* +0x86fe8b */ __asm { NOP }
    /* +0x86fe8c */ __asm { NOP }
    /* +0x86fe8d */ __asm { NOP }
    /* +0x86fe8e */ __asm { NOP }
    /* +0x86fe8f */ __asm { NOP }
    /* +0x86fe90 */ __asm { NOP }
    /* +0x86fe91 */ __asm { NOP }
    /* +0x86fe92 */ __asm { NOP }
    /* +0x86fe93 */ __asm { NOP }
    /* +0x86fe94 */ __asm { MOV R10D,0xdf3dbabf }
    /* +0x86fe9a */ __asm { MOV R9,qword ptr [RBP + 0x50] }
    /* +0x86fe9e */ __asm { XOR R10D,R9D }
    /* +0x86fea1 */ __asm { IMUL R11D,R10D,-0xbbc7e9b }
    /* +0x86fea8 */ __asm { MOV RCX,qword ptr [RBP + 0xe8] }
    /* +0x86feaf */ __asm { SUB R11D,ECX }
    /* +0x86feb2 */ __asm { ROL R11D,0x12 }
    /* +0x86feb6 */ __asm { MOV EAX,0xefacf71c }
    /* +0x86febb */ __asm { XOR EAX,R9D }
    /* +0x86febe */ __asm { ROR EAX,CL }
    /* +0x86fec0 */ __asm { ADD EAX,0x74045bd6 }
    /* +0x86fec5 */ __asm { MOV RCX,R8 }
    /* +0x86fec8 */ __asm { ADD RCX,RAX }
    /* +0x86fecb */ __asm { MOVZX EAX,uint8_t ptr [R8 + RAX*0x1 + 0xe] }
    /* +0x86fed1 */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + 0x1e] }
    /* +0x86fed7 */ __asm { ROL R10B,0x4 }
    /* +0x86fedb */ __asm { MOV uint8_t ptr [RBP + 0x70],R10B }
    /* +0x86fedf */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + 0x1f] }
    /* +0x86fee5 */ __asm { ROL R10B,0x4 }
    /* +0x86fee9 */ __asm { MOV uint8_t ptr [RBP + 0x71],R10B }
    /* +0x86feed */ __asm { MOVZX R10D,uint8_t ptr [RCX + RAX*0x4 + 0x20] }
    /* +0x86fef3 */ __asm { ROL R10B,0x4 }
    /* +0x86fef7 */ __asm { MOV uint8_t ptr [RBP + 0x72],R10B }
    /* +0x86fefb */ __asm { MOVZX EAX,uint8_t ptr [RCX + RAX*0x4 + 0x21] }
    /* +0x86ff00 */ __asm { ROL AL,0x4 }
    /* +0x86ff03 */ __asm { MOV uint8_t ptr [RBP + 0x73],AL }
    /* +0x86ff06 */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x86ff0c */ __asm { XOR R10D,dword ptr [RBP + 0x70] }
    /* +0x86ff10 */ __asm { MOV ECX,dword ptr [R11] }
    /* +0x86ff13 */ __asm { BT R10D,ECX }
    /* +0x86ff17 */ __asm { JNC 0x7fffa4fe08cb }
    /* +0x86ff1d */ __asm { PUSHFQ }
    /* +0x86ff1e */ __asm { POP R8 }
    /* +0x86ff20 */ __asm { MOV R15,qword ptr [RBP + 0x28] }
    /* +0x86ff24 */ __asm { MOV ECX,R15D }
    /* +0x86ff27 */ __asm { MOV R14,qword ptr [RBP + 0x50] }
    /* +0x86ff2b */ __asm { SUB ECX,R14D }
    /* +0x86ff2e */ __asm { MOV R10D,0x851e19a8 }
    /* +0x86ff34 */ __asm { ADD R10D,0x912b0f9e }
    /* +0x86ff3b */ __asm { MOV R9D,0x12cf2ffe }
    /* +0x86ff41 */ __asm { RDTSC }
    /* +0x86ff43 */ __asm { SHL RDX,0x20 }
    /* +0x86ff47 */ __asm { OR RDX,RAX }
    /* +0x86ff4a */ __asm { MOV RAX,-0x5b596a0ee0e87373 }
    /* +0x86ff54 */ __asm { IMUL RAX,RDX }
    /* +0x86ff58 */ __asm { MOV R11,0x6b8149a3163ea37e }
    /* +0x86ff62 */ __asm { ADD R11,RAX }
    /* +0x86ff65 */ __asm { MOV RAX,R11 }
    /* +0x86ff68 */ __asm { SHR RAX,0x1b }
    /* +0x86ff6c */ __asm { XOR R10D,R15D }
    /* +0x86ff6f */ __asm { SUB R10D,R14D }
    /* +0x86ff72 */ __asm { ROL R10D,0x1d }
    /* +0x86ff76 */ __asm { MOV EDX,0x20fcd5fd }
    /* +0x86ff7b */ __asm { IMUL EDX,dword ptr [RBP + 0x38] }
    /* +0x86ff7f */ __asm { ROL EDX,0x1e }
    /* +0x86ff82 */ __asm { MOV RSI,qword ptr [RBP + 0xe8] }
    /* +0x86ff89 */ __asm { ADD EDX,ESI }
    /* +0x86ff8b */ __asm { MOVSXD RDX,EDX }
    /* +0x86ff8e */ __asm { XOR R9D,0x1fe09345 }
    /* +0x86ff95 */ __asm { ADD R9D,ECX }
    /* +0x86ff98 */ __asm { ROL R9D,0xe }
    /* +0x86ff9c */ __asm { MOV RCX,R11 }
    /* +0x86ff9f */ __asm { SHR RCX,0x3b }
    /* +0x86ffa3 */ __asm { SHR R11,0x2d }
    /* +0x86ffa7 */ __asm { MOV R15D,R11D }
    /* +0x86ffaa */ __asm { SUB R15D,EAX }
    /* +0x86ffad */ __asm { XOR R11D,EAX }
    /* +0x86ffb0 */ __asm { MOV EAX,0x4d317961 }
    /* +0x86ffb5 */ __asm { SUB EAX,ESI }
    /* +0x86ffb7 */ __asm { XOR EAX,R14D }
    /* +0x86ffba */ __asm { NOT EAX }
    /* +0x86ffbc */ __asm { ROL EAX,0x1 }
    /* +0x86ffbe */ __asm { CMP RDX,RAX }
    /* +0x86ffc1 */ __asm { CMOVGE R11D,R15D }
    /* +0x86ffc5 */ __asm { ROR R11D,CL }
    /* +0x86ffc8 */ __asm { CMP R9,R10 }
    /* +0x86ffcb */ __asm { JBE 0x7fffa4fdffd6 }
    /* +0x86ffcd */ __asm { AND R8D,0x100 }
    /* +0x86ffd4 */ __asm { NOP }
    /* +0x86ffd5 */ __asm { NOP }
    /* +0x86ffd6 */ __asm { NOP }
    /* +0x86ffd7 */ __asm { NOP }
    /* +0x86ffd8 */ __asm { NOP }
    /* +0x86ffd9 */ __asm { MOV dword ptr [RBP + 0x70],0xd23fa40 }
    /* +0x86ffe0 */ __asm { MOV R10D,dword ptr [RBP + 0x70] }
    /* +0x86ffe4 */ __asm { TEST R10D,R10D }
    /* +0x86ffe7 */ __asm { JS 0x7fffa4fe0aa8 }
    /* +0x86ffed */ __asm { MOV RCX,0x0 }
    /* +0x86fff4 */ __asm { NOP }
    /* +0x86fff5 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x86fffc */ __asm { CMP R11D,0x44f3a27 }
    /* +0x870003 */ __asm { JA 0x7fffa4fe01dc }
    /* +0x870009 */ __asm { MOV RCX,0x0 }
    /* +0x870010 */ __asm { NOP }
    /* +0x870011 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x870018 */ __asm { MOV dword ptr [RBP + 0x70],0xa81e5b3d }
    /* +0x87001f */ __asm { MOV R10D,dword ptr [RBP + 0x70] }
    /* +0x870023 */ __asm { MOV R11D,0x7e745d01 }
    /* +0x870029 */ __asm { SUB R11D,dword ptr [RBP + 0x28] }
    /* +0x87002d */ __asm { ADD R11D,0x773a58e4 }
    /* +0x870034 */ __asm { ROR R11D,0x1 }
    /* +0x870037 */ __asm { MOV RCX,qword ptr [RBP + 0x50] }
    /* +0x87003b */ __asm { ROL R11D,CL }
    /* +0x87003e */ __asm { CMP R10D,R11D }
    /* +0x870041 */ __asm { NOP }
    /* +0x870042 */ __asm { NOP }
    /* +0x870043 */ __asm { NOP }
    /* +0x870044 */ __asm { NOP }
    /* +0x870045 */ __asm { NOP }
    /* +0x870046 */ __asm { MOV ECX,0xdb97b91 }
    /* +0x87004b */ __asm { MOV R8,RCX }
    /* +0x87004e */ __asm { ROL R8,0x1c }
    /* +0x870052 */ __asm { MOV RDX,-0x8371c923 }
    /* +0x87005c */ __asm { ADD RDX,R8 }
    /* +0x87005f */ __asm { MOV R9,0x5c2f5279118b7c53 }
    /* +0x870069 */ __asm { CMP RDX,R9 }
    /* +0x87006c */ __asm { JZ 0x7fffa4fe0abb }
    /* +0x870072 */ __asm { TEST uint8_t ptr [RCX + 0x724486af],0x1 }
    /* +0x870079 */ __asm { JNZ 0x7fffa4fe01dc }
    /* +0x87007f */ __asm { MOV R11,qword ptr [RBP + 0x28] }
    /* +0x870083 */ __asm { OR R11D,0x1 }
    /* +0x870087 */ __asm { MOV AX,0xe7d7 }
    /* +0x87008b */ __asm { IMUL EAX,R11D }
    /* +0x87008f */ __asm { PXOR XMM0,XMM0 }
    /* +0x870093 */ __asm { ROL AX,0xc }
    /* +0x870097 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM0 }
    /* +0x87009c */ __asm { MOV RDX,qword ptr [RBP + 0x50] }
    /* +0x8700a0 */ __asm { LEA R10D,[RDX + RAX*0x1] }
    /* +0x8700a4 */ __asm { IMUL R10D,R10D,0x3f33 }
    /* +0x8700ab */ __asm { MOVZX R11D,R10W }
    /* +0x8700af */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0x8700b3 */ __asm { MOV R9,-0x7c67069dab59ac51 }
    /* +0x8700bd */ __asm { CMP qword ptr [RDX + 0x988],R9 }
    /* +0x8700c4 */ __asm { JZ 0x7fffa4fe0ad3 }
    /* +0x8700ca */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0x8700d1 */ __asm { PUSHFQ }
    /* +0x8700d2 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x8700da */ __asm { POPFQ }
    /* +0x8700db */ __asm { MOV dword ptr [RBP + 0x150],0xa321c078 }
    /* +0x8700e5 */ __asm { MOV R10D,dword ptr [RBP + 0x150] }
    /* +0x8700ec */ __asm { CMP R10D,0xc0475650 }
    /* +0x8700f3 */ __asm { NOP }
    /* +0x8700f4 */ __asm { NOP }
    /* +0x8700f5 */ __asm { NOP }
    /* +0x8700f6 */ __asm { NOP }
    /* +0x8700f7 */ __asm { NOP }
    /* +0x8700f8 */ __asm { NOP }
    /* +0x8700f9 */ __asm { NOP }
    /* +0x8700fa */ __asm { NOP }
    /* +0x8700fb */ __asm { NOP }
    /* +0x8700fc */ __asm { NOP }
    /* +0x8700fd */ __asm { NOP }
    /* +0x8700fe */ __asm { NOP }
    /* +0x8700ff */ __asm { MOV dword ptr [RBP + 0x150],0xde991101 }
    /* +0x870109 */ __asm { MOV R10D,dword ptr [RBP + 0x150] }
    /* +0x870110 */ __asm { TEST R10D,R10D }
    /* +0x870113 */ __asm { JNS 0x7fffa4fe0ae3 }
    /* +0x870119 */ __asm { PUSHFQ }
    /* +0x87011a */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x870122 */ __asm { POPFQ }
    /* +0x870123 */ __asm { LEA R11,[0x7fffa478bd43] }
    /* +0x87012a */ __asm { MOV RDX,-0x4779a68dda53eae }
    /* +0x870134 */ __asm { MOV RCX,qword ptr [RBP + 0x50] }
    /* +0x870138 */ __asm { OR RCX,0x1 }
    /* +0x87013c */ __asm { IMUL RCX,RDX }
    /* +0x870140 */ __asm { NOT RCX }
    /* +0x870143 */ __asm { ROL RCX,0xa }
    /* +0x870147 */ __asm { CMP R11,RCX }
    /* +0x87014a */ __asm { NOP }
    /* +0x87014b */ __asm { NOP }
    /* +0x87014c */ __asm { NOP }
    /* +0x87014d */ __asm { NOP }
    /* +0x87014e */ __asm { NOP }
    /* +0x87014f */ __asm { MOV RCX,qword ptr [RBP + 0xe8] }
    /* +0x870156 */ __asm { MOV R10D,ECX }
    /* +0x870159 */ __asm { OR R10D,0x1 }
    /* +0x87015d */ __asm { MOV R8W,0x983a }
    /* +0x870162 */ __asm { MOV R15,qword ptr [RBP + 0x50] }
    /* +0x870166 */ __asm { SUB R8D,R15D }
    /* +0x870169 */ __asm { IMUL R8D,R10D }
    /* +0x87016d */ __asm { XOR R8D,0x7c5b }
    /* +0x870174 */ __asm { IMUL EDX,R8D,-0x30b9 }
    /* +0x87017b */ __asm { MOV R8W,0x7828 }
    /* +0x870180 */ __asm { MOV EAX,0xa4c274d4 }
    /* +0x870185 */ __asm { ADD EAX,0x963f14a2 }
    /* +0x87018a */ __asm { ROL EAX,CL }
    /* +0x87018c */ __asm { MOVZX R9D,DX }
    /* +0x870190 */ __asm { SUB R8D,R15D }
    /* +0x870193 */ __asm { XOR EAX,0xd95783cb }
    /* +0x870198 */ __asm { MOV R14,qword ptr [RBP + 0x38] }
    /* +0x87019c */ __asm { IMUL R14D,EAX }
}


// ============================================================================
// Function : Unwind@7fffa4fe0b60  |  RVA: 0x870b60  |  Size: 173 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fe0b60(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x1a8)) {
    (*(code *)((int64_t)
               (int)((0x7d95959cU - (int)*(uint64_t *)(param_2 + 0xa8) ^ 0xc000008e) +
                    *(int *)(param_2 + 0xd0)) + 0x7fffa5696cb8))
              (*(uint64_t *)(param_2 + 0xa8),0x7fffa5696cb8,
               *(uint64_t *)(param_2 + 400) >> 0x3d ^ *(uint64_t *)(param_2 + 400));
  }
  *(uint64_t *)(param_2 + 0x1a0) = 0;
  *(uint16_t *)(param_2 + 400) = 0;
  *(uint64_t *)(param_2 + 0x1a8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fe0c10  |  RVA: 0x870c10  |  Size: 162 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fe0c10(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  code *pcVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x188)) {
    iVar1 = *(int *)(param_2 + 0xe4) * 0x436a7133 + -0x1f00;
    pcVar2 = (code *)((int64_t)(short)iVar1 + 0x7fffa568a277);
    (*pcVar2)(iVar1,pcVar2,*(uint64_t *)(param_2 + 0x170) >> 0x3d ^ *(uint64_t *)(param_2 + 0x170)
             );
  }
  *(uint64_t *)(param_2 + 0x218) = *(uint64_t *)(param_2 + 0x1f8);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fe0cc0  |  RVA: 0x870cc0  |  Size: 103 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fe0cc0(uint64_t param_1,int64_t param_2)

{
  if (*(int64_t *)(param_2 + 0x218) != 0) {
    (*(code *)(&UNK_7fffa5086718 +
              (short)(-(short)*(uint32_t *)(param_2 + 0xd0) - 0xdfeU ^ 0x2377)))();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4fe0d30  |  RVA: 0x870d30  |  Size: 1011 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4fe0d30(void)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint16_t uVar3;
  short sVar4;
  int64_t lVar5;
  uint8_t bVar6;
  uint32_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint32_t unaff_R12D;
  
  uVar7 = (~unaff_R12D & 0x903db02) * 0x34c0138 +
          (unaff_R12D ^ 0x8d7fdf37) * -0x5a484fe8 + (unaff_R12D ^ 0x728020c8) * -0x16fc4eb3 +
          (unaff_R12D | 0xf6fc24fd) * -0x3ffffffd +
          ((unaff_R12D & 0xd6fc04b5 ^ 0xa47c247d) - (~unaff_R12D & 0x20002048)) * 0x434c0135;
  sVar4 = (short)(uVar7 | 1);
  uVar3 = (uint16_t)uVar7;
  lVar8 = (int64_t)(short)~(sVar4 * -0x53a0);
  bVar6 = (uint8_t)uVar7;
  *(uint8_t *)((int64_t)(short)(uVar3 + 0x5601) + 0x7fffa47c4f84) =
       (0xbb - bVar6 ^ 0xb) << 3 | (uint8_t)(0xbb - bVar6) >> 5;
  *(uint8_t (*) [16])(lVar8 + 0x7fffa47c629c) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar8 + 0x7fffa47c62ac) = 0;
  *(uint32_t *)
   ((int64_t)(int)((-0x2903fb4b - uVar7) * 2 | (uint32_t)((int)(-0x2903fb4b - uVar7) < 0)) +
   0x7fffa47c884b) = 0;
  uVar2 = rdtsc();
  lVar8 = (uVar2 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar2)) * 0x25eaa541208174c;
  for (lVar5 = 3;
      *(char *)(lVar5 + (int64_t)(int)~((uVar7 + 0x3903bb85) * 0x10 | uVar7 + 0x3903bb85 >> 0x1c) +
                        0x7fffa47c9787) = (char)((uint64_t)(lVar8 * 0x541208174c) >> 0x20),
      lVar5 != 0x2b; lVar5 = lVar5 + 4) {
    *(char *)(lVar5 + (int64_t)(short)((uVar3 ^ 0x6655) + 0x5d9e) + 0x7fffa47c6dab) =
         (char)((uint64_t)(lVar8 * 0x6826debe90) >> 0x20);
    *(char *)(lVar5 + (int64_t)(short)(-0x3ece << (bVar6 & 0xf) | 0xc132U >> 0x10 - (bVar6 & 0xf))
                      + 0x7fffa47c32fe) = (char)((uint64_t)(lVar8 * 0x1cf65761cf9a1100) >> 0x20);
    *(char *)(lVar5 + 0x7fffa47bf42f) = (char)((uint64_t)(lVar8 * 0x5a1bf82c0) >> 0x20);
    lVar8 = lVar8 * 0x1cf65761cf9a1100;
  }
  uVar2 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)~((uVar7 | 1) * 0x1659f835) + 0x7fffa47cb6db) * 0x2aaaaaab
          + 0x2aaaaaab) * 6;
  uVar9 = uVar2 >> 0x20;
  lVar8 = (int64_t)(int)(0x1d90ffff << (bVar6 & 0x1f) | 0x1d90ffffU >> 0x20 - (bVar6 & 0x1f));
  bVar6 = *(uint8_t *)((int64_t)(short)(uVar3 + 0x4cd7) + 0x7fffa47c58ce);
  *(uint8_t *)(lVar8 + 0x7fffa47cd6ac + uVar9 * 4) =
       *(uint8_t *)(((int64_t)(int)(0x30c416c - uVar7) ^ 0x53f0f7c7U) + 0x7fffa47ceedb) ^ 0x53;
  bVar1 = *(uint8_t *)((int64_t)(short)(sVar4 * -0xe80) + 0x7fffa47bfad8);
  *(uint8_t *)(lVar8 + 0x7fffa47cd6ab + uVar9 * 4) = bVar6 ^ 0xaa;
  bVar6 = *(uint8_t *)(((int64_t)(int)(uVar7 + 0x3add0057) ^ 0x6e2611f2U) + 0x7fffa47c9562);
  *(uint8_t *)(lVar8 + 0x7fffa47cd6ae + uVar9 * 4) = bVar1 ^ 0xca;
  *(uint8_t *)(lVar8 + 0x7fffa47cd6ad + uVar9 * 4) = bVar6 ^ 0x5d;
  *(char *)((int64_t)(int)(uVar7 ^ 0xa9033f31) + 0x7fffa47c82b4) = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4fe1170  |  RVA: 0x871170  |  Size: 620 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4fe1170(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  bRam00007fffa47bbec1 = 0;
  uRam00007fffa47bbee8 = 0;
  uRam00007fffa47bbef0 = 0;
  uRam00007fffa47bbed8 = 0;
  uRam00007fffa47bbee0 = 0;
  uRam00007fffa47bbec8 = 0;
  uRam00007fffa47bbed0 = 0;
  uRam00007fffa47bbef8 = 0;
  uRam00007fffa47bbf05 = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x7e589fcc8fa0609 + 1;
  uVar2 = 0;
  while( true ) {
    lVar3 = lVar3 * 0x7e589fcc8fa0609 + 1;
    *(char *)(uVar2 + 0x7fffa47bbeb8) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x7e589fcc8fa0609 + 1;
    *(char *)(uVar2 + 0x7fffa47bbeb9) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x7e589fcc8fa0609 + 1;
    *(char *)((uVar2 | 2) + 0x7fffa47bbeb8) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x7e589fcc8fa0609 + 1;
    *(char *)(uVar2 + 0x7fffa47bbebb) = (char)((uint64_t)lVar3 >> 0x20);
    if (uVar2 == 0x60) break;
    uVar2 = uVar2 + 4;
  }
  lVar3 = (uint64_t)((uint32_t)bRam00007fffa47bbec1 * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uint64_t)(uint32_t)((int)((uint64_t)lVar3 >> 0x20) << 3) + 0x7fffa47bbec8) =
       ~uRam00007fffa47bbf05;
  bRam00007fffa47bbec1 = (char)((uint64_t)lVar3 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4fe13e0  |  RVA: 0x8713e0  |  Size: 273 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4fe13e0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5,char param_6)

{
  int in_EAX;
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  
  uVar1 = (uint64_t)(in_EAX * -0x55 & 0xff) ^ 0x93;
  bVar2 = param_6 + 0xafU ^ 8;
  if (param_5 < bVar2 + uVar1) {
    return;
  }
  *(uint8_t *)(param_1 + 6) = *(uint8_t *)(param_1 + 6) | 0x80;
  bVar3 = bVar2 & 0xf;
  *(uint8_t *)(param_1 + 0x12) = *(uint8_t *)(param_1 + 0x12) & 0xf | (char)uVar1 << 4;
  *(uint8_t *)(param_1 + 0xe) = *(uint8_t *)(param_1 + 0xe) & 0xf | bVar2 << 4;
  if (bVar3 < 4) {
    if (bVar3 < 2) {
      if (bVar3 == 1) {
        uVar1 = (uint64_t)*(uint8_t *)(param_2 + uVar1);
        goto LAB_7fffa4fe148e;
      }
    }
    else if (bVar3 == 2) {
      uVar1 = (uint64_t)*(uint16_t *)(param_2 + uVar1);
      goto LAB_7fffa4fe148e;
    }
  }
  else if (bVar3 < 8) {
    if (bVar3 == 4) {
      uVar1 = (uint64_t)*(uint32_t *)(param_2 + uVar1);
      goto LAB_7fffa4fe148e;
    }
  }
  else if (bVar3 == 8) {
    uVar1 = *(uint64_t *)(param_2 + uVar1);
    goto LAB_7fffa4fe148e;
  }
  uVar1 = 0;
LAB_7fffa4fe148e:
  *(uint64_t *)(param_1 + 0x28) = uVar1;
  *(uint8_t *)(param_1 + 0xb) = bVar3 + *(char *)(param_1 + 0xb);
  return;
}


// ============================================================================
// Function : FUN_7fffa4fe1500  |  RVA: 0x871500  |  Size: 826 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4fe1500(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)

{
  char *pcVar1;
  uint8_t *pbVar2;
  int64_t lVar3;
  uint32_t uVar4;
  uint8_t bVar5;
  uint16_t uVar6;
  uint64_t in_RAX;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  code *pcVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t in_R10;
  uint8_t in_R11B;
  int64_t lVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  
  bVar5 = (uint8_t)param_4;
  lVar3 = *(int64_t *)
           ((int64_t)(short)((0x3841U >> (bVar5 & 0xf) | 0x3841 << 0x10 - (bVar5 & 0xf)) * -0x6c9f)
           + 0x7fffa478851c);
  lVar8 = param_3 * 0x10;
  pcVar1 = (char *)(lVar3 + lVar8);
  auVar17[0] = -(*pcVar1 == '\0');
  auVar17[1] = -(pcVar1[1] == '\0');
  auVar17[2] = -(pcVar1[2] == '\0');
  auVar17[3] = -(pcVar1[3] == '\0');
  auVar17[4] = -(pcVar1[4] == '\0');
  auVar17[5] = -(pcVar1[5] == '\0');
  auVar17[6] = -(pcVar1[6] == '\0');
  auVar17[7] = -(pcVar1[7] == '\0');
  auVar17[8] = -(pcVar1[8] == '\0');
  auVar17[9] = -(pcVar1[9] == '\0');
  auVar17[10] = -(pcVar1[10] == '\0');
  auVar17[0xb] = -(pcVar1[0xb] == '\0');
  auVar17[0xc] = -(pcVar1[0xc] == '\0');
  auVar17[0xd] = -(pcVar1[0xd] == '\0');
  auVar17[0xe] = -(pcVar1[0xe] == '\0');
  auVar17[0xf] = -(pcVar1[0xf] == '\0');
  uVar15 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar17 >> 7,0) & 1) |
                          (uint16_t)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                          (uint16_t)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                          (uint16_t)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                          (uint16_t)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                          (uint16_t)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                          (uint16_t)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                          (uint16_t)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                          (uint16_t)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                          (uint16_t)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                          (uint16_t)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                          (uint16_t)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                          (uint16_t)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                          (uint16_t)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                         (uint16_t)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe);
  if (uVar15 == 0) {
    uVar10 = *(uint64_t *)
              ((int64_t)(int)(-0x3c88d << (bVar5 & 0x1f) | 0xfffc3773U >> 0x20 - (bVar5 & 0x1f)) +
              0x7fffa47905bc);
    lVar14 = 1;
    while( true ) {
      pbVar2 = (uint8_t *)(lVar3 + 0xf + param_3 * 0x10);
      *pbVar2 = *pbVar2 | '\x01' << (in_R11B & 7);
      param_3 = lVar14 + param_3 & uVar10;
      lVar8 = param_3 * 0x10;
      pcVar1 = (char *)(lVar3 + lVar8);
      auVar18[0] = -(*pcVar1 == '\0');
      auVar18[1] = -(pcVar1[1] == '\0');
      auVar18[2] = -(pcVar1[2] == '\0');
      auVar18[3] = -(pcVar1[3] == '\0');
      auVar18[4] = -(pcVar1[4] == '\0');
      auVar18[5] = -(pcVar1[5] == '\0');
      auVar18[6] = -(pcVar1[6] == '\0');
      auVar18[7] = -(pcVar1[7] == '\0');
      auVar18[8] = -(pcVar1[8] == '\0');
      auVar18[9] = -(pcVar1[9] == '\0');
      auVar18[10] = -(pcVar1[10] == '\0');
      auVar18[0xb] = -(pcVar1[0xb] == '\0');
      auVar18[0xc] = -(pcVar1[0xc] == '\0');
      auVar18[0xd] = -(pcVar1[0xd] == '\0');
      auVar18[0xe] = -(pcVar1[0xe] == '\0');
      auVar18[0xf] = -(pcVar1[0xf] == '\0');
      uVar15 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar18 >> 7,0) & 1) |
                              (uint16_t)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                              (uint16_t)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                              (uint16_t)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                              (uint16_t)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                              (uint16_t)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                              (uint16_t)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                              (uint16_t)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                              (uint16_t)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                              (uint16_t)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                              (uint16_t)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                              (uint16_t)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                              (uint16_t)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                              (uint16_t)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                             (uint16_t)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe);
      if (uVar15 != 0) break;
      lVar14 = lVar14 + 1;
    }
  }
  uVar6 = (uint16_t)param_4;
  lVar14 = param_3 * 0x78 +
           *(int64_t *)((int64_t)(short)((uVar6 ^ 0xcc65) + 0x950) + 0x7fffa4786d7d);
  uVar10 = ~in_R10 * -0x209744614fef722d >> 2 ^ ~in_R10 * -0x209744614fef722d;
  uVar13 = (in_RAX << 0x2a | in_RAX >> 0x16) ^ (in_RAX << 4 | in_RAX >> 0x3c) ^ in_RAX;
  uVar13 = (uVar13 << 0x14 | uVar13 >> 0x2c) ^ (uVar13 << 8 | uVar13 >> 0x38) ^ uVar13;
  uVar13 = (uVar13 << 0x10 | uVar13 >> 0x30) ^ (uVar13 << 0x28 | uVar13 >> 0x18) ^ uVar13;
  uVar12 = (uint64_t)param_4;
  uVar4 = 0;
  for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
    uVar4 = uVar4 + 1;
  }
  uVar16 = (uint64_t)uVar4;
  pcVar11 = (code *)((int64_t)(short)((0x9bab - uVar6) * 0x400 | (uint16_t)(0x9bab - uVar6) >> 6) +
                    0x7fffa526f585);
  (*pcVar11)(uVar12,pcVar11,(int64_t)(int)(0x4789dfcc - param_4));
  puVar9 = (uint64_t *)((uVar12 << 0x2c | uVar12 >> 0x14) - ((uVar12 >> 0x14) << 0x36));
  uVar10 = uVar10 >> 4 ^ uVar10;
  uVar12 = (uVar10 >> 8) + uVar10;
  if (param_4 == 0x811350be) {
    uVar12 = uVar10 >> 8 ^ uVar10;
  }
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  *(uint64_t **)(lVar14 + uVar16 * 8) = puVar9;
  *puVar9 = *(uint64_t *)(uVar12 >> 0x20 ^ uVar12);
  *(uint8_t (*) [16])(puVar9 + 3) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar9 + 1) = (uint8_t  [16])0x0;
  *(int64_t *)
   ((int64_t)(int)(0xffffd800U >> (bVar5 & 0x1f) | -0x2800 << 0x20 - (bVar5 & 0x1f)) +
   0x7fffa478b3b5) =
       *(int64_t *)
        ((int64_t)(int)((param_4 * -0x2000000 | 0xa92e1080 - param_4 >> 7) * -0x4c5ac335) +
        0x7fffa478e403) + 1;
  uVar13 = (uVar13 << 0x20 | uVar13 >> 0x20) ^ (uVar13 << 0x10 | uVar13 >> 0x30) ^ uVar13;
  *(uint8_t *)(lVar3 + lVar8 + uVar16) =
       (&UNK_7fffa5832f7b)[(uint64_t)in_R11B * 4 + (int64_t)(short)((uVar6 | 1) * 0x49b)];
  plVar7 = (int64_t *)(uVar13 << 0x20 | uVar13 >> 0x20);
  *plVar7 = lVar3 + lVar8;
  *(uint32_t *)(plVar7 + 1) = uVar4;
  plVar7[2] = uVar16 * 8 + lVar14;
  return;
}


// ============================================================================
// Function : FUN_7fffa4fe1840  |  RVA: 0x871840  |  Size: 261 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4fe1840(void) {
    /* +0x871840 */ __asm { PUSH RBP }
    /* +0x871841 */ __asm { PUSH R13 }
    /* +0x871843 */ __asm { PUSH RDI }
    /* +0x871844 */ __asm { PUSH R12 }
    /* +0x871846 */ __asm { PUSH RBX }
    /* +0x871847 */ __asm { PUSH R15 }
    /* +0x871849 */ __asm { PUSH R14 }
    /* +0x87184b */ __asm { PUSH RSI }
    /* +0x87184c */ __asm { SUB RSP,0xf8 }
    /* +0x871853 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x87185b */ __asm { MOV R12,RDX }
    /* +0x87185e */ __asm { MOV RSI,RCX }
    /* +0x871861 */ __asm { MOV EAX,0x3a046fce }
    /* +0x871866 */ __asm { IMUL EAX,EAX,-0x1a2fb453 }
    /* +0x87186c */ __asm { PUSHFQ }
    /* +0x87186d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x871875 */ __asm { POPFQ }
    /* +0x871876 */ __asm { ADD EAX,0x135c5ddc }
    /* +0x87187b */ __asm { MOV dword ptr [RBP + -0x30],EAX }
    /* +0x87187e */ __asm { MOV EAX,dword ptr [RBP + -0x30] }
    /* +0x871881 */ __asm { TEST EAX,EAX }
    /* +0x871883 */ __asm { NOP }
    /* +0x871884 */ __asm { NOP }
    /* +0x871885 */ __asm { NOP }
    /* +0x871886 */ __asm { NOP }
    /* +0x871887 */ __asm { NOP }
    /* +0x871888 */ __asm { MOV dword ptr [RBP + -0x30],0xbc67e8b4 }
    /* +0x87188f */ __asm { MOV EAX,dword ptr [RBP + -0x30] }
    /* +0x871892 */ __asm { TEST AL,0x1 }
    /* +0x871894 */ __asm { NOP }
    /* +0x871895 */ __asm { NOP }
    /* +0x871896 */ __asm { NOP }
    /* +0x871897 */ __asm { NOP }
    /* +0x871898 */ __asm { NOP }
    /* +0x871899 */ __asm { MOV dword ptr [RBP + -0x30],0x4e3595e5 }
    /* +0x8718a0 */ __asm { MOV EDI,dword ptr [RBP + -0x30] }
    /* +0x8718a3 */ __asm { TEST DIL,0x1 }
    /* +0x8718a7 */ __asm { NOP }
    /* +0x8718a8 */ __asm { NOP }
    /* +0x8718a9 */ __asm { NOP }
    /* +0x8718aa */ __asm { NOP }
    /* +0x8718ab */ __asm { NOP }
    /* +0x8718ac */ __asm { NOP }
    /* +0x8718ad */ __asm { NOP }
    /* +0x8718ae */ __asm { NOP }
    /* +0x8718af */ __asm { NOP }
    /* +0x8718b0 */ __asm { NOP }
    /* +0x8718b1 */ __asm { MOV R8W,0x157f }
    /* +0x8718b6 */ __asm { MOVZX ECX,R8W }
    /* +0x8718ba */ __asm { XOR RCX,0x151f }
    /* +0x8718c1 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0x8718c5 */ __asm { MOV RDX,0x1a4b37ad9dce7aab }
    /* +0x8718cf */ __asm { IMUL RDX,RDX,-0x32761851 }
    /* +0x8718d6 */ __asm { ADD RDX,-0x6e7e89d0 }
    /* +0x8718dd */ __asm { CMP qword ptr [R11 + 0x18],RDX }
    /* +0x8718e1 */ __asm { NOP }
    /* +0x8718e2 */ __asm { NOP }
    /* +0x8718e3 */ __asm { NOP }
    /* +0x8718e4 */ __asm { NOP }
    /* +0x8718e5 */ __asm { NOP }
    /* +0x8718e6 */ __asm { NOP }
    /* +0x8718e7 */ __asm { MOV AX,0x5b7 }
    /* +0x8718eb */ __asm { ADD EAX,0xfffffaa9 }
    /* +0x8718f0 */ __asm { MOVZX ECX,AX }
    /* +0x8718f3 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0x8718f7 */ __asm { MOV R11,qword ptr [R11 + 0x18] }
    /* +0x8718fb */ __asm { MOV AX,0xfe2 }
    /* +0x8718ff */ __asm { ADD EAX,0x81e }
    /* +0x871904 */ __asm { ROL AX,0x9 }
    /* +0x871908 */ __asm { MOVZX ECX,AX }
    /* +0x87190b */ __asm { MOV RDX,qword ptr GS:[RCX] }
    /* +0x87190f */ __asm { MOV RAX,0x65ff8f9cd40d0c37 }
    /* +0x871919 */ __asm { IMUL RAX,RAX,0x3346a399 }
    /* +0x871920 */ __asm { MOV RCX,0xe70ffc9177c0884 }
    /* +0x87192a */ __asm { ADD RCX,RAX }
    /* +0x87192d */ __asm { XOR R11,qword ptr [RDX + 0x60] }
    /* +0x871931 */ __asm { CMP R11,RCX }
    /* +0x871934 */ __asm { NOP }
    /* +0x871935 */ __asm { NOP }
    /* +0x871936 */ __asm { NOP }
    /* +0x871937 */ __asm { NOP }
    /* +0x871938 */ __asm { NOP }
    /* +0x871939 */ __asm { NOP }
    /* +0x87193a */ __asm { NOP }
    /* +0x87193b */ __asm { NOP }
    /* +0x87193c */ __asm { NOP }
    /* +0x87193d */ __asm { NOP }
    /* +0x87193e */ __asm { NOP }
    /* +0x87193f */ __asm { NOP }
    /* +0x871940 */ __asm { NOP }
    /* +0x871941 */ __asm { NOP }
    /* +0x871942 */ __asm { NOP }
    /* +0x871943 */ __asm { NOP }
    /* +0x871944 */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa4fe38dc  |  RVA: 0x8738dc  |  Size: 66 bytes
// Callers  : FUN_7fffa55c8d98@0xe58d98
// Callees  : FUN_7fffa5488ca4@0xd18ca4
// ============================================================================
bool FUN_7fffa4fe38dc(void)

{
  int64_t lVar1;
  bool bVar2;
  
  if (g_api_ntdll_dll_RtlFlsGetValue2 == (uint8_t *)0xffffffffffffffff) {
    lVar1 = 0;
  }
  else {
    bVar2 = g_api_ntdll_dll_RtlFlsGetValue2 == (uint8_t *)0x0;
    if (!bVar2) goto LAB_7fffa4fe3916;
    lVar1 = FUN_7fffa5488ca4(3,"FlsGetValue2",&UNK_7fffa56b3e80,&UNK_7fffa56b3e88);
  }
  bVar2 = lVar1 == 0;
LAB_7fffa4fe3916:
  return !bVar2;
}


// ============================================================================
// Function : FUN_7fffa4fe3920  |  RVA: 0x873920  |  Size: 60210 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4fe3920(void) {
    /* +0x873920 */ __asm { PUSH RBP }
    /* +0x873921 */ __asm { PUSH R15 }
    /* +0x873923 */ __asm { PUSH R14 }
    /* +0x873925 */ __asm { PUSH R12 }
    /* +0x873927 */ __asm { PUSH RDI }
    /* +0x873928 */ __asm { PUSH R13 }
    /* +0x87392a */ __asm { PUSH RSI }
    /* +0x87392b */ __asm { PUSH RBX }
    /* +0x87392c */ __asm { SUB RSP,0x698 }
    /* +0x873933 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x87393b */ __asm { MOVDQA xmmword ptr [RBP + 0x600],XMM11 }
    /* +0x873944 */ __asm { MOVDQA xmmword ptr [RBP + 0x5f0],XMM6 }
    /* +0x87394c */ __asm { MOVDQA xmmword ptr [RBP + 0x5e0],XMM14 }
    /* +0x873955 */ __asm { MOVDQA xmmword ptr [RBP + 0x5d0],XMM9 }
    /* +0x87395e */ __asm { MOVDQA xmmword ptr [RBP + 0x5c0],XMM7 }
    /* +0x873966 */ __asm { MOVDQA xmmword ptr [RBP + 0x5b0],XMM12 }
    /* +0x87396f */ __asm { MOVDQA xmmword ptr [RBP + 0x5a0],XMM13 }
    /* +0x873978 */ __asm { MOVDQA xmmword ptr [RBP + 0x590],XMM8 }
    /* +0x873981 */ __asm { MOVDQA xmmword ptr [RBP + 0x580],XMM15 }
    /* +0x87398a */ __asm { MOVDQA xmmword ptr [RBP + 0x570],XMM10 }
    /* +0x873993 */ __asm { MOV qword ptr [RBP + 0x568],-0x2 }
    /* +0x87399e */ __asm { MOV RSI,R10 }
    /* +0x8739a1 */ __asm { MOVQ R10,XMM5 }
    /* +0x8739a6 */ __asm { MOV RAX,-0x26d0b1747cff0143 }
    /* +0x8739b0 */ __asm { IMUL RAX,R10 }
    /* +0x8739b4 */ __asm { MOV R10,RAX }
    /* +0x8739b7 */ __asm { SHR R10,0x3a }
    /* +0x8739bb */ __asm { MOV RDX,RAX }
    /* +0x8739be */ __asm { SHR RDX,0x1d }
    /* +0x8739c2 */ __asm { XOR RDX,R10 }
    /* +0x8739c5 */ __asm { MOV RDI,R8 }
    /* +0x8739c8 */ __asm { SHL RDI,0x36 }
    /* +0x8739cc */ __asm { XOR RDI,R8 }
    /* +0x8739cf */ __asm { XOR RDX,RAX }
    /* +0x8739d2 */ __asm { MOV R10,RDX }
    /* +0x8739d5 */ __asm { SHL R10,0x9 }
    /* +0x8739d9 */ __asm { XOR R10,RDX }
    /* +0x8739dc */ __asm { MOV RAX,R10 }
    /* +0x8739df */ __asm { SHL RAX,0x12 }
    /* +0x8739e3 */ __asm { XOR RAX,R10 }
    /* +0x8739e6 */ __asm { MOV R10,RAX }
    /* +0x8739e9 */ __asm { SHL R10,0x24 }
    /* +0x8739ed */ __asm { XOR R10,RAX }
    /* +0x8739f0 */ __asm { MOVQ XMM4,R10 }
    /* +0x8739f5 */ __asm { MOV RAX,R10 }
    /* +0x8739f8 */ __asm { MOV CX,0x92a5 }
    /* +0x8739fc */ __asm { MOV R9D,0xffff9305 }
    /* +0x873a02 */ __asm { SUB R9D,ECX }
    /* +0x873a05 */ __asm { MOV ECX,ESI }
    /* +0x873a07 */ __asm { ROR R9W,CL }
    /* +0x873a0b */ __asm { ROL RAX,0x1e }
    /* +0x873a0f */ __asm { ROL R10,0x23 }
    /* +0x873a13 */ __asm { MOVZX ECX,R9W }
    /* +0x873a17 */ __asm { XOR R10,RAX }
    /* +0x873a1a */ __asm { MOVQ XMM1,R10 }
    /* +0x873a1f */ __asm { PXOR XMM1,XMM4 }
    /* +0x873a23 */ __asm { MOVQ R10,XMM1 }
    /* +0x873a28 */ __asm { MOV RAX,R10 }
    /* +0x873a2b */ __asm { ROL RAX,0x3c }
    /* +0x873a2f */ __asm { MOV RDX,R10 }
    /* +0x873a32 */ __asm { ROL RDX,0x6 }
    /* +0x873a36 */ __asm { XOR RDX,RAX }
    /* +0x873a39 */ __asm { XOR RDX,R10 }
    /* +0x873a3c */ __asm { MOV R10,RDX }
    /* +0x873a3f */ __asm { ROL R10,0xc }
    /* +0x873a43 */ __asm { MOV RAX,RDX }
    /* +0x873a46 */ __asm { ROL RAX,0x38 }
    /* +0x873a4a */ __asm { XOR RAX,R10 }
    /* +0x873a4d */ __asm { XOR RAX,RDX }
    /* +0x873a50 */ __asm { MOV R10,RAX }
    /* +0x873a53 */ __asm { ROL R10,0x30 }
    /* +0x873a57 */ __asm { MOV RDX,RAX }
    /* +0x873a5a */ __asm { ROL RDX,0x18 }
    /* +0x873a5e */ __asm { XOR RDX,R10 }
    /* +0x873a61 */ __asm { XOR RDX,RAX }
    /* +0x873a64 */ __asm { MOV RAX,RDX }
    /* +0x873a67 */ __asm { ROL RAX,0x20 }
    /* +0x873a6b */ __asm { MOV R10,RDX }
    /* +0x873a6e */ __asm { ROL R10,0x30 }
    /* +0x873a72 */ __asm { XOR R10,RAX }
    /* +0x873a75 */ __asm { XOR R10,RDX }
    /* +0x873a78 */ __asm { ROL R10,0x20 }
    /* +0x873a7c */ __asm { MOV RAX,qword ptr GS:[RCX] }
    /* +0x873a80 */ __asm { MOV RDX,-0x58f92265641fae0b }
    /* +0x873a8a */ __asm { CMP qword ptr [RAX + 0x410],RDX }
    /* +0x873a91 */ __asm { JZ 0x7fffa4fe42e8 }
    /* +0x873a97 */ __asm { MOV R15,qword ptr [R10] }
    /* +0x873a9a */ __asm { MOV dword ptr [RBP + 0x1e0],0xa8d92426 }
    /* +0x873aa4 */ __asm { MOV ECX,dword ptr [RBP + 0x1e0] }
    /* +0x873aaa */ __asm { TEST CL,0x1 }
    /* +0x873aad */ __asm { NOP }
    /* +0x873aae */ __asm { NOP }
    /* +0x873aaf */ __asm { NOP }
    /* +0x873ab0 */ __asm { NOP }
    /* +0x873ab1 */ __asm { NOP }
    /* +0x873ab2 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x873ab9 */ __asm { MOV R8,0x0 }
    /* +0x873ac0 */ __asm { NOP }
    /* +0x873ac2 */ __asm { MOV CX,0x8d60 }
    /* +0x873ac6 */ __asm { IMUL R9D,ECX,0x48c9 }
    /* +0x873acd */ __asm { MOV ECX,ESI }
    /* +0x873acf */ __asm { ROR R9W,CL }
    /* +0x873ad3 */ __asm { MOVZX ECX,R9W }
    /* +0x873ad7 */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0x873adb */ __asm { MOV R8,-0x448a90b293c591f1 }
    /* +0x873ae5 */ __asm { MOV CX,0xc0a8 }
    /* +0x873ae9 */ __asm { ADD ECX,ESI }
    /* +0x873aeb */ __asm { MOV R10,qword ptr [RBP + 0x658] }
    /* +0x873af2 */ __asm { MOV qword ptr [RBP + 0x1d8],R10 }
    /* +0x873af9 */ __asm { MOV RAX,qword ptr [R10 + -0x80] }
    /* +0x873afd */ __asm { ROL CX,0x1 }
    /* +0x873b00 */ __asm { MOVZX ECX,CX }
    /* +0x873b03 */ __asm { MOV R10,-0x10e9406042128db4 }
    /* +0x873b0d */ __asm { MOV R9D,0xd9ba67be }
    /* +0x873b13 */ __asm { MOV EDX,0x9b0 }
    /* +0x873b18 */ __asm { ADD RDX,qword ptr GS:[RCX] }
    /* +0x873b1c */ __asm { IMUL RDX,RAX }
    /* +0x873b20 */ __asm { MOV ECX,0x678931ee }
    /* +0x873b25 */ __asm { SUB ECX,R9D }
    /* +0x873b28 */ __asm { NOT RDX }
    /* +0x873b2b */ __asm { ROL RDX,0xf }
    /* +0x873b2f */ __asm { SUB RDX,RCX }
    /* +0x873b32 */ __asm { MOV RAX,RSI }
    /* +0x873b35 */ __asm { OR RAX,0x1 }
    /* +0x873b39 */ __asm { MOV qword ptr [RBP + 0x170],RAX }
    /* +0x873b40 */ __asm { IMUL R10,RAX }
    /* +0x873b44 */ __asm { ROL R10,0xd }
    /* +0x873b48 */ __asm { CMP R10,RDX }
    /* +0x873b4b */ __asm { JZ 0x7fffa4fe42f0 }
    /* +0x873b51 */ __asm { MOV EDX,0x18be157f }
    /* +0x873b56 */ __asm { MOV R11D,0xbdda2556 }
    /* +0x873b5c */ __asm { SUB EDX,ESI }
    /* +0x873b5e */ __asm { ADD EDX,0x1821b6e0 }
    /* +0x873b64 */ __asm { XOR R11D,0x613f0262 }
    /* +0x873b6b */ __asm { MOV ECX,ESI }
    /* +0x873b6d */ __asm { ROR R11D,CL }
    /* +0x873b70 */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0x873b7a */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0x873b84 */ __asm { CMP RDX,R11 }
    /* +0x873b87 */ __asm { JA 0x7fffa4fe3bf2 }
    /* +0x873b89 */ __asm { RDTSC }
    /* +0x873b8b */ __asm { SHL RDX,0x20 }
    /* +0x873b8f */ __asm { OR RDX,RAX }
    /* +0x873b92 */ __asm { MOV dword ptr [RBP + 0x3c],0xfb5bb7fa }
    /* +0x873b99 */ __asm { MOV R9D,0xb6bd305 }
    /* +0x873b9f */ __asm { LEA R12D,[RSI + R9*0x1] }
    /* +0x873ba3 */ __asm { ADD R12D,0x1094051b }
    /* +0x873baa */ __asm { MOV ECX,dword ptr [RBP + 0x3c] }
    /* +0x873bad */ __asm { IMUL RDX,R10 }
    /* +0x873bb1 */ __asm { ADD RDX,R8 }
    /* +0x873bb4 */ __asm { MOV RCX,RDX }
    /* +0x873bb7 */ __asm { SHR RCX,0x3b }
    /* +0x873bbb */ __asm { MOV R11,RDX }
    /* +0x873bbe */ __asm { SHR R11,0x1b }
    /* +0x873bc2 */ __asm { PXOR XMM4,XMM4 }
    /* +0x873bc6 */ __asm { MOVDQA xmmword ptr [RBP + 0x470],XMM4 }
    /* +0x873bce */ __asm { MOVDQA xmmword ptr [RBP + 0x480],XMM4 }
    /* +0x873bd6 */ __asm { MOVDQA xmmword ptr [RBP + 0x490],XMM4 }
    /* +0x873bde */ __asm { MOV qword ptr [RBP + 0x3a0],0x0 }
    /* +0x873be9 */ __asm { SHR RDX,0x2d }
    /* +0x873bed */ __asm { XOR R11D,EDX }
    /* +0x873bf0 */ __asm { JMP 0x7fffa4fe3c56 }
    /* +0x873bf2 */ __asm { MOV R12D,0x650eb791 }
    /* +0x873bf8 */ __asm { ADD R12D,ESI }
    /* +0x873bfb */ __asm { ROL R12D,0x1d }
    /* +0x873bff */ __asm { MOV dword ptr [RBP + 0x3c],0xfb5bb7fa }
    /* +0x873c06 */ __asm { MOV ECX,dword ptr [RBP + 0x3c] }
    /* +0x873c09 */ __asm { PXOR XMM4,XMM4 }
    /* +0x873c0d */ __asm { MOVDQA xmmword ptr [RBP + 0x490],XMM4 }
    /* +0x873c15 */ __asm { MOVDQA xmmword ptr [RBP + 0x480],XMM4 }
    /* +0x873c1d */ __asm { MOVDQA xmmword ptr [RBP + 0x470],XMM4 }
    /* +0x873c25 */ __asm { MOV qword ptr [RBP + 0x3a0],0x0 }
    /* +0x873c30 */ __asm { RDTSC }
    /* +0x873c32 */ __asm { SHL RDX,0x20 }
    /* +0x873c36 */ __asm { OR RDX,RAX }
    /* +0x873c39 */ __asm { IMUL RDX,R10 }
    /* +0x873c3d */ __asm { LEA RCX,[RDX + R8*0x1] }
    /* +0x873c41 */ __asm { MOV R11,RCX }
    /* +0x873c44 */ __asm { SHR R11,0x1b }
    /* +0x873c48 */ __asm { MOV RDX,RCX }
    /* +0x873c4b */ __asm { SHR RDX,0x2d }
    /* +0x873c4f */ __asm { XOR R11D,EDX }
    /* +0x873c52 */ __asm { SHR RCX,0x3b }
    /* +0x873c56 */ __asm { ROR R11D,CL }
    /* +0x873c59 */ __asm { AND R11D,0x3 }
    /* +0x873c5d */ __asm { MOV R9W,0xcfb5 }
    /* +0x873c62 */ __asm { LEA ECX,[RSI + R9*0x1] }
    /* +0x873c66 */ __asm { XOR ECX,0xf27 }
    /* +0x873c6c */ __asm { MOVZX ECX,CX }
    /* +0x873c6f */ __asm { CMP R11D,ECX }
    /* +0x873c72 */ __asm { MOV qword ptr [RBP + 0x118],RSI }
    /* +0x873c79 */ __asm { MOV qword ptr [RBP + 0x538],RDI }
    /* +0x873c80 */ __asm { JC 0x7fffa4fe3e45 }
    /* +0x873c86 */ __asm { CMP R11D,0x3 }
    /* +0x873c8a */ __asm { JNZ 0x7fffa4fe3fc2 }
    /* +0x873c90 */ __asm { MOV R8D,0x743c9dcd }
    /* +0x873c96 */ __asm { MOV R10,0x3a6fcebf3b971bb9 }
    /* +0x873ca0 */ __asm { CMP R8,R10 }
    /* +0x873ca3 */ __asm { JZ 0x7fffa4fe42ff }
    /* +0x873ca9 */ __asm { CMP dword ptr [R8 + 0xbc165f3],0xd }
    /* +0x873cb1 */ __asm { JNC 0x7fffa4fe4310 }
    /* +0x873cb7 */ __asm { MOVDQA xmmword ptr [RBP + 0x1e0],XMM4 }
    /* +0x873cbf */ __asm { MOV dword ptr [RBP + 0x60],0xb6ebbcfc }
    /* +0x873cc6 */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x873cc9 */ __asm { PUSHFQ }
    /* +0x873cca */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x873cd2 */ __asm { POPFQ }
    /* +0x873cd3 */ __asm { MOV dword ptr [RBP + 0x1e0],0x0 }
    /* +0x873cdd */ __asm { PUSHFQ }
    /* +0x873cde */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x873ce6 */ __asm { POPFQ }
    /* +0x873ce7 */ __asm { MOV dword ptr [RBP + 0x60],0x770f4cf3 }
    /* +0x873cee */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x873cf1 */ __asm { TEST ECX,ECX }
    /* +0x873cf3 */ __asm { JS 0x7fffa4ffef31 }
    /* +0x873cf9 */ __asm { MOV CX,0x3a83 }
    /* +0x873cfd */ __asm { MOV R9D,R12D }
    /* +0x873d00 */ __asm { OR R9D,0x1 }
    /* +0x873d04 */ __asm { ADD ECX,0x191d }
    /* +0x873d0a */ __asm { IMUL ECX,R9D }
    /* +0x873d0e */ __asm { SUB ECX,ESI }
    /* +0x873d10 */ __asm { MOVZX ECX,CX }
    /* +0x873d13 */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0x873d17 */ __asm { MOV RCX,R12 }
    /* +0x873d1a */ __asm { OR RCX,0x1 }
    /* +0x873d1e */ __asm { MOV RAX,0x329770a77309000 }
    /* +0x873d28 */ __asm { IMUL RAX,RCX }
    /* +0x873d2c */ __asm { ROL RAX,0x3b }
    /* +0x873d30 */ __asm { XOR RAX,qword ptr [R10 + 0x3a8] }
    /* +0x873d37 */ __asm { CMP RAX,-0x1 }
    /* +0x873d3b */ __asm { NOP }
    /* +0x873d3c */ __asm { NOP }
    /* +0x873d3d */ __asm { NOP }
    /* +0x873d3e */ __asm { NOP }
    /* +0x873d3f */ __asm { NOP }
    /* +0x873d40 */ __asm { NOP }
    /* +0x873d41 */ __asm { NOP }
    /* +0x873d42 */ __asm { NOP }
    /* +0x873d43 */ __asm { NOP }
    /* +0x873d44 */ __asm { NOP }
    /* +0x873d45 */ __asm { NOP }
    /* +0x873d46 */ __asm { NOP }
    /* +0x873d47 */ __asm { NOP }
    /* +0x873d48 */ __asm { NOP }
    /* +0x873d49 */ __asm { NOP }
    /* +0x873d4a */ __asm { NOP }
    /* +0x873d4b */ __asm { LEA R8,[0x7fffa478013b] }
    /* +0x873d52 */ __asm { MOV R10,-0x1da7a541881ab1ff }
    /* +0x873d5c */ __asm { CMP R8,R10 }
    /* +0x873d5f */ __asm { NOP }
    /* +0x873d60 */ __asm { NOP }
    /* +0x873d61 */ __asm { NOP }
    /* +0x873d62 */ __asm { NOP }
    /* +0x873d63 */ __asm { NOP }
    /* +0x873d64 */ __asm { MOV R9W,0xf428 }
    /* +0x873d69 */ __asm { MOV EDX,ESI }
    /* +0x873d6b */ __asm { OR EDX,0x1 }
    /* +0x873d6e */ __asm { ADD R9D,ESI }
    /* +0x873d71 */ __asm { MOV ECX,R12D }
    /* +0x873d74 */ __asm { ROL R9W,CL }
    /* +0x873d78 */ __asm { MOV ECX,0xd86934c }
    /* +0x873d7d */ __asm { IMUL R9D,R9D,-0x1659 }
    /* +0x873d84 */ __asm { XOR ECX,R12D }
    /* +0x873d87 */ __asm { IMUL ECX,EDX }
    /* +0x873d8a */ __asm { MOV qword ptr [RBP + 0x60],R10 }
    /* +0x873d8e */ __asm { MOV EAX,dword ptr [R8 + 0x44e1] }
    /* +0x873d95 */ __asm { XOR ECX,0x83b76313 }
    /* +0x873d9b */ __asm { MOVSXD R10,ECX }
    /* +0x873d9e */ __asm { LEA RDI,[0x7fffa47c2d2d] }
    /* +0x873da5 */ __asm { MOVZX EDX,R9W }
    /* +0x873da9 */ __asm { MOV CX,0x1d41 }
    /* +0x873dad */ __asm { MOV R9D,0xffffa2fd }
    /* +0x873db3 */ __asm { SUB R9D,ECX }
    /* +0x873db6 */ __asm { XOR R9D,R12D }
    /* +0x873db9 */ __asm { ADD R9D,0xffffa4b4 }
    /* +0x873dc0 */ __asm { MOVZX R9D,R9W }
    /* +0x873dc4 */ __asm { LEA R8,[RBP + 0x1e0] }
    /* +0x873dcb */ __asm { SYSCALL }
    /* +0x873dcd */ __asm { MOV R10,0x63d3dd9b2cb4483b }
    /* +0x873dd7 */ __asm { CMP RDI,R10 }
    /* +0x873dda */ __asm { JZ 0x7fffa4ffef39 }
    /* +0x873de0 */ __asm { MOV ECX,0x14966095 }
    /* +0x873de5 */ __asm { IMUL R9D,ECX,0x37a35f93 }
    /* +0x873dec */ __asm { MOV EAX,ESI }
    /* +0x873dee */ __asm { OR EAX,0x1 }
    /* +0x873df1 */ __asm { MOV R10W,0x7308 }
    /* +0x873df6 */ __asm { MOV DX,0x7edf }
    /* +0x873dfa */ __asm { MOVD XMM4,ESI }
    /* +0x873dfe */ __asm { XOR R10D,R12D }
    /* +0x873e01 */ __asm { MOV ECX,R12D }
    /* +0x873e04 */ __asm { ROR R9D,CL }
    /* +0x873e07 */ __asm { ADD R9D,ESI }
    /* +0x873e0a */ __asm { ADD R10D,0xffffb087 }
    /* +0x873e11 */ __asm { IMUL R10D,EAX }
    /* +0x873e15 */ __asm { NOT R10D }
    /* +0x873e18 */ __asm { MOVZX R8D,R10W }
    /* +0x873e1c */ __asm { XOR EDX,R12D }
    /* +0x873e1f */ __asm { MOVSXD R10,R9D }
    /* +0x873e22 */ __asm { MOV qword ptr [RBP + 0x1e0],RAX }
    /* +0x873e29 */ __asm { MOV EAX,dword ptr [RDI + -0x684d] }
    /* +0x873e2f */ __asm { ROL DX,0x8 }
    /* +0x873e33 */ __asm { MOVD XMM1,EDX }
    /* +0x873e37 */ __asm { PSUBW XMM1,XMM4 }
    /* +0x873e3b */ __asm { PEXTRW ECX,XMM1,0x0 }
    /* +0x873e40 */ __asm { JMP 0x7fffa4fe42d2 }
    /* +0x873e45 */ __asm { MOV CX,0x49e2 }
    /* +0x873e49 */ __asm { ADD ECX,ESI }
    /* +0x873e4b */ __asm { MOV R9D,0xffff8953 }
    /* +0x873e51 */ __asm { SUB R9D,ECX }
    /* +0x873e54 */ __asm { MOV ECX,R12D }
    /* +0x873e57 */ __asm { ROR R9W,CL }
    /* +0x873e5b */ __asm { MOVZX ECX,R9W }
    /* +0x873e5f */ __asm { CMP R11D,ECX }
    /* +0x873e62 */ __asm { JNZ 0x7fffa4fe4161 }
    /* +0x873e68 */ __asm { MOVDQA xmmword ptr [RBP + 0x1e0],XMM4 }
    /* +0x873e70 */ __asm { MOV dword ptr [RBP + 0x60],0x2d46ae65 }
    /* +0x873e77 */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x873e7a */ __asm { MOV CX,0xfd35 }
    /* +0x873e7e */ __asm { SUB ECX,R12D }
    /* +0x873e81 */ __asm { MOVZX ECX,CX }
    /* +0x873e84 */ __asm { XOR RCX,0x1e35 }
    /* +0x873e8b */ __asm { MOV dword ptr [RBP + 0x1e0],0x0 }
    /* +0x873e95 */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0x873e99 */ __asm { MOV R10,qword ptr [R10 + 0x30] }
    /* +0x873e9d */ __asm { ROL R10,0xb }
    /* +0x873ea1 */ __asm { MOV RAX,0x6282211cee488959 }
    /* +0x873eab */ __asm { IMUL RAX,R10 }
    /* +0x873eaf */ __asm { MOV R10,0x6ff39b79974ce0ed }
    /* +0x873eb9 */ __asm { CMP RAX,R10 }
    /* +0x873ebc */ __asm { JZ 0x7fffa4fe42f7 }
    /* +0x873ec2 */ __asm { MOV dword ptr [RBP + 0x60],0x8acd2000 }
    /* +0x873ec9 */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x873ecc */ __asm { LEA R8,[0x7fffa4781a61] }
    /* +0x873ed3 */ __asm { MOV R10,-0x64757ce0f0c1d12 }
    /* +0x873edd */ __asm { CMP R8,R10 }
    /* +0x873ee0 */ __asm { JNZ 0x7fffa4fe3ee5 }
    /* +0x873ee2 */ __asm { XOR ESI,dword ptr [RBP + -0x56] }
    /* +0x873ee5 */ __asm { MOV CX,0xa806 }
    /* +0x873ee9 */ __asm { LEA RDI,[0x7fffa47895a1] }
    /* +0x873ef0 */ __asm { XOR ECX,ESI }
    /* +0x873ef2 */ __asm { IMUL ECX,ECX,0x28a7 }
    /* +0x873ef8 */ __asm { MOV R9W,0x68c0 }
    /* +0x873efd */ __asm { XOR R9D,R12D }
    /* +0x873f00 */ __asm { ADD R9D,0xffff8938 }
    /* +0x873f07 */ __asm { XOR R9D,ESI }
    /* +0x873f0a */ __asm { MOVZX EDX,R9W }
    /* +0x873f0e */ __asm { ADD ECX,0xffffc216 }
    /* +0x873f14 */ __asm { MOVZX R9D,CX }
    /* +0x873f18 */ __asm { MOV qword ptr [RBP + 0x60],R10 }
    /* +0x873f1c */ __asm { MOV EAX,dword ptr [R8 + 0x2bbb] }
    /* +0x873f23 */ __asm { MOV ECX,0x1f312900 }
    /* +0x873f28 */ __asm { ADD ECX,R12D }
    /* +0x873f2b */ __asm { ROL ECX,0x9 }
    /* +0x873f2e */ __asm { ADD ECX,ESI }
    /* +0x873f30 */ __asm { MOVSXD R10,ECX }
    /* +0x873f33 */ __asm { LEA R8,[RBP + 0x1e0] }
    /* +0x873f3a */ __asm { SYSCALL }
    /* +0x873f3c */ __asm { MOV R10,0x38425be2f49318da }
    /* +0x873f46 */ __asm { CMP RDI,R10 }
    /* +0x873f49 */ __asm { NOP }
    /* +0x873f4a */ __asm { NOP }
    /* +0x873f4b */ __asm { NOP }
    /* +0x873f4c */ __asm { NOP }
    /* +0x873f4d */ __asm { NOP }
    /* +0x873f4e */ __asm { MOV EDX,0xfce7260 }
    /* +0x873f53 */ __asm { MOV AX,0xd06e }
    /* +0x873f57 */ __asm { MOV R10D,R12D }
    /* +0x873f5a */ __asm { SUB R10D,ESI }
    /* +0x873f5d */ __asm { MOV R11W,0x41a }
    /* +0x873f62 */ __asm { XOR EAX,0xd06e }
    /* +0x873f67 */ __asm { MOV ECX,R12D }
    /* +0x873f6a */ __asm { ROR AX,CL }
    /* +0x873f6d */ __asm { LEA R9D,[R11 + R12*0x1] }
    /* +0x873f71 */ __asm { ADD R9D,0x1d05 }
    /* +0x873f78 */ __asm { MOVZX R8D,AX }
    /* +0x873f7c */ __asm { IMUL EDX,EDX,0x6c95bac1 }
    /* +0x873f82 */ __asm { ADD EDX,R10D }
    /* +0x873f85 */ __asm { MOV ECX,ESI }
    /* +0x873f87 */ __asm { ROR R9W,CL }
    /* +0x873f8b */ __asm { MOV CX,0x4b }
    /* +0x873f8f */ __asm { SUB ECX,ESI }
    /* +0x873f91 */ __asm { ADD ECX,0x1217 }
    /* +0x873f97 */ __asm { MOV qword ptr [RBP + 0x1e0],R10 }
    /* +0x873f9e */ __asm { IMUL EDX,EDX,-0xd89a1e1 }
    /* +0x873fa4 */ __asm { XOR ECX,0x3b1 }
    /* +0x873faa */ __asm { ADD ECX,R12D }
    /* +0x873fad */ __asm { MOVSX R11,CX }
    /* +0x873fb1 */ __asm { MOV EAX,dword ptr [RDI + R11*0x1 + 0xac] }
    /* +0x873fb9 */ __asm { MOVSX R10,R9W }
    /* +0x873fbd */ __asm { JMP 0x7fffa4fe414b }
    /* +0x873fc2 */ __asm { MOVDQA xmmword ptr [RBP + 0x1e0],XMM4 }
    /* +0x873fca */ __asm { MOV dword ptr [RBP + 0x60],0xf7bbadfe }
    /* +0x873fd1 */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x873fd4 */ __asm { MOV R9D,0xe35126f9 }
    /* +0x873fda */ __asm { SUB R9D,ESI }
    /* +0x873fdd */ __asm { MOV ECX,R12D }
    /* +0x873fe0 */ __asm { ROL R9D,CL }
    /* +0x873fe3 */ __asm { MOV dword ptr [RBP + 0x1e0],0x0 }
    /* +0x873fed */ __asm { ADD R9D,0xbe2d6ed1 }
    /* +0x873ff4 */ __asm { MOV dword ptr [RBP + 0x60],R9D }
    /* +0x873ff8 */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x873ffb */ __asm { AND ECX,0x1 }
    /* +0x873ffe */ __asm { MOV R9D,ESI }
    /* +0x874001 */ __asm { OR R9D,0x1 }
    /* +0x874005 */ __asm { MOV EDX,R12D }
    /* +0x874008 */ __asm { OR EDX,0x1 }
    /* +0x87400b */ __asm { MOV AX,0x78e6 }
    /* +0x87400f */ __asm { IMUL EAX,R9D }
    /* +0x874013 */ __asm { ADD EAX,0x87a }
    /* +0x874018 */ __asm { IMUL EAX,EDX }
    /* +0x87401b */ __asm { MOVZX R9D,AX }
    /* +0x87401f */ __asm { CMP ECX,R9D }
    /* +0x874022 */ __asm { JNZ 0x7fffa4ffedea }
    /* +0x874028 */ __asm { MOV dword ptr [RBP + 0x60],0xfcee1d }
    /* +0x87402f */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x874032 */ __asm { CMP ECX,0x235552ef }
    /* +0x874038 */ __asm { JNC 0x7fffa4ffedf3 }
    /* +0x87403e */ __asm { LEA R8,[0x7fffa4786577] }
    /* +0x874045 */ __asm { PUSHFQ }
    /* +0x874046 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x87404e */ __asm { POPFQ }
    /* +0x87404f */ __asm { MOV R10,-0x113435d3e58a0ebd }
    /* +0x874059 */ __asm { CMP R8,R10 }
    /* +0x87405c */ __asm { NOP }
    /* +0x87405d */ __asm { NOP }
    /* +0x87405e */ __asm { NOP }
    /* +0x87405f */ __asm { NOP }
    /* +0x874060 */ __asm { NOP }
    /* +0x874061 */ __asm { NOP }
    /* +0x874062 */ __asm { NOP }
    /* +0x874063 */ __asm { NOP }
    /* +0x874064 */ __asm { NOP }
    /* +0x874065 */ __asm { NOP }
    /* +0x874066 */ __asm { NOP }
    /* +0x874067 */ __asm { NOP }
    /* +0x874068 */ __asm { NOP }
    /* +0x874069 */ __asm { NOP }
    /* +0x87406a */ __asm { NOP }
    /* +0x87406b */ __asm { MOV EDX,0xd9bb120 }
    /* +0x874070 */ __asm { MOV R9W,0xdbe6 }
    /* +0x874075 */ __asm { LEA RDI,[0x7fffa478cafd] }
    /* +0x87407c */ __asm { XOR R9D,R12D }
    /* +0x87407f */ __asm { ADD EDX,0xf2644ee0 }
    /* +0x874085 */ __asm { ROL EDX,0x1c }
    /* +0x874088 */ __asm { NOT EDX }
    /* +0x87408a */ __asm { MOV ECX,R12D }
    /* +0x87408d */ __asm { ROR EDX,CL }
    /* +0x87408f */ __asm { MOV CX,0x2d67 }
    /* +0x874093 */ __asm { MOVSXD R10,EDX }
    /* +0x874096 */ __asm { MOV qword ptr [RBP + 0x60],RAX }
    /* +0x87409a */ __asm { MOV EAX,dword ptr [R8 + -0x1f5b] }
    /* +0x8740a1 */ __asm { MOV R8,RDI }
    /* +0x8740a4 */ __asm { ADD R8,-0x4d94c09e }
    /* +0x8740ab */ __asm { ROL R8,0x17 }
    /* +0x8740af */ __asm { MOV R13,-0x5637a272eba2d4df }
    /* +0x8740b9 */ __asm { IMUL R13,R8 }
    /* +0x8740bd */ __asm { NOT ECX }
    /* +0x8740bf */ __asm { ADD ECX,R12D }
    /* +0x8740c2 */ __asm { ADD ECX,0x4eb0 }
    /* +0x8740c8 */ __asm { MOVZX EDX,CX }
    /* +0x8740cb */ __asm { ROL R9W,0xd }
    /* +0x8740d0 */ __asm { ADD R9D,ESI }
    /* +0x8740d3 */ __asm { MOVZX R9D,R9W }
    /* +0x8740d7 */ __asm { LEA R8,[RBP + 0x1e0] }
    /* +0x8740de */ __asm { SYSCALL }
    /* +0x8740e0 */ __asm { MOV R10,0x6502226ff4610f76 }
    /* +0x8740ea */ __asm { CMP R13,R10 }
    /* +0x8740ed */ __asm { NOP }
    /* +0x8740ee */ __asm { NOP }
    /* +0x8740ef */ __asm { NOP }
    /* +0x8740f0 */ __asm { NOP }
    /* +0x8740f1 */ __asm { NOP }
    /* +0x8740f2 */ __asm { MOV CX,0x7319 }
    /* +0x8740f6 */ __asm { MOV qword ptr [RBP + 0x1e0],R8 }
    /* +0x8740fd */ __asm { MOV EAX,dword ptr [RDI + -0x7d59] }
    /* +0x874103 */ __asm { MOV R9W,0x2129 }
    /* +0x874108 */ __asm { MOV DX,0xddd9 }
    /* +0x87410c */ __asm { XOR EDX,0x70e2 }
    /* +0x874112 */ __asm { ADD EDX,ESI }
    /* +0x874114 */ __asm { XOR EDX,R12D }
    /* +0x874117 */ __asm { ADD EDX,0xffffcde5 }
    /* +0x87411d */ __asm { MOVZX EDX,DX }
    /* +0x874120 */ __asm { SUB R9D,ESI }
    /* +0x874123 */ __asm { XOR R9D,0x2dae }
    /* +0x87412a */ __asm { SUB R9D,R12D }
    /* +0x87412d */ __asm { ADD R9D,0x12c9 }
    /* +0x874134 */ __asm { MOVZX R8D,R9W }
    /* +0x874138 */ __asm { MOV R11D,0x54a8 }
    /* +0x87413e */ __asm { SUB R11D,ECX }
    /* +0x874141 */ __asm { XOR R11D,R12D }
    /* +0x874144 */ __asm { SUB R11D,ESI }
    /* +0x874147 */ __asm { MOVSX R10,R11W }
    /* +0x87414b */ __asm { LEA R11,[RBP + 0x3a0] }
    /* +0x874152 */ __asm { MOV qword ptr [RSP + 0x30],R11 }
    /* +0x874157 */ __asm { MOV qword ptr [RSP + 0x28],RDX }
    /* +0x87415c */ __asm { JMP 0x7fffa4fe44c7 }
    /* +0x874161 */ __asm { MOVDQA xmmword ptr [RBP + 0x1e0],XMM4 }
    /* +0x874169 */ __asm { MOV dword ptr [RBP + 0x60],0x549d93fb }
    /* +0x874170 */ __asm { MOV ECX,dword ptr [RBP + 0x60] }
    /* +0x874173 */ __asm { TEST CL,0x1 }
}


// ============================================================================
// Function : Unwind@7fffa4fff3b0  |  RVA: 0x88f3b0  |  Size: 244 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fff3b0(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x4a8) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fff4b0  |  RVA: 0x88f4b0  |  Size: 328 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fff4b0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar1 = *(uint64_t *)(param_2 + 0x198);
  uVar3 = (int)*(uint64_t *)(param_2 + 0xb0) + ~(*(int *)(param_2 + 0x370) + 0x41d377fbU) +
          0xca642efa;
  bVar2 = (uint8_t)uVar1 & 0x1f;
  (*(code *)((int64_t)(int)((*(int *)(param_2 + 0x178) * 0x2d24c788 ^ 0x3fffffd9U) - (int)uVar1) +
            0x7fffa5672a5f))(uVar1,uVar3 >> bVar2 | uVar3 << 0x20 - bVar2,param_2 + -0x1f3429ac);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fff600  |  RVA: 0x88f600  |  Size: 160 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fff600(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  
  uVar2 = (int)*(uint64_t *)(param_2 + 0xc0) * 0x205727b8 + *(int *)(param_2 + 0xb0) ^ 0xccd22a45;
  (*(code *)((int64_t)(int)(uVar2 << 0x12 | uVar2 >> 0xe) + 0x7fffa56315c0))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fff6a0  |  RVA: 0x88f6a0  |  Size: 183 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fff6a0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
  uVar3 = (uint16_t)((*(uint32_t *)(param_2 + 0x178) ^ 0xda95) - 0x5513);
  uVar3 = uVar3 << bVar2 | uVar3 >> 0x10 - bVar2;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xb0) & 0xf;
  (*(code *)((int64_t)(short)(0x1b7b - (uVar3 >> bVar2 | uVar3 << 0x10 - bVar2)) + 0x7fffa562a8f5))
            ();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fff760  |  RVA: 0x88f760  |  Size: 520 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fff760(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint16_t uVar7;
  uint32_t uVar8;
  
  uVar7 = (short)*(uint64_t *)(param_2 + 0x198) + 0xb890;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x178) & 0xf;
  uVar7 = (uVar7 >> bVar1 | uVar7 << 0x10 - bVar1) * -0x77a7;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0xf;
  if ((uint64_t)(uint16_t)(uVar7 >> bVar1 | uVar7 << 0x10 - bVar1) < *(uint64_t *)(param_2 + 0x238))
  {
    iVar2 = (int)*(uint64_t *)(param_2 + 0x178);
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x198);
    uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0x4a8);
    uVar8 = 0x46b753b7U - iVar2 ^ uVar3;
    uVar6 = *(uint64_t *)(param_2 + 0x220);
    uVar8 = (uVar8 << 1 | (uint32_t)((int)uVar8 < 0)) + 0x8001fdc0;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0x1f;
    uVar4 = uVar6 >> 0x3d ^ uVar6;
    uVar6 = (uVar6 >> 0x3d) * uVar6;
    if ((uVar8 << bVar1 | uVar8 >> 0x20 - bVar1) - uVar5 != -0x4a921dc8) {
      uVar6 = uVar4;
    }
    (*(code *)((int64_t)
               (int)(((uVar3 | 1) * ((*(int *)(param_2 + 0x5d0) * -0x49edd480 ^ uVar5) + iVar2) ^
                     0x35c37d87) + 0x751a3dde) + 0x7fffa5693862))
              (*(uint64_t *)(param_2 + 0x370),uVar4,uVar6);
  }
  *(uint16_t *)(param_2 + 0x220) = 0;
  *(uint64_t *)(param_2 + 0x230) = 0;
  *(uint64_t *)(param_2 + 0x238) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fff970  |  RVA: 0x88f970  |  Size: 449 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fff970(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  uint16_t uVar6;
  int iVar7;
  
  uVar6 = (short)*(uint64_t *)(param_2 + 0x178) * -0x477;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
  uVar6 = (uVar6 << bVar4 | uVar6 >> 0x10 - bVar4) + 0x220d;
  uVar5 = (int)*(uint64_t *)(param_2 + 0x198) + 0x8337aaf3;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0x1f;
  uVar5 = uVar5 << bVar4 | uVar5 >> 0x20 - bVar4;
  uVar5 = (uVar5 << 0x12 | uVar5 >> 0xe) ^ 0x815b5005;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0xb0) & 0x1f;
  iVar7 = *(int *)((int64_t)
                   (short)((short)*(uint64_t *)(param_2 + 0x370) + (uVar6 * 4 | uVar6 >> 0xe)) +
                  0x7fffa47891a1) + -1;
  *(int *)((int64_t)(int)(uVar5 >> bVar4 | uVar5 << 0x20 - bVar4) + 0x7fffa4790497) = iVar7;
  if (iVar7 == 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x370);
    uVar5 = (int)uVar1 + 0xbe602429;
    uVar2 = *(uint64_t *)(param_2 + 0x198);
    uVar3 = *(uint64_t *)(param_2 + 0x598);
    LOCK();
    *(uint32_t *)
     ((int64_t)(int)((((uVar5 * 0x1000000 | uVar5 >> 8) ^ (uint32_t)uVar2) - (int)uVar3) * 0x32feaee5)
     + 0x7fffa4790622) = 0;
    UNLOCK();
    uVar6 = (uint16_t)uVar3;
    uVar6 = ((uVar6 ^ 0xc92) << 2 | uVar6 >> 0xe) - (short)uVar2;
    bVar4 = (uint8_t)uVar1 & 0xf;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(short)(uVar6 >> bVar4 | uVar6 << 0x10 - bVar4) + 0x7fffa478c75e);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fffb40  |  RVA: 0x88fb40  |  Size: 395 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fffb40(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  short sVar2;
  int iVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  
  if ((uint64_t)
      ((*(uint32_t *)(param_2 + 0x370) ^ 0x2218fb8c) * *(int *)(param_2 + 0x5cc) + 0x7ecd6de9 ^
      *(uint32_t *)(param_2 + 0x198)) < *(uint64_t *)(param_2 + 0x278)) {
    iVar3 = (int)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x195) + -0x407c;
    sVar2 = (short)iVar3;
    uVar4 = CONCAT22((short)((uint32_t)iVar3 >> 0x10),sVar2 << 1 | (uint16_t)(sVar2 < 0)) ^
            *(uint32_t *)(param_2 + 0x198);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0xf;
    uVar5 = (uint16_t)((int)*(uint64_t *)(param_2 + 0x80) * uVar4);
    (*(code *)((int64_t)(short)(uVar5 << bVar1 | uVar5 >> 0x10 - bVar1) + 0x7fffa568ee69))
              (*(uint64_t *)(param_2 + 0x370),uVar4,
               *(uint64_t *)(param_2 + 0x260) >> 0x3d ^ *(uint64_t *)(param_2 + 0x260));
  }
  *(uint8_t *)(param_2 + 0x260) = 0;
  *(uint64_t *)(param_2 + 0x270) = 0;
  *(uint64_t *)(param_2 + 0x278) = 0xf;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fffcd0  |  RVA: 0x88fcd0  |  Size: 324 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fffcd0(uint64_t param_1,int64_t param_2)

{
  (*(code *)(&UNK_7fffa56910b8 +
            ((0x5243b702 - (int)*(uint64_t *)(param_2 + 0x370)) -
            (int)*(uint64_t *)(param_2 + 0x198)) * -0x21f359f7))
            (*(uint64_t *)(param_2 + 0x370),param_2,
             *(uint64_t *)(param_2 + 0x450) >> 0x3d ^ *(uint64_t *)(param_2 + 0x450));
  return;
}


// ============================================================================
// Function : Unwind@7fffa4fffe20  |  RVA: 0x88fe20  |  Size: 433 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4fffe20(uint64_t param_1,int64_t param_2)

{
  uint16_t *puVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  if ((uint64_t)
      (((~((int)*(uint64_t *)(param_2 + 0x380) * 0x3ece ^ *(uint32_t *)(param_2 + 0x198)) +
        *(int *)(param_2 + 0x370)) * 0x2b63 ^ 0xaff6) & 0xffff) <
      *(uint64_t *)(*(int64_t *)(param_2 + 0x1c8) + 0x18)) {
    uVar3 = ((int)*(uint64_t *)(param_2 + 0x178) + 0x3c35bc57) * 0x6750f7ed;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0x1f;
    uVar3 = uVar3 << bVar2 | uVar3 >> 0x20 - bVar2;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0x1f;
    (*(code *)((int64_t)(int)~(uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) + 0x7fffa5695dc0))
              (*(uint64_t *)(param_2 + 0x198),0xb470c267,
               **(uint64_t **)(param_2 + 0x1c8) >> 0x3d ^ **(uint64_t **)(param_2 + 0x1c8));
  }
  puVar1 = *(uint16_t **)(param_2 + 0x1c8);
  *(uint64_t *)(puVar1 + 0xc) = 7;
  *puVar1 = 0;
  *(uint64_t *)(puVar1 + 8) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ffffe0  |  RVA: 0x88ffe0  |  Size: 326 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ffffe0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x598) & 0xf;
  uVar2 = (uint16_t)((int)*(uint64_t *)(param_2 + 0x198) + -0x52aa);
  (*(code *)((int64_t)(short)(uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + 0x7fffa5688f6a))
            (*(uint64_t *)(param_2 + 0x598),*(uint64_t *)(param_2 + 0x198),
             *(uint64_t *)(param_2 + 0x540) >> 0x3d ^ *(uint64_t *)(param_2 + 0x540));
  *(uint64_t *)(param_2 + 200) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5000130  |  RVA: 0x890130  |  Size: 191 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5000130(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  uVar3 = (uint16_t)((int)*(uint64_t *)(param_2 + 0x178) + 0x3aaa);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0xf;
  uVar3 = (uint16_t)((uint32_t)(uint16_t)(uVar3 << 0xc | uVar3 >> 4) + *(int *)(param_2 + 0x198));
  (*(code *)((int64_t)
             (short)(((uint16_t)*(uint64_t *)(param_2 + 0x598) ^
                     (uVar3 >> bVar2 | uVar3 << 0x10 - bVar2)) * -0x4c0f) + 0x7fffa5626a35))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa50001f0  |  RVA: 0x8901f0  |  Size: 383 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50001f0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  int iVar4;
  
  uVar1 = *(uint64_t *)(param_2 + 0x4c0);
  if (uVar1 != 0) {
    iVar4 = (int)CONCAT62((int6)((uint64_t)param_4 >> 0x10),0x1f4a) + -0x6835;
    uVar3 = (uint16_t)iVar4;
    uVar3 = uVar3 << 2 | uVar3 >> 0xe;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
    iVar4 = ((int)*(uint64_t *)(param_2 + 0x598) - (int)*(uint64_t *)(param_2 + 0x370)) +
            CONCAT22((short)((uint32_t)iVar4 >> 0x10),uVar3 >> bVar2 | uVar3 << 0x10 - bVar2);
    (*(code *)((int64_t)(short)iVar4 + 0x7fffa5688ad4))
              (iVar4,*(uint64_t *)(param_2 + 0x598),uVar1 >> 0x3d ^ uVar1);
    *(uint8_t (*) [16])(param_2 + 0x4c0) = (uint8_t  [16])0x0;
    *(uint64_t *)(param_2 + 0x4d0) = 0;
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5000370  |  RVA: 0x890370  |  Size: 386 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5000370(uint64_t param_1,int64_t param_2)

{
  uint16_t *puVar1;
  uint8_t bVar2;
  int iVar3;
  uint32_t uVar4;
  
  if (7 < *(uint64_t *)(*(int64_t *)(param_2 + 0x458) + 0x18)) {
    uVar4 = ~((int)*(uint64_t *)(param_2 + 0x178) + 0x9833500cU);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0x1f;
    iVar3 = ((uVar4 >> bVar2 | uVar4 << 0x20 - bVar2) * -0x4563316f + -0x1af983fc) *
            *(int *)(param_2 + 0x3a8);
    (*(code *)((int64_t)iVar3 + 0x7fffa56959e0))
              (iVar3,*(uint64_t *)(param_2 + 0x178),
               **(uint64_t **)(param_2 + 0x458) >> 0x3d ^ **(uint64_t **)(param_2 + 0x458));
  }
  puVar1 = *(uint16_t **)(param_2 + 0x458);
  *(uint64_t *)(puVar1 + 0xc) = 7;
  *puVar1 = 0;
  *(uint64_t *)(puVar1 + 8) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5000500  |  RVA: 0x890500  |  Size: 532 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5000500(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint16_t uVar7;
  uint64_t uVar8;
  
  uVar6 = param_2 + 0x4f0;
  uVar7 = (short)*(uint64_t *)(param_2 + 0x380) * 0x727f + (short)*(uint64_t *)(param_2 + 0x370)
  ;
  uVar5 = (uVar6 * 0x10000000 | uVar6 >> 0x24) ^ uVar6;
  uVar8 = uVar6 * 0x20 | uVar6 >> 0x3b;
  uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0x178);
  uVar4 = (*(int *)(param_2 + 0x5d0) * 0x12404d6c ^ *(uint32_t *)(param_2 + 0x498)) - uVar3 ^ 0x8016bfe2
  ;
  uVar1 = *(uint64_t *)(param_2 + 0x198);
  bVar2 = (uint8_t)uVar1 & 0x1f;
  uVar3 = (uVar3 ^ 0x75864e37) * *(int *)(param_2 + 0x1c4) ^ 0x148fa043;
  uVar6 = uVar5 - uVar8;
  if ((int64_t)(int)(uVar4 >> bVar2 | uVar4 << 0x20 - bVar2) <=
      (int64_t)(uint64_t)~((uVar3 << 6 | uVar3 >> 0x1a) ^ (uint32_t)uVar1)) {
    uVar6 = uVar8 ^ uVar5;
  }
  uVar6 = (uVar6 << 0x14 | uVar6 >> 0x2c) ^ (uVar6 << 0x3a | uVar6 >> 6) ^ uVar6;
  (*(code *)((int64_t)
             (short)((short)uVar1 +
                     ((uVar7 * 0x40 | uVar7 >> 10) ^ (uint16_t)*(uint32_t *)(param_2 + 0x598)) +
                    -0x11fb) + 0x7fffa560ae78))(uVar6 >> 0x33,uVar6 << 0xd);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5000720  |  RVA: 0x890720  |  Size: 349 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5000720(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  
  if (*(int64_t *)(param_2 + 0x70) != 0) {
    uVar3 = ((uint32_t)*(uint64_t *)(param_2 + 0x370) ^ 0x472e472c) * 0x3ffcd61d ^ 0xb9f235b2;
    uVar2 = *(uint64_t *)(param_2 + 0xb0) & 0xffffffff;
    bVar1 = (uint8_t)uVar2 & 0x1f;
    (*(code *)((int64_t)(int)((uVar3 << bVar1 | uVar3 >> 0x20 - bVar1) - *(int *)(param_2 + 0x198))
              + 0x7fffa56939f0))
              (uVar2,*(uint64_t *)(param_2 + 0xb0),
               *(uint64_t *)(param_2 + 0x70) >> 0x3d ^ *(uint64_t *)(param_2 + 0x70));
  }
  *(uint64_t *)(param_2 + 200) = *(uint64_t *)(param_2 + 0x188);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5000880  |  RVA: 0x890880  |  Size: 291 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5000880(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x4a0) != 0) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
    uVar2 = 0xfae0U >> bVar1 | -0x520 << 0x10 - bVar1;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x598) & 0xf;
    (*(code *)((int64_t)(short)((uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) * 0x2995) + 0x7fffa5084ba0
              ))(*(int64_t *)(param_2 + 0x4a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50009b0  |  RVA: 0x8909b0  |  Size: 350 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50009b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  int iVar3;
  
  iVar3 = (int)*(uint64_t *)(param_2 + 0x380) *
          (int)CONCAT62((int6)((uint64_t)param_1 >> 0x10),0x8d7a);
  uVar2 = (uint16_t)iVar3 ^ 0xa108;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
  iVar3 = (int)*(uint64_t *)(param_2 + 0x370) +
          CONCAT22((short)((uint32_t)iVar3 >> 0x10),uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + 0x14f1;
  (*(code *)((int64_t)(short)iVar3 + 0x7fffa568a173))
            (iVar3,*(uint64_t *)(param_2 + 0x370),
             *(uint64_t *)(param_2 + 0x458) >> 0x3d ^ *(uint64_t *)(param_2 + 0x458));
  return;
}


// ============================================================================
// Function : Unwind@7fffa5000b10  |  RVA: 0x890b10  |  Size: 351 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5000b10(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = *(int *)(param_2 + 0x5d0) * 0x525eb976;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xb0) & 0x1f;
  uVar3 = ~(uVar3 << bVar1 | uVar3 >> 0x20 - bVar1);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0x1f;
  iVar2 = (uVar3 >> bVar1 | uVar3 << 0x20 - bVar1) * -0x6ee0c1a1;
  (*(code *)((int64_t)iVar2 + 0x7fffa5694b06))
            (iVar2,(uint32_t)*(uint64_t *)(param_2 + 0x538) | 1,
             *(uint64_t *)(param_2 + 0x458) >> 0x3d ^ *(uint64_t *)(param_2 + 0x458));
  return;
}


// ============================================================================
// Function : Unwind@7fffa5000c70  |  RVA: 0x890c70  |  Size: 397 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5000c70(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  short sVar3;
  uint32_t uVar4;
  
  uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x370) ^
          (uint32_t)CONCAT62((int6)((uint64_t)param_1 >> 0x10),0x3520);
  sVar3 = (short)uVar4;
  uVar4 = (CONCAT22((short)(uVar4 >> 0x10),sVar3 << 1 | (uint16_t)(sVar3 < 0)) ^ 0xffffe7a2) -
          *(int *)(param_2 + 0x198);
  if ((uint64_t)(((uint32_t)*(uint64_t *)(param_2 + 0x598) ^ uVar4) & 0xffff) <
      *(uint64_t *)(param_2 + 0xf8)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0x1f;
    uVar2 = (0x8c5ff735U >> bVar1 | -0x73a008cb << 0x20 - bVar1) + 0xf0db5d10;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xb0) & 0x1f;
    uVar4 = ~((uint32_t)*(uint64_t *)(param_2 + 0x370) ^
             ((int)CONCAT62((uint6)(uint16_t)(uVar4 >> 0x10),0x1293) - *(int *)(param_2 + 0x598) ^
             0xffffcaeeU) * 0x76ed);
    (*(code *)((int64_t)(short)uVar4 + 0x7fffa568ecf4))
              (uVar4,uVar2 << bVar1 | uVar2 >> 0x20 - bVar1,
               *(uint64_t *)(param_2 + 0xe0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xe0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5000e00  |  RVA: 0x890e00  |  Size: 316 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5000e00(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = (uint32_t)*(uint64_t *)(param_2 + 0x198) ^ 0xe1bd64df;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0x1f;
  uVar2 = (uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) * *(int *)(param_2 + 0xc0) ^
          (uint32_t)*(uint64_t *)(param_2 + 0x598);
  uVar2 = uVar2 << 1 | (uint32_t)((int)uVar2 < 0);
  (*(code *)((int64_t)(int)uVar2 + 0x7fffa5697614))
            (*(uint64_t *)(param_2 + 0x370),uVar2,
             *(uint64_t *)(param_2 + 0x4b8) >> 0x3d ^ *(uint64_t *)(param_2 + 0x4b8),0x9d5b3376);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5000f40  |  RVA: 0x890f40  |  Size: 382 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5000f40(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  code *pcVar3;
  uint16_t uVar4;
  int iVar5;
  uint32_t uVar6;
  
  if (0xf < *(uint64_t *)(param_2 + 0x4b8)) {
    iVar5 = (int)*(uint64_t *)(param_2 + 0x198);
    uVar6 = iVar5 + 0x1c4af51f;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0x1f;
    iVar2 = (int)*(uint64_t *)(param_2 + 0x178);
    iVar5 = (int)*(uint64_t *)(param_2 + 0x450) *
            (((uint32_t)CONCAT62((uint6)(uint16_t)((uint16_t)((uVar6 >> bVar1 | uVar6 << 0x20 - bVar1) -
                                                      iVar2 >> 0x10) ^
                                            (uint16_t)((uint32_t)*(uint32_t *)(param_2 + 0x498) >> 0x10)
                                            ),0x1503) ^ (uint32_t)*(uint64_t *)(param_2 + 0x370)) +
            iVar5);
    uVar4 = (uint16_t)iVar5;
    iVar2 = iVar2 + CONCAT22((short)((uint32_t)iVar5 >> 0x10),uVar4 << 9 | uVar4 >> 7);
    pcVar3 = (code *)((int64_t)(short)iVar2 + 0x7fffa568f76e);
    (*pcVar3)(iVar2,pcVar3,*(uint64_t *)(param_2 + 0x4f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x4f0)
             );
  }
  *(uint8_t *)(param_2 + 0x4f0) = 0;
  *(uint64_t *)(param_2 + 0x500) = 0;
  *(uint64_t *)(param_2 + 0x508) = 0xf;
  return;
}


// ============================================================================
// Function : Unwind@7fffa50010c0  |  RVA: 0x8910c0  |  Size: 184 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50010c0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar3 = 0xf0de5322 - *(int *)(param_2 + 0x198);
  uVar3 = uVar3 * 0x20 | uVar3 >> 0x1b;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x4a8) & 0x1f;
  uVar3 = (uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) - *(int *)(param_2 + 0x370);
  uVar3 = uVar3 * 0x40000 | uVar3 >> 0xe;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x178) & 0x1f;
  (*(code *)((int64_t)(int)(uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) + 0x7fffa5631a1f))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa5001180  |  RVA: 0x891180  |  Size: 344 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5001180(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x278)) {
    (*(code *)((int64_t)
               (int)(((int)*(uint64_t *)(param_2 + 0x370) + 0x48b536) * *(int *)(param_2 + 0x5cc)
                    ^ 0x7fc9c4ab) + 0x7fffa5693275))
              (0xe0b37fcd,*(uint64_t *)(param_2 + 0x370),
               *(uint64_t *)(param_2 + 0x260) >> 0x3d ^ *(uint64_t *)(param_2 + 0x260));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50012e0  |  RVA: 0x8912e0  |  Size: 476 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50012e0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint16_t uVar5;
  code *pcVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  
  uVar8 = *(int *)(param_2 + 0x370) + 0xb011899a;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x498) & 0x1f;
  uVar8 = (uVar8 >> bVar4 | uVar8 << 0x20 - bVar4) ^ *(uint32_t *)(param_2 + 0x178);
  if ((uint64_t)((uVar8 * -0x11d00000 | uVar8 * 0x1bc0fee3 >> 0xc) ^ *(uint32_t *)(param_2 + 0x198)) <
      *(uint64_t *)(param_2 + 0xf8)) {
    uVar1 = *(uint64_t *)(param_2 + 0xe0);
    uVar2 = *(uint64_t *)(param_2 + 0x198);
    uVar5 = (short)uVar2 + 0xc05c;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x370);
    bVar4 = bVar3 & 0xf;
    uVar8 = (uint32_t)*(uint64_t *)(param_2 + 0x178);
    uVar9 = ((uVar8 ^ 0xa329c607) - (int)*(uint64_t *)(param_2 + 0xb0)) + 0x6d01b230 ^ (uint32_t)uVar2
    ;
    bVar3 = bVar3 & 0x1f;
    pcVar6 = (code *)((int64_t)
                      (short)((short)(uVar8 - 0x4776) +
                             ((uVar5 << bVar4 | uVar5 >> 0x10 - bVar4) +
                              (short)*(uint32_t *)(param_2 + 0x4a8) ^ 0x904a)) + 0x7fffa568ccf6);
    uVar7 = (uVar1 >> 0x3d) + uVar1;
    if ((uVar9 << bVar3 | uVar9 >> 0x20 - bVar3) != 0x2dd7cd8f) {
      uVar7 = uVar1 ^ uVar1 >> 0x3d;
    }
    (*pcVar6)(uVar2 & 0xffffffff,pcVar6,uVar7);
  }
  *(uint64_t *)(param_2 + 0xf8) = 0xf;
  *(uint8_t *)(param_2 + 0xe0) = 0;
  *(uint64_t *)(param_2 + 0xf0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa50014c0  |  RVA: 0x8914c0  |  Size: 695 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50014c0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint8_t bVar4;
  uint16_t uVar5;
  uint32_t uVar6;
  int iVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  int64_t lVar12;
  int64_t lVar13;
  
  uVar1 = *(uint64_t *)(param_2 + 0x178);
  uVar6 = (uint32_t)uVar1;
  uVar9 = (uint32_t)*(uint64_t *)(param_2 + 0x198);
  uVar8 = uVar9 ^ 0x191c0b79;
  uVar8 = uVar8 << 0x1b | uVar8 >> 5;
  uVar2 = *(uint64_t *)(param_2 + 0x370);
  bVar10 = (uint8_t)uVar2;
  uVar8 = uVar8 << (bVar10 & 0x1f) | uVar8 >> 0x20 - (bVar10 & 0x1f);
  bVar11 = (uint8_t)*(uint64_t *)(param_2 + 0x4a8) & 0x1f;
  *(uint64_t *)(param_2 + 0x4b8) = 0x7fffa478bce4;
  lVar13 = (int64_t)(int)(((uVar8 >> bVar11 | uVar8 << 0x20 - bVar11) - uVar6) * -0xc6b82b5);
  uVar9 = 0xac7cd27c - uVar9;
  bVar11 = (uint8_t)*(uint64_t *)(param_2 + 0x598) & 0x1f;
  iVar7 = (int)*(uint64_t *)(param_2 + 0xc0);
  uVar8 = ((uVar9 >> bVar11 | uVar9 << 0x20 - bVar11) ^ 0xb6793fe8) * iVar7;
  uVar9 = 0xfc6e16 -
          ((uVar6 ^ 0xeed4609c) << (bVar10 & 0x1f) | (uVar6 ^ 0xeed4609c) >> 0x20 - (bVar10 & 0x1f))
          ^ (uint32_t)*(uint64_t *)(param_2 + 0x598);
  lVar12 = param_2 + 0x3c54bfec << 0x29;
  if (uVar9 != (((uint32_t)uVar2 ^ 0x676da6e7) + 1) * iVar7 + 0x8486e5c3) {
    lVar12 = param_2 + 0x3c54c015;
  }
  uVar6 = CONCAT22((short)(uVar9 >> 0x10) - (short)((uint32_t)*(uint32_t *)(param_2 + 0x498) >> 0x10),
                   -0x21b8 - (short)*(uint32_t *)(param_2 + 0x498)) + 0x5422U ^ uVar6;
  uVar3 = *(uint64_t *)(param_2 + 0x198) & 0xffffffff;
  bVar4 = (uint8_t)uVar3;
  bVar11 = bVar4 & 0xf;
  uVar5 = (uint16_t)uVar6;
  bVar4 = bVar4 & 0xf;
  iVar7 = CONCAT22((short)(uVar6 >> 0x10),uVar5 << bVar11 | uVar5 >> 0x10 - bVar11) *
          *(int *)(param_2 + 0x3b8);
  (*(code *)((int64_t)(short)iVar7 + 0x7fffa50cc275))
            (uVar3,param_2 + 0x3c54bfec + lVar12,iVar7,
             (uVar8 >> (bVar10 & 0x1f) | uVar8 << 0x20 - (bVar10 & 0x1f)) + 0x4f2038c1);
  uVar3 = (uint64_t)
          *(uint8_t *)(*(int64_t *)(param_2 + 0x4b8) + 5 +
                   (int64_t)
                   (short)~((0xc6d4U >> bVar4 | -0x392c << 0x10 - bVar4) * ((uint16_t)uVar1 | 1) +
                           (short)uVar2));
  bVar11 = *(uint8_t *)(lVar13 + 0x7fffa478d73c + uVar3 * 8);
  bVar10 = *(uint8_t *)(lVar13 + 0x7fffa478d73b + uVar3 * 8);
  bVar4 = ~*(uint8_t *)(lVar13 + 0x7fffa478d737 + uVar3 * 8);
  *(uint8_t *)(param_2 + 0xe2) = bVar4 >> 1 | bVar4 << 7;
  bVar4 = ~*(uint8_t *)(lVar13 + 0x7fffa478d738 + uVar3 * 8);
  *(uint8_t *)(param_2 + 0xe3) = bVar4 >> 1 | bVar4 << 7;
  bVar4 = ~*(uint8_t *)(lVar13 + 0x7fffa478d73a + uVar3 * 8);
  *(uint8_t *)(param_2 + 0xe5) = bVar4 >> 1 | bVar4 << 7;
  bVar10 = ~bVar10;
  *(uint8_t *)(param_2 + 0xe6) = bVar10 >> 1 | bVar10 << 7;
  bVar10 = ~*(uint8_t *)(lVar13 + 0x7fffa478d736 + uVar3 * 8);
  *(uint8_t *)(param_2 + 0xe1) = bVar10 >> 1 | bVar10 << 7;
  bVar11 = ~bVar11;
  *(uint8_t *)(param_2 + 0xe7) = bVar11 >> 1 | bVar11 << 7;
  bVar11 = ~*(uint8_t *)(lVar13 + 0x7fffa478d739 + uVar3 * 8);
  *(uint8_t *)(param_2 + 0xe4) = bVar11 >> 1 | bVar11 << 7;
  bVar11 = ~*(uint8_t *)(lVar13 + 0x7fffa478d735 + uVar3 * 8);
  *(uint8_t *)(param_2 + 0xe0) = bVar11 >> 1 | bVar11 << 7;
  (**(code **)(param_2 + 0xe0))(*(uint64_t *)(param_2 + 0x248));
  return;
}


// ============================================================================
// Function : Unwind@7fffa5001780  |  RVA: 0x891780  |  Size: 350 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5001780(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  if (*(int64_t *)(param_2 + 0x548) != 0) {
    uVar2 = *(uint32_t *)(param_2 + 0x370) ^ 0xa67d44da;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x538) & 0x1f;
    uVar3 = ((uint32_t)*(uint64_t *)(param_2 + 0x538) ^ 0x1a84f260) -
            (int)*(uint64_t *)(param_2 + 0x178);
    (*(code *)((int64_t)(int)((uVar3 * 0x400 | uVar3 >> 0x16) + *(int *)(param_2 + 0x250)) +
              0x7fffa5696c15))
              (*(uint64_t *)(param_2 + 0x178) & 0xffffffff,uVar2 >> bVar1 | uVar2 << 0x20 - bVar1,
               *(uint64_t *)(param_2 + 0x548) >> 0x3d ^ *(uint64_t *)(param_2 + 0x548));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50018e0  |  RVA: 0x8918e0  |  Size: 1256 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_7fffa50018e0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  uint16_t uVar14;
  uint32_t uVar15;
  uint8_t bVar16;
  int iVar17;
  int64_t lVar18;
  uint16_t uVar19;
  uint16_t uVar20;
  uint16_t uVar21;
  uint16_t uVar22;
  uint16_t uVar23;
  int iVar24;
  uint32_t uVar25;
  uint64_t uVar26;
  uint8_t auVar27 [16];
  short sVar28;
  uint8_t auVar29 [16];
  
  *(uint64_t *)(param_2 + 0xc0) = 0x7fffa4786c4f;
  uVar5 = *(uint64_t *)(param_2 + 0x370);
  iVar17 = (int)CONCAT62((int6)((uint64_t)param_1 >> 0x10),0xc1e0) + (int)uVar5 + -0x3003;
  *(uint64_t *)(param_2 + 0x538) = 0x7fffa478e6b6;
  *(uint64_t *)(param_2 + 0x548) = 0x7fffa4788f2b;
  *(uint64_t *)(param_2 + 0x488) = 0x7fffa479111d;
  iVar24 = (int)CONCAT62((int6)((uint64_t)param_4 >> 0x10),0xae68) +
           (int)*(uint64_t *)(param_2 + 0x598);
  uVar6 = *(uint64_t *)(param_2 + 0x178);
  bVar13 = (uint8_t)uVar6;
  uVar23 = (uint16_t)iVar17;
  *(uint64_t *)(param_2 + 0x4b8) =
       (uint64_t)
       CONCAT22((short)((uint32_t)iVar17 >> 0x10),
                uVar23 << (bVar13 & 0xf) | uVar23 >> 0x10 - (bVar13 & 0xf));
  uVar23 = (uint16_t)iVar24 ^ 0x798e;
  *(uint64_t *)(param_2 + 0x5e0) = 0x7fffa478a20c;
  iVar17 = CONCAT22((short)((uint32_t)iVar24 >> 0x10),
                    uVar23 << (bVar13 & 0xf) | uVar23 >> 0x10 - (bVar13 & 0xf)) *
           *(int *)(param_2 + 0x3b8);
  uVar7 = *(uint64_t *)(param_2 + 0x198);
  bVar16 = (uint8_t)(uVar7 & 0xffffffff);
  bVar9 = bVar16 & 0xf;
  uVar23 = (uint16_t)iVar17;
  *(uint32_t *)(param_2 + 0x78) =
       CONCAT22((short)((uint32_t)iVar17 >> 0x10),uVar23 << bVar9 | uVar23 >> 0x10 - bVar9);
  *(uint64_t *)(param_2 + 0x248) = 0x7fffa4786a08;
  uVar25 = ~(*(int *)(param_2 + 0x5d0) * -0x24a1ba4f) + (uint32_t)uVar6;
  bVar16 = bVar16 & 0x1f;
  *(int *)(param_2 + 0x490) = (int)CONCAT62((int6)((uVar7 & 0xffffffff) >> 0x10),0xef42);
  *(uint64_t *)(param_2 + 0x528) = 0x7fffa478b732;
  *(uint64_t *)(param_2 + 0x3b0) = 0x7fffa4794496;
  uVar8 = *(uint64_t *)(param_2 + 0x4a8);
  uVar23 = 0xbe2bU - (short)uVar8 ^ 0xa172;
  bVar9 = (uint8_t)uVar7 & 0xf;
  uVar19 = uVar23 >> bVar9 | uVar23 << 0x10 - bVar9;
  bVar9 = (uint8_t)uVar8 & 0x1f;
  uVar15 = (0x2288e802U >> bVar9 | 0x2288e802 << 0x20 - bVar9) ^ (uint32_t)uVar6;
  bVar12 = (uint8_t)uVar5 & 0x1f;
  uVar26 = (uint64_t)
           *(uint8_t *)(*(int64_t *)(param_2 + 0x488) + 1 +
                    (int64_t)
                    (int)(((uVar25 << bVar16 | uVar25 >> 0x20 - bVar16) ^ (uint32_t)uVar8) * 0x5450aced)
                    );
  bVar9 = *(uint8_t *)((int64_t)
                    (int)~((0x4abedbe7U >> (bVar13 & 0x1f) | 0x4abedbe7 << 0x20 - (bVar13 & 0x1f)) *
                          ((uint32_t)*(uint64_t *)(param_2 + 0x498) | 1)) + 0x7fffa479333c);
  uVar23 = (uint16_t)uVar5;
  uVar14 = (uint16_t)uVar7;
  bVar16 = *(uint8_t *)(*(int64_t *)(param_2 + 0x5e0) + 0x34 +
                    (int64_t)
                    (short)(~((uVar14 + 0x43cd) * (short)*(uint32_t *)(param_2 + 0x80)) +
                           ((short)uVar6 - uVar23)));
  bVar10 = (uint8_t)uVar7 & 0xf;
  uVar22 = ~((0x8269U >> bVar10 | -0x7d97 << 0x10 - bVar10) + (uVar23 - (short)uVar6));
  bVar11 = (uint8_t)uVar8 & 0xf;
  uVar20 = (uVar19 << 0xc | uVar19 >> 4) ^ uVar23;
  uVar21 = ~((short)*(uint32_t *)(param_2 + 0x490) * -0x35f7);
  uVar19 = ((uVar14 ^ 0xcde1) - uVar23) + 0x5bf8;
  uVar19 = uVar19 * 0x1000 | uVar19 >> 4;
  bVar10 = *(uint8_t *)(*(int64_t *)(param_2 + 0x248) + 0x32 +
                    (int64_t)
                    (short)(~(uVar21 >> (bVar13 & 0xf) | uVar21 << 0x10 - (bVar13 & 0xf)) + uVar23 +
                           (short)*(uint64_t *)(param_2 + 0x498)));
  uVar5 = *(uint64_t *)(param_2 + 0xb0);
  sVar28 = (short)uVar5;
  bVar1 = *(uint8_t *)(*(int64_t *)(param_2 + 0x528) + 0x38 +
                   (int64_t)
                   (short)((uVar19 >> (bVar13 & 0xf) | uVar19 << 0x10 - (bVar13 & 0xf)) - sVar28));
  uVar19 = (short)*(uint64_t *)(param_2 + 0x4b8) - (short)*(uint32_t *)(param_2 + 0x598);
  lVar18 = (int64_t)(short)((uVar19 * 8 | uVar19 >> 0xd) ^ uVar14) + *(int64_t *)(param_2 + 0xc0);
  bVar11 = *(uint8_t *)((int64_t)(short)(uVar22 >> bVar11 | uVar22 << 0x10 - bVar11) + 0x7fffa4787181)
  ;
  bVar12 = *(uint8_t *)(*(int64_t *)(param_2 + 0x3b0) + 0x37 +
                    (int64_t)(int)((uVar15 >> bVar12 | uVar15 << 0x20 - bVar12) * 0x7c4ec291));
  bVar2 = *(uint8_t *)(*(int64_t *)(param_2 + 0x538) + 0x33 + (int64_t)*(short *)(param_2 + 0x78));
  bVar3 = *(uint8_t *)(lVar18 + 7 + uVar26 * 8);
  bVar4 = *(uint8_t *)(lVar18 + 10 + uVar26 * 8);
  *(uint8_t *)(param_2 + 0xe5) =
       ~(*(uint8_t *)(*(int64_t *)(param_2 + 0x548) + 0x36 +
                  (int64_t)(short)(uVar20 >> (bVar13 & 0xf) | uVar20 << 0x10 - (bVar13 & 0xf))) ^
        *(uint8_t *)(lVar18 + 9 + uVar26 * 8));
  *(uint8_t *)(param_2 + 0xe6) = ~(bVar12 ^ bVar4);
  *(uint8_t *)(param_2 + 0xe7) = ~(bVar1 ^ *(uint8_t *)(lVar18 + 0xb + uVar26 * 8));
  *(uint8_t *)(param_2 + 0xe4) = ~(bVar9 ^ *(uint8_t *)(lVar18 + 8 + uVar26 * 8));
  *(uint8_t *)(param_2 + 0xe0) = ~(bVar11 ^ *(uint8_t *)(lVar18 + 4 + uVar26 * 8));
  *(uint8_t *)(param_2 + 0xe1) = ~(bVar10 ^ *(uint8_t *)(lVar18 + 5 + uVar26 * 8));
  *(uint8_t *)(param_2 + 0xe3) = ~(bVar16 ^ bVar3);
  *(uint8_t *)(param_2 + 0xe2) = ~(bVar2 ^ *(uint8_t *)(lVar18 + 6 + uVar26 * 8));
  (**(code **)(param_2 + 0xe0))(*(uint64_t *)(param_2 + 0x420),0);
  uVar19 = (short)*(uint32_t *)(param_2 + 0x3b8) * -0x4493;
  bVar9 = (uint8_t)uVar5 & 0xf;
  uVar19 = (uVar19 << bVar9 | uVar19 >> 0x10 - bVar9) + uVar14;
  bVar9 = (uint8_t)*(uint64_t *)(param_2 + 0x178) & 0xf;
  auVar29._8_8_ = 0;
  auVar29._0_8_ =
       *(uint64_t *)
        ((int64_t)
         (short)(((((uint16_t)*(uint64_t *)(param_2 + 0x178) | 1) * 0x18e0 ^
                  (uint16_t)*(uint32_t *)(param_2 + 0x498)) + 0xb998 ^ uVar14) - uVar23) +
         0x7fffa4785ede +
        (uint64_t)
        *(uint8_t *)((int64_t)(short)(uVar14 + (~(uVar23 ^ 0x401b) - sVar28) * -0x6387 + -0x6acf) +
                 0x7fffa4786cb6) * 8);
  auVar27._8_4_ = 0xffffffff;
  auVar27._0_8_ = 0xffffffffffffffff;
  auVar27._12_4_ = 0xffffffff;
  auVar27 = auVar27 ^ auVar29;
  auVar29 = psllw(auVar27,4);
  *(uint64_t *)(param_2 + 0xe0) =
       *(uint64_t *)
        ((int64_t)(short)((uVar19 >> bVar9 | uVar19 << 0x10 - bVar9) * -0x7499) + 0x7fffa4785acb) ^
       (auVar29._0_8_ & (uint64_t)DAT_7fffa56b9c80 |
       CONCAT26(auVar27._6_2_ >> 4,
                CONCAT24(auVar27._4_2_ >> 4,CONCAT22(auVar27._2_2_ >> 4,auVar27._0_2_ >> 4))) &
       (uint64_t)DAT_7fffa56b8670);
  (**(code **)(param_2 + 0xe0))(*(uint64_t *)(param_2 + 1000));
  return;
}


// ============================================================================
// Function : Unwind@7fffa5001dd0  |  RVA: 0x891dd0  |  Size: 322 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5001dd0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = ~((int)*(uint64_t *)(param_2 + 0x5d0) * -0x6707491c);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0x1f;
  uVar2 = (uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x76db7f95;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x498) & 0x1f;
  (*(code *)((int64_t)(int)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x7fffa56a3f7f))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa5001f20  |  RVA: 0x891f20  |  Size: 356 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5001f20(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint16_t uVar4;
  int iVar5;
  uint32_t uVar6;
  
  if (0xf < *(uint64_t *)(param_2 + 0x508)) {
    iVar5 = (int)CONCAT62((int6)((uint64_t)param_4 >> 0x10),0x54c3) + -0x359a;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x178) & 0xf;
    uVar4 = (uint16_t)iVar5;
    uVar6 = CONCAT22((short)((uint32_t)iVar5 >> 0x10),uVar4 >> bVar1 | uVar4 << 0x10 - bVar1) ^
            (uint32_t)*(uint64_t *)(param_2 + 0x370);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
    uVar4 = (uint16_t)uVar6;
    uVar3 = *(int *)(param_2 + 0x3a8) * -0x1410c1a7 + *(int *)(param_2 + 0x4a8);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0x1f;
    iVar5 = ((uint32_t)*(uint64_t *)(param_2 + 0x598) ^
            CONCAT22((short)(uVar6 >> 0x10),uVar4 << bVar1 | uVar4 >> 0x10 - bVar1)) + 0x5540;
    (*(code *)((int64_t)(short)iVar5 + 0x7fffa5688e42))
              (iVar5,(uVar3 >> bVar2 | uVar3 << 0x20 - bVar2) +
                     (int)*(uint64_t *)(param_2 + 0x178),
               *(uint64_t *)(param_2 + 0x4f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x4f0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5002090  |  RVA: 0x892090  |  Size: 373 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5002090(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  int64_t lVar3;
  
  if (0xf < *(uint64_t *)(param_2 + 0xf8)) {
    lVar3 = (uint64_t)((uint32_t)*(uint64_t *)(param_2 + 0x498) | 1) * 0xadeceb1;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0x1f;
    uVar2 = (uint32_t)lVar3;
    uVar2 = (uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0xf03a2849;
    uVar2 = ~((int)*(uint64_t *)(param_2 + 0xc0) * (uVar2 * 0x10000000 | uVar2 >> 4));
    (*(code *)((int64_t)(int)uVar2 + 0x7fffa569214a))
              (uVar2,lVar3,*(uint64_t *)(param_2 + 0xe0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xe0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5002210  |  RVA: 0x892210  |  Size: 379 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5002210(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (*(char *)(param_2 + 0x280) == '\x01') {
    if (0xf < *(uint64_t *)(param_2 + 0x278)) {
      bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x4a8) & 0x1f;
      uVar2 = (0x5c7c3ea0U >> bVar1 | 0x5c7c3ea0 << 0x20 - bVar1) ^ *(uint32_t *)(param_2 + 0x178);
      bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x370) & 0x1f;
      (*(code *)(&UNK_7fffa5690a93 +
                (int)((uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) ^
                     (uint32_t)*(uint64_t *)(param_2 + 0x198))))
                (*(uint64_t *)(param_2 + 0x198),
                 &UNK_7fffa5690a93 +
                 (int)((uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) ^
                      (uint32_t)*(uint64_t *)(param_2 + 0x198)),
                 *(uint64_t *)(param_2 + 0x260) >> 0x3d ^ *(uint64_t *)(param_2 + 0x260));
    }
    *(uint8_t *)(param_2 + 0x260) = 0;
    *(uint64_t *)(param_2 + 0x270) = 0;
    *(uint64_t *)(param_2 + 0x278) = 0xf;
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5002390  |  RVA: 0x892390  |  Size: 496 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5002390(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  uint16_t uVar4;
  code *pcVar5;
  uint32_t uVar6;
  
  uVar4 = ((uint16_t)*(uint64_t *)(param_2 + 0x178) | 1) * 0x154;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x198);
  bVar1 = bVar2 & 0xf;
  uVar6 = (int)*(uint64_t *)(param_2 + 0x530) * -0x3a5a1050;
  bVar2 = bVar2 & 0x1f;
  uVar6 = ((uVar6 >> bVar2 | uVar6 << 0x20 - bVar2) ^ (uint32_t)*(uint64_t *)(param_2 + 0x178)) +
          0x1521abeb ^ *(uint32_t *)(param_2 + 0x370);
  pcVar5 = (code *)((int64_t)
                    (short)((~(uVar4 << bVar1 | uVar4 >> 0x10 - bVar1) -
                            (short)*(uint32_t *)(param_2 + 0x498)) + -0x4449) + 0x7fffa54a1208);
  (*pcVar5)(param_2 + -0x41f8f733,pcVar5,uVar6 << 0x19 | uVar6 >> 7);
  if (7 < *(uint64_t *)(param_2 + 0x238)) {
    uVar6 = (int)*(uint64_t *)(param_2 + 0x370) + 0x1899008c;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x178) & 0x1f;
    uVar6 = uVar6 << bVar1 | uVar6 >> 0x20 - bVar1;
    uVar3 = *(uint64_t *)(param_2 + 0x198) & 0xffffffff;
    bVar1 = (uint8_t)uVar3 & 0x1f;
    uVar6 = (uVar6 >> bVar1 | uVar6 << 0x20 - bVar1) + *(int *)(param_2 + 0x4a8);
    (*(code *)(&UNK_7fffa568ff06 + (int)(uVar6 >> 1 | (uint32_t)((uVar6 & 1) != 0) << 0x1f)))
              (uVar3,*(uint64_t *)(param_2 + 0x198),
               *(uint64_t *)(param_2 + 0x220) >> 0x3d ^ *(uint64_t *)(param_2 + 0x220));
  }
  *(uint64_t *)(param_2 + 0x238) = 7;
  *(uint16_t *)(param_2 + 0x220) = 0;
  *(uint64_t *)(param_2 + 0x230) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5002580  |  RVA: 0x892580  |  Size: 345 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5002580(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  int iVar4;
  code *pcVar5;
  
  if (0xf < *(uint64_t *)(param_2 + 0x1b8)) {
    uVar2 = (uint32_t)*(uint64_t *)(param_2 + 0x370);
    iVar4 = (uVar2 | 1) * (int)CONCAT62((int6)((uint64_t)param_1 >> 0x10),0x848a);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x198) & 0xf;
    uVar3 = (uint16_t)iVar4;
    iVar4 = CONCAT22((short)((uint32_t)iVar4 >> 0x10),uVar3 << bVar1 | uVar3 >> 0x10 - bVar1) * 0x1d23;
    pcVar5 = (code *)((int64_t)(short)((uint16_t)*(uint64_t *)(param_2 + 0x598) ^ (uint16_t)iVar4) +
                     0x7fffa568e726);
    (*pcVar5)(iVar4,pcVar5,*(uint64_t *)(param_2 + 0x1a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1a0)
              ,uVar2 | 1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50026e0  |  RVA: 0x8926e0  |  Size: 372 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50026e0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  if (*(char *)(param_2 + 0x4e0) == '\x01') {
    if (0xf < *(uint64_t *)(param_2 + 0x4d8)) {
      bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x598) & 0x1f;
      (*(code *)((int64_t)
                 (int)((0xc4378851U >> bVar1 | -0x3bc877af << 0x20 - bVar1) *
                      *(int *)(param_2 + 0x3a8)) + 0x7fffa569616f))
                (*(uint64_t *)(param_2 + 0xb0),param_2,
                 *(uint64_t *)(param_2 + 0x4c0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x4c0));
    }
    *(uint8_t *)(param_2 + 0x4c0) = 0;
    *(uint64_t *)(param_2 + 0x4d8) = 0xf;
    *(uint64_t *)(param_2 + 0x4d0) = 0;
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5002860  |  RVA: 0x892860  |  Size: 397 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5002860(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  code *pcVar2;
  
  uVar1 = *(int *)(param_2 + 0x198) + 0xf894cd8a;
  if ((uint64_t)~((uVar1 * 0x1000 | uVar1 >> 0x14) * ((uint32_t)*(uint64_t *)(param_2 + 0x370) | 1))
      < *(uint64_t *)(param_2 + 0x408)) {
    pcVar2 = (code *)((int64_t)
                      (short)((short)*(uint64_t *)(param_2 + 0x80) *
                             ((0x670eU - (short)*(uint64_t *)(param_2 + 0x370) ^ 0x7701) -
                             (short)*(uint64_t *)(param_2 + 0x198))) + 0x7fffa5688f0b);
    (*pcVar2)(*(uint64_t *)(param_2 + 0x370),pcVar2,
              *(uint64_t *)(param_2 + 0x3f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x3f0));
  }
  *(uint64_t *)(param_2 + 0x408) = 7;
  *(uint16_t *)(param_2 + 0x3f0) = 0;
  *(uint64_t *)(param_2 + 0x400) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa50029f0  |  RVA: 0x8929f0  |  Size: 456 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50029f0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  int64_t lVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t uVar5;
  
  lVar2 = (param_2 + 0x390) - (param_2 << 0x3e);
  iVar4 = (int)(param_2 + 0x390);
  uVar1 = (uint32_t)((uint64_t)lVar2 >> 0x20);
  uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x198);
  uVar1 = (iVar4 * 4 | uVar1 >> 0x1e) ^ (iVar4 * 0x800 | uVar1 >> 0x15) ^ (uint32_t)lVar2;
  uVar3 = ~(*(int *)(param_2 + 0x5cc) * 0x72b67420);
  uVar3 = uVar3 * 0x7a85f248 | uVar3 * 0x4f50be49 >> 0x1d;
  iVar4 = 0;
  if ((uint64_t)(int64_t)(int)uVar3 <= (uint64_t)(0xbd5f8193 - uVar5)) {
    iVar4 = uVar1 - 0x2d;
  }
  (*(code *)(&UNK_7fffa56b004e +
            (int)((*(uint32_t *)(param_2 + 0x598) ^ 0x866b1112) * 0x7eb5df9 ^ uVar5)))
            (uVar3,(iVar4 + uVar1) * -0x2c78be5,(uint64_t)(0xbd5f8193 - uVar5),(int64_t)(int)uVar3
             ,((int)*(uint64_t *)(param_2 + 0xb0) - uVar5) + 0xe45eb50f ^ 0x6a83961a);
  *(uint64_t *)(param_2 + 200) = *(uint64_t *)(param_2 + 0x188);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5002bc0  |  RVA: 0x892bc0  |  Size: 316 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5002bc0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  code *pcVar3;
  
  uVar1 = *(uint64_t *)(param_2 + 200);
  if (uVar1 != 0) {
    iVar2 = (*(int *)(param_2 + 0x3a8) * 0x1419831b + 0x4854a5fc) *
            ((uint32_t)*(uint64_t *)(param_2 + 0x598) | 1);
    pcVar3 = (code *)((int64_t)iVar2 + 0x7fffa5695629);
    (*pcVar3)(iVar2,pcVar3,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5002cfc  |  RVA: 0x892cfc  |  Size: 207 bytes
// Callers  : FUN_7fffa51817f8@0xa117f8, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa54e57f4@0xd757f4
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa5002cfc(uint32_t param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint32_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint32_t *)(&UNK_7fffa56b3454 + (uint64_t)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar9 = 0;
      uVar7 = 0x2c;
      do {
        uVar8 = uVar5 >> 1;
        if (uVar8 == 0) {
          if (uVar5 != 0) {
            puVar4 = (uint32_t *)(&UNK_7fffa56b3450 + uVar9 * 8);
            if (param_1 != *puVar4) {
              puVar4 = (uint32_t *)0x0;
            }
LAB_7fffa5002d9d:
            if (puVar4 != (uint32_t *)0x0) {
              return puVar4[1];
            }
          }
          break;
        }
        uVar6 = uVar8 - 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar8;
        }
        lVar1 = uVar6 + uVar9;
        puVar4 = (uint32_t *)(&UNK_7fffa56b3450 + lVar1 * 8);
        if (param_1 == *puVar4) goto LAB_7fffa5002d9d;
        uVar3 = lVar1 - 1;
        uVar5 = uVar6;
        if (*puVar4 <= param_1) {
          uVar9 = lVar1 + 1;
          uVar3 = uVar7;
          uVar5 = uVar8;
        }
        uVar7 = uVar3;
      } while (uVar9 <= uVar3);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      uVar2 = 8;
    }
  }
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa5002dcc  |  RVA: 0x892dcc  |  Size: 49 bytes
// Callers  : FUN_7fffa569b130@0xf2b130, FUN_7fffa564c60d@0xedc60d, FUN_7fffa4ecfc70@0x75fc70, FUN_7fffa54e6ac4@0xd76ac4
// Callees  : FUN_7fffa50082d0@0x8982d0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5002dcc(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  
  if (((uint8_t *)*param_2 != PTR_PTR_7fffa4782608) &&
     ((_DAT_7fffa4780900 & *(uint32_t *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_7fffa50082d0();
    *param_2 = lVar1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5002e00  |  RVA: 0x892e00  |  Size: 710 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5002e00(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  bRam00007fffa47bb17f = 0;
  uRam00007fffa47bb19c = 0;
  uRam00007fffa47bb1a4 = 0;
  uRam00007fffa47bb18c = 0;
  uRam00007fffa47bb194 = 0;
  uRam00007fffa47bb1ac = 0;
  uRam00007fffa47bb1c0 = 0;
  uVar1 = rdtsc();
  lVar5 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x33bfd4c1268999a;
  lVar6 = 0;
  while( true ) {
    *(char *)(lVar6 + 0x7fffa47bb17b) = (char)((uint64_t)(lVar5 * 0x4c1268999a) >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bb17c) = (char)((uint64_t)(lVar5 * 0xc6d14970a4) >> 0x20);
    if (lVar6 == 0x50) break;
    lVar3 = lVar5 * 0x20151fc6a8;
    lVar5 = lVar5 * -0xb744b52c8e816f0;
    *(char *)(lVar6 + 0x7fffa47bb17d) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bb17e) = (char)((uint64_t)lVar5 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bb17f * 0x33333334 + 0x33333334) * 5;
  uVar4 = uVar2 >> 0x20;
  *(uint32_t *)(uVar4 * 8 + 0x7fffa47bb18c) = ~(uint32_t)uRam00007fffa47bb1c0;
  *(uint32_t *)(uVar4 * 8 + 0x7fffa47bb190) = ~uRam00007fffa47bb1c0._4_4_;
  bRam00007fffa47bb17f = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa50030d0  |  RVA: 0x8930d0  |  Size: 1 bytes
// Callers  : FUN_7fffa5130600@0x9c0600, FUN_7fffa56a65a0@0xf365a0, FUN_7fffa569faf0@0xf2faf0
// Callees  : none
// ============================================================================
void FUN_7fffa50030d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa50030e0  |  RVA: 0x8930e0  |  Size: 43 bytes
// Callers  : none
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa50030e0(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = param_1;
    uVar2 = _DAT_7fffa478262c;
  }
  else {
    puVar3 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar3 = 0x16;
    FUN_7fffa55c8ce0();
    uVar1 = _DAT_7fffa478262c;
    uVar2 = 0xffffffff;
  }
  _DAT_7fffa478262c = uVar1;
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa5003110  |  RVA: 0x893110  |  Size: 19339 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa565caf0@0xeecaf0
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5003226) */
/* WARNING: Removing unreachable block (ram,0x7fffa500316d) */

void FUN_7fffa5003110(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  char cVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  char cVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  code *pcVar19;
  uint8_t bVar20;
  int iVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  uint32_t uVar24;
  uint64_t uVar25;
  int64_t lVar26;
  uint64_t uVar27;
  uint8_t *puVar28;
  uint32_t *puVar29;
  uint32_t *puVar30;
  uint8_t bVar31;
  uint8_t bVar32;
  uint16_t uVar33;
  uint32_t uVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  uint32_t uVar37;
  int64_t in_R10;
  uint64_t uVar38;
  uint16_t uVar39;
  uint32_t uVar40;
  uint64_t uVar41;
  uint64_t uVar42;
  short sVar43;
  int iVar44;
  int64_t lVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint64_t uVar49;
  uint64_t uVar50;
  bool bVar51;
  uint64_t unaff_XMM12_Qa;
  uint64_t unaff_XMM12_Qb;
  uint64_t unaff_XMM14_Qa;
  uint64_t unaff_XMM14_Qb;
  uint64_t unaff_XMM15_Qa;
  uint64_t unaff_XMM15_Qb;
  uint8_t auStackX_18 [8];
  uint64_t uStackX_20;
  uint8_t uStack00000000000000a0;
  uint8_t uStack00000000000000a8;
  uint8_t uStack00000000000000b0;
  uint8_t uStack00000000000000b8;
  uint8_t uStack00000000000000c0;
  uint8_t uStack00000000000000c8;
  uint8_t uStack00000000000000d0;
  uint8_t uStack00000000000000d8;
  uint8_t uStack00000000000000e0;
  uint8_t uStack00000000000000e8;
  uint8_t uStack00000000000000f0;
  uint8_t uStack0000000000000100;
  uint8_t uStack0000000000000110;
  uint8_t uStack000000000000011c;
  uint8_t uStack0000000000000120;
  uint8_t uStack0000000000000130;
  uint8_t uStack0000000000000140;
  uint8_t uStack0000000000000150;
  uint8_t uStack0000000000000160;
  uint8_t uStack0000000000000170;
  uint8_t uStack0000000000000180;
  uint8_t uStack0000000000000190;
  uint8_t uStack00000000000001a0;
  uint8_t uStack00000000000001b0;
  uint8_t uStack00000000000001c0;
  uint8_t uStack00000000000001c8;
  uint8_t uStack00000000000001cc;
  uint8_t uStack00000000000001d0;
  uint8_t uStack00000000000001d4;
  uint8_t uStack00000000000001d8;
  uint8_t uStack00000000000001dc;
  uint8_t uStack00000000000001e0;
  uint8_t uStack00000000000001e4;
  uint8_t uStack00000000000001e8;
  uint8_t uStack00000000000001ec;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_50 = 0x7fffa5003127;
  lVar13 = FUN_7fffa565caf0();
  lVar13 = -lVar13;
  uVar22 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1618);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1608) = unaff_XMM14_Qa;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1610) = unaff_XMM14_Qb;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15f8) = unaff_XMM12_Qa;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1600) = unaff_XMM12_Qb;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15e8) = unaff_XMM15_Qa;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15f0) = unaff_XMM15_Qb;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x50) = param_1;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x68) = uVar22;
  uVar11 = 0;
  *(uint64_t *)((int64_t)&uStack_50 + lVar13) = param_3;
  puVar29 = (uint32_t *)cpuid_basic_info(0);
  uVar12 = *puVar29;
  uVar17 = *(uint64_t *)((int64_t)&uStack_50 + lVar13);
  *(uint64_t *)((int64_t)&uStack_50 + lVar13) = 0x7fffa5003188;
  FUN_7fffa4ecf8e0(&uStack00000000000000e0 + lVar13,0,0x1480);
  uVar14 = (uVar17 << 0x32 | uVar17 >> 0xe) ^ (uVar17 << 9 | uVar17 >> 0x37) ^ uVar17;
  uVar14 = (uVar14 << 0x24 | uVar14 >> 0x1c) ^ (uVar14 << 0x12 | uVar14 >> 0x2e) ^ uVar14;
  uVar14 = (uVar14 << 8 | uVar14 >> 0x38) ^ (uVar14 << 0x24 | uVar14 >> 0x1c) ^ uVar14;
  uVar14 = (uVar14 << 8 | uVar14 >> 0x38) ^ (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar14;
  uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ (uVar14 << 0x20 | uVar14 >> 0x20) ^ uVar14;
  uVar37 = (uint32_t)in_R10;
  if ((uVar12 != 0) && ((uVar37 + 0x7fa3 & 0xffff) < uVar12)) {
    uVar11 = 0;
    *(uint64_t *)((int64_t)&uStack_50 + lVar13) = uVar17;
    lVar15 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar39 = (uint16_t)in_R10 ^ 0x8063;
    if ((*(uint32_t *)(lVar15 + 4) & 8) != (uint32_t)(uint16_t)(uVar39 << 5 | uVar39 >> 0xb)) {
      uVar11 = *(uint32_t *)(lVar15 + 4) >> 8 & 1;
    }
  }
  sVar43 = (short)(uVar37 | 1);
  uVar17 = -(uint64_t)(param_2 < 0x40001);
  if (uVar37 == 0x8063) {
    uVar17 = (uint64_t)(param_2 < 0x40001);
  }
  lVar15 = ((param_2 < 0x4001) + uVar17 + (uint64_t)(param_2 < 0x20001)) * 0x284;
  *(uint32_t *)(&uStack00000000000000e8 + lVar13) = uVar11;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xf28) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xf38) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xf48) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xf58) = (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xf68) = 0;
  *(uint8_t (*) [16])(&uStack00000000000000f0 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000100 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000110 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000120 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000130 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000140 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000150 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000160 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000170 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000180 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack0000000000000190 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack00000000000001a0 + lVar13) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(&uStack00000000000001b0 + lVar13) = (uint8_t  [16])0x0;
  *(uint64_t *)(&uStack00000000000001c0 + lVar13) = 0;
  *(uint32_t *)(&uStack000000000000011c + lVar13) = 3;
  *(uint32_t *)(&uStack0000000000000110 + lVar13) = 1;
  uVar22 = *(uint64_t *)(&UNK_7fffa585bf3f + lVar15 + 0x28 + (int64_t)(short)(sVar43 * 0x7d4b));
  uVar12 = *(uint32_t *)(&UNK_7fffa585bf3f + lVar15 + 0x1c + (int64_t)(short)(sVar43 * 0x7d4b));
  uVar11 = *(uint32_t *)(&UNK_7fffa585bf3f + lVar15 + 0x20 + (int64_t)(short)(sVar43 * 0x7d4b));
  uVar40 = *(uint32_t *)(&UNK_7fffa585bf3f + lVar15 + 0x24 + (int64_t)(short)(sVar43 * 0x7d4b));
  if (param_2 < (0xc86381f3 - uVar37 ^ 0x88630191)) {
    uVar24 = (int)param_2 - 1;
    iVar21 = 0x1f;
    if (uVar24 != 0) {
      for (; uVar24 >> iVar21 == 0; iVar21 = iVar21 + -1) {
      }
    }
    uVar24 = 6;
    if (0x3f < param_2) {
      uVar24 = iVar21 + 1;
    }
    if (uVar12 < uVar24) {
      uVar24 = uVar12;
    }
    uVar12 = uVar24;
LAB_7fffa5003410:
    if (uVar12 <= uVar11) {
      uVar11 = uVar12;
    }
    if (uVar12 + 1 <= uVar40) {
      uVar40 = uVar12 + 1;
    }
  }
  else if (param_2 != 0xffffffffffffffff) goto LAB_7fffa5003410;
  uVar17 = *(uint64_t *)(auStackX_18 + lVar13 + 0x50);
  uVar24 = 10;
  if (10 < uVar12) {
    uVar24 = uVar12;
  }
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x2a0) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 800) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x2b0) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x300) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x2c0) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x360) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x350) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x340) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x330) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x310) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x2f0) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x2e0) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x2d0) = (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x370) = 0;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x370) = 2;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x2ac) = uVar40;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x32c) = 2;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 700) = 1;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x300) = 2;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x2a4) = uVar24;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x2cc) = 1;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x2b0) = uVar22;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x368) = 0x20000;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x2c0) = 1;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x490) = 1;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x330) = 2;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x2a8) = uVar11;
  *(uint64_t *)((int64_t)&uStack_50 + lVar13) = 0x7fffa5003575;
  FUN_7fffa56a5f20(&uStack00000000000001c8 + lVar13,(int64_t)register0x00000020 + lVar13 + 0x2a0,
                   0xd8);
  puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
  uVar12 = *(uint32_t *)(&uStack00000000000001cc + lVar13);
  *(int *)((int64_t)register0x00000020 + lVar13 + 0x1580) =
       *(int *)((int64_t)register0x00000020 + lVar13 + 0x228);
  if (*(int *)((int64_t)register0x00000020 + lVar13 + 0x228) == 1) {
    uVar40 = *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x230);
    *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x23c) = uVar12;
    if (*(int *)((int64_t)register0x00000020 + lVar13 + 0x234) == 0) {
      *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x234) = 0x40;
    }
    uVar24 = *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x22c);
    if (uVar24 == 0) {
      uVar24 = 6;
      if (6 < uVar12 - 7) {
        uVar24 = uVar12 - 7;
      }
      *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x22c) = uVar24;
    }
    if (*(int *)(&uStack00000000000000e0 + (uint64_t)(uVar37 - 0x7f0b) + lVar13) == 0) {
      iVar21 = uVar12 - uVar24;
      if (uVar12 < uVar24) {
        iVar21 = 0;
      }
      *(int *)(&uStack00000000000000e0 + (uint64_t)(uVar37 - 0x7f0b) + lVar13) = iVar21;
    }
    uVar34 = 3;
    if (uVar40 != 0) {
      uVar34 = uVar40;
    }
    if (uVar24 <= uVar34) {
      uVar34 = uVar24;
    }
    *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x230) = uVar34;
  }
  lVar15 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x288);
  *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c8) = lVar15;
  uVar38 = 1L << ((uint8_t)uVar12 & 0x3f);
  if (param_2 <= uVar38) {
    uVar38 = param_2;
  }
  if (param_2 == 0) {
    uVar38 = 1;
  }
  uVar40 = *(uint32_t *)(&uStack00000000000001dc + lVar13);
  uVar24 = (uVar37 ^ 0x8060) & 0xffff;
  *(uint32_t *)(auStackX_18 + lVar13 + 0x2c) = uVar24;
  uVar35 = 4 - (uint64_t)(uVar40 == uVar24 || lVar15 != 0);
  uVar41 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x290);
  uVar49 = uVar38;
  if (uVar41 < uVar38) {
    uVar49 = uVar41;
  }
  *(uint64_t *)(&uStack00000000000000d8 + lVar13) = 0;
  *(uint64_t *)(&uStack00000000000000b0 + lVar13) = uVar35;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x10) = uVar49 / uVar35;
  if (*(int *)((int64_t)register0x00000020 + lVar13 + 0x1580) == 1) {
    uVar35 = uVar49;
    if (uVar49 >> 0x20 == 0) {
      uVar35 = uVar49 & 0xffffffff;
    }
    *(uint64_t *)(&uStack00000000000000d8 + lVar13) =
         uVar35 / *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x234);
  }
  *(uint64_t *)(auStackX_18 + lVar13 + 0x50) =
       *(uint64_t *)(auStackX_18 + lVar13 + 0x50) ^
       (uVar17 << 0x22 | uVar17 >> 0x1e) ^ (uVar17 << 0x3b | uVar17 >> 5);
  uVar39 = (uint16_t)in_R10 ^ 0x8463;
  uVar24 = *(uint32_t *)(&uStack00000000000001e4 + lVar13);
  iVar21 = *(int *)((int64_t)register0x00000020 + lVar13 + 600);
  uVar34 = (uint32_t)(uint16_t)(uVar39 << 6 | uVar39 >> 10);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570) = uVar49;
  *(int *)((int64_t)register0x00000020 + lVar13 + 0x15d8) = iVar21;
  *(uint32_t *)(auStackX_18 + lVar13 + 0x60) = uVar37 | 1;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15b8) = uVar14 << 0x20 | uVar14 >> 0x20;
  *(uint32_t *)(auStackX_18 + lVar13 + 100) = uVar34;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) = uVar40;
  if ((uVar24 == uVar34) || (uVar24 - 3 < 3 && iVar21 == 1)) {
    *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 0;
  }
  else {
    *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a0) =
         4L << ((&uStack00000000000001d0)[lVar13] & 0x3f);
  }
  uVar17 = *(uint64_t *)(auStackX_18 + lVar13 + 0x50);
  uVar14 = (uint64_t)uVar11;
  uVar49 = ~uVar14;
  *(uint64_t *)(&uStack00000000000000c8 + lVar13) = ~uVar17;
  *(uint64_t *)(&uStack00000000000000a8 + lVar13) = ~uVar17 & uVar49;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a8) = uVar14;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x38) = uVar14 ^ uVar17;
  *(uint32_t *)(auStackX_18 + lVar13 + 8) = 0xa3e3014e;
  uVar14 = 0x20000;
  if (uVar41 != 0) {
    uVar14 = uVar41;
  }
  if (uVar38 <= uVar14) {
    uVar14 = uVar38;
  }
  bVar20 = (uint8_t)in_R10 & 0x1f;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) =
       (uint64_t)(-0x1698d60d << bVar20 | 0xe96729f3U >> 0x20 - bVar20);
  *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d0) =
       (int64_t)(int)((uVar37 ^ 0xf513171d) + 0xa33af0aa);
  uVar11 = *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x22c);
  uVar40 = *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x230);
  if (uVar11 <= *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x230)) {
    uVar40 = uVar11;
  }
  *(uint32_t *)(auStackX_18 + lVar13) = uVar40;
  *(uint64_t *)(&uStack00000000000000c0 + lVar13) = (uint64_t)uVar11;
  *(int64_t *)(&uStack00000000000000d0 + lVar13) = 8L << ((uint8_t)uVar11 & 0x3f);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1578) =
       (uint64_t)*(uint32_t *)(&uStack00000000000001d4 + lVar13);
  *(uint64_t *)(auStackX_18 + lVar13 + 0x18) = (uint64_t)((-0x776f0063 - uVar37) * -0x1e88f09d);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1560) =
       ~((-0x1ffffff880b - in_R10) * 2 | (uint64_t)(-0x1ffffff880b - in_R10 < 0));
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x15e0) = 0x7dbf6a7b - uVar37;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) = 0x72ee512d;
  *(uint64_t *)(&uStack00000000000000b8 + lVar13) = uVar14 >> 0x20;
  *(uint32_t *)(auStackX_18 + lVar13 + 0x48) = uVar24 - 6;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588) = uVar17 ^ uVar49;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x40) = (uint64_t)uVar24;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x78) = param_2;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x80) = uVar14;
  if (uVar14 >> 0x20 == 0) {
    uVar14 = (uVar14 & 0xffffffff) / (uint64_t)*(uint32_t *)(&uStack00000000000000b0 + lVar13);
  }
  else {
    uVar14 = uVar14 / *(uint64_t *)(&uStack00000000000000b0 + lVar13);
  }
  *(bool *)((int64_t)register0x00000020 + lVar13 + 0x15b0) =
       *(int *)((int64_t)register0x00000020 + lVar13 + 0x15d8) != 1;
  uVar11 = 0x11;
  if (uVar12 < 0x11) {
    uVar11 = uVar12;
  }
  if (*(int *)((int64_t)register0x00000020 + lVar13 + 0x1590) !=
      *(int *)(auStackX_18 + lVar13 + 0x2c)) {
    uVar11 = 0;
  }
  *(uint32_t *)(auStackX_18 + lVar13 + 0x2c) = uVar11;
  bVar20 = (uint8_t)in_R10 & 0x1f;
  *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x1598) = 0xb76a9124;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x58) = uVar14;
  uVar17 = uVar14 | 3;
  if ((uint64_t)(0x4134779d << bVar20 | 0x4134779dU >> 0x20 - bVar20) <=
      (uint64_t)(int64_t)(int)(uVar37 ^ 0x83f2316d)) {
    uVar17 = uVar14 * 8;
  }
  uVar14 = uVar17 + 0x3f;
  uVar12 = (uint32_t)uVar14 & 0x3f;
  uVar37 = (uint32_t)uVar49 & uVar12;
  *(uint64_t *)(&uStack00000000000000a0 + lVar13) = uVar49;
  uVar22 = *(uint64_t *)(&uStack00000000000000c8 + lVar13);
  uVar38 = *(uint64_t *)(auStackX_18 + lVar13 + 0x50);
  *(int64_t *)(auStackX_18 + lVar13 + 0x30) = in_R10;
  uVar41 = (uVar14 ^ 0xffffffffffffffc0) & uVar49;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) = uVar41;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x70) = (uVar38 & uVar41) * -0x8001624d649;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x20) = -uVar17 - 0x40 ^ 0xffffffc0;
  uVar11 = (uint32_t)(-uVar17 - 0x40) & 0x3f;
  uVar41 = *(uint64_t *)(&uStack00000000000000a8 + lVar13);
  uVar35 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a8);
  *(uint64_t *)(auStackX_18 + lVar13 + 0x50) = uVar38;
  uVar27 = *(uint64_t *)(&uStack00000000000000c8 + lVar13);
  uVar36 = uVar14 & 0xffffffffffffffc0 ^ *(uint64_t *)(auStackX_18 + lVar13 + 0x38);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a8) =
       (uint64_t)((uint32_t)uVar41 & uVar11) * -0x800000010da;
  uVar17 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588);
  uVar16 = (uVar12 | uVar35) ^ uVar38;
  lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x70);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588) =
       ((uVar35 ^ uVar14 ^ 0x3f) & uVar38) * -0x1624c56f;
  *(uint64_t *)(&uStack00000000000000a8 + lVar13) =
       (uint64_t)((uint32_t)uVar22 & uVar37) * 0x800000010d7;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) =
       *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) & uVar27;
  *(int64_t *)(auStackX_18 + lVar13 + 0x38) =
       4L << ((uint8_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1578) & 0x3f);
  lVar45 = (1L << ((char)*(uint64_t *)(&uStack00000000000000c0 + lVar13) -
                   (char)*(uint32_t *)(auStackX_18 + lVar13) & 0x3fU)) +
           *(int64_t *)(&uStack00000000000000d0 + lVar13);
  bVar20 = *(uint32_t *)(auStackX_18 + lVar13 + 0x48) < 0xfffffffd ^
           *(uint8_t *)((int64_t)register0x00000020 + lVar13 + 0x15b0);
  if (*(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x15e0) <=
      ((uint32_t)(*(int *)(auStackX_18 + lVar13 + 8) - *(int *)(auStackX_18 + lVar13 + 0x30)) >> 1 |
      (uint32_t)((*(int *)(auStackX_18 + lVar13 + 8) - *(int *)(auStackX_18 + lVar13 + 0x30) & 1U) != 0)
      << 0x1f) * 0x3f63b09b) {
    bVar20 = *(uint8_t *)((int64_t)register0x00000020 + lVar13 + 0x15b0) |
             *(uint32_t *)(auStackX_18 + lVar13 + 0x48) < 0xfffffffd;
  }
  uVar42 = 4L << ((uint8_t)*(int *)(auStackX_18 + lVar13 + 0x2c) & 0x3f);
  if (*(int *)(auStackX_18 + lVar13 + 0x2c) == 0) {
    uVar42 = 0;
  }
  uVar46 = uVar16 * -0x800000010d7;
  if ((int64_t)(uint64_t)*(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) <=
      (int64_t)*(int *)((int64_t)register0x00000020 + lVar13 + 0x1598)) {
    uVar46 = uVar16 | 0xfffff7ffffffef29;
  }
  uVar25 = uVar14 ^ 0xffffffffffffffc0 | *(uint64_t *)(&uStack00000000000000a0 + lVar13);
  uVar16 = uVar25 + *(uint64_t *)(auStackX_18 + lVar13 + 0x50);
  if (*(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d0) < 0x942a559f) {
    uVar16 = *(uint64_t *)(auStackX_18 + lVar13 + 0x50) & uVar25;
  }
  uVar25 = 0;
  uVar14 = uVar46 + ((*(uint64_t *)(auStackX_18 + lVar13 + 0x20) | uVar49) & uVar27) *
                    *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1560) +
           uVar16 * 0x8001624d647 +
           (uVar17 ^ uVar11) * -0x800000010d8 + lVar15 +
           (uint64_t)((uint32_t)uVar38 & uVar37) * -0x800000010d7 +
           (uVar41 & uVar14 & 0xffffffffffffffc0) * -0x800000010d6 +
           *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588) +
           (uVar36 & 0xffffffff) * 0x10d9 +
           ((uVar36 & 0xffffffff) * 0x800 + (uVar36 >> 0x20) * 0x10d9 << 0x20) +
           ((((uVar14 | 0xffffffffffffffc0) ^ uVar35) & uVar27) +
           ((uVar14 | 0xffffffffffffffc0 | uVar35) ^ uVar38)) * -2;
  uVar17 = uVar14 + *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) * 2;
  if (*(uint64_t *)(auStackX_18 + lVar13 + 0x18) <
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0)) {
    uVar17 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) * 2 | uVar14;
  }
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d0) = uVar17;
  uVar17 = (1L << ((uint8_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1578) & 0x3f)) +
           0x3fU & 0xffffffffffffffc0;
  *(uint32_t *)(auStackX_18 + lVar13 + 0x20) = (uint32_t)bVar20;
  *(uint64_t *)(auStackX_18 + lVar13 + 0x70) = uVar17;
  if (bVar20 != 0) {
    uVar17 = 0;
  }
  bVar51 = *(int *)((int64_t)register0x00000020 + lVar13 + 0x1580) != 1;
  if (bVar51) {
    lVar45 = 0;
  }
  *(int64_t *)(auStackX_18 + lVar13 + 0x18) = lVar45;
  uVar22 = *(uint64_t *)(auStackX_18 + lVar13 + 0x40);
  uVar14 = *(uint64_t *)(auStackX_18 + lVar13 + 0x80);
  if (!bVar51) {
    uVar38 = uVar14;
    if (*(int64_t *)(&uStack00000000000000b8 + lVar13) == 0) {
      uVar38 = uVar14 & 0xffffffff;
    }
    uVar25 = (uVar38 / *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x234)) * 0xc + 0x3f &
             0xffffffffffffffc0;
  }
  lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x30);
  uVar12 = (uint32_t)lVar15;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) =
       (uint64_t)((uVar12 + 0xa22303b4) * 0x1000 | uVar12 + 0xa22303b4 >> 0x14);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1560) = (uint64_t)(0xb51e5320 - uVar12);
  bVar20 = (uint8_t)lVar15 & 0x1f;
  *(uint64_t *)(&uStack00000000000000a0 + lVar13) = (uVar14 >> 10) + 2;
  *(IMAGE_DOS_HEADER **)((int64_t)register0x00000020 + lVar13 + 0x1598) =
       &IMAGE_DOS_HEADER_7fffa4770000;
  lVar45 = 0x4f78;
  if (6 < (int)uVar22) {
    lVar45 = 0x29678;
  }
  *(uint64_t *)(auStackX_18 + lVar13 + 8) = uVar17 + uVar25;
  uVar41 = ~uVar42;
  uVar35 = lVar45 + uVar14;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15e0) = uVar35 - uVar42;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) = uVar35 | uVar42;
  *(uint64_t *)(&uStack00000000000000c8 + lVar13) = uVar42;
  uVar49 = uVar35 ^ *(uint64_t *)(&uStack00000000000000c8 + lVar13);
  uVar17 = *(uint64_t *)(&uStack00000000000000c8 + lVar13);
  *(uint64_t *)(auStackX_18 + lVar13 + 0x48) = uVar35 ^ uVar41;
  *(uint64_t *)(auStackX_18 + lVar13) = 0xf14aff89;
  *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588) = 0x1ff7df49508 - lVar15;
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15b0) =
       ~uVar35 & *(uint64_t *)(&uStack00000000000000c8 + lVar13);
  *(uint64_t *)(&uStack00000000000000c0 + lVar13) = (uint64_t)(uVar12 ^ 0x365b2da8);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) = uVar35 & 0x50f37448;
  bVar32 = (uint8_t)lVar15 & 0x1f;
  lVar15 = *(int64_t *)(&uStack00000000000000a0 + lVar13);
  uVar38 = *(int64_t *)(&uStack00000000000000c8 + lVar13) - 1;
  if (((uVar12 + 0xf123ef1c) * 0x20 | uVar12 + 0xf123ef1c >> 0x1b) != 0xd1bf6757) {
    uVar38 = uVar41;
  }
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1598) = (uint64_t)(uVar12 + 0xd46c86f5);
  uVar14 = (uVar14 / 3 + lVar15) * 0x10 + 0x3f & 0xffffffffffffffc0;
  lVar15 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c8);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) =
       *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
  *(uint64_t *)(auStackX_18 + lVar13 + 0x80) =
       (uint64_t)~(0x6dddd24dU >> bVar20 | 0x6dddd24d << 0x20 - bVar20);
  if (lVar15 == 0) {
    uVar14 = 0;
  }
  uVar27 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15e0);
  if ((int64_t)(int)((uVar12 ^ 0xb764f13e) * -0x630170d7) <
      (int64_t)(uint64_t)(0x47b13eb9U >> bVar32 | 0x47b13eb9 << 0x20 - bVar32)) {
    uVar27 = uVar17 & uVar35;
  }
  uVar16 = uVar41;
  if ((int64_t)(int)((uVar12 + 0xc4dfa3e8) * 2 | (uint32_t)((int)(uVar12 + 0xc4dfa3e8) < 0)) ==
      (uint64_t)
      ((uVar12 + 0xf14ad682 >> 1 | (uint32_t)((uVar12 + 0xf14ad682 & 1) != 0) << 0x1f) + 0x7493fa45)) {
    uVar16 = *(uint64_t *)(&uStack00000000000000c8 + lVar13);
  }
  uVar42 = ~uVar14;
  lVar15 = (uVar49 & 0x50f37448 & uVar42) *
           *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588) =
       (uVar38 & 0x50f37448 & uVar35 & uVar42) * -0x820beb5a;
  uVar38 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0);
  uVar46 = uVar14 ^ *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568);
  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) = uVar38 & uVar14;
  uVar36 = uVar27 & uVar42 & 0xffffffffaf0c8bb7;
  if ((uint64_t)((uVar12 + 0x65593408 ^ 0x7b1b9311) + 0xe1346c55) <=
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590)) {
    uVar36 = uVar27 & uVar42 | 0xffffffffaf0c8bb7;
  }
  lVar26 = ((*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15b0) ^ uVar42) & 0x50f37448)
           * 0x820beb5a +
           (*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) & uVar41) * 0x1f6d9169 +
           (uVar49 | 0x50f37448 | uVar14) * 0x222bed82 +
           (*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) & uVar14 | 0x50f37448) *
           -0x222bed7f + ((uVar17 & uVar35 ^ uVar14) & 0x50f37448) * -0x820beb5b +
           ((uVar46 & 0x50f37448) -
           (*(uint64_t *)(auStackX_18 + lVar13 + 0x48) & 0x50f37448 & uVar42)) * 0x820beb59 +
           (uVar16 & uVar38 & uVar14) * 0x629e59f1;
  lVar45 = lVar26 + lVar15;
  if (*(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1598) <
      *(int64_t *)(&uStack00000000000000c0 + lVar13)) {
    lVar45 = lVar15 * lVar26;
  }
  uVar14 = uVar36 * 0x222bed83 +
           (uVar46 & 0xffffffffaf0c8bb7) * -0x222bed81 +
           *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588) + lVar45 +
           ((*(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a8) +
             *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a0) +
             (~(uVar14 | *(uint64_t *)(&uStack00000000000000c8 + lVar13) | uVar35) & 0x50f37448) *
             -4 + *(int64_t *)(auStackX_18 + lVar13 + 0x38) +
             *(int64_t *)(auStackX_18 + lVar13 + 0x58) * 3 +
             *(int64_t *)(&uStack00000000000000a8 + lVar13) +
            *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d0)) -
           (uVar49 & 0xffffffffaf0c8bb7 & uVar14));
  uVar17 = uVar14 & *(uint64_t *)(auStackX_18 + lVar13 + 0x18);
  if (*(int64_t *)(auStackX_18 + lVar13 + 0x80) <
      (int64_t)
      (uint64_t)
      ((uint32_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1560) ^ 0xcbecb1ef)) {
    uVar17 = *(uint64_t *)(auStackX_18 + lVar13 + 0x18) + uVar14;
  }
  uVar17 = uVar17 + *(int64_t *)(auStackX_18 + lVar13 + 8);
  if (uVar17 < (uint64_t)(int64_t)*(short *)(auStackX_18 + lVar13)) {
    uVar14 = *(uint64_t *)(auStackX_18 + lVar13 + 0x30);
    uVar11 = (uint32_t)uVar14;
    bVar20 = (uint8_t)uVar14;
    *(uint32_t *)
     (&uStack00000000000000e0 +
     (uint64_t)(uint16_t)(-0x7fa4 << (bVar20 & 0xf) | 0x805cU >> 0x10 - (bVar20 & 0xf)) + lVar13) = 1
    ;
    iVar21 = *(int *)(auStackX_18 + lVar13 + 0x60);
    if (uVar17 == 0) {
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = 0;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = 0;
      puVar28 = (uint8_t *)((int64_t)register0x00000020 + lVar13 + 0x3c0);
      *(uint8_t *)((int64_t)register0x00000020 + lVar13 + 0x3c0) = 0;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) = 0;
      uVar38 = 0;
      uVar17 = 0;
      lVar45 = 0;
      lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x78);
      uVar22 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570);
LAB_7fffa5004584:
      *(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x15a0) = puVar28;
      uVar39 = (short)uVar14 - 0x945;
      iVar44 = *(int *)((int64_t)register0x00000020 + lVar13 + 0x278);
      uVar41 = (uint64_t)(uint16_t)((uVar39 * 0x800 | uVar39 >> 5) * -0x20a7);
      uVar5 = *(uint64_t *)(&uStack00000000000001d4 + lVar13);
      uVar8 = *(uint64_t *)(&uStack00000000000001d8 + lVar13);
      uVar9 = *(uint64_t *)(&uStack00000000000001e0 + lVar13);
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe70) =
           *(uint64_t *)(&uStack00000000000001cc + lVar13);
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe78) = uVar5;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe7c) = uVar8;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe84) = uVar9;
      *(uint64_t *)(&uStack00000000000000a8 + lVar13) = uVar41;
      *(int64_t *)(&uStack00000000000000e0 + uVar41 + lVar13) = lVar15 + 1;
      *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xe98) = (uint32_t)(iVar44 == 1);
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x3e0) = (uint8_t  [16])0x0;
      if (lVar15 + 1 == 0) {
        *(uint32_t *)(&uStack00000000000001e8 + lVar13) = 0;
      }
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3d0) = uVar22;
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x3f0) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x400) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x410) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x420) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x430) = (uint8_t  [16])0x0;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x440) = 0;
      *(uint64_t *)(lVar45 + 0x15e4) = 0;
      *(uint32_t *)(lVar45 + 0x15ec) = 0;
      *(uint32_t *)(&uStack00000000000000e0 + lVar13) = 1;
      *(uint32_t *)(lVar45 + 0x15f8) = 8;
      *(uint64_t *)(lVar45 + 0x15f0) = 0x400000001;
      *(uint32_t *)(lVar45 + 0x808) = 0;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x400) = 0xc2b2ae3d27d4eb4f;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x380) = 0;
      *(uint64_t *)(&uStack00000000000000e0 + (uint64_t)(uint32_t)(iVar21 * -0x245be0f0) + lVar13) =
           0x61c8864e7a143579;
      *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x378) = 0;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3f8) =
           (uVar14 | 1) * -0x22492514d40e44e;
      *(uint64_t *)(auStackX_18 + lVar13 + 0x58) = uVar14 | 1;
      *(uint64_t *)(auStackX_18 + lVar13 + 0x80) = (uint64_t)(uint32_t)(iVar21 * -0x245be0f0);
      if (((int)*(uint64_t *)(auStackX_18 + lVar13 + 0x40) == *(int *)(auStackX_18 + lVar13 + 100)
          ) || ((*(int *)((int64_t)register0x00000020 + lVar13 + 0x15d8) == 1 &&
                ((int)*(uint64_t *)(auStackX_18 + lVar13 + 0x40) - 3U <
                 (~(uVar11 ^ 0x7f9f) & 0xffff))))) {
        lVar15 = 0;
      }
      else {
        lVar15 = 4L << ((&uStack00000000000001d0)[lVar13] & 0x3f);
      }
      uVar41 = (uint64_t)(-(int)uVar17 & 0x3f);
      uVar14 = uVar17 + uVar41;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) =
           (uint64_t)(0x6248d0f - uVar11 & 0xffff);
      if ((uVar11 + 0x11b5d7bb ^ 0xe07a5b9) + 0x58157313 <
          (0xe75af2c << (bVar20 & 0x1f) | 0xe75af2cU >> 0x20 - (bVar20 & 0x1f)) * 0x108554bb) {
        *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xd9c) = 2;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) = uVar38 & 0xffffffffffffffc0;
        *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xd88) = 2;
        puVar18 = (uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xd90);
        uVar37 = 0xb4723815U >> (bVar20 & 0x1f) | -0x4b8dc7eb << 0x20 - (bVar20 & 0x1f);
        *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0xd80) =
             (int64_t)
             (short)((0xee61U >> (bVar20 & 0xf) | -0x119f << 0x10 - (bVar20 & 0xf)) + 0x6782) +
             0x7fffa5789aa2;
      }
      else {
        *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xd88) = 2;
        *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xd9c) = 2;
        uVar37 = 0x9c4d1895 - (uVar11 + 0x9ee6f19);
        *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0xd80) =
             (int64_t)(short)(0xee9fU >> (bVar20 & 0xf) | -0x1161 << 0x10 - (bVar20 & 0xf)) +
             0x7fffa578421d;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) = uVar38 & 0xffffffffffffffc0;
        puVar18 = (uint64_t *)
                  (&uStack00000000000000e0 +
                  (uint64_t)(~(uint32_t)(uint16_t)((short)iVar21 * -0x68db) & 0xffff) + lVar13);
      }
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) = (uint64_t)uVar37;
      uVar39 = ((uint16_t)uVar37 ^ 0x2051) * (short)iVar21;
      *(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0xd78) =
           &UNK_7fffa5793097 + (int)(0xb68dd63c - uVar37 ^ uVar11);
      *(uint32_t *)
       (&uStack00000000000000e0 +
       *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) + lVar13) = 2;
      *puVar18 = 0;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar17;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar17;
      *(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0xd70) =
           &DAT_7fffa578b338 + (short)(uVar39 * 0x80 | uVar39 >> 9);
      *(uint32_t *)(&uStack00000000000000e0 + (uint64_t)(uVar11 - 0x72a7) + lVar13) = 0;
      *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xe34) = 0;
      *(uint32_t *)
       (&uStack00000000000000e0 +
       (uint64_t)(uint16_t)~(-0x198 << (bVar20 & 0xf) | 0xfe68U >> 0x10 - (bVar20 & 0xf)) + lVar13) =
           0;
      *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xda0) =
           *(uint32_t *)(auStackX_18 + lVar13 + 0x2c);
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe68) = 0;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) = uVar38;
      if (uVar38 < uVar14) {
        *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xde0) =
             (uint8_t  [16])0x0;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar17;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xdf0) = 0;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) = uVar38 & 0xffffffffffffffc0;
        puVar28 = (uint8_t *)((int64_t)register0x00000020 + lVar13 + 0x3c0);
        uVar41 = uVar17;
        uVar49 = uVar17;
LAB_7fffa5004c45:
        uVar36 = uVar17;
LAB_7fffa5004d84:
        uVar38 = uVar38 & 0xffffffffffffffc0;
        uVar17 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0);
        if (auStackX_18[lVar13 + 0x20] == '\0') {
          uVar35 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568);
          if (uVar35 < uVar14) {
            uVar38 = uVar35 & 0xffffffffffffffc0;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar49;
            uVar16 = (uint64_t)(-(int)uVar49 & 0x3f);
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) = uVar38;
            uVar27 = uVar16 + uVar49;
            uVar11 = (uint32_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
            if (uVar27 <= uVar35) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar27;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar27;
              uVar14 = *(uint64_t *)(auStackX_18 + lVar13 + 0x70);
              uVar36 = uVar49;
              if (uVar16 != 0) {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar27;
                uVar36 = uVar27;
              }
              *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 1;
              uVar41 = uVar27;
              uVar49 = uVar27;
              uVar35 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0);
              goto LAB_7fffa50059fc;
            }
            bVar51 = false;
            uVar36 = uVar49;
            uVar14 = 0;
          }
          else {
            uVar11 = (uint32_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
            uVar14 = *(uint64_t *)(auStackX_18 + lVar13 + 0x70);
            uVar35 = uVar17;
LAB_7fffa50059fc:
            uVar17 = uVar35 - uVar14;
            if (uVar17 < uVar41) {
              *puVar28 = 1;
              bVar51 = true;
              uVar17 = uVar35;
              uVar14 = 0;
            }
            else {
              if (uVar17 < uVar36) {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar17;
                uVar36 = uVar17;
              }
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar17;
              if (uVar17 < uVar38) {
                uVar35 = uVar38 - uVar17;
                if (uVar14 <= uVar38 - uVar17) {
                  uVar35 = uVar14;
                }
                *(uint64_t *)((int64_t)&uStack_50 + lVar13) = 0x7fffa5005ab5;
                FUN_7fffa4ecf8e0(uVar17,0,uVar35);
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) = uVar17;
              }
              bVar51 = false;
              uVar14 = uVar17;
            }
          }
          if ((*(int *)(auStackX_18 + lVar13 + 0x60) * 0x20280000 |
              (uint32_t)(*(int *)(auStackX_18 + lVar13 + 0x60) * -0x363defec) >> 0xf) * (uVar11 | 1) <
              ~((uVar11 ^ 0x7a54f649) << 10 | (uVar11 ^ 0x7a54f649) >> 0x16) -
              (uint32_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30)) {
            uVar38 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xdd0);
            puVar23 = (uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xda8);
            uVar27 = uVar38 << 0x28 | uVar38 >> 0x18;
            uVar35 = uVar38 << 0xf | uVar38 >> 0x31;
            uVar37 = 6;
            if (*(uint32_t *)(&uStack00000000000001d8 + lVar13) < 6) {
              uVar37 = *(uint32_t *)(&uStack00000000000001d8 + lVar13);
            }
            uVar40 = *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xdd8);
          }
          else {
            uVar38 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xdd0);
            uVar35 = uVar38 << 0xf | uVar38 >> 0x31;
            uVar37 = 6;
            if (*(uint32_t *)(&uStack00000000000001d8 + lVar13) < 6) {
              uVar37 = *(uint32_t *)(&uStack00000000000001d8 + lVar13);
            }
            uVar40 = *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xdd8);
            uVar24 = ((uint32_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30) ^ 0xeff60983) * -0x438bd669
            ;
            bVar20 = (uint8_t)uVar11 & 0x1f;
            puVar23 = (uint64_t *)
                      (&uStack00000000000000e0 +
                      (uint64_t)(uVar24 >> bVar20 | uVar24 << 0x20 - bVar20) + lVar13);
            uVar27 = uVar38 << 0x28 | uVar38 >> 0x18;
          }
          uVar11 = 4;
          if (4 < uVar37) {
            uVar11 = uVar37;
          }
          *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xda4) =
               (int)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1578) - uVar11;
          *puVar23 = uVar14;
          uVar38 = (uVar35 ^ uVar27 ^ uVar38) * -0x604de39ae16720db;
          uVar14 = (uint64_t)uVar40;
          uVar14 = (uVar14 << 0xf ^ uVar14 ^ (uVar14 << 0x28 | (uint64_t)(uVar40 >> 0x18))) *
                   -0x604de39ae16720db;
          uVar14 = ((uint32_t)(uVar14 >> 0x23) + 4 ^ uVar14) * -0x604de39ae16720db;
          uVar38 = ((uVar38 >> 0x23) + 8 ^ uVar38) * -0x604de39ae16720db;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xdd0) =
               uVar38 ^ uVar14 ^ (uVar38 ^ uVar14) >> 0x1c;
LAB_7fffa5005de5:
          auVar2 = *(uint8_t (*) [16])(&uStack00000000000001cc + lVar13);
          *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xe7c) =
               *(uint8_t (*) [16])(&uStack00000000000001d8 + lVar13);
          *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xe70) = auVar2;
          *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffc0;
          puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
          if (bVar51) goto LAB_7fffa500443d;
        }
        else {
          if (6 < (int)*(uint64_t *)(auStackX_18 + lVar13 + 0x40)) {
            uVar38 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568);
            if (uVar38 < uVar14) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar49;
              iVar21 = (int)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
              bVar20 = (uint8_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) & 0x1f;
              uVar11 = *(int *)(auStackX_18 + lVar13 + 0x30) + 0x359dU << bVar20 |
                       *(int *)(auStackX_18 + lVar13 + 0x30) + 0x359dU >> 0x20 - bVar20;
              uVar35 = (uint64_t)(-(int)uVar49 & 0x3f);
              uVar14 = uVar35 + uVar49;
              *(uint64_t *)
               (&uStack00000000000000e0 + (uint64_t)(uVar11 << 0x18 | uVar11 >> 8) + lVar13) =
                   uVar38 & 0xffffffffffffffc0;
              if (uVar14 <= uVar38) {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar14;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar14;
                uVar36 = uVar49;
                if (uVar35 != 0) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar14;
                  uVar36 = uVar14;
                }
                uVar41 = uVar14;
                uVar49 = uVar14;
                goto LAB_7fffa500595e;
              }
              *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xe00) =
                   (uint8_t  [16])0x0;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe10) = 0;
              *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xe18) =
                   (uint8_t  [16])0x0;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar49;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) =
                   uVar38 & 0xffffffffffffffc0;
              bVar51 = false;
              uVar14 = 0;
              uVar36 = uVar49;
            }
            else {
              iVar21 = (int)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
LAB_7fffa500595e:
              uVar14 = uVar17 - 0x400;
              *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 2;
              if (uVar14 < uVar41) {
                *puVar28 = 1;
                bVar51 = true;
                uVar14 = 0;
              }
              else {
                if (uVar14 < uVar36) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar14;
                  uVar36 = uVar14;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar14;
                bVar51 = false;
                uVar17 = uVar14;
              }
              uVar38 = uVar17 - 0xc0;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe00) = uVar14;
              if (uVar38 < uVar41) {
                *puVar28 = 1;
                bVar51 = true;
                uVar38 = 0;
              }
              else {
                if (uVar38 < uVar36) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
                  uVar36 = uVar38;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar38;
                uVar17 = uVar38;
              }
              uVar14 = uVar17 - 0x100;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe08) = uVar38;
              if (uVar14 < uVar41) {
                *puVar28 = 1;
                bVar51 = true;
                uVar14 = 0;
                uVar38 = uVar17;
              }
              else {
                if (uVar14 < uVar36) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar14;
                  uVar36 = uVar14;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar14;
                uVar38 = uVar14;
              }
              uVar17 = uVar38 - 0x80;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe10) = uVar14;
              if (uVar17 < uVar41) {
                *puVar28 = 1;
                bVar51 = true;
                uVar17 = uVar38;
                uVar14 = 0;
              }
              else {
                if (uVar17 < uVar36) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar17;
                  uVar36 = uVar17;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar17;
                uVar14 = uVar17;
              }
              uVar39 = 0x83b1 - (short)*(uint32_t *)(auStackX_18 + lVar13 + 0x30);
              bVar20 = (uint8_t)iVar21 & 0xf;
              uVar38 = uVar17 - 0x8040;
              *(uint64_t *)
               (&uStack00000000000000e0 +
               (uint64_t)(uint16_t)(uVar39 << bVar20 | uVar39 >> 0x10 - bVar20) + lVar13) = uVar14;
              if (uVar38 < uVar41) {
                *puVar28 = 1;
                bVar51 = true;
                uVar38 = 0;
              }
              else {
                if (uVar38 < uVar36) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
                  uVar36 = uVar38;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar38;
                uVar17 = uVar38;
              }
              uVar14 = uVar17 - 0x1c080;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe20) = uVar38;
              if (uVar14 < uVar41) {
                *puVar28 = 1;
                bVar51 = true;
                uVar14 = 0;
              }
              else {
                if (uVar14 < uVar36) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar14;
                  uVar36 = uVar14;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar14;
                uVar17 = uVar14;
              }
            }
            *(uint64_t *)
             (&uStack00000000000000e0 +
             (uint64_t)((0xb663 - iVar21) * -0x243 - 0xa55U & 0xffff) + lVar13) = uVar14;
            goto LAB_7fffa5005de5;
          }
          uVar22 = *(uint64_t *)(&uStack00000000000001cc + lVar13);
          uVar5 = *(uint64_t *)(&uStack00000000000001d4 + lVar13);
          uVar8 = *(uint64_t *)(&uStack00000000000001e0 + lVar13);
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe7c) =
               *(uint64_t *)(&uStack00000000000001d8 + lVar13);
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe84) = uVar8;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe70) = uVar22;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xe78) = uVar5;
        }
        uVar14 = *(uint64_t *)(auStackX_18 + lVar13 + 0x50);
        uVar14 = (uVar14 << 4 | uVar14 >> 0x3c) ^ (uVar14 << 0x36 | uVar14 >> 10) ^ uVar14;
        uVar14 = (uVar14 << 0x2c | uVar14 >> 0x14) ^ (uVar14 << 8 | uVar14 >> 0x38) ^ uVar14;
        iVar21 = *(int *)((int64_t)register0x00000020 + lVar13 + 0x3c8);
        if (iVar21 < 2) {
          uVar11 = (uint32_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
          lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x10);
          if (iVar21 == 1) {
LAB_7fffa5005eff:
            *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 2;
            iVar21 = 2;
            goto LAB_7fffa5005f13;
          }
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar49;
          uVar35 = (uint64_t)(-(int)uVar49 & 0x3f);
          uVar38 = uVar35 + uVar49;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) =
               *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) & 0xffffffffffffffc0;
          if (uVar38 <= *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568)) {
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar38;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar38;
            if (uVar35 != 0) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
              uVar49 = uVar38;
            }
            uVar36 = uVar49;
            uVar41 = uVar38;
            uVar49 = uVar38;
            goto LAB_7fffa5005eff;
          }
          uVar38 = 0;
          uVar36 = uVar49;
        }
        else {
          uVar11 = (uint32_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
          lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x10);
LAB_7fffa5005f13:
          uVar38 = lVar15 * 8 + 0x3fU & 0xffffffffffffffc0;
          if (uVar38 != (~(*(int *)(auStackX_18 + lVar13 + 0x30) - 0x8064U) << 0x19 |
                        ~(*(int *)(auStackX_18 + lVar13 + 0x30) - 0x8064U) >> 7)) {
            uVar38 = uVar17 - uVar38;
            if (uVar41 <= uVar38) {
              if (uVar38 < uVar36) {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
                uVar36 = uVar38;
              }
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar38;
              uVar17 = uVar38;
              goto LAB_7fffa5005f81;
            }
            **(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 1;
          }
          uVar38 = 0;
        }
LAB_7fffa5005f81:
        uVar14 = uVar14 ^ (uVar14 << 0x10 | uVar14 >> 0x30) ^ (uVar14 << 0x18 | uVar14 >> 0x28);
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x498) = uVar38;
        if (*(int *)((int64_t)register0x00000020 + lVar13 + 0x1580) == 1) {
          *(uint64_t *)(&uStack00000000000000c8 + lVar13) = uVar41;
          if (iVar21 < 2) {
            uVar40 = -(int)uVar49 & 0x3f;
            uVar38 = uVar49 + uVar40;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar49;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) =
                 *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) & 0xffffffffffffffc0
            ;
            uVar36 = uVar49;
            if (uVar38 <= *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568)) {
              uVar37 = (uint32_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30);
              uVar24 = (uVar37 ^ 0x6618bd67) + 0x99e7c2fc;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar38;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar38;
              bVar20 = (uint8_t)uVar11 & 0x1f;
              if (uVar40 != (uVar24 << bVar20 | uVar24 >> 0x20 - bVar20)) {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
                uVar36 = uVar38;
              }
              *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 2;
              *(uint64_t *)(&uStack00000000000000c8 + lVar13) = uVar38;
              uVar49 = uVar38;
              goto LAB_7fffa5006042;
            }
            uVar38 = 0;
            uVar37 = (uint32_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30);
          }
          else {
            uVar37 = (uint32_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30);
LAB_7fffa5006042:
            uVar38 = *(int64_t *)(&uStack00000000000000d0 + lVar13) + 0x3fU & 0xffffffffffffffc0;
            if (uVar38 != 0) {
              uVar38 = uVar17 - uVar38;
              if (*(uint64_t *)(&uStack00000000000000c8 + lVar13) <= uVar38) {
                if (uVar38 < uVar36) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
                  uVar36 = uVar38;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar38;
                uVar17 = uVar38;
                goto LAB_7fffa50060a3;
              }
              **(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 1;
            }
            uVar38 = 0;
          }
LAB_7fffa50060a3:
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x510) = uVar38;
          *(uint64_t *)((int64_t)&uStack_50 + lVar13) = 0x7fffa50060ba;
          FUN_7fffa4ecf8e0(uVar38,0,*(uint64_t *)(&uStack00000000000000d0 + lVar13));
          iVar21 = *(int *)((int64_t)register0x00000020 + lVar13 + 0x3c8);
          bVar20 = (uint8_t)uVar37;
          if (iVar21 < 2) {
            if (iVar21 == 1) {
              uVar38 = uVar49;
LAB_7fffa5006144:
              *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 2;
              iVar21 = 2;
              uVar49 = uVar38;
              goto LAB_7fffa5006155;
            }
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar49;
            uVar41 = (uint64_t)(-(int)uVar49 & 0x3f);
            uVar38 = uVar41 + uVar49;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) =
                 *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) & 0xffffffffffffffc0
            ;
            if (uVar38 <= *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568)) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar38;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar38;
              if (uVar41 != 0) {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
                uVar49 = uVar38;
              }
              *(uint64_t *)(&uStack00000000000000c8 + lVar13) = uVar38;
              uVar36 = uVar49;
              goto LAB_7fffa5006144;
            }
            uVar38 = 0;
            uVar36 = uVar49;
          }
          else {
LAB_7fffa5006155:
            uVar38 = *(int64_t *)(&uStack00000000000000d8 + lVar13) * 0xc + 0x3fU &
                     0xffffffffffffffc0;
            uVar39 = (uint16_t)(0x24e8 - uVar11);
            if (uVar38 != (-(uint32_t)(uint16_t)(uVar39 << 8 | uVar39 >> 8) - 0x1923 & 0xffff)) {
              uVar11 = 0x5fda7473 - uVar11 >> (bVar20 & 0x1f) |
                       0x5fda7473 - uVar11 << 0x20 - (bVar20 & 0x1f);
              uVar38 = uVar17 - uVar38;
              bVar51 = uVar38 < *(uint64_t *)(&uStack00000000000000c8 + lVar13);
              if ((~uVar11 << 1 | (uint32_t)(-1 < (int)uVar11)) !=
                  0x3fffffef -
                  (-0x6ab59e97 << (bVar20 & 0x1f) | 0x954a6169U >> 0x20 - (bVar20 & 0x1f))) {
                bVar51 = (int64_t)*(uint64_t *)(&uStack00000000000000c8 + lVar13) <=
                         (int64_t)uVar38;
              }
              if (!bVar51) {
                if (uVar38 < uVar36) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
                  uVar36 = uVar38;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar38;
                uVar17 = uVar38;
                goto LAB_7fffa5006224;
              }
              **(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 1;
            }
            uVar38 = 0;
          }
LAB_7fffa5006224:
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xd28) = uVar38;
          uVar39 = 0x6782 - (short)*(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
          bVar32 = (uint8_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) & 0x1f;
          *(uint32_t *)
           (&uStack00000000000000e0 +
           (uint64_t)
           ((int)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) + uVar37 +
           0x49713cbb) + lVar13) = 2;
          *(uint8_t **)
           (&uStack00000000000000e0 +
           (uint64_t)(uint16_t)(uVar39 >> (bVar20 & 0xf) | uVar39 << 0x10 - (bVar20 & 0xf)) + lVar13)
               = &UNK_7fffa578d9f8 +
                 (int)((0xeea21503 - uVar37 >> bVar32 | 0xeea21503 - uVar37 << 0x20 - bVar32) *
                      0x1620e293);
          uVar11 = (uint32_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
          iVar44 = *(int *)(auStackX_18 + lVar13 + 0x60);
          bVar20 = (uint8_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) & 0x1f;
          *(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x4f8) =
               &UNK_7fffa5793b18 +
               (int)(-uVar37 - 0x36c3a >> bVar20 | -uVar37 - 0x36c3a << 0x20 - bVar20);
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xd30) =
               *(uint64_t *)(&uStack00000000000000d8 + lVar13);
          *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x504) = 2;
          *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x518) = 0;
          *(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x4e8) =
               &UNK_7fffa578f36c + (int)((-0x69045910 - uVar11) * iVar44 + -0x7a43cc84);
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x508) = 0;
          lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x10);
          uVar41 = *(uint64_t *)(&uStack00000000000000c8 + lVar13);
        }
        bVar20 = (uint8_t)uVar11;
        if (*(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c8) != 0) {
          lVar45 = (*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570) >> 10) +
                   *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570) / 3 + 2;
          *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1558) = lVar45;
          if (iVar21 < 2) {
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar49;
            uVar37 = -(int)uVar49 & 0x3f;
            uVar38 = uVar49 + uVar37;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) =
                 *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) & 0xffffffffffffffc0
            ;
            uVar36 = uVar49;
            if (uVar38 <= *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568)) {
              uVar39 = 0x8063 - (short)*(uint32_t *)(auStackX_18 + lVar13 + 0x30);
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar38;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar38;
              if (uVar37 != (uint16_t)(uVar39 >> (bVar20 & 0xf) | uVar39 << 0x10 - (bVar20 & 0xf))) {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
                uVar36 = uVar38;
              }
              *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 2;
              iVar21 = 2;
              uVar49 = uVar38;
              uVar41 = uVar38;
              goto LAB_7fffa500645c;
            }
            uVar38 = 0;
          }
          else {
LAB_7fffa500645c:
            uVar38 = lVar45 * 0x10 + 0x3fU & 0xffffffffffffffc0;
            if (uVar38 != 0) {
              uVar38 = uVar17 - uVar38;
              if (uVar41 <= uVar38) {
                if (uVar38 < uVar36) {
                  *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
                  uVar36 = uVar38;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar38;
                uVar17 = uVar38;
                goto LAB_7fffa50064b3;
              }
              **(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 1;
            }
            uVar38 = 0;
          }
LAB_7fffa50064b3:
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1550) = uVar38;
        }
        uVar38 = uVar49;
        if (iVar21 < (int)(uint32_t)(uint16_t)((short)(*(int *)(auStackX_18 + lVar13 + 0x30) + -0xed62) *
                                        (short)(uVar11 | 1))) {
          if (0 < iVar21) {
            uVar49 = uVar36;
LAB_7fffa50065df:
            *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 3;
            iVar21 = 3;
            goto LAB_7fffa50065f0;
          }
          uVar35 = (uint64_t)(-(int)uVar49 & 0x3f);
          uVar41 = uVar49 + uVar35;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) =
               *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) & 0xffffffffffffffc0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar49;
          if (uVar41 <= *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568)) {
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar41;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar41;
            if (uVar35 != 0) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar41;
              uVar49 = uVar41;
            }
            uVar38 = uVar41;
            goto LAB_7fffa50065df;
          }
          uVar39 = (short)*(uint32_t *)(auStackX_18 + lVar13 + 0x30) + 0x7eaa;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x4d8) =
               *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570);
          *(uint64_t *)
           (&uStack00000000000000e0 +
           (uint64_t)(uint16_t)~(uVar39 << (bVar20 & 0xf) | uVar39 >> 0x10 - (bVar20 & 0xf)) + lVar13
           ) = 0;
          *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xea8) = 0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xee0) = 0;
          *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xeb0) =
               (uint8_t  [16])0x0;
        }
        else {
          uVar49 = uVar36;
LAB_7fffa50065f0:
          uVar35 = (uVar17 - *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570)) - 0x20;
          if (uVar35 < uVar41) {
            **(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 1;
            uVar35 = 0;
          }
          else {
            if (uVar35 < uVar49) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar35;
              uVar49 = uVar35;
            }
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar35;
            uVar17 = uVar35;
          }
          *(uint64_t *)
           (&uStack00000000000000e0 +
           (uint64_t)
           ((uVar11 | 1) * (0xed4d - *(int *)(auStackX_18 + lVar13 + 0x30)) - 0x1eee & 0xffff) +
           lVar13) = 0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x4a8) = uVar35;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xee0) = 0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x4d8) =
               *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570);
          *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0xea8) = 0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xeb8) = 0;
        }
        iVar44 = *(int *)(auStackX_18 + lVar13 + 0x60);
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xed8) = 0;
        if (*(int *)((int64_t)register0x00000020 + lVar13 + 0x228) == 1) {
          uVar37 = (uint32_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30);
          if (iVar21 < 3) {
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
            uVar40 = -(int)uVar38 & 0x3f;
            uVar41 = uVar40 + uVar38;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) =
                 *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x390) & 0xffffffffffffffc0;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar41;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar41;
            uVar49 = uVar38;
            if (uVar40 != 0) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar41;
              uVar49 = uVar41;
            }
            *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 3;
          }
          uVar17 = uVar17 - (1L << ((char)*(uint32_t *)
                                           ((int64_t)register0x00000020 + lVar13 + 0x22c) -
                                    (char)*(uint32_t *)
                                           ((int64_t)register0x00000020 + lVar13 + 0x230) & 0x3fU))
          ;
          if (uVar17 < uVar49) {
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar17;
            uVar49 = uVar17;
          }
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x520) = uVar17;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar17;
          *(uint64_t *)((int64_t)&uStack_50 + lVar13) = 0x7fffa5006764;
          FUN_7fffa4ecf8e0(uVar17,0);
          iVar21 = *(int *)((int64_t)register0x00000020 + lVar13 + 0x3c8);
        }
        else {
          uVar37 = (uint32_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30);
        }
        uVar14 = (uVar14 << 0x30 | uVar14 >> 0x10) ^ (uVar14 << 0x20 | uVar14 >> 0x20) ^ uVar14;
        *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xd48) =
             (uint8_t  [16])0x0;
        *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0xd38) =
             (uint8_t  [16])0x0;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xd58) = 0;
        *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x4d0) = lVar15;
        if (iVar21 < 3) {
          if ((int)((iVar44 * (uVar11 ^ 0xec16) ^ 0x28bd) & 0xffff) <= iVar21) {
LAB_7fffa50067c7:
            *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 3;
            goto LAB_7fffa50067d2;
          }
          uVar49 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398);
          uVar40 = -(int)uVar49 & 0x3f;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar49;
          uVar38 = uVar49 + uVar40;
          uVar41 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x390) &
                   0xffffffffffffffc0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) = uVar41;
          if (uVar38 <= *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x390)) {
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar38;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar38;
            if (uVar40 != (uVar37 + 0x715c1aeb) * -0x7114ba97 + uVar11) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar38;
              uVar49 = uVar38;
            }
            goto LAB_7fffa50067c7;
          }
          *(uint64_t *)
           (&uStack00000000000000e0 +
           ((uint64_t)((uVar11 | 1) * -0x60e1b167 ^ uVar37) ^ 0xa405d970) + lVar13) = 0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x4c0) = 0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) = uVar41;
          uVar17 = 0;
          uVar22 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15b8);
        }
        else {
LAB_7fffa50067d2:
          if (*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570) <
              *(uint64_t *)(&uStack00000000000000b0 + lVar13)) {
LAB_7fffa50068b2:
            uVar17 = 0;
          }
          else {
            uVar17 = uVar17 - lVar15;
            if (uVar17 < *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0)) {
              **(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 1;
              goto LAB_7fffa50068b2;
            }
            if (uVar17 < uVar49) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar17;
              uVar49 = uVar17;
            }
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar17;
          }
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x4b8) = uVar17;
          if (*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570) <
              *(uint64_t *)(&uStack00000000000000b0 + lVar13)) {
            uVar17 = 0;
            uVar22 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15b8);
          }
          else {
            uVar17 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) - lVar15;
            uVar22 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15b8);
            if (uVar17 < *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0)) {
              **(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 1;
              uVar17 = 0;
            }
            else {
              if (uVar17 < uVar49) {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar17;
                uVar49 = uVar17;
              }
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar17;
            }
          }
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x4c0) = uVar17;
          if (*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570) <
              *(uint64_t *)(&uStack00000000000000b0 + lVar13)) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) - lVar15;
            if (uVar17 < *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0)) {
              **(uint8_t **)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 1;
              uVar17 = 0;
            }
            else {
              if (uVar17 < uVar49) {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar17;
              }
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar17;
            }
          }
        }
        lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x68);
        if ((iVar44 * -0x8600000 | (uint32_t)(iVar44 * 0x233bcf7a) >> 0xc) - uVar11 == 0xc5a36e1) {
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x380) = 0;
          uVar38 = (*(int64_t *)(auStackX_18 + lVar13 + 0x78) + 0x568f61a0U) * 0x200000 |
                   *(int64_t *)(auStackX_18 + lVar13 + 0x78) + 0x568f61a0U >> 0x2b;
          *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x378) = 0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x4c8) = uVar17;
          *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x494) = 1;
          uVar40 = ((uVar11 + 0x3a71d98d) * 0x4000 | uVar11 + 0x3a71d98d >> 0x12) ^ uVar37;
        }
        else {
          uVar40 = 0xd25263ca - uVar11;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x4c8) = uVar17;
          uVar17 = *(uint64_t *)(auStackX_18 + lVar13 + 0x78);
          *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x378) = 0;
          iVar21 = *(int *)(auStackX_18 + lVar13 + 0x60);
          uVar24 = (uVar37 + 0xb3df069d) * 0xb7a905f;
          iVar44 = *(int *)(auStackX_18 + lVar13 + 0x60);
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x380) = 0;
          lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x68);
          uVar38 = ((iVar21 * 0x54edbb79 ^ 0x15aae555U) + uVar11) + uVar17;
          if ((int64_t)(uint64_t)(uVar24 >> (bVar20 & 0x1f) | uVar24 << 0x20 - (bVar20 & 0x1f)) <
              (int64_t)(int)~((uVar37 - uVar11) + 0xe91160f0)) {
            uVar38 = ~(((uVar11 + 0x4b558395) * 0x100000 | uVar11 + 0x4b558395 >> 0xc) ^ uVar37) ^
                     uVar17;
          }
          uVar38 = uVar38 << 0x15 | uVar38 >> 0x2b;
          *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x494) = 1;
        }
        uVar41 = (uint64_t)uVar40;
        uVar39 = ((short)uVar11 - (short)uVar37) + 0x7461;
        uVar11 = uVar40 + 0x9e704cf0 ^ 0xd06c36c3;
        bVar20 = (uint8_t)uVar40;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + -0x28) =
             (uint64_t)
             ((-0x5e20fd3c << (bVar20 & 0x1f) | 0xa1df02c4U >> 0x20 - (bVar20 & 0x1f)) * iVar44 +
             0xb30f8770);
        *(uint64_t *)((int64_t)&uStack_50 + lVar13) = 0x7fffa5006baa;
        uVar17 = (*(code *)((int64_t)(int)((uVar11 << 8 | uVar11 >> 0x18) - uVar37) +
                           0x7fffa5067afd))(uVar38,uVar22);
        uVar17 = (uVar17 << 0x18 | uVar17 >> 0x28) ^ (uVar17 << 0x16 | uVar17 >> 0x2a) ^ uVar17;
        uVar17 = (uVar17 << 0x2c | uVar17 >> 0x14) ^ (uVar17 << 0x30 | uVar17 >> 0x10) ^ uVar17;
        uVar17 = (uVar17 << 0x20 | uVar17 >> 0x20) ^ (uVar17 << 0x18 | uVar17 >> 0x28) ^ uVar17;
        uVar38 = (uVar17 << 0x39 | uVar17 >> 7) ^ (uVar17 << 0x1c | uVar17 >> 0x24) ^
                 (uVar17 << 0x10 | uVar17 >> 0x30);
        uVar17 = (uVar38 << 0x18 | uVar38 >> 0x28) ^ (uVar38 << 0x12 | uVar38 >> 0x2e) ^ uVar38;
        uVar17 = (uVar17 << 0x30 | uVar17 >> 0x10) ^ (uVar17 << 0x24 | uVar17 >> 0x1c) ^ uVar17;
        uVar17 = (uVar17 << 0x20 | uVar17 >> 0x20) ^ (uVar17 << 8 | uVar17 >> 0x38) ^ uVar17;
        uVar17 = uVar17 << 0x30 | uVar17 >> 0x10;
        if (uVar17 < (uint64_t)(int64_t)(short)~(uVar39 * 0x200 | uVar39 >> 7)) {
          uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) - uVar17;
          uVar11 = *(uint32_t *)(&uStack00000000000000e0 + lVar13);
          puVar29 = (uint32_t *)(lVar15 + uVar17);
          if ((int)uVar11 < 1) {
            *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffc4;
            puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
            if (uVar11 != ((uVar40 ^ 0xfc40) - uVar37 & 0xffff)) goto LAB_7fffa5006dbd;
          }
          else {
            if ((int)uVar11 < 3) {
              if (uVar11 != 1) goto LAB_7fffa5006dbd;
              uVar37 = *(int *)(auStackX_18 + lVar13 + 0x30) + 0xc75d59a8U << (bVar20 & 0x1f) |
                       *(int *)(auStackX_18 + lVar13 + 0x30) + 0xc75d59a8U >> 0x20 - (bVar20 & 0x1f)
              ;
              uVar11 = *(uint32_t *)(&uStack00000000000001e8 + lVar13);
              uVar39 = (uint16_t)(0x6c44702 - *(int *)((int64_t)register0x00000020 + lVar13 + 0x1590)
                               );
              uVar24 = (uint32_t)(uint16_t)((uVar39 << 0xb | uVar39 >> 5) * (short)iVar44);
              bVar31 = (uVar11 != uVar24) * ' ';
              bVar32 = bVar31 | (0 < *(int *)(&uStack00000000000001ec + lVar13)) * '\x04';
              if ((uint64_t)(int64_t)(int)(uVar37 << 0xc | uVar37 >> 0x14) <=
                  (uint64_t)
                  ~(0xe5bc6971U >> (bVar20 & 0x1f) | -0x1a43968f << 0x20 - (bVar20 & 0x1f))) {
                bVar32 = bVar31 + (0 < *(int *)(&uStack00000000000001ec + lVar13)) * -4;
              }
              *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffba;
              puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
              if (uVar14 < 0x12) goto LAB_7fffa500443d;
              cVar3 = (&uStack00000000000001cc)[lVar13];
              if (*(uint32_t *)(&uStack00000000000001c8 + lVar13) == (0x40d47c23 - uVar40 & 0xffff)) {
                *puVar29 = 0xfd2fb528;
                uVar49 = 4;
              }
              else {
                uVar49 = 0;
              }
              cVar10 = '\0';
              if (uVar11 == uVar24) {
                cVar10 = cVar3 * '\b' + -0x50;
              }
              *(uint32_t *)(&uStack00000000000000e0 + lVar13) = 2;
              uVar35 = uVar49 | 2;
              uVar14 = (uVar14 - uVar35) - 3;
              puVar30 = (uint32_t *)((int64_t)puVar29 + uVar35 + 3);
              *(uint8_t *)((int64_t)puVar29 + uVar35 + 2) = 0;
              *(char *)((int64_t)puVar29 + uVar49 + 1) = cVar10;
              *(uint8_t *)((int64_t)puVar29 + uVar49) = bVar32;
              *(uint16_t *)((int64_t)puVar29 + uVar35) = 1;
              uVar49 = *(uint64_t *)(auStackX_18 + lVar13 + 0x30);
              iVar44 = *(int *)(auStackX_18 + lVar13 + 0x60);
            }
            else {
              if (uVar11 == 3) {
                puVar30 = puVar29;
              }
              else {
LAB_7fffa5006dbd:
                *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffba;
                puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
                if (uVar14 < 3) goto LAB_7fffa500443d;
                puVar30 = (uint32_t *)((int64_t)puVar29 + 3);
                *(uint16_t *)puVar29 = 1;
                *(uint8_t *)((int64_t)puVar29 + 2) = 0;
                uVar14 = uVar14 - 3;
              }
              uVar49 = *(uint64_t *)(auStackX_18 + lVar13 + 0x30);
            }
            bVar32 = (uint8_t)uVar49 & 0x1f;
            uVar11 = (uVar40 ^ 0x8cc057f5) >> bVar32 | (uVar40 ^ 0x8cc057f5) << 0x20 - bVar32;
            bVar51 = *(int *)(&uStack00000000000001ec + lVar13) == 0;
            if ((uint64_t)(int64_t)(int)~(uVar11 << 9 | uVar11 >> 0x17) <=
                (uint64_t)(iVar44 * 0x2985a290 - uVar40)) {
              bVar51 = *(int *)(&uStack00000000000001ec + lVar13) < 1;
            }
            uVar35 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
            if (!bVar51) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d8) = uVar17;
              uVar11 = (uint32_t)uVar35 | 1;
              uVar27 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3f0);
              *(uint64_t *)(&uStack00000000000000b0 + lVar13) = uVar14;
              *(uint32_t **)(auStackX_18 + lVar13 + 0x68) = puVar29;
              *(uint32_t **)(auStackX_18 + lVar13 + 0x38) = puVar30;
              *(uint32_t *)(auStackX_18 + lVar13 + 0x2c) = uVar11;
              if (uVar27 < 0x20) {
                lVar15 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x408) +
                         0x27d4eb2f165667c5;
              }
              else {
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c8) = uVar27;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) = 0x2771dc2a;
                *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0x67ef2c;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1580) = 0x520139e5;
                *(uint64_t *)(auStackX_18 + lVar13 + 0x40) =
                     *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3f8);
                uVar17 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x400);
                *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d0) =
                     *(int64_t *)(auStackX_18 + lVar13 + 0x58) * -0x3c244a1b4acd3b79;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a0) = 0x954ff1e4c473ad46
                ;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) =
                     (uVar35 ^ 0x8eb2408a18d93a15) + uVar49;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1578) = ~uVar38;
                uVar14 = uVar38 - 1;
                if (iVar44 * -0x550a9593 != -0x1e8a4d0a) {
                  uVar14 = ~uVar38;
                }
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a8) = uVar14;
                uVar14 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x408);
                *(uint64_t *)(auStackX_18 + lVar13 + 0x50) = uVar14;
                *(uint64_t *)(auStackX_18 + lVar13 + 0x18) =
                     (uint64_t)(((int)uVar49 + 0x7e0bbd5e) * uVar11 + 0x69acbff7);
                bVar32 = (uint8_t)uVar49 & 0x1f;
                *(uint64_t *)(&uStack00000000000000d0 + lVar13) =
                     (uint64_t)((0xb4c075f1 - (uint32_t)uVar35 ^ 0xe1ad4ab9) + (int)uVar49);
                uVar37 = (uVar40 | 1) * 0x64b1e76e;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1560) =
                     (uint64_t)
                     (((-0x398ebea5 << bVar32 | 0xc671415bU >> 0x20 - bVar32) ^ 0xd0545334) *
                     (uVar40 | 1));
                lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x40);
                uVar24 = (int)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) -
                         0x320983;
                uVar11 = *(uint32_t *)(auStackX_18 + lVar13 + 0x30);
                iVar21 = *(int *)(auStackX_18 + lVar13 + 0x30);
                bVar32 = (uint8_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30) & 0x1f;
                bVar31 = (uint8_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30) & 0x1f;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15e0) =
                     (uint64_t)
                     (uVar40 + 0xd6168221 >> bVar31 | uVar40 + 0xd6168221 << 0x20 - bVar31);
                uVar22 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
                uVar34 = ~((int)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1580) *
                          *(int *)(auStackX_18 + lVar13 + 0x60));
                bVar31 = (uint8_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30) & 0x1f;
                *(uint32_t *)(&uStack00000000000000c0 + lVar13) =
                     uVar37 << bVar31 | uVar37 >> 0x20 - bVar31;
                bVar7 = (uint8_t)uVar22;
                bVar31 = bVar7 & 0x1f;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) =
                     (uint64_t)(~(uVar24 << bVar32 | uVar24 >> 0x20 - bVar32) - (int)uVar22);
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1580) =
                     (uint64_t)
                     ((uVar34 << 3 | uVar34 >> 0x1d) * *(int *)(auStackX_18 + lVar13 + 0x2c));
                bVar7 = bVar7 & 0x1f;
                *(int64_t *)(auStackX_18 + lVar13 + 8) =
                     (int64_t)
                     (int)((~(uVar11 ^ 0xa03caefd) << bVar7 | ~(uVar11 ^ 0xa03caefd) >> 0x20 - bVar7
                           ) + 0x5d0b1fb6);
                uVar49 = *(uint64_t *)
                          (&uStack00000000000000e0 +
                          *(int64_t *)(auStackX_18 + lVar13 + 0x80) + lVar13);
                uVar27 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568);
                uVar16 = (lVar15 * -0x6c158a5880000000 |
                         (uint64_t)(lVar15 * -0x3d4d51c2d82b14b1) >> 0x21) *
                         ~((uVar35 ^ 0xe18722198f6617d7) << 6 |
                          (uVar35 ^ 0xe18722198f6617d7) >> 0x3a);
                uVar35 = ~uVar16;
                uVar14 = uVar16 ^ (lVar15 << 1 | (uint64_t)(lVar15 < 0)) +
                                  (uVar14 << 0xc | uVar14 >> 0x34) + (uVar17 << 7 | uVar17 >> 0x39)
                                  + (uVar49 << 0x12 | uVar49 >> 0x2e);
                uVar36 = uVar14 * 0x61c8864e7a143579 + 0x7a1435883d4d519c;
                uVar46 = uVar14 * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
                uVar25 = (uVar17 * -0x6c158a5880000000 | uVar17 * -0x3d4d51c2d82b14b1 >> 0x21) *
                         -0x61c8864e7a143579;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) = uVar35;
                *(uint64_t *)(auStackX_18 + lVar13 + 0x80) =
                     ((uVar25 ^ uVar46) & uVar35 & uVar38) *
                     (int64_t)
                     (int)((iVar21 + 0xa5bb51cfU << bVar31 | iVar21 + 0xa5bb51cfU >> 0x20 - bVar31)
                          + 0xfe660d5d);
                *(uint64_t *)(auStackX_18 + lVar13 + 0x40) = uVar25 ^ uVar36;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588) = uVar36;
                *(uint64_t *)(auStackX_18 + lVar13 + 0x48) =
                     (uVar35 & (uVar25 ^ uVar36) &
                     *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1578)) *
                     0x61c8864e7a143579;
                uVar42 = uVar46 | uVar25;
                lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x50);
                *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d0) =
                     (*(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d0) +
                     *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590)) * 0x28711035;
                uVar11 = (int)*(uint64_t *)(&uStack00000000000000c8 + lVar13) + uVar40;
                *(uint64_t *)(auStackX_18 + lVar13 + 0x50) =
                     (lVar15 * -0x6c158a5880000000 |
                     (uint64_t)(lVar15 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579;
                *(uint64_t *)(&uStack00000000000000c8 + lVar13) =
                     (uint64_t)
                     (((uVar11 * 0x1000000 | uVar11 >> 8) ^ *(uint32_t *)(auStackX_18 + lVar13 + 0x30))
                     + 0xed36506a);
                iVar21 = *(int *)(auStackX_18 + lVar13 + 0x30);
                *(uint64_t *)(auStackX_18 + lVar13) =
                     (uVar49 * -0x6c158a5880000000 | uVar49 * -0x3d4d51c2d82b14b1 >> 0x21) * ~uVar27
                     * 0x7c36749b;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15b0) =
                     (uint64_t)(uint32_t)(*(int *)(&uStack00000000000000c0 + lVar13) * -0x52c36765);
                *(uint64_t *)(&uStack00000000000000c0 + lVar13) = uVar38 | uVar42;
                *(uint64_t *)(auStackX_18 + lVar13 + 0x40) =
                     *(uint64_t *)(auStackX_18 + lVar13 + 0x40) ^ uVar38;
                uVar50 = ~uVar25;
                uVar17 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1578);
                uVar27 = (uVar50 ^ uVar46) & uVar17;
                *(uint64_t *)(auStackX_18 + lVar13 + 0x20) = uVar50;
                uVar49 = (uVar25 ^ uVar46) & uVar16 & uVar17;
                uVar14 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568);
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1598) =
                     uVar16 & uVar42 & uVar38;
                uVar35 = uVar27 * uVar16;
                if (*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1580) <=
                    *(uint64_t *)(auStackX_18 + lVar13 + 8)) {
                  uVar35 = uVar16 & uVar27;
                }
                lVar15 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15e0);
                lVar45 = *(int64_t *)(auStackX_18 + lVar13 + 0x58);
                uVar47 = uVar46 & uVar50;
                *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1580) =
                     (uVar17 ^ uVar47) & uVar16;
                lVar26 = uVar49 + 0x61c8864e30a0fdee;
                if (*(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) <=
                    *(int64_t *)(auStackX_18 + lVar13 + 0x18)) {
                  lVar26 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a0) * lVar45 *
                           uVar49;
                }
                *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) = lVar26;
                *(uint64_t *)(&uStack00000000000000a0 + lVar13) = uVar16;
                uVar49 = uVar47 & uVar16 &
                         *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15a8);
                uVar48 = uVar49 ^ 0xffffffffb68cc875;
                if ((0xc3419c0U - iVar21 ^ 0x6631e37a) + uVar40 == 0x7225f64a) {
                  uVar48 = uVar49 * -0x4973378b;
                }
                uVar6 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568);
                lVar45 = (uVar17 ^ uVar47) - *(uint64_t *)(&uStack00000000000000a0 + lVar13);
                if (*(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15b0) <=
                    *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1560)) {
                  lVar45 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1580);
                }
                uVar49 = *(uint64_t *)(auStackX_18 + lVar13 + 0x30);
                uVar17 = uVar42 - uVar38;
                if (*(uint64_t *)(&uStack00000000000000d0 + lVar13) <
                    *(uint64_t *)(&uStack00000000000000c8 + lVar13)) {
                  uVar17 = *(uint64_t *)(&uStack00000000000000c0 + lVar13);
                }
                uVar27 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c8);
                lVar15 = ((((uVar17 ^ *(uint64_t *)(&uStack00000000000000a0 + lVar13)) +
                           *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1598) +
                           ((~(uVar25 | uVar16) & uVar36 & uVar38) - (uVar42 ^ uVar16 ^ uVar38))) *
                           0x6aaaa9d9 +
                           uVar48 + *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) +
                           *(int64_t *)(auStackX_18 + lVar13 + 0x80) +
                           ((uVar16 & uVar47 & uVar38) - lVar45) * 0x4973378b +
                           (((uVar46 | uVar50) & uVar14 & uVar38) - (uVar47 & uVar38 & uVar6)) *
                           0x61c8864e0f698ba0 +
                           ((*(uint64_t *)(auStackX_18 + lVar13 + 0x20) ^
                            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1588)) & uVar38
                           | uVar6) * -0x61c8864e27c02d3c + -0x7a1435883d4d519d +
                           *(int64_t *)(auStackX_18 + lVar13 + 0x48) +
                           (*(uint64_t *)(auStackX_18 + lVar13 + 0x40) | uVar6) * -0x5254083d +
                           uVar35 * lVar15 ^ *(uint64_t *)(auStackX_18 + lVar13 + 0x50)) *
                          -0x61c8864e7a143579 +
                          *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d0) ^
                         *(uint64_t *)(auStackX_18 + lVar13)) * -0x61c8864e7a143579 +
                         -0x7a1435883d4d519d;
              }
              uVar17 = (uint64_t)((uint32_t)uVar27 & 0x1f);
              puVar29 = (uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x418);
              uVar27 = lVar15 + uVar27;
              uVar11 = (uint32_t)uVar49;
              if (uVar17 < 8) {
                uVar14 = uVar17;
              }
              else {
                uVar14 = uVar17 - 8;
                if ((uVar14 & 8) == 0) {
                  uVar38 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
                  bVar32 = (uint8_t)uVar49 & 0x3f;
                  uVar17 = -0x3d4d51c2d82b14b1 << bVar32 | 0xc2b2ae3d27d4eb4fU >> 0x40 - bVar32;
                  uVar17 = (uVar17 >> (bVar20 & 0x3f) | uVar17 << 0x40 - (bVar20 & 0x3f)) *
                           *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x418);
                  uVar35 = uVar17 * 0x80000000 | uVar17 >> 0x21;
                  uVar17 = uVar35 * -0x61c8864e7a143579;
                  if ((uint64_t)(~((uint32_t)uVar38 ^ 0x8915979d) + uVar11 + 0xfc16bf2) ==
                      0xffffffff911df239) {
                    uVar17 = uVar35 + 0x9e3779b185ebca87;
                  }
                  uVar27 = ((uVar27 ^ uVar17) << 0x1b | (uVar27 ^ uVar17) >> 0x25) *
                           -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
                  puVar29 = (uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x420);
                  lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x58);
                  if (uVar14 < 8) goto LAB_7fffa5007704;
                }
                else {
                  uVar38 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
                  lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x58);
                  uVar14 = uVar17;
                }
                do {
                  lVar45 = (uVar49 ^ 0x4f1bbed8ce15e557) - 0x73109e2;
                  puVar30 = puVar29 + 2;
                  uVar27 = (*(int64_t *)puVar29 * -0x6c158a5880000000 |
                           (uint64_t)(*(int64_t *)puVar29 * -0x3d4d51c2d82b14b1) >> 0x21) *
                           ((lVar15 * -0x6f2c710b061589a6 ^ uVar38) + 0x2f9546bb) ^ uVar27;
                  puVar29 = puVar29 + 4;
                  uVar17 = uVar49 + 0xf1bbcb8c277ca7bc ^ uVar41;
                  uVar14 = uVar14 - 0x10;
                  uVar17 = (uVar27 << 0x1b | uVar27 >> 0x25) * (uVar17 << 0x3d | uVar17 >> 3) +
                           0x85ebca77c2b2ae63 ^
                           ((lVar45 * 2 | (uint64_t)(lVar45 < 0)) ^ uVar41) *
                           (*(int64_t *)puVar30 * -0x6c158a5880000000 |
                           (uint64_t)(*(int64_t *)puVar30 * -0x3d4d51c2d82b14b1) >> 0x21);
                  uVar27 = (uVar17 << 0x1b | uVar17 >> 0x25) * -0x61c8864e7a143579 +
                           0x85ebca77c2b2ae63;
                } while (7 < uVar14);
              }
LAB_7fffa5007704:
              if (3 < uVar14) {
                uVar14 = uVar14 - 4;
                uVar27 = (uint64_t)*puVar29 * -0x61c8864e7a143579 ^ uVar27;
                puVar29 = puVar29 + 1;
                uVar27 = (uVar27 << 0x17 | uVar27 >> 0x29) * -0x3d4d51c2d82b14b1 +
                         0x165667b19e3779f9;
              }
              iVar21 = *(int *)(auStackX_18 + lVar13 + 0x60);
              uVar22 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590);
              uVar38 = *(uint64_t *)(&uStack00000000000000b0 + lVar13);
              if (uVar14 == 0) {
                uVar17 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d8);
              }
              else {
                uVar49 = (uint64_t)((uint32_t)uVar14 & 3);
                uVar17 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d8);
                if (uVar49 != ~((uVar11 + 0x91999c28) * 0x35ff94dd)) {
                  *(uint64_t *)(auStackX_18 + lVar13 + 0x50) = uVar14 & 0xfffffffffffffffc;
                  uVar35 = 0;
                  do {
                    uVar27 = (uint64_t)*(uint8_t *)((int64_t)puVar29 + uVar35) * 0x27d4eb2f165667c5 ^
                             uVar27;
                    uVar35 = uVar35 + 1;
                    uVar27 = (uVar27 << 0xb | uVar27 >> 0x35) * -0x61c8864e7a143579;
                  } while (uVar49 != uVar35);
                  bVar32 = (uint8_t)uVar22 & 0x1f;
                  uVar11 = ~((uVar11 ^ 0xfffd7f9c) << bVar32 |
                            (uVar11 ^ 0xfffd7f9c) >> 0x20 - bVar32);
                  if ((uVar11 << 0xf | uVar11 >> 0x11) <= uVar14) {
                    *(int64_t *)(auStackX_18 + lVar13 + 0x50) =
                         *(int64_t *)(auStackX_18 + lVar13 + 0x50) + -4;
                    lVar15 = (int64_t)puVar29 + uVar49 + 3;
                    lVar45 = 0;
                    *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1578) = 0;
                    *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) =
                         0xffffffffffffffff;
                    *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1580) = 0x122782d4d;
                    *(uint64_t *)(auStackX_18 + lVar13 + 0x40) = 0xf0722b06;
                    *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) = 0xf0722b05;
                    *(int64_t *)(&uStack00000000000000c8 + lVar13) = lVar15;
                    while( true ) {
                      uVar11 = iVar21 * -0xb75fcae + 0x2e1c5cdb;
                      uVar37 = (uint32_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590)
                      ;
                      bVar31 = (uint8_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590)
                      ;
                      bVar32 = bVar31 & 0x1f;
                      uVar17 = *(uint64_t *)(auStackX_18 + lVar13 + 0x30);
                      bVar7 = (uint8_t)uVar17;
                      if ((int64_t)(uint64_t)(uVar11 >> bVar32 | uVar11 << 0x20 - bVar32) <
                          (int64_t)
                          (int)(((uVar40 ^ 0x2178abe0) - (int)uVar17) * 0x673d9bdb ^ 0xeb76698c)) {
                        uVar27 = (uint64_t)*(uint8_t *)(lVar15 + -3 + lVar45) * 0x27d4eb2f165667c5 ^
                                 uVar27;
                        uVar38 = (uint64_t)*(uint8_t *)(lVar15 + -2 + lVar45) * 0x27d4eb2f165667c5 ^
                                 (uVar27 << 0xb | uVar27 >> 0x35) * -0x61c8864e7a143579;
                        uVar14 = (uint64_t)*(uint8_t *)(lVar15 + lVar45);
                        uVar17 = (((uVar41 ^ 0xc93c6ef76b28aab6) << 7 | 100) ^ uVar17) *
                                 (uVar38 << 0xb | uVar38 >> 0x35);
                      }
                      else {
                        bVar32 = *(uint8_t *)(*(int64_t *)(&uStack00000000000000c8 + lVar13) + -3 +
                                          lVar45);
                        uVar11 = *(int *)(auStackX_18 + lVar13 + 0x2c) * 0x635c2094 + (int)uVar17;
                        uVar24 = 0x114d7e2f << (bVar7 & 0x1f) | 0x114d7e2fU >> 0x20 - (bVar7 & 0x1f)
                        ;
                        bVar31 = bVar31 & 0x1f;
                        uVar14 = (int64_t)
                                 (char)*(uint8_t *)(*(int64_t *)(&uStack00000000000000c8 + lVar13) +
                                                lVar45);
                        if ((uint64_t)(uVar11 * 0x1000000 | uVar11 >> 8) <
                            (uint64_t)(int64_t)(int)~(uVar24 >> bVar31 | uVar24 << 0x20 - bVar31))
                        {
                          uVar14 = (uint64_t)
                                   *(uint8_t *)(*(int64_t *)(&uStack00000000000000c8 + lVar13) +
                                            lVar45);
                        }
                        uVar17 = (uint64_t)bVar32;
                        if ((int64_t)
                            (uint64_t)
                            (uVar37 + 0x7cafa648 >> (bVar7 & 0x1f) |
                            uVar37 + 0x7cafa648 << 0x20 - (bVar7 & 0x1f)) <=
                            (int64_t)(int)(-0x3ba3cda2 - (uVar37 + 0x115ecfdb))) {
                          uVar17 = (int64_t)(char)bVar32;
                        }
                        lVar15 = *(int64_t *)(&uStack00000000000000c8 + lVar13);
                        uVar27 = uVar27 ^ uVar17 * 0x27d4eb2f165667c5;
                        uVar17 = (uVar27 << 0xb | uVar27 >> 0x35) * -0x61c8864e7a143579 ^
                                 (uint64_t)
                                 *(uint8_t *)(*(int64_t *)(&uStack00000000000000c8 + lVar13) + -2 +
                                          lVar45) * 0x27d4eb2f165667c5;
                        uVar17 = (uVar17 << 0xb | uVar17 >> 0x35) * -0x61c8864e7a143579;
                      }
                      uVar11 = 0xc0586ecd - (uVar37 ^ 0xfed629b4);
                      uVar27 = ~uVar17;
                      uVar35 = (uint64_t)*(uint8_t *)(lVar15 + -1 + lVar45) * 0x27d4eb2f165667c5;
                      uVar38 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1578);
                      uVar49 = uVar27 | uVar35;
                      if ((~(uVar40 + 0x32a5eb42) << 0xc | ~(uVar40 + 0x32a5eb42) >> 0x14) <=
                          (uVar11 << (bVar7 & 0x1f) | uVar11 >> 0x20 - (bVar7 & 0x1f))) {
                        uVar49 = uVar27 & uVar35;
                      }
                      uVar17 = ((~uVar35 | uVar17) ^ uVar38) * -0x121db80a3 +
                               (uVar27 ^ uVar35 ^ uVar38) * 0x636f57e4 +
                               ((uVar27 ^ uVar35) &
                               *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568)) *
                               *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) +
                               0x32060246 +
                               (~(uVar35 | uVar38) & uVar17) *
                               *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x1580) +
                               ((uVar17 ^ uVar35 ^ uVar38) -
                               (*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1568) ^
                               (~uVar35 | uVar17))) * 0x3169559d + (uVar27 & uVar35) * 0x32060247 +
                               (uVar49 & uVar38) * *(int64_t *)(auStackX_18 + lVar13 + 0x40);
                      uVar17 = (uVar17 * 0x800 | uVar17 >> 0x35) * -0x61c8864e7a143579 ^
                               uVar14 * 0x27d4eb2f165667c5;
                      uVar27 = (uVar17 << 0xb | uVar17 >> 0x35) * -0x61c8864e7a143579;
                      if (*(int64_t *)(auStackX_18 + lVar13 + 0x50) == lVar45) break;
                      lVar45 = lVar45 + 4;
                      lVar15 = *(int64_t *)(&uStack00000000000000c8 + lVar13);
                    }
                    uVar38 = *(uint64_t *)(&uStack00000000000000b0 + lVar13);
                    uVar17 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15d8);
                  }
                }
              }
              *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffba;
              puVar30 = *(uint32_t **)(auStackX_18 + lVar13 + 0x38);
              puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
              if (uVar38 < 4) goto LAB_7fffa500443d;
              uVar14 = (uVar27 >> 0x21 ^ uVar27) * -0x3d4d51c2d82b14b1;
              lVar15 = (uVar14 >> 0x1d ^ uVar14) * 0x165667b19e3779f9;
              *puVar30 = (uint32_t)((uint64_t)lVar15 >> 0x20) ^ (uint32_t)lVar15;
              puVar30 = puVar30 + 1;
              puVar29 = *(uint32_t **)(auStackX_18 + lVar13 + 0x68);
            }
            uVar14 = (int64_t)puVar30 - (int64_t)puVar29;
            *(uint32_t *)(&uStack00000000000000e0 + lVar13) = 0;
            if (uVar14 < 0xffffffffffffff89) {
              uVar38 = *(uint64_t *)
                        (&uStack00000000000000e0 +
                        *(int64_t *)(&uStack00000000000000a8 + lVar13) + lVar13);
              if (uVar38 != 0) {
                uVar41 = *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x3e0) + 1;
                bVar32 = (uint8_t)*(uint64_t *)(auStackX_18 + lVar13 + 0x30) & 0x1f;
                uVar11 = 0xf608bf1 << bVar32 | 0xf608bf1U >> 0x20 - bVar32;
                bVar51 = uVar38 == uVar41;
                if (((uVar11 >> (bVar20 & 0x1f) | uVar11 << 0x20 - (bVar20 & 0x1f)) ^ 0xa881271b) <
                    0x70a279d0) {
                  bVar51 = uVar38 <= uVar41;
                }
                *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffb8;
                puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
                if (!bVar51) goto LAB_7fffa500443d;
              }
              uVar14 = uVar14 + uVar17;
            }
            *(uint64_t *)(&uStack00000000000000c8 + lVar13) = uVar14;
            puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
          }
        }
        else {
          *(uint64_t *)(&uStack00000000000000c8 + lVar13) = uVar17;
          puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
        }
      }
      else {
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar14;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar14;
        if (uVar41 != 0) {
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar14;
          uVar17 = uVar14;
        }
        uVar49 = *(int64_t *)(auStackX_18 + lVar13 + 0x38) + uVar14;
        *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 1;
        uVar41 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0);
        lVar45 = *(int64_t *)(&uStack00000000000000c8 + lVar13);
        if (uVar41 < uVar49) {
          *(uint8_t *)((int64_t)register0x00000020 + lVar13 + 0x3c0) = 1;
          uVar27 = 0;
          uVar35 = uVar14;
        }
        else {
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar49;
          uVar35 = uVar49;
          uVar27 = uVar14;
        }
        uVar16 = lVar15 + uVar35;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xde0) = uVar27;
        if (uVar41 < uVar16) {
          *(uint8_t *)((int64_t)register0x00000020 + lVar13 + 0x3c0) = 1;
          uVar27 = 0;
        }
        else {
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar16;
          uVar27 = uVar35;
          uVar35 = uVar16;
        }
        uVar36 = lVar45 + uVar35;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xdf0) = uVar27;
        if (uVar41 < uVar36) {
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xde8) = 0;
          *(uint8_t *)((int64_t)register0x00000020 + lVar13 + 0x3c0) = 1;
          *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffc0;
          puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
        }
        else {
          uVar11 = 0xae8e46f4 - *(int *)((int64_t)register0x00000020 + lVar13 + 0x1590);
          uVar11 = ~(uVar11 >> (bVar20 & 0x1f) | uVar11 << 0x20 - (bVar20 & 0x1f));
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar36;
          *(uint64_t *)
           (&uStack00000000000000e0 + (uint64_t)(uVar11 << 0xb | uVar11 >> 0x15) + lVar13) = uVar35
          ;
          *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffc0;
          puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
          if (uVar41 >= uVar16 && uVar49 <= uVar41) {
            bVar20 = (uint8_t)*(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1590) & 0x1f;
            puVar28 = &uStack00000000000000e0 +
                      (uint64_t)~(0xfffff47fU >> bVar20 | -0xb81 << 0x20 - bVar20) + lVar13;
            uVar41 = uVar36;
            uVar49 = uVar14;
            if (uVar36 <= uVar17) goto LAB_7fffa5004c45;
            *(uint64_t *)((int64_t)&uStack_50 + lVar13) = 0x7fffa5004d76;
            FUN_7fffa4ecf8e0(uVar17,0,uVar36 - uVar17);
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar36;
            goto LAB_7fffa5004d84;
          }
        }
      }
    }
    else {
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x3b8) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x3a8) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x398) = (uint8_t  [16])0x0;
      *(uint8_t (*) [16])((int64_t)register0x00000020 + lVar13 + 0x388) = (uint8_t  [16])0x0;
      *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3c8) = 0;
      uVar39 = (uint16_t)(iVar21 * 0x3204);
      *(uint64_t *)((int64_t)&uStack_50 + lVar13) = 0x7fffa50042d4;
      lVar45 = (*(code *)((int64_t)(short)((uVar39 << 9 | uVar39 >> 7) + 0xd998) + 0x7fffa5216139))
                         (uVar17);
      puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
      lVar15 = *(int64_t *)(auStackX_18 + lVar13 + 0x78);
      uVar22 = *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x1570);
      if (lVar45 == 0) {
        *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffc0;
      }
      else {
        uVar38 = lVar45 + uVar17;
        uVar41 = uVar38 & 0xffffffffffffffc0;
        *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x388) = lVar45;
        *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = lVar45;
        *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = lVar45;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x390) = uVar38;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b8) = uVar41;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3b0) = uVar41;
        *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3c4) = 0;
        puVar28 = &uStack00000000000000e0 + (uint64_t)(uVar11 - 0x7d83) + lVar13;
        *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = lVar45;
        *(uint32_t *)((int64_t)register0x00000020 + lVar13 + 0x3cc) = 0;
        if (uVar17 < 0x1600) {
          *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffc0;
          *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xd60) = 0;
          *puVar28 = 1;
          puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
        }
        else {
          lVar26 = lVar45 + 0x1600;
          *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = lVar26;
          *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0xd60) = lVar45;
          *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = lVar26;
          *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = lVar26;
          if (uVar17 < (iVar21 * -0x3c90e13 ^ 0x1b5cc96dU) + 0xe6956436) {
            *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffc0;
            *puVar28 = 1;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xd68) = 0;
            puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
          }
          else {
            lVar1 = lVar45 + 0x2c00;
            *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = lVar1;
            *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = lVar1;
            *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = lVar1;
            *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0xd68) = lVar26;
            if (0xcf3b - uVar11 <= uVar17) {
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x15c0) = uVar41;
              *(int64_t *)((int64_t)register0x00000020 + lVar13 + 0xea0) = lVar1;
              uVar17 = lVar45 + 0x4ed8;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a8) = uVar17;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x398) = uVar17;
              *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0x3a0) = uVar17;
              *puVar28 = 0;
              goto LAB_7fffa5004584;
            }
            *(uint64_t *)(&uStack00000000000000c8 + lVar13) = 0xffffffffffffffc0;
            *puVar28 = 1;
            *(uint64_t *)((int64_t)register0x00000020 + lVar13 + 0xea0) = 0;
            puVar28 = (uint8_t *)((int64_t)&uStack_48 + lVar13);
          }
        }
      }
    }
  }
  else {
    *(uint64_t *)(&uStack00000000000000c8 + lVar13) = uVar17;
  }
LAB_7fffa500443d:
  uVar11 = (uint32_t)*(uint64_t *)(puVar28 + 0x90);
  if (*(int64_t *)(puVar28 + 0xf70) != 0) {
    if (*(code **)(puVar28 + 0x498) == (code *)0x0) {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5004491;
      (*(code *)((int64_t)
                 (int)((uVar11 ^ 0x7fff1f04) << 1 | (uint32_t)((int)(uVar11 ^ 0x7fff1f04) < 0)) +
                0x7fffa52cfd22))(*(int64_t *)(puVar28 + 0xf70));
    }
    else {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5004469;
      (**(code **)(puVar28 + 0x498))(*(uint64_t *)(puVar28 + 0x4a0));
    }
  }
  uVar17 = *(uint64_t *)(puVar28 + 0xf90);
  if (uVar17 != 0) {
    uVar14 = *(uint64_t *)(uVar17 + 0x20);
    bVar51 = true;
    if (uVar14 <= uVar17) {
      bVar51 = *(uint64_t *)(uVar17 + 0x28) <= uVar17;
    }
    pcVar19 = *(code **)(uVar17 + 0x17a0);
    uVar22 = *(uint64_t *)(uVar17 + 0x17a8);
    *(uint8_t (*) [16])(uVar17 + 0x50) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar17 + 0x40) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar17 + 0x30) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar17 + 0x20) = (uint8_t  [16])0x0;
    *(uint64_t *)(uVar17 + 0x60) = 0;
    if (uVar14 == 0) {
LAB_7fffa5004512:
      uVar11 = (uint32_t)*(uint64_t *)(puVar28 + 0x90);
      if (bVar51) {
        if (pcVar19 == (code *)0x0) goto LAB_7fffa50047b6;
        *(uint64_t *)(puVar28 + -8) = 0x7fffa5004534;
        (*pcVar19)(uVar22,uVar17);
      }
    }
    else {
      if (pcVar19 != (code *)0x0) {
        *(uint64_t *)(puVar28 + -8) = 0x7fffa5004512;
        (*pcVar19)(uVar22);
        goto LAB_7fffa5004512;
      }
      uVar11 = (uint32_t)*(uint64_t *)(puVar28 + 0x90);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa50047ae;
      (*(code *)((int64_t)(int)(-0x4ae6 - uVar11) + 0x7fffa52d0739))(uVar14,uVar14,0);
      if (!bVar51) goto LAB_7fffa50047d9;
LAB_7fffa50047b6:
      uVar39 = ~((uint16_t)uVar11 ^ 0xdc40);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa50047d9;
      (*(code *)((int64_t)(short)(uVar39 << 0xd | uVar39 >> 3) + 0x7fffa52ca775))(uVar17);
    }
  }
LAB_7fffa50047d9:
  sVar43 = (short)uVar11;
  *(uint8_t (*) [16])(puVar28 + 4000) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar28 + 0xf90) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar28 + 0xf80) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar28 + 0xf70) = (uint8_t  [16])0x0;
  *(uint64_t *)(puVar28 + 0xfb0) = 0;
  plVar4 = *(int64_t **)(puVar28 + 0xfb8);
  if (plVar4 == (int64_t *)0x0) goto LAB_7fffa5005812;
  if (((*(uint8_t *)(plVar4 + 0x179) & 1) == 0) && (lVar13 = *plVar4, lVar13 != 0)) {
    lVar15 = lVar13 + 0x60;
    *(uint64_t *)(puVar28 + -8) = 0x7fffa5004843;
    (*(code *)&DAT_7ff8504ccea0)(lVar15);
    *(uint32_t *)(lVar13 + 0x98) = 1;
    *(int64_t *)(puVar28 + 0xb0) = lVar15;
    *(uint64_t *)(puVar28 + -8) = 0x7fffa500485e;
    (*(code *)&DAT_7ff8504ccfa0)(lVar15);
    *(uint64_t *)(puVar28 + -8) = 0x7fffa500486b;
    (*(code *)&DAT_7ff8504fcac0)(lVar13 + 0x88);
    *(uint64_t *)(puVar28 + -8) = 0x7fffa5004871;
    (*(code *)&DAT_7ff8504fcac0)(lVar13 + 0x90);
    if (*(int64_t *)(lVar13 + 0x20) != 0) {
      uVar17 = 0;
      do {
        lVar15 = *(int64_t *)(*(int64_t *)(lVar13 + 0x18) + uVar17 * 8);
        if (lVar15 != 0) {
          *(uint64_t *)(puVar28 + -8) = 0x7fffa50048c8;
          iVar21 = (*(code *)&DAT_7ff84ea57200)(lVar15,0xffffffff);
          *(uint64_t *)(puVar28 + -8) = 0x7fffa50048d0;
          (*(code *)&DAT_7ff84ea57010)(lVar15);
          if (iVar21 < 0x80) {
            if (iVar21 != 0) goto LAB_7fffa50048a5;
          }
          else if (((iVar21 + 0x403eea15) * 2 | (uint32_t)(iVar21 + 0x403eea15 < 0)) != 0x807dd52a) {
LAB_7fffa50048a5:
            *(uint64_t *)(puVar28 + -8) = 0x7fffa50048a7;
            (*(code *)&DAT_7ff84ea18640)();
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(uint64_t *)(lVar13 + 0x20));
    }
    *(uint64_t *)(puVar28 + -8) = 0x7fffa5004903;
    (*(code *)&DAT_7ff850519980)(*(uint64_t *)(puVar28 + 0xb0));
    pcVar19 = *(code **)(lVar13 + 8);
    uVar22 = *(uint64_t *)(lVar13 + 0x10);
    lVar15 = *(int64_t *)(lVar13 + 0x30);
    if (lVar15 == 0) {
      uVar39 = (uint16_t)*(uint64_t *)(puVar28 + 0x90);
    }
    else {
      uVar39 = (uint16_t)*(uint64_t *)(puVar28 + 0x90);
      if (pcVar19 == (code *)0x0) {
        bVar20 = (uint8_t)*(uint64_t *)(puVar28 + 0x90) & 0xf;
        *(uint64_t *)(puVar28 + -8) = 0x7fffa5004ef8;
        (*(code *)((int64_t)(short)(-0x62f6 << bVar20 | 0x9d0aU >> 0x10 - bVar20) + 0x7fffa52c539c)
        )(lVar15);
      }
      else {
        *(uint64_t *)(puVar28 + -8) = 0x7fffa5004927;
        (*pcVar19)(uVar22);
      }
      pcVar19 = *(code **)(lVar13 + 8);
      uVar22 = *(uint64_t *)(lVar13 + 0x10);
    }
    lVar15 = *(int64_t *)(lVar13 + 0x18);
    if (lVar15 != 0) {
      if (pcVar19 == (code *)0x0) {
        *(uint64_t *)(puVar28 + -8) = 0x7fffa5004f4c;
        (*(code *)((int64_t)(short)((-0x700c - uVar39) * -0x2d3d + 0x2e51) + 0x7fffa52c402c))
                  (lVar15);
      }
      else {
        *(uint64_t *)(puVar28 + -8) = 0x7fffa5004f20;
        (*pcVar19)(uVar22,lVar15,0);
      }
    }
    pcVar19 = *(code **)(lVar13 + 8);
    if (pcVar19 == (code *)0x0) {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5004f95;
      (*(code *)((int64_t)(short)(uVar39 ^ 0x606e) + 0x7fffa52c5be3))(lVar13,0x7fffa52c5be3,0);
    }
    else {
      uVar22 = *(uint64_t *)(lVar13 + 0x10);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5004f5e;
      (*pcVar19)(uVar22,lVar13);
    }
  }
  uVar11 = 1;
  while( true ) {
    lVar13 = plVar4[1];
    lVar15 = plVar4[2];
    lVar26 = (uint64_t)(uVar11 - 1) * 0x198;
    *(uint64_t *)(puVar28 + 0x50) = *(uint64_t *)(lVar13 + 0x30 + lVar26);
    puVar18 = (uint64_t *)(lVar13 + 0x10 + lVar26);
    uVar22 = *puVar18;
    uVar5 = puVar18[1];
    puVar18 = (uint64_t *)(lVar13 + 0x20 + lVar26);
    uVar8 = puVar18[1];
    *(uint64_t *)(puVar28 + 0x40) = *puVar18;
    *(uint64_t *)(puVar28 + 0x48) = uVar8;
    *(uint64_t *)(puVar28 + 0x30) = uVar22;
    *(uint64_t *)(puVar28 + 0x38) = uVar5;
    uVar22 = *(uint64_t *)(lVar13 + 0x38 + lVar26);
    lVar45 = *(int64_t *)(lVar13 + 0x60 + lVar26);
    if (lVar45 != 0) {
      uVar5 = *(uint64_t *)(lVar13 + 0x68 + lVar26);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5005002;
      (*(code *)&DAT_7ff8504ccea0)(lVar15);
      uVar37 = *(uint32_t *)(lVar15 + 0x34);
      if (uVar37 < *(uint32_t *)(lVar15 + 0x30)) {
        *(uint32_t *)(lVar15 + 0x34) = uVar37 + 1;
        lVar13 = *(int64_t *)(lVar15 + 0x50);
        *(int64_t *)(lVar13 + (uint64_t)uVar37 * 0x10) = lVar45;
        *(uint64_t *)(lVar13 + 8 + (uint64_t)uVar37 * 0x10) = uVar5;
        *(uint64_t *)(puVar28 + -8) = 0x7fffa500505e;
        (*(code *)&DAT_7ff8504ccfa0)(lVar15);
      }
      else {
        *(uint64_t *)(puVar28 + -8) = 0x7fffa5005012;
        (*(code *)&DAT_7ff8504ccfa0)(lVar15);
        pcVar19 = *(code **)(lVar15 + 0x40);
        if (pcVar19 == (code *)0x0) {
          *(uint64_t *)(puVar28 + -8) = 0x7fffa5005084;
          (*(code *)((int64_t)(-0x3f00 - *(int *)(puVar28 + 0x90)) + 0x7fffa52cfb53))(lVar45);
        }
        else {
          uVar5 = *(uint64_t *)(lVar15 + 0x48);
          *(uint64_t *)(puVar28 + -8) = 0x7fffa5005034;
          (*pcVar19)(uVar5,lVar45,0);
        }
      }
    }
    lVar13 = plVar4[1];
    *(uint64_t *)(puVar28 + -8) = 0x7fffa50050a4;
    FUN_7fffa4ecf8e0(lVar13 + lVar26,0,0x198);
    lVar13 = plVar4[1];
    uVar5 = *(uint64_t *)(puVar28 + 0x38);
    uVar8 = *(uint64_t *)(puVar28 + 0x40);
    uVar9 = *(uint64_t *)(puVar28 + 0x48);
    puVar18 = (uint64_t *)(lVar13 + 0x10 + lVar26);
    *puVar18 = *(uint64_t *)(puVar28 + 0x30);
    puVar18[1] = uVar5;
    puVar18 = (uint64_t *)(lVar13 + 0x20 + lVar26);
    *puVar18 = uVar8;
    puVar18[1] = uVar9;
    *(uint64_t *)(lVar13 + 0x30 + lVar26) = *(uint64_t *)(puVar28 + 0x50);
    *(uint64_t *)(plVar4[1] + 0x38 + lVar26) = uVar22;
    uVar37 = *(uint32_t *)(plVar4 + 0x16e);
    if (uVar37 < uVar11) break;
    uVar11 = uVar11 + 1;
  }
  *(uint8_t (*) [16])(plVar4 + 0x25) = (uint8_t  [16])0x0;
  plVar4[0x27] = 0;
  lVar13 = plVar4[1];
  lVar15 = *(int64_t *)(puVar28 + 0x90);
  uVar11 = (uint32_t)lVar15;
  pcVar19 = (code *)plVar4[0x175];
  lVar45 = plVar4[0x176];
  *(uint32_t *)((int64_t)plVar4 + (uint64_t)(uVar11 ^ 0x8be3)) = 1;
  if (lVar13 != 0) {
    uVar17 = (uint64_t)(uVar37 + 1);
    lVar26 = lVar13 + 0x10;
    do {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5005156;
      (*(code *)&DAT_7ff850519980)(lVar26);
      lVar26 = lVar26 + 0x198;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    if (pcVar19 == (code *)0x0) {
      uVar39 = (uint16_t)(uVar11 - 0x56ba);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5005199;
      (*(code *)((int64_t)(short)(uVar39 << 8 | uVar39 >> 8) + 0x7fffa52c92c7))(lVar13);
    }
    else {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5005170;
      (*pcVar19)(lVar45,lVar13);
    }
  }
  lVar13 = plVar4[2];
  iVar21 = *(int *)(puVar28 + 0xc0);
  uVar39 = (uint16_t)lVar15;
  if (lVar13 != 0) {
    lVar45 = *(int64_t *)(lVar13 + 0x50);
    if (lVar45 != 0) {
      if (*(uint32_t *)(lVar13 + 0x30) !=
          (uint32_t)(uint16_t)(((uVar39 ^ 0x8063) << 3 | (uVar39 ^ 0x8063) >> 0xd) * 0x6813)) {
        uVar17 = 0;
        do {
          lVar45 = *(int64_t *)(*(int64_t *)(lVar13 + 0x50) + uVar17 * 0x10);
          if (lVar45 != 0) {
            pcVar19 = *(code **)(lVar13 + 0x40);
            if (pcVar19 == (code *)0x0) {
              *(uint64_t *)(puVar28 + -8) = 0x7fffa5005239;
              (*(code *)((int64_t)
                         (short)((uVar39 + 0xbc9b) * 0x2000 | (uint16_t)(uVar39 + 0xbc9b) >> 3) +
                        0x7fffa52c7451))(lVar45);
            }
            else {
              uVar22 = *(uint64_t *)(lVar13 + 0x48);
              *(uint64_t *)(puVar28 + -8) = 0x7fffa50052a4;
              (*pcVar19)(uVar22,lVar45,0);
            }
          }
          uVar14 = uVar17 ^ 1;
          uVar17 = uVar17 + 1;
          if (0x22000000819aU - lVar15 < (uint64_t)~(uVar11 ^ 0xb23277e0)) {
            uVar17 = uVar14;
          }
        } while (uVar17 < *(uint32_t *)(lVar13 + 0x30));
        lVar45 = *(int64_t *)(lVar13 + 0x50);
        if (lVar45 == 0) goto LAB_7fffa50052e3;
      }
      pcVar19 = *(code **)(lVar13 + 0x40);
      if (pcVar19 == (code *)0x0) {
        *(uint64_t *)(puVar28 + -8) = 0x7fffa50052e3;
        (*(code *)((int64_t)(short)(0x5772 - uVar39) + 0x7fffa52c64e1))(lVar45);
      }
      else {
        uVar22 = *(uint64_t *)(lVar13 + 0x48);
        *(uint64_t *)(puVar28 + -8) = 0x7fffa50052be;
        (*pcVar19)(uVar22);
      }
    }
LAB_7fffa50052e3:
    *(uint64_t *)(puVar28 + -8) = 0x7fffa50052ec;
    (*(code *)&DAT_7ff850519980)(lVar13);
    pcVar19 = *(code **)(lVar13 + 0x40);
    if (pcVar19 == (code *)0x0) {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5005321;
      (*(code *)(&UNK_7fffa52ccf93 + (iVar21 * -0x58c71747 + -0x1f5f132e)))(lVar13);
    }
    else {
      uVar22 = *(uint64_t *)(lVar13 + 0x48);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa50052fe;
      (*pcVar19)(uVar22,lVar13);
    }
  }
  lVar13 = plVar4[3];
  if (lVar13 != 0) {
    *(uint64_t *)(puVar28 + -8) = 0x7fffa5005337;
    (*(code *)&DAT_7ff850519980)(lVar13);
    lVar45 = *(int64_t *)(lVar13 + 0x48);
    if (lVar45 != 0) {
      if (0 < *(int *)(lVar13 + 0x28)) {
        lVar45 = 0;
        do {
          lVar45 = lVar45 + 1;
          *(uint64_t *)(puVar28 + -8) = 0x7fffa50053f6;
          (*(code *)((int64_t)(short)(uVar39 + 0x3235) + 0x7fffa517e088))
                    ((int64_t)(int)(-0xb3fcd32 - (uVar11 + 0x7339688d)));
        } while (lVar45 < *(int *)(lVar13 + 0x28));
        lVar45 = *(int64_t *)(lVar13 + 0x48);
        if (lVar45 == 0) goto LAB_7fffa5005448;
      }
      pcVar19 = *(code **)(lVar13 + 0x38);
      if (pcVar19 == (code *)0x0) {
        uVar33 = (uint16_t)(iVar21 * 0x454f);
        *(uint64_t *)(puVar28 + -8) = 0x7fffa5005448;
        (*(code *)((int64_t)(short)~(uVar33 << 9 | uVar33 >> 7) + 0x7fffa52c568c))(lVar45);
      }
      else {
        uVar22 = *(uint64_t *)(lVar13 + 0x40);
        *(uint64_t *)(puVar28 + -8) = 0x7fffa500541e;
        (*pcVar19)(uVar22);
      }
    }
LAB_7fffa5005448:
    pcVar19 = *(code **)(lVar13 + 0x38);
    if (iVar21 * 0x14966bbe == -0xe038a53 || pcVar19 != (code *)0x0) {
      uVar22 = *(uint64_t *)(lVar13 + 0x40);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa50054ab;
      (*pcVar19)(uVar22,lVar13);
    }
    else {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa50054a0;
      (*(code *)(&UNK_7fffa52c821b + (short)(uVar39 ^ 0x39b6)))
                (lVar13,&UNK_7fffa52c821b + (short)(uVar39 ^ 0x39b6),0);
    }
  }
  lVar13 = plVar4[4];
  if (lVar13 != 0) {
    lVar45 = *(int64_t *)(lVar13 + 0x50);
    if (lVar45 != 0) {
      if (*(int *)(lVar13 + 0x30) != 0) {
        uVar17 = 1;
        lVar45 = 0;
        while( true ) {
          lVar26 = *(int64_t *)(*(int64_t *)(lVar13 + 0x50) + lVar45);
          if (lVar26 != 0) {
            pcVar19 = *(code **)(lVar13 + 0x40);
            if (pcVar19 == (code *)0x0) {
              *(uint64_t *)(puVar28 + -8) = 0x7fffa500552f;
              (*(code *)((int64_t)(int)(uVar11 ^ 0xffffe018) + 0x7fffa52cdb75))(lVar26,lVar26,0);
            }
            else {
              uVar22 = *(uint64_t *)(lVar13 + 0x48);
              *(uint64_t *)(puVar28 + -8) = 0x7fffa500550c;
              (*pcVar19)(uVar22);
            }
          }
          if (*(uint32_t *)(lVar13 + 0x30) <= uVar17) break;
          uVar17 = uVar17 + 1;
          lVar45 = lVar45 + 0x10;
        }
        lVar45 = *(int64_t *)(lVar13 + 0x50);
        if (lVar45 == 0) goto LAB_7fffa500557e;
      }
      pcVar19 = *(code **)(lVar13 + 0x40);
      if (pcVar19 == (code *)0x0) {
        *(uint64_t *)(puVar28 + -8) = 0x7fffa500557e;
        (*(code *)((int64_t)(short)(uVar39 + 0x12f0) + 0x7fffa52ca89d))(lVar45);
      }
      else {
        uVar22 = *(uint64_t *)(lVar13 + 0x48);
        *(uint64_t *)(puVar28 + -8) = 0x7fffa5005558;
        (*pcVar19)(uVar22);
      }
    }
LAB_7fffa500557e:
    *(uint64_t *)(puVar28 + -8) = 0x7fffa5005587;
    (*(code *)&DAT_7ff850519980)(lVar13);
    pcVar19 = *(code **)(lVar13 + 0x40);
    if (pcVar19 == (code *)0x0) {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa50055cd;
      (*(FUN_7fffa52c5e80 + (int64_t)(short)(uVar39 + 0x5d06) + 7))(lVar13,0x7fffa52c5e87,0);
    }
    else {
      uVar22 = *(uint64_t *)(lVar13 + 0x48);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5005599;
      (*pcVar19)(uVar22,lVar13);
    }
  }
  uVar22 = *(uint64_t *)((int64_t)plVar4 + ((uint64_t)(uint32_t)(iVar21 * 0x552326cc) ^ 0x7ffe02d4))
  ;
  pcVar19 = (code *)plVar4[0x45];
  *(uint64_t *)(puVar28 + -8) = 0x7fffa5005602;
  (*(code *)&DAT_7ff850519980)(plVar4 + 0x2b);
  *(uint64_t *)(puVar28 + -8) = 0x7fffa5005608;
  (*(code *)&DAT_7ff850519980)(plVar4 + 0x160);
  lVar13 = plVar4[0x51];
  if (lVar13 == 0) {
LAB_7fffa500561f:
    lVar13 = plVar4[0x53];
    if (lVar13 != 0) {
      if (pcVar19 == (code *)0x0) goto LAB_7fffa500566c;
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5005636;
      (*pcVar19)(uVar22);
    }
  }
  else {
    if (pcVar19 != (code *)0x0) {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa500561f;
      (*pcVar19)(uVar22);
      goto LAB_7fffa500561f;
    }
    uVar11 = iVar21 * -0x26a1465b + 0x938b7783;
    *(uint64_t *)(puVar28 + -8) = 0x7fffa5005660;
    (*(code *)((int64_t)(int)(uVar11 * 4 | uVar11 >> 0x1e) + 0x7fffa52d32a5))(lVar13);
    lVar13 = plVar4[0x53];
    if (lVar13 != 0) {
LAB_7fffa500566c:
      uVar39 = (uint16_t)(iVar21 * 0xbb29);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa500568e;
      (*(code *)((int64_t)(short)(uVar39 << 8 | uVar39 >> 8) + 0x7fffa52c6010))(lVar13);
    }
  }
  uVar17 = plVar4[0x177];
  if (uVar17 != 0) {
    uVar14 = *(uint64_t *)(uVar17 + 0x20);
    bVar51 = true;
    if (uVar14 <= uVar17) {
      bVar51 = *(uint64_t *)(uVar17 + 0x28) <= uVar17;
    }
    uVar22 = *(uint64_t *)(uVar17 + 0x17a8);
    pcVar19 = *(code **)(uVar17 + 0x17a0);
    *(uint8_t (*) [16])(uVar17 + 0x50) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar17 + 0x40) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar17 + 0x30) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar17 + 0x20) = (uint8_t  [16])0x0;
    *(uint64_t *)(uVar17 + 0x60) = 0;
    if (uVar14 == 0) {
LAB_7fffa50056f3:
      lVar15 = *(int64_t *)(puVar28 + 0x90);
      if (bVar51) {
        if (pcVar19 == (code *)0x0) goto LAB_7fffa5005743;
        *(uint64_t *)(puVar28 + -8) = 0x7fffa500570e;
        (*pcVar19)(uVar22,uVar17);
      }
    }
    else {
      if (pcVar19 != (code *)0x0) {
        *(uint64_t *)(puVar28 + -8) = 0x7fffa50056f3;
        (*pcVar19)(uVar22);
        goto LAB_7fffa50056f3;
      }
      lVar15 = *(int64_t *)(puVar28 + 0x90);
      *(uint64_t *)(puVar28 + -8) = 0x7fffa500573b;
      (*(code *)((int64_t)((int)lVar15 + -0x17400) + 0x7fffa52d2f8d))(uVar14);
      if (!bVar51) goto LAB_7fffa500576a;
LAB_7fffa5005743:
      bVar20 = (uint8_t)lVar15 & 0xf;
      *(uint64_t *)(puVar28 + -8) = 0x7fffa500576a;
      (*(code *)((int64_t)(short)(0x1fee << bVar20 | 0x1feeU >> 0x10 - bVar20) + 0x7fffa52c3c80))
                (uVar17);
    }
  }
LAB_7fffa500576a:
  sVar43 = (short)lVar15;
  lVar13 = plVar4[0x28];
  if (lVar13 != 0) {
    pcVar19 = (code *)plVar4[0x175];
    if (pcVar19 == (code *)0x0) {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa50057d0;
      (*(code *)((int64_t)(int)((uVar12 ^ 0x8477f9b) << 0xd | (uVar12 ^ 0x8477f9b) >> 0x13) +
                0x7fffa52d3ae8))(lVar13);
    }
    else {
      lVar45 = plVar4[0x176];
      *(uint64_t *)(puVar28 + -8) = 0x7fffa500579b;
      (*pcVar19)(lVar45,lVar13,0);
    }
  }
  pcVar19 = (code *)plVar4[0x175];
  if (pcVar19 == (code *)0x0) {
    bVar20 = (uint8_t)lVar15 & 0x1f;
    *(uint64_t *)(puVar28 + -8) = 0x7fffa5005812;
    (*(code *)(&UNK_7fffa52cc7f4 +
              (int)((0x2cabc866U >> bVar20 | 0x2cabc866 << 0x20 - bVar20) * -0x3fffff6b)))(plVar4);
  }
  else {
    lVar13 = plVar4[0x176];
    *(uint64_t *)(puVar28 + -8) = 0x7fffa50057e8;
    (*pcVar19)(lVar13,plVar4);
  }
LAB_7fffa5005812:
  *(uint64_t *)(puVar28 + 0xfb8) = 0;
  lVar13 = *(int64_t *)(puVar28 + 0x3d0);
  *(uint8_t (*) [16])(puVar28 + 0x400) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar28 + 0x3f0) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar28 + 0x3e0) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar28 + 0x3d0) = (uint8_t  [16])0x0;
  *(uint64_t *)(puVar28 + 0x410) = 0;
  if (lVar13 != 0) {
    if (*(code **)(puVar28 + 0x498) == (code *)0x0) {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa50058a6;
      (*(code *)((int64_t)(short)(0x7ac9 - sVar43) + 0x7fffa52c418a))(lVar13);
    }
    else {
      *(uint64_t *)(puVar28 + -8) = 0x7fffa5005881;
      (**(code **)(puVar28 + 0x498))(*(uint64_t *)(puVar28 + 0x4a0),lVar13,0);
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5007cbc  |  RVA: 0x897cbc  |  Size: 186 bytes
// Callers  : FUN_7fffa55f3250@0xe83250
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa4f54494@0x7e4494, FUN_7fffa52d2088@0xb62088
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5007cbc(uint64_t *param_1)

{
  uint8_t bVar1;
  uint64_t uVar2;
  
  if (DAT_7fffa4781c54 != '\0') {
    return;
  }
  LOCK();
  _DAT_7fffa4781c50 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (_DAT_7fffa4781c48 != _DAT_7fffa4780040) {
      bVar1 = (uint8_t)_DAT_7fffa4780040 & 0x3f;
      (*(code *)((_DAT_7fffa4780040 ^ _DAT_7fffa4781c48) >> bVar1 |
                (_DAT_7fffa4780040 ^ _DAT_7fffa4781c48) << 0x40 - bVar1))(0,0,0);
    }
    uVar2 = 0x7fffa4781d68;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_7fffa5007d2b;
    uVar2 = 0x7fffa4781d80;
  }
  FUN_7fffa4f54494(uVar2);
LAB_7fffa5007d2b:
  if (*(int *)*param_1 == 0) {
    FUN_7fffa52d2088(&UNK_7fffa58770c8,&UNK_7fffa58770e8);
  }
  FUN_7fffa52d2088(&UNK_7fffa58770f0,&UNK_7fffa5877100);
  if (*(int *)param_1[1] == 0) {
    DAT_7fffa4781c54 = '\x01';
    *(uint8_t *)param_1[2] = 1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5007d80  |  RVA: 0x897d80  |  Size: 558 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5007d80(void)

{
  uint64_t uVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint8_t bVar5;
  
  uRam00007fffa4784920 = 0;
  uRam00007fffa478490e = 0;
  uRam00007fffa4784916 = 0;
  uRam00007fffa47848fe = 0;
  uRam00007fffa4784906 = 0;
  uRam00007fffa47848ee = 0;
  uRam00007fffa47848f6 = 0;
  uRam00007fffa47848de = 0;
  uRam00007fffa47848e6 = 0;
  uRam00007fffa478491e = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) * 0xca143baf5cb0923 + 1;
  lVar4 = 3;
  while( true ) {
    lVar2 = lVar2 * 0xca143baf5cb0923 + 1;
    *(char *)(lVar4 + 0x7fffa47848cd) = (char)((uint64_t)lVar2 >> 0x20);
    if (lVar4 == 99) break;
    lVar2 = lVar2 * 0xca143baf5cb0923 + 1;
    lVar3 = lVar2 * 0xca143baf5cb0923 + 1;
    *(char *)(lVar4 + 0x7fffa47848ce) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar3 * 0xca143baf5cb0923 + 1;
    *(char *)(lVar4 + 0x7fffa47848d0) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar4 + 0x7fffa47848cf) = (char)((uint64_t)lVar3 >> 0x20);
    lVar4 = lVar4 + 4;
  }
  bVar5 = (char)uRam00007fffa47848de + 1;
  *(uint64_t *)((uint64_t)(bVar5 & 7) * 8 + 0x7fffa47848df) = ~uRam00007fffa4784920;
  uRam00007fffa47848de = CONCAT71(uRam00007fffa47848de._1_7_,bVar5) & 0xffffffffffffff07;
  return;
}


// ============================================================================
// Function : FUN_7fffa5007fb0  |  RVA: 0x897fb0  |  Size: 410 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5007fb0(void)

{
  uint32_t *puVar1;
  uint16_t uVar2;
  uint64_t in_RAX;
  code *pcVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int in_R11D;
  uint8_t in_TF;
  
  uVar5 = in_RAX >> 0x36 ^ in_RAX;
  uVar5 = (uVar5 << 0x25 | in_RAX >> 0x1b) ^ (uVar5 << 0x13 | in_RAX >> 0x2d) ^ uVar5;
  uVar5 = (uVar5 << 10 | uVar5 >> 0x36) ^ (uVar5 << 0x26 | uVar5 >> 0x1a) ^ uVar5;
  uVar5 = (uVar5 << 0xc | uVar5 >> 0x34) ^ (uVar5 << 0x14 | uVar5 >> 0x2c) ^ uVar5;
  uVar5 = (uVar5 << 0x18 | uVar5 >> 0x28) ^ (uVar5 << 0x28 | uVar5 >> 0x18) ^ uVar5;
  uVar2 = (uint16_t)in_R11D | 1;
  puVar1 = (uint32_t *)(**(int64_t **)
                      ((uVar5 << 0x30 | uVar5 >> 0x10) ^ (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar5) +
                   0x30);
  *puVar1 = *puVar1 & (int)(short)(uVar2 * -0x3540 | (uint16_t)(uVar2 * 0x2f2b) >> 10);
  if (0x6911e58 < 0x2823786aU - in_R11D) {
    return 0;
  }
  if ((_DAT_7fffa47c00a0 == (code *)0xffffffffffffffff) ||
     ((pcVar3 = _DAT_7fffa47c00a0, _DAT_7fffa47c00a0 == (code *)0x0 &&
      (pcVar3 = (code *)FUN_7fffa5488ca4(0x14,"LocaleNameToLCID",&UNK_7fffa56b3e90,&UNK_7fffa56b3e98
                                        ), pcVar3 == (code *)0x0)))) {
    uVar4 = FUN_7fffa5496490(0x6911e58);
  }
  else {
    uVar4 = (*pcVar3)(0x6911e58,(uint32_t)(in_TF & 1) * 0x100);
  }
  return uVar4;
}


// ============================================================================
// Function : FUN_7fffa5008150  |  RVA: 0x898150  |  Size: 98 bytes
// Callers  : FUN_7fffa5147134@0x9d7134
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa5496490@0xd26490, FUN_7fffa5488ca4@0xd18ca4
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5008150(uint64_t param_1,uint32_t param_2)

{
  code *pcVar1;
  
  if (_DAT_7fffa47c00a0 == (code *)0xffffffffffffffff) {
LAB_7fffa500819f:
    FUN_7fffa5496490(param_1);
  }
  else {
    pcVar1 = _DAT_7fffa47c00a0;
    if (_DAT_7fffa47c00a0 == (code *)0x0) {
      pcVar1 = (code *)FUN_7fffa5488ca4(0x14,"LocaleNameToLCID",&UNK_7fffa56b3e90,&UNK_7fffa56b3e98)
      ;
      if (pcVar1 == (code *)0x0) goto LAB_7fffa500819f;
    }
    (*pcVar1)(param_1,param_2);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa50081c0  |  RVA: 0x8981c0  |  Size: 242 bytes
// Callers  : FUN_7fffa54a3ba0@0xd33ba0
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t (*) [32]
FUN_7fffa50081c0(uint8_t (*param_1) [32],uint8_t (*param_2) [32],uint8_t param_3)

{
  uint16_t uVar1;
  uint8_t auVar2 [32];
  uint32_t uVar3;
  uint8_t *puVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [32];
  
  uVar6 = (int64_t)param_2 - (int64_t)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((_DAT_7fffa47800e4 & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((_DAT_7fffa47800e4 & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (uint16_t)(SUB161(auVar8 >> 7,0) & 1) | (uint16_t)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (uint16_t)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (uint16_t)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (uint16_t)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (uint16_t)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (uint16_t)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (uint16_t)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (uint16_t)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (uint16_t)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (uint16_t)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (uint16_t)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (uint16_t)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (uint16_t)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (uint16_t)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (uint8_t (*) [32])(*param_1 + uVar5);
        }
        param_1 = (uint8_t (*) [32])(*param_1 + 0x10);
      } while (param_1 != (uint8_t (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint32_t)(int)(char)param_3),(uint8_t  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint32_t)(SUB321(auVar2 >> 7,0) & 1) | (uint32_t)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint32_t)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint32_t)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint32_t)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint32_t)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint32_t)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint32_t)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint32_t)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint32_t)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint32_t)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint32_t)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint32_t)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint32_t)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint32_t)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint32_t)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint32_t)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint32_t)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint32_t)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint32_t)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint32_t)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint32_t)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint32_t)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint32_t)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint32_t)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint32_t)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint32_t)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint32_t)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint32_t)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint32_t)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint32_t)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint32_t)(uint8_t)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_7fffa5008261;
      param_1 = param_1 + 1;
    } while (param_1 != (uint8_t (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (uint64_t)((uint32_t)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(uint8_t (*) [32])(&UNK_7fffa56b2630 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(uint8_t (*) [32])(&UNK_7fffa56b2630 + -uVar7));
      uVar5 = (uint32_t)(SUB321(auVar10 >> 7,0) & 1) | (uint32_t)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint32_t)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint32_t)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint32_t)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint32_t)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint32_t)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint32_t)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint32_t)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint32_t)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint32_t)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint32_t)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint32_t)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint32_t)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint32_t)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint32_t)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint32_t)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint32_t)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint32_t)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint32_t)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint32_t)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint32_t)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint32_t)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint32_t)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint32_t)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint32_t)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint32_t)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint32_t)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint32_t)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint32_t)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint32_t)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
              (uint32_t)(uint8_t)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_7fffa5008261:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (uint8_t (*) [32])(*param_1 + uVar3);
      }
      param_1 = (uint8_t (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (uint8_t (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa50082b4  |  RVA: 0x8982b4  |  Size: 25 bytes
// Callers  : FUN_7fffa5660944@0xef0944
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa50082b4(void)

{
  return (uint64_t)(uint3)((uint32_t)*(uint32_t *)((int64_t)ProcessEnvironmentBlock + 0xbc) >> 8) &
         0xffffffffffffff01;
}


// ============================================================================
// Function : FUN_7fffa50082d0  |  RVA: 0x8982d0  |  Size: 111 bytes
// Callers  : FUN_7fffa5660680@0xef0680, FUN_7fffa5002dcc@0x892dcc
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa56266a0@0xeb66a0, FUN_7fffa4f54478@0x7e4478, FUN_7fffa5244778@0xad4778, FUN_7fffa524fccc@0xadfccc
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa50082d0(void)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar2 = FUN_7fffa56266a0();
  if (((_DAT_7fffa4780900 & *(uint32_t *)(lVar2 + 0x3a8)) == 0) ||
     (lVar3 = *(int64_t *)(lVar2 + 0x90), lVar3 == 0)) {
    FUN_7fffa5476b88(4);
    lVar3 = FUN_7fffa5244778((int64_t *)(lVar2 + 0x90),PTR_PTR_7fffa4782608);
    FUN_7fffa4f54478(4);
    if (lVar3 == 0) {
      FUN_7fffa524fccc();
      pcVar1 = (code *)__debugbreak();
      lVar2 = (*pcVar1)();
      return lVar2;
    }
  }
  return lVar3;
}


// ============================================================================
// Function : FUN_7fffa5008340  |  RVA: 0x898340  |  Size: 1048 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa5008340(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint32_t param_4,
                         int64_t param_5)

{
  uint8_t bVar1;
  int iVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint8_t bVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  int64_t in_RAX;
  uint64_t *puVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  int iVar17;
  uint32_t uVar18;
  uint64_t *puVar19;
  uint64_t in_R11;
  uint64_t *puVar20;
  uint32_t uVar21;
  
  bVar1 = *(uint8_t *)(in_RAX + 0x104);
  uVar8 = 1 << (bVar1 & 0x1f);
  iVar17 = 1 << (*(uint8_t *)(in_RAX + 0x10c) & 0x1f);
  uVar9 = 1 << (*(uint8_t *)(in_RAX + 0x100) & 0x1f);
  bVar7 = (uint8_t)param_4 & 0xf;
  lVar4 = *(int64_t *)(in_RAX + 0x70);
  iVar2 = *(int *)(in_RAX + 300);
  uVar18 = *(uint32_t *)(in_RAX + 0x1c);
  lVar5 = *(int64_t *)(in_RAX + 0x80);
  uVar3 = *(uint32_t *)(in_RAX + 0x2c);
  lVar6 = *(int64_t *)(in_RAX + 8);
  uVar14 = in_R11 >> 5 | in_R11;
  if ((uint64_t)(0xefd6963c - param_4) < (uint64_t)(int64_t)(int)(-0x4c091468 - param_4)) {
    uVar14 = in_R11 >> 5 ^ in_R11;
  }
  uVar14 = uVar14 >> 10 ^ uVar14;
  uVar14 = uVar14 >> 0x14 ^ uVar14;
  puVar16 = (uint64_t *)(uVar14 ^ 0xf4a1d15d ^ uVar14 >> 0x28);
  uVar21 = (int)puVar16 - (int)lVar6;
  uVar10 = uVar21 - uVar9;
  if (uVar21 - uVar18 <= uVar9) {
    uVar10 = uVar18;
  }
  if (*(uint32_t *)(in_RAX + 0x28) != (uint32_t)(uint16_t)(0 << bVar7 | 0U >> 0x10 - bVar7)) {
    uVar10 = uVar18;
  }
  uVar18 = uVar21;
  if (uVar21 < uVar3) {
    uVar18 = uVar3;
  }
  uVar9 = uVar21 - uVar8;
  if (uVar21 < uVar8) {
    uVar9 = 0;
  }
  uVar12 = 0x40 - *(int *)(in_RAX + 0x108);
  uVar14 = (uint64_t)uVar3;
  do {
    if (uVar14 == uVar18) break;
    uVar15 = *(int64_t *)(lVar6 + uVar14) * -0x30e4432340650000;
    uVar13 = uVar15 >> (uint64_t)uVar12;
    if ((uint64_t)(int64_t)(int)((param_4 ^ 0xcb8c1a2a) + 0xcc4cf527) <
        (uint64_t)~((param_4 | 1) * -0x6be82b2a)) {
      uVar13 = uVar15 * uVar12;
    }
    *(uint32_t *)(lVar5 + (uint64_t)((uint32_t)uVar14 & ~(-1 << (bVar1 & 0x1f))) * 4) =
         *(uint32_t *)(lVar4 + uVar13 * 4);
    *(uint32_t *)(lVar4 + uVar13 * 4) = (uint32_t)uVar14;
    uVar14 = (((param_4 | 1) * -0x7ee6ffb8 ^ 0xaee3dfe0) + 0xc000008c <
             ((param_4 + 0x4122a985) * 4 | param_4 + 0x4122a985 >> 0x1e)) + uVar14;
  } while (iVar2 == 0);
  *(uint32_t *)(in_RAX + 0x2c) = uVar21;
  uVar18 = *(uint32_t *)(lVar4 + (*puVar16 * -0x30e4432340650000 >> ((uint8_t)uVar12 & 0x3f)) * 4);
  uVar14 = 3;
  if (uVar18 < uVar10) {
LAB_7fffa500874e:
    return uVar14 + 0x153598c5;
  }
  uVar13 = 3;
  do {
    puVar19 = (uint64_t *)(lVar6 + (uint64_t)uVar18);
    if (*(int *)((uVar13 - 3) + (int64_t)puVar19) == *(int *)((int64_t)puVar16 + (uVar13 - 3))) {
      puVar11 = puVar16;
      if (puVar16 < (uint64_t *)((int64_t)param_2 - 7U)) {
        if (*puVar19 == *puVar16) {
          puVar19 = (uint64_t *)(lVar6 + 8 + (uint64_t)uVar18);
          puVar20 = puVar16;
          do {
            puVar11 = puVar11 + 1;
            if ((uint64_t *)((int64_t)param_2 - 7U) <= puVar11) goto joined_r0x7fffa5008658;
            uVar14 = *puVar19;
            puVar20 = puVar20 + 1;
            puVar19 = puVar19 + 1;
          } while (uVar14 == *puVar11);
          uVar3 = 0;
          for (uVar14 = *puVar11 ^ uVar14; (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x8000000000000000) {
            uVar3 = uVar3 + 1;
          }
          uVar14 = (int64_t)puVar20 + ((uint64_t)(uVar3 >> 3) - (int64_t)puVar16);
        }
        else {
          uVar3 = 0;
          for (uVar14 = *puVar16 ^ *puVar19; (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x8000000000000000) {
            uVar3 = uVar3 + 1;
          }
          uVar14 = (uint64_t)(uVar3 >> 3);
        }
      }
      else {
joined_r0x7fffa5008658:
        if ((puVar11 < (uint64_t *)((int64_t)param_2 - 3U)) && ((int)*puVar19 == (int)*puVar11)) {
          puVar11 = (uint64_t *)((int64_t)puVar11 + 4);
          puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
        }
        if ((puVar11 < (uint64_t *)((int64_t)param_2 - 1U)) &&
           ((short)*puVar19 == (short)*puVar11)) {
          puVar11 = (uint64_t *)((int64_t)puVar11 + 2);
          puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
        }
        if (puVar11 < param_2) {
          puVar11 = (uint64_t *)((int64_t)puVar11 + (uint64_t)((char)*puVar19 == (char)*puVar11))
          ;
        }
        uVar14 = (int64_t)puVar11 - (int64_t)puVar16;
      }
      if (uVar13 < uVar14) {
        *(uint64_t *)(param_5 * 0x1880bd4860ffd7cb) = (uint64_t)((uVar21 + 3) - uVar18);
        uVar13 = uVar14;
        if ((uint64_t *)((int64_t)puVar16 + uVar14) == param_2) goto LAB_7fffa500874e;
      }
    }
    uVar14 = uVar13;
    if ((uVar18 <= uVar9) ||
       (uVar18 = *(uint32_t *)(lVar5 + (uint64_t)(uVar18 & uVar8 - 1) * 4), uVar18 < uVar10))
    goto LAB_7fffa500874e;
    iVar17 = iVar17 + -1;
    uVar13 = uVar14;
    if (iVar17 == 0) goto LAB_7fffa500874e;
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa5008770  |  RVA: 0x898770  |  Size: 507 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5008770(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint8_t bVar4;
  int64_t lVar5;
  
  uRam00007fffa47bbda1 = 0;
  uRam00007fffa47bbd89 = 0;
  uRam00007fffa47bbd91 = 0;
  uRam00007fffa47bbd79 = 0;
  uRam00007fffa47bbd81 = 0;
  uRam00007fffa47bbd99 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0xf49d533ec12ca0a;
  lVar5 = 3;
  while( true ) {
    lVar2 = lVar2 * 0xf49d533ec12ca0a + 0xf49d533ec12ca0a;
    lVar3 = lVar2 * 0xf49d533ec12ca0a + 0xf49d533ec12ca0a;
    *(char *)(lVar5 + 0x7fffa47bbd76) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0xf49d533ec12ca0a + 0xf49d533ec12ca0a;
    *(char *)(lVar5 + 0x7fffa47bbd77) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar5 + 0x7fffa47bbd75) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar3 * 0xf49d533ec12ca0a + 0xf49d533ec12ca0a;
    *(char *)(lVar5 + 0x7fffa47bbd78) = (char)((uint64_t)lVar2 >> 0x20);
    if (lVar5 == 0x33) break;
    lVar5 = lVar5 + 4;
  }
  bVar4 = (char)uRam00007fffa47bbd79 + 1;
  *(uint64_t *)((uint64_t)(bVar4 & 3) * 8 + 0x7fffa47bbd7a) = ~uRam00007fffa47bbda1;
  uRam00007fffa47bbd79 = CONCAT71(uRam00007fffa47bbd79._1_7_,bVar4) & 0xffffffffffffff03;
  return;
}


// ============================================================================
// Function : FUN_7fffa5008970  |  RVA: 0x898970  |  Size: 2277 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa5008970(int64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
                     uint32_t *param_5,uint32_t param_6)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint32_t *puVar6;
  uint32_t *puVar7;
  uint32_t *puVar8;
  uint8_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint8_t bVar13;
  bool bVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  uint32_t uVar23;
  uint64_t in_RAX;
  uint64_t uVar24;
  uint32_t *puVar25;
  uint32_t *puVar26;
  uint32_t uVar27;
  uint32_t *puVar28;
  uint16_t uVar29;
  uint64_t uVar30;
  uint32_t in_R10D;
  uint32_t uVar31;
  uint32_t uVar32;
  uint64_t uVar33;
  uint32_t uVar34;
  int64_t in_R11;
  int64_t lVar35;
  int64_t lVar36;
  uint32_t *puVar37;
  uint32_t *puVar38;
  uint64_t uVar39;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint32_t uStack_8c;
  uint32_t uStack_68;
  uint32_t auStack_60 [4];
  uint64_t uStack_50;
  int iStack_44;
  
  uVar30 = param_4 - 0x6b1283e6;
  uVar30 = (uVar30 << 0x23 | uVar30 >> 0x1d) ^ (uVar30 << 0x2c | uVar30 >> 0x14) ^ uVar30;
  uVar30 = (uVar30 << 6 | uVar30 >> 0x3a) ^ (uVar30 << 0x18 | uVar30 >> 0x28) ^ uVar30;
  uVar30 = (uVar30 << 0xc | uVar30 >> 0x34) ^ (uVar30 << 0x30 | uVar30 >> 0x10) ^ uVar30;
  uVar30 = (uVar30 << 0x18 | uVar30 >> 0x28) ^ (uVar30 << 0x20 | uVar30 >> 0x20) ^ uVar30;
  puVar37 = (uint32_t *)(uVar30 << 0x10 | uVar30 >> 0x30);
  uVar10 = *puVar37;
  uVar30 = (uint64_t)uVar10;
  if (*(int64_t *)(param_1 + 0xe70) == 0) {
    if (*(int64_t *)(param_1 + 0xe78) == 0) {
      uStack_98 = 0;
      goto LAB_7fffa5008a43;
    }
    uVar34 = *(uint32_t *)(param_1 + 0xe80);
  }
  else {
    uVar34 = *(uint32_t *)(*(int64_t *)(param_1 + 0xe70) + 8);
  }
  uStack_98 = (uint64_t)uVar34;
LAB_7fffa5008a43:
  puVar8 = (uint32_t *)(param_3 + (int64_t)param_5);
  uStack_8c = *(uint32_t *)(*(int64_t *)(param_1 + 0xc80) + 0x15f8);
  auStack_60[2] = uStack_8c;
  uStack_a0 = *(uint64_t *)(*(int64_t *)(param_1 + 0xc80) + 0x15f0);
  auStack_60[0] = (uint32_t)uStack_a0;
  auStack_60[1] = (uint32_t)(uStack_a0 >> 0x20);
  if (uVar30 < in_RAX) {
    uVar34 = (in_R10D << 1 | (uint32_t)((int)in_R10D < 0)) ^ (in_R10D << 0x18 | in_R10D >> 8) ^ in_R10D;
    uVar34 = (uVar34 << 2 | uVar34 >> 0x1e) ^ (uVar34 << 0x10 | uVar34 >> 0x10) ^ uVar34;
    uVar31 = uVar34 << 0x1c | uVar34 >> 4;
    uStack_a0 = uStack_a0 & 0xffffffff;
    uStack_68 = auStack_60[1];
    bVar13 = (uint8_t)param_6;
    puVar26 = puVar8 + -8;
    uStack_50 = (uint64_t)
                ((0x8f7932a9U >> (bVar13 & 0x1f) | -0x7086cd57 << 0x20 - (bVar13 & 0x1f)) +
                0xd5670c5d);
    iStack_44 = uVar31 * -0x3fffe593 + 0x364767f3;
    do {
      uVar34 = (uint32_t)uVar30;
      puVar1 = (uint32_t *)(in_R11 + uVar30 * 0x10);
      uVar11 = *(uint32_t *)(in_R11 + 8 + uVar30 * 0x10);
      if (((uint64_t)uVar11 == 0) && (*puVar1 == 0)) break;
      uVar12 = puVar1[1];
      uVar30 = (uint64_t)uVar12;
      if (iStack_44 == 0x68a73319) {
        uVar27 = *puVar1 + 3;
      }
      else {
        uVar32 = *puVar1;
        uVar24 = (uint64_t)uVar32;
        bVar14 = uVar30 == 0;
        if ((int)((0x4e8a9409U >> (bVar13 & 0x1f) | 0x4e8a9409 << 0x20 - (bVar13 & 0x1f)) ^
                 0xe34da325) <= (int)((param_6 | 1) * -0x3ea08cbe + 0x1ca431d4)) {
          bVar14 = ((param_6 ^ 0x56cc) * 0x3539 & 0xffff) <= uVar12;
        }
        if ((bVar14 == false) && (uVar27 = 1, uVar32 == (uint32_t)uStack_a0)) {
LAB_7fffa5008c80:
          uVar32 = uVar27 - (bVar14 ^ 1);
          if ((int)uVar32 < (int)(((param_6 | 1) * 0x1e30 ^ 0x4c73) & 0xffff)) {
            if (uVar32 == 0) goto LAB_7fffa5008d01;
            uVar23 = auStack_60[uVar32];
          }
          else {
            uVar23 = (uint32_t)uStack_a0 - 1;
          }
          uVar24 = (uint64_t)uVar23;
          auStack_60[2] = uStack_68;
          if (uVar32 == 1) {
            auStack_60[2] = uStack_8c;
          }
        }
        else {
          if (uVar32 == uStack_68) {
            uVar27 = 2 - bVar14;
            goto LAB_7fffa5008c80;
          }
          if (uVar32 == uStack_8c) {
            uVar27 = bVar14 ^ 3;
            goto LAB_7fffa5008c80;
          }
          if (((bVar14 != false) && (uVar27 = 3, uVar32 == (uint32_t)uStack_a0 - 1)) ||
             (uVar27 = uVar32 + 3, uVar27 < 4)) goto LAB_7fffa5008c80;
          auStack_60[2] = uStack_68;
        }
        auStack_60[0] = (uint32_t)uVar24;
        auStack_60[1] = (uint32_t)uStack_a0;
        uStack_68 = (uint32_t)uStack_a0;
        uStack_a0 = uVar24;
        uStack_8c = auStack_60[2];
      }
LAB_7fffa5008d01:
      if (*(uint32_t *)(param_1 + 0x170) != ((param_6 ^ 0x56cc) * -0x299f & 0xffff)) {
        uVar24 = (int64_t)(int)(uVar11 + uVar12);
        if (-0x70e5a5b4 - param_6 == (param_6 ^ 0x13c3b64c) * 0x61272dc7) {
          uVar24 = (uint64_t)(uVar11 + uVar12);
        }
        uVar24 = uVar24 + *(int64_t *)(puVar37 + 2);
        *(uint64_t *)(puVar37 + 2) = uVar24;
        uVar39 = 1L << (*(uint8_t *)(param_1 + 0xec) & 0x3f);
        if (uVar24 <= uVar39) {
          uVar39 = uStack_98 + uVar24;
        }
        if (uVar39 + 3 < (uint64_t)uVar27) {
          return;
        }
        if (uVar11 < 4 - (*(int64_t *)(param_1 + 0x1a8) != 0 ||
                         *(uint32_t *)(param_1 + 0xfc) == ((param_6 | 1) * 0x920f & 0xffff))) {
          return;
        }
      }
      if (*(uint64_t *)(param_1 + uStack_50) <= (uint64_t)(uVar34 - *puVar37)) {
        return;
      }
      puVar38 = *(uint32_t **)(param_1 + 0x3d0);
      puVar2 = (uint32_t *)((int64_t)param_5 + uVar30);
      if (puVar26 < puVar2) {
        puVar28 = param_5;
        puVar25 = puVar38;
        if (param_5 <= puVar26) {
          puVar25 = (uint32_t *)((int64_t)puVar38 + ((int64_t)puVar26 - (int64_t)param_5));
          uVar15 = param_5[1];
          uVar16 = param_5[2];
          uVar17 = param_5[3];
          *puVar38 = *param_5;
          puVar38[1] = uVar15;
          puVar38[2] = uVar16;
          puVar38[3] = uVar17;
          puVar28 = puVar26;
          if (0x10 < (int64_t)puVar26 - (int64_t)param_5) {
            lVar36 = 0x10;
            do {
              uVar22 = ((uint64_t *)((int64_t)param_5 + lVar36))[1];
              *(uint64_t *)((int64_t)puVar38 + lVar36) =
                   *(uint64_t *)((int64_t)param_5 + lVar36);
              ((uint64_t *)((int64_t)puVar38 + lVar36))[1] = uVar22;
              puVar7 = (uint32_t *)((int64_t)param_5 + lVar36 + 0x10);
              uVar15 = puVar7[1];
              uVar16 = puVar7[2];
              uVar17 = puVar7[3];
              puVar6 = (uint32_t *)((int64_t)puVar38 + lVar36 + 0x10);
              *puVar6 = *puVar7;
              puVar6[1] = uVar15;
              puVar6[2] = uVar16;
              puVar6[3] = uVar17;
              lVar35 = lVar36 + 0x20;
              lVar36 = lVar36 + 0x20;
            } while ((uint32_t *)((int64_t)puVar38 + lVar35) < puVar25);
          }
        }
        if (puVar28 < puVar2) {
          uVar24 = (int64_t)puVar2 - (int64_t)puVar28;
          if ((uVar24 < 4) || ((uint64_t)((int64_t)puVar25 - (int64_t)puVar28) < 0x20)) {
LAB_7fffa5008f74:
            puVar38 = puVar25;
          }
          else {
            if (uVar24 < 0x20) {
              uVar39 = 0;
            }
            else {
              uVar39 = uVar24 & 0xffffffffffffffe0;
              uVar33 = 0;
              do {
                puVar38 = (uint32_t *)((int64_t)puVar28 + uVar33);
                uVar15 = puVar38[1];
                uVar16 = puVar38[2];
                uVar17 = puVar38[3];
                puVar7 = (uint32_t *)((int64_t)puVar28 + uVar33 + 0x10);
                uVar18 = *puVar7;
                uVar19 = puVar7[1];
                uVar20 = puVar7[2];
                uVar21 = puVar7[3];
                puVar7 = (uint32_t *)((int64_t)puVar25 + uVar33);
                *puVar7 = *puVar38;
                puVar7[1] = uVar15;
                puVar7[2] = uVar16;
                puVar7[3] = uVar17;
                puVar38 = (uint32_t *)((int64_t)puVar25 + uVar33 + 0x10);
                *puVar38 = uVar18;
                puVar38[1] = uVar19;
                puVar38[2] = uVar20;
                puVar38[3] = uVar21;
                uVar33 = uVar33 + 0x20;
              } while (uVar39 != uVar33);
              if (uVar24 == uVar39) goto LAB_7fffa5009070;
              if ((uVar24 & 0x1c) == 0) {
                puVar28 = (uint32_t *)((int64_t)puVar28 + uVar39);
                puVar25 = (uint32_t *)((int64_t)puVar25 + uVar39);
                goto LAB_7fffa5008f74;
              }
            }
            uVar33 = uVar24 & 0xfffffffffffffffc;
            puVar38 = (uint32_t *)((int64_t)puVar25 + uVar33);
            for (; *(uint32_t *)((int64_t)puVar25 + uVar39) =
                        *(uint32_t *)((int64_t)puVar28 + uVar39), uVar33 - 4 != uVar39;
                uVar39 = uVar39 + 4) {
            }
            if (uVar24 == uVar33) goto LAB_7fffa5009070;
            puVar28 = (uint32_t *)((int64_t)puVar28 + uVar33);
          }
          uVar32 = (int)puVar2 - (int)puVar28 & 7;
          uVar24 = (uint64_t)uVar32;
          puVar25 = puVar28;
          if (uVar32 != 0) {
            do {
              uVar9 = *(uint8_t *)puVar25;
              puVar25 = (uint32_t *)((int64_t)puVar25 + 1);
              *(uint8_t *)puVar38 = uVar9;
              puVar38 = (uint32_t *)((int64_t)puVar38 + 1);
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          if ((uint8_t *)
              (uint64_t)(0x7000U >> (bVar13 & 0x1f) | 0x7000 << 0x20 - (bVar13 & 0x1f)) <=
              (uint8_t *)(~(uint64_t)puVar28 + (int64_t)puVar2)) {
            lVar36 = 0;
            do {
              *(uint8_t *)((int64_t)puVar38 + lVar36) =
                   *(uint8_t *)((int64_t)puVar25 + lVar36);
              *(uint8_t *)((int64_t)puVar38 + lVar36 + 1) =
                   *(uint8_t *)((int64_t)puVar25 + lVar36 + 1);
              *(uint8_t *)((int64_t)puVar38 + lVar36 + 2) =
                   *(uint8_t *)((int64_t)puVar25 + lVar36 + 2);
              *(uint8_t *)((int64_t)puVar38 + lVar36 + 3) =
                   *(uint8_t *)((int64_t)puVar25 + lVar36 + 3);
              *(uint8_t *)((int64_t)puVar38 + lVar36 + 4) =
                   *(uint8_t *)((int64_t)puVar25 + lVar36 + 4);
              *(uint8_t *)((int64_t)puVar38 + lVar36 + 5) =
                   *(uint8_t *)((int64_t)puVar25 + lVar36 + 5);
              *(uint8_t *)((int64_t)puVar38 + lVar36 + 6) =
                   *(uint8_t *)((int64_t)puVar25 + lVar36 + 6);
              *(uint8_t *)((int64_t)puVar38 + lVar36 + 7) =
                   *(uint8_t *)((int64_t)puVar25 + lVar36 + 7);
              lVar35 = lVar36 + 8;
              lVar36 = lVar36 + 8;
            } while ((uint32_t *)((int64_t)puVar25 + lVar35) != puVar2);
          }
        }
LAB_7fffa5009070:
        lVar36 = *(int64_t *)(param_1 + 0x3c0);
        *(int64_t *)(param_1 + 0x3d0) = *(int64_t *)(param_1 + 0x3d0) + uVar30;
        if (0xffff < uVar12) {
          *(uint32_t *)(param_1 + 0x400) = 1;
          *(int *)(param_1 + 0x404) =
               (int)((uint64_t)(lVar36 - *(int64_t *)(param_1 + 0x3b8)) >> 3);
        }
      }
      else {
        uVar15 = param_5[1];
        uVar16 = param_5[2];
        uVar17 = param_5[3];
        *puVar38 = *param_5;
        puVar38[1] = uVar15;
        puVar38[2] = uVar16;
        puVar38[3] = uVar17;
        if (0x10 < uVar12) {
          uVar15 = param_5[5];
          uVar16 = param_5[6];
          uVar17 = param_5[7];
          lVar36 = *(int64_t *)(param_1 + 0x3d0);
          *(uint32_t *)(lVar36 + 0x10) = param_5[4];
          *(uint32_t *)(lVar36 + 0x14) = uVar15;
          *(uint32_t *)(lVar36 + 0x18) = uVar16;
          *(uint32_t *)(lVar36 + 0x1c) = uVar17;
          if (0x10 < uVar12 - 0x10) {
            lVar35 = 0;
            do {
              puVar5 = (uint64_t *)((int64_t)param_5 + lVar35 + 0x20);
              uVar22 = puVar5[1];
              puVar3 = (uint64_t *)(lVar36 + 0x20 + lVar35);
              *puVar3 = *puVar5;
              puVar3[1] = uVar22;
              puVar2 = (uint32_t *)((int64_t)param_5 + lVar35 + 0x30);
              uVar15 = puVar2[1];
              uVar16 = puVar2[2];
              uVar17 = puVar2[3];
              puVar38 = (uint32_t *)(lVar36 + 0x30 + lVar35);
              *puVar38 = *puVar2;
              puVar38[1] = uVar15;
              puVar38[2] = uVar16;
              puVar38[3] = uVar17;
              lVar4 = lVar36 + 0x20 + lVar35;
              lVar35 = lVar35 + 0x20;
            } while (lVar4 + 0x20U < lVar36 + uVar30);
            goto LAB_7fffa5009070;
          }
        }
        lVar36 = *(int64_t *)(param_1 + 0x3c0);
        *(int64_t *)(param_1 + 0x3d0) = *(int64_t *)(param_1 + 0x3d0) + uVar30;
      }
      uVar30 = (uint64_t)uVar11 - 3;
      *(short *)(lVar36 + 4) = (short)uVar12;
      **(uint32_t **)(param_1 + 0x3c0) = uVar27;
      if (0xffff < uVar30) {
        *(uint32_t *)(param_1 + 0x400) = 2;
        *(int *)(param_1 + 0x404) =
             (int)((uint64_t)(*(int64_t *)(param_1 + 0x3c0) - *(int64_t *)(param_1 + 0x3b8)) >> 3
                  );
      }
      *(short *)(*(int64_t *)(param_1 + 0x3c0) + 6) = (short)uVar30;
      *(int64_t *)(param_1 + 0x3c0) = *(int64_t *)(param_1 + 0x3c0) + 8;
      param_5 = (uint32_t *)((int64_t)param_5 + (uint64_t)(uVar12 + uVar11));
      uVar34 = uVar34 + 1;
      uVar30 = (uint64_t)uVar34;
    } while (uVar30 < in_RAX);
    uVar11 = auStack_60[1];
    if (uVar34 != uVar10 && uVar31 * 0xfffff == 2) {
      if (uVar34 - 1 < uVar10 + 2) {
        if (uVar34 == uVar10 + 2) {
          auStack_60[2] = auStack_60[0];
          auStack_60[1] = *(uint32_t *)(in_R11 + (uint64_t)(uVar34 - 2) * 0x10);
        }
        else {
          auStack_60[1] = auStack_60[0];
          auStack_60[2] = uVar11;
        }
      }
      else {
        auStack_60[1] = *(uint32_t *)(in_R11 + (uint64_t)(uVar34 - 2) * 0x10);
        auStack_60[2] = *(uint32_t *)(in_R11 + (uint64_t)(uVar34 - 3) * 0x10);
      }
      auStack_60[0] = *(uint32_t *)(in_R11 + (uint64_t)(uVar34 - 1) * 0x10);
    }
  }
  else {
    uVar34 = uVar10;
  }
  uVar29 = (uint16_t)param_6 ^ 0x6ef3;
  lVar36 = *(int64_t *)(param_1 + 0xc88);
  *(uint32_t *)(lVar36 + 0x15f8) = auStack_60[2];
  *(uint64_t *)(lVar36 + 0x15f0) = CONCAT44(auStack_60[1],auStack_60[0]);
  uVar10 = *(uint32_t *)(in_R11 + 4 + uVar30 * 0x10);
  if (uVar10 != (uint16_t)((uVar29 << 10 | uVar29 >> 6) + 800)) {
    FUN_7fffa56a5f20(*(uint64_t *)(param_1 + 0x3d0),param_5,(uint64_t)uVar10);
    *(int64_t *)(param_1 + 0x3d0) = *(int64_t *)(param_1 + 0x3d0) + (uint64_t)uVar10;
    uVar30 = (uint64_t)*(uint32_t *)(in_R11 + uVar30 * 0x10 + 4);
    param_5 = (uint32_t *)((int64_t)param_5 + uVar30);
    *(uint64_t *)(puVar37 + 2) = *(int64_t *)(puVar37 + 2) + uVar30;
  }
  if (param_5 == puVar8) {
    *puVar37 = uVar34 + 1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5009290  |  RVA: 0x899290  |  Size: 143 bytes
// Callers  : FUN_7fffa5697680@0xf27680
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5009316) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

uint64_t FUN_7fffa5009290(int64_t param_1)

{
  IMAGE_SECTION_HEADER *pIVar1;
  
  pIVar1 = &IMAGE_SECTION_HEADER_7fffa4770180;
  while( true ) {
    if (pIVar1 == (IMAGE_SECTION_HEADER *)&UNK_7fffa4770270) {
      return 0x7fffa4770200;
    }
    if (((uint64_t)(uint32_t)pIVar1->VirtualAddress <= param_1 - 0x7fffa4770000U) &&
       (param_1 - 0x7fffa4770000U <
        (uint64_t)((pIVar1->Misc).PhysicalAddress + pIVar1->VirtualAddress))) break;
    pIVar1 = pIVar1 + 1;
  }
  if ((int)pIVar1->Characteristics < 0) {
    return (uint64_t)pIVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((uint64_t)pIVar1 >> 8),1);
}


// ============================================================================
// Function : FUN_7fffa5009330  |  RVA: 0x899330  |  Size: 128440 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5009330(void) {
    /* +0x899330 */ __asm { PUSH RBP }
    /* +0x899331 */ __asm { PUSH R13 }
    /* +0x899333 */ __asm { PUSH R15 }
    /* +0x899335 */ __asm { PUSH RBX }
    /* +0x899336 */ __asm { PUSH R12 }
    /* +0x899338 */ __asm { PUSH R14 }
    /* +0x89933a */ __asm { PUSH RDI }
    /* +0x89933b */ __asm { PUSH RSI }
    /* +0x89933c */ __asm { SUB RSP,0x698 }
    /* +0x899343 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x89934b */ __asm { MOVDQA xmmword ptr [RBP + 0x600],XMM14 }
    /* +0x899354 */ __asm { MOVAPS xmmword ptr [RBP + 0x5f0],XMM11 }
    /* +0x89935c */ __asm { MOVDQA xmmword ptr [RBP + 0x5e0],XMM15 }
    /* +0x899365 */ __asm { MOVAPS xmmword ptr [RBP + 0x5d0],XMM10 }
    /* +0x89936d */ __asm { MOVAPS xmmword ptr [RBP + 0x5c0],XMM12 }
    /* +0x899375 */ __asm { MOVAPS xmmword ptr [RBP + 0x5b0],XMM7 }
    /* +0x89937c */ __asm { MOVAPS xmmword ptr [RBP + 0x5a0],XMM8 }
    /* +0x899384 */ __asm { MOVAPS xmmword ptr [RBP + 0x590],XMM13 }
    /* +0x89938c */ __asm { MOVAPS xmmword ptr [RBP + 0x580],XMM9 }
    /* +0x899394 */ __asm { MOVAPS xmmword ptr [RBP + 0x570],XMM6 }
    /* +0x89939b */ __asm { MOV qword ptr [RBP + 0x568],-0x2 }
    /* +0x8993a6 */ __asm { MOV R12,R8 }
    /* +0x8993a9 */ __asm { MOV AX,0x5f65 }
    /* +0x8993ad */ __asm { ADD EAX,R12D }
    /* +0x8993b0 */ __asm { IMUL EAX,EAX,0x1c19 }
    /* +0x8993b6 */ __asm { ROL AX,0xa }
    /* +0x8993ba */ __asm { MOVZX EDX,AX }
    /* +0x8993bd */ __asm { MOV R8,qword ptr GS:[RDX] }
    /* +0x8993c1 */ __asm { MOV RDX,-0x189802d9a041f3da }
    /* +0x8993cb */ __asm { IMUL RDX,RDX,-0x132a2527 }
    /* +0x8993d2 */ __asm { MOV R8,qword ptr [R8 + 0x30] }
    /* +0x8993d6 */ __asm { MOV RAX,0x6ae6808650e1742b }
    /* +0x8993e0 */ __asm { OR RAX,R8 }
    /* +0x8993e3 */ __asm { ROL RAX,0x27 }
    /* +0x8993e7 */ __asm { MOV R8D,0x8ae8d7b8 }
    /* +0x8993ed */ __asm { XOR R8,RAX }
    /* +0x8993f0 */ __asm { XOR R8,RDX }
    /* +0x8993f3 */ __asm { CMP R8,-0x1 }
    /* +0x8993f7 */ __asm { JZ 0x7fffa5029b00 }
    /* +0x8993fd */ __asm { XORPS XMM1,XMM1 }
    /* +0x899400 */ __asm { MOVAPS xmmword ptr [RBP + 0xa0],XMM1 }
    /* +0x899407 */ __asm { MOVAPS xmmword ptr [RBP + 0x90],XMM1 }
    /* +0x89940e */ __asm { MOVAPS xmmword ptr [RBP + 0x80],XMM1 }
    /* +0x899415 */ __asm { MOVAPS xmmword ptr [RBP + 0x70],XMM1 }
    /* +0x899419 */ __asm { MOV dword ptr [RBP + 0x420],0x0 }
    /* +0x899423 */ __asm { MOV dword ptr [RBP + 0x460],0xd47e1044 }
    /* +0x89942d */ __asm { MOV EAX,dword ptr [RBP + 0x460] }
    /* +0x899433 */ __asm { MOV dword ptr [RBP + 0x460],0x7e262690 }
    /* +0x89943d */ __asm { MOV EAX,dword ptr [RBP + 0x460] }
    /* +0x899443 */ __asm { CMP EAX,0xca201b76 }
    /* +0x899448 */ __asm { NOP }
    /* +0x899449 */ __asm { NOP }
    /* +0x89944a */ __asm { NOP }
    /* +0x89944b */ __asm { NOP }
    /* +0x89944c */ __asm { NOP }
    /* +0x89944d */ __asm { MOV AX,0xd9ce }
    /* +0x899451 */ __asm { LEA R8,[0x7fffa4787366] }
    /* +0x899458 */ __asm { IMUL R11D,EAX,0x2675 }
    /* +0x89945f */ __asm { LEA RDX,[0x7fffa478dc3e] }
    /* +0x899466 */ __asm { MOV EAX,0xdfce2f0d }
    /* +0x89946b */ __asm { MOV EDI,R12D }
    /* +0x89946e */ __asm { OR EDI,0x1 }
    /* +0x899471 */ __asm { MOV R9W,0xbaf0 }
    /* +0x899476 */ __asm { XOR R9D,R12D }
    /* +0x899479 */ __asm { MOVSX R10,R9W }
    /* +0x89947d */ __asm { XOR R10,0x3d1e }
    /* +0x899484 */ __asm { ROL R11W,0x8 }
    /* +0x899489 */ __asm { ADD R11D,R12D }
    /* +0x89948c */ __asm { MOVSX R11,R11W }
    /* +0x899490 */ __asm { MOV R8,qword ptr [R8 + R11*0x1 + 0x48] }
    /* +0x899495 */ __asm { XOR EAX,0x2dade215 }
    /* +0x89949a */ __asm { IMUL EAX,EDI }
    /* +0x89949d */ __asm { ADD EAX,0x4536c85a }
    /* +0x8994a2 */ __asm { MOVSXD R11,EAX }
    /* +0x8994a5 */ __asm { MOV RDX,qword ptr [RDX + R11*0x1 + 0x38] }
    /* +0x8994aa */ __asm { LEA R11,[0x7fffa47812ab] }
    /* +0x8994b1 */ __asm { MOV R11,qword ptr [R11 + R10*0x1 + 0x40] }
    /* +0x8994b6 */ __asm { XOR EAX,EAX }
    /* +0x8994b8 */ __asm { MOVDQA XMM1,xmmword ptr [0x7fffa56b85c0] }
    /* +0x8994c0 */ __asm { XOR R9D,R9D }
    /* +0x8994c3 */ __asm { MOV qword ptr [RBP + 0x2d8],RDI }
    /* +0x8994ca */ __asm { MOV ESI,0xfa1f090b }
    /* +0x8994cf */ __asm { MOV R10,RAX }
    /* +0x8994d2 */ __asm { SHL R10,0x4 }
    /* +0x8994d6 */ __asm { MOVDQA XMM5,xmmword ptr [R11 + R10*0x1] }
    /* +0x8994dc */ __asm { MOVDQA xmmword ptr [RBP + 0x2e0],XMM5 }
    /* +0x8994e4 */ __asm { PCMPEQB XMM5,XMM1 }
    /* +0x8994e8 */ __asm { PMOVMSKB ECX,XMM5 }
    /* +0x8994ec */ __asm { MOV R10D,ECX }
    /* +0x8994ef */ __asm { SHL R10D,0xf }
    /* +0x8994f3 */ __asm { SUB R10D,ECX }
    /* +0x8994f6 */ __asm { MOV R14D,ECX }
    /* +0x8994f9 */ __asm { AND R14D,0x7fff }
    /* +0x899500 */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0x2ef] }
    /* +0x899507 */ __asm { MOV EBX,0x3df0d39e }
    /* +0x89950c */ __asm { ADD EBX,0x712fb092 }
    /* +0x899512 */ __asm { IMUL EBX,EDI }
    /* +0x899515 */ __asm { XOR ESI,0x3fffffd7 }
    /* +0x89951b */ __asm { ADD ESI,0x46faf0cf }
    /* +0x899521 */ __asm { CMP RBX,RSI }
    /* +0x899524 */ __asm { CMOVL R10D,R14D }
    /* +0x899528 */ __asm { TEST R10W,R10W }
    /* +0x89952c */ __asm { JZ 0x7fffa5009560 }
    /* +0x89952e */ __asm { IMUL RBX,RAX,0x78 }
    /* +0x899532 */ __asm { LEA RDI,[R8 + RBX*0x1] }
    /* +0x899536 */ __asm { MOVZX ESI,R10W }
    /* +0x89953a */ __asm { NOP dword ptr [R8 + RBX*0x1] }
    /* +0x89953f */ __asm { TZCNT R10D,ESI }
    /* +0x899544 */ __asm { MOV R10,qword ptr [RDI + R10*0x8] }
    /* +0x899548 */ __asm { CMP dword ptr [R10],0x0 }
    /* +0x89954c */ __asm { JZ 0x7fffa5009587 }
    /* +0x89954e */ __asm { LEA R10D,[RSI + -0x1] }
    /* +0x899552 */ __asm { AND R10D,ESI }
    /* +0x899555 */ __asm { MOV ESI,R10D }
    /* +0x899558 */ __asm { JNZ 0x7fffa500953f }
    /* +0x89955a */ __asm { NOP word ptr [RAX + RAX*0x1] }
    /* +0x899560 */ __asm { TEST CL,0x1 }
    /* +0x899563 */ __asm { JZ 0x7fffa5009626 }
    /* +0x899569 */ __asm { INC R9 }
    /* +0x89956c */ __asm { CMP R9,RDX }
    /* +0x89956f */ __asm { JA 0x7fffa5009626 }
    /* +0x899575 */ __asm { ADD RAX,R9 }
    /* +0x899578 */ __asm { AND RAX,RDX }
    /* +0x89957b */ __asm { MOV RDI,qword ptr [RBP + 0x2d8] }
    /* +0x899582 */ __asm { JMP 0x7fffa50094ca }
    /* +0x899587 */ __asm { MOV RAX,0x0 }
    /* +0x89958e */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x899595 */ __asm { NOP }
    /* +0x899596 */ __asm { MOV dword ptr [RBP + 0x460],0xae16eeea }
    /* +0x8995a0 */ __asm { MOV EAX,dword ptr [RBP + 0x460] }
    /* +0x8995a6 */ __asm { TEST EAX,EAX }
    /* +0x8995a8 */ __asm { NOP }
    /* +0x8995a9 */ __asm { NOP }
    /* +0x8995aa */ __asm { NOP }
    /* +0x8995ab */ __asm { NOP }
    /* +0x8995ac */ __asm { NOP }
    /* +0x8995ad */ __asm { NOP }
    /* +0x8995ae */ __asm { NOP }
    /* +0x8995af */ __asm { NOP }
    /* +0x8995b0 */ __asm { NOP }
    /* +0x8995b1 */ __asm { NOP }
    /* +0x8995b2 */ __asm { NOP }
    /* +0x8995b3 */ __asm { NOP }
    /* +0x8995b4 */ __asm { PUSHFQ }
    /* +0x8995b5 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x8995bd */ __asm { POPFQ }
    /* +0x8995be */ __asm { MOV EAX,dword ptr [R10 + 0x10] }
    /* +0x8995c2 */ __asm { SUB EAX,dword ptr [R10 + 0x8] }
    /* +0x8995c6 */ __asm { MOV dword ptr [RBP + 0x420],EAX }
    /* +0x8995cc */ __asm { MOV dword ptr [RBP + 0x460],0xfa5abcc2 }
    /* +0x8995d6 */ __asm { MOV EAX,dword ptr [RBP + 0x460] }
    /* +0x8995dc */ __asm { TEST AL,0x1 }
    /* +0x8995de */ __asm { JNZ 0x7fffa5042ff1 }
    /* +0x8995e4 */ __asm { MOV R8,qword ptr [R10 + 0x10] }
    /* +0x8995e8 */ __asm { SUB R8,qword ptr [R10 + 0x8] }
    /* +0x8995ec */ __asm { CMP R8,0x41 }
    /* +0x8995f0 */ __asm { JNC 0x7fffa5009897 }
    /* +0x8995f6 */ __asm { MOV dword ptr [RBP + 0x460],0xd80884ab }
    /* +0x899600 */ __asm { MOV EAX,dword ptr [RBP + 0x460] }
    /* +0x899606 */ __asm { TEST AL,0x1 }
    /* +0x899608 */ __asm { NOP }
    /* +0x899609 */ __asm { NOP }
    /* +0x89960a */ __asm { NOP }
    /* +0x89960b */ __asm { NOP }
    /* +0x89960c */ __asm { NOP }
    /* +0x89960d */ __asm { MOV RDX,qword ptr [R10 + 0x8] }
    /* +0x899611 */ __asm { MOV R8,qword ptr [R10 + 0x10] }
    /* +0x899615 */ __asm { SUB R8,RDX }
    /* +0x899618 */ __asm { LEA RCX,[RBP + 0x70] }
    /* +0x89961c */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x899621 */ __asm { JMP 0x7fffa5009ebe }
    /* +0x899626 */ __asm { MOV dword ptr [RBP + 0x460],0xb65bee60 }
    /* +0x899630 */ __asm { MOV EAX,dword ptr [RBP + 0x460] }
    /* +0x899636 */ __asm { RDTSC }
    /* +0x899638 */ __asm { SHL RDX,0x20 }
    /* +0x89963c */ __asm { OR RDX,RAX }
    /* +0x89963f */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0x899649 */ __asm { IMUL RDX,R8 }
    /* +0x89964d */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0x899657 */ __asm { LEA RCX,[RDX + R10*0x1] }
    /* +0x89965b */ __asm { MOV R11,RCX }
    /* +0x89965e */ __asm { SHR R11,0x1b }
    /* +0x899662 */ __asm { MOV RDX,RCX }
    /* +0x899665 */ __asm { SHR RDX,0x2d }
    /* +0x899669 */ __asm { XOR EDX,R11D }
    /* +0x89966c */ __asm { SHR RCX,0x3b }
    /* +0x899670 */ __asm { ROR EDX,CL }
    /* +0x899672 */ __asm { AND EDX,0x3 }
    /* +0x899675 */ __asm { CMP EDX,0x2 }
    /* +0x899678 */ __asm { JNC 0x7fffa5009919 }
    /* +0x89967e */ __asm { CMP EDX,0x1 }
    /* +0x899681 */ __asm { JZ 0x7fffa5009c3e }
    /* +0x899687 */ __asm { MOV EAX,0x2a75b1cd }
    /* +0x89968c */ __asm { MOV R8,0x7ef0776ae5cb2f2 }
    /* +0x899696 */ __asm { CMP RAX,R8 }
    /* +0x899699 */ __asm { JZ 0x7fffa50557c5 }
    /* +0x89969f */ __asm { MOV R9W,0x87b }
    /* +0x8996a4 */ __asm { MOV R8D,0x23bbb261 }
    /* +0x8996aa */ __asm { SUB R8D,R12D }
    /* +0x8996ad */ __asm { IMUL EDX,R8D,0x4869a151 }
    /* +0x8996b4 */ __asm { MOV R8D,0x61ded462 }
    /* +0x8996ba */ __asm { SUB R8D,R12D }
    /* +0x8996bd */ __asm { XOR R8D,0x23bf32d1 }
    /* +0x8996c4 */ __asm { MOVSXD R11,R8D }
    /* +0x8996c7 */ __asm { MOV R8,qword ptr [RAX + 0x55884e3b] }
    /* +0x8996ce */ __asm { MOV R10,R8 }
    /* +0x8996d1 */ __asm { SAR R10,0x3f }
    /* +0x8996d5 */ __asm { SUB R9D,R12D }
    /* +0x8996d8 */ __asm { XOR R9D,0x48c }
    /* +0x8996df */ __asm { ADD R9D,0x7494 }
    /* +0x8996e6 */ __asm { XOR EAX,EAX }
    /* +0x8996e8 */ __asm { CMP R11,RDX }
    /* +0x8996eb */ __asm { CMOVBE RAX,R10 }
    /* +0x8996ef */ __asm { MOV RCX,-0x2fa78a054fb236f4 }
    /* +0x8996f9 */ __asm { MUL RCX }
    /* +0x8996fc */ __asm { MOV R11,RDX }
    /* +0x8996ff */ __asm { MOV R10,RAX }
    /* +0x899702 */ __asm { MOV RAX,R8 }
    /* +0x899705 */ __asm { MUL RCX }
    /* +0x899708 */ __asm { MOV RCX,RDX }
    /* +0x89970b */ __asm { ADD RCX,R10 }
    /* +0x89970e */ __asm { ADC R11,0x0 }
    /* +0x899712 */ __asm { MOV EDX,0x14738b6 }
    /* +0x899717 */ __asm { MOV RAX,R8 }
    /* +0x89971a */ __asm { MUL RDX }
    /* +0x89971d */ __asm { MOVZX R8D,R9W }
    /* +0x899721 */ __asm { ADD RAX,RCX }
    /* +0x899724 */ __asm { ADC RDX,R11 }
    /* +0x899727 */ __asm { AND EDX,0x1 }
    /* +0x89972a */ __asm { OR RDX,R8 }
    /* +0x89972d */ __asm { JZ 0x7fffa5009e5b }
    /* +0x899733 */ __asm { RDTSC }
    /* +0x899735 */ __asm { SHL RDX,0x20 }
    /* +0x899739 */ __asm { OR RDX,RAX }
    /* +0x89973c */ __asm { MOV R8,-0x930 }
    /* +0x899743 */ __asm { ADD R8,qword ptr [RBP + 0x658] }
    /* +0x89974a */ __asm { MOV R11,-0x641962a839533873 }
    /* +0x899754 */ __asm { IMUL R11,R8 }
    /* +0x899758 */ __asm { MOV R8,-0x68565e3d37b88785 }
    /* +0x899762 */ __asm { XOR EAX,EAX }
    /* +0x899764 */ __asm { CMP R11,R8 }
    /* +0x899767 */ __asm { SETZ AL }
    /* +0x89976a */ __asm { MOV R8,-0x68565e3d37b88784 }
    /* +0x899774 */ __asm { XOR R10D,R10D }
    /* +0x899777 */ __asm { CMP R11,R8 }
    /* +0x89977a */ __asm { SETL R10B }
    /* +0x89977e */ __asm { MOV R8,-0x4a9b10dd1385131b }
    /* +0x899788 */ __asm { IMUL RDX,R8 }
    /* +0x89978c */ __asm { MOV R8,-0x4274d6a8a8f2e5c2 }
    /* +0x899796 */ __asm { ADD R8,RDX }
    /* +0x899799 */ __asm { MOV RDX,R8 }
    /* +0x89979c */ __asm { SHR RDX,0x3b }
    /* +0x8997a0 */ __asm { MOV R11,R8 }
    /* +0x8997a3 */ __asm { MOV R9D,0x1ae76709 }
    /* +0x8997a9 */ __asm { XOR R9D,0x13cbdb40 }
    /* +0x8997b0 */ __asm { ROL R9D,0x11 }
    /* +0x8997b4 */ __asm { SHR R11,0x2d }
    /* +0x8997b8 */ __asm { SUB R9D,R12D }
    /* +0x8997bb */ __asm { MOV ESI,0xb97bd27 }
    /* +0x8997c0 */ __asm { XOR ESI,0x1becd753 }
    /* +0x8997c6 */ __asm { ADD ESI,0x7235926d }
    /* +0x8997cc */ __asm { MOV ECX,R12D }
    /* +0x8997cf */ __asm { ROL ESI,CL }
    /* +0x8997d1 */ __asm { CMP R9,RSI }
    /* +0x8997d4 */ __asm { CMOVA EAX,R10D }
    /* +0x8997d8 */ __asm { SHR R8,0x1b }
    /* +0x8997dc */ __asm { XOR R11D,R8D }
    /* +0x8997df */ __asm { MOV ECX,EDX }
    /* +0x8997e1 */ __asm { ROR R11D,CL }
    /* +0x8997e4 */ __asm { CMP AL,0x1 }
    /* +0x8997e6 */ __asm { NOP }
    /* +0x8997e7 */ __asm { NOP }
    /* +0x8997e8 */ __asm { NOP }
    /* +0x8997e9 */ __asm { NOP }
    /* +0x8997ea */ __asm { NOP }
    /* +0x8997eb */ __asm { CMP R11D,0x407ff91 }
    /* +0x8997f2 */ __asm { JA 0x7fffa500983e }
    /* +0x8997f4 */ __asm { MOV dword ptr [RBP + 0x460],0x2034d540 }
    /* +0x8997fe */ __asm { MOV EAX,dword ptr [RBP + 0x460] }
    /* +0x899804 */ __asm { MOV R8D,EAX }
    /* +0x899807 */ __asm { AND R8D,0x1 }
    /* +0x89980b */ __asm { INC EAX }
    /* +0x89980d */ __asm { MOV ECX,0x5d514507 }
    /* +0x899812 */ __asm { IMUL EDX,ECX,0x341dc5bb }
    /* +0x899818 */ __asm { ADD EDX,R12D }
    /* +0x89981b */ __asm { XOR EDX,0x568616ac }
    /* +0x899821 */ __asm { MOV ECX,0x4000008e }
    /* +0x899826 */ __asm { MOV R11D,0xc0000091 }
    /* +0x89982c */ __asm { SUB R11D,ECX }
    /* +0x89982f */ __asm { CMP RDX,R11 }
    /* +0x899832 */ __asm { CMOVL EAX,R8D }
    /* +0x899836 */ __asm { TEST EAX,EAX }
    /* +0x899838 */ __asm { JNZ 0x7fffa5056994 }
    /* +0x89983e */ __asm { LEA RAX,[0x7fffa478b72d] }
    /* +0x899845 */ __asm { MOV R8,-0x39deb873f4ff4386 }
    /* +0x89984f */ __asm { CMP RAX,R8 }
    /* +0x899852 */ __asm { JZ 0x7fffa50568f6 }
    /* +0x899858 */ __asm { MOV qword ptr [RBP + 0x460],R8 }
    /* +0x89985f */ __asm { MOV EAX,dword ptr [RAX + -0x7165] }
    /* +0x899865 */ __asm { MOV R8W,0xc560 }
    /* +0x89986a */ __asm { ADD R8D,0x3aa0 }
    /* +0x899871 */ __asm { MOV ECX,R12D }
    /* +0x899874 */ __asm { ROR R8W,CL }
    /* +0x899878 */ __asm { MOV ECX,R12D }
    /* +0x89987b */ __asm { OR ECX,0x1 }
    /* +0x89987e */ __asm { MOVZX R10D,R8W }
    /* +0x899882 */ __asm { MOV R8W,0x78af }
    /* +0x899887 */ __asm { ADD R8D,0xffffec11 }
    /* +0x89988e */ __asm { IMUL R8D,ECX }
    /* +0x899892 */ __asm { JMP 0x7fffa5009ea5 }
    /* +0x899897 */ __asm { MOV EAX,R12D }
    /* +0x89989a */ __asm { OR EAX,0x1 }
    /* +0x89989d */ __asm { MOV R8W,0xb21f }
    /* +0x8998a2 */ __asm { IMUL R8D,EAX }
    /* +0x8998a6 */ __asm { ROL R8W,0x8 }
    /* +0x8998ab */ __asm { IMUL EAX,R8D,0x2189 }
    /* +0x8998b2 */ __asm { MOVZX EDX,AX }
    /* +0x8998b5 */ __asm { MOV R8,qword ptr GS:[RDX] }
    /* +0x8998b9 */ __asm { MOV R8,qword ptr [R8 + 0x788] }
    /* +0x8998c0 */ __asm { MOV RAX,0x4ba3c518f377cbf7 }
    /* +0x8998ca */ __asm { SUB R8,RAX }
    /* +0x8998cd */ __asm { MOV RDX,-0x79852782e63aa1d9 }
    /* +0x8998d7 */ __asm { CMP R8,RDX }
    /* +0x8998da */ __asm { NOP }
    /* +0x8998db */ __asm { NOP }
    /* +0x8998dc */ __asm { NOP }
    /* +0x8998dd */ __asm { NOP }
    /* +0x8998de */ __asm { NOP }
    /* +0x8998df */ __asm { NOP }
    /* +0x8998e0 */ __asm { NOP }
    /* +0x8998e1 */ __asm { NOP }
    /* +0x8998e2 */ __asm { NOP }
    /* +0x8998e3 */ __asm { NOP }
    /* +0x8998e4 */ __asm { NOP }
    /* +0x8998e5 */ __asm { NOP }
    /* +0x8998e6 */ __asm { NOP }
    /* +0x8998e7 */ __asm { NOP }
    /* +0x8998e8 */ __asm { NOP }
    /* +0x8998e9 */ __asm { NOP }
    /* +0x8998ea */ __asm { NOP }
    /* +0x8998ee */ __asm { MOV EAX,0x704d9af3 }
    /* +0x8998f3 */ __asm { MOV R10D,0x32f5ce32 }
    /* +0x8998f9 */ __asm { XOR R10D,R12D }
    /* +0x8998fc */ __asm { XOR EAX,R12D }
    /* +0x8998ff */ __asm { NOT EAX }
    /* +0x899901 */ __asm { LEA R8,[0x7fffa5091919] }
    /* +0x899908 */ __asm { MOVSXD RDX,EAX }
    /* +0x89990b */ __asm { ADD RDX,R8 }
    /* +0x89990e */ __asm { ROL R10D,0x1d }
    /* +0x899912 */ __asm { CALL RDX }
    /* +0x899914 */ __asm { JMP 0x7fffa5009ebe }
    /* +0x899919 */ __asm { CMP EDX,0x3 }
    /* +0x89991c */ __asm { JNZ 0x7fffa5009dce }
    /* +0x899922 */ __asm { MOV EAX,0xa119be76 }
    /* +0x899927 */ __asm { MOV R8,0x5d6d42ea7ad730d5 }
    /* +0x899931 */ __asm { IMUL R8,RAX }
    /* +0x899935 */ __asm { ROL R8,0x3 }
    /* +0x899939 */ __asm { XOR R8,0x1d8293aa }
    /* +0x899940 */ __asm { MOV RDX,-0x70314d4bd830e5e6 }
    /* +0x89994a */ __asm { CMP R8,RDX }
    /* +0x89994d */ __asm { NOP }
    /* +0x89994e */ __asm { NOP }
    /* +0x89994f */ __asm { NOP }
    /* +0x899950 */ __asm { NOP }
    /* +0x899951 */ __asm { NOP }
    /* +0x899952 */ __asm { NOP }
    /* +0x899953 */ __asm { NOP }
    /* +0x899954 */ __asm { NOP }
    /* +0x899955 */ __asm { NOP }
    /* +0x899956 */ __asm { NOP }
    /* +0x899957 */ __asm { NOP }
    /* +0x899958 */ __asm { NOP }
    /* +0x899959 */ __asm { NOP }
    /* +0x89995a */ __asm { NOP }
    /* +0x89995b */ __asm { NOP }
    /* +0x89995c */ __asm { NOP }
    /* +0x89995d */ __asm { NOP }
    /* +0x899c3e */ __asm { MOV EAX,0x496e895e }
    /* +0x899c43 */ __asm { MOV R8,0x9066045254ae06e }
    /* +0x899c4d */ __asm { CMP RAX,R8 }
    /* +0x899c50 */ __asm { NOP }
    /* +0x899c51 */ __asm { NOP }
    /* +0x899c52 */ __asm { NOP }
    /* +0x899c53 */ __asm { MOV R11,qword ptr [RAX + 0x368f76aa] }
    /* +0x899c5a */ __asm { MOV R8,-0x758bcff022f88d1 }
    /* +0x899c64 */ __asm { MOV RAX,R11 }
    /* +0x899c67 */ __asm { MUL R8 }
    /* +0x899c6a */ __asm { MOV R8,RAX }
    /* +0x899c6d */ __asm { MOV R10,RDX }
    /* +0x899c70 */ __asm { MOV EDX,0x146f7a7 }
    /* +0x899c75 */ __asm { MOV RAX,R11 }
    /* +0x899c78 */ __asm { MUL RDX }
    /* +0x899c7b */ __asm { MOV R11,RAX }
    /* +0x899c7e */ __asm { ADD R11,R10 }
    /* +0x899c81 */ __asm { MOV R11,RDX }
    /* +0x899c84 */ __asm { ADC R11,0x0 }
    /* +0x899c88 */ __asm { XOR R9D,R9D }
    /* +0x899c8b */ __asm { ADD RAX,R10 }
    /* +0x899c8e */ __asm { MOV ECX,0x97354362 }
    /* +0x899c93 */ __asm { ADC RDX,-0x1 }
    /* +0x899c97 */ __asm { MOV R10D,0x56998e05 }
    /* +0x899c9d */ __asm { MOV ESI,0x0 }
    /* +0x899ca2 */ __asm { ADC RSI,-0x1 }
    /* +0x899ca6 */ __asm { XOR ECX,0x125f5467 }
    /* +0x899cac */ __asm { IMUL R10D,R10D,-0x35b63257 }
    /* +0x899cb3 */ __asm { ADD R10D,0x5d5a7e42 }
    /* +0x899cba */ __asm { AND R11D,0x1 }
    /* +0x899cbe */ __asm { MOVSXD RCX,ECX }
    /* +0x899cc1 */ __asm { CMP R10,RCX }
    /* +0x899cc4 */ __asm { CMOVA R11,RDX }
    /* +0x899cc8 */ __asm { CMOVBE R8,R9 }
    /* +0x899ccc */ __asm { CMOVBE RSI,R9 }
    /* +0x899cd0 */ __asm { CMOVBE RAX,R9 }
    /* +0x899cd4 */ __asm { OR RAX,RSI }
    /* +0x899cd7 */ __asm { OR R8,R11 }
    /* +0x899cda */ __asm { OR R8,RAX }
    /* +0x899cdd */ __asm { JZ 0x7fffa5029a8c }
    /* +0x899ce3 */ __asm { RDTSC }
    /* +0x899ce5 */ __asm { SHL RDX,0x20 }
    /* +0x899ce9 */ __asm { OR RDX,RAX }
    /* +0x899cec */ __asm { MOV R8,-0x158b4ad174161d9b }
    /* +0x899cf6 */ __asm { IMUL RDX,R8 }
    /* +0x899cfa */ __asm { MOV RCX,0x30366f75cdef6296 }
    /* +0x899d04 */ __asm { ADD RCX,RDX }
    /* +0x899d07 */ __asm { MOV R11,RCX }
    /* +0x899d0a */ __asm { SHR R11,0x1b }
    /* +0x899d0e */ __asm { MOV RDX,RCX }
    /* +0x899d11 */ __asm { SHR RDX,0x2d }
    /* +0x899d15 */ __asm { SHR RCX,0x3b }
    /* +0x899d19 */ __asm { XOR EDX,R11D }
    /* +0x899d1c */ __asm { ROR EDX,CL }
    /* +0x899d1e */ __asm { MOV dword ptr [RBP + 0x460],0x1800800a }
    /* +0x899d28 */ __asm { MOV EAX,dword ptr [RBP + 0x460] }
    /* +0x899d2e */ __asm { CMP EAX,0x5a4e19a7 }
    /* +0x899d33 */ __asm { JNC 0x7fffa50568d3 }
    /* +0x899d39 */ __asm { CMP EDX,0x43d9b0 }
    /* +0x899d3f */ __asm { JA 0x7fffa5009d7d }
    /* +0x899d41 */ __asm { MOV dword ptr [RBP + 0x460],0xf2237b8a }
    /* +0x899d4b */ __asm { MOV EAX,dword ptr [RBP + 0x460] }
    /* +0x899d51 */ __asm { MOV R8W,0x526d }
    /* +0x899d56 */ __asm { MOV ECX,R12D }
    /* +0x899d59 */ __asm { OR ECX,0x1 }
    /* +0x899d5c */ __asm { IMUL ECX,R8D }
    /* +0x899d60 */ __asm { ROL CX,0xc }
    /* +0x899d64 */ __asm { NOT ECX }
    /* +0x899d66 */ __asm { MOVZX R8D,CX }
    /* +0x899d6a */ __asm { CMP EAX,R8D }
    /* +0x899d6d */ __asm { JGE 0x7fffa5056965 }
    /* +0x899d73 */ __asm { PUSHFQ }
    /* +0x899d74 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x899d7c */ __asm { POPFQ }
    /* +0x899d7d */ __asm { LEA RAX,[0x7fffa47889ac] }
    /* +0x899d84 */ __asm { MOV R8,-0x4688fe50ac058e63 }
    /* +0x899d8e */ __asm { CMP RAX,R8 }
    /* +0x899d91 */ __asm { NOP }
    /* +0x899d92 */ __asm { NOP }
    /* +0x899d93 */ __asm { NOP }
    /* +0x899d94 */ __asm { NOP }
    /* +0x899d95 */ __asm { NOP }
    /* +0x899d96 */ __asm { MOV R8W,0x781a }
    /* +0x899d9b */ __asm { MOV qword ptr [RBP + 0x460],R11 }
    /* +0x899da2 */ __asm { MOV EAX,dword ptr [RAX + -0x3c1c] }
    /* +0x899da8 */ __asm { MOV CX,0x5c00 }
    /* +0x899dac */ __asm { XOR ECX,0xffffdb65 }
    /* +0x899db2 */ __asm { ADD ECX,R12D }
    /* +0x899db5 */ __asm { IMUL ECX,ECX,-0x213 }
    /* +0x899dbb */ __asm { MOVZX R10D,CX }
    /* +0x899dbf */ __asm { SUB R8D,R12D }
    /* +0x899dc2 */ __asm { ROR R8W,0x1 }
    /* +0x899dc6 */ __asm { NOT R8D }
    /* +0x899dc9 */ __asm { JMP 0x7fffa5009ea5 }
    /* +0x899dce */ __asm { MOV EAX,0xb3468477 }
    /* +0x899dd3 */ __asm { MOV R8,-0x44938e7acf37e97 }
    /* +0x899ddd */ __asm { CMP RAX,R8 }
    /* +0x899de0 */ __asm { JZ 0x7fffa50557cd }
    /* +0x899de6 */ __asm { MOV EDX,dword ptr [RAX + -0x334881b3] }
    /* +0x899dec */ __asm { MOV R8,0x5555555555555556 }
    /* +0x899df6 */ __asm { IMUL RDX,R8 }
    /* +0x899dfa */ __asm { MOV R8,0x5555555555555555 }
    /* +0x899e04 */ __asm { CMP RDX,R8 }
    /* +0x899e07 */ __asm { JBE 0x7fffa5029a36 }
    /* +0x899e0d */ __asm { LEA RAX,[0x7fffa47bf8b8] }
    /* +0x899e14 */ __asm { MOV R8,0x2d2bb8f34ddbbac1 }
    /* +0x899e1e */ __asm { CMP RAX,R8 }
    /* +0x899e21 */ __asm { JZ 0x7fffa5056921 }
    /* +0x899e27 */ __asm { MOV R8W,0xb3eb }
    /* +0x899e2c */ __asm { SUB R8D,R12D }
    /* +0x899e2f */ __asm { IMUL R8D,R8D,-0x16ef }
    /* +0x899e36 */ __asm { ADD R8D,0x3ff0 }
    /* +0x899e3d */ __asm { MOV CX,0x789b }
    /* +0x899e41 */ __asm { SUB ECX,R12D }
    /* +0x899e44 */ __asm { ROL CX,0xc }
    /* +0x899e48 */ __asm { MOVZX R10D,CX }
    /* +0x899e4c */ __asm { MOV qword ptr [RBP + 0x460],R11 }
    /* +0x899e53 */ __asm { MOV EAX,dword ptr [RAX + -0x3358] }
    /* +0x899e59 */ __asm { JMP 0x7fffa5009ea5 }
    /* +0x899e5b */ __asm { LEA RAX,[0x7fffa47bd26d] }
    /* +0x899e62 */ __asm { MOV R8,-0x4056bf109e4642a4 }
    /* +0x899e6c */ __asm { CMP RAX,R8 }
    /* +0x899e6f */ __asm { JZ 0x7fffa5056939 }
}


// ============================================================================
// Function : Unwind@7fffa5059bf0  |  RVA: 0x8e9bf0  |  Size: 362 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5059bf0(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x108)) {
    (*(code *)((int64_t)
               ((*(int *)(param_2 + 0x358) * -0x55b75aad + -0x53677ff6) * *(int *)(param_2 + 0xa0))
              + 0x7fffa5691b3b))
              (param_1,0x7fffa5691b3b,
               *(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0));
  }
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint16_t *)(param_2 + 0xf0) = 0;
  *(uint64_t *)(param_2 + 0x100) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5059d60  |  RVA: 0x8e9d60  |  Size: 417 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5059d60(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  short sVar3;
  code *pcVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint32_t uVar7;
  
  if (7 < *(uint64_t *)(param_2 + 0x108)) {
    uVar1 = *(uint64_t *)(param_2 + 0xf0);
    sVar3 = (short)*(uint64_t *)(param_2 + 0x1f0);
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x428);
    uVar7 = uVar5 + 0xdf694ce1;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xe8) & 0x1f;
    uVar7 = ~(uVar7 >> bVar2 | uVar7 << 0x20 - bVar2);
    pcVar4 = (code *)((int64_t)(short)~(sVar3 * -0x5000 | (uint16_t)(sVar3 * 0x13b) >> 4) +
                     0x7fffa568db81);
    uVar5 = ~((int)*(uint64_t *)(param_2 + 0xe8) + 0x1732a613U ^ uVar5);
    uVar6 = uVar1 >> 0x3d;
    if ((uVar7 << 0x17 | uVar7 >> 9) < uVar5) {
      uVar6 = uVar1 | 0x3d;
    }
    (*pcVar4)(pcVar4,uVar5,uVar6 ^ uVar1);
  }
  *(uint64_t *)(param_2 + 0x100) = 0;
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint16_t *)(param_2 + 0xf0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5059f10  |  RVA: 0x8e9f10  |  Size: 355 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5059f10(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x4b8)) {
    uVar1 = *(uint64_t *)(param_2 + 0x4a0);
    (*(code *)((int64_t)(short)((short)*(uint32_t *)(param_2 + 0x380) * -0x286c) + 0x7fffa5689594
              ))(param_1,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint64_t *)(param_2 + 0x4b8) = 7;
  *(uint64_t *)(param_2 + 0x4b0) = 0;
  *(uint16_t *)(param_2 + 0x4a0) = 0;
  return;
}

