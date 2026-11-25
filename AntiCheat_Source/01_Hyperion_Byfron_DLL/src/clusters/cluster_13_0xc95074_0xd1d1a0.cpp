// Subsystem: Internal Routines Cluster 13 (0xc95074 .. 0xd1d1a0)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa5405074  |  RVA: 0xc95074  |  Size: 59 bytes
// Callers  : FUN_7fffa4ecf55c@0x75f55c
// Callees  : _guard_dispatch_icall@0xf30810
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint64_t FUN_7fffa5405074(int64_t param_1,int64_t param_2)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      (**(code **)(param_2 + -8))(0);
    }
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa54050b0  |  RVA: 0xc950b0  |  Size: 64 bytes
// Callers  : FUN_7fffa50c9360@0x959360
// Callees  : FUN_7fffa55ee684@0xe7e684, FUN_7fffa5251e54@0xae1e54
// ============================================================================
uint16_t FUN_7fffa54050b0(uint16_t param_1)

{
  int iVar1;
  uint16_t auStackX_8 [4];
  uint32_t auStackX_10 [6];
  
  auStackX_8[0] = param_1;
  iVar1 = FUN_7fffa5251e54();
  if (iVar1 != 0) {
    auStackX_10[0] = 0;
    iVar1 = FUN_7fffa55ee684(auStackX_8,1,auStackX_10);
    if (iVar1 != 0) {
      return auStackX_8[0];
    }
  }
  return 0xffff;
}


// ============================================================================
// Function : FUN_7fffa54050f0  |  RVA: 0xc950f0  |  Size: 63972 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa54050f0(void) {
    /* +0xc950f0 */ __asm { PUSH RDI }
    /* +0xc950f1 */ __asm { PUSH RSI }
    /* +0xc950f2 */ __asm { PUSH RBX }
    /* +0xc950f3 */ __asm { PUSH RBP }
    /* +0xc950f4 */ __asm { PUSH R12 }
    /* +0xc950f6 */ __asm { PUSH R15 }
    /* +0xc950f8 */ __asm { PUSH R14 }
    /* +0xc950fa */ __asm { PUSH R13 }
    /* +0xc950fc */ __asm { SUB RSP,0x258 }
    /* +0xc95103 */ __asm { MOVDQA xmmword ptr [RSP + 0x240],XMM10 }
    /* +0xc9510d */ __asm { MOVDQA xmmword ptr [RSP + 0x230],XMM15 }
    /* +0xc95117 */ __asm { MOVDQA xmmword ptr [RSP + 0x220],XMM14 }
    /* +0xc95121 */ __asm { MOVAPS xmmword ptr [RSP + 0x210],XMM8 }
    /* +0xc9512a */ __asm { MOVDQA xmmword ptr [RSP + 0x200],XMM9 }
    /* +0xc95134 */ __asm { MOVDQA xmmword ptr [RSP + 0x1f0],XMM11 }
    /* +0xc9513e */ __asm { MOVDQA xmmword ptr [RSP + 0x1e0],XMM7 }
    /* +0xc95147 */ __asm { MOVAPS xmmword ptr [RSP + 0x1d0],XMM12 }
    /* +0xc95150 */ __asm { MOVAPS xmmword ptr [RSP + 0x1c0],XMM13 }
    /* +0xc95159 */ __asm { MOV R15,R11 }
    /* +0xc9515c */ __asm { MOV R9D,0xc66547b }
    /* +0xc95162 */ __asm { XOR R9D,0xf6eaabf6 }
    /* +0xc95169 */ __asm { MOV ECX,R15D }
    /* +0xc9516c */ __asm { ROL R9D,CL }
    /* +0xc9516f */ __asm { MOV dword ptr [RSP + 0xe8],R9D }
    /* +0xc95177 */ __asm { MOV R9D,dword ptr [RSP + 0xe8] }
    /* +0xc9517f */ __asm { MOV R9W,0xd3db }
    /* +0xc95184 */ __asm { SUB R9D,R15D }
    /* +0xc95187 */ __asm { IMUL R9D,R9D,-0x2dc3 }
    /* +0xc9518e */ __asm { MOVZX EDX,R9W }
    /* +0xc95192 */ __asm { MOV R8,qword ptr GS:[RDX] }
    /* +0xc95196 */ __asm { MOV R9W,0xde1c }
    /* +0xc9519b */ __asm { MOV R14D,R15D }
    /* +0xc9519e */ __asm { OR R14D,0x1 }
    /* +0xc951a2 */ __asm { IMUL R9D,R14D }
    /* +0xc951a6 */ __asm { MOVZX EDX,R9W }
    /* +0xc951aa */ __asm { XOR RDX,0x7914 }
    /* +0xc951b1 */ __asm { MOV RDX,qword ptr GS:[RDX] }
    /* +0xc951b5 */ __asm { LEA RAX,[RDX + 0x9d8] }
    /* +0xc951bc */ __asm { MOV R9W,0xe7ab }
    /* +0xc951c1 */ __asm { SUB R9D,R15D }
    /* +0xc951c4 */ __asm { IMUL R9D,R9D,-0x4a97 }
    /* +0xc951cb */ __asm { ADD R9D,0x5500 }
    /* +0xc951d2 */ __asm { MOVZX R11D,R9W }
    /* +0xc951d6 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xc951da */ __asm { MOV ECX,0xe2041610 }
    /* +0xc951df */ __asm { MOV R10D,0xa012a053 }
    /* +0xc951e5 */ __asm { MOV R9D,0x7cbc190c }
    /* +0xc951eb */ __asm { MOVD XMM5,ECX }
    /* +0xc951ef */ __asm { IMUL R10D,R10D,-0x637bf48d }
    /* +0xc951f6 */ __asm { MOV ECX,R15D }
    /* +0xc951f9 */ __asm { ROL R10D,CL }
    /* +0xc951fc */ __asm { MOV RCX,qword ptr [R11 + 0x60] }
    /* +0xc95200 */ __asm { MOVD XMM8,R15D }
    /* +0xc95205 */ __asm { PXOR XMM5,XMM8 }
    /* +0xc9520a */ __asm { MOVQ XMM3,RDX }
    /* +0xc9520f */ __asm { MOVDQA XMM0,xmmword ptr [0x7fffa56bc3f0] }
    /* +0xc95217 */ __asm { PSUBQ XMM0,XMM3 }
    /* +0xc9521b */ __asm { MOVQ R11,XMM0 }
    /* +0xc95220 */ __asm { MOVD EDX,XMM5 }
    /* +0xc95224 */ __asm { ROL EDX,0x2 }
    /* +0xc95227 */ __asm { MOVQ XMM3,RCX }
    /* +0xc9522c */ __asm { NOT RCX }
    /* +0xc9522f */ __asm { MOV R12,RAX }
    /* +0xc95232 */ __asm { OR R12,RCX }
    /* +0xc95235 */ __asm { MOV RBX,R11 }
    /* +0xc95238 */ __asm { OR RBX,RCX }
    /* +0xc9523b */ __asm { AND RAX,RCX }
    /* +0xc9523e */ __asm { IMUL RAX,R10 }
    /* +0xc95242 */ __asm { AND RCX,R11 }
    /* +0xc95245 */ __asm { IMUL R11,RBX,-0x663dfb67 }
    /* +0xc9524c */ __asm { MOVDQA XMM5,XMM3 }
    /* +0xc95250 */ __asm { PAND XMM5,XMM0 }
    /* +0xc95254 */ __asm { PXOR XMM0,XMM3 }
    /* +0xc95258 */ __asm { MOVQ R10,XMM0 }
    /* +0xc9525d */ __asm { IMUL R10,R10,-0x169d8eb5 }
    /* +0xc95264 */ __asm { IMUL RBX,RCX,0x663dfb66 }
    /* +0xc9526b */ __asm { IMUL RCX,R12,0x169d8eb6 }
    /* +0xc95272 */ __asm { ADD RCX,R11 }
    /* +0xc95275 */ __asm { ADD RCX,RBX }
    /* +0xc95278 */ __asm { ADD RCX,R10 }
    /* +0xc9527b */ __asm { ADD RCX,RAX }
    /* +0xc9527e */ __asm { ADD R9D,0xb43936d6 }
    /* +0xc95285 */ __asm { ROL R9D,0x5 }
    /* +0xc95289 */ __asm { NOT R9D }
    /* +0xc9528c */ __asm { MOVSXD RAX,R9D }
    /* +0xc9528f */ __asm { ADD RAX,RDX }
    /* +0xc95292 */ __asm { MOVQ XMM3,RAX }
    /* +0xc95297 */ __asm { MOVDQA XMM0,XMM3 }
    /* +0xc9529b */ __asm { PSRLQ XMM0,0x20 }
    /* +0xc952a0 */ __asm { PMULUDQ XMM0,XMM5 }
    /* +0xc952a4 */ __asm { MOVDQA XMM1,XMM5 }
    /* +0xc952a8 */ __asm { PSRLQ XMM1,0x20 }
    /* +0xc952ad */ __asm { PMULUDQ XMM1,XMM3 }
    /* +0xc952b1 */ __asm { PADDQ XMM1,XMM0 }
    /* +0xc952b5 */ __asm { PSLLQ XMM1,0x20 }
    /* +0xc952ba */ __asm { PMULUDQ XMM5,XMM3 }
    /* +0xc952be */ __asm { PADDQ XMM5,XMM1 }
    /* +0xc952c2 */ __asm { MOVQ RAX,XMM5 }
    /* +0xc952c7 */ __asm { ADD RAX,RCX }
    /* +0xc952ca */ __asm { MOV RDX,-0x3cae705d53d11fcd }
    /* +0xc952d4 */ __asm { CMP RAX,RDX }
    /* +0xc952d7 */ __asm { NOP }
    /* +0xc952d8 */ __asm { NOP }
    /* +0xc952d9 */ __asm { NOP }
    /* +0xc952da */ __asm { NOP }
    /* +0xc952db */ __asm { NOP }
    /* +0xc952dc */ __asm { NOP }
    /* +0xc952dd */ __asm { NOP }
    /* +0xc952de */ __asm { NOP }
    /* +0xc952df */ __asm { NOP }
    /* +0xc952e0 */ __asm { MOV R9D,0x434766f0 }
    /* +0xc952e6 */ __asm { SUB R9D,R15D }
    /* +0xc952e9 */ __asm { ROL R9D,0x1c }
    /* +0xc952ed */ __asm { NOT R9D }
    /* +0xc952f0 */ __asm { MOV R8,qword ptr [R8 + 0x18] }
    /* +0xc952f4 */ __asm { MOV dword ptr [RSP + 0xe8],R9D }
    /* +0xc952fc */ __asm { MOV R9D,dword ptr [RSP + 0xe8] }
    /* +0xc95304 */ __asm { MOV RSI,qword ptr [R8 + 0x10] }
    /* +0xc95308 */ __asm { ADD R8,0x10 }
    /* +0xc9530c */ __asm { TEST RSI,RSI }
    /* +0xc9530f */ __asm { SETZ DL }
    /* +0xc95312 */ __asm { CMP RSI,R8 }
    /* +0xc95315 */ __asm { SETZ R10B }
    /* +0xc95319 */ __asm { OR R10B,DL }
    /* +0xc9531c */ __asm { MOVQ XMM13,R15 }
    /* +0xc95321 */ __asm { MOV qword ptr [RSP + 0x148],R15 }
    /* +0xc95329 */ __asm { MOV dword ptr [RSP + 0xe4],R14D }
    /* +0xc95331 */ __asm { JZ 0x7fffa540537d }
    /* +0xc95333 */ __asm { MOV qword ptr [RSP + 0xd0],0x0 }
    /* +0xc9533f */ __asm { LEA R8,[0x7fffa5087e35] }
    /* +0xc95346 */ __asm { MOV DX,0xa967 }
    /* +0xc9534a */ __asm { SUB EDX,R15D }
    /* +0xc9534d */ __asm { XOR EDX,0x517 }
    /* +0xc95353 */ __asm { MOVSX RAX,DX }
    /* +0xc95357 */ __asm { ADD RAX,R8 }
    /* +0xc9535a */ __asm { MOV R9D,0x780cb61b }
    /* +0xc95360 */ __asm { IMUL R10D,R9D,-0x393d6cf }
    /* +0xc95367 */ __asm { ROL R10D,0x18 }
    /* +0xc9536b */ __asm { XOR R10D,R15D }
    /* +0xc9536e */ __asm { CALL RAX }
    /* +0xc95370 */ __asm { MOV RSI,qword ptr [RSP + 0xd0] }
    /* +0xc95378 */ __asm { JMP 0x7fffa54056bc }
    /* +0xc9537d */ __asm { PUSHFQ }
    /* +0xc9537e */ __asm { POP R13 }
    /* +0xc95380 */ __asm { MOV qword ptr [RSP + 0xd0],0x0 }
    /* +0xc9538c */ __asm { MOV RDX,0x80000000167 }
    /* +0xc95396 */ __asm { MOV qword ptr [RSP + 0xd8],R13 }
    /* +0xc9539e */ __asm { NOP }
    /* +0xc953a0 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xc953a7 */ __asm { NOP }
    /* +0xc953a8 */ __asm { MOV R11,0x0 }
    /* +0xc953af */ __asm { TEST R13D,0x100 }
    /* +0xc953b6 */ __asm { NOP }
    /* +0xc953b7 */ __asm { NOP }
    /* +0xc953b8 */ __asm { NOP }
    /* +0xc953b9 */ __asm { NOP }
    /* +0xc953ba */ __asm { NOP }
    /* +0xc953bb */ __asm { MOV R11D,0xed03fe4e }
    /* +0xc953c1 */ __asm { ADD R11D,0x2b0001fa }
    /* +0xc953c8 */ __asm { MOV ECX,R15D }
    /* +0xc953cb */ __asm { ROR R11D,CL }
    /* +0xc953ce */ __asm { ROL R11D,0x12 }
    /* +0xc953d2 */ __asm { MOV dword ptr [RSP + 0xe8],R11D }
    /* +0xc953da */ __asm { MOV ECX,dword ptr [RSP + 0xe8] }
    /* +0xc953e1 */ __asm { TEST ECX,ECX }
    /* +0xc953e3 */ __asm { NOP }
    /* +0xc953e4 */ __asm { NOP }
    /* +0xc953e5 */ __asm { NOP }
    /* +0xc953e6 */ __asm { NOP }
    /* +0xc953e7 */ __asm { NOP }
    /* +0xc953e8 */ __asm { MOV R11D,0x367756cb }
    /* +0xc953ee */ __asm { MOV R14W,0x5f90 }
    /* +0xc953f3 */ __asm { ADD R14D,0xffff9fea }
    /* +0xc953fa */ __asm { ROL R14W,0xa }
    /* +0xc953ff */ __asm { MOV R12W,0xbb58 }
    /* +0xc95404 */ __asm { ADD R12D,R15D }
    /* +0xc95407 */ __asm { ROL R12W,0xa }
    /* +0xc9540c */ __asm { ADD R12D,0xffffb165 }
    /* +0xc95413 */ __asm { ADD R11D,0xa7731e25 }
    /* +0xc9541a */ __asm { MOV ECX,R15D }
    /* +0xc9541d */ __asm { ROL R11D,CL }
    /* +0xc95420 */ __asm { SUB R14D,R15D }
    /* +0xc95423 */ __asm { MOVSXD RCX,R11D }
    /* +0xc95426 */ __asm { NOP }
    /* +0xc95427 */ __asm { MOV R11,0x0 }
    /* +0xc9542e */ __asm { LEA RDI,[0x7fffa4770000] }
    /* +0xc95435 */ __asm { MOVZX EBX,word ptr [RSI + 0x58] }
    /* +0xc95439 */ __asm { XOR R11D,R11D }
    /* +0xc9543c */ __asm { CMP BX,R12W }
    /* +0xc95440 */ __asm { SETG R11B }
    /* +0xc95444 */ __asm { XOR R12D,R12D }
    /* +0xc95447 */ __asm { CMP BX,R14W }
    /* +0xc9544b */ __asm { SETC R12B }
    /* +0xc9544f */ __asm { CMP RCX,0x38e2a2f8 }
    /* +0xc95456 */ __asm { CMOVNZ R11D,R12D }
    /* +0xc9545a */ __asm { TEST R11B,R11B }
    /* +0xc9545d */ __asm { JZ 0x7fffa5405470 }
    /* +0xc9545f */ __asm { XOR ECX,ECX }
    /* +0xc95461 */ __asm { JMP 0x7fffa5405608 }
    /* +0xc95470 */ __asm { SHR EBX,0x1 }
    /* +0xc95472 */ __asm { MOV R9,RSI }
    /* +0xc95475 */ __asm { MOV RSI,qword ptr [RSI + 0x60] }
    /* +0xc95479 */ __asm { CMP BX,0x1 }
    /* +0xc9547d */ __asm { JZ 0x7fffa5405570 }
    /* +0xc95483 */ __asm { MOV R13D,EBX }
    /* +0xc95486 */ __asm { AND R13D,0xfffffffe }
    /* +0xc9548a */ __asm { MOV EBP,0x2 }
    /* +0xc9548f */ __asm { MOV R12,0x5b0f53790acc9c37 }
    /* +0xc95499 */ __asm { NOP dword ptr [RAX] }
    /* +0xc954a0 */ __asm { MOV ECX,0x59a8bba2 }
    /* +0xc954a5 */ __asm { IMUL EDI,ECX,0x57a89f87 }
    /* +0xc954ab */ __asm { MOV R14D,0x76b6a6f7 }
    /* +0xc954b1 */ __asm { ADD R14D,0x6469e690 }
    /* +0xc954b8 */ __asm { MOV CX,0xadb1 }
    /* +0xc954bc */ __asm { IMUL R11D,ECX,-0x365b }
    /* +0xc954c3 */ __asm { MOV RCX,qword ptr [RSP + 0x148] }
    /* +0xc954cb */ __asm { SUB R11D,ECX }
    /* +0xc954ce */ __asm { MOVZX R10D,word ptr [RSI + RBP*0x2 + -0x2] }
    /* +0xc954d4 */ __asm { LEA R15D,[R10 + -0x41] }
    /* +0xc954d8 */ __asm { MOV EAX,R10D }
    /* +0xc954db */ __asm { OR EAX,0x20 }
    /* +0xc954de */ __asm { CMP R15W,0x1a }
    /* +0xc954e3 */ __asm { CMOVNC EAX,R10D }
    /* +0xc954e7 */ __asm { ROR R14D,CL }
    /* +0xc954ea */ __asm { NOT EDI }
    /* +0xc954ec */ __asm { MOVZX ECX,word ptr [RSI + RBP*0x2 + -0x4] }
    /* +0xc954f1 */ __asm { MOV R15D,ECX }
    /* +0xc954f4 */ __asm { OR R15D,0x20 }
    /* +0xc954f8 */ __asm { ADD R14D,0x34a5d86f }
    /* +0xc954ff */ __asm { LEA R10D,[RCX + -0x41] }
    /* +0xc95503 */ __asm { CMP R10W,R11W }
    /* +0xc95507 */ __asm { MOVQ XMM5,R12 }
    /* +0xc9550c */ __asm { MOVZX R11D,AL }
    /* +0xc95510 */ __asm { MOVSXD RAX,R14D }
    /* +0xc95513 */ __asm { CMOVNC R15D,ECX }
    /* +0xc95517 */ __asm { MOVZX ECX,R15B }
    /* +0xc9551b */ __asm { XOR R12,RCX }
    /* +0xc9551e */ __asm { CMP RDI,RAX }
    /* +0xc95521 */ __asm { MOVQ XMM3,RCX }
    /* +0xc95526 */ __asm { PADDQ XMM3,XMM5 }
    /* +0xc9552a */ __asm { MOVQ RAX,XMM3 }
    /* +0xc9552f */ __asm { CMOVBE RAX,R12 }
    /* +0xc95533 */ __asm { MOVD XMM5,R11D }
    /* +0xc95538 */ __asm { MOV RCX,0x800000004b3 }
    /* +0xc95542 */ __asm { ADD RCX,-0x34c }
    /* +0xc95549 */ __asm { IMUL RCX,RAX }
    /* +0xc9554d */ __asm { MOVQ XMM3,RCX }
    /* +0xc95552 */ __asm { PXOR XMM3,XMM5 }
    /* +0xc95556 */ __asm { MOVQ R12,XMM3 }
    /* +0xc9555b */ __asm { IMUL R12,RDX }
    /* +0xc9555f */ __asm { CMP R13,RBP }
    /* +0xc95562 */ __asm { JZ 0x7fffa5405590 }
    /* +0xc95564 */ __asm { ADD RBP,0x2 }
    /* +0xc95568 */ __asm { JMP 0x7fffa54054a0 }
    /* +0xc95570 */ __asm { MOV R12,0x5b0f53790acc9c37 }
    /* +0xc9557a */ __asm { XOR EBP,EBP }
    /* +0xc9557c */ __asm { TEST BL,0x1 }
    /* +0xc9557f */ __asm { JNZ 0x7fffa540559d }
    /* +0xc95581 */ __asm { JMP 0x7fffa54055ed }
    /* +0xc95590 */ __asm { MOV R13,qword ptr [RSP + 0xd8] }
    /* +0xc95598 */ __asm { TEST BL,0x1 }
    /* +0xc9559b */ __asm { JZ 0x7fffa54055ed }
    /* +0xc9559d */ __asm { MOV RAX,0x7d453f3ce2ff864f }
    /* +0xc955a7 */ __asm { MOV ECX,0xe921fda1 }
    /* +0xc955ac */ __asm { ADD RCX,-0x1662bd0c }
    /* +0xc955b3 */ __asm { IMUL RCX,RAX }
    /* +0xc955b7 */ __asm { MOVZX R11D,word ptr [RSI + RBP*0x2] }
    /* +0xc955bc */ __asm { LEA EAX,[R11 + -0x41] }
    /* +0xc955c0 */ __asm { MOV R10D,R11D }
    /* +0xc955c3 */ __asm { OR R10D,0x20 }
    /* +0xc955c7 */ __asm { CMP AX,0x1a }
    /* +0xc955cb */ __asm { CMOVNC R10D,R11D }
    /* +0xc955cf */ __asm { MOVQ XMM5,RCX }
    /* +0xc955d4 */ __asm { MOVZX R11D,R10B }
    /* +0xc955d8 */ __asm { XOR R11,R12 }
    /* +0xc955db */ __asm { PSUBQ XMM5,XMM13 }
    /* +0xc955e0 */ __asm { MOVQ R12,XMM5 }
    /* +0xc955e5 */ __asm { ROL R12,0xa }
    /* +0xc955e9 */ __asm { IMUL R12,R11 }
    /* +0xc955ed */ __asm { MOV RAX,-0x138a530e6808d235 }
    /* +0xc955f7 */ __asm { CMP R12,RAX }
    /* +0xc955fa */ __asm { SETZ CL }
    /* +0xc955fd */ __asm { MOV R15,qword ptr [RSP + 0x148] }
    /* +0xc95605 */ __asm { MOV RSI,R9 }
    /* +0xc95608 */ __asm { PUSHFQ }
    /* +0xc95609 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xc95611 */ __asm { POPFQ }
    /* +0xc95612 */ __asm { MOV dword ptr [RSP + 0xe8],0x98f7d068 }
    /* +0xc9561d */ __asm { MOV R11D,dword ptr [RSP + 0xe8] }
    /* +0xc95625 */ __asm { CMP R11D,0xd747df85 }
    /* +0xc9562c */ __asm { NOP }
    /* +0xc9562d */ __asm { NOP }
    /* +0xc9562e */ __asm { NOP }
    /* +0xc9562f */ __asm { NOP }
    /* +0xc95630 */ __asm { NOP }
    /* +0xc95631 */ __asm { NOP }
    /* +0xc95632 */ __asm { NOP }
    /* +0xc95633 */ __asm { NOP }
    /* +0xc95634 */ __asm { NOP }
    /* +0xc95635 */ __asm { NOP }
    /* +0xc95636 */ __asm { NOP }
    /* +0xc95637 */ __asm { NOP }
    /* +0xc95638 */ __asm { NOP }
    /* +0xc95639 */ __asm { NOP }
    /* +0xc9563a */ __asm { NOP }
    /* +0xc9563b */ __asm { NOP }
    /* +0xc9563c */ __asm { NOP }
    /* +0xc956bc */ __asm { MOV dword ptr [RSP + 0xe8],0x92c8b440 }
    /* +0xc956c7 */ __asm { MOV R9D,dword ptr [RSP + 0xe8] }
    /* +0xc956cf */ __asm { MOV DX,0x6a80 }
    /* +0xc956d3 */ __asm { MOV ECX,R15D }
    /* +0xc956d6 */ __asm { XOR ECX,EDX }
    /* +0xc956d8 */ __asm { ROL CX,0xc }
    /* +0xc956dc */ __asm { XOR ECX,0xb817 }
    /* +0xc956e2 */ __asm { MOVZX EDX,CX }
    /* +0xc956e5 */ __asm { CMP R9D,EDX }
    /* +0xc956e8 */ __asm { JGE 0x7fffa5415729 }
    /* +0xc956ee */ __asm { PUSHFQ }
    /* +0xc956ef */ __asm { POP R9 }
    /* +0xc956f1 */ __asm { MOV qword ptr [RSP + 0x38],R9 }
    /* +0xc956f6 */ __asm { TEST R9D,0x100 }
    /* +0xc956fd */ __asm { NOP }
    /* +0xc956fe */ __asm { NOP }
    /* +0xc956ff */ __asm { NOP }
    /* +0xc95700 */ __asm { NOP }
    /* +0xc95701 */ __asm { NOP }
    /* +0xc95702 */ __asm { NOP }
    /* +0xc95703 */ __asm { NOP }
    /* +0xc95704 */ __asm { MOV R10,-0x1339c51e7 }
    /* +0xc9570e */ __asm { MOV R9W,0x184f }
    /* +0xc95713 */ __asm { IMUL R9D,R9D,0x270b }
    /* +0xc9571a */ __asm { ADD R9D,R15D }
    /* +0xc9571d */ __asm { MOVZX EDX,R9W }
    /* +0xc95721 */ __asm { MOV RDI,qword ptr [RSI + 0x30] }
    /* +0xc95725 */ __asm { MOV R8,qword ptr GS:[RDX] }
    /* +0xc95729 */ __asm { TEST RDI,RDI }
    /* +0xc9572c */ __asm { MOV qword ptr [RSP + 0x160],RSI }
    /* +0xc95734 */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xc95739 */ __asm { JZ 0x7fffa54058f2 }
    /* +0xc9573f */ __asm { MOV EDX,dword ptr [RDI + 0x3c] }
    /* +0xc95742 */ __asm { ADD RDX,RDI }
    /* +0xc95745 */ __asm { JZ 0x7fffa54058f2 }
    /* +0xc9574b */ __asm { MOV R9W,0xd41c }
    /* +0xc95750 */ __asm { IMUL R9D,R9D,0x5697 }
    /* +0xc95757 */ __asm { MOV ECX,R15D }
    /* +0xc9575a */ __asm { ROR R9W,CL }
    /* +0xc9575e */ __asm { IMUL R9D,R9D,0xfab }
    /* +0xc95765 */ __asm { MOVZX R11D,R9W }
    /* +0xc95769 */ __asm { MOV R8,qword ptr GS:[R11] }
    /* +0xc9576d */ __asm { MOV R9W,0x1434 }
    /* +0xc95772 */ __asm { XOR R9D,R15D }
    /* +0xc95775 */ __asm { NOT R9D }
    /* +0xc95778 */ __asm { MOVZX R11D,R9W }
    /* +0xc9577c */ __asm { MOV RAX,qword ptr [R8 + 0xfe8] }
    /* +0xc95783 */ __asm { MOV R8,qword ptr GS:[R11] }
    /* +0xc95787 */ __asm { ADD RAX,qword ptr [R8 + 0x370] }
    /* +0xc9578e */ __asm { ROL RAX,0x10 }
    /* +0xc95792 */ __asm { LEA R8,[R10 + RAX*0x1] }
    /* +0xc95796 */ __asm { ADD R8,0x4182ac20 }
    /* +0xc9579d */ __asm { MOV RAX,-0x3fd390eff22e02f1 }
    /* +0xc957a7 */ __asm { CMP R8,RAX }
    /* +0xc957aa */ __asm { NOP }
    /* +0xc957ab */ __asm { NOP }
    /* +0xc957ac */ __asm { NOP }
    /* +0xc957ad */ __asm { NOP }
    /* +0xc957ae */ __asm { NOP }
    /* +0xc957af */ __asm { MOV ECX,0x3b94c04b }
    /* +0xc957b4 */ __asm { SUB ECX,R15D }
    /* +0xc957b7 */ __asm { MOV RBX,qword ptr [RDX + 0x88] }
    /* +0xc957be */ __asm { MOV EDX,EBX }
    /* +0xc957c0 */ __asm { MOV R8D,0xe921fda1 }
    /* +0xc957c6 */ __asm { LEA R11,[R8 + 0x16de025e] }
    /* +0xc957cd */ __asm { OR R11,RBX }
    /* +0xc957d0 */ __asm { MOV R8,RBX }
    /* +0xc957d3 */ __asm { SHR R8,0x20 }
    /* +0xc957d7 */ __asm { MOV R9W,0x4a4c }
    /* +0xc957dc */ __asm { MOV EAX,0x96b3a3ca }
    /* +0xc957e1 */ __asm { ADD EAX,R15D }
    /* +0xc957e4 */ __asm { ROL EAX,0x1b }
    /* +0xc957e7 */ __asm { ADD ECX,0xb9ff3bcc }
    /* +0xc957ed */ __asm { MOVSXD RCX,ECX }
    /* +0xc957f0 */ __asm { CMP RAX,RCX }
    /* +0xc957f3 */ __asm { CMOVC R11,RDX }
    /* +0xc957f7 */ __asm { XOR R12D,R12D }
    /* +0xc957fa */ __asm { TEST R8,R8 }
    /* +0xc957fd */ __asm { JZ 0x7fffa5415bc4 }
    /* +0xc95803 */ __asm { ADD R9D,0xffffa1af }
    /* +0xc9580a */ __asm { MOV EDX,R15D }
    /* +0xc9580d */ __asm { XOR EDX,R9D }
    /* +0xc95810 */ __asm { IMUL R9D,EDX,-0x2a63 }
    /* +0xc95817 */ __asm { MOVZX EDX,R9W }
    /* +0xc9581b */ __asm { CMP R11,RDX }
    /* +0xc9581e */ __asm { JZ 0x7fffa5415bc4 }
    /* +0xc95824 */ __asm { TEST dword ptr [RSP + 0x38],0x100 }
    /* +0xc9582c */ __asm { NOP }
    /* +0xc9582d */ __asm { NOP }
    /* +0xc9582e */ __asm { NOP }
    /* +0xc9582f */ __asm { NOP }
    /* +0xc95830 */ __asm { NOP }
    /* +0xc95831 */ __asm { NOP }
    /* +0xc95832 */ __asm { NOP }
    /* +0xc95833 */ __asm { NOP }
    /* +0xc95834 */ __asm { NOP }
    /* +0xc95835 */ __asm { MOV dword ptr [RSP + 0xe8],0xaa54569c }
    /* +0xc95840 */ __asm { MOV R9D,dword ptr [RSP + 0xe8] }
    /* +0xc95848 */ __asm { TEST R9D,R9D }
    /* +0xc9584b */ __asm { JNS 0x7fffa5415b9f }
    /* +0xc95851 */ __asm { CMP dword ptr [RDI + R11*0x1 + 0x1c],0x0 }
    /* +0xc95857 */ __asm { JZ 0x7fffa5415bae }
    /* +0xc9585d */ __asm { CMP dword ptr [RDI + R11*0x1 + 0x20],0x0 }
    /* +0xc95863 */ __asm { JZ 0x7fffa5415bae }
    /* +0xc95869 */ __asm { CMP dword ptr [RDI + R11*0x1 + 0x24],0x0 }
    /* +0xc9586f */ __asm { JZ 0x7fffa5415bae }
    /* +0xc95875 */ __asm { MOV dword ptr [RSP + 0xe8],0xb1676a98 }
    /* +0xc95880 */ __asm { MOV R9D,dword ptr [RSP + 0xe8] }
    /* +0xc95888 */ __asm { MOV R13D,dword ptr [RDI + R11*0x1 + 0x1c] }
    /* +0xc9588d */ __asm { ADD R13,RDI }
    /* +0xc95890 */ __asm { MOV dword ptr [RSP + 0xe8],0x5d52e0ba }
    /* +0xc9589b */ __asm { MOV R9D,dword ptr [RSP + 0xe8] }
    /* +0xc958a3 */ __asm { CMP R9D,0xb5807139 }
    /* +0xc958aa */ __asm { JNC 0x7fffa5415dc9 }
    /* +0xc958b0 */ __asm { MOV R15D,dword ptr [RDI + R11*0x1 + 0x20] }
    /* +0xc958b5 */ __asm { ADD R15,RDI }
    /* +0xc958b8 */ __asm { MOV dword ptr [RSP + 0xe8],0x7c0c5dd9 }
    /* +0xc958c3 */ __asm { MOV R9D,dword ptr [RSP + 0xe8] }
    /* +0xc958cb */ __asm { MOV EBP,dword ptr [RDI + R11*0x1 + 0x24] }
    /* +0xc958d0 */ __asm { ADD RBP,RDI }
    /* +0xc958d3 */ __asm { MOV dword ptr [RSP + 0xe8],0x8645c168 }
    /* +0xc958de */ __asm { MOV R9D,dword ptr [RSP + 0xe8] }
    /* +0xc958e6 */ __asm { MOV R14D,dword ptr [RDI + R11*0x1 + 0x10] }
    /* +0xc958eb */ __asm { MOV R12D,dword ptr [RDI + R11*0x1 + 0x18] }
    /* +0xc958f0 */ __asm { JMP 0x7fffa54058f5 }
    /* +0xc958f2 */ __asm { XOR R12D,R12D }
    /* +0xc958f5 */ __asm { MOV RDX,RBX }
    /* +0xc958f8 */ __asm { SHR RDX,0x20 }
    /* +0xc958fc */ __asm { ADD EDX,EBX }
    /* +0xc958fe */ __asm { MOV qword ptr [RSP + 0xd8],RDX }
    /* +0xc95906 */ __asm { XOR ESI,ESI }
    /* +0xc95908 */ __asm { MOV R8,qword ptr [RSP + 0x148] }
    /* +0xc95910 */ __asm { OR R8,0x1 }
    /* +0xc95914 */ __asm { MOV qword ptr [RSP + 0xc0],R8 }
    /* +0xc9591c */ __asm { MOV qword ptr [RSP + 0xd0],0x0 }
    /* +0xc95928 */ __asm { MOV qword ptr [RSP + 0x68],RDI }
    /* +0xc9592d */ __asm { MOV qword ptr [RSP + 0x158],RBP }
    /* +0xc95935 */ __asm { JMP 0x7fffa54059c4 }
    /* +0xc95940 */ __asm { MOV R9W,0xc2a }
    /* +0xc95945 */ __asm { XOR R9D,0x2a }
    /* +0xc95949 */ __asm { MOV RCX,qword ptr [RSP + 0x148] }
    /* +0xc95951 */ __asm { ROL R9W,CL }
    /* +0xc95955 */ __asm { MOVZX EDX,R9W }
    /* +0xc95959 */ __asm { MOV R8,qword ptr GS:[RDX] }
    /* +0xc9595d */ __asm { MOV R8,qword ptr [R8 + 0xc00] }
    /* +0xc95964 */ __asm { MOV R9W,0xbabe }
    /* +0xc95969 */ __asm { XOR R9D,0x21e2 }
    /* +0xc95970 */ __asm { ROL R9W,CL }
    /* +0xc95974 */ __asm { ADD R9D,0x1b56 }
    /* +0xc9597b */ __asm { MOVZX EDX,R9W }
    /* +0xc9597f */ __asm { MOV RAX,qword ptr GS:[RDX] }
    /* +0xc95983 */ __asm { MOV EDX,0x6a8 }
    /* +0xc95988 */ __asm { ADD RAX,RDX }
    /* +0xc9598b */ __asm { MOV RDX,0x592fec121dbe7716 }
    /* +0xc95995 */ __asm { IMUL RDX,qword ptr [RSP + 0xc0] }
    /* +0xc9599e */ __asm { IMUL RAX,R8 }
    /* +0xc959a2 */ __asm { XOR RDX,0x7ffe026c }
    /* +0xc959a9 */ __asm { ROL RDX,0x1d }
    /* +0xc959ad */ __asm { CMP RAX,RDX }
    /* +0xc959b0 */ __asm { JZ 0x7fffa5405be5 }
    /* +0xc959b6 */ __asm { XOR EDX,EDX }
    /* +0xc959b8 */ __asm { INC RSI }
    /* +0xc959bb */ __asm { TEST RDX,RDX }
    /* +0xc959be */ __asm { JNZ 0x7fffa5405c01 }
    /* +0xc959c4 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xc959cb */ __asm { MOV RAX,0x0 }
    /* +0xc959d2 */ __asm { NOP }
    /* +0xc959d3 */ __asm { CMP RSI,R12 }
    /* +0xc959d6 */ __asm { JZ 0x7fffa5405bf0 }
    /* +0xc959dc */ __asm { MOVZX R11D,word ptr [RBP + RSI*0x2] }
    /* +0xc959e2 */ __asm { LEA R9D,[R11 + R14*0x1] }
    /* +0xc959e6 */ __asm { MOV dword ptr [RSP + 0xf8],R9D }
    /* +0xc959ee */ __asm { MOV R9D,dword ptr [R13 + R11*0x4] }
    /* +0xc959f3 */ __asm { MOV EDX,R9D }
    /* +0xc959f6 */ __asm { ADD RDX,RDI }
    /* +0xc959f9 */ __asm { CMP R9D,dword ptr [RSP + 0xd8] }
    /* +0xc95a01 */ __asm { SETC R10B }
    /* +0xc95a05 */ __asm { MOV qword ptr [RSP + 0xe8],RDX }
    /* +0xc95a0d */ __asm { CMP R9D,EBX }
    /* +0xc95a10 */ __asm { SETNC DL }
    /* +0xc95a13 */ __asm { AND DL,R10B }
    /* +0xc95a16 */ __asm { MOV uint8_t ptr [RSP + 0xfc],DL }
    /* +0xc95a1d */ __asm { MOV EDX,dword ptr [R15 + RSI*0x4] }
    /* +0xc95a21 */ __asm { LEA R8,[RDX + RDI*0x1] }
    /* +0xc95a25 */ __asm { TEST RDX,RDX }
    /* +0xc95a28 */ __asm { CMOVZ R8,RDX }
    /* +0xc95a2c */ __asm { MOV qword ptr [RSP + 0xf0],R8 }
    /* +0xc95a34 */ __asm { TEST R8,R8 }
    /* +0xc95a37 */ __asm { JZ 0x7fffa5405bc0 }
    /* +0xc95a3d */ __asm { MOV dword ptr [RSP + 0xc8],0x52658ddc }
    /* +0xc95a48 */ __asm { MOV R9D,dword ptr [RSP + 0xc8] }
    /* +0xc95a50 */ __asm { MOV R11,qword ptr [RSP + 0xf0] }
    /* +0xc95a58 */ __asm { MOVZX EDX,uint8_t ptr [R11] }
}


// ============================================================================
// Function : FUN_7fffa5425e20  |  RVA: 0xcb5e20  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5425e20(int *param_1,uint64_t param_2,int64_t param_3)

{
  if (((*param_1 == -0x3ffffffb) && (*(int64_t *)(param_1 + 4) == 0)) &&
     (*(short *)(param_3 + 0x38) == 0x23)) {
    *(uint64_t *)(param_3 + 0xf8) = *(uint64_t *)(param_3 + 200);
    *(uint64_t *)(param_3 + 0xd8) = 0;
    *(uint16_t *)(param_3 + 0x38) = *(uint16_t *)(param_3 + 0xb0);
    return 0;
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5425ec0  |  RVA: 0xcb5ec0  |  Size: 659 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5425ec0(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint64_t in_RAX;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  
  uRam00007fffa47854bb = 0;
  uRam00007fffa47854e1 = 0;
  uRam00007fffa47854e9 = 0;
  uRam00007fffa47854d1 = 0;
  uRam00007fffa47854d9 = 0;
  uRam00007fffa47854c1 = 0;
  uRam00007fffa47854c9 = 0;
  uRam00007fffa47854f5 = 0;
  uVar1 = rdtsc();
  lVar5 = (uVar1 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) *
          0xcbae9e49d3f91df + 1;
  lVar4 = 0;
  while( true ) {
    lVar5 = lVar5 * 0xcbae9e49d3f91df + 1;
    *(char *)(lVar4 + 0x7fffa47854b9) = (char)((uint64_t)lVar5 >> 0x20);
    lVar5 = lVar5 * 0xcbae9e49d3f91df + 1;
    *(char *)(lVar4 + 0x7fffa47854ba) = (char)((uint64_t)lVar5 >> 0x20);
    lVar5 = lVar5 * 0xcbae9e49d3f91df + 1;
    *(char *)(lVar4 + 0x7fffa47854bb) = (char)((uint64_t)lVar5 >> 0x20);
    if (((lVar4 + 0x3b860aabU) * 0x2000 | lVar4 + 0x3b860aabU >> 0x33) == 0x770c15de000) break;
    lVar5 = lVar5 * 0xcbae9e49d3f91df + 1;
    *(char *)(lVar4 + 0x7fffa47854bc) = (char)((uint64_t)lVar5 >> 0x20);
    lVar4 = lVar4 + 4;
  }
  bVar2 = (uint8_t)lVar4 & 0xf;
  bVar3 = (uint8_t)lVar4 & 0x1f;
  iVar7 = (uint32_t)lVar4 + 1;
  lVar5 = (int64_t)(int)(iVar7 * 0x30000000 | (uint32_t)(iVar7 * 0x3f126603) >> 4);
  uVar1 = (uint64_t)
          ((uint32_t)*(uint8_t *)(((int64_t)(iVar7 * -0x2a8211e7) ^ 0x750e2b98U) + 0x7fffa4794d96) *
           0x2aaaaaab + 0x2aaaaaab) * 6;
  uVar6 = uVar1 >> 0x20;
  *(uint32_t *)(lVar5 + 0x7fffa478fcd5 + uVar6 * 8) =
       *(uint32_t *)
        ((int64_t)(int)(0x7ffff70c << bVar3 | 0x7ffff70cU >> 0x20 - bVar3) + 0x7fffa478e42e);
  *(uint32_t *)(lVar5 + 0x7fffa478fcd9 + uVar6 * 8) =
       *(uint32_t *)((int64_t)(int)((uint32_t)lVar4 ^ 0xffff4191) + 0x7fffa4791324);
  *(char *)((int64_t)(short)(-0x709 << bVar2 | 0xf8f7U >> 0x10 - bVar2) + 0x7fffa478c53c) =
       (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5426160  |  RVA: 0xcb6160  |  Size: 1 bytes
// Callers  : FUN_7fffa54a4560@0xd34560
// Callees  : none
// ============================================================================
void FUN_7fffa5426160(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5426190  |  RVA: 0xcb6190  |  Size: 2480 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5426190(void) {
    /* +0xcb6190 */ __asm { PUSH RDI }
    /* +0xcb6191 */ __asm { PUSH R12 }
    /* +0xcb6193 */ __asm { PUSH RBP }
    /* +0xcb6194 */ __asm { PUSH RBX }
    /* +0xcb6195 */ __asm { PUSH R15 }
    /* +0xcb6197 */ __asm { PUSH R13 }
    /* +0xcb6199 */ __asm { PUSH RSI }
    /* +0xcb619a */ __asm { PUSH R14 }
    /* +0xcb619c */ __asm { SUB RSP,0x98 }
    /* +0xcb61a3 */ __asm { MOV RDI,RDX }
    /* +0xcb61a6 */ __asm { MOV RBX,RAX }
    /* +0xcb61a9 */ __asm { MOV R12,R11 }
    /* +0xcb61ac */ __asm { MOV R14D,R10D }
    /* +0xcb61af */ __asm { MOV RBP,qword ptr [RSP + 0x128] }
    /* +0xcb61b7 */ __asm { MOV R10,qword ptr [RSP + 0x118] }
    /* +0xcb61bf */ __asm { RDTSC }
    /* +0xcb61c1 */ __asm { SHL RDX,0x20 }
    /* +0xcb61c5 */ __asm { OR RDX,RAX }
    /* +0xcb61c8 */ __asm { MOV EAX,0xcb4df1d4 }
    /* +0xcb61cd */ __asm { MOV RSI,-0x30ebf64fafbc6efb }
    /* +0xcb61d7 */ __asm { IMUL RSI,RDX }
    /* +0xcb61db */ __asm { MOV R11D,EBP }
    /* +0xcb61de */ __asm { OR R11D,0x1 }
    /* +0xcb61e2 */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xcb61ec */ __asm { ADD RCX,RSI }
    /* +0xcb61ef */ __asm { MOV RDX,RCX }
    /* +0xcb61f2 */ __asm { SHR RDX,0x2d }
    /* +0xcb61f6 */ __asm { MOV RSI,R10 }
    /* +0xcb61f9 */ __asm { ROL RSI,0x8 }
    /* +0xcb61fd */ __asm { MOVQ XMM2,RSI }
    /* +0xcb6202 */ __asm { MOV RSI,R10 }
    /* +0xcb6205 */ __asm { ROL RSI,0x7 }
    /* +0xcb6209 */ __asm { ROL R10,0x35 }
    /* +0xcb620d */ __asm { XOR R10,RSI }
    /* +0xcb6210 */ __asm { MOVQ XMM0,R10 }
    /* +0xcb6215 */ __asm { PXOR XMM0,XMM2 }
    /* +0xcb6219 */ __asm { MOVQ R10,XMM0 }
    /* +0xcb621e */ __asm { MOV RSI,R10 }
    /* +0xcb6221 */ __asm { ROL RSI,0x3e }
    /* +0xcb6225 */ __asm { MOV R15,R10 }
    /* +0xcb6228 */ __asm { ROL R15,0x1a }
    /* +0xcb622c */ __asm { XOR R15,RSI }
    /* +0xcb622f */ __asm { XOR R15,R10 }
    /* +0xcb6232 */ __asm { MOV R10,R15 }
    /* +0xcb6235 */ __asm { ROL R10,0x3c }
    /* +0xcb6239 */ __asm { MOV RSI,R15 }
    /* +0xcb623c */ __asm { ROL RSI,0x34 }
    /* +0xcb6240 */ __asm { XOR RSI,R10 }
    /* +0xcb6243 */ __asm { MOV R10,RCX }
    /* +0xcb6246 */ __asm { SHR R10,0x1b }
    /* +0xcb624a */ __asm { ROL R8,0x3c }
    /* +0xcb624e */ __asm { XOR R8,0x4922944c }
    /* +0xcb6255 */ __asm { XOR RSI,R15 }
    /* +0xcb6258 */ __asm { MOV R15,RSI }
    /* +0xcb625b */ __asm { ROL R15,0x28 }
    /* +0xcb625f */ __asm { XOR R10D,EDX }
    /* +0xcb6262 */ __asm { MOV R13,RSI }
    /* +0xcb6265 */ __asm { ROL R13,0x38 }
    /* +0xcb6269 */ __asm { XOR R13,R15 }
    /* +0xcb626c */ __asm { MOV EDX,0x673b40de }
    /* +0xcb6271 */ __asm { SUB EDX,EBP }
    /* +0xcb6273 */ __asm { ADD EDX,0x4a98979d }
    /* +0xcb6279 */ __asm { SHR RCX,0x3b }
    /* +0xcb627d */ __asm { ROR R10D,CL }
    /* +0xcb6280 */ __asm { XOR R13,RSI }
    /* +0xcb6283 */ __asm { MOV RCX,R13 }
    /* +0xcb6286 */ __asm { ROL RCX,0x10 }
    /* +0xcb628a */ __asm { AND R10D,0x3 }
    /* +0xcb628e */ __asm { MOV RSI,R13 }
    /* +0xcb6291 */ __asm { XOR RSI,RCX }
    /* +0xcb6294 */ __asm { IMUL RCX,R13 }
    /* +0xcb6298 */ __asm { ROL R13,0x30 }
    /* +0xcb629c */ __asm { ADD EAX,0xbe6348b9 }
    /* +0xcb62a1 */ __asm { IMUL EAX,R11D }
    /* +0xcb62a5 */ __asm { CDQE }
    /* +0xcb62a7 */ __asm { CMP RAX,RDX }
    /* +0xcb62aa */ __asm { MOV R15,qword ptr [RSP + 0x120] }
    /* +0xcb62b2 */ __asm { CMOVA RCX,RSI }
    /* +0xcb62b6 */ __asm { MOVQ XMM2,R13 }
    /* +0xcb62bb */ __asm { MOV R13D,dword ptr [RSP + 0x100] }
    /* +0xcb62c3 */ __asm { MOVQ XMM0,RCX }
    /* +0xcb62c8 */ __asm { PXOR XMM0,XMM2 }
    /* +0xcb62cc */ __asm { MOVQ RSI,XMM0 }
    /* +0xcb62d1 */ __asm { CMP R10D,0x2 }
    /* +0xcb62d5 */ __asm { JNC 0x7fffa5426390 }
    /* +0xcb62db */ __asm { CMP R10D,0x1 }
    /* +0xcb62df */ __asm { JZ 0x7fffa54263fc }
    /* +0xcb62e5 */ __asm { MOV R11D,0xaebaf1c7 }
    /* +0xcb62eb */ __asm { XOR R11D,EBP }
    /* +0xcb62ee */ __asm { RDTSC }
    /* +0xcb62f0 */ __asm { SHL RDX,0x20 }
    /* +0xcb62f4 */ __asm { OR RDX,RAX }
    /* +0xcb62f7 */ __asm { MOV RCX,0x7facc0f7a00541bd }
    /* +0xcb6301 */ __asm { IMUL RCX,RDX }
    /* +0xcb6305 */ __asm { MOV RAX,0x6bedae38cb40c3c6 }
    /* +0xcb630f */ __asm { ADD RAX,RCX }
    /* +0xcb6312 */ __asm { MOV R10,RAX }
    /* +0xcb6315 */ __asm { SHR R10,0x1b }
    /* +0xcb6319 */ __asm { MOV RCX,RAX }
    /* +0xcb631c */ __asm { SHR RCX,0x3b }
    /* +0xcb6320 */ __asm { SHR RAX,0x2d }
    /* +0xcb6324 */ __asm { XOR R10D,EAX }
    /* +0xcb6327 */ __asm { ROR R10D,CL }
    /* +0xcb632a */ __asm { NOT R11D }
    /* +0xcb632d */ __asm { MOV dword ptr [RSP + 0x80],R11D }
    /* +0xcb6335 */ __asm { MOV EDX,dword ptr [RSP + 0x80] }
    /* +0xcb633c */ __asm { CMP R10D,0x10f525 }
    /* +0xcb6343 */ __asm { JA 0x7fffa5426363 }
    /* +0xcb6345 */ __asm { MOV dword ptr [RSP + 0x80],0x1529da09 }
    /* +0xcb6350 */ __asm { MOV EDX,dword ptr [RSP + 0x80] }
    /* +0xcb6357 */ __asm { CMP EDX,0x1688c813 }
    /* +0xcb635d */ __asm { JNC 0x7fffa5426f60 }
    /* +0xcb6363 */ __asm { LEA R11,[0x7fffa47807ea] }
    /* +0xcb636a */ __asm { MOV RDX,0x112b469664a334ae }
    /* +0xcb6374 */ __asm { CMP R11,RDX }
    /* +0xcb6377 */ __asm { NOP }
    /* +0xcb6378 */ __asm { NOP }
    /* +0xcb6379 */ __asm { NOP }
    /* +0xcb637a */ __asm { NOP }
    /* +0xcb637b */ __asm { NOP }
    /* +0xcb637c */ __asm { MOV qword ptr [RSP + 0x80],R10 }
    /* +0xcb6384 */ __asm { MOV EAX,dword ptr [R11 + 0x468a] }
    /* +0xcb638b */ __asm { JMP 0x7fffa5426e98 }
    /* +0xcb6390 */ __asm { MOV DX,0xae55 }
    /* +0xcb6394 */ __asm { MOV EAX,0xffffae58 }
    /* +0xcb6399 */ __asm { SUB EAX,EDX }
    /* +0xcb639b */ __asm { MOVZX EDX,AX }
    /* +0xcb639e */ __asm { CMP R10D,EDX }
    /* +0xcb63a1 */ __asm { JC 0x7fffa5426834 }
    /* +0xcb63a7 */ __asm { MOV R11D,0x9a8c4f90 }
    /* +0xcb63ad */ __asm { MOV RDX,-0x727f032028b79eab }
    /* +0xcb63b7 */ __asm { CMP R11,RDX }
    /* +0xcb63ba */ __asm { JZ 0x7fffa5426e50 }
    /* +0xcb63c0 */ __asm { TEST uint8_t ptr [R11 + -0x1a8e4d50],0x1 }
    /* +0xcb63c8 */ __asm { JZ 0x7fffa5426e61 }
    /* +0xcb63ce */ __asm { LEA R11,[0x7fffa47bc4e3] }
    /* +0xcb63d5 */ __asm { MOV RDX,0x1baffaecd29dfb6e }
    /* +0xcb63df */ __asm { CMP R11,RDX }
    /* +0xcb63e2 */ __asm { JZ 0x7fffa5426f50 }
    /* +0xcb63e8 */ __asm { MOV qword ptr [RSP + 0x80],R10 }
    /* +0xcb63f0 */ __asm { MOV EAX,dword ptr [R11 + 0xac1] }
    /* +0xcb63f7 */ __asm { JMP 0x7fffa5426e98 }
    /* +0xcb63fc */ __asm { LEA R11,[0x7fffa47c02f8] }
    /* +0xcb6403 */ __asm { MOVZX EAX,uint8_t ptr [R11 + -0x3baf] }
    /* +0xcb640b */ __asm { MOVZX ECX,uint8_t ptr [R11 + RAX*0x4 + -0x3ba9] }
    /* +0xcb6414 */ __asm { NOT CL }
    /* +0xcb6416 */ __asm { ROL CL,0x5 }
    /* +0xcb6419 */ __asm { MOV uint8_t ptr [RSP + 0x80],CL }
    /* +0xcb6420 */ __asm { MOVZX ECX,uint8_t ptr [R11 + RAX*0x4 + -0x3ba8] }
    /* +0xcb6429 */ __asm { NOT CL }
    /* +0xcb642b */ __asm { ROL CL,0x5 }
    /* +0xcb642e */ __asm { MOV uint8_t ptr [RSP + 0x81],CL }
    /* +0xcb6435 */ __asm { MOVZX ECX,uint8_t ptr [R11 + RAX*0x4 + -0x3ba7] }
    /* +0xcb643e */ __asm { NOT CL }
    /* +0xcb6440 */ __asm { ROL CL,0x5 }
    /* +0xcb6443 */ __asm { MOV uint8_t ptr [RSP + 0x82],CL }
    /* +0xcb644a */ __asm { MOVZX ECX,uint8_t ptr [R11 + RAX*0x4 + -0x3ba6] }
    /* +0xcb6453 */ __asm { NOT CL }
    /* +0xcb6455 */ __asm { ROL CL,0x5 }
    /* +0xcb6458 */ __asm { MOV uint8_t ptr [RSP + 0x83],CL }
    /* +0xcb645f */ __asm { MOV R11D,0x9102c3cc }
    /* +0xcb6465 */ __asm { XOR R11D,dword ptr [RSP + 0x80] }
    /* +0xcb646d */ __asm { RDTSC }
    /* +0xcb646f */ __asm { SHL RDX,0x20 }
    /* +0xcb6473 */ __asm { OR RDX,RAX }
    /* +0xcb6476 */ __asm { BT R11D,R11D }
    /* +0xcb647a */ __asm { JNC 0x7fffa5426bc8 }
    /* +0xcb6480 */ __asm { MOV R11,-0x83d143f70980d4b }
    /* +0xcb648a */ __asm { IMUL RDX,R11 }
    /* +0xcb648e */ __asm { MOV R11,0x72711f8bc90b796e }
    /* +0xcb6498 */ __asm { ADD R11,RDX }
    /* +0xcb649b */ __asm { MOV RCX,R11 }
    /* +0xcb649e */ __asm { MOV RAX,R11 }
    /* +0xcb64a1 */ __asm { SHR RAX,0x1b }
    /* +0xcb64a5 */ __asm { SHR R11,0x2d }
    /* +0xcb64a9 */ __asm { XOR R11D,EAX }
    /* +0xcb64ac */ __asm { NOP }
    /* +0xcb64ad */ __asm { MOV R10,0x0 }
    /* +0xcb64b4 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xcb64bb */ __asm { SHR RCX,0x3b }
    /* +0xcb64bf */ __asm { ROR R11D,CL }
    /* +0xcb64c2 */ __asm { MOV dword ptr [RSP + 0x80],0x5fbc9104 }
    /* +0xcb64cd */ __asm { MOV EDX,dword ptr [RSP + 0x80] }
    /* +0xcb64d4 */ __asm { CMP EDX,0x31c7cfa6 }
    /* +0xcb64da */ __asm { NOP }
    /* +0xcb64db */ __asm { NOP }
    /* +0xcb64dc */ __asm { NOP }
    /* +0xcb64dd */ __asm { NOP }
    /* +0xcb64de */ __asm { NOP }
    /* +0xcb64df */ __asm { NOP }
    /* +0xcb64e0 */ __asm { NOP }
    /* +0xcb64e1 */ __asm { NOP }
    /* +0xcb64e2 */ __asm { NOP }
    /* +0xcb64e3 */ __asm { NOP }
    /* +0xcb64e4 */ __asm { NOP }
    /* +0xcb64e5 */ __asm { NOP }
    /* +0xcb64e6 */ __asm { NOP }
    /* +0xcb64e7 */ __asm { NOP }
    /* +0xcb64e8 */ __asm { NOP }
    /* +0xcb64e9 */ __asm { NOP }
    /* +0xcb64ea */ __asm { NOP }
    /* +0xcb6834 */ __asm { MOV R10D,0xbfc44541 }
    /* +0xcb683a */ __asm { MOV RDX,0x1a4347f81 }
    /* +0xcb6844 */ __asm { ADD RDX,R10 }
    /* +0xcb6847 */ __asm { MOV RCX,0x5a91df7e4314962b }
    /* +0xcb6851 */ __asm { CMP RDX,RCX }
    /* +0xcb6854 */ __asm { JZ 0x7fffa5426f48 }
    /* +0xcb685a */ __asm { MOV EDX,0xb0a78a16 }
    /* +0xcb685f */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xcb6866 */ __asm { MOV RAX,0x0 }
    /* +0xcb686d */ __asm { MOV AX,0x4446 }
    /* +0xcb6871 */ __asm { ADD EAX,0x3a3b }
    /* +0xcb6876 */ __asm { MOV ECX,EBP }
    /* +0xcb6878 */ __asm { ROR AX,CL }
    /* +0xcb687b */ __asm { MOVD XMM2,EDX }
    /* +0xcb687f */ __asm { ADD EAX,0x7e82 }
    /* +0xcb6884 */ __asm { MOVZX EDX,AX }
    /* +0xcb6887 */ __asm { LEA EAX,[RBP + 0x1dbe5831] }
    /* +0xcb688d */ __asm { MOVD XMM0,EAX }
    /* +0xcb6891 */ __asm { PADDD XMM0,XMM2 }
    /* +0xcb6895 */ __asm { MOVD EAX,XMM0 }
    /* +0xcb6899 */ __asm { CDQE }
    /* +0xcb689b */ __asm { MOV EAX,dword ptr [R10 + RAX*0x1 + 0x240] }
    /* +0xcb68a3 */ __asm { AND EAX,0x1 }
    /* +0xcb68a6 */ __asm { CMP EAX,EDX }
    /* +0xcb68a8 */ __asm { JNZ 0x7fffa54268d8 }
    /* +0xcb68aa */ __asm { LEA R11,[0x7fffa47bf71b] }
    /* +0xcb68b1 */ __asm { MOV RDX,0x5970ba5b75e764d8 }
    /* +0xcb68bb */ __asm { CMP R11,RDX }
    /* +0xcb68be */ __asm { JZ 0x7fffa5426f68 }
    /* +0xcb68c4 */ __asm { MOV qword ptr [RSP + 0x80],R10 }
    /* +0xcb68cc */ __asm { MOV EAX,dword ptr [R11 + -0x322b] }
    /* +0xcb68d3 */ __asm { JMP 0x7fffa5426e98 }
    /* +0xcb68d8 */ __asm { RDTSC }
    /* +0xcb68da */ __asm { SHL RDX,0x20 }
    /* +0xcb68de */ __asm { OR RDX,RAX }
    /* +0xcb68e1 */ __asm { MOV RCX,-0x5a46117eacb056b3 }
    /* +0xcb68eb */ __asm { IMUL RCX,RDX }
    /* +0xcb68ef */ __asm { MOV EDX,0x8884189d }
    /* +0xcb68f4 */ __asm { MOV RAX,0x7a40f70a01c38522 }
    /* +0xcb68fe */ __asm { ADD RAX,RCX }
    /* +0xcb6901 */ __asm { MOV R10,RAX }
    /* +0xcb6904 */ __asm { SHR R10,0x2d }
    /* +0xcb6908 */ __asm { MOV RCX,RAX }
    /* +0xcb690b */ __asm { SHR RCX,0x3b }
    /* +0xcb690f */ __asm { SHR RAX,0x1b }
    /* +0xcb6913 */ __asm { XOR EAX,R10D }
    /* +0xcb6916 */ __asm { ROR EAX,CL }
    /* +0xcb6918 */ __asm { SUB EDX,EBP }
    /* +0xcb691a */ __asm { ADD EDX,0x6f58c09c }
    /* +0xcb6920 */ __asm { ROL EDX,0x1 }
    /* +0xcb6922 */ __asm { MOV dword ptr [RSP + 0x80],EDX }
    /* +0xcb6929 */ __asm { MOV EDX,dword ptr [RSP + 0x80] }
    /* +0xcb6930 */ __asm { AND EDX,0x1 }
    /* +0xcb6933 */ __asm { MOV R10W,0xed37 }
    /* +0xcb6938 */ __asm { XOR R10D,0x6e95 }
    /* +0xcb693f */ __asm { ADD R10D,0x7c5e }
    /* +0xcb6946 */ __asm { MOVZX R10D,R10W }
    /* +0xcb694a */ __asm { CMP EDX,R10D }
    /* +0xcb694d */ __asm { NOP }
    /* +0xcb694e */ __asm { NOP }
    /* +0xcb694f */ __asm { NOP }
    /* +0xcb6950 */ __asm { NOP }
    /* +0xcb6951 */ __asm { NOP }
    /* +0xcb6952 */ __asm { CMP EAX,0x44e9b7b }
    /* +0xcb6957 */ __asm { JA 0x7fffa5426b5a }
    /* +0xcb695d */ __asm { MOV EDX,0x7046ffbb }
    /* +0xcb6962 */ __asm { IMUL EDX,EDX,0x486c14ad }
    /* +0xcb6968 */ __asm { MOV ECX,EBP }
    /* +0xcb696a */ __asm { ROL EDX,CL }
    /* +0xcb696c */ __asm { ROL EDX,0x1 }
    /* +0xcb696e */ __asm { MOV dword ptr [RSP + 0x80],EDX }
    /* +0xcb6975 */ __asm { MOV EDX,dword ptr [RSP + 0x80] }
    /* +0xcb697c */ __asm { TEST DL,0x1 }
    /* +0xcb697f */ __asm { NOP }
    /* +0xcb6980 */ __asm { NOP }
    /* +0xcb6981 */ __asm { NOP }
    /* +0xcb6982 */ __asm { NOP }
    /* +0xcb6983 */ __asm { NOP }
    /* +0xcb6984 */ __asm { NOP }
    /* +0xcb6985 */ __asm { NOP }
    /* +0xcb6986 */ __asm { NOP }
    /* +0xcb6987 */ __asm { MOV R10D,0x9a152fa5 }
    /* +0xcb698d */ __asm { MOV RDX,0x1ee50db1f00a6811 }
    /* +0xcb6997 */ __asm { CMP R10,RDX }
    /* +0xcb699a */ __asm { NOP }
    /* +0xcb699b */ __asm { NOP }
    /* +0xcb699c */ __asm { NOP }
    /* +0xcb699d */ __asm { NOP }
    /* +0xcb699e */ __asm { NOP }
    /* +0xcb699f */ __asm { LEA RDX,[R10 + -0x1a172fa5] }
    /* +0xcb69a6 */ __asm { MOV EAX,0x3c5c227a }
    /* +0xcb69ab */ __asm { NOT EAX }
    /* +0xcb69ad */ __asm { MOV ECX,0x4f864959 }
    /* +0xcb69b2 */ __asm { ADD ECX,0xc811c3c7 }
    /* +0xcb69b8 */ __asm { ADD EAX,EBP }
    /* +0xcb69ba */ __asm { ROL EAX,0x16 }
    /* +0xcb69bd */ __asm { IMUL ECX,R11D }
    /* +0xcb69c1 */ __asm { NOT ECX }
    /* +0xcb69c3 */ __asm { MOVSXD R11,ECX }
    /* +0xcb69c6 */ __asm { OR R10,-0x1a172fa5 }
    /* +0xcb69cd */ __asm { CMP R11,RAX }
    /* +0xcb69d0 */ __asm { CMOVNC R10,RDX }
    /* +0xcb69d4 */ __asm { MOV R11,qword ptr [R10 + 0x8] }
    /* +0xcb69d8 */ __asm { MOV RDX,-0x3c54be7d1cf15349 }
    /* +0xcb69e2 */ __asm { MOV RAX,R11 }
    /* +0xcb69e5 */ __asm { MUL RDX }
    /* +0xcb69e8 */ __asm { MOV RCX,RDX }
    /* +0xcb69eb */ __asm { MOV EDX,0x1470aeb }
    /* +0xcb69f0 */ __asm { MOV RAX,R11 }
    /* +0xcb69f3 */ __asm { MUL RDX }
    /* +0xcb69f6 */ __asm { ADD RAX,RCX }
    /* +0xcb69f9 */ __asm { ADC RDX,0x0 }
    /* +0xcb69fd */ __asm { TEST DL,0x1 }
    /* +0xcb6a00 */ __asm { JZ 0x7fffa5426b5a }
    /* +0xcb6a06 */ __asm { PXOR XMM2,XMM2 }
    /* +0xcb6a0a */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM2 }
    /* +0xcb6a13 */ __asm { MOV dword ptr [RSP + 0x78],0xadd81344 }
    /* +0xcb6a1b */ __asm { MOV EDX,dword ptr [RSP + 0x78] }
    /* +0xcb6a1f */ __asm { MOV dword ptr [RSP + 0x80],0x0 }
    /* +0xcb6a2a */ __asm { MOV dword ptr [RSP + 0x78],0x303ff0ff }
    /* +0xcb6a32 */ __asm { MOV EAX,dword ptr [RSP + 0x78] }
    /* +0xcb6a36 */ __asm { MOV R11D,0xae5116fd }
    /* +0xcb6a3c */ __asm { XOR EDX,EDX }
    /* +0xcb6a3e */ __asm { AND EAX,0x1 }
    /* +0xcb6a41 */ __asm { SETZ DL }
    /* +0xcb6a44 */ __asm { SUB R11D,EBP }
    /* +0xcb6a47 */ __asm { ADD R11D,0x4533c40f }
    /* +0xcb6a4e */ __asm { MOV R10W,0xd85b }
    /* +0xcb6a53 */ __asm { ADD R10D,0x27a5 }
    /* +0xcb6a5a */ __asm { ROL R10W,0x7 }
    /* +0xcb6a5f */ __asm { MOV ECX,EBP }
    /* +0xcb6a61 */ __asm { ROL R10W,CL }
    /* +0xcb6a65 */ __asm { MOVZX R10D,R10W }
    /* +0xcb6a69 */ __asm { XOR R13D,R13D }
    /* +0xcb6a6c */ __asm { CMP EAX,R10D }
    /* +0xcb6a6f */ __asm { SETC R13B }
    /* +0xcb6a73 */ __asm { MOV EAX,0xbf0152fc }
    /* +0xcb6a78 */ __asm { ADD EAX,0xc72e50cf }
    /* +0xcb6a7d */ __asm { ROL EAX,0xe }
    /* +0xcb6a80 */ __asm { ROL EAX,CL }
    /* +0xcb6a82 */ __asm { MOVSXD RCX,EAX }
    /* +0xcb6a85 */ __asm { CMP R11,RCX }
    /* +0xcb6a88 */ __asm { CMOVLE EDX,R13D }
    /* +0xcb6a8c */ __asm { CMP DL,0x1 }
    /* +0xcb6a8f */ __asm { NOP }
    /* +0xcb6a90 */ __asm { NOP }
    /* +0xcb6a91 */ __asm { NOP }
    /* +0xcb6a92 */ __asm { NOP }
    /* +0xcb6a93 */ __asm { NOP }
    /* +0xcb6a94 */ __asm { NOP }
    /* +0xcb6a95 */ __asm { NOP }
    /* +0xcb6a96 */ __asm { NOP }
    /* +0xcb6a97 */ __asm { NOP }
    /* +0xcb6a98 */ __asm { NOP }
    /* +0xcb6a99 */ __asm { NOP }
    /* +0xcb6a9a */ __asm { NOP }
    /* +0xcb6a9b */ __asm { NOP }
    /* +0xcb6a9c */ __asm { NOP }
    /* +0xcb6a9d */ __asm { NOP }
    /* +0xcb6a9e */ __asm { NOP }
    /* +0xcb6a9f */ __asm { NOP }
    /* +0xcb6b5a */ __asm { LEA RAX,[0x7fffa478762c] }
    /* +0xcb6b61 */ __asm { MOV R11,RAX }
    /* +0xcb6b64 */ __asm { NOT R11 }
    /* +0xcb6b67 */ __asm { MOV RDX,0x218ba110649b5f7 }
    /* +0xcb6b71 */ __asm { MOV RCX,0x80852a49ce510fd }
    /* +0xcb6b7b */ __asm { IMUL RCX,R11 }
    /* +0xcb6b7f */ __asm { IMUL R11,RDX,-0x17f4bd6f }
    /* +0xcb6b86 */ __asm { ROL R11,0x17 }
    /* +0xcb6b8a */ __asm { XOR R11,RBP }
    /* +0xcb6b8d */ __asm { CMP R11,RCX }
    /* +0xcb6b90 */ __asm { NOP }
    /* +0xcb6b91 */ __asm { NOP }
    /* +0xcb6b92 */ __asm { NOP }
    /* +0xcb6b93 */ __asm { NOP }
    /* +0xcb6b94 */ __asm { NOP }
    /* +0xcb6b95 */ __asm { MOVD XMM2,EBP }
    /* +0xcb6b99 */ __asm { MOV DX,0x3fa8 }
    /* +0xcb6b9d */ __asm { NOT EDX }
    /* +0xcb6b9f */ __asm { MOVD XMM0,EDX }
    /* +0xcb6ba3 */ __asm { PADDW XMM0,XMM2 }
    /* +0xcb6ba7 */ __asm { MOV qword ptr [RSP + 0x80],R11 }
    /* +0xcb6baf */ __asm { MOVD EDX,XMM0 }
    /* +0xcb6bb3 */ __asm { ROL DX,0x8 }
    /* +0xcb6bb7 */ __asm { MOVSX R11,DX }
    /* +0xcb6bbb */ __asm { MOV EAX,dword ptr [R11 + RAX*0x1 + 0xbc] }
    /* +0xcb6bc3 */ __asm { JMP 0x7fffa5426e98 }
    /* +0xcb6bc8 */ __asm { MOV R11,-0x4b061743ec0c107b }
    /* +0xcb6bd2 */ __asm { IMUL RDX,R11 }
    /* +0xcb6bd6 */ __asm { MOV RCX,-0xc33a2dab77dc88e }
    /* +0xcb6be0 */ __asm { ADD RCX,RDX }
    /* +0xcb6be3 */ __asm { MOV R11,RCX }
    /* +0xcb6be6 */ __asm { SHR R11,0x2d }
    /* +0xcb6bea */ __asm { MOV RAX,RCX }
    /* +0xcb6bed */ __asm { SHR RAX,0x1b }
    /* +0xcb6bf1 */ __asm { SHR RCX,0x3b }
    /* +0xcb6bf5 */ __asm { XOR R11D,EAX }
    /* +0xcb6bf8 */ __asm { ROR R11D,CL }
    /* +0xcb6bfb */ __asm { MOV dword ptr [RSP + 0x80],0x2f4b49a6 }
    /* +0xcb6c06 */ __asm { MOV EDX,dword ptr [RSP + 0x80] }
    /* +0xcb6c0d */ __asm { MOV EAX,0xf08ca35d }
    /* +0xcb6c12 */ __asm { LEA EDX,[RAX + RBP*0x1] }
    /* +0xcb6c15 */ __asm { ADD EDX,0x1eb7599b }
    /* +0xcb6c1b */ __asm { ROL EDX,0x1c }
    /* +0xcb6c1e */ __asm { CMP R11D,EDX }
    /* +0xcb6c21 */ __asm { JNC 0x7fffa5426e10 }
    /* +0xcb6c27 */ __asm { MOV DX,0x4432 }
    /* +0xcb6c2b */ __asm { MOV EAX,EBP }
    /* +0xcb6c2d */ __asm { OR EAX,0x1 }
    /* +0xcb6c30 */ __asm { MOVD XMM2,EAX }
    /* +0xcb6c34 */ __asm { MOVD XMM0,EDX }
    /* +0xcb6c38 */ __asm { PMULLW XMM0,XMM2 }
    /* +0xcb6c3c */ __asm { MOVD EDX,XMM0 }
    /* +0xcb6c40 */ __asm { ADD EDX,0xffff95de }
    /* +0xcb6c46 */ __asm { ROL DX,0xe }
    /* +0xcb6c4a */ __asm { MOVZX R11D,DX }
    /* +0xcb6c4e */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xcb6c52 */ __asm { MOV RDX,-0x13668722ab7028cd }
    /* +0xcb6c5c */ __asm { CMP qword ptr [R11 + 0x30],RDX }
    /* +0xcb6c60 */ __asm { NOP }
    /* +0xcb6c61 */ __asm { NOP }
    /* +0xcb6c62 */ __asm { NOP }
    /* +0xcb6c63 */ __asm { NOP }
    /* +0xcb6c64 */ __asm { NOP }
    /* +0xcb6c65 */ __asm { NOP }
    /* +0xcb6c66 */ __asm { NOP }
    /* +0xcb6c67 */ __asm { NOP }
    /* +0xcb6c68 */ __asm { NOP }
    /* +0xcb6c69 */ __asm { NOP }
    /* +0xcb6c6a */ __asm { NOP }
    /* +0xcb6c6b */ __asm { NOP }
    /* +0xcb6c6c */ __asm { NOP }
    /* +0xcb6c6d */ __asm { NOP }
    /* +0xcb6c6e */ __asm { NOP }
    /* +0xcb6c6f */ __asm { NOP }
    /* +0xcb6c70 */ __asm { MOV R11,0x0 }
    /* +0xcb6c77 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xcb6c7e */ __asm { NOP }
    /* +0xcb6c80 */ __asm { MOV R11D,0xd0a851c6 }
    /* +0xcb6c86 */ __asm { MOV EDX,0x34f29d98 }
    /* +0xcb6c8b */ __asm { SUB RDX,R11 }
    /* +0xcb6c8e */ __asm { MOV RCX,0x10e071adc938792 }
    /* +0xcb6c98 */ __asm { MOV R10,-0xd943275a }
    /* +0xcb6ca2 */ __asm { ADD R10,RCX }
    /* +0xcb6ca5 */ __asm { MOV ECX,EBP }
    /* +0xcb6ca7 */ __asm { ROR R10,CL }
    /* +0xcb6caa */ __asm { XOR R10,RDX }
    /* +0xcb6cad */ __asm { CMP R10,0x2c53a28c }
    /* +0xcb6cb4 */ __asm { JNZ 0x7fffa5426cd1 }
    /* +0xcb6cb6 */ __asm { MOV R10,0x0 }
    /* +0xcb6cbd */ __asm { NOP }
    /* +0xcb6cbe */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xcb6cc5 */ __asm { MOV AH,0xc7 }
    /* +0xcb6cc7 */ __asm { STD }
    /* +0xcb6cc8 */ __asm { MOV [0xfa675d038d3a6b23],EAX }
    /* +0xcb6cd1 */ __asm { MOV EDX,0xa1986593 }
    /* +0xcb6cd6 */ __asm { IMUL EDX,EDX,0x5c469ec1 }
    /* +0xcb6cdc */ __asm { SUB EDX,EBP }
    /* +0xcb6cde */ __asm { ADD EDX,0x246238df }
    /* +0xcb6ce4 */ __asm { MOVSXD RAX,EDX }
    /* +0xcb6ce7 */ __asm { CMP dword ptr [R11 + RAX*0x1 + 0x3c0],0xd }
    /* +0xcb6cf0 */ __asm { JC 0x7fffa5426e10 }
    /* +0xcb6cf6 */ __asm { PXOR XMM2,XMM2 }
    /* +0xcb6cfa */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM2 }
    /* +0xcb6d03 */ __asm { MOV dword ptr [RSP + 0x78],0xdc0b707a }
    /* +0xcb6d0b */ __asm { MOV EDX,dword ptr [RSP + 0x78] }
    /* +0xcb6d0f */ __asm { MOV DX,0xd5ee }
    /* +0xcb6d13 */ __asm { ADD EDX,EBP }
    /* +0xcb6d15 */ __asm { ROL DX,0x7 }
    /* +0xcb6d19 */ __asm { MOV dword ptr [RSP + 0x80],0x0 }
    /* +0xcb6d24 */ __asm { XOR EDX,0x3337 }
    /* +0xcb6d2a */ __asm { MOVZX R11D,DX }
    /* +0xcb6d2e */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xcb6d32 */ __asm { MOV DX,0x7a63 }
    /* +0xcb6d36 */ __asm { MOV R11,qword ptr [R11 + 0x6e0] }
    /* +0xcb6d3d */ __asm { XOR EDX,0x1e1 }
    /* +0xcb6d43 */ __asm { ROL DX,0xc }
    /* +0xcb6d47 */ __asm { ADD EDX,EBP }
    /* +0xcb6d49 */ __asm { MOVZX EAX,DX }
    /* +0xcb6d4c */ __asm { SUB R11,qword ptr GS:[RAX] }
    /* +0xcb6d50 */ __asm { MOV EDX,0xead9470d }
    /* +0xcb6d55 */ __asm { XOR EDX,0x1526bd55 }
    /* +0xcb6d5b */ __asm { MOVSXD RDX,EDX }
    /* +0xcb6d5e */ __asm { ADD RDX,R11 }
    /* +0xcb6d61 */ __asm { MOV R11,-0x683ad54e5651573f }
    /* +0xcb6d6b */ __asm { CMP RDX,R11 }
    /* +0xcb6d6e */ __asm { JZ 0x7fffa5426e46 }
    /* +0xcb6d74 */ __asm { MOV dword ptr [RSP + 0x78],0xa2e0e94e }
    /* +0xcb6d7c */ __asm { MOV EDX,dword ptr [RSP + 0x78] }
    /* +0xcb6d80 */ __asm { CMP EDX,0xa12f75e6 }
    /* +0xcb6d86 */ __asm { NOP }
    /* +0xcb6d87 */ __asm { NOP }
    /* +0xcb6d88 */ __asm { NOP }
    /* +0xcb6d89 */ __asm { NOP }
    /* +0xcb6d8a */ __asm { NOP }
    /* +0xcb6d8b */ __asm { MOV qword ptr [RSP + 0x68],R8 }
    /* +0xcb6d90 */ __asm { MOV qword ptr [RSP + 0x70],R9 }
    /* +0xcb6d95 */ __asm { LEA R11,[0x7fffa47babbf] }
    /* +0xcb6d9c */ __asm { MOV R10,R11 }
}


// ============================================================================
// Function : FUN_7fffa5426fb0  |  RVA: 0xcb6fb0  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5426fb0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5426fbc  |  RVA: 0xcb6fbc  |  Size: 91 bytes
// Callers  : none
// Callees  : FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_7fffa5426fbc(void)

{
  FUN_7fffa52d8dd0(_DAT_7fffa4782610);
  _DAT_7fffa4782610 = 0;
  FUN_7fffa52d8dd0(_DAT_7fffa4782618);
  _DAT_7fffa4782618 = 0;
  FUN_7fffa52d8dd0(_DAT_7fffa4782598);
  _DAT_7fffa4782598 = 0;
  FUN_7fffa52d8dd0(_DAT_7fffa47825a0);
  _DAT_7fffa47825a0 = 0;
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5427020  |  RVA: 0xcb7020  |  Size: 1 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa54037a0@0xc937a0
// Callees  : none
// ============================================================================
void FUN_7fffa5427020(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5427044  |  RVA: 0xcb7044  |  Size: 175 bytes
// Callers  : none
// Callees  : FUN_7fffa54e57f4@0xd757f4, FUN_7fffa522524c@0xab524c
// ============================================================================
int64_t FUN_7fffa5427044(uint32_t param_1,uint64_t param_2,uint32_t param_3,int64_t param_4)

{
  uint8_t *pbVar1;
  int iVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int64_t alStack_18 [2];
  
  lVar4 = FUN_7fffa522524c(param_1);
  if (lVar4 == -1) {
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
  }
  else {
    alStack_18[0] = 0;
    iVar2 = (*(code *)&DAT_7ff84ea57740)(lVar4,param_2,alStack_18,param_3);
    if (iVar2 == 0) {
      uVar3 = (*(code *)&DAT_7ff84ea18640)();
      FUN_7fffa54e57f4(uVar3,param_4);
    }
    else if (alStack_18[0] != -1) {
      pbVar1 = (uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)param_1 >> 6) * 8) + 0x38
                       + (uint64_t)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return alStack_18[0];
    }
  }
  return -1;
}


// ============================================================================
// Function : FUN_7fffa5427100  |  RVA: 0xcb7100  |  Size: 2215 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa5427100(uint64_t param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)

{
  uint64_t *puVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t uVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint8_t bVar9;
  bool bVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint64_t *in_RAX;
  uint64_t *puVar13;
  uint8_t bVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t uVar20;
  uint64_t *puVar19;
  uint64_t *puVar21;
  uint32_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint32_t uVar25;
  uint32_t uVar26;
  uint64_t *puVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  uint64_t *in_R10;
  uint64_t uVar30;
  uint32_t uVar31;
  uint64_t uVar32;
  uint64_t *puVar33;
  int64_t lVar34;
  uint64_t *puVar35;
  int iVar36;
  char *pcStack_48;
  
  param_2 = param_2 - (param_2 << 0x3e);
  bVar2 = *(uint8_t *)(param_2 + 0x104);
  uVar25 = 1 << (bVar2 & 0x1f);
  uVar31 = *(uint32_t *)(param_2 + 0x1c);
  lVar17 = *(int64_t *)(param_2 + 8);
  bVar9 = (uint8_t)param_4;
  bVar14 = 0x40 - (char)*(uint32_t *)(param_2 + 0x108);
  uVar26 = *(uint32_t *)(param_2 + 0x2c);
  uVar24 = (uint64_t)uVar26;
  iVar36 = 1 << (*(uint8_t *)(param_2 + 0x10c) & 0x1f);
  uVar3 = *(uint32_t *)(param_2 + 0x18);
  uVar11 = (int)in_RAX - (int)lVar17;
  uVar22 = uVar11 - uVar25;
  if (uVar11 < uVar25) {
    uVar22 = 0;
  }
  uVar20 = (0x9c54e10c4e74ed7fU >> (bVar9 & 0x3f) | -0x63ab1ef3b18b1281 << 0x40 - (bVar9 & 0x3f)) *
           param_1;
  if (param_4 + 0x5f5f4730 < (0x30ece397 << (bVar9 & 0x1f) | 0x30ece397U >> 0x20 - (bVar9 & 0x1f)))
  {
    uVar20 = param_1 ^ 0xce2a7086273a76bf;
  }
  puVar19 = (uint64_t *)(uVar20 - 0x2d565ab);
  uVar29 = *(uint32_t *)(param_2 + 0x100) | 1;
  if ((uint64_t)
      ((-0x49320d29 - param_4) * 0x1ba80000 | (-0x49320d29 - param_4) * -0x57455c8b >> 0xd) <=
      (uint64_t)
      (int64_t)(int)(-0x12803bd9 << (bVar9 & 0x1f) | 0xed7fc427U >> 0x20 - (bVar9 & 0x1f))) {
    uVar29 = 1 << ((uint8_t)*(uint32_t *)(param_2 + 0x100) & 0x1f);
  }
  uVar5 = uVar11;
  if (uVar11 < uVar26) {
    uVar5 = uVar26;
  }
  uVar26 = uVar11 - uVar29;
  if (uVar11 - uVar31 <= uVar29) {
    uVar26 = uVar31;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar26 = uVar31;
  }
  iVar4 = *(int *)(param_2 + 300);
  puVar6 = *(uint64_t **)(param_2 + 0xf8);
  lVar7 = *(int64_t *)(param_2 + 0x80);
  lVar34 = *(int64_t *)(param_2 + 0x70);
  puVar13 = (uint64_t *)((uint64_t)uVar3 + lVar17);
  do {
    if (uVar5 == uVar24) break;
    uVar23 = (uint64_t)(*(int64_t *)(lVar17 + uVar24) * -0x30e4432340650000) >> (bVar14 & 0x3f);
    *(uint32_t *)(lVar7 + (uint64_t)((uint32_t)uVar24 & ~(-1 << (bVar2 & 0x1f))) * 4) =
         *(uint32_t *)(lVar34 + uVar23 * 4);
    *(uint32_t *)(lVar34 + uVar23 * 4) = (uint32_t)uVar24;
    uVar24 = uVar24 + 1;
  } while (iVar4 == 0);
  *(uint32_t *)(param_2 + 0x2c) = uVar11;
  uVar24 = *in_RAX;
  uVar32 = uVar24 * -0x30e4432340650000;
  uVar31 = *(uint32_t *)(lVar34 + (uVar32 >> (bVar14 & 0x3f)) * 4);
  uVar23 = 3;
  if (uVar26 <= uVar31) {
    uVar24 = uVar23;
    do {
      puVar33 = (uint64_t *)(lVar17 + (uint64_t)uVar31);
      if (*(int *)((uVar24 - 3) + (int64_t)puVar33) == *(int *)((int64_t)in_RAX + (uVar24 - 3))) {
        puVar21 = in_RAX;
        if (in_RAX < (uint64_t *)(uVar20 - 0x2d565b2)) {
          if (*puVar33 == *in_RAX) {
            lVar34 = lVar17 + 8 + (uint64_t)uVar31;
            lVar18 = 0;
            do {
              puVar21 = (uint64_t *)((int64_t)in_RAX + lVar18 + 8);
              if ((uint64_t *)(uVar20 - 0x2d565b2) <= puVar21) {
                puVar33 = (uint64_t *)(lVar34 + lVar18);
                goto joined_r0x7fffa5427439;
              }
              uVar23 = *(uint64_t *)(lVar34 + lVar18);
              lVar18 = lVar18 + 8;
            } while (uVar23 == *puVar21);
            uVar29 = 0;
            for (uVar23 = uVar23 ^ *puVar21; (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar23 = (uint64_t)(uVar29 >> 3) + lVar18;
          }
          else {
            uVar29 = 0;
            for (uVar23 = *puVar33 ^ *in_RAX; (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar23 = (uint64_t)(uVar29 >> 3);
          }
        }
        else {
joined_r0x7fffa5427439:
          if ((puVar21 < (uint64_t *)(uVar20 - 0x2d565ae)) && ((uint32_t)*puVar33 == (uint32_t)*puVar21)) {
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
          }
          if ((puVar21 < (uint64_t *)(uVar20 - 0x2d565ac)) && ((short)*puVar33 == (short)*puVar21))
          {
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
          }
          if (puVar21 < puVar19) {
            puVar21 = (uint64_t *)
                      ((int64_t)puVar21 + (uint64_t)((char)*puVar33 == (char)*puVar21));
          }
          uVar23 = (int64_t)puVar21 - (int64_t)in_RAX;
        }
        if (uVar24 < uVar23) {
          *in_R10 = (uint64_t)((uVar11 + 3) - uVar31);
          uVar24 = uVar23;
          if ((uint64_t *)((int64_t)in_RAX + uVar23) == puVar19) goto LAB_7fffa54274e6;
        }
      }
      uVar23 = uVar24;
      if (uVar31 <= uVar22) goto LAB_7fffa54274e6;
      iVar36 = iVar36 + -1;
      uVar31 = *(uint32_t *)(lVar7 + (uint64_t)(uVar31 & uVar25 - 1) * 4);
      if ((uVar31 < uVar26) || (uVar24 = uVar23, iVar36 == 0)) goto LAB_7fffa54274e6;
    } while( true );
  }
LAB_7fffa54274f0:
  uVar31 = param_4 | 1;
  if ((-0x3f773e84 - param_4) * 0x1bcc6a77 <
      ((uVar31 * 0x2f902c00 | uVar31 * -0x20e837ea >> 0x17) ^ 0x54b9fff)) {
    pcStack_48 = (char *)*puVar6;
    lVar17 = puVar6[1];
    uVar22 = 0x94169c7f - param_4;
    uVar26 = (int)pcStack_48 - (int)lVar17;
  }
  else {
    pcStack_48 = (char *)*puVar6;
    lVar17 = puVar6[1];
    uVar26 = (int)pcStack_48 - (int)lVar17;
    uVar22 = (param_4 + 0xf3de1713 >> 1 | (uint32_t)((param_4 + 0xf3de1713 & 1) != 0) << 0x1f) +
             0xc0000010;
  }
  uVar25 = 1 << (*(uint8_t *)((int64_t)puVar6 + 0x104) & 0x1f);
  uVar29 = uVar26 - uVar25;
  if (uVar26 < uVar25) {
    uVar29 = 0;
  }
  if (iVar36 != 0) {
    uVar5 = *(uint32_t *)(puVar6 + 3);
    uVar28 = *(uint32_t *)(puVar6[0xe] + (uVar32 >> (-*(char *)(puVar6 + 0x21) & 0x3fU)) * 4);
    if (uVar5 <= uVar28) {
      lVar7 = puVar6[0x10];
      puVar33 = (uint64_t *)(uVar20 - 0x2d565b2);
      puVar21 = (uint64_t *)((int64_t)in_RAX + 4);
      uVar32 = uVar23;
      do {
        if (*(int *)(lVar17 + (uint64_t)uVar28) == (int)uVar24) {
          lVar34 = (uint64_t)uVar28 + lVar17;
          puVar1 = (uint64_t *)(lVar34 + 4);
          puVar15 = (uint64_t *)(((int64_t)pcStack_48 - (int64_t)puVar1) + (int64_t)puVar21);
          if (puVar19 <= puVar15) {
            puVar15 = puVar19;
          }
          puVar35 = puVar1;
          puVar27 = puVar21;
          if (puVar21 < (uint64_t *)((int64_t)puVar15 - 7U)) {
            if (*puVar1 == *puVar21) {
              lVar18 = 0xc;
LAB_7fffa54276a0:
              puVar27 = (uint64_t *)((int64_t)in_RAX + lVar18);
              if (puVar27 < (uint64_t *)((int64_t)puVar15 - 7U)) {
                if (*(uint64_t *)(lVar34 + lVar18) == *puVar27) goto code_r0x7fffa54276bd;
                uVar12 = 0;
                for (uVar23 = *(uint64_t *)(lVar34 + lVar18) ^ *puVar27; (uVar23 & 1) == 0;
                    uVar23 = uVar23 >> 1 | 0x8000000000000000) {
                  uVar12 = uVar12 + 1;
                }
                uVar23 = ((uint64_t)(uVar12 >> 3) + lVar18) - 4;
                goto LAB_7fffa5427757;
              }
              puVar35 = (uint64_t *)(lVar34 + lVar18);
              goto LAB_7fffa54276d1;
            }
            uVar12 = 0;
            for (uVar23 = *puVar1 ^ *puVar21; (uVar23 & 1) == 0;
                uVar23 = uVar23 >> 1 | 0x8000000000000000) {
              uVar12 = uVar12 + 1;
            }
            uVar23 = (uint64_t)(uVar12 >> 3);
          }
          else {
LAB_7fffa54276d1:
            if ((puVar27 < (uint64_t *)((int64_t)puVar15 - 3U)) &&
               ((uint32_t)*puVar35 == (uint32_t)*puVar27)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
              puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
            }
            if ((puVar27 < (uint64_t *)((int64_t)puVar15 - 1U)) &&
               ((short)*puVar35 == (short)*puVar27)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
              puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
            }
            if (puVar27 < puVar15) {
              puVar27 = (uint64_t *)
                        ((int64_t)puVar27 + (uint64_t)((char)*puVar35 == (char)*puVar27));
            }
            uVar23 = (int64_t)puVar27 - (int64_t)puVar21;
          }
LAB_7fffa5427757:
          if ((char *)((int64_t)puVar1 + uVar23) == pcStack_48) {
            puVar1 = (uint64_t *)((int64_t)puVar21 + uVar23);
            puVar15 = puVar1;
            puVar35 = puVar13;
            if (puVar1 < puVar33) {
              if (*puVar13 == *puVar1) {
                puVar15 = (uint64_t *)((int64_t)in_RAX + uVar23 + 0xc);
                lVar34 = 8;
                if (puVar15 < puVar33) {
LAB_7fffa54277a0:
                  uVar30 = *(uint64_t *)((int64_t)puVar13 + lVar34);
                  uVar8 = *puVar15;
                  if (uVar30 == uVar8) goto code_r0x7fffa54277b0;
                  uVar16 = uVar8 & uVar30;
                  if (((param_4 ^ 0x68ea2da5) - uVar22) * -0x6d42f9b1 == 0x5e23cd6) {
                    uVar16 = uVar8 ^ uVar30;
                  }
                  uVar12 = 0;
                  for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
                    uVar12 = uVar12 + 1;
                  }
                  uVar30 = (uint64_t)(uVar12 >> 3) + lVar34;
                  goto LAB_7fffa54278d6;
                }
LAB_7fffa54277bf:
                puVar35 = (uint64_t *)(lVar34 + (int64_t)puVar13);
                goto LAB_7fffa54277c2;
              }
              uVar12 = 0;
              for (uVar30 = *puVar13 ^ *puVar1; (uVar30 & 1) == 0;
                  uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                uVar12 = uVar12 + 1;
              }
              uVar30 = (uint64_t)(uVar12 >> 3);
            }
            else {
LAB_7fffa54277c2:
              if ((puVar15 < (uint64_t *)(uVar20 - 0x2d565ae)) &&
                 ((uint32_t)*puVar35 == (uint32_t)*puVar15)) {
                puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
                puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
              }
              if ((puVar15 < (uint64_t *)(uVar20 - 0x2d565ac)) &&
                 ((short)*puVar35 == (short)*puVar15)) {
                puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
                puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
              }
              bVar9 = (uint8_t)uVar22 & 0x1f;
              bVar2 = (uint8_t)uVar22 & 0x1f;
              uVar12 = param_4 + 0xfd53487b << bVar2 | param_4 + 0xfd53487b >> 0x20 - bVar2;
              bVar10 = puVar15 < puVar19;
              if ((0x8fed9ddfU >> bVar9 | -0x70126221 << 0x20 - bVar9) <=
                  (uVar12 << 0xe | uVar12 >> 0x12) + 0xe5194236) {
                bVar10 = (int64_t)puVar19 < (int64_t)puVar15;
              }
              if (bVar10) {
                puVar15 = (uint64_t *)
                          ((int64_t)puVar15 + (uint64_t)((char)*puVar35 == (char)*puVar15));
              }
              uVar30 = (int64_t)puVar15 - (int64_t)puVar1;
            }
LAB_7fffa54278d6:
            uVar23 = uVar23 + uVar30;
          }
          uVar23 = uVar23 + 4;
          if (uVar32 < uVar23) {
            *in_R10 = (uint64_t)((((uVar11 - uVar3) + uVar26) - uVar28) + 3);
            if ((uint64_t *)((int64_t)in_RAX + uVar23) == puVar19) break;
            uVar24 = (uint64_t)(uint32_t)*in_RAX;
            uVar32 = uVar23;
          }
        }
        uVar23 = uVar32;
        if (uVar28 <= uVar29) break;
        uVar12 = uVar28 & uVar25 - 1;
        if ((uint64_t)(int64_t)(int)(-0x516e423f - (uVar22 ^ 0x1770c4c4)) <
            (uint64_t)((uVar31 * 0x69e0f8f ^ 0x17eac165) + uVar22)) {
          uVar12 = uVar25 - 1 ^ uVar28;
        }
        iVar36 = iVar36 + -1;
        if (iVar36 == 0) break;
        uVar28 = *(uint32_t *)(lVar7 + (uint64_t)uVar12 * 4);
        uVar32 = uVar23;
      } while (uVar5 <= uVar28);
    }
  }
  return (uVar23 >> 8 ^ uVar23) * -0x5954291;
LAB_7fffa54274e6:
  uVar24 = *in_RAX;
  uVar32 = uVar24 * -0x30e4432340650000;
  goto LAB_7fffa54274f0;
code_r0x7fffa54276bd:
  lVar18 = lVar18 + 8;
  goto LAB_7fffa54276a0;
code_r0x7fffa54277b0:
  puVar15 = puVar15 + 1;
  lVar34 = lVar34 + 8;
  if (puVar33 <= puVar15) goto LAB_7fffa54277bf;
  goto LAB_7fffa54277a0;
}


// ============================================================================
// Function : FUN_7fffa54279b0  |  RVA: 0xcb79b0  |  Size: 21 bytes
// Callers  : none
// Callees  : FUN_7fffa4e8e990@0x71e990
// ============================================================================
void FUN_7fffa54279b0(void)

{
  FUN_7fffa4e8e990();
  return;
}


// ============================================================================
// Function : FUN_7fffa54279c6  |  RVA: 0xcb79c6  |  Size: 34 bytes
// Callers  : none
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
void FUN_7fffa54279c6(void)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa54539d0();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_7fffa54539d0();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa54279f0  |  RVA: 0xcb79f0  |  Size: 201 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa54279f0(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  uint16_t uVar2;
  uint32_t in_R10D;
  int64_t *plVar3;
  
  plVar3 = (int64_t *)((param_3 << 0x21) + param_3);
  *(uint64_t *)plVar3[1] = 0;
  plVar1 = (int64_t *)*plVar3;
  if (plVar1 != (int64_t *)0x0) {
    do {
      plVar1 = (int64_t *)*plVar1;
      uVar2 = ~(((uint16_t)in_R10D | 1) * 0x746a);
      (*(code *)((int64_t)(short)(uVar2 << 7 | uVar2 >> 9) + 0x7fffa56891a4))();
    } while (plVar1 != (int64_t *)0x0);
  }
  (*(code *)(&UNK_7fffa5690a50 +
            (int)((in_R10D ^ 0x4c6d8e9e) << 0x10 | (in_R10D ^ 0x4c6d8e9e) >> 0x10)))
            (param_1,&UNK_7fffa5690a50 +
                     (int)((in_R10D ^ 0x4c6d8e9e) << 0x10 | (in_R10D ^ 0x4c6d8e9e) >> 0x10),
             (uint64_t)plVar3 >> 0x3d ^ (uint64_t)plVar3);
  return;
}


// ============================================================================
// Function : FUN_7fffa5427ac0  |  RVA: 0xcb7ac0  |  Size: 15 bytes
// Callers  : FUN_7fffa5213870@0xaa3870
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5427ac0(void)

{
  int64_t lVar1;
  
  if (_DAT_7fffa4780240 != -1) {
    lVar1 = (*(code *)&DAT_7ff84ea12a00)();
    (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,0);
    if ((lVar1 != 0) && (lVar1 != 0x7fffa4781da0)) {
      FUN_7fffa52c3bf0(lVar1);
      return;
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5427acf  |  RVA: 0xcb7acf  |  Size: 62 bytes
// Callers  : none
// Callees  : FUN_7fffa52c3bf0@0xb53bf0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5427acf(void)

{
  int64_t lVar1;
  
  lVar1 = (*(code *)&DAT_7ff84ea12a00)();
  (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,0);
  if ((lVar1 == 0) || (lVar1 == 0x7fffa4781da0)) {
    return;
  }
  FUN_7fffa52c3bf0(lVar1);
  return;
}


// ============================================================================
// Function : FUN_7fffa5427b0d  |  RVA: 0xcb7b0d  |  Size: 5 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5427b0d(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa5427b12  |  RVA: 0xcb7b12  |  Size: 5 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5427b12(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa5427b18  |  RVA: 0xcb7b18  |  Size: 263 bytes
// Callers  : FUN_7fffa50c9360@0x959360
// Callees  : FUN_7fffa5488850@0xd18850, FUN_7fffa565caf0@0xeecaf0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5427b18(uint64_t *param_1,uint32_t param_2,char *param_3,uint64_t param_4,
                     uint8_t param_5)

{
  char cVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t lVar7;
  uint32_t uVar8;
  char *pcVar9;
  char *pcVar10;
  uint64_t uStack_20;
  
  uStack_20 = 0x7fffa5427b30;
  lVar7 = FUN_7fffa565caf0();
  lVar7 = -lVar7;
  *(uint64_t *)((int64_t)register0x00000020 + lVar7 + 0x1428) =
       _DAT_7fffa4780040 ^ (int64_t)register0x00000020 + lVar7 + -0x18;
  pcVar10 = param_3 + (param_4 & 0xffffffff);
  uVar3 = *(uint64_t *)
           (*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)param_2 >> 6) * 8) + 0x28 +
           (uint64_t)(param_2 & 0x3f) * 0x48);
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  do {
    if (pcVar10 <= param_3) break;
    pcVar9 = &param_5 + lVar7;
    do {
      if (pcVar10 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        *pcVar9 = '\r';
        pcVar9 = pcVar9 + 1;
      }
      *pcVar9 = cVar1;
      pcVar9 = pcVar9 + 1;
    } while (pcVar9 < (char *)((int64_t)register0x00000020 + lVar7 + 0x1427));
    *(uint32_t *)((int64_t)register0x00000020 + lVar7 + 0x18) = 0;
    *(uint64_t *)((int64_t)register0x00000020 + lVar7 + 8) = 0;
    uVar8 = (int)pcVar9 - ((int)&param_5 + (int)lVar7);
    *(uint64_t *)((int64_t)&uStack_20 + lVar7) = 0x7fffa5427bd6;
    iVar5 = (*(code *)&DAT_7ff84ea57790)
                      (uVar3,&param_5 + lVar7,uVar8,(int64_t)register0x00000020 + lVar7 + 0x18);
    if (iVar5 == 0) {
      *(uint64_t *)((int64_t)&uStack_20 + lVar7) = 0x7fffa5427bf2;
      uVar6 = (*(code *)&DAT_7ff84ea18640)();
      *(uint32_t *)param_1 = uVar6;
      break;
    }
    uVar2 = *(uint32_t *)((int64_t)register0x00000020 + lVar7 + 0x18);
    *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + uVar2;
  } while (uVar8 <= uVar2);
  uVar4 = *(uint64_t *)((int64_t)register0x00000020 + lVar7 + 0x1428);
  *(uint64_t *)((int64_t)&uStack_20 + lVar7) = 0x7fffa5427c07;
  FUN_7fffa5488850(uVar4 ^ (int64_t)register0x00000020 + lVar7 + -0x18);
  return;
}


// ============================================================================
// Function : FUN_7fffa5427c20  |  RVA: 0xcb7c20  |  Size: 724 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5427dae) */

void FUN_7fffa5427c20(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  bRam00007fffa47856a0 = 0;
  auRam00007fffa47856b5 = (uint8_t  [16])0x0;
  auRam00007fffa47856a5 = (uint8_t  [16])0x0;
  uRam00007fffa47856c5 = 0;
  uRam00007fffa47856d0 = 0;
  uVar1 = rdtsc();
  lVar2 = 3;
  lVar4 = (CONCAT44(0xffffffff,(int)(uVar1 >> 0x20)) << 0x20 | uVar1 & 0xffffffff) *
          0x685defe52250459;
  do {
    *(char *)(lVar2 + 0x7fffa4785690) = (char)((uint64_t)(lVar4 * 0x4b0aad0dc9) >> 0x20);
    *(char *)(lVar2 + 0x7fffa4785691) = (char)((uint64_t)(lVar4 * 0x63eb241cca6deee1) >> 0x20);
    *(char *)(lVar2 + 0x7fffa478568e) = (char)((uint64_t)(lVar4 * 0xfe52250459) >> 0x20);
    *(char *)(lVar2 + 0x7fffa478568f) = (char)((uint64_t)(lVar4 * 0xbf45cce6f1) >> 0x20);
    lVar2 = lVar2 + 4;
    lVar4 = lVar4 * 0x63eb241cca6deee1;
  } while (lVar2 != 0x4f);
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47856a0 * 0x33333334 + 0x33333334) * 5;
  uVar3 = uVar1 >> 0x20;
  *(uint32_t *)(uVar3 * 8 + 0x7fffa47856a5) = (uint32_t)uRam00007fffa47856d0 ^ 0xffffffff;
  *(uint32_t *)(uVar3 * 8 + 0x7fffa47856a9) = ~uRam00007fffa47856d0._4_4_;
  bRam00007fffa47856a0 = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5427f40  |  RVA: 0xcb7f40  |  Size: 69 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5427f40(void)

{
  code *pcVar1;
  uint32_t in_R9D;
  
  (*(code *)(&UNK_7fffa47ebc06 + (int)(in_R9D + 0x3fff26ea)))
            (&UNK_7fffa5865d78 + (int)~((in_R9D | 1) * -0x4f0f0419));
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5427f8c  |  RVA: 0xcb7f8c  |  Size: 193 bytes
// Callers  : FUN_7fffa4ab28e0@0x3428e0
// Callees  : FUN_7fffa4a91118@0x321118, FUN_7fffa5668bc0@0xef8bc0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5427f8c(uint32_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint32_t auStackX_8 [4];
  uint8_t auStackX_18 [8];
  uint32_t auStackX_20 [2];
  uint32_t auStack_28 [2];
  uint32_t *puStack_20;
  int64_t lStack_18;
  
  if (param_1 == 0xfffffffe) {
    *(uint8_t *)(param_2 + 0x38) = 1;
    *(uint32_t *)(param_2 + 0x34) = 0;
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 9;
  }
  else {
    auStackX_8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < _DAT_7fffa4782580)) &&
       ((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)param_1 >> 6) * 8) + 0x38 +
                  (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      puStack_20 = auStackX_8;
      auStackX_20[0] = param_1;
      auStack_28[0] = param_1;
      lStack_18 = param_2;
      uVar1 = FUN_7fffa4a91118(auStackX_18,auStack_28,&puStack_20,auStackX_20);
      return uVar1;
    }
    *(uint8_t *)(param_2 + 0x38) = 1;
    *(uint32_t *)(param_2 + 0x34) = 0;
    *(uint8_t *)(param_2 + 0x30) = 1;
    *(uint32_t *)(param_2 + 0x2c) = 9;
    FUN_7fffa5668bc0(0,0,0,0,0,param_2);
  }
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa5428050  |  RVA: 0xcb8050  |  Size: 924 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5428050(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  
  bRam00007fffa47bcddc = '\0';
  uRam00007fffa47bcdef = 0;
  uRam00007fffa47bcdf7 = 0;
  uRam00007fffa47bcddf = 0;
  uRam00007fffa47bcde7 = 0;
  _uRam00007fffa47bce07 = 0;
  uVar8 = rdtsc();
  lVar7 = (uVar8 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar8)) * 0xebcced285445ab7;
  lVar6 = 0;
  while( true ) {
    *(char *)(lVar6 + 0x7fffa47bcdda) = (char)((uint64_t)(lVar7 * 0xd285445ab7) >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bcddc) = (char)((uint64_t)(lVar7 * 0xa31a95f167) >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bcddb) = (char)((uint64_t)(lVar7 * 0xbe775d2ed1) >> 0x20);
    if (lVar6 == 0x40) break;
    lVar7 = lVar7 * 0x356621ad5a69c6a1;
    *(char *)(lVar6 + 0x7fffa47bcddd) = (char)((uint64_t)lVar7 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  bRam00007fffa47bcddc = bRam00007fffa47bcddc + 1 & 3;
  uVar8 = (uint64_t)bRam00007fffa47bcddc;
  cVar1 = (char)uRam00007fffa47bce07;
  cVar2 = cRam00007fffa47bce09;
  cVar3 = cRam00007fffa47bce0a;
  *(char *)(uVar8 * 8 + 0x7fffa47bcde3) = cRam00007fffa47bce0b << 1 | cRam00007fffa47bce0b < '\0';
  *(char *)(uVar8 * 8 + 0x7fffa47bcde1) = cVar2 << 1 | cVar2 < '\0';
  cVar2 = uRam00007fffa47bce07._1_1_;
  cVar4 = cRam00007fffa47bce0c;
  *(char *)(uVar8 * 8 + 0x7fffa47bcde2) = cVar3 << 1 | cVar3 < '\0';
  lVar6 = _uRam00007fffa47bce07;
  cVar5 = cRam00007fffa47bce0e;
  cVar3 = cRam00007fffa47bce0d;
  *(char *)(uVar8 * 8 + 0x7fffa47bcde0) = cVar2 << 1 | cVar2 < '\0';
  *(char *)(uVar8 * 8 + 0x7fffa47bcde4) = cVar4 << 1 | cVar4 < '\0';
  *(char *)(uVar8 * 8 + 0x7fffa47bcde5) = cVar3 << 1 | cVar3 < '\0';
  *(char *)(uVar8 * 8 + 0x7fffa47bcde6) = cVar5 << 1 | lVar6 < 0;
  *(char *)(uVar8 * 8 + 0x7fffa47bcddf) = cVar1 << 1 | cVar1 < '\0';
  return;
}


// ============================================================================
// Function : FUN_7fffa54283f0  |  RVA: 0xcb83f0  |  Size: 2269 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa54283f0(uint32_t param_1)

{
  uint8_t (*pauVar1) [16];
  char *pcVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t in_RAX;
  uint64_t uVar9;
  char *pcVar10;
  uint8_t bVar11;
  int64_t lVar12;
  code *pcVar13;
  int iVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint8_t *pbVar18;
  int64_t lVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  char *pcVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint8_t *pbVar25;
  int64_t lVar26;
  uint32_t uVar27;
  bool bVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  
  uVar9 = ~in_RAX;
  uVar24 = uVar9 >> 0x3e ^ uVar9 >> 0x1f ^ uVar9;
  uVar24 = (uVar24 << 0x1d | uVar9 >> 0x23) ^ (uVar24 << 0xe | uVar9 >> 0x32) ^ uVar24;
  uVar24 = (uVar24 << 0x3a | uVar24 >> 6) ^ (uVar24 << 0x1c | uVar24 >> 0x24) ^ uVar24;
  uVar24 = (uVar24 << 0x34 | uVar24 >> 0xc) ^ (uVar24 << 0x38 | uVar24 >> 8) ^ uVar24;
  uVar24 = (uVar24 << 0x28 | uVar24 >> 0x18) ^ (uVar24 << 0x30 | uVar24 >> 0x10) ^ uVar24;
  uVar24 = (uVar24 << 0x10 | uVar24 >> 0x30) ^ (uVar24 << 0x20 | uVar24 >> 0x20) ^ uVar24;
  pbVar18 = (uint8_t *)(uVar24 << 0x20 | uVar24 >> 0x20);
  uVar20 = param_1 | 1;
  lVar26 = *(int64_t *)((int64_t)(int)(uVar20 * -0x204aec39) + 0x7fffa47c81df);
  bVar11 = (uint8_t)param_1;
  if (lVar26 == 0) goto LAB_7fffa5428bd4;
  pcVar10 = *(char **)((int64_t)
                       (int)(-0x36a1c01 << (bVar11 & 0x1f) | 0xfc95e3ffU >> 0x20 - (bVar11 & 0x1f))
                      + 0x7fffa47c88e0);
  lVar23 = *(int64_t *)
            ((int64_t)(int)(0x76ffffccU >> (bVar11 & 0x1f) | 0x76ffffcc << 0x20 - (bVar11 & 0x1f))
            + 0x7fffa47c7c75) * 0x10;
  uVar5 = (uint16_t)param_1;
  if (pcVar10 == pcVar10 + lVar23 + 0x10) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    pcVar22 = pcVar10;
    do {
      auVar29[0] = -(*pcVar22 == '\0');
      auVar29[1] = -(pcVar22[1] == '\0');
      auVar29[2] = -(pcVar22[2] == '\0');
      auVar29[3] = -(pcVar22[3] == '\0');
      auVar29[4] = -(pcVar22[4] == '\0');
      auVar29[5] = -(pcVar22[5] == '\0');
      auVar29[6] = -(pcVar22[6] == '\0');
      auVar29[7] = -(pcVar22[7] == '\0');
      auVar29[8] = -(pcVar22[8] == '\0');
      auVar29[9] = -(pcVar22[9] == '\0');
      auVar29[10] = -(pcVar22[10] == '\0');
      auVar29[0xb] = -(pcVar22[0xb] == '\0');
      auVar29[0xc] = -(pcVar22[0xc] == '\0');
      auVar29[0xd] = -(pcVar22[0xd] == '\0');
      auVar29[0xe] = -(pcVar22[0xe] == '\0');
      auVar29[0xf] = -(pcVar22[0xf] == '\0');
      for (uVar27 = ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
                                    (uint16_t)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                    (uint16_t)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                    (uint16_t)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                    (uint16_t)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                    (uint16_t)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                    (uint16_t)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                    (uint16_t)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                    (uint16_t)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                    (uint16_t)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                    (uint16_t)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                    (uint16_t)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                    (uint16_t)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                    (uint16_t)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                    (uint16_t)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                   (uint16_t)(auVar29[0xf] >> 7) << 0xf) &
                    ((uint32_t)(pcVar22 != pcVar10 + lVar23) << 0xe | 0x3fff); uVar27 != 0;
          uVar27 = uVar27 - 1 & uVar27) {
        uVar21 = 0;
        for (uVar4 = uVar27; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        uVar17 = (uint64_t)uVar21;
        pbVar25 = *(uint8_t **)(lVar26 + uVar17 * 8);
        uVar16 = SUB168(ZEXT116(*pbVar25) * ZEXT816(0x9e3779b97f4a7c15),8);
        uVar24 = SUB168(ZEXT116(*pbVar25) * ZEXT816(0x9e3779b97f4a7c15),0);
        uVar9 = uVar24 | uVar16;
        if ((uint64_t)((param_1 + 0x26f10c91) * 0x200 | param_1 + 0x26f10c91 >> 0x17) <
            0xffffffffd9ac4bbc) {
          uVar9 = uVar16 ^ uVar24;
        }
        uVar24 = uVar9 >> (*pbVar18 & 0x3f);
        lVar15 = *(int64_t *)(pbVar18 + 0x10) + uVar24 * 0x10;
        pcVar2 = (char *)(*(int64_t *)(pbVar18 + 0x10) + uVar24 * 0x10);
        auVar30[0] = -(*pcVar2 == '\0');
        auVar30[1] = -(pcVar2[1] == '\0');
        auVar30[2] = -(pcVar2[2] == '\0');
        auVar30[3] = -(pcVar2[3] == '\0');
        auVar30[4] = -(pcVar2[4] == '\0');
        auVar30[5] = -(pcVar2[5] == '\0');
        auVar30[6] = -(pcVar2[6] == '\0');
        auVar30[7] = -(pcVar2[7] == '\0');
        auVar30[8] = -(pcVar2[8] == '\0');
        auVar30[9] = -(pcVar2[9] == '\0');
        auVar30[10] = -(pcVar2[10] == '\0');
        auVar30[0xb] = -(pcVar2[0xb] == '\0');
        auVar30[0xc] = -(pcVar2[0xc] == '\0');
        auVar30[0xd] = -(pcVar2[0xd] == '\0');
        auVar30[0xe] = -(pcVar2[0xe] == '\0');
        auVar30[0xf] = -(pcVar2[0xf] == '\0');
        uVar21 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
                                (uint16_t)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                (uint16_t)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                (uint16_t)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                (uint16_t)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                (uint16_t)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                (uint16_t)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                (uint16_t)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                (uint16_t)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                (uint16_t)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                (uint16_t)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                (uint16_t)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                (uint16_t)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                (uint16_t)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                               (uint16_t)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe);
        if (uVar21 == 0) {
          lVar12 = 1;
          do {
            *(uint8_t *)(lVar15 + 0xf) = *(uint8_t *)(lVar15 + 0xf) | '\x01' << ((uint8_t)uVar9 & 7);
            uVar24 = *(uint64_t *)(pbVar18 + 8) & uVar24 + lVar12;
            lVar15 = *(int64_t *)(pbVar18 + 0x10) + uVar24 * 0x10;
            pcVar2 = (char *)(*(int64_t *)(pbVar18 + 0x10) + uVar24 * 0x10);
            auVar31[0] = -(*pcVar2 == '\0');
            auVar31[1] = -(pcVar2[1] == '\0');
            auVar31[2] = -(pcVar2[2] == '\0');
            auVar31[3] = -(pcVar2[3] == '\0');
            auVar31[4] = -(pcVar2[4] == '\0');
            auVar31[5] = -(pcVar2[5] == '\0');
            auVar31[6] = -(pcVar2[6] == '\0');
            auVar31[7] = -(pcVar2[7] == '\0');
            auVar31[8] = -(pcVar2[8] == '\0');
            auVar31[9] = -(pcVar2[9] == '\0');
            auVar31[10] = -(pcVar2[10] == '\0');
            auVar31[0xb] = -(pcVar2[0xb] == '\0');
            auVar31[0xc] = -(pcVar2[0xc] == '\0');
            auVar31[0xd] = -(pcVar2[0xd] == '\0');
            auVar31[0xe] = -(pcVar2[0xe] == '\0');
            auVar31[0xf] = -(pcVar2[0xf] == '\0');
            uVar21 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar31 >> 7,0) & 1) |
                                    (uint16_t)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                                    (uint16_t)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                                    (uint16_t)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                                    (uint16_t)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                                    (uint16_t)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                                    (uint16_t)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                                    (uint16_t)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                                    (uint16_t)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                                    (uint16_t)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                                    (uint16_t)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                                    (uint16_t)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                                    (uint16_t)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                                    (uint16_t)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                                   (uint16_t)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe);
            lVar12 = lVar12 + 1;
          } while (uVar21 == 0);
          pbVar25 = *(uint8_t **)(lVar26 + uVar17 * 8);
        }
        uVar4 = 0;
        for (; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar16 = (uint64_t)uVar4;
        uVar3 = (&UNK_7fffa583e900)
                [(uVar9 & 0xff) * 4 +
                 (int64_t)
                 (int)((0x18d4d0d6 << (bVar11 & 0x1f) | 0x18d4d0d6U >> 0x20 - (bVar11 & 0x1f)) +
                      0xca78f0ec)];
        *(uint8_t **)(uVar24 * 0x78 + *(int64_t *)(pbVar18 + 0x18) + uVar16 * 8) = pbVar25;
        *(uint64_t *)(lVar26 + uVar17 * 8) = 0;
        *(uint8_t *)(lVar15 + uVar16) = uVar3;
        lVar15 = *(int64_t *)(lVar26 + uVar17 * 8);
        if (lVar15 != 0) {
          if (*(int64_t *)(lVar15 + 0x28) != 0) {
            *(uint8_t (*) [16])(lVar15 + 0x20) = (uint8_t  [16])0x0;
          }
          uVar9 = *(uint64_t *)(lVar15 + 0x10);
          if (uVar9 != 0) {
            pauVar1 = (uint8_t (*) [16])(lVar15 + 0x10);
            uVar24 = *(uint64_t *)(lVar15 + 0x18);
            if (0 < (int64_t)uVar24) {
              while( true ) {
                uVar9 = *(uint64_t *)(*(int64_t *)*pauVar1 + -8 + uVar24 * 8);
                if (uVar9 != 0) {
                  uVar16 = CONCAT62((int6)(uVar16 >> 0x10),0x5f90);
                  iVar14 = ~((int)uVar16 * 0x45dd) * (param_1 | 1);
                  (*(code *)((int64_t)(short)iVar14 + 0x7fffa56897d7))
                            (0x7fffa56897d7,iVar14,uVar9 >> 0x3d ^ uVar9);
                }
                if (uVar24 < 2) break;
                uVar24 = uVar24 - 1;
              }
              uVar9 = *(uint64_t *)*pauVar1;
            }
            pcVar13 = (code *)((int64_t)
                               (int)(((0x6d988db4 - param_1) * 0x40000 | 0x6d988db4 - param_1 >> 0xe
                                     ) * -0x5201e9f) + 0x7fffa5691e6b);
            (*pcVar13)(pcVar13,0x7fffa5691e6b,uVar9 >> 0x3d ^ uVar9);
            *pauVar1 = (uint8_t  [16])0x0;
          }
          uVar9 = *(uint64_t *)(lVar15 + 8);
          *(uint64_t *)(lVar15 + 8) = 0;
          lVar15 = (int64_t)
                   (short)(((0x34fb - uVar5) * 0x100 | (uint16_t)(0x34fb - uVar5) >> 8) + 0x5a5f);
          pcVar13 = (code *)(lVar15 + 0x7fffa5689cca);
          (*pcVar13)(pcVar13,lVar15,uVar9 >> 0x3d ^ uVar9);
          (*(code *)((int64_t)(short)(-0x216d - uVar5) + 0x7fffa568cb13))();
        }
        lVar19 = lVar19 + 1;
      }
      lVar26 = lVar26 + 0x78;
      bVar28 = pcVar22 != pcVar10 + lVar23;
      pcVar22 = pcVar22 + 0x10;
    } while (bVar28);
    lVar26 = *(int64_t *)
              ((int64_t)(short)(((uVar5 | 1) * -0x6ac6 ^ 0xbfea) + 0xacbe) + 0x7fffa47bd186);
  }
  if (lVar19 == *(int64_t *)
                 ((int64_t)(short)((uVar5 ^ 0x4ca2) << 0xb | (uVar5 ^ 0x4ca2) >> 5) +
                 0x7fffa47c0b62)) {
LAB_7fffa5428b8e:
    if (lVar26 == 0) goto LAB_7fffa5428bd4;
  }
  else {
    if (lVar26 == 0) goto LAB_7fffa5428bd4;
    pcVar10 = *(char **)((int64_t)(short)(0x7441 - uVar5 ^ 0xbe53) + 0x7fffa47bb5c0);
    lVar23 = *(int64_t *)
              ((int64_t)
               (int)((-0xea52918 << (bVar11 & 0x1f) | 0xf15ad6e8U >> 0x20 - (bVar11 & 0x1f)) *
                    0x6079cb6d) + 0x7fffa47c3c3f) * 0x10;
    if (pcVar10 != pcVar10 + lVar23 + 0x10) {
      pcVar22 = pcVar10 + lVar23;
      while( true ) {
        auVar32[0] = -(*pcVar10 == '\0');
        auVar32[1] = -(pcVar10[1] == '\0');
        auVar32[2] = -(pcVar10[2] == '\0');
        auVar32[3] = -(pcVar10[3] == '\0');
        auVar32[4] = -(pcVar10[4] == '\0');
        auVar32[5] = -(pcVar10[5] == '\0');
        auVar32[6] = -(pcVar10[6] == '\0');
        auVar32[7] = -(pcVar10[7] == '\0');
        auVar32[8] = -(pcVar10[8] == '\0');
        auVar32[9] = -(pcVar10[9] == '\0');
        auVar32[10] = -(pcVar10[10] == '\0');
        auVar32[0xb] = -(pcVar10[0xb] == '\0');
        auVar32[0xc] = -(pcVar10[0xc] == '\0');
        auVar32[0xd] = -(pcVar10[0xd] == '\0');
        auVar32[0xe] = -(pcVar10[0xe] == '\0');
        auVar32[0xf] = -(pcVar10[0xf] == '\0');
        for (uVar27 = ((uint16_t)((uint16_t)(SUB161(auVar32 >> 7,0) & 1) |
                                (uint16_t)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                (uint16_t)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                (uint16_t)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                (uint16_t)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                (uint16_t)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                (uint16_t)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                (uint16_t)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                (uint16_t)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                (uint16_t)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                (uint16_t)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                (uint16_t)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                (uint16_t)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                (uint16_t)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                (uint16_t)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                               (uint16_t)(auVar32[0xf] >> 7) << 0xf) ^ 0x7fff) &
                      ((uint32_t)(pcVar10 != pcVar22) << 0xe | 0x3fff); uVar27 != 0;
            uVar27 = uVar27 - 1 & uVar27) {
          uVar21 = 0;
          for (uVar4 = uVar27; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar21 = uVar21 + 1;
          }
          lVar23 = *(int64_t *)(lVar26 + (uint64_t)uVar21 * 8);
          if (lVar23 != 0) {
            if (*(int64_t *)(lVar23 + 0x28) != 0) {
              *(uint8_t (*) [16])(lVar23 + 0x20) = (uint8_t  [16])0x0;
            }
            uVar9 = *(uint64_t *)(lVar23 + 0x10);
            if (uVar9 != 0) {
              pauVar1 = (uint8_t (*) [16])(lVar23 + 0x10);
              if (0 < *(int64_t *)(lVar23 + 0x18)) {
                uVar9 = *(int64_t *)(lVar23 + 0x18) + 1;
                do {
                  uVar24 = *(uint64_t *)(*(int64_t *)*pauVar1 + -0x10 + uVar9 * 8);
                  if (uVar24 != 0) {
                    pcVar13 = (code *)((int64_t)
                                       (int)((param_1 ^ 0xc95e5289) << 0x11 |
                                            (param_1 ^ 0xc95e5289) >> 0xf) + 0x7fffa569312e);
                    (*pcVar13)(pcVar13,0x7fffa569312e,uVar24 >> 0x3d ^ uVar24,0xa9d293f0);
                  }
                  uVar9 = uVar9 - 1;
                } while (1 < uVar9);
                uVar9 = *(uint64_t *)*pauVar1;
              }
              pcVar13 = (code *)((int64_t)(short)~(param_1 ^ 0x1af6) + 0x7fffa568b3b1);
              (*pcVar13)(pcVar13,~(param_1 ^ 0x1af6),uVar9 ^ uVar9 >> 0x3d,0xc73df0bb);
              *pauVar1 = (uint8_t  [16])0x0;
            }
            uVar9 = *(uint64_t *)(lVar23 + 8);
            *(uint64_t *)(lVar23 + 8) = 0;
            (*(code *)((int64_t)(int)((param_1 ^ 0x8b5ae108) + 0x18793de6) + 0x7fffa56971cc))
                      (param_1,uVar9,uVar9 >> 0x3d ^ uVar9);
            (*(code *)(&UNK_7fffa569748e + (int)(param_1 + 0x931fda2c)))();
          }
        }
        if (pcVar10 == pcVar22) break;
        pcVar10 = pcVar10 + 0x10;
        lVar26 = lVar26 + 0x78;
      }
      lVar26 = *(int64_t *)((int64_t)(int)(0x6cde3a73 - param_1) + 0x7fffa47ca163);
      goto LAB_7fffa5428b8e;
    }
  }
  (*(code *)((int64_t)(int)((param_1 + 0x931ac6a9) * 0x20000000 | param_1 + 0x931ac6a9 >> 3) +
            0x7fffa5693dad))();
LAB_7fffa5428bd4:
  lVar26 = (int64_t)(int)((param_1 ^ 0x4a740d3f) + 0xd9543e49);
  uVar6 = *(uint64_t *)pbVar18;
  uVar7 = *(uint64_t *)(pbVar18 + 8);
  uVar8 = *(uint64_t *)(pbVar18 + 0x18);
  *(uint64_t *)(lVar26 + 0x7fffa47c4fc6) = *(uint64_t *)(pbVar18 + 0x10);
  *(uint64_t *)(lVar26 + 0x7fffa47c4fce) = uVar8;
  *(uint64_t *)(lVar26 + 0x7fffa47c4fb6) = uVar6;
  *(uint64_t *)(lVar26 + 0x7fffa47c4fbe) = uVar7;
  uVar9 = *(int64_t *)
           ((int64_t)(short)(0x3130U >> (bVar11 & 0xf) | 0x3130 << 0x10 - (bVar11 & 0xf)) +
           0x7fffa47bed8c) * 0xf + 0xe;
  if (*(int64_t *)
       ((int64_t)(int)(uVar20 * -0x7ca2800 | uVar20 * 0x6b7f06bb >> 0x15) + 0x7fffa47c45f8) == 0) {
    uVar9 = 0;
  }
  uVar24 = (uint64_t)((float)uVar9 * 0.875);
  uVar24 = (int64_t)((float)uVar9 * 0.875 - 9.223372e+18) & (int64_t)uVar24 >> 0x3f | uVar24;
  if (uVar9 < (uint16_t)(0x7800 << (bVar11 & 0xf) | 0x7800U >> 0x10 - (bVar11 & 0xf))) {
    uVar24 = uVar9;
  }
  *(uint64_t *)((int64_t)(int)(0x6cde8a4b - param_1) + 0x7fffa47c5193) = uVar24;
  return;
}


// ============================================================================
// Function : FUN_7fffa5428d10  |  RVA: 0xcb8d10  |  Size: 1035 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5428d10(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint64_t uVar7;
  uint64_t in_RAX;
  uint8_t bVar8;
  uint32_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint16_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  
  lVar10 = 0;
  uRam00007fffa4782655 = 0;
  uRam00007fffa4782680 = 0;
  uRam00007fffa4782688 = 0;
  uRam00007fffa4782670 = 0;
  uRam00007fffa4782678 = 0;
  uRam00007fffa4782660 = 0;
  uRam00007fffa4782668 = 0;
  uRam00007fffa4782690 = 0;
  _uRam00007fffa47826a7 = 0;
  uVar7 = rdtsc();
  lVar11 = (CONCAT44(0x7fff,(int)((uint64_t)uVar7 >> 0x20)) << 0x20 |
           CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar7)) * 0xb96ab88f8fba04f + 0xb;
  lVar15 = -0x70b9be44;
  while( true ) {
    lVar11 = lVar11 * 0xb96ab88f8fba04f + 0xb;
    lVar13 = lVar11 * 0xb96ab88f8fba04f + 0xb;
    *(char *)(lVar10 + 0x7fffa4782655) = (char)((uint64_t)lVar13 >> 0x20);
    *(char *)(lVar10 + 0x7fffa4782654) = (char)((uint64_t)lVar11 >> 0x20);
    lVar11 = lVar13 * 0xb96ab88f8fba04f + 0xb;
    *(char *)(lVar10 + 0x7fffa4782656) = (char)((uint64_t)lVar11 >> 0x20);
    if (lVar15 == -0x70b9be9c) break;
    lVar11 = lVar11 * 0xb96ab88f8fba04f + 0xb;
    *(char *)(lVar10 + 0x7fffa4782657) = (char)((uint64_t)lVar11 >> 0x20);
    lVar10 = lVar10 + 4;
    lVar15 = lVar15 + -4;
  }
  uVar9 = (uint32_t)lVar10;
  lVar15 = (int64_t)(int)((uVar9 - 0x7a691) * 0x20000000 | uVar9 - 0x7a691 >> 3) + 0x7fffa4791b1c;
  lVar11 = (uint64_t)
           ((uint32_t)*(uint8_t *)((int64_t)(int)((uVar9 ^ 0xd8bd89b1) + 0x274182ea) + 0x7fffa4791982) *
            0x24924925 + 0x24924925) * 7;
  uVar14 = (uint64_t)(uint32_t)((int)((uint64_t)lVar11 >> 0x20) << 3);
  bVar1 = *(uint8_t *)((int64_t)(short)(((uint16_t)lVar10 ^ 0xfc4) + 0xee0c) + 0x7fffa4782906);
  bVar2 = *(uint8_t *)(((int64_t)(int)((uVar9 + 1) * 0xbf5df58) ^ 0xffffffffd785936bU) +
                   0x7fffa478efb9);
  *(uint8_t *)(uVar14 + 0xf + lVar15) =
       uRam00007fffa47826a7._3_1_ << 5 | uRam00007fffa47826a7._3_1_ >> 3;
  uVar12 = 0x82cd - (uint16_t)lVar10;
  bVar3 = *(uint8_t *)((int64_t)(short)(uVar12 * 0x40 | uVar12 >> 10) + 0x7fffa4788948);
  bVar8 = (uint8_t)lVar10;
  bVar4 = *(uint8_t *)((int64_t)
                    (int)((0xf57fff2eU >> (bVar8 & 0x1f) | -0xa8000d2 << 0x20 - (bVar8 & 0x1f)) +
                         0x7ffffffc) + 0x7fffa478f7b6);
  *(uint8_t *)(uVar14 + 0x11 + lVar15) = bVar2 << 5 | bVar2 >> 3;
  bVar2 = *(uint8_t *)((int64_t)(int)(uVar9 ^ 0xffff0e7c) + 0x7fffa4791887);
  bVar5 = *(uint8_t *)((int64_t)(short)((short)(uVar9 + 0x52db) + 0x721b) + 0x7fffa478615f);
  bVar6 = *(uint8_t *)((int64_t)
                    (int)~(0xf36b00 << (bVar8 & 0x1f) | 0xf36b00U >> 0x20 - (bVar8 & 0x1f)) +
                   0x7fffa4791a15);
  *(uint8_t *)(uVar14 + 0x12 + lVar15) = bVar5 << 5 | bVar5 >> 3;
  *(uint8_t *)(uVar14 + 0x10 + lVar15) = bVar2 << 5 | bVar2 >> 3;
  *(uint8_t *)(uVar14 + 0xd + lVar15) = bVar3 << 5 | bVar3 >> 3;
  *(uint8_t *)(uVar14 + 0x13 + lVar15) = bVar1 << 5 | bVar1 >> 3;
  *(uint8_t *)(uVar14 + 0xe + lVar15) = bVar6 << 5 | bVar6 >> 3;
  *(uint8_t *)(uVar14 + 0xc + lVar15) = bVar4 << 5 | bVar4 >> 3;
  *(char *)((int64_t)(short)(-0x354 << (bVar8 & 0xf) | 0xfcacU >> 0x10 - (bVar8 & 0xf)) +
           0x7fffa4787959) = (char)((uint64_t)lVar11 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5429120  |  RVA: 0xcb9120  |  Size: 118 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5429120(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = param_2 + 0x117;
  FUN_7fffa517b600(FUN_7fffa517b600,uVar1,
                   ((uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x3e | uVar1 >> 2) ^ uVar1) -
                   0x692f34c9,~(param_1 >> 0x12 ^ param_1));
  return 1;
}


// ============================================================================
// Function : FUN_7fffa54291a0  |  RVA: 0xcb91a0  |  Size: 1980 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa54291a0(void) {
    /* +0xcb91a0 */ __asm { PUSH RBP }
    /* +0xcb91a1 */ __asm { PUSH R15 }
    /* +0xcb91a3 */ __asm { PUSH R12 }
    /* +0xcb91a5 */ __asm { PUSH R14 }
    /* +0xcb91a7 */ __asm { PUSH RDI }
    /* +0xcb91a8 */ __asm { PUSH R13 }
    /* +0xcb91aa */ __asm { PUSH RSI }
    /* +0xcb91ab */ __asm { PUSH RBX }
    /* +0xcb91ac */ __asm { SUB RSP,0x918 }
    /* +0xcb91b3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xcb91bb */ __asm { MOVDQA xmmword ptr [RBP + 0x880],XMM6 }
    /* +0xcb91c3 */ __asm { MOVDQA xmmword ptr [RBP + 0x870],XMM15 }
    /* +0xcb91cc */ __asm { MOVDQA xmmword ptr [RBP + 0x860],XMM8 }
    /* +0xcb91d5 */ __asm { MOVDQA xmmword ptr [RBP + 0x850],XMM12 }
    /* +0xcb91de */ __asm { MOVDQA xmmword ptr [RBP + 0x840],XMM13 }
    /* +0xcb91e7 */ __asm { MOVDQA xmmword ptr [RBP + 0x830],XMM10 }
    /* +0xcb91f0 */ __asm { MOVDQA xmmword ptr [RBP + 0x820],XMM14 }
    /* +0xcb91f9 */ __asm { MOVDQA xmmword ptr [RBP + 0x810],XMM9 }
    /* +0xcb9202 */ __asm { MOVDQA xmmword ptr [RBP + 0x800],XMM7 }
    /* +0xcb920a */ __asm { MOVDQA xmmword ptr [RBP + 0x7f0],XMM11 }
    /* +0xcb9213 */ __asm { MOV qword ptr [RBP + 0x7e8],-0x2 }
    /* +0xcb921e */ __asm { MOV R14,R8 }
    /* +0xcb9221 */ __asm { ROL R14,0x2b }
    /* +0xcb9225 */ __asm { MOV EDI,0x6dbb1b26 }
    /* +0xcb922a */ __asm { MOV R9,R8 }
    /* +0xcb922d */ __asm { ROL R9,0x6 }
    /* +0xcb9231 */ __asm { MOV R10D,0x98c678d8 }
    /* +0xcb9237 */ __asm { MOV EDX,R11D }
    /* +0xcb923a */ __asm { ROL EDX,0x17 }
    /* +0xcb923d */ __asm { MOV R13D,ECX }
    /* +0xcb9240 */ __asm { OR R13D,0x1 }
    /* +0xcb9244 */ __asm { IMUL EDI,R13D }
    /* +0xcb9248 */ __asm { ADD EDI,0xe9c7fc0c }
    /* +0xcb924e */ __asm { ROL EDI,0x11 }
    /* +0xcb9251 */ __asm { XOR R9,R14 }
    /* +0xcb9254 */ __asm { XOR R9,R8 }
    /* +0xcb9257 */ __asm { MOV R8,R9 }
    /* +0xcb925a */ __asm { ROL R8,0xc }
    /* +0xcb925e */ __asm { MOV R14,R9 }
    /* +0xcb9261 */ __asm { ROL R14,0x16 }
    /* +0xcb9265 */ __asm { XOR R14,R8 }
    /* +0xcb9268 */ __asm { XOR R14,R9 }
    /* +0xcb926b */ __asm { MOV R9,R14 }
    /* +0xcb926e */ __asm { ROL R9,0x2c }
    /* +0xcb9272 */ __asm { MOV R8,R14 }
    /* +0xcb9275 */ __asm { ROL R8,0x18 }
    /* +0xcb9279 */ __asm { XOR R8,R9 }
    /* +0xcb927c */ __asm { XOR R8,R14 }
    /* +0xcb927f */ __asm { MOV R9,R8 }
    /* +0xcb9282 */ __asm { ROL R9,0x18 }
    /* +0xcb9286 */ __asm { MOV R14,R8 }
    /* +0xcb9289 */ __asm { ROL R14,0x30 }
    /* +0xcb928d */ __asm { XOR R14,R9 }
    /* +0xcb9290 */ __asm { XOR R14,R8 }
    /* +0xcb9293 */ __asm { MOV R9,R14 }
    /* +0xcb9296 */ __asm { ROL R9,0x20 }
    /* +0xcb929a */ __asm { MOV RBX,R14 }
    /* +0xcb929d */ __asm { ROL RBX,0x30 }
    /* +0xcb92a1 */ __asm { XOR RBX,R9 }
    /* +0xcb92a4 */ __asm { XOR RBX,R14 }
    /* +0xcb92a7 */ __asm { MOV R9,RBX }
    /* +0xcb92aa */ __asm { ROL R9,0x20 }
    /* +0xcb92ae */ __asm { MOV R8D,0xbabe6a3e }
    /* +0xcb92b4 */ __asm { MOV R14,RBX }
    /* +0xcb92b7 */ __asm { ROL R14,0x12 }
    /* +0xcb92bb */ __asm { SUB R8D,R10D }
    /* +0xcb92be */ __asm { ROL RBX,0x1d }
    /* +0xcb92c2 */ __asm { XOR RBX,R9 }
    /* +0xcb92c5 */ __asm { XOR RBX,R14 }
    /* +0xcb92c8 */ __asm { MOV R9,RBX }
    /* +0xcb92cb */ __asm { ROL R9,0x1c }
    /* +0xcb92cf */ __asm { MOV R10,RBX }
    /* +0xcb92d2 */ __asm { ROL R10,0x16 }
    /* +0xcb92d6 */ __asm { XOR R10,R9 }
    /* +0xcb92d9 */ __asm { XOR R10,RBX }
    /* +0xcb92dc */ __asm { MOV R9,R10 }
    /* +0xcb92df */ __asm { ROL R9,0x2c }
    /* +0xcb92e3 */ __asm { IMUL R8D,R13D }
    /* +0xcb92e7 */ __asm { XOR R9,R10 }
    /* +0xcb92ea */ __asm { ROL R10,0x38 }
    /* +0xcb92ee */ __asm { MOV R14,R9 }
    /* +0xcb92f1 */ __asm { XOR R14,R10 }
    /* +0xcb92f4 */ __asm { AND R10,R9 }
    /* +0xcb92f7 */ __asm { MOV R9D,0x83fe46d4 }
    /* +0xcb92fd */ __asm { IMUL R9D,R9D,0x57f01851 }
    /* +0xcb9304 */ __asm { ADD R9D,0x7e50bd6f }
    /* +0xcb930b */ __asm { XOR R9D,ECX }
    /* +0xcb930e */ __asm { CMP R8,0x5f0f874e }
    /* +0xcb9315 */ __asm { CMOVNZ R10,R14 }
    /* +0xcb9319 */ __asm { MOVD XMM2,EDX }
    /* +0xcb931d */ __asm { MOV R8,R10 }
    /* +0xcb9320 */ __asm { ROL R8,0x18 }
    /* +0xcb9324 */ __asm { MOV RDX,R10 }
    /* +0xcb9327 */ __asm { ROL RDX,0x30 }
    /* +0xcb932b */ __asm { XOR RDX,R8 }
    /* +0xcb932e */ __asm { XOR RDX,R10 }
    /* +0xcb9331 */ __asm { MOV R10,RDX }
    /* +0xcb9334 */ __asm { ROL R10,0x30 }
    /* +0xcb9338 */ __asm { MOV R14,RDX }
    /* +0xcb933b */ __asm { ROL R14,0x20 }
    /* +0xcb933f */ __asm { XOR R14,R10 }
    /* +0xcb9342 */ __asm { XOR R14,RDX }
    /* +0xcb9345 */ __asm { ROL R14,0x20 }
    /* +0xcb9349 */ __asm { MOV R8D,R11D }
    /* +0xcb934c */ __asm { ROL R8D,0x4 }
    /* +0xcb9350 */ __asm { MOVD XMM1,R8D }
    /* +0xcb9355 */ __asm { PXOR XMM1,XMM2 }
    /* +0xcb9359 */ __asm { MOVD R8D,XMM1 }
    /* +0xcb935e */ __asm { XOR R8D,R11D }
    /* +0xcb9361 */ __asm { MOV EDX,R8D }
    /* +0xcb9364 */ __asm { ROL EDX,0xe }
    /* +0xcb9367 */ __asm { MOV R10D,R8D }
    /* +0xcb936a */ __asm { ROL R10D,0x8 }
    /* +0xcb936e */ __asm { XOR R10D,EDX }
    /* +0xcb9371 */ __asm { MOVSXD R11,EDI }
    /* +0xcb9374 */ __asm { XOR R10D,R8D }
    /* +0xcb9377 */ __asm { MOV R8D,R10D }
    /* +0xcb937a */ __asm { ROL R8D,0x1c }
    /* +0xcb937e */ __asm { MOV EDX,R10D }
    /* +0xcb9381 */ __asm { ROL EDX,0x10 }
    /* +0xcb9384 */ __asm { MOVD XMM2,R8D }
    /* +0xcb9389 */ __asm { MOVD XMM1,EDX }
    /* +0xcb938d */ __asm { PXOR XMM1,XMM2 }
    /* +0xcb9391 */ __asm { MOVD EBX,XMM1 }
    /* +0xcb9395 */ __asm { XOR EBX,R10D }
    /* +0xcb9398 */ __asm { ROL EBX,0x8 }
    /* +0xcb939b */ __asm { CMP R9,R11 }
    /* +0xcb939e */ __asm { JA 0x7fffa54293ab }
    /* +0xcb93a0 */ __asm { CMP qword ptr [R14 + 0x20],0x0 }
    /* +0xcb93a5 */ __asm { JNZ 0x7fffa54294f4 }
    /* +0xcb93ab */ __asm { MOV R8D,0x7d406eae }
    /* +0xcb93b1 */ __asm { MOVD XMM2,R8D }
    /* +0xcb93b6 */ __asm { MOVD XMM1,ECX }
    /* +0xcb93ba */ __asm { PADDD XMM1,XMM2 }
    /* +0xcb93be */ __asm { MOVD R8D,XMM1 }
    /* +0xcb93c3 */ __asm { XOR R8D,0x67f684c7 }
    /* +0xcb93ca */ __asm { MOV dword ptr [RBP + 0x50],R8D }
    /* +0xcb93ce */ __asm { MOV R8D,dword ptr [RBP + 0x50] }
    /* +0xcb93d2 */ __asm { TEST R8B,0x1 }
    /* +0xcb93d6 */ __asm { JNZ 0x7fffa543c85b }
    /* +0xcb93dc */ __asm { MOVQ XMM2,RCX }
    /* +0xcb93e1 */ __asm { MOV R10,-0x1b78b852ccd9ba7b }
    /* +0xcb93eb */ __asm { MOVQ XMM1,R10 }
    /* +0xcb93f0 */ __asm { PSUBQ XMM2,XMM1 }
    /* +0xcb93f4 */ __asm { MOVQ R10,XMM2 }
    /* +0xcb93f9 */ __asm { ADD R10,-0x56f7a0d0 }
    /* +0xcb9400 */ __asm { CMP R14,R10 }
    /* +0xcb9403 */ __asm { NOP }
    /* +0xcb9404 */ __asm { NOP }
    /* +0xcb9405 */ __asm { NOP }
    /* +0xcb9406 */ __asm { NOP }
    /* +0xcb9407 */ __asm { NOP }
    /* +0xcb9408 */ __asm { LEA R8D,[RBX + -0x60000] }
    /* +0xcb940f */ __asm { CMP R8D,0x6000 }
    /* +0xcb9416 */ __asm { JC 0x7fffa5429585 }
    /* +0xcb941c */ __asm { LEA R8D,[RBX + -0x463b000] }
    /* +0xcb9423 */ __asm { CMP R8D,0x2000 }
    /* +0xcb942a */ __asm { JC 0x7fffa5429585 }
    /* +0xcb9430 */ __asm { MOVD XMM2,EBX }
    /* +0xcb9434 */ __asm { PSHUFD XMM2,XMM2,0x0 }
    /* +0xcb9439 */ __asm { MOVDQA XMM1,xmmword ptr [0x7fffa56b26a0] }
    /* +0xcb9441 */ __asm { MOVDQA XMM4,xmmword ptr [0x7fffa57847a0] }
    /* +0xcb9449 */ __asm { PADDD XMM4,XMM2 }
    /* +0xcb944d */ __asm { PXOR XMM4,XMM1 }
    /* +0xcb9451 */ __asm { PCMPGTD XMM4,xmmword ptr [0x7fffa57847b0] }
    /* +0xcb9459 */ __asm { MOVMSKPS R8D,XMM4 }
    /* +0xcb945d */ __asm { XOR R8D,0xf }
    /* +0xcb9461 */ __asm { TEST R8B,R8B }
    /* +0xcb9464 */ __asm { JNZ 0x7fffa5429585 }
    /* +0xcb946a */ __asm { MOVDQA XMM3,xmmword ptr [0x7fffa5784720] }
    /* +0xcb9472 */ __asm { PAND XMM3,XMM2 }
    /* +0xcb9476 */ __asm { MOVDQA XMM4,xmmword ptr [0x7fffa5784730] }
    /* +0xcb947e */ __asm { PAND XMM4,XMM2 }
    /* +0xcb9482 */ __asm { MOVDQA XMM0,xmmword ptr [0x7fffa5784740] }
    /* +0xcb948a */ __asm { PAND XMM0,XMM2 }
    /* +0xcb948e */ __asm { PADDD XMM2,xmmword ptr [0x7fffa5784750] }
    /* +0xcb9496 */ __asm { PCMPEQD XMM0,xmmword ptr [0x7fffa5784760] }
    /* +0xcb949e */ __asm { PCMPEQD XMM4,xmmword ptr [0x7fffa5784770] }
    /* +0xcb94a6 */ __asm { PACKSSDW XMM4,XMM0 }
    /* +0xcb94aa */ __asm { PCMPEQD XMM3,xmmword ptr [0x7fffa5784780] }
    /* +0xcb94b2 */ __asm { PACKSSWB XMM4,XMM4 }
    /* +0xcb94b6 */ __asm { PXOR XMM2,XMM1 }
    /* +0xcb94ba */ __asm { PCMPGTD XMM2,xmmword ptr [0x7fffa5784790] }
    /* +0xcb94c2 */ __asm { PACKSSDW XMM3,XMM3 }
    /* +0xcb94c6 */ __asm { PACKSSDW XMM2,XMM2 }
    /* +0xcb94ca */ __asm { PCMPEQD XMM1,XMM1 }
    /* +0xcb94ce */ __asm { PXOR XMM1,XMM2 }
    /* +0xcb94d2 */ __asm { PACKSSWB XMM1,XMM3 }
    /* +0xcb94d6 */ __asm { SHUFPS XMM4,XMM1,0x64 }
    /* +0xcb94da */ __asm { PMOVMSKB R8D,XMM4 }
    /* +0xcb94df */ __asm { TEST R8W,R8W }
    /* +0xcb94e3 */ __asm { JNZ 0x7fffa5429585 }
    /* +0xcb94e9 */ __asm { MOV dword ptr [RBP + 0x50],0x961258b6 }
    /* +0xcb94f0 */ __asm { MOV R8D,dword ptr [RBP + 0x50] }
    /* +0xcb94f4 */ __asm { LEA RDX,[0x7fffa47803a5] }
    /* +0xcb94fb */ __asm { MOV R10,-0x419b1c8a3cea6ad8 }
    /* +0xcb9505 */ __asm { CMP RDX,R10 }
    /* +0xcb9508 */ __asm { NOP }
    /* +0xcb9509 */ __asm { NOP }
    /* +0xcb950a */ __asm { NOP }
    /* +0xcb950b */ __asm { NOP }
    /* +0xcb950c */ __asm { NOP }
    /* +0xcb950d */ __asm { MOV EDI,0x81fce15e }
    /* +0xcb9512 */ __asm { XOR EDI,0x88b5ec72 }
    /* +0xcb9518 */ __asm { ROL EDI,0x9 }
    /* +0xcb951b */ __asm { ADD EDI,ECX }
    /* +0xcb951d */ __asm { MOVZX R10D,uint8_t ptr [RDX + 0x41ea] }
    /* +0xcb9525 */ __asm { MOVZX R8D,uint8_t ptr [RDX + R10*0x4 + 0x41f4] }
    /* +0xcb952e */ __asm { NOT R8B }
    /* +0xcb9531 */ __asm { ROL R8B,0x3 }
    /* +0xcb9535 */ __asm { MOV uint8_t ptr [RBP + 0x50],R8B }
    /* +0xcb9539 */ __asm { MOVZX R8D,uint8_t ptr [RDX + R10*0x4 + 0x41f5] }
    /* +0xcb9542 */ __asm { NOT R8B }
    /* +0xcb9545 */ __asm { ROL R8B,0x3 }
    /* +0xcb9549 */ __asm { MOV uint8_t ptr [RBP + 0x51],R8B }
    /* +0xcb954d */ __asm { MOVZX R8D,uint8_t ptr [RDX + R10*0x4 + 0x41f6] }
    /* +0xcb9556 */ __asm { NOT R8B }
    /* +0xcb9559 */ __asm { ROL R8B,0x3 }
    /* +0xcb955d */ __asm { MOV uint8_t ptr [RBP + 0x52],R8B }
    /* +0xcb9561 */ __asm { MOVZX R8D,uint8_t ptr [RDX + R10*0x4 + 0x41f7] }
    /* +0xcb956a */ __asm { NOT R8B }
    /* +0xcb956d */ __asm { ROL R8B,0x3 }
    /* +0xcb9571 */ __asm { MOV uint8_t ptr [RBP + 0x53],R8B }
    /* +0xcb9575 */ __asm { MOV R8D,0x97cd0fa7 }
    /* +0xcb957b */ __asm { XOR R8D,dword ptr [RBP + 0x50] }
    /* +0xcb957f */ __asm { BT R8D,R8D }
    /* +0xcb9583 */ __asm { NOP }
    /* +0xcb9584 */ __asm { NOP }
    /* +0xcb9585 */ __asm { NOP }
    /* +0xcb9586 */ __asm { NOP }
    /* +0xcb9587 */ __asm { NOP }
    /* +0xcb9588 */ __asm { NOP }
    /* +0xcb9589 */ __asm { NOP }
    /* +0xcb958a */ __asm { NOP }
    /* +0xcb958b */ __asm { NOP }
    /* +0xcb958c */ __asm { NOP }
    /* +0xcb958d */ __asm { NOP }
    /* +0xcb958e */ __asm { NOP }
    /* +0xcb958f */ __asm { NOP }
    /* +0xcb9590 */ __asm { NOP }
    /* +0xcb9591 */ __asm { NOP }
    /* +0xcb9592 */ __asm { NOP }
    /* +0xcb9593 */ __asm { NOP }
    /* +0xcc9dfc */ __asm { MOV EAX,0xb33a669 }
    /* +0xcc9e01 */ __asm { MOVD XMM2,EAX }
    /* +0xcc9e05 */ __asm { MOVDQA XMM1,XMM8 }
    /* +0xcc9e0a */ __asm { PSUBD XMM1,XMM2 }
    /* +0xcc9e0e */ __asm { MOVD EAX,XMM1 }
    /* +0xcc9e12 */ __asm { ADD EAX,0xa13bdbfb }
    /* +0xcc9e17 */ __asm { XOR EAX,ESI }
    /* +0xcc9e19 */ __asm { MOV dword ptr [RBP + 0x710],EAX }
    /* +0xcc9e1f */ __asm { MOV EAX,dword ptr [RBP + 0x710] }
    /* +0xcc9e25 */ __asm { CMP EAX,0x38357ed3 }
    /* +0xcc9e2a */ __asm { NOP }
    /* +0xcc9e2b */ __asm { NOP }
    /* +0xcc9e2c */ __asm { NOP }
    /* +0xcc9e2d */ __asm { NOP }
    /* +0xcc9e2e */ __asm { NOP }
    /* +0xcc9e2f */ __asm { NOP }
    /* +0xcc9e30 */ __asm { NOP }
    /* +0xcc9e31 */ __asm { NOP }
    /* +0xcc9e32 */ __asm { NOP }
    /* +0xcc9e33 */ __asm { NOP }
    /* +0xcc9e34 */ __asm { NOP }
    /* +0xcc9e35 */ __asm { NOP }
    /* +0xcc9e36 */ __asm { NOP }
    /* +0xcc9e37 */ __asm { NOP }
    /* +0xcc9e38 */ __asm { NOP }
    /* +0xcc9e39 */ __asm { NOP }
    /* +0xcc9e3a */ __asm { PUSHFQ }
    /* +0xcc9e3b */ __asm { POP RDX }
    /* +0xcc9e3c */ __asm { AND RDX,0x100 }
    /* +0xcc9e43 */ __asm { JZ 0x7fffa5439e50 }
    /* +0xcc9e45 */ __asm { AND EBX,dword ptr [RBX] }
    /* +0xcc9e47 */ __asm { JMP 0x7fffa5439e44 }
    /* +0xcc9e50 */ __asm { MOV EAX,0x1b87598d }
    /* +0xcc9e55 */ __asm { ADD EAX,0xbb08ad30 }
    /* +0xcc9e5a */ __asm { XOR EAX,0x3267ed85 }
    /* +0xcc9e5f */ __asm { ADD EAX,R15D }
    /* +0xcc9e62 */ __asm { CMP R8D,EAX }
    /* +0xcc9e65 */ __asm { JZ 0x7fffa5439fd7 }
    /* +0xcc9e6b */ __asm { MOV dword ptr [RBP + 0x710],0xf7e64830 }
    /* +0xcc9e75 */ __asm { MOV R8D,dword ptr [RBP + 0x710] }
    /* +0xcc9e7c */ __asm { MOV R8W,0x2c07 }
    /* +0xcc9e81 */ __asm { MOVD XMM2,R8D }
    /* +0xcc9e86 */ __asm { MOVD XMM1,dword ptr [RBP + 0x28] }
    /* +0xcc9e8b */ __asm { PMULLW XMM1,XMM2 }
    /* +0xcc9e8f */ __asm { MOVD R8D,XMM1 }
    /* +0xcc9e94 */ __asm { SUB R8D,R15D }
    /* +0xcc9e97 */ __asm { ROL R8W,0xb }
    /* +0xcc9e9c */ __asm { ADD R8D,0x5c17 }
    /* +0xcc9ea3 */ __asm { MOVZX R9D,R8W }
    /* +0xcc9ea7 */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0xcc9eab */ __asm { MOV EAX,0xfe000001 }
    /* +0xcc9eb0 */ __asm { MOV RCX,-0x13dd8f81bb1354b }
    /* +0xcc9eba */ __asm { CMP R10,RCX }
    /* +0xcc9ebd */ __asm { JNZ 0x7fffa543a5d9 }
    /* +0xcc9ec3 */ __asm { PUSH RDX }
    /* +0xcc9ec4 */ __asm { XOR EAX,0xc721e6e2 }
    /* +0xcc9ec9 */ __asm { PUSH RCX }
    /* +0xcc9eca */ __asm { MOV BPL,uint8_t ptr [RBP + -0x6591ec19] }
    /* +0xcc9fd7 */ __asm { MOV dword ptr [RBP + 0x710],0x20280203 }
    /* +0xcc9fe1 */ __asm { MOV R8D,dword ptr [RBP + 0x710] }
    /* +0xcc9fe8 */ __asm { LEA R11,[0x7fffa47cdcde] }
    /* +0xcc9fef */ __asm { LEA R10,[0x7fffa47c791b] }
    /* +0xcc9ff6 */ __asm { MOV R8D,0xd2c1af84 }
    /* +0xcc9ffc */ __asm { MOV AX,0x6ada }
    /* +0xcca000 */ __asm { XOR EAX,0x7a14 }
    /* +0xcca005 */ __asm { MOV ECX,ESI }
    /* +0xcca007 */ __asm { ROL AX,CL }
    /* +0xcca00a */ __asm { MOVD XMM2,R8D }
    /* +0xcca00f */ __asm { PXOR XMM2,XMM14 }
    /* +0xcca014 */ __asm { MOVD R8D,XMM2 }
    /* +0xcca019 */ __asm { MOV ECX,R15D }
    /* +0xcca01c */ __asm { ROR R8D,CL }
    /* +0xcca01f */ __asm { ROL R8D,0x4 }
    /* +0xcca023 */ __asm { MOVSXD R8,R8D }
    /* +0xcca026 */ __asm { MOV R9D,dword ptr [R11 + R8*0x1 + 0x4] }
    /* +0xcca02b */ __asm { IMUL EAX,EAX,0x701b }
    /* +0xcca031 */ __asm { NOT EAX }
    /* +0xcca033 */ __asm { MOVSX RAX,AX }
    /* +0xcca037 */ __asm { MOV EAX,dword ptr [R10 + RAX*0x1] }
    /* +0xcca03b */ __asm { MOV R8D,R15D }
    /* +0xcca03e */ __asm { SUB R8D,ESI }
    /* +0xcca041 */ __asm { ADD R8D,0xbdad8d50 }
    /* +0xcca048 */ __asm { MOVD XMM2,R8D }
    /* +0xcca04d */ __asm { XOR R8D,R8D }
    /* +0xcca050 */ __asm { LEA R11,[0x7fffa47c3bfc] }
    /* +0xcca057 */ __asm { NOP word ptr [RAX + RAX*0x1] }
    /* +0xcca060 */ __asm { MOV ECX,0xdd225325 }
    /* +0xcca065 */ __asm { MOVD XMM1,ECX }
    /* +0xcca069 */ __asm { PXOR XMM1,XMM14 }
    /* +0xcca06e */ __asm { MOVD ECX,XMM1 }
    /* +0xcca072 */ __asm { NOT ECX }
    /* +0xcca074 */ __asm { ROL ECX,0x3 }
    /* +0xcca077 */ __asm { MOV RDI,qword ptr [RCX] }
    /* +0xcca07a */ __asm { MOV ECX,EAX }
    /* +0xcca07c */ __asm { MOV R10D,0x317d3582 }
    /* +0xcca082 */ __asm { MOV BX,0xc5b7 }
    /* +0xcca086 */ __asm { MOVD XMM1,R10D }
    /* +0xcca08b */ __asm { MOV R10,R9 }
    /* +0xcca08e */ __asm { SHL R10,0x20 }
    /* +0xcca092 */ __asm { OR R10,RCX }
    /* +0xcca095 */ __asm { MOV R13D,R9D }
    /* +0xcca098 */ __asm { OR R13D,0x1 }
    /* +0xcca09c */ __asm { PSUBD XMM1,XMM8 }
    /* +0xcca0a1 */ __asm { MOVD ECX,XMM1 }
    /* +0xcca0a5 */ __asm { IMUL R12D,ECX,-0x68b21355 }
    /* +0xcca0ac */ __asm { MOV ECX,ESI }
    /* +0xcca0ae */ __asm { ROL R12D,CL }
    /* +0xcca0b1 */ __asm { SHR RDI,0x17 }
    /* +0xcca0b5 */ __asm { MOVSXD R14,R12D }
    /* +0xcca0b8 */ __asm { MOV ECX,0x12d1d457 }
    /* +0xcca0bd */ __asm { MOVD XMM1,ECX }
    /* +0xcca0c1 */ __asm { PADDD XMM1,XMM2 }
    /* +0xcca0c5 */ __asm { XOR EBX,0x68e6 }
    /* +0xcca0cb */ __asm { MOV ECX,ESI }
    /* +0xcca0cd */ __asm { ROR BX,CL }
    /* +0xcca0d0 */ __asm { MOVD ECX,XMM1 }
    /* +0xcca0d4 */ __asm { XOR EBX,R15D }
    /* +0xcca0d7 */ __asm { CMP R14,RCX }
    /* +0xcca0da */ __asm { LEA ECX,[R9 + 0x1] }
    /* +0xcca0de */ __asm { CMOVG ECX,R13D }
    /* +0xcca0e2 */ __asm { TEST R9D,R9D }
    /* +0xcca0e5 */ __asm { MOV R9D,ECX }
    /* +0xcca0e8 */ __asm { CMOVNS R9D,R8D }
    /* +0xcca0ec */ __asm { CMP EAX,EDI }
    /* +0xcca0ee */ __asm { MOV EAX,EDI }
    /* +0xcca0f0 */ __asm { CMOVZ R9D,ECX }
    /* +0xcca0f4 */ __asm { MOV RCX,R9 }
    /* +0xcca0f7 */ __asm { SHL RCX,0x20 }
    /* +0xcca0fb */ __asm { OR RCX,RAX }
    /* +0xcca0fe */ __asm { MOV R14,R11 }
    /* +0xcca101 */ __asm { MOVSX R15,BX }
    /* +0xcca105 */ __asm { MOV RAX,R10 }
    /* +0xcca108 */ __asm { CMPXCHG.LOCK qword ptr [R14 + R15*0x1],RCX }
    /* +0xcca10e */ __asm { JZ 0x7fffa543a123 }
    /* +0xcca110 */ __asm { MOV R9,RAX }
    /* +0xcca113 */ __asm { SHR R9,0x20 }
    /* +0xcca117 */ __asm { MOV R15,qword ptr [RBP + 0x778] }
    /* +0xcca11e */ __asm { JMP 0x7fffa543a060 }
    /* +0xcca123 */ __asm { MOV dword ptr [RBP + 0x710],0xccaf2fcf }
    /* +0xcca12d */ __asm { MOV R8D,dword ptr [RBP + 0x710] }
    /* +0xcca134 */ __asm { MOV R10D,dword ptr [RBP + 0x28] }
    /* +0xcca138 */ __asm { MOVD XMM2,R10D }
    /* +0xcca13d */ __asm { MOV AX,0xa356 }
    /* +0xcca141 */ __asm { MOVD XMM1,EAX }
    /* +0xcca145 */ __asm { PMULLW XMM1,XMM2 }
    /* +0xcca149 */ __asm { MOVD EAX,XMM1 }
    /* +0xcca14d */ __asm { XOR EAX,0xffffe9a5 }
    /* +0xcca152 */ __asm { MOV RCX,qword ptr [RBP + 0x778] }
    /* +0xcca159 */ __asm { ADD EAX,ECX }
    /* +0xcca15b */ __asm { MOVZX EAX,AX }
    /* +0xcca15e */ __asm { CMP R8D,EAX }
    /* +0xcca161 */ __asm { NOP }
    /* +0xcca162 */ __asm { NOP }
    /* +0xcca163 */ __asm { NOP }
    /* +0xcca164 */ __asm { NOP }
    /* +0xcca165 */ __asm { NOP }
    /* +0xcca166 */ __asm { TEST RDX,RDX }
    /* +0xcca169 */ __asm { MOV R11,qword ptr [RBP + 0x5d8] }
    /* +0xcca170 */ __asm { NOP }
    /* +0xcca171 */ __asm { NOP }
    /* +0xcca172 */ __asm { NOP }
    /* +0xcca173 */ __asm { NOP }
    /* +0xcca174 */ __asm { NOP }
    /* +0xcca175 */ __asm { NOP }
    /* +0xcca176 */ __asm { NOP }
    /* +0xcca177 */ __asm { NOP }
    /* +0xcca178 */ __asm { NOP }
    /* +0xcca179 */ __asm { CMP R9D,0x141 }
    /* +0xcca180 */ __asm { JGE 0x7fffa543a5b6 }
    /* +0xcca186 */ __asm { MOV R8W,0x21a0 }
    /* +0xcca18b */ __asm { ADD R8D,0xffffa6cf }
    /* +0xcca192 */ __asm { ROL R8W,CL }
    /* +0xcca196 */ __asm { IMUL R10D,R8D }
    /* +0xcca19a */ __asm { MOVZX R9D,R10W }
    /* +0xcca19e */ __asm { MOV R10,qword ptr GS:[R9] }
    /* +0xcca1a2 */ __asm { MOV R8D,0x40b679ea }
    /* +0xcca1a8 */ __asm { ADD R8D,ESI }
    /* +0xcca1ab */ __asm { ROL R8D,0x2 }
    /* +0xcca1af */ __asm { IMUL R11D,R8D }
    /* +0xcca1b3 */ __asm { ROL R11D,0x2 }
    /* +0xcca1b7 */ __asm { MOV R10,qword ptr [R10 + 0x60] }
    /* +0xcca1bb */ __asm { MOV RAX,-0x7073abfcd04cd60d }
    /* +0xcca1c5 */ __asm { MOVQ XMM2,RAX }
    /* +0xcca1ca */ __asm { IMUL RAX,R10 }
    /* +0xcca1ce */ __asm { CMP R11,0x53e99df5 }
    /* +0xcca1d5 */ __asm { MOVQ XMM1,R10 }
    /* +0xcca1da */ __asm { PADDQ XMM1,XMM2 }
    /* +0xcca1de */ __asm { MOVQ R10,XMM1 }
    /* +0xcca1e3 */ __asm { CMOVZ R10,RAX }
    /* +0xcca1e7 */ __asm { MOV EAX,0xfe000001 }
    /* +0xcca1ec */ __asm { MOV RCX,0x76538e21021630ff }
    /* +0xcca1f6 */ __asm { CMP R10,RCX }
    /* +0xcca1f9 */ __asm { JNZ 0x7fffa543a5d9 }
    /* +0xcca1ff */ __asm { JS 0x7fffa543a1dd }
    /* +0xcca201 */ __asm { PUSH RDX }
    /* +0xcca202 */ __asm { STI }
    /* +0xcca5b6 */ __asm { MOV dword ptr [RBP + 0x710],0x7882b85 }
    /* +0xcca5c0 */ __asm { MOV R8D,dword ptr [RBP + 0x710] }
    /* +0xcca5c7 */ __asm { TEST R8D,R8D }
    /* +0xcca5ca */ __asm { NOP }
    /* +0xcca5cb */ __asm { NOP }
    /* +0xcca5cc */ __asm { NOP }
    /* +0xcca5cd */ __asm { NOP }
    /* +0xcca5ce */ __asm { NOP }
    /* +0xcca5cf */ __asm { TEST RDX,RDX }
    /* +0xcca5d2 */ __asm { NOP }
    /* +0xcca5d3 */ __asm { NOP }
    /* +0xcca5d4 */ __asm { NOP }
    /* +0xcca5d5 */ __asm { NOP }
    /* +0xcca5d6 */ __asm { NOP }
    /* +0xcca5d7 */ __asm { XOR EAX,EAX }
    /* +0xcca5d9 */ __asm { MOV RDX,0x0 }
    /* +0xcca5e0 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xcca5e7 */ __asm { NOP }
    /* +0xcca5e8 */ __asm { JMP 0x7fffa5442f58 }
    /* +0xccc82d */ __asm { IMUL EDI,EBP }
    /* +0xccc830 */ __asm { MOVZX EDI,DI }
    /* +0xccc833 */ __asm { XOR EAX,0xfffff463 }
    /* +0xccc838 */ __asm { SUB EAX,dword ptr [RBP + 0x778] }
    /* +0xccc83e */ __asm { XOR EAX,ESI }
    /* +0xccc840 */ __asm { CWDE }
    /* +0xccc841 */ __asm { MOV dword ptr [R10 + RCX*0x1 + 0x4],EAX }
    /* +0xccc846 */ __asm { MOV uint8_t ptr [R11 + R15*0x1],0x1 }
    /* +0xccc84b */ __asm { MOV R15,qword ptr [RBP + 0x778] }
    /* +0xccc852 */ __asm { MOV dword ptr [R9 + RDX*0x1],EDI }
    /* +0xccc856 */ __asm { JMP 0x7fffa5439dfc }
    /* +0xccc85b */ __asm { CMPSB RDI,RSI }
    /* +0xccc85c */ __asm { OUTSD DX,RSI }
    /* +0xccc85d */ __asm { XCHG EAX,EBP }
    /* +0xccc85e */ __asm { ADD AL,0xe9 }
    /* +0xccc860 */ __asm { JS 0x7fffa543c82d }
    /* +0xcd2f58 */ __asm { MOVAPS XMM11,xmmword ptr [RBP + 0x7f0] }
    /* +0xcd2f60 */ __asm { MOVAPS XMM7,xmmword ptr [RBP + 0x800] }
    /* +0xcd2f67 */ __asm { MOVAPS XMM9,xmmword ptr [RBP + 0x810] }
    /* +0xcd2f6f */ __asm { MOVAPS XMM14,xmmword ptr [RBP + 0x820] }
    /* +0xcd2f77 */ __asm { MOVAPS XMM10,xmmword ptr [RBP + 0x830] }
    /* +0xcd2f7f */ __asm { MOVAPS XMM13,xmmword ptr [RBP + 0x840] }
    /* +0xcd2f87 */ __asm { MOVAPS XMM12,xmmword ptr [RBP + 0x850] }
    /* +0xcd2f8f */ __asm { MOVAPS XMM8,xmmword ptr [RBP + 0x860] }
    /* +0xcd2f97 */ __asm { MOVAPS XMM15,xmmword ptr [RBP + 0x870] }
    /* +0xcd2f9f */ __asm { MOVAPS XMM6,xmmword ptr [RBP + 0x880] }
    /* +0xcd2fa6 */ __asm { ADD RSP,0x918 }
    /* +0xcd2fad */ __asm { POP RBX }
    /* +0xcd2fae */ __asm { POP RSI }
    /* +0xcd2faf */ __asm { POP R13 }
    /* +0xcd2fb1 */ __asm { POP RDI }
    /* +0xcd2fb2 */ __asm { POP R14 }
    /* +0xcd2fb4 */ __asm { POP R12 }
    /* +0xcd2fb6 */ __asm { POP R15 }
    /* +0xcd2fb8 */ __asm { POP RBP }
    /* +0xcd2fb9 */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa5443280  |  RVA: 0xcd3280  |  Size: 256 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5443280(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  int64_t lVar4;
  
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x768) + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    lVar4 = *(int64_t *)(param_2 + 0x768);
    LOCK();
    puVar2 = (uint32_t *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(lVar4 + 0x10,param_2,uVar3);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5443380  |  RVA: 0xcd3380  |  Size: 44 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa5443380(uint64_t *param_1,int64_t param_2)

{
  int iVar1;
  
  *(uint64_t **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint32_t *)(param_2 + 0x20) = (uint32_t)(iVar1 == -0x1f928c9d);
  return *(uint32_t *)(param_2 + 0x20);
}


// ============================================================================
// Function : FUN_7fffa5444460  |  RVA: 0xcd4460  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5444460(uint64_t param_1,uint64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t unaff_RDI;
  uint64_t in_R10;
  uint64_t uVar8;
  
  uVar5 = in_R10 | param_2;
  uVar8 = param_2 ^ in_R10;
  lVar4 = (param_2 & in_R10 & unaff_RDI) * -0x6c413895 + (unaff_RDI & uVar5) * -0x69ca08e1 +
          (unaff_RDI & uVar8) * -0xad38c784 +
          (~(uVar5 | unaff_RDI) + (unaff_RDI ^ uVar5)) * -0xd60b4176 +
          ((uVar8 | unaff_RDI) - (uVar8 ^ unaff_RDI)) * 0x40f78eef;
  bVar1 = (uint8_t)lVar4 & 7;
  uVar3 = (uint32_t)lVar4;
  uVar2 = (uint16_t)lVar4;
  lVar7 = (int64_t)(int)(uVar3 + 0x29f3d04a);
  *(uint8_t *)((int64_t)(short)(uVar2 ^ 0xd487) + 0x7fffa47c5c5a) = '\0' << bVar1 | 0U >> 8 - bVar1;
  *(uint64_t *)(lVar7 + 0x7fffa47ce08f) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47ce097) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47ce09f) = 0;
  *(uint64_t *)((int64_t)(short)~((uVar2 ^ 0xa6c8) * -0x3e01) + 0x7fffa47c06b7) =
       (uint64_t)(uVar3 + 0x29f4be8a);
  uVar5 = rdtsc();
  lVar6 = (uVar5 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar5)) * 0x2cf5bdc95e4c890;
  lVar7 = 2;
  while( true ) {
    lVar6 = lVar6 * 0x2cf5bdc95e4c890 + 0x1ee8f27a70d49e30;
    *(char *)(lVar7 + (int64_t)(int)((uVar3 | 1) * -0xa581599) + 0x7fffa47cd559) =
         (char)((uint64_t)lVar6 >> 0x20);
    lVar6 = lVar6 * 0x2cf5bdc95e4c890 +
            ~((0xfe1170d92efdf792U - lVar4) * 0x10 | 0xfe1170d92efdf792U - lVar4 >> 0x3c);
    *(char *)(lVar7 + (int64_t)(short)((uVar2 | 1) * -0x4cf3) + 0x7fffa47c6a30) =
         (char)((uint64_t)lVar6 >> 0x20);
    lVar6 = lVar6 * 0x2cf5bdc95e4c890 + (lVar4 + 0x5c6eb38a33ef787a) * 0xfaf47b3d;
    *(char *)(lVar7 + (int64_t)(short)(uVar2 + 0x8ae6) + 0x7fffa47c25e0) =
         (char)((uint64_t)lVar6 >> 0x20);
    if (lVar7 == 0x4a) break;
    lVar7 = lVar7 + 3;
  }
  bVar1 = (uint8_t)lVar4 & 0x1f;
  uVar8 = (uint64_t)
          *(uint8_t *)((int64_t)(short)~(uVar2 * -0x800 | (uint16_t)(0x1bc0 - uVar2) >> 5) +
                   0x7fffa47c491e) * 0x55555556 + 0x55555556;
  uVar5 = uVar8 & 0xffffffff;
  if (uVar3 != 0xd60b4176) {
    uVar5 = uVar8 | 0xfffffffe;
  }
  *(uint64_t *)
   (((int64_t)(short)((uVar2 ^ 0xc856) + 0xb86d) ^ 0xffffffffffff88b4U) + 0x7fffa47c2916 +
   (uVar5 * 3 >> 0x20) * 8) = 0;
  *(char *)((int64_t)(int)(-0x261f801 << bVar1 | 0xfd9e07ffU >> 0x20 - bVar1) + 0x7fffa47c8aca) =
       (char)(uVar5 * 3 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5444750  |  RVA: 0xcd4750  |  Size: 43 bytes
// Callers  : none
// Callees  : thunk_FUN_7fffa55eeda0@0x913000
// ============================================================================
uint64_t * FUN_7fffa5444750(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_7fffa55eeda0(param_1,0x18);
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa5444780  |  RVA: 0xcd4780  |  Size: 1 bytes
// Callers  : FUN_7fffa5244df0@0xad4df0
// Callees  : none
// ============================================================================
void FUN_7fffa5444780(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5444790  |  RVA: 0xcd4790  |  Size: 96 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5444790(uint64_t param_1,uint16_t param_2)

{
  uint32_t *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  uint32_t uVar6;
  int64_t in_RAX;
  int iVar7;
  uint64_t uVar8;
  char cVar9;
  uint32_t unaff_EBX;
  int unaff_EBP;
  uint32_t unaff_0000002c;
  uint8_t *unaff_RSI;
  int64_t unaff_RDI;
  
  puVar1 = (uint32_t *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x7e4263df);
  *puVar1 = *puVar1 & unaff_EBX;
  pcVar2 = (char *)(in_RAX * 3 + -0x60);
  cVar3 = *pcVar2;
  cVar9 = (char)(unaff_EBX >> 8);
  *pcVar2 = *pcVar2 + cVar9;
  if (SCARRY1(cVar3,cVar9)) {
    out(*unaff_RSI,param_2);
    iVar4 = *(int *)(unaff_RDI + 0x557272a5);
    uVar8 = CONCAT71((int7)((uint64_t)param_1 >> 8),(uint8_t)param_1 ^ (uint8_t)((uint64_t)param_1 >> 8)
                    );
    iVar7 = (int)uVar8;
    func_0x7fffefc54346(uVar8);
    pcVar5 = (code *)swi(0x49);
    uVar6 = (*pcVar5)(iVar7 + -0x61);
    *(int *)((uint64_t)(uint32_t)(iVar4 * -0x16c1217e) - 0x6441667e) = (int)unaff_RSI + unaff_EBP + -2;
    out(0xb6,uVar6);
    return;
  }
  pcVar5 = (code *)__debugbreak();
  (*pcVar5)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5447bd0  |  RVA: 0xcd7bd0  |  Size: 219 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5447bd0(void) {
    /* +0xcd7bd0 */ __asm { PUSH R15 }
    /* +0xcd7bd2 */ __asm { PUSH R12 }
    /* +0xcd7bd4 */ __asm { PUSH R14 }
    /* +0xcd7bd6 */ __asm { PUSH R13 }
    /* +0xcd7bd8 */ __asm { PUSH RSI }
    /* +0xcd7bd9 */ __asm { PUSH RBP }
    /* +0xcd7bda */ __asm { PUSH RDI }
    /* +0xcd7bdb */ __asm { PUSH RBX }
    /* +0xcd7bdc */ __asm { SUB RSP,0x1e8 }
    /* +0xcd7be3 */ __asm { MOVAPS xmmword ptr [RSP + 0x1d0],XMM9 }
    /* +0xcd7bec */ __asm { MOVAPS xmmword ptr [RSP + 0x1c0],XMM15 }
    /* +0xcd7bf5 */ __asm { MOVDQA xmmword ptr [RSP + 0x1b0],XMM6 }
    /* +0xcd7bfe */ __asm { MOV qword ptr [RSP + 0xe8],RDX }
    /* +0xcd7c06 */ __asm { MOV RSI,RCX }
    /* +0xcd7c09 */ __asm { MOV dword ptr [RSP + 0x130],0xee616e88 }
    /* +0xcd7c14 */ __asm { MOV R9D,dword ptr [RSP + 0x130] }
    /* +0xcd7c1c */ __asm { PUSHFQ }
    /* +0xcd7c1d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xcd7c25 */ __asm { POPFQ }
    /* +0xcd7c26 */ __asm { MOV dword ptr [RSP + 0x130],0x1f56ea41 }
    /* +0xcd7c31 */ __asm { MOV R9D,dword ptr [RSP + 0x130] }
    /* +0xcd7c39 */ __asm { TEST R9D,R9D }
    /* +0xcd7c3c */ __asm { NOP }
    /* +0xcd7c3d */ __asm { NOP }
    /* +0xcd7c3e */ __asm { NOP }
    /* +0xcd7c3f */ __asm { NOP }
    /* +0xcd7c40 */ __asm { NOP }
    /* +0xcd7c41 */ __asm { MOV R9D,0xab753616 }
    /* +0xcd7c47 */ __asm { MOV R10W,0x826e }
    /* +0xcd7c4c */ __asm { PUSHFQ }
    /* +0xcd7c4d */ __asm { POP RAX }
    /* +0xcd7c4e */ __asm { AND EAX,0x100 }
    /* +0xcd7c53 */ __asm { XOR R10D,0x2ad }
    /* +0xcd7c5a */ __asm { IMUL ECX,R9D,0x100173bf }
    /* +0xcd7c61 */ __asm { ADD R10D,0x7f3d }
    /* +0xcd7c68 */ __asm { MOVZX EDX,R10W }
    /* +0xcd7c6c */ __asm { MOV R8D,0x1b49f770 }
    /* +0xcd7c72 */ __asm { ADD R8D,0x5c4770b0 }
    /* +0xcd7c79 */ __asm { ROL R8D,0x10 }
    /* +0xcd7c7d */ __asm { XOR R11D,R11D }
    /* +0xcd7c80 */ __asm { CMP R8,RCX }
    /* +0xcd7c83 */ __asm { CMOVGE R11,RDX }
    /* +0xcd7c87 */ __asm { MOV qword ptr [RSP + 0x128],RAX }
    /* +0xcd7c8f */ __asm { MOV qword ptr [RSP + 0xa8],R11 }
    /* +0xcd7c97 */ __asm { CMP RAX,R11 }
    /* +0xcd7c9a */ __asm { NOP }
    /* +0xcd7c9b */ __asm { NOP }
    /* +0xcd7c9c */ __asm { NOP }
    /* +0xcd7c9d */ __asm { NOP }
    /* +0xcd7c9e */ __asm { NOP }
    /* +0xcd7c9f */ __asm { NOP }
    /* +0xcd7ca0 */ __asm { NOP }
    /* +0xcd7ca1 */ __asm { NOP }
    /* +0xcd7ca2 */ __asm { NOP }
    /* +0xcd7ca3 */ __asm { NOP }
    /* +0xcd7ca4 */ __asm { NOP }
    /* +0xcd7ca5 */ __asm { NOP }
    /* +0xcd7ca6 */ __asm { NOP }
    /* +0xcd7ca7 */ __asm { NOP }
    /* +0xcd7ca8 */ __asm { NOP }
    /* +0xcd7ca9 */ __asm { NOP }
    /* +0xcd7caa */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa544ea00  |  RVA: 0xcdea00  |  Size: 6086 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa544ea00(uint64_t param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t bVar14;
  int64_t in_RAX;
  uint32_t in_ECX;
  uint64_t uVar15;
  code *pcVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  int64_t lVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint64_t *puVar25;
  uint64_t *puVar26;
  int64_t lVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  uint64_t *puVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  int64_t lVar33;
  uint64_t *puVar34;
  bool bVar35;
  
  puVar25 = (uint64_t *)(in_RAX * -0x7a728fcb1f566bf7);
  uVar15 = (int64_t)puVar25 - (int64_t)param_2;
  bVar14 = (uint8_t)in_ECX;
  if ((int64_t)(uint64_t)~(in_ECX ^ 0x239c7653) <= (int64_t)uVar15) {
    uVar24 = ((param_1 ^ 0x5c110576) << 5 | param_1 >> 0x3b) * 0x1000000040000001 ^ 0x12f337d6;
    puVar26 = puVar25;
    do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar15;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar15;
      uVar15 = SUB168(auVar11 * ZEXT816(0xaaaaaaaaaaaaaaa),8) +
               (uint64_t)
               CARRY8(SUB168(auVar11 * ZEXT816(0xaaaaaaaaaaaaaaa),0),
                      SUB168(auVar10 * ZEXT816(0xaaaaaaaaaaaaaaab),8));
      if ((int64_t)uVar24 < 1) {
        uVar21 = uVar15 - 1;
        uVar24 = (int64_t)uVar21 >> 1;
        if ((in_ECX | 1) * -0x2847673e <=
            (0x4599e817U >> (bVar14 & 0x1f) | 0x4599e817 << 0x20 - (bVar14 & 0x1f)) + 0x8001fd3c) {
          uVar24 = uVar21 | 1;
        }
        puVar25 = param_2 + uVar21 * 3;
        puVar28 = param_2 + uVar24 * 3;
        uVar17 = uVar15 >> 1;
        do {
          uVar18 = uVar17 - 1;
          uVar5 = param_2[uVar18 * 3];
          uVar6 = (param_2 + uVar18 * 3)[1];
          uVar4 = param_2[uVar18 * 3 + 2];
          param_2[uVar18 * 3 + 2] = 0;
          param_2[uVar18 * 3] = 0;
          (param_2 + uVar18 * 3)[1] = 0;
          uVar19 = uVar18;
          if ((int64_t)uVar17 <= (int64_t)uVar24) {
            uVar32 = uVar18;
            do {
              uVar19 = uVar32 * 2 + 1;
              uVar31 = uVar32 * 2 + 2;
              lVar22 = *(int64_t *)(param_2[uVar19 * 3] + 8);
              lVar23 = *(int64_t *)(param_2[uVar31 * 3] + 8);
              if ((lVar22 <= lVar23) &&
                 ((lVar23 != lVar22 ||
                  (*(uint32_t *)(param_2[uVar19 * 3] + 4) <= *(uint32_t *)(param_2[uVar31 * 3] + 4))))) {
                uVar19 = uVar31;
              }
              if (uVar32 != uVar19) {
                puVar29 = param_2 + uVar32 * 3;
                uVar32 = *puVar29;
                if (uVar32 != 0) {
                  pcVar16 = (code *)((int64_t)(short)(((uint16_t)in_ECX | 1) * 0x3a9d ^ 0x92a4) +
                                    0x7fffa568fa8b);
                  (*pcVar16)(uVar32,pcVar16,uVar32 >> 0x3d ^ uVar32);
                  *puVar29 = 0;
                  puVar29[1] = 0;
                  puVar29[2] = 0;
                }
                puVar30 = param_2 + uVar19 * 3;
                uVar32 = puVar30[1];
                *puVar29 = *puVar30;
                puVar29[1] = uVar32;
                puVar29[2] = puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
              uVar32 = uVar19;
            } while ((int64_t)uVar19 < (int64_t)uVar24);
          }
          uVar32 = uVar21;
          if (uVar19 != uVar24) {
            uVar32 = uVar19;
          }
          if ((uVar15 & 1) != 0) {
            uVar32 = uVar19;
          }
          if (uVar19 == uVar24 && (uVar24 != uVar21 && (uVar15 & 1) == 0)) {
            uVar19 = *puVar28;
            if (uVar19 != 0) {
              pcVar16 = (code *)((int64_t)
                                 (int)((in_ECX ^ 0x23c4d5cb) << 0x19 | (in_ECX ^ 0x23c4d5cb) >> 7) +
                                0x7fffa5692d72);
              (*pcVar16)(uVar19,pcVar16,uVar19 >> 0x3d ^ uVar19);
              *puVar28 = 0;
              puVar28[1] = 0;
              puVar28[2] = 0;
            }
            *puVar28 = *puVar25;
            puVar28[1] = puVar25[1];
            puVar28[2] = puVar25[2];
            *puVar25 = 0;
            puVar25[1] = 0;
            puVar25[2] = 0;
            uVar32 = uVar21;
          }
          if ((int64_t)uVar32 < (int64_t)uVar17) {
LAB_7fffa544fd70:
            uVar31 = uVar32;
          }
          else {
            do {
              uVar31 = (int64_t)(uVar32 - 1) >> 1;
              uVar19 = param_2[uVar31 * 3];
              if ((*(int64_t *)(uVar5 + 8) <= *(int64_t *)(uVar19 + 8)) &&
                 ((*(int64_t *)(uVar19 + 8) != *(int64_t *)(uVar5 + 8) ||
                  (*(uint32_t *)(uVar5 + 4) <= *(uint32_t *)(uVar19 + 4))))) goto LAB_7fffa544fd70;
              if (0x55c703b2 <
                  (0x2e64e00f << (bVar14 & 0x1f) | 0x2e64e00fU >> 0x20 - (bVar14 & 0x1f)) ==
                  (uVar32 == uVar31)) {
                puVar29 = param_2 + uVar31 * 3;
                puVar30 = param_2 + uVar32 * 3;
                uVar32 = *puVar30;
                if (uVar32 != 0) {
                  pcVar16 = (code *)((int64_t)(short)(((uint16_t)in_ECX | 1) * -0x5e6b) +
                                    0x7fffa568ebd7);
                  (*pcVar16)(pcVar16,0x7fffa568ebd7,uVar32 >> 0x3d ^ uVar32,0x2f0b2cde);
                  *puVar30 = 0;
                  puVar30[1] = 0;
                  puVar30[2] = 0;
                  uVar19 = *puVar29;
                }
                *puVar30 = uVar19;
                uVar19 = puVar29[2];
                puVar30[1] = puVar29[1];
                puVar30[2] = uVar19;
                *puVar29 = 0;
                puVar29[1] = 0;
                puVar29[2] = 0;
              }
              uVar32 = uVar31;
            } while ((int64_t)uVar17 <= (int64_t)uVar31);
          }
          puVar29 = param_2 + uVar31 * 3;
          uVar19 = param_2[uVar31 * 3];
          if (uVar19 != 0) {
            pcVar16 = (code *)((int64_t)
                               (int)((in_ECX + 0x1b1c751e) * 0x400 | in_ECX + 0x1b1c751e >> 0x16) +
                              0x7fffa5693053);
            (*pcVar16)(pcVar16,0x7fffa5693053,uVar19 >> 0x3d ^ uVar19);
            *puVar29 = 0;
            puVar29[1] = 0;
            puVar29[2] = 0;
          }
          *puVar29 = uVar5;
          puVar29[1] = uVar6;
          puVar29[2] = uVar4;
          bVar9 = 1 < uVar17;
          uVar17 = uVar18;
        } while (bVar9);
        do {
          puVar25 = puVar26 + -3;
          uVar24 = puVar26[-3];
          uVar21 = puVar26[-2];
          uVar15 = puVar26[-1];
          puVar26[-1] = 0;
          puVar26[-3] = 0;
          puVar26[-2] = 0;
          if (puVar25 != param_2) {
            puVar26[-3] = *param_2;
            puVar26[-2] = param_2[1];
            puVar26[-1] = param_2[2];
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
          }
          uVar17 = ((int64_t)puVar25 - (int64_t)param_2 >> 3) * -0x5555555555555555;
          lVar22 = uVar17 - 1;
          lVar23 = lVar22 >> 1;
          if (lVar23 < 1) {
            lVar27 = 0;
          }
          else {
            lVar33 = 0;
            do {
              lVar2 = lVar33 * 2 + 2;
              lVar27 = lVar33 * 2 + 1;
              lVar7 = *(int64_t *)(param_2[lVar27 * 3] + 8);
              lVar8 = *(int64_t *)(param_2[lVar2 * 3] + 8);
              if ((lVar7 <= lVar8) &&
                 ((lVar8 != lVar7 ||
                  (*(uint32_t *)(param_2[lVar27 * 3] + 4) <= *(uint32_t *)(param_2[lVar2 * 3] + 4))))) {
                lVar27 = lVar2;
              }
              if (lVar33 != lVar27) {
                puVar26 = param_2 + lVar33 * 3;
                uVar18 = *puVar26;
                if (uVar18 != 0) {
                  pcVar16 = (code *)((int64_t)(int)(in_ECX + 0x239bbda8) + 0x7fffa56933d4);
                  (*pcVar16)(uVar18,pcVar16,uVar18 >> 0x3d ^ uVar18);
                  *puVar26 = 0;
                  puVar26[1] = 0;
                  puVar26[2] = 0;
                }
                puVar28 = param_2 + lVar27 * 3;
                uVar18 = *puVar28;
                uVar19 = puVar28[1];
                puVar26[2] = puVar28[2];
                *puVar26 = uVar18;
                puVar26[1] = uVar19;
                *puVar28 = 0;
                puVar28[1] = 0;
                puVar28[2] = 0;
              }
              lVar33 = lVar27;
            } while (lVar27 < lVar23);
          }
          if ((lVar27 == lVar23) && ((uVar17 & 1) == 0)) {
            if (lVar23 != lVar22) {
              puVar26 = param_2 + lVar23 * 3;
              uVar17 = *puVar26;
              if (uVar17 != 0) {
                uVar18 = uVar17 >> 0x3d;
                if ((0xc2e4ca58U >> (bVar14 & 0x1f) | -0x3d1b35a8 << 0x20 - (bVar14 & 0x1f)) ==
                    0xa59ea3ac) {
                  uVar18 = uVar17 * 0x3d;
                }
                FUN_7fffa5687c30(uVar17 * 0x3d,uVar17,uVar18 ^ uVar17);
                *puVar26 = 0;
                puVar26[1] = 0;
                puVar26[2] = 0;
              }
              puVar28 = param_2 + lVar22 * 3;
              *puVar26 = *puVar28;
              puVar26[1] = puVar28[1];
              puVar26[2] = puVar28[2];
              *puVar28 = 0;
              puVar28[1] = 0;
              puVar28[2] = 0;
            }
            lVar27 = lVar22;
          }
          if (lVar27 < 1) {
LAB_7fffa5450210:
            lVar22 = lVar27;
          }
          else {
            do {
              lVar22 = lVar27 + -1 >> 1;
              uVar17 = param_2[lVar22 * 3];
              if ((*(int64_t *)(uVar24 + 8) <= *(int64_t *)(uVar17 + 8)) &&
                 ((*(int64_t *)(uVar17 + 8) != *(int64_t *)(uVar24 + 8) ||
                  (*(uint32_t *)(uVar24 + 4) <= *(uint32_t *)(uVar17 + 4))))) goto LAB_7fffa5450210;
              if (lVar27 != lVar22) {
                puVar26 = param_2 + lVar22 * 3;
                puVar28 = param_2 + lVar27 * 3;
                uVar18 = *puVar28;
                if (uVar18 != 0) {
                  pcVar16 = (code *)((int64_t)(int)(-0x239d2680 - in_ECX) + 0x7fffa5692d64);
                  (*pcVar16)(0x7fffa5692d64,pcVar16,uVar18 >> 0x3d ^ uVar18);
                  *puVar28 = 0;
                  puVar28[1] = 0;
                  puVar28[2] = 0;
                  uVar17 = *puVar26;
                }
                uVar18 = puVar26[2];
                puVar28[1] = puVar26[1];
                puVar28[2] = uVar18;
                *puVar28 = uVar17;
                *puVar26 = 0;
                puVar26[1] = 0;
                puVar26[2] = 0;
              }
              lVar27 = lVar22;
            } while (0 < lVar22);
          }
          puVar26 = param_2 + lVar22 * 3;
          uVar17 = param_2[lVar22 * 3];
          if (uVar17 != 0) {
            pcVar16 = (code *)((int64_t)(int)(in_ECX ^ 0x239cd4fc) + 0x7fffa5691de8);
            (*pcVar16)(pcVar16,0x7fffa5691de8,uVar17 >> 0x3d ^ uVar17);
            *puVar26 = 0;
            puVar26[1] = 0;
            puVar26[2] = 0;
          }
          *puVar26 = uVar24;
          puVar26[1] = uVar21;
          puVar26[2] = uVar15;
          puVar26 = puVar25;
          if ((int64_t)puVar25 - (int64_t)param_2 < 0x19) {
            return;
          }
        } while( true );
      }
      puVar25 = puVar26 + -3;
      uVar15 = uVar15 >> 1;
      puVar28 = param_2 + uVar15 * 3;
      uVar17 = (int64_t)puVar25 - (int64_t)param_2;
      uVar21 = *param_2;
      lVar22 = *(int64_t *)(uVar21 + 8);
      if ((int64_t)uVar17 < 0x3c1) {
        uVar17 = *puVar28;
        lVar23 = *(int64_t *)(uVar17 + 8);
        if (lVar23 < lVar22) {
code_r0x7fffa544eec1:
          *puVar28 = uVar21;
          uVar21 = puVar28[1];
          puVar28[1] = param_2[1];
          param_2[1] = uVar21;
          *param_2 = uVar17;
          uVar18 = *puVar28;
          uVar21 = puVar28[2];
          puVar28[2] = param_2[2];
          param_2[2] = uVar21;
          lVar23 = *(int64_t *)(uVar18 + 8);
          uVar21 = uVar17;
        }
        else {
          uVar18 = uVar17;
          if (((lVar23 == lVar22) && (uVar15 != 0)) &&
             (*(uint32_t *)(uVar17 + 4) < *(uint32_t *)(uVar21 + 4))) goto code_r0x7fffa544eec1;
        }
        uVar17 = *puVar25;
        if ((*(int64_t *)(uVar17 + 8) < lVar23) ||
           ((*(int64_t *)(uVar17 + 8) == lVar23 && (*(uint32_t *)(uVar17 + 4) < *(uint32_t *)(uVar18 + 4)))
           )) {
          if (puVar25 != puVar28) {
            puVar26[-3] = uVar18;
            *puVar28 = uVar17;
            uVar21 = puVar26[-2];
            puVar26[-2] = puVar28[1];
            puVar28[1] = uVar21;
            uVar17 = puVar26[-1];
            puVar26[-1] = puVar28[2];
            uVar21 = *param_2;
            puVar28[2] = uVar17;
            uVar18 = *puVar28;
            lVar23 = *(int64_t *)(uVar18 + 8);
          }
          if ((lVar23 < *(int64_t *)(uVar21 + 8)) ||
             (((lVar23 == *(int64_t *)(uVar21 + 8) &&
               (uVar15 != ((in_ECX + 0x754c) * -0x17c5 & 0xffff))) &&
              (*(uint32_t *)(uVar18 + 4) < *(uint32_t *)(uVar21 + 4))))) {
            *puVar28 = uVar21;
            *param_2 = uVar18;
            puVar29 = param_2;
            goto LAB_7fffa544f56d;
          }
        }
      }
      else {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar17;
        uVar19 = SUB168(auVar12 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar17;
        lVar23 = SUB168(auVar13 * ZEXT816(0xaaaaaaaaaaaaaaa),8);
        uVar17 = SUB168(auVar13 * ZEXT816(0xaaaaaaaaaaaaaaa),0);
        uVar18 = lVar23 + (uint64_t)CARRY8(uVar17,uVar19);
        uVar19 = lVar23 + 1 + (uint64_t)CARRY8(uVar17,uVar19) >> 3;
        puVar29 = param_2 + uVar19 * 3;
        uVar17 = param_2[uVar19 * 3];
        lVar23 = *(int64_t *)(uVar17 + 8);
        if ((lVar23 < lVar22) ||
           (((lVar23 == lVar22 && (*(uint32_t *)(uVar17 + 4) < *(uint32_t *)(uVar21 + 4))) &&
            (~(in_ECX ^ 0x7313abce) * 0x2defe81b <= uVar18)))) {
          uVar4 = puVar29[1];
          *puVar29 = uVar21;
          uVar21 = param_2[2];
          *param_2 = uVar17;
          uVar17 = *puVar29;
          puVar29[1] = param_2[1];
          param_2[1] = uVar4;
          uVar4 = puVar29[2];
          puVar29[2] = uVar21;
          param_2[2] = uVar4;
          lVar23 = *(int64_t *)(uVar17 + 8);
        }
        puVar30 = param_2 + uVar19 * 6;
        uVar21 = *puVar30;
        if ((*(int64_t *)(uVar21 + 8) < lVar23) ||
           ((*(int64_t *)(uVar21 + 8) == lVar23 && (*(uint32_t *)(uVar21 + 4) < *(uint32_t *)(uVar17 + 4)))
           )) {
          *puVar30 = uVar17;
          *puVar29 = uVar21;
          uVar17 = *param_2;
          uVar4 = puVar30[1];
          uVar5 = puVar30[2];
          puVar30[1] = puVar29[1];
          puVar29[1] = uVar4;
          puVar30[2] = puVar29[2];
          puVar29[2] = uVar5;
          if (*(int64_t *)(uVar21 + 8) < *(int64_t *)(uVar17 + 8)) {
LAB_7fffa544f0fc:
            *puVar29 = uVar17;
            *param_2 = uVar21;
            puVar29[2] = param_2[2];
            param_2[2] = uVar5;
            puVar29[1] = param_2[1];
            param_2[1] = uVar4;
          }
          else if (*(int64_t *)(uVar21 + 8) == *(int64_t *)(uVar17 + 8)) {
            bVar9 = *(uint32_t *)(uVar21 + 4) != *(uint32_t *)(uVar17 + 4);
            if ((uint64_t)(0x328c621c - in_ECX) < 0xffffffffb9652fcd) {
              bVar9 = *(uint32_t *)(uVar17 + 4) <= *(uint32_t *)(uVar21 + 4);
            }
            if ((!bVar9) && (6 < uVar18)) goto LAB_7fffa544f0fc;
          }
        }
        puVar30 = puVar28 + uVar19 * -3;
        uVar21 = puVar28[uVar19 * -3];
        uVar17 = *puVar28;
        lVar22 = *(int64_t *)(uVar17 + 8);
        if ((lVar22 < *(int64_t *)(uVar21 + 8)) ||
           (((lVar22 == *(int64_t *)(uVar21 + 8) && (*(uint32_t *)(uVar17 + 4) < *(uint32_t *)(uVar21 + 4))
             ) && (6 < uVar18)))) {
          *puVar28 = uVar21;
          *puVar30 = uVar17;
          uVar17 = *puVar28;
          uVar21 = puVar28[1];
          uVar4 = puVar30[2];
          puVar28[1] = puVar30[1];
          puVar30[1] = uVar21;
          uVar21 = puVar28[2];
          puVar28[2] = uVar4;
          puVar30[2] = uVar21;
          lVar22 = *(int64_t *)(uVar17 + 8);
        }
        puVar20 = puVar28 + uVar19 * 3;
        uVar21 = *puVar20;
        if ((*(int64_t *)(uVar21 + 8) < lVar22) ||
           ((*(int64_t *)(uVar21 + 8) == lVar22 && (*(uint32_t *)(uVar21 + 4) < *(uint32_t *)(uVar17 + 4)))
           )) {
          uVar4 = puVar28[1];
          uVar5 = puVar20[2];
          puVar20[2] = puVar28[2];
          *puVar20 = uVar17;
          *puVar28 = uVar21;
          puVar28[2] = uVar5;
          uVar17 = *puVar30;
          uVar6 = puVar20[1];
          puVar20[1] = uVar4;
          puVar28[1] = uVar6;
          if ((*(int64_t *)(uVar21 + 8) < *(int64_t *)(uVar17 + 8)) ||
             (((*(int64_t *)(uVar21 + 8) == *(int64_t *)(uVar17 + 8) &&
               (*(uint32_t *)(uVar21 + 4) < *(uint32_t *)(uVar17 + 4))) && (6 < uVar18)))) {
            *puVar28 = uVar17;
            puVar28[1] = puVar30[1];
            puVar30[1] = uVar6;
            puVar28[2] = puVar30[2];
            puVar30[2] = uVar5;
            *puVar30 = uVar21;
          }
        }
        uVar21 = puVar26[uVar19 * -3 + -3];
        lVar22 = *(int64_t *)(uVar21 + 8);
        puVar30 = puVar25 + uVar19 * -6;
        uVar17 = puVar25[uVar19 * -6];
        if ((lVar22 < *(int64_t *)(uVar17 + 8)) ||
           (((lVar22 == *(int64_t *)(uVar17 + 8) && (6 < uVar18)) &&
            (*(uint32_t *)(uVar21 + 4) < *(uint32_t *)(uVar17 + 4))))) {
          uVar18 = puVar30[2];
          puVar26[uVar19 * -3 + -3] = uVar17;
          uVar17 = puVar26[uVar19 * -3 + -1];
          puVar26[uVar19 * -3 + -1] = uVar18;
          *puVar30 = uVar21;
          uVar21 = puVar26[uVar19 * -3 + -3];
          puVar30[2] = uVar17;
          uVar17 = puVar26[uVar19 * -3 + -2];
          puVar26[uVar19 * -3 + -2] = puVar30[1];
          puVar30[1] = uVar17;
          lVar22 = *(int64_t *)(uVar21 + 8);
        }
        puVar20 = puVar26 + uVar19 * -3 + -3;
        uVar17 = *puVar25;
        if (*(int64_t *)(uVar17 + 8) < lVar22) {
LAB_7fffa544f320:
          puVar26[-3] = uVar21;
          puVar26[uVar19 * -3 + -3] = uVar17;
          uVar21 = *puVar30;
          uVar18 = puVar26[-2];
          puVar26[-2] = puVar26[uVar19 * -3 + -2];
          puVar26[uVar19 * -3 + -2] = uVar18;
          uVar4 = puVar26[-1];
          puVar26[-1] = puVar26[uVar19 * -3 + -1];
          puVar26[uVar19 * -3 + -1] = uVar4;
          if (*(int64_t *)(uVar17 + 8) < *(int64_t *)(uVar21 + 8)) {
            if (puVar20 != puVar30) {
LAB_7fffa544f3e1:
              uVar5 = puVar30[1];
              puVar26[uVar19 * -3 + -1] = puVar30[2];
              puVar30[2] = uVar4;
              puVar26[uVar19 * -3 + -2] = uVar5;
              puVar30[1] = uVar18;
              puVar26[uVar19 * -3 + -3] = uVar21;
              *puVar30 = uVar17;
            }
          }
          else if (*(int64_t *)(uVar17 + 8) == *(int64_t *)(uVar21 + 8)) {
            bVar35 = *(uint32_t *)(uVar21 + 4) <= *(uint32_t *)(uVar17 + 4);
            bVar9 = (puVar20 == puVar30) != bVar35;
            if ((0x4f39e6cf << (bVar14 & 0x1f) | 0x4f39e6cfU >> 0x20 - (bVar14 & 0x1f)) <
                (0x96c0000U >> (bVar14 & 0x1f) | 0x96c0000 << 0x20 - (bVar14 & 0x1f))) {
              bVar9 = puVar20 == puVar30 || bVar35;
            }
            if (!bVar9) goto LAB_7fffa544f3e1;
          }
        }
        else if (*(int64_t *)(uVar17 + 8) == lVar22) {
          bVar9 = (int)*(uint32_t *)(uVar17 + 4) < (int)*(uint32_t *)(uVar21 + 4);
          if (0x3136eb0f < ((in_ECX ^ 0x5b49504d) << 4 | (in_ECX ^ 0x5b49504d) >> 0x1c)) {
            bVar9 = *(uint32_t *)(uVar17 + 4) < *(uint32_t *)(uVar21 + 4);
          }
          if (bVar9) goto LAB_7fffa544f320;
        }
        uVar21 = *puVar28;
        uVar18 = *puVar29;
        lVar22 = *(int64_t *)(uVar21 + 8);
        uVar17 = uVar21;
        if (lVar22 < *(int64_t *)(uVar18 + 8)) {
          bVar9 = uVar19 == uVar15;
          if ((in_ECX | 1) * 0x689463b0 != -0x4448a490) {
            bVar9 = uVar19 < uVar15;
          }
          if (!bVar9) goto LAB_7fffa544f482;
        }
        else if (((lVar22 == *(int64_t *)(uVar18 + 8)) &&
                 (*(uint32_t *)(uVar21 + 4) < *(uint32_t *)(uVar18 + 4))) && (uVar19 != uVar15)) {
LAB_7fffa544f482:
          uVar4 = puVar29[2];
          uVar5 = puVar28[1];
          *puVar28 = uVar18;
          *puVar29 = uVar21;
          uVar17 = *puVar28;
          uVar18 = puVar28[2];
          puVar28[2] = uVar4;
          puVar29[2] = uVar18;
          puVar28[1] = puVar29[1];
          puVar29[1] = uVar5;
          lVar22 = *(int64_t *)(uVar17 + 8);
          uVar18 = uVar21;
        }
        uVar21 = *puVar20;
        if ((*(int64_t *)(uVar21 + 8) < lVar22) ||
           ((*(int64_t *)(uVar21 + 8) == lVar22 && (*(uint32_t *)(uVar21 + 4) < *(uint32_t *)(uVar17 + 4)))
           )) {
          if (puVar20 != puVar28) {
            puVar26[uVar19 * -3 + -3] = uVar17;
            *puVar28 = uVar21;
            uVar21 = puVar26[uVar19 * -3 + -2];
            puVar26[uVar19 * -3 + -2] = puVar28[1];
            puVar28[1] = uVar21;
            uVar21 = puVar26[uVar19 * -3 + -1];
            puVar26[uVar19 * -3 + -1] = puVar28[2];
            uVar17 = *puVar28;
            puVar28[2] = uVar21;
            lVar22 = *(int64_t *)(uVar17 + 8);
            uVar18 = *puVar29;
          }
          if (lVar22 < *(int64_t *)(uVar18 + 8)) {
            if (uVar19 != uVar15) goto LAB_7fffa544f567;
          }
          else {
            if (((lVar22 != *(int64_t *)(uVar18 + 8)) || (uVar19 == uVar15)) ||
               (*(uint32_t *)(uVar18 + 4) <= *(uint32_t *)(uVar17 + 4))) goto LAB_7fffa544f58d;
LAB_7fffa544f567:
            *puVar28 = uVar18;
            *puVar29 = uVar17;
LAB_7fffa544f56d:
            uVar15 = puVar28[1];
            puVar28[1] = puVar29[1];
            puVar29[1] = uVar15;
            uVar15 = puVar28[2];
            puVar28[2] = puVar29[2];
            puVar29[2] = uVar15;
          }
        }
      }
LAB_7fffa544f58d:
      uVar15 = *(uint64_t *)(*puVar28 + 8);
      uVar21 = *puVar28;
      puVar29 = puVar28;
      do {
        uVar17 = puVar29[-3];
        bVar9 = *(uint64_t *)(uVar17 + 8) < uVar15;
        if ((0xabe3e839 - in_ECX ^ 0xf6724f5f) <= in_ECX + 0x67903ad4) {
          bVar9 = *(uint64_t *)(uVar17 + 8) == uVar15;
        }
        if ((!bVar9) || (*(int *)(uVar21 + 4) != *(int *)(uVar17 + 4))) break;
        puVar29 = puVar29 + -3;
        uVar21 = uVar17;
      } while (param_2 < puVar29);
      puVar28 = puVar28 + 3;
      puVar30 = puVar28;
      puVar20 = puVar29;
      if (puVar28 < puVar26) {
        lVar22 = *(int64_t *)(*puVar29 + 8);
        puVar25 = puVar28;
        do {
          puVar28 = puVar25;
          lVar23 = *(int64_t *)(*puVar28 + 8);
          puVar30 = puVar28;
          if (lVar23 < lVar22) goto joined_r0x7fffa544f680;
          if (lVar23 == lVar22) {
            if (*(int *)(*puVar29 + 4) != *(int *)(*puVar28 + 4)) goto joined_r0x7fffa544f680;
          }
          else if (lVar22 < lVar23) goto joined_r0x7fffa544f680;
          puVar25 = puVar28 + 3;
        } while (puVar28 + 3 < puVar26);
        puVar28 = puVar28 + 3;
        puVar30 = puVar28;
      }
joined_r0x7fffa544f680:
      puVar25 = puVar20;
      puVar34 = puVar30;
      if (puVar26 <= puVar28) goto LAB_7fffa544f730;
      uVar15 = *puVar28;
      lVar22 = *(int64_t *)(*puVar25 + 8);
      lVar23 = *(int64_t *)(uVar15 + 8);
      puVar20 = puVar25;
      if (lVar22 < lVar23) {
LAB_7fffa544f690:
        puVar28 = puVar28 + 3;
        puVar30 = puVar34;
        goto joined_r0x7fffa544f680;
      }
      if (lVar22 == lVar23) {
        uVar3 = *(uint32_t *)(*puVar25 + 4);
        if (uVar3 < *(uint32_t *)(uVar15 + 4)) goto LAB_7fffa544f690;
        if (uVar3 <= *(uint32_t *)(uVar15 + 4)) goto LAB_7fffa544f6e2;
      }
      else if (lVar22 <= lVar23) {
LAB_7fffa544f6e2:
        if (puVar28 == puVar34) {
          puVar34 = puVar34 + 3;
          goto LAB_7fffa544f690;
        }
        uVar21 = *puVar34;
        *puVar34 = uVar15;
        *puVar28 = uVar21;
        uVar15 = puVar34[1];
        puVar34[1] = puVar28[1];
        puVar28[1] = uVar15;
        uVar15 = puVar34[2];
        puVar34[2] = puVar28[2];
        puVar28[2] = uVar15;
        puVar28 = puVar28 + 3;
        puVar30 = puVar34 + 3;
        goto joined_r0x7fffa544f680;
      }
LAB_7fffa544f730:
      if (param_2 < puVar29) {
        do {
          puVar20 = puVar29 + -3;
          uVar15 = *puVar20;
          lVar22 = *(int64_t *)(*puVar25 + 8);
          lVar23 = *(int64_t *)(uVar15 + 8);
          puVar30 = puVar25;
          if (lVar22 <= lVar23) {
            if (lVar23 == lVar22) {
              uVar3 = *(uint32_t *)(*puVar25 + 4);
              if (*(uint32_t *)(uVar15 + 4) < uVar3) goto joined_r0x7fffa544f83a;
              if (uVar3 < *(uint32_t *)(uVar15 + 4)) break;
            }
            else if (lVar22 < lVar23) break;
            puVar30 = puVar25 + -3;
            if (puVar29 != puVar25) {
              uVar21 = puVar25[-3];
              puVar25[-3] = uVar15;
              *puVar20 = uVar21;
              uVar15 = puVar25[-2];
              puVar25[-2] = puVar29[-2];
              puVar29[-2] = uVar15;
              uVar15 = puVar25[-1];
              puVar25[-1] = puVar29[-1];
              puVar29[-1] = uVar15;
            }
          }
joined_r0x7fffa544f83a:
          puVar25 = puVar30;
          puVar29 = puVar20;
        } while (param_2 < puVar20);
      }
      if ((puVar29 != param_2) || (puVar28 != puVar26)) {
        if (puVar29 == param_2) {
          if ((puVar34 != puVar28) && (puVar25 != puVar34)) {
            uVar15 = *puVar25;
            *puVar25 = *puVar34;
            *puVar34 = uVar15;
            uVar15 = puVar25[1];
            puVar25[1] = puVar34[1];
            puVar34[1] = uVar15;
            uVar15 = puVar25[2];
            puVar25[2] = puVar34[2];
            puVar34[2] = uVar15;
          }
          if (puVar25 != puVar28) {
            uVar15 = *puVar25;
            *puVar25 = *puVar28;
            *puVar28 = uVar15;
            uVar15 = puVar25[1];
            puVar25[1] = puVar28[1];
            puVar28[1] = uVar15;
            uVar15 = puVar25[2];
            puVar25[2] = puVar28[2];
            puVar28[2] = uVar15;
          }
          puVar28 = puVar28 + 3;
          puVar30 = puVar34 + 3;
          puVar20 = puVar25 + 3;
        }
        else {
          puVar1 = puVar29 + -3;
          if (puVar28 == puVar26) {
            if (puVar29 != puVar25) {
              uVar15 = puVar29[-3];
              puVar29[-3] = puVar25[-3];
              puVar25[-3] = uVar15;
              uVar15 = puVar29[-2];
              puVar29[-2] = puVar25[-2];
              puVar25[-2] = uVar15;
              uVar15 = puVar29[-1];
              puVar29[-1] = puVar25[-1];
              puVar25[-1] = uVar15;
            }
            puVar30 = puVar34 + -3;
            puVar29 = puVar1;
            puVar20 = puVar25 + -3;
            if (puVar25 != puVar34) {
              uVar15 = puVar25[-3];
              puVar25[-3] = puVar34[-3];
              puVar34[-3] = uVar15;
              uVar15 = puVar25[-2];
              puVar25[-2] = puVar34[-2];
              puVar34[-2] = uVar15;
              uVar15 = puVar25[-1];
              puVar25[-1] = puVar34[-1];
              puVar34[-1] = uVar15;
            }
          }
          else {
            if (puVar28 != puVar1) {
              uVar15 = *puVar28;
              *puVar28 = puVar29[-3];
              puVar29[-3] = uVar15;
              uVar15 = puVar28[1];
              puVar28[1] = puVar29[-2];
              puVar29[-2] = uVar15;
              uVar15 = puVar28[2];
              puVar28[2] = puVar29[-1];
              puVar29[-1] = uVar15;
            }
            puVar28 = puVar28 + 3;
            puVar30 = puVar34;
            puVar29 = puVar1;
            puVar20 = puVar25;
          }
        }
        goto joined_r0x7fffa544f680;
      }
      uVar24 = (uVar24 >> 1) + (uVar24 >> 2);
      if ((int64_t)puVar25 - (int64_t)param_2 < (int64_t)puVar26 - (int64_t)puVar34) {
        uVar15 = (uVar24 ^ 0x12f337d6) * -0x3fffffff;
        (*(code *)(&UNK_7fffa545a5f7 +
                  (int)((in_ECX + 0x261c751d) * 0x400 | in_ECX + 0x261c751d >> 0x16)))
                  ((uVar15 << 0x3b | uVar15 >> 5) ^ 0x5c110576,param_2);
        puVar25 = puVar26;
        param_2 = puVar34;
      }
      else {
        uVar15 = (uVar24 ^ 0x12f337d6) * -0x3fffffff;
        (*(code *)(&UNK_7fffa545c545 +
                  (int)(0x4bbffff2U >> (bVar14 & 0x1f) | 0x4bbffff2 << 0x20 - (bVar14 & 0x1f))))
                  ((uVar15 << 0x3b | uVar15 >> 5) ^ 0x5c110576,puVar34,
                   &UNK_7fffa545c545 +
                   (int)(0x4bbffff2U >> (bVar14 & 0x1f) | 0x4bbffff2 << 0x20 - (bVar14 & 0x1f)),
                   in_ECX * -0x20000000 | 0x4d055c80 - in_ECX >> 3);
      }
      uVar15 = (int64_t)puVar25 - (int64_t)param_2;
      puVar26 = puVar25;
    } while ((int64_t)(int)(-0x3e4350e8 - in_ECX) <
             (int64_t)
             (uint64_t)
             ((0x537aff22 << (bVar14 & 0x1f) | 0x537aff22U >> 0x20 - (bVar14 & 0x1f)) * 0x34f4d135)
             == 0x317 < (int64_t)uVar15);
  }
  bVar9 = param_2 == puVar25;
  if ((uint64_t)
      (int64_t)(int)(-0x365f26a4 << (bVar14 & 0x1f) | 0xc9a0d95cU >> 0x20 - (bVar14 & 0x1f)) <
      (uint64_t)(in_ECX ^ 0x44d7e32b)) {
    bVar9 = (int64_t)param_2 <= (int64_t)puVar25;
  }
  if ((!bVar9) && (puVar26 = param_2 + 3, puVar26 != puVar25)) {
    lVar22 = -0x18;
    puVar28 = param_2;
    while( true ) {
      uVar15 = puVar28[4];
      uVar24 = puVar28[5];
      puVar28[4] = 0;
      puVar28[5] = 0;
      uVar21 = *puVar26;
      *puVar26 = 0;
      lVar23 = *(int64_t *)(uVar21 + 8);
      lVar27 = *(int64_t *)(*param_2 + 8);
      bVar9 = lVar23 == lVar27;
      if (((in_ECX ^ 0xf230b786) << 0x1e | (in_ECX ^ 0xf230b786) >> 2) < (in_ECX | 1) * -0x3bd19b2c)
      {
        bVar9 = lVar23 < lVar27;
      }
      if ((bVar9) ||
         ((puVar29 = puVar28, lVar23 == lVar27 && (*(uint32_t *)(uVar21 + 4) < *(uint32_t *)(*param_2 + 4)))
         )) {
        lVar23 = lVar22;
        puVar29 = puVar26;
        do {
          uVar17 = *puVar29;
          if (uVar17 != 0) {
            pcVar16 = (code *)((int64_t)(int)((in_ECX | 1) * -0x190f360b + 0x45235e45) +
                              0x7fffa56941b2);
            (*pcVar16)(pcVar16,0x7fffa56941b2,uVar17 >> 0x3d ^ uVar17,0x16b7006c);
            *puVar29 = 0;
            puVar29[1] = 0;
            puVar29[2] = 0;
          }
          *puVar29 = puVar29[-3];
          puVar29[1] = puVar29[-2];
          puVar29[2] = puVar29[-1];
          puVar29[-3] = 0;
          puVar29[-2] = 0;
          puVar29[-1] = 0;
          lVar23 = lVar23 + 0x18;
          puVar29 = puVar29 + -3;
        } while (lVar23 != 0);
        uVar17 = *param_2;
        if (uVar17 != 0) {
          (*(code *)((int64_t)(int)(0xb3100fd1 - in_ECX ^ 0x2953a86b) + 0x7fffa5694eba))
                    (uVar17,0x7fffa5694eba,uVar17 >> 0x3d ^ uVar17);
        }
        param_2[1] = uVar15;
        *param_2 = uVar21;
        param_2[2] = uVar24;
      }
      else {
        while( true ) {
          uVar17 = *puVar29;
          if ((*(int64_t *)(uVar17 + 8) <= lVar23) &&
             ((lVar23 != *(int64_t *)(uVar17 + 8) ||
              (*(uint32_t *)(uVar17 + 4) <= *(uint32_t *)(uVar21 + 4))))) break;
          puVar29[3] = uVar17;
          puVar29[4] = puVar29[1];
          puVar29[5] = puVar29[2];
          *puVar29 = 0;
          puVar29[1] = 0;
          puVar29[2] = 0;
          lVar23 = *(int64_t *)(uVar21 + 8);
          puVar29 = puVar29 + -3;
        }
        puVar29[4] = uVar15;
        puVar29[5] = uVar24;
        puVar29[3] = uVar21;
      }
      puVar26 = puVar26 + 3;
      if (puVar26 == puVar25) break;
      puVar28 = puVar28 + 3;
      lVar22 = lVar22 + -0x18;
    }
    return;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa54502c0  |  RVA: 0xce02c0  |  Size: 3122 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa54502c0(void) {
    /* +0xce02c0 */ __asm { PUSH R14 }
    /* +0xce02c2 */ __asm { PUSH R13 }
    /* +0xce02c4 */ __asm { PUSH RBX }
    /* +0xce02c5 */ __asm { PUSH R15 }
    /* +0xce02c7 */ __asm { PUSH RSI }
    /* +0xce02c8 */ __asm { PUSH RDI }
    /* +0xce02c9 */ __asm { PUSH RBP }
    /* +0xce02ca */ __asm { PUSH R12 }
    /* +0xce02cc */ __asm { SUB RSP,0x68 }
    /* +0xce02d0 */ __asm { MOV RBX,R11 }
    /* +0xce02d3 */ __asm { MOV R12D,R10D }
    /* +0xce02d6 */ __asm { MOV RCX,qword ptr [RSP + 0xd0] }
    /* +0xce02de */ __asm { MOV RDI,RCX }
    /* +0xce02e1 */ __asm { ROL RDI,0x10 }
    /* +0xce02e5 */ __asm { MOV EDX,0x1eadad2a }
    /* +0xce02ea */ __asm { IMUL R10D,EDX,0x7ffe03d9 }
    /* +0xce02f1 */ __asm { MOVD XMM2,EBX }
    /* +0xce02f5 */ __asm { MOV R11D,0x1c055768 }
    /* +0xce02fb */ __asm { SUB R11D,EBX }
    /* +0xce02fe */ __asm { ADD R11D,0x8402deb3 }
    /* +0xce0305 */ __asm { RDTSC }
    /* +0xce0307 */ __asm { SHL RDX,0x20 }
    /* +0xce030b */ __asm { OR RDX,RAX }
    /* +0xce030e */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xce0318 */ __asm { IMUL RAX,RDX }
    /* +0xce031c */ __asm { MOV EDX,0x831b00f6 }
    /* +0xce0321 */ __asm { MOV R13,RCX }
    /* +0xce0324 */ __asm { ROL R13,0x7 }
    /* +0xce0328 */ __asm { XOR R13,RDI }
    /* +0xce032b */ __asm { XOR R13,RCX }
    /* +0xce032e */ __asm { MOV RDI,R13 }
    /* +0xce0331 */ __asm { ROL RDI,0xe }
    /* +0xce0335 */ __asm { MOVD XMM4,EDX }
    /* +0xce0339 */ __asm { MOV EDX,0x7196607a }
    /* +0xce033e */ __asm { IMUL EDX,EDX,0x3bc9ba1b }
    /* +0xce0344 */ __asm { MOV ECX,EBX }
    /* +0xce0346 */ __asm { ROL EDX,CL }
    /* +0xce0348 */ __asm { PADDD XMM4,XMM2 }
    /* +0xce034c */ __asm { MOVD ECX,XMM4 }
    /* +0xce0350 */ __asm { ROL ECX,0x16 }
    /* +0xce0353 */ __asm { MOV RSI,R13 }
    /* +0xce0356 */ __asm { ROL RSI,0x20 }
    /* +0xce035a */ __asm { XOR RSI,RDI }
    /* +0xce035d */ __asm { XOR RSI,R13 }
    /* +0xce0360 */ __asm { MOV RDI,RSI }
    /* +0xce0363 */ __asm { ROL RDI,0x1c }
    /* +0xce0367 */ __asm { ROL RSI,0x14 }
    /* +0xce036b */ __asm { MOV R13,RDI }
    /* +0xce036e */ __asm { XOR R13,RSI }
    /* +0xce0371 */ __asm { ADD RSI,RDI }
    /* +0xce0374 */ __asm { CMP R11,RDX }
    /* +0xce0377 */ __asm { MOVSXD R11,ECX }
    /* +0xce037a */ __asm { CMOVG RSI,R13 }
    /* +0xce037e */ __asm { XOR RSI,RDI }
    /* +0xce0381 */ __asm { ROL RSI,0x10 }
    /* +0xce0385 */ __asm { MOV R15,-0x22b18422c4a9c65e }
    /* +0xce038f */ __asm { ADD R15,RAX }
    /* +0xce0392 */ __asm { MOV RDX,R15 }
    /* +0xce0395 */ __asm { SHR RDX,0x1b }
    /* +0xce0399 */ __asm { MOV RCX,R15 }
    /* +0xce039c */ __asm { SHR RCX,0x3b }
    /* +0xce03a0 */ __asm { SHR R15,0x2d }
    /* +0xce03a4 */ __asm { XOR EDX,R15D }
    /* +0xce03a7 */ __asm { ROR EDX,CL }
    /* +0xce03a9 */ __asm { AND EDX,0x3 }
    /* +0xce03ac */ __asm { SUB R10D,EBX }
    /* +0xce03af */ __asm { MOVQ RCX,XMM0 }
    /* +0xce03b4 */ __asm { ROL RCX,0x39 }
    /* +0xce03b8 */ __asm { XOR RCX,-0x4d08d00f }
    /* +0xce03bf */ __asm { MOV RAX,RCX }
    /* +0xce03c2 */ __asm { ROL RAX,0x38 }
    /* +0xce03c6 */ __asm { MOV RDI,RCX }
    /* +0xce03c9 */ __asm { ROL RDI,0x15 }
    /* +0xce03cd */ __asm { XOR RDI,RAX }
    /* +0xce03d0 */ __asm { XOR RDI,RCX }
    /* +0xce03d3 */ __asm { MOV RCX,RDI }
    /* +0xce03d6 */ __asm { ROL RCX,0x2a }
    /* +0xce03da */ __asm { MOV RAX,RDI }
    /* +0xce03dd */ __asm { ROL RAX,0x30 }
    /* +0xce03e1 */ __asm { XOR RAX,RCX }
    /* +0xce03e4 */ __asm { XOR RAX,RDI }
    /* +0xce03e7 */ __asm { MOV R13,RAX }
    /* +0xce03ea */ __asm { ROL R13,0x20 }
    /* +0xce03ee */ __asm { XOR R13,RAX }
    /* +0xce03f1 */ __asm { ROL RAX,0x14 }
    /* +0xce03f5 */ __asm { MOV RCX,R13 }
    /* +0xce03f8 */ __asm { IMUL RCX,RAX }
    /* +0xce03fc */ __asm { XOR R13,RAX }
    /* +0xce03ff */ __asm { CMP R11,R10 }
    /* +0xce0402 */ __asm { CMOVBE R13,RCX }
    /* +0xce0406 */ __asm { MOV RDI,R8 }
    /* +0xce0409 */ __asm { MOV RBP,R9 }
    /* +0xce040c */ __asm { ROL R13,0x18 }
    /* +0xce0410 */ __asm { MOV R9W,0x3615 }
    /* +0xce0415 */ __asm { XOR R9D,EBX }
    /* +0xce0418 */ __asm { MOV ECX,0x4 }
    /* +0xce041d */ __asm { SUB ECX,R9D }
    /* +0xce0420 */ __asm { MOVZX R9D,CX }
    /* +0xce0424 */ __asm { CMP EDX,R9D }
    /* +0xce0427 */ __asm { JNC 0x7fffa5450639 }
    /* +0xce042d */ __asm { CMP EDX,0x1 }
    /* +0xce0430 */ __asm { JZ 0x7fffa54507b6 }
    /* +0xce0436 */ __asm { MOV R8D,0x6cb4ae4 }
    /* +0xce043c */ __asm { MOV RCX,-0x1f82bd3df42784e2 }
    /* +0xce0446 */ __asm { CMP R8,RCX }
    /* +0xce0449 */ __asm { NOP }
    /* +0xce044a */ __asm { NOP }
    /* +0xce044b */ __asm { NOP }
    /* +0xce044c */ __asm { NOP }
    /* +0xce044d */ __asm { NOP }
    /* +0xce044e */ __asm { MOV R11D,0x85620ee5 }
    /* +0xce0454 */ __asm { MOV R10,0x0 }
    /* +0xce045b */ __asm { NOP }
    /* +0xce045c */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xce0463 */ __asm { MOV R10D,0xd4601440 }
    /* +0xce0469 */ __asm { XOR R11D,EBX }
    /* +0xce046c */ __asm { ROL R11D,0x17 }
    /* +0xce0470 */ __asm { XOR R10D,EBX }
    /* +0xce0473 */ __asm { ROL R10D,0x1b }
    /* +0xce0477 */ __asm { MOV R9,qword ptr [R8 + R11*0x1 + 0x8] }
    /* +0xce047c */ __asm { MOV RCX,0x7e3f1a166fd87869 }
    /* +0xce0486 */ __asm { MOV RAX,R9 }
    /* +0xce0489 */ __asm { MUL RCX }
    /* +0xce048c */ __asm { MOV RCX,RAX }
    /* +0xce048f */ __asm { MOV R11,RDX }
    /* +0xce0492 */ __asm { MOV EDX,0x146f0cd }
    /* +0xce0497 */ __asm { MOV RAX,R9 }
    /* +0xce049a */ __asm { MUL RDX }
    /* +0xce049d */ __asm { ADD RAX,R11 }
    /* +0xce04a0 */ __asm { ADC RDX,0x0 }
    /* +0xce04a4 */ __asm { MOV R9,RDX }
    /* +0xce04a7 */ __asm { XOR R9,0x1 }
    /* +0xce04ab */ __asm { AND EDX,0x1 }
    /* +0xce04ae */ __asm { XOR R11D,R11D }
    /* +0xce04b1 */ __asm { MOV R8D,0xb9a34112 }
    /* +0xce04b7 */ __asm { CMP R10,R8 }
    /* +0xce04ba */ __asm { CMOVNZ RDX,R9 }
    /* +0xce04be */ __asm { CMOVZ RAX,R11 }
    /* +0xce04c2 */ __asm { CMOVZ RCX,R11 }
    /* +0xce04c6 */ __asm { OR RCX,RDX }
    /* +0xce04c9 */ __asm { PXOR XMM2,XMM2 }
    /* +0xce04cd */ __asm { OR RCX,RAX }
    /* +0xce04d0 */ __asm { JZ 0x7fffa5450e90 }
    /* +0xce04d6 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM2 }
    /* +0xce04dc */ __asm { MOV DX,0x85bc }
    /* +0xce04e0 */ __asm { ADD EDX,0x89a }
    /* +0xce04e6 */ __asm { MOV R9D,EBX }
    /* +0xce04e9 */ __asm { OR R9D,0x1 }
    /* +0xce04ed */ __asm { IMUL R9D,EDX }
    /* +0xce04f1 */ __asm { ADD R9D,0x12a6 }
    /* +0xce04f8 */ __asm { MOVZX R9D,R9W }
    /* +0xce04fc */ __asm { MOV RCX,qword ptr GS:[R9] }
    /* +0xce0500 */ __asm { MOV R9,-0x70f39fe34c10a600 }
    /* +0xce050a */ __asm { MOV RDX,RBX }
    /* +0xce050d */ __asm { OR RDX,0x1 }
    /* +0xce0511 */ __asm { IMUL RDX,R9 }
    /* +0xce0515 */ __asm { ADD RDX,0x58ee0456 }
    /* +0xce051c */ __asm { MOV RCX,qword ptr [RCX + 0x30] }
    /* +0xce0520 */ __asm { MOV R8,0x7b5ec6e22d208e5 }
    /* +0xce052a */ __asm { CMP RCX,RDX }
    /* +0xce052d */ __asm { NOP }
    /* +0xce052e */ __asm { NOP }
    /* +0xce052f */ __asm { NOP }
    /* +0xce0530 */ __asm { NOP }
    /* +0xce0531 */ __asm { NOP }
    /* +0xce0532 */ __asm { NOP }
    /* +0xce0533 */ __asm { NOP }
    /* +0xce0534 */ __asm { NOP }
    /* +0xce0535 */ __asm { NOP }
    /* +0xce0536 */ __asm { NOP }
    /* +0xce0537 */ __asm { NOP }
    /* +0xce0538 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xce0540 */ __asm { MOV dword ptr [RSP + 0x60],0xb8e14b6a }
    /* +0xce0548 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xce054c */ __asm { CMP EDX,0x116e9d49 }
    /* +0xce0552 */ __asm { JBE 0x7fffa5451054 }
    /* +0xce0558 */ __asm { PUSHFQ }
    /* +0xce0559 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xce0561 */ __asm { POPFQ }
    /* +0xce0562 */ __asm { MOV dword ptr [RSP + 0x60],0x728658ca }
    /* +0xce056a */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xce056e */ __asm { TEST EDX,EDX }
    /* +0xce0570 */ __asm { NOP }
    /* +0xce0571 */ __asm { NOP }
    /* +0xce0572 */ __asm { NOP }
    /* +0xce0573 */ __asm { NOP }
    /* +0xce0574 */ __asm { NOP }
    /* +0xce0575 */ __asm { NOP }
    /* +0xce0576 */ __asm { NOP }
    /* +0xce0577 */ __asm { NOP }
    /* +0xce0578 */ __asm { NOP }
    /* +0xce0579 */ __asm { NOP }
    /* +0xce057a */ __asm { NOP }
    /* +0xce057b */ __asm { NOP }
    /* +0xce057c */ __asm { NOP }
    /* +0xce057d */ __asm { MOV R15D,R12D }
    /* +0xce0580 */ __asm { LEA R8,[0x7fffa47bc5c8] }
    /* +0xce0587 */ __asm { PUSHFQ }
    /* +0xce0588 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xce0590 */ __asm { POPFQ }
    /* +0xce0591 */ __asm { MOV RCX,0x571de54013e7ff05 }
    /* +0xce059b */ __asm { CMP R8,RCX }
    /* +0xce059e */ __asm { NOP }
    /* +0xce059f */ __asm { NOP }
    /* +0xce05a0 */ __asm { NOP }
    /* +0xce05a1 */ __asm { NOP }
    /* +0xce05a2 */ __asm { NOP }
    /* +0xce05a3 */ __asm { MOV RCX,-0x1f7814a52ff40b70 }
    /* +0xce05ad */ __asm { MOV DX,0x25e3 }
    /* +0xce05b1 */ __asm { LEA R14,[0x7fffa4788241] }
    /* +0xce05b8 */ __asm { XOR R9D,R9D }
    /* +0xce05bb */ __asm { MOV EAX,0x25f3 }
    /* +0xce05c0 */ __asm { SUB EAX,EDX }
    /* +0xce05c2 */ __asm { MOV RDX,RBX }
    /* +0xce05c5 */ __asm { XOR RDX,RCX }
    /* +0xce05c8 */ __asm { IMUL R9D,R9D,-0x109ddd07 }
    /* +0xce05cf */ __asm { NOT R9D }
    /* +0xce05d2 */ __asm { MOVSXD R10,R9D }
    /* +0xce05d5 */ __asm { MOV qword ptr [RSP + 0x60],RCX }
    /* +0xce05da */ __asm { MOV R12,-0xb10cfa0f }
    /* +0xce05e4 */ __asm { MOV R11W,0x4b3f }
    /* +0xce05e9 */ __asm { ADD R11D,0x4c1 }
    /* +0xce05f0 */ __asm { MOV ECX,EBX }
    /* +0xce05f2 */ __asm { ROL R11W,CL }
    /* +0xce05f6 */ __asm { ADD R12,RDX }
    /* +0xce05f9 */ __asm { MOVZX R9D,AX }
    /* +0xce05fd */ __asm { MOVZX EDX,R11W }
    /* +0xce0601 */ __asm { MOV EAX,dword ptr [R8 + 0xa10] }
    /* +0xce0608 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xce060d */ __asm { SYSCALL }
    /* +0xce060f */ __asm { CMP R14,R12 }
    /* +0xce0612 */ __asm { JZ 0x7fffa545105f }
    /* +0xce0618 */ __asm { MOV R8,0x0 }
    /* +0xce061f */ __asm { NOP }
    /* +0xce0621 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xce0628 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xce062d */ __asm { MOV EAX,dword ptr [R14 + -0x3bf5] }
    /* +0xce0634 */ __asm { JMP 0x7fffa5450e61 }
    /* +0xce0639 */ __asm { CMP EDX,0x3 }
    /* +0xce063c */ __asm { JZ 0x7fffa5450929 }
    /* +0xce0642 */ __asm { MOV R8D,0x37c9ca0c }
    /* +0xce0648 */ __asm { MOV RCX,0x2fd23893fc033f6e }
    /* +0xce0652 */ __asm { CMP R8,RCX }
    /* +0xce0655 */ __asm { NOP }
    /* +0xce0656 */ __asm { NOP }
    /* +0xce0657 */ __asm { NOP }
    /* +0xce0658 */ __asm { MOV R9D,dword ptr [R8 + 0x483438b8] }
    /* +0xce065f */ __asm { MOV RCX,-0x2d1d41e7b05219b3 }
    /* +0xce0669 */ __asm { MOV R11D,0xed0309a1 }
    /* +0xce066f */ __asm { IMUL R11,RCX }
    /* +0xce0673 */ __asm { SUB R11,RBX }
    /* +0xce0676 */ __asm { MOV RCX,0x5555555555555556 }
    /* +0xce0680 */ __asm { IMUL RCX,R9 }
    /* +0xce0684 */ __asm { PXOR XMM2,XMM2 }
    /* +0xce0688 */ __asm { CMP RCX,R11 }
    /* +0xce068b */ __asm { JNC 0x7fffa5450ad7 }
    /* +0xce0691 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM2 }
    /* +0xce0697 */ __asm { MOV DX,0xe8d1 }
    /* +0xce069b */ __asm { XOR EDX,EBX }
    /* +0xce069d */ __asm { MOV R9D,0xffffdf26 }
    /* +0xce06a3 */ __asm { SUB R9D,EDX }
    /* +0xce06a6 */ __asm { MOVZX R9D,R9W }
    /* +0xce06aa */ __asm { MOV RCX,-0x5ab3c1b7c840297 }
    /* +0xce06b4 */ __asm { IMUL RCX,qword ptr GS:[R9] }
    /* +0xce06b9 */ __asm { MOV R9,-0x5906e6ce8db8e860 }
    /* +0xce06c3 */ __asm { ADD R9,RCX }
    /* +0xce06c6 */ __asm { MOV RCX,-0x6e6343a3245503c3 }
    /* +0xce06d0 */ __asm { CMP R9,RCX }
    /* +0xce06d3 */ __asm { JZ 0x7fffa545103d }
    /* +0xce06d9 */ __asm { MOV RCX,qword ptr [RSP + 0xa8] }
    /* +0xce06e1 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xce06e9 */ __asm { MOV R9,0x3da2c808901dbd1 }
    /* +0xce06f3 */ __asm { CMP qword ptr [RCX + -0xf98],R9 }
    /* +0xce06fa */ __asm { NOP }
    /* +0xce06fb */ __asm { NOP }
    /* +0xce06fc */ __asm { NOP }
    /* +0xce06fd */ __asm { NOP }
    /* +0xce06fe */ __asm { NOP }
    /* +0xce06ff */ __asm { NOP }
    /* +0xce0700 */ __asm { NOP }
    /* +0xce0701 */ __asm { NOP }
    /* +0xce0703 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xce070a */ __asm { MOV R8,0x0 }
    /* +0xce0711 */ __asm { MOV dword ptr [RSP + 0x60],0x30e246a1 }
    /* +0xce0719 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xce071d */ __asm { LEA R8,[0x7fffa47ba1b7] }
    /* +0xce0724 */ __asm { MOV R10,R8 }
    /* +0xce0727 */ __asm { ROL R10,0x12 }
    /* +0xce072b */ __asm { MOV RCX,-0xac098c71 }
    /* +0xce0735 */ __asm { ADD RCX,R10 }
    /* +0xce0738 */ __asm { MOV R9,0x358ac3edbb0ceae7 }
    /* +0xce0742 */ __asm { CMP RCX,R9 }
    /* +0xce0745 */ __asm { NOP }
    /* +0xce0746 */ __asm { NOP }
    /* +0xce0747 */ __asm { NOP }
    /* +0xce0748 */ __asm { NOP }
    /* +0xce0749 */ __asm { NOP }
    /* +0xce074a */ __asm { MOV DX,0x510e }
    /* +0xce074e */ __asm { LEA R14,[0x7fffa478a49f] }
    /* +0xce0755 */ __asm { MOV CX,0xeaa8 }
    /* +0xce0759 */ __asm { SUB EDX,EBX }
    /* +0xce075b */ __asm { MOV R9W,0x3606 }
    /* +0xce0760 */ __asm { NOT R9D }
    /* +0xce0763 */ __asm { ADD R9D,EBX }
    /* +0xce0766 */ __asm { MOVZX R9D,R9W }
    /* +0xce076a */ __asm { XOR EDX,0x1adf }
    /* +0xce0770 */ __asm { MOVZX EDX,DX }
    /* +0xce0773 */ __asm { XOR ECX,EBX }
    /* +0xce0775 */ __asm { MOV qword ptr [RSP + 0x60],R10 }
    /* +0xce077a */ __asm { MOV EAX,dword ptr [R8 + 0x2e21] }
    /* +0xce0781 */ __asm { ADD ECX,0x2340 }
    /* +0xce0787 */ __asm { MOVSX R10,CX }
    /* +0xce078b */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xce0790 */ __asm { SYSCALL }
    /* +0xce0792 */ __asm { MOV RCX,-0x4ad2556556b2a9ba }
    /* +0xce079c */ __asm { CMP R14,RCX }
    /* +0xce079f */ __asm { NOP }
    /* +0xce07a0 */ __asm { NOP }
    /* +0xce07a1 */ __asm { NOP }
    /* +0xce07a2 */ __asm { NOP }
    /* +0xce07a3 */ __asm { NOP }
    /* +0xce07a4 */ __asm { NOP }
    /* +0xce07a5 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xce07aa */ __asm { MOV EAX,dword ptr [R14 + -0x5e53] }
    /* +0xce07b1 */ __asm { JMP 0x7fffa5450d1a }
    /* +0xce07b6 */ __asm { MOV R8D,0x92a583a2 }
    /* +0xce07bc */ __asm { MOV RCX,-0x4c29becf8ef5ea2b }
    /* +0xce07c6 */ __asm { CMP R8,RCX }
    /* +0xce07c9 */ __asm { JZ 0x7fffa545104d }
    /* +0xce07cf */ __asm { MOV R9D,dword ptr [R8 + -0x12a780de] }
    /* +0xce07d6 */ __asm { MOV RCX,0x5555555555555556 }
    /* +0xce07e0 */ __asm { IMUL RCX,R9 }
    /* +0xce07e4 */ __asm { MOV R9,0x5555555555555555 }
    /* +0xce07ee */ __asm { PXOR XMM2,XMM2 }
    /* +0xce07f2 */ __asm { CMP RCX,R9 }
    /* +0xce07f5 */ __asm { JA 0x7fffa5450be7 }
    /* +0xce07fb */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM2 }
    /* +0xce0801 */ __asm { MOV dword ptr [RSP + 0x60],0xcffefd76 }
    /* +0xce0809 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xce080d */ __asm { PUSHFQ }
    /* +0xce080e */ __asm { POP R8 }
    /* +0xce0810 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xce0818 */ __asm { TEST R8D,0x100 }
    /* +0xce081f */ __asm { NOP }
    /* +0xce0820 */ __asm { NOP }
    /* +0xce0821 */ __asm { NOP }
    /* +0xce0822 */ __asm { NOP }
    /* +0xce0823 */ __asm { NOP }
    /* +0xce0824 */ __asm { NOP }
    /* +0xce0825 */ __asm { NOP }
    /* +0xce0826 */ __asm { NOP }
    /* +0xce0827 */ __asm { NOP }
    /* +0xce0828 */ __asm { NOP }
    /* +0xce0829 */ __asm { MOV dword ptr [RSP + 0x60],0x981fe6f2 }
    /* +0xce0831 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xce0835 */ __asm { TEST EDX,EDX }
    /* +0xce0837 */ __asm { JNS 0x7fffa5451077 }
    /* +0xce083d */ __asm { MOV dword ptr [RSP + 0x60],0x8650504 }
    /* +0xce0845 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xce0849 */ __asm { TEST DL,0x1 }
    /* +0xce084c */ __asm { JNZ 0x7fffa5451087 }
    /* +0xce0852 */ __asm { LEA R8,[0x7fffa4781ab3] }
    /* +0xce0859 */ __asm { MOV R10,R8 }
    /* +0xce085c */ __asm { ROL R10,0x10 }
    /* +0xce0860 */ __asm { MOV RCX,0x14354fd5b080a401 }
    /* +0xce086a */ __asm { IMUL RCX,R10 }
    /* +0xce086e */ __asm { MOV R9,-0xb25753fbf07f4f1 }
    /* +0xce0878 */ __asm { CMP RCX,R9 }
    /* +0xce087b */ __asm { JZ 0x7fffa5451093 }
    /* +0xce0881 */ __asm { MOV R9,0x7af933fed02be97a }
    /* +0xce088b */ __asm { MOV R11D,0x3ffff8e4 }
    /* +0xce0891 */ __asm { MOV DX,0x7ae0 }
    /* +0xce0895 */ __asm { ADD R9,RBX }
    /* +0xce0898 */ __asm { MOV CX,0x7be2 }
    /* +0xce089c */ __asm { MOV AX,0x13d7 }
    /* +0xce08a0 */ __asm { MOV R10D,EBX }
    /* +0xce08a3 */ __asm { OR R10D,0x1 }
    /* +0xce08a7 */ __asm { IMUL R10D,ECX }
    /* +0xce08ab */ __asm { LEA R14,[0x7fffa47be576] }
    /* +0xce08b2 */ __asm { XOR EDX,0xffff9dd8 }
    /* +0xce08b8 */ __asm { IMUL EDX,EDX,0x1233 }
    /* +0xce08be */ __asm { ADD EAX,0xffffec2a }
    /* +0xce08c3 */ __asm { NOT R10D }
    /* +0xce08c6 */ __asm { MOVZX R10D,R10W }
    /* +0xce08ca */ __asm { MOVZX EDX,DX }
    /* +0xce08cd */ __asm { MOV R15,R14 }
    /* +0xce08d0 */ __asm { ROL AX,0xb }
    /* +0xce08d4 */ __asm { MOV ECX,EBX }
    /* +0xce08d6 */ __asm { ROR AX,CL }
    /* +0xce08d9 */ __asm { XOR R15,R9 }
    /* +0xce08dc */ __asm { MOVZX R9D,AX }
    /* +0xce08e0 */ __asm { MOV qword ptr [RSP + 0x60],RCX }
    /* +0xce08e5 */ __asm { MOV EAX,dword ptr [R8 + R10*0x1 + 0x128] }
    /* +0xce08ed */ __asm { MOV ECX,0x3ffff8e3 }
    /* +0xce08f2 */ __asm { SUB ECX,R11D }
    /* +0xce08f5 */ __asm { MOVSXD R10,ECX }
    /* +0xce08f8 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xce08fd */ __asm { SYSCALL }
    /* +0xce08ff */ __asm { CMP R15,-0x1 }
    /* +0xce0903 */ __asm { NOP }
    /* +0xce0904 */ __asm { NOP }
    /* +0xce0905 */ __asm { NOP }
    /* +0xce0906 */ __asm { NOP }
    /* +0xce0907 */ __asm { NOP }
    /* +0xce0908 */ __asm { NOP }
    /* +0xce090a */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xce0911 */ __asm { MOV R8,0x0 }
    /* +0xce0918 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xce091d */ __asm { MOV EAX,dword ptr [R14 + -0x202e] }
    /* +0xce0924 */ __asm { JMP 0x7fffa5450d1a }
    /* +0xce0929 */ __asm { NOP }
    /* +0xce092b */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xce0932 */ __asm { MOV R8,0x0 }
    /* +0xce0939 */ __asm { MOV R8D,0x49143862 }
    /* +0xce093f */ __asm { MOV RCX,0x67443bf6ff819d6c }
    /* +0xce0949 */ __asm { CMP R8,RCX }
    /* +0xce094c */ __asm { NOP }
    /* +0xce094d */ __asm { NOP }
    /* +0xce094e */ __asm { NOP }
    /* +0xce094f */ __asm { NOP }
    /* +0xce0950 */ __asm { NOP }
    /* +0xce0951 */ __asm { MOV RCX,-0x43fe34565abd7925 }
    /* +0xce095b */ __asm { IMUL RCX,RCX,0x626ea1cb }
    /* +0xce0962 */ __asm { NOT RCX }
    /* +0xce0965 */ __asm { MOV R9D,dword ptr [R8 + 0x36e9ca62] }
    /* +0xce096c */ __asm { MOV R11,0x5555555555555556 }
    /* +0xce0976 */ __asm { IMUL R11,R9 }
    /* +0xce097a */ __asm { PXOR XMM2,XMM2 }
    /* +0xce097e */ __asm { CMP R11,RCX }
    /* +0xce0981 */ __asm { JNC 0x7fffa5450d2d }
    /* +0xce0987 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM2 }
    /* +0xce098d */ __asm { MOV dword ptr [RSP + 0x60],0x6dcf08d4 }
    /* +0xce0995 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xce0999 */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xce09a1 */ __asm { MOV dword ptr [RSP + 0x60],0x324f0c79 }
    /* +0xce09a9 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xce09ad */ __asm { PUSHFQ }
    /* +0xce09ae */ __asm { POP R8 }
    /* +0xce09b0 */ __asm { TEST R8D,0x100 }
    /* +0xce09b7 */ __asm { NOP }
    /* +0xce09b8 */ __asm { NOP }
    /* +0xce09b9 */ __asm { NOP }
    /* +0xce09ba */ __asm { NOP }
    /* +0xce09bb */ __asm { NOP }
    /* +0xce09bc */ __asm { NOP }
    /* +0xce09bd */ __asm { NOP }
    /* +0xce09be */ __asm { NOP }
    /* +0xce09bf */ __asm { NOP }
    /* +0xce09c0 */ __asm { NOP }
    /* +0xce09c1 */ __asm { NOP }
    /* +0xce09c2 */ __asm { NOP }
    /* +0xce09c3 */ __asm { NOP }
    /* +0xce09c4 */ __asm { NOP }
    /* +0xce09c5 */ __asm { NOP }
    /* +0xce09c6 */ __asm { NOP }
    /* +0xce09c7 */ __asm { NOP }
    /* +0xce0a17 */ __asm { MOV R15D,R12D }
    /* +0xce0a1a */ __asm { LEA R8,[0x7fffa478242c] }
    /* +0xce0a21 */ __asm { MOV RCX,0x43d2dafb387e3f89 }
    /* +0xce0a2b */ __asm { CMP R8,RCX }
    /* +0xce0a2e */ __asm { NOP }
    /* +0xce0a2f */ __asm { NOP }
    /* +0xce0a30 */ __asm { NOP }
    /* +0xce0a31 */ __asm { NOP }
    /* +0xce0a32 */ __asm { NOP }
    /* +0xce0a33 */ __asm { MOV DX,0xcd62 }
    /* +0xce0a37 */ __asm { ADD EDX,0xffff9c5e }
    /* +0xce0a3d */ __asm { MOVD XMM2,EDX }
    /* +0xce0a41 */ __asm { MOV R9,RBX }
    /* +0xce0a44 */ __asm { OR R9,0x1 }
    /* +0xce0a48 */ __asm { LEA R14,[0x7fffa47bce8d] }
    /* +0xce0a4f */ __asm { MOV EDX,EBX }
    /* +0xce0a51 */ __asm { OR EDX,0x1 }
    /* +0xce0a54 */ __asm { MOVD XMM4,EDX }
    /* +0xce0a58 */ __asm { MOV qword ptr [RSP + 0x60],R10 }
    /* +0xce0a5d */ __asm { MOV ECX,0xebfb6dba }
    /* +0xce0a62 */ __asm { XOR ECX,EBX }
    /* +0xce0a64 */ __asm { MOV EAX,0xbf35bac }
    /* +0xce0a69 */ __asm { SUB EAX,ECX }
    /* +0xce0a6b */ __asm { MOVSXD R10,EAX }
    /* +0xce0a6e */ __asm { MOV EAX,dword ptr [R8 + 0x2a60] }
    /* +0xce0a75 */ __asm { MOV RCX,0x39befbdf35b771c }
    /* +0xce0a7f */ __asm { MOV R12,-0xc0000096 }
    /* +0xce0a89 */ __asm { ADD R12,RCX }
    /* +0xce0a8c */ __asm { IMUL R12,R9 }
    /* +0xce0a90 */ __asm { XOR R12,R14 }
    /* +0xce0a93 */ __asm { PMULLW XMM4,XMM2 }
    /* +0xce0a97 */ __asm { MOVD R9D,XMM4 }
    /* +0xce0a9c */ __asm { ROL R9W,0xe }
    /* +0xce0aa1 */ __asm { MOVZX R9D,R9W }
    /* +0xce0aa5 */ __asm { MOV CX,0xa858 }
    /* +0xce0aa9 */ __asm { XOR ECX,0xffffea40 }
    /* +0xce0aaf */ __asm { IMUL ECX,EDX }
    /* +0xce0ab2 */ __asm { MOVZX EDX,CX }
    /* +0xce0ab5 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xce0aba */ __asm { SYSCALL }
    /* +0xce0abc */ __asm { CMP R12,-0x1 }
    /* +0xce0ac0 */ __asm { JZ 0x7fffa54510a7 }
    /* +0xce0ac6 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0xce0acb */ __asm { MOV EAX,dword ptr [R14 + 0x193] }
}


// ============================================================================
// Function : FUN_7fffa5451110  |  RVA: 0xce1110  |  Size: 179 bytes
// Callers  : FUN_7fffa517b810@0xa0b810
// Callees  : FUN_7fffa5210660@0xaa0660, FUN_7fffa5607af0@0xe97af0, FUN_7fffa4ab2700@0x342700, FUN_7fffa5224960@0xab4960, FUN_7fffa5246e30@0xad6e30
// ============================================================================
void FUN_7fffa5451110(int64_t param_1,int64_t *param_2,int *param_3,int64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  if (-1 < *param_3) {
    param_2 = (int64_t *)((int64_t)param_3[2] + *param_2);
  }
  iVar1 = FUN_7fffa4ab2700();
  if (iVar1 == 1) {
    uVar2 = FUN_7fffa5210660(*(uint64_t *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_7fffa5246e30();
      lVar3 = lVar3 + iVar1;
    }
    FUN_7fffa5224960(param_2,lVar3,uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_7fffa5210660(*(uint64_t *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_7fffa5246e30();
      lVar3 = lVar3 + iVar1;
    }
    FUN_7fffa5607af0(param_2,lVar3,uVar2,1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa54511cc  |  RVA: 0xce11cc  |  Size: 125 bytes
// Callers  : FUN_7fffa52d242c@0xb6242c, FUN_7fffa4cf5f50@0x585f50
// Callees  : FUN_7fffa564c5c0@0xedc5c0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7fffa54511cc(int param_1)

{
  int64_t lStack_28;
  int64_t lStack_20;
  char cStack_10;
  
  FUN_7fffa564c5c0(&lStack_28,0);
  _DAT_7fffa47825d0 = 0;
  if (param_1 == -2) {
    _DAT_7fffa47825d0 = 1;
    param_1 = (*(code *)&DAT_7ff84ea448b0)();
  }
  else if (param_1 == -3) {
    _DAT_7fffa47825d0 = 1;
    param_1 = (*(code *)&DAT_7ff84ea3b180)();
  }
  else if (param_1 == -4) {
    _DAT_7fffa47825d0 = 1;
    param_1 = *(int *)(lStack_20 + 0xc);
  }
  if (cStack_10 != '\0') {
    *(uint32_t *)(lStack_28 + 0x3a8) = *(uint32_t *)(lStack_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa545124c  |  RVA: 0xce124c  |  Size: 277 bytes
// Callers  : FUN_7fffa54003cc@0xc903cc
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa545124c(uint64_t *param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint8_t bVar5;
  sbyte sVar6;
  uint32_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  
  uVar1 = _DAT_7fffa4780040;
  puVar8 = *(uint64_t **)*param_1;
  if (puVar8 == (uint64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (uint8_t)_DAT_7fffa4780040 & 0x3f;
    puVar10 = (uint64_t *)
              ((_DAT_7fffa4780040 ^ *puVar8) >> bVar5 |
              (_DAT_7fffa4780040 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (uint64_t *)
             ((_DAT_7fffa4780040 ^ puVar8[1]) >> bVar5 |
             (_DAT_7fffa4780040 ^ puVar8[1]) << 0x40 - bVar5);
    if ((int64_t)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint32_t)_DAT_7fffa4780040 & 0x3f;
      puVar9 = puVar8;
      uVar3 = _DAT_7fffa4780040;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          uVar3 = *puVar8 ^ uVar3;
          *puVar8 = uVar1;
          (*(code *)(uVar3 >> (sbyte)uVar7 | uVar3 << 0x40 - (sbyte)uVar7))();
          uVar7 = (uint32_t)_DAT_7fffa4780040 & 0x3f;
          uVar11 = _DAT_7fffa4780040 ^ **(uint64_t **)*param_1;
          uVar3 = _DAT_7fffa4780040 ^ (*(uint64_t **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (uint64_t *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (uint64_t *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = _DAT_7fffa4780040;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (uint64_t *)0xffffffffffffffff) {
        FUN_7fffa52d8dd0(puVar10);
        uVar3 = _DAT_7fffa4780040;
      }
      **(uint64_t **)*param_1 = uVar3;
      *(uint64_t *)(*(int64_t *)*param_1 + 8) = uVar3;
      *(uint64_t *)(*(int64_t *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa5451370  |  RVA: 0xce1370  |  Size: 1173 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa54517f9) */

void FUN_7fffa5451370(void)

{
  uRam00007fffa47bb0e0 = 0x908827e19fcc6b24;
  uRam00007fffa47bb0f8 = 0xb9c7c7ce41152569;
  uRam00007fffa47bb0f0 = 0x3705562759a58349;
  uRam00007fffa47bb0e8 = 0x8d7b1193a5b0451c;
  uRam00007fffa47bb118 = 0xcc3d9ff678c4abaf;
  uRam00007fffa47bb108 = 0xd6488f7b72a880e4;
  lRam00007fffa47bb100 = -0x1168b88ba1640a00 - lRam00007fffa47814f8;
  uRam00007fffa47bb110 = 0xdfa08a27b2a1a178;
  return;
}


// ============================================================================
// Function : FUN_7fffa5451810  |  RVA: 0xce1810  |  Size: 80 bytes
// Callers  : none
// Callees  : FUN_7fffa5451860@0xce1860, FUN_7fffa5451864@0xce1864
// ============================================================================
void FUN_7fffa5451810(void *param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = StackLimit;
  pvVar1 = StackBase;
  StackBase = param_2;
  StackLimit = param_1;
  *(uint64_t *)((uint64_t)((int)param_2 - 0x100) - 8) = 0x7fffa545185e;
  FUN_7fffa5451860(param_1,(int)param_2,pvVar1,pvVar2);
  FUN_7fffa5451864();
  return;
}


// ============================================================================
// Function : FUN_7fffa5451860  |  RVA: 0xce1860  |  Size: 3 bytes
// Callers  : FUN_7fffa5451810@0xce1810
// Callees  : none
// ============================================================================
void FUN_7fffa5451860(uint64_t param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x7fffa5451860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uint64_t)*(uint32_t *)(int64_t)param_2)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5451864  |  RVA: 0xce1864  |  Size: 31 bytes
// Callers  : FUN_7fffa5451810@0xce1810
// Callees  : none
// ============================================================================
void FUN_7fffa5451864(uint64_t param_1,uint64_t param_2,void *param_3,void *param_4)

{
  StackBase = param_3;
  StackLimit = param_4;
  return;
}


// ============================================================================
// Function : FUN_7fffa5451890  |  RVA: 0xce1890  |  Size: 23 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa54518a3) */

uint32_t FUN_7fffa5451890(void)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)cpuid_Version_info(1);
  return *puVar1;
}


// ============================================================================
// Function : FUN_7fffa5453800  |  RVA: 0xce3800  |  Size: 208 bytes
// Callers  : none
// Callees  : FUN_7fffa54e6b00@0xd76b00
// ============================================================================
void FUN_7fffa5453800(code *param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  code *in_R10;
  
  if (param_1 == FUN_7fffa5453800) {
    param_1 = in_R10;
  }
  UNRECOVERED_JUMPTABLE = (code *)FUN_7fffa54e6b00(in_R10);
                    /* WARNING: Could not recover jumptable at 0x7fffa54538cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa54539d0  |  RVA: 0xce39d0  |  Size: 210 bytes
// Callers  : FUN_7fffa55abf60@0xe3bf60, FUN_7fffa561da50@0xeada50, FUN_7fffa54279c6@0xcb79c6, FUN_7fffa55f2ed0@0xe82ed0, FUN_7fffa4e8e990@0x71e990, FUN_7fffa5513b90@0xda3b90, FUN_7fffa51306a1@0x9c06a1, FUN_7fffa507ae2a@0x90ae2a
// Callees  : FUN_7fffa5215110@0xaa5110, FUN_7fffa52c3bf0@0xb53bf0, FUN_7fffa524fccc@0xadfccc
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa54539d0(void)

{
  code *pcVar1;
  uint32_t uVar2;
  int iVar3;
  int64_t lVar4;
  
  if (_DAT_7fffa4780240 != -1) {
    uVar2 = (*(code *)&DAT_7ff84ea18640)();
    lVar4 = (*(code *)&DAT_7ff84ea12a00)(_DAT_7fffa4780240);
    if (lVar4 != -1) {
      if (lVar4 != 0) {
LAB_7fffa5453a68:
        (*(code *)&DAT_7ff84ea28280)(uVar2);
        return lVar4;
      }
      iVar3 = (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,0xffffffffffffffff);
      if (iVar3 != 0) {
        lVar4 = FUN_7fffa5215110(1,0x80);
        if (lVar4 == 0) {
          (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,0);
          lVar4 = 0;
        }
        else {
          iVar3 = (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,lVar4);
          if (iVar3 != 0) {
            *(uint32_t *)(lVar4 + 0x78) = 0xfffffffe;
            FUN_7fffa52c3bf0(0);
            goto LAB_7fffa5453a68;
          }
          (*(code *)&DAT_7ff84ea37cf0)(_DAT_7fffa4780240,0);
        }
        FUN_7fffa52c3bf0(lVar4);
      }
    }
    (*(code *)&DAT_7ff84ea28280)(uVar2);
  }
  FUN_7fffa524fccc();
  pcVar1 = (code *)__debugbreak();
  lVar4 = (*pcVar1)();
  return lVar4;
}


// ============================================================================
// Function : FUN_7fffa5453ab0  |  RVA: 0xce3ab0  |  Size: 27 bytes
// Callers  : FUN_7fffa54765d0@0xd065d0, FUN_7fffa5244750@0xad4750, FUN_7fffa56a1540@0xf31540, FUN_7fffa5659a60@0xee9a60, FUN_7fffa5668b80@0xef8b80
// Callees  : FUN_7fffa55f99a0@0xe899a0
// ============================================================================
void FUN_7fffa5453ab0(void)

{
  FUN_7fffa55f99a0();
  return;
}


// ============================================================================
// Function : FUN_7fffa5453ad0  |  RVA: 0xce3ad0  |  Size: 690 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5453ad0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  bRam00007fffa47bd3ee = '\0';
  uRam00007fffa47bd40a = 0;
  uRam00007fffa47bd412 = 0;
  uRam00007fffa47bd3fa = 0;
  uRam00007fffa47bd402 = 0;
  uRam00007fffa47bd427 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0x54faaddcd24fd6a;
  uVar3 = 0;
  while( true ) {
    *(char *)(uVar3 + 0x7fffa47bd3ea) = (char)((uint64_t)(lVar2 * 0x7cee912868) >> 0x20);
    *(char *)(uVar3 + 0x7fffa47bd3e8) = (char)((uint64_t)(lVar2 * 0xddcd24fd6a) >> 0x20);
    *(char *)((uVar3 | 1) + 0x7fffa47bd3e8) =
         (char)((uint64_t)(lVar2 * 0x6382c43804aaafe4) >> 0x20);
    if (uVar3 == 0x44) break;
    lVar2 = lVar2 * 0x28925b0d33a98310;
    *(char *)(uVar3 + 0x7fffa47bd3eb) = (char)((uint64_t)lVar2 >> 0x20);
    uVar3 = uVar3 + 4;
  }
  bRam00007fffa47bd3ee = bRam00007fffa47bd3ee + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa47bd3ee * 8 + 0x7fffa47bd3fa) = ~uRam00007fffa47bd427;
  return;
}


// ============================================================================
// Function : FUN_7fffa5453d82  |  RVA: 0xce3d82  |  Size: 24 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa5453d82(void)

{
  FUN_7fffa4f54478(4);
  return;
}


// ============================================================================
// Function : FUN_7fffa5465140  |  RVA: 0xcf5140  |  Size: 52 bytes
// Callers  : FUN_7fffa52c6460@0xb56460
// Callees  : FUN_7fffa4f54494@0x7e4494, FUN_7fffa5251f08@0xae1f08, FUN_7fffa560a380@0xe9a380, FUN_7fffa5513ad0@0xda3ad0
// ============================================================================
void FUN_7fffa5465140(void)

{
  int iVar1;
  
  iVar1 = FUN_7fffa5513ad0();
  if (iVar1 != 0) {
    FUN_7fffa4f54494(&DAT_7fffa4781bc8);
    return;
  }
  iVar1 = FUN_7fffa560a380();
  if (iVar1 == 0) {
    FUN_7fffa5251f08();
    return;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5465180  |  RVA: 0xcf5180  |  Size: 47825 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5465180(void) {
    /* +0xcf5180 */ __asm { PUSH RBP }
    /* +0xcf5181 */ __asm { PUSH R12 }
    /* +0xcf5183 */ __asm { PUSH RBX }
    /* +0xcf5184 */ __asm { PUSH RSI }
    /* +0xcf5185 */ __asm { PUSH R14 }
    /* +0xcf5187 */ __asm { PUSH R13 }
    /* +0xcf5189 */ __asm { PUSH R15 }
    /* +0xcf518b */ __asm { PUSH RDI }
    /* +0xcf518c */ __asm { SUB RSP,0x1f8 }
    /* +0xcf5193 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xcf519b */ __asm { MOVDQA xmmword ptr [RBP + 0x160],XMM13 }
    /* +0xcf51a4 */ __asm { MOVDQA xmmword ptr [RBP + 0x150],XMM6 }
    /* +0xcf51ac */ __asm { MOV RCX,R10 }
    /* +0xcf51af */ __asm { MOV dword ptr [RBP + -0x40],0xa0eb748b }
    /* +0xcf51b6 */ __asm { MOV R9D,dword ptr [RBP + -0x40] }
    /* +0xcf51ba */ __asm { LEA RAX,[0x7fffa478a89c] }
    /* +0xcf51c1 */ __asm { MOV R11D,0xec4b9b5f }
    /* +0xcf51c7 */ __asm { MOV R9W,0x5e0d }
    /* +0xcf51cc */ __asm { XOR R9D,0x7c50 }
    /* +0xcf51d3 */ __asm { ROL R9W,CL }
    /* +0xcf51d7 */ __asm { LEA RDX,[0x7fffa479163b] }
    /* +0xcf51de */ __asm { ADD R11D,0x14a264a1 }
    /* +0xcf51e5 */ __asm { MOVSX R8,R9W }
    /* +0xcf51e9 */ __asm { MOV R9D,0x8fd37a91 }
    /* +0xcf51ef */ __asm { IMUL R10D,R9D,0x495dbae9 }
    /* +0xcf51f6 */ __asm { ROL R10D,CL }
    /* +0xcf51f9 */ __asm { ROL R11D,CL }
    /* +0xcf51fc */ __asm { MOV R9D,0xed3b6b38 }
    /* +0xcf5202 */ __asm { ADD R9D,0x125feb47 }
    /* +0xcf5209 */ __asm { ROL R9D,0xc }
    /* +0xcf520d */ __asm { MOV qword ptr [RBP + 0xb8],RCX }
    /* +0xcf5214 */ __asm { ROL R9D,CL }
    /* +0xcf5217 */ __asm { MOVSXD R9,R9D }
    /* +0xcf521a */ __asm { MOVZX R9D,uint8_t ptr [RDX + R9*0x1 + 0x3] }
    /* +0xcf5220 */ __asm { ADD RAX,R8 }
    /* +0xcf5223 */ __asm { ADD RAX,0x13 }
    /* +0xcf5227 */ __asm { CMP R11,R10 }
    /* +0xcf522a */ __asm { JBE 0x7fffa5465256 }
    /* +0xcf522c */ __asm { MOV EBX,0x8929b950 }
    /* +0xcf5231 */ __asm { MOVZX R11D,uint8_t ptr [RAX + R9*0x8] }
    /* +0xcf5236 */ __asm { MOVZX R10D,uint8_t ptr [RAX + R9*0x8 + 0x4] }
    /* +0xcf523c */ __asm { NOT R11B }
    /* +0xcf523f */ __asm { XOR EBX,0x924a0bca }
    /* +0xcf5245 */ __asm { NOT R10B }
    /* +0xcf5248 */ __asm { ROL R10B,0x1 }
    /* +0xcf524b */ __asm { ROL R11B,0x1 }
    /* +0xcf524e */ __asm { SUB EBX,dword ptr [RBP + 0xb8] }
    /* +0xcf5254 */ __asm { JMP 0x7fffa5465283 }
    /* +0xcf5256 */ __asm { MOVZX R11D,uint8_t ptr [RAX + R9*0x8] }
    /* +0xcf525b */ __asm { MOVZX R10D,uint8_t ptr [RAX + R9*0x8 + 0x4] }
    /* +0xcf5261 */ __asm { NOT R10B }
    /* +0xcf5264 */ __asm { ROL R10B,0x1 }
    /* +0xcf5267 */ __asm { NOT R11B }
    /* +0xcf526a */ __asm { MOV EBX,0xe2cf31d3 }
    /* +0xcf526f */ __asm { ADD EBX,0x9ab05c34 }
    /* +0xcf5275 */ __asm { MOV RCX,qword ptr [RBP + 0xb8] }
    /* +0xcf527c */ __asm { ROR EBX,CL }
    /* +0xcf527e */ __asm { NOT EBX }
    /* +0xcf5280 */ __asm { ROL R11B,0x1 }
    /* +0xcf5283 */ __asm { MOVZX ECX,uint8_t ptr [RAX + R9*0x8 + 0x1] }
    /* +0xcf5289 */ __asm { MOVZX R8D,uint8_t ptr [RAX + R9*0x8 + 0x6] }
    /* +0xcf528f */ __asm { NOT R8B }
    /* +0xcf5292 */ __asm { ROL R8B,0x1 }
    /* +0xcf5295 */ __asm { MOV uint8_t ptr [RBP + -0x3a],R8B }
    /* +0xcf5299 */ __asm { NOT CL }
    /* +0xcf529b */ __asm { MOV uint8_t ptr [RBP + -0x3c],R10B }
    /* +0xcf529f */ __asm { ROL CL,0x1 }
    /* +0xcf52a1 */ __asm { MOV uint8_t ptr [RBP + -0x3f],CL }
    /* +0xcf52a4 */ __asm { MOVZX R10D,uint8_t ptr [RAX + R9*0x8 + 0x3] }
    /* +0xcf52aa */ __asm { NOT R10B }
    /* +0xcf52ad */ __asm { ROL R10B,0x1 }
    /* +0xcf52b0 */ __asm { MOV uint8_t ptr [RBP + -0x3d],R10B }
    /* +0xcf52b4 */ __asm { MOVZX R10D,uint8_t ptr [RAX + R9*0x8 + 0x2] }
    /* +0xcf52ba */ __asm { MOVZX ECX,uint8_t ptr [RAX + R9*0x8 + 0x7] }
    /* +0xcf52c0 */ __asm { NOT CL }
    /* +0xcf52c2 */ __asm { ROL CL,0x1 }
    /* +0xcf52c4 */ __asm { MOV uint8_t ptr [RBP + -0x40],R11B }
    /* +0xcf52c8 */ __asm { NOT R10B }
    /* +0xcf52cb */ __asm { ROL R10B,0x1 }
    /* +0xcf52ce */ __asm { MOV uint8_t ptr [RBP + -0x3e],R10B }
    /* +0xcf52d2 */ __asm { MOVZX R11D,uint8_t ptr [RAX + R9*0x8 + 0x5] }
    /* +0xcf52d8 */ __asm { NOT R11B }
    /* +0xcf52db */ __asm { ROL R11B,0x1 }
    /* +0xcf52de */ __asm { MOV uint8_t ptr [RBP + -0x3b],R11B }
    /* +0xcf52e2 */ __asm { MOV uint8_t ptr [RBP + -0x39],CL }
    /* +0xcf52e5 */ __asm { MOV R10,qword ptr [RBP + -0x40] }
    /* +0xcf52e9 */ __asm { MOV dword ptr [RBP + -0x40],0x482f961 }
    /* +0xcf52f0 */ __asm { MOV R9D,dword ptr [RBP + -0x40] }
    /* +0xcf52f4 */ __asm { CMP R9D,0x53e06c3c }
    /* +0xcf52fb */ __asm { NOP }
    /* +0xcf52fc */ __asm { NOP }
    /* +0xcf52fd */ __asm { NOP }
    /* +0xcf52fe */ __asm { NOP }
    /* +0xcf52ff */ __asm { NOP }
    /* +0xcf5300 */ __asm { MOV R9D,0x7907cf42 }
    /* +0xcf5306 */ __asm { XOR R9D,EBX }
    /* +0xcf5309 */ __asm { MOV R11D,0x9267635c }
    /* +0xcf530f */ __asm { SUB R11D,R9D }
    /* +0xcf5312 */ __asm { XOR R11D,dword ptr [RBP + 0xb8] }
    /* +0xcf5319 */ __asm { PUSHFQ }
    /* +0xcf531a */ __asm { POP RDI }
    /* +0xcf531b */ __asm { MOV ESI,EDI }
    /* +0xcf531d */ __asm { AND ESI,0x100 }
    /* +0xcf5323 */ __asm { CMP RSI,R11 }
    /* +0xcf5326 */ __asm { NOP }
    /* +0xcf5327 */ __asm { NOP }
    /* +0xcf5328 */ __asm { NOP }
    /* +0xcf5329 */ __asm { NOP }
    /* +0xcf532a */ __asm { NOP }
    /* +0xcf532b */ __asm { MOV R15,R10 }
    /* +0xcf532e */ __asm { TEST R10,R10 }
    /* +0xcf5331 */ __asm { MOV qword ptr [RBP + 0xd8],RBX }
    /* +0xcf5338 */ __asm { JZ 0x7fffa54706f3 }
    /* +0xcf533e */ __asm { MOV qword ptr [RBP + 0xa8],R15 }
    /* +0xcf5345 */ __asm { MOV dword ptr [RBP + -0x40],0x2c01015f }
    /* +0xcf534c */ __asm { MOV R9D,dword ptr [RBP + -0x40] }
    /* +0xcf5350 */ __asm { LEA R12,[0x7fffa47c0431] }
    /* +0xcf5357 */ __asm { MOV R13D,0x58e1fe12 }
    /* +0xcf535d */ __asm { MOV R8,R12 }
    /* +0xcf5360 */ __asm { ADD R8,-0x6cbc4147 }
    /* +0xcf5367 */ __asm { RDTSC }
    /* +0xcf5369 */ __asm { SHL RDX,0x20 }
    /* +0xcf536d */ __asm { OR RDX,RAX }
    /* +0xcf5370 */ __asm { MOV RAX,-0x5b596a0ee0e87373 }
    /* +0xcf537a */ __asm { IMUL RDX,RAX }
    /* +0xcf537e */ __asm { MOV R11,-0x208d48ea5477b896 }
    /* +0xcf5388 */ __asm { ADD R11,RDX }
    /* +0xcf538b */ __asm { MOV R9,R11 }
    /* +0xcf538e */ __asm { SHR R9,0x2d }
    /* +0xcf5392 */ __asm { MOV RCX,R11 }
    /* +0xcf5395 */ __asm { SHR RCX,0x1b }
    /* +0xcf5399 */ __asm { XOR R9D,ECX }
    /* +0xcf539c */ __asm { MOV RCX,R11 }
    /* +0xcf539f */ __asm { SHR RCX,0x3b }
    /* +0xcf53a3 */ __asm { ROR R9D,CL }
    /* +0xcf53a6 */ __asm { IMUL R11,RAX }
    /* +0xcf53aa */ __asm { ADD R11,0x4933b823 }
    /* +0xcf53b1 */ __asm { MOV RDX,R11 }
    /* +0xcf53b4 */ __asm { SHR RDX,0x1b }
    /* +0xcf53b8 */ __asm { MOV RCX,R11 }
    /* +0xcf53bb */ __asm { SHR RCX,0x2d }
    /* +0xcf53bf */ __asm { XOR EDX,ECX }
    /* +0xcf53c1 */ __asm { SHR R11,0x3b }
    /* +0xcf53c5 */ __asm { MOV ECX,R11D }
    /* +0xcf53c8 */ __asm { ROR EDX,CL }
    /* +0xcf53ca */ __asm { MOV qword ptr [RBP + 0xc0],R9 }
    /* +0xcf53d1 */ __asm { MOV RAX,R9 }
    /* +0xcf53d4 */ __asm { SUB R13D,EBX }
    /* +0xcf53d7 */ __asm { ROL R13D,0x10 }
    /* +0xcf53db */ __asm { SHL RAX,0x20 }
    /* +0xcf53df */ __asm { ADD R13D,dword ptr [RBP + 0xb8] }
    /* +0xcf53e6 */ __asm { XOR R13,R8 }
    /* +0xcf53e9 */ __asm { OR RAX,RDX }
    /* +0xcf53ec */ __asm { MOV RCX,0x5339503c173c9391 }
    /* +0xcf53f6 */ __asm { MOV qword ptr [RBP + 0xf0],RAX }
    /* +0xcf53fd */ __asm { MOV qword ptr [RBP + -0x48],RAX }
    /* +0xcf5401 */ __asm { MOV qword ptr [RBP + 0x70],R13 }
    /* +0xcf5405 */ __asm { CMP R13,RCX }
    /* +0xcf5408 */ __asm { NOP }
    /* +0xcf5409 */ __asm { NOP }
    /* +0xcf540a */ __asm { NOP }
    /* +0xcf540b */ __asm { MOV R9D,0x9dda0ce2 }
    /* +0xcf5411 */ __asm { IMUL EAX,R9D,-0x7e207a59 }
    /* +0xcf5418 */ __asm { MOV R9W,0x777d }
    /* +0xcf541d */ __asm { XOR R9D,0xffffabae }
    /* +0xcf5424 */ __asm { MOV RDX,qword ptr [RBP + 0xb8] }
    /* +0xcf542b */ __asm { ADD R9D,EDX }
    /* +0xcf542e */ __asm { MOV ECX,EBX }
    /* +0xcf5430 */ __asm { ROR R9W,CL }
    /* +0xcf5434 */ __asm { MOV R11D,EBX }
    /* +0xcf5437 */ __asm { OR R11D,0x1 }
    /* +0xcf543b */ __asm { ADD EAX,EDX }
    /* +0xcf543d */ __asm { MOV qword ptr [RBP + 0xc8],R11 }
    /* +0xcf5444 */ __asm { IMUL EAX,R11D }
    /* +0xcf5448 */ __asm { CDQE }
    /* +0xcf544a */ __asm { MOV qword ptr [RBP + 0xe0],RAX }
    /* +0xcf5451 */ __asm { MOV R11D,dword ptr [RAX + R12*0x1 + 0x10] }
    /* +0xcf5456 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xcf5460 */ __asm { IMUL RAX,R11 }
    /* +0xcf5464 */ __asm { MOV RCX,-0xbf873a79f8898c6 }
    /* +0xcf546e */ __asm { ADD RCX,RAX }
    /* +0xcf5471 */ __asm { MOV R11,RCX }
    /* +0xcf5474 */ __asm { SHR R11,0x2d }
    /* +0xcf5478 */ __asm { MOV RDX,RCX }
    /* +0xcf547b */ __asm { SHR RDX,0x1b }
    /* +0xcf547f */ __asm { XOR R11D,EDX }
    /* +0xcf5482 */ __asm { SHR RCX,0x3b }
    /* +0xcf5486 */ __asm { ROR R11D,CL }
    /* +0xcf5489 */ __asm { MOVZX R9D,R9W }
    /* +0xcf548d */ __asm { AND R11D,0x7 }
    /* +0xcf5491 */ __asm { CMP R11D,R9D }
    /* +0xcf5494 */ __asm { MOV qword ptr [RBP + 0x78],R12 }
    /* +0xcf5498 */ __asm { JNC 0x7fffa5465c7d }
    /* +0xcf549e */ __asm { CMP R11D,0x2 }
    /* +0xcf54a2 */ __asm { JC 0x7fffa54665ed }
    /* +0xcf54a8 */ __asm { JZ 0x7fffa5467d6a }
    /* +0xcf54ae */ __asm { LEA R8,[0x7fffa477bdbe] }
    /* +0xcf54b5 */ __asm { MOV R11,R8 }
    /* +0xcf54b8 */ __asm { ROL R11,0xc }
    /* +0xcf54bc */ __asm { MOV RCX,0x5417031da8efc4e7 }
    /* +0xcf54c6 */ __asm { LEA RAX,[RBP + -0x48] }
    /* +0xcf54ca */ __asm { ROL RAX,0x2d }
    /* +0xcf54ce */ __asm { IMUL RCX,R11 }
    /* +0xcf54d2 */ __asm { MOV R11,RAX }
    /* +0xcf54d5 */ __asm { SHR R11,0xb }
    /* +0xcf54d9 */ __asm { XOR R11,RAX }
    /* +0xcf54dc */ __asm { MOV RAX,R11 }
    /* +0xcf54df */ __asm { SHR RAX,0x16 }
    /* +0xcf54e3 */ __asm { MOV RDX,R11 }
    /* +0xcf54e6 */ __asm { SHR RDX,0x2c }
    /* +0xcf54ea */ __asm { XOR RDX,RAX }
    /* +0xcf54ed */ __asm { XOR RDX,R11 }
    /* +0xcf54f0 */ __asm { BSWAP RDX }
    /* +0xcf54f3 */ __asm { MOV RAX,RDX }
    /* +0xcf54f6 */ __asm { SHR RAX,0x4 }
    /* +0xcf54fa */ __asm { MOV R11,0xf0f0f0f0f0f0f0f }
    /* +0xcf5504 */ __asm { AND RAX,R11 }
    /* +0xcf5507 */ __asm { AND RDX,R11 }
    /* +0xcf550a */ __asm { SHL RDX,0x4 }
    /* +0xcf550e */ __asm { OR RDX,RAX }
    /* +0xcf5511 */ __asm { MOV R11,0x3333333333333333 }
    /* +0xcf551b */ __asm { MOV R9,RDX }
    /* +0xcf551e */ __asm { AND R9,R11 }
    /* +0xcf5521 */ __asm { SHR RDX,0x2 }
    /* +0xcf5525 */ __asm { AND RDX,R11 }
    /* +0xcf5528 */ __asm { LEA R10,[RDX + R9*0x4] }
    /* +0xcf552c */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xcf5536 */ __asm { MOV R9,R10 }
    /* +0xcf5539 */ __asm { AND R9,RDX }
    /* +0xcf553c */ __asm { SHR R10,0x1 }
    /* +0xcf553f */ __asm { AND R10,RDX }
    /* +0xcf5542 */ __asm { LEA R9,[R10 + R9*0x2] }
    /* +0xcf5546 */ __asm { ROL R9,0x1f }
    /* +0xcf554a */ __asm { MOV R10,-0x56c0082806b8d4c1 }
    /* +0xcf5554 */ __asm { CMP RCX,R10 }
    /* +0xcf5557 */ __asm { JZ 0x7fffa547154f }
    /* +0xcf555d */ __asm { LEA R12,[0x7fffa56faf50] }
    /* +0xcf5564 */ __asm { MOVD XMM5,dword ptr [RBP + 0xc8] }
    /* +0xcf556c */ __asm { LEA RDI,[0x7fffa56f8a86] }
    /* +0xcf5573 */ __asm { MOV ECX,0x2202b605 }
    /* +0xcf5578 */ __asm { MOV R10D,0x7a469823 }
    /* +0xcf557e */ __asm { SUB R10D,ECX }
    /* +0xcf5581 */ __asm { MOV ESI,0x3ab838ed }
    /* +0xcf5586 */ __asm { MOV R14,qword ptr [RBP + 0xb8] }
    /* +0xcf558d */ __asm { XOR ESI,R14D }
    /* +0xcf5590 */ __asm { MOV ECX,R14D }
    /* +0xcf5593 */ __asm { ROL R10D,CL }
    /* +0xcf5596 */ __asm { XOR R10D,EBX }
    /* +0xcf5599 */ __asm { MOV RCX,0x0 }
    /* +0xcf55a0 */ __asm { LEA R15,[0x7fffa4770000] }
    /* +0xcf55a7 */ __asm { NOP }
    /* +0xcf55a8 */ __asm { MOV ECX,0xb3112570 }
    /* +0xcf55ad */ __asm { MOVD XMM4,ECX }
    /* +0xcf55b1 */ __asm { MOV ECX,0x9f1dd8b5 }
    /* +0xcf55b6 */ __asm { MOVD XMM1,ECX }
    /* +0xcf55ba */ __asm { MOV ECX,R14D }
    /* +0xcf55bd */ __asm { OR ECX,0x1 }
    /* +0xcf55c0 */ __asm { ADD ESI,EBX }
    /* +0xcf55c2 */ __asm { MOVD XMM2,ECX }
    /* +0xcf55c6 */ __asm { PMULUDQ XMM2,XMM4 }
    /* +0xcf55ca */ __asm { MOVD R13D,XMM2 }
    /* +0xcf55cf */ __asm { ROL R13D,0x6 }
    /* +0xcf55d3 */ __asm { MOV ECX,EBX }
    /* +0xcf55d5 */ __asm { ROR R13D,CL }
    /* +0xcf55d8 */ __asm { XOR ESI,0xcae4ac05 }
    /* +0xcf55de */ __asm { MOV RAX,RBX }
    /* +0xcf55e1 */ __asm { MOVSXD RBX,ESI }
    /* +0xcf55e4 */ __asm { PMULUDQ XMM1,XMM5 }
    /* +0xcf55e8 */ __asm { XOR R9,qword ptr [R8 + 0x5402] }
    /* +0xcf55ef */ __asm { MOVD R8D,XMM1 }
    /* +0xcf55f4 */ __asm { MOV ECX,R14D }
    /* +0xcf55f7 */ __asm { ROL R8D,CL }
    /* +0xcf55fa */ __asm { ROL R9,0x13 }
    /* +0xcf55fe */ __asm { BSWAP R9 }
    /* +0xcf5601 */ __asm { ADD RBX,R12 }
    /* +0xcf5604 */ __asm { MOV RCX,R9 }
    /* +0xcf5607 */ __asm { SHR RCX,0x4 }
    /* +0xcf560b */ __asm { MOV R12,0xf0f0f0f0f0f0f0f }
    /* +0xcf5615 */ __asm { AND RCX,R12 }
    /* +0xcf5618 */ __asm { AND R9,R12 }
    /* +0xcf561b */ __asm { SHL R9,0x4 }
    /* +0xcf561f */ __asm { OR R9,RCX }
    /* +0xcf5622 */ __asm { MOV RCX,R9 }
    /* +0xcf5625 */ __asm { AND RCX,R11 }
    /* +0xcf5628 */ __asm { SHR R9,0x2 }
    /* +0xcf562c */ __asm { AND R9,R11 }
    /* +0xcf562f */ __asm { LEA RCX,[R9 + RCX*0x4] }
    /* +0xcf5633 */ __asm { MOV R9,RCX }
    /* +0xcf5636 */ __asm { AND R9,RDX }
    /* +0xcf5639 */ __asm { SHR RCX,0x1 }
    /* +0xcf563c */ __asm { AND RCX,RDX }
    /* +0xcf563f */ __asm { LEA RCX,[RCX + R9*0x2] }
    /* +0xcf5643 */ __asm { ADD R8D,0x8c529aa1 }
    /* +0xcf564a */ __asm { ROL R8D,0x12 }
    /* +0xcf564e */ __asm { SUB RCX,RBX }
    /* +0xcf5651 */ __asm { MOVSXD R8,R8D }
    /* +0xcf5654 */ __asm { ROL RCX,0x25 }
    /* +0xcf5658 */ __asm { ADD R8,RDI }
    /* +0xcf565b */ __asm { MOV R9,0x7a369a947214d87d }
    /* +0xcf5665 */ __asm { XOR R9,R8 }
    /* +0xcf5668 */ __asm { XOR R9,RCX }
    /* +0xcf566b */ __asm { MOV RCX,R9 }
    /* +0xcf566e */ __asm { ROL RCX,0x7 }
    /* +0xcf5672 */ __asm { MOV R8,R9 }
    /* +0xcf5675 */ __asm { ROL R8,0xd }
    /* +0xcf5679 */ __asm { XOR R8,RCX }
    /* +0xcf567c */ __asm { XOR R8,R9 }
    /* +0xcf567f */ __asm { MOV RCX,R8 }
    /* +0xcf5682 */ __asm { ROL RCX,0x1a }
    /* +0xcf5686 */ __asm { MOV R9,R8 }
    /* +0xcf5689 */ __asm { ROL R9,0xe }
    /* +0xcf568d */ __asm { XOR R9,RCX }
    /* +0xcf5690 */ __asm { MOV RCX,R9 }
    /* +0xcf5693 */ __asm { OR RCX,R8 }
    /* +0xcf5696 */ __asm { XOR R9,R8 }
    /* +0xcf5699 */ __asm { LEA R15,[0x7fffa477c425] }
    /* +0xcf56a0 */ __asm { CMP R13,R10 }
    /* +0xcf56a3 */ __asm { CMOVA R9,RCX }
    /* +0xcf56a7 */ __asm { MOV RCX,R9 }
    /* +0xcf56aa */ __asm { ROL RCX,0x1c }
    /* +0xcf56ae */ __asm { MOV R10,R9 }
    /* +0xcf56b1 */ __asm { ROL R10,0x34 }
    /* +0xcf56b5 */ __asm { XOR R10,RCX }
    /* +0xcf56b8 */ __asm { XOR R10,R9 }
    /* +0xcf56bb */ __asm { MOV RCX,R10 }
    /* +0xcf56be */ __asm { ROL RCX,0x28 }
    /* +0xcf56c2 */ __asm { MOV R8,R10 }
    /* +0xcf56c5 */ __asm { ROL R8,0x38 }
    /* +0xcf56c9 */ __asm { XOR R8,RCX }
    /* +0xcf56cc */ __asm { XOR R8,R10 }
    /* +0xcf56cf */ __asm { MOV RCX,R8 }
    /* +0xcf56d2 */ __asm { ROL RCX,0x30 }
    /* +0xcf56d6 */ __asm { MOV R10,R8 }
    /* +0xcf56d9 */ __asm { ROL R10,0x10 }
    /* +0xcf56dd */ __asm { XOR R10,RCX }
    /* +0xcf56e0 */ __asm { XOR R10,R8 }
    /* +0xcf56e3 */ __asm { ROL R10,0x31 }
    /* +0xcf56e7 */ __asm { MOV RCX,R10 }
    /* +0xcf56ea */ __asm { SHR RCX,0x2e }
    /* +0xcf56ee */ __asm { MOV R8,R10 }
    /* +0xcf56f1 */ __asm { SHR R8,0x17 }
    /* +0xcf56f5 */ __asm { XOR R8,RCX }
    /* +0xcf56f8 */ __asm { XOR R8,R10 }
    /* +0xcf56fb */ __asm { MOV RCX,0x400000800001 }
    /* +0xcf5705 */ __asm { IMUL RCX,R8 }
    /* +0xcf5709 */ __asm { BSWAP RCX }
    /* +0xcf570c */ __asm { MOV RDI,0x628414de167df72a }
    /* +0xcf5716 */ __asm { ADD RDI,RCX }
    /* +0xcf5719 */ __asm { MOV RCX,0xba5225b7c017569 }
    /* +0xcf5723 */ __asm { CMP R15,RCX }
    /* +0xcf5726 */ __asm { MOV RBX,RDX }
    /* +0xcf5729 */ __asm { MOV RDX,R12 }
    /* +0xcf572c */ __asm { JZ 0x7fffa547155f }
    /* +0xcf5732 */ __asm { MOV R9D,0x3b592d07 }
    /* +0xcf5738 */ __asm { LEA R10,[0x7fffa586b8ac] }
    /* +0xcf573f */ __asm { MOV RCX,0x353d9197758fee4e }
    /* +0xcf5749 */ __asm { IMUL R12,RCX,0x5e83c61 }
    /* +0xcf5750 */ __asm { MOV ECX,EAX }
    /* +0xcf5752 */ __asm { ROL R12,CL }
    /* +0xcf5755 */ __asm { MOV RCX,qword ptr [RBP + 0xb8] }
    /* +0xcf575c */ __asm { ROR R12,CL }
    /* +0xcf575f */ __asm { LEA R8,[0x7fffa4785591] }
    /* +0xcf5766 */ __asm { XOR RDI,qword ptr [R15 + 0x4ddb] }
    /* +0xcf576d */ __asm { MOV R15,0x1456a1013d19112f }
    /* +0xcf5777 */ __asm { IMUL R15,RDI }
    /* +0xcf577b */ __asm { BSWAP R15 }
    /* +0xcf577e */ __asm { MOV RDI,R15 }
    /* +0xcf5781 */ __asm { SHR RDI,0x4 }
    /* +0xcf5785 */ __asm { AND RDI,RDX }
    /* +0xcf5788 */ __asm { AND R15,RDX }
    /* +0xcf578b */ __asm { SHL R15,0x4 }
    /* +0xcf578f */ __asm { OR R15,RDI }
    /* +0xcf5792 */ __asm { MOV R13,R15 }
    /* +0xcf5795 */ __asm { AND R13,R11 }
    /* +0xcf5798 */ __asm { SHR R15,0x2 }
    /* +0xcf579c */ __asm { AND R15,R11 }
    /* +0xcf579f */ __asm { LEA RDI,[R15 + R13*0x4] }
    /* +0xcf57a3 */ __asm { MOV R13,RDI }
    /* +0xcf57a6 */ __asm { AND R13,RBX }
    /* +0xcf57a9 */ __asm { SHR RDI,0x1 }
    /* +0xcf57ac */ __asm { AND RDI,RBX }
    /* +0xcf57af */ __asm { LEA RDI,[RDI + R13*0x2] }
    /* +0xcf57b3 */ __asm { MOV R15,-0xb3f3530d }
    /* +0xcf57bd */ __asm { ADD R15,R12 }
    /* +0xcf57c0 */ __asm { MOV R12,0xfc6742bced90a6 }
    /* +0xcf57ca */ __asm { ADD R12,RDI }
    /* +0xcf57cd */ __asm { MOV RDI,R12 }
    /* +0xcf57d0 */ __asm { SHR RDI,0x4 }
    /* +0xcf57d4 */ __asm { AND RDI,RDX }
    /* +0xcf57d7 */ __asm { AND R12,RDX }
    /* +0xcf57da */ __asm { SHL R12,0x4 }
    /* +0xcf57de */ __asm { OR R12,RDI }
    /* +0xcf57e1 */ __asm { MOV R13,R12 }
    /* +0xcf57e4 */ __asm { AND R13,R11 }
    /* +0xcf57e7 */ __asm { SHR R12,0x2 }
    /* +0xcf57eb */ __asm { AND R12,R11 }
    /* +0xcf57ee */ __asm { LEA RDI,[R12 + R13*0x4] }
    /* +0xcf57f2 */ __asm { MOV R13,RDI }
    /* +0xcf57f5 */ __asm { AND R13,RBX }
    /* +0xcf57f8 */ __asm { SHR RDI,0x1 }
    /* +0xcf57fb */ __asm { AND RDI,RBX }
    /* +0xcf57fe */ __asm { LEA RDI,[RDI + R13*0x2] }
    /* +0xcf5802 */ __asm { IMUL RDI,R15 }
    /* +0xcf5806 */ __asm { MOV R11,-0x7cac047b81ce4fa6 }
    /* +0xcf5810 */ __asm { ADD R11,RDI }
    /* +0xcf5813 */ __asm { MOV RDI,R11 }
    /* +0xcf5816 */ __asm { ROL RDI,0x17 }
    /* +0xcf581a */ __asm { MOV R12,R11 }
    /* +0xcf581d */ __asm { ROL R12,0x13 }
    /* +0xcf5821 */ __asm { XOR R12,RDI }
    /* +0xcf5824 */ __asm { XOR R12,R11 }
    /* +0xcf5827 */ __asm { MOV R11,R12 }
    /* +0xcf582a */ __asm { ROL R11,0x26 }
    /* +0xcf582e */ __asm { MOV RDI,R12 }
    /* +0xcf5831 */ __asm { ROL RDI,0x2e }
    /* +0xcf5835 */ __asm { XOR RDI,R11 }
    /* +0xcf5838 */ __asm { XOR RDI,R12 }
    /* +0xcf583b */ __asm { MOV R11,RDI }
    /* +0xcf583e */ __asm { ROL R11,0xc }
    /* +0xcf5842 */ __asm { IMUL R9D,R9D,0x6edeee29 }
    /* +0xcf5849 */ __asm { MOV R12,RDI }
    /* +0xcf584c */ __asm { ROL R12,0x1c }
    /* +0xcf5850 */ __asm { XOR R12,R11 }
    /* +0xcf5853 */ __asm { XOR R12,RDI }
    /* +0xcf5856 */ __asm { MOVQ XMM5,R12 }
    /* +0xcf585b */ __asm { MOV R11,R12 }
    /* +0xcf585e */ __asm { ROL R11,0x38 }
    /* +0xcf5862 */ __asm { ROL R12,0x18 }
    /* +0xcf5866 */ __asm { NOT R9D }
    /* +0xcf5869 */ __asm { XOR R12,R11 }
    /* +0xcf586c */ __asm { ADD R9D,ECX }
    /* +0xcf586f */ __asm { ADD R9D,0x617454df }
    /* +0xcf5876 */ __asm { MOVSXD RCX,R9D }
    /* +0xcf5879 */ __asm { ADD RCX,R10 }
    /* +0xcf587c */ __asm { MOVQ XMM1,R12 }
    /* +0xcf5881 */ __asm { PXOR XMM1,XMM5 }
    /* +0xcf5885 */ __asm { MOVQ R10,XMM1 }
    /* +0xcf588a */ __asm { MOV R9,R10 }
    /* +0xcf588d */ __asm { SHR R9,0x13 }
    /* +0xcf5891 */ __asm { XOR R9,R10 }
    /* +0xcf5894 */ __asm { MOV R13,R9 }
    /* +0xcf5897 */ __asm { SHR R13,0x26 }
    /* +0xcf589b */ __asm { XOR R13,R9 }
    /* +0xcf589e */ __asm { ROL R13,0x35 }
    /* +0xcf58a2 */ __asm { NOT R13 }
    /* +0xcf58a5 */ __asm { ADD R13,RCX }
    /* +0xcf58a8 */ __asm { MOV RCX,-0x42145e4935728c6b }
    /* +0xcf58b2 */ __asm { CMP R8,RCX }
    /* +0xcf58b5 */ __asm { JZ 0x7fffa547156a }
    /* +0xcf58bb */ __asm { MOV R11,RDX }
    /* +0xcf58be */ __asm { MOV RCX,0x227848ab7d03212a }
    /* +0xcf58c8 */ __asm { MOV R10,-0xcd89aad0 }
    /* +0xcf58d2 */ __asm { ADD R10,RCX }
    /* +0xcf58d5 */ __asm { XOR R10,qword ptr [RBP + 0xb8] }
    /* +0xcf58dc */ __asm { MOV ECX,EAX }
    /* +0xcf58de */ __asm { ROL R10,CL }
    /* +0xcf58e1 */ __asm { SUB R13,qword ptr [R8 + -0x48d1] }
    /* +0xcf58e8 */ __asm { LEA R12,[0x7fffa47839fa] }
    /* +0xcf58ef */ __asm { CMP R12,R10 }
    /* +0xcf58f2 */ __asm { JZ 0x7fffa5471574 }
    /* +0xcf58f8 */ __asm { MOV R8W,0xec03 }
    /* +0xcf58fd */ __asm { MOV R14,qword ptr [RBP + 0xb8] }
    /* +0xcf5904 */ __asm { MOV RCX,R14 }
    /* +0xcf5907 */ __asm { OR RCX,0x1 }
    /* +0xcf590b */ __asm { MOV R10,0x6dde1918d8acad23 }
    /* +0xcf5915 */ __asm { IMUL R10,RCX }
    /* +0xcf5919 */ __asm { MOV SI,0x7937 }
    /* +0xcf591d */ __asm { LEA RDI,[0x7fffa585777b] }
    /* +0xcf5924 */ __asm { ADD R10,-0x5931021 }
    /* +0xcf592b */ __asm { MOV ECX,EAX }
    /* +0xcf592d */ __asm { ROL R10,CL }
    /* +0xcf5930 */ __asm { MOV R9D,0x9d04186a }
    /* +0xcf5936 */ __asm { MOV RDX,RAX }
    /* +0xcf5939 */ __asm { MOV EBX,0x35a439fe }
    /* +0xcf593e */ __asm { SUB EBX,R14D }
    /* +0xcf5941 */ __asm { XOR EBX,EDX }
    /* +0xcf5943 */ __asm { XOR R9D,0x8aa44c45 }
    /* +0xcf594a */ __asm { IMUL R9D,dword ptr [RBP + 0xc8] }
    /* +0xcf5952 */ __asm { MOV ECX,R14D }
    /* +0xcf5955 */ __asm { ROL R9D,CL }
    /* +0xcf5958 */ __asm { LEA RCX,[0x7fffa5865cbd] }
    /* +0xcf595f */ __asm { ADD EBX,0xe5bedba7 }
    /* +0xcf5965 */ __asm { MOVSXD RBX,EBX }
    /* +0xcf5968 */ __asm { ADD RBX,RCX }
    /* +0xcf596b */ __asm { MOV ECX,R14D }
    /* +0xcf596e */ __asm { SUB ECX,EDX }
    /* +0xcf5970 */ __asm { ADD ECX,ESI }
    /* +0xcf5972 */ __asm { MOVSX R15,CX }
    /* +0xcf5976 */ __asm { XOR R15,-0x258f }
    /* +0xcf597d */ __asm { MOV ECX,0x7d5c4e69 }
    /* +0xcf5982 */ __asm { XOR R13,qword ptr [R15 + R12*0x1] }
    /* +0xcf5986 */ __asm { LEA R12,[R13*0x8] }
    /* +0xcf598e */ __asm { XOR R12,R13 }
    /* +0xcf5991 */ __asm { MOV R13,R12 }
    /* +0xcf5994 */ __asm { SHL R13,0x6 }
    /* +0xcf5998 */ __asm { XOR R13,R12 }
    /* +0xcf599b */ __asm { MOV R12,R13 }
    /* +0xcf599e */ __asm { SHL R12,0xc }
    /* +0xcf59a2 */ __asm { XOR R12,R13 }
    /* +0xcf59a5 */ __asm { MOV R13,R12 }
}


// ============================================================================
// Function : FUN_7fffa5471830  |  RVA: 0xd01830  |  Size: 13952 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa54718c5) */
/* WARNING: Removing unreachable block (ram,0x7fffa54719e6) */
/* WARNING: Removing unreachable block (ram,0x7fffa54719ee) */
/* WARNING: Removing unreachable block (ram,0x7fffa54719f1) */
/* WARNING: Removing unreachable block (ram,0x7fffa54719f9) */
/* WARNING: Removing unreachable block (ram,0x7fffa54719fc) */
/* WARNING: Removing unreachable block (ram,0x7fffa5471a26) */
/* WARNING: Removing unreachable block (ram,0x7fffa5471a29) */
/* WARNING: Removing unreachable block (ram,0x7fffa5471a2d) */
/* WARNING: Removing unreachable block (ram,0x7fffa5473dab) */
/* WARNING: Removing unreachable block (ram,0x7fffa54744b4) */

int64_t FUN_7fffa5471830(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  bool bVar7;
  uint8_t bVar8;
  bool bVar9;
  char cVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int *piVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint8_t *pbVar18;
  uint16_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint64_t *puVar26;
  uint64_t *puVar27;
  int64_t lVar28;
  uint64_t uVar29;
  uint64_t *puVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  uint64_t *puVar33;
  uint64_t *puVar34;
  uint64_t *puVar35;
  uint32_t uVar36;
  uint64_t *puVar37;
  uint64_t *puVar38;
  uint8_t *pbVar39;
  uint64_t *puVar40;
  code *pcVar41;
  uint64_t uVar42;
  uint32_t uVar43;
  uint64_t *puVar44;
  uint8_t *pbVar45;
  uint64_t uVar46;
  uint64_t *puVar47;
  uint64_t unaff_R14;
  uint32_t uVar48;
  uint32_t uStack_1fc;
  uint64_t *puStack_1f0;
  uint32_t uStack_1a4;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t *puStack_150;
  int64_t lStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t *puStack_128;
  uint64_t uStack_120;
  int64_t lStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint8_t *pbStack_100;
  uint8_t *pbStack_f8;
  uint64_t *puStack_f0;
  uint64_t *puStack_e8;
  uint32_t uStack_dc;
  uint32_t uStack_d8;
  uint32_t uStack_d4;
  int64_t lStack_d0;
  uint64_t uStack_c8;
  int64_t lStack_c0;
  
  puStack_150 = (uint64_t *)((int64_t)param_4 + param_5);
  uVar36 = *(uint32_t *)(param_1 + 0x2c);
  lStack_c0 = *(int64_t *)(param_1 + 8);
  puVar1 = (uint64_t *)(lStack_c0 + (uint64_t)uVar36);
  puVar32 = (uint64_t *)((int64_t)param_4 + param_5 + -0x10);
  uVar21 = *(uint32_t *)(param_1 + 0x18);
  uStack_158 = (uint64_t)uVar21;
  uStack_1a4 = *param_3;
  uVar43 = 6;
  if (*(uint32_t *)(param_1 + 0x110) < 6) {
    uVar43 = *(uint32_t *)(param_1 + 0x110);
  }
  uStack_d4 = 4;
  if (4 < uVar43) {
    uStack_d4 = uVar43;
  }
  uVar20 = ((int)puVar32 - (int)puVar1) + 1;
  uVar43 = 8;
  if (uVar20 < 8) {
    uVar43 = uVar20;
  }
  uVar20 = 0;
  if (puVar1 <= puVar32) {
    uVar20 = uVar43;
  }
  puVar1 = (uint64_t *)(lStack_c0 + uStack_158);
  uStack_1fc = param_3[1];
  uVar43 = *(uint32_t *)(param_1 + 0x10c);
  uVar22 = 6;
  if (uVar43 < 6) {
    uVar22 = uVar43;
  }
  puVar5 = *(uint64_t **)(param_1 + 0xf8);
  puVar6 = (uint64_t *)*puVar5;
  lStack_d0 = puVar5[1];
  puStack_128 = (uint64_t *)((uint64_t)*(uint32_t *)(puVar5 + 3) + lStack_d0);
  uStack_d8 = 4;
  if (4 < uVar22) {
    uStack_d8 = uVar22;
  }
  uVar16 = (uint64_t)((int)puVar6 + (int)param_4 == (int)puStack_128 + (int)puVar1);
  puVar25 = (uint64_t *)(uVar16 + (int64_t)param_4);
  *(uint32_t *)(param_1 + 300) = 0;
  uStack_110 = 0xe31fb34f;
  puVar30 = puVar6;
  if (uVar36 < uVar20 + uVar36) {
    cVar10 = (char)*(uint32_t *)(param_1 + 0x34);
    uVar17 = *(uint64_t *)(param_1 + 0x60);
    unaff_R14 = 0xcf1bbcdcbf9b0000;
    uVar42 = (uint64_t)uVar36;
    do {
      if ((int)uStack_d4 < 6) {
        if (uStack_d4 == 5) {
          uVar46 = *(int64_t *)(lStack_c0 + uVar42) * -0x30e4432345000000;
          goto LAB_7fffa5474edb;
        }
LAB_7fffa5474ef0:
        puVar30 = (uint64_t *)
                  (uint64_t)
                  ((*(int *)(lStack_c0 + uVar42) * -0x61c8864f ^ (uint32_t)uVar17) >>
                  (0x18U - cVar10 & 0x1f));
      }
      else {
        if (uStack_d4 != 6) goto LAB_7fffa5474ef0;
        uVar46 = *(int64_t *)(lStack_c0 + uVar42) * -0x30e4432340650000;
LAB_7fffa5474edb:
        puVar30 = (uint64_t *)((uVar46 ^ uVar17) >> (0x38U - cVar10 & 0x3f));
      }
      uVar46 = uVar42 + 1;
      *(int *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar42 & 7) * 4) = (int)puVar30;
      uVar42 = uVar46;
    } while (uVar20 + uVar36 != uVar46);
  }
  puStack_1f0 = param_4;
  if (puVar25 < puVar32) {
    uVar21 = ((int)lStack_d0 - (int)puVar6) + uVar21;
    lStack_118 = -uVar16;
    puVar26 = (uint64_t *)((int64_t)param_4 + param_5 + -3);
    uStack_140 = (uint64_t)uVar21;
    puVar27 = (uint64_t *)((int64_t)param_4 + param_5 + -0x20);
    lStack_148 = lStack_d0 - uStack_140;
    puVar33 = (uint64_t *)((int64_t)param_4 + param_5 + -7);
    param_4 = (uint64_t *)((int64_t)param_4 + param_5 + -1);
    uStack_dc = 0xe31fb34f;
    puVar34 = (uint64_t *)(lStack_c0 + uStack_158 + 8);
    uStack_130 = 0xe31fb34f;
    puVar37 = puVar27;
    puStack_e8 = puVar27;
    uStack_c8 = param_1;
    do {
      puStack_f0 = (uint64_t *)((int64_t)puVar25 + 1);
      uStack_138 = (int64_t)puVar25 - lStack_c0;
      uVar36 = (int)uStack_138 - uStack_1a4;
      uStack_108 = (uint64_t)uVar36;
      uVar36 = uVar36 + 1;
      uStack_168 = (uint64_t)uVar36;
      piVar14 = (int *)((uint64_t)(uVar36 - uVar21) + lStack_d0);
      if ((uint32_t)uStack_158 <= uVar36) {
        piVar14 = (int *)(lStack_c0 + uStack_168);
      }
      bVar8 = (uint8_t)uStack_110;
      uVar20 = (uint32_t)uStack_110;
      if ((uVar36 - (uint32_t)uStack_158 < 0xfffffffd) && (*piVar14 == *(int *)puStack_f0)) {
        puVar38 = puStack_150;
        if (uVar36 < (uint32_t)uStack_158) {
          puVar38 = puVar6;
        }
        puVar24 = (uint64_t *)((int64_t)puVar25 + 5);
        puVar35 = (uint64_t *)(piVar14 + 1);
        puVar47 = (uint64_t *)
                  ((int64_t)puVar25 + (int64_t)((int64_t)puVar38 + (5 - (int64_t)puVar35)));
        if (puStack_150 <= puVar47) {
          puVar47 = puStack_150;
        }
        puVar37 = puVar35;
        puVar23 = puVar24;
        if (puVar24 < (uint64_t *)((int64_t)puVar47 - 7U)) {
          if (*puVar35 == *puVar24) {
            lVar15 = 0;
            do {
              puVar37 = (uint64_t *)((int64_t)puVar25 + lVar15 + 0xd);
              if ((uint64_t *)((int64_t)puVar47 - 7U) <= puVar37) {
                puVar23 = (uint64_t *)((int64_t)puVar25 + lVar15 + 0xd);
                puVar37 = (uint64_t *)((int64_t)piVar14 + lVar15 + 0xc);
                goto LAB_7fffa5471e85;
              }
              uVar16 = *puVar37;
              uVar17 = *(uint64_t *)((int64_t)piVar14 + lVar15 + 0xc);
              lVar15 = lVar15 + 8;
            } while (uVar17 == uVar16);
            uVar42 = 0;
            for (uVar16 = uVar16 ^ uVar17; (uVar16 & 1) == 0;
                uVar16 = uVar16 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            puVar37 = (uint64_t *)(uVar42 >> 3 & 0x1fffffff);
            puVar47 = (uint64_t *)(uVar42 + 3);
            if (0x492b2742 < ~(0x8e1a9ebeU >> (bVar8 & 0x1f) | -0x71e56142 << 0x20 - (bVar8 & 0x1f))
               ) {
              puVar47 = puVar37;
            }
            pbVar45 = (uint8_t *)((int64_t)puVar47 + lVar15);
          }
          else {
            uVar36 = 0;
            puVar37 = (uint64_t *)(*puVar24 ^ *puVar35);
            for (puVar47 = puVar37; ((uint64_t)puVar47 & 1) == 0;
                puVar47 = (uint64_t *)((uint64_t)puVar47 >> 1 | 0x8000000000000000)) {
              uVar36 = uVar36 + 1;
            }
            pbVar45 = (uint8_t *)(uint64_t)(uVar36 >> 3);
          }
        }
        else {
LAB_7fffa5471e85:
          if ((puVar23 < (uint64_t *)((int64_t)puVar47 - 3U)) && ((int)*puVar37 == (int)*puVar23))
          {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
          }
          if ((puVar23 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
             ((short)*puVar37 == (short)*puVar23)) {
            puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
            puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
          }
          if (puVar23 < puVar47) {
            uVar16 = *puVar37;
            puVar37 = (uint64_t *)(uint64_t)(uint8_t)uVar16;
            puVar23 = (uint64_t *)((int64_t)puVar23 + (uint64_t)((uint8_t)uVar16 == (uint8_t)*puVar23))
            ;
          }
          pbVar45 = (uint8_t *)((int64_t)puVar23 - (int64_t)puVar24);
        }
        if ((uint64_t *)((int64_t)puVar35 + (int64_t)pbVar45) == puVar38) {
          puVar24 = (uint64_t *)((int64_t)puVar24 + (int64_t)pbVar45);
          puVar38 = puVar24;
          puVar35 = puVar1;
          if (puVar24 < puVar33) {
            if (*puVar1 == *puVar24) {
              puVar38 = (uint64_t *)(pbVar45 + (int64_t)puVar25 + 0xd);
              puVar35 = puVar34;
              puVar47 = puVar38;
              if (puVar38 < puVar33) {
LAB_7fffa5472030:
                puVar37 = (uint64_t *)*puVar38;
                if ((uint64_t *)*puVar35 == puVar37) goto code_r0x7fffa547203b;
                uVar36 = 0;
                for (uVar16 = *puVar35 ^ (uint64_t)puVar37; (uVar16 & 1) == 0;
                    uVar16 = uVar16 >> 1 | 0x8000000000000000) {
                  uVar36 = uVar36 + 1;
                }
                pbVar39 = (uint8_t *)((int64_t)puVar47 +
                                  ((uint64_t)(uVar36 >> 3) - (int64_t)puVar24));
                goto LAB_7fffa5472077;
              }
              goto LAB_7fffa5471f3c;
            }
            uVar36 = 0;
            for (uVar16 = *puVar24 ^ *puVar1; (uVar16 & 1) == 0;
                uVar16 = uVar16 >> 1 | 0x8000000000000000) {
              uVar36 = uVar36 + 1;
            }
            pbVar39 = (uint8_t *)(uint64_t)(uVar36 >> 3);
          }
          else {
LAB_7fffa5471f3c:
            if ((puVar38 < puVar26) && ((int)*puVar35 == (int)*puVar38)) {
              puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
              puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
            }
            if (puVar38 < param_4) {
              sVar2 = (short)*puVar35;
              sVar3 = (short)*puVar38;
              bVar7 = sVar2 != sVar3 && sVar3 <= sVar2;
              puVar37 = (uint64_t *)(uint64_t)bVar7;
              bVar9 = sVar2 == sVar3;
              if (uVar20 != 0xe31fb34f) {
                bVar9 = bVar7;
              }
              if (bVar9) {
                puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
                puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
              }
            }
            if (puVar38 < puStack_150) {
              puVar38 = (uint64_t *)
                        ((int64_t)puVar38 + (uint64_t)((uint8_t)*puVar35 == (uint8_t)*puVar38));
            }
            pbVar39 = (uint8_t *)((uint64_t)puVar24 | (uint64_t)puVar38);
            if (uVar20 == 0xe31fb34f) {
              pbVar39 = (uint8_t *)((int64_t)puVar38 - (int64_t)puVar24);
            }
          }
LAB_7fffa5472077:
          pbVar45 = pbVar45 + (int64_t)pbVar39;
        }
        pbVar45 = pbVar45 + 4;
      }
      else {
        pbVar45 = (uint8_t *)0x0;
      }
      uStack_170 = 999999999;
      puVar38 = puStack_150;
      if ((int)uStack_d4 < 5) {
        if (uVar43 < 5) {
          lVar15 = (uint64_t)((uVar20 ^ 0xf1e04f4f) << 7 | (uVar20 ^ 0xf1e04f4f) >> 0x19) *
                   (int64_t)puVar25;
          uVar16 = FUN_7fffa52476c0(puStack_150,param_1,FUN_7fffa52476c0,
                                    lVar15 * 2 | (uint64_t)(lVar15 < 0));
          pbVar39 = (uint8_t *)((0x71f8fb06 - uVar20 ^ uVar16) * 0x3bbe326f51fd5753 +
                            0x7e9c70e18a22d5ed);
        }
        else {
          pbStack_f8 = pbVar45;
          if (uStack_d8 < 6) {
            uVar16 = 0xf615391e;
            pbStack_100 = (uint8_t *)0xffffffff1ce04cb0;
            FUN_7fffa55c9280(puVar25 + -0x7da7614,&uStack_170,0xffffffff1ce04cb0,
                             (int64_t)puStack_150 * -0x1ffff ^ (int64_t)puStack_150 * -0x7fffc0000
                            );
            uVar16 = (uVar16 << 0x1b | uVar16 >> 0x25) ^ (uVar16 << 0x27 | uVar16 >> 0x19) ^ uVar16;
            uVar16 = (uVar16 << 0x36 | uVar16 >> 10) ^ (uVar16 << 0xe | uVar16 >> 0x32) ^ uVar16;
            uVar16 = (uVar16 << 0x1c | uVar16 >> 0x24) ^ (uVar16 << 0x2c | uVar16 >> 0x14) ^ uVar16;
            uVar16 = (uVar16 << 0x18 | uVar16 >> 0x28) ^ (uVar16 << 0x38 | uVar16 >> 8) ^ uVar16;
            uVar42 = uVar16 << 0x20 | uVar16 >> 0x20;
            uVar17 = uVar16 - uVar42;
            if (0xda76bc0c < 0xda72e95a - uVar20) {
              uVar17 = uVar16 ^ uVar42;
            }
            uVar17 = uVar17 ^ uVar42;
            uVar42 = uVar17 << 0xd | uVar17 >> 0x33;
            uVar46 = ~uVar42;
            uVar31 = uVar17 & uVar46;
            lVar15 = (int64_t)
                     (int)~(0x22302407U >> (bVar8 & 0x1f) | 0x22302407 << 0x20 - (bVar8 & 0x1f)) +
                     0x480e4461;
            uVar29 = uVar17 ^ 0xe31fb34f ^ uVar46;
            uVar16 = (~uVar17 | uVar42) ^ 0xe31fb34f;
            if ((uVar16 & 1) == 0) {
              lVar15 = 0;
            }
            uVar36 = ~((uVar20 | 1) * 0x599488c8);
            puVar38 = (uint64_t *)(uint64_t)uVar36;
            uVar16 = (uVar31 & (uint64_t)pbStack_100) * (int64_t)(int)uVar36 +
                     (uint64_t)((uint32_t)uVar42 & ~((uint32_t)uVar17 | 0xe31fb34f) & 1) * 0x345906e0 +
                     ((uVar17 | uVar46) & (uint64_t)pbStack_100) * 0x345906dc +
                     ((uVar31 | 0xe31fb34f) ^ 0xfffffffffffffffe) +
                     (uVar29 | 0x3ffffffffffffffe) * -0x60a20a54 +
                     ((~uVar17 ^ 0xe31fb34f ^ uVar42) & 0xfffffffffffffffe) +
                     ((uint64_t)(0x7ffe0004 < (int)(uVar20 + 0xe6ebcee7)) * 3 - 2 | uVar29) *
                     0x60a20a55 + lVar15 +
                     ((((uVar17 ^ uVar42) & 0xffffffff1ce04cb0 ^ 1) + (uVar31 & 0xe31fb34e)) -
                     (uVar16 | 1)) * 0x345906de + 1 ^ (uVar17 << 0x2a | uVar17 >> 0x16);
            uVar16 = (uVar16 << 0x14 | uVar16 >> 0x2c) ^ (uVar16 << 0x1a | uVar16 >> 0x26) ^ uVar16;
            uVar16 = (uVar16 << 0x34 | uVar16 >> 0xc) ^ (uVar16 << 0x28 | uVar16 >> 0x18) ^ uVar16;
            uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ (uVar16 << 0x28 | uVar16 >> 0x18) ^ uVar16;
            uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) ^ (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar16;
            uVar16 = (uVar16 << 0x16 | uVar16 >> 0x2a) ^ (uVar16 << 0x2d | uVar16 >> 0x13) ^
                     (uVar16 << 0x20 | uVar16 >> 0x20);
            uVar16 = (uVar16 << 0x1a | uVar16 >> 0x26) ^ (uVar16 << 0x2c | uVar16 >> 0x14) ^ uVar16;
            uVar16 = (uVar16 << 0x18 | uVar16 >> 0x28) ^ (uVar16 << 0x34 | uVar16 >> 0xc) ^ uVar16;
            uVar16 = (uVar16 << 0x28 | uVar16 >> 0x18) ^ (uVar16 << 0x30 | uVar16 >> 0x10) ^ uVar16;
            uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) ^ (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar16;
            pbVar39 = (uint8_t *)(uVar16 << 0x20 | uVar16 >> 0x20);
            param_1 = uStack_c8;
            pbVar45 = pbStack_f8;
          }
          else {
            uVar17 = ~uStack_140 & uStack_130;
            puVar38 = (uint64_t *)
                      ((param_1 << 0x1c | param_1 >> 0x24) ^ (param_1 << 0x3b | param_1 >> 5) ^
                      param_1);
            uVar16 = uVar17 ^ 0x5a4b068;
            if (0x29ad0b14 < ~(0x450de2dU >> (bVar8 & 0x1f) | 0x450de2d << 0x20 - (bVar8 & 0x1f))) {
              uVar16 = uVar17 * 0x5a4b068;
            }
            lVar15 = (int64_t)(int)((0x90922236 - uVar20) * 0x200000 | 0x90922236 - uVar20 >> 0xb)
                     * (uStack_140 ^ uStack_130) +
                     (~uStack_130 & uStack_140) * 0x78846757 +
                     (uStack_140 | ~uStack_130) * -0x1d65a14b +
                     (~uStack_140 | uStack_130) * 0x557a15a4 + uVar16;
            FUN_7fffa5285090(puVar38,FUN_7fffa5285090,puVar25,&uStack_170);
            pbVar39 = (uint8_t *)(lVar15 * -0x7fffffffffff);
            pbVar45 = pbStack_f8;
          }
        }
      }
      else if (uStack_d4 == 5) {
        if (uVar43 < 5) {
          uVar16 = (uint64_t)&uStack_170 >> 9 ^ (uint64_t)&uStack_170;
          uVar19 = 0x5b5b - (short)uStack_110;
          pcVar41 = (code *)((int64_t)(short)(uVar19 * 4 | uVar19 >> 0xe) + 0x7fffa4cf7f0e);
          (*pcVar41)(puStack_150,pcVar41,0xd7c12ac9);
          uVar16 = uVar16 * -0x5555555555555555;
          pbVar39 = (uint8_t *)((uVar16 >> 0x19 ^ uVar16 >> 0x32 ^ uVar16) - 0x9d74a442);
        }
        else {
          if (uVar43 != 5) {
            uVar16 = (int64_t)&uStack_170 * 0x55004a4d;
            puVar38 = (uint64_t *)((uint64_t)puVar25 >> 0x26 ^ (uint64_t)puVar25);
            uVar16 = ((int64_t)&uStack_170 * 0xaa00949a000000 | uVar16 >> 0x27) ^
                     ((int64_t)&uStack_170 * 0xaa00949a00 | uVar16 >> 0x37) ^ uVar16;
            uVar17 = uVar16 >> 0x3c;
            FUN_7fffa5474f70(puVar38,puVar37,FUN_7fffa5474f70,uVar16);
            uVar16 = uVar17 ^ 0xd7c12ac9;
            uVar16 = (uVar16 << 1 | (uint64_t)((int64_t)uVar16 < 0)) ^
                     (uVar16 << 3 | uVar17 >> 0x3d) ^ uVar16;
            uVar16 = (uVar16 << 6 | uVar16 >> 0x3a) ^ (uVar16 << 2 | uVar16 >> 0x3e) ^ uVar16;
            uVar16 = (uVar16 << 4 | uVar16 >> 0x3c) ^ (uVar16 << 0xc | uVar16 >> 0x34) ^ uVar16;
            uVar16 = (uVar16 << 8 | uVar16 >> 0x38) ^ (uVar16 << 0x18 | uVar16 >> 0x28) ^ uVar16;
            uVar17 = uVar16 << 0x10 | uVar16 >> 0x30;
            uVar42 = uVar16 << 0x30 | uVar16 >> 0x10;
            goto LAB_7fffa5472b64;
          }
          uVar42 = (param_1 << 3 | param_1 >> 0x3d) ^ param_1;
          uVar17 = param_1 << 4 | param_1 >> 0x3c;
          uVar16 = uVar42 & uVar17;
          if ((0x3c43f69d << (bVar8 & 0x1f) | 0x3c43f69dU >> 0x20 - (bVar8 & 0x1f)) * 0x1fb88f8b <
              0x6a29267b) {
            uVar16 = uVar17 ^ uVar42;
          }
          puVar38 = (uint64_t *)
                    ((uVar16 << 0x10 | uVar16 >> 0x30) ^ (uVar16 << 0x39 | uVar16 >> 7) ^
                    (uVar16 << 0x15 | uVar16 >> 0x2b));
          (*(code *)((int64_t)
                     (int)(0xa490ffffU >> (bVar8 & 0x1f) | -0x5b6f0001 << 0x20 - (bVar8 & 0x1f)) +
                    0x7fffa51815ff))(puVar38,puVar38,puVar25,0x6ccddbb3);
          pbVar39 = (uint8_t *)((int64_t)puVar38 + -0xc000012d);
        }
      }
      else if (uVar43 < 5) {
        pcVar41 = (code *)((int64_t)(int)(uVar20 ^ 0x1ce0e6ff) + 0x7fffa5604400);
        uVar17 = param_1 + 0xbcfe81c ^ 0x6cd57e50;
        uVar16 = uVar17 << 0x39 | uVar17 >> 7;
        (*pcVar41)(puStack_150,uVar16,uVar17,
                   (uVar17 << 0x18 | param_1 + 0xbcfe81c >> 0x28) ^ uVar16 ^ uVar17);
        uVar17 = (int64_t)pcVar41 << 9 | (uint64_t)pcVar41 >> 0x37;
        uVar16 = uVar17 ^ (uint64_t)pcVar41;
        if ((uint64_t)
            (int64_t)
            (int)(((uVar20 + 0x6c88557) * 0x40000000 | uVar20 + 0x6c88557 >> 2) * -0x60bd23e1) <
            0x9f945a75) {
          uVar16 = (int64_t)pcVar41 - uVar17;
        }
        uVar16 = uVar16 ^ ((int64_t)pcVar41 << 7 | (uint64_t)pcVar41 >> 0x39);
        uVar16 = (uVar16 << 0xe | uVar16 >> 0x32) ^ (uVar16 << 0x12 | uVar16 >> 0x2e) ^ uVar16;
        uVar16 = (uVar16 << 0x1c | uVar16 >> 0x24) ^ (uVar16 << 0x24 | uVar16 >> 0x1c) ^ uVar16;
        uVar16 = (uVar16 << 8 | uVar16 >> 0x38) ^ (uVar16 << 0x38 | uVar16 >> 8) ^ uVar16;
        uVar17 = uVar16 << 0x30 | uVar16 >> 0x10;
        uVar42 = uVar16 << 0x10 | uVar16 >> 0x30;
LAB_7fffa5472b64:
        pbVar39 = (uint8_t *)(uVar42 ^ uVar17 ^ uVar16);
      }
      else if (uStack_d8 < 6) {
        uVar16 = param_1 << 0x24 ^ param_1;
        uVar17 = (uint64_t)((uVar20 | 1) * 0x7a758c1 ^ 0x492e2886);
        puVar38 = (uint64_t *)((int64_t)puStack_150 - ((int64_t)puStack_150 << 0x24));
        if ((int64_t)
            ((uStack_110 ^ 0xd980002e31fb34f) << 0xd | (uStack_110 ^ 0xd980002e31fb34f) >> 0x33) <
            (int64_t)uVar17) {
          puVar38 = (uint64_t *)((uint64_t)puStack_150 & (int64_t)puStack_150 << 0x24);
        }
        (*(code *)((int64_t)
                   (int)((-0xd5fd5d9 << (bVar8 & 0x1f) | 0xf2a02a27U >> 0x20 - (bVar8 & 0x1f)) ^
                        0xeaecbdc3) + 0x7fffa549dd2d))
                  (puVar38,&uStack_170,puVar38,
                   ((uVar16 << 9 | uVar16 >> 0x37) ^
                    (uVar16 >> 1 | (uint64_t)((uVar16 & 1) != 0) << 0x3f) ^ uVar16) + 0xa64eff1);
        pbVar39 = (uint8_t *)(uVar17 ^ 0xffffffff92ca22cd);
      }
      else {
        pcVar41 = FUN_7fffa5264470;
        FUN_7fffa5264470(puStack_150,(int64_t)&uStack_170 << 0x2e | (uint64_t)&uStack_170 >> 0x12,
                         param_1);
        pcVar41 = pcVar41 + -0x732e7b68;
        uVar16 = ((int64_t)pcVar41 * 0x40000 | (uint64_t)pcVar41 >> 0x2e) ^
                 ((int64_t)pcVar41 * 0x800000 | (uint64_t)pcVar41 >> 0x29) ^ (uint64_t)pcVar41;
        uVar16 = (uVar16 << 0x2e | uVar16 >> 0x12) ^ (uVar16 << 0x24 | uVar16 >> 0x1c) ^ uVar16;
        uVar16 = (uVar16 << 0x1c | uVar16 >> 0x24) ^ (uVar16 << 8 | uVar16 >> 0x38) ^ uVar16;
        uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ (uVar16 << 0x38 | uVar16 >> 8) ^ uVar16;
        uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) ^ (uVar16 << 0x30 | uVar16 >> 0x10) ^ uVar16;
        pbVar39 = (uint8_t *)(uVar16 << 0x20 | uVar16 >> 0x20);
      }
      pbVar18 = pbVar45;
      if (pbVar45 < pbVar39) {
        pbVar18 = pbVar39;
      }
      puVar37 = (uint64_t *)
                (uint64_t)
                (0x686d - ((int)CONCAT62((int6)((uint64_t)puVar38 >> 0x10),0xb51a) + uVar20));
      if (pbVar18 < (uint8_t *)((uint64_t)puVar37 & 0xffff)) {
        *(uint32_t *)(param_1 + 300) =
             (uint32_t)(0x7ff < (uint64_t)((int64_t)puVar25 - (int64_t)puStack_1f0));
        puVar25 = (uint64_t *)
                  ((int64_t)puVar25 +
                  ((uint64_t)((int64_t)puVar25 - (int64_t)puStack_1f0) >> 8) + 1);
      }
      else {
        if (pbVar45 < pbVar39) {
          puStack_f0 = puVar25;
        }
        else {
          uStack_170 = 1;
        }
        pbStack_f8 = (uint8_t *)((int64_t)puVar25 + 0xd);
        uVar16 = uStack_170;
        do {
          uVar17 = uStack_c8;
          puVar37 = &uStack_170;
          puVar38 = (uint64_t *)((int64_t)puVar25 + 1);
          uVar36 = ((int)puVar38 - (int)lStack_c0) - uStack_1a4;
          piVar14 = (int *)((uint64_t)uVar36 + lStack_c0);
          if (uVar36 < (uint32_t)uStack_158) {
            piVar14 = (int *)((uint64_t)(uVar36 - uVar21) + lStack_d0);
          }
          pbVar45 = pbVar18;
          if ((uVar36 - (uint32_t)uStack_158 < 0xfffffffd) && (*piVar14 == *(int *)puVar38)) {
            puVar24 = puStack_150;
            if (uVar36 < (uint32_t)uStack_158) {
              puVar24 = puVar6;
            }
            puVar35 = (uint64_t *)(piVar14 + 1);
            puVar47 = (uint64_t *)((int64_t)puVar25 + 5);
            puVar23 = (uint64_t *)
                      ((int64_t)puVar25 + (int64_t)((int64_t)puVar24 + (5 - (int64_t)puVar35)));
            if (puStack_150 <= puVar23) {
              puVar23 = puStack_150;
            }
            puVar40 = puVar47;
            puVar44 = puVar35;
            if (puVar47 < (uint64_t *)((int64_t)puVar23 - 7U)) {
              if (*puVar35 == *puVar47) {
                lVar15 = 0;
LAB_7fffa5472e50:
                puVar40 = (uint64_t *)(pbStack_f8 + lVar15);
                param_1 = uStack_c8;
                if (puVar40 < (uint64_t *)((int64_t)puVar23 - 7U)) {
                  uVar42 = *(uint64_t *)((int64_t)piVar14 + lVar15 + 0xc);
                  uVar46 = *(uint64_t *)((int64_t)puVar25 + lVar15 + 0xd);
                  if (uVar42 == uVar46) goto code_r0x7fffa5472e77;
                  uVar36 = 0;
                  for (uVar42 = uVar42 ^ uVar46; (uVar42 & 1) == 0;
                      uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                    uVar36 = uVar36 + 1;
                  }
                  uVar42 = (uint64_t)(uVar36 >> 3) + lVar15 + 8;
                  goto LAB_7fffa5473f41;
                }
                puVar44 = (uint64_t *)((int64_t)piVar14 + lVar15 + 0xc);
                goto LAB_7fffa5473eee;
              }
              uVar36 = 0;
              for (uVar42 = *puVar35 ^ *puVar47; (uVar42 & 1) == 0;
                  uVar42 = uVar42 >> 1 | 0x8000000000000000) {
                uVar36 = uVar36 + 1;
              }
              uVar42 = (uint64_t)(uVar36 >> 3);
            }
            else {
LAB_7fffa5473eee:
              if ((puVar40 < (uint64_t *)((int64_t)puVar23 - 3U)) &&
                 ((int)*puVar44 == (int)*puVar40)) {
                puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
                puVar44 = (uint64_t *)((int64_t)puVar44 + 4);
              }
              if ((puVar40 < (uint64_t *)((int64_t)puVar23 - 1U)) &&
                 ((short)*puVar44 == (short)*puVar40)) {
                puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
                puVar44 = (uint64_t *)((int64_t)puVar44 + 2);
              }
              if (puVar40 < puVar23) {
                puVar40 = (uint64_t *)
                          ((int64_t)puVar40 + (uint64_t)((uint8_t)*puVar44 == (uint8_t)*puVar40));
              }
              uVar42 = (int64_t)puVar40 - (int64_t)puVar47;
            }
LAB_7fffa5473f41:
            if ((uint64_t *)((int64_t)puVar35 + uVar42) == puVar24) {
              puVar47 = (uint64_t *)((int64_t)puVar47 + uVar42);
              puVar24 = puVar47;
              puVar35 = puVar1;
              if (puVar47 < puVar33) {
                if (*puVar1 == *puVar47) {
                  lVar15 = 8;
LAB_7fffa5473fe0:
                  puVar24 = (uint64_t *)((int64_t)puVar25 + lVar15 + uVar42 + 5);
                  if (puVar24 < puVar33) {
                    uVar46 = *puVar24;
                    if (*(uint64_t *)((int64_t)puVar1 + lVar15) == uVar46)
                    goto code_r0x7fffa547400a;
                    uVar36 = 0;
                    for (uVar46 = *(uint64_t *)((int64_t)puVar1 + lVar15) ^ uVar46;
                        (uVar46 & 1) == 0; uVar46 = uVar46 >> 1 | 0x8000000000000000) {
                      uVar36 = uVar36 + 1;
                    }
                    uVar46 = (uint64_t)(uVar36 >> 3) + lVar15;
                    goto LAB_7fffa5474084;
                  }
                  puVar24 = (uint64_t *)((int64_t)puVar25 + lVar15 + uVar42 + 5);
                  puVar35 = (uint64_t *)(lVar15 + (int64_t)puVar1);
                  goto LAB_7fffa5474020;
                }
                uVar36 = 0;
                for (uVar46 = *puVar47 ^ *puVar1; (uVar46 & 1) == 0;
                    uVar46 = uVar46 >> 1 | 0x8000000000000000) {
                  uVar36 = uVar36 + 1;
                }
                uVar46 = (uint64_t)(uVar36 >> 3);
              }
              else {
LAB_7fffa5474020:
                if ((puVar24 < puVar26) && ((int)*puVar35 == (int)*puVar24)) {
                  puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
                  puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
                }
                if ((puVar24 < param_4) && ((short)*puVar35 == (short)*puVar24)) {
                  puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
                  puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
                }
                if (puVar24 < puStack_150) {
                  puVar24 = (uint64_t *)
                            ((int64_t)puVar24 + (uint64_t)((uint8_t)*puVar35 == (uint8_t)*puVar24));
                }
                uVar46 = (int64_t)puVar24 - (int64_t)puVar47;
              }
LAB_7fffa5474084:
              uVar42 = uVar42 + uVar46;
            }
            pbVar39 = (uint8_t *)(uVar42 + 4);
            if ((int64_t)(uint64_t)(0xafcd4257 - (uint32_t)uStack_110 ^ 0x442dadb) < -0x393628c3) {
              pbVar39 = (uint8_t *)(uVar42 | 4);
            }
            if (uVar42 < 0xfffffffffffffffc) {
              uVar36 = 0x1f;
              if ((uint32_t)uVar16 != 0) {
                for (; (uint32_t)uVar16 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                }
              }
              if ((int)((uVar36 ^ 0x1f) + (uint32_t)pbVar18 * 3 + -0x1e) < (int)pbVar39 * 3) {
                uVar16 = 1;
                pbVar45 = pbVar39;
                puStack_f0 = puVar38;
              }
            }
            else {
            }
          }
          uStack_170 = 999999999;
          if ((int)uStack_d4 < 5) {
            if (uVar43 < 5) {
              uVar17 = (*(code *)((int64_t)(short)((short)uStack_dc * 0x6f2a + 0x45c6) +
                                 0x7fffa5248504))
                                 (puStack_150,param_1,0x7fffa5248504,(int64_t)puVar38 * 0x7ffe0009)
              ;
              pbVar18 = (uint8_t *)(((uVar17 ^ 0x8ed947b7) - 0x44044a41) * 0x3bbe326f51fd5753);
            }
            else if (uVar43 == 5) {
              uVar42 = 0xffffffffc3aaa709;
              pbStack_100 = pbVar45;
              FUN_7fffa55c9280((((uint64_t)puStack_128 ^ ~uStack_138) & 0xffffffff) * 0x800 +
                               (((uint64_t)puStack_128 ^ ~uStack_138) >> 0x20) * 0x2c7 << 0x20,
                               &uStack_170,(uint8_t *)((int64_t)puVar25 - 0x3ed3b09f),
                               (int64_t)puStack_150 * -0x1ffff ^
                               (int64_t)puStack_150 * -0x7fffc0000);
              uVar42 = (uVar42 << 0x1b | uVar42 >> 0x25) ^ (uVar42 << 0x27 | uVar42 >> 0x19) ^
                       uVar42;
              uVar42 = (uVar42 << 0x36 | uVar42 >> 10) ^ (uVar42 << 0xe | uVar42 >> 0x32) ^ uVar42;
              uVar42 = (uVar42 << 0x1c | uVar42 >> 0x24) ^ (uVar42 << 0x2c | uVar42 >> 0x14) ^
                       uVar42;
              uVar42 = (uVar42 << 0x18 | uVar42 >> 0x28) ^ (uVar42 << 0x38 | uVar42 >> 8) ^ uVar42;
              uVar42 = (uVar42 << 0x2a | uVar42 >> 0x16) ^ (uVar42 << 0xd | uVar42 >> 0x33) ^ uVar42
              ;
              uVar42 = (uVar42 << 0x14 | uVar42 >> 0x2c) ^ (uVar42 << 0x1a | uVar42 >> 0x26) ^
                       uVar42;
              uVar42 = (uVar42 << 0x34 | uVar42 >> 0xc) ^ (uVar42 << 0x28 | uVar42 >> 0x18) ^ uVar42
              ;
              uVar42 = (uVar42 << 0x10 | uVar42 >> 0x30) ^ (uVar42 << 0x28 | uVar42 >> 0x18) ^
                       uVar42;
              uVar42 = (uVar42 << 0x10 | uVar42 >> 0x30) ^ (uVar42 << 0x20 | uVar42 >> 0x20) ^
                       uVar42;
              uVar42 = (uVar42 << 0x2d | uVar42 >> 0x13) ^ (uVar42 << 0x16 | uVar42 >> 0x2a) ^
                       (uVar42 << 0x20 | uVar42 >> 0x20);
              uVar42 = (uVar42 << 0x2c | uVar42 >> 0x14) ^ (uVar42 << 0x1a | uVar42 >> 0x26) ^
                       uVar42;
              uVar42 = (uVar42 << 0x34 | uVar42 >> 0xc) ^ (uVar42 << 0x18 | uVar42 >> 0x28) ^ uVar42
              ;
              uVar42 = (uVar42 << 0x28 | uVar42 >> 0x18) ^ (uVar42 << 0x30 | uVar42 >> 0x10) ^
                       uVar42;
              uVar42 = (uVar42 << 0x20 | uVar42 >> 0x20) ^ (uVar42 << 0x10 | uVar42 >> 0x30) ^
                       uVar42;
              pbVar18 = (uint8_t *)(uVar42 << 0x20 | uVar42 >> 0x20);
              param_1 = uVar17;
              pbVar45 = pbStack_100;
            }
            else {
              uVar46 = param_1 << 0x3b | param_1 >> 5;
              uVar29 = (uint64_t)((uint32_t)~(uint64_t)puVar34 & 1);
              uVar42 = (uint64_t)puVar34 ^ 0xfffffffffffffffe;
              if (((uint32_t)uStack_110 + 0xb5a9640b ^ 0xaae03b0d) < 0xb3ba77b) {
                uVar42 = uVar29;
              }
              lVar15 = (~(uint64_t)puVar34 | 1) * 0x631e52ec + uVar29 * -0x2b09de93 +
                       ((uint64_t)puVar34 & 0xfffffffffffffffe) * 0x38147459 + uVar42 * -0x2b09de93
              ;
              pbStack_100 = pbVar45;
              FUN_7fffa5285090(uVar46 ^ (param_1 << 0x1c | param_1 >> 0x24) ^ param_1,uVar46,puVar38
                               ,&uStack_170);
              pbVar18 = (uint8_t *)(lVar15 * -0x7fffffffffff);
              param_1 = uVar17;
              pbVar45 = pbStack_100;
            }
joined_r0x7fffa54735c0:
            if ((uint8_t *)0x3 < pbVar18) goto LAB_7fffa5473e80;
LAB_7fffa5474160:
            pbVar18 = pbVar45;
            uStack_170 = uVar16;
            puVar38 = puStack_f0;
            break;
          }
          if (uStack_d4 == 5) {
            if (4 < uVar43) {
              if (uVar43 == 5) {
                uVar17 = param_1 ^ (param_1 << 3 | param_1 >> 0x3d) ^
                                   (param_1 << 4 | param_1 >> 0x3c);
                uVar29 = uVar17 << 0x15 | uVar17 >> 0x2b;
                uVar46 = uVar17 << 0x10 | uVar17 >> 0x30;
                uVar42 = uVar46 + uVar29;
                if ((((uint32_t)uStack_110 + 0x4572898d) * 0x1000 |
                    (uint32_t)uStack_110 + 0x4572898d >> 0x14) == 0x23cdc289) {
                  uVar42 = uVar46 ^ uVar29;
                }
                uVar42 = uVar42 ^ (uVar17 << 0x39 | uVar17 >> 7);
                pbStack_100 = pbVar45;
                FUN_7fffa5175f20(uVar42,FUN_7fffa5175f20,puVar38,0x6ccddbb3);
                pbVar18 = (uint8_t *)(uVar42 - 0xc000012d);
                pbVar45 = pbStack_100;
              }
              else {
                uStack_160 = 0x7fffa5477f79;
                uVar42 = uStack_108 & 0xffffffff;
                uVar46 = uVar42 | unaff_R14 | (uint64_t)pbVar18;
                uStack_120 = (uint64_t)(~((uint32_t)uStack_110 + 0xe3872ed6) * 0x50fe8d49);
                bVar8 = (uint8_t)uStack_110 & 0x1f;
                lVar15 = uVar46 - (int64_t)(int)(((uint32_t)uStack_110 ^ 0xbeebada5) + 0x74f8b53c);
                if (-0x644a45e1 <
                    (int64_t)(uint64_t)(((uint32_t)uStack_110 | 1) * -0x62e8c8d + 0xd0b48bc4)) {
                  lVar15 = (int64_t)
                           (int)(((uint32_t)uStack_110 + 0xd19b81ba) * 4 |
                                (uint32_t)uStack_110 + 0xd19b81ba >> 0x1e) * uVar46;
                }
                uVar46 = ~uVar42 & (uint64_t)pbVar18 & unaff_R14;
                uVar29 = unaff_R14 ^ ~uVar42 & (uint64_t)pbVar18;
                if (0x40168f6 < (0x2ebcbdf4 << bVar8 | 0x2ebcbdf4U >> 0x20 - bVar8)) {
                  uVar29 = uVar46;
                }
                uVar31 = (int64_t)puVar37 * 0x55004a4d;
                uVar31 = ((int64_t)puVar37 * 0xaa00949a000000 | uVar31 >> 0x27) ^
                         ((int64_t)puVar37 * 0xaa00949a00 | uVar31 >> 0x37) ^ uVar31;
                uVar46 = (uStack_110 + 0xff1ce04edc) * uVar46 +
                         ((uint32_t)~(uint64_t)pbVar18 & (uint32_t)uStack_108 & (uint32_t)unaff_R14) *
                         uStack_120 +
                         (~(uint64_t)pbVar18 & ~(uVar42 | unaff_R14)) * -0x12292170 +
                         (((uint32_t)pbVar18 & (uint32_t)uStack_108 | unaff_R14) +
                         (~unaff_R14 & ((uint64_t)pbVar18 ^ uVar42))) * 0x1aea0a6a + lVar15 +
                         (unaff_R14 & ((uint64_t)pbVar18 ^ uVar42)) * -0x2e26952a +
                         uVar29 * -0xffd1d96d01;
                pbStack_100 = pbVar45;
                FUN_7fffa5474f70((uint64_t)puVar38 >> 0x26 ^ (uint64_t)puVar38,
                                 uVar29 * -0xffd1d96d01,uVar31 >> 0x3c ^ uVar31);
                uVar42 = uVar46 ^ 0xd7c12ac9;
                uVar42 = (uVar42 << 3 | uVar46 >> 0x3d) ^
                         (uVar42 << 1 | (uint64_t)((int64_t)uVar42 < 0)) ^ uVar42;
                uVar42 = (uVar42 << 6 | uVar42 >> 0x3a) ^ (uVar42 << 2 | uVar42 >> 0x3e) ^ uVar42;
                uVar42 = (uVar42 << 4 | uVar42 >> 0x3c) ^ (uVar42 << 0xc | uVar42 >> 0x34) ^ uVar42;
                uVar42 = (uVar42 << 0x18 | uVar42 >> 0x28) ^ (uVar42 << 8 | uVar42 >> 0x38) ^ uVar42
                ;
                pbVar18 = (uint8_t *)((uVar42 << 0x10 | uVar42 >> 0x30) ^
                                   (uVar42 << 0x30 | uVar42 >> 0x10) ^ uVar42);
                param_1 = uVar17;
                pbVar45 = pbStack_100;
              }
              goto joined_r0x7fffa54735c0;
            }
            uVar42 = uStack_110 | 1;
            uVar46 = (uint64_t)puVar37 >> 9 ^ (uint64_t)puVar37;
            puVar25 = (uint64_t *)~(uint64_t)puVar27;
            if ((uint32_t)uStack_110 != 0xe31fb34f) {
              puVar25 = puVar27;
            }
            pbStack_100 = pbVar45;
            FUN_7fffa4cf1f40(puStack_150,
                             ((uint64_t)puVar27 & (uint64_t)puVar30 ^ uStack_168) * -0x16da6e8a0,
                             (((uint64_t)puVar27 & (uint64_t)puVar30 & ~uStack_168) -
                             ((uint64_t)puVar25 ^ (uint64_t)puVar30 | ~uStack_168)) * 0x18333d7fb)
            ;
            uVar46 = uVar46 * uVar42;
            uVar42 = (uVar46 & 0xffffffff) * 0x487f2be5 +
                     ((uVar46 >> 0x20) * 0x487f2be5 + (uVar46 & 0xffffffff) * 0x9fa4ea1f << 0x20);
            pbVar18 = (uint8_t *)((uVar42 >> 0x32 ^ uVar42 >> 0x19 ^ uVar42) - 0x9d74a442);
            param_1 = uVar17;
          }
          else {
            if (4 < uVar43) {
              if (uVar43 == 5) {
                pcVar41 = FUN_7fffa54921c0;
                FUN_7fffa54921c0();
                pbVar18 = (uint8_t *)((uint64_t)pcVar41 ^ 0xffffffff92ca22cd);
              }
              else {
                bVar8 = (uint8_t)uStack_110 & 0x1f;
                FUN_7fffa5264470(puStack_150,FUN_7fffa5264470,param_1);
                puVar37 = puVar37 + -0xe65cf6d;
                uVar17 = ((int64_t)puVar37 * 0x40000 | (uint64_t)puVar37 >> 0x2e) ^
                         ((int64_t)puVar37 * 0x800000 | (uint64_t)puVar37 >> 0x29) ^
                         (uint64_t)puVar37;
                uVar17 = (uVar17 << 0x2e | uVar17 >> 0x12) ^ (uVar17 << 0x24 | uVar17 >> 0x1c) ^
                         uVar17;
                uVar17 = (uVar17 << 8 | uVar17 >> 0x38) ^ (uVar17 << 0x1c | uVar17 >> 0x24) ^ uVar17
                ;
                uVar46 = (uVar17 << 0x38 | uVar17 >> 8) ^ uVar17;
                uVar42 = uVar17 << 0x10 | uVar17 >> 0x30;
                uVar17 = uVar46 | uVar42;
                if (0x105 < (0x4c40cb15 << bVar8 | 0x4c40cb15U >> 0x20 - bVar8)) {
                  uVar17 = uVar46 ^ uVar42;
                }
                uVar17 = (uVar17 << 0x20 | uVar17 >> 0x20) ^ (uVar17 << 0x30 | uVar17 >> 0x10) ^
                         uVar17;
                pbVar18 = (uint8_t *)(uVar17 << 0x20 | uVar17 >> 0x20);
              }
              goto joined_r0x7fffa54735c0;
            }
            pcVar41 = (code *)((int64_t)(int)((uint32_t)uStack_110 ^ 0x1ce0e81a) + 0x7fffa5603e5b);
            (*pcVar41)();
            uVar17 = ((int64_t)pcVar41 << 7 | (uint64_t)pcVar41 >> 0x39) ^
                     ((int64_t)pcVar41 << 9 | (uint64_t)pcVar41 >> 0x37) ^ (uint64_t)pcVar41;
            uVar17 = (uVar17 << 0x12 | uVar17 >> 0x2e) ^ (uVar17 << 0xe | uVar17 >> 0x32) ^ uVar17;
            uVar17 = (uVar17 << 0x24 | uVar17 >> 0x1c) ^ (uVar17 << 0x1c | uVar17 >> 0x24) ^ uVar17;
            uVar17 = (uVar17 << 8 | uVar17 >> 0x38) ^ (uVar17 << 0x38 | uVar17 >> 8) ^ uVar17;
            pbVar18 = (uint8_t *)((uVar17 << 0x10 | uVar17 >> 0x30) ^ uVar17 ^
                              (uVar17 << 0x30 | uVar17 >> 0x10));
          }
          if (pbVar18 < (uint8_t *)0x4) goto LAB_7fffa5474160;
LAB_7fffa5473e80:
          iVar4 = 0x1f;
          if ((uint32_t)uStack_170 != 0) {
            for (; (uint32_t)uStack_170 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          uVar36 = 0x1f;
          if ((uint32_t)uVar16 != 0) {
            for (; (uint32_t)uVar16 >> uVar36 == 0; uVar36 = uVar36 - 1) {
            }
          }
          if ((int)pbVar18 * 4 - iVar4 <= (int)((uVar36 ^ 0x1f) + (int)pbVar45 * 4 + -0x1b))
          goto LAB_7fffa5474160;
          pbStack_f8 = pbStack_f8 + 1;
          puVar25 = puVar38;
          uVar16 = uStack_170;
          puStack_f0 = puVar38;
        } while (puVar38 < puVar32);
        if (3 < uStack_170) {
          pbVar45 = (uint8_t *)((int64_t)puVar38 + (-lStack_c0 - uStack_170) + -0xfffffffd);
          puVar25 = puVar1;
          lVar15 = lStack_c0;
          if ((uint32_t)pbVar45 < (uint32_t)uStack_158) {
            puVar25 = puStack_128;
            lVar15 = lStack_148;
          }
          uVar16 = (uint64_t)pbVar45 & 0xffffffff;
          puVar37 = puVar38;
          if (puVar25 < (uint64_t *)(lVar15 + uVar16) && puStack_1f0 < puVar38) {
            lVar28 = lVar15 + uVar16 + -1;
            for (lVar15 = 0;
                *(uint8_t *)((int64_t)puVar38 + lVar15 + -1) == *(uint8_t *)(lVar28 + lVar15);
                lVar15 = lVar15 + -1) {
              puVar37 = (uint64_t *)((int64_t)puVar38 + lVar15 + -1);
              if (puVar37 <= puStack_1f0 || (uint64_t *)(lVar28 + lVar15) <= puVar25) {
                pbVar18 = pbVar18 + (1 - lVar15);
                goto LAB_7fffa5474273;
              }
            }
            pbVar18 = pbVar18 + -lVar15;
            puVar37 = (uint64_t *)((int64_t)puVar38 + lVar15);
          }
LAB_7fffa5474273:
          uStack_1fc = uStack_1a4;
          uStack_1a4 = (int)uStack_170 - 3;
          puVar38 = puVar37;
        }
        uVar16 = (int64_t)puVar38 - (int64_t)puStack_1f0;
        puVar37 = (uint64_t *)param_2[3];
        uVar36 = (uint32_t)uStack_110;
        if (puStack_e8 < puVar38) {
          if (puStack_1f0 <= puStack_e8) {
            uVar17 = puStack_1f0[1];
            *puVar37 = *puStack_1f0;
            puVar37[1] = uVar17;
            puVar25 = (uint64_t *)
                      ((int64_t)puVar37 + ((int64_t)puStack_e8 - (int64_t)puStack_1f0));
            if (0x10 < (int64_t)puStack_e8 - (int64_t)puStack_1f0) {
              puVar37 = puVar37 + 6;
              while( true ) {
                uVar17 = puStack_1f0[3];
                puVar37[-4] = puStack_1f0[2];
                puVar37[-3] = uVar17;
                uVar17 = puStack_1f0[5];
                puVar37[-2] = puStack_1f0[4];
                puVar37[-1] = uVar17;
                if (puVar25 <= puVar37) break;
                puVar37 = puVar37 + 4;
                puStack_1f0 = puStack_1f0 + 4;
              }
            }
            puVar37 = puVar25;
            puStack_1f0 = puStack_e8;
          }
          if (puStack_1f0 < puVar38) {
            uVar17 = (int64_t)puVar38 - (int64_t)puStack_1f0;
            if ((uVar17 < 4) || ((uint64_t)((int64_t)puVar37 - (int64_t)puStack_1f0) < 0x20)) {
LAB_7fffa5474438:
              puVar25 = puVar37;
            }
            else {
              if (uVar17 < 0x20) {
                uVar46 = 0;
              }
              else {
                uVar46 = uVar17 & 0xffffffffffffffe0;
                uVar42 = 0;
                do {
                  uVar11 = *(uint64_t *)((int64_t)puStack_1f0 + uVar42);
                  uVar12 = *(uint64_t *)((uint8_t *)((int64_t)puStack_1f0 + uVar42) + 8);
                  pbVar45 = (uint8_t *)((int64_t)puStack_1f0 + uVar42 + 0x10);
                  uVar13 = *(uint64_t *)(pbVar45 + 8);
                  pbVar39 = (uint8_t *)((int64_t)puVar37 + uVar42 + 0x10);
                  *(uint64_t *)pbVar39 = *(uint64_t *)pbVar45;
                  *(uint64_t *)(pbVar39 + 8) = uVar13;
                  *(uint64_t *)((int64_t)puVar37 + uVar42) = uVar11;
                  *(uint64_t *)((uint8_t *)((int64_t)puVar37 + uVar42) + 8) = uVar12;
                  uVar42 = uVar42 + 0x20;
                } while (uVar46 != uVar42);
                if (uVar17 == uVar46) goto LAB_7fffa5474590;
                if ((uVar17 & 0x1c) == 0) {
                  puStack_1f0 = (uint64_t *)((int64_t)puStack_1f0 + uVar46);
                  puVar37 = (uint64_t *)((int64_t)puVar37 + uVar46);
                  goto LAB_7fffa5474438;
                }
              }
              uVar42 = uVar17 & 0xfffffffffffffffc;
              do {
                *(uint32_t *)((int64_t)puVar37 + uVar46) =
                     *(uint32_t *)((int64_t)puStack_1f0 + uVar46);
                uVar46 = uVar46 + 4;
              } while (uVar42 != uVar46);
              if (uVar17 == uVar42) goto LAB_7fffa5474590;
              puStack_1f0 = (uint64_t *)((int64_t)puStack_1f0 + uVar42);
              puVar25 = (uint64_t *)((int64_t)puVar37 + uVar42);
            }
            uVar17 = (uint64_t)((uint64_t)(uint32_t)-(int)puStack_1f0 + (int64_t)puVar38) & 7;
            bVar7 = uVar17 == 0;
            if ((uVar36 | 1) * 0x73fbccb0 < 0x3483ba83) {
              bVar7 = uVar17 != 0;
            }
            puVar37 = puStack_1f0;
            puVar24 = puStack_1f0;
            if (!bVar7) {
              do {
                puVar37 = (uint64_t *)((int64_t)puVar24 + 1);
                *(uint8_t *)puVar25 = (uint8_t)*puVar24;
                puVar25 = (uint64_t *)((int64_t)puVar25 + 1);
                uVar17 = uVar17 - 1;
                puVar24 = puVar37;
              } while (uVar17 != 0);
            }
            if ((uint64_t)((int64_t)puStack_1f0 - (int64_t)puVar38) < 0xfffffffffffffff9) {
              lVar15 = 0;
              do {
                *(uint8_t *)((int64_t)puVar25 + lVar15) = *(uint8_t *)((int64_t)puVar37 + lVar15);
                *(uint8_t *)((int64_t)puVar25 + lVar15 + 1) =
                     *(uint8_t *)((int64_t)puVar37 + lVar15 + 1);
                *(uint8_t *)((int64_t)puVar25 + lVar15 + 2) =
                     *(uint8_t *)((int64_t)puVar37 + lVar15 + 2);
                *(uint8_t *)((int64_t)puVar25 + lVar15 + 3) =
                     *(uint8_t *)((int64_t)puVar37 + lVar15 + 3);
                *(uint8_t *)((int64_t)puVar25 + lVar15 + 4) =
                     *(uint8_t *)((int64_t)puVar37 + lVar15 + 4);
                *(uint8_t *)((int64_t)puVar25 + lVar15 + 5) =
                     *(uint8_t *)((int64_t)puVar37 + lVar15 + 5);
                *(uint8_t *)((int64_t)puVar25 + lVar15 + 6) =
                     *(uint8_t *)((int64_t)puVar37 + lVar15 + 6);
                *(uint8_t *)((int64_t)puVar25 + lVar15 + 7) =
                     *(uint8_t *)((int64_t)puVar37 + lVar15 + 7);
                lVar28 = lVar15 + 8;
                lVar15 = lVar15 + 8;
              } while ((uint64_t *)((int64_t)puVar37 + lVar28) != puVar38);
            }
          }
LAB_7fffa5474590:
          param_2[3] = param_2[3] + uVar16;
          uVar17 = param_2[1];
          if (0xffff < uVar16) {
            *(uint32_t *)(param_2 + 9) = 1;
            puVar37 = (uint64_t *)*param_2;
            bVar8 = (uint8_t)uStack_110 & 0x1f;
            puVar25 = (uint64_t *)-(int64_t)puVar37;
            if ((int64_t)(uint64_t)(0xbd421363U >> bVar8 | -0x42bdec9d << 0x20 - bVar8) <
                -0x385b5ace) {
              puVar25 = puVar37;
            }
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)((int64_t)puVar25 + uVar17) >> 3)
            ;
          }
        }
        else {
          uVar17 = puStack_1f0[1];
          *puVar37 = *puStack_1f0;
          puVar37[1] = uVar17;
          if (0x10 < uVar16) {
            uVar17 = param_2[3];
            uVar42 = puStack_1f0[3];
            *(uint64_t *)(uVar17 + 0x10) = puStack_1f0[2];
            *(uint64_t *)(uVar17 + 0x18) = uVar42;
            if (0x20 < (int64_t)uVar16) {
              puVar37 = (uint64_t *)(uVar17 + uVar16);
              lVar15 = 0;
              while( true ) {
                pbVar45 = (uint8_t *)((int64_t)puStack_1f0 + lVar15 + 0x20);
                uVar11 = *(uint64_t *)(pbVar45 + 8);
                puVar5 = (uint64_t *)(uVar17 + 0x20 + lVar15);
                *puVar5 = *(uint64_t *)pbVar45;
                puVar5[1] = uVar11;
                pbVar45 = (uint8_t *)((int64_t)puStack_1f0 + lVar15 + 0x30);
                uVar11 = *(uint64_t *)(pbVar45 + 8);
                puVar5 = (uint64_t *)(uVar17 + 0x30 + lVar15);
                *puVar5 = *(uint64_t *)pbVar45;
                puVar5[1] = uVar11;
                if (puVar37 <= (uint64_t *)(uVar17 + 0x20 + lVar15 + 0x20)) break;
                lVar15 = lVar15 + 0x20;
              }
            }
            goto LAB_7fffa5474590;
          }
          param_2[3] = param_2[3] + uVar16;
          uVar17 = param_2[1];
        }
        *(short *)(uVar17 + 4) = (short)uVar16;
        *(int *)param_2[1] = (int)uStack_170;
        if ((uint8_t *)0xffff < pbVar18 + -3) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
        }
        *(short *)(param_2[1] + 6) = (short)(pbVar18 + -3);
        param_2[1] = param_2[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          uVar20 = *(uint32_t *)(param_1 + 0x2c);
          uVar16 = (uint64_t)uVar20;
          uVar22 = ((int)puVar32 - (int)(uint64_t *)(lStack_c0 + uVar16)) + 1;
          puVar37 = (uint64_t *)0x8;
          if (7 < uVar22) {
            uVar22 = 8;
          }
          if (puVar32 < (uint64_t *)(lStack_c0 + uVar16)) {
            uVar22 = 0;
          }
          if (uVar20 < uVar22 + uVar20) {
            puVar37 = *(uint64_t **)(param_1 + 0x70);
            uVar17 = *(uint64_t *)(param_1 + 0x60);
            iVar4 = *(int *)(param_1 + 0x34);
            do {
              if ((int)uStack_d4 < 6) {
                if (uStack_d4 == 5) {
                  uVar42 = *(int64_t *)(lStack_c0 + uVar16) * -0x30e4432345000000;
                  goto LAB_7fffa547476e;
                }
LAB_7fffa5474724:
                uVar48 = (*(int *)(lStack_c0 + uVar16) * -0x61c8864f ^ (uint32_t)uVar17) >>
                         (uint64_t)(0x18 - iVar4);
              }
              else {
                if (uStack_d4 * -0x45b5ef45 != 0x5dbc6462) goto LAB_7fffa5474724;
                uVar42 = *(int64_t *)(lStack_c0 + uVar16) * -0x30e4432340650000;
LAB_7fffa547476e:
                uVar48 = (uint32_t)((uVar42 ^ uVar17) >> (0x38U - (char)iVar4 & 0x3f));
              }
              *(uint32_t *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar16 & 7) * 4) = uVar48;
              if ((uint64_t)(uVar22 + uVar20) - 1 == uVar16) break;
              uVar16 = uVar16 + 1;
            } while( true );
          }
          *(uint32_t *)(param_1 + 300) = 0;
        }
        puStack_1f0 = (uint64_t *)((int64_t)puVar38 + (int64_t)pbVar18);
        if (puVar32 < puStack_1f0) {
          puVar25 = puStack_1f0;
        }
        else {
          do {
            uVar20 = uStack_1fc;
            puVar37 = (uint64_t *)(uint64_t)uVar20;
            uVar22 = ((int)puStack_1f0 - (int)lStack_c0) - uVar20;
            lVar15 = lStack_c0;
            if (uVar22 < (uint32_t)uStack_158) {
              lVar15 = lStack_148;
            }
            param_1 = uStack_c8;
            if ((0xfffffffc < uVar22 - (uint32_t)uStack_158) ||
               (puVar37 = (uint64_t *)(lVar15 + (uint64_t)uVar22),
               (int)*puVar37 != (int)*puStack_1f0)) {
              puVar25 = puStack_1f0;
              uStack_1fc = uVar20;
              break;
            }
            puVar25 = puStack_150;
            if (uVar22 < (uint32_t)uStack_158) {
              puVar25 = puVar6;
            }
            puVar38 = (uint64_t *)((int64_t)puStack_1f0 + 4);
            puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
            puVar24 = (uint64_t *)
                      ((int64_t)puStack_1f0 +
                      (int64_t)((int64_t)puVar25 + (4 - (int64_t)puVar37)));
            if (puStack_150 <= puVar24) {
              puVar24 = puStack_150;
            }
            puVar35 = puVar38;
            puVar47 = puVar37;
            if (puVar38 < (uint64_t *)((int64_t)puVar24 - 7U)) {
              if (*puVar37 == *puVar38) {
                puVar35 = (uint64_t *)((int64_t)puStack_1f0 + 0xc);
                pbVar45 = (uint8_t *)((int64_t)puStack_1f0 + 4);
                puVar47 = (uint64_t *)((uint64_t)uVar22 + 0xc + lVar15);
                do {
                  if ((uint64_t *)((int64_t)puVar24 - 7U) <= puVar35) goto LAB_7fffa547491f;
                  uVar16 = *puVar47;
                  uVar17 = *puVar35;
                  puVar35 = puVar35 + 1;
                  pbVar45 = pbVar45 + 8;
                  puVar47 = puVar47 + 1;
                } while (uVar16 == uVar17);
                uVar22 = 0;
                for (uVar17 = uVar17 ^ uVar16; (uVar17 & 1) == 0;
                    uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                  uVar22 = uVar22 + 1;
                }
                pbVar45 = pbVar45 + ((uint64_t)(uVar22 >> 3) - (int64_t)puVar38);
              }
              else {
                uVar22 = 0;
                for (uVar16 = *puVar37 ^ *puVar38; (uVar16 & 1) == 0;
                    uVar16 = uVar16 >> 1 | 0x8000000000000000) {
                  uVar22 = uVar22 + 1;
                }
                pbVar45 = (uint8_t *)(uint64_t)(uVar22 >> 3);
              }
            }
            else {
LAB_7fffa547491f:
              if ((puVar35 < (uint64_t *)((int64_t)puVar24 - 3U)) &&
                 ((int)*puVar47 == (int)*puVar35)) {
                puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
                puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
              }
              if ((puVar35 < (uint64_t *)((int64_t)puVar24 - 1U)) &&
                 ((short)*puVar47 == (short)*puVar35)) {
                puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
              }
              if (puVar35 < puVar24) {
                uVar17 = (uint64_t)((uint8_t)*puVar47 == (uint8_t)*puVar35);
                uVar16 = -uVar17;
                if (~((uVar36 | 1) * -0x70c9510a) < 0x790340a8) {
                  uVar16 = uVar17;
                }
                puVar35 = (uint64_t *)((int64_t)puVar35 + uVar16);
              }
              pbVar45 = (uint8_t *)((int64_t)puVar35 - (int64_t)puVar38);
            }
            if ((uint64_t *)((int64_t)puVar37 + (int64_t)pbVar45) == puVar25) {
              puVar38 = (uint64_t *)((int64_t)puVar38 + (int64_t)pbVar45);
              puVar25 = puVar1;
              puVar37 = puVar38;
              if (puVar38 < puVar33) {
                uVar16 = *puVar38;
                uVar17 = *puVar1;
                bVar7 = (int64_t)uVar16 <= (int64_t)uVar17;
                if (uVar36 != 0x771777b5) {
                  bVar7 = uVar17 == uVar16;
                }
                if (bVar7) {
                  puVar37 = (uint64_t *)((int64_t)puStack_1f0 + (int64_t)(pbVar45 + 0xc));
                  lVar15 = 8;
                  if (puVar37 < puVar33) {
LAB_7fffa5474ac0:
                    uVar16 = *puVar37;
                    uVar17 = *(uint64_t *)((int64_t)puVar1 + lVar15);
                    bVar7 = uVar17 == uVar16;
                    if (uVar36 != 0xe31fb34f) {
                      bVar7 = (int64_t)uVar17 <= (int64_t)uVar16;
                    }
                    if (bVar7) goto code_r0x7fffa5474b0f;
                    uVar22 = 0;
                    for (uVar17 = uVar17 ^ uVar16; (uVar17 & 1) == 0;
                        uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                      uVar22 = uVar22 + 1;
                    }
                    uVar16 = (uint64_t)(uVar22 >> 3) + lVar15;
                    goto LAB_7fffa5474c7e;
                  }
LAB_7fffa5474b21:
                  puVar25 = (uint64_t *)(lVar15 + (int64_t)puVar1);
                  goto LAB_7fffa5474b29;
                }
                uVar22 = 0;
                for (uVar17 = uVar17 ^ uVar16; (uVar17 & 1) == 0;
                    uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                  uVar22 = uVar22 + 1;
                }
                uVar16 = (uint64_t)(uVar22 >> 3);
              }
              else {
LAB_7fffa5474b29:
                if ((puVar37 < puVar26) && ((int)*puVar25 == (int)*puVar37)) {
                  puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
                  puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
                }
                if ((puVar37 < param_4) && ((short)*puVar25 == (short)*puVar37)) {
                  puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
                  puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
                }
                if (puVar37 < puStack_150) {
                  puVar37 = (uint64_t *)
                            ((int64_t)puVar37 + (uint64_t)((uint8_t)*puVar25 == (uint8_t)*puVar37));
                }
                uVar16 = (int64_t)puVar37 - (int64_t)puVar38;
              }
LAB_7fffa5474c7e:
              pbVar45 = pbVar45 + uVar16;
            }
            if (puStack_1f0 <= puStack_e8) {
              uVar16 = puStack_1f0[1];
              puVar25 = (uint64_t *)param_2[3];
              *puVar25 = *puStack_1f0;
              puVar25[1] = uVar16;
            }
            *(uint16_t *)(param_2[1] + 4) = 0;
            *(uint32_t *)param_2[1] = 1;
            if ((uint8_t *)0xffff < pbVar45 + 1) {
              *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
              *(uint32_t *)(param_2 + 9) = 2;
            }
            puStack_1f0 = (uint64_t *)((int64_t)puStack_1f0 + (int64_t)(pbVar45 + 4));
            *(short *)(param_2[1] + 6) = (short)(pbVar45 + 1);
            param_2[1] = param_2[1] + 8;
            puVar37 = (uint64_t *)0x793e5100;
            puVar25 = puStack_1f0;
            uStack_1fc = uStack_1a4;
            uStack_1a4 = uVar20;
          } while (puStack_1f0 <= puVar32);
        }
      }
    } while (puVar25 < puVar32);
  }
  *param_3 = uStack_1a4;
  param_3[1] = uStack_1fc;
  return (int64_t)puStack_150 - (int64_t)puStack_1f0;
code_r0x7fffa547203b:
  puVar38 = puVar38 + 1;
  puVar47 = puVar47 + 1;
  puVar35 = puVar35 + 1;
  if (puVar33 <= puVar38) goto LAB_7fffa5471f3c;
  goto LAB_7fffa5472030;
code_r0x7fffa5472e77:
  lVar15 = lVar15 + 8;
  goto LAB_7fffa5472e50;
code_r0x7fffa547400a:
  lVar15 = lVar15 + 8;
  goto LAB_7fffa5473fe0;
code_r0x7fffa5474b0f:
  puVar37 = puVar37 + 1;
  lVar15 = lVar15 + 8;
  if (puVar33 <= puVar37) goto LAB_7fffa5474b21;
  goto LAB_7fffa5474ac0;
}


// ============================================================================
// Function : FUN_7fffa5474f70  |  RVA: 0xd04f70  |  Size: 5677 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5474f70(uint64_t param_1)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t *plVar7;
  uint8_t bVar8;
  bool bVar9;
  uint64_t in_RAX;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  int iVar19;
  uint64_t uVar20;
  uint8_t bVar21;
  int64_t lVar22;
  uint32_t uVar23;
  uint64_t *puVar24;
  uint32_t uVar25;
  uint64_t *puVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  int iVar29;
  uint64_t *in_R10;
  uint8_t bVar30;
  uint32_t uVar31;
  int64_t lVar32;
  uint64_t uVar33;
  uint64_t *puVar34;
  uint64_t *puVar35;
  uint32_t uVar36;
  uint32_t uVar37;
  int64_t lVar38;
  int iVar39;
  uint32_t uVar40;
  uint32_t uVar41;
  uint32_t uVar42;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  char cVar47;
  uint8_t uVar50;
  char cVar51;
  uint8_t uVar52;
  char cVar53;
  uint8_t uVar54;
  char cVar55;
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar56 [16];
  int64_t in_stack_00000028;
  int64_t in_stack_00000030;
  uint32_t auStack_1d8 [66];
  int64_t lStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t *puStack_b0;
  uint64_t *puStack_a8;
  uint64_t *puStack_98;
  int64_t lStack_88;
  uint64_t *puStack_60;
  
  uVar40 = *(uint32_t *)(in_stack_00000028 + 0x1c);
  lVar38 = *(int64_t *)(in_stack_00000028 + 0x70);
  uVar42 = *(uint32_t *)(in_stack_00000028 + 0x10c);
  uVar20 = in_RAX >> 0x3c ^ in_RAX;
  lVar10 = *(int64_t *)(in_stack_00000028 + 0x38);
  uVar23 = (uint32_t)in_stack_00000030;
  lStack_88 = *(int64_t *)(in_stack_00000028 + 8);
  uVar36 = 1 << (*(uint8_t *)(in_stack_00000028 + 0x100) & 0x1f);
  puVar24 = (uint64_t *)(param_1 >> 0x26 ^ param_1);
  uVar17 = *puVar24;
  plVar7 = *(int64_t **)(in_stack_00000028 + 0xf8);
  uStack_c0 = uVar17 * -0x30e4432345000000 >> (0x42U - (char)plVar7[0x21] & 0x3f);
  uStack_c8 = (int64_t)puVar24 - lStack_88;
  iVar39 = 0;
  if (6 < uVar42) {
    iVar39 = 1 << ((char)uVar42 - 6U & 0x1f);
  }
  uVar37 = (uint32_t)uStack_c8;
  uVar16 = 6;
  if (uVar42 < 6) {
    uVar16 = uVar42;
  }
  uVar20 = (uVar20 << 9 | in_RAX >> 0x37) ^ (uVar20 << 0x19 | in_RAX >> 0x27) ^ uVar20;
  iVar19 = 1 << ((uint8_t)uVar16 & 0x1f);
  uVar42 = uVar37 - uVar36;
  if (uVar37 - uVar40 <= uVar36 ==
      ((uVar23 ^ 0x81a31114) << 0x1b | (uVar23 ^ 0x81a31114) >> 5) <
      ((uVar23 + 0x87ad676d) * 0x40 | uVar23 + 0x87ad676d >> 0x1a)) {
    uVar42 = uVar40;
  }
  if (*(int *)(in_stack_00000028 + 0x28) != 0) {
    uVar42 = uVar40;
  }
  uVar40 = *(uint32_t *)(in_stack_00000028 + 0x18);
  uVar28 = (uint64_t)uVar40;
  iVar29 = *(int *)(in_stack_00000028 + 0x34);
  uVar27 = *(uint64_t *)(in_stack_00000028 + 0x60);
  puStack_b0 = (uint64_t *)
               (((uVar20 << 0x32 | uVar20 >> 0xe) ^ (uVar20 << 0x12 | uVar20 >> 0x2e) ^ uVar20) *
               -0x4347dff9efda017b);
  puStack_60 = puVar24;
  cVar47 = (char)iVar29;
  bVar21 = (uint8_t)in_stack_00000030;
  if (*(int *)(in_stack_00000028 + 300) == 0) {
    uVar36 = *(uint32_t *)(in_stack_00000028 + 0x2c);
    uVar17 = (uint64_t)uVar36;
    lVar32 = lVar10;
    lVar14 = lVar38;
    if (0x180 < uVar37 - uVar36) {
      if (uVar36 < 0xffffffa0) {
        do {
          uVar20 = (uint64_t)((uint32_t)uVar17 & 7);
          uVar16 = *(uint32_t *)(in_stack_00000028 + 0x40 + uVar20 * 4);
          *(int *)(in_stack_00000028 + 0x40 + uVar20 * 4) =
               (int)((*(int64_t *)(lStack_88 + 8 + uVar17) * -0x30e4432345000000 ^
                     *(uint64_t *)(in_stack_00000028 + 0x60)) >> (0x38U - cVar47 & 0x3f));
          uVar20 = (uint64_t)(uVar16 >> 2 & 0xffffffc0);
          lVar32 = 0x3f;
          if ((uint8_t)(*(uint8_t *)(lVar10 + uVar20) & 0x3f ^ 0x7d - bVar21) != 0xc) {
            lVar32 = 0;
          }
          lVar32 = lVar32 + (uint64_t)(*(uint8_t *)(lVar10 + uVar20) - 1 & 0x3f);
          *(char *)(lVar10 + uVar20) = (char)lVar32;
          *(char *)(lVar10 + uVar20 + lVar32) = (char)uVar16;
          *(uint32_t *)(lVar38 + uVar20 * 4 + lVar32 * 4) = (uint32_t)uVar17;
          uVar17 = uVar17 + 1;
        } while (uVar36 + 0x60 != uVar17);
        lVar32 = *(int64_t *)(in_stack_00000028 + 0x38);
        lVar14 = *(int64_t *)(in_stack_00000028 + 0x70);
      }
      uVar36 = uVar37 - 0x20;
      uVar17 = (uint64_t)uVar36;
      uVar31 = (uint32_t)(lStack_88 + uVar17);
      uVar25 = (uint32_t)((int64_t)puVar24 + 1U);
      uVar16 = uVar25 - uVar31;
      if ((uVar23 | 1) * 0x24ddd32f == -0x13591130) {
        uVar16 = uVar31 ^ uVar25;
      }
      uVar25 = 8;
      if (uVar16 + 1 < 8) {
        uVar25 = uVar16 + 1;
      }
      uVar16 = 0;
      if (lStack_88 + uVar17 <= (int64_t)puVar24 + 1U) {
        uVar16 = uVar25;
      }
      if (uVar36 < (uVar16 + uVar37) - 0x20) {
        uVar41 = *(uint32_t *)(in_stack_00000028 + 0x34);
        uVar20 = *(uint64_t *)(in_stack_00000028 + 0x60);
        do {
          uVar25 = (uint32_t)uVar17;
          plVar2 = (int64_t *)(lStack_88 + uVar17);
          uVar17 = uVar17 + 1;
          *(int *)(in_stack_00000028 + 0x40 + (uint64_t)(uVar25 & 7) * 4) =
               (int)((*plVar2 * -0x30e4432345000000 ^ uVar20) >> (0x38U - (char)uVar41 & 0x3f));
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    if (uVar36 < uVar37) {
      lVar11 = *(int64_t *)(in_stack_00000028 + 8);
      bVar8 = (uint8_t)*(uint32_t *)(in_stack_00000028 + 0x34);
      bVar30 = bVar8 | 0x38;
      if ((uVar23 ^ 0x1defcc6d) <= ~(uVar23 ^ 0xf1fa1ac3)) {
        bVar30 = 0x38 - bVar8;
      }
      uVar17 = (uint64_t)uVar36;
      while( true ) {
        uVar20 = (uint64_t)((uint32_t)uVar17 & 7);
        uVar36 = *(uint32_t *)(in_stack_00000028 + 0x40 + uVar20 * 4);
        *(int *)(in_stack_00000028 + 0x40 + uVar20 * 4) =
             (int)((*(uint64_t *)(in_stack_00000028 + 0x60) ^
                   *(int64_t *)(lVar11 + 8 + uVar17) * -0x30e4432345000000) >> (bVar30 & 0x3f));
        uVar25 = uVar36 >> 2;
        uVar16 = uVar25 & 0xffffffc0;
        if (uVar23 + 0xb9d9fc53 <=
            (-0x420a3c29 << (bVar21 & 0x1f) | 0xbdf5c3d7U >> 0x20 - (bVar21 & 0x1f)) * 0x1225e003) {
          uVar16 = uVar25 ^ 0x3fffffc0;
        }
        uVar20 = (uint64_t)uVar16;
        lVar22 = 0;
        if ((*(uint8_t *)(lVar32 + uVar20) & 0x3f) == 1) {
          lVar22 = 0x3f;
        }
        lVar22 = (uint64_t)(*(uint8_t *)(lVar32 + uVar20) - 1 & 0x3f) + lVar22;
        *(char *)(lVar32 + uVar20) = (char)lVar22;
        *(char *)(lVar32 + uVar20 + lVar22) = (char)uVar36;
        *(uint32_t *)(uVar20 * 4 + lVar14 + lVar22 * 4) = (uint32_t)uVar17;
        if ((uStack_c8 & 0xffffffff) - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
      }
      uVar17 = uStack_c8 & 0xffffffff;
    }
    else {
      uVar17 = uStack_c8 & 0xffffffff;
      if ((int64_t)(uint64_t)((uVar23 ^ 0xc6923d5b) * 0x77fc89dd) <=
          (int64_t)(int)(-0x1bf24933 - (uVar23 + 0x449e8f6d))) {
        uVar17 = uStack_c8 - 0xffffffff;
      }
    }
    uVar36 = ~((uVar23 | 1) * 0x5519e7b7);
    if ((uint64_t)(0x530ef2e6 - uVar23) < (uint64_t)(int64_t)(int)(uVar36 << 6 | uVar36 >> 0x1a))
    {
      *(uint32_t *)(in_stack_00000028 + 0x2c) = uVar37;
      uVar41 = (uint32_t)
               ((uVar27 ^ *(int64_t *)(lStack_88 + 8 + uVar17) * -0x30e4432345000000) >>
               (0x38U - cVar47 & 0x3f));
    }
    else {
      *(uint32_t *)(in_stack_00000028 + 0x2c) = uVar37;
      uVar41 = (uint32_t)
               ((*(int64_t *)(lStack_88 + 8 + uVar17) * -0x30e4432345000000 ^ uVar27) >>
               (uint64_t)(0x38 - iVar29));
    }
    uVar36 = *(uint32_t *)(in_stack_00000028 + 0x40 + (uint64_t)(uVar37 & 7) * 4);
    *(uint32_t *)(in_stack_00000028 + 0x40 + (uint64_t)(uVar37 & 7) * 4) = uVar41;
  }
  else {
    *(uint32_t *)(in_stack_00000028 + 0x2c) = uVar37;
    uVar36 = (uint32_t)((uVar17 * -0x30e4432345000000 ^ uVar27) >> (0x38U - cVar47 & 0x3f));
  }
  uVar54 = (uint8_t)(uVar36 >> 0x18);
  uVar52 = (uint8_t)(uVar36 >> 0x10);
  uVar50 = (uint8_t)(uVar36 >> 8);
  auVar48._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar54,uVar54),uVar52),CONCAT14(uVar52,uVar36)) >> 0x20);
  auVar48[3] = uVar50;
  auVar48[2] = uVar50;
  auVar48[0] = (uint8_t)uVar36;
  auVar48[1] = auVar48[0];
  auVar48._8_8_ = 0;
  auVar49 = pshuflw(auVar48,auVar48,0);
  uVar17 = (uint64_t)(uVar36 >> 2 & 0xffffffc0);
  uVar16 = uVar23 | 1;
  *(int *)(in_stack_00000028 + 0x68) = *(int *)(in_stack_00000028 + 0x68) + uVar36;
  pcVar3 = (char *)(lVar10 + uVar17);
  pcVar4 = (char *)(lVar10 + 0x10 + uVar17);
  pcVar5 = (char *)(lVar10 + 0x20 + uVar17);
  pcVar6 = (char *)(lVar10 + 0x30 + uVar17);
  cVar47 = auVar49[0];
  cVar51 = auVar49[1];
  cVar53 = auVar49[2];
  cVar55 = auVar49[3];
  if ((in_stack_00000030 + 0x100a0499fc7U ^ 0xb272c57a) == (uint64_t)(uVar16 * -0x60e10b46)) {
    auVar46[0] = -(cVar47 < *pcVar4);
    auVar46[1] = -(cVar51 < pcVar4[1]);
    auVar46[2] = -(cVar53 < pcVar4[2]);
    auVar46[3] = -(cVar55 < pcVar4[3]);
    auVar46[4] = -(cVar47 < pcVar4[4]);
    auVar46[5] = -(cVar51 < pcVar4[5]);
    auVar46[6] = -(cVar53 < pcVar4[6]);
    auVar46[7] = -(cVar55 < pcVar4[7]);
    auVar46[8] = -(cVar47 < pcVar4[8]);
    auVar46[9] = -(cVar51 < pcVar4[9]);
    auVar46[10] = -(cVar53 < pcVar4[10]);
    auVar46[0xb] = -(cVar55 < pcVar4[0xb]);
    auVar46[0xc] = -(cVar47 < pcVar4[0xc]);
    auVar46[0xd] = -(cVar51 < pcVar4[0xd]);
    auVar46[0xe] = -(cVar53 < pcVar4[0xe]);
    auVar46[0xf] = -(cVar55 < pcVar4[0xf]);
    auVar56._8_4_ = 0xffffffff;
    auVar56._0_8_ = 0xffffffffffffffff;
    auVar56._12_4_ = 0xffffffff;
    auVar49 = auVar56 ^ auVar46;
  }
  else {
    auVar49[0] = -(*pcVar4 == cVar47);
    auVar49[1] = -(pcVar4[1] == cVar51);
    auVar49[2] = -(pcVar4[2] == cVar53);
    auVar49[3] = -(pcVar4[3] == cVar55);
    auVar49[4] = -(pcVar4[4] == cVar47);
    auVar49[5] = -(pcVar4[5] == cVar51);
    auVar49[6] = -(pcVar4[6] == cVar53);
    auVar49[7] = -(pcVar4[7] == cVar55);
    auVar49[8] = -(pcVar4[8] == cVar47);
    auVar49[9] = -(pcVar4[9] == cVar51);
    auVar49[10] = -(pcVar4[10] == cVar53);
    auVar49[0xb] = -(pcVar4[0xb] == cVar55);
    auVar49[0xc] = -(pcVar4[0xc] == cVar47);
    auVar49[0xd] = -(pcVar4[0xd] == cVar51);
    auVar49[0xe] = -(pcVar4[0xe] == cVar53);
    auVar49[0xf] = -(pcVar4[0xf] == cVar55);
  }
  puStack_a8 = (uint64_t *)(lVar10 + uVar17);
  lVar38 = lVar38 + uVar17 * 4;
  auVar45[0] = -(*pcVar5 == cVar47);
  auVar45[1] = -(pcVar5[1] == cVar51);
  auVar45[2] = -(pcVar5[2] == cVar53);
  auVar45[3] = -(pcVar5[3] == cVar55);
  auVar45[4] = -(pcVar5[4] == cVar47);
  auVar45[5] = -(pcVar5[5] == cVar51);
  auVar45[6] = -(pcVar5[6] == cVar53);
  auVar45[7] = -(pcVar5[7] == cVar55);
  auVar45[8] = -(pcVar5[8] == cVar47);
  auVar45[9] = -(pcVar5[9] == cVar51);
  auVar45[10] = -(pcVar5[10] == cVar53);
  auVar45[0xb] = -(pcVar5[0xb] == cVar55);
  auVar45[0xc] = -(pcVar5[0xc] == cVar47);
  auVar45[0xd] = -(pcVar5[0xd] == cVar51);
  auVar45[0xe] = -(pcVar5[0xe] == cVar53);
  auVar45[0xf] = -(pcVar5[0xf] == cVar55);
  auVar44[0] = -(*pcVar6 == cVar47);
  auVar44[1] = -(pcVar6[1] == cVar51);
  auVar44[2] = -(pcVar6[2] == cVar53);
  auVar44[3] = -(pcVar6[3] == cVar55);
  auVar44[4] = -(pcVar6[4] == cVar47);
  auVar44[5] = -(pcVar6[5] == cVar51);
  auVar44[6] = -(pcVar6[6] == cVar53);
  auVar44[7] = -(pcVar6[7] == cVar55);
  auVar44[8] = -(pcVar6[8] == cVar47);
  auVar44[9] = -(pcVar6[9] == cVar51);
  auVar44[10] = -(pcVar6[10] == cVar53);
  auVar44[0xb] = -(pcVar6[0xb] == cVar55);
  auVar44[0xc] = -(pcVar6[0xc] == cVar47);
  auVar44[0xd] = -(pcVar6[0xd] == cVar51);
  auVar44[0xe] = -(pcVar6[0xe] == cVar53);
  auVar44[0xf] = -(pcVar6[0xf] == cVar55);
  auVar43[0] = -(*pcVar3 == cVar47);
  auVar43[1] = -(pcVar3[1] == cVar51);
  auVar43[2] = -(pcVar3[2] == cVar53);
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
  uVar20 = (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar43 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                    (uint16_t)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar43[0xf] >> 7) << 0xf) |
           (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar44 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar44[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar45 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar45[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar49 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
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
                    (uint16_t)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(uint8_t)(auVar49[0xf] >> 7) << 0xf) << 0x10;
  uVar36 = (uint32_t)*(uint8_t *)(lVar10 + uVar17);
  if (uVar20 != 0) {
    bVar8 = *(uint8_t *)(lVar10 + uVar17) & 0x3f;
    uVar17 = uVar20 >> bVar8 | uVar20 << 0x40 - bVar8;
    lVar10 = 0;
    do {
      iVar29 = 0;
      for (uVar20 = uVar17; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
        iVar29 = iVar29 + 1;
      }
      uVar37 = iVar29 + uVar36 & 0x3f;
      if (uVar37 != 0) {
        uVar37 = *(uint32_t *)(lVar38 + (uint64_t)uVar37 * 4);
        bVar9 = uVar37 < uVar42;
        if (0xdbbe3bf3 < (((uVar23 ^ 0x6b973981) << 0x17 | (uVar23 ^ 0x6b973981) >> 9) ^ 0xf4e7e1ca)
           ) {
          bVar9 = uVar37 == uVar42;
        }
        if (bVar9) goto LAB_7fffa5475801;
        iVar19 = iVar19 + -1;
        auStack_1d8[lVar10] = uVar37;
        lVar10 = lVar10 + 1;
      }
      uVar17 = uVar17 & uVar17 - 1;
      if ((uVar17 == 0) || (iVar19 == 0)) goto LAB_7fffa5475801;
    } while( true );
  }
  lVar10 = 0;
LAB_7fffa5475801:
  uVar17 = uStack_c0;
  uStack_c0 = uStack_c0 << 2;
  iVar29 = 0;
  if ((uVar36 & 0x3f) == 1) {
    iVar29 = 0x3f;
  }
  uVar42 = iVar29 + (uVar36 - 1 & 0x3f);
  *(char *)puStack_a8 = (char)uVar42;
  *(uint8_t *)((int64_t)puStack_a8 + (uint64_t)uVar42) = auVar48[0];
  iVar29 = *(int *)(in_stack_00000028 + 0x2c);
  *(int *)(in_stack_00000028 + 0x2c) = iVar29 + 1;
  *(int *)(lVar38 + (uint64_t)uVar42 * 4) = iVar29;
  iVar29 = (int)uStack_c8;
  if (lVar10 == 0) {
    uVar27 = 3;
  }
  else {
    puStack_a8 = (uint64_t *)((int64_t)in_R10 - 3U);
    puVar1 = (uint64_t *)((int64_t)in_R10 - 7);
    puStack_98 = puVar24 + 1;
    lStack_d0 = lStack_88 + 8;
    uVar20 = 3;
    lVar38 = 0;
    do {
      uVar42 = auStack_1d8[lVar38];
      puVar35 = (uint64_t *)(lStack_88 + (uint64_t)uVar42);
      if (*(int *)((uVar20 - 3) + (int64_t)puVar35) == *(int *)((int64_t)puVar24 + (uVar20 - 3)))
      {
        if (puVar24 < puVar1) {
          if (*puVar35 == *puVar24) {
            puVar35 = (uint64_t *)(lStack_88 + 8 + (uint64_t)uVar42);
            lVar32 = 8;
            puVar26 = puStack_98;
            if (puStack_98 < puVar1) {
LAB_7fffa5475a30:
              if (*puVar35 == *puVar26) goto code_r0x7fffa5475a3c;
              uVar36 = 0;
              for (uVar27 = *puVar26 ^ *puVar35; (uVar27 & 1) == 0;
                  uVar27 = uVar27 >> 1 | 0x8000000000000000) {
                uVar36 = uVar36 + 1;
              }
              uVar27 = (uint64_t)(uVar36 >> 3) + lVar32;
              goto joined_r0x7fffa5475a64;
            }
            goto LAB_7fffa547592a;
          }
          uVar36 = 0;
          for (uVar27 = *puVar24 ^ *puVar35; (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x8000000000000000) {
            uVar36 = uVar36 + 1;
          }
          uVar27 = (uint64_t)(uVar36 >> 3);
        }
        else {
          puVar26 = puVar24;
LAB_7fffa547592a:
          if (puVar26 < (uint64_t *)((int64_t)in_R10 - 3U)) {
            bVar9 = (uint32_t)*puVar35 == (uint32_t)*puVar26;
            if (0x200122961ffU - in_stack_00000030 <= (uint64_t)~(uVar16 * 0x2e09d881)) {
              bVar9 = (uint32_t)*puVar26 < (uint32_t)*puVar35;
            }
            if (bVar9) {
              puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
              puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
            }
          }
          if ((puVar26 < (uint64_t *)((int64_t)in_R10 - 1U)) &&
             ((short)*puVar35 == (short)*puVar26)) {
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
            puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
          }
          if (puVar26 < in_R10) {
            puVar26 = (uint64_t *)
                      ((int64_t)puVar26 + (uint64_t)((char)*puVar35 == (char)*puVar26));
          }
          uVar27 = (int64_t)puVar26 - (int64_t)puVar24;
        }
joined_r0x7fffa5475a64:
        if (uVar20 < uVar27) {
          *puStack_b0 = (uint64_t)((iVar29 + 3) - uVar42);
          uVar20 = uVar27;
          if ((uint64_t *)((int64_t)puVar24 + uVar27) == in_R10) break;
        }
      }
      lVar38 = lVar38 + 1;
      bVar9 = lVar38 <= lVar10;
      if ((~(uVar16 * -0x2d18509c) << 0x13 | ~(uVar16 * -0x2d18509c) >> 0xd) == 0x86df58dd) {
        bVar9 = lVar38 == lVar10;
      }
      uVar27 = uVar20;
    } while (!bVar9);
  }
  lVar38 = *plVar7;
  lVar10 = plVar7[1];
  uVar42 = iVar39 + iVar19;
  puVar1 = (uint64_t *)(lStack_88 + uVar28);
  bVar9 = (int)uVar42 < 0;
  if ((int64_t)(int)(uVar16 * 0x66c1a832) != 0xc8f6feaa) {
    bVar9 = uVar42 == (uVar23 + 0x9de90 & 0xffff);
  }
  iVar39 = ((int)lVar38 - (int)lVar10) - uVar40;
  uVar40 = *(uint32_t *)(plVar7[0xe] + 0xc + uVar17 * 0x10);
  puStack_a8 = (uint64_t *)0x0;
  if (!bVar9) {
    puVar35 = (uint64_t *)((int64_t)puVar24 + 4);
    puStack_a8 = (uint64_t *)0x3;
    if (uVar42 < 3) {
      puStack_a8 = (uint64_t *)(uint64_t)uVar42;
    }
    lVar32 = uVar28 + lStack_88 + 8;
    uVar20 = 0;
    do {
      uVar40 = *(uint32_t *)(uVar17 * 0x10 + plVar7[0xe] + uVar20 * 4);
      uVar33 = (uint64_t)uVar40;
      if (uVar33 == 0) goto LAB_7fffa5476584;
      if (*(uint32_t *)(lVar10 + uVar33) == (uint32_t)*puVar24) {
        puVar34 = (uint64_t *)((uint32_t *)(lVar10 + uVar33) + 1);
        puVar26 = (uint64_t *)((lVar38 - (int64_t)puVar34) + (int64_t)puVar35);
        if (in_R10 <= puVar26) {
          puVar26 = in_R10;
        }
        puVar12 = puVar34;
        puVar18 = puVar35;
        if (puVar35 < (uint64_t *)((int64_t)puVar26 - 7U)) {
          if (*puVar34 == *puVar35) {
            lVar14 = lVar10 + 0xc + uVar33;
            lVar11 = 0;
            do {
              puVar18 = (uint64_t *)((int64_t)puVar24 + lVar11 + 0xc);
              if ((uint64_t *)((int64_t)puVar26 - 7U) <= puVar18) {
                puVar12 = (uint64_t *)(lVar14 + lVar11);
                goto LAB_7fffa5475d48;
              }
              uVar33 = *(uint64_t *)(lVar14 + lVar11);
              lVar11 = lVar11 + 8;
            } while (uVar33 == *puVar18);
            uVar13 = 0;
            for (uVar33 = *puVar18 ^ uVar33; (uVar33 & 1) == 0;
                uVar33 = uVar33 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar33 = uVar13 | 3;
            if ((int64_t)(int)(uVar16 * 0x7d9829fe + 0x2850a088) <=
                (int64_t)
                (uint64_t)
                ((0x5e2cf991U >> (bVar21 & 0x1f) | 0x5e2cf991 << 0x20 - (bVar21 & 0x1f)) +
                0x8001fce0)) {
              uVar33 = uVar13 >> 3 & 0x1fffffff;
            }
            uVar33 = uVar33 + lVar11;
          }
          else {
            uVar36 = 0;
            for (uVar33 = *puVar34 ^ *puVar35; (uVar33 & 1) == 0;
                uVar33 = uVar33 >> 1 | 0x8000000000000000) {
              uVar36 = uVar36 + 1;
            }
            uVar33 = (uint64_t)(uVar36 >> 3);
          }
        }
        else {
LAB_7fffa5475d48:
          if ((puVar18 < (uint64_t *)((int64_t)puVar26 - 3U)) &&
             ((uint32_t)*puVar12 == (uint32_t)*puVar18)) {
            puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
            puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
          }
          if ((puVar18 < (uint64_t *)((int64_t)puVar26 - 1U)) &&
             ((short)*puVar12 == (short)*puVar18)) {
            puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
          }
          if (puVar18 < puVar26) {
            puVar18 = (uint64_t *)
                      ((int64_t)puVar18 + (uint64_t)((char)*puVar12 == (char)*puVar18));
          }
          uVar33 = (int64_t)puVar18 - (int64_t)puVar35;
        }
        if ((int64_t)puVar34 + uVar33 == lVar38) {
          puVar26 = (uint64_t *)((int64_t)puVar35 + uVar33);
          puVar34 = puVar26;
          puVar18 = puVar1;
          if (puVar26 < (uint64_t *)((int64_t)in_R10 + -7)) {
            if (*puVar1 == *puVar26) {
              lVar14 = 0;
              do {
                puVar34 = (uint64_t *)((int64_t)puVar24 + lVar14 + uVar33 + 0xc);
                if ((uint64_t *)((int64_t)in_R10 + -7) <= puVar34) {
                  puVar18 = (uint64_t *)(lVar14 + lVar32);
                  goto LAB_7fffa5475e53;
                }
                uVar13 = *(uint64_t *)(lVar32 + lVar14);
                lVar14 = lVar14 + 8;
              } while (uVar13 == *puVar34);
              uVar36 = 0;
              for (uVar13 = *puVar34 ^ uVar13; (uVar13 & 1) == 0;
                  uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                uVar36 = uVar36 + 1;
              }
              uVar13 = (uint64_t)(uVar36 >> 3) + lVar14;
            }
            else {
              uVar36 = 0;
              for (uVar13 = *puVar26 ^ *puVar1; (uVar13 & 1) == 0;
                  uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                uVar36 = uVar36 + 1;
              }
              uVar13 = (uint64_t)(uVar36 >> 3);
            }
          }
          else {
LAB_7fffa5475e53:
            if ((puVar34 < (uint64_t *)((int64_t)in_R10 - 3U)) &&
               ((uint32_t)*puVar18 == (uint32_t)*puVar34)) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
              puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
            }
            if ((puVar34 < (uint64_t *)((int64_t)in_R10 - 1U)) &&
               ((short)*puVar18 == (short)*puVar34)) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
              puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
            }
            if (puVar34 < in_R10) {
              puVar34 = (uint64_t *)
                        ((int64_t)puVar34 + (uint64_t)((char)*puVar18 == (char)*puVar34));
            }
            uVar13 = (int64_t)puVar34 - (int64_t)puVar26;
          }
          uVar33 = uVar33 + uVar13;
        }
        uVar33 = uVar33 + 4;
        if (uVar27 < uVar33) {
          *puStack_b0 = (uint64_t)((iVar29 + iVar39 + 3) - uVar40);
          uVar27 = uVar33;
          if ((uint64_t *)((int64_t)puVar24 + uVar33) == in_R10) goto LAB_7fffa5476587;
        }
      }
      uVar20 = uVar20 + 1;
    } while ((uint64_t *)uVar20 != puStack_a8);
    uVar40 = *(uint32_t *)(plVar7[0xe] + (uStack_c0 | 3) * 4);
  }
  uVar36 = uVar42 - (int)puStack_a8;
  if ((uVar40 & 0xff) <= uVar42 - (int)puStack_a8) {
    uVar36 = uVar40 & 0xff;
  }
  if (uVar36 == 0) {
LAB_7fffa5476584:
    uVar33 = uVar27;
LAB_7fffa5476587:
    return (uVar33 << 1 | (uint64_t)((int64_t)uVar33 < 0)) ^ (uVar33 << 3 | uVar33 >> 0x3d);
  }
  if (7 < uVar36) {
    uVar17 = 0;
    do {
      uVar17 = uVar17 + 8;
      puVar24 = puStack_60;
    } while (uVar17 != (uVar36 & 0xf8));
  }
  if ((uint64_t)(uVar36 & 7) != 0) {
    uVar17 = 0;
    do {
      uVar17 = uVar17 + 1;
    } while ((uVar36 & 7) != uVar17);
  }
  uVar17 = (uint64_t)(uVar40 >> 8);
  uVar40 = (uint32_t)*puVar24;
  iVar19 = -iVar39;
  if (((uVar23 ^ 0x2f5e7276) << 0x18 | (uVar23 ^ 0x2f5e7276) >> 8) == 0x63d7753) {
    iVar19 = iVar39;
  }
  iVar39 = iVar29 + 3;
  if (0xe7652dfc < ((uVar23 + 0xaf3e4f52) * 0x40000000 | uVar23 + 0xaf3e4f52 >> 2)) {
    iVar39 = iVar29 + -3;
  }
  puVar35 = (uint64_t *)((int64_t)puVar24 + 4);
  lVar32 = uVar28 + lStack_88 + 8;
  uVar42 = 0;
  puVar26 = puVar24;
  do {
    uVar37 = *(uint32_t *)(plVar7[0x10] + uVar17 * 4);
    if (*(uint32_t *)(lVar10 + (uint64_t)uVar37) == uVar40) {
      lVar14 = (uint64_t)uVar37 + lVar10;
      puVar34 = (uint64_t *)(lVar14 + 4);
      puVar18 = (uint64_t *)((lVar38 - (int64_t)puVar34) + (int64_t)puVar35);
      if (in_R10 <= puVar18) {
        puVar18 = in_R10;
      }
      puVar15 = puVar34;
      puVar12 = puVar35;
      if (puVar35 < (uint64_t *)((int64_t)puVar18 - 7U)) {
        if (*puVar34 == *puVar35) {
          lVar11 = 0xc;
code_r0x7fffa5476202:
          puVar12 = (uint64_t *)((int64_t)puVar26 + lVar11);
          if (puVar12 < (uint64_t *)((int64_t)puVar18 - 7U)) {
            if (*(uint64_t *)(lVar14 + lVar11) == *puVar12) goto code_r0x7fffa5476229;
            uVar25 = 0;
            for (uVar20 = *puVar12 ^ *(uint64_t *)(lVar14 + lVar11); (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar25 = uVar25 + 1;
            }
            uVar33 = ((uint64_t)(uVar25 >> 3) + lVar11) - 4;
            goto LAB_7fffa54763ba;
          }
          puVar15 = (uint64_t *)(lVar14 + lVar11);
          goto LAB_7fffa5476276;
        }
        uVar25 = 0;
        for (uVar20 = *puVar35 ^ *puVar34; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar25 = uVar25 + 1;
        }
        uVar31 = uVar25 << 3;
        if (uVar23 != 0xbc900cd9) {
          uVar31 = uVar25 >> 3;
        }
        uVar33 = (uint64_t)uVar31;
      }
      else {
LAB_7fffa5476276:
        bVar9 = puVar12 == (uint64_t *)((int64_t)puVar18 - 3U);
        if ((0x7e2f10b8 << (bVar21 & 0x1f) | 0x7e2f10b8U >> 0x20 - (bVar21 & 0x1f)) <=
            (0x7942655eU >> (bVar21 & 0x1f) | 0x7942655e << 0x20 - (bVar21 & 0x1f))) {
          bVar9 = puVar12 < (uint64_t *)((int64_t)puVar18 - 3U);
        }
        if ((bVar9) && ((uint32_t)*puVar15 == (uint32_t)*puVar12)) {
          puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
          puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
        }
        if (puVar12 < (uint64_t *)((int64_t)puVar18 - 1U)) {
          bVar9 = (uint16_t)*puVar15 == (uint16_t)*puVar12;
          if (uVar16 * -0x1a3c24f9 + 0xb967766b < uVar23 + 0x13a046d1) {
            bVar9 = (uint16_t)*puVar12 < (uint16_t)*puVar15;
          }
          if (bVar9) {
            puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
            puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
          }
        }
        if (puVar12 < puVar18) {
          uVar28 = (uint64_t)((char)*puVar15 == (char)*puVar12);
          uVar20 = -uVar28;
          if ((int64_t)(int)(-0x325e1b1 - uVar23) <
              (int64_t)(uint64_t)((uVar23 ^ 0x8e5b1d19) + 0x3fffff6c)) {
            uVar20 = uVar28;
          }
          puVar12 = (uint64_t *)((int64_t)puVar12 + uVar20);
        }
        uVar33 = (int64_t)puVar12 - (int64_t)puVar35;
        puVar26 = puStack_60;
      }
LAB_7fffa54763ba:
      if ((int64_t)puVar34 + uVar33 == lVar38) {
        puVar12 = (uint64_t *)((int64_t)puVar35 + uVar33);
        puVar18 = puVar1;
        puVar34 = puVar12;
        if (puVar12 < (uint64_t *)((int64_t)in_R10 - 7U)) {
          if (*puVar1 == *puVar12) {
            lVar14 = 0;
            do {
              puVar34 = (uint64_t *)((int64_t)puVar24 + lVar14 + uVar33 + 0xc);
              if ((uint64_t *)((int64_t)in_R10 - 7U) <= puVar34) {
                puVar18 = (uint64_t *)(lVar14 + lVar32);
                goto LAB_7fffa547648e;
              }
              uVar20 = *(uint64_t *)(lVar32 + lVar14);
              lVar14 = lVar14 + 8;
            } while (uVar20 == *puVar34);
            uVar25 = 0;
            for (uVar20 = uVar20 ^ *puVar34; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar25 = uVar25 + 1;
            }
            uVar20 = (uint64_t)(uVar25 >> 3) + lVar14;
          }
          else {
            uVar25 = 0;
            for (uVar20 = *puVar1 ^ *puVar12; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar25 = uVar25 + 1;
            }
            uVar20 = (uint64_t)(uVar25 >> 3);
          }
        }
        else {
LAB_7fffa547648e:
          if ((puVar34 < (uint64_t *)((int64_t)in_R10 - 3U)) && ((uint32_t)*puVar18 == (uint32_t)*puVar34)
             ) {
            puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
          }
          if ((puVar34 < (uint64_t *)((int64_t)in_R10 - 1U)) &&
             ((short)*puVar18 == (short)*puVar34)) {
            puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
            puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
          }
          if (puVar34 < in_R10) {
            puVar34 = (uint64_t *)
                      ((int64_t)puVar34 + (uint64_t)((char)*puVar18 == (char)*puVar34));
          }
          uVar20 = (int64_t)puVar34 - (int64_t)puVar12;
          if (uVar23 != 0x12292170) {
            uVar20 = (int64_t)puVar34 * (int64_t)puVar12;
          }
        }
        uVar33 = uVar33 + uVar20;
      }
      uVar33 = uVar33 + 4;
      if (uVar27 < uVar33) {
        *puStack_b0 = (uint64_t)((iVar39 + iVar19) - uVar37);
        if ((uint64_t *)((int64_t)puVar26 + uVar33) == in_R10) goto LAB_7fffa5476587;
        uVar40 = (uint32_t)*puVar26;
        uVar27 = uVar33;
      }
    }
    uVar42 = uVar42 + ((int64_t)(int)((uVar23 + 0x7e79c5b4) * 0x400 | uVar23 + 0x7e79c5b4 >> 0x16)
                      < (int64_t)(uint64_t)(uVar23 + 0x794af48b));
    if (uVar42 == uVar36) goto LAB_7fffa5476584;
    uVar17 = uVar17 + 1;
  } while( true );
code_r0x7fffa5475a3c:
  puVar26 = puVar26 + 1;
  lVar32 = lVar32 + 8;
  puVar35 = puVar35 + 1;
  if (puVar1 <= puVar26) goto LAB_7fffa547592a;
  goto LAB_7fffa5475a30;
code_r0x7fffa5476229:
  lVar11 = lVar11 + 8;
  goto code_r0x7fffa5476202;
}


// ============================================================================
// Function : FUN_7fffa54765d0  |  RVA: 0xd065d0  |  Size: 538 bytes
// Callers  : FUN_7fffa4ecda70@0x75da70, FUN_7fffa4ed1810@0x761810
// Callees  : FUN_7fffa5488ca0@0xd18ca0, FUN_7fffa560e390@0xe9e390, FUN_7fffa55d8480@0xe68480, FUN_7fffa5453ab0@0xce3ab0
// ============================================================================
uint64_t FUN_7fffa54765d0(int *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  uint32_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  int *piStack_58;
  uint64_t uStack_50;
  
  FUN_7fffa560e390(param_3);
  lVar1 = param_4[1];
  puVar2 = (uint32_t *)param_4[7];
  uVar10 = *param_4 - lVar1;
  uVar8 = *(uint32_t *)(param_4 + 9);
  if ((*(uint8_t *)(param_1 + 1) & 0x66) == 0) {
    piStack_58 = param_1;
    uStack_50 = param_3;
    if (uVar8 < *puVar2) {
      do {
        if (((puVar2[(uint64_t)uVar8 * 4 + 1] <= uVar10) &&
            (uVar10 < puVar2[(uint64_t)uVar8 * 4 + 2])) && (puVar2[(uint64_t)uVar8 * 4 + 4] != 0))
        {
          if (puVar2[(uint64_t)uVar8 * 4 + 3] != 1) {
            iVar3 = (*(code *)((uint64_t)puVar2[(uint64_t)uVar8 * 4 + 3] + lVar1))
                              (&piStack_58,param_2);
            if (iVar3 < 0) {
              return 0;
            }
            if (iVar3 < 1) goto LAB_7fffa54766eb;
          }
          if ((*param_1 == -0x1f928c9d) &&
             (iVar3 = FUN_7fffa55d8480(&PTR_FUN_7fffa56b32a8), iVar3 != 0)) {
            FUN_7fffa5488e60(param_1,1);
          }
          FUN_7fffa5453ab0((uint64_t)puVar2[(uint64_t)uVar8 * 4 + 4] + lVar1,param_2,1);
          (*(code *)&DAT_7ff8504cda30)
                    (param_2,(uint64_t)puVar2[(uint64_t)uVar8 * 4 + 4] + lVar1,param_1,*param_1,
                     param_4[5],param_4[8]);
          FUN_7fffa5488ca0();
        }
LAB_7fffa54766eb:
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar2);
    }
  }
  else {
    uVar9 = *puVar2;
    if (uVar8 < uVar9) {
      uVar7 = param_4[4] - lVar1;
      do {
        uVar4 = (uint64_t)uVar8;
        if ((puVar2[uVar4 * 4 + 1] <= uVar10) && (uVar10 < puVar2[uVar4 * 4 + 2])) {
          if ((param_1[1] & 0x20U) != 0) {
            uVar6 = 0;
            if (uVar9 != 0) {
              do {
                if ((((puVar2[uVar6 * 4 + 1] <= uVar7) && (uVar7 < puVar2[uVar6 * 4 + 2])) &&
                    (puVar2[uVar6 * 4 + 4] == puVar2[uVar4 * 4 + 4])) &&
                   (puVar2[uVar6 * 4 + 3] == puVar2[uVar4 * 4 + 3])) break;
                uVar5 = (int)uVar6 + 1;
                uVar6 = (uint64_t)uVar5;
              } while (uVar5 < uVar9);
            }
            if ((uint32_t)uVar6 != *puVar2) {
              return 1;
            }
          }
          if (puVar2[uVar4 * 4 + 4] == 0) {
            *(uint32_t *)(param_4 + 9) = uVar8 + 1;
            (*(code *)((uint64_t)puVar2[uVar4 * 4 + 3] + lVar1))(1);
          }
          else if ((uVar7 == puVar2[uVar4 * 4 + 4]) && ((param_1[1] & 0x20U) != 0)) {
            return 1;
          }
        }
        uVar9 = *puVar2;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa54767f0  |  RVA: 0xd067f0  |  Size: 901 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa54767f0(int param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                     uint16_t *param_5)

{
  int iVar1;
  int64_t in_RAX;
  uint8_t bVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int iVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  int iVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  int iVar11;
  int iVar12;
  uint32_t uVar13;
  uint16_t *puVar14;
  uint32_t in_R10D;
  uint32_t uVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  uint32_t in_R11D;
  int iVar18;
  int iVar19;
  bool bVar20;
  
  uVar3 = ~(param_1 * -0x7ffffff);
  uVar3 = (uVar3 << 0x19 | uVar3 >> 7) ^ (uVar3 << 8 | uVar3 >> 0x18) ^ uVar3;
  uVar16 = (uVar3 << 0x12 | uVar3 >> 0xe) ^ (uVar3 << 0x10 | uVar3 >> 0x10);
  uVar4 = uVar3 ^ uVar16;
  uVar4 = (uVar4 << 0x1c | uVar4 >> 4) + 1;
  uVar17 = 0x200;
  if (uVar16 != uVar3) {
    uVar17 = (uint64_t)((uVar4 * in_R11D + 6 >> 3) + 3);
  }
  if (uVar4 == 0) {
    return;
  }
  uVar9 = param_4 * 0x521479ca4b4e1d53;
  iVar19 = 1 << ((uint8_t)in_R11D & 0x1f);
  uVar3 = in_R11D - 5;
  puVar14 = (uint16_t *)((int64_t)param_5 + (uVar9 - 2));
  iVar5 = 4;
  uVar7 = 0;
  bVar20 = true;
  uVar16 = 1 << (in_R11D & 0x1f) | 1;
  iVar18 = in_R11D + 1;
  do {
    if (!bVar20) {
      uVar15 = (uint32_t)uVar7;
      while (uVar10 = uVar16, *(short *)(in_RAX + uVar7 * 2) == 0) {
        uVar7 = uVar7 + 1;
        if (uVar4 == uVar7) goto LAB_7fffa5476af0;
      }
      uVar6 = (uint32_t)uVar7;
      if (uVar4 == uVar6) break;
      if (uVar15 + 0x18 <= uVar6) {
        uVar13 = 0xffff << ((uint8_t)iVar5 & 0x1f);
        uVar10 = uVar15 + 0x18;
        do {
          uVar15 = uVar10;
          if ((uVar9 < uVar17) && (puVar14 < param_5)) {
            return;
          }
          uVar10 = uVar3 + uVar13;
          if (in_R10D == 0xae362c90) {
            uVar10 = uVar13 ^ uVar3;
          }
          *param_5 = (short)uVar10;
          uVar3 = uVar10 >> 0x10;
          param_5 = param_5 + 1;
          uVar10 = uVar15 + 0x18;
        } while (uVar15 + 0x18 <= uVar6);
      }
      uVar10 = uVar15 + 3;
      while (uVar10 <= uVar6) {
        uVar3 = uVar3 + (3 << ((uint8_t)iVar5 & 0x1f));
        iVar5 = iVar5 + 2;
        uVar10 = uVar15 + 6;
        uVar15 = uVar15 + 3;
      }
      uVar3 = (uVar6 - uVar15 << ((uint8_t)iVar5 & 0x1f)) + uVar3;
      if (iVar5 < 0xf) {
        iVar5 = iVar5 + 2;
      }
      else {
        if ((uVar9 < uVar17) && (puVar14 < param_5)) {
          return;
        }
        iVar5 = iVar5 + -0xe;
        *param_5 = (short)uVar3;
        uVar3 = uVar3 >> 0x10;
        param_5 = param_5 + 1;
      }
      uVar7 = uVar7 & 0xffffffff;
    }
    iVar1 = ~uVar16 + iVar19 * 2;
    iVar11 = (int)*(short *)(in_RAX + uVar7 * 2);
    iVar12 = 0;
    if (iVar19 <= iVar11 + 1) {
      iVar12 = iVar1;
    }
    iVar8 = iVar11 + iVar12 + 1;
    bVar2 = (uint8_t)iVar5;
    bVar20 = iVar8 != 1;
    iVar12 = -iVar11;
    if (-iVar11 < 0) {
      iVar12 = iVar11;
    }
    uVar10 = uVar16 - iVar12;
    if (uVar10 == 0 || (int)uVar16 < iVar12) {
      return;
    }
    iVar12 = iVar18;
    if ((int)uVar10 < iVar19) {
      do {
        iVar12 = iVar12 + -1;
        iVar19 = iVar19 >> 1;
      } while ((int)uVar10 < iVar19);
    }
    iVar5 = (iVar5 + iVar18) - (uint32_t)(iVar8 < iVar1);
    uVar3 = uVar3 + (iVar8 << (bVar2 & 0x1f));
    if ((int)((in_R10D ^ 0x730a799) & 0xffff) < iVar5) {
      if ((uVar9 < uVar17) && (puVar14 < param_5)) {
        return;
      }
      *param_5 = (short)uVar3;
      uVar3 = uVar3 >> 0x10;
      iVar5 = iVar5 + -0x10;
      param_5 = param_5 + 1;
    }
    uVar16 = (int)uVar7 + 1;
    uVar7 = (uint64_t)uVar16;
    if (uVar4 <= uVar16) break;
    uVar16 = uVar10;
    iVar18 = iVar12;
  } while (uVar10 != 1);
LAB_7fffa5476af0:
  if (uVar10 != 1) {
    return;
  }
  if ((uVar9 < uVar17) && (puVar14 < param_5)) {
    return;
  }
  *param_5 = (short)uVar3;
  return;
}


// ============================================================================
// Function : FUN_7fffa5476b88  |  RVA: 0xd06b88  |  Size: 1 bytes
// Callers  : FUN_7fffa5130768@0x9c0768, FUN_7fffa565d380@0xeed380, FUN_7fffa507ecd4@0x90ecd4, FUN_7fffa517bdb8@0xa0bdb8, FUN_7fffa55ce1b8@0xe5e1b8, FUN_7fffa56960b0@0xf260b0, FUN_7fffa5609524@0xe99524, FUN_7fffa560e038@0xe9e038
// Callees  : none
// ============================================================================
void FUN_7fffa5476b88(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5476bb0  |  RVA: 0xd06bb0  |  Size: 2246 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5476bb0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint8_t bVar9;
  int iVar10;
  uint8_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint64_t *puVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint64_t in_R10;
  uint64_t uVar21;
  uint32_t in_R11D;
  uint32_t uVar22;
  uint64_t uVar23;
  uint32_t uVar24;
  uint64_t uVar25;
  int64_t lVar26;
  int iVar27;
  int64_t lVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  char cVar32;
  uint8_t uVar35;
  char cVar36;
  char cVar37;
  uint8_t uVar38;
  char cVar39;
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint32_t auStack_178 [67];
  uint32_t uStack_6c;
  int64_t lStack_68;
  uint32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t *puStack_48;
  
  puStack_48 = param_2;
  param_1 = (param_1 << 0x27 | param_1 >> 0x19) ^
            (param_1 << 1 | (uint64_t)((int64_t)param_1 < 0)) ^ param_1;
  param_1 = (param_1 << 2 | param_1 >> 0x3e) ^ (param_1 << 0xe | param_1 >> 0x32) ^ param_1;
  uStack_5c = in_R11D | 1;
  param_1 = (param_1 << 0x1c | param_1 >> 0x24) ^ (param_1 << 4 | param_1 >> 0x3c) ^ param_1;
  param_1 = (param_1 << 8 | param_1 >> 0x38) ^ (param_1 << 0x38 | param_1 >> 8) ^ param_1;
  uVar20 = (in_R10 << 0x35 | in_R10 >> 0xb) ^ (in_R10 << 1 | (uint64_t)((int64_t)in_R10 < 0)) ^
           in_R10;
  uVar20 = (uVar20 << 0x2a | uVar20 >> 0x16) ^ (uVar20 << 2 | uVar20 >> 0x3e) ^ uVar20;
  uVar20 = (uVar20 << 0x14 | uVar20 >> 0x2c) ^ (uVar20 << 4 | uVar20 >> 0x3c) ^ uVar20;
  uVar20 = (uVar20 << 0x28 | uVar20 >> 0x18) ^ (uVar20 << 8 | uVar20 >> 0x38) ^ uVar20;
  uVar24 = 6;
  if (*(uint32_t *)(uVar20 + 0x10c) < 6) {
    uVar24 = *(uint32_t *)(uVar20 + 0x10c);
  }
  lVar6 = *(int64_t *)(uVar20 + 8);
  iVar27 = 1 << ((uint8_t)uVar24 & 0x1f);
  uVar19 = 1 << (*(uint8_t *)(uVar20 + 0x100) & 0x1f);
  uVar24 = *(uint32_t *)(uVar20 + 0x1c);
  uStack_50 = (int64_t)param_3 - lVar6;
  uVar16 = (uint32_t)uStack_50;
  uVar17 = uVar16 - uVar19;
  if (uVar16 - uVar24 <= uVar19) {
    uVar17 = uVar24;
  }
  uStack_58 = *(uint64_t *)(uVar20 + 0x60);
  lVar28 = *(int64_t *)(uVar20 + 0x38);
  if (*(uint32_t *)(uVar20 + 0x28) != ((0x7430 - in_R11D ^ 0x7408) & 0xffff)) {
    uVar17 = uVar24;
  }
  lVar7 = *(int64_t *)(uVar20 + 0x70);
  cVar32 = (char)*(uint32_t *)(uVar20 + 0x34);
  if (*(uint32_t *)(uVar20 + 300) == (in_R11D - 0x28 & 0xffff)) {
    uVar24 = *(uint32_t *)(uVar20 + 0x2c);
    uVar25 = (uint64_t)uVar24;
    uStack_6c = uVar17;
    lVar12 = lVar28;
    lVar26 = lVar7;
    if ((in_R11D - 0xfea8 & 0xffff) < uVar16 - uVar24) {
      if (uVar24 < 0xffffffa0) {
        uVar13 = uVar25 + 0x5f;
        while( true ) {
          uVar21 = (uint64_t)((uint32_t)uVar25 & 7);
          bVar9 = (uint8_t)in_R11D & 0x1f;
          uVar24 = *(uint32_t *)(uVar20 + 0x40 + uVar21 * 4);
          uVar22 = uVar24 >> 2;
          uVar19 = uVar22 & 0xffffffc0;
          if ((0xfe02c47fU >> bVar9 | -0x1fd3b81 << 0x20 - bVar9) <
              (in_R11D + 0x274fedbd ^ 0xaea3caeb) + 0x2c9b6b60) {
            uVar19 = uVar22 + 0x3fffffc0;
          }
          uVar23 = (uint64_t)uVar19;
          *(int *)(uVar20 + 0x40 + uVar21 * 4) =
               (int)((*(int64_t *)(lVar6 + 8 + uVar25) * -0x30e4432340650000 ^
                     *(uint64_t *)(uVar20 + 0x60)) >> (0x38U - cVar32 & 0x3f));
          lVar12 = 0;
          if ((*(uint8_t *)(lVar28 + uVar23) & 0x3f) == 1) {
            lVar12 = 0x3f;
          }
          lVar12 = lVar12 + (uint64_t)(*(uint8_t *)(lVar28 + uVar23) - 1 & 0x3f);
          *(char *)(lVar28 + uVar23) = (char)lVar12;
          *(char *)(lVar28 + uVar23 + lVar12) = (char)uVar24;
          *(uint32_t *)(lVar7 + uVar23 * 4 + lVar12 * 4) = (uint32_t)uVar25;
          if (uVar13 == uVar25) break;
          uVar25 = uVar25 + 1;
        }
        lVar12 = *(int64_t *)(uVar20 + 0x38);
        lVar26 = *(int64_t *)(uVar20 + 0x70);
      }
      uVar24 = uVar16 - 0x20;
      uVar25 = (uint64_t)uVar24;
      uVar22 = ((int)((int64_t)param_3 + 1U) - (int)(lVar6 + uVar25)) + 1;
      uVar19 = 8;
      if (uVar22 < 8) {
        uVar19 = uVar22;
      }
      uVar22 = 0;
      if (lVar6 + uVar25 <= (int64_t)param_3 + 1U) {
        uVar22 = uVar19;
      }
      if (uVar24 < (uVar22 + uVar16) - 0x20) {
        uVar13 = *(uint64_t *)(uVar20 + 0x60);
        uVar5 = *(uint32_t *)(uVar20 + 0x34);
        uVar21 = uVar25;
        while( true ) {
          uVar22 = uVar22 - 1;
          *(int *)(uVar20 + 0x40 + (uint64_t)((uint32_t)uVar21 & 7) * 4) =
               (int)((*(int64_t *)(lVar6 + uVar21) * -0x30e4432340650000 ^ uVar13) >>
                    (0x38U - (char)uVar5 & 0x3f));
          if (uVar22 == 0) break;
          uVar21 = uVar21 + 1;
        }
      }
    }
    if (uVar24 < uVar16) {
      lVar8 = *(int64_t *)(uVar20 + 8);
      uVar5 = *(uint32_t *)(uVar20 + 0x34);
      do {
        uVar13 = (uint64_t)((uint32_t)uVar25 & 7);
        uVar24 = *(uint32_t *)(uVar20 + 0x40 + uVar13 * 4);
        *(int *)(uVar20 + 0x40 + uVar13 * 4) =
             (int)((*(int64_t *)(lVar8 + 8 + uVar25) * -0x30e4432340650000 ^
                   *(uint64_t *)(uVar20 + 0x60)) >> (0x38U - (char)uVar5 & 0x3f));
        uVar13 = (uint64_t)(uVar24 >> 2 & 0xffffffc0);
        lVar15 = 0x3f;
        if ((*(uint8_t *)(lVar12 + uVar13) & 0x3f) != 1) {
          lVar15 = 0;
        }
        lVar15 = (uint64_t)(*(uint8_t *)(lVar12 + uVar13) - 1 & 0x3f) + lVar15;
        *(char *)(lVar12 + uVar13) = (char)lVar15;
        *(char *)(lVar12 + uVar13 + lVar15) = (char)uVar24;
        *(uint32_t *)(lVar26 + uVar13 * 4 + lVar15 * 4) = (uint32_t)uVar25;
        uVar25 = uVar25 + 1;
      } while ((uStack_50 & 0xffffffff) != uVar25);
    }
    *(uint32_t *)(uVar20 + 0x2c) = uVar16;
    uVar25 = (uint64_t)*(uint32_t *)(uVar20 + 0x40 + (uint64_t)(uVar16 & 7) * 4);
    *(int *)(uVar20 + 0x40 + (uint64_t)(uVar16 & 7) * 4) =
         (int)((*(int64_t *)(lVar6 + 8 + (uStack_50 & 0xffffffff)) * -0x30e4432340650000 ^
               uStack_58) >> (0x38U - cVar32 & 0x3f));
  }
  else {
    uVar25 = (uStack_58 ^ *param_3 * -0x30e4432340650000) >> (0x38U - cVar32 & 0x3f);
    *(uint32_t *)(uVar20 + 0x2c) = uVar16;
  }
  uVar13 = (uint64_t)((uint32_t)(uVar25 >> 2) & 0x3fffffc0);
  uVar11 = (uint8_t)(uVar25 >> 0x10);
  uVar38 = (uint8_t)(uVar25 >> 0x18);
  uVar35 = (uint8_t)(uVar25 >> 8);
  auVar33._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar38,uVar38),uVar11),CONCAT14(uVar11,(int)uVar25)) >> 0x20
            );
  auVar33[3] = uVar35;
  auVar33[2] = uVar35;
  auVar33[0] = (uint8_t)uVar25;
  auVar33[1] = auVar33[0];
  auVar33._8_8_ = 0;
  auVar34 = pshuflw(auVar33,auVar33,0);
  lVar7 = lVar7 + uVar13 * 4;
  *(int *)(uVar20 + 0x68) = *(int *)(uVar20 + 0x68) + (int)uVar25;
  bVar9 = *(uint8_t *)(lVar28 + uVar13);
  pcVar1 = (char *)(lVar28 + uVar13);
  pcVar2 = (char *)(lVar28 + 0x10 + uVar13);
  pcVar3 = (char *)(lVar28 + 0x20 + uVar13);
  pcVar4 = (char *)(lVar28 + 0x30 + uVar13);
  cVar32 = auVar34[0];
  auVar29[0] = -(*pcVar2 == cVar32);
  cVar36 = auVar34[1];
  auVar29[1] = -(pcVar2[1] == cVar36);
  cVar37 = auVar34[2];
  auVar29[2] = -(pcVar2[2] == cVar37);
  cVar39 = auVar34[3];
  auVar29[3] = -(pcVar2[3] == cVar39);
  auVar29[4] = -(pcVar2[4] == cVar32);
  auVar29[5] = -(pcVar2[5] == cVar36);
  auVar29[6] = -(pcVar2[6] == cVar37);
  auVar29[7] = -(pcVar2[7] == cVar39);
  auVar29[8] = -(pcVar2[8] == cVar32);
  auVar29[9] = -(pcVar2[9] == cVar36);
  auVar29[10] = -(pcVar2[10] == cVar37);
  auVar29[0xb] = -(pcVar2[0xb] == cVar39);
  auVar29[0xc] = -(pcVar2[0xc] == cVar32);
  auVar29[0xd] = -(pcVar2[0xd] == cVar36);
  auVar29[0xe] = -(pcVar2[0xe] == cVar37);
  auVar29[0xf] = -(pcVar2[0xf] == cVar39);
  auVar31[0] = -(*pcVar3 == cVar32);
  auVar31[1] = -(pcVar3[1] == cVar36);
  auVar31[2] = -(pcVar3[2] == cVar37);
  auVar31[3] = -(pcVar3[3] == cVar39);
  auVar31[4] = -(pcVar3[4] == cVar32);
  auVar31[5] = -(pcVar3[5] == cVar36);
  auVar31[6] = -(pcVar3[6] == cVar37);
  auVar31[7] = -(pcVar3[7] == cVar39);
  auVar31[8] = -(pcVar3[8] == cVar32);
  auVar31[9] = -(pcVar3[9] == cVar36);
  auVar31[10] = -(pcVar3[10] == cVar37);
  auVar31[0xb] = -(pcVar3[0xb] == cVar39);
  auVar31[0xc] = -(pcVar3[0xc] == cVar32);
  auVar31[0xd] = -(pcVar3[0xd] == cVar36);
  auVar31[0xe] = -(pcVar3[0xe] == cVar37);
  auVar31[0xf] = -(pcVar3[0xf] == cVar39);
  auVar30[0] = -(*pcVar4 == cVar32);
  auVar30[1] = -(pcVar4[1] == cVar36);
  auVar30[2] = -(pcVar4[2] == cVar37);
  auVar30[3] = -(pcVar4[3] == cVar39);
  auVar30[4] = -(pcVar4[4] == cVar32);
  auVar30[5] = -(pcVar4[5] == cVar36);
  auVar30[6] = -(pcVar4[6] == cVar37);
  auVar30[7] = -(pcVar4[7] == cVar39);
  auVar30[8] = -(pcVar4[8] == cVar32);
  auVar30[9] = -(pcVar4[9] == cVar36);
  auVar30[10] = -(pcVar4[10] == cVar37);
  auVar30[0xb] = -(pcVar4[0xb] == cVar39);
  auVar30[0xc] = -(pcVar4[0xc] == cVar32);
  auVar30[0xd] = -(pcVar4[0xd] == cVar36);
  auVar30[0xe] = -(pcVar4[0xe] == cVar37);
  auVar30[0xf] = -(pcVar4[0xf] == cVar39);
  auVar34[0] = -(*pcVar1 == cVar32);
  auVar34[1] = -(pcVar1[1] == cVar36);
  auVar34[2] = -(pcVar1[2] == cVar37);
  auVar34[3] = -(pcVar1[3] == cVar39);
  auVar34[4] = -(pcVar1[4] == cVar32);
  auVar34[5] = -(pcVar1[5] == cVar36);
  auVar34[6] = -(pcVar1[6] == cVar37);
  auVar34[7] = -(pcVar1[7] == cVar39);
  auVar34[8] = -(pcVar1[8] == cVar32);
  auVar34[9] = -(pcVar1[9] == cVar36);
  auVar34[10] = -(pcVar1[10] == cVar37);
  auVar34[0xb] = -(pcVar1[0xb] == cVar39);
  auVar34[0xc] = -(pcVar1[0xc] == cVar32);
  auVar34[0xd] = -(pcVar1[0xd] == cVar36);
  auVar34[0xe] = -(pcVar1[0xe] == cVar37);
  auVar34[0xf] = -(pcVar1[0xf] == cVar39);
  uVar25 = (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar34 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar34[0xf] >> 7) << 0xf) |
           (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar30[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar31 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar31[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar29[0xf] >> 7) << 0xf) << 0x10;
  if (uVar25 != 0) {
    uVar25 = uVar25 >> (bVar9 & 0x3f) | uVar25 << 0x40 - (bVar9 & 0x3f);
    lVar12 = 0;
    do {
      iVar10 = 0;
      for (uVar21 = uVar25; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x8000000000000000) {
        iVar10 = iVar10 + 1;
      }
      uVar24 = iVar10 + (uint32_t)bVar9 & 0x3f;
      if (uVar24 != 0) {
        uVar24 = *(uint32_t *)(lVar7 + (uint64_t)uVar24 * 4);
        if (uVar24 < uVar17) goto LAB_7fffa5477259;
        iVar27 = iVar27 + -1;
        auStack_178[lVar12] = uVar24;
        lVar12 = lVar12 + 1;
      }
      uVar25 = uVar25 & uVar25 - 1;
      if ((uVar25 == 0) || (iVar27 == 0)) goto LAB_7fffa5477259;
    } while( true );
  }
  lVar12 = 0;
LAB_7fffa5477259:
  lVar26 = 0;
  if ((bVar9 & 0x3f) == 1) {
    lVar26 = 0x3f;
  }
  lVar26 = lVar26 + (uint64_t)(bVar9 - 1 & 0x3f);
  *(uint8_t *)(lVar28 + uVar13) = (char)lVar26;
  ((uint8_t *)(lVar28 + uVar13))[lVar26] = auVar33[0];
  iVar27 = *(int *)(uVar20 + 0x2c);
  *(int *)(uVar20 + 0x2c) = iVar27 + 1;
  *(int *)(lVar7 + lVar26 * 4) = iVar27;
  if (lVar12 != 0) {
    lStack_68 = lVar6 + 8;
    uVar20 = 3;
    lVar28 = 0;
    do {
      uVar24 = auStack_178[lVar28];
      puVar18 = (uint64_t *)(lVar6 + (uint64_t)uVar24);
      if (*(int *)((uVar20 - 3) + (int64_t)puVar18) == *(int *)((int64_t)param_3 + (uVar20 - 3)))
      {
        puVar14 = param_3;
        if (param_3 < (uint64_t *)((int64_t)puStack_48 - 7U)) {
          if (*puVar18 == *param_3) {
            lVar7 = lVar6 + 8 + (uint64_t)uVar24;
            lVar26 = 0;
            do {
              puVar14 = (uint64_t *)((int64_t)param_3 + lVar26 + 8);
              if ((uint64_t *)((int64_t)puStack_48 - 7U) <= puVar14) {
                puVar18 = (uint64_t *)(lVar7 + lVar26);
                goto joined_r0x7fffa5477336;
              }
              uVar25 = *(uint64_t *)(lVar7 + lVar26);
              lVar26 = lVar26 + 8;
            } while (uVar25 == *puVar14);
            uVar17 = 0;
            for (uVar25 = uVar25 ^ *puVar14; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar17 = uVar17 + 1;
            }
            uVar25 = (uint64_t)(uVar17 >> 3) + lVar26;
          }
          else {
            uVar17 = 0;
            for (uVar25 = *param_3 ^ *puVar18; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar17 = uVar17 + 1;
            }
            uVar25 = (uint64_t)(uVar17 >> 3);
          }
        }
        else {
joined_r0x7fffa5477336:
          if ((puVar14 < (uint64_t *)((int64_t)puStack_48 - 3U)) &&
             ((int)*puVar18 == (int)*puVar14)) {
            puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
          }
          if ((puVar14 < (uint64_t *)((int64_t)puStack_48 - 1U)) &&
             ((short)*puVar18 == (short)*puVar14)) {
            puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
          }
          if (puVar14 < puStack_48) {
            puVar14 = (uint64_t *)
                      ((int64_t)puVar14 + (uint64_t)((char)*puVar18 == (char)*puVar14));
          }
          uVar25 = (int64_t)puVar14 - (int64_t)param_3;
        }
        if (uVar20 < uVar25) {
          bVar9 = (uint8_t)in_R11D & 0x1f;
          uVar24 = (uVar16 + 3) - uVar24;
          uVar20 = (uint64_t)uVar24;
          if ((in_R11D ^ 0xa09935b6) <= (-0x7fbc21a1 << bVar9 | 0x8043de5fU >> 0x20 - bVar9)) {
            uVar20 = (int64_t)(int)uVar24;
          }
          *(uint64_t *)
           ((param_1 << 0x10 | param_1 >> 0x30) ^ (param_1 << 0x30 | param_1 >> 0x10) ^ param_1) =
               uVar20;
          uVar20 = uVar25;
          if ((uint64_t *)((int64_t)param_3 + uVar25) == puStack_48) {
            return;
          }
        }
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 != lVar12);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5477490  |  RVA: 0xd07490  |  Size: 1575 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5477490(uint64_t param_1,uint32_t param_2,uint64_t param_3)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint8_t bVar4;
  uint16_t uVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  char *pcVar10;
  uint64_t uVar11;
  int64_t lVar12;
  code *pcVar13;
  uint32_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  char *pcVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t *puVar21;
  int64_t lVar22;
  uint64_t in_R11;
  uint64_t uVar23;
  uint32_t uVar24;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  
  uVar11 = in_R11 << 0x1c | in_R11 >> 0x24;
  param_3 = ~param_3;
  uVar16 = param_3 * -0x3ffffffffffffe ^ param_3 - (param_3 << 0x35);
  uVar16 = uVar16 * 4 ^ uVar16;
  uVar16 = uVar16 << 4 ^ uVar16;
  uVar16 = uVar16 << 8 ^ uVar16;
  uVar16 = uVar16 << 0x10 ^ uVar16;
  puVar17 = (uint64_t *)(uVar16 << 0x20 ^ uVar16);
  uVar16 = puVar17[3];
  uVar20 = uVar11 ^ in_R11;
  if (~((param_2 | 1) * -0x2ec3b18d) <= param_2 + 0x13ca3e1b) {
    uVar20 = in_R11 * uVar11;
  }
  uVar20 = uVar20 ^ (in_R11 << 0x1d | in_R11 >> 0x23);
  uVar20 = (uVar20 << 0x38 | uVar20 >> 8) ^ (uVar20 << 0x3a | uVar20 >> 6) ^ uVar20;
  uVar20 = (uVar20 << 0x30 | uVar20 >> 0x10) ^ (uVar20 << 0x34 | uVar20 >> 0xc) ^ uVar20;
  uVar20 = (uVar20 << 0x20 | uVar20 >> 0x20) ^ (uVar20 << 0x28 | uVar20 >> 0x18) ^ uVar20;
  uVar20 = uVar20 << 0x30 | uVar20 >> 0x10;
  if (uVar16 == 0) goto LAB_7fffa5477a2d;
  pcVar10 = (char *)puVar17[2];
  if (pcVar10 == pcVar10 + puVar17[1] * 0x10 + 0x10) {
    if (puVar17[5] != 0) goto LAB_7fffa54778ec;
code_r0x7fffa54779e3:
    if (uVar16 == 0) goto LAB_7fffa5477a2d;
  }
  else {
    pcVar18 = pcVar10 + puVar17[1] * 0x10;
    lVar15 = 0;
    while( true ) {
      auVar25[0] = -(*pcVar10 == '\0');
      auVar25[1] = -(pcVar10[1] == '\0');
      auVar25[2] = -(pcVar10[2] == '\0');
      auVar25[3] = -(pcVar10[3] == '\0');
      auVar25[4] = -(pcVar10[4] == '\0');
      auVar25[5] = -(pcVar10[5] == '\0');
      auVar25[6] = -(pcVar10[6] == '\0');
      auVar25[7] = -(pcVar10[7] == '\0');
      auVar25[8] = -(pcVar10[8] == '\0');
      auVar25[9] = -(pcVar10[9] == '\0');
      auVar25[10] = -(pcVar10[10] == '\0');
      auVar25[0xb] = -(pcVar10[0xb] == '\0');
      auVar25[0xc] = -(pcVar10[0xc] == '\0');
      auVar25[0xd] = -(pcVar10[0xd] == '\0');
      auVar25[0xe] = -(pcVar10[0xe] == '\0');
      auVar25[0xf] = -(pcVar10[0xf] == '\0');
      uVar24 = ((uint32_t)(pcVar10 != pcVar18) << 0xe | 0x3fff) &
               ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar25 >> 7,0) & 1) |
                               (uint16_t)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                               (uint16_t)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                               (uint16_t)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                               (uint16_t)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                               (uint16_t)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                               (uint16_t)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                               (uint16_t)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                               (uint16_t)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                               (uint16_t)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                               (uint16_t)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                               (uint16_t)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                               (uint16_t)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                               (uint16_t)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                               (uint16_t)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                              (uint16_t)(auVar25[0xf] >> 7) << 0xf);
      if (uVar24 != 0) {
        do {
          uVar14 = 0;
          for (uVar6 = uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar19 = (uint64_t)uVar14;
          puVar21 = *(uint64_t **)(uVar16 + uVar19 * 8);
          uVar11 = *puVar21 + 0x9e3779b9 + (*puVar21 >> 3);
          uVar23 = (uVar11 >> 0x20 ^ uVar11) * 0xe9846af9b1a615d;
          uVar11 = uVar23 >> 0x20 ^ uVar23;
          if ((uint64_t)(int64_t)(int)(param_2 + 0xd7c42c2 ^ 0xf8e2c63e) <=
              (uint64_t)(~(param_2 ^ 0xf0e9f97e) << 0xd | ~(param_2 ^ 0xf0e9f97e) >> 0x13)) {
            uVar11 = (uVar23 >> 0x20) * uVar23;
          }
          uVar11 = (uVar11 * 0xe9846af9b1a615d >> 0x1c ^ uVar11 * 0xe9846af9b1a615d) + puVar21[1] +
                   0x9e3779b9;
          uVar11 = (uVar11 >> 0x20 ^ uVar11) * 0xe9846af9b1a615d;
          uVar23 = (uVar11 >> 0x20 ^ uVar11) * 0xe9846af9b1a615d;
          uVar11 = (uVar23 >> 0x1c) + uVar23;
          if (((param_2 ^ 0x53ebc255) << 0x1c | (param_2 ^ 0x53ebc255) >> 4) != 0xfa72bcf6) {
            uVar11 = uVar23 >> 0x1c ^ uVar23;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar11;
          uVar23 = SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),8) ^
                   SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),0);
          uVar11 = uVar23 >> (*(uint8_t *)(uVar20 + 0x4b08570a) & 0x3f);
          pcVar1 = (char *)(*(int64_t *)(uVar20 + 0x4b08571a) + uVar11 * 0x10);
          lVar22 = *(int64_t *)(uVar20 + 0x4b08571a) + uVar11 * 0x10;
          auVar26[0] = -(*pcVar1 == '\0');
          auVar26[1] = -(pcVar1[1] == '\0');
          auVar26[2] = -(pcVar1[2] == '\0');
          auVar26[3] = -(pcVar1[3] == '\0');
          auVar26[4] = -(pcVar1[4] == '\0');
          auVar26[5] = -(pcVar1[5] == '\0');
          auVar26[6] = -(pcVar1[6] == '\0');
          auVar26[7] = -(pcVar1[7] == '\0');
          auVar26[8] = -(pcVar1[8] == '\0');
          auVar26[9] = -(pcVar1[9] == '\0');
          auVar26[10] = -(pcVar1[10] == '\0');
          auVar26[0xb] = -(pcVar1[0xb] == '\0');
          auVar26[0xc] = -(pcVar1[0xc] == '\0');
          auVar26[0xd] = -(pcVar1[0xd] == '\0');
          auVar26[0xe] = -(pcVar1[0xe] == '\0');
          auVar26[0xf] = -(pcVar1[0xf] == '\0');
          uVar14 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar26 >> 7,0) & 1) |
                                  (uint16_t)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                  (uint16_t)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                  (uint16_t)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                  (uint16_t)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                  (uint16_t)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                  (uint16_t)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                  (uint16_t)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                  (uint16_t)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                  (uint16_t)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                  (uint16_t)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                  (uint16_t)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                  (uint16_t)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                  (uint16_t)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                 (uint16_t)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe);
          if (uVar14 == 0) {
            lVar12 = 1;
            while( true ) {
              *(uint8_t *)(lVar22 + 0xf) = *(uint8_t *)(lVar22 + 0xf) | '\x01' << ((uint8_t)uVar23 & 7);
              uVar11 = uVar11 + lVar12 & *(uint64_t *)(uVar20 + 0x4b085712);
              lVar22 = *(int64_t *)(uVar20 + 0x4b08571a) + uVar11 * 0x10;
              pcVar1 = (char *)(*(int64_t *)(uVar20 + 0x4b08571a) + uVar11 * 0x10);
              auVar27[0] = -(*pcVar1 == '\0');
              auVar27[1] = -(pcVar1[1] == '\0');
              auVar27[2] = -(pcVar1[2] == '\0');
              auVar27[3] = -(pcVar1[3] == '\0');
              auVar27[4] = -(pcVar1[4] == '\0');
              auVar27[5] = -(pcVar1[5] == '\0');
              auVar27[6] = -(pcVar1[6] == '\0');
              auVar27[7] = -(pcVar1[7] == '\0');
              auVar27[8] = -(pcVar1[8] == '\0');
              auVar27[9] = -(pcVar1[9] == '\0');
              auVar27[10] = -(pcVar1[10] == '\0');
              auVar27[0xb] = -(pcVar1[0xb] == '\0');
              auVar27[0xc] = -(pcVar1[0xc] == '\0');
              auVar27[0xd] = -(pcVar1[0xd] == '\0');
              auVar27[0xe] = -(pcVar1[0xe] == '\0');
              auVar27[0xf] = -(pcVar1[0xf] == '\0');
              uVar5 = (uint16_t)(SUB161(auVar27 >> 7,0) & 1) |
                      (uint16_t)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                      (uint16_t)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                      (uint16_t)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                      (uint16_t)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                      (uint16_t)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                      (uint16_t)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                      (uint16_t)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                      (uint16_t)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                      (uint16_t)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                      (uint16_t)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                      (uint16_t)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                      (uint16_t)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                      (uint16_t)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                      (uint16_t)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe;
              uVar14 = (uint32_t)uVar5;
              if (uVar5 != (uint16_t)((short)param_2 - 0x681U)) break;
              lVar12 = lVar12 + 1;
            }
            puVar21 = *(uint64_t **)(uVar16 + uVar19 * 8);
          }
          uVar6 = 0;
          for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar2 = (&UNK_7fffa583f919)[(uVar23 & 0xff) * 4 + (int64_t)(int)(param_2 ^ 0xf1f71086)];
          *(uint64_t **)(uVar11 * 0x78 + *(int64_t *)(uVar20 + 0x4b085722) + (uint64_t)uVar6 * 8)
               = puVar21;
          *(uint64_t *)(uVar16 + uVar19 * 8) = 0;
          *(uint8_t *)(lVar22 + (uint64_t)uVar6) = uVar2;
          uVar11 = *(uint64_t *)(uVar16 + uVar19 * 8);
          if (uVar11 != 0) {
            uVar14 = (0x70e80670 - param_2) * 0x800 | 0x70e80670 - param_2 >> 0x15;
            (*(code *)(&UNK_7fffa569011a + (int)uVar14))(uVar11,uVar14,uVar11 >> 0x3d ^ uVar11);
          }
          lVar15 = lVar15 + 1;
          uVar24 = uVar24 - 1 & uVar24;
        } while (uVar24 != 0);
      }
      if (pcVar10 == pcVar18) break;
      pcVar10 = pcVar10 + 0x10;
      uVar16 = uVar16 + 0x78;
    }
    uVar16 = puVar17[3];
    if (lVar15 == puVar17[5]) goto code_r0x7fffa54779e3;
LAB_7fffa54778ec:
    if (uVar16 == 0) goto LAB_7fffa5477a2d;
    pcVar10 = (char *)puVar17[2];
    if (pcVar10 != pcVar10 + puVar17[1] * 0x10 + 0x10) {
      pcVar18 = pcVar10 + puVar17[1] * 0x10;
      while( true ) {
        auVar28[0] = -(*pcVar10 == '\0');
        auVar28[1] = -(pcVar10[1] == '\0');
        auVar28[2] = -(pcVar10[2] == '\0');
        auVar28[3] = -(pcVar10[3] == '\0');
        auVar28[4] = -(pcVar10[4] == '\0');
        auVar28[5] = -(pcVar10[5] == '\0');
        auVar28[6] = -(pcVar10[6] == '\0');
        auVar28[7] = -(pcVar10[7] == '\0');
        auVar28[8] = -(pcVar10[8] == '\0');
        auVar28[9] = -(pcVar10[9] == '\0');
        auVar28[10] = -(pcVar10[10] == '\0');
        auVar28[0xb] = -(pcVar10[0xb] == '\0');
        auVar28[0xc] = -(pcVar10[0xc] == '\0');
        auVar28[0xd] = -(pcVar10[0xd] == '\0');
        auVar28[0xe] = -(pcVar10[0xe] == '\0');
        auVar28[0xf] = -(pcVar10[0xf] == '\0');
        uVar24 = ((uint16_t)((uint16_t)(SUB161(auVar28 >> 7,0) & 1) |
                           (uint16_t)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                           (uint16_t)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                           (uint16_t)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                           (uint16_t)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                           (uint16_t)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                           (uint16_t)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                           (uint16_t)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                           (uint16_t)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                           (uint16_t)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                           (uint16_t)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                           (uint16_t)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                           (uint16_t)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                           (uint16_t)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                           (uint16_t)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                          (uint16_t)(auVar28[0xf] >> 7) << 0xf) ^ 0x7fff) &
                 ((uint32_t)(pcVar10 != pcVar18) << 0xe | 0x3fff);
        if (uVar24 != ((param_2 | 1) * 0x7f5 + 0x3f8b & 0xffff)) {
          do {
            uVar14 = 0;
            for (uVar6 = uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            uVar11 = *(uint64_t *)(uVar16 + (uint64_t)uVar14 * 8);
            if (uVar11 != 0) {
              bVar4 = (uint8_t)param_2 & 0x1f;
              uVar14 = 0xfffe53f9U >> bVar4 | -0x1ac07 << 0x20 - bVar4;
              pcVar13 = (code *)((int64_t)(int)uVar14 + 0x7fffa5695234);
              (*pcVar13)(pcVar13,uVar14,uVar11 >> 0x3d ^ uVar11);
            }
            uVar24 = uVar24 - 1 & uVar24;
          } while (uVar24 != 0);
        }
        if (pcVar10 == pcVar18) break;
        uVar16 = uVar16 + 0x78;
        pcVar10 = pcVar10 + 0x10;
      }
      uVar16 = puVar17[3];
      goto code_r0x7fffa54779e3;
    }
  }
  (*(code *)((int64_t)(int)~(param_2 ^ 0xe08c0da) + 0x7fffa569428c))
            (0x7fffa569428c,~(param_2 ^ 0xe08c0da),uVar16 >> 0x3d ^ uVar16);
LAB_7fffa5477a2d:
  uVar7 = *(uint64_t *)(uVar20 + 0x4b08570a);
  uVar8 = *(uint64_t *)(uVar20 + 0x4b085712);
  uVar9 = *(uint64_t *)(uVar20 + 0x4b085722);
  puVar17[2] = *(uint64_t *)(uVar20 + 0x4b08571a);
  puVar17[3] = uVar9;
  *puVar17 = uVar7;
  puVar17[1] = uVar8;
  uVar16 = puVar17[1] * 0xf + 0xe;
  if (puVar17[3] == 0) {
    uVar16 = 0;
  }
  uVar20 = (uint64_t)((float)uVar16 * 0.875);
  uVar20 = (int64_t)((float)uVar16 * 0.875 - 9.223372e+18) & (int64_t)uVar20 >> 0x3f | uVar20;
  if (uVar16 < 0x1e) {
    uVar20 = uVar16;
  }
  puVar17[4] = uVar20;
  return;
}


// ============================================================================
// Function : FUN_7fffa5477ad0  |  RVA: 0xd07ad0  |  Size: 729 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5477ad0(void)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  bRam00007fffa47bb8db = 0;
  uRam00007fffa47bb8f1 = 0;
  uRam00007fffa47bb8f9 = 0;
  uRam00007fffa47bb8e1 = 0;
  uRam00007fffa47bb8e9 = 0;
  uRam00007fffa47bb901 = 0;
  uRam00007fffa47bb915 = 0;
  uVar1 = rdtsc();
  lVar4 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x4715ad5aab1672d;
  uVar3 = 0;
  while( true ) {
    *(char *)(uVar3 + 0x7fffa47bb8da) = (char)((uint64_t)(lVar4 * 0x65f36fa0f5) >> 0x20);
    *(char *)(uVar3 + 0x7fffa47bb8d9) = (char)((uint64_t)(lVar4 * 0xd999cf3de9) >> 0x20);
    *(char *)(uVar3 + 0x7fffa47bb8d8) = (char)((uint64_t)(lVar4 * -0x2a554e98d3) >> 0x20);
    if (uVar3 == 0x44) break;
    lVar4 = lVar4 * 0x5e82ecc7afc6de11;
    *(char *)((uVar3 | 3) + 0x7fffa47bb8d8) = (char)((uint64_t)lVar4 >> 0x20);
    uVar3 = uVar3 + 4;
  }
  uVar2 = (uint32_t)bRam00007fffa47bb8db * 0x33333334 + 0x33333334;
  uVar5 = (uint64_t)uVar2 * 4 + (uint64_t)uVar2;
  uVar3 = uVar5 >> 0x20;
  *(uint32_t *)(uVar3 * 8 + 0x7fffa47bb8e1) = ~(uint32_t)uRam00007fffa47bb915;
  *(uint32_t *)(uVar3 * 8 + 0x7fffa47bb8e5) = ~uRam00007fffa47bb915._4_4_;
  bRam00007fffa47bb8db = (char)(uVar5 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5477db0  |  RVA: 0xd07db0  |  Size: 520 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5477db0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint8_t auVar3 [32];
  uint8_t auVar4 [32];
  uint8_t auVar5 [32];
  uint8_t auVar6 [32];
  uint8_t uVar7;
  uint16_t uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  uint8_t (*pauVar25) [32];
  uint8_t (*pauVar26) [32];
  uint8_t (*pauVar27) [32];
  uint8_t (*pauVar28) [32];
  uint64_t uVar29;
  int64_t lVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(uint8_t *)param_1 = *(uint8_t *)param_2;
    return;
  case 2:
    *(uint16_t *)param_1 = *(uint16_t *)param_2;
    return;
  case 3:
    uVar7 = *(uint8_t *)((int64_t)param_2 + 2);
    *(uint16_t *)param_1 = *(uint16_t *)param_2;
    *(uint8_t *)((int64_t)param_1 + 2) = uVar7;
    return;
  case 4:
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    return;
  case 5:
    uVar7 = *(uint8_t *)((int64_t)param_2 + 4);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint8_t *)((int64_t)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(uint16_t *)((int64_t)param_2 + 4);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint16_t *)((int64_t)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(uint16_t *)((int64_t)param_2 + 4);
    uVar7 = *(uint8_t *)((int64_t)param_2 + 6);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint16_t *)((int64_t)param_1 + 4) = uVar8;
    *(uint8_t *)((int64_t)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(uint8_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint8_t *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(uint16_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(uint16_t *)(param_2 + 1);
    uVar7 = *(uint8_t *)((int64_t)param_2 + 10);
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = uVar8;
    *(uint8_t *)((int64_t)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(uint32_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(uint32_t *)(param_2 + 1);
    uVar7 = *(uint8_t *)((int64_t)param_2 + 0xc);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar9;
    *(uint8_t *)((int64_t)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(uint32_t *)(param_2 + 1);
    uVar8 = *(uint16_t *)((int64_t)param_2 + 0xc);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar9;
    *(uint16_t *)((int64_t)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(uint32_t *)(param_2 + 1);
    uVar8 = *(uint16_t *)((int64_t)param_2 + 0xc);
    uVar7 = *(uint8_t *)((int64_t)param_2 + 0xe);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar9;
    *(uint16_t *)((int64_t)param_1 + 0xc) = uVar8;
    *(uint8_t *)((int64_t)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar24 = (uint64_t *)((int64_t)param_2 + (param_3 - 0x10));
    uVar11 = *puVar24;
    uVar12 = puVar24[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    param_1 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    *param_1 = uVar11;
    param_1[1] = uVar12;
    return;
  }
  puVar24 = (uint64_t *)((int64_t)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar24 = param_1;
  }
  if (param_1 < puVar24) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (int64_t)param_2 - (int64_t)param_1;
    puVar24 = (uint64_t *)((int64_t)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar24;
    uVar13 = puVar24[1];
    puVar23 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar24 = puVar23;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((uint64_t)puVar23 & 0xf) != 0) {
      puVar24 = (uint64_t *)((uint64_t)puVar23 & 0xfffffffffffffff0);
      uVar32 = *(uint64_t *)((int64_t)puVar24 + lVar30);
      uVar33 = ((uint64_t *)((int64_t)puVar24 + lVar30))[1];
      *puVar23 = uVar12;
      *(uint64_t *)((int64_t)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (int64_t)puVar24 - (int64_t)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar24 = uVar32;
      puVar24[1] = uVar33;
      puVar23 = puVar24;
      while( true ) {
        puVar1 = (uint64_t *)((int64_t)puVar23 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar24 = (uint64_t *)((int64_t)puVar23 + lVar30 + -0x20);
        uVar13 = *puVar24;
        uVar32 = puVar24[1];
        puVar24 = puVar23 + -0x10;
        puVar23[-2] = *puVar1;
        puVar23[-1] = uVar12;
        puVar23[-4] = uVar13;
        puVar23[-3] = uVar32;
        puVar1 = (uint64_t *)((int64_t)puVar23 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar23 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar23[-6] = *puVar1;
        puVar23[-5] = uVar12;
        puVar23[-8] = uVar13;
        puVar23[-7] = uVar32;
        puVar1 = (uint64_t *)((int64_t)puVar23 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar23 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar23[-10] = *puVar1;
        puVar23[-9] = uVar12;
        puVar23[-0xc] = uVar13;
        puVar23[-0xb] = uVar32;
        puVar1 = (uint64_t *)((int64_t)puVar23 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(uint64_t *)((int64_t)puVar24 + lVar30);
        uVar33 = ((uint64_t *)((int64_t)puVar24 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar23[-0xe] = uVar12;
        puVar23[-0xd] = uVar13;
        *puVar24 = uVar32;
        puVar23[-0xf] = uVar33;
        puVar23 = puVar24;
      }
      puVar23[-0xe] = uVar12;
      puVar23[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar24 = uVar32;
      puVar24[1] = uVar33;
      puVar24 = puVar24 + -2;
      uVar32 = *(uint64_t *)((int64_t)puVar24 + lVar30);
      uVar33 = ((uint64_t *)((int64_t)puVar24 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar24 = uVar32;
    puVar24[1] = uVar33;
    return;
  }
  if ((param_3 < 0x180000) && (0x1fff < param_3)) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(uint8_t *)param_1 = *(uint8_t *)param_2;
      param_2 = (uint64_t *)((int64_t)param_2 + 1);
      param_1 = (uint64_t *)((int64_t)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  puVar24 = (uint64_t *)((int64_t)param_2 + (param_3 - 0x20));
  uVar32 = *puVar24;
  uVar33 = puVar24[1];
  uVar14 = puVar24[2];
  uVar15 = puVar24[3];
  if (0x100 < param_3) {
    lVar30 = ((uint64_t)param_1 & 0x1f) - 0x20;
    pauVar25 = (uint8_t (*) [32])((int64_t)param_1 - lVar30);
    pauVar27 = (uint8_t (*) [32])((int64_t)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar28 = pauVar27;
          pauVar26 = pauVar25;
          auVar3 = pauVar28[1];
          auVar4 = pauVar28[2];
          auVar5 = pauVar28[3];
          auVar6 = vmovntdq_avx(*pauVar28);
          *pauVar26 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar26[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar26[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar26[3] = auVar3;
          auVar3 = pauVar28[5];
          auVar4 = pauVar28[6];
          auVar5 = pauVar28[7];
          auVar6 = vmovntdq_avx(pauVar28[4]);
          pauVar26[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar26[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar26[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar26[7] = auVar3;
          pauVar25 = pauVar26 + 8;
          pauVar27 = pauVar28 + 8;
          param_3 = uVar29 - 0x100;
        } while (0xff < uVar29 - 0x100);
        uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar29) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(*pauVar28 + uVar31));
          *(uint8_t (*) [32])(*pauVar26 + uVar31) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[1] + uVar31));
          *(uint8_t (*) [32])(pauVar26[1] + uVar31) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[2] + uVar31));
          *(uint8_t (*) [32])(pauVar26[2] + uVar31) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[3] + uVar31));
          *(uint8_t (*) [32])(pauVar26[3] + uVar31) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[4] + uVar31));
          *(uint8_t (*) [32])(pauVar26[4] + uVar31) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[5] + uVar31));
          *(uint8_t (*) [32])(pauVar26[5] + uVar31) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(*(uint8_t (*) [32])(pauVar28[6] + uVar31));
          *(uint8_t (*) [32])(pauVar26[6] + uVar31) = auVar3;
        default:
          puVar24 = (uint64_t *)(pauVar26[-1] + uVar29);
          *puVar24 = uVar32;
          puVar24[1] = uVar33;
          puVar24[2] = uVar14;
          puVar24[3] = uVar15;
        case 0x100:
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          return;
        }
      }
      do {
        uVar10 = *(uint64_t *)(*pauVar27 + 8);
        uVar11 = *(uint64_t *)(*pauVar27 + 0x10);
        uVar12 = *(uint64_t *)(*pauVar27 + 0x18);
        uVar13 = *(uint64_t *)pauVar27[1];
        uVar32 = *(uint64_t *)(pauVar27[1] + 8);
        uVar33 = *(uint64_t *)(pauVar27[1] + 0x10);
        uVar14 = *(uint64_t *)(pauVar27[1] + 0x18);
        uVar15 = *(uint64_t *)pauVar27[2];
        uVar16 = *(uint64_t *)(pauVar27[2] + 8);
        uVar17 = *(uint64_t *)(pauVar27[2] + 0x10);
        uVar18 = *(uint64_t *)(pauVar27[2] + 0x18);
        uVar19 = *(uint64_t *)pauVar27[3];
        uVar20 = *(uint64_t *)(pauVar27[3] + 8);
        uVar21 = *(uint64_t *)(pauVar27[3] + 0x10);
        uVar22 = *(uint64_t *)(pauVar27[3] + 0x18);
        *(uint64_t *)*pauVar25 = *(uint64_t *)*pauVar27;
        *(uint64_t *)(*pauVar25 + 8) = uVar10;
        *(uint64_t *)(*pauVar25 + 0x10) = uVar11;
        *(uint64_t *)(*pauVar25 + 0x18) = uVar12;
        *(uint64_t *)pauVar25[1] = uVar13;
        *(uint64_t *)(pauVar25[1] + 8) = uVar32;
        *(uint64_t *)(pauVar25[1] + 0x10) = uVar33;
        *(uint64_t *)(pauVar25[1] + 0x18) = uVar14;
        *(uint64_t *)pauVar25[2] = uVar15;
        *(uint64_t *)(pauVar25[2] + 8) = uVar16;
        *(uint64_t *)(pauVar25[2] + 0x10) = uVar17;
        *(uint64_t *)(pauVar25[2] + 0x18) = uVar18;
        *(uint64_t *)pauVar25[3] = uVar19;
        *(uint64_t *)(pauVar25[3] + 8) = uVar20;
        *(uint64_t *)(pauVar25[3] + 0x10) = uVar21;
        *(uint64_t *)(pauVar25[3] + 0x18) = uVar22;
        uVar10 = *(uint64_t *)(pauVar27[4] + 8);
        uVar11 = *(uint64_t *)(pauVar27[4] + 0x10);
        uVar12 = *(uint64_t *)(pauVar27[4] + 0x18);
        uVar13 = *(uint64_t *)pauVar27[5];
        uVar32 = *(uint64_t *)(pauVar27[5] + 8);
        uVar33 = *(uint64_t *)(pauVar27[5] + 0x10);
        uVar14 = *(uint64_t *)(pauVar27[5] + 0x18);
        uVar15 = *(uint64_t *)pauVar27[6];
        uVar16 = *(uint64_t *)(pauVar27[6] + 8);
        uVar17 = *(uint64_t *)(pauVar27[6] + 0x10);
        uVar18 = *(uint64_t *)(pauVar27[6] + 0x18);
        uVar19 = *(uint64_t *)pauVar27[7];
        uVar20 = *(uint64_t *)(pauVar27[7] + 8);
        uVar21 = *(uint64_t *)(pauVar27[7] + 0x10);
        uVar22 = *(uint64_t *)(pauVar27[7] + 0x18);
        *(uint64_t *)pauVar25[4] = *(uint64_t *)pauVar27[4];
        *(uint64_t *)(pauVar25[4] + 8) = uVar10;
        *(uint64_t *)(pauVar25[4] + 0x10) = uVar11;
        *(uint64_t *)(pauVar25[4] + 0x18) = uVar12;
        *(uint64_t *)pauVar25[5] = uVar13;
        *(uint64_t *)(pauVar25[5] + 8) = uVar32;
        *(uint64_t *)(pauVar25[5] + 0x10) = uVar33;
        *(uint64_t *)(pauVar25[5] + 0x18) = uVar14;
        *(uint64_t *)pauVar25[6] = uVar15;
        *(uint64_t *)(pauVar25[6] + 8) = uVar16;
        *(uint64_t *)(pauVar25[6] + 0x10) = uVar17;
        *(uint64_t *)(pauVar25[6] + 0x18) = uVar18;
        *(uint64_t *)pauVar25[7] = uVar19;
        *(uint64_t *)(pauVar25[7] + 8) = uVar20;
        *(uint64_t *)(pauVar25[7] + 0x10) = uVar21;
        *(uint64_t *)(pauVar25[7] + 0x18) = uVar22;
        pauVar25 = pauVar25 + 8;
        pauVar27 = pauVar27 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7fffa5478002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
            *(uint32_t *)(&UNK_7fffa5894410 + (param_3 + 0x1f >> 5) * 4)))();
  return;
}


// ============================================================================
// Function : FUN_7fffa54781d0  |  RVA: 0xd081d0  |  Size: 632 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5478412) */

void FUN_7fffa54781d0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  bRam00007fffa4786548 = 0;
  uRam00007fffa4786574 = 0;
  uRam00007fffa478657c = 0;
  uRam00007fffa4786564 = 0;
  uRam00007fffa478656c = 0;
  uRam00007fffa4786554 = 0;
  uRam00007fffa478655c = 0;
  uRam00007fffa4786584 = 0;
  uRam00007fffa478658e = 0;
  uVar1 = rdtsc();
  lVar4 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x5f0e006cb35653 + 0xb;
  lVar3 = 3;
  while( true ) {
    lVar4 = lVar4 * 0x5f0e006cb35653 + 0xb;
    lVar5 = lVar4 * 0x5f0e006cb35653 + 0xb;
    lVar6 = lVar5 * 0x5f0e006cb35653 + 0xb;
    *(char *)(lVar3 + 0x7fffa478653a) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar3 + 0x7fffa4786538) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar3 + 0x7fffa4786539) = (char)((uint64_t)lVar5 >> 0x20);
    if (lVar3 == 0x5f) break;
    lVar4 = lVar6 * 0x5f0e006cb35653 + 0xb;
    *(char *)(lVar3 + 0x7fffa478653b) = (char)((uint64_t)lVar4 >> 0x20);
    lVar3 = lVar3 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa4786548 * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa4786554) = ~uRam00007fffa478658e;
  bRam00007fffa4786548 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5478450  |  RVA: 0xd08450  |  Size: 6373 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5478450(void) {
    /* +0xd08450 */ __asm { PUSH R15 }
    /* +0xd08452 */ __asm { PUSH RDI }
    /* +0xd08453 */ __asm { PUSH RSI }
    /* +0xd08454 */ __asm { PUSH RBP }
    /* +0xd08455 */ __asm { PUSH R13 }
    /* +0xd08457 */ __asm { PUSH R14 }
    /* +0xd08459 */ __asm { PUSH RBX }
    /* +0xd0845a */ __asm { PUSH R12 }
    /* +0xd0845c */ __asm { SUB RSP,0x78 }
    /* +0xd08460 */ __asm { MOV RCX,RAX }
    /* +0xd08463 */ __asm { ROL RCX,0x1f }
    /* +0xd08467 */ __asm { MOV RDX,RAX }
    /* +0xd0846a */ __asm { ROL RDX,0x5 }
    /* +0xd0846e */ __asm { XOR RDX,RCX }
    /* +0xd08471 */ __asm { XOR RDX,RAX }
    /* +0xd08474 */ __asm { MOV RCX,RDX }
    /* +0xd08477 */ __asm { ROL RCX,0x3e }
    /* +0xd0847b */ __asm { MOV RAX,RDX }
    /* +0xd0847e */ __asm { ROL RAX,0xa }
    /* +0xd08482 */ __asm { XOR RAX,RCX }
    /* +0xd08485 */ __asm { XOR RAX,RDX }
    /* +0xd08488 */ __asm { MOV RCX,RAX }
    /* +0xd0848b */ __asm { ROL RCX,0x3c }
    /* +0xd0848f */ __asm { MOV RDX,RAX }
    /* +0xd08492 */ __asm { ROL RDX,0x14 }
    /* +0xd08496 */ __asm { XOR RDX,RCX }
    /* +0xd08499 */ __asm { XOR RDX,RAX }
    /* +0xd0849c */ __asm { MOV RCX,RDX }
    /* +0xd0849f */ __asm { ROL RCX,0x38 }
    /* +0xd084a3 */ __asm { MOV RAX,RDX }
    /* +0xd084a6 */ __asm { ROL RAX,0x28 }
    /* +0xd084aa */ __asm { XOR RAX,RCX }
    /* +0xd084ad */ __asm { XOR RAX,RDX }
    /* +0xd084b0 */ __asm { MOV RCX,RAX }
    /* +0xd084b3 */ __asm { ROL RCX,0x10 }
    /* +0xd084b7 */ __asm { MOV RDX,RAX }
    /* +0xd084ba */ __asm { ROL RDX,0x30 }
    /* +0xd084be */ __asm { XOR RDX,RCX }
    /* +0xd084c1 */ __asm { XOR RDX,RAX }
    /* +0xd084c4 */ __asm { MOV RCX,RDX }
    /* +0xd084c7 */ __asm { SHL RCX,0x35 }
    /* +0xd084cb */ __asm { ADD RCX,RDX }
    /* +0xd084ce */ __asm { MOV RDX,RCX }
    /* +0xd084d1 */ __asm { ROL RDX,0x3a }
    /* +0xd084d5 */ __asm { MOV RAX,RCX }
    /* +0xd084d8 */ __asm { ROL RAX,0xc }
    /* +0xd084dc */ __asm { XOR RAX,RDX }
    /* +0xd084df */ __asm { XOR RAX,RCX }
    /* +0xd084e2 */ __asm { MOV RCX,RAX }
    /* +0xd084e5 */ __asm { ROL RCX,0x34 }
    /* +0xd084e9 */ __asm { MOV RDX,RAX }
    /* +0xd084ec */ __asm { ROL RDX,0x18 }
    /* +0xd084f0 */ __asm { XOR RDX,RCX }
    /* +0xd084f3 */ __asm { XOR RDX,RAX }
    /* +0xd084f6 */ __asm { MOVQ XMM1,RDX }
    /* +0xd084fb */ __asm { MOV RCX,RDX }
    /* +0xd084fe */ __asm { ROL RCX,0x30 }
    /* +0xd08502 */ __asm { ROL RDX,0x28 }
    /* +0xd08506 */ __asm { XOR RDX,RCX }
    /* +0xd08509 */ __asm { MOVQ XMM0,RDX }
    /* +0xd0850e */ __asm { PXOR XMM0,XMM1 }
    /* +0xd08512 */ __asm { MOVQ RCX,XMM0 }
    /* +0xd08517 */ __asm { MOV RDX,RCX }
    /* +0xd0851a */ __asm { ROL RDX,0x10 }
    /* +0xd0851e */ __asm { MOV R15,RCX }
    /* +0xd08521 */ __asm { ROL R15,0x20 }
    /* +0xd08525 */ __asm { XOR R15,RDX }
    /* +0xd08528 */ __asm { XOR R15,RCX }
    /* +0xd0852b */ __asm { ROL R15,0x20 }
    /* +0xd0852f */ __asm { MOV R10,qword ptr [R15 + 0x8] }
    /* +0xd08533 */ __asm { TEST R10,R10 }
    /* +0xd08536 */ __asm { JZ 0x7fffa5478745 }
    /* +0xd0853c */ __asm { MOV R12D,R8D }
    /* +0xd0853f */ __asm { OR R12D,0x1 }
    /* +0xd08543 */ __asm { MOV RCX,qword ptr [R15] }
    /* +0xd08546 */ __asm { DEC R10 }
    /* +0xd08549 */ __asm { NOP dword ptr [RAX] }
    /* +0xd08550 */ __asm { MOVZX R9D,word ptr [RCX + R10*0x2] }
    /* +0xd08555 */ __asm { TEST R9W,R9W }
    /* +0xd08559 */ __asm { JNZ 0x7fffa547856a }
    /* +0xd0855b */ __asm { MOV qword ptr [R15 + 0x8],R10 }
    /* +0xd0855f */ __asm { SUB R10,0x1 }
    /* +0xd08563 */ __asm { JNC 0x7fffa5478550 }
    /* +0xd08565 */ __asm { JMP 0x7fffa5478745 }
    /* +0xd0856a */ __asm { LEA RDX,[R10 + 0x1] }
    /* +0xd0856e */ __asm { CMP RDX,0x5 }
    /* +0xd08572 */ __asm { JC 0x7fffa5478745 }
    /* +0xd08578 */ __asm { MOV RBP,0x400000004e9 }
    /* +0xd08582 */ __asm { MOV R11D,R8D }
    /* +0xd08585 */ __asm { OR R11D,0x1 }
    /* +0xd08589 */ __asm { MOVZX EDI,word ptr [RCX + R10*0x2 + -0x6] }
    /* +0xd0858f */ __asm { LEA EBX,[RDI + -0x41] }
    /* +0xd08592 */ __asm { MOV ESI,EDI }
    /* +0xd08594 */ __asm { OR ESI,0x20 }
    /* +0xd08597 */ __asm { MOV EDX,R9D }
    /* +0xd0859a */ __asm { OR EDX,0x20 }
    /* +0xd0859d */ __asm { MOV AX,0x4b1e }
    /* +0xd085a1 */ __asm { MOV dword ptr [RSP + 0x74],R11D }
    /* +0xd085a6 */ __asm { IMUL EAX,R11D }
    /* +0xd085aa */ __asm { XOR EAX,0x58db }
    /* +0xd085af */ __asm { MOVZX R11D,word ptr [RCX + R10*0x2 + -0x2] }
    /* +0xd085b5 */ __asm { LEA R14D,[R11 + -0x41] }
    /* +0xd085b9 */ __asm { MOV R13D,R11D }
    /* +0xd085bc */ __asm { OR R13D,0x20 }
    /* +0xd085c0 */ __asm { CMP R14W,0x1a }
    /* +0xd085c5 */ __asm { CMOVNC R13D,R11D }
    /* +0xd085c9 */ __asm { MOVZX R11D,R13B }
    /* +0xd085cd */ __asm { CMP BX,0x1a }
    /* +0xd085d1 */ __asm { CMOVNC ESI,EDI }
    /* +0xd085d4 */ __asm { MOVZX EDI,SIL }
    /* +0xd085d8 */ __asm { MOVZX R10D,word ptr [RCX + R10*0x2 + -0x4] }
    /* +0xd085de */ __asm { MOV ECX,R10D }
    /* +0xd085e1 */ __asm { OR ECX,0x20 }
    /* +0xd085e4 */ __asm { LEA EBX,[R10 + -0x41] }
    /* +0xd085e8 */ __asm { CMP BX,0x1a }
    /* +0xd085ec */ __asm { CMOVNC ECX,R10D }
    /* +0xd085f0 */ __asm { ROL AX,0x6 }
    /* +0xd085f4 */ __asm { MOVZX R10D,CL }
    /* +0xd085f8 */ __asm { MOVZX EAX,AX }
    /* +0xd085fb */ __asm { LEA ECX,[R9 + -0x41] }
    /* +0xd085ff */ __asm { CMP CX,0x1a }
    /* +0xd08603 */ __asm { CMOVNC EDX,R9D }
    /* +0xd08607 */ __asm { MOVZX R9D,DL }
    /* +0xd0860b */ __asm { MOV RCX,-0xe1b0ae27276a3df }
    /* +0xd08615 */ __asm { XOR RCX,RDI }
    /* +0xd08618 */ __asm { LEA RDX,[RBP + 0x3ca] }
    /* +0xd0861f */ __asm { IMUL RCX,RDX }
    /* +0xd08623 */ __asm { XOR RCX,R10 }
    /* +0xd08626 */ __asm { IMUL RCX,RDX }
    /* +0xd0862a */ __asm { XOR RCX,R11 }
    /* +0xd0862d */ __asm { IMUL RCX,RDX }
    /* +0xd08631 */ __asm { MOV R11W,0x2d28 }
    /* +0xd08636 */ __asm { MOV R10D,0x720 }
    /* +0xd0863c */ __asm { ADD R10,qword ptr GS:[RAX] }
    /* +0xd08640 */ __asm { XOR RCX,R9 }
    /* +0xd08643 */ __asm { ADD R11D,0xffffdbd2 }
    /* +0xd0864a */ __asm { ROL R11W,0xa }
    /* +0xd0864f */ __asm { IMUL RCX,RDX }
    /* +0xd08653 */ __asm { XOR R11D,R8D }
    /* +0xd08656 */ __asm { MOVZX R9D,R11W }
    /* +0xd0865a */ __asm { MOV EDX,0xdf0 }
    /* +0xd0865f */ __asm { ADD RDX,qword ptr GS:[R9] }
    /* +0xd08663 */ __asm { MOVQ XMM1,RDX }
    /* +0xd08668 */ __asm { MOVQ XMM0,R10 }
    /* +0xd0866d */ __asm { PXOR XMM0,XMM1 }
    /* +0xd08671 */ __asm { MOVQ RDX,XMM0 }
    /* +0xd08676 */ __asm { MOV RAX,0x363b4e75945d6095 }
    /* +0xd08680 */ __asm { CMP RDX,RAX }
    /* +0xd08683 */ __asm { NOP }
    /* +0xd08684 */ __asm { NOP }
    /* +0xd08685 */ __asm { NOP }
    /* +0xd08686 */ __asm { NOP }
    /* +0xd08687 */ __asm { NOP }
    /* +0xd08688 */ __asm { MOV RAX,R8 }
    /* +0xd0868b */ __asm { OR RAX,0x1 }
    /* +0xd0868f */ __asm { MOV RDX,0x6830a95acf851ef2 }
    /* +0xd08699 */ __asm { MOV qword ptr [RSP + 0x68],RAX }
    /* +0xd0869e */ __asm { IMUL RDX,RAX }
    /* +0xd086a2 */ __asm { NOT RDX }
    /* +0xd086a5 */ __asm { IMUL RDX,RDX,-0x62acd55d }
    /* +0xd086ac */ __asm { CMP RCX,RDX }
    /* +0xd086af */ __asm { JNZ 0x7fffa5478745 }
    /* +0xd086b5 */ __asm { MOV RDI,qword ptr [R15] }
    /* +0xd086b8 */ __asm { MOV R10,qword ptr [R15 + 0x8] }
    /* +0xd086bc */ __asm { MOV R11,R10 }
    /* +0xd086bf */ __asm { MOV SIL,0x1 }
    /* +0xd086c2 */ __asm { ADD R11,-0x4 }
    /* +0xd086c6 */ __asm { MOV qword ptr [R15 + 0x8],R11 }
    /* +0xd086ca */ __asm { JZ 0x7fffa547885c }
    /* +0xd086d0 */ __asm { MOV RBP,R8 }
    /* +0xd086d3 */ __asm { MOV DX,0x4c6d }
    /* +0xd086d7 */ __asm { MOV R8D,0xffffe7e9 }
    /* +0xd086dd */ __asm { SUB R8D,EDX }
    /* +0xd086e0 */ __asm { MOVSX RCX,R8W }
    /* +0xd086e4 */ __asm { LEA R13,[RDI + R10*0x2] }
    /* +0xd086e8 */ __asm { ADD R13,-0x8 }
    /* +0xd086ec */ __asm { LEA RAX,[0x7fffa4f5a964] }
    /* +0xd086f3 */ __asm { ADD RAX,RCX }
    /* +0xd086f6 */ __asm { MOV RCX,RDI }
    /* +0xd086f9 */ __asm { MOV R8W,0x5c }
    /* +0xd086fe */ __asm { MOV RDX,R13 }
    /* +0xd08701 */ __asm { CALL RAX }
    /* +0xd08703 */ __asm { MOV R10,RAX }
    /* +0xd08706 */ __asm { SUB R10,RDI }
    /* +0xd08709 */ __asm { CMP R10,-0x2 }
    /* +0xd0870d */ __asm { JZ 0x7fffa547875c }
    /* +0xd0870f */ __asm { CMP RAX,R13 }
    /* +0xd08712 */ __asm { JZ 0x7fffa547875c }
    /* +0xd08714 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xd0871b */ __asm { MOV RCX,0x0 }
    /* +0xd08722 */ __asm { NOP }
    /* +0xd08723 */ __asm { MOV RDI,qword ptr [R15] }
    /* +0xd08726 */ __asm { MOV RCX,qword ptr [R15 + 0x8] }
    /* +0xd0872a */ __asm { SAR R10,0x1 }
    /* +0xd0872d */ __asm { INC R10 }
    /* +0xd08730 */ __asm { MOV R9,RCX }
    /* +0xd08733 */ __asm { SUB R9,R10 }
    /* +0xd08736 */ __asm { JBE 0x7fffa5478774 }
    /* +0xd08738 */ __asm { MOV qword ptr [R15 + 0x8],R9 }
    /* +0xd0873c */ __asm { LEA RDI,[RDI + R10*0x2] }
    /* +0xd08740 */ __asm { MOV qword ptr [R15],RDI }
    /* +0xd08743 */ __asm { JMP 0x7fffa5478777 }
    /* +0xd08745 */ __asm { XOR R15D,R15D }
    /* +0xd08748 */ __asm { MOV ECX,R15D }
    /* +0xd0874b */ __asm { ADD RSP,0x78 }
    /* +0xd0874f */ __asm { POP R12 }
    /* +0xd08751 */ __asm { POP RBX }
    /* +0xd08752 */ __asm { POP R14 }
    /* +0xd08754 */ __asm { POP R13 }
    /* +0xd08756 */ __asm { POP RBP }
    /* +0xd08757 */ __asm { POP RSI }
    /* +0xd08758 */ __asm { POP RDI }
    /* +0xd08759 */ __asm { POP R15 }
    /* +0xd0875b */ __asm { RET }
    /* +0xd0875c */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xd08763 */ __asm { MOV RCX,0x0 }
    /* +0xd0876a */ __asm { NOP }
    /* +0xd0876b */ __asm { MOV RDI,qword ptr [R15] }
    /* +0xd0876e */ __asm { MOV R9,qword ptr [R15 + 0x8] }
    /* +0xd08772 */ __asm { JMP 0x7fffa5478777 }
    /* +0xd08774 */ __asm { MOV R9,RCX }
    /* +0xd08777 */ __asm { MOV R8,RBP }
    /* +0xd0877a */ __asm { MOV R13,R9 }
    /* +0xd0877d */ __asm { AND R13,0x7fff }
    /* +0xd08784 */ __asm { MOV RBP,0x400000004e9 }
    /* +0xd0878e */ __asm { JZ 0x7fffa547885c }
    /* +0xd08794 */ __asm { MOV RCX,-0x66c9ded05ac34723 }
    /* +0xd0879e */ __asm { MOV EDX,0xa79be704 }
    /* +0xd087a3 */ __asm { XOR EDX,0x61db436f }
    /* +0xd087a9 */ __asm { IMUL EDX,R12D }
    /* +0xd087ad */ __asm { CMP R13D,EDX }
    /* +0xd087b0 */ __asm { JZ 0x7fffa5478864 }
    /* +0xd087b6 */ __asm { MOV qword ptr [RSP + 0x48],R13 }
    /* +0xd087bb */ __asm { MOV R14,R8 }
    /* +0xd087be */ __asm { MOV R8D,R12D }
    /* +0xd087c1 */ __asm { MOV R11D,R9D }
    /* +0xd087c4 */ __asm { AND R11D,0x7ffe }
    /* +0xd087cb */ __asm { MOV R10D,0x2 }
    /* +0xd087d1 */ __asm { MOV RDX,-0x79ff9331d5d52935 }
    /* +0xd087db */ __asm { LEA RAX,[RBP + -0x246] }
    /* +0xd087e2 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xd087f0 */ __asm { MOVZX ESI,word ptr [RDI + R10*0x2 + -0x4] }
    /* +0xd087f6 */ __asm { MOV EBX,ESI }
    /* +0xd087f8 */ __asm { OR EBX,0x20 }
    /* +0xd087fb */ __asm { MOV R13,RDX }
    /* +0xd087fe */ __asm { IMUL R13,qword ptr [RSP + 0x68] }
    /* +0xd08804 */ __asm { ADD R13,0x6fd6c4d5 }
    /* +0xd0880b */ __asm { XOR R13,-0x7db70eab }
    /* +0xd08812 */ __asm { MOVZX R12D,word ptr [RDI + R10*0x2 + -0x2] }
    /* +0xd08818 */ __asm { LEA EBP,[R12 + -0x41] }
    /* +0xd0881d */ __asm { MOV R15D,R12D }
    /* +0xd08820 */ __asm { OR R15D,0x20 }
    /* +0xd08824 */ __asm { CMP BP,0x1a }
    /* +0xd08828 */ __asm { CMOVNC R15D,R12D }
    /* +0xd0882c */ __asm { LEA R12D,[RSI + -0x41] }
    /* +0xd08830 */ __asm { CMP R12W,0x1a }
    /* +0xd08835 */ __asm { CMOVNC EBX,ESI }
    /* +0xd08838 */ __asm { MOVZX ESI,R15B }
    /* +0xd0883c */ __asm { MOVZX R12D,BL }
    /* +0xd08840 */ __asm { XOR R12,RCX }
    /* +0xd08843 */ __asm { IMUL R12,RAX }
    /* +0xd08847 */ __asm { XOR R12,RSI }
    /* +0xd0884a */ __asm { MOV RCX,R12 }
    /* +0xd0884d */ __asm { IMUL RCX,R13 }
    /* +0xd08851 */ __asm { CMP R11,R10 }
    /* +0xd08854 */ __asm { JZ 0x7fffa5478869 }
    /* +0xd08856 */ __asm { ADD R10,0x2 }
    /* +0xd0885a */ __asm { JMP 0x7fffa54787f0 }
    /* +0xd0885c */ __asm { XOR R13D,R13D }
    /* +0xd0885f */ __asm { XOR R9D,R9D }
    /* +0xd08862 */ __asm { JMP 0x7fffa54788c1 }
    /* +0xd08864 */ __asm { XOR R10D,R10D }
    /* +0xd08867 */ __asm { JMP 0x7fffa547887e }
    /* +0xd08869 */ __asm { MOV R12D,R8D }
    /* +0xd0886c */ __asm { MOV R8,R14 }
    /* +0xd0886f */ __asm { MOV RBP,0x400000004e9 }
    /* +0xd08879 */ __asm { MOV R13,qword ptr [RSP + 0x48] }
    /* +0xd0887e */ __asm { TEST R9B,0x1 }
    /* +0xd08882 */ __asm { JZ 0x7fffa54788ae }
    /* +0xd08884 */ __asm { MOVZX R9D,word ptr [RDI + R10*0x2] }
    /* +0xd08889 */ __asm { LEA EDX,[R9 + -0x41] }
    /* +0xd0888d */ __asm { MOV R11D,R9D }
    /* +0xd08890 */ __asm { OR R11D,0x20 }
    /* +0xd08894 */ __asm { CMP DX,0x1a }
    /* +0xd08898 */ __asm { CMOVNC R11D,R9D }
    /* +0xd0889c */ __asm { MOVZX R9D,R11B }
    /* +0xd088a0 */ __asm { XOR R9,RCX }
    /* +0xd088a3 */ __asm { LEA RCX,[RBP + -0x246] }
    /* +0xd088aa */ __asm { IMUL RCX,R9 }
    /* +0xd088ae */ __asm { MOV RDX,0x2b7e5af1f7bbf819 }
    /* +0xd088b8 */ __asm { CMP RCX,RDX }
    /* +0xd088bb */ __asm { SETZ R9B }
    /* +0xd088bf */ __asm { XOR ESI,ESI }
    /* +0xd088c1 */ __asm { PUSHFQ }
    /* +0xd088c2 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd088ca */ __asm { POPFQ }
    /* +0xd088cb */ __asm { MOV dword ptr [RSP + 0x44],0x52064210 }
    /* +0xd088d3 */ __asm { MOV EDX,dword ptr [RSP + 0x44] }
    /* +0xd088d7 */ __asm { TEST EDX,EDX }
    /* +0xd088d9 */ __asm { NOP }
    /* +0xd088da */ __asm { NOP }
    /* +0xd088db */ __asm { NOP }
    /* +0xd088dc */ __asm { NOP }
    /* +0xd088dd */ __asm { NOP }
    /* +0xd088de */ __asm { MOV R15B,0x1 }
    /* +0xd088e1 */ __asm { TEST R9B,R9B }
    /* +0xd088e4 */ __asm { JNZ 0x7fffa5478748 }
    /* +0xd088ea */ __asm { TEST SIL,SIL }
    /* +0xd088ed */ __asm { MOV qword ptr [RSP + 0x50],RDI }
    /* +0xd088f2 */ __asm { MOV dword ptr [RSP + 0x64],ESI }
    /* +0xd088f6 */ __asm { MOV qword ptr [RSP + 0x58],R8 }
    /* +0xd088fb */ __asm { JZ 0x7fffa5478904 }
    /* +0xd088fd */ __asm { XOR EDX,EDX }
    /* +0xd088ff */ __asm { JMP 0x7fffa5478b7f }
    /* +0xd08904 */ __asm { MOV RAX,-0x66c9ded05ac34723 }
    /* +0xd0890e */ __asm { CMP R13D,0x1 }
    /* +0xd08912 */ __asm { JNZ 0x7fffa547891f }
    /* +0xd08914 */ __asm { XOR R10D,R10D }
    /* +0xd08917 */ __asm { MOV R9,RAX }
    /* +0xd0891a */ __asm { JMP 0x7fffa54789fa }
    /* +0xd0891f */ __asm { MOV qword ptr [RSP + 0x48],R13 }
    /* +0xd08924 */ __asm { AND R13D,0xfffffffe }
    /* +0xd08928 */ __asm { MOV qword ptr [RSP + 0x38],R13 }
    /* +0xd0892d */ __asm { XOR R10D,R10D }
    /* +0xd08930 */ __asm { LEA R13,[RBP + -0x246] }
    /* +0xd08937 */ __asm { MOV R9,RAX }
    /* +0xd0893a */ __asm { MOV R11,R8 }
    /* +0xd0893d */ __asm { NOP dword ptr [RAX] }
    /* +0xd08940 */ __asm { MOV ESI,0x10f6a983 }
    /* +0xd08945 */ __asm { MOVZX EBX,word ptr [RDI + R10*0x2] }
    /* +0xd0894a */ __asm { LEA R14D,[RBX + -0x41] }
    /* +0xd0894e */ __asm { MOV RDX,-0xf2a7ebacc3cdf11 }
    /* +0xd08958 */ __asm { SUB RDX,R11 }
    /* +0xd0895b */ __asm { IMUL RBP,RDX,0x4804e985 }
    /* +0xd08962 */ __asm { MOV R15D,0x64cd6f8f }
    /* +0xd08968 */ __asm { IMUL R15D,R12D }
    /* +0xd0896c */ __asm { ROL R15D,0x1 }
    /* +0xd0896f */ __asm { MOV EDI,R12D }
    /* +0xd08972 */ __asm { LEA R12,[R10 + 0x2] }
    /* +0xd08976 */ __asm { SUB ESI,R11D }
    /* +0xd08979 */ __asm { ROL ESI,0x5 }
    /* +0xd0897c */ __asm { MOV RCX,qword ptr [RSP + 0x50] }
    /* +0xd08981 */ __asm { MOVZX ECX,word ptr [RCX + R10*0x2 + 0x2] }
    /* +0xd08987 */ __asm { XOR R10,0x2 }
    /* +0xd0898b */ __asm { MOV EDX,ECX }
    /* +0xd0898d */ __asm { OR EDX,0x20 }
    /* +0xd08990 */ __asm { MOV R8D,EBX }
    /* +0xd08993 */ __asm { OR R8D,0x20 }
    /* +0xd08997 */ __asm { CMP R14W,0x1a }
    /* +0xd0899c */ __asm { CMOVNC R8D,EBX }
    /* +0xd089a0 */ __asm { MOVZX R8D,R8B }
    /* +0xd089a4 */ __asm { XOR R8,R9 }
    /* +0xd089a7 */ __asm { LEA R9D,[RCX + -0x41] }
    /* +0xd089ab */ __asm { CMP R9W,0x1a }
    /* +0xd089b0 */ __asm { CMOVNC EDX,ECX }
    /* +0xd089b3 */ __asm { CMP R15,RSI }
    /* +0xd089b6 */ __asm { CMOVNC R10,R12 }
    /* +0xd089ba */ __asm { MOV R12D,EDI }
    /* +0xd089bd */ __asm { MOV RDI,qword ptr [RSP + 0x50] }
    /* +0xd089c2 */ __asm { MOVZX R9D,DL }
    /* +0xd089c6 */ __asm { IMUL R8,R13 }
    /* +0xd089ca */ __asm { XOR R8,R9 }
    /* +0xd089cd */ __asm { NOT RBP }
    /* +0xd089d0 */ __asm { MOV R9,R8 }
    /* +0xd089d3 */ __asm { IMUL R9,RBP }
    /* +0xd089d7 */ __asm { CMP R10,qword ptr [RSP + 0x38] }
    /* +0xd089dc */ __asm { JNZ 0x7fffa5478940 }
    /* +0xd089e2 */ __asm { MOV R13,qword ptr [RSP + 0x48] }
    /* +0xd089e7 */ __asm { TEST R13B,0x1 }
    /* +0xd089eb */ __asm { MOV R15B,0x1 }
    /* +0xd089ee */ __asm { MOV RBP,0x400000004e9 }
    /* +0xd089f8 */ __asm { JZ 0x7fffa5478a63 }
    /* +0xd089fa */ __asm { MOVZX R11D,word ptr [RDI + R10*0x2] }
    /* +0xd089ff */ __asm { LEA EDX,[R11 + -0x41] }
    /* +0xd08a03 */ __asm { XOR R10D,R10D }
    /* +0xd08a06 */ __asm { CMP DX,0x1a }
    /* +0xd08a0a */ __asm { SETC R10B }
    /* +0xd08a0e */ __asm { MOV R8D,0x7d2553b8 }
    /* +0xd08a14 */ __asm { ADD R8D,0x294330b7 }
    /* +0xd08a1b */ __asm { MOV RCX,qword ptr [RSP + 0x58] }
    /* +0xd08a20 */ __asm { ROR R8D,CL }
    /* +0xd08a23 */ __asm { MOVSXD R14,R8D }
    /* +0xd08a26 */ __asm { MOV R8D,0x434cdd3b }
    /* +0xd08a2c */ __asm { SUB R8D,ECX }
    /* +0xd08a2f */ __asm { ROL R8D,0x4 }
    /* +0xd08a33 */ __asm { MOV EBX,R11D }
    /* +0xd08a36 */ __asm { OR EBX,0x20 }
    /* +0xd08a39 */ __asm { XOR ESI,ESI }
    /* +0xd08a3b */ __asm { CMP DX,0x1b }
    /* +0xd08a3f */ __asm { SETGE SIL }
    /* +0xd08a43 */ __asm { CMP R8,R14 }
    /* +0xd08a46 */ __asm { CMOVNC R10D,ESI }
    /* +0xd08a4a */ __asm { TEST R10B,R10B }
    /* +0xd08a4d */ __asm { CMOVZ EBX,R11D }
    /* +0xd08a51 */ __asm { MOVZX R8D,BL }
    /* +0xd08a55 */ __asm { XOR R8,R9 }
    /* +0xd08a58 */ __asm { LEA R9,[RBP + -0x246] }
    /* +0xd08a5f */ __asm { IMUL R9,R8 }
    /* +0xd08a63 */ __asm { MOV RCX,-0x1006b6f6cd9c468d }
    /* +0xd08a6d */ __asm { CMP R9,RCX }
    /* +0xd08a70 */ __asm { JZ 0x7fffa5478748 }
    /* +0xd08a76 */ __asm { CMP R13D,0x1 }
    /* +0xd08a7a */ __asm { JNZ 0x7fffa5478a84 }
    /* +0xd08a7c */ __asm { XOR R10D,R10D }
    /* +0xd08a7f */ __asm { JMP 0x7fffa5478b20 }
    /* +0xd08a84 */ __asm { MOV RDX,RBP }
    /* +0xd08a87 */ __asm { MOV RBP,R13 }
    /* +0xd08a8a */ __asm { MOV R9D,R13D }
    /* +0xd08a8d */ __asm { AND R9D,0xfffffffe }
    /* +0xd08a91 */ __asm { MOV R10D,0x2 }
    /* +0xd08a97 */ __asm { MOV RCX,-0x76dff924b2db6aea }
    /* +0xd08aa1 */ __asm { LEA R11,[RDX + -0x246] }
    /* +0xd08aa8 */ __asm { MOV R13,RCX }
    /* +0xd08aab */ __asm { ADD R13,0x79f3cd05 }
    /* +0xd08ab2 */ __asm { MOVZX R8D,word ptr [RDI + R10*0x2 + -0x2] }
    /* +0xd08ab8 */ __asm { LEA EDX,[R8 + -0x41] }
    /* +0xd08abc */ __asm { MOVZX ESI,word ptr [RDI + R10*0x2 + -0x4] }
    /* +0xd08ac2 */ __asm { LEA EBX,[RSI + -0x41] }
    /* +0xd08ac5 */ __asm { MOV R14D,R8D }
    /* +0xd08ac8 */ __asm { OR R14D,0x20 }
    /* +0xd08acc */ __asm { CMP DX,0x1a }
    /* +0xd08ad0 */ __asm { CMOVNC R14D,R8D }
    /* +0xd08ad4 */ __asm { MOVZX R8D,R14B }
    /* +0xd08ad8 */ __asm { MOV EDX,ESI }
    /* +0xd08ada */ __asm { OR EDX,0x20 }
    /* +0xd08add */ __asm { CMP BX,0x1a }
    /* +0xd08ae1 */ __asm { CMOVNC EDX,ESI }
    /* +0xd08ae4 */ __asm { MOVZX EDX,DL }
    /* +0xd08ae7 */ __asm { XOR RDX,RAX }
    /* +0xd08aea */ __asm { ROL R13,0x3c }
    /* +0xd08aee */ __asm { IMUL R13,qword ptr [RSP + 0x68] }
    /* +0xd08af4 */ __asm { IMUL R13,RDX }
    /* +0xd08af8 */ __asm { XOR R13,R8 }
    /* +0xd08afb */ __asm { MOV RAX,R13 }
    /* +0xd08afe */ __asm { IMUL RAX,R11 }
    /* +0xd08b02 */ __asm { CMP R9,R10 }
    /* +0xd08b05 */ __asm { JZ 0x7fffa5478b0d }
    /* +0xd08b07 */ __asm { ADD R10,0x2 }
    /* +0xd08b0b */ __asm { JMP 0x7fffa5478aa8 }
    /* +0xd08b0d */ __asm { MOV R13,RBP }
    /* +0xd08b10 */ __asm { TEST R13B,0x1 }
    /* +0xd08b14 */ __asm { MOV RBP,0x400000004e9 }
    /* +0xd08b1e */ __asm { JZ 0x7fffa5478b6b }
    /* +0xd08b20 */ __asm { MOV R9,-0x3ff8364d1e4 }
    /* +0xd08b2a */ __asm { MOV RCX,qword ptr [RSP + 0x58] }
    /* +0xd08b2f */ __asm { XOR R9,RCX }
    /* +0xd08b32 */ __asm { MOV DX,0x2301 }
    /* +0xd08b36 */ __asm { ADD EDX,0xffffddcf }
    /* +0xd08b3c */ __asm { ROR DX,CL }
    /* +0xd08b3f */ __asm { ADD R9,0x3e583c44 }
    /* +0xd08b46 */ __asm { MOVZX R8D,word ptr [RDI + R10*0x2] }
    /* +0xd08b4b */ __asm { MOV ECX,R8D }
    /* +0xd08b4e */ __asm { OR ECX,0x20 }
    /* +0xd08b51 */ __asm { LEA R11D,[R8 + -0x41] }
    /* +0xd08b55 */ __asm { CMP R11W,DX }
    /* +0xd08b59 */ __asm { CMOVNC ECX,R8D }
    /* +0xd08b5d */ __asm { MOVZX R8D,CL }
    /* +0xd08b61 */ __asm { XOR R8,RAX }
    /* +0xd08b64 */ __asm { IMUL R8,R9 }
    /* +0xd08b68 */ __asm { MOV RAX,R8 }
    /* +0xd08b6b */ __asm { MOV RCX,0x5f8904e0b24bddcd }
    /* +0xd08b75 */ __asm { CMP RAX,RCX }
    /* +0xd08b78 */ __asm { SETZ DL }
    /* +0xd08b7b */ __asm { MOV ESI,dword ptr [RSP + 0x64] }
    /* +0xd08b7f */ __asm { MOV dword ptr [RSP + 0x44],0xcfcebff9 }
    /* +0xd08b87 */ __asm { MOV R8D,dword ptr [RSP + 0x44] }
    /* +0xd08b8c */ __asm { TEST R8D,R8D }
    /* +0xd08b8f */ __asm { JNS 0x7fffa5479cfd }
    /* +0xd08b95 */ __asm { PUSHFQ }
    /* +0xd08b96 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd08b9e */ __asm { POPFQ }
    /* +0xd08b9f */ __asm { TEST DL,DL }
    /* +0xd08ba1 */ __asm { MOV RCX,qword ptr [RSP + 0x58] }
    /* +0xd08ba6 */ __asm { JNZ 0x7fffa5478748 }
    /* +0xd08bac */ __asm { TEST SIL,SIL }
    /* +0xd08baf */ __asm { JZ 0x7fffa5478bb9 }
    /* +0xd08bb1 */ __asm { XOR R11D,R11D }
    /* +0xd08bb4 */ __asm { JMP 0x7fffa5478ce4 }
    /* +0xd08bb9 */ __asm { MOV R9,-0x66c9ded05ac34723 }
    /* +0xd08bc3 */ __asm { CMP R13D,0x1 }
    /* +0xd08bc7 */ __asm { JZ 0x7fffa5478c61 }
    /* +0xd08bcd */ __asm { MOV RDX,RBP }
    /* +0xd08bd0 */ __asm { MOV RBP,R13 }
    /* +0xd08bd3 */ __asm { MOV R11D,R13D }
    /* +0xd08bd6 */ __asm { AND R11D,0xfffffffe }
    /* +0xd08bda */ __asm { MOV R10D,0x2 }
    /* +0xd08be0 */ __asm { MOV RCX,0x4e80a46b00000000 }
    /* +0xd08bea */ __asm { LEA RAX,[RDX + -0x246] }
    /* +0xd08bf1 */ __asm { MOV RDX,RCX }
    /* +0xd08bf4 */ __asm { IMUL RDX,qword ptr [RSP + 0x68] }
    /* +0xd08bfa */ __asm { MOV R8,0x0 }
    /* +0xd08c01 */ __asm { NOP }
    /* +0xd08c03 */ __asm { LEA R15,[0x7fffa4770000] }
    /* +0xd08c0a */ __asm { MOVZX R8D,word ptr [RDI + R10*0x2 + -0x2] }
    /* +0xd08c10 */ __asm { MOV EBX,R8D }
    /* +0xd08c13 */ __asm { ROL RDX,0xa }
    /* +0xd08c17 */ __asm { OR EBX,0x20 }
    /* +0xd08c1a */ __asm { MOVZX ESI,word ptr [RDI + R10*0x2 + -0x4] }
    /* +0xd08c20 */ __asm { MOV R14D,ESI }
    /* +0xd08c23 */ __asm { OR R14D,0x20 }
}


// ============================================================================
// Function : FUN_7fffa5479d60  |  RVA: 0xd09d60  |  Size: 1481 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa547a2f1) overlaps instruction at (ram,0x7fffa547a2eb)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa5479e31) */
/* WARNING: Removing unreachable block (ram,0x7fffa547a2f1) */

uint8_t FUN_7fffa5479d60(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint16_t uVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  char cVar7;
  uint64_t uVar8;
  code *pcVar9;
  uint32_t uVar10;
  uint8_t bVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint64_t *puStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint32_t uStack_c4;
  uint64_t uStack_c0;
  uint64_t **ppuStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint8_t bStack_51;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uVar3 = uStack_108;
  uVar10 = 0x14f0230;
  if (glDispatchTable[0x5f] == (void *)0xca06405ef57a124b) {
    uVar10 = 0x14f3230;
  }
  uVar14 = uVar10 | 1;
  if ((int64_t)(int)(uVar10 + 0xa9d835ee) < (int64_t)(uint64_t)(uVar14 * -0x21effe0b)) {
    uVar13 = uVar14 * -0x6e14b318;
    bVar5 = (uint8_t)uVar10 & 0x1f;
    uVar8 = (int64_t)(char)bRam00007fffa478458f;
    if ((0xb6e4f51fU >> bVar5 | -0x491b0ae1 << 0x20 - bVar5) != 0xcf9b1126) {
      uVar8 = (uint64_t)bRam00007fffa478458f;
    }
  }
  else {
    uVar13 = uVar10 ^ 0x18ac4bca;
    uVar8 = (uint64_t)bRam00007fffa478458f;
  }
  lVar1 = uVar8 * 4;
  bVar5 = ~*(uint8_t *)(uVar8 * 4 + 0x7fffa4784599);
  bVar6 = (uint8_t)uVar13;
  bVar11 = ~*(uint8_t *)(lVar1 + 0x7fffa478459c) << 3 | (uint8_t)~*(uint8_t *)(lVar1 + 0x7fffa478459c) >> 5;
  uStack_108._0_2_ =
       CONCAT11(~*(uint8_t *)(lVar1 + 0x7fffa478459a) << 3 |
                (uint8_t)~*(uint8_t *)(lVar1 + 0x7fffa478459a) >> 5,bVar5 << 3 | bVar5 >> 5);
  uVar12 = (-0x113bbe28 - uVar10) * 0x61387109;
  uStack_108._4_4_ = SUB84(uVar3,4);
  uStack_108._0_4_ =
       CONCAT13(bVar11,CONCAT12(~*(uint8_t *)(lVar1 + 0x7fffa478459b) << 3 |
                                (uint8_t)~*(uint8_t *)(lVar1 + 0x7fffa478459b) >> 5,(uint16_t)uStack_108
                               ));
  uVar2 = (uint32_t)uStack_108 ^ 0x97cd0fa7;
  if ((uint64_t)(int64_t)(int)(uVar12 << (bVar6 & 0x1f) | uVar12 >> 0x20 - (bVar6 & 0x1f)) <=
      (uint64_t)(((uVar13 | 1) * 0x65800000 | (uVar13 | 1) * 0x1b98a996 >> 10) ^ uVar10)) {
    uVar2 = (uint32_t)uStack_108 * -0x6832f059;
  }
  if ((1 << ((uint8_t)uVar2 & 0x1f) & uVar2) ==
      (uint32_t)(uint16_t)~(-1 << (bVar6 & 0xf) | 0xffffU >> 0x10 - (bVar6 & 0xf))) {
    bStack_51 = 1;
    uVar4 = (uint16_t)uVar13 ^ 0x5d51;
    pcVar9 = (code *)((int64_t)(short)((uVar4 << 0xc | uVar4 >> 4) - (uint16_t)uVar10 ^ 0x5a1d) +
                     0x7fffa515a162);
    (*pcVar9)(0xdd519ddb520e4938,pcVar9,bVar11,0x1c692691);
    uVar4 = (uint16_t)((uVar10 | 1) * 0x9996);
    uVar4 = uVar4 << (bVar6 & 0xf) | uVar4 >> 0x10 - (bVar6 & 0xf);
    (*(code *)((int64_t)(short)(uVar4 << 2 | uVar4 >> 0xe) + 0x7fffa5498dea))();
    if ((bStack_51 & 1) != 0) {
      uStack_68 = 0x1972575809da0937;
      uStack_60 = 0x81920ca7aaff7bfa;
      uStack_b0 = 0x1f40b4d90d57e4bf;
      uStack_c0 = 0x81fb0cd3aa917bbb;
      uStack_50 = 0xb05f35269604f1e2;
      ppuStack_b8 = &puStack_118;
      uStack_48 = 0x1913573d09b20974;
      cVar7 = -0x13;
      uStack_e8 = 0x1972575809da0937;
      uStack_d0 = 0xeb3de133994eb79e;
      uStack_108 = 0x1f36b4bc0d13e4e3;
      uStack_d8 = 0xb05f35269604f1b1;
      uStack_100 = 0x83656b91ae78a670;
      uStack_f8 = 0x4fab0fda8f9c728d;
      uStack_e0 = 0x3150cb3deabed324;
      uStack_f0 = 0x81920ca7aaff7bfa;
      uStack_78 = 0x53;
      uStack_70 = 0;
      uStack_98 = 0x79007300610045;
      uStack_90 = 0x690074006e0041;
      uStack_88 = 0x61006500680043;
      uStack_80 = 0x4f0045005f0074;
      pcVar9 = (code *)((int64_t)(short)((uint16_t)uVar10 ^ (uint16_t)uVar13 + 0x2eac) + 0x7fffa566bfdc
                       );
      uStack_110 = 0x19;
      puStack_118 = &uStack_a8;
      uStack_a8 = 0x7600650044005c;
      uStack_a0 = 0x5c006500630069;
      uStack_c4 = uVar14;
      (*pcVar9)(0x40ed,~(uVar13 ^ 0x5192c11f) * uVar14,0x81920ca7aaff7bfa,pcVar9,
                (int64_t)ppuStack_b8 * -0x7738af23 + -0x454b5b7f);
      if (cVar7 != '\0') {
        bStack_51 = 0;
      }
    }
  }
  else {
    bStack_51 = 0;
  }
  return bStack_51 & 1;
}


// ============================================================================
// Function : FUN_7fffa547a340  |  RVA: 0xd0a340  |  Size: 176 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa547a340(uint64_t param_1)

{
  uint64_t in_RAX;
  uint64_t *puVar1;
  uint64_t uStack_8;
  
  param_1 = (param_1 << 0x1e | param_1 >> 0x22) ^ (param_1 << 0x34 | param_1 >> 0xc) ^ param_1;
  param_1 = (param_1 << 0x3c | param_1 >> 4) ^ (param_1 << 0x28 | param_1 >> 0x18) ^ param_1;
  param_1 = (param_1 << 0x10 | param_1 >> 0x30) ^ (param_1 << 0x38 | param_1 >> 8) ^ param_1;
  param_1 = (param_1 << 0x20 | param_1 >> 0x20) ^ (param_1 << 0x30 | param_1 >> 0x10) ^ param_1;
  puVar1 = (uint64_t *)((param_1 << 0x20 | param_1 >> 0x20) * -0x6e1c9b19b857fbcf);
  uStack_8 = CONCAT17(*(uint8_t *)(*(int64_t *)*puVar1 + *(int64_t *)puVar1[1]),(int7)in_RAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa547a3f0  |  RVA: 0xd0a3f0  |  Size: 1 bytes
// Callers  : FUN_7fffa561da50@0xeada50, FUN_7fffa507cef0@0x90cef0
// Callees  : none
// ============================================================================
void FUN_7fffa547a3f0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa547a400  |  RVA: 0xd0a400  |  Size: 3839 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa547a400(uint64_t *param_1,uint64_t *param_2,int64_t param_3,uint64_t param_4,
                          uint32_t param_5)

{
  uint64_t *puVar1;
  char *pcVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  short sVar8;
  uint8_t uVar9;
  uint64_t *puVar10;
  uint8_t bVar11;
  uint8_t bVar12;
  uint32_t uVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  uint32_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint8_t bVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint64_t *puVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint16_t uVar29;
  uint64_t *puVar30;
  uint8_t *puVar31;
  int64_t lVar32;
  uint64_t uVar33;
  int iVar34;
  bool bVar35;
  char cVar36;
  uint8_t uVar38;
  char cVar39;
  char cVar40;
  uint8_t uVar41;
  char cVar42;
  uint8_t auVar37 [16];
  uint32_t uVar43;
  uint8_t auVar44 [16];
  uint32_t auStack_1b8 [66];
  uint64_t uStack_b0;
  int64_t lStack_a8;
  uint64_t *puStack_a0;
  uint64_t *puStack_98;
  int64_t lStack_90;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  int64_t lStack_78;
  int *piStack_70;
  uint64_t *puStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  char *pcStack_50;
  int64_t lStack_48;
  
  puStack_88 = param_1;
  puVar26 = (uint64_t *)(param_3 + -0x41ec0db);
  uVar28 = param_4 << 0x39 | param_4 >> 7;
  bVar11 = (uint8_t)param_5;
  if (((param_5 ^ 0x21081c2c) << 0x19 | (param_5 ^ 0x21081c2c) >> 7) <
      (param_5 ^ 0x70d13249) + 0xc5d32c3b) {
    uVar23 = -0x5cb7f06e << (bVar11 & 0x1f) | 0xa3480f92U >> 0x20 - (bVar11 & 0x1f);
    bVar35 = *(uint32_t *)(uVar28 + 0x5c4bfc14) == ((param_5 | 1) * 0x338c - 0x70b4 & 0xffff);
  }
  else {
    bVar35 = *(uint32_t *)(uVar28 + 0x5c4bfc14) == 0;
    uVar23 = (param_5 + 0xdebe000e) * -0x3ba51c50 | (param_5 + 0xdebe000e) * 0x7c45ae3b >> 0x1c;
  }
  uVar24 = param_5 | 1;
  uVar25 = 1 << ((uint8_t)*(uint32_t *)(uVar28 + 0x5c4bfcec) & 0x1f);
  lStack_48 = *(int64_t *)(uVar28 + 0x5c4bfbf4);
  uVar43 = *(uint32_t *)(uVar28 + 0x5c4bfc08);
  uStack_60 = (int64_t)param_2 - lStack_48;
  uVar19 = (uint32_t)uStack_60 - uVar25;
  if ((uint32_t)uStack_60 - uVar43 <= uVar25) {
    uVar19 = uVar43;
  }
  if (!bVar35) {
    uVar19 = uVar43;
  }
  uVar43 = 4;
  if (*(uint32_t *)(uVar28 + 0x5c4bfcf8) < 4) {
    uVar43 = *(uint32_t *)(uVar28 + 0x5c4bfcf8);
  }
  iVar34 = 1 << ((uint8_t)uVar43 & 0x1f);
  lVar16 = *(int64_t *)(uVar28 + 0x5c4bfbfc);
  lVar14 = *(int64_t *)(uVar28 + 0x5c4bfc5c);
  uVar27 = *(uint64_t *)(uVar28 + 0x5c4bfc4c);
  lVar5 = *(int64_t *)(uVar28 + 0x5c4bfc24);
  puStack_98 = param_2;
  puVar1 = puStack_98;
  uStack_b0 = (uint64_t)*(uint32_t *)(uVar28 + 0x5c4bfc04);
  lStack_a8 = lVar16;
  cVar36 = (char)*(uint32_t *)(uVar28 + 0x5c4bfc20);
  sVar8 = (short)param_5;
  if (*(int *)(uVar28 + 0x5c4bfd18) == 0) {
    uVar43 = *(uint32_t *)(uVar28 + 0x5c4bfc18);
    uVar33 = (uint64_t)uVar43;
    lVar20 = lVar5;
    lVar32 = lVar14;
    if (0x180 < (uint32_t)uStack_60 - uVar43) {
      if (uVar43 < (uint32_t)(int)(short)(((sVar8 + 0x165U) * 0x400 | (uint16_t)(sVar8 + 0x165U) >> 6) -
                                     (short)uVar23)) {
        do {
          uVar13 = (uint32_t)uVar33;
          uVar21 = (uint64_t)(uVar13 & 7);
          plVar4 = (int64_t *)(lStack_48 + 8 + uVar33);
          uVar33 = uVar33 + 1;
          uVar25 = *(uint32_t *)(uVar28 + 0x5c4bfc2c + uVar21 * 4);
          *(int *)(uVar28 + 0x5c4bfc2c + uVar21 * 4) =
               (int)((*plVar4 * -0x30e4432345000000 ^ *(uint64_t *)(uVar28 + 0x5c4bfc4c)) >>
                    (0x38U - cVar36 & 0x3f));
          uVar21 = (uint64_t)(uVar25 >> 4 & 0xfffffff0);
          lVar20 = 0xf;
          if ((*(uint8_t *)(lVar5 + uVar21) & 0xf) != 1) {
            lVar20 = 0;
          }
          lVar20 = lVar20 + (uint64_t)(*(uint8_t *)(lVar5 + uVar21) - 1 & 0xf);
          *(char *)(lVar5 + uVar21) = (char)lVar20;
          *(char *)(lVar5 + uVar21 + lVar20) = (char)uVar25;
          *(uint32_t *)(lVar14 + uVar21 * 4 + lVar20 * 4) = uVar13;
        } while (uVar43 + 0x60 != uVar33);
        lVar20 = *(int64_t *)(uVar28 + 0x5c4bfc24);
        lVar32 = *(int64_t *)(uVar28 + 0x5c4bfc5c);
      }
      uVar43 = (uint32_t)uStack_60 - 0x20;
      uVar33 = (uint64_t)uVar43;
      plVar4 = (int64_t *)(lStack_48 + uVar33);
      uVar13 = ((int)(int64_t *)((int64_t)param_2 + 1) - (int)plVar4) + 1;
      uVar25 = 8;
      if (uVar13 < 8) {
        uVar25 = uVar13;
      }
      uVar13 = 0;
      if (plVar4 <= (int64_t *)((int64_t)param_2 + 1)) {
        uVar13 = uVar25;
      }
      if (uVar43 < ((uint32_t)uStack_60 + uVar13) - 0x20) {
        uVar21 = *(uint64_t *)(uVar28 + 0x5c4bfc4c);
        uVar29 = (uint16_t)(uVar23 + 0xae5c) >> 1 | (uint16_t)((uVar23 + 0xae5c & 1) != 0) << 0xf;
        bVar12 = 0x38 - (char)*(uint32_t *)(uVar28 + 0x5c4bfc20);
        if ((uVar13 & 1) !=
            (uint32_t)(uint16_t)(uVar29 << (bVar11 & 0xf) | uVar29 >> 0x10 - (bVar11 & 0xf))) {
          uVar33 = uVar33 + 1;
          *(int *)(uVar28 + 0x5c4bfc2c + (uint64_t)(uVar43 & 7) * 4) =
               (int)((*plVar4 * -0x30e4432345000000 ^ uVar21) >> (bVar12 & 0x3f));
        }
        if (uVar13 != 1) {
          puStack_98._0_4_ = (int)param_2;
          while( true ) {
            uVar25 = (uint32_t)uVar33;
            *(int *)(uVar28 + 0x5c4bfc2c + (uint64_t)(uVar25 & 7) * 4) =
                 (int)((*(int64_t *)(lStack_48 + uVar33) * -0x30e4432345000000 ^ uVar21) >>
                      (bVar12 & 0x3f));
            *(int *)(uVar28 + 0x5c4bfc2c + (uint64_t)(uVar25 + 1 & 7) * 4) =
                 (int)((*(int64_t *)(lStack_48 + 1 + uVar33) * -0x30e4432345000000 ^ uVar21) >>
                      (bVar12 & 0x3f));
            if ((((int)lStack_48 - uVar13) - (int)puStack_98) + uVar25 == -0x22) break;
            uVar33 = uVar33 + 2;
          }
        }
      }
    }
    if (uVar43 < (uint32_t)uStack_60) {
      lVar6 = *(int64_t *)(uVar28 + 0x5c4bfbf4);
      uVar33 = (uint64_t)uVar43;
      bVar12 = (uint8_t)*(uint32_t *)(uVar28 + 0x5c4bfc20);
      do {
        uVar43 = (param_5 ^ 0x7f35b3d1) + uVar23;
        uVar21 = (*(int64_t *)(lVar6 + 8 + uVar33) * -0x30e4432345000000 ^
                 *(uint64_t *)(uVar28 + 0x5c4bfc4c)) >>
                 ((char)(0x9195068f - uVar23 >> 0x15) * (char)uVar24 * (bVar12 ^ 199) +
                  (bVar12 ^ 0x38) * -7 + (bVar12 & 199) * 'X' + (bVar12 | 199) * -0x52 & 0x3f);
        uVar18 = (uint64_t)((uint32_t)uVar33 & 7);
        if ((uVar43 * 0x20000000 | uVar43 >> 3) == 0x4c30e9c4) {
          uVar43 = *(uint32_t *)(uVar28 + 0x5c4bfc2c + uVar18 * 4);
          *(int *)(uVar28 + 0x5c4bfc2c + uVar18 * 4) = (int)uVar21;
          uVar21 = (uint64_t)uVar43;
          uVar18 = (uint64_t)(uVar43 >> 4 & 0xfffffff0);
          puVar31 = (uint8_t *)(lVar20 + uVar18);
          bVar22 = *(uint8_t *)(lVar20 + uVar18) - 1 & 0xf;
          uVar43 = bVar22 + 0xf;
          if ((*(uint8_t *)(lVar20 + uVar18) & 0xf) != 1) {
            uVar43 = (uint32_t)bVar22;
          }
        }
        else {
          *(int *)(uVar28 + 0x5c4bfc2c + uVar18 * 4) = (int)uVar21;
          uVar18 = (uint64_t)((uint32_t)(uVar21 >> 4) & 0xffffff0);
          puVar31 = (uint8_t *)(lVar20 + uVar18);
          bVar22 = *(uint8_t *)(lVar20 + uVar18) - 1 & 0xf;
          uVar43 = bVar22 + 0xf;
          if ((*(uint8_t *)(lVar20 + uVar18) & 0xf) != 1) {
            uVar43 = (uint32_t)bVar22;
          }
        }
        *puVar31 = (char)uVar43;
        puVar31[uVar43] = (char)uVar21;
        *(uint32_t *)(lVar32 + uVar18 * 4 + (uint64_t)uVar43 * 4) = (uint32_t)uVar33;
        uVar33 = uVar33 + 1;
      } while ((uStack_60 & 0xffffffff) != uVar33);
    }
    *(uint32_t *)(uVar28 + 0x5c4bfc18) = (uint32_t)uStack_60;
    piStack_70 = (int *)(uint64_t)
                        *(uint32_t *)(uVar28 + 0x5c4bfc2c + (uint64_t)((uint32_t)uStack_60 & 7) * 4);
    *(int *)(uVar28 + 0x5c4bfc2c + (uint64_t)((uint32_t)uStack_60 & 7) * 4) =
         (int)((uVar27 ^ *(int64_t *)(lStack_48 + 8 + (uStack_60 & 0xffffffff)) *
                         -0x30e4432345000000) >> (0x38U - cVar36 & 0x3f));
    lStack_78 = lVar5;
  }
  else {
    uVar33 = *param_2;
    *(uint32_t *)(uVar28 + 0x5c4bfc18) = (uint32_t)uStack_60;
    piStack_70 = (int *)((uVar33 * -0x30e4432345000000 ^ uVar27) >> (0x38U - cVar36 & 0x3f));
  }
  *(int *)(uVar28 + 0x5c4bfc54) = *(int *)(uVar28 + 0x5c4bfc54) + (int)piStack_70;
  uVar9 = (uint8_t)((uint64_t)piStack_70 >> 0x10);
  uVar41 = (uint8_t)((uint64_t)piStack_70 >> 0x18);
  uVar38 = (uint8_t)((uint64_t)piStack_70 >> 8);
  auVar37._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar41,uVar41),uVar9),CONCAT14(uVar9,(int)piStack_70)) >>
            0x20);
  auVar37[3] = uVar38;
  auVar37[2] = uVar38;
  auVar37[0] = SUB81(piStack_70,0);
  auVar37[1] = auVar37[0];
  auVar37._8_8_ = 0;
  auVar37 = pshuflw(auVar37,auVar37,0);
  bVar12 = (uint8_t)uVar23 & 0xf;
  uVar27 = (uint64_t)((uint32_t)((uint64_t)piStack_70 >> 4) & 0xffffff0);
  pcVar2 = (char *)(lVar5 + uVar27);
  cVar36 = auVar37[0];
  auVar44[0] = -(*pcVar2 == cVar36);
  cVar39 = auVar37[1];
  auVar44[1] = -(pcVar2[1] == cVar39);
  cVar40 = auVar37[2];
  auVar44[2] = -(pcVar2[2] == cVar40);
  cVar42 = auVar37[3];
  auVar44[3] = -(pcVar2[3] == cVar42);
  auVar44[4] = -(pcVar2[4] == cVar36);
  auVar44[5] = -(pcVar2[5] == cVar39);
  auVar44[6] = -(pcVar2[6] == cVar40);
  auVar44[7] = -(pcVar2[7] == cVar42);
  auVar44[8] = -(pcVar2[8] == cVar36);
  auVar44[9] = -(pcVar2[9] == cVar39);
  auVar44[10] = -(pcVar2[10] == cVar40);
  auVar44[0xb] = -(pcVar2[0xb] == cVar42);
  auVar44[0xc] = -(pcVar2[0xc] == cVar36);
  auVar44[0xd] = -(pcVar2[0xd] == cVar39);
  auVar44[0xe] = -(pcVar2[0xe] == cVar40);
  auVar44[0xf] = -(pcVar2[0xf] == cVar42);
  uVar29 = (uint16_t)(SUB161(auVar44 >> 7,0) & 1) | (uint16_t)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
           (uint16_t)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
           (uint16_t)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
           (uint16_t)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
           (uint16_t)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
           (uint16_t)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
           (uint16_t)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
           (uint16_t)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
           (uint16_t)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
           (uint16_t)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
           (uint16_t)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
           (uint16_t)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
           (uint16_t)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
           (uint16_t)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar44[0xf] >> 7) << 0xf;
  bVar35 = (uint16_t)(0x3513 - ((uint16_t)(sVar8 + 0x184U) >> bVar12 | sVar8 + 0x184U << 0x10 - bVar12))
           < uVar29;
  if (~((uVar23 ^ 0x1c51ffd3) * uVar24) <
      (uVar24 * -0x59b05000 | uVar24 * 0x6234c9f6 >> 0x15) - uVar23) {
    bVar35 = (uint16_t)(((0x21d7U - sVar8) * 0x200 | (uint16_t)(0x21d7U - sVar8) >> 7) - (short)uVar23)
             == uVar29;
  }
  lVar14 = lVar14 + uVar27 * 4;
  uVar43 = (uint32_t)*(uint8_t *)(lVar5 + uVar27);
  puStack_98 = puVar1;
  if (bVar35) {
    uVar21 = 0;
  }
  else {
    bVar12 = *(uint8_t *)(lVar5 + uVar27) & 0xf;
    uVar33 = (uint64_t)(uint16_t)(uVar29 >> bVar12 | uVar29 << 0x10 - bVar12);
    uVar21 = 0;
    do {
      lVar20 = lStack_a8;
      iVar7 = 0;
      for (uVar18 = uVar33; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x8000000000000000) {
        iVar7 = iVar7 + 1;
      }
      uVar25 = iVar7 + uVar43 & 0xf;
      if (uVar25 != 0) {
        uVar25 = *(uint32_t *)(lVar14 + (uint64_t)uVar25 * 4);
        if (uVar25 < uVar19) break;
        iVar34 = iVar34 + -1;
        auStack_1b8[uVar21] = uVar25;
        uVar21 = uVar21 + 1;
        lVar16 = lVar20;
      }
      uVar33 = uVar33 & uVar33 - 1;
    } while (uVar33 != 0 && iVar34 != 0);
  }
  uVar19 = uVar23 | 1;
  iVar34 = 0xf;
  if ((uVar43 & 0xf) != 1) {
    iVar34 = 0;
  }
  if ((int64_t)(uint64_t)(uVar19 * 0x785f4cc4 + param_5) <=
      (int64_t)(int)((param_5 ^ 0x1683ac45) - uVar23 ^ 0xcec59c84)) {
    iVar34 = 0;
  }
  uVar25 = uVar43 - 1;
  if ((uVar19 * 0x2ee1f688 | uVar19 * -0x7a23c12f >> 0x1d) - param_5 == 0x71639538) {
    uVar25 = ~uVar43;
  }
  uVar43 = (uVar25 & 0xf) + iVar34;
  *(uint8_t *)(lVar5 + uVar27) = (char)uVar43;
  ((uint8_t *)(lVar5 + uVar27))[uVar43] = (char)piStack_70;
  iVar34 = *(int *)(uVar28 + 0x5c4bfc18);
  *(int *)(uVar28 + 0x5c4bfc18) = iVar34 + 1;
  *(int *)(lVar14 + (uint64_t)uVar43 * 4) = iVar34;
  uVar28 = 3;
  if (uVar21 != uVar23 + 0xf836ae5c) {
    pcStack_50 = (char *)(lVar16 + uStack_b0);
    puStack_58 = (uint64_t *)(lStack_48 + uStack_b0);
    puStack_68 = (uint64_t *)(param_3 - 0x41ec0de);
    puStack_80 = (uint64_t *)(param_3 - 0x41ec0dc);
    iVar34 = (uint32_t)uStack_60 + 3;
    lStack_78 = CONCAT44(lStack_78._4_4_,iVar34);
    puVar1 = (uint64_t *)(param_3 - 0x41ec0e2);
    puStack_a0 = (uint64_t *)((int64_t)puStack_98 + 4);
    piStack_70 = (int *)((int64_t)puStack_98 + 0xc);
    lStack_90 = lVar16 + 0xc;
    uStack_60 = uStack_b0 + lStack_48 + 8;
    uVar33 = 0;
    uVar27 = 3;
    do {
      uVar43 = auStack_1b8[uVar33];
      uVar28 = (uint64_t)uVar43;
      if (uVar43 < (uint32_t)uStack_b0) {
        if (*(int *)(lVar16 + uVar28) == (int)*puStack_98) {
          puVar10 = (uint64_t *)(lVar16 + uVar28 + 4);
          puVar30 = (uint64_t *)(((int64_t)pcStack_50 - (int64_t)puVar10) + (int64_t)puStack_a0)
          ;
          if (puVar26 <= puVar30) {
            puVar30 = puVar26;
          }
          uVar19 = (0x1b00c9d - uVar23) * uVar24;
          puVar15 = puStack_a0;
          puVar17 = puVar10;
          if (puStack_a0 < (uint64_t *)((int64_t)puVar30 - 7U) ==
              (uVar19 * 0x8000000 | uVar19 >> 5) * -0x22660d23 < 0xbc1b4a88 - (uVar23 ^ 0xbe537cec))
          {
code_r0x7fffa547afba:
            if ((puVar15 < (uint64_t *)((int64_t)puVar30 - 3U)) &&
               ((int)*puVar17 == (int)*puVar15)) {
              puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
              puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
            }
            if ((puVar15 < (uint64_t *)((int64_t)puVar30 - 1U)) &&
               ((short)*puVar17 == (short)*puVar15)) {
              puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
              puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
            }
            if (puVar15 < puVar30) {
              puVar15 = (uint64_t *)
                        ((int64_t)puVar15 + (uint64_t)((char)*puVar17 == (char)*puVar15));
            }
            uVar18 = (int64_t)puVar15 - (int64_t)puStack_a0;
          }
          else if (*puVar10 == *puStack_a0) {
            lVar14 = lStack_90 + uVar28;
            lVar16 = 0;
            do {
              puVar15 = (uint64_t *)((int64_t)piStack_70 + lVar16);
              if ((uint64_t *)((int64_t)puVar30 - 7U) <= puVar15) {
                puVar17 = (uint64_t *)(lVar14 + lVar16);
                goto code_r0x7fffa547afba;
              }
              uVar28 = *(uint64_t *)(lVar14 + lVar16);
              lVar16 = lVar16 + 8;
            } while (uVar28 == *puVar15);
            uVar19 = 0;
            for (uVar28 = *puVar15 ^ uVar28; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar19 = uVar19 + 1;
            }
            uVar18 = (uint64_t)(uVar19 >> 3) + lVar16;
          }
          else {
            uVar19 = 0;
            for (uVar28 = *puVar10 ^ *puStack_a0; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar19 = uVar19 + 1;
            }
            uVar18 = (uint64_t)(uVar19 >> 3);
          }
          if ((char *)((int64_t)puVar10 + uVar18) == pcStack_50) {
            puVar15 = (uint64_t *)((int64_t)puStack_a0 + uVar18);
            puVar30 = puVar15;
            puVar10 = puStack_58;
            if (puVar15 < puVar1) {
              if (*puStack_58 == *puVar15) {
                lVar14 = 0;
                do {
                  puVar30 = (uint64_t *)((int64_t)piStack_70 + lVar14 + uVar18);
                  if (puVar1 <= puVar30) {
                    puVar10 = (uint64_t *)(lVar14 + uStack_60);
                    goto LAB_7fffa547b10b;
                  }
                  puVar10 = (uint64_t *)(uStack_60 + lVar14);
                  lVar14 = lVar14 + 8;
                } while (*puVar10 == *puVar30);
                uVar19 = 0;
                for (uVar28 = *puVar30 ^ *puVar10; (uVar28 & 1) == 0;
                    uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                  uVar19 = uVar19 + 1;
                }
                uVar28 = (uint64_t)(uVar19 >> 3) + lVar14;
              }
              else {
                uVar19 = 0;
                for (uVar28 = *puStack_58 ^ *puVar15; (uVar28 & 1) == 0;
                    uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                  uVar19 = uVar19 + 1;
                }
                uVar28 = (uint64_t)(uVar19 >> 3);
              }
            }
            else {
LAB_7fffa547b10b:
              if ((puVar30 < puStack_68) && ((int)*puVar10 == (int)*puVar30)) {
                puVar10 = (uint64_t *)((int64_t)puVar10 + 4);
                puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
              }
              if ((puVar30 < puStack_80) && ((short)*puVar10 == (short)*puVar30)) {
                puVar10 = (uint64_t *)((int64_t)puVar10 + 2);
                puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
              }
              if (puVar30 < puVar26) {
                puVar30 = (uint64_t *)
                          ((int64_t)puVar30 + (uint64_t)((char)*puVar10 == (char)*puVar30));
              }
              uVar28 = (int64_t)puVar30 - (int64_t)puVar15;
            }
            uVar3 = uVar28 + uVar18;
            uVar18 = uVar28 | uVar18;
            if ((uint64_t)
                (((0x56c98e99 << (bVar11 & 0x1f) | 0x56c98e99U >> 0x20 - (bVar11 & 0x1f)) ^ uVar23)
                + 0xf3e235d0) != (int64_t)(int)((uVar23 + 0xd6a97e05 ^ param_5) * 0x23995bed)) {
              uVar18 = uVar3;
            }
          }
          bVar12 = (uint8_t)uVar23 & 0x1f;
          uVar28 = uVar18 | 4;
          if (~((-0x59b52a02 - uVar23) * -0x5c810cc5) ==
              (~(uVar24 * 0x10e79072) >> bVar12 | ~(uVar24 * 0x10e79072) << 0x20 - bVar12)) {
            uVar28 = uVar18 + 4;
          }
          lVar16 = lStack_a8;
          goto LAB_7fffa547b1f0;
        }
      }
      else {
        puVar30 = (uint64_t *)(lStack_48 + uVar28);
        if (*(int *)((uVar27 - 3) + (int64_t)puVar30) ==
            *(int *)((int64_t)puStack_98 + (uVar27 - 3))) {
          puVar10 = puStack_98;
          if (puStack_98 < puVar1) {
            if (*puVar30 != *puStack_98) {
              uVar19 = 0;
              for (uVar28 = *puVar30 ^ *puStack_98; (uVar28 & 1) == 0;
                  uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                uVar19 = uVar19 + 1;
              }
              uVar28 = (uint64_t)(uVar19 >> 3);
              goto LAB_7fffa547b1f0;
            }
            lVar14 = 8;
LAB_7fffa547ae60:
            puVar10 = (uint64_t *)((int64_t)puStack_98 + lVar14);
            if (puVar10 < puVar1) {
              uVar28 = *puVar10;
              uVar18 = *(uint64_t *)((int64_t)puVar30 + lVar14);
              bVar35 = uVar18 < uVar28;
              if ((uVar23 ^ 0xf458a04e) - param_5 <
                  ((param_5 + 0xc7da3307) * 2 | (uint32_t)((int)(param_5 + 0xc7da3307) < 0)) + uVar23) {
                bVar35 = uVar18 == uVar28;
              }
              if (bVar35) goto code_r0x7fffa547aec1;
              uVar19 = 0;
              for (uVar18 = uVar18 ^ uVar28; (uVar18 & 1) == 0;
                  uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                uVar19 = uVar19 + 1;
              }
              uVar28 = (uint64_t)(uVar19 >> 3) + lVar14;
              lVar16 = lStack_a8;
              goto LAB_7fffa547b1f0;
            }
            puVar30 = (uint64_t *)((int64_t)puVar30 + lVar14);
            lVar16 = lStack_a8;
          }
          if ((puVar10 < puStack_68) && ((int)*puVar30 == (int)*puVar10)) {
            puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
            puVar10 = (uint64_t *)((int64_t)puVar10 + 4);
          }
          if ((puVar10 < puStack_80) && ((short)*puVar30 == (short)*puVar10)) {
            puVar10 = (uint64_t *)((int64_t)puVar10 + 2);
            puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
          }
          if (puVar10 < puVar26) {
            puVar10 = (uint64_t *)
                      ((int64_t)puVar10 + (uint64_t)((char)*puVar30 == (char)*puVar10));
          }
          uVar28 = (int64_t)puVar10 - (int64_t)puStack_98;
LAB_7fffa547b1f0:
          uVar19 = (uVar23 + 0x80426277 >> (bVar11 & 0x1f) |
                   uVar23 + 0x80426277 << 0x20 - (bVar11 & 0x1f)) ^ 0x19c48aed;
          bVar35 = (int64_t)uVar27 < (int64_t)uVar28;
          if ((uVar19 << 0x10 | uVar19 >> 0x10) <= (-0x1e42ff07 - uVar23) * uVar24) {
            bVar35 = uVar27 < uVar28;
          }
          if (bVar35) {
            *puStack_88 = (uint64_t)(iVar34 - uVar43);
            uVar27 = uVar28;
            if ((uint64_t *)((int64_t)puStack_98 + uVar28) == puVar26) break;
          }
        }
      }
      uVar28 = uVar27;
      uVar33 = uVar33 + 1;
      uVar27 = uVar28;
    } while (uVar33 != uVar21);
  }
  return uVar28 * 0x4010000000 | uVar28 * 0x401 >> 0x24;
code_r0x7fffa547aec1:
  lVar14 = lVar14 + 8;
  goto LAB_7fffa547ae60;
}


// ============================================================================
// Function : FUN_7fffa547b330  |  RVA: 0xd0b330  |  Size: 1595 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa547b781) */

void FUN_7fffa547b330(uint64_t param_1,uint64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  int64_t *plVar3;
  uint8_t bVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint8_t *pbVar9;
  int64_t lVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  uint64_t in_R11;
  uint64_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  
  uVar13 = (in_R11 << 0x19 | in_R11 >> 0x27) ^ (in_R11 << 0x38 | in_R11 >> 8) ^ in_R11;
  uVar13 = (uVar13 << 0x32 | uVar13 >> 0xe) ^ (uVar13 << 0x30 | uVar13 >> 0x10) ^ uVar13;
  uVar13 = (uVar13 << 0x20 | uVar13 >> 0x20) ^ (uVar13 << 0x24 | uVar13 >> 0x1c) ^ uVar13;
  plVar3 = (int64_t *)(uVar13 << 0x38 | uVar13 >> 8);
  uVar15 = (uint32_t)param_2;
  lVar10 = *plVar3;
  uVar13 = plVar3[1];
  bVar4 = (uint8_t)param_2;
  if ((uVar15 ^ 0x2b19d707) < uVar13) {
    pbVar9 = (uint8_t *)(lVar10 + 0xe);
    while( true ) {
      uVar13 = uVar13 - 1;
      if ((uint64_t)~(uVar15 ^ 0x419e939c) == 0xffffffffc99072e0) {
        uVar11 = uVar15 ^ 0xe1278768;
      }
      else {
        uVar11 = 0x9a132028;
      }
      if ((int64_t)
          (int)((0xd059e4e8U >> (bVar4 & 0x1f) | -0x2fa61b18 << 0x20 - (bVar4 & 0x1f)) ^ uVar11) <
          (int64_t)(uint64_t)((uVar11 | 1) * 0xa3968f0 ^ 0x5339a674)) {
        uVar12 = (0xee8bf83dU >> (bVar4 & 0x1f) | -0x117407c3 << 0x20 - (bVar4 & 0x1f)) + 0xc8d5f9fb
        ;
        bVar1 = (uint8_t)uVar11 & 0x1f;
        uVar14 = (uint64_t)(int)(uVar12 << bVar1 | uVar12 >> 0x20 - bVar1);
      }
      else {
        uVar14 = (uint64_t)(uVar11 | 1) * 0x8bbcf832 & 0xffffffff;
      }
      uVar6 = 0xa5ca15c8 - (uVar14 - 0xffb3b9f94f);
      uVar7 = ((uint64_t)pbVar9[-0xe] ^ 0x4826d319c633f7df) * 0x1000000041b;
      uVar8 = (param_2 | 1) * 0x174b928b80dce72;
      bVar2 = (uint8_t)uVar14 & 0x3f;
      uVar16 = (uVar15 | 1) * -0xaef4363;
      bVar1 = (uint8_t)uVar14 & 0x1f;
      uVar12 = 0x5eaddc5b - (uint32_t)uVar14 ^ uVar15;
      uVar5 = uVar7 | pbVar9[-0xd];
      if ((uVar16 << bVar1 | uVar16 >> 0x20 - bVar1) <
          (uVar12 >> 1 | (uint32_t)((uVar12 & 1) != 0) << 0x1f) + 0x72b22f90) {
        uVar5 = pbVar9[-0xd] ^ uVar7;
      }
      uVar7 = uVar5 * 0x1000000041b ^ (uint64_t)pbVar9[-0xc];
      uVar12 = (uint32_t)uVar6 ^ 0x8c44132b;
      uVar6 = (((((((uint64_t)pbVar9[-0xb] ^
                   (uint64_t)uVar12 * (uVar7 & 0xffffffff) +
                   ((uVar5 * 0x1000000041b >> 0x20) * (uint64_t)uVar12 +
                    (uVar6 >> 0x20) * (uVar7 & 0xffffffff) << 0x20)) * 0x1000000041b ^
                  (uint64_t)pbVar9[-10]) * 0x1000000041b ^ (uint64_t)pbVar9[-9]) * 0x1000000041b ^
                (uint64_t)pbVar9[-8]) * 0x1000000041b ^ (uint64_t)pbVar9[-7]) * 0x1000000041b ^
              (uint64_t)pbVar9[-6]) * 0x1000000041b;
      uVar5 = uVar6 ^ pbVar9[-5];
      if ((uint64_t)
          (int64_t)
          (int)(uVar11 + 0x3c66bb41 >> (bVar4 & 0x1f) | uVar11 + 0x3c66bb41 << 0x20 - (bVar4 & 0x1f)
               ) <= (uint64_t)((uVar15 + 0x7b05390f) * ((uint32_t)uVar14 | 1) + 0x57afa8cd)) {
        uVar5 = (uint64_t)((uint32_t)pbVar9[-5] & (uint32_t)uVar6);
      }
      if ((uVar14 ^ (((((uVar5 * 0x1000000041b ^ (uint64_t)pbVar9[-4]) *
                        ((uVar8 << bVar2 | uVar8 >> 0x40 - bVar2) - 0x40000015) ^
                       (uint64_t)pbVar9[-3]) * 0x1000000041b ^ (uint64_t)pbVar9[-2]) *
                      0x1000000041b ^ (uint64_t)pbVar9[-1]) * 0x1000000041b ^ (uint64_t)*pbVar9) *
                    0x1000000041b ^ 0x9360635a384993b8) == 0xffffffffffffffff) {
        return;
      }
      if (uVar13 < 0xf) break;
      pbVar9 = pbVar9 + 1;
    }
    lVar10 = *plVar3;
    uVar13 = plVar3[1];
  }
  if (((uVar15 + 0x839628f7) * -0xad19000 | (uVar15 + 0x839628f7) * 0x5d4f52e7 >> 0x14) < uVar13) {
    pbVar9 = (uint8_t *)(lVar10 + 0xd);
    do {
      uVar13 = uVar13 - 1;
      if (~((uVar15 | 1) * -0x7d16acfb) < 0xa9f1dd57) {
        uVar11 = (uVar15 + 0x2e503f25) * 0x2000 | uVar15 + 0x2e503f25 >> 0x13;
      }
      else {
        uVar11 = 0xc7eb39aeU >> (bVar4 & 0x1f) | -0x3814c652 << 0x20 - (bVar4 & 0x1f);
      }
      uVar14 = 0xf27fffff76676c33 - (uint64_t)uVar11 ^ 0xffffffffb3a1a104;
    } while (((((((((((((((((uint64_t)pbVar9[-0xd] ^ 0x4826d319c633f7df) * 0x1000000041b ^
                          (uint64_t)pbVar9[-0xc]) * 0x1000000041b ^ (uint64_t)pbVar9[-0xb]) *
                         0x1000000041b ^ (uint64_t)pbVar9[-10]) * 0x1000000041b ^
                       (uint64_t)pbVar9[-9]) * 0x1000000041b ^ (uint64_t)pbVar9[-8]) *
                      0x1000000041b ^ (uint64_t)pbVar9[-7]) * 0x1000000041b ^ (uint64_t)pbVar9[-6]
                    ) * 0x1000000041b ^ (uint64_t)pbVar9[-5]) * 0x1000000041b ^
                  (uint64_t)pbVar9[-4]) * 0x1000000041b ^ (uint64_t)pbVar9[-3]) * 0x1000000041b ^
                (uint64_t)pbVar9[-2]) *
                (uVar14 << (bVar4 & 0x3f) | uVar14 >> 0x40 - (bVar4 & 0x3f)) ^ (uint64_t)pbVar9[-1]
               ) * 0x1000000041b ^ (uint64_t)*pbVar9) * 0x1000000041b != 0x2a81e8146f0d591e) &&
            (pbVar9 = pbVar9 + 1, 0xd < uVar13));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa547b980  |  RVA: 0xd0b980  |  Size: 26254 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa547b980(void) {
    /* +0xd0b980 */ __asm { PUSH RBP }
    /* +0xd0b981 */ __asm { PUSH R12 }
    /* +0xd0b983 */ __asm { PUSH RBX }
    /* +0xd0b984 */ __asm { PUSH RSI }
    /* +0xd0b985 */ __asm { PUSH R15 }
    /* +0xd0b987 */ __asm { PUSH R13 }
    /* +0xd0b989 */ __asm { PUSH RDI }
    /* +0xd0b98a */ __asm { PUSH R14 }
    /* +0xd0b98c */ __asm { SUB RSP,0x2f8 }
    /* +0xd0b993 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xd0b99b */ __asm { MOVDQA xmmword ptr [RBP + 0x260],XMM15 }
    /* +0xd0b9a4 */ __asm { MOVAPS xmmword ptr [RBP + 0x250],XMM7 }
    /* +0xd0b9ab */ __asm { MOV qword ptr [RBP + 0x248],-0x2 }
    /* +0xd0b9b6 */ __asm { MOV RCX,R9 }
    /* +0xd0b9b9 */ __asm { MOV EDX,0xc2324c80 }
    /* +0xd0b9be */ __asm { MOVQ R11,XMM4 }
    /* +0xd0b9c3 */ __asm { XOR EDX,ECX }
    /* +0xd0b9c5 */ __asm { IMUL R14D,EDX,-0x42727c77 }
    /* +0xd0b9cc */ __asm { XOR R14D,0xc000071c }
    /* +0xd0b9d3 */ __asm { MOV RAX,-0x31d682a4b918247b }
    /* +0xd0b9dd */ __asm { IMUL RAX,R11 }
    /* +0xd0b9e1 */ __asm { MOV R10,-0xe37848734d1b02d }
    /* +0xd0b9eb */ __asm { ADD R10,RAX }
    /* +0xd0b9ee */ __asm { MOV R11,R10 }
    /* +0xd0b9f1 */ __asm { MOV dword ptr [RBP + 0x1a0],0xbaf7d544 }
    /* +0xd0b9fb */ __asm { MOV EDX,dword ptr [RBP + 0x1a0] }
    /* +0xd0ba01 */ __asm { MOV R9W,0x1ed1 }
    /* +0xd0ba06 */ __asm { ADD R9D,0xffffe12f }
    /* +0xd0ba0d */ __asm { ROR R9W,CL }
    /* +0xd0ba11 */ __asm { SHL R11,0x35 }
    /* +0xd0ba15 */ __asm { AND EDX,0x1 }
    /* +0xd0ba18 */ __asm { MOVZX R9D,R9W }
    /* +0xd0ba1c */ __asm { CMP EDX,R9D }
    /* +0xd0ba1f */ __asm { JZ 0x7fffa547ba28 }
    /* +0xd0ba21 */ __asm { CMP CL,uint8_t ptr [RBP + 0x6b5ccdd3] }
    /* +0xd0ba27 */ __asm { PUSH RDI }
    /* +0xd0ba28 */ __asm { XOR R11,R10 }
    /* +0xd0ba2b */ __asm { MOV R9D,ECX }
    /* +0xd0ba2e */ __asm { OR R9D,0x1 }
    /* +0xd0ba32 */ __asm { MOV EDX,0x69e90b9e }
    /* +0xd0ba37 */ __asm { IMUL EDX,R9D }
    /* +0xd0ba3b */ __asm { ADD EDX,0xb5bdffa6 }
    /* +0xd0ba41 */ __asm { MOVSXD R10,EDX }
    /* +0xd0ba44 */ __asm { MOV EDX,0x32533e0f }
    /* +0xd0ba49 */ __asm { IMUL EAX,EDX,-0x11ab3e71 }
    /* +0xd0ba4f */ __asm { SUB EAX,ECX }
    /* +0xd0ba51 */ __asm { CMP R10,RAX }
    /* +0xd0ba54 */ __asm { MOV qword ptr [RBP + 0x108],R9 }
    /* +0xd0ba5b */ __asm { JGE 0x7fffa547bac6 }
    /* +0xd0ba5d */ __asm { MOV R15D,0x4d22307e }
    /* +0xd0ba63 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xd0ba6a */ __asm { NOP }
    /* +0xd0ba6c */ __asm { MOV R10,0x0 }
    /* +0xd0ba73 */ __asm { SUB R15D,ECX }
    /* +0xd0ba76 */ __asm { ROL R15D,0xe }
    /* +0xd0ba7a */ __asm { MOV dword ptr [RBP + 0x154],0x4c991918 }
    /* +0xd0ba84 */ __asm { MOV EDX,dword ptr [RBP + 0x154] }
    /* +0xd0ba8a */ __asm { MOV R10,0x4fab0f9f8fd072c4 }
    /* +0xd0ba94 */ __asm { MOV R13,0x4fab0fda8f9c728d }
    /* +0xd0ba9e */ __asm { MOV RBX,0x1f36b4bc0d13e4e3 }
    /* +0xd0baa8 */ __asm { MOV qword ptr [RBP + 0x50],R10 }
    /* +0xd0baac */ __asm { MOV R10,0x1f64b4f90d40e4b6 }
    /* +0xd0bab6 */ __asm { MOV qword ptr [RBP + 0x40],R10 }
    /* +0xd0baba */ __asm { MOV RDI,-0x7c9a946e51875990 }
    /* +0xd0bac4 */ __asm { JMP 0x7fffa547bb25 }
    /* +0xd0bac6 */ __asm { MOV EDX,dword ptr [RBP + 0x154] }
    /* +0xd0bacc */ __asm { MOV R15D,0x8fda054a }
    /* +0xd0bad2 */ __asm { XOR R15D,0xa464b0bb }
    /* +0xd0bad9 */ __asm { IMUL R15D,R9D }
    /* +0xd0badd */ __asm { NOT R15D }
    /* +0xd0bae0 */ __asm { MOV R10,0x4fab0f9f8fd072c4 }
    /* +0xd0baea */ __asm { MOV R13,0x4fab0fda8f9c728d }
    /* +0xd0baf4 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xd0bafb */ __asm { NOP }
    /* +0xd0bafc */ __asm { MOV RDX,0x0 }
    /* +0xd0bb03 */ __asm { MOV qword ptr [RBP + 0x50],R10 }
    /* +0xd0bb07 */ __asm { MOV dword ptr [RBP + 0x154],0x4c991918 }
    /* +0xd0bb11 */ __asm { MOV RDI,-0x7c9a946e51875990 }
    /* +0xd0bb1b */ __asm { MOV RBX,0x1f36b4bc0d13e4e3 }
    /* +0xd0bb25 */ __asm { MOV R12,RCX }
    /* +0xd0bb28 */ __asm { ADD R14,R11 }
    /* +0xd0bb2b */ __asm { MOV qword ptr [RBP + 0x10],R14 }
    /* +0xd0bb2f */ __asm { MOV DX,0x237a }
    /* +0xd0bb33 */ __asm { LEA R11,[0x7fffa47c741c] }
    /* +0xd0bb3a */ __asm { MOV qword ptr [RBP + 0x1e0],R11 }
    /* +0xd0bb41 */ __asm { MOV R9W,0xfdf1 }
    /* +0xd0bb46 */ __asm { MOV AX,0xdac2 }
    /* +0xd0bb4a */ __asm { LEA R11,[0x7fffa47caebf] }
    /* +0xd0bb51 */ __asm { MOV qword ptr [RBP + 0x20],R11 }
    /* +0xd0bb55 */ __asm { MOV ECX,0x60435a6f }
    /* +0xd0bb5a */ __asm { MOV R8D,0xb744547a }
    /* +0xd0bb60 */ __asm { LEA R10,[RBP + 0x1a0] }
    /* +0xd0bb67 */ __asm { LEA RSI,[0x7fffa47c464a] }
    /* +0xd0bb6e */ __asm { MOV R14,-0x7e6df35855008406 }
    /* +0xd0bb78 */ __asm { MOV qword ptr [RBP + 0x58],R14 }
    /* +0xd0bb7c */ __asm { MOV R11,-0x7cdc942151d559e0 }
    /* +0xd0bb86 */ __asm { MOV qword ptr [RBP + 0x48],R11 }
    /* +0xd0bb8a */ __asm { MOVDQA XMM3,xmmword ptr [RBP + 0x40] }
    /* +0xd0bb8f */ __asm { MOV qword ptr [RBP + 0x38],RBX }
    /* +0xd0bb93 */ __asm { MOV qword ptr [RBP + 0x1a0],RBX }
    /* +0xd0bb9a */ __asm { MOV qword ptr [RBP + 0x140],RDI }
    /* +0xd0bba1 */ __asm { MOV qword ptr [RBP + 0x1a8],RDI }
    /* +0xd0bba8 */ __asm { MOV qword ptr [RBP + 0xa8],R13 }
    /* +0xd0bbaf */ __asm { MOV qword ptr [RBP + 0x1b0],R13 }
    /* +0xd0bbb6 */ __asm { MOV qword ptr [RBP + 0x138],R14 }
    /* +0xd0bbbd */ __asm { MOV qword ptr [RBP + 0x1b8],R14 }
    /* +0xd0bbc4 */ __asm { PXOR XMM3,xmmword ptr [R10] }
    /* +0xd0bbc9 */ __asm { ADD EDX,R12D }
    /* +0xd0bbcc */ __asm { MOVDQA XMM5,xmmword ptr [RBP + 0x50] }
    /* +0xd0bbd1 */ __asm { PXOR XMM5,xmmword ptr [R10 + 0x10] }
    /* +0xd0bbd7 */ __asm { XOR ECX,R12D }
    /* +0xd0bbda */ __asm { NOT ECX }
    /* +0xd0bbdc */ __asm { ROR ECX,0x1 }
    /* +0xd0bbde */ __asm { MOVDQA xmmword ptr [RBP + 0x40],XMM3 }
    /* +0xd0bbe3 */ __asm { XOR ECX,R15D }
    /* +0xd0bbe6 */ __asm { MOVSXD R11,ECX }
    /* +0xd0bbe9 */ __asm { LEA R10,[0x7fffa517f6f2] }
    /* +0xd0bbf0 */ __asm { ADD R10,R11 }
    /* +0xd0bbf3 */ __asm { MOV R14D,R12D }
    /* +0xd0bbf6 */ __asm { OR R14D,0x1 }
    /* +0xd0bbfa */ __asm { IMUL R11D,EDX,-0x117 }
    /* +0xd0bc01 */ __asm { IMUL EAX,R14D }
    /* +0xd0bc05 */ __asm { NOT EAX }
    /* +0xd0bc07 */ __asm { NEG R8D }
    /* +0xd0bc0a */ __asm { MOV qword ptr [RBP + 0x1e8],R12 }
    /* +0xd0bc11 */ __asm { LEA EBX,[R12 + R8*0x1] }
    /* +0xd0bc15 */ __asm { ADD EBX,0xbc3e51b0 }
    /* +0xd0bc1b */ __asm { ROR AX,0x1 }
    /* +0xd0bc1e */ __asm { ADD R9D,0xffffa968 }
    /* +0xd0bc25 */ __asm { MOV ECX,R15D }
    /* +0xd0bc28 */ __asm { ROR R9W,CL }
    /* +0xd0bc2c */ __asm { NOT R11D }
    /* +0xd0bc2f */ __asm { MOV qword ptr [RBP],R14 }
    /* +0xd0bc33 */ __asm { IMUL R9D,R14D }
    /* +0xd0bc37 */ __asm { ROL R9W,0x4 }
    /* +0xd0bc3c */ __asm { MOVSX R12,R11W }
    /* +0xd0bc40 */ __asm { MOVZX R14D,R9W }
    /* +0xd0bc44 */ __asm { MOVSX RDI,AX }
    /* +0xd0bc48 */ __asm { MOVDQA xmmword ptr [RBP + 0x50],XMM5 }
    /* +0xd0bc4d */ __asm { LEA RCX,[RBP + 0x40] }
    /* +0xd0bc51 */ __asm { CALL R10 }
    /* +0xd0bc54 */ __asm { ROL EBX,0x1a }
    /* +0xd0bc57 */ __asm { MOV qword ptr [RBP + 0x158],RAX }
    /* +0xd0bc5e */ __asm { MOVSXD R11,EBX }
    /* +0xd0bc61 */ __asm { ADD R11,qword ptr [RBP + 0x20] }
    /* +0xd0bc65 */ __asm { MOVZX EDX,uint8_t ptr [RSI + RDI*0x1 + 0x8] }
    /* +0xd0bc6a */ __asm { MOV R10,qword ptr [RBP + 0x1e0] }
    /* +0xd0bc71 */ __asm { MOV R10,qword ptr [R10 + R12*0x1 + 0x41] }
    /* +0xd0bc76 */ __asm { XOR R10,qword ptr [R11 + RDX*0x8 + 0x19] }
    /* +0xd0bc7b */ __asm { MOV qword ptr [RBP + 0x1a0],R10 }
    /* +0xd0bc82 */ __asm { MOV R11,qword ptr [RBP + 0x1a0] }
    /* +0xd0bc89 */ __asm { MOV qword ptr [RBP + 0x1e0],R11 }
    /* +0xd0bc90 */ __asm { MOV R11,qword ptr GS:[R14] }
    /* +0xd0bc94 */ __asm { MOV R10,0x414b1a3de901c112 }
    /* +0xd0bc9e */ __asm { MOV RAX,-0x44813544 }
    /* +0xd0bca5 */ __asm { SUB RAX,R10 }
    /* +0xd0bca8 */ __asm { MOV ECX,R15D }
    /* +0xd0bcab */ __asm { ROR RAX,CL }
    /* +0xd0bcae */ __asm { ROL RAX,0x1d }
    /* +0xd0bcb2 */ __asm { CMP qword ptr [R11 + 0x30],RAX }
    /* +0xd0bcb6 */ __asm { NOP }
    /* +0xd0bcb7 */ __asm { NOP }
    /* +0xd0bcb8 */ __asm { NOP }
    /* +0xd0bcb9 */ __asm { NOP }
    /* +0xd0bcba */ __asm { NOP }
    /* +0xd0bcbb */ __asm { MOV R8,qword ptr [RBP + 0x10] }
    /* +0xd0bcbf */ __asm { MOV R11,R8 }
    /* +0xd0bcc2 */ __asm { SHR R11,0x2d }
    /* +0xd0bcc6 */ __asm { CMP qword ptr [RBP + 0x1e0],0x0 }
    /* +0xd0bcce */ __asm { SETZ R9B }
    /* +0xd0bcd2 */ __asm { MOV EAX,0xabcff228 }
    /* +0xd0bcd7 */ __asm { XOR EAX,0xf71ab264 }
    /* +0xd0bcdc */ __asm { MOV RSI,qword ptr [RBP + 0x1e8] }
    /* +0xd0bce3 */ __asm { MOV ECX,ESI }
    /* +0xd0bce5 */ __asm { ROR EAX,CL }
    /* +0xd0bce7 */ __asm { XOR EAX,R15D }
    /* +0xd0bcea */ __asm { MOV ECX,R15D }
    /* +0xd0bced */ __asm { OR ECX,0x1 }
    /* +0xd0bcf0 */ __asm { MOV EDX,0xd2369de0 }
    /* +0xd0bcf5 */ __asm { ADD EDX,ESI }
    /* +0xd0bcf7 */ __asm { MOV R10D,0xf50b926f }
    /* +0xd0bcfd */ __asm { SUB R10D,EDX }
    /* +0xd0bd00 */ __asm { MOV qword ptr [RBP + -0x28],RCX }
    /* +0xd0bd04 */ __asm { IMUL R10D,ECX }
    /* +0xd0bd08 */ __asm { CMP RAX,R10 }
    /* +0xd0bd0b */ __asm { SETG R10B }
    /* +0xd0bd0f */ __asm { CMP R10B,R9B }
    /* +0xd0bd12 */ __asm { MOV qword ptr [RBP + 0x18],R15 }
    /* +0xd0bd16 */ __asm { JNZ 0x7fffa5481b26 }
    /* +0xd0bd1c */ __asm { XOR R8,R11 }
    /* +0xd0bd1f */ __asm { MOV qword ptr [RBP + 0x10],R8 }
    /* +0xd0bd23 */ __asm { NOP }
    /* +0xd0bd24 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd0bd2b */ __asm { MOV R10,0x0 }
    /* +0xd0bd32 */ __asm { XORPS XMM7,XMM7 }
    /* +0xd0bd35 */ __asm { MOVAPS xmmword ptr [RBP + 0x110],XMM7 }
    /* +0xd0bd3c */ __asm { MOV qword ptr [RBP + 0x120],0x0 }
    /* +0xd0bd47 */ __asm { MOV qword ptr [RBP + 0x128],0x7 }
    /* +0xd0bd52 */ __asm { MOV qword ptr [RBP + 0x1a0],0x104 }
    /* +0xd0bd5d */ __asm { MOV R13D,0x104 }
    /* +0xd0bd63 */ __asm { MOVD XMM15,R15D }
    /* +0xd0bd68 */ __asm { XOR EDI,EDI }
    /* +0xd0bd6a */ __asm { LEA RBX,[RBP + 0x1a0] }
    /* +0xd0bd71 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xd0bd80 */ __asm { MOV R10,0x0 }
    /* +0xd0bd87 */ __asm { NOP }
    /* +0xd0bd88 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd0bd8f */ __asm { MOV R14,qword ptr [RBP + 0x128] }
    /* +0xd0bd96 */ __asm { MOV R12,R13 }
    /* +0xd0bd99 */ __asm { SUB R12,RDI }
    /* +0xd0bd9c */ __asm { JA 0x7fffa547bdd0 }
    /* +0xd0bd9e */ __asm { MOV qword ptr [RBP + 0x120],R13 }
    /* +0xd0bda5 */ __asm { LEA RSI,[RBP + 0x110] }
    /* +0xd0bdac */ __asm { CMP R14,0x8 }
    /* +0xd0bdb0 */ __asm { JC 0x7fffa547c04c }
    /* +0xd0bdb6 */ __asm { MOV RSI,qword ptr [RBP + 0x110] }
    /* +0xd0bdbd */ __asm { JMP 0x7fffa547c04c }
    /* +0xd0bdd0 */ __asm { MOV R11,R14 }
    /* +0xd0bdd3 */ __asm { SUB R11,RDI }
    /* +0xd0bdd6 */ __asm { CMP R12,R11 }
    /* +0xd0bdd9 */ __asm { JBE 0x7fffa547c020 }
    /* +0xd0bddf */ __asm { MOV RAX,0x7ffffffffffffffe }
    /* +0xd0bde9 */ __asm { MOV R11,RAX }
    /* +0xd0bdec */ __asm { SUB R11,RDI }
    /* +0xd0bdef */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd0bdf6 */ __asm { MOV R10,0x0 }
    /* +0xd0bdfd */ __asm { NOP }
    /* +0xd0bdfe */ __asm { CMP R11,R12 }
    /* +0xd0be01 */ __asm { JC 0x7fffa548199e }
    /* +0xd0be07 */ __asm { MOV R11,-0x8d4d5493 }
    /* +0xd0be11 */ __asm { XOR R11,R15 }
    /* +0xd0be14 */ __asm { ROL R11,0x2a }
    /* +0xd0be18 */ __asm { MOV ECX,ESI }
    /* +0xd0be1a */ __asm { ROR R11,CL }
    /* +0xd0be1d */ __asm { MOV RDX,R13 }
    /* +0xd0be20 */ __asm { OR RDX,0x7 }
    /* +0xd0be24 */ __asm { MOV R8,RAX }
    /* +0xd0be27 */ __asm { CMP RDX,R11 }
    /* +0xd0be2a */ __asm { JA 0x7fffa547be4d }
    /* +0xd0be2c */ __asm { MOV R11,R14 }
    /* +0xd0be2f */ __asm { SHR R11,0x1 }
    /* +0xd0be32 */ __asm { MOV R10,RAX }
    /* +0xd0be35 */ __asm { SUB R10,R11 }
    /* +0xd0be38 */ __asm { MOV R8,RAX }
    /* +0xd0be3b */ __asm { CMP R14,R10 }
    /* +0xd0be3e */ __asm { JA 0x7fffa547be4d }
    /* +0xd0be40 */ __asm { ADD R11,R14 }
    /* +0xd0be43 */ __asm { CMP RDX,R11 }
    /* +0xd0be46 */ __asm { CMOVA R11,RDX }
    /* +0xd0be4a */ __asm { MOV R8,R11 }
    /* +0xd0be4d */ __asm { MOV qword ptr [RBP + 0x20],R8 }
    /* +0xd0be51 */ __asm { MOV EDX,0xa60f9b7a }
    /* +0xd0be56 */ __asm { MOV R10,0x0 }
    /* +0xd0be5d */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd0be64 */ __asm { NOP }
    /* +0xd0be65 */ __asm { MOV R9D,0xc56239f2 }
    /* +0xd0be6b */ __asm { IMUL R9D,R9D,0x350af519 }
    /* +0xd0be72 */ __asm { ROL R9D,0x1a }
    /* +0xd0be76 */ __asm { IMUL R9D,dword ptr [RBP + 0x108] }
    /* +0xd0be7e */ __asm { MOV ECX,R15D }
    /* +0xd0be81 */ __asm { ROR R9D,CL }
    /* +0xd0be84 */ __asm { MOVSXD RAX,R9D }
    /* +0xd0be87 */ __asm { MOV ESI,0x426e980b }
    /* +0xd0be8c */ __asm { NOT ESI }
    /* +0xd0be8e */ __asm { MOV RBX,R15 }
    /* +0xd0be91 */ __asm { MOV R15,qword ptr [RBP + 0x1e8] }
    /* +0xd0be98 */ __asm { ADD ESI,R15D }
    /* +0xd0be9b */ __asm { IMUL ESI,dword ptr [RBP + -0x28] }
    /* +0xd0be9f */ __asm { MOV R9D,0x25f624cd }
    /* +0xd0bea5 */ __asm { SUB R9D,EBX }
    /* +0xd0bea8 */ __asm { IMUL R9D,R9D,0x59791c9f }
    /* +0xd0beaf */ __asm { XOR R9D,R15D }
    /* +0xd0beb2 */ __asm { NOT R9D }
    /* +0xd0beb5 */ __asm { MOVSXD R11,R9D }
    /* +0xd0beb8 */ __asm { LEA R10,[0x2 + R8*0x2] }
    /* +0xd0bec0 */ __asm { MOV RCX,R10 }
    /* +0xd0bec3 */ __asm { SHL RCX,0x3c }
    /* +0xd0bec7 */ __asm { XOR RCX,R10 }
    /* +0xd0beca */ __asm { LEA R8,[RCX + 0x6195d80f] }
    /* +0xd0bed1 */ __asm { MOV R10,R8 }
    /* +0xd0bed4 */ __asm { SHL R10,0xe }
    /* +0xd0bed8 */ __asm { LEA R9,[RCX + R10*0x1] }
    /* +0xd0bedc */ __asm { ADD R9,0x6195d80f }
    /* +0xd0bee3 */ __asm { AND R10,R8 }
    /* +0xd0bee6 */ __asm { MOV CX,0xe6f9 }
    /* +0xd0beea */ __asm { NOT ECX }
    /* +0xd0beec */ __asm { ADD ECX,R15D }
    /* +0xd0beef */ __asm { IMUL R8D,ECX,0x463f }
    /* +0xd0bef6 */ __asm { ADD EDX,R15D }
    /* +0xd0bef9 */ __asm { MOV ECX,EBX }
    /* +0xd0befb */ __asm { ROL EDX,CL }
    /* +0xd0befd */ __asm { ADD EDX,0x2c910946 }
    /* +0xd0bf03 */ __asm { MOVSXD RCX,EDX }
    /* +0xd0bf06 */ __asm { CMP RCX,R11 }
    /* +0xd0bf09 */ __asm { MOVD XMM5,R8D }
    /* +0xd0bf0e */ __asm { PXOR XMM5,XMM15 }
    /* +0xd0bf13 */ __asm { MOVD R11D,XMM5 }
    /* +0xd0bf18 */ __asm { CMOVC R10,R9 }
    /* +0xd0bf1c */ __asm { MOVSX R11,R11W }
    /* +0xd0bf20 */ __asm { LEA RCX,[0x7fffa526dccd] }
    /* +0xd0bf27 */ __asm { ADD RCX,R11 }
    /* +0xd0bf2a */ __asm { CALL RCX }
    /* +0xd0bf2c */ __asm { ROL RCX,0x2c }
    /* +0xd0bf30 */ __asm { MOV R11,RCX }
    /* +0xd0bf33 */ __asm { SHL R11,0x36 }
    /* +0xd0bf37 */ __asm { SUB RCX,R11 }
    /* +0xd0bf3a */ __asm { MOV qword ptr [RBP + 0x120],R13 }
    /* +0xd0bf41 */ __asm { MOV R11,qword ptr [RBP + 0x20] }
    /* +0xd0bf45 */ __asm { MOV qword ptr [RBP + 0x128],R11 }
    /* +0xd0bf4c */ __asm { CMP R14,RSI }
    /* +0xd0bf4f */ __asm { JA 0x7fffa547c05f }
    /* +0xd0bf55 */ __asm { LEA R14,[RCX + RDI*0x2] }
    /* +0xd0bf59 */ __asm { ADD RDI,RDI }
    /* +0xd0bf5c */ __asm { MOV R8,RDI }
    /* +0xd0bf5f */ __asm { LEA RDX,[RBP + 0x110] }
    /* +0xd0bf66 */ __asm { MOV RSI,RCX }
    /* +0xd0bf69 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd0bf6e */ __asm { CMP R12,0x4 }
    /* +0xd0bf72 */ __asm { JC 0x7fffa547c13c }
    /* +0xd0bf78 */ __asm { NOP }
    /* +0xd0bf79 */ __asm { MOV R10,0x0 }
    /* +0xd0bf80 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd0bf87 */ __asm { CMP R12,0x10 }
    /* +0xd0bf8b */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xd0bf8f */ __asm { LEA RBX,[RBP + 0x1a0] }
    /* +0xd0bf96 */ __asm { JC 0x7fffa547c16d }
    /* +0xd0bf9c */ __asm { MOV RDX,R12 }
    /* +0xd0bf9f */ __asm { AND RDX,-0x10 }
    /* +0xd0bfa3 */ __asm { XOR R8D,R8D }
    /* +0xd0bfa6 */ __asm { MOV R9,RSI }
    /* +0xd0bfa9 */ __asm { NOP dword ptr [RAX] }
    /* +0xd0bfb0 */ __asm { MOVUPS xmmword ptr [R14 + R8*0x2 + 0x10],XMM7 }
    /* +0xd0bfb6 */ __asm { MOVUPS xmmword ptr [R14 + R8*0x2],XMM7 }
    /* +0xd0bfbb */ __asm { ADD R8,0x10 }
    /* +0xd0bfbf */ __asm { CMP RDX,R8 }
    /* +0xd0bfc2 */ __asm { JNZ 0x7fffa547bfb0 }
    /* +0xd0bfc4 */ __asm { MOV R11D,0x2ef19e24 }
    /* +0xd0bfca */ __asm { MOV EAX,0x88b3a11a }
    /* +0xd0bfcf */ __asm { MOV R10,qword ptr [RBP + -0x28] }
    /* +0xd0bfd3 */ __asm { IMUL R11D,R10D }
    /* +0xd0bfd7 */ __asm { IMUL EAX,R10D }
    /* +0xd0bfdb */ __asm { ROL EAX,0xa }
    /* +0xd0bfde */ __asm { MOV R10,qword ptr [RBP + 0x1e8] }
    /* +0xd0bfe5 */ __asm { SUB R11D,R10D }
    /* +0xd0bfe8 */ __asm { IMUL EAX,dword ptr [RBP + 0x108] }
    /* +0xd0bfef */ __asm { ROL EAX,0x1a }
    /* +0xd0bff2 */ __asm { XOR R11D,0xa7e9e58a }
    /* +0xd0bff9 */ __asm { CMP R11,RAX }
    /* +0xd0bffc */ __asm { JG 0x7fffa547c007 }
    /* +0xd0bffe */ __asm { CMP R12,RDX }
    /* +0xd0c001 */ __asm { JZ 0x7fffa547c1d6 }
    /* +0xd0c007 */ __asm { TEST R12B,0xc }
    /* +0xd0c00b */ __asm { JNZ 0x7fffa547c179 }
    /* +0xd0c011 */ __asm { AND R12D,0xf }
    /* +0xd0c015 */ __asm { LEA R11,[R14 + RDX*0x2] }
    /* +0xd0c019 */ __asm { JMP 0x7fffa547c1b4 }
    /* +0xd0c020 */ __asm { MOV qword ptr [RBP + 0x120],R13 }
    /* +0xd0c027 */ __asm { LEA RSI,[RBP + 0x110] }
    /* +0xd0c02e */ __asm { CMP R14,0x8 }
    /* +0xd0c032 */ __asm { JC 0x7fffa547c03b }
    /* +0xd0c034 */ __asm { MOV RSI,qword ptr [RBP + 0x110] }
    /* +0xd0c03b */ __asm { ADD R12,R12 }
    /* +0xd0c03e */ __asm { LEA RCX,[RSI + RDI*0x2] }
    /* +0xd0c042 */ __asm { MOV R8,R12 }
    /* +0xd0c045 */ __asm { XOR EDX,EDX }
    /* +0xd0c047 */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0xd0c04c */ __asm { MOV word ptr [RSI + R13*0x2],0x0 }
    /* +0xd0c053 */ __asm { MOV R9,qword ptr [RBP + 0x110] }
    /* +0xd0c05a */ __asm { JMP 0x7fffa547c293 }
    /* +0xd0c05f */ __asm { LEA RBX,[RCX + RDI*0x2] }
    /* +0xd0c063 */ __asm { MOV R14,qword ptr [RBP + 0x110] }
    /* +0xd0c06a */ __asm { MOV DX,0xd992 }
    /* +0xd0c06e */ __asm { ADD EDX,R15D }
    /* +0xd0c071 */ __asm { MOV R9D,0xffffd4df }
    /* +0xd0c077 */ __asm { SUB R9D,EDX }
    /* +0xd0c07a */ __asm { MOVZX ESI,R9W }
    /* +0xd0c07e */ __asm { ADD RDI,RDI }
    /* +0xd0c081 */ __asm { MOV R8,RDI }
    /* +0xd0c084 */ __asm { MOV RDX,R14 }
    /* +0xd0c087 */ __asm { MOV qword ptr [RBP + 0x20],RCX }
    /* +0xd0c08b */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd0c090 */ __asm { CMP R12,RSI }
    /* +0xd0c093 */ __asm { JC 0x7fffa547c156 }
    /* +0xd0c099 */ __asm { CMP R12,0x10 }
    /* +0xd0c09d */ __asm { MOV R15,qword ptr [RBP + 0x18] }
    /* +0xd0c0a1 */ __asm { JC 0x7fffa547c1e2 }
    /* +0xd0c0a7 */ __asm { MOV RDX,R12 }
    /* +0xd0c0aa */ __asm { AND RDX,-0x10 }
    /* +0xd0c0ae */ __asm { XOR R8D,R8D }
    /* +0xd0c0b1 */ __asm { MOV RSI,qword ptr [RBP + 0x1e8] }
    /* +0xd0c0b8 */ __asm { MOV R10,qword ptr [RBP + 0x108] }
    /* +0xd0c0bf */ __asm { MOV RDI,qword ptr [RBP + -0x28] }
    /* +0xd0c0c3 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xd0c0d0 */ __asm { LEA R11,[R8 + 0x10] }
    /* +0xd0c0d4 */ __asm { MOVUPS xmmword ptr [RBX + R8*0x2 + 0x10],XMM7 }
    /* +0xd0c0da */ __asm { MOVUPS xmmword ptr [RBX + R8*0x2],XMM7 }
    /* +0xd0c0df */ __asm { MOV R9D,0x7c33cc8e }
    /* +0xd0c0e5 */ __asm { ADD R9D,0x8fb84a35 }
    /* +0xd0c0ec */ __asm { MOV ECX,R15D }
    /* +0xd0c0ef */ __asm { ROR R9D,CL }
    /* +0xd0c0f2 */ __asm { XOR R8,0x10 }
    /* +0xd0c0f6 */ __asm { IMUL R9D,R10D }
    /* +0xd0c0fa */ __asm { MOVSXD RAX,R9D }
    /* +0xd0c0fd */ __asm { MOV ECX,0x1779af56 }
    /* +0xd0c102 */ __asm { IMUL ECX,EDI }
    /* +0xd0c105 */ __asm { XOR ECX,ESI }
    /* +0xd0c107 */ __asm { ROR ECX,0x1 }
    /* +0xd0c109 */ __asm { CMP RAX,RCX }
    /* +0xd0c10c */ __asm { CMOVC R11,R8 }
    /* +0xd0c110 */ __asm { MOV R8,R11 }
    /* +0xd0c113 */ __asm { CMP R11,RDX }
    /* +0xd0c116 */ __asm { JNZ 0x7fffa547c0d0 }
    /* +0xd0c118 */ __asm { CMP R12,RDX }
    /* +0xd0c11b */ __asm { MOV R10,qword ptr [RBP + 0x20] }
    /* +0xd0c11f */ __asm { JZ 0x7fffa547c23f }
    /* +0xd0c125 */ __asm { TEST R12B,0xc }
    /* +0xd0c129 */ __asm { JNZ 0x7fffa547c1ef }
    /* +0xd0c12f */ __asm { LEA R11,[RBX + RDX*0x2] }
    /* +0xd0c133 */ __asm { AND R12D,0xf }
    /* +0xd0c137 */ __asm { JMP 0x7fffa547c21c }
    /* +0xd0c13c */ __asm { MOV R11,R14 }
    /* +0xd0c13f */ __asm { MOV R9,RSI }
    /* +0xd0c142 */ __asm { MOV R10,qword ptr [RBP + 0x1e8] }
    /* +0xd0c149 */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xd0c14d */ __asm { LEA RBX,[RBP + 0x1a0] }
    /* +0xd0c154 */ __asm { JMP 0x7fffa547c1b4 }
    /* +0xd0c156 */ __asm { MOV R11,RBX }
    /* +0xd0c159 */ __asm { MOV R10,qword ptr [RBP + 0x20] }
    /* +0xd0c15d */ __asm { MOV RSI,qword ptr [RBP + 0x1e8] }
    /* +0xd0c164 */ __asm { MOV R15,qword ptr [RBP + 0x18] }
    /* +0xd0c168 */ __asm { JMP 0x7fffa547c21c }
    /* +0xd0c16d */ __asm { XOR EDX,EDX }
    /* +0xd0c16f */ __asm { MOV R9,RSI }
    /* +0xd0c172 */ __asm { MOV R10,qword ptr [RBP + 0x1e8] }
    /* +0xd0c179 */ __asm { MOV R8,R12 }
    /* +0xd0c17c */ __asm { AND R8,-0x4 }
    /* +0xd0c180 */ __asm { LEA R11,[R14 + R8*0x2] }
    /* +0xd0c184 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xd0c190 */ __asm { MOV qword ptr [R14 + RDX*0x2],0x0 }
    /* +0xd0c198 */ __asm { ADD RDX,0x4 }
    /* +0xd0c19c */ __asm { CMP R8,RDX }
    /* +0xd0c19f */ __asm { JNZ 0x7fffa547c190 }
    /* +0xd0c1a1 */ __asm { CMP R12,R8 }
    /* +0xd0c1a4 */ __asm { JZ 0x7fffa547c1d6 }
    /* +0xd0c1a6 */ __asm { AND R12D,0x3 }
    /* +0xd0c1aa */ __asm { JMP 0x7fffa547c1b4 }
    /* +0xd0c1b0 */ __asm { ADD R11,0x2 }
    /* +0xd0c1b4 */ __asm { DEC R12 }
    /* +0xd0c1b7 */ __asm { MOV EAX,0xab684808 }
    /* +0xd0c1bc */ __asm { XOR EAX,R10D }
    /* +0xd0c1bf */ __asm { ADD EAX,0xbb651f94 }
    /* +0xd0c1c4 */ __asm { ROR EAX,CL }
    /* +0xd0c1c6 */ __asm { MOV word ptr [R11],0x0 }
    /* +0xd0c1cc */ __asm { XOR EAX,0x74b54345 }
    /* +0xd0c1d1 */ __asm { CMP R12,RAX }
    /* +0xd0c1d4 */ __asm { JNZ 0x7fffa547c1b0 }
    /* +0xd0c1d6 */ __asm { MOV word ptr [R9 + R13*0x2],0x0 }
    /* +0xd0c1dd */ __asm { JMP 0x7fffa547c28c }
    /* +0xd0c1e2 */ __asm { XOR EDX,EDX }
    /* +0xd0c1e4 */ __asm { MOV R10,qword ptr [RBP + 0x20] }
    /* +0xd0c1e8 */ __asm { MOV RSI,qword ptr [RBP + 0x1e8] }
    /* +0xd0c1ef */ __asm { MOV R8,R12 }
    /* +0xd0c1f2 */ __asm { AND R8,-0x4 }
    /* +0xd0c1f6 */ __asm { LEA R11,[RBX + R8*0x2] }
    /* +0xd0c1fa */ __asm { LEA RAX,[R8 + -0x4] }
    /* +0xd0c1fe */ __asm { NOP }
    /* +0xd0c200 */ __asm { MOV qword ptr [RBX + RDX*0x2],0x0 }
    /* +0xd0c208 */ __asm { CMP RAX,RDX }
    /* +0xd0c20b */ __asm { JZ 0x7fffa547c213 }
    /* +0xd0c20d */ __asm { ADD RDX,0x4 }
    /* +0xd0c211 */ __asm { JMP 0x7fffa547c200 }
    /* +0xd0c213 */ __asm { CMP R12,R8 }
    /* +0xd0c216 */ __asm { JZ 0x7fffa547c23f }
    /* +0xd0c218 */ __asm { AND R12D,0x3 }
    /* +0xd0c21c */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xd0c223 */ __asm { MOV RCX,0x0 }
    /* +0xd0c22a */ __asm { NOP }
    /* +0xd0c22b */ __asm { XOR EDX,EDX }
    /* +0xd0c22d */ __asm { NOP dword ptr [RAX] }
    /* +0xd0c230 */ __asm { MOV word ptr [R11 + RDX*0x2],0x0 }
    /* +0xd0c237 */ __asm { INC RDX }
    /* +0xd0c23a */ __asm { CMP R12,RDX }
    /* +0xd0c23d */ __asm { JNZ 0x7fffa547c230 }
    /* +0xd0c23f */ __asm { MOV AX,0x9afc }
    /* +0xd0c243 */ __asm { LEA R9,[0x7fffa568e766] }
    /* +0xd0c24a */ __asm { MOV R11D,0x9b21a65 }
    /* +0xd0c250 */ __asm { SUB R11D,R15D }
    /* +0xd0c253 */ __asm { XOR R11D,ESI }
    /* +0xd0c256 */ __asm { NOT R11D }
    /* +0xd0c259 */ __asm { MOV word ptr [R10 + R13*0x2],0x0 }
    /* +0xd0c260 */ __asm { XOR EAX,0x2b7c }
    /* +0xd0c265 */ __asm { MOV ECX,ESI }
    /* +0xd0c267 */ __asm { ROR AX,CL }
    /* +0xd0c26a */ __asm { XOR EAX,R15D }
    /* +0xd0c26d */ __asm { MOVSX R10,AX }
    /* +0xd0c271 */ __asm { ADD R10,R9 }
    /* +0xd0c274 */ __asm { MOV R8,R14 }
    /* +0xd0c277 */ __asm { SHR R8,0x3d }
    /* +0xd0c27b */ __asm { XOR R8,R14 }
    /* +0xd0c27e */ __asm { CALL R10 }
}


// ============================================================================
// Function : Unwind@7fffa5482b50  |  RVA: 0xd12b50  |  Size: 120 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5482b50(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = *(uint32_t *)(param_2 + 0x98) ^ 0x68b2ab26;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x268) & 0x1f;
  (*(code *)(&UNK_7fffa508c7b5 + (int)(uVar2 << bVar1 | uVar2 >> 0x20 - bVar1)))
            (*(uint64_t *)(param_2 + 0x1d8));
  return;
}


// ============================================================================
// Function : Unwind@7fffa5482bd0  |  RVA: 0xd12bd0  |  Size: 177 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5482bd0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x260)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x98) & 0xf;
    (*(code *)((int64_t)(short)~(-0x76ac << bVar1 | 0x8954U >> 0x10 - bVar1) + 0x7fffa568a183))
              (*(uint64_t *)(param_2 + 0x98),param_2,
               *(uint64_t *)(param_2 + 0xc0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xc0));
  }
  *(uint64_t *)(param_2 + 0xd0) = 0;
  *(uint16_t *)(param_2 + 0xc0) = 0;
  *(uint64_t *)(param_2 + 0xd8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5482c90  |  RVA: 0xd12c90  |  Size: 210 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5482c90(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x1f8)) {
    uVar1 = ~((int)*(uint64_t *)(param_2 + 0x98) + 0x17a8ab6eU);
    uVar1 = uVar1 << 0x11 | uVar1 >> 0xf;
    (*(code *)((int64_t)(int)uVar1 + 0x7fffa569461d))
              (*(uint64_t *)(param_2 + 0x98),uVar1,
               *(uint64_t *)(param_2 + 0x1e0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1e0));
  }
  *(uint64_t *)(param_2 + 0x1f0) = 0;
  *(uint64_t *)(param_2 + 0x1f8) = 7;
  *(uint16_t *)(param_2 + 0x1e0) = 0;
  *(uint64_t *)(param_2 + 0x270) = 7;
  *(int64_t *)(param_2 + 0x278) = param_2 + 0x240;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5482d70  |  RVA: 0xd12d70  |  Size: 141 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5482d70(uint64_t param_1,int64_t param_2)

{
  if (*(int64_t *)(param_2 + 0x118) != 0) {
    (*(code *)(&UNK_7fffa508fdec +
              (int)(((int)*(uint64_t *)(param_2 + 0x268) - *(int *)(param_2 + 0x98)) + 0x36e2f626U
                   ^ 0x1b91aec9)))
              (*(int64_t *)(param_2 + 0x118),0x36e2f626,&IMAGE_DOS_HEADER_7fffa4770000);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5482e00  |  RVA: 0xd12e00  |  Size: 3567 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa5482e00(void) {
    /* +0xd12e00 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xd12e05 */ __asm { PUSH RBP }
    /* +0xd12e06 */ __asm { PUSH R12 }
    /* +0xd12e08 */ __asm { PUSH RBX }
    /* +0xd12e09 */ __asm { PUSH RSI }
    /* +0xd12e0a */ __asm { PUSH R15 }
    /* +0xd12e0c */ __asm { PUSH R13 }
    /* +0xd12e0e */ __asm { PUSH RDI }
    /* +0xd12e0f */ __asm { PUSH R14 }
    /* +0xd12e11 */ __asm { SUB RSP,0x58 }
    /* +0xd12e15 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xd12e1c */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM15 }
    /* +0xd12e22 */ __asm { MOVAPS xmmword ptr [RSP + 0x40],XMM7 }
    /* +0xd12e27 */ __asm { RDTSC }
    /* +0xd12e29 */ __asm { SHL RDX,0x20 }
    /* +0xd12e2d */ __asm { OR RDX,RAX }
    /* +0xd12e30 */ __asm { MOV EAX,0xebddc908 }
    /* +0xd12e35 */ __asm { MOV R9D,0x90e031bb }
    /* +0xd12e3b */ __asm { IMUL R11D,R9D,0x75679cad }
    /* +0xd12e42 */ __asm { MOV R12D,0x88c725e8 }
    /* +0xd12e48 */ __asm { MOV R15,qword ptr [RBP + -0x28] }
    /* +0xd12e4c */ __asm { IMUL R12D,R15D }
    /* +0xd12e50 */ __asm { XOR EAX,0xd0bfd6e8 }
    /* +0xd12e55 */ __asm { MOV R9D,0x6c5ab614 }
    /* +0xd12e5b */ __asm { MOV R14,qword ptr [RBP + 0x18] }
    /* +0xd12e5f */ __asm { ADD EAX,R14D }
    /* +0xd12e62 */ __asm { ROL EAX,0xe }
    /* +0xd12e65 */ __asm { MOV RCX,qword ptr [RBP + 0x1e8] }
    /* +0xd12e6c */ __asm { ADD EAX,ECX }
    /* +0xd12e6e */ __asm { MOV R10,0x30ebf64fafbc6efb }
    /* +0xd12e78 */ __asm { ADD R10,RDX }
    /* +0xd12e7b */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0xd12e85 */ __asm { IMUL RDX,R8 }
    /* +0xd12e89 */ __asm { ROL R12D,0xc }
    /* +0xd12e8d */ __asm { ROR R12D,CL }
    /* +0xd12e90 */ __asm { MOV R8D,0xe6143c63 }
    /* +0xd12e96 */ __asm { MOV R13D,0x8c9721c0 }
    /* +0xd12e9c */ __asm { CMP R12,R13 }
    /* +0xd12e9f */ __asm { MOV R13,0x22b18422c4a9c65e }
    /* +0xd12ea9 */ __asm { MOV RSI,-0x22b18422c4a9c65e }
    /* +0xd12eb3 */ __asm { CMOVZ R13,RSI }
    /* +0xd12eb7 */ __asm { CDQE }
    /* +0xd12eb9 */ __asm { SUB R11D,ECX }
    /* +0xd12ebc */ __asm { IMUL R11D,R15D }
    /* +0xd12ec0 */ __asm { SUB R8D,R14D }
    /* +0xd12ec3 */ __asm { ROL R8D,0x6 }
    /* +0xd12ec7 */ __asm { SUB R8D,ECX }
    /* +0xd12eca */ __asm { ADD R9D,ECX }
    /* +0xd12ecd */ __asm { IMUL R9D,R9D,-0x3d9d847d }
    /* +0xd12ed4 */ __asm { MOV ECX,R14D }
    /* +0xd12ed7 */ __asm { ROR R9D,CL }
    /* +0xd12eda */ __asm { CMP R9,R8 }
    /* +0xd12edd */ __asm { CMOVLE RDX,R10 }
    /* +0xd12ee1 */ __asm { ADD RDX,R13 }
    /* +0xd12ee4 */ __asm { MOV R10,RDX }
    /* +0xd12ee7 */ __asm { SHR R10,0x1b }
    /* +0xd12eeb */ __asm { MOV RCX,RDX }
    /* +0xd12eee */ __asm { SHR RCX,0x3b }
    /* +0xd12ef2 */ __asm { SHR RDX,0x2d }
    /* +0xd12ef6 */ __asm { MOV R9D,EDX }
    /* +0xd12ef9 */ __asm { XOR R9D,R10D }
    /* +0xd12efc */ __asm { IMUL EDX,R10D }
    /* +0xd12f00 */ __asm { CMP R11,RAX }
    /* +0xd12f03 */ __asm { CMOVGE EDX,R9D }
    /* +0xd12f07 */ __asm { ROR EDX,CL }
    /* +0xd12f09 */ __asm { AND EDX,0x3 }
    /* +0xd12f0c */ __asm { CMP EDX,0x2 }
    /* +0xd12f0f */ __asm { JC 0x7fffa5482fdb }
    /* +0xd12f15 */ __asm { CMP EDX,0x3 }
    /* +0xd12f18 */ __asm { JZ 0x7fffa54830b9 }
    /* +0xd12f1e */ __asm { MOV R10D,0x562a5f19 }
    /* +0xd12f24 */ __asm { MOV R11,-0x6e7a3b7efbc349e9 }
    /* +0xd12f2e */ __asm { CMP R10,R11 }
    /* +0xd12f31 */ __asm { JZ 0x7fffa5483c7b }
    /* +0xd12f37 */ __asm { MOV DX,0x5491 }
    /* +0xd12f3b */ __asm { NOT EDX }
    /* +0xd12f3d */ __asm { MOV R11,qword ptr [RBP + 0x18] }
    /* +0xd12f41 */ __asm { ADD EDX,R11D }
    /* +0xd12f44 */ __asm { MOV RCX,qword ptr [RBP + 0x1e8] }
    /* +0xd12f4b */ __asm { ROR DX,CL }
    /* +0xd12f4e */ __asm { IMUL EDX,EDX,0x739f }
    /* +0xd12f54 */ __asm { MOVZX EDX,DX }
    /* +0xd12f57 */ __asm { MOV R9D,dword ptr [R10 + 0x29d3a327] }
    /* +0xd12f5e */ __asm { AND R9D,0x1 }
    /* +0xd12f62 */ __asm { CMP R9D,EDX }
    /* +0xd12f65 */ __asm { JZ 0x7fffa548340a }
    /* +0xd12f6b */ __asm { LEA R10,[0x7fffa47c2c58] }
    /* +0xd12f72 */ __asm { MOV R11,-0x5f937c7ecff832d3 }
    /* +0xd12f7c */ __asm { CMP R10,R11 }
    /* +0xd12f7f */ __asm { NOP }
    /* +0xd12f80 */ __asm { NOP }
    /* +0xd12f81 */ __asm { NOP }
    /* +0xd12f82 */ __asm { NOP }
    /* +0xd12f83 */ __asm { NOP }
    /* +0xd12f84 */ __asm { MOV EDX,0x4df38184 }
    /* +0xd12f89 */ __asm { MOV R9,qword ptr [RBP + 0x18] }
    /* +0xd12f8d */ __asm { XOR EDX,R9D }
    /* +0xd12f90 */ __asm { IMUL R11,R10,-0x6804 }
    /* +0xd12f97 */ __asm { MOV qword ptr [RBP + 0x1a0],RCX }
    /* +0xd12f9e */ __asm { MOV R8,qword ptr [RBP + 0x108] }
    /* +0xd12fa5 */ __asm { IMUL EDX,R8D }
    /* +0xd12fa9 */ __asm { ADD EDX,0x594cbdf }
    /* +0xd12faf */ __asm { MOVSXD RAX,EDX }
    /* +0xd12fb2 */ __asm { MOV ECX,0xf7bf2efc }
    /* +0xd12fb7 */ __asm { SUB ECX,R9D }
    /* +0xd12fba */ __asm { ROL ECX,0x1d }
    /* +0xd12fbd */ __asm { IMUL ECX,R8D }
    /* +0xd12fc1 */ __asm { ADD R10,-0x6804 }
    /* +0xd12fc8 */ __asm { CMP RAX,RCX }
    /* +0xd12fcb */ __asm { CMOVBE R10,R11 }
    /* +0xd12fcf */ __asm { MOV EAX,dword ptr [R10 + 0xd8] }
    /* +0xd12fd6 */ __asm { JMP 0x7fffa5483c43 }
    /* +0xd12fdb */ __asm { CMP EDX,0x1 }
    /* +0xd12fde */ __asm { JNZ 0x7fffa5483379 }
    /* +0xd12fe4 */ __asm { RDTSC }
    /* +0xd12fe6 */ __asm { SHL RDX,0x20 }
    /* +0xd12fea */ __asm { OR RDX,RAX }
    /* +0xd12fed */ __asm { MOV R12,qword ptr [RBP + 0x18] }
    /* +0xd12ff1 */ __asm { MOV R11,R12 }
    /* +0xd12ff4 */ __asm { OR R11,0x1 }
    /* +0xd12ff8 */ __asm { MOV R10,-0x5a46117eacb056b3 }
    /* +0xd13002 */ __asm { IMUL R10,RDX }
    /* +0xd13006 */ __asm { MOV RAX,-0x1391025bcb97da47 }
    /* +0xd13010 */ __asm { MOV R8,qword ptr [RBP + 0x1e8] }
    /* +0xd13017 */ __asm { ADD RAX,R8 }
    /* +0xd1301a */ __asm { XOR RAX,0x38b76104 }
    /* +0xd13020 */ __asm { IMUL RAX,R11 }
    /* +0xd13024 */ __asm { ADD RAX,R10 }
    /* +0xd13027 */ __asm { MOV RCX,RAX }
    /* +0xd1302a */ __asm { SHR RCX,0x3b }
    /* +0xd1302e */ __asm { MOV R11,RAX }
    /* +0xd13031 */ __asm { SHR R11,0x1b }
    /* +0xd13035 */ __asm { SHR RAX,0x2d }
    /* +0xd13039 */ __asm { XOR R11D,EAX }
    /* +0xd1303c */ __asm { ROR R11D,CL }
    /* +0xd1303f */ __asm { MOV dword ptr [RBP + 0x1a0],0xda5c78de }
    /* +0xd13049 */ __asm { MOV EDX,dword ptr [RBP + 0x1a0] }
    /* +0xd1304f */ __asm { MOV R9W,0xd2b2 }
    /* +0xd13054 */ __asm { SUB R9D,R8D }
    /* +0xd13057 */ __asm { MOV ECX,R12D }
    /* +0xd1305a */ __asm { ROR R9W,CL }
    /* +0xd1305e */ __asm { ADD R9D,0xffff8a26 }
    /* +0xd13065 */ __asm { MOVZX R9D,R9W }
    /* +0xd13069 */ __asm { AND EDX,0x1 }
    /* +0xd1306c */ __asm { CMP EDX,R9D }
    /* +0xd1306f */ __asm { NOP }
    /* +0xd13070 */ __asm { NOP }
    /* +0xd13071 */ __asm { NOP }
    /* +0xd13072 */ __asm { NOP }
    /* +0xd13073 */ __asm { NOP }
    /* +0xd13074 */ __asm { CMP R11D,0x1108c58 }
    /* +0xd1307b */ __asm { JA 0x7fffa548308d }
    /* +0xd1307d */ __asm { MOV dword ptr [RBP + 0x1a0],0xb4aded7a }
    /* +0xd13087 */ __asm { MOV EDX,dword ptr [RBP + 0x1a0] }
    /* +0xd1308d */ __asm { LEA R10,[0x7fffa4784012] }
    /* +0xd13094 */ __asm { MOV R11,-0x1c7509be75bc9f9 }
    /* +0xd1309e */ __asm { CMP R10,R11 }
    /* +0xd130a1 */ __asm { NOP }
    /* +0xd130a2 */ __asm { NOP }
    /* +0xd130a3 */ __asm { NOP }
    /* +0xd130a4 */ __asm { NOP }
    /* +0xd130a5 */ __asm { NOP }
    /* +0xd130a6 */ __asm { MOV qword ptr [RBP + 0x1a0],RCX }
    /* +0xd130ad */ __asm { MOV EAX,dword ptr [R10 + 0xe4a] }
    /* +0xd130b4 */ __asm { JMP 0x7fffa5483c43 }
    /* +0xd130b9 */ __asm { MOV R10D,0x4cacbd70 }
    /* +0xd130bf */ __asm { MOV RCX,R10 }
    /* +0xd130c2 */ __asm { ROL RCX,0xe }
    /* +0xd130c6 */ __asm { MOV R11,0x4112b320c7147531 }
    /* +0xd130d0 */ __asm { IMUL R11,RCX }
    /* +0xd130d4 */ __asm { MOV RAX,-0xa5559375 }
    /* +0xd130de */ __asm { ADD RAX,R11 }
    /* +0xd130e1 */ __asm { MOV R11,0x157998067391457b }
    /* +0xd130eb */ __asm { CMP RAX,R11 }
    /* +0xd130ee */ __asm { JZ 0x7fffa5483c83 }
    /* +0xd130f4 */ __asm { MOV EDX,0x91f52e02 }
    /* +0xd130f9 */ __asm { ADD EDX,0xf78c5c7b }
    /* +0xd130ff */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xd13103 */ __asm { ROR EDX,CL }
    /* +0xd13105 */ __asm { MOV R8D,0x95f0a4f0 }
    /* +0xd1310b */ __asm { SUB R8D,EDX }
    /* +0xd1310e */ __asm { MOVZX R11D,uint8_t ptr [R10 + R8*0x1 + 0x240] }
    /* +0xd13117 */ __asm { RDTSC }
    /* +0xd13119 */ __asm { SHL RDX,0x20 }
    /* +0xd1311d */ __asm { OR RDX,RAX }
    /* +0xd13120 */ __asm { TEST R11B,0x1 }
    /* +0xd13124 */ __asm { JNZ 0x7fffa5483446 }
    /* +0xd1312a */ __asm { MOV R11,-0x6bdeac2e46be109b }
    /* +0xd13134 */ __asm { IMUL RDX,R11 }
    /* +0xd13138 */ __asm { MOV R9D,0xbf02b1f2 }
    /* +0xd1313e */ __asm { MOV R8,qword ptr [RBP + 0x18] }
    /* +0xd13142 */ __asm { XOR R9D,R8D }
    /* +0xd13145 */ __asm { MOV R10,qword ptr [RBP + 0x1e8] }
    /* +0xd1314c */ __asm { MOV ECX,R10D }
    /* +0xd1314f */ __asm { ROR R9D,CL }
    /* +0xd13152 */ __asm { NOT R9D }
    /* +0xd13155 */ __asm { ROL R9D,0x14 }
    /* +0xd13159 */ __asm { MOV R11,0x2d147206256cf2ee }
    /* +0xd13163 */ __asm { ADD R11,RDX }
    /* +0xd13166 */ __asm { MOV RAX,R11 }
    /* +0xd13169 */ __asm { SHR RAX,0x2d }
    /* +0xd1316d */ __asm { MOV RCX,R11 }
    /* +0xd13170 */ __asm { SHR RCX,0x3b }
    /* +0xd13174 */ __asm { SHR R11,0x1b }
    /* +0xd13178 */ __asm { XOR R11D,EAX }
    /* +0xd1317b */ __asm { ROR R11D,CL }
    /* +0xd1317e */ __asm { MOV dword ptr [RBP + 0x1a0],R9D }
    /* +0xd13185 */ __asm { MOV EDX,dword ptr [RBP + 0x1a0] }
    /* +0xd1318b */ __asm { MOV EDX,0x8a3d6a5d }
    /* +0xd13190 */ __asm { ADD EDX,R8D }
    /* +0xd13193 */ __asm { NOT EDX }
    /* +0xd13195 */ __asm { SUB EDX,R10D }
    /* +0xd13198 */ __asm { XOR EDX,0x2d8d3a81 }
    /* +0xd1319e */ __asm { CMP R11D,EDX }
    /* +0xd131a1 */ __asm { JNC 0x7fffa5483331 }
    /* +0xd131a7 */ __asm { MOV dword ptr [RBP + 0x1a0],0x25944360 }
    /* +0xd131b1 */ __asm { MOV EDX,dword ptr [RBP + 0x1a0] }
    /* +0xd131b7 */ __asm { MOV R10D,0x55b19bd2 }
    /* +0xd131bd */ __asm { MOV R11,0x5e6e5f505f425e66 }
    /* +0xd131c7 */ __asm { CMP R10,R11 }
    /* +0xd131ca */ __asm { JZ 0x7fffa5483c91 }
    /* +0xd131d0 */ __asm { MOV R9D,0xd4c5b628 }
    /* +0xd131d6 */ __asm { MOV EDX,0xd4c5b628 }
    /* +0xd131db */ __asm { SUB R9D,EDX }
    /* +0xd131de */ __asm { MOV R11,qword ptr [R10 + 0x2a4c6436] }
    /* +0xd131e5 */ __asm { MOV R10,-0x54bf8c3021afe8 }
    /* +0xd131ef */ __asm { MOV RAX,R11 }
    /* +0xd131f2 */ __asm { MUL R10 }
    /* +0xd131f5 */ __asm { MOV R10,RDX }
    /* +0xd131f8 */ __asm { MOV ECX,0x146ca70 }
    /* +0xd131fd */ __asm { MOV RAX,R11 }
    /* +0xd13200 */ __asm { MUL RCX }
    /* +0xd13203 */ __asm { MOV R11,qword ptr [RBP + 0x108] }
    /* +0xd1320a */ __asm { IMUL R11D,R9D }
    /* +0xd1320e */ __asm { ADD RAX,R10 }
    /* +0xd13211 */ __asm { ADC RDX,0x0 }
    /* +0xd13215 */ __asm { AND EDX,0x1 }
    /* +0xd13218 */ __asm { OR RDX,R11 }
    /* +0xd1321b */ __asm { JZ 0x7fffa5483331 }
    /* +0xd13221 */ __asm { PXOR XMM5,XMM5 }
    /* +0xd13225 */ __asm { MOVDQA xmmword ptr [RBP + 0x1a0],XMM5 }
    /* +0xd1322d */ __asm { PUSHFQ }
    /* +0xd1322e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd13236 */ __asm { POPFQ }
    /* +0xd13237 */ __asm { MOV dword ptr [RBP + 0x40],0x71470ca0 }
    /* +0xd1323e */ __asm { MOV EDX,dword ptr [RBP + 0x40] }
    /* +0xd13241 */ __asm { CMP EDX,0x54a8e100 }
    /* +0xd13247 */ __asm { NOP }
    /* +0xd13248 */ __asm { NOP }
    /* +0xd13249 */ __asm { NOP }
    /* +0xd1324a */ __asm { NOP }
    /* +0xd1324b */ __asm { MOV dword ptr [RBP + 0x1a0],0x0 }
    /* +0xd13255 */ __asm { PUSHFQ }
    /* +0xd13256 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd1325e */ __asm { POPFQ }
    /* +0xd1325f */ __asm { MOV dword ptr [RBP + 0x40],0xac00fbce }
    /* +0xd13266 */ __asm { MOV EDX,dword ptr [RBP + 0x40] }
    /* +0xd13269 */ __asm { TEST EDX,EDX }
    /* +0xd1326b */ __asm { NOP }
    /* +0xd1326c */ __asm { NOP }
    /* +0xd1326d */ __asm { NOP }
    /* +0xd1326e */ __asm { NOP }
    /* +0xd1326f */ __asm { NOP }
    /* +0xd13270 */ __asm { MOV dword ptr [RBP + 0x40],0xd000441 }
    /* +0xd13277 */ __asm { MOV EDX,dword ptr [RBP + 0x40] }
    /* +0xd1327a */ __asm { CMP EDX,0xa101d08a }
    /* +0xd13280 */ __asm { JNC 0x7fffa5483c99 }
    /* +0xd13286 */ __asm { LEA R8,[0x7fffa478c907] }
    /* +0xd1328d */ __asm { MOV R10,0x0 }
    /* +0xd13294 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd1329b */ __asm { NOP }
    /* +0xd1329c */ __asm { PUSHFQ }
    /* +0xd1329d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xd132a5 */ __asm { POPFQ }
    /* +0xd132a6 */ __asm { MOV R11,0x37f2d1ce32184ea6 }
    /* +0xd132b0 */ __asm { CMP R8,R11 }
    /* +0xd132b3 */ __asm { JZ 0x7fffa5483ca3 }
    /* +0xd132b9 */ __asm { MOV qword ptr [RBP + 0x40],R10 }
    /* +0xd132bd */ __asm { MOV DX,0x7452 }
    /* +0xd132c1 */ __asm { LEA ECX,[RDX + RDX*0x8] }
    /* +0xd132c4 */ __asm { LEA EDX,[RDX + RCX*0x4] }
    /* +0xd132c7 */ __asm { ROL DX,0x3 }
    /* +0xd132cb */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xd132cf */ __asm { ROL DX,CL }
    /* +0xd132d2 */ __asm { MOV R9D,0x57d5d1d5 }
    /* +0xd132d8 */ __asm { SUB R9D,ECX }
    /* +0xd132db */ __asm { IMUL R9D,R9D,-0x62dab3a7 }
    /* +0xd132e2 */ __asm { ROL R9D,0x4 }
    /* +0xd132e6 */ __asm { MOV RCX,qword ptr [RBP + 0x1e8] }
    /* +0xd132ed */ __asm { XOR R9D,ECX }
    /* +0xd132f0 */ __asm { MOVSXD R10,R9D }
    /* +0xd132f3 */ __asm { XOR EDX,ECX }
    /* +0xd132f5 */ __asm { MOVZX R9D,DX }
    /* +0xd132f9 */ __asm { MOV DX,0xdf8e }
    /* +0xd132fd */ __asm { XOR EDX,ECX }
    /* +0xd132ff */ __asm { MOV EAX,0x24ef }
    /* +0xd13304 */ __asm { SUB EAX,EDX }
    /* +0xd13306 */ __asm { MOV R11W,0xe8a9 }
    /* +0xd1330b */ __asm { ADD R11D,0x5c4e }
    /* +0xd13312 */ __asm { ROR R11W,CL }
    /* +0xd13316 */ __asm { MOVZX EDX,AX }
    /* +0xd13319 */ __asm { NOT R11D }
    /* +0xd1331c */ __asm { MOVSX RCX,R11W }
    /* +0xd13320 */ __asm { MOV EAX,dword ptr [R8 + RCX*0x1 + 0x128] }
    /* +0xd13328 */ __asm { LEA R8,[RBP + 0x1a0] }
    /* +0xd1332f */ __asm { SYSCALL }
    /* +0xd13331 */ __asm { LEA R10,[0x7fffa478b3fa] }
    /* +0xd13338 */ __asm { MOV R11,-0x7da017922ec6749 }
    /* +0xd13342 */ __asm { IMUL R11,R10 }
    /* +0xd13346 */ __asm { MOV RAX,0x454fc85c302501b4 }
    /* +0xd13350 */ __asm { ADD RAX,R11 }
    /* +0xd13353 */ __asm { MOV R11,-0x6dc9ba7e4f152296 }
    /* +0xd1335d */ __asm { CMP RAX,R11 }
    /* +0xd13360 */ __asm { JZ 0x7fffa5483cab }
    /* +0xd13366 */ __asm { MOV qword ptr [RBP + 0x1a0],RCX }
    /* +0xd1336d */ __asm { MOV EAX,dword ptr [R10 + -0x6dca] }
    /* +0xd13374 */ __asm { JMP 0x7fffa5483c43 }
    /* +0xd13379 */ __asm { LEA R10,[0x7fffa47bfaef] }
    /* +0xd13380 */ __asm { MOV R11,0x3b7c9e718c9697ec }
    /* +0xd1338a */ __asm { CMP R10,R11 }
    /* +0xd1338d */ __asm { NOP }
    /* +0xd1338e */ __asm { NOP }
    /* +0xd1338f */ __asm { NOP }
    /* +0xd13390 */ __asm { NOP }
    /* +0xd13391 */ __asm { NOP }
    /* +0xd13392 */ __asm { MOV EDX,0x963b32a9 }
    /* +0xd13397 */ __asm { MOV R11D,0xc49c5217 }
    /* +0xd1339d */ __asm { MOV RAX,qword ptr [RBP + 0x1e8] }
    /* +0xd133a4 */ __asm { XOR R11D,EAX }
    /* +0xd133a7 */ __asm { ADD EDX,0x74264595 }
    /* +0xd133ad */ __asm { XOR EDX,0xa68a5c1a }
    /* +0xd133b3 */ __asm { SUB EDX,EAX }
    /* +0xd133b5 */ __asm { MOV RAX,qword ptr [RBP + -0x28] }
    /* +0xd133b9 */ __asm { IMUL EAX,EDX }
    /* +0xd133bc */ __asm { ADD R11D,dword ptr [RBP + 0x18] }
    /* +0xd133c0 */ __asm { NOT R11D }
    /* +0xd133c3 */ __asm { CMP RAX,R11 }
    /* +0xd133c6 */ __asm { JG 0x7fffa54836ac }
    /* +0xd133cc */ __asm { MOV EDX,0x4112e346 }
    /* +0xd133d1 */ __asm { MOVZX R8D,uint8_t ptr [R10 + -0x3462] }
    /* +0xd133d9 */ __asm { LEA R11,[R10 + R8*0x4] }
    /* +0xd133dd */ __asm { ADD R11,-0x3452 }
    /* +0xd133e4 */ __asm { MOVZX R9D,uint8_t ptr [R10 + R8*0x4 + -0x3452] }
    /* +0xd133ed */ __asm { ADD EDX,0xe7beac60 }
    /* +0xd133f3 */ __asm { ROL EDX,0x1 }
    /* +0xd133f5 */ __asm { ROL R9B,0x4 }
    /* +0xd133f9 */ __asm { SUB EDX,dword ptr [RBP + 0x18] }
    /* +0xd133fc */ __asm { XOR EDX,dword ptr [RBP + 0x1e8] }
    /* +0xd13402 */ __asm { MOVSXD R12,EDX }
    /* +0xd13405 */ __asm { JMP 0x7fffa54836e4 }
    /* +0xd1340a */ __asm { LEA R10,[0x7fffa47b5516] }
    /* +0xd13411 */ __asm { MOV RCX,0x0 }
    /* +0xd13418 */ __asm { NOP }
    /* +0xd13419 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xd13420 */ __asm { MOV R11,0x191ad15c7866e081 }
    /* +0xd1342a */ __asm { CMP R10,R11 }
    /* +0xd1342d */ __asm { JZ 0x7fffa5483cb3 }
    /* +0xd13433 */ __asm { MOV qword ptr [RBP + 0x1a0],RCX }
    /* +0xd1343a */ __asm { MOV EAX,dword ptr [R10 + 0x7b22] }
    /* +0xd13441 */ __asm { JMP 0x7fffa5483c43 }
    /* +0xd13446 */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xd13450 */ __asm { IMUL RDX,R11 }
    /* +0xd13454 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd1345b */ __asm { MOV R10,0x0 }
    /* +0xd13462 */ __asm { NOP }
    /* +0xd13463 */ __asm { MOV R11,0x44870f0b1f8830ba }
    /* +0xd1346d */ __asm { ADD R11,RDX }
    /* +0xd13470 */ __asm { MOV RAX,R11 }
    /* +0xd13473 */ __asm { SHR RAX,0x2d }
    /* +0xd13477 */ __asm { MOV RCX,R11 }
    /* +0xd1347a */ __asm { SHR RCX,0x3b }
    /* +0xd1347e */ __asm { SHR R11,0x1b }
    /* +0xd13482 */ __asm { XOR R11D,EAX }
    /* +0xd13485 */ __asm { MOV R10,0x2a6b223e5071f3d2 }
    /* +0xd1348f */ __asm { MOV R8,qword ptr [RBP + 0x18] }
    /* +0xd13493 */ __asm { MOV RAX,R8 }
    /* +0xd13496 */ __asm { MOV R9D,0x286324ff }
    /* +0xd1349c */ __asm { ADD R9D,0xe67a009d }
    /* +0xd134a3 */ __asm { ROR R11D,CL }
    /* +0xd134a6 */ __asm { MOV ECX,R8D }
    /* +0xd134a9 */ __asm { ROR R9D,CL }
    /* +0xd134ac */ __asm { XOR RAX,R10 }
    /* +0xd134af */ __asm { MOV RCX,qword ptr [RBP + 0x1e8] }
    /* +0xd134b6 */ __asm { ADD R9D,ECX }
    /* +0xd134b9 */ __asm { ROL R9D,0x9 }
    /* +0xd134bd */ __asm { ROL RAX,CL }
    /* +0xd134c0 */ __asm { XOR RAX,qword ptr [R9] }
    /* +0xd134c3 */ __asm { CMP RAX,0x1667e047 }
    /* +0xd134c9 */ __asm { NOP }
    /* +0xd134ca */ __asm { NOP }
    /* +0xd134cb */ __asm { NOP }
    /* +0xd134cc */ __asm { NOP }
    /* +0xd134cd */ __asm { NOP }
    /* +0xd134ce */ __asm { CMP R11D,0x401d97b }
    /* +0xd134d5 */ __asm { JA 0x7fffa5483651 }
    /* +0xd134db */ __asm { NOP }
    /* +0xd134dc */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xd134e3 */ __asm { MOV R10,0x0 }
    /* +0xd134ea */ __asm { MOV dword ptr [RBP + 0x1a0],0xf1aeeb7a }
    /* +0xd134f4 */ __asm { MOV EDX,dword ptr [RBP + 0x1a0] }
    /* +0xd134fa */ __asm { MOV R10D,0x9cfd88fd }
    /* +0xd13500 */ __asm { MOV R11,0x6e85af7b6ceba94 }
    /* +0xd1350a */ __asm { CMP R10,R11 }
    /* +0xd1350d */ __asm { NOP }
    /* +0xd1350e */ __asm { NOP }
    /* +0xd1350f */ __asm { NOP }
    /* +0xd13510 */ __asm { NOP }
    /* +0xd13511 */ __asm { NOP }
    /* +0xd13512 */ __asm { CMP dword ptr [R10 + -0x1cff853d],0xd }
    /* +0xd1351a */ __asm { JC 0x7fffa5483651 }
    /* +0xd13520 */ __asm { PXOR XMM5,XMM5 }
    /* +0xd13524 */ __asm { MOVDQA xmmword ptr [RBP + 0x1a0],XMM5 }
    /* +0xd1352c */ __asm { MOV dword ptr [RBP + 0x40],0x901651b0 }
    /* +0xd13533 */ __asm { MOV EDX,dword ptr [RBP + 0x40] }
    /* +0xd13536 */ __asm { MOV DX,0x25de }
    /* +0xd1353a */ __asm { XOR EDX,0xe830 }
    /* +0xd13540 */ __asm { MOV RCX,qword ptr [RBP + 0x18] }
    /* +0xd13544 */ __asm { ROR DX,CL }
    /* +0xd13547 */ __asm { MOV dword ptr [RBP + 0x1a0],0x0 }
    /* +0xd13551 */ __asm { IMUL EDX,EDX,-0x3755 }
    /* +0xd13557 */ __asm { XOR EDX,dword ptr [RBP + 0x1e8] }
    /* +0xd1355d */ __asm { MOVZX R11D,DX }
    /* +0xd13561 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xd13565 */ __asm { MOV R10,0xaaee2da62e2890d }
    /* +0xd1356f */ __asm { CMP R11,R10 }
    /* +0xd13572 */ __asm { NOP }
    /* +0xd13573 */ __asm { NOP }
    /* +0xd13574 */ __asm { NOP }
    /* +0xd13575 */ __asm { NOP }
    /* +0xd13576 */ __asm { NOP }
    /* +0xd13577 */ __asm { MOV dword ptr [RBP + 0x40],0xef9f8ff7 }
    /* +0xd1357e */ __asm { MOV EDX,dword ptr [RBP + 0x40] }
    /* +0xd13581 */ __asm { MOV R9W,0xe705 }
    /* +0xd13586 */ __asm { ADD R9D,dword ptr [RBP + 0x18] }
    /* +0xd1358a */ __asm { MOV EAX,0x3b97 }
    /* +0xd1358f */ __asm { SUB EAX,R9D }
    /* +0xd13592 */ __asm { MOVZX R9D,AX }
    /* +0xd13596 */ __asm { CMP EDX,R9D }
    /* +0xd13599 */ __asm { JGE 0x7fffa5483cbb }
    /* +0xd1359f */ __asm { MOV EDX,0xb07f268b }
    /* +0xd135a4 */ __asm { IMUL EDX,EDX,0x53387697 }
    /* +0xd135aa */ __asm { PUSHFQ }
    /* +0xd135ab */ __asm { POP R9 }
    /* +0xd135ad */ __asm { ADD EDX,dword ptr [RBP + 0x18] }
    /* +0xd135b0 */ __asm { XOR EDX,0x8379228f }
    /* +0xd135b6 */ __asm { AND R9D,0x100 }
    /* +0xd135bd */ __asm { CMP R9D,EDX }
    /* +0xd135c0 */ __asm { NOP }
    /* +0xd135c1 */ __asm { NOP }
    /* +0xd135c2 */ __asm { NOP }
    /* +0xd135c3 */ __asm { NOP }
    /* +0xd135c4 */ __asm { NOP }
    /* +0xd135c5 */ __asm { NOP }
    /* +0xd135c6 */ __asm { NOP }
    /* +0xd135c7 */ __asm { NOP }
    /* +0xd135c8 */ __asm { NOP }
    /* +0xd135c9 */ __asm { NOP }
    /* +0xd135ca */ __asm { NOP }
    /* +0xd135cb */ __asm { NOP }
    /* +0xd135cc */ __asm { NOP }
    /* +0xd135cd */ __asm { NOP }
    /* +0xd135ce */ __asm { LEA R8,[0x7fffa477fba0] }
    /* +0xd135d5 */ __asm { MOV R11,0x6db0de284fecb0a3 }
    /* +0xd135df */ __asm { CMP R8,R11 }
    /* +0xd135e2 */ __asm { JZ 0x7fffa5483cce }
    /* +0xd135e8 */ __asm { MOV qword ptr [RBP + 0x40],R10 }
    /* +0xd135ec */ __asm { MOV R12,qword ptr [RBP + 0x18] }
    /* +0xd135f0 */ __asm { MOV EDX,R12D }
    /* +0xd135f3 */ __asm { MOV RCX,qword ptr [RBP + 0x1e8] }
    /* +0xd135fa */ __asm { SUB EDX,ECX }
    /* +0xd135fc */ __asm { MOV R9W,0x6ff9 }
    /* +0xd13601 */ __asm { MOV EAX,0xee3bb072 }
    /* +0xd13606 */ __asm { IMUL EAX,EAX,0x3004c291 }
    /* +0xd1360c */ __asm { XOR EAX,R12D }
    /* +0xd1360f */ __asm { NOT EAX }
    /* +0xd13611 */ __asm { MOVSXD R10,EAX }
    /* +0xd13614 */ __asm { MOV R11W,0x4bff }
    /* +0xd13619 */ __asm { ADD R11D,EDX }
    /* +0xd1361c */ __asm { MOV EAX,dword ptr [R8 + 0x52ec] }
    /* +0xd13623 */ __asm { MOV R8D,R12D }
    /* +0xd13626 */ __asm { OR R8D,0x1 }
    /* +0xd1362a */ __asm { IMUL R8D,R9D }
    /* +0xd1362e */ __asm { ROL R8W,0xb }
    /* +0xd13633 */ __asm { ROR R8W,CL }
    /* +0xd13637 */ __asm { IMUL EDX,R11D,-0x3203 }
    /* +0xd1363e */ __asm { MOVZX EDX,DX }
    /* +0xd13641 */ __asm { NOT R8D }
    /* +0xd13644 */ __asm { MOVZX R9D,R8W }
    /* +0xd13648 */ __asm { LEA R8,[RBP + 0x1a0] }
    /* +0xd1364f */ __asm { SYSCALL }
    /* +0xd13651 */ __asm { LEA R10,[0x7fffa478b5ec] }
    /* +0xd13658 */ __asm { MOV R11,-0x73f475f131157879 }
    /* +0xd13662 */ __asm { CMP R10,R11 }
    /* +0xd13665 */ __asm { JNZ 0x7fffa548367a }
    /* +0xd13667 */ __asm { NOP }
    /* +0xd13668 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xd1366f */ __asm { MOV RCX,0x0 }
    /* +0xd13676 */ __asm { ADD CH,uint8_t ptr [RBP + 0x32] }
    /* +0xd13679 */ __asm { SCASB RDI }
    /* +0xd1367a */ __asm { MOV qword ptr [RBP + 0x1a0],RCX }
}


// ============================================================================
// Function : Unwind@7fffa5483d10  |  RVA: 0xd13d10  |  Size: 207 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5483d10(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar1 = *(uint64_t *)(param_2 + 0x278);
  if (7 < *(uint64_t *)(param_2 + 0x270)) {
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x98) & 0x1f;
    uVar3 = ~(0x35f58000 << bVar2 | 0x35f58000U >> 0x20 - bVar2);
    (*(code *)((int64_t)(int)uVar3 + 0x7fffa5695407))
              (*(uint64_t *)(param_2 + 0x98),uVar3,
               *(uint64_t *)(param_2 + 0x130) >> 0x3d ^ *(uint64_t *)(param_2 + 0x130));
  }
  *(uint64_t *)(param_2 + 0x140) = 0;
  *(uint16_t *)(param_2 + 0x130) = 0;
  *(uint64_t *)(param_2 + 0x148) = 7;
  *(uint64_t *)(param_2 + 0x120) = uVar1;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5483de0  |  RVA: 0xd13de0  |  Size: 172 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5483de0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  
  uVar1 = *(uint64_t *)(param_2 + 0x120);
  if (7 < *(uint64_t *)(param_2 + 0x178)) {
    iVar2 = (-0x311448dc - (int)*(uint64_t *)(param_2 + 0x98)) * *(int *)(param_2 + 0x188);
    (*(code *)((int64_t)iVar2 + 0x7fffa5693a8e))
              (*(uint64_t *)(param_2 + 0x98),iVar2,
               *(uint64_t *)(param_2 + 0x160) >> 0x3d ^ *(uint64_t *)(param_2 + 0x160));
  }
  *(uint64_t *)(param_2 + 0x158) = uVar1;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5483e90  |  RVA: 0xd13e90  |  Size: 326 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5483e90(uint64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  short sVar4;
  uint64_t *puVar5;
  
  puVar5 = *(uint64_t **)(param_2 + 0x158);
  if ((uint64_t *)(param_2 + 0x220) != puVar5) {
    do {
      puVar1 = puVar5 + -4;
      if (7 < puVar5[-1]) {
        iVar2 = (int)*(uint64_t *)(param_2 + 0x268);
        sVar4 = (short)(iVar2 + 0xe22c);
        (*(code *)(&UNK_7fffa568abbb +
                  (short)(((sVar4 << 1 | (uint16_t)(sVar4 < 0)) -
                          (short)*(uint64_t *)(param_2 + 0x98)) * -0x5083)))
                  (*(uint64_t *)(param_2 + 0x268),iVar2 + -0x7f97ddc1,*puVar1 >> 0x3d ^ *puVar1);
      }
      *(uint16_t *)(puVar5 + -4) = 0;
      puVar5[-1] = 7;
      puVar5[-2] = 0;
      puVar5 = puVar1;
    } while (puVar1 != (uint64_t *)(param_2 + 0x220));
  }
  if (7 < *(uint64_t *)(param_2 + 0x1a8)) {
    uVar3 = *(uint32_t *)(param_2 + 0x268) ^ 0xca30e4c4;
    (*(code *)(&UNK_7fffa569206b + (int)(0xe39a2ee4 - uVar3 ^ *(uint32_t *)(param_2 + 0x98))))
              (&UNK_7fffa569206b + (int)(0xe39a2ee4 - uVar3 ^ *(uint32_t *)(param_2 + 0x98)),uVar3,
               *(uint64_t *)(param_2 + 400) >> 0x3d ^ *(uint64_t *)(param_2 + 400));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5483fe0  |  RVA: 0xd13fe0  |  Size: 160 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5483fe0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x1a8)) {
    iVar1 = (int)*(uint64_t *)(param_2 + 0x98);
    (*(code *)((int64_t)(0x4d4c6ff7 - iVar1) + 0x7fffa56960cb))
              (*(uint64_t *)(param_2 + 0x268),iVar1 + 0xaef80740U ^ 0xe1b4c70c,
               *(uint64_t *)(param_2 + 400) >> 0x3d ^ *(uint64_t *)(param_2 + 400));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5484080  |  RVA: 0xd14080  |  Size: 7559 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa54840f1) */
/* WARNING: Removing unreachable block (ram,0x7fffa54851b6) */
/* WARNING: Removing unreachable block (ram,0x7fffa5484e92) */
/* WARNING: Removing unreachable block (ram,0x7fffa5484bcf) */
/* WARNING: Removing unreachable block (ram,0x7fffa5485680) */
/* WARNING: Removing unreachable block (ram,0x7fffa5485819) */
/* WARNING: Removing unreachable block (ram,0x7fffa5485a11) */

int64_t FUN_7fffa5484080(uint64_t param_1,int64_t *param_2,int *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  char cVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  code *pcVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  int *piVar20;
  uint64_t *puVar21;
  uint64_t uVar22;
  uint32_t uVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  int iVar28;
  int64_t lVar29;
  uint64_t *puVar30;
  int64_t lVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint64_t uStack_130;
  uint32_t uStack_128;
  int iStack_124;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  code *pcStack_108;
  int iStack_fc;
  uint64_t uStack_f8;
  int *piStack_f0;
  uint64_t uStack_e8;
  uint32_t uStack_dc;
  uint64_t *puStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint32_t uStack_bc;
  uint8_t *puStack_b8;
  uint64_t *puStack_b0;
  uint32_t uStack_a8;
  uint32_t uStack_a4;
  int64_t *plStack_a0;
  uint64_t *puStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint32_t uStack_7c;
  uint64_t *puStack_78;
  uint64_t *puStack_70;
  
  iStack_124 = *param_3;
  uVar23 = *(uint32_t *)(param_1 + 0x2c);
  uStack_7c = *(uint32_t *)(param_1 + 0x110);
  lVar7 = *(int64_t *)(param_1 + 8);
  puVar2 = (uint64_t *)(lVar7 + (uint64_t)uVar23);
  puVar5 = (uint64_t *)((int64_t)param_4 + param_5 + -0x10);
  uStack_dc = *(uint32_t *)(param_1 + 0x18);
  uStack_110 = (uint64_t)uStack_dc;
  puVar3 = (uint64_t *)(lVar7 + uStack_110);
  puVar8 = *(uint64_t **)(param_1 + 0xf8);
  puStack_70 = (uint64_t *)*puVar8;
  uStack_c8 = puVar8[1];
  uStack_128 = 6;
  if (uStack_7c < 6) {
    uStack_128 = uStack_7c;
  }
  if (uStack_128 < 5) {
    uStack_128 = 4;
  }
  uStack_a4 = *(uint32_t *)(param_1 + 0x10c);
  uVar27 = 6;
  if (uStack_a4 < 6) {
    uVar27 = uStack_a4;
  }
  uVar34 = (uint64_t)uVar27;
  if (uVar27 < 5) {
    uVar34 = 4;
  }
  uStack_bc = (uint32_t)uVar34;
  puStack_98 = (uint64_t *)(*(uint32_t *)(puVar8 + 3) + uStack_c8);
  puVar18 = (uint64_t *)
            ((int64_t)param_4 +
            (uint64_t)((int)param_4 + (int)puStack_70 == (int)puStack_98 + (int)puVar3));
  uVar26 = ((int)puVar5 - (int)puVar2) + 1;
  uVar27 = 8;
  if (uVar26 < 8) {
    uVar27 = uVar26;
  }
  uVar26 = 0;
  if (puVar2 <= puVar5) {
    uVar26 = uVar27;
  }
  iStack_fc = param_3[1];
  *(uint32_t *)(param_1 + 300) = 0;
  uStack_e8 = uStack_c8;
  if (uVar23 < uVar26 + uVar23) {
    cVar9 = (char)*(uint32_t *)(param_1 + 0x34);
    uVar17 = *(uint64_t *)(param_1 + 0x60);
    uVar22 = (uint64_t)uVar23;
    do {
      if (uStack_7c < 6) {
        if (uStack_128 * -0x60454d91 == 0x1ea57c2b) {
          uVar34 = *(int64_t *)(lVar7 + uVar22) * -0x30e4432345000000;
          goto LAB_7fffa5485ddb;
        }
LAB_7fffa5485da0:
        uStack_e8 = (uint64_t)
                    ((*(int *)(lVar7 + uVar22) * -0x61c8864f ^ (uint32_t)uVar17) >>
                    (0x18U - cVar9 & 0x1f));
      }
      else {
        if (uStack_128 != 6) goto LAB_7fffa5485da0;
        uVar34 = *(int64_t *)(lVar7 + uVar22) * -0x30e4432340650000;
LAB_7fffa5485ddb:
        uStack_e8 = (uVar34 ^ uVar17) >> (0x38U - cVar9 & 0x3f);
      }
      uVar32 = uVar22 + 1;
      *(int *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar22 & 7) * 4) = (int)uStack_e8;
      uVar22 = uVar32;
      uVar34 = param_1;
    } while (uVar26 + uVar23 != uVar32);
  }
  puVar2 = (uint64_t *)(param_5 + (int64_t)param_4);
  piStack_f0 = param_3;
  if (puVar18 < puVar5) {
    uStack_dc = ((int)uStack_c8 - (int)puStack_70) + uStack_dc;
    puStack_d8 = puVar2 + -4;
    puVar1 = (uint64_t *)((int64_t)puVar2 - 7);
    uStack_88 = 0x34b51e4b;
    lVar13 = uStack_c8 - uStack_dc;
    puStack_78 = (uint64_t *)((int64_t)puVar2 + -1);
    puStack_b0 = (uint64_t *)((int64_t)puVar2 + -3);
    uStack_a8 = (uint32_t)(uStack_a4 == 5);
    uStack_f8 = param_1;
    plStack_a0 = param_2;
    do {
      uVar23 = (((int)puVar18 - (int)lVar7) - iStack_124) + 1;
      piVar20 = (int *)(lVar7 + (uint64_t)uVar23);
      if (uVar23 < (uint32_t)uStack_110) {
        piVar20 = (int *)((uVar23 - uStack_dc) + uStack_c8);
      }
      if ((uVar23 - (uint32_t)uStack_110 < 0xfffffffd) && (*piVar20 == *(int *)((int64_t)puVar18 + 1)))
      {
        puVar15 = (uint64_t *)(piVar20 + 1);
        puVar25 = (uint64_t *)((int64_t)puVar18 + 5);
        puVar24 = puVar2;
        if (uVar23 < (uint32_t)uStack_110) {
          puVar24 = puStack_70;
        }
        puVar14 = (uint64_t *)((int64_t)puVar18 + (int64_t)puVar24 + (5 - (int64_t)puVar15));
        if (puVar2 <= puVar14) {
          puVar14 = puVar2;
        }
        puVar21 = puVar25;
        puVar30 = puVar15;
        if (puVar25 < (uint64_t *)((int64_t)puVar14 - 7U)) {
          if (*puVar15 == *puVar25) {
            lVar29 = 0;
LAB_7fffa54844a0:
            puVar21 = (uint64_t *)((int64_t)puVar18 + lVar29 + 0xd);
            if (puVar21 < (uint64_t *)((int64_t)puVar14 - 7U)) {
              uVar17 = *puVar21;
              uVar22 = *(uint64_t *)((int64_t)piVar20 + lVar29 + 0xc);
              if (uVar22 == uVar17) goto code_r0x7fffa54844be;
              uVar23 = 0;
              for (uVar22 = uVar22 ^ uVar17; (uVar22 & 1) == 0;
                  uVar22 = uVar22 >> 1 | 0x8000000000000000) {
                uVar23 = uVar23 + 1;
              }
              uVar17 = (uint64_t)(uVar23 >> 3) + lVar29 + 8;
              goto LAB_7fffa5485284;
            }
            puVar21 = (uint64_t *)((int64_t)puVar18 + lVar29 + 0xd);
            puVar30 = (uint64_t *)((int64_t)piVar20 + lVar29 + 0xc);
            goto LAB_7fffa5485220;
          }
          uVar17 = 0;
          for (uVar22 = *puVar15 ^ *puVar25; (uVar22 & 1) == 0;
              uVar22 = uVar22 >> 1 | 0x8000000000000000) {
            uVar17 = uVar17 + 1;
          }
          uVar17 = uVar17 >> 3 & 0x1fffffff;
        }
        else {
LAB_7fffa5485220:
          if ((puVar21 < (uint64_t *)((int64_t)puVar14 - 3U)) && ((int)*puVar30 == (int)*puVar21))
          {
            puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
          }
          if ((puVar21 < (uint64_t *)((int64_t)puVar14 - 1U)) &&
             ((short)*puVar30 == (short)*puVar21)) {
            puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
          }
          if (puVar21 < puVar14) {
            puVar21 = (uint64_t *)
                      ((int64_t)puVar21 + (uint64_t)((char)*puVar30 == (char)*puVar21));
          }
          uVar17 = (int64_t)puVar21 - (int64_t)puVar25;
        }
LAB_7fffa5485284:
        if ((uint64_t *)((int64_t)puVar15 + uVar17) == puVar24) {
          puVar25 = (uint64_t *)((int64_t)puVar25 + uVar17);
          puVar15 = puVar3;
          puVar24 = puVar25;
          if (puVar25 < puVar1) {
            if (*puVar3 == *puVar25) {
              puVar24 = (uint64_t *)((int64_t)puVar18 + uVar17 + 0xd);
              lVar29 = 8;
LAB_7fffa54852c0:
              if (puVar24 < puVar1) {
                if (*(uint64_t *)((int64_t)puVar3 + lVar29) == *puVar24)
                goto code_r0x7fffa54852e6;
                uVar23 = 0;
                for (uVar22 = *puVar24 ^ *(uint64_t *)((int64_t)puVar3 + lVar29);
                    (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x8000000000000000) {
                  uVar23 = uVar23 + 1;
                }
                uVar22 = (uint64_t)(uVar23 >> 3) + lVar29;
                goto LAB_7fffa548537b;
              }
              puVar15 = (uint64_t *)(lVar29 + (int64_t)puVar3);
              goto LAB_7fffa548532e;
            }
            uVar23 = 0;
            for (uVar22 = *puVar3 ^ *puVar25; (uVar22 & 1) == 0;
                uVar22 = uVar22 >> 1 | 0x8000000000000000) {
              uVar23 = uVar23 + 1;
            }
            uVar22 = (uint64_t)(uVar23 >> 3);
          }
          else {
LAB_7fffa548532e:
            if ((puVar24 < puStack_b0) && ((int)*puVar15 == (int)*puVar24)) {
              puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
              puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
            }
            if ((puVar24 < puStack_78) && ((short)*puVar15 == (short)*puVar24)) {
              puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
              puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
            }
            if (puVar24 < puVar2) {
              puVar24 = (uint64_t *)
                        ((int64_t)puVar24 + (uint64_t)((char)*puVar15 == (char)*puVar24));
            }
            uVar22 = (int64_t)puVar24 - (int64_t)puVar25;
          }
LAB_7fffa548537b:
          uVar17 = uVar17 + uVar22;
        }
        uVar17 = uVar17 + 4;
        uStack_130 = 1;
        puVar18 = (uint64_t *)((int64_t)puVar18 + 1);
LAB_7fffa5485390:
        uVar22 = (int64_t)puVar18 - (int64_t)param_4;
        puVar15 = (uint64_t *)param_2[3];
        if (puStack_d8 < puVar18) {
          puVar25 = puVar15;
          if (param_4 <= puStack_d8) {
            puVar25 = (uint64_t *)((int64_t)puVar15 + ((int64_t)puStack_d8 - (int64_t)param_4));
            uVar32 = param_4[1];
            *puVar15 = *param_4;
            puVar15[1] = uVar32;
            if (0x10 < (int64_t)puStack_d8 - (int64_t)param_4) {
              lVar29 = 0x10;
              do {
                uVar10 = ((uint64_t *)((int64_t)param_4 + lVar29))[1];
                *(uint64_t *)((int64_t)puVar15 + lVar29) =
                     *(uint64_t *)((int64_t)param_4 + lVar29);
                ((uint64_t *)((int64_t)puVar15 + lVar29))[1] = uVar10;
                puVar8 = (uint64_t *)((int64_t)param_4 + lVar29 + 0x10);
                uVar10 = puVar8[1];
                puVar6 = (uint64_t *)((int64_t)puVar15 + lVar29 + 0x10);
                *puVar6 = *puVar8;
                puVar6[1] = uVar10;
                lVar31 = lVar29 + 0x20;
                lVar29 = lVar29 + 0x20;
              } while ((uint64_t *)((int64_t)puVar15 + lVar31) < puVar25);
            }
            param_4 = puStack_d8;
          }
          if (param_4 < puVar18) {
            uVar32 = (int64_t)puVar18 - (int64_t)param_4;
            if ((3 < uVar32) && (0x1f < (uint64_t)((int64_t)puVar25 - (int64_t)param_4))) {
              if (uVar32 < 0x20) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar32 & 0xffffffffffffffe0;
                lVar29 = 0;
                while( true ) {
                  uVar10 = *(uint64_t *)((int64_t)param_4 + lVar29);
                  uVar11 = ((uint64_t *)((int64_t)param_4 + lVar29))[1];
                  puVar8 = (uint64_t *)((int64_t)param_4 + lVar29 + 0x10);
                  uVar12 = puVar8[1];
                  puVar6 = (uint64_t *)((int64_t)puVar25 + lVar29 + 0x10);
                  *puVar6 = *puVar8;
                  puVar6[1] = uVar12;
                  *(uint64_t *)((int64_t)puVar25 + lVar29) = uVar10;
                  ((uint64_t *)((int64_t)puVar25 + lVar29))[1] = uVar11;
                  if (uVar19 - 0x20 == lVar29) break;
                  lVar29 = lVar29 + 0x20;
                }
                if (uVar32 == uVar19) goto LAB_7fffa5485640;
                if ((uVar32 & 0x1c) == 0) {
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar19);
                  puVar25 = (uint64_t *)((int64_t)puVar25 + uVar19);
                  goto LAB_7fffa548556c;
                }
              }
              uVar33 = uVar32 & 0xfffffffffffffffc;
              for (; *(uint32_t *)((int64_t)puVar25 + uVar19) =
                          *(uint32_t *)((int64_t)param_4 + uVar19), uVar33 - 4 != uVar19;
                  uVar19 = uVar19 + 4) {
              }
              if (uVar32 == uVar33) goto LAB_7fffa5485640;
              param_4 = (uint64_t *)((int64_t)param_4 + uVar33);
              puVar25 = (uint64_t *)((int64_t)puVar25 + uVar33);
            }
LAB_7fffa548556c:
            uVar23 = (int)puVar18 - (int)param_4 & 7;
            uVar32 = (uint64_t)uVar23;
            puVar24 = puVar25;
            puVar15 = param_4;
            if (uVar23 == 0) {
              puVar14 = param_4;
            }
            else {
              do {
                uVar32 = uVar32 - 1;
                puVar25 = (uint64_t *)((int64_t)puVar24 + 1);
                *(char *)puVar24 = (char)*puVar15;
                puVar14 = (uint64_t *)((int64_t)puVar15 + 1);
                puVar24 = puVar25;
                puVar15 = (uint64_t *)((int64_t)puVar15 + 1);
              } while (uVar32 != 0);
            }
            if ((uint64_t)((int64_t)param_4 - (int64_t)puVar18) < 0xfffffffffffffff9) {
              lVar29 = 0;
              while( true ) {
                *(uint8_t *)((int64_t)puVar25 + lVar29) =
                     *(uint8_t *)((int64_t)puVar14 + lVar29);
                *(uint8_t *)((int64_t)puVar25 + lVar29 + 1) =
                     *(uint8_t *)((int64_t)puVar14 + lVar29 + 1);
                *(uint8_t *)((int64_t)puVar25 + lVar29 + 2) =
                     *(uint8_t *)((int64_t)puVar14 + lVar29 + 2);
                *(uint8_t *)((int64_t)puVar25 + lVar29 + 3) =
                     *(uint8_t *)((int64_t)puVar14 + lVar29 + 3);
                *(uint8_t *)((int64_t)puVar25 + lVar29 + 4) =
                     *(uint8_t *)((int64_t)puVar14 + lVar29 + 4);
                *(uint8_t *)((int64_t)puVar25 + lVar29 + 5) =
                     *(uint8_t *)((int64_t)puVar14 + lVar29 + 5);
                *(uint8_t *)((int64_t)puVar25 + lVar29 + 6) =
                     *(uint8_t *)((int64_t)puVar14 + lVar29 + 6);
                *(uint8_t *)((int64_t)puVar25 + lVar29 + 7) =
                     *(uint8_t *)((int64_t)puVar14 + lVar29 + 7);
                if ((uint64_t *)((int64_t)puVar14 + lVar29 + 8) == puVar18) break;
                lVar29 = lVar29 + 8;
              }
            }
          }
LAB_7fffa5485640:
          lVar29 = param_2[1];
          param_2[3] = param_2[3] + uVar22;
          if (0xffff < uVar22) {
            *(uint32_t *)(param_2 + 9) = 1;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar29 - *param_2) >> 3);
          }
        }
        else {
          uVar32 = param_4[1];
          *puVar15 = *param_4;
          puVar15[1] = uVar32;
          if (0x10 < uVar22) {
            lVar29 = param_2[3];
            uVar32 = param_4[3];
            *(uint64_t *)(lVar29 + 0x10) = param_4[2];
            *(uint64_t *)(lVar29 + 0x18) = uVar32;
            if (0x20 < (int64_t)uVar22) {
              lVar31 = 0;
              do {
                puVar6 = (uint64_t *)((int64_t)param_4 + lVar31 + 0x20);
                uVar10 = puVar6[1];
                puVar8 = (uint64_t *)(lVar29 + 0x20 + lVar31);
                *puVar8 = *puVar6;
                puVar8[1] = uVar10;
                puVar8 = (uint64_t *)((int64_t)param_4 + lVar31 + 0x30);
                uVar10 = puVar8[1];
                puVar6 = (uint64_t *)(lVar29 + 0x30 + lVar31);
                *puVar6 = *puVar8;
                puVar6[1] = uVar10;
                lVar4 = lVar29 + 0x20 + lVar31;
                lVar31 = lVar31 + 0x20;
              } while (lVar4 + 0x20U < lVar29 + uVar22);
            }
            goto LAB_7fffa5485640;
          }
          lVar29 = param_2[1];
          param_2[3] = param_2[3] + uVar22;
        }
        *(short *)(lVar29 + 4) = (short)uVar22;
        *(int *)param_2[1] = (int)uStack_130;
        if (0xffff < uVar17 - 3) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        }
        *(short *)(param_2[1] + 6) = (short)(uVar17 - 3);
        param_2[1] = param_2[1] + 8;
        if (*(int *)(uStack_f8 + 300) != 0) {
          uVar23 = *(uint32_t *)(uStack_f8 + 0x2c);
          uVar22 = (uint64_t)uVar23;
          uVar27 = ((int)puVar5 - (int)(uint64_t *)(lVar7 + uVar22)) + 1;
          if (7 < uVar27) {
            uVar27 = 8;
          }
          if (puVar5 < (uint64_t *)(lVar7 + uVar22)) {
            uVar27 = 0;
          }
          if (uVar23 < uVar27 + uVar23) {
            cVar9 = (char)*(uint32_t *)(uStack_f8 + 0x34);
            uVar32 = *(uint64_t *)(uStack_f8 + 0x60);
            do {
              if (uStack_7c < 6) {
                if (uStack_7c == 5) {
                  uVar19 = *(int64_t *)(lVar7 + uVar22) * -0x30e4432345000000;
                  goto LAB_7fffa5485bf9;
                }
LAB_7fffa5485b91:
                uVar26 = (*(int *)(lVar7 + uVar22) * -0x61c8864f ^ (uint32_t)uVar32) >>
                         (0x18U - cVar9 & 0x1f);
              }
              else {
                if (uStack_128 != 6) goto LAB_7fffa5485b91;
                uVar19 = *(int64_t *)(lVar7 + uVar22) * -0x30e4432340650000;
LAB_7fffa5485bf9:
                uVar26 = (uint32_t)((uVar19 ^ uVar32) >> (0x38U - cVar9 & 0x3f));
              }
              *(uint32_t *)(uStack_f8 + 0x40 + (uint64_t)((uint32_t)uVar22 & 7) * 4) = uVar26;
              if ((uint64_t)(uVar27 + uVar23) - 1 == uVar22) break;
              uVar22 = uVar22 + 1;
            } while( true );
          }
          *(uint32_t *)(uStack_f8 + 300) = 0;
        }
        param_4 = (uint64_t *)((int64_t)puVar18 + uVar17);
        if (puVar5 < param_4) {
          puVar18 = param_4;
        }
        else {
          iVar28 = iStack_fc;
          do {
            iStack_fc = iStack_124;
            uVar23 = ((int)param_4 - (int)lVar7) - iVar28;
            lVar29 = lVar7;
            if (uVar23 < (uint32_t)uStack_110) {
              lVar29 = lVar13;
            }
            if ((0xfffffffc < uVar23 - (uint32_t)uStack_110) ||
               (piVar20 = (int *)(lVar29 + (uint64_t)uVar23), *piVar20 != (int)*param_4)) {
              puVar18 = param_4;
              iStack_124 = iStack_fc;
              iStack_fc = iVar28;
              break;
            }
            puVar18 = puVar2;
            if (uVar23 < (uint32_t)uStack_110) {
              puVar18 = puStack_70;
            }
            puVar15 = (uint64_t *)(piVar20 + 1);
            puVar25 = (uint64_t *)((int64_t)param_4 + 4);
            puVar24 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar18 + (4 - (int64_t)puVar15))
            ;
            if (puVar2 <= puVar24) {
              puVar24 = puVar2;
            }
            puVar14 = puVar25;
            puVar21 = puVar15;
            if (puVar25 < (uint64_t *)((int64_t)puVar24 - 7U)) {
              if (*puVar15 == *puVar25) {
                lVar29 = 0xc;
LAB_7fffa5485890:
                puVar14 = (uint64_t *)((int64_t)param_4 + lVar29);
                if (puVar14 < (uint64_t *)((int64_t)puVar24 - 7U)) {
                  if (*(uint64_t *)((int64_t)piVar20 + lVar29) == *puVar14)
                  goto code_r0x7fffa54858aa;
                  uVar23 = 0;
                  for (uVar17 = *(uint64_t *)((int64_t)piVar20 + lVar29) ^ *puVar14;
                      (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                    uVar23 = uVar23 + 1;
                  }
                  uVar17 = ((uint64_t)(uVar23 >> 3) + lVar29) - 4;
                  goto LAB_7fffa5485922;
                }
                puVar21 = (uint64_t *)((int64_t)piVar20 + lVar29);
                goto LAB_7fffa54858c4;
              }
              uVar23 = 0;
              for (uVar17 = *puVar25 ^ *puVar15; (uVar17 & 1) == 0;
                  uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                uVar23 = uVar23 + 1;
              }
              uVar17 = (uint64_t)(uVar23 >> 3);
            }
            else {
LAB_7fffa54858c4:
              if ((puVar14 < (uint64_t *)((int64_t)puVar24 - 3U)) &&
                 ((int)*puVar21 == (int)*puVar14)) {
                puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
                puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
              }
              if ((puVar14 < (uint64_t *)((int64_t)puVar24 - 1U)) &&
                 ((short)*puVar21 == (short)*puVar14)) {
                puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
                puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
              }
              if (puVar14 < puVar24) {
                puVar14 = (uint64_t *)
                          ((int64_t)puVar14 + (uint64_t)((char)*puVar21 == (char)*puVar14));
              }
              uVar17 = (int64_t)puVar14 - (int64_t)puVar25;
            }
LAB_7fffa5485922:
            if ((uint64_t *)((int64_t)puVar15 + uVar17) == puVar18) {
              puVar25 = (uint64_t *)((int64_t)puVar25 + uVar17);
              puVar18 = puVar3;
              puVar15 = puVar25;
              if (puVar25 < puVar1) {
                if (*puVar3 == *puVar25) {
                  puVar15 = (uint64_t *)((int64_t)param_4 + uVar17 + 0xc);
                  lVar29 = 8;
                  if (puVar15 < puVar1) {
LAB_7fffa5485970:
                    if (*(uint64_t *)((int64_t)puVar3 + lVar29) == *puVar15)
                    goto code_r0x7fffa5485980;
                    uVar23 = 0;
                    for (uVar22 = *(uint64_t *)((int64_t)puVar3 + lVar29) ^ *puVar15;
                        (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x8000000000000000) {
                      uVar23 = uVar23 + 1;
                    }
                    uVar22 = (uint64_t)(uVar23 >> 3) + lVar29;
                    goto LAB_7fffa5485a60;
                  }
LAB_7fffa548598f:
                  puVar18 = (uint64_t *)(lVar29 + (int64_t)puVar3);
                  goto LAB_7fffa5485992;
                }
                uVar23 = 0;
                for (uVar22 = *puVar3 ^ *puVar25; (uVar22 & 1) == 0;
                    uVar22 = uVar22 >> 1 | 0x8000000000000000) {
                  uVar23 = uVar23 + 1;
                }
                uVar22 = (uint64_t)(uVar23 >> 3);
              }
              else {
LAB_7fffa5485992:
                if ((puVar15 < puStack_b0) && ((int)*puVar18 == (int)*puVar15)) {
                  puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
                  puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
                }
                if ((puVar15 < puStack_78) && ((short)*puVar18 == (short)*puVar15)) {
                  puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
                  puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
                }
                if (puVar15 < puVar2) {
                  puVar15 = (uint64_t *)
                            ((int64_t)puVar15 + (uint64_t)((char)*puVar18 == (char)*puVar15));
                }
                uVar22 = (int64_t)puVar15 - (int64_t)puVar25;
              }
LAB_7fffa5485a60:
              uVar17 = uVar17 + uVar22;
            }
            if (param_4 <= puStack_d8) {
              puVar18 = (uint64_t *)param_2[3];
              uVar22 = param_4[1];
              *puVar18 = *param_4;
              puVar18[1] = uVar22;
            }
            *(uint16_t *)(param_2[1] + 4) = 0;
            *(uint32_t *)param_2[1] = 1;
            if (0xffff < uVar17 + 1) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            param_4 = (uint64_t *)((int64_t)param_4 + uVar17 + 4);
            *(short *)(param_2[1] + 6) = (short)(uVar17 + 1);
            param_2[1] = param_2[1] + 8;
            puVar18 = param_4;
            iStack_124 = iVar28;
            iVar28 = iStack_fc;
          } while (param_4 <= puVar5);
        }
      }
      else {
        uStack_130 = 999999999;
        if (uStack_7c < 5) {
          if (4 < uStack_a4) {
            if (uStack_a4 == 5) {
              puStack_b8 = &UNK_7fffa56ba4aa;
              uStack_118 = CONCAT44(uStack_118._4_4_,0x168e05dc);
              pcStack_108 = (code *)CONCAT44(pcStack_108._4_4_,0xd3ff99c1);
              uVar17 = (uStack_f8 << 0xf | uStack_f8 >> 0x31) ^
                       (uStack_f8 >> 1 | (uint64_t)((uStack_f8 & 1) != 0) << 0x3f) ^ uStack_f8;
              uVar17 = FUN_7fffa56ac9b0(puVar2,(~uVar17 & uVar34) * -0x1a0212a5c +
                                               (uVar17 | ~uVar34) * -0x17780e950 +
                                               (~uVar17 ^ uVar34) * 0xc1c41b66 +
                                               (uVar17 ^ uVar34) * 0xea645c72 +
                                               (uVar17 & ~uVar34) * -0x28a0410c,
                                        uVar17 >> 0x27 ^ uVar17,puVar18);
              uVar17 = (uVar17 >> 1 | (uint64_t)((uVar17 & 1) != 0) << 0x3f) ^
                       (uVar17 << 0x11 | uVar17 >> 0x2f) ^ uVar17;
              uVar17 = (uVar17 << 0x3e | uVar17 >> 2) ^ (uVar17 << 0x22 | uVar17 >> 0x1e) ^ uVar17;
              uVar17 = (uVar17 << 0x3c | uVar17 >> 4) ^ (uVar17 << 4 | uVar17 >> 0x3c) ^ uVar17;
              uVar17 = (uVar17 << 0x38 | uVar17 >> 8) ^ (uVar17 << 8 | uVar17 >> 0x38) ^ uVar17;
              uVar17 = (uVar17 << 0x10 | uVar17 >> 0x30) ^ (uVar17 << 0x30 | uVar17 >> 0x10) ^
                       uVar17;
            }
            else {
              uVar17 = (int64_t)puVar18 - (uint64_t)(0x7ac18bbe - uStack_bc ^ 0x7faccc44);
              puStack_b8 = (uint8_t *)(uVar17 * 8 | uVar17 >> 0x3d);
              uStack_118 = ~uStack_e8;
              pcStack_108 = FUN_7fffa5485e80;
              uVar22 = ~uStack_88;
              uVar17 = (uVar22 & 0x34b51e4b & uStack_e8) - (uVar22 & 0x34b51e4b | uStack_118);
              lVar29 = uVar17 * 0x3972e9c8 +
                       ((uVar22 ^ 0x34b51e4b) & uStack_118) * 0x11bd3e472 +
                       (uStack_118 & (uStack_88 ^ 0x34b51e4b)) * 0xb092911a +
                       (uStack_88 & 0xffffffffcb4ae1b4 | uStack_118) * -0x7f71435f +
                       (uStack_88 ^ 0x34b51e4b | uStack_e8) * 0x6b415358 +
                       ((uVar22 & 0xffffffffcb4ae1b4 & uStack_118) -
                       (uStack_e8 | uVar22 & 0xffffffffcb4ae1b4)) * 0x8519c0d +
                       (uStack_88 & 0xffffffffcb4ae1b4 & uStack_e8) * 0x7f71435f;
              FUN_7fffa5485e80(uStack_f8,puStack_b8,lVar29,uVar17,&uStack_130,lVar29);
              uVar17 = (uVar17 << 0x1f | uVar17 >> 0x21) ^
                       (uVar17 >> 1 | (uint64_t)((uVar17 & 1) != 0) << 0x3f) ^ uVar17;
            }
            goto joined_r0x7fffa5484c96;
          }
          uVar22 = (int64_t)puVar18 + 0xc19e5d3;
          uVar23 = (int)CONCAT62((int6)((uint64_t)puVar18 >> 0x10),0x25c8) * -0xe75 ^ 0x5f03;
          uVar17 = (uint64_t)uVar23;
          pcVar16 = (code *)((int64_t)(short)((short)uVar23 * -0x33bb) + 0x7fffa55fe5f9);
          (*pcVar16)((uVar22 * 0x400 | uVar22 >> 0x36) ^
                     -(int64_t)puVar18 - 0xc19e5d4U ^ (uVar22 * 0x20000 | uVar22 >> 0x2f),pcVar16,
                     0x233f5f67);
          uVar17 = (uVar17 << 0x22) + uVar17;
joined_r0x7fffa5484592:
          if (3 < uVar17) {
LAB_7fffa5485100:
            if (3 < uStack_130) {
              uVar22 = (int64_t)puVar18 + ((-0xfffffffd - uStack_130) - lVar7);
              lVar29 = lVar7;
              puVar15 = puVar3;
              if ((uint32_t)uVar22 < (uint32_t)uStack_110) {
                lVar29 = lVar13;
                puVar15 = puStack_98;
              }
              if (param_4 < puVar18) {
                uVar22 = uVar22 & 0xffffffff;
                if (puVar15 < (uint64_t *)(lVar29 + uVar22)) {
                  puVar25 = (uint64_t *)(lVar29 + uVar22);
                  while( true ) {
                    puVar25 = (uint64_t *)((int64_t)puVar25 + -1);
                    puVar24 = (uint64_t *)((int64_t)puVar18 + -1);
                    if (*(char *)puVar24 != *(char *)puVar25) break;
                    puVar18 = puVar24;
                    if (puVar25 <= puVar15 || puVar24 <= param_4) {
                      uVar17 = uVar17 + 1;
                      break;
                    }
                    uVar17 = uVar17 + 1;
                  }
                }
              }
              iStack_fc = iStack_124;
              iStack_124 = (int)uStack_130 + -3;
            }
            goto LAB_7fffa5485390;
          }
        }
        else {
          if (uStack_7c != 5) {
            if (uStack_a4 < 5) {
              puStack_b8 = (uint8_t *)CONCAT44(puStack_b8._4_4_,0xea7d55c5);
              uStack_118 = CONCAT44(uStack_118._4_4_,0xe5a983e);
              uStack_d0 = ~(uint64_t)plStack_a0;
              uVar22 = uStack_d0 | 1;
              uVar17 = (uint64_t)puVar18 >> 10 ^ (uint64_t)puVar18;
              pcStack_108 = (code *)(uVar17 << 0x29 ^ uVar17);
              uStack_90 = (uint64_t)uStack_7c;
              uStack_120 = (int64_t)puVar2 * 0x201;
              lVar29 = FUN_7fffa4a8aee0(((int64_t)puVar2 * 0x10080000000 | uStack_120 >> 0x21) ^
                                        ((int64_t)puVar2 * 0x2010000000 | uStack_120 >> 0x24),
                                        pcStack_108,
                                        ((uStack_d0 | 1) ^ uStack_90) * -0x6368590 +
                                        (~uStack_90 & uVar22) * -0x1a9f67ec9 +
                                        (uStack_90 ^ uVar22) * 0x135def6b5 +
                                        ((uint64_t)plStack_a0 & 0xfffffffffffffffe | uStack_90) *
                                        -0x169f67eb7 + (~uStack_90 ^ uVar22) * 0xefa87113 +
                                        (uStack_90 & ((uint64_t)plStack_a0 ^ 1)) * -0x40000012 +
                                        (uint64_t)((uint32_t)uStack_d0 & uStack_7c & 1) * 0x40000012,
                                        &uStack_130,uStack_f8);
              uVar17 = lVar29 * 0x400000020000001;
              uVar17 = ((lVar29 * 0x800000040000 | uVar17 >> 0x2e) ^
                        (uVar17 << 0x32 | uVar17 >> 0xe) ^ uVar17) * -0x71c71c71c71c71c7;
            }
            else if (uStack_bc < 6) {
              uVar17 = ((int64_t)puVar2 << 0x34) + (int64_t)puVar2 ^ (int64_t)puVar2 << 0x21;
              uVar22 = uVar17 << 0x15 | uVar17 >> 0x2b;
              FUN_7fffa54e5820((((int64_t)puVar18 << 0x1d | (uint64_t)puVar18 >> 0x23) ^
                                ((int64_t)puVar18 << 0x24 | (uint64_t)puVar18 >> 0x1c) ^
                               (uint64_t)puVar18) - 0xfdcd9c7b ^ 0x28683c15,FUN_7fffa54e5820,
                               &uStack_130,0x60316f35,
                               ((int64_t)puVar2 << 0x29 | uVar17 >> 0x17) ^ uVar22 ^ uVar17,
                               &uStack_130);
              uVar22 = (uVar22 << 2 | uVar22 >> 0x3e) ^ (uVar22 << 0x2d | uVar22 >> 0x13) ^ uVar22;
              uVar22 = (uVar22 << 0x1a | uVar22 >> 0x26) ^ (uVar22 << 4 | uVar22 >> 0x3c) ^ uVar22;
              uVar22 = (uVar22 << 0x34 | uVar22 >> 0xc) ^ (uVar22 << 8 | uVar22 >> 0x38) ^ uVar22;
              uVar22 = (uVar22 << 0x28 | uVar22 >> 0x18) ^ (uVar22 << 0x10 | uVar22 >> 0x30) ^
                       uVar22;
              uVar22 = (uVar22 << 0x10 | uVar22 >> 0x30) ^ (uVar22 << 0x20 | uVar22 >> 0x20) ^
                       uVar22;
              uVar17 = uVar22 >> 0x20;
              uVar17 = (uVar17 << 0x3f) + (uVar22 << 0x20 | uVar17);
            }
            else {
              lVar29 = 0x7fffa56198f3;
              FUN_7fffa560ce20(puVar18,0x7fffa56198f3,0x6f0cfd5d,0xcacdabee,uStack_f8 + 0x34b0d1e2);
              uVar17 = lVar29 * 0x1000100010001;
            }
            goto joined_r0x7fffa5484592;
          }
          if (uStack_bc < 5) {
            puVar15 = puVar2 + -0x47f3ac9;
            uVar22 = FUN_7fffa4ed0370(0x6047d5d4,(int64_t)&uStack_130 << 0x30,uStack_f8,0x24b16ac0,
                                      puVar18,(((int64_t)puVar15 << 0x26 |
                                               (uint64_t)puVar15 >> 0x1a) ^
                                               ((int64_t)puVar15 << 0x37 | (uint64_t)puVar15 >> 9)
                                              ^ (uint64_t)puVar15) * 9);
            uVar17 = uVar22 ^ uVar22 >> 0xe;
            uVar17 = uVar17 >> 0x1c ^ uVar22 >> 0x38 ^ uVar17;
          }
          else {
            if (uStack_a4 < 6) {
              uVar17 = ~(((int64_t)puVar18 << 0x37 | (uint64_t)puVar18 >> 9) ^
                         ((int64_t)puVar18 << 10 | (uint64_t)puVar18 >> 0x36) ^ (uint64_t)puVar18
                        );
              FUN_7fffa560f010(uVar17,0x7fffa561c2ad,FUN_7fffa560f010,
                               (uVar17 << 0x39 | uVar17 >> 7) ^ (uVar17 << 6 | uVar17 >> 0x3a) ^
                               uVar17,0x255688b2);
              uVar17 = (uVar17 << 0x21 | uVar17 >> 0x1f) ^ (uVar17 << 0x14 | uVar17 >> 0x2c) ^
                       uVar17;
              uVar17 = (uVar17 << 2 | uVar17 >> 0x3e) ^ (uVar17 << 0x28 | uVar17 >> 0x18) ^ uVar17;
              uVar17 = (uVar17 << 0x10 | uVar17 >> 0x30) ^ (uVar17 << 4 | uVar17 >> 0x3c) ^ uVar17;
              uVar17 = (uVar17 << 8 | uVar17 >> 0x38) ^ (uVar17 << 0x20 | uVar17 >> 0x20) ^ uVar17;
              uVar17 = uVar17 << 0x30 | uVar17 >> 0x10;
              goto joined_r0x7fffa5484592;
            }
            uVar17 = (int64_t)puVar2 * 0x4000 ^ (uint64_t)puVar2;
            FUN_7fffa4a90250(uStack_f8,puVar18,uVar17,0x834ad3fe);
            uVar17 = (uVar17 << 0x32 | uVar17 >> 0xe) - 0x431e21b6;
            uVar17 = uVar17 << 0x38 ^ uVar17 * 0x10000000 ^ uVar17;
          }
joined_r0x7fffa5484c96:
          if (3 < uVar17) goto LAB_7fffa5485100;
        }
        uVar17 = (int64_t)puVar18 - (int64_t)param_4;
        puVar18 = (uint64_t *)((int64_t)puVar18 + (uVar17 >> 8) + 1);
        *(uint32_t *)(uStack_f8 + 300) = (uint32_t)(0x7ff < uVar17);
      }
    } while (puVar18 < puVar5);
  }
  *piStack_f0 = iStack_124;
  piStack_f0[1] = iStack_fc;
  return (int64_t)puVar2 - (int64_t)param_4;
code_r0x7fffa54844be:
  lVar29 = lVar29 + 8;
  goto LAB_7fffa54844a0;
code_r0x7fffa54852e6:
  puVar24 = puVar24 + 1;
  lVar29 = lVar29 + 8;
  goto LAB_7fffa54852c0;
code_r0x7fffa54858aa:
  lVar29 = lVar29 + 8;
  goto LAB_7fffa5485890;
code_r0x7fffa5485980:
  puVar15 = puVar15 + 1;
  lVar29 = lVar29 + 8;
  if (puVar1 <= puVar15) goto LAB_7fffa548598f;
  goto LAB_7fffa5485970;
}


// ============================================================================
// Function : FUN_7fffa5485e80  |  RVA: 0xd15e80  |  Size: 5870 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5485e80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                          uint64_t *param_5,int64_t param_6)

{
  uint64_t *puVar1;
  char *pcVar2;
  uint64_t *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint32_t uVar7;
  uint64_t *puVar8;
  uint16_t uVar10;
  uint16_t uVar9;
  uint8_t uVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  uint16_t uVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint8_t *pbVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint64_t uVar21;
  uint32_t uVar22;
  uint64_t *puVar23;
  uint8_t bVar24;
  uint32_t uVar25;
  int64_t lVar26;
  uint16_t uVar27;
  int iVar28;
  uint32_t uVar29;
  uint64_t uVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  uint8_t bVar34;
  uint32_t uVar35;
  uint64_t uVar36;
  uint64_t *puVar37;
  uint32_t uVar38;
  uint64_t uVar39;
  uint64_t *puVar40;
  uint64_t *puVar41;
  uint64_t in_R11;
  uint32_t uVar42;
  uint32_t uVar43;
  uint64_t *puVar44;
  int64_t lVar45;
  uint32_t uVar46;
  int iVar47;
  uint32_t uVar48;
  uint32_t uVar49;
  bool bVar50;
  char cVar51;
  uint8_t uVar56;
  uint8_t uVar59;
  uint8_t uVar62;
  uint8_t auVar52 [16];
  char cVar57;
  char cVar60;
  char cVar63;
  uint8_t auVar53 [16];
  uint8_t bVar58;
  uint8_t bVar61;
  uint8_t bVar64;
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t bVar65;
  uint8_t auVar66 [16];
  uint8_t auVar67 [16];
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  uint8_t auVar72 [16];
  uint8_t auVar73 [16];
  uint8_t auVar74 [16];
  uint8_t bStack_2e8;
  uint8_t bStack_2e4;
  uint8_t bStack_2dc;
  uint8_t bStack_2cc;
  uint64_t uStack_2c8;
  uint64_t uStack_2c0;
  uint8_t bStack_2a9;
  uint8_t bStack_27c;
  uint8_t bStack_25c;
  uint8_t bStack_24c;
  uint8_t bStack_224;
  uint8_t bStack_220;
  uint32_t auStack_208 [64];
  char *pcStack_108;
  int64_t lStack_100;
  uint64_t *puStack_f8;
  uint8_t bStack_e9;
  
  uVar30 = 0x163b458528e3568 - param_6;
  uVar48 = (uint32_t)param_6;
  uVar42 = uVar48 | 1;
  uVar38 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  lVar31 = *(int64_t *)(param_1 + 0x38);
  puVar8 = *(uint64_t **)(param_1 + 0xf8);
  uVar16 = (in_R11 << 0x13 | in_R11 >> 0x2d) ^ (in_R11 << 0x19 | in_R11 >> 0x27) ^ in_R11;
  uVar29 = *(uint32_t *)(param_1 + 0x1c);
  puVar23 = (uint64_t *)
            ((uint64_t)
             (((0x598fc303 - uVar48) * 0x10000000 | 0x598fc303 - uVar48 >> 4) + 0x19a55058) +
            (param_2 << 0x3d | param_2 >> 3));
  uVar16 = (uVar16 << 0x32 | uVar16 >> 0xe) ^ (uVar16 << 0x26 | uVar16 >> 0x1a) ^ uVar16;
  uVar16 = (uVar16 << 0xc | uVar16 >> 0x34) ^ (uVar16 << 0x24 | uVar16 >> 0x1c) ^ uVar16;
  uVar16 = (uVar16 << 8 | uVar16 >> 0x38) ^ (uVar16 << 0x18 | uVar16 >> 0x28) ^ uVar16;
  uVar16 = ((uVar16 << 0x10 | uVar16 >> 0x30) ^ (uVar16 << 0x30 | uVar16 >> 0x10) ^ uVar16) *
           0x15c0000069de8ba9;
  puStack_f8 = (uint64_t *)
               ((uVar16 & 0xffffffff) * (uVar30 & 0xffffffff) +
               ((uVar16 >> 0x20) * (uVar30 & 0xffffffff) + (uVar30 >> 0x20) * (uVar16 & 0xffffffff)
               << 0x20));
  if (((uVar48 ^ 0x9b9aa41) << 0x18 | (uVar48 ^ 0x9b9aa41) >> 8) <
      (uVar42 * -0x45f50200 | uVar42 * 0x74dd057f >> 0x17)) {
    uVar42 = uVar42 * -0x4c061edc + 0xdbf3b37;
    bVar50 = *(int *)(param_1 + 0x28) == 0;
  }
  else {
    bVar50 = *(uint32_t *)(param_1 + 0x28) == ((0x48b5 - uVar48) * -0x4653 & 0xffff);
    uVar42 = (uVar48 ^ 0x9d90d0df) * -0x76ded0f9;
  }
  uVar49 = (int)*puVar23 * -0x61c8864f;
  uVar19 = uVar49 >> (0x18U - *(char *)((int64_t)puVar8 + 0x34) & 0x1f);
  lVar32 = puVar8[0xe];
  lVar45 = *(int64_t *)(param_1 + 8);
  uVar16 = (int64_t)puVar23 - lVar45;
  uVar25 = (uint32_t)uVar16;
  uVar15 = 6;
  if (*(uint32_t *)(param_1 + 0x10c) < 6) {
    uVar15 = *(uint32_t *)(param_1 + 0x10c);
  }
  uVar43 = 1 << ((uint8_t)uVar15 & 0x1f);
  uVar30 = (uint64_t)(uVar19 >> 2 & 0xffffffc0);
  uVar15 = *(uint32_t *)(param_1 + 0x18);
  uVar20 = uVar25 - uVar38;
  if (uVar25 - uVar29 <= uVar38) {
    uVar20 = uVar29;
  }
  if (!bVar50) {
    uVar20 = uVar29;
  }
  lVar26 = *(int64_t *)(param_1 + 0x70);
  lStack_100 = puVar8[7];
  cVar51 = (char)*(uint32_t *)(param_1 + 0x34);
  uVar29 = (uint32_t)*(uint64_t *)(param_1 + 0x60);
  bVar65 = (uint8_t)uVar42;
  bVar12 = (uint8_t)param_6;
  if (*(int *)(param_1 + 300) == 0) {
    uVar38 = *(uint32_t *)(param_1 + 0x2c);
    uVar36 = (uint64_t)uVar38;
    lVar17 = lVar31;
    lVar33 = lVar26;
    if (0x180 < uVar25 - uVar38) {
      if (uVar38 < 0xffffffa0) {
        uVar39 = uVar36 + 0x60;
        do {
          uVar21 = (uint64_t)((uint32_t)uVar36 & 7);
          uVar38 = *(uint32_t *)(param_1 + 0x40 + uVar21 * 4);
          *(uint32_t *)(param_1 + 0x40 + uVar21 * 4) =
               (*(int *)(lVar45 + 8 + uVar36) * -0x61c8864f ^ *(uint32_t *)(param_1 + 0x60)) >>
               (0x18U - cVar51 & 0x1f);
          uVar21 = (uint64_t)(uVar38 >> 2 & 0xffffffc0);
          lVar17 = 0x3f;
          if ((*(uint8_t *)(lVar31 + uVar21) & 0x3f) != 1) {
            lVar17 = 0;
          }
          lVar17 = lVar17 + (uint64_t)(*(uint8_t *)(lVar31 + uVar21) - 1 & 0x3f);
          *(char *)(lVar31 + uVar21) = (char)lVar17;
          *(char *)(lVar31 + uVar21 + lVar17) = (char)uVar38;
          *(uint32_t *)(lVar26 + uVar21 * 4 + lVar17 * 4) = (uint32_t)uVar36;
          uVar36 = uVar36 + 1;
        } while (uVar39 != uVar36);
        lVar17 = *(int64_t *)(param_1 + 0x38);
        lVar33 = *(int64_t *)(param_1 + 0x70);
      }
      uVar38 = uVar25 - 0x20;
      uVar36 = (uint64_t)uVar38;
      uVar35 = ((int)((int64_t)puVar23 + 1U) - (int)(lVar45 + uVar36)) + 1;
      uVar49 = 8;
      if (uVar35 < 8) {
        uVar49 = uVar35;
      }
      uVar35 = 0;
      if (lVar45 + uVar36 <= (int64_t)puVar23 + 1U) {
        uVar35 = uVar49;
      }
      if (uVar38 < (uVar35 + uVar25) - 0x20) {
        uVar49 = *(uint32_t *)(param_1 + 0x60);
        bVar24 = (uint8_t)*(uint32_t *)(param_1 + 0x34);
        uVar46 = ((0x309dc4d0 - uVar42) * 2 | (uint32_t)((int)(0x309dc4d0 - uVar42) < 0)) ^ uVar48;
        uVar22 = ~((uVar42 | 1) * -0x7b0293d0) + uVar48;
        bVar58 = 0x18 - bVar24;
        if ((uVar46 << 0x1e | uVar46 >> 2) <= (uVar22 * 0x20000 | uVar22 >> 0xf)) {
          bVar58 = bVar24 ^ 0x18;
        }
        uVar39 = uVar36;
        while( true ) {
          uVar35 = uVar35 - 1;
          *(uint32_t *)(param_1 + 0x40 + (uint64_t)((uint32_t)uVar39 & 7) * 4) =
               (*(int *)(lVar45 + uVar39) * -0x61c8864f ^ uVar49) >> (bVar58 & 0x1f);
          if (uVar35 == 0) break;
          uVar39 = uVar39 + 1;
        }
      }
    }
    if (uVar38 < uVar25) {
      pcStack_108 = *(char **)(param_1 + 8);
      uVar7 = *(uint32_t *)(param_1 + 0x34);
      while( true ) {
        uVar39 = (uint64_t)((uint32_t)uVar36 & 7);
        uVar38 = *(uint32_t *)(param_1 + 0x40 + uVar39 * 4);
        *(uint32_t *)(param_1 + 0x40 + uVar39 * 4) =
             (*(int *)((int64_t)pcStack_108 + 8 + uVar36) * -0x61c8864f ^ *(uint32_t *)(param_1 + 0x60)
             ) >> (0x18U - (char)uVar7 & 0x1f);
        uVar39 = (uint64_t)(uVar38 >> 2 & 0xffffffc0);
        bVar24 = (bVar65 ^ 0xa7) - 0x3f;
        bVar24 = bVar24 << (bVar12 & 7) | bVar24 >> 8 - (bVar12 & 7);
        iVar28 = 0x3f;
        if ((uint8_t)(*(uint8_t *)(lVar17 + uVar39) & 0x3f) != (uint8_t)(bVar24 << 2 | bVar24 >> 6)) {
          iVar28 = 0;
        }
        uVar49 = iVar28 + (uint32_t)(*(uint8_t *)(lVar17 + uVar39) - 1 & 0x3f);
        *(char *)(lVar17 + uVar39) = (char)uVar49;
        *(char *)((uint64_t)uVar49 + lVar17 + uVar39) = (char)uVar38;
        *(uint32_t *)(uVar39 * 4 + lVar33 + (uint64_t)uVar49 * 4) = (uint32_t)uVar36;
        if ((uVar16 & 0xffffffff) - 1 == uVar36) break;
        uVar36 = uVar36 + 1;
      }
    }
    *(uint32_t *)(param_1 + 0x2c) = uVar25;
    uVar38 = *(uint32_t *)(param_1 + 0x40 + (uint64_t)(uVar25 & 7) * 4);
    *(uint32_t *)(param_1 + 0x40 + (uint64_t)(uVar25 & 7) * 4) =
         (*(int *)(lVar45 + 8 + (uVar16 & 0xffffffff)) * -0x61c8864f ^ uVar29) >>
         (0x18U - cVar51 & 0x1f);
  }
  else {
    uVar38 = (uVar49 ^ uVar29) >> (0x18U - cVar51 & 0x1f);
    *(uint32_t *)(param_1 + 0x2c) = uVar25;
  }
  uVar36 = (uint64_t)(uVar38 >> 2 & 0xffffffc0);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar38;
  bVar24 = *(uint8_t *)(lVar31 + uVar36);
  lVar26 = lVar26 + uVar36 * 4;
  uVar62 = (uint8_t)(uVar38 >> 0x18);
  uVar59 = (uint8_t)(uVar38 >> 0x10);
  uVar56 = (uint8_t)(uVar38 >> 8);
  auVar67._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar62,uVar62),uVar59),CONCAT14(uVar59,uVar38)) >> 0x20);
  auVar67[3] = uVar56;
  auVar67[2] = uVar56;
  auVar67[0] = (uint8_t)uVar38;
  auVar67[1] = auVar67[0];
  auVar67._8_8_ = 0;
  auVar52 = pshuflw(auVar67,auVar67,0);
  pcVar2 = (char *)(lVar31 + uVar36);
  pcVar4 = (char *)(lVar31 + 0x10 + uVar36);
  pcVar5 = (char *)(lVar31 + 0x20 + uVar36);
  pcVar6 = (char *)(lVar31 + 0x30 + uVar36);
  cVar51 = auVar52[0];
  auVar66[0] = -(*pcVar4 == cVar51);
  cVar57 = auVar52[1];
  auVar66[1] = -(pcVar4[1] == cVar57);
  cVar60 = auVar52[2];
  auVar66[2] = -(pcVar4[2] == cVar60);
  cVar63 = auVar52[3];
  auVar66[3] = -(pcVar4[3] == cVar63);
  auVar66[4] = -(pcVar4[4] == cVar51);
  auVar66[5] = -(pcVar4[5] == cVar57);
  auVar66[6] = -(pcVar4[6] == cVar60);
  auVar66[7] = -(pcVar4[7] == cVar63);
  auVar66[8] = -(pcVar4[8] == cVar51);
  auVar66[9] = -(pcVar4[9] == cVar57);
  auVar66[10] = -(pcVar4[10] == cVar60);
  auVar66[0xb] = -(pcVar4[0xb] == cVar63);
  auVar66[0xc] = -(pcVar4[0xc] == cVar51);
  auVar66[0xd] = -(pcVar4[0xd] == cVar57);
  auVar66[0xe] = -(pcVar4[0xe] == cVar60);
  auVar66[0xf] = -(pcVar4[0xf] == cVar63);
  auVar52[0] = -(*pcVar5 == cVar51);
  auVar52[1] = -(pcVar5[1] == cVar57);
  auVar52[2] = -(pcVar5[2] == cVar60);
  auVar52[3] = -(pcVar5[3] == cVar63);
  auVar52[4] = -(pcVar5[4] == cVar51);
  auVar52[5] = -(pcVar5[5] == cVar57);
  auVar52[6] = -(pcVar5[6] == cVar60);
  auVar52[7] = -(pcVar5[7] == cVar63);
  auVar52[8] = -(pcVar5[8] == cVar51);
  auVar52[9] = -(pcVar5[9] == cVar57);
  auVar52[10] = -(pcVar5[10] == cVar60);
  auVar52[0xb] = -(pcVar5[0xb] == cVar63);
  auVar52[0xc] = -(pcVar5[0xc] == cVar51);
  auVar52[0xd] = -(pcVar5[0xd] == cVar57);
  auVar52[0xe] = -(pcVar5[0xe] == cVar60);
  auVar52[0xf] = -(pcVar5[0xf] == cVar63);
  auVar74[0] = -(*pcVar6 == cVar51);
  auVar74[1] = -(pcVar6[1] == cVar57);
  auVar74[2] = -(pcVar6[2] == cVar60);
  auVar74[3] = -(pcVar6[3] == cVar63);
  auVar74[4] = -(pcVar6[4] == cVar51);
  auVar74[5] = -(pcVar6[5] == cVar57);
  auVar74[6] = -(pcVar6[6] == cVar60);
  auVar74[7] = -(pcVar6[7] == cVar63);
  auVar74[8] = -(pcVar6[8] == cVar51);
  auVar74[9] = -(pcVar6[9] == cVar57);
  auVar74[10] = -(pcVar6[10] == cVar60);
  auVar74[0xb] = -(pcVar6[0xb] == cVar63);
  auVar74[0xc] = -(pcVar6[0xc] == cVar51);
  auVar74[0xd] = -(pcVar6[0xd] == cVar57);
  auVar74[0xe] = -(pcVar6[0xe] == cVar60);
  auVar74[0xf] = -(pcVar6[0xf] == cVar63);
  auVar73[0] = -(*pcVar2 == cVar51);
  auVar73[1] = -(pcVar2[1] == cVar57);
  auVar73[2] = -(pcVar2[2] == cVar60);
  auVar73[3] = -(pcVar2[3] == cVar63);
  auVar73[4] = -(pcVar2[4] == cVar51);
  auVar73[5] = -(pcVar2[5] == cVar57);
  auVar73[6] = -(pcVar2[6] == cVar60);
  auVar73[7] = -(pcVar2[7] == cVar63);
  auVar73[8] = -(pcVar2[8] == cVar51);
  auVar73[9] = -(pcVar2[9] == cVar57);
  auVar73[10] = -(pcVar2[10] == cVar60);
  auVar73[0xb] = -(pcVar2[0xb] == cVar63);
  auVar73[0xc] = -(pcVar2[0xc] == cVar51);
  auVar73[0xd] = -(pcVar2[0xd] == cVar57);
  auVar73[0xe] = -(pcVar2[0xe] == cVar60);
  auVar73[0xf] = -(pcVar2[0xf] == cVar63);
  uVar16 = (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar73 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar73[0xf] >> 7) << 0xf) |
           (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar74 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar74[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar52 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
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
                    (uint16_t)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar52[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar66 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar66[0xf] >> 7) << 0xf) << 0x10;
  if (uVar16 != 0) {
    uVar16 = uVar16 >> (bVar24 & 0x3f) | uVar16 << 0x40 - (bVar24 & 0x3f);
    uVar39 = 0;
    do {
      iVar28 = 0;
      for (uVar21 = uVar16; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x8000000000000000) {
        iVar28 = iVar28 + 1;
      }
      uVar29 = iVar28 + (uint32_t)bVar24 & 0x3f;
      if (uVar29 != 0) {
        uVar29 = *(uint32_t *)(lVar26 + (uint64_t)uVar29 * 4);
        if (uVar29 < uVar20) goto LAB_7fffa54866e2;
        uVar43 = uVar43 - 1;
        auStack_208[uVar39] = uVar29;
        uVar39 = uVar39 + 1;
      }
      uVar16 = uVar16 & uVar16 - 1;
      if ((uVar16 == 0) || (uVar43 == (-(uVar42 ^ 0x7b0a - uVar48) - 0x6d4d & 0xffff)))
      goto LAB_7fffa54866e2;
    } while( true );
  }
  uVar39 = 0;
LAB_7fffa54866e2:
  lVar17 = 0;
  if ((bVar24 & 0x3f) == 1) {
    lVar17 = 0x3f;
  }
  uVar29 = 0 << (bVar65 & 0x1f) | 0U >> 0x20 - (bVar65 & 0x1f);
  lVar17 = lVar17 + (uint64_t)(bVar24 - 1 & 0x3f);
  *(uint8_t *)(lVar31 + uVar36) = (char)lVar17;
  ((uint8_t *)(lVar31 + uVar36))[lVar17] = auVar67[0];
  iVar28 = *(int *)(param_1 + 0x2c);
  uVar29 = uVar29 >> 1 | (uint32_t)((uVar29 & 1) != 0) << 0x1f;
  *(int *)(param_1 + 0x2c) = iVar28 + 1;
  *(int *)(lVar26 + lVar17 * 4) = iVar28;
  uVar16 = 3;
  if (uVar39 != (uVar29 << (bVar12 & 0x1f) | uVar29 >> 0x20 - (bVar12 & 0x1f))) {
    puVar3 = (uint64_t *)((int64_t)puStack_f8 - 7);
    puVar1 = puVar23 + 1;
    uVar21 = 0;
    uVar36 = 3;
    do {
      uVar29 = auStack_208[uVar21];
      puVar44 = (uint64_t *)(lVar45 + (uint64_t)uVar29);
      if (*(int *)((uVar36 - 3) + (int64_t)puVar44) == *(int *)((int64_t)puVar23 + (uVar36 - 3)))
      {
        puVar40 = puVar23;
        if (puVar23 < puVar3) {
          if (*puVar44 == *puVar23) {
            puVar44 = (uint64_t *)(lVar45 + 8 + (uint64_t)uVar29);
            lVar31 = 8;
            puVar40 = puVar1;
            if (puVar1 < puVar3) {
LAB_7fffa5486ac0:
              if (*puVar44 == *puVar40) goto code_r0x7fffa5486ad0;
              uVar38 = 0;
              for (uVar16 = *puVar40 ^ *puVar44; (uVar16 & 1) == 0;
                  uVar16 = uVar16 >> 1 | 0x8000000000000000) {
                uVar38 = uVar38 + 1;
              }
              uVar16 = (uint64_t)(uVar38 >> 3) + lVar31;
              goto joined_r0x7fffa5486b3a;
            }
            goto joined_r0x7fffa5486af6;
          }
          uVar38 = 0;
          for (uVar16 = *puVar44 ^ *puVar23; (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x8000000000000000) {
            uVar38 = uVar38 + 1;
          }
          uVar16 = (uint64_t)(uVar38 >> 3);
        }
        else {
joined_r0x7fffa5486af6:
          if ((puVar40 < (uint64_t *)((int64_t)puStack_f8 - 3U)) &&
             ((int)*puVar44 == (int)*puVar40)) {
            puVar44 = (uint64_t *)((int64_t)puVar44 + 4);
            puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
          }
          if ((puVar40 < (uint64_t *)((int64_t)puStack_f8 - 1U)) &&
             ((short)*puVar44 == (short)*puVar40)) {
            puVar44 = (uint64_t *)((int64_t)puVar44 + 2);
            puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
          }
          if (puVar40 < puStack_f8) {
            puVar40 = (uint64_t *)
                      ((int64_t)puVar40 + (uint64_t)((char)*puVar44 == (char)*puVar40));
          }
          uVar16 = (int64_t)puVar40 - (int64_t)puVar23;
        }
joined_r0x7fffa5486b3a:
        if (uVar36 < uVar16) {
          *param_5 = (uint64_t)((uVar25 + 3) - uVar29);
          uVar36 = uVar16;
          if ((uint64_t *)((int64_t)puVar23 + uVar16) == puStack_f8) break;
        }
      }
      uVar16 = uVar36;
      uVar21 = uVar21 + 1;
      uVar36 = uVar16;
    } while (uVar21 != uVar39);
  }
  pbVar18 = (uint8_t *)(lStack_100 + uVar30);
  pcVar2 = (char *)*puVar8;
  uVar29 = uVar42 + 0x6aa13618 ^ 0xcc1901c8;
  uVar27 = ((short)uVar42 - (short)param_6) + 0xa7cf;
  uStack_2c8._0_1_ = (uint8_t)uVar19;
  uVar56 = (uint8_t)uStack_2c8;
  pcStack_108 = pcVar2;
  if (((uVar29 << 9 | uVar29 >> 0x17) ^ uVar48) < (0xf65efdb5 - (uVar48 ^ 0xe0ea358b) ^ uVar42)) {
    lVar31 = puVar8[1];
    auVar67 = pshuflw(ZEXT216(CONCAT11((uint8_t)uStack_2c8,(uint8_t)uStack_2c8)),
                      ZEXT216(CONCAT11((uint8_t)uStack_2c8,(uint8_t)uStack_2c8)),0);
    uVar29 = *(uint32_t *)(puVar8 + 3);
    lStack_100 = lVar31;
    uStack_2c8 = *(uint64_t *)pbVar18;
    uStack_2c0 = *(uint64_t *)(pbVar18 + 8);
    bVar24 = auVar67[0];
    auVar71[0] = -(pbVar18[0x30] == bVar24);
    bVar58 = auVar67[1];
    auVar71[1] = -(pbVar18[0x31] == bVar58);
    bVar61 = auVar67[2];
    auVar71[2] = -(pbVar18[0x32] == bVar61);
    bVar64 = auVar67[3];
    auVar71[3] = -(pbVar18[0x33] == bVar64);
    auVar71[4] = -(pbVar18[0x34] == bVar24);
    auVar71[5] = -(pbVar18[0x35] == bVar58);
    auVar71[6] = -(pbVar18[0x36] == bVar61);
    auVar71[7] = -(pbVar18[0x37] == bVar64);
    auVar71[8] = -(pbVar18[0x38] == bVar24);
    auVar71[9] = -(pbVar18[0x39] == bVar58);
    auVar71[10] = -(pbVar18[0x3a] == bVar61);
    auVar71[0xb] = -(pbVar18[0x3b] == bVar64);
    auVar71[0xc] = -(pbVar18[0x3c] == bVar24);
    auVar71[0xd] = -(pbVar18[0x3d] == bVar58);
    auVar71[0xe] = -(pbVar18[0x3e] == bVar61);
    auVar71[0xf] = -(pbVar18[0x3f] == bVar64);
    bVar34 = SUB161(auVar71 >> 7,0) & 1 | (SUB161(auVar71 >> 0xf,0) & 1) << 1 |
             (SUB161(auVar71 >> 0x17,0) & 1) << 2 | (SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
             (SUB161(auVar71 >> 0x27,0) & 1) << 4 | (SUB161(auVar71 >> 0x37,0) & 1) << 6 |
             SUB161(auVar71 >> 0x3f,0) << 7;
    uVar59 = SUB161(auVar71 >> 0x47,0);
    bStack_24c = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar71 >> 0x4f,0) & 1) << 9) >> 8);
    bStack_2e8 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar71 >> 0x57,0) & 1) << 10) >> 8);
    bStack_2cc = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb) >> 8);
    bStack_224 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc) >> 8);
    bStack_220 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd) >> 8);
    uVar62 = SUB161(auVar71 >> 0x77,0);
    auVar68[0] = -(pbVar18[0x20] == bVar24);
    auVar68[1] = -(pbVar18[0x21] == bVar58);
    auVar68[2] = -(pbVar18[0x22] == bVar61);
    auVar68[3] = -(pbVar18[0x23] == bVar64);
    auVar68[4] = -(pbVar18[0x24] == bVar24);
    auVar68[5] = -(pbVar18[0x25] == bVar58);
    auVar68[6] = -(pbVar18[0x26] == bVar61);
    auVar68[7] = -(pbVar18[0x27] == bVar64);
    auVar68[8] = -(pbVar18[0x28] == bVar24);
    auVar68[9] = -(pbVar18[0x29] == bVar58);
    auVar68[10] = -(pbVar18[0x2a] == bVar61);
    auVar68[0xb] = -(pbVar18[0x2b] == bVar64);
    auVar68[0xc] = -(pbVar18[0x2c] == bVar24);
    auVar68[0xd] = -(pbVar18[0x2d] == bVar58);
    auVar68[0xe] = -(pbVar18[0x2e] == bVar61);
    auVar68[0xf] = -(pbVar18[0x2f] == bVar64);
    uVar9 = (uint16_t)(SUB161(auVar68 >> 7,0) & 1) | (uint16_t)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
            (uint16_t)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
            (uint16_t)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
            (uint16_t)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
            (uint16_t)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
            (uint16_t)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
            (uint16_t)(SUB161(auVar68 >> 0x3f,0) & 1) << 7;
    uVar10 = uVar9 | (uint16_t)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
             (uint16_t)(SUB161(auVar68 >> 0x4f,0) & 1) << 9;
    bVar24 = SUB161(auVar68 >> 0x57,0);
    bVar58 = SUB161(auVar68 >> 0x5f,0);
    bVar61 = SUB161(auVar68 >> 0x67,0);
    bVar64 = SUB161(auVar68 >> 0x6f,0);
    uVar11 = SUB161(auVar68 >> 0x77,0);
    bStack_2a9 = (uint8_t)uVar9;
    bStack_e9 = SUB161(auVar71 >> 0x2f,0) & 1;
    uVar14 = CONCAT11(bVar34 >> 3,bVar34 >> 2);
    uVar38 = ((uVar48 ^ 0x6d324dc3) << (bVar65 & 0x1f) |
             (uVar48 ^ 0x6d324dc3) >> 0x20 - (bVar65 & 0x1f)) ^ 0x9a462e95;
    bVar65 = *pbVar18;
    auVar53[0xf] = auVar68[0xf];
    auVar70[0xf] = auVar71[0xf];
  }
  else {
    uStack_2c0 = *(uint64_t *)(pbVar18 + 8);
    lVar31 = puVar8[1];
    auVar67 = pshuflw(ZEXT216(CONCAT11((uint8_t)uStack_2c8,(uint8_t)uStack_2c8)),
                      ZEXT216(CONCAT11((uint8_t)uStack_2c8,(uint8_t)uStack_2c8)),0);
    lStack_100 = lVar31;
    bVar65 = auVar67[0];
    auVar70[0] = -(pbVar18[0x30] == bVar65);
    bVar24 = auVar67[1];
    auVar70[1] = -(pbVar18[0x31] == bVar24);
    bVar58 = auVar67[2];
    auVar70[2] = -(pbVar18[0x32] == bVar58);
    bVar61 = auVar67[3];
    auVar70[3] = -(pbVar18[0x33] == bVar61);
    auVar70[4] = -(pbVar18[0x34] == bVar65);
    auVar70[5] = -(pbVar18[0x35] == bVar24);
    auVar70[6] = -(pbVar18[0x36] == bVar58);
    auVar70[7] = -(pbVar18[0x37] == bVar61);
    auVar70[8] = -(pbVar18[0x38] == bVar65);
    auVar70[9] = -(pbVar18[0x39] == bVar24);
    auVar70[10] = -(pbVar18[0x3a] == bVar58);
    auVar70[0xb] = -(pbVar18[0x3b] == bVar61);
    auVar70[0xc] = -(pbVar18[0x3c] == bVar65);
    auVar70[0xd] = -(pbVar18[0x3d] == bVar24);
    auVar70[0xe] = -(pbVar18[0x3e] == bVar58);
    auVar70[0xf] = -(pbVar18[0x3f] == bVar61);
    bVar34 = SUB161(auVar70 >> 7,0) & 1 | (SUB161(auVar70 >> 0xf,0) & 1) << 1 |
             (SUB161(auVar70 >> 0x17,0) & 1) << 2 | (SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
             (SUB161(auVar70 >> 0x27,0) & 1) << 4 | (SUB161(auVar70 >> 0x37,0) & 1) << 6 |
             SUB161(auVar70 >> 0x3f,0) << 7;
    uVar59 = SUB161(auVar70 >> 0x47,0);
    bStack_24c = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar70 >> 0x4f,0) & 1) << 9) >> 8);
    bStack_2e8 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar70 >> 0x57,0) & 1) << 10) >> 8);
    bStack_2cc = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb) >> 8);
    bStack_224 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc) >> 8);
    bStack_220 = (uint8_t)((uint16_t)((uint16_t)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd) >> 8);
    uVar62 = SUB161(auVar70 >> 0x77,0);
    auVar53[0] = -(pbVar18[0x20] == bVar65);
    auVar53[1] = -(pbVar18[0x21] == bVar24);
    auVar53[2] = -(pbVar18[0x22] == bVar58);
    auVar53[3] = -(pbVar18[0x23] == bVar61);
    auVar53[4] = -(pbVar18[0x24] == bVar65);
    auVar53[5] = -(pbVar18[0x25] == bVar24);
    auVar53[6] = -(pbVar18[0x26] == bVar58);
    auVar53[7] = -(pbVar18[0x27] == bVar61);
    auVar53[8] = -(pbVar18[0x28] == bVar65);
    auVar53[9] = -(pbVar18[0x29] == bVar24);
    auVar53[10] = -(pbVar18[0x2a] == bVar58);
    auVar53[0xb] = -(pbVar18[0x2b] == bVar61);
    auVar53[0xc] = -(pbVar18[0x2c] == bVar65);
    auVar53[0xd] = -(pbVar18[0x2d] == bVar24);
    auVar53[0xe] = -(pbVar18[0x2e] == bVar58);
    auVar53[0xf] = -(pbVar18[0x2f] == bVar61);
    uVar9 = (uint16_t)(SUB161(auVar53 >> 7,0) & 1) | (uint16_t)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
            (uint16_t)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
            (uint16_t)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
            (uint16_t)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
            (uint16_t)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
            (uint16_t)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
            (uint16_t)(SUB161(auVar53 >> 0x3f,0) & 1) << 7;
    uVar10 = uVar9 | (uint16_t)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
             (uint16_t)(SUB161(auVar53 >> 0x4f,0) & 1) << 9;
    bVar24 = SUB161(auVar53 >> 0x57,0);
    bVar58 = SUB161(auVar53 >> 0x5f,0);
    bVar61 = SUB161(auVar53 >> 0x67,0);
    bVar64 = SUB161(auVar53 >> 0x6f,0);
    uVar11 = SUB161(auVar53 >> 0x77,0);
    bStack_2a9 = (uint8_t)uVar9;
    bStack_e9 = SUB161(auVar70 >> 0x2f,0) & 1;
    uVar14 = CONCAT11(bVar34 >> 3,bVar34 >> 2);
    uVar38 = uVar48 ^ 0x3af475f3;
    bVar65 = *pbVar18;
    uVar29 = *(uint32_t *)(puVar8 + 3);
    uStack_2c8 = *(uint64_t *)pbVar18;
  }
  iVar28 = (int)lVar31;
  bStack_2a9 = bStack_2a9 >> 7;
  uVar42 = (uint32_t)uVar10;
  bVar13 = (uint8_t)(uVar10 >> 8);
  bStack_2e4 = (uint8_t)((uint16_t)((uint16_t)(bVar24 & 1) << 10) >> 10);
  bStack_27c = (uint8_t)((uint16_t)((uint16_t)(bVar58 & 1) << 0xb) >> 0xb);
  bStack_2dc = (uint8_t)((uint16_t)((uint16_t)(bVar61 & 1) << 0xc) >> 0xc);
  bStack_25c = (uint8_t)((uint16_t)((uint16_t)(bVar64 & 1) << 0xd) >> 0xd);
  auVar69[0] = (uint8_t)uVar10;
  auVar69[1] = (char)((uVar10 & 2) >> 1);
  auVar69[3] = (char)((uVar42 & 8) >> 3);
  auVar69[2] = (char)((uVar42 & 4) >> 2);
  auVar69[5] = (char)((uVar42 & 0x20) >> 5);
  auVar69[4] = (char)((uVar42 & 0x10) >> 4);
  auVar69[7] = bStack_2a9;
  auVar69[6] = (char)((uVar10 & 0x40) >> 6);
  bStack_24c = bStack_24c >> 1;
  bStack_2e8 = bStack_2e8 >> 2;
  bStack_2cc = bStack_2cc >> 3;
  auVar69._8_8_ =
       CONCAT44(CONCAT22(CONCAT11(auVar53[0xf] >> 7,uVar11),CONCAT11(bStack_25c,bStack_2dc)),
                CONCAT22(CONCAT11(bStack_27c,bStack_2e4),CONCAT11(bVar13 >> 1,bVar13))) &
       0xff01ffffffff0101;
  auVar67 = psllw(auVar69,7);
  bStack_224 = bStack_224 >> 4;
  bStack_220 = bStack_220 >> 5;
  auVar72._0_8_ =
       CONCAT44(CONCAT22(CONCAT11(bVar34 >> 7,bVar34 >> 6),CONCAT11(bStack_e9,bVar34 >> 4)),
                CONCAT22(uVar14,CONCAT11(bVar34 >> 1,bVar34))) & 0xff01ff0101010101;
  auVar52 = ZEXT216(CONCAT11(uVar56,uVar56));
  auVar52 = pshuflw(auVar52,auVar52,0);
  bVar24 = auVar52[0];
  auVar54[0] = -(pbVar18[0x10] == bVar24);
  bVar58 = auVar52[1];
  auVar54[1] = -(pbVar18[0x11] == bVar58);
  bVar61 = auVar52[2];
  auVar54[2] = -(pbVar18[0x12] == bVar61);
  bVar64 = auVar52[3];
  auVar54[3] = -(pbVar18[0x13] == bVar64);
  auVar54[4] = -(pbVar18[0x14] == bVar24);
  auVar54[5] = -(pbVar18[0x15] == bVar58);
  auVar54[6] = -(pbVar18[0x16] == bVar61);
  auVar54[7] = -(pbVar18[0x17] == bVar64);
  auVar54[8] = -(pbVar18[0x18] == bVar24);
  auVar54[9] = -(pbVar18[0x19] == bVar58);
  auVar54[10] = -(pbVar18[0x1a] == bVar61);
  auVar54[0xb] = -(pbVar18[0x1b] == bVar64);
  auVar54[0xc] = -(pbVar18[0x1c] == bVar24);
  auVar54[0xd] = -(pbVar18[0x1d] == bVar58);
  auVar54[0xe] = -(pbVar18[0x1e] == bVar61);
  auVar54[0xf] = -(pbVar18[0x1f] == bVar64);
  auVar72._8_8_ =
       CONCAT44(CONCAT22(CONCAT11(auVar70[0xf] >> 7,uVar62),CONCAT11(bStack_220,bStack_224)),
                CONCAT22(CONCAT11(bStack_2cc,bStack_2e8),CONCAT11(bStack_24c,uVar59))) &
       0xff01ffffffffff01;
  auVar52 = psllw(auVar72,7);
  auVar55[0] = -((uint8_t)uStack_2c8 == bVar24);
  auVar55[1] = -(uStack_2c8._1_1_ == bVar58);
  auVar55[2] = -(uStack_2c8._2_1_ == bVar61);
  auVar55[3] = -(uStack_2c8._3_1_ == bVar64);
  auVar55[4] = -(uStack_2c8._4_1_ == bVar24);
  auVar55[5] = -(uStack_2c8._5_1_ == bVar58);
  auVar55[6] = -(uStack_2c8._6_1_ == bVar61);
  auVar55[7] = -(uStack_2c8._7_1_ == bVar64);
  auVar55[8] = -((uint8_t)uStack_2c0 == bVar24);
  auVar55[9] = -(uStack_2c0._1_1_ == bVar58);
  auVar55[10] = -(uStack_2c0._2_1_ == bVar61);
  auVar55[0xb] = -(uStack_2c0._3_1_ == bVar64);
  auVar55[0xc] = -(uStack_2c0._4_1_ == bVar24);
  auVar55[0xd] = -(uStack_2c0._5_1_ == bVar58);
  auVar55[0xe] = -(uStack_2c0._6_1_ == bVar61);
  auVar55[0xf] = -(uStack_2c0._7_1_ == bVar64);
  uVar36 = (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar52 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
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
                    (uint16_t)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(uint8_t)(auVar52[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar67 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(uint8_t)(auVar67[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar54 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar54[0xf] >> 7) << 0xf) << 0x10 |
           (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar55 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar55[0xf] >> 7) << 0xf);
  uVar39 = uVar36 >> (bVar65 & 0x3f) | uVar36 << 0x40 - (bVar65 & 0x3f);
  if (uVar36 != 0 && uVar43 != (uint16_t)(uVar27 * 0x400 | uVar27 >> 6)) {
    puVar3 = (uint64_t *)(lVar45 + (uint64_t)uVar15);
    lVar26 = 0;
    lStack_100 = lVar31;
    do {
      iVar47 = 0;
      for (uVar36 = uVar39; (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x8000000000000000) {
        iVar47 = iVar47 + 1;
      }
      uVar42 = iVar47 + (uint32_t)(bVar65 & 0x3f) & 0x3f;
      if (uVar42 != 0) {
        uVar42 = *(uint32_t *)(lVar32 + uVar30 * 4 + (uint64_t)uVar42 * 4);
        if (uVar42 < uVar29) break;
        uVar43 = uVar43 - 1;
        auStack_208[lVar26] = uVar42;
        lVar26 = lVar26 + 1;
      }
      uVar39 = uVar39 & uVar39 - 1;
    } while (uVar39 != 0 && uVar43 != 0);
    if (lVar26 != 0) {
      puVar1 = (uint64_t *)((int64_t)puVar23 + 4);
      iVar47 = (int)*puVar23;
      lVar32 = (uint64_t)uVar15 + lVar45 + 8;
      lVar45 = 0;
      do {
        uVar29 = auStack_208[lVar45];
        uVar30 = (int64_t)(int)uVar29;
        if ((0xb33d9f06 - uVar38 << (bVar12 & 0x1f) | 0xb33d9f06 - uVar38 >> 0x20 - (bVar12 & 0x1f))
            < (0x7a90f9 - uVar48 ^ 0x1c944840)) {
          uVar30 = (uint64_t)uVar29;
        }
        if (*(int *)(lVar31 + uVar30) == iVar47) {
          lVar17 = uVar30 + lVar31;
          puVar44 = (uint64_t *)(lVar17 + 4);
          puVar40 = (uint64_t *)(((int64_t)pcStack_108 - (int64_t)puVar44) + (int64_t)puVar1);
          if (puStack_f8 <= puVar40) {
            puVar40 = puStack_f8;
          }
          puVar37 = puVar44;
          puVar41 = puVar1;
          if (puVar1 < (uint64_t *)((int64_t)puVar40 - 7U)) {
            if (*puVar44 == *puVar1) {
              lVar33 = 0xc;
code_r0x7fffa5487241:
              puVar41 = (uint64_t *)((int64_t)puVar23 + lVar33);
              lVar31 = lStack_100;
              if (((0xa002f8e1 - uVar48) * 0x1000000 | 0xa002f8e1 - uVar48 >> 8) <
                  uVar48 + 0xb0eb244a != (uint64_t *)((int64_t)puVar40 - 7U) <= puVar41) {
                if (*(uint64_t *)(lVar17 + lVar33) == *puVar41) goto code_r0x7fffa54872ae;
                uVar42 = 0;
                for (uVar30 = *puVar41 ^ *(uint64_t *)(lVar17 + lVar33); (uVar30 & 1) == 0;
                    uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                  uVar42 = uVar42 + 1;
                }
                uVar30 = ((uint64_t)(uVar42 >> 3) + lVar33) - 4;
                goto LAB_7fffa548731f;
              }
              puVar37 = (uint64_t *)(lVar17 + lVar33);
              goto LAB_7fffa54872d2;
            }
            uVar42 = 0;
            for (uVar30 = *puVar44 ^ *puVar1; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar42 = uVar42 + 1;
            }
            uVar30 = (uint64_t)(uVar42 >> 3);
          }
          else {
LAB_7fffa54872d2:
            if ((puVar41 < (uint64_t *)((int64_t)puVar40 - 3U)) &&
               ((int)*puVar37 == (int)*puVar41)) {
              puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
              puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
            }
            if ((puVar41 < (uint64_t *)((int64_t)puVar40 - 1U)) &&
               ((short)*puVar37 == (short)*puVar41)) {
              puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
              puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
            }
            if (puVar41 < puVar40) {
              puVar41 = (uint64_t *)
                        ((int64_t)puVar41 + (uint64_t)((char)*puVar37 == (char)*puVar41));
            }
            uVar30 = (int64_t)puVar41 - (int64_t)puVar1;
          }
LAB_7fffa548731f:
          if ((char *)((int64_t)puVar44 + uVar30) == pcStack_108) {
            puVar44 = (uint64_t *)((int64_t)puVar1 + uVar30);
            puVar40 = puVar44;
            puVar41 = puVar3;
            if (puVar44 < (uint64_t *)((int64_t)puStack_f8 + -7)) {
              uVar36 = *puVar3;
              if (uVar36 == *puVar44) {
                lVar17 = 0;
                do {
                  puVar40 = (uint64_t *)((int64_t)puVar23 + lVar17 + uVar30 + 0xc);
                  if ((uint64_t *)((int64_t)puStack_f8 + -7) <= puVar40) {
                    puVar41 = (uint64_t *)(lVar17 + lVar32);
                    goto LAB_7fffa548741f;
                  }
                  uVar36 = *(uint64_t *)(lVar32 + lVar17);
                  lVar17 = lVar17 + 8;
                } while (uVar36 == *puVar40);
                uVar42 = 0;
                for (uVar36 = *puVar40 ^ uVar36; (uVar36 & 1) == 0;
                    uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                  uVar42 = uVar42 + 1;
                }
                uVar36 = (uint64_t)(uVar42 >> 3) + lVar17;
              }
              else {
                uVar42 = 0;
                for (uVar36 = uVar36 ^ *puVar44; (uVar36 & 1) == 0;
                    uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                  uVar42 = uVar42 + 1;
                }
                uVar36 = (uint64_t)(uVar42 >> 3);
              }
            }
            else {
LAB_7fffa548741f:
              if ((puVar40 < (uint64_t *)((int64_t)puStack_f8 - 3U)) &&
                 ((int)*puVar41 == (int)*puVar40)) {
                puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
                puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
              }
              if ((puVar40 < (uint64_t *)((int64_t)puStack_f8 - 1U)) &&
                 ((short)*puVar41 == (short)*puVar40)) {
                puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
                puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
              }
              if (puVar40 < puStack_f8) {
                puVar40 = (uint64_t *)
                          ((int64_t)puVar40 + (uint64_t)((char)*puVar41 == (char)*puVar40));
              }
              uVar36 = (int64_t)puVar40 - (int64_t)puVar44;
            }
            uVar30 = uVar30 + uVar36;
          }
          uVar36 = uVar30 + 4;
          if ((uVar38 + 0x9c8bd0fd >> (bVar12 & 0x1f) |
              uVar38 + 0x9c8bd0fd << 0x20 - (bVar12 & 0x1f)) != 0x9a21317a) {
            uVar36 = uVar30 | 4;
          }
          if (uVar16 < uVar36) {
            *param_5 = (uint64_t)(((((int)pcVar2 - iVar28) + uVar25) - (uVar15 + uVar29)) + 3);
            if ((uint64_t *)((int64_t)puVar23 + uVar36) == puStack_f8) {
              return uVar36;
            }
            iVar47 = (int)*puVar23;
            uVar16 = uVar36;
          }
        }
        lVar45 = lVar45 + 1;
      } while (lVar45 != lVar26);
    }
  }
  return uVar16;
code_r0x7fffa5486ad0:
  puVar40 = puVar40 + 1;
  lVar31 = lVar31 + 8;
  puVar44 = puVar44 + 1;
  if (puVar3 <= puVar40) goto joined_r0x7fffa5486af6;
  goto LAB_7fffa5486ac0;
code_r0x7fffa54872ae:
  lVar33 = lVar33 + 8;
  goto code_r0x7fffa5487241;
}


// ============================================================================
// Function : FUN_7fffa5487590  |  RVA: 0xd17590  |  Size: 626 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5487590(uint64_t param_1,uint8_t param_2,uint64_t param_3)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t in_EAX;
  uint64_t uVar4;
  uint32_t uVar5;
  int64_t in_R10;
  int64_t in_R11;
  uint64_t uVar6;
  uint8_t bVar7;
  uint8_t auVar8 [16];
  char in_XMM2_Ba;
  uint8_t bVar9;
  char in_XMM2_Bb;
  char in_XMM2_Bc;
  char in_XMM2_Bd;
  char in_XMM2_Be;
  char in_XMM2_Bf;
  char in_XMM2_Bg;
  char in_XMM2_Bh;
  char in_XMM2_Bi;
  char in_XMM2_Bj;
  char in_XMM2_Bk;
  char in_XMM2_Bl;
  char in_XMM2_Bm;
  char in_XMM2_Bn;
  char in_XMM2_Bo;
  char in_XMM2_Bp;
  uint8_t auVar10 [16];
  
  auVar10[0] = in_XMM2_Ba - 2;
  auVar10[1] = in_XMM2_Bb + -5;
  auVar10[2] = in_XMM2_Bc + '\x02';
  auVar10[3] = in_XMM2_Bd + '~';
  auVar10[4] = in_XMM2_Be + -6;
  auVar10[5] = in_XMM2_Bf + '|';
  auVar10[6] = in_XMM2_Bg + 't';
  auVar10[7] = in_XMM2_Bh + '-';
  auVar10[8] = in_XMM2_Bi + '6';
  auVar10[9] = in_XMM2_Bj + -0x2f;
  auVar10[10] = in_XMM2_Bk + -0x61;
  auVar10[0xb] = in_XMM2_Bl + -0x26;
  auVar10[0xc] = in_XMM2_Bm + -0x6e;
  auVar10[0xd] = in_XMM2_Bn + -0x42;
  auVar10[0xe] = in_XMM2_Bo + -0x5d;
  auVar10[0xf] = in_XMM2_Bp + 'y';
  param_3 = (param_3 << 0x20 | param_3 >> 0x20) ^ (param_3 << 0x3d | param_3 >> 3) ^ param_3;
  uVar4 = ~(param_3 << 6 | param_3 >> 0x3a);
  if (((in_EAX ^ 0xa9110d8e) >> 1 | (uint32_t)(((in_EAX ^ 0xa9110d8e) & 1) != 0) << 0x1f) == 0x649bcfd0)
  {
    bVar9 = auVar10[0] | 0x41;
  }
  else {
    auVar8 = psllw(auVar10,6);
    bVar9 = auVar10[0] + (auVar8[0] & DAT_7fffa56b9c40);
  }
  bVar9 = (bVar9 << 3 | bVar9 >> 5) ^ (bVar9 << 2 | bVar9 >> 6) ^ bVar9;
  bVar9 = (bVar9 << 4 | bVar9 >> 4) ^ (bVar9 << 6 | bVar9 >> 2) ^ bVar9;
  bVar1 = bVar9 >> 4;
  bVar9 = bVar9 << 4 | bVar1;
  uVar6 = (uint64_t)bVar9;
  if (0xa00a3696 < (in_EAX | 1) * -0x68ae78ca) {
    uVar6 = (int64_t)(char)bVar9;
  }
  if ((uVar4 << 0x30 ^ uVar4 << 0x18 ^ uVar4) < param_2 + uVar6) {
    return;
  }
  bVar2 = (uint8_t)in_EAX;
  bVar7 = *(uint8_t *)(in_R11 + 0x10) & 0xf;
  uVar5 = (in_EAX | 1) * -0x32380a45 + 0x576093e2;
  bVar9 = (char)param_2 >> 4;
  if ((uint64_t)(in_EAX + 0x3ccc667b) <=
      (uint64_t)(int64_t)(int)((in_EAX ^ 0xe45f6d28) + 0x5f233a6b)) {
    bVar9 = param_2 << 4;
  }
  bVar3 = bVar7 | bVar9;
  if ((in_EAX + 0xba777cf3 ^ 0x62f7bf8) <= (uVar5 * 0x1000 | uVar5 >> 0x14)) {
    bVar3 = bVar9 * bVar7;
  }
  *(uint8_t *)(in_R11 + 7) = *(uint8_t *)(in_R11 + 7) | 2;
  *(uint8_t *)(in_R11 + 0x14) = *(uint8_t *)(in_R11 + 0x14) & 0xf | bVar1 << 4;
  *(uint8_t *)(in_R11 + 0x10) = bVar3;
  if ((char)param_2 < (char)((bVar2 | 1) * ',' + 'H')) {
    if ((char)param_2 < (char)((bVar2 ^ 0x8e) + 0x20)) {
      if (param_2 == 1) {
        uVar5 = (uint32_t)*(uint8_t *)(in_R10 + uVar6);
        goto LAB_7fffa548779c;
      }
    }
    else if (param_2 == (uint8_t)((bVar2 ^ 0xe0) + 0x76)) {
      uVar5 = (uint32_t)*(uint16_t *)(in_R10 + uVar6);
      goto LAB_7fffa548779c;
    }
  }
  else if ((char)param_2 < (char)(bVar2 + 0x9c)) {
    if (param_2 == 4) goto LAB_7fffa5487798;
  }
  else if (param_2 == 8) {
LAB_7fffa5487798:
    uVar5 = *(uint32_t *)(in_R10 + uVar6);
    goto LAB_7fffa548779c;
  }
  uVar5 = 0;
LAB_7fffa548779c:
  *(uint32_t *)(in_R11 + 0x28) = uVar5;
  *(uint8_t *)(in_R11 + 0xb) = param_2 + *(char *)(in_R11 + 0xb);
                    /* WARNING: Read-only address (ram,0x7fffa56b9c40) is written */
  return;
}


// ============================================================================
// Function : FUN_7fffa5487b80  |  RVA: 0xd17b80  |  Size: 882 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5487b80(int64_t param_1,uint64_t param_2,uint32_t param_3)

{
  int64_t lVar1;
  char cVar2;
  bool bVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  uint8_t auStack_48 [16];
  uint8_t auStack_38 [16];
  
  uVar5 = param_1 - 0x49d52b13U >> 0x3c ^ param_1 - 0x49d52b13U;
  uVar4 = *(uint64_t *)(uVar5 + 0xd2be3752);
  if ((((uVar4 & 0x400000000) == 0) || ((*(uint32_t *)(uVar5 + 0xd2be35ca) & 0xf0000) == 0)) &&
     (((uVar4 & 0x800000000) ==
       (uint64_t)((0x989700c5 - param_3) * 0x10 | 0x989700c5 - param_3 >> 0x1c) ||
      ((*(uint8_t *)(uVar5 + 0xd2be35cc) & 0x10) == 0)))) {
    if (((char)uVar4 < '\0') && (*(int *)(uVar5 + 0xd2be375e) != 0x53)) {
      auStack_38 = (uint8_t  [16])0x0;
      bVar7 = (uint8_t)param_3 & 7;
      auStack_48 = (uint8_t  [16])0x0;
      bVar6 = *(uint8_t *)(uVar5 + 0xd2be35eb) & 0xf;
      if (bVar6 != (uint8_t)(0U >> bVar7 | '\0' << 8 - bVar7)) {
        uVar4 = 0;
        do {
          lVar1 = uVar5 + 0xd2be35f2 + uVar4 * 0x20;
          bVar7 = *(uint8_t *)(uVar5 + 0xd2be35f2 + uVar4 * 0x20) & 0xf;
          if (bVar7 < 2) {
            if ((bVar7 == 1) && (*(int *)(lVar1 + 8) == 5)) {
              bVar7 = auStack_48[*(uint32_t *)(lVar1 + 0x10)];
              bVar8 = bVar7 + 1;
              auStack_48[*(uint32_t *)(lVar1 + 0x10)] = bVar8;
              bVar3 = 1 < bVar8;
              if ((param_3 | 1) * -0x37e2bc65 < 0x30877fb1) {
                bVar3 = bVar7 < 0x7f;
              }
              if (bVar3) {
                return;
              }
            }
          }
          else if ((bVar7 == 2) &&
                  (cVar2 = auStack_48[*(uint8_t *)(lVar1 + 0x13)],
                  auStack_48[*(uint8_t *)(lVar1 + 0x13)] = cVar2 + 1U, 1 < (uint8_t)(cVar2 + 1U))) {
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != bVar6);
      }
    }
    bVar7 = *(uint8_t *)(uVar5 + 0xd2be3733);
    if ((('*' < (char)bVar7) && ('0' < (char)bVar7)) && ((char)bVar7 < 'H')) {
      psllw(ZEXT116(bVar7),3);
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5487f0c  |  RVA: 0xd17f0c  |  Size: 92 bytes
// Callers  : FUN_7fffa4ee8f10@0x778f10
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa5488ca4@0xd18ca4
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5487f0c(uint64_t param_1)

{
  code *pcVar1;
  uint64_t uVar2;
  
  if (_DAT_7fffa47c00d0 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = _DAT_7fffa47c00d0;
  if ((_DAT_7fffa47c00d0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_7fffa5488ca4(0x1a,"AppPolicyGetProcessTerminationMethod",
                                        &UNK_7fffa56b3e98,&UNK_7fffa56b3e9c), pcVar1 == (code *)0x0)
     ) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa5487f80  |  RVA: 0xd17f80  |  Size: 60 bytes
// Callers  : FUN_7fffa5697680@0xf27680
// Callees  : _guard_dispatch_icall@0xf30810
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint64_t FUN_7fffa5487f80(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0))
    break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa5488020  |  RVA: 0xd18020  |  Size: 547 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5488020(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47bbe1c = 0;
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x10] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x11] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x12] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x13] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x14] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x15] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x16] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x17] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x18] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x19] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x1a] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x1b] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x1c] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x1d] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x1e] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x1f] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[1] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[2] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[3] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[4] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[5] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[6] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[7] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[8] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[9] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[10] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0xb] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0xc] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0xd] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0xe] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0xf] = '\0';
  uRam00007fffa47bbe27 = 0;
  uRam00007fffa47bbe2f = 0;
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x29] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x2a] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x2b] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x2c] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x2d] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x2e] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x2f] = '\0';
  s_zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz_7fffa47bbe37[0x30] = '\0';
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0x96b28191247f20e + 0xb;
  lVar2 = 3;
  while( true ) {
    lVar4 = lVar3 * 0x96b28191247f20e + 0xb;
    lVar5 = lVar4 * 0x96b28191247f20e + 0xb;
    lVar3 = lVar5 * 0x96b28191247f20e + 0xb;
    *(char *)(lVar2 + 0x7fffa47bbe0f) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bbe0e) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bbe10) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar2 == 0x66) break;
    lVar2 = lVar2 + 3;
  }
  lVar2 = (uint64_t)((uint32_t)bRam00007fffa47bbe1c * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uint64_t)(uint32_t)((int)((uint64_t)lVar2 >> 0x20) << 3) + 0x7fffa47bbe27) = 0;
  bRam00007fffa47bbe1c = (char)((uint64_t)lVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5488244  |  RVA: 0xd18244  |  Size: 16 bytes
// Callers  : FUN_7fffa5605b20@0xe95b20
// Callees  : FUN_7fffa53eebb0@0xc7ebb0
// ============================================================================
uint8_t FUN_7fffa5488244(void)

{
  FUN_7fffa53eebb0();
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5488260  |  RVA: 0xd18260  |  Size: 669 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa54884ef) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488501) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488549) */
/* WARNING: Removing unreachable block (ram,0x7fffa548855b) */
/* WARNING: Removing unreachable block (ram,0x7fffa548855d) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488566) */
/* WARNING: Removing unreachable block (ram,0x7fffa548856d) */
/* WARNING: Removing unreachable block (ram,0x7fffa54885a0) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887f6) */
/* WARNING: Removing unreachable block (ram,0x7fffa54885b9) */
/* WARNING: Removing unreachable block (ram,0x7fffa54885fc) */
/* WARNING: Removing unreachable block (ram,0x7fffa548860e) */
/* WARNING: Removing unreachable block (ram,0x7fffa54885cb) */
/* WARNING: Removing unreachable block (ram,0x7fffa54885d4) */
/* WARNING: Removing unreachable block (ram,0x7fffa54885d7) */
/* WARNING: Removing unreachable block (ram,0x7fffa54885f4) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488614) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488618) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488621) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488648) */
/* WARNING: Removing unreachable block (ram,0x7fffa548867e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488689) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488694) */
/* WARNING: Removing unreachable block (ram,0x7fffa548869c) */
/* WARNING: Removing unreachable block (ram,0x7fffa54886d5) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887f9) */
/* WARNING: Removing unreachable block (ram,0x7fffa54886da) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887d9) */
/* WARNING: Removing unreachable block (ram,0x7fffa54886f3) */
/* WARNING: Removing unreachable block (ram,0x7fffa548872d) */
/* WARNING: Removing unreachable block (ram,0x7fffa548873c) */
/* WARNING: Removing unreachable block (ram,0x7fffa54886f8) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488701) */
/* WARNING: Removing unreachable block (ram,0x7fffa548870b) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488725) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488742) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488746) */
/* WARNING: Removing unreachable block (ram,0x7fffa548874f) */
/* WARNING: Removing unreachable block (ram,0x7fffa548877e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488798) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887ac) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887ae) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887c6) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887d2) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887dc) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887e1) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887ed) */
/* WARNING: Removing unreachable block (ram,0x7fffa54887f2) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488800) */
/* WARNING: Removing unreachable block (ram,0x7fffa548880c) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488811) */
/* WARNING: Removing unreachable block (ram,0x7fffa5488813) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5488260(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint32_t in_EAX;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t in_R10;
  uint64_t *puVar7;
  uint64_t uStack_8;
  
  param_4 = (param_4 << 0x3a | param_4 >> 6) ^ (param_4 << 3 | param_4 >> 0x3d) ^ param_4;
  param_4 = (param_4 << 6 | param_4 >> 0x3a) ^ (param_4 << 0x34 | param_4 >> 0xc) ^ param_4;
  uVar6 = (in_R10 << 0x24 | in_R10 >> 0x1c) ^ (in_R10 << 0x25 | in_R10 >> 0x1b) ^ in_R10;
  param_4 = (param_4 << 0x28 | param_4 >> 0x18) ^ (param_4 << 0xc | param_4 >> 0x34) ^ param_4;
  param_4 = (param_4 << 0x18 | param_4 >> 0x28) ^ (param_4 << 0x10 | param_4 >> 0x30) ^ param_4;
  param_4 = (param_4 << 0x20 | param_4 >> 0x20) ^ (param_4 << 0x30 | param_4 >> 0x10) ^ param_4;
  uVar5 = (param_4 << 7 | param_4 >> 0x39) ^ (param_4 << 0x32 | param_4 >> 0xe) ^
          (param_4 << 0x20 | param_4 >> 0x20);
  uVar5 = (uVar5 << 0x24 | uVar5 >> 0x1c) ^ (uVar5 << 0xe | uVar5 >> 0x32) ^ uVar5;
  uVar5 = (uVar5 << 8 | uVar5 >> 0x38) ^ (uVar5 << 0x1c | uVar5 >> 0x24) ^ uVar5;
  uVar5 = (uVar5 << 0x38 | uVar5 >> 8) ^ (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar5;
  uVar5 = (uVar5 << 0x30 | uVar5 >> 0x10) ^ (uVar5 << 0x20 | uVar5 >> 0x20) ^ uVar5;
  puVar7 = (uint64_t *)(uVar5 << 0x20 | uVar5 >> 0x20);
  uVar6 = (uVar6 << 8 | uVar6 >> 0x38) ^ (uVar6 << 10 | uVar6 >> 0x36) ^ uVar6;
  uVar6 = (uVar6 << 0x14 | uVar6 >> 0x2c) ^ (uVar6 << 0x10 | uVar6 >> 0x30) ^ uVar6;
  uVar6 = (uVar6 << 0x20 | uVar6 >> 0x20) ^ (uVar6 << 0x28 | uVar6 >> 0x18) ^ uVar6;
  uVar6 = uVar6 << 0x30 | uVar6 >> 0x10;
  uVar5 = (uint64_t)bRam00007fffa47bc68d;
  bVar1 = *(uint8_t *)(uVar5 * 4 + 0x7fffa47bc69d);
  bVar2 = *(uint8_t *)(uVar5 * 4 + 0x7fffa47bc69e);
  bVar3 = *(uint8_t *)(uVar5 * 4 + 0x7fffa47bc69f);
  bVar4 = *(uint8_t *)(uVar5 * 4 + 0x7fffa47bc6a0);
  uStack_8 = CONCAT17(bVar4 << 4 | bVar4 >> 4,
                      CONCAT16(bVar3 << 4 | bVar3 >> 4,
                               CONCAT15(bVar2 << 4 | bVar2 >> 4,
                                        CONCAT14(bVar1 << 4 | bVar1 >> 4,in_EAX))));
  if (((uStack_8._4_4_ ^ 0x65e8ce72) >>
       (*(uint32_t *)(uint64_t)(uint32_t)((param_3 + -0x6ae53f28) * 0x467b0ef3) & 0x1f) & 1) == 0) {
    vmmcall();
    *puVar7 = uVar6;
    uStack_8 = CONCAT44(0x29e95c76,in_EAX);
  }
  else {
    if (0x5952aca9U - param_3 < 0xa4bb5747) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    vmcall();
    *puVar7 = uVar6;
    uStack_8 = CONCAT44(0x40a1db27,in_EAX);
  }
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa5488508  |  RVA: 0xd18508  |  Size: 817 bytes
// Callers  : FUN_7fffa560e3c8@0xe9e3c8
// Callees  : FUN_7fffa5147134@0x9d7134, FUN_7fffa5488850@0xd18850, FUN_7fffa562518c@0xeb518c, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa5403d50@0xc93d50, FUN_7fffa56a65a0@0xf365a0, FUN_7fffa565caf0@0xeecaf0, FUN_7fffa5657488@0xee7488
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5488508(int64_t *param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                     int param_5,uint64_t param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint32_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint32_t *puVar8;
  uint8_t *puVar9;
  uint8_t *puVar10;
  uint8_t *puVar11;
  uint32_t *puVar12;
  uint8_t auStack_88 [32];
  uint64_t uStack_68;
  uint32_t uStack_60;
  uint32_t auStack_38 [2];
  uint64_t uStack_30;
  
  uStack_30 = _DAT_7fffa4780040 ^ (uint64_t)auStack_38;
  iVar2 = param_5;
  if (0 < param_5) {
    iVar1 = FUN_7fffa5403d50(param_4);
    iVar2 = iVar1 + 1;
    if (param_5 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 0xc);
  }
  uStack_60 = 0;
  uStack_68 = 0;
  iVar1 = FUN_7fffa562518c(param_8,(-(param_9 != 0) & 8U) + 1,param_4,iVar2);
  puVar11 = auStack_88;
  if (iVar1 == 0) goto LAB_7fffa5488813;
  uVar3 = (int64_t)iVar1 * 2 + 0x10;
  uVar3 = -(uint64_t)((uint64_t)((int64_t)iVar1 * 2) < uVar3) & uVar3;
  if (uVar3 == 0) {
    puVar8 = (uint32_t *)0x0;
    puVar11 = auStack_88;
LAB_7fffa54887f9:
    if (puVar8 == (uint32_t *)0x0) goto LAB_7fffa5488813;
  }
  else {
    if (uVar3 < 0x401) {
      uVar6 = uVar3 + 0xf;
      if (uVar6 <= uVar3) {
        uVar6 = 0xffffffffffffff0;
      }
      uVar6 = uVar6 & 0xfffffffffffffff0;
      FUN_7fffa565caf0();
      lVar4 = -uVar6;
      puVar9 = auStack_88 + lVar4;
      puVar12 = (uint32_t *)((int64_t)auStack_38 + lVar4);
      puVar8 = (uint32_t *)0x0;
      puVar11 = auStack_88 + lVar4;
      if (puVar12 == (uint32_t *)0x0) goto LAB_7fffa54887f9;
      *puVar12 = 0xcccc;
LAB_7fffa5488614:
      puVar8 = puVar12 + 4;
      puVar10 = puVar9;
    }
    else {
      puVar12 = (uint32_t *)FUN_7fffa56a65a0(uVar3);
      puVar10 = auStack_88;
      puVar9 = auStack_88;
      puVar8 = (uint32_t *)0x0;
      if (puVar12 != (uint32_t *)0x0) {
        *puVar12 = 0xdddd;
        goto LAB_7fffa5488614;
      }
    }
    puVar11 = puVar10;
    if (puVar8 == (uint32_t *)0x0) goto LAB_7fffa54887f9;
    *(int *)(puVar10 + 0x28) = iVar1;
    *(uint32_t **)(puVar10 + 0x20) = puVar8;
    *(uint64_t *)(puVar10 + -8) = 0x7fffa548863e;
    iVar2 = FUN_7fffa562518c(param_8,1,param_4,iVar2);
    if (iVar2 == 0) goto LAB_7fffa54887f9;
    *(uint64_t *)(puVar10 + 0x40) = 0;
    *(uint64_t *)(puVar10 + 0x38) = 0;
    *(uint64_t *)(puVar10 + 0x30) = 0;
    *(uint32_t *)(puVar10 + 0x28) = 0;
    *(uint64_t *)(puVar10 + 0x20) = 0;
    *(uint64_t *)(puVar10 + -8) = 0x7fffa5488671;
    iVar2 = FUN_7fffa5147134(param_2,param_3,puVar8,iVar1);
    uVar7 = 0;
    if (iVar2 == 0) goto LAB_7fffa54887f9;
    if ((param_3 & 0x400) == 0) {
      uVar3 = (int64_t)iVar2 * 2 + 0x10;
      uVar3 = -(uint64_t)((uint64_t)((int64_t)iVar2 * 2) < uVar3) & uVar3;
      if (uVar3 == 0) {
        puVar12 = (uint32_t *)0x0;
LAB_7fffa54887dc:
        if (puVar12 != (uint32_t *)0x0) {
LAB_7fffa54887e1:
          if (puVar12[-4] == 0xdddd) {
            *(uint64_t *)(puVar11 + -8) = 0x7fffa54887f2;
            FUN_7fffa52d8dd0();
          }
        }
      }
      else {
        if (uVar3 < 0x401) {
          *(uint64_t *)(puVar10 + -8) = 0x7fffa5488714;
          lVar4 = FUN_7fffa565caf0();
          lVar4 = -lVar4;
          puVar11 = puVar10 + lVar4;
          puVar5 = (uint32_t *)(puVar10 + lVar4 + 0x50);
          if (puVar5 == (uint32_t *)0x0) goto LAB_7fffa5488800;
          *puVar5 = 0xcccc;
          puVar10 = puVar10 + lVar4;
LAB_7fffa5488742:
          puVar12 = puVar5 + 4;
          puVar11 = puVar10;
        }
        else {
          *(uint64_t *)(puVar10 + -8) = 0x7fffa5488732;
          puVar5 = (uint32_t *)FUN_7fffa56a65a0();
          uVar7 = 0;
          puVar12 = (uint32_t *)0x0;
          if (puVar5 != (uint32_t *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_7fffa5488742;
          }
        }
        if (puVar12 != (uint32_t *)0x0) {
          *(uint64_t *)(puVar11 + 0x40) = uVar7;
          *(uint64_t *)(puVar11 + 0x38) = uVar7;
          *(uint64_t *)(puVar11 + 0x30) = uVar7;
          *(int *)(puVar11 + 0x28) = iVar2;
          *(uint32_t **)(puVar11 + 0x20) = puVar12;
          *(uint64_t *)(puVar11 + -8) = 0x7fffa5488778;
          iVar1 = FUN_7fffa5147134(param_2,param_3,puVar8,iVar1);
          if (iVar1 == 0) goto LAB_7fffa54887dc;
          *(uint64_t *)(puVar11 + 0x38) = 0;
          *(uint64_t *)(puVar11 + 0x30) = 0;
          if (param_7 == 0) {
            *(uint32_t *)(puVar11 + 0x28) = 0;
            *(uint64_t *)(puVar11 + 0x20) = 0;
            *(uint64_t *)(puVar11 + -8) = 0x7fffa54887a6;
            iVar2 = FUN_7fffa5657488(param_8,0,puVar12,iVar2);
            if (iVar2 == 0) goto LAB_7fffa54887dc;
          }
          else {
            *(int *)(puVar11 + 0x28) = param_7;
            *(uint64_t *)(puVar11 + 0x20) = param_6;
            *(uint64_t *)(puVar11 + -8) = 0x7fffa54887c0;
            iVar2 = FUN_7fffa5657488(param_8,0,puVar12,iVar2);
            if (iVar2 == 0) goto LAB_7fffa54887e1;
          }
          if (puVar12[-4] == 0xdddd) {
            *(uint64_t *)(puVar11 + -8) = 0x7fffa54887d7;
            FUN_7fffa52d8dd0();
          }
        }
      }
    }
    else if (param_7 != 0) {
      if (iVar2 <= param_7) {
        *(uint64_t *)(puVar10 + 0x40) = 0;
        *(uint64_t *)(puVar10 + 0x38) = 0;
        *(uint64_t *)(puVar10 + 0x30) = 0;
        *(int *)(puVar10 + 0x28) = param_7;
        *(uint64_t *)(puVar10 + 0x20) = param_6;
        *(uint64_t *)(puVar10 + -8) = 0x7fffa54886c9;
        iVar2 = FUN_7fffa5147134(param_2,param_3,puVar8,iVar1);
        if (iVar2 != 0) goto LAB_7fffa5488800;
      }
      goto LAB_7fffa54887f9;
    }
  }
LAB_7fffa5488800:
  if (puVar8[-4] == 0xdddd) {
    *(uint64_t *)(puVar11 + -8) = 0x7fffa5488811;
    FUN_7fffa52d8dd0();
  }
LAB_7fffa5488813:
  uVar3 = uStack_30 ^ (uint64_t)auStack_38;
  *(uint64_t *)(puVar11 + -8) = 0x7fffa548881f;
  FUN_7fffa5488850(uVar3);
  return;
}


// ============================================================================
// Function : FUN_7fffa5488850  |  RVA: 0xd18850  |  Size: 30 bytes
// Callers  : FUN_7fffa51552c8@0x9e52c8, FUN_7fffa5513504@0xda3504, FUN_7fffa5588400@0xe18400, FUN_7fffa55d6410@0xe66410, FUN_7fffa5213cf0@0xaa3cf0, FUN_7fffa4cf5f50@0x585f50, FUN_7fffa5217178@0xaa7178, FUN_7fffa517b810@0xa0b810
// Callees  : FUN_7fffa55c8d90@0xe58d90
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5488850(int64_t param_1)

{
  if ((param_1 == _DAT_7fffa4780040) && ((short)((uint64_t)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_7fffa55c8d90(param_1);
  return;
}


// ============================================================================
// Function : FUN_7fffa5488870  |  RVA: 0xd18870  |  Size: 268 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5488870(uint64_t param_1,int64_t param_2,uint32_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t in_R11;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar3 = in_R11 << 0x37 | in_R11 >> 9;
  uVar1 = param_2 - (param_2 << 0x2e);
  uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x33) ^ (param_2 << 0x3b | uVar1 >> 5) ^ uVar1;
  uVar4 = uVar3 ^ 0x31ce7d9d;
  uVar1 = (uVar1 << 0x36 | uVar1 >> 10) ^ (uVar1 << 0x1a | uVar1 >> 0x26) ^ uVar1;
  uVar1 = (uVar1 << 0x2c | uVar1 >> 0x14) ^ (uVar1 << 0x34 | uVar1 >> 0xc) ^ uVar1;
  uVar1 = (uVar1 << 0x28 | uVar1 >> 0x18) ^ (uVar1 << 0x18 | uVar1 >> 0x28) ^ uVar1;
  uVar4 = (uVar4 << 0x20 | uVar3 >> 0x20) ^ (uVar4 << 0x2b | uVar4 >> 0x15) ^ uVar4;
  uVar2 = uVar4 << 0x1a | uVar4 >> 0x26;
  uVar3 = uVar4 << 10 | uVar4 >> 0x36;
  param_3 = param_3 | 1;
  uVar4 = uVar3 | uVar2;
  if ((uint64_t)(param_3 * 0x4c2d4fbf) <=
      (uint64_t)(int64_t)(int)((param_3 * 0x70000000 | param_3 * 0x7efb564e >> 5) + 0x8e19ed62)) {
    uVar4 = uVar2 ^ uVar3;
  }
  *(bool *)((uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1) =
       *(short *)(*(int64_t *)((uVar4 ^ uVar2) << 0x20 | (uVar4 ^ uVar2) >> 0x20) + 4) == -0x559c;
  return;
}


// ============================================================================
// Function : FUN_7fffa5488980  |  RVA: 0xd18980  |  Size: 663 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5488980(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint8_t bVar1;
  uint8_t bVar2;
  int iVar3;
  uint8_t *pbVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uStack_78;
  
  iVar3 = (int)param_1;
  plVar5 = (int64_t *)(param_4 - (param_4 << 0x3e));
  uStack_78 = plVar5[1];
  if (0xd < uStack_78) {
    pbVar4 = (uint8_t *)(*plVar5 + 0xd);
    while( true ) {
      uStack_78 = uStack_78 - 1;
      bVar1 = (uint8_t)param_1 & 0x3f;
      bVar2 = (uint8_t)param_1 & 0x1f;
      uVar6 = (uint64_t)pbVar4[-0xd];
      if (((0x9ef9d985U - iVar3) * 0x80000 | 0x9ef9d985U - iVar3 >> 0xd) <
          (0x2921334eU >> bVar2 | 0x2921334e << 0x20 - bVar2)) {
        uVar6 = (int64_t)(char)pbVar4[-0xd];
      }
      uVar7 = (uint64_t)pbVar4[-4];
      if ((int64_t)(uint64_t)(0xd003f29e - iVar3) <
          (int64_t)(int)(((iVar3 + 0x720ec0a8U) * 0x20 | iVar3 + 0x720ec0a8U >> 0x1b) + 0x20046773)
         ) {
        uVar7 = (int64_t)(char)pbVar4[-4];
      }
      if (((((((uVar7 ^ ((-0x7ffffeffffffff0c << bVar1 | 0x80000100000000f4U >> 0x40 - bVar1) *
                         (((uint64_t)pbVar4[-7] ^
                          (((((uint64_t)pbVar4[-0xb] ^
                             ((uint64_t)pbVar4[-0xc] ^ (uVar6 ^ 0x5e5af2470e8c6405) * 0x200000001e9
                             ) * (param_1 | 1) * 0x17a57c79b009e029) * 0x200000001e9 ^
                            (uint64_t)pbVar4[-10]) * 0x200000001e9 ^ (uint64_t)pbVar4[-9]) *
                           0x200000001e9 ^ (uint64_t)pbVar4[-8]) * 0x200000001e9) *
                          (0x1ad924bc2 - param_1 << 0x29 | 0x1ad924bc2 - param_1 >> 0x17) ^
                         (uint64_t)pbVar4[-6]) ^ (uint64_t)pbVar4[-5]) * 0x200000001e9) *
               0x200000001e9 ^ (uint64_t)pbVar4[-3]) * 0x200000001e9 ^ (uint64_t)pbVar4[-2]) *
             0x200000001e9 ^ (uint64_t)pbVar4[-1]) * 0x200000001e9 ^ (uint64_t)*pbVar4) *
           0x200000001e9 == -0x62e6e5cf1662d71f) || (uStack_78 < 0xe)) break;
      pbVar4 = pbVar4 + 1;
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5488c18  |  RVA: 0xd18c18  |  Size: 37 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_7fffa5488c18(void)

{
  _DAT_7fffa47825a8 = (*(code *)&DAT_7ff84ea401a0)();
  _DAT_7fffa47825b0 = (*(code *)&DAT_7ff84ea40e00)();
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5488c50  |  RVA: 0xd18c50  |  Size: 77 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa5488c50(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(uint32_t *)(param_2 + 0x48) = 0xffffffff;
  iVar1 = (*(code *)&DAT_7ff84d94ae00)(param_1 + 8,param_2 + 0x10,param_3,0);
  uVar3 = 2;
  if (iVar1 != 0) {
    uVar3 = 0;
  }
  uVar2 = (*(code *)&DAT_7ff84ea18620)();
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(uint32_t *)(param_2 + 0x48) = uVar2;
  return uVar3;
}


// ============================================================================
// Function : FUN_7fffa5488ca0  |  RVA: 0xd18ca0  |  Size: 1 bytes
// Callers  : FUN_7fffa54765d0@0xd065d0, FUN_7fffa56a1540@0xf31540, FUN_7fffa5659a60@0xee9a60, FUN_7fffa5668b80@0xef8b80
// Callees  : none
// ============================================================================
void FUN_7fffa5488ca0(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa5488ca4  |  RVA: 0xd18ca4  |  Size: 434 bytes
// Callers  : FUN_7fffa5147134@0x9d7134, FUN_7fffa5008150@0x898150, FUN_7fffa5487f0c@0xd17f0c, FUN_7fffa52d9094@0xb69094, FUN_7fffa5145080@0x9d5080, FUN_7fffa4fe38dc@0x8738dc
// Callees  : FUN_7fffa52c43b0@0xb543b0, FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478, FUN_7fffa524fccc@0xadfccc
// ============================================================================
uint8_t * FUN_7fffa5488ca4(uint32_t param_1,uint64_t param_2,uint32_t *param_3,uint32_t *param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  code *pcVar3;
  int iVar4;
  int64_t lVar5;
  uint8_t *puVar6;
  uint8_t *puVar7;
  uint64_t uVar8;
  uint32_t auStackX_18 [2];
  
  do {
    if (param_3 == param_4) {
      puVar7 = (uint8_t *)0x0;
LAB_7fffa5488d96:
      FUN_7fffa5476b88(0xe);
      auStackX_18[0] = 0;
      iVar4 = (*(code *)&DAT_7ff84ea38460)(&g_api_KERNEL32_DLL_AreFileApisANSI,0x100,4,auStackX_18);
      if (iVar4 != 0) {
        puVar6 = puVar7;
        if (puVar7 == (uint8_t *)0x0) {
          puVar6 = (uint8_t *)0xffffffffffffffff;
        }
        LOCK();
        (&g_api_KERNEL32_DLL_AreFileApisANSI)[param_1] = puVar6;
        UNLOCK();
        iVar4 = (*(code *)&DAT_7ff84ea38460)
                          (&g_api_KERNEL32_DLL_AreFileApisANSI,0x100,2,auStackX_18);
        if (iVar4 != 0) {
          FUN_7fffa4f54478(0xe);
          return puVar7;
        }
      }
      FUN_7fffa524fccc();
      pcVar3 = (code *)__debugbreak();
      puVar7 = (uint8_t *)(*pcVar3)();
      return puVar7;
    }
    uVar8 = (uint64_t)*param_3;
    lVar5 = *(int64_t *)(uVar8 * 8 + 0x7fffa4781e50);
    if (lVar5 == 0) {
      puVar7 = (&PTR_u_api_ms_win_core_datetime_l1_1_1_7fffa56b3dc0)[uVar8];
      lVar5 = (*(code *)&DAT_7ff84ea3c7b0)(puVar7,0,0x800);
      if ((lVar5 != 0) ||
         ((((iVar4 = (*(code *)&DAT_7ff84ea18640)(), iVar4 == 0x57 &&
            (iVar4 = FUN_7fffa52c43b0(puVar7,&UNK_7fffa5876628,7), iVar4 != 0)) &&
           (iVar4 = FUN_7fffa52c43b0(puVar7,&UNK_7fffa5876618,7), iVar4 != 0)) &&
          (lVar5 = (*(code *)&DAT_7ff84ea3c7b0)(puVar7,0,0), lVar5 != 0)))) {
        LOCK();
        plVar1 = (int64_t *)(uVar8 * 8 + 0x7fffa4781e50);
        lVar2 = *plVar1;
        *plVar1 = lVar5;
        UNLOCK();
        if (lVar2 != 0) {
          (*(code *)&DAT_7ff84ea3c7d0)(lVar5);
        }
        goto LAB_7fffa5488e3c;
      }
      LOCK();
      *(uint64_t *)(uVar8 * 8 + 0x7fffa4781e50) = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (lVar5 != -1) {
LAB_7fffa5488e3c:
      puVar7 = (uint8_t *)(*(code *)&DAT_7ff84ea33140)(lVar5,param_2);
      goto LAB_7fffa5488d96;
    }
    param_3 = param_3 + 1;
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa5488e60  |  RVA: 0xd18e60  |  Size: 107 bytes
// Callers  : FUN_7fffa55aec50@0xe3ec50, FUN_7fffa517b810@0xa0b810, FUN_7fffa54037a0@0xc937a0, FUN_7fffa5248a55@0xad8a55, FUN_7fffa51306a1@0x9c06a1, FUN_7fffa5267a20@0xaf7a20
// Callees  : FUN_7fffa519a8c0@0xa2a8c0
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_7fffa5488e60(int *param_1)

{
  uint8_t *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(uint8_t **)(param_1 + 0xc), pbVar1 != (uint8_t *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && ((int64_t *)**(int64_t **)(param_1 + 10) != (int64_t *)0x0))
      {
        (**(code **)(*(int64_t *)**(int64_t **)(param_1 + 10) + 0x10))();
      }
    }
    else {
      FUN_7fffa519a8c0(*(uint64_t *)(param_1 + 10),
                       (int64_t)*(int *)(pbVar1 + 4) + *(int64_t *)(param_1 + 0xe));
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5488ed0  |  RVA: 0xd18ed0  |  Size: 15321 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5488ed0(void) {
    /* +0xd18ed0 */ __asm { PUSH RBP }
    /* +0xd18ed1 */ __asm { PUSH RSI }
    /* +0xd18ed2 */ __asm { PUSH RDI }
    /* +0xd18ed3 */ __asm { PUSH R13 }
    /* +0xd18ed5 */ __asm { PUSH R12 }
    /* +0xd18ed7 */ __asm { PUSH R14 }
    /* +0xd18ed9 */ __asm { PUSH RBX }
    /* +0xd18eda */ __asm { PUSH R15 }
    /* +0xd18edc */ __asm { SUB RSP,0x198 }
    /* +0xd18ee3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xd18eeb */ __asm { MOVDQA xmmword ptr [RBP + 0x100],XMM14 }
    /* +0xd18ef4 */ __asm { MOV qword ptr [RBP + 0xf8],-0x2 }
    /* +0xd18eff */ __asm { MOV dword ptr [RBP + 0x30],R8D }
    /* +0xd18f03 */ __asm { MOV R14,R9 }
    /* +0xd18f06 */ __asm { MOV dword ptr [RBP + 0x34],EDX }
    /* +0xd18f09 */ __asm { MOV R15D,R11D }
    /* +0xd18f0c */ __asm { MOV R12,R10 }
    /* +0xd18f0f */ __asm { MOV RSI,qword ptr [RBP + 0x180] }
    /* +0xd18f16 */ __asm { MOV RDX,RAX }
    /* +0xd18f19 */ __asm { ROL RDX,0x21 }
    /* +0xd18f1d */ __asm { MOV R13D,0x2e5d1582 }
    /* +0xd18f23 */ __asm { MOVQ XMM5,RAX }
    /* +0xd18f28 */ __asm { MOV R9D,0x52187e3c }
    /* +0xd18f2e */ __asm { ROL RAX,0x35 }
    /* +0xd18f32 */ __asm { MOVD ECX,XMM3 }
    /* +0xd18f36 */ __asm { MOV R8D,ECX }
    /* +0xd18f39 */ __asm { ROL R8D,0xd }
    /* +0xd18f3d */ __asm { MOV R10D,ECX }
    /* +0xd18f40 */ __asm { ROL R10D,0x1a }
    /* +0xd18f44 */ __asm { XOR RAX,RDX }
    /* +0xd18f47 */ __asm { ROL ECX,0x11 }
    /* +0xd18f4a */ __asm { XOR ECX,R10D }
    /* +0xd18f4d */ __asm { XOR ECX,R8D }
    /* +0xd18f50 */ __asm { MOV R8D,ECX }
    /* +0xd18f53 */ __asm { ROL R8D,0x1a }
    /* +0xd18f57 */ __asm { MOVD XMM2,ECX }
    /* +0xd18f5b */ __asm { ROL ECX,0x8 }
    /* +0xd18f5e */ __asm { XOR ECX,R8D }
    /* +0xd18f61 */ __asm { MOVD XMM0,ECX }
    /* +0xd18f65 */ __asm { PXOR XMM0,XMM2 }
    /* +0xd18f69 */ __asm { MOVD EBX,XMM0 }
    /* +0xd18f6d */ __asm { MOV ECX,EBX }
    /* +0xd18f6f */ __asm { ROL ECX,0x10 }
    /* +0xd18f72 */ __asm { ROL EBX,0x14 }
    /* +0xd18f75 */ __asm { MOVD XMM2,ECX }
    /* +0xd18f79 */ __asm { PXOR XMM2,XMM0 }
    /* +0xd18f7d */ __asm { MOVD ECX,XMM2 }
    /* +0xd18f81 */ __asm { MOV R8D,ECX }
    /* +0xd18f84 */ __asm { XOR R8D,EBX }
    /* +0xd18f87 */ __asm { OR EBX,ECX }
    /* +0xd18f89 */ __asm { MOVQ XMM2,RAX }
    /* +0xd18f8e */ __asm { PXOR XMM2,XMM5 }
    /* +0xd18f92 */ __asm { MOVQ RAX,XMM2 }
    /* +0xd18f97 */ __asm { MOV RDX,RAX }
    /* +0xd18f9a */ __asm { ROL RDX,0x2 }
    /* +0xd18f9e */ __asm { MOV R11,RAX }
    /* +0xd18fa1 */ __asm { ROL R11,0x2a }
    /* +0xd18fa5 */ __asm { XOR R11,RDX }
    /* +0xd18fa8 */ __asm { MOV ECX,0x5ff5e73d }
    /* +0xd18fad */ __asm { SUB ECX,ESI }
    /* +0xd18faf */ __asm { IMUL EDX,ECX,-0x4b7bafb3 }
    /* +0xd18fb5 */ __asm { ADD EDX,0x69f82144 }
    /* +0xd18fbb */ __asm { ADD R13D,0xd74ad430 }
    /* +0xd18fc2 */ __asm { MOV ECX,ESI }
    /* +0xd18fc4 */ __asm { ROR R13D,CL }
    /* +0xd18fc7 */ __asm { MOV dword ptr [RBP + 0x8c],R13D }
    /* +0xd18fce */ __asm { XOR R9D,ESI }
    /* +0xd18fd1 */ __asm { ADD R9D,0x95379e47 }
    /* +0xd18fd8 */ __asm { CMP RDX,R9 }
    /* +0xd18fdb */ __asm { CMOVZ EBX,R8D }
    /* +0xd18fdf */ __asm { XOR R11,RAX }
    /* +0xd18fe2 */ __asm { MOV RAX,R11 }
    /* +0xd18fe5 */ __asm { ROL RAX,0x14 }
    /* +0xd18fe9 */ __asm { MOV RDX,R11 }
    /* +0xd18fec */ __asm { ROL RDX,0x4 }
    /* +0xd18ff0 */ __asm { XOR RDX,RAX }
    /* +0xd18ff3 */ __asm { XOR RDX,R11 }
    /* +0xd18ff6 */ __asm { MOV RAX,RDX }
    /* +0xd18ff9 */ __asm { ROL RAX,0x28 }
    /* +0xd18ffd */ __asm { MOV R11,RDX }
    /* +0xd19000 */ __asm { ROL R11,0x8 }
    /* +0xd19004 */ __asm { XOR R11,RAX }
    /* +0xd19007 */ __asm { MOV R8,qword ptr [RBP + 0x158] }
    /* +0xd1900e */ __asm { XOR R11,RDX }
    /* +0xd19011 */ __asm { MOV RAX,R11 }
    /* +0xd19014 */ __asm { SHL RAX,0x37 }
    /* +0xd19018 */ __asm { SUB R11,RAX }
    /* +0xd1901b */ __asm { MOV RAX,0x47be8e06492041bb }
    /* +0xd19025 */ __asm { CMP R8,RAX }
    /* +0xd19028 */ __asm { JZ 0x7fffa548c97a }
    /* +0xd1902e */ __asm { TEST R14,R14 }
    /* +0xd19031 */ __asm { JZ 0x7fffa5489043 }
    /* +0xd19033 */ __asm { MOV ECX,0x9213ab46 }
    /* +0xd19038 */ __asm { SUB ECX,ESI }
    /* +0xd1903a */ __asm { XOR ECX,0xd849b73e }
    /* +0xd19040 */ __asm { MOV dword ptr [R14],ECX }
    /* +0xd19043 */ __asm { PXOR XMM5,XMM5 }
    /* +0xd19047 */ __asm { MOVDQA xmmword ptr [RBP + 0xd0],XMM5 }
    /* +0xd1904f */ __asm { MOV qword ptr [RBP + 0xe0],0x0 }
    /* +0xd1905a */ __asm { MOV CX,0x1c8f }
    /* +0xd1905e */ __asm { IMUL R9D,ECX,0x5f21 }
    /* +0xd19065 */ __asm { ADD R9D,0x5891 }
    /* +0xd1906c */ __asm { MOV ECX,ESI }
    /* +0xd1906e */ __asm { ROR R9W,CL }
    /* +0xd19072 */ __asm { MOVZX R9D,R9W }
    /* +0xd19076 */ __asm { MOV qword ptr [RBP + 0xe8],0x7 }
    /* +0xd19081 */ __asm { MOV RAX,qword ptr GS:[R9] }
    /* +0xd19085 */ __asm { MOV RDX,-0x6488b36ebb28873d }
    /* +0xd1908f */ __asm { CMP qword ptr [RAX + 0x60],RDX }
    /* +0xd19093 */ __asm { NOP }
    /* +0xd19094 */ __asm { NOP }
    /* +0xd19095 */ __asm { NOP }
    /* +0xd19096 */ __asm { NOP }
    /* +0xd19097 */ __asm { NOP }
    /* +0xd19098 */ __asm { TEST R12,R12 }
    /* +0xd1909b */ __asm { MOV qword ptr [RBP + 0x38],R11 }
    /* +0xd1909f */ __asm { MOV dword ptr [RBP + 0x9c],R15D }
    /* +0xd190a6 */ __asm { MOV qword ptr [RBP + 0xa0],R8 }
    /* +0xd190ad */ __asm { JZ 0x7fffa54890f9 }
    /* +0xd190af */ __asm { CMP word ptr [R11],0x5c }
    /* +0xd190b4 */ __asm { JNZ 0x7fffa5489103 }
    /* +0xd190b6 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xd190bd */ __asm { MOV RCX,0x0 }
    /* +0xd190c4 */ __asm { NOP }
    /* +0xd190c5 */ __asm { CMP R12,0x1 }
    /* +0xd190c9 */ __asm { JNZ 0x7fffa54895c7 }
    /* +0xd190cf */ __asm { LEA R8,[R12 + R12*0x1] }
    /* +0xd190d3 */ __asm { MOV qword ptr [RBP + 0xe0],R12 }
    /* +0xd190da */ __asm { LEA RCX,[RBP + 0xd0] }
    /* +0xd190e1 */ __asm { MOV RDX,R11 }
    /* +0xd190e4 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd190e9 */ __asm { MOV word ptr [RBP + R12*0x2 + 0xd0],0x0 }
    /* +0xd190f4 */ __asm { JMP 0x7fffa5489a95 }
    /* +0xd190f9 */ __asm { MOVDQA xmmword ptr [RBP + -0x10],XMM5 }
    /* +0xd190fe */ __asm { JMP 0x7fffa54891f1 }
    /* +0xd19103 */ __asm { MOV RAX,0x7fffffffffffffff }
    /* +0xd1910d */ __asm { MOVDQA xmmword ptr [RBP],XMM5 }
    /* +0xd19112 */ __asm { MOVDQA xmmword ptr [RBP + -0x10],XMM5 }
    /* +0xd19117 */ __asm { CMP R12,RAX }
    /* +0xd1911a */ __asm { JNC 0x7fffa548c9e8 }
    /* +0xd19120 */ __asm { CMP R12,0x7 }
    /* +0xd19124 */ __asm { JBE 0x7fffa54891f1 }
    /* +0xd1912a */ __asm { MOV R9W,0x815c }
    /* +0xd1912f */ __asm { LEA RDX,[0x7fffa526b23f] }
    /* +0xd19136 */ __asm { MOV RCX,R12 }
    /* +0xd19139 */ __asm { OR RCX,0x7 }
    /* +0xd1913d */ __asm { CMP RCX,0xb }
    /* +0xd19141 */ __asm { MOV R15D,0xa }
    /* +0xd19147 */ __asm { CMOVNC R15,RCX }
    /* +0xd1914b */ __asm { MOV RAX,0x7ffffffffffffffe }
    /* +0xd19155 */ __asm { CMP R15,RAX }
    /* +0xd19158 */ __asm { CMOVNC R15,RAX }
    /* +0xd1915c */ __asm { ADD R9D,0x6294 }
    /* +0xd19163 */ __asm { MOV ECX,ESI }
    /* +0xd19165 */ __asm { ROL R9W,CL }
    /* +0xd19169 */ __asm { MOV R13D,EBX }
    /* +0xd1916c */ __asm { LEA RBX,[R12 + R12*0x1] }
    /* +0xd19170 */ __asm { LEA RAX,[0x2 + R15*0x2] }
    /* +0xd19178 */ __asm { MOV R8,RAX }
    /* +0xd1917b */ __asm { SHL R8,0x3c }
    /* +0xd1917f */ __asm { XOR R8,RAX }
    /* +0xd19182 */ __asm { SHL RAX,0xe }
    /* +0xd19186 */ __asm { MOV R10,0x1865d799980f }
    /* +0xd19190 */ __asm { ADD R10,RAX }
    /* +0xd19193 */ __asm { ADD R10,R8 }
    /* +0xd19196 */ __asm { MOV ECX,0xa32d6674 }
    /* +0xd1919b */ __asm { XOR ECX,0x655be97a }
    /* +0xd191a1 */ __asm { MOVSXD RAX,ECX }
    /* +0xd191a4 */ __asm { MOVSX R8,R9W }
    /* +0xd191a8 */ __asm { ADD R8,RDX }
    /* +0xd191ab */ __asm { MOV RSI,R11 }
    /* +0xd191ae */ __asm { CALL R8 }
    /* +0xd191b1 */ __asm { MOV RDI,R12 }
    /* +0xd191b4 */ __asm { MOV R12,RCX }
    /* +0xd191b7 */ __asm { ROL R12,0x2c }
    /* +0xd191bb */ __asm { MOV RAX,R12 }
    /* +0xd191be */ __asm { SHL RAX,0x36 }
    /* +0xd191c2 */ __asm { SUB R12,RAX }
    /* +0xd191c5 */ __asm { MOV R8,RBX }
    /* +0xd191c8 */ __asm { MOV EBX,R13D }
    /* +0xd191cb */ __asm { MOV RCX,R12 }
    /* +0xd191ce */ __asm { MOV RDX,RSI }
    /* +0xd191d1 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd191d6 */ __asm { MOV word ptr [R12 + RDI*0x2],0x0 }
    /* +0xd191dd */ __asm { MOV qword ptr [RBP + -0x10],R12 }
    /* +0xd191e1 */ __asm { MOV R12,RDI }
    /* +0xd191e4 */ __asm { MOV qword ptr [RBP],RDI }
    /* +0xd191e8 */ __asm { MOV qword ptr [RBP + 0x8],R15 }
    /* +0xd191ec */ __asm { MOV RSI,RDI }
    /* +0xd191ef */ __asm { JMP 0x7fffa548921d }
    /* +0xd191f1 */ __asm { MOV qword ptr [RBP + 0x8],0x7 }
    /* +0xd191f9 */ __asm { MOV qword ptr [RBP],R12 }
    /* +0xd191fd */ __asm { LEA R8,[R12 + R12*0x1] }
    /* +0xd19201 */ __asm { LEA RCX,[RBP + -0x10] }
    /* +0xd19205 */ __asm { MOV RDX,R11 }
    /* +0xd19208 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd1920d */ __asm { MOV word ptr [RBP + R12*0x2 + -0x10],0x0 }
    /* +0xd19215 */ __asm { MOV RSI,qword ptr [RBP] }
    /* +0xd19219 */ __asm { MOV R15,qword ptr [RBP + 0x8] }
    /* +0xd1921d */ __asm { MOV ECX,0xbe0c7815 }
    /* +0xd19222 */ __asm { MOVD XMM2,ECX }
    /* +0xd19226 */ __asm { MOV RCX,qword ptr [RBP + 0x180] }
    /* +0xd1922d */ __asm { MOVD XMM5,ECX }
    /* +0xd19231 */ __asm { MOV R9D,0xea652332 }
    /* +0xd19237 */ __asm { XOR R9D,0x2facc227 }
    /* +0xd1923e */ __asm { ADD R9D,ECX }
    /* +0xd19241 */ __asm { XOR R9D,0xec47265e }
    /* +0xd19248 */ __asm { POR XMM5,xmmword ptr [0x7fffa56b2660] }
    /* +0xd19250 */ __asm { PMULUDQ XMM2,XMM5 }
    /* +0xd19254 */ __asm { MOVD R11D,XMM2 }
    /* +0xd19259 */ __asm { XOR R11D,0x8a484ca7 }
    /* +0xd19260 */ __asm { CMP R11,R9 }
    /* +0xd19263 */ __asm { MOV qword ptr [RBP + 0x90],R12 }
    /* +0xd1926a */ __asm { JG 0x7fffa54892a7 }
    /* +0xd1926c */ __asm { MOV EDX,0x2a7684c9 }
    /* +0xd19271 */ __asm { MOV R9,-0x7c9a946e51875990 }
    /* +0xd1927b */ __asm { MOV R10,0x1f36b4bc0d13e4e3 }
    /* +0xd19285 */ __asm { ADD EDX,0x5e2d82d9 }
    /* +0xd1928b */ __asm { ROR EDX,CL }
    /* +0xd1928d */ __asm { MOV RAX,0x1f6ab4830d2ce4bf }
    /* +0xd19297 */ __asm { MOV qword ptr [RBP + 0xb0],RAX }
    /* +0xd1929e */ __asm { MOV qword ptr [RBP + 0xb8],R9 }
    /* +0xd192a5 */ __asm { JMP 0x7fffa54892e3 }
    /* +0xd192a7 */ __asm { MOV EDX,0x209bdec }
    /* +0xd192ac */ __asm { MOV R9,-0x7c9a946e51875990 }
    /* +0xd192b6 */ __asm { MOV R10,0x1f6ab4830d2ce4bf }
    /* +0xd192c0 */ __asm { MOV qword ptr [RBP + 0xb0],R10 }
    /* +0xd192c7 */ __asm { MOV qword ptr [RBP + 0xb8],R9 }
    /* +0xd192ce */ __asm { ADD EDX,ECX }
    /* +0xd192d0 */ __asm { ROL EDX,0xb }
    /* +0xd192d3 */ __asm { ADD EDX,0x6a9f5c56 }
    /* +0xd192d9 */ __asm { MOV R10,0x1f36b4bc0d13e4e3 }
    /* +0xd192e3 */ __asm { MOVD dword ptr [RBP + -0x14],XMM5 }
    /* +0xd192e8 */ __asm { MOV qword ptr [RBP + 0x60],R10 }
    /* +0xd192ec */ __asm { MOV R12,R15 }
    /* +0xd192ef */ __asm { SUB R12,RSI }
    /* +0xd192f2 */ __asm { MOVDQA XMM5,xmmword ptr [RBP + 0xb0] }
    /* +0xd192fa */ __asm { LEA R10,[RBP + 0x60] }
    /* +0xd192fe */ __asm { LEA RAX,[0x7fffa5179659] }
    /* +0xd19305 */ __asm { MOV R11W,0x2040 }
    /* +0xd1930a */ __asm { MOV qword ptr [RBP + 0xf0],RDX }
    /* +0xd19311 */ __asm { XOR R11D,EDX }
    /* +0xd19314 */ __asm { ROL R11W,0x1 }
    /* +0xd19318 */ __asm { SUB R11D,ECX }
    /* +0xd1931b */ __asm { MOVSX RDX,R11W }
    /* +0xd1931f */ __asm { ADD RDX,RAX }
    /* +0xd19322 */ __asm { MOV qword ptr [RBP + 0x68],R9 }
    /* +0xd19326 */ __asm { PXOR XMM5,xmmword ptr [R10] }
    /* +0xd1932b */ __asm { MOVDQA xmmword ptr [RBP + 0xb0],XMM5 }
    /* +0xd19333 */ __asm { LEA R13,[RBP + 0xb0] }
    /* +0xd1933a */ __asm { MOV RCX,R13 }
    /* +0xd1933d */ __asm { CALL RDX }
    /* +0xd1933f */ __asm { MOV RDI,RAX }
    /* +0xd19342 */ __asm { CMP RAX,R12 }
    /* +0xd19345 */ __asm { MOV dword ptr [RBP + 0x5c],EBX }
    /* +0xd19348 */ __asm { JA 0x7fffa548935d }
    /* +0xd1934a */ __asm { CMP R15,0x8 }
    /* +0xd1934e */ __asm { JC 0x7fffa5489479 }
    /* +0xd19354 */ __asm { MOV RBX,qword ptr [RBP + -0x10] }
    /* +0xd19358 */ __asm { JMP 0x7fffa548947d }
    /* +0xd1935d */ __asm { MOV R13,0x7ffffffffffffffe }
    /* +0xd19367 */ __asm { MOV RAX,R13 }
    /* +0xd1936a */ __asm { SUB RAX,RSI }
    /* +0xd1936d */ __asm { CMP RAX,RDI }
    /* +0xd19370 */ __asm { JC 0x7fffa548c9b5 }
    /* +0xd19376 */ __asm { MOV qword ptr [RBP + 0xa8],R14 }
    /* +0xd1937d */ __asm { LEA R12,[RDI + RSI*0x1] }
    /* +0xd19381 */ __asm { MOV RAX,R12 }
    /* +0xd19384 */ __asm { OR RAX,0x7 }
    /* +0xd19388 */ __asm { CMP RAX,R13 }
    /* +0xd1938b */ __asm { JA 0x7fffa54893ab }
    /* +0xd1938d */ __asm { MOV RDX,R15 }
    /* +0xd19390 */ __asm { SHR RDX,0x1 }
    /* +0xd19393 */ __asm { MOV R8,R13 }
    /* +0xd19396 */ __asm { SUB R8,RDX }
    /* +0xd19399 */ __asm { CMP R15,R8 }
    /* +0xd1939c */ __asm { JA 0x7fffa54893ab }
    /* +0xd1939e */ __asm { ADD RDX,R15 }
    /* +0xd193a1 */ __asm { CMP RAX,RDX }
    /* +0xd193a4 */ __asm { CMOVA RDX,RAX }
    /* +0xd193a8 */ __asm { MOV R13,RDX }
    /* +0xd193ab */ __asm { LEA RDX,[0x7fffa526bb1d] }
    /* +0xd193b2 */ __asm { MOV R9W,0x9169 }
    /* +0xd193b7 */ __asm { XOR R9D,0x121e }
    /* +0xd193be */ __asm { SUB R9D,dword ptr [RBP + 0xf0] }
    /* +0xd193c5 */ __asm { MOV R14,qword ptr [RBP + 0x180] }
    /* +0xd193cc */ __asm { XOR R9D,R14D }
    /* +0xd193cf */ __asm { ADD R9D,0x2024 }
    /* +0xd193d6 */ __asm { LEA RAX,[0x2 + R13*0x2] }
    /* +0xd193de */ __asm { MOVQ XMM5,RAX }
    /* +0xd193e3 */ __asm { MOV ECX,0x51e11e8c }
    /* +0xd193e8 */ __asm { XOR ECX,R14D }
    /* +0xd193eb */ __asm { MOV EAX,0xee9f7999 }
    /* +0xd193f0 */ __asm { SUB EAX,ECX }
    /* +0xd193f2 */ __asm { CDQE }
    /* +0xd193f4 */ __asm { MOVSX R8,R9W }
    /* +0xd193f8 */ __asm { ADD R8,RDX }
    /* +0xd193fb */ __asm { MOVDQA XMM2,XMM5 }
    /* +0xd193ff */ __asm { PSLLQ XMM2,0x3c }
    /* +0xd19404 */ __asm { PXOR XMM2,XMM5 }
    /* +0xd19408 */ __asm { PSLLQ XMM5,0xe }
    /* +0xd1940d */ __asm { PADDQ XMM5,XMM2 }
    /* +0xd19411 */ __asm { MOVQ RDX,XMM5 }
    /* +0xd19416 */ __asm { MOV R10,0x1865d799980f }
    /* +0xd19420 */ __asm { ADD R10,RDX }
    /* +0xd19423 */ __asm { CALL R8 }
    /* +0xd19426 */ __asm { MOV RBX,RCX }
    /* +0xd19429 */ __asm { ROL RBX,0x2c }
    /* +0xd1942d */ __asm { MOV RAX,RBX }
    /* +0xd19430 */ __asm { SHL RAX,0x36 }
    /* +0xd19434 */ __asm { SUB RBX,RAX }
    /* +0xd19437 */ __asm { MOV qword ptr [RBP],R12 }
    /* +0xd1943b */ __asm { MOV qword ptr [RBP + 0x8],R13 }
    /* +0xd1943f */ __asm { LEA R13,[0x2 + RSI*0x2] }
    /* +0xd19447 */ __asm { CMP R15,0x8 }
    /* +0xd1944b */ __asm { JNC 0x7fffa5489528 }
    /* +0xd19451 */ __asm { LEA R8,[RDI + RDI*0x1] }
    /* +0xd19455 */ __asm { LEA RDX,[RBP + 0xb0] }
    /* +0xd1945c */ __asm { MOV RCX,RBX }
    /* +0xd1945f */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd19464 */ __asm { LEA RCX,[RBX + RDI*0x2] }
    /* +0xd19468 */ __asm { LEA RDX,[RBP + -0x10] }
    /* +0xd1946c */ __asm { MOV R8,R13 }
    /* +0xd1946f */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd19474 */ __asm { JMP 0x7fffa54895ad }
    /* +0xd19479 */ __asm { LEA RBX,[RBP + -0x10] }
    /* +0xd1947d */ __asm { LEA RDX,[RDI + RSI*0x1] }
    /* +0xd19481 */ __asm { LEA RAX,[0xb0 + RDI*0x2] }
    /* +0xd19489 */ __asm { ADD RAX,RBP }
    /* +0xd1948c */ __asm { MOV qword ptr [RBP],RDX }
    /* +0xd19490 */ __asm { LEA RDX,[RBX + RSI*0x2] }
    /* +0xd19494 */ __asm { CMP R13,RDX }
    /* +0xd19497 */ __asm { SETA R9B }
    /* +0xd1949b */ __asm { CMP RAX,RBX }
    /* +0xd1949e */ __asm { SETBE R8B }
    /* +0xd194a2 */ __asm { OR R8B,R9B }
    /* +0xd194a5 */ __asm { MOV R11,RDI }
    /* +0xd194a8 */ __asm { JNZ 0x7fffa54898b5 }
    /* +0xd194ae */ __asm { MOV R11D,0x47666eb0 }
    /* +0xd194b4 */ __asm { XOR R9D,R9D }
    /* +0xd194b7 */ __asm { XOR ECX,ECX }
    /* +0xd194b9 */ __asm { CMP RBX,R13 }
    /* +0xd194bc */ __asm { SETG R9B }
    /* +0xd194c0 */ __asm { SETA CL }
    /* +0xd194c3 */ __asm { MOV R8D,0x15a62b7b }
    /* +0xd194c9 */ __asm { XOR R11D,0x405d5665 }
    /* +0xd194d0 */ __asm { MOV RDX,qword ptr [RBP + 0xf0] }
    /* +0xd194d7 */ __asm { MOV R10D,EDX }
    /* +0xd194da */ __asm { OR R10D,0x1 }
    /* +0xd194de */ __asm { IMUL R8D,R10D }
    /* +0xd194e2 */ __asm { NOT R8D }
    /* +0xd194e5 */ __asm { IMUL R8D,R8D,-0x462a221d }
    /* +0xd194ec */ __asm { MOVSXD RDX,R8D }
    /* +0xd194ef */ __asm { MOV R8,qword ptr [RBP + 0x180] }
    /* +0xd194f6 */ __asm { ADD R11D,R8D }
    /* +0xd194f9 */ __asm { IMUL R11D,R10D }
    /* +0xd194fd */ __asm { CMP R11,RDX }
    /* +0xd19500 */ __asm { CMOVA ECX,R9D }
    /* +0xd19504 */ __asm { CMP CL,0x1 }
    /* +0xd19507 */ __asm { JNZ 0x7fffa54898b2 }
    /* +0xd1950d */ __asm { MOVQ XMM5,RBX }
    /* +0xd19512 */ __asm { MOVQ XMM2,R13 }
    /* +0xd19517 */ __asm { PSUBQ XMM5,XMM2 }
    /* +0xd1951b */ __asm { MOVQ R11,XMM5 }
    /* +0xd19520 */ __asm { SAR R11,0x1 }
    /* +0xd19523 */ __asm { JMP 0x7fffa54898b5 }
    /* +0xd19528 */ __asm { MOV R12W,0x7ae4 }
    /* +0xd1952d */ __asm { LEA R8,[RDI + RDI*0x1] }
    /* +0xd19531 */ __asm { LEA RDX,[RBP + 0xb0] }
    /* +0xd19538 */ __asm { MOV RCX,RBX }
    /* +0xd1953b */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd19540 */ __asm { MOV RDX,qword ptr [RBP + -0x10] }
    /* +0xd19544 */ __asm { LEA R9D,[R12*0x8] }
    /* +0xd1954c */ __asm { SUB R9D,R12D }
    /* +0xd1954f */ __asm { MOV ECX,R14D }
    /* +0xd19552 */ __asm { ROL R9W,CL }
    /* +0xd19556 */ __asm { MOV RAX,RDX }
    /* +0xd19559 */ __asm { MOV R15,RAX }
    /* +0xd1955c */ __asm { SHR R15,0x3d }
    /* +0xd19560 */ __asm { MOV R12,qword ptr [RBP + 0xf0] }
    /* +0xd19567 */ __asm { MOV R11D,R12D }
    /* +0xd1956a */ __asm { OR R11D,0x1 }
    /* +0xd1956e */ __asm { MOV R8D,0x92aec57d }
    /* +0xd19574 */ __asm { LEA RCX,[RBX + RDI*0x2] }
    /* +0xd19578 */ __asm { MOV R10D,R14D }
    /* +0xd1957b */ __asm { SUB R10D,R12D }
    /* +0xd1957e */ __asm { XOR R15,RAX }
    /* +0xd19581 */ __asm { IMUL EDI,R8D,0x28c4d2b1 }
    /* +0xd19588 */ __asm { ADD EDI,R10D }
    /* +0xd1958b */ __asm { IMUL R11D,R9D }
    /* +0xd1958f */ __asm { MOVSX R12,R11W }
    /* +0xd19593 */ __asm { MOV R8,R13 }
    /* +0xd19596 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd1959b */ __asm { LEA RAX,[0x7fffa568c77e] }
    /* +0xd195a2 */ __asm { ADD RAX,R12 }
    /* +0xd195a5 */ __asm { MOV R11,RDI }
    /* +0xd195a8 */ __asm { MOV R8,R15 }
    /* +0xd195ab */ __asm { CALL RAX }
    /* +0xd195ad */ __asm { MOV RSI,R14 }
    /* +0xd195b0 */ __asm { MOV R15D,dword ptr [RBP + 0x9c] }
    /* +0xd195b7 */ __asm { MOV qword ptr [RBP + -0x10],RBX }
    /* +0xd195bb */ __asm { MOV R14,qword ptr [RBP + 0xa8] }
    /* +0xd195c2 */ __asm { JMP 0x7fffa548991d }
    /* +0xd195c7 */ __asm { CMP word ptr [R11 + 0x2],0x5c }
    /* +0xd195cd */ __asm { JNZ 0x7fffa548af9f }
    /* +0xd195d3 */ __asm { LEA RDX,[R11 + 0x4] }
    /* +0xd195d7 */ __asm { CMP R12,0x2 }
    /* +0xd195db */ __asm { MOV dword ptr [RBP + 0x5c],EBX }
    /* +0xd195de */ __asm { MOV qword ptr [RBP + 0x90],R12 }
    /* +0xd195e5 */ __asm { JA 0x7fffa548b16d }
    /* +0xd195eb */ __asm { LEA RBX,[R12 + -0x2] }
    /* +0xd195f0 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM5 }
    /* +0xd195f5 */ __asm { MOVDQA xmmword ptr [RBP + 0x60],XMM5 }
    /* +0xd195fa */ __asm { LEA R8,[RBX + RBX*0x1] }
    /* +0xd195fe */ __asm { MOV qword ptr [RBP + 0x70],RBX }
    /* +0xd19602 */ __asm { MOV qword ptr [RBP + 0x78],0x7 }
    /* +0xd1960a */ __asm { LEA RCX,[RBP + 0x60] }
    /* +0xd1960e */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xd19613 */ __asm { MOV word ptr [RBP + RBX*0x2 + 0x60],0x0 }
    /* +0xd1961a */ __asm { MOV R12,qword ptr [RBP + 0x70] }
    /* +0xd1961e */ __asm { MOV R15,qword ptr [RBP + 0x78] }
    /* +0xd19622 */ __asm { MOV RBX,R15 }
    /* +0xd19625 */ __asm { SUB RBX,R12 }
    /* +0xd19628 */ __asm { MOV RCX,-0x7cc6942d51c959db }
    /* +0xd19632 */ __asm { LEA R9,[RBP + -0x10] }
    /* +0xd19636 */ __asm { MOV EAX,0x95163be4 }
    /* +0xd1963b */ __asm { ADD EAX,0x60e9c29d }
    /* +0xd19640 */ __asm { LEA RDX,[0x7fffa51831f6] }
    /* +0xd19647 */ __asm { MOV R11,0x1f6ab4830d2ce4bf }
    /* +0xd19651 */ __asm { MOV R10,0x4fab0fda8f9c728d }
    /* +0xd1965b */ __asm { MOV R8,0x1f36b4bc0d13e4e3 }
    /* +0xd19665 */ __asm { MOV R13,-0x7e6df35855008406 }
    /* +0xd1966f */ __asm { MOV RSI,-0x7c9a946e51875990 }
    /* +0xd19679 */ __asm { MOV qword ptr [RBP + 0xc8],R13 }
    /* +0xd19680 */ __asm { MOV qword ptr [RBP + 0xc0],R10 }
    /* +0xd19687 */ __asm { MOV qword ptr [RBP + 0xb0],R11 }
    /* +0xd1968e */ __asm { MOV qword ptr [RBP + 0xb8],RCX }
    /* +0xd19695 */ __asm { MOV qword ptr [RBP + -0x10],R8 }
    /* +0xd19699 */ __asm { MOV qword ptr [RBP + -0x8],RSI }
    /* +0xd1969d */ __asm { MOV RCX,qword ptr [RBP + 0x180] }
    /* +0xd196a4 */ __asm { ROL EAX,CL }
    /* +0xd196a6 */ __asm { MOV qword ptr [RBP + 0x8],R13 }
    /* +0xd196aa */ __asm { CDQE }
    /* +0xd196ac */ __asm { ADD RAX,RDX }
    /* +0xd196af */ __asm { MOV qword ptr [RBP],R10 }
    /* +0xd196b3 */ __asm { MOVDQA XMM5,xmmword ptr [R9] }
    /* +0xd196b8 */ __asm { MOVDQA XMM2,xmmword ptr [R9 + 0x10] }
    /* +0xd196be */ __asm { PXOR XMM2,xmmword ptr [RBP + 0xc0] }
    /* +0xd196c6 */ __asm { MOVDQA xmmword ptr [RBP + 0xc0],XMM2 }
    /* +0xd196ce */ __asm { PXOR XMM5,xmmword ptr [RBP + 0xb0] }
    /* +0xd196d6 */ __asm { MOVDQA xmmword ptr [RBP + 0xb0],XMM5 }
    /* +0xd196de */ __asm { LEA R13,[RBP + 0xb0] }
    /* +0xd196e5 */ __asm { MOV RCX,R13 }
    /* +0xd196e8 */ __asm { CALL RAX }
    /* +0xd196ea */ __asm { MOV RDI,RAX }
    /* +0xd196ed */ __asm { CMP RAX,RBX }
    /* +0xd196f0 */ __asm { JBE 0x7fffa548b293 }
    /* +0xd196f6 */ __asm { MOV R8,R15 }
    /* +0xd196f9 */ __asm { MOV R15,0x7ffffffffffffffe }
    /* +0xd19703 */ __asm { MOV RAX,R15 }
    /* +0xd19706 */ __asm { SUB RAX,R12 }
    /* +0xd19709 */ __asm { CMP RAX,RDI }
    /* +0xd1970c */ __asm { JC 0x7fffa548ca62 }
    /* +0xd19712 */ __asm { MOV qword ptr [RBP + 0xa8],R14 }
    /* +0xd19719 */ __asm { MOV qword ptr [RBP + 0xf0],R12 }
    /* +0xd19720 */ __asm { LEA RSI,[RDI + R12*0x1] }
    /* +0xd19724 */ __asm { MOV RAX,RSI }
    /* +0xd19727 */ __asm { OR RAX,0x7 }
    /* +0xd1972b */ __asm { MOV RDX,-0x379c9f408 }
    /* +0xd19735 */ __asm { XOR RDX,qword ptr [RBP + 0x180] }
    /* +0xd1973c */ __asm { ROL RDX,0x1f }
    /* +0xd19740 */ __asm { CMP RAX,RDX }
    /* +0xd19743 */ __asm { MOV R12,R8 }
    /* +0xd19746 */ __asm { JA 0x7fffa5489766 }
    /* +0xd19748 */ __asm { MOV RDX,R12 }
    /* +0xd1974b */ __asm { SHR RDX,0x1 }
    /* +0xd1974e */ __asm { MOV R8,R15 }
    /* +0xd19751 */ __asm { SUB R8,RDX }
    /* +0xd19754 */ __asm { CMP R12,R8 }
    /* +0xd19757 */ __asm { JA 0x7fffa5489766 }
    /* +0xd19759 */ __asm { ADD RDX,R12 }
    /* +0xd1975c */ __asm { CMP RAX,RDX }
    /* +0xd1975f */ __asm { CMOVA RDX,RAX }
    /* +0xd19763 */ __asm { MOV R15,RDX }
    /* +0xd19766 */ __asm { LEA RAX,[0x2 + R15*0x2] }
    /* +0xd1976e */ __asm { MOVQ XMM5,RAX }
    /* +0xd19773 */ __asm { MOV ECX,0xaa363f7d }
    /* +0xd19778 */ __asm { MOV R14,qword ptr [RBP + 0x180] }
    /* +0xd1977f */ __asm { LEA ECX,[R14 + RCX*0x1 + -0x5d89a476] }
    /* +0xd19787 */ __asm { MOVSXD RAX,ECX }
    /* +0xd1978a */ __asm { LEA RDX,[0x7fffa526eee1] }
    /* +0xd19791 */ __asm { MOV ECX,R14D }
    /* +0xd19794 */ __asm { OR ECX,0x1 }
    /* +0xd19797 */ __asm { MOV R11W,0xc6f1 }
    /* +0xd1979c */ __asm { MOV R9D,0xb11d2e7c }
    /* +0xd197a2 */ __asm { MOV R8D,0xa60d9803 }
    /* +0xd197a8 */ __asm { XOR R9D,0xfae15560 }
    /* +0xd197af */ __asm { ADD R9D,R14D }
    /* +0xd197b2 */ __asm { IMUL R8D,R8D,0x45973429 }
    /* +0xd197b9 */ __asm { IMUL R11D,ECX }
}


// ============================================================================
// Function : Unwind@7fffa548d060  |  RVA: 0xd1d060  |  Size: 160 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa548d060(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x88)) {
    uVar1 = *(uint64_t *)(param_2 + 0x70);
    FUN_7fffa5687c30(0xae1e6aaa,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint64_t *)(param_2 + 0x88) = 7;
  *(uint16_t *)(param_2 + 0x70) = 0;
  *(uint64_t *)(param_2 + 0x80) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa548d100  |  RVA: 0xd1d100  |  Size: 154 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa548d100(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0xf8)) {
    FUN_7fffa5687c30(*(uint64_t *)(param_2 + 0x200),FUN_7fffa5687c30,
                     *(uint64_t *)(param_2 + 0xe0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xe0));
  }
  *(uint64_t *)(param_2 + 0xf0) = 0;
  *(uint16_t *)(param_2 + 0xe0) = 0;
  *(uint64_t *)(param_2 + 0xf8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa548d1a0  |  RVA: 0xd1d1a0  |  Size: 219 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa548d1a0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint16_t uVar3;
  
  uVar3 = ((short)*(uint64_t *)(param_2 + 0x200) + -0x7db8) * 0x220d;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x170) & 0xf;
  if ((uint64_t)(uint16_t)(uVar3 >> bVar1 | uVar3 << 0x10 - bVar1) < *(uint64_t *)(param_2 + 0x88))
  {
    uVar3 = (uint16_t)(((int)*(uint64_t *)(param_2 + 0x200) + 0xa96b) *
                    ((uint32_t)*(uint64_t *)(param_2 + 0x170) | 1));
    pcVar2 = (code *)((int64_t)(short)(uVar3 << 4 | uVar3 >> 0xc) + 0x7fffa568e14c);
    (*pcVar2)(0xc44b84e4,pcVar2,
              *(uint64_t *)(param_2 + 0x70) >> 0x3d ^ *(uint64_t *)(param_2 + 0x70));
  }
  *(uint16_t *)(param_2 + 0x70) = 0;
  *(uint64_t *)(param_2 + 0x88) = 7;
  *(uint64_t *)(param_2 + 0x80) = 0;
  return;
}

