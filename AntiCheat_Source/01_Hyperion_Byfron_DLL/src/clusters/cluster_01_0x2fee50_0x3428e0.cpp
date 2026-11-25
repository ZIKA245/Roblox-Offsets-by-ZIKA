// Subsystem: Internal Routines Cluster 01 (0x2fee50 .. 0x3428e0)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : Unwind@7fffa4a6ee50  |  RVA: 0x2fee50  |  Size: 1051 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a6ee50(void) {
    /* +0x2fee50 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2fee55 */ __asm { PUSH RBP }
    /* +0x2fee56 */ __asm { PUSH RSI }
    /* +0x2fee57 */ __asm { PUSH RBX }
    /* +0x2fee58 */ __asm { PUSH RDI }
    /* +0x2fee59 */ __asm { PUSH R12 }
    /* +0x2fee5b */ __asm { PUSH R13 }
    /* +0x2fee5d */ __asm { PUSH R15 }
    /* +0x2fee5f */ __asm { PUSH R14 }
    /* +0x2fee61 */ __asm { SUB RSP,0xc8 }
    /* +0x2fee68 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2fee6f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2fee76 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2fee7c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2fee86 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2fee90 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2fee9a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2feea3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2feeab */ __asm { JZ 0x7fffa4a6ef46 }
    /* +0x2feeb1 */ __asm { LEA RCX,[0x7fffa47c6d18] }
    /* +0x2feeb8 */ __asm { MOV R10D,0x39f542c9 }
    /* +0x2feebe */ __asm { LEA RAX,[0x7fffa47c26cb] }
    /* +0x2feec5 */ __asm { IMUL R10D,dword ptr [RBP + 0x104] }
    /* +0x2feecd */ __asm { MOV R8D,0x2c5f905f }
    /* +0x2feed3 */ __asm { LEA R9,[0x7fffa47c8324] }
    /* +0x2feeda */ __asm { NOT R10D }
    /* +0x2feedd */ __asm { IMUL R10D,R10D,0x5776f7f1 }
    /* +0x2feee4 */ __asm { MOVSXD R10,R10D }
    /* +0x2feee7 */ __asm { SUB R8D,dword ptr [RBP + 0x1418] }
    /* +0x2feeee */ __asm { ADD R8D,0x491322ec }
    /* +0x2feef5 */ __asm { ROL R8D,0xd }
    /* +0x2feef9 */ __asm { ADD R10,RCX }
    /* +0x2feefc */ __asm { MOVSXD RCX,R8D }
    /* +0x2feeff */ __asm { MOVZX ECX,uint8_t ptr [R9 + RCX*0x1 + 0x9] }
    /* +0x2fef05 */ __asm { MOV RCX,qword ptr [R10 + RCX*0x8 + 0x13] }
    /* +0x2fef0a */ __asm { MOV R10W,0x2086 }
    /* +0x2fef0f */ __asm { MOV R8D,0xffffb767 }
    /* +0x2fef15 */ __asm { SUB R8D,R10D }
    /* +0x2fef18 */ __asm { MOVSX R10,R8W }
    /* +0x2fef1c */ __asm { XOR RCX,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x2fef21 */ __asm { MOVQ XMM2,RCX }
    /* +0x2fef26 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2fef2a */ __asm { PXOR XMM4,XMM2 }
    /* +0x2fef2e */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2fef33 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2fef37 */ __asm { TEST R8,R8 }
    /* +0x2fef3a */ __asm { JZ 0x7fffa4a6ef8e }
    /* +0x2fef3c */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2fef43 */ __asm { CALL R8 }
    /* +0x2fef46 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2fef4f */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2fef59 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2fef63 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2fef6d */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2fef73 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2fef7a */ __asm { ADD RSP,0xc8 }
    /* +0x2fef81 */ __asm { POP R14 }
    /* +0x2fef83 */ __asm { POP R15 }
    /* +0x2fef85 */ __asm { POP R13 }
    /* +0x2fef87 */ __asm { POP R12 }
    /* +0x2fef89 */ __asm { POP RDI }
    /* +0x2fef8a */ __asm { POP RBX }
    /* +0x2fef8b */ __asm { POP RSI }
    /* +0x2fef8c */ __asm { POP RBP }
    /* +0x2fef8d */ __asm { RET }
    /* +0x2fef8e */ __asm { MOV R10W,0x2e1d }
    /* +0x2fef93 */ __asm { ADD R10D,0xffff852d }
    /* +0x2fef9a */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2fefa1 */ __asm { XOR R10D,ECX }
    /* +0x2fefa4 */ __asm { ROL R10W,0x2 }
    /* +0x2fefa9 */ __asm { MOVZX R8D,R10W }
    /* +0x2fefad */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2fefb1 */ __asm { MOV R10W,0xb9dc }
    /* +0x2fefb6 */ __asm { XOR R10D,0xb9d0 }
    /* +0x2fefbd */ __asm { ROL R10W,CL }
    /* +0x2fefc1 */ __asm { MOVZX R8D,R10W }
    /* +0x2fefc5 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2fefc9 */ __asm { MOV R8,-0x5fe65c18 }
    /* +0x2fefd0 */ __asm { ADD R8,qword ptr [RCX + 0x60] }
    /* +0x2fefd4 */ __asm { MOV ECX,0xc60e8a9f }
    /* +0x2fefd9 */ __asm { XOR RCX,R8 }
    /* +0x2fefdc */ __asm { MOV R8,0x6de75e435a9f2e0 }
    /* +0x2fefe6 */ __asm { CMP RCX,R8 }
    /* +0x2fefe9 */ __asm { NOP }
    /* +0x2fefea */ __asm { NOP }
    /* +0x2fefeb */ __asm { NOP }
    /* +0x2fefec */ __asm { NOP }
    /* +0x2fefed */ __asm { NOP }
    /* +0x2fefee */ __asm { PUSHFQ }
    /* +0x2fefef */ __asm { POP R8 }
    /* +0x2feff1 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2feff5 */ __asm { MOV qword ptr [RBP + 0x1410],R8 }
    /* +0x2feffc */ __asm { TEST R8D,0x100 }
    /* +0x2ff003 */ __asm { NOP }
    /* +0x2ff004 */ __asm { NOP }
    /* +0x2ff005 */ __asm { NOP }
    /* +0x2ff006 */ __asm { NOP }
    /* +0x2ff007 */ __asm { NOP }
    /* +0x2ff008 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2ff00f */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2ff013 */ __asm { TEST R10D,R10D }
    /* +0x2ff016 */ __asm { NOP }
    /* +0x2ff017 */ __asm { NOP }
    /* +0x2ff018 */ __asm { NOP }
    /* +0x2ff019 */ __asm { NOP }
    /* +0x2ff01a */ __asm { NOP }
    /* +0x2ff01b */ __asm { ADD RAX,0x10 }
    /* +0x2ff01f */ __asm { MOV R9,0x39cda41577e4d47d }
    /* +0x2ff029 */ __asm { MOV RDX,0x10000000014b }
    /* +0x2ff033 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2ff036 */ __asm { PUSHFQ }
    /* +0x2ff037 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2ff03f */ __asm { POPFQ }
    /* +0x2ff040 */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2ff047 */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x2ff04a */ __asm { MOV ESI,0xea787fc4 }
    /* +0x2ff04f */ __asm { XOR ESI,0x746edb82 }
    /* +0x2ff055 */ __asm { SUB ESI,dword ptr [RBP + 0x1418] }
    /* +0x2ff05b */ __asm { CMP ECX,ESI }
    /* +0x2ff05d */ __asm { JBE 0x7fffa4a6f254 }
    /* +0x2ff063 */ __asm { MOVZX R15D,word ptr [RAX + 0x58] }
    /* +0x2ff068 */ __asm { CMP R15D,0x2 }
    /* +0x2ff06c */ __asm { JNC 0x7fffa4a6f075 }
    /* +0x2ff06e */ __asm { XOR ECX,ECX }
    /* +0x2ff070 */ __asm { JMP 0x7fffa4a6f163 }
    /* +0x2ff075 */ __asm { SHR R15D,0x1 }
    /* +0x2ff078 */ __asm { MOV RCX,qword ptr [RAX + 0x60] }
    /* +0x2ff07c */ __asm { CMP R15W,0x1 }
    /* +0x2ff081 */ __asm { JNZ 0x7fffa4a6f1cb }
    /* +0x2ff087 */ __asm { MOV RBX,-0x56ac57fd56f4aa33 }
    /* +0x2ff091 */ __asm { XOR R14D,R14D }
    /* +0x2ff094 */ __asm { MOV EDI,0xbf2a678d }
    /* +0x2ff099 */ __asm { ADD EDI,0x259130f5 }
    /* +0x2ff09f */ __asm { IMUL EDI,dword ptr [RBP + 0x104] }
    /* +0x2ff0a6 */ __asm { TEST R15B,0x1 }
    /* +0x2ff0aa */ __asm { SETZ R15B }
    /* +0x2ff0ae */ __asm { MOV ESI,0xef1e7a3a }
    /* +0x2ff0b3 */ __asm { IMUL R12D,ESI,-0x4469a2c1 }
    /* +0x2ff0ba */ __asm { XOR R12D,dword ptr [RBP + 0x1418] }
    /* +0x2ff0c1 */ __asm { ADD R12D,0xbf3cd9db }
    /* +0x2ff0c8 */ __asm { CMP R12,RDI }
    /* +0x2ff0cb */ __asm { SETGE DIL }
    /* +0x2ff0cf */ __asm { OR DIL,R15B }
    /* +0x2ff0d2 */ __asm { JNZ 0x7fffa4a6f14d }
    /* +0x2ff0d4 */ __asm { MOV R13,0x5107674fec7e03e0 }
    /* +0x2ff0de */ __asm { MOV R12D,0xafcf13c }
    /* +0x2ff0e4 */ __asm { MOV R8D,0xdbe770c9 }
    /* +0x2ff0ea */ __asm { XOR R13,R8 }
    /* +0x2ff0ed */ __asm { MOVZX R15D,word ptr [RCX + R14*0x2] }
    /* +0x2ff0f2 */ __asm { MOV ESI,R15D }
    /* +0x2ff0f5 */ __asm { AND ESI,0x20 }
    /* +0x2ff0f8 */ __asm { MOV EDI,R15D }
    /* +0x2ff0fb */ __asm { OR EDI,0x20 }
    /* +0x2ff0fe */ __asm { MOV R10D,0x12e45bac }
    /* +0x2ff104 */ __asm { NEG R12D }
    /* +0x2ff107 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2ff10e */ __asm { ADD R12D,ECX }
    /* +0x2ff111 */ __asm { ADD R12D,0x922023cb }
    /* +0x2ff118 */ __asm { IMUL R13,qword ptr [RBP + 0x11d8] }
    /* +0x2ff120 */ __asm { IMUL R14D,R10D,-0x35685943 }
    /* +0x2ff127 */ __asm { NOT R14D }
    /* +0x2ff12a */ __asm { ROR R14D,CL }
    /* +0x2ff12d */ __asm { CMP R12,R14 }
    /* +0x2ff130 */ __asm { CMOVNC EDI,ESI }
    /* +0x2ff133 */ __asm { LEA ECX,[R15 + -0x41] }
    /* +0x2ff137 */ __asm { CMP CX,0x1a }
    /* +0x2ff13b */ __asm { CMOVNC EDI,R15D }
    /* +0x2ff13f */ __asm { MOVZX ECX,DIL }
    /* +0x2ff143 */ __asm { XOR RCX,RBX }
    /* +0x2ff146 */ __asm { IMUL RCX,R13 }
    /* +0x2ff14a */ __asm { MOV RBX,RCX }
    /* +0x2ff14d */ __asm { CMP RBX,R9 }
    /* +0x2ff150 */ __asm { SETZ CL }
    /* +0x2ff153 */ __asm { MOV R13,0x0 }
    /* +0x2ff15a */ __asm { NOP }
    /* +0x2ff15c */ __asm { LEA R15,[0x7fffa4770000] }
    /* +0x2ff163 */ __asm { MOV R13,0x0 }
    /* +0x2ff16a */ __asm { NOP }
    /* +0x2ff16c */ __asm { LEA R15,[0x7fffa4770000] }
    /* +0x2ff173 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2ff17a */ __asm { MOV ESI,dword ptr [RBP + -0x8] }
    /* +0x2ff17d */ __asm { MOV R15D,0x4ed64a5d }
    /* +0x2ff183 */ __asm { XOR R15D,dword ptr [RBP + 0x1418] }
    /* +0x2ff18a */ __asm { XOR R15D,0xc941b6b7 }
    /* +0x2ff191 */ __asm { CMP ESI,R15D }
    /* +0x2ff194 */ __asm { JNC 0x7fffa4a6f25c }
    /* +0x2ff19a */ __asm { TEST CL,CL }
    /* +0x2ff19c */ __asm { JNZ 0x7fffa4a6f26e }
    /* +0x2ff1a2 */ __asm { MOV R10D,0x5c176202 }
    /* +0x2ff1a8 */ __asm { IMUL R10D,dword ptr [RBP + 0x104] }
    /* +0x2ff1b0 */ __asm { XOR R10D,0x15cc41d3 }
    /* +0x2ff1b7 */ __asm { IMUL R10D,R10D,0x78538975 }
    /* +0x2ff1be */ __asm { MOV dword ptr [RBP + -0x8],R10D }
    /* +0x2ff1c2 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2ff1c6 */ __asm { JMP 0x7fffa4a6f033 }
    /* +0x2ff1cb */ __asm { MOV EDI,R15D }
    /* +0x2ff1ce */ __asm { AND EDI,0xfffffffe }
    /* +0x2ff1d1 */ __asm { MOV R14D,0x2 }
    /* +0x2ff1d7 */ __asm { MOV RBX,-0x56ac57fd56f4aa33 }
    /* +0x2ff1e1 */ __asm { MOV SI,0x1abf }
    /* +0x2ff1e5 */ __asm { IMUL R12D,ESI,-0x76a3 }
    /* +0x2ff1ec */ __asm { MOVZX R13D,word ptr [RCX + R14*0x2 + -0x4] }
    /* +0x2ff1f2 */ __asm { MOV ESI,R13D }
    /* +0x2ff1f5 */ __asm { OR ESI,0x20 }
    /* +0x2ff1f8 */ __asm { MOVZX R11D,word ptr [RCX + R14*0x2 + -0x2] }
    /* +0x2ff1fe */ __asm { MOV R10D,R11D }
    /* +0x2ff201 */ __asm { OR R10D,0x20 }
    /* +0x2ff205 */ __asm { LEA R8D,[R13 + -0x41] }
    /* +0x2ff209 */ __asm { CMP R8W,0x1a }
    /* +0x2ff20e */ __asm { CMOVNC ESI,R13D }
    /* +0x2ff212 */ __asm { LEA R8D,[R11 + -0x41] }
    /* +0x2ff216 */ __asm { MOVZX R13D,SIL }
    /* +0x2ff21a */ __asm { XOR R13,RBX }
    /* +0x2ff21d */ __asm { IMUL R13,RDX }
    /* +0x2ff221 */ __asm { MOV RBX,qword ptr [RBP + 0x1418] }
    /* +0x2ff228 */ __asm { LEA ESI,[R12 + RBX*0x1] }
    /* +0x2ff22c */ __asm { ADD ESI,0x5e65 }
    /* +0x2ff232 */ __asm { CMP R8W,SI }
    /* +0x2ff236 */ __asm { CMOVNC R10D,R11D }
    /* +0x2ff23a */ __asm { MOVZX EBX,R10B }
    /* +0x2ff23e */ __asm { XOR RBX,R13 }
    /* +0x2ff241 */ __asm { IMUL RBX,RDX }
    /* +0x2ff245 */ __asm { CMP RDI,R14 }
    /* +0x2ff248 */ __asm { JZ 0x7fffa4a6f094 }
    /* +0x2ff24e */ __asm { ADD R14,0x2 }
    /* +0x2ff252 */ __asm { JMP 0x7fffa4a6f1e1 }
    /* +0x2ff254 */ __asm { RET }
    /* +0x2ff25c */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2ff261 */ __asm { NOP }
    /* +0x2ff262 */ __asm { NOP }
    /* +0x2ff263 */ __asm { NOP }
    /* +0x2ff264 */ __asm { NOP }
    /* +0x2ff265 */ __asm { NOP }
    /* +0x2ff266 */ __asm { NOP }
    /* +0x2ff267 */ __asm { NOP }
    /* +0x2ff268 */ __asm { NOP }
    /* +0x2ff269 */ __asm { NOP }
    /* +0x2ff26a */ __asm { NOP }
    /* +0x2ff26b */ __asm { NOP }
    /* +0x2ff26c */ __asm { NOP }
    /* +0x2ff26d */ __asm { NOP }
    /* +0x2ff26e */ __asm { NOP }
    /* +0x2ff26f */ __asm { NOP }
    /* +0x2ff270 */ __asm { NOP }
    /* +0x2ff271 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a70cd0  |  RVA: 0x300cd0  |  Size: 140 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a70cd0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)(&UNK_7fffa562e9e9 +
            (int)(((0x99e9a92bU - *(int *)(param_2 + 0x1498) ^ *(uint32_t *)(param_2 + 0x1260)) -
                  *(int *)(param_2 + 0x188)) + 0x74113bb)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a70d60  |  RVA: 0x300d60  |  Size: 252 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a70d60(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar2 = ~(*(int *)(param_2 + 0x184) * 0x3279ffc2);
    pcVar1 = (code *)((int64_t)(int)(uVar2 * 0x622ea764 | uVar2 * -0x27745627 >> 0x1e) +
                     0x7fffa5692b6b);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a70e60  |  RVA: 0x300e60  |  Size: 137 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a70e60(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  uVar3 = ~(0x543e << bVar2 | 0x543eU >> 0x10 - bVar2);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0xf;
  (*(code *)(&UNK_7fffa5629235 + (short)(uVar3 << bVar2 | uVar3 >> 0x10 - bVar2)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a70ef0  |  RVA: 0x300ef0  |  Size: 564 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a70ef0(void) {
    /* +0x300ef0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x300ef5 */ __asm { PUSH RBP }
    /* +0x300ef6 */ __asm { PUSH RSI }
    /* +0x300ef7 */ __asm { PUSH RBX }
    /* +0x300ef8 */ __asm { PUSH RDI }
    /* +0x300ef9 */ __asm { PUSH R12 }
    /* +0x300efb */ __asm { PUSH R13 }
    /* +0x300efd */ __asm { PUSH R15 }
    /* +0x300eff */ __asm { PUSH R14 }
    /* +0x300f01 */ __asm { SUB RSP,0xc8 }
    /* +0x300f08 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x300f0f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x300f16 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x300f1c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x300f26 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x300f30 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x300f3a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x300f43 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x300f4b */ __asm { JZ 0x7fffa4a70fff }
    /* +0x300f51 */ __asm { LEA RAX,[0x7fffa47c1570] }
    /* +0x300f58 */ __asm { LEA R8,[0x7fffa47c5589] }
    /* +0x300f5f */ __asm { MOV R10W,0xdbf2 }
    /* +0x300f64 */ __asm { ADD R10D,0x6328 }
    /* +0x300f6b */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x300f72 */ __asm { MOV ECX,EDX }
    /* +0x300f74 */ __asm { ROL R10W,CL }
    /* +0x300f78 */ __asm { MOV R11D,0x278faca3 }
    /* +0x300f7e */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x300f85 */ __asm { XOR R11D,ECX }
    /* +0x300f88 */ __asm { ADD R11D,0x3a2f6f6f }
    /* +0x300f8f */ __asm { ROR R10W,CL }
    /* +0x300f93 */ __asm { LEA R9,[0x7fffa47be8c0] }
    /* +0x300f9a */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x300fa2 */ __asm { MOVSXD R11,R11D }
    /* +0x300fa5 */ __asm { ADD R11,R8 }
    /* +0x300fa8 */ __asm { MOV R8W,0xdb37 }
    /* +0x300fad */ __asm { ADD R8D,EDX }
    /* +0x300fb0 */ __asm { XOR R8D,0xe4ff }
    /* +0x300fb7 */ __asm { ROL R8W,CL }
    /* +0x300fbb */ __asm { IMUL ECX,R10D,0xb0b }
    /* +0x300fc2 */ __asm { MOVSX R10,CX }
    /* +0x300fc6 */ __asm { MOVSX RCX,R8W }
    /* +0x300fca */ __asm { MOVZX ECX,uint8_t ptr [R9 + RCX*0x1 + 0x9] }
    /* +0x300fd0 */ __asm { MOV RCX,qword ptr [R11 + RCX*0x8 + 0x13] }
    /* +0x300fd5 */ __asm { XOR RCX,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x300fda */ __asm { MOVQ XMM2,RCX }
    /* +0x300fdf */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x300fe3 */ __asm { PXOR XMM4,XMM2 }
    /* +0x300fe7 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x300fec */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x300ff0 */ __asm { TEST R8,R8 }
    /* +0x300ff3 */ __asm { JZ 0x7fffa4a71047 }
    /* +0x300ff5 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x300ffc */ __asm { CALL R8 }
    /* +0x300fff */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x301008 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x301012 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x30101c */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x301026 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x30102c */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x301033 */ __asm { ADD RSP,0xc8 }
    /* +0x30103a */ __asm { POP R14 }
    /* +0x30103c */ __asm { POP R15 }
    /* +0x30103e */ __asm { POP R13 }
    /* +0x301040 */ __asm { POP R12 }
    /* +0x301042 */ __asm { POP RDI }
    /* +0x301043 */ __asm { POP RBX }
    /* +0x301044 */ __asm { POP RSI }
    /* +0x301045 */ __asm { POP RBP }
    /* +0x301046 */ __asm { RET }
    /* +0x301047 */ __asm { MOV R10W,0x1e21 }
    /* +0x30104c */ __asm { MOV RDX,qword ptr [RBP + 0x11e0] }
    /* +0x301053 */ __asm { XOR R10D,EDX }
    /* +0x301056 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30105d */ __asm { ROR R10W,CL }
    /* +0x301061 */ __asm { MOV RAX,0x0 }
    /* +0x301068 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x30106f */ __asm { NOP }
    /* +0x301070 */ __asm { ROL R10W,0xd }
    /* +0x301075 */ __asm { MOVZX R8D,R10W }
    /* +0x301079 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x30107d */ __asm { MOV R10W,0x5a30 }
    /* +0x301082 */ __asm { MOV R8D,EDX }
    /* +0x301085 */ __asm { OR R8D,0x1 }
    /* +0x301089 */ __asm { MOV dword ptr [RBP + 0x108],R8D }
    /* +0x301090 */ __asm { IMUL R10D,R8D }
    /* +0x301094 */ __asm { ROR R10W,CL }
    /* +0x301098 */ __asm { ROL R10W,0x2 }
    /* +0x30109d */ __asm { MOVZX R8D,R10W }
    /* +0x3010a1 */ __asm { MOV R9,qword ptr GS:[R8] }
    /* +0x3010a5 */ __asm { MOV R8D,0xa65de419 }
    /* +0x3010ab */ __asm { ADD R8D,0x10cdb234 }
    /* +0x3010b2 */ __asm { MOV R11D,0x33e9369f }
    /* +0x3010b8 */ __asm { ADD R11D,0x151913a2 }
    /* +0x3010bf */ __asm { XOR R11D,EDX }
    /* +0x3010c2 */ __asm { ADD R11D,0x48935f22 }
    /* +0x3010c9 */ __asm { XOR R11D,ECX }
    /* +0x3010cc */ __asm { IMUL R8D,dword ptr [RBP + 0x104] }
    /* +0x3010d4 */ __asm { NOT R8D }
    /* +0x3010d7 */ __asm { CMP R11,R8 }
    /* +0x3010da */ __asm { MOV R8D,0x60 }
    /* +0x3010e0 */ __asm { MOV R10,-0x60 }
    /* +0x3010e7 */ __asm { CMOVG R10,R8 }
    /* +0x3010eb */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x3010f5 */ __asm { CMP qword ptr [R9 + R10*0x1],R8 }
    /* +0x3010f9 */ __asm { NOP }
    /* +0x3010fa */ __asm { NOP }
    /* +0x3010fb */ __asm { NOP }
    /* +0x3010fc */ __asm { NOP }
    /* +0x3010fd */ __asm { NOP }
    /* +0x3010fe */ __asm { PUSHFQ }
    /* +0x3010ff */ __asm { POP R8 }
    /* +0x301101 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x301105 */ __asm { MOV qword ptr [RBP + 0x1c0],R8 }
    /* +0x30110c */ __asm { TEST R8D,0x100 }
    /* +0x301113 */ __asm { NOP }
    /* +0x301114 */ __asm { NOP }
    /* +0x301115 */ __asm { NOP }
    /* +0x301116 */ __asm { NOP }
    /* +0x301117 */ __asm { NOP }
    /* +0x301118 */ __asm { NOP }
    /* +0x301119 */ __asm { NOP }
    /* +0x30111a */ __asm { NOP }
    /* +0x30111b */ __asm { NOP }
    /* +0x30111c */ __asm { NOP }
    /* +0x30111d */ __asm { NOP }
    /* +0x30111e */ __asm { NOP }
    /* +0x30111f */ __asm { NOP }
    /* +0x301120 */ __asm { NOP }
    /* +0x301121 */ __asm { NOP }
    /* +0x301122 */ __asm { NOP }
    /* +0x301123 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a73170  |  RVA: 0x303170  |  Size: 245 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a73170(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
    pcVar2 = (code *)((int64_t)(int)(-0x3c5a4001 << bVar1 | 0xc3a5bfffU >> 0x20 - bVar1) +
                     0x7fffa5696d9a);
    (*pcVar2)(pcVar2,param_2,
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a73270  |  RVA: 0x303270  |  Size: 135 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a73270(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  uVar3 = -(short)*(uint32_t *)(param_2 + 0x188) - 0xc50;
  uVar3 = (uVar3 * 0x400 | uVar3 >> 6) + 0xecf1;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  (*(code *)(&UNK_7fffa562b50b + (short)(uVar3 >> bVar2 | uVar3 << 0x10 - bVar2)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a73300  |  RVA: 0x303300  |  Size: 127 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a73300(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  
  uVar2 = *(int *)(param_2 + 0x184) * 0x923623d + 0xb1887f35;
  (*(code *)((int64_t)(int)(uVar2 * 0x4000 | uVar2 >> 0x12) + 0x7fffa5631bb4))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a73380  |  RVA: 0x303380  |  Size: 3555 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a73380(void) {
    /* +0x303380 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x303385 */ __asm { PUSH RBP }
    /* +0x303386 */ __asm { PUSH RSI }
    /* +0x303387 */ __asm { PUSH RBX }
    /* +0x303388 */ __asm { PUSH RDI }
    /* +0x303389 */ __asm { PUSH R12 }
    /* +0x30338b */ __asm { PUSH R13 }
    /* +0x30338d */ __asm { PUSH R15 }
    /* +0x30338f */ __asm { PUSH R14 }
    /* +0x303391 */ __asm { SUB RSP,0xc8 }
    /* +0x303398 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x30339f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x3033a6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x3033ac */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x3033b6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x3033c0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x3033ca */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x3033d3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x3033db */ __asm { JZ 0x7fffa4a73488 }
    /* +0x3033e1 */ __asm { LEA RAX,[0x7fffa47c9507] }
    /* +0x3033e8 */ __asm { LEA RCX,[0x7fffa47c5198] }
    /* +0x3033ef */ __asm { MOV R10D,0x74748290 }
    /* +0x3033f5 */ __asm { ADD R10D,0xcddfbc3d }
    /* +0x3033fc */ __asm { ROR R10D,0x1 }
    /* +0x3033ff */ __asm { MOV R9,qword ptr [RBP + 0x1418] }
    /* +0x303406 */ __asm { SUB R10D,R9D }
    /* +0x303409 */ __asm { NOP }
    /* +0x30340a */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x303411 */ __asm { MOV R11,0x0 }
    /* +0x303418 */ __asm { LEA R8,[0x7fffa47c481f] }
    /* +0x30341f */ __asm { MOVSXD R10,R10D }
    /* +0x303422 */ __asm { MOVZX R10D,uint8_t ptr [RCX + R10*0x1 + 0x9] }
    /* +0x303428 */ __asm { MOV R11D,0xdbf72541 }
    /* +0x30342e */ __asm { XOR R11D,R9D }
    /* +0x303431 */ __asm { ROL R11D,0x11 }
    /* +0x303435 */ __asm { MOVSXD RCX,R11D }
    /* +0x303438 */ __asm { XOR RCX,-0x2c267fca }
    /* +0x30343f */ __asm { ADD RCX,R8 }
    /* +0x303442 */ __asm { MOV RCX,qword ptr [RCX + R10*0x8 + 0x13] }
    /* +0x303447 */ __asm { MOV R8D,0x2da819b2 }
    /* +0x30344d */ __asm { NOT R8D }
    /* +0x303450 */ __asm { LEA R10D,[R8 + R9*0x1] }
    /* +0x303454 */ __asm { ADD R10D,0x8c7c8f06 }
    /* +0x30345b */ __asm { MOVSXD R10,R10D }
    /* +0x30345e */ __asm { XOR RCX,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x303463 */ __asm { MOVQ XMM2,RCX }
    /* +0x303468 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x30346c */ __asm { PXOR XMM4,XMM2 }
    /* +0x303470 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x303475 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x303479 */ __asm { TEST R8,R8 }
    /* +0x30347c */ __asm { JZ 0x7fffa4a734ca }
    /* +0x30347e */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x303485 */ __asm { CALL R8 }
    /* +0x303488 */ __asm { MOVAPS XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x303490 */ __asm { MOVAPS XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x303499 */ __asm { MOVAPS XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x3034a2 */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x3034ab */ __asm { MOVAPS XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x3034b0 */ __asm { MOVAPS XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x3034b6 */ __asm { ADD RSP,0xc8 }
    /* +0x3034bd */ __asm { POP R14 }
    /* +0x3034bf */ __asm { POP R15 }
    /* +0x3034c1 */ __asm { POP R13 }
    /* +0x3034c3 */ __asm { POP R12 }
    /* +0x3034c5 */ __asm { POP RDI }
    /* +0x3034c6 */ __asm { POP RBX }
    /* +0x3034c7 */ __asm { POP RSI }
    /* +0x3034c8 */ __asm { POP RBP }
    /* +0x3034c9 */ __asm { RET }
    /* +0x3034ca */ __asm { MOV R10W,0x4d0f }
    /* +0x3034cf */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x3034d6 */ __asm { ADD R10D,EDX }
    /* +0x3034d9 */ __asm { DEC R10D }
    /* +0x3034dc */ __asm { MOVZX R8D,R10W }
    /* +0x3034e0 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x3034e4 */ __asm { MOV R10W,0x4fa2 }
    /* +0x3034e9 */ __asm { LEA R10D,[RDX + R10*0x1 + -0x2c4] }
    /* +0x3034f1 */ __asm { MOVZX R8D,R10W }
    /* +0x3034f5 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x3034f9 */ __asm { MOV R8D,0x9d5cd9e1 }
    /* +0x3034ff */ __asm { MOV R10D,0x7fcfbc71 }
    /* +0x303505 */ __asm { MOV RCX,qword ptr [RCX + 0x60] }
    /* +0x303509 */ __asm { ROL RCX,0x17 }
    /* +0x30350d */ __asm { ADD RCX,-0x1fb81357 }
    /* +0x303514 */ __asm { MOV R9,-0xd563915d434a41d }
    /* +0x30351e */ __asm { XOR R11D,R11D }
    /* +0x303521 */ __asm { CMP RCX,R9 }
    /* +0x303524 */ __asm { SETZ R11B }
    /* +0x303528 */ __asm { ADD R8D,0x4fdc4600 }
    /* +0x30352f */ __asm { ROL R8D,0xf }
    /* +0x303533 */ __asm { ADD R8D,EDX }
    /* +0x303536 */ __asm { MOV R9D,0x2fb1d56d }
    /* +0x30353c */ __asm { SUB R9D,R10D }
    /* +0x30353f */ __asm { MOVSXD R9,R9D }
    /* +0x303542 */ __asm { MOV R10,-0xd563915d434a41c }
    /* +0x30354c */ __asm { XOR EDX,EDX }
    /* +0x30354e */ __asm { CMP RCX,R10 }
    /* +0x303551 */ __asm { SETC DL }
    /* +0x303554 */ __asm { CMP R9,R8 }
    /* +0x303557 */ __asm { CMOVA EDX,R11D }
    /* +0x30355b */ __asm { CMP DL,0x1 }
    /* +0x30355e */ __asm { NOP }
    /* +0x30355f */ __asm { NOP }
    /* +0x303560 */ __asm { NOP }
    /* +0x303561 */ __asm { NOP }
    /* +0x303562 */ __asm { NOP }
    /* +0x303563 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x303567 */ __asm { PUSHFQ }
    /* +0x303568 */ __asm { POP R8 }
    /* +0x30356a */ __asm { MOV qword ptr [RBP + 0x12c8],R8 }
    /* +0x303571 */ __asm { TEST R8D,0x100 }
    /* +0x303578 */ __asm { NOP }
    /* +0x303579 */ __asm { NOP }
    /* +0x30357a */ __asm { NOP }
    /* +0x30357b */ __asm { NOP }
    /* +0x30357c */ __asm { NOP }
    /* +0x30357d */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x303584 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x303588 */ __asm { MOV R8W,0x2e0d }
    /* +0x30358d */ __asm { IMUL R8D,R8D,-0x6edf }
    /* +0x303594 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30359b */ __asm { MOV R11D,ECX }
    /* +0x30359e */ __asm { XOR R11D,R8D }
    /* +0x3035a1 */ __asm { ROL R11W,0x1 }
    /* +0x3035a5 */ __asm { MOVSX R8D,R11W }
    /* +0x3035a9 */ __asm { CMP R10D,R8D }
    /* +0x3035ac */ __asm { NOP }
    /* +0x3035ad */ __asm { NOP }
    /* +0x3035ae */ __asm { NOP }
    /* +0x3035af */ __asm { NOP }
    /* +0x3035b0 */ __asm { NOP }
    /* +0x3035b1 */ __asm { ADD RAX,0x10 }
    /* +0x3035b5 */ __asm { MOV R9,0x10000000014b }
    /* +0x3035bf */ __asm { MOV R11,0x39cda41577e4d47d }
    /* +0x3035c9 */ __asm { MOV RDX,0x0 }
    /* +0x3035d0 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x3035d7 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x3035da */ __asm { PUSHFQ }
    /* +0x3035db */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x3035e3 */ __asm { POPFQ }
    /* +0x3035e4 */ __asm { MOV EDX,0x291abcc5 }
    /* +0x3035e9 */ __asm { SUB EDX,dword ptr [RBP + 0x1418] }
    /* +0x3035ef */ __asm { ROL EDX,0x5 }
    /* +0x3035f2 */ __asm { MOV dword ptr [RBP + -0x8],EDX }
    /* +0x3035f5 */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x3035f8 */ __asm { CMP EDX,0xfcebf0f4 }
    /* +0x3035fe */ __asm { JBE 0x7fffa4a73782 }
    /* +0x303604 */ __asm { MOVZX R15D,word ptr [RAX + 0x58] }
    /* +0x303609 */ __asm { CMP R15D,0x2 }
    /* +0x30360d */ __asm { JNC 0x7fffa4a73616 }
    /* +0x30360f */ __asm { XOR EDX,EDX }
    /* +0x303611 */ __asm { JMP 0x7fffa4a73748 }
    /* +0x303616 */ __asm { MOV RDX,qword ptr [RAX + 0x60] }
    /* +0x30361a */ __asm { SHR R15D,0x1 }
    /* +0x30361d */ __asm { CMP R15W,0x1 }
    /* +0x303622 */ __asm { JZ 0x7fffa4a736cc }
    /* +0x303628 */ __asm { MOV EDI,R15D }
    /* +0x30362b */ __asm { AND EDI,0xfffffffe }
    /* +0x30362e */ __asm { MOV R14D,0x2 }
    /* +0x303634 */ __asm { MOV RBX,-0x56ac57fd56f4aa33 }
    /* +0x30363e */ __asm { MOV ECX,0x819f8c9d }
    /* +0x303643 */ __asm { MOV ESI,0x8e07eef5 }
    /* +0x303648 */ __asm { XOR ESI,0xb8c797 }
    /* +0x30364e */ __asm { IMUL R12D,ESI,0x2da62d11 }
    /* +0x303655 */ __asm { MOV R8,qword ptr [RBP + 0x1418] }
    /* +0x30365c */ __asm { ADD R12D,R8D }
    /* +0x30365f */ __asm { IMUL R13D,ECX,0x49ad1cdb }
    /* +0x303666 */ __asm { MOVZX ECX,word ptr [RDX + R14*0x2 + -0x4] }
    /* +0x30366c */ __asm { MOV ESI,ECX }
    /* +0x30366e */ __asm { OR ESI,0x20 }
    /* +0x303671 */ __asm { LEA R10D,[RCX + -0x41] }
    /* +0x303675 */ __asm { CMP R10W,0x1a }
    /* +0x30367a */ __asm { CMOVNC ESI,ECX }
    /* +0x30367d */ __asm { MOVZX ECX,SIL }
    /* +0x303681 */ __asm { MOV R10,RCX }
    /* +0x303684 */ __asm { OR R10,RBX }
    /* +0x303687 */ __asm { XOR RBX,RCX }
    /* +0x30368a */ __asm { MOV ECX,R8D }
    /* +0x30368d */ __asm { ROL R13D,CL }
    /* +0x303690 */ __asm { CMP R13,R12 }
    /* +0x303693 */ __asm { CMOVL RBX,R10 }
    /* +0x303697 */ __asm { IMUL RBX,R9 }
    /* +0x30369b */ __asm { MOVZX ECX,word ptr [RDX + R14*0x2 + -0x2] }
    /* +0x3036a1 */ __asm { MOV R10D,ECX }
    /* +0x3036a4 */ __asm { OR R10D,0x20 }
    /* +0x3036a8 */ __asm { LEA ESI,[RCX + -0x41] }
    /* +0x3036ab */ __asm { CMP SI,0x1a }
    /* +0x3036af */ __asm { CMOVNC R10D,ECX }
    /* +0x3036b3 */ __asm { MOVZX ECX,R10B }
    /* +0x3036b7 */ __asm { XOR RBX,RCX }
    /* +0x3036ba */ __asm { IMUL RBX,R9 }
    /* +0x3036be */ __asm { CMP RDI,R14 }
    /* +0x3036c1 */ __asm { JZ 0x7fffa4a736d9 }
    /* +0x3036c3 */ __asm { ADD R14,0x2 }
    /* +0x3036c7 */ __asm { JMP 0x7fffa4a7363e }
    /* +0x3036cc */ __asm { MOV RBX,-0x56ac57fd56f4aa33 }
    /* +0x3036d6 */ __asm { XOR R14D,R14D }
    /* +0x3036d9 */ __asm { TEST R15B,0x1 }
    /* +0x3036dd */ __asm { JZ 0x7fffa4a73733 }
    /* +0x3036df */ __asm { MOV ECX,0xc5d78c2a }
    /* +0x3036e4 */ __asm { ADD ECX,0x20e5b174 }
    /* +0x3036ea */ __asm { ROL ECX,0x1a }
    /* +0x3036ed */ __asm { IMUL ECX,dword ptr [RBP + 0x104] }
    /* +0x3036f4 */ __asm { MOVZX EDX,word ptr [RDX + R14*0x2] }
    /* +0x3036f9 */ __asm { MOV ESI,EDX }
    /* +0x3036fb */ __asm { OR ESI,0x20 }
    /* +0x3036fe */ __asm { LEA R15D,[RDX + -0x41] }
    /* +0x303702 */ __asm { CMP R15W,0x1a }
    /* +0x303707 */ __asm { CMOVNC ESI,EDX }
    /* +0x30370a */ __asm { MOVZX EDX,SIL }
    /* +0x30370e */ __asm { XOR RDX,RBX }
    /* +0x303711 */ __asm { MOV RBX,RDX }
    /* +0x303714 */ __asm { IMUL RBX,R9 }
    /* +0x303718 */ __asm { MOV R8,-0x10000000014b }
    /* +0x303722 */ __asm { ADD RDX,R8 }
    /* +0x303725 */ __asm { CMP RCX,0x52933f17 }
    /* +0x30372c */ __asm { CMOVNZ RDX,RBX }
    /* +0x303730 */ __asm { MOV RBX,RDX }
    /* +0x303733 */ __asm { CMP RBX,R11 }
    /* +0x303736 */ __asm { SETZ DL }
    /* +0x303739 */ __asm { LEA R13,[0x7fffa4770000] }
    /* +0x303740 */ __asm { NOP }
    /* +0x303741 */ __asm { MOV RCX,0x0 }
    /* +0x303748 */ __asm { MOV ECX,0x3e17f944 }
    /* +0x30374d */ __asm { XOR ECX,0x7640d4a2 }
    /* +0x303753 */ __asm { IMUL ECX,dword ptr [RBP + 0x104] }
    /* +0x30375a */ __asm { XOR ECX,0x95620c38 }
    /* +0x303760 */ __asm { MOV dword ptr [RBP + -0x8],ECX }
    /* +0x303763 */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x303766 */ __asm { CMP ECX,0x26bd4fb8 }
    /* +0x30376c */ __asm { JNC 0x7fffa4a7378a }
    /* +0x30376e */ __asm { TEST DL,DL }
    /* +0x303770 */ __asm { JNZ 0x7fffa4a73798 }
    /* +0x303772 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x303779 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x30377d */ __asm { JMP 0x7fffa4a735c9 }
    /* +0x303782 */ __asm { RET }
    /* +0x30378a */ __asm { MOV ESI,0xee4d1cec }
    /* +0x30378f */ __asm { JNS 0x7fffa4a737cc }
    /* +0x303791 */ __asm { IRETD }
    /* +0x303798 */ __asm { MOV R10W,0xbd20 }
    /* +0x30379d */ __asm { ADD R10D,0xffff9500 }
    /* +0x3037a4 */ __asm { IMUL R10D,dword ptr [RBP + 0x1400] }
    /* +0x3037ac */ __asm { MOVZX R8D,R10W }
    /* +0x3037b0 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x3037b4 */ __asm { MOV R8,0x432683e3afdf2b29 }
    /* +0x3037be */ __asm { CMP RCX,R8 }
    /* +0x3037c1 */ __asm { NOP }
    /* +0x3037c2 */ __asm { NOP }
    /* +0x3037c3 */ __asm { NOP }
    /* +0x3037c4 */ __asm { NOP }
    /* +0x3037c5 */ __asm { NOP }
    /* +0x3037c6 */ __asm { NOP }
    /* +0x3037c7 */ __asm { NOP }
    /* +0x3037c8 */ __asm { NOP }
    /* +0x3037c9 */ __asm { NOP }
    /* +0x3037ca */ __asm { NOP }
    /* +0x3037cb */ __asm { NOP }
    /* +0x3037cc */ __asm { NOP }
    /* +0x3037cd */ __asm { NOP }
    /* +0x3037ce */ __asm { NOP }
    /* +0x3037cf */ __asm { NOP }
    /* +0x3037d0 */ __asm { MOV R10W,0x6c6f }
    /* +0x3037d5 */ __asm { IMUL R10D,R10D,0x410f }
    /* +0x3037dc */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x3037e3 */ __asm { ROR R10W,CL }
    /* +0x3037e7 */ __asm { IMUL R10D,R10D,-0xaaf }
    /* +0x3037ee */ __asm { MOVZX R8D,R10W }
    /* +0x3037f2 */ __asm { MOV RCX,qword ptr [RAX + 0x30] }
    /* +0x3037f6 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x3037fa */ __asm { MOV qword ptr [RBP + 0x11e0],RCX }
    /* +0x303801 */ __asm { TEST RCX,RCX }
    /* +0x303804 */ __asm { JZ 0x7fffa4a739fb }
    /* +0x30380a */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x303811 */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x303815 */ __asm { ADD R8,RAX }
    /* +0x303818 */ __asm { JZ 0x7fffa4a739fb }
    /* +0x30381e */ __asm { MOV CX,0x1602 }
    /* +0x303822 */ __asm { MOVZX R11D,CX }
    /* +0x303826 */ __asm { XOR R11,0x1632 }
    /* +0x30382d */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x303831 */ __asm { MOV R10W,0xccb1 }
    /* +0x303836 */ __asm { MOV RAX,qword ptr [RAX + 0xfe8] }
    /* +0x30383d */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x303844 */ __asm { ADD R10D,ECX }
    /* +0x303847 */ __asm { IMUL R10D,R10D,-0x2abb }
    /* +0x30384e */ __asm { NOT R10D }
    /* +0x303851 */ __asm { MOVZX R11D,R10W }
    /* +0x303855 */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x303859 */ __asm { ADD RAX,qword ptr [RCX + 0x370] }
    /* +0x303860 */ __asm { MOV RCX,-0x5d293fd390ef0015 }
    /* +0x30386a */ __asm { CMP RAX,RCX }
    /* +0x30386d */ __asm { NOP }
    /* +0x30386e */ __asm { NOP }
    /* +0x30386f */ __asm { NOP }
    /* +0x303870 */ __asm { NOP }
    /* +0x303871 */ __asm { NOP }
    /* +0x303872 */ __asm { NOP }
    /* +0x303873 */ __asm { NOP }
    /* +0x303874 */ __asm { NOP }
    /* +0x303875 */ __asm { NOP }
    /* +0x303876 */ __asm { NOP }
    /* +0x303877 */ __asm { NOP }
    /* +0x303878 */ __asm { NOP }
    /* +0x303879 */ __asm { NOP }
    /* +0x30387a */ __asm { NOP }
    /* +0x30387b */ __asm { NOP }
    /* +0x30387c */ __asm { NOP }
    /* +0x30387d */ __asm { NOP }
    /* +0x3039fb */ __asm { MOV qword ptr [RBP + 0x108],0x0 }
    /* +0x303a06 */ __asm { JMP 0x7fffa4a73a2d }
    /* +0x303a2d */ __asm { MOV R8,qword ptr [RBP + 0x11d8] }
    /* +0x303a34 */ __asm { MOV R15,R8 }
    /* +0x303a37 */ __asm { SHR R15,0x20 }
    /* +0x303a3b */ __asm { ADD R15D,R8D }
    /* +0x303a3e */ __asm { XOR ESI,ESI }
    /* +0x303a40 */ __asm { MOV qword ptr [RBP + 0x1498],0x0 }
    /* +0x303a4b */ __asm { MOV R13,qword ptr [RBP + 0x11e0] }
    /* +0x303a52 */ __asm { CMP RSI,qword ptr [RBP + 0x108] }
    /* +0x303a59 */ __asm { JZ 0x7fffa4a73d6b }
    /* +0x303a5f */ __asm { MOV R11D,0xae3900a6 }
    /* +0x303a65 */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x303a6c */ __asm { ADD R11D,EAX }
    /* +0x303a6f */ __asm { MOV R9D,0x5510a934 }
    /* +0x303a75 */ __asm { XOR R9D,EAX }
    /* +0x303a78 */ __asm { MOV R8W,0x63a3 }
    /* +0x303a7d */ __asm { MOV R10D,0xd3c5f519 }
    /* +0x303a83 */ __asm { XOR R10D,EAX }
    /* +0x303a86 */ __asm { IMUL EDX,R10D,-0x16280f4d }
    /* +0x303a8d */ __asm { MOV RCX,qword ptr [RBP + 0x1c0] }
    /* +0x303a94 */ __asm { MOVZX R10D,word ptr [RCX + RSI*0x2] }
    /* +0x303a99 */ __asm { ROL R11D,0x8 }
    /* +0x303a9d */ __asm { IMUL ECX,R8D,-0x3bbf }
    /* +0x303aa4 */ __asm { SUB ECX,EAX }
    /* +0x303aa6 */ __asm { MOVSXD RAX,EDX }
    /* +0x303aa9 */ __asm { NOT R9D }
    /* +0x303aac */ __asm { MOV R8,qword ptr [RBP + 0x1318] }
    /* +0x303ab3 */ __asm { MOV R8D,dword ptr [R8 + R10*0x4] }
    /* +0x303ab7 */ __asm { CMP R8D,dword ptr [RBP + 0x11d8] }
    /* +0x303abe */ __asm { SETNC DL }
    /* +0x303ac1 */ __asm { MOV RBX,qword ptr [RBP + 0x150] }
    /* +0x303ac8 */ __asm { MOV EBX,dword ptr [RBX + RSI*0x4] }
    /* +0x303acb */ __asm { MOV R12,RBX }
    /* +0x303ace */ __asm { ADD R12,R13 }
    /* +0x303ad1 */ __asm { XOR EDI,EDI }
    /* +0x303ad3 */ __asm { TEST EBX,EBX }
    /* +0x303ad5 */ __asm { SETNZ DIL }
    /* +0x303ad9 */ __asm { IMUL R9D,R9D,-0x42013929 }
    /* +0x303ae0 */ __asm { XOR ECX,0x6511 }
    /* +0x303ae6 */ __asm { MOVZX ECX,CX }
    /* +0x303ae9 */ __asm { XOR R14D,R14D }
    /* +0x303aec */ __asm { CMP EBX,ECX }
    /* +0x303aee */ __asm { SETZ R14B }
    /* +0x303af2 */ __asm { CMP RAX,R11 }
    /* +0x303af5 */ __asm { CMOVLE EDI,R14D }
    /* +0x303af9 */ __asm { TEST DIL,DIL }
    /* +0x303afc */ __asm { MOV R11D,0x0 }
    /* +0x303b02 */ __asm { CMOVZ R11,R12 }
    /* +0x303b06 */ __asm { MOVSXD RAX,R9D }
    /* +0x303b09 */ __asm { MOV qword ptr [RBP],R11 }
    /* +0x303b0d */ __asm { TEST R11,R11 }
    /* +0x303b10 */ __asm { SETZ CL }
    /* +0x303b13 */ __asm { CMP R8D,R15D }
    /* +0x303b16 */ __asm { SETC R9B }
    /* +0x303b1a */ __asm { AND R9B,DL }
    /* +0x303b1d */ __asm { MOV uint8_t ptr [RBP + 0xc],R9B }
    /* +0x303b21 */ __asm { ADD R10D,dword ptr [RBP + 0x1410] }
    /* +0x303b28 */ __asm { MOV dword ptr [RBP + 0x8],R10D }
    /* +0x303b2c */ __asm { MOV R11D,0x82be1cd1 }
    /* +0x303b32 */ __asm { XOR R11D,0xb82290 }
    /* +0x303b39 */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x303b41 */ __asm { CMP RAX,R11 }
    /* +0x303b44 */ __asm { SETLE R10B }
    /* +0x303b48 */ __asm { MOV R8D,R8D }
    /* +0x303b4b */ __asm { ADD R8,R13 }
    /* +0x303b4e */ __asm { MOV qword ptr [RBP + -0x8],R8 }
    /* +0x303b52 */ __asm { AND R10B,CL }
    /* +0x303b55 */ __asm { CMP R10B,0x1 }
    /* +0x303b59 */ __asm { JNZ 0x7fffa4a73b71 }
    /* +0x303b5b */ __asm { MOV dword ptr [RBP + 0x12e8],0xe74f1127 }
    /* +0x303b65 */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x303b6c */ __asm { JMP 0x7fffa4a73d28 }
    /* +0x303b71 */ __asm { MOV dword ptr [RBP + 0x12e8],0x52658ddc }
    /* +0x303b7b */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x303b82 */ __asm { MOV CL,0x4c }
    /* +0x303b84 */ __asm { SUB CL,uint8_t ptr [RBP + 0x1418] }
    /* +0x303b8a */ __asm { ADD CL,0x6 }
    /* +0x303b8d */ __asm { MOV R10,qword ptr [RBP] }
    /* +0x303b91 */ __asm { MOVZX EDX,uint8_t ptr [R10] }
    /* +0x303b95 */ __asm { CMP DL,CL }
    /* +0x303b97 */ __asm { JZ 0x7fffa4a73ca3 }
    /* +0x303b9d */ __asm { LEA RAX,[R10 + 0x1] }
    /* +0x303ba1 */ __asm { MOV R8D,0xb5383f }
    /* +0x303ba7 */ __asm { MOVZX R11D,DL }
    /* +0x303bab */ __asm { MOVZX EDX,uint8_t ptr [RAX] }
    /* +0x303bae */ __asm { XOR R11D,R8D }
    /* +0x303bb1 */ __asm { IMUL R8D,R11D,0x10001ab }
    /* +0x303bb8 */ __asm { TEST DL,DL }
    /* +0x303bba */ __asm { JZ 0x7fffa4a73bc1 }
    /* +0x303bbc */ __asm { INC RAX }
    /* +0x303bbf */ __asm { JMP 0x7fffa4a73ba7 }
    /* +0x303bc1 */ __asm { AND R8D,0x7fffffff }
    /* +0x303bc8 */ __asm { CMP R8D,0x3e498d29 }
    /* +0x303bcf */ __asm { JNZ 0x7fffa4a73ca3 }
    /* +0x303bd5 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x303bdc */ __asm { TEST RAX,RAX }
    /* +0x303bdf */ __asm { CMOVZ RAX,R10 }
    /* +0x303be3 */ __asm { MOV qword ptr [RBP + 0x1498],RAX }
    /* +0x303bea */ __asm { CMP uint8_t ptr [RBP + 0xc],0x1 }
    /* +0x303bee */ __asm { JNZ 0x7fffa4a73d46 }
    /* +0x303bf4 */ __asm { MOV R8D,0x63ed2565 }
    /* +0x303bfa */ __asm { MOV R11D,0x5e0a236 }
    /* +0x303c00 */ __asm { MOV R10D,0xedda9f53 }
    /* +0x303c06 */ __asm { MOV EDX,0x2a0dfefe }
    /* +0x303c0b */ __asm { XOR R11D,0xe4c94893 }
    /* +0x303c12 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x303c19 */ __asm { SUB R11D,ECX }
    /* +0x303c1c */ __asm { LEA R12,[RBP + -0x8] }
    /* +0x303c20 */ __asm { ADD R11D,0xc0000354 }
    /* +0x303c27 */ __asm { MOVSXD R11,R11D }
    /* +0x303c2a */ __asm { MOV R9,qword ptr [RBP + 0x11e0] }
    /* +0x303c31 */ __asm { MOV RBX,R9 }
    /* +0x303c34 */ __asm { SHL RBX,0x1b }
    /* +0x303c38 */ __asm { LEA RAX,[0x7fffa52c93a9] }
    /* +0x303c3f */ __asm { ADD RAX,R11 }
    /* +0x303c42 */ __asm { LEA R11,[R9 + -0x1b] }
    /* +0x303c46 */ __asm { IMUL EDX,EDX,-0x31380de3 }
    /* +0x303c4c */ __asm { NOT EDX }
    /* +0x303c4e */ __asm { SUB EDX,ECX }
    /* +0x303c50 */ __asm { MOV EDI,0x5b61afee }
    /* +0x303c55 */ __asm { SUB EDI,R10D }
    /* +0x303c58 */ __asm { ROR EDI,CL }
    /* +0x303c5a */ __asm { MOVSXD RDI,EDI }
    /* +0x303c5d */ __asm { MOV R10,R12 }
    /* +0x303c60 */ __asm { SHL R10,0x3a }
    /* +0x303c64 */ __asm { ADD R10,R12 }
    /* +0x303c67 */ __asm { ADD R10,-0x47bfba14 }
    /* +0x303c6e */ __asm { ADD R8D,ECX }
    /* +0x303c71 */ __asm { ADD R8D,0xcdbd3190 }
    /* +0x303c78 */ __asm { CMP RDI,R8 }
    /* +0x303c7b */ __asm { CMOVLE R11,RBX }
    /* +0x303c7f */ __asm { ADD R11,R9 }
    /* +0x303c82 */ __asm { XOR R11,0x2320a5df }
    /* +0x303c89 */ __asm { CALL RAX }
    /* +0x303c8b */ __asm { MOV R8,RCX }
    /* +0x303c8e */ __asm { ADD R8,-0x526c897e }
    /* +0x303c95 */ __asm { TEST R8,R8 }
    /* +0x303c98 */ __asm { JZ 0x7fffa4a73d34 }
    /* +0x303c9e */ __asm { JMP 0x7fffa4a74eb1 }
    /* +0x303ca3 */ __asm { MOV R10W,0xb36a }
    /* +0x303ca8 */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x303caf */ __asm { SUB R10D,EDX }
    /* +0x303cb2 */ __asm { ROL R10W,0x2 }
    /* +0x303cb7 */ __asm { MOVZX R8D,R10W }
    /* +0x303cbb */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x303cbf */ __asm { MOV R8D,0x5f6c4fc6 }
    /* +0x303cc5 */ __asm { MOV R10W,0xcbde }
    /* +0x303cca */ __asm { XOR R10D,EDX }
    /* +0x303ccd */ __asm { LEA RCX,[RAX + 0xc00] }
    /* +0x303cd4 */ __asm { ADD R10D,0xffff87a4 }
    /* +0x303cdb */ __asm { MOVZX R11D,R10W }
    /* +0x303cdf */ __asm { OR RAX,0xc00 }
    /* +0x303ce5 */ __asm { SUB R8D,EDX }
    /* +0x303ce8 */ __asm { ROL R8D,0x10 }
    /* +0x303cec */ __asm { MOV R10D,0x204bfcf8 }
    /* +0x303cf2 */ __asm { ADD R10D,EDX }
    /* +0x303cf5 */ __asm { MOV R9D,0xb549bfc0 }
    /* +0x303cfb */ __asm { SUB R9D,R10D }
    /* +0x303cfe */ __asm { MOVSXD R9,R9D }
    /* +0x303d01 */ __asm { CMP R8,R9 }
    /* +0x303d04 */ __asm { CMOVC RAX,RCX }
    /* +0x303d08 */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x303d0c */ __asm { MOV R8D,0x6a8 }
    /* +0x303d12 */ __asm { ADD RCX,R8 }
    /* +0x303d15 */ __asm { IMUL RCX,qword ptr [RAX] }
    /* +0x303d19 */ __asm { MOV RAX,0x1b967edfdccb6d1b }
    /* +0x303d23 */ __asm { CMP RCX,RAX }
    /* +0x303d26 */ __asm { JZ 0x7fffa4a73d63 }
    /* +0x303d28 */ __asm { XOR R8D,R8D }
    /* +0x303d2b */ __asm { TEST R8,R8 }
    /* +0x303d2e */ __asm { JNZ 0x7fffa4a74eb1 }
    /* +0x303d34 */ __asm { INC RSI }
    /* +0x303d37 */ __asm { CMP RSI,qword ptr [RBP + 0x108] }
    /* +0x303d3e */ __asm { JNZ 0x7fffa4a73a5f }
    /* +0x303d44 */ __asm { JMP 0x7fffa4a73d6b }
    /* +0x303d46 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x303d4d */ __asm { NOP }
    /* +0x303d4e */ __asm { MOV RAX,0x0 }
    /* +0x303d55 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x303d59 */ __asm { TEST R8,R8 }
    /* +0x303d5c */ __asm { JZ 0x7fffa4a73d34 }
    /* +0x303d5e */ __asm { JMP 0x7fffa4a74eb1 }
    /* +0x303d63 */ __asm { ADD CL,uint8_t ptr [R13 + -0x141312f2] }
    /* +0x303d6a */ __asm { MOV EBP,0x98bd8348 }
    /* +0x303d6f */ __asm { ADC AL,0x0 }
    /* +0x303d71 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0x303d73 */ __asm { JNZ 0x7fffa4a73d7d }
    /* +0x303d75 */ __asm { XOR R8D,R8D }
    /* +0x303d78 */ __asm { JMP 0x7fffa4a74eb1 }
}


// ============================================================================
// Function : Unwind@7fffa4a75000  |  RVA: 0x305000  |  Size: 258 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a75000(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  int iVar4;
  uint64_t in_R10;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    iVar4 = (int)CONCAT62((int6)((uint64_t)in_R10 >> 0x10),0x17fd) + 0x2e6;
    uVar3 = (uint16_t)iVar4;
    uVar2 = ~(((uint32_t)*(uint64_t *)(param_2 + 0x1518) | 1) *
             CONCAT22((short)((uint32_t)iVar4 >> 0x10),uVar3 << 7 | uVar3 >> 9));
    pcVar1 = (code *)((int64_t)(short)uVar2 + 0x7fffa568b7be);
    (*pcVar1)(pcVar1,uVar2,
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a75110  |  RVA: 0x305110  |  Size: 229 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a75110(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    uVar1 = *(uint32_t *)(param_2 + 0x1498) ^ 0x1ed540f4;
    (*(code *)((int64_t)(int)(uVar1 << 4 | uVar1 >> 0x1c) + 0x7fffa56941c5))
              (0x7fffa56941c5,param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a75200  |  RVA: 0x305200  |  Size: 125 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a75200(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)(&UNK_7fffa5629466 + (short)((short)*(uint64_t *)(param_2 + 0x1480) * 0x1118 + 0x6cb2)
            ))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a75280  |  RVA: 0x305280  |  Size: 156 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a75280(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1508) & 0xf;
  uVar3 = (uint16_t)(((uint32_t)*(uint64_t *)(param_2 + 0x1348) | 1) * 0xcef4);
  (*(code *)((int64_t)
             (short)((short)*(uint64_t *)(param_2 + 0x1480) *
                     (uVar3 << bVar2 | uVar3 >> 0x10 - bVar2) -
                    (short)*(uint32_t *)(param_2 + 0x1258)) + 0x7fffa562a5e8))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a75320  |  RVA: 0x305320  |  Size: 228 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a75320(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    FUN_7fffa5687c30(0x7fffa5692c41,param_2,
                     *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a75410  |  RVA: 0x305410  |  Size: 256 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a75410(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar1 = *(int *)(param_2 + 0x184) * 0x49772825 ^ (uint32_t)*(uint64_t *)(param_2 + 0x1260);
    (*(code *)(&UNK_7fffa5690ab8 + (int)(uVar1 << 0x16 | uVar1 >> 10)))
              (&UNK_7fffa5690ab8,*(uint64_t *)(param_2 + 0x1260),
               *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a75510  |  RVA: 0x305510  |  Size: 144 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a75510(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  uVar3 = (short)*(uint64_t *)(param_2 + 0x1260) + 0x73f5;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  uVar3 = uVar3 >> bVar2 | uVar3 << 0x10 - bVar2;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1258) & 0xf;
  (*(code *)((int64_t)(short)(uVar3 << bVar2 | uVar3 >> 0x10 - bVar2) + 0x7fffa562b912))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a755a0  |  RVA: 0x3055a0  |  Size: 558 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void Unwind_7fffa4a755a0(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint8_t bVar2;
  short sVar3;
  int64_t *plVar4;
  uint16_t uVar5;
  uint64_t uVar6;
  uint16_t uVar7;
  uint16_t uVar8;
  uint16_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint8_t in_AF;
  bool bVar12;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  
  if (*(int64_t *)(param_2 + 0x170) != 0) {
    sVar3 = (short)*(uint64_t *)(param_2 + 0x1480);
    uVar8 = (uint16_t)*(uint64_t *)(param_2 + 0x1260);
    uVar7 = sVar3 * -0x329a ^ uVar8;
    uVar9 = (0xb033 - uVar8 ^ 0x7f1a) + 0x1eb9;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
    *(uint64_t *)(param_2 + 0x78) =
         *(uint64_t *)
          (((int64_t)(short)(uVar7 << 0xb | uVar7 >> 5) ^ 0x42bdU) + 0x7fffa47bd622 +
          (uint64_t)
          *(uint8_t *)((int64_t)(short)(~(sVar3 * -0x6a8c) * 0x3e55 - uVar8) + 0x7fffa47c15dc) * 8) ^
         *(uint64_t *)((int64_t)(short)(uVar9 << bVar2 | uVar9 >> 0x10 - bVar2) + 0x7fffa47bce3e)
         ^ 0xffffffffffffffff;
    if (*(code **)(param_2 + 0x78) == (code *)0x0) {
      uVar8 = (uint16_t)*(uint64_t *)(param_2 + 0x1498);
      uVar7 = ~((short)*(uint32_t *)(param_2 + 0x1260) - 0x165U) - uVar8;
      uVar8 = ((uVar8 ^ 0x31d9) + 0xbc9a) * (short)*(uint32_t *)(param_2 + 0x188);
      uVar6 = *(uint64_t *)
               (*(int64_t *)((uint64_t)(uint16_t)(uVar8 * 0x10 | uVar8 >> 0xc) + 0xff00000000) +
               0x60);
      uVar11 = uVar6 + 0xf9218a1aac722b69;
      lVar1 = *(int64_t *)
               (*(int64_t *)((uint64_t)(uint16_t)(uVar7 * 8 | uVar7 >> 0xd) + 0xff00000000) + 0x18);
      *(uint64_t *)(param_2 + 0x240) =
           (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)SBORROW8(uVar6,0x6de75e5538dd497) * 0x800 |
           (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
           (uint64_t)((int64_t)uVar11 < 0) * 0x80 | (uint64_t)(uVar11 == 0) * 0x40 |
           (uint64_t)(in_AF & 1) * 0x10 | (uint64_t)((POPCOUNT(uVar11 & 0xff) & 1U) == 0) * 4 |
           (uint64_t)(uVar6 < 0x6de75e5538dd497) | (uint64_t)(in_ID & 1) * 0x200000 |
           (uint64_t)(in_VIP & 1) * 0x100000 | (uint64_t)(in_VIF & 1) * 0x80000 |
           (uint64_t)(in_AC & 1) * 0x40000;
      *(uint32_t *)(param_2 + 0x78) = 0x656c32dd;
      plVar4 = (int64_t *)(lVar1 + 0x10);
      while( true ) {
        plVar4 = (int64_t *)*plVar4;
        *(uint32_t *)(param_2 + 0x78) = 0xfe012e70;
        if (*(uint32_t *)(param_2 + 0x78) < 0xfcebf0f5) {
          return;
        }
        if (*(uint16_t *)(plVar4 + 0xb) < 2) {
          bVar12 = false;
        }
        else {
          lVar1 = plVar4[0xc];
          uVar8 = *(uint16_t *)(plVar4 + 0xb) >> 1;
          if (uVar8 == 1) {
            uVar6 = 0xa953a802a90b55cd;
            uVar11 = 0;
          }
          else {
            uVar11 = 2;
            uVar6 = 0xa953a802a90b55cd;
            while( true ) {
              uVar10 = *(uint64_t *)(param_2 + 0x1498) ^ 0x32e9fc18c2cf86c4;
              uVar7 = *(uint16_t *)(lVar1 + -4 + uVar11 * 2);
              uVar9 = *(uint16_t *)(lVar1 + -2 + uVar11 * 2);
              uVar5 = uVar9 | 0x20;
              if (0x19 < (uint16_t)(uVar9 - 0x41)) {
                uVar5 = uVar9;
              }
              uVar9 = uVar7 | 0x20;
              if (0x19 < (uint16_t)(uVar7 - 0x41)) {
                uVar9 = uVar7;
              }
              uVar6 = (((uint8_t)uVar9 ^ uVar6) * 0x10000000014b ^ (uint64_t)(uint8_t)uVar5) *
                      ((uVar10 << 0xe | uVar10 >> 0x32) + *(int64_t *)(param_2 + 0x1260));
              if ((uVar8 & 0xfffffffe) == uVar11) break;
              uVar11 = uVar11 + 2;
            }
          }
          if ((uVar8 & 1) != 0) {
            uVar8 = *(uint16_t *)(lVar1 + uVar11 * 2);
            uVar7 = uVar8 | 0x20;
            if (0x19 < (uint16_t)(uVar8 - 0x41)) {
              uVar7 = uVar8;
            }
            uVar6 = ((uint8_t)uVar7 ^ uVar6) * 0x10000000014b;
          }
          bVar12 = uVar6 == 0x39cda41577e4d47d;
        }
        *(uint32_t *)(param_2 + 0x78) = 0x275bfaa;
        if ((0x26bd4fb7 < *(uint32_t *)(param_2 + 0x78)) || (bVar12)) break;
        *(uint32_t *)(param_2 + 0x78) = 0xb7a0a379;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (**(code **)(param_2 + 0x78))(*(uint64_t *)(param_2 + 0x170));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a77320  |  RVA: 0x307320  |  Size: 1017 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a77320(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint16_t uVar2;
  uint64_t uVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  int64_t *plVar6;
  uint16_t uVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint16_t uVar11;
  uint16_t uVar12;
  uint32_t uVar13;
  uint16_t uVar14;
  uint64_t uVar15;
  uint8_t in_AF;
  bool bVar16;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  
  if (*(int64_t *)(param_2 + 0x170) != 0) {
    uVar8 = (uint32_t)*(uint64_t *)(param_2 + 0x1260);
    uVar13 = (*(uint32_t *)(param_2 + 0x188) ^ 0x76340ae0) * 0x589e6c01 +
             (int)*(uint64_t *)(param_2 + 0x1498);
    bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0x1f;
    uVar10 = uVar8 | 1;
    bVar5 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
    *(uint64_t *)(param_2 + 0x78) =
         *(uint64_t *)((int64_t)(int)(uVar13 >> bVar4 | uVar13 << 0x20 - bVar4) + 0x7fffa47c51d1)
         ^ *(uint64_t *)
            ((int64_t)(int)(-0x37fd4b21 - (uVar8 ^ 0x61a85055) * *(int *)(param_2 + 0x184)) +
             0x7fffa47c587f +
            (uint64_t)
            *(uint8_t *)((int64_t)
                      (int)((-0x4d43ef44 - (0x47beec77U >> bVar5 | 0x47beec77 << 0x20 - bVar5)) *
                           uVar10) + 0x7fffa47c9dd8) * 8) ^ 0xffffffffffffffff;
    if (*(code **)(param_2 + 0x78) == (code *)0x0) {
      uVar3 = *(uint64_t *)(param_2 + 0x1498);
      uVar14 = (short)uVar3 + 0x6c09;
      bVar4 = (uint8_t)uVar3 & 0xf;
      bVar5 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0x1f;
      lVar1 = *(int64_t *)
               (*(int64_t *)
                 ((uint64_t)
                  (~((uint16_t)(0xac7cU >> bVar4 | -0x5384 << 0x10 - bVar4) * uVar10) & 0xffff) +
                 0xff00000000) + 0x60) * -0x1a166ad26102683b +
              (uint64_t)((0x728a2c6aU >> bVar5 | 0x728a2c6a << 0x20 - bVar5) ^ (uint32_t)uVar3);
      uVar9 = lVar1 - 0x7837e77d;
      uVar15 = lVar1 + 0xa4f6a45232fa94f5;
      lVar1 = *(int64_t *)
               (*(int64_t *)
                 ((uint64_t)
                  ((uint32_t)(uint16_t)(uVar14 * 0x20 | uVar14 >> 0xb) +
                   ((int)*(uint64_t *)(param_2 + 0x1518) - (int)*(uint64_t *)(param_2 + 0x1260))
                  & 0xffff) + 0xff00000000) + 0x18);
      *(uint64_t *)(param_2 + 0x1340) =
           (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)SBORROW8(uVar9,0x5b095bad54cd838e) * 0x800 |
           (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
           (uint64_t)((int64_t)uVar15 < 0) * 0x80 | (uint64_t)(uVar15 == 0) * 0x40 |
           (uint64_t)(in_AF & 1) * 0x10 | (uint64_t)((POPCOUNT(uVar15 & 0xff) & 1U) == 0) * 4 |
           (uint64_t)(uVar9 < 0x5b095bad54cd838e) | (uint64_t)(in_ID & 1) * 0x200000 |
           (uint64_t)(in_VIP & 1) * 0x100000 | (uint64_t)(in_VIF & 1) * 0x80000 |
           (uint64_t)(in_AC & 1) * 0x40000;
      *(uint32_t *)(param_2 + 0x78) = 0x656c32dd;
      plVar6 = (int64_t *)(lVar1 + 0x10);
      while( true ) {
        plVar6 = (int64_t *)*plVar6;
        *(uint32_t *)(param_2 + 0x78) = 0xfe012e70;
        if (*(uint32_t *)(param_2 + 0x78) < 0xfcebf0f5) {
          return;
        }
        if (*(uint16_t *)(plVar6 + 0xb) < 2) {
          bVar16 = false;
        }
        else {
          uVar14 = *(uint16_t *)(plVar6 + 0xb) >> 1;
          lVar1 = plVar6[0xc];
          if (uVar14 == 1) {
            uVar9 = 0xa953a802a90b55cd;
            uVar15 = 0;
          }
          else {
            uVar9 = 0xa953a802a90b55cd;
            uVar15 = 0;
            do {
              uVar7 = *(uint16_t *)(lVar1 + uVar15 * 2);
              uVar2 = *(uint16_t *)(lVar1 + 2 + uVar15 * 2);
              uVar11 = (uint16_t)*(uint32_t *)(param_2 + 0x1518) ^ 0xe459;
              bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0xf;
              uVar12 = uVar7 | 0x20;
              if ((*(uint32_t *)(param_2 + 0x1498) ^ 0xd6c8d2c) - *(int *)(param_2 + 0x188) ==
                  0x660fc524) {
                uVar12 = uVar7 + 0x20;
              }
              if ((uint16_t)(0xbe2e - (uVar11 << bVar4 | uVar11 >> 0x10 - bVar4)) <=
                  (uint16_t)(uVar7 - 0x41)) {
                uVar12 = uVar7;
              }
              uVar7 = uVar2 | 0x20;
              if (0x19 < (uint16_t)(uVar2 - 0x41)) {
                uVar7 = uVar2;
              }
              uVar9 = ((uint64_t)(uint8_t)uVar7 ^ ((uint8_t)uVar12 ^ uVar9) * 0x10000000014b) *
                      0x10000000014b;
              uVar15 = uVar15 + 2;
            } while ((uVar14 & 0xfffffffe) != uVar15);
          }
          if ((uVar14 & 1) != 0) {
            uVar14 = *(uint16_t *)(lVar1 + uVar15 * 2);
            uVar7 = uVar14 | 0x20;
            if (0x19 < (uint16_t)(uVar14 - 0x41)) {
              uVar7 = uVar14;
            }
            uVar9 = (uVar9 ^ (uint8_t)uVar7) * 0x10000000014b;
          }
          bVar16 = uVar9 == 0x39cda41577e4d47d;
        }
        *(uint32_t *)(param_2 + 0x78) = 0x275bfaa;
        uVar8 = *(uint32_t *)(param_2 + 0x188) ^ 0x5352eed1;
        uVar8 = ~((uVar8 << 3 | uVar8 >> 0x1d) * uVar10);
        if (((uVar8 << 5 | uVar8 >> 0x1b) <= *(uint32_t *)(param_2 + 0x78)) || (bVar16)) break;
        *(uint32_t *)(param_2 + 0x78) = 0xb7a0a379;
      }
      return;
    }
    (**(code **)(param_2 + 0x78))(*(uint64_t *)(param_2 + 0x170));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a79890  |  RVA: 0x309890  |  Size: 3920 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a79890(void) {
    /* +0x309890 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x309895 */ __asm { PUSH RBP }
    /* +0x309896 */ __asm { PUSH RSI }
    /* +0x309897 */ __asm { PUSH RBX }
    /* +0x309898 */ __asm { PUSH RDI }
    /* +0x309899 */ __asm { PUSH R12 }
    /* +0x30989b */ __asm { PUSH R13 }
    /* +0x30989d */ __asm { PUSH R15 }
    /* +0x30989f */ __asm { PUSH R14 }
    /* +0x3098a1 */ __asm { SUB RSP,0xc8 }
    /* +0x3098a8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x3098af */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x3098b6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x3098bc */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x3098c6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x3098d0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x3098da */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x3098e3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x3098eb */ __asm { JZ 0x7fffa4a7998f }
    /* +0x3098f1 */ __asm { LEA RAX,[0x7fffa47cbd6e] }
    /* +0x3098f8 */ __asm { MOV R10W,0x32e3 }
    /* +0x3098fd */ __asm { MOV R8W,0x1eda }
    /* +0x309902 */ __asm { ADD R8D,0x3592 }
    /* +0x309909 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x309910 */ __asm { ROL R8W,CL }
    /* +0x309914 */ __asm { ADD R8D,0x4dce }
    /* +0x30991b */ __asm { MOVSX RDX,R8W }
    /* +0x30991f */ __asm { LEA R8,[0x7fffa47c0e01] }
    /* +0x309926 */ __asm { MOV R11D,0x31ff664d }
    /* +0x30992c */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x309934 */ __asm { ROL R11D,0x1d }
    /* +0x309938 */ __asm { MOVSXD R9,R11D }
    /* +0x30993b */ __asm { XOR R10D,ECX }
    /* +0x30993e */ __asm { IMUL R11D,R10D,0x1b51 }
    /* +0x309945 */ __asm { MOVSX R10,R11W }
    /* +0x309949 */ __asm { XOR R10,0x1baa }
    /* +0x309950 */ __asm { ADD R10,R8 }
    /* +0x309953 */ __asm { LEA R8,[0x7fffa47c1e2d] }
    /* +0x30995a */ __asm { MOVZX ECX,uint8_t ptr [R8 + RDX*0x1 + 0x9] }
    /* +0x309960 */ __asm { MOV RCX,qword ptr [R10 + RCX*0x8 + 0x13] }
    /* +0x309965 */ __asm { XOR RCX,qword ptr [RAX + R9*0x1 + 0x52] }
    /* +0x30996a */ __asm { MOVQ XMM2,RCX }
    /* +0x30996f */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x309973 */ __asm { PXOR XMM4,XMM2 }
    /* +0x309977 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x30997c */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x309980 */ __asm { TEST R8,R8 }
    /* +0x309983 */ __asm { JZ 0x7fffa4a799d7 }
    /* +0x309985 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x30998c */ __asm { CALL R8 }
    /* +0x30998f */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x309998 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x3099a2 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x3099ac */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x3099b6 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x3099bc */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x3099c3 */ __asm { ADD RSP,0xc8 }
    /* +0x3099ca */ __asm { POP R14 }
    /* +0x3099cc */ __asm { POP R15 }
    /* +0x3099ce */ __asm { POP R13 }
    /* +0x3099d0 */ __asm { POP R12 }
    /* +0x3099d2 */ __asm { POP RDI }
    /* +0x3099d3 */ __asm { POP RBX }
    /* +0x3099d4 */ __asm { POP RSI }
    /* +0x3099d5 */ __asm { POP RBP }
    /* +0x3099d6 */ __asm { RET }
    /* +0x3099d7 */ __asm { MOV R10W,0xa19b }
    /* +0x3099dc */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x3099e3 */ __asm { ADD R10D,R11D }
    /* +0x3099e6 */ __asm { ADD R10D,0xffffab73 }
    /* +0x3099ed */ __asm { MOVZX R8D,R10W }
    /* +0x3099f1 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x3099f5 */ __asm { MOV R10W,0x72ae }
    /* +0x3099fa */ __asm { IMUL R10D,R10D,0x5ea7 }
    /* +0x309a01 */ __asm { SUB R10D,R11D }
    /* +0x309a04 */ __asm { MOVZX R8D,R10W }
    /* +0x309a08 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x309a0c */ __asm { MOV R8,-0x7ac414ce }
    /* +0x309a13 */ __asm { XOR R8,qword ptr [RCX + 0x60] }
    /* +0x309a17 */ __asm { MOV RCX,-0x6de75e52949c05b }
    /* +0x309a21 */ __asm { CMP R8,RCX }
    /* +0x309a24 */ __asm { NOP }
    /* +0x309a25 */ __asm { NOP }
    /* +0x309a26 */ __asm { NOP }
    /* +0x309a27 */ __asm { NOP }
    /* +0x309a28 */ __asm { NOP }
    /* +0x309a29 */ __asm { NOP }
    /* +0x309a2a */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x309a31 */ __asm { MOV R11,0x0 }
    /* +0x309a38 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x309a3c */ __asm { PUSHFQ }
    /* +0x309a3d */ __asm { POP R8 }
    /* +0x309a3f */ __asm { MOV qword ptr [RBP + 0x1318],R8 }
    /* +0x309a46 */ __asm { TEST R8D,0x100 }
    /* +0x309a4d */ __asm { NOP }
    /* +0x309a4e */ __asm { NOP }
    /* +0x309a4f */ __asm { NOP }
    /* +0x309a50 */ __asm { NOP }
    /* +0x309a51 */ __asm { NOP }
    /* +0x309a52 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x309a59 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x309a5d */ __asm { TEST R10D,R10D }
    /* +0x309a60 */ __asm { NOP }
    /* +0x309a61 */ __asm { NOP }
    /* +0x309a62 */ __asm { NOP }
    /* +0x309a63 */ __asm { NOP }
    /* +0x309a64 */ __asm { NOP }
    /* +0x309a65 */ __asm { ADD RAX,0x10 }
    /* +0x309a69 */ __asm { MOV RCX,-0x56ac57fd56f4aa33 }
    /* +0x309a73 */ __asm { MOV R8,0x10000000014b }
    /* +0x309a7d */ __asm { MOV R9,-0x1b2b82c5d3869ddb }
    /* +0x309a87 */ __asm { MOV R11,0x0 }
    /* +0x309a8e */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x309a95 */ __asm { NOP }
    /* +0x309a96 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x309a99 */ __asm { PUSHFQ }
    /* +0x309a9a */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x309aa2 */ __asm { POPFQ }
    /* +0x309aa3 */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x309aaa */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x309aae */ __asm { CMP R10D,0xfcebf0f4 }
    /* +0x309ab5 */ __asm { JBE 0x7fffa4a79bb2 }
    /* +0x309abb */ __asm { MOVZX R11D,word ptr [RAX + 0x58] }
    /* +0x309ac0 */ __asm { CMP R11D,0x2 }
    /* +0x309ac4 */ __asm { JC 0x7fffa4a79b40 }
    /* +0x309ac6 */ __asm { SHR R11D,0x1 }
    /* +0x309ac9 */ __asm { MOV R10,qword ptr [RAX + 0x60] }
    /* +0x309acd */ __asm { CMP R11W,0x1 }
    /* +0x309ad2 */ __asm { JZ 0x7fffa4a79b45 }
    /* +0x309ad4 */ __asm { MOV EBX,R11D }
    /* +0x309ad7 */ __asm { AND EBX,0xfffffffe }
    /* +0x309ada */ __asm { MOV R14D,0x2 }
    /* +0x309ae0 */ __asm { MOV RDX,RCX }
    /* +0x309ae3 */ __asm { MOVZX R15D,word ptr [R10 + R14*0x2 + -0x4] }
    /* +0x309ae9 */ __asm { LEA ESI,[R15 + -0x41] }
    /* +0x309aed */ __asm { MOV R13D,R15D }
    /* +0x309af0 */ __asm { OR R13D,0x20 }
    /* +0x309af4 */ __asm { MOV DI,0xb35f }
    /* +0x309af8 */ __asm { XOR EDI,dword ptr [RBP + 0x1418] }
    /* +0x309afe */ __asm { ROL DI,0x1 }
    /* +0x309b01 */ __asm { CMP SI,DI }
    /* +0x309b04 */ __asm { CMOVNC R13D,R15D }
    /* +0x309b08 */ __asm { MOVZX R15D,R13B }
    /* +0x309b0c */ __asm { XOR R15,RDX }
    /* +0x309b0f */ __asm { IMUL R15,R8 }
    /* +0x309b13 */ __asm { MOVZX EDX,word ptr [R10 + R14*0x2 + -0x2] }
    /* +0x309b19 */ __asm { MOV ESI,EDX }
    /* +0x309b1b */ __asm { OR ESI,0x20 }
    /* +0x309b1e */ __asm { LEA R13D,[RDX + -0x41] }
    /* +0x309b22 */ __asm { CMP R13W,0x1a }
    /* +0x309b27 */ __asm { CMOVNC ESI,EDX }
    /* +0x309b2a */ __asm { MOVZX EDX,SIL }
    /* +0x309b2e */ __asm { XOR RDX,R15 }
    /* +0x309b31 */ __asm { IMUL RDX,R8 }
    /* +0x309b35 */ __asm { CMP RBX,R14 }
    /* +0x309b38 */ __asm { JZ 0x7fffa4a79b4b }
    /* +0x309b3a */ __asm { ADD R14,0x2 }
    /* +0x309b3e */ __asm { JMP 0x7fffa4a79ae3 }
    /* +0x309b40 */ __asm { XOR R10D,R10D }
    /* +0x309b43 */ __asm { JMP 0x7fffa4a79b89 }
    /* +0x309b45 */ __asm { MOV RDX,RCX }
    /* +0x309b48 */ __asm { XOR R14D,R14D }
    /* +0x309b4b */ __asm { TEST R11B,0x1 }
    /* +0x309b4f */ __asm { JZ 0x7fffa4a79b74 }
    /* +0x309b51 */ __asm { MOVZX R11D,word ptr [R10 + R14*0x2] }
    /* +0x309b56 */ __asm { MOV R10D,R11D }
    /* +0x309b59 */ __asm { OR R10D,0x20 }
    /* +0x309b5d */ __asm { LEA ESI,[R11 + -0x41] }
    /* +0x309b61 */ __asm { CMP SI,0x1a }
    /* +0x309b65 */ __asm { CMOVNC R10D,R11D }
    /* +0x309b69 */ __asm { MOVZX R11D,R10B }
    /* +0x309b6d */ __asm { XOR RDX,R11 }
    /* +0x309b70 */ __asm { IMUL RDX,R8 }
    /* +0x309b74 */ __asm { MOV R10,R9 }
    /* +0x309b77 */ __asm { ADD R10,qword ptr [RBP + 0x1418] }
    /* +0x309b7e */ __asm { ROL R10,0x18 }
    /* +0x309b82 */ __asm { CMP RDX,R10 }
    /* +0x309b85 */ __asm { SETZ R10B }
    /* +0x309b89 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x309b90 */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x309b94 */ __asm { CMP R11D,0x26bd4fb8 }
    /* +0x309b9b */ __asm { JNC 0x7fffa4a79bba }
    /* +0x309b9d */ __asm { TEST R10B,R10B }
    /* +0x309ba0 */ __asm { JNZ 0x7fffa4a79bc9 }
    /* +0x309ba2 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x309ba9 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x309bad */ __asm { JMP 0x7fffa4a79a87 }
    /* +0x309bb2 */ __asm { RET }
    /* +0x309bba */ __asm { MOV ESI,0xee4d1cec }
    /* +0x309bbf */ __asm { JNS 0x7fffa4a79bfc }
    /* +0x309bc1 */ __asm { IRETD }
    /* +0x309bc9 */ __asm { MOV R10W,0xb1ae }
    /* +0x309bce */ __asm { ADD R10D,0xffff9252 }
    /* +0x309bd5 */ __asm { IMUL R10D,dword ptr [RBP + 0x1400] }
    /* +0x309bdd */ __asm { ROL R10W,0xb }
    /* +0x309be2 */ __asm { MOVZX R8D,R10W }
    /* +0x309be6 */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0x309bea */ __asm { MOV R10D,0x12588807 }
    /* +0x309bf0 */ __asm { MOV RCX,0x3535af35df492940 }
    /* +0x309bfa */ __asm { MOV RDX,-0x7fbdeac9 }
    /* +0x309c01 */ __asm { SUB RDX,RCX }
    /* +0x309c04 */ __asm { MOV R11D,0x85f3f2b9 }
    /* +0x309c0a */ __asm { XOR R10D,0x68b1a6f2 }
    /* +0x309c11 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x309c18 */ __asm { ROL RDX,CL }
    /* +0x309c1b */ __asm { XOR R9D,R9D }
    /* +0x309c1e */ __asm { CMP R8,RDX }
    /* +0x309c21 */ __asm { SETZ R9B }
    /* +0x309c25 */ __asm { ROL R10D,CL }
    /* +0x309c28 */ __asm { ADD R11D,0x3d215b56 }
    /* +0x309c2f */ __asm { ROL R11D,CL }
    /* +0x309c32 */ __asm { IMUL ECX,R10D,-0x1b5951f }
    /* +0x309c39 */ __asm { MOV R10,0x432683e3afdf2b29 }
    /* +0x309c43 */ __asm { XOR EDX,EDX }
    /* +0x309c45 */ __asm { CMP R8,R10 }
    /* +0x309c48 */ __asm { SETA DL }
    /* +0x309c4b */ __asm { CMP RCX,R11 }
    /* +0x309c4e */ __asm { CMOVG EDX,R9D }
    /* +0x309c52 */ __asm { CMP DL,0x1 }
    /* +0x309c55 */ __asm { NOP }
    /* +0x309c56 */ __asm { NOP }
    /* +0x309c57 */ __asm { NOP }
    /* +0x309c58 */ __asm { NOP }
    /* +0x309c59 */ __asm { NOP }
    /* +0x309c5a */ __asm { NOP }
    /* +0x309c5b */ __asm { NOP }
    /* +0x309c5c */ __asm { NOP }
    /* +0x309c5d */ __asm { NOP }
    /* +0x309c5e */ __asm { NOP }
    /* +0x309c5f */ __asm { NOP }
    /* +0x309c60 */ __asm { NOP }
    /* +0x309c61 */ __asm { NOP }
    /* +0x309c62 */ __asm { NOP }
    /* +0x309c63 */ __asm { NOP }
    /* +0x309c64 */ __asm { MOV R10W,0xabf2 }
    /* +0x309c69 */ __asm { MOV RCX,qword ptr [RBP + 0x1400] }
    /* +0x309c70 */ __asm { MOV R8D,ECX }
    /* +0x309c73 */ __asm { IMUL R8D,R10D }
    /* +0x309c77 */ __asm { ADD R8D,0xaea }
    /* +0x309c7e */ __asm { MOVZX R8D,R8W }
    /* +0x309c82 */ __asm { MOV RCX,qword ptr [RAX + 0x30] }
    /* +0x309c86 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x309c8a */ __asm { MOV qword ptr [RBP + 0x11e0],RCX }
    /* +0x309c91 */ __asm { TEST RCX,RCX }
    /* +0x309c94 */ __asm { JZ 0x7fffa4a79e5f }
    /* +0x309c9a */ __asm { NOP }
    /* +0x309c9b */ __asm { MOV RAX,0x0 }
    /* +0x309ca2 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x309ca9 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x309cb0 */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x309cb4 */ __asm { ADD R8,RAX }
    /* +0x309cb7 */ __asm { JZ 0x7fffa4a79e5f }
    /* +0x309cbd */ __asm { MOV R10W,0x6b7 }
    /* +0x309cc2 */ __asm { ADD R10D,0xfffff9a9 }
    /* +0x309cc9 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x309cd0 */ __asm { ROL R10W,CL }
    /* +0x309cd4 */ __asm { ROL R10W,0xd }
    /* +0x309cd9 */ __asm { MOVZX R11D,R10W }
    /* +0x309cdd */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x309ce1 */ __asm { MOV R10W,0xd94b }
    /* +0x309ce6 */ __asm { MOV R11D,0xffffd97b }
    /* +0x309cec */ __asm { SUB R11D,R10D }
    /* +0x309cef */ __asm { MOVZX R11D,R11W }
    /* +0x309cf3 */ __asm { MOV RAX,qword ptr [RAX + 0xfe8] }
    /* +0x309cfa */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x309cfe */ __asm { ADD RAX,qword ptr [RCX + 0x370] }
    /* +0x309d05 */ __asm { ROL RAX,0x4 }
    /* +0x309d09 */ __asm { XOR RAX,-0x2f367bcf }
    /* +0x309d0f */ __asm { MOV RCX,-0x2d6c02c6de398575 }
    /* +0x309d19 */ __asm { CMP RAX,RCX }
    /* +0x309d1c */ __asm { NOP }
    /* +0x309d1d */ __asm { NOP }
    /* +0x309d1e */ __asm { NOP }
    /* +0x309d1f */ __asm { NOP }
    /* +0x309d20 */ __asm { NOP }
    /* +0x309d21 */ __asm { MOV RCX,qword ptr [R8 + 0x88] }
    /* +0x309d28 */ __asm { MOV R10D,0xd5106f5b }
    /* +0x309d2e */ __asm { IMUL R8D,R10D,0x2ffacf07 }
    /* +0x309d35 */ __asm { NOT R8D }
    /* +0x309d38 */ __asm { MOV R11D,0xae20a9eb }
    /* +0x309d3e */ __asm { ADD R11D,0xdaf012e8 }
    /* +0x309d45 */ __asm { XOR R11D,dword ptr [RBP + 0x1418] }
    /* +0x309d4c */ __asm { XOR EDI,EDI }
    /* +0x309d4e */ __asm { MOV R10D,0xffffffff }
    /* +0x309d54 */ __asm { MOV qword ptr [RBP + 0x108],RCX }
    /* +0x309d5b */ __asm { AND R10,RCX }
    /* +0x309d5e */ __asm { JZ 0x7fffa4a79e70 }
    /* +0x309d64 */ __asm { CMP R11,R8 }
    /* +0x309d67 */ __asm { JG 0x7fffa4a79e70 }
    /* +0x309d6d */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x309d74 */ __asm { SHR RAX,0x20 }
    /* +0x309d78 */ __asm { JZ 0x7fffa4a79e70 }
    /* +0x309d7e */ __asm { TEST dword ptr [RBP + 0x1318],0x100 }
    /* +0x309d88 */ __asm { NOP }
    /* +0x309d89 */ __asm { NOP }
    /* +0x309d8a */ __asm { NOP }
    /* +0x309d8b */ __asm { NOP }
    /* +0x309d8c */ __asm { NOP }
    /* +0x309d8d */ __asm { NOP }
    /* +0x309d8e */ __asm { NOP }
    /* +0x309d8f */ __asm { NOP }
    /* +0x309d90 */ __asm { NOP }
    /* +0x309d91 */ __asm { MOV dword ptr [RBP + -0x8],0xaa54569c }
    /* +0x309d98 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x309d9c */ __asm { XOR R11D,R11D }
    /* +0x309d9f */ __asm { IMUL R11D,R11D,0x271 }
    /* +0x309da6 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x309dad */ __asm { ROL R11W,CL }
    /* +0x309db1 */ __asm { IMUL R11D,R11D,-0x711 }
    /* +0x309db8 */ __asm { MOVZX R11D,R11W }
    /* +0x309dbc */ __asm { CMP R8D,R11D }
    /* +0x309dbf */ __asm { NOP }
    /* +0x309dc0 */ __asm { NOP }
    /* +0x309dc1 */ __asm { NOP }
    /* +0x309dc2 */ __asm { NOP }
    /* +0x309dc3 */ __asm { NOP }
    /* +0x309dc4 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x309dcb */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x1c],0x0 }
    /* +0x309dd1 */ __asm { JZ 0x7fffa4a79e63 }
    /* +0x309dd7 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x309dde */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x20],0x0 }
    /* +0x309de4 */ __asm { JZ 0x7fffa4a79e63 }
    /* +0x309de6 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x309ded */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x24],0x0 }
    /* +0x309df3 */ __asm { JZ 0x7fffa4a79e63 }
    /* +0x309df5 */ __asm { MOV dword ptr [RBP + -0x8],0xb1676a98 }
    /* +0x309dfc */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x309e00 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x309e07 */ __asm { MOV R12D,dword ptr [RAX + R10*0x1 + 0x1c] }
    /* +0x309e0c */ __asm { ADD R12,RAX }
    /* +0x309e0f */ __asm { MOV dword ptr [RBP + -0x8],0x5d52e0ba }
    /* +0x309e16 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x309e1a */ __asm { CMP R8D,0xb5807139 }
    /* +0x309e21 */ __asm { NOP }
    /* +0x309e22 */ __asm { NOP }
    /* +0x309e23 */ __asm { NOP }
    /* +0x309e24 */ __asm { NOP }
    /* +0x309e25 */ __asm { NOP }
    /* +0x309e26 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x309e2d */ __asm { MOV R14D,dword ptr [RAX + R10*0x1 + 0x20] }
    /* +0x309e32 */ __asm { ADD R14,RAX }
    /* +0x309e35 */ __asm { MOV dword ptr [RBP + -0x8],0x7c0c5dd9 }
    /* +0x309e3c */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x309e40 */ __asm { MOV R13D,dword ptr [RAX + R10*0x1 + 0x24] }
    /* +0x309e45 */ __asm { ADD R13,RAX }
    /* +0x309e48 */ __asm { MOV dword ptr [RBP + -0x8],0x8645c168 }
    /* +0x309e4f */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x309e53 */ __asm { MOV ESI,dword ptr [RAX + R10*0x1 + 0x10] }
    /* +0x309e58 */ __asm { MOV EDI,dword ptr [RAX + R10*0x1 + 0x18] }
    /* +0x309e5d */ __asm { JMP 0x7fffa4a79e70 }
    /* +0x309e5f */ __asm { XOR EDI,EDI }
    /* +0x309e61 */ __asm { JMP 0x7fffa4a79e70 }
    /* +0x309e63 */ __asm { MOV dword ptr [RBP + -0x8],0x49080108 }
    /* +0x309e6a */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x309e6e */ __asm { XOR EDI,EDI }
    /* +0x309e70 */ __asm { MOV R8,qword ptr [RBP + 0x108] }
    /* +0x309e77 */ __asm { MOV R15,R8 }
    /* +0x309e7a */ __asm { SHR R15,0x20 }
    /* +0x309e7e */ __asm { ADD R15D,R8D }
    /* +0x309e81 */ __asm { XOR EBX,EBX }
    /* +0x309e83 */ __asm { MOV qword ptr [RBP + 0x11d8],0x0 }
    /* +0x309e8e */ __asm { JMP 0x7fffa4a79f02 }
    /* +0x309e90 */ __asm { MOV R10W,0x9e07 }
    /* +0x309e95 */ __asm { IMUL R10D,R10D,-0x3149 }
    /* +0x309e9c */ __asm { SUB R10D,R8D }
    /* +0x309e9f */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x309ea6 */ __asm { ROL R10W,CL }
    /* +0x309eaa */ __asm { MOVZX R11D,R10W }
    /* +0x309eae */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x309eb2 */ __asm { MOV R10W,0xe38c }
    /* +0x309eb7 */ __asm { MOV R11D,ECX }
    /* +0x309eba */ __asm { SUB R11D,R8D }
    /* +0x309ebd */ __asm { ADD R11D,R10D }
    /* +0x309ec0 */ __asm { MOVZX R8D,R11W }
    /* +0x309ec4 */ __asm { XOR R8,0xfdc5 }
    /* +0x309ecb */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x309ecf */ __asm { MOV R8D,0x6a8 }
    /* +0x309ed5 */ __asm { ADD RCX,R8 }
    /* +0x309ed8 */ __asm { IMUL RCX,qword ptr [RAX + 0xc00] }
    /* +0x309ee0 */ __asm { MOV RAX,0x1b967edfdccb6d1b }
    /* +0x309eea */ __asm { CMP RCX,RAX }
    /* +0x309eed */ __asm { JZ 0x7fffa4a7a100 }
    /* +0x309ef3 */ __asm { XOR R8D,R8D }
    /* +0x309ef6 */ __asm { INC RBX }
    /* +0x309ef9 */ __asm { TEST R8,R8 }
    /* +0x309efc */ __asm { JNZ 0x7fffa4a7b2b6 }
    /* +0x309f02 */ __asm { CMP RBX,RDI }
    /* +0x309f05 */ __asm { JZ 0x7fffa4a7a10b }
    /* +0x309f0b */ __asm { MOV R8D,0xea0197a6 }
    /* +0x309f11 */ __asm { ADD R8D,0x740503f5 }
    /* +0x309f18 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x309f1f */ __asm { ROL R8D,CL }
    /* +0x309f22 */ __asm { ADD R8D,0xc5176112 }
    /* +0x309f29 */ __asm { MOV R10D,0xe26b00bd }
    /* +0x309f2f */ __asm { ADD R10D,ECX }
    /* +0x309f32 */ __asm { XOR R10D,0x6b462883 }
    /* +0x309f39 */ __asm { MOVSXD RAX,R10D }
    /* +0x309f3c */ __asm { CMP R8,RAX }
    /* +0x309f3f */ __asm { JNC 0x7fffa4a79f82 }
    /* +0x309f41 */ __asm { MOV R10D,0x5c202a13 }
    /* +0x309f47 */ __asm { XOR R10D,dword ptr [RBP + 0x1418] }
    /* +0x309f4e */ __asm { MOV R8D,0xfb37322a }
    /* +0x309f54 */ __asm { SUB R8D,R10D }
    /* +0x309f57 */ __asm { MOVZX R10D,word ptr [R13 + RBX*0x2] }
    /* +0x309f5d */ __asm { MOV R11D,R10D }
    /* +0x309f60 */ __asm { ADD R11D,ESI }
    /* +0x309f63 */ __asm { MOV dword ptr [RBP + 0x8],R11D }
    /* +0x309f67 */ __asm { MOV ECX,dword ptr [R14 + RBX*0x4] }
    /* +0x309f6b */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x309f72 */ __asm { ADD RAX,RCX }
    /* +0x309f75 */ __asm { TEST RCX,RCX }
    /* +0x309f78 */ __asm { CMOVZ RAX,RCX }
    /* +0x309f7c */ __asm { MOV qword ptr [RBP],RAX }
    /* +0x309f80 */ __asm { JMP 0x7fffa4a79fc3 }
    /* +0x309f82 */ __asm { MOVZX R10D,word ptr [R13 + RBX*0x2] }
    /* +0x309f88 */ __asm { MOV R8D,R10D }
    /* +0x309f8b */ __asm { ADD R8D,ESI }
    /* +0x309f8e */ __asm { MOV dword ptr [RBP + 0x8],R8D }
    /* +0x309f92 */ __asm { MOV ECX,dword ptr [R14 + RBX*0x4] }
    /* +0x309f96 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x309f9d */ __asm { ADD RAX,RCX }
    /* +0x309fa0 */ __asm { TEST RCX,RCX }
    /* +0x309fa3 */ __asm { CMOVZ RAX,RCX }
    /* +0x309fa7 */ __asm { MOV qword ptr [RBP],RAX }
    /* +0x309fab */ __asm { MOV R8D,0x5dca2737 }
    /* +0x309fb1 */ __asm { XOR R8D,0x2cd16754 }
    /* +0x309fb8 */ __asm { ROL R8D,0x6 }
    /* +0x309fbc */ __asm { XOR R8D,dword ptr [RBP + 0x1418] }
    /* +0x309fc3 */ __asm { MOVZX R10D,R10W }
    /* +0x309fc7 */ __asm { MOV R10D,dword ptr [R12 + R10*0x4] }
    /* +0x309fcb */ __asm { CMP R10D,R15D }
    /* +0x309fce */ __asm { SETC DL }
    /* +0x309fd1 */ __asm { CMP R10D,dword ptr [RBP + 0x108] }
    /* +0x309fd8 */ __asm { SETNC CL }
    /* +0x309fdb */ __asm { MOV R11D,R10D }
    /* +0x309fde */ __asm { ADD R11,qword ptr [RBP + 0x11e0] }
    /* +0x309fe5 */ __asm { AND CL,DL }
    /* +0x309fe7 */ __asm { MOV qword ptr [RBP + -0x8],R11 }
    /* +0x309feb */ __asm { MOV uint8_t ptr [RBP + 0xc],CL }
    /* +0x309fee */ __asm { TEST RAX,RAX }
    /* +0x309ff1 */ __asm { JZ 0x7fffa4a7a0e1 }
    /* +0x309ff7 */ __asm { MOV dword ptr [RBP + 0x12e8],0x52658ddc }
    /* +0x30a001 */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x30a008 */ __asm { MOV R10,qword ptr [RBP] }
    /* +0x30a00c */ __asm { MOVZX EDX,uint8_t ptr [R10] }
    /* +0x30a010 */ __asm { TEST DL,DL }
    /* +0x30a012 */ __asm { JZ 0x7fffa4a79e90 }
    /* +0x30a018 */ __asm { LEA RAX,[R10 + 0x1] }
    /* +0x30a01c */ __asm { MOV R11D,0xb5383f }
    /* +0x30a022 */ __asm { MOVZX R9D,DL }
    /* +0x30a026 */ __asm { XOR R9D,R11D }
    /* +0x30a029 */ __asm { IMUL R11D,R9D,0x10001ab }
    /* +0x30a030 */ __asm { MOVZX EDX,uint8_t ptr [RAX] }
    /* +0x30a033 */ __asm { INC RAX }
    /* +0x30a036 */ __asm { TEST DL,DL }
    /* +0x30a038 */ __asm { JNZ 0x7fffa4a7a022 }
    /* +0x30a03a */ __asm { AND R11D,0x7fffffff }
    /* +0x30a041 */ __asm { CMP R11D,0x3e498d29 }
    /* +0x30a048 */ __asm { JNZ 0x7fffa4a79e90 }
    /* +0x30a04e */ __asm { MOV RAX,qword ptr [RBP + 0x11d8] }
    /* +0x30a055 */ __asm { TEST RAX,RAX }
    /* +0x30a058 */ __asm { CMOVZ RAX,R10 }
    /* +0x30a05c */ __asm { MOV qword ptr [RBP + 0x11d8],RAX }
    /* +0x30a063 */ __asm { CMP uint8_t ptr [RBP + 0xc],0x1 }
    /* +0x30a067 */ __asm { JNZ 0x7fffa4a7a0f7 }
    /* +0x30a06d */ __asm { MOV R10W,0x8285 }
    /* +0x30a072 */ __asm { SUB R10D,R8D }
    /* +0x30a075 */ __asm { LEA RAX,[0x7fffa52be75e] }
    /* +0x30a07c */ __asm { MOV EDX,0x5a140562 }
    /* +0x30a081 */ __asm { IMUL R8D,R10D,0x6c47 }
    /* +0x30a088 */ __asm { LEA RCX,[RBP + -0x8] }
    /* +0x30a08c */ __asm { MOV R9,qword ptr [RBP + 0x11e0] }
    /* +0x30a093 */ __asm { MOV R11,R9 }
    /* +0x30a096 */ __asm { SHL R11,0x1b }
    /* +0x30a09a */ __asm { ADD R11,R9 }
    /* +0x30a09d */ __asm { MOV R9,qword ptr [RBP + 0x1418] }
    /* +0x30a0a4 */ __asm { SUB R8D,R9D }
    /* +0x30a0a7 */ __asm { XOR R11,0x2320a5df }
    /* +0x30a0ae */ __asm { MOVSX R8,R8W }
    /* +0x30a0b2 */ __asm { ADD R8,RAX }
    /* +0x30a0b5 */ __asm { XOR EDX,R9D }
    /* +0x30a0b8 */ __asm { XOR EDX,0x3ffffbd7 }
    /* +0x30a0be */ __asm { MOV R10,RCX }
    /* +0x30a0c1 */ __asm { SHL R10,0x3a }
    /* +0x30a0c5 */ __asm { ADD R10,RCX }
    /* +0x30a0c8 */ __asm { ADD R10,-0x47bfba14 }
    /* +0x30a0cf */ __asm { CALL R8 }
    /* +0x30a0d2 */ __asm { MOV R8,RCX }
    /* +0x30a0d5 */ __asm { ADD R8,-0x526c897e }
    /* +0x30a0dc */ __asm { JMP 0x7fffa4a79ef6 }
    /* +0x30a0e1 */ __asm { MOV dword ptr [RBP + 0x12e8],0xe74f1127 }
    /* +0x30a0eb */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x30a0f2 */ __asm { JMP 0x7fffa4a79ef3 }
    /* +0x30a0f7 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x30a0fb */ __asm { JMP 0x7fffa4a79ef6 }
    /* +0x30a100 */ __asm { ADD CL,uint8_t ptr [R13 + -0x161312f2] }
    /* +0x30a107 */ __asm { CALL 0x7fffeda7a109 }
    /* +0x30a10c */ __asm { CMP dword ptr [RBP + 0x11d8],0x0 }
    /* +0x30a113 */ __asm { JNZ 0x7fffa4a7a11d }
    /* +0x30a115 */ __asm { XOR R8D,R8D }
}


// ============================================================================
// Function : Unwind@7fffa4a7b400  |  RVA: 0x30b400  |  Size: 244 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a7b400(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint16_t uVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar2 = (uint16_t)*(uint64_t *)(param_2 + 0x1498) ^ 0x5f66;
    pcVar1 = (code *)((int64_t)(short)((uVar2 << 6 | uVar2 >> 10) + 0x783e) + 0x7fffa568f6b7);
    (*pcVar1)(pcVar1,*(uint64_t *)(param_2 + 0x1498),
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a7b500  |  RVA: 0x30b500  |  Size: 258 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a7b500(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  if ((uint64_t)(uint16_t)(-0x3ffd << bVar1 | 0xc003U >> 0x10 - bVar1) <
      *(uint64_t *)(param_2 + 0x13b8)) {
    FUN_7fffa5687c30(FUN_7fffa5687c30,param_2,
                     *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a7b610  |  RVA: 0x30b610  |  Size: 236 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a7b610(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    (*(code *)(&UNK_7fffa5691539 + (-0x5ed5e5b7 - (int)*(uint64_t *)(param_2 + 0x1498))))
              (&UNK_7fffa5691539 + (-0x5ed5e5b7 - (int)*(uint64_t *)(param_2 + 0x1498)),param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a7b700  |  RVA: 0x30b700  |  Size: 3219 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a7b700(void) {
    /* +0x30b700 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x30b705 */ __asm { PUSH RBP }
    /* +0x30b706 */ __asm { PUSH RSI }
    /* +0x30b707 */ __asm { PUSH RBX }
    /* +0x30b708 */ __asm { PUSH RDI }
    /* +0x30b709 */ __asm { PUSH R12 }
    /* +0x30b70b */ __asm { PUSH R13 }
    /* +0x30b70d */ __asm { PUSH R15 }
    /* +0x30b70f */ __asm { PUSH R14 }
    /* +0x30b711 */ __asm { SUB RSP,0xc8 }
    /* +0x30b718 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x30b71f */ __asm { MOVAPD xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x30b726 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x30b72c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x30b736 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x30b740 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x30b74a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x30b753 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x30b75b */ __asm { JZ 0x7fffa4a7b819 }
    /* +0x30b761 */ __asm { MOV R10D,0x710f88f7 }
    /* +0x30b767 */ __asm { IMUL R11D,R10D,0x12d65419 }
    /* +0x30b76e */ __asm { MOV R10W,0xc5a1 }
    /* +0x30b773 */ __asm { MOV R8W,0x9ce9 }
    /* +0x30b778 */ __asm { LEA RAX,[0x7fffa47bcd1f] }
    /* +0x30b77f */ __asm { LEA R9,[0x7fffa47bf151] }
    /* +0x30b786 */ __asm { MOV RBX,qword ptr [RBP + 0x1418] }
    /* +0x30b78d */ __asm { MOV ECX,EBX }
    /* +0x30b78f */ __asm { ROR R11D,CL }
    /* +0x30b792 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x30b799 */ __asm { ROL R11D,CL }
    /* +0x30b79c */ __asm { MOVSXD R11,R11D }
    /* +0x30b79f */ __asm { LEA RDX,[0x7fffa47c424c] }
    /* +0x30b7a6 */ __asm { XOR R8D,0x3a14 }
    /* +0x30b7ad */ __asm { MOV ECX,EBX }
    /* +0x30b7af */ __asm { ROR R8W,CL }
    /* +0x30b7b3 */ __asm { MOV R15,qword ptr [RBP + 0x108] }
    /* +0x30b7ba */ __asm { MOV EDI,R15D }
    /* +0x30b7bd */ __asm { OR EDI,0x1 }
    /* +0x30b7c0 */ __asm { XOR R10D,0xffff89ff }
    /* +0x30b7c7 */ __asm { IMUL R10D,EDI }
    /* +0x30b7cb */ __asm { ADD R10D,EBX }
    /* +0x30b7ce */ __asm { ROL R10W,0x7 }
    /* +0x30b7d3 */ __asm { MOVSX RCX,R10W }
    /* +0x30b7d7 */ __asm { ADD RCX,R9 }
    /* +0x30b7da */ __asm { NOT R8D }
    /* +0x30b7dd */ __asm { ADD R8D,R15D }
    /* +0x30b7e0 */ __asm { MOVSX R10,R8W }
    /* +0x30b7e4 */ __asm { MOVZX R10D,uint8_t ptr [RAX + R10*0x1 + 0x9] }
    /* +0x30b7ea */ __asm { MOV RAX,qword ptr [RDX + R11*0x1 + 0x52] }
    /* +0x30b7ef */ __asm { XOR RAX,qword ptr [RCX + R10*0x8 + 0x13] }
    /* +0x30b7f4 */ __asm { MOVQ XMM2,RAX }
    /* +0x30b7f9 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x30b7fd */ __asm { PXOR XMM4,XMM2 }
    /* +0x30b801 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x30b806 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x30b80a */ __asm { TEST R8,R8 }
    /* +0x30b80d */ __asm { JZ 0x7fffa4a7b861 }
    /* +0x30b80f */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x30b816 */ __asm { CALL R8 }
    /* +0x30b819 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x30b822 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x30b82c */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x30b836 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x30b840 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x30b846 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x30b84d */ __asm { ADD RSP,0xc8 }
    /* +0x30b854 */ __asm { POP R14 }
    /* +0x30b856 */ __asm { POP R15 }
    /* +0x30b858 */ __asm { POP R13 }
    /* +0x30b85a */ __asm { POP R12 }
    /* +0x30b85c */ __asm { POP RDI }
    /* +0x30b85d */ __asm { POP RBX }
    /* +0x30b85e */ __asm { POP RSI }
    /* +0x30b85f */ __asm { POP RBP }
    /* +0x30b860 */ __asm { RET }
    /* +0x30b861 */ __asm { MOV R10W,0xdbb1 }
    /* +0x30b866 */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x30b86d */ __asm { ADD R10D,R11D }
    /* +0x30b870 */ __asm { ROL R10W,0xd }
    /* +0x30b875 */ __asm { MOV R8D,EDI }
    /* +0x30b878 */ __asm { IMUL R8D,R10D }
    /* +0x30b87c */ __asm { MOVZX R8D,R8W }
    /* +0x30b880 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x30b884 */ __asm { MOV R10W,0xd965 }
    /* +0x30b889 */ __asm { XOR R10D,0x209a }
    /* +0x30b890 */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x30b897 */ __asm { ROL R10W,CL }
    /* +0x30b89b */ __asm { MOV ECX,R11D }
    /* +0x30b89e */ __asm { ROR R10W,CL }
    /* +0x30b8a2 */ __asm { NOT R10D }
    /* +0x30b8a5 */ __asm { MOVZX R8D,R10W }
    /* +0x30b8a9 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x30b8ad */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x30b8b7 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x30b8bb */ __asm { NOP }
    /* +0x30b8bc */ __asm { NOP }
    /* +0x30b8bd */ __asm { NOP }
    /* +0x30b8be */ __asm { NOP }
    /* +0x30b8bf */ __asm { NOP }
    /* +0x30b8c0 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x30b8c4 */ __asm { PUSHFQ }
    /* +0x30b8c5 */ __asm { POP R8 }
    /* +0x30b8c7 */ __asm { MOV qword ptr [RBP + 0x1228],R8 }
    /* +0x30b8ce */ __asm { TEST R8D,0x100 }
    /* +0x30b8d5 */ __asm { NOP }
    /* +0x30b8d6 */ __asm { NOP }
    /* +0x30b8d7 */ __asm { NOP }
    /* +0x30b8d8 */ __asm { NOP }
    /* +0x30b8d9 */ __asm { NOP }
    /* +0x30b8da */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x30b8e1 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x30b8e5 */ __asm { TEST R10D,R10D }
    /* +0x30b8e8 */ __asm { NOP }
    /* +0x30b8e9 */ __asm { NOP }
    /* +0x30b8ea */ __asm { NOP }
    /* +0x30b8eb */ __asm { NOP }
    /* +0x30b8ec */ __asm { NOP }
    /* +0x30b8ed */ __asm { ADD RAX,0x10 }
    /* +0x30b8f1 */ __asm { MOV R8,-0x56ac57fd56f4aa33 }
    /* +0x30b8fb */ __asm { MOV R9,0x10000000014b }
    /* +0x30b905 */ __asm { MOV R10,0x28750c884d9d2e95 }
    /* +0x30b90f */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x30b912 */ __asm { PUSHFQ }
    /* +0x30b913 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x30b91b */ __asm { POPFQ }
    /* +0x30b91c */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x30b923 */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x30b927 */ __asm { CMP R11D,0xfcebf0f4 }
    /* +0x30b92e */ __asm { JBE 0x7fffa4a7ba5a }
    /* +0x30b934 */ __asm { MOVZX R11D,word ptr [RAX + 0x58] }
    /* +0x30b939 */ __asm { CMP R11D,0x2 }
    /* +0x30b93d */ __asm { JC 0x7fffa4a7b9ab }
    /* +0x30b93f */ __asm { SHR R11D,0x1 }
    /* +0x30b942 */ __asm { MOV RCX,qword ptr [RAX + 0x60] }
    /* +0x30b946 */ __asm { CMP R11W,0x1 }
    /* +0x30b94b */ __asm { JZ 0x7fffa4a7b9b0 }
    /* +0x30b94d */ __asm { MOV R15D,R11D }
    /* +0x30b950 */ __asm { AND R15D,0xfffffffe }
    /* +0x30b954 */ __asm { MOV R13,R8 }
    /* +0x30b957 */ __asm { XOR EDX,EDX }
    /* +0x30b959 */ __asm { MOVZX EBX,word ptr [RCX + RDX*0x2 + 0x2] }
    /* +0x30b95e */ __asm { MOV ESI,EBX }
    /* +0x30b960 */ __asm { OR ESI,0x20 }
    /* +0x30b963 */ __asm { LEA R12D,[RBX + -0x41] }
    /* +0x30b967 */ __asm { CMP R12W,0x1a }
    /* +0x30b96c */ __asm { CMOVNC ESI,EBX }
    /* +0x30b96f */ __asm { MOVZX EBX,word ptr [RCX + RDX*0x2] }
    /* +0x30b973 */ __asm { ADD RDX,0x2 }
    /* +0x30b977 */ __asm { LEA R12D,[RBX + -0x41] }
    /* +0x30b97b */ __asm { MOV R14D,EBX }
    /* +0x30b97e */ __asm { OR R14D,0x20 }
    /* +0x30b982 */ __asm { CMP R12W,0x1a }
    /* +0x30b987 */ __asm { CMOVNC R14D,EBX }
    /* +0x30b98b */ __asm { MOVZX R12D,SIL }
    /* +0x30b98f */ __asm { MOVZX EBX,R14B }
    /* +0x30b993 */ __asm { XOR RBX,R13 }
    /* +0x30b996 */ __asm { IMUL RBX,R9 }
    /* +0x30b99a */ __asm { XOR RBX,R12 }
    /* +0x30b99d */ __asm { IMUL RBX,R9 }
    /* +0x30b9a1 */ __asm { MOV R13,RBX }
    /* +0x30b9a4 */ __asm { CMP R15,RDX }
    /* +0x30b9a7 */ __asm { JNZ 0x7fffa4a7b959 }
    /* +0x30b9a9 */ __asm { JMP 0x7fffa4a7b9b5 }
    /* +0x30b9ab */ __asm { XOR R11D,R11D }
    /* +0x30b9ae */ __asm { JMP 0x7fffa4a7ba16 }
    /* +0x30b9b0 */ __asm { MOV RBX,R8 }
    /* +0x30b9b3 */ __asm { XOR EDX,EDX }
    /* +0x30b9b5 */ __asm { TEST R11B,0x1 }
    /* +0x30b9b9 */ __asm { JZ 0x7fffa4a7b9f0 }
    /* +0x30b9bb */ __asm { MOV R11,0x0 }
    /* +0x30b9c2 */ __asm { LEA R13,[0x7fffa4770000] }
    /* +0x30b9c9 */ __asm { NOP }
    /* +0x30b9cb */ __asm { MOVZX R11D,word ptr [RCX + RDX*0x2] }
    /* +0x30b9d0 */ __asm { MOV EDX,R11D }
    /* +0x30b9d3 */ __asm { OR EDX,0x20 }
    /* +0x30b9d6 */ __asm { LEA ECX,[R11 + -0x41] }
    /* +0x30b9da */ __asm { CMP CX,0x1a }
    /* +0x30b9de */ __asm { CMOVNC EDX,R11D }
    /* +0x30b9e2 */ __asm { MOVZX R11D,DL }
    /* +0x30b9e6 */ __asm { XOR R11,RBX }
    /* +0x30b9e9 */ __asm { IMUL R11,R9 }
    /* +0x30b9ed */ __asm { MOV RBX,R11 }
    /* +0x30b9f0 */ __asm { MOV RCX,R10 }
    /* +0x30b9f3 */ __asm { IMUL R11,RCX,-0x4288b203 }
    /* +0x30b9fa */ __asm { ROL R11,0x12 }
    /* +0x30b9fe */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30ba05 */ __asm { ROL R11,CL }
    /* +0x30ba08 */ __asm { SUB R11,qword ptr [RBP + 0x11e0] }
    /* +0x30ba0f */ __asm { CMP RBX,R11 }
    /* +0x30ba12 */ __asm { SETZ R11B }
    /* +0x30ba16 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x30ba1d */ __asm { MOV RDX,0x0 }
    /* +0x30ba24 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x30ba2b */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x30ba2e */ __asm { CMP EDX,0x26bd4fb8 }
    /* +0x30ba34 */ __asm { JNC 0x7fffa4a7ba62 }
    /* +0x30ba36 */ __asm { TEST R11B,R11B }
    /* +0x30ba39 */ __asm { JNZ 0x7fffa4a7ba71 }
    /* +0x30ba3b */ __asm { MOV R11,0x0 }
    /* +0x30ba42 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x30ba49 */ __asm { NOP }
    /* +0x30ba4a */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x30ba51 */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x30ba55 */ __asm { JMP 0x7fffa4a7b90f }
    /* +0x30ba5a */ __asm { RET }
    /* +0x30ba62 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x30ba67 */ __asm { JNS 0x7fffa4a7baa4 }
    /* +0x30ba69 */ __asm { IRETD }
    /* +0x30ba71 */ __asm { MOV R8W,0x9a11 }
    /* +0x30ba76 */ __asm { MOV R10,qword ptr [RBP + 0x1418] }
    /* +0x30ba7d */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x30ba84 */ __asm { ADD R10D,ECX }
    /* +0x30ba87 */ __asm { ADD R10D,R8D }
    /* +0x30ba8a */ __asm { ADD R10D,0x58b0 }
    /* +0x30ba91 */ __asm { MOVZX R8D,R10W }
    /* +0x30ba95 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x30ba99 */ __asm { ROL RCX,0x27 }
    /* +0x30ba9d */ __asm { MOV R8,-0x64dce190a01f7ef3 }
    /* +0x30baa7 */ __asm { IMUL R8,RCX }
    /* +0x30baab */ __asm { MOV R11D,0xf37aaef7 }
    /* +0x30bab1 */ __asm { ADD R11D,dword ptr [RBP + 0x11e0] }
    /* +0x30bab8 */ __asm { XOR R11D,0xbaf8098b }
    /* +0x30babf */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x30bac7 */ __asm { XOR R11,R8 }
    /* +0x30baca */ __asm { MOV RCX,0x5ed85814da569ef6 }
    /* +0x30bad4 */ __asm { CMP R11,RCX }
    /* +0x30bad7 */ __asm { NOP }
    /* +0x30bad8 */ __asm { NOP }
    /* +0x30bad9 */ __asm { NOP }
    /* +0x30bada */ __asm { NOP }
    /* +0x30badb */ __asm { NOP }
    /* +0x30badc */ __asm { NOP }
    /* +0x30badd */ __asm { NOP }
    /* +0x30bade */ __asm { NOP }
    /* +0x30badf */ __asm { NOP }
    /* +0x30bae0 */ __asm { NOP }
    /* +0x30bae1 */ __asm { NOP }
    /* +0x30bae2 */ __asm { NOP }
    /* +0x30bae3 */ __asm { NOP }
    /* +0x30bae4 */ __asm { NOP }
    /* +0x30bae5 */ __asm { NOP }
    /* +0x30bae6 */ __asm { MOV R10W,0xefab }
    /* +0x30baeb */ __asm { ADD R10D,0x1048 }
    /* +0x30baf2 */ __asm { ROL R10W,0x1 }
    /* +0x30baf6 */ __asm { NOT R10D }
    /* +0x30baf9 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30bb00 */ __asm { ROL R10W,CL }
    /* +0x30bb04 */ __asm { MOV RCX,qword ptr [RAX + 0x30] }
    /* +0x30bb08 */ __asm { MOVZX R8D,R10W }
    /* +0x30bb0c */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x30bb10 */ __asm { MOV qword ptr [RBP + 0x1498],RCX }
    /* +0x30bb17 */ __asm { TEST RCX,RCX }
    /* +0x30bb1a */ __asm { JZ 0x7fffa4a7bce9 }
    /* +0x30bb20 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x30bb27 */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x30bb2b */ __asm { ADD R8,RAX }
    /* +0x30bb2e */ __asm { JZ 0x7fffa4a7bce9 }
    /* +0x30bb34 */ __asm { MOV R10W,0xdd40 }
    /* +0x30bb39 */ __asm { MOV RCX,qword ptr [RBP + 0x1400] }
    /* +0x30bb40 */ __asm { IMUL R10D,ECX }
    /* +0x30bb44 */ __asm { MOV RDX,qword ptr [RBP + 0x108] }
    /* +0x30bb4b */ __asm { ADD R10D,EDX }
    /* +0x30bb4e */ __asm { ROL R10W,0xb }
    /* +0x30bb53 */ __asm { IMUL R10D,R10D,-0x5ab7 }
    /* +0x30bb5a */ __asm { MOVZX R11D,R10W }
    /* +0x30bb5e */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x30bb62 */ __asm { MOV R10W,0x7651 }
    /* +0x30bb67 */ __asm { XOR R10D,EDX }
    /* +0x30bb6a */ __asm { MOV RAX,qword ptr [RAX + 0xfe8] }
    /* +0x30bb71 */ __asm { IMUL R10D,ECX }
    /* +0x30bb75 */ __asm { ADD R10D,0x1f1c }
    /* +0x30bb7c */ __asm { MOVZX R11D,R10W }
    /* +0x30bb80 */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x30bb84 */ __asm { ADD RAX,qword ptr [RCX + 0x370] }
    /* +0x30bb8b */ __asm { MOV RCX,-0x5d293fd390ef0015 }
    /* +0x30bb95 */ __asm { CMP RAX,RCX }
    /* +0x30bb98 */ __asm { NOP }
    /* +0x30bb99 */ __asm { NOP }
    /* +0x30bb9a */ __asm { NOP }
    /* +0x30bb9b */ __asm { NOP }
    /* +0x30bb9c */ __asm { NOP }
    /* +0x30bb9d */ __asm { MOV RCX,qword ptr [R8 + 0x88] }
    /* +0x30bba4 */ __asm { MOV qword ptr [RBP + 0x12c8],0x0 }
    /* +0x30bbaf */ __asm { MOV R10D,0xffffffff }
    /* +0x30bbb5 */ __asm { MOV qword ptr [RBP + 0x1318],RCX }
    /* +0x30bbbc */ __asm { AND R10,RCX }
    /* +0x30bbbf */ __asm { JZ 0x7fffa4a7bd0c }
    /* +0x30bbc5 */ __asm { MOV RAX,qword ptr [RBP + 0x1318] }
    /* +0x30bbcc */ __asm { SHR RAX,0x20 }
    /* +0x30bbd0 */ __asm { JZ 0x7fffa4a7bd0c }
    /* +0x30bbd6 */ __asm { TEST dword ptr [RBP + 0x1228],0x100 }
    /* +0x30bbe0 */ __asm { NOP }
    /* +0x30bbe1 */ __asm { NOP }
    /* +0x30bbe2 */ __asm { NOP }
    /* +0x30bbe3 */ __asm { NOP }
    /* +0x30bbe4 */ __asm { NOP }
    /* +0x30bbe5 */ __asm { NOP }
    /* +0x30bbe6 */ __asm { NOP }
    /* +0x30bbe7 */ __asm { NOP }
    /* +0x30bbe8 */ __asm { NOP }
    /* +0x30bbe9 */ __asm { MOV dword ptr [RBP + -0x8],0xaa54569c }
    /* +0x30bbf0 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30bbf4 */ __asm { MOV CX,0x1943 }
    /* +0x30bbf8 */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x30bbff */ __asm { LEA R11D,[RAX + RCX*0x1] }
    /* +0x30bc03 */ __asm { NOT R11D }
    /* +0x30bc06 */ __asm { ROL R11W,0x2 }
    /* +0x30bc0b */ __asm { ADD R11D,0x3258 }
    /* +0x30bc12 */ __asm { MOVZX R11D,R11W }
    /* +0x30bc16 */ __asm { CMP R8D,R11D }
    /* +0x30bc19 */ __asm { NOP }
    /* +0x30bc1a */ __asm { NOP }
    /* +0x30bc1b */ __asm { NOP }
    /* +0x30bc1c */ __asm { NOP }
    /* +0x30bc1d */ __asm { NOP }
    /* +0x30bc1e */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x30bc25 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x1c],0x0 }
    /* +0x30bc2b */ __asm { JZ 0x7fffa4a7bcf6 }
    /* +0x30bc31 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x30bc38 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x20],0x0 }
    /* +0x30bc3e */ __asm { JZ 0x7fffa4a7bcf6 }
    /* +0x30bc44 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x30bc4b */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x24],0x0 }
    /* +0x30bc51 */ __asm { JZ 0x7fffa4a7bcf6 }
    /* +0x30bc57 */ __asm { MOV dword ptr [RBP + -0x8],0xb1676a98 }
    /* +0x30bc5e */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30bc62 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x30bc69 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x1c] }
    /* +0x30bc6e */ __asm { ADD R8,RAX }
    /* +0x30bc71 */ __asm { MOV qword ptr [RBP + 0x1410],R8 }
    /* +0x30bc78 */ __asm { MOV dword ptr [RBP + -0x8],0x5d52e0ba }
    /* +0x30bc7f */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30bc83 */ __asm { MOV R11D,0xd9941712 }
    /* +0x30bc89 */ __asm { IMUL R11D,dword ptr [RBP + 0x11d8] }
    /* +0x30bc91 */ __asm { MOV R9D,0x3727b5a3 }
    /* +0x30bc97 */ __asm { SUB R9D,R11D }
    /* +0x30bc9a */ __asm { CMP R8D,R9D }
    /* +0x30bc9d */ __asm { NOP }
    /* +0x30bc9e */ __asm { NOP }
    /* +0x30bc9f */ __asm { NOP }
    /* +0x30bca0 */ __asm { NOP }
    /* +0x30bca1 */ __asm { NOP }
    /* +0x30bca2 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x30bca9 */ __asm { MOV R13D,dword ptr [RAX + R10*0x1 + 0x20] }
    /* +0x30bcae */ __asm { ADD R13,RAX }
    /* +0x30bcb1 */ __asm { MOV dword ptr [RBP + -0x8],0x7c0c5dd9 }
    /* +0x30bcb8 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30bcbc */ __asm { MOV EBX,dword ptr [RAX + R10*0x1 + 0x24] }
    /* +0x30bcc1 */ __asm { ADD RBX,RAX }
    /* +0x30bcc4 */ __asm { MOV dword ptr [RBP + -0x8],0x8645c168 }
    /* +0x30bccb */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30bccf */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x10] }
    /* +0x30bcd4 */ __asm { MOV dword ptr [RBP + 0x150],R8D }
    /* +0x30bcdb */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x18] }
    /* +0x30bce0 */ __asm { MOV qword ptr [RBP + 0x12c8],R8 }
    /* +0x30bce7 */ __asm { JMP 0x7fffa4a7bd0c }
    /* +0x30bce9 */ __asm { MOV qword ptr [RBP + 0x12c8],0x0 }
    /* +0x30bcf4 */ __asm { JMP 0x7fffa4a7bd0c }
    /* +0x30bcf6 */ __asm { MOV dword ptr [RBP + -0x8],0x49080108 }
    /* +0x30bcfd */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x30bd01 */ __asm { MOV qword ptr [RBP + 0x12c8],0x0 }
    /* +0x30bd0c */ __asm { MOV R8D,0xf28125df }
    /* +0x30bd12 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x30bd19 */ __asm { ADD R8D,ECX }
    /* +0x30bd1c */ __asm { NOT R8D }
    /* +0x30bd1f */ __asm { MOV RDX,qword ptr [RBP + 0x1318] }
    /* +0x30bd26 */ __asm { LEA R10D,[RDX + 0x20] }
    /* +0x30bd2a */ __asm { MOV R15,RDX }
    /* +0x30bd2d */ __asm { SHR R15,0x20 }
    /* +0x30bd31 */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x30bd38 */ __asm { ADD R8D,R11D }
    /* +0x30bd3b */ __asm { MOV EAX,0xaea93325 }
    /* +0x30bd40 */ __asm { CMP R8,RAX }
    /* +0x30bd43 */ __asm { CMOVNZ R15D,R10D }
    /* +0x30bd47 */ __asm { ADD R15D,EDX }
    /* +0x30bd4a */ __asm { XOR R12D,R12D }
    /* +0x30bd4d */ __asm { MOV R10D,R11D }
    /* +0x30bd50 */ __asm { SUB R10D,ECX }
    /* +0x30bd53 */ __asm { MOV dword ptr [RBP + 0x1298],R10D }
    /* +0x30bd5a */ __asm { MOV qword ptr [RBP + 0x1c0],0x0 }
    /* +0x30bd65 */ __asm { MOV RSI,qword ptr [RBP + 0x1418] }
    /* +0x30bd6c */ __asm { CMP R12,qword ptr [RBP + 0x12c8] }
    /* +0x30bd73 */ __asm { JZ 0x7fffa4a7c0a1 }
    /* +0x30bd79 */ __asm { MOV R8D,0x3ddbcb3f }
    /* +0x30bd7f */ __asm { MOV R10D,0x31cd299d }
    /* +0x30bd85 */ __asm { ADD R8D,0xa0f924b0 }
    /* +0x30bd8c */ __asm { MOV R11,qword ptr [RBP + 0x11e0] }
    /* +0x30bd93 */ __asm { SUB R10D,R11D }
    /* +0x30bd96 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30bd9d */ __asm { ROR R10D,CL }
    /* +0x30bda0 */ __asm { XOR R10D,0x173456c5 }
    /* +0x30bda7 */ __asm { ROL R10D,0x5 }
    /* +0x30bdab */ __asm { MOVSXD RAX,R10D }
    /* +0x30bdae */ __asm { XOR R8D,ECX }
    /* +0x30bdb1 */ __asm { SUB R8D,R11D }
    /* +0x30bdb4 */ __asm { CMP R8,RAX }
    /* +0x30bdb7 */ __asm { JL 0x7fffa4a7bdf4 }
    /* +0x30bdb9 */ __asm { MOVZX R10D,word ptr [RBX + R12*0x2] }
    /* +0x30bdbe */ __asm { MOV RAX,qword ptr [RBP + 0x1410] }
    /* +0x30bdc5 */ __asm { MOV R11D,dword ptr [RAX + R10*0x4] }
    /* +0x30bdc9 */ __asm { CMP R11D,R15D }
    /* +0x30bdcc */ __asm { SETC CL }
    /* +0x30bdcf */ __asm { CMP R11D,dword ptr [RBP + 0x1318] }
    /* +0x30bdd6 */ __asm { SETNC DL }
    /* +0x30bdd9 */ __asm { AND DL,CL }
    /* +0x30bddb */ __asm { MOV R8D,0xee2ee828 }
    /* +0x30bde1 */ __asm { ADD R8D,dword ptr [RBP + 0x1298] }
    /* +0x30bde8 */ __asm { XOR R8D,0x736a042d }
    /* +0x30bdef */ __asm { MOVSXD R8,R8D }
    /* +0x30bdf2 */ __asm { JMP 0x7fffa4a7be3e }
    /* +0x30bdf4 */ __asm { MOVZX R10D,word ptr [RBX + R12*0x2] }
    /* +0x30bdf9 */ __asm { MOV R8D,0x966c05b6 }
    /* +0x30bdff */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30be06 */ __asm { ADD R8D,ECX }
    /* +0x30be09 */ __asm { ADD R8D,0x7ffffffd }
    /* +0x30be10 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x30be17 */ __asm { ROL R8D,CL }
    /* +0x30be1a */ __asm { ADD R8D,0xcac12702 }
    /* +0x30be21 */ __asm { MOV RAX,qword ptr [RBP + 0x1410] }
    /* +0x30be28 */ __asm { MOV R11D,dword ptr [RAX + R10*0x4] }
    /* +0x30be2c */ __asm { CMP R11D,dword ptr [RBP + 0x1318] }
    /* +0x30be33 */ __asm { SETNC CL }
    /* +0x30be36 */ __asm { CMP R11D,R15D }
    /* +0x30be39 */ __asm { SETC DL }
    /* +0x30be3c */ __asm { AND DL,CL }
    /* +0x30be3e */ __asm { MOV R11D,R11D }
    /* +0x30be41 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x30be48 */ __asm { ADD R11,RAX }
    /* +0x30be4b */ __asm { MOVZX R10D,R10W }
    /* +0x30be4f */ __asm { ADD R10D,dword ptr [RBP + 0x150] }
    /* +0x30be56 */ __asm { MOV uint8_t ptr [RBP + 0xc],DL }
    /* +0x30be59 */ __asm { MOV ECX,dword ptr [R13 + R12*0x4] }
    /* +0x30be5e */ __asm { ADD RAX,RCX }
    /* +0x30be61 */ __asm { TEST RCX,RCX }
    /* +0x30be64 */ __asm { CMOVZ RAX,RCX }
    /* +0x30be68 */ __asm { MOV dword ptr [RBP + 0x8],R10D }
    /* +0x30be6c */ __asm { MOV qword ptr [RBP],RAX }
    /* +0x30be70 */ __asm { MOV qword ptr [RBP + -0x8],R11 }
    /* +0x30be74 */ __asm { TEST RAX,RAX }
    /* +0x30be77 */ __asm { JZ 0x7fffa4a7c064 }
    /* +0x30be7d */ __asm { MOV dword ptr [RBP + 0x12e8],0x52658ddc }
    /* +0x30be87 */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x30be8e */ __asm { MOV R10,qword ptr [RBP] }
    /* +0x30be92 */ __asm { MOV DL,0x8b }
    /* +0x30be94 */ __asm { XOR DL,0x8e }
    /* +0x30be97 */ __asm { MOV R11,qword ptr [RBP + 0x108] }
    /* +0x30be9e */ __asm { MOV ECX,R11D }
    /* +0x30bea1 */ __asm { SUB CL,R8B }
    /* +0x30bea4 */ __asm { ADD CL,DL }
    /* +0x30bea6 */ __asm { XOR CL,uint8_t ptr [RBP + 0x1418] }
    /* +0x30beac */ __asm { MOVZX EDX,uint8_t ptr [R10] }
    /* +0x30beb0 */ __asm { CMP DL,CL }
    /* +0x30beb2 */ __asm { JZ 0x7fffa4a7bfe4 }
    /* +0x30beb8 */ __asm { LEA RAX,[R10 + 0x1] }
    /* +0x30bebc */ __asm { MOV R11D,0xb5383f }
    /* +0x30bec2 */ __asm { MOVZX R9D,DL }
    /* +0x30bec6 */ __asm { MOVZX ECX,uint8_t ptr [RAX] }
    /* +0x30bec9 */ __asm { XOR R9D,R11D }
    /* +0x30becc */ __asm { IMUL R11D,R9D,0x10001ab }
    /* +0x30bed3 */ __asm { INC RAX }
    /* +0x30bed6 */ __asm { MOV EDX,ECX }
    /* +0x30bed8 */ __asm { TEST CL,CL }
    /* +0x30beda */ __asm { JNZ 0x7fffa4a7bec2 }
    /* +0x30bedc */ __asm { MOV RAX,0x0 }
    /* +0x30bee3 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x30beea */ __asm { MOV R9D,0x958e4a56 }
    /* +0x30bef0 */ __asm { ADD R9D,0xce7e5bfd }
    /* +0x30bef7 */ __asm { MOV ECX,R8D }
    /* +0x30befa */ __asm { ROR R9D,CL }
    /* +0x30befd */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x30bf04 */ __asm { ROL R9D,CL }
    /* +0x30bf07 */ __asm { AND R11D,0x7fffffff }
    /* +0x30bf0e */ __asm { ADD R9D,0x5af2f99d }
    /* +0x30bf15 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30bf1c */ __asm { ROR R9D,CL }
    /* +0x30bf1f */ __asm { SUB R11D,R9D }
    /* +0x30bf22 */ __asm { IMUL R11D,R11D,-0x40568259 }
    /* +0x30bf29 */ __asm { CMP R11D,0x42e2ced6 }
    /* +0x30bf30 */ __asm { JNZ 0x7fffa4a7bfe4 }
    /* +0x30bf36 */ __asm { MOV RAX,qword ptr [RBP + 0x1c0] }
    /* +0x30bf3d */ __asm { TEST RAX,RAX }
    /* +0x30bf40 */ __asm { CMOVZ RAX,R10 }
    /* +0x30bf44 */ __asm { MOV qword ptr [RBP + 0x1c0],RAX }
    /* +0x30bf4b */ __asm { CMP uint8_t ptr [RBP + 0xc],0x1 }
    /* +0x30bf4f */ __asm { JNZ 0x7fffa4a7c093 }
    /* +0x30bf55 */ __asm { MOV R9,qword ptr [RBP + 0x1498] }
    /* +0x30bf5c */ __asm { MOV ECX,R8D }
    /* +0x30bf5f */ __asm { SUB ECX,ESI }
    /* +0x30bf61 */ __asm { LEA RAX,[0x7fffa52ca7cc] }
    /* +0x30bf68 */ __asm { MOV R14D,0xb60ba3f9 }
    /* +0x30bf6e */ __asm { MOV R11,R9 }
    /* +0x30bf71 */ __asm { SHL R11,0x1b }
    /* +0x30bf75 */ __asm { ADD R11,R9 }
    /* +0x30bf78 */ __asm { XOR R11,0x2320a5df }
    /* +0x30bf7f */ __asm { LEA R9,[RBP + -0x8] }
    /* +0x30bf83 */ __asm { MOV R10,R9 }
    /* +0x30bf86 */ __asm { SHL R10,0x3a }
    /* +0x30bf8a */ __asm { IMUL R14D,dword ptr [RBP + 0x11d8] }
    /* +0x30bf92 */ __asm { ADD R10,R9 }
    /* +0x30bf95 */ __asm { ADD R10,-0x47bfba14 }
}


// ============================================================================
// Function : Unwind@7fffa4a7d670  |  RVA: 0x30d670  |  Size: 236 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a7d670(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)
                      (int)(((uint32_t)*(uint64_t *)(param_2 + 0x1498) ^ 0xdb0d91af) * 0x3eca143f) +
                     0x7fffa5691bed);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a7d760  |  RVA: 0x30d760  |  Size: 4113 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a7d760(void) {
    /* +0x30d760 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x30d765 */ __asm { PUSH RBP }
    /* +0x30d766 */ __asm { PUSH RSI }
    /* +0x30d767 */ __asm { PUSH RBX }
    /* +0x30d768 */ __asm { PUSH RDI }
    /* +0x30d769 */ __asm { PUSH R12 }
    /* +0x30d76b */ __asm { PUSH R13 }
    /* +0x30d76d */ __asm { PUSH R15 }
    /* +0x30d76f */ __asm { PUSH R14 }
    /* +0x30d771 */ __asm { SUB RSP,0xc8 }
    /* +0x30d778 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x30d77f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x30d786 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x30d78c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x30d796 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x30d7a0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x30d7aa */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x30d7b3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x30d7bb */ __asm { JZ 0x7fffa4a7d85e }
    /* +0x30d7c1 */ __asm { MOV R10D,0xfc0e3e33 }
    /* +0x30d7c7 */ __asm { MOV R8D,0x8ab82620 }
    /* +0x30d7cd */ __asm { IMUL ECX,R8D,0x5c9552b7 }
    /* +0x30d7d4 */ __asm { XOR R10D,0x3c11dfd2 }
    /* +0x30d7db */ __asm { LEA RAX,[0x7fffa47bf5e9] }
    /* +0x30d7e2 */ __asm { LEA R8,[0x7fffa47c847a] }
    /* +0x30d7e9 */ __asm { MOV R11W,0xd83 }
    /* +0x30d7ee */ __asm { IMUL R10D,R10D,0x3694da6d }
    /* +0x30d7f5 */ __asm { NOT R10D }
    /* +0x30d7f8 */ __asm { MOVSXD R9,R10D }
    /* +0x30d7fb */ __asm { ADD R9,R8 }
    /* +0x30d7fe */ __asm { MOV R8,qword ptr [RBP + 0x1418] }
    /* +0x30d805 */ __asm { LEA R10D,[R8 + RCX*0x1] }
    /* +0x30d809 */ __asm { ADD R10D,0x885b3416 }
    /* +0x30d810 */ __asm { MOVSXD R10,R10D }
    /* +0x30d813 */ __asm { XOR R11D,R8D }
    /* +0x30d816 */ __asm { MOV R8D,0xffff8694 }
    /* +0x30d81c */ __asm { SUB R8D,R11D }
    /* +0x30d81f */ __asm { MOVSX RCX,R8W }
    /* +0x30d823 */ __asm { MOVZX ECX,uint8_t ptr [RAX + RCX*0x1 + 0x9] }
    /* +0x30d828 */ __asm { LEA RAX,[0x7fffa47c5564] }
    /* +0x30d82f */ __asm { MOV RAX,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x30d834 */ __asm { XOR RAX,qword ptr [R9 + RCX*0x8 + 0x13] }
    /* +0x30d839 */ __asm { MOVQ XMM2,RAX }
    /* +0x30d83e */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x30d842 */ __asm { PXOR XMM4,XMM2 }
    /* +0x30d846 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x30d84b */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x30d84f */ __asm { TEST R8,R8 }
    /* +0x30d852 */ __asm { JZ 0x7fffa4a7d8a0 }
    /* +0x30d854 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x30d85b */ __asm { CALL R8 }
    /* +0x30d85e */ __asm { MOVAPS XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x30d866 */ __asm { MOVAPS XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x30d86f */ __asm { MOVAPS XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x30d878 */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x30d881 */ __asm { MOVAPS XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x30d886 */ __asm { MOVAPS XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x30d88c */ __asm { ADD RSP,0xc8 }
    /* +0x30d893 */ __asm { POP R14 }
    /* +0x30d895 */ __asm { POP R15 }
    /* +0x30d897 */ __asm { POP R13 }
    /* +0x30d899 */ __asm { POP R12 }
    /* +0x30d89b */ __asm { POP RDI }
    /* +0x30d89c */ __asm { POP RBX }
    /* +0x30d89d */ __asm { POP RSI }
    /* +0x30d89e */ __asm { POP RBP }
    /* +0x30d89f */ __asm { RET }
    /* +0x30d8a0 */ __asm { MOV R10W,0xe165 }
    /* +0x30d8a5 */ __asm { XOR R10D,0xfa05 }
    /* +0x30d8ac */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30d8b3 */ __asm { ROL R10W,CL }
    /* +0x30d8b7 */ __asm { MOVZX R8D,R10W }
    /* +0x30d8bb */ __asm { XOR R8,0x6de0 }
    /* +0x30d8c2 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x30d8c6 */ __asm { MOV R10W,0x97b1 }
    /* +0x30d8cb */ __asm { MOV R8D,0xffff97e1 }
    /* +0x30d8d1 */ __asm { SUB R8D,R10D }
    /* +0x30d8d4 */ __asm { MOVZX R8D,R8W }
    /* +0x30d8d8 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x30d8dc */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x30d8e6 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x30d8ea */ __asm { NOP }
    /* +0x30d8eb */ __asm { NOP }
    /* +0x30d8ec */ __asm { NOP }
    /* +0x30d8ed */ __asm { NOP }
    /* +0x30d8ee */ __asm { NOP }
    /* +0x30d8ef */ __asm { MOV R10W,0x3e09 }
    /* +0x30d8f4 */ __asm { ADD R10D,dword ptr [RBP + 0x1418] }
    /* +0x30d8fb */ __asm { ROL R10W,0x1 }
    /* +0x30d8ff */ __asm { XOR R10D,0xe2b7 }
    /* +0x30d906 */ __asm { MOVZX R8D,R10W }
    /* +0x30d90a */ __asm { PUSHFQ }
    /* +0x30d90b */ __asm { POP RDX }
    /* +0x30d90c */ __asm { AND EDX,0x100 }
    /* +0x30d912 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x30d916 */ __asm { MOV qword ptr [RBP + 0x11e0],RAX }
    /* +0x30d91d */ __asm { MOV qword ptr [RBP + 0x150],R8 }
    /* +0x30d924 */ __asm { MOV qword ptr [RBP + 0x1c0],RDX }
    /* +0x30d92b */ __asm { CMP RDX,R8 }
    /* +0x30d92e */ __asm { NOP }
    /* +0x30d92f */ __asm { NOP }
    /* +0x30d930 */ __asm { NOP }
    /* +0x30d931 */ __asm { NOP }
    /* +0x30d932 */ __asm { NOP }
    /* +0x30d933 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x30d93a */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x30d93e */ __asm { TEST R10D,R10D }
    /* +0x30d941 */ __asm { NOP }
    /* +0x30d942 */ __asm { NOP }
    /* +0x30d943 */ __asm { NOP }
    /* +0x30d944 */ __asm { NOP }
    /* +0x30d945 */ __asm { NOP }
    /* +0x30d946 */ __asm { ADD qword ptr [RBP + 0x11e0],0x10 }
    /* +0x30d94e */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x30d955 */ __asm { MOV R11,0x0 }
    /* +0x30d95c */ __asm { NOP }
    /* +0x30d95d */ __asm { MOV R8,0x10000000014b }
    /* +0x30d967 */ __asm { MOV R10,qword ptr [RBP + 0x1418] }
    /* +0x30d96e */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30d975 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x30d978 */ __asm { MOV qword ptr [RBP + 0x11e0],RAX }
    /* +0x30d97f */ __asm { MOV EDX,0x7e00d20f }
    /* +0x30d984 */ __asm { XOR EDX,0x8001fc7f }
    /* +0x30d98a */ __asm { PUSHFQ }
    /* +0x30d98b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x30d993 */ __asm { POPFQ }
    /* +0x30d994 */ __asm { MOV dword ptr [RBP + -0x8],EDX }
    /* +0x30d997 */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x30d99a */ __asm { CMP EDX,0xfcebf0f4 }
    /* +0x30d9a0 */ __asm { JBE 0x7fffa4a7db08 }
    /* +0x30d9a6 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30d9ad */ __asm { MOVZX EDX,word ptr [RAX + 0x58] }
    /* +0x30d9b1 */ __asm { CMP EDX,0x2 }
    /* +0x30d9b4 */ __asm { JNC 0x7fffa4a7d9bd }
    /* +0x30d9b6 */ __asm { XOR EDX,EDX }
    /* +0x30d9b8 */ __asm { JMP 0x7fffa4a7dab3 }
    /* +0x30d9bd */ __asm { SHR EDX,0x1 }
    /* +0x30d9bf */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30d9c6 */ __asm { MOV RBX,qword ptr [RAX + 0x60] }
    /* +0x30d9ca */ __asm { CMP DX,0x1 }
    /* +0x30d9ce */ __asm { JNZ 0x7fffa4a7d9e2 }
    /* +0x30d9d0 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x30d9da */ __asm { XOR R14D,R14D }
    /* +0x30d9dd */ __asm { JMP 0x7fffa4a7da79 }
    /* +0x30d9e2 */ __asm { MOV EDI,EDX }
    /* +0x30d9e4 */ __asm { AND EDI,0xfffffffe }
    /* +0x30d9e7 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x30d9f1 */ __asm { XOR R14D,R14D }
    /* +0x30d9f4 */ __asm { MOV ESI,0x9d42120 }
    /* +0x30d9f9 */ __asm { IMUL R12D,ESI,0x74bbf7a3 }
    /* +0x30da00 */ __asm { MOVZX ECX,word ptr [RBX + R14*0x2 + 0x2] }
    /* +0x30da06 */ __asm { MOV ESI,ECX }
    /* +0x30da08 */ __asm { OR ESI,0x20 }
    /* +0x30da0b */ __asm { MOV R13,0x52c8ec23ccf4b337 }
    /* +0x30da15 */ __asm { SUB R13,R10 }
    /* +0x30da18 */ __asm { MOVZX R9D,word ptr [RBX + R14*0x2] }
    /* +0x30da1d */ __asm { MOV EAX,R9D }
    /* +0x30da20 */ __asm { OR EAX,0x20 }
    /* +0x30da23 */ __asm { LEA R11D,[R9 + -0x41] }
    /* +0x30da27 */ __asm { CMP R11W,0x1a }
    /* +0x30da2c */ __asm { CMOVNC EAX,R9D }
    /* +0x30da30 */ __asm { MOVZX R11D,AL }
    /* +0x30da34 */ __asm { XOR R11,R15 }
    /* +0x30da37 */ __asm { IMUL R11,R8 }
    /* +0x30da3b */ __asm { LEA R9D,[RCX + -0x41] }
    /* +0x30da3f */ __asm { CMP R9W,0x1a }
    /* +0x30da44 */ __asm { CMOVNC ESI,ECX }
    /* +0x30da47 */ __asm { MOVZX R15D,SIL }
    /* +0x30da4b */ __asm { XOR R15,R11 }
    /* +0x30da4e */ __asm { ADD R14,0x2 }
    /* +0x30da52 */ __asm { SUB R12D,R10D }
    /* +0x30da55 */ __asm { MOV EAX,0x8f0f096f }
    /* +0x30da5a */ __asm { IMUL R13,RAX }
    /* +0x30da5e */ __asm { IMUL R13,R15 }
    /* +0x30da62 */ __asm { AND R15,R8 }
    /* +0x30da65 */ __asm { CMP R12,0x66cac1f2 }
    /* +0x30da6c */ __asm { CMOVNZ R15,R13 }
    /* +0x30da70 */ __asm { CMP RDI,R14 }
    /* +0x30da73 */ __asm { JNZ 0x7fffa4a7d9f4 }
    /* +0x30da79 */ __asm { TEST DL,0x1 }
    /* +0x30da7c */ __asm { JZ 0x7fffa4a7daa3 }
    /* +0x30da7e */ __asm { MOVZX EDX,word ptr [RBX + R14*0x2] }
    /* +0x30da83 */ __asm { LEA ESI,[RDX + -0x41] }
    /* +0x30da86 */ __asm { MOV R13D,EDX }
    /* +0x30da89 */ __asm { OR R13D,0x20 }
    /* +0x30da8d */ __asm { CMP SI,0x1a }
    /* +0x30da91 */ __asm { CMOVNC R13D,EDX }
    /* +0x30da95 */ __asm { MOVZX EDX,R13B }
    /* +0x30da99 */ __asm { XOR RDX,R15 }
    /* +0x30da9c */ __asm { IMUL RDX,R8 }
    /* +0x30daa0 */ __asm { MOV R15,RDX }
    /* +0x30daa3 */ __asm { MOV RAX,0x39cda41577e4d47d }
    /* +0x30daad */ __asm { CMP R15,RAX }
    /* +0x30dab0 */ __asm { SETZ DL }
    /* +0x30dab3 */ __asm { NOP }
    /* +0x30dab5 */ __asm { LEA R15,[0x7fffa4770000] }
    /* +0x30dabc */ __asm { MOV R13,0x0 }
    /* +0x30dac3 */ __asm { MOV ESI,0x4f0401c7 }
    /* +0x30dac8 */ __asm { IMUL ESI,dword ptr [RBP + 0x104] }
    /* +0x30dacf */ __asm { ADD ESI,0x25450725 }
    /* +0x30dad5 */ __asm { MOV dword ptr [RBP + -0x8],ESI }
    /* +0x30dad8 */ __asm { MOV ESI,dword ptr [RBP + -0x8] }
    /* +0x30dadb */ __asm { CMP ESI,0x26bd4fb8 }
    /* +0x30dae1 */ __asm { JNC 0x7fffa4a7db10 }
    /* +0x30dae3 */ __asm { TEST DL,DL }
    /* +0x30dae5 */ __asm { JNZ 0x7fffa4a7db1e }
    /* +0x30dae7 */ __asm { MOV R11D,0x58aad3d5 }
    /* +0x30daed */ __asm { IMUL R11D,R11D,0xb6753ff }
    /* +0x30daf4 */ __asm { XOR R11D,dword ptr [RBP + 0x1418] }
    /* +0x30dafb */ __asm { MOV dword ptr [RBP + -0x8],R11D }
    /* +0x30daff */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x30db03 */ __asm { JMP 0x7fffa4a7d96e }
    /* +0x30db08 */ __asm { RET }
    /* +0x30db10 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x30db15 */ __asm { JNS 0x7fffa4a7db52 }
    /* +0x30db17 */ __asm { IRETD }
    /* +0x30db1e */ __asm { MOV R10W,0xcffa }
    /* +0x30db23 */ __asm { ADD R10D,0x3306 }
    /* +0x30db2a */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30db31 */ __asm { ROR R10W,CL }
    /* +0x30db35 */ __asm { ROR R10W,0x1 }
    /* +0x30db39 */ __asm { MOVZX R8D,R10W }
    /* +0x30db3d */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x30db41 */ __asm { MOV RCX,0x432683e3afdf2b29 }
    /* +0x30db4b */ __asm { CMP RAX,RCX }
    /* +0x30db4e */ __asm { NOP }
    /* +0x30db4f */ __asm { NOP }
    /* +0x30db50 */ __asm { NOP }
    /* +0x30db51 */ __asm { NOP }
    /* +0x30db52 */ __asm { NOP }
    /* +0x30db53 */ __asm { NOP }
    /* +0x30db54 */ __asm { NOP }
    /* +0x30db55 */ __asm { NOP }
    /* +0x30db56 */ __asm { NOP }
    /* +0x30db57 */ __asm { NOP }
    /* +0x30db58 */ __asm { NOP }
    /* +0x30db59 */ __asm { NOP }
    /* +0x30db5a */ __asm { NOP }
    /* +0x30db5b */ __asm { NOP }
    /* +0x30db5c */ __asm { NOP }
    /* +0x30db5d */ __asm { MOV R10W,0x7dd5 }
    /* +0x30db62 */ __asm { MOV RAX,qword ptr [RBP + 0x1400] }
    /* +0x30db69 */ __asm { MOV R8D,EAX }
    /* +0x30db6c */ __asm { IMUL R8D,R10D }
    /* +0x30db70 */ __asm { ADD R8D,0x4521 }
    /* +0x30db77 */ __asm { ROL R8W,0x1 }
    /* +0x30db7b */ __asm { MOVZX R8D,R8W }
    /* +0x30db7f */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30db86 */ __asm { MOV RCX,qword ptr [RAX + 0x30] }
    /* +0x30db8a */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x30db8e */ __asm { MOV qword ptr [RBP + 0x11e0],RCX }
    /* +0x30db95 */ __asm { TEST RCX,RCX }
    /* +0x30db98 */ __asm { JZ 0x7fffa4a7dd23 }
    /* +0x30db9e */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30dba5 */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x30dba9 */ __asm { ADD R8,RAX }
    /* +0x30dbac */ __asm { JZ 0x7fffa4a7dd23 }
    /* +0x30dbb2 */ __asm { MOV R10W,0xf640 }
    /* +0x30dbb7 */ __asm { MOV RAX,qword ptr [RBP + 0x1400] }
    /* +0x30dbbe */ __asm { MOV R11D,EAX }
    /* +0x30dbc1 */ __asm { IMUL R11D,R10D }
    /* +0x30dbc5 */ __asm { ADD R11D,0x69a0 }
    /* +0x30dbcc */ __asm { ROR R11W,0x1 }
    /* +0x30dbd0 */ __asm { MOVZX R11D,R11W }
    /* +0x30dbd4 */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x30dbd8 */ __asm { MOV R10W,0xed63 }
    /* +0x30dbdd */ __asm { MOV RAX,qword ptr [RAX + 0xfe8] }
    /* +0x30dbe4 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30dbeb */ __asm { ADD R10D,ECX }
    /* +0x30dbee */ __asm { ADD R10D,0x5f4e }
    /* +0x30dbf5 */ __asm { ROL R10W,0x4 }
    /* +0x30dbfa */ __asm { MOVZX R11D,R10W }
    /* +0x30dbfe */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x30dc02 */ __asm { ADD RAX,qword ptr [RCX + 0x370] }
    /* +0x30dc09 */ __asm { MOV RCX,-0x5d293fd390ef0015 }
    /* +0x30dc13 */ __asm { CMP RAX,RCX }
    /* +0x30dc16 */ __asm { NOP }
    /* +0x30dc17 */ __asm { NOP }
    /* +0x30dc18 */ __asm { NOP }
    /* +0x30dc19 */ __asm { NOP }
    /* +0x30dc1a */ __asm { NOP }
    /* +0x30dc1b */ __asm { MOV RCX,qword ptr [R8 + 0x88] }
    /* +0x30dc22 */ __asm { XOR EDI,EDI }
    /* +0x30dc24 */ __asm { MOV R10D,0xffffffff }
    /* +0x30dc2a */ __asm { MOV qword ptr [RBP + 0x108],RCX }
    /* +0x30dc31 */ __asm { AND R10,RCX }
    /* +0x30dc34 */ __asm { JZ 0x7fffa4a7dd34 }
    /* +0x30dc3a */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x30dc41 */ __asm { SHR RAX,0x20 }
    /* +0x30dc45 */ __asm { JZ 0x7fffa4a7dd34 }
    /* +0x30dc4b */ __asm { MOV R8,qword ptr [RBP + 0x1c0] }
    /* +0x30dc52 */ __asm { CMP R8D,dword ptr [RBP + 0x150] }
    /* +0x30dc59 */ __asm { NOP }
    /* +0x30dc5a */ __asm { NOP }
    /* +0x30dc5b */ __asm { NOP }
    /* +0x30dc5c */ __asm { NOP }
    /* +0x30dc5d */ __asm { NOP }
    /* +0x30dc5e */ __asm { NOP }
    /* +0x30dc5f */ __asm { NOP }
    /* +0x30dc60 */ __asm { NOP }
    /* +0x30dc61 */ __asm { NOP }
    /* +0x30dc62 */ __asm { MOV dword ptr [RBP + -0x8],0xaa54569c }
    /* +0x30dc69 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30dc6d */ __asm { TEST R8D,R8D }
    /* +0x30dc70 */ __asm { NOP }
    /* +0x30dc71 */ __asm { NOP }
    /* +0x30dc72 */ __asm { NOP }
    /* +0x30dc73 */ __asm { NOP }
    /* +0x30dc74 */ __asm { NOP }
    /* +0x30dc75 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30dc7c */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x1c],0x0 }
    /* +0x30dc82 */ __asm { JZ 0x7fffa4a7dd27 }
    /* +0x30dc88 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30dc8f */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x20],0x0 }
    /* +0x30dc95 */ __asm { JZ 0x7fffa4a7dd27 }
    /* +0x30dc9b */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30dca2 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x24],0x0 }
    /* +0x30dca8 */ __asm { JZ 0x7fffa4a7dd27 }
    /* +0x30dcaa */ __asm { MOV RAX,0x0 }
    /* +0x30dcb1 */ __asm { NOP }
    /* +0x30dcb2 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x30dcb9 */ __asm { MOV dword ptr [RBP + -0x8],0xb1676a98 }
    /* +0x30dcc0 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30dcc4 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30dccb */ __asm { MOV R15D,dword ptr [RAX + R10*0x1 + 0x1c] }
    /* +0x30dcd0 */ __asm { ADD R15,RAX }
    /* +0x30dcd3 */ __asm { MOV dword ptr [RBP + -0x8],0x5d52e0ba }
    /* +0x30dcda */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30dcde */ __asm { CMP R8D,0xb5807139 }
    /* +0x30dce5 */ __asm { NOP }
    /* +0x30dce6 */ __asm { NOP }
    /* +0x30dce7 */ __asm { NOP }
    /* +0x30dce8 */ __asm { NOP }
    /* +0x30dce9 */ __asm { NOP }
    /* +0x30dcea */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30dcf1 */ __asm { MOV R12D,dword ptr [RAX + R10*0x1 + 0x20] }
    /* +0x30dcf6 */ __asm { ADD R12,RAX }
    /* +0x30dcf9 */ __asm { MOV dword ptr [RBP + -0x8],0x7c0c5dd9 }
    /* +0x30dd00 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30dd04 */ __asm { MOV R13D,dword ptr [RAX + R10*0x1 + 0x24] }
    /* +0x30dd09 */ __asm { ADD R13,RAX }
    /* +0x30dd0c */ __asm { MOV dword ptr [RBP + -0x8],0x8645c168 }
    /* +0x30dd13 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30dd17 */ __asm { MOV ESI,dword ptr [RAX + R10*0x1 + 0x10] }
    /* +0x30dd1c */ __asm { MOV EDI,dword ptr [RAX + R10*0x1 + 0x18] }
    /* +0x30dd21 */ __asm { JMP 0x7fffa4a7dd34 }
    /* +0x30dd23 */ __asm { XOR EDI,EDI }
    /* +0x30dd25 */ __asm { JMP 0x7fffa4a7dd34 }
    /* +0x30dd27 */ __asm { MOV dword ptr [RBP + -0x8],0x49080108 }
    /* +0x30dd2e */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x30dd32 */ __asm { XOR EDI,EDI }
    /* +0x30dd34 */ __asm { MOV R8,qword ptr [RBP + 0x108] }
    /* +0x30dd3b */ __asm { MOV RBX,R8 }
    /* +0x30dd3e */ __asm { SHR RBX,0x20 }
    /* +0x30dd42 */ __asm { ADD EBX,R8D }
    /* +0x30dd45 */ __asm { XOR R14D,R14D }
    /* +0x30dd48 */ __asm { MOV qword ptr [RBP + 0x11d8],0x0 }
    /* +0x30dd53 */ __asm { JMP 0x7fffa4a7ddcc }
    /* +0x30dd55 */ __asm { MOV R10W,0xc2c4 }
    /* +0x30dd5a */ __asm { MOV R8D,ECX }
    /* +0x30dd5d */ __asm { XOR R8D,R10D }
    /* +0x30dd60 */ __asm { IMUL R10D,R8D,-0x237d }
    /* +0x30dd67 */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x30dd6e */ __asm { XOR R10D,R11D }
    /* +0x30dd71 */ __asm { ROL R10W,0x8 }
    /* +0x30dd76 */ __asm { MOVZX R8D,R10W }
    /* +0x30dd7a */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x30dd7e */ __asm { MOV R10W,0xb1ea }
    /* +0x30dd83 */ __asm { IMUL R10D,R10D,0x7491 }
    /* +0x30dd8a */ __asm { ROR R10W,CL }
    /* +0x30dd8e */ __asm { XOR R10D,R11D }
    /* +0x30dd91 */ __asm { MOVZX R8D,R10W }
    /* +0x30dd95 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x30dd99 */ __asm { MOV R8D,0x6a8 }
    /* +0x30dd9f */ __asm { ADD RCX,R8 }
    /* +0x30dda2 */ __asm { IMUL RCX,qword ptr [RAX + 0xc00] }
    /* +0x30ddaa */ __asm { MOV RAX,0x1b967edfdccb6d1b }
    /* +0x30ddb4 */ __asm { CMP RCX,RAX }
    /* +0x30ddb7 */ __asm { JZ 0x7fffa4a7dff5 }
    /* +0x30ddbd */ __asm { XOR R8D,R8D }
    /* +0x30ddc0 */ __asm { INC R14 }
    /* +0x30ddc3 */ __asm { TEST R8,R8 }
    /* +0x30ddc6 */ __asm { JNZ 0x7fffa4a7f4b6 }
    /* +0x30ddcc */ __asm { CMP R14,RDI }
    /* +0x30ddcf */ __asm { JZ 0x7fffa4a7e000 }
    /* +0x30ddd5 */ __asm { MOV R10D,0x32622b97 }
    /* +0x30dddb */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x30dde2 */ __asm { SUB R10D,R11D }
    /* +0x30dde5 */ __asm { XOR R10D,0x46c8023b }
    /* +0x30ddec */ __asm { MOV R8D,0x2adbee87 }
    /* +0x30ddf2 */ __asm { ADD R8D,R11D }
    /* +0x30ddf5 */ __asm { IMUL R8D,R8D,0x6dd6d00b }
    /* +0x30ddfc */ __asm { ROL R8D,0x3 }
    /* +0x30de00 */ __asm { MOVSXD RAX,R8D }
    /* +0x30de03 */ __asm { MOVSXD RCX,R10D }
    /* +0x30de06 */ __asm { CMP RAX,RCX }
    /* +0x30de09 */ __asm { JGE 0x7fffa4a7de4d }
    /* +0x30de0b */ __asm { MOV R10D,dword ptr [R12 + R14*0x4] }
    /* +0x30de0f */ __asm { MOV ECX,0x2fc86594 }
    /* +0x30de14 */ __asm { ADD ECX,0x480bac22 }
    /* +0x30de1a */ __asm { IMUL ECX,dword ptr [RBP + 0x104] }
    /* +0x30de21 */ __asm { MOVZX R8D,word ptr [R13 + R14*0x2] }
    /* +0x30de27 */ __asm { MOV R11D,dword ptr [R15 + R8*0x4] }
    /* +0x30de2b */ __asm { CMP R11D,EBX }
    /* +0x30de2e */ __asm { SETC AL }
    /* +0x30de31 */ __asm { CMP R11D,dword ptr [RBP + 0x108] }
    /* +0x30de38 */ __asm { SETNC DL }
    /* +0x30de3b */ __asm { AND DL,AL }
    /* +0x30de3d */ __asm { MOV R11D,R11D }
    /* +0x30de40 */ __asm { ADD R11,qword ptr [RBP + 0x11e0] }
    /* +0x30de47 */ __asm { MOV qword ptr [RBP + -0x8],R11 }
    /* +0x30de4b */ __asm { JMP 0x7fffa4a7de90 }
    /* +0x30de4d */ __asm { MOV R8D,0x7e6a3351 }
    /* +0x30de53 */ __asm { MOV R10D,dword ptr [R12 + R14*0x4] }
    /* +0x30de57 */ __asm { ADD R8D,dword ptr [RBP + 0x1418] }
    /* +0x30de5e */ __asm { MOV ECX,0xf77a8f9e }
    /* +0x30de63 */ __asm { SUB ECX,R8D }
    /* +0x30de66 */ __asm { MOVZX R8D,word ptr [R13 + R14*0x2] }
    /* +0x30de6c */ __asm { MOV R11D,dword ptr [R15 + R8*0x4] }
    /* +0x30de70 */ __asm { CMP R11D,dword ptr [RBP + 0x108] }
    /* +0x30de77 */ __asm { SETNC AL }
    /* +0x30de7a */ __asm { MOV EDX,R11D }
    /* +0x30de7d */ __asm { ADD RDX,qword ptr [RBP + 0x11e0] }
    /* +0x30de84 */ __asm { MOV qword ptr [RBP + -0x8],RDX }
    /* +0x30de88 */ __asm { CMP R11D,EBX }
    /* +0x30de8b */ __asm { SETC DL }
    /* +0x30de8e */ __asm { AND DL,AL }
    /* +0x30de90 */ __asm { MOV uint8_t ptr [RBP + 0xc],DL }
    /* +0x30de93 */ __asm { MOVZX R8D,R8W }
    /* +0x30de97 */ __asm { MOV R11D,R10D }
    /* +0x30de9a */ __asm { ADD R11,qword ptr [RBP + 0x11e0] }
    /* +0x30dea1 */ __asm { TEST R10D,R10D }
    /* +0x30dea4 */ __asm { MOV EDX,0x0 }
    /* +0x30dea9 */ __asm { CMOVZ R11,RDX }
    /* +0x30dead */ __asm { ADD R8D,ESI }
    /* +0x30deb0 */ __asm { MOV dword ptr [RBP + 0x8],R8D }
    /* +0x30deb4 */ __asm { MOV qword ptr [RBP],R11 }
    /* +0x30deb8 */ __asm { TEST R11,R11 }
    /* +0x30debb */ __asm { JZ 0x7fffa4a7df11 }
    /* +0x30debd */ __asm { MOV dword ptr [RBP + 0x12e8],0x52658ddc }
    /* +0x30dec7 */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x30dece */ __asm { MOV R10,qword ptr [RBP] }
    /* +0x30ded2 */ __asm { MOVZX EDX,uint8_t ptr [R10] }
    /* +0x30ded6 */ __asm { MOV AL,0xd1 }
    /* +0x30ded8 */ __asm { SUB AL,uint8_t ptr [RBP + 0x1418] }
    /* +0x30dede */ __asm { ROL AL,0x1 }
    /* +0x30dee0 */ __asm { ADD AL,CL }
    /* +0x30dee2 */ __asm { ROL AL,0x6 }
    /* +0x30dee5 */ __asm { CMP DL,AL }
    /* +0x30dee7 */ __asm { JZ 0x7fffa4a7dd55 }
    /* +0x30deed */ __asm { LEA RAX,[R10 + 0x1] }
    /* +0x30def1 */ __asm { MOV R8D,0xb5383f }
    /* +0x30def7 */ __asm { MOVZX R11D,DL }
    /* +0x30defb */ __asm { MOVZX EDX,uint8_t ptr [RAX] }
    /* +0x30defe */ __asm { XOR R11D,R8D }
    /* +0x30df01 */ __asm { IMUL R8D,R11D,0x10001ab }
    /* +0x30df08 */ __asm { TEST DL,DL }
    /* +0x30df0a */ __asm { JZ 0x7fffa4a7df27 }
    /* +0x30df0c */ __asm { INC RAX }
    /* +0x30df0f */ __asm { JMP 0x7fffa4a7def7 }
    /* +0x30df11 */ __asm { MOV dword ptr [RBP + 0x12e8],0xe74f1127 }
    /* +0x30df1b */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x30df22 */ __asm { JMP 0x7fffa4a7ddbd }
    /* +0x30df27 */ __asm { MOV R11D,0x755b47a3 }
    /* +0x30df2d */ __asm { MOV R9D,0x6e817c47 }
    /* +0x30df33 */ __asm { SUB R9D,R11D }
    /* +0x30df36 */ __asm { AND R8D,0x7fffffff }
    /* +0x30df3d */ __asm { ROR R9D,CL }
    /* +0x30df40 */ __asm { CMP R8D,R9D }
    /* +0x30df43 */ __asm { JNZ 0x7fffa4a7dd55 }
    /* +0x30df49 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x30df50 */ __asm { MOV RAX,0x0 }
    /* +0x30df57 */ __asm { NOP }
    /* +0x30df58 */ __asm { MOV RAX,qword ptr [RBP + 0x11d8] }
    /* +0x30df5f */ __asm { TEST RAX,RAX }
    /* +0x30df62 */ __asm { CMOVZ RAX,R10 }
    /* +0x30df66 */ __asm { MOV qword ptr [RBP + 0x11d8],RAX }
    /* +0x30df6d */ __asm { CMP uint8_t ptr [RBP + 0xc],0x1 }
    /* +0x30df71 */ __asm { JNZ 0x7fffa4a7dfec }
    /* +0x30df73 */ __asm { LEA RAX,[0x7fffa52c812a] }
    /* +0x30df7a */ __asm { MOV R8,qword ptr [RBP + 0x11e0] }
    /* +0x30df81 */ __asm { MOV R11,R8 }
    /* +0x30df84 */ __asm { SHL R11,0x1b }
    /* +0x30df88 */ __asm { ADD R11,R8 }
    /* +0x30df8b */ __asm { LEA R8,[RBP + -0x8] }
    /* +0x30df8f */ __asm { MOV R10,R8 }
    /* +0x30df92 */ __asm { MOV EDX,0xd1df281b }
    /* +0x30df97 */ __asm { MOV R9,qword ptr [RBP + 0x1418] }
    /* +0x30df9e */ __asm { XOR EDX,R9D }
    /* +0x30dfa1 */ __asm { ADD EDX,0xa20f9c56 }
    /* +0x30dfa7 */ __asm { ROR EDX,CL }
    /* +0x30dfa9 */ __asm { SHL R10,0x3a }
    /* +0x30dfad */ __asm { XOR R11,0x2320a5df }
    /* +0x30dfb4 */ __asm { ADD R10,R8 }
    /* +0x30dfb7 */ __asm { ADD R10,-0x47bfba14 }
    /* +0x30dfbe */ __asm { MOV R8D,0xfaa33502 }
    /* +0x30dfc4 */ __asm { IMUL R8D,R8D,-0x74701587 }
    /* +0x30dfcb */ __asm { ROL R8D,CL }
    /* +0x30dfce */ __asm { XOR R8D,R9D }
    /* +0x30dfd1 */ __asm { ROL R8D,0x1e }
}


// ============================================================================
// Function : Unwind@7fffa4a7f600  |  RVA: 0x30f600  |  Size: 3310 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a7f600(void) {
    /* +0x30f600 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x30f605 */ __asm { PUSH RBP }
    /* +0x30f606 */ __asm { PUSH RSI }
    /* +0x30f607 */ __asm { PUSH RBX }
    /* +0x30f608 */ __asm { PUSH RDI }
    /* +0x30f609 */ __asm { PUSH R12 }
    /* +0x30f60b */ __asm { PUSH R13 }
    /* +0x30f60d */ __asm { PUSH R15 }
    /* +0x30f60f */ __asm { PUSH R14 }
    /* +0x30f611 */ __asm { SUB RSP,0xc8 }
    /* +0x30f618 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x30f61f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x30f626 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x30f62c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x30f636 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x30f640 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x30f64a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x30f653 */ __asm { CMP qword ptr [RBP + 0x12e8],0x0 }
    /* +0x30f65b */ __asm { JZ 0x7fffa4a7f70b }
    /* +0x30f661 */ __asm { MOV R10D,0x2d50eec6 }
    /* +0x30f667 */ __asm { LEA RAX,[0x7fffa47c6ef3] }
    /* +0x30f66e */ __asm { MOV R8D,0x2073543d }
    /* +0x30f674 */ __asm { IMUL R8D,R8D,-0x3e1b3d57 }
    /* +0x30f67b */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30f682 */ __asm { ROL R8D,CL }
    /* +0x30f685 */ __asm { IMUL R8D,dword ptr [RBP + 0x12c8] }
    /* +0x30f68d */ __asm { LEA R9,[0x7fffa47cabe2] }
    /* +0x30f694 */ __asm { IMUL R10D,R10D,0x49a655a5 }
    /* +0x30f69b */ __asm { MOV RDX,qword ptr [RBP + 0x108] }
    /* +0x30f6a2 */ __asm { ADD R10D,EDX }
    /* +0x30f6a5 */ __asm { XOR R10D,ECX }
    /* +0x30f6a8 */ __asm { MOVSXD R10,R10D }
    /* +0x30f6ab */ __asm { ROL R8D,0x1d }
    /* +0x30f6af */ __asm { MOVSXD R8,R8D }
    /* +0x30f6b2 */ __asm { ADD R8,R9 }
    /* +0x30f6b5 */ __asm { MOV R11D,0x29c635b1 }
    /* +0x30f6bb */ __asm { ADD R11D,ECX }
    /* +0x30f6be */ __asm { XOR R11D,0x3508a624 }
    /* +0x30f6c5 */ __asm { ROL R11D,0x1d }
    /* +0x30f6c9 */ __asm { XOR R11D,EDX }
    /* +0x30f6cc */ __asm { MOVSXD RCX,R11D }
    /* +0x30f6cf */ __asm { LEA R9,[0x7fffa47c6a03] }
    /* +0x30f6d6 */ __asm { MOVZX ECX,uint8_t ptr [R9 + RCX*0x1 + 0x9] }
    /* +0x30f6dc */ __asm { MOV RAX,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x30f6e1 */ __asm { XOR RAX,qword ptr [R8 + RCX*0x8 + 0x13] }
    /* +0x30f6e6 */ __asm { MOVQ XMM2,RAX }
    /* +0x30f6eb */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x30f6ef */ __asm { PXOR XMM4,XMM2 }
    /* +0x30f6f3 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x30f6f8 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x30f6fc */ __asm { TEST R8,R8 }
    /* +0x30f6ff */ __asm { JZ 0x7fffa4a7f753 }
    /* +0x30f701 */ __asm { MOV RCX,qword ptr [RBP + 0x12e8] }
    /* +0x30f708 */ __asm { CALL R8 }
    /* +0x30f70b */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x30f714 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x30f71e */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x30f728 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x30f732 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x30f738 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x30f73f */ __asm { ADD RSP,0xc8 }
    /* +0x30f746 */ __asm { POP R14 }
    /* +0x30f748 */ __asm { POP R15 }
    /* +0x30f74a */ __asm { POP R13 }
    /* +0x30f74c */ __asm { POP R12 }
    /* +0x30f74e */ __asm { POP RDI }
    /* +0x30f74f */ __asm { POP RBX }
    /* +0x30f750 */ __asm { POP RSI }
    /* +0x30f751 */ __asm { POP RBP }
    /* +0x30f752 */ __asm { RET }
    /* +0x30f753 */ __asm { MOV R10W,0x1a84 }
    /* +0x30f758 */ __asm { XOR R10D,0x7031 }
    /* +0x30f75f */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30f766 */ __asm { ROR R10W,CL }
    /* +0x30f76a */ __asm { MOV R11,qword ptr [RBP + 0x11e0] }
    /* +0x30f771 */ __asm { SUB R10D,R11D }
    /* +0x30f774 */ __asm { MOVZX R8D,R10W }
    /* +0x30f778 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x30f77c */ __asm { MOV R10W,0x4c73 }
    /* +0x30f781 */ __asm { SUB R10D,R11D }
    /* +0x30f784 */ __asm { IMUL R10D,R10D,0x44b5 }
    /* +0x30f78b */ __asm { ADD R10D,ECX }
    /* +0x30f78e */ __asm { MOVZX R8D,R10W }
    /* +0x30f792 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x30f796 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x30f7a0 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x30f7a4 */ __asm { NOP }
    /* +0x30f7a5 */ __asm { NOP }
    /* +0x30f7a6 */ __asm { NOP }
    /* +0x30f7a7 */ __asm { NOP }
    /* +0x30f7a8 */ __asm { NOP }
    /* +0x30f7a9 */ __asm { PUSHFQ }
    /* +0x30f7aa */ __asm { POP R8 }
    /* +0x30f7ac */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x30f7b0 */ __asm { MOV qword ptr [RBP + 0x1488],R8 }
    /* +0x30f7b7 */ __asm { TEST R8D,0x100 }
    /* +0x30f7be */ __asm { NOP }
    /* +0x30f7bf */ __asm { NOP }
    /* +0x30f7c0 */ __asm { NOP }
    /* +0x30f7c1 */ __asm { NOP }
    /* +0x30f7c2 */ __asm { NOP }
    /* +0x30f7c3 */ __asm { MOV R10D,0x70f1c910 }
    /* +0x30f7c9 */ __asm { IMUL R10D,dword ptr [RBP + 0x12c8] }
    /* +0x30f7d1 */ __asm { ADD R10D,dword ptr [RBP + 0x1418] }
    /* +0x30f7d8 */ __asm { NOT R10D }
    /* +0x30f7db */ __asm { MOV dword ptr [RBP + -0x8],R10D }
    /* +0x30f7df */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x30f7e3 */ __asm { TEST R10D,R10D }
    /* +0x30f7e6 */ __asm { NOP }
    /* +0x30f7e7 */ __asm { NOP }
    /* +0x30f7e8 */ __asm { NOP }
    /* +0x30f7e9 */ __asm { NOP }
    /* +0x30f7ea */ __asm { NOP }
    /* +0x30f7eb */ __asm { ADD RAX,0x10 }
    /* +0x30f7ef */ __asm { MOV R9,0x10000000014b }
    /* +0x30f7f9 */ __asm { MOV R11,qword ptr [RBP + 0x108] }
    /* +0x30f800 */ __asm { OR R11,0x1 }
    /* +0x30f804 */ __asm { MOV RDX,0x39cda41577e4d47d }
    /* +0x30f80e */ __asm { MOV R8,qword ptr [RBP + 0x108] }
    /* +0x30f815 */ __asm { MOV R10,qword ptr [RBP + 0x1418] }
    /* +0x30f81c */ __asm { MOV RCX,0x0 }
    /* +0x30f823 */ __asm { LEA R13,[0x7fffa4770000] }
    /* +0x30f82a */ __asm { NOP }
    /* +0x30f82b */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x30f82e */ __asm { PUSHFQ }
    /* +0x30f82f */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x30f837 */ __asm { POPFQ }
    /* +0x30f838 */ __asm { MOV ESI,0x53b92e04 }
    /* +0x30f83d */ __asm { XOR ESI,dword ptr [RBP + 0x1418] }
    /* +0x30f843 */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x30f84a */ __asm { ROL ESI,CL }
    /* +0x30f84c */ __asm { ADD ESI,0x8a56501e }
    /* +0x30f852 */ __asm { MOV dword ptr [RBP + -0x8],ESI }
    /* +0x30f855 */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x30f858 */ __asm { CMP ECX,0xfcebf0f4 }
    /* +0x30f85e */ __asm { JBE 0x7fffa4a7f9a5 }
    /* +0x30f864 */ __asm { MOVZX ECX,word ptr [RAX + 0x58] }
    /* +0x30f868 */ __asm { CMP ECX,0x2 }
    /* +0x30f86b */ __asm { JNC 0x7fffa4a7f874 }
    /* +0x30f86d */ __asm { XOR ECX,ECX }
    /* +0x30f86f */ __asm { JMP 0x7fffa4a7f980 }
    /* +0x30f874 */ __asm { SHR ECX,0x1 }
    /* +0x30f876 */ __asm { MOV R13,qword ptr [RAX + 0x60] }
    /* +0x30f87a */ __asm { NOP }
    /* +0x30f87b */ __asm { LEA RBX,[0x7fffa4770000] }
    /* +0x30f882 */ __asm { MOV R15,0x0 }
    /* +0x30f889 */ __asm { CMP CX,0x1 }
    /* +0x30f88d */ __asm { JZ 0x7fffa4a7f8f9 }
    /* +0x30f88f */ __asm { MOV R15D,ECX }
    /* +0x30f892 */ __asm { AND R15D,0xfffffffe }
    /* +0x30f896 */ __asm { MOV R14D,0x2 }
    /* +0x30f89c */ __asm { MOV RBX,-0x56ac57fd56f4aa33 }
    /* +0x30f8a6 */ __asm { MOVZX EDI,word ptr [R13 + R14*0x2 + -0x4] }
    /* +0x30f8ac */ __asm { LEA ESI,[RDI + -0x41] }
    /* +0x30f8af */ __asm { MOV R12D,EDI }
    /* +0x30f8b2 */ __asm { OR R12D,0x20 }
    /* +0x30f8b6 */ __asm { CMP SI,0x1a }
    /* +0x30f8ba */ __asm { CMOVNC R12D,EDI }
    /* +0x30f8be */ __asm { MOVZX EDI,R12B }
    /* +0x30f8c2 */ __asm { XOR RDI,RBX }
    /* +0x30f8c5 */ __asm { MOVZX EBX,word ptr [R13 + R14*0x2 + -0x2] }
    /* +0x30f8cb */ __asm { MOV ESI,EBX }
    /* +0x30f8cd */ __asm { OR ESI,0x20 }
    /* +0x30f8d0 */ __asm { LEA R12D,[RBX + -0x41] }
    /* +0x30f8d4 */ __asm { CMP R12W,0x1a }
    /* +0x30f8d9 */ __asm { CMOVNC ESI,EBX }
    /* +0x30f8dc */ __asm { MOVZX EBX,SIL }
    /* +0x30f8e0 */ __asm { IMUL RDI,R9 }
    /* +0x30f8e4 */ __asm { XOR RDI,RBX }
    /* +0x30f8e7 */ __asm { MOV RBX,RDI }
    /* +0x30f8ea */ __asm { IMUL RBX,R9 }
    /* +0x30f8ee */ __asm { CMP R15,R14 }
    /* +0x30f8f1 */ __asm { JZ 0x7fffa4a7f906 }
    /* +0x30f8f3 */ __asm { ADD R14,0x2 }
    /* +0x30f8f7 */ __asm { JMP 0x7fffa4a7f8a6 }
    /* +0x30f8f9 */ __asm { MOV RBX,-0x56ac57fd56f4aa33 }
    /* +0x30f903 */ __asm { XOR R14D,R14D }
    /* +0x30f906 */ __asm { TEST CL,0x1 }
    /* +0x30f909 */ __asm { JZ 0x7fffa4a7f97a }
    /* +0x30f90b */ __asm { MOV ESI,0x83a1f9ab }
    /* +0x30f910 */ __asm { MOV RDI,0x4a8d041d4058e229 }
    /* +0x30f91a */ __asm { MOV R15D,0xfe877624 }
    /* +0x30f920 */ __asm { XOR R15D,0xba17ef0d }
    /* +0x30f927 */ __asm { ADD R15D,0xbb74bed7 }
    /* +0x30f92e */ __asm { MOV ECX,R8D }
    /* +0x30f931 */ __asm { ROR R15D,CL }
    /* +0x30f934 */ __asm { XOR ESI,R10D }
    /* +0x30f937 */ __asm { MOVZX ECX,word ptr [R13 + R14*0x2] }
    /* +0x30f93d */ __asm { LEA R13D,[RCX + -0x41] }
    /* +0x30f941 */ __asm { MOV R12D,ECX }
    /* +0x30f944 */ __asm { OR R12D,0x20 }
    /* +0x30f948 */ __asm { ADD ESI,R8D }
    /* +0x30f94b */ __asm { MOV R14D,0x2bec660c }
    /* +0x30f951 */ __asm { SUB R14D,ESI }
    /* +0x30f954 */ __asm { CMP R13W,0x1a }
    /* +0x30f959 */ __asm { CMOVNC R12D,ECX }
    /* +0x30f95d */ __asm { CMP R14,R15 }
    /* +0x30f960 */ __asm { CMOVZ R12D,ECX }
    /* +0x30f964 */ __asm { MOVZX ECX,R12B }
    /* +0x30f968 */ __asm { XOR RBX,RCX }
    /* +0x30f96b */ __asm { XOR RDI,R10 }
    /* +0x30f96e */ __asm { ROL RDI,0x19 }
    /* +0x30f972 */ __asm { IMUL RDI,R11 }
    /* +0x30f976 */ __asm { IMUL RBX,RDI }
    /* +0x30f97a */ __asm { CMP RBX,RDX }
    /* +0x30f97d */ __asm { SETZ CL }
    /* +0x30f980 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x30f987 */ __asm { MOV ESI,dword ptr [RBP + -0x8] }
    /* +0x30f98a */ __asm { CMP ESI,0x26bd4fb8 }
    /* +0x30f990 */ __asm { JNC 0x7fffa4a7f9bc }
    /* +0x30f992 */ __asm { TEST CL,CL }
    /* +0x30f994 */ __asm { JNZ 0x7fffa4a7f9ca }
    /* +0x30f996 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x30f99d */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x30f9a0 */ __asm { JMP 0x7fffa4a7f81c }
    /* +0x30f9a5 */ __asm { MOV RCX,0x0 }
    /* +0x30f9ac */ __asm { LEA R13,[0x7fffa4770000] }
    /* +0x30f9b3 */ __asm { NOP }
    /* +0x30f9b4 */ __asm { RET }
    /* +0x30f9bc */ __asm { MOV ESI,0xee4d1cec }
    /* +0x30f9c1 */ __asm { JNS 0x7fffa4a7f9fe }
    /* +0x30f9c3 */ __asm { IRETD }
    /* +0x30f9ca */ __asm { MOV R10W,0xc9fb }
    /* +0x30f9cf */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x30f9d6 */ __asm { MOV R8D,ECX }
    /* +0x30f9d9 */ __asm { OR R8D,0x1 }
    /* +0x30f9dd */ __asm { MOV dword ptr [RBP + 0x1298],R8D }
    /* +0x30f9e4 */ __asm { IMUL R10D,R8D }
    /* +0x30f9e8 */ __asm { NOT R10D }
    /* +0x30f9eb */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30f9f2 */ __asm { ROR R10W,CL }
    /* +0x30f9f6 */ __asm { MOVZX R8D,R10W }
    /* +0x30f9fa */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x30f9fe */ __asm { MOV R8,0x432683e3afdf2b29 }
    /* +0x30fa08 */ __asm { CMP RCX,R8 }
    /* +0x30fa0b */ __asm { NOP }
    /* +0x30fa0c */ __asm { NOP }
    /* +0x30fa0d */ __asm { NOP }
    /* +0x30fa0e */ __asm { NOP }
    /* +0x30fa0f */ __asm { NOP }
    /* +0x30fa10 */ __asm { NOP }
    /* +0x30fa11 */ __asm { NOP }
    /* +0x30fa12 */ __asm { NOP }
    /* +0x30fa13 */ __asm { NOP }
    /* +0x30fa14 */ __asm { NOP }
    /* +0x30fa15 */ __asm { NOP }
    /* +0x30fa16 */ __asm { NOP }
    /* +0x30fa17 */ __asm { NOP }
    /* +0x30fa18 */ __asm { NOP }
    /* +0x30fa19 */ __asm { NOP }
    /* +0x30fa1a */ __asm { MOV R10W,0x917d }
    /* +0x30fa1f */ __asm { MOV R8,qword ptr [RBP + 0x11e0] }
    /* +0x30fa26 */ __asm { SUB R8D,R10D }
    /* +0x30fa29 */ __asm { MOV RCX,qword ptr [RAX + 0x30] }
    /* +0x30fa2d */ __asm { MOV R10,qword ptr [RBP + 0x1418] }
    /* +0x30fa34 */ __asm { ADD R10D,R8D }
    /* +0x30fa37 */ __asm { ADD R10D,0xffff843e }
    /* +0x30fa3e */ __asm { MOVZX R8D,R10W }
    /* +0x30fa42 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x30fa46 */ __asm { MOV qword ptr [RBP + 0x11d8],RCX }
    /* +0x30fa4d */ __asm { TEST RCX,RCX }
    /* +0x30fa50 */ __asm { JZ 0x7fffa4a7fc76 }
    /* +0x30fa56 */ __asm { MOV RAX,qword ptr [RBP + 0x11d8] }
    /* +0x30fa5d */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x30fa61 */ __asm { MOV R11D,0xe09f2b92 }
    /* +0x30fa67 */ __asm { ADD R11D,0x1f60d46d }
    /* +0x30fa6e */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x30fa75 */ __asm { ROL R11D,CL }
    /* +0x30fa78 */ __asm { NOT R11D }
    /* +0x30fa7b */ __asm { ADD R8,RAX }
    /* +0x30fa7e */ __asm { CMP R8,R11 }
    /* +0x30fa81 */ __asm { JZ 0x7fffa4a7fc76 }
    /* +0x30fa87 */ __asm { MOV R10W,0x16e4 }
    /* +0x30fa8c */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30fa93 */ __asm { XOR R10D,ECX }
    /* +0x30fa96 */ __asm { MOV R11D,dword ptr [RBP + 0x1298] }
    /* +0x30fa9d */ __asm { IMUL R11D,R10D }
    /* +0x30faa1 */ __asm { ADD R11D,0x2c72 }
    /* +0x30faa8 */ __asm { MOVZX R11D,R11W }
    /* +0x30faac */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x30fab0 */ __asm { MOV R10W,0x53f3 }
    /* +0x30fab5 */ __asm { IMUL R10D,R10D,-0x7605 }
    /* +0x30fabc */ __asm { XOR R10D,dword ptr [RBP + 0x11e0] }
    /* +0x30fac3 */ __asm { ROL R10W,0x4 }
    /* +0x30fac8 */ __asm { ROR R10W,CL }
    /* +0x30facc */ __asm { MOV RAX,qword ptr [RAX + 0xfe8] }
    /* +0x30fad3 */ __asm { MOVZX R11D,R10W }
    /* +0x30fad7 */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x30fadb */ __asm { ADD RAX,qword ptr [RCX + 0x370] }
    /* +0x30fae2 */ __asm { MOV RCX,-0x5d293fd390ef0015 }
    /* +0x30faec */ __asm { CMP RAX,RCX }
    /* +0x30faef */ __asm { NOP }
    /* +0x30faf0 */ __asm { NOP }
    /* +0x30faf1 */ __asm { NOP }
    /* +0x30faf2 */ __asm { NOP }
    /* +0x30faf3 */ __asm { NOP }
    /* +0x30faf4 */ __asm { MOV R10D,0xcc2de99a }
    /* +0x30fafa */ __asm { MOV RBX,qword ptr [RBP + 0x108] }
    /* +0x30fb01 */ __asm { MOV ECX,EBX }
    /* +0x30fb03 */ __asm { MOV R9,qword ptr [RBP + 0x1418] }
    /* +0x30fb0a */ __asm { SUB ECX,R9D }
    /* +0x30fb0d */ __asm { MOV R11D,0x7dd5421b }
    /* +0x30fb13 */ __asm { ADD R10D,ECX }
    /* +0x30fb16 */ __asm { ADD R10D,0x944111b1 }
    /* +0x30fb1d */ __asm { MOVSXD RAX,R10D }
    /* +0x30fb20 */ __asm { MOV R8,qword ptr [R8 + 0x88] }
    /* +0x30fb27 */ __asm { MOV RCX,R8 }
    /* +0x30fb2a */ __asm { SHR RCX,0x20 }
    /* +0x30fb2e */ __asm { SETZ DL }
    /* +0x30fb31 */ __asm { ADD R11D,EBX }
    /* +0x30fb34 */ __asm { NOT R11D }
    /* +0x30fb37 */ __asm { SUB R11D,R9D }
    /* +0x30fb3a */ __asm { MOV R10D,0xffffffff }
    /* +0x30fb40 */ __asm { MOV qword ptr [RBP + 0x1410],R8 }
    /* +0x30fb47 */ __asm { AND R10,R8 }
    /* +0x30fb4a */ __asm { SETZ CL }
    /* +0x30fb4d */ __asm { MOV R9D,ECX }
    /* +0x30fb50 */ __asm { XOR R9B,DL }
    /* +0x30fb53 */ __asm { OR DL,CL }
    /* +0x30fb55 */ __asm { CMP RAX,R11 }
    /* +0x30fb58 */ __asm { MOVZX R8D,R9B }
    /* +0x30fb5c */ __asm { MOVZX R11D,DL }
    /* +0x30fb60 */ __asm { CMOVBE R11D,R8D }
    /* +0x30fb64 */ __asm { TEST R11B,R11B }
    /* +0x30fb67 */ __asm { JNZ 0x7fffa4a7fc95 }
    /* +0x30fb6d */ __asm { TEST dword ptr [RBP + 0x1488],0x100 }
    /* +0x30fb77 */ __asm { NOP }
    /* +0x30fb78 */ __asm { NOP }
    /* +0x30fb79 */ __asm { NOP }
    /* +0x30fb7a */ __asm { NOP }
    /* +0x30fb7b */ __asm { NOP }
    /* +0x30fb7c */ __asm { NOP }
    /* +0x30fb7d */ __asm { NOP }
    /* +0x30fb7e */ __asm { NOP }
    /* +0x30fb7f */ __asm { NOP }
    /* +0x30fb80 */ __asm { MOV dword ptr [RBP + -0x8],0xaa54569c }
    /* +0x30fb87 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30fb8b */ __asm { MOV R11W,0x3c34 }
    /* +0x30fb90 */ __asm { XOR R11D,0x31ab }
    /* +0x30fb97 */ __asm { SUB R11D,dword ptr [RBP + 0x1418] }
    /* +0x30fb9e */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30fba5 */ __asm { MOV R9D,EAX }
    /* +0x30fba8 */ __asm { XOR R9D,R11D }
    /* +0x30fbab */ __asm { IMUL R11D,R9D,0x579b }
    /* +0x30fbb2 */ __asm { MOVZX R11D,R11W }
    /* +0x30fbb6 */ __asm { CMP R8D,R11D }
    /* +0x30fbb9 */ __asm { NOP }
    /* +0x30fbba */ __asm { NOP }
    /* +0x30fbbb */ __asm { NOP }
    /* +0x30fbbc */ __asm { NOP }
    /* +0x30fbbd */ __asm { NOP }
    /* +0x30fbbe */ __asm { MOV RAX,qword ptr [RBP + 0x11d8] }
    /* +0x30fbc5 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x1c],0x0 }
    /* +0x30fbcb */ __asm { JZ 0x7fffa4a7fc8a }
    /* +0x30fbd1 */ __asm { MOV RAX,qword ptr [RBP + 0x11d8] }
    /* +0x30fbd8 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x20],0x0 }
    /* +0x30fbde */ __asm { JZ 0x7fffa4a7fc8a }
    /* +0x30fbe4 */ __asm { MOV RAX,qword ptr [RBP + 0x11d8] }
    /* +0x30fbeb */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x24],0x0 }
    /* +0x30fbf1 */ __asm { JZ 0x7fffa4a7fc8a }
    /* +0x30fbf7 */ __asm { MOV dword ptr [RBP + -0x8],0xb1676a98 }
    /* +0x30fbfe */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30fc02 */ __asm { MOV RAX,qword ptr [RBP + 0x11d8] }
    /* +0x30fc09 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x1c] }
    /* +0x30fc0e */ __asm { ADD R8,RAX }
    /* +0x30fc11 */ __asm { MOV qword ptr [RBP + 0x150],R8 }
    /* +0x30fc18 */ __asm { MOV dword ptr [RBP + -0x8],0x5d52e0ba }
    /* +0x30fc1f */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30fc23 */ __asm { CMP R8D,0xb5807139 }
    /* +0x30fc2a */ __asm { NOP }
    /* +0x30fc2b */ __asm { NOP }
    /* +0x30fc2c */ __asm { NOP }
    /* +0x30fc2d */ __asm { NOP }
    /* +0x30fc2e */ __asm { NOP }
    /* +0x30fc2f */ __asm { MOV RAX,qword ptr [RBP + 0x11d8] }
    /* +0x30fc36 */ __asm { MOV ESI,dword ptr [RAX + R10*0x1 + 0x20] }
    /* +0x30fc3b */ __asm { ADD RSI,RAX }
    /* +0x30fc3e */ __asm { MOV dword ptr [RBP + -0x8],0x7c0c5dd9 }
    /* +0x30fc45 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30fc49 */ __asm { MOV R15D,dword ptr [RAX + R10*0x1 + 0x24] }
    /* +0x30fc4e */ __asm { ADD R15,RAX }
    /* +0x30fc51 */ __asm { MOV dword ptr [RBP + -0x8],0x8645c168 }
    /* +0x30fc58 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x30fc5c */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x10] }
    /* +0x30fc61 */ __asm { MOV qword ptr [RBP + 0x1318],R8 }
    /* +0x30fc68 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x18] }
    /* +0x30fc6d */ __asm { MOV qword ptr [RBP + 0x1498],R8 }
    /* +0x30fc74 */ __asm { JMP 0x7fffa4a7fca7 }
    /* +0x30fc76 */ __asm { MOV qword ptr [RBP + 0x1498],0x0 }
    /* +0x30fc81 */ __asm { MOV qword ptr [RBP + 0x1318],RAX }
    /* +0x30fc88 */ __asm { JMP 0x7fffa4a7fca7 }
    /* +0x30fc8a */ __asm { MOV dword ptr [RBP + -0x8],0x49080108 }
    /* +0x30fc91 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x30fc95 */ __asm { MOV qword ptr [RBP + 0x1498],0x0 }
    /* +0x30fca0 */ __asm { MOV qword ptr [RBP + 0x1318],RAX }
    /* +0x30fca7 */ __asm { MOV R8,qword ptr [RBP + 0x1410] }
    /* +0x30fcae */ __asm { MOV RBX,R8 }
    /* +0x30fcb1 */ __asm { SHR RBX,0x20 }
    /* +0x30fcb5 */ __asm { ADD EBX,R8D }
    /* +0x30fcb8 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x30fcbf */ __asm { MOV R10D,EAX }
    /* +0x30fcc2 */ __asm { SUB R10D,dword ptr [RBP + 0x1418] }
    /* +0x30fcc9 */ __asm { MOV dword ptr [RBP + 0x1228],R10D }
    /* +0x30fcd0 */ __asm { XOR R14D,R14D }
    /* +0x30fcd3 */ __asm { MOV qword ptr [RBP + 0x1c0],0x0 }
    /* +0x30fcde */ __asm { JMP 0x7fffa4a7fd68 }
    /* +0x30fce3 */ __asm { MOV R10W,0xc9b2 }
    /* +0x30fce8 */ __asm { OR R8D,0x1 }
    /* +0x30fcec */ __asm { IMUL R10D,R8D }
    /* +0x30fcf0 */ __asm { SUB R10D,dword ptr [RBP + 0x1418] }
    /* +0x30fcf7 */ __asm { ADD R10D,0xffff8bbc }
    /* +0x30fcfe */ __asm { IMUL R10D,dword ptr [RBP + 0x1298] }
    /* +0x30fd06 */ __asm { MOVZX R11D,R10W }
    /* +0x30fd0a */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x30fd0e */ __asm { MOV RAX,qword ptr [RAX + 0xc00] }
    /* +0x30fd15 */ __asm { MOV R10W,0x6007 }
    /* +0x30fd1a */ __asm { ADD R10D,0xffff9ebc }
    /* +0x30fd21 */ __asm { IMUL R10D,R8D }
    /* +0x30fd25 */ __asm { ROL R10W,0x8 }
    /* +0x30fd2a */ __asm { ADD R10D,dword ptr [RBP + 0x1228] }
    /* +0x30fd31 */ __asm { MOVZX R8D,R10W }
    /* +0x30fd35 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x30fd39 */ __asm { MOV R8D,0x6a8 }
    /* +0x30fd3f */ __asm { ADD RCX,R8 }
    /* +0x30fd42 */ __asm { IMUL RCX,RAX }
    /* +0x30fd46 */ __asm { MOV RAX,0x1b967edfdccb6d1b }
    /* +0x30fd50 */ __asm { CMP RCX,RAX }
    /* +0x30fd53 */ __asm { JZ 0x7fffa4a7ffff }
    /* +0x30fd59 */ __asm { XOR R8D,R8D }
    /* +0x30fd5c */ __asm { INC R14 }
    /* +0x30fd5f */ __asm { TEST R8,R8 }
    /* +0x30fd62 */ __asm { JNZ 0x7fffa4a81912 }
    /* +0x30fd68 */ __asm { CMP R14,qword ptr [RBP + 0x1498] }
    /* +0x30fd6f */ __asm { JZ 0x7fffa4a8000a }
    /* +0x30fd75 */ __asm { MOV R10D,0x9ef49a01 }
    /* +0x30fd7b */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x30fd82 */ __asm { XOR R10D,R11D }
    /* +0x30fd85 */ __asm { ADD R10D,dword ptr [RBP + 0x108] }
    /* +0x30fd8c */ __asm { ROL R10D,0x6 }
    /* +0x30fd90 */ __asm { MOVSXD RAX,R10D }
    /* +0x30fd93 */ __asm { MOV R8D,0x55ae6bd0 }
    /* +0x30fd99 */ __asm { XOR R8D,0x541954e5 }
    /* +0x30fda0 */ __asm { ROL R8D,0x7 }
    /* +0x30fda4 */ __asm { NOT R8D }
    /* +0x30fda7 */ __asm { ADD R8D,R11D }
    /* +0x30fdaa */ __asm { CMP R8,RAX }
    /* +0x30fdad */ __asm { JC 0x7fffa4a7fe05 }
    /* +0x30fdaf */ __asm { MOV R8D,0x51b9d01b }
    /* +0x30fdb5 */ __asm { NOT R8D }
    /* +0x30fdb8 */ __asm { MOV R10,qword ptr [RBP + 0x108] }
    /* +0x30fdbf */ __asm { ADD R8D,R10D }
    /* +0x30fdc2 */ __asm { ADD R8D,0x7e95d559 }
    /* +0x30fdc9 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x30fdd0 */ __asm { ROR R8D,CL }
    /* +0x30fdd3 */ __asm { MOV R10D,dword ptr [RSI + R14*0x4] }
    /* +0x30fdd7 */ __asm { MOVZX ECX,word ptr [R15 + R14*0x2] }
    /* +0x30fddc */ __asm { MOV R9,qword ptr [RBP + 0x1318] }
    /* +0x30fde3 */ __asm { LEA R11D,[RCX + R9*0x1] }
    /* +0x30fde7 */ __asm { MOV dword ptr [RBP + 0x8],R11D }
    /* +0x30fdeb */ __asm { MOV RAX,qword ptr [RBP + 0x150] }
    /* +0x30fdf2 */ __asm { MOV R11D,dword ptr [RAX + RCX*0x4] }
    /* +0x30fdf6 */ __asm { MOV RAX,R11 }
    /* +0x30fdf9 */ __asm { ADD RAX,qword ptr [RBP + 0x11d8] }
    /* +0x30fe00 */ __asm { JMP 0x7fffa4a7fe87 }
    /* +0x30fe05 */ __asm { MOV R10D,0xa09e86d8 }
    /* +0x30fe0b */ __asm { IMUL R10D,dword ptr [RBP + 0x104] }
    /* +0x30fe13 */ __asm { XOR R10D,0xd398d931 }
    /* +0x30fe1a */ __asm { MOV RDI,qword ptr [RBP + 0x108] }
    /* +0x30fe21 */ __asm { MOV ECX,EDI }
    /* +0x30fe23 */ __asm { ROL R10D,CL }
    /* +0x30fe26 */ __asm { MOV R11D,0xa53edce1 }
    /* +0x30fe2c */ __asm { ADD R11D,EDI }
    /* +0x30fe2f */ __asm { MOV R8D,0x111ba8e1 }
    /* +0x30fe35 */ __asm { SUB R8D,R11D }
    /* +0x30fe38 */ __asm { MOVSXD R9,R10D }
    /* +0x30fe3b */ __asm { MOV EDX,0x6942b32e }
    /* +0x30fe40 */ __asm { MOV R10D,dword ptr [RSI + R14*0x4] }
    /* +0x30fe44 */ __asm { MOVZX ECX,word ptr [R15 + R14*0x2] }
    /* +0x30fe49 */ __asm { MOV RAX,qword ptr [RBP + 0x150] }
    /* +0x30fe50 */ __asm { MOV R11D,dword ptr [RAX + RCX*0x4] }
    /* +0x30fe54 */ __asm { MOV R12,qword ptr [RBP + 0x11d8] }
    /* +0x30fe5b */ __asm { MOV R13D,R12D }
    /* +0x30fe5e */ __asm { AND R13D,R11D }
    /* +0x30fe61 */ __asm { ADD ECX,dword ptr [RBP + 0x1318] }
    /* +0x30fe67 */ __asm { MOV dword ptr [RBP + 0x8],ECX }
    /* +0x30fe6a */ __asm { MOV RAX,R11 }
    /* +0x30fe6d */ __asm { ADD RAX,R12 }
    /* +0x30fe70 */ __asm { XOR EDX,0xc6ee149 }
    /* +0x30fe76 */ __asm { MOV ECX,EDI }
    /* +0x30fe78 */ __asm { ROL EDX,CL }
    /* +0x30fe7a */ __asm { ADD EDX,0xc0000094 }
    /* +0x30fe80 */ __asm { CMP R9,RDX }
    /* +0x30fe83 */ __asm { CMOVGE RAX,R13 }
    /* +0x30fe87 */ __asm { MOV ECX,R10D }
    /* +0x30fe8a */ __asm { CMP R11D,EBX }
    /* +0x30fe8d */ __asm { SETC DL }
    /* +0x30fe90 */ __asm { ADD RCX,qword ptr [RBP + 0x11d8] }
    /* +0x30fe97 */ __asm { TEST R10D,R10D }
    /* +0x30fe9a */ __asm { MOV qword ptr [RBP + -0x8],RAX }
    /* +0x30fe9e */ __asm { MOV R9D,0x0 }
}


// ============================================================================
// Function : Unwind@7fffa4a81a60  |  RVA: 0x311a60  |  Size: 245 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a81a60(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)
                      (int)~((int)*(uint64_t *)(param_2 + 0x188) *
                            ((uint32_t)*(uint64_t *)(param_2 + 0x1498) ^ 0xd4a0c51c)) + 0x7fffa569407f
                     );
    (*pcVar1)(pcVar1,*(uint64_t *)(param_2 + 0x1498),
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a81b60  |  RVA: 0x311b60  |  Size: 242 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a81b60(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
    pcVar2 = (code *)((int64_t)(short)(0x757fU >> bVar1 | 0x757f << 0x10 - bVar1) + 0x7fffa5689ed1)
    ;
    (*pcVar2)(pcVar2,param_2,
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a81c60  |  RVA: 0x311c60  |  Size: 1095 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a81c60(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  short sVar7;
  int64_t *plVar8;
  uint32_t uVar9;
  int iVar10;
  uint16_t uVar11;
  uint16_t uVar12;
  uint32_t uVar13;
  int iVar14;
  uint16_t uVar15;
  uint16_t uVar16;
  int iVar17;
  uint32_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint8_t in_AF;
  bool bVar21;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  
  if (*(int64_t *)(param_2 + 0x1e8) != 0) {
    uVar9 = (uint32_t)*(uint64_t *)(param_2 + 0x1258);
    uVar13 = uVar9 ^ 0xbdfbcc4b;
    *(uint64_t *)(param_2 + 0x1260) = 0x7fffa47c2cb3;
    iVar10 = (int)*(uint64_t *)(param_2 + 0x1348);
    iVar17 = (int)*(uint64_t *)(param_2 + 0x1508);
    iVar14 = iVar10 - iVar17;
    uVar9 = uVar9 + 0x2d82;
    sVar7 = (short)*(uint64_t *)(param_2 + 0x1508);
    uVar1 = *(uint64_t *)(param_2 + 0x1498);
    *(int *)(param_2 + 0x188) = iVar14;
    uVar13 = (uVar13 << 0xc | uVar13 >> 0x14) + iVar14;
    bVar5 = (uint8_t)uVar1 & 0x1f;
    uVar18 = ~(*(int *)(param_2 + 0x184) * -0xb89f02d);
    bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x1258);
    bVar6 = bVar4 & 0x1f;
    uVar18 = (uVar18 << bVar6 | uVar18 >> 0x20 - bVar6) * -0x3606fe71;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x1348);
    bVar6 = bVar3 & 0x1f;
    bVar6 = *(uint8_t *)((int64_t)(int)~(uVar18 >> bVar6 | uVar18 << 0x20 - bVar6) + 0x7fffa47c701b);
    uVar18 = iVar17 + 0x1463959a;
    uVar15 = 0x1304 - sVar7;
    bVar3 = bVar3 & 0xf;
    uVar15 = ~(uVar15 << bVar3 | uVar15 >> 0x10 - bVar3);
    bVar4 = bVar4 & 0xf;
    uVar19 = (uint64_t)bVar6;
    if ((~(uVar18 * 4 | uVar18 >> 0x1e) + iVar10) - (int)uVar1 <=
        (uVar13 << bVar5 | uVar13 >> 0x20 - bVar5) + 0xb07e06e2) {
      uVar19 = (int64_t)(char)bVar6;
    }
    *(uint64_t *)(param_2 + 0x78) =
         *(uint64_t *)
          ((int64_t)
           (short)((uint16_t)uVar1 ^
                  (~((uint16_t)uVar9 >> 1 | (uint16_t)((uVar9 & 1) != 0) << 0xf) - sVar7) * 0x841) +
          0x7fffa47bce6f) ^
         *(uint64_t *)
          ((int64_t)(short)(uVar15 << bVar4 | uVar15 >> 0x10 - bVar4) +
           *(int64_t *)(param_2 + 0x1260) + 0x13 + uVar19 * 8) ^ 0xffffffffffffffff;
    if (*(code **)(param_2 + 0x78) == (code *)0x0) {
      uVar15 = (short)*(uint64_t *)(param_2 + 0x1348) + 0x4d43U ^ 0x1cbb;
      bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0x1258);
      bVar3 = bVar6 & 0xf;
      uVar15 = (uVar15 >> bVar3 | uVar15 << 0x10 - bVar3) + (short)*(uint32_t *)(param_2 + 0x1508)
      ;
      bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
      uVar16 = uVar15 >> bVar3 | uVar15 << 0x10 - bVar3;
      uVar15 = (short)*(uint64_t *)(param_2 + 0x1398) * 0x791f +
               (short)*(uint64_t *)(param_2 + 0x1498);
      bVar6 = bVar6 & 0xf;
      uVar19 = *(uint64_t *)
                (*(int64_t *)
                  ((uint64_t)
                   (((uint32_t)(uint16_t)(uVar15 << bVar6 | uVar15 >> 0x10 - bVar6) ^
                    (uint32_t)*(uint64_t *)(param_2 + 0x1348)) * 0x1595 & 0xffff) + 0xff00000000) +
                0x60);
      uVar20 = uVar19 + 0xf9218a1aac722b69;
      lVar2 = *(int64_t *)
               (*(int64_t *)((uint64_t)(uint16_t)(uVar16 << 0xc | uVar16 >> 4) + 0xff00000000) +
               0x18);
      *(uint64_t *)(param_2 + 0x1330) =
           (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)SBORROW8(uVar19,0x6de75e5538dd497) * 0x800 |
           (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
           (uint64_t)((int64_t)uVar20 < 0) * 0x80 | (uint64_t)(uVar20 == 0) * 0x40 |
           (uint64_t)(in_AF & 1) * 0x10 | (uint64_t)((POPCOUNT(uVar20 & 0xff) & 1U) == 0) * 4 |
           (uint64_t)(uVar19 < 0x6de75e5538dd497) | (uint64_t)(in_ID & 1) * 0x200000 |
           (uint64_t)(in_VIP & 1) * 0x100000 | (uint64_t)(in_VIF & 1) * 0x80000 |
           (uint64_t)(in_AC & 1) * 0x40000;
      *(uint32_t *)(param_2 + 0x78) = 0x656c32dd;
      plVar8 = (int64_t *)(lVar2 + 0x10);
      while( true ) {
        plVar8 = (int64_t *)*plVar8;
        uVar9 = 0x2c27cc42 - *(int *)(param_2 + 0x1508);
        bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0x1348) & 0x1f;
        *(uint32_t *)(param_2 + 0x78) =
             (uVar9 << bVar6 | uVar9 >> 0x20 - bVar6) +
             ((int)*(uint64_t *)(param_2 + 0x1258) - *(int *)(param_2 + 0x1498));
        if (*(uint32_t *)(param_2 + 0x78) < 0xfcebf0f5) {
          return;
        }
        bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
        uVar15 = (0xf0b8U >> bVar6 | -0xf48 << 0x10 - bVar6) -
                 (short)*(uint32_t *)(param_2 + 0x1348);
        bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0x1258) & 0xf;
        uVar15 = uVar15 >> bVar6 | uVar15 << 0x10 - bVar6;
        bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0x1508) & 0xf;
        if (*(uint16_t *)(plVar8 + 0xb) <
            (uint16_t)((uVar15 << bVar6 | uVar15 >> 0x10 - bVar6) * -0x44db)) {
          bVar21 = false;
        }
        else {
          uVar15 = *(uint16_t *)(plVar8 + 0xb) >> 1;
          lVar2 = plVar8[0xc];
          if (uVar15 == 1) {
            uVar19 = 0xa953a802a90b55cd;
            uVar20 = 0;
          }
          else {
            uVar19 = 0xa953a802a90b55cd;
            uVar20 = 0;
            do {
              uVar16 = *(uint16_t *)(lVar2 + uVar20 * 2);
              uVar11 = *(uint16_t *)(lVar2 + 2 + uVar20 * 2);
              uVar20 = uVar20 + 2;
              uVar12 = uVar11 | 0x20;
              if (0x19 < (uint16_t)(uVar11 - 0x41)) {
                uVar12 = uVar11;
              }
              uVar11 = uVar16 | 0x20;
              if (0x19 < (uint16_t)(uVar16 - 0x41)) {
                uVar11 = uVar16;
              }
              uVar19 = (((uint8_t)uVar11 ^ uVar19) * 0x10000000014b ^ (uint64_t)(uint8_t)uVar12) *
                       0x10000000014b;
            } while ((uVar15 & 0xfffffffe) != uVar20);
          }
          if ((uVar15 & 1) != 0) {
            uVar15 = *(uint16_t *)(lVar2 + uVar20 * 2);
            uVar16 = uVar15 | 0x20;
            if (0x19 < (uint16_t)(uVar15 - 0x41)) {
              uVar16 = uVar15;
            }
            uVar19 = (uVar19 ^ (uint8_t)uVar16) * 0x10000000014b;
          }
          bVar21 = uVar19 == 0x39cda41577e4d47d;
        }
        uVar9 = 0x28700c28 - (*(uint32_t *)(param_2 + 0x1258) ^ 0x47be3191) ^
                *(uint32_t *)(param_2 + 0x1348);
        bVar6 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
        *(uint32_t *)(param_2 + 0x78) = uVar9 >> bVar6 | uVar9 << 0x20 - bVar6;
        if ((0x26bd4fb7 < *(uint32_t *)(param_2 + 0x78)) || (bVar21)) break;
        *(uint32_t *)(param_2 + 0x78) = 0xb7a0a379;
      }
      return;
    }
    (**(code **)(param_2 + 0x78))(*(uint64_t *)(param_2 + 0x1e8));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a84100  |  RVA: 0x314100  |  Size: 277 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a84100(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)(short)~((short)*(uint64_t *)(param_2 + 0x1498) + 0x73bdU) +
                     0x7fffa568a340);
    (*pcVar1)(pcVar1,*(uint64_t *)(param_2 + 0x1498),
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  *(uint64_t *)(param_2 + 0x268) = 7;
  *(uint16_t *)(param_2 + 0x250) = 0;
  *(uint64_t *)(param_2 + 0x260) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a84220  |  RVA: 0x314220  |  Size: 270 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a84220(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  code *pcVar3;
  uint16_t uVar4;
  int iVar5;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar1 = *(uint64_t *)(param_2 + 0x250);
    iVar5 = (int)CONCAT62((int6)(uVar1 >> 0x10),0x8cdd) * -0x382f + -0x7883;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
    uVar4 = (uint16_t)iVar5;
    iVar5 = CONCAT22((short)((uint32_t)iVar5 >> 0x10),uVar4 << bVar2 | uVar4 >> 0x10 - bVar2) *
            ((uint32_t)*(uint64_t *)(param_2 + 0x1260) | 1);
    pcVar3 = (code *)((int64_t)(short)iVar5 + 0x7fffa568ec91);
    (*pcVar3)(pcVar3,iVar5,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a84330  |  RVA: 0x314330  |  Size: 1024 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a84330(void) {
    /* +0x314330 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x314335 */ __asm { PUSH RBP }
    /* +0x314336 */ __asm { PUSH RSI }
    /* +0x314337 */ __asm { PUSH RBX }
    /* +0x314338 */ __asm { PUSH RDI }
    /* +0x314339 */ __asm { PUSH R12 }
    /* +0x31433b */ __asm { PUSH R13 }
    /* +0x31433d */ __asm { PUSH R15 }
    /* +0x31433f */ __asm { PUSH R14 }
    /* +0x314341 */ __asm { SUB RSP,0xc8 }
    /* +0x314348 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x31434f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x314356 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x31435c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x314366 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x314370 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x31437a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x314383 */ __asm { CMP qword ptr [RBP + 0x12e8],0x0 }
    /* +0x31438b */ __asm { JZ 0x7fffa4a84454 }
    /* +0x314391 */ __asm { MOV R10W,0x612 }
    /* +0x314396 */ __asm { LEA RDX,[0x7fffa47bdbf1] }
    /* +0x31439d */ __asm { MOV R8W,0x542b }
    /* +0x3143a2 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x3143a9 */ __asm { ADD R8D,ECX }
    /* +0x3143ac */ __asm { IMUL R11D,R8D,0x6dab }
    /* +0x3143b3 */ __asm { LEA RAX,[0x7fffa47c08fa] }
    /* +0x3143ba */ __asm { ADD R10D,ECX }
    /* +0x3143bd */ __asm { ROL R10W,0x1 }
    /* +0x3143c1 */ __asm { XOR R10D,dword ptr [RBP + 0x1488] }
    /* +0x3143c8 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x3143cf */ __asm { SUB R10D,ECX }
    /* +0x3143d2 */ __asm { LEA R8,[0x7fffa47c8a3a] }
    /* +0x3143d9 */ __asm { ROL R11W,0x1 }
    /* +0x3143dd */ __asm { ROL R10W,0x7 }
    /* +0x3143e2 */ __asm { XOR R11D,ECX }
    /* +0x3143e5 */ __asm { NOT R11D }
    /* +0x3143e8 */ __asm { MOVSX R9,R11W }
    /* +0x3143ec */ __asm { MOVZX R9D,uint8_t ptr [RDX + R9*0x1 + 0x9] }
    /* +0x3143f2 */ __asm { MOV R11D,0xd5a02a6 }
    /* +0x3143f8 */ __asm { XOR R11D,0xc715829f }
    /* +0x3143ff */ __asm { MOV RDX,qword ptr [RBP + 0x1498] }
    /* +0x314406 */ __asm { ADD R11D,EDX }
    /* +0x314409 */ __asm { ADD R11D,0x744fb077 }
    /* +0x314410 */ __asm { ROR R11D,CL }
    /* +0x314413 */ __asm { MOVSX R10,R10W }
    /* +0x314417 */ __asm { IMUL R11D,dword ptr [RBP + 0x1410] }
    /* +0x31441f */ __asm { MOVSXD RCX,R11D }
    /* +0x314422 */ __asm { ADD RCX,R8 }
    /* +0x314425 */ __asm { MOV RCX,qword ptr [RCX + R9*0x8 + 0x13] }
    /* +0x31442a */ __asm { XOR RCX,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x31442f */ __asm { MOVQ XMM2,RCX }
    /* +0x314434 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x314438 */ __asm { PXOR XMM4,XMM2 }
    /* +0x31443c */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x314441 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x314445 */ __asm { TEST R8,R8 }
    /* +0x314448 */ __asm { JZ 0x7fffa4a8449c }
    /* +0x31444a */ __asm { MOV RCX,qword ptr [RBP + 0x12e8] }
    /* +0x314451 */ __asm { CALL R8 }
    /* +0x314454 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x31445d */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x314467 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x314471 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x31447b */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x314481 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x314488 */ __asm { ADD RSP,0xc8 }
    /* +0x31448f */ __asm { POP R14 }
    /* +0x314491 */ __asm { POP R15 }
    /* +0x314493 */ __asm { POP R13 }
    /* +0x314495 */ __asm { POP R12 }
    /* +0x314497 */ __asm { POP RDI }
    /* +0x314498 */ __asm { POP RBX }
    /* +0x314499 */ __asm { POP RSI }
    /* +0x31449a */ __asm { POP RBP }
    /* +0x31449b */ __asm { RET }
    /* +0x31449c */ __asm { MOV R10W,0x795e }
    /* +0x3144a1 */ __asm { MOV R9,qword ptr [RBP + 0x110] }
    /* +0x3144a8 */ __asm { SUB R10D,R9D }
    /* +0x3144ab */ __asm { MOV RDX,qword ptr [RBP + 0x11e0] }
    /* +0x3144b2 */ __asm { MOV R8D,EDX }
    /* +0x3144b5 */ __asm { XOR R8D,R10D }
    /* +0x3144b8 */ __asm { ROL R8W,0xc }
    /* +0x3144bd */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x3144c4 */ __asm { SUB R8D,R11D }
    /* +0x3144c7 */ __asm { MOVZX R8D,R8W }
    /* +0x3144cb */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x3144cf */ __asm { MOV R10W,0xe317 }
    /* +0x3144d4 */ __asm { MOV RCX,qword ptr [RBP + 0x1400] }
    /* +0x3144db */ __asm { MOV R8D,ECX }
    /* +0x3144de */ __asm { IMUL R8D,R10D }
    /* +0x3144e2 */ __asm { ROL R8W,0x3 }
    /* +0x3144e7 */ __asm { MOV R10D,0xffffac0d }
    /* +0x3144ed */ __asm { SUB R10D,R8D }
    /* +0x3144f0 */ __asm { MOV ECX,R9D }
    /* +0x3144f3 */ __asm { ROR R10W,CL }
    /* +0x3144f7 */ __asm { MOVZX R8D,R10W }
    /* +0x3144fb */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x3144ff */ __asm { MOV R10D,0x37f5d3e8 }
    /* +0x314505 */ __asm { ADD R10D,R11D }
    /* +0x314508 */ __asm { MOV R8,qword ptr [RCX + 0x60] }
    /* +0x31450c */ __asm { ROL R8,0x15 }
    /* +0x314510 */ __asm { ROL R10D,0x16 }
    /* +0x314514 */ __asm { MOV ECX,EDX }
    /* +0x314516 */ __asm { ROL R10D,CL }
    /* +0x314519 */ __asm { NOT R10D }
    /* +0x31451c */ __asm { ADD R10D,dword ptr [RBP + 0x1318] }
    /* +0x314523 */ __asm { MOVSXD RCX,R10D }
    /* +0x314526 */ __asm { XOR RCX,R8 }
    /* +0x314529 */ __asm { MOV R8,0x43558e450880649d }
    /* +0x314533 */ __asm { CMP RCX,R8 }
    /* +0x314536 */ __asm { NOP }
    /* +0x314537 */ __asm { NOP }
    /* +0x314538 */ __asm { NOP }
    /* +0x314539 */ __asm { NOP }
    /* +0x31453a */ __asm { NOP }
    /* +0x31453b */ __asm { PUSHFQ }
    /* +0x31453c */ __asm { POP R8 }
    /* +0x31453e */ __asm { AND R8D,0x100 }
    /* +0x314545 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x314549 */ __asm { MOV R11D,0x428f4dcd }
    /* +0x31454f */ __asm { NOT R11D }
    /* +0x314552 */ __asm { ADD R11D,dword ptr [RBP + 0x110] }
    /* +0x314559 */ __asm { ROL R11D,0x5 }
    /* +0x31455d */ __asm { XOR R11D,dword ptr [RBP + 0x11e0] }
    /* +0x314564 */ __asm { MOV qword ptr [RBP + 0x18],R8 }
    /* +0x314568 */ __asm { MOV qword ptr [RBP + 0xd0],R11 }
    /* +0x31456f */ __asm { CMP R8,R11 }
    /* +0x314572 */ __asm { NOP }
    /* +0x314573 */ __asm { NOP }
    /* +0x314574 */ __asm { NOP }
    /* +0x314575 */ __asm { NOP }
    /* +0x314576 */ __asm { NOP }
    /* +0x314577 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x31457e */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x314582 */ __asm { TEST R10D,R10D }
    /* +0x314585 */ __asm { NOP }
    /* +0x314586 */ __asm { NOP }
    /* +0x314587 */ __asm { NOP }
    /* +0x314588 */ __asm { NOP }
    /* +0x314589 */ __asm { NOP }
    /* +0x31458a */ __asm { MOV R11,0x0 }
    /* +0x314591 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x314598 */ __asm { NOP }
    /* +0x314599 */ __asm { ADD RAX,0x10 }
    /* +0x31459d */ __asm { MOV RCX,-0x56ac57fd56f4aa33 }
    /* +0x3145a7 */ __asm { MOV R8,-0x63192df52f40fb9a }
    /* +0x3145b1 */ __asm { MOV R9,0x10000000014b }
    /* +0x3145bb */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x3145be */ __asm { PUSHFQ }
    /* +0x3145bf */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x3145c7 */ __asm { POPFQ }
    /* +0x3145c8 */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x3145cf */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x3145d3 */ __asm { CMP R10D,0xfcebf0f4 }
    /* +0x3145da */ __asm { JBE 0x7fffa4a8470a }
    /* +0x3145e0 */ __asm { NOP }
    /* +0x3145e1 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x3145e8 */ __asm { MOV R11,0x0 }
    /* +0x3145ef */ __asm { MOVZX EDX,word ptr [RAX + 0x58] }
    /* +0x3145f3 */ __asm { CMP EDX,0x2 }
    /* +0x3145f6 */ __asm { JC 0x7fffa4a84655 }
    /* +0x3145f8 */ __asm { MOV R11,qword ptr [RAX + 0x60] }
    /* +0x3145fc */ __asm { SHR EDX,0x1 }
    /* +0x3145fe */ __asm { CMP DX,0x1 }
    /* +0x314602 */ __asm { JNZ 0x7fffa4a84689 }
    /* +0x314608 */ __asm { MOV R10,RCX }
    /* +0x31460b */ __asm { XOR R14D,R14D }
    /* +0x31460e */ __asm { TEST DL,0x1 }
    /* +0x314611 */ __asm { JZ 0x7fffa4a84638 }
    /* +0x314613 */ __asm { MOVZX R11D,word ptr [R11 + R14*0x2] }
    /* +0x314618 */ __asm { MOV EDX,R11D }
    /* +0x31461b */ __asm { OR EDX,0x20 }
    /* +0x31461e */ __asm { LEA ESI,[R11 + -0x41] }
    /* +0x314622 */ __asm { CMP SI,0x1a }
    /* +0x314626 */ __asm { CMOVNC EDX,R11D }
    /* +0x31462a */ __asm { MOVZX R11D,DL }
    /* +0x31462e */ __asm { XOR R11,R10 }
    /* +0x314631 */ __asm { IMUL R11,R9 }
    /* +0x314635 */ __asm { MOV R10,R11 }
    /* +0x314638 */ __asm { MOV R11,R8 }
    /* +0x31463b */ __asm { XOR R11,qword ptr [RBP + 0x1488] }
    /* +0x314642 */ __asm { ADD R11,-0x36491b8e }
    /* +0x314649 */ __asm { ROL R11,0x1 }
    /* +0x31464c */ __asm { CMP R10,R11 }
    /* +0x31464f */ __asm { SETZ R10B }
    /* +0x314653 */ __asm { JMP 0x7fffa4a84658 }
    /* +0x314655 */ __asm { XOR R10D,R10D }
    /* +0x314658 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x31465f */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x314663 */ __asm { CMP R11D,0x26bd4fb8 }
    /* +0x31466a */ __asm { JNC 0x7fffa4a84712 }
    /* +0x314670 */ __asm { TEST R10B,R10B }
    /* +0x314673 */ __asm { JNZ 0x7fffa4a84734 }
    /* +0x314679 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x314680 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x314684 */ __asm { JMP 0x7fffa4a845bb }
    /* +0x314689 */ __asm { MOV EBX,EDX }
    /* +0x31468b */ __asm { AND EBX,0xfffffffe }
    /* +0x31468e */ __asm { MOV R10,RCX }
    /* +0x314691 */ __asm { XOR R14D,R14D }
    /* +0x314694 */ __asm { JMP 0x7fffa4a846b9 }
    /* +0x314696 */ __asm { MOVZX EDI,SIL }
    /* +0x31469a */ __asm { MOVZX R15D,R15B }
    /* +0x31469e */ __asm { XOR R10,R15 }
    /* +0x3146a1 */ __asm { ADD R14,0x2 }
    /* +0x3146a5 */ __asm { IMUL R10,R9 }
    /* +0x3146a9 */ __asm { XOR R10,RDI }
    /* +0x3146ac */ __asm { IMUL R10,R9 }
    /* +0x3146b0 */ __asm { CMP RBX,R14 }
    /* +0x3146b3 */ __asm { JZ 0x7fffa4a8460e }
    /* +0x3146b9 */ __asm { MOVZX R15D,word ptr [R11 + R14*0x2] }
    /* +0x3146be */ __asm { MOV SI,0x3d28 }
    /* +0x3146c2 */ __asm { XOR ESI,dword ptr [RBP + 0x1418] }
    /* +0x3146c8 */ __asm { MOV R13,qword ptr [RBP + 0x1498] }
    /* +0x3146cf */ __asm { OR R13D,0x1 }
    /* +0x3146d3 */ __asm { IMUL R13D,ESI }
    /* +0x3146d7 */ __asm { ADD R13D,dword ptr [RBP + 0x11e0] }
    /* +0x3146de */ __asm { ROL R13W,0x6 }
    /* +0x3146e3 */ __asm { MOVZX EDI,word ptr [R11 + R14*0x2 + 0x2] }
    /* +0x3146e9 */ __asm { MOV ESI,EDI }
    /* +0x3146eb */ __asm { OR ESI,0x20 }
    /* +0x3146ee */ __asm { LEA R12D,[RDI + -0x41] }
    /* +0x3146f2 */ __asm { CMP R12W,0x1a }
    /* +0x3146f7 */ __asm { CMOVNC ESI,EDI }
    /* +0x3146fa */ __asm { LEA EDI,[R15 + -0x41] }
    /* +0x3146fe */ __asm { CMP DI,R13W }
    /* +0x314702 */ __asm { JNC 0x7fffa4a84696 }
    /* +0x314704 */ __asm { OR R15D,0x20 }
    /* +0x314708 */ __asm { JMP 0x7fffa4a84696 }
    /* +0x31470a */ __asm { RET }
    /* +0x314712 */ __asm { MOV R11,0x0 }
    /* +0x314719 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x314720 */ __asm { NOP }
    /* +0x314721 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x314726 */ __asm { NOP }
    /* +0x314727 */ __asm { NOP }
    /* +0x314728 */ __asm { NOP }
    /* +0x314729 */ __asm { NOP }
    /* +0x31472a */ __asm { NOP }
    /* +0x31472b */ __asm { NOP }
    /* +0x31472c */ __asm { NOP }
    /* +0x31472d */ __asm { NOP }
    /* +0x31472e */ __asm { NOP }
    /* +0x31472f */ __asm { NOP }
    /* +0x314730 */ __asm { NOP }
    /* +0x314731 */ __asm { NOP }
    /* +0x314732 */ __asm { NOP }
    /* +0x314733 */ __asm { NOP }
    /* +0x314734 */ __asm { NOP }
    /* +0x314735 */ __asm { NOP }
    /* +0x314736 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a863a0  |  RVA: 0x3163a0  |  Size: 246 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a863a0(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    (*(code *)((int64_t)((int)*(uint64_t *)(param_2 + 0x1498) + 0x5ed44fc0) + 0x7fffa569791e))
              (*(uint64_t *)(param_2 + 0x1498),param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a864a0  |  RVA: 0x3164a0  |  Size: 232 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a864a0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)(short)((short)*(uint64_t *)(param_2 + 0x1498) + -0x1bfd) +
                     0x7fffa568e4db);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a86590  |  RVA: 0x316590  |  Size: 323 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a86590(uint64_t param_1,int64_t param_2)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  int iVar5;
  uint32_t uVar6;
  
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  iVar5 = *(int *)((int64_t)(short)((uint16_t)*(uint64_t *)(param_2 + 0x1498) ^ 29999) +
                  0x7fffa478979f) + -1;
  *(int *)((int64_t)(short)(0xaf5fU >> bVar3 | -0x50a1 << 0x10 - bVar3) + 0x7fffa4787245) = iVar5;
  if (iVar5 == 0) {
    uVar4 = ~((short)*(uint64_t *)(param_2 + 0x1480) * 0x595e);
    LOCK();
    puVar1 = (uint32_t *)((int64_t)(short)(uVar4 << 4 | uVar4 >> 0xc) + 0x7fffa47895c4);
    uVar2 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
    uVar6 = (int)*(uint64_t *)(param_2 + 0x1498) + 0xf3514cab;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(int)(uVar6 * 0x4000 | uVar6 >> 0x12) + 0x7fffa478f902,param_2,uVar2);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a866e0  |  RVA: 0x3166e0  |  Size: 322 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a866e0(uint64_t param_1,int64_t param_2)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  uint8_t bVar3;
  
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
  iRam00007fffa4785e1c =
       *(int *)(((int64_t)(int)(0x9e01efc9U >> bVar3 | -0x61fe1037 << 0x20 - bVar3) ^
                0xffffffff840d4590U) + 0x7fffa4793c0c) + -1;
  if (iRam00007fffa4785e1c == 0) {
    LOCK();
    puVar1 = (uint32_t *)((int64_t)(-0x5ed649a6 - *(int *)(param_2 + 0x1498)) + 0x7fffa4795b10);
    uVar2 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(*(int *)(param_2 + 0x184) * -0x7119b351) + 0x7fffa4792463,param_2,uVar2);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a86830  |  RVA: 0x316830  |  Size: 295 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a86830(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int64_t lVar2;
  uint16_t uVar3;
  
  uVar3 = 0xb90c - (short)*(uint32_t *)(param_2 + 0x1498);
  if ((uint64_t)(uint16_t)((uVar3 * 0x2000 | uVar3 >> 3) ^ 0x40b0) < *(uint64_t *)(param_2 + 0x13e8)
     ) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
    lVar2 = (int64_t)(int)(-0x29a40001 << bVar1 | 0xd65bffffU >> 0x20 - bVar1);
    (*(code *)(lVar2 + 0x7fffa56922c1))
              (lVar2,param_2,
               *(uint64_t *)(param_2 + 0x13d0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13d0));
  }
  *(uint16_t *)(param_2 + 0x13d0) = 0;
  *(uint64_t *)(param_2 + 0x13e8) = 7;
  *(uint64_t *)(param_2 + 0x13e0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a86960  |  RVA: 0x316960  |  Size: 314 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a86960(uint64_t param_1,int64_t param_2)

{
  bool bVar1;
  uint16_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar4 = (int)*(uint64_t *)(param_2 + 0x1498) + 0xc3deb170;
  bVar1 = 0xf < *(uint64_t *)(param_2 + 0x268);
  if ((uint64_t)(int64_t)(int)(uVar4 * 0x1000000 | uVar4 >> 8) <
      (uint64_t)(uint32_t)~(*(int *)(param_2 + 0x184) * 0x6fe7e568)) {
    bVar1 = (int64_t)*(uint64_t *)(param_2 + 0x268) < 0xf;
  }
  if (bVar1) {
    uVar4 = (uint32_t)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x9376) ^
            (uint32_t)*(uint64_t *)(param_2 + 0x1498);
    uVar2 = (uint16_t)uVar4;
    iVar3 = CONCAT22((short)(uVar4 >> 0x10),uVar2 << 10 | uVar2 >> 6) + 0x515f;
    (*(code *)((int64_t)(short)iVar3 + 0x7fffa5689a51))
              (0x7fffa5689a51,iVar3,
               *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a86aa0  |  RVA: 0x316aa0  |  Size: 302 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a86aa0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    uVar1 = *(uint64_t *)(param_2 + 0x1498);
    uVar2 = *(uint64_t *)(param_2 + 0x13a0);
    bVar3 = (uint8_t)uVar1 & 0x1f;
    uVar4 = (uint64_t)((uint32_t)(uVar2 >> 0x3d) & (uint32_t)uVar2);
    if (0x4b540372 < ((0xb692c2d8U >> bVar3 | -0x496d3d28 << 0x20 - bVar3) ^ 0xc198d732)) {
      uVar4 = uVar2 >> 0x3d ^ uVar2;
    }
    (*(code *)((int64_t)(short)(0xc377U - (short)uVar1 ^ 0xd4ff) + 0x7fffa568b756))
              (uVar1,0x4b540372,uVar4);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a86bd0  |  RVA: 0x316bd0  |  Size: 238 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a86bd0(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    (*(code *)(&UNK_7fffa5691063 + *(int *)(param_2 + 0x184) * 0x341a05f))
              (&UNK_7fffa5691063 + *(int *)(param_2 + 0x184) * 0x341a05f,param_2,
               *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a86cc0  |  RVA: 0x316cc0  |  Size: 241 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a86cc0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint16_t uVar3;
  int iVar4;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    iVar4 = (int)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x3400) + -0x104f;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
    uVar3 = (uint16_t)iVar4;
    uVar3 = uVar3 << bVar1 | uVar3 >> 0x10 - bVar1;
    pcVar2 = (code *)((int64_t)(short)uVar3 + 0x7fffa568ed6c);
    (*pcVar2)(pcVar2,CONCAT22((short)((uint32_t)iVar4 >> 0x10),uVar3),
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a86dc0  |  RVA: 0x316dc0  |  Size: 250 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a86dc0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)
                      (short)((0xe90dU - (short)*(uint32_t *)(param_2 + 0x1498) ^ 0x9909) +
                             (short)*(uint32_t *)(param_2 + 0x1518)) + 0x7fffa568c755);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a86ec0  |  RVA: 0x316ec0  |  Size: 404 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a86ec0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  uint16_t uVar7;
  int iVar8;
  uint32_t uVar9;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar1 = *(uint64_t *)(param_2 + 0x250);
    uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x1498);
    uVar7 = (uint16_t)*(uint64_t *)(param_2 + 0x1498) ^ 0x6822;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x1258) & 0xf;
    uVar9 = (uint32_t)*(uint64_t *)(param_2 + 0x1398);
    iVar8 = (int)*(uint64_t *)(param_2 + 0x238);
    uVar6 = (iVar8 * 0x50dea2ee - (int)*(uint64_t *)(param_2 + 0x1348)) + uVar9 ^ uVar4;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1508) & 0x1f;
    uVar4 = ~(((iVar8 * 0x310f8251 - uVar9) + 0xa681f93) * *(int *)(param_2 + 0x13c8)) + uVar4;
    uVar5 = uVar1 >> 0x3d;
    if ((uVar6 << bVar2 | uVar6 >> 0x20 - bVar2) * -0x4fcc5603 <= uVar4) {
      uVar5 = uVar1 + 0x3d;
    }
    (*(code *)((int64_t)
               (short)((short)(((uint32_t)(uint16_t)(uVar7 >> bVar3 | uVar7 << 0x10 - bVar3) *
                                ((uint32_t)*(uint64_t *)(param_2 + 0x1508) | 1) ^ uVar9) + 0x156b) *
                      (short)*(uint32_t *)(param_2 + 0x1260)) + 0x7fffa56895d5))
              (uVar1 + 0x3d,uVar4,uVar5 ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a87060  |  RVA: 0x317060  |  Size: 265 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a87060(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if ((uint64_t)((int)*(uint64_t *)(param_2 + 0x1480) * 0x84d5 & 0xffff) <
      *(uint64_t *)(param_2 + 0x13b8)) {
    pcVar1 = (code *)((int64_t)(short)(-0x6cc2 - (short)*(uint64_t *)(param_2 + 0x1498)) +
                     0x7fffa5689c44);
    (*pcVar1)(pcVar1,*(uint64_t *)(param_2 + 0x1498),
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a87170  |  RVA: 0x317170  |  Size: 242 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a87170(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    pcVar1 = (code *)((int64_t)
                      ((0xddd3d79 - *(int *)(param_2 + 0x1260)) * *(int *)(param_2 + 0x184)) +
                     0x7fffa56970e7);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a87270  |  RVA: 0x317270  |  Size: 299 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a87270(uint64_t param_1,int64_t param_2)

{
  if ((int64_t)((int)*(uint64_t *)(param_2 + 0x1498) + 0x164f1d45) <
      (int64_t)(uint64_t)(uint32_t)(*(int *)(param_2 + 0x184) * -0x4a590607) !=
      *(uint64_t *)(param_2 + 0x268) < 0x10) {
    (*(code *)((int64_t)(*(int *)(param_2 + 0x184) * -0x596fb0d3 + -0x3288ed90) + 0x7fffa5694729))
              (0x7fffa5694729,param_2,
               *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a873a0  |  RVA: 0x3173a0  |  Size: 237 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a873a0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    uVar1 = *(uint64_t *)(param_2 + 0x13a0);
    (*(code *)((int64_t)(short)(0x751c - (short)*(uint64_t *)(param_2 + 0x1498)) + 0x7fffa568ba66
              ))(uVar1,*(uint64_t *)(param_2 + 0x1498),uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a87490  |  RVA: 0x317490  |  Size: 240 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a87490(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
    (*(code *)(&UNK_7fffa569065a + (int)(0xd75bfffdU >> bVar1 | -0x28a40003 << 0x20 - bVar1)))
              (&UNK_7fffa569065a + (int)(0xd75bfffdU >> bVar1 | -0x28a40003 << 0x20 - bVar1),param_2
               ,*(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a87580  |  RVA: 0x317580  |  Size: 279 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a87580(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint16_t uVar3;
  int iVar4;
  uint32_t uVar5;
  
  if ((uint64_t)
      (((int)*(uint64_t *)(param_2 + 0x1498) - *(int *)(param_2 + 0x1508)) + 0x283eU & 0xffff) <
      *(uint64_t *)(param_2 + 0x13b8)) {
    iVar4 = (int)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0xcb95) + *(int *)(param_2 + 0x1498);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1508) & 0xf;
    uVar3 = (uint16_t)iVar4;
    uVar5 = CONCAT22((short)((uint32_t)iVar4 >> 0x10),uVar3 >> bVar1 | uVar3 << 0x10 - bVar1) - 0x5f4U ^
            0x1008;
    pcVar2 = (code *)((int64_t)(short)uVar5 + 0x7fffa568d2b9);
    (*pcVar2)(pcVar2,uVar5,
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a876a0  |  RVA: 0x3176a0  |  Size: 240 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a876a0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    pcVar1 = (code *)((int64_t)(((int)*(uint64_t *)(param_2 + 0x1498) + 0x26f4b5e6) * 0x62921927)
                     + 0x7fffa568fca8);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a87790  |  RVA: 0x317790  |  Size: 267 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a87790(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint32_t uVar3;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    uVar3 = 0xace72da5 - ((int)*(uint64_t *)(param_2 + 0x1258) + -0xe5efdb2);
    uVar3 = uVar3 * 0x40 | uVar3 >> 0x1a;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0x1f;
    pcVar2 = (code *)((int64_t)(int)(uVar3 << bVar1 | uVar3 >> 0x20 - bVar1) + 0x7fffa56971f8);
    (*pcVar2)(pcVar2,*(uint64_t *)(param_2 + 0x1260),
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a878a0  |  RVA: 0x3178a0  |  Size: 241 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a878a0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  uint64_t in_R10;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    uVar1 = *(uint64_t *)(param_2 + 0x13a0);
    iVar2 = ((int)CONCAT62((int6)((uint64_t)in_R10 >> 0x10),0x4867) +
            (int)*(uint64_t *)(param_2 + 0x1498)) * 0x385d;
    (*(code *)((int64_t)(short)iVar2 + 0x7fffa56891fb))(uVar1,iVar2,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a879a0  |  RVA: 0x3179a0  |  Size: 350 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a879a0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  if (7 < *(uint64_t *)(param_2 + 0x268)) {
    iVar2 = (int)*(uint64_t *)(param_2 + 0x1498);
    uVar4 = (uint64_t)(uint32_t)(*(int *)(param_2 + 0x184) * 0x67a5b005);
    lVar3 = (int64_t)(int)((iVar2 + 0x2d70d0b8U ^ 0xb5e5544a) * -0x2d73fae1);
    uVar1 = *(uint64_t *)(param_2 + 0x250);
    uVar5 = uVar1 >> 0x3d ^ uVar1;
    if ((int64_t)uVar4 <= lVar3) {
      uVar5 = uVar1 >> 0x3d | uVar1;
    }
    (*(code *)((int64_t)(int)((0xb06d43fdU - iVar2 ^ 0x2374f8e9) + 0xd3c8afe8) + 0x7fffa5696406))
              (lVar3,uVar4,uVar5);
  }
  *(uint64_t *)(param_2 + 0x268) = 7;
  *(uint16_t *)(param_2 + 0x250) = 0;
  *(uint64_t *)(param_2 + 0x260) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a87b00  |  RVA: 0x317b00  |  Size: 230 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a87b00(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0xe8)) {
    uVar2 = (int)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x51e2) - *(int *)(param_2 + 0x1498) ^
            0x74b8;
    pcVar1 = (code *)((int64_t)(short)uVar2 + 0x7fffa5689208);
    (*pcVar1)(pcVar1,uVar2,*(uint64_t *)(param_2 + 0xd0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xd0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a87bf0  |  RVA: 0x317bf0  |  Size: 320 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a87bf0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar1 = *(uint64_t *)(param_2 + 0x250);
    uVar3 = (uint64_t)(uint32_t)(*(int *)(param_2 + 0x184) * -0x18fc8e88);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
    uVar5 = ~(*(int *)(param_2 + 0x184) * -0x12fbd91c);
    uVar4 = (uint64_t)((uint32_t)uVar1 & 0x3d);
    if ((int64_t)(int)(uVar5 << 0xd | uVar5 >> 0x13) < (int64_t)uVar3) {
      uVar4 = uVar1 >> 0x3d;
    }
    (*(code *)((int64_t)(int)(-0x39708001 << bVar2 | 0xc68f7fffU >> 0x20 - bVar2) + 0x7fffa56961f3)
    )(*(uint64_t *)(param_2 + 0x1498),uVar3,uVar4 ^ uVar1);
  }
  *(uint8_t *)(param_2 + 0x250) = 0;
  *(uint64_t *)(param_2 + 0x268) = 0xf;
  *(uint64_t *)(param_2 + 0x260) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a87d30  |  RVA: 0x317d30  |  Size: 5605 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a87d30(void) {
    /* +0x317d30 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x317d35 */ __asm { PUSH RBP }
    /* +0x317d36 */ __asm { PUSH RSI }
    /* +0x317d37 */ __asm { PUSH RBX }
    /* +0x317d38 */ __asm { PUSH RDI }
    /* +0x317d39 */ __asm { PUSH R12 }
    /* +0x317d3b */ __asm { PUSH R13 }
    /* +0x317d3d */ __asm { PUSH R15 }
    /* +0x317d3f */ __asm { PUSH R14 }
    /* +0x317d41 */ __asm { SUB RSP,0xc8 }
    /* +0x317d48 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x317d4f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x317d56 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x317d5c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x317d66 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x317d70 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x317d7a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x317d83 */ __asm { CMP qword ptr [RBP + 0x1468],0x0 }
    /* +0x317d8b */ __asm { JZ 0x7fffa4a88b9c }
    /* +0x317d91 */ __asm { RDTSC }
    /* +0x317d93 */ __asm { SHL RDX,0x20 }
    /* +0x317d97 */ __asm { OR RDX,RAX }
    /* +0x317d9a */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0x317da4 */ __asm { IMUL RDX,RAX }
    /* +0x317da8 */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0x317db2 */ __asm { LEA RCX,[RDX + R10*0x1] }
    /* +0x317db6 */ __asm { MOV R8,RCX }
    /* +0x317db9 */ __asm { SHR R8,0x1b }
    /* +0x317dbd */ __asm { MOV R11,RCX }
    /* +0x317dc0 */ __asm { SHR R11,0x2d }
    /* +0x317dc4 */ __asm { XOR R8D,R11D }
    /* +0x317dc7 */ __asm { SHR RCX,0x3b }
    /* +0x317dcb */ __asm { ROR R8D,CL }
    /* +0x317dce */ __asm { AND R8D,0x3 }
    /* +0x317dd2 */ __asm { CMP R8D,0x2 }
    /* +0x317dd6 */ __asm { JNC 0x7fffa4a87f4e }
    /* +0x317ddc */ __asm { CMP R8D,0x1 }
    /* +0x317de0 */ __asm { JNZ 0x7fffa4a880aa }
    /* +0x317de6 */ __asm { MOV EAX,0x1bfbf4f9 }
    /* +0x317deb */ __asm { MOV RCX,-0xf1aded2a }
    /* +0x317df5 */ __asm { SUB RCX,RAX }
    /* +0x317df8 */ __asm { MOV R8,-0x605d0d9459429620 }
    /* +0x317e02 */ __asm { XOR R8,qword ptr [RBP + 0x1418] }
    /* +0x317e09 */ __asm { ROL R8,0x1c }
    /* +0x317e0d */ __asm { CMP R8,RCX }
    /* +0x317e10 */ __asm { JZ 0x7fffa4a889ec }
    /* +0x317e16 */ __asm { CMP dword ptr [RAX + 0x64020ec7],0xd }
    /* +0x317e1d */ __asm { JNC 0x7fffa4a88a00 }
    /* +0x317e23 */ __asm { PXOR XMM2,XMM2 }
    /* +0x317e27 */ __asm { MOVDQA xmmword ptr [RBP + 0x1320],XMM2 }
    /* +0x317e2f */ __asm { MOV dword ptr [RBP + 0x178],0xca56dc9f }
    /* +0x317e39 */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x317e40 */ __asm { CMP R10D,0xf3194857 }
    /* +0x317e47 */ __asm { JNC 0x7fffa4a89849 }
    /* +0x317e4d */ __asm { MOV dword ptr [RBP + 0x1320],0x0 }
    /* +0x317e57 */ __asm { MOV dword ptr [RBP + 0x178],0x93492b89 }
    /* +0x317e61 */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x317e68 */ __asm { MOV dword ptr [RBP + 0x178],0x4953c5b0 }
    /* +0x317e72 */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x317e79 */ __asm { LEA RAX,[0x7fffa47bad21] }
    /* +0x317e80 */ __asm { MOV RCX,-0x3815a041f185afb3 }
    /* +0x317e8a */ __asm { CMP RAX,RCX }
    /* +0x317e8d */ __asm { NOP }
    /* +0x317e8e */ __asm { NOP }
    /* +0x317e8f */ __asm { NOP }
    /* +0x317e90 */ __asm { NOP }
    /* +0x317e91 */ __asm { NOP }
    /* +0x317e92 */ __asm { NOP }
    /* +0x317e93 */ __asm { NOP }
    /* +0x317e94 */ __asm { NOP }
    /* +0x317e95 */ __asm { NOP }
    /* +0x317e96 */ __asm { NOP }
    /* +0x317e97 */ __asm { NOP }
    /* +0x317e98 */ __asm { NOP }
    /* +0x317e99 */ __asm { NOP }
    /* +0x317e9a */ __asm { NOP }
    /* +0x317e9b */ __asm { LEA R13,[0x7fffa478053d] }
    /* +0x317ea2 */ __asm { MOV R10W,0x18a9 }
    /* +0x317ea7 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x317eae */ __asm { XOR R10D,ECX }
    /* +0x317eb1 */ __asm { ADD R10D,0x5415 }
    /* +0x317eb8 */ __asm { MOVZX R9D,R10W }
    /* +0x317ebc */ __asm { MOV R10D,0xa12ab352 }
    /* +0x317ec2 */ __asm { MOV qword ptr [RBP + 0x178],R11 }
    /* +0x317ec9 */ __asm { MOV R8W,0x433a }
    /* +0x317ece */ __asm { XOR R8D,0xfec }
    /* +0x317ed5 */ __asm { ADD R8D,ECX }
    /* +0x317ed8 */ __asm { MOVZX EDX,R8W }
    /* +0x317edc */ __asm { MOV EAX,dword ptr [RAX + 0x17a7] }
    /* +0x317ee2 */ __asm { XOR R10D,ECX }
    /* +0x317ee5 */ __asm { NOT R10D }
    /* +0x317ee8 */ __asm { MOVSXD R10,R10D }
    /* +0x317eeb */ __asm { LEA R8,[RBP + 0x1320] }
    /* +0x317ef2 */ __asm { SYSCALL }
    /* +0x317ef4 */ __asm { MOV RAX,-0x43e1b4a1259b78db }
    /* +0x317efe */ __asm { CMP R13,RAX }
    /* +0x317f01 */ __asm { NOP }
    /* +0x317f02 */ __asm { NOP }
    /* +0x317f03 */ __asm { NOP }
    /* +0x317f04 */ __asm { NOP }
    /* +0x317f05 */ __asm { NOP }
    /* +0x317f06 */ __asm { NOP }
    /* +0x317f07 */ __asm { NOP }
    /* +0x317f08 */ __asm { NOP }
    /* +0x317f09 */ __asm { NOP }
    /* +0x317f0a */ __asm { NOP }
    /* +0x317f0b */ __asm { NOP }
    /* +0x317f0c */ __asm { NOP }
    /* +0x317f0d */ __asm { NOP }
    /* +0x317f0e */ __asm { NOP }
    /* +0x317f0f */ __asm { NOP }
    /* +0x317f10 */ __asm { NOP }
    /* +0x317f11 */ __asm { NOP }
    /* +0x317f4e */ __asm { CMP R8D,0x3 }
    /* +0x317f52 */ __asm { JZ 0x7fffa4a882fb }
    /* +0x317f58 */ __asm { MOV R10D,0xf18c5361 }
    /* +0x317f5e */ __asm { ADD R10D,dword ptr [RBP + 0x1418] }
    /* +0x317f65 */ __asm { ROL R10D,0x1c }
    /* +0x317f69 */ __asm { NOT R10D }
    /* +0x317f6c */ __asm { PXOR XMM2,XMM2 }
    /* +0x317f70 */ __asm { MOVDQA xmmword ptr [RBP + 0x1320],XMM2 }
    /* +0x317f78 */ __asm { MOV dword ptr [RBP + 0x178],R10D }
    /* +0x317f7f */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x317f86 */ __asm { CMP R10D,0x9ab8e358 }
    /* +0x317f8d */ __asm { NOP }
    /* +0x317f8e */ __asm { NOP }
    /* +0x317f8f */ __asm { NOP }
    /* +0x317f90 */ __asm { NOP }
    /* +0x317f91 */ __asm { NOP }
    /* +0x317f92 */ __asm { PUSHFQ }
    /* +0x317f93 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x317f9b */ __asm { POPFQ }
    /* +0x317f9c */ __asm { MOV dword ptr [RBP + 0x1320],0x0 }
    /* +0x317fa6 */ __asm { MOV dword ptr [RBP + 0x178],0xdf482ce8 }
    /* +0x317fb0 */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x317fb7 */ __asm { MOV dword ptr [RBP + 0x178],0x12c81321 }
    /* +0x317fc1 */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x317fc8 */ __asm { TEST R10D,R10D }
    /* +0x317fcb */ __asm { NOP }
    /* +0x317fcc */ __asm { NOP }
    /* +0x317fcd */ __asm { NOP }
    /* +0x317fce */ __asm { NOP }
    /* +0x317fcf */ __asm { NOP }
    /* +0x317fd0 */ __asm { NOP }
    /* +0x317fd1 */ __asm { PUSHFQ }
    /* +0x317fd2 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x317fda */ __asm { POPFQ }
    /* +0x317fdb */ __asm { LEA RAX,[0x7fffa47bad60] }
    /* +0x317fe2 */ __asm { MOV R11,RAX }
    /* +0x317fe5 */ __asm { ROL R11,0x20 }
    /* +0x317fe9 */ __asm { MOV RCX,0x70f2d885d8e7149f }
    /* +0x317ff3 */ __asm { IMUL RCX,R11 }
    /* +0x317ff7 */ __asm { MOV R8,0x13181f61ae555064 }
    /* +0x318001 */ __asm { CMP RCX,R8 }
    /* +0x318004 */ __asm { NOP }
    /* +0x318005 */ __asm { NOP }
    /* +0x318006 */ __asm { NOP }
    /* +0x318007 */ __asm { NOP }
    /* +0x318008 */ __asm { NOP }
    /* +0x318009 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x318010 */ __asm { MOV R10D,ECX }
    /* +0x318013 */ __asm { OR R10D,0x1 }
    /* +0x318017 */ __asm { MOV R8W,0xa15c }
    /* +0x31801c */ __asm { IMUL R8D,R10D }
    /* +0x318020 */ __asm { MOV R10D,0xa12ab352 }
    /* +0x318026 */ __asm { MOV R11W,0x4e }
    /* +0x31802b */ __asm { IMUL R11D,R11D,-0x1e85 }
    /* +0x318032 */ __asm { MOV qword ptr [RBP + 0x178],RDX }
    /* +0x318039 */ __asm { MOV EAX,dword ptr [RAX + 0x2278] }
    /* +0x31803f */ __asm { NOT R10D }
    /* +0x318042 */ __asm { LEA R13,[0x7fffa47c3960] }
    /* +0x318049 */ __asm { ADD R10D,ECX }
    /* +0x31804c */ __asm { MOVSXD R10,R10D }
    /* +0x31804f */ __asm { XOR R11D,ECX }
    /* +0x318052 */ __asm { MOVZX EDX,R11W }
    /* +0x318056 */ __asm { ADD R8D,0x5b3c }
    /* +0x31805d */ __asm { MOVZX R9D,R8W }
    /* +0x318061 */ __asm { LEA R8,[RBP + 0x1320] }
    /* +0x318068 */ __asm { SYSCALL }
    /* +0x31806a */ __asm { MOV RAX,-0x560b52bd3f2c5805 }
    /* +0x318074 */ __asm { CMP R13,RAX }
    /* +0x318077 */ __asm { NOP }
    /* +0x318078 */ __asm { NOP }
    /* +0x318079 */ __asm { NOP }
    /* +0x31807a */ __asm { NOP }
    /* +0x31807b */ __asm { NOP }
    /* +0x31807c */ __asm { MOV qword ptr [RBP + 0x1320],RAX }
    /* +0x318083 */ __asm { MOV R10W,0x7b73 }
    /* +0x318088 */ __asm { ADD R10D,0xffff848c }
    /* +0x31808f */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x318096 */ __asm { ROL R10W,CL }
    /* +0x31809a */ __asm { MOVSX R10,R10W }
    /* +0x31809e */ __asm { MOV EAX,dword ptr [R13 + -0x68e4] }
    /* +0x3180a5 */ __asm { JMP 0x7fffa4a88b93 }
    /* +0x3180aa */ __asm { LEA RAX,[0x7fffa47be87a] }
    /* +0x3180b1 */ __asm { MOV RCX,-0x6c71ed2d5abf714 }
    /* +0x3180bb */ __asm { CMP RAX,RCX }
    /* +0x3180be */ __asm { NOP }
    /* +0x3180bf */ __asm { NOP }
    /* +0x3180c0 */ __asm { NOP }
    /* +0x3180c1 */ __asm { NOP }
    /* +0x3180c2 */ __asm { NOP }
    /* +0x3180c3 */ __asm { NOP }
    /* +0x3180c4 */ __asm { NOP }
    /* +0x3180c5 */ __asm { NOP }
    /* +0x3180c6 */ __asm { NOP }
    /* +0x3180c7 */ __asm { NOP }
    /* +0x3180c8 */ __asm { NOP }
    /* +0x3180c9 */ __asm { NOP }
    /* +0x3180ca */ __asm { NOP }
    /* +0x3180cb */ __asm { NOP }
    /* +0x3180cc */ __asm { NOP }
    /* +0x3180cd */ __asm { NOP }
    /* +0x3180ce */ __asm { NOP }
    /* +0x3182fb */ __asm { LEA RAX,[0x7fffa47b67ac] }
    /* +0x318302 */ __asm { MOV RCX,-0x70fe9c50c86fdaad }
    /* +0x31830c */ __asm { CMP RAX,RCX }
    /* +0x31830f */ __asm { JNZ 0x7fffa4a8831d }
    /* +0x318311 */ __asm { JG 0x7fffa4a8836c }
    /* +0x318314 */ __asm { TEST AL,0xb3 }
    /* +0x318316 */ __asm { PUSH RDX }
    /* +0x318317 */ __asm { PUSH RDX }
    /* +0x318318 */ __asm { SCASB RDI }
    /* +0x318319 */ __asm { OUT 0x77,EAX }
    /* +0x31831b */ __asm { PUSH RSP }
    /* +0x31831d */ __asm { MOV R8D,0x60a0fd31 }
    /* +0x318323 */ __asm { MOV RCX,0x77bfffffd68ee273 }
    /* +0x31832d */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x318334 */ __asm { ADD R8D,R11D }
    /* +0x318337 */ __asm { ROL R8D,0x15 }
    /* +0x31833b */ __asm { XOR RCX,0x2d71a026 }
    /* +0x318342 */ __asm { ROL RCX,0xf }
    /* +0x318346 */ __asm { XOR RCX,R11 }
    /* +0x318349 */ __asm { CMP RCX,R8 }
    /* +0x31834c */ __asm { JC 0x7fffa4a88557 }
    /* +0x318352 */ __asm { MOV EBX,0xc456dfc2 }
    /* +0x318357 */ __asm { MOVZX R10D,uint8_t ptr [RAX + 0x5ee1] }
    /* +0x31835f */ __asm { LEA RCX,[RAX + R10*0x4] }
    /* +0x318363 */ __asm { ADD RCX,0x5ef1 }
    /* +0x31836a */ __asm { MOVZX EDX,uint8_t ptr [RAX + R10*0x4 + 0x5ef1] }
    /* +0x318373 */ __asm { ROL DL,0x4 }
    /* +0x318376 */ __asm { MOV uint8_t ptr [RBP + 0x1320],DL }
    /* +0x31837c */ __asm { MOVZX R10D,uint8_t ptr [RAX + R10*0x4 + 0x5ef2] }
    /* +0x318385 */ __asm { ROL R10B,0x4 }
    /* +0x318389 */ __asm { MOV uint8_t ptr [RBP + 0x1321],R10B }
    /* +0x318390 */ __asm { ADD EBX,0x1ef63eda }
    /* +0x318396 */ __asm { IMUL EBX,dword ptr [RBP + 0x104] }
    /* +0x31839d */ __asm { JMP 0x7fffa4a885a1 }
    /* +0x318557 */ __asm { MOV EBX,0x82c78601 }
    /* +0x31855c */ __asm { ADD EBX,0x771f7018 }
    /* +0x318562 */ __asm { XOR EBX,dword ptr [RBP + 0x1418] }
    /* +0x318568 */ __asm { MOVZX R10D,uint8_t ptr [RAX + 0x5ee1] }
    /* +0x318570 */ __asm { LEA RCX,[RAX + R10*0x4] }
    /* +0x318574 */ __asm { ADD RCX,0x5ef1 }
    /* +0x31857b */ __asm { MOVZX EDX,uint8_t ptr [RAX + R10*0x4 + 0x5ef1] }
    /* +0x318584 */ __asm { ROL DL,0x4 }
    /* +0x318587 */ __asm { MOV uint8_t ptr [RBP + 0x1320],DL }
    /* +0x31858d */ __asm { MOVZX R10D,uint8_t ptr [RAX + R10*0x4 + 0x5ef2] }
    /* +0x318596 */ __asm { ROL R10B,0x4 }
    /* +0x31859a */ __asm { MOV uint8_t ptr [RBP + 0x1321],R10B }
    /* +0x3185a1 */ __asm { MOVZX R10D,uint8_t ptr [RCX + 0x2] }
    /* +0x3185a6 */ __asm { ROL R10B,0x4 }
    /* +0x3185aa */ __asm { MOV uint8_t ptr [RBP + 0x1322],R10B }
    /* +0x3185b1 */ __asm { MOVZX R10D,uint8_t ptr [RCX + 0x3] }
    /* +0x3185b6 */ __asm { ROL R10B,0x4 }
    /* +0x3185ba */ __asm { MOV R8D,0x4f3d6a0d }
    /* +0x3185c0 */ __asm { ADD R8D,0xe58ec3e0 }
    /* +0x3185c7 */ __asm { MOV ECX,EBX }
    /* +0x3185c9 */ __asm { ROL R8D,CL }
    /* +0x3185cc */ __asm { MOV uint8_t ptr [RBP + 0x1323],R10B }
    /* +0x3185d3 */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x3185d9 */ __asm { XOR R10D,dword ptr [RBP + 0x1320] }
    /* +0x3185e0 */ __asm { ADD R8D,dword ptr [RBP + 0x1418] }
    /* +0x3185e7 */ __asm { MOV R8D,dword ptr [R8] }
    /* +0x3185ea */ __asm { BT R10D,R8D }
    /* +0x3185ee */ __asm { JC 0x7fffa4a8882e }
    /* +0x3185f4 */ __asm { MOV R10W,0xaf25 }
    /* +0x3185f9 */ __asm { MOV R8D,0x89c498ca }
    /* +0x3185ff */ __asm { XOR R8D,0xc834b859 }
    /* +0x318606 */ __asm { SUB R8D,EBX }
    /* +0x318609 */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x318610 */ __asm { MOV ECX,EDX }
    /* +0x318612 */ __asm { ROL R8D,CL }
    /* +0x318615 */ __asm { ADD R10D,0x6c0a }
    /* +0x31861c */ __asm { MOV ECX,EBX }
    /* +0x31861e */ __asm { ROL R10W,CL }
    /* +0x318622 */ __asm { NOT R10D }
    /* +0x318625 */ __asm { ADD R10D,EDX }
    /* +0x318628 */ __asm { MOVZX R11D,R10W }
    /* +0x31862c */ __asm { PXOR XMM2,XMM2 }
    /* +0x318630 */ __asm { MOVDQA xmmword ptr [RBP + 0x1320],XMM2 }
    /* +0x318638 */ __asm { MOV RAX,qword ptr [R8] }
    /* +0x31863b */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x31863f */ __asm { MOV R8,RBX }
    /* +0x318642 */ __asm { OR R8,0x1 }
    /* +0x318646 */ __asm { MOV R9,-0x5b173f18384fa5e2 }
    /* +0x318650 */ __asm { SUB R9,RDX }
    /* +0x318653 */ __asm { ADD R9,0x22d17711 }
    /* +0x31865a */ __asm { IMUL R9,R8 }
    /* +0x31865e */ __asm { SUB RAX,qword ptr [RCX + 0x30] }
    /* +0x318662 */ __asm { CMP RAX,R9 }
    /* +0x318665 */ __asm { NOP }
    /* +0x318666 */ __asm { NOP }
    /* +0x318667 */ __asm { NOP }
    /* +0x318668 */ __asm { NOP }
    /* +0x318669 */ __asm { NOP }
    /* +0x31866a */ __asm { NOP }
    /* +0x31866b */ __asm { NOP }
    /* +0x31866c */ __asm { NOP }
    /* +0x31866d */ __asm { NOP }
    /* +0x31866e */ __asm { NOP }
    /* +0x31866f */ __asm { NOP }
    /* +0x318670 */ __asm { NOP }
    /* +0x318671 */ __asm { MOV dword ptr [RBP + 0x1320],0x0 }
    /* +0x31867b */ __asm { MOV R10D,0x9d023638 }
    /* +0x318681 */ __asm { XOR R10D,dword ptr [RBP + 0x1418] }
    /* +0x318688 */ __asm { SUB R10D,EBX }
    /* +0x31868b */ __asm { ADD R10D,0xda7fb523 }
    /* +0x318692 */ __asm { MOV dword ptr [RBP + 0x178],R10D }
    /* +0x318699 */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x3186a0 */ __asm { TEST R10B,0x1 }
    /* +0x3186a4 */ __asm { NOP }
    /* +0x3186a5 */ __asm { NOP }
    /* +0x3186a6 */ __asm { NOP }
    /* +0x3186a7 */ __asm { NOP }
    /* +0x3186a8 */ __asm { NOP }
    /* +0x3186a9 */ __asm { MOV RAX,0x0 }
    /* +0x3186b0 */ __asm { NOP }
    /* +0x3186b1 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x3186b8 */ __asm { MOV R10D,0x9c }
    /* +0x3186be */ __asm { NOT R10D }
    /* +0x3186c1 */ __asm { ADD R10D,EBX }
    /* +0x3186c4 */ __asm { ROL R10D,0x1e }
    /* +0x3186c8 */ __asm { MOV dword ptr [RBP + 0x178],R10D }
    /* +0x3186cf */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x3186d6 */ __asm { TEST R10B,0x1 }
    /* +0x3186da */ __asm { JNZ 0x7fffa4a886df }
    /* +0x3186dc */ __asm { AND EDI,EDI }
    /* +0x3186de */ __asm { STOSD RDI }
    /* +0x3186df */ __asm { LEA RAX,[0x7fffa47ba332] }
    /* +0x3186e6 */ __asm { MOV RCX,0x4fc7f97d51ad84ee }
    /* +0x3186f0 */ __asm { CMP RAX,RCX }
    /* +0x3186f3 */ __asm { JNZ 0x7fffa4a88702 }
    /* +0x3186f5 */ __asm { MOV [0x94224bca46fb653],AL }
    /* +0x3186fe */ __asm { SBB ESP,ESI }
    /* +0x318700 */ __asm { MOV AH,0x81 }
    /* +0x318702 */ __asm { LEA R12,[0x7fffa47bdd90] }
    /* +0x318709 */ __asm { MOV R13,R12 }
    /* +0x31870c */ __asm { ADD R13,-0xb31bd7e }
    /* +0x318713 */ __asm { XOR R13,-0x3416e199 }
    /* +0x31871a */ __asm { ADD R13,0x637fb508 }
    /* +0x318721 */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x318728 */ __asm { MOV R10D,EDX }
    /* +0x31872b */ __asm { OR R10D,0x1 }
    /* +0x31872f */ __asm { MOV qword ptr [RBP + 0x178],R11 }
    /* +0x318736 */ __asm { LEA R8,[RAX + 0x2122] }
    /* +0x31873d */ __asm { XOR RAX,0x2122 }
    /* +0x318743 */ __asm { MOV R11D,0x4cb18a74 }
    /* +0x318749 */ __asm { MOV R15D,0xa5eb2f2c }
    /* +0x31874f */ __asm { XOR R15D,EBX }
    /* +0x318752 */ __asm { SUB R15D,EDX }
    /* +0x318755 */ __asm { ROL R15D,0xf }
    /* +0x318759 */ __asm { MOV DI,0x770d }
    /* +0x31875d */ __asm { ADD EDI,0x5cbe }
    /* +0x318763 */ __asm { MOV ECX,EBX }
    /* +0x318765 */ __asm { ROL DI,CL }
    /* +0x318768 */ __asm { SUB R11D,EBX }
    /* +0x31876b */ __asm { ADD R11D,0x8e1e0e36 }
    /* +0x318772 */ __asm { SUB EDI,EDX }
    /* +0x318774 */ __asm { MOV R9W,0x904f }
    /* +0x318779 */ __asm { XOR R9D,0xffffdce0 }
    /* +0x318780 */ __asm { ADD R9D,EDX }
    /* +0x318783 */ __asm { ROL R9W,CL }
    /* +0x318787 */ __asm { MOVZX R9D,R9W }
    /* +0x31878b */ __asm { MOV DX,0xd7fa }
    /* +0x31878f */ __asm { ADD EDX,0xffff9e57 }
    /* +0x318795 */ __asm { IMUL EDX,R10D }
    /* +0x318799 */ __asm { ADD EDX,EBX }
    /* +0x31879b */ __asm { NOT EDX }
    /* +0x31879d */ __asm { MOVZX EDX,DX }
    /* +0x3187a0 */ __asm { XOR EDI,0x7694 }
    /* +0x3187a6 */ __asm { MOVSX R10,DI }
    /* +0x3187aa */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x3187b2 */ __asm { MOVSXD RCX,R11D }
    /* +0x3187b5 */ __asm { CMP RCX,R15 }
    /* +0x3187b8 */ __asm { CMOVNC RAX,R8 }
    /* +0x3187bc */ __asm { MOV EAX,dword ptr [RAX + 0x74] }
    /* +0x3187bf */ __asm { LEA R8,[RBP + 0x1320] }
    /* +0x3187c6 */ __asm { SYSCALL }
    /* +0x3187c8 */ __asm { MOV RAX,0x7b4fa556f6cd679e }
    /* +0x3187d2 */ __asm { CMP R13,RAX }
    /* +0x3187d5 */ __asm { JZ 0x7fffa4a89860 }
    /* +0x3187db */ __asm { MOV qword ptr [RBP + 0x1320],RAX }
    /* +0x3187e2 */ __asm { MOV R10D,0xdf37a14c }
    /* +0x3187e8 */ __asm { XOR R10D,0xefbd2d0c }
    /* +0x3187ef */ __asm { MOV R8D,EBX }
    /* +0x3187f2 */ __asm { OR R8D,0x1 }
    /* +0x3187f6 */ __asm { MOV R11W,0x5b81 }
    /* +0x3187fb */ __asm { MOV R9,qword ptr [RBP + 0x1418] }
    /* +0x318802 */ __asm { MOV ECX,R9D }
    /* +0x318805 */ __asm { SUB ECX,EBX }
    /* +0x318807 */ __asm { ADD ECX,R11D }
    /* +0x31880a */ __asm { NOT ECX }
    /* +0x31880c */ __asm { MOVSX RAX,CX }
    /* +0x318810 */ __asm { MOV EAX,dword ptr [RAX + R12*0x1 + 0x12c] }
    /* +0x318818 */ __asm { ADD R10D,R9D }
    /* +0x31881b */ __asm { ADD R10D,0x6167f5b1 }
    /* +0x318822 */ __asm { IMUL R10D,R8D }
    /* +0x318826 */ __asm { MOVSXD R10,R10D }
    /* +0x318829 */ __asm { JMP 0x7fffa4a88b93 }
    /* +0x31882e */ __asm { MOV R10W,0x4f4d }
    /* +0x318833 */ __asm { PXOR XMM2,XMM2 }
    /* +0x318837 */ __asm { MOVDQA xmmword ptr [RBP + 0x1320],XMM2 }
    /* +0x31883f */ __asm { MOV R8D,EBX }
    /* +0x318842 */ __asm { SUB R8D,dword ptr [RBP + 0x1418] }
    /* +0x318849 */ __asm { ADD R10D,R8D }
    /* +0x31884c */ __asm { ADD R10D,0x63a1 }
    /* +0x318853 */ __asm { MOVZX R8D,R10W }
    /* +0x318857 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x31885b */ __asm { MOV RAX,qword ptr [RAX + 0x60] }
    /* +0x31885f */ __asm { MOV R11,-0x422813df5153315 }
    /* +0x318869 */ __asm { SUB RAX,R11 }
    /* +0x31886c */ __asm { MOV RCX,-0x48bb5cfb5bb413bd }
    /* +0x318876 */ __asm { CMP RAX,RCX }
    /* +0x318879 */ __asm { NOP }
    /* +0x31887a */ __asm { NOP }
    /* +0x31887b */ __asm { NOP }
    /* +0x31887c */ __asm { NOP }
    /* +0x31887d */ __asm { NOP }
    /* +0x31887e */ __asm { MOV R10D,EBX }
    /* +0x318881 */ __asm { OR R10D,0x1 }
    /* +0x318885 */ __asm { MOV dword ptr [RBP + 0x1320],0x0 }
    /* +0x31888f */ __asm { MOV R8W,0x4a4d }
    /* +0x318894 */ __asm { XOR R8D,dword ptr [RBP + 0x1418] }
    /* +0x31889b */ __asm { NOT R8D }
    /* +0x31889e */ __asm { IMUL R8D,R10D }
    /* +0x3188a2 */ __asm { MOVZX R8D,R8W }
    /* +0x3188a6 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x3188aa */ __asm { MOV RCX,-0x7d8c448bf7eba41d }
    /* +0x3188b4 */ __asm { CMP qword ptr [RAX + 0x18],RCX }
    /* +0x3188b8 */ __asm { NOP }
    /* +0x3188b9 */ __asm { NOP }
    /* +0x3188ba */ __asm { NOP }
    /* +0x3188bb */ __asm { NOP }
    /* +0x3188bc */ __asm { NOP }
    /* +0x3188bd */ __asm { MOV dword ptr [RBP + 0x178],0xdc11263a }
    /* +0x3188c7 */ __asm { MOV R10D,dword ptr [RBP + 0x178] }
    /* +0x3188ce */ __asm { LEA RAX,[0x7fffa47c28ac] }
    /* +0x3188d5 */ __asm { MOV RCX,-0x17fdd73c2cf6f51d }
    /* +0x3188df */ __asm { CMP RAX,RCX }
    /* +0x3188e2 */ __asm { JZ 0x7fffa4a89868 }
    /* +0x3188e8 */ __asm { MOV R15,qword ptr [RBP + 0x1418] }
    /* +0x3188ef */ __asm { MOV R8D,R15D }
    /* +0x3188f2 */ __asm { MOV R10D,0xb8f4fe03 }
    /* +0x3188f8 */ __asm { ADD R10D,R15D }
    /* +0x3188fb */ __asm { ADD R10D,0xa5e04eaa }
    /* +0x318902 */ __asm { MOV ECX,EBX }
    /* +0x318904 */ __asm { ROR R10D,CL }
    /* +0x318907 */ __asm { OR R8D,0x1 }
    /* +0x31890b */ __asm { MOVSXD R10,R10D }
    /* +0x31890e */ __asm { MOV RCX,-0x6d83bb42b22ead56 }
    /* +0x318918 */ __asm { MOV R11W,0x557a }
    /* +0x31891d */ __asm { XOR R11D,0x53a2 }
    /* +0x318924 */ __asm { MOV DX,0x5189 }
    /* +0x318928 */ __asm { MOV qword ptr [RBP + 0x178],R9 }
    /* +0x31892f */ __asm { MOV EAX,dword ptr [RAX + -0x63e4] }
    /* +0x318935 */ __asm { IMUL R11D,R8D }
    /* +0x318939 */ __asm { ROL R11W,0x4 }
    /* +0x31893e */ __asm { XOR R11D,EBX }
    /* +0x318941 */ __asm { MOVZX R9D,R11W }
    /* +0x318945 */ __asm { LEA R8D,[R15 + RDX*0x1] }
    /* +0x318949 */ __asm { ADD R8D,0xfffffbe1 }
    /* +0x318950 */ __asm { XOR R8D,EBX }
    /* +0x318953 */ __asm { MOVZX EDX,R8W }
    /* +0x318957 */ __asm { LEA R12,[0x7fffa477efcc] }
    /* +0x31895e */ __asm { IMUL R13,RCX,0x38bb4ccf }
    /* +0x318965 */ __asm { ADD R13,-0x199ea5c3 }
    /* +0x31896c */ __asm { LEA R8,[RBP + 0x1320] }
    /* +0x318973 */ __asm { SYSCALL }
    /* +0x318975 */ __asm { MOV ECX,R15D }
    /* +0x318978 */ __asm { ROR R13,CL }
    /* +0x31897b */ __asm { CMP R12,R13 }
    /* +0x31897e */ __asm { NOP }
    /* +0x31897f */ __asm { NOP }
    /* +0x318980 */ __asm { NOP }
    /* +0x318981 */ __asm { NOP }
    /* +0x318982 */ __asm { NOP }
    /* +0x318983 */ __asm { NOP }
    /* +0x318984 */ __asm { NOP }
    /* +0x318985 */ __asm { NOP }
    /* +0x318986 */ __asm { NOP }
    /* +0x318987 */ __asm { NOP }
    /* +0x318988 */ __asm { NOP }
    /* +0x318989 */ __asm { NOP }
    /* +0x31898a */ __asm { NOP }
    /* +0x31898b */ __asm { MOV qword ptr [RBP + 0x1320],RAX }
    /* +0x318992 */ __asm { MOV R8W,0x32b8 }
    /* +0x318997 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x31899e */ __asm { XOR R8D,ECX }
    /* +0x3189a1 */ __asm { ROL R8W,0x5 }
}


// ============================================================================
// Function : Unwind@7fffa4a898f0  |  RVA: 0x3198f0  |  Size: 327 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a898f0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint32_t uVar4;
  
  if (*(int64_t *)(param_2 + 0x14a8) != 0) {
    iVar3 = (int)*(uint64_t *)(param_2 + 0x1498);
    plVar1 = *(int64_t **)((int64_t)(-0x5ed5d3a4 - iVar3) + 0x7fffa478ee96);
    if (plVar1 == (int64_t *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    uVar4 = *(int *)(param_2 + 0x184) * 0x480650da ^ 0x94e75b78;
    LOCK();
    plVar1 = (int64_t *)((int64_t)(int)(uVar4 << 10 | uVar4 >> 0x16) + 0x7fffa47c6296);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)(*(int *)(param_2 + 0x184) * 0x2cef08a7 + 0x590b6ce3) -
                        (*(int64_t *)(uint64_t)(uint32_t)((iVar3 + 0x27ee1cde) * -0x42d85197) +
                         *(int64_t *)(param_2 + 0x14a8) + lVar2));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4a89a37  |  RVA: 0x319a37  |  Size: 24 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa4a89a37(void)

{
  FUN_7fffa4f54478(5);
  return;
}


// ============================================================================
// Function : FUN_7fffa4a89a50  |  RVA: 0x319a50  |  Size: 915 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4a89a50(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint16_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint16_t uVar8;
  int64_t lVar9;
  uint32_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  
  uVar4 = (int)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0xc1bd) * -0x25c1;
  uVar7 = (uint64_t)uVar4;
  uVar12 = ~uVar7;
  uVar12 = (uVar7 & ~param_3) * 0x54802b0f + (~param_3 | uVar7) * 0xd8abb98 +
           (param_3 & uVar12) * 0x629141d4 +
           (uVar12 ^ param_3) * -0x17da1c15 + (uVar7 ^ param_3) * -0x6c5a4724 +
           (uVar12 & param_3) * -0x865b2d;
  uVar3 = (uint32_t)uVar12;
  bVar2 = (uint8_t)uVar12;
  uVar1 = (uint16_t)uVar12;
  uVar8 = 0x5f42 - uVar1 ^ 0xef26;
  lVar9 = (int64_t)(short)((uVar1 ^ 0x10b6) + 0x962e ^ 0xac2d);
  *(uint8_t *)((int64_t)(int)(((uVar3 + 0x9ff3d78d) * 0x20 | uVar3 + 0x9ff3d78d >> 0x1b) + 0xb798544b)
           + 0x7fffa478efef) = bVar2 ^ 0x7d;
  *(uint8_t (*) [16])(lVar9 + 0x7fffa4789ad1) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar9 + 0x7fffa4789ac5) = (uint8_t  [16])0x0;
  *(uint32_t *)((int64_t)(short)(uVar8 << 3 | uVar8 >> 0xd) + 0x7fffa478b6a4) = uVar4 + uVar3 & 0xffff;
  lVar9 = rdtsc();
  lVar9 = lVar9 * (0xb048b0300a646d0 - uVar12) + 1;
  uVar4 = uVar3 | 1;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 4;
    lVar9 = ((uVar12 ^ 0x985824581dfdd74f) << 5 | (uVar12 ^ 0x985824581dfdd74f) >> 0x3b) * lVar9 + 1
    ;
    lVar11 = (0xb048b02459313b7 - uVar12 ^ 0xcd155569) * lVar9 + 1;
    *(char *)(uVar6 + (int64_t)
                      (int)(0xdfffe3a6U >> (bVar2 & 0x1f) | -0x20001c5a << 0x20 - (bVar2 & 0x1f)) +
                      0x7fffa4792850) = (char)((uint64_t)lVar9 >> 0x20);
    lVar5 = lVar11 * 0xb048b02f656e653 + 1;
    lVar9 = lVar5 * ((0x56e6530b0eda6373 - uVar12) * 0x1000000 | 0x56e6530b0eda6373 - uVar12 >> 0x28
                    ) + 1;
    *(char *)(uVar6 + ((int64_t)(short)(0x21c0U >> (bVar2 & 0xf) | 0x21c0 << 0x10 - (bVar2 & 0xf))
                      ^ 0xffffffffffff8354U) + 0x7fffa478b834) = (char)((uint64_t)lVar9 >> 0x20);
    *(char *)((uVar6 | 1) +
             (int64_t)(int)(uVar4 * -0x6a800000 | uVar4 * -0x515642d5 >> 9) + 0x7fffa4793a48) =
         (char)((uint64_t)lVar11 >> 0x20);
    *(char *)(uVar6 + (int64_t)(int)(uVar3 ^ 0xf5b02ca2) + 0x7fffa478f8a9) =
         (char)((uint64_t)lVar5 >> 0x20);
  } while ((uVar7 * 0x10000 | uVar7 >> 0x30) * 0x19951b7b76387caf != 0x70efb53d39040000);
  uVar10 = (uint32_t)uVar7 + 0x4ebc4bce;
  lVar9 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)((uVar10 * 0x1000000 | uVar10 >> 8) - uVar3) +
                          0x7fffa478e9c0) * 0x24924925 + 0x24924925) * 7;
  *(uint32_t *)
   ((uint64_t)(uint32_t)((int)((uint64_t)lVar9 >> 0x20) << 2) +
   (int64_t)(short)~(((short)uVar6 + 5) * ((uVar1 ^ 0x6c57) << 4 | (uVar1 ^ 0x6c57) >> 0xc)) +
   0x7fffa478a5ba) = 0xd461e0b;
  *(char *)((int64_t)(int)((uVar4 * 0x58000000 | uVar4 * 0x2a31528b >> 5) ^ (uint32_t)uVar7) +
           0x7fffa478d23d) = (char)((uint64_t)lVar9 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4a89e40  |  RVA: 0x319e40  |  Size: 251 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4a89e40(void)

{
  uRam00007fffa47bd490 = 0;
  puRam00007fffa47bd488 = &UNK_7fffa56ee720;
  uRam00007fffa47bd480 = 1;
  uRam00007fffa47bd478 = 0x3f;
  uRam00007fffa47bd498 = 0;
  uRam00007fffa47bd4a0 = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa4a89f40  |  RVA: 0x319f40  |  Size: 1213 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4a8a132) */
/* WARNING: Removing unreachable block (ram,0x7fffa4a8a0c3) */

void FUN_7fffa4a89f40(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint64_t in_RAX;
  int iVar5;
  uint64_t unaff_RBX;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t unaff_R12;
  int64_t lVar10;
  uint16_t uVar11;
  
  uVar8 = ~in_RAX;
  uVar6 = ~unaff_R12;
  uVar8 = (unaff_R12 ^ unaff_RBX | uVar8) * 0xf933e771 +
          (uVar8 & unaff_RBX & uVar6) * -0xf933e771 +
          (~(unaff_RBX | in_RAX) & unaff_R12) * -0xe42bce84 +
          (unaff_R12 ^ unaff_RBX ^ uVar8) * -0xf933e771 +
          (uVar6 & ~unaff_RBX | in_RAX) * -0xd3fc3f0b + (unaff_RBX | in_RAX | uVar6) * 0x150818ed +
          ((unaff_RBX | unaff_R12) & uVar8) * -0xd3fc3f0b;
  iVar9 = (int)uVar8;
  iVar5 = (0x7aae68bb - iVar9) * 0x86729e3;
  *(uint8_t *)((int64_t)iVar5 + 0x7fffa47cc586) = '\x1e' - (uint8_t)uVar8;
  auRam00007fffa47bfbec = (uint8_t  [16])0x0;
  auRam00007fffa47bfbdc = (uint8_t  [16])0x0;
  auRam00007fffa47bfbcc = (uint8_t  [16])0x0;
  uRam00007fffa47bfbfc = 0;
  uVar6 = rdtsc();
  lVar7 = ((uVar8 ^ 0x177bdb57719aca4a) << 0xc | (uVar8 ^ 0x177bdb57719aca4a) >> 0x34) *
          (uVar6 & 0xffffffff00000000 | CONCAT44(iVar5 >> 0x1f,(int)uVar6)) * -0x6ab7e70d + 0xb;
  uVar6 = 0;
  do {
    bVar2 = (uint8_t)uVar8 & 0xf;
    uVar1 = uVar6 + 3;
    lVar10 = ((uVar8 ^ 0x6a379e4e448cf86) + 0x61b9ed3c ^ 0x73ae9d21) * lVar7 + 0xb;
    lVar7 = lVar10 * 0x6a379e4cfd84bf5 + 0xb;
    *(char *)(uVar6 + (int64_t)(-0x410c77a4 - iVar9) + 0x7fffa47c9973) =
         (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(uVar6 + (int64_t)(short)((-0x570c << bVar2 | 0xa8f4U >> 0x10 - bVar2) + 0xa644) +
                      0x7fffa47c2b2f) = (char)((uint64_t)lVar10 >> 0x20);
    lVar7 = lVar7 * 0x6a379e4cfd84bf5 + 0xb;
    *(char *)(uVar6 + (int64_t)(-0x410cb68c - iVar9) + 0x7fffa47cd85c) =
         (char)((uint64_t)lVar7 >> 0x20);
    uVar6 = uVar1;
  } while (((uVar1 << 0x25 | uVar1 >> 0x1b) ^ 0xc44368e9) * 0x125ef966358a768f != 0x2a3652897e9d0027
          );
  uVar3 = (uint16_t)uVar8;
  uVar11 = (uVar3 ^ 0xf273) << 3 | (uVar3 ^ 0xf273) >> 0xd;
  uVar4 = (uint16_t)uVar1;
  bVar2 = (uint8_t)uVar1 & 0xf;
  uVar6 = (uint64_t)
          ((uint32_t)*(uint8_t *)(((int64_t)(short)(uVar4 + 0x834) ^ 0xfffffffffffffd2bU) + 0x7fffa47c0618
                          ) * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((int64_t)(short)(uVar4 + 0xacb3 ^ uVar3) + 0x7fffa47c70b9 + (uVar6 >> 0x20) * 8)
       = *(uint64_t *)
          ((int64_t)(short)(uVar11 >> bVar2 | uVar11 << 0x10 - bVar2) + 0x7fffa47c2054);
  *(char *)((int64_t)(short)((uVar4 | 1) * 0x122b + 0x381c ^ uVar3) + 0x7fffa47c7042) =
       (char)(uVar6 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4a8a400  |  RVA: 0x31a400  |  Size: 1323 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4a8a400(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  int64_t in_RAX;
  uint32_t uVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  int64_t lVar13;
  uint8_t bVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint64_t in_R10;
  uint8_t *pbVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  int iVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint8_t in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint8_t bStack_a4;
  
  uVar22 = (uint64_t)in_stack_00000028;
  pbVar20 = (uint8_t *)(in_RAX + 0x3993f357U << 0x3a ^ in_RAX + 0x3993f357U);
  if (uVar22 + 2 <= in_stack_00000030) {
    uVar7 = (in_R10 << 0x34 | in_R10 >> 0xc) ^ (in_R10 << 0x38 | in_R10 >> 8) ^ in_R10;
    uVar7 = (uVar7 << 0x28 | uVar7 >> 0x18) ^ (uVar7 << 0x30 | uVar7 >> 0x10) ^ uVar7;
    uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) ^ (uVar7 << 0x10 | uVar7 >> 0x30) ^ uVar7;
    uVar9 = uVar7 << 0x20 | uVar7 >> 0x20;
    uVar9 = ((uVar7 >> 0x20) << 0x27 | uVar9 >> 0x19) ^ (uVar9 << 0x18 | (uVar7 & 0xffffffff) >> 8)
            ^ uVar9;
    uVar9 = (uVar9 << 0xe | uVar9 >> 0x32) ^ (uVar9 << 0x30 | uVar9 >> 0x10) ^ uVar9;
    uVar9 = (uVar9 << 0x1c | uVar9 >> 0x24) ^ (uVar9 << 0x20 | uVar9 >> 0x20) ^ uVar9;
    bVar5 = (uint8_t)in_stack_00000038;
    lVar13 = (uVar9 << 8 | uVar9 >> 0x38) * 0x477d39ccc58c4c69;
    if (((((uint8_t)(*(uint8_t *)(lVar13 + 1 + uVar22) & 0x18) != (uint8_t)(0x7c - bVar5)) &&
         (uVar22 + 3 <= in_stack_00000030)) && (bVar1 = pbVar20[5], (bVar1 & 0x20) == 0)) &&
       (((pbVar20[6] | bVar1) & 3) == 0)) {
      uVar3 = (uint32_t)(uVar7 >> 0x20);
      uVar11 = ~uVar3;
      uVar6 = (uint32_t)in_stack_00000038;
      iVar23 = (int)(in_stack_00000038 | 1);
      pbVar20[5] = bVar1 | 8;
      pbVar20[2] = (pbVar20[2] & 0xf0) + 1;
      pbVar20[0x20] = *(uint8_t *)(lVar13 + uVar22);
      bVar1 = *(uint8_t *)(lVar13 + 1 + uVar22);
      pbVar20[0x21] = bVar1;
      bVar2 = *(uint8_t *)(lVar13 + 2 + uVar22);
      uVar24 = (uint32_t)bVar2;
      uVar12 = ~uVar24;
      bVar4 = (bVar5 | 1) * 'o' ^ 0xb2;
      uVar26 = ~(uint32_t)bVar2 >> 3 & 0xf;
      uVar8 = (uint32_t)(-1 < (char)bVar1) * 2;
      bVar14 = (uint8_t)~bVar1 >> 4 & 4;
      uVar18 = ((uint32_t)(bVar1 & 0x1f) << 9 | *(uint32_t *)(pbVar20 + 0x18) & 0xfff00070 |
                (uint32_t)(bVar2 >> 7) | (uint32_t)((uint8_t)~bVar1 >> 2 & 8) | (uVar24 & 3) << 7) +
               uVar26 * 0x10000 + (bVar2 & 4) * 0x1000 | (uint32_t)bVar14;
      uVar10 = ~uVar18;
      uVar21 = uVar8 & uVar10;
      uVar27 = uVar18 ^ uVar8;
      uVar25 = (uint32_t)bVar2;
      uVar16 = ~uVar8;
      uVar19 = uVar16 & uVar18 & uVar3;
      uVar17 = uVar16 & uVar18 & uVar11;
      pbVar20[0x22] = bVar2;
      uVar15 = uVar11 ^ uVar21;
      if ((-0x2f759fd0 << (bVar5 & 0x1f) | 0xd08a6030U >> 0x20 - (bVar5 & 0x1f)) <=
          (uVar6 + 0x7071cf33 ^ 0x5c8c6522)) {
        uVar15 = uVar11 & uVar21;
      }
      uVar8 = ((uVar25 & uVar17) - ((uVar21 | uVar3) ^ (uint32_t)bVar2)) * 0xf68fa9a +
              ((uVar19 & uVar12) - (uVar19 & bVar2)) * 0xe04a4b8 +
              (uVar15 & uVar12) *
              ~(iVar23 * 0x33000000 | (uint32_t)((in_stack_00000038 | 1) * -0x7ebc68206697e5cd >> 0x28))
              + (uVar17 & uVar12) * ~(iVar23 * -0x7d178b22) +
              ((((uVar18 ^ uVar16) & uVar3 ^ uVar25) * -0x7d14cc16 +
                ((uVar18 | uVar16) & uVar3 ^ uVar25) *
                ((0xc006775a - uVar6 ^ 0x4c8b8904) + 0x6e14809) +
                (uVar27 | uVar11 | uVar24) * ((uVar6 | 1) * 0x2b3d2a81 ^ 0x238c4c9) +
                (uVar10 ^ uVar11 ^ uVar8 | uVar12) * -0x7bb07633 +
               ((uVar8 | uVar10) & uVar3 ^ uVar25) * 0xf68fa9b) -
              (uVar12 ^ uVar3 ^ (uVar18 | uVar8))) +
              ((uVar3 ^ uVar27) & uVar12) * ((uVar6 | 1) * -0x269c2763 + -0x294d4240) +
              (uVar11 & bVar2 & uVar27) * 0x6c477b99 + (~(bVar2 | uVar8 | uVar18) & uVar3) * -4 +
              ((uVar3 & uVar12) - ((uVar18 | uVar8 | uVar3) ^ uVar25)) * 2;
      *(uint32_t *)(pbVar20 + 0x18) = uVar8;
      if ((uint8_t)(bVar4 << 4 | bVar4 >> 4) != (uint8_t)((*pbVar20 & 3) * -0x2d + 0x72)) {
        if (-1 < (char)bVar1 != 0 || bVar14 != 0) {
          return;
        }
        bVar5 = (bVar5 | 1) * '\'' + 0x75;
        bStack_a4 = (uint8_t)uVar26;
        if ((uint8_t)(bVar5 * '\x10' | bVar5 >> 4) <= bStack_a4) {
          return;
        }
        *(uint32_t *)(pbVar20 + 0x18) = uVar8 & 0xffff7ff7;
      }
      pbVar20[0xb] = pbVar20[0xb] + 3;
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4a8a930  |  RVA: 0x31a930  |  Size: 1157 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t * FUN_7fffa4a8a930(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint32_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint8_t bVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  uint32_t uVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint8_t bVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint64_t *puVar19;
  uint32_t uVar20;
  uint64_t in_R10;
  uint64_t uVar21;
  uint64_t *puVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  uint64_t uVar25;
  uint32_t uVar26;
  
  lVar5 = *(int64_t *)(param_2 + 0x70);
  uVar15 = *(uint32_t *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 300);
  bVar3 = *(uint8_t *)(param_2 + 0x104);
  bVar12 = 0x20 - (char)*(uint32_t *)(param_2 + 0x108);
  uVar24 = *(uint32_t *)(param_2 + 0x2c);
  uVar16 = (uint64_t)uVar24;
  uVar17 = 1 << (*(uint8_t *)(param_2 + 0x100) & 0x1f);
  uVar18 = 1 << (*(uint8_t *)(param_2 + 0x10c) & 0x1f);
  uVar23 = 1 << (bVar3 & 0x1f);
  param_1 = (param_1 << 0x36 | param_1 >> 10) ^ (param_1 << 0xc | param_1 >> 0x34) ^ param_1;
  uVar21 = (in_R10 << 0xf | in_R10 >> 0x31) ^ 0x5fcc5399;
  puVar22 = (uint64_t *)(uVar21 + 0x71b277e1);
  lVar6 = *(int64_t *)(param_2 + 0x80);
  lVar7 = *(int64_t *)(param_2 + 8);
  uVar26 = (int)puVar22 - (int)lVar7;
  uVar9 = uVar26;
  if (uVar26 < uVar24) {
    uVar9 = uVar24;
  }
  uVar24 = uVar26 - uVar23;
  if (uVar26 < uVar23) {
    uVar24 = 0;
  }
  param_1 = (param_1 << 0x2c | param_1 >> 0x14) ^ (param_1 << 0x18 | param_1 >> 0x28) ^ param_1;
  param_1 = (param_1 << 0x30 | param_1 >> 0x10) ^ (param_1 << 0x18 | param_1 >> 0x28) ^ param_1;
  param_1 = (param_1 << 0x30 | param_1 >> 0x10) ^ (param_1 << 0x20 | param_1 >> 0x20) ^ param_1;
  puVar10 = (uint64_t *)(param_1 << 0x20 | param_1 >> 0x20);
  uVar20 = uVar26 - uVar17;
  if (uVar26 - uVar15 <= uVar17) {
    uVar20 = uVar15;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar20 = uVar15;
  }
  puVar19 = puVar10;
  do {
    if (uVar9 == uVar16) break;
    uVar14 = (uint64_t)((uint32_t)(*(int *)(lVar7 + uVar16) * -0x61c8864f) >> (bVar12 & 0x1f));
    puVar19 = (uint64_t *)(uint64_t)((uint32_t)uVar16 & ~(-1 << (bVar3 & 0x1f)));
    *(uint32_t *)(lVar6 + (int64_t)puVar19 * 4) = *(uint32_t *)(lVar5 + uVar14 * 4);
    *(uint32_t *)(lVar5 + uVar14 * 4) = (uint32_t)uVar16;
    uVar16 = uVar16 + 1;
  } while (iVar4 == 0);
  *(uint32_t *)(param_2 + 0x2c) = uVar26;
  uVar15 = *(uint32_t *)(lVar5 + (uint64_t)(*(uint32_t *)puVar22 * -0x61c8864f >> (bVar12 & 0x1f)) * 4);
  if (uVar20 <= uVar15) {
    puVar1 = (uint64_t *)((int64_t)puVar10 - 7);
    puVar2 = (uint64_t *)(uVar21 + 0x71b277e9);
    uVar16 = 3;
    do {
      puVar19 = (uint64_t *)(lVar7 + (uint64_t)uVar15);
      puVar11 = (uint64_t *)0x0;
      if (*(int *)((uVar16 - 3) + (int64_t)puVar19) == *(int *)(uVar21 + 0x71b277de + uVar16)) {
        if (puVar22 < puVar1) {
          uVar9 = (param_4 | 1) * -0x38a4caab ^ 0x6462cdfd;
          uVar14 = *puVar22;
          uVar25 = *puVar19;
          bVar8 = uVar25 == uVar14;
          if ((int64_t)(uint64_t)(uVar9 << 10 | uVar9 >> 0x16) < -0x128be681) {
            bVar8 = (int64_t)uVar25 <= (int64_t)uVar14;
          }
          if (bVar8) {
            puVar19 = (uint64_t *)(lVar7 + 8 + (uint64_t)uVar15);
            puVar11 = (uint64_t *)0x8;
            puVar13 = puVar2;
            if (puVar2 < puVar1) {
LAB_7fffa4a8acb0:
              if (*puVar19 == *puVar13) goto code_r0x7fffa4a8acbb;
              uVar9 = 0;
              for (uVar14 = *puVar13 ^ *puVar19; (uVar14 & 1) == 0;
                  uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                uVar9 = uVar9 + 1;
              }
              uVar14 = (uint64_t)(uVar9 >> 3) + (int64_t)puVar11;
              goto joined_r0x7fffa4a8ad0c;
            }
            goto LAB_7fffa4a8aba5;
          }
          uVar9 = 0;
          puVar11 = (uint64_t *)(uVar14 ^ uVar25);
          for (puVar19 = puVar11; ((uint64_t)puVar19 & 1) == 0;
              puVar19 = (uint64_t *)((uint64_t)puVar19 >> 1 | 0x8000000000000000)) {
            uVar9 = uVar9 + 1;
          }
          uVar14 = (uint64_t)(uVar9 >> 3);
        }
        else {
          puVar13 = puVar22;
LAB_7fffa4a8aba5:
          if ((puVar13 < (uint64_t *)((int64_t)puVar10 - 3U)) &&
             (puVar11 = (uint64_t *)(uint64_t)(uint32_t)*puVar19, (uint32_t)*puVar19 == (uint32_t)*puVar13)) {
            puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
          }
          if ((puVar13 < (uint64_t *)((int64_t)puVar10 - 1U)) &&
             (puVar11 = (uint64_t *)(uint64_t)(uint16_t)*puVar19,
             (uint16_t)*puVar19 == (uint16_t)*puVar13)) {
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
            puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
          }
          if (puVar13 < puVar10) {
            uVar25 = (uint64_t)((char)*puVar19 == (char)*puVar13);
            puVar11 = (uint64_t *)(uint64_t)(param_4 + 0x347c0c49);
            uVar14 = -uVar25;
            if (puVar11 <= (uint64_t *)(int64_t)(int)(param_4 ^ 0x8ec4e094)) {
              uVar14 = uVar25;
            }
            puVar13 = (uint64_t *)((int64_t)puVar13 + uVar14);
          }
          uVar14 = (int64_t)puVar13 - (int64_t)puVar22;
        }
joined_r0x7fffa4a8ad0c:
        if (uVar16 < uVar14) {
          puVar11 = (uint64_t *)((int64_t)puVar22 + uVar14);
          *param_3 = (uint64_t)((uVar26 + 3) - uVar15);
          uVar16 = uVar14;
          if (puVar11 == puVar10) {
            return puVar11;
          }
        }
      }
      if (uVar15 <= uVar24) {
        return puVar11;
      }
      bVar3 = (uint8_t)param_4 & 0xf;
      uVar9 = CONCAT22((short)((uint64_t)puVar11 >> 0x10),0U >> bVar3 | 0 << 0x10 - bVar3);
      uVar15 = *(uint32_t *)(lVar6 + (uint64_t)(uVar15 & uVar23 - 1) * 4);
      if (uVar15 < uVar20) {
        return (uint64_t *)(uint64_t)uVar9;
      }
      uVar18 = uVar18 - 1;
      uVar9 = uVar9 * 0x2cdd & 0xffff;
      puVar19 = (uint64_t *)(uint64_t)uVar9;
    } while (uVar18 != uVar9);
  }
  return puVar19;
code_r0x7fffa4a8acbb:
  puVar13 = puVar13 + 1;
  puVar11 = puVar11 + 1;
  puVar19 = puVar19 + 1;
  if (puVar1 <= puVar13) goto LAB_7fffa4a8aba5;
  goto LAB_7fffa4a8acb0;
}


// ============================================================================
// Function : FUN_7fffa4a8add0  |  RVA: 0x31add0  |  Size: 126 bytes
// Callers  : none
// Callees  : _guard_dispatch_icall@0xf30810
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint64_t FUN_7fffa4a8add0(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  char cVar2;
  uint64_t *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_1;
    do {
      if (((code *)*puVar3 != (code *)0x0) && (cVar2 = (*(code *)*puVar3)(), cVar2 == '\0')) break;
      puVar3 = puVar3 + 2;
    } while (puVar3 != param_2);
    if (puVar3 != param_2) {
      if (puVar3 != param_1) {
        puVar3 = puVar3 + -1;
        do {
          if ((puVar3[-1] != 0) && ((code *)*puVar3 != (code *)0x0)) {
            (*(code *)*puVar3)(0);
          }
          puVar1 = puVar3 + -1;
          puVar3 = puVar3 + -2;
        } while (puVar1 != param_1);
      }
      return 0;
    }
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa4a8ae60  |  RVA: 0x31ae60  |  Size: 103 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa4a8ae60(uint64_t *param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  
  param_2 = param_2 - (int64_t)param_1;
  while( true ) {
    if (((uint64_t)param_1 & 7) == 0) {
      while ((((int)param_2 + (int)param_1 & 0xfffU) < 0xff9 &&
             (uVar2 = *param_1, uVar2 == *(uint64_t *)(param_2 + (int64_t)param_1)))) {
        param_1 = param_1 + 1;
        if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bVar1 = (uint8_t)*param_1;
    if (bVar1 != *(uint8_t *)(param_2 + (int64_t)param_1)) break;
    param_1 = (uint64_t *)((int64_t)param_1 + 1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint64_t)(bVar1 < *(uint8_t *)(param_2 + (int64_t)param_1)) | 1;
}


// ============================================================================
// Function : FUN_7fffa4a8aee0  |  RVA: 0x31aee0  |  Size: 4625 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa4a8aee0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  char *pcVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint16_t uVar8;
  bool bVar9;
  uint8_t bVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint8_t bVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  int64_t lVar26;
  uint64_t *puVar27;
  uint64_t *puVar28;
  uint32_t uVar29;
  uint32_t uVar30;
  uint8_t *pbVar31;
  uint32_t uVar32;
  int64_t lVar33;
  uint64_t in_R11;
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t *puVar36;
  int64_t lVar37;
  uint64_t *puVar38;
  int iVar39;
  uint32_t uVar40;
  int64_t lVar41;
  uint32_t uVar42;
  uint8_t bVar44;
  uint8_t bVar45;
  uint8_t bVar46;
  uint8_t auVar43 [16];
  char cVar47;
  uint8_t uVar50;
  char cVar51;
  uint8_t uVar52;
  char cVar53;
  uint8_t uVar54;
  char cVar55;
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t uStack_1c8;
  int64_t lStack_1b8;
  uint32_t auStack_188 [66];
  uint64_t uStack_80;
  uint64_t *puStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint64_t *puStack_60;
  int iStack_54;
  int *piStack_50;
  uint64_t *puStack_48;
  
  param_2 = param_2 << 0x29 ^ param_2;
  param_2 = param_2 >> 10 ^ param_2;
  param_2 = param_2 >> 0x14 ^ param_2;
  uVar34 = in_R11 ^ 0x3ec9b050;
  uVar34 = (uVar34 << 0x1f | in_R11 >> 0x21) ^ (uVar34 << 0x1c | in_R11 >> 0x24) ^ uVar34;
  uVar34 = (uVar34 << 0x3e | uVar34 >> 2) ^ (uVar34 << 0x38 | uVar34 >> 8) ^ uVar34;
  uVar35 = (uVar34 << 0x3c | uVar34 >> 4) ^ uVar34;
  uVar15 = uVar34 << 0x30 | uVar34 >> 0x10;
  bVar10 = (uint8_t)param_3;
  uVar34 = uVar35 & uVar15;
  if ((param_3 ^ 0x292d461e) + 0xfd450ef2 <
      (0xec109b7U >> (bVar10 & 0x1f) | 0xec109b7 << 0x20 - (bVar10 & 0x1f))) {
    uVar34 = uVar35 ^ uVar15;
  }
  uVar34 = (uVar34 << 0x20 | uVar34 >> 0x20) ^ (uVar34 << 0x38 | uVar34 >> 8) ^ uVar34;
  puVar36 = (uint64_t *)((uVar34 << 0x10 | uVar34 >> 0x30) * -0x7fc01ff007fc01ff);
  if ((uint64_t)(int64_t)(int)(param_3 + 0x26798373) < 0x8943770b) {
    uVar16 = (param_3 ^ 0x7d5ac4a0) << 5 | (param_3 ^ 0x7d5ac4a0) >> 0x1b;
  }
  else {
    uVar16 = ((param_3 ^ 0xeeb0b762) << 4 | (param_3 ^ 0xeeb0b762) >> 0x1c) * 0x1daaf23b;
  }
  puVar17 = (uint64_t *)(param_2 >> 0x28 ^ param_2);
  lVar23 = *(int64_t *)(param_5 + 0x38);
  uVar4 = *(uint32_t *)(param_5 + 0x18);
  uVar30 = *(uint32_t *)(param_5 + 0x1c);
  uVar32 = 1 << (*(uint8_t *)(param_5 + 0x100) & 0x1f);
  uVar29 = 4;
  if (*(uint32_t *)(param_5 + 0x10c) < 4) {
    uVar29 = *(uint32_t *)(param_5 + 0x10c);
  }
  puStack_78 = *(uint64_t **)(param_5 + 0xf8);
  uVar15 = *puVar17 * -0x30e4432340650000 >> (0x38U - *(char *)((int64_t)puStack_78 + 0x34) & 0x3f)
  ;
  lVar41 = *(int64_t *)(param_5 + 8);
  iVar39 = 1 << ((uint8_t)uVar29 & 0x1f);
  uVar34 = (int64_t)puVar17 - lVar41;
  uVar40 = (uint32_t)uVar34;
  lVar33 = puStack_78[7];
  lVar13 = puStack_78[0xe];
  uVar29 = uVar40 - uVar32;
  if (uVar40 - uVar30 <= uVar32) {
    uVar29 = uVar30;
  }
  if (*(int *)(param_5 + 0x28) != 0) {
    uVar29 = uVar30;
  }
  lVar6 = *(int64_t *)(param_5 + 0x70);
  iStack_54 = *(int *)(param_5 + 0x34);
  uStack_80 = *(uint64_t *)(param_5 + 0x60);
  puStack_48 = (uint64_t *)(uint64_t)((uint32_t)(uVar15 >> 4) & 0xffffff0);
  if (*(int *)(param_5 + 300) == 0) {
    uVar30 = *(uint32_t *)(param_5 + 0x2c);
    uVar35 = (uint64_t)uVar30;
    lVar26 = lVar6;
    lVar37 = lVar23;
    if (0x180 < uVar40 - uVar30) {
      if (uVar30 < (uint32_t)(int)(short)~(((short)param_3 + -0x5c7f) * (short)(uVar16 | 1))) {
        uStack_68 = (uint64_t)(0x38U - iStack_54);
        do {
          bVar44 = (uint8_t)uVar16 & 0x1f;
          uVar20 = (uint64_t)((uint32_t)uVar35 & 7);
          uVar32 = *(uint32_t *)(param_5 + 0x40 + uVar20 * 4);
          *(int *)(param_5 + 0x40 + uVar20 * 4) =
               (int)((*(int64_t *)(lVar41 + 8 + uVar35) * -0x30e4432340650000 ^
                     *(uint64_t *)(param_5 + 0x60)) >> ((uint8_t)(0x38U - iStack_54) & 0x3f));
          uVar20 = (uint64_t)(uVar32 >> 4 & 0xfffffff0);
          bVar14 = *(uint8_t *)(lVar23 + uVar20);
          bVar45 = -bVar14;
          if (((0x7b70ae72 << bVar44 | 0x7b70ae72U >> 0x20 - bVar44) + 0x37db4663) * (param_3 | 1)
              <= (-0x28360e0 - param_3) * (uVar16 | 1)) {
            bVar45 = bVar14 - 1;
          }
          bVar9 = (bVar14 & 0xf) == 1;
          if ((uVar16 - param_3) + 0xa680aa24 <= ~(uVar16 + 0x543a4aeb)) {
            bVar9 = (bVar14 & 0xf) != 0;
          }
          iVar11 = 0;
          if (bVar9) {
            iVar11 = 0xf;
          }
          uVar42 = iVar11 + (bVar45 & 0xf);
          *(char *)(lVar23 + uVar20) = (char)uVar42;
          *(char *)((uint64_t)uVar42 + lVar23 + uVar20) = (char)uVar32;
          *(uint32_t *)(lVar6 + uVar20 * 4 + (uint64_t)uVar42 * 4) = (uint32_t)uVar35;
          uVar35 = uVar35 + 1;
        } while (uVar30 + 0x60 != uVar35);
        lVar37 = *(int64_t *)(param_5 + 0x38);
        lVar26 = *(int64_t *)(param_5 + 0x70);
      }
      uVar30 = uVar40 - 0x20;
      uVar35 = (uint64_t)uVar30;
      plVar2 = (int64_t *)(uVar35 + lVar41);
      uVar42 = ((int)(int64_t *)((int64_t)puVar17 + 1U) - (int)plVar2) + 1;
      uVar32 = 8;
      if (uVar42 < 8) {
        uVar32 = uVar42;
      }
      uVar42 = 0;
      if (plVar2 <= (int64_t *)((int64_t)puVar17 + 1U)) {
        uVar42 = uVar32;
      }
      uVar32 = (uVar40 + uVar42) - 0x20;
      if (uVar30 < uVar32) {
        uVar20 = *(uint64_t *)(param_5 + 0x60);
        bVar14 = 0x38 - (char)*(uint32_t *)(param_5 + 0x34);
        if ((uVar42 & 1) == ((uVar16 | 1) * 0x8fcc - param_3 & 0xffff)) {
          uVar18 = uVar35;
        }
        else {
          *(int *)(param_5 + 0x40 + (uint64_t)(uVar30 & 7) * 4) =
               (int)((*plVar2 * -0x30e4432340650000 ^ uVar20) >> (bVar14 & 0x3f));
          uVar18 = uVar35 + 1;
        }
        if (uVar42 != 1) {
          do {
            uVar42 = (uint32_t)uVar18;
            iVar11 = ~(uVar16 ^ 0x7bef1363) + param_3;
            *(int *)(param_5 + 0x40 + (uint64_t)(uVar42 & 7) * 4) =
                 (int)((*(int64_t *)(lVar41 + uVar18) * -0x30e4432340650000 ^ uVar20) >>
                      (bVar14 & 0x3f));
            uVar21 = *(int64_t *)(lVar41 + 1 + uVar18) * -0x30e4432340650000;
            uVar18 = uVar18 + 2;
            uVar22 = uVar21 * uVar20;
            if ((iVar11 * 2 | (uint32_t)(iVar11 < 0)) != 0xb4130d81) {
              uVar22 = uVar20 ^ uVar21;
            }
            *(int *)(param_5 + 0x40 + (uint64_t)(uVar42 + 1 & 7) * 4) =
                 (int)(uVar22 >> (bVar14 & 0x3f));
          } while (uVar32 != (uint32_t)uVar18);
        }
      }
    }
    if (uVar30 < uVar40) {
      lVar7 = *(int64_t *)(param_5 + 8);
      uVar5 = *(uint32_t *)(param_5 + 0x34);
      while( true ) {
        bVar14 = 0x8a - (uint8_t)uVar16;
        uVar30 = (0x2f417f0a - param_3) + uVar16;
        uVar20 = (uint64_t)((uint32_t)uVar35 & 7);
        bVar14 = (bVar14 * '\x04' | bVar14 >> 6) + bVar10;
        if ((0x772b5b35U >> (bVar10 & 0x1f) | 0x772b5b35 << 0x20 - (bVar10 & 0x1f)) <
            (uVar30 * 0x20000000 | uVar30 >> 3)) {
          bVar14 = 0;
        }
        uVar30 = *(uint32_t *)(param_5 + 0x40 + uVar20 * 4);
        *(int *)(param_5 + 0x40 + uVar20 * 4) =
             (int)((*(int64_t *)(lVar7 + 8 + uVar35) * -0x30e4432340650000 ^
                   *(uint64_t *)(param_5 + 0x60)) >> (0x38U - (char)uVar5 & 0x3f));
        uVar20 = (uint64_t)(uVar30 >> 4 & 0xfffffff0);
        lVar12 = 0;
        if ((*(uint8_t *)(lVar37 + uVar20) & 0xf) == bVar14) {
          lVar12 = 0xf;
        }
        lVar12 = lVar12 + (uint64_t)(*(uint8_t *)(lVar37 + uVar20) - 1 & 0xf);
        *(char *)(lVar37 + uVar20) = (char)lVar12;
        *(char *)(lVar37 + uVar20 + lVar12) = (char)uVar30;
        *(uint32_t *)(lVar26 + uVar20 * 4 + lVar12 * 4) = (uint32_t)uVar35;
        if ((uVar34 & 0xffffffff) - 1 == uVar35) break;
        uVar35 = uVar35 + 1;
      }
    }
    *(uint32_t *)(param_5 + 0x2c) = uVar40;
    uVar30 = *(uint32_t *)(param_5 + 0x40 + (uint64_t)(uVar40 & 7) * 4);
    *(int *)(param_5 + 0x40 + (uint64_t)(uVar40 & 7) * 4) =
         (int)((*(int64_t *)(lVar41 + 8 + (uVar34 & 0xffffffff)) * -0x30e4432340650000 ^ uStack_80)
              >> (0x38U - (char)iStack_54 & 0x3f));
  }
  else {
    uVar30 = (uint32_t)((*puVar17 * -0x30e4432340650000 ^ uStack_80) >> (0x38U - (char)iStack_54 & 0x3f)
                   );
    *(uint32_t *)(param_5 + 0x2c) = uVar40;
  }
  uVar34 = (uint64_t)(uVar30 >> 4 & 0xfffffff0);
  lVar6 = lVar6 + uVar34 * 4;
  uVar54 = (uint8_t)(uVar30 >> 0x18);
  uVar52 = (uint8_t)(uVar30 >> 0x10);
  uVar50 = (uint8_t)(uVar30 >> 8);
  auVar48._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar54,uVar54),uVar52),CONCAT14(uVar52,uVar30)) >> 0x20);
  auVar48[3] = uVar50;
  auVar48[2] = uVar50;
  auVar48[0] = (uint8_t)uVar30;
  auVar48[1] = auVar48[0];
  auVar48._8_8_ = 0;
  *(int *)(param_5 + 0x68) = *(int *)(param_5 + 0x68) + uVar30;
  auVar49 = pshuflw(auVar48,auVar48,0);
  pcVar3 = (char *)(lVar23 + uVar34);
  cVar47 = auVar49[0];
  auVar43[0] = -(*pcVar3 == cVar47);
  cVar51 = auVar49[1];
  auVar43[1] = -(pcVar3[1] == cVar51);
  cVar53 = auVar49[2];
  auVar43[2] = -(pcVar3[2] == cVar53);
  cVar55 = auVar49[3];
  auVar43[3] = -(pcVar3[3] == cVar55);
  auVar43[4] = -(pcVar3[4] == cVar47);
  auVar43[5] = -(pcVar3[5] == cVar51);
  auVar43[6] = -(pcVar3[6] == cVar53);
  auVar43[7] = -(pcVar3[7] == cVar55);
  auVar43[8] = -(pcVar3[8] == cVar47);
  auVar43[9] = -(pcVar3[9] == cVar51);
  auVar43[10] = -(pcVar3[10] == cVar53);
  auVar43[0xb] = -(pcVar3[0xb] == cVar55);
  auVar43[0xc] = -(pcVar3[0xc] == cVar47);
  auVar43[0xd] = -(pcVar3[0xd] == cVar51);
  auVar43[0xe] = -(pcVar3[0xe] == cVar53);
  auVar43[0xf] = -(pcVar3[0xf] == cVar55);
  uVar8 = (uint16_t)(SUB161(auVar43 >> 7,0) & 1) | (uint16_t)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
          (uint16_t)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
          (uint16_t)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
          (uint16_t)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
          (uint16_t)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
          (uint16_t)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
          (uint16_t)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
          (uint16_t)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
          (uint16_t)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
          (uint16_t)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
          (uint16_t)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
          (uint16_t)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
          (uint16_t)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
          (uint16_t)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar43[0xf] >> 7) << 0xf;
  uVar30 = (uint32_t)*(uint8_t *)(lVar23 + uVar34);
  if (uVar8 != 0) {
    bVar14 = *(uint8_t *)(lVar23 + uVar34) & 0xf;
    uVar35 = (uint64_t)(uint16_t)(uVar8 >> bVar14 | uVar8 << 0x10 - bVar14);
    lVar37 = 0;
    do {
      iVar11 = 0;
      for (uVar20 = uVar35; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
        iVar11 = iVar11 + 1;
      }
      uVar32 = iVar11 + uVar30 & 0xf;
      if (uVar32 != 0) {
        uVar32 = *(uint32_t *)(lVar6 + (uint64_t)uVar32 * 4);
        if (uVar32 < uVar29) goto LAB_7fffa4a8b83e;
        iVar39 = iVar39 + -1;
        auStack_188[lVar37] = uVar32;
        lVar37 = lVar37 + 1;
      }
      uVar35 = uVar35 - 1 & uVar35;
      if ((uVar35 == 0) || (iVar39 == 0)) goto LAB_7fffa4a8b83e;
    } while( true );
  }
  lVar37 = 0;
LAB_7fffa4a8b83e:
  pbVar31 = (uint8_t *)(lVar33 + (int64_t)puStack_48);
  lVar33 = 0;
  if ((uVar30 & 0xf) == 1) {
    lVar33 = 0xf;
  }
  lVar33 = (uint64_t)(uVar30 - 1 & 0xf) + lVar33;
  *(uint8_t *)(lVar23 + uVar34) = (char)lVar33;
  ((uint8_t *)(lVar23 + uVar34))[lVar33] = auVar48[0];
  iVar11 = *(int *)(param_5 + 0x2c);
  *(int *)(param_5 + 0x2c) = iVar11 + 1;
  *(int *)(lVar6 + lVar33 * 4) = iVar11;
  piStack_50 = (int *)CONCAT44(piStack_50._4_4_,iVar39);
  if (lVar37 == 0) {
    uVar34 = 3;
  }
  else {
    puVar1 = (uint64_t *)((int64_t)puVar36 - 7);
    puStack_70 = (uint64_t *)((int64_t)puVar36 + -1);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar40 + 3);
    puStack_60 = puVar17 + 1;
    lVar23 = 0;
    uVar35 = 3;
    do {
      uVar30 = auStack_188[lVar23];
      puVar27 = (uint64_t *)(lVar41 + (uint64_t)uVar30);
      if (*(int *)((uVar35 - 3) + (int64_t)puVar27) == *(int *)((int64_t)puVar17 + (uVar35 - 3)))
      {
        puVar28 = puVar17;
        if (puVar17 < puVar1) {
          if (*puVar27 == *puVar17) {
            puVar27 = (uint64_t *)(lVar41 + 8 + (uint64_t)uVar30);
            lVar33 = 0;
            puVar28 = puVar17 + 1;
            do {
              uVar29 = (param_3 ^ 0x38b307d5) * -0x72e4c35d ^ uVar16;
              if (((-0x61787dbf - param_3) * (uVar16 | 1) ^ 0x93e58091) <
                  (uVar29 << 2 | uVar29 >> 0x1e)) {
                if (puVar28 <= puVar1) goto joined_r0x7fffa4a8ba24;
              }
              else if (puVar1 <= puVar28) goto joined_r0x7fffa4a8ba24;
              uVar34 = *puVar28;
              uVar20 = *puVar27;
              puVar28 = puVar28 + 1;
              lVar33 = lVar33 + 8;
              puVar27 = puVar27 + 1;
            } while (uVar20 == uVar34);
            uVar29 = 0;
            for (uVar34 = uVar34 ^ uVar20; (uVar34 & 1) == 0;
                uVar34 = uVar34 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar34 = (uint64_t)(uVar29 >> 3) + lVar33;
          }
          else {
            uVar29 = 0;
            for (uVar34 = *puVar27 ^ *puVar17; (uVar34 & 1) == 0;
                uVar34 = uVar34 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar34 = (uint64_t)(uVar29 >> 3);
          }
        }
        else {
joined_r0x7fffa4a8ba24:
          if ((puVar28 < (uint64_t *)((int64_t)puVar36 - 3U)) && ((int)*puVar27 == (int)*puVar28))
          {
            puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
            puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
          }
          if ((puVar28 < (uint64_t *)((int64_t)puVar36 + -1)) &&
             ((short)*puVar27 == (short)*puVar28)) {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
          }
          if ((((uVar16 + 0xb64e732f) * -0x17680000 | (uVar16 + 0xb64e732f) * -0x5f6382ed >> 0xd) *
               (param_3 | 1) == -0x474171ce) != puVar36 <= puVar28) {
            puVar28 = (uint64_t *)
                      ((int64_t)puVar28 + (uint64_t)((char)*puVar27 == (char)*puVar28));
          }
          uVar34 = (int64_t)puVar28 - (int64_t)puVar17;
        }
        if (uVar35 < uVar34) {
          *param_4 = (uint64_t)((uVar40 + 3) - uVar30);
          uVar35 = uVar34;
          if ((uint64_t *)((int64_t)puVar17 + uVar34) == puVar36) break;
        }
      }
      uVar34 = uVar35;
      lVar23 = lVar23 + 1;
      uVar35 = uVar34;
    } while (lVar23 != lVar37);
  }
  uStack_1c8 = (uint8_t)uVar15;
  auVar43 = pshuflw(ZEXT216(CONCAT11(uStack_1c8,uStack_1c8)),
                    ZEXT216(CONCAT11(uStack_1c8,uStack_1c8)),0);
  bVar14 = auVar43[0];
  auVar49[0] = -(*pbVar31 == bVar14);
  bVar44 = auVar43[1];
  auVar49[1] = -(pbVar31[1] == bVar44);
  bVar45 = auVar43[2];
  auVar49[2] = -(pbVar31[2] == bVar45);
  bVar46 = auVar43[3];
  auVar49[3] = -(pbVar31[3] == bVar46);
  auVar49[4] = -(pbVar31[4] == bVar14);
  auVar49[5] = -(pbVar31[5] == bVar44);
  auVar49[6] = -(pbVar31[6] == bVar45);
  auVar49[7] = -(pbVar31[7] == bVar46);
  auVar49[8] = -(pbVar31[8] == bVar14);
  auVar49[9] = -(pbVar31[9] == bVar44);
  auVar49[10] = -(pbVar31[10] == bVar45);
  auVar49[0xb] = -(pbVar31[0xb] == bVar46);
  auVar49[0xc] = -(pbVar31[0xc] == bVar14);
  auVar49[0xd] = -(pbVar31[0xd] == bVar44);
  auVar49[0xe] = -(pbVar31[0xe] == bVar45);
  auVar49[0xf] = -(pbVar31[0xf] == bVar46);
  uVar8 = (uint16_t)(SUB161(auVar49 >> 7,0) & 1) | (uint16_t)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
          (uint16_t)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
          (uint16_t)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
          (uint16_t)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
          (uint16_t)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
          (uint16_t)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
          (uint16_t)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
          (uint16_t)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
          (uint16_t)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
          (uint16_t)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
          (uint16_t)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
          (uint16_t)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
          (uint16_t)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
          (uint16_t)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar49[0xf] >> 7) << 0xf;
  if (uVar8 != 0 && iVar39 != 0) {
    puVar1 = (uint64_t *)(lVar41 + (uint64_t)uVar4);
    pcVar3 = (char *)*puStack_78;
    lVar23 = puStack_78[1];
    bVar14 = *pbVar31;
    uVar30 = *(uint32_t *)(puStack_78 + 3);
    bVar44 = bVar14 & 0xf;
    uVar15 = (uint64_t)(uint16_t)(uVar8 >> bVar44 | uVar8 << 0x10 - bVar44);
    lStack_1b8 = 0;
    do {
      iVar39 = 0;
      for (uVar35 = uVar15; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x8000000000000000) {
        iVar39 = iVar39 + 1;
      }
      uVar32 = iVar39 + (uint32_t)bVar14;
      uVar29 = uVar32 & 0xf;
      if (((uVar16 + 0xf854ae79 >> (bVar10 & 0x1f) | uVar16 + 0xf854ae79 << 0x20 - (bVar10 & 0x1f))
           + 0x3e784e3b ^ 0xd4fa08d5) <= (0x550d6a56 - param_3) * (uVar16 | 1) + 0xca9e718a) {
        uVar29 = uVar32 | 0xf;
      }
      if (uVar29 == 0) {
        uVar29 = (uint32_t)piStack_50;
      }
      else {
        uVar29 = *(uint32_t *)(lVar13 + (int64_t)puStack_48 * 4 + (uint64_t)uVar29 * 4);
        if (uVar29 < uVar30) break;
        auStack_188[lStack_1b8] = uVar29;
        lStack_1b8 = lStack_1b8 + 1;
        uVar29 = (uint32_t)piStack_50 - 1;
      }
      piStack_50 = (int *)(uint64_t)uVar29;
      uVar15 = uVar15 & uVar15 - 1;
    } while (uVar15 != 0 && uVar29 != 0);
    if (lStack_1b8 != 0) {
      puStack_48 = (uint64_t *)((int64_t)puVar36 - 3U);
      iVar39 = (int)*puVar17;
      puVar27 = (uint64_t *)((int64_t)puVar17 + 4);
      puVar28 = (uint64_t *)((int64_t)puVar36 - 7);
      piStack_50 = (int *)((int64_t)puVar17 + 0xc);
      puStack_60 = (uint64_t *)(lVar23 + 0xc);
      lVar41 = 0;
      puStack_70 = (uint64_t *)lVar23;
      uVar15 = uVar34;
      do {
        uStack_68 = (uint64_t)auStack_188[lVar41];
        if (*(int *)(lVar23 + uStack_68) == iVar39) {
          puVar19 = (uint64_t *)(uStack_68 + lVar23 + 4);
          puVar38 = (uint64_t *)(((int64_t)pcVar3 - (int64_t)puVar19) + (int64_t)puVar27);
          if (puVar36 <= puVar38) {
            puVar38 = puVar36;
          }
          puVar24 = puVar19;
          puVar25 = puVar27;
          if (puVar27 < (uint64_t *)((int64_t)puVar38 - 7U)) {
            if (*puVar19 == *puVar27) {
              lVar33 = lVar23 + 0xc + uStack_68;
              lVar13 = 0;
              do {
                puVar25 = (uint64_t *)((int64_t)piStack_50 + lVar13);
                if ((uint64_t *)((int64_t)puVar38 - 7U) <= puVar25) {
                  puVar24 = (uint64_t *)(lVar33 + lVar13);
                  goto LAB_7fffa4a8be70;
                }
                uVar34 = *(uint64_t *)(lVar33 + lVar13);
                uVar35 = *puVar25;
                bVar9 = (int64_t)uVar34 <= (int64_t)uVar35;
                if (-0x601ec6d2 -
                    (0xa9969636U >> (bVar10 & 0x1f) | -0x566969ca << 0x20 - (bVar10 & 0x1f)) ==
                    (0xa394a7fd - uVar16 ^ 0x143cefd8) + 0x1c9589b9) {
                  bVar9 = uVar34 == uVar35;
                }
                lVar13 = lVar13 + 8;
              } while (bVar9);
              uVar30 = 0;
              for (uVar35 = uVar35 ^ uVar34; (uVar35 & 1) == 0;
                  uVar35 = uVar35 >> 1 | 0x8000000000000000) {
                uVar30 = uVar30 + 1;
              }
              uVar34 = (uint64_t)(uVar30 >> 3) + lVar13;
            }
            else {
              uVar30 = 0;
              for (uVar34 = *puVar19 ^ *puVar27; (uVar34 & 1) == 0;
                  uVar34 = uVar34 >> 1 | 0x8000000000000000) {
                uVar30 = uVar30 + 1;
              }
              uVar34 = (uint64_t)(uVar30 >> 3);
            }
          }
          else {
LAB_7fffa4a8be70:
            if ((puVar25 < (uint64_t *)((int64_t)puVar38 - 3U)) &&
               ((int)*puVar24 == (int)*puVar25)) {
              puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
              puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
            }
            if ((puVar25 < (uint64_t *)((int64_t)puVar38 - 1U)) &&
               ((short)*puVar24 == (short)*puVar25)) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
              puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
            }
            if (puVar25 < puVar38) {
              puVar25 = (uint64_t *)
                        ((int64_t)puVar25 + (uint64_t)((char)*puVar24 == (char)*puVar25));
            }
            uVar34 = (int64_t)puVar25 - (int64_t)puVar27;
          }
          if ((char *)((int64_t)puVar19 + uVar34) == pcVar3) {
            puVar38 = (uint64_t *)((int64_t)puVar27 + uVar34);
            puVar25 = puVar1;
            puVar19 = puVar38;
            if (puVar38 < puVar28) {
              uVar35 = *puVar38;
              uVar20 = *puVar1;
              if (uVar20 == uVar35) {
                puVar19 = (uint64_t *)((int64_t)piStack_50 + uVar34);
                lVar33 = 8;
                if (puVar19 < puVar28) {
LAB_7fffa4a8bf50:
                  if (*(uint64_t *)((int64_t)puVar1 + lVar33) == *puVar19)
                  goto code_r0x7fffa4a8bf65;
                  uVar30 = 0;
                  for (uVar35 = *(uint64_t *)((int64_t)puVar1 + lVar33) ^ *puVar19;
                      (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x8000000000000000) {
                    uVar30 = uVar30 + 1;
                  }
                  uVar35 = (uint64_t)(uVar30 >> 3) + lVar33;
                  goto LAB_7fffa4a8c04d;
                }
LAB_7fffa4a8bf72:
                puVar25 = (uint64_t *)(lVar33 + (int64_t)puVar1);
                goto LAB_7fffa4a8bf7c;
              }
              uVar18 = (uVar20 & 0xffffffff) * (uVar35 & 0xffffffff) +
                       ((uVar35 >> 0x20) * (uVar20 & 0xffffffff) +
                        (uVar20 >> 0x20) * (uVar35 & 0xffffffff) << 0x20);
              if ((param_3 ^ 0x551fa8aa) - uVar16 == -0x67b45925) {
                uVar18 = uVar35 ^ uVar20;
              }
              uVar30 = 0;
              for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                uVar30 = uVar30 + 1;
              }
              uVar35 = (uint64_t)(uVar30 >> 3);
            }
            else {
LAB_7fffa4a8bf7c:
              if ((puVar19 < (uint64_t *)((int64_t)puVar36 - 3U)) &&
                 ((int)*puVar25 == (int)*puVar19)) {
                puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
                puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
              }
              if ((puVar19 < (uint64_t *)((int64_t)puVar36 + -1)) &&
                 ((short)*puVar25 == (short)*puVar19)) {
                puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
                puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
              }
              if (puVar19 < puVar36) {
                puVar19 = (uint64_t *)
                          ((int64_t)puVar19 + (uint64_t)((char)*puVar25 == (char)*puVar19));
              }
              uVar35 = (int64_t)puVar19 - (int64_t)puVar38;
            }
LAB_7fffa4a8c04d:
            uVar34 = uVar34 + uVar35;
          }
          uVar34 = uVar34 + 4;
          if (uVar15 < uVar34) {
            uVar30 = (((uVar40 - uVar4) + ((int)pcVar3 - (int)lVar23)) - auStack_188[lVar41]) + 3;
            uVar15 = (uint64_t)uVar30;
            if ((int64_t)
                (uint64_t)
                (~((param_3 + 0x85260c7) * 2 | (uint32_t)((int)(param_3 + 0x85260c7) < 0)) + uVar16) <=
                (int64_t)
                (int)~(uVar16 + 0x6964ad05 << (bVar10 & 0x1f) |
                      uVar16 + 0x6964ad05 >> 0x20 - (bVar10 & 0x1f))) {
              uVar15 = (int64_t)(int)uVar30;
            }
            *param_4 = uVar15;
            if ((uint64_t *)((int64_t)puVar17 + uVar34) == puVar36) break;
            iVar39 = (int)*puVar17;
            uVar15 = uVar34;
          }
        }
        uVar34 = uVar15;
        lVar41 = lVar41 + 1;
        uVar15 = uVar34;
      } while (lVar41 != lStack_1b8);
    }
  }
  uVar15 = uVar34 * 9;
  return ((uVar15 << 0x32 | uVar15 >> 0xe) ^ (uVar34 * 0x240000 | uVar15 >> 0x2e) ^ uVar15) *
         -0x1fffffff;
code_r0x7fffa4a8bf65:
  puVar19 = puVar19 + 1;
  lVar33 = lVar33 + 8;
  if (puVar28 <= puVar19) goto LAB_7fffa4a8bf72;
  goto LAB_7fffa4a8bf50;
}


// ============================================================================
// Function : FUN_7fffa4a8fa10  |  RVA: 0x31fa10  |  Size: 646 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4a8fc5d) */

void FUN_7fffa4a8fa10(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  bRam00007fffa47bb567 = 0;
  uRam00007fffa47bb56b = 0;
  uRam00007fffa47bb573 = 0;
  uRam00007fffa47bb57b = 0;
  uRam00007fffa47bb584 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0xd3857f370b1c24;
  uVar3 = 0;
  while( true ) {
    lVar2 = lVar2 * 0xd3857f370b1c24 + 0xd3857f370b1c24;
    lVar4 = lVar2 * 0xd3857f370b1c24 + 0xd3857f370b1c24;
    *(char *)(uVar3 + 0x7fffa47bb55e) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(uVar3 + 0x7fffa47bb55f) = (char)((uint64_t)lVar4 >> 0x20);
    if (uVar3 == 0x2c) break;
    lVar2 = lVar4 * 0xd3857f370b1c24 + 0xd3857f370b1c24;
    *(char *)(uVar3 + 0x7fffa47bb560) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar2 * 0xd3857f370b1c24 + 0xd3857f370b1c24;
    *(char *)((uVar3 | 3) + 0x7fffa47bb55e) = (char)((uint64_t)lVar2 >> 0x20);
    uVar3 = uVar3 + 4;
  }
  uVar3 = (uint64_t)((uint32_t)bRam00007fffa47bb567 * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)((uVar3 >> 0x20) * 8 + 0x7fffa47bb56b) = 0;
  bRam00007fffa47bb567 = (char)(uVar3 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4a8fca0  |  RVA: 0x31fca0  |  Size: 672 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4a8fca0(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  code *pcVar3;
  bool bVar4;
  uint8_t bVar5;
  short sVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint32_t in_R11D;
  int64_t *plVar11;
  int64_t in_stack_00000028;
  
  uVar8 = in_stack_00000028 - 0x7a9528aa;
  uVar8 = (uVar8 << 0x2c | uVar8 >> 0x14) ^ (uVar8 << 0x2d | uVar8 >> 0x13) ^ uVar8;
  uVar8 = (uVar8 << 0x1a | uVar8 >> 0x26) ^ (uVar8 << 0x18 | uVar8 >> 0x28) ^ uVar8;
  uVar8 = (uVar8 << 0x34 | uVar8 >> 0xc) ^ (uVar8 << 0x30 | uVar8 >> 0x10) ^ uVar8;
  uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) ^ (uVar8 << 0x28 | uVar8 >> 0x18) ^ uVar8;
  plVar11 = (int64_t *)((uVar8 << 0x30 | uVar8 >> 0x10) ^ 0xffffffffda873f8b);
  puVar1 = (uint64_t *)*plVar11;
  *(uint64_t *)puVar1[1] = 0;
  sVar6 = (short)in_R11D;
  puVar1 = (uint64_t *)*puVar1;
  do {
    if (puVar1 == (uint64_t *)0x0) {
      (*(code *)((int64_t)(short)(0x65c - sVar6) + 0x7fffa508519f))(*plVar11,0x50);
      return;
    }
    puVar2 = (uint64_t *)*puVar1;
    uVar8 = puVar1[9];
    bVar5 = (uint8_t)in_R11D;
    if (0xf < uVar8) {
      uVar10 = uVar8 + 1;
      lVar9 = puVar1[6];
      lVar7 = lVar9;
      if (0xfff < uVar10) {
        lVar7 = *(int64_t *)(lVar9 + -8);
        if ((uint64_t)(1U >> (bVar5 & 0x1f) | 1 << 0x20 - (bVar5 & 0x1f)) <=
            (uint64_t)((lVar9 + -8) - lVar7)) goto LAB_7fffa4a8ff3f;
        uVar10 = uVar8 + 0x28;
      }
      (*(code *)((int64_t)(short)((sVar6 + -0x1648) * 0x16bd + 0x6354) + 0x7fffa5085985))
                (lVar7,uVar10);
    }
    puVar1[9] = 0xf;
    *(uint8_t *)(puVar1 + 6) = 0;
    uVar8 = puVar1[5];
    puVar1[8] = 0;
    if (0xf < uVar8) {
      uVar10 = uVar8 + 1;
      lVar9 = puVar1[2];
      bVar4 = 0xfff < uVar10;
      if (0x2d6ca09 < (int)~(0xcac72b79U >> (bVar5 & 0x1f) | -0x3538d487 << 0x20 - (bVar5 & 0x1f)))
      {
        bVar4 = 0xfff < (int64_t)uVar10;
      }
      if (bVar4) {
        lVar7 = lVar9 + -8;
        lVar9 = *(int64_t *)(lVar9 + -8);
        if ((uint64_t)(uint16_t)(1U >> (bVar5 & 0xf) | 1 << 0x10 - (bVar5 & 0xf)) <=
            (uint64_t)(lVar7 - lVar9)) {
LAB_7fffa4a8ff3f:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar10 = uVar8 + 0x28;
      }
      (*(code *)((int64_t)(short)((sVar6 + 0x3189) * -0xf51) + 0x7fffa5083ec4))(lVar9,uVar10);
    }
    *(uint8_t *)(puVar1 + 2) = 0;
    puVar1[5] = 0xf;
    puVar1[4] = 0;
    (*(code *)(&UNK_7fffa508df49 + (int)((in_R11D ^ 0x26435d6c) * 0x51fe3ee1)))(puVar1,0x50);
    puVar1 = puVar2;
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa4a8ff50  |  RVA: 0x31ff50  |  Size: 59 bytes
// Callers  : FUN_7fffa517b810@0xa0b810
// Callees  : FUN_7fffa4cf5490@0x585490
// ============================================================================
void FUN_7fffa4a8ff50(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)FUN_7fffa4cf5490();
  if (*(int *)((int64_t)*(int *)(param_3 + 0x1c) + 4 + *plVar1) < param_4) {
    *(int *)((int64_t)*(int *)(param_3 + 0x1c) + 4 + *plVar1) = param_4;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4a8ff90  |  RVA: 0x31ff90  |  Size: 698 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4a8ff90(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                     uint64_t param_5,uint8_t param_6)

{
  uint8_t bVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  uint8_t in_R10B;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar3 = param_5 << 0x34 ^ param_5;
  uVar3 = (param_5 << 0x2e | uVar3 >> 0x12) ^ (param_5 << 0x16 | uVar3 >> 0x2a) ^ uVar3;
  uVar3 = (uVar3 << 0x1c | uVar3 >> 0x24) ^ (uVar3 << 0x2c | uVar3 >> 0x14) ^ uVar3;
  uVar4 = uVar3 << 0x38 | uVar3 >> 8;
  uVar5 = uVar4 * uVar3;
  if ((param_3 ^ 0x11cec9fe) * 0x789fde23 < (param_3 ^ 0xf6878b55)) {
    uVar5 = uVar3 ^ uVar4;
  }
  uVar5 = uVar5 ^ (uVar3 << 0x18 | uVar3 >> 0x28);
  uVar3 = uVar5 << 0x20 | uVar5 >> 0x20;
  uVar3 = (uVar3 ^ uVar5) + uVar3;
  if (param_3 == 0x5204ab55) {
    uVar3 = uVar5;
  }
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ (uVar3 << 0x20 | uVar3 >> 0x20) ^ uVar3;
  uVar4 = uVar3 << 0x22 | uVar3 >> 0x1e;
  uVar5 = ~uVar4 & uVar3;
  if ((param_3 | 1) * -0x478bfe3a + 0xf1be73c7 <= param_3 + 0x7307bec7) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5 << 4 | uVar5 >> 0x3c;
  uVar4 = uVar5 << 0xc | uVar5 >> 0x34;
  uVar5 = (uVar3 ^ uVar4) + uVar3;
  if (((param_3 + 0x32cb574b) * 0x4bdd8000 | (param_3 + 0x32cb574b) * 0x305c97bb >> 0x11) <
      param_3 + 0x192c6793) {
    uVar5 = uVar4;
  }
  uVar3 = (uint64_t)in_R10B;
  uVar5 = uVar5 << 0x30 | uVar5 >> 0x10;
  if (in_RAX < uVar3 + param_6) {
    return;
  }
  *(uint8_t *)(uVar5 + 7) = *(uint8_t *)(uVar5 + 7) | 1;
  param_1 = (param_1 << 0x31 | param_1 >> 0xf) ^ (param_1 << 0xd | param_1 >> 0x33) ^ param_1;
  param_1 = (param_1 << 0x22 | param_1 >> 0x1e) ^ (param_1 << 0x1a | param_1 >> 0x26) ^ param_1;
  param_1 = (param_1 << 4 | param_1 >> 0x3c) ^ (param_1 << 0x34 | param_1 >> 0xc) ^ param_1;
  uVar6 = param_1 << 8 | param_1 >> 0x38;
  uVar4 = param_1 - uVar6;
  if ((param_3 | 1) * 0x1678db51 < ((0x2f6e52a0 - param_3) * 0x40000 | 0x2f6e52a0 - param_3 >> 0xe))
  {
    uVar4 = param_1 ^ uVar6;
  }
  lVar2 = (uVar4 ^ (param_1 << 0x28 | param_1 >> 0x18)) * 0x1000010000100001;
  *(uint8_t *)(uVar5 + 0xf) = param_6 & 0xf | *(uint8_t *)(uVar5 + 0xf) & 0xf0;
  *(uint8_t *)(uVar5 + 0x13) = *(uint8_t *)(uVar5 + 0x13) & 0xf0 | in_R10B & 0xf;
  if (param_6 < 4) {
    if (param_6 == 2) {
      uVar3 = (uint64_t)*(uint16_t *)(lVar2 + uVar3);
      goto LAB_7fffa4a9020b;
    }
  }
  else if (param_6 < 8) {
    bVar1 = (char)param_3 + 0xac;
    if (param_6 == (uint8_t)(bVar1 * '\x04' | bVar1 >> 6)) {
      uVar3 = (uint64_t)*(uint32_t *)(lVar2 + uVar3);
      goto LAB_7fffa4a9020b;
    }
  }
  else if (param_6 == 8) {
    uVar3 = *(uint64_t *)(lVar2 + uVar3);
    goto LAB_7fffa4a9020b;
  }
  uVar3 = 0;
LAB_7fffa4a9020b:
  *(uint64_t *)(uVar5 + 0x28) = uVar3;
  *(uint8_t *)(uVar5 + 0xb) = param_6 + *(char *)(uVar5 + 0xb);
  return;
}


// ============================================================================
// Function : FUN_7fffa4a90250  |  RVA: 0x320250  |  Size: 3760 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4a90250(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint64_t *puVar6;
  uint16_t uVar7;
  bool bVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  int64_t in_RAX;
  uint64_t uVar12;
  int64_t lVar13;
  uint32_t uVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int iVar20;
  short sVar21;
  uint32_t uVar22;
  int64_t lVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint64_t *puVar26;
  uint32_t uVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  int64_t lVar30;
  uint32_t uVar31;
  uint32_t uVar32;
  uint64_t *puVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint8_t auVar36 [16];
  char cVar37;
  uint8_t uVar40;
  char cVar41;
  uint8_t uVar42;
  char cVar43;
  uint8_t uVar44;
  char cVar45;
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t bVar51;
  uint8_t bVar53;
  uint8_t bVar54;
  uint8_t bVar55;
  uint8_t auVar52 [16];
  uint32_t auStack_1b8 [66];
  uint64_t *puStack_b0;
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  uint32_t uStack_94;
  uint8_t *pbStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t uStack_50;
  int64_t lStack_48;
  
  puStack_a0 = (uint64_t *)-in_RAX;
  uVar12 = param_3 << 0xe ^ param_3;
  puStack_58 = (uint64_t *)(uVar12 << 0x1c ^ param_3 << 0x38 ^ uVar12);
  uVar11 = *(uint32_t *)(param_1 + 0x1c);
  puVar6 = *(uint64_t **)(param_1 + 0xf8);
  uVar28 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  lStack_48 = *(int64_t *)(param_1 + 8);
  uVar12 = *param_2;
  uStack_78 = uVar12 * -0x30e4432345000000 >> (0x38U - *(char *)((int64_t)puVar6 + 0x34) & 0x3f);
  uVar19 = (uint64_t)((uint32_t)(uStack_78 >> 2) & 0x3fffffc0);
  uStack_88 = (int64_t)param_2 - lStack_48;
  uVar31 = (uint32_t)uStack_88;
  uVar27 = uVar31 - uVar28;
  if (uVar31 - uVar11 <= uVar28) {
    uVar27 = uVar11;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar27 = uVar11;
  }
  uVar11 = 6;
  if (*(uint32_t *)(param_1 + 0x10c) < 6) {
    uVar11 = *(uint32_t *)(param_1 + 0x10c);
  }
  uStack_50 = *(uint64_t *)(param_1 + 0x60);
  uVar28 = *(uint32_t *)(param_1 + 0x18);
  pbStack_90 = (uint8_t *)puVar6[7];
  lVar30 = puVar6[0xe];
  lVar17 = *(int64_t *)(param_1 + 0x38);
  puStack_a8 = *(uint64_t **)(param_1 + 0x70);
  iVar20 = 1 << ((uint8_t)uVar11 & 0x1f);
  uStack_80 = param_4;
  uStack_70 = uVar19;
  puStack_68 = (uint64_t *)CONCAT44(puStack_68._4_4_,uVar27);
  cVar37 = (char)*(uint32_t *)(param_1 + 0x34);
  uVar11 = (uint32_t)param_4;
  if (*(int *)(param_1 + 300) == 0) {
    uVar10 = *(uint32_t *)(param_1 + 0x2c);
    uVar12 = (uint64_t)uVar10;
    puStack_60 = (uint64_t *)lVar17;
    uStack_94 = *(uint32_t *)(param_1 + 0x34);
    lVar18 = lVar17;
    lVar13 = (int64_t)puStack_a8;
    if (0x180 - ((uint64_t)
                 (int64_t)(int)((0xbd3db121 - uVar11) * 0x20000 | 0xbd3db121 - uVar11 >> 0xf) <
                (uint64_t)((uVar11 ^ 0xd4daeba0) * 0x228b0b1)) < uVar31 - uVar10) {
      if (uVar10 < 0xffffffa0) {
        uVar34 = uVar12 + 0x60;
        do {
          uVar10 = (uint32_t)uVar12;
          bVar51 = (uint8_t)param_4 & 0x3f;
          uVar35 = (uint64_t)(uVar10 & 7);
          uVar32 = (uint32_t)
                   ((*(int64_t *)(lStack_48 + 8 + uVar12) * -0x30e4432345000000 ^
                    *(uint64_t *)(param_1 + 0x60)) >> (0x38U - cVar37 & 0x3f));
          if ((uint64_t)(uVar11 + 0x46dad309 ^ 0xcdbd3297) <
              (0x20000000429c << bVar51 | 0x20000000429cU >> 0x40 - bVar51)) {
            uVar14 = *(uint32_t *)(param_1 + 0x40 + uVar35 * 4);
            uVar16 = (uint64_t)(uVar14 >> 2 & 0xffffffc0);
            *(uint32_t *)(param_1 + 0x40 + uVar35 * 4) = uVar32;
            bVar51 = *(uint8_t *)(lVar17 + uVar16);
          }
          else {
            uVar14 = *(uint32_t *)(param_1 + 0x40 + uVar35 * 4);
            *(uint32_t *)(param_1 + 0x40 + uVar35 * 4) = uVar32;
            uVar16 = (uint64_t)(uVar14 >> 2 & 0xffffffc0);
            bVar51 = *(uint8_t *)(lVar17 + uVar16);
          }
          uVar12 = uVar12 + 1;
          lVar18 = 0;
          if ((bVar51 & 0x3f) == 1) {
            lVar18 = 0x3f;
          }
          lVar18 = (uint64_t)(bVar51 - 1 & 0x3f) + lVar18;
          *(uint8_t *)(lVar17 + uVar16) = (char)lVar18;
          ((uint8_t *)(lVar17 + uVar16))[lVar18] = (char)uVar14;
          *(uint32_t *)(uVar16 * 4 + (int64_t)puStack_a8 + lVar18 * 4) = uVar10;
        } while (uVar12 != uVar34);
        lVar18 = *(int64_t *)(param_1 + 0x38);
        lVar13 = *(int64_t *)(param_1 + 0x70);
      }
      uVar10 = uVar31 - 0x20;
      uVar12 = (uint64_t)uVar10;
      uVar29 = ((int)((int64_t)param_2 + 1U) - (int)(lStack_48 + uVar12)) + 1;
      uVar14 = 8;
      if (uVar29 < 8) {
        uVar14 = uVar29;
      }
      uVar29 = 0;
      if (lStack_48 + uVar12 <= (int64_t)param_2 + 1U) {
        uVar29 = uVar14;
      }
      if (uVar10 < (uVar29 + uVar31) - 0x20) {
        puStack_b0 = param_2;
        uVar32 = *(uint32_t *)(param_1 + 0x34);
        uVar34 = *(uint64_t *)(param_1 + 0x60);
        while( true ) {
          uVar29 = uVar29 - 1;
          *(int *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar12 & 7) * 4) =
               (int)((*(int64_t *)(lStack_48 + uVar12) * -0x30e4432345000000 ^ uVar34) >>
                    (0x38U - (char)uVar32 & 0x3f));
          if (uVar29 == 0) break;
          uVar12 = uVar12 + 1;
        }
      }
    }
    bVar8 = uVar10 < uVar31;
    if ((uint64_t)(uVar11 ^ 0xc0d4c020) == 0xffffffffd8096d42) {
      bVar8 = (int)uVar31 < (int)uVar10;
    }
    if (bVar8) {
      puStack_b0 = param_2;
      lVar23 = *(int64_t *)(param_1 + 8);
      uVar32 = *(uint32_t *)(param_1 + 0x34);
      uVar12 = (uint64_t)uVar10;
      do {
        uVar34 = (uint64_t)((uint32_t)uVar12 & 7);
        uVar10 = *(uint32_t *)(param_1 + 0x40 + uVar34 * 4);
        uVar35 = (uint64_t)(uVar10 >> 2 & 0xffffffc0);
        *(int *)(param_1 + 0x40 + uVar34 * 4) =
             (int)((*(int64_t *)(lVar23 + 8 + uVar12) * -0x30e4432345000000 ^
                   *(uint64_t *)(param_1 + 0x60)) >> (0x38U - (char)uVar32 & 0x3f));
        uVar14 = 0;
        if ((*(uint8_t *)(lVar18 + uVar35) & 0x3f) == 1) {
          uVar14 = 0x3f;
        }
        uVar22 = (uint32_t)(*(uint8_t *)(lVar18 + uVar35) - 1 & 0x3f);
        uVar29 = uVar14 + uVar22;
        if ((int64_t)(uint64_t)((uVar11 | 1) * 0x6fc64ad6 + 0x32d184f1) <
            (int64_t)(int)((uVar11 | 1) * -0x2f313c10)) {
          uVar29 = uVar14 & uVar22;
        }
        *(char *)(lVar18 + uVar35) = (char)uVar29;
        *(char *)((uint64_t)uVar29 + lVar18 + uVar35) = (char)uVar10;
        *(uint32_t *)(lVar13 + uVar35 * 4 + (uint64_t)uVar29 * 4) = (uint32_t)uVar12;
        uVar12 = uVar12 + 1;
      } while ((uStack_88 & 0xffffffff) != uVar12);
    }
    *(uint32_t *)(param_1 + 0x2c) = uVar31;
    uVar10 = *(uint32_t *)(param_1 + 0x40 + (uint64_t)(uVar31 & 7) * 4);
    *(int *)(param_1 + 0x40 + (uint64_t)(uVar31 & 7) * 4) =
         (int)((*(int64_t *)(lStack_48 + 8 + (uStack_88 & 0xffffffff)) * -0x30e4432345000000 ^
               uStack_50) >> (0x38U - cVar37 & 0x3f));
  }
  else {
    *(uint32_t *)(param_1 + 0x2c) = uVar31;
    uVar10 = (uint32_t)((uVar12 * -0x30e4432345000000 ^ uStack_50) >> (0x38U - cVar37 & 0x3f));
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar10;
  uVar44 = (uint8_t)(uVar10 >> 0x18);
  uVar42 = (uint8_t)(uVar10 >> 0x10);
  uVar40 = (uint8_t)(uVar10 >> 8);
  auVar38._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar44,uVar44),uVar42),CONCAT14(uVar42,uVar10)) >> 0x20);
  auVar38[3] = uVar40;
  auVar38[2] = uVar40;
  auVar38[0] = (uint8_t)uVar10;
  auVar38[1] = auVar38[0];
  auVar38._8_8_ = 0;
  auVar39 = pshuflw(auVar38,auVar38,0);
  uVar34 = (uint64_t)(uVar10 >> 2 & 0xffffffc0);
  lVar18 = (int64_t)puStack_a8 + uVar34 * 4;
  pcVar1 = (char *)(lVar17 + uVar34);
  pcVar2 = (char *)(lVar17 + 0x10 + uVar34);
  pcVar3 = (char *)(lVar17 + 0x20 + uVar34);
  pcVar4 = (char *)(lVar17 + 0x30 + uVar34);
  cVar37 = auVar39[0];
  auVar52[0] = -(*pcVar2 == cVar37);
  cVar41 = auVar39[1];
  auVar52[1] = -(pcVar2[1] == cVar41);
  cVar43 = auVar39[2];
  auVar52[2] = -(pcVar2[2] == cVar43);
  cVar45 = auVar39[3];
  auVar52[3] = -(pcVar2[3] == cVar45);
  auVar52[4] = -(pcVar2[4] == cVar37);
  auVar52[5] = -(pcVar2[5] == cVar41);
  auVar52[6] = -(pcVar2[6] == cVar43);
  auVar52[7] = -(pcVar2[7] == cVar45);
  auVar52[8] = -(pcVar2[8] == cVar37);
  auVar52[9] = -(pcVar2[9] == cVar41);
  auVar52[10] = -(pcVar2[10] == cVar43);
  auVar52[0xb] = -(pcVar2[0xb] == cVar45);
  auVar52[0xc] = -(pcVar2[0xc] == cVar37);
  auVar52[0xd] = -(pcVar2[0xd] == cVar41);
  auVar52[0xe] = -(pcVar2[0xe] == cVar43);
  auVar52[0xf] = -(pcVar2[0xf] == cVar45);
  uVar7 = (uint16_t)(SUB161(auVar52 >> 7,0) & 1) | (uint16_t)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
          (uint16_t)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
          (uint16_t)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
          (uint16_t)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
          (uint16_t)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
          (uint16_t)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
          (uint16_t)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
          (uint16_t)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
          (uint16_t)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
          (uint16_t)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
          (uint16_t)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
          (uint16_t)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
          (uint16_t)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
          (uint16_t)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar52[0xf] >> 7) << 0xf;
  auVar46[0] = -(*pcVar1 == cVar37);
  auVar46[1] = -(pcVar1[1] == cVar41);
  auVar46[2] = -(pcVar1[2] == cVar43);
  auVar46[3] = -(pcVar1[3] == cVar45);
  auVar46[4] = -(pcVar1[4] == cVar37);
  auVar46[5] = -(pcVar1[5] == cVar41);
  auVar46[6] = -(pcVar1[6] == cVar43);
  auVar46[7] = -(pcVar1[7] == cVar45);
  auVar46[8] = -(pcVar1[8] == cVar37);
  auVar46[9] = -(pcVar1[9] == cVar41);
  auVar46[10] = -(pcVar1[10] == cVar43);
  auVar46[0xb] = -(pcVar1[0xb] == cVar45);
  auVar46[0xc] = -(pcVar1[0xc] == cVar37);
  auVar46[0xd] = -(pcVar1[0xd] == cVar41);
  auVar46[0xe] = -(pcVar1[0xe] == cVar43);
  auVar46[0xf] = -(pcVar1[0xf] == cVar45);
  auVar48[0] = -(*pcVar3 == cVar37);
  auVar48[1] = -(pcVar3[1] == cVar41);
  auVar48[2] = -(pcVar3[2] == cVar43);
  auVar48[3] = -(pcVar3[3] == cVar45);
  auVar48[4] = -(pcVar3[4] == cVar37);
  auVar48[5] = -(pcVar3[5] == cVar41);
  auVar48[6] = -(pcVar3[6] == cVar43);
  auVar48[7] = -(pcVar3[7] == cVar45);
  auVar48[8] = -(pcVar3[8] == cVar37);
  auVar48[9] = -(pcVar3[9] == cVar41);
  auVar48[10] = -(pcVar3[10] == cVar43);
  auVar48[0xb] = -(pcVar3[0xb] == cVar45);
  auVar48[0xc] = -(pcVar3[0xc] == cVar37);
  auVar48[0xd] = -(pcVar3[0xd] == cVar41);
  auVar48[0xe] = -(pcVar3[0xe] == cVar43);
  auVar48[0xf] = -(pcVar3[0xf] == cVar45);
  auVar39[0] = -(*pcVar4 == cVar37);
  auVar39[1] = -(pcVar4[1] == cVar41);
  auVar39[2] = -(pcVar4[2] == cVar43);
  auVar39[3] = -(pcVar4[3] == cVar45);
  auVar39[4] = -(pcVar4[4] == cVar37);
  auVar39[5] = -(pcVar4[5] == cVar41);
  auVar39[6] = -(pcVar4[6] == cVar43);
  auVar39[7] = -(pcVar4[7] == cVar45);
  auVar39[8] = -(pcVar4[8] == cVar37);
  auVar39[9] = -(pcVar4[9] == cVar41);
  auVar39[10] = -(pcVar4[10] == cVar43);
  auVar39[0xb] = -(pcVar4[0xb] == cVar45);
  auVar39[0xc] = -(pcVar4[0xc] == cVar37);
  auVar39[0xd] = -(pcVar4[0xd] == cVar41);
  auVar39[0xe] = -(pcVar4[0xe] == cVar43);
  auVar39[0xf] = -(pcVar4[0xf] == cVar45);
  uVar12 = (int64_t)(short)uVar7;
  if ((uVar11 + 0x83ee0509 ^ 0xa2169ef) < (uVar11 ^ 0x6bbde294)) {
    uVar12 = (uint64_t)uVar7;
  }
  uVar12 = uVar12 * 0x10000 +
           ((uint64_t)
            CONCAT22((uint16_t)(SUB161(auVar39 >> 7,0) & 1) |
                     (uint16_t)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                     (uint16_t)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                     (uint16_t)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                     (uint16_t)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                     (uint16_t)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                     (uint16_t)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                     (uint16_t)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                     (uint16_t)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                     (uint16_t)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                     (uint16_t)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                     (uint16_t)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                     (uint16_t)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                     (uint16_t)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                     (uint16_t)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                     (uint16_t)(auVar39[0xf] >> 7) << 0xf,
                     (uint16_t)(SUB161(auVar48 >> 7,0) & 1) |
                     (uint16_t)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                     (uint16_t)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                     (uint16_t)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                     (uint16_t)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                     (uint16_t)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                     (uint16_t)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                     (uint16_t)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                     (uint16_t)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                     (uint16_t)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                     (uint16_t)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                     (uint16_t)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                     (uint16_t)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                     (uint16_t)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                     (uint16_t)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                     (uint16_t)(auVar48[0xf] >> 7) << 0xf) << 0x20) |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar46 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar46[0xf] >> 7) << 0xf);
  uVar11 = (uint32_t)*(uint8_t *)(lVar17 + uVar34);
  if (uVar12 != 0) {
    bVar51 = *(uint8_t *)(lVar17 + uVar34) & 0x3f;
    uVar12 = uVar12 >> bVar51 | uVar12 << 0x40 - bVar51;
    lVar13 = 0;
    do {
      iVar5 = 0;
      for (uVar35 = uVar12; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x8000000000000000) {
        iVar5 = iVar5 + 1;
      }
      uVar31 = iVar5 + uVar11 & 0x3f;
      if (uVar31 != 0) {
        uVar31 = *(uint32_t *)(lVar18 + (uint64_t)uVar31 * 4);
        if (uVar31 < uVar27) goto LAB_7fffa4a909e9;
        iVar20 = iVar20 + -1;
        auStack_1b8[lVar13] = uVar31;
        lVar13 = lVar13 + 1;
      }
      uVar12 = uVar12 - 1 & uVar12;
      if ((uVar12 == 0) || (iVar20 == 0)) goto LAB_7fffa4a909e9;
    } while( true );
  }
  lVar13 = 0;
LAB_7fffa4a909e9:
  uVar9 = uStack_80;
  pbStack_90 = (uint8_t *)((int64_t)pbStack_90 + uVar19);
  lVar23 = 0x3f;
  if ((uVar11 & 0x3f) != 1) {
    lVar23 = 0;
  }
  lVar23 = lVar23 + (uint64_t)(uVar11 - 1 & 0x3f);
  *(uint8_t *)(lVar17 + uVar34) = (char)lVar23;
  ((uint8_t *)(lVar17 + uVar34))[lVar23] = auVar38[0];
  iVar5 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar5 + 1;
  *(int *)(lVar18 + lVar23 * 4) = iVar5;
  uVar12 = 3;
  if (lVar13 != 0) {
    uVar19 = 3;
    lVar17 = 0;
    do {
      puVar24 = (uint64_t *)(lStack_48 + (uint64_t)auStack_1b8[lVar17]);
      if (*(int *)((uVar19 - 3) + (int64_t)puVar24) == *(int *)((int64_t)param_2 + (uVar19 - 3)))
      {
        puVar25 = param_2;
        if (param_2 < (uint64_t *)((int64_t)puStack_58 - 7U)) {
          if (*puVar24 == *param_2) {
            lVar18 = 8;
LAB_7fffa4a90b00:
            puVar25 = (uint64_t *)((int64_t)param_2 + lVar18);
            if (puVar25 < (uint64_t *)((int64_t)puStack_58 - 7U)) {
              if (*(uint64_t *)((int64_t)puVar24 + lVar18) == *puVar25) goto code_r0x7fffa4a90b19;
              uVar11 = 0;
              for (uVar12 = *(uint64_t *)((int64_t)puVar24 + lVar18) ^ *puVar25; (uVar12 & 1) == 0
                  ; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                uVar11 = uVar11 + 1;
              }
              uVar12 = (uint64_t)(uVar11 >> 3) + lVar18;
              goto joined_r0x7fffa4a90bb7;
            }
            puVar24 = (uint64_t *)((int64_t)puVar24 + lVar18);
            goto joined_r0x7fffa4a90af6;
          }
          uVar11 = 0;
          for (uVar12 = *param_2 ^ *puVar24; (uVar12 & 1) == 0;
              uVar12 = uVar12 >> 1 | 0x8000000000000000) {
            uVar11 = uVar11 + 1;
          }
          uVar12 = (uint64_t)(uVar11 >> 3);
        }
        else {
joined_r0x7fffa4a90af6:
          if ((puVar25 < (uint64_t *)((int64_t)puStack_58 - 3U)) &&
             ((int)*puVar24 == (int)*puVar25)) {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
          }
          if ((puVar25 < (uint64_t *)((int64_t)puStack_58 - 1U)) &&
             ((short)*puVar24 == (short)*puVar25)) {
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
          }
          if (puVar25 < puStack_58) {
            puVar25 = (uint64_t *)
                      ((int64_t)puVar25 + (uint64_t)((char)*puVar24 == (char)*puVar25));
          }
          uVar12 = (int64_t)puVar25 - (int64_t)param_2;
        }
joined_r0x7fffa4a90bb7:
        if (uVar19 < uVar12) {
          *puStack_a0 = (uint64_t)(((int)uStack_88 + 3) - auStack_1b8[lVar17]);
          uVar19 = uVar12;
          if ((uint64_t *)((int64_t)param_2 + uVar12) == puStack_58) break;
        }
      }
      lVar17 = lVar17 + 1;
      uVar12 = uVar19;
    } while (lVar17 != lVar13);
  }
  auVar39 = pshuflw(ZEXT216(CONCAT11((uint8_t)uStack_78,(uint8_t)uStack_78)),
                    ZEXT216(CONCAT11((uint8_t)uStack_78,(uint8_t)uStack_78)),0);
  uVar27 = (uint32_t)uStack_80 + 0x35cb7763;
  uVar11 = *pbStack_90 & 0x3f;
  bVar51 = auVar39[0];
  auVar47[0] = -(*pbStack_90 == bVar51);
  bVar53 = auVar39[1];
  auVar47[1] = -(pbStack_90[1] == bVar53);
  bVar54 = auVar39[2];
  auVar47[2] = -(pbStack_90[2] == bVar54);
  bVar55 = auVar39[3];
  auVar47[3] = -(pbStack_90[3] == bVar55);
  auVar47[4] = -(pbStack_90[4] == bVar51);
  auVar47[5] = -(pbStack_90[5] == bVar53);
  auVar47[6] = -(pbStack_90[6] == bVar54);
  auVar47[7] = -(pbStack_90[7] == bVar55);
  auVar47[8] = -(pbStack_90[8] == bVar51);
  auVar47[9] = -(pbStack_90[9] == bVar53);
  auVar47[10] = -(pbStack_90[10] == bVar54);
  auVar47[0xb] = -(pbStack_90[0xb] == bVar55);
  auVar47[0xc] = -(pbStack_90[0xc] == bVar51);
  auVar47[0xd] = -(pbStack_90[0xd] == bVar53);
  auVar47[0xe] = -(pbStack_90[0xe] == bVar54);
  auVar47[0xf] = -(pbStack_90[0xf] == bVar55);
  auVar49[0] = -(pbStack_90[0x10] == bVar51);
  auVar49[1] = -(pbStack_90[0x11] == bVar53);
  auVar49[2] = -(pbStack_90[0x12] == bVar54);
  auVar49[3] = -(pbStack_90[0x13] == bVar55);
  auVar49[4] = -(pbStack_90[0x14] == bVar51);
  auVar49[5] = -(pbStack_90[0x15] == bVar53);
  auVar49[6] = -(pbStack_90[0x16] == bVar54);
  auVar49[7] = -(pbStack_90[0x17] == bVar55);
  auVar49[8] = -(pbStack_90[0x18] == bVar51);
  auVar49[9] = -(pbStack_90[0x19] == bVar53);
  auVar49[10] = -(pbStack_90[0x1a] == bVar54);
  auVar49[0xb] = -(pbStack_90[0x1b] == bVar55);
  auVar49[0xc] = -(pbStack_90[0x1c] == bVar51);
  auVar49[0xd] = -(pbStack_90[0x1d] == bVar53);
  auVar49[0xe] = -(pbStack_90[0x1e] == bVar54);
  auVar49[0xf] = -(pbStack_90[0x1f] == bVar55);
  uVar7 = (uint16_t)(SUB161(auVar49 >> 7,0) & 1) | (uint16_t)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
          (uint16_t)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
          (uint16_t)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
          (uint16_t)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
          (uint16_t)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
          (uint16_t)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
          (uint16_t)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
          (uint16_t)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
          (uint16_t)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
          (uint16_t)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
          (uint16_t)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
          (uint16_t)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
          (uint16_t)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
          (uint16_t)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar49[0xf] >> 7) << 0xf;
  auVar36[0] = -(pbStack_90[0x20] == bVar51);
  auVar36[1] = -(pbStack_90[0x21] == bVar53);
  auVar36[2] = -(pbStack_90[0x22] == bVar54);
  auVar36[3] = -(pbStack_90[0x23] == bVar55);
  auVar36[4] = -(pbStack_90[0x24] == bVar51);
  auVar36[5] = -(pbStack_90[0x25] == bVar53);
  auVar36[6] = -(pbStack_90[0x26] == bVar54);
  auVar36[7] = -(pbStack_90[0x27] == bVar55);
  auVar36[8] = -(pbStack_90[0x28] == bVar51);
  auVar36[9] = -(pbStack_90[0x29] == bVar53);
  auVar36[10] = -(pbStack_90[0x2a] == bVar54);
  auVar36[0xb] = -(pbStack_90[0x2b] == bVar55);
  auVar36[0xc] = -(pbStack_90[0x2c] == bVar51);
  auVar36[0xd] = -(pbStack_90[0x2d] == bVar53);
  auVar36[0xe] = -(pbStack_90[0x2e] == bVar54);
  auVar36[0xf] = -(pbStack_90[0x2f] == bVar55);
  auVar50[0] = -(pbStack_90[0x30] == bVar51);
  auVar50[1] = -(pbStack_90[0x31] == bVar53);
  auVar50[2] = -(pbStack_90[0x32] == bVar54);
  auVar50[3] = -(pbStack_90[0x33] == bVar55);
  auVar50[4] = -(pbStack_90[0x34] == bVar51);
  auVar50[5] = -(pbStack_90[0x35] == bVar53);
  auVar50[6] = -(pbStack_90[0x36] == bVar54);
  auVar50[7] = -(pbStack_90[0x37] == bVar55);
  auVar50[8] = -(pbStack_90[0x38] == bVar51);
  auVar50[9] = -(pbStack_90[0x39] == bVar53);
  auVar50[10] = -(pbStack_90[0x3a] == bVar54);
  auVar50[0xb] = -(pbStack_90[0x3b] == bVar55);
  auVar50[0xc] = -(pbStack_90[0x3c] == bVar51);
  auVar50[0xd] = -(pbStack_90[0x3d] == bVar53);
  auVar50[0xe] = -(pbStack_90[0x3e] == bVar54);
  auVar50[0xf] = -(pbStack_90[0x3f] == bVar55);
  uVar31 = (uint32_t)uStack_80 ^ 0xb2e512a2;
  uVar19 = (uint64_t)uVar7 << 0x10;
  if ((uVar27 * 0x10000 | uVar27 >> 0x10) <= (uVar31 << 3 | uVar31 >> 0x1d) * -0x7b6eea53) {
    uVar19 = (uint64_t)uVar7 ^ 0x10;
  }
  uVar19 = (uVar19 | (uint64_t)
                     CONCAT22((uint16_t)(SUB161(auVar50 >> 7,0) & 1) |
                              (uint16_t)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                              (uint16_t)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                              (uint16_t)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                              (uint16_t)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                              (uint16_t)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                              (uint16_t)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                              (uint16_t)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                              (uint16_t)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                              (uint16_t)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                              (uint16_t)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                              (uint16_t)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                              (uint16_t)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                              (uint16_t)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                              (uint16_t)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                              (uint16_t)(auVar50[0xf] >> 7) << 0xf,
                              (uint16_t)(SUB161(auVar36 >> 7,0) & 1) |
                              (uint16_t)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                              (uint16_t)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                              (uint16_t)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                              (uint16_t)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                              (uint16_t)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                              (uint16_t)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                              (uint16_t)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                              (uint16_t)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                              (uint16_t)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                              (uint16_t)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                              (uint16_t)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                              (uint16_t)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                              (uint16_t)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                              (uint16_t)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                              (uint16_t)(auVar36[0xf] >> 7) << 0xf) << 0x20) +
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar47 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar47[0xf] >> 7) << 0xf);
  uVar19 = uVar19 << (-*pbStack_90 & 0x3f) | uVar19 >> uVar11;
  if (uVar19 != 0 && iVar20 != 0) {
    puStack_60 = (uint64_t *)(lStack_48 + (uint64_t)uVar28);
    pcVar1 = (char *)*puVar6;
    lVar17 = puVar6[1];
    uVar27 = *(uint32_t *)(puVar6 + 3);
    uStack_78 = CONCAT44(uStack_78._4_4_,(int)pcVar1 - (int)lVar17);
    lVar18 = 0;
    do {
      sVar21 = -0x2c02 - (short)uVar9;
      iVar5 = 0;
      for (uVar34 = uVar19; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
        iVar5 = iVar5 + 1;
      }
      uVar31 = iVar5 + uVar11 & 0x3f;
      if (uVar31 != (uint16_t)(sVar21 * 2 | (uint16_t)(sVar21 < 0))) {
        uVar31 = *(uint32_t *)(lVar30 + uStack_70 * 4 + (uint64_t)uVar31 * 4);
        if (uVar31 < uVar27) break;
        auStack_1b8[lVar18] = uVar31;
        lVar18 = lVar18 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar19 = uVar19 - 1 & uVar19;
    } while (uVar19 != 0 && iVar20 != 0);
    if (lVar18 != 0) {
      puStack_a8 = (uint64_t *)((int64_t)puStack_58 - 7);
      puStack_68 = (uint64_t *)((int64_t)puStack_58 - 1U);
      puVar24 = (uint64_t *)((int64_t)param_2 + 4);
      iVar20 = (int)*param_2;
      uStack_70 = lVar17 + 0xc;
      lStack_48 = (uint64_t)uVar28 + lStack_48 + 8;
      lVar30 = 0;
      pbStack_90 = (uint8_t *)lVar17;
      do {
        uVar19 = (uint64_t)auStack_1b8[lVar30];
        if (*(int *)(lVar17 + uVar19) == iVar20) {
          puVar15 = (uint64_t *)(lVar17 + uVar19 + 4);
          puVar25 = (uint64_t *)(((int64_t)pcVar1 - (int64_t)puVar15) + (int64_t)puVar24);
          if (puStack_58 <= puVar25) {
            puVar25 = puStack_58;
          }
          puVar26 = puVar24;
          puVar33 = puVar15;
          if (puVar24 < (uint64_t *)((int64_t)puVar25 - 7U)) {
            if (*puVar15 == *puVar24) {
              lVar13 = lVar17 + 0xc + uVar19;
              lVar23 = 0;
              do {
                puVar26 = (uint64_t *)((int64_t)param_2 + lVar23 + 0xc);
                if ((uint64_t *)((int64_t)puVar25 - 7U) <= puVar26) {
                  puVar33 = (uint64_t *)(lVar13 + lVar23);
                  goto LAB_7fffa4a90e92;
                }
                uVar19 = *(uint64_t *)(lVar13 + lVar23);
                lVar23 = lVar23 + 8;
              } while (uVar19 == *puVar26);
              uVar11 = 0;
              for (uVar19 = *puVar26 ^ uVar19; (uVar19 & 1) == 0;
                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                uVar11 = uVar11 + 1;
              }
              uVar19 = (uint64_t)(uVar11 >> 3) + lVar23;
            }
            else {
              uVar11 = 0;
              for (uVar19 = *puVar15 ^ *puVar24; (uVar19 & 1) == 0;
                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                uVar11 = uVar11 + 1;
              }
              uVar19 = (uint64_t)(uVar11 >> 3);
            }
          }
          else {
LAB_7fffa4a90e92:
            if ((puVar26 < (uint64_t *)((int64_t)puVar25 - 3U)) &&
               ((int)*puVar33 == (int)*puVar26)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
              puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
            }
            if ((puVar26 < (uint64_t *)((int64_t)puVar25 - 1U)) &&
               ((short)*puVar33 == (short)*puVar26)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
              puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
            }
            if (puVar26 < puVar25) {
              puVar26 = (uint64_t *)
                        ((int64_t)puVar26 + (uint64_t)((char)*puVar33 == (char)*puVar26));
            }
            uVar19 = (int64_t)puVar26 - (int64_t)puVar24;
          }
          uVar34 = uVar19;
          if ((char *)((int64_t)puVar15 + uVar19) == pcVar1) {
            puVar25 = (uint64_t *)((int64_t)puVar24 + uVar19);
            puVar26 = puStack_60;
            puVar15 = puVar25;
            if (puVar25 < puStack_a8) {
              if (*puStack_60 == *puVar25) {
                lVar13 = 0;
                do {
                  puVar15 = (uint64_t *)((int64_t)param_2 + lVar13 + uVar19 + 0xc);
                  if (puStack_a8 <= puVar15) {
                    puVar26 = (uint64_t *)(lVar13 + lStack_48);
                    goto LAB_7fffa4a90fa9;
                  }
                  puVar26 = (uint64_t *)(lStack_48 + lVar13);
                  lVar13 = lVar13 + 8;
                } while (*puVar26 == *puVar15);
                uVar11 = 0;
                for (uVar34 = *puVar26 ^ *puVar15; (uVar34 & 1) == 0;
                    uVar34 = uVar34 >> 1 | 0x8000000000000000) {
                  uVar11 = uVar11 + 1;
                }
                uVar35 = (uint64_t)(uVar11 >> 3) + lVar13;
              }
              else {
                uVar11 = 0;
                for (uVar34 = *puVar25 ^ *puStack_60; (uVar34 & 1) == 0;
                    uVar34 = uVar34 >> 1 | 0x8000000000000000) {
                  uVar11 = uVar11 + 1;
                }
                uVar35 = (uint64_t)(uVar11 >> 3);
              }
            }
            else {
LAB_7fffa4a90fa9:
              if ((puVar15 < (uint64_t *)((int64_t)puStack_58 + -3)) &&
                 ((int)*puVar26 == (int)*puVar15)) {
                puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
                puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
              }
              if ((puVar15 < (uint64_t *)((int64_t)puStack_58 - 1U)) &&
                 ((short)*puVar26 == (short)*puVar15)) {
                puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
                puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
              }
              if (puVar15 < puStack_58) {
                puVar15 = (uint64_t *)
                          ((int64_t)puVar15 + (uint64_t)((char)*puVar26 == (char)*puVar15));
              }
              uVar35 = (int64_t)puVar15 - (int64_t)puVar25;
            }
            uVar34 = (uVar19 & 0xffffffff) * (uVar35 & 0xffffffff) +
                     ((uVar35 >> 0x20) * (uVar19 & 0xffffffff) +
                      (uVar19 >> 0x20) * (uVar35 & 0xffffffff) << 0x20);
            if ((-0x4f44e91d << ((uint8_t)uStack_80 & 0x1f) |
                0xb0bb16e3U >> 0x20 - ((uint8_t)uStack_80 & 0x1f)) != 0x43b2355d) {
              uVar34 = uVar35 + uVar19;
            }
          }
          uVar34 = uVar34 + 4;
          if (uVar12 < uVar34) {
            *puStack_a0 = (uint64_t)
                          (((((int)uStack_88 - uVar28) + (int)uStack_78) - auStack_1b8[lVar30]) + 3)
            ;
            if ((uint64_t *)((int64_t)param_2 + uVar34) == puStack_58) {
              return;
            }
            iVar20 = (int)*param_2;
            uVar12 = uVar34;
          }
        }
        lVar30 = lVar30 + 1;
      } while (lVar30 != lVar18);
    }
  }
  return;
code_r0x7fffa4a90b19:
  lVar18 = lVar18 + 8;
  goto LAB_7fffa4a90b00;
}


// ============================================================================
// Function : FUN_7fffa4a91118  |  RVA: 0x321118  |  Size: 119 bytes
// Callers  : FUN_7fffa5427f8c@0xcb7f8c
// Callees  : FUN_7fffa565700c@0xee700c, FUN_7fffa505ca30@0x8eca30, FUN_7fffa548e49c@0xd1e49c
// ============================================================================
uint32_t
FUN_7fffa4a91118(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4)

{
  int64_t lVar1;
  uint32_t uVar2;
  
  FUN_7fffa548e49c(*param_2);
  lVar1 = param_3[1];
  if ((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)*(uint32_t *)*param_3 >> 6) * 8) +
                 0x38 + (uint64_t)(*(uint32_t *)*param_3 & 0x3f) * 0x48) & 1) == 0) {
    *(uint8_t *)(lVar1 + 0x30) = 1;
    *(uint32_t *)(lVar1 + 0x2c) = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_7fffa505ca30();
  }
  FUN_7fffa565700c(*param_4);
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa4a91190  |  RVA: 0x321190  |  Size: 29455 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4a91190(void) {
    /* +0x321190 */ __asm { PUSH RBP }
    /* +0x321191 */ __asm { PUSH R12 }
    /* +0x321193 */ __asm { PUSH RSI }
    /* +0x321194 */ __asm { PUSH RDI }
    /* +0x321195 */ __asm { PUSH RBX }
    /* +0x321196 */ __asm { PUSH R13 }
    /* +0x321198 */ __asm { PUSH R14 }
    /* +0x32119a */ __asm { PUSH R15 }
    /* +0x32119c */ __asm { SUB RSP,0x298 }
    /* +0x3211a3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x3211ab */ __asm { MOVDQA xmmword ptr [RBP + 0x200],XMM13 }
    /* +0x3211b4 */ __asm { MOVAPS xmmword ptr [RBP + 0x1f0],XMM9 }
    /* +0x3211bc */ __asm { MOV qword ptr [RBP + 0x1e8],-0x2 }
    /* +0x3211c7 */ __asm { MOV RDI,R8 }
    /* +0x3211ca */ __asm { MOV ESI,R11D }
    /* +0x3211cd */ __asm { MOV R9D,0xbdb8ca29 }
    /* +0x3211d3 */ __asm { MOV dword ptr [RBP + -0x4],R9D }
    /* +0x3211d7 */ __asm { MOV R14,-0x7fbfdfeff7fbfdff }
    /* +0x3211e1 */ __asm { IMUL R14,R10 }
    /* +0x3211e5 */ __asm { MOV dword ptr [RBP + 0x50],0x2a9bc8b }
    /* +0x3211ec */ __asm { MOV R9D,dword ptr [RBP + 0x50] }
    /* +0x3211f0 */ __asm { TEST R9B,0x1 }
    /* +0x3211f4 */ __asm { JZ 0x7fffa4a93da5 }
    /* +0x3211fa */ __asm { LEA R11,[0x7fffa5178723] }
    /* +0x321201 */ __asm { MOV R13,qword ptr [RBP + 0x258] }
    /* +0x321208 */ __asm { MOV CX,0x670d }
    /* +0x32120c */ __asm { ADD ECX,EDI }
    /* +0x32120e */ __asm { XOR ECX,0xaa4d }
    /* +0x321214 */ __asm { MOVSX RAX,CX }
    /* +0x321218 */ __asm { ADD RAX,R11 }
    /* +0x32121b */ __asm { MOV RCX,R14 }
    /* +0x32121e */ __asm { CALL RAX }
    /* +0x321220 */ __asm { MOV RBX,RAX }
    /* +0x321223 */ __asm { MOV R11,0x47be8e06492041bb }
    /* +0x32122d */ __asm { MOV qword ptr [RBP + -0x10],R13 }
    /* +0x321231 */ __asm { CMP R13,R11 }
    /* +0x321234 */ __asm { JZ 0x7fffa4a93c6f }
    /* +0x32123a */ __asm { PXOR XMM1,XMM1 }
    /* +0x32123e */ __asm { MOVDQA xmmword ptr [RBP],XMM1 }
    /* +0x321243 */ __asm { MOV qword ptr [RBP + 0x10],0x0 }
    /* +0x32124b */ __asm { MOV qword ptr [RBP + 0x18],0x7 }
    /* +0x321253 */ __asm { MOV R9W,0xda7f }
    /* +0x321258 */ __asm { SUB R9D,EDI }
    /* +0x32125b */ __asm { ROL R9W,0x2 }
    /* +0x321260 */ __asm { MOVZX R11D,R9W }
    /* +0x321264 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0x321268 */ __asm { MOV RAX,-0x6488b36ebb28873d }
    /* +0x321272 */ __asm { CMP qword ptr [R11 + 0x60],RAX }
    /* +0x321276 */ __asm { NOP }
    /* +0x321277 */ __asm { NOP }
    /* +0x321278 */ __asm { NOP }
    /* +0x321279 */ __asm { NOP }
    /* +0x32127a */ __asm { NOP }
    /* +0x32127b */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x321282 */ __asm { MOV RDX,0x0 }
    /* +0x321289 */ __asm { MOVD XMM9,EDI }
    /* +0x32128e */ __asm { TEST RBX,RBX }
    /* +0x321291 */ __asm { MOV qword ptr [RBP + 0x168],RDI }
    /* +0x321298 */ __asm { MOV qword ptr [RBP + 0x48],R14 }
    /* +0x32129c */ __asm { MOV qword ptr [RBP + 0x1d8],RBX }
    /* +0x3212a3 */ __asm { JZ 0x7fffa4a913ba }
    /* +0x3212a9 */ __asm { MOV R11D,0xf89c5a97 }
    /* +0x3212af */ __asm { MOV RAX,0x210273032c7102c5 }
    /* +0x3212b9 */ __asm { XOR R11D,EDI }
    /* +0x3212bc */ __asm { NOT R11D }
    /* +0x3212bf */ __asm { MOVQ XMM1,RAX }
    /* +0x3212c4 */ __asm { XOR EAX,EAX }
    /* +0x3212c6 */ __asm { XOR R9D,R9D }
    /* +0x3212c9 */ __asm { CMP word ptr [R14],0x5c }
    /* +0x3212ce */ __asm { SETC AL }
    /* +0x3212d1 */ __asm { SETZ R9B }
    /* +0x3212d5 */ __asm { MOV RCX,RDI }
    /* +0x3212d8 */ __asm { OR RCX,0x1 }
    /* +0x3212dc */ __asm { MOVQ XMM3,RCX }
    /* +0x3212e1 */ __asm { MOVDQA XMM0,XMM3 }
    /* +0x3212e5 */ __asm { PSRLQ XMM0,0x20 }
    /* +0x3212ea */ __asm { PMULUDQ XMM0,XMM1 }
    /* +0x3212ee */ __asm { MOVDQA XMM2,XMM1 }
    /* +0x3212f2 */ __asm { PSRLQ XMM2,0x20 }
    /* +0x3212f7 */ __asm { PMULUDQ XMM2,XMM3 }
    /* +0x3212fb */ __asm { PADDQ XMM2,XMM0 }
    /* +0x3212ff */ __asm { PSLLQ XMM2,0x20 }
    /* +0x321304 */ __asm { PMULUDQ XMM3,XMM1 }
    /* +0x321308 */ __asm { PADDQ XMM3,XMM2 }
    /* +0x32130c */ __asm { MOVQ R8,XMM3 }
    /* +0x321311 */ __asm { ROL R8,0x22 }
    /* +0x321315 */ __asm { ADD R8,0x5eabf8c3 }
    /* +0x32131c */ __asm { CMP R8,R11 }
    /* +0x32131f */ __asm { CMOVLE R9D,EAX }
    /* +0x321323 */ __asm { CMP R9B,0x1 }
    /* +0x321327 */ __asm { JNZ 0x7fffa4a913c1 }
    /* +0x32132d */ __asm { MOV RDX,0x0 }
    /* +0x321334 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x32133b */ __asm { CMP RBX,0x1 }
    /* +0x32133f */ __asm { JZ 0x7fffa4a9139b }
    /* +0x321341 */ __asm { MOV R11D,0x7e9f6817 }
    /* +0x321347 */ __asm { ADD R11D,EDI }
    /* +0x32134a */ __asm { MOV ECX,0xf7723e32 }
    /* +0x32134f */ __asm { ADD ECX,EDI }
    /* +0x321351 */ __asm { ROL ECX,0x15 }
    /* +0x321354 */ __asm { NOT ECX }
    /* +0x321356 */ __asm { MOVZX R10D,word ptr [R14 + 0x2] }
    /* +0x32135b */ __asm { MOV R9D,R10D }
    /* +0x32135e */ __asm { OR R9D,0x66c3 }
    /* +0x321365 */ __asm { LEA EAX,[R10 + -0x66c3] }
    /* +0x32136c */ __asm { ROR R11D,0x1 }
    /* +0x32136f */ __asm { CMP R11,RCX }
    /* +0x321372 */ __asm { CMOVA EAX,R9D }
    /* +0x321376 */ __asm { XOR EAX,0x1f51 }
    /* +0x32137b */ __asm { ADD EAX,0x3b8f }
    /* +0x321380 */ __asm { MOVZX R9D,AX }
    /* +0x321384 */ __asm { CMP R9D,0xc257 }
    /* +0x32138b */ __asm { JZ 0x7fffa4a91daa }
    /* +0x321391 */ __asm { CMP RBX,0x7 }
    /* +0x321395 */ __asm { JA 0x7fffa4a91f1a }
    /* +0x32139b */ __asm { LEA R8,[RBX + RBX*0x1] }
    /* +0x32139f */ __asm { MOV qword ptr [RBP + 0x10],RBX }
    /* +0x3213a3 */ __asm { MOV RCX,RBP }
    /* +0x3213a6 */ __asm { MOV RDX,R14 }
    /* +0x3213a9 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x3213ae */ __asm { MOV word ptr [RBP + RBX*0x2],0x0 }
    /* +0x3213b5 */ __asm { JMP 0x7fffa4a9194a }
    /* +0x3213ba */ __asm { MOVDQA xmmword ptr [RBP + 0x50],XMM1 }
    /* +0x3213bf */ __asm { JMP 0x7fffa4a913fb }
    /* +0x3213c1 */ __asm { PXOR XMM1,XMM1 }
    /* +0x3213c5 */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM1 }
    /* +0x3213ca */ __asm { MOVDQA xmmword ptr [RBP + 0x50],XMM1 }
    /* +0x3213cf */ __asm { MOV R11,-0x63a44c68dea6bd8c }
    /* +0x3213d9 */ __asm { XOR R11,0x7ffe0328 }
    /* +0x3213e0 */ __asm { MOV ECX,EDI }
    /* +0x3213e2 */ __asm { ROL R11,CL }
    /* +0x3213e5 */ __asm { IMUL R11,R11,-0xed4dbb5 }
    /* +0x3213ec */ __asm { CMP RBX,R11 }
    /* +0x3213ef */ __asm { JA 0x7fffa4a93ca2 }
    /* +0x3213f5 */ __asm { CMP RBX,0x7 }
    /* +0x3213f9 */ __asm { JA 0x7fffa4a91431 }
    /* +0x3213fb */ __asm { MOV dword ptr [RBP + 0x1c0],ESI }
    /* +0x321401 */ __asm { MOV qword ptr [RBP + 0x60],RBX }
    /* +0x321405 */ __asm { LEA R8,[RBX + RBX*0x1] }
    /* +0x321409 */ __asm { MOV qword ptr [RBP + 0x68],0x7 }
    /* +0x321411 */ __asm { LEA RCX,[RBP + 0x50] }
    /* +0x321415 */ __asm { MOV RDX,R14 }
    /* +0x321418 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x32141d */ __asm { MOV word ptr [RBP + RBX*0x2 + 0x50],0x0 }
    /* +0x321424 */ __asm { MOV RBX,qword ptr [RBP + 0x60] }
    /* +0x321428 */ __asm { MOV R15,qword ptr [RBP + 0x68] }
    /* +0x32142c */ __asm { JMP 0x7fffa4a914f2 }
    /* +0x321431 */ __asm { MOV dword ptr [RBP + 0x1c0],ESI }
    /* +0x321437 */ __asm { LEA R11,[0x7fffa5279afa] }
    /* +0x32143e */ __asm { MOV R9D,0x768ab8d1 }
    /* +0x321444 */ __asm { ADD R9D,0x1eb7ae3 }
    /* +0x32144b */ __asm { MOV ECX,EDI }
    /* +0x32144d */ __asm { ROR R9D,CL }
    /* +0x321450 */ __asm { LEA R13,[RBX + RBX*0x1] }
    /* +0x321454 */ __asm { MOVSXD RAX,R9D }
    /* +0x321457 */ __asm { MOV RDX,RBX }
    /* +0x32145a */ __asm { OR RDX,0x7 }
    /* +0x32145e */ __asm { CMP RDX,0xb }
    /* +0x321462 */ __asm { MOV R15D,0xa }
    /* +0x321468 */ __asm { CMOVNC R15,RDX }
    /* +0x32146c */ __asm { MOV R8,0x7ffffffffffffffe }
    /* +0x321476 */ __asm { CMP R15,R8 }
    /* +0x321479 */ __asm { CMOVNC R15,R8 }
    /* +0x32147d */ __asm { LEA R8,[0x2 + R15*0x2] }
    /* +0x321485 */ __asm { MOV RCX,R8 }
    /* +0x321488 */ __asm { SHL RCX,0x3c }
    /* +0x32148c */ __asm { XOR RCX,R8 }
    /* +0x32148f */ __asm { SHL R8,0xe }
    /* +0x321493 */ __asm { MOV R10,0x1865d799980f }
    /* +0x32149d */ __asm { ADD R10,R8 }
    /* +0x3214a0 */ __asm { ADD R10,RCX }
    /* +0x3214a3 */ __asm { MOV R9D,0xf26752c6 }
    /* +0x3214a9 */ __asm { XOR R9D,0xde2c0061 }
    /* +0x3214b0 */ __asm { ADD R9D,0xd3b3bd0f }
    /* +0x3214b7 */ __asm { MOVSXD R8,R9D }
    /* +0x3214ba */ __asm { ADD R8,R11 }
    /* +0x3214bd */ __asm { CALL R8 }
    /* +0x3214c0 */ __asm { MOV R12,RCX }
    /* +0x3214c3 */ __asm { ROL R12,0x2c }
    /* +0x3214c7 */ __asm { MOV qword ptr [RBP + 0x68],R15 }
    /* +0x3214cb */ __asm { MOV qword ptr [RBP + 0x60],RBX }
    /* +0x3214cf */ __asm { MOV R11,R12 }
    /* +0x3214d2 */ __asm { SHL R11,0x36 }
    /* +0x3214d6 */ __asm { SUB R12,R11 }
    /* +0x3214d9 */ __asm { MOV RDX,R14 }
    /* +0x3214dc */ __asm { MOV RCX,R12 }
    /* +0x3214df */ __asm { MOV R8,R13 }
    /* +0x3214e2 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x3214e7 */ __asm { MOV word ptr [R12 + RBX*0x2],0x0 }
    /* +0x3214ee */ __asm { MOV qword ptr [RBP + 0x50],R12 }
    /* +0x3214f2 */ __asm { MOV R9W,0x2341 }
    /* +0x3214f7 */ __asm { MOV RDX,0x1f6ab4830d2ce4bf }
    /* +0x321501 */ __asm { IMUL R11D,R9D,0x3d77 }
    /* +0x321508 */ __asm { ROL R11W,0x5 }
    /* +0x32150d */ __asm { LEA RAX,[0x7fffa5179661] }
    /* +0x321514 */ __asm { MOV R9,-0x7c9a946e51875990 }
    /* +0x32151e */ __asm { MOV qword ptr [RBP + 0x190],RDX }
    /* +0x321525 */ __asm { MOV R14,R15 }
    /* +0x321528 */ __asm { SUB R14,RBX }
    /* +0x32152b */ __asm { LEA RDX,[RBP + 0x170] }
    /* +0x321532 */ __asm { MOV R10,0x1f36b4bc0d13e4e3 }
    /* +0x32153c */ __asm { MOV qword ptr [RBP + 0x198],R9 }
    /* +0x321543 */ __asm { MOVDQA XMM1,xmmword ptr [RBP + 0x190] }
    /* +0x32154b */ __asm { MOV qword ptr [RBP + 0x178],R9 }
    /* +0x321552 */ __asm { MOV qword ptr [RBP + 0x170],R10 }
    /* +0x321559 */ __asm { PXOR XMM1,xmmword ptr [RDX] }
    /* +0x32155d */ __asm { MOVDQA xmmword ptr [RBP + 0x190],XMM1 }
    /* +0x321565 */ __asm { XOR R11D,EDI }
    /* +0x321568 */ __asm { MOVSX R11,R11W }
    /* +0x32156c */ __asm { ADD R11,RAX }
    /* +0x32156f */ __asm { LEA RSI,[RBP + 0x190] }
    /* +0x321576 */ __asm { MOV RCX,RSI }
    /* +0x321579 */ __asm { CALL R11 }
    /* +0x32157c */ __asm { MOV R13,RAX }
    /* +0x32157f */ __asm { CMP RAX,R14 }
    /* +0x321582 */ __asm { JBE 0x7fffa4a9175a }
    /* +0x321588 */ __asm { MOV RDI,0x7ffffffffffffffe }
    /* +0x321592 */ __asm { MOV R11,RDI }
    /* +0x321595 */ __asm { SUB R11,RBX }
    /* +0x321598 */ __asm { CMP R11,R13 }
    /* +0x32159b */ __asm { JC 0x7fffa4a93c77 }
    /* +0x3215a1 */ __asm { MOV qword ptr [RBP + 0x1d0],RBX }
    /* +0x3215a8 */ __asm { LEA R11,[RBX + R13*0x1] }
    /* +0x3215ac */ __asm { MOV qword ptr [RBP + 0x160],R11 }
    /* +0x3215b3 */ __asm { OR R11,0x7 }
    /* +0x3215b7 */ __asm { CMP R11,RDI }
    /* +0x3215ba */ __asm { JA 0x7fffa4a915e9 }
    /* +0x3215bc */ __asm { MOV RAX,R15 }
    /* +0x3215bf */ __asm { SHR RAX,0x1 }
    /* +0x3215c2 */ __asm { MOV R8,RDI }
    /* +0x3215c5 */ __asm { SUB R8,RAX }
    /* +0x3215c8 */ __asm { CMP R15,R8 }
    /* +0x3215cb */ __asm { JA 0x7fffa4a915e9 }
    /* +0x3215cd */ __asm { ADD RAX,R15 }
    /* +0x3215d0 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x3215d7 */ __asm { NOP }
    /* +0x3215d8 */ __asm { MOV RDX,0x0 }
    /* +0x3215df */ __asm { CMP R11,RAX }
    /* +0x3215e2 */ __asm { CMOVA RAX,R11 }
    /* +0x3215e6 */ __asm { MOV RDI,RAX }
    /* +0x3215e9 */ __asm { MOV AX,0xcb16 }
    /* +0x3215ed */ __asm { MOV qword ptr [RBP + 0x1b0],R15 }
    /* +0x3215f4 */ __asm { MOV R15,qword ptr [RBP + 0x168] }
    /* +0x3215fb */ __asm { MOV R9D,R15D }
    /* +0x3215fe */ __asm { XOR R9D,EAX }
    /* +0x321601 */ __asm { MOV EAX,R15D }
    /* +0x321604 */ __asm { OR EAX,0x1 }
    /* +0x321607 */ __asm { MOV R14D,0xafb11f12 }
    /* +0x32160d */ __asm { MOV R12D,0x2062c4fe }
    /* +0x321613 */ __asm { IMUL R12D,EAX }
    /* +0x321617 */ __asm { NOT R12D }
    /* +0x32161a */ __asm { ADD R14D,0x504eeeee }
    /* +0x321621 */ __asm { ROL R14D,0x4 }
    /* +0x321625 */ __asm { MOV ECX,R15D }
    /* +0x321628 */ __asm { ROL R14D,CL }
    /* +0x32162b */ __asm { LEA RAX,[0x2 + RDI*0x2] }
    /* +0x321633 */ __asm { ROL R9W,0x9 }
    /* +0x321638 */ __asm { MOVSX R11,R9W }
    /* +0x32163c */ __asm { MOV R9D,0x9335cda4 }
    /* +0x321642 */ __asm { MOV EBX,0xb610fa85 }
    /* +0x321647 */ __asm { ADD EBX,R15D }
    /* +0x32164a */ __asm { ROL EBX,0x14 }
    /* +0x32164d */ __asm { MOV R8,RAX }
    /* +0x321650 */ __asm { SHL R8,0x3c }
    /* +0x321654 */ __asm { XOR R8,RAX }
    /* +0x321657 */ __asm { SHL RAX,0xe }
    /* +0x32165b */ __asm { MOV R10,0x1865d799980f }
    /* +0x321665 */ __asm { ADD R10,RAX }
    /* +0x321668 */ __asm { ADD R10,R8 }
    /* +0x32166b */ __asm { ADD EBX,0xe6bbc937 }
    /* +0x321671 */ __asm { IMUL R9D,R9D,0x6329127 }
    /* +0x321678 */ __asm { SUB R9D,R15D }
    /* +0x32167b */ __asm { ADD R9D,0xc5233185 }
    /* +0x321682 */ __asm { MOVSXD RAX,R9D }
    /* +0x321685 */ __asm { LEA R8,[0x7fffa526e08e] }
    /* +0x32168c */ __asm { ADD R8,R11 }
    /* +0x32168f */ __asm { CALL R8 }
    /* +0x321692 */ __asm { MOV RSI,RCX }
    /* +0x321695 */ __asm { ROL RSI,0x2c }
    /* +0x321699 */ __asm { MOV R11,-0x3fffffffffffff }
    /* +0x3216a3 */ __asm { ADD R11,RSI }
    /* +0x3216a6 */ __asm { MOV RAX,RSI }
    /* +0x3216a9 */ __asm { SHL RAX,0x36 }
    /* +0x3216ad */ __asm { SUB RSI,RAX }
    /* +0x3216b0 */ __asm { CMP R12,RBX }
    /* +0x3216b3 */ __asm { CMOVLE RSI,R11 }
    /* +0x3216b7 */ __asm { MOV qword ptr [RBP + 0x68],RDI }
    /* +0x3216bb */ __asm { MOV R11,qword ptr [RBP + 0x160] }
    /* +0x3216c2 */ __asm { MOV qword ptr [RBP + 0x60],R11 }
    /* +0x3216c6 */ __asm { CMP qword ptr [RBP + 0x1b0],R14 }
    /* +0x3216cd */ __asm { JBE 0x7fffa4a917a2 }
    /* +0x3216d3 */ __asm { LEA R14,[0x7fffa5691928] }
    /* +0x3216da */ __asm { MOV R12D,0x84505f9e }
    /* +0x3216e0 */ __asm { SUB R12D,R15D }
    /* +0x3216e3 */ __asm { ADD R12D,0x1c543c3a }
    /* +0x3216ea */ __asm { LEA R11,[RSI + R13*0x2] }
    /* +0x3216ee */ __asm { MOV qword ptr [RBP + 0x160],R11 }
    /* +0x3216f5 */ __asm { MOV RDI,qword ptr [RBP + 0x50] }
    /* +0x3216f9 */ __asm { MOV RAX,qword ptr [RBP + 0x1d0] }
    /* +0x321700 */ __asm { LEA RBX,[0x2 + RAX*0x2] }
    /* +0x321708 */ __asm { ADD R13,R13 }
    /* +0x32170b */ __asm { LEA RDX,[RBP + 0x190] }
    /* +0x321712 */ __asm { MOV RCX,RSI }
    /* +0x321715 */ __asm { MOV R8,R13 }
    /* +0x321718 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x32171d */ __asm { MOV RDX,RDI }
    /* +0x321720 */ __asm { MOV RCX,qword ptr [RBP + 0x160] }
    /* +0x321727 */ __asm { MOV R8,RBX }
    /* +0x32172a */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x32172f */ __asm { MOV R8,RDI }
    /* +0x321732 */ __asm { SHR R8,0x3d }
    /* +0x321736 */ __asm { MOV R9D,0x907bcbcd }
    /* +0x32173c */ __asm { ADD R9D,R15D }
    /* +0x32173f */ __asm { ROL R9D,0x1e }
    /* +0x321743 */ __asm { XOR R8,RDI }
    /* +0x321746 */ __asm { ADD R9D,0xe2083978 }
    /* +0x32174d */ __asm { MOVSXD RAX,R9D }
    /* +0x321750 */ __asm { ADD RAX,R14 }
    /* +0x321753 */ __asm { MOV R11,R12 }
    /* +0x321756 */ __asm { CALL RAX }
    /* +0x321758 */ __asm { JMP 0x7fffa4a917d6 }
    /* +0x32175a */ __asm { LEA RAX,[RBX + R13*0x1] }
    /* +0x32175e */ __asm { LEA R11,[0x190 + R13*0x2] }
    /* +0x321766 */ __asm { ADD R11,RBP }
    /* +0x321769 */ __asm { CMP R15,0x8 }
    /* +0x32176d */ __asm { JC 0x7fffa4a91775 }
    /* +0x32176f */ __asm { MOV R12,qword ptr [RBP + 0x50] }
    /* +0x321773 */ __asm { JMP 0x7fffa4a91779 }
    /* +0x321775 */ __asm { LEA R12,[RBP + 0x50] }
    /* +0x321779 */ __asm { CMP R11,R12 }
    /* +0x32177c */ __asm { SETBE R9B }
    /* +0x321780 */ __asm { LEA R8,[R12 + RBX*0x2] }
    /* +0x321784 */ __asm { CMP RSI,R8 }
    /* +0x321787 */ __asm { SETA CL }
    /* +0x32178a */ __asm { OR CL,R9B }
    /* +0x32178d */ __asm { MOV qword ptr [RBP + 0x60],RAX }
    /* +0x321791 */ __asm { MOV RDI,R13 }
    /* +0x321794 */ __asm { JNZ 0x7fffa4a917df }
    /* +0x321796 */ __asm { MOV RDI,R12 }
    /* +0x321799 */ __asm { SUB RDI,RSI }
    /* +0x32179c */ __asm { JA 0x7fffa4a917dc }
    /* +0x32179e */ __asm { XOR EDI,EDI }
    /* +0x3217a0 */ __asm { JMP 0x7fffa4a917df }
    /* +0x3217a2 */ __asm { LEA R15,[RSI + R13*0x2] }
    /* +0x3217a6 */ __asm { ADD R13,R13 }
    /* +0x3217a9 */ __asm { LEA RDX,[RBP + 0x190] }
    /* +0x3217b0 */ __asm { MOV RCX,RSI }
    /* +0x3217b3 */ __asm { MOV R8,R13 }
    /* +0x3217b6 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x3217bb */ __asm { MOV RAX,qword ptr [RBP + 0x1d0] }
    /* +0x3217c2 */ __asm { LEA R8,[0x2 + RAX*0x2] }
    /* +0x3217ca */ __asm { LEA RDX,[RBP + 0x50] }
    /* +0x3217ce */ __asm { MOV RCX,R15 }
    /* +0x3217d1 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x3217d6 */ __asm { MOV qword ptr [RBP + 0x50],RSI }
    /* +0x3217da */ __asm { JMP 0x7fffa4a91828 }
    /* +0x3217dc */ __asm { SAR RDI,0x1 }
    /* +0x3217df */ __asm { LEA RSI,[R11 + RDI*0x2] }
    /* +0x3217e3 */ __asm { LEA R15,[R12 + RDI*0x2] }
    /* +0x3217e7 */ __asm { LEA RCX,[R12 + R13*0x2] }
    /* +0x3217eb */ __asm { SUB R13,RDI }
    /* +0x3217ee */ __asm { ADD RDI,RDI }
    /* +0x3217f1 */ __asm { ADD R13,R13 }
    /* +0x3217f4 */ __asm { LEA R8,[0x2 + RBX*0x2] }
    /* +0x3217fc */ __asm { MOV RDX,R12 }
    /* +0x3217ff */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x321804 */ __asm { LEA RDX,[RBP + 0x190] }
    /* +0x32180b */ __asm { MOV RCX,R12 }
    /* +0x32180e */ __asm { MOV R8,RDI }
    /* +0x321811 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x321816 */ __asm { MOV RDX,RSI }
    /* +0x321819 */ __asm { MOV RCX,R15 }
    /* +0x32181c */ __asm { MOV R8,R13 }
    /* +0x32181f */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x321824 */ __asm { MOVZX ESI,word ptr [RBP + 0x50] }
    /* +0x321828 */ __asm { CMP qword ptr [RBP + 0x18],0x8 }
    /* +0x32182d */ __asm { MOV R13,qword ptr [RBP + 0x60] }
    /* +0x321831 */ __asm { MOV word ptr [RBP + 0x50],0x0 }
    /* +0x321837 */ __asm { MOV R11,qword ptr [RBP + 0x52] }
    /* +0x32183b */ __asm { MOV RAX,qword ptr [RBP + 0x58] }
    /* +0x32183f */ __asm { MOV qword ptr [RBP + -0x20],R11 }
    /* +0x321843 */ __asm { MOV qword ptr [RBP + -0x1a],RAX }
    /* +0x321847 */ __asm { MOV R14,qword ptr [RBP + 0x68] }
    /* +0x32184b */ __asm { MOV qword ptr [RBP + 0x68],0x7 }
    /* +0x321853 */ __asm { MOV qword ptr [RBP + 0x60],0x0 }
    /* +0x32185b */ __asm { MOV RDI,qword ptr [RBP + 0x168] }
    /* +0x321862 */ __asm { JC 0x7fffa4a91925 }
    /* +0x321868 */ __asm { MOV R11D,0x2422f651 }
    /* +0x32186e */ __asm { LEA RAX,[0x7fffa5695ec7] }
    /* +0x321875 */ __asm { MOV R9D,0x942a99e9 }
    /* +0x32187b */ __asm { MOV RCX,qword ptr [RBP] }
    /* +0x32187f */ __asm { MOV R8,RCX }
    /* +0x321882 */ __asm { SHR R8,0x3d }
    /* +0x321886 */ __asm { XOR R8,RCX }
    /* +0x321889 */ __asm { MOVD XMM1,R9D }
    /* +0x32188e */ __asm { ADD R11D,0x5409c0d7 }
    /* +0x321895 */ __asm { PSUBD XMM1,XMM9 }
    /* +0x32189a */ __asm { MOVD R9D,XMM1 }
    /* +0x32189f */ __asm { XOR R9D,0x1d4d958c }
    /* +0x3218a6 */ __asm { MOV ECX,EDI }
    /* +0x3218a8 */ __asm { ROL R11D,CL }
    /* +0x3218ab */ __asm { ADD R9D,0x4e7af26f }
    /* +0x3218b2 */ __asm { MOVSXD RCX,R9D }
    /* +0x3218b5 */ __asm { ADD RCX,RAX }
    /* +0x3218b8 */ __asm { CALL RCX }
    /* +0x3218ba */ __asm { MOV word ptr [RBP],SI }
    /* +0x3218be */ __asm { CMP qword ptr [RBP + 0x68],0x8 }
    /* +0x3218c3 */ __asm { MOV qword ptr [RBP + 0x18],R14 }
    /* +0x3218c7 */ __asm { MOV R11,qword ptr [RBP + -0x20] }
    /* +0x3218cb */ __asm { MOV RAX,qword ptr [RBP + -0x1a] }
    /* +0x3218cf */ __asm { MOV qword ptr [RBP + 0x2],R11 }
    /* +0x3218d3 */ __asm { MOV qword ptr [RBP + 0x8],RAX }
    /* +0x3218d7 */ __asm { MOV qword ptr [RBP + 0x10],R13 }
    /* +0x3218db */ __asm { JC 0x7fffa4a91944 }
    /* +0x3218dd */ __asm { LEA RAX,[0x7fffa568c75e] }
    /* +0x3218e4 */ __asm { MOV R9W,0x87c9 }
    /* +0x3218e9 */ __asm { MOV R10D,0x43ac4232 }
    /* +0x3218ef */ __asm { IMUL R11D,R10D,-0x259d467f }
    /* +0x3218f6 */ __asm { MOV ECX,EDI }
    /* +0x3218f8 */ __asm { ROL R11D,CL }
    /* +0x3218fb */ __asm { SUB R9D,EDI }
    /* +0x3218fe */ __asm { ADD R11D,0xcfafbb2a }
    /* +0x321905 */ __asm { IMUL ECX,R9D,0x233b }
    /* +0x32190c */ __asm { MOVSX RCX,CX }
    /* +0x321910 */ __asm { ADD RCX,RAX }
    /* +0x321913 */ __asm { MOV RAX,qword ptr [RBP + 0x50] }
    /* +0x321917 */ __asm { MOV R8,RAX }
    /* +0x32191a */ __asm { SHR R8,0x3d }
    /* +0x32191e */ __asm { XOR R8,RAX }
    /* +0x321921 */ __asm { CALL RCX }
    /* +0x321923 */ __asm { JMP 0x7fffa4a91944 }
    /* +0x321925 */ __asm { LEA R11,[RBP + 0x52] }
    /* +0x321929 */ __asm { MOV qword ptr [RBP + 0x18],R14 }
    /* +0x32192d */ __asm { MOV RAX,qword ptr [R11] }
    /* +0x321930 */ __asm { MOV R11,qword ptr [R11 + 0x6] }
    /* +0x321934 */ __asm { MOV qword ptr [RBP + 0x2],RAX }
    /* +0x321938 */ __asm { MOV qword ptr [RBP + 0x8],R11 }
    /* +0x32193c */ __asm { MOV word ptr [RBP],SI }
    /* +0x321940 */ __asm { MOV qword ptr [RBP + 0x10],R13 }
    /* +0x321944 */ __asm { MOV ESI,dword ptr [RBP + 0x1c0] }
    /* +0x32194a */ __asm { MOV R9D,ESI }
    /* +0x32194d */ __asm { ROL R9D,0x9 }
    /* +0x321951 */ __asm { MOV EAX,ESI }
    /* +0x321953 */ __asm { ROL EAX,0x12 }
    /* +0x321956 */ __asm { MOVD XMM1,R9D }
    /* +0x32195b */ __asm { MOVD XMM3,EAX }
    /* +0x32195f */ __asm { PXOR XMM3,XMM1 }
    /* +0x321963 */ __asm { MOVD R9D,XMM3 }
    /* +0x321968 */ __asm { XOR R9D,ESI }
    /* +0x32196b */ __asm { MOV EAX,R9D }
    /* +0x32196e */ __asm { ROL EAX,0x4 }
    /* +0x321971 */ __asm { MOV R10D,R9D }
    /* +0x321974 */ __asm { ROL R10D,0x12 }
    /* +0x321978 */ __asm { XOR R10D,EAX }
    /* +0x32197b */ __asm { XOR R10D,R9D }
    /* +0x32197e */ __asm { MOV R9D,R10D }
    /* +0x321981 */ __asm { ROL R9D,0x4 }
    /* +0x321985 */ __asm { MOV EAX,R10D }
    /* +0x321988 */ __asm { ROL EAX,0x8 }
    /* +0x32198b */ __asm { XOR EAX,R9D }
    /* +0x32198e */ __asm { XOR EAX,R10D }
    /* +0x321991 */ __asm { MOV R9D,EAX }
    /* +0x321994 */ __asm { ROL R9D,0x8 }
    /* +0x321998 */ __asm { MOV R10D,EAX }
    /* +0x32199b */ __asm { ROL R10D,0x10 }
    /* +0x32199f */ __asm { XOR R10D,R9D }
    /* +0x3219a2 */ __asm { XOR R10D,EAX }
    /* +0x3219a5 */ __asm { MOV R9D,R10D }
    /* +0x3219a8 */ __asm { ROR R9D,0x1 }
    /* +0x3219ab */ __asm { MOV EAX,R10D }
    /* +0x3219ae */ __asm { ROL EAX,0x1 }
    /* +0x3219b0 */ __asm { XOR EAX,R9D }
    /* +0x3219b3 */ __asm { ROL R10D,0x10 }
    /* +0x3219b7 */ __asm { XOR R10D,EAX }
    /* +0x3219ba */ __asm { MOV R9D,R10D }
    /* +0x3219bd */ __asm { ROL R9D,0x1e }
    /* +0x3219c1 */ __asm { MOV EBX,R10D }
    /* +0x3219c4 */ __asm { ROL EBX,0x2 }
    /* +0x3219c7 */ __asm { XOR EBX,R9D }
    /* +0x3219ca */ __asm { XOR EBX,R10D }
    /* +0x3219cd */ __asm { MOV R9D,EBX }
    /* +0x3219d0 */ __asm { ROL R9D,0x1c }
    /* +0x3219d4 */ __asm { MOV R10D,EBX }
    /* +0x3219d7 */ __asm { ROL R10D,0x4 }
    /* +0x3219db */ __asm { MOV RAX,qword ptr [RBP + 0x10] }
    /* +0x3219df */ __asm { CMP qword ptr [RBP + 0x18],0x8 }
    /* +0x3219e4 */ __asm { JC 0x7fffa4a919ec }
    /* +0x3219e6 */ __asm { MOV R11,qword ptr [RBP] }
    /* +0x3219ea */ __asm { JMP 0x7fffa4a919ef }
    /* +0x3219ec */ __asm { MOV R11,RBP }
    /* +0x3219ef */ __asm { XOR R9D,R10D }
    /* +0x3219f2 */ __asm { TEST RAX,RAX }
    /* +0x3219f5 */ __asm { JZ 0x7fffa4a922e8 }
    /* +0x3219fb */ __asm { LEA R8,[RAX + -0x1] }
    /* +0x3219ff */ __asm { MOV RDX,0x7fffffffffffffff }
    /* +0x321a09 */ __asm { AND RDX,R8 }
    /* +0x321a0c */ __asm { MOV R8,R11 }
    /* +0x321a0f */ __asm { CMP RDX,0x3 }
    /* +0x321a13 */ __asm { JC 0x7fffa4a9226f }
    /* +0x321a19 */ __asm { LEA R10,[RDX + 0x1] }
}


// ============================================================================
// Function : Unwind@7fffa4a990a0  |  RVA: 0x3290a0  |  Size: 243 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a990a0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  code *pcVar3;
  
  uVar2 = (uint16_t)*(uint64_t *)(param_2 + 0x1e0) ^ 0xff9b;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1e8) & 0xf;
  if ((uint64_t)(uint16_t)~(uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) < *(uint64_t *)(param_2 + 0xe8))
  {
    pcVar3 = (code *)((int64_t)(short)(-0x248 - ((short)*(uint64_t *)(param_2 + 0x1e0) + 0x5d96))
                     + 0x7fffa568dc6a);
    (*pcVar3)(pcVar3,*(uint32_t *)(param_2 + 0x250),
              *(uint64_t *)(param_2 + 0xd0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xd0),
              *(int *)(param_2 + 0x1e8) + 0xda02852bU ^ *(uint32_t *)(param_2 + 0x250));
  }
  *(uint64_t *)(param_2 + 0xe8) = 7;
  *(uint16_t *)(param_2 + 0xd0) = 0;
  *(uint64_t *)(param_2 + 0xe0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a991a0  |  RVA: 0x3291a0  |  Size: 203 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a991a0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x208)) {
    pcVar1 = (code *)((int64_t)
                      (short)(((short)*(uint32_t *)(param_2 + 0x1e0) * 0x3b78 ^ 0x428U) -
                             (short)*(uint32_t *)(param_2 + 0x1e8)) + 0x7fffa568b7f3);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x1f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1f0));
  }
  *(uint16_t *)(param_2 + 0x1f0) = 0;
  *(uint64_t *)(param_2 + 0x208) = 7;
  *(uint64_t *)(param_2 + 0x200) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a99270  |  RVA: 0x329270  |  Size: 192 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a99270(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  code *pcVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0xe8)) {
    uVar2 = (uint32_t)*(uint64_t *)(param_2 + 0x1e8);
    uVar1 = 0x3520da42 - uVar2;
    pcVar3 = (code *)((int64_t)(int)(uVar1 * 0x400 | uVar1 >> 0x16) + 0x7fffa5693efa);
    (*pcVar3)(pcVar3,0x4f06f7f0,
              *(uint64_t *)(param_2 + 0xd0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xd0),
              (uint64_t)(uVar2 | 1) * 0x4f06f7f0);
  }
  *(uint64_t *)(param_2 + 0xe0) = 0;
  *(uint16_t *)(param_2 + 0xd0) = 0;
  *(uint64_t *)(param_2 + 0xe8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a99330  |  RVA: 0x329330  |  Size: 170 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a99330(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x98)) {
    (*(code *)(&UNK_7fffa56883a7 + (short)(-0x2d04 - (short)*(uint64_t *)(param_2 + 0x1e8))))
              (&UNK_7fffa56883a7 + (short)(-0x2d04 - (short)*(uint64_t *)(param_2 + 0x1e8)),
               0x6f892fea,*(uint64_t *)(param_2 + 0x80) >> 0x3d ^ *(uint64_t *)(param_2 + 0x80),
               (uint64_t)((uint32_t)*(uint64_t *)(param_2 + 0x1e8) | 1) * 0x6f892fea);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4a993dc  |  RVA: 0x3293dc  |  Size: 93 bytes
// Callers  : FUN_7fffa507e880@0x90e880
// Callees  : FUN_7fffa55ce1b8@0xe5e1b8
// ============================================================================
uint32_t FUN_7fffa4a993dc(char param_1)

{
  char acStackX_8 [8];
  uint8_t auStackX_10 [8];
  uint32_t auStackX_18 [2];
  uint32_t auStackX_20 [2];
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t *puStack_20;
  char *pcStack_18;
  uint32_t *puStack_10;
  
  auStackX_20[0] = 0;
  puStack_20 = auStackX_20;
  auStackX_18[0] = 0;
  pcStack_18 = acStackX_8;
  puStack_10 = auStackX_18;
  uStack_28 = 8;
  uStack_24 = 8;
  acStackX_8[0] = param_1;
  FUN_7fffa55ce1b8(auStackX_10,&uStack_24,&puStack_20,&uStack_28);
  if (acStackX_8[0] != '\0') {
    auStackX_18[0] = auStackX_20[0];
  }
  return auStackX_18[0];
}


// ============================================================================
// Function : FUN_7fffa4a99440  |  RVA: 0x329440  |  Size: 140 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4a994bb) */
/* WARNING: Removing unreachable block (ram,0x7fffa4a994c0) */

uint64_t FUN_7fffa4a99440(void)

{
  uint8_t bVar1;
  uint64_t in_RAX;
  uint8_t in_R10B;
  uint64_t uStack_8;
  
  bVar1 = *(uint8_t *)((int64_t)
                    (short)(-0x33f8 << (in_R10B & 0xf) | 0xcc08U >> 0x10 - (in_R10B & 0xf)) +
                   0x7fffa47c396c);
  uStack_8 = CONCAT17(bVar1,(int7)in_RAX);
  bRam00007fffa47bd17d = bVar1 & 1;
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa4a994d0  |  RVA: 0x3294d0  |  Size: 35 bytes
// Callers  : FUN_7fffa55f14d0@0xe814d0
// Callees  : FUN_7fffa4f41160@0x7d1160, FUN_7fffa50cadb0@0x95adb0
// ============================================================================
void FUN_7fffa4a994d0(uint64_t param_1)

{
  code *pcVar1;
  uint8_t auStack_28 [40];
  
  FUN_7fffa50cadb0(auStack_28,param_1);
  FUN_7fffa4f41160(auStack_28,&UNK_7fffa5894300);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4a99500  |  RVA: 0x329500  |  Size: 302 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa5102405@0x992405
// Callees  : FUN_7fffa5488850@0xd18850
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa4a99500(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5,uint64_t param_6,int param_7,uint64_t param_8,
                     uint64_t param_9,uint64_t *param_10,uint8_t param_11)

{
  uint8_t auStack_e8 [32];
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  code *pcStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint64_t uStack_28;
  uint64_t uStack_18;
  
  uStack_18 = _DAT_7fffa4780040 ^ (uint64_t)auStack_e8;
  uStack_b8 = 0x180000029;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0xf;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  pcStack_98 = FUN_7fffa5267a20;
  uStack_88 = param_5;
  lStack_80 = (int64_t)param_7;
  uStack_70 = param_6;
  uStack_60 = (uint64_t)param_11;
  uStack_c0 = param_10[8];
  uStack_c8 = param_10[5];
  uStack_58 = 0x19930520;
  uStack_90 = param_4;
  uStack_78 = param_3;
  uStack_68 = param_2;
  (*(code *)&DAT_7ff8504cda30)(*param_1,*param_10,&uStack_b8,0);
  FUN_7fffa5488850(uStack_18 ^ (uint64_t)auStack_e8);
  return;
}


// ============================================================================
// Function : FUN_7fffa4a99630  |  RVA: 0x329630  |  Size: 2995 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4a99630(void) {
    /* +0x329630 */ __asm { PUSH RBP }
    /* +0x329631 */ __asm { PUSH R12 }
    /* +0x329633 */ __asm { PUSH R15 }
    /* +0x329635 */ __asm { PUSH RBX }
    /* +0x329636 */ __asm { PUSH R13 }
    /* +0x329638 */ __asm { PUSH RDI }
    /* +0x329639 */ __asm { PUSH R14 }
    /* +0x32963b */ __asm { PUSH RSI }
    /* +0x32963c */ __asm { SUB RSP,0x638 }
    /* +0x329643 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x32964b */ __asm { MOVDQA xmmword ptr [RBP + 0x5a0],XMM9 }
    /* +0x329654 */ __asm { MOVDQA xmmword ptr [RBP + 0x590],XMM10 }
    /* +0x32965d */ __asm { MOVDQA xmmword ptr [RBP + 0x580],XMM11 }
    /* +0x329666 */ __asm { MOVDQA xmmword ptr [RBP + 0x570],XMM6 }
    /* +0x32966e */ __asm { MOVDQA xmmword ptr [RBP + 0x560],XMM7 }
    /* +0x329676 */ __asm { MOV qword ptr [RBP + 0x558],-0x2 }
    /* +0x329681 */ __asm { MOV RBX,RDX }
    /* +0x329684 */ __asm { MOV dword ptr [RBP + 0x1b0],0x58fa7e0f }
    /* +0x32968e */ __asm { MOV R10D,dword ptr [RBP + 0x1b0] }
    /* +0x329695 */ __asm { LEA R8,[0x7fffa5186f1c] }
    /* +0x32969c */ __asm { MOV R15D,EBX }
    /* +0x32969f */ __asm { OR R15D,0x1 }
    /* +0x3296a3 */ __asm { PXOR XMM0,XMM0 }
    /* +0x3296a7 */ __asm { MOVDQA xmmword ptr [RBP + 0x50],XMM0 }
    /* +0x3296ac */ __asm { MOVDQA xmmword ptr [RBP + 0x40],XMM0 }
    /* +0x3296b1 */ __asm { MOV R10D,0xf9b30457 }
    /* +0x3296b7 */ __asm { IMUL R10D,R15D }
    /* +0x3296bb */ __asm { ROL R10D,0x1c }
    /* +0x3296bf */ __asm { MOVSXD RAX,R10D }
    /* +0x3296c2 */ __asm { ADD RAX,R8 }
    /* +0x3296c5 */ __asm { MOV R10D,0xa145bdad }
    /* +0x3296cb */ __asm { MOV R8D,0xb985bcad }
    /* +0x3296d1 */ __asm { SUB R8D,R10D }
    /* +0x3296d4 */ __asm { MOV ECX,EBX }
    /* +0x3296d6 */ __asm { ROL R8D,CL }
    /* +0x3296d9 */ __asm { MOV RCX,R8 }
    /* +0x3296dc */ __asm { CALL RAX }
    /* +0x3296de */ __asm { MOV R8,0x7fffffffffffffff }
    /* +0x3296e8 */ __asm { CMP RAX,R8 }
    /* +0x3296eb */ __asm { JNC 0x7fffa4a9f45a }
    /* +0x3296f1 */ __asm { MOV R12,RAX }
    /* +0x3296f4 */ __asm { MOV R8D,0x63ad6790 }
    /* +0x3296fa */ __asm { IMUL R8D,R15D }
    /* +0x3296fe */ __asm { ROR R8D,0x1 }
    /* +0x329701 */ __asm { MOV RSI,0x7ffffffffffffffe }
    /* +0x32970b */ __asm { CMP RAX,R8 }
    /* +0x32970e */ __asm { MOV qword ptr [RBP + 0x1a0],RBX }
    /* +0x329715 */ __asm { MOV qword ptr [RBP + 0x488],R15 }
    /* +0x32971c */ __asm { JNC 0x7fffa4a99757 }
    /* +0x32971e */ __asm { MOV EDX,0x8c7101da }
    /* +0x329723 */ __asm { ADD EDX,0x96c0b21f }
    /* +0x329729 */ __asm { MOV qword ptr [RBP + 0x50],R12 }
    /* +0x32972d */ __asm { MOV R8,R12 }
    /* +0x329730 */ __asm { ADD R8,R12 }
    /* +0x329733 */ __asm { XOR EDX,EBX }
    /* +0x329735 */ __asm { MOV qword ptr [RBP + 0x58],0x7 }
    /* +0x32973d */ __asm { LEA RCX,[RBP + 0x40] }
    /* +0x329741 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x329746 */ __asm { MOV word ptr [RBP + R12*0x2 + 0x40],0x0 }
    /* +0x32974e */ __asm { MOV R12,qword ptr [RBP + 0x50] }
    /* +0x329752 */ __asm { JMP 0x7fffa4a9985f }
    /* +0x329757 */ __asm { MOV RDX,R15 }
    /* +0x32975a */ __asm { LEA R14,[R12 + R12*0x1] }
    /* +0x32975e */ __asm { MOV R10D,0x6e789b20 }
    /* +0x329764 */ __asm { MOV R8D,0x6f194d4b }
    /* +0x32976a */ __asm { MOV R11D,0x306b0beb }
    /* +0x329770 */ __asm { XOR R11D,0xb6a05a75 }
    /* +0x329777 */ __asm { IMUL R11D,EDX }
    /* +0x32977b */ __asm { MOV R9,R12 }
    /* +0x32977e */ __asm { OR R9,0x7 }
    /* +0x329782 */ __asm { MOVSXD RAX,R11D }
    /* +0x329785 */ __asm { MOV R15D,0x84ee190e }
    /* +0x32978b */ __asm { IMUL R10D,EDX }
    /* +0x32978f */ __asm { CMP R9,0xb }
    /* +0x329793 */ __asm { MOV RDI,R12 }
    /* +0x329796 */ __asm { MOV R12D,0xa }
    /* +0x32979c */ __asm { CMOVNC R12,R9 }
    /* +0x3297a0 */ __asm { CMP R12,RSI }
    /* +0x3297a3 */ __asm { CMOVNC R12,RSI }
    /* +0x3297a7 */ __asm { ADD R8D,0x23c67a95 }
    /* +0x3297ae */ __asm { MOV ECX,EBX }
    /* +0x3297b0 */ __asm { ROR R8D,CL }
    /* +0x3297b3 */ __asm { NOT R10D }
    /* +0x3297b6 */ __asm { XOR R15D,0xfb10193e }
    /* +0x3297bd */ __asm { LEA R11,[0x7fffa5273d73] }
    /* +0x3297c4 */ __asm { MOV EDX,0xda2ccc1c }
    /* +0x3297c9 */ __asm { SUB EDX,EBX }
    /* +0x3297cb */ __asm { ROL EDX,0x15 }
    /* +0x3297ce */ __asm { LEA R9,[R12 + R12*0x1] }
    /* +0x3297d2 */ __asm { OR R9,0x2 }
    /* +0x3297d6 */ __asm { CMP RDX,R8 }
    /* +0x3297d9 */ __asm { LEA R8,[R12 + R12*0x1 + 0x2] }
    /* +0x3297de */ __asm { CMOVG R8,R9 }
    /* +0x3297e2 */ __asm { MOVQ XMM0,R8 }
    /* +0x3297e7 */ __asm { MOVDQA XMM2,XMM0 }
    /* +0x3297eb */ __asm { PSLLQ XMM2,0x3c }
    /* +0x3297f0 */ __asm { ROL R10D,0x1c }
    /* +0x3297f4 */ __asm { MOVSXD R8,R10D }
    /* +0x3297f7 */ __asm { ADD R8,R11 }
    /* +0x3297fa */ __asm { PXOR XMM2,XMM0 }
    /* +0x3297fe */ __asm { MOVQ R11,XMM2 }
    /* +0x329803 */ __asm { MOV R10,0x1865d799980f }
    /* +0x32980d */ __asm { ADD R10,R11 }
    /* +0x329810 */ __asm { SHL R11,0xe }
    /* +0x329814 */ __asm { ADD R10,R11 }
    /* +0x329817 */ __asm { CALL R8 }
    /* +0x32981a */ __asm { MOV RSI,RCX }
    /* +0x32981d */ __asm { MOV qword ptr [RBP + 0x50],RDI }
    /* +0x329821 */ __asm { MOV qword ptr [RBP + 0x58],R12 }
    /* +0x329825 */ __asm { MOV R12,RDI }
    /* +0x329828 */ __asm { ROL RSI,0x2c }
    /* +0x32982c */ __asm { MOV R8,RSI }
    /* +0x32982f */ __asm { SHL R8,0x36 }
    /* +0x329833 */ __asm { SUB RSI,R8 }
    /* +0x329836 */ __asm { MOV RDX,R15 }
    /* +0x329839 */ __asm { MOV RCX,RSI }
    /* +0x32983c */ __asm { MOV R8,R14 }
    /* +0x32983f */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x329844 */ __asm { MOV word ptr [RSI + RDI*0x2],0x0 }
    /* +0x32984a */ __asm { MOV qword ptr [RBP + 0x40],RSI }
    /* +0x32984e */ __asm { MOV RSI,0x7ffffffffffffffe }
    /* +0x329858 */ __asm { MOV RBX,qword ptr [RBP + 0x1a0] }
    /* +0x32985f */ __asm { MOV R15,-0x7c9a946e51875990 }
    /* +0x329869 */ __asm { MOV R9,0x1f45b4c50d60e4bf }
    /* +0x329873 */ __asm { MOV R11,-0x7ca9940351e259fc }
    /* +0x32987d */ __asm { MOV RCX,0x3150cb3deabed324 }
    /* +0x329887 */ __asm { MOV R14,0x1f36b4bc0d13e4e3 }
    /* +0x329891 */ __asm { MOV R8W,0xc687 }
    /* +0x329896 */ __asm { MOV R10,0x1972575809da0937 }
    /* +0x3298a0 */ __asm { MOV RDI,0x1972573409b60953 }
    /* +0x3298aa */ __asm { LEA RDX,[RBP + 0x1b0] }
    /* +0x3298b1 */ __asm { LEA RAX,[0x7fffa517b663] }
    /* +0x3298b8 */ __asm { MOV qword ptr [RBP + 0x4d8],RCX }
    /* +0x3298bf */ __asm { MOV qword ptr [RBP + 0x4d0],RDI }
    /* +0x3298c6 */ __asm { MOV qword ptr [RBP + 0x4b8],R11 }
    /* +0x3298cd */ __asm { MOV R11,0x4fdf0fb48fc072bf }
    /* +0x3298d7 */ __asm { MOV qword ptr [RBP + 0x4c0],R11 }
    /* +0x3298de */ __asm { MOV RDI,-0x7e6df35855008406 }
    /* +0x3298e8 */ __asm { MOV R13,0x4fab0fda8f9c728d }
    /* +0x3298f2 */ __asm { MOV R11,-0x7e43f334556c8462 }
    /* +0x3298fc */ __asm { MOV qword ptr [RBP + 0x4c8],R11 }
    /* +0x329903 */ __asm { MOV qword ptr [RBP + 0x4b0],R9 }
    /* +0x32990a */ __asm { MOV qword ptr [RBP + 0x1d8],RCX }
    /* +0x329911 */ __asm { MOV qword ptr [RBP + 0x410],R14 }
    /* +0x329918 */ __asm { MOV qword ptr [RBP + 0x1b0],R14 }
    /* +0x32991f */ __asm { MOV qword ptr [RBP + 0x78],R13 }
    /* +0x329923 */ __asm { MOV qword ptr [RBP + 0x1c0],R13 }
    /* +0x32992a */ __asm { MOV qword ptr [RBP + 0x188],RDI }
    /* +0x329931 */ __asm { MOV qword ptr [RBP + 0x1c8],RDI }
    /* +0x329938 */ __asm { MOV qword ptr [RBP + 0x4a8],R15 }
    /* +0x32993f */ __asm { MOV qword ptr [RBP + 0x1b8],R15 }
    /* +0x329946 */ __asm { MOV qword ptr [RBP + 0x1d0],R10 }
    /* +0x32994d */ __asm { MOV R11D,EBX }
    /* +0x329950 */ __asm { OR R11D,0x1 }
    /* +0x329954 */ __asm { MOV qword ptr [RBP + 0x68],R11 }
    /* +0x329958 */ __asm { IMUL R8D,R11D }
    /* +0x32995c */ __asm { XOR R8D,0xf872 }
    /* +0x329963 */ __asm { MOVSX R8,R8W }
    /* +0x329967 */ __asm { MOVAPS XMM0,xmmword ptr [RDX + 0x20] }
    /* +0x32996b */ __asm { XORPS XMM0,xmmword ptr [RBP + 0x4d0] }
    /* +0x329972 */ __asm { ADD RAX,R8 }
    /* +0x329975 */ __asm { MOVAPS xmmword ptr [RBP + 0x4d0],XMM0 }
    /* +0x32997c */ __asm { MOVDQA XMM0,xmmword ptr [RDX] }
    /* +0x329980 */ __asm { MOVDQA XMM2,xmmword ptr [RDX + 0x10] }
    /* +0x329985 */ __asm { MOV R14,RSI }
    /* +0x329988 */ __asm { SUB R14,R12 }
    /* +0x32998b */ __asm { PXOR XMM2,xmmword ptr [RBP + 0x4c0] }
    /* +0x329993 */ __asm { MOVDQA xmmword ptr [RBP + 0x4c0],XMM2 }
    /* +0x32999b */ __asm { PXOR XMM0,xmmword ptr [RBP + 0x4b0] }
    /* +0x3299a3 */ __asm { MOVDQA xmmword ptr [RBP + 0x4b0],XMM0 }
    /* +0x3299ab */ __asm { LEA RCX,[RBP + 0x4b0] }
    /* +0x3299b2 */ __asm { CALL RAX }
    /* +0x3299b4 */ __asm { CMP R14,RAX }
    /* +0x3299b7 */ __asm { JC 0x7fffa4a9f47e }
    /* +0x3299bd */ __asm { MOV qword ptr [RBP + 0x3f0],R12 }
    /* +0x3299c4 */ __asm { LEA R8,[RAX + R12*0x1] }
    /* +0x3299c8 */ __asm { MOV RDX,qword ptr [RBP + 0x40] }
    /* +0x3299cc */ __asm { MOV R11,qword ptr [RBP + 0x58] }
    /* +0x3299d0 */ __asm { PXOR XMM0,XMM0 }
    /* +0x3299d4 */ __asm { MOVDQA xmmword ptr [RBP + 0x420],XMM0 }
    /* +0x3299dc */ __asm { LEA RDI,[RBP + 0x420] }
    /* +0x3299e3 */ __asm { MOV R13D,0x7 }
    /* +0x3299e9 */ __asm { MOV R12,R8 }
    /* +0x3299ec */ __asm { CMP R8,0x8 }
    /* +0x3299f0 */ __asm { MOV R14,qword ptr [RBP + 0x488] }
    /* +0x3299f7 */ __asm { JC 0x7fffa4a99b3a }
    /* +0x3299fd */ __asm { MOV qword ptr [RBP + 0x480],RDX }
    /* +0x329a04 */ __asm { MOV EDX,0x601ac9ef }
    /* +0x329a09 */ __asm { MOV R8D,0x12689b1 }
    /* +0x329a0f */ __asm { MOV R9D,0x750e06da }
    /* +0x329a15 */ __asm { MOV R10D,0x6e63d971 }
    /* +0x329a1b */ __asm { MOV RCX,qword ptr [RBP + 0x1a0] }
    /* +0x329a22 */ __asm { SUB R10D,ECX }
    /* +0x329a25 */ __asm { MOV qword ptr [RBP + 0x4f0],R11 }
    /* +0x329a2c */ __asm { MOV R11D,0x9d3dce04 }
    /* +0x329a32 */ __asm { ADD R11D,0x454231af }
    /* +0x329a39 */ __asm { ROL R11D,CL }
    /* +0x329a3c */ __asm { IMUL R9D,R14D }
    /* +0x329a40 */ __asm { ROL R9D,0x1c }
    /* +0x329a44 */ __asm { MOV qword ptr [RBP + 0x440],RAX }
    /* +0x329a4b */ __asm { MOV EAX,0xa5d98d03 }
    /* +0x329a50 */ __asm { ADD R10D,0x2e66edee }
    /* +0x329a57 */ __asm { SUB R8D,ECX }
    /* +0x329a5a */ __asm { ADD R8D,0xbd72ddd3 }
    /* +0x329a61 */ __asm { MOV EBX,0xd834500e }
    /* +0x329a66 */ __asm { ADD EBX,0x64f2488f }
    /* +0x329a6c */ __asm { ROL EBX,CL }
    /* +0x329a6e */ __asm { IMUL R15D,EBX,0x27dd3b27 }
    /* +0x329a75 */ __asm { SUB EDX,ECX }
    /* +0x329a77 */ __asm { LEA RDI,[0x7fffa52742ec] }
    /* +0x329a7e */ __asm { ADD EAX,ECX }
    /* +0x329a80 */ __asm { ADD EAX,0x59848331 }
    /* +0x329a85 */ __asm { XOR EAX,0x9a5b4cf3 }
    /* +0x329a8a */ __asm { CDQE }
    /* +0x329a8c */ __asm { ROL EDX,0x11 }
    /* +0x329a8f */ __asm { XOR R9D,0xde79369f }
    /* +0x329a96 */ __asm { MOV R13,R12 }
    /* +0x329a99 */ __asm { OR R13,0x7 }
    /* +0x329a9d */ __asm { CMP R13,0xb }
    /* +0x329aa1 */ __asm { MOV R14D,0xa }
    /* +0x329aa7 */ __asm { CMOVC R13,R14 }
    /* +0x329aab */ __asm { CMP R13,RSI }
    /* +0x329aae */ __asm { CMOVNC R13,RSI }
    /* +0x329ab2 */ __asm { CMP R9,0x77e80a6d }
    /* +0x329ab9 */ __asm { CMOVNZ R13,R14 }
    /* +0x329abd */ __asm { LEA R9,[0x2 + R13*0x2] }
    /* +0x329ac5 */ __asm { MOV R14,R9 }
    /* +0x329ac8 */ __asm { XOR R14,0x3c }
    /* +0x329acc */ __asm { MOV RBX,R9 }
    /* +0x329acf */ __asm { SHL RBX,0x3c }
    /* +0x329ad3 */ __asm { CMP RDX,R15 }
    /* +0x329ad6 */ __asm { CMOVNZ RBX,R14 }
    /* +0x329ada */ __asm { MOV R14,qword ptr [RBP + 0x488] }
    /* +0x329ae1 */ __asm { XOR RBX,R9 }
    /* +0x329ae4 */ __asm { MOV EDX,EBX }
    /* +0x329ae6 */ __asm { AND EDX,0x6195d80e }
    /* +0x329aec */ __asm { ADD RBX,0x6195d80f }
    /* +0x329af3 */ __asm { CMP R8,R10 }
    /* +0x329af6 */ __asm { CMOVA RDX,RBX }
    /* +0x329afa */ __asm { MOV R10,RDX }
    /* +0x329afd */ __asm { SHL R10,0xe }
    /* +0x329b01 */ __asm { ADD R10,RDX }
    /* +0x329b04 */ __asm { MOVSXD R8,R11D }
    /* +0x329b07 */ __asm { ADD R8,RDI }
    /* +0x329b0a */ __asm { CALL R8 }
    /* +0x329b0d */ __asm { MOV R11,qword ptr [RBP + 0x4f0] }
    /* +0x329b14 */ __asm { MOV RDX,qword ptr [RBP + 0x480] }
    /* +0x329b1b */ __asm { MOV RAX,qword ptr [RBP + 0x440] }
    /* +0x329b22 */ __asm { MOV RDI,RCX }
    /* +0x329b25 */ __asm { ROL RDI,0x2c }
    /* +0x329b29 */ __asm { MOV R8,RDI }
    /* +0x329b2c */ __asm { SHL R8,0x36 }
    /* +0x329b30 */ __asm { SUB RDI,R8 }
    /* +0x329b33 */ __asm { MOV qword ptr [RBP + 0x420],RDI }
    /* +0x329b3a */ __asm { LEA R9,[RBP + 0x3e0] }
    /* +0x329b41 */ __asm { MOV R8,qword ptr [RBP + 0x3f0] }
    /* +0x329b48 */ __asm { LEA R10,[RDI + R8*0x2] }
    /* +0x329b4c */ __asm { MOV qword ptr [RBP + 0x4f0],R10 }
    /* +0x329b53 */ __asm { ADD RAX,RAX }
    /* +0x329b56 */ __asm { MOV qword ptr [RBP + 0x440],RAX }
    /* +0x329b5d */ __asm { MOV R15D,0x20ad003d }
    /* +0x329b63 */ __asm { ADD R8,R8 }
    /* +0x329b66 */ __asm { XOR R15D,0x637f2aac }
    /* +0x329b6d */ __asm { MOV R10D,0xf99aa05c }
    /* +0x329b73 */ __asm { CMP R11,0x8 }
    /* +0x329b77 */ __asm { LEA RAX,[RBP + 0x40] }
    /* +0x329b7b */ __asm { CMOVC RDX,RAX }
    /* +0x329b7f */ __asm { LEA RAX,[0x7fffa47f9ab6] }
    /* +0x329b86 */ __asm { MOV BX,0x2990 }
    /* +0x329b8a */ __asm { MOV R11D,0xdc70a96e }
    /* +0x329b90 */ __asm { ADD R11D,0x5c14337c }
    /* +0x329b97 */ __asm { IMUL R11D,R14D }
    /* +0x329b9b */ __asm { MOVSXD R11,R11D }
    /* +0x329b9e */ __asm { ADD R11,RAX }
    /* +0x329ba1 */ __asm { MOV qword ptr [RBP + 0x480],R11 }
    /* +0x329ba8 */ __asm { MOV R14,R9 }
    /* +0x329bab */ __asm { ADD EBX,0xffffd670 }
    /* +0x329bb1 */ __asm { MOV RCX,qword ptr [RBP + 0x1a0] }
    /* +0x329bb8 */ __asm { ROL BX,CL }
    /* +0x329bbb */ __asm { ROL R14,0x3c }
    /* +0x329bbf */ __asm { MOV qword ptr [RBP + 0x430],R12 }
    /* +0x329bc6 */ __asm { ADD R10D,ECX }
    /* +0x329bc9 */ __asm { ROL R10D,0x13 }
    /* +0x329bcd */ __asm { MOVSXD RSI,R10D }
    /* +0x329bd0 */ __asm { MOV qword ptr [RBP + 0x438],R13 }
    /* +0x329bd7 */ __asm { MOV qword ptr [RBP + 0x3f0],R9 }
    /* +0x329bde */ __asm { MOV R13,R9 }
    /* +0x329be1 */ __asm { ROL R13,0x18 }
    /* +0x329be5 */ __asm { MOV RCX,RDI }
    /* +0x329be8 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x329bed */ __asm { LEA RDX,[RBP + 0x4b0] }
    /* +0x329bf4 */ __asm { MOV RCX,qword ptr [RBP + 0x4f0] }
    /* +0x329bfb */ __asm { MOV R8,qword ptr [RBP + 0x440] }
    /* +0x329c02 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x329c07 */ __asm { MOV word ptr [RDI + R12*0x2],0x0 }
    /* +0x329c0e */ __asm { MOV R8,qword ptr [RBP + 0x430] }
    /* +0x329c15 */ __asm { MOV RAX,qword ptr [RBP + 0x438] }
    /* +0x329c1c */ __asm { MOV qword ptr [RBP + 0x3e8],R8 }
    /* +0x329c23 */ __asm { CMP RAX,0x8 }
    /* +0x329c27 */ __asm { LEA R8,[RBP + 0x420] }
    /* +0x329c2e */ __asm { JC 0x7fffa4a99c37 }
    /* +0x329c30 */ __asm { MOV R8,qword ptr [RBP + 0x420] }
    /* +0x329c37 */ __asm { MOV qword ptr [RBP + 0x3e0],R8 }
    /* +0x329c3e */ __asm { MOVZX R8D,BX }
    /* +0x329c42 */ __asm { MOV RAX,R8 }
    /* +0x329c45 */ __asm { ROL RAX,0xf }
    /* +0x329c49 */ __asm { MOV R10,R8 }
    /* +0x329c4c */ __asm { ROL R10,0x3c }
    /* +0x329c50 */ __asm { XOR R10,RAX }
    /* +0x329c53 */ __asm { XOR R10,R8 }
    /* +0x329c56 */ __asm { MOV RDX,R10 }
    /* +0x329c59 */ __asm { SHL RDX,0x6 }
    /* +0x329c5d */ __asm { ADD RDX,R10 }
    /* +0x329c60 */ __asm { XOR R13,R14 }
    /* +0x329c63 */ __asm { XOR R13,qword ptr [RBP + 0x3f0] }
    /* +0x329c6a */ __asm { SUB R13,R15 }
    /* +0x329c6d */ __asm { MOV qword ptr [RSP + 0x20],R13 }
    /* +0x329c72 */ __asm { MOV R11D,0x1 }
    /* +0x329c78 */ __asm { XOR R9D,R9D }
    /* +0x329c7b */ __asm { MOV R8,RSI }
    /* +0x329c7e */ __asm { CALL qword ptr [RBP + 0x480] }
    /* +0x329c84 */ __asm { TEST R9B,R9B }
    /* +0x329c87 */ __asm { JZ 0x7fffa4a99e59 }
    /* +0x329c8d */ __asm { MOV R10D,0x4ea4511a }
    /* +0x329c93 */ __asm { MOV RCX,qword ptr [RBP + 0x1a0] }
    /* +0x329c9a */ __asm { SUB R10D,ECX }
    /* +0x329c9d */ __asm { XOR R10D,0x5f4dbe1 }
    /* +0x329ca4 */ __asm { MOV dword ptr [RBP + 0x1b0],R10D }
    /* +0x329cab */ __asm { MOV R10D,dword ptr [RBP + 0x1b0] }
    /* +0x329cb2 */ __asm { TEST R10B,0x1 }
    /* +0x329cb6 */ __asm { NOP }
    /* +0x329cb7 */ __asm { NOP }
    /* +0x329cb8 */ __asm { NOP }
    /* +0x329cb9 */ __asm { NOP }
    /* +0x329cba */ __asm { NOP }
    /* +0x329cbb */ __asm { NOP }
    /* +0x329cbc */ __asm { NOP }
    /* +0x329cbd */ __asm { NOP }
    /* +0x329cbe */ __asm { NOP }
    /* +0x329cbf */ __asm { NOP }
    /* +0x329cc0 */ __asm { NOP }
    /* +0x329cc1 */ __asm { NOP }
    /* +0x329cc2 */ __asm { NOP }
    /* +0x329cc3 */ __asm { NOP }
    /* +0x329cc4 */ __asm { NOP }
    /* +0x329cc5 */ __asm { NOP }
    /* +0x329cc6 */ __asm { NOP }
    /* +0x329e59 */ __asm { MOV dword ptr [RBP + 0x1b0],0xfd7dfb75 }
    /* +0x329e63 */ __asm { MOV R10D,dword ptr [RBP + 0x1b0] }
    /* +0x329e6a */ __asm { POP R11 }
    /* +0x329e6c */ __asm { MOV RSI,qword ptr [RBP + 0x1a0] }
    /* +0x329e73 */ __asm { JMP 0x7fffa4aac1a9 }
    /* +0x32f45a */ __asm { MOV R10W,0x73ef }
    /* +0x32f45f */ __asm { ADD R10D,EBX }
    /* +0x32f462 */ __asm { ROL R10W,0x5 }
    /* +0x32f467 */ __asm { IMUL R8D,R10D,-0x1577 }
    /* +0x32f46e */ __asm { MOVSX R8,R8W }
    /* +0x32f472 */ __asm { LEA RAX,[0x7fffa519cadc] }
    /* +0x32f479 */ __asm { ADD RAX,R8 }
    /* +0x32f47c */ __asm { CALL RAX }
    /* +0x32f47e */ __asm { LEA R8,[0x7fffa51a83cc] }
    /* +0x32f485 */ __asm { MOV R10D,0x2d2f17b }
    /* +0x32f48b */ __asm { IMUL R10D,R10D,-0x97fed1 }
    /* +0x32f492 */ __asm { SUB R10D,EBX }
    /* +0x32f495 */ __asm { XOR R10D,0x662b3cf8 }
    /* +0x32f49c */ __asm { MOVSXD RAX,R10D }
    /* +0x32f49f */ __asm { ADD RAX,R8 }
    /* +0x32f4a2 */ __asm { CALL RAX }
    /* +0x32f4a4 */ __asm { MOV R10D,0x7adfb3be }
    /* +0x32f4aa */ __asm { MOV R9D,0xaed98848 }
    /* +0x32f4b0 */ __asm { MOV RAX,qword ptr [RBP + 0x1a0] }
    /* +0x32f4b7 */ __asm { ADD R9D,EAX }
    /* +0x32f4ba */ __asm { XOR R9D,0x9b13c11 }
    /* +0x32f4c1 */ __asm { ROL R9D,0xb }
    /* +0x32f4c5 */ __asm { LEA R8,[0x7fffa5432d60] }
    /* +0x32f4cc */ __asm { SUB R10D,EAX }
    /* +0x32f4cf */ __asm { ROL R10D,0xc }
    /* +0x32f4d3 */ __asm { MOVSXD RAX,R10D }
    /* +0x32f4d6 */ __asm { ADD RAX,R8 }
    /* +0x32f4d9 */ __asm { CALL RAX }
    /* +0x32f4db */ __asm { NOP }
    /* +0x32f4dc */ __asm { MOV R9,0x0 }
    /* +0x32f4e3 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x32f4ea */ __asm { MOV R10W,0xc936 }
    /* +0x32f4ef */ __asm { IMUL R8D,R10D,-0x143d }
    /* +0x32f4f6 */ __asm { ADD R8D,0x1c2f }
    /* +0x32f4fd */ __asm { MOVSX R8,R8W }
    /* +0x32f501 */ __asm { LEA RAX,[0x7fffa519b1af] }
    /* +0x32f508 */ __asm { ADD RAX,R8 }
    /* +0x32f50b */ __asm { CALL RAX }
    /* +0x32f50d */ __asm { MOV R10D,0x24b212fa }
    /* +0x32f513 */ __asm { LEA R8,[0x7fffa51a4d09] }
    /* +0x32f51a */ __asm { ADD R10D,0xbba681c5 }
    /* +0x32f521 */ __asm { IMUL R12D,R10D }
    /* +0x32f525 */ __asm { MOVSXD RAX,R12D }
    /* +0x32f528 */ __asm { ADD RAX,R8 }
    /* +0x32f52b */ __asm { CALL RAX }
    /* +0x32f52d */ __asm { MOV R9,0x0 }
    /* +0x32f534 */ __asm { NOP }
    /* +0x32f535 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x32f53c */ __asm { MOV R10D,0xbf7546b5 }
    /* +0x32f542 */ __asm { XOR R10D,0x417b2b8f }
    /* +0x32f549 */ __asm { LEA R8,[0x7fffa51a66e1] }
    /* +0x32f550 */ __asm { ROL R10D,0x1d }
    /* +0x32f554 */ __asm { MOV RAX,qword ptr [RBP + 0x488] }
    /* +0x32f55b */ __asm { IMUL EAX,R10D }
    /* +0x32f55f */ __asm { CDQE }
    /* +0x32f561 */ __asm { ADD RAX,R8 }
    /* +0x32f564 */ __asm { CALL RAX }
    /* +0x32f566 */ __asm { LEA R8,[0x7fffa519f7c4] }
    /* +0x32f56d */ __asm { MOV R10W,0x5dff }
    /* +0x32f572 */ __asm { IMUL R10D,R10D,-0x49a3 }
    /* +0x32f579 */ __asm { NOT R10D }
    /* +0x32f57c */ __asm { MOV RAX,qword ptr [RBP + 0x68] }
    /* +0x32f580 */ __asm { IMUL EAX,R10D }
    /* +0x32f584 */ __asm { MOVSX RAX,AX }
    /* +0x32f588 */ __asm { ADD RAX,R8 }
    /* +0x32f58b */ __asm { CALL RAX }
    /* +0x32f58d */ __asm { MOV R10W,0x4498 }
    /* +0x32f592 */ __asm { SUB R10D,dword ptr [RBP + 0x1a0] }
    /* +0x32f599 */ __asm { MOV R8,qword ptr [RBP + 0x480] }
    /* +0x32f5a0 */ __asm { OR R8D,0x1 }
    /* +0x32f5a4 */ __asm { IMUL R8D,R10D }
    /* +0x32f5a8 */ __asm { ADD R8D,0x8 }
    /* +0x32f5ac */ __asm { MOVSX R8,R8W }
    /* +0x32f5b0 */ __asm { LEA RAX,[0x7fffa51a08c5] }
    /* +0x32f5b7 */ __asm { ADD RAX,R8 }
    /* +0x32f5ba */ __asm { CALL RAX }
    /* +0x32f5bc */ __asm { LEA R8,[0x7fffa519c221] }
    /* +0x32f5c3 */ __asm { MOV R10W,0x663f }
    /* +0x32f5c8 */ __asm { MOV RAX,qword ptr [RBP + 0x68] }
    /* +0x32f5cc */ __asm { IMUL EAX,R10D }
    /* +0x32f5d0 */ __asm { ADD EAX,0x62ff }
    /* +0x32f5d5 */ __asm { ROL AX,CL }
    /* +0x32f5d8 */ __asm { ADD EAX,0x7668 }
    /* +0x32f5dd */ __asm { MOVSX RAX,AX }
    /* +0x32f5e1 */ __asm { ADD RAX,R8 }
    /* +0x32f5e4 */ __asm { CALL RAX }
    /* +0x32f5e6 */ __asm { MOV R10D,0x38aa4709 }
    /* +0x32f5ec */ __asm { MOV R11D,0xb8aa3825 }
    /* +0x32f5f2 */ __asm { SUB R11D,R10D }
    /* +0x32f5f5 */ __asm { MOV ECX,R13D }
    /* +0x32f5f8 */ __asm { ROR R11D,CL }
    /* +0x32f5fb */ __asm { LEA R8,[0x7fffa51a9239] }
    /* +0x32f602 */ __asm { MOVSXD RAX,R11D }
    /* +0x32f605 */ __asm { ADD RAX,R8 }
    /* +0x32f608 */ __asm { CALL RAX }
    /* +0x32f60a */ __asm { NOP }
    /* +0x32f60b */ __asm { MOV R9,0x0 }
    /* +0x32f612 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x32f619 */ __asm { LEA R8,[0x7fffa51a2fd3] }
    /* +0x32f620 */ __asm { MOV R10D,0x7e3f6b02 }
    /* +0x32f626 */ __asm { XOR R10D,0x6271f94a }
    /* +0x32f62d */ __asm { ADD R10D,dword ptr [RBP + 0x1a0] }
    /* +0x32f634 */ __asm { MOV R11D,dword ptr [RBP + 0x3f0] }
    /* +0x32f63b */ __asm { OR R11D,0x1 }
    /* +0x32f63f */ __asm { IMUL R11D,R10D }
    /* +0x32f643 */ __asm { MOVSXD RAX,R11D }
    /* +0x32f646 */ __asm { ADD RAX,R8 }
    /* +0x32f649 */ __asm { CALL RAX }
    /* +0x32f64b */ __asm { MOV R10W,0xf9a9 }
    /* +0x32f650 */ __asm { ADD R10D,ECX }
    /* +0x32f653 */ __asm { MOV R11D,0xffffadd2 }
    /* +0x32f659 */ __asm { SUB R11D,R10D }
    /* +0x32f65c */ __asm { MOVZX R8D,R11W }
    /* +0x32f660 */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0x32f664 */ __asm { MOV dword ptr [RBP + 0x1b0],0xb3fa07b6 }
    /* +0x32f66e */ __asm { MOV R10D,dword ptr [RBP + 0x1b0] }
    /* +0x32f675 */ __asm { MOV RAX,qword ptr [R8 + 0x18] }
    /* +0x32f679 */ __asm { MOV DX,0x310a }
    /* +0x32f67d */ __asm { MOVZX R8D,DX }
    /* +0x32f681 */ __asm { XOR R8,0x316a }
    /* +0x32f688 */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0x32f68c */ __asm { MOV R11D,0xc057ef86 }
    /* +0x32f692 */ __asm { ADD R11D,ECX }
    /* +0x32f695 */ __asm { ADD R11D,0x3920b177 }
    /* +0x32f69c */ __asm { MOV R10D,0x3d483777 }
    /* +0x32f6a2 */ __asm { XOR R10D,ECX }
    /* +0x32f6a5 */ __asm { ROL R10D,0x17 }
    /* +0x32f6a9 */ __asm { CMP R11,R10 }
    /* +0x32f6ac */ __asm { MOV R10D,0x18 }
    /* +0x32f6b2 */ __asm { MOV R11,-0x18 }
    /* +0x32f6b9 */ __asm { CMOVC R11,R10 }
    /* +0x32f6bd */ __asm { MOV R8,qword ptr [R8 + R11*0x1] }
    /* +0x32f6c1 */ __asm { MOV R9,-0x55c2592672267765 }
    /* +0x32f6cb */ __asm { SUB R8,R9 }
    /* +0x32f6ce */ __asm { MOV R10,-0x648e89e2e4e7668d }
    /* +0x32f6d8 */ __asm { CMP R8,R10 }
    /* +0x32f6db */ __asm { NOP }
    /* +0x32f6dc */ __asm { NOP }
    /* +0x32f6dd */ __asm { NOP }
    /* +0x32f6de */ __asm { NOP }
    /* +0x32f6df */ __asm { NOP }
    /* +0x32f6e0 */ __asm { ADD RAX,0x10 }
    /* +0x32f6e4 */ __asm { MOV R10,-0xa1f8ebae }
    /* +0x32f6ee */ __asm { MOV R11,-0x5efb5e2c9e8e8431 }
    /* +0x32f6f8 */ __asm { MOV R8,0x20000000011d }
    /* +0x32f702 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x32f705 */ __asm { MOV dword ptr [RBP + 0x1b0],0xfff5bfbe }
    /* +0x32f70f */ __asm { MOV ECX,dword ptr [RBP + 0x1b0] }
}


// ============================================================================
// Function : Unwind@7fffa4aaff20  |  RVA: 0x33ff20  |  Size: 275 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4aaff20(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x548)) {
    (*(code *)((int64_t)
               (short)(~((short)*(uint64_t *)(param_2 + 0xe8) * 0x5903) +
                       (short)*(uint64_t *)(param_2 + 0x470) ^ 0x6c10) + 0x7fffa56888af))
              (param_1,*(uint64_t *)(param_2 + 0x470),
               *(uint64_t *)(param_2 + 0x530) >> 0x3d ^ *(uint64_t *)(param_2 + 0x530));
  }
  *(uint16_t *)(param_2 + 0x530) = 0;
  *(uint64_t *)(param_2 + 0x548) = 7;
  *(uint64_t *)(param_2 + 0x540) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab0040  |  RVA: 0x340040  |  Size: 279 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab0040(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x178)) {
    (*(code *)(&UNK_7fffa56904d4 + (int)(((uint32_t)*(uint64_t *)(param_2 + 0x570) | 1) * 0x8420f0c)))
              (*(uint64_t *)(param_2 + 0x570),param_2,
               *(uint64_t *)(param_2 + 0x160) >> 0x3d ^ *(uint64_t *)(param_2 + 0x160));
  }
  *(uint64_t *)(param_2 + 0x170) = 0;
  *(uint16_t *)(param_2 + 0x160) = 0;
  *(uint64_t *)(param_2 + 0x178) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab0160  |  RVA: 0x340160  |  Size: 297 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab0160(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x548)) {
    uVar1 = (uint32_t)*(uint64_t *)(param_2 + 0x500) | 1;
    (*(code *)((int64_t)
               (short)((~((short)uVar1 * -0x2466) - (short)*(uint64_t *)(param_2 + 0x220)) +
                      0x507e) + 0x7fffa568a66e))
              (*(uint32_t *)(param_2 + 0x470),uVar1,
               *(uint64_t *)(param_2 + 0x530) >> 0x3d ^ *(uint64_t *)(param_2 + 0x530));
  }
  *(uint64_t *)(param_2 + 0x548) = 7;
  *(uint64_t *)(param_2 + 0x540) = 0;
  *(uint16_t *)(param_2 + 0x530) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab0290  |  RVA: 0x340290  |  Size: 286 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab0290(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x178)) {
    uVar1 = *(uint32_t *)(param_2 + 0x470);
    (*(code *)((int64_t)(int)((int)*(uint64_t *)(param_2 + 0x220) + 0xa32f82e4U ^ uVar1) +
              0x7fffa569453f))
              (uVar1,*(uint64_t *)(param_2 + 0x220),
               *(uint64_t *)(param_2 + 0x160) >> 0x3d ^ *(uint64_t *)(param_2 + 0x160),uVar1 | 1);
  }
  *(uint16_t *)(param_2 + 0x160) = 0;
  *(uint64_t *)(param_2 + 0x178) = 7;
  *(uint64_t *)(param_2 + 0x170) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab03b0  |  RVA: 0x3403b0  |  Size: 273 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab03b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  code *pcVar3;
  uint32_t uVar4;
  
  if (7 < *(uint64_t *)(param_2 + 0x548)) {
    uVar4 = ((uint32_t)*(uint64_t *)(param_2 + 0x470) ^ 0xc64334e3) * 0x7eadb077;
    uVar2 = *(uint64_t *)(param_2 + 0x220) & 0xffffffff;
    bVar1 = (uint8_t)uVar2 & 0x1f;
    pcVar3 = (code *)((int64_t)(int)(uVar4 << bVar1 | uVar4 >> 0x20 - bVar1) + 0x7fffa56976b9);
    (*pcVar3)(uVar2,pcVar3,*(uint64_t *)(param_2 + 0x530) >> 0x3d ^ *(uint64_t *)(param_2 + 0x530)
             );
  }
  *(uint64_t *)(param_2 + 0x540) = 0;
  *(uint16_t *)(param_2 + 0x530) = 0;
  *(uint64_t *)(param_2 + 0x548) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab04d0  |  RVA: 0x3404d0  |  Size: 2326 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4ab04d0(void) {
    /* +0x3404d0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x3404d5 */ __asm { PUSH RBP }
    /* +0x3404d6 */ __asm { PUSH R12 }
    /* +0x3404d8 */ __asm { PUSH R15 }
    /* +0x3404da */ __asm { PUSH RBX }
    /* +0x3404db */ __asm { PUSH R13 }
    /* +0x3404dd */ __asm { PUSH RDI }
    /* +0x3404de */ __asm { PUSH R14 }
    /* +0x3404e0 */ __asm { PUSH RSI }
    /* +0x3404e1 */ __asm { SUB RSP,0xb8 }
    /* +0x3404e8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x3404ef */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0x3404f6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM10 }
    /* +0x3404fd */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM11 }
    /* +0x340507 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM6 }
    /* +0x340510 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM7 }
    /* +0x340519 */ __asm { RDTSC }
    /* +0x34051b */ __asm { SHL RDX,0x20 }
    /* +0x34051f */ __asm { OR RDX,RAX }
    /* +0x340522 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x34052c */ __asm { IMUL RCX,RDX }
    /* +0x340530 */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0x34053a */ __asm { ADD RCX,R8 }
    /* +0x34053d */ __asm { MOV R8,RCX }
    /* +0x340540 */ __asm { SHR R8,0x2d }
    /* +0x340544 */ __asm { MOV RAX,RCX }
    /* +0x340547 */ __asm { SHR RAX,0x1b }
    /* +0x34054b */ __asm { SHR RCX,0x3b }
    /* +0x34054f */ __asm { XOR R8D,EAX }
    /* +0x340552 */ __asm { ROR R8D,CL }
    /* +0x340555 */ __asm { AND R8D,0x3 }
    /* +0x340559 */ __asm { CMP R8D,0x2 }
    /* +0x34055d */ __asm { JC 0x7fffa4ab05dd }
    /* +0x34055f */ __asm { CMP R8D,0x3 }
    /* +0x340563 */ __asm { JNZ 0x7fffa4ab063b }
    /* +0x340569 */ __asm { MOV R9D,0x69561321 }
    /* +0x34056f */ __asm { MOV RCX,R9 }
    /* +0x340572 */ __asm { ROL RCX,0x27 }
    /* +0x340576 */ __asm { XOR RCX,0x797a930a }
    /* +0x34057d */ __asm { MOV R8,0xc89c669b99b56cb }
    /* +0x340587 */ __asm { CMP RCX,R8 }
    /* +0x34058a */ __asm { NOP }
    /* +0x34058b */ __asm { NOP }
    /* +0x34058c */ __asm { NOP }
    /* +0x34058d */ __asm { NOP }
    /* +0x34058e */ __asm { NOP }
    /* +0x34058f */ __asm { NOP }
    /* +0x340590 */ __asm { NOP }
    /* +0x340591 */ __asm { NOP }
    /* +0x340592 */ __asm { NOP }
    /* +0x340593 */ __asm { NOP }
    /* +0x340594 */ __asm { NOP }
    /* +0x340595 */ __asm { NOP }
    /* +0x340596 */ __asm { NOP }
    /* +0x340597 */ __asm { NOP }
    /* +0x340598 */ __asm { NOP }
    /* +0x340599 */ __asm { NOP }
    /* +0x34059a */ __asm { NOP }
    /* +0x3405dd */ __asm { CMP R8D,0x1 }
    /* +0x3405e1 */ __asm { JZ 0x7fffa4ab08bd }
    /* +0x3405e7 */ __asm { MOV R9D,0x65ccee33 }
    /* +0x3405ed */ __asm { MOV R8,-0x7564e926da543043 }
    /* +0x3405f7 */ __asm { CMP R9,R8 }
    /* +0x3405fa */ __asm { JZ 0x7fffa4ab10a7 }
    /* +0x340600 */ __asm { TEST uint8_t ptr [R9 + 0x1a31140d],0x1 }
    /* +0x340608 */ __asm { JZ 0x7fffa4ab10be }
    /* +0x34060e */ __asm { LEA R9,[0x7fffa47b9c63] }
    /* +0x340615 */ __asm { MOV R8,-0x7865feb4d6848d83 }
    /* +0x34061f */ __asm { CMP R9,R8 }
    /* +0x340622 */ __asm { JZ 0x7fffa4ab115a }
    /* +0x340628 */ __asm { MOV qword ptr [RBP + 0x4b0],RCX }
    /* +0x34062f */ __asm { MOV EAX,dword ptr [R9 + 0x33d5] }
    /* +0x340636 */ __asm { JMP 0x7fffa4ab1113 }
    /* +0x34063b */ __asm { MOV R9D,0xcbe4d04e }
    /* +0x340641 */ __asm { MOV R8,-0xa6698eb8dd3dae0 }
    /* +0x34064b */ __asm { CMP R9,R8 }
    /* +0x34064e */ __asm { JNZ 0x7fffa4ab0655 }
    /* +0x340650 */ __asm { SBB EAX,0xa83824ac }
    /* +0x340655 */ __asm { MOV R10,qword ptr [R9 + -0x4be6d046] }
    /* +0x34065c */ __asm { RDTSC }
    /* +0x34065e */ __asm { MOV R8,RDX }
    /* +0x340661 */ __asm { SHL R8,0x20 }
    /* +0x340665 */ __asm { OR R8,RAX }
    /* +0x340668 */ __asm { MOV R11,0x22e684aeb4c38cb8 }
    /* +0x340672 */ __asm { MOV RAX,R10 }
    /* +0x340675 */ __asm { MUL R11 }
    /* +0x340678 */ __asm { MOV R11,RDX }
    /* +0x34067b */ __asm { MOV EDX,0x14731a5 }
    /* +0x340680 */ __asm { MOV RAX,R10 }
    /* +0x340683 */ __asm { MUL RDX }
    /* +0x340686 */ __asm { ADD RAX,R11 }
    /* +0x340689 */ __asm { ADC RDX,0x0 }
    /* +0x34068d */ __asm { MOV RCX,-0x158b4ad174161d9b }
    /* +0x340697 */ __asm { IMUL RCX,R8 }
    /* +0x34069b */ __asm { TEST DL,0x1 }
    /* +0x34069e */ __asm { JNZ 0x7fffa4ab0a3e }
    /* +0x3406a4 */ __asm { MOV R8,0x646479b821ad0abe }
    /* +0x3406ae */ __asm { ADD RCX,R8 }
    /* +0x3406b1 */ __asm { MOV R8,RCX }
    /* +0x3406b4 */ __asm { SHR R8,0x3b }
    /* +0x3406b8 */ __asm { MOV RAX,RCX }
    /* +0x3406bb */ __asm { SHR RAX,0x2d }
    /* +0x3406bf */ __asm { SHR RCX,0x1b }
    /* +0x3406c3 */ __asm { XOR EAX,ECX }
    /* +0x3406c5 */ __asm { MOV ECX,R8D }
    /* +0x3406c8 */ __asm { ROR EAX,CL }
    /* +0x3406ca */ __asm { PUSHFQ }
    /* +0x3406cb */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x3406d3 */ __asm { POPFQ }
    /* +0x3406d4 */ __asm { MOV dword ptr [RBP + 0x4b0],0xc92b50ef }
    /* +0x3406de */ __asm { MOV R10D,dword ptr [RBP + 0x4b0] }
    /* +0x3406e5 */ __asm { CMP R10D,0x633affdc }
    /* +0x3406ec */ __asm { NOP }
    /* +0x3406ed */ __asm { NOP }
    /* +0x3406ee */ __asm { NOP }
    /* +0x3406ef */ __asm { NOP }
    /* +0x3406f0 */ __asm { NOP }
    /* +0x3406f1 */ __asm { NOP }
    /* +0x3406f2 */ __asm { NOP }
    /* +0x3406f3 */ __asm { NOP }
    /* +0x3406f4 */ __asm { NOP }
    /* +0x3406f5 */ __asm { NOP }
    /* +0x3406f6 */ __asm { NOP }
    /* +0x3406f7 */ __asm { NOP }
    /* +0x3406f8 */ __asm { NOP }
    /* +0x3406f9 */ __asm { NOP }
    /* +0x3406fa */ __asm { NOP }
    /* +0x3406fb */ __asm { NOP }
    /* +0x3406fc */ __asm { NOP }
    /* +0x3408bd */ __asm { LEA R9,[0x7fffa47b83a2] }
    /* +0x3408c4 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x3408cb */ __asm { MOV RCX,0x0 }
    /* +0x3408d2 */ __asm { MOV R8,-0x797ac2eddf0393ac }
    /* +0x3408dc */ __asm { CMP R9,R8 }
    /* +0x3408df */ __asm { NOP }
    /* +0x3408e0 */ __asm { NOP }
    /* +0x3408e1 */ __asm { NOP }
    /* +0x3408e2 */ __asm { NOP }
    /* +0x3408e3 */ __asm { NOP }
    /* +0x3408e4 */ __asm { MOVZX R11D,uint8_t ptr [R9 + 0x43a7] }
    /* +0x3408ec */ __asm { MOVZX EAX,uint8_t ptr [R9 + R11*0x4 + 0x43ad] }
    /* +0x3408f5 */ __asm { NOT AL }
    /* +0x3408f7 */ __asm { ROL AL,0x5 }
    /* +0x3408fa */ __asm { MOV uint8_t ptr [RBP + 0x4b0],AL }
    /* +0x340900 */ __asm { MOVZX EAX,uint8_t ptr [R9 + R11*0x4 + 0x43ae] }
    /* +0x340909 */ __asm { NOT AL }
    /* +0x34090b */ __asm { ROL AL,0x5 }
    /* +0x34090e */ __asm { MOV uint8_t ptr [RBP + 0x4b1],AL }
    /* +0x340914 */ __asm { MOVZX EAX,uint8_t ptr [R9 + R11*0x4 + 0x43af] }
    /* +0x34091d */ __asm { NOT AL }
    /* +0x34091f */ __asm { ROL AL,0x5 }
    /* +0x340922 */ __asm { MOV uint8_t ptr [RBP + 0x4b2],AL }
    /* +0x340928 */ __asm { MOVZX R9D,uint8_t ptr [R9 + R11*0x4 + 0x43b0] }
    /* +0x340931 */ __asm { NOT R9B }
    /* +0x340934 */ __asm { ROL R9B,0x5 }
    /* +0x340938 */ __asm { MOV uint8_t ptr [RBP + 0x4b3],R9B }
    /* +0x34093f */ __asm { MOV ECX,0x9102c3cc }
    /* +0x340944 */ __asm { XOR ECX,dword ptr [RBP + 0x4b0] }
    /* +0x34094a */ __asm { MOV R10D,0x1 }
    /* +0x340950 */ __asm { SHL R10D,CL }
    /* +0x340953 */ __asm { MOVD XMM0,R10D }
    /* +0x340958 */ __asm { MOVD XMM2,ECX }
    /* +0x34095c */ __asm { PAND XMM2,XMM0 }
    /* +0x340960 */ __asm { MOVD R10D,XMM2 }
    /* +0x340965 */ __asm { TEST R10D,R10D }
    /* +0x340968 */ __asm { JNZ 0x7fffa4ab0c71 }
    /* +0x34096e */ __asm { MOV R8D,0xfb23a5b3 }
    /* +0x340974 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x34097b */ __asm { MOV R9,0x0 }
    /* +0x340982 */ __asm { NOP }
    /* +0x340983 */ __asm { LEA R9,[0x7fffa47be234] }
    /* +0x34098a */ __asm { MOV RAX,0x6f757cf52e714bc7 }
    /* +0x340994 */ __asm { XOR R10D,R10D }
    /* +0x340997 */ __asm { CMP R9,RAX }
    /* +0x34099a */ __asm { SETG R10B }
    /* +0x34099e */ __asm { MOV RAX,0x6f757cf52e714bc8 }
    /* +0x3409a8 */ __asm { XOR R11D,R11D }
    /* +0x3409ab */ __asm { CMP R9,RAX }
    /* +0x3409ae */ __asm { SETZ R11B }
    /* +0x3409b2 */ __asm { MOV EAX,0xf401d085 }
    /* +0x3409b7 */ __asm { MOV RDX,qword ptr [RBP + 0x1a0] }
    /* +0x3409be */ __asm { ADD EAX,EDX }
    /* +0x3409c0 */ __asm { XOR EAX,0x3199b74 }
    /* +0x3409c5 */ __asm { ADD EAX,dword ptr [RBP + 0x190] }
    /* +0x3409cb */ __asm { ROL EAX,0x10 }
    /* +0x3409ce */ __asm { SUB R8D,EDX }
    /* +0x3409d1 */ __asm { XOR R8D,dword ptr [RBP + 0x4f0] }
    /* +0x3409d8 */ __asm { NOT R8D }
    /* +0x3409db */ __asm { ROL R8D,0x4 }
    /* +0x3409df */ __asm { CMP R8,RAX }
    /* +0x3409e2 */ __asm { CMOVC R10D,R11D }
    /* +0x3409e6 */ __asm { CMP R10B,0x1 }
    /* +0x3409ea */ __asm { JZ 0x7fffa4ab1162 }
    /* +0x3409f0 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x3409f7 */ __asm { MOV RCX,0x0 }
    /* +0x3409fe */ __asm { MOV qword ptr [RBP + 0x4b0],RCX }
    /* +0x340a05 */ __asm { MOV EAX,dword ptr [R9 + -0x11fc] }
    /* +0x340a0c */ __asm { JMP 0x7fffa4ab1113 }
    /* +0x340a2b */ __asm { MOV qword ptr [RBP + 0x4b0],RCX }
    /* +0x340a32 */ __asm { MOV EAX,dword ptr [R9 + -0x6a03] }
    /* +0x340a39 */ __asm { JMP 0x7fffa4ab1113 }
    /* +0x340a3e */ __asm { MOV R8,-0x4a90d290d2fb06a }
    /* +0x340a48 */ __asm { ADD RCX,R8 }
    /* +0x340a4b */ __asm { MOV R8,RCX }
    /* +0x340a4e */ __asm { SHR R8,0x1b }
    /* +0x340a52 */ __asm { MOV RAX,RCX }
    /* +0x340a55 */ __asm { SHR RAX,0x2d }
    /* +0x340a59 */ __asm { XOR EAX,R8D }
    /* +0x340a5c */ __asm { SHR RCX,0x3b }
    /* +0x340a60 */ __asm { ROR EAX,CL }
    /* +0x340a62 */ __asm { MOV dword ptr [RBP + 0x4b0],0x90bf0c40 }
    /* +0x340a6c */ __asm { MOV R10D,dword ptr [RBP + 0x4b0] }
    /* +0x340a73 */ __asm { CMP EAX,0x4592e4 }
    /* +0x340a78 */ __asm { JA 0x7fffa4ab0bd4 }
    /* +0x340a7e */ __asm { MOV dword ptr [RBP + 0x4b0],0x6e9452fa }
    /* +0x340a88 */ __asm { MOV R10D,dword ptr [RBP + 0x4b0] }
    /* +0x340a8f */ __asm { MOV R9D,0xde853fa0 }
    /* +0x340a95 */ __asm { MOV RCX,R9 }
    /* +0x340a98 */ __asm { ROL RCX,0x18 }
    /* +0x340a9c */ __asm { ADD RCX,-0x24aabe96 }
    /* +0x340aa3 */ __asm { MOV R8,-0x6266275124eb9454 }
    /* +0x340aad */ __asm { CMP RCX,R8 }
    /* +0x340ab0 */ __asm { JZ 0x7fffa4ab1180 }
    /* +0x340ab6 */ __asm { TEST uint8_t ptr [R9 + -0x5e873d60],0x1 }
    /* +0x340abe */ __asm { JNZ 0x7fffa4ab0bd4 }
    /* +0x340ac4 */ __asm { PXOR XMM0,XMM0 }
    /* +0x340ac8 */ __asm { MOVDQA xmmword ptr [RBP + 0x4b0],XMM0 }
    /* +0x340ad0 */ __asm { MOV dword ptr [RBP + 0x110],0x5982d220 }
    /* +0x340ada */ __asm { MOV R10D,dword ptr [RBP + 0x110] }
    /* +0x340ae1 */ __asm { MOV dword ptr [RBP + 0x4b0],0x0 }
    /* +0x340aeb */ __asm { MOV dword ptr [RBP + 0x110],0x8b130d31 }
    /* +0x340af5 */ __asm { MOV R10D,dword ptr [RBP + 0x110] }
    /* +0x340afc */ __asm { MOV dword ptr [RBP + 0x110],0x5adfaeee }
    /* +0x340b06 */ __asm { MOV R10D,dword ptr [RBP + 0x110] }
    /* +0x340b0d */ __asm { TEST R10B,0x1 }
    /* +0x340b11 */ __asm { NOP }
    /* +0x340b12 */ __asm { NOP }
    /* +0x340b13 */ __asm { NOP }
    /* +0x340b14 */ __asm { NOP }
    /* +0x340b15 */ __asm { NOP }
    /* +0x340b16 */ __asm { MOV R8,qword ptr [RBP + 0x480] }
    /* +0x340b1d */ __asm { OR R8,0x1 }
    /* +0x340b21 */ __asm { MOV RAX,-0x35aeadd5892c7b54 }
    /* +0x340b2b */ __asm { LEA R9,[0x7fffa47c2836] }
    /* +0x340b32 */ __asm { XOR RAX,-0x409d319f }
    /* +0x340b38 */ __asm { IMUL RAX,R8 }
    /* +0x340b3c */ __asm { SUB RAX,qword ptr [RBP + 0x1a0] }
    /* +0x340b43 */ __asm { IMUL R8,RAX,-0x63815f61 }
    /* +0x340b4a */ __asm { CMP R9,R8 }
    /* +0x340b4d */ __asm { JZ 0x7fffa4ab1199 }
    /* +0x340b53 */ __asm { MOV AX,0x8c43 }
    /* +0x340b57 */ __asm { MOV R10W,0x407 }
    /* +0x340b5c */ __asm { MOV R11W,0x3a67 }
    /* +0x340b61 */ __asm { MOV R8,qword ptr [RBP + 0x1a0] }
    /* +0x340b68 */ __asm { ADD R10D,R8D }
    /* +0x340b6b */ __asm { XOR R11D,R8D }
    /* +0x340b6e */ __asm { IMUL EAX,EAX,-0x783b }
    /* +0x340b74 */ __asm { ADD EAX,0xffffbb99 }
    /* +0x340b79 */ __asm { MOV RCX,qword ptr [RBP + 0x190] }
    /* +0x340b80 */ __asm { ROL AX,CL }
    /* +0x340b83 */ __asm { MOV qword ptr [RBP + 0x110],RCX }
    /* +0x340b8a */ __asm { MOVZX EDX,AX }
    /* +0x340b8d */ __asm { MOV R8,qword ptr [RBP + 0x4f0] }
    /* +0x340b94 */ __asm { OR R8D,0x1 }
    /* +0x340b98 */ __asm { IMUL R8D,R10D }
    /* +0x340b9c */ __asm { ADD R8D,0xffffe82f }
    /* +0x340ba3 */ __asm { MOVSX R10,R8W }
    /* +0x340ba7 */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0x340bae */ __asm { ROR R11W,CL }
    /* +0x340bb2 */ __asm { MOV EAX,dword ptr [R9 + -0x636e] }
    /* +0x340bb9 */ __asm { XOR R11D,0x69c }
    /* +0x340bc0 */ __asm { ADD R11D,0xffffea4f }
    /* +0x340bc7 */ __asm { MOVZX R9D,R11W }
    /* +0x340bcb */ __asm { LEA R8,[RBP + 0x4b0] }
    /* +0x340bd2 */ __asm { SYSCALL }
    /* +0x340bd4 */ __asm { LEA RAX,[0x7fffa4781f62] }
    /* +0x340bdb */ __asm { MOV R8,-0x1a799e5f4ddca5d0 }
    /* +0x340be5 */ __asm { CMP RAX,R8 }
    /* +0x340be8 */ __asm { JZ 0x7fffa4ab11a1 }
    /* +0x340bee */ __asm { MOV R11D,0xe3ab491f }
    /* +0x340bf4 */ __asm { MOV R10W,0x6bcb }
    /* +0x340bf9 */ __asm { MOV R8D,0x50aeede6 }
    /* +0x340bff */ __asm { ADD R8D,0xf902666e }
    /* +0x340c06 */ __asm { ROL R8D,0x1c }
    /* +0x340c0a */ __asm { MOV RCX,qword ptr [RBP + 0x1a0] }
    /* +0x340c11 */ __asm { ROR R8D,CL }
    /* +0x340c14 */ __asm { MOVD XMM0,R11D }
    /* +0x340c19 */ __asm { MOVD XMM2,dword ptr [RBP + 0x190] }
    /* +0x340c21 */ __asm { SUB R8D,dword ptr [RBP + 0x4f0] }
    /* +0x340c28 */ __asm { XOR R10D,ECX }
    /* +0x340c2b */ __asm { ADD R10D,0x321b }
    /* +0x340c32 */ __asm { XOR R10D,dword ptr [RBP + 0x480] }
    /* +0x340c39 */ __asm { MOVZX R11D,R10W }
    /* +0x340c3d */ __asm { NEG R11 }
    /* +0x340c40 */ __asm { PSUBD XMM0,XMM2 }
    /* +0x340c44 */ __asm { MOVD R10D,XMM0 }
    /* +0x340c49 */ __asm { ROL R10D,CL }
    /* +0x340c4c */ __asm { MOV qword ptr [RBP + 0x4b0],R9 }
    /* +0x340c53 */ __asm { ADD R10D,0xc38c2d9d }
    /* +0x340c5a */ __asm { CMP R8,R10 }
    /* +0x340c5d */ __asm { MOV R8D,0x2662 }
    /* +0x340c63 */ __asm { CMOVLE R8,R11 }
    /* +0x340c67 */ __asm { MOV EAX,dword ptr [R8 + RAX*0x1 + 0x6c] }
    /* +0x340c6c */ __asm { JMP 0x7fffa4ab1113 }
    /* +0x340c71 */ __asm { MOV R8,qword ptr [RBP + 0x480] }
    /* +0x340c78 */ __asm { MOV R10D,R8D }
    /* +0x340c7b */ __asm { OR R10D,0x1 }
    /* +0x340c7f */ __asm { RDTSC }
    /* +0x340c81 */ __asm { SHL RDX,0x20 }
    /* +0x340c85 */ __asm { OR RDX,RAX }
    /* +0x340c88 */ __asm { MOV RCX,qword ptr [RBP + 0x1a0] }
    /* +0x340c8f */ __asm { LEA R11D,[RCX + -0x16d01233] }
    /* +0x340c96 */ __asm { MOVD XMM0,R11D }
    /* +0x340c9b */ __asm { MOV R11D,0x6c6c92a3 }
    /* +0x340ca1 */ __asm { MOVD XMM2,R11D }
    /* +0x340ca6 */ __asm { PADDD XMM2,XMM0 }
    /* +0x340caa */ __asm { MOVD R11D,XMM2 }
    /* +0x340caf */ __asm { XOR R11D,dword ptr [RBP + 0x190] }
    /* +0x340cb6 */ __asm { MOVSXD RAX,R11D }
    /* +0x340cb9 */ __asm { MOV R11D,0x99e550be }
    /* +0x340cbf */ __asm { IMUL R11D,R10D }
    /* +0x340cc3 */ __asm { XOR R11D,0x9de01ab2 }
    /* +0x340cca */ __asm { MOVSXD R10,R11D }
    /* +0x340ccd */ __asm { MOV R8,-0x5b596a0ee0e87373 }
    /* +0x340cd7 */ __asm { IMUL R8,RDX }
    /* +0x340cdb */ __asm { MOV R9W,0x305c }
    /* +0x340ce0 */ __asm { MOV R11D,0x485c }
    /* +0x340ce6 */ __asm { SUB R11D,R9D }
    /* +0x340ce9 */ __asm { ROL R11W,CL }
    /* +0x340ced */ __asm { MOV RCX,0x693c44aa43f0f262 }
    /* +0x340cf7 */ __asm { ADD RCX,R8 }
    /* +0x340cfa */ __asm { MOV R8,RCX }
    /* +0x340cfd */ __asm { SHR R8,0x2d }
    /* +0x340d01 */ __asm { MOV RDX,RCX }
    /* +0x340d04 */ __asm { SHR RDX,0x1b }
    /* +0x340d08 */ __asm { MOV R9D,R8D }
    /* +0x340d0b */ __asm { XOR R9D,EDX }
    /* +0x340d0e */ __asm { SHR RCX,0x3b }
    /* +0x340d12 */ __asm { SUB R8D,EDX }
    /* +0x340d15 */ __asm { CMP R10,RAX }
    /* +0x340d18 */ __asm { CMOVL R8D,R9D }
    /* +0x340d1c */ __asm { ROR R8D,CL }
    /* +0x340d1f */ __asm { MOVZX EAX,R11W }
    /* +0x340d23 */ __asm { MOV RAX,qword ptr GS:[RAX] }
    /* +0x340d27 */ __asm { MOV RAX,qword ptr [RAX + 0x60] }
    /* +0x340d2b */ __asm { MOV R9,-0x645020e52f45193d }
    /* +0x340d35 */ __asm { AND R9,RAX }
    /* +0x340d38 */ __asm { MOV RAX,0x36f8c1d92ed82ed3 }
    /* +0x340d42 */ __asm { CMP R9,RAX }
    /* +0x340d45 */ __asm { NOP }
    /* +0x340d46 */ __asm { NOP }
    /* +0x340d47 */ __asm { NOP }
    /* +0x340d48 */ __asm { NOP }
    /* +0x340d49 */ __asm { NOP }
    /* +0x340d4a */ __asm { NOP }
    /* +0x340d4b */ __asm { NOP }
    /* +0x340d4c */ __asm { NOP }
    /* +0x340d4d */ __asm { NOP }
    /* +0x340d4e */ __asm { NOP }
    /* +0x340d4f */ __asm { NOP }
    /* +0x340d50 */ __asm { NOP }
    /* +0x340d51 */ __asm { NOP }
    /* +0x340d52 */ __asm { CMP R8D,0x40e251 }
    /* +0x340d59 */ __asm { JA 0x7fffa4ab1065 }
    /* +0x340d5f */ __asm { MOV R10W,0x5ab5 }
    /* +0x340d64 */ __asm { MOV R8,qword ptr [RBP + 0x190] }
    /* +0x340d6b */ __asm { MOV R11D,R8D }
    /* +0x340d6e */ __asm { OR R11D,0x1 }
    /* +0x340d72 */ __asm { IMUL R11D,R10D }
    /* +0x340d76 */ __asm { MOV R10D,0x7255 }
    /* +0x340d7c */ __asm { SUB R10D,R11D }
    /* +0x340d7f */ __asm { MOVZX R8D,R10W }
    /* +0x340d83 */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0x340d87 */ __asm { MOV RAX,0x6d6988d10be11f59 }
    /* +0x340d91 */ __asm { MOVQ XMM0,qword ptr [RBP + 0x1a0] }
    /* +0x340d99 */ __asm { MOV R8,qword ptr [R8 + 0xc18] }
    /* +0x340da0 */ __asm { MOV R9,-0x78d8799d3b0bcea5 }
    /* +0x340daa */ __asm { AND R9,R8 }
    /* +0x340dad */ __asm { MOV R8,-0x80956b7a }
    /* +0x340db7 */ __asm { ADD R8,RAX }
    /* +0x340dba */ __asm { MOV RAX,qword ptr [RBP + 0x4f0] }
    /* +0x340dc1 */ __asm { OR RAX,0x1 }
    /* +0x340dc5 */ __asm { IMUL RAX,R8 }
    /* +0x340dc9 */ __asm { ROL RAX,0x5 }
    /* +0x340dcd */ __asm { MOVQ XMM2,RAX }
    /* +0x340dd2 */ __asm { PSUBQ XMM2,XMM0 }
    /* +0x340dd6 */ __asm { MOVQ R8,XMM2 }
    /* +0x340ddb */ __asm { CMP R9,R8 }
    /* +0x340dde */ __asm { NOP }
    /* +0x340ddf */ __asm { NOP }
    /* +0x340de0 */ __asm { NOP }
    /* +0x340de1 */ __asm { NOP }
    /* +0x340de2 */ __asm { NOP }
    /* +0x340de3 */ __asm { NOP }
    /* +0x340de4 */ __asm { NOP }
    /* +0x340de5 */ __asm { NOP }
    /* +0x340de6 */ __asm { NOP }
    /* +0x340de7 */ __asm { NOP }
    /* +0x340de8 */ __asm { NOP }
    /* +0x340de9 */ __asm { NOP }
    /* +0x340dea */ __asm { NOP }
    /* +0x340deb */ __asm { NOP }
    /* +0x340dec */ __asm { NOP }
    /* +0x340ded */ __asm { NOP }
    /* +0x340dee */ __asm { NOP }
    /* +0x341065 */ __asm { LEA R9,[0x7fffa478a2af] }
    /* +0x34106c */ __asm { MOV R8,-0x28e3ebaf595756eb }
    /* +0x341076 */ __asm { CMP R9,R8 }
    /* +0x341079 */ __asm { NOP }
    /* +0x34107a */ __asm { NOP }
    /* +0x34107b */ __asm { NOP }
    /* +0x34107c */ __asm { NOP }
    /* +0x34107d */ __asm { NOP }
    /* +0x34107e */ __asm { MOV qword ptr [RBP + 0x4b0],RCX }
    /* +0x341085 */ __asm { MOV EAX,dword ptr [R9 + -0x5c7f] }
    /* +0x34108c */ __asm { JMP 0x7fffa4ab1113 }
    /* +0x3410be */ __asm { MOV R8,0x286e3627f0475597 }
    /* +0x3410c8 */ __asm { SUB R8,qword ptr [RBP + 0x3f0] }
    /* +0x3410cf */ __asm { NOP }
    /* +0x3410d0 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x3410d7 */ __asm { MOV R9,0x0 }
    /* +0x3410de */ __asm { LEA R9,[0x7fffa47c058a] }
    /* +0x3410e5 */ __asm { MOV RCX,qword ptr [RBP + 0x1a0] }
    /* +0x3410ec */ __asm { ROR R8,CL }
    /* +0x3410ef */ __asm { MOV RAX,0x108f03240 }
    /* +0x3410f9 */ __asm { ADD RAX,R8 }
    /* +0x3410fc */ __asm { CMP R9,RAX }
    /* +0x3410ff */ __asm { JZ 0x7fffa4ab11c8 }
    /* +0x341105 */ __asm { MOV qword ptr [RBP + 0x4b0],RCX }
    /* +0x34110c */ __asm { MOV EAX,dword ptr [R9 + -0x405e] }
    /* +0x341113 */ __asm { MOV R10,qword ptr [RBP + 0x4f8] }
    /* +0x34111a */ __asm { SYSCALL }
    /* +0x34111c */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xa0] }
    /* +0x341125 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x90] }
    /* +0x34112e */ __asm { MOVDQA XMM11,xmmword ptr [RSP + 0x80] }
    /* +0x341138 */ __asm { MOVDQA XMM10,xmmword ptr [RSP + 0x70] }
    /* +0x34113f */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x60] }
    /* +0x341146 */ __asm { ADD RSP,0xb8 }
    /* +0x34114d */ __asm { POP RSI }
    /* +0x34114e */ __asm { POP R14 }
    /* +0x341150 */ __asm { POP RDI }
    /* +0x341151 */ __asm { POP R13 }
    /* +0x341153 */ __asm { POP RBX }
    /* +0x341154 */ __asm { POP R15 }
    /* +0x341156 */ __asm { POP R12 }
    /* +0x341158 */ __asm { POP RBP }
    /* +0x341159 */ __asm { RET }
    /* +0x34115a */ __asm { TEST dword ptr ES:[RBX + -0xb3917],0xc1c748ff }
    /* +0x341165 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0x341167 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0x341169 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x341170 */ __asm { IMUL EAX,dword ptr GS:[RDI + -0x78717],-0x2df8aa01 }
    /* +0x34117b */ __asm { JMP 0x7fffa4ab0a2b }
    /* +0x341180 */ __asm { MOV EBX,0x2efdb017 }
    /* +0x341185 */ __asm { MOV uint8_t ptr [RCX + -0xa],AL }
    /* +0x341188 */ __asm { AND dword ptr [RAX + 0x1a178c2],0xf930840f }
    /* +0x341199 */ __asm { IMUL R12D,dword ptr [R15 + -0x64d17],-0x417ec901 }
    /* +0x3411a4 */ __asm { JMP 0x7fffa4ab0bee }
    /* +0x3411c8 */ __asm { XOR dword ptr [RCX + -0xca17],0x548948ff }
    /* +0x3411d3 */ __asm { AND AL,0x10 }
    /* +0x3411d5 */ __asm { PUSH RBP }
    /* +0x3411d6 */ __asm { PUSH R12 }
    /* +0x3411d8 */ __asm { PUSH R15 }
    /* +0x3411da */ __asm { PUSH RBX }
    /* +0x3411db */ __asm { PUSH R13 }
    /* +0x3411dd */ __asm { PUSH RDI }
    /* +0x3411de */ __asm { PUSH R14 }
    /* +0x3411e0 */ __asm { PUSH RSI }
    /* +0x3411e1 */ __asm { SUB RSP,0xb8 }
    /* +0x3411e8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x3411ef */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0x3411f6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM10 }
    /* +0x3411fd */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM11 }
    /* +0x341207 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM6 }
    /* +0x341210 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM7 }
    /* +0x341219 */ __asm { CMP qword ptr [RBP + 0x128],0x8 }
    /* +0x341221 */ __asm { JC 0x7fffa4ab128e }
    /* +0x341223 */ __asm { MOV R10D,0xc4202bea }
    /* +0x341229 */ __asm { MOV R8,qword ptr [RBP + 0x1a0] }
    /* +0x341230 */ __asm { XOR R10D,R8D }
    /* +0x341233 */ __asm { MOV R11,qword ptr [RBP + 0x3f0] }
    /* +0x34123a */ __asm { OR R11D,0x1 }
    /* +0x34123e */ __asm { MOV AX,0x2c4c }
    /* +0x341242 */ __asm { SUB EAX,R8D }
    /* +0x341245 */ __asm { ROL AX,0x7 }
    /* +0x341249 */ __asm { IMUL EAX,R11D }
    /* +0x34124d */ __asm { NOP }
    /* +0x34124e */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x341255 */ __asm { MOV R9,0x0 }
    /* +0x34125c */ __asm { MOV R11,qword ptr [RBP + 0x110] }
    /* +0x341263 */ __asm { MOV R8,R11 }
    /* +0x341266 */ __asm { SHR R8,0x3d }
    /* +0x34126a */ __asm { XOR R8,R11 }
    /* +0x34126d */ __asm { LEA RDX,[0x7fffa568cd24] }
    /* +0x341274 */ __asm { IMUL R11D,R10D,-0x41c87ec7 }
    /* +0x34127b */ __asm { MOV RCX,qword ptr [RBP + 0x480] }
    /* +0x341282 */ __asm { ROL R11D,CL }
    /* +0x341285 */ __asm { MOVSX RAX,AX }
    /* +0x341289 */ __asm { ADD RAX,RDX }
    /* +0x34128c */ __asm { CALL RAX }
}


// ============================================================================
// Function : Unwind@7fffa4ab11d0  |  RVA: 0x3411d0  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab11d0(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x1a8)) {
    uVar1 = 0x2c4c - (short)*(uint64_t *)(param_2 + 0x220);
    (*(code *)((int64_t)
               (short)((uVar1 * 0x80 | uVar1 >> 9) * ((uint16_t)*(uint64_t *)(param_2 + 0x470) | 1))
              + 0x7fffa568cd24))
              (*(uint64_t *)(param_2 + 0x500),0x7fffa568cd24,
               *(uint64_t *)(param_2 + 400) >> 0x3d ^ *(uint64_t *)(param_2 + 400),0);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab12d0  |  RVA: 0x3412d0  |  Size: 276 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab12d0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  if ((uint64_t)((*(uint32_t *)(param_2 + 0x220) ^ 0x2b89b3ce) & 0xffff) <
      *(uint64_t *)(param_2 + 0x548)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x220) & 0x1f;
    (*(code *)((int64_t)(int)((0xb2933d62U >> bVar1 | -0x4d6cc29e << 0x20 - bVar1) + 0x4ea5c10e) +
              0x7fffa5697184))
              (*(uint64_t *)(param_2 + 0x220),param_2,
               *(uint64_t *)(param_2 + 0x530) >> 0x3d ^ *(uint64_t *)(param_2 + 0x530));
  }
  *(uint64_t *)(param_2 + 0x540) = 0;
  *(uint16_t *)(param_2 + 0x530) = 0;
  *(uint64_t *)(param_2 + 0x548) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab13f0  |  RVA: 0x3413f0  |  Size: 212 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab13f0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x1a8)) {
    uVar1 = *(uint64_t *)(param_2 + 400);
    (*(code *)((int64_t)(int)((*(uint32_t *)(param_2 + 0x220) ^ 0xa29ebf28) * -0x2cd4c013) +
              0x7fffa56930e3))(param_1,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab14d0  |  RVA: 0x3414d0  |  Size: 259 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab14d0(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x118)) {
    FUN_7fffa5687c30(param_1,param_2,
                     *(uint64_t *)(param_2 + 0x100) >> 0x3d ^ *(uint64_t *)(param_2 + 0x100));
  }
  *(uint16_t *)(param_2 + 0x100) = 0;
  *(uint64_t *)(param_2 + 0x110) = 0;
  *(uint64_t *)(param_2 + 0x118) = 7;
  *(uint64_t *)(param_2 + 0x598) = *(uint64_t *)(param_2 + 0x4c0);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab15e0  |  RVA: 0x3415e0  |  Size: 227 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab15e0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint16_t uVar2;
  
  if (*(int64_t *)(param_2 + 0x4c0) != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x4c0);
    uVar2 = (short)*(uint32_t *)(param_2 + 0x220) + 0xda91;
    (*(code *)((int64_t)(short)(uVar2 * 0x1000 | uVar2 >> 4) + 0x7fffa568d34b))
              (param_1,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint64_t *)(param_2 + 0x598) = *(uint64_t *)(param_2 + 0x458);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab16d0  |  RVA: 0x3416d0  |  Size: 215 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab16d0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = *(uint64_t *)(param_2 + 0x598);
  if (uVar1 != 0) {
    (*(code *)((int64_t)(((int)*(uint64_t *)(param_2 + 0x220) + 0x19b559c3) * -0x5fa72343) +
              0x7fffa5692bd4))(param_1,0x7fffa5692bd4,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab17b0  |  RVA: 0x3417b0  |  Size: 225 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab17b0(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x4b8)) {
    uVar1 = 0x265 - (short)*(uint64_t *)(param_2 + 0x220);
    (*(code *)((int64_t)(short)(uVar1 * 0x100 | uVar1 >> 8) + 0x7fffa568dfe2))
              (*(uint64_t *)(param_2 + 0x220),param_2,
               *(uint64_t *)(param_2 + 0x4a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x4a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ab18a0  |  RVA: 0x3418a0  |  Size: 208 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ab18a0(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0xd8)) {
    uVar1 = (short)*(uint64_t *)(param_2 + 0x220) + 0xb929;
    (*(code *)((int64_t)(short)(uVar1 * 0x10 | uVar1 >> 0xc) + 0x7fffa568ad0a))
              (*(uint64_t *)(param_2 + 0x220),param_2,
               *(uint64_t *)(param_2 + 0xc0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xc0));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4ab1970  |  RVA: 0x341970  |  Size: 3348 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4ab2131) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ab210e) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ab22a0) */

void FUN_7fffa4ab1970(void)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uint64_t uVar4;
  uint8_t bVar5;
  int iVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint32_t unaff_EDI;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint16_t uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint8_t bVar20;
  uint16_t uVar21;
  uint8_t uVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint32_t unaff_R15D;
  uint32_t uVar26;
  uint32_t uVar27;
  
  uVar7 = ~unaff_R15D;
  uVar15 = uVar7 | ~unaff_EDI;
  uVar16 = unaff_EDI & unaff_R15D;
  uVar12 = ~uVar16;
  uVar27 = (uVar15 & unaff_EDI) * -0x56d35d2d;
  uVar9 = ~unaff_EDI;
  uVar13 = ~unaff_EDI & unaff_R15D;
  uVar24 = uVar12 & unaff_EDI;
  uVar25 = unaff_EDI & uVar16;
  uVar23 = ~uVar27;
  uVar26 = ~(unaff_EDI | uVar27);
  uVar8 = uVar23 ^ uVar12 ^ unaff_EDI;
  uVar10 = (uVar16 | unaff_EDI) ^ uVar27;
  uVar26 = ((uVar23 ^ uVar24) & uVar7) * 0x2c85e95b +
           (~(uVar27 | unaff_R15D) & (uVar12 ^ unaff_EDI)) * -0x1f8a06f6 +
           (uVar7 & uVar8) * -0x7da9fa5b +
           (uVar7 ^ uVar24 & uVar23) * 0xbc2221e +
           ((unaff_EDI | uVar27) & uVar16 ^ unaff_R15D) * -0x6021e98a +
           ((uVar9 | uVar16 | uVar27) ^ unaff_R15D) * 0x4eb54af4 +
           ((unaff_EDI ^ uVar27) & uVar12 | uVar7) * 0x2231beda + (uVar7 & uVar27) * -0x42977b76 +
           (uVar25 ^ uVar27 | uVar7) * 0x55972a70 +
           (uVar27 & uVar9 & uVar16 | uVar12) * -0x77c8e94a +
           ((unaff_EDI ^ uVar27) & uVar16) * 0x222f6199 + (uVar25 & uVar23 ^ uVar16) * 0x25d42 +
           (uVar8 & uVar16 ^ uVar7) * 0x2dbaef20 +
           (unaff_R15D ^ uVar12 ^ uVar24 ^ uVar27) * -0x2231beda +
           (uVar10 & uVar16 | uVar7) * -0x4fecadfa +
           uVar7 * 0x6021e98a + ((uVar9 & uVar16 | uVar27) ^ unaff_R15D ^ uVar12) * 0x28152d2c +
           (((uVar25 | uVar27) ^ unaff_EDI) & unaff_R15D) * -0x5b7cf604 +
           (uVar26 & uVar12 | uVar7) * 0x5a776d12 + (uVar23 & (uVar16 ^ unaff_R15D)) * 0x5aa7c78 +
           ((uVar16 | uVar23) ^ unaff_R15D) * -0x4a448ec3 +
           ((uVar16 | uVar27) ^ unaff_R15D) * 0x77c8e94a +
           ((uVar12 | uVar9 | uVar27) & uVar7) * -0x7c703a13 + uVar7 * 0x55972a70 +
           (uVar10 & uVar7) * 0x5a40d87b + (((uVar12 | unaff_EDI) ^ uVar27) & uVar7) * 0x39a22a04 +
           ((uVar12 | unaff_EDI | uVar23) & uVar7) * 0x2231beda +
           ((uVar16 ^ (uVar16 | unaff_EDI) ^ uVar23) & uVar7) * -0x2dbd4c61 +
           (uVar7 & uVar12 & (unaff_EDI ^ uVar16 | uVar27)) * 2 +
           (~(uVar27 | unaff_R15D) & unaff_EDI) * 0x78361278 +
           (((unaff_EDI | uVar7) ^ unaff_EDI) - (uVar13 | uVar9)) * 0x5e1722e6 +
           (uVar9 & (unaff_EDI | uVar7)) * -0x56d35d2d + (uVar13 & uVar9) * 0x743c5b9 +
           (uVar15 | uVar9) * -0x1fe67676 + uVar25 * 0x5b88dffc + (uVar7 & uVar26) * 0x3d48ac5e;
  bVar20 = (uint8_t)uVar26;
  uVar2 = (uint16_t)uVar26;
  *(uint8_t *)
   (((int64_t)(short)((uVar2 ^ 0x36f7) << 6 | (uVar2 ^ 0x36f7) >> 10) ^ 0xffffffffffffe780U) +
   0x7fffa4789801) = 0;
  *(uint8_t (*) [16])((int64_t)(short)(uVar2 + 0x1964) + 0x7fffa4785dc6) = (uint8_t  [16])0x0
  ;
  *(uint8_t (*) [16])((int64_t)(short)(uVar2 + 0x1964) + 0x7fffa4785dba) = (uint8_t  [16])0x0
  ;
  uRam00007fffa4784ae3 = (uVar26 ^ 0xd3a3) * -0x6235 & 0xffff;
  uVar14 = rdtsc();
  uVar4 = 0;
  uVar14 = (uVar14 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar14)) * 0x11e08791f2d493;
  for (lVar18 = 0x294eb9ac;
      *(char *)(uVar4 + (int64_t)(short)~(uVar2 + 0x5556) + 0x7fffa47873a7) =
           (char)(uVar14 * 0x8791f2d493 >> 0x20), lVar18 != 0x294eb970; lVar18 = lVar18 + -4) {
    uVar11 = uVar14 | 0x590ff017de458311;
    if ((uVar26 | 1) * -0x791c7c5a < (uVar26 ^ 0x351eb684)) {
      uVar11 = uVar14 * 0x590ff017de458311;
    }
    uVar22 = (uint8_t)(uVar14 * 0x6f9dbb544b >> 0x20);
    if (((uVar26 ^ 0xbeab9227) * -0x492fe200 | (uVar26 ^ 0xbeab9227) * 0x1adb680f >> 0x17) ==
        0x7a57efde) {
      uVar22 = 0;
    }
    if ((uVar26 | 1) * -0x16039944 + -0x70f61370 ==
        (0x2c9796a8U >> (bVar20 & 0x1f) | 0x2c9796a8 << 0x20 - (bVar20 & 0x1f)) + 0x72ba08a0) {
      uVar19 = 0;
    }
    else {
      uVar19 = uVar4 | 1;
    }
    *(uint8_t *)(uVar4 + 0x7fffa4784aaf) = uVar22;
    *(char *)(uVar19 + (int64_t)
                       (short)(0xf97cU >> (bVar20 & 0xf) | -0x684 << 0x10 - (bVar20 & 0xf)) +
                       0x7fffa478ab7e) = (char)(uVar14 * 0x2f1c6fcc69 >> 0x20);
    *(char *)(uVar4 + (int64_t)(short)((uVar2 ^ 0xd8dc) * 0x5bfd) + 0x7fffa478c92d) =
         (char)(uVar11 >> 0x20);
    uVar4 = uVar4 + 4;
    uVar14 = uVar11;
  }
  uVar17 = (uVar2 | 1) * 0x689e ^ 0x841e;
  iVar6 = (int)uVar4;
  bVar1 = (uint8_t)uVar4 & 0xf;
  uVar24 = 0x6578e8e7U - iVar6 >> (bVar20 & 0x1f) | 0x6578e8e7U - iVar6 << 0x20 - (bVar20 & 0x1f);
  uVar3 = (uint16_t)uVar4;
  uVar21 = (uVar3 ^ 0x9592) + 0xa9f8;
  lVar18 = (int64_t)(short)((uVar2 ^ 0x166f) + uVar3);
  uVar14 = (uint64_t)
           ((uint32_t)*(uint8_t *)((int64_t)
                            (int)(((0x378fa22d - iVar6) * -0x66ea0000 |
                                  (uint32_t)((0x378fa22d - iVar6) * 0x123bcc8b) >> 0xf) * (uVar26 | 1))
                           + 0x7fffa47911e5) * 0x24924925 + 0x24924925) * 7;
  uVar4 = uVar14 >> 0x20;
  bVar5 = *(uint8_t *)((int64_t)
                    (int)((iVar6 + 0xa437cfedU >> (bVar20 & 0x1f) |
                          iVar6 + 0xa437cfedU << 0x20 - (bVar20 & 0x1f)) * -0x10f9a67) +
                   0x7fffa478e4e9) ^ 0xdc;
  bVar20 = *(uint8_t *)((int64_t)(short)(uVar21 >> (bVar20 & 0xf) | uVar21 << 0x10 - (bVar20 & 0xf)) +
                    0x7fffa47882f1);
  *(uint8_t *)(lVar18 + 0x7fffa47884bc + uVar4 * 4) = bVar5 << 1 | (char)bVar5 < '\0';
  bVar5 = *(uint8_t *)((int64_t)(short)((uVar3 - 0xabb) * (uVar2 | 1) + -0x17e5) + 0x7fffa478bea5) ^
          0x39;
  bVar20 = bVar20 ^ 0xd2;
  *(uint8_t *)(lVar18 + 0x7fffa47884b9 + uVar4 * 4) = bVar5 << 1 | (char)bVar5 < '\0';
  bVar5 = *(uint8_t *)((int64_t)(int)(uVar24 * 0x1199e000 | uVar24 * 0x76208ccf >> 0x13) +
                   0x7fffa478cc21) ^ 0x7e;
  *(uint8_t *)(lVar18 + 0x7fffa47884ba + uVar4 * 4) = bVar5 << 1 | (char)bVar5 < '\0';
  *(uint8_t *)(lVar18 + 0x7fffa47884bb + uVar4 * 4) = bVar20 << 1 | (char)bVar20 < '\0';
  *(char *)((int64_t)(short)((uVar17 << bVar1 | uVar17 >> 0x10 - bVar1) + 0x4efb) + 0x7fffa478b697)
       = (char)(uVar14 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4ab2690  |  RVA: 0x342690  |  Size: 98 bytes
// Callers  : FUN_7fffa50c6000@0x956000
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa4ab2690(void)

{
  int iVar1;
  
  _DAT_7fffa4780240 = (*(code *)&DAT_7ff84ea3faf0)(&UNK_7fffa560e1f0);
  if (_DAT_7fffa4780240 != -1) {
    iVar1 = (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,0x7fffa4781da0);
    if (iVar1 != 0) {
      _DAT_7fffa4781e18 = 0xfffffffe;
      return 1;
    }
    if (_DAT_7fffa4780240 != -1) {
      (*(code *)&DAT_7ff84ea42440)();
      _DAT_7fffa4780240 = -1;
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa4ab2700  |  RVA: 0x342700  |  Size: 480 bytes
// Callers  : FUN_7fffa5451110@0xce1110
// Callees  : FUN_7fffa55d63a0@0xe663a0, FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5210660@0xaa0660, FUN_7fffa5246e30@0xad6e30, FUN_7fffa524fccc@0xadfccc
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7fffa4ab2700(int64_t param_1,uint64_t *param_2,uint32_t *param_3,uint8_t *param_4)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  
  uVar1 = param_3[1];
  if (uVar1 == 0) {
    return 0;
  }
  puVar9 = param_2;
  lVar5 = FUN_7fffa55d63a0();
  if (lVar5 + (int)uVar1 == 0) {
    return 0;
  }
  uVar1 = param_3[1];
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_7fffa55d63a0();
    lVar5 = lVar5 + (int)uVar1;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 0;
  }
  if ((param_3[2] == 0) && (-1 < (int)*param_3)) {
    return 0;
  }
  uVar1 = *param_3;
  uVar7 = (uint64_t)uVar1;
  if (-1 < (int)uVar1) {
    param_2 = (uint64_t *)((int64_t)(int)param_3[2] + *param_2);
  }
  if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (_DAT_7fffa4781c08 != (code *)0x0)) {
    uVar6 = (*_DAT_7fffa4781c08)();
    if ((uVar6 != 0) && (param_2 != (uint64_t *)0x0)) {
      *param_2 = uVar6;
      uVar7 = FUN_7fffa5210660(uVar6,param_4 + 8);
      *param_2 = uVar7;
      return 0;
    }
    FUN_7fffa524fccc();
LAB_7fffa4ab28c5:
    FUN_7fffa524fccc();
LAB_7fffa4ab28ca:
    FUN_7fffa524fccc();
  }
  else {
    if ((uVar1 & 8) != 0) {
      uVar7 = *(uint64_t *)(param_1 + 0x28);
      if ((uVar7 != 0) && (param_2 != (uint64_t *)0x0)) {
        *param_2 = uVar7;
        uVar7 = FUN_7fffa5210660(uVar7,param_4 + 8);
        *param_2 = uVar7;
        return 0;
      }
      goto LAB_7fffa4ab28c5;
    }
    if ((*param_4 & 1) != 0) {
      puVar9 = *(uint64_t **)(param_1 + 0x28);
      if ((puVar9 != (uint64_t *)0x0) && (param_2 != (uint64_t *)0x0)) {
        FUN_7fffa56a5f20(param_2,puVar9,(int64_t)*(int *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 8) {
          return 0;
        }
        if (*param_2 == 0) {
          return 0;
        }
        uVar7 = FUN_7fffa5210660(*param_2,param_4 + 8);
        *param_2 = uVar7;
        return 0;
      }
      goto LAB_7fffa4ab28ca;
    }
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 == 0) {
      puVar9 = (uint64_t *)0x0;
    }
    else {
      lVar5 = FUN_7fffa5246e30();
      puVar9 = (uint64_t *)(lVar5 + iVar2);
    }
    lVar5 = *(int64_t *)(param_1 + 0x28);
    if (puVar9 != (uint64_t *)0x0) {
      if ((((lVar5 != 0) && (param_2 != (uint64_t *)0x0)) &&
          (iVar2 = *(int *)(param_4 + 0x18), iVar2 != 0)) &&
         (lVar5 = FUN_7fffa5246e30(), lVar5 + iVar2 != 0)) {
        return ((*param_4 & 4) != 0) + 1;
      }
      goto LAB_7fffa4ab28d4;
    }
    if ((lVar5 != 0) && (param_2 != (uint64_t *)0x0)) {
      iVar2 = *(int *)(param_4 + 0x14);
      uVar8 = FUN_7fffa5210660(lVar5,param_4 + 8);
      FUN_7fffa56a5f20(param_2,uVar8,(int64_t)iVar2);
      return 0;
    }
  }
  FUN_7fffa524fccc();
LAB_7fffa4ab28d4:
  FUN_7fffa524fccc();
  FUN_7fffa524fccc();
  if (uVar7 == 0) {
    *(uint8_t *)(puVar9 + 6) = 1;
    *(uint32_t *)((int64_t)puVar9 + 0x2c) = 0x16;
    FUN_7fffa5668bc0();
    iVar2 = -1;
  }
  else {
    iVar2 = -1;
    if ((*(uint32_t *)(uVar7 + 0x14) >> 0xd & 1) != 0) {
      iVar2 = FUN_7fffa5496200();
      FUN_7fffa5286318(uVar7);
      uVar3 = FUN_7fffa5404bd0(uVar7);
      iVar4 = FUN_7fffa5427f8c(uVar3,puVar9);
      if (iVar4 < 0) {
        iVar2 = -1;
      }
      else if (*(int64_t *)(uVar7 + 0x28) != 0) {
        FUN_7fffa52d8dd0();
        *(uint64_t *)(uVar7 + 0x28) = 0;
      }
    }
    FUN_7fffa55f8750(uVar7);
  }
  return iVar2;
}


// ============================================================================
// Function : FUN_7fffa4ab28e0  |  RVA: 0x3428e0  |  Size: 165 bytes
// Callers  : FUN_7fffa565b84c@0xeeb84c
// Callees  : FUN_7fffa5404bd0@0xc94bd0, FUN_7fffa5496200@0xd26200, FUN_7fffa5286318@0xb16318, FUN_7fffa55f8750@0xe88750, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa5668bc0@0xef8bc0, FUN_7fffa5427f8c@0xcb7f8c
// ============================================================================
uint32_t FUN_7fffa4ab28e0(int64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 0x16;
    FUN_7fffa5668bc0(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if ((*(uint32_t *)(param_1 + 0x14) >> 0xd & 1) != 0) {
      uVar1 = FUN_7fffa5496200();
      FUN_7fffa5286318(param_1);
      uVar2 = FUN_7fffa5404bd0(param_1);
      iVar3 = FUN_7fffa5427f8c(uVar2,param_2);
      if (iVar3 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (*(int64_t *)(param_1 + 0x28) != 0) {
        FUN_7fffa52d8dd0();
        *(uint64_t *)(param_1 + 0x28) = 0;
      }
    }
    FUN_7fffa55f8750(param_1);
  }
  return uVar1;
}

