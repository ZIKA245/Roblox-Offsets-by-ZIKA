// Subsystem: Internal Routines Cluster 15 (0xda3b30 .. 0xe65760)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa5513b30  |  RVA: 0xda3b30  |  Size: 95 bytes
// Callers  : FUN_7fffa56a085c@0xf3085c
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa5513b30(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4
                     )

{
  int iVar1;
  int *piVar2;
  
  FUN_7fffa5476b88(*param_2);
  piVar2 = *(int **)(*(int64_t *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)0x7fffa4780250)) {
      FUN_7fffa52d8dd0();
    }
  }
  FUN_7fffa4f54478(*param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa5513b90  |  RVA: 0xda3b90  |  Size: 186 bytes
// Callers  : none
// Callees  : FUN_7fffa569fb70@0xf2fb70, FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint32_t FUN_7fffa5513b90(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  *(uint64_t *)(param_2 + 0x48) = param_1;
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x70) = *(uint64_t *)(param_2 + 0x80);
  lVar2 = *(int64_t *)(param_2 + 0x98);
  uVar1 = *(uint64_t *)(lVar2 + 8);
  lVar3 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(uint64_t *)(**(int64_t **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar3 + 0x68) = uVar1;
  lVar3 = FUN_7fffa54539d0();
  *(uint32_t *)(lVar3 + 0x78) = *(uint32_t *)(param_2 + 0xb8);
  FUN_7fffa569fb70(**(uint64_t **)(param_2 + 0x48),*(uint64_t *)(param_2 + 0x88),
                   *(uint64_t *)(param_2 + 0x90),lVar2,*(uint64_t *)(param_2 + 0xa0),0,0,1);
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x70) = 0;
  *(uint32_t *)(param_2 + 0x40) = 1;
  *(uint32_t *)(param_2 + 0x44) = 1;
  return *(uint32_t *)(param_2 + 0x44);
}


// ============================================================================
// Function : FUN_7fffa5513c50  |  RVA: 0xda3c50  |  Size: 11201 bytes
// Callers  : none
// Callees  : FUN_7fffa565caf0@0xeecaf0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5513c50(void) {
    /* +0xda3c50 */ __asm { PUSH RBP }
    /* +0xda3c51 */ __asm { PUSH RSI }
    /* +0xda3c52 */ __asm { PUSH RBX }
    /* +0xda3c53 */ __asm { PUSH R15 }
    /* +0xda3c55 */ __asm { PUSH RDI }
    /* +0xda3c56 */ __asm { PUSH R12 }
    /* +0xda3c58 */ __asm { PUSH R14 }
    /* +0xda3c5a */ __asm { PUSH R13 }
    /* +0xda3c5c */ __asm { MOV EAX,0x15d8 }
    /* +0xda3c61 */ __asm { CALL 0x7fffa565caf0 }
    /* +0xda3c66 */ __asm { SUB RSP,RAX }
    /* +0xda3c69 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xda3c71 */ __asm { MOVDQA xmmword ptr [RBP + 0x1540],XMM11 }
    /* +0xda3c7a */ __asm { MOVDQA xmmword ptr [RBP + 0x1530],XMM15 }
    /* +0xda3c83 */ __asm { MOVDQA xmmword ptr [RBP + 0x1520],XMM6 }
    /* +0xda3c8b */ __asm { MOVDQA xmmword ptr [RBP + 0x1510],XMM9 }
    /* +0xda3c94 */ __asm { MOVDQA xmmword ptr [RBP + 0x1500],XMM14 }
    /* +0xda3c9d */ __asm { MOVDQA xmmword ptr [RBP + 0x14f0],XMM8 }
    /* +0xda3ca6 */ __asm { MOVDQA xmmword ptr [RBP + 0x14e0],XMM7 }
    /* +0xda3cae */ __asm { MOVDQA xmmword ptr [RBP + 0x14d0],XMM10 }
    /* +0xda3cb7 */ __asm { MOVDQA xmmword ptr [RBP + 0x14c0],XMM12 }
    /* +0xda3cc0 */ __asm { MOVDQA xmmword ptr [RBP + 0x14b0],XMM13 }
    /* +0xda3cc9 */ __asm { MOV qword ptr [RBP + 0x14a8],-0x2 }
    /* +0xda3cd4 */ __asm { MOV RDI,RCX }
    /* +0xda3cd7 */ __asm { MOV dword ptr [RBP + 0x840],0xdb683a33 }
    /* +0xda3ce1 */ __asm { MOV EDX,dword ptr [RBP + 0x840] }
    /* +0xda3ce7 */ __asm { TEST DL,0x1 }
    /* +0xda3cea */ __asm { JNZ 0x7fffa5513cf8 }
    /* +0xda3cec */ __asm { CDQ }
    /* +0xda3ced */ __asm { SUB R13D,R13D }
    /* +0xda3cf0 */ __asm { POP RBX }
    /* +0xda3cf1 */ __asm { JG 0x7fffa5513c9f }
    /* +0xda3cf3 */ __asm { PUSH RDI }
    /* +0xda3cf4 */ __asm { AND DL,BH }
    /* +0xda3cf6 */ __asm { JRCXZ 0x7fffa5513d71 }
    /* +0xda3cf8 */ __asm { MOV EDX,0x679c4636 }
    /* +0xda3cfd */ __asm { LEA R10,[0x7fffa479383c] }
    /* +0xda3d04 */ __asm { MOVSXD R9,EDX }
    /* +0xda3d07 */ __asm { XOR R9,-0x679c9166 }
    /* +0xda3d0e */ __asm { MOV EDX,0x1 }
    /* +0xda3d13 */ __asm { XOR EAX,EAX }
    /* +0xda3d15 */ __asm { CMPXCHG.LOCK dword ptr [R10 + R9*0x1],EDX }
    /* +0xda3d1b */ __asm { JNZ 0x7fffa557a8e6 }
    /* +0xda3d21 */ __asm { MOV dword ptr [RBP + 0x840],0x668ddac0 }
    /* +0xda3d2b */ __asm { MOV EDX,dword ptr [RBP + 0x840] }
    /* +0xda3d31 */ __asm { TEST EDX,EDX }
    /* +0xda3d33 */ __asm { JS 0x7fffa5515170 }
    /* +0xda3d39 */ __asm { MOV R11D,0xd6dedb39 }
    /* +0xda3d3f */ __asm { PUSHFQ }
    /* +0xda3d40 */ __asm { POP RAX }
    /* +0xda3d41 */ __asm { SUB R11D,EDI }
    /* +0xda3d44 */ __asm { MOV qword ptr [RBP + 0x7b8],R11 }
    /* +0xda3d4b */ __asm { IMUL R11D,R11D,-0x553e970b }
    /* +0xda3d52 */ __asm { AND EAX,0x100 }
    /* +0xda3d57 */ __asm { MOV qword ptr [RBP + 0x4e8],RAX }
    /* +0xda3d5e */ __asm { MOV qword ptr [RBP + 0x828],R11 }
    /* +0xda3d65 */ __asm { CMP RAX,R11 }
    /* +0xda3d68 */ __asm { NOP }
    /* +0xda3d69 */ __asm { NOP }
    /* +0xda3d6a */ __asm { NOP }
    /* +0xda3d6b */ __asm { NOP }
    /* +0xda3d6c */ __asm { NOP }
    /* +0xda3d6d */ __asm { NOP }
    /* +0xda3d6e */ __asm { NOP }
    /* +0xda3d6f */ __asm { NOP }
    /* +0xda3d70 */ __asm { NOP }
    /* +0xda3d71 */ __asm { NOP }
    /* +0xda3d72 */ __asm { NOP }
    /* +0xda3d73 */ __asm { MOV EAX,0x3bd91850 }
    /* +0xda3d78 */ __asm { ADD EAX,0x8001fff8 }
    /* +0xda3d7d */ __asm { MOV EBX,EDI }
    /* +0xda3d7f */ __asm { OR EBX,0x1 }
    /* +0xda3d82 */ __asm { IMUL EAX,EBX }
    /* +0xda3d85 */ __asm { MOV RDX,qword ptr [RAX] }
    /* +0xda3d88 */ __asm { MOVD XMM13,EDI }
    /* +0xda3d8d */ __asm { MOV EAX,0xb621273e }
    /* +0xda3d92 */ __asm { MOVD XMM2,EAX }
    /* +0xda3d96 */ __asm { PXOR XMM2,XMM13 }
    /* +0xda3d9b */ __asm { MOVD EAX,XMM2 }
    /* +0xda3d9f */ __asm { ROL EAX,0x7 }
    /* +0xda3da2 */ __asm { MOV R10,qword ptr [RAX] }
    /* +0xda3da5 */ __asm { LEA R11,[0x7fffa47948ab] }
    /* +0xda3dac */ __asm { MOV EAX,0xe80f84cb }
    /* +0xda3db1 */ __asm { IMUL EAX,EAX,-0x4480cfe9 }
    /* +0xda3db7 */ __asm { MOV ECX,EDI }
    /* +0xda3db9 */ __asm { ROR EAX,CL }
    /* +0xda3dbb */ __asm { CDQE }
    /* +0xda3dbd */ __asm { MOV R11,qword ptr [R11 + RAX*0x1] }
    /* +0xda3dc1 */ __asm { TEST R11,R11 }
    /* +0xda3dc4 */ __asm { JZ 0x7fffa5513dcb }
    /* +0xda3dc6 */ __asm { MOV RAX,qword ptr [R11] }
    /* +0xda3dc9 */ __asm { JMP 0x7fffa5513dcd }
    /* +0xda3dcb */ __asm { XOR EAX,EAX }
    /* +0xda3dcd */ __asm { LEA R9,[0x7fffa47c396c] }
    /* +0xda3dd4 */ __asm { LEA R11,[0x7fffa47c1b11] }
    /* +0xda3ddb */ __asm { ADD R10,RAX }
    /* +0xda3dde */ __asm { MOV AX,0x46aa }
    /* +0xda3de2 */ __asm { XOR EAX,0xa9cd }
    /* +0xda3de7 */ __asm { MOV ECX,EDI }
    /* +0xda3de9 */ __asm { ROR AX,CL }
    /* +0xda3dec */ __asm { MOVSX RAX,AX }
    /* +0xda3df0 */ __asm { SUB RDX,R10 }
    /* +0xda3df3 */ __asm { MOV qword ptr [R11 + RAX*0x1],RDX }
    /* +0xda3df7 */ __asm { MOV RDX,-0x213bd1330efc0d0b }
    /* +0xda3e01 */ __asm { CMP R9,RDX }
    /* +0xda3e04 */ __asm { JZ 0x7fffa5515178 }
    /* +0xda3e0a */ __asm { MOVZX R8D,uint8_t ptr [R9 + -0x67ef] }
    /* +0xda3e12 */ __asm { MOV uint8_t ptr [RBP + 0x840],R8B }
    /* +0xda3e19 */ __asm { MOVZX R8D,uint8_t ptr [RBP + 0x840] }
    /* +0xda3e21 */ __asm { LEA R11,[0x7fffa47b6cb8] }
    /* +0xda3e28 */ __asm { MOV RDX,-0xb0ea449e }
    /* +0xda3e32 */ __asm { XOR RDX,R11 }
    /* +0xda3e35 */ __asm { MOV R10,-0x505629a13862406f }
    /* +0xda3e3f */ __asm { MOV qword ptr [RBP + 0x1388],RDX }
    /* +0xda3e46 */ __asm { CMP RDX,R10 }
    /* +0xda3e49 */ __asm { JZ 0x7fffa5515180 }
    /* +0xda3e4f */ __asm { MOV qword ptr [RBP + 0x1a0],R9 }
    /* +0xda3e56 */ __asm { MOV DX,0x24a6 }
    /* +0xda3e5a */ __asm { XOR EDX,EDI }
    /* +0xda3e5c */ __asm { NOT EDX }
    /* +0xda3e5e */ __asm { MOVZX EAX,DX }
    /* +0xda3e61 */ __asm { AND R8B,0x1 }
    /* +0xda3e65 */ __asm { MOV uint8_t ptr [R11 + 0x64c5],R8B }
    /* +0xda3e6c */ __asm { MOV RDX,qword ptr GS:[RAX] }
    /* +0xda3e70 */ __asm { MOV R10,0x3f19288b2b4e96d7 }
    /* +0xda3e7a */ __asm { CMP RDX,R10 }
    /* +0xda3e7d */ __asm { NOP }
    /* +0xda3e7e */ __asm { NOP }
    /* +0xda3e7f */ __asm { NOP }
    /* +0xda3e80 */ __asm { NOP }
    /* +0xda3e81 */ __asm { MOV qword ptr [RBP + 0x6b8],R11 }
    /* +0xda3e88 */ __asm { MOV R9,0x0 }
    /* +0xda3e8f */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xda3e96 */ __asm { NOP }
    /* +0xda3e97 */ __asm { MOV dword ptr [RBP + 0x840],0x2ecec823 }
    /* +0xda3ea1 */ __asm { MOV EDX,dword ptr [RBP + 0x840] }
    /* +0xda3ea7 */ __asm { CMP EDX,0x5effde1d }
    /* +0xda3ead */ __asm { JNC 0x7fffa5515188 }
    /* +0xda3eb3 */ __asm { MOV EDX,0xca0f8de8 }
    /* +0xda3eb8 */ __asm { ADD EDX,EDI }
    /* +0xda3eba */ __asm { LEA R10,[0x7fffa479f783] }
    /* +0xda3ec1 */ __asm { LEA R11,[0x7fffa47ab862] }
    /* +0xda3ec8 */ __asm { XOR EDX,0x5f1160d7 }
    /* +0xda3ece */ __asm { MOVSXD RAX,EDX }
    /* +0xda3ed1 */ __asm { MOV R8,qword ptr [R11 + RAX*0x1 + 0x8] }
    /* +0xda3ed6 */ __asm { MOV DX,0xeac6 }
    /* +0xda3eda */ __asm { IMUL EAX,EDX,-0x7259 }
    /* +0xda3ee0 */ __asm { NOT EAX }
    /* +0xda3ee2 */ __asm { MOVSX RAX,AX }
    /* +0xda3ee6 */ __asm { MOV R14,qword ptr [R10 + RAX*0x1] }
    /* +0xda3eea */ __asm { MOV dword ptr [RBP + 0x840],0xba671c44 }
    /* +0xda3ef4 */ __asm { MOV EDX,dword ptr [RBP + 0x840] }
    /* +0xda3efa */ __asm { CMP EDX,0x4c815f78 }
    /* +0xda3f00 */ __asm { JBE 0x7fffa5515190 }
    /* +0xda3f06 */ __asm { PUSHFQ }
    /* +0xda3f07 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xda3f0f */ __asm { POPFQ }
    /* +0xda3f10 */ __asm { XOR EDX,EDX }
    /* +0xda3f12 */ __asm { XOR EAX,EAX }
    /* +0xda3f14 */ __asm { CMP R8,R14 }
    /* +0xda3f17 */ __asm { SETZ DL }
    /* +0xda3f1a */ __asm { MOV R10D,0xb0b2fbb0 }
    /* +0xda3f20 */ __asm { SETNC AL }
    /* +0xda3f23 */ __asm { ADD R10D,0x220dd707 }
    /* +0xda3f2a */ __asm { MOV ECX,EDI }
    /* +0xda3f2c */ __asm { ROR R10D,CL }
    /* +0xda3f2f */ __asm { XOR R10D,0xdc1abc97 }
    /* +0xda3f36 */ __asm { MOVSXD R10,R10D }
    /* +0xda3f39 */ __asm { MOV R11D,0x649b67b2 }
    /* +0xda3f3f */ __asm { XOR R11D,EDI }
    /* +0xda3f42 */ __asm { ADD R11D,0x7ed7ec61 }
    /* +0xda3f49 */ __asm { CMP R11,R10 }
    /* +0xda3f4c */ __asm { CMOVA EDX,EAX }
    /* +0xda3f4f */ __asm { MOVQ XMM8,RDI }
    /* +0xda3f54 */ __asm { TEST DL,DL }
    /* +0xda3f56 */ __asm { MOV qword ptr [RBP + 0x798],RDI }
    /* +0xda3f5d */ __asm { MOVDQA xmmword ptr [RBP + 0x1230],XMM13 }
    /* +0xda3f66 */ __asm { MOV qword ptr [RBP + 0x1440],RBX }
    /* +0xda3f6d */ __asm { MOVDQA xmmword ptr [RBP + 0x350],XMM8 }
    /* +0xda3f76 */ __asm { JZ 0x7fffa5514249 }
    /* +0xda3f7c */ __asm { PUSHFQ }
    /* +0xda3f7d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xda3f85 */ __asm { POPFQ }
    /* +0xda3f86 */ __asm { MOV dword ptr [RBP + 0x840],0x40405 }
    /* +0xda3f90 */ __asm { MOV EDX,dword ptr [RBP + 0x840] }
    /* +0xda3f96 */ __asm { MOV AX,0x9e0d }
    /* +0xda3f9a */ __asm { MOV R14D,EDI }
    /* +0xda3f9d */ __asm { OR R14D,0x1 }
    /* +0xda3fa1 */ __asm { XOR EAX,0xffffc2fa }
    /* +0xda3fa6 */ __asm { IMUL EAX,R14D }
    /* +0xda3faa */ __asm { CWDE }
    /* +0xda3fab */ __asm { CMP EDX,EAX }
    /* +0xda3fad */ __asm { NOP }
    /* +0xda3fae */ __asm { NOP }
    /* +0xda3faf */ __asm { NOP }
    /* +0xda3fb0 */ __asm { NOP }
    /* +0xda3fb1 */ __asm { NOP }
    /* +0xda3fb2 */ __asm { MOV AX,0x245c }
    /* +0xda3fb6 */ __asm { ADD EAX,EDI }
    /* +0xda3fb8 */ __asm { LEA RDX,[0x7fffa47bf14d] }
    /* +0xda3fbf */ __asm { ROL AX,0x2 }
    /* +0xda3fc3 */ __asm { ADD EAX,0xffffd784 }
    /* +0xda3fc8 */ __asm { MOVSX R10,AX }
    /* +0xda3fcc */ __asm { MOV R15,qword ptr [RDX + R10*0x1 + 0x8] }
    /* +0xda3fd1 */ __asm { MOV DX,0x6c7a }
    /* +0xda3fd5 */ __asm { XOR EDX,EDI }
    /* +0xda3fd7 */ __asm { ROR DX,0x1 }
    /* +0xda3fda */ __asm { MOVSX R10,DX }
    /* +0xda3fde */ __asm { LEA RDX,[0x7fffa47beb87] }
    /* +0xda3fe5 */ __asm { MOV R13,qword ptr [RDX + R10*0x1] }
    /* +0xda3fe9 */ __asm { CMP R13,R15 }
    /* +0xda3fec */ __asm { JZ 0x7fffa55168da }
    /* +0xda3ff2 */ __asm { MOV R10W,0x5849 }
    /* +0xda3ff7 */ __asm { SUB R10D,EDI }
    /* +0xda3ffa */ __asm { ADD R10D,0x2f0 }
    /* +0xda4001 */ __asm { RDTSC }
    /* +0xda4003 */ __asm { SHL RDX,0x20 }
    /* +0xda4007 */ __asm { OR RDX,RAX }
    /* +0xda400a */ __asm { ROL R10W,0x2 }
    /* +0xda400f */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xda4019 */ __asm { IMUL RDX,R11 }
    /* +0xda401d */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xda4027 */ __asm { LEA RCX,[RDX + RAX*0x1] }
    /* +0xda402b */ __asm { MOV RAX,RCX }
    /* +0xda402e */ __asm { SHR RAX,0x2d }
    /* +0xda4032 */ __asm { MOV R11,RCX }
    /* +0xda4035 */ __asm { SHR R11,0x1b }
    /* +0xda4039 */ __asm { SHR RCX,0x3b }
    /* +0xda403d */ __asm { XOR EAX,R11D }
    /* +0xda4040 */ __asm { ROR EAX,CL }
    /* +0xda4042 */ __asm { SUB R15,R13 }
    /* +0xda4045 */ __asm { MOVZX EDX,R10W }
    /* +0xda4049 */ __asm { AND EAX,0x3 }
    /* +0xda404c */ __asm { CMP EAX,EDX }
    /* +0xda404e */ __asm { MOV dword ptr [RBP + 0x13b0],R14D }
    /* +0xda4055 */ __asm { JNC 0x7fffa55148e2 }
    /* +0xda405b */ __asm { CMP EAX,0x1 }
    /* +0xda405e */ __asm { JZ 0x7fffa5514ada }
    /* +0xda4064 */ __asm { MOV DX,0x5a8d }
    /* +0xda4068 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xda406f */ __asm { MOV R9,0x0 }
    /* +0xda4076 */ __asm { NOP }
    /* +0xda4078 */ __asm { ADD EDX,EDI }
    /* +0xda407a */ __asm { PXOR XMM2,XMM2 }
    /* +0xda407e */ __asm { MOVDQA xmmword ptr [RBP + 0x840],XMM2 }
    /* +0xda4086 */ __asm { MOVZX EAX,DX }
    /* +0xda4089 */ __asm { XOR RAX,0x35a6 }
    /* +0xda408f */ __asm { MOV RDX,qword ptr GS:[RAX] }
    /* +0xda4093 */ __asm { MOV R10,0x261ecfccfe317ead }
    /* +0xda409d */ __asm { CMP qword ptr [RDX + 0x30],R10 }
    /* +0xda40a1 */ __asm { NOP }
    /* +0xda40a2 */ __asm { NOP }
    /* +0xda40a3 */ __asm { NOP }
    /* +0xda40a4 */ __asm { NOP }
    /* +0xda40a5 */ __asm { NOP }
    /* +0xda40a6 */ __asm { MOV dword ptr [RBP + 0x840],0x0 }
    /* +0xda40b0 */ __asm { MOV dword ptr [RBP + 0x1000],0xd39c3d46 }
    /* +0xda40ba */ __asm { MOV EDX,dword ptr [RBP + 0x1000] }
    /* +0xda40c0 */ __asm { CMP EDX,0x910735c1 }
    /* +0xda40c6 */ __asm { NOP }
    /* +0xda40c7 */ __asm { NOP }
    /* +0xda40c8 */ __asm { NOP }
    /* +0xda40c9 */ __asm { NOP }
    /* +0xda40ca */ __asm { NOP }
    /* +0xda40cb */ __asm { MOV R10W,0xf0cd }
    /* +0xda40d0 */ __asm { PUSHFQ }
    /* +0xda40d1 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xda40d9 */ __asm { POPFQ }
    /* +0xda40da */ __asm { XOR R10D,0x7bfa }
    /* +0xda40e1 */ __asm { ADD R10D,EDI }
    /* +0xda40e4 */ __asm { LEA EDX,[R10 + R10*0x4] }
    /* +0xda40e8 */ __asm { MOVZX EAX,DX }
    /* +0xda40eb */ __asm { MOV RDX,qword ptr GS:[RAX] }
    /* +0xda40ef */ __asm { MOV R10D,0x92f9f5a }
    /* +0xda40f5 */ __asm { MOV EAX,0x5cc1ec4c }
    /* +0xda40fa */ __asm { SUB EAX,EDI }
    /* +0xda40fc */ __asm { MOV R11,0x213efe0945e9193e }
    /* +0xda4106 */ __asm { ADD R11,-0x452ee7a1 }
    /* +0xda410d */ __asm { XOR R11,-0x1a626a15 }
    /* +0xda4114 */ __asm { MOVQ XMM2,R11 }
    /* +0xda4119 */ __asm { MOV R11,-0xb61ccc04 }
    /* +0xda4123 */ __asm { ADD R11,RDX }
    /* +0xda4126 */ __asm { MOV R8,-0xac1a85cc }
    /* +0xda4130 */ __asm { ADD R8,RDX }
    /* +0xda4133 */ __asm { ROL EAX,0x15 }
    /* +0xda4136 */ __asm { XOR R11,0xa024638 }
    /* +0xda413d */ __asm { PSUBQ XMM2,XMM8 }
    /* +0xda4142 */ __asm { MOVQ RDX,XMM2 }
    /* +0xda4147 */ __asm { LEA ECX,[RDI + R10*0x1] }
    /* +0xda414b */ __asm { ADD ECX,0xd8faf216 }
    /* +0xda4151 */ __asm { MOVSXD R10,ECX }
    /* +0xda4154 */ __asm { CMP R10,RAX }
    /* +0xda4157 */ __asm { CMOVGE R11,R8 }
    /* +0xda415b */ __asm { CMP RDX,R11 }
    /* +0xda415e */ __asm { NOP }
    /* +0xda415f */ __asm { NOP }
    /* +0xda4160 */ __asm { NOP }
    /* +0xda4161 */ __asm { NOP }
    /* +0xda4162 */ __asm { NOP }
    /* +0xda4163 */ __asm { LEA R11,[0x7fffa4784d53] }
    /* +0xda416a */ __asm { MOV EDX,0x53b0be1 }
    /* +0xda416f */ __asm { IMUL EDX,EBX }
    /* +0xda4172 */ __asm { ROL EDX,0xf }
    /* +0xda4175 */ __asm { MOVSXD RDX,EDX }
    /* +0xda4178 */ __asm { MOV R9,R11 }
    /* +0xda417b */ __asm { SUB R9,RDX }
    /* +0xda417e */ __asm { ROL R9,0x39 }
    /* +0xda4182 */ __asm { ADD R9,-0x4be6e790 }
    /* +0xda4189 */ __asm { MOV RDX,0x7ee6674a5df2c07d }
    /* +0xda4193 */ __asm { CMP R9,RDX }
    /* +0xda4196 */ __asm { NOP }
    /* +0xda4197 */ __asm { NOP }
    /* +0xda4198 */ __asm { NOP }
    /* +0xda4199 */ __asm { NOP }
    /* +0xda419a */ __asm { NOP }
    /* +0xda419b */ __asm { LEA RSI,[0x7fffa47c06cb] }
    /* +0xda41a2 */ __asm { MOV DX,0x9536 }
    /* +0xda41a6 */ __asm { MOV AX,0x34ef }
    /* +0xda41aa */ __asm { MOV qword ptr [RBP + 0x1000],R9 }
    /* +0xda41b1 */ __asm { MOVD XMM2,R14D }
    /* +0xda41b6 */ __asm { XOR EAX,0xffff9447 }
    /* +0xda41bb */ __asm { MOV CX,0x24c6 }
    /* +0xda41bf */ __asm { ADD EDX,0xffffe432 }
    /* +0xda41c5 */ __asm { MOVD XMM4,EDX }
    /* +0xda41c9 */ __asm { PMULLW XMM4,XMM2 }
    /* +0xda41cd */ __asm { ADD EAX,0x3a81 }
    /* +0xda41d2 */ __asm { XOR EAX,EDI }
    /* +0xda41d4 */ __asm { MOVZX R9D,AX }
    /* +0xda41d8 */ __asm { XOR ECX,EDI }
    /* +0xda41da */ __asm { ROL CX,0x1 }
    /* +0xda41dd */ __asm { MOVSX R10,CX }
    /* +0xda41e1 */ __asm { PEXTRW EDX,XMM4,0x0 }
    /* +0xda41e6 */ __asm { MOV EAX,dword ptr [R11 + 0x139] }
    /* +0xda41ed */ __asm { LEA R8,[RBP + 0x840] }
    /* +0xda41f4 */ __asm { SYSCALL }
    /* +0xda41f6 */ __asm { MOV RDX,-0x2e5fafde473cbda0 }
    /* +0xda4200 */ __asm { CMP RSI,RDX }
    /* +0xda4203 */ __asm { JZ 0x7fffa5515198 }
    /* +0xda4209 */ __asm { MOV R11W,0x8ef6 }
    /* +0xda420e */ __asm { MOV qword ptr [RBP + 0x840],R9 }
    /* +0xda4215 */ __asm { MOV DX,0x1a6d }
    /* +0xda4219 */ __asm { IMUL R10D,EDX,-0x46e9 }
    /* +0xda4220 */ __asm { LEA EDX,[RDI + R10*0x1] }
    /* +0xda4224 */ __asm { MOVZX R8D,DX }
    /* +0xda4228 */ __asm { MOV EAX,dword ptr [RSI + -0x41eb] }
    /* +0xda422e */ __asm { XOR R11D,0x1211 }
    /* +0xda4235 */ __asm { IMUL R11D,R14D }
    /* +0xda4239 */ __asm { XOR R11D,0x7390 }
    /* +0xda4240 */ __asm { MOVSX R10,R11W }
    /* +0xda4244 */ __asm { JMP 0x7fffa55150ec }
    /* +0xda4249 */ __asm { MOVD XMM2,EBX }
    /* +0xda424d */ __asm { MOVDQA XMM4,xmmword ptr [0x7fffa56b2660] }
    /* +0xda4255 */ __asm { MOV qword ptr [RBP + 0x438],R8 }
    /* +0xda425c */ __asm { NOP dword ptr [RAX] }
    /* +0xda4260 */ __asm { MOV EDX,0xd3313a3f }
    /* +0xda4265 */ __asm { MOVZX EAX,uint8_t ptr [R14 + 0x5d] }
    /* +0xda426a */ __asm { IMUL R11D,EDX,0x772b2947 }
    /* +0xda4271 */ __asm { NOT R11D }
    /* +0xda4274 */ __asm { MOV EDX,0x1213cc1e }
    /* +0xda4279 */ __asm { XOR EDX,0xf5e40000 }
    /* +0xda427f */ __asm { ROR EDX,0x1 }
    /* +0xda4281 */ __asm { MOV ECX,EDI }
    /* +0xda4283 */ __asm { ROL EDX,CL }
    /* +0xda4285 */ __asm { CMP R11,RDX }
    /* +0xda4288 */ __asm { JBE 0x7fffa55142f0 }
    /* +0xda428a */ __asm { MOVZX R9D,uint8_t ptr [R14 + 0xb1] }
    /* +0xda4292 */ __asm { MOVZX R10D,uint8_t ptr [R14 + 0xb2] }
    /* +0xda429a */ __asm { MOVZX ESI,uint8_t ptr [R14 + RAX*0x8 + 0x68] }
    /* +0xda42a0 */ __asm { MOVZX EDX,uint8_t ptr [R14 + 0xb3] }
    /* +0xda42a8 */ __asm { XOR SIL,uint8_t ptr [R14 + 0xaf] }
    /* +0xda42af */ __asm { MOVZX R11D,uint8_t ptr [R14 + 0xb4] }
    /* +0xda42b7 */ __asm { MOVZX ECX,uint8_t ptr [R14 + 0xb6] }
    /* +0xda42bf */ __asm { MOVZX R8D,uint8_t ptr [R14 + 0xb5] }
    /* +0xda42c7 */ __asm { MOV R13D,0xc8018bc2 }
    /* +0xda42cd */ __asm { ADD R13D,0x79986e32 }
    /* +0xda42d4 */ __asm { XOR R13D,EDI }
    /* +0xda42d7 */ __asm { MOVSXD RBX,R13D }
    /* +0xda42da */ __asm { MOV uint8_t ptr [RBP + 0x840],SIL }
    /* +0xda42e1 */ __asm { JMP 0x7fffa5514371 }
    /* +0xda42f0 */ __asm { MOVZX R11D,uint8_t ptr [R14 + 0xb4] }
    /* +0xda42f8 */ __asm { MOVZX R8D,uint8_t ptr [R14 + 0xb5] }
    /* +0xda4300 */ __asm { MOV EBX,0x1b59bdb6 }
    /* +0xda4305 */ __asm { MOV DX,0xbb89 }
    /* +0xda4309 */ __asm { MOV R10D,0xffffbc3f }
    /* +0xda430f */ __asm { SUB R10D,EDX }
    /* +0xda4312 */ __asm { ADD EBX,0xb6285526 }
    /* +0xda4318 */ __asm { ROL EBX,0xd }
    /* +0xda431b */ __asm { MOV ECX,EDI }
    /* +0xda431d */ __asm { ROL EBX,CL }
    /* +0xda431f */ __asm { MOV EDX,0x29210e66 }
    /* +0xda4324 */ __asm { ADD EDX,EDI }
    /* +0xda4326 */ __asm { NOT EDX }
    /* +0xda4328 */ __asm { MOVZX R10D,R10W }
    /* +0xda432c */ __asm { MOVZX ECX,uint8_t ptr [R14 + R10*0x1] }
    /* +0xda4331 */ __asm { MOVZX R9D,uint8_t ptr [R14 + 0xb1] }
    /* +0xda4339 */ __asm { MOVZX R10D,uint8_t ptr [R14 + 0xb2] }
    /* +0xda4341 */ __asm { MOVZX R13D,uint8_t ptr [R14 + RAX*0x8 + 0x68] }
    /* +0xda4347 */ __asm { MOVD XMM5,R13D }
    /* +0xda434c */ __asm { MOVZX R13D,uint8_t ptr [R14 + 0xaf] }
    /* +0xda4354 */ __asm { MOVD XMM3,R13D }
    /* +0xda4359 */ __asm { PXOR XMM3,XMM5 }
    /* +0xda435d */ __asm { MOVD R13D,XMM3 }
    /* +0xda4362 */ __asm { ROL EDX,0x1b }
    /* +0xda4365 */ __asm { MOVZX EDX,uint8_t ptr [R14 + RDX*0x1] }
    /* +0xda436a */ __asm { MOV uint8_t ptr [RBP + 0x840],R13B }
    /* +0xda4371 */ __asm { MOVZX EDX,DL }
    /* +0xda4374 */ __asm { MOVD XMM5,EDX }
    /* +0xda4378 */ __asm { MOVZX EDX,R11B }
    /* +0xda437c */ __asm { MOVZX R11D,uint8_t ptr [R14 + RAX*0x8 + 0x69] }
    /* +0xda4382 */ __asm { XOR R11B,uint8_t ptr [R14 + 0xb0] }
    /* +0xda4389 */ __asm { MOVD XMM3,EDX }
    /* +0xda438d */ __asm { MOV uint8_t ptr [RBP + 0x841],R11B }
    /* +0xda4394 */ __asm { XOR R9B,uint8_t ptr [R14 + RAX*0x8 + 0x6a] }
    /* +0xda4399 */ __asm { MOV uint8_t ptr [RBP + 0x842],R9B }
    /* +0xda43a0 */ __asm { XOR R10B,uint8_t ptr [R14 + RAX*0x8 + 0x6b] }
    /* +0xda43a5 */ __asm { MOV uint8_t ptr [RBP + 0x843],R10B }
    /* +0xda43ac */ __asm { MOVZX EDX,uint8_t ptr [R14 + RAX*0x8 + 0x6c] }
    /* +0xda43b2 */ __asm { MOVD XMM0,EDX }
    /* +0xda43b6 */ __asm { PXOR XMM0,XMM5 }
    /* +0xda43ba */ __asm { MOVD EDX,XMM0 }
    /* +0xda43be */ __asm { MOV uint8_t ptr [RBP + 0x844],DL }
    /* +0xda43c4 */ __asm { MOVZX EDX,uint8_t ptr [R14 + RAX*0x8 + 0x6d] }
    /* +0xda43ca */ __asm { MOVD XMM5,EDX }
    /* +0xda43ce */ __asm { PXOR XMM5,XMM3 }
    /* +0xda43d2 */ __asm { MOVD EDX,XMM5 }
    /* +0xda43d6 */ __asm { MOV uint8_t ptr [RBP + 0x845],DL }
    /* +0xda43dc */ __asm { XOR R8B,uint8_t ptr [R14 + RAX*0x8 + 0x6e] }
    /* +0xda43e1 */ __asm { MOV uint8_t ptr [RBP + 0x846],R8B }
    /* +0xda43e8 */ __asm { MOV qword ptr [RBP + 0x3b0],R14 }
    /* +0xda43ef */ __asm { XOR CL,uint8_t ptr [R14 + RAX*0x8 + 0x6f] }
    /* +0xda43f4 */ __asm { MOV uint8_t ptr [RBP + 0x847],CL }
    /* +0xda43fa */ __asm { MOV R8,qword ptr [RBP + 0x840] }
    /* +0xda4401 */ __asm { MOV dword ptr [RBP + 0x840],0xd61d26e1 }
    /* +0xda440b */ __asm { MOV R10D,dword ptr [RBP + 0x840] }
    /* +0xda4412 */ __asm { LEA EDX,[R10 + 0x1] }
    /* +0xda4416 */ __asm { MOV EAX,0x1390d2e9 }
    /* +0xda441b */ __asm { AND R10D,0x1 }
    /* +0xda441f */ __asm { XOR EAX,0x75020c98 }
    /* +0xda4424 */ __asm { ADD EAX,EBX }
    /* +0xda4426 */ __asm { MOVD XMM5,EAX }
    /* +0xda442a */ __asm { PMULUDQ XMM5,XMM2 }
    /* +0xda442e */ __asm { MOVD EAX,XMM5 }
    /* +0xda4432 */ __asm { MOV R11D,0xe433dd9b }
    /* +0xda4438 */ __asm { XOR R11D,0x51dad5a3 }
    /* +0xda443f */ __asm { ADD R11D,EDI }
    /* +0xda4442 */ __asm { XOR R11D,0x8cad9b71 }
    /* +0xda4449 */ __asm { MOV ECX,EBX }
    /* +0xda444b */ __asm { ROR R11D,CL }
    /* +0xda444e */ __asm { CMP RAX,R11 }
    /* +0xda4451 */ __asm { CMOVLE R10D,EDX }
    /* +0xda4455 */ __asm { TEST R10D,R10D }
    /* +0xda4458 */ __asm { JZ 0x7fffa55148d0 }
    /* +0xda445e */ __asm { MOV qword ptr [RBP + 0x1470],R8 }
    /* +0xda4465 */ __asm { LEA R14,[R8 + 0x58] }
    /* +0xda4469 */ __asm { MOV R12D,0x1000 }
    /* +0xda446f */ __asm { MOV qword ptr [RBP + 0x13b0],RBX }
    /* +0xda4476 */ __asm { MOVD XMM5,EBX }
    /* +0xda447a */ __asm { MOV R8,0x38d2200d6cdc4794 }
    /* +0xda4484 */ __asm { MOV R9,R8 }
    /* +0xda4487 */ __asm { MOV R11,R8 }
    /* +0xda448a */ __asm { MOV RSI,qword ptr [RBP + 0x798] }
    /* +0xda4491 */ __asm { JMP 0x7fffa5514582 }
    /* +0xda44a0 */ __asm { MOV EDX,0x919899fb }
    /* +0xda44a5 */ __asm { XOR EDX,ESI }
    /* +0xda44a7 */ __asm { MOV EAX,0x31c2250e }
    /* +0xda44ac */ __asm { SUB EAX,EDX }
    /* +0xda44ae */ __asm { MOVSXD RDX,EAX }
    /* +0xda44b1 */ __asm { MOV qword ptr [RBP + 0x460],RDX }
    /* +0xda44b8 */ __asm { MOV RDI,RSI }
    /* +0xda44bb */ __asm { MOVQ XMM0,qword ptr [R14 + -0x40] }
    /* +0xda44c1 */ __asm { MOV RAX,qword ptr [R14 + -0x48] }
    /* +0xda44c5 */ __asm { MOV RDX,0x178a34b5b0412b1f }
    /* +0xda44cf */ __asm { XOR RAX,RDX }
    /* +0xda44d2 */ __asm { MOV RSI,qword ptr [R14 + -0x18] }
    /* +0xda44d6 */ __asm { XOR RSI,RDX }
    /* +0xda44d9 */ __asm { MOVQ XMM1,R11 }
    /* +0xda44de */ __asm { PXOR XMM1,XMM0 }
    /* +0xda44e2 */ __asm { MOVQ RDX,XMM1 }
    /* +0xda44e7 */ __asm { MUL RDX }
    /* +0xda44ea */ __asm { XOR RAX,RDX }
    /* +0xda44ed */ __asm { MOV R11,-0x2e6bc25b0452eb53 }
    /* +0xda44f7 */ __asm { SUB R11,RDI }
    /* +0xda44fa */ __asm { XOR RAX,qword ptr [R14 + -0x10] }
    /* +0xda44fe */ __asm { MOV RDX,-0x8183c0f3 }
    /* +0xda4508 */ __asm { XOR R11,RDX }
    /* +0xda450b */ __asm { MUL RSI }
    /* +0xda450e */ __asm { MOV RSI,RAX }
    /* +0xda4511 */ __asm { XOR R10,R11 }
    /* +0xda4514 */ __asm { XOR R8,qword ptr [R14 + -0x50] }
    /* +0xda4518 */ __asm { MOV R11,RDX }
    /* +0xda451b */ __asm { MOV RAX,R8 }
    /* +0xda451e */ __asm { MUL R10 }
    /* +0xda4521 */ __asm { MOV RCX,qword ptr [RBP + 0x478] }
    /* +0xda4528 */ __asm { XOR RCX,R9 }
    /* +0xda452b */ __asm { XOR R13,RDX }
    /* +0xda452e */ __asm { XOR RAX,R13 }
    /* +0xda4531 */ __asm { MUL RBX }
    /* +0xda4534 */ __asm { MOV R9,RAX }
    /* +0xda4537 */ __asm { XOR R11,RSI }
    /* +0xda453a */ __asm { MOV R10,qword ptr [R14 + -0x38] }
}


// ============================================================================
// Function : Catch@7fffa557fb70  |  RVA: 0xe0fb70  |  Size: 242 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa557fb70(void)

{
  return &UNK_7fffa551e0fc;
}


// ============================================================================
// Function : Catch@7fffa557fc70  |  RVA: 0xe0fc70  |  Size: 279 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa557fc70(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 0x290) = 0xc000009a;
  *(uint64_t *)(param_2 + 0x4c0) = (uint64_t)*(uint32_t *)(param_2 + 0x4c0);
  *(uint64_t *)(param_2 + 0x1a0) = *(uint64_t *)(param_2 + 0x4e0);
  return &UNK_7fffa553f295;
}


// ============================================================================
// Function : Unwind@7fffa557fd90  |  RVA: 0xe0fd90  |  Size: 258 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa557fd90(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x280) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar3 = *(uint32_t **)(param_2 + 0x280);
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar3 + 2,uVar2);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5580940  |  RVA: 0xe10940  |  Size: 358 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5580940(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x638)) {
    (*(code *)((int64_t)(short)((uint16_t)*(uint64_t *)(param_2 + 0x818) ^ 0x698c) + 0x7fffa568c97b
              ))(*(uint64_t *)(param_2 + 0x818),0x7fffa568c97b,
                 *(uint64_t *)(param_2 + 0x620) >> 0x3d ^ *(uint64_t *)(param_2 + 0x620),0);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5580ab0  |  RVA: 0xe10ab0  |  Size: 336 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5580ab0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x398)) {
    iVar2 = -0x4af21ea - (*(int *)(param_2 + 0x120) + 0x79769fde);
    uVar1 = *(uint64_t *)(param_2 + 0x380);
    (*(code *)(&UNK_7fffa56914c3 + iVar2))(iVar2,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5580c00  |  RVA: 0xe10c00  |  Size: 366 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_7fffa5580c00(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x1098)) {
    pcVar1 = (code *)((int64_t)(short)((short)*(uint32_t *)(param_2 + 0x54c) * 0x79bb + -0x5014)
                     + 0x7fffa568b8a1);
    (*pcVar1)(param_1,pcVar1,
              (uint64_t)((uint32_t)DAT_7fffa56bb250 ^ 0x806d073c) *
              (uint64_t)*(uint32_t *)(param_2 + 0x300));
  }
  *(uint16_t *)(param_2 + 0x1080) = 0;
  *(uint64_t *)(param_2 + 0x1098) = 7;
  *(uint64_t *)(param_2 + 0x1090) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5580d70  |  RVA: 0xe10d70  |  Size: 379 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5580d70(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x188)) {
    uVar2 = *(int *)(param_2 + 0x1480) * -0xfce5cee ^ 0x7e95c218;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x818) & 0x1f;
    (*(code *)((int64_t)(int)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x7fffa5692b17))
              (*(uint64_t *)(param_2 + 0x818),0x7fffa5692b17,
               *(uint64_t *)(param_2 + 0x170) >> 0x3d ^ *(uint64_t *)(param_2 + 0x170));
  }
  *(uint64_t *)(param_2 + 0x180) = 0;
  *(uint64_t *)(param_2 + 0x188) = 7;
  *(uint16_t *)(param_2 + 0x170) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5580ef0  |  RVA: 0xe10ef0  |  Size: 328 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5580ef0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  
  uVar1 = *(uint64_t *)(param_2 + 0x818);
  bVar2 = (uint8_t)uVar1 & 0x1f;
  (*(code *)((int64_t)(-0x2921c3d1 - (int)uVar1) + 0x7fffa567107a))
            (uVar1,*(int *)(param_2 + 0x250) * (-0x6e7187e6 << bVar2 | 0x918e781aU >> 0x20 - bVar2),
             param_2 + -0x1f34234c);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5581040  |  RVA: 0xe11040  |  Size: 453 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5581040(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint64_t uVar5;
  uint16_t uVar6;
  
  uVar2 = *(uint64_t *)(param_2 + 0x818);
  uVar5 = uVar2 & 0xffffffff;
  bVar4 = (uint8_t)uVar5;
  bVar3 = bVar4 & 0x1f;
  bVar4 = bVar4 & 0xf;
  uVar6 = -0x605a << bVar4 | 0x9fa6U >> 0x10 - bVar4;
  uVar1 = *(uint32_t *)(param_2 + 0x4b8);
  (*(code *)((int64_t)(int)((-0x3ad294cb << bVar3 | 0xc52d6b35U >> 0x20 - bVar3) ^ 0x94755ede) +
            0x7fffa562d488))(uVar5,0x7fffa5689f48,0xa6eddaaa);
  (*(code *)((int64_t)(short)((uVar6 << 0xd | uVar6 >> 3) + (short)uVar1) + 0x7fffa5689f48))
            (uVar2 & 0xffffffff);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5581210  |  RVA: 0xe11210  |  Size: 416 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5581210(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  uVar2 = 0x722a - (short)*(uint32_t *)(param_2 + 0x818);
  uVar2 = uVar2 * 8 | uVar2 >> 0xd;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x4f8) & 0xf;
  (*(code *)((int64_t)((int)*(uint64_t *)(param_2 + 0x4f8) + 0x5f66321) + 0x7fffa562c513))();
  (*(code *)((int64_t)(short)(uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) + 0x7fffa568b0b8))
            (*(uint64_t *)(param_2 + 0x368));
  return;
}


// ============================================================================
// Function : Unwind@7fffa55813b0  |  RVA: 0xe113b0  |  Size: 266 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55813b0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (*(int64_t *)(param_2 + 0xe0) != 0) {
    uVar1 = ~(*(uint32_t *)(param_2 + 0x818) ^ 0x434edb37);
    (*(code *)(&UNK_7fffa509195a + (int)(uVar1 << 0xc | uVar1 >> 0x14)))();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa55814c0  |  RVA: 0xe114c0  |  Size: 373 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55814c0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  code *pcVar3;
  
  uVar2 = 0xf939 - (short)*(uint32_t *)(param_2 + 0x818);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x14f0) & 0xf;
  if ((uint64_t)(uint16_t)(uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) < *(uint64_t *)(param_2 + 0x1098)
     ) {
    uVar2 = (short)*(uint64_t *)(param_2 + 0x430) + 0xb36b;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x818) & 0xf;
    pcVar3 = (code *)((int64_t)(short)(uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) + 0x7fffa56890cc);
    (*pcVar3)(*(uint64_t *)(param_2 + 0x818),pcVar3,
              *(uint64_t *)(param_2 + 0x1080) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1080));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5581640  |  RVA: 0xe11640  |  Size: 358 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5581640(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x1198)) {
    iVar2 = *(int *)(param_2 + 0x54c) * ((int)*(uint64_t *)(param_2 + 0x14f0) + -0x182bbf91);
    uVar1 = (uint16_t)iVar2;
    uVar3 = ~CONCAT22((short)((uint32_t)iVar2 >> 0x10),uVar1 << 5 | uVar1 >> 0xb);
    (*(code *)((int64_t)(short)uVar3 + 0x7fffa568af43))
              (uVar3,0x7fffa568af43,
               *(uint64_t *)(param_2 + 0x8b0) ^ (uint64_t)*(uint32_t *)(param_2 + 0x300) * 0xe7d4a43d)
    ;
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa55817b0  |  RVA: 0xe117b0  |  Size: 386 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55817b0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x7a8)) {
    uVar2 = (short)*(uint64_t *)(param_2 + 0x818) + 0xd52e;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x520) & 0xf;
    (*(code *)((int64_t)(short)((uVar2 << bVar1 | uVar2 >> 0x10 - bVar1) + 0xac3e ^ 0xbf7) +
              0x7fffa568c2e2))
              (*(uint64_t *)(param_2 + 0x818) & 0xffffffff,*(uint64_t *)(param_2 + 0x790),
               *(uint64_t *)(param_2 + 0x120) ^ 0x9b32f5d5203a6417);
  }
  *(uint64_t *)(param_2 + 0x7a8) = 7;
  *(uint64_t *)(param_2 + 0x7a0) = 0;
  *(uint16_t *)(param_2 + 0x790) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5581940  |  RVA: 0xe11940  |  Size: 531 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5581940(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint16_t uVar8;
  
  lVar1 = param_2 + 0x790;
  uVar3 = *(uint64_t *)(param_2 + 0x818);
  iVar2 = *(int *)(param_2 + 0x520);
  uVar7 = lVar1 - (param_2 << 0x3e);
  uVar6 = (*(int *)(param_2 + 0x14f0) + -0x461f88fd) * -0x66afffdd + 0x3c54e960;
  bVar4 = (uint8_t)uVar3 & 0x1f;
  uVar8 = ((uint16_t)uVar3 ^ 0x6135) + 0x8327;
  bVar5 = (uint8_t)*(uint64_t *)(param_2 + 0x4f8) & 0xf;
  (*(code *)(&UNK_7fffa56a859c + (short)((uVar8 >> bVar5 | uVar8 << 0x10 - bVar5) + 0xba91)))
            (*(uint64_t *)(param_2 + 0x4f8),
             (int)((lVar1 * 4 | uVar7 >> 0x3e) ^ (lVar1 * 0x800 | uVar7 >> 0x35) ^ uVar7) *
             -0x2c78be5,param_2 + 0x1d0,uVar7,uVar6 << bVar4 | uVar6 >> 0x20 - bVar4);
  (*(code *)((int64_t)(int)(((uint32_t)uVar3 ^ 0x10ab7935) - iVar2 ^ 0xadff3d9f) + 0x7fffa562a749))();
  return;
}


// ============================================================================
// Function : Unwind@7fffa5581b60  |  RVA: 0xe11b60  |  Size: 428 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5581b60(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  uVar3 = 0xb3e9 - (short)*(uint32_t *)(param_2 + 0x14f0);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x818) & 0xf;
  if ((uint64_t)(uint16_t)(uVar3 >> bVar2 | uVar3 << 0x10 - bVar2) < *(uint64_t *)(param_2 + 0x1e8))
  {
    uVar1 = *(uint64_t *)(param_2 + 0x1d0);
    (*(code *)((int64_t)
               (short)(((uint16_t)*(uint64_t *)(param_2 + 0x368) ^
                       (short)*(uint32_t *)(param_2 + 0x54c) * -0x3442) * -0x1a03) +
              0x7fffa56892bf))(*(uint64_t *)(param_2 + 0x368),uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint64_t *)(param_2 + 0x1e8) = 7;
  *(uint16_t *)(param_2 + 0x1d0) = 0;
  *(uint64_t *)(param_2 + 0x1e0) = 0;
  *(uint64_t *)(param_2 + 0x14b0) = *(uint64_t *)(param_2 + 0x4f8);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5581d10  |  RVA: 0xe11d10  |  Size: 275 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5581d10(uint64_t param_1,int64_t param_2)

{
  if (*(int64_t *)(param_2 + 0x14b0) != 0) {
    (*(code *)((int64_t)
               (int)((0x809f6ec1U - *(int *)(param_2 + 0x818) ^ *(uint32_t *)(param_2 + 0x368)) +
                    0xd7e53043) + 0x7fffa508ba7a))();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5581e30  |  RVA: 0xe11e30  |  Size: 41 bytes
// Callers  : FUN_7fffa4ab2990@0x342990
// Callees  : FUN_7fffa55abf00@0xe3bf00, FUN_7fffa5213870@0xaa3870, FUN_7fffa517e300@0xa0e300
// ============================================================================
uint8_t FUN_7fffa5581e30(void)

{
  char cVar1;
  
  cVar1 = FUN_7fffa55abf00();
  if (cVar1 != '\0') {
    cVar1 = FUN_7fffa517e300();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_7fffa5213870();
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5586f90  |  RVA: 0xe16f90  |  Size: 731 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5586f90(void)

{
  int64_t lVar1;
  code *pcVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  uint32_t in_EAX;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint64_t in_XMM1_Qb;
  
  uVar7 = in_XMM1_Qb << 0xc | in_XMM1_Qb >> 0x34;
  bVar3 = (uint8_t)in_EAX;
  uVar9 = 0xd6421bb6U >> (bVar3 & 0x1f) | -0x29bde44a << 0x20 - (bVar3 & 0x1f);
  uVar6 = uVar7 + 0x586aca59;
  if ((int64_t)(uint64_t)(uVar9 << 0xc | uVar9 >> 0x14) <
      (int64_t)(int)((in_EAX + 0x243554cc) * -0x58792d15 + 0x7cadd622)) {
    uVar6 = uVar7 & 0xffffffffa79535a7;
  }
  lVar8 = uVar6 - (uVar6 << 0x23);
  lVar1 = *(int64_t *)(lVar8 + 0x88);
  uVar4 = (uint16_t)in_EAX;
  if (lVar1 != 0) {
    uVar6 = *(int64_t *)(lVar8 + 0x98) - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(int64_t *)(lVar1 + -8);
      if ((uint64_t)(uVar4 ^ 0x73ff) <= (uint64_t)((lVar1 + -8) - lVar5)) goto LAB_7fffa5587269;
      uVar6 = uVar6 + 0x27;
    }
    (*(code *)((int64_t)(short)(uVar4 ^ 0xbf20) + 0x7fffa5086301))(lVar5,uVar6);
    *(uint8_t (*) [16])(lVar8 + 0x88) = (uint8_t  [16])0x0;
    *(uint64_t *)(lVar8 + 0x98) = 0;
  }
  lVar1 = *(int64_t *)(lVar8 + 0x60);
  if (lVar1 != 0) {
    uVar6 = *(int64_t *)(lVar8 + 0x70) - lVar1;
    if ((int)(-0x47aa2e55 << (bVar3 & 0x1f) | 0xb855d1abU >> 0x20 - (bVar3 & 0x1f)) <
        (int)((in_EAX | 1) * 0x5769c46)) {
      uVar6 = *(int64_t *)(lVar8 + 0x70) * lVar1;
    }
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (uint64_t)((lVar1 + -8) - lVar5)) goto LAB_7fffa5587269;
      uVar6 = uVar6 + 0x27;
    }
    (*(code *)((int64_t)(short)((uVar4 + 0x2d38) * -0x38a9) + 0x7fffa508902f))(lVar5,uVar6);
    *(uint8_t (*) [16])(lVar8 + 0x60) = (uint8_t  [16])0x0;
    *(uint64_t *)(lVar8 + 0x70) = 0;
  }
  uVar6 = *(uint64_t *)(lVar8 + 0x48);
  if (((int64_t)(int)((in_EAX + 0x2a86034c) * 0x80 | in_EAX + 0x2a86034c >> 0x19) ==
      (uint64_t)((in_EAX ^ 0x4946d7d6) << 0xc | (in_EAX ^ 0x4946d7d6) >> 0x14)) == (uVar6 == 0)) {
    uVar7 = *(uint64_t *)(lVar8 + 0x58) ^ uVar6;
    if ((uint64_t)(((uint32_t)DAT_7fffa57849f0 ^ 0x85266c6a) - in_EAX) != 0xffffffffa8443590) {
      uVar7 = *(uint64_t *)(lVar8 + 0x58) - uVar6;
    }
    uVar10 = uVar6;
    if ((uint16_t)(0x1ffe << (bVar3 & 0xf) | 0x1ffeU >> 0x10 - (bVar3 & 0xf)) < uVar7) {
      uVar10 = *(uint64_t *)(uVar6 - 8);
      if (0x1f < (uVar6 - 8) - uVar10) {
LAB_7fffa5587269:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar7 = uVar7 + 0x27;
    }
    (*(code *)(&UNK_7fffa508eae0 + (int)(in_EAX + 0x32bd141)))
              (uVar10,uVar7,0xf1e69858,&IMAGE_DOS_HEADER_7fffa4770000);
    *(uint8_t (*) [16])(lVar8 + 0x48) = (uint8_t  [16])0x0;
    *(uint64_t *)(lVar8 + 0x58) = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5587270  |  RVA: 0xe17270  |  Size: 940 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
void FUN_7fffa5587270(void)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t bVar5;
  int64_t lVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint32_t uVar11;
  int64_t in_R11;
  int64_t lVar12;
  uint32_t uVar13;
  uint64_t uVar14;
  int64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  
  uVar9 = (uint32_t)in_stack_00000030;
  bVar7 = (uint8_t)in_stack_00000030 & 0x1f;
  uVar11 = 0x2c4ecefe << bVar7 | 0x2c4ecefeU >> 0x20 - bVar7;
  uVar10 = in_stack_00000028 + 0x146d16e9;
  if ((uVar11 << 0x16 | uVar11 >> 10) < (uVar9 | 1) * 0x4df9fa24 + 0x9604fdd9) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar10;
    uVar8 = SUB168(auVar4 * ZEXT816(0x1111111111111111),8) +
            (uint64_t)
            CARRY8(SUB168(auVar4 * ZEXT816(0x1111111111111111),0),
                   SUB168(auVar3 * ZEXT816(0x1111111111111112),8));
    lVar6 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar11 = ~((uVar9 | 1) * -0x6a0db62b);
    bVar7 = 0x3f;
    if (0x1d < uVar10) {
      bVar7 = (uint8_t)lVar6 ^ 0x3f;
    }
    bVar5 = -bVar7;
    uVar10 = (0x88L << (bVar5 & 0x3f)) + 0xe;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar10;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    uVar8 = SUB168(auVar2 * ZEXT816(0x1111111111111111),8) +
            (uint64_t)
            CARRY8(SUB168(auVar2 * ZEXT816(0x1111111111111111),0),
                   SUB168(auVar1 * ZEXT816(0x1111111111111112),8));
    uVar11 = uVar9 + 0xa4f8e15;
    lVar6 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    bVar7 = 0x3f;
    if (0x1d < uVar10) {
      bVar7 = (uint8_t)lVar6 ^ 0x3f;
    }
    bVar5 = -bVar7;
    uVar8 = 0x88L << (bVar5 & 0x3f);
    uVar10 = uVar8 ^ 0xe;
    if ((uint64_t)(((uVar9 + 0xd7574aab) * 0x400 | uVar9 + 0xd7574aab >> 0x16) + 0x80000004) <
        ((in_stack_00000030 & 0xffffffff | 1) * 0xf18fe724 +
        ((in_stack_00000030 & 0xffffffff | 1) * 0xe4f20d07 +
         (in_stack_00000030 >> 0x20) * 0xf18fe724 << 0x20)) - 0xfb0cda23) {
      uVar10 = uVar8 + 0xe;
    }
  }
  uVar13 = uVar9 + 0xc3a507a6 ^ uVar11;
  lVar12 = 0x78L << (0x40 - bVar7 & 0x3f);
  (*(code *)((int64_t)(int)((uVar11 - uVar9) + 0x4ec2f986) + 0x7fffa5273ea9))
            (in_stack_00000030,
             ((uVar10 & 0xfffffffffffffff8) << 0x3c ^ uVar10 & 0xfffffffffffffff8) * 0x4001);
  lVar6 = (in_stack_00000030 << 0x2c | in_stack_00000030 >> 0x14) -
          ((in_stack_00000030 >> 0x14) << 0x36);
  uVar10 = 0;
  if ((uint64_t)((uVar11 | 1) * -0xe537278 + uVar9) <
      (uint64_t)(int64_t)(int)(uVar13 << 0x11 | uVar13 >> 0xf)) {
    uVar10 = (uint64_t)(-((int)lVar6 + (int)lVar12 + -8) & 0xf);
  }
  lVar6 = uVar10 + lVar6 + lVar12 + -8;
  uVar14 = FUN_7fffa4ecf8e0(lVar6,0,0x10L << (0x40 - bVar7 & 0x3f));
  *(uint8_t *)((1L << (bVar5 & 0x3f)) * 0x10 + -2 + lVar6) = 1;
  uVar10 = in_R11 * -0x1bf6130247409ea3 + 0x67c7be3e;
  uVar10 = (uVar10 * 8 | uVar10 >> 0x3d) ^ (uVar10 * 0x100000 | uVar10 >> 0x2c) ^ uVar10;
  (*(code *)(&UNK_7fffa4d12c90 + (int)~(uVar11 ^ 0x58bc4011)))
            (uVar14,&UNK_7fffa4d12c90 + (int)~(uVar11 ^ 0x58bc4011),
             (uVar10 << 3 | uVar10 >> 0x3d) ^ 0xffffffffffffffff);
  return;
}


// ============================================================================
// Function : FUN_7fffa5587620  |  RVA: 0xe17620  |  Size: 1982 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa5587dd1) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587dc1) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587e14) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587dc3) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587dc7) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587974) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587a78) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587a7c) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587db0) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587db3) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587d43) */
/* WARNING: Removing unreachable block (ram,0x7fffa5587d5f) */

void FUN_7fffa5587620(void)

{
  uint64_t uVar1;
  
  uRam00007fffa4786378 = 0xaa8faafd90ebc601;
  uRam00007fffa4786380 = 0x47330d0000000000;
  uVar1 = lRam00007fffa47813d0 * -0x7ff001ffc007ff + 0xd2db2520863f3d5b;
  uVar1 = uVar1 * 8 ^ uVar1;
  uVar1 = uVar1 << 6 ^ uVar1;
  uVar1 = uVar1 << 0xc ^ uVar1;
  uRam00007fffa4786390 = 0x1b3c4b0807278b3b;
  uRam00007fffa4786388 = uVar1 << 0x30 ^ uVar1 << 0x18 ^ uVar1;
  uRam00007fffa4786398 = 0xd250ef76d4e2ebe6;
  lRam00007fffa4786360 = lRam00007fffa47814b0 + -0x707bdc064e2bf235;
  uRam00007fffa4786368 =
       (lRam00007fffa4780cd8 + 0x8d4e3c1e188db28fU) * 0x8000000 |
       lRam00007fffa4780cd8 + 0x8d4e3c1e188db28fU >> 0x25;
  uRam00007fffa4786370 = uRam00007fffa47811b0 ^ 0xd7bb86c30b24e3f0;
  return;
}


// ============================================================================
// Function : FUN_7fffa5587de0  |  RVA: 0xe17de0  |  Size: 50 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5587de0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                     int64_t param_5)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  bool bVar4;
  uint16_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint8_t bVar11;
  char *pcVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint16_t uVar15;
  code *pcVar16;
  uint64_t uVar17;
  uint8_t *pbVar18;
  uint32_t uVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  char *pcVar24;
  uint64_t uVar25;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  
  uVar22 = param_5 - 0x46631936U >> 0xb ^ param_5 - 0x46631936U;
  pbVar18 = (uint8_t *)(uVar22 >> 0x2c ^ uVar22 >> 0x16 ^ uVar22);
  bVar11 = (uint8_t)param_3;
  uVar5 = (uint16_t)param_3;
  if (uRam00007fffa47bb4b0 == 0) goto code_r0x7fffa5588271;
  pcVar12 = *(char **)((int64_t)(short)(uVar5 + 0x947e) + 0x7fffa47c20fc);
  if (pcVar12 == pcVar12 + lRam00007fffa47bb4a0 * 0x10 + 0x10) {
    lVar20 = 0;
    uVar22 = uRam00007fffa47bb4b0;
  }
  else {
    pcVar24 = pcVar12 + lRam00007fffa47bb4a0 * 0x10;
    lVar20 = 0;
    uVar22 = uRam00007fffa47bb4b0;
    while( true ) {
      auVar26[0] = -(*pcVar12 == '\0');
      auVar26[1] = -(pcVar12[1] == '\0');
      auVar26[2] = -(pcVar12[2] == '\0');
      auVar26[3] = -(pcVar12[3] == '\0');
      auVar26[4] = -(pcVar12[4] == '\0');
      auVar26[5] = -(pcVar12[5] == '\0');
      auVar26[6] = -(pcVar12[6] == '\0');
      auVar26[7] = -(pcVar12[7] == '\0');
      auVar26[8] = -(pcVar12[8] == '\0');
      auVar26[9] = -(pcVar12[9] == '\0');
      auVar26[10] = -(pcVar12[10] == '\0');
      auVar26[0xb] = -(pcVar12[0xb] == '\0');
      auVar26[0xc] = -(pcVar12[0xc] == '\0');
      auVar26[0xd] = -(pcVar12[0xd] == '\0');
      auVar26[0xe] = -(pcVar12[0xe] == '\0');
      auVar26[0xf] = -(pcVar12[0xf] == '\0');
      uVar19 = ((uint16_t)((uint16_t)(SUB161(auVar26 >> 7,0) & 1) |
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
                         (uint16_t)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                        (uint16_t)(auVar26[0xf] >> 7) << 0xf) ^ 0x7fff) &
               ((uint32_t)(pcVar12 != pcVar24) << 0xe | 0x3fff);
      if (uVar19 != ((param_3 ^ 0xffffff2e) & 0xffff)) {
        do {
          uVar9 = 0;
          for (uVar10 = uVar19; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          uVar25 = (uint64_t)uVar9;
          puVar21 = *(uint64_t **)(uVar22 + uVar25 * 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (*puVar21 >> 3) + *puVar21;
          uVar17 = SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),8) ^
                   SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),0);
          uVar23 = uVar17 >> (*pbVar18 & 0x3f);
          lVar14 = *(int64_t *)(pbVar18 + 0x10) + uVar23 * 0x10;
          pcVar1 = (char *)(*(int64_t *)(pbVar18 + 0x10) + uVar23 * 0x10);
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
          uVar9 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar27 >> 7,0) & 1) |
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
                                (uint16_t)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe);
          if (uVar9 == 0) {
            lVar13 = 1;
            do {
              *(uint8_t *)(lVar14 + 0xf) = *(uint8_t *)(lVar14 + 0xf) | '\x01' << ((uint8_t)uVar17 & 7);
              uVar23 = uVar23 + lVar13 & *(uint64_t *)(pbVar18 + 8);
              lVar14 = *(int64_t *)(pbVar18 + 0x10) + uVar23 * 0x10;
              pcVar1 = (char *)(*(int64_t *)(pbVar18 + 0x10) + uVar23 * 0x10);
              auVar28[0] = -(*pcVar1 == '\0');
              auVar28[1] = -(pcVar1[1] == '\0');
              auVar28[2] = -(pcVar1[2] == '\0');
              auVar28[3] = -(pcVar1[3] == '\0');
              auVar28[4] = -(pcVar1[4] == '\0');
              auVar28[5] = -(pcVar1[5] == '\0');
              auVar28[6] = -(pcVar1[6] == '\0');
              auVar28[7] = -(pcVar1[7] == '\0');
              auVar28[8] = -(pcVar1[8] == '\0');
              auVar28[9] = -(pcVar1[9] == '\0');
              auVar28[10] = -(pcVar1[10] == '\0');
              auVar28[0xb] = -(pcVar1[0xb] == '\0');
              auVar28[0xc] = -(pcVar1[0xc] == '\0');
              auVar28[0xd] = -(pcVar1[0xd] == '\0');
              auVar28[0xe] = -(pcVar1[0xe] == '\0');
              auVar28[0xf] = -(pcVar1[0xf] == '\0');
              uVar9 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar28 >> 7,0) & 1) |
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
                                    (uint16_t)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe);
              lVar13 = lVar13 + 1;
            } while (uVar9 == 0);
            puVar21 = *(uint64_t **)(uVar22 + uVar25 * 8);
          }
          uVar2 = (&UNK_7fffa583f631)
                  [(uVar17 & 0xff) * 4 +
                   ((int64_t)
                    (int)(0xdf0e1a3aU >> (bVar11 & 0x1f) | -0x20f1e5c6 << 0x20 - (bVar11 & 0x1f)) ^
                   0xffffffff971464d7U)];
          uVar10 = 0;
          for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          *(uint64_t **)(uVar23 * 0x78 + *(int64_t *)(pbVar18 + 0x18) + (uint64_t)uVar10 * 8) =
               puVar21;
          *(uint64_t *)(uVar22 + uVar25 * 8) = 0;
          *(uint8_t *)(lVar14 + (uint64_t)uVar10) = uVar2;
          uVar17 = *(uint64_t *)(uVar22 + uVar25 * 8);
          bVar4 = 0 < (int64_t)uVar17;
          if ((uint64_t)(0xb88f6c89 - param_3) <
              (uint64_t)
              (int64_t)(int)((param_3 + 0xc7e597c1) * 0x4000 | param_3 + 0xc7e597c1 >> 0x12)) {
            bVar4 = uVar17 == 0;
          }
          if (!bVar4) {
            (*(code *)(&UNK_7fffa5692070 +
                      (int)~(0x290fc000U >> (bVar11 & 0x1f) | 0x290fc000 << 0x20 - (bVar11 & 0x1f)))
            )(param_3,&UNK_7fffa5692070,uVar17 >> 0x3d ^ uVar17);
          }
          lVar20 = lVar20 + 1;
          uVar19 = uVar19 - 1 & uVar19;
        } while (uVar19 != 0);
      }
      if (pcVar12 == pcVar24) break;
      pcVar12 = pcVar12 + 0x10;
      uVar22 = uVar22 + 0x78;
    }
    uVar15 = (uVar5 | 1) * 0x2afd + 0x776e;
    uVar22 = *(uint64_t *)((int64_t)(short)(uVar15 * 0x200 | uVar15 >> 7) + 0x7fffa47bf1f3);
  }
  lVar14 = (int64_t)(int)(0xddca7fffU >> (bVar11 & 0x1f) | -0x22358001 << 0x20 - (bVar11 & 0x1f));
  if (lVar20 == *(int64_t *)(lVar14 + 0x7fffa47c3d97)) {
code_r0x7fffa5588236:
    if (uVar22 == 0) goto code_r0x7fffa5588271;
  }
  else {
    if (uVar22 == 0) goto code_r0x7fffa5588271;
    uVar19 = 0xfe7b29ffU >> (bVar11 & 0x1f) | -0x184d601 << 0x20 - (bVar11 & 0x1f);
    lVar14 = (int64_t)(int)(uVar19 << 5 | uVar19 >> 0x1b);
    pcVar12 = *(char **)(lVar14 + 0x7fffa47c7714);
    if (pcVar12 != pcVar12 + lRam00007fffa47bb4a0 * 0x10 + 0x10) {
      pcVar24 = pcVar12 + lRam00007fffa47bb4a0 * 0x10;
      while( true ) {
        auVar29[0] = -(*pcVar12 == '\0');
        auVar29[1] = -(pcVar12[1] == '\0');
        auVar29[2] = -(pcVar12[2] == '\0');
        auVar29[3] = -(pcVar12[3] == '\0');
        auVar29[4] = -(pcVar12[4] == '\0');
        auVar29[5] = -(pcVar12[5] == '\0');
        auVar29[6] = -(pcVar12[6] == '\0');
        auVar29[7] = -(pcVar12[7] == '\0');
        auVar29[8] = -(pcVar12[8] == '\0');
        auVar29[9] = -(pcVar12[9] == '\0');
        auVar29[10] = -(pcVar12[10] == '\0');
        auVar29[0xb] = -(pcVar12[0xb] == '\0');
        auVar29[0xc] = -(pcVar12[0xc] == '\0');
        auVar29[0xd] = -(pcVar12[0xd] == '\0');
        auVar29[0xe] = -(pcVar12[0xe] == '\0');
        auVar29[0xf] = -(pcVar12[0xf] == '\0');
        for (uVar19 = ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
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
                      ((uint32_t)(pcVar12 != pcVar24) << 0xe | 0x3fff); uVar19 != 0;
            uVar19 = uVar19 - 1 & uVar19) {
          uVar9 = 0;
          for (uVar10 = uVar19; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          uVar17 = *(uint64_t *)(uVar22 + (uint64_t)uVar9 * 8);
          if (uVar17 != 0) {
            uVar10 = param_3 + 0xc49b071 ^ 0x8b056fa0;
            (*(code *)((int64_t)(int)(uVar10 << 0x1a | uVar10 >> 6) + 0x7fffa5692130))
                      ((uint64_t)uVar9,0x7fffa5692130,uVar17 >> 0x3d ^ uVar17);
          }
        }
        if (pcVar12 == pcVar24) break;
        uVar22 = uVar22 + 0x78;
        pcVar12 = pcVar12 + 0x10;
      }
      lVar14 = (int64_t)(int)((param_3 + 0xb43a3703 ^ 0x4b73f480) * -0x230cd093);
      uVar22 = *(uint64_t *)(lVar14 + 0x7fffa47c5053);
      goto code_r0x7fffa5588236;
    }
  }
  pcVar16 = (code *)((int64_t)(short)(-0x575f - uVar5) + 0x7fffa568d2bd);
  (*pcVar16)(CONCAT62((int6)((uint64_t)lVar14 >> 0x10),0xbce8),pcVar16,uVar22 >> 0x3d ^ uVar22);
code_r0x7fffa5588271:
  lVar20 = (int64_t)(short)(uVar5 + 0x6c26 ^ 0xf607);
  uVar6 = *(uint64_t *)pbVar18;
  uVar7 = *(uint64_t *)(pbVar18 + 8);
  uVar8 = *(uint64_t *)(pbVar18 + 0x18);
  *(uint64_t *)(lVar20 + 0x7fffa47c1755) = *(uint64_t *)(pbVar18 + 0x10);
  *(uint64_t *)(lVar20 + 0x7fffa47c175d) = uVar8;
  *(uint64_t *)(lVar20 + 0x7fffa47c1745) = uVar6;
  *(uint64_t *)(lVar20 + 0x7fffa47c174d) = uVar7;
  lVar20 = *(int64_t *)((int64_t)(short)(uVar5 ^ 0x1b48) + 0x7fffa47bd03a);
  uVar22 = lVar20 * 0xf + 0xe;
  if (0x7ffe0328 < ((param_3 ^ 0xa3472a03) << 5 | (param_3 ^ 0xa3472a03) >> 0x1b)) {
    uVar22 = lVar20 * 0xf - 0xe;
  }
  if (*(int64_t *)
       ((int64_t)
        (int)((-0x13debda3 << (bVar11 & 0x1f) | 0xec21425dU >> 0x20 - (bVar11 & 0x1f)) + 0xaf6785f0)
       + 0x7fffa47cb3b8) == 0) {
    uVar22 = 0;
  }
  uVar17 = (uint64_t)((float)uVar22 * 0.875);
  uVar17 = (int64_t)((float)uVar22 * 0.875 - 9.223372e+18) & (int64_t)uVar17 >> 0x3f | uVar17;
  if (uVar22 < 0x1e) {
    uVar17 = uVar22;
  }
  *(uint64_t *)((int64_t)(short)(uVar5 ^ 0x5099) + 0x7fffa47c0501) = uVar17;
  return;
}


// ============================================================================
// Function : FUN_7fffa55883b4  |  RVA: 0xe183b4  |  Size: 28 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa55883b4(void)

{
  if (_DAT_7fffa4780ab0 < 0xfffffffffffffffe) {
    (*(code *)&DAT_7ff84ea57010)();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55883d0  |  RVA: 0xe183d0  |  Size: 25 bytes
// Callers  : none
// Callees  : FUN_7fffa52c3c00@0xb53c00
// ============================================================================
void FUN_7fffa55883d0(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa52c3c00(*(uint8_t *)(param_2 + 0x20));
  return;
}


// ============================================================================
// Function : FUN_7fffa55883ea  |  RVA: 0xe183ea  |  Size: 19 bytes
// Callers  : none
// Callees  : FUN_7fffa5605b20@0xe95b20
// ============================================================================
void FUN_7fffa55883ea(void)

{
  FUN_7fffa5605b20();
  return;
}


// ============================================================================
// Function : FUN_7fffa5588400  |  RVA: 0xe18400  |  Size: 154 bytes
// Callers  : FUN_7fffa50c8f60@0x958f60
// Callees  : FUN_7fffa5488850@0xd18850
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5588400(uint8_t *param_1,uint8_t *param_2)

{
  uint8_t *pbVar1;
  uint8_t bVar2;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  uStack_18 = _DAT_7fffa4780040 ^ (uint64_t)&uStack_38;
  bVar2 = *param_2;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  while (bVar2 != 0) {
    pbVar1 = (uint8_t *)((int64_t)&uStack_38 + ((int64_t)(int)(uint32_t)bVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  bVar2 = *param_1;
  while( true ) {
    if (bVar2 == 0) {
      FUN_7fffa5488850(uStack_18 ^ (uint64_t)&uStack_38);
      return;
    }
    if ((*(uint8_t *)((int64_t)&uStack_38 + (uint64_t)(bVar2 >> 3)) >> (bVar2 & 7) & 1) != 0) break;
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  FUN_7fffa5488850(uStack_18 ^ (uint64_t)&uStack_38);
  return;
}


// ============================================================================
// Function : FUN_7fffa55884a0  |  RVA: 0xe184a0  |  Size: 1830 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5588562) */
/* WARNING: Removing unreachable block (ram,0x7fffa5588bbd) */
/* WARNING: Removing unreachable block (ram,0x7fffa558856d) */

void FUN_7fffa55884a0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uRam00007fffa47bcb70 = 0x13a69fee6d517786;
  uRam00007fffa47bcb48 = 0x7f9ad087e9b66142;
  uRam00007fffa47bcb60 = 0x19ebed8e2cb59383;
  uRam00007fffa47bcb40 = 0;
  uRam00007fffa47bcb58 = 0xf9162549cf2e4080;
  uRam00007fffa47bcb50 = 0xdbe16884238ae1e0;
  uVar1 = (uRam00007fffa47814c8 << 7 | uRam00007fffa47814c8 >> 0x39) ^
          (uRam00007fffa47814c8 << 0xf | uRam00007fffa47814c8 >> 0x31) ^ uRam00007fffa47814c8;
  uVar1 = (uVar1 << 0x1e | uVar1 >> 0x22) ^ (uVar1 << 0xe | uVar1 >> 0x32) ^ uVar1;
  uVar1 = (uVar1 << 0x3c | uVar1 >> 4) ^ (uVar1 << 0x1c | uVar1 >> 0x24) ^ uVar1;
  uVar1 = (uVar1 << 5 | uVar1 >> 0x3b) ^ (uVar1 << 3 | uVar1 >> 0x3d) ^ uVar1;
  uVar1 = (uVar1 << 6 | uVar1 >> 0x3a) ^ (uVar1 << 10 | uVar1 >> 0x36) ^ uVar1;
  uVar1 = (uVar1 << 0x14 | uVar1 >> 0x2c) ^ (uVar1 << 0xc | uVar1 >> 0x34) ^ uVar1;
  uVar1 = (uVar1 << 0x28 | uVar1 >> 0x18) ^ (uVar1 << 0x18 | uVar1 >> 0x28) ^ uVar1;
  uRam00007fffa47bcb68 = 0x3f3ff252040a1e7;
  uVar1 = (uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1;
  uVar2 = uVar1 << 0xf ^ uVar1;
  uVar1 = uVar2 << 0x1e ^ uVar1 << 0x3c ^ uVar2;
  uVar3 = uVar1 >> 7 ^ uVar1;
  uVar2 = uVar3 >> 0xe ^ uVar3;
  uRam00007fffa47bcb38 = (uVar2 >> 0x1c ^ uVar3 >> 0x38 ^ uVar2) << 3 | uVar1 >> 0x3d;
  return;
}


// ============================================================================
// Function : FUN_7fffa5588bd0  |  RVA: 0xe18bd0  |  Size: 177 bytes
// Callers  : none
// Callees  : none
// ============================================================================
bool FUN_7fffa5588bd0(void)

{
  bool bVar1;
  uint8_t bVar2;
  uint8_t *in_R9;
  uint64_t uVar3;
  uint8_t bVar4;
  int64_t *in_stack_00000030;
  
  bVar1 = true;
  if (*in_R9 != 0) {
    uVar3 = 0x3e149def2df35f59;
    bVar4 = *in_R9;
    do {
      in_R9 = in_R9 + 1;
      bVar2 = bVar4 | 0x20;
      if (0x19 < (uint8_t)(bVar4 + 0xbf)) {
        bVar2 = bVar4;
      }
      uVar3 = (uVar3 ^ bVar2) * 0x8000000081b;
      bVar4 = *in_R9;
    } while (*in_R9 != 0);
    if (uVar3 == 0x4c0778acfa49842a) {
      bVar1 = (code *)*in_stack_00000030 != DllEntryRun_Export;
    }
  }
  return bVar1;
}


// ============================================================================
// Function : FUN_7fffa5588c90  |  RVA: 0xe18c90  |  Size: 87 bytes
// Callers  : FUN_7fffa4ecfc70@0x75fc70
// Callees  : none
// ============================================================================
void FUN_7fffa5588c90(uint16_t *param_1,uint16_t *param_2)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  do {
    uVar1 = *param_1;
    uVar3 = (uint32_t)uVar1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    uVar4 = (uint32_t)uVar2;
    param_2 = param_2 + 1;
    if ((uint32_t)uVar1 != (uint32_t)uVar2) {
      uVar3 = uVar1 + 0x20;
      if (0x19 < uVar1 - 0x41) {
        uVar3 = (uint32_t)uVar1;
      }
      uVar4 = uVar2 + 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar4 = (uint32_t)uVar2;
      }
    }
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}


// ============================================================================
// Function : FUN_7fffa5588cf0  |  RVA: 0xe18cf0  |  Size: 24421 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5588cf0(void) {
    /* +0xe18cf0 */ __asm { PUSH RBP }
    /* +0xe18cf1 */ __asm { PUSH RDI }
    /* +0xe18cf2 */ __asm { PUSH R13 }
    /* +0xe18cf4 */ __asm { PUSH R15 }
    /* +0xe18cf6 */ __asm { PUSH R12 }
    /* +0xe18cf8 */ __asm { PUSH R14 }
    /* +0xe18cfa */ __asm { PUSH RSI }
    /* +0xe18cfb */ __asm { PUSH RBX }
    /* +0xe18cfc */ __asm { SUB RSP,0x498 }
    /* +0xe18d03 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xe18d0b */ __asm { MOVAPS xmmword ptr [RBP + 0x400],XMM7 }
    /* +0xe18d12 */ __asm { MOVAPS xmmword ptr [RBP + 0x3f0],XMM11 }
    /* +0xe18d1a */ __asm { MOVAPS xmmword ptr [RBP + 0x3e0],XMM9 }
    /* +0xe18d22 */ __asm { MOVDQA xmmword ptr [RBP + 0x3d0],XMM14 }
    /* +0xe18d2b */ __asm { MOVAPS xmmword ptr [RBP + 0x3c0],XMM12 }
    /* +0xe18d33 */ __asm { MOV qword ptr [RBP + 0x3b8],-0x2 }
    /* +0xe18d3e */ __asm { MOV R10,RDX }
    /* +0xe18d41 */ __asm { MOV EDX,0x2e196aa7 }
    /* +0xe18d46 */ __asm { IMUL EDX,EDX,-0x3d7a8431 }
    /* +0xe18d4c */ __asm { ADD EDX,0x447175b6 }
    /* +0xe18d52 */ __asm { MOV dword ptr [RBP + -0x20],EDX }
    /* +0xe18d55 */ __asm { MOV R8D,dword ptr [RBP + -0x20] }
    /* +0xe18d59 */ __asm { TEST R8B,0x1 }
    /* +0xe18d5d */ __asm { JZ 0x7fffa55893d9 }
    /* +0xe18d63 */ __asm { MOV dword ptr [RBP + -0x20],0x10100114 }
    /* +0xe18d6a */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe18d6d */ __asm { TEST DL,0x1 }
    /* +0xe18d70 */ __asm { JNZ 0x7fffa55893ec }
    /* +0xe18d76 */ __asm { CMP ECX,0x2 }
    /* +0xe18d79 */ __asm { JL 0x7fffa55893f8 }
    /* +0xe18d7f */ __asm { JNZ 0x7fffa5590cb1 }
    /* +0xe18d85 */ __asm { MOV DX,0x80a0 }
    /* +0xe18d89 */ __asm { IMUL EDX,EDX,0x7a67 }
    /* +0xe18d8f */ __asm { MOVZX R11D,DX }
    /* +0xe18d93 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xe18d97 */ __asm { MOV R11,qword ptr [R11 + 0x18] }
    /* +0xe18d9b */ __asm { MOV R9,0x56ae2cd7993ee879 }
    /* +0xe18da5 */ __asm { MOV R9,0x2d7a1f6ff849df58 }
    /* +0xe18daf */ __asm { CMP R11,R9 }
    /* +0xe18db2 */ __asm { JZ 0x7fffa55893b7 }
    /* +0xe18db8 */ __asm { MOV dword ptr [RBP + -0x20],0xc2dbdeff }
    /* +0xe18dbf */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe18dc2 */ __asm { TEST DL,0x1 }
    /* +0xe18dc5 */ __asm { JZ 0x7fffa5590f9c }
    /* +0xe18dcb */ __asm { MOV dword ptr [RBP + -0x20],0xb9312d9a }
    /* +0xe18dd2 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe18dd5 */ __asm { MOV dword ptr [RBP + -0x20],0x90a4bc0 }
    /* +0xe18ddc */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe18ddf */ __asm { MOV dword ptr [RBP + -0x20],0x95971bb5 }
    /* +0xe18de6 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe18de9 */ __asm { CMP EDX,0x531d08e5 }
    /* +0xe18def */ __asm { JBE 0x7fffa5590fa5 }
    /* +0xe18df5 */ __asm { MOV RDI,qword ptr [R10 + 0x18] }
    /* +0xe18df9 */ __asm { MOV dword ptr [RBP + -0x20],0xf4344ed9 }
    /* +0xe18e00 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe18e03 */ __asm { TEST EDX,EDX }
    /* +0xe18e05 */ __asm { JS 0x7fffa5588e09 }
    /* +0xe18e07 */ __asm { MOV DH,0xd2 }
    /* +0xe18e09 */ __asm { MOV EDX,0x6bc9535 }
    /* +0xe18e0e */ __asm { PUSHFQ }
    /* +0xe18e0f */ __asm { POP RAX }
    /* +0xe18e10 */ __asm { AND EAX,0x100 }
    /* +0xe18e15 */ __asm { ADD EDX,0xf9436acb }
    /* +0xe18e1b */ __asm { CMP EAX,EDX }
    /* +0xe18e1d */ __asm { NOP }
    /* +0xe18e1e */ __asm { NOP }
    /* +0xe18e1f */ __asm { NOP }
    /* +0xe18e20 */ __asm { NOP }
    /* +0xe18e21 */ __asm { NOP }
    /* +0xe18e22 */ __asm { MOV DX,0xdeb4 }
    /* +0xe18e26 */ __asm { ADD EDX,0xffa }
    /* +0xe18e2c */ __asm { XOR EDX,0xeee6 }
    /* +0xe18e32 */ __asm { MOVZX R11D,DX }
    /* +0xe18e36 */ __asm { MOV RSI,qword ptr GS:[R11] }
    /* +0xe18e3a */ __asm { MOV EDX,0x3cf35be4 }
    /* +0xe18e3f */ __asm { ADD EDX,0xc30bc09c }
    /* +0xe18e45 */ __asm { MOVSXD R11,EDX }
    /* +0xe18e48 */ __asm { LEA R9,[0x7fffa4792d78] }
    /* +0xe18e4f */ __asm { MOV EDX,dword ptr [R9 + R11*0x1] }
    /* +0xe18e53 */ __asm { CMP EDX,ESI }
    /* +0xe18e55 */ __asm { JZ 0x7fffa5588e93 }
    /* +0xe18e57 */ __asm { MOV R11W,0x2d58 }
    /* +0xe18e5c */ __asm { LEA R13,[0x7fffa478941e] }
    /* +0xe18e63 */ __asm { XOR R11D,0x99e1 }
    /* +0xe18e6a */ __asm { MOVSX R11,R11W }
    /* +0xe18e6e */ __asm { MOV AX,0xb5df }
    /* +0xe18e72 */ __asm { ADD EAX,-0x5 }
    /* +0xe18e75 */ __asm { MOVSX RBX,AX }
    /* +0xe18e79 */ __asm { LEA R9,[0x7fffa478953f] }
    /* +0xe18e80 */ __asm { LEA RCX,[R9 + R11*0x1] }
    /* +0xe18e84 */ __asm { ADD RCX,0x8 }
    /* +0xe18e88 */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0xe18e8e */ __asm { XCHG dword ptr [R13 + RBX*0x1],ESI }
    /* +0xe18e93 */ __asm { MOV R9W,0xc5cf }
    /* +0xe18e98 */ __asm { MOV EDX,0xf1192df3 }
    /* +0xe18e9d */ __asm { LEA R11,[0x7fffa47908e7] }
    /* +0xe18ea4 */ __asm { MOV R8W,0x15a9 }
    /* +0xe18ea9 */ __asm { LEA R10,[0x7fffa47863bd] }
    /* +0xe18eb0 */ __asm { ADD EDX,0xee6131e }
    /* +0xe18eb6 */ __asm { MOV AX,0x7fd8 }
    /* +0xe18eba */ __asm { MOVSX RCX,R9W }
    /* +0xe18ebe */ __asm { XOR RCX,0x23f4 }
    /* +0xe18ec5 */ __asm { MOV R10D,dword ptr [R10 + RCX*0x1 + 0x4] }
    /* +0xe18eca */ __asm { ADD EAX,-0x30 }
    /* +0xe18ecd */ __asm { ROL AX,0x1 }
    /* +0xe18ed0 */ __asm { MOVSX RCX,AX }
    /* +0xe18ed4 */ __asm { MOV R9,qword ptr [RBP + 0x458] }
    /* +0xe18edb */ __asm { INC R10D }
    /* +0xe18ede */ __asm { MOVSXD RDX,EDX }
    /* +0xe18ee1 */ __asm { MOV dword ptr [R11 + RDX*0x1 + 0x4],R10D }
    /* +0xe18ee6 */ __asm { MOV R11,qword ptr [R9 + RCX*0x1] }
    /* +0xe18eea */ __asm { ADD R8D,0xffffec40 }
    /* +0xe18ef1 */ __asm { MOVZX EAX,R8W }
    /* +0xe18ef5 */ __asm { XOR RAX,0x189 }
    /* +0xe18efb */ __asm { MOV R9,qword ptr GS:[RAX] }
    /* +0xe18eff */ __asm { ADD R11,qword ptr [R9 + 0x18] }
    /* +0xe18f03 */ __asm { ROL R11,0x6 }
    /* +0xe18f07 */ __asm { ADD R11,-0x7091665e }
    /* +0xe18f0e */ __asm { MOV R9,-0x2d43e7dad77fd663 }
    /* +0xe18f18 */ __asm { CMP R11,R9 }
    /* +0xe18f1b */ __asm { NOP }
    /* +0xe18f1c */ __asm { NOP }
    /* +0xe18f1d */ __asm { NOP }
    /* +0xe18f1e */ __asm { NOP }
    /* +0xe18f1f */ __asm { NOP }
    /* +0xe18f20 */ __asm { NOP }
    /* +0xe18f21 */ __asm { NOP }
    /* +0xe18f22 */ __asm { NOP }
    /* +0xe18f23 */ __asm { NOP }
    /* +0xe18f24 */ __asm { NOP }
    /* +0xe18f25 */ __asm { NOP }
    /* +0xe18f26 */ __asm { LEA R11,[0x7fffa47bd8c9] }
    /* +0xe18f2d */ __asm { MOV AX,0xff66 }
    /* +0xe18f31 */ __asm { ADD EAX,0x25dc }
    /* +0xe18f36 */ __asm { MOVSX R10,AX }
    /* +0xe18f3a */ __asm { XOR R10,-0x5ee4 }
    /* +0xe18f41 */ __asm { LEA R9,[0x7fffa478d912] }
    /* +0xe18f48 */ __asm { MOV AX,0x3c2f }
    /* +0xe18f4c */ __asm { ADD EAX,0x7455 }
    /* +0xe18f51 */ __asm { XOR EAX,0x52a3 }
    /* +0xe18f56 */ __asm { MOVSX RDX,AX }
    /* +0xe18f5a */ __asm { MOV R13,qword ptr [R11 + RDX*0x1] }
    /* +0xe18f5e */ __asm { CMP R13,qword ptr [R9 + R10*0x1] }
    /* +0xe18f62 */ __asm { JZ 0x7fffa5589243 }
    /* +0xe18f68 */ __asm { MOV R15,-0x415492473f68353b }
    /* +0xe18f72 */ __asm { LEA RBX,[0x7fffa4788aa9] }
    /* +0xe18f79 */ __asm { JMP 0x7fffa5588fac }
    /* +0xe18f80 */ __asm { MOV dword ptr [RBP + -0x20],0x10b8599e }
    /* +0xe18f87 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe18f8a */ __asm { LEA R11,[0x7fffa478d6ba] }
    /* +0xe18f91 */ __asm { MOV DX,0x658a }
    /* +0xe18f95 */ __asm { IMUL EDX,EDX,0x7f9f }
    /* +0xe18f9b */ __asm { ROR DX,CL }
    /* +0xe18f9e */ __asm { MOVSX R10,DX }
    /* +0xe18fa2 */ __asm { CMP R13,qword ptr [R11 + R10*0x1] }
    /* +0xe18fa6 */ __asm { JZ 0x7fffa5589243 }
    /* +0xe18fac */ __asm { MOV R12,R13 }
    /* +0xe18faf */ __asm { ADD R13,0x99 }
    /* +0xe18fb6 */ __asm { LEA R14,[R12 + 0x16] }
    /* +0xe18fbb */ __asm { NOP dword ptr [RAX + RAX*0x1] }
    /* +0xe18fc0 */ __asm { MOV DX,0x4c7 }
    /* +0xe18fc4 */ __asm { XOR EDX,0xffff9717 }
    /* +0xe18fca */ __asm { IMUL EDX,EDX,-0x7dc1 }
    /* +0xe18fd0 */ __asm { MOVZX R11D,DX }
    /* +0xe18fd4 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xe18fd8 */ __asm { CMP R11,R15 }
    /* +0xe18fdb */ __asm { NOP }
    /* +0xe18fdc */ __asm { NOP }
    /* +0xe18fdd */ __asm { NOP }
    /* +0xe18fde */ __asm { NOP }
    /* +0xe18fdf */ __asm { NOP }
    /* +0xe18fe0 */ __asm { MOV R11D,0x491cb7e }
    /* +0xe18fe6 */ __asm { XOR R11D,0x556519eb }
    /* +0xe18fed */ __asm { MOV EAX,0x45735569 }
    /* +0xe18ff2 */ __asm { XOR EAX,0x24fd38c1 }
    /* +0xe18ff7 */ __asm { CMP RAX,R11 }
    /* +0xe18ffa */ __asm { JG 0x7fffa5589040 }
    /* +0xe18ffc */ __asm { MOVZX R9D,uint8_t ptr [R12 + 0x49] }
    /* +0xe19002 */ __asm { MOVZX R10D,uint8_t ptr [R12 + 0x46] }
    /* +0xe19008 */ __asm { MOVZX ECX,uint8_t ptr [R12 + 0xe] }
    /* +0xe1900e */ __asm { SHL ECX,0x3 }
    /* +0xe19011 */ __asm { LEA R11,[R14 + RCX*0x1] }
    /* +0xe19015 */ __asm { MOVZX EDX,uint8_t ptr [R12 + 0x48] }
    /* +0xe1901b */ __asm { MOVZX EAX,uint8_t ptr [R12 + RCX*0x1 + 0x16] }
    /* +0xe19021 */ __asm { MOVZX ESI,uint8_t ptr [R12 + 0x43] }
    /* +0xe19027 */ __asm { MOVZX R8D,uint8_t ptr [R12 + 0x44] }
    /* +0xe1902d */ __asm { XOR AL,uint8_t ptr [R12 + 0x42] }
    /* +0xe19032 */ __asm { MOV ECX,0x629b5328 }
    /* +0xe19037 */ __asm { IMUL ECX,ECX,-0x61f644e3 }
    /* +0xe1903d */ __asm { JMP 0x7fffa5589095 }
    /* +0xe19040 */ __asm { MOV ECX,0xf23e8131 }
    /* +0xe19045 */ __asm { MOVZX R10D,uint8_t ptr [R12 + 0xe] }
    /* +0xe1904b */ __asm { SHL R10D,0x3 }
    /* +0xe1904f */ __asm { LEA R11,[R14 + R10*0x1] }
    /* +0xe19053 */ __asm { ADD ECX,0x683b3f7f }
    /* +0xe19059 */ __asm { MOVZX EDX,uint8_t ptr [R12 + 0x48] }
    /* +0xe1905f */ __asm { MOVZX R8D,uint8_t ptr [R12 + R10*0x1 + 0x16] }
    /* +0xe19065 */ __asm { MOVD XMM5,R8D }
    /* +0xe1906a */ __asm { MOVZX ESI,uint8_t ptr [R12 + 0x43] }
    /* +0xe19070 */ __asm { MOVZX R8D,uint8_t ptr [R12 + 0x44] }
    /* +0xe19076 */ __asm { MOVZX R10D,uint8_t ptr [R12 + 0x42] }
    /* +0xe1907c */ __asm { MOVD XMM3,R10D }
    /* +0xe19081 */ __asm { PXOR XMM3,XMM5 }
    /* +0xe19085 */ __asm { MOVD EAX,XMM3 }
    /* +0xe19089 */ __asm { MOVZX R9D,uint8_t ptr [R12 + 0x49] }
    /* +0xe1908f */ __asm { MOVZX R10D,uint8_t ptr [R12 + 0x46] }
    /* +0xe19095 */ __asm { XOR R8B,uint8_t ptr [R11 + 0x2] }
    /* +0xe19099 */ __asm { NOT AL }
    /* +0xe1909b */ __asm { XOR R10B,uint8_t ptr [R11 + 0x4] }
    /* +0xe1909f */ __asm { ROL AL,0x5 }
    /* +0xe190a2 */ __asm { MOVZX ESI,SIL }
    /* +0xe190a6 */ __asm { MOVD XMM5,ESI }
    /* +0xe190aa */ __asm { NOT R10B }
    /* +0xe190ad */ __asm { NOT R8B }
    /* +0xe190b0 */ __asm { ROL R8B,0x5 }
    /* +0xe190b4 */ __asm { ROL R10B,0x5 }
    /* +0xe190b8 */ __asm { MOV uint8_t ptr [RBP + -0x20],AL }
    /* +0xe190bb */ __asm { MOVZX EAX,uint8_t ptr [R12 + 0x47] }
    /* +0xe190c1 */ __asm { MOVZX ESI,uint8_t ptr [R11 + 0x1] }
    /* +0xe190c6 */ __asm { MOV uint8_t ptr [RBP + -0x1e],R8B }
    /* +0xe190ca */ __asm { MOVD XMM3,ESI }
    /* +0xe190ce */ __asm { PXOR XMM3,XMM5 }
    /* +0xe190d2 */ __asm { MOVD R8D,XMM3 }
    /* +0xe190d7 */ __asm { NOT R8B }
    /* +0xe190da */ __asm { MOVZX ESI,uint8_t ptr [R11 + 0x3] }
    /* +0xe190df */ __asm { MOV uint8_t ptr [RBP + -0x1c],R10B }
    /* +0xe190e3 */ __asm { XOR SIL,uint8_t ptr [R12 + 0x45] }
    /* +0xe190e8 */ __asm { NOT SIL }
    /* +0xe190eb */ __asm { XOR R9B,uint8_t ptr [R11 + 0x7] }
    /* +0xe190ef */ __asm { NOT R9B }
    /* +0xe190f2 */ __asm { ROL R9B,0x5 }
    /* +0xe190f6 */ __asm { ROL SIL,0x5 }
    /* +0xe190fa */ __asm { MOV uint8_t ptr [RBP + -0x1d],SIL }
    /* +0xe190fe */ __asm { XOR DL,uint8_t ptr [R11 + 0x6] }
    /* +0xe19102 */ __asm { NOT DL }
    /* +0xe19104 */ __asm { ROL DL,0x5 }
    /* +0xe19107 */ __asm { XOR AL,uint8_t ptr [R11 + 0x5] }
    /* +0xe1910b */ __asm { MOV uint8_t ptr [RBP + -0x1a],DL }
    /* +0xe1910e */ __asm { NOT AL }
    /* +0xe19110 */ __asm { ROL AL,0x5 }
    /* +0xe19113 */ __asm { MOV uint8_t ptr [RBP + -0x19],R9B }
    /* +0xe19117 */ __asm { MOV uint8_t ptr [RBP + -0x1b],AL }
    /* +0xe1911a */ __asm { ROL R8B,0x5 }
    /* +0xe1911e */ __asm { MOV uint8_t ptr [RBP + -0x1f],R8B }
    /* +0xe19122 */ __asm { CMP RDI,qword ptr [RBP + -0x20] }
    /* +0xe19126 */ __asm { JC 0x7fffa5588f80 }
    /* +0xe1912c */ __asm { MOVZX R11D,uint8_t ptr [R12 + 0x57] }
    /* +0xe19132 */ __asm { MOVZX R9D,uint8_t ptr [R12 + R11*0x8 + 0x59] }
    /* +0xe19138 */ __asm { NOT R9B }
    /* +0xe1913b */ __asm { ROL R9B,0x5 }
    /* +0xe1913f */ __asm { MOV uint8_t ptr [RBP + -0x20],R9B }
    /* +0xe19143 */ __asm { MOVZX R9D,uint8_t ptr [R12 + R11*0x8 + 0x5a] }
    /* +0xe19149 */ __asm { NOT R9B }
    /* +0xe1914c */ __asm { ROL R9B,0x5 }
    /* +0xe19150 */ __asm { MOV uint8_t ptr [RBP + -0x1f],R9B }
    /* +0xe19154 */ __asm { MOVZX R9D,uint8_t ptr [R12 + R11*0x8 + 0x5b] }
    /* +0xe1915a */ __asm { NOT R9B }
    /* +0xe1915d */ __asm { ROL R9B,0x5 }
    /* +0xe19161 */ __asm { MOV uint8_t ptr [RBP + -0x1e],R9B }
    /* +0xe19165 */ __asm { MOVZX R9D,uint8_t ptr [R12 + R11*0x8 + 0x5c] }
    /* +0xe1916b */ __asm { NOT R9B }
    /* +0xe1916e */ __asm { ROL R9B,0x5 }
    /* +0xe19172 */ __asm { MOV uint8_t ptr [RBP + -0x1d],R9B }
    /* +0xe19176 */ __asm { MOVZX R9D,uint8_t ptr [R12 + R11*0x8 + 0x5d] }
    /* +0xe1917c */ __asm { NOT R9B }
    /* +0xe1917f */ __asm { ROL R9B,0x5 }
    /* +0xe19183 */ __asm { MOV uint8_t ptr [RBP + -0x1c],R9B }
    /* +0xe19187 */ __asm { MOVZX R9D,uint8_t ptr [R12 + R11*0x8 + 0x5e] }
    /* +0xe1918d */ __asm { NOT R9B }
    /* +0xe19190 */ __asm { ROL R9B,0x5 }
    /* +0xe19194 */ __asm { MOV uint8_t ptr [RBP + -0x1b],R9B }
    /* +0xe19198 */ __asm { MOVZX R9D,uint8_t ptr [R12 + R11*0x8 + 0x5f] }
    /* +0xe1919e */ __asm { NOT R9B }
    /* +0xe191a1 */ __asm { ROL R9B,0x5 }
    /* +0xe191a5 */ __asm { MOV uint8_t ptr [RBP + -0x1a],R9B }
    /* +0xe191a9 */ __asm { MOVZX R9D,uint8_t ptr [R12 + R11*0x8 + 0x60] }
    /* +0xe191af */ __asm { NOT R9B }
    /* +0xe191b2 */ __asm { ROL R9B,0x5 }
    /* +0xe191b6 */ __asm { MOV uint8_t ptr [RBP + -0x19],R9B }
    /* +0xe191ba */ __asm { CMP RDI,qword ptr [RBP + -0x20] }
    /* +0xe191be */ __asm { JNC 0x7fffa5588f80 }
    /* +0xe191c4 */ __asm { PUSHFQ }
    /* +0xe191c5 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe191cd */ __asm { POPFQ }
    /* +0xe191ce */ __asm { MOV dword ptr [RBP + -0x20],0x5e0054a6 }
    /* +0xe191d5 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe191d8 */ __asm { TEST EDX,EDX }
    /* +0xe191da */ __asm { NOP }
    /* +0xe191db */ __asm { NOP }
    /* +0xe191dc */ __asm { NOP }
    /* +0xe191dd */ __asm { NOP }
    /* +0xe191de */ __asm { NOP }
    /* +0xe191df */ __asm { MOV DX,0x93e3 }
    /* +0xe191e3 */ __asm { LEA R11,[0x7fffa4786754] }
    /* +0xe191ea */ __asm { MOV R9,RBX }
    /* +0xe191ed */ __asm { MOV R8W,0x8f1c }
    /* +0xe191f2 */ __asm { XOR EDX,0x94 }
    /* +0xe191f8 */ __asm { MOVD XMM5,EDX }
    /* +0xe191fc */ __asm { MOVD XMM3,ECX }
    /* +0xe19200 */ __asm { OR ECX,0x1 }
    /* +0xe19203 */ __asm { IMUL ECX,R8D }
    /* +0xe19207 */ __asm { ADD ECX,0x3c0 }
    /* +0xe1920d */ __asm { MOVSX R10,CX }
    /* +0xe19211 */ __asm { PSUBW XMM5,XMM3 }
    /* +0xe19215 */ __asm { MOVD EAX,XMM5 }
    /* +0xe19219 */ __asm { MOVSX RDX,AX }
    /* +0xe1921d */ __asm { MOV R8,qword ptr [R9 + RDX*0x1] }
    /* +0xe19221 */ __asm { LEA RSI,[R8 + -0x99] }
    /* +0xe19228 */ __asm { SUB R8,R13 }
    /* +0xe1922b */ __asm { MOV qword ptr [R11 + R10*0x1],RSI }
    /* +0xe1922f */ __asm { MOV RDX,R13 }
    /* +0xe19232 */ __asm { MOV RCX,R12 }
    /* +0xe19235 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xe1923a */ __asm { CMP R12,RSI }
    /* +0xe1923d */ __asm { JNZ 0x7fffa5588fc0 }
    /* +0xe19243 */ __asm { MOV DX,0xc656 }
    /* +0xe19247 */ __asm { ADD EDX,0x39da }
    /* +0xe1924d */ __asm { MOVZX R11D,DX }
    /* +0xe19251 */ __asm { MOV DX,0x270c }
    /* +0xe19255 */ __asm { MOV R9D,0xf88 }
    /* +0xe1925b */ __asm { ADD R9,qword ptr GS:[R11] }
    /* +0xe1925f */ __asm { XOR EDX,0x27cc }
    /* +0xe19265 */ __asm { ROL DX,0xe }
    /* +0xe19269 */ __asm { MOVZX R11D,DX }
    /* +0xe1926d */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xe19271 */ __asm { OR R9,qword ptr [R11 + 0x60] }
    /* +0xe19275 */ __asm { MOV R11,0x36b97c77736e9fdf }
    /* +0xe1927f */ __asm { CMP R9,R11 }
    /* +0xe19282 */ __asm { NOP }
    /* +0xe19283 */ __asm { NOP }
    /* +0xe19284 */ __asm { NOP }
    /* +0xe19285 */ __asm { NOP }
    /* +0xe19286 */ __asm { NOP }
    /* +0xe19287 */ __asm { LEA R11,[0x7fffa478fe09] }
    /* +0xe1928e */ __asm { MOV AX,0x392c }
    /* +0xe19292 */ __asm { MOV EDX,0x43a9a367 }
    /* +0xe19297 */ __asm { LEA R9,[0x7fffa4786e62] }
    /* +0xe1929e */ __asm { IMUL EDX,EDX,0x37ad7271 }
    /* +0xe192a4 */ __asm { MOVSXD RDX,EDX }
    /* +0xe192a7 */ __asm { ADD EAX,0xffffa26a }
    /* +0xe192ac */ __asm { MOVSX R10,AX }
    /* +0xe192b0 */ __asm { MOV R8D,0x6ca85f3d }
    /* +0xe192b6 */ __asm { XOR R8D,0x86d761e6 }
    /* +0xe192bd */ __asm { MOVSXD RAX,R8D }
    /* +0xe192c0 */ __asm { MOV R8D,0x3a86b64b }
    /* +0xe192c6 */ __asm { IMUL R8D,R8D,0x7c964a6d }
    /* +0xe192cd */ __asm { MOV R10D,dword ptr [R9 + R10*0x1 + 0x4] }
    /* +0xe192d2 */ __asm { XOR R9D,R9D }
    /* +0xe192d5 */ __asm { XOR ECX,ECX }
    /* +0xe192d7 */ __asm { DEC R10D }
    /* +0xe192da */ __asm { SETS R9B }
    /* +0xe192de */ __asm { SETZ CL }
    /* +0xe192e1 */ __asm { CMP RAX,RDX }
    /* +0xe192e4 */ __asm { MOVSXD RDX,R8D }
    /* +0xe192e7 */ __asm { MOV dword ptr [R11 + RDX*0x1 + 0x4],R10D }
    /* +0xe192ec */ __asm { CMOVBE R9D,ECX }
    /* +0xe192f0 */ __asm { CMP R9B,0x1 }
    /* +0xe192f4 */ __asm { JNZ 0x7fffa5589334 }
    /* +0xe192f6 */ __asm { MOV EDX,0xc60b5226 }
    /* +0xe192fb */ __asm { ADD EDX,0x39f41a47 }
    /* +0xe19301 */ __asm { MOVSXD R11,EDX }
    /* +0xe19304 */ __asm { LEA R9,[0x7fffa478dd8b] }
    /* +0xe1930b */ __asm { XOR EDX,EDX }
    /* +0xe1930d */ __asm { XCHG dword ptr [R9 + R11*0x1],EDX }
    /* +0xe19311 */ __asm { MOV EDX,0xcde37de6 }
    /* +0xe19316 */ __asm { LEA R11,[0x7fffa478e3ba] }
    /* +0xe1931d */ __asm { ADD EDX,0x321be858 }
    /* +0xe19323 */ __asm { MOVSXD R10,EDX }
    /* +0xe19326 */ __asm { LEA RCX,[R11 + R10*0x1] }
    /* +0xe1932a */ __asm { ADD RCX,0x8 }
    /* +0xe1932e */ __asm { CALL qword ptr [0x7fffa5877640] }
    /* +0xe19334 */ __asm { MOV DX,0x3fa9 }
    /* +0xe19338 */ __asm { XOR EDX,0x6d49 }
    /* +0xe1933e */ __asm { IMUL EDX,EDX,-0x8b }
    /* +0xe19344 */ __asm { MOVZX R11D,DX }
    /* +0xe19348 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xe1934c */ __asm { MOV R9,0x17b068fa98b50bc7 }
    /* +0xe19356 */ __asm { CMP qword ptr [R11 + 0x18],R9 }
    /* +0xe1935a */ __asm { JZ 0x7fffa55893cf }
    /* +0xe1935c */ __asm { MOV dword ptr [RBP + -0x20],0x43e2822c }
    /* +0xe19363 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe19366 */ __asm { CMP EDX,0x10715b61 }
    /* +0xe1936c */ __asm { JBE 0x7fffa5590fb5 }
    /* +0xe19372 */ __asm { MOV dword ptr [RBP + -0x20],0x6be52894 }
    /* +0xe19379 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe1937c */ __asm { MOV EDX,0xb6fd6c5c }
    /* +0xe19381 */ __asm { IMUL EDX,EDX,0x72c9f671 }
    /* +0xe19387 */ __asm { ADD EDX,0x851496bb }
    /* +0xe1938d */ __asm { MOV dword ptr [RBP + -0x20],EDX }
    /* +0xe19390 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe19393 */ __asm { TEST DL,0x1 }
    /* +0xe19396 */ __asm { JZ 0x7fffa5590fc7 }
    /* +0xe1939c */ __asm { MOV dword ptr [RBP + -0x20],0x9949e124 }
    /* +0xe193a3 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe193a6 */ __asm { TEST DL,0x1 }
    /* +0xe193a9 */ __asm { JZ 0x7fffa5590cb1 }
    /* +0xe193af */ __asm { IMUL RAX,qword ptr [R13 + 0x78fae9],-0x3c38b700 }
    /* +0xe193ba */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xe193bc */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xe193be */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xe193c5 */ __asm { NOP }
    /* +0xe193c7 */ __asm { MOV [0x222f14fffff9e9e9],RAX }
    /* +0xe193d2 */ __asm { CMP uint8_t ptr [RSI + -0x14ac9285],AL }
    /* +0xe193d8 */ __asm { ADD dword ptr [RSI + -0x1f],-0x1e }
    /* +0xe193dc */ __asm { AND EBP,dword ptr [RSI + 0xd07a465] }
    /* +0xe193e2 */ __asm { ADD EBX,dword ptr [RDI + -0x16ed7361] }
    /* +0xe193e8 */ __asm { JA 0x7fffa55893e3 }
    /* +0xe193ec */ __asm { TEST dword ptr [R14 + 0xf02f983],0xfff9878d }
    /* +0xe193f7 */ __asm { JMP qword ptr [RSI + -0x46] }
    /* +0xe194c2 */ __asm { MOV dword ptr [RBP + -0x20],0x81029292 }
    /* +0xe194c9 */ __asm { MOV EDX,dword ptr [RBP + -0x20] }
    /* +0xe194cc */ __asm { TEST DL,0x1 }
    /* +0xe194cf */ __asm { NOP }
    /* +0xe194d0 */ __asm { NOP }
    /* +0xe194d1 */ __asm { NOP }
    /* +0xe194d2 */ __asm { NOP }
    /* +0xe194d3 */ __asm { NOP }
    /* +0xe194d4 */ __asm { MOV EDX,0xab4ad24d }
    /* +0xe194d9 */ __asm { MOV R11D,0xa6ac2536 }
    /* +0xe194df */ __asm { IMUL EAX,EDX,0x4e719099 }
    /* +0xe194e5 */ __asm { XOR R11D,0xf175d71c }
    /* +0xe194ec */ __asm { ADD R11D,0xe23fe8f3 }
    /* +0xe194f3 */ __asm { CMP RAX,R11 }
    /* +0xe194f6 */ __asm { SETA R9B }
    /* +0xe194fa */ __asm { CMP qword ptr [RBP + 0x368],0x10 }
    /* +0xe19502 */ __asm { JC 0x7fffa558ab1a }
    /* +0xe19508 */ __asm { MOV R11,qword ptr [RBP + 0x350] }
    /* +0xe1950f */ __asm { JMP 0x7fffa558ab21 }
    /* +0xe1ab1a */ __asm { LEA R11,[RBP + 0x350] }
    /* +0xe1ab21 */ __asm { MOVZX R10D,uint8_t ptr [R11] }
    /* +0xe1ab25 */ __asm { TEST R10B,R10B }
    /* +0xe1ab28 */ __asm { SETNZ DL }
    /* +0xe1ab2b */ __asm { XOR DL,R9B }
    /* +0xe1ab2e */ __asm { JNZ 0x7fffa558d13f }
    /* +0xe1ab34 */ __asm { LEA RDX,[R11 + 0x1] }
    /* +0xe1ab38 */ __asm { MOV RBX,0x3e149def2df35f59 }
    /* +0xe1ab42 */ __asm { MOV R9,0x8000000081b }
    /* +0xe1ab4c */ __asm { MOV R8D,R10D }
    /* +0xe1ab4f */ __asm { NOP }
    /* +0xe1ab50 */ __asm { MOV ECX,R8D }
    /* +0xe1ab53 */ __asm { LEA EAX,[RCX + -0x41] }
    /* +0xe1ab56 */ __asm { MOVZX EDI,R8B }
    /* +0xe1ab5a */ __asm { MOVZX R8D,uint8_t ptr [RDX] }
    /* +0xe1ab5e */ __asm { OR CL,0x20 }
    /* +0xe1ab61 */ __asm { CMP AL,0x1a }
    /* +0xe1ab63 */ __asm { MOVZX EAX,CL }
    /* +0xe1ab66 */ __asm { CMOVNC EAX,EDI }
    /* +0xe1ab69 */ __asm { MOVZX EAX,AL }
    /* +0xe1ab6c */ __asm { XOR RBX,RAX }
    /* +0xe1ab6f */ __asm { IMUL RBX,R9 }
    /* +0xe1ab73 */ __asm { TEST R8B,R8B }
    /* +0xe1ab76 */ __asm { JZ 0x7fffa558ab7d }
    /* +0xe1ab78 */ __asm { INC RDX }
    /* +0xe1ab7b */ __asm { JMP 0x7fffa558ab50 }
    /* +0xe1ab7d */ __asm { MOVQ XMM5,RBX }
    /* +0xe1ab82 */ __asm { MOV EDX,0xd0da5fd2 }
    /* +0xe1ab87 */ __asm { IMUL EDX,EDX,0x50fcb331 }
    /* +0xe1ab8d */ __asm { MOVD XMM3,EDX }
    /* +0xe1ab91 */ __asm { PXOR XMM3,XMM5 }
    /* +0xe1ab95 */ __asm { MOVQ RDX,XMM3 }
    /* +0xe1ab9a */ __asm { MOV RAX,0xd33125b9f6aa35 }
    /* +0xe1aba4 */ __asm { IMUL RAX,RDX }
    /* +0xe1aba8 */ __asm { MOV RDX,-0x5121814e09e7cb3c }
    /* +0xe1abb2 */ __asm { ADD RDX,RAX }
    /* +0xe1abb5 */ __asm { MOV RAX,-0x7fb655cf6185def2 }
    /* +0xe1abbf */ __asm { CMP RDX,RAX }
    /* +0xe1abc2 */ __asm { JZ 0x7fffa558add6 }
    /* +0xe1abc8 */ __asm { INC R11 }
    /* +0xe1abcb */ __asm { MOV RAX,0x3e149def2df35f59 }
    /* +0xe1abd5 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xe1abe0 */ __asm { LEA EDX,[R10 + -0x41] }
    /* +0xe1abe4 */ __asm { MOVZX R8D,R10B }
    /* +0xe1abe8 */ __asm { OR R10B,0x20 }
    /* +0xe1abec */ __asm { MOVZX ECX,uint8_t ptr [R11] }
    /* +0xe1abf0 */ __asm { CMP DL,0x1a }
    /* +0xe1abf3 */ __asm { MOVZX EDX,R10B }
    /* +0xe1abf7 */ __asm { CMOVNC EDX,R8D }
    /* +0xe1abfb */ __asm { MOVZX EDX,DL }
    /* +0xe1abfe */ __asm { XOR RAX,RDX }
    /* +0xe1ac01 */ __asm { IMUL RAX,R9 }
    /* +0xe1ac05 */ __asm { INC R11 }
    /* +0xe1ac08 */ __asm { MOV R10D,ECX }
    /* +0xe1ac0b */ __asm { TEST CL,CL }
    /* +0xe1ac0d */ __asm { JNZ 0x7fffa558abe0 }
    /* +0xe1ac0f */ __asm { MOV R11,-0x4a2788a92ab064fc }
    /* +0xe1ac19 */ __asm { CMP RAX,R11 }
    /* +0xe1ac1c */ __asm { JNZ 0x7fffa558d13f }
    /* +0xe1ac22 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xe1ac29 */ __asm { NOP }
    /* +0xe1ac2b */ __asm { MOV R11,0x0 }
    /* +0xe1ac32 */ __asm { MOV DX,0xbf1d }
    /* +0xe1ac36 */ __asm { ADD EDX,0x3b14 }
    /* +0xe1ac3c */ __asm { XOR EDX,0xfa01 }
    /* +0xe1ac42 */ __asm { MOVZX R11D,DX }
    /* +0xe1ac46 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xe1ac4a */ __asm { MOV R9,0x77e87a37809e9213 }
    /* +0xe1ac54 */ __asm { CMP qword ptr [R11 + 0x60],R9 }
    /* +0xe1ac58 */ __asm { NOP }
    /* +0xe1ac59 */ __asm { NOP }
    /* +0xe1ac5a */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa5593090  |  RVA: 0xe23090  |  Size: 253 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5593090(void)

{
  iRam00007fffa4785e1c = iRam00007fffa4785e1c + -1;
  if (iRam00007fffa4785e1c == 0) {
    LOCK();
    uRam00007fffa4785e18 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(0x7fffa4785e20);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5593190  |  RVA: 0xe23190  |  Size: 126 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5593190(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x268) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5593210  |  RVA: 0xe23210  |  Size: 1478 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa559377f) */

void Unwind_7fffa5593210(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  uint32_t uVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  
  if (7 < *(uint64_t *)(param_2 + 0x2b8)) {
    *(uint64_t *)(param_2 + 0x248) = *(uint64_t *)(param_2 + 0x2a0);
    *(uint32_t *)(param_2 + 0x298) = 0xd65c0581;
    *(uint32_t *)(param_2 + 0x290) = 0x1851153e;
    *(code **)(param_2 + 0x268) = FUN_7fffa5687c30;
    *(uint64_t *)(param_2 + 0x430) = 0x6e852765;
    uVar5 = ~*(uint64_t *)(param_2 + 0x338);
    *(uint64_t *)(param_2 + 0x220) =
         (*(uint64_t *)(param_2 + 0x338) & 0x6e852765 & ~in_RAX) * -0x2cd3ad40;
    lVar4 = ((in_RAX | 0xffffffff917ad89a) ^ uVar5) * -0x34aca346;
    *(uint32_t *)(param_2 + 600) = 0xf82709fa;
    (**(code **)(param_2 + 0x268))
              (lVar4,*(int *)(param_2 + 0x298) * -0x3e0a2e13 + -0x3f2cf8f0,
               *(uint64_t *)(param_2 + 0x248) ^ *(uint64_t *)(param_2 + 0x248) >> 0x3d,
               (in_RAX ^ 0x6e852765 ^ uVar5) * 0x4620f40c + lVar4);
  }
  *(uint16_t *)(param_2 + 0x2a0) = 0;
  *(uint64_t *)(param_2 + 0x2b8) = 7;
  *(uint64_t *)(param_2 + 0x2b0) = 0;
  if (7 < *(uint64_t *)(param_2 + 0x2f8)) {
    *(uint64_t *)(param_2 + 0x268) = 0xffffffffd0ec612e;
    *(uint64_t *)(param_2 + 0x290) = 0xfba76dd5;
    *(uint64_t *)(param_2 + 0x298) = 0xffffffffadd76255;
    *(uint64_t *)(param_2 + 0x430) = 0x13a49e1a;
    *(uint32_t *)(param_2 + 0x380) = 0xe11658d2;
    *(code **)(param_2 + 0x248) = FUN_7fffa5687c30;
    uVar2 = (uint32_t)*(uint64_t *)(param_2 + 800);
    uVar7 = *(uint64_t *)(param_2 + 800) & 0xffffffff;
    uVar5 = *(uint64_t *)(param_2 + 0x250);
    uVar1 = *(uint16_t *)(param_2 + 0x388);
    uVar9 = ~(uint64_t)uVar1;
    uVar8 = ~uVar7;
    *(uint64_t *)(param_2 + 0x228) = uVar9;
    *(uint64_t *)(param_2 + 0x220) = (uVar5 | uVar9 | uVar8) * 0x8175c0b0;
    uVar10 = ~uVar5;
    *(uint64_t *)(param_2 + 0x2c8) = ((uVar9 | uVar8) & uVar10) * -0x8175c0b0;
    uVar3 = (uint64_t)((uint32_t)uVar9 & uVar2);
    *(uint64_t *)(param_2 + 0x338) = (uint64_t)uVar1;
    *(uint64_t *)(param_2 + 600) = *(uint64_t *)(param_2 + 0x2e0) >> 0x3d;
    uVar11 = (uint64_t)((uVar2 ^ uVar1) & (uint32_t)uVar5);
    *(uint64_t *)(param_2 + 0x288) = uVar11 * -0x11994415c;
    uVar9 = uVar9 * uVar7;
    if ((int64_t)(*(int *)(param_2 + 0x380) * 0xc9a9707) <= *(int64_t *)(param_2 + 0x430)) {
      uVar9 = uVar3;
    }
    uVar6 = (uVar9 & uVar10) * -0xa52289c8;
    uVar9 = uVar7 + 1;
    if (0x291abb06 < *(int64_t *)(param_2 + 0x290)) {
      uVar9 = uVar8;
    }
    lVar4 = (uVar10 | uVar3) - ((uVar9 | *(uint64_t *)(param_2 + 0x338)) ^ uVar5);
    uVar3 = (uint64_t)((uVar2 | uVar1) & (uint32_t)uVar10) * -0xb943c165 +
            *(int64_t *)(param_2 + 0x288) + *(int64_t *)(param_2 + 0x2c8) +
            *(int64_t *)(param_2 + 0x220) +
            ((uVar8 ^ *(uint64_t *)(param_2 + 0x338)) & uVar5) * -0x13ab98215 +
            uVar11 * -0x212540b9 + lVar4 * 0xa52289c8;
    uVar9 = uVar3 ^ uVar6;
    if (*(uint64_t *)(param_2 + 0x298) < *(uint64_t *)(param_2 + 0x268)) {
      uVar9 = uVar3 + uVar6;
    }
    (**(code **)(param_2 + 0x248))
              ((~(uVar5 | uVar7) & *(uint64_t *)(param_2 + 0x228)) * -0xb943c165,lVar4,
               (uint64_t)*(uint32_t *)(param_2 + 600) ^ *(uint64_t *)(param_2 + 0x2e0),uVar9);
  }
  if ((*(char *)(param_2 + 0x3f0) == '\x01') && (0xf < *(uint64_t *)(param_2 + 1000))) {
    FUN_7fffa5687c30();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa55937e0  |  RVA: 0xe237e0  |  Size: 165 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55937e0(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x78)) {
    FUN_7fffa5687c30(param_1,FUN_7fffa5687c30,
                     *(uint64_t *)(param_2 + 0x60) >> 0x3d ^ *(uint64_t *)(param_2 + 0x60));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5593890  |  RVA: 0xe23890  |  Size: 12070 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5593890(void) {
    /* +0xe23890 */ __asm { PUSH RBP }
    /* +0xe23891 */ __asm { PUSH RSI }
    /* +0xe23892 */ __asm { PUSH RBX }
    /* +0xe23893 */ __asm { PUSH R13 }
    /* +0xe23895 */ __asm { PUSH R12 }
    /* +0xe23897 */ __asm { PUSH R15 }
    /* +0xe23899 */ __asm { PUSH RDI }
    /* +0xe2389a */ __asm { PUSH R14 }
    /* +0xe2389c */ __asm { SUB RSP,0x5a8 }
    /* +0xe238a3 */ __asm { MOV DX,0x3533 }
    /* +0xe238a7 */ __asm { ADD EDX,0xffffcb8d }
    /* +0xe238ad */ __asm { ROL DX,0xe }
    /* +0xe238b1 */ __asm { MOVZX R8D,DX }
    /* +0xe238b5 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0xe238b9 */ __asm { MOV RCX,-0x681be12085af9ace }
    /* +0xe238c3 */ __asm { ROL RAX,0x23 }
    /* +0xe238c7 */ __asm { ADD RAX,0x668c967 }
    /* +0xe238cd */ __asm { ADD RCX,-0x1c1c4b09 }
    /* +0xe238d4 */ __asm { CMP RCX,RAX }
    /* +0xe238d7 */ __asm { JZ 0x7fffa559585b }
    /* +0xe238dd */ __asm { MOV dword ptr [RSP + 0x60],0x8c61ce69 }
    /* +0xe238e5 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xe238e9 */ __asm { MOV EDX,0xc572dca1 }
    /* +0xe238ee */ __asm { MOV ECX,0xedfffa45 }
    /* +0xe238f3 */ __asm { SUB ECX,EDX }
    /* +0xe238f5 */ __asm { MOV dword ptr [RSP + 0x60],ECX }
    /* +0xe238f9 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xe238fd */ __asm { MOV RBX,-0x7cc6940b51e459e7 }
    /* +0xe23907 */ __asm { MOV RCX,0x4fab0fda8f9c728d }
    /* +0xe23911 */ __asm { MOV R11,-0x7c9a946e51875990 }
    /* +0xe2391b */ __asm { MOV R10,0x3150cb3deabed324 }
    /* +0xe23925 */ __asm { MOV R9,0x1f40b4d90d57e4bf }
    /* +0xe2392f */ __asm { MOV EDX,0x8858c476 }
    /* +0xe23934 */ __asm { IMUL R14D,EDX,0x571bb65b }
    /* +0xe2393b */ __asm { MOV RBP,0x4fd20fa98ffd72c8 }
    /* +0xe23945 */ __asm { MOV RAX,-0x4fa0cad969fb0e4f }
    /* +0xe2394f */ __asm { XOR R14D,0x58e4fc95 }
    /* +0xe23956 */ __asm { MOV RDX,-0x14c21ecc66b14862 }
    /* +0xe23960 */ __asm { MOV R13D,0x85183e25 }
    /* +0xe23966 */ __asm { MOV R8,-0x7e6df35855008406 }
    /* +0xe23970 */ __asm { IMUL R15D,R13D,-0x1e9d1c13 }
    /* +0xe23977 */ __asm { ROL R15D,0x9 }
    /* +0xe2397b */ __asm { MOV RDI,0x1972575809da0937 }
    /* +0xe23985 */ __asm { CMP R15,R14 }
    /* +0xe23988 */ __asm { JLE 0x7fffa55939dc }
    /* +0xe2398a */ __asm { MOV R13D,0xdac40eba }
    /* +0xe23990 */ __asm { MOV R14,-0x7e04f32c556e8445 }
    /* +0xe2399a */ __asm { MOV RSI,0x1913573d09b20974 }
    /* +0xe239a4 */ __asm { MOV qword ptr [RSP + 0x558],RBX }
    /* +0xe239ac */ __asm { MOV qword ptr [RSP + 0x570],RSI }
    /* +0xe239b4 */ __asm { MOV qword ptr [RSP + 0x560],RBP }
    /* +0xe239bc */ __asm { MOV R15,0x1f36b4bc0d13e4e3 }
    /* +0xe239c6 */ __asm { MOV RSI,-0x4fa0cad969fb0e1e }
    /* +0xe239d0 */ __asm { XOR R13D,0x4cf47b43 }
    /* +0xe239d7 */ __asm { MOVSXD R12,R13D }
    /* +0xe239da */ __asm { JMP 0x7fffa5593a28 }
    /* +0xe239dc */ __asm { MOV R14,-0x7e04f32c556e8445 }
    /* +0xe239e6 */ __asm { MOV RBX,0x1913573d09b20974 }
    /* +0xe239f0 */ __asm { MOV RSI,-0x4fa0cad969fb0e1e }
    /* +0xe239fa */ __asm { MOV R13D,0xb5d1127c }
    /* +0xe23a00 */ __asm { ADD R13D,0x6312ce96 }
    /* +0xe23a07 */ __asm { ROL R13D,0x9 }
    /* +0xe23a0b */ __asm { MOVSXD R12,R13D }
    /* +0xe23a0e */ __asm { MOV R15,0x1f36b4bc0d13e4e3 }
    /* +0xe23a18 */ __asm { MOV qword ptr [RSP + 0x560],RBP }
    /* +0xe23a20 */ __asm { MOV qword ptr [RSP + 0x570],RBX }
    /* +0xe23a28 */ __asm { LEA RBX,[RSP + 0x60] }
    /* +0xe23a2d */ __asm { MOV qword ptr [RSP + 0x588],RDX }
    /* +0xe23a35 */ __asm { MOV qword ptr [RSP + 0x550],R9 }
    /* +0xe23a3d */ __asm { MOV qword ptr [RSP + 0x568],R14 }
    /* +0xe23a45 */ __asm { MOV qword ptr [RSP + 0x580],RSI }
    /* +0xe23a4d */ __asm { MOV R9,0x311fcb78eae1d350 }
    /* +0xe23a57 */ __asm { MOV qword ptr [RSP + 0x578],R9 }
    /* +0xe23a5f */ __asm { MOV qword ptr [RSP + 0x98],RDX }
    /* +0xe23a67 */ __asm { MOV qword ptr [RSP + 0x60],R15 }
    /* +0xe23a6c */ __asm { MOV qword ptr [RSP + 0x80],RDI }
    /* +0xe23a74 */ __asm { MOVAPS XMM5,xmmword ptr [RSP + 0x550] }
    /* +0xe23a7c */ __asm { MOV qword ptr [RSP + 0x90],RAX }
    /* +0xe23a84 */ __asm { MOVAPS XMM2,xmmword ptr [RSP + 0x570] }
    /* +0xe23a8c */ __asm { MOVAPS XMM1,xmmword ptr [RSP + 0x580] }
    /* +0xe23a94 */ __asm { XORPS XMM1,xmmword ptr [RBX + 0x30] }
    /* +0xe23a98 */ __asm { MOV qword ptr [RSP + 0x68],R11 }
    /* +0xe23a9d */ __asm { MOV qword ptr [RSP + 0x70],RCX }
    /* +0xe23aa2 */ __asm { MOV qword ptr [RSP + 0x78],R8 }
    /* +0xe23aa7 */ __asm { MOV qword ptr [RSP + 0x88],R10 }
    /* +0xe23aaf */ __asm { XORPS XMM5,xmmword ptr [RBX] }
    /* +0xe23ab2 */ __asm { XORPS XMM2,xmmword ptr [RBX + 0x20] }
    /* +0xe23ab6 */ __asm { MOVAPS xmmword ptr [RSP + 0x550],XMM5 }
    /* +0xe23abe */ __asm { MOVAPS XMM5,xmmword ptr [RBX + 0x10] }
    /* +0xe23ac2 */ __asm { MOVAPS xmmword ptr [RSP + 0x580],XMM1 }
    /* +0xe23aca */ __asm { XORPS XMM5,xmmword ptr [RSP + 0x560] }
    /* +0xe23ad2 */ __asm { MOVAPS xmmword ptr [RSP + 0x570],XMM2 }
    /* +0xe23ada */ __asm { MOVAPS xmmword ptr [RSP + 0x560],XMM5 }
    /* +0xe23ae2 */ __asm { MOV dword ptr [RSP + 0x60],0x800fc3af }
    /* +0xe23aea */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xe23aee */ __asm { CMP EDX,0x3d9667e3 }
    /* +0xe23af4 */ __asm { JBE 0x7fffa5595872 }
    /* +0xe23afa */ __asm { PUSHFQ }
    /* +0xe23afb */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe23b03 */ __asm { POPFQ }
    /* +0xe23b04 */ __asm { LEA RAX,[RSP + 0x550] }
    /* +0xe23b0c */ __asm { MOV qword ptr [RSP + 0x5a0],RAX }
    /* +0xe23b14 */ __asm { MOV dword ptr [RSP + 0x598],0x320032 }
    /* +0xe23b1f */ __asm { MOV dword ptr [RSP + 0x60],0x2221050 }
    /* +0xe23b27 */ __asm { MOV EDX,dword ptr [RSP + 0x60] }
    /* +0xe23b2b */ __asm { TEST EDX,EDX }
    /* +0xe23b2d */ __asm { NOP }
    /* +0xe23b2e */ __asm { NOP }
    /* +0xe23b2f */ __asm { NOP }
    /* +0xe23b30 */ __asm { NOP }
    /* +0xe23b31 */ __asm { NOP }
    /* +0xe23b32 */ __asm { PUSHFQ }
    /* +0xe23b33 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe23b3b */ __asm { POPFQ }
    /* +0xe23b3c */ __asm { MOV qword ptr [RSP + 0x68],0x0 }
    /* +0xe23b45 */ __asm { MOV dword ptr [RSP + 0x60],0x30 }
    /* +0xe23b4d */ __asm { LEA RAX,[RSP + 0x598] }
    /* +0xe23b55 */ __asm { MOV qword ptr [RSP + 0x70],RAX }
    /* +0xe23b5a */ __asm { MOV dword ptr [RSP + 0x78],0x40 }
    /* +0xe23b62 */ __asm { XORPS XMM5,XMM5 }
    /* +0xe23b65 */ __asm { MOVUPS xmmword ptr [RSP + 0x80],XMM5 }
    /* +0xe23b6d */ __asm { MOV dword ptr [RSP + 0x40],0xa9309024 }
    /* +0xe23b75 */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xe23b79 */ __asm { RDTSC }
    /* +0xe23b7b */ __asm { SHL RDX,0x20 }
    /* +0xe23b7f */ __asm { OR RDX,RAX }
    /* +0xe23b82 */ __asm { MOV RBP,-0x30ebf64fafbc6efb }
    /* +0xe23b8c */ __asm { IMUL RDX,RBP }
    /* +0xe23b90 */ __asm { MOV RBX,-0x22b18422c4a9c65e }
    /* +0xe23b9a */ __asm { LEA RCX,[RDX + RBX*0x1] }
    /* +0xe23b9e */ __asm { MOV R8,RCX }
    /* +0xe23ba1 */ __asm { SHR R8,0x2d }
    /* +0xe23ba5 */ __asm { MOVD XMM5,R8D }
    /* +0xe23baa */ __asm { MOVQ XMM2,RCX }
    /* +0xe23baf */ __asm { SHR RCX,0x3b }
    /* +0xe23bb3 */ __asm { PSRLQ XMM2,0x1b }
    /* +0xe23bb8 */ __asm { PXOR XMM2,XMM5 }
    /* +0xe23bbc */ __asm { MOVD EDX,XMM2 }
    /* +0xe23bc0 */ __asm { ROR EDX,CL }
    /* +0xe23bc2 */ __asm { MOV EDI,R12D }
    /* +0xe23bc5 */ __asm { OR EDI,0x1 }
    /* +0xe23bc8 */ __asm { AND EDX,0x3 }
    /* +0xe23bcb */ __asm { CMP EDX,0x2 }
    /* +0xe23bce */ __asm { JNC 0x7fffa5593cd5 }
    /* +0xe23bd4 */ __asm { CMP EDX,0x1 }
    /* +0xe23bd7 */ __asm { JNZ 0x7fffa559414b }
    /* +0xe23bdd */ __asm { MOV ECX,0xf4a16634 }
    /* +0xe23be2 */ __asm { MOV RAX,-0x7a98c91554b36ed4 }
    /* +0xe23bec */ __asm { CMP RCX,RAX }
    /* +0xe23bef */ __asm { NOP }
    /* +0xe23bf0 */ __asm { NOP }
    /* +0xe23bf1 */ __asm { NOP }
    /* +0xe23bf2 */ __asm { NOP }
    /* +0xe23bf3 */ __asm { NOP }
    /* +0xe23bf4 */ __asm { NOP }
    /* +0xe23bf5 */ __asm { NOP }
    /* +0xe23bf6 */ __asm { NOP }
    /* +0xe23bf7 */ __asm { NOP }
    /* +0xe23bf8 */ __asm { NOP }
    /* +0xe23bf9 */ __asm { NOP }
    /* +0xe23bfa */ __asm { NOP }
    /* +0xe23bfb */ __asm { NOP }
    /* +0xe23bfc */ __asm { NOP }
    /* +0xe23bfd */ __asm { NOP }
    /* +0xe23bfe */ __asm { NOP }
    /* +0xe23bff */ __asm { NOP }
    /* +0xe23cd5 */ __asm { MOV CX,0x20fc }
    /* +0xe23cd9 */ __asm { IMUL ECX,ECX,0x22b7 }
    /* +0xe23cdf */ __asm { XOR ECX,R12D }
    /* +0xe23ce2 */ __asm { IMUL ECX,ECX,-0xca1 }
    /* +0xe23ce8 */ __asm { MOVZX ECX,CX }
    /* +0xe23ceb */ __asm { CMP EDX,ECX }
    /* +0xe23ced */ __asm { JC 0x7fffa55941d2 }
    /* +0xe23cf3 */ __asm { MOV RAX,-0x4eeaec73008a2d90 }
    /* +0xe23cfd */ __asm { ADD RAX,0x7ffe02f0 }
    /* +0xe23d03 */ __asm { MOV ECX,R12D }
    /* +0xe23d06 */ __asm { ROL RAX,CL }
    /* +0xe23d09 */ __asm { LEA RCX,[0x7fffa47bedd8] }
    /* +0xe23d10 */ __asm { MOV R11,RCX }
    /* +0xe23d13 */ __asm { ADD R11,0x19801621 }
    /* +0xe23d1a */ __asm { ROL R11,0x22 }
    /* +0xe23d1e */ __asm { ADD R11,0x4d871e47 }
    /* +0xe23d25 */ __asm { XOR R11,RAX }
    /* +0xe23d28 */ __asm { MOV EAX,0xe1f633cd }
    /* +0xe23d2d */ __asm { CMP R11,RAX }
    /* +0xe23d30 */ __asm { JZ 0x7fffa55958a8 }
    /* +0xe23d36 */ __asm { MOV R11D,0xeb524ef2 }
    /* +0xe23d3c */ __asm { LEA R8D,[R12 + R11*0x1] }
    /* +0xe23d40 */ __asm { ADD R8D,0xfe7b3ef5 }
    /* +0xe23d47 */ __asm { MOV R10D,0xba98bd55 }
    /* +0xe23d4d */ __asm { MOVZX EAX,uint8_t ptr [RCX + -0x274b] }
    /* +0xe23d54 */ __asm { MOV R11D,0xb03e0f3b }
    /* +0xe23d5a */ __asm { IMUL R10D,EDI }
    /* +0xe23d5e */ __asm { NOT R10D }
    /* +0xe23d61 */ __asm { ADD R11D,0x1ed4a679 }
    /* +0xe23d68 */ __asm { MOVZX R9D,uint8_t ptr [RCX + RAX*0x4 + -0x273b] }
    /* +0xe23d71 */ __asm { ROL R9B,0x4 }
    /* +0xe23d75 */ __asm { MOV uint8_t ptr [RSP + 0x40],R9B }
    /* +0xe23d7a */ __asm { MOVZX R9D,uint8_t ptr [RCX + RAX*0x4 + -0x273a] }
    /* +0xe23d83 */ __asm { ROL R9B,0x4 }
    /* +0xe23d87 */ __asm { MOV uint8_t ptr [RSP + 0x41],R9B }
    /* +0xe23d8c */ __asm { MOVZX R9D,uint8_t ptr [RCX + RAX*0x4 + -0x2739] }
    /* +0xe23d95 */ __asm { ROL R9B,0x4 }
    /* +0xe23d99 */ __asm { MOV uint8_t ptr [RSP + 0x42],R9B }
    /* +0xe23d9e */ __asm { MOVZX EAX,uint8_t ptr [RCX + RAX*0x4 + -0x2738] }
    /* +0xe23da6 */ __asm { ROL AL,0x4 }
    /* +0xe23da9 */ __asm { IMUL R11D,EDI }
    /* +0xe23dad */ __asm { MOV uint8_t ptr [RSP + 0x43],AL }
    /* +0xe23db1 */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xe23db5 */ __asm { MOV ECX,EDX }
    /* +0xe23db7 */ __asm { AND ECX,0x65e8ce72 }
    /* +0xe23dbd */ __asm { XOR EDX,0x65e8ce72 }
    /* +0xe23dc3 */ __asm { CMP R8,R10 }
    /* +0xe23dc6 */ __asm { MOV R8D,dword ptr [R11] }
    /* +0xe23dc9 */ __asm { CMOVLE EDX,ECX }
    /* +0xe23dcc */ __asm { BT EDX,R8D }
    /* +0xe23dd0 */ __asm { JNC 0x7fffa5594483 }
    /* +0xe23dd6 */ __asm { RDTSC }
    /* +0xe23dd8 */ __asm { SHL RDX,0x20 }
    /* +0xe23ddc */ __asm { OR RDX,RAX }
    /* +0xe23ddf */ __asm { MOV RAX,-0x4a9b10dd1385131b }
    /* +0xe23de9 */ __asm { IMUL RAX,RDX }
    /* +0xe23ded */ __asm { MOV RCX,-0x76102c1987b0210e }
    /* +0xe23df7 */ __asm { ADD RCX,RAX }
    /* +0xe23dfa */ __asm { MOV R10,RCX }
    /* +0xe23dfd */ __asm { SHR R10,0x1b }
    /* +0xe23e01 */ __asm { MOV R8,RCX }
    /* +0xe23e04 */ __asm { SHR R8,0x2d }
    /* +0xe23e08 */ __asm { XOR R8D,R10D }
    /* +0xe23e0b */ __asm { SHR RCX,0x3b }
    /* +0xe23e0f */ __asm { ROR R8D,CL }
    /* +0xe23e12 */ __asm { MOV dword ptr [RSP + 0x40],0x851c9ec2 }
    /* +0xe23e1a */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xe23e1e */ __asm { CMP EDX,0xda7ad99b }
    /* +0xe23e24 */ __asm { JC 0x7fffa5593e42 }
    /* +0xe23e26 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xe23e2d */ __asm { MOV RCX,0x0 }
    /* +0xe23e34 */ __asm { NOP }
    /* +0xe23e35 */ __asm { TEST uint8_t ptr [RBP + -0x12fac2de],0xe3 }
    /* +0xe23e3c */ __asm { INC uint8_t ptr [0x7fff9e730b96] }
    /* +0xe23e42 */ __asm { CMP R8D,0x1186e2a }
    /* +0xe23e49 */ __asm { JA 0x7fffa55940a4 }
    /* +0xe23e4f */ __asm { MOV DX,0x30f6 }
    /* +0xe23e53 */ __asm { XOR EDX,0xf0f6 }
    /* +0xe23e59 */ __asm { MOV ECX,R12D }
    /* +0xe23e5c */ __asm { ROR DX,CL }
    /* +0xe23e5f */ __asm { MOVZX R8D,DX }
    /* +0xe23e63 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0xe23e67 */ __asm { MOV DX,0x9194 }
    /* +0xe23e6b */ __asm { XOR EDX,0x5194 }
    /* +0xe23e71 */ __asm { ROR DX,CL }
    /* +0xe23e74 */ __asm { MOVZX R8D,DX }
    /* +0xe23e78 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0xe23e7c */ __asm { MOV R8D,0xaf173f6c }
    /* +0xe23e82 */ __asm { IMUL R8D,EDI }
    /* +0xe23e86 */ __asm { MOV R10,R12 }
    /* +0xe23e89 */ __asm { OR R10,0x1 }
    /* +0xe23e8d */ __asm { XOR R8D,0x1ebbc58a }
    /* +0xe23e94 */ __asm { MOV RDX,0x795c4a76f3ac99c7 }
    /* +0xe23e9e */ __asm { XOR RDX,0x3b0cb742 }
    /* +0xe23ea5 */ __asm { IMUL RDX,R10 }
    /* +0xe23ea9 */ __asm { MOV RCX,qword ptr [RCX + 0x30] }
    /* +0xe23ead */ __asm { MOV R10,RCX }
    /* +0xe23eb0 */ __asm { NEG R10 }
    /* +0xe23eb3 */ __asm { CMP RDX,R8 }
    /* +0xe23eb6 */ __asm { CMOVGE R10,RCX }
    /* +0xe23eba */ __asm { ADD R10,RAX }
    /* +0xe23ebd */ __asm { MOV RAX,0x7b5d9ab59b3f7d23 }
    /* +0xe23ec7 */ __asm { CMP R10,RAX }
    /* +0xe23eca */ __asm { NOP }
    /* +0xe23ecb */ __asm { NOP }
    /* +0xe23ecc */ __asm { NOP }
    /* +0xe23ecd */ __asm { NOP }
    /* +0xe23ece */ __asm { NOP }
    /* +0xe23ecf */ __asm { LEA R11,[0x7fffa47b626f] }
    /* +0xe23ed6 */ __asm { MOV RAX,0x57061a5ac255a24e }
    /* +0xe23ee0 */ __asm { CMP R11,RAX }
    /* +0xe23ee3 */ __asm { JNZ 0x7fffa5593f03 }
    /* +0xe23ee5 */ __asm { NOP }
    /* +0xe23ee6 */ __asm { MOV RCX,0x0 }
    /* +0xe23eed */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xe23ef4 */ __asm { TEST uint8_t ptr [RAX],BH }
    /* +0xe23ef6 */ __asm { JNO 0x7fffa5593efd }
    /* +0xe23ef8 */ __asm { ROR CH,0xc4 }
    /* +0xe23efb */ __asm { AND EDX,EBP }
    /* +0xe23efd */ __asm { STC }
    /* +0xe23efe */ __asm { ADC AL,0x7 }
    /* +0xe23f00 */ __asm { RET }
    /* +0xe23f03 */ __asm { MOV EDX,0x1b5cd334 }
    /* +0xe23f08 */ __asm { MOV R8D,0x8001fe1c }
    /* +0xe23f0e */ __asm { ADD R8D,0x7ffe0324 }
    /* +0xe23f15 */ __asm { MOV ECX,R12D }
    /* +0xe23f18 */ __asm { ROL R8D,CL }
    /* +0xe23f1b */ __asm { MOVZX EAX,uint8_t ptr [R11 + 0x64da] }
    /* +0xe23f23 */ __asm { LEA R10D,[R12 + RDX*0x1] }
    /* +0xe23f27 */ __asm { ADD R10D,0x144aae29 }
    /* +0xe23f2e */ __asm { ROL R10D,0x1c }
    /* +0xe23f32 */ __asm { MOVZX R9D,uint8_t ptr [R11 + RAX*0x4 + 0x64e0] }
    /* +0xe23f3b */ __asm { NOT R9B }
    /* +0xe23f3e */ __asm { ROL R9B,0x5 }
    /* +0xe23f42 */ __asm { MOV uint8_t ptr [RSP + 0x40],R9B }
    /* +0xe23f47 */ __asm { MOVZX R9D,uint8_t ptr [R11 + RAX*0x4 + 0x64e1] }
    /* +0xe23f50 */ __asm { NOT R9B }
    /* +0xe23f53 */ __asm { ROL R9B,0x5 }
    /* +0xe23f57 */ __asm { MOV uint8_t ptr [RSP + 0x41],R9B }
    /* +0xe23f5c */ __asm { MOVZX EDX,uint8_t ptr [R11 + RAX*0x4 + 0x64e2] }
    /* +0xe23f65 */ __asm { LEA ECX,[RDX + -0x1] }
    /* +0xe23f68 */ __asm { CMP R10,R8 }
    /* +0xe23f6b */ __asm { NOT DL }
    /* +0xe23f6d */ __asm { MOVZX ECX,CL }
    /* +0xe23f70 */ __asm { MOVZX EDX,DL }
    /* +0xe23f73 */ __asm { CMOVG EDX,ECX }
    /* +0xe23f76 */ __asm { ROL DL,0x5 }
    /* +0xe23f79 */ __asm { MOV uint8_t ptr [RSP + 0x42],DL }
    /* +0xe23f7d */ __asm { MOVZX R11D,uint8_t ptr [R11 + RAX*0x4 + 0x64e3] }
    /* +0xe23f86 */ __asm { NOT R11B }
    /* +0xe23f89 */ __asm { ROL R11B,0x5 }
    /* +0xe23f8d */ __asm { MOV uint8_t ptr [RSP + 0x43],R11B }
    /* +0xe23f92 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xe23f97 */ __asm { XOR ECX,dword ptr [RSP + 0x40] }
    /* +0xe23f9b */ __asm { MOV EDX,0x1 }
    /* +0xe23fa0 */ __asm { SHL EDX,CL }
    /* +0xe23fa2 */ __asm { MOVD XMM5,EDX }
    /* +0xe23fa6 */ __asm { MOVD XMM2,ECX }
    /* +0xe23faa */ __asm { PAND XMM2,XMM5 }
    /* +0xe23fae */ __asm { MOVD EDX,XMM2 }
    /* +0xe23fb2 */ __asm { TEST EDX,EDX }
    /* +0xe23fb4 */ __asm { JZ 0x7fffa55940a4 }
    /* +0xe23fba */ __asm { PXOR XMM5,XMM5 }
    /* +0xe23fbe */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM5 }
    /* +0xe23fc4 */ __asm { PUSHFQ }
    /* +0xe23fc5 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe23fcd */ __asm { POPFQ }
    /* +0xe23fce */ __asm { MOV dword ptr [RSP + 0x58],0xf7c1c606 }
    /* +0xe23fd6 */ __asm { MOV EDX,dword ptr [RSP + 0x58] }
    /* +0xe23fda */ __asm { MOV EDX,0x8d1a27f5 }
    /* +0xe23fdf */ __asm { SUB EDX,R12D }
    /* +0xe23fe2 */ __asm { ROR EDX,0x1 }
    /* +0xe23fe4 */ __asm { ADD EDX,0x48493429 }
    /* +0xe23fea */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xe23ff2 */ __asm { MOV dword ptr [RSP + 0x58],EDX }
    /* +0xe23ff6 */ __asm { MOV EDX,dword ptr [RSP + 0x58] }
    /* +0xe23ffa */ __asm { CMP EDX,0xd724b10e }
    /* +0xe24000 */ __asm { JNC 0x7fffa55968ab }
    /* +0xe24006 */ __asm { PUSHFQ }
    /* +0xe24007 */ __asm { POP R10 }
    /* +0xe24009 */ __asm { TEST R10D,0x100 }
    /* +0xe24010 */ __asm { NOP }
    /* +0xe24011 */ __asm { NOP }
    /* +0xe24012 */ __asm { NOP }
    /* +0xe24013 */ __asm { NOP }
    /* +0xe24014 */ __asm { NOP }
    /* +0xe24015 */ __asm { MOV dword ptr [RSP + 0x58],0x3c8945f1 }
    /* +0xe2401d */ __asm { MOV EDX,dword ptr [RSP + 0x58] }
    /* +0xe24021 */ __asm { TEST EDX,EDX }
    /* +0xe24023 */ __asm { NOP }
    /* +0xe24024 */ __asm { NOP }
    /* +0xe24025 */ __asm { NOP }
    /* +0xe24026 */ __asm { NOP }
    /* +0xe24027 */ __asm { NOP }
    /* +0xe24028 */ __asm { NOP }
    /* +0xe24029 */ __asm { NOP }
    /* +0xe2402a */ __asm { NOP }
    /* +0xe2402b */ __asm { NOP }
    /* +0xe2402c */ __asm { NOP }
    /* +0xe2402d */ __asm { NOP }
    /* +0xe2402e */ __asm { NOP }
    /* +0xe2402f */ __asm { NOP }
    /* +0xe24030 */ __asm { NOP }
    /* +0xe24031 */ __asm { LEA R11,[0x7fffa47b69b5] }
    /* +0xe24038 */ __asm { MOV RAX,0x6395bd57bc6a06d9 }
    /* +0xe24042 */ __asm { CMP R11,RAX }
    /* +0xe24045 */ __asm { JZ 0x7fffa55968b3 }
    /* +0xe2404b */ __asm { MOV R8W,0xfa02 }
    /* +0xe24050 */ __asm { SUB R8D,R12D }
    /* +0xe24053 */ __asm { MOV DX,0x5bb7 }
    /* +0xe24057 */ __asm { MOV ECX,R12D }
    /* +0xe2405a */ __asm { OR ECX,0x1 }
    /* +0xe2405d */ __asm { IMUL ECX,EDX }
    /* +0xe24060 */ __asm { NOT ECX }
    /* +0xe24062 */ __asm { ROL CX,0x8 }
    /* +0xe24066 */ __asm { MOV qword ptr [RSP + 0x58],R10 }
    /* +0xe2406b */ __asm { MOVZX EDX,CX }
    /* +0xe2406e */ __asm { MOV AX,0x3663 }
    /* +0xe24072 */ __asm { XOR EAX,0xffff8287 }
    /* +0xe24077 */ __asm { ADD EAX,0x6b1c }
    /* +0xe2407c */ __asm { ROL R8W,0x4 }
    /* +0xe24081 */ __asm { MOV ECX,R12D }
    /* +0xe24084 */ __asm { ROR AX,CL }
    /* +0xe24087 */ __asm { ADD R8D,0xffffbf67 }
    /* +0xe2408e */ __asm { MOVSX R10,R8W }
    /* +0xe24092 */ __asm { MOVZX R9D,AX }
    /* +0xe24096 */ __asm { MOV EAX,dword ptr [R11 + 0x6623] }
    /* +0xe2409d */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xe240a2 */ __asm { SYSCALL }
    /* +0xe240a4 */ __asm { MOV R8D,0x7647db1b }
    /* +0xe240aa */ __asm { MOV RAX,-0x2b34858f3f8ce354 }
    /* +0xe240b4 */ __asm { MOV R10,R12 }
    /* +0xe240b7 */ __asm { OR R10,0x1 }
    /* +0xe240bb */ __asm { IMUL R10,RAX }
    /* +0xe240bf */ __asm { ADD R10,0x22af27df }
    /* +0xe240c6 */ __asm { MOV EDX,0x3e5f2099 }
    /* +0xe240cb */ __asm { MOV ECX,0x8835520a }
    /* +0xe240d0 */ __asm { SUB ECX,EDX }
    /* +0xe240d2 */ __asm { XOR ECX,R12D }
    /* +0xe240d5 */ __asm { ADD R8D,0xde701918 }
    /* +0xe240dc */ __asm { IMUL R8D,EDI }
    /* +0xe240e0 */ __asm { MOVSXD RAX,ECX }
    /* +0xe240e3 */ __asm { LEA RCX,[0x7fffa478c536] }
    /* +0xe240ea */ __asm { MOV EDX,0x1774787b }
    /* +0xe240ef */ __asm { SUB RDX,RCX }
    /* +0xe240f2 */ __asm { IMUL RDX,R10 }
    /* +0xe240f6 */ __asm { MOV R10,0x6e8631a5935758fe }
    /* +0xe24100 */ __asm { XOR R9D,R9D }
    /* +0xe24103 */ __asm { CMP RDX,R10 }
    /* +0xe24106 */ __asm { SETZ R9B }
    /* +0xe2410a */ __asm { MOV R10,0x6e8631a5935758fd }
    /* +0xe24114 */ __asm { XOR R11D,R11D }
    /* +0xe24117 */ __asm { CMP RDX,R10 }
    /* +0xe2411a */ __asm { SETG R11B }
    /* +0xe2411e */ __asm { CMP RAX,R8 }
    /* +0xe24121 */ __asm { CMOVA R11D,R9D }
    /* +0xe24125 */ __asm { CMP R11B,0x1 }
    /* +0xe24129 */ __asm { NOP }
    /* +0xe2412a */ __asm { NOP }
    /* +0xe2412b */ __asm { NOP }
    /* +0xe2412c */ __asm { NOP }
    /* +0xe2412d */ __asm { NOP }
    /* +0xe2412e */ __asm { MOV DX,0x36b4 }
    /* +0xe24132 */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xe24137 */ __asm { XOR EDX,0x36b5 }
    /* +0xe2413d */ __asm { MOVZX EDX,DX }
    /* +0xe24140 */ __asm { MOV EAX,dword ptr [RCX + -0x7e8e] }
    /* +0xe24146 */ __asm { JMP 0x7fffa55944bf }
    /* +0xe2414b */ __asm { MOV ECX,0x8257cf15 }
    /* +0xe24150 */ __asm { MOV RAX,0x35fee176edd0af12 }
    /* +0xe2415a */ __asm { CMP RCX,RAX }
    /* +0xe2415d */ __asm { JZ 0x7fffa55958ae }
    /* +0xe24163 */ __asm { MOV RCX,qword ptr [RCX + -0x259cf0d] }
    /* +0xe2416a */ __asm { MOV RDX,-0x15b893d97dde9192 }
    /* +0xe24174 */ __asm { MOV RAX,RCX }
    /* +0xe24177 */ __asm { MUL RDX }
    /* +0xe2417a */ __asm { MOV R10,RDX }
    /* +0xe2417d */ __asm { MOV EDX,0x14740ec }
    /* +0xe24182 */ __asm { MOV RAX,RCX }
    /* +0xe24185 */ __asm { MUL RDX }
    /* +0xe24188 */ __asm { ADD RAX,R10 }
    /* +0xe2418b */ __asm { ADC RDX,0x0 }
    /* +0xe2418f */ __asm { TEST DL,0x1 }
    /* +0xe24192 */ __asm { JNZ 0x7fffa5594447 }
    /* +0xe24198 */ __asm { LEA RCX,[0x7fffa47c4730] }
    /* +0xe2419f */ __asm { MOV RAX,-0x121c533c0635a106 }
    /* +0xe241a9 */ __asm { CMP RCX,RAX }
    /* +0xe241ac */ __asm { JZ 0x7fffa55958f5 }
    /* +0xe241b2 */ __asm { MOV R11W,0x8a27 }
    /* +0xe241b7 */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xe241bc */ __asm { LEA EDX,[R12 + R11*0x1] }
    /* +0xe241c0 */ __asm { ROL DX,0xb }
    /* +0xe241c4 */ __asm { MOVZX EDX,DX }
    /* +0xe241c7 */ __asm { MOV EAX,dword ptr [RCX + -0x7740] }
    /* +0xe241cd */ __asm { JMP 0x7fffa55944bf }
    /* +0xe241d2 */ __asm { RDTSC }
    /* +0xe241d4 */ __asm { SHL RDX,0x20 }
    /* +0xe241d8 */ __asm { OR RDX,RAX }
    /* +0xe241db */ __asm { MOV RAX,-0x5a46117eacb056b3 }
    /* +0xe241e5 */ __asm { IMUL RAX,RDX }
    /* +0xe241e9 */ __asm { MOV RCX,0x28260b63aa283cd8 }
    /* +0xe241f3 */ __asm { IMUL RCX,RCX,-0x751df43d }
    /* +0xe241fa */ __asm { MOV R10,-0xf6d8e0e6 }
    /* +0xe24204 */ __asm { XOR R10,RCX }
    /* +0xe24207 */ __asm { ADD R10,RAX }
    /* +0xe2420a */ __asm { MOV R8,R10 }
    /* +0xe2420d */ __asm { SHR R8,0x2d }
    /* +0xe24211 */ __asm { MOV RCX,R10 }
    /* +0xe24214 */ __asm { SHR RCX,0x3b }
    /* +0xe24218 */ __asm { SHR R10,0x1b }
    /* +0xe2421c */ __asm { XOR R8D,R10D }
    /* +0xe2421f */ __asm { ROR R8D,CL }
    /* +0xe24222 */ __asm { MOV dword ptr [RSP + 0x40],0x577e4a7e }
    /* +0xe2422a */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xe2422e */ __asm { CMP EDX,0xa37968b3 }
    /* +0xe24234 */ __asm { NOP }
    /* +0xe24235 */ __asm { NOP }
    /* +0xe24236 */ __asm { NOP }
    /* +0xe24237 */ __asm { NOP }
    /* +0xe24238 */ __asm { NOP }
    /* +0xe24239 */ __asm { CMP R8D,0x4505b8 }
    /* +0xe24240 */ __asm { JA 0x7fffa55943af }
    /* +0xe24246 */ __asm { MOV dword ptr [RSP + 0x40],0xebec7326 }
    /* +0xe2424e */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xe24252 */ __asm { MOV ECX,0x46156a5a }
    /* +0xe24257 */ __asm { MOV RAX,0x3eb90e63f98e63d8 }
    /* +0xe24261 */ __asm { CMP RCX,RAX }
    /* +0xe24264 */ __asm { JZ 0x7fffa55958fe }
    /* +0xe2426a */ __asm { MOV R11D,0x50271fa0 }
    /* +0xe24270 */ __asm { XOR R11D,R12D }
    /* +0xe24273 */ __asm { NOT R11D }
    /* +0xe24276 */ __asm { MOV RCX,qword ptr [RCX + R11*0x1 + 0x8] }
    /* +0xe2427b */ __asm { MOV RDX,0x10de372433d436bc }
    /* +0xe24285 */ __asm { MOV RAX,RCX }
}


// ============================================================================
// Function : FUN_7fffa5596980  |  RVA: 0xe26980  |  Size: 518 bytes
// Callers  : FUN_7fffa55d55c0@0xe655c0
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5596980(uint8_t (*param_1) [32],uint64_t param_2)

{
  uint8_t auVar1 [32];
  uint8_t (*pauVar2) [32];
  uint64_t uVar3;
  uint64_t uVar4;
  short *psVar5;
  uint8_t auVar6 [16];
  
  if (4 < _DAT_7fffa47800e0) {
    if (((uint64_t)param_1 & 1) == 0) {
      uVar3 = (uint64_t)((uint32_t)param_1 & 0x1f);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x20 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (pauVar2 = param_1;
          (pauVar2 != (uint8_t (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (uint8_t (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (int64_t)pauVar2 - (int64_t)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      pauVar2 = (uint8_t (*) [32])(*param_1 + uVar4 * 2);
      while ((pauVar2 !=
              (uint8_t (*) [32])
              ((int64_t)param_1 +
              (((param_2 - uVar3) - (uint64_t)((uint32_t)(param_2 - uVar3) & 0x1f)) + uVar4) * 2) &&
             (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((uint8_t  [16])0x0),0),*pauVar2),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar2 = pauVar2 + 1;
      }
      for (; (pauVar2 != (uint8_t (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0))
          ; pauVar2 = (uint8_t (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      pauVar2 = param_1;
      if (param_1 != (uint8_t (*) [32])(*param_1 + param_2 * 2)) {
        while (*(short *)*pauVar2 != 0) {
          pauVar2 = (uint8_t (*) [32])(*pauVar2 + 2);
          if (pauVar2 == (uint8_t (*) [32])(*param_1 + param_2 * 2)) {
            return (int64_t)pauVar2 - (int64_t)param_1 >> 1;
          }
        }
      }
    }
    return (int64_t)pauVar2 - (int64_t)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (_DAT_7fffa47800e0 < 1) {
    for (; (pauVar2 != (uint8_t (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0));
        pauVar2 = (uint8_t (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    if (((uint64_t)param_1 & 1) == 0) {
      uVar3 = (uint64_t)((uint32_t)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (; (pauVar2 != (uint8_t (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (uint8_t (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (int64_t)pauVar2 - (int64_t)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      for (psVar5 = (short *)(*param_1 + uVar4 * 2);
          psVar5 != (short *)((int64_t)param_1 +
                             (((param_2 - uVar3) - (uint64_t)((uint32_t)(param_2 - uVar3) & 0xf)) +
                             uVar4) * 2); psVar5 = psVar5 + 8) {
        auVar6._0_2_ = -(uint16_t)(*psVar5 == 0);
        auVar6._2_2_ = -(uint16_t)(psVar5[1] == 0);
        auVar6._4_2_ = -(uint16_t)(psVar5[2] == 0);
        auVar6._6_2_ = -(uint16_t)(psVar5[3] == 0);
        auVar6._8_2_ = -(uint16_t)(psVar5[4] == 0);
        auVar6._10_2_ = -(uint16_t)(psVar5[5] == 0);
        auVar6._12_2_ = -(uint16_t)(psVar5[6] == 0);
        auVar6._14_2_ = -(uint16_t)(psVar5[7] == 0);
        if ((((((((((((((((SUB161(auVar6 >> 7,0) & 1) != 0 || (SUB161(auVar6 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar6 >> 0x17,0) & 1) != 0) || (SUB161(auVar6 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar6 >> 0x27,0) & 1) != 0) || (SUB161(auVar6 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar6 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar6 >> 0x3f,0) & 1) != 0) || (SUB161(auVar6 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar6 >> 0x4f,0) & 1) != 0) || (SUB161(auVar6 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar6 >> 0x5f,0) & 1) != 0) || (SUB161(auVar6 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar6 >> 0x6f,0) & 1) != 0) || (auVar6._14_2_ >> 7 & 1) != 0) ||
            (auVar6._14_2_ & 0x8000) != 0) break;
      }
      for (; (psVar5 != (short *)(*param_1 + param_2 * 2) && (*psVar5 != 0)); psVar5 = psVar5 + 1) {
      }
      return (int64_t)psVar5 - (int64_t)param_1 >> 1;
    }
    if (param_1 != (uint8_t (*) [32])(*param_1 + param_2 * 2)) {
      while (*(short *)*pauVar2 != 0) {
        pauVar2 = (uint8_t (*) [32])(*pauVar2 + 2);
        if (pauVar2 == (uint8_t (*) [32])(*param_1 + param_2 * 2)) {
          return (int64_t)pauVar2 - (int64_t)param_1 >> 1;
        }
      }
    }
  }
  return (int64_t)pauVar2 - (int64_t)param_1 >> 1;
}


// ============================================================================
// Function : FUN_7fffa5596b90  |  RVA: 0xe26b90  |  Size: 84174 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5596b90(void) {
    /* +0xe26b90 */ __asm { PUSH RBX }
    /* +0xe26b91 */ __asm { PUSH RDI }
    /* +0xe26b92 */ __asm { PUSH RBP }
    /* +0xe26b93 */ __asm { PUSH RSI }
    /* +0xe26b94 */ __asm { PUSH R13 }
    /* +0xe26b96 */ __asm { PUSH R12 }
    /* +0xe26b98 */ __asm { PUSH R14 }
    /* +0xe26b9a */ __asm { PUSH R15 }
    /* +0xe26b9c */ __asm { SUB RSP,0x2e8 }
    /* +0xe26ba3 */ __asm { MOVDQA xmmword ptr [RSP + 0x2d0],XMM10 }
    /* +0xe26bad */ __asm { MOVDQA xmmword ptr [RSP + 0x2c0],XMM14 }
    /* +0xe26bb7 */ __asm { MOVDQA xmmword ptr [RSP + 0x2b0],XMM8 }
    /* +0xe26bc1 */ __asm { MOVDQA xmmword ptr [RSP + 0x2a0],XMM6 }
    /* +0xe26bca */ __asm { MOVDQA xmmword ptr [RSP + 0x290],XMM12 }
    /* +0xe26bd4 */ __asm { MOVDQA xmmword ptr [RSP + 0x280],XMM11 }
    /* +0xe26bde */ __asm { MOVDQA xmmword ptr [RSP + 0x270],XMM9 }
    /* +0xe26be8 */ __asm { MOVDQA xmmword ptr [RSP + 0x260],XMM7 }
    /* +0xe26bf1 */ __asm { MOV RBP,RAX }
    /* +0xe26bf4 */ __asm { MOV qword ptr [RSP + 0x120],R8 }
    /* +0xe26bfc */ __asm { MOV qword ptr [RSP + 0xd8],R10 }
    /* +0xe26c04 */ __asm { MOV R15,RCX }
    /* +0xe26c07 */ __asm { MOV SI,0x2a4b }
    /* +0xe26c0b */ __asm { MOV ECX,EDX }
    /* +0xe26c0d */ __asm { ROL ECX,0x17 }
    /* +0xe26c10 */ __asm { MOV R10,R15 }
    /* +0xe26c13 */ __asm { SHL R10,0x35 }
    /* +0xe26c17 */ __asm { SUB R15,R10 }
    /* +0xe26c1a */ __asm { ADD ESI,0xffff8b1e }
    /* +0xe26c20 */ __asm { XOR ECX,EDX }
    /* +0xe26c22 */ __asm { XOR ESI,EBP }
    /* +0xe26c24 */ __asm { XOR R14D,R14D }
    /* +0xe26c27 */ __asm { XOR R13D,R13D }
    /* +0xe26c2a */ __asm { CMP R9,0xc }
    /* +0xe26c2e */ __asm { SETL R14B }
    /* +0xe26c32 */ __asm { SETC R13B }
    /* +0xe26c36 */ __asm { ROL EDX,0x10 }
    /* +0xe26c39 */ __asm { MOV R10D,ECX }
    /* +0xe26c3c */ __asm { OR R10D,EDX }
    /* +0xe26c3f */ __asm { XOR EDX,ECX }
    /* +0xe26c41 */ __asm { MOV EBX,0xdbb0c9bb }
    /* +0xe26c46 */ __asm { ADD EBX,EBP }
    /* +0xe26c48 */ __asm { ROL EBX,0x10 }
    /* +0xe26c4b */ __asm { MOV R12D,0x27d25527 }
    /* +0xe26c51 */ __asm { XOR R12D,0xca68a2ea }
    /* +0xe26c58 */ __asm { MOV RAX,0x1f1fffffa324d707 }
    /* +0xe26c62 */ __asm { ADD RAX,R15 }
    /* +0xe26c65 */ __asm { MOV EDI,0x53037ec2 }
    /* +0xe26c6a */ __asm { ADD EDI,0xca221e56 }
    /* +0xe26c70 */ __asm { ROL EDI,0x1 }
    /* +0xe26c72 */ __asm { MOV qword ptr [RSP + 0x188],RBP }
    /* +0xe26c7a */ __asm { MOV ECX,EBP }
    /* +0xe26c7c */ __asm { ROR EDI,CL }
    /* +0xe26c7e */ __asm { CMP RBX,RDI }
    /* +0xe26c81 */ __asm { CMOVGE R14D,R13D }
    /* +0xe26c85 */ __asm { MOV ECX,0xa19c5d60 }
    /* +0xe26c8a */ __asm { XOR ECX,0xd345e712 }
    /* +0xe26c90 */ __asm { IMUL ECX,ECX,0x74b332f1 }
    /* +0xe26c96 */ __asm { NOT ECX }
    /* +0xe26c98 */ __asm { CMP RCX,R12 }
    /* +0xe26c9b */ __asm { MOVZX ECX,SI }
    /* +0xe26c9e */ __asm { CMOVNC EDX,R10D }
    /* +0xe26ca2 */ __asm { XOR R10D,R10D }
    /* +0xe26ca5 */ __asm { MOV qword ptr [RSP + 0x90],RAX }
    /* +0xe26cad */ __asm { CMP RAX,RCX }
    /* +0xe26cb0 */ __asm { JC 0x7fffa559e0e4 }
    /* +0xe26cb6 */ __asm { TEST R14B,R14B }
    /* +0xe26cb9 */ __asm { JNZ 0x7fffa559e0e4 }
    /* +0xe26cbf */ __asm { LEA RDI,[R9 + 0x3] }
    /* +0xe26cc3 */ __asm { SHR RDI,0x2 }
    /* +0xe26cc7 */ __asm { ROL EDX,0x12 }
    /* +0xe26cca */ __asm { MOV R8,qword ptr [RSP + 0x120] }
    /* +0xe26cd2 */ __asm { MOV RBP,qword ptr [R8] }
    /* +0xe26cd5 */ __asm { MOV CX,0x90f }
    /* +0xe26cd9 */ __asm { XOR ECX,0xffff97f7 }
    /* +0xe26cdf */ __asm { IMUL R12D,ECX,0x3731 }
    /* +0xe26ce6 */ __asm { MOV R10W,0x815f }
    /* +0xe26ceb */ __asm { MOV R13D,0x9f1eb40a }
    /* +0xe26cf1 */ __asm { XOR R13D,0x40eeb701 }
    /* +0xe26cf8 */ __asm { MOV RCX,qword ptr [RSP + 0x188] }
    /* +0xe26d00 */ __asm { ROR R13D,CL }
    /* +0xe26d03 */ __asm { SUB R12D,ECX }
    /* +0xe26d06 */ __asm { MOV dword ptr [RSP + 0x6c],EDX }
    /* +0xe26d0a */ __asm { MOV R14D,EDX }
    /* +0xe26d0d */ __asm { AND R14D,0x1 }
    /* +0xe26d11 */ __asm { MOV ESI,0xffff8c5f }
    /* +0xe26d16 */ __asm { SUB ESI,R10D }
    /* +0xe26d19 */ __asm { ROL SI,0x8 }
    /* +0xe26d1d */ __asm { MOVSXD RDX,R13D }
    /* +0xe26d20 */ __asm { MOV R10D,0x15212783 }
    /* +0xe26d26 */ __asm { ADD R10D,0x8defa3ee }
    /* +0xe26d2d */ __asm { ROR R10D,CL }
    /* +0xe26d30 */ __asm { MOV RCX,0x1f1fffffa324d701 }
    /* +0xe26d3a */ __asm { ADD R15,RCX }
    /* +0xe26d3d */ __asm { MOVZX ECX,BPL }
    /* +0xe26d41 */ __asm { MOV qword ptr [RSP + 0x178],RCX }
    /* +0xe26d49 */ __asm { IMUL RCX,RDI }
    /* +0xe26d4d */ __asm { SHR RCX,0x3 }
    /* +0xe26d51 */ __asm { ADD RCX,0x8 }
    /* +0xe26d55 */ __asm { XOR EBX,EBX }
    /* +0xe26d57 */ __asm { XOR R13D,R13D }
    /* +0xe26d5a */ __asm { CMP R15,RCX }
    /* +0xe26d5d */ __asm { SETC BL }
    /* +0xe26d60 */ __asm { SETGE R13B }
    /* +0xe26d64 */ __asm { CMP RDX,R10 }
    /* +0xe26d67 */ __asm { MOVZX R10D,R12W }
    /* +0xe26d6b */ __asm { MOV RDX,qword ptr [RSP + 0x90] }
    /* +0xe26d73 */ __asm { LEA RAX,[R11 + RDX*0x1 + -0x8] }
    /* +0xe26d78 */ __asm { MOV qword ptr [RSP + 0x80],RAX }
    /* +0xe26d80 */ __asm { MOVZX ECX,SI }
    /* +0xe26d83 */ __asm { CMOVL R13D,EBX }
    /* +0xe26d87 */ __asm { MOV qword ptr [RSP + 0x1f0],RBP }
    /* +0xe26d8f */ __asm { MOVZX R15D,BPL }
    /* +0xe26d93 */ __asm { CMP R15D,ECX }
    /* +0xe26d96 */ __asm { SETA AL }
    /* +0xe26d99 */ __asm { MOV qword ptr [RSP + 0x70],R11 }
    /* +0xe26d9e */ __asm { LEA R12,[R11 + 0x6] }
    /* +0xe26da2 */ __asm { OR AL,R13B }
    /* +0xe26da5 */ __asm { MOV R13,RDI }
    /* +0xe26da8 */ __asm { LEA RCX,[R8 + 0x8] }
    /* +0xe26dac */ __asm { MOV qword ptr [RSP + 0x258],RCX }
    /* +0xe26db4 */ __asm { MOV dword ptr [RSP + 0x248],R14D }
    /* +0xe26dbc */ __asm { MOV dword ptr [RSP + 0xc8],R10D }
    /* +0xe26dc4 */ __asm { CMP R14D,R10D }
    /* +0xe26dc7 */ __asm { MOV RBP,qword ptr [RSP + 0xd8] }
    /* +0xe26dcf */ __asm { MOV qword ptr [RSP + 0x1d8],R9 }
    /* +0xe26dd7 */ __asm { MOV qword ptr [RSP + 0xd0],RDI }
    /* +0xe26ddf */ __asm { MOV qword ptr [RSP + 0xe0],R12 }
    /* +0xe26de7 */ __asm { JNZ 0x7fffa5596e24 }
    /* +0xe26de9 */ __asm { TEST AL,AL }
    /* +0xe26deb */ __asm { JZ 0x7fffa5596f4e }
    /* +0xe26df1 */ __asm { LEA ECX,[R13 + 0x3] }
    /* +0xe26df5 */ __asm { TEST R13D,R13D }
    /* +0xe26df8 */ __asm { CMOVNS ECX,R13D }
    /* +0xe26dfc */ __asm { AND ECX,0xfffffffc }
    /* +0xe26dff */ __asm { MOV R11D,R13D }
    /* +0xe26e02 */ __asm { SUB R11D,ECX }
    /* +0xe26e05 */ __asm { TEST R11D,R11D }
    /* +0xe26e08 */ __asm { JLE 0x7fffa559728c }
    /* +0xe26e0e */ __asm { MOVSXD R8,R13D }
    /* +0xe26e11 */ __asm { CMP R11D,0x1 }
    /* +0xe26e15 */ __asm { JNZ 0x7fffa55972b5 }
    /* +0xe26e1b */ __asm { XOR EBX,EBX }
    /* +0xe26e1d */ __asm { XOR EDX,EDX }
    /* +0xe26e1f */ __asm { JMP 0x7fffa55972f3 }
    /* +0xe26e24 */ __asm { TEST AL,AL }
    /* +0xe26e26 */ __asm { JZ 0x7fffa5596fd3 }
    /* +0xe26e2c */ __asm { LEA ECX,[R13 + 0x3] }
    /* +0xe26e30 */ __asm { TEST R13D,R13D }
    /* +0xe26e33 */ __asm { CMOVNS ECX,R13D }
    /* +0xe26e37 */ __asm { AND ECX,0xfffffffc }
    /* +0xe26e3a */ __asm { MOV EAX,R13D }
    /* +0xe26e3d */ __asm { SUB EAX,ECX }
    /* +0xe26e3f */ __asm { TEST EAX,EAX }
    /* +0xe26e41 */ __asm { JLE 0x7fffa559729b }
    /* +0xe26e47 */ __asm { NOP }
    /* +0xe26e48 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xe26e4f */ __asm { MOV RDX,0x0 }
    /* +0xe26e56 */ __asm { MOVSXD R11,R13D }
    /* +0xe26e59 */ __asm { CMP EAX,0x1 }
    /* +0xe26e5c */ __asm { JZ 0x7fffa55977ad }
    /* +0xe26e62 */ __asm { MOV R10D,0xd2e80116 }
    /* +0xe26e68 */ __asm { MOV R8D,0x5824fc5a }
    /* +0xe26e6e */ __asm { MOV EDX,0x46f64ccf }
    /* +0xe26e73 */ __asm { MOV R9,0x0 }
    /* +0xe26e7a */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xe26e81 */ __asm { NOP }
    /* +0xe26e82 */ __asm { MOVZX ECX,uint8_t ptr [RBP + R11*0x1 + -0x1] }
    /* +0xe26e88 */ __asm { MOV RBX,qword ptr [RSP + 0x188] }
    /* +0xe26e90 */ __asm { MOV R9D,EBX }
    /* +0xe26e93 */ __asm { OR R9D,0x1 }
    /* +0xe26e97 */ __asm { IMUL R8D,R8D,0x450253bb }
    /* +0xe26e9e */ __asm { XOR R8D,0xd62a5d06 }
    /* +0xe26ea5 */ __asm { IMUL EDX,EDX,0x457814a5 }
    /* +0xe26eab */ __asm { ROL EDX,0x6 }
    /* +0xe26eae */ __asm { IMUL EDX,R9D }
    /* +0xe26eb2 */ __asm { MOVSXD RDX,EDX }
    /* +0xe26eb5 */ __asm { ADD R8D,EBX }
    /* +0xe26eb8 */ __asm { XOR EBX,EBX }
    /* +0xe26eba */ __asm { CMP R8,0x1cae9430 }
    /* +0xe26ec1 */ __asm { SETNZ BL }
    /* +0xe26ec4 */ __asm { LEA R9,[R11 + RBX*0x4] }
    /* +0xe26ec8 */ __asm { XOR R10D,0xffd7c428 }
    /* +0xe26ecf */ __asm { ROL R10D,0x2 }
    /* +0xe26ed3 */ __asm { NOT R10D }
    /* +0xe26ed6 */ __asm { MOV R13W,0xb577 }
    /* +0xe26edb */ __asm { MOVZX R9D,uint8_t ptr [RBP + R9*0x1 + -0x2] }
    /* +0xe26ee1 */ __asm { MOV R8,qword ptr [RSP + 0x258] }
    /* +0xe26ee9 */ __asm { MOV R9,qword ptr [R8 + R9*0x8] }
    /* +0xe26eed */ __asm { MOV R14,qword ptr [R8 + RCX*0x8] }
    /* +0xe26ef1 */ __asm { MOV R8,R14 }
    /* +0xe26ef4 */ __asm { AND R8,-0x100 }
    /* +0xe26efb */ __asm { MOV ECX,R9D }
    /* +0xe26efe */ __asm { SHR R8,CL }
    /* +0xe26f01 */ __asm { MOV RCX,R9 }
    /* +0xe26f04 */ __asm { AND RCX,-0x100 }
    /* +0xe26f0b */ __asm { MOV RSI,R8 }
    /* +0xe26f0e */ __asm { IMUL RSI,RCX }
    /* +0xe26f12 */ __asm { OR R8,RCX }
    /* +0xe26f15 */ __asm { NOT R13D }
    /* +0xe26f18 */ __asm { ADD R13D,dword ptr [RSP + 0x188] }
    /* +0xe26f20 */ __asm { AND EAX,0x1 }
    /* +0xe26f23 */ __asm { CMP RDX,R10 }
    /* +0xe26f26 */ __asm { CMOVBE R8,RSI }
    /* +0xe26f2a */ __asm { LEA R11,[R11 + RBX*0x4] }
    /* +0xe26f2e */ __asm { ADD R11,-0x2 }
    /* +0xe26f32 */ __asm { MOVZX ECX,R13W }
    /* +0xe26f36 */ __asm { ADD R9,R14 }
    /* +0xe26f39 */ __asm { MOV R12,qword ptr [RSP + 0xe0] }
    /* +0xe26f41 */ __asm { CMP EAX,ECX }
    /* +0xe26f43 */ __asm { JNZ 0x7fffa55977b3 }
    /* +0xe26f49 */ __asm { JMP 0x7fffa55977e8 }
    /* +0xe26f4e */ __asm { CMP R15D,0x9 }
    /* +0xe26f52 */ __asm { JNC 0x7fffa559705d }
    /* +0xe26f58 */ __asm { CMP R15D,0x8 }
    /* +0xe26f5c */ __asm { JNZ 0x7fffa5597b54 }
    /* +0xe26f62 */ __asm { MOVSXD RAX,R13D }
    /* +0xe26f65 */ __asm { IMUL R11,RAX,-0x6db6db6d }
    /* +0xe26f6c */ __asm { SHR R11,0x20 }
    /* +0xe26f70 */ __asm { ADD R11D,R13D }
    /* +0xe26f73 */ __asm { MOV ECX,R11D }
    /* +0xe26f76 */ __asm { SHR ECX,0x1f }
    /* +0xe26f79 */ __asm { SAR R11D,0x2 }
    /* +0xe26f7d */ __asm { ADD R11D,ECX }
    /* +0xe26f80 */ __asm { LEA ECX,[R11*0x8] }
    /* +0xe26f88 */ __asm { SUB R11D,ECX }
    /* +0xe26f8b */ __asm { ADD R11D,R13D }
    /* +0xe26f8e */ __asm { TEST R11D,R11D }
    /* +0xe26f91 */ __asm { JLE 0x7fffa5597f96 }
    /* +0xe26f97 */ __asm { MOV CX,0xb787 }
    /* +0xe26f9b */ __asm { IMUL R8D,ECX,0x5c13 }
    /* +0xe26fa2 */ __asm { MOV RCX,qword ptr [RSP + 0x188] }
    /* +0xe26faa */ __asm { ROL R8W,CL }
    /* +0xe26fae */ __asm { ADD R8D,0xfffffade }
    /* +0xe26fb5 */ __asm { MOVZX ECX,R8W }
    /* +0xe26fb9 */ __asm { XOR R10D,R10D }
    /* +0xe26fbc */ __asm { MOVSXD R9,R13D }
    /* +0xe26fbf */ __asm { CMP R11D,ECX }
    /* +0xe26fc2 */ __asm { JNZ 0x7fffa5597fe3 }
    /* +0xe26fc8 */ __asm { XOR R14D,R14D }
    /* +0xe26fcb */ __asm { XOR R8D,R8D }
    /* +0xe26fce */ __asm { JMP 0x7fffa5598050 }
    /* +0xe26fd3 */ __asm { MOV RAX,qword ptr [RSP + 0x188] }
    /* +0xe26fdb */ __asm { MOV R14D,EAX }
    /* +0xe26fde */ __asm { OR R14D,0x1 }
    /* +0xe26fe2 */ __asm { CMP R15D,0x9 }
    /* +0xe26fe6 */ __asm { MOV qword ptr [RSP + 0xc0],R14 }
    /* +0xe26fee */ __asm { JNC 0x7fffa5597176 }
    /* +0xe26ff4 */ __asm { CMP R15D,0x8 }
    /* +0xe26ff8 */ __asm { JNZ 0x7fffa5597bcb }
    /* +0xe26ffe */ __asm { MOV CX,0xb578 }
    /* +0xe27002 */ __asm { XOR ECX,dword ptr [RSP + 0x188] }
    /* +0xe27009 */ __asm { MOVSXD RAX,R13D }
    /* +0xe2700c */ __asm { IMUL R9,RAX,-0x6db6db6d }
    /* +0xe27013 */ __asm { SHR R9,0x20 }
    /* +0xe27017 */ __asm { ADD R9D,R13D }
    /* +0xe2701a */ __asm { MOV R8D,R9D }
    /* +0xe2701d */ __asm { SHR R8D,0x1f }
    /* +0xe27021 */ __asm { SAR R9D,0x2 }
    /* +0xe27025 */ __asm { ADD R9D,R8D }
    /* +0xe27028 */ __asm { LEA R8D,[R9*0x8] }
    /* +0xe27030 */ __asm { SUB R9D,R8D }
    /* +0xe27033 */ __asm { ADD R9D,R13D }
    /* +0xe27036 */ __asm { ROL CX,0xe }
    /* +0xe2703a */ __asm { MOVZX ECX,CX }
    /* +0xe2703d */ __asm { CMP R9D,ECX }
    /* +0xe27040 */ __asm { JLE 0x7fffa5597e46 }
    /* +0xe27046 */ __asm { MOVSXD R11,R13D }
    /* +0xe27049 */ __asm { CMP R9D,0x1 }
    /* +0xe2704d */ __asm { JNZ 0x7fffa5598d55 }
    /* +0xe27053 */ __asm { XOR EAX,EAX }
    /* +0xe27055 */ __asm { XOR R8D,R8D }
    /* +0xe27058 */ __asm { JMP 0x7fffa559954b }
    /* +0xe2705d */ __asm { MOV ECX,0xbf12c521 }
    /* +0xe27062 */ __asm { MOV R9,qword ptr [RSP + 0x188] }
    /* +0xe2706a */ __asm { MOV R11D,R9D }
    /* +0xe2706d */ __asm { OR R11D,0x1 }
    /* +0xe27071 */ __asm { MOV dword ptr [RSP + 0x100],R11D }
    /* +0xe27079 */ __asm { MOV R8D,0x43bff440 }
    /* +0xe2707f */ __asm { SUB R8D,ECX }
    /* +0xe27082 */ __asm { IMUL R10D,R8D,-0xb6ec91d }
    /* +0xe27089 */ __asm { MOV EAX,0x2c5c42de }
    /* +0xe2708e */ __asm { ADD EAX,0x409a1d69 }
    /* +0xe27093 */ __asm { XOR EAX,0x82194c03 }
    /* +0xe27098 */ __asm { IMUL EAX,R11D }
    /* +0xe2709c */ __asm { CMP R10,RAX }
    /* +0xe2709f */ __asm { SETC R8B }
    /* +0xe270a3 */ __asm { CMP R15D,0x9 }
    /* +0xe270a7 */ __asm { SETNZ AL }
    /* +0xe270aa */ __asm { XOR AL,R8B }
    /* +0xe270ad */ __asm { JZ 0x7fffa5597c4b }
    /* +0xe270b3 */ __asm { MOVSXD RAX,R13D }
    /* +0xe270b6 */ __asm { IMUL RCX,RAX,0x2aaaaaab }
    /* +0xe270bd */ __asm { MOV R10,RCX }
    /* +0xe270c0 */ __asm { SHR R10,0x3f }
    /* +0xe270c4 */ __asm { SHR RCX,0x20 }
    /* +0xe270c8 */ __asm { ADD ECX,R10D }
    /* +0xe270cb */ __asm { ADD ECX,ECX }
    /* +0xe270cd */ __asm { LEA ECX,[RCX + RCX*0x2] }
    /* +0xe270d0 */ __asm { MOV R10D,R13D }
    /* +0xe270d3 */ __asm { SUB R10D,ECX }
    /* +0xe270d6 */ __asm { TEST R10D,R10D }
    /* +0xe270d9 */ __asm { JLE 0x7fffa5597fa7 }
    /* +0xe270df */ __asm { MOVSXD R11,R13D }
    /* +0xe270e2 */ __asm { CMP R10D,0x1 }
    /* +0xe270e6 */ __asm { JZ 0x7fffa55986fe }
    /* +0xe270ec */ __asm { MOV EDX,0x4817f87b }
    /* +0xe270f1 */ __asm { SUB EDX,dword ptr [RSP + 0x188] }
    /* +0xe270f8 */ __asm { ADD EDX,0x35269f2f }
    /* +0xe270fe */ __asm { XOR EDX,0x51cc1dcc }
    /* +0xe27104 */ __asm { AND EDX,R10D }
    /* +0xe27107 */ __asm { XOR R8D,R8D }
    /* +0xe2710a */ __asm { MOVQ XMM1,qword ptr [0x7fffa56bc580] }
    /* +0xe27112 */ __asm { XOR R9D,R9D }
    /* +0xe27115 */ __asm { MOV R13,qword ptr [RSP + 0x258] }
    /* +0xe2711d */ __asm { NOP dword ptr [RAX] }
    /* +0xe27120 */ __asm { MOVZX ECX,uint8_t ptr [RBP + R11*0x1 + -0x1] }
    /* +0xe27126 */ __asm { MOV RAX,qword ptr [R13 + RCX*0x8] }
    /* +0xe2712b */ __asm { MOV ECX,EAX }
    /* +0xe2712d */ __asm { SHR R8,CL }
    /* +0xe27130 */ __asm { MOVZX ECX,uint8_t ptr [RBP + R11*0x1 + -0x2] }
    /* +0xe27136 */ __asm { ADD R11,-0x2 }
    /* +0xe2713a */ __asm { ADD R9,RAX }
    /* +0xe2713d */ __asm { AND RAX,-0x100 }
    /* +0xe27143 */ __asm { OR RAX,R8 }
    /* +0xe27146 */ __asm { MOV RCX,qword ptr [R13 + RCX*0x8] }
    /* +0xe2714b */ __asm { MOVQ XMM2,RCX }
    /* +0xe27150 */ __asm { PAND XMM2,XMM1 }
    /* +0xe27154 */ __asm { SHR RAX,CL }
    /* +0xe27157 */ __asm { ADD R9,RCX }
    /* +0xe2715a */ __asm { MOVQ R8,XMM2 }
    /* +0xe2715f */ __asm { OR R8,RAX }
    /* +0xe27162 */ __asm { ADD EDX,-0x2 }
    /* +0xe27165 */ __asm { JNZ 0x7fffa5597120 }
    /* +0xe27167 */ __asm { TEST R10B,0x1 }
    /* +0xe2716b */ __asm { JNZ 0x7fffa5598704 }
    /* +0xe27171 */ __asm { JMP 0x7fffa5598729 }
    /* +0xe27176 */ __asm { MOVSXD RAX,R13D }
    /* +0xe27179 */ __asm { JZ 0x7fffa5597d23 }
    /* +0xe2717f */ __asm { IMUL RCX,RAX,0x66666667 }
    /* +0xe27186 */ __asm { MOV R10,RCX }
    /* +0xe27189 */ __asm { SHR R10,0x3f }
    /* +0xe2718d */ __asm { SAR RCX,0x21 }
    /* +0xe27191 */ __asm { ADD ECX,R10D }
    /* +0xe27194 */ __asm { LEA ECX,[RCX + RCX*0x4] }
    /* +0xe27197 */ __asm { MOV EDX,R13D }
    /* +0xe2719a */ __asm { SUB EDX,ECX }
    /* +0xe2719c */ __asm { CMP R15D,0xa }
    /* +0xe271a0 */ __asm { JBE 0x7fffa5597e60 }
    /* +0xe271a6 */ __asm { TEST EDX,EDX }
    /* +0xe271a8 */ __asm { JLE 0x7fffa5599a65 }
    /* +0xe271ae */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xe271b5 */ __asm { NOP }
    /* +0xe271b7 */ __asm { MOV R8,0x0 }
    /* +0xe271be */ __asm { MOVSXD R11,R13D }
    /* +0xe271c1 */ __asm { CMP EDX,0x1 }
    /* +0xe271c4 */ __asm { JZ 0x7fffa5599abb }
    /* +0xe271ca */ __asm { MOV EAX,0xb4eb9f59 }
    /* +0xe271cf */ __asm { IMUL EAX,R14D }
    /* +0xe271d3 */ __asm { XOR EAX,0x6f337137 }
    /* +0xe271d8 */ __asm { ROL EAX,0x6 }
    /* +0xe271db */ __asm { MOV R8D,EDX }
    /* +0xe271de */ __asm { AND R8D,0x7ffffffe }
    /* +0xe271e5 */ __asm { MOV R10D,EDX }
    /* +0xe271e8 */ __asm { SHL R10D,0x1f }
    /* +0xe271ec */ __asm { SUB R10D,EDX }
    /* +0xe271ef */ __asm { SUB R10D,EDX }
    /* +0xe271f2 */ __asm { MOV R9D,0x51e6d6c }
    /* +0xe271f8 */ __asm { ADD R9D,0xa856fd7e }
    /* +0xe271ff */ __asm { MOV RCX,qword ptr [RSP + 0x188] }
    /* +0xe27207 */ __asm { ROL R9D,CL }
    /* +0xe2720a */ __asm { ADD R9D,0xe4d7ee4b }
    /* +0xe27211 */ __asm { CMP R9,RAX }
    /* +0xe27214 */ __asm { CMOVG R10D,R8D }
    /* +0xe27218 */ __asm { ADD R11,-0x2 }
    /* +0xe2721c */ __asm { ADD R10D,-0x2 }
    /* +0xe27220 */ __asm { XOR R8D,R8D }
    /* +0xe27223 */ __asm { XOR EAX,EAX }
    /* +0xe27225 */ __asm { MOV RBX,qword ptr [RSP + 0x258] }
    /* +0xe2722d */ __asm { MOVZX ECX,uint8_t ptr [RBP + R11*0x1] }
    /* +0xe27233 */ __asm { MOV R9,qword ptr [RBX + RCX*0x8] }
    /* +0xe27237 */ __asm { MOVZX ECX,uint8_t ptr [RBP + R11*0x1 + 0x1] }
    /* +0xe2723d */ __asm { MOV RDI,qword ptr [RBX + RCX*0x8] }
    /* +0xe27241 */ __asm { MOV ECX,EDI }
    /* +0xe27243 */ __asm { SHR R8,CL }
    /* +0xe27246 */ __asm { ADD RAX,RDI }
    /* +0xe27249 */ __asm { AND RDI,-0x100 }
    /* +0xe27250 */ __asm { OR RDI,R8 }
    /* +0xe27253 */ __asm { MOV ECX,R9D }
    /* +0xe27256 */ __asm { SHR RDI,CL }
    /* +0xe27259 */ __asm { MOVQ XMM1,R9 }
    /* +0xe2725e */ __asm { AND R9,-0x100 }
    /* +0xe27265 */ __asm { MOV R8,RDI }
    /* +0xe27268 */ __asm { OR R8,R9 }
    /* +0xe2726b */ __asm { MOVQ XMM2,RAX }
    /* +0xe27270 */ __asm { PADDQ XMM2,XMM1 }
    /* +0xe27274 */ __asm { MOVQ RAX,XMM2 }
    /* +0xe27279 */ __asm { TEST R10D,R10D }
    /* +0xe2727c */ __asm { JZ 0x7fffa5599ac2 }
    /* +0xe27282 */ __asm { ADD R11,-0x2 }
    /* +0xe27286 */ __asm { ADD R10D,-0x2 }
    /* +0xe2728a */ __asm { JMP 0x7fffa559722d }
    /* +0xe2728c */ __asm { XOR EBX,EBX }
    /* +0xe2728e */ __asm { MOV R11,R12 }
    /* +0xe27291 */ __asm { XOR EDX,EDX }
    /* +0xe27293 */ __asm { MOV R8D,R13D }
    /* +0xe27296 */ __asm { JMP 0x7fffa5597346 }
    /* +0xe2729b */ __asm { MOV qword ptr [RSP + 0x138],0x0 }
    /* +0xe272a7 */ __asm { MOV R15,R12 }
    /* +0xe272aa */ __asm { XOR R8D,R8D }
    /* +0xe272ad */ __asm { MOV R11D,R13D }
    /* +0xe272b0 */ __asm { JMP 0x7fffa5597821 }
    /* +0xe272b5 */ __asm { MOVZX ECX,uint8_t ptr [RBP + R8*0x1 + -0x1] }
    /* +0xe272bb */ __asm { MOV RAX,qword ptr [RSP + 0x258] }
    /* +0xe272c3 */ __asm { MOV RDX,qword ptr [RAX + RCX*0x8] }
    /* +0xe272c7 */ __asm { MOVZX ECX,uint8_t ptr [RBP + R8*0x1 + -0x2] }
    /* +0xe272cd */ __asm { ADD R8,-0x2 }
    /* +0xe272d1 */ __asm { MOV RCX,qword ptr [RAX + RCX*0x8] }
    /* +0xe272d5 */ __asm { LEA RBX,[RCX + RDX*0x1] }
    /* +0xe272d9 */ __asm { AND RDX,-0x100 }
    /* +0xe272e0 */ __asm { SHR RDX,CL }
    /* +0xe272e3 */ __asm { AND RCX,-0x100 }
    /* +0xe272ea */ __asm { OR RDX,RCX }
    /* +0xe272ed */ __asm { TEST R11B,0x1 }
    /* +0xe272f1 */ __asm { JZ 0x7fffa559731b }
    /* +0xe272f3 */ __asm { MOVZX ECX,uint8_t ptr [RBP + R8*0x1 + -0x1] }
    /* +0xe272f9 */ __asm { DEC R8 }
    /* +0xe272fc */ __asm { MOV RAX,qword ptr [RSP + 0x258] }
    /* +0xe27304 */ __asm { MOV RCX,qword ptr [RAX + RCX*0x8] }
    /* +0xe27308 */ __asm { ADD RBX,RCX }
    /* +0xe2730b */ __asm { MOV R10,RCX }
    /* +0xe2730e */ __asm { AND R10,-0x100 }
    /* +0xe27315 */ __asm { SHR RDX,CL }
    /* +0xe27318 */ __asm { OR RDX,R10 }
    /* +0xe2731b */ __asm { MOVZX R11D,BL }
    /* +0xe2731f */ __asm { MOV ECX,EBX }
    /* +0xe27321 */ __asm { NEG CL }
    /* +0xe27323 */ __asm { MOV RAX,RDX }
    /* +0xe27326 */ __asm { SHR RAX,CL }
    /* +0xe27329 */ __asm { SHR R11D,0x3 }
    /* +0xe2732d */ __asm { ADD R11,R12 }
    /* +0xe27330 */ __asm { AND EBX,0x7 }
    /* +0xe27333 */ __asm { MOV RCX,qword ptr [RSP + 0x80] }
    /* +0xe2733b */ __asm { CMP R11,RCX }
    /* +0xe2733e */ __asm { CMOVA R11,RCX }
    /* +0xe27342 */ __asm { MOV qword ptr [R12],RAX }
    /* +0xe27346 */ __asm { MOV ECX,R8D }
    /* +0xe27349 */ __asm { AND ECX,0x7 }
    /* +0xe2734c */ __asm { MOV AX,0xb578 }
    /* +0xe27350 */ __asm { XOR EAX,dword ptr [RSP + 0x188] }
    /* +0xe27357 */ __asm { IMUL EAX,EAX,0x1d8b }
    /* +0xe2735d */ __asm { MOVZX EAX,AX }
    /* +0xe27360 */ __asm { CMP ECX,EAX }
    /* +0xe27362 */ __asm { JZ 0x7fffa559740f }
    /* +0xe27368 */ __asm { MOVSXD R8,R8D }
    /* +0xe2736b */ __asm { MOVZX ECX,uint8_t ptr [RBP + R8*0x1 + -0x2] }
    /* +0xe27371 */ __asm { MOVZX EAX,uint8_t ptr [RBP + R8*0x1 + -0x1] }
    /* +0xe27377 */ __asm { MOV R10,qword ptr [RSP + 0x258] }
    /* +0xe2737f */ __asm { MOV R9,qword ptr [R10 + RCX*0x8] }
    /* +0xe27383 */ __asm { MOV RDI,qword ptr [R10 + RAX*0x8] }
    /* +0xe27387 */ __asm { MOV ECX,EDI }
    /* +0xe27389 */ __asm { SHR RDX,CL }
    /* +0xe2738c */ __asm { OR RDX,RDI }
    /* +0xe2738f */ __asm { MOV ECX,R9D }
    /* +0xe27392 */ __asm { SHR RDX,CL }
    /* +0xe27395 */ __asm { MOVZX ECX,uint8_t ptr [RBP + R8*0x1 + -0x3] }
    /* +0xe2739b */ __asm { MOV RCX,qword ptr [R10 + RCX*0x8] }
    /* +0xe2739f */ __asm { OR RDX,R9 }
    /* +0xe273a2 */ __asm { SHR RDX,CL }
    /* +0xe273a5 */ __asm { MOVQ XMM1,RCX }
    /* +0xe273aa */ __asm { OR RDX,RCX }
    /* +0xe273ad */ __asm { MOVZX ECX,uint8_t ptr [RBP + R8*0x1 + -0x4] }
    /* +0xe273b3 */ __asm { ADD R8,-0x4 }
    /* +0xe273b7 */ __asm { MOV RCX,qword ptr [R10 + RCX*0x8] }
    /* +0xe273bb */ __asm { ADD RBX,RCX }
    /* +0xe273be */ __asm { MOV R10,RCX }
    /* +0xe273c1 */ __asm { SHR RDX,CL }
    /* +0xe273c4 */ __asm { AND R10,-0x100 }
    /* +0xe273cb */ __asm { OR RDX,R10 }
    /* +0xe273ce */ __asm { ADD R9,RDI }
    /* +0xe273d1 */ __asm { ADD R9,RBX }
    /* +0xe273d4 */ __asm { MOVQ XMM2,R9 }
    /* +0xe273d9 */ __asm { PADDQ XMM2,XMM1 }
    /* +0xe273dd */ __asm { MOVQ RCX,XMM2 }
    /* +0xe273e2 */ __asm { MOV EBX,ECX }
    /* +0xe273e4 */ __asm { AND EBX,0x7 }
    /* +0xe273e7 */ __asm { MOVZX R10D,CL }
    /* +0xe273eb */ __asm { NEG CL }
    /* +0xe273ed */ __asm { MOV RAX,RDX }
    /* +0xe273f0 */ __asm { SHR RAX,CL }
    /* +0xe273f3 */ __asm { MOV qword ptr [R11],RAX }
    /* +0xe273f6 */ __asm { SHR R10D,0x3 }
    /* +0xe273fa */ __asm { ADD R10,R11 }
    /* +0xe273fd */ __asm { MOV RAX,qword ptr [RSP + 0x80] }
    /* +0xe27405 */ __asm { CMP R10,RAX }
    /* +0xe27408 */ __asm { CMOVA R10,RAX }
    /* +0xe2740c */ __asm { MOV R11,R10 }
    /* +0xe2740f */ __asm { MOV qword ptr [RSP + 0x138],RBX }
    /* +0xe27417 */ __asm { MOV RSI,qword ptr [RSP + 0x258] }
    /* +0xe2741f */ __asm { TEST R8D,R8D }
    /* +0xe27422 */ __asm { JLE 0x7fffa559779d }
}


// ============================================================================
// Function : FUN_7fffa55ab490  |  RVA: 0xe3b490  |  Size: 608 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55ab490(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47847f6 = 0;
  uRam00007fffa4784820 = 0;
  uRam00007fffa4784828 = 0;
  uRam00007fffa4784810 = 0;
  uRam00007fffa4784818 = 0;
  uRam00007fffa4784800 = 0;
  uRam00007fffa4784808 = 0;
  uRam00007fffa4784830 = 0;
  uRam00007fffa478483f = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x31889aa2246d32;
  lVar4 = 3;
  while( true ) {
    lVar2 = lVar2 * 0x31889aa2246d32 + 0x31889aa2246d32;
    lVar3 = lVar2 * 0x31889aa2246d32 + 0x31889aa2246d32;
    lVar5 = lVar3 * 0x31889aa2246d32 + 0x31889aa2246d32;
    *(char *)(lVar4 + 0x7fffa47847f3) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar4 + 0x7fffa47847f1) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar4 + 0x7fffa47847f2) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar4 == 0x53) break;
    lVar2 = lVar5 * 0x31889aa2246d32 + 0x31889aa2246d32;
    *(char *)(lVar4 + 0x7fffa47847f4) = (char)((uint64_t)lVar2 >> 0x20);
    lVar4 = lVar4 + 4;
  }
  lVar2 = (uint64_t)((uint32_t)bRam00007fffa47847f6 * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)((uint64_t)(uint32_t)((int)((uint64_t)lVar2 >> 0x20) << 3) + 0x7fffa4784800) =
       uRam00007fffa478483f;
  bRam00007fffa47847f6 = (char)((uint64_t)lVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55ab6f0  |  RVA: 0xe3b6f0  |  Size: 521 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55ab6f0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  bRam00007fffa47bd55a = 0;
  uRam00007fffa47bd57f = 0;
  uRam00007fffa47bd587 = 0;
  uRam00007fffa47bd56f = 0;
  uRam00007fffa47bd577 = 0;
  uRam00007fffa47bd55f = 0;
  uRam00007fffa47bd567 = 0;
  uRam00007fffa47bd59e = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x2e28a45a6fbe654 + 0xb;
  lVar6 = 3;
  while( true ) {
    lVar3 = lVar3 * 0x2e28a45a6fbe654 + 0xb;
    *(char *)(lVar6 + 0x7fffa47bd54c) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar6 == 0x5b) break;
    lVar4 = lVar3 * 0x2e28a45a6fbe654 + 0xb;
    lVar5 = lVar4 * 0x2e28a45a6fbe654 + 0xb;
    lVar3 = lVar5 * 0x2e28a45a6fbe654 + 0xb;
    *(char *)(lVar6 + 0x7fffa47bd54d) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bd54f) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bd54e) = (char)((uint64_t)lVar5 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bd55a * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa47bd55f) = 0;
  bRam00007fffa47bd55a = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55ab900  |  RVA: 0xe3b900  |  Size: 780 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55aba0f) */

void FUN_7fffa55ab900(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  uint32_t uVar6;
  uint32_t unaff_ESI;
  int64_t lVar7;
  uint64_t uVar8;
  
  uVar4 = (unaff_ESI & 0xa0c85145) * 0x5437d4b5 + (unaff_ESI | 0xa0c85145) * 0x5e5fa19b +
          (unaff_ESI ^ 0xa0c85145) * 0x5437d4b5 + ~(unaff_ESI | 0xa0c85145) * -0x4d6889b0;
  uVar3 = (uint16_t)uVar4;
  bVar2 = (uint8_t)uVar4 & 7;
  *(uint8_t *)(((int64_t)(int)((uVar4 | 1) * 0x3c05c122) ^ 0xffffffffbbdaa706U) + 0x7fffa47c9810) =
       0U >> bVar2 | '\0' << 8 - bVar2;
  lVar7 = (int64_t)(int)(uVar4 ^ 0xb297dc07);
  *(uint8_t (*) [16])(lVar7 + 0x7fffa47c6000) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar7 + 0x7fffa47c5ff0) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar7 + 0x7fffa47c5fe0) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar7 + 0x7fffa47c6010) = 0;
  uRam00007fffa47bb5d4 = (uint64_t)(uint16_t)(uVar3 + 0x7650);
  lVar7 = rdtsc();
  lVar7 = lVar7 * 0x157fd5fa0c85145 + 1;
  uVar8 = 0;
  while( true ) {
    lVar7 = lVar7 * 0x157fd5fa0c85145 + 1;
    uVar1 = uVar8 + 3;
    lVar5 = lVar7 * 0x157fd5fa0c85145 + 1;
    *(char *)(uVar8 + (int64_t)(int)((uVar4 ^ 0xa3d5764f) << 0x13 | (uVar4 ^ 0xa3d5764f) >> 0xd) +
                      0x7fffa47c3f9e) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(uVar8 + (int64_t)(int)(0x4d680778 - uVar4) + 0x7fffa47c37c4) =
         (char)((uint64_t)lVar7 >> 0x20);
    lVar7 = lVar5 * 0x157fd5fa0c85145 + 1;
    *(char *)(uVar8 + (int64_t)
                      (short)((uint16_t)(uVar4 ^ 0x2d75) >> 1 |
                             (uint16_t)(((uVar4 ^ 0x2d75) & 1) != 0) << 0xf) + 0x7fffa47be32c) =
         (char)((uint64_t)lVar7 >> 0x20);
    if ((uVar1 * 0x400 | uVar1 >> 0x36) == 0x15c00) break;
    uVar8 = uVar1;
  }
  uVar6 = (int)uVar8 + 0xec9dfd1a;
  uVar6 = (uVar6 * 0x8000 | uVar6 >> 0x11) + uVar4;
  bVar2 = (uint8_t)uVar4 & 0xf;
  uVar1 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)(uVar6 * 0x8000 | uVar6 >> 0x11) + 0x7fffa47c8f85) *
           0x24924925 + 0x24924925) * 7;
  *(uint64_t *)
   ((int64_t)(short)(~(0x799bU >> bVar2 | 0x799b << 0x10 - bVar2) + (short)uVar8 + 3) +
    0x7fffa47c2edc + (uVar1 >> 0x20) * 8) =
       *(uint64_t *)
        ((int64_t)(short)(((uVar3 + 0xc9d6) * 0x282f - (short)uVar8) - 3 ^ 0x9a0e) + 0x7fffa47bd687
        );
  *(char *)((int64_t)(short)((uVar3 ^ 0x2656) << 7 | (uVar3 ^ 0x2656) >> 9) + 0x7fffa47bc23d) =
       (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55abd60  |  RVA: 0xe3bd60  |  Size: 400 bytes
// Callers  : FUN_7fffa54037a0@0xc937a0, FUN_7fffa507ae2a@0x90ae2a, FUN_7fffa5605880@0xe95880
// Callees  : none
// ============================================================================
void FUN_7fffa55abd60(int64_t param_1)

{
  uint8_t bVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  uint8_t bVar5;
  uint8_t *pbVar6;
  uint8_t *pbVar7;
  
  *(uint8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x1c) = 0;
  *(uint64_t *)(param_1 + 0x24) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  bVar1 = **(uint8_t **)(param_1 + 8);
  pbVar6 = *(uint8_t **)(param_1 + 8) + 1;
  *(uint8_t *)(param_1 + 0x18) = bVar1;
  *(uint8_t **)(param_1 + 8) = pbVar6;
  if ((bVar1 & 1) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(int64_t)(char)(&UNK_7fffa56b3150)[bVar5 & 0xf];
    *(uint32_t *)(param_1 + 0x1c) = *(uint32_t *)(pbVar6 + -4) >> ((&UNK_7fffa56b3160)[bVar5 & 0xf] & 0x1f);
    *(uint8_t **)(param_1 + 8) = pbVar6;
  }
  if ((bVar1 & 2) != 0) {
    uVar2 = *(uint32_t *)pbVar6;
    pbVar6 = pbVar6 + 4;
    *(uint8_t **)(param_1 + 8) = pbVar6;
    *(uint32_t *)(param_1 + 0x20) = uVar2;
  }
  if ((bVar1 & 4) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(int64_t)(char)(&UNK_7fffa56b3150)[bVar5 & 0xf];
    *(uint32_t *)(param_1 + 0x24) = *(uint32_t *)(pbVar6 + -4) >> ((&UNK_7fffa56b3160)[bVar5 & 0xf] & 0x1f);
    *(uint8_t **)(param_1 + 8) = pbVar6;
  }
  pbVar7 = pbVar6 + 4;
  *(uint32_t *)(param_1 + 0x28) = *(uint32_t *)pbVar6;
  bVar5 = bVar1 & 0x30;
  *(uint8_t **)(param_1 + 8) = pbVar7;
  if ((bVar1 & 8) == 0) {
    if (bVar5 == 0x10) {
      bVar1 = (&UNK_7fffa56b3160)[*pbVar7 & 0xf];
      uVar4 = *(uint32_t *)(((int64_t)pbVar7 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar7 & 0xf]) + -4
                       );
      *(int64_t *)(param_1 + 8) =
           (int64_t)pbVar7 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar7 & 0xf];
      *(uint64_t *)(param_1 + 0x30) =
           (uint64_t)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      return;
    }
    if (bVar5 == 0x20) {
      bVar1 = (&UNK_7fffa56b3160)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar7 & 0xf];
      uVar4 = *(uint32_t *)(pbVar7 + -4);
      *(uint8_t **)(param_1 + 8) = pbVar7;
      *(uint64_t *)(param_1 + 0x30) =
           (uint64_t)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      bVar1 = (&UNK_7fffa56b3160)[*pbVar7 & 0xf];
      uVar4 = *(uint32_t *)(((int64_t)pbVar7 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar7 & 0xf]) + -4
                       );
      *(int64_t *)(param_1 + 8) =
           (int64_t)pbVar7 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar7 & 0xf];
      *(uint64_t *)(param_1 + 0x38) =
           (uint64_t)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
    }
  }
  else {
    if (bVar5 == 0x10) {
      iVar3 = *(int *)pbVar7;
      *(uint8_t **)(param_1 + 8) = pbVar6 + 8;
      *(int64_t *)(param_1 + 0x30) = (int64_t)iVar3;
      return;
    }
    if (bVar5 == 0x20) {
      iVar3 = *(int *)pbVar7;
      *(uint8_t **)(param_1 + 8) = pbVar6 + 8;
      *(int64_t *)(param_1 + 0x30) = (int64_t)iVar3;
      iVar3 = *(int *)(pbVar6 + 8);
      *(uint8_t **)(param_1 + 8) = pbVar6 + 0xc;
      *(int64_t *)(param_1 + 0x38) = (int64_t)iVar3;
      return;
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55abf00  |  RVA: 0xe3bf00  |  Size: 20 bytes
// Callers  : FUN_7fffa5581e30@0xe11e30
// Callees  : FUN_7fffa56a0960@0xf30960
// ============================================================================
bool FUN_7fffa55abf00(void)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa56a0960();
  return lVar1 != 0;
}


// ============================================================================
// Function : FUN_7fffa55abf20  |  RVA: 0xe3bf20  |  Size: 59 bytes
// Callers  : FUN_7fffa5215120@0xaa5120
// Callees  : none
// ============================================================================
uint32_t FUN_7fffa55abf20(int64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint8_t *pbVar2;
  
  if (*(int *)(param_2 + 8) == 0) {
    return 0;
  }
  pbVar2 = (uint8_t *)(*(int64_t *)(param_1 + 8) + (int64_t)*(int *)(param_2 + 8));
  uVar1 = *pbVar2 & 0xf;
  return *(uint32_t *)(pbVar2 + (-4 - (int64_t)(char)(&UNK_7fffa56b3150)[uVar1])) >>
         ((&UNK_7fffa56b3160)[uVar1] & 0x1f);
}


// ============================================================================
// Function : FUN_7fffa55abf60  |  RVA: 0xe3bf60  |  Size: 80 bytes
// Callers  : FUN_7fffa5102405@0x992405
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint64_t FUN_7fffa55abf60(uint32_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint32_t *puStack_28;
  uint64_t uStack_20;
  
  puStack_28 = param_1;
  uStack_20 = param_3;
  lVar1 = FUN_7fffa54539d0();
  (**(code **)(lVar1 + 0x10))(*param_1,&puStack_28);
  return 0;
}


// ============================================================================
// Function : FUN_7fffa55abfb0  |  RVA: 0xe3bfb0  |  Size: 1490 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa55ac456) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ac373) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ac582) */

void FUN_7fffa55abfb0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  uRam00007fffa47bc8a8 = 0xb35387042d5afe87;
  uRam00007fffa47bc8a0 = 0xac3c259b4f36ec9e;
  uRam00007fffa47bc890 = 0x1ffffc00007f;
  uRam00007fffa47bc898 = 0xb07cf7d109725620;
  uVar1 = ((0x470b8e50a0b716b9U - lRam00007fffa4781190 << 0x31 |
           0x470b8e50a0b716b9U - lRam00007fffa4781190 >> 0xf) - lRam00007fffa4780cf8) *
          0x3fffffff80000001;
  uVar2 = uVar1 >> 0x13;
  uRam00007fffa47bc8b0 =
       (uVar1 & 0x7ffff) >> 0xb | (uVar1 << 0x2d & 0xff000000000000) >> 0x28 |
       ((uVar1 << 0x2d | uVar2) & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
       (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 |
       uVar2 << 0x38;
  uVar2 = uRam00007fffa4781090 >> 0x38 | (uRam00007fffa4781090 & 0xff000000000000) >> 0x28 |
          (uRam00007fffa4781090 & 0xff0000000000) >> 0x18 |
          (uRam00007fffa4781090 & 0xff00000000) >> 8 | (uRam00007fffa4781090 & 0xff000000) << 8 |
          (uRam00007fffa4781090 & 0xff0000) << 0x18 | (uRam00007fffa4781090 & 0xff00) << 0x28 |
          uRam00007fffa4781090 << 0x38;
  uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4 | uVar2 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333) * 4;
  uVar2 = ((uVar2 >> 1 & 0x5555555555555555) + (uVar2 & 0x5555555555555555) * 2) *
          0x1a4d5e88e2a773a3;
  uVar2 = uVar2 >> 0x13 ^ uVar2;
  uVar1 = (uVar2 >> 0x26 ^ uVar2) * 0x3fffffff80000001;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar2 = uVar1 >> 0xe ^ uVar1;
  uVar2 = uVar1 >> 0x38 ^ uVar2 >> 0x1c ^ uVar2;
  uVar1 = uVar2 << 0xf ^ uVar2;
  uRam00007fffa47bc8b8 = uVar2 << 0x3c ^ uVar1 << 0x1e ^ uVar1;
  uVar2 = -lRam00007fffa4781490;
  uVar2 = (lRam00007fffa4781490 * -0x20 | uVar2 >> 0x3b) ^
          (lRam00007fffa4781490 * -0x800 | uVar2 >> 0x35) ^ uVar2;
  uVar2 = (uVar2 << 10 | uVar2 >> 0x36) ^ (uVar2 << 0x16 | uVar2 >> 0x2a) ^ uVar2;
  uVar2 = (uVar2 << 0x14 | uVar2 >> 0x2c) ^ (uVar2 << 0x2c | uVar2 >> 0x14) ^ uVar2;
  uVar2 = (uVar2 << 0x28 | uVar2 >> 0x18) ^ (uVar2 << 0x18 | uVar2 >> 0x28) ^ uVar2;
  uRam00007fffa47bc8c8 = 0x912d38498fa1e24f;
  lRam00007fffa47bc8c0 =
       (((uVar2 << 0x10 | uVar2 >> 0x30) ^ (uVar2 << 0x30 | uVar2 >> 0x10) ^ uVar2) +
       0xa81686bb951d0040) * -0x1bfbfc00807ffff;
  return;
}


// ============================================================================
// Function : FUN_7fffa55ac5c0  |  RVA: 0xe3c5c0  |  Size: 614 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55ac5c0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  bRam00007fffa47bb7aa = 0;
  uRam00007fffa47bb7c1 = 0;
  uRam00007fffa47bb7c9 = 0;
  uRam00007fffa47bb7b1 = 0;
  uRam00007fffa47bb7b9 = 0;
  uRam00007fffa47bb7d1 = 0;
  uRam00007fffa47bb7de = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x1f4de1b5458c7e0;
  lVar6 = 3;
  while( true ) {
    lVar3 = lVar3 * 0x1f4de1b5458c7e0 + 0x1f4de1b5458c7e0;
    *(char *)(lVar6 + 0x7fffa47bb7a2) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar6 == 0x4f) break;
    lVar5 = lVar3 * 0x1f4de1b5458c7e0 + 0x1f4de1b5458c7e0;
    lVar4 = lVar5 * 0x1f4de1b5458c7e0 + 0x1f4de1b5458c7e0;
    lVar3 = lVar4 * 0x1f4de1b5458c7e0 + 0x1f4de1b5458c7e0;
    *(char *)(lVar6 + 0x7fffa47bb7a5) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bb7a4) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bb7a3) = (char)((uint64_t)lVar5 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bb7aa * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa47bb7b1) = 0;
  bRam00007fffa47bb7aa = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55ac830  |  RVA: 0xe3c830  |  Size: 758 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55aca4b) */
/* WARNING: Removing unreachable block (ram,0x7fffa55aca3a) */

uint64_t FUN_7fffa55ac830(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint32_t unaff_R13D;
  uint32_t unaff_R14D;
  int iVar6;
  
  uVar4 = param_2 * -0xf;
  uVar2 = param_2 * -0xf000 | uVar4 >> 0x34;
  uVar4 = (param_2 * -0x3c | uVar4 >> 0x3e) ^ uVar4 ^ uVar2;
  uVar5 = uVar4 << 0x29 | uVar4 >> 0x17;
  uVar4 = ~uVar5 & uVar2;
  iVar6 = unaff_R14D * 0x7965aa58 + (~unaff_R13D & unaff_R14D) * -0x73251e00 +
          ~unaff_R14D * 0x7965aa58 + (~unaff_R13D & unaff_R14D) * 0x73251e00;
  uVar3 = ~uVar5 * uVar2;
  if ((uint64_t)((0x7b06c1ddU - iVar6 ^ 0x34d7069) + 0x78f168bb) !=
      (int64_t)(int)~(iVar6 + 0xbe3ad594U)) {
    uVar3 = uVar4;
  }
  uVar1 = param_1 * -0x7ffff;
  uVar1 = (param_1 * -0x3ffff800000 | uVar1 >> 0x29) ^ (param_1 * -0x3ffff8 | uVar1 >> 0x3d) ^ uVar1
  ;
  (*(code *)((int64_t)(short)((0x17a0 - (short)iVar6) * 0x1d) + 0x7fffa52d9d38))
            (uVar1,uVar1 - 0xd6cc1734,uVar5,0xfffffffeffb29a42,
             (uVar2 & uVar4) * -0x1004d65be +
             (~(uVar2 & uVar5) | uVar2) * 0xd516ab6 + ((uVar5 ^ uVar2) & uVar2) * 0x75c7d1ae +
             ((~uVar2 & uVar4) - 1) * 0x2dd67527 +
             (((uVar2 | uVar5) ^ uVar2) - (((uVar5 ^ uVar2) & ~uVar2) + (uVar2 & uVar5 ^ uVar2))) *
             0x687666f8 + (uVar3 & uVar2) * 0xf2fbfb08);
  return uVar5 & 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa55acb60  |  RVA: 0xe3cb60  |  Size: 6783 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55acb60(void) {
    /* +0xe3cb60 */ __asm { PUSH RBX }
    /* +0xe3cb61 */ __asm { PUSH R12 }
    /* +0xe3cb63 */ __asm { PUSH R15 }
    /* +0xe3cb65 */ __asm { PUSH RSI }
    /* +0xe3cb66 */ __asm { PUSH RDI }
    /* +0xe3cb67 */ __asm { PUSH R13 }
    /* +0xe3cb69 */ __asm { SUB RSP,0x58 }
    /* +0xe3cb6d */ __asm { MOV R12,R10 }
    /* +0xe3cb70 */ __asm { MOV RDX,R11 }
    /* +0xe3cb73 */ __asm { SHR RDX,0x20 }
    /* +0xe3cb77 */ __asm { MOV EAX,0x6d0668ad }
    /* +0xe3cb7c */ __asm { MOV R10D,0x948bf502 }
    /* +0xe3cb82 */ __asm { MOVQ XMM4,R11 }
    /* +0xe3cb87 */ __asm { SUB R11,RDX }
    /* +0xe3cb8a */ __asm { XOR R10D,0x821ebc51 }
    /* +0xe3cb91 */ __asm { ADD R10D,R12D }
    /* +0xe3cb94 */ __asm { MOVQ XMM1,RDX }
    /* +0xe3cb99 */ __asm { MOV EBX,R12D }
    /* +0xe3cb9c */ __asm { OR EBX,0x1 }
    /* +0xe3cb9f */ __asm { IMUL EAX,EBX }
    /* +0xe3cba2 */ __asm { ADD EAX,0xd63c4725 }
    /* +0xe3cba7 */ __asm { CMP R10,RAX }
    /* +0xe3cbaa */ __asm { PXOR XMM1,XMM4 }
    /* +0xe3cbae */ __asm { MOVQ RDX,XMM1 }
    /* +0xe3cbb3 */ __asm { CMOVGE RDX,R11 }
    /* +0xe3cbb7 */ __asm { MOV R9,RDX }
    /* +0xe3cbba */ __asm { ROL R9,0xa }
    /* +0xe3cbbe */ __asm { MOV R10,RDX }
    /* +0xe3cbc1 */ __asm { ROL R10,0x3d }
    /* +0xe3cbc5 */ __asm { XOR R10,R9 }
    /* +0xe3cbc8 */ __asm { XOR R10,RDX }
    /* +0xe3cbcb */ __asm { MOV RDX,R10 }
    /* +0xe3cbce */ __asm { ROL RDX,0x14 }
    /* +0xe3cbd2 */ __asm { MOV R9,R10 }
    /* +0xe3cbd5 */ __asm { ROL R9,0x3a }
    /* +0xe3cbd9 */ __asm { XOR R9,RDX }
    /* +0xe3cbdc */ __asm { XOR R9,R10 }
    /* +0xe3cbdf */ __asm { MOV RDX,R9 }
    /* +0xe3cbe2 */ __asm { ROL RDX,0x34 }
    /* +0xe3cbe6 */ __asm { MOV R10,R9 }
    /* +0xe3cbe9 */ __asm { ROL R10,0x28 }
    /* +0xe3cbed */ __asm { XOR R10,RDX }
    /* +0xe3cbf0 */ __asm { XOR R10,R9 }
    /* +0xe3cbf3 */ __asm { MOV RDX,R10 }
    /* +0xe3cbf6 */ __asm { ROL RDX,0x28 }
    /* +0xe3cbfa */ __asm { MOV R9,R10 }
    /* +0xe3cbfd */ __asm { ROL R9,0x10 }
    /* +0xe3cc01 */ __asm { XOR R9,RDX }
    /* +0xe3cc04 */ __asm { XOR R9,R10 }
    /* +0xe3cc07 */ __asm { MOV RDX,R9 }
    /* +0xe3cc0a */ __asm { ROL RDX,0x20 }
    /* +0xe3cc0e */ __asm { MOV R10,R9 }
    /* +0xe3cc11 */ __asm { ROL R10,0x10 }
    /* +0xe3cc15 */ __asm { XOR R10,RDX }
    /* +0xe3cc18 */ __asm { XOR R10,R9 }
    /* +0xe3cc1b */ __asm { ROL R10,0x20 }
    /* +0xe3cc1f */ __asm { MOV RDX,R10 }
    /* +0xe3cc22 */ __asm { SHL RDX,0x11 }
    /* +0xe3cc26 */ __asm { XOR RDX,R10 }
    /* +0xe3cc29 */ __asm { MOV RSI,RDX }
    /* +0xe3cc2c */ __asm { SHL RSI,0x22 }
    /* +0xe3cc30 */ __asm { XOR RSI,RDX }
    /* +0xe3cc33 */ __asm { MOV dword ptr [RSP + 0x40],0x4eb41808 }
    /* +0xe3cc3b */ __asm { MOV R10D,dword ptr [RSP + 0x40] }
    /* +0xe3cc40 */ __asm { CMP R10D,0x94cd0394 }
    /* +0xe3cc47 */ __asm { NOP }
    /* +0xe3cc48 */ __asm { NOP }
    /* +0xe3cc49 */ __asm { NOP }
    /* +0xe3cc4a */ __asm { NOP }
    /* +0xe3cc4b */ __asm { NOP }
    /* +0xe3cc4c */ __asm { MOV dword ptr [RSP + 0x54],0x0 }
    /* +0xe3cc54 */ __asm { RDTSC }
    /* +0xe3cc56 */ __asm { SHL RDX,0x20 }
    /* +0xe3cc5a */ __asm { OR RDX,RAX }
    /* +0xe3cc5d */ __asm { MOV R15,-0x30ebf64fafbc6efb }
    /* +0xe3cc67 */ __asm { IMUL RDX,R15 }
    /* +0xe3cc6b */ __asm { MOV R13,-0x22b18422c4a9c65e }
    /* +0xe3cc75 */ __asm { LEA RCX,[RDX + R13*0x1] }
    /* +0xe3cc79 */ __asm { MOV R11,RCX }
    /* +0xe3cc7c */ __asm { SHR R11,0x2d }
    /* +0xe3cc80 */ __asm { MOV RAX,RCX }
    /* +0xe3cc83 */ __asm { SHR RAX,0x1b }
    /* +0xe3cc87 */ __asm { XOR R11D,EAX }
    /* +0xe3cc8a */ __asm { SHR RCX,0x3b }
    /* +0xe3cc8e */ __asm { ROR R11D,CL }
    /* +0xe3cc91 */ __asm { AND R11D,0x3 }
    /* +0xe3cc95 */ __asm { CMP R11D,0x2 }
    /* +0xe3cc99 */ __asm { JC 0x7fffa55accf9 }
    /* +0xe3cc9b */ __asm { CMP R11D,0x3 }
    /* +0xe3cc9f */ __asm { JZ 0x7fffa55acdd4 }
    /* +0xe3cca5 */ __asm { LEA RAX,[0x7fffa47bd98d] }
    /* +0xe3ccac */ __asm { MOV RDX,-0x3800e49be8e8105c }
    /* +0xe3ccb6 */ __asm { CMP RAX,RDX }
    /* +0xe3ccb9 */ __asm { JZ 0x7fffa55ae9b3 }
    /* +0xe3ccbf */ __asm { MOV R10W,0x3180 }
    /* +0xe3ccc4 */ __asm { MOV DX,0xc305 }
    /* +0xe3ccc8 */ __asm { ADD EDX,0x7f77 }
    /* +0xe3ccce */ __asm { IMUL R10D,R10D,0x1fb }
    /* +0xe3ccd5 */ __asm { XOR EDX,0x4a7c }
    /* +0xe3ccdb */ __asm { MOV ECX,R12D }
    /* +0xe3ccde */ __asm { ROR DX,CL }
    /* +0xe3cce1 */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xe3cce6 */ __asm { MOV EAX,dword ptr [RAX + -0x14ed] }
    /* +0xe3ccec */ __asm { MOVZX R9D,DX }
    /* +0xe3ccf0 */ __asm { ROL R10W,CL }
    /* +0xe3ccf4 */ __asm { JMP 0x7fffa55ad1f0 }
    /* +0xe3ccf9 */ __asm { CMP R11D,0x1 }
    /* +0xe3ccfd */ __asm { JNZ 0x7fffa55acf3b }
    /* +0xe3cd03 */ __asm { MOV EAX,0x275b4352 }
    /* +0xe3cd08 */ __asm { MOV RDX,0xeb72a1a183bc94b }
    /* +0xe3cd12 */ __asm { CMP RAX,RDX }
    /* +0xe3cd15 */ __asm { JZ 0x7fffa55ae9be }
    /* +0xe3cd1b */ __asm { MOV R10D,0x50852f76 }
    /* +0xe3cd21 */ __asm { ADD R10D,0x3bfab228 }
    /* +0xe3cd28 */ __asm { MOVD XMM4,R10D }
    /* +0xe3cd2d */ __asm { MOVD XMM1,EBX }
    /* +0xe3cd31 */ __asm { PMULUDQ XMM1,XMM4 }
    /* +0xe3cd35 */ __asm { MOVD R11D,XMM1 }
    /* +0xe3cd3a */ __asm { MOV R9,qword ptr [RAX + R11*0x1 + 0x8] }
    /* +0xe3cd3f */ __asm { MOV RDX,-0x632fc50609bd7e9e }
    /* +0xe3cd49 */ __asm { MOV RAX,R9 }
    /* +0xe3cd4c */ __asm { MUL RDX }
    /* +0xe3cd4f */ __asm { MOV R10,RDX }
    /* +0xe3cd52 */ __asm { MOV EDX,0x146d540 }
    /* +0xe3cd57 */ __asm { MOV RAX,R9 }
    /* +0xe3cd5a */ __asm { MUL RDX }
    /* +0xe3cd5d */ __asm { ADD RAX,R10 }
    /* +0xe3cd60 */ __asm { ADC RDX,0x0 }
    /* +0xe3cd64 */ __asm { TEST DL,0x1 }
    /* +0xe3cd67 */ __asm { JNZ 0x7fffa55ad007 }
    /* +0xe3cd6d */ __asm { LEA RAX,[0x7fffa47b5262] }
    /* +0xe3cd74 */ __asm { MOV RDX,0x3c9068197f53f5d8 }
    /* +0xe3cd7e */ __asm { CMP RAX,RDX }
    /* +0xe3cd81 */ __asm { JZ 0x7fffa55aea4d }
    /* +0xe3cd87 */ __asm { MOV R10W,0x5c66 }
    /* +0xe3cd8c */ __asm { MOV DX,0xb045 }
    /* +0xe3cd90 */ __asm { IMUL R8D,EDX,0x5859 }
    /* +0xe3cd97 */ __asm { NOT R8D }
    /* +0xe3cd9a */ __asm { MOV DX,0x3417 }
    /* +0xe3cd9e */ __asm { ADD R10D,0xffff8b68 }
    /* +0xe3cda5 */ __asm { MOV ECX,R12D }
    /* +0xe3cda8 */ __asm { ROL R10W,CL }
    /* +0xe3cdac */ __asm { XOR EDX,R12D }
    /* +0xe3cdaf */ __asm { ROL R10W,0xb }
    /* +0xe3cdb4 */ __asm { MOVZX R11D,R10W }
    /* +0xe3cdb8 */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xe3cdbd */ __asm { MOV EAX,dword ptr [RAX + R11*0x1 + 0x38] }
    /* +0xe3cdc2 */ __asm { NOT EDX }
    /* +0xe3cdc4 */ __asm { MOVZX EDX,DX }
    /* +0xe3cdc7 */ __asm { ROL R8W,0x1 }
    /* +0xe3cdcb */ __asm { MOVZX R9D,R8W }
    /* +0xe3cdcf */ __asm { JMP 0x7fffa55ad1f4 }
    /* +0xe3cdd4 */ __asm { MOV R10D,R12D }
    /* +0xe3cdd7 */ __asm { OR R10D,0x1 }
    /* +0xe3cddb */ __asm { RDTSC }
    /* +0xe3cddd */ __asm { SHL RDX,0x20 }
    /* +0xe3cde1 */ __asm { OR RDX,RAX }
    /* +0xe3cde4 */ __asm { MOV R9,-0x6bdeac2e46be109b }
    /* +0xe3cdee */ __asm { IMUL R9,RDX }
    /* +0xe3cdf2 */ __asm { MOV RAX,0x5942e665b3113582 }
    /* +0xe3cdfc */ __asm { ADD RAX,R9 }
    /* +0xe3cdff */ __asm { MOV RCX,RAX }
    /* +0xe3ce02 */ __asm { SHR RCX,0x3b }
    /* +0xe3ce06 */ __asm { MOV R11,RAX }
    /* +0xe3ce09 */ __asm { SHR R11,0x2d }
    /* +0xe3ce0d */ __asm { MOV DX,0xd92b }
    /* +0xe3ce11 */ __asm { IMUL EDX,R10D }
    /* +0xe3ce15 */ __asm { SHR RAX,0x1b }
    /* +0xe3ce19 */ __asm { XOR R11D,EAX }
    /* +0xe3ce1c */ __asm { ROR R11D,CL }
    /* +0xe3ce1f */ __asm { ADD EDX,0xffffac8d }
    /* +0xe3ce25 */ __asm { MOVZX EAX,DX }
    /* +0xe3ce28 */ __asm { MOV RDX,qword ptr GS:[RAX] }
    /* +0xe3ce2c */ __asm { MOV R9,-0x6ea22be505e28423 }
    /* +0xe3ce36 */ __asm { ADD R9,R12 }
    /* +0xe3ce39 */ __asm { MOV R10,qword ptr [RSP + 0x88] }
    /* +0xe3ce41 */ __asm { MOV R10,qword ptr [R10 + -0xa8] }
    /* +0xe3ce48 */ __asm { ADD R10,qword ptr [RDX + 0x18] }
    /* +0xe3ce4c */ __asm { XOR R10,R9 }
    /* +0xe3ce4f */ __asm { CMP R10,-0x1 }
    /* +0xe3ce53 */ __asm { JZ 0x7fffa55ae879 }
    /* +0xe3ce59 */ __asm { CMP R11D,0x40ad49 }
    /* +0xe3ce60 */ __asm { JA 0x7fffa55acec2 }
    /* +0xe3ce62 */ __asm { MOV R10W,0xff39 }
    /* +0xe3ce67 */ __asm { ADD R10D,0x67fb }
    /* +0xe3ce6e */ __asm { ROL R10W,0x8 }
    /* +0xe3ce73 */ __asm { MOVD XMM4,R10D }
    /* +0xe3ce78 */ __asm { MOVD XMM1,R12D }
    /* +0xe3ce7d */ __asm { PADDW XMM1,XMM4 }
    /* +0xe3ce81 */ __asm { PEXTRW R11D,XMM1,0x0 }
    /* +0xe3ce87 */ __asm { MOV RDX,qword ptr GS:[R11] }
    /* +0xe3ce8b */ __asm { MOV R9,0x2e084f38ce5ffe47 }
    /* +0xe3ce95 */ __asm { IMUL R9,qword ptr [RDX + 0x30] }
    /* +0xe3ce9a */ __asm { MOV RDX,-0x3012ec944fdb4faf }
    /* +0xe3cea4 */ __asm { ADD RDX,R9 }
    /* +0xe3cea7 */ __asm { MOV R9D,0x88502fba }
    /* +0xe3cead */ __asm { XOR R9,RDX }
    /* +0xe3ceb0 */ __asm { MOV RDX,0x498e0ea56218f20 }
    /* +0xe3ceba */ __asm { CMP R9,RDX }
    /* +0xe3cebd */ __asm { NOP }
    /* +0xe3cebe */ __asm { NOP }
    /* +0xe3cebf */ __asm { NOP }
    /* +0xe3cec0 */ __asm { NOP }
    /* +0xe3cec1 */ __asm { NOP }
    /* +0xe3cec2 */ __asm { MOV RDX,-0x333cd708f3c43f20 }
    /* +0xe3cecc */ __asm { LEA RAX,[0x7fffa4787bdc] }
    /* +0xe3ced3 */ __asm { IMUL RDX,RDX,-0x3812f42f }
    /* +0xe3ceda */ __asm { ADD RDX,0x52fea9f9 }
    /* +0xe3cee1 */ __asm { MOV ECX,R12D }
    /* +0xe3cee4 */ __asm { ROR RDX,CL }
    /* +0xe3cee7 */ __asm { NOP }
    /* +0xe3cee9 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xe3cef0 */ __asm { MOV R11,0x0 }
    /* +0xe3cef7 */ __asm { CMP RAX,RDX }
    /* +0xe3cefa */ __asm { JZ 0x7fffa55ae9c6 }
    /* +0xe3cf00 */ __asm { MOV R10W,0xebfb }
    /* +0xe3cf05 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe3cf0c */ __asm { MOV R11,0x0 }
    /* +0xe3cf13 */ __asm { NOP }
    /* +0xe3cf14 */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xe3cf19 */ __asm { MOV EAX,dword ptr [RAX + -0x3578] }
    /* +0xe3cf1f */ __asm { MOV DX,0xcc09 }
    /* +0xe3cf23 */ __asm { SUB EDX,R12D }
    /* +0xe3cf26 */ __asm { ROL DX,0xe }
    /* +0xe3cf2a */ __asm { MOVZX R9D,DX }
    /* +0xe3cf2e */ __asm { SUB R10D,R12D }
    /* +0xe3cf31 */ __asm { ROL R10W,0x3 }
    /* +0xe3cf36 */ __asm { JMP 0x7fffa55ad1f0 }
    /* +0xe3cf3b */ __asm { MOV EAX,0x4e18f8dc }
    /* +0xe3cf40 */ __asm { MOV RDX,-0x55069270fcee257 }
    /* +0xe3cf4a */ __asm { CMP RAX,RDX }
    /* +0xe3cf4d */ __asm { NOP }
    /* +0xe3cf4e */ __asm { NOP }
    /* +0xe3cf4f */ __asm { NOP }
    /* +0xe3cf50 */ __asm { NOP }
    /* +0xe3cf51 */ __asm { NOP }
    /* +0xe3cf52 */ __asm { NOP }
    /* +0xe3cf53 */ __asm { NOP }
    /* +0xe3cf54 */ __asm { NOP }
    /* +0xe3cf55 */ __asm { NOP }
    /* +0xe3cf56 */ __asm { NOP }
    /* +0xe3cf57 */ __asm { NOP }
    /* +0xe3cf58 */ __asm { NOP }
    /* +0xe3cf59 */ __asm { NOP }
    /* +0xe3cf5a */ __asm { NOP }
    /* +0xe3cf5b */ __asm { NOP }
    /* +0xe3cf5c */ __asm { NOP }
    /* +0xe3cf5d */ __asm { NOP }
    /* +0xe3d007 */ __asm { RDTSC }
    /* +0xe3d009 */ __asm { SHL RDX,0x20 }
    /* +0xe3d00d */ __asm { OR RDX,RAX }
    /* +0xe3d010 */ __asm { MOV R9,-0x6bdeac2e46be109b }
    /* +0xe3d01a */ __asm { IMUL R9,RDX }
    /* +0xe3d01e */ __asm { MOV RCX,-0x47f9eaaf826164e6 }
    /* +0xe3d028 */ __asm { ADD RCX,R9 }
    /* +0xe3d02b */ __asm { MOV RAX,RCX }
    /* +0xe3d02e */ __asm { SHR RAX,0x1b }
    /* +0xe3d032 */ __asm { MOV R11,RCX }
    /* +0xe3d035 */ __asm { SHR R11,0x2d }
    /* +0xe3d039 */ __asm { XOR R11D,EAX }
    /* +0xe3d03c */ __asm { SHR RCX,0x3b }
    /* +0xe3d040 */ __asm { ROR R11D,CL }
    /* +0xe3d043 */ __asm { MOV dword ptr [RSP + 0x40],0xe49034e0 }
    /* +0xe3d04b */ __asm { MOV R10D,dword ptr [RSP + 0x40] }
    /* +0xe3d050 */ __asm { CMP R10D,0x25d34d04 }
    /* +0xe3d057 */ __asm { JBE 0x7fffa55aea55 }
    /* +0xe3d05d */ __asm { CMP R11D,0x107a07e }
    /* +0xe3d064 */ __asm { JA 0x7fffa55ad18e }
    /* +0xe3d06a */ __asm { PUSHFQ }
    /* +0xe3d06b */ __asm { POP R10 }
    /* +0xe3d06d */ __asm { TEST R10D,0x100 }
    /* +0xe3d074 */ __asm { NOP }
    /* +0xe3d075 */ __asm { NOP }
    /* +0xe3d076 */ __asm { NOP }
    /* +0xe3d077 */ __asm { NOP }
    /* +0xe3d078 */ __asm { NOP }
    /* +0xe3d079 */ __asm { NOP }
    /* +0xe3d07a */ __asm { NOP }
    /* +0xe3d07b */ __asm { NOP }
    /* +0xe3d07c */ __asm { NOP }
    /* +0xe3d07d */ __asm { NOP }
    /* +0xe3d07e */ __asm { NOP }
    /* +0xe3d07f */ __asm { NOP }
    /* +0xe3d080 */ __asm { NOP }
    /* +0xe3d081 */ __asm { NOP }
    /* +0xe3d082 */ __asm { NOP }
    /* +0xe3d083 */ __asm { NOP }
    /* +0xe3d084 */ __asm { NOP }
    /* +0xe3d18e */ __asm { LEA RAX,[0x7fffa477dd2e] }
    /* +0xe3d195 */ __asm { MOV RDX,-0x7bf8325a5f552f10 }
    /* +0xe3d19f */ __asm { CMP RAX,RDX }
    /* +0xe3d1a2 */ __asm { JZ 0x7fffa55aea68 }
    /* +0xe3d1a8 */ __asm { MOV R11D,0x83d9d9a8 }
    /* +0xe3d1ae */ __asm { SUB R11D,R12D }
    /* +0xe3d1b1 */ __asm { MOV qword ptr [RSP + 0x40],R10 }
    /* +0xe3d1b6 */ __asm { MOV R10W,0xbfa5 }
    /* +0xe3d1bb */ __asm { ADD R10D,0x597f }
    /* +0xe3d1c2 */ __asm { MOV EDX,R12D }
    /* +0xe3d1c5 */ __asm { OR EDX,0x1 }
    /* +0xe3d1c8 */ __asm { IMUL EDX,R10D }
    /* +0xe3d1cc */ __asm { MOV R8D,0x97c57d99 }
    /* +0xe3d1d2 */ __asm { XOR R8,R11 }
    /* +0xe3d1d5 */ __asm { MOVZX R9D,DX }
    /* +0xe3d1d9 */ __asm { MOV EAX,dword ptr [RAX + R8*0x1 + 0x9c] }
    /* +0xe3d1e1 */ __asm { MOV R10W,0x5b88 }
    /* +0xe3d1e6 */ __asm { XOR R10D,0x6f90 }
    /* +0xe3d1ed */ __asm { ADD R10D,R12D }
    /* +0xe3d1f0 */ __asm { MOVZX EDX,R10W }
    /* +0xe3d1f4 */ __asm { LEA R8,[RSP + 0x54] }
    /* +0xe3d1f9 */ __asm { MOV R10,RSI }
    /* +0xe3d1fc */ __asm { SYSCALL }
    /* +0xe3d1fe */ __asm { NOP }
    /* +0xe3d200 */ __asm { MOV R11,0x0 }
    /* +0xe3d207 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xe3d20e */ __asm { TEST EAX,EAX }
    /* +0xe3d210 */ __asm { JNS 0x7fffa55ae88e }
    /* +0xe3d216 */ __asm { MOV dword ptr [RSP + 0x40],0xb93b7363 }
    /* +0xe3d21e */ __asm { MOV R10D,dword ptr [RSP + 0x40] }
    /* +0xe3d223 */ __asm { CMP R10D,0x7b2ea91b }
    /* +0xe3d22a */ __asm { JBE 0x7fffa55ae8ca }
    /* +0xe3d230 */ __asm { RDTSC }
    /* +0xe3d232 */ __asm { SHL RDX,0x20 }
    /* +0xe3d236 */ __asm { OR RDX,RAX }
    /* +0xe3d239 */ __asm { MOV R10W,0x3607 }
    /* +0xe3d23e */ __asm { IMUL RDX,R15 }
    /* +0xe3d242 */ __asm { LEA RCX,[RDX + R13*0x1] }
    /* +0xe3d246 */ __asm { MOV R11,RCX }
    /* +0xe3d249 */ __asm { SHR R11,0x2d }
    /* +0xe3d24d */ __asm { ADD R10D,R12D }
    /* +0xe3d250 */ __asm { ROL R10W,0x8 }
    /* +0xe3d255 */ __asm { MOV RAX,RCX }
    /* +0xe3d258 */ __asm { SHR RAX,0x1b }
    /* +0xe3d25c */ __asm { XOR R11D,EAX }
    /* +0xe3d25f */ __asm { SHR RCX,0x3b }
    /* +0xe3d263 */ __asm { ROR R11D,CL }
    /* +0xe3d266 */ __asm { MOVZX R10D,R10W }
    /* +0xe3d26a */ __asm { AND R11D,0x3 }
    /* +0xe3d26e */ __asm { CMP R11D,R10D }
    /* +0xe3d271 */ __asm { JC 0x7fffa55ad366 }
    /* +0xe3d277 */ __asm { CMP R11D,0x3 }
    /* +0xe3d27b */ __asm { JNZ 0x7fffa55ad3fd }
    /* +0xe3d281 */ __asm { MOV EAX,0xe0839a10 }
    /* +0xe3d286 */ __asm { LEA RDX,[RAX + 0x2e71132e] }
    /* +0xe3d28d */ __asm { MOV R9D,0xdbce55c3 }
    /* +0xe3d293 */ __asm { XOR R9,RDX }
    /* +0xe3d296 */ __asm { MOV RDX,0x4f1efcbaf8525533 }
    /* +0xe3d2a0 */ __asm { CMP R9,RDX }
    /* +0xe3d2a3 */ __asm { JZ 0x7fffa55ae9d9 }
    /* +0xe3d2a9 */ __asm { MOV R10D,0x995a793d }
    /* +0xe3d2af */ __asm { IMUL R10D,R10D,-0x1b5ee785 }
    /* +0xe3d2b6 */ __asm { MOV ECX,R12D }
    /* +0xe3d2b9 */ __asm { ROL R10D,CL }
    /* +0xe3d2bc */ __asm { MOVQ XMM4,RAX }
    /* +0xe3d2c1 */ __asm { MOVSXD RDX,R10D }
    /* +0xe3d2c4 */ __asm { MOVQ XMM1,RDX }
    /* +0xe3d2c9 */ __asm { PADDQ XMM1,XMM4 }
    /* +0xe3d2cd */ __asm { MOVQ RDX,XMM1 }
    /* +0xe3d2d2 */ __asm { CMP dword ptr [RDX + 0x3c0],0xd }
    /* +0xe3d2d9 */ __asm { JC 0x7fffa55ad692 }
    /* +0xe3d2df */ __asm { LEA R8,[0x7fffa47b54fe] }
    /* +0xe3d2e6 */ __asm { MOV RDX,0x55387746e060599a }
    /* +0xe3d2f0 */ __asm { CMP R8,RDX }
    /* +0xe3d2f3 */ __asm { JZ 0x7fffa55aea70 }
    /* +0xe3d2f9 */ __asm { MOV R10D,0xa99bb0de }
    /* +0xe3d2ff */ __asm { ADD R10D,R12D }
    /* +0xe3d302 */ __asm { MOV AX,0xc993 }
    /* +0xe3d306 */ __asm { MOVD XMM4,EBX }
    /* +0xe3d30a */ __asm { MOV DX,0x85ff }
    /* +0xe3d30e */ __asm { XOR EDX,0x4767 }
    /* +0xe3d314 */ __asm { IMUL EDX,EDX,-0x7311 }
    /* +0xe3d31a */ __asm { MOV ECX,R12D }
    /* +0xe3d31d */ __asm { XOR ECX,EDX }
    /* +0xe3d31f */ __asm { MOVZX EDX,CX }
    /* +0xe3d322 */ __asm { MOV ECX,0x9e421053 }
    /* +0xe3d327 */ __asm { ADD ECX,0x8512bd0f }
    /* +0xe3d32d */ __asm { MOVD XMM1,ECX }
    /* +0xe3d331 */ __asm { PMULUDQ XMM1,XMM4 }
    /* +0xe3d335 */ __asm { ADD EAX,0x366d }
    /* +0xe3d33a */ __asm { MOV ECX,R12D }
    /* +0xe3d33d */ __asm { ROR AX,CL }
    /* +0xe3d340 */ __asm { MOVZX R9D,AX }
    /* +0xe3d344 */ __asm { MOV qword ptr [RSP + 0x40],RAX }
    /* +0xe3d349 */ __asm { MOVD R11D,XMM1 }
    /* +0xe3d34e */ __asm { MOV EAX,dword ptr [R11 + R8*0x1 + 0x38] }
    /* +0xe3d353 */ __asm { IMUL R10D,R10D,0x7ffe026d }
    /* +0xe3d35a */ __asm { ADD R10D,0x5c8f2a74 }
    /* +0xe3d361 */ __asm { JMP 0x7fffa55ad8b9 }
    /* +0xe3d366 */ __asm { CMP R11D,0x1 }
    /* +0xe3d36a */ __asm { JNZ 0x7fffa55ad459 }
    /* +0xe3d370 */ __asm { LEA RAX,[0x7fffa47c2fab] }
    /* +0xe3d377 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xe3d37e */ __asm { NOP }
    /* +0xe3d380 */ __asm { MOV R11,0x0 }
    /* +0xe3d387 */ __asm { MOV RDX,0x34f5feb8d990bbd5 }
    /* +0xe3d391 */ __asm { CMP RAX,RDX }
    /* +0xe3d394 */ __asm { JZ 0x7fffa55ae9e1 }
    /* +0xe3d39a */ __asm { MOV R10W,0xcae9 }
    /* +0xe3d39f */ __asm { XOR R10D,R12D }
    /* +0xe3d3a2 */ __asm { MOVD XMM4,R12D }
    /* +0xe3d3a7 */ __asm { ROL R10W,0xc }
    /* +0xe3d3ac */ __asm { MOVZX EDX,R10W }
    /* +0xe3d3b0 */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xe3d3b5 */ __asm { MOV ECX,R12D }
    /* +0xe3d3b8 */ __asm { OR ECX,0x1 }
    /* +0xe3d3bb */ __asm { MOV R10W,0xcbf8 }
    /* +0xe3d3c0 */ __asm { MOVD XMM1,R10D }
    /* +0xe3d3c5 */ __asm { PSUBW XMM1,XMM4 }
    /* +0xe3d3c9 */ __asm { MOVD R10D,XMM1 }
    /* +0xe3d3ce */ __asm { ROL R10W,0x9 }
    /* +0xe3d3d3 */ __asm { MOVSX R10,R10W }
    /* +0xe3d3d7 */ __asm { MOV EAX,dword ptr [RAX + -0x6b0b] }
    /* +0xe3d3dd */ __asm { MOV R8W,0x3e7c }
    /* +0xe3d3e2 */ __asm { IMUL R8D,ECX }
    /* +0xe3d3e6 */ __asm { ADD R8D,0xffffe828 }
    /* +0xe3d3ed */ __asm { XOR R8D,0x2c4 }
    /* +0xe3d3f4 */ __asm { MOVZX R9D,R8W }
    /* +0xe3d3f8 */ __asm { JMP 0x7fffa55ad944 }
    /* +0xe3d3fd */ __asm { LEA RAX,[0x7fffa47b6e11] }
    /* +0xe3d404 */ __asm { MOV RDX,0x67deed49440dd6b9 }
    /* +0xe3d40e */ __asm { CMP RAX,RDX }
    /* +0xe3d411 */ __asm { JZ 0x7fffa55ae9ef }
    /* +0xe3d417 */ __asm { MOV R10W,0xcbf9 }
    /* +0xe3d41c */ __asm { XOR R10D,R12D }
    /* +0xe3d41f */ __asm { MOV EDX,0xacc97123 }
    /* +0xe3d424 */ __asm { IMUL R10D,R10D,0x64c5 }
    /* +0xe3d42b */ __asm { MOVZX R9D,R10W }
    /* +0xe3d42f */ __asm { XOR EDX,0x53368edc }
    /* +0xe3d435 */ __asm { MOV ECX,R12D }
    /* +0xe3d438 */ __asm { ROR EDX,CL }
    /* +0xe3d43a */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xe3d43f */ __asm { MOVSXD R10,EDX }
    /* +0xe3d442 */ __asm { MOV DX,0x3417 }
    /* +0xe3d446 */ __asm { XOR EDX,R12D }
    /* +0xe3d449 */ __asm { NOT EDX }
    /* +0xe3d44b */ __asm { MOVZX EDX,DX }
    /* +0xe3d44e */ __asm { MOV EAX,dword ptr [RAX + 0x6177] }
    /* +0xe3d454 */ __asm { JMP 0x7fffa55ad944 }
    /* +0xe3d459 */ __asm { MOV EAX,0x3fb3aa3f }
    /* +0xe3d45e */ __asm { MOV RDX,-0x132d8e1d53b2acd9 }
    /* +0xe3d468 */ __asm { CMP RAX,RDX }
    /* +0xe3d46b */ __asm { NOP }
    /* +0xe3d46c */ __asm { NOP }
    /* +0xe3d46d */ __asm { NOP }
    /* +0xe3d46e */ __asm { NOP }
    /* +0xe3d46f */ __asm { NOP }
    /* +0xe3d470 */ __asm { MOV R9,qword ptr [RAX + 0x404a55c9] }
    /* +0xe3d477 */ __asm { MOV RDX,-0x124daabc10118a5a }
    /* +0xe3d481 */ __asm { MOV RAX,R9 }
    /* +0xe3d484 */ __asm { MUL RDX }
    /* +0xe3d487 */ __asm { MOV R10,RDX }
    /* +0xe3d48a */ __asm { MOV EDX,0x1473ed2 }
    /* +0xe3d48f */ __asm { MOV RAX,R9 }
    /* +0xe3d492 */ __asm { MUL RDX }
    /* +0xe3d495 */ __asm { ADD RAX,R10 }
    /* +0xe3d498 */ __asm { ADC RDX,0x0 }
    /* +0xe3d49c */ __asm { TEST DL,0x1 }
    /* +0xe3d49f */ __asm { JZ 0x7fffa55ad8c1 }
    /* +0xe3d4a5 */ __asm { LEA RAX,[0x7fffa47b70ac] }
    /* +0xe3d4ac */ __asm { MOV R10D,0xab4a6969 }
    /* +0xe3d4b2 */ __asm { IMUL R10D,R10D,0x729507ff }
    /* +0xe3d4b9 */ __asm { MOV ECX,R12D }
    /* +0xe3d4bc */ __asm { ROL R10D,CL }
    /* +0xe3d4bf */ __asm { MOV RDX,0x3e72592b4b6f02ec }
    /* +0xe3d4c9 */ __asm { XOR ECX,ECX }
    /* +0xe3d4cb */ __asm { XOR R8D,R8D }
    /* +0xe3d4ce */ __asm { CMP RAX,RDX }
    /* +0xe3d4d1 */ __asm { SETZ CL }
    /* +0xe3d4d4 */ __asm { SETA R8B }
    /* +0xe3d4d8 */ __asm { MOV R11D,0x30d8a0ff }
    /* +0xe3d4de */ __asm { ADD R10D,0x9426b277 }
    /* +0xe3d4e5 */ __asm { MOVSXD RDX,R10D }
    /* +0xe3d4e8 */ __asm { NEG R11D }
    /* +0xe3d4eb */ __asm { ADD R11D,R12D }
    /* +0xe3d4ee */ __asm { ADD R11D,0x4f6b974b }
    /* +0xe3d4f5 */ __asm { CMP R11,RDX }
    /* +0xe3d4f8 */ __asm { CMOVLE ECX,R8D }
    /* +0xe3d4fc */ __asm { CMP CL,0x1 }
    /* +0xe3d4ff */ __asm { JZ 0x7fffa55aea78 }
    /* +0xe3d505 */ __asm { MOV R10W,0xc10e }
    /* +0xe3d50a */ __asm { ADD R10D,R12D }
    /* +0xe3d50d */ __asm { MOV qword ptr [RSP + 0x40],R11 }
    /* +0xe3d512 */ __asm { MOV DX,0xf036 }
    /* +0xe3d516 */ __asm { XOR EDX,0xffff899d }
    /* +0xe3d51c */ __asm { ADD EDX,0xffff8666 }
    /* +0xe3d522 */ __asm { MOVZX EDX,DX }
    /* +0xe3d525 */ __asm { MOV CX,0x1e6 }
    /* +0xe3d529 */ __asm { MOVD XMM4,ECX }
    /* +0xe3d52d */ __asm { IMUL R10D,R10D,-0xe83 }
    /* +0xe3d534 */ __asm { ADD R10D,0xffff8c95 }
    /* +0xe3d53b */ __asm { MOVZX R9D,R10W }
    /* +0xe3d53f */ __asm { MOVD XMM1,R12D }
    /* +0xe3d544 */ __asm { PADDW XMM1,XMM4 }
    /* +0xe3d548 */ __asm { MOVD R10D,XMM1 }
    /* +0xe3d54d */ __asm { IMUL R11D,R10D,-0x2e1f }
    /* +0xe3d554 */ __asm { MOV EAX,dword ptr [RAX + 0x53f4] }
    /* +0xe3d55a */ __asm { MOVSX R10,R11W }
    /* +0xe3d55e */ __asm { JMP 0x7fffa55ad944 }
    /* +0xe3d692 */ __asm { RDTSC }
    /* +0xe3d694 */ __asm { SHL RDX,0x20 }
    /* +0xe3d698 */ __asm { OR RDX,RAX }
}


// ============================================================================
// Function : FUN_7fffa55aebc0  |  RVA: 0xe3ebc0  |  Size: 139 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa55aebc0(uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar3 = (*(code *)&DAT_7ff84ea18620)();
  if ((*param_1 & 0xfffffeff) == 1) {
    if (param_1[0x12] != uVar3) {
      (*(code *)&DAT_7ff8504ead30)(param_1 + 4);
      param_1[0x12] = uVar3;
    }
    param_1[0x13] = param_1[0x13] + 1;
    return 0;
  }
  if (param_1[0x12] != uVar3) {
    (*(code *)&DAT_7ff8504ead30)(param_1 + 4);
  }
  uVar2 = param_1[0x13];
  uVar1 = uVar2 + 1;
  param_1[0x13] = uVar1;
  if ((int)uVar1 < 2) {
    param_1[0x12] = uVar3;
  }
  else if ((*param_1 & 0x100) == 0) {
    param_1[0x13] = uVar2;
    return 3;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa55aec50  |  RVA: 0xe3ec50  |  Size: 4431 bytes
// Callers  : none
// Callees  : FUN_7fffa5491f30@0xd21f30, FUN_7fffa54991f0@0xd291f0, FUN_7fffa560e390@0xe9e390, FUN_7fffa5244750@0xad4750, FUN_7fffa5659a60@0xee9a60, FUN_7fffa54539d0@0xce39d0, FUN_7fffa5687b90@0xf17b90, FUN_7fffa5488e60@0xd18e60
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55aec50(void) {
    /* +0xe3ec50 */ __asm { PUSH R15 }
    /* +0xe3ec52 */ __asm { PUSH R13 }
    /* +0xe3ec54 */ __asm { PUSH RBP }
    /* +0xe3ec55 */ __asm { PUSH RBX }
    /* +0xe3ec56 */ __asm { PUSH R12 }
    /* +0xe3ec58 */ __asm { PUSH RSI }
    /* +0xe3ec59 */ __asm { SUB RSP,0x68 }
    /* +0xe3ec5d */ __asm { MOV RSI,qword ptr [RSP + 0xc0] }
    /* +0xe3ec65 */ __asm { MOV R9D,0xc14f0c74 }
    /* +0xe3ec6b */ __asm { ADD R9D,0x3f96606c }
    /* +0xe3ec72 */ __asm { RDTSC }
    /* +0xe3ec74 */ __asm { SHL RDX,0x20 }
    /* +0xe3ec78 */ __asm { OR RDX,RAX }
    /* +0xe3ec7b */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0xe3ec85 */ __asm { IMUL RCX,RDX }
    /* +0xe3ec89 */ __asm { MOV R8,-0x67f170f56fe66550 }
    /* +0xe3ec93 */ __asm { XOR R8,RSI }
    /* +0xe3ec96 */ __asm { ROL R8,0x2f }
    /* +0xe3ec9a */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xe3eca4 */ __asm { ADD RAX,RCX }
    /* +0xe3eca7 */ __asm { MOV RCX,RAX }
    /* +0xe3ecaa */ __asm { SHR RCX,0x3b }
    /* +0xe3ecae */ __asm { MOV RDX,RAX }
    /* +0xe3ecb1 */ __asm { SHR RDX,0x1b }
    /* +0xe3ecb5 */ __asm { SHR RAX,0x2d }
    /* +0xe3ecb9 */ __asm { XOR EAX,EDX }
    /* +0xe3ecbb */ __asm { MOV R13D,ESI }
    /* +0xe3ecbe */ __asm { OR R13D,0x1 }
    /* +0xe3ecc2 */ __asm { XOR R9D,ESI }
    /* +0xe3ecc5 */ __asm { IMUL R9D,R9D,-0x3fffffe1 }
    /* +0xe3eccc */ __asm { MOVSXD R9,R9D }
    /* +0xe3eccf */ __asm { ROR EAX,CL }
    /* +0xe3ecd1 */ __asm { MOV EDX,0x7bcedc17 }
    /* +0xe3ecd6 */ __asm { AND EAX,0x3 }
    /* +0xe3ecd9 */ __asm { MOV R12,R11 }
    /* +0xe3ecdc */ __asm { ROL R12,0x27 }
    /* +0xe3ece0 */ __asm { ADD EDX,0xd998e605 }
    /* +0xe3ece6 */ __asm { MOVD XMM3,EDX }
    /* +0xe3ecea */ __asm { MOVD XMM1,R13D }
    /* +0xe3ecef */ __asm { PMULUDQ XMM3,XMM1 }
    /* +0xe3ecf3 */ __asm { MOVD EDX,XMM3 }
    /* +0xe3ecf7 */ __asm { ADD EDX,0x16d3c81 }
    /* +0xe3ecfd */ __asm { MOVSXD RDX,EDX }
    /* +0xe3ed00 */ __asm { MOV R15,-0x293d0df7c527a1bf }
    /* +0xe3ed0a */ __asm { IMUL R15,R10 }
    /* +0xe3ed0e */ __asm { IMUL R15,R8 }
    /* +0xe3ed12 */ __asm { MOV R10W,0xfa6a }
    /* +0xe3ed17 */ __asm { IMUL R10D,R10D,-0x1053 }
    /* +0xe3ed1e */ __asm { MOV ECX,ESI }
    /* +0xe3ed20 */ __asm { ROL R10W,CL }
    /* +0xe3ed24 */ __asm { MOV RCX,R11 }
    /* +0xe3ed27 */ __asm { ROL RCX,0x3e }
    /* +0xe3ed2b */ __asm { XOR RCX,R12 }
    /* +0xe3ed2e */ __asm { XOR RCX,R11 }
    /* +0xe3ed31 */ __asm { MOV R8,RCX }
    /* +0xe3ed34 */ __asm { ROL R8,0x3c }
    /* +0xe3ed38 */ __asm { XOR R10D,0xbe8a }
    /* +0xe3ed3f */ __asm { MOV R11,RCX }
    /* +0xe3ed42 */ __asm { ROL R11,0xe }
    /* +0xe3ed46 */ __asm { MOVQ XMM3,R8 }
    /* +0xe3ed4b */ __asm { MOVQ XMM0,R11 }
    /* +0xe3ed50 */ __asm { PXOR XMM0,XMM3 }
    /* +0xe3ed54 */ __asm { MOVQ R8,XMM0 }
    /* +0xe3ed59 */ __asm { XOR R8,RCX }
    /* +0xe3ed5c */ __asm { MOV RCX,R8 }
    /* +0xe3ed5f */ __asm { ROL RCX,0x38 }
    /* +0xe3ed63 */ __asm { MOV R11,R8 }
    /* +0xe3ed66 */ __asm { ROL R11,0x1c }
    /* +0xe3ed6a */ __asm { XOR R11,RCX }
    /* +0xe3ed6d */ __asm { XOR R11,R8 }
    /* +0xe3ed70 */ __asm { MOV RCX,R11 }
    /* +0xe3ed73 */ __asm { ROL RCX,0x30 }
    /* +0xe3ed77 */ __asm { MOV R8,R11 }
    /* +0xe3ed7a */ __asm { ROL R8,0x38 }
    /* +0xe3ed7e */ __asm { XOR R8,RCX }
    /* +0xe3ed81 */ __asm { XOR R8,R11 }
    /* +0xe3ed84 */ __asm { MOV RCX,R8 }
    /* +0xe3ed87 */ __asm { ROL RCX,0x30 }
    /* +0xe3ed8b */ __asm { MOV R11,R8 }
    /* +0xe3ed8e */ __asm { ROL R11,0x20 }
    /* +0xe3ed92 */ __asm { XOR R11,RCX }
    /* +0xe3ed95 */ __asm { XOR R11,R8 }
    /* +0xe3ed98 */ __asm { MOV RCX,R11 }
    /* +0xe3ed9b */ __asm { ROL RCX,0x20 }
    /* +0xe3ed9f */ __asm { MOV R8,R11 }
    /* +0xe3eda2 */ __asm { XOR R8,RCX }
    /* +0xe3eda5 */ __asm { IMUL R8,R11 }
    /* +0xe3eda9 */ __asm { CMP R9,RDX }
    /* +0xe3edac */ __asm { MOVZX R10D,R10W }
    /* +0xe3edb0 */ __asm { CMOVG R8,RCX }
    /* +0xe3edb4 */ __asm { MOV R12,0x100000400001 }
    /* +0xe3edbe */ __asm { IMUL R12,R8 }
    /* +0xe3edc2 */ __asm { CMP EAX,R10D }
    /* +0xe3edc5 */ __asm { JC 0x7fffa55aefc0 }
    /* +0xe3edcb */ __asm { CMP EAX,0x3 }
    /* +0xe3edce */ __asm { JNZ 0x7fffa55af1bc }
    /* +0xe3edd4 */ __asm { LEA RAX,[0x7fffa47b4877] }
    /* +0xe3eddb */ __asm { MOV R10,0xbad45e64a2b6a4a }
    /* +0xe3ede5 */ __asm { CMP RAX,R10 }
    /* +0xe3ede8 */ __asm { NOP }
    /* +0xe3ede9 */ __asm { NOP }
    /* +0xe3edea */ __asm { NOP }
    /* +0xe3edeb */ __asm { NOP }
    /* +0xe3edec */ __asm { NOP }
    /* +0xe3eded */ __asm { MOV R10D,0x1c15fc0e }
    /* +0xe3edf3 */ __asm { IMUL ECX,R10D,-0x7addfc93 }
    /* +0xe3edfa */ __asm { MOV R10W,0x7be2 }
    /* +0xe3edff */ __asm { SUB R10D,ESI }
    /* +0xe3ee02 */ __asm { ROR R10W,0x1 }
    /* +0xe3ee06 */ __asm { XOR ECX,ESI }
    /* +0xe3ee08 */ __asm { IMUL R10D,R10D,0x773d }
    /* +0xe3ee0f */ __asm { MOVZX R10D,R10W }
    /* +0xe3ee13 */ __asm { MOVZX R8D,uint8_t ptr [RAX + 0x7e16] }
    /* +0xe3ee1b */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x4 + 0x7e26] }
    /* +0xe3ee24 */ __asm { ROL R9B,0x4 }
    /* +0xe3ee28 */ __asm { MOV uint8_t ptr [RSP + 0x50],R9B }
    /* +0xe3ee2d */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x4 + 0x7e27] }
    /* +0xe3ee36 */ __asm { ROL R9B,0x4 }
    /* +0xe3ee3a */ __asm { MOV uint8_t ptr [RSP + 0x51],R9B }
    /* +0xe3ee3f */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x4 + 0x7e28] }
    /* +0xe3ee48 */ __asm { ROL R9B,0x4 }
    /* +0xe3ee4c */ __asm { MOV uint8_t ptr [RSP + 0x52],R9B }
    /* +0xe3ee51 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x4 + 0x7e29] }
    /* +0xe3ee5a */ __asm { ROL R9B,0x4 }
    /* +0xe3ee5e */ __asm { MOV uint8_t ptr [RSP + 0x53],R9B }
    /* +0xe3ee63 */ __asm { MOVZX ECX,uint8_t ptr [RCX] }
    /* +0xe3ee66 */ __asm { MOV R11D,0x1 }
    /* +0xe3ee6c */ __asm { SHL R11D,CL }
    /* +0xe3ee6f */ __asm { MOV R8D,0x65e8ce72 }
    /* +0xe3ee75 */ __asm { XOR R8D,dword ptr [RSP + 0x50] }
    /* +0xe3ee7a */ __asm { AND R8D,R11D }
    /* +0xe3ee7d */ __asm { CMP R8D,R10D }
    /* +0xe3ee80 */ __asm { JNZ 0x7fffa55af5cd }
    /* +0xe3ee86 */ __asm { PXOR XMM1,XMM1 }
    /* +0xe3ee8a */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xe3ee90 */ __asm { MOV dword ptr [RSP + 0x60],0xffddc17c }
    /* +0xe3ee98 */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3ee9d */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xe3eea5 */ __asm { MOV dword ptr [RSP + 0x60],0x4e538f9a }
    /* +0xe3eead */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3eeb2 */ __asm { TEST R10B,0x1 }
    /* +0xe3eeb6 */ __asm { NOP }
    /* +0xe3eeb7 */ __asm { NOP }
    /* +0xe3eeb8 */ __asm { NOP }
    /* +0xe3eeb9 */ __asm { NOP }
    /* +0xe3eeba */ __asm { NOP }
    /* +0xe3eebb */ __asm { MOV dword ptr [RSP + 0x60],0x8d7f1a73 }
    /* +0xe3eec3 */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3eec8 */ __asm { TEST R10B,0x1 }
    /* +0xe3eecc */ __asm { JZ 0x7fffa55afc94 }
    /* +0xe3eed2 */ __asm { MOV R10,0x6105900f370aafbd }
    /* +0xe3eedc */ __asm { MOV RCX,RSI }
    /* +0xe3eedf */ __asm { OR RCX,0x1 }
    /* +0xe3eee3 */ __asm { IMUL RCX,R10 }
    /* +0xe3eee7 */ __asm { LEA RAX,[0x7fffa478ad5b] }
    /* +0xe3eeee */ __asm { ROL RCX,0x1c }
    /* +0xe3eef2 */ __asm { XOR RCX,RAX }
    /* +0xe3eef5 */ __asm { MOV R10D,0xde8de917 }
    /* +0xe3eefb */ __asm { CMP RCX,R10 }
    /* +0xe3eefe */ __asm { JZ 0x7fffa55afc9c }
    /* +0xe3ef04 */ __asm { MOV R10D,0x8ad0bf44 }
    /* +0xe3ef0a */ __asm { ADD R10D,0x8a1f809a }
    /* +0xe3ef11 */ __asm { LEA RBX,[0x7fffa47848a2] }
    /* +0xe3ef18 */ __asm { MOV qword ptr [RSP + 0x60],R11 }
    /* +0xe3ef1d */ __asm { MOV EAX,dword ptr [RAX + -0x673f] }
    /* +0xe3ef23 */ __asm { MOV R11D,ESI }
    /* +0xe3ef26 */ __asm { OR R11D,0x1 }
    /* +0xe3ef2a */ __asm { MOV ECX,ESI }
    /* +0xe3ef2c */ __asm { ROR R10D,CL }
    /* +0xe3ef2f */ __asm { ADD R10D,0x7ac3f008 }
    /* +0xe3ef36 */ __asm { MOVSXD R10,R10D }
    /* +0xe3ef39 */ __asm { MOV R8W,0x7280 }
    /* +0xe3ef3e */ __asm { XOR R8D,0xe8a }
    /* +0xe3ef45 */ __asm { SUB R8D,ESI }
    /* +0xe3ef48 */ __asm { MOVZX EDX,R8W }
    /* +0xe3ef4c */ __asm { MOV R8W,0x80df }
    /* +0xe3ef51 */ __asm { ADD R8D,0xffff9bd1 }
    /* +0xe3ef58 */ __asm { IMUL R8D,R11D }
    /* +0xe3ef5c */ __asm { MOVZX R9D,R8W }
    /* +0xe3ef60 */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xe3ef65 */ __asm { SYSCALL }
    /* +0xe3ef67 */ __asm { MOV R10,-0x3a8532115c9c251e }
    /* +0xe3ef71 */ __asm { CMP RBX,R10 }
    /* +0xe3ef74 */ __asm { JZ 0x7fffa55afca5 }
    /* +0xe3ef7a */ __asm { MOV R10D,0x876b331c }
    /* +0xe3ef80 */ __asm { IMUL R10D,R10D,0x7ffe03d9 }
    /* +0xe3ef87 */ __asm { MOV ECX,0x26767c98 }
    /* +0xe3ef8c */ __asm { MOV R11W,0xa858 }
    /* +0xe3ef91 */ __asm { XOR R10D,0x5ac05943 }
    /* +0xe3ef98 */ __asm { MOV R8D,0xffffa858 }
    /* +0xe3ef9e */ __asm { SUB R8D,R11D }
    /* +0xe3efa1 */ __asm { MOVZX R8D,R8W }
    /* +0xe3efa5 */ __asm { XOR ECX,0x515bf8d6 }
    /* +0xe3efab */ __asm { ADD ECX,ESI }
    /* +0xe3efad */ __asm { MOVSXD R10,R10D }
    /* +0xe3efb0 */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0xe3efb5 */ __asm { MOV EAX,dword ptr [RBX + -0x232] }
    /* +0xe3efbb */ __asm { JMP 0x7fffa55afabe }
    /* +0xe3efc0 */ __asm { CMP EAX,0x1 }
    /* +0xe3efc3 */ __asm { JZ 0x7fffa55af3e3 }
    /* +0xe3efc9 */ __asm { MOV EAX,0x87cee965 }
    /* +0xe3efce */ __asm { MOV R11,RAX }
    /* +0xe3efd1 */ __asm { XOR R11,0x476b3104 }
    /* +0xe3efd8 */ __asm { MOV R10,RAX }
    /* +0xe3efdb */ __asm { ADD R10,-0x476b3104 }
    /* +0xe3efe2 */ __asm { MOV R8D,0xc1312f41 }
    /* +0xe3efe8 */ __asm { MOV ECX,ESI }
    /* +0xe3efea */ __asm { SUB ECX,R8D }
    /* +0xe3efed */ __asm { ADD ECX,0x31478d33 }
    /* +0xe3eff3 */ __asm { MOV EDX,0x758d9502 }
    /* +0xe3eff8 */ __asm { IMUL EDX,R13D }
    /* +0xe3effc */ __asm { ROL EDX,0x1a }
    /* +0xe3efff */ __asm { NOT EDX }
    /* +0xe3f001 */ __asm { CMP RCX,RDX }
    /* +0xe3f004 */ __asm { CMOVC R10,R11 }
    /* +0xe3f008 */ __asm { ADD R10,0x2e943244 }
    /* +0xe3f00f */ __asm { MOV R9,-0x3003eedb66dc36a }
    /* +0xe3f019 */ __asm { CMP R10,R9 }
    /* +0xe3f01c */ __asm { JZ 0x7fffa55afc71 }
    /* +0xe3f022 */ __asm { MOV R10,qword ptr [RAX + -0x7d0e95d] }
    /* +0xe3f029 */ __asm { MOV R9,0x12c25893b4d4157d }
    /* +0xe3f033 */ __asm { MOV RAX,R10 }
    /* +0xe3f036 */ __asm { MUL R9 }
    /* +0xe3f039 */ __asm { MOV R9,RDX }
    /* +0xe3f03c */ __asm { MOV ECX,0x1469944 }
    /* +0xe3f041 */ __asm { MOV RAX,R10 }
    /* +0xe3f044 */ __asm { MUL RCX }
    /* +0xe3f047 */ __asm { ADD RAX,R9 }
    /* +0xe3f04a */ __asm { ADC RDX,0x0 }
    /* +0xe3f04e */ __asm { TEST DL,0x1 }
    /* +0xe3f051 */ __asm { JNZ 0x7fffa55af739 }
    /* +0xe3f057 */ __asm { MOV R10W,0x7b81 }
    /* +0xe3f05c */ __asm { NOT R10D }
    /* +0xe3f05f */ __asm { ADD R10D,ESI }
    /* +0xe3f062 */ __asm { MOVZX ECX,R10W }
    /* +0xe3f066 */ __asm { PXOR XMM1,XMM1 }
    /* +0xe3f06a */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xe3f070 */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0xe3f074 */ __asm { MOV RAX,0x4f23418ab2eb3259 }
    /* +0xe3f07e */ __asm { CMP qword ptr [R10 + 0x18],RAX }
    /* +0xe3f082 */ __asm { NOP }
    /* +0xe3f083 */ __asm { NOP }
    /* +0xe3f084 */ __asm { NOP }
    /* +0xe3f085 */ __asm { NOP }
    /* +0xe3f086 */ __asm { NOP }
    /* +0xe3f087 */ __asm { MOV R10D,0x43815e15 }
    /* +0xe3f08d */ __asm { ADD R10D,ESI }
    /* +0xe3f090 */ __asm { ROL R10D,0x1 }
    /* +0xe3f093 */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xe3f09b */ __asm { MOV dword ptr [RSP + 0x60],R10D }
    /* +0xe3f0a0 */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3f0a5 */ __asm { TEST R10B,0x1 }
    /* +0xe3f0a9 */ __asm { JZ 0x7fffa55afcb5 }
    /* +0xe3f0af */ __asm { PUSHFQ }
    /* +0xe3f0b0 */ __asm { POP R11 }
    /* +0xe3f0b2 */ __asm { TEST R11D,0x100 }
    /* +0xe3f0b9 */ __asm { NOP }
    /* +0xe3f0ba */ __asm { NOP }
    /* +0xe3f0bb */ __asm { NOP }
    /* +0xe3f0bc */ __asm { NOP }
    /* +0xe3f0bd */ __asm { NOP }
    /* +0xe3f0be */ __asm { MOV dword ptr [RSP + 0x60],0x79394f1e }
    /* +0xe3f0c6 */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3f0cb */ __asm { CMP R10D,0x15a16a40 }
    /* +0xe3f0d2 */ __asm { NOP }
    /* +0xe3f0d3 */ __asm { NOP }
    /* +0xe3f0d4 */ __asm { NOP }
    /* +0xe3f0d5 */ __asm { NOP }
    /* +0xe3f0d6 */ __asm { NOP }
    /* +0xe3f0d7 */ __asm { LEA RAX,[0x7fffa47b69e1] }
    /* +0xe3f0de */ __asm { MOV R10,0x19f0374745bfa0bc }
    /* +0xe3f0e8 */ __asm { CMP RAX,R10 }
    /* +0xe3f0eb */ __asm { JNZ 0x7fffa55af0fc }
    /* +0xe3f0ed */ __asm { SUB dword ptr [0x7fff8e041583],0x42 }
    /* +0xe3f0f4 */ __asm { INC BH }
    /* +0xe3f0f6 */ __asm { INT1 }
    /* +0xe3f0fc */ __asm { LEA RBX,[0x7fffa47c1e9b] }
    /* +0xe3f103 */ __asm { MOV R10W,0xf560 }
    /* +0xe3f108 */ __asm { MOV qword ptr [RSP + 0x60],R11 }
    /* +0xe3f10d */ __asm { MOV R11W,0xfb60 }
    /* +0xe3f112 */ __asm { ADD R11D,0x1053 }
    /* +0xe3f119 */ __asm { XOR R10D,0xa9f }
    /* +0xe3f120 */ __asm { MOV ECX,ESI }
    /* +0xe3f122 */ __asm { ROL R10W,CL }
    /* +0xe3f126 */ __asm { XOR R11D,0xbf3 }
    /* +0xe3f12d */ __asm { ROR R11W,CL }
    /* +0xe3f131 */ __asm { MOV EAX,dword ptr [RAX + 0x65f7] }
    /* +0xe3f137 */ __asm { MOVZX R9D,R11W }
    /* +0xe3f13b */ __asm { MOVSX R10,R10W }
    /* +0xe3f13f */ __asm { MOV R11W,0x58ce }
    /* +0xe3f144 */ __asm { ADD R11D,ESI }
    /* +0xe3f147 */ __asm { XOR R11D,0xd498 }
    /* +0xe3f14e */ __asm { MOVZX EDX,R11W }
    /* +0xe3f152 */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xe3f157 */ __asm { SYSCALL }
    /* +0xe3f159 */ __asm { MOV R10,-0x54bf258699b554ce }
    /* +0xe3f163 */ __asm { CMP RBX,R10 }
    /* +0xe3f166 */ __asm { NOP }
    /* +0xe3f167 */ __asm { NOP }
    /* +0xe3f168 */ __asm { NOP }
    /* +0xe3f169 */ __asm { MOV R10W,0x3049 }
    /* +0xe3f16e */ __asm { MOV R11D,ESI }
    /* +0xe3f171 */ __asm { OR R11D,0x1 }
    /* +0xe3f175 */ __asm { MOV AX,0x48a1 }
    /* +0xe3f179 */ __asm { MOV qword ptr [RSP + 0x50],RDX }
    /* +0xe3f17e */ __asm { MOV R8D,0x3049 }
    /* +0xe3f184 */ __asm { SUB R8D,R10D }
    /* +0xe3f187 */ __asm { IMUL R8D,R11D }
    /* +0xe3f18b */ __asm { XOR EAX,ESI }
    /* +0xe3f18d */ __asm { ADD EAX,0xffffccbc }
    /* +0xe3f192 */ __asm { ROL AX,0x4 }
    /* +0xe3f196 */ __asm { MOVZX R8D,R8W }
    /* +0xe3f19a */ __asm { MOVSX R10,AX }
    /* +0xe3f19e */ __asm { MOV R11D,0xdfcac200 }
    /* +0xe3f1a4 */ __asm { IMUL R13D,R11D }
    /* +0xe3f1a8 */ __asm { ROL R13D,0x1b }
    /* +0xe3f1ac */ __asm { MOV EAX,dword ptr [RBX + -0x59bb] }
    /* +0xe3f1b2 */ __asm { MOV qword ptr [RSP + 0x28],R13 }
    /* +0xe3f1b7 */ __asm { JMP 0x7fffa55afac3 }
    /* +0xe3f1bc */ __asm { LEA RAX,[0x7fffa47b6ec3] }
    /* +0xe3f1c3 */ __asm { MOV R10,0x1648f164c7abb7ac }
    /* +0xe3f1cd */ __asm { CMP RAX,R10 }
    /* +0xe3f1d0 */ __asm { JZ 0x7fffa55afc7c }
    /* +0xe3f1d6 */ __asm { MOV R10D,0x4e4d37e0 }
    /* +0xe3f1dc */ __asm { XOR R10D,0x10f72337 }
    /* +0xe3f1e3 */ __asm { MOVD XMM3,R10D }
    /* +0xe3f1e8 */ __asm { MOV R8W,0xd358 }
    /* +0xe3f1ed */ __asm { LEA R10D,[RSI + R8*0x1] }
    /* +0xe3f1f1 */ __asm { ADD R10D,0xffffb0c6 }
    /* +0xe3f1f8 */ __asm { PMULUDQ XMM3,XMM1 }
    /* +0xe3f1fc */ __asm { MOVD ECX,XMM3 }
    /* +0xe3f200 */ __asm { MOVZX R10D,R10W }
    /* +0xe3f204 */ __asm { ADD ECX,0xc89c386f }
    /* +0xe3f20a */ __asm { MOVZX R8D,uint8_t ptr [RAX + 0x57ca] }
    /* +0xe3f212 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x4 + 0x57da] }
    /* +0xe3f21b */ __asm { ROL R9B,0x4 }
    /* +0xe3f21f */ __asm { MOV uint8_t ptr [RSP + 0x50],R9B }
    /* +0xe3f224 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x4 + 0x57db] }
    /* +0xe3f22d */ __asm { ROL R9B,0x4 }
    /* +0xe3f231 */ __asm { MOV uint8_t ptr [RSP + 0x51],R9B }
    /* +0xe3f236 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x4 + 0x57dc] }
    /* +0xe3f23f */ __asm { ROL R9B,0x4 }
    /* +0xe3f243 */ __asm { MOV uint8_t ptr [RSP + 0x52],R9B }
    /* +0xe3f248 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R8*0x4 + 0x57dd] }
    /* +0xe3f251 */ __asm { ROL R9B,0x4 }
    /* +0xe3f255 */ __asm { MOV uint8_t ptr [RSP + 0x53],R9B }
    /* +0xe3f25a */ __asm { MOV R11D,0x65e8ce72 }
    /* +0xe3f260 */ __asm { MOVZX ECX,uint8_t ptr [RCX] }
    /* +0xe3f263 */ __asm { MOV R8D,0x1 }
    /* +0xe3f269 */ __asm { SHL R8D,CL }
    /* +0xe3f26c */ __asm { XOR R11D,dword ptr [RSP + 0x50] }
    /* +0xe3f271 */ __asm { AND R8D,R11D }
    /* +0xe3f274 */ __asm { CMP R8D,R10D }
    /* +0xe3f277 */ __asm { JZ 0x7fffa55af929 }
    /* +0xe3f27d */ __asm { MOV R10D,0x32cb7331 }
    /* +0xe3f283 */ __asm { XOR R10D,ESI }
    /* +0xe3f286 */ __asm { PXOR XMM1,XMM1 }
    /* +0xe3f28a */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xe3f290 */ __asm { ROL R10D,0x19 }
    /* +0xe3f294 */ __asm { IMUL R10D,R10D,0x3da070e1 }
    /* +0xe3f29b */ __asm { MOV dword ptr [RSP + 0x60],R10D }
    /* +0xe3f2a0 */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3f2a5 */ __asm { PUSHFQ }
    /* +0xe3f2a6 */ __asm { POP R11 }
    /* +0xe3f2a8 */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xe3f2b0 */ __asm { TEST R11D,0x100 }
    /* +0xe3f2b7 */ __asm { JZ 0x7fffa55af2be }
    /* +0xe3f2b9 */ __asm { PUSH RAX }
    /* +0xe3f2ba */ __asm { CDQ }
    /* +0xe3f2bc */ __asm { AND uint8_t ptr [RSI],CL }
    /* +0xe3f2be */ __asm { MOV dword ptr [RSP + 0x60],0x48eb079a }
    /* +0xe3f2c6 */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3f2cb */ __asm { TEST R10D,R10D }
    /* +0xe3f2ce */ __asm { JS 0x7fffa55afcbd }
    /* +0xe3f2d4 */ __asm { MOV R10W,0xbbbe }
    /* +0xe3f2d9 */ __asm { ADD R10D,0x444e }
    /* +0xe3f2e0 */ __asm { MOV ECX,ESI }
    /* +0xe3f2e2 */ __asm { ROL R10W,CL }
    /* +0xe3f2e6 */ __asm { MOVZX ECX,R10W }
    /* +0xe3f2ea */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0xe3f2ee */ __asm { MOV R10,qword ptr [R10 + 0x60] }
    /* +0xe3f2f2 */ __asm { MOV RAX,0x4259a62b6557f131 }
    /* +0xe3f2fc */ __asm { MOV RAX,-0x79151ce8f24ec77d }
    /* +0xe3f306 */ __asm { CMP R10,RAX }
    /* +0xe3f309 */ __asm { NOP }
    /* +0xe3f30a */ __asm { NOP }
    /* +0xe3f30b */ __asm { NOP }
    /* +0xe3f30c */ __asm { NOP }
    /* +0xe3f30d */ __asm { NOP }
    /* +0xe3f30e */ __asm { LEA RAX,[0x7fffa47c1198] }
    /* +0xe3f315 */ __asm { MOV R10,-0x1fb4f7859530be3d }
    /* +0xe3f31f */ __asm { CMP RAX,R10 }
    /* +0xe3f322 */ __asm { NOP }
    /* +0xe3f323 */ __asm { NOP }
    /* +0xe3f324 */ __asm { NOP }
    /* +0xe3f325 */ __asm { NOP }
    /* +0xe3f326 */ __asm { NOP }
    /* +0xe3f327 */ __asm { MOV R11W,0x3017 }
    /* +0xe3f32c */ __asm { LEA RBX,[0x7fffa4780170] }
    /* +0xe3f333 */ __asm { MOV R10W,0x70da }
    /* +0xe3f338 */ __asm { ADD R10D,0xffff8f25 }
    /* +0xe3f33f */ __asm { MOV ECX,ESI }
    /* +0xe3f341 */ __asm { ROL R10W,CL }
    /* +0xe3f345 */ __asm { MOV qword ptr [RSP + 0x60],RDX }
    /* +0xe3f34a */ __asm { MOV EAX,dword ptr [RAX + -0x41c0] }
    /* +0xe3f350 */ __asm { MOV R8W,0xd020 }
    /* +0xe3f355 */ __asm { ADD R8D,0x4728 }
    /* +0xe3f35c */ __asm { XOR R8D,0x17e8 }
    /* +0xe3f363 */ __asm { ROR R8W,CL }
    /* +0xe3f367 */ __asm { MOVSX R10,R10W }
    /* +0xe3f36b */ __asm { MOVZX EDX,R8W }
    /* +0xe3f36f */ __asm { XOR R11D,0x3007 }
    /* +0xe3f376 */ __asm { MOVZX R9D,R11W }
    /* +0xe3f37a */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xe3f37f */ __asm { SYSCALL }
    /* +0xe3f381 */ __asm { MOV R10,-0x76c909168e8b4789 }
    /* +0xe3f38b */ __asm { CMP RBX,R10 }
    /* +0xe3f38e */ __asm { NOP }
    /* +0xe3f38f */ __asm { NOP }
    /* +0xe3f390 */ __asm { NOP }
    /* +0xe3f391 */ __asm { NOP }
    /* +0xe3f392 */ __asm { NOP }
    /* +0xe3f393 */ __asm { MOV R8W,0x8409 }
    /* +0xe3f398 */ __asm { MOV R10D,0xfd8007b }
    /* +0xe3f39e */ __asm { MOV qword ptr [RSP + 0x50],RAX }
    /* +0xe3f3a3 */ __asm { MOV R11W,0x9811 }
    /* +0xe3f3a8 */ __asm { MOV EAX,dword ptr [RBX + 0x4500] }
    /* +0xe3f3ae */ __asm { XOR R10D,0x78f58466 }
    /* +0xe3f3b5 */ __asm { XOR R8D,0x17 }
    /* +0xe3f3b9 */ __asm { ADD R11D,0x67e2 }
    /* +0xe3f3c0 */ __asm { MOV ECX,ESI }
    /* +0xe3f3c2 */ __asm { ROL R11W,CL }
    /* +0xe3f3c6 */ __asm { ADD R8D,ESI }
    /* +0xe3f3c9 */ __asm { NOT R11D }
    /* +0xe3f3cc */ __asm { MOVZX ECX,R11W }
    /* +0xe3f3d0 */ __asm { MOVZX R8D,R8W }
    /* +0xe3f3d4 */ __asm { ADD R10D,ESI }
    /* +0xe3f3d7 */ __asm { ROL R10D,0x5 }
    /* +0xe3f3db */ __asm { MOVSXD R10,R10D }
    /* +0xe3f3de */ __asm { JMP 0x7fffa55afabe }
    /* +0xe3f3e3 */ __asm { MOV R10,-0x5d90391d2e9d5cd8 }
    /* +0xe3f3ed */ __asm { ADD R10,RSI }
    /* +0xe3f3f0 */ __asm { ROL R10,0x1b }
    /* +0xe3f3f4 */ __asm { MOV EAX,0x231d0c33 }
    /* +0xe3f3f9 */ __asm { MOV R11,RAX }
    /* +0xe3f3fc */ __asm { XOR R11,R10 }
    /* +0xe3f3ff */ __asm { CMP R11,-0x1 }
    /* +0xe3f403 */ __asm { JZ 0x7fffa55afc8c }
    /* +0xe3f409 */ __asm { MOV R10D,0x1ffa51e5 }
    /* +0xe3f40f */ __asm { IMUL R10D,R10D,-0x12e2ec3 }
    /* +0xe3f416 */ __asm { XOR R10D,0x6546c716 }
    /* +0xe3f41d */ __asm { IMUL R10D,R13D }
    /* +0xe3f421 */ __asm { MOVSXD R10,R10D }
    /* +0xe3f424 */ __asm { MOV R11D,dword ptr [RAX + 0x5ce0f78d] }
    /* +0xe3f42b */ __asm { XOR R8D,R8D }
    /* +0xe3f42e */ __asm { XOR EAX,EAX }
    /* +0xe3f430 */ __asm { CMP R11D,0xc }
    /* +0xe3f434 */ __asm { SETGE R8B }
    /* +0xe3f438 */ __asm { SETA AL }
    /* +0xe3f43b */ __asm { CMP R10,-0x5c024e4b }
    /* +0xe3f442 */ __asm { CMOVZ R8D,EAX }
    /* +0xe3f446 */ __asm { PXOR XMM1,XMM1 }
    /* +0xe3f44a */ __asm { CMP R8B,0x1 }
    /* +0xe3f44e */ __asm { JNZ 0x7fffa55afb01 }
    /* +0xe3f454 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xe3f45a */ __asm { MOV dword ptr [RSP + 0x60],0x87e1606c }
    /* +0xe3f462 */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3f467 */ __asm { CMP R10D,0x2ad5be81 }
    /* +0xe3f46e */ __asm { NOP }
    /* +0xe3f46f */ __asm { NOP }
    /* +0xe3f470 */ __asm { NOP }
    /* +0xe3f471 */ __asm { NOP }
    /* +0xe3f472 */ __asm { NOP }
    /* +0xe3f473 */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xe3f47b */ __asm { MOV dword ptr [RSP + 0x60],0x4b4f80d4 }
    /* +0xe3f483 */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3f488 */ __asm { MOV R10W,0x49d }
    /* +0xe3f48d */ __asm { IMUL R10D,R10D,-0x72a9 }
    /* +0xe3f494 */ __asm { ADD R10D,0xfffff5a5 }
    /* +0xe3f49b */ __asm { MOV ECX,ESI }
    /* +0xe3f49d */ __asm { ROR R10W,CL }
    /* +0xe3f4a1 */ __asm { PUSHFQ }
    /* +0xe3f4a2 */ __asm { POP R11 }
    /* +0xe3f4a4 */ __asm { AND R11D,0x100 }
    /* +0xe3f4ab */ __asm { MOVZX R10D,R10W }
    /* +0xe3f4af */ __asm { CMP R11D,R10D }
    /* +0xe3f4b2 */ __asm { NOP }
    /* +0xe3f4b3 */ __asm { NOP }
    /* +0xe3f4b4 */ __asm { NOP }
    /* +0xe3f4b5 */ __asm { NOP }
    /* +0xe3f4b6 */ __asm { NOP }
    /* +0xe3f4b7 */ __asm { MOV dword ptr [RSP + 0x60],0x8dc85d90 }
    /* +0xe3f4bf */ __asm { MOV R10D,dword ptr [RSP + 0x60] }
    /* +0xe3f4c4 */ __asm { CMP R10D,0xbb2c7f60 }
    /* +0xe3f4cb */ __asm { JC 0x7fffa55af4d3 }
    /* +0xe3f4cd */ __asm { PUSH -0x2b42413d }
    /* +0xe3f4d2 */ __asm { STOSB RDI }
    /* +0xe3f4d3 */ __asm { MOV R10,0x266ece214661a1b8 }
    /* +0xe3f4dd */ __asm { LEA RAX,[0x7fffa47ba2b2] }
    /* +0xe3f4e4 */ __asm { MOV R9D,0xb66c1f1e }
}


// ============================================================================
// Function : FUN_7fffa55afd40  |  RVA: 0xe3fd40  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa55afd40(int64_t param_1)

{
  uint32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int *piVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  code *pcVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t alStack_60 [2];
  uint8_t auStack_50 [24];
  
  lVar9 = FUN_7fffa54539d0();
  uVar2 = *(uint64_t *)(lVar9 + 0x28);
  lVar9 = FUN_7fffa54539d0();
  uVar3 = *(uint64_t *)(lVar9 + 0x20);
  piVar4 = *(int **)(param_1 + 0x50);
  uVar10 = *(uint64_t *)(param_1 + 0x40);
  uVar5 = *(uint64_t *)(param_1 + 0x30);
  uVar6 = *(uint64_t *)(param_1 + 0x28);
  alStack_60[0] = *(int64_t *)(param_1 + 0x48);
  alStack_60[1] = *(uint64_t *)(param_1 + 0x68);
  uVar1 = *(uint32_t *)(param_1 + 0x38);
  FUN_7fffa560e390(uVar10);
  lVar9 = FUN_7fffa54539d0();
  *(int **)(lVar9 + 0x20) = piVar4;
  lVar9 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar9 + 0x28) = uVar10;
  lVar9 = FUN_7fffa54539d0();
  uVar10 = FUN_7fffa5687b90(auStack_50,*(uint64_t *)(*(int64_t *)(lVar9 + 0x20) + 0x28));
  if (*(int64_t *)(param_1 + 0x58) != 0) {
    FUN_7fffa54539d0();
  }
  lVar9 = FUN_7fffa5659a60(uVar5,uVar6,0x100);
  if ((lVar9 < 2) && (lVar9 = alStack_60[lVar9], lVar9 == 0)) {
    FUN_7fffa524fccc();
    pcVar7 = (code *)__debugbreak();
    lVar9 = (*pcVar7)();
    return lVar9;
  }
  FUN_7fffa5244750(lVar9,uVar6);
  FUN_7fffa5491f30(uVar10);
  if ((((*piVar4 == -0x1f928c9d) && (piVar4[6] == 4)) && (piVar4[8] + 0xe66cfae0U < 3)) &&
     (iVar8 = FUN_7fffa54991f0(*(uint64_t *)(piVar4 + 10)), iVar8 != 0)) {
    FUN_7fffa5488e60(piVar4,1);
  }
  lVar11 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar11 + 0x20) = uVar3;
  lVar11 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar11 + 0x28) = uVar2;
  lVar11 = FUN_7fffa54539d0();
  *(uint32_t *)(lVar11 + 0x78) = uVar1;
  lVar11 = FUN_7fffa54539d0();
  *(uint32_t *)(lVar11 + 0x78) = 0xfffffffe;
  return lVar9;
}


// ============================================================================
// Function : FUN_7fffa55affa0  |  RVA: 0xe3ffa0  |  Size: 238 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55affa0(void)

{
  uRam00007fffa47bae60 = 0;
  puRam00007fffa47bae58 = &UNK_7fffa56ee720;
  uRam00007fffa47bae48 = 0x3f;
  uRam00007fffa47bae50 = 1;
  uRam00007fffa47bae68 = 0;
  uRam00007fffa47bae70 = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa55b0090  |  RVA: 0xe40090  |  Size: 564 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa55b023d) overlaps instruction at (ram,0x7fffa55b0238)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa55b0238) */
/* WARNING: Removing unreachable block (ram,0x7fffa55b02b0) */
/* WARNING: Removing unreachable block (ram,0x7fffa55b02c5) */

uint8_t * FUN_7fffa55b0090(void)

{
  int64_t lVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint8_t *puVar4;
  uint64_t uVar5;
  uint64_t in_R11;
  uint8_t in_TF;
  uint64_t in_stack_00000028;
  
  if (~(in_R11 + 0x9d5e0df7f73e7340) * -0x7fc01ff007fc01ff * ~in_stack_00000028 == 0) {
    bVar2 = (uint8_t)in_R11 & 0xf;
    lVar1 = *(int64_t *)((uint64_t)(~(((uint32_t)in_R11 | 1) * 0xcef) & 0xffff) + 0xff00000000);
    puVar4 = (uint8_t *)(in_R11 ^ 0x7fecbf02d38e627d);
    uVar5 = (int64_t)ProcessEnvironmentBlock +
            (uint64_t)(uint16_t)(0xef8U >> bVar2 | 0xef8 << 0x10 - bVar2) +
            *(int64_t *)(lVar1 + 0x60);
    if (puVar4 == (uint8_t *)((uVar5 << 0x23 | uVar5 >> 0x1d) * -0x50c5fe6a2267d381)) {
      *puVar4 = (char)((uint64_t)puVar4 >> 8);
      uVar3 = in((short)lVar1);
      puVar4 = (uint8_t *)(uint64_t)uVar3;
    }
  }
  else {
    (*(code *)(&UNK_7fffa5014f3b + (int)(((uint32_t)in_R11 | 1) * 0x6646cee5 ^ 0x7ffe02f0)))
              (in_R11 & 0xffffffff);
    puVar4 = (uint8_t *)(uint64_t)((uint32_t)(in_TF & 1) * 0x100);
  }
  return puVar4;
}


// ============================================================================
// Function : FUN_7fffa55b02f4  |  RVA: 0xe402f4  |  Size: 1 bytes
// Callers  : FUN_7fffa54e6918@0xd76918, FUN_7fffa511e794@0x9ae794, FUN_7fffa52106c8@0xaa06c8
// Callees  : none
// ============================================================================
void FUN_7fffa55b02f4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa55b0310  |  RVA: 0xe40310  |  Size: 27 bytes
// Callers  : none
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
void FUN_7fffa55b0310(void)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa54539d0();
  *(uint32_t *)(lVar1 + 0x78) = 0xfffffffe;
  return;
}


// ============================================================================
// Function : FUN_7fffa55b0330  |  RVA: 0xe40330  |  Size: 4640 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55b0330(void) {
    /* +0xe40330 */ __asm { PUSH RBP }
    /* +0xe40331 */ __asm { PUSH R14 }
    /* +0xe40333 */ __asm { PUSH R12 }
    /* +0xe40335 */ __asm { PUSH R13 }
    /* +0xe40337 */ __asm { PUSH RDI }
    /* +0xe40338 */ __asm { PUSH RBX }
    /* +0xe40339 */ __asm { PUSH R15 }
    /* +0xe4033b */ __asm { PUSH RSI }
    /* +0xe4033c */ __asm { SUB RSP,0x228 }
    /* +0xe40343 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xe4034b */ __asm { MOVAPS xmmword ptr [RBP + 0x190],XMM15 }
    /* +0xe40353 */ __asm { MOV qword ptr [RBP + 0x188],-0x2 }
    /* +0xe4035e */ __asm { MOV dword ptr [RBP + 0x10],0x646930c }
    /* +0xe40365 */ __asm { MOV R10D,dword ptr [RBP + 0x10] }
    /* +0xe40369 */ __asm { CMP R10D,0xb02f8198 }
    /* +0xe40370 */ __asm { NOP }
    /* +0xe40371 */ __asm { NOP }
    /* +0xe40372 */ __asm { NOP }
    /* +0xe40373 */ __asm { NOP }
    /* +0xe40374 */ __asm { NOP }
    /* +0xe40375 */ __asm { PUSHFQ }
    /* +0xe40376 */ __asm { POP R10 }
    /* +0xe40378 */ __asm { MOV qword ptr [RBP + 0x180],R10 }
    /* +0xe4037f */ __asm { TEST R10D,0x100 }
    /* +0xe40386 */ __asm { NOP }
    /* +0xe40387 */ __asm { NOP }
    /* +0xe40388 */ __asm { NOP }
    /* +0xe40389 */ __asm { NOP }
    /* +0xe4038a */ __asm { NOP }
    /* +0xe4038b */ __asm { MOV dword ptr [RBP + 0x10],0xffb4cdc5 }
    /* +0xe40392 */ __asm { MOV R10D,dword ptr [RBP + 0x10] }
    /* +0xe40396 */ __asm { MOV R11D,0x5a00876c }
    /* +0xe4039c */ __asm { ADD R11D,0x5229d57c }
    /* +0xe403a3 */ __asm { LEA R10D,[RCX + 0x4] }
    /* +0xe403a7 */ __asm { MOV EDX,ECX }
    /* +0xe403a9 */ __asm { AND EDX,0x4 }
    /* +0xe403ac */ __asm { MOV EAX,0xb5771ec }
    /* +0xe403b1 */ __asm { IMUL R8D,EAX,0x64837cbd }
    /* +0xe403b8 */ __asm { ADD R8D,0xf8c51a3b }
    /* +0xe403bf */ __asm { CMP R11,R8 }
    /* +0xe403c2 */ __asm { CMOVBE EDX,R10D }
    /* +0xe403c6 */ __asm { TEST EDX,EDX }
    /* +0xe403c8 */ __asm { JZ 0x7fffa55b03e9 }
    /* +0xe403ca */ __asm { MOV dword ptr [RBP + 0x10],0x601a302a }
    /* +0xe403d1 */ __asm { MOV R10D,dword ptr [RBP + 0x10] }
    /* +0xe403d5 */ __asm { CMP R10D,0xb6180e76 }
    /* +0xe403dc */ __asm { JNC 0x7fffa55b37c6 }
    /* +0xe403e2 */ __asm { XOR EAX,EAX }
    /* +0xe403e4 */ __asm { JMP 0x7fffa55b379a }
    /* +0xe403e9 */ __asm { MOV R10W,0x3c63 }
    /* +0xe403ee */ __asm { ADD R10D,0xfffff39d }
    /* +0xe403f5 */ __asm { ROL R10W,0x8 }
    /* +0xe403fa */ __asm { MOVZX R11D,R10W }
    /* +0xe403fe */ __asm { MOV RDX,-0x154659453b4a6265 }
    /* +0xe40408 */ __asm { MOV R8D,0xca51f8ca }
    /* +0xe4040e */ __asm { ADD R8,RDX }
    /* +0xe40411 */ __asm { MOV EDX,0x6c0 }
    /* +0xe40416 */ __asm { ADD RDX,qword ptr GS:[R11] }
    /* +0xe4041a */ __asm { MOV R11,0xaae1957f128f813 }
    /* +0xe40424 */ __asm { OR R11,RDX }
    /* +0xe40427 */ __asm { CMP R11,R8 }
    /* +0xe4042a */ __asm { JZ 0x7fffa55b37b6 }
    /* +0xe40430 */ __asm { MOV qword ptr [RBP + 0x158],RCX }
    /* +0xe40437 */ __asm { LEA R11,[0x7fffa47c157a] }
    /* +0xe4043e */ __asm { MOV RDX,-0x94332cff }
    /* +0xe40448 */ __asm { ADD RDX,R11 }
    /* +0xe4044b */ __asm { MOV ECX,0xbc180d0b }
    /* +0xe40450 */ __asm { XOR RCX,RDX }
    /* +0xe40453 */ __asm { MOV RDX,-0x5a464db545581c80 }
    /* +0xe4045d */ __asm { CMP RCX,RDX }
    /* +0xe40460 */ __asm { JZ 0x7fffa55b37ce }
    /* +0xe40466 */ __asm { MOV R10W,0xa58 }
    /* +0xe4046b */ __asm { MOV R9,R11 }
    /* +0xe4046e */ __asm { ADD R9,-0x4112 }
    /* +0xe40475 */ __asm { IMUL R10D,R10D,0x237b }
    /* +0xe4047c */ __asm { MOVZX R8D,R10W }
    /* +0xe40480 */ __asm { MOV R14,qword ptr GS:[R8] }
    /* +0xe40484 */ __asm { MOV R10D,dword ptr [R11 + -0x4112] }
    /* +0xe4048b */ __asm { CMP R10D,R14D }
    /* +0xe4048e */ __asm { MOV qword ptr [RBP + 0x138],R9 }
    /* +0xe40495 */ __asm { JZ 0x7fffa55b04ab }
    /* +0xe40497 */ __asm { LEA RCX,[R9 + 0x8] }
    /* +0xe4049b */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0xe404a1 */ __asm { MOV R9,qword ptr [RBP + 0x138] }
    /* +0xe404a8 */ __asm { XCHG dword ptr [R9],R14D }
    /* +0xe404ab */ __asm { INC dword ptr [R9 + 0x4] }
    /* +0xe404af */ __asm { PUSHFQ }
    /* +0xe404b0 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe404b8 */ __asm { POPFQ }
    /* +0xe404b9 */ __asm { MOV dword ptr [RBP + 0x10],0x46f182ef }
    /* +0xe404c0 */ __asm { MOV R10D,dword ptr [RBP + 0x10] }
    /* +0xe404c4 */ __asm { TEST R10D,R10D }
    /* +0xe404c7 */ __asm { JS 0x7fffa55b37f1 }
    /* +0xe404cd */ __asm { LEA RAX,[0x7fffa47bbf07] }
    /* +0xe404d4 */ __asm { MOV R10D,0x12f35c2b }
    /* +0xe404da */ __asm { MOV R11D,0x661c3393 }
    /* +0xe404e0 */ __asm { SUB R11D,R10D }
    /* +0xe404e3 */ __asm { MOV R9,RAX }
    /* +0xe404e6 */ __asm { SUB R9,R11 }
    /* +0xe404e9 */ __asm { MOV R11D,0xbac52829 }
    /* +0xe404ef */ __asm { XOR R11,R9 }
    /* +0xe404f2 */ __asm { MOV RDX,-0x4645d39e9aa4ad0c }
    /* +0xe404fc */ __asm { CMP R11,RDX }
    /* +0xe404ff */ __asm { JZ 0x7fffa55b37fd }
    /* +0xe40505 */ __asm { LEA RDX,[RBP + 0x7e] }
    /* +0xe40509 */ __asm { MOV R11D,0xa021ca13 }
    /* +0xe4050f */ __asm { ADD R11D,0x30817b7b }
    /* +0xe40516 */ __asm { MOVZX ECX,uint8_t ptr [RAX + 0x3451] }
    /* +0xe4051d */ __asm { MOVZX R8D,CL }
    /* +0xe40521 */ __asm { CMP R11,-0x40dbfbd9 }
    /* +0xe40528 */ __asm { JNZ 0x7fffa55b0582 }
    /* +0xe4052a */ __asm { MOVZX R10D,uint8_t ptr [RAX + 0x347e] }
    /* +0xe40532 */ __asm { MOVZX R11D,uint8_t ptr [RAX + 0x347b] }
    /* +0xe4053a */ __asm { MOVZX R9D,uint8_t ptr [RAX + 0x347c] }
    /* +0xe40542 */ __asm { XOR R9B,uint8_t ptr [RAX + R8*0x4 + 0x345a] }
    /* +0xe4054a */ __asm { NOT R9B }
    /* +0xe4054d */ __asm { ROR R9B,0x1 }
    /* +0xe40550 */ __asm { XOR R11B,uint8_t ptr [RAX + R8*0x4 + 0x3459] }
    /* +0xe40558 */ __asm { NOT R11B }
    /* +0xe4055b */ __asm { ROR R11B,0x1 }
    /* +0xe4055e */ __asm { MOVZX ECX,uint8_t ptr [RAX + R8*0x4 + 0x345b] }
    /* +0xe40567 */ __asm { XOR CL,uint8_t ptr [RAX + 0x347d] }
    /* +0xe4056d */ __asm { MOV uint8_t ptr [RBP + 0x11],R9B }
    /* +0xe40571 */ __asm { MOV uint8_t ptr [RBP + 0x10],R11B }
    /* +0xe40575 */ __asm { MOV EBX,0x9fd851a4 }
    /* +0xe4057a */ __asm { ADD EBX,0x3bab0772 }
    /* +0xe40580 */ __asm { JMP 0x7fffa55b0600 }
    /* +0xe40582 */ __asm { MOVZX R10D,uint8_t ptr [RAX + 0x347e] }
    /* +0xe4058a */ __asm { MOV R11D,0xc80ad5ac }
    /* +0xe40590 */ __asm { MOV R9D,0xa05d2009 }
    /* +0xe40596 */ __asm { ADD R9D,0xe2683e73 }
    /* +0xe4059d */ __asm { XOR R9D,0xc0000242 }
    /* +0xe405a4 */ __asm { MOVSX R14,CL }
    /* +0xe405a8 */ __asm { MOVZX R13D,uint8_t ptr [RAX + 0x347c] }
    /* +0xe405b0 */ __asm { MOVZX ECX,uint8_t ptr [RAX + 0x347d] }
    /* +0xe405b7 */ __asm { IMUL R11D,R11D,-0x5ad5d2f3 }
    /* +0xe405be */ __asm { MOVSXD RBX,R11D }
    /* +0xe405c1 */ __asm { CMP R9,0x42c55c3e }
    /* +0xe405c8 */ __asm { CMOVNZ R8,R14 }
    /* +0xe405cc */ __asm { MOVZX R11D,uint8_t ptr [RAX + R8*0x4 + 0x3459] }
    /* +0xe405d5 */ __asm { XOR R11B,uint8_t ptr [RAX + 0x347b] }
    /* +0xe405dc */ __asm { NOT R11B }
    /* +0xe405df */ __asm { ROR R11B,0x1 }
    /* +0xe405e2 */ __asm { MOV uint8_t ptr [RBP + 0x10],R11B }
    /* +0xe405e6 */ __asm { XOR R13B,uint8_t ptr [RAX + R8*0x4 + 0x345a] }
    /* +0xe405ee */ __asm { NOT R13B }
    /* +0xe405f1 */ __asm { ROR R13B,0x1 }
    /* +0xe405f4 */ __asm { MOV uint8_t ptr [RBP + 0x11],R13B }
    /* +0xe405f8 */ __asm { XOR CL,uint8_t ptr [RAX + R8*0x4 + 0x345b] }
    /* +0xe40600 */ __asm { NOT CL }
    /* +0xe40602 */ __asm { ROR CL,0x1 }
    /* +0xe40604 */ __asm { MOV uint8_t ptr [RBP + 0x12],CL }
    /* +0xe40607 */ __asm { XOR R10B,uint8_t ptr [RAX + R8*0x4 + 0x345c] }
    /* +0xe4060f */ __asm { NOT R10B }
    /* +0xe40612 */ __asm { ROR R10B,0x1 }
    /* +0xe40615 */ __asm { MOV uint8_t ptr [RBP + 0x13],R10B }
    /* +0xe40619 */ __asm { MOV R8D,dword ptr [RBP + 0x10] }
    /* +0xe4061d */ __asm { MOV R11D,R8D }
    /* +0xe40620 */ __asm { LEA ECX,[R8 + -0x1] }
    /* +0xe40624 */ __asm { MOV R12D,ECX }
    /* +0xe40627 */ __asm { SHR R12D,0x18 }
    /* +0xe4062b */ __asm { ROL R12B,0x1 }
    /* +0xe4062e */ __asm { SHR R11D,0x8 }
    /* +0xe40632 */ __asm { MOV R13D,ECX }
    /* +0xe40635 */ __asm { ROL R13B,0x1 }
    /* +0xe40638 */ __asm { MOV R9D,R8D }
    /* +0xe4063b */ __asm { SHR R9D,0x10 }
    /* +0xe4063f */ __asm { MOVZX R10D,uint8_t ptr [RAX + 0x3451] }
    /* +0xe40647 */ __asm { IMUL R10D,R10D,0x24924925 }
    /* +0xe4064e */ __asm { ADD R10D,0x24924925 }
    /* +0xe40655 */ __asm { LEA R14,[R10*0x8] }
    /* +0xe4065d */ __asm { SUB R14,R10 }
    /* +0xe40660 */ __asm { SHR R14,0x20 }
    /* +0xe40664 */ __asm { MOV R15D,ECX }
    /* +0xe40667 */ __asm { SHR R15D,0x10 }
    /* +0xe4066b */ __asm { MOV R10D,R8D }
    /* +0xe4066e */ __asm { XOR R13B,uint8_t ptr [RAX + 0x347b] }
    /* +0xe40675 */ __asm { ROL R15B,0x1 }
    /* +0xe40678 */ __asm { SHR R10D,0x18 }
    /* +0xe4067c */ __asm { XOR R15B,uint8_t ptr [RAX + 0x347d] }
    /* +0xe40683 */ __asm { SHR ECX,0x8 }
    /* +0xe40686 */ __asm { ROL CL,0x1 }
    /* +0xe40688 */ __asm { XOR CL,uint8_t ptr [RAX + 0x347c] }
    /* +0xe4068e */ __asm { NOT R13B }
    /* +0xe40691 */ __asm { MOV uint8_t ptr [RAX + R14*0x4 + 0x3459],R13B }
    /* +0xe40699 */ __asm { XOR R12B,uint8_t ptr [RAX + 0x347e] }
    /* +0xe406a0 */ __asm { NOT R12B }
    /* +0xe406a3 */ __asm { MOV uint8_t ptr [RAX + R14*0x4 + 0x345c],R12B }
    /* +0xe406ab */ __asm { NOT R15B }
    /* +0xe406ae */ __asm { MOV uint8_t ptr [RAX + R14*0x4 + 0x345b],R15B }
    /* +0xe406b6 */ __asm { NOT CL }
    /* +0xe406b8 */ __asm { MOV uint8_t ptr [RAX + R14*0x4 + 0x345a],CL }
    /* +0xe406c0 */ __asm { MOV uint8_t ptr [RAX + 0x3451],R14B }
    /* +0xe406c7 */ __asm { MOV uint8_t ptr [RBP + 0x76],0x0 }
    /* +0xe406cb */ __asm { PXOR XMM5,XMM5 }
    /* +0xe406cf */ __asm { MOVDQU xmmword ptr [RDX + 0xc],XMM5 }
    /* +0xe406d4 */ __asm { MOVDQU xmmword ptr [RDX],XMM5 }
    /* +0xe406d8 */ __asm { MOV dword ptr [RBP + 0xa0],0x0 }
    /* +0xe406e2 */ __asm { RDTSC }
    /* +0xe406e4 */ __asm { SHL RDX,0x20 }
    /* +0xe406e8 */ __asm { OR RDX,RAX }
    /* +0xe406eb */ __asm { MOV RCX,0x660dcddba984d06 }
    /* +0xe406f5 */ __asm { IMUL RDX,RCX }
    /* +0xe406f9 */ __asm { XOR EAX,EAX }
    /* +0xe406fb */ __asm { MOV RSI,-0x2f87156c132eb5fe }
    /* +0xe40705 */ __asm { MOV R14D,0xb2ed08aa }
    /* +0xe4070b */ __asm { MOV R13,-0x5309a0c11f5953a5 }
    /* +0xe40715 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xe40720 */ __asm { MOV R15,RSI }
    /* +0xe40723 */ __asm { IMUL R15,R15,-0x710c539f }
    /* +0xe4072a */ __asm { SUB R15,RBX }
    /* +0xe4072d */ __asm { IMUL RDX,RCX }
    /* +0xe40731 */ __asm { ADD RDX,R15 }
    /* +0xe40734 */ __asm { MOV R12D,EDX }
    /* +0xe40737 */ __asm { SHL R12D,0x5 }
    /* +0xe4073b */ __asm { MOV RDI,RDX }
    /* +0xe4073e */ __asm { SHR RDI,0x20 }
    /* +0xe40742 */ __asm { MOV R15D,0x9a8625a0 }
    /* +0xe40748 */ __asm { XOR R15D,0x78888a21 }
    /* +0xe4074f */ __asm { SUB R15D,EBX }
    /* +0xe40752 */ __asm { CMP R15,R14 }
    /* +0xe40755 */ __asm { CMOVZ EDI,R12D }
    /* +0xe40759 */ __asm { MOV uint8_t ptr [RBP + RAX*0x1 + 0x73],DIL }
    /* +0xe4075e */ __asm { MOV EDI,0xc5abea1f }
    /* +0xe40763 */ __asm { XOR EDI,EBX }
    /* +0xe40765 */ __asm { ADD EDI,0xc000008d }
    /* +0xe4076b */ __asm { CMP RAX,RDI }
    /* +0xe4076e */ __asm { JZ 0x7fffa55b07c2 }
    /* +0xe40770 */ __asm { MOV RDI,R13 }
    /* +0xe40773 */ __asm { ADD RDI,0x533db7ed }
    /* +0xe4077a */ __asm { ROL RDI,0x1b }
    /* +0xe4077e */ __asm { NOT RDI }
    /* +0xe40781 */ __asm { IMUL RDI,RDX }
    /* +0xe40785 */ __asm { ADD RDI,RCX }
    /* +0xe40788 */ __asm { MOV RDX,RDI }
    /* +0xe4078b */ __asm { SHR RDX,0x20 }
    /* +0xe4078f */ __asm { MOV uint8_t ptr [RBP + RAX*0x1 + 0x74],DL }
    /* +0xe40793 */ __asm { IMUL RDI,RCX }
    /* +0xe40797 */ __asm { ADD RDI,RCX }
    /* +0xe4079a */ __asm { MOV RDX,RDI }
    /* +0xe4079d */ __asm { IMUL RDX,RCX }
    /* +0xe407a1 */ __asm { SHR RDI,0x20 }
    /* +0xe407a5 */ __asm { ADD RDX,RCX }
    /* +0xe407a8 */ __asm { MOV R15,RDX }
    /* +0xe407ab */ __asm { SHR R15,0x20 }
    /* +0xe407af */ __asm { MOV uint8_t ptr [RBP + RAX*0x1 + 0x76],R15B }
    /* +0xe407b4 */ __asm { MOV uint8_t ptr [RBP + RAX*0x1 + 0x75],DIL }
    /* +0xe407b9 */ __asm { ADD RAX,0x4 }
    /* +0xe407bd */ __asm { JMP 0x7fffa55b0720 }
    /* +0xe407c2 */ __asm { MOV EDX,0xb5731362 }
    /* +0xe407c7 */ __asm { ROL R8B,0x1 }
    /* +0xe407ca */ __asm { MOV EAX,0xfc6dfef6 }
    /* +0xe407cf */ __asm { IMUL R12D,EAX,-0x5a24d869 }
    /* +0xe407d6 */ __asm { ROL R11B,0x1 }
    /* +0xe407d9 */ __asm { ADD R12D,0x697a9a19 }
    /* +0xe407e0 */ __asm { MOVZX EAX,uint8_t ptr [RBP + 0x76] }
    /* +0xe407e4 */ __asm { IMUL ECX,EAX,0x24924925 }
    /* +0xe407ea */ __asm { ADD ECX,0x24924925 }
    /* +0xe407f0 */ __asm { LEA RAX,[RCX*0x8] }
    /* +0xe407f8 */ __asm { SUB RAX,RCX }
    /* +0xe407fb */ __asm { ADD EDX,0xfd6cca3f }
    /* +0xe40801 */ __asm { MOV ECX,EBX }
    /* +0xe40803 */ __asm { ROR EDX,CL }
    /* +0xe40805 */ __asm { SHR RAX,0x20 }
    /* +0xe40809 */ __asm { XOR R11B,uint8_t ptr [RBP + 0xa1] }
    /* +0xe40810 */ __asm { ROR R12D,CL }
    /* +0xe40813 */ __asm { MOVSXD RCX,R12D }
    /* +0xe40816 */ __asm { NOT R11B }
    /* +0xe40819 */ __asm { CMP RCX,RDX }
    /* +0xe4081c */ __asm { JNC 0x7fffa55b085a }
    /* +0xe4081e */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0xa0] }
    /* +0xe40825 */ __asm { MOVZX EDX,uint8_t ptr [RBP + 0xa3] }
    /* +0xe4082c */ __asm { MOV R13D,0x123ddd14 }
    /* +0xe40832 */ __asm { XOR R13D,EBX }
    /* +0xe40835 */ __asm { ROL R9B,0x1 }
    /* +0xe40838 */ __asm { XOR R9B,uint8_t ptr [RBP + 0xa2] }
    /* +0xe4083f */ __asm { NOT R9B }
    /* +0xe40842 */ __asm { ADD R13D,0x2ab8a155 }
    /* +0xe40849 */ __asm { XOR R13D,0x21306087 }
    /* +0xe40850 */ __asm { MOV uint8_t ptr [RBP + RAX*0x4 + 0x80],R9B }
    /* +0xe40858 */ __asm { JMP 0x7fffa55b088d }
    /* +0xe4085a */ __asm { MOVZX EDX,uint8_t ptr [RBP + 0xa3] }
    /* +0xe40861 */ __asm { MOV ECX,0xbf05a27b }
    /* +0xe40866 */ __asm { IMUL ECX,ECX,0x6fd68023 }
    /* +0xe4086c */ __asm { NOT ECX }
    /* +0xe4086e */ __asm { MOVSXD R13,ECX }
    /* +0xe40871 */ __asm { ROL R9B,0x1 }
    /* +0xe40874 */ __asm { XOR R9B,uint8_t ptr [RBP + 0xa2] }
    /* +0xe4087b */ __asm { NOT R9B }
    /* +0xe4087e */ __asm { MOV uint8_t ptr [RBP + RAX*0x4 + 0x80],R9B }
    /* +0xe40886 */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0xa0] }
    /* +0xe4088d */ __asm { MOV uint8_t ptr [RBP + RAX*0x4 + 0x7f],R11B }
    /* +0xe40892 */ __asm { XOR R8B,CL }
    /* +0xe40895 */ __asm { LEA R9D,[R8 + 0x1] }
    /* +0xe40899 */ __asm { MOV R11D,0x58a7fc9c }
    /* +0xe4089f */ __asm { MOV R14D,0xef223396 }
    /* +0xe408a5 */ __asm { NOT R11D }
    /* +0xe408a8 */ __asm { ADD R11D,R13D }
    /* +0xe408ab */ __asm { ADD R11D,0xef7ab5cf }
    /* +0xe408b2 */ __asm { MOV R15D,R13D }
    /* +0xe408b5 */ __asm { OR R15D,0x1 }
    /* +0xe408b9 */ __asm { NOT R8B }
    /* +0xe408bc */ __asm { MOV R12D,0xea055bf5 }
    /* +0xe408c2 */ __asm { ADD R12D,0xed17732d }
    /* +0xe408c9 */ __asm { MOV ECX,R13D }
    /* +0xe408cc */ __asm { ROL R12D,CL }
    /* +0xe408cf */ __asm { ADD R12D,0xc8dd4ec7 }
    /* +0xe408d6 */ __asm { MOVSXD RCX,R12D }
    /* +0xe408d9 */ __asm { MOV dword ptr [RBP + 0xec],R15D }
    /* +0xe408e0 */ __asm { IMUL R14D,R15D }
    /* +0xe408e4 */ __asm { XOR R14D,0xba28794b }
    /* +0xe408eb */ __asm { ROL R14D,0x1c }
    /* +0xe408ef */ __asm { MOV R12D,0x51fd0500 }
    /* +0xe408f5 */ __asm { SUB R12D,R13D }
    /* +0xe408f8 */ __asm { ADD R12D,0x63018c24 }
    /* +0xe408ff */ __asm { MOVSXD RSI,R12D }
    /* +0xe40902 */ __asm { CMP R14,RSI }
    /* +0xe40905 */ __asm { MOVZX R8D,R8B }
    /* +0xe40909 */ __asm { MOVZX R9D,R9B }
    /* +0xe4090d */ __asm { CMOVBE R9D,R8D }
    /* +0xe40911 */ __asm { MOV uint8_t ptr [RBP + RAX*0x4 + 0x7e],R9B }
    /* +0xe40916 */ __asm { ROL R10B,0x1 }
    /* +0xe40919 */ __asm { XOR R10B,DL }
    /* +0xe4091c */ __asm { NOT R10B }
    /* +0xe4091f */ __asm { MOV uint8_t ptr [RBP + RAX*0x4 + 0x81],R10B }
    /* +0xe40927 */ __asm { MOV uint8_t ptr [RBP + 0x76],AL }
    /* +0xe4092a */ __asm { MOVZX R15D,uint8_t ptr [RBP + 0xa1] }
    /* +0xe40932 */ __asm { XOR R15B,uint8_t ptr [RBP + RAX*0x4 + 0x7f] }
    /* +0xe40937 */ __asm { MOVZX R10D,uint8_t ptr [RBP + 0xa3] }
    /* +0xe4093f */ __asm { MOVZX EDX,uint8_t ptr [RBP + RAX*0x4 + 0x7e] }
    /* +0xe40944 */ __asm { XOR DL,uint8_t ptr [RBP + 0xa0] }
    /* +0xe4094a */ __asm { MOVZX R8D,uint8_t ptr [RBP + RAX*0x4 + 0x80] }
    /* +0xe40953 */ __asm { NOT DL }
    /* +0xe40955 */ __asm { ROR DL,0x1 }
    /* +0xe40957 */ __asm { XOR R10B,uint8_t ptr [RBP + RAX*0x4 + 0x81] }
    /* +0xe4095f */ __asm { MOV EAX,R15D }
    /* +0xe40962 */ __asm { NOT AL }
    /* +0xe40964 */ __asm { ROR AL,0x1 }
    /* +0xe40966 */ __asm { XOR R8B,uint8_t ptr [RBP + 0xa2] }
    /* +0xe4096d */ __asm { NOT R8B }
    /* +0xe40970 */ __asm { ROR R8B,0x1 }
    /* +0xe40973 */ __asm { CMP RCX,R11 }
    /* +0xe40976 */ __asm { MOV uint8_t ptr [RBP + 0x10],DL }
    /* +0xe40979 */ __asm { MOV uint8_t ptr [RBP + 0x11],AL }
    /* +0xe4097c */ __asm { MOV uint8_t ptr [RBP + 0x12],R8B }
    /* +0xe40980 */ __asm { NOT R10B }
    /* +0xe40983 */ __asm { MOVZX R10D,R10B }
    /* +0xe40987 */ __asm { MOV EDX,0xff }
    /* +0xe4098c */ __asm { CMOVLE EDX,R10D }
    /* +0xe40990 */ __asm { ROR DL,0x1 }
    /* +0xe40992 */ __asm { MOV uint8_t ptr [RBP + 0x13],DL }
    /* +0xe40995 */ __asm { CMP dword ptr [RBP + 0x10],0x0 }
    /* +0xe40999 */ __asm { JZ 0x7fffa55b3805 }
    /* +0xe4099f */ __asm { MOV R12D,EBX }
    /* +0xe409a2 */ __asm { OR R12D,0x1 }
    /* +0xe409a6 */ __asm { MOV dword ptr [RBP + 0x10],0x3b0aa95e }
    /* +0xe409ad */ __asm { MOV R10D,dword ptr [RBP + 0x10] }
    /* +0xe409b1 */ __asm { MOV R11D,0x78a1ea1b }
    /* +0xe409b7 */ __asm { SUB R11D,EBX }
    /* +0xe409ba */ __asm { XOR R11D,0x6dc0e6de }
    /* +0xe409c1 */ __asm { MOVZX R8D,uint8_t ptr [RBP + 0x76] }
    /* +0xe409c6 */ __asm { ADD R11D,0x8e730821 }
    /* +0xe409cd */ __asm { MOV R9D,0x12350416 }
    /* +0xe409d3 */ __asm { XOR R9D,R13D }
    /* +0xe409d6 */ __asm { ROL R9D,0xa }
    /* +0xe409da */ __asm { CMP R9,R11 }
    /* +0xe409dd */ __asm { JG 0x7fffa55b0a58 }
    /* +0xe409df */ __asm { MOV R11D,0xf9db15e3 }
    /* +0xe409e5 */ __asm { IMUL R11D,R12D }
    /* +0xe409e9 */ __asm { MOV R14D,0xde395f0f }
    /* +0xe409ef */ __asm { MOVZX R10D,uint8_t ptr [RBP + R8*0x4 + 0x7e] }
    /* +0xe409f5 */ __asm { MOVZX EDX,uint8_t ptr [RBP + R8*0x4 + 0x80] }
    /* +0xe409fe */ __asm { XOR DL,uint8_t ptr [RBP + 0xa2] }
    /* +0xe40a04 */ __asm { ROL R11D,0xa }
    /* +0xe40a08 */ __asm { CMP R11,0x1b1e5d30 }
    /* +0xe40a0f */ __asm { SETZ AL }
    /* +0xe40a12 */ __asm { NOT DL }
    /* +0xe40a14 */ __asm { ROR DL,0x1 }
    /* +0xe40a16 */ __asm { MOV uint8_t ptr [RBP + 0x12],DL }
    /* +0xe40a19 */ __asm { MOVZX EDX,uint8_t ptr [RBP + 0xa1] }
    /* +0xe40a20 */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0xa3] }
    /* +0xe40a27 */ __asm { XOR DL,uint8_t ptr [RBP + R8*0x4 + 0x7f] }
    /* +0xe40a2c */ __asm { NOT DL }
    /* +0xe40a2e */ __asm { ROR DL,0x1 }
    /* +0xe40a30 */ __asm { XOR CL,uint8_t ptr [RBP + R8*0x4 + 0x81] }
    /* +0xe40a38 */ __asm { NEG AL }
    /* +0xe40a3a */ __asm { SUB R14D,R13D }
    /* +0xe40a3d */ __asm { ROL R14D,0x16 }
    /* +0xe40a41 */ __asm { ADD R14D,0x8d77894d }
    /* +0xe40a48 */ __asm { XOR R10B,uint8_t ptr [RBP + 0xa0] }
    /* +0xe40a4f */ __asm { XOR CL,AL }
    /* +0xe40a51 */ __asm { ROR CL,0x1 }
    /* +0xe40a53 */ __asm { MOV uint8_t ptr [RBP + 0x13],CL }
    /* +0xe40a56 */ __asm { JMP 0x7fffa55b0ab4 }
    /* +0xe40a58 */ __asm { MOVZX EAX,uint8_t ptr [RBP + 0xa3] }
    /* +0xe40a5f */ __asm { MOV R10D,0x50ca39ef }
    /* +0xe40a65 */ __asm { MOV EDX,0xbf120c22 }
    /* +0xe40a6a */ __asm { SUB EDX,R10D }
    /* +0xe40a6d */ __asm { XOR EDX,EBX }
    /* +0xe40a6f */ __asm { MOVSXD R14,EDX }
    /* +0xe40a72 */ __asm { XOR AL,uint8_t ptr [RBP + R8*0x4 + 0x81] }
    /* +0xe40a7a */ __asm { MOVZX R10D,uint8_t ptr [RBP + R8*0x4 + 0x7e] }
    /* +0xe40a80 */ __asm { XOR R10B,uint8_t ptr [RBP + 0xa0] }
    /* +0xe40a87 */ __asm { NOT AL }
    /* +0xe40a89 */ __asm { ROR AL,0x1 }
    /* +0xe40a8b */ __asm { MOVZX ECX,uint8_t ptr [RBP + 0xa2] }
    /* +0xe40a92 */ __asm { XOR CL,uint8_t ptr [RBP + R8*0x4 + 0x80] }
    /* +0xe40a9a */ __asm { NOT CL }
    /* +0xe40a9c */ __asm { ROR CL,0x1 }
    /* +0xe40a9e */ __asm { MOVZX EDX,uint8_t ptr [RBP + 0xa1] }
    /* +0xe40aa5 */ __asm { MOV uint8_t ptr [RBP + 0x12],CL }
    /* +0xe40aa8 */ __asm { XOR DL,uint8_t ptr [RBP + R8*0x4 + 0x7f] }
    /* +0xe40aad */ __asm { MOV uint8_t ptr [RBP + 0x13],AL }
    /* +0xe40ab0 */ __asm { NOT DL }
    /* +0xe40ab2 */ __asm { ROR DL,0x1 }
    /* +0xe40ab4 */ __asm { MOV RSI,R13 }
    /* +0xe40ab7 */ __asm { NOT R10B }
    /* +0xe40aba */ __asm { MOV R11W,0xe03c }
    /* +0xe40abf */ __asm { MOV uint8_t ptr [RBP + 0x11],DL }
    /* +0xe40ac2 */ __asm { ROR R10B,0x1 }
    /* +0xe40ac5 */ __asm { MOV uint8_t ptr [RBP + 0x10],R10B }
    /* +0xe40ac9 */ __asm { MOV R10D,ESI }
    /* +0xe40acc */ __asm { OR R10D,0x1 }
    /* +0xe40ad0 */ __asm { XOR R11D,0x7ccf }
    /* +0xe40ad7 */ __asm { ADD R11D,0xdc }
    /* +0xe40ade */ __asm { MOV dword ptr [RBP + 0x120],R10D }
    /* +0xe40ae5 */ __asm { IMUL R11D,R10D }
    /* +0xe40ae9 */ __asm { MOVZX R10D,R11W }
    /* +0xe40aed */ __asm { CMP dword ptr [RBP + 0x10],R10D }
    /* +0xe40af1 */ __asm { JA 0x7fffa55b1291 }
    /* +0xe40af7 */ __asm { TEST dword ptr [RBP + 0x180],0x100 }
    /* +0xe40b01 */ __asm { NOP }
    /* +0xe40b02 */ __asm { NOP }
    /* +0xe40b03 */ __asm { NOP }
    /* +0xe40b04 */ __asm { MOV uint8_t ptr [RBP + 0x68],R15B }
    /* +0xe40b08 */ __asm { MOV qword ptr [RBP + 0x168],RBX }
    /* +0xe40b0f */ __asm { MOV dword ptr [RBP + -0x3c],R12D }
    /* +0xe40b13 */ __asm { MOV qword ptr [RBP + 0x58],R14 }
    /* +0xe40b17 */ __asm { MOV dword ptr [RBP + 0x10],0xc97860ba }
    /* +0xe40b1e */ __asm { MOV R10D,dword ptr [RBP + 0x10] }
    /* +0xe40b22 */ __asm { TEST R10D,R10D }
    /* +0xe40b25 */ __asm { NOP }
    /* +0xe40b26 */ __asm { NOP }
    /* +0xe40b27 */ __asm { NOP }
    /* +0xe40b28 */ __asm { NOP }
    /* +0xe40b29 */ __asm { NOP }
    /* +0xe40b2a */ __asm { NOP }
    /* +0xe40b2b */ __asm { NOP }
    /* +0xe40b2c */ __asm { NOP }
    /* +0xe40b2d */ __asm { NOP }
    /* +0xe40b2e */ __asm { NOP }
    /* +0xe40b2f */ __asm { NOP }
    /* +0xe40b30 */ __asm { NOP }
    /* +0xe40b31 */ __asm { NOP }
    /* +0xe40b32 */ __asm { NOP }
    /* +0xe40b33 */ __asm { NOP }
    /* +0xe40b34 */ __asm { NOP }
    /* +0xe40b35 */ __asm { NOP }
    /* +0xe40eff */ __asm { MOV R11,-0x13f24c94f }
    /* +0xe40f09 */ __asm { MOV R15,RBX }
    /* +0xe40f0c */ __asm { NOT R15 }
    /* +0xe40f0f */ __asm { MOV R9D,R15D }
    /* +0xe40f12 */ __asm { AND R9D,0xcc150ba0 }
    /* +0xe40f19 */ __asm { MOV RAX,R9 }
    /* +0xe40f1c */ __asm { MOV qword ptr [RBP + 0xa8],R9 }
    /* +0xe40f23 */ __asm { MOV R9D,0xe8d4a6a2 }
    /* +0xe40f29 */ __asm { MOV qword ptr [RBP + 0xb8],R9 }
    /* +0xe40f30 */ __asm { MOV RCX,R9 }
    /* +0xe40f33 */ __asm { MOV EDX,0x70843dbb }
    /* +0xe40f38 */ __asm { IMUL R9D,EDX,0x3cda627b }
    /* +0xe40f3f */ __asm { ADD R9D,EDI }
    /* +0xe40f42 */ __asm { MOV qword ptr [RBP + -0x18],R9 }
    /* +0xe40f46 */ __asm { MOV R9W,0xea13 }
    /* +0xe40f4b */ __asm { MOV qword ptr [RBP + 0xc0],R9 }
    /* +0xe40f52 */ __asm { MOV EDX,0xcc150ba0 }
    /* +0xe40f57 */ __asm { OR R15,RDX }
    /* +0xe40f5a */ __asm { XOR R15,RCX }
    /* +0xe40f5d */ __asm { MOV RSI,RCX }
    /* +0xe40f60 */ __asm { NOT RSI }
    /* +0xe40f63 */ __asm { MOV R13,RSI }
    /* +0xe40f66 */ __asm { XOR R13,RAX }
    /* +0xe40f69 */ __asm { MOV EAX,0x17c2e05e }
    /* +0xe40f6e */ __asm { MOV R9,qword ptr [RBP + 0x168] }
    /* +0xe40f75 */ __asm { MOV RDI,R9 }
    /* +0xe40f78 */ __asm { SUB RDI,RAX }
    /* +0xe40f7b */ __asm { MOV RAX,-0x84f98f26 }
    /* +0xe40f85 */ __asm { ADD RAX,RDI }
    /* +0xe40f88 */ __asm { MOV qword ptr [RBP + 0x150],RAX }
    /* +0xe40f8f */ __asm { MOVZX R10D,uint8_t ptr [RBP + 0x68] }
    /* +0xe40f94 */ __asm { MOV RAX,R10 }
    /* +0xe40f97 */ __asm { XOR RAX,R13 }
    /* +0xe40f9a */ __asm { MOV R14D,R15D }
    /* +0xe40f9d */ __asm { MOV qword ptr [RBP + -0x38],R14 }
    /* +0xe40fa1 */ __asm { XOR R15,R10 }
    /* +0xe40fa4 */ __asm { SUB R15,RAX }
    /* +0xe40fa7 */ __asm { MOV EAX,0xa26859c9 }
    /* +0xe40fac */ __asm { IMUL RAX,R15 }
    /* +0xe40fb0 */ __asm { MOV qword ptr [RBP + 0x68],RAX }
    /* +0xe40fb4 */ __asm { AND R13D,R10D }
    /* +0xe40fb7 */ __asm { MOV RAX,-0xef09e10e }
}


// ============================================================================
// Function : Unwind@7fffa55b39f0  |  RVA: 0xe439f0  |  Size: 109 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55b39f0(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int *piVar1;
  uint32_t *puVar2;
  
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x1b8) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar2 = *(uint32_t **)(param_2 + 0x1b8);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2,param_2,param_3,&IMAGE_DOS_HEADER_7fffa4770000);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55b3a60  |  RVA: 0xe43a60  |  Size: 9095 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55b3a60(void) {
    /* +0xe43a60 */ __asm { PUSH RBP }
    /* +0xe43a61 */ __asm { PUSH RBX }
    /* +0xe43a62 */ __asm { PUSH R12 }
    /* +0xe43a64 */ __asm { PUSH R15 }
    /* +0xe43a66 */ __asm { PUSH R14 }
    /* +0xe43a68 */ __asm { PUSH RSI }
    /* +0xe43a69 */ __asm { PUSH R13 }
    /* +0xe43a6b */ __asm { PUSH RDI }
    /* +0xe43a6c */ __asm { SUB RSP,0x678 }
    /* +0xe43a73 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xe43a7b */ __asm { MOVAPS xmmword ptr [RBP + 0x5e0],XMM13 }
    /* +0xe43a83 */ __asm { MOVDQA xmmword ptr [RBP + 0x5d0],XMM10 }
    /* +0xe43a8c */ __asm { MOVDQA xmmword ptr [RBP + 0x5c0],XMM12 }
    /* +0xe43a95 */ __asm { MOV RCX,R11 }
    /* +0xe43a98 */ __asm { MOV R9D,0x7bbd6808 }
    /* +0xe43a9e */ __asm { MOV EDX,0xfef9bae7 }
    /* +0xe43aa3 */ __asm { IMUL R8D,EDX,0x5ad99dad }
    /* +0xe43aaa */ __asm { MOVD XMM0,R9D }
    /* +0xe43aaf */ __asm { MOV EDX,0x5278cc52 }
    /* +0xe43ab4 */ __asm { MOV R9W,0x9464 }
    /* +0xe43ab9 */ __asm { IMUL R10D,R9D,0x2e51 }
    /* +0xe43ac0 */ __asm { LEA RAX,[0x7fffa47860a2] }
    /* +0xe43ac7 */ __asm { MOV R11D,0x2d8f8fd0 }
    /* +0xe43acd */ __asm { ADD R11D,0xd2618a9f }
    /* +0xe43ad4 */ __asm { MOV R9D,0x3d7e232c }
    /* +0xe43ada */ __asm { MOVD XMM13,ECX }
    /* +0xe43adf */ __asm { PXOR XMM0,XMM13 }
    /* +0xe43ae4 */ __asm { SUB EDX,ECX }
    /* +0xe43ae6 */ __asm { ADD EDX,0xc3e545f1 }
    /* +0xe43aec */ __asm { ROL EDX,0x1b }
    /* +0xe43aef */ __asm { XOR R8D,ECX }
    /* +0xe43af2 */ __asm { ROL R8D,0x3 }
    /* +0xe43af6 */ __asm { MOVSXD R13,R8D }
    /* +0xe43af9 */ __asm { MOV R8D,0xf1912aba }
    /* +0xe43aff */ __asm { SUB R8D,ECX }
    /* +0xe43b02 */ __asm { ADD R8D,0x7d5ad858 }
    /* +0xe43b09 */ __asm { MOV R14D,0x2c17bce4 }
    /* +0xe43b0f */ __asm { ADD R14D,0x9c4c0df3 }
    /* +0xe43b16 */ __asm { ROL R14D,CL }
    /* +0xe43b19 */ __asm { MOVD EDI,XMM0 }
    /* +0xe43b1d */ __asm { MOVSXD RBX,R14D }
    /* +0xe43b20 */ __asm { LEA R15,[0x7fffa4790d6d] }
    /* +0xe43b27 */ __asm { ADD R15,R13 }
    /* +0xe43b2a */ __asm { LEA R13,[0x7fffa4794dc4] }
    /* +0xe43b31 */ __asm { ROR R11D,CL }
    /* +0xe43b34 */ __asm { ADD R10D,ECX }
    /* +0xe43b37 */ __asm { MOVSX R10,R10W }
    /* +0xe43b3b */ __asm { MOVSXD R11,R11D }
    /* +0xe43b3e */ __asm { MOVZX R10D,uint8_t ptr [RAX + R10*0x1 + 0x1] }
    /* +0xe43b44 */ __asm { MOV RAX,qword ptr [R15 + R10*0x8 + 0xe] }
    /* +0xe43b49 */ __asm { MOV R15,RCX }
    /* +0xe43b4c */ __asm { XOR RAX,qword ptr [R13 + R11*0x1 + 0x30] }
    /* +0xe43b51 */ __asm { MOV qword ptr [RBP + 0xc0],RAX }
    /* +0xe43b58 */ __asm { IMUL R11D,EDI,0x4b58ac69 }
    /* +0xe43b5f */ __asm { ROL R11D,0x11 }
    /* +0xe43b63 */ __asm { MOV R12D,R15D }
    /* +0xe43b66 */ __asm { OR R12D,0x1 }
    /* +0xe43b6a */ __asm { IMUL R9D,R12D }
    /* +0xe43b6e */ __asm { ADD R9D,0x20a72740 }
    /* +0xe43b75 */ __asm { CMP RBX,R8 }
    /* +0xe43b78 */ __asm { JNC 0x7fffa55b3b84 }
    /* +0xe43b7a */ __asm { PADDQ XMM4,xmmword ptr [0x7fffa5784620] }
    /* +0xe43b82 */ __asm { JMP 0x7fffa55b3b94 }
    /* +0xe43b84 */ __asm { PADDQ XMM4,xmmword ptr [0x7fffa5784630] }
    /* +0xe43b8c */ __asm { PXOR XMM4,xmmword ptr [0x7fffa5784640] }
    /* +0xe43b94 */ __asm { MOV R10,qword ptr [RBP + 0xc0] }
    /* +0xe43b9b */ __asm { MOVQ RAX,XMM4 }
    /* +0xe43ba0 */ __asm { MOV R8,RAX }
    /* +0xe43ba3 */ __asm { SHL R8,0x18 }
    /* +0xe43ba7 */ __asm { LEA RCX,[RAX + -0x18] }
    /* +0xe43bab */ __asm { CMP R11,RDX }
    /* +0xe43bae */ __asm { CMOVL RCX,R8 }
    /* +0xe43bb2 */ __asm { XOR RCX,RAX }
    /* +0xe43bb5 */ __asm { MOVQ XMM0,RCX }
    /* +0xe43bba */ __asm { MOVDQA XMM2,XMM0 }
    /* +0xe43bbe */ __asm { PSLLQ XMM2,0x30 }
    /* +0xe43bc3 */ __asm { PXOR XMM2,XMM0 }
    /* +0xe43bc7 */ __asm { MOVQ RAX,XMM2 }
    /* +0xe43bcc */ __asm { MOV RBX,-0x39fca043423c6eed }
    /* +0xe43bd6 */ __asm { IMUL RBX,RAX }
    /* +0xe43bda */ __asm { MOV dword ptr [RBP + 0xc0],R9D }
    /* +0xe43be1 */ __asm { MOV R11D,dword ptr [RBP + 0xc0] }
    /* +0xe43be8 */ __asm { XOR R9D,R9D }
    /* +0xe43beb */ __asm { CMP R11D,-0x1 }
    /* +0xe43bef */ __asm { SETZ R9B }
    /* +0xe43bf3 */ __asm { XOR EDX,EDX }
    /* +0xe43bf5 */ __asm { TEST R11D,R11D }
    /* +0xe43bf8 */ __asm { SETNS DL }
    /* +0xe43bfb */ __asm { MOV R11D,0x4fe38e68 }
    /* +0xe43c01 */ __asm { ADD R11D,R15D }
    /* +0xe43c04 */ __asm { XOR R11D,0x7d9761e3 }
    /* +0xe43c0b */ __asm { MOV EAX,0xee372964 }
    /* +0xe43c10 */ __asm { ADD EAX,R15D }
    /* +0xe43c13 */ __asm { ROL EAX,0x11 }
    /* +0xe43c16 */ __asm { CMP R11,RAX }
    /* +0xe43c19 */ __asm { CMOVG R9D,EDX }
    /* +0xe43c1d */ __asm { TEST R9B,R9B }
    /* +0xe43c20 */ __asm { JZ 0x7fffa55b4329 }
    /* +0xe43c26 */ __asm { PUSHFQ }
    /* +0xe43c27 */ __asm { POP R9 }
    /* +0xe43c29 */ __asm { MOV qword ptr [RBP + -0x20],R9 }
    /* +0xe43c2d */ __asm { TEST R9D,0x100 }
    /* +0xe43c34 */ __asm { NOP }
    /* +0xe43c35 */ __asm { NOP }
    /* +0xe43c36 */ __asm { NOP }
    /* +0xe43c37 */ __asm { NOP }
    /* +0xe43c38 */ __asm { NOP }
    /* +0xe43c39 */ __asm { TEST R10,R10 }
    /* +0xe43c3c */ __asm { MOV qword ptr [RBP + 0xb0],RBX }
    /* +0xe43c43 */ __asm { JZ 0x7fffa55b4336 }
    /* +0xe43c49 */ __asm { LEA RDI,[RBP + 0xc0] }
    /* +0xe43c50 */ __asm { MOV RCX,RDI }
    /* +0xe43c53 */ __asm { CALL R10 }
    /* +0xe43c56 */ __asm { MOV qword ptr [RBP + 0x598],RDI }
    /* +0xe43c5d */ __asm { PUSHFQ }
    /* +0xe43c5e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe43c66 */ __asm { POPFQ }
    /* +0xe43c67 */ __asm { MOV dword ptr [RBP + 0x20],0x2b78f9bd }
    /* +0xe43c6e */ __asm { MOV R9D,dword ptr [RBP + 0x20] }
    /* +0xe43c72 */ __asm { CMP R9D,0x6b9e8ba0 }
    /* +0xe43c79 */ __asm { NOP }
    /* +0xe43c7a */ __asm { NOP }
    /* +0xe43c7b */ __asm { NOP }
    /* +0xe43c7c */ __asm { NOP }
    /* +0xe43c7d */ __asm { NOP }
    /* +0xe43c7e */ __asm { MOV R10D,0xfe2e5ee4 }
    /* +0xe43c84 */ __asm { SUB R10D,R15D }
    /* +0xe43c87 */ __asm { XOR R10D,0xded322a2 }
    /* +0xe43c8e */ __asm { ADD R10D,0x26af86d9 }
    /* +0xe43c95 */ __asm { MOV EDX,0x262de8da }
    /* +0xe43c9a */ __asm { SUB EDX,R15D }
    /* +0xe43c9d */ __asm { ROL EDX,0x16 }
    /* +0xe43ca0 */ __asm { CMP RDX,R10 }
    /* +0xe43ca3 */ __asm { JL 0x7fffa55b3cfe }
    /* +0xe43ca5 */ __asm { LEA RAX,[0x7fffa47be723] }
    /* +0xe43cac */ __asm { MOV R9W,0x79fc }
    /* +0xe43cb1 */ __asm { ADD R9D,R15D }
    /* +0xe43cb4 */ __asm { IMUL R10D,R9D,-0x4d9d }
    /* +0xe43cbb */ __asm { MOVSX R10,R10W }
    /* +0xe43cbf */ __asm { MOVZX R10D,uint8_t ptr [RAX + R10*0x1 + 0xc] }
    /* +0xe43cc5 */ __asm { LEA RAX,[0x7fffa47bcf31] }
    /* +0xe43ccc */ __asm { MOV R9D,0x6768752d }
    /* +0xe43cd2 */ __asm { IMUL R9D,R12D }
    /* +0xe43cd6 */ __asm { ADD R9D,0xb24d0274 }
    /* +0xe43cdd */ __asm { MOVSXD RDI,R9D }
    /* +0xe43ce0 */ __asm { MOV DX,0x2d50 }
    /* +0xe43ce4 */ __asm { SUB EDX,R15D }
    /* +0xe43ce7 */ __asm { ADD EDX,0xffffd126 }
    /* +0xe43ced */ __asm { MOVSX R8,DX }
    /* +0xe43cf1 */ __asm { ADD R8,RAX }
    /* +0xe43cf4 */ __asm { LEA RAX,[R8 + R10*0x8] }
    /* +0xe43cf8 */ __asm { ADD RAX,0xf }
    /* +0xe43cfc */ __asm { JMP 0x7fffa55b3d51 }
    /* +0xe43cfe */ __asm { LEA RAX,[0x7fffa47c295b] }
    /* +0xe43d05 */ __asm { MOV R10W,0x4eba }
    /* +0xe43d0a */ __asm { ADD R10D,R15D }
    /* +0xe43d0d */ __asm { LEA R8,[0x7fffa47c1c62] }
    /* +0xe43d14 */ __asm { MOV R9W,0x71f1 }
    /* +0xe43d19 */ __asm { MOV EDI,0x4f6c97b7 }
    /* +0xe43d1e */ __asm { ADD EDI,0x92f4a41f }
    /* +0xe43d24 */ __asm { IMUL EDI,R12D }
    /* +0xe43d28 */ __asm { IMUL R9D,R9D,-0x1ce5 }
    /* +0xe43d2f */ __asm { NOT R9D }
    /* +0xe43d32 */ __asm { ROL R9W,0x1 }
    /* +0xe43d36 */ __asm { MOVSX RCX,R9W }
    /* +0xe43d3a */ __asm { MOVZX ECX,uint8_t ptr [RAX + RCX*0x1 + 0xc] }
    /* +0xe43d3f */ __asm { NOT R10D }
    /* +0xe43d42 */ __asm { MOVSX RAX,R10W }
    /* +0xe43d46 */ __asm { ADD RAX,R8 }
    /* +0xe43d49 */ __asm { LEA RAX,[RAX + RCX*0x8] }
    /* +0xe43d4d */ __asm { ADD RAX,0xf }
    /* +0xe43d51 */ __asm { MOVZX EDX,uint8_t ptr [RAX + 0x5] }
    /* +0xe43d55 */ __asm { MOVZX R11D,uint8_t ptr [RAX + 0x1] }
    /* +0xe43d5a */ __asm { MOVZX R8D,uint8_t ptr [RAX + 0x4] }
    /* +0xe43d5f */ __asm { NOT R8B }
    /* +0xe43d62 */ __asm { NOT DL }
    /* +0xe43d64 */ __asm { MOV ECX,0xd4640f0b }
    /* +0xe43d69 */ __asm { ROL DL,0x4 }
    /* +0xe43d6c */ __asm { MOVZX R9D,uint8_t ptr [RAX + 0x7] }
    /* +0xe43d71 */ __asm { NOT R9B }
    /* +0xe43d74 */ __asm { ROL R9B,0x4 }
    /* +0xe43d78 */ __asm { MOV R10D,0x34d88228 }
    /* +0xe43d7e */ __asm { IMUL R10D,R12D }
    /* +0xe43d82 */ __asm { ADD R10D,EDI }
    /* +0xe43d85 */ __asm { ROL R10D,0x11 }
    /* +0xe43d89 */ __asm { NOT R11B }
    /* +0xe43d8c */ __asm { MOV R14D,0x7dd12a73 }
    /* +0xe43d92 */ __asm { SUB R14D,ECX }
    /* +0xe43d95 */ __asm { MOV ECX,R15D }
    /* +0xe43d98 */ __asm { ROR R14D,CL }
    /* +0xe43d9b */ __asm { MOV ECX,EDI }
    /* +0xe43d9d */ __asm { OR ECX,0x1 }
    /* +0xe43da0 */ __asm { MOV dword ptr [RBP + 0xa8],ECX }
    /* +0xe43da6 */ __asm { IMUL R14D,ECX }
    /* +0xe43daa */ __asm { ROL R11B,0x4 }
    /* +0xe43dae */ __asm { MOV uint8_t ptr [RBP + 0x25],DL }
    /* +0xe43db1 */ __asm { CMP R14,R10 }
    /* +0xe43db4 */ __asm { MOVZX EDX,R8B }
    /* +0xe43db8 */ __asm { MOV R10D,0xff }
    /* +0xe43dbe */ __asm { CMOVNC R10D,EDX }
    /* +0xe43dc2 */ __asm { ROL R10B,0x4 }
    /* +0xe43dc6 */ __asm { MOV uint8_t ptr [RBP + 0x24],R10B }
    /* +0xe43dca */ __asm { MOVZX ECX,uint8_t ptr [RAX + 0x2] }
    /* +0xe43dce */ __asm { NOT CL }
    /* +0xe43dd0 */ __asm { ROL CL,0x4 }
    /* +0xe43dd3 */ __asm { MOVZX R8D,uint8_t ptr [RAX + 0x6] }
    /* +0xe43dd8 */ __asm { NOT R8B }
    /* +0xe43ddb */ __asm { ROL R8B,0x4 }
    /* +0xe43ddf */ __asm { MOV uint8_t ptr [RBP + 0x26],R8B }
    /* +0xe43de3 */ __asm { MOVZX R8D,uint8_t ptr [RAX] }
    /* +0xe43de7 */ __asm { MOV uint8_t ptr [RBP + 0x21],R11B }
    /* +0xe43deb */ __asm { MOV uint8_t ptr [RBP + 0x22],CL }
    /* +0xe43dee */ __asm { NOT R8B }
    /* +0xe43df1 */ __asm { ROL R8B,0x4 }
    /* +0xe43df5 */ __asm { MOV uint8_t ptr [RBP + 0x20],R8B }
    /* +0xe43df9 */ __asm { MOVZX ECX,uint8_t ptr [RAX + 0x3] }
    /* +0xe43dfd */ __asm { MOV uint8_t ptr [RBP + 0x27],R9B }
    /* +0xe43e01 */ __asm { NOT CL }
    /* +0xe43e03 */ __asm { ROL CL,0x4 }
    /* +0xe43e06 */ __asm { MOV uint8_t ptr [RBP + 0x23],CL }
    /* +0xe43e09 */ __asm { MOV R14,qword ptr [RBP + 0x20] }
    /* +0xe43e0d */ __asm { MOV dword ptr [RBP + 0x20],0xde57e4fd }
    /* +0xe43e14 */ __asm { MOV R9D,dword ptr [RBP + 0x20] }
    /* +0xe43e18 */ __asm { TEST R14,R14 }
    /* +0xe43e1b */ __asm { MOV qword ptr [RBP + 0x10],RDI }
    /* +0xe43e1f */ __asm { JZ 0x7fffa55b4b11 }
    /* +0xe43e25 */ __asm { MOV DX,0xfd79 }
    /* +0xe43e29 */ __asm { MOV R9W,0xcb76 }
    /* +0xe43e2e */ __asm { LEA R10,[0x7fffa47896d0] }
    /* +0xe43e35 */ __asm { ADD EDX,0xffff8322 }
    /* +0xe43e3b */ __asm { MOV R11D,R15D }
    /* +0xe43e3e */ __asm { OR R11D,0x1 }
    /* +0xe43e42 */ __asm { MOV dword ptr [RBP],R11D }
    /* +0xe43e46 */ __asm { MOVD XMM0,R11D }
    /* +0xe43e4b */ __asm { LEA RAX,[0x7fffa478d339] }
    /* +0xe43e52 */ __asm { XOR EDX,EDI }
    /* +0xe43e54 */ __asm { MOV R11,0x0 }
    /* +0xe43e5b */ __asm { NOP }
    /* +0xe43e5c */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xe43e63 */ __asm { MOVD XMM2,EDX }
    /* +0xe43e67 */ __asm { PMULLW XMM2,XMM0 }
    /* +0xe43e6b */ __asm { MOVD EDX,XMM2 }
    /* +0xe43e6f */ __asm { MOVSX R8,DX }
    /* +0xe43e73 */ __asm { ADD R8,R10 }
    /* +0xe43e76 */ __asm { XOR R9D,0x2b6c }
    /* +0xe43e7d */ __asm { ADD R9D,EDI }
    /* +0xe43e80 */ __asm { MOV ECX,R15D }
    /* +0xe43e83 */ __asm { ROR R9W,CL }
    /* +0xe43e87 */ __asm { LEA RDX,[0x7fffa478e156] }
    /* +0xe43e8e */ __asm { MOVSX R10,R9W }
    /* +0xe43e92 */ __asm { MOV R9D,0x73b76462 }
    /* +0xe43e98 */ __asm { SUB R9D,EDI }
    /* +0xe43e9b */ __asm { IMUL R9D,R9D,0xe4f79d3 }
    /* +0xe43ea2 */ __asm { NOT R9D }
    /* +0xe43ea5 */ __asm { MOVSXD RCX,R9D }
    /* +0xe43ea8 */ __asm { MOVZX R10D,uint8_t ptr [RAX + R10*0x1 + 0xf] }
    /* +0xe43eae */ __asm { MOV RAX,qword ptr [RDX + RCX*0x1 + 0x32] }
    /* +0xe43eb3 */ __asm { XOR RAX,qword ptr [R8 + R10*0x8 + 0x14] }
    /* +0xe43eb8 */ __asm { MOV qword ptr [RBP + 0x20],RAX }
    /* +0xe43ebc */ __asm { MOV RAX,qword ptr [RBP + 0x20] }
    /* +0xe43ec0 */ __asm { MOV dword ptr [RBP + 0x20],0x42a69413 }
    /* +0xe43ec7 */ __asm { MOV R9D,dword ptr [RBP + 0x20] }
    /* +0xe43ecb */ __asm { CMP R9D,0x822c6845 }
    /* +0xe43ed2 */ __asm { JNC 0x7fffa55b4d8c }
    /* +0xe43ed8 */ __asm { TEST RAX,RAX }
    /* +0xe43edb */ __asm { MOV qword ptr [RBP + 0x78],R14 }
    /* +0xe43edf */ __asm { JZ 0x7fffa55b4d94 }
    /* +0xe43ee5 */ __asm { MOV dword ptr [RBP + 0x20],0xbfefefef }
    /* +0xe43eec */ __asm { MOV R9D,dword ptr [RBP + 0x20] }
    /* +0xe43ef0 */ __asm { CMP qword ptr [RBP + 0x1b8],0x0 }
    /* +0xe43ef8 */ __asm { JZ 0x7fffa55b4274 }
    /* +0xe43efe */ __asm { MOV qword ptr [RBP + -0x8],RAX }
    /* +0xe43f02 */ __asm { XOR ESI,ESI }
    /* +0xe43f04 */ __asm { PXOR XMM12,XMM12 }
    /* +0xe43f09 */ __asm { MOVD XMM13,EDI }
    /* +0xe43f0e */ __asm { MOVD XMM10,R12D }
    /* +0xe43f13 */ __asm { MOV R9D,EDI }
    /* +0xe43f16 */ __asm { OR R9D,0x1 }
    /* +0xe43f1a */ __asm { MOV dword ptr [RBP + 0x48],R9D }
    /* +0xe43f1e */ __asm { MOV dword ptr [RBP + 0xc],R12D }
    /* +0xe43f22 */ __asm { JMP 0x7fffa55b3f6e }
    /* +0xe43f30 */ __asm { ADD qword ptr [RBP + 0x158],0x8 }
    /* +0xe43f38 */ __asm { MOV RDI,qword ptr [RBP + 0x10] }
    /* +0xe43f3c */ __asm { MOV RDX,0x0 }
    /* +0xe43f43 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xe43f4a */ __asm { NOP }
    /* +0xe43f4b */ __asm { CMP RSI,0x5f }
    /* +0xe43f4f */ __asm { SETC CL }
    /* +0xe43f52 */ __asm { CMP qword ptr [RBP + 0x1b8],0x0 }
    /* +0xe43f5a */ __asm { LEA R10,[RSI + 0x1] }
    /* +0xe43f5e */ __asm { SETNZ R11B }
    /* +0xe43f62 */ __asm { MOV RSI,R10 }
    /* +0xe43f65 */ __asm { TEST R11B,CL }
    /* +0xe43f68 */ __asm { JZ 0x7fffa55b42cf }
    /* +0xe43f6e */ __asm { MOV dword ptr [RBP + 0x20],0x48cff692 }
    /* +0xe43f75 */ __asm { MOV R9D,dword ptr [RBP + 0x20] }
    /* +0xe43f79 */ __asm { MOV RAX,qword ptr [RBP + 0x1b8] }
    /* +0xe43f80 */ __asm { MOV qword ptr [RBX + RSI*0x8],RAX }
    /* +0xe43f84 */ __asm { MOV dword ptr [RBP + 0x20],0x1248d408 }
    /* +0xe43f8b */ __asm { MOV R9D,dword ptr [RBP + 0x20] }
    /* +0xe43f8f */ __asm { MOV RCX,qword ptr [RBP + 0x1b8] }
    /* +0xe43f96 */ __asm { MOV qword ptr [RBP + 0x5b0],0x0 }
    /* +0xe43fa1 */ __asm { LEA RDX,[RBP + 0x5b0] }
    /* +0xe43fa8 */ __asm { XOR R8D,R8D }
    /* +0xe43fab */ __asm { CALL R14 }
    /* +0xe43fae */ __asm { TEST RAX,RAX }
    /* +0xe43fb1 */ __asm { JZ 0x7fffa55b4080 }
    /* +0xe43fb7 */ __asm { MOV R13,RAX }
    /* +0xe43fba */ __asm { MOV R9W,0x2d93 }
    /* +0xe43fbf */ __asm { IMUL R9D,R9D,-0x331 }
    /* +0xe43fc6 */ __asm { ADD R9D,0xffffb303 }
    /* +0xe43fcd */ __asm { IMUL R9D,dword ptr [RBP] }
    /* +0xe43fd2 */ __asm { MOVZX R10D,R9W }
    /* +0xe43fd6 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xe43fda */ __asm { MOV R8,-0x415c5b44a4f54bb5 }
    /* +0xe43fe4 */ __asm { CMP qword ptr [RAX + 0x18],R8 }
    /* +0xe43fe8 */ __asm { JNZ 0x7fffa55b3ff1 }
    /* +0xe43fea */ __asm { SBB uint8_t ptr [RSI + 0x66],BL }
    /* +0xe43fed */ __asm { IN EAX,DX }
    /* +0xe43fee */ __asm { RSQRTPS XMM3,XMM7 }
    /* +0xe43ff1 */ __asm { MOV R9D,0xc6e54bab }
    /* +0xe43ff7 */ __asm { IMUL R9D,R12D }
    /* +0xe43ffb */ __asm { LEA RAX,[0x7fffa510eccd] }
    /* +0xe44002 */ __asm { ROL R9D,0x15 }
    /* +0xe44006 */ __asm { XOR R9D,EDI }
    /* +0xe44009 */ __asm { MOV EDX,0x85778d5b }
    /* +0xe4400e */ __asm { XOR EDX,0xde3fb1ee }
    /* +0xe44014 */ __asm { MOV R11D,R15D }
    /* +0xe44017 */ __asm { SUB R11D,EDX }
    /* +0xe4401a */ __asm { ADD R11D,0xb57964a4 }
    /* +0xe44021 */ __asm { MOVSXD R8,R11D }
    /* +0xe44024 */ __asm { ADD R8,RAX }
    /* +0xe44027 */ __asm { CALL R8 }
    /* +0xe4402a */ __asm { MOVDQA xmmword ptr [RBP + 0x20],XMM12 }
    /* +0xe44030 */ __asm { MOV R8,qword ptr [RBP + 0x1b8] }
    /* +0xe44037 */ __asm { MOV RDX,qword ptr [RBP + 0x5b0] }
    /* +0xe4403e */ __asm { MOV qword ptr [RBP + 0xb8],0x0 }
    /* +0xe44049 */ __asm { LEA RAX,[RBP + 0x20] }
    /* +0xe4404d */ __asm { MOV qword ptr [RSP + 0x30],RAX }
    /* +0xe44052 */ __asm { LEA RAX,[RBP + 0xb8] }
    /* +0xe44059 */ __asm { MOV qword ptr [RSP + 0x28],RAX }
    /* +0xe4405e */ __asm { LEA RAX,[RBP + 0xc0] }
    /* +0xe44065 */ __asm { MOV qword ptr [RSP + 0x20],RAX }
    /* +0xe4406a */ __asm { MOV qword ptr [RSP + 0x38],0x0 }
    /* +0xe44073 */ __asm { MOV R9,R13 }
    /* +0xe44076 */ __asm { XOR ECX,ECX }
    /* +0xe44078 */ __asm { CALL qword ptr [RBP + -0x8] }
    /* +0xe4407b */ __asm { JMP 0x7fffa55b3f3c }
    /* +0xe44080 */ __asm { MOV R10W,0xcee1 }
    /* +0xe44085 */ __asm { LEA R10D,[R10 + R10*0x8] }
    /* +0xe44089 */ __asm { LEA R9D,[R10 + R10*0x4] }
    /* +0xe4408d */ __asm { MOV ECX,R15D }
    /* +0xe44090 */ __asm { ROR R9W,CL }
    /* +0xe44094 */ __asm { ADD R9D,0xffffb206 }
    /* +0xe4409b */ __asm { XOR R9D,EDI }
    /* +0xe4409e */ __asm { MOVZX R10D,R9W }
    /* +0xe440a2 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xe440a6 */ __asm { MOV R8,-0x6c079e1314698bdd }
    /* +0xe440b0 */ __asm { MOV RDX,-0x3d51babe476928e3 }
    /* +0xe440ba */ __asm { ROL RAX,0x37 }
    /* +0xe440be */ __asm { XOR RAX,0x672c60dc }
    /* +0xe440c4 */ __asm { ADD RAX,0x291ed66 }
    /* +0xe440ca */ __asm { IMUL R8,R8,0x7e66450d }
    /* +0xe440d1 */ __asm { SUB R8,RDI }
    /* +0xe440d4 */ __asm { ROL R8,0x13 }
    /* +0xe440d8 */ __asm { ADD R8,R15 }
    /* +0xe440db */ __asm { CMP R8,RAX }
    /* +0xe440de */ __asm { NOP }
    /* +0xe440df */ __asm { NOP }
    /* +0xe440e0 */ __asm { NOP }
    /* +0xe440e1 */ __asm { NOP }
    /* +0xe440e2 */ __asm { NOP }
    /* +0xe440e3 */ __asm { CMP qword ptr [RBP + 0x158],0x0 }
    /* +0xe440eb */ __asm { JZ 0x7fffa55b4279 }
    /* +0xe440f1 */ __asm { MOV R9W,0xf7ce }
    /* +0xe440f6 */ __asm { XOR R9D,EDI }
    /* +0xe440f9 */ __asm { ROL R9W,0x9 }
    /* +0xe440fe */ __asm { IMUL R9D,dword ptr [RBP] }
    /* +0xe44103 */ __asm { MOVZX R10D,R9W }
    /* +0xe44107 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xe4410b */ __asm { MOV R9D,0x36aa753 }
    /* +0xe44111 */ __asm { MOVD XMM0,R9D }
    /* +0xe44116 */ __asm { MOV R13,qword ptr [RBP + 0x638] }
    /* +0xe4411d */ __asm { PSUBD XMM0,XMM13 }
    /* +0xe44122 */ __asm { MOVD R10D,XMM0 }
    /* +0xe44127 */ __asm { IMUL R10D,R12D }
    /* +0xe4412b */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0xe4412f */ __asm { OR RAX,qword ptr [R13 + -0xcc8] }
    /* +0xe44136 */ __asm { ADD R10D,0x33faf759 }
    /* +0xe4413d */ __asm { SUB RAX,R10 }
    /* +0xe44140 */ __asm { ROL RAX,0x32 }
    /* +0xe44144 */ __asm { ADD RAX,0x15cacf77 }
    /* +0xe4414a */ __asm { MOV R8,-0x15b0c137f67e9652 }
    /* +0xe44154 */ __asm { CMP RAX,R8 }
    /* +0xe44157 */ __asm { JZ 0x7fffa55b426c }
    /* +0xe4415d */ __asm { LEA RCX,[RBP + 0x598] }
    /* +0xe44164 */ __asm { MOV R11D,0x25d556bd }
    /* +0xe4416a */ __asm { MOV EDX,0x1037c0ff }
    /* +0xe4416f */ __asm { MOV R9D,0xe5d4ea6f }
    /* +0xe44175 */ __asm { ADD EDX,0x9df166b0 }
    /* +0xe4417b */ __asm { LEA RAX,[0x7fffa56907d1] }
    /* +0xe44182 */ __asm { MOV R8D,0xd20af9c }
    /* +0xe44188 */ __asm { MOV R14D,dword ptr [RBP + 0xa8] }
    /* +0xe4418f */ __asm { IMUL R11D,R14D }
    /* +0xe44193 */ __asm { SUB R11D,R15D }
    /* +0xe44196 */ __asm { ADD R11D,0x70ea6db1 }
    /* +0xe4419d */ __asm { ROL R11D,0xa }
    /* +0xe441a1 */ __asm { NOT RCX }
    /* +0xe441a4 */ __asm { LEA R10,[RCX + R11*0x1] }
    /* +0xe441a8 */ __asm { MOV R12,R15 }
    /* +0xe441ab */ __asm { MOV R15D,0xf1706976 }
    /* +0xe441b1 */ __asm { MOVD XMM0,R15D }
    /* +0xe441b6 */ __asm { PMULUDQ XMM0,XMM10 }
    /* +0xe441bb */ __asm { LEA R15,[RCX + R11*0x1] }
    /* +0xe441bf */ __asm { ADD R15,-0xbe64d30 }
    /* +0xe441c6 */ __asm { ADD R9D,0xcb17f0ac }
    /* +0xe441cd */ __asm { ROL R9D,0xc }
    /* +0xe441d1 */ __asm { MOVD EBX,XMM0 }
    /* +0xe441d5 */ __asm { MOV ECX,EDI }
    /* +0xe441d7 */ __asm { ROR EDX,CL }
    /* +0xe441d9 */ __asm { MOV ECX,R12D }
    /* +0xe441dc */ __asm { ROL EDX,CL }
    /* +0xe441de */ __asm { XOR EBX,EDI }
    /* +0xe441e0 */ __asm { ADD EBX,0x3e96541f }
    /* +0xe441e6 */ __asm { NEG R8D }
    /* +0xe441e9 */ __asm { LEA R11D,[RDI + R8*0x1] }
    /* +0xe441ed */ __asm { ADD R11D,0xca3cdfcc }
    /* +0xe441f4 */ __asm { MOVSXD R11,R11D }
    /* +0xe441f7 */ __asm { NOT R9D }
    /* +0xe441fa */ __asm { IMUL R9D,R14D }
    /* +0xe441fe */ __asm { MOVSXD R8,R9D }
    /* +0xe44201 */ __asm { ADD R8,RAX }
    /* +0xe44204 */ __asm { XOR R10,0xbe64d30 }
    /* +0xe4420b */ __asm { NOT EDX }
    /* +0xe4420d */ __asm { CMP RBX,RDX }
    /* +0xe44210 */ __asm { CMOVL R10,R15 }
    /* +0xe44214 */ __asm { CALL R8 }
    /* +0xe44217 */ __asm { MOV dword ptr [RBP + 0x20],0xeb6be39d }
    /* +0xe4421e */ __asm { MOV R9D,dword ptr [RBP + 0x20] }
    /* +0xe44222 */ __asm { MOV DX,0x92aa }
    /* +0xe44226 */ __asm { ADD EDX,0x726e }
    /* +0xe4422c */ __asm { XOR EDX,0x1e04 }
    /* +0xe44232 */ __asm { IMUL EDX,dword ptr [RBP + 0x48] }
    /* +0xe44236 */ __asm { XOR EDX,R12D }
    /* +0xe44239 */ __asm { MOVZX EDX,DX }
    /* +0xe4423c */ __asm { CMP R9D,EDX }
    /* +0xe4423f */ __asm { MOV R15,R12 }
    /* +0xe44242 */ __asm { MOV RBX,qword ptr [RBP + 0xb0] }
    /* +0xe44249 */ __asm { MOV R14,qword ptr [RBP + 0x78] }
    /* +0xe4424d */ __asm { NOP }
    /* +0xe4424e */ __asm { NOP }
    /* +0xe4424f */ __asm { NOP }
    /* +0xe44250 */ __asm { NOP }
    /* +0xe44251 */ __asm { NOP }
    /* +0xe44252 */ __asm { TEST dword ptr [RBP + -0x20],0x100 }
    /* +0xe44259 */ __asm { MOV R12D,dword ptr [RBP + 0xc] }
    /* +0xe4425d */ __asm { JZ 0x7fffa55b3f30 }
    /* +0xe44263 */ __asm { OR uint8_t ptr [RDX],BL }
    /* +0xe44265 */ __asm { SBB EDX,dword ptr [RBP + -0x33b17] }
    /* +0xe44274 */ __asm { XOR R10D,R10D }
    /* +0xe44277 */ __asm { JMP 0x7fffa55b42cf }
    /* +0xe44279 */ __asm { MOV R9D,EDI }
    /* +0xe4427c */ __asm { OR R9D,0x1 }
    /* +0xe44280 */ __asm { MOV DX,0x4de8 }
    /* +0xe44284 */ __asm { IMUL EDX,R9D }
    /* +0xe44288 */ __asm { MOV R9D,R15D }
    /* +0xe4428b */ __asm { XOR R9D,EDX }
    /* +0xe4428e */ __asm { ADD R9D,0xffffff74 }
    /* +0xe44295 */ __asm { MOVZX R10D,R9W }
    /* +0xe44299 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xe4429d */ __asm { MOV R8,-0x633cdcbc8acd95a7 }
    /* +0xe442a7 */ __asm { IMUL R8,qword ptr [RAX + 0x60] }
    /* +0xe442ac */ __asm { MOV RAX,0x444803446c5e20d6 }
    /* +0xe442b6 */ __asm { ADD RAX,R8 }
    /* +0xe442b9 */ __asm { MOV R8,0xfd9200c0b711877 }
    /* +0xe442c3 */ __asm { CMP RAX,R8 }
    /* +0xe442c6 */ __asm { NOP }
    /* +0xe442c7 */ __asm { NOP }
    /* +0xe442c8 */ __asm { NOP }
    /* +0xe442c9 */ __asm { NOP }
    /* +0xe442ca */ __asm { NOP }
    /* +0xe442cb */ __asm { NOP }
    /* +0xe442cc */ __asm { MOV R10,RSI }
    /* +0xe442cf */ __asm { MOV R9D,0x99be0bc9 }
    /* +0xe442d5 */ __asm { XOR R9D,EDI }
    /* +0xe442d8 */ __asm { MOV ECX,R15D }
    /* +0xe442db */ __asm { ROL R9D,CL }
    /* +0xe442de */ __asm { ADD R9D,0x610479df }
    /* +0xe442e5 */ __asm { MOV dword ptr [RBP + 0x5b0],R9D }
    /* +0xe442ec */ __asm { MOV R9D,dword ptr [RBP + 0x5b0] }
    /* +0xe442f3 */ __asm { MOV R11,R10 }
    /* +0xe442f6 */ __asm { SHL R11,0x1f }
    /* +0xe442fa */ __asm { ADD R11,R10 }
    /* +0xe442fd */ __asm { MOVAPS XMM12,xmmword ptr [RBP + 0x5c0] }
    /* +0xe44305 */ __asm { MOVAPS XMM10,xmmword ptr [RBP + 0x5d0] }
    /* +0xe4430d */ __asm { MOVAPS XMM13,xmmword ptr [RBP + 0x5e0] }
    /* +0xe44315 */ __asm { ADD RSP,0x678 }
    /* +0xe4431c */ __asm { POP RDI }
    /* +0xe4431d */ __asm { POP R13 }
    /* +0xe4431f */ __asm { POP RSI }
}


// ============================================================================
// Function : FUN_7fffa55b67e0  |  RVA: 0xe467e0  |  Size: 294 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55b6818) */

uint8_t FUN_7fffa55b67e0(void)

{
  int iVar1;
  uint8_t in_AF;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  uint8_t uStack0000000000000000;
  uint8_t auStack_518 [63];
  uint8_t bStack_4d9;
  uint32_t auStack_4d8 [12];
  uint32_t uStack_4a8;
  uint8_t auStack_4a4 [1180];
  
  auStack_4d8[0] = 0xdfb7ffbd;
  iVar1 = -0x5b816180;
  uStack_4a8 = 0x100010;
  FUN_7fffa47e9e80((int64_t)auStack_4d8 << 0x35 ^ (uint64_t)auStack_4d8,
                   (uint64_t)(in_NT & 1) * 0x4000 |
                   (uint64_t)SBORROW8((int64_t)(auStack_4a4 + 0x49c),0x510) * 0x800 |
                   (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
                   (uint64_t)((int64_t)auStack_518 < 0) * 0x80 |
                   (uint64_t)(&uStack0000000000000000 == (uint8_t *)0x518) * 0x40 |
                   (uint64_t)(in_AF & 1) * 0x10 |
                   (uint64_t)((POPCOUNT((uint64_t)auStack_518 & 0xff) & 1U) == 0) * 4 |
                   (uint64_t)(auStack_4a4 + 0x49c < (uint8_t *)0x510) |
                   (uint64_t)(in_ID & 1) * 0x200000 | (uint64_t)(in_VIP & 1) * 0x100000 |
                   (uint64_t)(in_VIF & 1) * 0x80000 | (uint64_t)(in_AC & 1) * 0x40000);
  if (iVar1 * 0x4000001 < 0) {
    FUN_7fffa50836b0();
  }
  bStack_4d9 = 0;
  (*(code *)&UNK_7fffa519a450)();
  FUN_7fffa4ecad50();
  return bStack_4d9 & 1;
}


// ============================================================================
// Function : FUN_7fffa55b6940  |  RVA: 0xe46940  |  Size: 65633 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55b6940(void) {
    /* +0xe46940 */ __asm { PUSH RBP }
    /* +0xe46941 */ __asm { PUSH R12 }
    /* +0xe46943 */ __asm { PUSH RBX }
    /* +0xe46944 */ __asm { PUSH R14 }
    /* +0xe46946 */ __asm { PUSH R15 }
    /* +0xe46948 */ __asm { PUSH RSI }
    /* +0xe46949 */ __asm { PUSH R13 }
    /* +0xe4694b */ __asm { PUSH RDI }
    /* +0xe4694c */ __asm { SUB RSP,0x588 }
    /* +0xe46953 */ __asm { MOVDQA xmmword ptr [RSP + 0x570],XMM15 }
    /* +0xe4695d */ __asm { MOVDQA xmmword ptr [RSP + 0x560],XMM8 }
    /* +0xe46967 */ __asm { MOVDQA xmmword ptr [RSP + 0x550],XMM6 }
    /* +0xe46970 */ __asm { MOVDQA xmmword ptr [RSP + 0x540],XMM13 }
    /* +0xe4697a */ __asm { MOVDQA xmmword ptr [RSP + 0x530],XMM7 }
    /* +0xe46983 */ __asm { MOVDQA xmmword ptr [RSP + 0x520],XMM11 }
    /* +0xe4698d */ __asm { MOVDQA xmmword ptr [RSP + 0x510],XMM14 }
    /* +0xe46997 */ __asm { MOVDQA xmmword ptr [RSP + 0x500],XMM12 }
    /* +0xe469a1 */ __asm { MOVAPS xmmword ptr [RSP + 0x4f0],XMM9 }
    /* +0xe469aa */ __asm { MOVDQA xmmword ptr [RSP + 0x4e0],XMM10 }
    /* +0xe469b4 */ __asm { MOV R14,R8 }
    /* +0xe469b7 */ __asm { MOV RBX,R11 }
    /* +0xe469ba */ __asm { MOV RCX,RAX }
    /* +0xe469bd */ __asm { MOV R11,qword ptr [RSP + 0x5f0] }
    /* +0xe469c5 */ __asm { MOV EAX,0xdd526cf6 }
    /* +0xe469ca */ __asm { MOV R8,R9 }
    /* +0xe469cd */ __asm { ROL R8,0xb }
    /* +0xe469d1 */ __asm { XOR R8,R9 }
    /* +0xe469d4 */ __asm { ADD EAX,0x681a4bd2 }
    /* +0xe469d9 */ __asm { ROL R9,0x12 }
    /* +0xe469dd */ __asm { MOV EDI,R11D }
    /* +0xe469e0 */ __asm { OR EDI,0x1 }
    /* +0xe469e3 */ __asm { IMUL EAX,EDI }
    /* +0xe469e6 */ __asm { XOR RAX,R10 }
    /* +0xe469e9 */ __asm { MOV qword ptr [RSP + 0x138],RAX }
    /* +0xe469f1 */ __asm { MOV R12,qword ptr [RCX + 0x10] }
    /* +0xe469f5 */ __asm { MOV qword ptr [RSP + 0x210],R9 }
    /* +0xe469fd */ __asm { XOR R8,R9 }
    /* +0xe46a00 */ __asm { MOV R9,R8 }
    /* +0xe46a03 */ __asm { ROL R9,0x16 }
    /* +0xe46a07 */ __asm { MOV RAX,R8 }
    /* +0xe46a0a */ __asm { ROL RAX,0x24 }
    /* +0xe46a0e */ __asm { XOR RAX,R9 }
    /* +0xe46a11 */ __asm { XOR RAX,R8 }
    /* +0xe46a14 */ __asm { MOV RSI,RAX }
    /* +0xe46a17 */ __asm { ROL RSI,0x8 }
    /* +0xe46a1b */ __asm { XOR RSI,RAX }
    /* +0xe46a1e */ __asm { ROL RAX,0x2c }
    /* +0xe46a22 */ __asm { XOR RAX,RSI }
    /* +0xe46a25 */ __asm { MOV R8,RAX }
    /* +0xe46a28 */ __asm { ROL R8,0x10 }
    /* +0xe46a2c */ __asm { XOR R8,RAX }
    /* +0xe46a2f */ __asm { ROL RAX,0x18 }
    /* +0xe46a33 */ __asm { MOV qword ptr [RSP + 0x1b0],RCX }
    /* +0xe46a3b */ __asm { MOV R9,qword ptr [RCX + 0x18] }
    /* +0xe46a3f */ __asm { MOV qword ptr [RSP + 0x110],R9 }
    /* +0xe46a47 */ __asm { XOR R8,RAX }
    /* +0xe46a4a */ __asm { MOVQ XMM1,R8 }
    /* +0xe46a4f */ __asm { MOV R9,R8 }
    /* +0xe46a52 */ __asm { ROL R9,0x20 }
    /* +0xe46a56 */ __asm { ROL R8,0x30 }
    /* +0xe46a5a */ __asm { XOR R8,R9 }
    /* +0xe46a5d */ __asm { MOVQ XMM5,R8 }
    /* +0xe46a62 */ __asm { PXOR XMM5,XMM1 }
    /* +0xe46a66 */ __asm { MOVQ R9,XMM5 }
    /* +0xe46a6b */ __asm { ROL R9,0x20 }
    /* +0xe46a6f */ __asm { MOV R8,R9 }
    /* +0xe46a72 */ __asm { SHL R8,0x3a }
    /* +0xe46a76 */ __asm { MOV RCX,R9 }
    /* +0xe46a79 */ __asm { SUB RCX,R8 }
    /* +0xe46a7c */ __asm { MOV R8,RCX }
    /* +0xe46a7f */ __asm { SHR R8,0x3c }
    /* +0xe46a83 */ __asm { XOR R8,RCX }
    /* +0xe46a86 */ __asm { MOV R15D,dword ptr [RDX + 0x1c] }
    /* +0xe46a8a */ __asm { MOV ECX,dword ptr [RDX + 0x48] }
    /* +0xe46a8d */ __asm { MOV R13W,0x89b7 }
    /* +0xe46a92 */ __asm { MOV qword ptr [RSP + 0x420],R8 }
    /* +0xe46a9a */ __asm { MOVD XMM9,R11D }
    /* +0xe46a9f */ __asm { CMP ECX,0x2 }
    /* +0xe46aa2 */ __asm { MOV qword ptr [RSP + 0x80],R14 }
    /* +0xe46aaa */ __asm { MOV qword ptr [RSP + 0x1f8],RBX }
    /* +0xe46ab2 */ __asm { MOV dword ptr [RSP + 0x450],EDI }
    /* +0xe46ab9 */ __asm { MOV qword ptr [RSP + 0x458],RAX }
    /* +0xe46ac1 */ __asm { MOV qword ptr [RSP + 0xc0],R9 }
    /* +0xe46ac9 */ __asm { MOV qword ptr [RSP + 0x468],RSI }
    /* +0xe46ad1 */ __asm { MOV qword ptr [RSP + 0xd8],RDX }
    /* +0xe46ad9 */ __asm { JL 0x7fffa55b6b4b }
    /* +0xe46adb */ __asm { MOV R10W,0xb1ba }
    /* +0xe46ae0 */ __asm { XOR R10D,0x3744 }
    /* +0xe46ae7 */ __asm { SUB R10D,R11D }
    /* +0xe46aea */ __asm { ADD R10D,0x5231 }
    /* +0xe46af1 */ __asm { MOVZX R10D,R10W }
    /* +0xe46af5 */ __asm { CMP ECX,R10D }
    /* +0xe46af8 */ __asm { JZ 0x7fffa55bc4ae }
    /* +0xe46afe */ __asm { MOV qword ptr [RSP + 0xa0],R13 }
    /* +0xe46b06 */ __asm { MOV dword ptr [RSP + 0x1a8],R15D }
    /* +0xe46b0e */ __asm { CMP R15D,0x1 }
    /* +0xe46b12 */ __asm { MOV RAX,qword ptr [RSP + 0x138] }
    /* +0xe46b1a */ __asm { JZ 0x7fffa55b6b77 }
    /* +0xe46b1c */ __asm { LEA RDI,[RAX + 0x808] }
    /* +0xe46b23 */ __asm { MOV ECX,dword ptr [RAX + 0x808] }
    /* +0xe46b29 */ __asm { MOV dword ptr [RSP + 0x160],ECX }
    /* +0xe46b30 */ __asm { MOV R8D,0x810 }
    /* +0xe46b36 */ __asm { MOV RDX,RAX }
    /* +0xe46b39 */ __asm { MOV RCX,RBX }
    /* +0xe46b3c */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xe46b41 */ __asm { MOV R11,qword ptr [RSP + 0x1b0] }
    /* +0xe46b49 */ __asm { JMP 0x7fffa55b6bb9 }
    /* +0xe46b4b */ __asm { MOV qword ptr [RSP + 0xa0],R13 }
    /* +0xe46b53 */ __asm { MOV dword ptr [RSP + 0x1a8],R15D }
    /* +0xe46b5b */ __asm { CMP R15D,0x1 }
    /* +0xe46b5f */ __asm { SETZ R10B }
    /* +0xe46b63 */ __asm { CMP ECX,0x1 }
    /* +0xe46b66 */ __asm { SETNZ R11B }
    /* +0xe46b6a */ __asm { TEST R11B,R10B }
    /* +0xe46b6d */ __asm { MOV RAX,qword ptr [RSP + 0x138] }
    /* +0xe46b75 */ __asm { JZ 0x7fffa55b6b1c }
    /* +0xe46b77 */ __asm { MOV ECX,dword ptr [RAX + 0x808] }
    /* +0xe46b7d */ __asm { MOV dword ptr [RSP + 0x160],ECX }
    /* +0xe46b84 */ __asm { MOV ESI,dword ptr [RDX + 0x18] }
    /* +0xe46b87 */ __asm { MOV R8D,0x810 }
    /* +0xe46b8d */ __asm { MOV RDX,RAX }
    /* +0xe46b90 */ __asm { MOV RCX,RBX }
    /* +0xe46b93 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xe46b98 */ __asm { XOR EBP,EBP }
    /* +0xe46b9a */ __asm { TEST ESI,ESI }
    /* +0xe46b9c */ __asm { MOV R11,qword ptr [RSP + 0x1b0] }
    /* +0xe46ba4 */ __asm { JNZ 0x7fffa55bc4d5 }
    /* +0xe46baa */ __asm { MOV R8,qword ptr [RSP + 0x138] }
    /* +0xe46bb2 */ __asm { LEA RDI,[R8 + 0x808] }
    /* +0xe46bb9 */ __asm { MOV RAX,qword ptr [RSP + 0x110] }
    /* +0xe46bc1 */ __asm { SUB RAX,R12 }
    /* +0xe46bc4 */ __asm { CMP dword ptr [RDI],0x2 }
    /* +0xe46bc7 */ __asm { MOV R8D,0x6 }
    /* +0xe46bcd */ __asm { MOV EDX,0x3f }
    /* +0xe46bd2 */ __asm { CMOVZ RDX,R8 }
    /* +0xe46bd6 */ __asm { XOR EBP,EBP }
    /* +0xe46bd8 */ __asm { CMP RAX,RDX }
    /* +0xe46bdb */ __asm { JA 0x7fffa55b6be9 }
    /* +0xe46bdd */ __asm { MOV EDI,dword ptr [RSP + 0x450] }
    /* +0xe46be4 */ __asm { JMP 0x7fffa55bc4d5 }
    /* +0xe46be9 */ __asm { MOV RDX,-0x1 }
    /* +0xe46bf0 */ __asm { TEST R14B,0x3 }
    /* +0xe46bf4 */ __asm { MOV EDI,dword ptr [RSP + 0x450] }
    /* +0xe46bfb */ __asm { JZ 0x7fffa55b6c11 }
    /* +0xe46bfd */ __asm { MOV R8,qword ptr [RSP + 0x420] }
    /* +0xe46c05 */ __asm { MOV qword ptr [R8 + 0x88],RDX }
    /* +0xe46c0c */ __asm { JMP 0x7fffa55c62ab }
    /* +0xe46c11 */ __asm { LEA R8,[R14 + 0x400] }
    /* +0xe46c18 */ __asm { MOV qword ptr [RSP + 0xe8],R8 }
    /* +0xe46c20 */ __asm { CMP RAX,0x5db }
    /* +0xe46c26 */ __asm { MOV qword ptr [RSP + 0x1b8],RAX }
    /* +0xe46c2e */ __asm { JA 0x7fffa55b6c9b }
    /* +0xe46c30 */ __asm { MOV R8D,0x400 }
    /* +0xe46c36 */ __asm { XOR EDX,EDX }
    /* +0xe46c38 */ __asm { MOV RCX,R14 }
    /* +0xe46c3b */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0xe46c40 */ __asm { MOV R8,qword ptr [RSP + 0x110] }
    /* +0xe46c48 */ __asm { NOP dword ptr [RAX + RAX*0x1] }
    /* +0xe46c50 */ __asm { MOVZX EDX,uint8_t ptr [R12] }
    /* +0xe46c55 */ __asm { INC R12 }
    /* +0xe46c58 */ __asm { INC dword ptr [R14 + RDX*0x4] }
    /* +0xe46c5c */ __asm { CMP R12,R8 }
    /* +0xe46c5f */ __asm { JC 0x7fffa55b6c50 }
    /* +0xe46c61 */ __asm { MOV ECX,0xff }
    /* +0xe46c66 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xe46c70 */ __asm { MOV EDX,ECX }
    /* +0xe46c72 */ __asm { LEA ECX,[RDX + -0x1] }
    /* +0xe46c75 */ __asm { MOV R9D,EDX }
    /* +0xe46c78 */ __asm { CMP dword ptr [R14 + R9*0x4],0x0 }
    /* +0xe46c7d */ __asm { JZ 0x7fffa55b6c70 }
    /* +0xe46c7f */ __asm { CMP EDX,0x7 }
    /* +0xe46c82 */ __asm { MOV RCX,qword ptr [RSP + 0x5f0] }
    /* +0xe46c8a */ __asm { JNC 0x7fffa55b6f8e }
    /* +0xe46c90 */ __asm { XOR R11D,R11D }
    /* +0xe46c93 */ __asm { XOR R10D,R10D }
    /* +0xe46c96 */ __asm { JMP 0x7fffa55b7093 }
    /* +0xe46c9b */ __asm { MOV RSI,RAX }
    /* +0xe46c9e */ __asm { MOV R8D,0x1000 }
    /* +0xe46ca4 */ __asm { XOR EDX,EDX }
    /* +0xe46ca6 */ __asm { MOV RCX,R14 }
    /* +0xe46ca9 */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0xe46cae */ __asm { CMP RSI,0x14 }
    /* +0xe46cb2 */ __asm { JL 0x7fffa55b70fc }
    /* +0xe46cb8 */ __asm { LEA R8,[R12 + RSI*0x1] }
    /* +0xe46cbc */ __asm { ADD R8,-0xf }
    /* +0xe46cc0 */ __asm { MOV qword ptr [RSP + 0x1d8],R8 }
    /* +0xe46cc8 */ __asm { MOV R8D,0xffffffff }
    /* +0xe46cce */ __asm { MOV EDX,dword ptr [R12] }
    /* +0xe46cd2 */ __asm { ADD R12,0x10 }
    /* +0xe46cd6 */ __asm { ADD R8,-0x35f9a3c }
    /* +0xe46cdd */ __asm { MOV qword ptr [RSP + 0x118],R8 }
    /* +0xe46ce5 */ __asm { PXOR XMM1,XMM1 }
    /* +0xe46ce9 */ __asm { MOV R14,qword ptr [RSP + 0x80] }
    /* +0xe46cf1 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xe46d00 */ __asm { MOV R10D,EDX }
    /* +0xe46d03 */ __asm { SHR R10D,0x8 }
    /* +0xe46d07 */ __asm { MOVZX R8D,DL }
    /* +0xe46d0b */ __asm { MOV ECX,0xe066585b }
    /* +0xe46d10 */ __asm { MOV RBP,qword ptr [RSP + 0x5f0] }
    /* +0xe46d18 */ __asm { XOR ECX,EBP }
    /* +0xe46d1a */ __asm { IMUL EBX,ECX,-0x25d95837 }
    /* +0xe46d20 */ __asm { MOV ECX,dword ptr [R12 + -0xc] }
    /* +0xe46d25 */ __asm { MOV R11D,ECX }
    /* +0xe46d28 */ __asm { SHR R11D,0x10 }
    /* +0xe46d2c */ __asm { MOV EAX,EDX }
    /* +0xe46d2e */ __asm { SHR EAX,0xe }
    /* +0xe46d31 */ __asm { AND EAX,0x3fc }
    /* +0xe46d36 */ __asm { SHR EDX,0x18 }
    /* +0xe46d39 */ __asm { MOV ESI,dword ptr [R14 + RDX*0x4 + 0xc00] }
    /* +0xe46d41 */ __asm { INC ESI }
    /* +0xe46d43 */ __asm { MOV R9D,ECX }
    /* +0xe46d46 */ __asm { SHR R9D,0x18 }
    /* +0xe46d4a */ __asm { MOVZX R11D,R11B }
    /* +0xe46d4e */ __asm { MOVZX R15D,CL }
    /* +0xe46d52 */ __asm { INC dword ptr [R14 + RAX*0x1 + 0x800] }
    /* +0xe46d5a */ __asm { MOV dword ptr [R14 + RDX*0x4 + 0xc00],ESI }
    /* +0xe46d62 */ __asm { MOV EDI,dword ptr [R14 + R9*0x4 + 0xc00] }
    /* +0xe46d6a */ __asm { MOV EDX,0x2f1620 }
    /* +0xe46d6f */ __asm { XOR EDX,0x5bd5e398 }
    /* +0xe46d75 */ __asm { IMUL EDX,dword ptr [RSP + 0x450] }
    /* +0xe46d7d */ __asm { ADD EDX,0xac2a63d5 }
    /* +0xe46d83 */ __asm { MOV ESI,dword ptr [R14 + R11*0x4 + 0x800] }
    /* +0xe46d8b */ __asm { MOV R13D,R8D }
    /* +0xe46d8e */ __asm { MOV EAX,R15D }
    /* +0xe46d91 */ __asm { CMP RDX,RBX }
    /* +0xe46d94 */ __asm { JLE 0x7fffa55b6dd0 }
    /* +0xe46d96 */ __asm { MOV R8D,0xf1c90134 }
    /* +0xe46d9c */ __asm { MOVD XMM5,R8D }
    /* +0xe46da1 */ __asm { INC dword ptr [R14 + R13*0x4] }
    /* +0xe46da5 */ __asm { MOVZX R10D,R10B }
    /* +0xe46da9 */ __asm { LEA RDX,[R14 + RAX*0x4] }
    /* +0xe46dad */ __asm { PXOR XMM5,XMM9 }
    /* +0xe46db2 */ __asm { MOVD R8D,XMM5 }
    /* +0xe46db7 */ __asm { MOV EAX,dword ptr [R14 + RAX*0x4] }
    /* +0xe46dbb */ __asm { ADD R8D,0xba9c5d77 }
    /* +0xe46dc2 */ __asm { MOVSXD R8,R8D }
    /* +0xe46dc5 */ __asm { JMP 0x7fffa55b6e1f }
    /* +0xe46dd0 */ __asm { MOVZX R15D,R10B }
    /* +0xe46dd4 */ __asm { MOV R8D,0xb045f0db }
    /* +0xe46dda */ __asm { MOV EDX,0xc260291a }
    /* +0xe46ddf */ __asm { SUB EDX,R8D }
    /* +0xe46de2 */ __asm { MOV RBX,RBP }
    /* +0xe46de5 */ __asm { MOV EBP,0x9d940723 }
    /* +0xe46dea */ __asm { ROL EDX,0xe }
    /* +0xe46ded */ __asm { MOVSXD R8,EDX }
    /* +0xe46df0 */ __asm { OR R10D,0xff }
    /* +0xe46df7 */ __asm { LEA RDX,[R14 + RAX*0x4] }
    /* +0xe46dfb */ __asm { ADD EBP,0xd0fba052 }
    /* +0xe46e01 */ __asm { XOR EBP,EBX }
    /* +0xe46e03 */ __asm { ADD EBP,0x180a66ed }
    /* +0xe46e09 */ __asm { MOVSXD RBP,EBP }
    /* +0xe46e0c */ __asm { CMP RBP,-0x55ce1abb }
    /* +0xe46e13 */ __asm { CMOVZ R10D,R15D }
    /* +0xe46e17 */ __asm { MOV EAX,dword ptr [R14 + RAX*0x4] }
    /* +0xe46e1b */ __asm { INC dword ptr [R14 + R13*0x4] }
    /* +0xe46e1f */ __asm { MOVZX EBP,CH }
    /* +0xe46e22 */ __asm { INC EDI }
    /* +0xe46e24 */ __asm { MOV R15D,R8D }
    /* +0xe46e27 */ __asm { OR R15D,0x1 }
    /* +0xe46e2b */ __asm { MOV R13D,0x53e3da97 }
    /* +0xe46e31 */ __asm { ADD R13D,0x78afdeac }
    /* +0xe46e38 */ __asm { MOV ECX,R8D }
    /* +0xe46e3b */ __asm { ROR R13D,CL }
    /* +0xe46e3e */ __asm { MOV ECX,dword ptr [RSP + 0x450] }
    /* +0xe46e45 */ __asm { IMUL R13D,ECX }
    /* +0xe46e49 */ __asm { INC ESI }
    /* +0xe46e4b */ __asm { MOV EBX,0xfb8a30cb }
    /* +0xe46e50 */ __asm { IMUL EBX,R15D }
    /* +0xe46e54 */ __asm { XOR EBX,0x41009ea9 }
    /* +0xe46e5a */ __asm { INC EAX }
    /* +0xe46e5c */ __asm { ADD EBX,0x8177b1cb }
    /* +0xe46e62 */ __asm { IMUL EBX,ECX }
    /* +0xe46e65 */ __asm { MOV ECX,R10D }
    /* +0xe46e68 */ __asm { CMP R13,RBX }
    /* +0xe46e6b */ __asm { JG 0x7fffa55b6e80 }
    /* +0xe46e6d */ __asm { MOV EBX,dword ptr [R12 + -0x8] }
    /* +0xe46e72 */ __asm { MOV R10,qword ptr [RSP + 0xe8] }
    /* +0xe46e7a */ __asm { INC dword ptr [R10 + RCX*0x4] }
    /* +0xe46e7e */ __asm { JMP 0x7fffa55b6e91 }
    /* +0xe46e80 */ __asm { MOV R10,qword ptr [RSP + 0xe8] }
    /* +0xe46e88 */ __asm { INC dword ptr [R10 + RCX*0x4] }
    /* +0xe46e8c */ __asm { MOV EBX,dword ptr [R12 + -0x8] }
    /* +0xe46e91 */ __asm { MOV dword ptr [RDX],EAX }
    /* +0xe46e93 */ __asm { MOV dword ptr [R14 + R9*0x4 + 0xc00],EDI }
    /* +0xe46e9b */ __asm { MOV ECX,dword ptr [R14 + RBP*0x4 + 0x400] }
    /* +0xe46ea3 */ __asm { MOV dword ptr [R14 + R11*0x4 + 0x800],ESI }
    /* +0xe46eab */ __asm { INC ECX }
    /* +0xe46ead */ __asm { MOV dword ptr [R14 + RBP*0x4 + 0x400],ECX }
    /* +0xe46eb5 */ __asm { MOVZX ECX,BH }
    /* +0xe46eb8 */ __asm { MOV EDX,dword ptr [R12 + -0x4] }
    /* +0xe46ebd */ __asm { INC dword ptr [R14 + RCX*0x4 + 0x400] }
    /* +0xe46ec5 */ __asm { MOV R10D,0xfc11eeaa }
    /* +0xe46ecb */ __asm { ADD R10D,0x294fec61 }
    /* +0xe46ed2 */ __asm { MOV RCX,qword ptr [RSP + 0x5f0] }
    /* +0xe46eda */ __asm { ROL R10D,CL }
    /* +0xe46edd */ __asm { MOVD XMM5,EBX }
    /* +0xe46ee1 */ __asm { MOV EAX,EBX }
    /* +0xe46ee3 */ __asm { OR EAX,0xff }
    /* +0xe46ee8 */ __asm { NOT R10D }
    /* +0xe46eeb */ __asm { SUB R10D,R8D }
    /* +0xe46eee */ __asm { CMP R10,qword ptr [RSP + 0x118] }
    /* +0xe46ef6 */ __asm { PUNPCKLBW XMM5,XMM1 }
    /* +0xe46efa */ __asm { PEXTRW ECX,XMM5,0x0 }
    /* +0xe46eff */ __asm { CMOVNZ ECX,EAX }
    /* +0xe46f02 */ __asm { INC dword ptr [R14 + RCX*0x4] }
    /* +0xe46f06 */ __asm { MOVZX ECX,DL }
    /* +0xe46f09 */ __asm { MOV R9D,EBX }
    /* +0xe46f0c */ __asm { SHR R9D,0xe }
    /* +0xe46f10 */ __asm { AND R9D,0x3fc }
    /* +0xe46f17 */ __asm { INC dword ptr [R14 + R9*0x1 + 0x800] }
    /* +0xe46f1f */ __asm { MOV R10D,dword ptr [R14 + RCX*0x4] }
    /* +0xe46f23 */ __asm { MOV R9D,EDX }
    /* +0xe46f26 */ __asm { SHR R9D,0xe }
    /* +0xe46f2a */ __asm { AND R9D,0x3fc }
    /* +0xe46f31 */ __asm { MOV R11D,dword ptr [R14 + R9*0x1 + 0x800] }
    /* +0xe46f39 */ __asm { SHR EBX,0x18 }
    /* +0xe46f3c */ __asm { INC dword ptr [R14 + RBX*0x4 + 0xc00] }
    /* +0xe46f44 */ __asm { MOV EAX,EDX }
    /* +0xe46f46 */ __asm { MOVZX EBX,DH }
    /* +0xe46f49 */ __asm { LEA R8,[R12 + 0x4] }
    /* +0xe46f4e */ __asm { INC R11D }
    /* +0xe46f51 */ __asm { INC R10D }
    /* +0xe46f54 */ __asm { MOV EDX,dword ptr [R12] }
    /* +0xe46f58 */ __asm { MOV dword ptr [R14 + RCX*0x4],R10D }
    /* +0xe46f5c */ __asm { MOV dword ptr [R14 + R9*0x1 + 0x800],R11D }
    /* +0xe46f64 */ __asm { SHR EAX,0x18 }
    /* +0xe46f67 */ __asm { INC dword ptr [R14 + RAX*0x4 + 0xc00] }
    /* +0xe46f6f */ __asm { INC dword ptr [R14 + RBX*0x4 + 0x400] }
    /* +0xe46f77 */ __asm { CMP R8,qword ptr [RSP + 0x1d8] }
    /* +0xe46f7f */ __asm { JNC 0x7fffa55b70ed }
    /* +0xe46f85 */ __asm { ADD R12,0x10 }
    /* +0xe46f89 */ __asm { JMP 0x7fffa55b6d00 }
    /* +0xe46f8e */ __asm { LEA R8,[R9 + 0x1] }
    /* +0xe46f92 */ __asm { MOV R11,R8 }
    /* +0xe46f95 */ __asm { AND R11,-0x8 }
    /* +0xe46f99 */ __asm { PXOR XMM5,XMM5 }
    /* +0xe46f9d */ __asm { XOR R10D,R10D }
    /* +0xe46fa0 */ __asm { MOVDQA XMM1,xmmword ptr [0x7fffa56b26a0] }
    /* +0xe46fa8 */ __asm { PXOR XMM3,XMM3 }
    /* +0xe46fac */ __asm { NOP dword ptr [RAX] }
    /* +0xe46fb0 */ __asm { MOVDQU XMM4,xmmword ptr [R14 + R10*0x4] }
    /* +0xe46fb6 */ __asm { MOVDQU XMM0,xmmword ptr [R14 + R10*0x4 + 0x10] }
    /* +0xe46fbd */ __asm { LEA RAX,[R10 + 0x8] }
    /* +0xe46fc1 */ __asm { MOVDQA XMM2,XMM3 }
    /* +0xe46fc5 */ __asm { PXOR XMM2,XMM1 }
    /* +0xe46fc9 */ __asm { MOVDQA XMM11,XMM0 }
    /* +0xe46fce */ __asm { PXOR XMM11,XMM1 }
    /* +0xe46fd3 */ __asm { PCMPGTD XMM11,XMM2 }
    /* +0xe46fd8 */ __asm { PAND XMM0,XMM11 }
    /* +0xe46fdd */ __asm { PANDN XMM11,XMM3 }
    /* +0xe46fe2 */ __asm { MOVDQA XMM3,XMM11 }
    /* +0xe46fe7 */ __asm { POR XMM3,XMM0 }
    /* +0xe46feb */ __asm { MOVDQA XMM0,XMM5 }
    /* +0xe46fef */ __asm { PXOR XMM0,XMM1 }
    /* +0xe46ff3 */ __asm { MOVDQA XMM2,XMM4 }
    /* +0xe46ff7 */ __asm { PXOR XMM2,XMM1 }
    /* +0xe46ffb */ __asm { PCMPGTD XMM2,XMM0 }
    /* +0xe46fff */ __asm { PAND XMM4,XMM2 }
    /* +0xe47003 */ __asm { PANDN XMM2,XMM5 }
    /* +0xe47007 */ __asm { MOVDQA XMM5,XMM2 }
    /* +0xe4700b */ __asm { POR XMM5,XMM4 }
    /* +0xe4700f */ __asm { MOV R10,RAX }
    /* +0xe47012 */ __asm { CMP RAX,R11 }
    /* +0xe47015 */ __asm { JNZ 0x7fffa55b6fb0 }
    /* +0xe47017 */ __asm { MOVDQA XMM4,XMM3 }
    /* +0xe4701b */ __asm { PXOR XMM4,XMM1 }
    /* +0xe4701f */ __asm { MOVDQA XMM0,XMM5 }
    /* +0xe47023 */ __asm { PXOR XMM0,XMM1 }
    /* +0xe47027 */ __asm { PCMPGTD XMM0,XMM4 }
    /* +0xe4702b */ __asm { PAND XMM5,XMM0 }
    /* +0xe4702f */ __asm { PANDN XMM0,XMM3 }
    /* +0xe47033 */ __asm { POR XMM0,XMM5 }
    /* +0xe47037 */ __asm { PSHUFD XMM5,XMM0,0xee }
    /* +0xe4703c */ __asm { MOVDQA XMM3,XMM0 }
    /* +0xe47040 */ __asm { PXOR XMM3,XMM1 }
    /* +0xe47044 */ __asm { MOVDQA XMM4,XMM5 }
    /* +0xe47048 */ __asm { PXOR XMM4,XMM1 }
    /* +0xe4704c */ __asm { PCMPGTD XMM3,XMM4 }
    /* +0xe47050 */ __asm { PAND XMM0,XMM3 }
    /* +0xe47054 */ __asm { PANDN XMM3,XMM5 }
    /* +0xe47058 */ __asm { POR XMM3,XMM0 }
    /* +0xe4705c */ __asm { PSHUFD XMM5,XMM3,0x55 }
    /* +0xe47061 */ __asm { MOVDQA XMM4,XMM3 }
    /* +0xe47065 */ __asm { PXOR XMM4,XMM1 }
    /* +0xe47069 */ __asm { PXOR XMM1,XMM5 }
    /* +0xe4706d */ __asm { PCMPGTD XMM4,XMM1 }
    /* +0xe47071 */ __asm { PAND XMM3,XMM4 }
    /* +0xe47075 */ __asm { PANDN XMM4,XMM5 }
    /* +0xe47079 */ __asm { POR XMM4,XMM3 }
    /* +0xe4707d */ __asm { MOVD R10D,XMM4 }
    /* +0xe47082 */ __asm { CMP R8,R11 }
    /* +0xe47085 */ __asm { JNZ 0x7fffa55b7093 }
    /* +0xe47087 */ __asm { JMP 0x7fffa55b735f }
    /* +0xe47090 */ __asm { INC R11 }
    /* +0xe47093 */ __asm { MOV ESI,0x9a0a627e }
    /* +0xe47098 */ __asm { MOV R8D,0xe7d9b800 }
    /* +0xe4709e */ __asm { IMUL R13D,R8D,-0x3fffffcb }
    /* +0xe470a5 */ __asm { ROR R13D,CL }
    /* +0xe470a8 */ __asm { MOV R8D,dword ptr [R14 + R11*0x4] }
    /* +0xe470ac */ __asm { CMP R8D,R10D }
    /* +0xe470af */ __asm { CMOVA R10D,R8D }
    /* +0xe470b3 */ __asm { SUB ESI,ECX }
    /* +0xe470b5 */ __asm { XOR ESI,0x83e565c5 }
    /* +0xe470bb */ __asm { XOR R8D,R8D }
    /* +0xe470be */ __asm { XOR EBP,EBP }
    /* +0xe470c0 */ __asm { CMP R11,R9 }
    /* +0xe470c3 */ __asm { SETZ AL }
    /* +0xe470c6 */ __asm { SETBE R15B }
    /* +0xe470ca */ __asm { CMP RSI,R13 }
    /* +0xe470cd */ __asm { JNC 0x7fffa55b70e0 }
    /* +0xe470cf */ __asm { MOV R8B,AL }
    /* +0xe470d2 */ __asm { MOV EBP,R8D }
    /* +0xe470d5 */ __asm { JMP 0x7fffa55b70e3 }
    /* +0xe470e0 */ __asm { MOV BPL,R15B }
    /* +0xe470e3 */ __asm { TEST BPL,BPL }
    /* +0xe470e6 */ __asm { JZ 0x7fffa55b7090 }
    /* +0xe470e8 */ __asm { JMP 0x7fffa55b735f }
    /* +0xe470ed */ __asm { MOV RBX,qword ptr [RSP + 0x1f8] }
    /* +0xe470f5 */ __asm { MOV EDI,dword ptr [RSP + 0x450] }
    /* +0xe470fc */ __asm { MOV R11,qword ptr [RSP + 0x110] }
    /* +0xe47104 */ __asm { CMP R12,R11 }
    /* +0xe47107 */ __asm { MOV R9,qword ptr [RSP + 0x5f0] }
    /* +0xe4710f */ __asm { JNC 0x7fffa55b71cd }
    /* +0xe47115 */ __asm { MOVQ XMM1,R11 }
    /* +0xe4711a */ __asm { MOVQ XMM5,R12 }
    /* +0xe4711f */ __asm { MOVDQA XMM3,XMM1 }
    /* +0xe47123 */ __asm { PSUBQ XMM3,XMM5 }
    /* +0xe47127 */ __asm { MOVQ R8,XMM3 }
    /* +0xe4712c */ __asm { AND R8,0x3 }
    /* +0xe47130 */ __asm { JZ 0x7fffa55b7157 }
    /* +0xe47132 */ __asm { INC R12 }
    /* +0xe47135 */ __asm { XOR EDX,EDX }
    /* +0xe47137 */ __asm { NOP word ptr [RAX + RAX*0x1] }
    /* +0xe47140 */ __asm { MOVZX ECX,uint8_t ptr [R12 + -0x1] }
    /* +0xe47146 */ __asm { INC dword ptr [R14 + RCX*0x4] }
    /* +0xe4714a */ __asm { INC RDX }
    /* +0xe4714d */ __asm { CMP RDX,R8 }
    /* +0xe47150 */ __asm { JZ 0x7fffa55b7157 }
    /* +0xe47152 */ __asm { INC R12 }
    /* +0xe47155 */ __asm { JMP 0x7fffa55b7140 }
    /* +0xe47157 */ __asm { PSUBQ XMM5,XMM1 }
    /* +0xe4715b */ __asm { MOVQ R8,XMM5 }
    /* +0xe47160 */ __asm { CMP R8,-0x4 }
    /* +0xe47164 */ __asm { MOV R9,qword ptr [RSP + 0x5f0] }
    /* +0xe4716c */ __asm { JA 0x7fffa55b71cd }
    /* +0xe4716e */ __asm { NOP }
    /* +0xe47170 */ __asm { MOV R8D,0x3b23d65c }
    /* +0xe47176 */ __asm { ADD R8D,0xe3e1dbbc }
    /* +0xe4717d */ __asm { XOR R8D,R9D }
    /* +0xe47180 */ __asm { MOVZX EDX,uint8_t ptr [R12] }
    /* +0xe47185 */ __asm { MOV EAX,0x819fbd19 }
    /* +0xe4718a */ __asm { ADD EAX,0xdf6f0836 }
    /* +0xe4718f */ __asm { INC dword ptr [R14 + RDX*0x4] }
    /* +0xe47193 */ __asm { MOVZX EDX,uint8_t ptr [R12 + 0x1] }
    /* +0xe47199 */ __asm { INC dword ptr [R14 + RDX*0x4] }
    /* +0xe4719d */ __asm { MOVZX EDX,uint8_t ptr [R12 + 0x2] }
    /* +0xe471a3 */ __asm { MOVSX RCX,DL }
    /* +0xe471a7 */ __asm { IMUL EAX,EDI }
    /* +0xe471aa */ __asm { ADD EAX,0x4beff568 }
    /* +0xe471af */ __asm { CMP RAX,R8 }
    /* +0xe471b2 */ __asm { CMOVLE RCX,RDX }
    /* +0xe471b6 */ __asm { INC dword ptr [R14 + RCX*0x4] }
    /* +0xe471ba */ __asm { MOVZX EDX,uint8_t ptr [R12 + 0x3] }
    /* +0xe471c0 */ __asm { INC dword ptr [R14 + RDX*0x4] }
    /* +0xe471c4 */ __asm { ADD R12,0x4 }
    /* +0xe471c8 */ __asm { CMP R12,R11 }
    /* +0xe471cb */ __asm { JC 0x7fffa55b7170 }
    /* +0xe471cd */ __asm { PXOR XMM5,XMM5 }
    /* +0xe471d1 */ __asm { XOR EDX,EDX }
    /* +0xe471d3 */ __asm { MOVDQA XMM1,xmmword ptr [0x7fffa56b26a0] }
    /* +0xe471db */ __asm { PXOR XMM3,XMM3 }
    /* +0xe471df */ __asm { NOP }
    /* +0xe471e0 */ __asm { MOV R8D,0xaffe496b }
    /* +0xe471e6 */ __asm { SUB R8D,R9D }
    /* +0xe471e9 */ __asm { XOR R8D,0x705a4254 }
    /* +0xe471f0 */ __asm { MOVDQU XMM4,xmmword ptr [R14 + RDX*0x4 + 0xc00] }
    /* +0xe471fa */ __asm { MOVDQU XMM0,xmmword ptr [R14 + RDX*0x4 + 0xc10] }
    /* +0xe47204 */ __asm { MOVDQU XMM2,xmmword ptr [R14 + RDX*0x4] }
    /* +0xe4720a */ __asm { PADDD XMM2,XMM4 }
    /* +0xe4720e */ __asm { MOVDQU XMM11,xmmword ptr [R14 + RDX*0x4 + 0x10] }
    /* +0xe47215 */ __asm { PADDD XMM11,XMM0 }
    /* +0xe4721a */ __asm { MOVDQU XMM8,xmmword ptr [R14 + RDX*0x4 + 0x800] }
    /* +0xe47224 */ __asm { ADD R8D,0x3cf0ce96 }
    /* +0xe4722b */ __asm { MOVDQU XMM0,xmmword ptr [R14 + RDX*0x4 + 0x810] }
    /* +0xe47235 */ __asm { MOVDQU XMM4,xmmword ptr [R14 + RDX*0x4 + 0x410] }
    /* +0xe4723f */ __asm { PADDD XMM4,XMM0 }
    /* +0xe47243 */ __asm { PADDD XMM4,XMM11 }
    /* +0xe47248 */ __asm { MOVDQU XMM0,xmmword ptr [R14 + RDX*0x4 + 0x400] }
    /* +0xe47252 */ __asm { PADDD XMM0,XMM8 }
    /* +0xe47257 */ __asm { PADDD XMM0,XMM2 }
    /* +0xe4725b */ __asm { MOVDQU xmmword ptr [R14 + RDX*0x4],XMM0 }
    /* +0xe47261 */ __asm { MOVDQU xmmword ptr [R14 + RDX*0x4 + 0x10],XMM4 }
    /* +0xe47268 */ __asm { LEA RAX,[RDX + 0x8] }
    /* +0xe4726c */ __asm { MOVDQA XMM2,XMM0 }
    /* +0xe47270 */ __asm { PXOR XMM2,XMM1 }
    /* +0xe47274 */ __asm { MOVDQA XMM11,XMM5 }
    /* +0xe47279 */ __asm { PXOR XMM11,XMM1 }
    /* +0xe4727e */ __asm { PCMPGTD XMM2,XMM11 }
    /* +0xe47283 */ __asm { PAND XMM0,XMM2 }
    /* +0xe47287 */ __asm { PANDN XMM2,XMM5 }
}


// ============================================================================
// Function : FUN_7fffa55c6b44  |  RVA: 0xe56b44  |  Size: 96 bytes
// Callers  : FUN_7fffa55f279c@0xe8279c, FUN_7fffa56084d0@0xe984d0, FUN_7fffa52444e0@0xad44e0
// Callees  : FUN_7fffa52d242c@0xb6242c, FUN_7fffa56a0818@0xf30818
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa55c6b44(void)

{
  uint64_t uVar1;
  
  if (DAT_7fffa47825d4 == '\0') {
    PTR_DAT_7fffa47825c0 = &DAT_7fffa4780590;
    _DAT_7fffa47825c8 = 0x7fffa4780250;
    PTR_DAT_7fffa47825b8 = &DAT_7fffa4780480;
    uVar1 = FUN_7fffa56a0818();
    FUN_7fffa52d242c(0xfffffffd,1,uVar1,&DAT_7fffa47825c8);
    DAT_7fffa47825d4 = '\x01';
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa55c6bb0  |  RVA: 0xe56bb0  |  Size: 131 bytes
// Callers  : FUN_7fffa5497d30@0xd27d30
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184
// ============================================================================
uint64_t FUN_7fffa55c6bb0(short *param_1,int64_t param_2,int64_t param_3)

{
  short sVar1;
  uint32_t *puVar2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      psVar3 = param_1;
      do {
        sVar1 = *(short *)((param_3 - (int64_t)param_1) + (int64_t)psVar3);
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        if (sVar1 == 0) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
      puVar2 = (uint32_t *)FUN_7fffa4ed9184();
      *puVar2 = 0x22;
      FUN_7fffa55c8ce0();
      return 0x22;
    }
    *param_1 = 0;
  }
  puVar2 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar2 = 0x16;
  FUN_7fffa55c8ce0();
  return 0x16;
}


// ============================================================================
// Function : FUN_7fffa55c6c40  |  RVA: 0xe56c40  |  Size: 2290 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55c6c40(int64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char *pcVar2;
  char *pcVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  int64_t lVar6;
  uint8_t uVar7;
  uint32_t uVar8;
  uint64_t in_RAX;
  uint64_t uVar9;
  uint8_t bVar10;
  uint64_t uVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  uint64_t *puVar16;
  uint32_t uVar17;
  int64_t lVar18;
  uint32_t uVar19;
  int iVar20;
  uint64_t *in_R10;
  uint64_t *in_R11;
  int64_t lVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint32_t uVar24;
  int iVar25;
  uint64_t *puVar26;
  uint64_t uVar27;
  uint8_t auVar28 [16];
  char cVar29;
  uint8_t uVar32;
  char cVar33;
  char cVar34;
  uint8_t uVar35;
  char cVar36;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint32_t auStack_158 [66];
  int64_t lStack_50;
  int64_t lStack_48;
  
  param_1 = param_1 * 0x1d07417979854d3d;
  uVar19 = param_2 | 1;
  uVar17 = 5;
  if (*(uint32_t *)(param_1 + 0x10c) < 5) {
    uVar17 = *(uint32_t *)(param_1 + 0x10c);
  }
  lVar6 = *(int64_t *)(param_1 + 8);
  uVar13 = (int64_t)in_R10 - lVar6;
  iVar20 = 1 << ((uint8_t)uVar17 & 0x1f);
  uVar24 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  uVar12 = (uint32_t)uVar13;
  uVar11 = (in_RAX << 0x24 | in_RAX >> 0x1c) ^ (in_RAX << 2 | in_RAX >> 0x3e) ^ in_RAX;
  uVar11 = (uVar11 << 4 | uVar11 >> 0x3c) ^ (uVar11 << 8 | uVar11 >> 0x38) ^ uVar11;
  uVar11 = (uVar11 << 0x10 | uVar11 >> 0x30) ^ (uVar11 << 8 | uVar11 >> 0x38) ^ uVar11;
  uVar11 = (uVar11 << 0x20 | uVar11 >> 0x20) ^ (uVar11 << 0x10 | uVar11 >> 0x30) ^ uVar11;
  uVar17 = *(uint32_t *)(param_1 + 0x1c);
  uVar15 = uVar12 - uVar24;
  if (uVar12 - uVar17 <= uVar24) {
    uVar15 = uVar17;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar15 = uVar17;
  }
  uVar9 = *(uint64_t *)(param_1 + 0x60);
  lStack_48 = *(int64_t *)(param_1 + 0x70);
  lVar18 = *(int64_t *)(param_1 + 0x38);
  cVar29 = (char)*(uint32_t *)(param_1 + 0x34);
  if (((uVar19 * 0x3e631800 | uVar19 * 0x7a9f318c >> 0x17) == 0x4cc36a61) ||
     (*(int *)(param_1 + 300) == 0)) {
    uVar17 = *(uint32_t *)(param_1 + 0x2c);
    uVar23 = (uint64_t)uVar17;
    lVar22 = lStack_48;
    lVar21 = lVar18;
    if (0x180 < uVar12 - uVar17) {
      if (uVar17 < 0xffffffa0) {
        uVar27 = uVar23 + 0x60;
        do {
          uVar14 = (uint64_t)((uint32_t)uVar23 & 7);
          uVar17 = *(uint32_t *)(param_1 + 0x40 + uVar14 * 4);
          *(int *)(param_1 + 0x40 + uVar14 * 4) =
               (int)((*(int64_t *)(lVar6 + 8 + uVar23) * -0x30e4432340650000 ^
                     *(uint64_t *)(param_1 + 0x60)) >> (0x38U - cVar29 & 0x3f));
          uVar14 = (uint64_t)(uVar17 >> 3 & 0xffffffe0);
          lVar21 = 0;
          if ((*(uint8_t *)(lVar18 + uVar14) & 0x1f) == 1) {
            lVar21 = 0x1f;
          }
          lVar21 = lVar21 + (uint64_t)(*(uint8_t *)(lVar18 + uVar14) - 1 & 0x1f);
          *(char *)(lVar18 + uVar14) = (char)lVar21;
          *(char *)(lVar18 + uVar14 + lVar21) = (char)uVar17;
          *(uint32_t *)(lStack_48 + uVar14 * 4 + lVar21 * 4) = (uint32_t)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar27 != uVar23);
        lVar21 = *(int64_t *)(param_1 + 0x38);
        lVar22 = *(int64_t *)(param_1 + 0x70);
      }
      uVar17 = uVar12 - 0x20;
      uVar23 = (uint64_t)uVar17;
      plVar1 = (int64_t *)(lVar6 + uVar23);
      uVar8 = ((int)(int64_t *)((int64_t)in_R10 + 1U) - (int)plVar1) + 1;
      uVar24 = 8;
      if (uVar8 < 8) {
        uVar24 = uVar8;
      }
      uVar8 = 0;
      if (plVar1 <= (int64_t *)((int64_t)in_R10 + 1U)) {
        uVar8 = uVar24;
      }
      uVar24 = (uVar8 + uVar12) - 0x20;
      if (uVar17 < uVar24) {
        lStack_50 = CONCAT44(lStack_50._4_4_,uVar24);
        bVar10 = 0x38 - (char)*(uint32_t *)(param_1 + 0x34);
        uVar27 = *(uint64_t *)(param_1 + 0x60);
        bVar4 = (uint8_t)param_2 & 0xf;
        if ((uVar8 & 1) != (uint32_t)(uint16_t)(0U >> bVar4 | 0 << 0x10 - bVar4)) {
          *(int *)(param_1 + 0x40 + (uint64_t)(uVar17 & 7) * 4) =
               (int)((uVar27 ^ *plVar1 * -0x30e4432340650000) >> (bVar10 & 0x3f));
          uVar23 = (-(uint64_t)
                     ((uint64_t)(int64_t)(int)~(param_2 ^ 0x69621b20) <
                     (uint64_t)(uVar19 * -0x71cd1343)) | 1) + uVar23;
        }
        if (uVar8 != 1) {
          do {
            uVar8 = (uint32_t)uVar23;
            *(int *)(param_1 + 0x40 + (uint64_t)(uVar8 & 7) * 4) =
                 (int)((*(int64_t *)(lVar6 + uVar23) * -0x30e4432340650000 ^ uVar27) >>
                      (bVar10 & 0x3f));
            plVar1 = (int64_t *)(lVar6 + 1 + uVar23);
            uVar23 = uVar23 + 2;
            *(int *)(param_1 + 0x40 + (uint64_t)(uVar8 + 1 & 7) * 4) =
                 (int)((*plVar1 * -0x30e4432340650000 ^ uVar27) >> (bVar10 & 0x3f));
          } while (uVar24 != (uint32_t)uVar23);
        }
      }
    }
    if (uVar17 < uVar12) {
      lStack_50 = *(int64_t *)(param_1 + 8);
      uVar27 = (uint64_t)uVar17;
      uVar5 = *(uint32_t *)(param_1 + 0x34);
      uVar23 = uVar13 + 0xffffffff;
      if (0x434eb7b0 < uVar19 * 0x3006793d) {
        uVar23 = uVar13 & 0xffffffff;
      }
      do {
        uVar19 = (uint32_t)uVar27;
        uVar13 = (uint64_t)(uVar19 & 7);
        plVar1 = (int64_t *)(lStack_50 + 8 + uVar27);
        uVar27 = uVar27 + 1;
        uVar17 = *(uint32_t *)(param_1 + 0x40 + uVar13 * 4);
        *(int *)(param_1 + 0x40 + uVar13 * 4) =
             (int)((*plVar1 * -0x30e4432340650000 ^ *(uint64_t *)(param_1 + 0x60)) >>
                  (0x38U - (char)uVar5 & 0x3f));
        uVar13 = (uint64_t)(uVar17 >> 3 & 0xffffffe0);
        iVar25 = 0x1f;
        if ((*(uint8_t *)(lVar21 + uVar13) & 0x1f) != 1) {
          iVar25 = 0;
        }
        uVar24 = iVar25 + (uint32_t)(*(uint8_t *)(lVar21 + uVar13) - 1 & 0x1f);
        *(char *)(lVar21 + uVar13) = (char)uVar24;
        *(char *)((uint64_t)uVar24 + lVar21 + uVar13) = (char)uVar17;
        *(uint32_t *)(uVar13 * 4 + lVar22 + (uint64_t)uVar24 * 4) = uVar19;
      } while (uVar23 != uVar27);
    }
    else {
      uVar23 = uVar13 & 0xffffffff;
    }
    *(uint32_t *)(param_1 + 0x2c) = uVar12;
    uVar13 = (uint64_t)*(uint32_t *)(param_1 + 0x40 + (uint64_t)(uVar12 & 7) * 4);
    *(int *)(param_1 + 0x40 + (uint64_t)(uVar12 & 7) * 4) =
         (int)((*(int64_t *)(lVar6 + 8 + uVar23) * -0x30e4432340650000 ^ uVar9) >>
              (0x38U - cVar29 & 0x3f));
  }
  else {
    uVar13 = (uVar9 ^ *in_R10 * -0x30e4432340650000) >> (0x38U - cVar29 & 0x3f);
    *(uint32_t *)(param_1 + 0x2c) = uVar12;
  }
  uVar7 = (uint8_t)(uVar13 >> 0x10);
  uVar35 = (uint8_t)(uVar13 >> 0x18);
  uVar32 = (uint8_t)(uVar13 >> 8);
  auVar30._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar35,uVar35),uVar7),CONCAT14(uVar7,(int)uVar13)) >> 0x20);
  auVar30[3] = uVar32;
  auVar30[2] = uVar32;
  auVar30[0] = (uint8_t)uVar13;
  auVar30[1] = auVar30[0];
  auVar30._8_8_ = 0;
  auVar31 = pshuflw(auVar30,auVar30,0);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)uVar13;
  uVar13 = (uint64_t)((uint32_t)(uVar13 >> 3) & 0x1fffffe0);
  lVar21 = lStack_48 + uVar13 * 4;
  bVar4 = *(uint8_t *)(lVar18 + uVar13);
  pcVar2 = (char *)(lVar18 + uVar13);
  pcVar3 = (char *)(lVar18 + 0x10 + uVar13);
  cVar29 = auVar31[0];
  auVar28[0] = -(*pcVar2 == cVar29);
  cVar33 = auVar31[1];
  auVar28[1] = -(pcVar2[1] == cVar33);
  cVar34 = auVar31[2];
  auVar28[2] = -(pcVar2[2] == cVar34);
  cVar36 = auVar31[3];
  auVar28[3] = -(pcVar2[3] == cVar36);
  auVar28[4] = -(pcVar2[4] == cVar29);
  auVar28[5] = -(pcVar2[5] == cVar33);
  auVar28[6] = -(pcVar2[6] == cVar34);
  auVar28[7] = -(pcVar2[7] == cVar36);
  auVar28[8] = -(pcVar2[8] == cVar29);
  auVar28[9] = -(pcVar2[9] == cVar33);
  auVar28[10] = -(pcVar2[10] == cVar34);
  auVar28[0xb] = -(pcVar2[0xb] == cVar36);
  auVar28[0xc] = -(pcVar2[0xc] == cVar29);
  auVar28[0xd] = -(pcVar2[0xd] == cVar33);
  auVar28[0xe] = -(pcVar2[0xe] == cVar34);
  auVar28[0xf] = -(pcVar2[0xf] == cVar36);
  auVar31[0] = -(*pcVar3 == cVar29);
  auVar31[1] = -(pcVar3[1] == cVar33);
  auVar31[2] = -(pcVar3[2] == cVar34);
  auVar31[3] = -(pcVar3[3] == cVar36);
  auVar31[4] = -(pcVar3[4] == cVar29);
  auVar31[5] = -(pcVar3[5] == cVar33);
  auVar31[6] = -(pcVar3[6] == cVar34);
  auVar31[7] = -(pcVar3[7] == cVar36);
  auVar31[8] = -(pcVar3[8] == cVar29);
  auVar31[9] = -(pcVar3[9] == cVar33);
  auVar31[10] = -(pcVar3[10] == cVar34);
  auVar31[0xb] = -(pcVar3[0xb] == cVar36);
  auVar31[0xc] = -(pcVar3[0xc] == cVar29);
  auVar31[0xd] = -(pcVar3[0xd] == cVar33);
  auVar31[0xe] = -(pcVar3[0xe] == cVar34);
  auVar31[0xf] = -(pcVar3[0xf] == cVar36);
  uVar17 = CONCAT22((uint16_t)(SUB161(auVar31 >> 7,0) & 1) |
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
                    (uint16_t)(auVar31[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar28 >> 7,0) & 1) |
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
                    (uint16_t)(auVar28[0xf] >> 7) << 0xf);
  if (uVar17 != (0x8f0f - param_2 & 0xffff)) {
    uVar23 = (uint64_t)(uVar17 >> (bVar4 & 0x1f) | uVar17 << 0x20 - (bVar4 & 0x1f));
    uVar9 = 0;
    do {
      iVar25 = 0;
      for (uVar27 = uVar23; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
        iVar25 = iVar25 + 1;
      }
      uVar17 = iVar25 + (uint32_t)bVar4 & 0x1f;
      if (uVar17 != 0) {
        uVar17 = *(uint32_t *)(lVar21 + (uint64_t)uVar17 * 4);
        if (uVar17 < uVar15) goto LAB_7fffa55c7266;
        iVar20 = iVar20 + -1;
        auStack_158[uVar9] = uVar17;
        uVar9 = uVar9 + 1;
      }
      uVar23 = uVar23 & uVar23 - 1;
      if ((uVar23 == 0) || (iVar20 == 0)) goto LAB_7fffa55c7266;
    } while( true );
  }
  uVar9 = 0;
LAB_7fffa55c7266:
  lVar22 = 0;
  if ((bVar4 & 0x1f) == 1) {
    lVar22 = 0x1f;
  }
  lVar22 = lVar22 + (uint64_t)(bVar4 - 1 & 0x1f);
  *(uint8_t *)(lVar18 + uVar13) = (char)lVar22;
  ((uint8_t *)(lVar18 + uVar13))[lVar22] = auVar30[0];
  iVar20 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar20 + 1;
  *(int *)(lVar21 + lVar22 * 4) = iVar20;
  if (uVar9 != (param_2 + 0x4cd70f1 & 0xffff)) {
    uVar13 = 3;
    uVar23 = 0;
    do {
      puVar16 = (uint64_t *)((uint64_t)auStack_158[uVar23] + lVar6);
      if (*(int *)((uVar13 - 3) + (int64_t)puVar16) == *(int *)((int64_t)in_R10 + (uVar13 - 3))) {
        puVar26 = in_R10;
        if (in_R10 < (uint64_t *)((int64_t)in_R11 - 7U)) {
          if (*puVar16 == *in_R10) {
            lVar18 = 8;
LAB_7fffa55c7380:
            puVar26 = (uint64_t *)((int64_t)in_R10 + lVar18);
            if (puVar26 < (uint64_t *)((int64_t)in_R11 - 7U)) {
              if (*(uint64_t *)((int64_t)puVar16 + lVar18) == *puVar26) goto code_r0x7fffa55c7399;
              uVar17 = 0;
              for (uVar27 = *puVar26 ^ *(uint64_t *)((int64_t)puVar16 + lVar18); (uVar27 & 1) == 0
                  ; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
                uVar17 = uVar17 + 1;
              }
              uVar27 = (uint64_t)(uVar17 >> 3) + lVar18;
              goto joined_r0x7fffa55c7465;
            }
            puVar16 = (uint64_t *)((int64_t)puVar16 + lVar18);
            goto joined_r0x7fffa55c73ff;
          }
          uVar17 = 0;
          for (uVar27 = *in_R10 ^ *puVar16; (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x8000000000000000) {
            uVar17 = uVar17 + 1;
          }
          uVar19 = uVar17 & 3;
          if ((param_2 ^ 0xe4ffa137) * -0x3520f811 <= 0xbfd4f5a0 - param_2) {
            uVar19 = uVar17 >> 3;
          }
          uVar27 = (uint64_t)uVar19;
        }
        else {
joined_r0x7fffa55c73ff:
          if ((puVar26 < (uint64_t *)((int64_t)in_R11 - 3U)) && ((int)*puVar16 == (int)*puVar26))
          {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
          }
          if ((puVar26 < (uint64_t *)((int64_t)in_R11 - 1U)) &&
             ((short)*puVar16 == (short)*puVar26)) {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
          }
          if (puVar26 < in_R11) {
            puVar26 = (uint64_t *)
                      ((int64_t)puVar26 + (uint64_t)((char)*puVar16 == (char)*puVar26));
          }
          uVar27 = (int64_t)puVar26 - (int64_t)in_R10;
        }
joined_r0x7fffa55c7465:
        if (uVar13 < uVar27) {
          *(uint64_t *)((uVar11 << 0x20 | uVar11 >> 0x20) - 0x6e25316e) =
               (uint64_t)((uVar12 + 3) - auStack_158[uVar23]);
          uVar13 = uVar27;
          if ((uint64_t *)((int64_t)in_R10 + uVar27) == in_R11) {
            return;
          }
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar9);
  }
  return;
code_r0x7fffa55c7399:
  lVar18 = lVar18 + 8;
  goto LAB_7fffa55c7380;
}


// ============================================================================
// Function : FUN_7fffa55c7550  |  RVA: 0xe57550  |  Size: 1590 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55c7550(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint8_t bVar4;
  uint16_t uVar5;
  bool bVar6;
  uint16_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint32_t uVar11;
  int iVar12;
  char *pcVar13;
  code *pcVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  int64_t lVar17;
  char *pcVar18;
  uint64_t *puVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint32_t uVar23;
  int64_t lVar24;
  int64_t lVar25;
  uint32_t uVar26;
  uint8_t *pbVar27;
  uint32_t uVar28;
  uint64_t *puVar29;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  int64_t lVar32;
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  
  pbVar27 = (uint8_t *)(param_4 << 0x3f ^ param_4);
  param_3 = (param_3 << 0x17 | param_3 >> 0x29) ^ (param_3 << 0x3b | param_3 >> 5) ^ param_3;
  param_3 = (param_3 << 0x36 | param_3 >> 10) ^ (param_3 << 0x2e | param_3 >> 0x12) ^ param_3;
  param_3 = (param_3 << 0x2c | param_3 >> 0x14) ^ (param_3 << 0x1c | param_3 >> 0x24) ^ param_3;
  puVar29 = (uint64_t *)
            ((param_3 << 0x18 | param_3 >> 0x28) ^ (param_3 << 0x38 | param_3 >> 8) ^ param_3);
  lVar25 = puVar29[3];
  if (lVar25 == 0) goto LAB_7fffa55c7adf;
  pcVar18 = (char *)puVar29[2];
  uVar7 = (uint16_t)param_2;
  if (pcVar18 == pcVar18 + puVar29[1] * 0x10 + 0x10) {
    if (puVar29[5] != 0) goto LAB_7fffa55c792d;
joined_r0x7fffa55c7a99:
    if (lVar25 == 0) goto LAB_7fffa55c7adf;
  }
  else {
    pcVar13 = pcVar18 + puVar29[1] * 0x10;
    lVar17 = 0;
    lVar24 = lVar25;
    while( true ) {
      auVar33[0] = -(*pcVar18 == '\0');
      auVar33[1] = -(pcVar18[1] == '\0');
      auVar33[2] = -(pcVar18[2] == '\0');
      auVar33[3] = -(pcVar18[3] == '\0');
      auVar33[4] = -(pcVar18[4] == '\0');
      auVar33[5] = -(pcVar18[5] == '\0');
      auVar33[6] = -(pcVar18[6] == '\0');
      auVar33[7] = -(pcVar18[7] == '\0');
      auVar33[8] = -(pcVar18[8] == '\0');
      auVar33[9] = -(pcVar18[9] == '\0');
      auVar33[10] = -(pcVar18[10] == '\0');
      auVar33[0xb] = -(pcVar18[0xb] == '\0');
      auVar33[0xc] = -(pcVar18[0xc] == '\0');
      auVar33[0xd] = -(pcVar18[0xd] == '\0');
      auVar33[0xe] = -(pcVar18[0xe] == '\0');
      auVar33[0xf] = -(pcVar18[0xf] == '\0');
      uVar5 = (uint16_t)(SUB161(auVar33 >> 7,0) & 1) | (uint16_t)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
              (uint16_t)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
              (uint16_t)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
              (uint16_t)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
              (uint16_t)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
              (uint16_t)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
              (uint16_t)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
              (uint16_t)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
              (uint16_t)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
              (uint16_t)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
              (uint16_t)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
              (uint16_t)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
              (uint16_t)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
              (uint16_t)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar33[0xf] >> 7) << 0xf;
      for (uVar23 = (CONCAT22(uVar5,uVar5) ^ 0x7fff7fff) & 0xffff &
                    ((uint32_t)(pcVar18 != pcVar13) << 0xe | 0x3fff); uVar23 != 0;
          uVar23 = uVar23 & (~uVar26 & ~uVar23 & uVar28) * 0x709f3143 +
                            (uVar16 & uVar11) * 0x24c3754b + (uVar23 & uVar28 ^ uVar26) +
                            (param_2 | 1) * 0x6fa32348 * (uVar11 ^ uVar16) +
                            (uVar11 | uVar16) * 0x4bdbbbfa +
                            (uVar26 & uVar23 & ~uVar28) * 0x709f3145 +
                            ((~uVar23 | uVar28) ^ uVar26) * -0x709f3144 +
                            (~(uVar28 | uVar23) & uVar26) * -2) {
        uVar11 = 0;
        for (uVar16 = uVar23; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar22 = (uint64_t)uVar11;
        puVar19 = *(uint64_t **)(lVar24 + uVar22 * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (*puVar19 >> 3) + *puVar19;
        uVar15 = SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),8) ^
                 SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),0);
        uVar21 = uVar15 >> (*pbVar27 & 0x3f);
        lVar20 = *(int64_t *)(pbVar27 + 0x10) + uVar21 * 0x10;
        pcVar1 = (char *)(*(int64_t *)(pbVar27 + 0x10) + uVar21 * 0x10);
        auVar30[0] = -(*pcVar1 == '\0');
        auVar30[1] = -(pcVar1[1] == '\0');
        auVar30[2] = -(pcVar1[2] == '\0');
        auVar30[3] = -(pcVar1[3] == '\0');
        auVar30[4] = -(pcVar1[4] == '\0');
        auVar30[5] = -(pcVar1[5] == '\0');
        auVar30[6] = -(pcVar1[6] == '\0');
        auVar30[7] = -(pcVar1[7] == '\0');
        auVar30[8] = -(pcVar1[8] == '\0');
        auVar30[9] = -(pcVar1[9] == '\0');
        auVar30[10] = -(pcVar1[10] == '\0');
        auVar30[0xb] = -(pcVar1[0xb] == '\0');
        auVar30[0xc] = -(pcVar1[0xc] == '\0');
        auVar30[0xd] = -(pcVar1[0xd] == '\0');
        auVar30[0xe] = -(pcVar1[0xe] == '\0');
        auVar30[0xf] = -(pcVar1[0xf] == '\0');
        uVar11 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
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
        if (uVar11 == 0) {
          lVar32 = 0;
          do {
            lVar32 = lVar32 + 1;
            *(uint8_t *)(lVar20 + 0xf) = *(uint8_t *)(lVar20 + 0xf) | '\x01' << ((uint8_t)uVar15 & 7);
            uVar21 = lVar32 + uVar21 & *(uint64_t *)(pbVar27 + 8);
            lVar20 = *(int64_t *)(pbVar27 + 0x10) + uVar21 * 0x10;
            pcVar1 = (char *)(*(int64_t *)(pbVar27 + 0x10) + uVar21 * 0x10);
            auVar31[0] = -(*pcVar1 == '\0');
            auVar31[1] = -(pcVar1[1] == '\0');
            auVar31[2] = -(pcVar1[2] == '\0');
            auVar31[3] = -(pcVar1[3] == '\0');
            auVar31[4] = -(pcVar1[4] == '\0');
            auVar31[5] = -(pcVar1[5] == '\0');
            auVar31[6] = -(pcVar1[6] == '\0');
            auVar31[7] = -(pcVar1[7] == '\0');
            auVar31[8] = -(pcVar1[8] == '\0');
            auVar31[9] = -(pcVar1[9] == '\0');
            auVar31[10] = -(pcVar1[10] == '\0');
            auVar31[0xb] = -(pcVar1[0xb] == '\0');
            auVar31[0xc] = -(pcVar1[0xc] == '\0');
            auVar31[0xd] = -(pcVar1[0xd] == '\0');
            auVar31[0xe] = -(pcVar1[0xe] == '\0');
            auVar31[0xf] = -(pcVar1[0xf] == '\0');
            uVar11 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar31 >> 7,0) & 1) |
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
          } while (uVar11 == 0);
          puVar19 = *(uint64_t **)(lVar24 + uVar22 * 8);
        }
        uVar16 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar2 = (&UNK_7fffa58359e9)
                [(uint64_t)((uint16_t)uVar15 & 0xff) * 4 + (int64_t)(short)(uVar7 ^ 0x156f)];
        *(uint64_t **)(uVar21 * 0x78 + *(int64_t *)(pbVar27 + 0x18) + (uint64_t)uVar16 * 8) =
             puVar19;
        *(uint64_t *)(lVar24 + uVar22 * 8) = 0;
        *(uint8_t *)(lVar20 + (uint64_t)uVar16) = uVar2;
        uVar15 = *(uint64_t *)(lVar24 + uVar22 * 8);
        if (uVar15 != 0) {
          pcVar14 = (code *)((int64_t)(short)((-0x799e - uVar7) * -0x7ecb) + 0x7fffa568d21e);
          (*pcVar14)(param_2,pcVar14,uVar15 >> 0x3d ^ uVar15);
        }
        lVar17 = lVar17 + 1;
        uVar28 = (uint32_t)lVar25;
        uVar26 = (uint32_t)param_4;
        uVar11 = uVar23 ^ ~uVar28;
        uVar16 = uVar26 ^ 0xffffffff;
      }
      if (pcVar18 == pcVar13) break;
      lVar24 = lVar24 + 0x78;
      pcVar18 = pcVar18 + 0x10;
    }
    lVar25 = puVar29[3];
    if (lVar17 == puVar29[5]) goto joined_r0x7fffa55c7a99;
LAB_7fffa55c792d:
    if (lVar25 == 0) goto LAB_7fffa55c7adf;
    pcVar18 = (char *)puVar29[2];
    if (pcVar18 != pcVar18 + puVar29[1] * 0x10 + 0x10) {
      pcVar13 = pcVar18 + puVar29[1] * 0x10;
      do {
        auVar34[0] = -(*pcVar18 == '\0');
        auVar34[1] = -(pcVar18[1] == '\0');
        auVar34[2] = -(pcVar18[2] == '\0');
        auVar34[3] = -(pcVar18[3] == '\0');
        auVar34[4] = -(pcVar18[4] == '\0');
        auVar34[5] = -(pcVar18[5] == '\0');
        auVar34[6] = -(pcVar18[6] == '\0');
        auVar34[7] = -(pcVar18[7] == '\0');
        auVar34[8] = -(pcVar18[8] == '\0');
        auVar34[9] = -(pcVar18[9] == '\0');
        auVar34[10] = -(pcVar18[10] == '\0');
        auVar34[0xb] = -(pcVar18[0xb] == '\0');
        auVar34[0xc] = -(pcVar18[0xc] == '\0');
        auVar34[0xd] = -(pcVar18[0xd] == '\0');
        auVar34[0xe] = -(pcVar18[0xe] == '\0');
        auVar34[0xf] = -(pcVar18[0xf] == '\0');
        bVar6 = pcVar18 == pcVar13;
        if (-0x2bd167b0 - param_2 == param_2 + 0x9a115fbc) {
          bVar6 = pcVar18 != pcVar13 && (int64_t)pcVar13 <= (int64_t)pcVar18;
        }
        bVar4 = (uint8_t)param_2 & 0xf;
        uVar23 = ((uint32_t)(bVar6 ^ 1) << 0xe | 0x3fff) &
                 ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar34 >> 7,0) & 1) |
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
                                (uint16_t)(auVar34[0xf] >> 7) << 0xf);
        uVar10 = 0;
        if (uVar23 != (uint16_t)(0U >> bVar4 | 0 << 0x10 - bVar4)) {
          do {
            uVar11 = 0;
            for (uVar16 = uVar23; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            uVar15 = *(uint64_t *)(lVar25 + (uint64_t)uVar11 * 8);
            if (uVar15 != 0) {
              iVar12 = (int)CONCAT62((int6)((uint64_t)uVar10 >> 0x10),0xedbf) * 0x67c1 + param_2 +
                       -0x14c5;
              uVar10 = (*(code *)((int64_t)(short)iVar12 + 0x7fffa568da9e))
                                 (iVar12,0x7fffa568da9e,uVar15 >> 0x3d ^ uVar15);
            }
            uVar23 = uVar23 - 1 & uVar23;
          } while (uVar23 != 0);
        }
        pcVar18 = pcVar18 + 0x10;
        lVar25 = lVar25 + 0x78;
      } while (!bVar6);
      lVar25 = puVar29[3];
      goto joined_r0x7fffa55c7a99;
    }
  }
  (*(code *)((int64_t)(short)~((uVar7 | 1) * -0x20c5) + 0x7fffa568f7b4))();
LAB_7fffa55c7adf:
  uVar10 = *(uint64_t *)pbVar27;
  uVar8 = *(uint64_t *)(pbVar27 + 8);
  uVar9 = *(uint64_t *)(pbVar27 + 0x18);
  puVar29[2] = *(uint64_t *)(pbVar27 + 0x10);
  puVar29[3] = uVar9;
  *puVar29 = uVar10;
  puVar29[1] = uVar8;
  uVar15 = puVar29[1] * 0xf + 0xe;
  if (puVar29[3] == 0) {
    uVar15 = 0;
  }
  uVar21 = (uint64_t)((float)uVar15 * 0.875);
  uVar21 = (int64_t)((float)uVar15 * 0.875 - 9.223372e+18) & (int64_t)uVar21 >> 0x3f | uVar21;
  if (uVar15 < 0x1e) {
    uVar21 = uVar15;
  }
  puVar29[4] = uVar21;
  return;
}


// ============================================================================
// Function : FUN_7fffa55c7bb0  |  RVA: 0xe57bb0  |  Size: 597 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55c7bb0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa47bd505 = 0;
  uRam00007fffa47bd519 = 0;
  uRam00007fffa47bd521 = 0;
  uRam00007fffa47bd509 = 0;
  uRam00007fffa47bd511 = 0;
  uRam00007fffa47bd529 = 0;
  uRam00007fffa47bd539 = 0;
  lVar2 = rdtsc();
  lVar3 = 3;
  lVar2 = lVar2 * 0x4f562ecd26f202b;
  do {
    *(char *)(lVar3 + 0x7fffa47bd4f7) = (char)((uint64_t)(lVar2 * -0x3318f26c8d8e554f) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bd4f4) = (char)((uint64_t)(lVar2 * 0xecd26f202b) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bd4f6) = (char)((uint64_t)(lVar2 * 0x1271db9693) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bd4f5) = (char)((uint64_t)(lVar2 * 0x4b7554c739) >> 0x20);
    lVar3 = lVar3 + 4;
    lVar2 = lVar2 * -0x3318f26c8d8e554f;
  } while (lVar3 != 0x5b);
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47bd505 * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa47bd509) = ~uRam00007fffa47bd539;
  bRam00007fffa47bd505 = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55c7e10  |  RVA: 0xe57e10  |  Size: 931 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55c7fa7) */

void FUN_7fffa55c7e10(void)

{
  uint64_t uVar1;
  uint16_t uVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  int64_t lVar5;
  uint32_t unaff_EBX;
  int64_t lVar6;
  uint32_t in_R10D;
  uint32_t unaff_R12D;
  int64_t lVar7;
  uint32_t uVar8;
  
  uVar4 = ~unaff_EBX & ~in_R10D;
  uVar8 = ~unaff_R12D;
  uVar4 = (in_R10D ^ unaff_EBX ^ uVar8) * -0x7742ec39 +
          (uVar8 & (~unaff_EBX ^ in_R10D)) * 0x3118351e +
          (in_R10D & unaff_EBX ^ unaff_R12D) * 0x462ab71b +
          (~in_R10D ^ unaff_EBX | uVar8) * -0x3118351e +
          ((uVar4 & uVar8) - (uVar4 & unaff_R12D)) * 0x462ab71b;
  bVar3 = (uint8_t)uVar4;
  *(uint8_t *)
   ((int64_t)(int)~(0x3cf24 << (bVar3 & 0x1f) | 0x3cf24U >> 0x20 - (bVar3 & 0x1f)) + 0x7fffa47cc169
   ) = 0;
  uRam00007fffa47bcdc8 = 0;
  uRam00007fffa47bcdd0 = 0;
  uRam00007fffa47bcdb8 = 0;
  uRam00007fffa47bcdc0 = 0;
  uRam00007fffa47bcda8 = 0;
  uRam00007fffa47bcdb0 = 0;
  lVar5 = rdtsc();
  lVar5 = lVar5 * 0x4ab96b3140609ee + 0xb;
  lVar6 = 3;
  uVar2 = (uint16_t)uVar4;
  while( true ) {
    lVar5 = lVar5 * 0x4ab96b3140609ee + 0xb;
    lVar7 = lVar5 * 0x4ab96b3140609ee + 0xb;
    *(char *)(lVar6 + (int64_t)(short)(uVar2 + 0x796e) + 0x7fffa47c1f01) =
         (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar6 + (int64_t)(int)(uVar4 + 0xae1b1c28 ^ 0x20cc12b1) + 0x7fffa47c8995) =
         (char)((uint64_t)lVar5 >> 0x20);
    if (lVar6 == 0x4b) break;
    lVar7 = lVar7 * 0x4ab96b3140609ee + 0xb;
    lVar5 = lVar7 * 0x4ab96b3140609ee + 0xb;
    *(char *)(lVar6 + ((int64_t)(short)((uVar2 | 1) * -0x13a1 + 0x16f9) ^ 0xffffffffffffbc05U) +
                      0x7fffa47bf010) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar6 + ((int64_t)(int)((uVar4 ^ 0x7de7f8d4) + 0x7ffe0260) ^ 0x330285ecU) +
                      0x7fffa47c77c8) = (char)((uint64_t)lVar7 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  uVar1 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)
                           (short)(-0x703e << (bVar3 & 0xf) | 0x8fc2U >> 0x10 - (bVar3 & 0xf)) +
                          0x7fffa47c29af) * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)
   ((int64_t)
    (int)((0x693a218bU >> (bVar3 & 0x1f) | 0x693a218b << 0x20 - (bVar3 & 0x1f)) + 0x5b16f83e) +
    0x7fffa47c4f3d + (uVar1 >> 0x20) * 8) =
       ~*(uint64_t *)
         ((int64_t)(int)(((uVar4 | 1) * 0x1e000000 | (uVar4 | 1) * -0x520713f1 >> 7) * 0x3ce932a3)
         + 0x7fffa47cb90d);
  *(char *)((int64_t)(short)(0x190e - uVar2) + 0x7fffa47be9af) = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55c81c0  |  RVA: 0xe581c0  |  Size: 2830 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55c81c0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
                     int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint8_t bVar5;
  uint32_t uVar6;
  int64_t lVar7;
  int64_t in_RAX;
  uint64_t uVar8;
  uint8_t bVar9;
  uint16_t uVar10;
  short sVar11;
  uint32_t uVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint8_t bVar16;
  uint32_t uVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint32_t in_R11D;
  uint64_t uVar22;
  uint64_t *puVar23;
  int iVar24;
  uint64_t *puVar25;
  uint64_t uVar26;
  uint32_t uVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  uint64_t uVar30;
  char cVar31;
  uint8_t uVar34;
  char cVar35;
  uint8_t uVar36;
  char cVar37;
  uint8_t uVar38;
  char cVar39;
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar40 [16];
  int64_t in_XMM4_Qa;
  uint32_t auStack_198 [64];
  int64_t lStack_98;
  uint32_t uStack_8c;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t *puStack_70;
  uint8_t *puStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  int64_t lStack_50;
  int iStack_44;
  
  puStack_70 = param_3;
  bVar5 = (uint8_t)in_R11D;
  if (((0xf13036c3 - in_R11D) * 0x80 | 0xf13036c3 - in_R11D >> 0x19) == 0x2021f2cb - in_R11D) {
    uVar8 = in_XMM4_Qa - 0xe631920U ^ 0xffffffffbc661b26;
    puStack_58 = (uint64_t *)(uVar8 * 0x4a80c9d1a643abc9 ^ uVar8 * -0x7000000000000000);
    puVar21 = (uint64_t *)(in_RAX - 0x278613e5U >> 0x26 ^ in_RAX - 0x278613e5U);
    uVar27 = in_R11D + 0xc7431b8;
  }
  else {
    uVar8 = in_RAX - 0x278613e5;
    uVar27 = in_R11D + 0x45da088a;
    puVar21 = (uint64_t *)(uVar8 >> 0x26 ^ uVar8);
    if ((0xf1e5acd1U >> (bVar5 & 0x1f) | -0xe1a532f << 0x20 - (bVar5 & 0x1f)) <=
        ((in_R11D ^ 0xe8c5e2e9) << 0x10 | (in_R11D ^ 0xe8c5e2e9) >> 0x10)) {
      puVar21 = (uint64_t *)(uVar8 - (uVar8 >> 0x26));
    }
    uVar8 = in_XMM4_Qa - 0xe631920U ^ 0xffffffffbc661b26;
    puStack_58 = (uint64_t *)(uVar8 * -0x7000000000000000 ^ uVar8 * 0x4a80c9d1a643abc9);
  }
  uVar29 = 5;
  if (*(uint32_t *)(param_5 + 0x10c) < 5) {
    uVar29 = *(uint32_t *)(param_5 + 0x10c);
  }
  iVar24 = 1 << ((uint8_t)uVar29 & 0x1f);
  uVar8 = *(uint64_t *)(param_5 + 8);
  uVar29 = *(uint32_t *)(param_5 + 0x1c);
  uVar10 = (short)uVar27 + 0x6aa3;
  uVar17 = 1 << (*(uint8_t *)(param_5 + 0x100) & 0x1f);
  uStack_60 = (uint64_t)(uVar27 | 1);
  uVar28 = (uVar27 | 1) * -0xd19b46;
  uStack_88 = uVar8;
  uStack_78 = uVar8 & (uint64_t)puVar21;
  if ((uVar28 << (bVar5 & 0x1f) | uVar28 >> 0x20 - (bVar5 & 0x1f)) != 0xb0215235) {
    uStack_78 = (int64_t)puVar21 - uVar8;
  }
  uVar28 = (uint32_t)uStack_78;
  uStack_8c = uVar28 - uVar17;
  if (uVar28 - uVar29 <= uVar17) {
    uStack_8c = uVar29;
  }
  if (*(uint32_t *)(param_5 + 0x28) !=
      (uint32_t)(uint16_t)(uVar10 << (bVar5 & 0xf) | uVar10 >> 0x10 - (bVar5 & 0xf))) {
    uStack_8c = uVar29;
  }
  uStack_80 = *(uint64_t *)(param_5 + 0x60);
  lVar20 = *(int64_t *)(param_5 + 0x38);
  iStack_44 = *(int *)(param_5 + 0x34);
  lStack_50 = *(int64_t *)(param_5 + 0x70);
  bVar16 = (uint8_t)iStack_44;
  if (*(int *)(param_5 + 300) == 0) {
    uVar29 = *(uint32_t *)(param_5 + 0x2c);
    uVar30 = (uint64_t)uVar29;
    lVar13 = lVar20;
    lVar15 = lStack_50;
    if (0x180 < uVar28 - uVar29) {
      if (uVar29 < 0xffffffa0) {
        uVar17 = (uVar27 + 0x4b54a8ef) * 0x54f62ba5;
        lStack_98._0_4_ = in_R11D | 1;
        uVar29 = (0x2a258b63 - uVar27) * (in_R11D | 1);
        uVar26 = (int64_t)(int)(uVar30 + 0x60);
        if ((uVar29 * 0x4000000 | uVar29 >> 6) <=
            (uVar17 << (bVar5 & 0x1f) | uVar17 >> 0x20 - (bVar5 & 0x1f))) {
          uVar26 = uVar30 + 0x60;
        }
        do {
          uVar22 = *(int64_t *)(uVar8 + 8 + uVar30) * -0x30e4432345000000 ^
                   *(uint64_t *)(param_5 + 0x60);
          uVar19 = (uint64_t)((uint32_t)uVar30 & 7);
          uVar29 = (uint32_t)(uVar22 >> ((uint8_t)(0x38U - iStack_44) & 0x3f));
          if (((uint32_t)lStack_98 * 0x133bb46a ^ uVar27) <= (0x52f37d03 - in_R11D ^ uVar27)) {
            uVar29 = (uint32_t)uVar22 & 0x38U - iStack_44;
          }
          uVar17 = *(uint32_t *)(param_5 + 0x40 + uVar19 * 4);
          *(uint32_t *)(param_5 + 0x40 + uVar19 * 4) = uVar29;
          uVar19 = (uint64_t)(uVar17 >> 3 & 0xffffffe0);
          lVar13 = 0x1f;
          if ((*(uint8_t *)(lVar20 + uVar19) & 0x1f) != 1) {
            lVar13 = 0;
          }
          lVar13 = lVar13 + (uint64_t)(*(uint8_t *)(lVar20 + uVar19) - 1 & 0x1f);
          *(char *)(lVar20 + uVar19) = (char)lVar13;
          *(char *)(lVar20 + uVar19 + lVar13) = (char)uVar17;
          *(uint32_t *)(lStack_50 + uVar19 * 4 + lVar13 * 4) = (uint32_t)uVar30;
          uVar30 = uVar30 + 1;
        } while (uVar26 != uVar30);
        lVar13 = *(int64_t *)(param_5 + 0x38);
        lVar15 = *(int64_t *)(param_5 + 0x70);
      }
      uVar29 = uVar28 - 0x20;
      uVar30 = (uint64_t)uVar29;
      plVar18 = (int64_t *)(uVar8 + uVar30);
      uVar12 = ((int)(int64_t *)((int64_t)puVar21 + 1U) - (int)plVar18) + 1;
      uVar17 = 8;
      if (uVar12 < 8) {
        uVar17 = uVar12;
      }
      uVar12 = 0;
      if (plVar18 <= (int64_t *)((int64_t)puVar21 + 1U)) {
        uVar12 = uVar17;
      }
      if (uVar29 < (uVar12 + uVar28) - 0x20) {
        lStack_98 = lVar20;
        uVar26 = *(uint64_t *)(param_5 + 0x60);
        bVar9 = 0x38 - (char)*(uint32_t *)(param_5 + 0x34);
        sVar11 = (short)in_R11D + -0x2e54;
        if ((uVar12 & 1) == (~(uVar27 ^ (uint16_t)(sVar11 * 2 | (uint16_t)(sVar11 < 0))) & 0xffff)) {
          uVar19 = uVar30;
        }
        else {
          *(int *)(param_5 + 0x40 + (uint64_t)(uVar29 & 7) * 4) =
               (int)((*plVar18 * -0x30e4432345000000 ^ uVar26) >> (bVar9 & 0x3f));
          uVar19 = uVar30 + 1;
        }
        if (uVar12 != ((in_R11D - uVar27) - 0xce47 & 0xffff)) {
          while( true ) {
            uVar17 = (uint32_t)uVar19;
            *(int *)(param_5 + 0x40 + (uint64_t)(uVar17 & 7) * 4) =
                 (int)((*(int64_t *)(uVar8 + uVar19) * -0x30e4432345000000 ^ uVar26) >>
                      (bVar9 & 0x3f));
            *(int *)(param_5 + 0x40 + (uint64_t)(uVar17 + 1 & 7) * 4) =
                 (int)((*(int64_t *)(uVar8 + 1 + uVar19) * -0x30e4432345000000 ^ uVar26) >>
                      (bVar9 & 0x3f));
            if ((uVar28 + uVar12) - 0x22 == uVar17) break;
            uVar19 = uVar19 + 2;
          }
        }
      }
    }
    if (uVar29 < uVar28) {
      lStack_98 = lVar20;
      lVar7 = *(int64_t *)(param_5 + 8);
      uVar6 = *(uint32_t *)(param_5 + 0x34);
      do {
        uVar17 = (uint32_t)uVar30;
        plVar18 = (int64_t *)(lVar7 + 8 + uVar30);
        uVar26 = (uint64_t)(uVar17 & 7);
        uVar30 = uVar30 + 1;
        uVar29 = *(uint32_t *)(param_5 + 0x40 + uVar26 * 4);
        *(int *)(param_5 + 0x40 + uVar26 * 4) =
             (int)((*plVar18 * -0x30e4432345000000 ^ *(uint64_t *)(param_5 + 0x60)) >>
                  (0x38U - (char)uVar6 & 0x3f));
        uVar26 = (uint64_t)(uVar29 >> 3 & 0xffffffe0);
        lVar14 = 0x1f;
        if ((*(uint8_t *)(lVar13 + uVar26) & 0x1f) != 1) {
          lVar14 = 0;
        }
        lVar14 = (uint64_t)(*(uint8_t *)(lVar13 + uVar26) - 1 & 0x1f) + lVar14;
        *(char *)(lVar13 + uVar26) = (char)lVar14;
        *(char *)(lVar13 + uVar26 + lVar14) = (char)uVar29;
        *(uint32_t *)(lVar15 + uVar26 * 4 + lVar14 * 4) = uVar17;
      } while ((uStack_78 & 0xffffffff) != uVar30);
    }
    *(uint32_t *)(param_5 + 0x2c) = uVar28;
    bVar9 = (uint8_t)uVar27 & 0x1f;
    uVar29 = (0xf39b0e7bU >> bVar9 | -0xc64f185 << 0x20 - bVar9) + 0x7be7250b;
    bVar9 = bVar16 ^ 0x38;
    if (0xd5ed0105 - ((in_R11D | 1) * -0x79ad9202 ^ uVar27) <
        (uVar29 >> (bVar5 & 0x1f) | uVar29 << 0x20 - (bVar5 & 0x1f))) {
      bVar9 = 0x38 - bVar16;
    }
    uVar29 = *(uint32_t *)(param_5 + 0x40 + (uint64_t)(uVar28 & 7) * 4);
    *(int *)(param_5 + 0x40 + (uint64_t)(uVar28 & 7) * 4) =
         (int)((*(int64_t *)(uVar8 + 8 + (uStack_78 & 0xffffffff)) * -0x30e4432345000000 ^
               uStack_80) >> (bVar9 & 0x3f));
  }
  else {
    uVar30 = *puVar21;
    *(uint32_t *)(param_5 + 0x2c) = uVar28;
    uVar29 = (uint32_t)((uVar30 * -0x30e4432345000000 ^ uStack_80) >> (0x38 - bVar16 & 0x3f));
  }
  uVar38 = (uint8_t)(uVar29 >> 0x18);
  uVar36 = (uint8_t)(uVar29 >> 0x10);
  uVar34 = (uint8_t)(uVar29 >> 8);
  auVar32._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar38,uVar38),uVar36),CONCAT14(uVar36,uVar29)) >> 0x20);
  auVar32[3] = uVar34;
  auVar32[2] = uVar34;
  auVar32[0] = (uint8_t)uVar29;
  auVar32[1] = auVar32[0];
  auVar32._8_8_ = 0;
  auVar33 = pshuflw(auVar32,auVar32,0);
  uVar30 = (uint64_t)(uVar29 >> 3 & 0xffffffe0);
  *(int *)(param_5 + 0x68) = *(int *)(param_5 + 0x68) + uVar29;
  lVar13 = uVar30 * 4 + lStack_50;
  puStack_68 = (uint8_t *)(lVar20 + uVar30);
  bVar5 = *(uint8_t *)(lVar20 + uVar30);
  pcVar3 = (char *)(lVar20 + uVar30);
  pcVar4 = (char *)(lVar20 + 0x10 + uVar30);
  cVar31 = auVar33[0];
  auVar40[0] = -(*pcVar3 == cVar31);
  cVar35 = auVar33[1];
  auVar40[1] = -(pcVar3[1] == cVar35);
  cVar37 = auVar33[2];
  auVar40[2] = -(pcVar3[2] == cVar37);
  cVar39 = auVar33[3];
  auVar40[3] = -(pcVar3[3] == cVar39);
  auVar40[4] = -(pcVar3[4] == cVar31);
  auVar40[5] = -(pcVar3[5] == cVar35);
  auVar40[6] = -(pcVar3[6] == cVar37);
  auVar40[7] = -(pcVar3[7] == cVar39);
  auVar40[8] = -(pcVar3[8] == cVar31);
  auVar40[9] = -(pcVar3[9] == cVar35);
  auVar40[10] = -(pcVar3[10] == cVar37);
  auVar40[0xb] = -(pcVar3[0xb] == cVar39);
  auVar40[0xc] = -(pcVar3[0xc] == cVar31);
  auVar40[0xd] = -(pcVar3[0xd] == cVar35);
  auVar40[0xe] = -(pcVar3[0xe] == cVar37);
  auVar40[0xf] = -(pcVar3[0xf] == cVar39);
  auVar33[0] = -(*pcVar4 == cVar31);
  auVar33[1] = -(pcVar4[1] == cVar35);
  auVar33[2] = -(pcVar4[2] == cVar37);
  auVar33[3] = -(pcVar4[3] == cVar39);
  auVar33[4] = -(pcVar4[4] == cVar31);
  auVar33[5] = -(pcVar4[5] == cVar35);
  auVar33[6] = -(pcVar4[6] == cVar37);
  auVar33[7] = -(pcVar4[7] == cVar39);
  auVar33[8] = -(pcVar4[8] == cVar31);
  auVar33[9] = -(pcVar4[9] == cVar35);
  auVar33[10] = -(pcVar4[10] == cVar37);
  auVar33[0xb] = -(pcVar4[0xb] == cVar39);
  auVar33[0xc] = -(pcVar4[0xc] == cVar31);
  auVar33[0xd] = -(pcVar4[0xd] == cVar35);
  auVar33[0xe] = -(pcVar4[0xe] == cVar37);
  auVar33[0xf] = -(pcVar4[0xf] == cVar39);
  uVar29 = CONCAT22((uint16_t)(SUB161(auVar33 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar33[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar40 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar40[0xf] >> 7) << 0xf);
  if (uVar29 != 0) {
    uVar30 = (uint64_t)(uVar29 >> (bVar5 & 0x1f) | uVar29 << 0x20 - (bVar5 & 0x1f));
    lVar20 = 0;
    do {
      bVar16 = (uint8_t)uVar27 & 0x1f;
      uVar29 = 0;
      for (uVar26 = uVar30; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
        uVar29 = uVar29 + 1;
      }
      uVar17 = uVar29 + bVar5;
      if ((int)((0xf101cb32U >> bVar16 | -0xefe34ce << 0x20 - bVar16) * 0x56d665d1 + in_R11D) <=
          (int)((int)uStack_60 * 0x6b8b557a - in_R11D)) {
        uVar17 = bVar5 ^ uVar29;
      }
      if ((uVar17 & 0x1f) != 0) {
        uVar29 = *(uint32_t *)(lVar13 + (uint64_t)(uVar17 & 0x1f) * 4);
        if (uVar29 < uStack_8c) goto LAB_7fffa55c8aaf;
        iVar24 = iVar24 + -1;
        auStack_198[lVar20] = uVar29;
        lVar20 = lVar20 + 1;
      }
      uVar30 = uVar30 & uVar30 - 1;
      if ((uVar30 == 0) || (iVar24 == 0)) goto LAB_7fffa55c8aaf;
    } while( true );
  }
  lVar20 = 0;
LAB_7fffa55c8aaf:
  lVar15 = 0;
  if ((bVar5 & 0x1f) == 1) {
    lVar15 = 0x1f;
  }
  lVar15 = lVar15 + (uint64_t)(bVar5 - 1 & 0x1f);
  *puStack_68 = (char)lVar15;
  puStack_68[lVar15] = auVar32[0];
  iVar24 = *(int *)(param_5 + 0x2c);
  *(int *)(param_5 + 0x2c) = iVar24 + 1;
  *(int *)(lVar13 + lVar15 * 4) = iVar24;
  if (lVar20 != 0) {
    puVar1 = (uint64_t *)((int64_t)puStack_58 - 7);
    puVar2 = puVar21 + 1;
    uStack_60 = uVar8 + 8;
    uVar30 = 3;
    lVar13 = 0;
    do {
      uVar27 = auStack_198[lVar13];
      puVar23 = (uint64_t *)(uVar8 + uVar27);
      if (*(int *)((uVar30 - 3) + (int64_t)puVar23) == *(int *)((int64_t)puVar21 + (uVar30 - 3)))
      {
        puVar25 = puVar21;
        if (puVar21 < puVar1) {
          if (*puVar23 == *puVar21) {
            puVar23 = (uint64_t *)(uStack_60 + uVar27);
            lVar15 = 8;
            puVar25 = puVar2;
            uVar8 = uStack_88;
            if (puVar2 < puVar1) {
LAB_7fffa55c8ba0:
              if (*puVar23 == *puVar25) goto code_r0x7fffa55c8bb1;
              uVar29 = 0;
              for (uVar8 = *puVar23 ^ *puVar25; (uVar8 & 1) == 0;
                  uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar26 = (uint64_t)(uVar29 >> 3) + lVar15;
              uVar8 = uStack_88;
              goto joined_r0x7fffa55c8c47;
            }
            goto joined_r0x7fffa55c8be6;
          }
          uVar29 = 0;
          for (uVar8 = *puVar23 ^ *puVar21; (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            uVar29 = uVar29 + 1;
          }
          uVar26 = (uint64_t)(uVar29 >> 3);
          uVar8 = uStack_88;
        }
        else {
joined_r0x7fffa55c8be6:
          if ((puVar25 < (uint64_t *)((int64_t)puStack_58 - 3U)) &&
             ((int)*puVar23 == (int)*puVar25)) {
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
            puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
          }
          if ((puVar25 < (uint64_t *)((int64_t)puStack_58 - 1U)) &&
             ((short)*puVar23 == (short)*puVar25)) {
            puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
          }
          if (puVar25 < puStack_58) {
            puVar25 = (uint64_t *)
                      ((int64_t)puVar25 + (uint64_t)((char)*puVar23 == (char)*puVar25));
            uVar8 = uStack_88;
          }
          uVar26 = (int64_t)puVar25 - (int64_t)puVar21;
        }
joined_r0x7fffa55c8c47:
        if ((uVar30 < uVar26) &&
           (*puStack_70 = (uint64_t)(((int)uStack_78 + 3) - uVar27), uVar30 = uVar26,
           (uint64_t *)((int64_t)puVar21 + uVar26) == puStack_58)) {
          return;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar20);
  }
  return;
code_r0x7fffa55c8bb1:
  puVar25 = puVar25 + 1;
  lVar15 = lVar15 + 8;
  puVar23 = puVar23 + 1;
  if (puVar1 <= puVar25) goto joined_r0x7fffa55c8be6;
  goto LAB_7fffa55c8ba0;
}


// ============================================================================
// Function : FUN_7fffa55c8ce0  |  RVA: 0xe58ce0  |  Size: 30 bytes
// Callers  : FUN_7fffa507ecd4@0x90ecd4, FUN_7fffa56a0618@0xf30618, FUN_7fffa52d3bb0@0xb63bb0, FUN_7fffa4f445c0@0x7d45c0, FUN_7fffa51450e0@0x9d50e0, FUN_7fffa5609524@0xe99524, FUN_7fffa4ecfc70@0x75fc70, FUN_7fffa5404bd0@0xc94bd0
// Callees  : FUN_7fffa52d5b14@0xb65b14
// ============================================================================
void FUN_7fffa55c8ce0(void)

{
  FUN_7fffa52d5b14(0,0,0,0,0);
  return;
}


// ============================================================================
// Function : FUN_7fffa55c8d00  |  RVA: 0xe58d00  |  Size: 139 bytes
// Callers  : FUN_7fffa54e570c@0xd7570c, FUN_7fffa5244778@0xad4778
// Callees  : FUN_7fffa50cbb30@0x95bb30
// ============================================================================
void FUN_7fffa55c8d00(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (uint64_t *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if ((puVar2[-2] != 0x7fffa47808f8) && (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_7fffa50cbb30(*(uint64_t *)(param_1 + 0x120));
  return;
}


// ============================================================================
// Function : FUN_7fffa55c8d90  |  RVA: 0xe58d90  |  Size: 8 bytes
// Callers  : FUN_7fffa5488850@0xd18850, FUN_7fffa5213cf0@0xaa3cf0
// Callees  : none
// ============================================================================
void FUN_7fffa55c8d90(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}


// ============================================================================
// Function : FUN_7fffa55c8d98  |  RVA: 0xe58d98  |  Size: 68 bytes
// Callers  : none
// Callees  : FUN_7fffa549cdb8@0xd2cdb8, FUN_7fffa4f5c658@0x7ec658, FUN_7fffa4fe38dc@0x8738dc, FUN_7fffa53eebb0@0xc7ebb0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa55c8d98(void)

{
  int64_t lVar1;
  
  DAT_7fffa4782178 = FUN_7fffa4fe38dc();
  _DAT_7fffa4780244 = FUN_7fffa549cdb8(FUN_7fffa5605af8);
  if (_DAT_7fffa4780244 != -1) {
    lVar1 = FUN_7fffa4f5c658();
    if (lVar1 != 0) {
      return 1;
    }
    FUN_7fffa53eebb0(0);
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa55c8de0  |  RVA: 0xe58de0  |  Size: 1171 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55c920d) */
/* WARNING: Removing unreachable block (ram,0x7fffa55c8e8b) */
/* WARNING: Removing unreachable block (ram,0x7fffa55c9160) */
/* WARNING: Removing unreachable block (ram,0x7fffa55c9242) */

void FUN_7fffa55c8de0(void)

{
  uint64_t uVar1;
  uint8_t *puVar2;
  
  uVar1 = uRam00007fffa47811e8 ^ 0xf54d64c0942a2778;
  uRam00007fffa47bade8 = 0x4d6cfdd0acb01fd2;
  uRam00007fffa47badc0 = 0x980bc055a2d1c723;
  uRam00007fffa47badd8 = 0x3c784aeda81636fa;
  uRam00007fffa47badc8 = 0x3077b8cbd307a41d;
  uRam00007fffa47bade0 = 0xf0f7e9e285049f61;
  uVar1 = (uVar1 << 0x18 | uVar1 >> 0x28) ^ (uVar1 << 0x22 | uVar1 >> 0x1e) ^
          (uVar1 << 0x13 | uVar1 >> 0x2d);
  uVar1 = (uVar1 << 10 | uVar1 >> 0x36) ^ (uVar1 << 0x1e | uVar1 >> 0x22) ^ uVar1;
  uVar1 = (uVar1 << 0x3c | uVar1 >> 4) ^ (uVar1 << 0x14 | uVar1 >> 0x2c) ^ uVar1;
  uVar1 = (uVar1 << 0x38 | uVar1 >> 8) ^ (uVar1 << 0x28 | uVar1 >> 0x18) ^ uVar1;
  puVar2 = &UNK_7fffa585a0f8 +
           ((uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1);
  uRam00007fffa47badb8 = (uint64_t)puVar2 >> 0x36 ^ (uint64_t)puVar2 >> 0x1b ^ (uint64_t)puVar2;
  uRam00007fffa47badd0 = 0x9e8303d4c00cff21;
  uVar1 = uRam00007fffa4781180 ^ 0xaf42eef1ad60138c;
  uVar1 = (uVar1 << 0x1d | uVar1 >> 0x23) ^ (uVar1 << 0x17 | uVar1 >> 0x29) ^ uVar1;
  uVar1 = (uVar1 << 0x2e | uVar1 >> 0x12) ^ (uVar1 << 0x3a | uVar1 >> 6) ^ uVar1;
  uVar1 = (uVar1 << 0x1c | uVar1 >> 0x24) ^ (uVar1 << 0x34 | uVar1 >> 0xc) ^ uVar1;
  uVar1 = (uVar1 << 0x38 | uVar1 >> 8) ^ (uVar1 << 0x28 | uVar1 >> 0x18) ^ uVar1;
  lRam00007fffa47badf0 =
       ((uVar1 << 0x30 | uVar1 >> 0x10) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1) +
       0xabb616623924efc1;
  return;
}


// ============================================================================
// Function : FUN_7fffa55c9280  |  RVA: 0xe59280  |  Size: 5533 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa55c9280(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint32_t uVar5;
  int64_t lVar6;
  uint64_t in_RAX;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint32_t uVar14;
  int64_t lVar15;
  bool bVar16;
  uint32_t uVar17;
  int iVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  int64_t lVar24;
  int iVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  uint64_t uVar30;
  int64_t lVar31;
  uint64_t *puVar32;
  int iVar33;
  uint32_t uVar34;
  int64_t in_R10;
  uint64_t *puVar35;
  uint64_t uVar36;
  uint64_t *puVar37;
  uint32_t uVar38;
  uint64_t uVar39;
  uint32_t uVar40;
  uint16_t uVar41;
  int64_t lVar42;
  bool bVar43;
  uint8_t auVar44 [16];
  char cVar45;
  uint8_t uVar48;
  char cVar49;
  uint8_t uVar50;
  char cVar51;
  uint8_t uVar52;
  char cVar53;
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint32_t auStack_1c8 [66];
  int64_t lStack_c0;
  uint64_t uStack_b8;
  uint32_t uStack_ac;
  int64_t lStack_a8;
  uint64_t uStack_a0;
  int iStack_98;
  uint32_t uStack_94;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int iStack_80;
  uint32_t uStack_7c;
  uint64_t *puStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  int iStack_4c;
  int64_t lStack_48;
  
  uStack_88._0_4_ = (uint32_t)in_RAX;
  param_4 = param_4 << 0x12 ^ param_4;
  puVar28 = (uint64_t *)((param_4 << 0x24 ^ param_4) * 0x8000400020001);
  uStack_ac = (uint32_t)uStack_88 | 1;
  puVar37 = (uint64_t *)(param_1 + 0x3ed3b0a0);
  if (((uint32_t)uStack_88 | 1) * 0xad4a133 == -0x1425fe6) {
    uStack_70 = (uint64_t)(((uint32_t)uStack_88 ^ 0x85006b99) * 0x5f3bf3cb);
  }
  else {
    uStack_70 = 0xfffffffff3a0a5ab;
  }
  uVar27 = *(uint32_t *)(in_R10 + 0x10c);
  iVar4 = *(int *)puVar37;
  uVar38 = 5;
  if (uVar27 < 5) {
    uVar38 = uVar27;
  }
  iVar25 = 1 << ((uint8_t)uVar38 & 0x1f);
  uVar26 = 1 << (*(uint8_t *)(in_R10 + 0x100) & 0x1f);
  lStack_a8 = *(int64_t *)(in_R10 + 0x70);
  uStack_60 = *(uint64_t *)(in_R10 + 0x60);
  iVar18 = *(int *)(in_R10 + 0x34);
  _iStack_80 = CONCAT44(uStack_7c,iVar18);
  uVar38 = *(uint32_t *)(in_R10 + 0x1c);
  lVar42 = *(int64_t *)(in_R10 + 0x38);
  iVar33 = 0;
  if (5 < uVar27) {
    iVar33 = 1 << ((char)uVar27 - 5U & 0x1f);
  }
  _iStack_98 = CONCAT44(uStack_94,iVar33);
  uVar41 = (short)uStack_70 + 0x5a55;
  bVar10 = (uint8_t)in_RAX;
  uVar22 = (uint32_t)uStack_70;
  uVar34 = uVar22 | 1;
  uVar17 = (uVar22 ^ 0xe0b77bbe) * 0x28d6e5bd;
  uVar14 = (0x4367c0ac - uVar22) + (uint32_t)uStack_88;
  lStack_c0 = *(int64_t *)(in_R10 + 8);
  uStack_68 = (int64_t)puVar37 - lStack_c0;
  uVar21 = (uint32_t)(iVar4 * -0x61c8864f) >>
           (0x22U - *(char *)(*(uint64_t **)(in_R10 + 0xf8) + 0x21) & 0x1f);
  uVar23 = (uint32_t)uStack_68;
  puStack_58 = *(uint64_t **)(in_R10 + 0xf8);
  uVar27 = uVar23 - uVar26;
  if (uVar23 - uVar38 <= uVar26) {
    uVar27 = uVar38;
  }
  if (*(uint32_t *)(in_R10 + 0x28) !=
      (uint32_t)(uint16_t)(uVar41 >> (bVar10 & 0xf) | uVar41 << 0x10 - (bVar10 & 0xf))) {
    uVar27 = uVar38;
  }
  uStack_b8 = (uint64_t)*(uint32_t *)(in_R10 + 0x18);
  uStack_90 = (uint64_t)(uVar21 >> 2);
  if (uVar34 * 0x50ec81d4 - (uint32_t)uStack_88 <= ~((uint32_t)uStack_88 ^ 0x81dbb294)) {
    uStack_90 = (uint64_t)uVar21 * 4;
  }
  bVar16 = 0 < *(int *)(in_R10 + 300);
  if ((uVar14 * 0x8000000 | uVar14 >> 5) <
      (uVar17 << (bVar10 & 0x1f) | uVar17 >> 0x20 - (bVar10 & 0x1f))) {
    bVar16 = *(int *)(in_R10 + 300) == 0;
  }
  uStack_60._0_4_ = (uint32_t)*(uint64_t *)(in_R10 + 0x60);
  bVar9 = (uint8_t)uStack_70;
  if (bVar16) {
    lVar31 = in_R10 + 0x40;
    uVar38 = *(uint32_t *)(in_R10 + 0x2c);
    uVar36 = (uint64_t)uVar38;
    lVar11 = lStack_a8;
    lVar15 = lVar42;
    if (0x180 < uVar23 - uVar38) {
      if (uVar38 < 0xffffffa0) {
        uVar39 = uVar36 + 0x60;
        do {
          uVar38 = (uint32_t)uVar36;
          if ((uVar22 ^ 0x2ad6c7b5) * 0x46159621 + (uint32_t)uStack_88 == 0x64648730) {
            uVar14 = (-0x594091f9 << (bVar9 & 0x1f) | 0xa6bf6e07U >> 0x20 - (bVar9 & 0x1f)) +
                     (uint32_t)uStack_88;
            uVar19 = (uint64_t)(uVar38 & 7);
            uVar26 = *(uint32_t *)(lVar31 + uVar19 * 4);
          }
          else {
            uVar19 = (uint64_t)(uVar38 & 7);
            uVar26 = *(uint32_t *)(lVar31 + uVar19 * 4);
            uVar14 = (0x2c00376dU >> (bVar9 & 0x1f) | 0x2c00376d << 0x20 - (bVar9 & 0x1f)) ^
                     (uint32_t)uStack_88;
          }
          *(uint32_t *)(lVar31 + uVar19 * 4) =
               (*(int *)(lStack_c0 + 8 + uVar36) * -0x61c8864f ^ *(uint32_t *)(in_R10 + 0x60)) >>
               (0x18U - (char)iVar18 & 0x1f);
          uVar14 = (0x3c9ad6b - uVar14) + (uint32_t)uStack_88;
          uVar19 = (uint64_t)(uVar26 >> 3 & 0xffffffe0);
          uVar17 = 0;
          if ((*(uint8_t *)(lVar42 + uVar19) & 0x1f) == 1) {
            uVar17 = 0x1f;
          }
          uVar40 = (uint32_t)(*(uint8_t *)(lVar42 + uVar19) - 1 & 0x1f);
          uVar21 = uVar17 ^ uVar40;
          if ((-0x7f023f71 << (bVar10 & 0x1f) | 0x80fdc08fU >> 0x20 - (bVar10 & 0x1f)) <=
              (uVar14 * 0x400 | uVar14 >> 0x16)) {
            uVar21 = uVar17 + uVar40;
          }
          *(char *)(lVar42 + uVar19) = (char)uVar21;
          *(char *)((uint64_t)uVar21 + lVar42 + uVar19) = (char)uVar26;
          *(uint32_t *)(lStack_a8 + uVar19 * 4 + (uint64_t)uVar21 * 4) = uVar38;
          uVar36 = uVar36 + 1;
        } while (uVar39 != uVar36);
        lVar15 = *(int64_t *)(in_R10 + 0x38);
        lVar11 = *(int64_t *)(in_R10 + 0x70);
      }
      uVar38 = uVar23 - 0x20;
      uVar36 = (uint64_t)uVar38;
      piVar2 = (int *)(lStack_c0 + uVar36);
      uVar14 = (uint32_t)(int *)(param_1 + 0x3ed3b0a1U);
      uVar26 = uVar14 | (uint32_t)piVar2;
      if ((uint64_t)(((uVar22 + 0x144c2183 ^ 0x127aedeb) - (uint32_t)uStack_88) * 0x6dc7007f) <
          (uint64_t)(int64_t)(int)(((uint32_t)uStack_88 + 0xe6f0b210) * uVar34)) {
        uVar26 = uVar14 - (uint32_t)piVar2;
      }
      uVar14 = 8;
      if (uVar26 + 1 < 8) {
        uVar14 = uVar26 + 1;
      }
      uVar26 = 0;
      if (piVar2 <= (int *)(param_1 + 0x3ed3b0a1U)) {
        uVar26 = uVar14;
      }
      uVar14 = (uVar23 + uVar26) - 0x20;
      if (uVar34 * 0x355553d7 + 0xdd1a521d < ((uVar22 ^ 0xfefa7bfe) - (uint32_t)uStack_88 ^ 0xc0000026))
      {
        uVar14 = uVar38 & uVar26;
      }
      uStack_a0 = (uint64_t)uVar14;
      if (uVar38 < uVar14) {
        bVar10 = 0x18 - (char)*(uint32_t *)(in_R10 + 0x34);
        uVar17 = *(uint32_t *)(in_R10 + 0x60);
        if ((uVar26 & 1) != 0) {
          uVar36 = uVar36 + 1;
          *(uint32_t *)(lVar31 + (uint64_t)(uVar38 & 7) * 4) =
               (*piVar2 * -0x61c8864f ^ uVar17) >> (bVar10 & 0x1f);
        }
        if (uVar26 != 1) {
          uStack_a0 = (uint64_t)(uVar14 - 2);
          while( true ) {
            uVar26 = (uint32_t)uVar36;
            *(uint32_t *)(lVar31 + (uint64_t)(uVar26 & 7) * 4) =
                 (*(int *)(lStack_c0 + uVar36) * -0x61c8864f ^ uVar17) >> (bVar10 & 0x1f);
            *(uint32_t *)(lVar31 + (uint64_t)(uVar26 + 1 & 7) * 4) =
                 (*(int *)(lStack_c0 + 1 + uVar36) * -0x61c8864f ^ uVar17) >> (bVar10 & 0x1f);
            if (uVar14 - 2 == uVar26) break;
            uVar36 = uVar36 + 2;
          }
        }
      }
    }
    if (uVar38 < uVar23) {
      lVar6 = *(int64_t *)(in_R10 + 8);
      uVar36 = (uint64_t)uVar38;
      uVar5 = *(uint32_t *)(in_R10 + 0x34);
      uStack_a0 = uStack_68 & 0xffffffff;
      while( true ) {
        uVar39 = (uint64_t)((uint32_t)uVar36 & 7);
        uVar38 = *(uint32_t *)(in_R10 + 0x40 + uVar39 * 4);
        *(uint32_t *)(in_R10 + 0x40 + uVar39 * 4) =
             (*(int *)(lVar6 + 8 + uVar36) * -0x61c8864f ^ *(uint32_t *)(in_R10 + 0x60)) >>
             (0x18U - (char)uVar5 & 0x1f);
        uVar39 = (uint64_t)(uVar38 >> 3 & 0xffffffe0);
        lVar24 = 0;
        if ((*(uint8_t *)(lVar15 + uVar39) & 0x1f) == 1) {
          lVar24 = 0x1f;
        }
        lVar24 = (uint64_t)(*(uint8_t *)(lVar15 + uVar39) - 1 & 0x1f) + lVar24;
        *(char *)(lVar15 + uVar39) = (char)lVar24;
        *(char *)(lVar15 + uVar39 + lVar24) = (char)uVar38;
        *(uint32_t *)(uVar39 * 4 + lVar11 + lVar24 * 4) = (uint32_t)uVar36;
        if ((uStack_68 & 0xffffffff) - 1 == uVar36) break;
        uVar36 = uVar36 + 1;
      }
    }
    if ((int64_t)(uint64_t)(((uint32_t)uStack_88 ^ 0x64c89a66) * uVar34 + 0x73df92ae) <
        (int64_t)
        (int)((uint32_t)uStack_88 + 0xbca3a0db >> (bVar9 & 0x1f) |
             (uint32_t)uStack_88 + 0xbca3a0db << 0x20 - (bVar9 & 0x1f))) {
      *(uint32_t *)(in_R10 + 0x2c) = uVar23;
    }
    else {
      *(uint32_t *)(in_R10 + 0x2c) = uVar23;
    }
    uVar38 = *(uint32_t *)(lVar31 + (uint64_t)(uVar23 & 7) * 4);
    *(uint32_t *)(lVar31 + (uint64_t)(uVar23 & 7) * 4) =
         (*(int *)(lStack_c0 + 8 + (uStack_68 & 0xffffffff)) * -0x61c8864f ^ (uint32_t)uStack_60) >>
         (0x18U - (char)iVar18 & 0x1f);
  }
  else {
    *(uint32_t *)(in_R10 + 0x2c) = uVar23;
    uVar38 = (iVar4 * -0x61c8864f ^ (uint32_t)uStack_60) >> (uint64_t)(0x18 - iVar18);
  }
  uVar26 = *(uint32_t *)(in_R10 + 0x68) + uVar38;
  if (((uint32_t)uStack_88 ^ 0x922eac8f) - uVar22 <
      ((uint32_t)uStack_88 + 0xed2252be >> (bVar9 & 0x1f) |
      (uint32_t)uStack_88 + 0xed2252be << 0x20 - (bVar9 & 0x1f)) + 0x1c3ba146) {
    uVar26 = uVar38 | *(uint32_t *)(in_R10 + 0x68);
  }
  *(uint32_t *)(in_R10 + 0x68) = uVar26;
  uVar52 = (uint8_t)(uVar38 >> 0x18);
  uVar50 = (uint8_t)(uVar38 >> 0x10);
  uVar48 = (uint8_t)(uVar38 >> 8);
  auVar46._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar52,uVar52),uVar50),CONCAT14(uVar50,uVar38)) >> 0x20);
  auVar46[3] = uVar48;
  auVar46[2] = uVar48;
  auVar46[0] = (uint8_t)uVar38;
  auVar46[1] = auVar46[0];
  auVar46._8_8_ = 0;
  auVar47 = pshuflw(auVar46,auVar46,0);
  uVar36 = (uint64_t)(uVar38 >> 3 & 0xffffffe0);
  lVar31 = lStack_a8 + uVar36 * 4;
  bVar10 = *(uint8_t *)(lVar42 + uVar36);
  pcVar1 = (char *)(lVar42 + uVar36);
  pcVar3 = (char *)(lVar42 + 0x10 + uVar36);
  cVar45 = auVar47[0];
  auVar44[0] = -(*pcVar1 == cVar45);
  cVar49 = auVar47[1];
  auVar44[1] = -(pcVar1[1] == cVar49);
  cVar51 = auVar47[2];
  auVar44[2] = -(pcVar1[2] == cVar51);
  cVar53 = auVar47[3];
  auVar44[3] = -(pcVar1[3] == cVar53);
  auVar44[4] = -(pcVar1[4] == cVar45);
  auVar44[5] = -(pcVar1[5] == cVar49);
  auVar44[6] = -(pcVar1[6] == cVar51);
  auVar44[7] = -(pcVar1[7] == cVar53);
  auVar44[8] = -(pcVar1[8] == cVar45);
  auVar44[9] = -(pcVar1[9] == cVar49);
  auVar44[10] = -(pcVar1[10] == cVar51);
  auVar44[0xb] = -(pcVar1[0xb] == cVar53);
  auVar44[0xc] = -(pcVar1[0xc] == cVar45);
  auVar44[0xd] = -(pcVar1[0xd] == cVar49);
  auVar44[0xe] = -(pcVar1[0xe] == cVar51);
  auVar44[0xf] = -(pcVar1[0xf] == cVar53);
  auVar47[0] = -(*pcVar3 == cVar45);
  auVar47[1] = -(pcVar3[1] == cVar49);
  auVar47[2] = -(pcVar3[2] == cVar51);
  auVar47[3] = -(pcVar3[3] == cVar53);
  auVar47[4] = -(pcVar3[4] == cVar45);
  auVar47[5] = -(pcVar3[5] == cVar49);
  auVar47[6] = -(pcVar3[6] == cVar51);
  auVar47[7] = -(pcVar3[7] == cVar53);
  auVar47[8] = -(pcVar3[8] == cVar45);
  auVar47[9] = -(pcVar3[9] == cVar49);
  auVar47[10] = -(pcVar3[10] == cVar51);
  auVar47[0xb] = -(pcVar3[0xb] == cVar53);
  auVar47[0xc] = -(pcVar3[0xc] == cVar45);
  auVar47[0xd] = -(pcVar3[0xd] == cVar49);
  auVar47[0xe] = -(pcVar3[0xe] == cVar51);
  auVar47[0xf] = -(pcVar3[0xf] == cVar53);
  uVar38 = CONCAT22((uint16_t)(SUB161(auVar47 >> 7,0) & 1) |
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
                    (uint16_t)(auVar47[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar44 >> 7,0) & 1) |
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
                    (uint16_t)(auVar44[0xf] >> 7) << 0xf);
  if (uVar38 == 0) {
    lVar15 = 0;
  }
  else {
    uVar39 = (uint64_t)(uVar38 >> (bVar10 & 0x1f) | uVar38 << 0x20 - (bVar10 & 0x1f));
    lVar15 = 0;
    uStack_88 = in_RAX;
    do {
      iVar4 = 0;
      for (uVar19 = uVar39; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
        iVar4 = iVar4 + 1;
      }
      uVar38 = iVar4 + (uint32_t)bVar10 & 0x1f;
      if (uVar38 != 0) {
        uVar38 = *(uint32_t *)(lVar31 + (uint64_t)uVar38 * 4);
        if (uVar38 < uVar27) break;
        iVar25 = iVar25 + -1;
        auStack_1c8[lVar15] = uVar38;
        lVar15 = lVar15 + 1;
      }
      uVar39 = uVar39 & uVar39 - 1;
    } while (uVar39 != 0 && iVar25 != 0);
  }
  iStack_4c = iVar25;
  lVar11 = 0x1f;
  if ((bVar10 & 0x1f) != 1) {
    lVar11 = 0;
  }
  lVar11 = lVar11 + (uint64_t)(bVar10 - 1 & 0x1f);
  *(uint8_t *)(lVar42 + uVar36) = (char)lVar11;
  ((uint8_t *)(lVar42 + uVar36))[lVar11] = auVar46[0];
  iVar4 = *(int *)(in_R10 + 0x2c);
  *(int *)(in_R10 + 0x2c) = iVar4 + 1;
  *(int *)(lVar31 + lVar11 * 4) = iVar4;
  iVar4 = (int)uStack_68;
  if (lVar15 == 0) {
    uVar36 = 3;
  }
  else {
    puStack_78 = (uint64_t *)(param_1 + 0x3ed3b0a8);
    lStack_48 = lStack_c0 + 8;
    uVar39 = 3;
    lVar42 = 0;
    do {
      uVar27 = auStack_1c8[lVar42];
      puVar29 = (uint64_t *)(lStack_c0 + (uint64_t)uVar27);
      if (*(int *)((uVar39 - 3) + (int64_t)puVar29) == *(int *)(param_1 + 0x3ed3b09d + uVar39)) {
        puVar35 = puVar37;
        if (puVar37 < (uint64_t *)((int64_t)puVar28 - 7U)) {
          if (*puVar29 == *puVar37) {
            puVar29 = (uint64_t *)(lStack_c0 + 8 + (uint64_t)uVar27);
            puVar32 = puVar37;
            puVar35 = (uint64_t *)(param_1 + 0x3ed3b0a8);
            do {
              if ((uint64_t *)((int64_t)puVar28 - 7U) <= puVar35) goto joined_r0x7fffa55c9d77;
              uVar36 = *puVar29;
              uVar19 = *puVar35;
              puVar35 = puVar35 + 1;
              puVar32 = puVar32 + 1;
              puVar29 = puVar29 + 1;
            } while (uVar36 == uVar19);
            uVar38 = 0;
            for (uVar19 = uVar19 ^ uVar36; (uVar19 & 1) == 0;
                uVar19 = uVar19 >> 1 | 0x8000000000000000) {
              uVar38 = uVar38 + 1;
            }
            uVar36 = (int64_t)puVar32 + ((uint64_t)(uVar38 >> 3) - (int64_t)puVar37);
          }
          else {
            uVar38 = 0;
            for (uVar36 = *puVar37 ^ *puVar29; (uVar36 & 1) == 0;
                uVar36 = uVar36 >> 1 | 0x8000000000000000) {
              uVar38 = uVar38 + 1;
            }
            uVar36 = (uint64_t)(uVar38 >> 3);
          }
        }
        else {
joined_r0x7fffa55c9d77:
          if ((puVar35 < (uint64_t *)((int64_t)puVar28 - 3U)) && ((int)*puVar29 == (int)*puVar35))
          {
            puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
          }
          if ((puVar35 < (uint64_t *)((int64_t)puVar28 - 1U)) &&
             ((short)*puVar29 == (short)*puVar35)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
          }
          if (puVar35 < puVar28) {
            puVar35 = (uint64_t *)
                      ((int64_t)puVar35 + (uint64_t)((char)*puVar29 == (char)*puVar35));
          }
          uVar36 = (int64_t)puVar35 - (int64_t)puVar37;
        }
        if (uVar39 < uVar36) {
          bVar10 = (uint8_t)(uint32_t)uStack_88 & 0x1f;
          uVar27 = (iVar4 + 3) - uVar27;
          bVar9 = (uint8_t)(uint32_t)uStack_88 & 0x1f;
          uVar39 = (int64_t)(int)uVar27;
          if ((int64_t)
              (int)((0x260e592bU >> bVar9 | 0x260e592b << 0x20 - bVar9) * 0x5b9dce13 ^
                   (uint32_t)uStack_70) <
              (int64_t)
              (uint64_t)
              ((uVar34 * 0x247a9f82 << bVar10 | uVar34 * 0x247a9f82 >> 0x20 - bVar10) + 0xef231304))
          {
            uVar39 = (uint64_t)uVar27;
          }
          *param_2 = uVar39;
          uVar39 = uVar36;
          if ((uint64_t *)((int64_t)puVar37 + uVar36) == puVar28) break;
        }
      }
      lVar42 = lVar42 + 1;
      uVar36 = uVar39;
    } while (lVar42 != lVar15);
  }
  puVar29 = (uint64_t *)(lStack_c0 + uStack_b8);
  pcVar1 = (char *)*puStack_58;
  lVar42 = puStack_58[1];
  uVar27 = *(uint32_t *)(puStack_58[0xe] + 0xc + uStack_90 * 4);
  iVar18 = ((int)pcVar1 - (int)lVar42) - (int)uStack_b8;
  uVar38 = iVar25 + iStack_98;
  if (uVar38 == 0) {
    iVar33 = 0;
  }
  else {
    puVar35 = (uint64_t *)(param_1 + 0x3ed3b0a4);
    uVar39 = 3;
    if (uVar38 < 3) {
      uVar39 = (uint64_t)uVar38;
    }
    uVar19 = 0;
    do {
      uVar27 = *(uint32_t *)(puStack_58[0xe] + uStack_90 * 4 + uVar19 * 4);
      uVar12 = uVar36;
      if ((uint64_t)uVar27 == 0) goto LAB_7fffa55ca7ec;
      piVar2 = (int *)(lVar42 + (uint64_t)uVar27);
      if (*piVar2 == *(int *)puVar37) {
        puVar32 = (uint64_t *)(piVar2 + 1);
        puVar7 = (uint64_t *)(((int64_t)pcVar1 - (int64_t)puVar32) + (int64_t)puVar35);
        if (puVar28 <= puVar7) {
          puVar7 = puVar28;
        }
        puVar8 = puVar35;
        puVar13 = puVar32;
        if (puVar35 < (uint64_t *)((int64_t)puVar7 - 7U)) {
          if (*puVar32 == *puVar35) {
            lVar31 = 0xc;
LAB_7fffa55ca050:
            puVar8 = (uint64_t *)((int64_t)puVar37 + lVar31);
            if (puVar8 < (uint64_t *)((int64_t)puVar7 - 7U)) {
              if (*(uint64_t *)((int64_t)piVar2 + lVar31) == *puVar8) goto code_r0x7fffa55ca069;
              uVar26 = 0;
              for (uVar12 = *puVar8 ^ *(uint64_t *)((int64_t)piVar2 + lVar31); (uVar12 & 1) == 0;
                  uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                uVar26 = uVar26 + 1;
              }
              uVar12 = ((uint64_t)(uVar26 >> 3) + lVar31) - 4;
              goto LAB_7fffa55ca19c;
            }
            puVar13 = (uint64_t *)((int64_t)piVar2 + lVar31);
            goto LAB_7fffa55ca075;
          }
          uVar26 = 0;
          for (uVar12 = *puVar35 ^ *puVar32; (uVar12 & 1) == 0;
              uVar12 = uVar12 >> 1 | 0x8000000000000000) {
            uVar26 = uVar26 + 1;
          }
          uVar12 = (uint64_t)(uVar26 >> 3);
        }
        else {
LAB_7fffa55ca075:
          if ((puVar8 < (uint64_t *)((int64_t)puVar7 - 3U)) && ((int)*puVar13 == (int)*puVar8)) {
            puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
            puVar8 = (uint64_t *)((int64_t)puVar8 + 4);
          }
          if (puVar8 < (uint64_t *)((int64_t)puVar7 - 1U)) {
            bVar16 = (short)*puVar13 == (short)*puVar8;
            if (uVar34 * 0x7d98bf2e + 0xc000011d <=
                ~((0x59921ff9 - (uint32_t)uStack_70) * 0x200 | 0x59921ff9 - (uint32_t)uStack_70 >> 0x17)) {
              bVar16 = (short)*puVar13 < (short)*puVar8;
            }
            if (bVar16) {
              puVar8 = (uint64_t *)((int64_t)puVar8 + 2);
              puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
            }
          }
          if (puVar8 < puVar7) {
            bVar16 = (char)*puVar13 == (char)*puVar8;
            if ((uVar34 * -0x6c8c4ee9 + 0x7ffe0008 ^ 0xd285e447) * uStack_ac <
                ~((0xb347afd0 - (uint32_t)uStack_88) * 0x80 | 0xb347afd0 - (uint32_t)uStack_88 >> 0x19) *
                uVar34) {
              bVar16 = (char)*puVar13 <= (char)*puVar8;
            }
            puVar8 = (uint64_t *)((int64_t)puVar8 + (uint64_t)bVar16);
          }
          uVar12 = (int64_t)puVar8 - (int64_t)puVar35;
        }
LAB_7fffa55ca19c:
        if ((char *)((int64_t)puVar32 + uVar12) == pcVar1) {
          puVar32 = (uint64_t *)((int64_t)puVar35 + uVar12);
          puVar7 = puVar32;
          puVar8 = puVar29;
          if (puVar32 < (uint64_t *)((int64_t)puVar28 - 7U)) {
            if (*puVar29 == *puVar32) {
              puVar7 = (uint64_t *)(param_1 + 0x3ed3b0ac + uVar12);
              lVar31 = 8;
code_r0x7fffa55ca201:
              if (puVar7 < (uint64_t *)((int64_t)puVar28 - 7U)) {
                if (*(uint64_t *)((int64_t)puVar29 + lVar31) == *puVar7)
                goto code_r0x7fffa55ca229;
                uVar26 = 0;
                for (uVar30 = *(uint64_t *)((int64_t)puVar29 + lVar31) ^ *puVar7;
                    (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                  uVar26 = uVar26 + 1;
                }
                uVar30 = (uint64_t)(uVar26 >> 3) + lVar31;
                goto LAB_7fffa55ca2b5;
              }
              puVar8 = (uint64_t *)(lVar31 + (int64_t)puVar29);
              goto LAB_7fffa55ca23b;
            }
            uVar26 = 0;
            for (uVar30 = *puVar32 ^ *puVar29; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar30 = (uint64_t)(uVar26 >> 3);
          }
          else {
LAB_7fffa55ca23b:
            if ((puVar7 < (uint64_t *)((int64_t)puVar28 - 3U)) && ((int)*puVar8 == (int)*puVar7))
            {
              puVar8 = (uint64_t *)((int64_t)puVar8 + 4);
              puVar7 = (uint64_t *)((int64_t)puVar7 + 4);
            }
            if ((puVar7 < (uint64_t *)((int64_t)puVar28 - 1U)) &&
               ((short)*puVar8 == (short)*puVar7)) {
              puVar8 = (uint64_t *)((int64_t)puVar8 + 2);
              puVar7 = (uint64_t *)((int64_t)puVar7 + 2);
            }
            if (puVar7 < puVar28) {
              puVar7 = (uint64_t *)((int64_t)puVar7 + (uint64_t)((char)*puVar8 == (char)*puVar7))
              ;
            }
            uVar30 = (int64_t)puVar7 - (int64_t)puVar32;
          }
LAB_7fffa55ca2b5:
          uVar12 = uVar12 + uVar30;
        }
        uVar12 = uVar12 + 4;
        if (uVar36 < uVar12) {
          *param_2 = (uint64_t)((iVar4 + iVar18 + 3) - uVar27);
          uVar36 = uVar12;
          if ((uint64_t *)((int64_t)puVar37 + uVar12) == puVar28) goto LAB_7fffa55ca7ec;
        }
      }
      bVar43 = uVar39 <= uVar19;
      uVar19 = uVar19 + 1;
      bVar10 = (uint8_t)uStack_70 & 0x1f;
      uVar27 = uStack_ac * -0x300c212e + 0xa33ddb6d;
      bVar9 = (uint8_t)uStack_70 & 0x1f;
      bVar16 = uVar19 == uVar39;
      if ((((uint32_t)uStack_88 ^ 0xb70431c8) >> bVar10 |
          ((uint32_t)uStack_88 ^ 0xb70431c8) << 0x20 - bVar10) + 0xd2b2502c <=
          (uVar27 >> bVar9 | uVar27 << 0x20 - bVar9) + 0xe1b0afd9) {
        bVar16 = bVar43;
      }
    } while (!bVar16);
    uVar27 = *(uint32_t *)(puStack_58[0xe] + (uStack_90 | 3) * 4);
    iVar33 = (int)uVar39;
  }
  uVar26 = uVar38 - iVar33;
  if ((uVar27 & 0xff) <= uVar38 - iVar33) {
    uVar26 = uVar27 & 0xff;
  }
  uVar12 = uVar36;
  if (uVar26 == 0) {
LAB_7fffa55ca7ec:
    uVar12 = (uVar12 << 0xd | uVar12 >> 0x33) ^ (uVar12 << 0x36 | uVar12 >> 10) ^ uVar12;
    return (uVar12 << 0x2a | uVar12 >> 0x16) ^ (uVar12 << 0xd | uVar12 >> 0x33) ^ uVar12;
  }
  if (7 < uVar26) {
    uVar39 = 0;
    do {
      uVar39 = uVar39 + 8;
    } while ((uVar26 & 0xf8) != uVar39);
  }
  if ((uint64_t)(uVar26 & 7) != 0) {
    for (lVar31 = 0; (uint64_t)(uVar26 & 7) * 4 + -4 != lVar31; lVar31 = lVar31 + 4) {
    }
  }
  uVar39 = (uint64_t)(uVar27 >> 8);
  puVar35 = (uint64_t *)(param_1 + 0x3ed3b0a4);
  iVar33 = *(int *)puVar37;
  uVar27 = 0;
  do {
    uVar38 = *(uint32_t *)(puStack_58[0x10] + uVar39 * 4);
    uVar19 = (uint64_t)uVar38;
    if (*(int *)(lVar42 + uVar19) == iVar33) {
      puVar7 = (uint64_t *)(lVar42 + uVar19 + 4);
      puVar32 = (uint64_t *)(((int64_t)pcVar1 - (int64_t)puVar7) + (int64_t)puVar35);
      if (puVar28 <= puVar32) {
        puVar32 = puVar28;
      }
      puVar8 = puVar7;
      puVar13 = puVar35;
      if (puVar35 < (uint64_t *)((int64_t)puVar32 - 7U)) {
        if (*puVar7 == *puVar35) {
          puVar8 = (uint64_t *)(lVar42 + 0xc + uVar19);
          puVar13 = (uint64_t *)(param_1 + 0x3ed3b0ac);
          puVar20 = puVar35;
          do {
            if ((uint64_t *)((int64_t)puVar32 - 7U) <= puVar13) goto LAB_7fffa55ca5c0;
            uVar19 = *puVar13;
            uVar12 = *puVar8;
            puVar13 = puVar13 + 1;
            puVar20 = puVar20 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar12 == uVar19);
          uVar14 = 0;
          for (uVar12 = uVar12 ^ uVar19; (uVar12 & 1) == 0;
              uVar12 = uVar12 >> 1 | 0x8000000000000000) {
            uVar14 = uVar14 + 1;
          }
          uVar12 = (int64_t)puVar20 + ((uint64_t)(uVar14 >> 3) - (int64_t)puVar35);
        }
        else {
          uVar14 = 0;
          for (uVar19 = *puVar35 ^ *puVar7; (uVar19 & 1) == 0;
              uVar19 = uVar19 >> 1 | 0x8000000000000000) {
            uVar14 = uVar14 + 1;
          }
          uVar12 = (uint64_t)(uVar14 >> 3);
        }
      }
      else {
LAB_7fffa55ca5c0:
        if ((puVar13 < (uint64_t *)((int64_t)puVar32 - 3U)) && ((int)*puVar8 == (int)*puVar13)) {
          puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
          puVar8 = (uint64_t *)((int64_t)puVar8 + 4);
        }
        if ((puVar13 < (uint64_t *)((int64_t)puVar32 - 1U)) && ((short)*puVar8 == (short)*puVar13)
           ) {
          puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
          puVar8 = (uint64_t *)((int64_t)puVar8 + 2);
        }
        if (puVar13 < puVar32) {
          puVar13 = (uint64_t *)((int64_t)puVar13 + (uint64_t)((char)*puVar8 == (char)*puVar13));
        }
        uVar12 = (int64_t)puVar13 - (int64_t)puVar35;
      }
      if ((char *)((int64_t)puVar7 + uVar12) == pcVar1) {
        puVar32 = (uint64_t *)((int64_t)puVar35 + uVar12);
        puVar8 = puVar32;
        puVar7 = puVar29;
        if (puVar32 < (uint64_t *)((int64_t)puVar28 - 7U)) {
          uVar19 = *puVar29;
          uVar30 = *puVar32;
          bVar16 = (int64_t)uVar30 <= (int64_t)uVar19;
          if (((uVar34 * -0x6b33335f ^ (uint32_t)uStack_88) * 0x12b55103 ^ 0x789c1f81) <
              (((uint32_t)uStack_70 + 0x31b87ae1) * 0x10000 | (uint32_t)uStack_70 + 0x31b87ae1 >> 0x10) *
              uStack_ac) {
            bVar16 = uVar19 == uVar30;
          }
          if (bVar16) {
            puVar8 = (uint64_t *)(param_1 + 0x3ed3b0ac + uVar12);
            lVar31 = (int64_t)puVar35 + uVar12;
            puVar7 = (uint64_t *)(uStack_b8 + lStack_c0);
            do {
              puVar7 = puVar7 + 1;
              if ((uint64_t *)((int64_t)puVar28 - 7U) <= puVar8) goto LAB_7fffa55ca751;
              uVar19 = *puVar8;
              puVar8 = puVar8 + 1;
              lVar31 = lVar31 + 8;
            } while (*puVar7 == uVar19);
            uVar14 = 0;
            for (uVar19 = uVar19 ^ *puVar7; (uVar19 & 1) == 0;
                uVar19 = uVar19 >> 1 | 0x8000000000000000) {
              uVar14 = uVar14 + 1;
            }
            uVar19 = ((uint64_t)(uVar14 >> 3) + lVar31) - (int64_t)puVar32;
          }
          else {
            uVar14 = 0;
            for (uVar19 = uVar19 ^ uVar30; (uVar19 & 1) == 0;
                uVar19 = uVar19 >> 1 | 0x8000000000000000) {
              uVar14 = uVar14 + 1;
            }
            uVar19 = (uint64_t)(uVar14 >> 3);
          }
        }
        else {
LAB_7fffa55ca751:
          if ((puVar8 < (uint64_t *)((int64_t)puVar28 - 3U)) && ((int)*puVar7 == (int)*puVar8)) {
            puVar8 = (uint64_t *)((int64_t)puVar8 + 4);
            puVar7 = (uint64_t *)((int64_t)puVar7 + 4);
          }
          if ((puVar8 < (uint64_t *)((int64_t)puVar28 - 1U)) && ((short)*puVar7 == (short)*puVar8)
             ) {
            puVar7 = (uint64_t *)((int64_t)puVar7 + 2);
            puVar8 = (uint64_t *)((int64_t)puVar8 + 2);
          }
          if (puVar8 < puVar28) {
            puVar8 = (uint64_t *)((int64_t)puVar8 + (uint64_t)((char)*puVar7 == (char)*puVar8));
          }
          uVar19 = (int64_t)puVar8 - (int64_t)puVar32;
        }
        uVar12 = uVar12 + uVar19;
      }
      uVar12 = uVar12 + 4;
      if (uVar36 < uVar12) {
        *param_2 = (uint64_t)((iVar4 + 3 + iVar18) - uVar38);
        if ((uint64_t *)((int64_t)puVar37 + uVar12) == puVar28) goto LAB_7fffa55ca7ec;
        iVar33 = *(int *)puVar37;
        uVar36 = uVar12;
      }
    }
    uVar27 = uVar27 + 1;
    uVar12 = uVar36;
    if (uVar27 == uVar26) goto LAB_7fffa55ca7ec;
    uVar39 = uVar39 + 1;
  } while( true );
code_r0x7fffa55ca069:
  lVar31 = lVar31 + 8;
  goto LAB_7fffa55ca050;
code_r0x7fffa55ca229:
  puVar7 = puVar7 + 1;
  lVar31 = lVar31 + 8;
  goto code_r0x7fffa55ca201;
}


// ============================================================================
// Function : FUN_7fffa55ca84c  |  RVA: 0xe5a84c  |  Size: 862 bytes
// Callers  : FUN_7fffa4f445c0@0x7d45c0
// Callees  : FUN_7fffa56606b8@0xef06b8, FUN_7fffa52d20c0@0xb620c0, FUN_7fffa564c5c0@0xedc5c0, FUN_7fffa5244e38@0xad4e38, FUN_7fffa5216e00@0xaa6e00, FUN_7fffa5488850@0xd18850, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa55ca84c(char *param_1,char *param_2,int64_t *param_3)

{
  uint8_t bVar1;
  char *pcVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint8_t bVar9;
  uint64_t uVar10;
  uint8_t auStack_378 [32];
  uint64_t uStack_358;
  uint32_t uStack_350;
  uint8_t auStack_348 [8];
  uint64_t uStack_340;
  uint64_t uStack_338;
  uint64_t uStack_330;
  uint64_t uStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  char cStack_310;
  int64_t lStack_308;
  int64_t lStack_300;
  char cStack_2f0;
  int64_t lStack_2e8;
  int64_t lStack_2e0;
  char cStack_2d0;
  uint64_t uStack_2c8;
  uint64_t uStack_2c0;
  char *pcStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  char cStack_2a0;
  uint8_t auStack_298 [44];
  uint8_t auStack_26c [548];
  uint64_t uStack_48;
  
  uStack_48 = _DAT_7fffa4780040 ^ (uint64_t)auStack_378;
  while ((param_2 != param_1 &&
         ((0x2d < (uint8_t)(*param_2 - 0x2fU) ||
          ((0x200000000801U >> ((int64_t)(char)(*param_2 - 0x2fU) & 0x3fU) & 1) == 0))))) {
    param_2 = (char *)FUN_7fffa52d20c0(param_1);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    FUN_7fffa56606b8(param_1,0,0,param_3);
  }
  else {
    bVar9 = *param_2 - 0x2f;
    if ((0x2d < bVar9) || (bVar1 = 1, (0x200000000801U >> ((int64_t)(char)bVar9 & 0x3fU) & 1) == 0)
       ) {
      bVar1 = 0;
    }
    uVar10 = -(uint64_t)bVar1 & (uint64_t)(param_2 + (1 - (int64_t)param_1));
    uStack_340 = uVar10;
    FUN_7fffa4ecf8e0(auStack_298,0,0x250);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    cStack_310 = '\0';
    FUN_7fffa564c5c0(&lStack_308,0);
    if (*(int *)(lStack_300 + 0xc) == 0xfde9) {
      if (cStack_2f0 != '\0') {
        *(uint32_t *)(lStack_308 + 0x3a8) = *(uint32_t *)(lStack_308 + 0x3a8) & 0xfffffffd;
      }
      uVar5 = 0xfde9;
    }
    else {
      iVar3 = FUN_7fffa52d9094();
      if (iVar3 == 0) {
        if (cStack_2f0 != '\0') {
          *(uint32_t *)(lStack_308 + 0x3a8) = *(uint32_t *)(lStack_308 + 0x3a8) & 0xfffffffd;
        }
        uVar5 = 1;
      }
      else {
        if (cStack_2f0 != '\0') {
          *(uint32_t *)(lStack_308 + 0x3a8) = *(uint32_t *)(lStack_308 + 0x3a8) & 0xfffffffd;
        }
        uVar5 = 0;
      }
    }
    iVar3 = FUN_7fffa5244e38(param_1,&uStack_338,auStack_348,uVar5);
    uStack_350 = 0;
    uStack_358 = 0;
    uVar5 = uStack_328;
    if (iVar3 != 0) {
      uVar5 = 0;
    }
    lVar4 = (*(code *)&DAT_7ff84ea573a0)(uVar5,0,auStack_298,0);
    if (lVar4 == -1) {
      FUN_7fffa56606b8(param_1,0,0,param_3);
      if (cStack_310 != '\0') {
        FUN_7fffa52d8dd0(uStack_328);
      }
    }
    else {
      lVar8 = param_3[1] - *param_3 >> 3;
      do {
        uVar5 = 0;
        uStack_2c8 = 0;
        uStack_2c0 = 0;
        pcStack_2b8 = (char *)0x0;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        cStack_2a0 = '\0';
        FUN_7fffa564c5c0(&lStack_2e8,0);
        if (*(int *)(lStack_2e0 + 0xc) == 0xfde9) {
          if (cStack_2d0 != '\0') {
            *(uint32_t *)(lStack_2e8 + 0x3a8) = *(uint32_t *)(lStack_2e8 + 0x3a8) & 0xfffffffd;
          }
          uVar5 = 0xfde9;
        }
        else {
          iVar3 = FUN_7fffa52d9094();
          if (iVar3 == 0) {
            if (cStack_2d0 != '\0') {
              *(uint32_t *)(lStack_2e8 + 0x3a8) = *(uint32_t *)(lStack_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar5 = 1;
          }
          else if (cStack_2d0 != '\0') {
            *(uint32_t *)(lStack_2e8 + 0x3a8) = *(uint32_t *)(lStack_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        iVar3 = FUN_7fffa56aab2c(auStack_26c,&uStack_2c8,auStack_348,uVar5);
        pcVar2 = pcStack_2b8;
        pcVar6 = pcStack_2b8;
        if (iVar3 != 0) {
          pcVar6 = (char *)0x0;
        }
        if ((*pcVar6 == '.') && ((pcVar6[1] == '\0' || ((pcVar6[1] == '.' && (pcVar6[2] == '\0')))))
           ) {
          if (cStack_2a0 != '\0') {
            FUN_7fffa52d8dd0(pcStack_2b8);
          }
        }
        else {
          iVar3 = FUN_7fffa56606b8(pcVar6,param_1,uVar10,param_3);
          if (iVar3 != 0) {
            if (cStack_2a0 != '\0') {
              FUN_7fffa52d8dd0(pcVar2);
            }
            (*(code *)&DAT_7ff84ea57340)(lVar4);
            if (cStack_310 != '\0') {
              FUN_7fffa52d8dd0(uStack_328);
            }
            goto LAB_7fffa55cab89;
          }
          if (cStack_2a0 != '\0') {
            FUN_7fffa52d8dd0(pcVar2);
          }
          uVar10 = uStack_340;
        }
        iVar3 = (*(code *)&DAT_7ff84ea57410)(lVar4);
      } while (iVar3 != 0);
      lVar7 = param_3[1] - *param_3 >> 3;
      if (lVar8 != lVar7) {
        FUN_7fffa5216e00(*param_3 + lVar8 * 8,lVar7 - lVar8,8,&UNK_7fffa526aa9c);
      }
      (*(code *)&DAT_7ff84ea57340)(lVar4);
      if (cStack_310 != '\0') {
        FUN_7fffa52d8dd0(uStack_328);
      }
    }
  }
LAB_7fffa55cab89:
  FUN_7fffa5488850(uStack_48 ^ (uint64_t)auStack_378);
  return;
}


// ============================================================================
// Function : FUN_7fffa55cabb0  |  RVA: 0xe5abb0  |  Size: 1283 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55cada3) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cadf9) */

void FUN_7fffa55cabb0(void)

{
  uint64_t uVar1;
  uint16_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint32_t uVar5;
  uint32_t in_R9D;
  uint8_t bVar6;
  uint32_t uVar7;
  
  uVar5 = ~in_R9D;
  uVar7 = ~(in_R9D ^ 0x126aad15);
  uVar7 = (uVar5 & 0x690112a2) * -0x7d0b55aa + (uVar5 | 0xfd9dfafe) * 0x75713c5b +
          (in_R9D | 0x96feed5d) * -0x79a194f + ((in_R9D ^ 0xed9552ea) & 0x6b6317a3) * 0x49b5f40b +
          (((in_R9D ^ 0x7909bab6) & in_R9D) * 0x73c478ff + -0x3da38100 +
           ((in_R9D ^ 0x126aad15 | 0x949ce85c) ^ in_R9D) * 0x65f020d0 +
           ((in_R9D ^ 0x86f64549) & uVar5) * 0xdd45830 + (uVar5 & 0x1008a814) * -0x65f020d1 +
           (uVar7 & 0x6b6317a3 & in_R9D) * -0x65f020cf + (in_R9D ^ 0x7909bab6) +
          (((uVar7 | 0x949ce85c) ^ in_R9D) - ((uVar7 | 0x949ce85c) ^ in_R9D)) * -0x2cdf8b77) *
          0x2bbb4850;
  uVar5 = uVar7 | 1;
  lVar3 = (int64_t)(short)((short)uVar5 * 0x7520 | (uint16_t)((short)uVar5 * 0x73a9) >> 0xb);
  bVar6 = -(char)uVar7 - 0xc;
  *(uint8_t *)((int64_t)(int)(((0x7128d7aa - uVar7) * 0x80 | 0x7128d7aa - uVar7 >> 0x19) + 0x8001fd3c)
           + 0x7fffa47c6486) = bVar6 * '\x10' | bVar6 >> 4;
  *(uint8_t (*) [16])(lVar3 + 0x7fffa47c258d) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar3 + 0x7fffa47c257d) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar3 + 0x7fffa47c259d) = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)lVar3 >> 0x20),(int)uVar1)) *
          0xecac7e015405980;
  for (lVar4 = 3;
      *(char *)(lVar4 + (int64_t)(int)(uVar5 * -0x2ffc4b39) + 0x7fffa47cb6af) =
           (char)((uint64_t)(lVar3 * 0xe015405980) >> 0x20), lVar4 != 0x3f; lVar4 = lVar4 + 4) {
    *(char *)(lVar4 + (int64_t)(int)(~(uVar5 * 0x715cac00) << 0x17 | ~(uVar5 * 0x715cac00) >> 9) +
                      0x7fffa47c7d72) = (char)((uint64_t)(lVar3 * 0xdbdf4a4000) >> 0x20);
    *(char *)(lVar4 + (int64_t)
                      (int)(uVar5 * -0x29a1f89 >> 1 | (uint32_t)((uVar5 * -0x29a1f89 & 1) != 0) << 0x1f)
                      + 0x7fffa47cb234) = (char)((uint64_t)(lVar3 * 0x42cbf10910000000) >> 0x20);
    *(char *)(lVar4 + (int64_t)(int)(uVar7 + 0x6dd64dfb) + 0x7fffa47c9235) =
         (char)((uint64_t)(lVar3 * 0x6075600000) >> 0x20);
    lVar3 = lVar3 * 0x42cbf10910000000;
  }
  uVar2 = (uint16_t)uVar7;
  bVar6 = *(char *)((int64_t)(short)((uVar2 ^ 0x13e7) << 1 | (uint16_t)((short)(uVar2 ^ 0x13e7) < 0))
                   + 0x7fffa47c1f0a) + 1U & 3;
  *(uint64_t *)
   ((int64_t)(short)((0x9a2d - uVar2) * 0x800 | (uint16_t)(0x9a2d - uVar2) >> 5) + 0x7fffa47bef51 +
   (uint64_t)bVar6 * 8) = ~uRam00007fffa47bbd5a;
  *(uint8_t *)((int64_t)(short)((uVar2 ^ 0x360c) + 0xb5a) + 0x7fffa47bc6df) = bVar6;
  return;
}


// ============================================================================
// Function : FUN_7fffa55cb0b4  |  RVA: 0xe5b0b4  |  Size: 205 bytes
// Callers  : FUN_7fffa4ecd2c4@0x75d2c4
// Callees  : FUN_7fffa565d380@0xeed380, FUN_7fffa5281d00@0xb11d00
// ============================================================================
void FUN_7fffa55cb0b4(uint64_t *param_1)

{
  uint8_t auStackX_10 [8];
  uint32_t auStackX_18 [2];
  uint32_t auStackX_20 [2];
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint64_t *puStack_30;
  uint8_t **ppuStack_28;
  uint64_t **ppuStack_20;
  uint64_t **ppuStack_18;
  uint8_t ***pppuStack_10;
  
  ppuStack_20 = &puStack_30;
  auStackX_18[0] = 5;
  auStackX_20[0] = 5;
  ppuStack_18 = &puStack_30;
  pppuStack_10 = &ppuStack_28;
  uStack_38 = 4;
  uStack_34 = 4;
  ppuStack_28 = &PTR_PTR_7fffa4782608;
  *(uint32_t *)(param_1 + 5) = 1;
  *param_1 = &UNK_7fffa56b35c0;
  *(uint32_t *)(param_1 + 0x75) = 1;
  param_1[0x11] = 0x7fffa4780250;
  *(uint16_t *)((int64_t)param_1 + 0xbc) = 0x43;
  *(uint16_t *)((int64_t)param_1 + 0x1c2) = 0x43;
  param_1[0x74] = 0;
  puStack_30 = param_1;
  FUN_7fffa5281d00(auStackX_10,auStackX_20,&ppuStack_20,auStackX_18);
  FUN_7fffa565d380(auStackX_10,&uStack_34,&ppuStack_18,&uStack_38);
  return;
}


// ============================================================================
// Function : FUN_7fffa55cb1b0  |  RVA: 0xe5b1b0  |  Size: 2581 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55cb1b0(void) {
    /* +0xe5b1b0 */ __asm { PUSH RBP }
    /* +0xe5b1b1 */ __asm { PUSH RSI }
    /* +0xe5b1b2 */ __asm { PUSH R15 }
    /* +0xe5b1b4 */ __asm { PUSH RBX }
    /* +0xe5b1b5 */ __asm { PUSH R13 }
    /* +0xe5b1b7 */ __asm { PUSH RDI }
    /* +0xe5b1b8 */ __asm { PUSH R14 }
    /* +0xe5b1ba */ __asm { PUSH R12 }
    /* +0xe5b1bc */ __asm { SUB RSP,0x88 }
    /* +0xe5b1c3 */ __asm { MOV R13,R11 }
    /* +0xe5b1c6 */ __asm { MOV RBX,RAX }
    /* +0xe5b1c9 */ __asm { MOV RDI,RDX }
    /* +0xe5b1cc */ __asm { MOV EBP,0x1fb6a45d }
    /* +0xe5b1d1 */ __asm { MOVQ R12,XMM5 }
    /* +0xe5b1d6 */ __asm { ROL R12,0x3d }
    /* +0xe5b1da */ __asm { MOV R8D,0x44b68045 }
    /* +0xe5b1e0 */ __asm { RDTSC }
    /* +0xe5b1e2 */ __asm { SHL RDX,0x20 }
    /* +0xe5b1e6 */ __asm { OR RDX,RAX }
    /* +0xe5b1e9 */ __asm { MOV R11,-0xed3012bb }
    /* +0xe5b1f3 */ __asm { MOV EAX,0x30e397d }
    /* +0xe5b1f8 */ __asm { ADD EAX,0xd0c368c1 }
    /* +0xe5b1fd */ __asm { MOV ECX,R13D }
    /* +0xe5b200 */ __asm { ROL EAX,CL }
    /* +0xe5b202 */ __asm { ADD R11,R12 }
    /* +0xe5b205 */ __asm { MOV ESI,0xf8e55f0d }
    /* +0xe5b20a */ __asm { MOV R15D,0xed3012bb }
    /* +0xe5b210 */ __asm { XOR R15,R12 }
    /* +0xe5b213 */ __asm { IMUL R12D,EBP,-0x1fa6fca5 }
    /* +0xe5b21a */ __asm { ROL R12D,CL }
    /* +0xe5b21d */ __asm { MOV R14D,R13D }
    /* +0xe5b220 */ __asm { OR R14D,0x1 }
    /* +0xe5b224 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0xe5b22e */ __asm { IMUL RCX,RDX }
    /* +0xe5b232 */ __asm { MOV RDX,-0x22b18422c4a9c65e }
    /* +0xe5b23c */ __asm { ADD RDX,RCX }
    /* +0xe5b23f */ __asm { MOV RCX,RDX }
    /* +0xe5b242 */ __asm { SHR RCX,0x3b }
    /* +0xe5b246 */ __asm { MOV RBP,RDX }
    /* +0xe5b249 */ __asm { SHR RBP,0x1b }
    /* +0xe5b24d */ __asm { SHR RDX,0x2d }
    /* +0xe5b251 */ __asm { XOR EDX,EBP }
    /* +0xe5b253 */ __asm { ROR EDX,CL }
    /* +0xe5b255 */ __asm { AND EDX,0x3 }
    /* +0xe5b258 */ __asm { ADD ESI,0x171f29c9 }
    /* +0xe5b25e */ __asm { XOR ESI,R13D }
    /* +0xe5b261 */ __asm { ROL ESI,0xe }
    /* +0xe5b264 */ __asm { SUB RBX,RSI }
    /* +0xe5b267 */ __asm { XOR R8D,0x32dab0da }
    /* +0xe5b26e */ __asm { IMUL R8D,R14D }
    /* +0xe5b272 */ __asm { CMP R8,RAX }
    /* +0xe5b275 */ __asm { CMOVBE R15,R11 }
    /* +0xe5b279 */ __asm { MOV RSI,R10 }
    /* +0xe5b27c */ __asm { MOV EBP,R9D }
    /* +0xe5b27f */ __asm { ADD R15,R12 }
    /* +0xe5b282 */ __asm { MOV R12,0xfafc4495a9875eb }
    /* +0xe5b28c */ __asm { IMUL R12,R15 }
    /* +0xe5b290 */ __asm { CMP EDX,0x2 }
    /* +0xe5b293 */ __asm { JNC 0x7fffa55cb459 }
    /* +0xe5b299 */ __asm { CMP EDX,0x1 }
    /* +0xe5b29c */ __asm { JZ 0x7fffa55cb74b }
    /* +0xe5b2a2 */ __asm { MOVD XMM1,R13D }
    /* +0xe5b2a7 */ __asm { MOV EDX,0x50fd687f }
    /* +0xe5b2ac */ __asm { MOV R11,0x7c8782be0a531e99 }
    /* +0xe5b2b6 */ __asm { XOR ECX,ECX }
    /* +0xe5b2b8 */ __asm { CMP RDX,R11 }
    /* +0xe5b2bb */ __asm { SETZ CL }
    /* +0xe5b2be */ __asm { MOV EAX,0xa5c83b9e }
    /* +0xe5b2c3 */ __asm { MOVD XMM2,EAX }
    /* +0xe5b2c7 */ __asm { PXOR XMM2,XMM1 }
    /* +0xe5b2cb */ __asm { MOVD EAX,XMM2 }
    /* +0xe5b2cf */ __asm { MOV R11,0x7c8782be0a531e98 }
    /* +0xe5b2d9 */ __asm { XOR R9D,R9D }
    /* +0xe5b2dc */ __asm { CMP RDX,R11 }
    /* +0xe5b2df */ __asm { SETG R9B }
    /* +0xe5b2e3 */ __asm { ADD EAX,0xf7ba6ca3 }
    /* +0xe5b2e8 */ __asm { MOVSXD R11,EAX }
    /* +0xe5b2eb */ __asm { CMP R11,-0x17909c25 }
    /* +0xe5b2f2 */ __asm { CMOVZ R9D,ECX }
    /* +0xe5b2f6 */ __asm { CMP R9B,0x1 }
    /* +0xe5b2fa */ __asm { JZ 0x7fffa55cbfc9 }
    /* +0xe5b300 */ __asm { CMP dword ptr [RDX + 0x2f009b41],0xd }
    /* +0xe5b307 */ __asm { JC 0x7fffa55cbfd9 }
    /* +0xe5b30d */ __asm { PXOR XMM1,XMM1 }
    /* +0xe5b311 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xe5b317 */ __asm { MOV dword ptr [RSP + 0x80],0x800000c }
    /* +0xe5b322 */ __asm { MOV ECX,dword ptr [RSP + 0x80] }
    /* +0xe5b329 */ __asm { MOV DX,0x193a }
    /* +0xe5b32d */ __asm { ADD EDX,R13D }
    /* +0xe5b330 */ __asm { IMUL EDX,EDX,0x5b7b }
    /* +0xe5b336 */ __asm { ADD EDX,0xffffed60 }
    /* +0xe5b33c */ __asm { MOVZX EDX,DX }
    /* +0xe5b33f */ __asm { AND ECX,0x1 }
    /* +0xe5b342 */ __asm { CMP ECX,EDX }
    /* +0xe5b344 */ __asm { JNZ 0x7fffa55cc178 }
    /* +0xe5b34a */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xe5b352 */ __asm { MOV dword ptr [RSP + 0x80],0xa0d1cf0b }
    /* +0xe5b35d */ __asm { MOV ECX,dword ptr [RSP + 0x80] }
    /* +0xe5b364 */ __asm { CMP ECX,0x1d9c8451 }
    /* +0xe5b36a */ __asm { NOP }
    /* +0xe5b36b */ __asm { NOP }
    /* +0xe5b36c */ __asm { NOP }
    /* +0xe5b36d */ __asm { NOP }
    /* +0xe5b36e */ __asm { NOP }
    /* +0xe5b36f */ __asm { MOV R15,RDI }
    /* +0xe5b372 */ __asm { MOV dword ptr [RSP + 0x80],0xda5eb728 }
    /* +0xe5b37d */ __asm { MOV ECX,dword ptr [RSP + 0x80] }
    /* +0xe5b384 */ __asm { LEA RDX,[0x7fffa477cf0a] }
    /* +0xe5b38b */ __asm { MOV R8,RDX }
    /* +0xe5b38e */ __asm { ROL R8,0x1e }
    /* +0xe5b392 */ __asm { MOV R11,0x6470be88e6cf00b5 }
    /* +0xe5b39c */ __asm { IMUL R11,R8 }
    /* +0xe5b3a0 */ __asm { ADD R11,-0x31b7494b }
    /* +0xe5b3a7 */ __asm { MOV RCX,0x7cee51c06b554c4d }
    /* +0xe5b3b1 */ __asm { CMP R11,RCX }
    /* +0xe5b3b4 */ __asm { JZ 0x7fffa55cc180 }
    /* +0xe5b3ba */ __asm { MOV ECX,0xee2cc30e }
    /* +0xe5b3bf */ __asm { MOV AX,0x3319 }
    /* +0xe5b3c3 */ __asm { LEA RDI,[0x7fffa477ea66] }
    /* +0xe5b3ca */ __asm { MOVD XMM1,EAX }
    /* +0xe5b3ce */ __asm { MOV R11W,0xab27 }
    /* +0xe5b3d3 */ __asm { NOT R11D }
    /* +0xe5b3d6 */ __asm { MOV qword ptr [RSP + 0x80],R8 }
    /* +0xe5b3de */ __asm { MOVD XMM2,R13D }
    /* +0xe5b3e3 */ __asm { PXOR XMM2,XMM1 }
    /* +0xe5b3e7 */ __asm { MOVD R9D,XMM2 }
    /* +0xe5b3ec */ __asm { ADD ECX,R13D }
    /* +0xe5b3ef */ __asm { XOR ECX,0xbc56704b }
    /* +0xe5b3f5 */ __asm { ROL ECX,0x14 }
    /* +0xe5b3f8 */ __asm { MOV EAX,dword ptr [RDX + 0x7f82] }
    /* +0xe5b3fe */ __asm { NOT R9D }
    /* +0xe5b401 */ __asm { ROL R9W,0xe }
    /* +0xe5b406 */ __asm { MOVZX R9D,R9W }
    /* +0xe5b40a */ __asm { MOVSXD R10,ECX }
    /* +0xe5b40d */ __asm { LEA ECX,[R11 + R13*0x1] }
    /* +0xe5b411 */ __asm { ADD ECX,0xffffdeaa }
    /* +0xe5b417 */ __asm { MOVZX EDX,CX }
    /* +0xe5b41a */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xe5b41f */ __asm { SYSCALL }
    /* +0xe5b421 */ __asm { MOV R11,-0x2fa1e968f0d557d7 }
    /* +0xe5b42b */ __asm { CMP RDI,R11 }
    /* +0xe5b42e */ __asm { JNZ 0x7fffa55cb43e }
    /* +0xe5b430 */ __asm { IN EAX,DX }
    /* +0xe5b431 */ __asm { OR BH,uint8_t ptr [0x7fffb0740388] }
    /* +0xe5b437 */ __asm { XCHG EAX,EBX }
    /* +0xe5b438 */ __asm { PUSH RDX }
    /* +0xe5b439 */ __asm { NOP }
    /* +0xe5b43a */ __asm { NOP }
    /* +0xe5b43b */ __asm { NOP }
    /* +0xe5b43c */ __asm { NOP }
    /* +0xe5b43d */ __asm { NOP }
    /* +0xe5b43e */ __asm { NOP }
    /* +0xe5b43f */ __asm { NOP }
    /* +0xe5b440 */ __asm { NOP }
    /* +0xe5b441 */ __asm { NOP }
    /* +0xe5b442 */ __asm { NOP }
    /* +0xe5b443 */ __asm { NOP }
    /* +0xe5b444 */ __asm { NOP }
    /* +0xe5b445 */ __asm { NOP }
    /* +0xe5b446 */ __asm { NOP }
    /* +0xe5b447 */ __asm { NOP }
    /* +0xe5b448 */ __asm { NOP }
    /* +0xe5b449 */ __asm { NOP }
    /* +0xe5b459 */ __asm { MOV ECX,0x574e9bbe }
    /* +0xe5b45e */ __asm { MOV R10D,0x1f0620a1 }
    /* +0xe5b464 */ __asm { ADD R10D,R13D }
    /* +0xe5b467 */ __asm { XOR R10D,0xb22517ba }
    /* +0xe5b46e */ __asm { ROL R10D,0x18 }
    /* +0xe5b472 */ __asm { MOV EAX,0x64da3ce3 }
    /* +0xe5b477 */ __asm { SUB EAX,ECX }
    /* +0xe5b479 */ __asm { CMP R10,RAX }
    /* +0xe5b47c */ __asm { JC 0x7fffa55cb6d4 }
    /* +0xe5b482 */ __asm { CMP EDX,0x3 }
    /* +0xe5b485 */ __asm { JZ 0x7fffa55cb6d4 }
    /* +0xe5b48b */ __asm { MOV RDX,0x0 }
    /* +0xe5b492 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xe5b499 */ __asm { NOP }
    /* +0xe5b49a */ __asm { LEA RDX,[0x7fffa47bd24d] }
    /* +0xe5b4a1 */ __asm { MOV R11,-0x7e11803d3b47d3a9 }
    /* +0xe5b4ab */ __asm { CMP RDX,R11 }
    /* +0xe5b4ae */ __asm { NOP }
    /* +0xe5b4af */ __asm { NOP }
    /* +0xe5b4b0 */ __asm { NOP }
    /* +0xe5b4b1 */ __asm { NOP }
    /* +0xe5b4b2 */ __asm { NOP }
    /* +0xe5b4b3 */ __asm { MOV ECX,0x83cde251 }
    /* +0xe5b4b8 */ __asm { IMUL R10D,ECX,-0x359c1d8d }
    /* +0xe5b4bf */ __asm { MOVZX R11D,uint8_t ptr [RDX + -0xbc0] }
    /* +0xe5b4c7 */ __asm { MOVZX R8D,uint8_t ptr [RDX + R11*0x4 + -0xbb0] }
    /* +0xe5b4d0 */ __asm { ROL R8B,0x4 }
    /* +0xe5b4d4 */ __asm { MOV uint8_t ptr [RSP + 0x50],R8B }
    /* +0xe5b4d9 */ __asm { MOVZX R8D,uint8_t ptr [RDX + R11*0x4 + -0xbaf] }
    /* +0xe5b4e2 */ __asm { ROL R8B,0x4 }
    /* +0xe5b4e6 */ __asm { MOV uint8_t ptr [RSP + 0x51],R8B }
    /* +0xe5b4eb */ __asm { MOVZX R8D,uint8_t ptr [RDX + R11*0x4 + -0xbae] }
    /* +0xe5b4f4 */ __asm { ROL R8B,0x4 }
    /* +0xe5b4f8 */ __asm { MOV uint8_t ptr [RSP + 0x52],R8B }
    /* +0xe5b4fd */ __asm { MOVZX R8D,uint8_t ptr [RDX + R11*0x4 + -0xbad] }
    /* +0xe5b506 */ __asm { ROL R8B,0x4 }
    /* +0xe5b50a */ __asm { MOV uint8_t ptr [RSP + 0x53],R8B }
    /* +0xe5b50f */ __asm { MOV EDX,0x65e8ce72 }
    /* +0xe5b514 */ __asm { XOR EDX,dword ptr [RSP + 0x50] }
    /* +0xe5b518 */ __asm { ADD R10D,0x1962d3b1 }
    /* +0xe5b51f */ __asm { MOVZX ECX,uint8_t ptr [R10] }
    /* +0xe5b523 */ __asm { MOV EAX,0x1 }
    /* +0xe5b528 */ __asm { SHL EAX,CL }
    /* +0xe5b52a */ __asm { MOVD XMM1,EAX }
    /* +0xe5b52e */ __asm { MOVD XMM2,EDX }
    /* +0xe5b532 */ __asm { PAND XMM2,XMM1 }
    /* +0xe5b536 */ __asm { MOVD ECX,XMM2 }
    /* +0xe5b53a */ __asm { TEST ECX,ECX }
    /* +0xe5b53c */ __asm { JZ 0x7fffa55cbe60 }
    /* +0xe5b542 */ __asm { MOV EDX,0x32d94ade }
    /* +0xe5b547 */ __asm { XOR EDX,0x616e7e06 }
    /* +0xe5b54d */ __asm { ADD EDX,0xd3c39f0b }
    /* +0xe5b553 */ __asm { MOV ECX,R13D }
    /* +0xe5b556 */ __asm { ROR EDX,CL }
    /* +0xe5b558 */ __asm { PXOR XMM1,XMM1 }
    /* +0xe5b55c */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xe5b562 */ __asm { MOV dword ptr [RSP + 0x80],EDX }
    /* +0xe5b569 */ __asm { MOV ECX,dword ptr [RSP + 0x80] }
    /* +0xe5b570 */ __asm { TEST ECX,ECX }
    /* +0xe5b572 */ __asm { NOP }
    /* +0xe5b573 */ __asm { NOP }
    /* +0xe5b574 */ __asm { NOP }
    /* +0xe5b575 */ __asm { NOP }
    /* +0xe5b576 */ __asm { NOP }
    /* +0xe5b577 */ __asm { NOP }
    /* +0xe5b578 */ __asm { NOP }
    /* +0xe5b579 */ __asm { NOP }
    /* +0xe5b57a */ __asm { NOP }
    /* +0xe5b57b */ __asm { NOP }
    /* +0xe5b57c */ __asm { NOP }
    /* +0xe5b57d */ __asm { NOP }
    /* +0xe5b57e */ __asm { NOP }
    /* +0xe5b57f */ __asm { NOP }
    /* +0xe5b580 */ __asm { NOP }
    /* +0xe5b581 */ __asm { NOP }
    /* +0xe5b582 */ __asm { NOP }
    /* +0xe5b6d4 */ __asm { LEA RDX,[0x7fffa47bb474] }
    /* +0xe5b6db */ __asm { MOV R11,-0x3318778ce0ad0815 }
    /* +0xe5b6e5 */ __asm { CMP RDX,R11 }
    /* +0xe5b6e8 */ __asm { NOP }
    /* +0xe5b6e9 */ __asm { NOP }
    /* +0xe5b6ea */ __asm { NOP }
    /* +0xe5b6eb */ __asm { NOP }
    /* +0xe5b6ec */ __asm { NOP }
    /* +0xe5b6ed */ __asm { MOV R10D,0xb794ef1f }
    /* +0xe5b6f3 */ __asm { MOV ECX,0xc540b2da }
    /* +0xe5b6f8 */ __asm { ADD R10D,R13D }
    /* +0xe5b6fb */ __asm { XOR R10D,0x4d2d9722 }
    /* +0xe5b702 */ __asm { IMUL EAX,ECX,-0x369c9635 }
    /* +0xe5b708 */ __asm { ADD EAX,0x645af4ac }
    /* +0xe5b70d */ __asm { CMP RAX,R10 }
    /* +0xe5b710 */ __asm { JNZ 0x7fffa55cb957 }
    /* +0xe5b716 */ __asm { MOV R8D,0x8923b0b0 }
    /* +0xe5b71c */ __asm { MOVZX R11D,uint8_t ptr [RDX + 0x1219] }
    /* +0xe5b724 */ __asm { MOVZX R10D,uint8_t ptr [RDX + R11*0x4 + 0x1229] }
    /* +0xe5b72d */ __asm { ROL R10B,0x4 }
    /* +0xe5b731 */ __asm { LEA R11,[RDX + R11*0x4] }
    /* +0xe5b735 */ __asm { ADD R11,0x1229 }
    /* +0xe5b73c */ __asm { XOR R8D,0xf0e6bfc }
    /* +0xe5b743 */ __asm { SUB R8D,R13D }
    /* +0xe5b746 */ __asm { JMP 0x7fffa55cb98a }
    /* +0xe5b74b */ __asm { MOV EDX,0xe6d10cb4 }
    /* +0xe5b750 */ __asm { MOV R11,0x170e58219afbe05d }
    /* +0xe5b75a */ __asm { CMP RDX,R11 }
    /* +0xe5b75d */ __asm { NOP }
    /* +0xe5b75e */ __asm { NOP }
    /* +0xe5b75f */ __asm { NOP }
    /* +0xe5b760 */ __asm { NOP }
    /* +0xe5b761 */ __asm { NOP }
    /* +0xe5b762 */ __asm { NOP }
    /* +0xe5b763 */ __asm { NOP }
    /* +0xe5b764 */ __asm { NOP }
    /* +0xe5b765 */ __asm { NOP }
    /* +0xe5b766 */ __asm { NOP }
    /* +0xe5b767 */ __asm { NOP }
    /* +0xe5b768 */ __asm { NOP }
    /* +0xe5b769 */ __asm { NOP }
    /* +0xe5b76a */ __asm { NOP }
    /* +0xe5b76b */ __asm { NOP }
    /* +0xe5b76c */ __asm { NOP }
    /* +0xe5b76d */ __asm { NOP }
    /* +0xe5b957 */ __asm { MOV R8D,0x2300a831 }
    /* +0xe5b95d */ __asm { ADD R8D,0x24ab18eb }
    /* +0xe5b964 */ __asm { ROL R8D,0x1a }
    /* +0xe5b968 */ __asm { NOT R8D }
    /* +0xe5b96b */ __asm { MOVZX EAX,uint8_t ptr [RDX + 0x1219] }
    /* +0xe5b972 */ __asm { LEA R11,[RDX + RAX*0x4] }
    /* +0xe5b976 */ __asm { ADD R11,0x1229 }
    /* +0xe5b97d */ __asm { MOVZX R10D,uint8_t ptr [RDX + RAX*0x4 + 0x1229] }
    /* +0xe5b986 */ __asm { ROL R10B,0x4 }
    /* +0xe5b98a */ __asm { MOVZX EDX,uint8_t ptr [R11 + 0x2] }
    /* +0xe5b98f */ __asm { MOVZX EAX,uint8_t ptr [R11 + 0x3] }
    /* +0xe5b994 */ __asm { ROL AL,0x4 }
    /* +0xe5b997 */ __asm { MOV ECX,0xe85cd000 }
    /* +0xe5b99c */ __asm { ROL DL,0x4 }
    /* +0xe5b99f */ __asm { MOV uint8_t ptr [RSP + 0x50],R10B }
    /* +0xe5b9a4 */ __asm { MOV R10D,R8D }
    /* +0xe5b9a7 */ __asm { OR R10D,0x1 }
    /* +0xe5b9ab */ __asm { IMUL R10D,ECX }
    /* +0xe5b9af */ __asm { ROL R10D,0xb }
    /* +0xe5b9b3 */ __asm { MOV ECX,R13D }
    /* +0xe5b9b6 */ __asm { ROR R10D,CL }
    /* +0xe5b9b9 */ __asm { MOVZX R11D,uint8_t ptr [R11 + 0x1] }
    /* +0xe5b9be */ __asm { ROL R11B,0x4 }
    /* +0xe5b9c2 */ __asm { MOV uint8_t ptr [RSP + 0x51],R11B }
    /* +0xe5b9c7 */ __asm { MOV uint8_t ptr [RSP + 0x53],AL }
    /* +0xe5b9cb */ __asm { MOV uint8_t ptr [RSP + 0x52],DL }
    /* +0xe5b9cf */ __asm { MOV ECX,0x65e8ce72 }
    /* +0xe5b9d4 */ __asm { XOR ECX,dword ptr [RSP + 0x50] }
    /* +0xe5b9d8 */ __asm { MOV EDX,dword ptr [R10] }
    /* +0xe5b9db */ __asm { BT ECX,EDX }
    /* +0xe5b9de */ __asm { JNC 0x7fffa55cbce4 }
    /* +0xe5b9e4 */ __asm { XORPS XMM1,XMM1 }
    /* +0xe5b9e7 */ __asm { MOVAPS xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xe5b9ec */ __asm { MOV dword ptr [RSP + 0x80],0xb8238fe }
    /* +0xe5b9f7 */ __asm { MOV ECX,dword ptr [RSP + 0x80] }
    /* +0xe5b9fe */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xe5ba06 */ __asm { MOV dword ptr [RSP + 0x80],0xc95e4b42 }
    /* +0xe5ba11 */ __asm { MOV EAX,dword ptr [RSP + 0x80] }
    /* +0xe5ba18 */ __asm { XOR EDX,EDX }
    /* +0xe5ba1a */ __asm { CMP EAX,0xe48f8f93 }
    /* +0xe5ba1f */ __asm { SETC DL }
    /* +0xe5ba22 */ __asm { MOV R11D,0xc042290f }
    /* +0xe5ba28 */ __asm { MOV R10D,0xf7fc905 }
    /* +0xe5ba2e */ __asm { XOR R10D,R13D }
    /* +0xe5ba31 */ __asm { XOR R10D,0x3227429c }
    /* +0xe5ba38 */ __asm { MOV ECX,0x24babc31 }
    /* +0xe5ba3d */ __asm { NEG R11D }
    /* +0xe5ba40 */ __asm { LEA R9D,[R8 + R11*0x1] }
    /* +0xe5ba44 */ __asm { ADD R9D,0xd85057c2 }
    /* +0xe5ba4b */ __asm { IMUL R11D,ECX,-0x6e6142f3 }
    /* +0xe5ba52 */ __asm { MOV ECX,R13D }
    /* +0xe5ba55 */ __asm { ROL R11D,CL }
    /* +0xe5ba58 */ __asm { XOR R11D,R8D }
    /* +0xe5ba5b */ __asm { XOR ECX,ECX }
    /* +0xe5ba5d */ __asm { CMP EAX,R11D }
    /* +0xe5ba60 */ __asm { SETNZ CL }
    /* +0xe5ba63 */ __asm { CMP R10,R9 }
    /* +0xe5ba66 */ __asm { CMOVGE EDX,ECX }
    /* +0xe5ba69 */ __asm { TEST DL,DL }
    /* +0xe5ba6b */ __asm { NOP }
    /* +0xe5ba6c */ __asm { NOP }
    /* +0xe5ba6d */ __asm { NOP }
    /* +0xe5ba6e */ __asm { NOP }
    /* +0xe5ba6f */ __asm { NOP }
    /* +0xe5ba70 */ __asm { NOP }
    /* +0xe5ba71 */ __asm { NOP }
    /* +0xe5ba72 */ __asm { MOV ECX,R13D }
    /* +0xe5ba75 */ __asm { OR ECX,0x1 }
    /* +0xe5ba78 */ __asm { PUSHFQ }
    /* +0xe5ba79 */ __asm { POP R10 }
    /* +0xe5ba7b */ __asm { MOV RDX,0x0 }
    /* +0xe5ba82 */ __asm { NOP }
    /* +0xe5ba83 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xe5ba8a */ __asm { AND R10D,0x100 }
    /* +0xe5ba91 */ __asm { MOV DX,0x4073 }
    /* +0xe5ba95 */ __asm { IMUL EDX,ECX }
    /* +0xe5ba98 */ __asm { ADD EDX,R8D }
    /* +0xe5ba9b */ __asm { IMUL ECX,EDX,-0xf5 }
    /* +0xe5baa1 */ __asm { MOVZX EDX,CX }
    /* +0xe5baa4 */ __asm { CMP R10,RDX }
    /* +0xe5baa7 */ __asm { JZ 0x7fffa55cbab5 }
    /* +0xe5baa9 */ __asm { MOV CX,0x44e6 }
    /* +0xe5baad */ __asm { XCHG EDX,EDI }
    /* +0xe5baaf */ __asm { CLC }
    /* +0xe5bab0 */ __asm { SHR EBP,0xb3 }
    /* +0xe5bab4 */ __asm { PUSH RSP }
    /* +0xe5bab5 */ __asm { MOV dword ptr [RSP + 0x80],0xd2644ac3 }
    /* +0xe5bac0 */ __asm { MOV ECX,dword ptr [RSP + 0x80] }
    /* +0xe5bac7 */ __asm { CMP ECX,0x295a3ae6 }
    /* +0xe5bacd */ __asm { NOP }
    /* +0xe5bace */ __asm { NOP }
    /* +0xe5bacf */ __asm { NOP }
    /* +0xe5bad0 */ __asm { NOP }
    /* +0xe5bad1 */ __asm { NOP }
    /* +0xe5bad2 */ __asm { CMP R10D,EDX }
    /* +0xe5bad5 */ __asm { NOP }
    /* +0xe5bad6 */ __asm { NOP }
    /* +0xe5bad7 */ __asm { NOP }
    /* +0xe5bad8 */ __asm { LEA R11,[0x7fffa47b99f9] }
    /* +0xe5badf */ __asm { MOV RCX,0x40f6110a537404e }
    /* +0xe5bae9 */ __asm { CMP R11,RCX }
    /* +0xe5baec */ __asm { NOP }
    /* +0xe5baed */ __asm { NOP }
    /* +0xe5baee */ __asm { NOP }
    /* +0xe5baef */ __asm { NOP }
    /* +0xe5baf0 */ __asm { NOP }
    /* +0xe5baf1 */ __asm { MOV CX,0x82b1 }
    /* +0xe5baf5 */ __asm { OR R8D,0x1 }
    /* +0xe5baf9 */ __asm { LEA R15,[0x7fffa4789d0c] }
    /* +0xe5bb00 */ __asm { XOR ECX,R13D }
    /* +0xe5bb03 */ __asm { ADD ECX,0xffffc9e1 }
    /* +0xe5bb09 */ __asm { MOVD XMM1,ECX }
    /* +0xe5bb0d */ __asm { MOV ECX,0xe28c1680 }
    /* +0xe5bb12 */ __asm { MOV EAX,R13D }
    /* +0xe5bb15 */ __asm { SUB EAX,ECX }
    /* +0xe5bb17 */ __asm { MOVD XMM2,R8D }
    /* +0xe5bb1c */ __asm { PMULLW XMM2,XMM1 }
    /* +0xe5bb20 */ __asm { PEXTRW EDX,XMM2,0x0 }
    /* +0xe5bb25 */ __asm { ADD EAX,0x8d0f49d9 }
    /* +0xe5bb2a */ __asm { MOV CX,0xc40c }
    /* +0xe5bb2e */ __asm { IMUL ECX,R8D }
    /* +0xe5bb32 */ __asm { XOR ECX,0xffffbeda }
    /* +0xe5bb38 */ __asm { IMUL ECX,ECX,0x677b }
    /* +0xe5bb3e */ __asm { ADD ECX,R13D }
    /* +0xe5bb41 */ __asm { MOVZX R9D,CX }
    /* +0xe5bb45 */ __asm { MOV qword ptr [RSP + 0x80],R8 }
    /* +0xe5bb4d */ __asm { MOVSXD R10,EAX }
    /* +0xe5bb50 */ __asm { MOV EAX,dword ptr [R11 + 0x35df] }
    /* +0xe5bb57 */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xe5bb5c */ __asm { SYSCALL }
    /* +0xe5bb5e */ __asm { MOV R11,-0x3b0603eeb887ff34 }
    /* +0xe5bb68 */ __asm { CMP R15,R11 }
    /* +0xe5bb6b */ __asm { JZ 0x7fffa55cc16f }
    /* +0xe5bb71 */ __asm { MOV qword ptr [RSP + 0x50],RDX }
    /* +0xe5bb76 */ __asm { MOV EAX,dword ptr [R15 + -0x4f64] }
    /* +0xe5bb7d */ __asm { JMP 0x7fffa55cc0e9 }
    /* +0xe5bce4 */ __asm { NOP }
    /* +0xe5bce5 */ __asm { MOV RDX,0x0 }
    /* +0xe5bcec */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xe5bcf3 */ __asm { MOV CX,0x6fc1 }
    /* +0xe5bcf7 */ __asm { IMUL EDX,ECX,0x3545 }
    /* +0xe5bcfd */ __asm { MOV ECX,R8D }
    /* +0xe5bd00 */ __asm { ROL DX,CL }
    /* +0xe5bd03 */ __asm { PXOR XMM1,XMM1 }
    /* +0xe5bd07 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM1 }
    /* +0xe5bd0d */ __asm { MOV R9D,R13D }
    /* +0xe5bd10 */ __asm { OR R9D,0x1 }
    /* +0xe5bd14 */ __asm { IMUL EDX,R9D }
    /* +0xe5bd18 */ __asm { MOVZX R10D,DX }
    /* +0xe5bd1c */ __asm { MOV R11,qword ptr GS:[R10] }
    /* +0xe5bd20 */ __asm { ROR R11,0x1 }
    /* +0xe5bd23 */ __asm { ADD R11,0x121dadfc }
    /* +0xe5bd2a */ __asm { MOV RCX,-0x5e7b7dfc7b093b89 }
    /* +0xe5bd34 */ __asm { CMP R11,RCX }
    /* +0xe5bd37 */ __asm { NOP }
    /* +0xe5bd38 */ __asm { NOP }
    /* +0xe5bd39 */ __asm { NOP }
    /* +0xe5bd3a */ __asm { NOP }
    /* +0xe5bd3b */ __asm { NOP }
    /* +0xe5bd3c */ __asm { NOP }
    /* +0xe5bd3d */ __asm { NOP }
    /* +0xe5bd3e */ __asm { NOP }
    /* +0xe5bd3f */ __asm { MOV qword ptr [RSP + 0x78],RSI }
    /* +0xe5bd44 */ __asm { MOV dword ptr [RSP + 0x50],0x0 }
    /* +0xe5bd4c */ __asm { MOV dword ptr [RSP + 0x80],0x11ba39 }
    /* +0xe5bd57 */ __asm { MOV ECX,dword ptr [RSP + 0x80] }
    /* +0xe5bd5e */ __asm { MOV ECX,0x1d8f45f8 }
    /* +0xe5bd63 */ __asm { XOR ECX,0xa695009b }
    /* +0xe5bd69 */ __asm { IMUL ECX,ECX,0x3f40c15b }
    /* +0xe5bd6f */ __asm { NOT ECX }
    /* +0xe5bd71 */ __asm { MOV dword ptr [RSP + 0x80],ECX }
    /* +0xe5bd78 */ __asm { MOV ECX,dword ptr [RSP + 0x80] }
    /* +0xe5bd7f */ __asm { CMP ECX,0x80c7cfba }
    /* +0xe5bd85 */ __asm { JBE 0x7fffa55cc1b1 }
    /* +0xe5bd8b */ __asm { MOV dword ptr [RSP + 0x6c],EBP }
    /* +0xe5bd8f */ __asm { MOV RSI,RDI }
    /* +0xe5bd92 */ __asm { LEA R11,[0x7fffa47c2235] }
    /* +0xe5bd99 */ __asm { MOV RCX,0x686020718d44c663 }
    /* +0xe5bda3 */ __asm { CMP R11,RCX }
    /* +0xe5bda6 */ __asm { JZ 0x7fffa55cc1bb }
    /* +0xe5bdac */ __asm { MOV RBP,R8 }
    /* +0xe5bdaf */ __asm { MOV CX,0x207b }
    /* +0xe5bdb3 */ __asm { MOV RDI,-0x7924ef1e1052ff56 }
    /* +0xe5bdbd */ __asm { IMUL EDX,ECX,0x127 }
    /* +0xe5bdc3 */ __asm { MOV ECX,R8D }
    /* +0xe5bdc6 */ __asm { ROR DX,CL }
    /* +0xe5bdc9 */ __asm { MOV AX,0xcca6 }
    /* +0xe5bdcd */ __asm { XOR EAX,R13D }
    /* +0xe5bdd0 */ __asm { NOT EAX }
    /* +0xe5bdd2 */ __asm { ROL AX,CL }
    /* +0xe5bdd5 */ __asm { OR RBP,0x1 }
    /* +0xe5bdd9 */ __asm { MOVSX R10,AX }
    /* +0xe5bddd */ __asm { MOV qword ptr [RSP + 0x80],RCX }
    /* +0xe5bde5 */ __asm { LEA R15,[0x7fffa4785017] }
    /* +0xe5bdec */ __asm { LEA ECX,[RDX + R13*0x1] }
    /* +0xe5bdf0 */ __asm { ADD ECX,0x7bd5 }
    /* +0xe5bdf6 */ __asm { MOVZX EDX,CX }
    /* +0xe5bdf9 */ __asm { MOV CX,0x64e9 }
    /* +0xe5bdfd */ __asm { IMUL R9D,ECX }
    /* +0xe5be01 */ __asm { NOT R9D }
    /* +0xe5be04 */ __asm { MOV EAX,dword ptr [R11 + -0x5d6d] }
    /* +0xe5be0b */ __asm { ADD RDI,0x6e618f34 }
    /* +0xe5be12 */ __asm { IMUL RDI,RBP }
    /* +0xe5be16 */ __asm { MOV ECX,R13D }
    /* +0xe5be19 */ __asm { ROR RDI,CL }
    /* +0xe5be1c */ __asm { MOV ECX,R8D }
    /* +0xe5be1f */ __asm { ROR R9W,CL }
    /* +0xe5be23 */ __asm { MOVZX R9D,R9W }
    /* +0xe5be27 */ __asm { LEA R8,[RSP + 0x50] }
    /* +0xe5be2c */ __asm { SYSCALL }
    /* +0xe5be2e */ __asm { CMP R15,RDI }
    /* +0xe5be31 */ __asm { JZ 0x7fffa55cc1c3 }
    /* +0xe5be37 */ __asm { MOV qword ptr [RSP + 0x50],RDX }
    /* +0xe5be3c */ __asm { MOV EAX,dword ptr [R15 + -0x9cb] }
    /* +0xe5be43 */ __asm { MOV R11,qword ptr [RSP + 0x78] }
    /* +0xe5be48 */ __asm { MOV qword ptr [RSP + 0x28],R11 }
}


// ============================================================================
// Function : FUN_7fffa55cc1f0  |  RVA: 0xe5c1f0  |  Size: 789 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa55cc5c5) overlaps instruction at (ram,0x7fffa55cc5c4)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa55cc291) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cc5bb) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cc5b3) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cc5c4) */

void FUN_7fffa55cc1f0(void)

{
  uint64_t uVar1;
  
  uVar1 = lRam00007fffa4780d08 + 0xa7da07e97412538f;
  uRam00007fffa47bf390 = 0xde5800000ffff4b;
  uRam00007fffa47bf388 = uVar1 >> 0x3e ^ uVar1 >> 0x1f ^ uVar1;
  lRam00007fffa47bf398 = -0x52f67c9c46ae5215 - lRam00007fffa4781188;
  lRam00007fffa47bf3a0 = -0x50dab23c5bb5b8aa - lRam00007fffa4780fa8;
  uRam00007fffa47bf3b8 = 0x9aacdbfda99ad4d9;
  lRam00007fffa47bf3a8 = -0x9e99da5351d6fa8 - lRam00007fffa47815d0;
  uRam00007fffa47bf3b0 = 0;
  uVar1 = (uRam00007fffa4780f18 ^ 0x686c3c10d988de2a) + lRam00007fffa4781310;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  lRam00007fffa47bf3c0 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2;
  return;
}


// ============================================================================
// Function : FUN_7fffa55cc5d0  |  RVA: 0xe5c5d0  |  Size: 6883 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55ccd27) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cd791) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ccdd4) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cc6a9) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cdd43) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ccb4a) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cd30b) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cd38d) */
/* WARNING: Removing unreachable block (ram,0x7fffa55cd8f5) */

int64_t FUN_7fffa55cc5d0(uint64_t param_1,int64_t *param_2,int *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint32_t uVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int *piVar18;
  uint64_t *puVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint64_t *puVar22;
  uint64_t *puVar23;
  int64_t lVar24;
  uint64_t uVar25;
  uint64_t *puVar26;
  uint32_t uVar27;
  uint64_t *puVar28;
  uint64_t *puVar29;
  uint32_t uVar30;
  uint32_t uVar31;
  int iVar32;
  uint32_t uVar33;
  uint64_t *puVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  int iVar39;
  uint64_t *puVar40;
  uint64_t uVar41;
  int iStack_114;
  int iStack_8c;
  uint64_t uStack_88;
  uint64_t *puStack_80;
  
  iStack_8c = *param_3;
  iStack_114 = param_3[1];
  lVar9 = *(int64_t *)(param_1 + 8);
  uVar8 = *(uint32_t *)(param_1 + 0x110);
  uVar30 = 6;
  if (uVar8 < 6) {
    uVar30 = uVar8;
  }
  puVar10 = *(uint64_t **)(param_1 + 0xf8);
  puVar11 = (uint64_t *)*puVar10;
  uVar12 = puVar10[1];
  uVar27 = 4;
  if (4 < uVar30) {
    uVar27 = uVar30;
  }
  puVar23 = (uint64_t *)((uint32_t)puVar10[3] + uVar12);
  uVar30 = *(uint32_t *)(param_1 + 0x18);
  puVar10 = (uint64_t *)(lVar9 + (uint64_t)uVar30);
  puVar4 = (uint64_t *)((int64_t)param_4 + param_5);
  puVar5 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  *(uint32_t *)(param_1 + 300) = 0;
  puVar28 = (uint64_t *)
            ((int64_t)param_4 +
            (uint64_t)((-(int)puVar10 - (int)puVar23) + (int)param_4 + (int)puVar11 == 0));
  if (puVar5 <= puVar28) {
LAB_7fffa55ce0b8:
    param_3[1] = iStack_114;
    *param_3 = iStack_8c;
    return (int64_t)puVar4 - (int64_t)param_4;
  }
  uVar31 = ((int)uVar12 - (int)puVar11) + uVar30;
  puVar1 = (uint64_t *)((int64_t)puVar4 - 1);
  puVar2 = puVar4 + -4;
  puStack_80 = (uint64_t *)((int64_t)puVar4 - 7);
  puVar3 = (uint64_t *)((int64_t)puVar4 - 3);
LAB_7fffa55cc808:
  iVar39 = (int)lVar9;
  uVar33 = (((int)puVar28 - iVar39) - iStack_8c) + 1;
  piVar18 = (int *)((uVar33 - uVar31) + uVar12);
  if (uVar30 <= uVar33) {
    piVar18 = (int *)((uint64_t)uVar33 + lVar9);
  }
  if ((uVar33 - uVar30 < 0xfffffffd) && (*piVar18 == *(int *)((int64_t)puVar28 + 1U))) {
    puVar21 = puVar4;
    if (uVar33 < uVar30) {
      puVar21 = puVar11;
    }
    puVar16 = (uint64_t *)((int64_t)puVar28 + 5);
    puVar34 = (uint64_t *)(piVar18 + 1);
    puVar29 = (uint64_t *)((int64_t)puVar28 + (int64_t)puVar21 + (5 - (int64_t)puVar34));
    if (puVar4 <= puVar29) {
      puVar29 = puVar4;
    }
    puVar22 = puVar34;
    puVar19 = puVar16;
    if (puVar16 < (uint64_t *)((int64_t)puVar29 - 7U)) {
      if (*puVar34 == *puVar16) {
        lVar20 = 0;
LAB_7fffa55cc8c0:
        puVar22 = (uint64_t *)((int64_t)puVar28 + lVar20 + 0xd);
        if (puVar22 < (uint64_t *)((int64_t)puVar29 - 7U)) {
          uVar41 = *(uint64_t *)((int64_t)piVar18 + lVar20 + 0xc);
          uVar35 = *puVar22;
          if (uVar41 == uVar35) goto code_r0x7fffa55cc8da;
          uVar33 = 0;
          for (uVar41 = uVar41 ^ uVar35; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar33 = uVar33 + 1;
          }
          uVar41 = (uint64_t)(uVar33 >> 3) + lVar20 + 8;
          goto LAB_7fffa55cc94c;
        }
        puVar19 = (uint64_t *)((int64_t)puVar28 + lVar20 + 0xd);
        puVar22 = (uint64_t *)((int64_t)piVar18 + lVar20 + 0xc);
        goto LAB_7fffa55cc8ff;
      }
      uVar33 = 0;
      for (uVar41 = *puVar16 ^ *puVar34; (uVar41 & 1) == 0;
          uVar41 = uVar41 >> 1 | 0x8000000000000000) {
        uVar33 = uVar33 + 1;
      }
      uVar41 = (uint64_t)(uVar33 >> 3);
    }
    else {
LAB_7fffa55cc8ff:
      if ((puVar19 < (uint64_t *)((int64_t)puVar29 - 3U)) && ((int)*puVar22 == (int)*puVar19)) {
        puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
        puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
      }
      if ((puVar19 < (uint64_t *)((int64_t)puVar29 - 1U)) && ((short)*puVar22 == (short)*puVar19))
      {
        puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
        puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
      }
      if (puVar19 < puVar29) {
        puVar19 = (uint64_t *)((int64_t)puVar19 + (uint64_t)((char)*puVar22 == (char)*puVar19));
      }
      uVar41 = (int64_t)puVar19 - (int64_t)puVar16;
    }
LAB_7fffa55cc94c:
    if ((uint64_t *)((int64_t)puVar34 + uVar41) == puVar21) {
      puVar16 = (uint64_t *)((int64_t)puVar16 + uVar41);
      puVar21 = puVar10;
      puVar34 = puVar16;
      if (puVar16 < puStack_80) {
        if (*puVar10 == *puVar16) {
          puVar34 = (uint64_t *)((int64_t)puVar28 + uVar41 + 0xd);
          lVar20 = 8;
          if (puVar34 < puStack_80) {
LAB_7fffa55cc9b0:
            if (*(uint64_t *)((int64_t)puVar10 + lVar20) == *puVar34) goto code_r0x7fffa55cc9c5;
            uVar33 = 0;
            for (uVar35 = *puVar34 ^ *(uint64_t *)((int64_t)puVar10 + lVar20); (uVar35 & 1) == 0;
                uVar35 = uVar35 >> 1 | 0x8000000000000000) {
              uVar33 = uVar33 + 1;
            }
            uVar35 = (uint64_t)(uVar33 >> 3) + lVar20;
            goto LAB_7fffa55cca71;
          }
LAB_7fffa55cc9d7:
          puVar21 = (uint64_t *)(lVar20 + (int64_t)puVar10);
          goto LAB_7fffa55cc9dc;
        }
        uVar33 = 0;
        for (uVar35 = *puVar16 ^ *puVar10; (uVar35 & 1) == 0;
            uVar35 = uVar35 >> 1 | 0x8000000000000000) {
          uVar33 = uVar33 + 1;
        }
        uVar35 = (uint64_t)(uVar33 >> 3);
      }
      else {
LAB_7fffa55cc9dc:
        if ((puVar34 < puVar3) && ((int)*puVar21 == (int)*puVar34)) {
          puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
          puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
        }
        if ((puVar34 < puVar1) && ((short)*puVar21 == (short)*puVar34)) {
          puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
          puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
        }
        if (puVar34 < puVar4) {
          puVar34 = (uint64_t *)((int64_t)puVar34 + (uint64_t)((char)*puVar21 == (char)*puVar34))
          ;
        }
        uVar35 = (int64_t)puVar34 - (int64_t)puVar16;
      }
LAB_7fffa55cca71:
      uVar41 = uVar41 + uVar35;
    }
    uVar41 = uVar41 + 4;
  }
  else {
    uVar41 = 0;
  }
  uStack_88 = 999999999;
  if (uVar8 < 5) {
    puVar21 = puVar28;
    FUN_7fffa549d210((uint64_t)&uStack_88 >> 0x23 ^ (uint64_t)&uStack_88);
    uVar36 = ((int64_t)puVar21 << 0x1c | (uint64_t)puVar21 >> 0x24) ^
             ((int64_t)puVar21 << 0x2a | (uint64_t)puVar21 >> 0x16) ^ (uint64_t)puVar21;
    uVar36 = (uVar36 << 0x14 | uVar36 >> 0x2c) ^ (uVar36 << 0x38 | uVar36 >> 8) ^ uVar36;
    uVar36 = (uVar36 << 0x28 | uVar36 >> 0x18) ^ (uVar36 << 0x30 | uVar36 >> 0x10) ^ uVar36;
    uVar36 = (uVar36 << 0x10 | uVar36 >> 0x30) ^ (uVar36 << 0x20 | uVar36 >> 0x20) ^ uVar36;
    uVar35 = uVar36 >> 0x20;
    uVar36 = uVar36 << 0x20 | uVar35;
    uVar35 = (uVar36 << 0x1c ^ uVar35 << 0x38 ^ uVar36) + 0x8c93ca4c;
  }
  else if (uVar8 == 5) {
    uVar35 = param_1 >> 0x18 ^ param_1;
    uVar35 = (uVar35 << 0x29 | uVar35 >> 0x17) ^ (uVar35 << 0xb | param_1 >> 0x35) ^ uVar35;
    lVar20 = FUN_7fffa5194f80(&uStack_88,0xffffffffa30fee6e,param_1,
                              (uVar35 << 0x21 | uVar35 >> 0x1f) ^ (uVar35 << 7 | uVar35 >> 0x39) ^
                              uVar35,puVar28);
    uVar35 = lVar20 - 0x7fad762a;
  }
  else {
    lVar20 = FUN_7fffa5427100((int64_t)puVar4 * 0x8123f93f + 0x16dee2a53c85815,
                              param_1 * 0x4000000000000001,0x8cd12b65,0x2426ca81);
    uVar35 = (uint64_t)(lVar20 * -0x131d0b969556be71) >> 8 ^ lVar20 * -0x131d0b969556be71;
    uVar35 = uVar35 >> 0x10 ^ uVar35;
    uVar35 = uVar35 >> 0x20 ^ uVar35;
  }
  uVar36 = uVar41;
  if (uVar41 < uVar35) {
    uVar36 = uVar35;
  }
  if (3 < uVar36) {
    if (uVar41 < uVar35) {
      puVar21 = puVar28;
    }
    else {
      uStack_88 = 1;
      puVar21 = (uint64_t *)((int64_t)puVar28 + 1U);
    }
    lVar20 = (int64_t)puVar28 + 0xd;
    uVar41 = uStack_88;
    do {
      puVar16 = (uint64_t *)((int64_t)puVar28 + 1);
      uVar33 = ((int)puVar16 - iVar39) - iStack_8c;
      puVar34 = (uint64_t *)((uint64_t)uVar33 + lVar9);
      uVar37 = (uint64_t)(uVar33 - uVar31);
      puVar29 = (uint64_t *)(uVar12 + uVar37);
      if (uVar30 <= uVar33) {
        puVar29 = puVar34;
      }
      if ((uVar33 - uVar30 < 0xfffffffd) && ((int)*puVar29 == *(int *)puVar16)) {
        puVar22 = puVar4;
        if (uVar33 < uVar30) {
          puVar22 = puVar11;
        }
        puVar19 = (uint64_t *)((int64_t)puVar28 + 5);
        puVar34 = (uint64_t *)((int64_t)puVar29 + 4);
        puVar17 = (uint64_t *)((int64_t)puVar28 + (int64_t)puVar22 + (5 - (int64_t)puVar34));
        if (puVar4 <= puVar17) {
          puVar17 = puVar4;
        }
        puVar40 = puVar19;
        puVar26 = puVar34;
        if (puVar19 < (uint64_t *)((int64_t)puVar17 - 7U)) {
          if (*puVar34 == *puVar19) {
            lVar24 = 0;
            do {
              puVar40 = (uint64_t *)(lVar20 + lVar24);
              if ((uint64_t *)((int64_t)puVar17 - 7U) <= puVar40) {
                puVar26 = (uint64_t *)((int64_t)puVar29 + lVar24 + 0xc);
                goto LAB_7fffa55ccf69;
              }
              uVar25 = *(uint64_t *)((int64_t)puVar28 + lVar24 + 0xd);
              uVar38 = *(uint64_t *)((int64_t)puVar29 + lVar24 + 0xc);
              lVar24 = lVar24 + 8;
            } while (uVar38 == uVar25);
            uVar33 = 0;
            for (uVar25 = uVar25 ^ uVar38; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar33 = uVar33 + 1;
            }
            uVar25 = (uint64_t)(uVar33 >> 3) + lVar24;
          }
          else {
            uVar33 = 0;
            for (uVar25 = *puVar34 ^ *puVar19; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar33 = uVar33 + 1;
            }
            uVar25 = (uint64_t)(uVar33 >> 3);
          }
        }
        else {
LAB_7fffa55ccf69:
          if ((puVar40 < (uint64_t *)((int64_t)puVar17 - 3U)) && ((int)*puVar26 == (int)*puVar40))
          {
            puVar40 = (uint64_t *)((int64_t)puVar40 + 4);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
          }
          if ((puVar40 < (uint64_t *)((int64_t)puVar17 - 1U)) &&
             ((short)*puVar26 == (short)*puVar40)) {
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
            puVar40 = (uint64_t *)((int64_t)puVar40 + 2);
          }
          if (puVar40 < puVar17) {
            puVar40 = (uint64_t *)
                      ((int64_t)puVar40 + (uint64_t)((char)*puVar26 == (char)*puVar40));
          }
          uVar25 = (int64_t)puVar40 - (int64_t)puVar19;
        }
        puVar34 = (uint64_t *)((int64_t)puVar34 + uVar25);
        if (puVar34 == puVar22) {
          puVar19 = (uint64_t *)((int64_t)puVar19 + uVar25);
          puVar34 = puVar19;
          puVar29 = puVar10;
          if (puVar19 < puStack_80) {
            if (*puVar10 == *puVar19) {
              lVar24 = 8;
LAB_7fffa55cd0b0:
              puVar34 = (uint64_t *)((int64_t)puVar28 + lVar24 + uVar25 + 5);
              if (puVar34 < puStack_80) {
                uVar38 = *puVar34;
                if (*(uint64_t *)((int64_t)puVar10 + lVar24) == uVar38) goto code_r0x7fffa55cd0e5;
                uVar33 = 0;
                for (uVar38 = uVar38 ^ *(uint64_t *)((int64_t)puVar10 + lVar24); (uVar38 & 1) == 0
                    ; uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                  uVar33 = uVar33 + 1;
                }
                puVar34 = (uint64_t *)((uint64_t)(uVar33 >> 3) + lVar24);
                goto LAB_7fffa55cd1bc;
              }
              puVar34 = (uint64_t *)((int64_t)puVar28 + lVar24 + uVar25 + 5);
              puVar29 = (uint64_t *)(lVar24 + (int64_t)puVar10);
              goto LAB_7fffa55cd111;
            }
            uVar33 = 0;
            for (uVar38 = *puVar10 ^ *puVar19; (uVar38 & 1) == 0;
                uVar38 = uVar38 >> 1 | 0x8000000000000000) {
              uVar33 = uVar33 + 1;
            }
            puVar34 = (uint64_t *)(uint64_t)(uVar33 >> 3);
          }
          else {
LAB_7fffa55cd111:
            if ((puVar34 < puVar3) && ((int)*puVar29 == (int)*puVar34)) {
              puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
              puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
            }
            if ((puVar34 < puVar1) && ((short)*puVar29 == (short)*puVar34)) {
              puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
              puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
            }
            if (puVar34 < puVar4) {
              puVar34 = (uint64_t *)
                        ((int64_t)puVar34 + (uint64_t)((char)*puVar29 == (char)*puVar34));
            }
            puVar34 = (uint64_t *)((int64_t)puVar34 - (int64_t)puVar19);
          }
LAB_7fffa55cd1bc:
          uVar25 = uVar25 + (int64_t)puVar34;
        }
        if (0xfffffffffffffffb < uVar25) goto LAB_7fffa55cd1e0;
        uVar25 = uVar25 + 4;
        uVar33 = 0x1f;
        if ((uint32_t)uVar41 != 0) {
          for (; (uint32_t)uVar41 >> uVar33 == 0; uVar33 = uVar33 - 1) {
          }
        }
        puVar34 = (uint64_t *)0xffffffffd72db1b3;
        if ((int)((int)uVar36 * 3 + (uVar33 ^ 0x1f) + -0x1e) < (int)uVar25 * 3) {
          uVar41 = 1;
          puVar21 = puVar16;
        }
        else {
          uVar25 = uVar36;
        }
      }
      else {
LAB_7fffa55cd1e0:
        uVar25 = uVar36;
      }
      uStack_88 = 999999999;
      if (uVar8 < 5) {
        uVar36 = param_1 + 0x41763feb >> 0x31 ^ param_1 + 0x41763feb;
        puVar28 = puVar16;
        FUN_7fffa549d210(~uVar25 | uVar37,((~uVar37 | uVar25) ^ uVar35) * -0xd722a2fd,uVar36,puVar16
                         ,uVar36);
        uVar37 = ((int64_t)puVar28 << 0x1c | (uint64_t)puVar28 >> 0x24) ^
                 ((int64_t)puVar28 << 0x2a | (uint64_t)puVar28 >> 0x16) ^ (uint64_t)puVar28;
        uVar37 = (uVar37 << 0x38 | uVar37 >> 8) ^ (uVar37 << 0x14 | uVar37 >> 0x2c) ^ uVar37;
        uVar37 = (uVar37 << 0x30 | uVar37 >> 0x10) ^ (uVar37 << 0x28 | uVar37 >> 0x18) ^ uVar37;
        uVar37 = (uVar37 << 0x10 | uVar37 >> 0x30) ^ (uVar37 << 0x20 | uVar37 >> 0x20) ^ uVar37;
        uVar36 = uVar37 >> 0x20;
        uVar37 = uVar37 << 0x20 | uVar36;
        uVar36 = (uVar37 << 0x1c ^ uVar36 << 0x38 ^ uVar37) + 0x8c93ca4c;
      }
      else if (uVar27 < 6) {
        uVar36 = param_1 >> 0x18 ^ param_1;
        uVar36 = (uVar36 << 0xb | param_1 >> 0x35) ^ (uVar36 << 0x29 | uVar36 >> 0x17) ^ uVar36;
        lVar24 = FUN_7fffa5194f80(&uStack_88,0xffffffffa30fee6e,FUN_7fffa5194f80,
                                  (uVar36 << 7 | uVar36 >> 0x39) ^ (uVar36 << 0x21 | uVar36 >> 0x1f)
                                  ^ uVar36,puVar16);
        uVar36 = lVar24 - 0x7fad762a;
      }
      else {
        lVar24 = FUN_7fffa5427100((int64_t)puVar4 * 0x8123f93f + 0x16dee2a53c85815,
                                  param_1 * 0x4000000000000001,puVar34,0x2426ca81);
        uVar36 = (uint64_t)(lVar24 * -0x131d0b969556be71) >> 8 ^ lVar24 * -0x131d0b969556be71;
        uVar36 = uVar36 >> 0x10 ^ uVar36;
        uVar36 = uVar36 >> 0x20 ^ uVar36;
      }
      if (uVar36 < 4) goto joined_r0x7fffa55cd7f4;
      iVar32 = 0x1f;
      if ((uint32_t)uStack_88 != 0) {
        for (; (uint32_t)uStack_88 >> iVar32 == 0; iVar32 = iVar32 + -1) {
        }
      }
      uVar33 = 0x1f;
      if ((uint32_t)uVar41 != 0) {
        for (; (uint32_t)uVar41 >> uVar33 == 0; uVar33 = uVar33 - 1) {
        }
      }
      if ((int)uVar36 * 4 - iVar32 <= (int)(((uVar33 ^ 0x1f) - 0x1b) + (int)uVar25 * 4))
      goto joined_r0x7fffa55cd7f4;
      uVar41 = uStack_88;
      puVar21 = puVar16;
      uVar25 = uVar36;
      if (puVar5 <= puVar16) goto joined_r0x7fffa55cd7f4;
      lVar20 = lVar20 + 1;
      puVar28 = puVar16;
    } while( true );
  }
  uVar41 = (int64_t)puVar28 - (int64_t)param_4;
  puVar28 = (uint64_t *)((int64_t)puVar28 + (uVar41 >> 8) + 1);
  *(uint32_t *)(param_1 + 300) = (uint32_t)(0x7ff < uVar41);
  goto LAB_7fffa55cc7e9;
code_r0x7fffa55cc8da:
  lVar20 = lVar20 + 8;
  goto LAB_7fffa55cc8c0;
code_r0x7fffa55cc9c5:
  puVar34 = puVar34 + 1;
  lVar20 = lVar20 + 8;
  if (puStack_80 <= puVar34) goto LAB_7fffa55cc9d7;
  goto LAB_7fffa55cc9b0;
code_r0x7fffa55cd0e5:
  lVar24 = lVar24 + 8;
  goto LAB_7fffa55cd0b0;
joined_r0x7fffa55cd7f4:
  puVar28 = puVar21;
  if (3 < uVar41) {
    uVar35 = (int64_t)puVar21 + (-uVar41 - lVar9) + -0xfffffffd;
    puVar16 = puVar10;
    lVar20 = lVar9;
    if ((uint32_t)uVar35 < uVar30) {
      puVar16 = puVar23;
      lVar20 = uVar12 - uVar31;
    }
    uVar35 = uVar35 & 0xffffffff;
    if (puVar16 < (uint64_t *)(lVar20 + uVar35) && param_4 < puVar21) {
      lVar24 = uVar35 + lVar20 + -1;
      for (lVar20 = 0; *(char *)((int64_t)puVar21 + lVar20 + -1) == *(char *)(lVar24 + lVar20);
          lVar20 = lVar20 + -1) {
        puVar28 = (uint64_t *)((int64_t)puVar21 + lVar20 + -1);
        if ((puVar28 <= param_4) || ((uint64_t *)(lVar24 + lVar20) <= puVar16)) {
          uVar25 = (uVar25 - lVar20) + 1;
          goto LAB_7fffa55cd8a7;
        }
      }
      uVar25 = uVar25 - lVar20;
      puVar28 = (uint64_t *)((int64_t)puVar21 + lVar20);
    }
LAB_7fffa55cd8a7:
    iStack_114 = iStack_8c;
    iStack_8c = (int)uVar41 + -3;
  }
  puVar21 = (uint64_t *)param_2[3];
  uVar35 = (int64_t)puVar28 - (int64_t)param_4;
  if (puVar2 < puVar28) {
    puVar16 = puVar21;
    if (param_4 <= puVar2) {
      puVar16 = (uint64_t *)((int64_t)puVar21 + ((int64_t)puVar2 - (int64_t)param_4));
      uVar36 = param_4[1];
      *puVar21 = *param_4;
      puVar21[1] = uVar36;
      if (0x10 < (int64_t)puVar2 - (int64_t)param_4) {
        lVar20 = 0x10;
        do {
          uVar13 = ((uint64_t *)((int64_t)param_4 + lVar20))[1];
          *(uint64_t *)((int64_t)puVar21 + lVar20) = *(uint64_t *)((int64_t)param_4 + lVar20);
          ((uint64_t *)((int64_t)puVar21 + lVar20))[1] = uVar13;
          puVar6 = (uint64_t *)((int64_t)param_4 + lVar20 + 0x10);
          uVar13 = puVar6[1];
          puVar7 = (uint64_t *)((int64_t)puVar21 + lVar20 + 0x10);
          *puVar7 = *puVar6;
          puVar7[1] = uVar13;
          lVar24 = lVar20 + 0x20;
          lVar20 = lVar20 + 0x20;
        } while ((uint64_t *)((int64_t)puVar21 + lVar24) < puVar16);
      }
      param_4 = puVar2;
    }
    if (param_4 < puVar28) {
      uVar36 = (int64_t)puVar28 - (int64_t)param_4;
      if ((uint64_t)((int64_t)puVar16 - (int64_t)param_4) < 0x20 || uVar36 < 4) {
LAB_7fffa55cda37:
        puVar21 = puVar16;
      }
      else {
        if (uVar36 < 0x20) {
          uVar37 = 0;
        }
        else {
          uVar37 = uVar36 & 0xffffffffffffffe0;
          lVar20 = 0;
          while( true ) {
            uVar13 = ((uint64_t *)((int64_t)param_4 + lVar20))[1];
            puVar6 = (uint64_t *)((int64_t)param_4 + lVar20 + 0x10);
            uVar14 = *puVar6;
            uVar15 = puVar6[1];
            *(uint64_t *)((int64_t)puVar16 + lVar20) =
                 *(uint64_t *)((int64_t)param_4 + lVar20);
            ((uint64_t *)((int64_t)puVar16 + lVar20))[1] = uVar13;
            puVar6 = (uint64_t *)((int64_t)puVar16 + lVar20 + 0x10);
            *puVar6 = uVar14;
            puVar6[1] = uVar15;
            if (uVar37 - 0x20 == lVar20) break;
            lVar20 = lVar20 + 0x20;
          }
          if (uVar36 == uVar37) goto LAB_7fffa55cdbd0;
          if ((uVar36 & 0x1c) == 0) {
            param_4 = (uint64_t *)((int64_t)param_4 + uVar37);
            puVar16 = (uint64_t *)((int64_t)puVar16 + uVar37);
            goto LAB_7fffa55cda37;
          }
        }
        uVar38 = uVar36 & 0xfffffffffffffffc;
        puVar21 = (uint64_t *)((int64_t)puVar16 + uVar38);
        for (; *(uint32_t *)((int64_t)puVar16 + uVar37) =
                    *(uint32_t *)((int64_t)param_4 + uVar37), uVar38 - 4 != uVar37;
            uVar37 = uVar37 + 4) {
        }
        if (uVar36 == uVar38) goto LAB_7fffa55cdbd0;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar38);
      }
      uVar33 = (int)puVar28 - (int)param_4 & 7;
      uVar36 = (uint64_t)uVar33;
      puVar34 = puVar21;
      puVar16 = param_4;
      if (uVar33 == 0) {
        puVar29 = param_4;
      }
      else {
        do {
          uVar36 = uVar36 - 1;
          puVar21 = (uint64_t *)((int64_t)puVar34 + 1);
          *(char *)puVar34 = (char)*puVar16;
          puVar29 = (uint64_t *)((int64_t)puVar16 + 1);
          puVar34 = puVar21;
          puVar16 = (uint64_t *)((int64_t)puVar16 + 1);
        } while (uVar36 != 0);
      }
      if ((uint64_t)((int64_t)param_4 - (int64_t)puVar28) < 0xfffffffffffffff9) {
        lVar20 = 0;
        do {
          *(uint8_t *)((int64_t)puVar21 + lVar20) = *(uint8_t *)((int64_t)puVar29 + lVar20);
          *(uint8_t *)((int64_t)puVar21 + lVar20 + 1) =
               *(uint8_t *)((int64_t)puVar29 + lVar20 + 1);
          *(uint8_t *)((int64_t)puVar21 + lVar20 + 2) =
               *(uint8_t *)((int64_t)puVar29 + lVar20 + 2);
          *(uint8_t *)((int64_t)puVar21 + lVar20 + 3) =
               *(uint8_t *)((int64_t)puVar29 + lVar20 + 3);
          *(uint8_t *)((int64_t)puVar21 + lVar20 + 4) =
               *(uint8_t *)((int64_t)puVar29 + lVar20 + 4);
          *(uint8_t *)((int64_t)puVar21 + lVar20 + 5) =
               *(uint8_t *)((int64_t)puVar29 + lVar20 + 5);
          *(uint8_t *)((int64_t)puVar21 + lVar20 + 6) =
               *(uint8_t *)((int64_t)puVar29 + lVar20 + 6);
          *(uint8_t *)((int64_t)puVar21 + lVar20 + 7) =
               *(uint8_t *)((int64_t)puVar29 + lVar20 + 7);
          lVar24 = lVar20 + 8;
          lVar20 = lVar20 + 8;
        } while ((uint64_t *)((int64_t)puVar29 + lVar24) != puVar28);
      }
    }
  }
  else {
    uVar36 = param_4[1];
    *puVar21 = *param_4;
    puVar21[1] = uVar36;
    if (uVar35 < 0x11) {
      lVar20 = param_2[1];
      param_2[3] = param_2[3] + uVar35;
      goto LAB_7fffa55cdbff;
    }
    lVar20 = param_2[3];
    uVar36 = param_4[3];
    *(uint64_t *)(lVar20 + 0x10) = param_4[2];
    *(uint64_t *)(lVar20 + 0x18) = uVar36;
    if (0x20 < (int64_t)uVar35) {
      uVar36 = lVar20 + 0x40;
      param_4 = param_4 + 6;
      while( true ) {
        uVar37 = param_4[-1];
        *(uint64_t *)(uVar36 - 0x20) = param_4[-2];
        *(uint64_t *)(uVar36 - 0x18) = uVar37;
        uVar37 = param_4[1];
        *(uint64_t *)(uVar36 - 0x10) = *param_4;
        *(uint64_t *)(uVar36 - 8) = uVar37;
        if (lVar20 + uVar35 <= uVar36) break;
        uVar36 = uVar36 + 0x20;
        param_4 = param_4 + 4;
      }
    }
  }
LAB_7fffa55cdbd0:
  lVar20 = param_2[1];
  param_2[3] = param_2[3] + uVar35;
  if (0xffff < uVar35) {
    *(uint32_t *)(param_2 + 9) = 1;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar20 - *param_2) >> 3);
  }
LAB_7fffa55cdbff:
  *(short *)(lVar20 + 4) = (short)uVar35;
  *(int *)param_2[1] = (int)uVar41;
  if (0xffff < uVar25 - 3) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
  }
  *(short *)(param_2[1] + 6) = (short)(uVar25 - 3);
  param_2[1] = param_2[1] + 8;
  if (*(int *)(param_1 + 300) != 0) {
    *(uint32_t *)(param_1 + 300) = 0;
  }
  puVar28 = (uint64_t *)((int64_t)puVar28 + uVar25);
  if (puVar5 < puVar28) {
    param_4 = puVar28;
LAB_7fffa55cc7e9:
  }
  else {
    do {
      iVar32 = iStack_114;
      uVar33 = ((int)puVar28 - iVar39) - iVar32;
      lVar20 = lVar9;
      if (uVar33 < uVar30) {
        lVar20 = uVar12 - uVar31;
      }
      param_4 = puVar28;
      iStack_114 = iVar32;
      if ((0xfffffffc < uVar33 - uVar30) ||
         (piVar18 = (int *)(lVar20 + (uint64_t)uVar33), *piVar18 != (int)*puVar28)) break;
      puVar21 = puVar4;
      if (uVar33 < uVar30) {
        puVar21 = puVar11;
      }
      puVar16 = (uint64_t *)((int64_t)puVar28 + 4);
      puVar34 = (uint64_t *)(piVar18 + 1);
      puVar29 = (uint64_t *)((int64_t)puVar28 + (int64_t)puVar21 + (4 - (int64_t)puVar34));
      if (puVar4 <= puVar29) {
        puVar29 = puVar4;
      }
      puVar22 = puVar16;
      puVar19 = puVar34;
      if (puVar16 < (uint64_t *)((int64_t)puVar29 - 7U)) {
        if (*puVar34 == *puVar16) {
          lVar20 = 0xc;
LAB_7fffa55cddc0:
          puVar22 = (uint64_t *)(lVar20 + (int64_t)puVar28);
          if (puVar22 < (uint64_t *)((int64_t)puVar29 - 7U)) {
            if (*(uint64_t *)((int64_t)piVar18 + lVar20) == *puVar22) goto code_r0x7fffa55cddd9;
            uVar33 = 0;
            for (uVar41 = *puVar22 ^ *(uint64_t *)((int64_t)piVar18 + lVar20); (uVar41 & 1) == 0;
                uVar41 = uVar41 >> 1 | 0x8000000000000000) {
              uVar33 = uVar33 + 1;
            }
            uVar41 = ((uint64_t)(uVar33 >> 3) + lVar20) - 4;
            goto LAB_7fffa55cdea6;
          }
          puVar19 = (uint64_t *)((int64_t)piVar18 + lVar20);
          goto LAB_7fffa55cde10;
        }
        uVar33 = 0;
        for (uVar41 = *puVar34 ^ *puVar16; (uVar41 & 1) == 0;
            uVar41 = uVar41 >> 1 | 0x8000000000000000) {
          uVar33 = uVar33 + 1;
        }
        uVar41 = (uint64_t)(uVar33 >> 3);
      }
      else {
LAB_7fffa55cde10:
        if ((puVar22 < (uint64_t *)((int64_t)puVar29 - 3U)) && ((int)*puVar19 == (int)*puVar22)) {
          puVar22 = (uint64_t *)((int64_t)puVar22 + 4);
          puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
        }
        if ((puVar22 < (uint64_t *)((int64_t)puVar29 - 1U)) &&
           ((short)*puVar19 == (short)*puVar22)) {
          puVar22 = (uint64_t *)((int64_t)puVar22 + 2);
          puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
        }
        if (puVar22 < puVar29) {
          puVar22 = (uint64_t *)((int64_t)puVar22 + (uint64_t)((char)*puVar19 == (char)*puVar22))
          ;
        }
        uVar41 = (int64_t)puVar22 - (int64_t)puVar16;
      }
LAB_7fffa55cdea6:
      if ((uint64_t *)((int64_t)puVar34 + uVar41) == puVar21) {
        puVar16 = (uint64_t *)((int64_t)puVar16 + uVar41);
        puVar21 = puVar10;
        puVar34 = puVar16;
        if (puVar16 < puStack_80) {
          if (*puVar10 == *puVar16) {
            puVar34 = (uint64_t *)((int64_t)puVar28 + uVar41 + 0xc);
            lVar20 = 8;
            if (puVar34 < puStack_80) {
LAB_7fffa55cdf80:
              if (*(uint64_t *)((int64_t)puVar10 + lVar20) == *puVar34) goto code_r0x7fffa55cdf90;
              uVar33 = 0;
              for (uVar35 = *(uint64_t *)((int64_t)puVar10 + lVar20) ^ *puVar34; (uVar35 & 1) == 0
                  ; uVar35 = uVar35 >> 1 | 0x8000000000000000) {
                uVar33 = uVar33 + 1;
              }
              uVar35 = (uint64_t)(uVar33 >> 3) + lVar20;
              goto LAB_7fffa55ce04f;
            }
LAB_7fffa55cdfa2:
            puVar21 = (uint64_t *)(lVar20 + (int64_t)puVar10);
            goto LAB_7fffa55cdfa5;
          }
          uVar33 = 0;
          for (uVar35 = *puVar10 ^ *puVar16; (uVar35 & 1) == 0;
              uVar35 = uVar35 >> 1 | 0x8000000000000000) {
            uVar33 = uVar33 + 1;
          }
          uVar35 = (uint64_t)(uVar33 >> 3);
        }
        else {
LAB_7fffa55cdfa5:
          if ((puVar34 < puVar3) && ((int)*puVar21 == (int)*puVar34)) {
            puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
          }
          if ((puVar34 < puVar1) && ((short)*puVar21 == (short)*puVar34)) {
            puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
          }
          if (puVar34 < puVar4) {
            puVar34 = (uint64_t *)
                      ((int64_t)puVar34 + (uint64_t)((char)*puVar21 == (char)*puVar34));
          }
          uVar35 = (int64_t)puVar34 - (int64_t)puVar16;
        }
LAB_7fffa55ce04f:
        uVar41 = uVar41 + uVar35;
      }
      if (puVar28 <= puVar2) {
        uVar35 = puVar28[1];
        puVar21 = (uint64_t *)param_2[3];
        *puVar21 = *puVar28;
        puVar21[1] = uVar35;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar41 + 1) {
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        *(uint32_t *)(param_2 + 9) = 2;
      }
      puVar28 = (uint64_t *)((int64_t)puVar28 + uVar41 + 4);
      *(short *)(param_2[1] + 6) = (short)(uVar41 + 1);
      param_2[1] = param_2[1] + 8;
      param_4 = puVar28;
      iStack_114 = iStack_8c;
      iStack_8c = iVar32;
    } while (puVar28 <= puVar5);
  }
  if (puVar5 <= puVar28) goto LAB_7fffa55ce0b8;
  goto LAB_7fffa55cc808;
code_r0x7fffa55cddd9:
  lVar20 = lVar20 + 8;
  goto LAB_7fffa55cddc0;
code_r0x7fffa55cdf90:
  puVar34 = puVar34 + 1;
  lVar20 = lVar20 + 8;
  if (puStack_80 <= puVar34) goto LAB_7fffa55cdfa2;
  goto LAB_7fffa55cdf80;
}


// ============================================================================
// Function : FUN_7fffa55ce110  |  RVA: 0xe5e110  |  Size: 102 bytes
// Callers  : FUN_7fffa517b810@0xa0b810
// Callees  : FUN_7fffa4e90ae0@0x720ae0, FUN_7fffa54539d0@0xce39d0
// ============================================================================
bool FUN_7fffa55ce110(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  
  iVar1 = FUN_7fffa4e90ae0(param_2,param_1);
  uVar3 = *(uint32_t *)(param_2 + 0xc);
  uVar4 = (uint64_t)uVar3;
  do {
    if (uVar3 == 0) {
      lVar2 = 0;
      break;
    }
    uVar3 = (int)uVar4 - 1;
    uVar4 = (uint64_t)uVar3;
    lVar2 = FUN_7fffa54539d0();
    lVar2 = (int64_t)*(int *)(param_2 + 0x10) + *(int64_t *)(lVar2 + 0x60) + uVar4 * 0x14;
  } while ((iVar1 <= *(int *)(lVar2 + 4)) || (*(int *)(lVar2 + 8) < iVar1));
  return lVar2 != 0;
}


// ============================================================================
// Function : FUN_7fffa55ce178  |  RVA: 0xe5e178  |  Size: 64 bytes
// Callers  : none
// Callees  : FUN_7fffa52d3c30@0xb63c30
// ============================================================================
uint8_t FUN_7fffa55ce178(void)

{
  uint64_t uVar1;
  
  uVar1 = 0;
  do {
    if (*(int64_t *)(&DAT_7fffa4782180 + uVar1) != 0) {
      FUN_7fffa52d3c30();
      *(uint64_t *)(&DAT_7fffa4782180 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}


// ============================================================================
// Function : FUN_7fffa55ce1b8  |  RVA: 0xe5e1b8  |  Size: 225 bytes
// Callers  : FUN_7fffa4a993dc@0x3293dc
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa51562d4@0x9e62d4, FUN_7fffa4f54478@0x7e4478
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa55ce1b8(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4
                     )

{
  int64_t *plVar1;
  uint32_t uVar2;
  int64_t *plVar3;
  uint8_t auStackX_10 [16];
  uint32_t *puStackX_20;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t *plStack_40;
  int64_t *plStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  puStackX_20 = param_4;
  FUN_7fffa5476b88(*param_2);
  plVar1 = _DAT_7fffa4781c18 + _DAT_7fffa4781c10;
  for (plVar3 = _DAT_7fffa4781c18; plStack_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lStack_58 = *plVar3;
    if ((lStack_58 != 0) && (uVar2 = *(uint32_t *)(lStack_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((uint8_t)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        uStack_20 = param_3[2];
        uStack_28 = param_3[1];
        uStack_30 = *param_3;
        plStack_38 = &lStack_58;
        lStack_50 = lStack_58;
        lStack_48 = lStack_58;
        FUN_7fffa51562d4(auStackX_10,&lStack_48,&plStack_38,&lStack_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  FUN_7fffa4f54478(*param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa55ce2a0  |  RVA: 0xe5e2a0  |  Size: 16 bytes
// Callers  : FUN_7fffa52d8e60@0xb68e60, FUN_7fffa50c6000@0x956000
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_7fffa55ce2a0(void)

{
  uint32_t uVar1;
  uint64_t uVar2;
  
  uVar2 = (uint64_t)_DAT_7fffa4781e48;
  uVar1 = _DAT_7fffa4781e48;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (uint64_t)uVar1;
    (*(code *)&DAT_7ff850519980)(uVar2 * 0x28 + 0x7fffa4781e20);
    _DAT_7fffa4781e48 = _DAT_7fffa4781e48 - 1;
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa55ce2b0  |  RVA: 0xe5e2b0  |  Size: 47 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_7fffa55ce2b0(void)

{
  uint32_t uVar1;
  uint64_t unaff_RBX;
  
  do {
    uVar1 = (int)unaff_RBX - 1;
    unaff_RBX = (uint64_t)uVar1;
    (*(code *)&DAT_7ff850519980)(unaff_RBX * 0x28 + 0x7fffa4781e20);
    _DAT_7fffa4781e48 = _DAT_7fffa4781e48 + -1;
  } while (uVar1 != 0);
  return 1;
}


// ============================================================================
// Function : FUN_7fffa55ce2df  |  RVA: 0xe5e2df  |  Size: 8 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t FUN_7fffa55ce2df(void)

{
  return 1;
}


// ============================================================================
// Function : FUN_7fffa55ce2f0  |  RVA: 0xe5e2f0  |  Size: 309 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa55ce3cb) overlaps instruction at (ram,0x7fffa55ce3c8)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa55ce416) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ce41f) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ce3cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa55ce2f0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t in_R11;
  int64_t in_stack_00000028;
  uint8_t in_stack_00000030;
  int64_t lStack_18;
  uint64_t uStack_10;
  
  lStack_18 = (~in_R11 << 0x23) + ~in_R11;
  uStack_10 = (uint64_t)(in_stack_00000028 * -0x33807e39c676eeab) >> 0x3a ^
              in_stack_00000028 * -0x33807e39c676eeab;
  uVar3 = (int64_t)&lStack_18 << 0x20 | (uint64_t)&lStack_18 >> 0x20;
  uVar1 = ((int64_t)&lStack_18 << 0x2e | (uint64_t)&lStack_18 >> 0x12) ^ uVar3 ^
          (uint64_t)&lStack_18;
  uVar2 = ((int64_t)&uStack_10 * 2 | (uint64_t)((int64_t)&uStack_10 < 0)) ^
          ((int64_t)&uStack_10 * 0x10000000 | (uint64_t)&uStack_10 >> 0x24) ^
          (uint64_t)&uStack_10;
  uVar2 = uVar2 >> 0x3a ^ uVar2;
  (*(code *)((int64_t)
             (short)(0xfcf1U >> (in_stack_00000030 & 0xf) |
                    -0x30f << 0x10 - (in_stack_00000030 & 0xf)) + 0x7fffa549f311))
            (uVar2 - 0xa189f4df,uVar3,uVar2,
             (uVar1 & 0xffffffff) * 0xac90e9cd +
             ((uVar1 & 0xffffffff) * 0xffffffff + (uVar1 >> 0x20) * 0xac90e9cd << 0x20) ^
             (uint64_t)DAT_7fffa5784960);
  return;
}


// ============================================================================
// Function : FUN_7fffa55ce440  |  RVA: 0xe5e440  |  Size: 20838 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55d2af0) */
/* WARNING: Type propagation algorithm not settling */

int64_t FUN_7fffa55ce440(int64_t param_1,uint64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint32_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  bool bVar13;
  uint8_t bVar14;
  uint16_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint8_t bVar22;
  uint8_t bVar23;
  int64_t lVar24;
  uint32_t uVar25;
  uint32_t uVar26;
  uint64_t *puVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  int iVar31;
  int iVar30;
  uint64_t *puVar32;
  uint64_t in_R10;
  uint32_t *puVar33;
  uint64_t *puVar34;
  int64_t lVar35;
  int iVar36;
  uint32_t uVar37;
  uint64_t *puVar38;
  uint64_t *puVar39;
  uint32_t uVar40;
  uint64_t unaff_R12;
  uint64_t uVar41;
  uint32_t uVar42;
  uint64_t unaff_R13;
  int64_t lVar43;
  uint64_t *puVar44;
  uint64_t *puVar45;
  uint32_t uVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint64_t uVar49;
  uint64_t uVar50;
  bool bVar51;
  uint32_t uStack_88;
  uint32_t uStack_7c;
  uint64_t *puStack_58;
  
  uVar20 = unaff_R13 ^ unaff_R12;
  uVar41 = ~in_R10;
  uVar47 = ~unaff_R12 & ~unaff_R13;
  uVar19 = *(uint32_t *)(param_1 + 0x18);
  uVar40 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  lVar10 = *(int64_t *)(param_1 + 8);
  uVar20 = (uVar20 | uVar41) * 0xf9d2031d +
           (uVar47 & uVar41) * -0xb49772a2 + (uVar41 & uVar20) * -0xf9d2031d +
           (unaff_R12 | unaff_R13 | in_R10) * -0x7fc7018a + (uVar20 ^ uVar41) * -0xc5019205 +
           ((~unaff_R12 | ~unaff_R13) ^ in_R10) * 0x34d07118 + (in_R10 & uVar47) * 0x34d07118;
  uVar26 = (uint32_t)uVar20;
  bVar14 = (uint8_t)uVar20;
  uVar46 = (uint32_t)lVar10;
  iVar36 = ((int)param_5 + (int)param_4) - uVar46;
  uVar37 = iVar36 - uVar40;
  if (iVar36 - uVar19 <= uVar40) {
    uVar37 = uVar19;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar37 = uVar19;
  }
  puVar5 = (uint64_t *)((uint64_t)uVar37 + lVar10);
  bVar51 = param_4 == puVar5;
  if ((-0xdfac716 << (bVar14 & 0x1f) | 0xf20538eaU >> 0x20 - (bVar14 & 0x1f)) <
      ((uVar26 + 0x60ab60b1) * 0x1000 | uVar26 + 0x60ab60b1 >> 0x14)) {
    bVar51 = (int64_t)param_4 < (int64_t)puVar5;
  }
  puVar39 = (uint64_t *)((uint64_t)bVar51 + (int64_t)param_4);
  iVar36 = (int)puVar39 - uVar46;
  uVar28 = iVar36 - uVar40;
  if (iVar36 - uVar19 <= uVar40) {
    uVar28 = uVar19;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar28 = uVar19;
  }
  uVar19 = param_3[1];
  uVar28 = iVar36 - uVar28;
  uVar40 = uVar19;
  if (uVar28 < uVar19) {
    uVar40 = 0;
  }
  puVar6 = (uint64_t *)((int64_t)param_4 + param_5);
  puVar38 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  uVar9 = *param_3;
  uStack_7c = 0;
  if (uVar9 <= uVar28) {
    uStack_7c = uVar9;
  }
  puVar34 = (uint64_t *)((int64_t)param_4 + (uint64_t)bVar51 + 1);
  lVar11 = *(int64_t *)(param_1 + 0x70);
  iVar36 = *(int *)(param_1 + 0x110);
  lVar12 = *(int64_t *)(param_1 + 0x80);
  uVar15 = (uint16_t)uVar20;
  puStack_58 = param_4;
  if (iVar36 < 6) {
    if (iVar36 == 5) {
      if (puVar34 <= puVar38) {
        puVar1 = (uint64_t *)((int64_t)puVar6 - 1);
        puVar2 = (uint64_t *)((int64_t)puVar6 - 7);
        bVar22 = 0x40 - (char)*(uint32_t *)(param_1 + 0x108);
        puVar3 = puVar6 + -4;
        bVar23 = 0x40 - (char)*(uint32_t *)(param_1 + 0x104);
        puVar4 = (uint64_t *)((int64_t)puVar6 - 3);
LAB_7fffa55d0dd8:
        puVar32 = puVar39 + 0x20;
        uVar41 = *puVar39;
        lVar43 = -(uint64_t)uStack_7c;
        uVar47 = (uVar20 ^ 0xcf1bbcdcfd53f411) * uVar41 >> (bVar22 & 0x3f);
        uVar21 = (uint64_t)*(uint32_t *)(lVar11 + uVar47 * 4);
        puVar27 = (uint64_t *)(uVar21 + lVar10);
        uVar48 = 1;
        while( true ) {
          uVar41 = uVar41 * -0x30e4432345000000 >> (bVar23 & 0x3f);
          uVar29 = *(uint32_t *)(lVar12 + uVar41 * 4);
          uVar49 = (uint64_t)uVar29;
          uStack_88 = (uint32_t)puVar39;
          uVar25 = uStack_88 & uVar46;
          if (((uVar26 ^ 0x949fe5c3) << 0x10 | (uVar26 ^ 0x949fe5c3) >> 0x10) <=
              ~(uVar26 + 0xc5b7e649)) {
            uVar25 = uStack_88 - uVar46;
          }
          *(uint32_t *)(lVar12 + uVar41 * 4) = uVar25;
          *(uint32_t *)(lVar11 + uVar47 * 4) = uVar25;
          if ((*(int *)((int64_t)puVar39 + lVar43 + 1) == *(int *)((int64_t)puVar39 + 1)) &&
             (uStack_7c != 0)) {
            puVar34 = (uint64_t *)((int64_t)puVar39 + 5);
            puVar32 = (uint64_t *)((int64_t)puVar39 + lVar43 + 5);
            if (puVar2 <= puVar34) {
              puVar27 = puVar34;
              goto LAB_7fffa55d12d3;
            }
            if (*puVar32 != *puVar34) {
              uVar29 = 0;
              for (uVar41 = *puVar32 ^ *puVar34; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar41 = (uint64_t)(uVar29 >> 3);
              goto LAB_7fffa55d133b;
            }
            lVar24 = 0;
            goto LAB_7fffa55d1080;
          }
          uVar41 = *puVar34;
          uVar47 = (uVar20 + 0x30e44322ecae0846 ^ 0xffffffff8001fcdb) * uVar41;
          if (uVar26 + 0x56197a0b <= ((uVar26 + 0x6fc873ec) * 0x800000 | uVar26 + 0x6fc873ec >> 9))
          {
            uVar47 = 0xcf1bbcdd029bf4d5 - uVar20 & uVar41;
          }
          uVar47 = uVar47 >> (bVar22 & 0x3f);
          if ((uVar37 < (uint32_t)uVar21) && (*puVar27 == *puVar39)) {
            puVar32 = puVar39 + 1;
            puVar45 = puVar27 + 1;
            if (puVar2 <= puVar32) {
              puVar44 = puVar32;
              goto LAB_7fffa55d1588;
            }
            if (*puVar45 != *puVar32) {
              uVar40 = 0;
              for (uVar41 = *puVar45 ^ *puVar32; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar50 = (uint64_t)(uVar40 >> 3);
              goto LAB_7fffa55d15f7;
            }
            lVar43 = 0;
            goto LAB_7fffa55d1100;
          }
          uVar42 = *(uint32_t *)(lVar11 + uVar47 * 4);
          uVar21 = (uint64_t)uVar42;
          puVar27 = (uint64_t *)(lVar10 + uVar21);
          if ((uVar37 < uVar29) && (puVar33 = (uint32_t *)(lVar10 + uVar49), *puVar33 == (uint32_t)*puVar39)
             ) break;
          if (puVar32 <= puVar34) {
            uVar48 = uVar48 + 1;
            puVar32 = puVar32 + 0x20;
          }
          puVar45 = (uint64_t *)((int64_t)puVar34 + uVar48);
          puVar39 = puVar34;
          puVar34 = puVar45;
          if (puVar38 < puVar45) goto LAB_7fffa55d358b;
        }
        if ((uVar37 < uVar42) && (*puVar27 == uVar41)) {
          puVar39 = puVar34 + 1;
          puVar32 = puVar27 + 1;
          if (puVar39 < puVar2) {
            if (*puVar32 == *puVar39) {
              lVar24 = lVar10 + 0x10 + uVar21;
              lVar43 = 0;
              do {
                puVar32 = (uint64_t *)((int64_t)puVar34 + lVar43 + 0x10);
                if (puVar2 <= puVar32) {
                  puVar45 = (uint64_t *)((int64_t)puVar34 + lVar43 + 0x10);
                  puVar32 = (uint64_t *)(lVar24 + lVar43);
                  goto LAB_7fffa55d1805;
                }
                uVar41 = *puVar32;
                uVar49 = *(uint64_t *)(lVar24 + lVar43);
                lVar43 = lVar43 + 8;
              } while (uVar49 == uVar41);
              uVar40 = 0;
              for (uVar49 = uVar49 ^ uVar41; (uVar49 & 1) == 0;
                  uVar49 = uVar49 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar50 = (uint64_t)(uVar40 >> 3) + lVar43;
            }
            else {
              uVar40 = 0;
              for (uVar41 = *puVar32 ^ *puVar39; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar50 = (uint64_t)(uVar40 >> 3);
            }
          }
          else {
            puVar45 = puVar39;
LAB_7fffa55d1805:
            if ((puVar45 < puVar4) && ((uint32_t)*puVar32 == (uint32_t)*puVar45)) {
              puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            }
            if ((puVar45 < puVar1) && ((short)*puVar32 == (short)*puVar45)) {
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
              puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
            }
            if (puVar45 < puVar6) {
              puVar45 = (uint64_t *)
                        ((int64_t)puVar45 + (uint64_t)((char)*puVar32 == (char)*puVar45));
            }
            uVar50 = (int64_t)puVar45 - (int64_t)puVar39;
          }
          uVar50 = uVar50 + 8;
          uStack_88 = (int)puVar34 - (int)puVar27;
          if (puStack_58 < puVar34) {
            puVar32 = (uint64_t *)(lVar10 + -1 + uVar21);
            puVar39 = puVar34;
            while (puVar27 = (uint64_t *)((int64_t)puVar39 + -1),
                  *(char *)puVar27 == (char)*puVar32) {
              uVar50 = uVar50 + 1;
              puVar39 = puVar27;
              if ((puVar27 <= puStack_58) ||
                 (bVar51 = puVar32 <= puVar5, puVar32 = (uint64_t *)((int64_t)puVar32 + -1),
                 bVar51)) goto LAB_7fffa55d18de;
            }
          }
          else {
            puVar39 = puVar34;
          }
        }
        else {
          puVar32 = (uint64_t *)(puVar33 + 1);
          puVar27 = (uint64_t *)((int64_t)puVar39 + 4);
          if (puVar27 < puVar2) {
            uVar41 = *puVar27;
            uVar21 = *puVar32;
            bVar51 = uVar21 != uVar41 && (int64_t)uVar41 <= (int64_t)uVar21;
            if (0x3231bbfc < (uVar26 | 1) * -0x34a19d19) {
              bVar51 = uVar21 == uVar41;
            }
            if (bVar51) {
              lVar24 = lVar10 + 0xc + uVar49;
              lVar43 = 0;
              do {
                puVar32 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0xc);
                if (puVar2 <= puVar32) {
                  puVar32 = (uint64_t *)(lVar24 + lVar43);
                  puVar45 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0xc);
                  goto LAB_7fffa55d1694;
                }
                uVar41 = *(uint64_t *)(lVar24 + lVar43);
                uVar21 = *puVar32;
                lVar43 = lVar43 + 8;
              } while (uVar41 == uVar21);
              uVar40 = 0;
              for (uVar21 = uVar21 ^ uVar41; (uVar21 & 1) == 0;
                  uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar41 = (uint64_t)(uVar40 >> 3) + lVar43;
            }
            else {
              uVar40 = 0;
              for (uVar41 = uVar41 ^ uVar21; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar41 = (uint64_t)(uVar40 >> 3);
            }
          }
          else {
            puVar45 = puVar27;
LAB_7fffa55d1694:
            if ((puVar45 < puVar4) && ((uint32_t)*puVar32 == (uint32_t)*puVar45)) {
              puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            }
            if ((puVar45 < puVar1) && ((short)*puVar32 == (short)*puVar45)) {
              puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            }
            if (puVar45 < puVar6) {
              puVar45 = (uint64_t *)
                        ((int64_t)puVar45 + (uint64_t)((char)*puVar32 == (char)*puVar45));
            }
            uVar41 = (int64_t)puVar45 - (int64_t)puVar27;
          }
          uStack_88 = uStack_88 - (int)puVar33;
          uVar50 = uVar41 | 4;
          if ((int64_t)(int)((uVar26 + 0x4725bec4) * 0x200000 | uVar26 + 0x4725bec4 >> 0xb) <=
              (int64_t)
              (uint64_t)(0x3ea3c6bdU >> (bVar14 & 0x1f) | 0x3ea3c6bd << 0x20 - (bVar14 & 0x1f))) {
            uVar50 = uVar41 + 4;
          }
          if (puStack_58 < puVar39) {
            lVar24 = uVar49 + lVar10 + -1;
            for (lVar43 = 0;
                *(char *)((int64_t)puVar39 + lVar43 + -1) == *(char *)(lVar24 + lVar43);
                lVar43 = lVar43 + -1) {
              puVar32 = (uint64_t *)((int64_t)puVar39 + lVar43 + -1);
              if ((puVar32 <= puStack_58) || ((uint64_t *)(lVar43 + lVar24) <= puVar5)) {
                uVar50 = (uVar50 - lVar43) + 1;
                puVar39 = puVar32;
                goto LAB_7fffa55d18de;
              }
            }
            uVar50 = uVar50 - lVar43;
            puVar39 = (uint64_t *)((int64_t)puVar39 + lVar43);
          }
        }
        goto LAB_7fffa55d18de;
      }
    }
    else {
LAB_7fffa55cfa6c:
      if (puVar34 <= puVar38) {
        puVar1 = puVar6 + -4;
        puVar2 = (uint64_t *)((int64_t)puVar6 - 3);
        puVar3 = (uint64_t *)((int64_t)puVar6 - 1);
        iVar36 = 0x20 - *(int *)(param_1 + 0x104);
        puVar4 = (uint64_t *)((int64_t)puVar6 - 7);
        bVar22 = 0x40 - (char)*(uint32_t *)(param_1 + 0x108);
LAB_7fffa55cfaf0:
        puVar32 = puVar39 + 0x20;
        lVar43 = -(uint64_t)uStack_7c;
        uVar41 = *puVar39;
        uVar48 = uVar41 * -0x30e44323485a9b9d >> (bVar22 & 0x3f);
        uVar47 = (uint64_t)*(uint32_t *)(lVar11 + uVar48 * 4);
        puVar27 = (uint64_t *)(uVar47 + lVar10);
        uVar21 = 1;
        while( true ) {
          uVar25 = 0x3de446e7U >> (bVar14 & 0x1f) | 0x3de446e7 << 0x20 - (bVar14 & 0x1f);
          uVar42 = (int)uVar41 * -0x61c8864f;
          bVar23 = (uint8_t)iVar36;
          iVar31 = (int)puVar39;
          iVar30 = iVar31 - uVar46;
          uVar29 = uVar42 >> (bVar23 & 0x1f);
          if (~((uVar26 ^ 0xecff3b5d) << 7 | (uVar26 ^ 0xecff3b5d) >> 0x19) <=
              (uVar25 << 9 | uVar25 >> 0x17)) {
            uVar29 = iVar36 + uVar42;
          }
          uVar25 = *(uint32_t *)(lVar12 + (uint64_t)uVar29 * 4);
          uVar49 = (uint64_t)uVar25;
          *(int *)(lVar12 + (uint64_t)uVar29 * 4) = iVar30;
          *(int *)(lVar11 + uVar48 * 4) = iVar30;
          if ((*(int *)((int64_t)puVar39 + lVar43 + 1) == *(int *)((int64_t)puVar39 + 1)) &&
             (uStack_7c != 0)) {
            puVar34 = (uint64_t *)((int64_t)puVar39 + 5);
            puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + 5);
            puVar32 = puVar34;
            if (puVar4 <= puVar34) goto joined_r0x7fffa55cfcbb;
            if (*puVar27 != *puVar34) {
              uVar29 = 0;
              for (uVar41 = *puVar34 ^ *puVar27; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar41 = (uint64_t)(uVar29 >> 3);
              goto LAB_7fffa55cfe55;
            }
            lVar24 = 0xd;
            goto LAB_7fffa55cfd10;
          }
          uVar41 = *puVar34;
          uVar48 = (uVar20 + 0xcdcb7a55fb466149 << 0x2c | uVar20 + 0xcdcb7a55fb466149 >> 0x14) *
                   uVar41 >> (bVar22 & 0x3f);
          if ((uVar37 < (uint32_t)uVar47) && (*puVar27 == *puVar39)) {
            puVar32 = puVar39 + 1;
            puVar45 = puVar27 + 1;
            puVar44 = puVar32;
            if (puVar4 <= puVar32) goto joined_r0x7fffa55cfd5a;
            if (*puVar45 != *puVar32) {
              uVar40 = 0;
              for (uVar41 = *puVar45 ^ *puVar32; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar41 = (uint64_t)(uVar40 >> 3);
              goto LAB_7fffa55d0248;
            }
            lVar43 = 0x10;
            goto LAB_7fffa55d0060;
          }
          uVar29 = *(uint32_t *)(lVar11 + uVar48 * 4);
          uVar47 = (uint64_t)uVar29;
          puVar27 = (uint64_t *)(lVar10 + uVar47);
          if ((uVar37 < uVar25) && (puVar33 = (uint32_t *)(lVar10 + uVar49), *puVar33 == (uint32_t)*puVar39)
             ) break;
          if (puVar32 <= puVar34) {
            uVar21 = uVar21 + 1;
            puVar32 = puVar32 + 0x20;
          }
          puVar45 = (uint64_t *)((int64_t)puVar34 + uVar21);
          puVar39 = puVar34;
          puVar34 = puVar45;
          if (puVar38 < puVar45) goto LAB_7fffa55d0d2f;
        }
        if ((uVar37 < uVar29) && (*puVar27 == uVar41)) {
          puVar39 = puVar27 + 1;
          puVar32 = puVar34 + 1;
          if (puVar32 < puVar4) {
            if (*puVar39 == *puVar32) {
              lVar43 = lVar10 + 0x10 + uVar47;
              lVar24 = 0;
              do {
                puVar39 = (uint64_t *)((int64_t)puVar34 + lVar24 + 0x10);
                if (puVar4 <= puVar39) {
                  puVar39 = (uint64_t *)(lVar43 + lVar24);
                  puVar45 = (uint64_t *)((int64_t)puVar34 + lVar24 + 0x10);
                  goto LAB_7fffa55d042a;
                }
                uVar41 = *(uint64_t *)(lVar43 + lVar24);
                uVar49 = *puVar39;
                lVar24 = lVar24 + 8;
              } while (uVar41 == uVar49);
              uVar40 = 0;
              for (uVar41 = uVar41 ^ uVar49; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar41 = (uint64_t)(uVar40 >> 3) + lVar24;
            }
            else {
              uVar40 = 0;
              for (uVar41 = *puVar32 ^ *puVar39; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar41 = (uint64_t)(uVar40 >> 3);
            }
          }
          else {
            puVar45 = puVar32;
LAB_7fffa55d042a:
            if ((puVar45 < puVar2) && ((uint32_t)*puVar39 == (uint32_t)*puVar45)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
              puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
            }
            if ((puVar45 < puVar3) && ((short)*puVar39 == (short)*puVar45)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
              puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
            }
            if (puVar45 < puVar6) {
              puVar45 = (uint64_t *)
                        ((int64_t)puVar45 + (uint64_t)((char)*puVar39 == (char)*puVar45));
            }
            uVar41 = (int64_t)puVar45 - (int64_t)puVar32;
          }
          uVar29 = (int)puVar34 - (int)puVar27;
          lVar43 = uVar41 + 8;
          if (param_4 < puVar34) {
            lVar35 = lVar10 + -1 + uVar47;
            for (lVar24 = 0;
                *(char *)((int64_t)puVar34 + lVar24 + -1) == *(char *)(lVar35 + lVar24);
                lVar24 = lVar24 + -1) {
              puVar39 = (uint64_t *)((int64_t)puVar34 + lVar24 + -1);
              if ((puVar39 <= param_4) || ((uint64_t *)(lVar35 + lVar24) <= puVar5)) {
                lVar43 = lVar43 + 1;
                goto LAB_7fffa55d04f0;
              }
              lVar43 = lVar43 + 1;
            }
            puVar39 = (uint64_t *)(lVar24 + (int64_t)puVar34);
          }
          else {
            puVar39 = puVar34;
          }
        }
        else {
          puVar32 = (uint64_t *)((int64_t)puVar39 + 4);
          puVar27 = (uint64_t *)(puVar33 + 1);
          if (puVar32 < puVar4) {
            if (*puVar27 == *puVar32) {
              lVar24 = lVar10 + 0xc + uVar49;
              lVar43 = 0;
              do {
                puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0xc);
                if (puVar4 <= puVar27) {
                  puVar27 = (uint64_t *)(lVar24 + lVar43);
                  puVar45 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0xc);
                  goto LAB_7fffa55d0311;
                }
                uVar41 = *puVar27;
                uVar47 = *(uint64_t *)(lVar24 + lVar43);
                lVar43 = lVar43 + 8;
              } while (uVar47 == uVar41);
              uVar40 = 0;
              for (uVar41 = uVar41 ^ uVar47; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar41 = (uint64_t)(uVar40 >> 3) + lVar43;
            }
            else {
              uVar40 = 0;
              for (uVar41 = *puVar27 ^ *puVar32; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar41 = (uint64_t)(uVar40 >> 3);
            }
          }
          else {
            puVar45 = puVar32;
LAB_7fffa55d0311:
            if ((puVar45 < puVar2) && ((uint32_t)*puVar27 == (uint32_t)*puVar45)) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
              puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
            }
            if ((puVar45 < puVar3) && ((short)*puVar27 == (short)*puVar45)) {
              puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            }
            if (puVar45 < puVar6) {
              puVar45 = (uint64_t *)
                        ((int64_t)puVar45 + (uint64_t)((char)*puVar27 == (char)*puVar45));
            }
            uVar41 = (int64_t)puVar45 - (int64_t)puVar32;
          }
          uVar29 = iVar31 - (int)puVar33;
          if (param_4 < puVar39) {
            lVar43 = uVar49 + lVar10 + -1;
            for (lVar24 = 0;
                *(char *)((int64_t)puVar39 + lVar24 + -1) == *(char *)(lVar43 + lVar24);
                lVar24 = lVar24 + -1) {
              puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + -1);
              if ((puVar32 <= param_4) || ((uint64_t *)(lVar43 + lVar24) <= puVar5)) {
                lVar43 = (uVar41 - lVar24) + 5;
                puVar39 = puVar32;
                goto LAB_7fffa55d04f0;
              }
            }
            lVar43 = (uVar41 - lVar24) + 4;
            puVar39 = (uint64_t *)((int64_t)puVar39 + lVar24);
          }
          else {
            lVar43 = uVar41 + 4;
          }
        }
        goto LAB_7fffa55d04f0;
      }
    }
  }
  else if (iVar36 == 6) {
    if (puVar34 <= puVar38) {
      puVar1 = (uint64_t *)((int64_t)puVar6 - 7);
      bVar22 = 0x40 - (char)*(uint32_t *)(param_1 + 0x108);
      bVar23 = 0x40 - (char)*(uint32_t *)(param_1 + 0x104);
      puVar2 = puVar6 + -4;
      puVar3 = (uint64_t *)((int64_t)puVar6 - 1);
      puVar4 = (uint64_t *)((int64_t)puVar6 - 3);
LAB_7fffa55d2183:
      lVar43 = -(uint64_t)uStack_7c;
      uVar41 = *puVar39;
      uVar21 = uVar41 * -0x30e44323485a9b9d >> (bVar22 & 0x3f);
      uVar29 = *(uint32_t *)(lVar11 + uVar21 * 4);
      uVar48 = (uint64_t)(int)uVar29;
      uVar47 = (uint64_t)uVar29;
      if ((-0x550155df << (bVar14 & 0x1f) | 0xaafeaa21U >> 0x20 - (bVar14 & 0x1f)) < 0x45551c73) {
        uVar47 = uVar48;
      }
      puVar32 = puVar39 + 0x20;
      puVar27 = (uint64_t *)(uVar47 + lVar10);
      uVar47 = 1;
      while( true ) {
        iVar31 = (int)puVar39;
        iVar30 = iVar31 - uVar46;
        uVar41 = uVar41 * -0x30e4432340650000 >> (bVar23 & 0x3f);
        uVar29 = *(uint32_t *)(lVar12 + uVar41 * 4);
        *(int *)(lVar12 + uVar41 * 4) = iVar30;
        *(int *)(lVar11 + uVar21 * 4) = iVar30;
        iVar36 = *(int *)((int64_t)puVar39 + lVar43 + 1);
        bVar51 = *(int *)((int64_t)puVar39 + 1) <= iVar36;
        if ((int64_t)(int)((uVar26 ^ 0xa7be583a) << 7 | (uVar26 ^ 0xa7be583a) >> 0x19) <=
            (int64_t)
            (uint64_t)(0x96cf9f9U >> (bVar14 & 0x1f) | 0x96cf9f9 << 0x20 - (bVar14 & 0x1f))) {
          bVar51 = iVar36 == *(int *)((int64_t)puVar39 + 1);
        }
        if ((bVar51) && (uStack_7c != 0)) {
          puVar34 = (uint64_t *)((int64_t)puVar39 + 5);
          puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + 5);
          puVar32 = puVar34;
          if (puVar1 <= puVar34) goto joined_r0x7fffa55d2393;
          if (*puVar27 != *puVar34) {
            uVar29 = 0;
            for (uVar41 = *puVar27 ^ *puVar34; (uVar41 & 1) == 0;
                uVar41 = uVar41 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar41 = (uint64_t)(uVar29 >> 3);
            goto LAB_7fffa55d25c5;
          }
          puVar32 = (uint64_t *)((int64_t)puVar39 + 0xd);
          lVar24 = -8;
          goto LAB_7fffa55d2470;
        }
        uVar41 = *puVar34;
        uVar21 = ~(uVar20 ^ 0x30e4432302ac0bee) * uVar41 >> (bVar22 & 0x3f);
        iVar36 = (int)puVar34;
        if ((uVar37 < (uint32_t)uVar48) && (*puVar27 == *puVar39)) {
          puVar34 = puVar39 + 1;
          puVar32 = puVar27 + 1;
          if (puVar1 <= puVar34) {
            puVar45 = puVar34;
            goto LAB_7fffa55d2da6;
          }
          if (*puVar32 != *puVar34) {
            uVar40 = 0;
            for (uVar41 = *puVar32 ^ *puVar34; (uVar41 & 1) == 0;
                uVar41 = uVar41 >> 1 | 0x8000000000000000) {
              uVar40 = uVar40 + 1;
            }
            uVar49 = (uint64_t)(uVar40 >> 3);
            goto LAB_7fffa55d2df7;
          }
          lVar43 = 0;
          goto LAB_7fffa55d2771;
        }
        uVar25 = *(uint32_t *)(lVar11 + uVar21 * 4);
        uVar48 = (uint64_t)uVar25;
        puVar27 = (uint64_t *)(lVar10 + uVar48);
        if ((uVar37 < uVar29) &&
           (puVar33 = (uint32_t *)(lVar10 + (uint64_t)uVar29), *puVar33 == (uint32_t)*puVar39)) break;
        if (puVar32 <= puVar34) {
          uVar47 = uVar47 + 1;
          puVar32 = puVar32 + 0x20;
        }
        puVar45 = (uint64_t *)((int64_t)puVar34 + uVar47);
        puVar39 = puVar34;
        puVar34 = puVar45;
        if (puVar38 < puVar45) goto LAB_7fffa55d358b;
      }
      if ((uVar37 < uVar25) && (*puVar27 == uVar41)) {
        puVar39 = puVar27 + 1;
        puVar32 = puVar34 + 1;
        if (puVar32 < puVar1) {
          if (*puVar39 == *puVar32) {
            lVar24 = lVar10 + 0x10 + uVar48;
            lVar43 = 0;
            do {
              puVar39 = (uint64_t *)((int64_t)puVar34 + lVar43 + 0x10);
              if (puVar1 <= puVar39) {
                puVar39 = (uint64_t *)(lVar24 + lVar43);
                puVar45 = (uint64_t *)((int64_t)puVar34 + lVar43 + 0x10);
                goto LAB_7fffa55d30c9;
              }
              uVar41 = *puVar39;
              uVar49 = *(uint64_t *)(lVar24 + lVar43);
              lVar43 = lVar43 + 8;
            } while (uVar49 == uVar41);
            uVar40 = 0;
            for (uVar41 = uVar41 ^ uVar49; (uVar41 & 1) == 0;
                uVar41 = uVar41 >> 1 | 0x8000000000000000) {
              uVar40 = uVar40 + 1;
            }
            uVar41 = (uint64_t)(uVar40 >> 3) + lVar43;
          }
          else {
            uVar40 = 0;
            for (uVar41 = *puVar39 ^ *puVar32; (uVar41 & 1) == 0;
                uVar41 = uVar41 >> 1 | 0x8000000000000000) {
              uVar40 = uVar40 + 1;
            }
            uVar41 = (uint64_t)(uVar40 >> 3);
          }
        }
        else {
          puVar45 = puVar32;
LAB_7fffa55d30c9:
          if ((puVar45 < puVar4) && ((uint32_t)*puVar39 == (uint32_t)*puVar45)) {
            puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
            puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
          }
          if ((puVar45 < puVar3) && ((short)*puVar39 == (short)*puVar45)) {
            puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
            puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
          }
          if (puVar45 < puVar6) {
            puVar45 = (uint64_t *)
                      ((int64_t)puVar45 + (uint64_t)((char)*puVar39 == (char)*puVar45));
          }
          uVar41 = (int64_t)puVar45 - (int64_t)puVar32;
        }
        uStack_88 = iVar36 - (int)puVar27;
        uVar49 = uVar41 + 8;
        if ((-0x7d096ae8 << (bVar14 & 0x1f) | 0x82f69518U >> 0x20 - (bVar14 & 0x1f)) * 0x5be9aa61 <=
            (uVar26 | 1) * -0x5bd2d594 + 0x278c12cc) {
          uVar49 = uVar41 | 8;
        }
        if (puVar34 <= puStack_58) goto LAB_7fffa55d31cf;
        puVar32 = (uint64_t *)(lVar10 + -1 + uVar48);
        puVar39 = puVar34;
        while (puVar34 = (uint64_t *)((int64_t)puVar39 + -1), *(char *)puVar34 == (char)*puVar32)
        {
          uVar49 = uVar49 + 1;
          puVar39 = puVar34;
          if ((puVar34 <= puStack_58) ||
             (bVar51 = puVar32 <= puVar5, puVar32 = (uint64_t *)((int64_t)puVar32 + -1), bVar51))
          break;
        }
      }
      else {
        puVar34 = (uint64_t *)((int64_t)puVar39 + 4);
        puVar32 = (uint64_t *)(puVar33 + 1);
        if (puVar34 < puVar1) {
          if (*puVar32 == *puVar34) {
            lVar43 = 0xc;
LAB_7fffa55d2812:
            puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43);
            if (puVar27 < puVar1) {
              if (*(uint64_t *)((int64_t)puVar33 + lVar43) == *puVar27) goto code_r0x7fffa55d2834;
              uVar40 = 0;
              for (uVar41 = *puVar27 ^ *(uint64_t *)((int64_t)puVar33 + lVar43); (uVar41 & 1) == 0
                  ; uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar40 = uVar40 + 1;
              }
              uVar49 = ((uint64_t)(uVar40 >> 3) + lVar43) - 4;
              goto LAB_7fffa55d2fde;
            }
            puVar32 = (uint64_t *)(lVar43 + (int64_t)puVar33);
            goto LAB_7fffa55d2f79;
          }
          uVar40 = 0;
          for (uVar41 = *puVar32 ^ *puVar34; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar40 = uVar40 + 1;
          }
          uVar49 = (uint64_t)(uVar40 >> 3);
        }
        else {
          puVar27 = puVar34;
LAB_7fffa55d2f79:
          if ((puVar27 < puVar4) && ((uint32_t)*puVar32 == (uint32_t)*puVar27)) {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
          }
          if ((puVar27 < puVar3) && (*(short *)puVar32 == *(short *)puVar27)) {
            puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          }
          if (puVar27 < puVar6) {
            puVar27 = (uint64_t *)
                      ((int64_t)puVar27 + (uint64_t)((char)*puVar32 == (char)*puVar27));
          }
          uVar49 = (int64_t)puVar27 - (int64_t)puVar34;
        }
LAB_7fffa55d2fde:
        uStack_88 = iVar31 - (int)puVar33;
        if (puStack_58 < puVar39) {
          lVar24 = (uint64_t)uVar29 + lVar10 + -1;
          for (lVar43 = 0; *(char *)((int64_t)puVar39 + lVar43 + -1) == *(char *)(lVar24 + lVar43);
              lVar43 = lVar43 + -1) {
            puVar34 = (uint64_t *)((int64_t)puVar39 + lVar43 + -1);
            if (((uint64_t *)(lVar24 + lVar43) <= puVar5) || (puVar34 <= puStack_58)) {
              uVar49 = (uVar49 - lVar43) + 5;
              goto LAB_7fffa55d31cf;
            }
          }
          uVar49 = uVar49 - lVar43;
          puVar39 = (uint64_t *)((int64_t)puVar39 + lVar43);
        }
        uVar49 = uVar49 + 4;
        puVar34 = puVar39;
LAB_7fffa55d31cf:
        puVar39 = puVar34;
      }
      goto LAB_7fffa55d31df;
    }
  }
  else {
    if (iVar36 != 7) goto LAB_7fffa55cfa6c;
    if (puVar34 <= puVar38) {
      puVar1 = (uint64_t *)((int64_t)puVar6 - 7);
      bVar22 = 0x40 - (char)*(uint32_t *)(param_1 + 0x108);
      puVar2 = (uint64_t *)((int64_t)puVar6 - 1);
      bVar23 = 0x40 - (char)*(uint32_t *)(param_1 + 0x104);
      puVar3 = (uint64_t *)((int64_t)puVar6 - 3);
      puVar4 = puVar6 + -4;
LAB_7fffa55ce709:
      uVar41 = *puVar39;
      uVar47 = uVar41 * -0x30e44323485a9b9d >> (bVar22 & 0x3f);
      puVar32 = puVar39 + 0x20;
      lVar43 = -(uint64_t)uStack_7c;
      uVar21 = (uint64_t)*(uint32_t *)(lVar11 + uVar47 * 4);
      puVar27 = (uint64_t *)(uVar21 + lVar10);
      uVar48 = 1;
      while( true ) {
        uVar41 = uVar41 * -0x30e44323405a9d00 >> (bVar23 & 0x3f);
        uVar29 = *(uint32_t *)(lVar12 + uVar41 * 4);
        uVar49 = (uint64_t)uVar29;
        iVar30 = (int)puVar39;
        iVar36 = iVar30 - uVar46;
        *(int *)(lVar12 + uVar41 * 4) = iVar36;
        *(int *)(lVar11 + uVar47 * 4) = iVar36;
        if ((*(int *)((int64_t)puVar39 + lVar43 + 1) == *(int *)((int64_t)puVar39 + 1)) &&
           (uStack_7c != 0)) {
          puVar34 = (uint64_t *)((int64_t)puVar39 + 5);
          puVar32 = (uint64_t *)((int64_t)puVar39 + lVar43 + 5);
          if (puVar1 <= puVar34) {
            puVar27 = puVar34;
            goto LAB_7fffa55cea8e;
          }
          if (*puVar32 != *puVar34) {
            uVar29 = 0;
            for (uVar41 = *puVar34 ^ *puVar32; (uVar41 & 1) == 0;
                uVar41 = uVar41 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar41 = (uint64_t)(uVar29 >> 3);
            goto LAB_7fffa55ceaea;
          }
          lVar24 = 0;
          goto LAB_7fffa55ce8c0;
        }
        uVar41 = *puVar34;
        uVar47 = uVar41 * -0x30e44323485a9b9d >> (bVar22 & 0x3f);
        if ((uVar37 < (uint32_t)uVar21) && (*puVar27 == *puVar39)) {
          puVar32 = puVar27 + 1;
          puVar45 = puVar39 + 1;
          if (puVar1 <= puVar45) {
            puVar44 = puVar45;
            goto LAB_7fffa55cf31e;
          }
          uVar41 = *puVar45;
          uVar21 = *puVar32;
          bVar51 = (int64_t)uVar21 <= (int64_t)uVar41;
          if ((0x126f8805U >> (bVar14 & 0x1f) | 0x126f8805 << 0x20 - (bVar14 & 0x1f)) != 0x66537bdd)
          {
            bVar51 = uVar21 == uVar41;
          }
          if (!bVar51) {
            uVar40 = 0;
            for (uVar21 = uVar21 ^ uVar41; (uVar21 & 1) == 0;
                uVar21 = uVar21 >> 1 | 0x8000000000000000) {
              uVar40 = uVar40 + 1;
            }
            uVar41 = (uint64_t)(uVar40 >> 3);
            goto LAB_7fffa55cf36b;
          }
          lVar43 = 0;
          goto LAB_7fffa55ce9c6;
        }
        uVar25 = *(uint32_t *)(lVar11 + uVar47 * 4);
        uVar21 = (uint64_t)uVar25;
        puVar27 = (uint64_t *)(lVar10 + uVar21);
        if ((uVar37 < uVar29) && (puVar33 = (uint32_t *)(lVar10 + uVar49), *puVar33 == (uint32_t)*puVar39))
        break;
        if (puVar32 <= puVar34) {
          uVar48 = uVar48 + 1;
          puVar32 = puVar32 + 0x20;
        }
        puVar45 = (uint64_t *)((int64_t)puVar34 + uVar48);
        puVar39 = puVar34;
        puVar34 = puVar45;
        if (puVar38 < puVar45) goto LAB_7fffa55d0d2f;
      }
      if ((uVar25 <= uVar37) || (*puVar27 != uVar41)) {
        puVar32 = (uint64_t *)(puVar33 + 1);
        puVar27 = (uint64_t *)((int64_t)puVar39 + 4);
        if (puVar27 < puVar1) {
          if (*puVar32 == *puVar27) {
            lVar24 = lVar10 + 0xc + uVar49;
            lVar43 = 0;
            do {
              puVar32 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0xc);
              if (puVar1 <= puVar32) {
                puVar45 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0xc);
                puVar32 = (uint64_t *)(lVar24 + lVar43);
                goto LAB_7fffa55cf41f;
              }
              uVar41 = *(uint64_t *)(lVar24 + lVar43);
              uVar21 = *puVar32;
              lVar43 = lVar43 + 8;
            } while (uVar41 == uVar21);
            uVar40 = 0;
            for (uVar21 = uVar21 ^ uVar41; (uVar21 & 1) == 0;
                uVar21 = uVar21 >> 1 | 0x8000000000000000) {
              uVar40 = uVar40 + 1;
            }
            uVar41 = (uint64_t)(uVar40 >> 3) + lVar43;
          }
          else {
            uVar40 = 0;
            for (uVar41 = *puVar27 ^ *puVar32; (uVar41 & 1) == 0;
                uVar41 = uVar41 >> 1 | 0x8000000000000000) {
              uVar40 = uVar40 + 1;
            }
            uVar41 = (uint64_t)(uVar40 >> 3);
          }
        }
        else {
          puVar45 = puVar27;
LAB_7fffa55cf41f:
          if ((puVar45 < puVar3) && ((uint32_t)*puVar32 == (uint32_t)*puVar45)) {
            puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
          }
          if ((puVar45 < puVar2) && (*(short *)puVar32 == *(short *)puVar45)) {
            puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
            puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          }
          if (puVar45 < puVar6) {
            puVar45 = (uint64_t *)
                      ((int64_t)puVar45 + (uint64_t)((char)*puVar32 == (char)*puVar45));
          }
          uVar41 = (int64_t)puVar45 - (int64_t)puVar27;
        }
        uStack_88 = iVar30 - (int)puVar33;
        if (param_4 < puVar39) {
          lVar43 = uVar49 + lVar10 + -1;
          for (lVar24 = 0; *(char *)((int64_t)puVar39 + lVar24 + -1) == *(char *)(lVar43 + lVar24);
              lVar24 = lVar24 + -1) {
            puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + -1);
            if (((uint64_t *)(lVar43 + lVar24) <= puVar5) || (puVar32 <= param_4)) {
              lVar43 = (uVar41 - lVar24) + 5;
              puVar39 = puVar32;
              goto LAB_7fffa55cf4fa;
            }
          }
          lVar43 = (uVar41 - lVar24) + 4;
          puVar39 = (uint64_t *)((int64_t)puVar39 + lVar24);
        }
        else {
          lVar43 = uVar41 + 4;
        }
        goto LAB_7fffa55cf4fa;
      }
      puVar39 = puVar27 + 1;
      puVar32 = puVar34 + 1;
      if (puVar32 < puVar1) {
        if (*puVar39 == *puVar32) {
          lVar43 = lVar10 + 0x10 + uVar21;
          lVar24 = 0;
          do {
            puVar39 = (uint64_t *)((int64_t)puVar34 + lVar24 + 0x10);
            if (puVar1 <= puVar39) {
              puVar45 = (uint64_t *)((int64_t)puVar34 + lVar24 + 0x10);
              puVar39 = (uint64_t *)(lVar43 + lVar24);
              goto LAB_7fffa55cf85a;
            }
            uVar41 = *(uint64_t *)(lVar43 + lVar24);
            uVar49 = *puVar39;
            lVar24 = lVar24 + 8;
          } while (uVar41 == uVar49);
          uVar40 = 0;
          for (uVar41 = uVar41 ^ uVar49; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar40 = uVar40 + 1;
          }
          uVar41 = (uint64_t)(uVar40 >> 3) + lVar24;
        }
        else {
          uVar40 = 0;
          for (uVar41 = *puVar32 ^ *puVar39; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar40 = uVar40 + 1;
          }
          uVar41 = (uint64_t)(uVar40 >> 3);
        }
      }
      else {
        puVar45 = puVar32;
LAB_7fffa55cf85a:
        if ((puVar45 < puVar3) && ((uint32_t)*puVar39 == (uint32_t)*puVar45)) {
          puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
          puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
        }
        if ((puVar45 < puVar2) && ((short)*puVar39 == (short)*puVar45)) {
          puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
          puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
        }
        if (puVar45 < puVar6) {
          puVar45 = (uint64_t *)((int64_t)puVar45 + (uint64_t)((char)*puVar39 == (char)*puVar45))
          ;
        }
        uVar41 = (int64_t)puVar45 - (int64_t)puVar32;
      }
      lVar43 = uVar41 + 8;
      uStack_88 = (int)puVar34 - (int)puVar27;
      puVar32 = puVar34;
      if (param_4 < puVar34) {
        puVar39 = (uint64_t *)(lVar10 + -1 + uVar21);
        while (puVar27 = (uint64_t *)((int64_t)puVar32 + -1), *(char *)puVar27 == (char)*puVar39)
        {
          lVar43 = lVar43 + 1;
          puVar32 = puVar27;
          if ((puVar27 <= param_4) ||
             (bVar51 = puVar39 <= puVar5, puVar39 = (uint64_t *)((int64_t)puVar39 + -1), bVar51))
          break;
        }
      }
      goto LAB_7fffa55cf502;
    }
  }
  puVar39 = param_4;
LAB_7fffa55d35a7:
  if (uVar19 <= uVar28) {
    uVar19 = 0;
  }
  uVar37 = 0;
  if (uVar28 < uVar9) {
    uVar37 = uVar9;
  }
  uVar26 = uVar19;
  if (uStack_7c != 0) {
    uVar26 = uVar9;
    uVar37 = uStack_7c;
  }
  if (uVar9 <= uVar28) {
    uVar26 = uVar19;
  }
  if (uVar40 != 0) {
    uVar26 = uVar40;
  }
  *param_3 = uVar37;
  param_3[1] = uVar26;
  return (int64_t)puVar6 - (int64_t)puVar39;
LAB_7fffa55d1080:
  puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xd);
  if (puVar32 < puVar2) goto code_r0x7fffa55d108d;
  puVar27 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xd);
  puVar32 = (uint64_t *)((int64_t)puVar39 + lVar43 + lVar24 + 0xd);
LAB_7fffa55d12d3:
  if ((puVar27 < puVar4) && ((uint32_t)*puVar32 == (uint32_t)*puVar27)) {
    puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
    puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
  }
  if ((puVar27 < puVar1) && ((short)*puVar32 == (short)*puVar27)) {
    puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
    puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
  }
  if (puVar27 < puVar6) {
    puVar27 = (uint64_t *)((int64_t)puVar27 + (uint64_t)((char)*puVar32 == (char)*puVar27));
  }
  uVar41 = (int64_t)puVar27 - (int64_t)puVar34;
  goto LAB_7fffa55d133b;
code_r0x7fffa55d108d:
  uVar41 = *puVar32;
  uVar47 = *(uint64_t *)((int64_t)puVar39 + lVar24 + lVar43 + 0xd);
  lVar24 = lVar24 + 8;
  if (uVar47 != uVar41) goto code_r0x7fffa55d10b1;
  goto LAB_7fffa55d1080;
code_r0x7fffa55d10b1:
  uVar29 = 0;
  for (uVar47 = uVar47 ^ uVar41; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x8000000000000000) {
    uVar29 = uVar29 + 1;
  }
  uVar41 = (uint64_t)(uVar29 >> 3) + lVar24;
LAB_7fffa55d133b:
  puVar34 = (uint64_t *)((int64_t)puVar39 + 1);
  puVar32 = (uint64_t *)param_2[3];
  uVar47 = (int64_t)puVar34 - (int64_t)puStack_58;
  if (puVar3 < puVar34) {
    puVar27 = puVar32;
    if (puStack_58 <= puVar3) {
      uVar48 = puStack_58[1];
      puVar27 = (uint64_t *)((int64_t)puVar32 + ((int64_t)puVar3 - (int64_t)puStack_58));
      *puVar32 = *puStack_58;
      puVar32[1] = uVar48;
      if (0x10 < (int64_t)puVar3 - (int64_t)puStack_58) {
        puVar32 = puVar32 + 6;
        while( true ) {
          uVar48 = puStack_58[3];
          puVar32[-4] = puStack_58[2];
          puVar32[-3] = uVar48;
          uVar48 = puStack_58[5];
          puVar32[-2] = puStack_58[4];
          puVar32[-1] = uVar48;
          if (puVar27 <= puVar32) break;
          puVar32 = puVar32 + 4;
          puStack_58 = puStack_58 + 4;
        }
      }
      puStack_58 = puVar3;
    }
    if (puStack_58 < puVar34) {
      uVar48 = (int64_t)puVar39 + (1 - (int64_t)puStack_58);
      if (uVar48 < (uVar26 - 0x906e & 0xffff) ||
          (uint64_t)((int64_t)puVar27 - (int64_t)puStack_58) < 0x20) {
        puVar32 = puVar27;
      }
      else {
        if (uVar48 < 0x20) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar48 & 0xffffffffffffffe0;
          lVar43 = 0;
          while( true ) {
            uVar16 = ((uint64_t *)((int64_t)puStack_58 + lVar43))[1];
            puVar7 = (uint64_t *)((int64_t)puStack_58 + lVar43 + 0x10);
            uVar17 = *puVar7;
            uVar18 = puVar7[1];
            *(uint64_t *)((int64_t)puVar27 + lVar43) =
                 *(uint64_t *)((int64_t)puStack_58 + lVar43);
            ((uint64_t *)((int64_t)puVar27 + lVar43))[1] = uVar16;
            puVar7 = (uint64_t *)((int64_t)puVar27 + lVar43 + 0x10);
            *puVar7 = uVar17;
            puVar7[1] = uVar18;
            if (uVar21 - 0x20 == lVar43) break;
            lVar43 = lVar43 + 0x20;
          }
          if (uVar21 == uVar48) goto LAB_7fffa55d1d1b;
          if ((uVar48 & 0x1c) == 0) {
            puStack_58 = (uint64_t *)((int64_t)puStack_58 + uVar21);
            puVar32 = (uint64_t *)((int64_t)puVar27 + uVar21);
            goto LAB_7fffa55d1c37;
          }
        }
        uVar49 = uVar48 & 0xfffffffffffffffc;
        puVar32 = (uint64_t *)((int64_t)puVar27 + uVar49);
        for (; *(uint32_t *)((int64_t)puVar27 + uVar21) =
                    *(uint32_t *)((int64_t)puStack_58 + uVar21), uVar49 - 4 != uVar21;
            uVar21 = uVar21 + 4) {
        }
        if (uVar48 == uVar49) goto LAB_7fffa55d1d1b;
        puStack_58 = (uint64_t *)((int64_t)puStack_58 + uVar49);
      }
LAB_7fffa55d1c37:
      uVar48 = (int64_t)puVar39 - (int64_t)puStack_58;
      uVar29 = (uint32_t)uVar48;
      if ((~uVar29 & 7) != 0) {
        uVar21 = (uint64_t)(uVar29 + 1 & 7);
        puVar27 = puVar32;
        puVar45 = puStack_58;
        do {
          uVar21 = uVar21 - 1;
          puStack_58 = (uint64_t *)((int64_t)puVar45 + 1);
          puVar32 = (uint64_t *)((int64_t)puVar27 + 1);
          *(char *)puVar27 = (char)*puVar45;
          puVar27 = puVar32;
          puVar45 = puStack_58;
        } while (uVar21 != 0);
        if (uVar48 < 7) goto LAB_7fffa55d1d1b;
      }
      puStack_58 = (uint64_t *)((int64_t)puStack_58 + -1);
      do {
        *(uint8_t *)puVar32 = *(uint8_t *)((int64_t)puStack_58 + 1);
        *(uint8_t *)((int64_t)puVar32 + 1) = *(uint8_t *)((int64_t)puStack_58 + 2);
        *(uint8_t *)((int64_t)puVar32 + 2) = *(uint8_t *)((int64_t)puStack_58 + 3);
        *(uint8_t *)((int64_t)puVar32 + 3) = *(uint8_t *)((int64_t)puStack_58 + 4);
        *(uint8_t *)((int64_t)puVar32 + 4) = *(uint8_t *)((int64_t)puStack_58 + 5);
        *(uint8_t *)((int64_t)puVar32 + 5) = *(uint8_t *)((int64_t)puStack_58 + 6);
        *(uint8_t *)((int64_t)puVar32 + 6) = *(uint8_t *)((int64_t)puStack_58 + 7);
        *(char *)((int64_t)puVar32 + 7) = (char)puStack_58[1];
        puVar32 = puVar32 + 1;
        puStack_58 = puStack_58 + 1;
      } while (puStack_58 != puVar39);
    }
LAB_7fffa55d1d1b:
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
    if (0xffff < uVar47) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar48 - *param_2 >> 3);
    }
  }
  else {
    uVar48 = puStack_58[1];
    *puVar32 = *puStack_58;
    puVar32[1] = uVar48;
    if (0x10 < uVar47) {
      uVar48 = param_2[3];
      uVar21 = puStack_58[3];
      *(uint64_t *)(uVar48 + 0x10) = puStack_58[2];
      *(uint64_t *)(uVar48 + 0x18) = uVar21;
      if (0x20 < (int64_t)uVar47) {
        uVar21 = uVar48 + 0x40;
        puStack_58 = puStack_58 + 6;
        while( true ) {
          uVar49 = puStack_58[-1];
          *(uint64_t *)(uVar21 - 0x20) = puStack_58[-2];
          *(uint64_t *)(uVar21 - 0x18) = uVar49;
          uVar49 = puStack_58[1];
          *(uint64_t *)(uVar21 - 0x10) = *puStack_58;
          *(uint64_t *)(uVar21 - 8) = uVar49;
          if (uVar48 + uVar47 <= uVar21) break;
          uVar21 = uVar21 + 0x20;
          puStack_58 = puStack_58 + 4;
        }
      }
      goto LAB_7fffa55d1d1b;
    }
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
  }
  uVar50 = uVar41 + 4;
  *(short *)(uVar48 + 4) = (short)uVar47;
  uVar41 = uVar41 + 1;
  *(uint32_t *)param_2[1] = 1;
  uVar47 = param_2[1];
  puVar39 = puVar34;
  goto joined_r0x7fffa55d1d7e;
LAB_7fffa55d1100:
  puVar45 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0x10);
  bVar51 = puVar45 < puVar2;
  if ((uVar26 | 1) * -0x13a63b42 != -0x5a6dbea6) {
    bVar51 = puVar45 <= puVar2;
  }
  if (bVar51) goto code_r0x7fffa55d1146;
  puVar45 = (uint64_t *)((int64_t)puVar27 + lVar43 + 0x10);
  puVar44 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0x10);
LAB_7fffa55d1588:
  if ((puVar44 < puVar4) && ((uint32_t)*puVar45 == (uint32_t)*puVar44)) {
    puVar44 = (uint64_t *)((int64_t)puVar44 + 4);
    puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
  }
  if ((puVar44 < puVar1) && ((short)*puVar45 == (short)*puVar44)) {
    puVar44 = (uint64_t *)((int64_t)puVar44 + 2);
    puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
  }
  if (puVar44 < puVar6) {
    puVar44 = (uint64_t *)((int64_t)puVar44 + (uint64_t)((char)*puVar45 == (char)*puVar44));
  }
  uVar50 = (int64_t)puVar44 - (int64_t)puVar32;
  goto LAB_7fffa55d15f7;
code_r0x7fffa55d1146:
  uVar41 = *(uint64_t *)((int64_t)puVar27 + lVar43 + 0x10);
  lVar43 = lVar43 + 8;
  if (uVar41 != *puVar45) goto code_r0x7fffa55d1157;
  goto LAB_7fffa55d1100;
code_r0x7fffa55d1157:
  uVar40 = 0;
  for (uVar41 = *puVar45 ^ uVar41; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x8000000000000000) {
    uVar40 = uVar40 + 1;
  }
  uVar50 = (uint64_t)(uVar40 >> 3) + lVar43;
LAB_7fffa55d15f7:
  uVar50 = uVar50 + 8;
  uStack_88 = uStack_88 - (int)puVar27;
  if ((puStack_58 < puVar39) && (puVar5 < puVar27)) {
    while( true ) {
      puVar27 = (uint64_t *)((int64_t)puVar27 + -1);
      puVar32 = (uint64_t *)((int64_t)puVar39 + -1);
      if (*(char *)puVar32 != *(char *)puVar27) break;
      uVar50 = uVar50 + 1;
      puVar39 = puVar32;
      if ((puVar32 <= puStack_58) || (puVar27 <= puVar5)) break;
    }
  }
LAB_7fffa55d18de:
  if (uVar48 < 4) {
    *(uint32_t *)(lVar11 + uVar47 * 4) = (int)puVar34 - uVar46;
  }
  puVar34 = (uint64_t *)param_2[3];
  uVar47 = (int64_t)puVar39 - (int64_t)puStack_58;
  if (puVar3 < puVar39) {
    puVar32 = puVar34;
    if (puStack_58 <= puVar3) {
      puVar32 = (uint64_t *)((int64_t)puVar34 + ((int64_t)puVar3 - (int64_t)puStack_58));
      uVar41 = puStack_58[1];
      *puVar34 = *puStack_58;
      puVar34[1] = uVar41;
      if (0x10 < (int64_t)puVar3 - (int64_t)puStack_58) {
        lVar43 = 0x10;
        do {
          uVar16 = ((uint64_t *)((int64_t)puStack_58 + lVar43))[1];
          *(uint64_t *)((int64_t)puVar34 + lVar43) =
               *(uint64_t *)((int64_t)puStack_58 + lVar43);
          ((uint64_t *)((int64_t)puVar34 + lVar43))[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)puStack_58 + lVar43 + 0x10);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)((int64_t)puVar34 + lVar43 + 0x10);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar24 = lVar43 + 0x20;
          lVar43 = lVar43 + 0x20;
        } while ((uint64_t *)((int64_t)puVar34 + lVar24) < puVar32);
      }
      puStack_58 = puVar3;
    }
    if (puStack_58 < puVar39) {
      uVar41 = (int64_t)puVar39 - (int64_t)puStack_58;
      puVar34 = puVar32;
      if ((3 < uVar41) && (0x1f < (uint64_t)((int64_t)puVar32 - (int64_t)puStack_58))) {
        if (uVar41 < 0x20) {
          uVar48 = 0;
        }
        else {
          uVar48 = uVar41 & 0xffffffffffffffe0;
          uVar21 = 0;
          do {
            uVar16 = ((uint64_t *)((int64_t)puStack_58 + uVar21))[1];
            puVar7 = (uint64_t *)((int64_t)puStack_58 + uVar21 + 0x10);
            uVar17 = *puVar7;
            uVar18 = puVar7[1];
            *(uint64_t *)((int64_t)puVar32 + uVar21) =
                 *(uint64_t *)((int64_t)puStack_58 + uVar21);
            ((uint64_t *)((int64_t)puVar32 + uVar21))[1] = uVar16;
            puVar7 = (uint64_t *)((int64_t)puVar32 + uVar21 + 0x10);
            *puVar7 = uVar17;
            puVar7[1] = uVar18;
            uVar21 = uVar21 + 0x20;
          } while (uVar48 != uVar21);
          if (uVar41 == uVar48) goto LAB_7fffa55d1b86;
          if ((uVar41 & 0x1c) == 0) {
            puStack_58 = (uint64_t *)((int64_t)puStack_58 + uVar48);
            puVar34 = (uint64_t *)((int64_t)puVar32 + uVar48);
            goto LAB_7fffa55d1aae;
          }
        }
        uVar21 = uVar41 & 0xfffffffffffffffc;
        puVar34 = (uint64_t *)((int64_t)puVar32 + uVar21);
        do {
          *(uint32_t *)((int64_t)puVar32 + uVar48) =
               *(uint32_t *)((int64_t)puStack_58 + uVar48);
          uVar48 = uVar48 + 4;
        } while (uVar21 != uVar48);
        if (uVar41 == uVar21) goto LAB_7fffa55d1b86;
        puStack_58 = (uint64_t *)((int64_t)puStack_58 + uVar21);
      }
LAB_7fffa55d1aae:
      uVar41 = (uint64_t)((int)puVar39 - (int)puStack_58 & 7);
      puVar32 = puStack_58;
      if (uVar41 != (uVar26 ^ 0x4af69072)) {
        puVar27 = puVar34;
        do {
          puVar34 = (uint64_t *)((int64_t)puVar27 + 1);
          uVar48 = *puVar32;
          puVar32 = (uint64_t *)((int64_t)puVar32 + 1);
          *(char *)puVar27 = (char)uVar48;
          uVar41 = uVar41 - 1;
          puVar27 = puVar34;
        } while (uVar41 != 0);
      }
      if ((uint64_t)((int64_t)puStack_58 - (int64_t)puVar39) <=
          (uint64_t)(int64_t)(short)~((uVar15 | 1) * 0x111d)) {
        while( true ) {
          *(char *)puVar34 = (char)*puVar32;
          *(uint8_t *)((int64_t)puVar34 + 1) = *(uint8_t *)((int64_t)puVar32 + 1);
          *(uint8_t *)((int64_t)puVar34 + 2) = *(uint8_t *)((int64_t)puVar32 + 2);
          *(uint8_t *)((int64_t)puVar34 + 3) = *(uint8_t *)((int64_t)puVar32 + 3);
          *(uint8_t *)((int64_t)puVar34 + 4) = *(uint8_t *)((int64_t)puVar32 + 4);
          *(uint8_t *)((int64_t)puVar34 + 5) = *(uint8_t *)((int64_t)puVar32 + 5);
          *(uint8_t *)((int64_t)puVar34 + 6) = *(uint8_t *)((int64_t)puVar32 + 6);
          *(uint8_t *)((int64_t)puVar34 + 7) = *(uint8_t *)((int64_t)puVar32 + 7);
          if (puVar32 + 1 == puVar39) break;
          puVar34 = puVar34 + 1;
          puVar32 = puVar32 + 1;
        }
      }
    }
LAB_7fffa55d1b86:
    param_2[3] = param_2[3] + uVar47;
    uVar48 = param_2[1];
    if (0xffff < uVar47) {
      *(uint32_t *)(param_2 + 9) = 1;
      uVar41 = *param_2 ^ uVar48;
      if ((uVar26 ^ 0x7a153fcf) <
          (0xfd719dacU >> (bVar14 & 0x1f) | -0x28e6254 << 0x20 - (bVar14 & 0x1f)) * 0x3d6e0339) {
        uVar41 = uVar48 - *param_2;
      }
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar41 >> 3);
    }
  }
  else {
    uVar41 = puStack_58[1];
    *puVar34 = *puStack_58;
    puVar34[1] = uVar41;
    if (0x10 < uVar47) {
      uVar41 = param_2[3];
      uVar48 = puStack_58[3];
      *(uint64_t *)(uVar41 + 0x10) = puStack_58[2];
      *(uint64_t *)(uVar41 + 0x18) = uVar48;
      if (0x20 < (int64_t)uVar47) {
        lVar43 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)puStack_58 + lVar43 + 0x20);
          uVar16 = puVar8[1];
          puVar7 = (uint64_t *)(uVar41 + 0x20 + lVar43);
          *puVar7 = *puVar8;
          puVar7[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)puStack_58 + lVar43 + 0x30);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)(uVar41 + 0x30 + lVar43);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar24 = uVar41 + 0x20 + lVar43;
          lVar43 = lVar43 + 0x20;
        } while (lVar24 + 0x20U < uVar41 + uVar47);
      }
      goto LAB_7fffa55d1b86;
    }
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
  }
  uVar41 = uVar50 - 3;
  *(short *)(uVar48 + 4) = (short)uVar47;
  *(uint32_t *)param_2[1] = uStack_88 + 3;
  uVar47 = param_2[1];
  uVar40 = uStack_7c;
  uStack_7c = uStack_88;
joined_r0x7fffa55d1d7e:
  if (0xffff < uVar41) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar47 - *param_2 >> 3);
  }
  puVar39 = (uint64_t *)((int64_t)puVar39 + uVar50);
  *(short *)(uVar47 + 6) = (short)uVar41;
  param_2[1] = param_2[1] + 8;
  if (puVar38 < puVar39) {
  }
  else {
    uVar29 = uVar25 + 2;
    if ((int)((uVar26 ^ 0x83de5798) + 0x26e62307) < -0x33c809f1) {
      uVar29 = uVar25 ^ 2;
    }
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar10 + (uint64_t)uVar29) * -0x30e44323485a9b9d)
                       >> (bVar22 & 0x3f)) * 4) = uVar29;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)((int64_t)puVar39 + -2) * -0x30e44323485a9b9d) >>
                       (bVar22 & 0x3f)) * 4) = ((int)puVar39 + -2) - uVar46;
    *(uint32_t *)(lVar12 + ((uint64_t)(*(int64_t *)(lVar10 + (uint64_t)uVar29) * -0x30e4432345000000)
                       >> (bVar23 & 0x3f)) * 4) = uVar29;
    *(uint32_t *)(lVar12 + ((uint64_t)(*(int64_t *)((int64_t)puVar39 + -1) * -0x30e4432345000000) >>
                       (bVar23 & 0x3f)) * 4) = ((int)puVar39 + -1) - uVar46;
    uVar29 = uVar40;
    do {
      uVar25 = uStack_7c;
      uVar40 = *(uint32_t *)((int64_t)puVar39 - (uint64_t)uVar29);
      bVar51 = (uint32_t)*puVar39 == uVar40;
      if ((uVar26 ^ 0x8af6908f) <= uVar26 + 0xc2f86308) {
        bVar51 = (uint32_t)*puVar39 <= uVar40;
      }
      if ((!bVar51) || (uVar29 == 0)) {
        uVar40 = uVar29;
        uStack_7c = uVar25;
        break;
      }
      lVar43 = -(uint64_t)uVar29;
      puVar34 = (uint64_t *)((int64_t)puVar39 + 4);
      puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + 4);
      puVar32 = puVar34;
      if (puVar34 < puVar2) {
        if (*puVar27 == *puVar34) {
          lVar24 = 0;
          do {
            puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xc);
            if (puVar2 <= puVar32) {
              puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + lVar24 + 0xc);
              puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xc);
              goto joined_r0x7fffa55d1f90;
            }
            uVar41 = *(uint64_t *)((int64_t)puVar39 + lVar24 + lVar43 + 0xc);
            uVar47 = *puVar32;
            lVar24 = lVar24 + 8;
          } while (uVar41 == uVar47);
          uVar40 = 0;
          for (uVar41 = uVar41 ^ uVar47; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar40 = uVar40 + 1;
          }
          uVar41 = (uint64_t)(uVar40 >> 3) + lVar24;
        }
        else {
          uVar40 = 0;
          for (uVar41 = *puVar27 ^ *puVar34; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar40 = uVar40 + 1;
          }
          uVar41 = (uint64_t)(uVar40 >> 3);
        }
      }
      else {
joined_r0x7fffa55d1f90:
        if ((puVar32 < puVar4) && ((uint32_t)*puVar27 == (uint32_t)*puVar32)) {
          puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
          puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
        }
        if ((puVar32 < puVar1) && ((short)*puVar27 == (short)*puVar32)) {
          puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
        }
        if (puVar32 < puVar6) {
          puVar32 = (uint64_t *)((int64_t)puVar32 + (uint64_t)((char)*puVar27 == (char)*puVar32))
          ;
        }
        uVar41 = (int64_t)puVar32 - (int64_t)puVar34;
      }
      iVar36 = (int)puVar39 - uVar46;
      *(int *)(lVar12 + (*puVar39 * -0x30e4432345000000 >> (bVar23 & 0x3f)) * 4) = iVar36;
      *(int *)(lVar11 + (*puVar39 * -0x30e44323485a9b9d >> (bVar22 & 0x3f)) * 4) = iVar36;
      if (puVar39 <= puVar3) {
        uVar47 = puVar39[1];
        puVar34 = (uint64_t *)param_2[3];
        *puVar34 = *puVar39;
        puVar34[1] = uVar47;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar41 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar41 + 1);
      param_2[1] = param_2[1] + 8;
      puVar39 = (uint64_t *)((int64_t)puVar39 + uVar41 + 4);
      uVar40 = uVar25;
      uStack_7c = uVar29;
      uVar29 = uVar25;
    } while (puVar39 <= puVar38);
  }
  puVar34 = (uint64_t *)((int64_t)puVar39 + 1);
  puStack_58 = puVar39;
  if (puVar38 < puVar34) goto LAB_7fffa55d35a7;
  goto LAB_7fffa55d0dd8;
LAB_7fffa55d2470:
  bVar51 = puVar32 < puVar1;
  if ((uVar26 | 1) * -0x3480bb08 <= (uVar26 ^ 0xcaf69076)) {
    bVar51 = puVar32 != puVar1;
  }
  if (bVar51) {
    if (*(uint64_t *)((int64_t)puVar32 + lVar43) == *puVar32) goto code_r0x7fffa55d24f2;
    uVar29 = 0;
    for (uVar41 = *(uint64_t *)((int64_t)puVar32 + lVar43) ^ *puVar32; (uVar41 & 1) == 0;
        uVar41 = uVar41 >> 1 | 0x8000000000000000) {
      uVar29 = uVar29 + 1;
    }
    uVar41 = (uint64_t)(uVar29 >> 3) - lVar24;
  }
  else {
    puVar27 = (uint64_t *)(lVar43 + (int64_t)puVar32);
joined_r0x7fffa55d2393:
    if ((puVar32 < puVar4) && ((uint32_t)*puVar27 == (uint32_t)*puVar32)) {
      puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
      puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
    }
    if ((puVar32 < puVar3) && ((short)*puVar27 == (short)*puVar32)) {
      puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
      puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
    }
    if (puVar32 < puVar6) {
      puVar32 = (uint64_t *)((int64_t)puVar32 + (uint64_t)((char)*puVar27 == (char)*puVar32));
    }
    uVar41 = (int64_t)puVar32 - (int64_t)puVar34;
  }
  goto LAB_7fffa55d25c5;
code_r0x7fffa55d24f2:
  puVar32 = puVar32 + 1;
  lVar24 = lVar24 + -8;
  goto LAB_7fffa55d2470;
LAB_7fffa55d25c5:
  puVar34 = (uint64_t *)((int64_t)puVar39 + 1);
  puVar32 = (uint64_t *)param_2[3];
  uVar47 = (int64_t)puVar34 - (int64_t)puStack_58;
  if (puVar2 < puVar34) {
    puVar27 = puVar32;
    if (puStack_58 <= puVar2) {
      uVar48 = puStack_58[1];
      *puVar32 = *puStack_58;
      puVar32[1] = uVar48;
      puVar27 = (uint64_t *)((int64_t)puVar32 + ((int64_t)puVar2 - (int64_t)puStack_58));
      if ((int64_t)(uint64_t)((uVar26 ^ 0x9063) & 0xffff) <=
          (int64_t)puVar2 - (int64_t)puStack_58) {
        lVar43 = 0x10;
        do {
          uVar16 = ((uint64_t *)((int64_t)puStack_58 + lVar43))[1];
          *(uint64_t *)((int64_t)puVar32 + lVar43) =
               *(uint64_t *)((int64_t)puStack_58 + lVar43);
          ((uint64_t *)((int64_t)puVar32 + lVar43))[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)puStack_58 + lVar43 + 0x10);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)((int64_t)puVar32 + lVar43 + 0x10);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar24 = lVar43 + 0x20;
          lVar43 = lVar43 + 0x20;
        } while ((uint64_t *)((int64_t)puVar32 + lVar24) < puVar27);
      }
      puStack_58 = puVar2;
    }
    if (puStack_58 < puVar34) {
      uVar48 = (int64_t)puVar39 + (1 - (int64_t)puStack_58);
      if ((3 < uVar48) && (0x1f < (uint64_t)((int64_t)puVar27 - (int64_t)puStack_58))) {
        if (uVar48 < 0x20) {
          uVar49 = 0;
        }
        else {
          uVar49 = uVar48 & 0xffffffffffffffe0;
          uVar21 = 0;
          do {
            uVar16 = ((uint64_t *)((int64_t)puStack_58 + uVar21))[1];
            puVar7 = (uint64_t *)((int64_t)puStack_58 + uVar21 + 0x10);
            uVar17 = *puVar7;
            uVar18 = puVar7[1];
            *(uint64_t *)((int64_t)puVar27 + uVar21) =
                 *(uint64_t *)((int64_t)puStack_58 + uVar21);
            ((uint64_t *)((int64_t)puVar27 + uVar21))[1] = uVar16;
            puVar7 = (uint64_t *)((int64_t)puVar27 + uVar21 + 0x10);
            *puVar7 = uVar17;
            puVar7[1] = uVar18;
            uVar21 = uVar21 + 0x20;
          } while (uVar49 != uVar21);
          if (uVar48 == uVar49) goto LAB_7fffa55d29f6;
          uVar21 = (uint64_t)((uint32_t)uVar48 & 0x1c);
          if (0x23a4cefd - uVar26 < 0xa5f2fea) {
            uVar21 = (int64_t)puVar39 + (0x1d - (int64_t)puStack_58);
          }
          if (uVar21 == (uint16_t)(0U >> (bVar14 & 0xf) | 0 << 0x10 - (bVar14 & 0xf))) {
            puVar27 = (uint64_t *)((int64_t)puVar27 + uVar49);
            puStack_58 = (uint64_t *)((int64_t)puStack_58 + uVar49);
            goto LAB_7fffa55d291c;
          }
        }
        uVar21 = uVar48 & 0xfffffffffffffffc;
        for (; *(uint32_t *)((int64_t)puVar27 + uVar49) =
                    *(uint32_t *)((int64_t)puStack_58 + uVar49), uVar21 - 4 != uVar49;
            uVar49 = uVar49 + 4) {
        }
        if (uVar48 == uVar21) goto LAB_7fffa55d29f6;
        puStack_58 = (uint64_t *)((int64_t)puStack_58 + uVar21);
        puVar27 = (uint64_t *)((int64_t)puVar27 + uVar21);
      }
LAB_7fffa55d291c:
      uVar48 = (int64_t)puVar39 - (int64_t)puStack_58;
      uVar29 = (uint32_t)uVar48;
      if ((~uVar29 & 7) != 0) {
        uVar21 = (uint64_t)(uVar29 + 1 & 7);
        do {
          uVar49 = *puStack_58;
          puStack_58 = (uint64_t *)((int64_t)puStack_58 + 1);
          *(char *)puVar27 = (char)uVar49;
          puVar27 = (uint64_t *)((int64_t)puVar27 + 1);
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
        if (uVar48 < (uint16_t)((uVar15 | 1) * 0x23a0) >> 5) goto LAB_7fffa55d29f6;
      }
      lVar43 = 0;
      do {
        *(uint8_t *)((int64_t)puVar27 + lVar43) = *(uint8_t *)((int64_t)puStack_58 + lVar43)
        ;
        *(uint8_t *)((int64_t)puVar27 + lVar43 + 1) =
             *(uint8_t *)((int64_t)puStack_58 + lVar43 + 1);
        *(uint8_t *)((int64_t)puVar27 + lVar43 + 2) =
             *(uint8_t *)((int64_t)puStack_58 + lVar43 + 2);
        *(uint8_t *)((int64_t)puVar27 + lVar43 + 3) =
             *(uint8_t *)((int64_t)puStack_58 + lVar43 + 3);
        *(uint8_t *)((int64_t)puVar27 + lVar43 + 4) =
             *(uint8_t *)((int64_t)puStack_58 + lVar43 + 4);
        *(uint8_t *)((int64_t)puVar27 + lVar43 + 5) =
             *(uint8_t *)((int64_t)puStack_58 + lVar43 + 5);
        *(uint8_t *)((int64_t)puVar27 + lVar43 + 6) =
             *(uint8_t *)((int64_t)puStack_58 + lVar43 + 6);
        lVar24 = lVar43 + 7;
        *(uint8_t *)((int64_t)puVar27 + lVar43 + 7) =
             *(uint8_t *)((int64_t)puStack_58 + lVar43 + 7);
        lVar43 = lVar43 + 8;
      } while ((uint64_t *)((int64_t)puStack_58 + lVar24) != puVar39);
    }
LAB_7fffa55d29f6:
    param_2[3] = param_2[3] + uVar47;
    uVar48 = param_2[1];
    if (0xffff < uVar47) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar48 - *param_2 >> 3);
    }
  }
  else {
    uVar48 = puStack_58[1];
    *puVar32 = *puStack_58;
    puVar32[1] = uVar48;
    if (0x10 < uVar47) {
      uVar48 = param_2[3];
      uVar21 = puStack_58[3];
      *(uint64_t *)(uVar48 + 0x10) = puStack_58[2];
      *(uint64_t *)(uVar48 + 0x18) = uVar21;
      if (0x20 < (int64_t)uVar47) {
        lVar43 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)puStack_58 + lVar43 + 0x20);
          uVar16 = puVar8[1];
          puVar7 = (uint64_t *)(uVar48 + 0x20 + lVar43);
          *puVar7 = *puVar8;
          puVar7[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)puStack_58 + lVar43 + 0x30);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)(uVar48 + 0x30 + lVar43);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar24 = uVar48 + 0x20 + lVar43;
          lVar43 = lVar43 + 0x20;
        } while (lVar24 + 0x20U < uVar48 + uVar47);
      }
      goto LAB_7fffa55d29f6;
    }
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
  }
  uVar49 = uVar41 + 4;
  *(short *)(uVar48 + 4) = (short)uVar47;
  *(uint32_t *)param_2[1] = 1;
  uVar47 = param_2[1];
  uVar41 = uVar41 + 1;
  puVar39 = puVar34;
  goto joined_r0x7fffa55d2a46;
LAB_7fffa55d2771:
  puVar32 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0x10);
  if (puVar32 < puVar1) goto code_r0x7fffa55d2783;
  puVar45 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0x10);
  puVar32 = (uint64_t *)((int64_t)puVar27 + lVar43 + 0x10);
LAB_7fffa55d2da6:
  if ((puVar45 < puVar4) && ((uint32_t)*puVar32 == (uint32_t)*puVar45)) {
    puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
    puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
  }
  if ((puVar45 < puVar3) && ((short)*puVar32 == (short)*puVar45)) {
    puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
    puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
  }
  if (puVar45 < puVar6) {
    puVar45 = (uint64_t *)((int64_t)puVar45 + (uint64_t)((char)*puVar32 == (char)*puVar45));
  }
  uVar49 = (int64_t)puVar45 - (int64_t)puVar34;
  goto LAB_7fffa55d2df7;
code_r0x7fffa55d2783:
  uVar41 = *puVar32;
  uVar48 = *(uint64_t *)((int64_t)puVar27 + lVar43 + 0x10);
  lVar43 = lVar43 + 8;
  if (uVar48 != uVar41) goto code_r0x7fffa55d27a8;
  goto LAB_7fffa55d2771;
code_r0x7fffa55d27a8:
  uVar40 = 0;
  for (uVar41 = uVar41 ^ uVar48; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x8000000000000000) {
    uVar40 = uVar40 + 1;
  }
  uVar49 = (uint64_t)(uVar40 >> 3) + lVar43;
LAB_7fffa55d2df7:
  uVar49 = uVar49 + 8;
  uStack_88 = iVar31 - (int)puVar27;
  if (((uVar26 | 1) * -0x3e400000 | (uVar26 | 1) * 0x45c2b60e >> 0xb) == 0x2d699b75) {
    uStack_88 = iVar31 * (int)puVar27;
  }
  if ((puVar5 < puVar27) && (puStack_58 < puVar39)) {
    puVar39 = (uint64_t *)((int64_t)puVar39 + -1);
    do {
      puVar27 = (uint64_t *)((int64_t)puVar27 + -1);
      if ((char)*puVar39 != *(char *)puVar27) break;
      uVar49 = uVar49 + 1;
      bVar51 = puStack_58 <= puVar39;
      if ((0x4bcc087fU >> (bVar14 & 0x1f) | 0x4bcc087f << 0x20 - (bVar14 & 0x1f)) <=
          (0x9f5016d8U >> (bVar14 & 0x1f) | -0x60afe928 << 0x20 - (bVar14 & 0x1f))) {
        bVar51 = puStack_58 < puVar39;
      }
      bVar13 = (bool)(bVar51 & puVar5 < puVar27);
      if ((uint64_t)(int64_t)(int)((uVar26 + 0xf63d0e47) * 0x74d6427) <
          (uint64_t)(0xb0b4833b - uVar26)) {
        bVar13 = (bool)(puVar5 < puVar27 ^ bVar51);
      }
      puVar39 = (uint64_t *)((int64_t)puVar39 + -1);
    } while (bVar13);
    puVar39 = (uint64_t *)((int64_t)puVar39 + 1);
  }
LAB_7fffa55d31df:
  if (uVar47 < 4) {
    *(uint32_t *)(lVar11 + uVar21 * 4) = iVar36 - uVar46;
  }
  uVar41 = (int64_t)puVar39 - (int64_t)puStack_58;
  puVar34 = (uint64_t *)param_2[3];
  if (puVar2 < puVar39) {
    puVar32 = puVar34;
    if (puStack_58 <= puVar2) {
      puVar32 = (uint64_t *)((int64_t)puVar34 + ((int64_t)puVar2 - (int64_t)puStack_58));
      uVar47 = puStack_58[1];
      *puVar34 = *puStack_58;
      puVar34[1] = uVar47;
      if ((int64_t)puVar2 - (int64_t)puStack_58 < 0x11) {
        puStack_58 = puVar2;
      }
      else {
        lVar43 = 0x10;
        do {
          uVar16 = ((uint64_t *)((int64_t)puStack_58 + lVar43))[1];
          *(uint64_t *)((int64_t)puVar34 + lVar43) =
               *(uint64_t *)((int64_t)puStack_58 + lVar43);
          ((uint64_t *)((int64_t)puVar34 + lVar43))[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)puStack_58 + lVar43 + 0x10);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)((int64_t)puVar34 + lVar43 + 0x10);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          puVar27 = (uint64_t *)((int64_t)puVar34 + lVar43 + 0x20);
          bVar51 = puVar27 < puVar32;
          if ((int64_t)(uint64_t)((uVar26 ^ 0xfc70039) << 0x10 | (uVar26 ^ 0xfc70039) >> 0x10) <
              (int64_t)(int)(uVar26 ^ 0xb4765a5f)) {
            bVar51 = (int64_t)puVar27 < (int64_t)puVar32;
          }
          lVar43 = lVar43 + 0x20;
        } while (bVar51);
        puStack_58 = puVar2;
      }
    }
    bVar51 = puStack_58 < puVar39;
    if (uVar26 != 0x4af69072) {
      bVar51 = (int64_t)puVar39 < (int64_t)puStack_58;
    }
    if (bVar51) {
      uVar47 = (int64_t)puVar39 - (int64_t)puStack_58;
      bVar51 = (uint64_t)((int64_t)puVar32 - (int64_t)puStack_58) < 0x20;
      if (~(uVar26 ^ 0x4ee3f07a) < 0x182cf3f5) {
        bVar51 = 0x20 < (uint64_t)((int64_t)puVar32 - (int64_t)puStack_58);
      }
      puVar34 = puVar32;
      if ((3 < uVar47) && (!bVar51)) {
        if (uVar47 < 0x20) {
          uVar48 = 0;
        }
        else {
          uVar48 = uVar47 & 0xffffffffffffffe0;
          uVar21 = 0;
          do {
            uVar16 = *(uint64_t *)((int64_t)puStack_58 + uVar21);
            uVar17 = ((uint64_t *)((int64_t)puStack_58 + uVar21))[1];
            puVar7 = (uint64_t *)((int64_t)puStack_58 + uVar21 + 0x10);
            uVar18 = puVar7[1];
            puVar8 = (uint64_t *)((int64_t)puVar32 + uVar21 + 0x10);
            *puVar8 = *puVar7;
            puVar8[1] = uVar18;
            *(uint64_t *)((int64_t)puVar32 + uVar21) = uVar16;
            ((uint64_t *)((int64_t)puVar32 + uVar21))[1] = uVar17;
            uVar21 = uVar21 + 0x20;
          } while (uVar48 != uVar21);
          if (uVar47 == uVar48) goto LAB_7fffa55d351c;
          if ((uVar47 & 0x1c) == 0) {
            puVar34 = (uint64_t *)((int64_t)puVar32 + uVar48);
            puStack_58 = (uint64_t *)((int64_t)puStack_58 + uVar48);
            goto LAB_7fffa55d346d;
          }
        }
        uVar21 = uVar47 & 0xfffffffffffffffc;
        puVar34 = (uint64_t *)((int64_t)puVar32 + uVar21);
        do {
          *(uint32_t *)((int64_t)puVar32 + uVar48) =
               *(uint32_t *)((int64_t)puStack_58 + uVar48);
          uVar48 = uVar48 + 4;
        } while (uVar21 != uVar48);
        if (uVar47 == uVar21) goto LAB_7fffa55d351c;
        puStack_58 = (uint64_t *)((int64_t)puStack_58 + uVar21);
      }
LAB_7fffa55d346d:
      uVar40 = (int)puVar39 - (int)puStack_58 & 7;
      uVar47 = (uint64_t)uVar40;
      puVar32 = puStack_58;
      if (uVar40 != 0) {
        do {
          *(char *)puVar34 = (char)*puVar32;
          puVar34 = (uint64_t *)((int64_t)puVar34 + 1);
          puVar32 = (uint64_t *)((int64_t)puVar32 + 1);
          uVar47 = uVar47 - 1;
        } while (uVar47 != 0);
      }
      if ((uint64_t)((int64_t)puStack_58 - (int64_t)puVar39) < 0xfffffffffffffff9) {
        lVar43 = 0;
        do {
          *(uint8_t *)((int64_t)puVar34 + lVar43) = *(uint8_t *)((int64_t)puVar32 + lVar43);
          *(uint8_t *)((int64_t)puVar34 + lVar43 + 1) =
               *(uint8_t *)((int64_t)puVar32 + lVar43 + 1);
          *(uint8_t *)((int64_t)puVar34 + lVar43 + 2) =
               *(uint8_t *)((int64_t)puVar32 + lVar43 + 2);
          *(uint8_t *)((int64_t)puVar34 + lVar43 + 3) =
               *(uint8_t *)((int64_t)puVar32 + lVar43 + 3);
          *(uint8_t *)((int64_t)puVar34 + lVar43 + 4) =
               *(uint8_t *)((int64_t)puVar32 + lVar43 + 4);
          *(uint8_t *)((int64_t)puVar34 + lVar43 + 5) =
               *(uint8_t *)((int64_t)puVar32 + lVar43 + 5);
          *(uint8_t *)((int64_t)puVar34 + lVar43 + 6) =
               *(uint8_t *)((int64_t)puVar32 + lVar43 + 6);
          *(uint8_t *)((int64_t)puVar34 + lVar43 + 7) =
               *(uint8_t *)((int64_t)puVar32 + lVar43 + 7);
          lVar24 = lVar43 + 8;
          lVar43 = lVar43 + 8;
        } while ((uint64_t *)((int64_t)puVar32 + lVar24) != puVar39);
      }
    }
LAB_7fffa55d351c:
    param_2[3] = param_2[3] + uVar41;
    uVar47 = param_2[1];
    if (0xffff < uVar41) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar47 - *param_2 >> 3);
    }
  }
  else {
    uVar47 = puStack_58[1];
    *puVar34 = *puStack_58;
    puVar34[1] = uVar47;
    if (0x10 < uVar41) {
      uVar47 = param_2[3];
      uVar48 = puStack_58[3];
      *(uint64_t *)(uVar47 + 0x10) = puStack_58[2];
      *(uint64_t *)(uVar47 + 0x18) = uVar48;
      if (0x20 < (int64_t)uVar41) {
        uVar48 = uVar47 + 0x40;
        puStack_58 = puStack_58 + 6;
        while( true ) {
          uVar21 = puStack_58[-1];
          *(uint64_t *)(uVar48 - 0x20) = puStack_58[-2];
          *(uint64_t *)(uVar48 - 0x18) = uVar21;
          uVar21 = puStack_58[1];
          *(uint64_t *)(uVar48 - 0x10) = *puStack_58;
          *(uint64_t *)(uVar48 - 8) = uVar21;
          if (uVar47 + uVar41 <= uVar48) break;
          uVar48 = uVar48 + 0x20;
          puStack_58 = puStack_58 + 4;
        }
      }
      goto LAB_7fffa55d351c;
    }
    uVar47 = param_2[1];
    param_2[3] = param_2[3] + uVar41;
  }
  *(short *)(uVar47 + 4) = (short)uVar41;
  uVar41 = uVar49 - 3;
  *(uint32_t *)param_2[1] = uStack_88 + 3;
  uVar47 = param_2[1];
  uVar40 = uStack_7c;
  uStack_7c = uStack_88;
joined_r0x7fffa55d2a46:
  if (0xffff < uVar41) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar47 - *param_2 >> 3);
  }
  puVar39 = (uint64_t *)((int64_t)puVar39 + uVar49);
  *(short *)(uVar47 + 6) = (short)uVar41;
  param_2[1] = param_2[1] + 8;
  if (puVar38 < puVar39) {
    uVar29 = uVar40;
LAB_7fffa55d2d72:
    uVar40 = uVar29;
  }
  else {
    uVar29 = iVar30 + 2;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar10 + (uint64_t)uVar29) * -0x30e44323485a9b9d)
                       >> (bVar22 & 0x3f)) * 4) = uVar29;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)((int64_t)puVar39 + -2) * -0x30e44323485a9b9d) >>
                       (bVar22 & 0x3f)) * 4) = ((int)puVar39 + -2) - uVar46;
    *(uint32_t *)(lVar12 + ((uint64_t)(*(int64_t *)(lVar10 + (uint64_t)uVar29) * -0x30e4432340650000)
                       >> (bVar23 & 0x3f)) * 4) = uVar29;
    *(uint32_t *)(lVar12 + ((uint64_t)(*(int64_t *)((int64_t)puVar39 + -1) * -0x30e4432340650000) >>
                       (bVar23 & 0x3f)) * 4) = ((int)puVar39 + -1) - uVar46;
    uVar29 = uStack_7c;
    do {
      uStack_7c = uVar40;
      uVar40 = uVar29;
      if ((uStack_7c == 0) ||
         ((uint32_t)*puVar39 != *(uint32_t *)((int64_t)puVar39 - (uint64_t)uStack_7c))) {
        uVar29 = uStack_7c;
        uStack_7c = uVar40;
        goto LAB_7fffa55d2d72;
      }
      lVar43 = -(uint64_t)uStack_7c;
      puVar34 = (uint64_t *)((int64_t)puVar39 + 4);
      puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + 4);
      puVar32 = puVar34;
      if (puVar34 < puVar1) {
        if (*puVar27 == *puVar34) {
          lVar24 = 0;
          do {
            puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xc);
            if (puVar1 <= puVar32) {
              puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + lVar24 + 0xc);
              puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xc);
              goto joined_r0x7fffa55d2bf8;
            }
            uVar41 = *(uint64_t *)((int64_t)puVar39 + lVar24 + lVar43 + 0xc);
            uVar47 = *puVar32;
            lVar24 = lVar24 + 8;
          } while (uVar41 == uVar47);
          uVar29 = 0;
          for (uVar41 = uVar41 ^ uVar47; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar29 = uVar29 + 1;
          }
          uVar41 = (uint64_t)(uVar29 >> 3) + lVar24;
        }
        else {
          uVar29 = 0;
          for (uVar41 = *puVar27 ^ *puVar34; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar29 = uVar29 + 1;
          }
          uVar41 = (uint64_t)(uVar29 >> 3);
        }
      }
      else {
joined_r0x7fffa55d2bf8:
        if ((puVar32 < puVar4) && ((uint32_t)*puVar27 == (uint32_t)*puVar32)) {
          puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
          puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
        }
        if ((puVar32 < puVar3) && ((short)*puVar27 == (short)*puVar32)) {
          puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
          puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
        }
        if (puVar32 < puVar6) {
          puVar32 = (uint64_t *)((int64_t)puVar32 + (uint64_t)((char)*puVar27 == (char)*puVar32))
          ;
        }
        uVar41 = (int64_t)puVar32 - (int64_t)puVar34;
      }
      iVar36 = (int)puVar39 - uVar46;
      *(int *)(lVar12 + (*puVar39 * -0x30e4432340650000 >> (bVar23 & 0x3f)) * 4) = iVar36;
      *(int *)(lVar11 + (*puVar39 * -0x30e44323485a9b9d >> (bVar22 & 0x3f)) * 4) = iVar36;
      if (puVar39 <= puVar2) {
        puVar34 = (uint64_t *)param_2[3];
        uVar47 = puVar39[1];
        *puVar34 = *puVar39;
        puVar34[1] = uVar47;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar41 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar41 + 1);
      param_2[1] = param_2[1] + 8;
      puVar39 = (uint64_t *)((int64_t)puVar39 + uVar41 + 4);
      uVar29 = uStack_7c;
    } while (puVar39 <= puVar38);
  }
  puVar34 = (uint64_t *)((int64_t)puVar39 + 1);
  puStack_58 = puVar39;
  if (puVar38 < puVar34) goto LAB_7fffa55d35a7;
  goto LAB_7fffa55d2183;
code_r0x7fffa55d2834:
  lVar43 = lVar43 + 8;
  goto LAB_7fffa55d2812;
LAB_7fffa55d358b:
  puVar39 = puStack_58;
  goto LAB_7fffa55d35a7;
LAB_7fffa55cfd10:
  puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24);
  if (puVar32 < puVar4) {
    uVar41 = *(uint64_t *)((int64_t)puVar39 + lVar24 + lVar43);
    if (uVar41 == *puVar32) goto code_r0x7fffa55cfd32;
    uVar29 = 0;
    for (uVar41 = uVar41 ^ *puVar32; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x8000000000000000) {
      uVar29 = uVar29 + 1;
    }
    uVar41 = ((uint64_t)(uVar29 >> 3) + lVar24) - 5;
  }
  else {
    puVar27 = (uint64_t *)(lVar43 + (int64_t)puVar32);
joined_r0x7fffa55cfcbb:
    if ((puVar32 < puVar2) && ((uint32_t)*puVar27 == (uint32_t)*puVar32)) {
      puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
      puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
    }
    if ((puVar32 < puVar3) && ((short)*puVar27 == (short)*puVar32)) {
      puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
      puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
    }
    if (puVar32 < puVar6) {
      puVar32 = (uint64_t *)((int64_t)puVar32 + (uint64_t)((char)*puVar27 == (char)*puVar32));
    }
    uVar41 = (int64_t)puVar32 - (int64_t)puVar34;
  }
  goto LAB_7fffa55cfe55;
code_r0x7fffa55cfd32:
  lVar24 = lVar24 + 8;
  goto LAB_7fffa55cfd10;
LAB_7fffa55cfe55:
  puVar34 = (uint64_t *)((int64_t)puVar39 + 1);
  uVar47 = (int64_t)puVar34 - (int64_t)param_4;
  puVar32 = (uint64_t *)param_2[3];
  if (puVar1 < puVar34) {
    puVar27 = puVar32;
    if (param_4 <= puVar1) {
      puVar27 = (uint64_t *)((int64_t)puVar32 + ((int64_t)puVar1 - (int64_t)param_4));
      uVar48 = param_4[1];
      *puVar32 = *param_4;
      puVar32[1] = uVar48;
      if ((int64_t)puVar1 - (int64_t)param_4 < 0x11) {
        param_4 = puVar1;
      }
      else {
        lVar43 = 0x10;
        do {
          uVar16 = ((uint64_t *)((int64_t)param_4 + lVar43))[1];
          *(uint64_t *)((int64_t)puVar32 + lVar43) = *(uint64_t *)((int64_t)param_4 + lVar43);
          ((uint64_t *)((int64_t)puVar32 + lVar43))[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)param_4 + lVar43 + 0x10);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)((int64_t)puVar32 + lVar43 + 0x10);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar24 = lVar43 + 0x20;
          lVar43 = lVar43 + 0x20;
        } while ((uint64_t *)((int64_t)puVar32 + lVar24) < puVar27);
        param_4 = puVar1;
      }
    }
    if (param_4 < puVar34) {
      uVar48 = (int64_t)puVar39 + (1 - (int64_t)param_4);
      if ((uint64_t)((int64_t)puVar27 - (int64_t)param_4) < 0x20 || uVar48 < 4) {
        puVar32 = puVar27;
      }
      else {
        if (uVar48 < 0x20) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar48 | 0xffffffffffffffe0;
          if (~(uVar26 ^ 0xb861e754) < (uVar26 ^ 0x8af6929c)) {
            uVar21 = uVar48 & 0xffffffffffffffe0;
          }
          uVar49 = 0x20;
          while( true ) {
            puVar7 = (uint64_t *)((int64_t)param_4 + (uVar49 - 0x20));
            uVar16 = puVar7[1];
            puVar8 = (uint64_t *)((int64_t)param_4 + (uVar49 - 0x10));
            uVar17 = *puVar8;
            uVar18 = puVar8[1];
            puVar8 = (uint64_t *)((int64_t)puVar27 + (uVar49 - 0x20));
            *puVar8 = *puVar7;
            puVar8[1] = uVar16;
            puVar7 = (uint64_t *)((int64_t)puVar27 + (uVar49 - 0x10));
            *puVar7 = uVar17;
            puVar7[1] = uVar18;
            if (uVar21 == uVar49) break;
            uVar49 = uVar49 + 0x20;
          }
          if (uVar48 == uVar21) goto LAB_7fffa55d0987;
          if ((uVar48 & 0x1c) == 0) {
            puVar32 = (uint64_t *)((int64_t)puVar27 + uVar21);
            param_4 = (uint64_t *)((int64_t)param_4 + uVar21);
            goto LAB_7fffa55d0893;
          }
        }
        uVar49 = uVar48 & 0xfffffffffffffffc;
        puVar32 = (uint64_t *)((int64_t)puVar27 + uVar49);
        for (; *(uint32_t *)((int64_t)puVar27 + uVar21) =
                    *(uint32_t *)((int64_t)param_4 + uVar21), uVar49 - 4 != uVar21;
            uVar21 = uVar21 + 4) {
        }
        if (uVar48 == uVar49) goto LAB_7fffa55d0987;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar49);
      }
LAB_7fffa55d0893:
      uVar48 = (int64_t)puVar39 - (int64_t)param_4;
      uVar29 = (uint32_t)uVar48;
      if ((uVar29 & 7) != 7) {
        uVar21 = (uint64_t)(uVar29 + 1 & 7);
        puVar27 = puVar32;
        puVar45 = param_4;
        do {
          uVar21 = uVar21 - 1;
          param_4 = (uint64_t *)((int64_t)puVar45 + 1);
          puVar32 = (uint64_t *)((int64_t)puVar27 + 1);
          *(char *)puVar27 = (char)*puVar45;
          puVar27 = puVar32;
          puVar45 = param_4;
        } while (uVar21 != 0);
        if (uVar48 < 7) goto LAB_7fffa55d0987;
      }
      lVar43 = 0;
      do {
        *(uint8_t *)((int64_t)puVar32 + lVar43) = *(uint8_t *)((int64_t)param_4 + lVar43);
        *(uint8_t *)((int64_t)puVar32 + lVar43 + 1) =
             *(uint8_t *)((int64_t)param_4 + lVar43 + 1);
        *(uint8_t *)((int64_t)puVar32 + lVar43 + 2) =
             *(uint8_t *)((int64_t)param_4 + lVar43 + 2);
        *(uint8_t *)((int64_t)puVar32 + lVar43 + 3) =
             *(uint8_t *)((int64_t)param_4 + lVar43 + 3);
        *(uint8_t *)((int64_t)puVar32 + lVar43 + 4) =
             *(uint8_t *)((int64_t)param_4 + lVar43 + 4);
        *(uint8_t *)((int64_t)puVar32 + lVar43 + 5) =
             *(uint8_t *)((int64_t)param_4 + lVar43 + 5);
        *(uint8_t *)((int64_t)puVar32 + lVar43 + 6) =
             *(uint8_t *)((int64_t)param_4 + lVar43 + 6);
        lVar24 = lVar43 + 7;
        *(uint8_t *)((int64_t)puVar32 + lVar43 + 7) =
             *(uint8_t *)((int64_t)param_4 + lVar43 + 7);
        lVar43 = lVar43 + 8;
      } while ((uint64_t *)((int64_t)param_4 + lVar24) != puVar39);
    }
LAB_7fffa55d0987:
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
    if (0xffff < uVar47) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar48 - *param_2 >> 3);
    }
  }
  else {
    uVar48 = param_4[1];
    *puVar32 = *param_4;
    puVar32[1] = uVar48;
    if (0x10 < uVar47) {
      uVar48 = param_2[3];
      uVar21 = param_4[3];
      *(uint64_t *)(uVar48 + 0x10) = param_4[2];
      *(uint64_t *)(uVar48 + 0x18) = uVar21;
      if (0x20 < (int64_t)uVar47) {
        lVar43 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)param_4 + lVar43 + 0x20);
          uVar16 = puVar8[1];
          puVar7 = (uint64_t *)(uVar48 + 0x20 + lVar43);
          *puVar7 = *puVar8;
          puVar7[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)param_4 + lVar43 + 0x30);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)(uVar48 + 0x30 + lVar43);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar24 = uVar48 + 0x20 + lVar43;
          lVar43 = lVar43 + 0x20;
        } while (lVar24 + 0x20U < uVar48 + uVar47);
      }
      goto LAB_7fffa55d0987;
    }
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
  }
  lVar43 = uVar41 + 4;
  *(short *)(uVar48 + 4) = (short)uVar47;
  *(uint32_t *)param_2[1] = 1;
  uVar47 = param_2[1];
  uVar41 = uVar41 + 1;
  puVar39 = puVar34;
  if (uVar41 <= (0x3599b501 - uVar26 ^ 0x72ca962e) + 0x67974d5e) goto LAB_7fffa55d09fe;
  goto LAB_7fffa55d09e7;
LAB_7fffa55d0060:
  puVar44 = (uint64_t *)((int64_t)puVar39 + lVar43);
  if (puVar44 < puVar4) {
    if (*(uint64_t *)((int64_t)puVar27 + lVar43) == *puVar44) goto code_r0x7fffa55d0083;
    uVar40 = 0;
    for (uVar41 = *puVar44 ^ *(uint64_t *)((int64_t)puVar27 + lVar43); (uVar41 & 1) == 0;
        uVar41 = uVar41 >> 1 | 0x8000000000000000) {
      uVar40 = uVar40 + 1;
    }
    uVar41 = ((uint64_t)(uVar40 >> 3) + lVar43) - 8;
  }
  else {
    puVar45 = (uint64_t *)(lVar43 + (int64_t)puVar27);
joined_r0x7fffa55cfd5a:
    if ((puVar44 < puVar2) && ((uint32_t)*puVar45 == (uint32_t)*puVar44)) {
      puVar45 = (uint64_t *)((int64_t)puVar45 + 4);
      puVar44 = (uint64_t *)((int64_t)puVar44 + 4);
    }
    if ((puVar44 < puVar3) && ((short)*puVar45 == (short)*puVar44)) {
      puVar44 = (uint64_t *)((int64_t)puVar44 + 2);
      puVar45 = (uint64_t *)((int64_t)puVar45 + 2);
    }
    if (puVar44 < puVar6) {
      puVar44 = (uint64_t *)((int64_t)puVar44 + (uint64_t)((char)*puVar45 == (char)*puVar44));
    }
    uVar41 = (int64_t)puVar44 - (int64_t)puVar32;
  }
  goto LAB_7fffa55d0248;
code_r0x7fffa55d0083:
  lVar43 = lVar43 + 8;
  goto LAB_7fffa55d0060;
LAB_7fffa55d0248:
  uVar29 = iVar31 - (int)puVar27;
  lVar43 = uVar41 + 8;
  if ((param_4 < puVar39) && (puVar5 < puVar27)) {
    while( true ) {
      puVar32 = (uint64_t *)((int64_t)puVar39 + -1);
      puVar27 = (uint64_t *)((int64_t)puVar27 + -1);
      if (*(char *)puVar32 != *(char *)puVar27) break;
      lVar43 = lVar43 + (uint64_t)
                        ((~(uVar26 ^ 0x142a212e) >> 1 |
                         (uint32_t)((~(uVar26 ^ 0x142a212e) & 1) != 0) << 0x1f) == 0xd091a751) * 2 + -1;
      puVar39 = puVar32;
      if ((puVar32 <= param_4) || (puVar27 <= puVar5)) break;
    }
  }
LAB_7fffa55d04f0:
  if (uVar21 < ((uVar26 ^ 0xc4ca) - 0x54b4 & 0xffff)) {
    *(uint32_t *)(lVar11 + uVar48 * 4) = (int)puVar34 - uVar46;
  }
  uVar47 = (int64_t)puVar39 - (int64_t)param_4;
  puVar34 = (uint64_t *)param_2[3];
  if (puVar1 < puVar39) {
    puVar32 = puVar34;
    if (param_4 <= puVar1) {
      uVar41 = param_4[1];
      *puVar34 = *param_4;
      puVar34[1] = uVar41;
      puVar32 = (uint64_t *)((int64_t)puVar34 + ((int64_t)puVar1 - (int64_t)param_4));
      if (0x10 < (int64_t)puVar1 - (int64_t)param_4) {
        lVar24 = 0x10;
        do {
          uVar16 = ((uint64_t *)((int64_t)param_4 + lVar24))[1];
          *(uint64_t *)((int64_t)puVar34 + lVar24) = *(uint64_t *)((int64_t)param_4 + lVar24);
          ((uint64_t *)((int64_t)puVar34 + lVar24))[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)param_4 + lVar24 + 0x10);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)((int64_t)puVar34 + lVar24 + 0x10);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar35 = lVar24 + 0x20;
          lVar24 = lVar24 + 0x20;
        } while ((uint64_t *)((int64_t)puVar34 + lVar35) < puVar32);
      }
      param_4 = puVar1;
    }
    if (param_4 < puVar39) {
      uVar41 = (int64_t)puVar39 - (int64_t)param_4;
      puVar34 = puVar32;
      if ((3 < uVar41) && (0x1f < (uint64_t)((int64_t)puVar32 - (int64_t)param_4))) {
        if (uVar41 < 0x20) {
          uVar48 = 0;
        }
        else {
          uVar48 = uVar41 & 0xffffffffffffffe0;
          uVar21 = 0;
          do {
            uVar16 = *(uint64_t *)((int64_t)param_4 + uVar21);
            uVar17 = ((uint64_t *)((int64_t)param_4 + uVar21))[1];
            puVar7 = (uint64_t *)((int64_t)param_4 + uVar21 + 0x10);
            uVar18 = puVar7[1];
            puVar8 = (uint64_t *)((int64_t)puVar32 + uVar21 + 0x10);
            *puVar8 = *puVar7;
            puVar8[1] = uVar18;
            *(uint64_t *)((int64_t)puVar32 + uVar21) = uVar16;
            ((uint64_t *)((int64_t)puVar32 + uVar21))[1] = uVar17;
            uVar21 = uVar21 + 0x20;
          } while (uVar48 != uVar21);
          if (uVar41 == uVar48) goto LAB_7fffa55d079f;
          if (((uint32_t)uVar41 & 0x1c) == ((0x4af69072 - uVar26) * 4 | 0x4af69072 - uVar26 >> 0x1e)) {
            param_4 = (uint64_t *)((int64_t)param_4 + uVar48);
            puVar34 = (uint64_t *)((int64_t)puVar32 + uVar48);
            goto LAB_7fffa55d0761;
          }
        }
        uVar21 = uVar41 & 0xfffffffffffffffc;
        puVar34 = (uint64_t *)((int64_t)puVar32 + uVar21);
        do {
          *(uint32_t *)((int64_t)puVar32 + uVar48) = *(uint32_t *)((int64_t)param_4 + uVar48);
          uVar48 = uVar48 + 4;
        } while (uVar21 != uVar48);
        if (uVar41 == uVar21) goto LAB_7fffa55d079f;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar21);
      }
LAB_7fffa55d0761:
      uVar41 = (uint64_t)((int)puVar39 - (int)param_4 & 7);
      puVar27 = puVar34;
      puVar32 = param_4;
      if (uVar41 == (uVar26 ^ 0x4af69072)) {
        puVar45 = param_4;
      }
      else {
        do {
          puVar45 = (uint64_t *)((int64_t)puVar32 + 1);
          puVar34 = (uint64_t *)((int64_t)puVar27 + 1);
          uVar41 = uVar41 - 1;
          *(char *)puVar27 = (char)*puVar32;
          puVar27 = puVar34;
          puVar32 = puVar45;
        } while (uVar41 != 0);
      }
      if ((uint64_t)((int64_t)param_4 - (int64_t)puVar39) < 0xfffffffffffffff9) {
        while( true ) {
          *(char *)puVar34 = (char)*puVar45;
          *(uint8_t *)((int64_t)puVar34 + 1) = *(uint8_t *)((int64_t)puVar45 + 1);
          *(uint8_t *)((int64_t)puVar34 + 2) = *(uint8_t *)((int64_t)puVar45 + 2);
          *(uint8_t *)((int64_t)puVar34 + 3) = *(uint8_t *)((int64_t)puVar45 + 3);
          *(uint8_t *)((int64_t)puVar34 + 4) = *(uint8_t *)((int64_t)puVar45 + 4);
          *(uint8_t *)((int64_t)puVar34 + 5) = *(uint8_t *)((int64_t)puVar45 + 5);
          *(uint8_t *)((int64_t)puVar34 + 6) = *(uint8_t *)((int64_t)puVar45 + 6);
          *(uint8_t *)((int64_t)puVar34 + 7) = *(uint8_t *)((int64_t)puVar45 + 7);
          if (puVar45 + 1 == puVar39) break;
          puVar34 = puVar34 + 1;
          puVar45 = puVar45 + 1;
        }
      }
    }
LAB_7fffa55d079f:
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
    if (0xffff < uVar47) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar48 - *param_2 >> 3);
    }
  }
  else {
    uVar41 = param_4[1];
    *puVar34 = *param_4;
    puVar34[1] = uVar41;
    uVar41 = param_2[3];
    if (0x10 < uVar47) {
      uVar48 = param_4[3];
      *(uint64_t *)(uVar41 + 0x10) = param_4[2];
      *(uint64_t *)(uVar41 + 0x18) = uVar48;
      if ((0xdab0d55 - uVar26) * -0x11e7cde3 <
          (-0x392e1224 << (bVar14 & 0x1f) | 0xc6d1eddcU >> 0x20 - (bVar14 & 0x1f)) ==
          0x20 < (int64_t)uVar47) {
        lVar24 = 0;
        do {
          puVar8 = (uint64_t *)((int64_t)param_4 + lVar24 + 0x20);
          uVar16 = puVar8[1];
          puVar7 = (uint64_t *)(uVar41 + 0x20 + lVar24);
          *puVar7 = *puVar8;
          puVar7[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)param_4 + lVar24 + 0x30);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)(uVar41 + 0x30 + lVar24);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar35 = uVar41 + 0x20 + lVar24;
          lVar24 = lVar24 + 0x20;
        } while (lVar35 + 0x20U < uVar41 + uVar47);
      }
      goto LAB_7fffa55d079f;
    }
    uVar48 = param_2[1];
    param_2[3] = uVar41 + uVar47;
  }
  uVar41 = lVar43 - 3;
  *(short *)(uVar48 + 4) = (short)uVar47;
  *(uint32_t *)param_2[1] = uVar29 + 3;
  uVar47 = param_2[1];
  puVar34 = puVar39;
  uVar40 = uStack_7c;
  uStack_7c = uVar29;
  if (uVar41 < 0x10000) goto LAB_7fffa55d09fe;
LAB_7fffa55d09e7:
  *(uint32_t *)(param_2 + 9) = 2;
  *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar47 - *param_2 >> 3);
  puVar39 = puVar34;
LAB_7fffa55d09fe:
  *(short *)(uVar47 + 6) = (short)uVar41;
  param_2[1] = param_2[1] + 8;
  puVar39 = (uint64_t *)((int64_t)puVar39 + lVar43);
  if (puVar39 <= puVar38) {
    uVar29 = iVar30 + 2;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar10 + (uint64_t)uVar29) * -0x30e44323485a9b9d)
                       >> (bVar22 & 0x3f)) * 4) = uVar29;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)((int64_t)puVar39 + -2) * -0x30e44323485a9b9d) >>
                       (bVar22 & 0x3f)) * 4) = ((int)puVar39 + -2) - uVar46;
    *(uint32_t *)(lVar12 + (uint64_t)
                       ((uint32_t)(*(int *)(lVar10 + (uint64_t)uVar29) * -0x61c8864f) >>
                       (bVar23 & 0x1f)) * 4) = uVar29;
    *(uint32_t *)(lVar12 + (uint64_t)
                       ((uint32_t)(*(int *)((int64_t)puVar39 + -1) * -0x61c8864f) >> (bVar23 & 0x1f)) *
                       4) = ((int)puVar39 + -1) - uVar46;
    uVar29 = uStack_7c;
    do {
      uStack_7c = uVar40;
      if (uStack_7c == (uint16_t)((uVar15 + 0x6f8e) * 0x10 | (uint16_t)(uVar15 + 0x6f8e) >> 0xc)) {
LAB_7fffa55d0d08:
        uVar40 = uStack_7c;
        uStack_7c = uVar29;
        break;
      }
      if ((uint32_t)*puVar39 != *(uint32_t *)((int64_t)puVar39 - (uint64_t)uStack_7c))
      goto LAB_7fffa55d0d08;
      lVar43 = -(uint64_t)uStack_7c;
      puVar34 = (uint64_t *)((int64_t)puVar39 + 4);
      puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + 4);
      puVar32 = puVar34;
      if (puVar34 < puVar4) {
        if (*puVar27 == *puVar34) {
          lVar24 = 0;
          do {
            puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xc);
            if (puVar4 <= puVar32) {
              puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + lVar24 + 0xc);
              puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xc);
              goto joined_r0x7fffa55d0bab;
            }
            uVar41 = *puVar32;
            uVar47 = *(uint64_t *)((int64_t)puVar39 + lVar24 + lVar43 + 0xc);
            lVar24 = lVar24 + 8;
          } while (uVar47 == uVar41);
          uVar40 = 0;
          for (uVar41 = uVar41 ^ uVar47; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar40 = uVar40 + 1;
          }
          uVar41 = (uint64_t)(uVar40 >> 3) + lVar24;
        }
        else {
          uVar40 = 0;
          for (uVar41 = *puVar34 ^ *puVar27; (uVar41 & 1) == 0;
              uVar41 = uVar41 >> 1 | 0x8000000000000000) {
            uVar40 = uVar40 + 1;
          }
          uVar41 = (uint64_t)(uVar40 >> 3);
        }
      }
      else {
joined_r0x7fffa55d0bab:
        if ((puVar32 < puVar2) && ((uint32_t)*puVar27 == (uint32_t)*puVar32)) {
          puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
          puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
        }
        if ((puVar32 < puVar3) && ((short)*puVar27 == (short)*puVar32)) {
          puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
          puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
        }
        if (puVar32 < puVar6) {
          puVar32 = (uint64_t *)((int64_t)puVar32 + (uint64_t)((char)*puVar27 == (char)*puVar32))
          ;
        }
        uVar41 = (int64_t)puVar32 - (int64_t)puVar34;
      }
      iVar30 = (int)puVar39 - uVar46;
      *(int *)(lVar12 + (uint64_t)((uint32_t)*puVar39 * -0x61c8864f >> (bVar23 & 0x1f)) * 4) = iVar30;
      *(int *)(lVar11 + (*puVar39 * -0x30e44323485a9b9d >> (bVar22 & 0x3f)) * 4) = iVar30;
      if (puVar39 <= puVar1) {
        puVar34 = (uint64_t *)param_2[3];
        uVar47 = puVar39[1];
        *puVar34 = *puVar39;
        puVar34[1] = uVar47;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      uVar47 = param_2[1];
      if (0xffff < uVar41 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        uVar48 = uVar47 - *param_2;
        if ((int64_t)
            (uint64_t)(0xac6c8aa6U >> (bVar14 & 0x1f) | -0x5393755a << 0x20 - (bVar14 & 0x1f)) <=
            (int64_t)(int)((uVar26 ^ 0x403e83e5) << 4 | (uVar26 ^ 0x403e83e5) >> 0x1c)) {
          uVar48 = uVar47 | *param_2;
        }
        *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar48 >> 3);
      }
      *(short *)(uVar47 + 6) = (short)(uVar41 + 1);
      param_2[1] = param_2[1] + 8;
      puVar39 = (uint64_t *)((int64_t)puVar39 + uVar41 + 4);
      uVar40 = uVar29;
      uVar29 = uStack_7c;
    } while (puVar39 <= puVar38);
  }
  puVar34 = (uint64_t *)((int64_t)puVar39 + 1);
  param_4 = puVar39;
  if (puVar38 < puVar34) goto LAB_7fffa55d35a7;
  goto LAB_7fffa55cfaf0;
LAB_7fffa55ce8c0:
  puVar32 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xd);
  if (puVar32 < puVar1) goto code_r0x7fffa55ce8cd;
  puVar27 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0xd);
  puVar32 = (uint64_t *)((int64_t)puVar39 + lVar43 + lVar24 + 0xd);
LAB_7fffa55cea8e:
  if ((puVar27 < puVar3) && ((uint32_t)*puVar32 == (uint32_t)*puVar27)) {
    puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
    puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
  }
  if ((puVar27 < puVar2) && ((short)*puVar32 == (short)*puVar27)) {
    puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
    puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
  }
  if (puVar27 < puVar6) {
    puVar27 = (uint64_t *)((int64_t)puVar27 + (uint64_t)((char)*puVar32 == (char)*puVar27));
  }
  uVar41 = (int64_t)puVar27 - (int64_t)puVar34;
  goto LAB_7fffa55ceaea;
code_r0x7fffa55ce8cd:
  uVar41 = *puVar32;
  uVar47 = *(uint64_t *)((int64_t)puVar39 + lVar24 + lVar43 + 0xd);
  lVar24 = lVar24 + 8;
  if (uVar47 != uVar41) goto code_r0x7fffa55ce8ed;
  goto LAB_7fffa55ce8c0;
code_r0x7fffa55ce8ed:
  uVar29 = 0;
  for (uVar41 = uVar41 ^ uVar47; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x8000000000000000) {
    uVar29 = uVar29 + 1;
  }
  uVar41 = (uint64_t)(uVar29 >> 3) + lVar24;
LAB_7fffa55ceaea:
  puVar32 = (uint64_t *)((int64_t)puVar39 + 1);
  puVar34 = (uint64_t *)param_2[3];
  uVar47 = (int64_t)puVar32 - (int64_t)param_4;
  if (puVar4 < puVar32) {
    puVar27 = puVar34;
    if (param_4 <= puVar4) {
      uVar48 = param_4[1];
      *puVar34 = *param_4;
      puVar34[1] = uVar48;
      puVar27 = (uint64_t *)((int64_t)puVar34 + ((int64_t)puVar4 - (int64_t)param_4));
      if ((int64_t)(uint64_t)((uVar26 ^ 0x2a980dd1) * 0x3c7b5ebb) <=
          (int64_t)puVar4 - (int64_t)param_4) {
        lVar43 = 0x10;
        do {
          uVar16 = ((uint64_t *)((int64_t)param_4 + lVar43))[1];
          *(uint64_t *)((int64_t)puVar34 + lVar43) = *(uint64_t *)((int64_t)param_4 + lVar43);
          ((uint64_t *)((int64_t)puVar34 + lVar43))[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)param_4 + lVar43 + 0x10);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)((int64_t)puVar34 + lVar43 + 0x10);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar24 = lVar43 + 0x20;
          lVar43 = lVar43 + 0x20;
        } while ((uint64_t *)((int64_t)puVar34 + lVar24) < puVar27);
      }
      param_4 = puVar4;
    }
    if (param_4 < puVar32) {
      uVar48 = ~(uint64_t)param_4;
      uVar48 = ((uint64_t)puVar39 ^ (uint64_t)param_4) * -0x61efbcfb +
               ((uint64_t)puVar39 | uVar48) * 0x1742594 +
               (~(uint64_t)puVar39 & (uint64_t)param_4) * 0x61efbcf9 +
               ((uint64_t)puVar39 & uVar48) * 0x607b9767 +
               (uVar48 ^ (uint64_t)puVar39) *
               (int64_t)(int)((uVar26 ^ 0x3527eb3f) << 3 | (uVar26 ^ 0x3527eb3f) >> 0x1d);
      if ((3 < uVar48) &&
         ((uint64_t)(uVar26 + 0xb5096fae) <= (uint64_t)((int64_t)puVar27 - (int64_t)param_4))) {
        if (uVar48 < 0x20) {
          uVar21 = 0;
        }
        else {
          uVar21 = uVar48 & 0xffffffffffffffe0;
          uVar49 = 0;
          do {
            uVar16 = ((uint64_t *)((int64_t)param_4 + uVar49))[1];
            puVar7 = (uint64_t *)((int64_t)param_4 + uVar49 + 0x10);
            uVar17 = *puVar7;
            uVar18 = puVar7[1];
            *(uint64_t *)((int64_t)puVar27 + uVar49) =
                 *(uint64_t *)((int64_t)param_4 + uVar49);
            ((uint64_t *)((int64_t)puVar27 + uVar49))[1] = uVar16;
            puVar7 = (uint64_t *)((int64_t)puVar27 + uVar49 + 0x10);
            *puVar7 = uVar17;
            puVar7[1] = uVar18;
            uVar49 = uVar49 + 0x20;
          } while (uVar21 != uVar49);
          if (uVar48 == uVar21) goto LAB_7fffa55cee62;
          if (((uint32_t)uVar48 & 0x1c) == ((uVar26 | 1) * 0x5b39 - 0xa9b & 0xffff)) {
            param_4 = (uint64_t *)((int64_t)param_4 + uVar21);
            puVar27 = (uint64_t *)((int64_t)puVar27 + uVar21);
            goto LAB_7fffa55cee11;
          }
        }
        uVar49 = uVar48 & 0xfffffffffffffffc;
        for (; *(uint32_t *)((int64_t)puVar27 + uVar21) =
                    *(uint32_t *)((int64_t)param_4 + uVar21), uVar49 - 4 != uVar21;
            uVar21 = uVar21 + 4) {
        }
        if (((uVar26 + 0x9e8c2b6f) * 0x68fafc41 <=
             ~(0x2887a2a3U >> (bVar14 & 0x1f) | 0x2887a2a3 << 0x20 - (bVar14 & 0x1f))) ||
           (uVar48 == uVar49)) goto LAB_7fffa55cee62;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar49);
        puVar27 = (uint64_t *)((int64_t)puVar27 + uVar49);
      }
LAB_7fffa55cee11:
      uVar48 = (int64_t)puVar39 - (int64_t)param_4;
      uVar29 = (uint32_t)uVar48;
      if ((~uVar29 & 7) != 0) {
        uVar21 = (uint64_t)(uVar29 + 1 & 7);
        puVar34 = puVar27;
        puVar45 = param_4;
        do {
          uVar21 = uVar21 - 1;
          param_4 = (uint64_t *)((int64_t)puVar45 + 1);
          puVar27 = (uint64_t *)((int64_t)puVar34 + 1);
          *(char *)puVar34 = (char)*puVar45;
          puVar34 = puVar27;
          puVar45 = param_4;
        } while (uVar21 != 0);
        if (uVar48 < 7) goto LAB_7fffa55cee62;
      }
      param_4 = (uint64_t *)((int64_t)param_4 + 7);
      while( true ) {
        if (((uVar26 + 0xaf2d9f87) * 0x80000 | uVar26 + 0xaf2d9f87 >> 0xd) == 0x7fcfd121) {
          *(uint8_t *)puVar27 = *(uint8_t *)((int64_t)param_4 + -7);
          *(uint8_t *)((int64_t)puVar27 + 1) = *(uint8_t *)((int64_t)param_4 + -6);
        }
        else {
          *(uint16_t *)puVar27 = *(uint16_t *)((int64_t)param_4 + -7);
        }
        *(uint8_t *)((int64_t)puVar27 + 2) = *(uint8_t *)((int64_t)param_4 + -5);
        *(uint8_t *)((int64_t)puVar27 + 3) = *(uint8_t *)((int64_t)param_4 + -4);
        *(uint8_t *)((int64_t)puVar27 + 4) = *(uint8_t *)((int64_t)param_4 + -3);
        *(uint8_t *)((int64_t)puVar27 + 5) = *(uint8_t *)((int64_t)param_4 + -2);
        *(uint8_t *)((int64_t)puVar27 + 6) = *(uint8_t *)((int64_t)param_4 + -1);
        *(char *)((int64_t)puVar27 + 7) = (char)*param_4;
        if (param_4 == puVar39) break;
        puVar27 = puVar27 + 1;
        param_4 = param_4 + 1;
      }
    }
LAB_7fffa55cee62:
    param_2[3] = param_2[3] + uVar47;
    uVar48 = param_2[1];
    if (0xffff < uVar47) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar48 - *param_2 >> 3);
    }
  }
  else {
    uVar48 = param_4[1];
    *puVar34 = *param_4;
    puVar34[1] = uVar48;
    if (0x10 < uVar47) {
      uVar48 = param_2[3];
      uVar21 = param_4[3];
      *(uint64_t *)(uVar48 + 0x10) = param_4[2];
      *(uint64_t *)(uVar48 + 0x18) = uVar21;
      if (0x20 < (int64_t)uVar47) {
        uVar21 = uVar48 + 0x40;
        param_4 = param_4 + 6;
        while( true ) {
          uVar49 = param_4[-1];
          *(uint64_t *)(uVar21 - 0x20) = param_4[-2];
          *(uint64_t *)(uVar21 - 0x18) = uVar49;
          uVar49 = param_4[1];
          *(uint64_t *)(uVar21 - 0x10) = *param_4;
          *(uint64_t *)(uVar21 - 8) = uVar49;
          if (uVar48 + uVar47 <= uVar21) break;
          uVar21 = uVar21 + 0x20;
          param_4 = param_4 + 4;
        }
      }
      goto LAB_7fffa55cee62;
    }
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
  }
  lVar43 = uVar41 + 4;
  uVar41 = uVar41 + 1;
  *(short *)(uVar48 + 4) = (short)uVar47;
  *(uint32_t *)param_2[1] = 1;
  uVar47 = param_2[1];
  goto joined_r0x7fffa55ceeb7;
LAB_7fffa55ce9c6:
  puVar32 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0x10);
  if (puVar32 < puVar1) goto code_r0x7fffa55ce9d5;
  puVar44 = (uint64_t *)((int64_t)puVar39 + lVar43 + 0x10);
  puVar32 = (uint64_t *)((int64_t)puVar27 + lVar43 + 0x10);
LAB_7fffa55cf31e:
  if ((puVar44 < puVar3) && ((uint32_t)*puVar32 == (uint32_t)*puVar44)) {
    puVar44 = (uint64_t *)((int64_t)puVar44 + 4);
    puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
  }
  if ((puVar44 < puVar2) && ((short)*puVar32 == (short)*puVar44)) {
    puVar44 = (uint64_t *)((int64_t)puVar44 + 2);
    puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
  }
  if (puVar44 < puVar6) {
    puVar44 = (uint64_t *)((int64_t)puVar44 + (uint64_t)((char)*puVar32 == (char)*puVar44));
  }
  uVar41 = (int64_t)puVar44 - (int64_t)puVar45;
  goto LAB_7fffa55cf36b;
code_r0x7fffa55ce9d5:
  uVar41 = *(uint64_t *)((int64_t)puVar27 + lVar43 + 0x10);
  uVar21 = *puVar32;
  lVar43 = lVar43 + 8;
  if (uVar41 != uVar21) goto code_r0x7fffa55ce9e6;
  goto LAB_7fffa55ce9c6;
code_r0x7fffa55ce9e6:
  uVar40 = 0;
  for (uVar41 = uVar41 ^ uVar21; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x8000000000000000) {
    uVar40 = uVar40 + 1;
  }
  uVar41 = (uint64_t)(uVar40 >> 3) + lVar43;
LAB_7fffa55cf36b:
  uStack_88 = iVar30 - (int)puVar27;
  lVar43 = uVar41 + 8;
  if ((param_4 < puVar39) && (puVar5 < puVar27)) {
    while( true ) {
      puVar32 = (uint64_t *)((int64_t)puVar39 + -1);
      puVar27 = (uint64_t *)((int64_t)puVar27 + -1);
      if (*(char *)puVar32 != *(char *)puVar27) break;
      lVar43 = lVar43 + 1;
      puVar39 = puVar32;
      if ((puVar27 <= puVar5) || (puVar32 <= param_4)) break;
    }
  }
LAB_7fffa55cf4fa:
  puVar32 = puVar39;
LAB_7fffa55cf502:
  if (uVar48 < 4) {
    *(uint32_t *)(lVar11 + uVar47 * 4) = (int)puVar34 - uVar46;
  }
  puVar39 = (uint64_t *)param_2[3];
  uVar47 = (int64_t)puVar32 - (int64_t)param_4;
  if (puVar4 < puVar32) {
    puVar34 = puVar39;
    if (param_4 <= puVar4) {
      puVar34 = (uint64_t *)((int64_t)puVar39 + ((int64_t)puVar4 - (int64_t)param_4));
      uVar41 = param_4[1];
      *puVar39 = *param_4;
      puVar39[1] = uVar41;
      if (0x10 < (int64_t)puVar4 - (int64_t)param_4) {
        lVar24 = 0x10;
        do {
          uVar16 = ((uint64_t *)((int64_t)param_4 + lVar24))[1];
          *(uint64_t *)((int64_t)puVar39 + lVar24) = *(uint64_t *)((int64_t)param_4 + lVar24);
          ((uint64_t *)((int64_t)puVar39 + lVar24))[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)param_4 + lVar24 + 0x10);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)((int64_t)puVar39 + lVar24 + 0x10);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          lVar35 = lVar24 + 0x20;
          lVar24 = lVar24 + 0x20;
        } while ((uint64_t *)((int64_t)puVar39 + lVar35) < puVar34);
      }
      param_4 = puVar4;
    }
    if (param_4 < puVar32) {
      uVar41 = (int64_t)puVar32 - (int64_t)param_4;
      if ((3 < uVar41) && (0x1f < (uint64_t)((int64_t)puVar34 - (int64_t)param_4))) {
        if (uVar41 < 0x20) {
          uVar48 = 0;
        }
        else {
          uVar48 = uVar41 & 0xffffffffffffffe0;
          uVar21 = 0x20;
          do {
            bVar51 = uVar48 == uVar21;
            if ((int64_t)(uint64_t)((uVar26 | 1) * -0xa73a2f4) < -0x49f53adb) {
              bVar51 = uVar48 < uVar21;
            }
            puVar7 = (uint64_t *)((int64_t)param_4 + (uVar21 - 0x20));
            uVar16 = *puVar7;
            uVar17 = puVar7[1];
            puVar7 = (uint64_t *)((int64_t)param_4 + (uVar21 - 0x10));
            uVar18 = puVar7[1];
            puVar8 = (uint64_t *)((int64_t)puVar34 + (uVar21 - 0x10));
            *puVar8 = *puVar7;
            puVar8[1] = uVar18;
            puVar7 = (uint64_t *)((int64_t)puVar34 + (uVar21 - 0x20));
            *puVar7 = uVar16;
            puVar7[1] = uVar17;
            uVar21 = uVar21 + 0x20;
          } while (!bVar51);
          if (uVar41 == uVar48) goto LAB_7fffa55cf9e5;
          if ((uVar41 & 0x1c) == 0) {
            param_4 = (uint64_t *)((int64_t)param_4 + uVar48);
            puVar34 = (uint64_t *)((int64_t)puVar34 + uVar48);
            goto LAB_7fffa55cf93b;
          }
        }
        uVar21 = uVar41 & 0xfffffffffffffffc;
        do {
          *(uint32_t *)((int64_t)puVar34 + uVar48) = *(uint32_t *)((int64_t)param_4 + uVar48);
          uVar40 = (uint32_t)uVar48;
          uVar48 = uVar48 + 4;
          if ((uVar26 ^ 0x3d1ccb5) < 0x13fa8264) {
            uVar48 = (uint64_t)(uVar40 & 4);
          }
        } while (uVar48 != uVar21);
        if (uVar41 == uVar21) goto LAB_7fffa55cf9e5;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar21);
        puVar34 = (uint64_t *)((int64_t)puVar34 + uVar21);
      }
LAB_7fffa55cf93b:
      uVar40 = (int)puVar32 - (int)param_4 & 7;
      uVar41 = (uint64_t)uVar40;
      puVar39 = param_4;
      puVar27 = param_4;
      if (uVar40 != 0) {
        do {
          puVar39 = (uint64_t *)((int64_t)puVar27 + 1);
          *(char *)puVar34 = (char)*puVar27;
          puVar34 = (uint64_t *)((int64_t)puVar34 + 1);
          uVar41 = uVar41 - 1;
          puVar27 = puVar39;
        } while (uVar41 != 0);
      }
      if ((uint64_t)((int64_t)param_4 - (int64_t)puVar32) < 0xfffffffffffffff9) {
        lVar24 = 0;
        do {
          *(uint8_t *)((int64_t)puVar34 + lVar24) = *(uint8_t *)((int64_t)puVar39 + lVar24);
          *(uint8_t *)((int64_t)puVar34 + lVar24 + 1) =
               *(uint8_t *)((int64_t)puVar39 + lVar24 + 1);
          *(uint8_t *)((int64_t)puVar34 + lVar24 + 2) =
               *(uint8_t *)((int64_t)puVar39 + lVar24 + 2);
          *(uint8_t *)((int64_t)puVar34 + lVar24 + 3) =
               *(uint8_t *)((int64_t)puVar39 + lVar24 + 3);
          *(uint8_t *)((int64_t)puVar34 + lVar24 + 4) =
               *(uint8_t *)((int64_t)puVar39 + lVar24 + 4);
          *(uint8_t *)((int64_t)puVar34 + lVar24 + 5) =
               *(uint8_t *)((int64_t)puVar39 + lVar24 + 5);
          *(uint8_t *)((int64_t)puVar34 + lVar24 + 6) =
               *(uint8_t *)((int64_t)puVar39 + lVar24 + 6);
          *(uint8_t *)((int64_t)puVar34 + lVar24 + 7) =
               *(uint8_t *)((int64_t)puVar39 + lVar24 + 7);
          lVar35 = lVar24 + 8;
          lVar24 = lVar24 + 8;
        } while ((uint64_t *)((int64_t)puVar39 + lVar35) != puVar32);
      }
    }
LAB_7fffa55cf9e5:
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
    if (0xffff < uVar47) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)(uVar48 - *param_2 >> 3);
    }
  }
  else {
    uVar41 = param_4[1];
    *puVar39 = *param_4;
    puVar39[1] = uVar41;
    if (0x10 < uVar47) {
      uVar41 = param_2[3];
      uVar48 = param_4[3];
      *(uint64_t *)(uVar41 + 0x10) = param_4[2];
      *(uint64_t *)(uVar41 + 0x18) = uVar48;
      bVar51 = (int64_t)uVar47 < 0x21;
      if ((0xf3fa691bU >> (bVar14 & 0x1f) | -0xc0596e5 << 0x20 - (bVar14 & 0x1f)) == 0x2051e3f3) {
        bVar51 = uVar47 != ((0x523 - uVar26 ^ 0x4256) - 0x36c6 & 0xffff);
      }
      if (!bVar51) {
        lVar24 = 0;
        while( true ) {
          puVar8 = (uint64_t *)((int64_t)param_4 + lVar24 + 0x20);
          uVar16 = puVar8[1];
          puVar7 = (uint64_t *)(uVar41 + 0x20 + lVar24);
          *puVar7 = *puVar8;
          puVar7[1] = uVar16;
          puVar7 = (uint64_t *)((int64_t)param_4 + lVar24 + 0x30);
          uVar16 = puVar7[1];
          puVar8 = (uint64_t *)(uVar41 + 0x30 + lVar24);
          *puVar8 = *puVar7;
          puVar8[1] = uVar16;
          if (uVar41 + uVar47 <= uVar41 + 0x20 + lVar24 + 0x20) break;
          lVar24 = lVar24 + 0x20;
        }
      }
      goto LAB_7fffa55cf9e5;
    }
    uVar48 = param_2[1];
    param_2[3] = param_2[3] + uVar47;
  }
  uVar41 = lVar43 - 3;
  *(short *)(uVar48 + 4) = (short)uVar47;
  *(uint32_t *)param_2[1] = uStack_88 + 3;
  uVar47 = param_2[1];
  uVar40 = uStack_7c;
  uStack_7c = uStack_88;
joined_r0x7fffa55ceeb7:
  if (0xffff < uVar41) {
    *(uint32_t *)(param_2 + 9) = 2;
    uVar29 = (uint32_t)(uVar47 - *param_2 >> 3);
    if ((int64_t)
        (uint64_t)~(0xcdb7d724U >> (bVar14 & 0x1f) | -0x324828dc << 0x20 - (bVar14 & 0x1f)) <=
        (int64_t)(int)(uVar26 + 0x903d69b9)) {
      uVar29 = (uint32_t)(uVar47 - *param_2) & 3;
    }
    *(uint32_t *)((int64_t)param_2 + 0x4c) = uVar29;
  }
  puVar39 = (uint64_t *)((int64_t)puVar32 + lVar43);
  *(short *)(uVar47 + 6) = (short)uVar41;
  param_2[1] = param_2[1] + 8;
  if (puVar38 < puVar39) {
  }
  else {
    uVar29 = iVar36 + 2;
    *(uint32_t *)(lVar11 + ((uint64_t)(*(int64_t *)(lVar10 + (uint64_t)uVar29) * -0x30e44323485a9b9d)
                       >> (bVar22 & 0x3f)) * 4) = uVar29;
    uVar41 = (uVar20 | 1) * -0x2626bb17979c0116;
    *(uint32_t *)(lVar11 + ((uVar41 << 0x3d | uVar41 >> 3) * *(int64_t *)((int64_t)puVar39 + -2) >>
                       (bVar22 & 0x3f)) * 4) = ((int)puVar39 + -2) - uVar46;
    *(uint32_t *)(lVar12 + ((uint64_t)(*(int64_t *)(lVar10 + (uint64_t)uVar29) * -0x30e44323405a9d00)
                       >> (bVar23 & 0x3f)) * 4) = uVar29;
    *(uint32_t *)(lVar12 + ((uint64_t)(*(int64_t *)((int64_t)puVar39 + -1) * -0x30e44323405a9d00) >>
                       (bVar23 & 0x3f)) * 4) = ((int)puVar39 + -1) - uVar46;
    uVar29 = uStack_7c;
    do {
      uStack_7c = uVar40;
      if (((uint32_t)*puVar39 != *(uint32_t *)((int64_t)puVar39 - (uint64_t)uStack_7c)) ||
         (uStack_7c == 0)) {
        uVar40 = uStack_7c;
        uStack_7c = uVar29;
        break;
      }
      lVar43 = -(uint64_t)uStack_7c;
      puVar32 = (uint64_t *)((int64_t)puVar39 + 4);
      puVar27 = (uint64_t *)((int64_t)puVar39 + lVar43 + 4);
      puVar34 = puVar32;
      if (puVar32 < puVar1) {
        uVar41 = *puVar27;
        uVar47 = *puVar32;
        bVar51 = uVar41 <= uVar47;
        if (uVar26 != 0xf963bfaf) {
          bVar51 = uVar41 == uVar47;
        }
        if (bVar51) {
          lVar24 = 0xc;
LAB_7fffa55cf0a0:
          puVar34 = (uint64_t *)((int64_t)puVar39 + lVar24);
          if (puVar34 < puVar1) {
            uVar41 = *(uint64_t *)((int64_t)puVar39 + lVar24 + lVar43);
            if (uVar41 == *puVar34) goto code_r0x7fffa55cf0b9;
            uVar40 = 0;
            for (uVar41 = uVar41 ^ *puVar34; (uVar41 & 1) == 0;
                uVar41 = uVar41 >> 1 | 0x8000000000000000) {
              uVar40 = uVar40 + 1;
            }
            uVar41 = ((uint64_t)(uVar40 >> 3) + lVar24) - 4;
            goto LAB_7fffa55cf1a6;
          }
          puVar27 = (uint64_t *)(lVar43 + (int64_t)puVar34);
          goto joined_r0x7fffa55cf0cb;
        }
        uVar48 = uVar41 | uVar47;
        if ((0x7ff95742 << (bVar14 & 0x1f) | 0x7ff95742U >> 0x20 - (bVar14 & 0x1f)) == 0x5d09ffe5) {
          uVar48 = uVar41 ^ uVar47;
        }
        uVar40 = 0;
        for (; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x8000000000000000) {
          uVar40 = uVar40 + 1;
        }
        uVar41 = (uint64_t)(uVar40 >> 3);
      }
      else {
joined_r0x7fffa55cf0cb:
        if ((puVar34 < puVar3) && ((uint32_t)*puVar27 == (uint32_t)*puVar34)) {
          puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
          puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
        }
        if ((puVar34 < puVar2) && ((short)*puVar27 == (short)*puVar34)) {
          puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
          puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
        }
        if (puVar34 < puVar6) {
          uVar47 = (uint64_t)((char)*puVar27 == (char)*puVar34);
          uVar41 = -uVar47;
          if (-0x151adfbe <
              (int64_t)
              (uint64_t)(-0x42b5d85d << (bVar14 & 0x1f) | 0xbd4a27a3U >> 0x20 - (bVar14 & 0x1f))) {
            uVar41 = uVar47;
          }
          puVar34 = (uint64_t *)((int64_t)puVar34 + uVar41);
        }
        uVar41 = (int64_t)puVar34 - (int64_t)puVar32;
      }
LAB_7fffa55cf1a6:
      iVar36 = (int)puVar39 - uVar46;
      *(int *)(lVar12 + (*puVar39 * -0x30e44323405a9d00 >> (bVar23 & 0x3f)) * 4) = iVar36;
      *(int *)(lVar11 + (*puVar39 * -0x30e44323485a9b9d >> (bVar22 & 0x3f)) * 4) = iVar36;
      if (puVar39 <= puVar4) {
        puVar34 = (uint64_t *)param_2[3];
        uVar47 = puVar39[1];
        *puVar34 = *puVar39;
        puVar34[1] = uVar47;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar41 + 1) {
        *(int *)((int64_t)param_2 + 0x4c) = (int)(param_2[1] - *param_2 >> 3);
        *(uint32_t *)(param_2 + 9) = 2;
      }
      *(short *)(param_2[1] + 6) = (short)(uVar41 + 1);
      param_2[1] = param_2[1] + 8;
      puVar39 = (uint64_t *)((int64_t)puVar39 + uVar41 + 4);
      uVar40 = uVar29;
      uVar29 = uStack_7c;
    } while (puVar39 <= puVar38);
  }
  puVar34 = (uint64_t *)((int64_t)puVar39 + 1);
  param_4 = puVar39;
  if (puVar38 < puVar34) goto LAB_7fffa55d35a7;
  goto LAB_7fffa55ce709;
code_r0x7fffa55cf0b9:
  lVar24 = lVar24 + 8;
  goto LAB_7fffa55cf0a0;
LAB_7fffa55d0d2f:
  puVar39 = param_4;
  goto LAB_7fffa55d35a7;
}


// ============================================================================
// Function : FUN_7fffa55d3650  |  RVA: 0xe63650  |  Size: 1689 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55d3650(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  char *pcVar1;
  uint8_t uVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  uint8_t bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  uint8_t *pbVar14;
  char *pcVar15;
  uint16_t *puVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int64_t lVar19;
  char *pcVar20;
  uint64_t uVar21;
  int64_t lVar22;
  uint32_t uVar23;
  bool bVar24;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  
  uVar10 = (param_1 << 0x3c | param_1 >> 4) ^ (param_1 << 0x2f | param_1 >> 0x11) ^
           (param_1 << 0x16 | param_1 >> 0x2a);
  uVar10 = (uVar10 << 0x32 | uVar10 >> 0xe) ^ (uVar10 << 0xc | uVar10 >> 0x34) ^ uVar10;
  uVar10 = (uVar10 << 0x18 | uVar10 >> 0x28) ^ (uVar10 << 0x24 | uVar10 >> 0x1c) ^ uVar10;
  uVar10 = (uVar10 << 8 | uVar10 >> 0x38) ^ (uVar10 << 0x30 | uVar10 >> 0x10) ^ uVar10;
  uVar5 = (uint16_t)param_3;
  uVar10 = (uVar10 << 0x20 | uVar10 >> 0x20) ^ (uVar10 << 0x10 | uVar10 >> 0x30) ^ uVar10;
  pbVar14 = (uint8_t *)(uVar10 << 0x20 | uVar10 >> 0x20);
  lVar22 = *(int64_t *)((int64_t)(short)(0x43 - uVar5) + 0x7fffa47be7ee);
  bVar6 = (uint8_t)param_3;
  if (lVar22 == 0) goto LAB_7fffa55d3ba9;
  pcVar15 = *(char **)((int64_t)&g_api_ntdll_dll_NtRaiseException +
                      (int64_t)(short)((uVar5 ^ 0xbfef) << 8 | (uVar5 ^ 0xbfef) >> 8));
  lVar19 = *(int64_t *)
            ((int64_t)(short)((uVar5 + 0xdc28) * 0x400 | (uint16_t)(uVar5 + 0xdc28) >> 6) +
            0x7fffa47be944) * 0x10;
  if (pcVar15 == pcVar15 + lVar19 + 0x10) {
    lVar19 = 0;
  }
  else {
    pcVar20 = pcVar15 + lVar19;
    lVar19 = 0;
    while( true ) {
      auVar25[0] = -(*pcVar15 == '\0');
      auVar25[1] = -(pcVar15[1] == '\0');
      auVar25[2] = -(pcVar15[2] == '\0');
      auVar25[3] = -(pcVar15[3] == '\0');
      auVar25[4] = -(pcVar15[4] == '\0');
      auVar25[5] = -(pcVar15[5] == '\0');
      auVar25[6] = -(pcVar15[6] == '\0');
      auVar25[7] = -(pcVar15[7] == '\0');
      auVar25[8] = -(pcVar15[8] == '\0');
      auVar25[9] = -(pcVar15[9] == '\0');
      auVar25[10] = -(pcVar15[10] == '\0');
      auVar25[0xb] = -(pcVar15[0xb] == '\0');
      auVar25[0xc] = -(pcVar15[0xc] == '\0');
      auVar25[0xd] = -(pcVar15[0xd] == '\0');
      auVar25[0xe] = -(pcVar15[0xe] == '\0');
      auVar25[0xf] = -(pcVar15[0xf] == '\0');
      uVar12 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar25 >> 7,0) & 1) |
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
      uVar23 = -uVar12;
      if ((int64_t)(int)(param_3 + 0x70b68c17) <= (int64_t)(uint64_t)(0xd2b16834 - param_3)) {
        uVar23 = uVar12;
      }
      uVar23 = ~uVar23;
      if (((param_3 ^ 0x15fa61e8) << 8 | (param_3 ^ 0x15fa61e8) >> 0x18) * 0x5b469699 <
          param_3 + 0xdc3a5e3b) {
        uVar23 = 0x7fff;
      }
      for (uVar23 = uVar23 & ((uint32_t)(pcVar15 != pcVar20) << 0xe | 0x3fff); uVar23 != 0;
          uVar23 = uVar23 - 1 & uVar23) {
        uVar12 = 0;
        for (uVar4 = uVar23; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar21 = (uint64_t)uVar12;
        puVar16 = *(uint16_t **)(lVar22 + uVar21 * 8);
        uVar17 = SUB168(ZEXT216(*puVar16) * ZEXT816(0x9e3779b97f4a7c15),0);
        uVar10 = uVar17 + 0x40;
        if (((param_3 + 0x158def70) * 0x100000 | param_3 + 0x158def70 >> 0xc) <
            (param_3 ^ 0xda160eb7)) {
          uVar10 = SUB168(ZEXT216(*puVar16) * ZEXT816(0x9e3779b97f4a7c15),8);
        }
        uVar10 = uVar10 ^ uVar17;
        uVar17 = uVar10 >> (*pbVar14 & 0x3f);
        lVar18 = *(int64_t *)(pbVar14 + 0x10) + uVar17 * 0x10;
        pcVar1 = (char *)(*(int64_t *)(pbVar14 + 0x10) + uVar17 * 0x10);
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
        uVar12 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar26 >> 7,0) & 1) |
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
        if (uVar12 == 0) {
          lVar11 = 1;
          do {
            *(uint8_t *)(lVar18 + 0xf) = *(uint8_t *)(lVar18 + 0xf) | '\x01' << ((uint8_t)uVar10 & 7);
            uVar17 = uVar17 + lVar11 & *(uint64_t *)(pbVar14 + 8);
            lVar18 = *(int64_t *)(pbVar14 + 0x10) + uVar17 * 0x10;
            pcVar1 = (char *)(*(int64_t *)(pbVar14 + 0x10) + uVar17 * 0x10);
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
            uVar3 = (uint16_t)(SUB161(auVar27 >> 7,0) & 1) |
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
            uVar12 = (uint32_t)uVar3;
            lVar11 = lVar11 + 1;
          } while (uVar3 == 0);
          puVar16 = *(uint16_t **)(lVar22 + uVar21 * 8);
        }
        uVar4 = 0;
        for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = (uint64_t)uVar4;
        uVar2 = (&UNK_7fffa5838622)
                [(uVar10 & 0xff) * 4 + (int64_t)(short)((uVar5 ^ 0xa892) + 0xc97b)];
        *(uint16_t **)(uVar17 * 0x78 + *(int64_t *)(pbVar14 + 0x18) + uVar13 * 8) = puVar16;
        *(uint64_t *)(lVar22 + uVar21 * 8) = 0;
        *(uint8_t *)(lVar18 + uVar13) = uVar2;
        uVar10 = *(uint64_t *)(lVar22 + uVar21 * 8);
        if (uVar10 != 0) {
          (*(code *)((int64_t)
                     (int)(-0x64540001 << (bVar6 & 0x1f) | 0x9babffffU >> 0x20 - (bVar6 & 0x1f)) +
                    0x7fffa56944d9))(param_3,uVar13,uVar10 >> 0x3d ^ uVar10,0xc527da47);
        }
        lVar19 = lVar19 + 1;
      }
      if (pcVar15 == pcVar20) break;
      lVar22 = lVar22 + 0x78;
      pcVar15 = pcVar15 + 0x10;
    }
    lVar22 = *(int64_t *)((int64_t)(short)((uVar5 ^ 0x2ea6) + 0xb90b) + 0x7fffa47bde5e);
  }
  if (lVar19 == *(int64_t *)
                 (((int64_t)(int)((param_3 | 1) * 0x462eada0) ^ 0x2d8dae12U) + 0x7fffa47c877e)) {
LAB_7fffa55d3b66:
    if (lVar22 == 0) goto LAB_7fffa55d3ba9;
  }
  else {
    if (lVar22 == 0) goto LAB_7fffa55d3ba9;
    pcVar15 = *(char **)((int64_t)(int)((param_3 + 0x8678947c) * 0x3aa5af3d + -0x51864306) +
                        0x7fffa47cd085);
    lVar19 = *(int64_t *)
              ((int64_t)(int)((param_3 ^ 0x8a09c5f4) << 2 | (param_3 ^ 0x8a09c5f4) >> 0x1e) +
              0x7fffa47c8579) * 0x10;
    if (pcVar15 != pcVar15 + lVar19 + 0x10) {
      pcVar20 = pcVar15;
      do {
        auVar28[0] = -(*pcVar20 == '\0');
        auVar28[1] = -(pcVar20[1] == '\0');
        auVar28[2] = -(pcVar20[2] == '\0');
        auVar28[3] = -(pcVar20[3] == '\0');
        auVar28[4] = -(pcVar20[4] == '\0');
        auVar28[5] = -(pcVar20[5] == '\0');
        auVar28[6] = -(pcVar20[6] == '\0');
        auVar28[7] = -(pcVar20[7] == '\0');
        auVar28[8] = -(pcVar20[8] == '\0');
        auVar28[9] = -(pcVar20[9] == '\0');
        auVar28[10] = -(pcVar20[10] == '\0');
        auVar28[0xb] = -(pcVar20[0xb] == '\0');
        auVar28[0xc] = -(pcVar20[0xc] == '\0');
        auVar28[0xd] = -(pcVar20[0xd] == '\0');
        auVar28[0xe] = -(pcVar20[0xe] == '\0');
        auVar28[0xf] = -(pcVar20[0xf] == '\0');
        for (uVar23 = ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar28 >> 7,0) & 1) |
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
                                     (uint16_t)(auVar28[0xf] >> 7) << 0xf) &
                      ((uint32_t)(pcVar20 != pcVar15 + lVar19) << 0xe | 0x3fff); uVar23 != 0;
            uVar23 = uVar23 - 1 & uVar23) {
          uVar12 = 0;
          for (uVar4 = uVar23; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          uVar10 = *(uint64_t *)(lVar22 + (uint64_t)uVar12 * 8);
          if (uVar10 != 0) {
            (*(code *)((int64_t)(short)((uVar5 ^ 0xf34b) + 0x96) + 0x7fffa5689740))
                      (param_3,0x7fffa5689740,uVar10 >> 0x3d ^ uVar10);
          }
        }
        lVar22 = lVar22 + 0x78;
        bVar24 = pcVar20 != pcVar15 + lVar19;
        pcVar20 = pcVar20 + 0x10;
      } while (bVar24);
      lVar22 = *(int64_t *)((int64_t)(int)(0x52757b79 - (param_3 + 0xdc803e6b)) + 0x7fffa47cab23);
      goto LAB_7fffa55d3b66;
    }
  }
  (*(code *)((int64_t)(short)~((uVar5 + 0xd3ff) * 0x20 | (uint16_t)(uVar5 + 0xd3ff) >> 0xb) +
            0x7fffa568de4e))();
LAB_7fffa55d3ba9:
  lVar22 = (int64_t)(short)~(0xc5d6U >> (bVar6 & 0xf) | -0x3a2a << 0x10 - (bVar6 & 0xf));
  uVar7 = *(uint64_t *)pbVar14;
  uVar8 = *(uint64_t *)(pbVar14 + 8);
  uVar9 = *(uint64_t *)(pbVar14 + 0x18);
  *(uint64_t *)(lVar22 + 0x7fffa47c3404) = *(uint64_t *)(pbVar14 + 0x10);
  *(uint64_t *)(lVar22 + 0x7fffa47c340c) = uVar9;
  *(uint64_t *)(lVar22 + 0x7fffa47c33f4) = uVar7;
  *(uint64_t *)(lVar22 + 0x7fffa47c33fc) = uVar8;
  uVar10 = *(int64_t *)
            ((int64_t)(int)(((param_3 | 1) * -0x3521513a ^ 0x601eedd1) + 0x751fa703) +
            0x7fffa47ca116) * 0xf + 0xe;
  if (*(int64_t *)
       ((int64_t)(short)((0x4dee << (bVar6 & 0xf) | 0x4deeU >> 0x10 - (bVar6 & 0xf)) + 0x27f4) +
       0x7fffa47c0d50) == 0) {
    uVar10 = 0;
  }
  uVar17 = (uint64_t)((float)uVar10 * 0.875);
  uVar17 = (int64_t)((float)uVar10 * 0.875 - 9.223372e+18) & (int64_t)uVar17 >> 0x3f | uVar17;
  if (uVar10 < 0x1e) {
    uVar17 = uVar10;
  }
  *(uint64_t *)((int64_t)(int)((param_3 ^ 0xb7f7b175) * -0x71a809ed) + 0x7fffa47c5fbc) = uVar17;
  return;
}


// ============================================================================
// Function : FUN_7fffa55d3cf0  |  RVA: 0xe63cf0  |  Size: 1419 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55d3f14) */

void FUN_7fffa55d3cf0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa478510a = '\0';
  uRam00007fffa4785146 = 0;
  uRam00007fffa478514e = 0;
  uRam00007fffa4785136 = 0;
  uRam00007fffa478513e = 0;
  uRam00007fffa4785126 = 0;
  uRam00007fffa478512e = 0;
  uRam00007fffa4785116 = 0;
  uRam00007fffa478511e = 0;
  uRam00007fffa4785165 = 0;
  uVar1 = rdtsc();
  lVar2 = 5;
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x828b410a63ba19e;
  while( true ) {
    *(char *)(lVar2 + 0x7fffa47850f6) = (char)((uint64_t)(lVar3 * 0x3cccdc1d84) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47850f7) = (char)((uint64_t)(lVar3 * 0x7b43d63b78) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47850f5) = (char)((uint64_t)(lVar3 * 0x10a63ba19e) >> 0x20);
    if (lVar2 == 0x7d) break;
    *(char *)(lVar2 + 0x7fffa47850f8) = (char)((uint64_t)(lVar3 * 0x2d1e472c10) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47850fa) = (char)((uint64_t)(lVar3 * 0xc1bb84a708840) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47850f9) = (char)((uint64_t)(lVar3 * 0xdcfa5341e0) >> 0x20);
    lVar2 = lVar2 + 6;
    lVar3 = lVar3 * 0xc1bb84a708840;
  }
  bRam00007fffa478510a = bRam00007fffa478510a + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa478510a * 8 + 0x7fffa4785116) = 0xffffffffffffffff;
  bRam00007fffa4785186 = '\0';
  uRam00007fffa47851c2 = 0;
  uRam00007fffa47851ca = 0;
  uRam00007fffa47851b2 = 0;
  uRam00007fffa47851ba = 0;
  uRam00007fffa47851a2 = 0;
  uRam00007fffa47851aa = 0;
  uRam00007fffa4785192 = 0;
  uRam00007fffa478519a = 0;
  uRam00007fffa47851e1 = 0;
  uVar1 = rdtsc();
  lVar2 = 0x81;
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x828b410a63ba19e;
  while( true ) {
    *(char *)(lVar2 + 0x7fffa47850f5) = (char)((uint64_t)(lVar3 * 0x10a63ba19e) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47850f6) = (char)((uint64_t)(lVar3 * 0x13cccdc1d84) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47850f7) = (char)((uint64_t)(lVar3 * 0x7b43d63b78) >> 0x20);
    if (lVar2 == 0xf9) break;
    *(char *)(lVar2 + 0x7fffa47850fa) = (char)((uint64_t)(lVar3 * -0x5d53e447b58f77c0) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47850f9) = (char)((uint64_t)(lVar3 * 0xdcfa5341e0) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47850f8) = (char)((uint64_t)(lVar3 * 0x2d1e472c10) >> 0x20);
    lVar2 = lVar2 + 6;
    lVar3 = lVar3 * -0x5d53e447b58f77c0;
  }
  bRam00007fffa4785186 = bRam00007fffa4785186 + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa4785186 * 8 + 0x7fffa4785192) = 0xffffffffffffffff;
  return;
}


// ============================================================================
// Function : FUN_7fffa55d4280  |  RVA: 0xe64280  |  Size: 1372 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa55d4280(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4,
                     uint32_t param_5)

{
  int64_t *plVar1;
  char *pcVar2;
  uint8_t uVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t bVar9;
  uint32_t uVar10;
  uint8_t auVar11 [16];
  uint64_t in_RAX;
  uint64_t uVar12;
  uint64_t uVar13;
  uint8_t bVar14;
  uint32_t *puVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint8_t *puVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  uint32_t uVar24;
  float fVar25;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t *puStack_a0;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint8_t *puStack_68;
  int64_t lStack_60;
  
  bVar9 = (uint8_t)param_2 & 0x1f;
  uVar12 = in_RAX ^ 0x288e31e3;
  lVar21 = ~(param_3 << 0x2b | param_3 >> 0x15) + (uint64_t)((param_2 ^ 0xb36643fc) * 0x4a6d861b);
  uVar12 = (uVar12 << 0x32 | uVar12 >> 0xe) ^ (uVar12 << 7 | in_RAX >> 0x39) ^ uVar12;
  uVar12 = (uVar12 << 0xe | uVar12 >> 0x32) ^ (uVar12 << 0x24 | uVar12 >> 0x1c) ^ uVar12;
  uVar12 = (uVar12 << 0x1c | uVar12 >> 0x24) ^ (uVar12 << 8 | uVar12 >> 0x38) ^ uVar12;
  uVar12 = (uVar12 << 0x10 | uVar12 >> 0x30) ^ (uVar12 << 0x38 | uVar12 >> 8) ^ uVar12;
  uVar12 = (uVar12 << 0x30 | uVar12 >> 0x10) ^ (uVar12 << 0x20 | uVar12 >> 0x20) ^ uVar12;
  puVar23 = (uint64_t *)(uVar12 << 0x20 | uVar12 >> 0x20);
  uVar12 = *(uint64_t *)(lVar21 + 0x28);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar12;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar12;
  auVar11._8_8_ = 1;
  auVar11._0_8_ = 0x4325c53ef368eb0;
  fVar25 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar5 * auVar11,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar5 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar4 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar22 = (int64_t)(fVar25 - 9.223372e+18) & (int64_t)fVar25 >> 0x3f | (int64_t)fVar25;
  uVar12 = (int64_t)uVar22 >> 0x3f;
  lVar20 = 0;
  if ((0x70964550 << bVar9 | 0x70964550U >> 0x20 - bVar9) <= param_2 + 0x618de7c7) {
    uVar12 = 0;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar22;
  uVar16 = SUB168(auVar6 * ZEXT816(0x1111111111111112),8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar12;
  uVar13 = SUB168(auVar7 * ZEXT816(0x1111111111111112),0);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar22;
  uVar13 = uVar12 * 0x1111111111111111 + uVar13 +
           SUB168(auVar8 * ZEXT816(0x1111111111111111),8) +
           SUB168(auVar7 * ZEXT816(0x1111111111111112),8) + (uint64_t)CARRY8(uVar16,uVar13) +
           (uint64_t)CARRY8(SUB168(auVar8 * ZEXT816(0x1111111111111111),0),uVar16 + uVar13);
  uVar12 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> uVar12 == 0; uVar12 = uVar12 - 1) {
    }
  }
  uStack_78 = 0x3f;
  if (0x1d < uVar22) {
    uStack_78 = uVar12 ^ 0x3f;
  }
  lStack_60 = 0;
  bVar9 = (uint8_t)uStack_78;
  lVar19 = 1L << (-bVar9 & 0x3f);
  uStack_70 = lVar19 - 1;
  if (uVar22 == 0) {
    puVar18 = &UNK_7fffa56ee720;
  }
  else {
    bVar14 = 0x40 - bVar9;
    lVar17 = 0x78L << (bVar14 & 0x3f);
    uVar12 = (((0x88L << (bVar14 & 0x3f)) + 0xeU & 0xfffffffffffffff8) + 0x6195d80f) * 0x4000;
    (*(code *)((int64_t)(int)((param_2 ^ 0x72943c87) * -0x66d49725) + 0x7fffa52768cb))();
    lVar20 = (uVar12 << 0x2c | uVar12 >> 0x14) - ((uVar12 >> 0x14) << 0x36);
    puVar18 = (uint8_t *)
              ((uint64_t)(-((int)lVar20 + (int)lVar17 + -8) & 0xf) + lVar20 + lVar17 + -8);
    lStack_60 = lVar20;
    FUN_7fffa4ecf8e0(puVar18,0,0x10L << (bVar14 & 0x3f));
    puVar18[lVar19 * 0x10 + -2] = 1;
  }
  uVar12 = param_1 >> (bVar9 & 0x3f);
  puStack_a0 = puVar18 + uVar12 * 0x10;
  *puVar23 = 0;
  puVar23[2] = 0;
  pcVar2 = puVar18 + uVar12 * 0x10;
  auVar26[0] = -(*pcVar2 == '\0');
  auVar26[1] = -(pcVar2[1] == '\0');
  auVar26[2] = -(pcVar2[2] == '\0');
  auVar26[3] = -(pcVar2[3] == '\0');
  auVar26[4] = -(pcVar2[4] == '\0');
  auVar26[5] = -(pcVar2[5] == '\0');
  auVar26[6] = -(pcVar2[6] == '\0');
  auVar26[7] = -(pcVar2[7] == '\0');
  auVar26[8] = -(pcVar2[8] == '\0');
  auVar26[9] = -(pcVar2[9] == '\0');
  auVar26[10] = -(pcVar2[10] == '\0');
  auVar26[0xb] = -(pcVar2[0xb] == '\0');
  auVar26[0xc] = -(pcVar2[0xc] == '\0');
  auVar26[0xd] = -(pcVar2[0xd] == '\0');
  auVar26[0xe] = -(pcVar2[0xe] == '\0');
  auVar26[0xf] = -(pcVar2[0xf] == '\0');
  *(uint32_t *)(puVar23 + 1) = 0;
  uVar24 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar26 >> 7,0) & 1) |
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
  if (uVar24 == 0) {
    lVar20 = 1;
    while( true ) {
      puStack_a0[0xf] = puStack_a0[0xf] | '\x01' << ((uint8_t)param_1 & 7);
      uVar12 = uVar12 + lVar20 & uStack_70;
      puStack_a0 = puVar18 + uVar12 * 0x10;
      pcVar2 = puVar18 + uVar12 * 0x10;
      auVar27[0] = -(*pcVar2 == '\0');
      auVar27[1] = -(pcVar2[1] == '\0');
      auVar27[2] = -(pcVar2[2] == '\0');
      auVar27[3] = -(pcVar2[3] == '\0');
      auVar27[4] = -(pcVar2[4] == '\0');
      auVar27[5] = -(pcVar2[5] == '\0');
      auVar27[6] = -(pcVar2[6] == '\0');
      auVar27[7] = -(pcVar2[7] == '\0');
      auVar27[8] = -(pcVar2[8] == '\0');
      auVar27[9] = -(pcVar2[9] == '\0');
      auVar27[10] = -(pcVar2[10] == '\0');
      auVar27[0xb] = -(pcVar2[0xb] == '\0');
      auVar27[0xc] = -(pcVar2[0xc] == '\0');
      auVar27[0xd] = -(pcVar2[0xd] == '\0');
      auVar27[0xe] = -(pcVar2[0xe] == '\0');
      auVar27[0xf] = -(pcVar2[0xf] == '\0');
      uVar24 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar27 >> 7,0) & 1) |
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
                             (uint16_t)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe);
      if (uVar24 != 0) break;
      lVar20 = lVar20 + 1;
    }
    lVar20 = lStack_60;
  }
  else {
  }
  lVar20 = uVar12 * 0x78 + lVar20;
  uVar10 = 0;
  for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
    uVar10 = uVar10 + 1;
  }
  uVar22 = (uint64_t)uVar10;
  uVar12 = (uint64_t)param_2;
  bVar9 = (uint8_t)param_2 & 0x1f;
  puStack_68 = puVar18;
  (*(code *)((int64_t)(int)(0x21ffff0eU >> bVar9 | 0x21ffff0e << 0x20 - bVar9) + 0x7fffa5279c8f))()
  ;
  puVar15 = (uint32_t *)((uVar12 << 0x2c | uVar12 >> 0x14) - ((uVar12 >> 0x14) << 0x36));
  *(uint32_t **)(lVar20 + uVar22 * 8) = puVar15;
  *puVar15 = param_5;
  *(uint8_t (*) [16])(puVar15 + 5) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar15 + 1) = (uint8_t  [16])0x0;
  uVar3 = (&UNK_7fffa583e3dd)
          [(param_1 & 0xff) * 4 + (int64_t)(int)((param_2 ^ 0x4880e7e4) + 0x4459e3e7)];
  puStack_a0[uVar22] = uVar3;
  puVar23[2] = lVar20 + uVar22 * 8;
  *(uint32_t *)(puVar23 + 1) = uVar10;
  *puVar23 = puStack_a0;
  (*(code *)(&UNK_7fffa4e9d81a + (int)(param_2 + 0xcd9611e)))
            (uVar3,puVar23,param_2 + 0x3c57128d,puStack_a0,
             (((int64_t)&uStack_78 * 0x4000 | (uint64_t)&uStack_78 >> 0x32) ^
              ((int64_t)&uStack_78 * 0x40000000 | (uint64_t)&uStack_78 >> 0x22) ^
             (uint64_t)&uStack_78) * 5);
  plVar1 = (int64_t *)(lVar21 + 0x28);
  *plVar1 = *plVar1 + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa55d47e0  |  RVA: 0xe647e0  |  Size: 757 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55d47e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  short sVar1;
  int64_t lVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint16_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  
  uVar7 = CONCAT62((int6)((uint64_t)param_4 >> 0x10),0x3956);
  uVar5 = (~uVar7 & param_3) * -0xb0e441ac + (~param_3 & uVar7) * 0xe70a9292 +
          (~param_3 | uVar7) * -0xb0e441ac + (~uVar7 | param_3) * 0xe70a9292;
  bVar3 = (uint8_t)uVar5;
  uVar4 = (uint32_t)uVar5;
  *(uint32_t *)((int64_t)(int)((-0x1af9112 - uVar4) * 0x30dd69af + 0x142015d7) + 0x7fffa47c8426) =
       (uint32_t)(uint16_t)(0 << (bVar3 & 0xf) | 0U >> 0x10 - (bVar3 & 0xf));
  *(uint32_t *)((int64_t)(int)((0x13d9ad95 - uVar4) * 0x80 | 0x13d9ad95 - uVar4 >> 0x19) +
           0x7fffa47c724d) = ((int)uVar7 * (uVar4 + 1) ^ 0xd612) & 0xffff;
  *(uint8_t *)((int64_t)(int)((uVar4 ^ 0x53c6cb60) * -0x7ceabdef) + 0x7fffa47c8fc1) =
       ((-bVar3 - 0x13) * '\b' | (uint8_t)(-bVar3 - 0x13) >> 5) + 0x62;
  lVar2 = (int64_t)(short)((uint16_t)uVar5 ^ 0x6e1d);
  *(uint32_t *)((int64_t)(int)(uVar4 ^ 0x3626f7d0) + 0x7fffa47c572f) =
       (uVar4 ^ 0xf77b) - 0x5861 & 0xffff;
  *(uint64_t *)(lVar2 + 0x7fffa47bef05) =
       (uint64_t)((uVar4 ^ 0xc9d9af1a) << 0x1a | (uVar4 ^ 0xc9d9af1a) >> 6);
  uVar7 = rdtsc();
  lVar2 = (uVar7 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)lVar2 >> 0x20),(int)uVar7)) *
          0xb73e63cd36403f + 1;
  lVar8 = 3;
  while( true ) {
    lVar2 = ~(uVar5 ^ 0xb73e63fb1010da) * lVar2 + 1;
    *(char *)(lVar8 + (int64_t)(int)((uVar4 | 1) * -0x33289447 + -0x6e2dd29d) + 0x7fffa47caeeb) =
         (char)((uint64_t)lVar2 >> 0x20);
    if (lVar8 == 0x43) break;
    lVar9 = lVar2 * 0xb73e63cd36403f + 1;
    lVar2 = lVar9 * 0xb73e63cd36403f + 1;
    *(char *)(lVar8 + (int64_t)(short)(0x8ee6U >> (bVar3 & 0xf) | -0x711a << 0x10 - (bVar3 & 0xf))
                      + 0x7fffa47bf630) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar8 + (int64_t)
                      (int)(0xb7fffdefU >> (bVar3 & 0x1f) | -0x48000211 << 0x20 - (bVar3 & 0x1f)) +
                      0x7fffa47c33e5) = (char)((uint64_t)lVar9 >> 0x20);
    sVar1 = (short)(uVar4 + 1);
    lVar2 = lVar2 * 0xb73e63cd36403f + 1;
    *(char *)(lVar8 + (int64_t)(short)(sVar1 * -0x49c0 | (uint16_t)(sVar1 * 0x3ed9) >> 10) +
                      0x7fffa47bb6d7) = (char)((uint64_t)lVar2 >> 0x20);
    lVar8 = lVar8 + 4;
  }
  uVar6 = (uint16_t)uVar5 ^ 0xc69b;
  uVar7 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(short)(uVar6 << 1 | (uint16_t)((short)uVar6 < 0)) +
                          0x7fffa47bdcd9) * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)
   ((int64_t)(int)((uVar4 | 1) * -0x46bb9002 + 0x50eab55b) + 0x7fffa47c88c4 + (uVar7 >> 0x20) * 8)
       = 0;
  *(char *)((int64_t)(int)(uVar4 + 0x36257254) + 0x7fffa47c8e6d) = (char)(uVar7 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55d4ae0  |  RVA: 0xe64ae0  |  Size: 1399 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55d4ae0(uint64_t param_1,uint64_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint16_t uVar3;
  short sVar4;
  uint64_t uVar5;
  uint8_t bVar6;
  uint32_t uVar7;
  uint8_t bVar8;
  uint64_t uVar9;
  uint16_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t unaff_R14;
  int64_t lVar15;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  
  auVar16._8_8_ = 0;
  auVar16._0_8_ = unaff_R14;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2;
  lVar15 = (unaff_R14 ^ 0xffffffffffffffff ^ param_2) * 0x14a9718c +
           (unaff_R14 ^ 0xffffffffffffffff | param_2) * -0x98c7f785 +
           (unaff_R14 ^ param_2) * -0x841e85f9 +
           ((SUB168(~auVar16 & auVar17,0) >> 0x20) * 0x98c7f785 << 0x20) +
           (uint64_t)SUB164(~auVar16 & auVar17,0) * 0x98c7f785;
  bVar6 = (uint8_t)lVar15;
  uVar7 = (uint32_t)lVar15;
  uVar11 = uVar7 | 1;
  uVar3 = (uint16_t)lVar15;
  sVar4 = (short)uVar11;
  lVar13 = (int64_t)(int)(((0x6ba5947 - uVar7) * 0x400 | 0x6ba5947 - uVar7 >> 0x16) ^ 0x90b21945);
  *(uint8_t *)((int64_t)(short)(sVar4 * -0x6f0a + -0x81a) + 0x7fffa47beeb8) =
       0U >> (bVar6 & 7) | '\0' << 8 - (bVar6 & 7);
  *(uint8_t (*) [16])(lVar13 + 0x7fffa47c90c2) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar13 + 0x7fffa47c90b2) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar13 + 0x7fffa47c90a2) = (uint8_t  [16])0x0;
  *(uint64_t *)
   ((int64_t)(short)((uVar3 + 0x1f72) * -0x7e80 | (uint16_t)((uVar3 + 0x1f72) * 0x103) >> 9) +
   0x7fffa47c1379) = (uint64_t)(uint16_t)(0 << (bVar6 & 0xf) | 0U >> 0x10 - (bVar6 & 0xf));
  uVar2 = rdtsc();
  uVar9 = (CONCAT44(0x7fff,(int)((uint64_t)uVar2 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar2)) *
          (lVar15 + 0x6a93b3298c63) + 0xb;
  uVar5 = 0;
  while( true ) {
    lVar13 = uVar9 * 0xa886a943748125c + 0xb;
    *(char *)(uVar5 + ((int64_t)(short)(sVar4 * -0x7206) ^ 0x2bd8U) + 0x7fffa47be1f1) =
         (char)((uint64_t)lVar13 >> 0x20);
    if (uVar5 == (uVar7 ^ 0x841e85b5)) break;
    uVar14 = uVar5 - 3;
    if ((0xea11b659U >> (bVar6 & 0x1f) | -0x15ee49a7 << 0x20 - (bVar6 & 0x1f)) <=
        (0x53d61e7a - uVar7 ^ 0xe2783ba6)) {
      uVar14 = uVar5 | 3;
    }
    lVar15 = lVar13 * 0x5839768ddd111110 + 0x73dc945e6018c9ff;
    uVar9 = ((0x561510d52812e666U >> (bVar6 & 0x3f) | 0x561510d52812e666 << 0x40 - (bVar6 & 0x3f)) ^
            0x3e3b2177) * lVar15;
    *(char *)(uVar14 + (int64_t)
                       (short)((0xd62 << (bVar6 & 0xf) | 0xd62U >> 0x10 - (bVar6 & 0xf)) + 0x355f) +
                       0x7fffa47bba6a) = (char)(uVar9 >> 0x20);
    uVar9 = uVar9 | 0xb;
    bVar8 = (uint8_t)(lVar13 * 0x943748125c) ^ 0x20;
    *(char *)(uVar5 + (int64_t)(int)(uVar7 + 0x7be0dc68) + 0x7fffa47c5184) =
         (char)((uint64_t)lVar15 >> 0x20);
    if ((int64_t)(int)((0x540e14c0 - uVar7) * 0x20 | 0x540e14c0 - uVar7 >> 0x1b) <
        (int64_t)(uint64_t)(0x47425fe3 - uVar7)) {
      bVar8 = (uint8_t)((uint64_t)(lVar13 * 0x943748125c) >> 0x20);
    }
    *(uint8_t *)(uVar5 + ((int64_t)(short)(sVar4 * 0x2800 | (uint16_t)(sVar4 * -0x9bb) >> 5) ^ 0x50bfU)
                      + 0x7fffa47bf835) = bVar8;
    uVar5 = uVar5 + 4;
  }
  bVar8 = *(uint8_t *)((int64_t)(short)(sVar4 * 0x7a8 + -0x2452) + 0x7fffa47c1dce);
  lVar13 = (int64_t)(int)((0xe11e851e - uVar7) * 0x100 | 0xe11e851e - uVar7 >> 0x18);
  uVar10 = sVar4 * -0x3b3e ^ 0x1dd7;
  uVar12 = (int)(char)bVar8;
  if ((0xf6900eedU >> (bVar6 & 0x1f) | -0x96ff113 << 0x20 - (bVar6 & 0x1f)) <=
      (uVar11 * -0x653acf3c | (uint32_t)((int)(uVar11 * -0x329d679e) < 0))) {
    uVar12 = (uint32_t)bVar8;
  }
  uVar5 = (uint64_t)(uVar12 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  uVar9 = uVar5 >> 0x20;
  bVar8 = *(uint8_t *)((int64_t)(short)(0x5dba - uVar3) + 0x7fffa47bdc65);
  *(uint8_t *)(lVar13 + 0x7fffa47c8e97 + uVar9 * 8) =
       ~*(uint8_t *)((int64_t)(short)(uVar10 << 7 | uVar10 >> 9) + 0x7fffa47c018d);
  bVar1 = *(uint8_t *)((int64_t)(short)(uVar3 ^ 0x646) + 0x7fffa47c306c);
  *(uint8_t *)(lVar13 + 0x7fffa47c8e96 + uVar9 * 8) =
       ~*(uint8_t *)((int64_t)(int)(0xffffe62U >> (bVar6 & 0x1f) | 0xffffe62 << 0x20 - (bVar6 & 0x1f))
                 + 0x7fffa47c8320);
  *(uint8_t *)(lVar13 + 0x7fffa47c8e99 + uVar9 * 8) =
       ~*(uint8_t *)((int64_t)(short)((uVar3 + 0x3dd5) * -0x59eb) + 0x7fffa47c1044);
  *(uint8_t *)(lVar13 + 0x7fffa47c8e9c + uVar9 * 8) =
       ~*(uint8_t *)((int64_t)(int)(-0x7be271da - uVar7) + 0x7fffa47cac00);
  *(uint8_t *)(lVar13 + 0x7fffa47c8e95 + uVar9 * 8) = ~bVar8;
  *(uint8_t *)(lVar13 + 0x7fffa47c8e98 + uVar9 * 8) =
       ~*(uint8_t *)((int64_t)(int)(uVar7 + 0x7be0d9f7) + 0x7fffa47c5439);
  *(uint8_t *)(lVar13 + 0x7fffa47c8e9b + uVar9 * 8) =
       ~*(uint8_t *)((int64_t)(int)(uVar7 + 0x7be0db4f) + 0x7fffa47c52e4);
  *(uint8_t *)(lVar13 + 0x7fffa47c8e9a + uVar9 * 8) = ~bVar1;
  *(char *)((int64_t)(short)(0x1d7fU >> (bVar6 & 0xf) | 0x1d7f << 0x10 - (bVar6 & 0xf)) +
           0x7fffa47bf456) = (char)(uVar5 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55d5060  |  RVA: 0xe65060  |  Size: 82 bytes
// Callers  : none
// Callees  : none
// ============================================================================
char * FUN_7fffa55d5060(int64_t param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


// ============================================================================
// Function : FUN_7fffa55d50b4  |  RVA: 0xe650b4  |  Size: 91 bytes
// Callers  : FUN_7fffa4f4120c@0x7d120c, FUN_7fffa5181628@0xa11628
// Callees  : FUN_7fffa4ecd2c4@0x75d2c4, FUN_7fffa5608650@0xe98650
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa55d50b4(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar2 = 0;
  if (_DAT_7fffa4780244 == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_7fffa5608650();
  }
  if (lVar1 != -1) {
    if ((lVar1 == 0) && (lVar1 = FUN_7fffa4ecd2c4(), lVar1 == 0)) {
      return 0;
    }
    lVar2 = param_2 * 0x3c8 + lVar1;
  }
  return lVar2;
}


// ============================================================================
// Function : FUN_7fffa55d5110  |  RVA: 0xe65110  |  Size: 1200 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa55d5110(uint8_t param_1,uint64_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint8_t bVar2;
  int64_t lVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  char cVar6;
  uint64_t in_R10;
  uint64_t uVar7;
  uint8_t *pbVar8;
  uint64_t uVar9;
  uint8_t bVar10;
  
  lVar3 = ((in_R10 ^ 0x2146a94) << 0x22 | in_R10 >> 0x1e) * 0x585bc29cfe15a555;
  param_2 = ~param_2;
  uVar7 = param_2 >> 0xf ^ param_2;
  bVar2 = (uint8_t)param_3;
  uVar9 = uVar7 >> 0x1e;
  if ((-0x7fffffffb1400000 << (bVar2 & 0x3f) | 0x800000004ec00000U >> 0x40 - (bVar2 & 0x3f)) <=
      (uint64_t)(param_3 + 0xea3dccf1 ^ 0xd297b94f)) {
    uVar9 = (uint64_t)((uint32_t)uVar7 & 0x1e);
  }
  pbVar8 = (uint8_t *)(uVar9 ^ param_2 >> 0x3c ^ uVar7);
  bVar5 = *pbVar8;
  *(uint8_t *)(lVar3 + 0x12) = *(uint8_t *)(lVar3 + 0x12) & 0xf8 | 3;
  cVar6 = ((bVar5 & 0xc0) != 0x40) * '\x04' + '\x04';
  if ((pbVar8[6] & 0x10) == 0) {
    if ((pbVar8[0x1e] & 199) == 5) {
      bVar5 = *pbVar8 & 3;
      pbVar8[10] = pbVar8[10] & 0xef | (bVar5 == 2) << 4;
      bVar10 = *(uint8_t *)(lVar3 + 8) & 0xbf | (bVar5 == 2) << 6;
      *(uint8_t *)(lVar3 + 8) = bVar10;
      if ((bVar5 == 2) && ((pbVar8[0x1a3] & 2) != 0)) {
        return 0;
      }
    }
    else {
      bVar10 = *(uint8_t *)(lVar3 + 8) | 2;
      *(uint8_t *)(lVar3 + 8) = bVar10;
      *(char *)(lVar3 + 10) = cVar6;
      bVar4 = (pbVar8[0x18] & 8 | pbVar8[0x1e] & 7) * '\b';
      bVar5 = bVar4 + 3;
      *(uint8_t *)(lVar3 + 0x12) = bVar5;
      if ((pbVar8[0x18] & 0x40) != 0) {
        if ((pbVar8[4] & 0x10) == 0) {
          return 0;
        }
        bVar5 = bVar4 | 0x83;
        *(uint8_t *)(lVar3 + 0x12) = bVar5;
      }
      bVar4 = bVar5 - 0x10;
      if ((0xfb2ea1bU >> (bVar2 & 0x1f) | 0xfb2ea1b << 0x20 - (bVar2 & 0x1f)) == 0x86c3ecba) {
        bVar4 = bVar5 & 0xf0;
      }
      if ((uint8_t)(('\x1f' - bVar4) * '_') == -0x5f) {
        *(uint8_t *)(lVar3 + 0x12) = bVar5 & 0x2a;
      }
    }
  }
  else {
    if ((0x3f < pbVar8[0x1e]) || ((pbVar8[0x1f] & 7) != 5)) {
      *(char *)(lVar3 + 10) = cVar6;
      *(uint8_t *)(lVar3 + 8) = *(uint8_t *)(lVar3 + 8) | 2;
      bVar5 = (pbVar8[0x18] & 8) >> 3;
      if ((0xa716debd - param_3 ^ 0xce5dfbf4) <= (param_3 ^ 0x643572b2)) {
        bVar5 = (pbVar8[0x1f] & 7 | pbVar8[0x18] & 8) << 3;
      }
      bVar10 = bVar5 | 3;
      *(uint8_t *)(lVar3 + 0x12) = bVar10;
      if ((pbVar8[0x18] & 0x40) != 0) {
        if ((pbVar8[4] & 0x10) == 0) {
          return 0;
        }
        bVar10 = (0x8fU >> (bVar2 & 7) | -0x71 << 8 - (bVar2 & 7)) * -0x1f + bVar5;
        *(uint8_t *)(lVar3 + 0x12) = bVar10;
      }
      if (bVar10 >> 4 == 2) {
        *(uint8_t *)(lVar3 + 0x12) = bVar10 & 0x2a;
      }
    }
    if ((pbVar8[0x1a0] & 0x80) == 0) {
      bVar5 = pbVar8[0x1f] >> 3 & 7 | pbVar8[0x18] * '\x02' & 8;
      *(uint8_t *)(lVar3 + 0x13) = bVar5;
      if ((pbVar8[0x18] & 0x20) == 0) {
        bVar10 = *(uint8_t *)(lVar3 + 8);
        if (bVar5 == 4) goto LAB_7fffa55d5482;
      }
      else {
        if ((pbVar8[4] & 0x10) == 0) {
          return 0;
        }
        bVar10 = *(uint8_t *)(lVar3 + 8);
        *(uint8_t *)(lVar3 + 0x13) = bVar5 | 0x10;
      }
      bVar10 = bVar10 | 4;
      *(uint8_t *)(lVar3 + 8) = bVar10;
      *(char *)(lVar3 + 0xb) = cVar6;
      *(uint8_t *)(lVar3 + 0x14) = '\x01' << (pbVar8[0x1f] >> 6) | *(uint8_t *)(lVar3 + 0x14) & 0xf0;
    }
    else {
      bVar10 = *(uint8_t *)(lVar3 + 8) | 4;
      *(char *)(lVar3 + 0xb) = cVar6;
      *(uint8_t *)(lVar3 + 8) = bVar10;
      bVar5 = pbVar8[0x1f];
      uVar1 = *(uint32_t *)(pbVar8 + 0x18);
      *(uint8_t *)(lVar3 + 0xb) = param_1;
      *(uint8_t *)(lVar3 + 0x13) =
           ((uint8_t)((uint32_t)uVar1 >> 0x10) & 0x10) + ((uint8_t)uVar1 & 4) * '\x02' | bVar5 >> 3 & 7;
      *(uint8_t *)(lVar3 + 0x14) = '\x01' << (pbVar8[0x1f] >> 6) | *(uint8_t *)(lVar3 + 0x14) & 0xf0;
    }
  }
LAB_7fffa55d5482:
  *(uint8_t *)(lVar3 + 8) = bVar10 & 0xf7 | pbVar8[6] >> 2 & 8;
  bVar5 = pbVar8[0xe] + 0xf;
  if ((int)((0x10793426 << (bVar2 & 0x1f) | 0x10793426U >> 0x20 - (bVar2 & 0x1f)) * -0x6f73f291) <
      0x5c9ba01) {
    bVar5 = pbVar8[0xe] & 0xf;
  }
  *(uint8_t *)(lVar3 + 0xc) = bVar5;
  if ((pbVar8[6] & 0x20) == 0) {
    uVar9 = 0;
  }
  else {
    bVar5 = pbVar8[0xe] << 3 & 0x78;
    if ((int64_t)
        (0x2018c0000080000U >> (bVar2 & 0x3f) | 0x2018c0000080000 << 0x40 - (bVar2 & 0x3f)) <
        (int64_t)(int)((param_3 + 0xf27e0436) * -0x24489de1)) {
      bVar5 = pbVar8[0xe] << 3 ^ 0x78;
    }
    uVar9 = 0xffffffffffffffff >> (-bVar5 & 0x3f);
    uVar9 = (uint64_t)((uint32_t)uVar9 & *(uint32_t *)(pbVar8 + 0x28)) |
            (uint64_t)((*(uint32_t *)(pbVar8 + 0x28) >> ((uint8_t)(bVar5 - 1) & 0x1f) & 1) != 0) * ~uVar9;
  }
  *(uint64_t *)(lVar3 + 0x18) = uVar9;
  return 0;
}


// ============================================================================
// Function : FUN_7fffa55d55c0  |  RVA: 0xe655c0  |  Size: 135 bytes
// Callers  : FUN_7fffa4eca6f8@0x75a6f8
// Callees  : FUN_7fffa5147134@0x9d7134, FUN_7fffa5596980@0xe26980
// ============================================================================
void FUN_7fffa55d55c0(uint64_t param_1,uint32_t param_2,uint64_t param_3,int param_4,
                     uint64_t param_5,uint32_t param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (0 < param_4) {
    iVar1 = FUN_7fffa5596980(param_3,(int64_t)param_4);
    iVar2 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  FUN_7fffa5147134(param_1,param_2,param_3,iVar2,param_5,param_6,0,0,0);
  return;
}


// ============================================================================
// Function : FUN_7fffa55d5760  |  RVA: 0xe65760  |  Size: 2911 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55d5760(void) {
    /* +0xe65760 */ __asm { PUSH RBP }
    /* +0xe65761 */ __asm { PUSH RDI }
    /* +0xe65762 */ __asm { PUSH R15 }
    /* +0xe65764 */ __asm { PUSH R13 }
    /* +0xe65766 */ __asm { PUSH RBX }
    /* +0xe65767 */ __asm { SUB RSP,0x80 }
    /* +0xe6576e */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xe65776 */ __asm { MOV qword ptr [RBP + -0x8],-0x2 }
    /* +0xe6577e */ __asm { MOV R10,0x732316b445c094b }
    /* +0xe65788 */ __asm { IMUL R10,RAX }
    /* +0xe6578c */ __asm { MOV RCX,R10 }
    /* +0xe6578f */ __asm { ROL RCX,0x1f }
    /* +0xe65793 */ __asm { MOV R9,R10 }
    /* +0xe65796 */ __asm { ROL R9,0x2 }
    /* +0xe6579a */ __asm { XOR R9,RCX }
    /* +0xe6579d */ __asm { XOR R9,R10 }
    /* +0xe657a0 */ __asm { MOV R10,R9 }
    /* +0xe657a3 */ __asm { ROL R10,0x4 }
    /* +0xe657a7 */ __asm { MOV RCX,R9 }
    /* +0xe657aa */ __asm { ROL RCX,0x3e }
    /* +0xe657ae */ __asm { XOR RCX,R10 }
    /* +0xe657b1 */ __asm { XOR RCX,R9 }
    /* +0xe657b4 */ __asm { MOV R10,RCX }
    /* +0xe657b7 */ __asm { ROL R10,0x3c }
    /* +0xe657bb */ __asm { MOVQ XMM0,RCX }
    /* +0xe657c0 */ __asm { ROL RCX,0x8 }
    /* +0xe657c4 */ __asm { XOR RCX,R10 }
    /* +0xe657c7 */ __asm { MOVQ XMM3,RCX }
    /* +0xe657cc */ __asm { PXOR XMM3,XMM0 }
    /* +0xe657d0 */ __asm { MOVQ R10,XMM3 }
    /* +0xe657d5 */ __asm { MOV RCX,R10 }
    /* +0xe657d8 */ __asm { ROL RCX,0x10 }
    /* +0xe657dc */ __asm { MOV R9,R10 }
    /* +0xe657df */ __asm { ROL R9,0x38 }
    /* +0xe657e3 */ __asm { XOR R9,RCX }
    /* +0xe657e6 */ __asm { XOR R9,R10 }
    /* +0xe657e9 */ __asm { MOV R10,R9 }
    /* +0xe657ec */ __asm { ROL R10,0x20 }
    /* +0xe657f0 */ __asm { MOV RDI,R9 }
    /* +0xe657f3 */ __asm { ROL RDI,0x30 }
    /* +0xe657f7 */ __asm { XOR RDI,R10 }
    /* +0xe657fa */ __asm { XOR RDI,R9 }
    /* +0xe657fd */ __asm { ROL RDI,0x20 }
    /* +0xe65801 */ __asm { MOV qword ptr [RBP + -0x38],0x0 }
    /* +0xe65809 */ __asm { RDTSC }
    /* +0xe6580b */ __asm { SHL RDX,0x20 }
    /* +0xe6580f */ __asm { OR RDX,RAX }
    /* +0xe65812 */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0xe6581c */ __asm { IMUL R10,RDX }
    /* +0xe65820 */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xe6582a */ __asm { ADD RAX,R10 }
    /* +0xe6582d */ __asm { MOV RCX,RAX }
    /* +0xe65830 */ __asm { SHR RCX,0x3b }
    /* +0xe65834 */ __asm { MOVQ XMM0,RAX }
    /* +0xe65839 */ __asm { PSRLQ XMM0,0x1b }
    /* +0xe6583e */ __asm { SHR RAX,0x2d }
    /* +0xe65842 */ __asm { MOVD XMM3,EAX }
    /* +0xe65846 */ __asm { PXOR XMM3,XMM0 }
    /* +0xe6584a */ __asm { MOVD EAX,XMM3 }
    /* +0xe6584e */ __asm { ROR EAX,CL }
    /* +0xe65850 */ __asm { MOV R15,R11 }
    /* +0xe65853 */ __asm { AND EAX,0x3 }
    /* +0xe65856 */ __asm { CMP EAX,0x2 }
    /* +0xe65859 */ __asm { JNC 0x7fffa55d5ae6 }
    /* +0xe6585f */ __asm { MOV R10W,0x84f5 }
    /* +0xe65864 */ __asm { ADD R10D,0xfffffb0a }
    /* +0xe6586b */ __asm { ROL R10W,0x1 }
    /* +0xe6586f */ __asm { NOT R10D }
    /* +0xe65872 */ __asm { MOVZX R10D,R10W }
    /* +0xe65876 */ __asm { CMP EAX,R10D }
    /* +0xe65879 */ __asm { JNZ 0x7fffa55d5d2f }
    /* +0xe6587f */ __asm { RDTSC }
    /* +0xe65881 */ __asm { SHL RDX,0x20 }
    /* +0xe65885 */ __asm { OR RDX,RAX }
    /* +0xe65888 */ __asm { MOV R11,0x5851f42d4c957f2d }
    /* +0xe65892 */ __asm { IMUL R11,RDX }
    /* +0xe65896 */ __asm { MOV R9,0x1be8bad9b8077afa }
    /* +0xe658a0 */ __asm { ADD R9,R11 }
    /* +0xe658a3 */ __asm { MOV RAX,R9 }
    /* +0xe658a6 */ __asm { SHR RAX,0x1b }
    /* +0xe658aa */ __asm { MOV RCX,R9 }
    /* +0xe658ad */ __asm { SHR RCX,0x3b }
    /* +0xe658b1 */ __asm { SHR R9,0x2d }
    /* +0xe658b5 */ __asm { XOR EAX,R9D }
    /* +0xe658b8 */ __asm { ROR EAX,CL }
    /* +0xe658ba */ __asm { MOV dword ptr [RBP + -0x20],0x95281140 }
    /* +0xe658c1 */ __asm { MOV R10D,dword ptr [RBP + -0x20] }
    /* +0xe658c5 */ __asm { CMP R10D,0x8d8d18a8 }
    /* +0xe658cc */ __asm { NOP }
    /* +0xe658cd */ __asm { NOP }
    /* +0xe658ce */ __asm { NOP }
    /* +0xe658cf */ __asm { NOP }
    /* +0xe658d0 */ __asm { NOP }
    /* +0xe658d1 */ __asm { NOP }
    /* +0xe658d2 */ __asm { NOP }
    /* +0xe658d3 */ __asm { NOP }
    /* +0xe658d4 */ __asm { NOP }
    /* +0xe658d5 */ __asm { NOP }
    /* +0xe658d6 */ __asm { NOP }
    /* +0xe658d7 */ __asm { NOP }
    /* +0xe658d8 */ __asm { NOP }
    /* +0xe658d9 */ __asm { NOP }
    /* +0xe658da */ __asm { NOP }
    /* +0xe658db */ __asm { PUSHFQ }
    /* +0xe658dc */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe658e4 */ __asm { POPFQ }
    /* +0xe658e5 */ __asm { CMP EAX,0x4321f5 }
    /* +0xe658ea */ __asm { JA 0x7fffa55d5a77 }
    /* +0xe658f0 */ __asm { MOV RDX,0x0 }
    /* +0xe658f7 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xe658fe */ __asm { MOV EAX,0xbdff0c2a }
    /* +0xe65903 */ __asm { MOV ECX,R15D }
    /* +0xe65906 */ __asm { SUB ECX,EAX }
    /* +0xe65908 */ __asm { ADD ECX,0x98a4d47f }
    /* +0xe6590e */ __asm { MOV R11,0x1772c514085391eb }
    /* +0xe65918 */ __asm { IMUL R11,qword ptr [RCX] }
    /* +0xe6591c */ __asm { ADD R11,0x7a36036f }
    /* +0xe65923 */ __asm { MOV R10,-0x633a940114ec8ed2 }
    /* +0xe6592d */ __asm { CMP R11,R10 }
    /* +0xe65930 */ __asm { NOP }
    /* +0xe65931 */ __asm { NOP }
    /* +0xe65932 */ __asm { NOP }
    /* +0xe65933 */ __asm { NOP }
    /* +0xe65934 */ __asm { NOP }
    /* +0xe65935 */ __asm { LEA RDX,[0x7fffa47c31ab] }
    /* +0xe6593c */ __asm { MOV R11,-0x3093de87899306d6 }
    /* +0xe65946 */ __asm { CMP RDX,R11 }
    /* +0xe65949 */ __asm { NOP }
    /* +0xe6594a */ __asm { NOP }
    /* +0xe6594b */ __asm { NOP }
    /* +0xe6594c */ __asm { NOP }
    /* +0xe6594d */ __asm { NOP }
    /* +0xe6594e */ __asm { MOVZX R10D,uint8_t ptr [RDX + -0x6a62] }
    /* +0xe65956 */ __asm { MOVZX R11D,uint8_t ptr [RDX + R10*0x4 + -0x6a5c] }
    /* +0xe6595f */ __asm { NOT R11B }
    /* +0xe65962 */ __asm { ROL R11B,0x5 }
    /* +0xe65966 */ __asm { MOV uint8_t ptr [RBP + -0x20],R11B }
    /* +0xe6596a */ __asm { MOVZX R11D,uint8_t ptr [RDX + R10*0x4 + -0x6a5b] }
    /* +0xe65973 */ __asm { NOT R11B }
    /* +0xe65976 */ __asm { ROL R11B,0x5 }
    /* +0xe6597a */ __asm { MOV uint8_t ptr [RBP + -0x1f],R11B }
    /* +0xe6597e */ __asm { MOVZX R11D,uint8_t ptr [RDX + R10*0x4 + -0x6a5a] }
    /* +0xe65987 */ __asm { NOT R11B }
    /* +0xe6598a */ __asm { ROL R11B,0x5 }
    /* +0xe6598e */ __asm { MOV uint8_t ptr [RBP + -0x1e],R11B }
    /* +0xe65992 */ __asm { MOVZX EDX,uint8_t ptr [RDX + R10*0x4 + -0x6a59] }
    /* +0xe6599b */ __asm { NOT DL }
    /* +0xe6599d */ __asm { ROL DL,0x5 }
    /* +0xe659a0 */ __asm { MOV uint8_t ptr [RBP + -0x1d],DL }
    /* +0xe659a3 */ __asm { MOV EAX,0x9102c3cc }
    /* +0xe659a8 */ __asm { XOR EAX,dword ptr [RBP + -0x20] }
    /* +0xe659ab */ __asm { BT EAX,EAX }
    /* +0xe659ae */ __asm { JNC 0x7fffa55d5a77 }
    /* +0xe659b4 */ __asm { PXOR XMM0,XMM0 }
    /* +0xe659b8 */ __asm { MOVDQA xmmword ptr [RBP + -0x20],XMM0 }
    /* +0xe659bd */ __asm { MOV dword ptr [RBP + -0x28],0xdf17fdb4 }
    /* +0xe659c4 */ __asm { MOV EAX,dword ptr [RBP + -0x28] }
    /* +0xe659c7 */ __asm { MOV dword ptr [RBP + -0x20],0x0 }
    /* +0xe659ce */ __asm { MOV dword ptr [RBP + -0x28],0xd2c3f33a }
    /* +0xe659d5 */ __asm { MOV EAX,dword ptr [RBP + -0x28] }
    /* +0xe659d8 */ __asm { MOV dword ptr [RBP + -0x28],0xe819e832 }
    /* +0xe659df */ __asm { MOV EAX,dword ptr [RBP + -0x28] }
    /* +0xe659e2 */ __asm { MOV AX,0xc0ae }
    /* +0xe659e6 */ __asm { MOV R10W,0x9f23 }
    /* +0xe659eb */ __asm { ADD R10D,R15D }
    /* +0xe659ee */ __asm { LEA RDX,[0x7fffa4780c3f] }
    /* +0xe659f5 */ __asm { LEA R11,[RDX + 0x4125] }
    /* +0xe659fc */ __asm { IMUL R10D,R10D,-0x7869 }
    /* +0xe65a03 */ __asm { ADD R10D,0x2a7e }
    /* +0xe65a0a */ __asm { MOVZX R9D,R10W }
    /* +0xe65a0e */ __asm { MOV R10W,0x7ce1 }
    /* +0xe65a13 */ __asm { MOV R8D,0x7ce03184 }
    /* +0xe65a19 */ __asm { XOR R8D,R15D }
    /* +0xe65a1c */ __asm { ADD R8D,0x44e1633b }
    /* +0xe65a23 */ __asm { NOT R10D }
    /* +0xe65a26 */ __asm { ADD R10D,R15D }
    /* +0xe65a29 */ __asm { ADD EAX,0x599e }
    /* +0xe65a2e */ __asm { MOV ECX,R15D }
    /* +0xe65a31 */ __asm { ROR AX,CL }
    /* +0xe65a34 */ __asm { XOR EAX,0xb67c }
    /* +0xe65a39 */ __asm { MOV CX,0x21cb }
    /* +0xe65a3d */ __asm { SUB ECX,R15D }
    /* +0xe65a40 */ __asm { ADD ECX,0x1878 }
    /* +0xe65a46 */ __asm { IMUL R10D,R10D,0xf4d }
    /* +0xe65a4d */ __asm { MOVZX R13D,R10W }
    /* +0xe65a51 */ __asm { XOR R13,RDX }
    /* +0xe65a54 */ __asm { CMP R8,0x1e996eda }
    /* +0xe65a5b */ __asm { MOVSX R10,AX }
    /* +0xe65a5f */ __asm { CMOVZ R13,R11 }
    /* +0xe65a63 */ __asm { MOVZX EDX,CX }
    /* +0xe65a66 */ __asm { MOV qword ptr [RBP + -0x28],RAX }
    /* +0xe65a6a */ __asm { MOV EAX,dword ptr [R13 + 0x128] }
    /* +0xe65a71 */ __asm { LEA R8,[RBP + -0x20] }
    /* +0xe65a75 */ __asm { SYSCALL }
    /* +0xe65a77 */ __asm { LEA RDX,[0x7fffa477fe3e] }
    /* +0xe65a7e */ __asm { MOV R10,0x71310f19ceb3d9be }
    /* +0xe65a88 */ __asm { LEA R11,[R15 + R10*0x1] }
    /* +0xe65a8c */ __asm { ADD R11,-0x6e0fd4f6 }
    /* +0xe65a93 */ __asm { XOR R11,RDX }
    /* +0xe65a96 */ __asm { MOV R10D,0xce220f32 }
    /* +0xe65a9c */ __asm { CMP R11,R10 }
    /* +0xe65a9f */ __asm { JZ 0x7fffa55d62eb }
    /* +0xe65aa5 */ __asm { MOV AX,0xeb70 }
    /* +0xe65aa9 */ __asm { IMUL EAX,EAX,0x3137 }
    /* +0xe65aaf */ __asm { MOV ECX,R15D }
    /* +0xe65ab2 */ __asm { ROL AX,CL }
    /* +0xe65ab5 */ __asm { MOV RBX,R15 }
    /* +0xe65ab8 */ __asm { MOV R10D,R15D }
    /* +0xe65abb */ __asm { OR R10D,0x1 }
    /* +0xe65abf */ __asm { ADD EAX,-0x28 }
    /* +0xe65ac2 */ __asm { MOVZX R9D,AX }
    /* +0xe65ac6 */ __asm { MOV AX,0x6c68 }
    /* +0xe65aca */ __asm { IMUL EAX,R10D }
    /* +0xe65ace */ __asm { XOR EAX,0x107 }
    /* +0xe65ad3 */ __asm { MOVSX R10,AX }
    /* +0xe65ad7 */ __asm { MOV qword ptr [RBP + -0x20],RAX }
    /* +0xe65adb */ __asm { MOV EAX,dword ptr [RDX + 0x4806] }
    /* +0xe65ae1 */ __asm { JMP 0x7fffa55d6293 }
    /* +0xe65ae6 */ __asm { CMP EAX,0x3 }
    /* +0xe65ae9 */ __asm { JNZ 0x7fffa55d5e3a }
    /* +0xe65aef */ __asm { RDTSC }
    /* +0xe65af1 */ __asm { SHL RDX,0x20 }
    /* +0xe65af5 */ __asm { OR RDX,RAX }
    /* +0xe65af8 */ __asm { MOV R11,-0x5b596a0ee0e87373 }
    /* +0xe65b02 */ __asm { IMUL R11,RDX }
    /* +0xe65b06 */ __asm { MOV R10,-0x114675917e0374d }
    /* +0xe65b10 */ __asm { IMUL RAX,R10,0x763bde33 }
    /* +0xe65b17 */ __asm { SUB RAX,R15 }
    /* +0xe65b1a */ __asm { ADD RAX,R11 }
    /* +0xe65b1d */ __asm { MOV RCX,RAX }
    /* +0xe65b20 */ __asm { SHR RCX,0x3b }
    /* +0xe65b24 */ __asm { MOV R9,RAX }
    /* +0xe65b27 */ __asm { SHR R9,0x1b }
    /* +0xe65b2b */ __asm { SHR RAX,0x2d }
    /* +0xe65b2f */ __asm { XOR EAX,R9D }
    /* +0xe65b32 */ __asm { ROR EAX,CL }
    /* +0xe65b34 */ __asm { MOV dword ptr [RBP + -0x20],0x3ebfcbef }
    /* +0xe65b3b */ __asm { MOV R10D,dword ptr [RBP + -0x20] }
    /* +0xe65b3f */ __asm { TEST R10B,0x1 }
    /* +0xe65b43 */ __asm { NOP }
    /* +0xe65b44 */ __asm { NOP }
    /* +0xe65b45 */ __asm { NOP }
    /* +0xe65b46 */ __asm { NOP }
    /* +0xe65b47 */ __asm { NOP }
    /* +0xe65b48 */ __asm { NOP }
    /* +0xe65b49 */ __asm { NOP }
    /* +0xe65b4a */ __asm { NOP }
    /* +0xe65b4b */ __asm { NOP }
    /* +0xe65b4c */ __asm { NOP }
    /* +0xe65b4d */ __asm { NOP }
    /* +0xe65b4e */ __asm { NOP }
    /* +0xe65b4f */ __asm { NOP }
    /* +0xe65b50 */ __asm { NOP }
    /* +0xe65b51 */ __asm { NOP }
    /* +0xe65b52 */ __asm { CMP EAX,0x429ecc }
    /* +0xe65b57 */ __asm { JA 0x7fffa55d5ccb }
    /* +0xe65b5d */ __asm { MOV EAX,R15D }
    /* +0xe65b60 */ __asm { OR EAX,0x1 }
    /* +0xe65b63 */ __asm { MOV R10D,0x78e08377 }
    /* +0xe65b69 */ __asm { IMUL R10D,EAX }
    /* +0xe65b6d */ __asm { IMUL EAX,R10D,0x7ffe03d9 }
    /* +0xe65b74 */ __asm { ADD EAX,0xe13c0b8b }
    /* +0xe65b79 */ __asm { MOV R11,0x4fa91d5e191f0e13 }
    /* +0xe65b83 */ __asm { CMP qword ptr [RAX],R11 }
    /* +0xe65b86 */ __asm { NOP }
    /* +0xe65b87 */ __asm { NOP }
    /* +0xe65b88 */ __asm { NOP }
    /* +0xe65b89 */ __asm { NOP }
    /* +0xe65b8a */ __asm { NOP }
    /* +0xe65b8b */ __asm { MOV EDX,0x413d2e04 }
    /* +0xe65b90 */ __asm { MOV RAX,RDX }
    /* +0xe65b93 */ __asm { ROL RAX,0x1f }
    /* +0xe65b97 */ __asm { ADD RAX,-0x1d2b8713 }
    /* +0xe65b9d */ __asm { MOV R11,-0x5ebe3447e288491e }
    /* +0xe65ba7 */ __asm { CMP RAX,R11 }
    /* +0xe65baa */ __asm { JZ 0x7fffa55d6303 }
    /* +0xe65bb0 */ __asm { MOV EAX,dword ptr [RDX + 0x3ec0d4c0] }
    /* +0xe65bb6 */ __asm { MOV R11,0x5555555555555556 }
    /* +0xe65bc0 */ __asm { IMUL R11,RAX }
    /* +0xe65bc4 */ __asm { MOV R10,0x5555555555555555 }
    /* +0xe65bce */ __asm { CMP R11,R10 }
    /* +0xe65bd1 */ __asm { JA 0x7fffa55d5ccb }
    /* +0xe65bd7 */ __asm { PXOR XMM0,XMM0 }
    /* +0xe65bdb */ __asm { MOVDQA xmmword ptr [RBP + -0x20],XMM0 }
    /* +0xe65be0 */ __asm { MOV dword ptr [RBP + -0x28],0x9a1f342f }
    /* +0xe65be7 */ __asm { MOV EAX,dword ptr [RBP + -0x28] }
    /* +0xe65bea */ __asm { CMP EAX,0x4c38455f }
    /* +0xe65bef */ __asm { NOP }
    /* +0xe65bf0 */ __asm { NOP }
    /* +0xe65bf1 */ __asm { NOP }
    /* +0xe65bf2 */ __asm { NOP }
    /* +0xe65bf3 */ __asm { NOP }
    /* +0xe65bf4 */ __asm { MOV dword ptr [RBP + -0x20],0x0 }
    /* +0xe65bfb */ __asm { PUSHFQ }
    /* +0xe65bfc */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe65c04 */ __asm { POPFQ }
    /* +0xe65c05 */ __asm { MOV dword ptr [RBP + -0x28],0x62ce79db }
    /* +0xe65c0c */ __asm { MOV EAX,dword ptr [RBP + -0x28] }
    /* +0xe65c0f */ __asm { TEST EAX,EAX }
    /* +0xe65c11 */ __asm { JNS 0x7fffa55d5c1c }
    /* +0xe65c13 */ __asm { XOR CH,uint8_t ptr [RBX] }
    /* +0xe65c15 */ __asm { SHR uint8_t ptr [RBX + -0x3b26716a],CL }
    /* +0xe65c1b */ __asm { IN AL,DX }
    /* +0xe65c1c */ __asm { MOV RDX,0x0 }
    /* +0xe65c23 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xe65c2a */ __asm { MOV dword ptr [RBP + -0x28],0x9ac9ef10 }
    /* +0xe65c31 */ __asm { MOV EAX,dword ptr [RBP + -0x28] }
    /* +0xe65c34 */ __asm { TEST AL,0x1 }
    /* +0xe65c36 */ __asm { NOP }
    /* +0xe65c37 */ __asm { NOP }
    /* +0xe65c38 */ __asm { NOP }
    /* +0xe65c39 */ __asm { NOP }
    /* +0xe65c3a */ __asm { NOP }
    /* +0xe65c3b */ __asm { NOP }
    /* +0xe65c3c */ __asm { NOP }
    /* +0xe65c3d */ __asm { NOP }
    /* +0xe65c3e */ __asm { NOP }
    /* +0xe65c3f */ __asm { NOP }
    /* +0xe65c40 */ __asm { NOP }
    /* +0xe65c41 */ __asm { NOP }
    /* +0xe65c42 */ __asm { NOP }
    /* +0xe65c43 */ __asm { NOP }
    /* +0xe65c44 */ __asm { NOP }
    /* +0xe65c45 */ __asm { NOP }
    /* +0xe65c46 */ __asm { NOP }
    /* +0xe65ccb */ __asm { LEA RDX,[0x7fffa4787f84] }
    /* +0xe65cd2 */ __asm { MOV R11,-0x2309e95596d6e413 }
    /* +0xe65cdc */ __asm { CMP RDX,R11 }
    /* +0xe65cdf */ __asm { JZ 0x7fffa55d62f3 }
    /* +0xe65ce5 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xe65cec */ __asm { MOV RAX,0x0 }
    /* +0xe65cf3 */ __asm { NOP }
    /* +0xe65cf4 */ __asm { MOV AX,0xfdde }
    /* +0xe65cf8 */ __asm { ADD EAX,0xffffc221 }
    /* +0xe65cfd */ __asm { MOV qword ptr [RBP + -0x20],R10 }
    /* +0xe65d01 */ __asm { ROL AX,0x1 }
    /* +0xe65d04 */ __asm { NOT EAX }
    /* +0xe65d06 */ __asm { MOVZX R9D,AX }
    /* +0xe65d0a */ __asm { MOV AX,0x2014 }
    /* +0xe65d0e */ __asm { IMUL R10D,EAX,-0x7e1b }
    /* +0xe65d15 */ __asm { MOV RBX,R15 }
    /* +0xe65d18 */ __asm { XOR R10D,R15D }
    /* +0xe65d1b */ __asm { ROL R10W,0x3 }
    /* +0xe65d20 */ __asm { MOV EAX,dword ptr [RDX + -0x3940] }
    /* +0xe65d26 */ __asm { MOVSX R10,R10W }
    /* +0xe65d2a */ __asm { JMP 0x7fffa55d6293 }
    /* +0xe65d2f */ __asm { MOV EDX,0x448bc99e }
    /* +0xe65d34 */ __asm { MOV R11,0x31238ae75b41be7d }
    /* +0xe65d3e */ __asm { CMP RDX,R11 }
    /* +0xe65d41 */ __asm { NOP }
    /* +0xe65d42 */ __asm { NOP }
    /* +0xe65d43 */ __asm { NOP }
    /* +0xe65d44 */ __asm { NOP }
    /* +0xe65d45 */ __asm { NOP }
    /* +0xe65d46 */ __asm { CMP dword ptr [RDX + 0x3b723a22],0xd }
    /* +0xe65d4d */ __asm { JC 0x7fffa55d5ef7 }
    /* +0xe65d53 */ __asm { RDTSC }
    /* +0xe65d55 */ __asm { SHL RDX,0x20 }
    /* +0xe65d59 */ __asm { OR RDX,RAX }
    /* +0xe65d5c */ __asm { MOV R11,-0x4a9b10dd1385131b }
    /* +0xe65d66 */ __asm { IMUL R11,RDX }
    /* +0xe65d6a */ __asm { MOV R9,-0x5e22b2b44ae8488a }
    /* +0xe65d74 */ __asm { ADD R9,R11 }
    /* +0xe65d77 */ __asm { MOV RAX,R9 }
    /* +0xe65d7a */ __asm { SHR RAX,0x2d }
    /* +0xe65d7e */ __asm { MOV RCX,R9 }
    /* +0xe65d81 */ __asm { SHR RCX,0x3b }
    /* +0xe65d85 */ __asm { SHR R9,0x1b }
    /* +0xe65d89 */ __asm { XOR EAX,R9D }
    /* +0xe65d8c */ __asm { ROR EAX,CL }
    /* +0xe65d8e */ __asm { MOV dword ptr [RBP + -0x20],0xc9feaafb }
    /* +0xe65d95 */ __asm { MOV R10D,dword ptr [RBP + -0x20] }
    /* +0xe65d99 */ __asm { CMP R10D,0x3c05f46c }
    /* +0xe65da0 */ __asm { JBE 0x7fffa55d630b }
    /* +0xe65da6 */ __asm { CMP EAX,0x100723f }
    /* +0xe65dab */ __asm { JA 0x7fffa55d5dfa }
    /* +0xe65dad */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xe65db4 */ __asm { MOV RDX,0x0 }
    /* +0xe65dbb */ __asm { PUSHFQ }
    /* +0xe65dbc */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe65dc4 */ __asm { POPFQ }
    /* +0xe65dc5 */ __asm { MOV dword ptr [RBP + -0x20],0x919729e4 }
    /* +0xe65dcc */ __asm { MOV EAX,dword ptr [RBP + -0x20] }
    /* +0xe65dcf */ __asm { MOV R10D,0xebe0dcfa }
    /* +0xe65dd5 */ __asm { XOR R10D,0x7ffe0270 }
    /* +0xe65ddc */ __asm { IMUL R10D,R10D,0x629e53d5 }
    /* +0xe65de3 */ __asm { MOV ECX,R15D }
    /* +0xe65de6 */ __asm { ROL R10D,CL }
    /* +0xe65de9 */ __asm { CMP EAX,R10D }
    /* +0xe65dec */ __asm { JC 0x7fffa55d5dfa }
    /* +0xe65dee */ __asm { RET }
    /* +0xe65dfa */ __asm { MOV AX,0x118a }
    /* +0xe65dfe */ __asm { ADD EAX,0xffffde63 }
    /* +0xe65e03 */ __asm { MOV R10W,0x3e1b }
    /* +0xe65e08 */ __asm { SUB R10D,R15D }
    /* +0xe65e0b */ __asm { LEA RDX,[0x7fffa4780cec] }
    /* +0xe65e12 */ __asm { ROL R10W,0x5 }
    /* +0xe65e17 */ __asm { MOVZX R9D,R10W }
    /* +0xe65e1b */ __asm { MOV RBX,R15 }
    /* +0xe65e1e */ __asm { MOV ECX,R15D }
    /* +0xe65e21 */ __asm { OR ECX,0x1 }
    /* +0xe65e24 */ __asm { IMUL ECX,EAX }
    /* +0xe65e27 */ __asm { MOVSX R10,CX }
    /* +0xe65e2b */ __asm { MOV qword ptr [RBP + -0x20],RAX }
    /* +0xe65e2f */ __asm { MOV EAX,dword ptr [RDX + 0x3958] }
    /* +0xe65e35 */ __asm { JMP 0x7fffa55d6293 }
    /* +0xe65e3a */ __asm { MOV R11,-0x1c47c3c2cd3d6269 }
    /* +0xe65e44 */ __asm { ADD R11,-0x437cd54f }
    /* +0xe65e4b */ __asm { MOV RAX,R15 }
    /* +0xe65e4e */ __asm { OR RAX,0x1 }
    /* +0xe65e52 */ __asm { IMUL RAX,R11 }
    /* +0xe65e56 */ __asm { MOV EDX,0x394203ac }
    /* +0xe65e5b */ __asm { CMP RDX,RAX }
    /* +0xe65e5e */ __asm { JZ 0x7fffa55d62fb }
    /* +0xe65e64 */ __asm { MOV AX,0xc5e4 }
    /* +0xe65e68 */ __asm { MOV R10D,0xb21bb165 }
    /* +0xe65e6e */ __asm { XOR R10D,0x34d64ce7 }
    /* +0xe65e75 */ __asm { ROL R10D,0x13 }
    /* +0xe65e79 */ __asm { SUB R10D,R15D }
    /* +0xe65e7c */ __asm { MOV R10D,dword ptr [RDX + R10*0x1 + 0x240] }
    /* +0xe65e84 */ __asm { AND R10D,0x1 }
    /* +0xe65e88 */ __asm { XOR EAX,R15D }
    /* +0xe65e8b */ __asm { NOT EAX }
    /* +0xe65e8d */ __asm { IMUL EAX,EAX,-0x42ad }
    /* +0xe65e93 */ __asm { MOVZX EAX,AX }
    /* +0xe65e96 */ __asm { CMP R10D,EAX }
    /* +0xe65e99 */ __asm { JNZ 0x7fffa55d5f67 }
    /* +0xe65e9f */ __asm { LEA RDX,[0x7fffa47bb0d6] }
    /* +0xe65ea6 */ __asm { MOV R11,-0x328823cda95064c1 }
    /* +0xe65eb0 */ __asm { CMP RDX,R11 }
    /* +0xe65eb3 */ __asm { JZ 0x7fffa55d631e }
    /* +0xe65eb9 */ __asm { MOV AX,0x3915 }
    /* +0xe65ebd */ __asm { XOR EAX,0xffff97c5 }
    /* +0xe65ec2 */ __asm { IMUL EAX,EAX,0x2e5 }
    /* +0xe65ec8 */ __asm { MOV ECX,R15D }
    /* +0xe65ecb */ __asm { ROL AX,CL }
    /* +0xe65ece */ __asm { MOVZX R9D,AX }
    /* +0xe65ed2 */ __asm { MOV R10D,0x3e2b8014 }
    /* +0xe65ed8 */ __asm { MOV qword ptr [RBP + -0x20],RAX }
    /* +0xe65edc */ __asm { MOV EAX,dword ptr [RDX + 0x1ebe] }
    /* +0xe65ee2 */ __asm { MOV RBX,R15 }
    /* +0xe65ee5 */ __asm { ADD R10D,R15D }
    /* +0xe65ee8 */ __asm { IMUL R10D,R10D,0x42ee3331 }
    /* +0xe65eef */ __asm { MOVSXD R10,R10D }
    /* +0xe65ef2 */ __asm { JMP 0x7fffa55d6293 }
    /* +0xe65ef7 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xe65efe */ __asm { MOV RDX,0x0 }
    /* +0xe65f05 */ __asm { LEA R11,[0x7fffa47c1f11] }
    /* +0xe65f0c */ __asm { MOV R10,-0x2c7d1f2b29d1f395 }
    /* +0xe65f16 */ __asm { CMP R11,R10 }
    /* +0xe65f19 */ __asm { NOP }
    /* +0xe65f1a */ __asm { NOP }
    /* +0xe65f1b */ __asm { NOP }
    /* +0xe65f1c */ __asm { NOP }
    /* +0xe65f1d */ __asm { NOP }
    /* +0xe65f1e */ __asm { MOV R10W,0x1975 }
    /* +0xe65f23 */ __asm { MOV R8W,0x3a1a }
    /* +0xe65f28 */ __asm { MOV EAX,0x8dbbf7e7 }
    /* +0xe65f2d */ __asm { MOV qword ptr [RBP + -0x20],RDX }
    /* +0xe65f31 */ __asm { XOR R10D,0x1d75 }
    /* +0xe65f38 */ __asm { ADD EAX,R15D }
    /* +0xe65f3b */ __asm { ADD EAX,0xcceb7e3d }
    /* +0xe65f40 */ __asm { MOVSXD RCX,EAX }
    /* +0xe65f43 */ __asm { MOV EAX,dword ptr [RCX + R11*0x1 + 0x44] }
    /* +0xe65f48 */ __asm { MOV ECX,R15D }
    /* +0xe65f4b */ __asm { ROR R10W,CL }
    /* +0xe65f4f */ __asm { MOVZX R9D,R10W }
    /* +0xe65f53 */ __asm { MOV RBX,R15 }
    /* +0xe65f56 */ __asm { SUB R8D,R15D }
    /* +0xe65f59 */ __asm { ROL R8W,0xb }
    /* +0xe65f5e */ __asm { MOVSX R10,R8W }
    /* +0xe65f62 */ __asm { JMP 0x7fffa55d6293 }
    /* +0xe65f67 */ __asm { RDTSC }
    /* +0xe65f69 */ __asm { SHL RDX,0x20 }
    /* +0xe65f6d */ __asm { OR RDX,RAX }
    /* +0xe65f70 */ __asm { MOV R11,-0x6bdeac2e46be109b }
    /* +0xe65f7a */ __asm { IMUL R11,RDX }
    /* +0xe65f7e */ __asm { MOV RCX,0x186945a4d994546e }
    /* +0xe65f88 */ __asm { ADD RCX,R11 }
    /* +0xe65f8b */ __asm { MOV RAX,RCX }
    /* +0xe65f8e */ __asm { SHR RAX,0x2d }
    /* +0xe65f92 */ __asm { MOV R9,RCX }
    /* +0xe65f95 */ __asm { SHR R9,0x1b }
    /* +0xe65f99 */ __asm { XOR EAX,R9D }
    /* +0xe65f9c */ __asm { SHR RCX,0x3b }
    /* +0xe65fa0 */ __asm { ROR EAX,CL }
    /* +0xe65fa2 */ __asm { MOV dword ptr [RBP + -0x20],0xdd6cddde }
    /* +0xe65fa9 */ __asm { MOV R10D,dword ptr [RBP + -0x20] }
    /* +0xe65fad */ __asm { TEST R10B,0x1 }
    /* +0xe65fb1 */ __asm { JNZ 0x7fffa55d6326 }
    /* +0xe65fb7 */ __asm { CMP EAX,0x106e7fe }
    /* +0xe65fbc */ __asm { JA 0x7fffa55d61dd }
    /* +0xe65fc2 */ __asm { MOV AX,0x4f59 }
    /* +0xe65fc6 */ __asm { XOR EAX,0x7522 }
    /* +0xe65fcb */ __asm { SUB EAX,R15D }
    /* +0xe65fce */ __asm { MOVZX EAX,AX }
    /* +0xe65fd1 */ __asm { MOV R11,qword ptr GS:[RAX] }
    /* +0xe65fd5 */ __asm { MOV R11,qword ptr [R11 + 0x30] }
    /* +0xe65fd9 */ __asm { MOV RDX,-0x30096892fb43ea15 }
    /* +0xe65fe3 */ __asm { MOV R10,-0x4aadf2defebbbde0 }
}

