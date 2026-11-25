// Subsystem: Internal Routines Cluster 06 (0x8ea080 .. 0x98e380)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : Unwind@7fffa505a080  |  RVA: 0x8ea080  |  Size: 250 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505a080(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x2d8) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa505a180  |  RVA: 0x8ea180  |  Size: 367 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505a180(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x4b8)) {
    uVar1 = (short)*(uint64_t *)(param_2 + 0x380) + 0x6ca2U ^ 0x1a29;
    (*(code *)((int64_t)(short)(uVar1 << 6 | uVar1 >> 10) + 0x7fffa56892c4))
              (param_1,0x7fffa56892c4,
               *(uint64_t *)(param_2 + 0x4a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x4a0));
  }
  *(uint16_t *)(param_2 + 0x4a0) = 0;
  *(uint64_t *)(param_2 + 0x4b0) = 0;
  *(uint64_t *)(param_2 + 0x4b8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa505a2f0  |  RVA: 0x8ea2f0  |  Size: 250 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505a2f0(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x370) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa505a3f0  |  RVA: 0x8ea3f0  |  Size: 407 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505a3f0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  int iVar4;
  
  uVar3 = (short)*(uint32_t *)(param_2 + 0x380) * -0x2983;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xe8) & 0xf;
  iVar4 = *(int *)((int64_t)(short)(uVar3 >> bVar2 | uVar3 << 0x10 - bVar2) + 0x7fffa47872be) + -1;
  *(int *)(*(int64_t *)(param_2 + 0x588) + 4 +
          (int64_t)
          (int)((int)*(uint64_t *)(param_2 + 0xa0) * (*(uint32_t *)(param_2 + 0x428) ^ 0x498e64c7))) =
       iVar4;
  if (iVar4 == 0) {
    uVar1 = *(uint64_t *)(param_2 + 0xe8);
    LOCK();
    *(uint32_t *)
     ((int64_t)(short)(((short)*(uint64_t *)(param_2 + 0x428) - (short)uVar1) + -0x37c) +
     0x7fffa47867b8) = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(((int)uVar1 + -0x4d4a473d) * *(int *)(param_2 + 0x358) + 0x7566f1dd) +
               0x7fffa478e08d);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa505a590  |  RVA: 0x8ea590  |  Size: 355 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505a590(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x108)) {
    pcVar1 = (code *)((int64_t)
                      (((int)*(uint64_t *)(param_2 + 0xe8) - (int)*(uint64_t *)(param_2 + 0x428)
                       ) + -0x185c6a0) + 0x7fffa5693cac);
    (*pcVar1)(param_1,pcVar1,*(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0)
             );
  }
  *(uint16_t *)(param_2 + 0xf0) = 0;
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint64_t *)(param_2 + 0x100) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa505a700  |  RVA: 0x8ea700  |  Size: 404 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505a700(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int64_t)(short)~((0x681f - (short)*(uint32_t *)(param_2 + 0xe8)) * 0x53ab) +
                  0x7fffa478613d) + -1;
  *(int *)((int64_t)
           (short)((0x53ed - ((short)*(uint32_t *)(param_2 + 0x428) + -0x148b)) *
                  ((uint16_t)*(uint64_t *)(param_2 + 0x70) | 1)) + 0x7fffa478682d) = iVar2;
  if (iVar2 == 0) {
    uVar1 = ~((uint16_t)*(uint32_t *)(param_2 + 0x70) ^ 0xe38e);
    LOCK();
    *(uint32_t *)
     ((int64_t)(short)((uVar1 << 7 | uVar1 >> 9) - (short)*(uint32_t *)(param_2 + 0x428)) +
     0x7fffa478b0e6) = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)
               (int)((*(int *)(param_2 + 0xa0) * -0x18000000 |
                     (uint32_t)(*(int *)(param_2 + 0xa0) * -0x23ea9718) >> 8) *
                    *(int *)(param_2 + 0x358)) + 0x7fffa478f649);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa505a8a0  |  RVA: 0x8ea8a0  |  Size: 280 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505a8a0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = *(int *)(param_2 + 0xa0) * 0x13767e79;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x428) & 0x1f;
  (*(code *)(&UNK_7fffa508e088 + (int)((uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) + 0xc0000026)))
            (*(uint64_t *)(param_2 + 0x588));
  return;
}


// ============================================================================
// Function : Unwind@7fffa505a9c0  |  RVA: 0x8ea9c0  |  Size: 351 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505a9c0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x108)) {
    pcVar1 = (code *)((int64_t)
                      (int)((int)*(uint64_t *)(param_2 + 0x428) + 0x1ddfdc14U ^
                           (uint32_t)*(uint64_t *)(param_2 + 0xe8)) + 0x7fffa5695220);
    (*pcVar1)(param_1,pcVar1,*(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0)
             );
  }
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint64_t *)(param_2 + 0x100) = 0;
  *(uint16_t *)(param_2 + 0xf0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa505ab20  |  RVA: 0x8eab20  |  Size: 421 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505ab20(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x4f8)) {
    (*(code *)((int64_t)
               (short)~((uint16_t)*(uint64_t *)(param_2 + 0x428) ^
                        (uint16_t)*(uint64_t *)(param_2 + 0xe8) ^ 0xfd9) + 0x7fffa568862e))
              (0x14ec042b,0x7fffa568862e,
               *(uint64_t *)(param_2 + 0x4e0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x4e0));
  }
  if (7 < *(uint64_t *)(param_2 + 1000)) {
    (*(code *)((int64_t)
               (((int)*(uint64_t *)(param_2 + 0x428) -
                ((int)*(uint64_t *)(param_2 + 0xe8) + 0x3e7bd938)) + 0x3ffffdd2) + 0x7fffa5695dba)
    )();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa505acd0  |  RVA: 0x8eacd0  |  Size: 280 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505acd0(uint64_t param_1,int64_t param_2)

{
  (*(code *)((int64_t)
             (short)(~((short)*(uint64_t *)(param_2 + 0x1f0) * 0x329a) +
                    (short)*(uint32_t *)(param_2 + 0x428)) + 0x7fffa508444c))
            (*(uint64_t *)(param_2 + 0x588));
  return;
}


// ============================================================================
// Function : Unwind@7fffa505adf0  |  RVA: 0x8eadf0  |  Size: 410 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505adf0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint16_t uVar2;
  
  uVar2 = (short)*(uint32_t *)(param_2 + 0x380) * 0x4c82 + 0x5c09U ^
          (uint16_t)*(uint32_t *)(param_2 + 0xe8);
  if ((uint64_t)(uint16_t)(uVar2 << 3 | uVar2 >> 0xd) < *(uint64_t *)(param_2 + 0x318)) {
    uVar1 = *(uint64_t *)(param_2 + 0x300);
    (*(code *)((int64_t)
               (short)(((short)*(uint64_t *)(param_2 + 0x428) + -0x2a10) * 0x4065 ^
                      (uint16_t)*(uint32_t *)(param_2 + 0x1f0)) + 0x7fffa568ede9))
              (*(uint64_t *)(param_2 + 0xe8),uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint64_t *)(param_2 + 0x310) = 0;
  *(uint64_t *)(param_2 + 0x318) = 7;
  *(uint16_t *)(param_2 + 0x300) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa505af90  |  RVA: 0x8eaf90  |  Size: 340 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505af90(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar3 = ~(*(int *)(param_2 + 0xa0) * -0x5d461f7f);
  if ((uint64_t)(uVar3 << 0x1a | uVar3 >> 6) < *(uint64_t *)(param_2 + 0x4f8)) {
    uVar1 = *(uint64_t *)(param_2 + 0x4e0);
    uVar3 = (int)*(uint64_t *)(param_2 + 0x428) + 0x8fb0c8d0;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xe8) & 0x1f;
    (*(code *)((int64_t)(int)(uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) + 0x7fffa5695b7b))
              (*(uint64_t *)(param_2 + 0x428) & 0xffffffff,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa505b0f0  |  RVA: 0x8eb0f0  |  Size: 4561 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa505b0f0(void) {
    /* +0x8eb0f0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x8eb0f5 */ __asm { PUSH RBP }
    /* +0x8eb0f6 */ __asm { PUSH R13 }
    /* +0x8eb0f8 */ __asm { PUSH R15 }
    /* +0x8eb0fa */ __asm { PUSH RBX }
    /* +0x8eb0fb */ __asm { PUSH R12 }
    /* +0x8eb0fd */ __asm { PUSH R14 }
    /* +0x8eb0ff */ __asm { PUSH RDI }
    /* +0x8eb100 */ __asm { PUSH RSI }
    /* +0x8eb101 */ __asm { SUB RSP,0x108 }
    /* +0x8eb108 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x8eb10f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM14 }
    /* +0x8eb116 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM11 }
    /* +0x8eb11d */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM15 }
    /* +0x8eb127 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0x8eb131 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM12 }
    /* +0x8eb13b */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x8eb144 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM8 }
    /* +0x8eb14e */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM13 }
    /* +0x8eb158 */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM9 }
    /* +0x8eb162 */ __asm { MOVDQA xmmword ptr [RSP + 0xf0],XMM6 }
    /* +0x8eb16b */ __asm { MOV EAX,0x33b4f6a6 }
    /* +0x8eb170 */ __asm { MOV R11D,0x4cc43de }
    /* +0x8eb176 */ __asm { ADD R11D,0x7b33b578 }
    /* +0x8eb17d */ __asm { MOV R8W,0x34eb }
    /* +0x8eb182 */ __asm { IMUL EAX,dword ptr [RBP + 0x2d8] }
    /* +0x8eb189 */ __asm { ROL EAX,0x8 }
    /* +0x8eb18c */ __asm { MOV ECX,0x7b05149 }
    /* +0x8eb191 */ __asm { SUB ECX,EAX }
    /* +0x8eb193 */ __asm { RDTSC }
    /* +0x8eb195 */ __asm { SHL RDX,0x20 }
    /* +0x8eb199 */ __asm { OR RDX,RAX }
    /* +0x8eb19c */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0x8eb1a6 */ __asm { IMUL RDX,RAX }
    /* +0x8eb1aa */ __asm { MOV R10,RDX }
    /* +0x8eb1ad */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0x8eb1b7 */ __asm { AND R10,RAX }
    /* +0x8eb1ba */ __asm { ADD RDX,RAX }
    /* +0x8eb1bd */ __asm { MOVSXD RDI,ECX }
    /* +0x8eb1c0 */ __asm { MOV EAX,0x1322d4ba }
    /* +0x8eb1c5 */ __asm { MOV ECX,0xb92c2091 }
    /* +0x8eb1ca */ __asm { MOV R9D,0x8eacaa0c }
    /* +0x8eb1d0 */ __asm { SUB R9D,ECX }
    /* +0x8eb1d3 */ __asm { ROL R9D,0x16 }
    /* +0x8eb1d7 */ __asm { MOV RCX,qword ptr [RBP + 0x3a8] }
    /* +0x8eb1de */ __asm { ROR R9D,CL }
    /* +0x8eb1e1 */ __asm { XOR EAX,0x3961087b }
    /* +0x8eb1e6 */ __asm { IMUL EAX,dword ptr [RBP + 0x20] }
    /* +0x8eb1ea */ __asm { XOR EAX,0x6069b24b }
    /* +0x8eb1ef */ __asm { ROR EAX,CL }
    /* +0x8eb1f1 */ __asm { MOV R14D,ECX }
    /* +0x8eb1f4 */ __asm { XOR R14D,R8D }
    /* +0x8eb1f7 */ __asm { MOV RSI,qword ptr [RBP + 0x68] }
    /* +0x8eb1fb */ __asm { MOV ECX,ESI }
    /* +0x8eb1fd */ __asm { ROL R11D,CL }
    /* +0x8eb200 */ __asm { NOT R11D }
    /* +0x8eb203 */ __asm { CMP R11,RDI }
    /* +0x8eb206 */ __asm { CMOVL RDX,R10 }
    /* +0x8eb20a */ __asm { MOV R11,RDX }
    /* +0x8eb20d */ __asm { SHR R11,0x2d }
    /* +0x8eb211 */ __asm { MOV RCX,RDX }
    /* +0x8eb214 */ __asm { SHR RCX,0x3b }
    /* +0x8eb218 */ __asm { SHR RDX,0x1b }
    /* +0x8eb21c */ __asm { MOV R8D,R11D }
    /* +0x8eb21f */ __asm { IMUL R8D,EDX }
    /* +0x8eb223 */ __asm { XOR EDX,R11D }
    /* +0x8eb226 */ __asm { CMP R9,RAX }
    /* +0x8eb229 */ __asm { CMOVLE EDX,R8D }
    /* +0x8eb22d */ __asm { ROR EDX,CL }
    /* +0x8eb22f */ __asm { ADD R14D,0xffffb394 }
    /* +0x8eb236 */ __asm { MOV ECX,ESI }
    /* +0x8eb238 */ __asm { ROL R14W,CL }
    /* +0x8eb23c */ __asm { AND EDX,0x3 }
    /* +0x8eb23f */ __asm { MOVZX EAX,R14W }
    /* +0x8eb243 */ __asm { CMP EDX,EAX }
    /* +0x8eb245 */ __asm { JC 0x7fffa505b551 }
    /* +0x8eb24b */ __asm { CMP EDX,0x3 }
    /* +0x8eb24e */ __asm { JNZ 0x7fffa505b87e }
    /* +0x8eb254 */ __asm { MOV EAX,0x432285a4 }
    /* +0x8eb259 */ __asm { MOV R8,0x684724c906173f61 }
    /* +0x8eb263 */ __asm { IMUL R8,RAX }
    /* +0x8eb267 */ __asm { MOV EDX,0x80684782 }
    /* +0x8eb26c */ __asm { ADD RDX,R8 }
    /* +0x8eb26f */ __asm { MOV R8,0x651f02cfea3c3e66 }
    /* +0x8eb279 */ __asm { CMP RDX,R8 }
    /* +0x8eb27c */ __asm { JZ 0x7fffa505c4f8 }
    /* +0x8eb282 */ __asm { MOV R8D,0x7a087611 }
    /* +0x8eb288 */ __asm { ADD R8D,0x7ffffffa }
    /* +0x8eb28f */ __asm { MOV RCX,qword ptr [RBP + 0x3a8] }
    /* +0x8eb296 */ __asm { ROR R8D,CL }
    /* +0x8eb299 */ __asm { IMUL EDX,R8D,-0x700f671d }
    /* +0x8eb2a0 */ __asm { ADD EDX,dword ptr [RBP + 0x68] }
    /* +0x8eb2a3 */ __asm { MOV R8,qword ptr [RDX + RAX*0x1 + 0x8] }
    /* +0x8eb2a8 */ __asm { MOV RAX,R8 }
    /* +0x8eb2ab */ __asm { MOV RDX,0x25fe4e9c01d1ea7c }
    /* +0x8eb2b5 */ __asm { MUL RDX }
    /* +0x8eb2b8 */ __asm { MOV R11,RDX }
    /* +0x8eb2bb */ __asm { MOV EDX,0x1476825 }
    /* +0x8eb2c0 */ __asm { MOV RAX,R8 }
    /* +0x8eb2c3 */ __asm { MUL RDX }
    /* +0x8eb2c6 */ __asm { ADD RAX,R11 }
    /* +0x8eb2c9 */ __asm { ADC RDX,0x0 }
    /* +0x8eb2cd */ __asm { TEST DL,0x1 }
    /* +0x8eb2d0 */ __asm { JZ 0x7fffa505bd4b }
    /* +0x8eb2d6 */ __asm { MOV R8D,0x83aa6ed8 }
    /* +0x8eb2dc */ __asm { RDTSC }
    /* +0x8eb2de */ __asm { SHL RDX,0x20 }
    /* +0x8eb2e2 */ __asm { OR RDX,RAX }
    /* +0x8eb2e5 */ __asm { MOV R11,0x7facc0f7a00541bd }
    /* +0x8eb2ef */ __asm { IMUL RDX,R11 }
    /* +0x8eb2f3 */ __asm { MOV R9,qword ptr [RBP + 0x3a8] }
    /* +0x8eb2fa */ __asm { XOR R8D,R9D }
    /* +0x8eb2fd */ __asm { NOT R8D }
    /* +0x8eb300 */ __asm { MOV R10,qword ptr [RBP + 0x68] }
    /* +0x8eb304 */ __asm { MOV ECX,R10D }
    /* +0x8eb307 */ __asm { ROL R8D,CL }
    /* +0x8eb30a */ __asm { MOV R11,0x580e9e03ae9dc46a }
    /* +0x8eb314 */ __asm { ADD RDX,R11 }
    /* +0x8eb317 */ __asm { MOV RCX,RDX }
    /* +0x8eb31a */ __asm { SHR RCX,0x3b }
    /* +0x8eb31e */ __asm { MOV R11,RDX }
    /* +0x8eb321 */ __asm { SHR R11,0x2d }
    /* +0x8eb325 */ __asm { SHR RDX,0x1b }
    /* +0x8eb329 */ __asm { XOR R11D,EDX }
    /* +0x8eb32c */ __asm { ROR R11D,CL }
    /* +0x8eb32f */ __asm { MOV dword ptr [RBP + 0x70],R8D }
    /* +0x8eb333 */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x8eb336 */ __asm { MOV R8D,0xab67948b }
    /* +0x8eb33c */ __asm { ADD R8D,R9D }
    /* +0x8eb33f */ __asm { MOV ECX,R10D }
    /* +0x8eb342 */ __asm { ROL R8D,CL }
    /* +0x8eb345 */ __asm { XOR R8D,0xd4231797 }
    /* +0x8eb34c */ __asm { ROR R8D,0x1 }
    /* +0x8eb34f */ __asm { CMP EAX,R8D }
    /* +0x8eb352 */ __asm { JNC 0x7fffa505c500 }
    /* +0x8eb358 */ __asm { CMP R11D,0x111a2b6 }
    /* +0x8eb35f */ __asm { JA 0x7fffa505b501 }
    /* +0x8eb365 */ __asm { MOV dword ptr [RBP + 0x70],0xf6fffdff }
    /* +0x8eb36c */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x8eb36f */ __asm { LEA RAX,[0x7fffa47be15b] }
    /* +0x8eb376 */ __asm { MOV R8,-0x338115f99ed7778 }
    /* +0x8eb380 */ __asm { CMP RAX,R8 }
    /* +0x8eb383 */ __asm { JZ 0x7fffa505c515 }
    /* +0x8eb389 */ __asm { MOVZX EDX,uint8_t ptr [RAX + -0x1a12] }
    /* +0x8eb390 */ __asm { MOVZX R10D,uint8_t ptr [RAX + RDX*0x4 + -0x1a0c] }
    /* +0x8eb399 */ __asm { NOT R10B }
    /* +0x8eb39c */ __asm { ROL R10B,0x5 }
    /* +0x8eb3a0 */ __asm { MOV uint8_t ptr [RBP + 0x70],R10B }
    /* +0x8eb3a4 */ __asm { MOVZX R10D,uint8_t ptr [RAX + RDX*0x4 + -0x1a0b] }
    /* +0x8eb3ad */ __asm { NOT R10B }
    /* +0x8eb3b0 */ __asm { ROL R10B,0x5 }
    /* +0x8eb3b4 */ __asm { MOV uint8_t ptr [RBP + 0x71],R10B }
    /* +0x8eb3b8 */ __asm { MOVZX R10D,uint8_t ptr [RAX + RDX*0x4 + -0x1a0a] }
    /* +0x8eb3c1 */ __asm { NOT R10B }
    /* +0x8eb3c4 */ __asm { ROL R10B,0x5 }
    /* +0x8eb3c8 */ __asm { MOV uint8_t ptr [RBP + 0x72],R10B }
    /* +0x8eb3cc */ __asm { MOVZX EDX,uint8_t ptr [RAX + RDX*0x4 + -0x1a09] }
    /* +0x8eb3d4 */ __asm { NOT DL }
    /* +0x8eb3d6 */ __asm { ROL DL,0x5 }
    /* +0x8eb3d9 */ __asm { MOV uint8_t ptr [RBP + 0x73],DL }
    /* +0x8eb3dc */ __asm { MOV EAX,0x9102c3cc }
    /* +0x8eb3e1 */ __asm { XOR EAX,dword ptr [RBP + 0x70] }
    /* +0x8eb3e4 */ __asm { BT EAX,EAX }
    /* +0x8eb3e7 */ __asm { JNC 0x7fffa505b501 }
    /* +0x8eb3ed */ __asm { PXOR XMM1,XMM1 }
    /* +0x8eb3f1 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM1 }
    /* +0x8eb3f6 */ __asm { MOV dword ptr [RBP + 0x420],0xc054c0d }
    /* +0x8eb400 */ __asm { MOV EAX,dword ptr [RBP + 0x420] }
    /* +0x8eb406 */ __asm { TEST AL,0x1 }
    /* +0x8eb408 */ __asm { NOP }
    /* +0x8eb409 */ __asm { NOP }
    /* +0x8eb40a */ __asm { NOP }
    /* +0x8eb40b */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0x8eb412 */ __asm { MOV dword ptr [RBP + 0x420],0x430d72f8 }
    /* +0x8eb41c */ __asm { MOV EAX,dword ptr [RBP + 0x420] }
    /* +0x8eb422 */ __asm { TEST AL,0x1 }
    /* +0x8eb424 */ __asm { NOP }
    /* +0x8eb425 */ __asm { NOP }
    /* +0x8eb426 */ __asm { NOP }
    /* +0x8eb427 */ __asm { NOP }
    /* +0x8eb428 */ __asm { NOP }
    /* +0x8eb429 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x8eb430 */ __asm { NOP }
    /* +0x8eb431 */ __asm { MOV RAX,0x0 }
    /* +0x8eb438 */ __asm { MOV DX,0x9104 }
    /* +0x8eb43c */ __asm { MOV R8,qword ptr [RBP + 0x3a8] }
    /* +0x8eb443 */ __asm { LEA EAX,[R8 + RDX*0x1] }
    /* +0x8eb447 */ __asm { XOR EAX,dword ptr [RBP + 0x68] }
    /* +0x8eb44a */ __asm { IMUL EAX,EAX,-0x5065 }
    /* +0x8eb450 */ __asm { MOVZX EDX,AX }
    /* +0x8eb453 */ __asm { MOV R8,qword ptr GS:[RDX] }
    /* +0x8eb457 */ __asm { MOV RAX,-0x39116e03cdb03177 }
    /* +0x8eb461 */ __asm { MOV RDX,0x6bba108cfe26f755 }
    /* +0x8eb46b */ __asm { CMP R8,RDX }
    /* +0x8eb46e */ __asm { NOP }
    /* +0x8eb46f */ __asm { NOP }
    /* +0x8eb470 */ __asm { NOP }
    /* +0x8eb471 */ __asm { NOP }
    /* +0x8eb472 */ __asm { NOP }
    /* +0x8eb473 */ __asm { MOV R8,0x47757502d083c970 }
    /* +0x8eb47d */ __asm { MOV RDX,qword ptr [RBP + 0x68] }
    /* +0x8eb481 */ __asm { OR RDX,0x1 }
    /* +0x8eb485 */ __asm { IMUL RDX,R8 }
    /* +0x8eb489 */ __asm { ROL RDX,0x29 }
    /* +0x8eb48d */ __asm { ADD RDX,qword ptr [RBP + 0x3a8] }
    /* +0x8eb494 */ __asm { LEA RAX,[0x7fffa4787beb] }
    /* +0x8eb49b */ __asm { CMP RAX,RDX }
    /* +0x8eb49e */ __asm { NOP }
    /* +0x8eb49f */ __asm { NOP }
    /* +0x8eb4a0 */ __asm { NOP }
    /* +0x8eb4a1 */ __asm { NOP }
    /* +0x8eb4a2 */ __asm { NOP }
    /* +0x8eb4a3 */ __asm { NOP }
    /* +0x8eb4a4 */ __asm { NOP }
    /* +0x8eb4a5 */ __asm { MOV R8W,0x909b }
    /* +0x8eb4aa */ __asm { MOV ECX,0x1b209ae2 }
    /* +0x8eb4af */ __asm { MOV RDX,qword ptr [RBP + 0x68] }
    /* +0x8eb4b3 */ __asm { XOR R8D,EDX }
    /* +0x8eb4b6 */ __asm { MOV qword ptr [RBP + 0x420],R11 }
    /* +0x8eb4bd */ __asm { ADD ECX,EDX }
    /* +0x8eb4bf */ __asm { MOV R11D,0x8cf319a0 }
    /* +0x8eb4c5 */ __asm { SUB R11D,ECX }
    /* +0x8eb4c8 */ __asm { MOVSXD R10,R11D }
    /* +0x8eb4cb */ __asm { ADD R8D,0xffff91dc }
    /* +0x8eb4d2 */ __asm { MOV CX,0xdbd6 }
    /* +0x8eb4d6 */ __asm { MOV R11D,0x5a6d }
    /* +0x8eb4dc */ __asm { SUB R11D,ECX }
    /* +0x8eb4df */ __asm { XOR R11D,EDX }
    /* +0x8eb4e2 */ __asm { MOVZX EDX,R11W }
    /* +0x8eb4e6 */ __asm { MOV EAX,dword ptr [RAX + -0x35cf] }
    /* +0x8eb4ec */ __asm { MOV RCX,qword ptr [RBP + 0x3a8] }
    /* +0x8eb4f3 */ __asm { ROR R8W,CL }
    /* +0x8eb4f7 */ __asm { MOVZX R9D,R8W }
    /* +0x8eb4fb */ __asm { LEA R8,[RBP + 0x70] }
    /* +0x8eb4ff */ __asm { SYSCALL }
    /* +0x8eb501 */ __asm { LEA RAX,[0x7fffa478494b] }
    /* +0x8eb508 */ __asm { MOV R8,0x36e5e81b1faecb4e }
    /* +0x8eb512 */ __asm { CMP RAX,R8 }
    /* +0x8eb515 */ __asm { NOP }
    /* +0x8eb516 */ __asm { NOP }
    /* +0x8eb517 */ __asm { NOP }
    /* +0x8eb518 */ __asm { NOP }
    /* +0x8eb519 */ __asm { NOP }
    /* +0x8eb51a */ __asm { NOP }
    /* +0x8eb51b */ __asm { NOP }
    /* +0x8eb51c */ __asm { NOP }
    /* +0x8eb51d */ __asm { NOP }
    /* +0x8eb51e */ __asm { NOP }
    /* +0x8eb51f */ __asm { NOP }
    /* +0x8eb520 */ __asm { NOP }
    /* +0x8eb521 */ __asm { NOP }
    /* +0x8eb522 */ __asm { NOP }
    /* +0x8eb523 */ __asm { NOP }
    /* +0x8eb524 */ __asm { NOP }
    /* +0x8eb525 */ __asm { NOP }
    /* +0x8eb551 */ __asm { CMP EDX,0x1 }
    /* +0x8eb554 */ __asm { JNZ 0x7fffa505b971 }
    /* +0x8eb55a */ __asm { MOV EAX,0xb033e142 }
    /* +0x8eb55f */ __asm { MOV R8,0x260052a7dc8b2d93 }
    /* +0x8eb569 */ __asm { CMP RAX,R8 }
    /* +0x8eb56c */ __asm { JZ 0x7fffa505c520 }
    /* +0x8eb572 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x8eb579 */ __asm { MOV R8,0x0 }
    /* +0x8eb580 */ __asm { NOP }
    /* +0x8eb582 */ __asm { MOV R8D,dword ptr [RAX + -0x3035dd82] }
    /* +0x8eb589 */ __asm { RDTSC }
    /* +0x8eb58b */ __asm { SHL RDX,0x20 }
    /* +0x8eb58f */ __asm { OR RDX,RAX }
    /* +0x8eb592 */ __asm { CMP R8D,0xd }
    /* +0x8eb596 */ __asm { JNC 0x7fffa505bd81 }
    /* +0x8eb59c */ __asm { MOV R8,-0x30ebf64fafbc6efb }
    /* +0x8eb5a6 */ __asm { IMUL RDX,R8 }
    /* +0x8eb5aa */ __asm { MOV R10,qword ptr [RBP + 0x68] }
    /* +0x8eb5ae */ __asm { MOV R8,R10 }
    /* +0x8eb5b1 */ __asm { MOV R9,qword ptr [RBP + 0x3a8] }
    /* +0x8eb5b8 */ __asm { SUB R8,R9 }
    /* +0x8eb5bb */ __asm { MOV R11,0x4aab4a0530704bb2 }
    /* +0x8eb5c5 */ __asm { XOR R11,0x5a026c7c }
    /* +0x8eb5cc */ __asm { ADD R11,R8 }
    /* +0x8eb5cf */ __asm { ADD R11,RDX }
    /* +0x8eb5d2 */ __asm { MOV RCX,R11 }
    /* +0x8eb5d5 */ __asm { SHR RCX,0x3b }
    /* +0x8eb5d9 */ __asm { MOV RDX,R11 }
    /* +0x8eb5dc */ __asm { SHR RDX,0x2d }
    /* +0x8eb5e0 */ __asm { SHR R11,0x1b }
    /* +0x8eb5e4 */ __asm { XOR R11D,EDX }
    /* +0x8eb5e7 */ __asm { ROR R11D,CL }
    /* +0x8eb5ea */ __asm { NOP }
    /* +0x8eb5eb */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x8eb5f2 */ __asm { MOV RAX,0x0 }
    /* +0x8eb5f9 */ __asm { MOV dword ptr [RBP + 0x70],0x8ed27fcb }
    /* +0x8eb600 */ __asm { MOV EAX,dword ptr [RBP + 0x70] }
    /* +0x8eb603 */ __asm { MOV R8W,0x13a4 }
    /* +0x8eb608 */ __asm { ADD R8D,0x64f7 }
    /* +0x8eb60f */ __asm { XOR R8D,R9D }
    /* +0x8eb612 */ __asm { MOV ECX,R10D }
    /* +0x8eb615 */ __asm { ROL R8W,CL }
    /* +0x8eb619 */ __asm { IMUL R8D,R8D,0xb3b }
    /* +0x8eb620 */ __asm { MOVZX R8D,R8W }
    /* +0x8eb624 */ __asm { CMP EAX,R8D }
    /* +0x8eb627 */ __asm { NOP }
    /* +0x8eb628 */ __asm { NOP }
    /* +0x8eb629 */ __asm { NOP }
    /* +0x8eb62a */ __asm { NOP }
    /* +0x8eb62b */ __asm { NOP }
    /* +0x8eb62c */ __asm { NOP }
    /* +0x8eb62d */ __asm { NOP }
    /* +0x8eb62e */ __asm { PUSHFQ }
    /* +0x8eb62f */ __asm { POP R9 }
    /* +0x8eb631 */ __asm { TEST R9D,0x100 }
    /* +0x8eb638 */ __asm { NOP }
    /* +0x8eb639 */ __asm { NOP }
    /* +0x8eb63a */ __asm { NOP }
    /* +0x8eb63b */ __asm { NOP }
    /* +0x8eb63c */ __asm { NOP }
    /* +0x8eb63d */ __asm { NOP }
    /* +0x8eb63e */ __asm { NOP }
    /* +0x8eb63f */ __asm { NOP }
    /* +0x8eb640 */ __asm { CMP R11D,0x45f2e4 }
    /* +0x8eb647 */ __asm { JA 0x7fffa505b838 }
    /* +0x8eb64d */ __asm { MOV AX,0x2a33 }
    /* +0x8eb651 */ __asm { XOR EAX,dword ptr [RBP + 0x3a8] }
    /* +0x8eb657 */ __asm { MOV R8D,0x52d8 }
    /* +0x8eb65d */ __asm { SUB R8D,EAX }
    /* +0x8eb660 */ __asm { MOVZX EDX,R8W }
    /* +0x8eb664 */ __asm { MOV R8,qword ptr GS:[RDX] }
    /* +0x8eb668 */ __asm { MOV R8,qword ptr [R8 + 0x238] }
    /* +0x8eb66f */ __asm { ROL R8,0x33 }
    /* +0x8eb673 */ __asm { ADD R8,0x10506838 }
    /* +0x8eb67a */ __asm { MOV RDX,0x6a1af27581352988 }
    /* +0x8eb684 */ __asm { CMP R8,RDX }
    /* +0x8eb687 */ __asm { JNZ 0x7fffa505b68c }
    /* +0x8eb689 */ __asm { CMPSB RDI,RSI }
    /* +0x8eb68a */ __asm { CMPSB RDI,RSI }
    /* +0x8eb68b */ __asm { LEAVE }
    /* +0x8eb68c */ __asm { MOV EAX,0xf9e3f2c7 }
    /* +0x8eb691 */ __asm { MOV R8,0x0 }
    /* +0x8eb698 */ __asm { NOP }
    /* +0x8eb69a */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x8eb6a1 */ __asm { MOV R8,-0x6d49e7de0d775c74 }
    /* +0x8eb6ab */ __asm { CMP RAX,R8 }
    /* +0x8eb6ae */ __asm { NOP }
    /* +0x8eb6af */ __asm { NOP }
    /* +0x8eb6b0 */ __asm { NOP }
    /* +0x8eb6b1 */ __asm { NOP }
    /* +0x8eb6b2 */ __asm { TEST uint8_t ptr [RAX + -0x79e5f087],0x1 }
    /* +0x8eb6b9 */ __asm { JNZ 0x7fffa505b838 }
    /* +0x8eb6bf */ __asm { PXOR XMM1,XMM1 }
    /* +0x8eb6c3 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM1 }
    /* +0x8eb6c8 */ __asm { MOV dword ptr [RBP + 0x420],0x2a0e7d87 }
    /* +0x8eb6d2 */ __asm { MOV EAX,dword ptr [RBP + 0x420] }
    /* +0x8eb6d8 */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0x8eb6df */ __asm { PUSHFQ }
    /* +0x8eb6e0 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x8eb6e8 */ __asm { POPFQ }
    /* +0x8eb6e9 */ __asm { MOV dword ptr [RBP + 0x420],0x73716a7f }
    /* +0x8eb6f3 */ __asm { MOV EAX,dword ptr [RBP + 0x420] }
    /* +0x8eb6f9 */ __asm { CMP EAX,0x4bc64cd8 }
    /* +0x8eb6fe */ __asm { JBE 0x7fffa505c52d }
    /* +0x8eb704 */ __asm { MOV AX,0xb93b }
    /* +0x8eb708 */ __asm { IMUL EAX,EAX,0x47e7 }
    /* +0x8eb70e */ __asm { NOT EAX }
    /* +0x8eb710 */ __asm { MOV R10,qword ptr [RBP + 0x68] }
    /* +0x8eb714 */ __asm { SUB EAX,R10D }
    /* +0x8eb717 */ __asm { MOV R9,qword ptr [RBP + 0x3a8] }
    /* +0x8eb71e */ __asm { MOV ECX,R9D }
    /* +0x8eb721 */ __asm { ROR AX,CL }
    /* +0x8eb724 */ __asm { MOVZX EDX,AX }
    /* +0x8eb727 */ __asm { MOV R8,qword ptr GS:[RDX] }
    /* +0x8eb72b */ __asm { MOV R8,qword ptr [R8 + 0x18] }
    /* +0x8eb72f */ __asm { MOV AX,0x6390 }
    /* +0x8eb733 */ __asm { IMUL EAX,dword ptr [RBP + 0x300] }
    /* +0x8eb73a */ __asm { ROL AX,0x5 }
    /* +0x8eb73e */ __asm { ADD EAX,0xfffffaa7 }
    /* +0x8eb743 */ __asm { MOV ECX,R10D }
    /* +0x8eb746 */ __asm { ROL AX,CL }
    /* +0x8eb749 */ __asm { MOVZX EDX,AX }
    /* +0x8eb74c */ __asm { MOV R11,-0x690e2bc58118042f }
    /* +0x8eb756 */ __asm { ADD R8,qword ptr GS:[RDX] }
    /* +0x8eb75a */ __asm { MOV EDX,0xe8855e82 }
    /* +0x8eb75f */ __asm { ADD EDX,R10D }
    /* +0x8eb762 */ __asm { ADD EDX,0xfda822cd }
    /* +0x8eb768 */ __asm { ROL EDX,0xd }
    /* +0x8eb76b */ __asm { MOV ECX,R9D }
    /* +0x8eb76e */ __asm { ROL EDX,CL }
    /* +0x8eb770 */ __asm { ADD RDX,R8 }
    /* +0x8eb773 */ __asm { OR R9,0x1 }
    /* +0x8eb777 */ __asm { SUB R11,R10 }
    /* +0x8eb77a */ __asm { MOV EAX,0xedf4f45f }
    /* +0x8eb77f */ __asm { XOR RAX,R11 }
    /* +0x8eb782 */ __asm { IMUL RAX,R9 }
    /* +0x8eb786 */ __asm { CMP RDX,RAX }
    /* +0x8eb789 */ __asm { JNZ 0x7fffa505b78c }
    /* +0x8eb78b */ __asm { INSD RDI,DX }
    /* +0x8eb78c */ __asm { LEA RAX,[0x7fffa47bffc1] }
    /* +0x8eb793 */ __asm { MOV R8,RAX }
    /* +0x8eb796 */ __asm { ROL R8,0x39 }
    /* +0x8eb79a */ __asm { XOR R8,0x65f3e4df }
    /* +0x8eb7a1 */ __asm { MOV RDX,-0x324de67ca64643b7 }
    /* +0x8eb7ab */ __asm { ADD RDX,qword ptr [RBP + 0x3a8] }
    /* +0x8eb7b2 */ __asm { MOV R11D,0x511861a9 }
    /* +0x8eb7b8 */ __asm { SUB R11,RDX }
    /* +0x8eb7bb */ __asm { IMUL R11,R8 }
    /* +0x8eb7bf */ __asm { MOV R8,-0x51024d89ae2cfeb }
    /* +0x8eb7c9 */ __asm { CMP R11,R8 }
    /* +0x8eb7cc */ __asm { NOP }
    /* +0x8eb7cd */ __asm { NOP }
    /* +0x8eb7ce */ __asm { NOP }
    /* +0x8eb7cf */ __asm { NOP }
    /* +0x8eb7d0 */ __asm { MOV R8D,0x8e2d8140 }
    /* +0x8eb7d6 */ __asm { MOV qword ptr [RBP + 0x420],R11 }
    /* +0x8eb7dd */ __asm { MOV EAX,dword ptr [RAX + -0x3af9] }
    /* +0x8eb7e3 */ __asm { MOV R11W,0x2cb4 }
    /* +0x8eb7e8 */ __asm { MOV CX,0x27bf }
    /* +0x8eb7ec */ __asm { MOV R9,qword ptr [RBP + 0x68] }
    /* +0x8eb7f0 */ __asm { XOR ECX,R9D }
    /* +0x8eb7f3 */ __asm { IMUL R10D,ECX,0x8d }
    /* +0x8eb7fa */ __asm { MOV RCX,qword ptr [RBP + 0x3a8] }
    /* +0x8eb801 */ __asm { ROL R10W,CL }
    /* +0x8eb805 */ __asm { XOR R8D,R9D }
    /* +0x8eb808 */ __asm { ROL R8D,CL }
    /* +0x8eb80b */ __asm { SUB R11D,ECX }
    /* +0x8eb80e */ __asm { MOVZX EDX,R10W }
    /* +0x8eb812 */ __asm { IMUL R11D,R11D,-0x78e9 }
    /* +0x8eb819 */ __asm { XOR R11D,0x5d1f }
    /* +0x8eb820 */ __asm { MOV ECX,R9D }
    /* +0x8eb823 */ __asm { ROL R11W,CL }
    /* +0x8eb827 */ __asm { MOVZX R9D,R11W }
    /* +0x8eb82b */ __asm { ROL R8D,0xe }
    /* +0x8eb82f */ __asm { MOVSXD R10,R8D }
    /* +0x8eb832 */ __asm { LEA R8,[RBP + 0x70] }
    /* +0x8eb836 */ __asm { SYSCALL }
    /* +0x8eb838 */ __asm { MOV EDX,0xea774348 }
    /* +0x8eb83d */ __asm { XOR EDX,dword ptr [RBP + 0x68] }
    /* +0x8eb840 */ __asm { MOV RCX,qword ptr [RBP + 0x3a8] }
    /* +0x8eb847 */ __asm { ROR EDX,CL }
    /* +0x8eb849 */ __asm { ROL EDX,0x7 }
    /* +0x8eb84c */ __asm { LEA RAX,[0x7fffa478b893] }
    /* +0x8eb853 */ __asm { MOV R8,RAX }
    /* +0x8eb856 */ __asm { NOT R8 }
    /* +0x8eb859 */ __asm { SUB R8,RDX }
    /* +0x8eb85c */ __asm { MOV RDX,0x3bd46ac5b6086008 }
    /* +0x8eb866 */ __asm { CMP R8,RDX }
    /* +0x8eb869 */ __asm { JZ 0x7fffa505c535 }
    /* +0x8eb86f */ __asm { MOV qword ptr [RBP + 0x70],R8 }
    /* +0x8eb873 */ __asm { MOV EAX,dword ptr [RAX + -0x7263] }
    /* +0x8eb879 */ __asm { JMP 0x7fffa505c463 }
    /* +0x8eb87e */ __asm { MOV EAX,0x7666af53 }
    /* +0x8eb883 */ __asm { MOV R8,-0x69c91d2abcbe5413 }
    /* +0x8eb88d */ __asm { CMP RAX,R8 }
    /* +0x8eb890 */ __asm { JZ 0x7fffa505c545 }
    /* +0x8eb896 */ __asm { MOV EDX,0x5b8a4fc4 }
    /* +0x8eb89b */ __asm { NOT EDX }
    /* +0x8eb89d */ __asm { MOV R8D,0xbfe4a185 }
    /* +0x8eb8a3 */ __asm { IMUL R11D,R8D,0x65eb329 }
    /* +0x8eb8aa */ __asm { ROL R11D,0x1c }
    /* +0x8eb8ae */ __asm { MOV R9,qword ptr [RBP + 0x3a8] }
    /* +0x8eb8b5 */ __asm { ADD EDX,R9D }
    /* +0x8eb8b8 */ __asm { MOV RCX,qword ptr [RBP + 0x68] }
    /* +0x8eb8bc */ __asm { ROL EDX,CL }
    /* +0x8eb8be */ __asm { ADD EDX,0x3051cbe0 }
    /* +0x8eb8c4 */ __asm { MOV R8,qword ptr [RAX + 0x99750b5] }
    /* +0x8eb8cb */ __asm { MOV RAX,R8 }
    /* +0x8eb8ce */ __asm { SAR RAX,0x3f }
    /* +0x8eb8d2 */ __asm { NOT R11D }
    /* +0x8eb8d5 */ __asm { ADD R11D,R9D }
    /* +0x8eb8d8 */ __asm { MOVSXD R10,R11D }
    /* +0x8eb8db */ __asm { XOR R11D,R11D }
    /* +0x8eb8de */ __asm { CMP RDX,R10 }
    /* +0x8eb8e1 */ __asm { CMOVA R11,RAX }
    /* +0x8eb8e5 */ __asm { MOV RAX,R11 }
    /* +0x8eb8e8 */ __asm { MOV RCX,0xf0c127c653ae27 }
    /* +0x8eb8f2 */ __asm { MUL RCX }
    /* +0x8eb8f5 */ __asm { MOV R10,RDX }
    /* +0x8eb8f8 */ __asm { MOV R9,RAX }
    /* +0x8eb8fb */ __asm { MOV RAX,R8 }
    /* +0x8eb8fe */ __asm { MUL RCX }
    /* +0x8eb901 */ __asm { MOV RCX,RDX }
    /* +0x8eb904 */ __asm { ADD RCX,R9 }
    /* +0x8eb907 */ __asm { ADC R10D,0x0 }
    /* +0x8eb90b */ __asm { MOV EDX,0x146a01b }
    /* +0x8eb910 */ __asm { MOV RAX,R8 }
    /* +0x8eb913 */ __asm { MUL RDX }
    /* +0x8eb916 */ __asm { ADD RAX,RCX }
    /* +0x8eb919 */ __asm { ADC EDX,R10D }
    /* +0x8eb91c */ __asm { ADD R9D,R11D }
    /* +0x8eb91f */ __asm { ADD R9D,EDX }
    /* +0x8eb922 */ __asm { TEST R9B,0x1 }
    /* +0x8eb926 */ __asm { JZ 0x7fffa505bf77 }
    /* +0x8eb92c */ __asm { LEA RAX,[0x7fffa47c0cea] }
    /* +0x8eb933 */ __asm { MOV R8,-0x44c0615d0accb9aa }
    /* +0x8eb93d */ __asm { CMP RAX,R8 }
    /* +0x8eb940 */ __asm { JZ 0x7fffa505c54d }
    /* +0x8eb946 */ __asm { MOV qword ptr [RBP + 0x70],R8 }
    /* +0x8eb94a */ __asm { MOV R8D,0x71c0597e }
    /* +0x8eb950 */ __asm { SUB R8D,dword ptr [RBP + 0x68] }
    /* +0x8eb954 */ __asm { ROR R8D,0x1 }
    /* +0x8eb957 */ __asm { MOV RCX,qword ptr [RBP + 0x3a8] }
    /* +0x8eb95e */ __asm { ROL R8D,CL }
    /* +0x8eb961 */ __asm { MOVSXD R8,R8D }
}


// ============================================================================
// Function : Unwind@7fffa505c5f0  |  RVA: 0x8ec5f0  |  Size: 304 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505c5f0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  if (*(int64_t *)(param_2 + 0x2e8) != 0) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x428) & 0x1f;
    (*(code *)(&UNK_7fffa508cb00 + (int)~(0x135fe0 << bVar1 | 0x135fe0U >> 0x20 - bVar1)))
              (*(int64_t *)(param_2 + 0x2e8));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa505c720  |  RVA: 0x8ec720  |  Size: 340 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505c720(uint64_t param_1,int64_t param_2)

{
  uint64_t in_RAX;
  uint16_t uVar1;
  uint32_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x4f8)) {
    uVar2 = (uint32_t)*(uint64_t *)(param_2 + 0x428) ^
            (int)CONCAT62((int6)((uint64_t)in_RAX >> 0x10),0x39e7) *
            ((uint32_t)*(uint64_t *)(param_2 + 0x1f0) | 1) - 0x3959;
    uVar1 = (uint16_t)uVar2 >> 1 | (uint16_t)((uVar2 & 1) != 0) << 0xf;
    (*(code *)((int64_t)(short)uVar1 + 0x7fffa56897be))
              (CONCAT22((short)(uVar2 >> 0x10),uVar1),0x7fffa56897be,
               *(uint64_t *)(param_2 + 0x4e0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x4e0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa505c880  |  RVA: 0x8ec880  |  Size: 397 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa505c880(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x4d8)) {
    uVar1 = *(uint64_t *)(param_2 + 0x4c0);
    uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0xe8) ^ 0xa7d58147;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x428) & 0x1f;
    uVar3 = uVar3 << bVar2 | uVar3 >> 0x20 - bVar2;
    (*(code *)((int64_t)(int)(uVar3 << 0x12 | uVar3 >> 0xe) + 0x7fffa5696170))
              (*(uint64_t *)(param_2 + 0x428),uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  if (7 < *(uint64_t *)(param_2 + 0x2b8)) {
    uVar1 = *(uint64_t *)(param_2 + 0x2a0);
    (*(code *)((int64_t)
               (int)((((uint32_t)*(uint64_t *)(param_2 + 0x428) ^ 0x1fcecf5b) -
                     (int)*(uint64_t *)(param_2 + 0xe8)) + 0x24dd454) + 0x7fffa5696edb))
              (*(uint64_t *)(param_2 + 0x428),uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa505ca10  |  RVA: 0x8eca10  |  Size: 1 bytes
// Callers  : FUN_7fffa517e320@0xa0e320
// Callees  : none
// ============================================================================
void FUN_7fffa505ca10(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa505ca20  |  RVA: 0x8eca20  |  Size: 16 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t
FUN_7fffa505ca20(uint8_t *param_1,uint8_t param_2,int64_t param_3,uint64_t param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}


// ============================================================================
// Function : FUN_7fffa505ca30  |  RVA: 0x8eca30  |  Size: 205 bytes
// Callers  : FUN_7fffa4a91118@0x321118
// Callees  : FUN_7fffa55f0084@0xe80084, FUN_7fffa54e57f4@0xd757f4, FUN_7fffa522524c@0xab524c
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa505ca30(uint32_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  lVar2 = FUN_7fffa522524c(param_1);
  if (lVar2 != -1) {
    if (((param_1 == 1) && ((*(uint8_t *)(_DAT_7fffa4782180 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(uint8_t *)(_DAT_7fffa4782180 + 0x80) & 1) != 0)))) {
      lVar2 = FUN_7fffa522524c();
      lVar3 = FUN_7fffa522524c(1);
      if (lVar3 == lVar2) goto LAB_7fffa505ca52;
    }
    uVar4 = FUN_7fffa522524c(param_1);
    iVar1 = (*(code *)&DAT_7ff84ea57010)(uVar4);
    if (iVar1 == 0) {
      iVar1 = (*(code *)&DAT_7ff84ea18640)();
      goto LAB_7fffa505cab0;
    }
  }
LAB_7fffa505ca52:
  iVar1 = 0;
LAB_7fffa505cab0:
  FUN_7fffa55f0084(param_1);
  *(uint8_t *)
   (*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)param_1 >> 6) * 8) + 0x38 +
   (uint64_t)(param_1 & 0x3f) * 0x48) = 0;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_7fffa54e57f4(iVar1,param_2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


// ============================================================================
// Function : FUN_7fffa505cb00  |  RVA: 0x8ecb00  |  Size: 15 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa505cb00(void)

{
  uint32_t in_EAX;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0x5e8990e8,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa505cb10  |  RVA: 0x8ecb10  |  Size: 120325 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa505cb10(void) {
    /* +0x8ecb10 */ __asm { PUSH RBP }
    /* +0x8ecb11 */ __asm { PUSH R15 }
    /* +0x8ecb13 */ __asm { PUSH RDI }
    /* +0x8ecb14 */ __asm { PUSH RSI }
    /* +0x8ecb15 */ __asm { PUSH R13 }
    /* +0x8ecb17 */ __asm { PUSH R12 }
    /* +0x8ecb19 */ __asm { PUSH RBX }
    /* +0x8ecb1a */ __asm { PUSH R14 }
    /* +0x8ecb1c */ __asm { SUB RSP,0x638 }
    /* +0x8ecb23 */ __asm { MOVDQA xmmword ptr [RSP + 0x620],XMM9 }
    /* +0x8ecb2d */ __asm { MOVDQA xmmword ptr [RSP + 0x610],XMM13 }
    /* +0x8ecb37 */ __asm { MOVDQA xmmword ptr [RSP + 0x600],XMM12 }
    /* +0x8ecb41 */ __asm { MOVDQA xmmword ptr [RSP + 0x5f0],XMM8 }
    /* +0x8ecb4b */ __asm { MOVDQA xmmword ptr [RSP + 0x5e0],XMM10 }
    /* +0x8ecb55 */ __asm { MOVDQA xmmword ptr [RSP + 0x5d0],XMM15 }
    /* +0x8ecb5f */ __asm { MOVDQA xmmword ptr [RSP + 0x5c0],XMM14 }
    /* +0x8ecb69 */ __asm { MOVDQA xmmword ptr [RSP + 0x5b0],XMM11 }
    /* +0x8ecb73 */ __asm { MOVDQA xmmword ptr [RSP + 0x5a0],XMM7 }
    /* +0x8ecb7c */ __asm { MOVDQA xmmword ptr [RSP + 0x590],XMM6 }
    /* +0x8ecb85 */ __asm { MOV qword ptr [RSP + 0x578],RCX }
    /* +0x8ecb8d */ __asm { MOV qword ptr [RSP + 0x4f8],RDX }
    /* +0x8ecb95 */ __asm { MOV R12,R10 }
    /* +0x8ecb98 */ __asm { MOV R15,qword ptr [RSP + 0x6a0] }
    /* +0x8ecba0 */ __asm { MOV R9D,dword ptr [R10] }
    /* +0x8ecba3 */ __asm { MOV RDX,R11 }
    /* +0x8ecba6 */ __asm { SHR RDX,0x8 }
    /* +0x8ecbaa */ __asm { XOR RDX,R11 }
    /* +0x8ecbad */ __asm { MOV R10,RDX }
    /* +0x8ecbb0 */ __asm { SHR R10,0x10 }
    /* +0x8ecbb4 */ __asm { XOR R10,RDX }
    /* +0x8ecbb7 */ __asm { MOV RCX,R10 }
    /* +0x8ecbba */ __asm { SHR RCX,0x20 }
    /* +0x8ecbbe */ __asm { XOR RCX,R10 }
    /* +0x8ecbc1 */ __asm { MOV RDX,RCX }
    /* +0x8ecbc4 */ __asm { SHL RDX,0x33 }
    /* +0x8ecbc8 */ __asm { XOR RDX,RCX }
    /* +0x8ecbcb */ __asm { SHL RCX,0x21 }
    /* +0x8ecbcf */ __asm { ADD RCX,RDX }
    /* +0x8ecbd2 */ __asm { MOV qword ptr [RSP + 0x500],RCX }
    /* +0x8ecbda */ __asm { TEST R9D,R9D }
    /* +0x8ecbdd */ __asm { MOV qword ptr [RSP + 0x4d0],R12 }
    /* +0x8ecbe5 */ __asm { MOV qword ptr [RSP + 0x4c0],RAX }
    /* +0x8ecbed */ __asm { JLE 0x7fffa505ce1f }
    /* +0x8ecbf3 */ __asm { CMP R9D,0x1 }
    /* +0x8ecbf7 */ __asm { SETZ R10B }
    /* +0x8ecbfb */ __asm { MOV R9D,0xe5a84865 }
    /* +0x8ecc01 */ __asm { MOV R11D,0xc66c4675 }
    /* +0x8ecc07 */ __asm { MOV EDX,R15D }
    /* +0x8ecc0a */ __asm { OR EDX,0x1 }
    /* +0x8ecc0d */ __asm { ADD R11D,R15D }
    /* +0x8ecc10 */ __asm { NOT R11D }
    /* +0x8ecc13 */ __asm { IMUL EDX,R9D }
    /* +0x8ecc17 */ __asm { ADD EDX,0x5c60d44c }
    /* +0x8ecc1d */ __asm { ROL EDX,0x19 }
    /* +0x8ecc20 */ __asm { CMP RDX,R11 }
    /* +0x8ecc23 */ __asm { SETGE R9B }
    /* +0x8ecc27 */ __asm { XOR R11D,R11D }
    /* +0x8ecc2a */ __asm { OR R9B,R10B }
    /* +0x8ecc2d */ __asm { JZ 0x7fffa505ce5f }
    /* +0x8ecc33 */ __asm { MOV R9W,0x300c }
    /* +0x8ecc38 */ __asm { MOV EBP,0xcb7f7bf3 }
    /* +0x8ecc3d */ __asm { IMUL R9D,R9D,-0x23fd }
    /* +0x8ecc44 */ __asm { ADD R9D,0x1fdc }
    /* +0x8ecc4b */ __asm { MOVZX EBX,R9W }
    /* +0x8ecc4f */ __asm { MOV R13W,0x33a8 }
    /* +0x8ecc54 */ __asm { XOR R13D,0x5ae8 }
    /* +0x8ecc5b */ __asm { MOV R9D,0x1cbf479c }
    /* +0x8ecc61 */ __asm { IMUL EAX,R9D,-0x7e5b3907 }
    /* +0x8ecc68 */ __asm { MOV ECX,R15D }
    /* +0x8ecc6b */ __asm { ROR EAX,CL }
    /* +0x8ecc6d */ __asm { MOV EDI,dword ptr [R12 + 0x108] }
    /* +0x8ecc75 */ __asm { CMP EDI,EBX }
    /* +0x8ecc77 */ __asm { SETNZ R9B }
    /* +0x8ecc7b */ __asm { MOV SI,0x6840 }
    /* +0x8ecc7f */ __asm { MOVZX R10D,uint8_t ptr [R12 + 0xec] }
    /* +0x8ecc88 */ __asm { MOV R8D,0x1 }
    /* +0x8ecc8e */ __asm { MOV ECX,R10D }
    /* +0x8ecc91 */ __asm { SHL R8,CL }
    /* +0x8ecc94 */ __asm { ADD EBP,R15D }
    /* +0x8ecc97 */ __asm { XOR EBP,0x78ed3c07 }
    /* +0x8ecc9d */ __asm { MOV RDX,qword ptr [R12 + 0x2f8] }
    /* +0x8ecca5 */ __asm { DEC RDX }
    /* +0x8ecca8 */ __asm { CMP RDX,R8 }
    /* +0x8eccab */ __asm { SETBE uint8_t ptr [RSP + 0x558] }
    /* +0x8eccb3 */ __asm { MOV R8D,dword ptr [R12 + 0x298] }
    /* +0x8eccbb */ __asm { XOR ECX,ECX }
    /* +0x8eccbd */ __asm { XOR R14D,R14D }
    /* +0x8eccc0 */ __asm { TEST R8D,R8D }
    /* +0x8eccc3 */ __asm { SETNZ CL }
    /* +0x8eccc6 */ __asm { SETNS R14B }
    /* +0x8eccca */ __asm { CMP RBP,0x2b7f2fb5 }
    /* +0x8eccd1 */ __asm { CMOVZ R14D,ECX }
    /* +0x8eccd5 */ __asm { XOR ECX,ECX }
    /* +0x8eccd7 */ __asm { CMP R8D,0xffff }
    /* +0x8eccde */ __asm { SETGE CL }
    /* +0x8ecce1 */ __asm { MOVZX EBP,R14B }
    /* +0x8ecce5 */ __asm { ADD R13D,R15D }
    /* +0x8ecce8 */ __asm { MOVZX R13D,R13W }
    /* +0x8eccec */ __asm { ADD ESI,R15D }
    /* +0x8eccef */ __asm { ROL SI,0x3 }
    /* +0x8eccf3 */ __asm { MOVZX ESI,SI }
    /* +0x8eccf6 */ __asm { XOR R14D,R14D }
    /* +0x8eccf9 */ __asm { CMP R8D,ESI }
    /* +0x8eccfc */ __asm { SETA R14B }
    /* +0x8ecd00 */ __asm { CMP RAX,-0x6af1a145 }
    /* +0x8ecd06 */ __asm { CMOVNZ ECX,R14D }
    /* +0x8ecd0a */ __asm { CMP R13D,R8D }
    /* +0x8ecd0d */ __asm { MOVZX EAX,CL }
    /* +0x8ecd10 */ __asm { ADC EAX,EBP }
    /* +0x8ecd12 */ __asm { CMP dword ptr [R12 + 0x110],0x0 }
    /* +0x8ecd1b */ __asm { CMOVNZ EAX,R11D }
    /* +0x8ecd1f */ __asm { MOV R13D,dword ptr [R12 + 0x10c] }
    /* +0x8ecd27 */ __asm { CMP EDI,EBX }
    /* +0x8ecd29 */ __asm { JZ 0x7fffa505cda4 }
    /* +0x8ecd2b */ __asm { MOV EDI,0x827a7451 }
    /* +0x8ecd30 */ __asm { MOV EBP,0x2b7dcf5f }
    /* +0x8ecd35 */ __asm { ADD EBP,0x1b95a5b2 }
    /* +0x8ecd3b */ __asm { XOR R12D,R12D }
    /* +0x8ecd3e */ __asm { CMP RDX,0x100 }
    /* +0x8ecd45 */ __asm { SETNC R12B }
    /* +0x8ecd49 */ __asm { MOV R11D,R12D }
    /* +0x8ecd4c */ __asm { NEG R11D }
    /* +0x8ecd4f */ __asm { MOV ESI,0xffffffff }
    /* +0x8ecd54 */ __asm { DEC RSI }
    /* +0x8ecd57 */ __asm { XOR EBX,EBX }
    /* +0x8ecd59 */ __asm { CMP RDX,RSI }
    /* +0x8ecd5c */ __asm { SETA BL }
    /* +0x8ecd5f */ __asm { MOV ESI,0xfff9d7 }
    /* +0x8ecd64 */ __asm { XOR ESI,0xc346d914 }
    /* +0x8ecd6a */ __asm { NOT EDI }
    /* +0x8ecd6c */ __asm { MOV RCX,qword ptr [RSP + 0x6a0] }
    /* +0x8ecd74 */ __asm { ADD EDI,ECX }
    /* +0x8ecd76 */ __asm { IMUL EDI,EDI,0x4a6f17bf }
    /* +0x8ecd7c */ __asm { MOVSXD RDI,EDI }
    /* +0x8ecd7f */ __asm { CMP RDI,-0x5fb9b8e2 }
    /* +0x8ecd86 */ __asm { CMOVNZ R11D,R12D }
    /* +0x8ecd8a */ __asm { ROR EBP,CL }
    /* +0x8ecd8c */ __asm { ROL EBP,0x1d }
    /* +0x8ecd8f */ __asm { XOR ECX,ECX }
    /* +0x8ecd91 */ __asm { CMP RSI,RBP }
    /* +0x8ecd94 */ __asm { SETGE CL }
    /* +0x8ecd97 */ __asm { OR RCX,0x100fe }
    /* +0x8ecd9e */ __asm { CMP RCX,RDX }
    /* +0x8ecda1 */ __asm { ADC R11D,EBX }
    /* +0x8ecda4 */ __asm { XOR ECX,ECX }
    /* +0x8ecda6 */ __asm { TEST R13D,R13D }
    /* +0x8ecda9 */ __asm { SETG R12B }
    /* +0x8ecdad */ __asm { MOV RSI,-0x46 }
    /* +0x8ecdb4 */ __asm { CMP qword ptr [RSP + 0x4c0],0x12 }
    /* +0x8ecdbd */ __asm { JC 0x7fffa507a18d }
    /* +0x8ecdc3 */ __asm { AND R9B,uint8_t ptr [RSP + 0x558] }
    /* +0x8ecdcb */ __asm { MOV EBX,R11D }
    /* +0x8ecdce */ __asm { SHL EBX,0x6 }
    /* +0x8ecdd1 */ __asm { MOV CL,R12B }
    /* +0x8ecdd4 */ __asm { LEA ECX,[RAX + RCX*0x4] }
    /* +0x8ecdd7 */ __asm { MOVZX EDI,R9B }
    /* +0x8ecddb */ __asm { SHL EDI,0x5 }
    /* +0x8ecdde */ __asm { OR EDI,EBX }
    /* +0x8ecde0 */ __asm { OR EDI,ECX }
    /* +0x8ecde2 */ __asm { MOV CX,0xdcfd }
    /* +0x8ecde6 */ __asm { IMUL EBX,ECX,-0x2055 }
    /* +0x8ecdec */ __asm { MOV RCX,qword ptr [RSP + 0x6a0] }
    /* +0x8ecdf4 */ __asm { ROR BX,CL }
    /* +0x8ecdf7 */ __asm { NOT EBX }
    /* +0x8ecdf9 */ __asm { MOVZX EBX,BX }
    /* +0x8ecdfc */ __asm { MOV RSI,qword ptr [RSP + 0x4d0] }
    /* +0x8ece04 */ __asm { CMP dword ptr [RSI + 0xe8],EBX }
    /* +0x8ece0a */ __asm { JZ 0x7fffa505d307 }
    /* +0x8ece10 */ __asm { XOR ECX,ECX }
    /* +0x8ece12 */ __asm { MOV R13,qword ptr [RSP + 0x500] }
    /* +0x8ece1a */ __asm { JMP 0x7fffa505d325 }
    /* +0x8ece1f */ __asm { MOV R10W,0x45c0 }
    /* +0x8ece24 */ __asm { XOR R10D,0x45c0 }
    /* +0x8ece2b */ __asm { ROL R10W,0x9 }
    /* +0x8ece30 */ __asm { MOV ECX,R15D }
    /* +0x8ece33 */ __asm { ROL R10W,CL }
    /* +0x8ece37 */ __asm { MOVZX ECX,R10W }
    /* +0x8ece3b */ __asm { MOV RSI,-0x3c }
    /* +0x8ece42 */ __asm { CMP R9D,ECX }
    /* +0x8ece45 */ __asm { JZ 0x7fffa507a18d }
    /* +0x8ece4b */ __asm { XOR ECX,ECX }
    /* +0x8ece4d */ __asm { MOV R8,qword ptr [RSP + 0x578] }
    /* +0x8ece55 */ __asm { MOV R12,qword ptr [RSP + 0x4d0] }
    /* +0x8ece5d */ __asm { JMP 0x7fffa505ce69 }
    /* +0x8ece5f */ __asm { XOR ECX,ECX }
    /* +0x8ece61 */ __asm { MOV R8,qword ptr [RSP + 0x578] }
    /* +0x8ece69 */ __asm { MOV RAX,qword ptr [RSP + 0x500] }
    /* +0x8ece71 */ __asm { MOV R10,qword ptr [RSP + 0x4f8] }
    /* +0x8ece79 */ __asm { ROL R8,0x2b }
    /* +0x8ece7d */ __asm { ADD R8,-0x568f61a0 }
    /* +0x8ece84 */ __asm { JZ 0x7fffa505cf6f }
    /* +0x8ece8a */ __asm { MOV qword ptr [RSP + 0x108],RCX }
    /* +0x8ece92 */ __asm { LEA RDX,[R12 + 0xc90] }
    /* +0x8ece9a */ __asm { MOV qword ptr [RSP + 0x448],RDX }
    /* +0x8ecea2 */ __asm { MOV R11,qword ptr [R12 + 0xc90] }
    /* +0x8eceaa */ __asm { CMP R10,R11 }
    /* +0x8ecead */ __asm { SETNZ R9B }
    /* +0x8eceb1 */ __asm { CMP dword ptr [R12 + 0xd18],0x0 }
    /* +0x8eceba */ __asm { MOV RSI,R10 }
    /* +0x8ecebd */ __asm { SETNZ R10B }
    /* +0x8ecec1 */ __asm { OR R10B,R9B }
    /* +0x8ecec4 */ __asm { MOV qword ptr [RSP + 0x578],R8 }
    /* +0x8ececc */ __asm { MOV qword ptr [RSP + 0x500],RAX }
    /* +0x8eced4 */ __asm { JZ 0x7fffa505cf77 }
    /* +0x8eceda */ __asm { MOV ECX,0x9c441fc1 }
    /* +0x8ecedf */ __asm { MOV DX,0xa651 }
    /* +0x8ecee3 */ __asm { MOV R9D,dword ptr [R12 + 0xca8] }
    /* +0x8eceeb */ __asm { MOV dword ptr [R12 + 0xcac],R9D }
    /* +0x8ecef3 */ __asm { MOV RAX,qword ptr [RSP + 0x6a0] }
    /* +0x8ecefb */ __asm { SUB EDX,EAX }
    /* +0x8ecefd */ __asm { XOR EDX,0xe9a }
    /* +0x8ecf03 */ __asm { MOVZX R8D,DX }
    /* +0x8ecf07 */ __asm { OR EAX,0x1 }
    /* +0x8ecf0a */ __asm { IMUL EAX,ECX }
    /* +0x8ecf0d */ __asm { NOT EAX }
    /* +0x8ecf0f */ __asm { MOV RDX,qword ptr [R12 + 0xc98] }
    /* +0x8ecf17 */ __asm { SUB R11,RDX }
    /* +0x8ecf1a */ __asm { MOV RCX,R11 }
    /* +0x8ecf1d */ __asm { NEG RCX }
    /* +0x8ecf20 */ __asm { MOV EDI,R11D }
    /* +0x8ecf23 */ __asm { SUB EDI,R9D }
    /* +0x8ecf26 */ __asm { XOR EBP,EBP }
    /* +0x8ecf28 */ __asm { CMP RAX,0x68e29d4f }
    /* +0x8ecf2e */ __asm { MOV qword ptr [R12 + 0xca0],RDX }
    /* +0x8ecf36 */ __asm { CMOVNZ RBP,RCX }
    /* +0x8ecf3a */ __asm { MOV dword ptr [R12 + 0xca8],R11D }
    /* +0x8ecf42 */ __asm { ADD RBP,RSI }
    /* +0x8ecf45 */ __asm { MOV qword ptr [R12 + 0xc98],RBP }
    /* +0x8ecf4d */ __asm { CMP EDI,R8D }
    /* +0x8ecf50 */ __asm { JNC 0x7fffa505cf5d }
    /* +0x8ecf52 */ __asm { MOV dword ptr [R12 + 0xcac],R11D }
    /* +0x8ecf5a */ __asm { MOV R9D,R11D }
    /* +0x8ecf5d */ __asm { MOV R8,qword ptr [RSP + 0x578] }
    /* +0x8ecf65 */ __asm { MOV RAX,qword ptr [RSP + 0x500] }
    /* +0x8ecf6d */ __asm { JMP 0x7fffa505cfa1 }
    /* +0x8ecf6f */ __asm { MOV RSI,RCX }
    /* +0x8ecf72 */ __asm { JMP 0x7fffa507a18d }
    /* +0x8ecf77 */ __asm { MOV CX,0xc1c2 }
    /* +0x8ecf7b */ __asm { MOV R11,qword ptr [RSP + 0x6a0] }
    /* +0x8ecf83 */ __asm { SUB ECX,R11D }
    /* +0x8ecf86 */ __asm { ROL CX,0xa }
    /* +0x8ecf8a */ __asm { MOV R9D,dword ptr [R12 + 0xcac] }
    /* +0x8ecf92 */ __asm { MOVZX ECX,CX }
    /* +0x8ecf95 */ __asm { MOV R11D,dword ptr [R12 + RCX*0x1] }
    /* +0x8ecf99 */ __asm { MOV RDX,qword ptr [R12 + 0xca0] }
    /* +0x8ecfa1 */ __asm { MOV R9D,R9D }
    /* +0x8ecfa4 */ __asm { MOV RCX,qword ptr [RSP + 0x4f8] }
    /* +0x8ecfac */ __asm { LEA R15,[RCX + R8*0x1] }
    /* +0x8ecfb0 */ __asm { ADD R9,RDX }
    /* +0x8ecfb3 */ __asm { MOV RCX,qword ptr [RSP + 0x448] }
    /* +0x8ecfbb */ __asm { MOV qword ptr [RCX],R15 }
    /* +0x8ecfbe */ __asm { CMP R15,R9 }
    /* +0x8ecfc1 */ __asm { JBE 0x7fffa505d010 }
    /* +0x8ecfc3 */ __asm { MOV ECX,R11D }
    /* +0x8ecfc6 */ __asm { LEA R9,[RDX + RCX*0x1] }
    /* +0x8ecfca */ __asm { CMP qword ptr [RSP + 0x4f8],R9 }
    /* +0x8ecfd2 */ __asm { JNC 0x7fffa505d010 }
    /* +0x8ecfd4 */ __asm { MOV RAX,R15 }
    /* +0x8ecfd7 */ __asm { SUB RAX,RDX }
    /* +0x8ecfda */ __asm { CMP RAX,RCX }
    /* +0x8ecfdd */ __asm { CMOVGE RAX,RCX }
    /* +0x8ecfe1 */ __asm { MOV R9W,0xd3ed }
    /* +0x8ecfe6 */ __asm { IMUL R9D,R9D,0x68c3 }
    /* +0x8ecfed */ __asm { ADD R9D,0x63d1 }
    /* +0x8ecff4 */ __asm { MOV RCX,qword ptr [RSP + 0x6a0] }
    /* +0x8ecffc */ __asm { ROL R9W,CL }
    /* +0x8ed000 */ __asm { MOVZX ECX,R9W }
    /* +0x8ed004 */ __asm { MOV dword ptr [R12 + RCX*0x1],EAX }
    /* +0x8ed008 */ __asm { MOV RAX,qword ptr [RSP + 0x500] }
    /* +0x8ed010 */ __asm { TEST R10B,R10B }
    /* +0x8ed013 */ __asm { JZ 0x7fffa505d029 }
    /* +0x8ed015 */ __asm { MOV dword ptr [R12 + 0xd18],0x0 }
    /* +0x8ed021 */ __asm { MOV dword ptr [R12 + 0xcbc],R11D }
    /* +0x8ed029 */ __asm { CMP dword ptr [R12 + 0x148],0x1 }
    /* +0x8ed032 */ __asm { JNZ 0x7fffa505d137 }
    /* +0x8ed038 */ __asm { MOV R10,qword ptr [R12 + 0x408] }
    /* +0x8ed040 */ __asm { MOV RAX,qword ptr [RSP + 0x4f8] }
    /* +0x8ed048 */ __asm { CMP RAX,R10 }
    /* +0x8ed04b */ __asm { JZ 0x7fffa505d0b0 }
    /* +0x8ed04d */ __asm { MOV RDX,qword ptr [R12 + 0x410] }
    /* +0x8ed055 */ __asm { MOV R9W,0x8502 }
    /* +0x8ed05a */ __asm { ADD R9D,0x7d0e }
    /* +0x8ed061 */ __asm { SUB R10,RDX }
    /* +0x8ed064 */ __asm { SUB RAX,R10 }
    /* +0x8ed067 */ __asm { MOV RCX,qword ptr [RSP + 0x6a0] }
    /* +0x8ed06f */ __asm { ROR R9W,CL }
    /* +0x8ed073 */ __asm { MOVZX ECX,R9W }
    /* +0x8ed077 */ __asm { MOV R9D,dword ptr [R12 + RCX*0x1] }
    /* +0x8ed07b */ __asm { MOV R11D,R10D }
    /* +0x8ed07e */ __asm { SUB R11D,R9D }
    /* +0x8ed081 */ __asm { MOV qword ptr [R12 + 0x410],RAX }
    /* +0x8ed089 */ __asm { MOV qword ptr [R12 + 0x418],RDX }
    /* +0x8ed091 */ __asm { MOV dword ptr [R12 + RCX*0x1],R10D }
    /* +0x8ed095 */ __asm { MOV dword ptr [R12 + 0x424],R9D }
    /* +0x8ed09d */ __asm { CMP R11D,0x7 }
    /* +0x8ed0a1 */ __asm { JA 0x7fffa505d0c8 }
    /* +0x8ed0a3 */ __asm { MOV dword ptr [R12 + 0x424],R10D }
    /* +0x8ed0ab */ __asm { MOV R9D,R10D }
    /* +0x8ed0ae */ __asm { JMP 0x7fffa505d0c8 }
    /* +0x8ed0b0 */ __asm { MOV RDX,qword ptr [R12 + 0x418] }
    /* +0x8ed0b8 */ __asm { MOV R9D,dword ptr [R12 + 0x424] }
    /* +0x8ed0c0 */ __asm { MOV R10D,dword ptr [R12 + 0x420] }
    /* +0x8ed0c8 */ __asm { MOV ECX,R10D }
    /* +0x8ed0cb */ __asm { NOP }
    /* +0x8ed0cc */ __asm { MOV R8,0x0 }
    /* +0x8ed0d3 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x8ed0da */ __asm { MOV qword ptr [R12 + 0x408],R15 }
    /* +0x8ed0e2 */ __asm { LEA R10,[RDX + RCX*0x1] }
    /* +0x8ed0e6 */ __asm { CMP qword ptr [RSP + 0x4f8],R10 }
    /* +0x8ed0ee */ __asm { MOV R8,qword ptr [RSP + 0x578] }
    /* +0x8ed0f6 */ __asm { MOV RAX,qword ptr [RSP + 0x500] }
    /* +0x8ed0fe */ __asm { JNC 0x7fffa505d137 }
    /* +0x8ed100 */ __asm { MOV R10D,R9D }
    /* +0x8ed103 */ __asm { ADD R10,RDX }
    /* +0x8ed106 */ __asm { CMP R15,R10 }
    /* +0x8ed109 */ __asm { JBE 0x7fffa505d137 }
    /* +0x8ed10b */ __asm { MOV R10,R15 }
    /* +0x8ed10e */ __asm { SUB R10,RDX }
    /* +0x8ed111 */ __asm { CMP R10,RCX }
    /* +0x8ed114 */ __asm { CMOVGE R10,RCX }
    /* +0x8ed118 */ __asm { MOV EDX,0xe42744b5 }
    /* +0x8ed11d */ __asm { XOR EDX,0x7c1374a0 }
    /* +0x8ed123 */ __asm { MOV RCX,qword ptr [RSP + 0x6a0] }
    /* +0x8ed12b */ __asm { ROL EDX,CL }
    /* +0x8ed12d */ __asm { ADD EDX,0x33e5ec1a }
    /* +0x8ed133 */ __asm { MOV dword ptr [R12 + RDX*0x1],R10D }
    /* +0x8ed137 */ __asm { MOVZX ECX,uint8_t ptr [R12 + 0xec] }
    /* +0x8ed140 */ __asm { MOV R10D,0x1 }
    /* +0x8ed146 */ __asm { SHL R10D,CL }
    /* +0x8ed149 */ __asm { MOV qword ptr [RSP + 0x568],R10 }
    /* +0x8ed151 */ __asm { MOV RDX,qword ptr [R12 + 0x2f0] }
    /* +0x8ed159 */ __asm { MOV qword ptr [RSP + 0x190],RDX }
    /* +0x8ed161 */ __asm { CMP dword ptr [R12 + 0x10c],0x0 }
    /* +0x8ed16a */ __asm { MOV RSI,-0x3d4d51c2d82b14b1 }
    /* +0x8ed174 */ __asm { JZ 0x7fffa505d6fd }
    /* +0x8ed17a */ __asm { MOV RAX,qword ptr [R12 + 0x310] }
    /* +0x8ed182 */ __asm { MOV R9D,dword ptr [R12 + 0x358] }
    /* +0x8ed18a */ __asm { LEA RDX,[R8 + R9*0x1] }
    /* +0x8ed18e */ __asm { MOV R10D,0xabb21211 }
    /* +0x8ed194 */ __asm { MOV R11D,0xdde084bd }
    /* +0x8ed19a */ __asm { ADD R10D,0xee2a524a }
    /* +0x8ed1a1 */ __asm { MOV RCX,qword ptr [RSP + 0x6a0] }
    /* +0x8ed1a9 */ __asm { ROL R10D,CL }
    /* +0x8ed1ac */ __asm { MOVSXD R10,R10D }
    /* +0x8ed1af */ __asm { LEA R13,[R8 + RAX*0x1] }
    /* +0x8ed1b3 */ __asm { ADD R11D,ECX }
    /* +0x8ed1b6 */ __asm { ADD R11D,0xeefed621 }
    /* +0x8ed1bd */ __asm { XOR RAX,R8 }
    /* +0x8ed1c0 */ __asm { CMP R10,R11 }
    /* +0x8ed1c3 */ __asm { CMOVNC RAX,R13 }
    /* +0x8ed1c7 */ __asm { MOV qword ptr [R12 + 0x310],RAX }
    /* +0x8ed1cf */ __asm { CMP RDX,0x1f }
    /* +0x8ed1d3 */ __asm { JBE 0x7fffa505d2d7 }
    /* +0x8ed1d9 */ __asm { MOV RDX,qword ptr [RSP + 0x4f8] }
    /* +0x8ed1e1 */ __asm { TEST R9,R9 }
    /* +0x8ed1e4 */ __asm { JZ 0x7fffa505d599 }
    /* +0x8ed1ea */ __asm { MOV R10D,0x38ff69ac }
    /* +0x8ed1f0 */ __asm { MOV RDX,qword ptr [RSP + 0x6a0] }
    /* +0x8ed1f8 */ __asm { MOV EDI,EDX }
    /* +0x8ed1fa */ __asm { OR EDI,0x1 }
    /* +0x8ed1fd */ __asm { IMUL R10D,EDI }
    /* +0x8ed201 */ __asm { ADD R10D,0x5aea0126 }
    /* +0x8ed208 */ __asm { CMP R10,0x68606a54 }
    /* +0x8ed20f */ __asm { JNZ 0x7fffa505d3d6 }
    /* +0x8ed215 */ __asm { MOV R12W,0x9899 }
    /* +0x8ed21a */ __asm { MOV R8D,0x20 }
    /* +0x8ed220 */ __asm { SUB R8D,R9D }
    /* +0x8ed223 */ __asm { MOV EBX,0xc025acf }
    /* +0x8ed228 */ __asm { MOV R13,qword ptr [RSP + 0x4d0] }
    /* +0x8ed230 */ __asm { LEA RDX,[R13 + 0x330] }
    /* +0x8ed237 */ __asm { MOV qword ptr [RSP + 0x118],RDX }
    /* +0x8ed23f */ __asm { MOV RDX,qword ptr [R13 + 0x330] }
    /* +0x8ed246 */ __asm { MOV qword ptr [RSP + 0x548],RDX }
    /* +0x8ed24e */ __asm { MOV RDX,qword ptr [R13 + 0x318] }
    /* +0x8ed255 */ __asm { MOV qword ptr [RSP + 0x430],RDX }
    /* +0x8ed25d */ __asm { MOV RDI,qword ptr [R13 + 0x320] }
    /* +0x8ed264 */ __asm { MOV R14,qword ptr [R13 + 0x348] }
    /* +0x8ed26b */ __asm { MOV RBP,qword ptr [RSP + 0x6a0] }
    /* +0x8ed273 */ __asm { MOV RDX,qword ptr [R13 + 0x328] }
    /* +0x8ed27a */ __asm { MOV qword ptr [RSP + 0x530],RDX }
    /* +0x8ed282 */ __asm { ADD EBX,0x6e036844 }
    /* +0x8ed288 */ __asm { XOR EBX,EBP }
    /* +0x8ed28a */ __asm { LEA RDX,[R13 + 0x318] }
    /* +0x8ed291 */ __asm { MOV qword ptr [RSP + 0x558],RDX }
    /* +0x8ed299 */ __asm { ADD EBX,0x548883c7 }
    /* +0x8ed29f */ __asm { LEA RCX,[R9 + R13*0x1] }
    /* +0x8ed2a3 */ __asm { ADD RCX,0x338 }
    /* +0x8ed2aa */ __asm { MOV RSI,qword ptr [RSP + 0x4f8] }
    /* +0x8ed2b2 */ __asm { MOV RDX,RSI }
    /* +0x8ed2b5 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x8ed2ba */ __asm { IMUL R9D,R12D,0x1f71 }
    /* +0x8ed2c1 */ __asm { MOV R12,R13 }
    /* +0x8ed2c4 */ __asm { ADD R9D,0x20c7 }
    /* +0x8ed2cb */ __asm { MOVZX R13D,R9W }
    /* +0x8ed2cf */ __asm { ADD R13,R12 }
    /* +0x8ed2d2 */ __asm { JMP 0x7fffa505d4ae }
    /* +0x8ed2d7 */ __asm { LEA RCX,[R12 + R9*0x1] }
    /* +0x8ed2db */ __asm { ADD RCX,0x338 }
    /* +0x8ed2e2 */ __asm { MOV RDX,qword ptr [RSP + 0x4f8] }
    /* +0x8ed2ea */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x8ed2ef */ __asm { MOV R8,qword ptr [RSP + 0x578] }
    /* +0x8ed2f7 */ __asm { MOV R15D,dword ptr [R12 + 0x358] }
    /* +0x8ed2ff */ __asm { ADD R15D,R8D }
    /* +0x8ed302 */ __asm { JMP 0x7fffa505d6ed }
    /* +0x8ed307 */ __asm { MOV EBX,0x60852a0f }
    /* +0x8ed30c */ __asm { SUB EBX,ECX }
    /* +0x8ed30e */ __asm { XOR EBX,0x255d2778 }
    /* +0x8ed314 */ __asm { MOV R13,qword ptr [RSP + 0x500] }
    /* +0x8ed31c */ __asm { MOV dword ptr [R13],EBX }
    /* +0x8ed320 */ __asm { MOV ECX,0x4 }
    /* +0x8ed325 */ __asm { MOV RBX,RCX }
    /* +0x8ed328 */ __asm { OR RBX,0x1 }
    /* +0x8ed32c */ __asm { LEA RSI,[0x7fffa4770000] }
    /* +0x8ed333 */ __asm { NOP }
    /* +0x8ed334 */ __asm { MOV R12,0x0 }
    /* +0x8ed33b */ __asm { MOV uint8_t ptr [R13 + RCX*0x1],DIL }
    /* +0x8ed340 */ __asm { TEST R9B,R9B }
    /* +0x8ed343 */ __asm { JNZ 0x7fffa505d359 }
    /* +0x8ed345 */ __asm { SHL R10B,0x3 }
    /* +0x8ed349 */ __asm { ADD R10B,0xb0 }
    /* +0x8ed34d */ __asm { OR RCX,0x2 }
    /* +0x8ed351 */ __asm { MOV uint8_t ptr [R13 + RBX*0x1],R10B }
    /* +0x8ed356 */ __asm { MOV RBX,RCX }
    /* +0x8ed359 */ __asm { MOV CX,0x46c5 }
    /* +0x8ed35d */ __asm { MOV R10,qword ptr [RSP + 0x6a0] }
    /* +0x8ed365 */ __asm { OR R10D,0x1 }
    /* +0x8ed369 */ __asm { IMUL R10D,ECX }
    /* +0x8ed36d */ __asm { NOT R10D }
    /* +0x8ed370 */ __asm { ROR R10W,0x1 }
    /* +0x8ed374 */ __asm { MOVZX ECX,R10W }
    /* +0x8ed378 */ __asm { CMP EAX,ECX }
    /* +0x8ed37a */ __asm { MOV R12,qword ptr [RSP + 0x4d0] }
    /* +0x8ed382 */ __asm { JNC 0x7fffa505d3ac }
    /* +0x8ed384 */ __asm { CMP EAX,0x1 }
    /* +0x8ed387 */ __asm { MOV R10,qword ptr [RSP + 0x4f8] }
    /* +0x8ed38f */ __asm { MOV RCX,RBX }
    /* +0x8ed392 */ __asm { JNZ 0x7fffa507a25b }
    /* +0x8ed398 */ __asm { MOV RAX,qword ptr [RSP + 0x500] }
    /* +0x8ed3a0 */ __asm { MOV uint8_t ptr [RAX + RCX*0x1],R8B }
    /* +0x8ed3a4 */ __asm { INC RCX }
    /* +0x8ed3a7 */ __asm { JMP 0x7fffa507a290 }
    /* +0x8ed3ac */ __asm { CMP EAX,0x3 }
    /* +0x8ed3af */ __asm { MOV R10,qword ptr [RSP + 0x4f8] }
    /* +0x8ed3b7 */ __asm { MOV RCX,RBX }
    /* +0x8ed3ba */ __asm { JNC 0x7fffa507a280 }
    /* +0x8ed3c0 */ __asm { MOV RAX,qword ptr [RSP + 0x500] }
    /* +0x8ed3c8 */ __asm { MOV word ptr [RAX + RCX*0x1],R8W }
    /* +0x8ed3cd */ __asm { ADD RCX,0x2 }
    /* +0x8ed3d1 */ __asm { JMP 0x7fffa507a290 }
    /* +0x8ed3d6 */ __asm { MOV RBP,qword ptr [RSP + 0x6a0] }
    /* +0x8ed3de */ __asm { MOV ECX,EBP }
    /* +0x8ed3e0 */ __asm { OR ECX,0x1 }
    /* +0x8ed3e3 */ __asm { MOV R10W,0x2564 }
    /* +0x8ed3e8 */ __asm { MOV EBX,0x877caf6e }
    /* +0x8ed3ed */ __asm { MOV R12,qword ptr [RSP + 0x4d0] }
    /* +0x8ed3f5 */ __asm { LEA R13,[R12 + 0x350] }
    /* +0x8ed3fd */ __asm { MOV RAX,qword ptr [R12 + 0x320] }
    /* +0x8ed405 */ __asm { MOV qword ptr [RSP + 0x410],RAX }
    /* +0x8ed40d */ __asm { MOV RDX,qword ptr [R12 + 0x328] }
    /* +0x8ed415 */ __asm { MOV qword ptr [RSP + 0x530],RDX }
    /* +0x8ed41d */ __asm { ADD EBX,0x24717139 }
    /* +0x8ed423 */ __asm { IMUL R10D,ECX }
    /* +0x8ed427 */ __asm { ADD R10D,0x217c }
    /* +0x8ed42e */ __asm { MOVZX ECX,R10W }
    /* +0x8ed432 */ __asm { LEA RDX,[R12 + RCX*0x1] }
    /* +0x8ed436 */ __asm { MOV qword ptr [RSP + 0x558],RDX }
    /* +0x8ed43e */ __asm { MOV RDX,qword ptr [R12 + RCX*0x1] }
    /* +0x8ed442 */ __asm { MOV qword ptr [RSP + 0x430],RDX }
    /* +0x8ed44a */ __asm { MOV CX,0x5946 }
    /* +0x8ed44e */ __asm { XOR ECX,0x4013 }
    /* +0x8ed454 */ __asm { ADD ECX,0x7b3a }
    /* +0x8ed45a */ __asm { XOR ECX,EBP }
    /* +0x8ed45c */ __asm { MOVZX ECX,CX }
    /* +0x8ed45f */ __asm { LEA RDX,[R12 + RCX*0x1] }
    /* +0x8ed463 */ __asm { MOV qword ptr [RSP + 0x118],RDX }
    /* +0x8ed46b */ __asm { MOV RDX,qword ptr [R12 + RCX*0x1] }
    /* +0x8ed46f */ __asm { MOV qword ptr [RSP + 0x548],RDX }
    /* +0x8ed477 */ __asm { LEA RCX,[R12 + R9*0x1] }
    /* +0x8ed47b */ __asm { ADD RCX,0x338 }
    /* +0x8ed482 */ __asm { MOV R8D,0x20 }
    /* +0x8ed488 */ __asm { SUB R8D,R9D }
    /* +0x8ed48b */ __asm { MOV RSI,qword ptr [RSP + 0x4f8] }
    /* +0x8ed493 */ __asm { MOV RDX,RSI }
    /* +0x8ed496 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x8ed49b */ __asm { MOV R14,qword ptr [R12 + 0x348] }
    /* +0x8ed4a3 */ __asm { IMUL EBX,EDI }
    /* +0x8ed4a6 */ __asm { MOV RDI,qword ptr [RSP + 0x410] }
    /* +0x8ed4ae */ __asm { MOV RAX,-0x3d4d51c2d82b14b1 }
    /* +0x8ed4b8 */ __asm { IMUL R14,RAX }
    /* +0x8ed4bc */ __asm { ADD R14,qword ptr [RSP + 0x530] }
    /* +0x8ed4c4 */ __asm { MOV RCX,RBX }
    /* +0x8ed4c7 */ __asm { OR RCX,0x1 }
    /* +0x8ed4cb */ __asm { ROL R14,0x1f }
    /* +0x8ed4cf */ __asm { MOV R11,-0x61c8864e7a143579 }
    /* +0x8ed4d9 */ __asm { IMUL R14,R11 }
    /* +0x8ed4dd */ __asm { MOV RDX,qword ptr [R13] }
    /* +0x8ed4e1 */ __asm { IMUL RDX,RAX }
    /* +0x8ed4e5 */ __asm { ADD RDX,qword ptr [RSP + 0x548] }
    /* +0x8ed4ed */ __asm { MOV R10,-0x40466461d76b6163 }
    /* +0x8ed4f7 */ __asm { SUB R10,RBP }
}


// ============================================================================
// Function : FUN_7fffa507a38c  |  RVA: 0x90a38c  |  Size: 374 bytes
// Callers  : FUN_7fffa54e570c@0xd7570c, FUN_7fffa5244778@0xad4778
// Callees  : FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa55f8c50@0xe88c50, FUN_7fffa5605d30@0xe95d30, FUN_7fffa5177ef8@0xa07ef8
// ============================================================================
void FUN_7fffa507a38c(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  
  if ((((*(uint8_t ***)(param_1 + 0xf8) != (uint8_t **)0x0) &&
       (*(uint8_t ***)(param_1 + 0xf8) != &PTR_DAT_7fffa4780910)) &&
      (*(int **)(param_1 + 0xe0) != (int *)0x0)) && (**(int **)(param_1 + 0xe0) == 0)) {
    if ((*(int **)(param_1 + 0xf0) != (int *)0x0) && (**(int **)(param_1 + 0xf0) == 0)) {
      FUN_7fffa52d8dd0();
      FUN_7fffa5605d30(*(uint64_t *)(param_1 + 0xf8));
    }
    if ((*(int **)(param_1 + 0xe8) != (int *)0x0) && (**(int **)(param_1 + 0xe8) == 0)) {
      FUN_7fffa52d8dd0();
      FUN_7fffa55f8c50(*(uint64_t *)(param_1 + 0xf8));
    }
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0xe0));
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    FUN_7fffa52d8dd0(*(int64_t *)(param_1 + 0x108) + -0xfe);
    FUN_7fffa52d8dd0(*(int64_t *)(param_1 + 0x110) + -0x80);
    FUN_7fffa52d8dd0(*(int64_t *)(param_1 + 0x118) + -0x80);
    FUN_7fffa52d8dd0(*(uint64_t *)(param_1 + 0x100));
  }
  FUN_7fffa5177ef8(*(uint64_t *)(param_1 + 0x120));
  puVar2 = (uint64_t *)(param_1 + 0x128);
  lVar1 = 6;
  puVar3 = (uint64_t *)(param_1 + 0x38);
  do {
    if (((puVar3[-2] != 0x7fffa47808f8) && ((int *)*puVar3 != (int *)0x0)) && (*(int *)*puVar3 == 0)
       ) {
      FUN_7fffa52d8dd0();
      FUN_7fffa52d8dd0(*puVar2);
    }
    if (((puVar3[-3] != 0) && ((int *)puVar3[-1] != (int *)0x0)) && (*(int *)puVar3[-1] == 0)) {
      FUN_7fffa52d8dd0();
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_7fffa52d8dd0(param_1);
  return;
}


// ============================================================================
// Function : FUN_7fffa507a510  |  RVA: 0x90a510  |  Size: 185 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa507a6a2) */
/* WARNING: Removing unreachable block (ram,0x7fffa507a692) */

void FUN_7fffa507a510(void)

{
  FUN_7fffa4ed8b50();
  FUN_7fffa564c6d0();
  return;
}


// ============================================================================
// Function : FUN_7fffa507a830  |  RVA: 0x90a830  |  Size: 1079 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa507ac5e) */
/* WARNING: Removing unreachable block (ram,0x7fffa507abc5) */
/* WARNING: Removing unreachable block (ram,0x7fffa507abd7) */
/* WARNING: Removing unreachable block (ram,0x7fffa507abea) */

void FUN_7fffa507a830(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  uint16_t uVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint64_t unaff_R14;
  
  uVar7 = ~param_3;
  uVar8 = (uVar7 & unaff_R14) * -0x80000003 +
          (uVar7 ^ unaff_R14) * -0xfffe02f3 + (unaff_R14 ^ param_3) * -0x7ffe02f0 +
          (unaff_R14 | uVar7) * 0x80000003;
  uVar6 = (uint32_t)uVar8;
  uVar5 = (uint16_t)uVar8;
  lVar10 = (int64_t)(short)((uVar5 ^ 0xbb2c) << 3 | (uVar5 ^ 0xbb2c) >> 0xd);
  *(uint64_t *)(lVar10 + 0x7fffa47be983) = 0;
  *(uint64_t *)(lVar10 + 0x7fffa47be98b) = 0;
  *(uint64_t *)(lVar10 + 0x7fffa47be973) = 0;
  *(uint64_t *)(lVar10 + 0x7fffa47be97b) = 0;
  *(uint64_t *)(lVar10 + 0x7fffa47be963) = 0;
  *(uint64_t *)(lVar10 + 0x7fffa47be96b) = 0;
  *(uint64_t *)(lVar10 + 0x7fffa47be953) = 0;
  *(uint64_t *)(lVar10 + 0x7fffa47be95b) = 0;
  bVar2 = (uint8_t)uVar8 & 0x1f;
  bVar3 = (uint8_t)uVar8 & 0x1f;
  uVar9 = ((uint64_t)(&UNK_7fffa583a35a + (int)((uVar6 ^ 0x465708f0) + 0xc6564d9e)) >> 0x1f |
          (uint64_t)
          ((int)(short)(((uVar5 | 1) * 0x542e | (uint16_t)((short)((uVar5 | 1) * -0x55e9) < 0)) - 0xee
                       ) + 0xa5836098) << 0x21) * 0x1000200040008001;
  uVar4 = -lRam00007fffa4780d60;
  uVar7 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
          (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
          (uVar4 & 0xff00) << 0x28;
  uVar7 = uVar7 << 0xb ^ (uVar7 | uVar4 << 0x38);
  lVar10 = 0x5e6835c18a10a193;
  if ((0xb573ba6fU >> bVar2 | -0x4a8c4591 << 0x20 - bVar2) <
      ((0xf6b85253 - uVar6) * 0x200 | 0xf6b85253 - uVar6 >> 0x17) + 0xdaba4984) {
    lVar10 = (uVar8 ^ 0x2133931e0d086c2) * 0x3b893b01 + 0x26183900d987543b;
  }
  *(uint64_t *)((int64_t)(int)((uVar6 ^ 0x607000d7) * 0x3c06769d) + 0x7fffa47c6c4d) =
       (uVar7 << 0x16 ^ uVar7 << 0x2c ^ uVar7) * 0x3fffffff80000001;
  plVar11 = (int64_t *)0x2070;
  if ((0xa2170846U >> bVar3 | -0x5de8f7ba << 0x20 - bVar3) <=
      (~(uVar6 + 0x6684377b) << 0xb | ~(uVar6 + 0x6684377b) >> 0x15)) {
    plVar11 = (int64_t *)0x7fffa4781068;
  }
  lVar1 = *plVar11;
  *(uint64_t *)
   ((int64_t)(short)((uint16_t)(0x8929 - uVar6) >> 1 | (uint16_t)((0x8929 - uVar6 & 1) != 0) << 0xf) +
   0x7fffa47bf52c) = (uVar9 << 0x35 | uVar9 >> 0xb) + lVar10;
  *(uint64_t *)((int64_t)(int)(0x7ffd1fb4 - uVar6) + 0x7fffa47c9b7c) =
       (uVar8 - lVar1) + -0x5b22f878ecdb87a0;
  *(uint64_t *)((int64_t)(short)((uVar5 ^ 0xc6a9) + 0xa51) + 0x7fffa47be9a6) = 0xaf2025e029086242
  ;
  do {
    *(uint64_t *)((int64_t)(int)(uVar6 + 0x8001066e) + 0x7fffa47caf02) =
         -0x16d1757018cfe8f6 - uVar8;
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa507ac70  |  RVA: 0x90ac70  |  Size: 52 bytes
// Callers  : FUN_7fffa5215120@0xaa5120
// Callees  : FUN_7fffa55f6f60@0xe86f60
// ============================================================================
void FUN_7fffa507ac70(int64_t *param_1,uint64_t param_2,uint8_t *param_3)

{
  int64_t alStackX_8 [4];
  
  alStackX_8[0] = *param_1;
  if ((*param_3 & 1) != 0) {
    alStackX_8[0] = *(int64_t *)((uint64_t)*(uint32_t *)(param_3 + 0x14) + alStackX_8[0]);
  }
  FUN_7fffa55f6f60(alStackX_8,param_2,param_3,0xffffffff);
  return;
}


// ============================================================================
// Function : FUN_7fffa507aca4  |  RVA: 0x90aca4  |  Size: 285 bytes
// Callers  : FUN_7fffa5496200@0xd26200
// Callees  : FUN_7fffa565700c@0xee700c, FUN_7fffa5668bc0@0xef8bc0, FUN_7fffa548e49c@0xd1e49c, FUN_7fffa50c9360@0x959360
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa507aca4(uint32_t param_1,uint64_t param_2,uint32_t param_3,int64_t param_4)

{
  bool bVar1;
  uint32_t uVar2;
  
  if (param_1 == 0xfffffffe) {
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (_DAT_7fffa4782580 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)param_1 >> 6) * 8) + 0x38 +
                    (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_7fffa548e49c(param_1);
        uVar2 = 0xffffffff;
        if ((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)param_1 >> 6) * 8) + 0x38 +
                      (uint64_t)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(uint8_t *)(param_4 + 0x30) = 1;
          *(uint32_t *)(param_4 + 0x2c) = 9;
          *(uint8_t *)(param_4 + 0x38) = 1;
          *(uint32_t *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_7fffa50c9360(param_1,param_2,param_3,param_4);
        }
        FUN_7fffa565700c(param_1);
        return uVar2;
      }
    }
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 9;
    FUN_7fffa5668bc0(0,0,0,0,0,param_4);
  }
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa507add0  |  RVA: 0x90add0  |  Size: 90 bytes
// Callers  : FUN_7fffa54037a0@0xc937a0
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa507add0(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                     int64_t param_5,int param_6,uint32_t param_7,uint64_t param_8)

{
  uint8_t bVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  code *pcVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint32_t uVar11;
  uint8_t *pbVar12;
  uint8_t *pbVar13;
  uint8_t *pbVar14;
  uint8_t auStack_178 [32];
  int64_t lStack_158;
  int64_t lStack_150;
  uint64_t uStack_148;
  int iStack_140;
  uint8_t *puStack_138;
  int64_t lStack_130;
  uint8_t uStack_128;
  uint32_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int *piStack_f8;
  int64_t lStack_f0;
  uint32_t uStack_e8;
  uint32_t uStack_d8;
  uint8_t auStack_d0 [8];
  uint32_t auStack_c8 [2];
  int64_t lStack_c0;
  int64_t lStack_b8;
  uint8_t auStack_b0 [4];
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int64_t lStack_88;
  uint32_t uStack_80;
  int aiStack_78 [10];
  uint64_t uStack_50;
  
  uStack_50 = _DAT_7fffa4780040 ^ (uint64_t)auStack_178;
  uStack_110 = param_8;
  uStack_108 = param_3;
  uStack_100 = param_2;
  piStack_f8 = param_1;
  if (*param_1 != -0x7ffffffd) {
    lVar7 = FUN_7fffa54539d0();
    if (*(int64_t *)(lVar7 + 0x10) != 0) {
      lVar7 = FUN_7fffa54539d0();
      lVar7 = *(int64_t *)(lVar7 + 0x10);
      lVar8 = (*(code *)&DAT_7ff850597e70)(0);
      if (((lVar7 != lVar8) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) {
        iStack_140 = param_6;
        uStack_148 = uStack_110;
        lStack_150 = CONCAT44(lStack_150._4_4_,param_7);
        lStack_158 = param_5;
        iVar6 = FUN_7fffa5404b80(param_1,param_2,uStack_108,param_4);
        if (iVar6 != 0) goto FUN_7fffa507b119;
      }
    }
    FUN_7fffa5610170(aiStack_78,param_5,*(uint64_t *)(param_4 + 8));
    if (aiStack_78[0] == 0) {
      FUN_7fffa524fccc();
      pcVar5 = (code *)__debugbreak();
      (*pcVar5)();
      return;
    }
    lStack_150 = CONCAT44(lStack_150._4_4_,param_7);
    lStack_158 = param_5;
    FUN_7fffa5251710(&lStack_f0,aiStack_78,param_6,param_4);
    uStack_118 = uStack_e8;
    if (uStack_e8 < uStack_d8) {
      do {
        lVar7 = 0;
        iVar6 = *(int *)(lStack_f0 + 0x18);
        if ((iVar6 <= param_6) && (param_6 <= *(int *)(lStack_f0 + 0x1c))) {
          iVar3 = *(int *)(lStack_f0 + 0x24);
          lStack_88 = *(int64_t *)(param_4 + 8);
          uStack_110 = CONCAT44(uStack_110._4_4_,*(uint32_t *)(lStack_f0 + 0x20));
          uStack_80 = **(uint32_t **)(param_4 + 0x10);
          lStack_c0 = 0;
          lStack_b8 = 0;
          auStack_b0[0] = 0;
          uStack_ac = 0;
          uStack_a4 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          if (iVar3 == 0) {
            auStack_c8[0] = 0;
          }
          else {
            uVar11 = *(uint8_t *)(iVar3 + lStack_88) & 0xf;
            lStack_c0 = ((int64_t)iVar3 - (int64_t)(char)(&UNK_7fffa56b3150)[uVar11]) + lStack_88;
            auStack_c8[0] = *(uint32_t *)(lStack_c0 + -4) >> ((&UNK_7fffa56b3160)[uVar11] & 0x1f);
            lStack_b8 = lStack_c0;
            FUN_7fffa55abd60(auStack_c8);
          }
          FUN_7fffa5605880(auStack_c8,0);
          FUN_7fffa5605880(auStack_c8,auStack_c8[0] - 1);
          lVar8 = (int64_t)uStack_ac._4_4_;
          if ((uStack_ac._4_4_ != 0) && (lVar9 = FUN_7fffa55d63a0(), lVar9 + lVar8 != 0)) {
            lVar8 = (int64_t)uStack_ac._4_4_;
            if (uStack_ac._4_4_ != 0) {
              lVar7 = FUN_7fffa55d63a0();
              lVar7 = lVar7 + lVar8;
            }
            if (*(char *)(lVar7 + 0x10) != '\0') goto LAB_7fffa507b056;
          }
          if ((uStack_ac & 0x40) == 0) {
            uVar10 = FUN_7fffa524eeb0(uStack_100,param_4,param_5,auStack_d0);
            lVar7 = (int64_t)uStack_a4._4_4_;
            lStack_158 = FUN_7fffa55d63a0();
            puStack_138 = auStack_b0;
            lStack_158 = lStack_158 + lVar7;
            uStack_128 = 0;
            iStack_140 = (int)uStack_110;
            uStack_148 = CONCAT44(uStack_148._4_4_,iVar6);
            lStack_150 = param_5;
            lStack_130 = param_4;
            FUN_7fffa560e210(uStack_100,piStack_f8,uStack_108,uVar10);
          }
        }
LAB_7fffa507b056:
        pbVar14 = *(uint8_t **)(lStack_f0 + 8);
        lVar7 = (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar14 & 0xf];
        bVar1 = (&UNK_7fffa56b3160)[*pbVar14 & 0xf];
        pbVar12 = pbVar14 + -lVar7;
        uVar11 = *(uint32_t *)(pbVar12 + -4);
        *(uint8_t **)(lStack_f0 + 8) = pbVar12;
        *(uint32_t *)(lStack_f0 + 0x18) = uVar11 >> (bVar1 & 0x1f);
        cVar2 = (&UNK_7fffa56b3150)[*pbVar12 & 0xf];
        pbVar13 = pbVar14 + (-lVar7 - (int64_t)cVar2);
        *(uint32_t *)(lStack_f0 + 0x1c) =
             *(uint32_t *)(pbVar13 + -4) >> ((&UNK_7fffa56b3160)[*pbVar12 & 0xf] & 0x1f);
        *(uint8_t **)(lStack_f0 + 8) = pbVar13;
        pbVar14 = pbVar14 + ((-(int64_t)cVar2 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar13 & 0xf]
                             ) - lVar7);
        *(uint32_t *)(lStack_f0 + 0x20) =
             *(uint32_t *)(pbVar14 + -4) >> ((&UNK_7fffa56b3160)[*pbVar13 & 0xf] & 0x1f);
        *(uint8_t **)(lStack_f0 + 8) = pbVar14;
        uVar4 = *(uint32_t *)pbVar14;
        *(uint8_t **)(lStack_f0 + 8) = pbVar14 + 4;
        uStack_118 = uStack_118 + 1;
        *(uint32_t *)(lStack_f0 + 0x24) = uVar4;
      } while (uStack_118 < uStack_d8);
    }
  }
FUN_7fffa507b119:
  FUN_7fffa5488850(uStack_50 ^ (uint64_t)auStack_178);
  return;
}


// ============================================================================
// Function : FUN_7fffa507ae2a  |  RVA: 0x90ae2a  |  Size: 751 bytes
// Callers  : none
// Callees  : FUN_7fffa55d63a0@0xe663a0, FUN_7fffa5251710@0xae1710, FUN_7fffa5404b80@0xc94b80, FUN_7fffa55abd60@0xe3bd60, FUN_7fffa5605880@0xe95880, FUN_7fffa5610170@0xea0170, FUN_7fffa54539d0@0xce39d0, FUN_7fffa524eeb0@0xadeeb0
// ============================================================================
void FUN_7fffa507ae2a(void)

{
  uint8_t bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  code *pcVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint32_t uVar11;
  int64_t lVar12;
  uint8_t *pbVar13;
  uint8_t *pbVar14;
  uint64_t unaff_RBX;
  int *unaff_RBP;
  uint64_t unaff_RDI;
  uint8_t *pbVar15;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t unaff_R14;
  int *unaff_R15;
  uint8_t uStack0000000000000000;
  uint32_t uStack0000000000000060;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  
  *(uint64_t *)(in_R11 + -0x38) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_RBX;
  lVar8 = FUN_7fffa54539d0();
  iVar3 = unaff_RBP[0x2a];
  if (*(int64_t *)(lVar8 + 0x10) != 0) {
    lVar8 = FUN_7fffa54539d0();
    lVar8 = *(int64_t *)(lVar8 + 0x10);
    lVar9 = (*(code *)&DAT_7ff850597e70)(0);
    if ((((lVar8 != lVar9) && (*unaff_R15 != -0x1fbcb0b3)) && (*unaff_R15 != -0x1fbcbcae)) &&
       (iVar7 = FUN_7fffa5404b80(), iVar7 != 0)) goto LAB_7fffa507b101;
  }
  FUN_7fffa5610170();
  if (*unaff_RBP == 0) {
    FUN_7fffa524fccc();
    pcVar6 = (code *)__debugbreak();
    (*pcVar6)();
    return;
  }
  FUN_7fffa5251710(unaff_RBP + -0x1e);
  uStack0000000000000060 = unaff_RBP[-0x1c];
  lVar8 = *(int64_t *)(unaff_RBP + -0x1e);
  if (uStack0000000000000060 < (uint32_t)unaff_RBP[-0x18]) {
    do {
      lVar9 = 0;
      if ((*(int *)(lVar8 + 0x18) <= iVar3) && (iVar3 <= *(int *)(lVar8 + 0x1c))) {
        iVar7 = *(int *)(lVar8 + 0x24);
        lVar12 = *(int64_t *)(unaff_R14 + 8);
        iVar4 = **(int **)(unaff_R14 + 0x10);
        unaff_RBP[-0x12] = 0;
        unaff_RBP[-0x11] = 0;
        unaff_RBP[-0x10] = 0;
        unaff_RBP[-0xf] = 0;
        *(uint8_t *)(unaff_RBP + -0xe) = 0;
        unaff_RBP[-0xd] = 0;
        unaff_RBP[-0xc] = 0;
        unaff_RBP[-0xb] = 0;
        unaff_RBP[-10] = 0;
        *(int64_t *)(unaff_RBP + -4) = lVar12;
        unaff_RBP[-2] = iVar4;
        unaff_RBP[-8] = 0;
        unaff_RBP[-7] = 0;
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = 0;
        if (iVar7 == 0) {
          unaff_RBP[-0x14] = 0;
        }
        else {
          pbVar15 = (uint8_t *)(iVar7 + lVar12);
          *(uint8_t **)(unaff_RBP + -0x12) = pbVar15;
          uVar11 = *pbVar15 & 0xf;
          lVar12 = ((int64_t)iVar7 - (int64_t)(char)(&UNK_7fffa56b3150)[uVar11]) + lVar12;
          unaff_RBP[-0x14] = *(uint32_t *)(lVar12 + -4) >> ((&UNK_7fffa56b3160)[uVar11] & 0x1f);
          *(int64_t *)(unaff_RBP + -0x12) = lVar12;
          *(int64_t *)(unaff_RBP + -0x10) = lVar12;
          FUN_7fffa55abd60(unaff_RBP + -0x14);
        }
        FUN_7fffa5605880(unaff_RBP + -0x14,0);
        FUN_7fffa5605880(unaff_RBP + -0x14,unaff_RBP[-0x14] + -1);
        iVar7 = unaff_RBP[-0xc];
        if ((iVar7 != 0) && (lVar12 = FUN_7fffa55d63a0(), lVar12 + iVar7 != 0)) {
          iVar7 = unaff_RBP[-0xc];
          if (iVar7 != 0) {
            lVar9 = FUN_7fffa55d63a0();
            lVar9 = lVar9 + iVar7;
          }
          if (*(char *)(lVar9 + 0x10) != '\0') goto LAB_7fffa507b056;
        }
        if ((*(uint8_t *)(unaff_RBP + -0xd) & 0x40) == 0) {
          uVar10 = FUN_7fffa524eeb0(in_stack_00000078);
          iVar7 = unaff_RBP[-10];
          lVar9 = FUN_7fffa55d63a0();
          FUN_7fffa560e210(in_stack_00000078,*(uint64_t *)(unaff_RBP + -0x20),in_stack_00000070,
                           uVar10,lVar9 + iVar7);
        }
      }
LAB_7fffa507b056:
      pbVar15 = *(uint8_t **)(lVar8 + 8);
      lVar9 = (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar15 & 0xf];
      bVar1 = (&UNK_7fffa56b3160)[*pbVar15 & 0xf];
      pbVar13 = pbVar15 + -lVar9;
      uVar11 = *(uint32_t *)(pbVar13 + -4);
      *(uint8_t **)(lVar8 + 8) = pbVar13;
      *(uint32_t *)(lVar8 + 0x18) = uVar11 >> (bVar1 & 0x1f);
      cVar2 = (&UNK_7fffa56b3150)[*pbVar13 & 0xf];
      pbVar14 = pbVar15 + (-lVar9 - (int64_t)cVar2);
      *(uint32_t *)(lVar8 + 0x1c) =
           *(uint32_t *)(pbVar14 + -4) >> ((&UNK_7fffa56b3160)[*pbVar13 & 0xf] & 0x1f);
      *(uint8_t **)(lVar8 + 8) = pbVar14;
      pbVar15 = pbVar15 + ((-(int64_t)cVar2 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar14 & 0xf])
                          - lVar9);
      *(uint32_t *)(lVar8 + 0x20) =
           *(uint32_t *)(pbVar15 + -4) >> ((&UNK_7fffa56b3160)[*pbVar14 & 0xf] & 0x1f);
      *(uint8_t **)(lVar8 + 8) = pbVar15;
      uVar5 = *(uint32_t *)pbVar15;
      *(uint8_t **)(lVar8 + 8) = pbVar15 + 4;
      uStack0000000000000060 = uStack0000000000000060 + 1;
      *(uint32_t *)(lVar8 + 0x24) = uVar5;
    } while (uStack0000000000000060 < (uint32_t)unaff_RBP[-0x18]);
  }
LAB_7fffa507b101:
  FUN_7fffa5488850(*(uint64_t *)(unaff_RBP + 10) ^ (uint64_t)&uStack0000000000000000);
  return;
}


// ============================================================================
// Function : FUN_7fffa507b119  |  RVA: 0x90b119  |  Size: 28 bytes
// Callers  : none
// Callees  : FUN_7fffa5488850@0xd18850
// ============================================================================
void FUN_7fffa507b119(void)

{
  int64_t unaff_RBP;
  uint8_t uStack0000000000000000;
  
  FUN_7fffa5488850(*(uint64_t *)(unaff_RBP + 0x28) ^ (uint64_t)&uStack0000000000000000);
  return;
}


// ============================================================================
// Function : FUN_7fffa507b135  |  RVA: 0x90b135  |  Size: 6 bytes
// Callers  : none
// Callees  : FUN_7fffa524fccc@0xadfccc
// ============================================================================
void FUN_7fffa507b135(void)

{
  code *pcVar1;
  
  FUN_7fffa524fccc();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa507b150  |  RVA: 0x90b150  |  Size: 1 bytes
// Callers  : FUN_7fffa51562d4@0x9e62d4, FUN_7fffa565b84c@0xeeb84c
// Callees  : none
// ============================================================================
void FUN_7fffa507b150(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa507b160  |  RVA: 0x90b160  |  Size: 614 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa507b160(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa47bb65e = '\0';
  uRam00007fffa47bb672 = 0;
  uRam00007fffa47bb67a = 0;
  uRam00007fffa47bb662 = 0;
  uRam00007fffa47bb66a = 0;
  uRam00007fffa47bb68b = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0x89874649422f92e;
  for (lVar3 = 3;
      *(char *)(lVar3 + 0x7fffa47bb655) = (char)((uint64_t)(lVar2 * 0x649422f92e) >> 0x20),
      lVar3 != 0x3f; lVar3 = lVar3 + 4) {
    *(char *)(lVar3 + 0x7fffa47bb657) = (char)((uint64_t)(lVar2 * 0x82f2a1e838) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb656) = (char)((uint64_t)(lVar2 * 0xd452c28444) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb658) = (char)((uint64_t)(lVar2 * 0x2dbac1284b663210) >> 0x20);
    lVar2 = lVar2 * 0x2dbac1284b663210;
  }
  bRam00007fffa47bb65e = bRam00007fffa47bb65e + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa47bb65e * 8 + 0x7fffa47bb662) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa507b3d0  |  RVA: 0x90b3d0  |  Size: 68 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa507b3d0(uint32_t param_1)

{
  code *pcVar1;
  
  (*(code *)(&UNK_7fffa4aa152b + (int)((0x5eb6dc55 - param_1) * -0xa06dfaf)))
            (&UNK_7fffa574782e + (int)((param_1 | 1) * 0x66f84b68 ^ 0x5a6bd42));
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa507b430  |  RVA: 0x90b430  |  Size: 5137 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa507b430(void) {
    /* +0x90b430 */ __asm { PUSH RBP }
    /* +0x90b431 */ __asm { PUSH R12 }
    /* +0x90b433 */ __asm { PUSH RBX }
    /* +0x90b434 */ __asm { PUSH R13 }
    /* +0x90b436 */ __asm { PUSH R15 }
    /* +0x90b438 */ __asm { PUSH RDI }
    /* +0x90b439 */ __asm { PUSH RSI }
    /* +0x90b43a */ __asm { PUSH R14 }
    /* +0x90b43c */ __asm { SUB RSP,0x118 }
    /* +0x90b443 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x90b44b */ __asm { MOVDQA xmmword ptr [RBP + 0x80],XMM14 }
    /* +0x90b454 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM6 }
    /* +0x90b459 */ __asm { MOV qword ptr [RBP + 0x68],-0x2 }
    /* +0x90b461 */ __asm { MOV R14,RCX }
    /* +0x90b464 */ __asm { MOV RSI,R8 }
    /* +0x90b467 */ __asm { MOV RDX,R9 }
    /* +0x90b46a */ __asm { MOV R10D,0xe694f5fb }
    /* +0x90b470 */ __asm { MOV R9,RDX }
    /* +0x90b473 */ __asm { NOT R9 }
    /* +0x90b476 */ __asm { MOVQ XMM1,R9 }
    /* +0x90b47b */ __asm { MOVQ XMM3,RDX }
    /* +0x90b480 */ __asm { MOV R11D,0x2c350110 }
    /* +0x90b486 */ __asm { MOVQ XMM5,RSI }
    /* +0x90b48b */ __asm { MOV RBX,RSI }
    /* +0x90b48e */ __asm { NOT RBX }
    /* +0x90b491 */ __asm { AND RDX,RSI }
    /* +0x90b494 */ __asm { MOVQ XMM0,RDX }
    /* +0x90b499 */ __asm { MOV R8,RDI }
    /* +0x90b49c */ __asm { ADD R11D,0x6f8869f8 }
    /* +0x90b4a3 */ __asm { MOVSXD R11,R11D }
    /* +0x90b4a6 */ __asm { MOV ECX,0x77c8c49a }
    /* +0x90b4ab */ __asm { XOR ECX,0x4724f4a3 }
    /* +0x90b4b1 */ __asm { PXOR XMM3,XMM5 }
    /* +0x90b4b5 */ __asm { MOVQ RAX,XMM3 }
    /* +0x90b4ba */ __asm { AND R9,RBX }
    /* +0x90b4bd */ __asm { MOVQ XMM3,R9 }
    /* +0x90b4c2 */ __asm { AND R9,R8 }
    /* +0x90b4c5 */ __asm { XOR RAX,R8 }
    /* +0x90b4c8 */ __asm { IMUL RAX,RAX,0x1f933e8a }
    /* +0x90b4cf */ __asm { MOV R12,R8 }
    /* +0x90b4d2 */ __asm { IMUL R12,RDX }
    /* +0x90b4d6 */ __asm { XOR RDX,R8 }
    /* +0x90b4d9 */ __asm { NOT R8 }
    /* +0x90b4dc */ __asm { MOVQ XMM4,R8 }
    /* +0x90b4e1 */ __asm { XOR R10D,0x6f8348d }
    /* +0x90b4e8 */ __asm { MOVSXD R10,R10D }
    /* +0x90b4eb */ __asm { IMUL R10,R9 }
    /* +0x90b4ef */ __asm { PAND XMM3,XMM4 }
    /* +0x90b4f3 */ __asm { MOVQ R9,XMM3 }
    /* +0x90b4f8 */ __asm { MOV RDI,-0x86ea3c40 }
    /* +0x90b502 */ __asm { IMUL RDI,R9 }
    /* +0x90b506 */ __asm { CMP R11,RCX }
    /* +0x90b509 */ __asm { POR XMM0,XMM4 }
    /* +0x90b50d */ __asm { MOVQ R11,XMM0 }
    /* +0x90b512 */ __asm { PXOR XMM1,XMM5 }
    /* +0x90b516 */ __asm { CMOVA R12,RDX }
    /* +0x90b51a */ __asm { IMUL R9,R12,-0x78faded5 }
    /* +0x90b521 */ __asm { MOVQ RCX,XMM1 }
    /* +0x90b526 */ __asm { AND RCX,R8 }
    /* +0x90b529 */ __asm { SUB RCX,R11 }
    /* +0x90b52c */ __asm { MOV R11D,0xa67d7aca }
    /* +0x90b532 */ __asm { IMUL R11,RCX }
    /* +0x90b536 */ __asm { MOV R15,qword ptr [RBP + 0xd8] }
    /* +0x90b53d */ __asm { IMUL R13,RDX,-0xdef5d6b }
    /* +0x90b544 */ __asm { ADD R13,RAX }
    /* +0x90b547 */ __asm { ADD R13,RDI }
    /* +0x90b54a */ __asm { ADD R13,R11 }
    /* +0x90b54d */ __asm { ADD R13,R9 }
    /* +0x90b550 */ __asm { ADD R13,R10 }
    /* +0x90b553 */ __asm { MOV R11,-0x391b7f14d8bda54d }
    /* +0x90b55d */ __asm { CMP qword ptr [R15 + -0x488],R11 }
    /* +0x90b564 */ __asm { NOP }
    /* +0x90b565 */ __asm { NOP }
    /* +0x90b566 */ __asm { NOP }
    /* +0x90b567 */ __asm { NOP }
    /* +0x90b568 */ __asm { NOP }
    /* +0x90b569 */ __asm { NOP }
    /* +0x90b56a */ __asm { NOP }
    /* +0x90b56b */ __asm { NOP }
    /* +0x90b56c */ __asm { NOP }
    /* +0x90b56d */ __asm { NOP }
    /* +0x90b56e */ __asm { NOP }
    /* +0x90b56f */ __asm { NOP }
    /* +0x90b570 */ __asm { MOVZX EDI,word ptr [R14] }
    /* +0x90b574 */ __asm { LEA RCX,[R14 + 0x2] }
    /* +0x90b578 */ __asm { MOV R10W,0xe351 }
    /* +0x90b57d */ __asm { MOVD XMM1,R10D }
    /* +0x90b582 */ __asm { PADDW XMM1,xmmword ptr [0x7fffa57843d0] }
    /* +0x90b58a */ __asm { MOVD XMM5,R13D }
    /* +0x90b58f */ __asm { PXOR XMM5,XMM1 }
    /* +0x90b593 */ __asm { MOVD R10D,XMM5 }
    /* +0x90b598 */ __asm { ADD R10D,0xffffda3d }
    /* +0x90b59f */ __asm { MOVZX R8D,R10W }
    /* +0x90b5a3 */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0x90b5a7 */ __asm { MOV RAX,-0x4fcce5f0c4ebbf0b }
    /* +0x90b5b1 */ __asm { CMP R11,RAX }
    /* +0x90b5b4 */ __asm { NOP }
    /* +0x90b5b5 */ __asm { NOP }
    /* +0x90b5b6 */ __asm { NOP }
    /* +0x90b5b7 */ __asm { NOP }
    /* +0x90b5b8 */ __asm { NOP }
    /* +0x90b5b9 */ __asm { MOV R10W,0x2fc4 }
    /* +0x90b5be */ __asm { MOVD XMM1,R13D }
    /* +0x90b5c3 */ __asm { LEA R11,[0x7fffa549913b] }
    /* +0x90b5ca */ __asm { MOVD XMM5,R10D }
    /* +0x90b5cf */ __asm { PSUBW XMM5,XMM1 }
    /* +0x90b5d3 */ __asm { MOVD R10D,XMM5 }
    /* +0x90b5d8 */ __asm { XOR R10D,0x67e }
    /* +0x90b5df */ __asm { ROL R10W,0x1 }
    /* +0x90b5e3 */ __asm { MOVSX RAX,R10W }
    /* +0x90b5e7 */ __asm { ADD RAX,R11 }
    /* +0x90b5ea */ __asm { CALL RAX }
    /* +0x90b5ec */ __asm { MOV qword ptr [RBP + -0x20],RAX }
    /* +0x90b5f0 */ __asm { MOV dword ptr [RBP + 0x20],0xb4adb189 }
    /* +0x90b5f7 */ __asm { MOV R10D,dword ptr [RBP + 0x20] }
    /* +0x90b5fb */ __asm { MOV R10W,0xef60 }
    /* +0x90b600 */ __asm { IMUL R10D,R10D,0x3813 }
    /* +0x90b607 */ __asm { ADD R10D,R13D }
    /* +0x90b60a */ __asm { MOVZX R8D,R10W }
    /* +0x90b60e */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0x90b612 */ __asm { MOV EAX,0xa111fa97 }
    /* +0x90b617 */ __asm { LEA RDX,[R15 + -0x420] }
    /* +0x90b61e */ __asm { XOR EAX,R13D }
    /* +0x90b621 */ __asm { ADD EAX,0xd8044109 }
    /* +0x90b626 */ __asm { AND RDX,qword ptr [R11 + RAX*0x1] }
    /* +0x90b62a */ __asm { MOV R11,-0x80fd2de887e83dd }
    /* +0x90b634 */ __asm { CMP RDX,R11 }
    /* +0x90b637 */ __asm { NOP }
    /* +0x90b638 */ __asm { NOP }
    /* +0x90b639 */ __asm { NOP }
    /* +0x90b63a */ __asm { NOP }
    /* +0x90b63b */ __asm { NOP }
    /* +0x90b63c */ __asm { MOVZX R12D,DI }
    /* +0x90b640 */ __asm { MOV dword ptr [RBP + 0x20],0xcfd3f87b }
    /* +0x90b647 */ __asm { MOV R10D,dword ptr [RBP + 0x20] }
    /* +0x90b64b */ __asm { LEA R11,[0x7fffa47c6803] }
    /* +0x90b652 */ __asm { MOV R10D,0xbb203930 }
    /* +0x90b658 */ __asm { IMUL R10D,R10D,-0x61544ec9 }
    /* +0x90b65f */ __asm { ADD R10D,0x2a8ef64a }
    /* +0x90b666 */ __asm { XOR R10D,R13D }
    /* +0x90b669 */ __asm { MOVSXD RAX,R10D }
    /* +0x90b66c */ __asm { TEST uint8_t ptr [R11 + RAX*0x1],0x1 }
    /* +0x90b671 */ __asm { JNZ 0x7fffa507b8d8 }
    /* +0x90b677 */ __asm { MOV qword ptr [RBP + -0x30],RSI }
    /* +0x90b67b */ __asm { MOV R10D,0xc44ea04a }
    /* +0x90b681 */ __asm { IMUL R10D,R10D,0x709c6d21 }
    /* +0x90b688 */ __asm { XOR R10D,0xec85825f }
    /* +0x90b68f */ __asm { ADD R10D,R13D }
    /* +0x90b692 */ __asm { MOV dword ptr [RBP + 0x20],R10D }
    /* +0x90b696 */ __asm { MOV R10D,dword ptr [RBP + 0x20] }
    /* +0x90b69a */ __asm { MOV R8W,0x79e6 }
    /* +0x90b69f */ __asm { MOV ESI,R13D }
    /* +0x90b6a2 */ __asm { OR ESI,0x1 }
    /* +0x90b6a5 */ __asm { ADD R8D,0xffff861a }
    /* +0x90b6ac */ __asm { IMUL R8D,ESI }
    /* +0x90b6b0 */ __asm { MOVZX R8D,R8W }
    /* +0x90b6b4 */ __asm { CMP R10D,R8D }
    /* +0x90b6b7 */ __asm { NOP }
    /* +0x90b6b8 */ __asm { NOP }
    /* +0x90b6b9 */ __asm { NOP }
    /* +0x90b6ba */ __asm { NOP }
    /* +0x90b6bb */ __asm { NOP }
    /* +0x90b6bc */ __asm { NOP }
    /* +0x90b6bd */ __asm { NOP }
    /* +0x90b6be */ __asm { NOP }
    /* +0x90b6bf */ __asm { NOP }
    /* +0x90b6c0 */ __asm { NOP }
    /* +0x90b6c1 */ __asm { NOP }
    /* +0x90b6c2 */ __asm { MOV qword ptr [RBP + 0x40],RDX }
    /* +0x90b6c6 */ __asm { MOV qword ptr [RBP + 0x50],RBX }
    /* +0x90b6ca */ __asm { MOV EAX,0xc9d0350f }
    /* +0x90b6cf */ __asm { PUSHFQ }
    /* +0x90b6d0 */ __asm { POP R8 }
    /* +0x90b6d2 */ __asm { AND R8D,0x100 }
    /* +0x90b6d9 */ __asm { LEA R11D,[RAX + R13*0x1] }
    /* +0x90b6dd */ __asm { ADD R11D,0xaf458eb1 }
    /* +0x90b6e4 */ __asm { MOV qword ptr [RBP + -0x58],R8 }
    /* +0x90b6e8 */ __asm { MOV qword ptr [RBP + -0x28],R11 }
    /* +0x90b6ec */ __asm { CMP R8,R11 }
    /* +0x90b6ef */ __asm { NOP }
    /* +0x90b6f0 */ __asm { NOP }
    /* +0x90b6f1 */ __asm { NOP }
    /* +0x90b6f2 */ __asm { NOP }
    /* +0x90b6f3 */ __asm { NOP }
    /* +0x90b6f4 */ __asm { NOP }
    /* +0x90b6f5 */ __asm { NOP }
    /* +0x90b6f6 */ __asm { NOP }
    /* +0x90b6f7 */ __asm { NOP }
    /* +0x90b6f8 */ __asm { NOP }
    /* +0x90b6f9 */ __asm { NOP }
    /* +0x90b6fa */ __asm { NOP }
    /* +0x90b6fb */ __asm { NOP }
    /* +0x90b6fc */ __asm { NOP }
    /* +0x90b6fd */ __asm { NOP }
    /* +0x90b6fe */ __asm { NOP }
    /* +0x90b6ff */ __asm { MOV R10W,0x2d1 }
    /* +0x90b704 */ __asm { MOVD XMM1,R10D }
    /* +0x90b709 */ __asm { MOVD XMM5,R13D }
    /* +0x90b70e */ __asm { PSUBW XMM1,XMM5 }
    /* +0x90b712 */ __asm { MOVD R10D,XMM1 }
    /* +0x90b717 */ __asm { ADD R10D,0x39b7 }
    /* +0x90b71e */ __asm { MOVZX R8D,R10W }
    /* +0x90b722 */ __asm { MOV RBX,qword ptr GS:[R8] }
    /* +0x90b726 */ __asm { MOV R10W,0x1467 }
    /* +0x90b72b */ __asm { LEA R11,[0x7fffa478c0cb] }
    /* +0x90b732 */ __asm { SUB R10D,R13D }
    /* +0x90b735 */ __asm { IMUL R8D,R10D,-0x4c95 }
    /* +0x90b73c */ __asm { MOVSX RAX,R8W }
    /* +0x90b740 */ __asm { MOV R10D,dword ptr [R11 + RAX*0x1] }
    /* +0x90b744 */ __asm { MOVD XMM14,R13D }
    /* +0x90b749 */ __asm { CMP R10D,EBX }
    /* +0x90b74c */ __asm { MOV qword ptr [RBP + 0x60],RSI }
    /* +0x90b750 */ __asm { JZ 0x7fffa507b7b7 }
    /* +0x90b752 */ __asm { LEA R11,[0x7fffa4794daa] }
    /* +0x90b759 */ __asm { LEA RDI,[0x7fffa478cb3d] }
    /* +0x90b760 */ __asm { MOV R10W,0xe2bc }
    /* +0x90b765 */ __asm { MOV R8D,0x64cf248e }
    /* +0x90b76b */ __asm { MOVD XMM1,R8D }
    /* +0x90b770 */ __asm { IMUL R8D,R10D,0x2563 }
    /* +0x90b777 */ __asm { ROL R8W,0x5 }
    /* +0x90b77c */ __asm { ADD R8D,R13D }
    /* +0x90b77f */ __asm { MOV RSI,R12 }
    /* +0x90b782 */ __asm { MOVSX R12,R8W }
    /* +0x90b786 */ __asm { MOVDQA XMM5,XMM14 }
    /* +0x90b78b */ __asm { PSUBD XMM5,XMM1 }
    /* +0x90b78f */ __asm { MOVD R10D,XMM5 }
    /* +0x90b794 */ __asm { ADD R10D,0xdde3f8bc }
    /* +0x90b79b */ __asm { MOVSXD RAX,R10D }
    /* +0x90b79e */ __asm { LEA RCX,[R11 + RAX*0x1] }
    /* +0x90b7a2 */ __asm { ADD RCX,0x8 }
    /* +0x90b7a6 */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0x90b7ac */ __asm { XCHG dword ptr [RDI + R12*0x1],EBX }
    /* +0x90b7b0 */ __asm { MOV R12,RSI }
    /* +0x90b7b3 */ __asm { MOV RSI,qword ptr [RBP + 0x60] }
    /* +0x90b7b7 */ __asm { MOV R8W,0x1a9b }
    /* +0x90b7bc */ __asm { MOV R10W,0xebb9 }
    /* +0x90b7c1 */ __asm { MOV R9W,0x6fbb }
    /* +0x90b7c6 */ __asm { LEA R11,[0x7fffa47bd139] }
    /* +0x90b7cd */ __asm { MOVSX RAX,R9W }
    /* +0x90b7d1 */ __asm { XOR RAX,-0x4496 }
    /* +0x90b7d7 */ __asm { LEA RDX,[0x7fffa4788947] }
    /* +0x90b7de */ __asm { MOV R9D,ESI }
    /* +0x90b7e1 */ __asm { IMUL R9D,R8D }
    /* +0x90b7e5 */ __asm { ADD R10D,0xffffc55a }
    /* +0x90b7ec */ __asm { ROL R10W,0x3 }
    /* +0x90b7f1 */ __asm { MOV ECX,R13D }
    /* +0x90b7f4 */ __asm { ROL R10W,CL }
    /* +0x90b7f8 */ __asm { NOT R9D }
    /* +0x90b7fb */ __asm { MOVSX RCX,R9W }
    /* +0x90b7ff */ __asm { MOVSX R9,R10W }
    /* +0x90b803 */ __asm { MOV R8,0x0 }
    /* +0x90b80a */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x90b811 */ __asm { NOP }
    /* +0x90b813 */ __asm { LEA R10,[0x7fffa478d57b] }
    /* +0x90b81a */ __asm { MOV R10D,dword ptr [R10 + R9*0x1 + 0x4] }
    /* +0x90b81f */ __asm { INC R10D }
    /* +0x90b822 */ __asm { MOV dword ptr [RDX + RAX*0x1 + 0x4],R10D }
    /* +0x90b827 */ __asm { TEST uint8_t ptr [R11 + RCX*0x1],0x1 }
    /* +0x90b82c */ __asm { JZ 0x7fffa507bad1 }
    /* +0x90b832 */ __asm { LEA R11,[0x7fffa4787afe] }
    /* +0x90b839 */ __asm { LEA RAX,[0x7fffa479203a] }
    /* +0x90b840 */ __asm { MOV R10D,0x20746329 }
    /* +0x90b846 */ __asm { MOV R8W,0xe61f }
    /* +0x90b84b */ __asm { IMUL ESI,R8D }
    /* +0x90b84f */ __asm { XOR ESI,0xffffc927 }
    /* +0x90b855 */ __asm { ADD ESI,0x6a22 }
    /* +0x90b85b */ __asm { IMUL R10D,R10D,-0xe379145 }
    /* +0x90b862 */ __asm { ROL R10D,0x1d }
    /* +0x90b866 */ __asm { MOVSX RDX,SI }
    /* +0x90b86a */ __asm { MOVD XMM1,R10D }
    /* +0x90b86f */ __asm { PADDD XMM1,XMM14 }
    /* +0x90b874 */ __asm { MOVD R10D,XMM1 }
    /* +0x90b879 */ __asm { MOVSXD RCX,R10D }
    /* +0x90b87c */ __asm { MOV R10D,dword ptr [RAX + RCX*0x1 + 0x4] }
    /* +0x90b881 */ __asm { DEC R10D }
    /* +0x90b884 */ __asm { MOV dword ptr [R11 + RDX*0x1 + 0x4],R10D }
    /* +0x90b889 */ __asm { JNZ 0x7fffa507b8d8 }
    /* +0x90b88b */ __asm { MOV AX,0xee49 }
    /* +0x90b88f */ __asm { LEA R11,[0x7fffa478db8c] }
    /* +0x90b896 */ __asm { LEA R8D,[RAX + R13*0x1] }
    /* +0x90b89a */ __asm { ADD R8D,0x5803 }
    /* +0x90b8a1 */ __asm { MOVSX RAX,R8W }
    /* +0x90b8a5 */ __asm { XOR R10D,R10D }
    /* +0x90b8a8 */ __asm { XCHG dword ptr [R11 + RAX*0x1],R10D }
    /* +0x90b8ac */ __asm { LEA R11,[0x7fffa478a239] }
    /* +0x90b8b3 */ __asm { MOV R10W,0x3fb }
    /* +0x90b8b8 */ __asm { SUB R10D,R13D }
    /* +0x90b8bb */ __asm { ADD R10D,0x1634 }
    /* +0x90b8c2 */ __asm { ROL R10W,0x1 }
    /* +0x90b8c6 */ __asm { MOVSX RAX,R10W }
    /* +0x90b8ca */ __asm { LEA RCX,[R11 + RAX*0x1] }
    /* +0x90b8ce */ __asm { ADD RCX,0x8 }
    /* +0x90b8d2 */ __asm { CALL qword ptr [0x7fffa5877640] }
    /* +0x90b8d8 */ __asm { MOV R11,0x7d0ea1459bf6115 }
    /* +0x90b8e2 */ __asm { CMP R15,R11 }
    /* +0x90b8e5 */ __asm { NOP }
    /* +0x90b8e6 */ __asm { NOP }
    /* +0x90b8e7 */ __asm { NOP }
    /* +0x90b8e8 */ __asm { NOP }
    /* +0x90b8e9 */ __asm { NOP }
    /* +0x90b8ea */ __asm { MOV R8W,0x82f1 }
    /* +0x90b8ef */ __asm { ADD R8D,0xfffff51e }
    /* +0x90b8f6 */ __asm { MOV R10D,R13D }
    /* +0x90b8f9 */ __asm { OR R10D,0x1 }
    /* +0x90b8fd */ __asm { MOV R11D,R10D }
    /* +0x90b900 */ __asm { IMUL R11D,R8D }
    /* +0x90b904 */ __asm { NOT R11D }
    /* +0x90b907 */ __asm { MOVZX R8D,R11W }
    /* +0x90b90b */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0x90b90f */ __asm { TEST uint8_t ptr [R11 + 0x2ec],0x4 }
    /* +0x90b917 */ __asm { JNZ 0x7fffa507ba7a }
    /* +0x90b91d */ __asm { MOV RDX,0x0 }
    /* +0x90b924 */ __asm { NOP }
    /* +0x90b925 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x90b92c */ __asm { MOV dword ptr [RBP + 0x20],0x411f6e40 }
    /* +0x90b933 */ __asm { MOV R8D,dword ptr [RBP + 0x20] }
    /* +0x90b937 */ __asm { TEST R8B,0x1 }
    /* +0x90b93b */ __asm { NOP }
    /* +0x90b93c */ __asm { NOP }
    /* +0x90b93d */ __asm { NOP }
    /* +0x90b93e */ __asm { NOP }
    /* +0x90b93f */ __asm { NOP }
    /* +0x90b940 */ __asm { NOP }
    /* +0x90b941 */ __asm { NOP }
    /* +0x90b942 */ __asm { MOV qword ptr [RBP + 0x60],R11 }
    /* +0x90b946 */ __asm { OR uint8_t ptr [R11 + 0x2ec],0x4 }
    /* +0x90b94e */ __asm { MOV dword ptr [RBP + 0x20],0x7bbc430d }
    /* +0x90b955 */ __asm { MOV R8D,dword ptr [RBP + 0x20] }
    /* +0x90b959 */ __asm { CMP R8D,0xddf5fe98 }
    /* +0x90b960 */ __asm { JNC 0x7fffa507c779 }
    /* +0x90b966 */ __asm { PUSHFQ }
    /* +0x90b967 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x90b96f */ __asm { POPFQ }
    /* +0x90b970 */ __asm { MOV dword ptr [RBP + 0x20],0x9fd006ce }
    /* +0x90b977 */ __asm { MOV R8D,dword ptr [RBP + 0x20] }
    /* +0x90b97b */ __asm { MOV dword ptr [RBP + 0x20],0x807de56f }
    /* +0x90b982 */ __asm { MOV R8D,dword ptr [RBP + 0x20] }
    /* +0x90b986 */ __asm { LEA R11,[0x7fffa478c7eb] }
    /* +0x90b98d */ __asm { MOV EDX,R13D }
    /* +0x90b990 */ __asm { OR EDX,0x1 }
    /* +0x90b993 */ __asm { MOV R8D,0xe7fa6d68 }
    /* +0x90b999 */ __asm { MOV ECX,0x5a1268b3 }
    /* +0x90b99e */ __asm { ADD ECX,0x1683d179 }
    /* +0x90b9a4 */ __asm { LEA RAX,[0x7fffa4791f6c] }
    /* +0x90b9ab */ __asm { LEA R9,[0x7fffa47952e4] }
    /* +0x90b9b2 */ __asm { IMUL ECX,EDX }
    /* +0x90b9b5 */ __asm { MOVSXD RDX,ECX }
    /* +0x90b9b8 */ __asm { MOV CX,0xc448 }
    /* +0x90b9bc */ __asm { IMUL R10D,ECX }
    /* +0x90b9c0 */ __asm { MOVZX EDX,uint8_t ptr [R9 + RDX*0x1 + 0xc] }
    /* +0x90b9c6 */ __asm { ADD R8D,0x1804db3c }
    /* +0x90b9cd */ __asm { MOV ECX,R13D }
    /* +0x90b9d0 */ __asm { ROL R8D,CL }
    /* +0x90b9d3 */ __asm { MOVSXD RCX,R8D }
    /* +0x90b9d6 */ __asm { NOT R10D }
    /* +0x90b9d9 */ __asm { IMUL R8D,R10D,0x5503 }
    /* +0x90b9e0 */ __asm { MOVSX R9,R8W }
    /* +0x90b9e4 */ __asm { ADD R9,R11 }
    /* +0x90b9e7 */ __asm { MOV R11,qword ptr [R9 + RDX*0x8 + 0x16] }
    /* +0x90b9ec */ __asm { XOR R11,qword ptr [RAX + RCX*0x1 + 0x60] }
    /* +0x90b9f1 */ __asm { MOV qword ptr [RBP + 0x20],R11 }
    /* +0x90b9f5 */ __asm { MOV R11,qword ptr [RBP + 0x20] }
    /* +0x90b9f9 */ __asm { PUSHFQ }
    /* +0x90b9fa */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x90ba02 */ __asm { POPFQ }
    /* +0x90ba03 */ __asm { MOV dword ptr [RBP + 0x20],0x2000105 }
    /* +0x90ba0a */ __asm { MOV R10D,dword ptr [RBP + 0x20] }
    /* +0x90ba0e */ __asm { CMP R10D,0x83b76d89 }
    /* +0x90ba15 */ __asm { JNC 0x7fffa507c798 }
    /* +0x90ba1b */ __asm { ADD R11,0x4e511c0 }
    /* +0x90ba22 */ __asm { MOV RDX,qword ptr [RBP + -0x20] }
    /* +0x90ba26 */ __asm { MOV ECX,R12D }
    /* +0x90ba29 */ __asm { CALL R11 }
    /* +0x90ba2c */ __asm { MOV R10D,0xf3560bb }
    /* +0x90ba32 */ __asm { XOR R10D,0xf0e1b762 }
    /* +0x90ba39 */ __asm { ROL R10D,0x18 }
    /* +0x90ba3d */ __asm { MOV ECX,R13D }
    /* +0x90ba40 */ __asm { ROL R10D,CL }
    /* +0x90ba43 */ __asm { MOV dword ptr [RBP + 0x20],R10D }
    /* +0x90ba47 */ __asm { MOV R10D,dword ptr [RBP + 0x20] }
    /* +0x90ba4b */ __asm { TEST R10D,R10D }
    /* +0x90ba4e */ __asm { JNS 0x7fffa507c7a7 }
    /* +0x90ba54 */ __asm { PUSHFQ }
    /* +0x90ba55 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x90ba5d */ __asm { POPFQ }
    /* +0x90ba5e */ __asm { TEST AL,AL }
    /* +0x90ba60 */ __asm { MOV R11,qword ptr [RBP + 0x60] }
    /* +0x90ba64 */ __asm { JZ 0x7fffa507bca0 }
    /* +0x90ba6a */ __asm { MOV dword ptr [RBP + 0x20],0x30480007 }
    /* +0x90ba71 */ __asm { MOV R10D,dword ptr [RBP + 0x20] }
    /* +0x90ba75 */ __asm { JMP 0x7fffa507bcb7 }
    /* +0x90ba7a */ __asm { MOVD XMM1,R10D }
    /* +0x90ba7f */ __asm { MOV R10W,0x4300 }
    /* +0x90ba84 */ __asm { MOVD XMM5,R10D }
    /* +0x90ba89 */ __asm { PMULLW XMM5,XMM1 }
    /* +0x90ba8d */ __asm { MOVD R10D,XMM5 }
    /* +0x90ba92 */ __asm { ROL R10W,0xd }
    /* +0x90ba97 */ __asm { MOVZX R8D,R10W }
    /* +0x90ba9b */ __asm { MOV R11,qword ptr GS:[R8] }
    /* +0x90ba9f */ __asm { MOV RAX,0x4674649a4f155cd5 }
    /* +0x90baa9 */ __asm { CMP qword ptr [R11 + 0x18],RAX }
    /* +0x90baad */ __asm { JNZ 0x7fffa507c587 }
    /* +0x90bab3 */ __asm { NOP }
    /* +0x90bab4 */ __asm { MOV RDX,0x0 }
    /* +0x90babb */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x90bac2 */ __asm { NOP }
    /* +0x90bac3 */ __asm { MOV BL,0x20 }
    /* +0x90bad1 */ __asm { MOV dword ptr [RBP + 0x20],0x19fd20e9 }
    /* +0x90bad8 */ __asm { MOV R10D,dword ptr [RBP + 0x20] }
    /* +0x90badc */ __asm { CMP R10D,0x5ec1b85 }
    /* +0x90bae3 */ __asm { JBE 0x7fffa507c7be }
    /* +0x90bae9 */ __asm { PXOR XMM1,XMM1 }
    /* +0x90baed */ __asm { MOVDQA xmmword ptr [RBP + -0x10],XMM1 }
    /* +0x90baf2 */ __asm { MOV R8,qword ptr [RBP + -0x28] }
    /* +0x90baf6 */ __asm { CMP dword ptr [RBP + -0x58],R8D }
    /* +0x90bafa */ __asm { NOP }
    /* +0x90bafb */ __asm { NOP }
    /* +0x90bafc */ __asm { NOP }
    /* +0x90bafd */ __asm { NOP }
    /* +0x90bafe */ __asm { NOP }
    /* +0x90baff */ __asm { NOP }
    /* +0x90bb00 */ __asm { NOP }
    /* +0x90bb01 */ __asm { NOP }
    /* +0x90bb02 */ __asm { NOP }
    /* +0x90bb03 */ __asm { NOP }
    /* +0x90bb04 */ __asm { NOP }
    /* +0x90bb05 */ __asm { NOP }
    /* +0x90bb06 */ __asm { NOP }
    /* +0x90bb07 */ __asm { NOP }
    /* +0x90bb08 */ __asm { MOV dword ptr [RBP + 0x20],0xfc00916e }
    /* +0x90bb0f */ __asm { MOV R10D,dword ptr [RBP + 0x20] }
    /* +0x90bb13 */ __asm { CMP R10D,0xe52e3f81 }
    /* +0x90bb1a */ __asm { JA 0x7fffa507bb26 }
    /* +0x90bb1c */ __asm { XOR EAX,0x10b2d278 }
    /* +0x90bb21 */ __asm { CALL 0x7ffff65d1b48 }
    /* +0x90bb26 */ __asm { MOV qword ptr [RBP + 0x8],R12 }
    /* +0x90bb2a */ __asm { MOV R9,0x6a99b4b24cca8ba4 }
    /* +0x90bb34 */ __asm { LEA RDX,[0x7fffa47bdb4c] }
    /* +0x90bb3b */ __asm { MOV R8W,0xbe58 }
    /* +0x90bb40 */ __asm { MOV R10D,0xd0822ef2 }
    /* +0x90bb46 */ __asm { MOVD XMM1,R10D }
    /* +0x90bb4b */ __asm { SUB R8D,R13D }
    /* +0x90bb4e */ __asm { MOVSX RCX,R8W }
    /* +0x90bb52 */ __asm { XOR RCX,0x202b }
    /* +0x90bb59 */ __asm { LEA R10,[0x7fffa47c35da] }
    /* +0x90bb60 */ __asm { MOV R8D,0xe61cf328 }
    /* +0x90bb66 */ __asm { ADD R8D,R13D }
    /* +0x90bb69 */ __asm { MOVSXD RAX,R8D }
    /* +0x90bb6c */ __asm { XOR RAX,-0x6d07f68e }
    /* +0x90bb72 */ __asm { LEA R11,[0x7fffa47c0c15] }
    /* +0x90bb79 */ __asm { LEA R8,[0x7fffa47c882e] }
    /* +0x90bb80 */ __asm { MOV RAX,qword ptr [R8 + RAX*0x1 + 0x18] }
    /* +0x90bb85 */ __asm { MOVZX ECX,uint8_t ptr [R11 + RCX*0x1] }
    /* +0x90bb8a */ __asm { MOV R11,-0xdc36f6e9 }
    /* +0x90bb94 */ __asm { ADD R11,R9 }
    /* +0x90bb97 */ __asm { ADD R11,R13 }
    /* +0x90bb9a */ __asm { SHR R11,CL }
    /* +0x90bb9d */ __asm { PSUBD XMM1,XMM14 }
    /* +0x90bba2 */ __asm { MOVD R8D,XMM1 }
    /* +0x90bba7 */ __asm { IMUL R8D,R8D,-0x1d36dff1 }
    /* +0x90bbae */ __asm { MOVSXD RCX,R8D }
    /* +0x90bbb1 */ __asm { MOV R9,qword ptr [R10 + RCX*0x1 + 0x8] }
    /* +0x90bbb6 */ __asm { MOV R8W,0x1236 }
    /* +0x90bbbb */ __asm { SUB R8D,R13D }
    /* +0x90bbbe */ __asm { MOVSX RCX,R8W }
    /* +0x90bbc2 */ __asm { XOR RCX,0x70a }
    /* +0x90bbc9 */ __asm { MOV RDX,qword ptr [RDX + RCX*0x1 + 0x10] }
    /* +0x90bbce */ __asm { XOR R8D,R8D }
    /* +0x90bbd1 */ __asm { MOVDQA XMM1,xmmword ptr [0x7fffa56b9810] }
    /* +0x90bbd9 */ __asm { PCMPEQD XMM5,XMM5 }
    /* +0x90bbdd */ __asm { MOVQ XMM0,R9 }
    /* +0x90bbe2 */ __asm { MOV RCX,R11 }
    /* +0x90bbe5 */ __asm { MOV R10,RCX }
    /* +0x90bbe8 */ __asm { SHL R10,0x4 }
    /* +0x90bbec */ __asm { MOVDQA XMM3,xmmword ptr [RDX + R10*0x1] }
    /* +0x90bbf2 */ __asm { MOVDQA xmmword ptr [RBP + -0x50],XMM3 }
    /* +0x90bbf7 */ __asm { PCMPEQB XMM3,XMM1 }
    /* +0x90bbfb */ __asm { PMOVMSKB EDI,XMM3 }
    /* +0x90bbff */ __asm { MOVZX R10D,uint8_t ptr [RBP + -0x41] }
    /* +0x90bc04 */ __asm { MOV dword ptr [RBP + -0x40],EDI }
    /* +0x90bc07 */ __asm { AND EDI,0x7fff }
    /* +0x90bc0d */ __asm { JZ 0x7fffa507bc76 }
    /* +0x90bc0f */ __asm { MOVZX R15D,DI }
    /* +0x90bc13 */ __asm { IMUL R12,RCX,0x78 }
    /* +0x90bc17 */ __asm { LEA RDI,[RAX + R12*0x1] }
    /* +0x90bc1b */ __asm { NOP dword ptr [RAX + R12*0x1] }
    /* +0x90bc20 */ __asm { TZCNT R12D,R15D }
    /* +0x90bc25 */ __asm { MOV RSI,R13 }
    /* +0x90bc28 */ __asm { MOVD XMM3,R13D }
    /* +0x90bc2d */ __asm { MOV R13,qword ptr [RDI + R12*0x8] }
    /* +0x90bc31 */ __asm { MOVZX EBX,uint8_t ptr [R13] }
    /* +0x90bc36 */ __asm { MOV R13B,0xac }
    /* +0x90bc39 */ __asm { MOVZX R13D,R13B }
    /* +0x90bc3d */ __asm { MOVD XMM4,R13D }
    /* +0x90bc42 */ __asm { PADDB XMM4,XMM3 }
    /* +0x90bc46 */ __asm { MOVD R13D,XMM4 }
    /* +0x90bc4b */ __asm { IMUL R13D,R13D,-0x27 }
    /* +0x90bc4f */ __asm { CMP BL,R13B }
    /* +0x90bc52 */ __asm { JZ 0x7fffa507bcc4 }
    /* +0x90bc54 */ __asm { MOVD XMM3,R15D }
}


// ============================================================================
// Function : Unwind@7fffa507c880  |  RVA: 0x90c880  |  Size: 236 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa507c880(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0x866f23bf - *(int *)(param_2 + 0x60);
  iVar2 = *(int *)((int64_t)(int)(uVar3 * 0x2000000 | uVar3 >> 7) + 0x7fffa479544e) + -1;
  *(int *)((int64_t)(int)(*(uint32_t *)(param_2 + 0xd8) ^ 0x791516a9) + 0x7fffa4793333) = iVar2;
  if (iVar2 == 0) {
    uVar3 = (uint32_t)*(uint64_t *)(param_2 + 0xd8);
    uVar1 = uVar3 | 1;
    LOCK();
    *(uint32_t *)((int64_t)(int)~((uVar3 ^ 0xc2a391e3) * 0x6d459d8d) + 0x7fffa478f7e0) = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(int)(uVar1 * 0x1f800000 | uVar1 * 0x5b1c8c3f >> 9) + 0x7fffa47903f1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa507c970  |  RVA: 0x90c970  |  Size: 81 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa507c970(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0xe0) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : FUN_7fffa507c9d0  |  RVA: 0x90c9d0  |  Size: 836 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa507cd11) */

void FUN_7fffa507c9d0(void)

{
  uint64_t uVar1;
  
  uVar1 = ~((lRam00007fffa4781488 + lRam00007fffa4780b88) * -0x80 |
           (uint64_t)-(lRam00007fffa4781488 + lRam00007fffa4780b88) >> 0x39);
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uVar1 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2;
  uRam00007fffa47bfa00 = 0;
  uRam00007fffa47bf9f8 = 0xe595792e0974158b;
  uRam00007fffa47bfa08 = 0x1e044e27ee5055d2;
  uRam00007fffa47bf9f0 = uVar1 * 0x800000 ^ uVar1 << 0x2e ^ uVar1;
  lRam00007fffa47bfa10 =
       (uRam00007fffa4780f20 << 0x3b | uRam00007fffa4780f20 >> 5) - lRam00007fffa4780f88;
  uRam00007fffa47bfa18 = 0x40cb84db55523ce3;
  uRam00007fffa47bfa28 = 0xc3ab3292c2858a81;
  uVar1 = lRam00007fffa4780cb8 * -8 ^ -lRam00007fffa4780cb8;
  uVar1 = uVar1 << 6 ^ uVar1;
  uVar1 = uVar1 << 0xc ^ uVar1;
  lRam00007fffa47bfa20 = (uVar1 << 0x30 ^ uVar1 << 0x18 ^ uVar1) + 0xf622ccd29e5801d4;
  return;
}


// ============================================================================
// Function : FUN_7fffa507cd30  |  RVA: 0x90cd30  |  Size: 383 bytes
// Callers  : FUN_7fffa507cf70@0x90cf70, FUN_7fffa5265b60@0xaf5b60
// Callees  : FUN_7fffa55d63a0@0xe663a0, FUN_7fffa5182fa0@0xa12fa0, FUN_7fffa55f2ed0@0xe82ed0, FUN_7fffa5496540@0xd26540, FUN_7fffa54539d0@0xce39d0, FUN_7fffa5668b80@0xef8b80, FUN_7fffa524fccc@0xadfccc
// ============================================================================
void FUN_7fffa507cd30(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  
  uVar4 = FUN_7fffa55d63a0();
  iVar3 = FUN_7fffa5182fa0(param_1,param_2,param_3);
  lVar5 = FUN_7fffa54539d0();
  *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
  do {
    if ((iVar3 == -1) || (iVar3 <= param_4)) {
      lVar5 = FUN_7fffa54539d0();
      if (0 < *(int *)(lVar5 + 0x30)) {
        lVar5 = FUN_7fffa54539d0();
        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + -1;
      }
      if ((iVar3 == -1) || (iVar3 <= param_4)) {
        FUN_7fffa5496540(param_1,param_2,param_3,iVar3);
        return;
      }
LAB_7fffa507ced9:
      FUN_7fffa524fccc();
      pcVar2 = (code *)__debugbreak();
      (*pcVar2)();
      return;
    }
    if ((iVar3 < 0) || (*(int *)(param_3 + 4) <= iVar3)) {
      FUN_7fffa524fccc();
      goto LAB_7fffa507ced9;
    }
    lVar5 = FUN_7fffa55d63a0();
    lVar6 = (int64_t)iVar3 * 8;
    iVar3 = *(int *)(*(int *)(param_3 + 8) + lVar6 + lVar5);
    iVar1 = *(int *)(param_3 + 8);
    iVar7 = iVar3;
    lVar5 = FUN_7fffa55d63a0();
    if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar5 = FUN_7fffa55d63a0();
      iVar1 = *(int *)(lVar5 + iVar1 + 4 + lVar6);
      lVar5 = FUN_7fffa55d63a0();
      if (lVar5 + iVar1 != 0) {
        FUN_7fffa5496540(param_1,param_2,param_3,iVar3,iVar7);
        iVar1 = *(int *)(param_3 + 8);
        lVar5 = FUN_7fffa55d63a0();
        if (*(int *)(lVar5 + iVar1 + 4 + lVar6) == 0) {
          lVar5 = 0;
        }
        else {
          iVar1 = *(int *)(param_3 + 8);
          lVar5 = FUN_7fffa55d63a0();
          iVar1 = *(int *)(lVar5 + iVar1 + 4 + lVar6);
          lVar5 = FUN_7fffa55d63a0();
          lVar5 = lVar5 + iVar1;
        }
        FUN_7fffa5668b80(lVar5,param_1,0x103);
        FUN_7fffa55f2ed0(uVar4);
      }
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa507cef0  |  RVA: 0x90cef0  |  Size: 113 bytes
// Callers  : FUN_7fffa512f3d0@0x9bf3d0
// Callees  : FUN_7fffa547a3f0@0xd0a3f0, FUN_7fffa54539d0@0xce39d0
// ============================================================================
void FUN_7fffa507cef0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t auStackX_8 [4];
  
  uVar1 = *(uint64_t *)(param_4 + 8);
  auStackX_8[0] = param_2;
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(uint64_t *)(param_1 + 0x38);
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_7fffa54539d0();
  FUN_7fffa547a3f0(param_1,auStackX_8,param_3,param_4,
                   (uint64_t)**(uint32_t **)(param_4 + 0x38) + *(int64_t *)(lVar2 + 0x60),0,0,0);
  return;
}


// ============================================================================
// Function : FUN_7fffa507cf70  |  RVA: 0x90cf70  |  Size: 553 bytes
// Callers  : none
// Callees  : FUN_7fffa55d63a0@0xe663a0, FUN_7fffa4d25b50@0x5b5b50, FUN_7fffa517b810@0xa0b810, FUN_7fffa560e390@0xe9e390, FUN_7fffa5265b60@0xaf5b60, FUN_7fffa5246e30@0xad6e30, FUN_7fffa54539d0@0xce39d0, FUN_7fffa507cd30@0x90cd30
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint64_t
FUN_7fffa507cf70(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,uint32_t *param_5,
                int param_6,uint64_t param_7,uint8_t param_8)

{
  uint32_t uVar1;
  int iVar2;
  int64_t lVar3;
  code *pcVar4;
  uint64_t uVar5;
  bool bVar6;
  uint64_t in_stack_ffffffffffffffa8;
  uint32_t uVar7;
  uint64_t in_stack_ffffffffffffffb0;
  uint32_t uVar8;
  
  uVar7 = (uint32_t)((uint64_t)in_stack_ffffffffffffffa8 >> 0x20);
  uVar8 = (uint32_t)((uint64_t)in_stack_ffffffffffffffb0 >> 0x20);
  FUN_7fffa560e390(param_3);
  lVar3 = FUN_7fffa54539d0();
  if ((*(int *)(lVar3 + 0x40) == 0) && (iVar2 = *param_1, iVar2 != -0x1f928c9d)) {
    if (iVar2 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar6 = *(int64_t *)(param_1 + 0x18) == 0x19930520;
        goto LAB_7fffa507cfc9;
      }
    }
    else {
      bVar6 = iVar2 == -0x7fffffda;
LAB_7fffa507cfc9:
      if (bVar6) goto LAB_7fffa507cfe3;
    }
    if ((0x19930521 < (*param_5 & 0x1fffffff)) && ((param_5[9] & 1) != 0)) {
      return 1;
    }
  }
LAB_7fffa507cfe3:
  if ((param_1[1] & 0x66U) == 0) {
    if ((param_5[3] == 0) &&
       ((((*param_5 & 0x1fffffff) < 0x19930521 || (uVar1 = param_5[8], uVar1 == 0)) ||
        (lVar3 = FUN_7fffa55d63a0(), lVar3 + (int)uVar1 == 0)))) {
      if ((*param_5 & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5[9] & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint32_t)param_1[6])) &&
       ((0x19930522 < (uint32_t)param_1[8] &&
        (iVar2 = *(int *)(*(int64_t *)(param_1 + 0xc) + 8), iVar2 != 0)))) {
      lVar3 = FUN_7fffa5246e30();
      pcVar4 = (code *)(lVar3 + iVar2);
      if (pcVar4 != (code *)0x0) {
        uVar5 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                          CONCAT44(uVar8,(uint32_t)param_8));
        return uVar5;
      }
    }
    FUN_7fffa517b810(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar7,param_6),param_7
                    );
    return 1;
  }
  if (param_5[1] == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((param_1[1] & 0x20U) == 0) {
LAB_7fffa507d07d:
    FUN_7fffa5265b60(param_2,param_4,param_5);
    return 1;
  }
  if (*param_1 == -0x7fffffda) {
    iVar2 = FUN_7fffa4d25b50(param_5,param_4,*(uint64_t *)(param_4 + 0x20));
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_7fffa507cd30(param_2,param_4,param_5,iVar2);
      return 1;
    }
  }
  else {
    if (*param_1 != -0x7fffffd7) goto LAB_7fffa507d07d;
    if ((-2 < param_1[0xe]) && (param_1[0xe] < (int)param_5[1])) {
      FUN_7fffa507cd30(*(uint64_t *)(param_1 + 10),param_4,param_5);
      return 1;
    }
  }
  FUN_7fffa524fccc();
  pcVar4 = (code *)__debugbreak();
  uVar5 = (*pcVar4)();
  return uVar5;
}


// ============================================================================
// Function : FUN_7fffa507d1a0  |  RVA: 0x90d1a0  |  Size: 311 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa507d1a0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint8_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  
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
    uVar3 = *(uint8_t *)((int64_t)param_2 + 2);
    *(uint16_t *)param_1 = *(uint16_t *)param_2;
    *(uint8_t *)((int64_t)param_1 + 2) = uVar3;
    return;
  case 4:
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    return;
  case 5:
    uVar3 = *(uint8_t *)((int64_t)param_2 + 4);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint8_t *)((int64_t)param_1 + 4) = uVar3;
    return;
  case 6:
    uVar4 = *(uint16_t *)((int64_t)param_2 + 4);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint16_t *)((int64_t)param_1 + 4) = uVar4;
    return;
  case 7:
    uVar4 = *(uint16_t *)((int64_t)param_2 + 4);
    uVar3 = *(uint8_t *)((int64_t)param_2 + 6);
    *(uint32_t *)param_1 = *(uint32_t *)param_2;
    *(uint16_t *)((int64_t)param_1 + 4) = uVar4;
    *(uint8_t *)((int64_t)param_1 + 6) = uVar3;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar3 = *(uint8_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint8_t *)(param_1 + 1) = uVar3;
    return;
  case 10:
    uVar4 = *(uint16_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = uVar4;
    return;
  case 0xb:
    uVar4 = *(uint16_t *)(param_2 + 1);
    uVar3 = *(uint8_t *)((int64_t)param_2 + 10);
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = uVar4;
    *(uint8_t *)((int64_t)param_1 + 10) = uVar3;
    return;
  case 0xc:
    uVar5 = *(uint32_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar5;
    return;
  case 0xd:
    uVar5 = *(uint32_t *)(param_2 + 1);
    uVar3 = *(uint8_t *)((int64_t)param_2 + 0xc);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar5;
    *(uint8_t *)((int64_t)param_1 + 0xc) = uVar3;
    return;
  case 0xe:
    uVar5 = *(uint32_t *)(param_2 + 1);
    uVar4 = *(uint16_t *)((int64_t)param_2 + 0xc);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar5;
    *(uint16_t *)((int64_t)param_1 + 0xc) = uVar4;
    return;
  case 0xf:
    uVar5 = *(uint32_t *)(param_2 + 1);
    uVar4 = *(uint16_t *)((int64_t)param_2 + 0xc);
    uVar3 = *(uint8_t *)((int64_t)param_2 + 0xe);
    *param_1 = *param_2;
    *(uint32_t *)(param_1 + 1) = uVar5;
    *(uint16_t *)((int64_t)param_1 + 0xc) = uVar4;
    *(uint8_t *)((int64_t)param_1 + 0xe) = uVar3;
    return;
  }
  if (param_3 < 0x21) {
    uVar6 = param_2[1];
    puVar13 = (uint64_t *)((int64_t)param_2 + (param_3 - 0x10));
    uVar7 = *puVar13;
    uVar8 = puVar13[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    param_1 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    *param_1 = uVar7;
    param_1[1] = uVar8;
    return;
  }
  puVar13 = (uint64_t *)((int64_t)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar13 = param_1;
  }
  if (param_1 < puVar13) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    lVar15 = (int64_t)param_2 - (int64_t)param_1;
    puVar13 = (uint64_t *)((int64_t)param_1 + lVar15 + (param_3 - 0x10));
    uVar8 = *puVar13;
    uVar9 = puVar13[1];
    puVar12 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    uVar14 = param_3 - 0x10;
    puVar13 = puVar12;
    uVar17 = uVar8;
    uVar18 = uVar9;
    if (((uint64_t)puVar12 & 0xf) != 0) {
      puVar13 = (uint64_t *)((uint64_t)puVar12 & 0xfffffffffffffff0);
      uVar17 = *(uint64_t *)((int64_t)puVar13 + lVar15);
      uVar18 = ((uint64_t *)((int64_t)puVar13 + lVar15))[1];
      *puVar12 = uVar8;
      *(uint64_t *)((int64_t)param_1 + (param_3 - 8)) = uVar9;
      uVar14 = (int64_t)puVar13 - (int64_t)param_1;
    }
    uVar16 = uVar14 >> 7;
    if (uVar16 != 0) {
      *puVar13 = uVar17;
      puVar13[1] = uVar18;
      puVar12 = puVar13;
      while( true ) {
        puVar1 = (uint64_t *)((int64_t)puVar12 + lVar15 + -0x10);
        uVar8 = puVar1[1];
        puVar13 = (uint64_t *)((int64_t)puVar12 + lVar15 + -0x20);
        uVar9 = *puVar13;
        uVar17 = puVar13[1];
        puVar13 = puVar12 + -0x10;
        puVar12[-2] = *puVar1;
        puVar12[-1] = uVar8;
        puVar12[-4] = uVar9;
        puVar12[-3] = uVar17;
        puVar1 = (uint64_t *)((int64_t)puVar12 + lVar15 + -0x30);
        uVar8 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar12 + lVar15 + -0x40);
        uVar9 = *puVar2;
        uVar17 = puVar2[1];
        uVar16 = uVar16 - 1;
        puVar12[-6] = *puVar1;
        puVar12[-5] = uVar8;
        puVar12[-8] = uVar9;
        puVar12[-7] = uVar17;
        puVar1 = (uint64_t *)((int64_t)puVar12 + lVar15 + -0x50);
        uVar8 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar12 + lVar15 + -0x60);
        uVar9 = *puVar2;
        uVar17 = puVar2[1];
        puVar12[-10] = *puVar1;
        puVar12[-9] = uVar8;
        puVar12[-0xc] = uVar9;
        puVar12[-0xb] = uVar17;
        puVar1 = (uint64_t *)((int64_t)puVar12 + lVar15 + -0x70);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar17 = *(uint64_t *)((int64_t)puVar13 + lVar15);
        uVar18 = ((uint64_t *)((int64_t)puVar13 + lVar15))[1];
        if (uVar16 == 0) break;
        puVar12[-0xe] = uVar8;
        puVar12[-0xd] = uVar9;
        *puVar13 = uVar17;
        puVar12[-0xf] = uVar18;
        puVar12 = puVar13;
      }
      puVar12[-0xe] = uVar8;
      puVar12[-0xd] = uVar9;
      uVar14 = uVar14 & 0x7f;
    }
    for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar13 = uVar17;
      puVar13[1] = uVar18;
      puVar13 = puVar13 + -2;
      uVar17 = *(uint64_t *)((int64_t)puVar13 + lVar15);
      uVar18 = ((uint64_t *)((int64_t)puVar13 + lVar15))[1];
    }
    if ((uVar14 & 0xf) != 0) {
      *param_1 = uVar6;
      param_1[1] = uVar7;
    }
    *puVar13 = uVar17;
    puVar13[1] = uVar18;
    return;
  }
  if (0x7ff < param_3) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(uint8_t *)param_1 = *(uint8_t *)param_2;
      param_2 = (uint64_t *)((int64_t)param_2 + 1);
      param_1 = (uint64_t *)((int64_t)param_1 + 1);
    }
    return;
  }
  uVar6 = *param_2;
  if (0x80 < param_3) {
    lVar15 = ((uint64_t)param_1 & 0xf) - 0x10;
    param_1 = (uint64_t *)((int64_t)param_1 - lVar15);
    param_2 = (uint64_t *)((int64_t)param_2 - lVar15);
    param_3 = param_3 + lVar15;
    if (0x80 < param_3) {
      do {
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        uVar17 = param_2[4];
        uVar18 = param_2[5];
        uVar10 = param_2[6];
        uVar11 = param_2[7];
        *param_1 = *param_2;
        param_1[1] = uVar7;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        param_1[4] = uVar17;
        param_1[5] = uVar18;
        param_1[6] = uVar10;
        param_1[7] = uVar11;
        uVar7 = param_2[9];
        uVar8 = param_2[10];
        uVar9 = param_2[0xb];
        uVar17 = param_2[0xc];
        uVar18 = param_2[0xd];
        uVar10 = param_2[0xe];
        uVar11 = param_2[0xf];
        param_1[8] = param_2[8];
        param_1[9] = uVar7;
        param_1[10] = uVar8;
        param_1[0xb] = uVar9;
        param_1[0xc] = uVar17;
        param_1[0xd] = uVar18;
        param_1[0xe] = uVar10;
        param_1[0xf] = uVar11;
        param_1 = param_1 + 0x10;
        param_2 = param_2 + 0x10;
        param_3 = param_3 - 0x80;
      } while (0x7f < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7fffa507d3c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
            *(uint32_t *)(&UNK_7fffa58947f0 + (param_3 + 0xf >> 4) * 4)))(uVar6);
  return;
}


// ============================================================================
// Function : FUN_7fffa507d440  |  RVA: 0x90d440  |  Size: 1252 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa507d6ce) */

void FUN_7fffa507d440(uint64_t param_1,uint64_t param_2)

{
  uint16_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t unaff_R12;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar6 = ~unaff_R12;
  uVar7 = uVar6 & param_2;
  uVar5 = ~param_2;
  uVar4 = ~uVar7;
  uVar4 = (uVar6 & uVar5 & uVar4) * 0x3e0a98a4 + (uVar5 & unaff_R12 & uVar7) * 0x6971a9b9 +
          (uVar4 & uVar5 & unaff_R12) * -0x4e9b9b49 + ((param_2 ^ unaff_R12) & uVar4) * 0xe912d67 +
          (uVar4 & (param_2 | unaff_R12)) * 0x14a35ccd + uVar7 * 0x1ad60e70 +
          ((uVar6 & uVar5 & uVar7) + ((param_2 | unaff_R12) & uVar7)) * -0x6fa45b5c +
          ((unaff_R12 & param_2 ^ uVar7) - (~(uVar7 & unaff_R12) | uVar5)) * 0x29673bd7 +
          ((uVar6 | param_2) ^ uVar7) * -0x6971a9b9;
  bVar2 = (uint8_t)uVar4;
  uVar5 = 0xe66d38852e2f462cU >> (bVar2 & 0x3f) | -0x1992c77ad1d0b9d4 << 0x40 - (bVar2 & 0x3f);
  *(uint64_t *)
   ((int64_t)(int)(-0x70c0000a << (bVar2 & 0x1f) | 0x8f3ffff6U >> 0x20 - (bVar2 & 0x1f)) +
   0x7fffa47c6595) =
       (-0x40dd6beabe3ec26c << (bVar2 & 0x3f) | 0xbf22941541c13d94U >> 0x40 - (bVar2 & 0x3f)) -
       0x40000000279;
  uVar3 = (uint32_t)uVar4;
  uVar1 = (uint16_t)uVar4;
  *(uint64_t *)((int64_t)(short)~(uVar1 ^ 0x6a6d) + 0x7fffa47bf4da) = uVar5 << 0x3d | uVar5 >> 3;
  *(uint64_t *)(((int64_t)(short)((uVar1 + 0x74f6) * 3) ^ 0xffffffffffffa311U) + 0x7fffa47be7a9) =
       0x48366de58b0c24bbU >> (bVar2 & 0x3f) | 0x48366de58b0c24bb << 0x40 - (bVar2 & 0x3f);
  *(uint64_t *)((int64_t)(int)((uVar3 ^ 0x24d2df00) + 0x8fe2e63b) + 0x7fffa47c5441) =
       uVar4 ^ 0x85e7c91d1098b065;
  *(uint64_t *)((int64_t)(short)((uVar1 | 1) * 0x3448) + 0x7fffa47c07d8) =
       (uVar4 ^ 0x1f1885e19ab04bdc) + 0xc0000604;
  *(uint64_t *)
   ((int64_t)(short)((-0x5ebd - uVar1) * 2 | (uint16_t)((short)(-0x5ebd - uVar1) < 0)) +
   0x7fffa47c25c2) = ~(uVar4 ^ 0xd2734fa129a45e43) * 0x750bde79;
  *(uint64_t *)((int64_t)(short)((uVar1 | 1) * 0x21c9 + -0x3e0f) + 0x7fffa47c1972) =
       -0x7475d8d9 -
       ((uVar4 & 0xffffffff | 1) * 0x4da91489 +
       ((uVar4 >> 0x20) * 0x4da91489 + (uVar4 & 0xffffffff | 1) * 0x3da97172 << 0x20));
  *(uint64_t *)
   ((int64_t)(int)((uVar3 + 0xc931b250) * 0x100 | uVar3 + 0xc931b250 >> 0x18) + 0x7fffa47c9273) =
       (((uint64_t)((0x1a56 - uVar3 ^ 0x46d) + 0xa5787dba) << 0x35 |
        (int64_t)(short)(-0x2f0 - uVar1) + 0x96a866f0fc656e9dU >> 0xb) + 0x39ca07af3d8d7e88 ^
       0x4173e94fc0461948) + 0x2abe5a5d30238165;
  return;
}


// ============================================================================
// Function : FUN_7fffa507d930  |  RVA: 0x90d930  |  Size: 60 bytes
// Callers  : none
// Callees  : FUN_7fffa560b2b0@0xe9b2b0
// ============================================================================
uint64_t * FUN_7fffa507d930(uint64_t *param_1,int64_t param_2)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_7fffa560b2b0(param_2 + 8);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa507d970  |  RVA: 0x90d970  |  Size: 3375 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa507d970(void) {
    /* +0x90d970 */ __asm { PUSH RBP }
    /* +0x90d971 */ __asm { PUSH R12 }
    /* +0x90d973 */ __asm { PUSH R15 }
    /* +0x90d975 */ __asm { PUSH RBX }
    /* +0x90d976 */ __asm { PUSH RDI }
    /* +0x90d977 */ __asm { PUSH RSI }
    /* +0x90d978 */ __asm { PUSH R13 }
    /* +0x90d97a */ __asm { PUSH R14 }
    /* +0x90d97c */ __asm { SUB RSP,0x98 }
    /* +0x90d983 */ __asm { MOV RDI,R10 }
    /* +0x90d986 */ __asm { MOV ESI,ECX }
    /* +0x90d988 */ __asm { MOV RBP,RAX }
    /* +0x90d98b */ __asm { MOV RDX,R9 }
    /* +0x90d98e */ __asm { MOV R13,qword ptr [RSP + 0x128] }
    /* +0x90d996 */ __asm { MOV R14,qword ptr [RSP + 0x110] }
    /* +0x90d99e */ __asm { MOV R12,qword ptr [RSP + 0x108] }
    /* +0x90d9a6 */ __asm { MOV R9,qword ptr [RSP + 0x100] }
    /* +0x90d9ae */ __asm { MOV EAX,R11D }
    /* +0x90d9b1 */ __asm { ROL EAX,0x5 }
    /* +0x90d9b4 */ __asm { MOV R10,-0x154786447296c06d }
    /* +0x90d9be */ __asm { IMUL R10,RDX }
    /* +0x90d9c2 */ __asm { MOV EDX,R11D }
    /* +0x90d9c5 */ __asm { ROL EDX,0xb }
    /* +0x90d9c8 */ __asm { XOR EDX,EAX }
    /* +0x90d9ca */ __asm { XOR EDX,R11D }
    /* +0x90d9cd */ __asm { MOV EAX,EDX }
    /* +0x90d9cf */ __asm { ROL EAX,0xa }
    /* +0x90d9d2 */ __asm { MOVD XMM3,EDX }
    /* +0x90d9d6 */ __asm { ROL EDX,0x16 }
    /* +0x90d9d9 */ __asm { XOR EDX,EAX }
    /* +0x90d9db */ __asm { MOVD XMM1,EDX }
    /* +0x90d9df */ __asm { PXOR XMM1,XMM3 }
    /* +0x90d9e3 */ __asm { MOVD EAX,XMM1 }
    /* +0x90d9e7 */ __asm { MOV EDX,EAX }
    /* +0x90d9e9 */ __asm { ROL EDX,0x14 }
    /* +0x90d9ec */ __asm { ROL EAX,0xc }
    /* +0x90d9ef */ __asm { XOR EAX,EDX }
    /* +0x90d9f1 */ __asm { MOVD XMM3,EAX }
    /* +0x90d9f5 */ __asm { PXOR XMM3,XMM1 }
    /* +0x90d9f9 */ __asm { MOVD EAX,XMM3 }
    /* +0x90d9fd */ __asm { MOV EDX,EAX }
    /* +0x90d9ff */ __asm { ROL EDX,0x18 }
    /* +0x90da02 */ __asm { MOV R11D,EAX }
    /* +0x90da05 */ __asm { ROL R11D,0x8 }
    /* +0x90da09 */ __asm { XOR R11D,EDX }
    /* +0x90da0c */ __asm { XOR R11D,EAX }
    /* +0x90da0f */ __asm { RDTSC }
    /* +0x90da11 */ __asm { SHL RDX,0x20 }
    /* +0x90da15 */ __asm { OR RDX,RAX }
    /* +0x90da18 */ __asm { MOV R15,-0x30ebf64fafbc6efb }
    /* +0x90da22 */ __asm { IMUL RDX,R15 }
    /* +0x90da26 */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0x90da30 */ __asm { ADD RAX,RDX }
    /* +0x90da33 */ __asm { MOV RCX,RAX }
    /* +0x90da36 */ __asm { MOVQ XMM3,RAX }
    /* +0x90da3b */ __asm { SHR RAX,0x2d }
    /* +0x90da3f */ __asm { MOVD XMM1,EAX }
    /* +0x90da43 */ __asm { MOV EDX,R11D }
    /* +0x90da46 */ __asm { SHL EDX,0x14 }
    /* +0x90da49 */ __asm { SHR RCX,0x3b }
    /* +0x90da4d */ __asm { PSRLQ XMM3,0x1b }
    /* +0x90da52 */ __asm { PXOR XMM1,XMM3 }
    /* +0x90da56 */ __asm { MOVD EAX,XMM1 }
    /* +0x90da5a */ __asm { ROR EAX,CL }
    /* +0x90da5c */ __asm { NEG EDX }
    /* +0x90da5e */ __asm { LEA EBX,[R11 + RDX*0x1] }
    /* +0x90da62 */ __asm { ADD EBX,0x514a3097 }
    /* +0x90da68 */ __asm { AND EAX,0x3 }
    /* +0x90da6b */ __asm { CMP EAX,0x2 }
    /* +0x90da6e */ __asm { JNC 0x7fffa507db19 }
    /* +0x90da74 */ __asm { CMP EAX,0x1 }
    /* +0x90da77 */ __asm { JZ 0x7fffa507de36 }
    /* +0x90da7d */ __asm { MOV EDX,0x793abefb }
    /* +0x90da82 */ __asm { MOV RAX,RDX }
    /* +0x90da85 */ __asm { ROL RAX,0x2 }
    /* +0x90da89 */ __asm { MOV RCX,0x1d48643853239001 }
    /* +0x90da93 */ __asm { MOV R11,R13 }
    /* +0x90da96 */ __asm { XOR R11,RCX }
    /* +0x90da99 */ __asm { ADD R11,0x23e11e26 }
    /* +0x90daa0 */ __asm { IMUL R11,RAX }
    /* +0x90daa4 */ __asm { MOV RAX,0x4bc999b76e4235a3 }
    /* +0x90daae */ __asm { CMP R11,RAX }
    /* +0x90dab1 */ __asm { JZ 0x7fffa507e78d }
    /* +0x90dab7 */ __asm { MOV EAX,dword ptr [RDX + 0x6c343c9] }
    /* +0x90dabd */ __asm { MOV RDX,0x5555555555555556 }
    /* +0x90dac7 */ __asm { IMUL RDX,RAX }
    /* +0x90dacb */ __asm { MOV RAX,0x5555555555555555 }
    /* +0x90dad5 */ __asm { CMP RDX,RAX }
    /* +0x90dad8 */ __asm { JBE 0x7fffa507e1c3 }
    /* +0x90dade */ __asm { LEA RDX,[0x7fffa47bb087] }
    /* +0x90dae5 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x90daec */ __asm { MOV RAX,0x0 }
    /* +0x90daf3 */ __asm { MOV RAX,-0x24364c880aa06dbb }
    /* +0x90dafd */ __asm { CMP RDX,RAX }
    /* +0x90db00 */ __asm { JZ 0x7fffa507e7d1 }
    /* +0x90db06 */ __asm { MOV qword ptr [RSP + 0x80],RAX }
    /* +0x90db0e */ __asm { MOV EAX,dword ptr [RDX + 0x1f1d] }
    /* +0x90db14 */ __asm { JMP 0x7fffa507e6e8 }
    /* +0x90db19 */ __asm { CMP EAX,0x3 }
    /* +0x90db1c */ __asm { JZ 0x7fffa507e109 }
    /* +0x90db22 */ __asm { MOV dword ptr [RSP + 0x7c],ESI }
    /* +0x90db26 */ __asm { MOV R12,RBP }
    /* +0x90db29 */ __asm { MOV EDX,0xb7e07aba }
    /* +0x90db2e */ __asm { MOV RAX,-0x33d1a12297fa9bc1 }
    /* +0x90db38 */ __asm { CMP RDX,RAX }
    /* +0x90db3b */ __asm { JZ 0x7fffa507e7a6 }
    /* +0x90db41 */ __asm { MOV R11,qword ptr [RDX + -0x37e27ab2] }
    /* +0x90db48 */ __asm { RDTSC }
    /* +0x90db4a */ __asm { MOV RSI,RAX }
    /* +0x90db4d */ __asm { MOV RBP,RDX }
    /* +0x90db50 */ __asm { MOV RDX,-0xfa49c64c2247182 }
    /* +0x90db5a */ __asm { MOV RAX,R11 }
    /* +0x90db5d */ __asm { MUL RDX }
    /* +0x90db60 */ __asm { MOV R14,RDX }
    /* +0x90db63 */ __asm { SHL RBP,0x20 }
    /* +0x90db67 */ __asm { OR RBP,RSI }
    /* +0x90db6a */ __asm { MOV EDX,0x147488c }
    /* +0x90db6f */ __asm { MOV RAX,R11 }
    /* +0x90db72 */ __asm { MUL RDX }
    /* +0x90db75 */ __asm { ADD RAX,R14 }
    /* +0x90db78 */ __asm { ADC RDX,0x0 }
    /* +0x90db7c */ __asm { TEST DL,0x1 }
    /* +0x90db7f */ __asm { JZ 0x7fffa507e1ef }
    /* +0x90db85 */ __asm { MOV RDX,-0x4b061743ec0c107b }
    /* +0x90db8f */ __asm { IMUL RBP,RDX }
    /* +0x90db93 */ __asm { MOV RCX,-0x1a390e54451a204a }
    /* +0x90db9d */ __asm { ADD RCX,RBP }
    /* +0x90dba0 */ __asm { MOV RAX,RCX }
    /* +0x90dba3 */ __asm { SHR RAX,0x2d }
    /* +0x90dba7 */ __asm { MOV RDX,RCX }
    /* +0x90dbaa */ __asm { SHR RDX,0x1b }
    /* +0x90dbae */ __asm { MOV R11W,0xcba6 }
    /* +0x90dbb3 */ __asm { XOR R11D,R13D }
    /* +0x90dbb6 */ __asm { SHR RCX,0x3b }
    /* +0x90dbba */ __asm { XOR EAX,EDX }
    /* +0x90dbbc */ __asm { ROR EAX,CL }
    /* +0x90dbbe */ __asm { MOV EDX,0xffffa45e }
    /* +0x90dbc3 */ __asm { SUB EDX,R11D }
    /* +0x90dbc6 */ __asm { MOVZX EDX,DX }
    /* +0x90dbc9 */ __asm { MOV RDX,qword ptr GS:[RDX] }
    /* +0x90dbcd */ __asm { MOV ECX,0x78891c4c }
    /* +0x90dbd2 */ __asm { XOR RCX,qword ptr [RDX + 0x30] }
    /* +0x90dbd6 */ __asm { MOV RDX,0x30130f6f26bf7ba9 }
    /* +0x90dbe0 */ __asm { IMUL RDX,RCX }
    /* +0x90dbe4 */ __asm { MOV RCX,0x374f5f82ef358247 }
    /* +0x90dbee */ __asm { CMP RDX,RCX }
    /* +0x90dbf1 */ __asm { MOV R11D,dword ptr [RSP + 0x7c] }
    /* +0x90dbf6 */ __asm { MOV R15,qword ptr [RSP + 0x110] }
    /* +0x90dbfe */ __asm { NOP }
    /* +0x90dbff */ __asm { NOP }
    /* +0x90dc00 */ __asm { NOP }
    /* +0x90dc01 */ __asm { NOP }
    /* +0x90dc02 */ __asm { NOP }
    /* +0x90dc03 */ __asm { NOP }
    /* +0x90dc04 */ __asm { NOP }
    /* +0x90dc05 */ __asm { NOP }
    /* +0x90dc06 */ __asm { NOP }
    /* +0x90dc07 */ __asm { NOP }
    /* +0x90dc08 */ __asm { NOP }
    /* +0x90dc09 */ __asm { CMP EAX,0x10f08d }
    /* +0x90dc0e */ __asm { MOV RBP,R12 }
    /* +0x90dc11 */ __asm { MOV R12,qword ptr [RSP + 0x108] }
    /* +0x90dc19 */ __asm { JA 0x7fffa507ddc3 }
    /* +0x90dc1f */ __asm { MOV RDX,qword ptr [RSP + 0xd8] }
    /* +0x90dc27 */ __asm { MOV RAX,0x76141f4f9f75c423 }
    /* +0x90dc31 */ __asm { CMP qword ptr [RDX + -0x120],RAX }
    /* +0x90dc38 */ __asm { NOP }
    /* +0x90dc39 */ __asm { NOP }
    /* +0x90dc3a */ __asm { NOP }
    /* +0x90dc3b */ __asm { NOP }
    /* +0x90dc3c */ __asm { NOP }
    /* +0x90dc3d */ __asm { NOP }
    /* +0x90dc3e */ __asm { NOP }
    /* +0x90dc3f */ __asm { NOP }
    /* +0x90dc40 */ __asm { NOP }
    /* +0x90dc41 */ __asm { NOP }
    /* +0x90dc42 */ __asm { NOP }
    /* +0x90dc43 */ __asm { NOP }
    /* +0x90dc44 */ __asm { NOP }
    /* +0x90dc45 */ __asm { NOP }
    /* +0x90dc46 */ __asm { NOP }
    /* +0x90dc47 */ __asm { NOP }
    /* +0x90dc48 */ __asm { NOP }
    /* +0x90ddc3 */ __asm { LEA RDX,[0x7fffa477dd41] }
    /* +0x90ddca */ __asm { MOV RAX,-0xd912156d6006bf8 }
    /* +0x90ddd4 */ __asm { CMP RDX,RAX }
    /* +0x90ddd7 */ __asm { NOP }
    /* +0x90ddd8 */ __asm { NOP }
    /* +0x90ddd9 */ __asm { NOP }
    /* +0x90ddda */ __asm { NOP }
    /* +0x90dddb */ __asm { NOP }
    /* +0x90dddc */ __asm { MOV AX,0x72e2 }
    /* +0x90dde0 */ __asm { IMUL EAX,EAX,-0x2759 }
    /* +0x90dde6 */ __asm { ADD EAX,0xffff8202 }
    /* +0x90ddeb */ __asm { MOV ECX,R13D }
    /* +0x90ddee */ __asm { ROR AX,CL }
    /* +0x90ddf1 */ __asm { MOV qword ptr [RSP + 0x80],RCX }
    /* +0x90ddf9 */ __asm { MOVZX EAX,AX }
    /* +0x90ddfc */ __asm { MOV EAX,dword ptr [RAX + RDX*0x1 + 0x110] }
    /* +0x90de03 */ __asm { MOV RDX,qword ptr [RSP + 0x120] }
    /* +0x90de0b */ __asm { MOV qword ptr [RSP + 0x58],RDX }
    /* +0x90de10 */ __asm { MOV RDX,qword ptr [RSP + 0x118] }
    /* +0x90de18 */ __asm { MOV qword ptr [RSP + 0x50],RDX }
    /* +0x90de1d */ __asm { MOV qword ptr [RSP + 0x48],RDI }
    /* +0x90de22 */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0x90de27 */ __asm { MOV dword ptr [RSP + 0x38],R11D }
    /* +0x90de2c */ __asm { MOV qword ptr [RSP + 0x30],R15 }
    /* +0x90de31 */ __asm { JMP 0x7fffa507e715 }
    /* +0x90de36 */ __asm { RDTSC }
    /* +0x90de38 */ __asm { SHL RDX,0x20 }
    /* +0x90de3c */ __asm { OR RDX,RAX }
    /* +0x90de3f */ __asm { MOV RAX,0x5851f42d4c957f2d }
    /* +0x90de49 */ __asm { IMUL RAX,RDX }
    /* +0x90de4d */ __asm { MOV EDX,0x8d80c3d3 }
    /* +0x90de52 */ __asm { XOR EDX,0xef55504b }
    /* +0x90de58 */ __asm { MOVD XMM3,EDX }
    /* +0x90de5c */ __asm { MOV RCX,-0x49f1de64040c66a3 }
    /* +0x90de66 */ __asm { ADD RCX,R13 }
    /* +0x90de69 */ __asm { NOT RCX }
    /* +0x90de6c */ __asm { MOV R14D,R13D }
    /* +0x90de6f */ __asm { OR R14D,0x1 }
    /* +0x90de73 */ __asm { MOVD XMM1,R14D }
    /* +0x90de78 */ __asm { PMULUDQ XMM1,XMM3 }
    /* +0x90de7c */ __asm { MOVD EDX,XMM1 }
    /* +0x90de80 */ __asm { MOV R11D,0x27a0e1a2 }
    /* +0x90de86 */ __asm { XOR R11,qword ptr [RDX] }
    /* +0x90de89 */ __asm { ADD RCX,RAX }
    /* +0x90de8c */ __asm { MOV RAX,RCX }
    /* +0x90de8f */ __asm { SHR RAX,0x1b }
    /* +0x90de93 */ __asm { MOV RDX,RCX }
    /* +0x90de96 */ __asm { SHR RDX,0x2d }
    /* +0x90de9a */ __asm { XOR EAX,EDX }
    /* +0x90de9c */ __asm { MOV RDX,-0xcc60963f }
    /* +0x90dea6 */ __asm { SHR RCX,0x3b }
    /* +0x90deaa */ __asm { ROR EAX,CL }
    /* +0x90deac */ __asm { ADD RDX,R11 }
    /* +0x90deaf */ __asm { MOV RCX,0x3600dcda6c16e3d2 }
    /* +0x90deb9 */ __asm { CMP RDX,RCX }
    /* +0x90debc */ __asm { JZ 0x7fffa507e772 }
    /* +0x90dec2 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x90dec9 */ __asm { MOV RDX,0x0 }
    /* +0x90ded0 */ __asm { CMP EAX,0x40f82c }
    /* +0x90ded5 */ __asm { JA 0x7fffa507e0a7 }
    /* +0x90dedb */ __asm { PUSHFQ }
    /* +0x90dedc */ __asm { POP RAX }
    /* +0x90dedd */ __asm { TEST EAX,0x100 }
    /* +0x90dee2 */ __asm { NOP }
    /* +0x90dee3 */ __asm { NOP }
    /* +0x90dee4 */ __asm { NOP }
    /* +0x90dee5 */ __asm { NOP }
    /* +0x90dee6 */ __asm { NOP }
    /* +0x90dee7 */ __asm { MOV dword ptr [RSP + 0x80],0x9800651c }
    /* +0x90def2 */ __asm { MOV EAX,dword ptr [RSP + 0x80] }
    /* +0x90def9 */ __asm { TEST EAX,EAX }
    /* +0x90defb */ __asm { JNS 0x7fffa507e7d9 }
    /* +0x90df01 */ __asm { MOV EDX,0x6693d546 }
    /* +0x90df06 */ __asm { MOV RAX,0x33cff3b5d9045898 }
    /* +0x90df10 */ __asm { CMP RDX,RAX }
    /* +0x90df13 */ __asm { JZ 0x7fffa507e7ed }
    /* +0x90df19 */ __asm { MOV RCX,qword ptr [RDX + 0x196a2ac2] }
    /* +0x90df20 */ __asm { MOV RDX,0x5c97dcfc9f38e9b0 }
    /* +0x90df2a */ __asm { MOV RAX,RCX }
    /* +0x90df2d */ __asm { MUL RDX }
    /* +0x90df30 */ __asm { MOV R11,RDX }
    /* +0x90df33 */ __asm { MOV EDX,0x147798e }
    /* +0x90df38 */ __asm { MOV RAX,RCX }
    /* +0x90df3b */ __asm { MUL RDX }
    /* +0x90df3e */ __asm { ADD RAX,R11 }
    /* +0x90df41 */ __asm { ADC RDX,0x0 }
    /* +0x90df45 */ __asm { TEST DL,0x1 }
    /* +0x90df48 */ __asm { JZ 0x7fffa507e0a7 }
    /* +0x90df4e */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x90df55 */ __asm { MOV RDX,0x0 }
    /* +0x90df5c */ __asm { PXOR XMM3,XMM3 }
    /* +0x90df60 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM3 }
    /* +0x90df69 */ __asm { MOV dword ptr [RSP + 0x70],0xf65e615d }
    /* +0x90df71 */ __asm { MOV EAX,dword ptr [RSP + 0x70] }
    /* +0x90df75 */ __asm { MOV EAX,0x2c2e817 }
    /* +0x90df7a */ __asm { IMUL EAX,R14D }
    /* +0x90df7e */ __asm { ROL EAX,0x14 }
    /* +0x90df81 */ __asm { MOV dword ptr [RSP + 0x80],0x0 }
    /* +0x90df8c */ __asm { MOV RDX,-0x3c226da2c27fcdfb }
    /* +0x90df96 */ __asm { CMP qword ptr [RAX],RDX }
    /* +0x90df99 */ __asm { NOP }
    /* +0x90df9a */ __asm { NOP }
    /* +0x90df9b */ __asm { NOP }
    /* +0x90df9c */ __asm { NOP }
    /* +0x90df9d */ __asm { NOP }
    /* +0x90df9e */ __asm { NOP }
    /* +0x90df9f */ __asm { NOP }
    /* +0x90dfa0 */ __asm { NOP }
    /* +0x90dfa1 */ __asm { NOP }
    /* +0x90dfa2 */ __asm { MOV R12,RBP }
    /* +0x90dfa5 */ __asm { MOV RDX,0x0 }
    /* +0x90dfac */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x90dfb3 */ __asm { MOV dword ptr [RSP + 0x70],0xe31f6a56 }
    /* +0x90dfbb */ __asm { MOV EAX,dword ptr [RSP + 0x70] }
    /* +0x90dfbf */ __asm { AND EAX,0x1 }
    /* +0x90dfc2 */ __asm { MOV EDX,R13D }
    /* +0x90dfc5 */ __asm { OR EDX,0x1 }
    /* +0x90dfc8 */ __asm { MOVD XMM3,EDX }
    /* +0x90dfcc */ __asm { MOV DX,0x3ee2 }
    /* +0x90dfd0 */ __asm { ADD EDX,0xffffb9d8 }
    /* +0x90dfd6 */ __asm { MOVD XMM1,EDX }
    /* +0x90dfda */ __asm { PMULLW XMM1,XMM3 }
    /* +0x90dfde */ __asm { MOVD EDX,XMM1 }
    /* +0x90dfe2 */ __asm { XOR EDX,0x8aa }
    /* +0x90dfe8 */ __asm { MOVZX EDX,DX }
    /* +0x90dfeb */ __asm { CMP EAX,EDX }
    /* +0x90dfed */ __asm { NOP }
    /* +0x90dfee */ __asm { NOP }
    /* +0x90dfef */ __asm { NOP }
    /* +0x90dff0 */ __asm { NOP }
    /* +0x90dff1 */ __asm { NOP }
    /* +0x90dff2 */ __asm { MOV R15,R8 }
    /* +0x90dff5 */ __asm { MOV RBP,R10 }
    /* +0x90dff8 */ __asm { LEA RAX,[0x7fffa47c0101] }
    /* +0x90dfff */ __asm { MOV EDX,0xe9ce0f71 }
    /* +0x90e004 */ __asm { XOR EDX,R13D }
    /* +0x90e007 */ __asm { NOT EDX }
    /* +0x90e009 */ __asm { MOV R10,RAX }
    /* +0x90e00c */ __asm { ROL R10,0xd }
    /* +0x90e010 */ __asm { XOR R10,RDX }
    /* +0x90e013 */ __asm { MOV RDX,-0xa83477cd7c0daf3 }
    /* +0x90e01d */ __asm { CMP R10,RDX }
    /* +0x90e020 */ __asm { JZ 0x7fffa507e818 }
    /* +0x90e026 */ __asm { MOVD XMM3,R13D }
    /* +0x90e02b */ __asm { MOV R8W,0x2a77 }
    /* +0x90e030 */ __asm { MOV EDX,0x21eaa017 }
    /* +0x90e035 */ __asm { MOV qword ptr [RSP + 0x70],R10 }
    /* +0x90e03a */ __asm { IMUL R8D,R8D,-0x5be5 }
    /* +0x90e041 */ __asm { MOVD XMM1,R8D }
    /* +0x90e046 */ __asm { PADDW XMM1,XMM3 }
    /* +0x90e04a */ __asm { MOVD R8D,XMM1 }
    /* +0x90e04f */ __asm { XOR R8D,0x1ef5 }
    /* +0x90e056 */ __asm { MOVZX R9D,R8W }
    /* +0x90e05a */ __asm { IMUL EDX,R14D }
    /* +0x90e05e */ __asm { ROL EDX,0x14 }
    /* +0x90e061 */ __asm { MOVSXD R10,EDX }
    /* +0x90e064 */ __asm { MOV R8W,0xe2bd }
    /* +0x90e069 */ __asm { XOR R8D,0xffff8a3d }
    /* +0x90e070 */ __asm { MOVD XMM1,R8D }
    /* +0x90e075 */ __asm { PSUBW XMM1,XMM3 }
    /* +0x90e079 */ __asm { PEXTRW EDX,XMM1,0x0 }
    /* +0x90e07e */ __asm { MOV EAX,dword ptr [RAX + -0x3129] }
    /* +0x90e084 */ __asm { LEA R8,[RSP + 0x80] }
    /* +0x90e08c */ __asm { SYSCALL }
    /* +0x90e08e */ __asm { MOV R10,RBP }
    /* +0x90e091 */ __asm { MOV R9,qword ptr [RSP + 0x100] }
    /* +0x90e099 */ __asm { MOV R8,R15 }
    /* +0x90e09c */ __asm { MOV RBP,R12 }
    /* +0x90e09f */ __asm { MOV R12,qword ptr [RSP + 0x108] }
    /* +0x90e0a7 */ __asm { LEA RDX,[0x7fffa478bc20] }
    /* +0x90e0ae */ __asm { MOV RAX,-0x215b2fb132a1fce3 }
    /* +0x90e0b8 */ __asm { CMP RDX,RAX }
    /* +0x90e0bb */ __asm { JZ 0x7fffa507e7bd }
    /* +0x90e0c1 */ __asm { MOV qword ptr [RSP + 0x80],RAX }
    /* +0x90e0c9 */ __asm { MOV EAX,dword ptr [RDX + -0x6dac] }
    /* +0x90e0cf */ __asm { MOV RDX,qword ptr [RSP + 0x120] }
    /* +0x90e0d7 */ __asm { MOV qword ptr [RSP + 0x58],RDX }
    /* +0x90e0dc */ __asm { MOV RDX,qword ptr [RSP + 0x118] }
    /* +0x90e0e4 */ __asm { MOV qword ptr [RSP + 0x50],RDX }
    /* +0x90e0e9 */ __asm { MOV qword ptr [RSP + 0x48],RDI }
    /* +0x90e0ee */ __asm { MOV qword ptr [RSP + 0x40],R8 }
    /* +0x90e0f3 */ __asm { MOV dword ptr [RSP + 0x38],ESI }
    /* +0x90e0f7 */ __asm { MOV RDX,qword ptr [RSP + 0x110] }
    /* +0x90e0ff */ __asm { MOV qword ptr [RSP + 0x30],RDX }
    /* +0x90e104 */ __asm { JMP 0x7fffa507e715 }
    /* +0x90e109 */ __asm { LEA RDX,[0x7fffa47c0702] }
    /* +0x90e110 */ __asm { MOV RAX,-0x2c39808bbb67ab71 }
    /* +0x90e11a */ __asm { CMP RDX,RAX }
    /* +0x90e11d */ __asm { JZ 0x7fffa507e7c9 }
    /* +0x90e123 */ __asm { MOVZX R11D,uint8_t ptr [RDX + -0x3fb9] }
    /* +0x90e12b */ __asm { MOVZX EAX,uint8_t ptr [RDX + R11*0x4 + -0x3fb3] }
    /* +0x90e134 */ __asm { NOT AL }
    /* +0x90e136 */ __asm { ROL AL,0x5 }
    /* +0x90e139 */ __asm { MOV uint8_t ptr [RSP + 0x80],AL }
    /* +0x90e140 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R11*0x4 + -0x3fb2] }
    /* +0x90e149 */ __asm { NOT AL }
    /* +0x90e14b */ __asm { ROL AL,0x5 }
    /* +0x90e14e */ __asm { MOV uint8_t ptr [RSP + 0x81],AL }
    /* +0x90e155 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R11*0x4 + -0x3fb1] }
    /* +0x90e15e */ __asm { NOT AL }
    /* +0x90e160 */ __asm { ROL AL,0x5 }
    /* +0x90e163 */ __asm { MOV uint8_t ptr [RSP + 0x82],AL }
    /* +0x90e16a */ __asm { MOVZX R11D,uint8_t ptr [RDX + R11*0x4 + -0x3fb0] }
    /* +0x90e173 */ __asm { NOT R11B }
    /* +0x90e176 */ __asm { ROL R11B,0x5 }
    /* +0x90e17a */ __asm { MOV uint8_t ptr [RSP + 0x83],R11B }
    /* +0x90e182 */ __asm { MOV EAX,0x9102c3cc }
    /* +0x90e187 */ __asm { XOR EAX,dword ptr [RSP + 0x80] }
    /* +0x90e18e */ __asm { BT EAX,EAX }
    /* +0x90e191 */ __asm { JNC 0x7fffa507e4ea }
    /* +0x90e197 */ __asm { LEA RDX,[0x7fffa47bb265] }
    /* +0x90e19e */ __asm { MOV RAX,0x5508f0df0c1d3cf0 }
    /* +0x90e1a8 */ __asm { CMP RDX,RAX }
    /* +0x90e1ab */ __asm { NOP }
    /* +0x90e1ac */ __asm { NOP }
    /* +0x90e1ad */ __asm { NOP }
    /* +0x90e1ae */ __asm { NOP }
    /* +0x90e1af */ __asm { NOP }
    /* +0x90e1b0 */ __asm { MOV qword ptr [RSP + 0x80],RAX }
    /* +0x90e1b8 */ __asm { MOV EAX,dword ptr [RDX + 0x1d3f] }
    /* +0x90e1be */ __asm { JMP 0x7fffa507e6e8 }
    /* +0x90e1c3 */ __asm { LEA RDX,[0x7fffa47c060c] }
    /* +0x90e1ca */ __asm { MOV RAX,0x1d78b2f29b2409d3 }
    /* +0x90e1d4 */ __asm { CMP RDX,RAX }
    /* +0x90e1d7 */ __asm { NOP }
    /* +0x90e1d8 */ __asm { NOP }
    /* +0x90e1d9 */ __asm { NOP }
    /* +0x90e1da */ __asm { NOP }
    /* +0x90e1db */ __asm { NOP }
    /* +0x90e1dc */ __asm { MOV qword ptr [RSP + 0x80],RAX }
    /* +0x90e1e4 */ __asm { MOV EAX,dword ptr [RDX + -0x411c] }
    /* +0x90e1ea */ __asm { JMP 0x7fffa507e6e8 }
    /* +0x90e1ef */ __asm { IMUL RBP,R15 }
    /* +0x90e1f3 */ __asm { MOV RCX,0x1b0989d5663d888a }
    /* +0x90e1fd */ __asm { ADD RCX,RBP }
    /* +0x90e200 */ __asm { MOVQ XMM3,RCX }
    /* +0x90e205 */ __asm { MOVDQA XMM1,XMM3 }
    /* +0x90e209 */ __asm { PSRLQ XMM1,0x1b }
    /* +0x90e20e */ __asm { SHR RCX,0x3b }
    /* +0x90e212 */ __asm { PSRLQ XMM3,0x2d }
    /* +0x90e217 */ __asm { PXOR XMM3,XMM1 }
    /* +0x90e21b */ __asm { MOVD EAX,XMM3 }
    /* +0x90e21f */ __asm { ROR EAX,CL }
    /* +0x90e221 */ __asm { MOV dword ptr [RSP + 0x80],0xd6761d30 }
    /* +0x90e22c */ __asm { MOV EDX,dword ptr [RSP + 0x80] }
    /* +0x90e233 */ __asm { CMP EDX,0xbe93e1bf }
    /* +0x90e239 */ __asm { MOV ESI,dword ptr [RSP + 0x7c] }
    /* +0x90e23d */ __asm { MOV R11,qword ptr [RSP + 0x110] }
    /* +0x90e245 */ __asm { JBE 0x7fffa507e7f7 }
    /* +0x90e24b */ __asm { PUSHFQ }
    /* +0x90e24c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x90e254 */ __asm { POPFQ }
    /* +0x90e255 */ __asm { CMP EAX,0x40c4cc }
    /* +0x90e25a */ __asm { MOV RBP,R12 }
    /* +0x90e25d */ __asm { MOV R12,qword ptr [RSP + 0x108] }
    /* +0x90e265 */ __asm { JA 0x7fffa507e468 }
    /* +0x90e26b */ __asm { MOV dword ptr [RSP + 0x80],0x14ba06b }
    /* +0x90e276 */ __asm { MOV EAX,dword ptr [RSP + 0x80] }
    /* +0x90e27d */ __asm { TEST AL,0x1 }
    /* +0x90e27f */ __asm { JZ 0x7fffa507e82d }
    /* +0x90e285 */ __asm { MOV RAX,0x7083d7a8101e24e6 }
    /* +0x90e28f */ __asm { MOV EDX,0x359ec312 }
    /* +0x90e294 */ __asm { IMUL RAX,RAX,-0x5cc4da79 }
    /* +0x90e29b */ __asm { MOV ECX,R13D }
    /* +0x90e29e */ __asm { ROL RAX,CL }
    /* +0x90e2a1 */ __asm { MOV RCX,RDX }
    /* +0x90e2a4 */ __asm { ADD RCX,-0x6215f008 }
    /* +0x90e2ab */ __asm { XOR RCX,0x1ffa31eb }
    /* +0x90e2b2 */ __asm { CMP RAX,RCX }
    /* +0x90e2b5 */ __asm { JZ 0x7fffa507e835 }
    /* +0x90e2bb */ __asm { MOV EAX,R13D }
    /* +0x90e2be */ __asm { OR EAX,0x1 }
    /* +0x90e2c1 */ __asm { MOVD XMM1,EAX }
    /* +0x90e2c5 */ __asm { MOV R14D,0xd979152c }
    /* +0x90e2cb */ __asm { MOV RCX,qword ptr [RDX + 0x4a5f3cf6] }
    /* +0x90e2d2 */ __asm { MOV RDX,-0x57820ac7012703e9 }
    /* +0x90e2dc */ __asm { MOV RAX,RCX }
    /* +0x90e2df */ __asm { MUL RDX }
    /* +0x90e2e2 */ __asm { MOV R11,RDX }
    /* +0x90e2e5 */ __asm { MOV EDX,0x1477002 }
    /* +0x90e2ea */ __asm { MOV RAX,RCX }
    /* +0x90e2ed */ __asm { MUL RDX }
    /* +0x90e2f0 */ __asm { MOVD XMM0,R14D }
    /* +0x90e2f5 */ __asm { ADD RAX,R11 }
    /* +0x90e2f8 */ __asm { ADC RDX,0x0 }
    /* +0x90e2fc */ __asm { MOVD XMM3,R13D }
    /* +0x90e301 */ __asm { PSUBD XMM0,XMM3 }
    /* +0x90e305 */ __asm { MOVD EAX,XMM0 }
    /* +0x90e309 */ __asm { ROL EAX,0x5 }
    /* +0x90e30c */ __asm { MOV R11D,0x1de91fec }
    /* +0x90e312 */ __asm { MOVD XMM0,R11D }
    /* +0x90e317 */ __asm { PMULUDQ XMM0,XMM1 }
    /* +0x90e31b */ __asm { MOVD R11D,XMM0 }
    /* +0x90e320 */ __asm { ADD R11D,0x3bb4e5d0 }
    /* +0x90e327 */ __asm { ROL R11D,0x11 }
    /* +0x90e32b */ __asm { MOVSXD RCX,R11D }
    /* +0x90e32e */ __asm { CMP RAX,RCX }
    /* +0x90e331 */ __asm { SETL R11B }
    /* +0x90e335 */ __asm { TEST DL,0x1 }
    /* +0x90e338 */ __asm { SETZ AL }
    /* +0x90e33b */ __asm { XOR AL,R11B }
    /* +0x90e33e */ __asm { MOV R11,qword ptr [RSP + 0x110] }
    /* +0x90e346 */ __asm { JNZ 0x7fffa507e468 }
    /* +0x90e34c */ __asm { PXOR XMM1,XMM1 }
    /* +0x90e350 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM1 }
    /* +0x90e359 */ __asm { MOV AX,0x9868 }
    /* +0x90e35d */ __asm { ADD EAX,R13D }
    /* +0x90e360 */ __asm { ROR AX,0x1 }
    /* +0x90e363 */ __asm { MOVZX EAX,AX }
    /* +0x90e366 */ __asm { MOV RDX,qword ptr GS:[RAX] }
    /* +0x90e36a */ __asm { MOV RAX,0x7a82a5747091a1a1 }
    /* +0x90e374 */ __asm { CMP qword ptr [RDX + 0x18],RAX }
    /* +0x90e378 */ __asm { NOP }
    /* +0x90e379 */ __asm { NOP }
    /* +0x90e37a */ __asm { NOP }
    /* +0x90e37b */ __asm { NOP }
    /* +0x90e37c */ __asm { NOP }
}


// ============================================================================
// Function : FUN_7fffa507e880  |  RVA: 0x90e880  |  Size: 210 bytes
// Callers  : FUN_7fffa51562d4@0x9e62d4
// Callees  : FUN_7fffa5404bd0@0xc94bd0, FUN_7fffa5496200@0xd26200, FUN_7fffa4a993dc@0x3293dc, FUN_7fffa5102740@0x992740, FUN_7fffa5181628@0xa11628
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa507e880(int64_t param_1)

{
  uint32_t uVar1;
  int iVar2;
  int64_t lVar3;
  uint32_t in_XMM0_Da;
  int64_t alStack_48 [2];
  uint8_t uStack_38;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  char cStack_20;
  uint32_t uStack_1c;
  char cStack_18;
  uint32_t uStack_14;
  char cStack_10;
  
  alStack_48[0] = 0;
  cStack_20 = _DAT_7fffa4782620 == 0;
  uStack_38 = 0;
  cStack_18 = '\0';
  cStack_10 = '\0';
  if ((bool)cStack_20) {
    uStack_30 = PTR_PTR_7fffa47808e8._0_4_;
    uStack_2c = PTR_PTR_7fffa47808e8._4_4_;
    uStack_28 = _DAT_7fffa47808f0;
    uStack_24 = uRam00007fffa47808f4;
    in_XMM0_Da = PTR_PTR_7fffa47808e8._0_4_;
  }
  if (param_1 == 0) {
    uVar1 = FUN_7fffa4a993dc(0);
    goto LAB_7fffa507e905;
  }
  iVar2 = FUN_7fffa5496200(in_XMM0_Da,alStack_48);
  if (iVar2 == 0) {
    if ((*(uint32_t *)(param_1 + 0x14) >> 0xb & 1) != 0) {
      uVar1 = FUN_7fffa5404bd0(param_1);
      iVar2 = FUN_7fffa5102740(uVar1);
      if (iVar2 != 0) goto LAB_7fffa507e8e0;
    }
    uVar1 = 0;
  }
  else {
LAB_7fffa507e8e0:
    uVar1 = 0xffffffff;
  }
LAB_7fffa507e905:
  if (cStack_20 == '\x02') {
    *(uint32_t *)(alStack_48[0] + 0x3a8) = *(uint32_t *)(alStack_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (cStack_18 != '\0') {
    lVar3 = FUN_7fffa5181628(alStack_48);
    *(uint32_t *)(lVar3 + 0x20) = uStack_1c;
  }
  if (cStack_10 != '\0') {
    lVar3 = FUN_7fffa5181628(alStack_48);
    *(uint32_t *)(lVar3 + 0x24) = uStack_14;
  }
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa507e960  |  RVA: 0x90e960  |  Size: 817 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa507eac3) */

void FUN_7fffa507e960(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = 0;
  bRam00007fffa47857f0 = '\0';
  uRam00007fffa4785806 = 0;
  uRam00007fffa478580e = 0;
  uRam00007fffa47857f6 = 0;
  uRam00007fffa47857fe = 0;
  uRam00007fffa4785820 = 0;
  uVar1 = rdtsc();
  uVar1 = uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1);
  while( true ) {
    lVar2 = (uVar1 * 0x595ecb42b3ed79c + 0xb) * 0x595ecb42b3ed79c + 0xb;
    uVar1 = lVar2 * -0x373300c472d898f0 + 0x3d712bbddbb343bf;
    *(char *)(lVar3 + 0x7fffa47857f1) = (char)((uint64_t)(lVar2 * 0xb42b3ed79c) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47857f3) = (char)(uVar1 * 0x595ecb42b3ed79c >> 0x20);
    *(char *)(lVar3 + 0x7fffa47857f2) = (char)(uVar1 >> 0x20);
    *(char *)(lVar3 + 0x7fffa47857f0) = (char)((uint64_t)lVar2 >> 0x20);
    if (lVar3 == 0x34) break;
    lVar3 = lVar3 + 4;
  }
  bRam00007fffa47857f0 = bRam00007fffa47857f0 + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa47857f0 * 8 + 0x7fffa47857f6) = 0xffffffffffffffff;
  return;
}


// ============================================================================
// Function : FUN_7fffa507eca0  |  RVA: 0x90eca0  |  Size: 38 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa507eca0(void)

{
  uint32_t in_EAX;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0xe368b9b7,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa507ecd4  |  RVA: 0x90ecd4  |  Size: 462 bytes
// Callers  : FUN_7fffa52d242c@0xb6242c
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa5476b88@0xd06b88, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa4ed9184@0x769184, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa507ecd4(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4
                     )

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint32_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  
  FUN_7fffa5476b88(*param_2);
  puVar7 = (uint64_t *)(*(int64_t *)(*(int64_t *)*param_3 + 0x88) + 0x18);
  if (PTR_DAT_7fffa47825b8 == (uint8_t *)0x0) {
LAB_7fffa507ed87:
    puVar8 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar8 = 0x16;
    FUN_7fffa55c8ce0();
  }
  else {
    if (puVar7 == (uint64_t *)0x0) {
      FUN_7fffa4ecf8e0(PTR_DAT_7fffa47825b8,0,0x101);
      goto LAB_7fffa507ed87;
    }
    lVar11 = 2;
    puVar10 = (uint64_t *)PTR_DAT_7fffa47825b8;
    do {
      uVar6 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar6;
      uVar6 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar6;
      uVar6 = puVar7[5];
      puVar10[4] = puVar7[4];
      puVar10[5] = uVar6;
      uVar6 = puVar7[7];
      puVar10[6] = puVar7[6];
      puVar10[7] = uVar6;
      uVar6 = puVar7[9];
      puVar10[8] = puVar7[8];
      puVar10[9] = uVar6;
      uVar6 = puVar7[0xb];
      puVar10[10] = puVar7[10];
      puVar10[0xb] = uVar6;
      uVar3 = *(uint32_t *)((int64_t)puVar7 + 100);
      uVar4 = *(uint32_t *)(puVar7 + 0xd);
      uVar5 = *(uint32_t *)((int64_t)puVar7 + 0x6c);
      *(uint32_t *)(puVar10 + 0xc) = *(uint32_t *)(puVar7 + 0xc);
      *(uint32_t *)((int64_t)puVar10 + 100) = uVar3;
      *(uint32_t *)(puVar10 + 0xd) = uVar4;
      *(uint32_t *)((int64_t)puVar10 + 0x6c) = uVar5;
      puVar9 = puVar10 + 0x10;
      uVar6 = puVar7[0xf];
      puVar10[0xe] = puVar7[0xe];
      puVar10[0xf] = uVar6;
      puVar7 = puVar7 + 0x10;
      lVar11 = lVar11 + -1;
      puVar10 = puVar9;
    } while (lVar11 != 0);
    *(uint8_t *)puVar9 = *(uint8_t *)puVar7;
  }
  lVar11 = 2;
  puVar7 = (uint64_t *)(*(int64_t *)(*(int64_t *)*param_3 + 0x88) + 0x119);
  if (PTR_DAT_7fffa47825c0 != (uint8_t *)0x0) {
    puVar10 = (uint64_t *)PTR_DAT_7fffa47825c0;
    if (puVar7 != (uint64_t *)0x0) {
      do {
        uVar6 = puVar7[1];
        *puVar10 = *puVar7;
        puVar10[1] = uVar6;
        uVar6 = puVar7[3];
        puVar10[2] = puVar7[2];
        puVar10[3] = uVar6;
        uVar6 = puVar7[5];
        puVar10[4] = puVar7[4];
        puVar10[5] = uVar6;
        uVar6 = puVar7[7];
        puVar10[6] = puVar7[6];
        puVar10[7] = uVar6;
        uVar6 = puVar7[9];
        puVar10[8] = puVar7[8];
        puVar10[9] = uVar6;
        uVar6 = puVar7[0xb];
        puVar10[10] = puVar7[10];
        puVar10[0xb] = uVar6;
        uVar3 = *(uint32_t *)((int64_t)puVar7 + 100);
        uVar4 = *(uint32_t *)(puVar7 + 0xd);
        uVar5 = *(uint32_t *)((int64_t)puVar7 + 0x6c);
        *(uint32_t *)(puVar10 + 0xc) = *(uint32_t *)(puVar7 + 0xc);
        *(uint32_t *)((int64_t)puVar10 + 100) = uVar3;
        *(uint32_t *)(puVar10 + 0xd) = uVar4;
        *(uint32_t *)((int64_t)puVar10 + 0x6c) = uVar5;
        uVar6 = puVar7[0xf];
        puVar10[0xe] = puVar7[0xe];
        puVar10[0xf] = uVar6;
        puVar7 = puVar7 + 0x10;
        lVar11 = lVar11 + -1;
        puVar10 = puVar10 + 0x10;
      } while (lVar11 != 0);
      goto LAB_7fffa507ee38;
    }
    FUN_7fffa4ecf8e0(PTR_DAT_7fffa47825c0,0,0x100);
  }
  puVar8 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar8 = 0x16;
  FUN_7fffa55c8ce0();
LAB_7fffa507ee38:
  piVar2 = (int *)**(uint64_t **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (**(int64_t **)param_3[1] != 0x7fffa4780250)) {
    FUN_7fffa52d8dd0(**(int64_t **)param_3[1]);
  }
  **(uint64_t **)param_3[1] = *(uint64_t *)(*(int64_t *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(int64_t *)*param_3 + 0x88) = **(int **)(*(int64_t *)*param_3 + 0x88) + 1;
  UNLOCK();
  FUN_7fffa4f54478(*param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa507eeb0  |  RVA: 0x90eeb0  |  Size: 71 bytes
// Callers  : FUN_7fffa52c6460@0xb56460, FUN_7fffa5697680@0xf27680
// Callees  : FUN_7fffa5513ad0@0xda3ad0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa507eeb0(void)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  
  iVar1 = FUN_7fffa5513ad0();
  if (iVar1 != 0) {
    pvVar2 = (void *)0x0;
    LOCK();
    bVar3 = _DAT_7fffa4781bb8 == (void *)0x0;
    if (bVar3) {
      _DAT_7fffa4781bb8 = StackBase;
    }
    else {
      pvVar2 = _DAT_7fffa4781bb8;
    }
    UNLOCK();
    while (!bVar3) {
      if (StackBase == pvVar2) {
        return 1;
      }
      pvVar2 = (void *)0x0;
      LOCK();
      bVar3 = _DAT_7fffa4781bb8 == (void *)0x0;
      if (bVar3) {
        _DAT_7fffa4781bb8 = StackBase;
      }
      else {
        pvVar2 = _DAT_7fffa4781bb8;
      }
      UNLOCK();
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa507ef00  |  RVA: 0x90ef00  |  Size: 74 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa5102405@0x992405
// Callees  : FUN_7fffa4e90ae0@0x720ae0
// ============================================================================
uint64_t *
FUN_7fffa507ef00(uint64_t *param_1,uint64_t param_2,int param_3,int64_t param_4,
                int64_t param_5)

{
  uint32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *pcVar4;
  int iVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint32_t uVar9;
  int64_t lVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uStack_3c;
  
  uVar6 = *(uint32_t *)(param_5 + 0xc);
  iVar5 = FUN_7fffa4e90ae0(param_5,param_4);
  if (uVar6 == 0) {
    FUN_7fffa524fccc();
    pcVar4 = (code *)__debugbreak();
    puVar8 = (uint64_t *)(*pcVar4)();
    return puVar8;
  }
  lVar3 = *(int64_t *)(param_4 + 8);
  uVar11 = 0xffffffff;
  lVar10 = (int64_t)*(int *)(param_5 + 0x10);
  uVar12 = 0xffffffff;
  lVar2 = lVar3 + lVar10;
  uVar9 = uVar6;
  while( true ) {
    uVar1 = uVar9 - 1;
    if ((*(int *)(lVar3 + (uint64_t)uVar1 * 0x14 + 4 + lVar10) < iVar5) &&
       (iVar5 <= *(int *)(lVar2 + 8 + (uint64_t)uVar1 * 0x14))) break;
    uVar9 = uVar1;
    if (uVar1 == 0) {
      lVar10 = 0;
LAB_7fffa507ef8c:
      uVar9 = 0;
      do {
        uVar7 = (uint64_t)uVar9;
        if ((((lVar10 == 0) ||
             ((*(int *)(lVar10 + 4) < *(int *)(lVar2 + uVar7 * 0x14) &&
              (*(int *)(lVar2 + 4 + uVar7 * 0x14) <= *(int *)(lVar10 + 8))))) &&
            (*(int *)(lVar2 + uVar7 * 0x14) <= param_3)) &&
           (param_3 <= *(int *)(lVar2 + 4 + uVar7 * 0x14))) {
          uVar12 = uVar9;
          if (uVar11 == 0xffffffff) {
            uVar11 = uVar9;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
      *param_1 = param_2;
      param_1[2] = param_2;
      uVar6 = 0;
      if (uVar11 != 0xffffffff) {
        uVar6 = uVar11;
      }
      *(uint32_t *)(param_1 + 1) = uVar6;
      *(uint32_t *)((int64_t)param_1 + 0xc) = uStack_3c;
      uVar6 = 0;
      if (uVar11 != 0xffffffff) {
        uVar6 = uVar12 + 1;
      }
      *(uint32_t *)((int64_t)param_1 + 0x1c) = uStack_3c;
      *(uint32_t *)(param_1 + 3) = uVar6;
      return param_1;
    }
  }
  lVar10 = lVar3 + (uint64_t)(uVar9 - 1) * 0x14 + lVar10;
  goto LAB_7fffa507ef8c;
}


// ============================================================================
// Function : FUN_7fffa507ef4a  |  RVA: 0x90ef4a  |  Size: 199 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa507ef4a(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint32_t param_4,
                     uint64_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  uint32_t unaff_EBP;
  int unaff_ESI;
  uint32_t uVar3;
  int64_t lVar4;
  int in_R10D;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t *unaff_R14;
  uint32_t uVar5;
  
  lVar1 = in_R11 + unaff_RBX;
  while( true ) {
    uVar3 = param_2 - 1;
    if ((*(int *)(in_R11 + (uint64_t)uVar3 * 0x14 + 4 + unaff_RBX) < in_R10D) &&
       (in_R10D <= *(int *)(lVar1 + 8 + (uint64_t)uVar3 * 0x14))) break;
    param_2 = uVar3;
    if (uVar3 == 0) {
      lVar4 = 0;
LAB_7fffa507ef8c:
      uVar3 = 0;
      uVar5 = param_4;
      do {
        uVar2 = (uint64_t)uVar3;
        if ((((lVar4 == 0) ||
             ((*(int *)(lVar4 + 4) < *(int *)(lVar1 + uVar2 * 0x14) &&
              (*(int *)(lVar1 + 4 + uVar2 * 0x14) <= *(int *)(lVar4 + 8))))) &&
            (*(int *)(lVar1 + uVar2 * 0x14) <= unaff_ESI)) &&
           (unaff_ESI <= *(int *)(lVar1 + 4 + uVar2 * 0x14))) {
          uVar5 = uVar3;
          if (param_4 == 0xffffffff) {
            param_4 = uVar3;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < unaff_EBP);
      *unaff_R14 = unaff_R12;
      unaff_R14[2] = unaff_R12;
      uVar3 = 0;
      if (param_4 != 0xffffffff) {
        uVar3 = param_4;
      }
      *(uint32_t *)(unaff_R14 + 1) = uVar3;
      *(uint32_t *)((int64_t)unaff_R14 + 0xc) = param_5._4_4_;
      uVar3 = 0;
      if (param_4 != 0xffffffff) {
        uVar3 = uVar5 + 1;
      }
      *(uint32_t *)((int64_t)unaff_R14 + 0x1c) = param_5._4_4_;
      *(uint32_t *)(unaff_R14 + 3) = uVar3;
      return;
    }
  }
  lVar4 = in_R11 + (uint64_t)(param_2 - 1) * 0x14 + unaff_RBX;
  goto LAB_7fffa507ef8c;
}


// ============================================================================
// Function : FUN_7fffa507f011  |  RVA: 0x90f011  |  Size: 22 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa507f011(uint64_t param_1,int param_2,uint64_t param_3,int param_4,
                     uint64_t param_5)

{
  int iVar1;
  uint32_t uVar2;
  int64_t unaff_RBX;
  uint32_t unaff_EBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t *unaff_R14;
  uint64_t unaff_R15;
  
  lVar3 = in_R11 + (uint64_t)(param_2 - 1) * 0x14 + unaff_RBX;
  uVar4 = 0;
  do {
    if ((((lVar3 == 0) ||
         ((*(int *)(lVar3 + 4) < *(int *)(unaff_RDI + uVar4 * 0x14) &&
          (*(int *)(unaff_RDI + 4 + uVar4 * 0x14) <= *(int *)(lVar3 + 8))))) &&
        (*(int *)(unaff_RDI + uVar4 * 0x14) <= unaff_ESI)) &&
       ((unaff_ESI <= *(int *)(unaff_RDI + 4 + uVar4 * 0x14) && (unaff_R15 = uVar4, param_4 == -1)))
       ) {
      param_4 = (int)uVar4;
    }
    uVar2 = (int)uVar4 + 1;
    uVar4 = (uint64_t)uVar2;
  } while (uVar2 < unaff_EBP);
  *unaff_R14 = unaff_R12;
  unaff_R14[2] = unaff_R12;
  iVar1 = 0;
  if (param_4 != -1) {
    iVar1 = param_4;
  }
  *(int *)(unaff_R14 + 1) = iVar1;
  *(uint32_t *)((int64_t)unaff_R14 + 0xc) = param_5._4_4_;
  iVar1 = 0;
  if (param_4 != -1) {
    iVar1 = (int)unaff_R15 + 1;
  }
  *(uint32_t *)((int64_t)unaff_R14 + 0x1c) = param_5._4_4_;
  *(int *)(unaff_R14 + 3) = iVar1;
  return;
}


// ============================================================================
// Function : FUN_7fffa507f027  |  RVA: 0x90f027  |  Size: 6 bytes
// Callers  : none
// Callees  : FUN_7fffa524fccc@0xadfccc
// ============================================================================
void FUN_7fffa507f027(void)

{
  code *pcVar1;
  
  FUN_7fffa524fccc();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa507f030  |  RVA: 0x90f030  |  Size: 14978 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa507f030(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                          int64_t param_5,int64_t param_6,uint64_t param_7)

{
  int *piVar1;
  int64_t lVar2;
  int *piVar3;
  short *psVar4;
  char *pcVar5;
  char *pcVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  uint8_t bVar14;
  uint8_t bVar15;
  uint8_t bVar16;
  uint8_t bVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  char cVar31;
  char cVar30;
  char cVar29;
  char cVar28;
  char cVar39;
  char cVar38;
  char cVar37;
  char cVar36;
  char cVar35;
  char cVar34;
  char cVar33;
  char cVar32;
  char cVar42;
  char cVar41;
  char cVar40;
  uint8_t bVar43;
  uint16_t uVar44;
  uint16_t uVar45;
  uint16_t uVar46;
  short sVar47;
  uint16_t uVar48;
  uint64_t in_RAX;
  uint64_t uVar49;
  uint16_t *puVar50;
  uint8_t *puVar51;
  uint16_t *puVar52;
  uint64_t uVar53;
  uint8_t bVar54;
  short sVar55;
  int64_t lVar56;
  code *pcVar57;
  uint8_t *pbVar58;
  uint64_t uVar59;
  char *pcVar60;
  uint16_t *puVar61;
  int64_t lVar62;
  uint32_t uVar63;
  uint32_t uVar64;
  uint32_t uVar65;
  uint64_t uVar66;
  char *pcVar67;
  uint64_t uVar68;
  uint32_t *puVar69;
  uint32_t *puVar70;
  uint32_t uVar71;
  int64_t lVar72;
  uint32_t uVar73;
  uint32_t uVar74;
  uint32_t uVar75;
  uint64_t uVar76;
  short sVar77;
  uint64_t uVar78;
  uint64_t uVar79;
  uint64_t uVar80;
  char cVar81;
  uint8_t bVar82;
  uint32_t uVar83;
  int64_t lVar84;
  int64_t lVar85;
  uint64_t uVar86;
  uint8_t bVar87;
  uint32_t in_R10D;
  uint32_t uVar88;
  int64_t lVar89;
  char cVar90;
  uint32_t uVar91;
  int64_t in_R11;
  int64_t lVar92;
  uint64_t uVar93;
  uint16_t *puVar94;
  uint32_t uVar95;
  uint32_t uVar96;
  uint8_t *pbVar97;
  uint16_t uVar98;
  uint32_t uVar99;
  uint64_t uVar100;
  bool bVar101;
  bool bVar102;
  short sVar103;
  uint32_t uVar104;
  uint32_t uVar105;
  undefined6 uVar106;
  uint8_t auVar107 [16];
  uint8_t auVar108 [16];
  uint8_t auVar109 [16];
  uint8_t auVar110 [16];
  int iVar111;
  int iVar114;
  int iVar115;
  int iVar116;
  uint8_t auVar112 [16];
  uint8_t auVar113 [16];
  int iVar117;
  int iVar121;
  int iVar122;
  int iVar123;
  uint8_t auVar118 [16];
  uint8_t auVar119 [16];
  uint8_t auVar120 [16];
  int iVar124;
  uint32_t uVar125;
  int iVar130;
  int iVar131;
  int iVar133;
  uint8_t auVar126 [16];
  uint8_t auVar127 [16];
  uint8_t auVar128 [16];
  uint8_t auVar129 [16];
  int64_t lVar132;
  int iVar136;
  int iVar137;
  int iVar138;
  uint8_t auVar134 [16];
  uint8_t auVar135 [16];
  uint8_t auVar139 [16];
  uint8_t auVar140 [16];
  short sVar141;
  uint64_t uVar142;
  uint8_t auVar143 [12];
  uint8_t auVar144 [14];
  uint8_t auVar145 [16];
  short sVar146;
  uint32_t uVar147;
  undefined6 uVar148;
  uint64_t uVar149;
  uint8_t auVar150 [12];
  uint8_t auVar151 [14];
  uint8_t auVar152 [16];
  uint64_t uStack_360;
  int iStack_330;
  uint8_t auStack_308 [10];
  undefined6 uStack_2fe;
  unkbyte10 Stack_2f8;
  uint8_t (*pauStack_2e8) [16];
  uint16_t *puStack_2e0;
  uint32_t uStack_2d8;
  uint32_t uStack_2d4;
  uint64_t uStack_2d0;
  unkbyte10 Stack_2c8;
  undefined6 uStack_2be;
  uint8_t auStack_2b8 [16];
  uint64_t uStack_2a8;
  int64_t lStack_2a0;
  uint64_t uStack_298;
  uint64_t uStack_290;
  uint64_t uStack_288;
  uint64_t uStack_280;
  uint32_t uStack_274;
  uint16_t *puStack_270;
  uint32_t uStack_264;
  uint64_t uStack_260;
  uint64_t uStack_258;
  uint32_t uStack_24c;
  uint8_t *pbStack_248;
  uint64_t uStack_240;
  uint64_t uStack_238;
  uint64_t uStack_230;
  int iStack_224;
  uint64_t uStack_220;
  uint64_t uStack_218;
  uint32_t uStack_20c;
  uint64_t uStack_208;
  uint64_t uStack_200;
  uint32_t uStack_1f8;
  uint32_t uStack_1f4;
  uint64_t uStack_1f0;
  uint16_t *puStack_1e8;
  uint8_t *pbStack_1e0;
  uint64_t uStack_1d8;
  char cStack_1c9;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint32_t uStack_1b4;
  char *pcStack_1b0;
  uint8_t bStack_1a1;
  uint8_t *puStack_1a0;
  uint16_t *puStack_198;
  uint16_t *puStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  char cStack_171;
  uint64_t uStack_170;
  uint64_t uStack_168;
  int64_t lStack_160;
  uint8_t bStack_151;
  uint32_t uStack_150;
  uint8_t bStack_149;
  uint64_t uStack_148;
  int64_t lStack_140;
  int64_t lStack_138;
  int64_t lStack_130;
  int64_t lStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int64_t lStack_108;
  uint32_t *puStack_100;
  char cStack_f1;
  uint64_t uStack_f0;
  
  uVar66 = (param_6 << 0x29) + param_6;
  uVar66 = uVar66 >> 4 ^ uVar66;
  uVar66 = uVar66 >> 8 ^ uVar66;
  uVar66 = uVar66 >> 0x10 ^ uVar66;
  pcVar67 = (char *)((uVar66 >> 0x20 ^ uVar66) * (0x406152a894 - param_7));
  uStack_24c = (uint32_t)param_4;
  uVar83 = (uint32_t)param_3;
  uVar99 = (uint32_t)param_7;
  if ((in_RAX & 2) == 0) {
    iVar117 = 0x1f;
    if (uStack_24c != 0) {
      for (; uStack_24c >> iVar117 == 0; iVar117 = iVar117 + -1) {
      }
    }
    iVar121 = 0x1f;
    if (in_R10D != 0) {
      for (; in_R10D >> iVar121 == 0; iVar121 = iVar121 + -1) {
      }
    }
    uVar71 = iVar117 + 2U;
    if (iVar121 + 1U < iVar117 + 2U) {
      uVar71 = iVar121 + 1U;
    }
    iVar117 = 0x1f;
    if (in_R10D - 1 != 0) {
      for (; in_R10D - 1 >> iVar117 == 0; iVar117 = iVar117 + -1) {
      }
    }
    uVar125 = 0xb;
    if (uVar83 != ((uVar99 ^ 0x6eb2) * 0x7c11 - 0x2431 & 0xffff)) {
      uVar125 = uVar83;
    }
    if (iVar117 - 1U < uVar125) {
      uVar125 = iVar117 - 1U;
    }
    if (uVar125 < uVar71) {
      uVar125 = uVar71;
    }
    uVar83 = 5;
    if (5 < uVar125) {
      uVar83 = uVar125;
    }
    uVar66 = 0xc;
    if (uVar83 < 0xc) {
      uVar66 = (uint64_t)uVar83;
    }
    return uVar66;
  }
  uVar71 = uStack_24c + 1;
  uVar66 = (uint64_t)uVar71;
  if (uVar71 == 0) {
    uVar125 = 0;
  }
  else {
    if (uVar71 < 8) {
      uVar78 = 0;
      uVar125 = 0;
    }
    else {
      uVar78 = (uint64_t)(uVar71 & 0xfffffff8);
      lVar84 = 0;
      iVar117 = 0;
      iVar121 = 0;
      iVar122 = 0;
      iVar123 = 0;
      iVar124 = 0;
      iVar130 = 0;
      iVar131 = 0;
      iVar133 = 0;
      while( true ) {
        piVar1 = (int *)(in_R11 + lVar84);
        piVar3 = (int *)(in_R11 + 0x10 + lVar84);
        iVar124 = (iVar124 - (uint32_t)(*piVar3 == 0)) + 1;
        iVar130 = (iVar130 - (uint32_t)(piVar3[1] == 0)) + 1;
        iVar131 = (iVar131 - (uint32_t)(piVar3[2] == 0)) + 1;
        iVar133 = (iVar133 - (uint32_t)(piVar3[3] == 0)) + 1;
        iVar117 = (iVar117 - (uint32_t)(*piVar1 == 0)) + 1;
        iVar121 = (iVar121 - (uint32_t)(piVar1[1] == 0)) + 1;
        iVar122 = (iVar122 - (uint32_t)(piVar1[2] == 0)) + 1;
        iVar123 = (iVar123 - (uint32_t)(piVar1[3] == 0)) + 1;
        if ((uint64_t)(uVar71 >> 3) * 0x20 + -0x20 == lVar84) break;
        lVar84 = lVar84 + 0x20;
      }
      uVar125 = iVar133 + iVar123 + iVar130 + iVar121 + iVar131 + iVar122 + iVar124 + iVar117;
      if ((uVar71 & 0xfffffff8) == uVar71) goto LAB_7fffa507f254;
    }
    do {
      lVar84 = uVar78 * 4;
      uVar78 = uVar78 + 1;
      uVar125 = (uVar125 + 1) - (uint32_t)(*(int *)(in_R11 + lVar84) == 0);
    } while (uVar66 != uVar78);
  }
LAB_7fffa507f254:
  iVar117 = 0x1f;
  if (uVar125 != 0) {
    for (; uVar125 >> iVar117 == 0; iVar117 = iVar117 + -1) {
    }
  }
  uVar125 = iVar117 + 1;
  uStack_168 = param_3;
  if (uVar125 <= uVar83) {
    param_2 = (param_2 << 0x19 | param_2 >> 0x27) ^ (param_2 << 0x31 | param_2 >> 0xf) ^ param_2;
    uStack_148 = CONCAT44(uStack_148._4_4_,uVar125);
    param_2 = (param_2 << 0x32 | param_2 >> 0xe) ^ (param_2 << 0x22 | param_2 >> 0x1e) ^ param_2;
    param_2 = (param_2 << 4 | param_2 >> 0x3c) ^ (param_2 << 0x24 | param_2 >> 0x1c) ^ param_2;
    param_2 = (param_2 << 0xe | param_2 >> 0x32) ^ (param_2 << 0x22 | param_2 >> 0x1e) ^ param_2;
    param_2 = (param_2 << 0x1c | param_2 >> 0x24) ^ (param_2 << 4 | param_2 >> 0x3c) ^ param_2;
    param_2 = (param_2 << 8 | param_2 >> 0x38) ^ (param_2 << 0x38 | param_2 >> 8) ^ param_2;
    lVar84 = ((param_2 << 0x30 | param_2 >> 0x10) ^ (param_2 << 0x10 | param_2 >> 0x30) ^ param_2) *
             (0x111111117263b9a4 - param_7);
    uStack_264 = CONCAT31(uStack_264._1_3_,0xff < uStack_24c);
    puStack_2e0 = (uint16_t *)(param_4 & 0xffffffff);
    uVar78 = (int64_t)puStack_2e0 - 1U >> 1;
    uStack_240 = uVar78 + 1;
    uStack_208 = uStack_240 & 0xfffffffffffffffc;
    uStack_298 = uStack_240 & 0xfffffffffffffff0;
    iVar117 = 0x1f;
    if (uStack_24c != 0) {
      for (; uStack_24c >> iVar117 == 0; iVar117 = iVar117 + -1) {
      }
    }
    uStack_1f8 = iVar117 + 1;
    uStack_220 = param_4 >> 1 & 0x7fffffff;
    iVar117 = 0x1f;
    if (uStack_24c - 1 != 0) {
      for (; uStack_24c - 1 >> iVar117 == 0; iVar117 = iVar117 + -1) {
      }
    }
    uStack_20c = 6;
    if (iVar117 - 2U < 6) {
      uStack_20c = iVar117 - 2U;
    }
    uVar68 = (uint64_t)(-(int)param_5 & 3);
    uStack_1d8 = lVar84 - 0x2ed;
    puVar61 = (uint16_t *)((param_5 + lVar84) - 2);
    uStack_188 = (uint64_t)(uStack_24c & 3);
    puVar69 = (uint32_t *)(param_5 + uVar68);
    uVar73 = -(int)puVar69 & 3;
    uStack_120 = (uint64_t)uVar73;
    puStack_1e8 = (uint16_t *)(param_5 + 0x2ed);
    pbStack_248 = (uint8_t *)(param_5 + uVar68 + 0x1ed);
    bStack_149 = pbStack_248 < (uint8_t *)(param_5 + 0x2ee + uVar78) &&
                 puStack_1e8 <
                 (uint16_t *)
                 ((int64_t)puVar69 + ((int64_t)puStack_2e0 - 1U & 0xfffffffffffffffe) + 0x1ef);
    uStack_170 = (uint64_t)(uVar71 & 3);
    uVar78 = uVar66 | 0x1fe;
    if (((uVar99 + 0xe8405322) * 0x20 | uVar99 + 0xe8405322 >> 0x1b) <
        (uVar99 + 0xdd696c7b) * -0x20e65ea3) {
      uVar78 = (uint64_t)(uVar71 & 0x1fe);
    }
    cStack_1c9 = lVar84 - uVar68 <
                 (uint64_t)((0x6282a893 - uVar99) * 0x100000 | 0x6282a893 - uVar99 >> 0xc) ||
                 0xff < uStack_24c;
    uStack_180 = (uint64_t)((uVar71 >> 1) + 1);
    bVar101 = lVar84 - 0x2ecU < uStack_180;
    cStack_171 = uVar73 != 0 || bVar101;
    cStack_f1 = 0x80 < uStack_24c || bVar101;
    uStack_360 = (uint64_t)uVar125;
    uStack_1b4 = ~(uVar99 ^ 0xf2e5576c) & 0xffff;
    uStack_1c8 = (uint64_t)(uVar99 + 0x5f75 & 0xffff);
    uStack_290 = (uint64_t)~((0x603508e2 - uVar99) * 0x1e9b270d);
    lVar56 = param_4 << 0x20;
    uVar46 = (uint16_t)param_7;
    lStack_108 = (uint64_t)(uStack_24c & 0xfc) - 4;
    lVar84 = param_5 + uVar68;
    lVar72 = lVar84 + 8;
    lStack_130 = param_5 + 0xf + uVar68;
    lVar2 = param_5 + uVar68;
    lVar85 = param_5 + uVar68 + 0x1e1;
    lStack_140 = param_5 + uVar68 + uStack_120 + 0x1a0;
    uStack_1f4 = uVar99 | 1;
    uStack_274 = uVar99 | 1;
    iStack_224 = uVar83 + 1;
    uVar68 = (int64_t)puStack_2e0 * 3;
    puStack_270 = (uint16_t *)(uStack_298 * 2);
    cVar81 = (char)param_4 + '\x7f';
    uStack_110 = (int64_t)puVar69 + uStack_120;
    pauStack_2e8 = (uint8_t (*) [16])(uStack_120 + 400 + (int64_t)puVar69);
    lStack_128 = uStack_120 + 0x1c4 + (int64_t)puVar69;
    uStack_200 = uStack_120 + 0xec + (int64_t)puVar69;
    pbStack_1e0 = (uint8_t *)((int64_t)puStack_2e0 + 0x1ed + (int64_t)puVar69);
    puStack_190 = (uint16_t *)(uStack_208 * 2);
    puStack_198 = (uint16_t *)((int64_t)puStack_2e0 * 8);
    uStack_24c = uStack_24c + 0xff;
    uStack_280 = (int64_t)puStack_2e0 + 1;
    pcStack_1b0 = pcVar67 + 8;
    lStack_160 = uStack_188 - 1;
    uStack_1f0 = uStack_298 - 0x10;
    uStack_218 = uStack_208 - 4;
    uStack_238 = 0xfffffffffffffffe;
    auVar129 = _DAT_7fffa56bc4f0;
    auVar128 = _DAT_7fffa56b26a0;
    auVar140 = _DAT_7fffa56b9c80;
    auVar139 = _DAT_7fffa56b8d90;
    auVar145 = _PTR_DAT_7fffa56bc2c0;
    uStack_258 = param_4;
    uStack_150 = uVar71;
    lStack_138 = in_R11;
    uStack_118 = uStack_360;
    puStack_100 = puVar69;
    do {
      if (cStack_1c9 == '\0') {
        FUN_7fffa4ecf8e0(puVar69,0);
        uVar79 = uStack_170;
        bVar43 = (uint8_t)param_7;
        if ((int)param_4 == 0) {
          uVar93 = 0;
        }
        else {
          uVar93 = 0;
          do {
            uVar83 = *(uint32_t *)(in_R11 + uVar93 * 4);
            uVar125 = 0x1f;
            if (uVar83 != 0) {
              for (; uVar83 >> uVar125 == 0; uVar125 = uVar125 - 1) {
              }
            }
            uVar125 = (uint32_t)(uint16_t)((0x2dca << (bVar43 & 0xf) | 0x2dcaU >> 0x10 - (bVar43 & 0xf)) ^
                                    0x6eec) - (uVar125 ^ 0x1f);
            if (uVar83 < 0xa5) {
              uVar125 = uVar83;
            }
            psVar4 = (short *)(lVar84 + 0x1000 + (uint64_t)uVar125 * 4);
            *psVar4 = *psVar4 + (-(uint16_t)((uint64_t)(int64_t)(int)(uVar99 ^ 0xa6b7d340) <
                                          (uint64_t)
                                          (-0x4225a4ae << (bVar43 & 0x1f) |
                                          0xbdda5b52U >> 0x20 - (bVar43 & 0x1f))) | 1);
            uVar83 = *(uint32_t *)(in_R11 + 4 + uVar93 * 4);
            iVar117 = 0x1f;
            if (uVar83 != 0) {
              for (; uVar83 >> iVar117 == 0; iVar117 = iVar117 + -1) {
              }
            }
            uVar125 = iVar117 + 0x9e;
            if (uVar83 < 0xa5) {
              uVar125 = uVar83;
            }
            psVar4 = (short *)(lVar84 + 0x1000 + (uint64_t)uVar125 * 4);
            *psVar4 = *psVar4 + 1;
            uVar93 = uVar93 + 2;
          } while (uVar78 != uVar93);
        }
        if ((uVar71 & 1) != 0) {
          uVar83 = *(uint32_t *)(in_R11 + uVar93 * 4);
          iVar117 = 0x1f;
          if (uVar83 != 0) {
            for (; uVar83 >> iVar117 == 0; iVar117 = iVar117 + -1) {
            }
          }
          uVar125 = iVar117 + 0x9e;
          if (uVar83 < (~(uVar99 + 0x56c7) & 0xffff)) {
            uVar125 = uVar83;
          }
          psVar4 = (short *)(lVar84 + 0x1000 + (uint64_t)uVar125 * 4);
          *psVar4 = *psVar4 + 1;
        }
        sVar55 = *(short *)((int64_t)puStack_100 + uStack_290);
        lVar92 = 0;
        while( true ) {
          sVar55 = sVar55 + *(short *)(lVar84 + 0x12f8 + lVar92 * 4);
          sVar77 = *(short *)(lVar84 + 0x12f4 + lVar92 * 4) + sVar55;
          sVar47 = *(short *)(lVar84 + 0x12f0 + lVar92 * 4) + sVar77;
          *(short *)(lVar84 + 0x12f8 + lVar92 * 4) = sVar55;
          *(short *)(lVar84 + 0x12f4 + lVar92 * 4) = sVar77;
          *(short *)(lVar84 + 0x12fa + lVar92 * 4) = sVar55;
          *(short *)(lVar84 + 0x12f6 + lVar92 * 4) = sVar77;
          *(short *)(lVar84 + 0x12f0 + lVar92 * 4) = sVar47;
          *(short *)(lVar84 + 0x12f2 + lVar92 * 4) = sVar47;
          if (lVar92 == -0xbc) break;
          sVar55 = sVar47 + *(short *)(lVar84 + 0x12ec + lVar92 * 4);
          *(short *)(lVar84 + 0x12ec + lVar92 * 4) = sVar55;
          *(short *)(lVar84 + 0x12ee + lVar92 * 4) = sVar55;
          lVar92 = lVar92 + -4;
        }
        uStack_264 = uVar99 | 1;
        uVar93 = 0;
        while( true ) {
          uVar83 = *(uint32_t *)(in_R11 + uVar93 * 4);
          uVar125 = 0x1f;
          if (uVar83 != 0) {
            for (; uVar83 >> uVar125 == 0; uVar125 = uVar125 - 1) {
            }
          }
          uVar125 = (0xa950 - uVar99 & 0xffff) - (uVar125 ^ 0x1f);
          if (uVar83 < 0xa5) {
            uVar125 = uVar83;
          }
          uVar48 = *(uint16_t *)((int64_t)puStack_100 + (uint64_t)uVar125 * 4 + 0x1006);
          *(uint16_t *)((int64_t)puStack_100 + (uint64_t)uVar125 * 4 + 0x1006) = uVar48 + 1;
          *(char *)((int64_t)puStack_100 + (uint64_t)uVar48 * 8 + 0xe) = (char)uVar93;
          puStack_100[(uint64_t)uVar48 * 2 + 2] = uVar83;
          if (uVar66 - 1 == uVar93) break;
          uVar93 = uVar93 + 1;
        }
        uVar93 = 0xa5;
        do {
          uVar48 = *(uint16_t *)(lVar84 + 0x1000 + uVar93 * 4);
          iVar117 = (uint32_t)*(uint16_t *)(lVar84 + 0x1002 + uVar93 * 4) - (uint32_t)uVar48;
          if (1 < iVar117) {
            uVar49 = lVar72 + (uint64_t)uVar48 * 8;
            uVar49 = uVar49 >> 0xe ^ uVar49;
            pcVar57 = (code *)((int64_t)(int)(uStack_264 * -0x5b778b92) + 0x7fffa5155a46);
            (*pcVar57)(pcVar57,(uVar99 + 0x1c398a6b) * 0x1415a2c7,0x7fffa5155a46,0,
                       (uVar49 << 0x32 | uVar49 >> 0xe) ^ (uVar49 << 0x33 | uVar49 >> 0xd) ^ uVar49,
                       iVar117 + -1);
          }
          param_4 = uStack_258;
          uVar93 = (uVar93 - 1) +
                   (uint64_t)
                   ((0x40f2e803U >> (bVar43 & 0x1f) | 0x40f2e803 << 0x20 - (bVar43 & 0x1f)) ==
                   0x5d00681e) * 2;
        } while (uVar93 != uVar99 + 0x9ead582c);
        uStack_148 = (uint64_t)uStack_150;
        puVar50 = puStack_2e0;
        lVar92 = lVar56;
        uStack_1c0 = uStack_280;
        puVar94 = puStack_198;
        uVar83 = uStack_24c;
        while( true ) {
          iVar117 = *(int *)(lVar72 + (int64_t)puVar50 * 8);
          if (iVar117 != 0) break;
          puVar50 = (uint16_t *)((int64_t)puVar50 - 1);
          lVar92 = lVar92 + -0x100000000;
          puVar94 = puVar94 + -4;
          uVar83 = uVar83 - 1;
          uStack_148 = (uint64_t)((uint32_t)uStack_148 - 1);
          uStack_1c0 = uStack_1c0 - 1;
        }
        uStack_230 = puVar94;
        *(uint16_t *)(lVar84 + 0xc + (int64_t)puVar50 * 8) = 0x100;
        *(int *)((int64_t)puStack_100 + uStack_1c8) =
             iVar117 + *(int *)(lVar84 + (int64_t)puVar50 * 8);
        *(uint16_t *)(lVar84 + 4 + (int64_t)puVar50 * 8) = 0x100;
        iVar117 = (int)((int64_t)puVar50 + 0xffU);
        if ((int64_t)puVar50 < 2) {
          *(uint8_t *)((int64_t)puStack_100 + (int64_t)iVar117 * 8 + 0xf) = 0;
          *puStack_100 = ((0x3b17a57c - uVar99) * 0x20 | 0x3b17a57c - uVar99 >> 0x1b) ^ 0xb89f9d3b;
        }
        else {
          puVar51 = (uint8_t *)0x101;
          if (0x101 < iVar117) {
            puVar51 = (uint8_t *)((int64_t)puVar50 + 0xffU & 0xffffffff);
          }
          lVar62 = 0x101;
          if (0x107 < iVar117) {
            puStack_1a0 = puVar51;
            lVar89 = -0x108;
            if (0x6d3a88df < ~(uVar99 + 0xd547eb10)) {
              lVar89 = 0x108;
            }
            uVar125 = 0x101;
            if (0x101 < (int)uVar83) {
              uVar125 = uVar83;
            }
            lVar62 = 0x109;
            while( true ) {
              puStack_100[lVar62 * 2 + -4] = 0xa152a893 - uVar99;
              puStack_100[lVar62 * 2 + -6] = 0x40000000;
              puStack_100[lVar62 * 2 + -0xc] =
                   (0x30570d19U >> (bVar43 & 0x1f) | 0x30570d19 << 0x20 - (bVar43 & 0x1f)) +
                   0x5e5cd9f6;
              puStack_100[lVar62 * 2 + -10] =
                   (0x6192a893 - uVar99) * 0x100 | 0x6192a893 - uVar99 >> 0x18;
              puStack_100[lVar62 * 2] = 0xa152a893 - uVar99;
              puStack_100[lVar62 * 2 + -0xe] = uStack_264 * -0x141ac332 ^ 0x2c851a4a;
              puStack_100[lVar62 * 2 + -8] = uVar99 + 0xdead576d;
              puStack_100[lVar62 * 2 + -2] = ~(uStack_264 * -0x45acb59b);
              if ((lVar89 - (uint64_t)(uVar125 & 0x7ffffff8)) + lVar62 == 0x109) break;
              lVar62 = lVar62 + 8;
            }
          }
          if (((uint64_t)puVar51 & 7) != 0) {
            lVar89 = (uint64_t)((uint32_t)puVar51 & 7) - 1;
            auVar119._8_4_ = (int)lVar89;
            auVar119._0_8_ = lVar89;
            auVar119._12_4_ = (int)((uint64_t)lVar89 >> 0x20);
            uVar125 = 0x101;
            if (0x101 < (int)uVar83) {
              uVar125 = uVar83;
            }
            lVar62 = lVar72 + lVar62 * 8;
            lVar89 = 0;
            while( true ) {
              auVar108._8_4_ = (int)lVar89;
              auVar108._0_8_ = lVar89;
              auVar108._12_4_ = (int)((uint64_t)lVar89 >> 0x20);
              auVar126 = (auVar108 | auVar139) ^ auVar128;
              iVar121 = SUB164(auVar119 ^ auVar128,0);
              bVar101 = iVar121 < auVar126._0_4_;
              iVar122 = SUB164(auVar119 ^ auVar128,4);
              iVar123 = auVar126._4_4_;
              if ((bool)(~(iVar122 < iVar123 || iVar123 == iVar122 && bVar101) & 1)) {
                *(uint32_t *)(lVar62 + lVar89 * 8) =
                     (0x9800 << (bVar43 & 0x1f) | 0x9800U >> 0x20 - (bVar43 & 0x1f)) + 0x7ffffffc;
              }
              if (iVar122 >= iVar123 && (iVar123 != iVar122 || !bVar101)) {
                *(uint32_t *)(lVar62 + 8 + lVar89 * 8) = uVar99 + 0x9b54ca65 ^ 0xbca772f8;
              }
              auVar126 = (auVar108 | auVar129) ^ auVar128;
              iVar123 = auVar126._4_4_;
              if (iVar123 <= iVar122 && (iVar123 != iVar122 || auVar126._0_4_ <= iVar121)) {
                *(uint32_t *)(lVar62 + 0x10 + lVar89 * 8) = uStack_264 * -0x40000000;
                *(uint32_t *)(lVar62 + 0x18 + lVar89 * 8) = uVar99 ^ 0x2152a893;
              }
              if ((uint64_t)((uVar125 & 7) + 3 & 0xfffffffc) - 4 == lVar89) break;
              lVar89 = lVar89 + 4;
            }
          }
          puVar52 = puVar50 + -1;
          *puStack_100 = 0x80000000;
          uVar79 = (uint64_t)uVar83;
          if ((int)uVar83 < 0x102) {
            uVar79 = 0x101;
          }
          iVar121 = 0x100;
          uVar93 = 0x101;
          while( true ) {
            iVar122 = (int)puVar52;
            uVar83 = puStack_100[(int64_t)iVar122 * 2 + 2];
            uVar125 = puStack_100[(int64_t)iVar121 * 2 + 2];
            iVar123 = (iVar121 + 1) - (uint32_t)(uVar83 < uVar125);
            iVar124 = iVar122 - (uint32_t)(uVar83 < uVar125);
            uVar73 = puStack_100[(int64_t)iVar123 * 2 + 2];
            uVar91 = puStack_100[(int64_t)iVar124 * 2 + 2];
            if (uVar83 < uVar125) {
              iVar121 = iVar122;
            }
            iVar122 = iVar123;
            if (uVar91 < uVar73) {
              iVar122 = iVar124;
            }
            *(short *)(puStack_100 + (int64_t)iVar122 * 2 + 3) = (short)uVar93;
            puStack_100[uVar93 * 2 + 2] =
                 puStack_100[(int64_t)iVar122 * 2 + 2] + puStack_100[(int64_t)iVar121 * 2 + 2];
            *(short *)(puStack_100 + (int64_t)iVar121 * 2 + 3) = (short)uVar93;
            if (uVar79 == uVar93) break;
            iVar121 = (iVar123 + 1) - (uint32_t)(uVar91 < uVar73);
            uVar93 = uVar93 + 1;
            puVar52 = (uint16_t *)(uint64_t)(iVar124 - (uint32_t)(uVar91 < uVar73));
          }
          *(uint8_t *)(lVar84 + 0xf + (int64_t)iVar117 * 8) = 0;
          uVar93 = (uint64_t)(puVar50 + 0x7f) & 0xffffffff;
          while( true ) {
            uVar48 = *(uint16_t *)(lStack_130 + -3 + uVar93 * 8);
            uVar79 = (uint64_t)uVar48;
            if ((-0x14c96f7e << (bVar43 & 0x1f) | 0xeb369082U >> 0x20 - (bVar43 & 0x1f)) !=
                0x841759b4) {
              uVar79 = (int64_t)(short)uVar48;
            }
            *(char *)(lStack_130 + uVar93 * 8) = *(char *)(lVar84 + 0xf + uVar79 * 8) + '\x01';
            uVar79 = uStack_170;
            in_R11 = lStack_138;
            if (uVar93 < 0x101) break;
            uVar93 = uVar93 - 1;
          }
        }
        uStack_260 = 0;
        bVar101 = (int64_t)(uint64_t)(uint16_t)(0U >> (bVar43 & 0xf) | 0 << 0x10 - (bVar43 & 0xf))
                  <= (int64_t)puVar50;
        iStack_330 = (int)puVar50;
        if (bVar101) {
          if (iStack_330 == 0) {
            uVar93 = 0;
          }
          else {
            uVar49 = 0;
            do {
              uVar93 = uVar49 + 2;
              *(char *)(lVar2 + 0xf + uVar49 * 8) =
                   *(char *)(lVar84 + 0xf + (uint64_t)*(uint16_t *)(lVar2 + 0xc + uVar49 * 8) * 8) +
                   '\x01';
              *(char *)(lVar2 + 0x17 + uVar49 * 8) =
                   *(char *)(lVar84 + 0xf + (uint64_t)*(uint16_t *)(lVar2 + 0x14 + uVar49 * 8) * 8) +
                   '\x01';
              uVar49 = uVar93;
            } while (((uint32_t)uStack_148 & 0xfffffffe) != uVar93);
          }
          if (((int64_t)puVar50 + 1U & 1) != 0) {
            *(char *)(lVar84 + 0xf + uVar93 * 8) =
                 *(char *)(lVar84 + 0xf + (uint64_t)*(uint16_t *)(lVar84 + 0xc + uVar93 * 8) * 8) +
                 '\x01';
          }
        }
        bVar82 = *(uint8_t *)(lVar84 + 0xf + ((uint64_t)puVar94 & 0x7fffffff8));
        uVar93 = (uint64_t)bVar82;
        if (uStack_360 < bVar82) {
          bVar54 = (uint8_t)((uint32_t)bVar82 - (int)uStack_360);
          uVar83 = 1 << (bVar54 & 0x1f);
          uStack_148 = (uint64_t)uVar83;
          lVar62 = lVar92 >> 0x20;
          uVar93 = (uint64_t)*(uint8_t *)(lVar84 + 0xf + (lVar92 >> 0x1d));
          if (uStack_360 < uVar93) {
            uStack_230 = (uint16_t *)
                         CONCAT44((int)((uint64_t)puVar94 >> 0x20),(uint32_t)bVar82 - (int)uStack_360);
            lVar89 = lVar62 << 0x20;
            uVar73 = (uint32_t)((uint64_t)lVar92 >> 0x20);
            uVar125 = 0;
            pbVar58 = (uint8_t *)(lVar72 + (lVar92 >> 0x1d) + 7);
            pbVar97 = (uint8_t *)(lVar72 + lVar62 * 8 + -1);
            while( true ) {
              uVar73 = uVar73 - 1;
              lVar89 = lVar89 + -0x100000000;
              *pbVar58 = (uint8_t)uStack_360;
              uVar91 = uVar125 + uVar83;
              bVar87 = bVar82 - (uint8_t)uVar93;
              if ((0xd9962984U >> (bVar43 & 0x1f) | -0x2669d67c << 0x20 - (bVar43 & 0x1f)) *
                  0x4e88ccff <= uVar99 + 0xd7844013) {
                bVar87 = bVar82 ^ (uint8_t)uVar93;
              }
              uVar105 = -1 << (bVar87 & 0x1f);
              uVar125 = uVar105 ^ uVar91;
              if ((0x8891cfb1U >> (bVar43 & 0x1f) | -0x776e304f << 0x20 - (bVar43 & 0x1f)) <=
                  uStack_264 * -0x3fe28fab) {
                uVar125 = uVar91 + uVar105;
              }
              uVar93 = (uint64_t)*pbVar97;
              if (uVar93 <= uStack_360) break;
              pbVar58 = pbVar97;
              pbVar97 = pbVar97 + -8;
            }
            lVar62 = lVar89 >> 0x20;
            uVar93 = (uint64_t)uVar73;
            uVar79 = uStack_170;
          }
          else {
            uVar125 = 0;
            uVar93 = (uint64_t)puVar50 & 0xffffffff;
          }
          while (uVar83 = (uint32_t)uVar93, uStack_360 == *(uint8_t *)(lStack_130 + lVar62 * 8)) {
            lVar62 = lVar62 + -1;
            uVar93 = (uint64_t)(uVar83 - 1);
          }
          uVar125 = (int)uVar125 >> (bVar54 & 0x1f);
          uStack_2a8 = 0xf0f0f0f0f0f0f0f0;
          auStack_2b8 = auVar140;
          Stack_2c8 = auVar140._0_10_;
          uStack_2be = auVar140._10_6_;
          uStack_2d8 = auVar140._0_4_;
          uStack_2d4 = auVar140._4_4_;
          uStack_2d0._0_2_ = auVar140._8_2_;
          if (-1 < lVar62) {
            if ((uVar83 & 1) == ((uVar99 ^ 0xfe35a893) * 0x103 & 0xffff)) {
              bVar82 = *(uint8_t *)(lVar84 + 0xf + uVar93 * 8);
              uVar100 = (uint64_t)bVar82;
              uVar49 = uStack_360 & 0xffffffff;
              if (uVar100 <= uStack_360 && uStack_360 - uVar100 != 0) {
                lVar92 = uStack_360 * uVar100;
                if ((0x29bdb5b6 - uVar99 ^ 0xc2456a5f) <= (uVar99 + 0xf7707b1a ^ 0xcfc1dd8)) {
                  lVar92 = uStack_360 - uVar100;
                }
                *(uint32_t *)((int64_t)&uStack_2d0 + (lVar92 * 2 + -4) * 2) = uVar83;
                uVar49 = (uint64_t)bVar82;
              }
              uVar93 = uVar93 - 1;
            }
            else {
              uVar49 = uStack_360 & 0xffffffff;
            }
            uVar48 = 0 << (bVar43 & 0xf) | 0U >> 0x10 - (bVar43 & 0xf);
            if ((uint16_t)(uVar48 << 0xd | uVar48 >> 3) != uVar83) {
              lVar89 = -uVar93;
              lVar92 = uVar93 * 8 + 7;
              do {
                lVar132 = 7;
                if ((int)((uStack_264 * -0x642ab21e >> 1) + 0x984594a2) <=
                    (int)(0xe6761b65U >> (bVar43 & 0x1f) | -0x1989e49b << 0x20 - (bVar43 & 0x1f))) {
                  lVar132 = lVar92;
                }
                bVar82 = *(uint8_t *)(lVar72 + lVar132);
                if ((uint32_t)bVar82 < (uint32_t)uVar49) {
                  *(int *)((int64_t)&uStack_2d0 +
                          ((uint64_t)((int)uStack_360 - (uint32_t)bVar82) * 2 + -4) * 2) = (int)uVar93;
                  uVar49 = (uint64_t)(uint32_t)bVar82;
                }
                if ((int64_t)(int)~((uVar99 ^ 0x2fba2f85) << 0xb | (uVar99 ^ 0x2fba2f85) >> 0x15) <
                    (int64_t)(uint64_t)(uVar99 + 0xdd267316)) {
                  lVar132 = uVar93 - 1;
                }
                else {
                  lVar132 = lVar89;
                }
                bVar82 = *(uint8_t *)(lVar84 + 0xf + lVar132 * 8);
                if ((uint32_t)bVar82 < (uint32_t)uVar49) {
                  *(int *)((int64_t)&uStack_2d0 +
                          ((uint64_t)((int)uStack_360 - (uint32_t)bVar82) * 2 + -4) * 2) = (int)lVar132
                  ;
                  uVar49 = (uint64_t)(uint32_t)bVar82;
                }
                lVar89 = lVar89 + 2;
                lVar92 = lVar92 + -0x10;
                bVar102 = 1 < (int64_t)uVar93;
                uVar93 = uVar93 - 2;
              } while (bVar102);
            }
          }
          for (; 0 < (int)uVar125; uVar125 = uVar125 + (-1 << ((uint8_t)uVar91 & 0x1f))) {
            uVar83 = 0x1f;
            if (uVar125 != 0) {
              for (; uVar125 >> uVar83 == 0; uVar83 = uVar83 - 1) {
              }
            }
            if ((uVar83 ^ 0x1f) != 0x1f) {
              uVar93 = (uint64_t)(0x20 - (uVar83 ^ 0x1f));
              do {
                uVar49 = uVar93 - 1;
                uVar100 = (uint64_t)*(uint32_t *)((int64_t)&uStack_2d0 + (uVar93 * 2 + -4) * 2);
                if ((uVar100 != 0xf0f0f0f0) &&
                   ((uVar83 = *(uint32_t *)((int64_t)&uStack_2d0 + ((uVar49 & 0xffffffff) * 2 + -4) * 2
                                       ), uVar83 == 0xf0f0f0f0 ||
                    (*(uint32_t *)(lVar72 + uVar100 * 8) <=
                     (uint32_t)(*(int *)(lVar72 + (uint64_t)uVar83 * 8) * 2))))) {
                  if (((uVar99 ^ 0x4e28) + 0x1952 & 0xffff) <= uVar93) goto LAB_7fffa508081e;
                  goto LAB_7fffa50807a0;
                }
                uVar93 = uVar49;
              } while ((uVar49 & 0xfffffffe) != 0);
            }
            uVar93 = 1;
LAB_7fffa50807a0:
            do {
              if (*(int *)((int64_t)&uStack_2d0 + (uVar93 * 2 + -4) * 2) != -0xf0f0f10)
              goto LAB_7fffa508081e;
              uVar93 = uVar93 + ((uint64_t)
                                 (uVar99 + 0xca99fc2f <
                                 ((uVar99 + 0xeac9b4b6) * 4 | uVar99 + 0xeac9b4b6 >> 0x1e) *
                                 0x4e5753a1) - 1 | 1);
            } while (~uVar93 * ((0x22c7c00b11b201a1 << (bVar43 & 0x3f) |
                                0x22c7c00b11b201a1U >> 0x40 - (bVar43 & 0x3f)) ^ 0x3d796917) !=
                     -0x4d7bde2a626f43e);
            uVar93 = 0xd;
LAB_7fffa508081e:
            uVar83 = *(uint32_t *)((int64_t)&uStack_2d0 + ((uVar93 & 0xffffffff) * 2 + -4) * 2);
            uVar91 = (int)uVar93 - 1;
            uVar73 = *(uint32_t *)((int64_t)&uStack_2d0 + ((uint64_t)uVar91 * 2 + -4) * 2);
            if (uVar73 == 0xf0f0f0f0) {
              uVar73 = uVar83;
            }
            *(uint32_t *)((int64_t)&uStack_2d0 + ((uint64_t)uVar91 * 2 + -4) * 2) = uVar73;
            pcVar60 = (char *)(lVar84 + 0xf + (uint64_t)uVar83 * 8);
            *pcVar60 = *pcVar60 + '\x01';
            uVar73 = 0xf0f0f0f0;
            if ((uVar83 != 0) &&
               (uVar73 = uVar83 - 1,
               (int)uStack_360 - (int)uVar93 !=
               (uint32_t)*(uint8_t *)(lVar84 + 0xf + (uint64_t)uVar73 * 8))) {
              uVar73 = 0xf0f0f0f0;
            }
            *(uint32_t *)((int64_t)&uStack_2d0 + ((uVar93 & 0xffffffff) * 2 + -4) * 2) = uVar73;
          }
          if ((int)uVar125 < (int)((uVar99 ^ 0xa893) * 0x6e69 & 0xffff)) {
            uVar93 = (uint64_t)uStack_2d4;
            while( true ) {
              iVar117 = 0;
              while ((int)uVar93 != 0x52439983 - uVar99) {
                uVar93 = (uint64_t)((int)uVar93 + 1);
                pcVar60 = (char *)(lVar84 + 0xf + uVar93 * 8);
                *pcVar60 = *pcVar60 + -1;
                iVar117 = iVar117 + -1;
                if (~(int)(short)(uVar46 * 0x11cf + -0x11de) + uVar125 == iVar117)
                goto LAB_7fffa50808c5;
              }
              iVar121 = (int)lVar62;
              lVar62 = (int64_t)iVar121 + 1;
              uVar93 = (uint64_t)(iVar121 + 2);
              do {
                lVar92 = lVar62 * 8;
                lVar62 = lVar62 + -1;
                uVar83 = (int)uVar93 - 1;
                uVar93 = (uint64_t)uVar83;
              } while (uStack_360 == *(uint8_t *)((int64_t)puStack_100 + lVar92 + 7));
              cVar90 = *(char *)(lVar84 + 0xf + (int64_t)(int)uVar83 * 8) + -1;
              if ((int64_t)((param_7 ^ 0xf91862175edb5f02) * 0xd28f5037) <
                  (int64_t)(uint64_t)(uVar99 ^ 0x6d167c89)) {
                cVar90 = -1;
              }
              *(char *)(lVar84 + 0xf + (int64_t)(int)uVar83 * 8) = cVar90;
              if (-2 < (int)(uVar125 - iVar117)) break;
              uVar125 = (uVar125 - iVar117) + 1;
            }
          }
LAB_7fffa50808c5:
          uVar93 = uStack_360;
          in_R11 = lStack_138;
        }
        puVar69 = puStack_100;
        Stack_2c8 = SUB1610((uint8_t  [16])0x0,6);
        uStack_2d8 = 0;
        uStack_2d4 = 0;
        uStack_2d0._0_2_ = 0;
        uStack_2d0._2_6_ = 0;
        Stack_2f8 = SUB1610((uint8_t  [16])0x0,6);
        auStack_308 = SUB1610((uint8_t  [16])0x0,0);
        uStack_2fe = 0;
        if (bVar101) {
          lVar92 = 7;
          if (iStack_330 + 1U !=
              (uint32_t)(uint16_t)(0x2000 << (bVar43 & 0xf) | 0x2000U >> 0x10 - (bVar43 & 0xf))) {
            uVar83 = (uint32_t)uStack_1c0;
            uVar49 = 0;
            do {
              psVar4 = (short *)((int64_t)&uStack_2d0 +
                                ((uint64_t)*(uint8_t *)(lVar2 + 0xf + uVar49 * 8) - 4) * 2);
              *psVar4 = *psVar4 + 1;
              psVar4 = (short *)((int64_t)&uStack_2d0 +
                                ((uint64_t)*(uint8_t *)(lVar2 + 0x17 + uVar49 * 8) - 4) * 2);
              *psVar4 = *psVar4 + 1;
              uVar49 = uVar49 + 2;
              lVar92 = lVar92 + 0x10;
            } while ((uVar83 & 0xfffffffe) != uVar49);
          }
          if (((uint64_t)puVar50 & 1) == 0) {
            psVar4 = (short *)((int64_t)&uStack_2d0 +
                              ((uint64_t)*(uint8_t *)(lVar72 + lVar92) - 4) * 2);
            *psVar4 = *psVar4 + 1;
          }
        }
        uVar83 = (uint32_t)uVar93;
        uVar49 = uVar93 & 0xffffffff;
        if (uVar83 != 0) {
          if (uVar83 < 4) {
            uVar48 = 0;
            uVar80 = uVar49;
          }
          else {
            uVar100 = (uint64_t)(uVar83 & 0xc);
            uVar48 = 0;
            uVar79 = uVar49;
            do {
              uVar80 = uVar79 - 4;
              uVar100 = uVar100 - 4;
              uVar98 = (uint16_t)(*(short *)((int64_t)&uStack_2d0 + uVar80 * 2) + uVar48) >> 1;
              uVar44 = (uint16_t)(*(short *)((int64_t)&uStack_2d0 + (uVar79 - 5) * 2) + uVar98) >> 1;
              uVar45 = (uint16_t)(*(short *)((int64_t)&uStack_2d0 + (uVar79 - 6) * 2) + uVar44) >> 1;
              sVar55 = *(short *)((int64_t)&uStack_2d0 + (uVar79 - 7) * 2);
              *(uint16_t *)(auStack_308 + (uVar79 - 2) * 2 + 4) = uVar48;
              uVar48 = (uint16_t)(sVar55 + uVar45) >> 1;
              *(uint16_t *)(auStack_308 + (uVar79 - 3) * 2 + 4) = uVar98;
              *(uint16_t *)(auStack_308 + uVar80 * 2 + 4) = uVar44;
              *(uint16_t *)(auStack_308 + (uVar79 - 5) * 2 + 4) = uVar45;
              uVar79 = uVar80;
            } while (uVar100 != 0);
            puVar69 = puStack_100;
            uVar79 = uStack_170;
          }
          if ((uVar93 & 3) != 0) {
            lVar92 = 0;
            do {
              *(uint16_t *)(auStack_308 + lVar92 * 2 + uVar80 * 2) = uVar48;
              uVar48 = (uint16_t)(uVar48 + *(short *)((int64_t)&uStack_2d0 +
                                                   (uVar80 + lVar92 + -4) * 2)) >> 1;
              lVar92 = lVar92 + -1;
            } while (-lVar92 != (uint64_t)(uVar83 & 3));
          }
        }
        uVar125 = (uint32_t)param_4;
        if (uVar125 < (0xa896 - uVar99 & 0xffff)) {
          uVar80 = 0;
        }
        else {
          uVar100 = 0;
          do {
            uVar80 = uVar100 + 4;
            *(uint64_t *)(pcVar67 + (uint64_t)*(uint8_t *)(lVar84 + 0xe + uVar100 * 8) * 8 + 8) =
                 (uint64_t)*(uint8_t *)(lVar84 + 0xf + uVar100 * 8);
            *(uint64_t *)(pcVar67 + (uint64_t)*(uint8_t *)(lVar84 + 0x16 + uVar100 * 8) * 8 + 8) =
                 (uint64_t)*(uint8_t *)(lVar84 + 0x17 + uVar100 * 8);
            *(uint64_t *)(pcVar67 + (uint64_t)*(uint8_t *)(lVar84 + 0x1e + uVar100 * 8) * 8 + 8) =
                 (uint64_t)*(uint8_t *)(lVar84 + 0x1f + uVar100 * 8);
            *(uint64_t *)(pcVar67 + (uint64_t)*(uint8_t *)(lVar84 + 0x26 + uVar100 * 8) * 8 + 8) =
                 (uint64_t)*(uint8_t *)(lVar84 + 0x27 + uVar100 * 8);
            uVar100 = uVar80;
          } while ((uVar71 & 0x1fc) != uVar80);
        }
        if (uVar79 != 0) {
          lVar92 = lStack_130 + uVar80 * 8;
          uVar100 = 0;
          do {
            lVar89 = uVar100 * 8;
            lVar62 = uVar100 * 8;
            uVar100 = uVar100 + 1;
            *(uint64_t *)(pcVar67 + (uint64_t)*(uint8_t *)(lVar92 + -1 + lVar89) * 8 + 8) =
                 (uint64_t)*(uint8_t *)(lVar92 + lVar62);
          } while (uVar79 != uVar100);
        }
        uVar79 = 1;
        while( true ) {
          uVar100 = *(uint64_t *)(pcVar67 + uVar79 * 8);
          uVar86 = uVar100 & 0xff;
          uVar48 = *(uint16_t *)(auStack_308 + uVar86 * 2);
          *(uint16_t *)(auStack_308 + uVar86 * 2) = uVar48 + 1;
          puVar70 = puStack_100;
          uVar80 = uStack_110;
          if (uVar86 != 0) {
            *(uint64_t *)(pcVar67 + uVar79 * 8) =
                 (uint64_t)uVar48 << (-(char)uVar100 & 0x3fU) | uVar100;
          }
          if (uVar66 == uVar79) break;
          uVar79 = uVar79 + 1;
        }
        *pcVar67 = (char)uVar93;
        pcVar67[1] = (char)param_4;
        pcVar67[6] = '\0';
        pcVar67[7] = '\0';
        pcVar67[2] = '\0';
        pcVar67[3] = '\0';
        pcVar67[4] = '\0';
        pcVar67[5] = '\0';
        if (uVar49 < uStack_360 && uStack_118 < uStack_360) {
          return uStack_168;
        }
        uVar83 = uVar83 + 1;
        *(uint8_t *)(lVar84 + 0x1e0) = 0;
        if (((uVar99 ^ 0xf993a892) & 0xffff) < uVar83) {
          uVar79 = (uint64_t)uVar83 - 1;
          uVar49 = 1;
          if (4 < uVar83) {
            if (uVar83 < 0x11) {
              uVar100 = 0;
            }
            else {
              uVar100 = uVar79 & 0xfffffffffffffff0;
              uVar49 = 0;
              iVar117 = 1;
              iVar121 = 2;
              iVar122 = 3;
              iVar123 = 4;
              iVar124 = 5;
              iVar130 = 6;
              iVar131 = 7;
              iVar133 = 8;
              iVar111 = 9;
              iVar114 = 10;
              iVar115 = 0xb;
              iVar116 = 0xc;
              auVar129 = _DAT_7fffa56bc280;
              do {
                auVar139._0_4_ = uVar83 - auVar129._0_4_;
                iVar136 = auVar129._4_4_;
                auVar139._4_4_ = uVar83 - iVar136;
                iVar137 = auVar129._8_4_;
                auVar139._8_4_ = uVar83 - iVar137;
                iVar138 = auVar129._12_4_;
                auVar139._12_4_ = uVar83 - iVar138;
                auVar109._0_4_ = uVar83 - iVar111;
                auVar109._4_4_ = uVar83 - iVar114;
                auVar109._8_4_ = uVar83 - iVar115;
                auVar109._12_4_ = uVar83 - iVar116;
                auVar126._0_4_ = uVar83 - iVar124;
                auVar126._4_4_ = uVar83 - iVar130;
                auVar126._8_4_ = uVar83 - iVar131;
                auVar126._12_4_ = uVar83 - iVar133;
                auVar134._0_4_ = uVar83 - iVar117;
                auVar134._4_4_ = uVar83 - iVar121;
                auVar134._8_4_ = uVar83 - iVar122;
                auVar134._12_4_ = uVar83 - iVar123;
                auVar134 = auVar134 & auVar145;
                auVar126 = auVar126 & auVar145;
                sVar55 = auVar134._0_2_;
                cVar90 = (0 < sVar55) * (sVar55 < 0x100) * auVar134[0] - (0xff < sVar55);
                sVar55 = auVar134._2_2_;
                sVar146 = CONCAT11((0 < sVar55) * (sVar55 < 0x100) * auVar134[2] - (0xff < sVar55),
                                   cVar90);
                sVar55 = auVar134._4_2_;
                cVar40 = (0 < sVar55) * (sVar55 < 0x100) * auVar134[4] - (0xff < sVar55);
                sVar55 = auVar134._6_2_;
                uVar147 = CONCAT13((0 < sVar55) * (sVar55 < 0x100) * auVar134[6] - (0xff < sVar55),
                                   CONCAT12(cVar40,sVar146));
                sVar55 = auVar134._8_2_;
                cVar41 = (0 < sVar55) * (sVar55 < 0x100) * auVar134[8] - (0xff < sVar55);
                sVar55 = auVar134._10_2_;
                uVar148 = CONCAT15((0 < sVar55) * (sVar55 < 0x100) * auVar134[10] - (0xff < sVar55),
                                   CONCAT14(cVar41,uVar147));
                sVar55 = auVar134._12_2_;
                cVar42 = (0 < sVar55) * (sVar55 < 0x100) * auVar134[0xc] - (0xff < sVar55);
                sVar55 = auVar134._14_2_;
                uVar149 = CONCAT17((0 < sVar55) * (sVar55 < 0x100) * auVar134[0xe] - (0xff < sVar55)
                                   ,CONCAT16(cVar42,uVar148));
                sVar55 = auVar126._0_2_;
                cVar28 = (0 < sVar55) * (sVar55 < 0x100) * auVar126[0] - (0xff < sVar55);
                sVar55 = auVar126._2_2_;
                auVar150._0_10_ =
                     CONCAT19((0 < sVar55) * (sVar55 < 0x100) * auVar126[2] - (0xff < sVar55),
                              CONCAT18(cVar28,uVar149));
                sVar55 = auVar126._4_2_;
                cVar29 = (0 < sVar55) * (sVar55 < 0x100) * auVar126[4] - (0xff < sVar55);
                auVar150[10] = cVar29;
                sVar55 = auVar126._6_2_;
                auVar150[0xb] = (0 < sVar55) * (sVar55 < 0x100) * auVar126[6] - (0xff < sVar55);
                sVar55 = auVar126._8_2_;
                cVar30 = (0 < sVar55) * (sVar55 < 0x100) * auVar126[8] - (0xff < sVar55);
                auVar151[0xc] = cVar30;
                auVar151._0_12_ = auVar150;
                sVar55 = auVar126._10_2_;
                auVar151[0xd] = (0 < sVar55) * (sVar55 < 0x100) * auVar126[10] - (0xff < sVar55);
                sVar55 = auVar126._12_2_;
                cVar31 = (0 < sVar55) * (sVar55 < 0x100) * auVar126[0xc] - (0xff < sVar55);
                auVar152[0xe] = cVar31;
                auVar152._0_14_ = auVar151;
                sVar55 = auVar126._14_2_;
                auVar152[0xf] = (0 < sVar55) * (sVar55 < 0x100) * auVar126[0xe] - (0xff < sVar55);
                auVar109 = auVar109 & auVar145;
                auVar139 = auVar139 & auVar145;
                sVar55 = auVar109._0_2_;
                cVar32 = (0 < sVar55) * (sVar55 < 0x100) * auVar109[0] - (0xff < sVar55);
                sVar55 = auVar109._2_2_;
                sVar141 = CONCAT11((0 < sVar55) * (sVar55 < 0x100) * auVar109[2] - (0xff < sVar55),
                                   cVar32);
                sVar55 = auVar109._4_2_;
                cVar33 = (0 < sVar55) * (sVar55 < 0x100) * auVar109[4] - (0xff < sVar55);
                sVar55 = auVar109._6_2_;
                uVar104 = CONCAT13((0 < sVar55) * (sVar55 < 0x100) * auVar109[6] - (0xff < sVar55),
                                   CONCAT12(cVar33,sVar141));
                sVar55 = auVar109._8_2_;
                cVar34 = (0 < sVar55) * (sVar55 < 0x100) * auVar109[8] - (0xff < sVar55);
                sVar55 = auVar109._10_2_;
                uVar106 = CONCAT15((0 < sVar55) * (sVar55 < 0x100) * auVar109[10] - (0xff < sVar55),
                                   CONCAT14(cVar34,uVar104));
                sVar55 = auVar109._12_2_;
                cVar35 = (0 < sVar55) * (sVar55 < 0x100) * auVar109[0xc] - (0xff < sVar55);
                sVar55 = auVar109._14_2_;
                uVar142 = CONCAT17((0 < sVar55) * (sVar55 < 0x100) * auVar109[0xe] - (0xff < sVar55)
                                   ,CONCAT16(cVar35,uVar106));
                sVar55 = auVar139._0_2_;
                cVar36 = (0 < sVar55) * (sVar55 < 0x100) * auVar139[0] - (0xff < sVar55);
                sVar55 = auVar139._2_2_;
                auVar143._0_10_ =
                     CONCAT19((0 < sVar55) * (sVar55 < 0x100) * auVar139[2] - (0xff < sVar55),
                              CONCAT18(cVar36,uVar142));
                sVar55 = auVar139._4_2_;
                cVar37 = (0 < sVar55) * (sVar55 < 0x100) * auVar139[4] - (0xff < sVar55);
                auVar143[10] = cVar37;
                sVar55 = auVar139._6_2_;
                auVar143[0xb] = (0 < sVar55) * (sVar55 < 0x100) * auVar139[6] - (0xff < sVar55);
                sVar55 = auVar139._8_2_;
                cVar38 = (0 < sVar55) * (sVar55 < 0x100) * auVar139[8] - (0xff < sVar55);
                auVar144[0xc] = cVar38;
                auVar144._0_12_ = auVar143;
                sVar55 = auVar139._10_2_;
                auVar144[0xd] = (0 < sVar55) * (sVar55 < 0x100) * auVar139[10] - (0xff < sVar55);
                sVar55 = auVar139._12_2_;
                cVar39 = (0 < sVar55) * (sVar55 < 0x100) * auVar139[0xc] - (0xff < sVar55);
                auVar112[0xe] = cVar39;
                auVar112._0_14_ = auVar144;
                sVar55 = auVar139._14_2_;
                auVar112[0xf] = (0 < sVar55) * (sVar55 < 0x100) * auVar139[0xe] - (0xff < sVar55);
                sVar55 = (short)((uint32_t)uVar147 >> 0x10);
                sVar47 = (short)((uint6)uVar148 >> 0x20);
                sVar77 = (short)((uint64_t)uVar149 >> 0x30);
                sVar103 = (short)((unkuint10)auVar150._0_10_ >> 0x40);
                sVar18 = auVar150._10_2_;
                sVar19 = auVar151._12_2_;
                sVar20 = auVar152._14_2_;
                sVar21 = (short)((uint32_t)uVar104 >> 0x10);
                sVar22 = (short)((uint6)uVar106 >> 0x20);
                sVar23 = (short)((uint64_t)uVar142 >> 0x30);
                sVar24 = (short)((unkuint10)auVar143._0_10_ >> 0x40);
                sVar25 = auVar143._10_2_;
                sVar26 = auVar144._12_2_;
                sVar27 = auVar112._14_2_;
                pcVar60 = (char *)(lVar85 + uVar49);
                *pcVar60 = (0 < sVar146) * (sVar146 < 0x100) * cVar90 - (0xff < sVar146);
                pcVar60[1] = (0 < sVar55) * (sVar55 < 0x100) * cVar40 - (0xff < sVar55);
                pcVar60[2] = (0 < sVar47) * (sVar47 < 0x100) * cVar41 - (0xff < sVar47);
                pcVar60[3] = (0 < sVar77) * (sVar77 < 0x100) * cVar42 - (0xff < sVar77);
                pcVar60[4] = (0 < sVar103) * (sVar103 < 0x100) * cVar28 - (0xff < sVar103);
                pcVar60[5] = (0 < sVar18) * (sVar18 < 0x100) * cVar29 - (0xff < sVar18);
                pcVar60[6] = (0 < sVar19) * (sVar19 < 0x100) * cVar30 - (0xff < sVar19);
                pcVar60[7] = (0 < sVar20) * (sVar20 < 0x100) * cVar31 - (0xff < sVar20);
                pcVar60[8] = (0 < sVar141) * (sVar141 < 0x100) * cVar32 - (0xff < sVar141);
                pcVar60[9] = (0 < sVar21) * (sVar21 < 0x100) * cVar33 - (0xff < sVar21);
                pcVar60[10] = (0 < sVar22) * (sVar22 < 0x100) * cVar34 - (0xff < sVar22);
                pcVar60[0xb] = (0 < sVar23) * (sVar23 < 0x100) * cVar35 - (0xff < sVar23);
                pcVar60[0xc] = (0 < sVar24) * (sVar24 < 0x100) * cVar36 - (0xff < sVar24);
                pcVar60[0xd] = (0 < sVar25) * (sVar25 < 0x100) * cVar37 - (0xff < sVar25);
                pcVar60[0xe] = (0 < sVar26) * (sVar26 < 0x100) * cVar38 - (0xff < sVar26);
                pcVar60[0xf] = (0 < sVar27) * (sVar27 < 0x100) * cVar39 - (0xff < sVar27);
                uVar49 = uVar49 + 0x10;
                auVar129._0_4_ = auVar129._0_4_ + 0x10;
                auVar129._4_4_ = iVar136 + 0x10;
                auVar129._8_4_ = iVar137 + 0x10;
                auVar129._12_4_ = iVar138 + 0x10;
                iVar111 = iVar111 + 0x10;
                iVar114 = iVar114 + 0x10;
                iVar115 = iVar115 + 0x10;
                iVar116 = iVar116 + 0x10;
                iVar124 = iVar124 + 0x10;
                iVar130 = iVar130 + 0x10;
                iVar131 = iVar131 + 0x10;
                iVar133 = iVar133 + 0x10;
                iVar117 = iVar117 + 0x10;
                iVar121 = iVar121 + 0x10;
                iVar122 = iVar122 + 0x10;
                iVar123 = iVar123 + 0x10;
              } while (uVar100 != uVar49);
              auVar129 = _DAT_7fffa56bc4f0;
              auVar139 = _DAT_7fffa56b8d90;
              if (uVar79 == uVar100) goto LAB_7fffa5080c42;
              uVar49 = uVar100 | 1;
              if ((uVar79 & 0xc) == 0) goto LAB_7fffa5080ffa;
            }
            uVar86 = uVar79 & 0xfffffffffffffffc;
            iVar117 = (int)uVar49;
            auVar118._4_4_ = iVar117 + 1;
            auVar118._0_4_ = iVar117;
            auVar118._8_4_ = iVar117 + 2;
            auVar118._12_4_ = iVar117 + 3;
            while( true ) {
              auVar107._0_4_ = uVar83 - auVar118._0_4_;
              iVar117 = auVar118._4_4_;
              auVar107._4_4_ = uVar83 - iVar117;
              iVar121 = auVar118._8_4_;
              auVar107._8_4_ = uVar83 - iVar121;
              iVar122 = auVar118._12_4_;
              auVar107._12_4_ = uVar83 - iVar122;
              auVar107 = auVar107 & auVar145;
              sVar55 = auVar107._0_2_;
              cVar90 = (0 < sVar55) * (sVar55 < 0x100) * auVar107[0] - (0xff < sVar55);
              sVar55 = auVar107._2_2_;
              sVar103 = CONCAT11((0 < sVar55) * (sVar55 < 0x100) * auVar107[2] - (0xff < sVar55),
                                 cVar90);
              sVar55 = auVar107._4_2_;
              cVar40 = (0 < sVar55) * (sVar55 < 0x100) * auVar107[4] - (0xff < sVar55);
              sVar55 = auVar107._6_2_;
              uVar104 = CONCAT13((0 < sVar55) * (sVar55 < 0x100) * auVar107[6] - (0xff < sVar55),
                                 CONCAT12(cVar40,sVar103));
              sVar55 = auVar107._8_2_;
              cVar41 = (0 < sVar55) * (sVar55 < 0x100) * auVar107[8] - (0xff < sVar55);
              sVar55 = auVar107._10_2_;
              uVar106 = CONCAT15((0 < sVar55) * (sVar55 < 0x100) * auVar107[10] - (0xff < sVar55),
                                 CONCAT14(cVar41,uVar104));
              sVar55 = auVar107._12_2_;
              cVar42 = (0 < sVar55) * (sVar55 < 0x100) * auVar107[0xc] - (0xff < sVar55);
              sVar77 = auVar107._14_2_;
              sVar55 = (short)((uint32_t)uVar104 >> 0x10);
              sVar47 = (short)((uint6)uVar106 >> 0x20);
              sVar77 = (short)(CONCAT17((0 < sVar77) * (sVar77 < 0x100) * auVar107[0xe] -
                                        (0xff < sVar77),CONCAT16(cVar42,uVar106)) >> 0x30);
              *(uint32_t *)(lVar85 + uVar100) =
                   CONCAT13((0 < sVar77) * (sVar77 < 0x100) * cVar42 - (0xff < sVar77),
                            CONCAT12((0 < sVar47) * (sVar47 < 0x100) * cVar41 - (0xff < sVar47),
                                     CONCAT11((0 < sVar55) * (sVar55 < 0x100) * cVar40 -
                                              (0xff < sVar55),
                                              (0 < sVar103) * (sVar103 < 0x100) * cVar90 -
                                              (0xff < sVar103))));
              if (uVar86 - 4 == uVar100) break;
              auVar118._0_4_ = auVar118._0_4_ + 4;
              auVar118._4_4_ = iVar117 + 4;
              auVar118._8_4_ = iVar121 + 4;
              auVar118._12_4_ = iVar122 + 4;
              uVar100 = uVar100 + 4;
            }
            if (uVar79 == uVar86) goto LAB_7fffa5080c42;
            uVar49 = uVar86 | 1;
          }
LAB_7fffa5080ffa:
          cVar90 = ((char)uVar93 - (char)uVar49) + '\x01';
          while( true ) {
            *(char *)(lVar84 + 0x1e0 + uVar49) = cVar90;
            if (uVar79 == uVar49) break;
            cVar90 = cVar90 + -1;
            uVar49 = uVar49 + 1;
          }
        }
LAB_7fffa5080c42:
        if (uVar125 == 0) {
          if (cStack_171 != '\0') goto LAB_7fffa507f890;
          *(char *)(param_5 + 0x2ec) = cVar81;
          pbStack_248[(int64_t)puStack_2e0] = 0;
          uVar93 = 0;
          uVar49 = 0;
          uVar79 = uStack_180;
          goto LAB_7fffa5081b83;
        }
        if (uVar125 < 4) {
          lVar92 = 0;
        }
        else {
          lVar92 = 0;
          while( true ) {
            *(uint8_t *)(lVar84 + 0x1ed + lVar92) =
                 *(uint8_t *)(lVar84 + 0x1e0 + (uint64_t)(uint8_t)pcVar67[lVar92 * 8 + 8]);
            *(uint8_t *)(lVar84 + 0x1ee + lVar92) =
                 *(uint8_t *)(lVar84 + 0x1e0 + (uint64_t)(uint8_t)pcVar67[lVar92 * 8 + 0x10]);
            *(uint8_t *)(lVar84 + 0x1ef + lVar92) =
                 *(uint8_t *)(lVar84 + 0x1e0 + (uint64_t)(uint8_t)pcVar67[lVar92 * 8 + 0x18]);
            *(uint8_t *)(lVar84 + 0x1f0 + lVar92) =
                 *(uint8_t *)(lVar84 + 0x1e0 + (uint64_t)(uint8_t)pcVar67[lVar92 * 8 + 0x20]);
            if (lStack_108 == lVar92) break;
            lVar92 = lVar92 + 4;
          }
          lVar92 = lVar92 + 4;
        }
        if (uStack_188 != 0) {
          for (lVar62 = 0;
              pbStack_248[lVar62 + lVar92] =
                   *(uint8_t *)(lVar84 + 0x1e0 + (uint64_t)(uint8_t)pcStack_1b0[lVar62 * 8 + lVar92 * 8])
              , lStack_160 != lVar62; lVar62 = lVar62 + 1) {
          }
        }
        if (uStack_120 != 0) goto LAB_7fffa507f890;
        if (1 < uVar125) {
          pauStack_2e8[2] = (uint8_t  [16])0x0;
          pauStack_2e8[1] = (uint8_t  [16])0x0;
          *pauStack_2e8 = (uint8_t  [16])0x0;
          *(uint32_t *)pauStack_2e8[3] = 0;
          pbVar58 = pbStack_248;
          do {
            bVar82 = *pbVar58;
            pbVar58 = pbVar58 + 1;
            *(int *)(*pauStack_2e8 + (uint64_t)bVar82 * 4) =
                 *(int *)(*pauStack_2e8 + (uint64_t)bVar82 * 4) + 1;
          } while (pbVar58 < pbStack_1e0);
          uVar83 = 0xc;
          uVar79 = 0xd;
          bVar82 = 1;
          while( true ) {
            uVar93 = (uint64_t)uVar83;
            uVar73 = (uint32_t)uVar79;
            if (*(int *)(*pauStack_2e8 + uVar93 * 4) != 0) break;
            uVar83 = uVar83 - 1;
            uVar79 = (uint64_t)(uVar73 - 1);
            bVar82 = bVar82 + 3;
          }
          if (uVar83 < 7) {
            uVar49 = 0;
            uVar91 = 0;
LAB_7fffa5081153:
            while( true ) {
              if (uVar91 < *(uint32_t *)(*pauStack_2e8 + uVar49 * 4)) {
                uVar91 = *(uint32_t *)(*pauStack_2e8 + uVar49 * 4);
              }
              if (uVar93 <= uVar49) break;
              uVar49 = uVar49 + 1;
            }
          }
          else {
            uVar100 = uVar93 + 1;
            uVar49 = uVar100 & 0xfffffffffffffff8;
            auVar126 = (uint8_t  [16])0x0;
            uVar86 = 0;
            auVar119 = (uint8_t  [16])0x0;
            do {
              auVar108 = *(uint8_t (*) [16])(lStack_140 + -0x10 + uVar86 * 4);
              auVar109 = *(uint8_t (*) [16])(lStack_140 + uVar86 * 4);
              uVar86 = uVar86 + 8;
              auVar112 = auVar126 ^ auVar128;
              auVar134 = auVar108 ^ auVar128;
              auVar135._0_4_ = -(uint32_t)(auVar112._0_4_ < auVar134._0_4_);
              auVar135._4_4_ = -(uint32_t)(auVar112._4_4_ < auVar134._4_4_);
              auVar135._8_4_ = -(uint32_t)(auVar112._8_4_ < auVar134._8_4_);
              auVar135._12_4_ = -(uint32_t)(auVar112._12_4_ < auVar134._12_4_);
              auVar126 = ~auVar135 & auVar126 | auVar108 & auVar135;
              auVar108 = auVar119 ^ auVar128;
              auVar112 = auVar109 ^ auVar128;
              auVar113._0_4_ = -(uint32_t)(auVar108._0_4_ < auVar112._0_4_);
              auVar113._4_4_ = -(uint32_t)(auVar108._4_4_ < auVar112._4_4_);
              auVar113._8_4_ = -(uint32_t)(auVar108._8_4_ < auVar112._8_4_);
              auVar113._12_4_ = -(uint32_t)(auVar108._12_4_ < auVar112._12_4_);
              auVar119 = ~auVar113 & auVar119 | auVar109 & auVar113;
            } while ((uVar100 & 0xfffffffffffffff8) != uVar86);
            auVar108 = auVar119 ^ auVar128;
            auVar109 = auVar126 ^ auVar128;
            auVar110._0_4_ = -(uint32_t)(auVar108._0_4_ < auVar109._0_4_);
            auVar110._4_4_ = -(uint32_t)(auVar108._4_4_ < auVar109._4_4_);
            auVar110._8_4_ = -(uint32_t)(auVar108._8_4_ < auVar109._8_4_);
            auVar110._12_4_ = -(uint32_t)(auVar108._12_4_ < auVar109._12_4_);
            auVar126 = ~auVar110 & auVar119 | auVar126 & auVar110;
            auVar127._0_8_ = auVar126._8_8_;
            auVar127._8_4_ = auVar126._8_4_;
            auVar127._12_4_ = auVar126._12_4_;
            auVar108 = auVar126 ^ auVar128;
            auVar119 = auVar127 ^ auVar128;
            auVar120._0_4_ = -(uint32_t)(auVar119._0_4_ < auVar108._0_4_);
            auVar120._4_4_ = -(uint32_t)(auVar119._4_4_ < auVar108._4_4_);
            auVar120._8_4_ = -(uint32_t)(auVar119._8_4_ < auVar108._8_4_);
            auVar120._12_4_ = -(uint32_t)(auVar119._12_4_ < auVar108._12_4_);
            auVar119 = ~auVar120 & auVar127 | auVar126 & auVar120;
            uVar65 = auVar119._4_4_;
            uVar91 = auVar119._0_4_;
            uVar105 = -(uint32_t)((int)(uVar65 ^ auVar128._0_4_) < (int)(uVar91 ^ auVar128._0_4_));
            uVar91 = ~uVar105 & uVar65 | uVar91 & uVar105;
            if (uVar100 != uVar49) goto LAB_7fffa5081153;
          }
          if (uVar91 != 1 && uVar125 != uVar91) {
            iVar117 = 0x1f;
            if (uVar83 != 0) {
              for (; uVar83 >> iVar117 == 0; iVar117 = iVar117 + -1) {
              }
            }
            uVar91 = iVar117 + 2U;
            if (uStack_1f8 < iVar117 + 2U) {
              uVar91 = uStack_1f8;
            }
            uVar105 = uStack_20c;
            if (uStack_20c < uVar91) {
              uVar105 = uVar91;
            }
            if (uVar105 < 6) {
              uVar105 = 5;
            }
            uVar49 = (uint64_t)uVar105;
            if (0xb < uVar105) {
              uVar49 = 0xc;
            }
            uVar105 = (uint32_t)uVar49;
            if (uVar91 <= uVar105) {
              bVar54 = (uint8_t)uVar49;
              uVar88 = 1 << (bVar54 & 0x1f);
              uVar95 = 1;
              uVar100 = 0;
              uVar125 = uVar125 >> (bVar54 & 0x1f);
              uStack_148 = CONCAT44(uStack_148._4_4_,uVar125);
              uStack_230 = (uint16_t *)(0x4000000000000000 / (uint64_t)puStack_2e0);
              lStack_2a0 = (uint64_t)(0x3e - uVar105) - 0x14;
              uVar65 = 0;
              uVar91 = uVar88;
LAB_7fffa5081290:
              uVar86 = (uint64_t)(uVar95 - 1);
              uVar96 = *(uint32_t *)(*pauStack_2e8 + uVar86 * 4);
              puVar69 = puVar70;
              in_R11 = lStack_138;
              uStack_288 = uVar49;
              if ((uint32_t)param_4 != uVar96) {
                bVar87 = (uint8_t)(0x3e - uVar105);
                if ((uint64_t)uVar96 == 0) {
                  *(uint16_t *)(lStack_128 + uVar86 * 2) = 0;
                }
                else if (uVar125 < uVar96) {
                  uVar76 = (uint64_t)uVar96 * (int64_t)uStack_230;
                  uVar53 = uVar76 >> (bVar87 & 0x3f);
                  if ((uVar53 & 0xfff8) == 0) {
                    puStack_1a0 = &UNK_7fffa5865b1b;
                    uVar59 = uVar53 & 0xffff;
                    if (uVar99 + 0x15912b6c != (uVar99 ^ 0x17b17b6c)) {
                      uVar59 = uVar53 * 0xffff;
                    }
                    uVar53 = (uint64_t)
                             ((int)uVar53 +
                             (uint32_t)((uint64_t)
                                    *(uint32_t *)(&UNK_7fffa5865b1b +
                                             uVar59 * 4 +
                                             (int64_t)(short)((uVar46 + 0xce7a) * 0xa9)) <<
                                    ((uint8_t)lStack_2a0 & 0x3f) < uVar76 - (uVar59 << (bVar87 & 0x3f))
                                   ));
                    param_4 = uStack_258;
                    uStack_1c0 = uVar100;
                  }
                  uVar48 = (uint16_t)uVar53;
                  uVar91 = uVar91 - ((uint32_t)uVar53 & 0xffff);
                  uVar98 = (uint16_t)uVar100;
                  if (uVar98 < uVar48) {
                    uVar100 = uVar53;
                  }
                  uVar100 = uVar100 & 0xffffffff;
                  *(uint16_t *)(lStack_128 + uVar86 * 2) = uVar48;
                  if (uVar98 < uVar48) {
                    uVar65 = uVar95 - 1;
                  }
                }
                else {
                  *(uint16_t *)(lStack_128 + uVar86 * 2) = 1;
                  uVar91 = uVar91 - 1;
                }
                if (uVar95 <= uVar83) goto code_r0x7fffa50813e9;
                sVar55 = *(short *)(lStack_128 + (uint64_t)uVar65 * 2);
                if ((int)-uVar91 < (int)sVar55 >> 1) {
                  *(short *)(lStack_128 + (uint64_t)uVar65 * 2) = sVar55 + (short)uVar91;
                }
                else {
                  uVar91 = uVar83 + 1;
                  uVar100 = uVar68 >> (bVar54 + 1 & 0x3f);
                  uVar49 = 0;
                  uStack_230 = puStack_2e0;
                  uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
                  do {
                    uVar65 = *(uint32_t *)(uStack_110 + 400 + uVar49 * 4);
                    if (uVar65 == (uint16_t)(((0x1358 - uVar46) * 0x1000 |
                                           (uint16_t)(0x1358 - uVar46) >> 4) + 0xa954)) {
                      *(uint16_t *)(uStack_110 + 0x1c4 + uVar49 * 2) = 0;
                    }
                    else if (uVar125 < uVar65) {
                      if ((uint32_t)uVar100 < uVar65) {
                        *(uint16_t *)(uStack_110 + 0x1c4 + uVar49 * 2) = 0xfffe;
                      }
                      else {
                        *(uint16_t *)(uStack_110 + 0x1c4 + uVar49 * 2) = 1;
                        uStack_230 = (uint16_t *)
                                     ((int64_t)uStack_230 -
                                     (uint64_t)*(uint32_t *)(uStack_110 + 400 + uVar49 * 4));
                        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0 + 1);
                      }
                    }
                    else {
                      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0 + 1);
                      *(uint16_t *)(uStack_110 + 0x1c4 + uVar49 * 2) = 1;
                      uStack_230 = (uint16_t *)
                                   ((int64_t)uStack_230 -
                                   (uint64_t)*(uint32_t *)(uStack_110 + 400 + uVar49 * 4));
                    }
                    bVar101 = uVar79 - 1 == uVar49;
                    if (0xdc6c6347 <
                        (0x41c279e9 << (bVar43 & 0x1f) | 0x41c279e9U >> 0x20 - (bVar43 & 0x1f))) {
                      bVar101 = uVar91 <= uVar49;
                    }
                    uVar49 = uVar49 + 1;
                  } while (!bVar101);
                  uVar125 = uVar88 - (int)uStack_1c0;
                  param_4 = uStack_258;
                  if (uVar125 != 0) {
                    puVar50 = uStack_230;
                    if ((uint64_t)uStack_230 >> 0x20 == 0) {
                      puVar50 = (uint16_t *)((uint64_t)uStack_230 & 0xffffffff);
                    }
                    if (uVar100 < (uint64_t)puVar50 / (uint64_t)uVar125) {
                      uVar49 = (int64_t)uStack_230 * 3;
                      if (uVar49 >> 0x20 == 0) {
                        uVar125 = (uint32_t)((uVar49 & 0xffffffff) / (uint64_t)(uVar125 * 2));
                      }
                      else {
                        uVar125 = (uint32_t)(uVar49 / (uVar125 * 2));
                      }
                      lVar92 = 0;
                      while( true ) {
                        if ((*(short *)(uStack_110 + 0x1c4 + lVar92 * 2) ==
                             (short)((short)uStack_1f4 * 0x5786 + -0x31f4)) &&
                           (*(uint32_t *)(uStack_110 + 400 + lVar92 * 4) <= uVar125)) {
                          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0 + 1);
                          *(uint16_t *)(uStack_110 + 0x1c4 + lVar92 * 2) = 1;
                          uStack_230 = (uint16_t *)
                                       ((int64_t)uStack_230 -
                                       (uint64_t)*(uint32_t *)(uStack_110 + 400 + lVar92 * 4));
                        }
                        if ((*(short *)(uStack_110 + 0x1c6 + lVar92 * 2) == -2) &&
                           (*(uint32_t *)(uStack_110 + 0x194 + lVar92 * 4) <= uVar125)) {
                          *(uint16_t *)(uStack_110 + 0x1c6 + lVar92 * 2) = 1;
                          uStack_230 = (uint16_t *)
                                       ((int64_t)uStack_230 -
                                       (uint64_t)*(uint32_t *)(uStack_110 + 0x194 + lVar92 * 4));
                          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(int)uStack_1c0 + 1);
                        }
                        if ((uint64_t)(uVar73 & 0xfffffffe) - 2 == lVar92) break;
                        lVar92 = lVar92 + 2;
                      }
                      iVar117 = (int)uStack_1c0;
                      if ((((uVar91 & 1) != ((uStack_1f4 * 0x6195 ^ 0xd08f) & 0xffff)) &&
                          (*(short *)(uStack_110 + 0x1c8 + lVar92 * 2) == -2)) &&
                         (*(uint32_t *)(uStack_110 + 0x198 + lVar92 * 4) <= uVar125)) {
                        *(uint16_t *)(uStack_110 + 0x1c8 + lVar92 * 2) = 1;
                        uStack_230 = (uint16_t *)
                                     ((int64_t)uStack_230 -
                                     (uint64_t)*(uint32_t *)(uStack_110 + 0x198 + lVar92 * 4));
                        iVar117 = (int)uStack_1c0 + 1;
                      }
                      uVar125 = uVar88 - iVar117;
                    }
                    else {
                      iVar117 = (int)uStack_1c0;
                    }
                    uVar49 = (uint64_t)uVar125;
                    if (uVar83 - iVar117 == -1) {
                      if (uVar83 < 3) {
                        uVar100 = 0;
                        uVar65 = 0;
                        uVar95 = 0;
                      }
                      else {
                        lVar92 = 0;
                        uVar65 = 0;
                        uVar95 = 0;
                        while( true ) {
                          uVar96 = *(uint32_t *)(lStack_140 + -0x10 + lVar92 * 4);
                          uVar74 = (uint32_t)lVar92;
                          uVar75 = uVar74;
                          if (uVar96 <= uVar65) {
                            uVar96 = uVar65;
                            uVar75 = uVar95;
                          }
                          uVar63 = *(uint32_t *)(lStack_140 + -0xc + lVar92 * 4);
                          if (uVar96 < uVar63) {
                            uVar75 = uVar74 + 1;
                          }
                          else {
                            uVar63 = uVar96;
                          }
                          uVar96 = *(uint32_t *)(lStack_140 + -8 + lVar92 * 4);
                          uVar64 = uVar63;
                          if (uVar63 < uVar96) {
                            uVar64 = uVar96;
                          }
                          uVar65 = *(uint32_t *)(lStack_140 + -4 + lVar92 * 4);
                          uVar95 = uVar74 + 2;
                          if (uVar96 <= uVar63) {
                            uVar95 = uVar75;
                          }
                          if (uVar64 < uVar65) {
                            uVar95 = uVar74 + 3;
                          }
                          else {
                            uVar65 = uVar64;
                          }
                          if ((uint64_t)(uVar73 & 0xfffffffc) - 4 == lVar92) break;
                          lVar92 = lVar92 + 4;
                        }
                        uVar100 = lVar92 + 4;
                      }
                      if ((uVar91 & 3) != 0) {
                        uVar86 = (uint64_t)(bVar82 & 3);
                        do {
                          uStack_148 = CONCAT44(uStack_148._4_4_,uVar95);
                          uVar53 = uVar100 + 1;
                          if ((uint64_t)(int64_t)(int)(uStack_264 * -0x2aeec142) <
                              (uint64_t)
                              (0x6d23fa4eU >> (bVar43 & 0x1f) | 0x6d23fa4e << 0x20 - (bVar43 & 0x1f)
                              )) {
                            uVar53 = uVar100 | 1;
                          }
                          if (uVar65 < *(uint32_t *)(*pauStack_2e8 + uVar100 * 4)) {
                            uVar95 = (uint32_t)uVar100;
                            uVar65 = *(uint32_t *)(*pauStack_2e8 + uVar100 * 4);
                          }
                          uVar86 = uVar86 - 1;
                          uVar100 = uVar53;
                        } while (uVar86 != 0);
                      }
                      psVar4 = (short *)(lStack_128 + (uint64_t)uVar95 * 2);
                      *psVar4 = *psVar4 + (short)uVar125;
                      uStack_1c0 = uVar49;
                      goto LAB_7fffa5082045;
                    }
                    if (uStack_230 == (uint16_t *)0x0) {
                      if (uVar125 != 0) {
                        uVar125 = 0;
                        while( true ) {
                          sVar55 = *(short *)(lStack_128 + (uint64_t)uVar125 * 2);
                          if (0 < sVar55) {
                            *(short *)(lStack_128 + (uint64_t)uVar125 * 2) = sVar55 + 1;
                            uVar49 = (uint64_t)((int)uVar49 - 1);
                          }
                          sVar55 = (uVar46 ^ 0x59b6) + 0xedb;
                          if ((uint32_t)uVar49 == (uint32_t)(uint16_t)(sVar55 * 2 | (uint16_t)(sVar55 < 0)))
                          break;
                          bVar101 = uVar125 == uVar83;
                          uVar125 = uVar125 + 1;
                          if (bVar101) {
                            uVar125 = 0;
                          }
                        }
                      }
                      goto LAB_7fffa5082045;
                    }
                    uVar100 = ~(-1L << (bVar87 - 1 & 0x3f));
                    uVar49 = (uVar49 << (bVar87 & 0x3f)) + uVar100;
                    if (uVar49 >> 0x20 == 0) {
                      uVar49 = uVar49 & 0xffffffff;
                    }
                    uVar125 = 1;
                    while (uVar86 = (uint64_t)(uVar125 - 1),
                          *(short *)(lStack_128 + uVar86 * 2) != -2) {
LAB_7fffa5082a2b:
                      if (uVar83 < uVar125) goto LAB_7fffa5082045;
                      uVar125 = uVar125 + 1;
                    }
                    uVar53 = uVar100 >> (bVar87 & 0x3f);
                    uVar100 = (uint64_t)*(uint32_t *)(*pauStack_2e8 + uVar86 * 4) *
                              (uVar49 / ((uint64_t)uStack_230 & 0xffffffff)) + uVar100;
                    uVar76 = uVar100 >> (bVar87 & 0x3f);
                    if (uVar76 != uVar53) {
                      *(short *)(lStack_128 + uVar86 * 2) = (short)uVar76 - (short)uVar53;
                      goto LAB_7fffa5082a2b;
                    }
                    goto LAB_7fffa507f890;
                  }
                }
              }
LAB_7fffa5082045:
              uVar125 = uVar83 + 1;
              puStack_1a0 = (uint8_t *)CONCAT44(puStack_1a0._4_4_,uVar125);
              uVar49 = (uint64_t)((uVar125 * uVar105 + 6 >> 3) + 3);
              bVar101 = uStack_1d8 != uVar49;
              if (uVar99 == 0x6152a893) {
                bVar101 = uVar49 <= uStack_1d8;
              }
              if (uVar83 - (uint16_t)((uVar46 ^ 0xa893) << 4 | (uVar46 ^ 0xa893) >> 0xc) == -1) {
                goto LAB_7fffa507f890;
              }
              uVar73 = uVar105 - 5;
              uVar91 = uVar88 | 1;
              iVar117 = 4;
              uVar100 = 0;
              bVar102 = true;
              iVar121 = (int)uStack_260 * -0x1641;
              uStack_260 = CONCAT44(uStack_260._4_4_,iVar121);
              uStack_230 = puStack_1e8;
              uVar49 = (uint64_t)(uVar105 + 1);
              while( true ) {
                uStack_1c0 = uVar49;
                uStack_148 = uVar79;
                if (!bVar102) break;
LAB_7fffa5082342:
                uVar48 = (uint16_t)iVar121;
                uVar105 = ~uVar91;
                iVar123 = (int)*(short *)(lStack_128 + uVar100 * 2);
                iVar122 = -iVar123;
                if (-1 < -iVar123) {
                  iVar122 = iVar123;
                }
                uVar91 = uVar91 + iVar122;
                iVar122 = uVar105 + uVar88 * 2;
                iVar124 = iVar122;
                if (iVar123 + 1 < (int)uVar88) {
                  iVar124 = 0;
                }
                iVar123 = iVar124 + iVar123 + 1;
                bVar102 = iVar123 != 1;
                if ((int)uVar91 <=
                    (int)(uint32_t)(uint16_t)(uVar48 << (bVar43 & 0xf) | uVar48 >> 0x10 - (bVar43 & 0xf)))
                {
LAB_7fffa5082854:
                  goto LAB_7fffa507f890;
                }
                if ((int)uVar91 < (int)uVar88) {
                  uVar105 = (uint32_t)uStack_1c0;
                  do {
                    uVar105 = uVar105 - 1;
                    uVar49 = (uint64_t)uVar105;
                    uVar88 = (int)uVar88 >> 1;
                  } while ((int)uVar91 < (int)uVar88);
                }
                else {
                  uVar49 = uStack_1c0;
                }
                uVar73 = uVar73 + (iVar123 << ((uint8_t)iVar117 & 0x1f));
                iVar117 = (iVar117 + (uint32_t)uStack_1c0) - (uint32_t)(iVar123 < iVar122);
                if ((int)(uint32_t)(uint16_t)((uVar46 + 0x57ed) * 0x2000 | (uint16_t)(uVar46 + 0x57ed) >> 3)
                    < iVar117) {
                  if (!(bool)(uStack_230 <= puVar61 | bVar101)) {
                    goto LAB_7fffa507f890;
                  }
                  *uStack_230 = (short)uVar73;
                  uVar73 = uVar73 >> 0x10;
                  iVar117 = iVar117 + -0x10;
                  uStack_230 = uStack_230 + 1;
                }
                uVar105 = (int)uVar100 + 1;
                uVar100 = (uint64_t)uVar105;
                if ((uVar125 <= uVar105) || (uVar91 == 1)) goto LAB_7fffa50824e0;
              }
              uVar105 = (uint32_t)uVar100;
              if (uVar105 < uVar125) {
                while (*(short *)(lStack_128 + uVar100 * 2) == 0) {
                  uVar100 = uVar100 + 1;
                  if (uVar79 == uVar100) goto LAB_7fffa50824d8;
                }
              }
              uVar65 = (uint32_t)uVar100;
              if (uVar83 - uVar65 != -1) {
                if (uVar105 + 0x18 <= uVar65) {
                  puVar50 = uStack_230;
                  uVar105 = uVar105 + 0x18;
                  while( true ) {
                    param_4 = uStack_258;
                    if (!(bool)(puVar50 <= puVar61 | bVar101)) goto LAB_7fffa5082854;
                    uVar95 = uVar73 + (0xffff << ((uint8_t)iVar117 & 0x1f));
                    *puVar50 = (short)uVar95;
                    uVar73 = uVar95 >> 0x10;
                    if ((uint64_t)(int64_t)(int)(uStack_264 * -0x330dfc9b + -0xba9ec0a) <=
                        param_7 + 0x1ff9ead5fca) {
                      uVar73 = uVar95 | 0x10;
                    }
                    puVar50 = puVar50 + 1;
                    if (uVar65 < uVar105 + 0x18) break;
                    uVar105 = uVar105 + 0x18;
                  }
                  uStack_230 = puVar50;
                }
                uVar95 = uVar105 + 3;
                if (uVar105 + 3 <= uVar65) {
                  do {
                    uVar105 = uVar95;
                    uVar73 = (3 << ((uint8_t)iVar117 & 0x1f)) + uVar73;
                    iVar117 = iVar117 + 2;
                    uVar95 = uVar105 + 3;
                  } while (uVar105 + 3 <= uVar65);
                }
                iVar122 = uVar65 - uVar105 << ((uint8_t)iVar117 & 0x1f);
                if (uStack_264 * -0x6617dcb6 != 0xf28d37e) {
                  iVar122 = (uVar65 - uVar105) - iVar117;
                }
                uVar73 = iVar122 + uVar73;
                if (iVar117 <=
                    (int)(uint32_t)(uint16_t)(0x70U >> (bVar43 & 0xf) | 0x70 << 0x10 - (bVar43 & 0xf))) {
                  iVar117 = iVar117 + 2;
LAB_7fffa508233f:
                  uVar100 = uVar100 & 0xffffffff;
                  param_4 = uStack_258;
                  goto LAB_7fffa5082342;
                }
                param_4 = uStack_258;
                if ((bool)(uStack_230 <= puVar61 | bVar101)) {
                  *uStack_230 = (short)uVar73;
                  uStack_230 = uStack_230 + 1;
                  iVar117 = iVar117 + -0xe;
                  uVar73 = uVar73 >> 0x10;
                  goto LAB_7fffa508233f;
                }
                goto LAB_7fffa5082854;
              }
LAB_7fffa50824d8:
              param_4 = uStack_258;
LAB_7fffa50824e0:
              if (!(bool)((bVar101 | uStack_230 <= puVar61) &
                         uVar91 == (uint16_t)(8U >> (bVar43 & 0xf) | 8 << 0x10 - (bVar43 & 0xf)))) {
                goto LAB_7fffa507f890;
              }
              iVar121 = iVar117 + 0xe;
              if (-1 < iVar117 + 7) {
                iVar121 = iVar117 + 7;
              }
              uStack_148 = (int64_t)(iVar121 >> 3) + (int64_t)uStack_230;
              *uStack_230 = (short)uVar73;
              if (0xffffffffffffff88 < uStack_148 - (int64_t)puStack_1e8) {
                param_4 = uStack_258;
                goto LAB_7fffa507f890;
              }
              uVar49 = (uStack_110 << 4 | uStack_110 >> 0x3c) ^
                       (uStack_110 >> 1 | (uint64_t)((uStack_110 & 1) != 0) << 0x3f) ^ uStack_110;
              uVar79 = uStack_200;
              (*(code *)(&UNK_7fffa54b58a5 + (int)~(uVar99 + 0x9eae02f1)))
                        (uVar49 - (uVar49 << 0x24),lStack_128,uVar93,
                         (param_7 | 1) * -0x7d32129f1812fa1c,
                         0x88289b3eU >> (bVar43 & 0x1f) | -0x77d764c2 << 0x20 - (bVar43 & 0x1f));
              uVar93 = (uVar79 << 0x1f | uVar79 >> 0x21) ^ uVar79;
              uVar49 = uVar79 << 0x11 | uVar79 >> 0x2f;
              uVar79 = uVar93 | uVar49;
              if ((int64_t)(int)((uVar99 ^ 0x9847e3ab) * 0x16976d21 ^ 0x811a43e8) <
                  (int64_t)(uint64_t)~((uVar99 ^ 0xf435c33) * -0x5af8b1e3)) {
                uVar79 = uVar49 ^ uVar93;
              }
              uVar79 = (uVar79 << 0x3e | uVar79 >> 2) ^ (uVar79 << 0x22 | uVar79 >> 0x1e) ^ uVar79;
              uVar79 = (uVar79 << 4 | uVar79 >> 0x3c) ^ (uVar79 << 0x3c | uVar79 >> 4) ^ uVar79;
              uVar79 = (uVar79 << 8 | uVar79 >> 0x38) ^ (uVar79 << 0x38 | uVar79 >> 8) ^ uVar79;
              if (0xffffffffffffff88 <
                  ((uVar79 << 0x10 | uVar79 >> 0x30) ^ (uVar79 << 0x30 | uVar79 >> 0x10) ^ uVar79 ^
                  0x48f4e841)) {
                in_R11 = lStack_138;
                param_4 = uStack_258;
                goto LAB_7fffa507f890;
              }
              (*(code *)((int64_t)(short)(uVar46 + 0x5882 ^ 0xc1ba) + 0x7fffa55f3101))
                        (uVar80,(int64_t)puStack_2e0 - ((int64_t)puStack_2e0 << 0x37),
                         pbStack_248 + -0xce46fe11,uStack_148);
              uVar80 = uVar80 >> 2 ^ uVar80;
              uVar80 = uVar80 >> 4 ^ uVar80;
              uVar80 = uVar80 >> 8 ^ uVar80;
              uVar80 = uVar80 >> 0x10 ^ uVar80;
              uVar80 = uVar80 >> 0x20 ^ uVar80;
              uVar79 = (uVar80 ^ uVar80 << 0x38) - (uVar80 << 0x2d);
              param_4 = uStack_258;
              in_R11 = lStack_138;
              if (0xffffffffffffff88 < uVar79) {
                goto LAB_7fffa507f890;
              }
              if (uVar80 << 0x38 == uVar80) goto LAB_7fffa5081183;
              uVar79 = (uStack_148 + uVar79) - (int64_t)puStack_1e8;
              if ((uint64_t)(int64_t)(short)(-0x57e4 - uVar46) <= uVar79) goto LAB_7fffa507f890;
              if (uVar79 < 2 || uStack_220 <= uVar79) goto LAB_7fffa5081183;
              *(char *)(param_5 + 0x2ec) = (char)uVar79;
              uVar79 = uVar79 + 1;
              if ((int)uStack_258 < (int)uStack_1b4) goto LAB_7fffa508282d;
              goto LAB_7fffa5081acb;
            }
            goto LAB_7fffa507f890;
          }
        }
LAB_7fffa5081183:
        if (cStack_f1 != '\0') goto LAB_7fffa507f890;
        *(char *)(param_5 + 0x2ec) = cVar81;
        pbStack_248[(int64_t)puStack_2e0] = 0;
        if ((uint32_t)param_4 < 7 || (bStack_149 & 1) != 0) {
          puVar50 = (uint16_t *)0x0;
LAB_7fffa5081a79:
          pcVar60 = (char *)(((uint64_t)puVar50 >> 1) + (int64_t)puStack_1e8);
          do {
            pcVar5 = (char *)(lVar84 + 0x1ed + (int64_t)puVar50);
            pcVar6 = (char *)(lVar84 + 0x1ee + (int64_t)puVar50);
            puVar50 = puVar50 + 1;
            *pcVar60 = *pcVar5 * '\x10' + *pcVar6;
            pcVar60 = pcVar60 + 1;
          } while (puVar50 < puStack_2e0);
          puVar70 = puVar69;
        }
        else if ((uint32_t)param_4 < 0x1f) {
          uVar79 = 0;
LAB_7fffa5081964:
          while( true ) {
            auVar119 = ZEXT416(CONCAT13(*(uint8_t *)(lVar84 + 499 + uVar79 * 2),
                                        CONCAT12(*(uint8_t *)(lVar84 + 0x1f1 + uVar79 * 2),
                                                 CONCAT11(*(uint8_t *)
                                                           (lVar84 + 0x1ef + uVar79 * 2),
                                                          *(uint8_t *)
                                                           (lVar84 + 0x1ed + uVar79 * 2)))));
            if ((0x1227d - uVar99 >> 1 | (uint32_t)((0x1227d - uVar99 & 1) != 0) << 0x1f) <
                uVar99 + 0x573af1ef) {
              auVar119 = psllw(auVar119,4);
              uVar83 = auVar119._0_4_ & auVar140._0_4_;
            }
            else {
              auVar119 = psllw(auVar119,2);
              uVar83 = auVar119._0_4_ & (uint32_t)DAT_7fffa56b8410;
            }
            *(uint32_t *)((int64_t)puStack_1e8 + (uVar79 & 0x7ffffffffffffffc)) =
                 CONCAT13(*(char *)(lVar84 + 500 + uVar79 * 2) + (char)(uVar83 >> 0x18),
                          CONCAT12(*(char *)(lVar84 + 0x1f2 + uVar79 * 2) + (char)(uVar83 >> 0x10),
                                   CONCAT11(*(char *)(lVar84 + 0x1f0 + uVar79 * 2) +
                                            (char)(uVar83 >> 8),
                                            *(char *)(lVar84 + 0x1ee + uVar79 * 2) + (char)uVar83)))
            ;
            if (uStack_218 == uVar79) break;
            uVar79 = uVar79 + 4;
          }
          puVar70 = puVar69;
          puVar50 = puStack_190;
          if (uStack_240 != uStack_208) goto LAB_7fffa5081a79;
        }
        else {
          uStack_148 = uStack_1f0;
          uStack_f0 = 0;
          uVar79 = 0;
          while( true ) {
            auVar140 = _DAT_7fffa56b9c80;
            uVar93 = uVar79;
            if ((-0x172f0834 << (bVar43 & 0x1f) | 0xe8d0f7ccU >> 0x20 - (bVar43 & 0x1f)) <
                (uVar99 + 0x35137598 >> 1 | (uint32_t)((uVar99 + 0x35137598 & 1) != 0) << 0x1f)) {
              uVar93 = uStack_f0;
            }
            uStack_1c0 = uVar93 | 0xf;
            uStack_230 = (uint16_t *)(uVar93 | 0xd);
            puStack_1a0 = (uint8_t *)(uVar93 | 0x15);
            bVar82 = pbStack_248[uVar93 | 0x11];
            lStack_2a0 = CONCAT71(lStack_2a0._1_7_,bVar82);
            bStack_151 = pbStack_248[uVar93 + 0xe];
            bStack_1a1 = pbStack_248[uVar93 + 0x17];
            bVar54 = pbStack_248[uVar93 + 0x13];
            uStack_288 = CONCAT71(uStack_288._1_7_,bVar54);
            bVar87 = pbStack_248[uVar93 + 5];
            uStack_260 = CONCAT71(uStack_260._1_7_,bVar87);
            if ((0x4ae0000U >> (bVar43 & 0x1f) | 0x4ae0000 << 0x20 - (bVar43 & 0x1f)) ==
                0x2152a928 - uVar99) {
              iVar117 = 0x5f9d0d9f;
              uVar49 = uVar93 + 9;
              if ((int64_t)(uint64_t)~(uVar99 + 0x1dd446e9) <= (int64_t)(0x8006152a9fa - param_7)
                 ) {
                uVar49 = uVar93 | 9;
              }
            }
            else {
              iVar117 = uVar99 + 0x1d5399f1;
              uVar49 = uVar93 | 9;
            }
            uVar100 = uVar93 | 0x14;
            if ((-0x701696c - iVar117) * uStack_264 + 0x2a90ebb1 <= (iVar117 - uVar99) + 0x55a5d383)
            {
              uVar100 = (uint64_t)((uint32_t)uVar93 & 0x10);
            }
            auVar128[5] = pbStack_248[uVar93 + 10];
            auVar128[4] = pbStack_248[uVar93 | 8];
            bVar7 = pbStack_248[uVar93 + 0x1f];
            auVar128[7] = bStack_151;
            auVar128[6] = pbStack_248[uVar93 + 0xc];
            bVar8 = pbStack_248[uVar93 | 0x1d];
            bVar9 = pbStack_248[uVar93 + 0x1b];
            auVar128[3] = pbStack_248[uVar93 + 6];
            auVar128[2] = pbStack_248[uVar93 | 4];
            bVar10 = pbStack_248[uVar93 | 0x19];
            auVar128[1] = pbStack_248[uVar93 + 2];
            auVar128[0] = pbStack_248[uVar93];
            bVar11 = pbStack_248[(int64_t)puStack_1a0];
            auVar128[9] = pbStack_248[uVar93 | 0x12];
            auVar128[8] = pbStack_248[uVar93 | 0x10];
            auVar128[0xb] = pbStack_248[uVar93 + 0x16];
            auVar128[10] = pbStack_248[uVar100];
            bVar12 = pbStack_248[uStack_1c0];
            bVar13 = pbStack_248[(int64_t)uStack_230];
            auVar128[0xf] = pbStack_248[uVar93 + 0x1e];
            auVar128[0xe] = pbStack_248[uVar93 + 0x1c];
            bVar14 = pbStack_248[uVar93 | 0xb];
            auVar128[0xd] = pbStack_248[uVar93 + 0x1a];
            auVar128[0xc] = pbStack_248[uVar93 | 0x18];
            bVar15 = pbStack_248[uVar49];
            bVar16 = pbStack_248[uVar93 + 3];
            bVar17 = pbStack_248[uVar93 + 7];
            auVar129 = psllw(auVar128,4);
            auVar129 = auVar129 & _DAT_7fffa56b9c80;
            pcVar60 = (char *)(puStack_1e8 + uVar79);
            *pcVar60 = pbStack_248[uVar93 + 1] + auVar129[0];
            pcVar60[1] = bVar16 + auVar129[1];
            pcVar60[2] = bVar87 + auVar129[2];
            pcVar60[3] = bVar17 + auVar129[3];
            pcVar60[4] = bVar15 + auVar129[4];
            pcVar60[5] = bVar14 + auVar129[5];
            pcVar60[6] = bVar13 + auVar129[6];
            pcVar60[7] = bVar12 + auVar129[7];
            pcVar60[8] = bVar82 + auVar129[8];
            pcVar60[9] = bVar54 + auVar129[9];
            pcVar60[10] = bVar11 + auVar129[10];
            pcVar60[0xb] = bStack_1a1 + auVar129[0xb];
            pcVar60[0xc] = bVar10 + auVar129[0xc];
            pcVar60[0xd] = bVar9 + auVar129[0xd];
            pcVar60[0xe] = bVar8 + auVar129[0xe];
            pcVar60[0xf] = bVar7 + auVar129[0xf];
            if (uStack_148 == 0) break;
            uVar79 = uVar79 + 8;
            uStack_f0 = uStack_f0 + 0x20;
            uStack_148 = uStack_148 - 0x10;
          }
          puVar70 = puStack_100;
          in_R11 = lStack_138;
          param_4 = uStack_258;
          auVar129 = _DAT_7fffa56bc4f0;
          auVar128 = _DAT_7fffa56b26a0;
          auVar139 = _DAT_7fffa56b8d90;
          auVar145 = _PTR_DAT_7fffa56bc2c0;
          if (uStack_240 != uStack_298) {
            puVar69 = puStack_100;
            puVar50 = puStack_270;
            uVar79 = uStack_298;
            if ((uStack_240 & 0xc) == 0) goto LAB_7fffa5081a79;
            goto LAB_7fffa5081964;
          }
        }
        uVar79 = uStack_180;
        if ((int)param_4 < (int)uStack_1b4) {
LAB_7fffa508282d:
          uVar49 = 0;
        }
        else {
LAB_7fffa5081acb:
          puVar69 = puVar70;
          if (uStack_150 < 4) {
            uVar93 = 0;
            uVar49 = 0;
LAB_7fffa5081b83:
            while( true ) {
              uVar49 = (uint64_t)(uint8_t)pcVar67[uVar93 * 8 + 8] *
                       (uint64_t)*(uint32_t *)(in_R11 + uVar93 * 4) + uVar49;
              puVar70 = puVar69;
              if (uVar66 - 1 == uVar93) break;
              uVar93 = uVar93 + 1;
            }
          }
          else {
            lVar89 = 0;
            lVar132 = 0;
            uVar93 = 0;
            lVar92 = 0;
            lVar62 = 0;
            do {
              uVar49 = *(uint64_t *)(in_R11 + 8 + uVar93 * 2);
              uVar100 = *(uint64_t *)(in_R11 + uVar93 * 2);
              lVar92 = lVar92 + (uVar49 & 0xffffffff) *
                                (*(uint64_t *)(pcVar67 + uVar93 * 4 + 0x18) & 0xff);
              lVar62 = lVar62 + (uVar49 >> 0x20) *
                                (*(uint64_t *)((int64_t)(pcVar67 + uVar93 * 4 + 0x18) + 8) & 0xff)
              ;
              lVar89 = lVar89 + (*(uint64_t *)(pcVar67 + uVar93 * 4 + 8) & 0xff) *
                                (uVar100 & 0xffffffff);
              lVar132 = lVar132 + (*(uint64_t *)((int64_t)(pcVar67 + uVar93 * 4 + 8) + 8) & 0xff)
                                  * (uVar100 >> 0x20);
              uVar93 = uVar93 + 8;
            } while ((uVar66 * 2 & 0xfffffffffffffff8) != uVar93);
            uVar49 = lVar132 + lVar62 + lVar89 + lVar92;
            uVar93 = (uint64_t)(uVar71 & 0xfffffffc);
            if ((uVar71 & 0xfffffffc) != uVar71) goto LAB_7fffa5081b83;
          }
          uVar49 = uVar49 >> 3;
        }
        uVar79 = uVar79 + uVar49;
        if (uStack_238 + 1 < uVar79) {
          return uStack_168;
        }
        if (uVar79 < uStack_238) {
          uStack_168 = uStack_360;
        }
        uStack_168 = uStack_168 & 0xffffffff;
        if (uVar79 < uStack_238) {
          uStack_238 = uVar79;
        }
        puVar69 = puVar70;
      }
LAB_7fffa507f890:
      uStack_360 = uStack_360 + 1;
    } while (iStack_224 != (int)uStack_360);
  }
                    /* WARNING: Read-only address (ram,0x7fffa56b26a0) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56b8410) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56b8d90) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56b9c80) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc280) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc2c0) is written */
                    /* WARNING: Read-only address (ram,0x7fffa56bc4f0) is written */
  return uStack_168;
code_r0x7fffa50813e9:
  uVar95 = uVar95 + 1;
  goto LAB_7fffa5081290;
}


// ============================================================================
// Function : FUN_7fffa5082b80  |  RVA: 0x912b80  |  Size: 541 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5082b80(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa4785bdb = 0;
  uRam00007fffa4785c01 = 0;
  uRam00007fffa4785c09 = 0;
  uRam00007fffa4785bf1 = 0;
  uRam00007fffa4785bf9 = 0;
  uRam00007fffa4785be1 = 0;
  uRam00007fffa4785be9 = 0;
  uRam00007fffa4785c15 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)(uVar1 >> 0x20)) << 0x20 | uVar1 & 0xffffffff) * 0x547cfa36fcbab1b +
          1;
  lVar5 = 3;
  while( true ) {
    lVar2 = lVar2 * 0x547cfa36fcbab1b + 1;
    *(char *)(lVar5 + 0x7fffa4785bce) = (char)((uint64_t)lVar2 >> 0x20);
    if (lVar5 == 0x4f) break;
    lVar3 = lVar2 * 0x547cfa36fcbab1b + 1;
    lVar4 = lVar3 * 0x547cfa36fcbab1b + 1;
    lVar2 = lVar4 * 0x547cfa36fcbab1b + 1;
    *(char *)(lVar5 + 0x7fffa4785bd1) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar5 + 0x7fffa4785bd0) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar5 + 0x7fffa4785bcf) = (char)((uint64_t)lVar3 >> 0x20);
    lVar5 = lVar5 + 4;
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa4785bdb * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa4785be1) = 0xffffffffffffffff;
  bRam00007fffa4785bdb = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5082da0  |  RVA: 0x912da0  |  Size: 604 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5082da0(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  uRam00007fffa4785d28 = 0;
  uRam00007fffa4785d44 = 0;
  uRam00007fffa4785d4c = 0;
  uRam00007fffa4785d34 = 0;
  uRam00007fffa4785d3c = 0;
  uRam00007fffa4785d58 = 0;
  uVar1 = rdtsc();
  lVar5 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x42d25fb0af0c049 + 0xb;
  uVar4 = 0;
  while( true ) {
    lVar5 = lVar5 * 0x42d25fb0af0c049 + 0xb;
    *(char *)(uVar4 + 0x7fffa4785d21) = (char)((uint64_t)lVar5 >> 0x20);
    lVar5 = lVar5 * 0x42d25fb0af0c049 + 0xb;
    *(char *)(uVar4 + 0x7fffa4785d22) = (char)((uint64_t)lVar5 >> 0x20);
    lVar5 = lVar5 * 0x42d25fb0af0c049 + 0xb;
    *(char *)(uVar4 + 0x7fffa4785d23) = (char)((uint64_t)lVar5 >> 0x20);
    if ((uVar4 << 4 | uVar4 >> 0x3c) == 0x440) break;
    lVar5 = lVar5 * 0x42d25fb0af0c049 + 0xb;
    *(char *)(uVar4 + 0x7fffa4785d24) = (char)((uint64_t)lVar5 >> 0x20);
    uVar4 = uVar4 + 4;
  }
  bVar2 = (uint8_t)uVar4 & 0x1f;
  bVar3 = *(char *)(((int64_t)(int)(-0x5fb366c1 - (uint32_t)uVar4) ^ 0x5fb3fa6eU) + 0x7fffa478fa93) +
          1U & 3;
  *(uint64_t *)((int64_t)(int)~((uint32_t)uVar4 ^ 0xbffc) + 0x7fffa4791ced + (uint64_t)bVar3 * 8) =
       0;
  *(uint8_t *)((int64_t)(int)((0x83c3424fU >> bVar2 | -0x7c3cbdb1 << 0x20 - bVar2) * 0x547b55c1) +
           0x7fffa4791a04) = bVar3;
  return;
}


// ============================================================================
// Function : thunk_FUN_7fffa55eeda0  |  RVA: 0x913000  |  Size: 5 bytes
// Callers  : FUN_7fffa47de1c0@0x6e1c0, FUN_7fffa5444750@0xcd4750, FUN_7fffa560a390@0xe9a390, FUN_7fffa50c96be@0x9596be, FUN_7fffa560e4a0@0xe9e4a0, FUN_7fffa5182a30@0xa12a30, FUN_7fffa564c680@0xedc680
// Callees  : none
// ============================================================================
void thunk_FUN_7fffa55eeda0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5083040  |  RVA: 0x913040  |  Size: 492 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa5083040(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  code *pcVar4;
  uint64_t uVar5;
  int in_R10D;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  
  param_3 = (param_3 << 0x2d | param_3 >> 0x13) ^ (param_3 << 0x19 | param_3 >> 0x27) ^ param_3;
  param_3 = (param_3 << 0x32 | param_3 >> 0xe) ^ (param_3 << 0x1a | param_3 >> 0x26) ^ param_3;
  param_3 = (param_3 << 0x34 | param_3 >> 0xc) ^ (param_3 << 0x24 | param_3 >> 0x1c) ^ param_3;
  param_3 = (param_3 << 8 | param_3 >> 0x38) ^ (param_3 << 0x28 | param_3 >> 0x18) ^ param_3;
  plVar8 = (int64_t *)(param_3 >> 0x2b ^ param_3);
  uVar1 = plVar8[3];
  if (uVar1 < 0x27855f38 - (in_R10D + -0x465c161e)) {
    uVar2 = plVar8[2];
    if ((uVar2 ^ 0x7fffffffffffffff) < 0x100 - uVar2) {
      (*(code *)(&UNK_7fffa51a4a8d + (0x6de0cdc9 - in_R10D)))();
      pcVar4 = (code *)__debugbreak();
      (*pcVar4)();
      return;
    }
    uVar5 = (uVar1 >> 1) + uVar1;
    uVar7 = 0x10f;
    if (0x10f < uVar5) {
      uVar7 = uVar5;
    }
    uVar5 = uVar7 + 1;
    uVar3 = uVar5 << 0x3c ^ uVar5;
    pcVar4 = (code *)((int64_t)(int)(0x302801eeU - in_R10D ^ 0x3db99df9) + 0x7fffa5279a4f);
    (*pcVar4)(uVar3,pcVar4,uVar5 * 0x4000);
    plVar8[3] = uVar7;
    plVar8[2] = 0x100;
    lVar6 = (uVar3 << 0x2c | uVar3 >> 0x14) - ((uVar3 >> 0x14) << 0x36);
    if (uVar1 < 0x10) {
      FUN_7fffa56a5f20(lVar6,plVar8,uVar2 + 1,0);
    }
    else {
      FUN_7fffa56a5f20(lVar6,*plVar8,uVar2 + 1);
      (*(code *)((int64_t)(short)(0x2e42 - (short)in_R10D) + 0x7fffa568c244))();
    }
    plVar8[2] = uVar2;
    *plVar8 = lVar6;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5083240  |  RVA: 0x913240  |  Size: 610 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5083240(void)

{
  uint64_t uVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  
  bRam00007fffa47859c8 = 0;
  uRam00007fffa47859cd = 0;
  uRam00007fffa47859d5 = 0;
  uRam00007fffa47859dd = 0;
  uRam00007fffa47859eb = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) * 0x1558ee0e6ed9881;
  uVar3 = 0;
  while( true ) {
    *(char *)(uVar3 + 0x7fffa47859ba) = (char)((uint64_t)(lVar2 * 0x4b85b37101) >> 0x20);
    *(char *)(uVar3 + 0x7fffa47859b9) = (char)((uint64_t)(lVar2 * 0xe0e6ed9881) >> 0x20);
    if (uVar3 == 0x3c) break;
    *(char *)((uVar3 | 2) + 0x7fffa47859b9) = (char)((uint64_t)(lVar2 * 0xf76e718981) >> 0x20);
    lVar2 = lVar2 * 0x1d6fb7c84347e201;
    *(char *)(uVar3 + 0x7fffa47859bc) = (char)((uint64_t)lVar2 >> 0x20);
    uVar3 = uVar3 + 4;
  }
  uVar4 = (uint32_t)bRam00007fffa47859c8 * 0x55555556 + 0x55555556;
  uVar3 = (uint64_t)uVar4 + (uint64_t)uVar4 * 2;
  *(uint64_t *)((uVar3 >> 0x20) * 8 + 0x7fffa47859cd) = uRam00007fffa47859eb;
  bRam00007fffa47859c8 = (char)(uVar3 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa50834b0  |  RVA: 0x9134b0  |  Size: 508 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa50834b0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa4785a46 = 0;
  uRam00007fffa4785a6c = 0;
  uRam00007fffa4785a74 = 0;
  uRam00007fffa4785a5c = 0;
  uRam00007fffa4785a64 = 0;
  uRam00007fffa4785a4c = 0;
  uRam00007fffa4785a54 = 0;
  uRam00007fffa4785a8b = 0;
  uVar1 = rdtsc();
  lVar4 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0x64f73314b2c4737 + 1;
  lVar3 = 2;
  do {
    lVar4 = lVar4 * 0x64f73314b2c4737 + 1;
    *(char *)(lVar3 + 0x7fffa4785a3e) = (char)((uint64_t)lVar4 >> 0x20);
    lVar5 = lVar4 * 0x64f73314b2c4737 + 1;
    lVar4 = lVar5 * 0x64f73314b2c4737 + 1;
    *(char *)(lVar3 + 0x7fffa4785a3f) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar3 + 0x7fffa4785a40) = (char)((uint64_t)lVar4 >> 0x20);
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x59);
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa4785a46 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa4785a4c) = ~uRam00007fffa4785a8b;
  bRam00007fffa4785a46 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa50836b0  |  RVA: 0x9136b0  |  Size: 82357 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa565caf0@0xeecaf0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa50836b0(void) {
    /* +0x9136b0 */ __asm { PUSH RBP }
    /* +0x9136b1 */ __asm { PUSH R13 }
    /* +0x9136b3 */ __asm { PUSH R15 }
    /* +0x9136b5 */ __asm { PUSH R14 }
    /* +0x9136b7 */ __asm { PUSH RDI }
    /* +0x9136b8 */ __asm { PUSH RSI }
    /* +0x9136b9 */ __asm { PUSH R12 }
    /* +0x9136bb */ __asm { PUSH RBX }
    /* +0x9136bc */ __asm { MOV EAX,0x1038 }
    /* +0x9136c1 */ __asm { CALL 0x7fffa565caf0 }
    /* +0x9136c6 */ __asm { SUB RSP,RAX }
    /* +0x9136c9 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x9136d1 */ __asm { MOVDQA xmmword ptr [RBP + 0xfa0],XMM14 }
    /* +0x9136da */ __asm { MOVDQA xmmword ptr [RBP + 0xf90],XMM10 }
    /* +0x9136e3 */ __asm { MOVDQA xmmword ptr [RBP + 0xf80],XMM6 }
    /* +0x9136eb */ __asm { MOVDQA xmmword ptr [RBP + 0xf70],XMM15 }
    /* +0x9136f4 */ __asm { MOVDQA xmmword ptr [RBP + 0xf60],XMM13 }
    /* +0x9136fd */ __asm { MOVDQA xmmword ptr [RBP + 0xf50],XMM12 }
    /* +0x913706 */ __asm { MOVDQA xmmword ptr [RBP + 0xf40],XMM9 }
    /* +0x91370f */ __asm { MOVDQA xmmword ptr [RBP + 0xf30],XMM11 }
    /* +0x913718 */ __asm { MOVDQA xmmword ptr [RBP + 0xf20],XMM8 }
    /* +0x913721 */ __asm { MOVDQA xmmword ptr [RBP + 0xf10],XMM7 }
    /* +0x913729 */ __asm { MOV qword ptr [RBP + 0xf08],-0x2 }
    /* +0x913734 */ __asm { MOV R14,R10 }
    /* +0x913737 */ __asm { MOV dword ptr [RBP + 0x570],0xea0f2224 }
    /* +0x913741 */ __asm { MOV R10D,dword ptr [RBP + 0x570] }
    /* +0x913748 */ __asm { MOV R10W,0x36ac }
    /* +0x91374d */ __asm { XOR R10D,R14D }
    /* +0x913750 */ __asm { ADD R10D,0xffffdfb7 }
    /* +0x913757 */ __asm { MOVZX EDX,R10W }
    /* +0x91375b */ __asm { MOV RDX,qword ptr GS:[RDX] }
    /* +0x91375f */ __asm { LEA R10,[0x7fffa47be1cd] }
    /* +0x913766 */ __asm { MOV R9,-0x27aa24cb5907ac57 }
    /* +0x913770 */ __asm { ADD R9,0x1850ed3b }
    /* +0x913777 */ __asm { MOV ECX,R14D }
    /* +0x91377a */ __asm { ROR R9,CL }
    /* +0x91377d */ __asm { IMUL RCX,R9,0x63cf5e3d }
    /* +0x913784 */ __asm { MOV RDX,qword ptr [RDX + 0x48] }
    /* +0x913788 */ __asm { CMP R10,RCX }
    /* +0x91378b */ __asm { JNZ 0x7fffa50837d3 }
    /* +0x91378d */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x913794 */ __asm { MOV RCX,0x0 }
    /* +0x91379b */ __asm { IMUL EBX,dword ptr CS:[RCX + -0x72b7cc15],0x6ec85905 }
    /* +0x9137a6 */ __asm { DEC dword ptr [RAX + -0x39] }
    /* +0x9137a9 */ __asm { ROL dword ptr [RAX],0x0 }
    /* +0x9137ac */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0x9137ae */ __asm { MOV dword ptr [RBP + 0x570],0xa6944603 }
    /* +0x9137b8 */ __asm { MOV R9D,dword ptr [RBP + 0x570] }
    /* +0x9137bf */ __asm { TEST R9D,R9D }
    /* +0x9137c2 */ __asm { NOP }
    /* +0x9137c3 */ __asm { NOP }
    /* +0x9137c4 */ __asm { NOP }
    /* +0x9137c5 */ __asm { NOP }
    /* +0x9137c6 */ __asm { NOP }
    /* +0x9137c7 */ __asm { PUSHFQ }
    /* +0x9137c8 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x9137d0 */ __asm { POPFQ }
    /* +0x9137d1 */ __asm { PAUSE }
    /* +0x9137d3 */ __asm { XOR EAX,EAX }
    /* +0x9137d5 */ __asm { CMPXCHG.LOCK qword ptr [R10 + -0xded],RDX }
    /* +0x9137de */ __asm { CMP RAX,RDX }
    /* +0x9137e1 */ __asm { JNZ 0x7fffa50837a0 }
    /* +0x9137e3 */ __asm { MOV qword ptr [RBP + 0x8],RDX }
    /* +0x9137e7 */ __asm { MOV R10D,0x42ce453f }
    /* +0x9137ed */ __asm { XOR R10D,R14D }
    /* +0x9137f0 */ __asm { ADD R10D,0x88db4028 }
    /* +0x9137f7 */ __asm { MOV dword ptr [RBP + 0x570],R10D }
    /* +0x9137fe */ __asm { MOV R10D,dword ptr [RBP + 0x570] }
    /* +0x913805 */ __asm { MOV R9W,0xc4c5 }
    /* +0x91380a */ __asm { ADD R9D,0x3b3b }
    /* +0x913811 */ __asm { MOV ECX,R14D }
    /* +0x913814 */ __asm { ROL R9W,CL }
    /* +0x913818 */ __asm { AND R10D,0x1 }
    /* +0x91381c */ __asm { MOVZX R9D,R9W }
    /* +0x913820 */ __asm { CMP R10D,R9D }
    /* +0x913823 */ __asm { JZ 0x7fffa5083827 }
    /* +0x913825 */ __asm { CDQE }
    /* +0x913827 */ __asm { LEA RCX,[0x7fffa478bc38] }
    /* +0x91382e */ __asm { MOV DX,0xed2b }
    /* +0x913832 */ __asm { SUB EDX,R14D }
    /* +0x913835 */ __asm { LEA R10,[0x7fffa47907f8] }
    /* +0x91383c */ __asm { MOV R9D,R14D }
    /* +0x91383f */ __asm { OR R9D,0x1 }
    /* +0x913843 */ __asm { MOV R8W,0x8f91 }
    /* +0x913848 */ __asm { ADD EDX,0xf62 }
    /* +0x91384e */ __asm { MOVSX RDX,DX }
    /* +0x913852 */ __asm { MOV qword ptr [RBP + 0xbc8],R9 }
    /* +0x913859 */ __asm { IMUL R8D,R9D }
    /* +0x91385d */ __asm { MOVSX R9,R8W }
    /* +0x913861 */ __asm { XOR R9,0x6781 }
    /* +0x913868 */ __asm { ADD R9,RCX }
    /* +0x91386b */ __asm { LEA RCX,[0x7fffa47864a4] }
    /* +0x913872 */ __asm { MOVZX EDX,uint8_t ptr [RCX + RDX*0x1 + 0x10] }
    /* +0x913877 */ __asm { MOVQ XMM4,qword ptr [R9 + RDX*0x8 + 0x1f] }
    /* +0x91387e */ __asm { PCMPEQD XMM0,XMM0 }
    /* +0x913882 */ __asm { PXOR XMM4,XMM0 }
    /* +0x913886 */ __asm { MOVDQA XMM1,XMM4 }
    /* +0x91388a */ __asm { PSRLW XMM1,0x4 }
    /* +0x91388f */ __asm { PAND XMM1,xmmword ptr [0x7fffa56b8670] }
    /* +0x913897 */ __asm { PSLLW XMM4,0x4 }
    /* +0x91389c */ __asm { PAND XMM4,xmmword ptr [0x7fffa56b9c80] }
    /* +0x9138a4 */ __asm { POR XMM4,XMM1 }
    /* +0x9138a8 */ __asm { MOV R9D,0x907a8654 }
    /* +0x9138ae */ __asm { ADD R9D,0x6998a1ab }
    /* +0x9138b5 */ __asm { MOV ECX,R14D }
    /* +0x9138b8 */ __asm { ROL R9D,CL }
    /* +0x9138bb */ __asm { MOVSXD RDX,R9D }
    /* +0x9138be */ __asm { MOVQ XMM1,qword ptr [R10 + RDX*0x1 + 0x40] }
    /* +0x9138c5 */ __asm { PXOR XMM1,XMM0 }
    /* +0x9138c9 */ __asm { PXOR XMM1,XMM4 }
    /* +0x9138cd */ __asm { MOVQ qword ptr [RBP + 0x570],XMM1 }
    /* +0x9138d5 */ __asm { CMP qword ptr [RBP + 0x570],0x0 }
    /* +0x9138dd */ __asm { JNZ 0x7fffa5083ccb }
    /* +0x9138e3 */ __asm { MOV R10D,0x6f194d4 }
    /* +0x9138e9 */ __asm { XOR R10D,R14D }
    /* +0x9138ec */ __asm { NOT R10D }
    /* +0x9138ef */ __asm { MOV dword ptr [RBP + 0x570],R10D }
    /* +0x9138f6 */ __asm { MOV R10D,dword ptr [RBP + 0x570] }
    /* +0x9138fd */ __asm { TEST R10B,0x1 }
    /* +0x913901 */ __asm { NOP }
    /* +0x913902 */ __asm { NOP }
    /* +0x913903 */ __asm { NOP }
    /* +0x913904 */ __asm { NOP }
    /* +0x913905 */ __asm { NOP }
    /* +0x913906 */ __asm { MOV EDX,0xe990216 }
    /* +0x91390b */ __asm { ADD EDX,0xf0284a7b }
    /* +0x913911 */ __asm { MOV RCX,0x0 }
    /* +0x913918 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x91391f */ __asm { NOP }
    /* +0x913920 */ __asm { MOV ECX,R14D }
    /* +0x913923 */ __asm { ROL EDX,CL }
    /* +0x913925 */ __asm { ADD EDX,0xedbe2af7 }
    /* +0x91392b */ __asm { MOV RSI,qword ptr [RDX] }
    /* +0x91392e */ __asm { LEA RCX,[0x7fffa478c922] }
    /* +0x913935 */ __asm { MOV qword ptr [RBP + 0xa0],RCX }
    /* +0x91393c */ __asm { MOV R10W,0xf90a }
    /* +0x913941 */ __asm { MOV dword ptr [RBP + 0xc90],R10D }
    /* +0x913948 */ __asm { LEA RCX,[0x7fffa47929dd] }
    /* +0x91394f */ __asm { MOV qword ptr [RBP + 0xe30],RCX }
    /* +0x913956 */ __asm { MOV R10D,0x2b448dd2 }
    /* +0x91395c */ __asm { MOV EDI,R10D }
    /* +0x91395f */ __asm { LEA RCX,[0x7fffa478964a] }
    /* +0x913966 */ __asm { MOV qword ptr [RBP + 0x350],RCX }
    /* +0x91396d */ __asm { LEA RDX,[0x7fffa478a0a1] }
    /* +0x913974 */ __asm { LEA RCX,[0x7fffa4784c61] }
    /* +0x91397b */ __asm { MOV qword ptr [RBP + 0xe10],RCX }
    /* +0x913982 */ __asm { LEA RCX,[0x7fffa478ef95] }
    /* +0x913989 */ __asm { MOV qword ptr [RBP + 0xe8],RCX }
    /* +0x913990 */ __asm { MOV R10W,0xaa39 }
    /* +0x913995 */ __asm { MOV dword ptr [RBP + 0xa90],R10D }
    /* +0x91399c */ __asm { MOV R11D,0xbc4dcf79 }
    /* +0x9139a2 */ __asm { LEA RCX,[0x7fffa4792841] }
    /* +0x9139a9 */ __asm { MOV qword ptr [RBP + 0xc60],RCX }
    /* +0x9139b0 */ __asm { MOV R10W,0x6d75 }
    /* +0x9139b5 */ __asm { IMUL R10D,R10D,0x5991 }
    /* +0x9139bc */ __asm { ADD R10D,0xffffe95b }
    /* +0x9139c3 */ __asm { MOV ECX,R14D }
    /* +0x9139c6 */ __asm { ROL R10W,CL }
    /* +0x9139ca */ __asm { MOV dword ptr [RBP + 0x1a0],R10D }
    /* +0x9139d1 */ __asm { MOV R10D,0x3ae294f6 }
    /* +0x9139d7 */ __asm { MOV dword ptr [RBP + 0xd0],R10D }
    /* +0x9139de */ __asm { LEA R9,[0x7fffa4786825] }
    /* +0x9139e5 */ __asm { MOV R8D,0xbf29654 }
    /* +0x9139eb */ __asm { LEA RCX,[0x7fffa4788dbe] }
    /* +0x9139f2 */ __asm { MOV qword ptr [RBP + -0x18],RCX }
    /* +0x9139f6 */ __asm { LEA RCX,[0x7fffa4785b91] }
    /* +0x9139fd */ __asm { MOV qword ptr [RBP + 0x70],RCX }
    /* +0x913a01 */ __asm { MOV R10W,0x798 }
    /* +0x913a06 */ __asm { IMUL R10D,R10D,-0x7771 }
    /* +0x913a0d */ __asm { XOR R10D,0xbb14 }
    /* +0x913a14 */ __asm { MOV AX,0x581a }
    /* +0x913a18 */ __asm { XOR R8D,R14D }
    /* +0x913a1b */ __asm { IMUL ECX,R8D,0x49b92a39 }
    /* +0x913a22 */ __asm { ADD ECX,0x62b4f3bc }
    /* +0x913a28 */ __asm { MOV qword ptr [RBP + 0x330],RCX }
    /* +0x913a2f */ __asm { MOV EBX,0xd20b0775 }
    /* +0x913a34 */ __asm { LEA RCX,[0x7fffa47935ec] }
    /* +0x913a3b */ __asm { MOV qword ptr [RBP + 0xee0],RCX }
    /* +0x913a42 */ __asm { MOV ECX,R14D }
    /* +0x913a45 */ __asm { ROR R10W,CL }
    /* +0x913a49 */ __asm { MOV R15W,0x67a0 }
    /* +0x913a4e */ __asm { MOV R8D,0xdb73bee5 }
    /* +0x913a54 */ __asm { XOR R8D,0x6576021a }
    /* +0x913a5b */ __asm { ROR R8D,CL }
    /* +0x913a5e */ __asm { MOV R13D,0x992bdd94 }
    /* +0x913a64 */ __asm { MOV R12W,0x42d5 }
    /* +0x913a69 */ __asm { XOR R12D,0x50f4 }
    /* +0x913a70 */ __asm { ADD R12D,0xffffcb2c }
    /* +0x913a77 */ __asm { ROL R12W,CL }
    /* +0x913a7b */ __asm { MOV qword ptr [RBP + 0xbd0],R14 }
    /* +0x913a82 */ __asm { MOV R14D,0xffffd954 }
    /* +0x913a88 */ __asm { SUB R14D,EAX }
    /* +0x913a8b */ __asm { MOVSX RCX,R12W }
    /* +0x913a8f */ __asm { ADD RCX,RDX }
    /* +0x913a92 */ __asm { MOVSX RDX,R10W }
    /* +0x913a96 */ __asm { MOVZX R10D,uint8_t ptr [R9 + RDX*0x1 + 0x10] }
    /* +0x913a9c */ __asm { MOV EAX,ESI }
    /* +0x913a9e */ __asm { SHR RSI,0x18 }
    /* +0x913aa2 */ __asm { AND RSI,-0x100 }
    /* +0x913aa9 */ __asm { SUB R13D,dword ptr [RBP + 0xbd0] }
    /* +0x913ab0 */ __asm { ADD R13D,0xf293945 }
    /* +0x913ab7 */ __asm { MOV EDX,dword ptr [R13] }
    /* +0x913abb */ __asm { IMUL RSI,RDX }
    /* +0x913abf */ __asm { IMUL RAX,RDX }
    /* +0x913ac3 */ __asm { MOVSX R9,R14W }
    /* +0x913ac7 */ __asm { IMUL EDX,R10D,0x55555556 }
    /* +0x913ace */ __asm { ADD EDX,0x55555556 }
    /* +0x913ad4 */ __asm { LEA RDX,[RDX + RDX*0x2] }
    /* +0x913ad8 */ __asm { SHR RDX,0x20 }
    /* +0x913adc */ __asm { SHR RAX,0x18 }
    /* +0x913ae0 */ __asm { ADD RSI,RAX }
    /* +0x913ae3 */ __asm { MOV R13,RSI }
    /* +0x913ae6 */ __asm { SHR R13,0x38 }
    /* +0x913aea */ __asm { MOV R10,qword ptr [RBP + 0xa0] }
    /* +0x913af1 */ __asm { XOR R13B,uint8_t ptr [R10 + R9*0x1 + 0x47] }
    /* +0x913af6 */ __asm { MOV R9D,0xfffffac7 }
    /* +0x913afc */ __asm { SUB R9D,dword ptr [RBP + 0xa90] }
    /* +0x913b03 */ __asm { MOV R10,qword ptr [RBP + 0xbd0] }
    /* +0x913b0a */ __asm { XOR R10D,dword ptr [RBP + 0xc90] }
    /* +0x913b11 */ __asm { MOV R12,qword ptr [RBP + 0xbd0] }
    /* +0x913b18 */ __asm { MOV R14D,R12D }
    /* +0x913b1b */ __asm { OR R14D,0x1 }
    /* +0x913b1f */ __asm { SUB R11D,dword ptr [RBP + 0xbd0] }
    /* +0x913b26 */ __asm { IMUL R9D,R9D,0x25b9 }
    /* +0x913b2d */ __asm { MOV qword ptr [RBP + 0xa90],R9 }
    /* +0x913b34 */ __asm { ADD EDI,0x4e1c6359 }
    /* +0x913b3a */ __asm { MOV dword ptr [RBP + 0xa0],EDI }
    /* +0x913b40 */ __asm { MOVSXD R9,R11D }
    /* +0x913b43 */ __asm { XOR R9,0x6c09acd4 }
    /* +0x913b4a */ __asm { MOV qword ptr [RBP + 0xc90],R9 }
    /* +0x913b51 */ __asm { ROL R10W,0xd }
    /* +0x913b56 */ __asm { IMUL R12D,EBX,-0x6562123f }
    /* +0x913b5d */ __asm { ADD R15D,0xffff977f }
    /* +0x913b64 */ __asm { ADD R12D,0x7b06304a }
    /* +0x913b6b */ __asm { MOV R11,RSI }
    /* +0x913b6e */ __asm { SHR R11,0x30 }
    /* +0x913b72 */ __asm { MOV R9D,ESI }
    /* +0x913b75 */ __asm { SHR R9D,0x10 }
    /* +0x913b79 */ __asm { MOV EBX,ESI }
    /* +0x913b7b */ __asm { SHR EBX,0x8 }
    /* +0x913b7e */ __asm { MOV RDI,RSI }
    /* +0x913b81 */ __asm { SHR RDI,0x20 }
    /* +0x913b85 */ __asm { ROL R13B,0x4 }
    /* +0x913b89 */ __asm { CMP qword ptr [RBP + 0x330],R8 }
    /* +0x913b90 */ __asm { MOVD XMM4,R15D }
    /* +0x913b95 */ __asm { LEA R8D,[RAX + -0x20] }
    /* +0x913b99 */ __asm { MOVZX R8D,R8B }
    /* +0x913b9d */ __asm { CMOVLE R8D,EDI }
    /* +0x913ba1 */ __asm { MOVD XMM0,dword ptr [RBP + 0xbc8] }
    /* +0x913ba9 */ __asm { PMULLW XMM4,XMM0 }
    /* +0x913bad */ __asm { MOVD EDI,XMM4 }
    /* +0x913bb1 */ __asm { MOVSX R15,DI }
    /* +0x913bb5 */ __asm { MOV RDI,qword ptr [RBP + 0x70] }
    /* +0x913bb9 */ __asm { XOR BL,uint8_t ptr [RDI + R15*0x1 + 0x41] }
    /* +0x913bbe */ __asm { MOVSX R15,word ptr [RBP + 0x1a0] }
    /* +0x913bc6 */ __asm { MOV RDI,qword ptr [RBP + 0x350] }
    /* +0x913bcd */ __asm { XOR AL,uint8_t ptr [RDI + R15*0x1 + 0x40] }
    /* +0x913bd2 */ __asm { MOVSX R10,R10W }
    /* +0x913bd6 */ __asm { MOV R15,qword ptr [RBP + 0xe10] }
    /* +0x913bdd */ __asm { XOR R9B,uint8_t ptr [R15 + R10*0x1 + 0x42] }
    /* +0x913be2 */ __asm { MOVSX R10,word ptr [RBP + 0xa90] }
    /* +0x913bea */ __asm { MOV R15,qword ptr [RBP + -0x18] }
    /* +0x913bee */ __asm { XOR R8B,uint8_t ptr [R15 + R10*0x1 + 0x44] }
    /* +0x913bf3 */ __asm { MOV R10D,dword ptr [RBP + 0xd0] }
    /* +0x913bfa */ __asm { ADD R10D,0xba1ed3e4 }
    /* +0x913c01 */ __asm { ROL R10D,0x1b }
    /* +0x913c05 */ __asm { ADD R10D,dword ptr [RBP + 0xbd0] }
    /* +0x913c0c */ __asm { MOVSXD R10,R10D }
    /* +0x913c0f */ __asm { MOV R15,qword ptr [RBP + 0xc60] }
    /* +0x913c16 */ __asm { XOR R11B,uint8_t ptr [R15 + R10*0x1 + 0x46] }
    /* +0x913c1b */ __asm { MOV R10D,dword ptr [RBP + 0xa0] }
    /* +0x913c22 */ __asm { IMUL R10D,R14D }
    /* +0x913c26 */ __asm { MOV R14,qword ptr [RBP + 0xbd0] }
    /* +0x913c2d */ __asm { MOVD XMM4,ESI }
    /* +0x913c31 */ __asm { SHR RSI,0x28 }
    /* +0x913c35 */ __asm { MOVSXD R10,R10D }
    /* +0x913c38 */ __asm { MOV R15,qword ptr [RBP + 0xe8] }
    /* +0x913c3f */ __asm { XOR SIL,uint8_t ptr [R15 + R10*0x1 + 0x45] }
    /* +0x913c44 */ __asm { MOVSXD R10,R12D }
    /* +0x913c47 */ __asm { MOV R12,qword ptr [RBP + 0xe30] }
    /* +0x913c4e */ __asm { MOVZX R10D,uint8_t ptr [R12 + R10*0x1 + 0x43] }
    /* +0x913c54 */ __asm { MOVD XMM0,R10D }
    /* +0x913c59 */ __asm { PSRLD XMM4,0x18 }
    /* +0x913c5e */ __asm { PXOR XMM4,XMM0 }
    /* +0x913c62 */ __asm { MOVD R10D,XMM4 }
    /* +0x913c67 */ __asm { ROL R10B,0x4 }
    /* +0x913c6b */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x22],R10B }
    /* +0x913c70 */ __asm { ROL R9B,0x4 }
    /* +0x913c74 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x21],R9B }
    /* +0x913c79 */ __asm { ROL AL,0x4 }
    /* +0x913c7c */ __asm { ROL R11B,0x4 }
    /* +0x913c80 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x25],R11B }
    /* +0x913c85 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x1f],AL }
    /* +0x913c89 */ __asm { ROL BL,0x4 }
    /* +0x913c8c */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x20],BL }
    /* +0x913c90 */ __asm { ROL SIL,0x4 }
    /* +0x913c94 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x24],SIL }
    /* +0x913c99 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x26],R13B }
    /* +0x913c9e */ __asm { ROL R8B,0x4 }
    /* +0x913ca2 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x23],R8B }
    /* +0x913ca7 */ __asm { MOV RCX,qword ptr [RBP + 0xee0] }
    /* +0x913cae */ __asm { MOV R9,qword ptr [RBP + 0xc90] }
    /* +0x913cb5 */ __asm { MOV uint8_t ptr [RCX + R9*0x1 + 0x10],DL }
    /* +0x913cba */ __asm { MOV dword ptr [RBP + 0x570],0xe3c494ee }
    /* +0x913cc4 */ __asm { MOV R10D,dword ptr [RBP + 0x570] }
    /* +0x913ccb */ __asm { MOV R10W,0x57c6 }
    /* +0x913cd0 */ __asm { IMUL R10D,R10D,0x7a87 }
    /* +0x913cd7 */ __asm { MOV ECX,R14D }
    /* +0x913cda */ __asm { ROR R10W,CL }
    /* +0x913cde */ __asm { ADD R10D,0xffffab05 }
    /* +0x913ce5 */ __asm { MOVZX EDX,R10W }
    /* +0x913ce9 */ __asm { MOV RCX,qword ptr GS:[RDX] }
    /* +0x913ced */ __asm { MOV RCX,qword ptr [RCX + 0x60] }
    /* +0x913cf1 */ __asm { MOV R10,0x368b6a2e864610d7 }
    /* +0x913cfb */ __asm { IMUL R10,RCX }
    /* +0x913cff */ __asm { MOV RCX,0x6224339c1849ce5b }
    /* +0x913d09 */ __asm { CMP R10,RCX }
    /* +0x913d0c */ __asm { JNZ 0x7fffa5083d13 }
    /* +0x913d0e */ __asm { SUB uint8_t ptr [RAX + 0x58],CH }
    /* +0x913d11 */ __asm { MOV AL,0x13 }
    /* +0x913d13 */ __asm { MOV R10W,0x4270 }
    /* +0x913d18 */ __asm { LEA RCX,[0x7fffa47bdceb] }
    /* +0x913d1f */ __asm { IMUL R10D,R10D,0x1705 }
    /* +0x913d26 */ __asm { NOT R10D }
    /* +0x913d29 */ __asm { IMUL EDX,R10D,0x2cc7 }
    /* +0x913d30 */ __asm { MOVSX RDX,DX }
    /* +0x913d34 */ __asm { CMP uint8_t ptr [RCX + RDX*0x1],0x1 }
    /* +0x913d38 */ __asm { JNZ 0x7fffa5083d5a }
    /* +0x913d3a */ __asm { PUSHFQ }
    /* +0x913d3b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x913d43 */ __asm { POPFQ }
    /* +0x913d44 */ __asm { MOV dword ptr [RBP + 0x570],0xfbbf27f9 }
    /* +0x913d4e */ __asm { MOV R10D,dword ptr [RBP + 0x570] }
    /* +0x913d55 */ __asm { JMP 0x7fffa509af0c }
    /* +0x913d5a */ __asm { MOV R10W,0xe8fa }
    /* +0x913d5f */ __asm { ADD R10D,R14D }
    /* +0x913d62 */ __asm { NOT R10D }
    /* +0x913d65 */ __asm { MOVZX EDX,R10W }
    /* +0x913d69 */ __asm { MOV RCX,qword ptr GS:[RDX] }
    /* +0x913d6d */ __asm { MOV RCX,qword ptr [RCX + 0x60] }
    /* +0x913d71 */ __asm { MOV R10,0x760700e70235058d }
    /* +0x913d7b */ __asm { XOR R10,RCX }
    /* +0x913d7e */ __asm { MOV RCX,-0x546fd94e88f51d65 }
    /* +0x913d88 */ __asm { CMP R10,RCX }
    /* +0x913d8b */ __asm { JZ 0x7fffa50881b6 }
    /* +0x913d91 */ __asm { LEA RCX,[0x7fffa47cb8c7] }
    /* +0x913d98 */ __asm { MOV R10D,0x39e5bc42 }
    /* +0x913d9e */ __asm { XOR R10D,R14D }
    /* +0x913da1 */ __asm { ADD R10D,0xee4c6376 }
    /* +0x913da8 */ __asm { MOVSXD RDX,R10D }
    /* +0x913dab */ __asm { MOV uint8_t ptr [RCX + RDX*0x1],0x1 }
    /* +0x913daf */ __asm { MOV dword ptr [RBP + 0x570],0xb28f5ef7 }
    /* +0x913db9 */ __asm { MOV R10D,dword ptr [RBP + 0x570] }
    /* +0x913dc0 */ __asm { MOV R9D,0x23b305b7 }
    /* +0x913dc6 */ __asm { XOR R9D,R14D }
    /* +0x913dc9 */ __asm { ADD R9D,0x941e7a76 }
    /* +0x913dd0 */ __asm { CMP R10D,R9D }
    /* +0x913dd3 */ __asm { NOP }
    /* +0x913dd4 */ __asm { NOP }
    /* +0x913dd5 */ __asm { NOP }
    /* +0x913dd6 */ __asm { NOP }
    /* +0x913dd7 */ __asm { NOP }
    /* +0x913dd8 */ __asm { NOP }
    /* +0x913dd9 */ __asm { NOP }
    /* +0x913dda */ __asm { NOP }
    /* +0x913ddb */ __asm { NOP }
    /* +0x913ddc */ __asm { NOP }
    /* +0x913ddd */ __asm { NOP }
    /* +0x913dde */ __asm { NOP }
    /* +0x913ddf */ __asm { NOP }
    /* +0x913de0 */ __asm { NOP }
    /* +0x913de1 */ __asm { NOP }
    /* +0x913de2 */ __asm { PUSHFQ }
    /* +0x913de3 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x913deb */ __asm { POPFQ }
    /* +0x913dec */ __asm { MOV dword ptr [RBP + 0x570],0xa359fec5 }
    /* +0x913df6 */ __asm { MOV R10D,dword ptr [RBP + 0x570] }
    /* +0x913dfd */ __asm { PUSHFQ }
    /* +0x913dfe */ __asm { POP R8 }
    /* +0x913e00 */ __asm { MOV qword ptr [RBP + 0xe30],R8 }
    /* +0x913e07 */ __asm { TEST R8D,0x100 }
    /* +0x913e0e */ __asm { NOP }
    /* +0x913e0f */ __asm { NOP }
    /* +0x913e10 */ __asm { NOP }
    /* +0x913e11 */ __asm { NOP }
    /* +0x913e12 */ __asm { NOP }
    /* +0x913e13 */ __asm { MOV R10D,0x67b09bf5 }
    /* +0x913e19 */ __asm { ADD R10D,0x2c2bdbaa }
    /* +0x913e20 */ __asm { MOV ECX,R14D }
    /* +0x913e23 */ __asm { ROL R10D,CL }
    /* +0x913e26 */ __asm { MOV dword ptr [RBP + 0x570],R10D }
    /* +0x913e2d */ __asm { MOV R10D,dword ptr [RBP + 0x570] }
    /* +0x913e34 */ __asm { CMP R10D,0xfa5d5a24 }
    /* +0x913e3b */ __asm { NOP }
    /* +0x913e3c */ __asm { NOP }
    /* +0x913e3d */ __asm { NOP }
    /* +0x913e3e */ __asm { NOP }
    /* +0x913e3f */ __asm { NOP }
    /* +0x913e40 */ __asm { RDTSC }
    /* +0x913e42 */ __asm { SHL RDX,0x20 }
    /* +0x913e46 */ __asm { OR RDX,RAX }
    /* +0x913e49 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x913e53 */ __asm { IMUL RDX,RCX }
    /* +0x913e57 */ __asm { MOV R12,-0x22b18422c4a9c65e }
    /* +0x913e61 */ __asm { ADD RDX,R12 }
    /* +0x913e64 */ __asm { MOV RCX,RDX }
    /* +0x913e67 */ __asm { SHR RCX,0x3b }
    /* +0x913e6b */ __asm { MOV R8,RDX }
    /* +0x913e6e */ __asm { SHR R8,0x1b }
    /* +0x913e72 */ __asm { SHR RDX,0x2d }
    /* +0x913e76 */ __asm { XOR R8D,EDX }
    /* +0x913e79 */ __asm { ROR R8D,CL }
    /* +0x913e7c */ __asm { AND R8D,0x3 }
    /* +0x913e80 */ __asm { MOVD XMM8,R14D }
    /* +0x913e85 */ __asm { CMP R8D,0x2 }
    /* +0x913e89 */ __asm { JNC 0x7fffa5084187 }
    /* +0x913e8f */ __asm { CMP R8D,0x1 }
    /* +0x913e93 */ __asm { JNZ 0x7fffa5084248 }
    /* +0x913e99 */ __asm { MOV RCX,0x23ddb263a2245640 }
    /* +0x913ea3 */ __asm { MOVQ XMM4,RCX }
    /* +0x913ea8 */ __asm { LEA RCX,[0x7fffa47c2093] }
    /* +0x913eaf */ __asm { MOV RDX,R14 }
    /* +0x913eb2 */ __asm { OR RDX,0x1 }
    /* +0x913eb6 */ __asm { MOVQ XMM0,RDX }
    /* +0x913ebb */ __asm { MOVDQA XMM1,XMM0 }
    /* +0x913ebf */ __asm { PSRLQ XMM1,0x20 }
    /* +0x913ec4 */ __asm { PMULUDQ XMM1,XMM4 }
    /* +0x913ec8 */ __asm { MOVDQA XMM5,XMM4 }
    /* +0x913ecc */ __asm { PSRLQ XMM5,0x20 }
    /* +0x913ed1 */ __asm { PMULUDQ XMM5,XMM0 }
    /* +0x913ed5 */ __asm { PADDQ XMM5,XMM1 }
    /* +0x913ed9 */ __asm { PSLLQ XMM5,0x20 }
    /* +0x913ede */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0x913ee2 */ __asm { PADDQ XMM0,XMM5 }
    /* +0x913ee6 */ __asm { MOVQ R10,XMM0 }
    /* +0x913eeb */ __asm { ROL R10,0x25 }
    /* +0x913eef */ __asm { CMP RCX,R10 }
    /* +0x913ef2 */ __asm { JZ 0x7fffa50890af }
    /* +0x913ef8 */ __asm { MOVZX EDX,uint8_t ptr [RCX + -0x594a] }
    /* +0x913eff */ __asm { MOVZX R11D,uint8_t ptr [RCX + RDX*0x4 + -0x5944] }
    /* +0x913f08 */ __asm { NOT R11B }
    /* +0x913f0b */ __asm { ROL R11B,0x5 }
    /* +0x913f0f */ __asm { MOV uint8_t ptr [RBP + 0x570],R11B }
    /* +0x913f16 */ __asm { MOVZX R11D,uint8_t ptr [RCX + RDX*0x4 + -0x5943] }
    /* +0x913f1f */ __asm { NOT R11B }
    /* +0x913f22 */ __asm { ROL R11B,0x5 }
    /* +0x913f26 */ __asm { MOV uint8_t ptr [RBP + 0x571],R11B }
    /* +0x913f2d */ __asm { MOVZX R11D,uint8_t ptr [RCX + RDX*0x4 + -0x5942] }
    /* +0x913f36 */ __asm { NOT R11B }
    /* +0x913f39 */ __asm { ROL R11B,0x5 }
    /* +0x913f3d */ __asm { MOV uint8_t ptr [RBP + 0x572],R11B }
    /* +0x913f44 */ __asm { MOVZX R11D,uint8_t ptr [RCX + RDX*0x4 + -0x5941] }
    /* +0x913f4d */ __asm { NOT R11B }
    /* +0x913f50 */ __asm { ROL R11B,0x5 }
    /* +0x913f54 */ __asm { MOV uint8_t ptr [RBP + 0x573],R11B }
    /* +0x913f5b */ __asm { MOV R10D,0x9102c3cc }
    /* +0x913f61 */ __asm { XOR R10D,dword ptr [RBP + 0x570] }
    /* +0x913f68 */ __asm { BT R10D,R10D }
    /* +0x913f6c */ __asm { JNC 0x7fffa5084df6 }
    /* +0x913f72 */ __asm { MOVQ XMM4,R14 }
    /* +0x913f77 */ __asm { RDTSC }
    /* +0x913f79 */ __asm { SHL RDX,0x20 }
    /* +0x913f7d */ __asm { OR RDX,RAX }
    /* +0x913f80 */ __asm { MOV RCX,-0x3388bc375435ad8c }
    /* +0x913f8a */ __asm { MOVQ XMM0,RCX }
    /* +0x913f8f */ __asm { PSUBQ XMM0,XMM4 }
    /* +0x913f93 */ __asm { MOVQ R8,XMM0 }
    /* +0x913f98 */ __asm { MOV RCX,-0x4b061743ec0c107b }
    /* +0x913fa2 */ __asm { ROL R8,0x31 }
    /* +0x913fa6 */ __asm { IMUL RCX,RDX }
    /* +0x913faa */ __asm { ADD R8,RCX }
    /* +0x913fad */ __asm { MOV RDX,R8 }
    /* +0x913fb0 */ __asm { SHR RDX,0x2d }
    /* +0x913fb4 */ __asm { MOV RCX,R8 }
    /* +0x913fb7 */ __asm { SHR RCX,0x3b }
    /* +0x913fbb */ __asm { SHR R8,0x1b }
    /* +0x913fbf */ __asm { XOR EDX,R8D }
    /* +0x913fc2 */ __asm { ROR EDX,CL }
    /* +0x913fc4 */ __asm { MOV dword ptr [RBP + 0x570],0x5df02692 }
    /* +0x913fce */ __asm { MOV R10D,dword ptr [RBP + 0x570] }
    /* +0x913fd5 */ __asm { CMP EDX,0x1170383 }
    /* +0x913fdb */ __asm { JA 0x7fffa5084137 }
    /* +0x913fe1 */ __asm { TEST dword ptr [RBP + 0xe30],0x100 }
    /* +0x913feb */ __asm { NOP }
    /* +0x913fec */ __asm { NOP }
    /* +0x913fed */ __asm { NOP }
    /* +0x913fee */ __asm { NOP }
    /* +0x913fef */ __asm { NOP }
    /* +0x913ff0 */ __asm { NOP }
    /* +0x913ff1 */ __asm { NOP }
    /* +0x913ff2 */ __asm { NOP }
    /* +0x913ff3 */ __asm { NOP }
    /* +0x913ff4 */ __asm { NOP }
    /* +0x913ff5 */ __asm { NOP }
    /* +0x913ff6 */ __asm { NOP }
    /* +0x913ff7 */ __asm { NOP }
    /* +0x913ff8 */ __asm { NOP }
    /* +0x913ff9 */ __asm { NOP }
    /* +0x913ffa */ __asm { NOP }
    /* +0x913ffb */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa50c4920  |  RVA: 0x954920  |  Size: 465 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50c4920(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  code *pcVar2;
  uint32_t uVar3;
  int64_t lVar4;
  
  uVar1 = *(uint64_t *)(param_2 + 0x260);
  lVar4 = param_2;
  if (uVar1 != 0) {
    pcVar2 = (code *)((int64_t)
                      (int)((*(uint32_t *)(param_2 + 0xc90) ^ 0x521f11b4) * -0x6c0a45b7 ^
                           *(uint32_t *)(param_2 + 0x1f0)) + 0x7fffa5696a5d);
    (*pcVar2)(pcVar2,param_2,uVar1 >> 0x3d ^ uVar1);
  }
  uVar1 = *(uint64_t *)(param_2 + 0xbf0);
  if (uVar1 != 0) {
    uVar3 = ((int)CONCAT62((int6)((uint64_t)lVar4 >> 0x10),0xf7c3) * *(int *)(param_2 + 0xc48) +
            (int)*(uint64_t *)(param_2 + 0x168)) - 0x22dU ^ 0x141;
    pcVar2 = (code *)((int64_t)(short)uVar3 + 0x7fffa56897dc);
    (*pcVar2)(pcVar2,uVar3,uVar1 >> 0x3d ^ uVar1);
    *(uint8_t (*) [16])(param_2 + 0xbf0) = (uint8_t  [16])0x0;
    *(uint64_t *)(param_2 + 0xc00) = 0;
  }
  *(uint64_t *)(param_2 + 0xcf8) = 0;
  return;
}


// ============================================================================
// Function : Catch@7fffa50c4b00  |  RVA: 0x954b00  |  Size: 238 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa50c4b00(uint64_t param_1,int64_t param_2)

{
  *(uint64_t *)(param_2 + 0xaf0) = *(uint64_t *)(param_2 + 0x260);
  return &UNK_7fffa50ae3bf;
}


// ============================================================================
// Function : Unwind@7fffa50c4bf0  |  RVA: 0x954bf0  |  Size: 382 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50c4bf0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0xc38)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xc50) & 0x1f;
    pcVar2 = (code *)((int64_t)
                      (int)((0x67a82082U >> bVar1 | 0x67a82082 << 0x20 - bVar1) -
                           (int)*(uint64_t *)(param_2 + 0xc90)) + 0x7fffa5693855);
    (*pcVar2)(*(uint64_t *)(param_2 + 0xc50),pcVar2,
              *(uint64_t *)(param_2 + 0xc20) >> 0x3d ^ *(uint64_t *)(param_2 + 0xc20));
  }
  *(uint64_t *)(param_2 + 0xc38) = 7;
  *(uint16_t *)(param_2 + 0xc20) = 0;
  *(uint64_t *)(param_2 + 0xc30) = 0;
  *(uint64_t *)(param_2 + 0xcf8) = *(uint64_t *)(param_2 + 0x238);
  return;
}


// ============================================================================
// Function : Catch@7fffa50c4d70  |  RVA: 0x954d70  |  Size: 224 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t * Catch_7fffa50c4d70(void)

{
  return &UNK_7fffa50ae483;
}


// ============================================================================
// Function : Unwind@7fffa50c4e50  |  RVA: 0x954e50  |  Size: 348 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50c4e50(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0xc38)) {
    uVar2 = ((uint32_t)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x9520) ^ 0x42ad) *
            *(int *)(param_2 + 0xc48) ^ *(uint32_t *)(param_2 + 0xf0);
    uVar1 = *(uint64_t *)(param_2 + 0xc20);
    (*(code *)((int64_t)(short)uVar2 + 0x7fffa568bee7))(uVar1,uVar2,uVar1 >> 0x3d ^ uVar1);
  }
  *(uint64_t *)(param_2 + 0xc38) = 7;
  *(uint64_t *)(param_2 + 0xc30) = 0;
  *(uint16_t *)(param_2 + 0xc20) = 0;
  *(uint64_t *)(param_2 + 0xcf8) = *(uint64_t *)(param_2 + 0x238);
  return;
}


// ============================================================================
// Function : Unwind@7fffa50c4fb0  |  RVA: 0x954fb0  |  Size: 2701 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa50c4fb0(void) {
    /* +0x954fb0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x954fb5 */ __asm { PUSH RBP }
    /* +0x954fb6 */ __asm { PUSH R13 }
    /* +0x954fb8 */ __asm { PUSH R15 }
    /* +0x954fba */ __asm { PUSH R14 }
    /* +0x954fbc */ __asm { PUSH RDI }
    /* +0x954fbd */ __asm { PUSH RSI }
    /* +0x954fbe */ __asm { PUSH R12 }
    /* +0x954fc0 */ __asm { PUSH RBX }
    /* +0x954fc1 */ __asm { SUB RSP,0xd8 }
    /* +0x954fc8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x954fcf */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM14 }
    /* +0x954fd6 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM10 }
    /* +0x954fdd */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM6 }
    /* +0x954fe3 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM15 }
    /* +0x954fea */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM13 }
    /* +0x954ff1 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x954ffb */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x955005 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM11 }
    /* +0x95500f */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM8 }
    /* +0x955019 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM7 }
    /* +0x955022 */ __asm { MOV RBX,qword ptr [RBP + 0xc78] }
    /* +0x955029 */ __asm { MOV R10D,0x716d6b9f }
    /* +0x95502f */ __asm { IMUL R10D,R10D,0x74358421 }
    /* +0x955036 */ __asm { NOT R10D }
    /* +0x955039 */ __asm { ADD R10D,dword ptr [RBP + 0x350] }
    /* +0x955040 */ __asm { MOV R9D,0x592b2839 }
    /* +0x955046 */ __asm { ADD R9D,dword ptr [RBP + 0xc10] }
    /* +0x95504d */ __asm { XOR EAX,EAX }
    /* +0x95504f */ __asm { XOR R11D,R11D }
    /* +0x955052 */ __asm { TEST RBX,RBX }
    /* +0x955055 */ __asm { SETZ AL }
    /* +0x955058 */ __asm { MOVSXD RCX,R10D }
    /* +0x95505b */ __asm { SETS R11B }
    /* +0x95505f */ __asm { IMUL EDX,R9D,0x2d5d0b17 }
    /* +0x955066 */ __asm { NOT EDX }
    /* +0x955068 */ __asm { CMP RCX,RDX }
    /* +0x95506b */ __asm { CMOVA R11D,EAX }
    /* +0x95506f */ __asm { TEST R11B,R11B }
    /* +0x955072 */ __asm { JNZ 0x7fffa50c5987 }
    /* +0x955078 */ __asm { MOV R9D,0x84e7addf }
    /* +0x95507e */ __asm { RDTSC }
    /* +0x955080 */ __asm { SHL RDX,0x20 }
    /* +0x955084 */ __asm { OR RDX,RAX }
    /* +0x955087 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x955091 */ __asm { IMUL RDX,RCX }
    /* +0x955095 */ __asm { MOV RCX,qword ptr [RBP + 0xc60] }
    /* +0x95509c */ __asm { ADD R9D,ECX }
    /* +0x95509f */ __asm { ADD R9D,0x84e39731 }
    /* +0x9550a6 */ __asm { MOV R8,qword ptr [RBP + 0xbd0] }
    /* +0x9550ad */ __asm { XOR R9D,R8D }
    /* +0x9550b0 */ __asm { MOV ECX,0x11995709 }
    /* +0x9550b5 */ __asm { NEG ECX }
    /* +0x9550b7 */ __asm { LEA R11D,[R8 + RCX*0x1] }
    /* +0x9550bb */ __asm { ADD R11D,0x56902f22 }
    /* +0x9550c2 */ __asm { IMUL R11D,dword ptr [RBP + 0xec0] }
    /* +0x9550ca */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0x9550d4 */ __asm { ADD RDX,RCX }
    /* +0x9550d7 */ __asm { MOV RCX,RDX }
    /* +0x9550da */ __asm { SHR RCX,0x3b }
    /* +0x9550de */ __asm { MOV R8,RDX }
    /* +0x9550e1 */ __asm { SHR R8,0x1b }
    /* +0x9550e5 */ __asm { SHR RDX,0x2d }
    /* +0x9550e9 */ __asm { MOV R10D,EDX }
    /* +0x9550ec */ __asm { XOR R10D,R8D }
    /* +0x9550ef */ __asm { OR R8D,EDX }
    /* +0x9550f2 */ __asm { CMP R9,R11 }
    /* +0x9550f5 */ __asm { CMOVG R8D,R10D }
    /* +0x9550f9 */ __asm { ROR R8D,CL }
    /* +0x9550fc */ __asm { AND R8D,0x3 }
    /* +0x955100 */ __asm { CMP R8D,0x2 }
    /* +0x955104 */ __asm { JNC 0x7fffa50c513c }
    /* +0x955106 */ __asm { CMP R8D,0x1 }
    /* +0x95510a */ __asm { JZ 0x7fffa50c51f0 }
    /* +0x955110 */ __asm { LEA RCX,[0x7fffa47bf183] }
    /* +0x955117 */ __asm { MOV R10,-0x52eac72410a6f0eb }
    /* +0x955121 */ __asm { CMP RCX,R10 }
    /* +0x955124 */ __asm { JZ 0x7fffa50c5a05 }
    /* +0x95512a */ __asm { MOV qword ptr [RBP + 0xe80],R10 }
    /* +0x955131 */ __asm { MOV EAX,dword ptr [RCX + -0x214b] }
    /* +0x955137 */ __asm { JMP 0x7fffa50c5982 }
    /* +0x95513c */ __asm { MOV RDX,qword ptr [RBP + 0xe8] }
    /* +0x955143 */ __asm { OR EDX,0x1 }
    /* +0x955146 */ __asm { MOV R10W,0x74bd }
    /* +0x95514b */ __asm { ADD R10D,dword ptr [RBP + 0xbd0] }
    /* +0x955152 */ __asm { IMUL R10D,EDX }
    /* +0x955156 */ __asm { XOR R10D,0xa2b5 }
    /* +0x95515d */ __asm { MOVZX R10D,R10W }
    /* +0x955161 */ __asm { CMP R8D,R10D }
    /* +0x955164 */ __asm { JC 0x7fffa50c5503 }
    /* +0x95516a */ __asm { MOV R10,-0x114a8d185718ec7c }
    /* +0x955174 */ __asm { MOV RCX,0x0 }
    /* +0x95517b */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x955182 */ __asm { MOVQ XMM4,qword ptr [RBP + 0xde0] }
    /* +0x95518a */ __asm { LEA RCX,[0x7fffa47b7e1b] }
    /* +0x955191 */ __asm { ADD R10,-0x638af48d }
    /* +0x955198 */ __asm { ROL R10,0x20 }
    /* +0x95519c */ __asm { MOVQ XMM0,R10 }
    /* +0x9551a1 */ __asm { MOVDQA XMM1,XMM4 }
    /* +0x9551a5 */ __asm { PSRLQ XMM1,0x20 }
    /* +0x9551aa */ __asm { PMULUDQ XMM1,XMM0 }
    /* +0x9551ae */ __asm { MOVDQA XMM5,XMM0 }
    /* +0x9551b2 */ __asm { PSRLQ XMM5,0x20 }
    /* +0x9551b7 */ __asm { PMULUDQ XMM5,XMM4 }
    /* +0x9551bb */ __asm { PADDQ XMM5,XMM1 }
    /* +0x9551bf */ __asm { PSLLQ XMM5,0x20 }
    /* +0x9551c4 */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0x9551c8 */ __asm { PADDQ XMM0,XMM5 }
    /* +0x9551cc */ __asm { MOVQ R10,XMM0 }
    /* +0x9551d1 */ __asm { XOR R10,RCX }
    /* +0x9551d4 */ __asm { CMP R10,-0x1 }
    /* +0x9551d8 */ __asm { JZ 0x7fffa50c5a14 }
    /* +0x9551de */ __asm { MOV qword ptr [RBP + 0xe80],R10 }
    /* +0x9551e5 */ __asm { MOV EAX,dword ptr [RCX + 0x521d] }
    /* +0x9551eb */ __asm { JMP 0x7fffa50c5982 }
    /* +0x9551f0 */ __asm { MOV EDX,0xe9da60e6 }
    /* +0x9551f5 */ __asm { SUB EDX,dword ptr [RBP + 0xbd0] }
    /* +0x9551fb */ __asm { ADD EDX,0xfcc1a195 }
    /* +0x955201 */ __asm { MOV RCX,qword ptr [RBP + 0xc60] }
    /* +0x955208 */ __asm { ROR EDX,CL }
    /* +0x95520a */ __asm { MOV R10D,0xab181b15 }
    /* +0x955210 */ __asm { MOV RCX,-0x546d74acdde7e7ac }
    /* +0x95521a */ __asm { XOR R9D,R9D }
    /* +0x95521d */ __asm { XOR EAX,EAX }
    /* +0x95521f */ __asm { CMP R10,RCX }
    /* +0x955222 */ __asm { SETG R9B }
    /* +0x955226 */ __asm { SETZ AL }
    /* +0x955229 */ __asm { CMP RDX,0x61cd0e6f }
    /* +0x955230 */ __asm { CMOVZ EAX,R9D }
    /* +0x955234 */ __asm { CMP AL,0x1 }
    /* +0x955236 */ __asm { NOP }
    /* +0x955237 */ __asm { NOP }
    /* +0x955238 */ __asm { NOP }
    /* +0x955239 */ __asm { NOP }
    /* +0x95523a */ __asm { NOP }
    /* +0x95523b */ __asm { MOV R9,-0x565555557dac6c2b }
    /* +0x955245 */ __asm { MOV R8,qword ptr [RBP + 0xc10] }
    /* +0x95524c */ __asm { MOVD XMM4,R8D }
    /* +0x955251 */ __asm { MOV EAX,0x41a49bba }
    /* +0x955256 */ __asm { MOV RDX,qword ptr [RBP + 0xbd0] }
    /* +0x95525d */ __asm { ADD EAX,EDX }
    /* +0x95525f */ __asm { ADD R9,RDX }
    /* +0x955262 */ __asm { NOT R9 }
    /* +0x955265 */ __asm { MOV ECX,R8D }
    /* +0x955268 */ __asm { ROL R9,CL }
    /* +0x95526b */ __asm { MOVD XMM0,EAX }
    /* +0x95526f */ __asm { ROL R9,0x26 }
    /* +0x955273 */ __asm { PXOR XMM0,XMM4 }
    /* +0x955277 */ __asm { MOVD EAX,XMM0 }
    /* +0x95527b */ __asm { ADD EAX,0xabe666fe }
    /* +0x955280 */ __asm { MOVSXD RDX,EAX }
    /* +0x955283 */ __asm { MOV ECX,dword ptr [R10 + RDX*0x1 + 0x2c4] }
    /* +0x95528b */ __asm { RDTSC }
    /* +0x95528d */ __asm { SHL RDX,0x20 }
    /* +0x955291 */ __asm { OR RDX,RAX }
    /* +0x955294 */ __asm { MOV R10,0x5555555555555556 }
    /* +0x95529e */ __asm { IMUL R10,RCX }
    /* +0x9552a2 */ __asm { CMP R10,R9 }
    /* +0x9552a5 */ __asm { JC 0x7fffa50c55f6 }
    /* +0x9552ab */ __asm { MOV RCX,-0x5b596a0ee0e87373 }
    /* +0x9552b5 */ __asm { IMUL RDX,RCX }
    /* +0x9552b9 */ __asm { MOV R8,-0xdf1b2a5bc915f4e }
    /* +0x9552c3 */ __asm { ADD R8,RDX }
    /* +0x9552c6 */ __asm { MOV RCX,R8 }
    /* +0x9552c9 */ __asm { SHR RCX,0x3b }
    /* +0x9552cd */ __asm { MOV RDX,R8 }
    /* +0x9552d0 */ __asm { SHR RDX,0x2d }
    /* +0x9552d4 */ __asm { SHR R8,0x1b }
    /* +0x9552d8 */ __asm { XOR EDX,R8D }
    /* +0x9552db */ __asm { ROR EDX,CL }
    /* +0x9552dd */ __asm { MOV dword ptr [RBP + 0xe80],0xb6ffef69 }
    /* +0x9552e7 */ __asm { MOV R10D,dword ptr [RBP + 0xe80] }
    /* +0x9552ee */ __asm { MOV R10D,0xa432409 }
    /* +0x9552f4 */ __asm { IMUL R10D,dword ptr [RBP + 0xe10] }
    /* +0x9552fc */ __asm { ROL R10D,0x19 }
    /* +0x955300 */ __asm { NOT R10D }
    /* +0x955303 */ __asm { CMP EDX,R10D }
    /* +0x955306 */ __asm { JNC 0x7fffa50c54b6 }
    /* +0x95530c */ __asm { MOV dword ptr [RBP + 0xe80],0xd0676f57 }
    /* +0x955316 */ __asm { MOV R10D,dword ptr [RBP + 0xe80] }
    /* +0x95531d */ __asm { TEST R10B,0x1 }
    /* +0x955321 */ __asm { NOP }
    /* +0x955322 */ __asm { NOP }
    /* +0x955323 */ __asm { NOP }
    /* +0x955324 */ __asm { NOP }
    /* +0x955325 */ __asm { NOP }
    /* +0x955326 */ __asm { NOP }
    /* +0x955327 */ __asm { PXOR XMM0,XMM0 }
    /* +0x95532b */ __asm { MOVDQA xmmword ptr [RBP + 0xe80],XMM0 }
    /* +0x955333 */ __asm { MOV dword ptr [RBP + 0x160],0xffbfacb5 }
    /* +0x95533d */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0x955344 */ __asm { CMP R10D,0xc41b7391 }
    /* +0x95534b */ __asm { JBE 0x7fffa50c5a1c }
    /* +0x955351 */ __asm { MOV dword ptr [RBP + 0xe80],0x0 }
    /* +0x95535b */ __asm { MOV R10D,0xf6011002 }
    /* +0x955361 */ __asm { MOV RDX,qword ptr [RBP + 0xe10] }
    /* +0x955368 */ __asm { IMUL EDX,R10D }
    /* +0x95536c */ __asm { ROL EDX,0x8 }
    /* +0x95536f */ __asm { MOVD XMM0,EDX }
    /* +0x955373 */ __asm { PXOR XMM4,XMM0 }
    /* +0x955377 */ __asm { MOVD dword ptr [RBP + 0x160],XMM4 }
    /* +0x95537f */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0x955386 */ __asm { CMP R10D,0xbeed7f64 }
    /* +0x95538d */ __asm { NOP }
    /* +0x95538e */ __asm { NOP }
    /* +0x95538f */ __asm { NOP }
    /* +0x955390 */ __asm { NOP }
    /* +0x955391 */ __asm { NOP }
    /* +0x955392 */ __asm { NOP }
    /* +0x955393 */ __asm { NOP }
    /* +0x955394 */ __asm { NOP }
    /* +0x955395 */ __asm { NOP }
    /* +0x955396 */ __asm { NOP }
    /* +0x955397 */ __asm { NOP }
    /* +0x955398 */ __asm { MOV dword ptr [RBP + 0x160],0x70195bb4 }
    /* +0x9553a2 */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0x9553a9 */ __asm { MOV RCX,0x79388debcd217ae7 }
    /* +0x9553b3 */ __asm { LEA R10,[0x7fffa47852c2] }
    /* +0x9553ba */ __asm { MOV RDX,qword ptr [RBP + 0xbd0] }
    /* +0x9553c1 */ __asm { SUB RDX,qword ptr [RBP + 0xc60] }
    /* +0x9553c8 */ __asm { MOVQ XMM4,RCX }
    /* +0x9553cd */ __asm { MOVQ XMM0,RDX }
    /* +0x9553d2 */ __asm { PADDQ XMM0,XMM4 }
    /* +0x9553d6 */ __asm { MOVQ RCX,XMM0 }
    /* +0x9553db */ __asm { XOR RCX,R10 }
    /* +0x9553de */ __asm { CMP RCX,-0x1 }
    /* +0x9553e2 */ __asm { JZ 0x7fffa50c5a30 }
    /* +0x9553e8 */ __asm { MOV R13,qword ptr [RBP + 0x350] }
    /* +0x9553ef */ __asm { MOVD XMM4,R13D }
    /* +0x9553f4 */ __asm { MOV R9D,0x86198864 }
    /* +0x9553fa */ __asm { MOV EDX,0xb8d0b550 }
    /* +0x9553ff */ __asm { MOV AX,0x4d1b }
    /* +0x955403 */ __asm { NOT R9D }
    /* +0x955406 */ __asm { MOV qword ptr [RBP + 0x160],RCX }
    /* +0x95540d */ __asm { MOV R8W,0x43b4 }
    /* +0x955412 */ __asm { MOV RDI,qword ptr [RBP + 0xbd0] }
    /* +0x955419 */ __asm { XOR EDX,EDI }
    /* +0x95541b */ __asm { ADD EDX,0x2f192d16 }
    /* +0x955421 */ __asm { MOV RSI,qword ptr [RBP + 0xc10] }
    /* +0x955428 */ __asm { MOV ECX,ESI }
    /* +0x95542a */ __asm { ROL EDX,CL }
    /* +0x95542c */ __asm { MOV R11,qword ptr [RBP + 0xc60] }
    /* +0x955433 */ __asm { ADD R9D,R11D }
    /* +0x955436 */ __asm { IMUL ECX,R9D,-0x7cf4c4bd }
    /* +0x95543d */ __asm { NOT R8D }
    /* +0x955440 */ __asm { LEA R9D,[R8 + R11*0x1] }
    /* +0x955444 */ __asm { ADD R9D,0xffff816d }
    /* +0x95544b */ __asm { MOVZX R9D,R9W }
    /* +0x95544f */ __asm { MOV R11W,0x91d2 }
    /* +0x955454 */ __asm { IMUL EAX,EAX,-0x5469 }
    /* +0x95545a */ __asm { MOVD XMM0,EAX }
    /* +0x95545e */ __asm { ADD ECX,EDI }
    /* +0x955460 */ __asm { CMP RCX,RDX }
    /* +0x955463 */ __asm { PXOR XMM0,XMM4 }
    /* +0x955467 */ __asm { MOVD EDX,XMM0 }
    /* +0x95546b */ __asm { NOT EDX }
    /* +0x95546d */ __asm { MOVSX RCX,DX }
    /* +0x955471 */ __asm { MOV EDX,0xcfe }
    /* +0x955476 */ __asm { CMOVZ RDX,RCX }
    /* +0x95547a */ __asm { ADD R11D,0xffffae2f }
    /* +0x955481 */ __asm { MOV ECX,EDI }
    /* +0x955483 */ __asm { ROL R11W,CL }
    /* +0x955487 */ __asm { MOV ECX,R13D }
    /* +0x95548a */ __asm { ROR R11W,CL }
    /* +0x95548e */ __asm { MOV EAX,dword ptr [R10 + RDX*0x1 + 0x58] }
    /* +0x955493 */ __asm { MOVZX EDX,R11W }
    /* +0x955497 */ __asm { MOV R10D,0x5d50d4e8 }
    /* +0x95549d */ __asm { IMUL R10D,R10D,-0x517c15b3 }
    /* +0x9554a4 */ __asm { ADD R10D,EDI }
    /* +0x9554a7 */ __asm { XOR R10D,ESI }
    /* +0x9554aa */ __asm { MOVSXD R10,R10D }
    /* +0x9554ad */ __asm { LEA R8,[RBP + 0xe80] }
    /* +0x9554b4 */ __asm { SYSCALL }
    /* +0x9554b6 */ __asm { LEA RCX,[0x7fffa4786471] }
    /* +0x9554bd */ __asm { MOVQ XMM4,qword ptr [RBP + 0xbd0] }
    /* +0x9554c5 */ __asm { MOV R10,0x3dff8f0c877fb0dc }
    /* +0x9554cf */ __asm { XOR R10,qword ptr [RBP + 0x350] }
    /* +0x9554d6 */ __asm { ROL R10,0x3 }
    /* +0x9554da */ __asm { MOVQ XMM0,R10 }
    /* +0x9554df */ __asm { PSUBQ XMM0,XMM4 }
    /* +0x9554e3 */ __asm { MOVQ R10,XMM0 }
    /* +0x9554e8 */ __asm { CMP RCX,R10 }
    /* +0x9554eb */ __asm { JZ 0x7fffa50c5a41 }
    /* +0x9554f1 */ __asm { MOV qword ptr [RBP + 0xe80],R10 }
    /* +0x9554f8 */ __asm { MOV EAX,dword ptr [RCX + -0x1e41] }
    /* +0x9554fe */ __asm { JMP 0x7fffa50c5982 }
    /* +0x955503 */ __asm { MOV R10,qword ptr [RBP + 0xc60] }
    /* +0x95550a */ __asm { OR R10,0x1 }
    /* +0x95550e */ __asm { MOV RCX,-0x1489ff59093e4392 }
    /* +0x955518 */ __asm { MOVQ XMM4,RCX }
    /* +0x95551d */ __asm { MOVQ XMM0,R10 }
    /* +0x955522 */ __asm { MOVDQA XMM1,XMM0 }
    /* +0x955526 */ __asm { PSRLQ XMM1,0x20 }
    /* +0x95552b */ __asm { PMULUDQ XMM1,XMM4 }
    /* +0x95552f */ __asm { MOVDQA XMM5,XMM4 }
    /* +0x955533 */ __asm { PSRLQ XMM5,0x20 }
    /* +0x955538 */ __asm { PMULUDQ XMM5,XMM0 }
    /* +0x95553c */ __asm { PADDQ XMM5,XMM1 }
    /* +0x955540 */ __asm { PSLLQ XMM5,0x20 }
    /* +0x955545 */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0x955549 */ __asm { PADDQ XMM0,XMM5 }
    /* +0x95554d */ __asm { MOVQ R10,XMM0 }
    /* +0x955552 */ __asm { MOV RCX,qword ptr [RBP + 0xbd0] }
    /* +0x955559 */ __asm { ROR R10,CL }
    /* +0x95555c */ __asm { MOV ECX,0xce27b55c }
    /* +0x955561 */ __asm { XOR R10,RCX }
    /* +0x955564 */ __asm { CMP R10,0x39c8867e }
    /* +0x95556b */ __asm { NOP }
    /* +0x95556c */ __asm { NOP }
    /* +0x95556d */ __asm { NOP }
    /* +0x95556e */ __asm { NOP }
    /* +0x95556f */ __asm { NOP }
    /* +0x955570 */ __asm { MOV EDX,dword ptr [RCX + -0x4e29b298] }
    /* +0x955576 */ __asm { MOV RCX,0x5555555555555556 }
    /* +0x955580 */ __asm { IMUL RCX,RDX }
    /* +0x955584 */ __asm { MOV R10,0x5555555555555555 }
    /* +0x95558e */ __asm { CMP RCX,R10 }
    /* +0x955591 */ __asm { JBE 0x7fffa50c5940 }
    /* +0x955597 */ __asm { LEA RCX,[0x7fffa47b4d60] }
    /* +0x95559e */ __asm { MOV R10D,0xf6e9ba48 }
    /* +0x9555a4 */ __asm { MOVD XMM4,R10D }
    /* +0x9555a9 */ __asm { MOV R10,RCX }
    /* +0x9555ac */ __asm { NOT R10 }
    /* +0x9555af */ __asm { MOVDQA XMM0,xmmword ptr [RBP + 0xe00] }
    /* +0x9555b7 */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0x9555bb */ __asm { MOVD R9D,XMM0 }
    /* +0x9555c0 */ __asm { SUB R9D,dword ptr [RBP + 0x350] }
    /* +0x9555c7 */ __asm { ROL R9D,0xd }
    /* +0x9555cb */ __asm { MOVSXD RDX,R9D }
    /* +0x9555ce */ __asm { ADD RDX,R10 }
    /* +0x9555d1 */ __asm { MOV R10,-0x344716c579ad2aa3 }
    /* +0x9555db */ __asm { CMP RDX,R10 }
    /* +0x9555de */ __asm { JZ 0x7fffa50c5a4f }
    /* +0x9555e4 */ __asm { MOV qword ptr [RBP + 0xe80],R10 }
    /* +0x9555eb */ __asm { MOV EAX,dword ptr [RCX + 0x77cc] }
    /* +0x9555f1 */ __asm { JMP 0x7fffa50c5982 }
    /* +0x9555f6 */ __asm { MOV ECX,0xce47e126 }
    /* +0x9555fb */ __asm { MOV RDI,qword ptr [RBP + 0x350] }
    /* +0x955602 */ __asm { ADD ECX,EDI }
    /* +0x955604 */ __asm { ROL ECX,0x11 }
    /* +0x955607 */ __asm { MOV R11,0x7facc0f7a00541bd }
    /* +0x955611 */ __asm { MOV R10,RDX }
    /* +0x955614 */ __asm { IMUL R10,R11 }
    /* +0x955618 */ __asm { MOV RAX,qword ptr [RBP + 0xbd0] }
    /* +0x95561f */ __asm { XOR ECX,EAX }
    /* +0x955621 */ __asm { MOV R9W,0xb437 }
    /* +0x955626 */ __asm { ADD R9D,0xffffc869 }
    /* +0x95562d */ __asm { IMUL R9D,dword ptr [RBP + 0xbc8] }
    /* +0x955635 */ __asm { MOV R8D,0xe5362d09 }
    /* +0x95563b */ __asm { XOR R8D,0xdd976802 }
    /* +0x955642 */ __asm { ADD R8D,0x1d6537c }
    /* +0x955649 */ __asm { XOR R8D,EDI }
    /* +0x95564c */ __asm { SUB R8D,EAX }
    /* +0x95564f */ __asm { ADD RDX,R11 }
    /* +0x955652 */ __asm { CMP RCX,R8 }
    /* +0x955655 */ __asm { CMOVNC RDX,R10 }
    /* +0x955659 */ __asm { MOV R8,0x322364564f91b0a6 }
    /* +0x955663 */ __asm { ADD R8,RDX }
    /* +0x955666 */ __asm { MOV RDX,R8 }
    /* +0x955669 */ __asm { SHR RDX,0x1b }
    /* +0x95566d */ __asm { MOV RCX,R8 }
    /* +0x955670 */ __asm { SHR RCX,0x3b }
    /* +0x955674 */ __asm { SHR R8,0x2d }
    /* +0x955678 */ __asm { XOR EDX,R8D }
    /* +0x95567b */ __asm { ROR EDX,CL }
    /* +0x95567d */ __asm { LEA R10D,[RDI + R9*0x1] }
    /* +0x955681 */ __asm { MOVZX ECX,R10W }
    /* +0x955685 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0x955689 */ __asm { MOV RCX,qword ptr [RCX + 0xcd0] }
    /* +0x955690 */ __asm { MOV R10,-0x59c5b4d5dd92d87d }
    /* +0x95569a */ __asm { MOV R10,-0x308f5f83b803905f }
    /* +0x9556a4 */ __asm { CMP RCX,R10 }
    /* +0x9556a7 */ __asm { JZ 0x7fffa50c59ee }
    /* +0x9556ad */ __asm { MOV R10D,0xa2c1205c }
    /* +0x9556b3 */ __asm { MOVD XMM4,R10D }
    /* +0x9556b8 */ __asm { MOV RCX,qword ptr [RBP + 0x350] }
    /* +0x9556bf */ __asm { MOV R10D,ECX }
    /* +0x9556c2 */ __asm { OR R10D,0x1 }
    /* +0x9556c6 */ __asm { MOVD XMM0,R10D }
    /* +0x9556cb */ __asm { PMULUDQ XMM0,XMM4 }
    /* +0x9556cf */ __asm { MOVD R10D,XMM0 }
    /* +0x9556d4 */ __asm { ROL R10D,0x15 }
    /* +0x9556d8 */ __asm { XOR R10D,0x8f928f4e }
    /* +0x9556df */ __asm { MOV RCX,qword ptr [RBP + 0xbd0] }
    /* +0x9556e6 */ __asm { ROR R10D,CL }
    /* +0x9556e9 */ __asm { CMP EDX,R10D }
    /* +0x9556ec */ __asm { JNC 0x7fffa50c5919 }
    /* +0x9556f2 */ __asm { PUSHFQ }
    /* +0x9556f3 */ __asm { POP R8 }
    /* +0x9556f5 */ __asm { TEST R8D,0x100 }
    /* +0x9556fc */ __asm { NOP }
    /* +0x9556fd */ __asm { NOP }
    /* +0x9556fe */ __asm { NOP }
    /* +0x9556ff */ __asm { NOP }
    /* +0x955700 */ __asm { NOP }
    /* +0x955701 */ __asm { MOV dword ptr [RBP + 0xe80],0x7cdb7077 }
    /* +0x95570b */ __asm { MOV R10D,dword ptr [RBP + 0xe80] }
    /* +0x955712 */ __asm { CMP R10D,0xd1168ffb }
    /* +0x955719 */ __asm { NOP }
    /* +0x95571a */ __asm { NOP }
    /* +0x95571b */ __asm { NOP }
    /* +0x95571c */ __asm { NOP }
    /* +0x95571d */ __asm { NOP }
    /* +0x95571e */ __asm { MOV R9D,0xe2cbbca6 }
    /* +0x955724 */ __asm { MOV RCX,-0x18b8c117d4f1d00f }
    /* +0x95572e */ __asm { CMP R9,RCX }
    /* +0x955731 */ __asm { JZ 0x7fffa50c5a57 }
    /* +0x955737 */ __asm { MOV R10D,0xdf37a43 }
    /* +0x95573d */ __asm { ADD R10D,dword ptr [RBP + 0x350] }
    /* +0x955744 */ __asm { ROL R10D,0x13 }
    /* +0x955748 */ __asm { MOVD XMM4,R10D }
    /* +0x95574d */ __asm { PXOR XMM4,xmmword ptr [RBP + 0x170] }
    /* +0x955755 */ __asm { MOVD R10D,XMM4 }
    /* +0x95575a */ __asm { NOT R10D }
    /* +0x95575d */ __asm { MOVSXD RCX,R10D }
    /* +0x955760 */ __asm { TEST uint8_t ptr [RCX + R9*0x1 + 0x240],0x1 }
    /* +0x955769 */ __asm { JNZ 0x7fffa50c5919 }
    /* +0x95576f */ __asm { MOV R10D,0x6487f6d5 }
    /* +0x955775 */ __asm { XOR R10D,dword ptr [RBP + 0x350] }
    /* +0x95577c */ __asm { MOV R9D,0x221f43c4 }
    /* +0x955782 */ __asm { SUB R9D,R10D }
    /* +0x955785 */ __asm { PXOR XMM4,XMM4 }
    /* +0x955789 */ __asm { MOVDQA xmmword ptr [RBP + 0xe80],XMM4 }
    /* +0x955791 */ __asm { MOV dword ptr [RBP + 0x160],R9D }
    /* +0x955798 */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0x95579f */ __asm { MOV R10W,0xecfb }
    /* +0x9557a4 */ __asm { MOV dword ptr [RBP + 0xe80],0x0 }
    /* +0x9557ae */ __asm { IMUL EDX,R10D,-0x4567 }
    /* +0x9557b5 */ __asm { MOV RAX,qword ptr [RBP + 0xe8] }
    /* +0x9557bc */ __asm { LEA R10D,[RAX + RDX*0x1] }
    /* +0x9557c0 */ __asm { ROR R10W,0x1 }
    /* +0x9557c4 */ __asm { MOV RCX,qword ptr [RBP + 0xbd0] }
    /* +0x9557cb */ __asm { ROL R10W,CL }
    /* +0x9557cf */ __asm { MOVZX EDX,R10W }
    /* +0x9557d3 */ __asm { MOV R8,qword ptr GS:[RDX] }
    /* +0x9557d7 */ __asm { MOV RDX,RAX }
    /* +0x9557da */ __asm { OR RDX,0x1 }
    /* +0x9557de */ __asm { MOV R10D,0x3884b534 }
    /* +0x9557e4 */ __asm { MOV R9,0xe7aab90665a1535 }
    /* +0x9557ee */ __asm { MOV R11D,0xa76d0485 }
    /* +0x9557f4 */ __asm { IMUL R11,R9 }
    /* +0x9557f8 */ __asm { SUB R10D,EAX }
    /* +0x9557fb */ __asm { ADD R11,0x4dfa2cd9 }
    /* +0x955802 */ __asm { IMUL R11,RDX }
    /* +0x955806 */ __asm { MOV RDX,RCX }
    /* +0x955809 */ __asm { XOR RDX,R11 }
    /* +0x95580c */ __asm { IMUL RDX,qword ptr [R8 + 0x18] }
    /* +0x955811 */ __asm { XOR R10D,0x36f67f81 }
    /* +0x955818 */ __asm { MOVD XMM4,R10D }
    /* +0x95581d */ __asm { PMULUDQ XMM4,xmmword ptr [RBP + 0xe00] }
    /* +0x955825 */ __asm { MOVD ECX,XMM4 }
    /* +0x955829 */ __asm { ADD RCX,RDX }
    /* +0x95582c */ __asm { MOV R10,0x57865d8750feb69 }
    /* +0x955836 */ __asm { CMP RCX,R10 }
    /* +0x955839 */ __asm { NOP }
    /* +0x95583a */ __asm { NOP }
    /* +0x95583b */ __asm { NOP }
    /* +0x95583c */ __asm { NOP }
    /* +0x95583d */ __asm { NOP }
    /* +0x95583e */ __asm { MOV dword ptr [RBP + 0x160],0x19e50022 }
    /* +0x955848 */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0x95584f */ __asm { MOV R10D,0xc24d3a5c }
    /* +0x955855 */ __asm { MOVD XMM4,R10D }
    /* +0x95585a */ __asm { LEA RAX,[0x7fffa47b8cda] }
    /* +0x955861 */ __asm { MOV R10,RAX }
    /* +0x955864 */ __asm { PADDD XMM4,xmmword ptr [RBP + 0x170] }
    /* +0x95586c */ __asm { MOVD EDX,XMM4 }
    /* +0x955870 */ __asm { MOV RCX,qword ptr [RBP + 0xc10] }
    /* +0x955877 */ __asm { ROR EDX,CL }
    /* +0x955879 */ __asm { NOT R10 }
    /* +0x95587c */ __asm { ROL EDX,0x1d }
    /* +0x95587f */ __asm { ADD EDX,0x48ea389d }
    /* +0x955885 */ __asm { ADD RDX,R10 }
    /* +0x955888 */ __asm { MOV RCX,0x8d377df04dadddf }
    /* +0x955892 */ __asm { CMP RDX,RCX }
    /* +0x955895 */ __asm { NOP }
    /* +0x955896 */ __asm { NOP }
    /* +0x955897 */ __asm { NOP }
    /* +0x955898 */ __asm { NOP }
    /* +0x955899 */ __asm { NOP }
    /* +0x95589a */ __asm { MOV R11W,0xa4d9 }
    /* +0x95589f */ __asm { MOV RDI,qword ptr [RBP + 0x350] }
    /* +0x9558a6 */ __asm { MOVD XMM4,EDI }
    /* +0x9558aa */ __asm { ADD R11D,0xffffc2f4 }
    /* +0x9558b1 */ __asm { MOV R8,qword ptr [RBP + 0xbd0] }
    /* +0x9558b8 */ __asm { XOR R11D,R8D }
    /* +0x9558bb */ __asm { MOV R9W,0xf1cf }
    /* +0x9558c0 */ __asm { MOV R10D,0x1f8c6a89 }
    /* +0x9558c6 */ __asm { ADD R10D,0xe0739577 }
    /* +0x9558cd */ __asm { MOV ECX,R8D }
    /* +0x9558d0 */ __asm { ROR R10D,CL }
    /* +0x9558d3 */ __asm { MOVD XMM0,R11D }
    /* +0x9558d8 */ __asm { PADDW XMM0,XMM4 }
    /* +0x9558dc */ __asm { PEXTRW EDX,XMM0,0x0 }
    /* +0x9558e1 */ __asm { MOV qword ptr [RBP + 0x160],RCX }
    /* +0x9558e8 */ __asm { ROL R10D,0x6 }
    /* +0x9558ec */ __asm { XOR R9D,0xf3cf }
    /* +0x9558f3 */ __asm { MOV ECX,EDI }
    /* +0x9558f5 */ __asm { ROL R9W,CL }
    /* +0x9558f9 */ __asm { MOV ECX,R8D }
}


// ============================================================================
// Function : Unwind@7fffa50c5a70  |  RVA: 0x955a70  |  Size: 362 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50c5a70(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0xc38)) {
    uVar1 = *(uint64_t *)(param_2 + 0xc20);
    (*(code *)(&UNK_7fffa56883c3 +
              (short)((short)*(uint32_t *)(param_2 + 0xc48) * -0x3dbf +
                     (short)*(uint32_t *)(param_2 + 0xce0))))
              (&UNK_7fffa56883c3,uVar1 >> 0x3d,uVar1 >> 0x3d ^ uVar1,
               *(uint32_t *)(param_2 + 0x3d0) ^ 0xe26efb59);
  }
  *(uint64_t *)(param_2 + 0xc38) = 7;
  *(uint64_t *)(param_2 + 0xc30) = 0;
  *(uint16_t *)(param_2 + 0xc20) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa50c5be0  |  RVA: 0x955be0  |  Size: 284 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50c5be0(uint64_t param_1,int64_t param_2)

{
  uint32_t *puVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xc50) & 0xf;
  uVar3 = *(int *)(*(int64_t *)(param_2 + 0x250) + 4) - 1;
  *(uint32_t *)(*(int64_t *)(param_2 + 0x250) + 4) = uVar3;
  if (uVar3 == (uint16_t)(0U >> bVar2 | 0 << 0x10 - bVar2)) {
    puVar1 = *(uint32_t **)(param_2 + 0x250);
    LOCK();
    *puVar1 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar1 + 2);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50c5d00  |  RVA: 0x955d00  |  Size: 351 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50c5d00(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  code *pcVar3;
  uint32_t uVar4;
  
  uVar4 = ((uint32_t)*(uint64_t *)(param_2 + 0x3d0) | 1) * 0x3e56a5df;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xc50) & 0x1f;
  if ((uint64_t)((uVar4 >> bVar2 | uVar4 << 0x20 - bVar2) ^ 0x74a67d99) <
      *(uint64_t *)(param_2 + 0xd8)) {
    uVar1 = *(uint64_t *)(param_2 + 0xc0);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xc50) & 0xf;
    pcVar3 = (code *)((int64_t)
                      (short)((uint16_t)*(uint64_t *)(param_2 + 0x3d0) ^
                             (0x51cf << bVar2 | 0x51cfU >> 0x10 - bVar2)) + 0x7fffa568c536);
    (*pcVar3)(pcVar3,uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50c5e60  |  RVA: 0x955e60  |  Size: 413 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50c5e60(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint16_t uVar3;
  
  uVar3 = 0x905d - (short)*(uint32_t *)(param_2 + 0x168);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xeb0) & 0xf;
  uVar3 = uVar3 >> bVar1 | uVar3 << 0x10 - bVar1;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xce0) & 0xf;
  if ((uint64_t)(uint16_t)~(uVar3 << bVar1 | uVar3 >> 0x10 - bVar1) < *(uint64_t *)(param_2 + 0xd8))
  {
    uVar3 = (uint16_t)*(uint64_t *)(param_2 + 0x168) ^
            (short)*(uint64_t *)(param_2 + 0xc50) +
            ((uint16_t)*(uint64_t *)(param_2 + 0xeb0) ^ 0xec22) + 0xd70e;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d0) & 0xf;
    pcVar2 = (code *)((int64_t)(short)(uVar3 >> bVar1 | uVar3 << 0x10 - bVar1) + 0x7fffa568b5e1);
    (*pcVar2)(*(uint64_t *)(param_2 + 0x168) & 0xffffffff,pcVar2,
              *(uint64_t *)(param_2 + 0xc0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xc0));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa50c6000  |  RVA: 0x956000  |  Size: 41 bytes
// Callers  : FUN_7fffa5400390@0xc90390
// Callees  : FUN_7fffa5605a70@0xe95a70, FUN_7fffa4ab2690@0x342690, FUN_7fffa55ce2a0@0xe5e2a0
// ============================================================================
uint8_t FUN_7fffa50c6000(void)

{
  char cVar1;
  
  cVar1 = FUN_7fffa5605a70();
  if (cVar1 != '\0') {
    cVar1 = FUN_7fffa4ab2690();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_7fffa55ce2a0();
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa50c6030  |  RVA: 0x956030  |  Size: 11412 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa50c6030(void) {
    /* +0x956030 */ __asm { PUSH R14 }
    /* +0x956032 */ __asm { PUSH RSI }
    /* +0x956033 */ __asm { PUSH R15 }
    /* +0x956035 */ __asm { PUSH RBX }
    /* +0x956036 */ __asm { PUSH R12 }
    /* +0x956038 */ __asm { PUSH RBP }
    /* +0x956039 */ __asm { PUSH R13 }
    /* +0x95603b */ __asm { PUSH RDI }
    /* +0x95603c */ __asm { SUB RSP,0x5a8 }
    /* +0x956043 */ __asm { MOVDQA xmmword ptr [RSP + 0x590],XMM8 }
    /* +0x95604d */ __asm { PUSHFQ }
    /* +0x95604e */ __asm { POP RBP }
    /* +0x95604f */ __asm { TEST EBP,0x100 }
    /* +0x956055 */ __asm { NOP }
    /* +0x956056 */ __asm { NOP }
    /* +0x956057 */ __asm { NOP }
    /* +0x956058 */ __asm { NOP }
    /* +0x956059 */ __asm { NOP }
    /* +0x95605a */ __asm { MOV dword ptr [RSP + 0x50],0x8ff68f6f }
    /* +0x956062 */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0x956067 */ __asm { CMP R11D,0xe24d2e62 }
    /* +0x95606e */ __asm { NOP }
    /* +0x95606f */ __asm { NOP }
    /* +0x956070 */ __asm { NOP }
    /* +0x956071 */ __asm { NOP }
    /* +0x956072 */ __asm { NOP }
    /* +0x956073 */ __asm { MOV dword ptr [RSP + 0x50],0xee2f17ad }
    /* +0x95607b */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0x956080 */ __asm { AND R11D,0x1 }
    /* +0x956084 */ __asm { MOV DX,0xb808 }
    /* +0x956088 */ __asm { XOR EDX,0xb808 }
    /* +0x95608e */ __asm { MOVZX EDX,DX }
    /* +0x956091 */ __asm { CMP R11D,EDX }
    /* +0x956094 */ __asm { NOP }
    /* +0x956095 */ __asm { NOP }
    /* +0x956096 */ __asm { NOP }
    /* +0x956097 */ __asm { NOP }
    /* +0x956098 */ __asm { NOP }
    /* +0x956099 */ __asm { MOV dword ptr [RSP + 0x50],0x19a9951e }
    /* +0x9560a1 */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0x9560a6 */ __asm { MOV RDX,-0x7cc6940b51e459e7 }
    /* +0x9560b0 */ __asm { MOV RCX,0x1913573d09b20974 }
    /* +0x9560ba */ __asm { MOV RAX,0x1f40b4d90d57e4bf }
    /* +0x9560c4 */ __asm { MOV R9,0x1f36b4bc0d13e4e3 }
    /* +0x9560ce */ __asm { MOV qword ptr [RSP + 0x550],RAX }
    /* +0x9560d6 */ __asm { MOV RAX,0x3150cb3deabed324 }
    /* +0x9560e0 */ __asm { MOV R12,0x4fd20fa98ffd72c8 }
    /* +0x9560ea */ __asm { MOV R10,-0x14c21ecc66b14862 }
    /* +0x9560f4 */ __asm { MOV qword ptr [RSP + 0x588],R10 }
    /* +0x9560fc */ __asm { MOV RBX,0x311fcb78eae1d350 }
    /* +0x956106 */ __asm { MOV R11,-0x4fa0cad969fb0e4f }
    /* +0x956110 */ __asm { MOV R15,0x4fab0fda8f9c728d }
    /* +0x95611a */ __asm { LEA R8,[RSP + 0x50] }
    /* +0x95611f */ __asm { MOV qword ptr [RSP + 0x558],RDX }
    /* +0x956127 */ __asm { MOV RDX,-0x7e6df35855008406 }
    /* +0x956131 */ __asm { MOV R13,-0x7c9a946e51875990 }
    /* +0x95613b */ __asm { MOV RDI,-0x7e04f32c556e8445 }
    /* +0x956145 */ __asm { MOV qword ptr [RSP + 0x568],RDI }
    /* +0x95614d */ __asm { MOV qword ptr [RSP + 0x560],R12 }
    /* +0x956155 */ __asm { MOV qword ptr [RSP + 0x570],RCX }
    /* +0x95615d */ __asm { MOV qword ptr [RSP + 0x578],RBX }
    /* +0x956165 */ __asm { MOV RCX,0x1972575809da0937 }
    /* +0x95616f */ __asm { MOV R12,-0x4fa0cad969fb0e1e }
    /* +0x956179 */ __asm { MOV qword ptr [RSP + 0x580],R12 }
    /* +0x956181 */ __asm { MOV qword ptr [RSP + 0x60],R15 }
    /* +0x956186 */ __asm { MOVAPS XMM4,xmmword ptr [RSP + 0x570] }
    /* +0x95618e */ __asm { MOVAPS XMM2,xmmword ptr [RSP + 0x580] }
    /* +0x956196 */ __asm { MOV qword ptr [RSP + 0x88],R10 }
    /* +0x95619e */ __asm { MOVDQA XMM0,xmmword ptr [RSP + 0x560] }
    /* +0x9561a7 */ __asm { MOV qword ptr [RSP + 0x78],RAX }
    /* +0x9561ac */ __asm { MOV qword ptr [RSP + 0x58],R13 }
    /* +0x9561b1 */ __asm { MOV qword ptr [RSP + 0x50],R9 }
    /* +0x9561b6 */ __asm { MOV qword ptr [RSP + 0x70],RCX }
    /* +0x9561bb */ __asm { MOV qword ptr [RSP + 0x68],RDX }
    /* +0x9561c0 */ __asm { MOV qword ptr [RSP + 0x80],R11 }
    /* +0x9561c8 */ __asm { PXOR XMM0,xmmword ptr [R8 + 0x10] }
    /* +0x9561ce */ __asm { XORPS XMM2,xmmword ptr [R8 + 0x30] }
    /* +0x9561d3 */ __asm { MOVDQA XMM5,xmmword ptr [R8] }
    /* +0x9561d8 */ __asm { XORPS XMM4,xmmword ptr [R8 + 0x20] }
    /* +0x9561dd */ __asm { MOVAPS xmmword ptr [RSP + 0x580],XMM2 }
    /* +0x9561e5 */ __asm { MOVDQA xmmword ptr [RSP + 0x560],XMM0 }
    /* +0x9561ee */ __asm { MOVAPS xmmword ptr [RSP + 0x570],XMM4 }
    /* +0x9561f6 */ __asm { PXOR XMM5,xmmword ptr [RSP + 0x550] }
    /* +0x9561ff */ __asm { MOVDQA xmmword ptr [RSP + 0x550],XMM5 }
    /* +0x956208 */ __asm { MOV dword ptr [RSP + 0x50],0x800fc3af }
    /* +0x956210 */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0x956215 */ __asm { CMP R11D,0x3d9667e3 }
    /* +0x95621c */ __asm { JBE 0x7fffa50c71a3 }
    /* +0x956222 */ __asm { PUSHFQ }
    /* +0x956223 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x95622b */ __asm { POPFQ }
    /* +0x95622c */ __asm { LEA RDX,[RSP + 0x550] }
    /* +0x956234 */ __asm { MOV qword ptr [RSP + 0x530],RDX }
    /* +0x95623c */ __asm { MOV dword ptr [RSP + 0x528],0x320032 }
    /* +0x956247 */ __asm { MOV dword ptr [RSP + 0x50],0x2221050 }
    /* +0x95624f */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0x956254 */ __asm { TEST R11D,R11D }
    /* +0x956257 */ __asm { NOP }
    /* +0x956258 */ __asm { NOP }
    /* +0x956259 */ __asm { NOP }
    /* +0x95625a */ __asm { NOP }
    /* +0x95625b */ __asm { NOP }
    /* +0x95625c */ __asm { MOV EDX,0xeef25ecc }
    /* +0x956261 */ __asm { IMUL EDX,EDX,0x2fc3c3 }
    /* +0x956267 */ __asm { PUSHFQ }
    /* +0x956268 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x956270 */ __asm { POPFQ }
    /* +0x956271 */ __asm { MOV R10D,0x5f8641ac }
    /* +0x956277 */ __asm { MOV ECX,0xc0000166 }
    /* +0x95627c */ __asm { SUB ECX,R10D }
    /* +0x95627f */ __asm { MOV RSI,-0x30ebf64fafbc6efb }
    /* +0x956289 */ __asm { MOV R12,-0x22b18422c4a9c65e }
    /* +0x956293 */ __asm { CMP RCX,RDX }
    /* +0x956296 */ __asm { JL 0x7fffa50c6401 }
    /* +0x95629c */ __asm { LEA RDX,[RSP + 0x70] }
    /* +0x9562a1 */ __asm { XOR ECX,ECX }
    /* +0x9562a3 */ __asm { TEST R11D,R11D }
    /* +0x9562a6 */ __asm { SETNS CL }
    /* +0x9562a9 */ __asm { MOV R11D,0x48128c34 }
    /* +0x9562af */ __asm { IMUL R14D,R11D,-0x1842d595 }
    /* +0x9562b6 */ __asm { MOV dword ptr [RSP + 0x68],0x40 }
    /* +0x9562be */ __asm { MOV qword ptr [RSP + 0x58],0x0 }
    /* +0x9562c7 */ __asm { MOV dword ptr [RSP + 0x50],0x30 }
    /* +0x9562cf */ __asm { LEA R11,[RSP + 0x528] }
    /* +0x9562d7 */ __asm { MOV qword ptr [RSP + 0x60],R11 }
    /* +0x9562dc */ __asm { XORPS XMM4,XMM4 }
    /* +0x9562df */ __asm { MOVUPS xmmword ptr [RDX],XMM4 }
    /* +0x9562e2 */ __asm { ADD R14D,0x7568d9e1 }
    /* +0x9562e9 */ __asm { MOV dword ptr [RSP + 0x540],0xa9309024 }
    /* +0x9562f4 */ __asm { MOV R11D,dword ptr [RSP + 0x540] }
    /* +0x9562fc */ __asm { MOV R9,0x22b1842223c3d13e }
    /* +0x956306 */ __asm { MOV R10D,0xb7679d6a }
    /* +0x95630c */ __asm { MOV R8D,0xd04ea84e }
    /* +0x956312 */ __asm { RDTSC }
    /* +0x956314 */ __asm { SHL RDX,0x20 }
    /* +0x956318 */ __asm { OR RDX,RAX }
    /* +0x95631b */ __asm { ADD R9,-0x29a77ff5 }
    /* +0x956322 */ __asm { MOV EAX,0x3c08ce5b }
    /* +0x956327 */ __asm { XOR EAX,0x5b967d85 }
    /* +0x95632c */ __asm { IMUL RDX,RSI }
    /* +0x956330 */ __asm { MOV R11,RDX }
    /* +0x956333 */ __asm { NOT R11 }
    /* +0x956336 */ __asm { ADD R8D,0xf0234e88 }
    /* +0x95633d */ __asm { XOR R8D,0xbcbc7d84 }
    /* +0x956344 */ __asm { CMP RAX,R8 }
    /* +0x956347 */ __asm { MOV RAX,R11 }
    /* +0x95634a */ __asm { CMOVG RAX,RDX }
    /* +0x95634e */ __asm { MOVQ XMM2,RAX }
    /* +0x956353 */ __asm { MOV RAX,RCX }
    /* +0x956356 */ __asm { OR RAX,RDX }
    /* +0x956359 */ __asm { IMUL RAX,R9 }
    /* +0x95635d */ __asm { MOV R9,RCX }
    /* +0x956360 */ __asm { XOR R9,RDX }
    /* +0x956363 */ __asm { MOVQ XMM0,R9 }
    /* +0x956368 */ __asm { MOV R8D,EDX }
    /* +0x95636b */ __asm { AND R8D,ECX }
    /* +0x95636e */ __asm { MOVQ XMM4,RCX }
    /* +0x956373 */ __asm { PAND XMM4,XMM2 }
    /* +0x956377 */ __asm { XOR R10D,0x48e72175 }
    /* +0x95637e */ __asm { ROL R10D,0x1a }
    /* +0x956382 */ __asm { MOVD XMM2,R10D }
    /* +0x956387 */ __asm { MOV R9D,0xca8d7516 }
    /* +0x95638d */ __asm { IMUL R9,R8 }
    /* +0x956391 */ __asm { ADD R9,RAX }
    /* +0x956394 */ __asm { MOVDQA XMM5,XMM2 }
    /* +0x956398 */ __asm { PMULUDQ XMM5,XMM0 }
    /* +0x95639c */ __asm { PSRLQ XMM0,0x20 }
    /* +0x9563a1 */ __asm { PMULUDQ XMM0,XMM2 }
    /* +0x9563a5 */ __asm { PSLLQ XMM0,0x20 }
    /* +0x9563aa */ __asm { PADDQ XMM0,XMM5 }
    /* +0x9563ae */ __asm { MOVQ RAX,XMM0 }
    /* +0x9563b3 */ __asm { NOT RCX }
    /* +0x9563b6 */ __asm { AND R11,RCX }
    /* +0x9563b9 */ __asm { AND RCX,RDX }
    /* +0x9563bc */ __asm { IMUL RDX,RCX,0x4a8f7226 }
    /* +0x9563c3 */ __asm { MOV R10,0x22b18422c4a9c65e }
    /* +0x9563cd */ __asm { IMUL R10,R11 }
    /* +0x9563d1 */ __asm { ADD R10,R9 }
    /* +0x9563d4 */ __asm { ADD R10,RDX }
    /* +0x9563d7 */ __asm { MOVQ RDX,XMM4 }
    /* +0x9563dc */ __asm { IMUL RCX,RDX,0x4a8f7225 }
    /* +0x9563e3 */ __asm { ADD RCX,R10 }
    /* +0x9563e6 */ __asm { ADD RCX,RAX }
    /* +0x9563e9 */ __asm { MOV RAX,RCX }
    /* +0x9563ec */ __asm { SHR RAX,0x2d }
    /* +0x9563f0 */ __asm { MOV RDX,RCX }
    /* +0x9563f3 */ __asm { SHR RDX,0x1b }
    /* +0x9563f7 */ __asm { XOR EDX,EAX }
    /* +0x9563f9 */ __asm { SHR RCX,0x3b }
    /* +0x9563fd */ __asm { ROR EDX,CL }
    /* +0x9563ff */ __asm { JMP 0x7fffa50c645c }
    /* +0x956401 */ __asm { MOV R11D,0x235fcf3a }
    /* +0x956407 */ __asm { IMUL R14D,R11D,0x516603cd }
    /* +0x95640e */ __asm { ADD R14D,0x81df53b8 }
    /* +0x956415 */ __asm { MOV R11D,dword ptr [RSP + 0x540] }
    /* +0x95641d */ __asm { RDTSC }
    /* +0x95641f */ __asm { SHL RDX,0x20 }
    /* +0x956423 */ __asm { OR RDX,RAX }
    /* +0x956426 */ __asm { IMUL RDX,RSI }
    /* +0x95642a */ __asm { ADD RDX,R12 }
    /* +0x95642d */ __asm { MOV RCX,RDX }
    /* +0x956430 */ __asm { SHR RCX,0x3b }
    /* +0x956434 */ __asm { MOVQ XMM4,RDX }
    /* +0x956439 */ __asm { PSRLQ XMM4,0x1b }
    /* +0x95643e */ __asm { SHR RDX,0x2d }
    /* +0x956442 */ __asm { MOVD XMM2,EDX }
    /* +0x956446 */ __asm { PXOR XMM2,XMM4 }
    /* +0x95644a */ __asm { MOVQ RDX,XMM2 }
    /* +0x95644f */ __asm { ROR EDX,CL }
    /* +0x956451 */ __asm { MOV dword ptr [RSP + 0x540],0xa9309024 }
    /* +0x95645c */ __asm { AND EDX,0x3 }
    /* +0x95645f */ __asm { CMP EDX,0x2 }
    /* +0x956462 */ __asm { JNC 0x7fffa50c6513 }
    /* +0x956468 */ __asm { CMP EDX,0x1 }
    /* +0x95646b */ __asm { JNZ 0x7fffa50c68fd }
    /* +0x956471 */ __asm { MOV RDX,R14 }
    /* +0x956474 */ __asm { OR RDX,0x1 }
    /* +0x956478 */ __asm { MOV R9D,0xf4a16634 }
    /* +0x95647e */ __asm { MOV R11,-0x7b587294041ddab1 }
    /* +0x956488 */ __asm { IMUL R11,RDX }
    /* +0x95648c */ __asm { ROL R11,0x2c }
    /* +0x956490 */ __asm { CMP R9,R11 }
    /* +0x956493 */ __asm { NOP }
    /* +0x956494 */ __asm { NOP }
    /* +0x956495 */ __asm { NOP }
    /* +0x956496 */ __asm { NOP }
    /* +0x956497 */ __asm { NOP }
    /* +0x956498 */ __asm { NOP }
    /* +0x956499 */ __asm { NOP }
    /* +0x95649a */ __asm { NOP }
    /* +0x95649b */ __asm { NOP }
    /* +0x95649c */ __asm { NOP }
    /* +0x95649d */ __asm { NOP }
    /* +0x95649e */ __asm { NOP }
    /* +0x95649f */ __asm { NOP }
    /* +0x9564a0 */ __asm { MOV R11,qword ptr [R9 + -0x74a3662c] }
    /* +0x9564a7 */ __asm { MOV RDX,0x44d21e2c20460abc }
    /* +0x9564b1 */ __asm { MOV RAX,R11 }
    /* +0x9564b4 */ __asm { MUL RDX }
    /* +0x9564b7 */ __asm { MOV R9,RDX }
    /* +0x9564ba */ __asm { MOV EDX,0x1475454 }
    /* +0x9564bf */ __asm { MOV RAX,R11 }
    /* +0x9564c2 */ __asm { MUL RDX }
    /* +0x9564c5 */ __asm { ADD RAX,R9 }
    /* +0x9564c8 */ __asm { ADC RDX,0x0 }
    /* +0x9564cc */ __asm { TEST DL,0x1 }
    /* +0x9564cf */ __asm { JNZ 0x7fffa50c6c8c }
    /* +0x9564d5 */ __asm { LEA R9,[0x7fffa47b96f8] }
    /* +0x9564dc */ __asm { MOV RDX,0x3474b8e15391c5f8 }
    /* +0x9564e6 */ __asm { CMP R9,RDX }
    /* +0x9564e9 */ __asm { JZ 0x7fffa50c8d01 }
    /* +0x9564ef */ __asm { MOV R11W,0xfe7b }
    /* +0x9564f4 */ __asm { MOV qword ptr [RSP + 0x540],RAX }
    /* +0x9564fc */ __asm { MOV EAX,dword ptr [R9 + 0x38f8] }
    /* +0x956503 */ __asm { MOV EDX,0xfffffe7c }
    /* +0x956508 */ __asm { SUB EDX,R11D }
    /* +0x95650b */ __asm { MOVZX EDX,DX }
    /* +0x95650e */ __asm { JMP 0x7fffa50c6d88 }
    /* +0x956513 */ __asm { CMP EDX,0x3 }
    /* +0x956516 */ __asm { JNZ 0x7fffa50c6a0f }
    /* +0x95651c */ __asm { LEA R9,[0x7fffa47bedd8] }
    /* +0x956523 */ __asm { MOV RAX,R9 }
    /* +0x956526 */ __asm { ADD RAX,-0x6b34b885 }
    /* +0x95652c */ __asm { MOV RDX,0x7dd88fb474892a0f }
    /* +0x956536 */ __asm { ADD RDX,R14 }
    /* +0x956539 */ __asm { ROL RDX,0x18 }
    /* +0x95653d */ __asm { IMUL RDX,RAX }
    /* +0x956541 */ __asm { MOV R11,-0x4072fa66b72b8433 }
    /* +0x95654b */ __asm { CMP RDX,R11 }
    /* +0x95654e */ __asm { JZ 0x7fffa50c8cdd }
    /* +0x956554 */ __asm { MOVZX EDX,uint8_t ptr [R9 + -0x274b] }
    /* +0x95655c */ __asm { MOVZX ECX,uint8_t ptr [R9 + RDX*0x4 + -0x273b] }
    /* +0x956565 */ __asm { ROL CL,0x4 }
    /* +0x956568 */ __asm { MOV uint8_t ptr [RSP + 0x540],CL }
    /* +0x95656f */ __asm { MOVZX ECX,uint8_t ptr [R9 + RDX*0x4 + -0x273a] }
    /* +0x956578 */ __asm { ROL CL,0x4 }
    /* +0x95657b */ __asm { MOV uint8_t ptr [RSP + 0x541],CL }
    /* +0x956582 */ __asm { MOVZX ECX,uint8_t ptr [R9 + RDX*0x4 + -0x2739] }
    /* +0x95658b */ __asm { ROL CL,0x4 }
    /* +0x95658e */ __asm { MOV uint8_t ptr [RSP + 0x542],CL }
    /* +0x956595 */ __asm { MOV R11D,0x8b7771cf }
    /* +0x95659b */ __asm { XOR R11D,R14D }
    /* +0x95659e */ __asm { IMUL ECX,R11D,0x3da5bdaf }
    /* +0x9565a5 */ __asm { MOVZX EDX,uint8_t ptr [R9 + RDX*0x4 + -0x2738] }
    /* +0x9565ae */ __asm { ROL DL,0x4 }
    /* +0x9565b1 */ __asm { ADD ECX,0x40c0e806 }
    /* +0x9565b7 */ __asm { MOV uint8_t ptr [RSP + 0x543],DL }
    /* +0x9565be */ __asm { MOV R11D,0x65e8ce72 }
    /* +0x9565c4 */ __asm { XOR R11D,dword ptr [RSP + 0x540] }
    /* +0x9565cc */ __asm { MOV EDX,dword ptr [RCX] }
    /* +0x9565ce */ __asm { BT R11D,EDX }
    /* +0x9565d2 */ __asm { JNC 0x7fffa50c6d48 }
    /* +0x9565d8 */ __asm { RDTSC }
    /* +0x9565da */ __asm { SHL RDX,0x20 }
    /* +0x9565de */ __asm { OR RDX,RAX }
    /* +0x9565e1 */ __asm { MOV R11,-0x4a9b10dd1385131b }
    /* +0x9565eb */ __asm { IMUL R11,RDX }
    /* +0x9565ef */ __asm { MOV RCX,-0x76102c1987b0210e }
    /* +0x9565f9 */ __asm { ADD RCX,R11 }
    /* +0x9565fc */ __asm { MOV RDX,RCX }
    /* +0x9565ff */ __asm { SHR RDX,0x2d }
    /* +0x956603 */ __asm { MOV RAX,RCX }
    /* +0x956606 */ __asm { SHR RAX,0x1b }
    /* +0x95660a */ __asm { XOR EDX,EAX }
    /* +0x95660c */ __asm { SHR RCX,0x3b }
    /* +0x956610 */ __asm { ROR EDX,CL }
    /* +0x956612 */ __asm { MOV dword ptr [RSP + 0x540],0x851c9ec2 }
    /* +0x95661d */ __asm { MOV R11D,dword ptr [RSP + 0x540] }
    /* +0x956625 */ __asm { CMP R11D,0xda7ad99b }
    /* +0x95662c */ __asm { JC 0x7fffa50c663b }
    /* +0x95662e */ __asm { TEST uint8_t ptr [RBP + -0x12fac2de],0xe3 }
    /* +0x956635 */ __asm { INC uint8_t ptr [0x7fff9e26338f] }
    /* +0x95663b */ __asm { CMP EDX,0x1186e2a }
    /* +0x956641 */ __asm { JA 0x7fffa50c68aa }
    /* +0x956647 */ __asm { MOV R11W,0xe39c }
    /* +0x95664c */ __asm { NOT R11D }
    /* +0x95664f */ __asm { ADD R11D,R14D }
    /* +0x956652 */ __asm { ROL R11W,0xa }
    /* +0x956657 */ __asm { MOVZX EDX,R11W }
    /* +0x95665b */ __asm { MOV RDX,qword ptr GS:[RDX] }
    /* +0x95665f */ __asm { MOV R11W,0x5773 }
    /* +0x956664 */ __asm { XOR R11D,R14D }
    /* +0x956667 */ __asm { ADD R11D,0x5372 }
    /* +0x95666e */ __asm { MOVZX ECX,R11W }
    /* +0x956672 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0x956676 */ __asm { MOV R9,qword ptr [R11 + 0x30] }
    /* +0x95667a */ __asm { ADD RDX,R9 }
    /* +0x95667d */ __asm { ADD RDX,0xf40 }
    /* +0x956684 */ __asm { MOV R11D,0x8aba1797 }
    /* +0x95668a */ __asm { XOR R11,RDX }
    /* +0x95668d */ __asm { MOV RDX,-0x153a767acfa9e303 }
    /* +0x956697 */ __asm { IMUL RDX,R11 }
    /* +0x95669b */ __asm { MOV R11,-0x45d1c33eedee2fdc }
    /* +0x9566a5 */ __asm { CMP RDX,R11 }
    /* +0x9566a8 */ __asm { NOP }
    /* +0x9566a9 */ __asm { NOP }
    /* +0x9566aa */ __asm { NOP }
    /* +0x9566ab */ __asm { NOP }
    /* +0x9566ac */ __asm { NOP }
    /* +0x9566ad */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x9566b4 */ __asm { NOP }
    /* +0x9566b5 */ __asm { MOV R9,0x0 }
    /* +0x9566bc */ __asm { LEA R9,[0x7fffa47b626f] }
    /* +0x9566c3 */ __asm { MOV RDX,-0x86446b10 }
    /* +0x9566cd */ __asm { ADD RDX,R9 }
    /* +0x9566d0 */ __asm { XOR RDX,-0x75d33c14 }
    /* +0x9566d7 */ __asm { MOV R11,-0x57061a5a49c20b2e }
    /* +0x9566e1 */ __asm { CMP RDX,R11 }
    /* +0x9566e4 */ __asm { JNZ 0x7fffa50c66f5 }
    /* +0x9566e6 */ __asm { TEST uint8_t ptr [RAX],BH }
    /* +0x9566e8 */ __asm { JNO 0x7fffa50c66ef }
    /* +0x9566ea */ __asm { ROR CH,0xc4 }
    /* +0x9566ed */ __asm { AND EDX,EBP }
    /* +0x9566ef */ __asm { STC }
    /* +0x9566f0 */ __asm { ADC AL,0x7 }
    /* +0x9566f2 */ __asm { RET }
    /* +0x9566f5 */ __asm { MOV R11D,0x3452762 }
    /* +0x9566fb */ __asm { XOR R11D,0x8d27592e }
    /* +0x956702 */ __asm { IMUL R11D,R11D,-0xf94b561 }
    /* +0x956709 */ __asm { ADD R11D,R14D }
    /* +0x95670c */ __asm { MOVQ XMM4,R9 }
    /* +0x956711 */ __asm { MOVD XMM2,R11D }
    /* +0x956716 */ __asm { PADDQ XMM2,XMM4 }
    /* +0x95671a */ __asm { MOVQ RDX,XMM2 }
    /* +0x95671f */ __asm { MOVZX R9D,uint8_t ptr [RDX + 0x9] }
    /* +0x956724 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R9*0x4 + 0xf] }
    /* +0x95672a */ __asm { NOT CL }
    /* +0x95672c */ __asm { ROL CL,0x5 }
    /* +0x95672f */ __asm { MOV uint8_t ptr [RSP + 0x540],CL }
    /* +0x956736 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R9*0x4 + 0x10] }
    /* +0x95673c */ __asm { NOT CL }
    /* +0x95673e */ __asm { ROL CL,0x5 }
    /* +0x956741 */ __asm { MOV uint8_t ptr [RSP + 0x541],CL }
    /* +0x956748 */ __asm { MOVZX ECX,uint8_t ptr [RDX + R9*0x4 + 0x11] }
    /* +0x95674e */ __asm { NOT CL }
    /* +0x956750 */ __asm { ROL CL,0x5 }
    /* +0x956753 */ __asm { MOV uint8_t ptr [RSP + 0x542],CL }
    /* +0x95675a */ __asm { MOVZX ECX,uint8_t ptr [RDX + R9*0x4 + 0x12] }
    /* +0x956760 */ __asm { NOT CL }
    /* +0x956762 */ __asm { ROL CL,0x5 }
    /* +0x956765 */ __asm { MOV uint8_t ptr [RSP + 0x543],CL }
    /* +0x95676c */ __asm { MOV R11D,0x9102c3cc }
    /* +0x956772 */ __asm { XOR R11D,dword ptr [RSP + 0x540] }
    /* +0x95677a */ __asm { BT R11D,R11D }
    /* +0x95677e */ __asm { JNC 0x7fffa50c68aa }
    /* +0x956784 */ __asm { MOV R9,0x0 }
    /* +0x95678b */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x956792 */ __asm { NOP }
    /* +0x956793 */ __asm { PXOR XMM4,XMM4 }
    /* +0x956797 */ __asm { MOVDQA xmmword ptr [RSP + 0x540],XMM4 }
    /* +0x9567a0 */ __asm { PUSHFQ }
    /* +0x9567a1 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x9567a9 */ __asm { POPFQ }
    /* +0x9567aa */ __asm { MOV dword ptr [RSP + 0x538],0xf7c1c606 }
    /* +0x9567b5 */ __asm { MOV R11D,dword ptr [RSP + 0x538] }
    /* +0x9567bd */ __asm { MOV dword ptr [RSP + 0x540],0x0 }
    /* +0x9567c8 */ __asm { MOV dword ptr [RSP + 0x538],0xc3be0d27 }
    /* +0x9567d3 */ __asm { MOV R11D,dword ptr [RSP + 0x538] }
    /* +0x9567db */ __asm { CMP R11D,0xd724b10e }
    /* +0x9567e2 */ __asm { JNC 0x7fffa50c8daf }
    /* +0x9567e8 */ __asm { NOP }
    /* +0x9567e9 */ __asm { MOV R9,0x0 }
    /* +0x9567f0 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x9567f7 */ __asm { TEST EBP,0x100 }
    /* +0x9567fd */ __asm { NOP }
    /* +0x9567fe */ __asm { NOP }
    /* +0x9567ff */ __asm { NOP }
    /* +0x956800 */ __asm { NOP }
    /* +0x956801 */ __asm { NOP }
    /* +0x956802 */ __asm { MOV dword ptr [RSP + 0x538],0x3c8945f1 }
    /* +0x95680d */ __asm { MOV R11D,dword ptr [RSP + 0x538] }
    /* +0x956815 */ __asm { TEST R11D,R11D }
    /* +0x956818 */ __asm { NOP }
    /* +0x956819 */ __asm { NOP }
    /* +0x95681a */ __asm { NOP }
    /* +0x95681b */ __asm { NOP }
    /* +0x95681c */ __asm { NOP }
    /* +0x95681d */ __asm { NOP }
    /* +0x95681e */ __asm { NOP }
    /* +0x95681f */ __asm { NOP }
    /* +0x956820 */ __asm { NOP }
    /* +0x956821 */ __asm { NOP }
    /* +0x956822 */ __asm { NOP }
    /* +0x956823 */ __asm { NOP }
    /* +0x956824 */ __asm { NOP }
    /* +0x956825 */ __asm { NOP }
    /* +0x956826 */ __asm { NOP }
    /* +0x956827 */ __asm { NOP }
    /* +0x956828 */ __asm { NOP }
    /* +0x95684f */ __asm { MOV R11W,0x8262 }
    /* +0x956854 */ __asm { XOR R11D,0x7d9d }
    /* +0x95685b */ __asm { ROL R11W,0x4 }
    /* +0x956860 */ __asm { MOV ECX,R14D }
    /* +0x956863 */ __asm { ROR R11W,CL }
    /* +0x956867 */ __asm { MOV DX,0xc149 }
    /* +0x95686b */ __asm { ADD EDX,0x3f37 }
    /* +0x956871 */ __asm { ROL DX,CL }
    /* +0x956874 */ __asm { MOVSX R10,R11W }
    /* +0x956878 */ __asm { MOVZX R9D,DX }
    /* +0x95687c */ __asm { MOV R11W,0x714 }
    /* +0x956881 */ __asm { NOT R11D }
    /* +0x956884 */ __asm { ADD R11D,R14D }
    /* +0x956887 */ __asm { IMUL R11D,R11D,-0x73cb }
    /* +0x95688e */ __asm { MOVZX EDX,R11W }
    /* +0x956892 */ __asm { MOV qword ptr [RSP + 0x538],RCX }
    /* +0x95689a */ __asm { MOV EAX,dword ptr [RAX + 0x6623] }
    /* +0x9568a0 */ __asm { LEA R8,[RSP + 0x540] }
    /* +0x9568a8 */ __asm { SYSCALL }
    /* +0x9568aa */ __asm { LEA R9,[0x7fffa478c536] }
    /* +0x9568b1 */ __asm { MOV RDX,-0x51de9a88fe7b537f }
    /* +0x9568bb */ __asm { CMP R9,RDX }
    /* +0x9568be */ __asm { NOP }
    /* +0x9568bf */ __asm { NOP }
    /* +0x9568c0 */ __asm { NOP }
    /* +0x9568c1 */ __asm { NOP }
    /* +0x9568c2 */ __asm { NOP }
    /* +0x9568c3 */ __asm { MOV RAX,0x0 }
    /* +0x9568ca */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x9568d1 */ __asm { MOV qword ptr [RSP + 0x540],RAX }
    /* +0x9568d9 */ __asm { MOV R11W,0xbf76 }
    /* +0x9568de */ __asm { MOV EAX,dword ptr [R9 + -0x7e8e] }
    /* +0x9568e5 */ __asm { SUB R11D,R14D }
    /* +0x9568e8 */ __asm { ADD R11D,0x4427 }
    /* +0x9568ef */ __asm { ROL R11W,0x5 }
    /* +0x9568f4 */ __asm { MOVZX EDX,R11W }
    /* +0x9568f8 */ __asm { JMP 0x7fffa50c6d88 }
    /* +0x9568fd */ __asm { MOV R9D,0x8257cf15 }
    /* +0x956903 */ __asm { MOV RDX,0x35fee176edd0af12 }
    /* +0x95690d */ __asm { CMP R9,RDX }
    /* +0x956910 */ __asm { JZ 0x7fffa50c8ce3 }
    /* +0x956916 */ __asm { MOV R8,0x97a5638325fdb03 }
    /* +0x956920 */ __asm { MOV RAX,0xee09ed5e9ade5c0 }
    /* +0x95692a */ __asm { XOR RAX,R14 }
    /* +0x95692d */ __asm { MOV R10,-0x6602d3eea921feee }
    /* +0x956937 */ __asm { IMUL R10,RAX }
    /* +0x95693b */ __asm { MOV RCX,0x15a663d5eeac21ff }
    /* +0x956945 */ __asm { MUL RCX }
    /* +0x956948 */ __asm { MOV R11,RAX }
    /* +0x95694b */ __asm { IMUL R8,RCX }
    /* +0x95694f */ __asm { ADD R8,RDX }
    /* +0x956952 */ __asm { ADD R8,R10 }
    /* +0x956955 */ __asm { MOV R9,qword ptr [R9 + -0x259cf0d] }
    /* +0x95695c */ __asm { MOV RDX,-0x15b893d97dde9192 }
    /* +0x956966 */ __asm { MOV RAX,R9 }
    /* +0x956969 */ __asm { MUL RDX }
    /* +0x95696c */ __asm { MOV R10,RDX }
    /* +0x95696f */ __asm { MOV EDX,0x14740ec }
    /* +0x956974 */ __asm { MOV RAX,R9 }
    /* +0x956977 */ __asm { MUL RDX }
    /* +0x95697a */ __asm { ADD RAX,R10 }
    /* +0x95697d */ __asm { ADC RDX,0x0 }
    /* +0x956981 */ __asm { AND EDX,0x1 }
    /* +0x956984 */ __asm { MOV RAX,-0x65942a0c39643ba3 }
    /* +0x95698e */ __asm { ADD RAX,R11 }
    /* +0x956991 */ __asm { MOV R11,0x62f8355cbd65bf3d }
    /* +0x95699b */ __asm { ADC R11,R8 }
    /* +0x95699e */ __asm { OR RAX,RDX }
    /* +0x9569a1 */ __asm { OR RAX,R11 }
    /* +0x9569a4 */ __asm { JZ 0x7fffa50c6ce7 }
    /* +0x9569aa */ __asm { MOV R11D,0x680727bd }
}


// ============================================================================
// Function : FUN_7fffa50c8e70  |  RVA: 0x958e70  |  Size: 229 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa50c8e70(uint64_t param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)

{
  code *pcVar1;
  
  param_2 = param_2 - (param_2 << 0x29);
  if (7 < *(uint64_t *)(param_2 + -0x3c54bed4)) {
    pcVar1 = (code *)((int64_t)
                      (int)((param_4 ^ 0xee04ce30) << 0xb | (param_4 ^ 0xee04ce30) >> 0x15) +
                     0x7fffa569640c);
    (*pcVar1)(param_1,pcVar1,
              *(uint64_t *)(param_2 + -0x3c54beec) >> 0x3d ^ *(uint64_t *)(param_2 + -0x3c54beec))
    ;
  }
  *(uint16_t *)(param_2 + -0x3c54beec) = 0;
  *(uint64_t *)(param_2 + -0x3c54bed4) = 7;
  *(uint64_t *)(param_2 + -0x3c54bedc) = 0;
  if (7 < *(uint64_t *)(param_2 + -0x3c54bef4)) {
    FUN_7fffa5687c30();
  }
  *(uint16_t *)(param_2 + -0x3c54bf0c) = 0;
  *(uint64_t *)(param_2 + -0x3c54bef4) = 7;
  *(uint64_t *)(param_2 + -0x3c54befc) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa50c8f60  |  RVA: 0x958f60  |  Size: 356 bytes
// Callers  : FUN_7fffa4f445c0@0x7d45c0
// Callees  : FUN_7fffa5588400@0xe18400
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa50c91fc) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91f5) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91ee) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91e7) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91e0) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91d9) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91d2) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91cb) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91c4) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91bd) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91b6) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91af) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91a8) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c91a1) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c919a) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c905d) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c906c) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c907b) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c908a) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9099) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c90a5) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c90b1) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c90bd) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c90c9) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c90d5) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c90e1) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c90ed) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c90f9) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9105) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9111) */

char * FUN_7fffa50c8f60(char *param_1,int64_t param_2)

{
  char cVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  char *pcVar19;
  uint8_t (*pauVar20) [16];
  uint64_t uVar21;
  uint8_t auVar22 [16];
  int64_t lVar25;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint64_t uVar34;
  uint8_t auVar35 [16];
  
  uVar21 = (uint64_t)((uint32_t)param_2 & 0xf);
  pauVar20 = (uint8_t (*) [16])(param_2 - uVar21);
  auVar33 = *pauVar20;
  switch(uVar21) {
  case 1:
    auVar33 = auVar33 >> 8;
    break;
  case 2:
    auVar33 = auVar33 >> 0x10;
    break;
  case 3:
    auVar33 = auVar33 >> 0x18;
    break;
  case 4:
    auVar33 = auVar33 >> 0x20;
    break;
  case 5:
    auVar33 = auVar33 >> 0x28;
    break;
  case 6:
    auVar33 = auVar33 >> 0x30;
    break;
  case 7:
    auVar33 = auVar33 >> 0x38;
    break;
  case 8:
    auVar33 = auVar33 >> 0x40;
    break;
  case 9:
    auVar33 = auVar33 >> 0x48;
    break;
  case 10:
    auVar33 = auVar33 >> 0x50;
    break;
  case 0xb:
    auVar33 = auVar33 >> 0x58;
    break;
  case 0xc:
    auVar33 = auVar33 >> 0x60;
    break;
  case 0xd:
    auVar33 = auVar33 >> 0x68;
    break;
  case 0xe:
    auVar33 = auVar33 >> 0x70;
    break;
  case 0xf:
    auVar33 = auVar33 >> 0x78;
  }
  auVar22[0] = -(auVar33[0] == '\0');
  auVar22[1] = -(auVar33[1] == '\0');
  auVar22[2] = -(auVar33[2] == '\0');
  auVar22[3] = -(auVar33[3] == '\0');
  auVar22[4] = -(auVar33[4] == '\0');
  auVar22[5] = -(auVar33[5] == '\0');
  auVar22[6] = -(auVar33[6] == '\0');
  auVar22[7] = -(auVar33[7] == '\0');
  auVar22[8] = -(auVar33[8] == '\0');
  auVar22[9] = -(auVar33[9] == '\0');
  auVar22[10] = -(auVar33[10] == '\0');
  auVar22[0xb] = -(auVar33[0xb] == '\0');
  auVar22[0xc] = -(auVar33[0xc] == '\0');
  auVar22[0xd] = -(auVar33[0xd] == '\0');
  auVar22[0xe] = -(auVar33[0xe] == '\0');
  auVar22[0xf] = -(auVar33[0xf] == '\0');
  uVar3 = (uint16_t)(SUB161(auVar22 >> 7,0) & 1) | (uint16_t)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (uint16_t)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (uint16_t)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (uint16_t)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (uint16_t)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (uint16_t)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (uint16_t)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (uint16_t)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (uint16_t)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (uint16_t)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (uint16_t)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (uint16_t)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (uint16_t)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (uint16_t)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar22[0xf] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar21 == 0) {
      if ((*pauVar20)[1] != '\0') {
        pcVar19 = (char *)FUN_7fffa5588400();
        return pcVar19;
      }
      goto LAB_7fffa50c9209;
    }
  }
  else {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    lVar25 = auVar33._8_8_;
    switch(-uVar2) {
    case 0:
      auVar33 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar26._0_8_ = auVar33._0_8_ << 8;
      auVar26._8_8_ = lVar25 << 8 | auVar33._0_8_ >> 0x38;
      auVar33 = auVar26 >> 8;
      break;
    case 0xfffffff2:
      auVar27._0_8_ = auVar33._0_8_ << 0x10;
      auVar27._8_8_ = lVar25 << 0x10 | auVar33._0_8_ >> 0x30;
      auVar33 = auVar27 >> 0x10;
      break;
    case 0xfffffff3:
      auVar28._0_8_ = auVar33._0_8_ << 0x18;
      auVar28._8_8_ = lVar25 << 0x18 | auVar33._0_8_ >> 0x28;
      auVar33 = auVar28 >> 0x18;
      break;
    case 0xfffffff4:
      auVar29._0_8_ = auVar33._0_8_ << 0x20;
      auVar29._8_8_ = lVar25 << 0x20 | auVar33._0_8_ >> 0x20;
      auVar33 = auVar29 >> 0x20;
      break;
    case 0xfffffff5:
      auVar30._0_8_ = auVar33._0_8_ << 0x28;
      auVar30._8_8_ = lVar25 << 0x28 | auVar33._0_8_ >> 0x18;
      auVar33 = auVar30 >> 0x28;
      break;
    case 0xfffffff6:
      auVar31._0_8_ = auVar33._0_8_ << 0x30;
      auVar31._8_8_ = lVar25 << 0x30 | auVar33._0_8_ >> 0x10;
      auVar33 = auVar31 >> 0x30;
      break;
    case 0xfffffff7:
      auVar32._0_8_ = auVar33._0_8_ << 0x38;
      auVar32._8_8_ = lVar25 << 0x38 | auVar33._0_8_ >> 8;
      auVar33 = auVar32 >> 0x38;
      break;
    case 0xfffffff8:
      auVar33._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar33._0_8_ << 8;
      auVar33 = (auVar4 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar33._0_8_ << 0x10;
      auVar33 = (auVar5 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar33._0_8_ << 0x18;
      auVar33 = (auVar6 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar33._0_8_ << 0x20;
      auVar33 = (auVar7 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar33._0_8_ << 0x28;
      auVar33 = (auVar8 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar33._0_8_ << 0x30;
      auVar33 = (auVar9 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar33._0_8_ << 0x38;
      auVar33 = (auVar10 << 0x40) >> 0x78;
    }
    if (uVar21 == 0 || (uint64_t)uVar2 < 0x10 - uVar21) goto LAB_7fffa50c9209;
  }
  auVar35 = pauVar20[1];
  auVar23[0] = -(auVar35[0] == '\0');
  auVar23[1] = -(auVar35[1] == '\0');
  auVar23[2] = -(auVar35[2] == '\0');
  auVar23[3] = -(auVar35[3] == '\0');
  auVar23[4] = -(auVar35[4] == '\0');
  auVar23[5] = -(auVar35[5] == '\0');
  auVar23[6] = -(auVar35[6] == '\0');
  lVar25 = auVar35._8_8_;
  auVar23[7] = -(auVar35[7] == '\0');
  auVar23[8] = -(auVar35[8] == '\0');
  auVar23[9] = -(auVar35[9] == '\0');
  auVar23[10] = -(auVar35[10] == '\0');
  auVar23[0xb] = -(auVar35[0xb] == '\0');
  auVar23[0xc] = -(auVar35[0xc] == '\0');
  auVar23[0xd] = -(auVar35[0xd] == '\0');
  auVar23[0xe] = -(auVar35[0xe] == '\0');
  auVar23[0xf] = -(auVar35[0xf] == '\0');
  uVar3 = (uint16_t)(SUB161(auVar23 >> 7,0) & 1) | (uint16_t)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (uint16_t)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (uint16_t)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (uint16_t)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (uint16_t)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (uint16_t)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (uint16_t)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (uint16_t)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (uint16_t)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (uint16_t)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (uint16_t)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (uint16_t)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (uint16_t)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (uint16_t)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar23[0xf] >> 7) << 0xf;
  uVar34 = auVar35._0_8_;
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 - uVar21) + 0x10 < 0x11) {
      switch(-uVar2) {
      case 0:
        auVar35 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar35._0_8_ = uVar34 << 8;
        auVar35._8_8_ = lVar25 << 8 | uVar34 >> 0x38;
        break;
      case 0xfffffff2:
        auVar35._0_8_ = uVar34 << 0x10;
        auVar35._8_8_ = lVar25 << 0x10 | uVar34 >> 0x30;
        break;
      case 0xfffffff3:
        auVar35._0_8_ = uVar34 << 0x18;
        auVar35._8_8_ = lVar25 << 0x18 | uVar34 >> 0x28;
        break;
      case 0xfffffff4:
        auVar35._0_8_ = uVar34 << 0x20;
        auVar35._8_8_ = lVar25 << 0x20 | uVar34 >> 0x20;
        break;
      case 0xfffffff5:
        auVar35._0_8_ = uVar34 << 0x28;
        auVar35._8_8_ = lVar25 << 0x28 | uVar34 >> 0x18;
        break;
      case 0xfffffff6:
        auVar35._0_8_ = uVar34 << 0x30;
        auVar35._8_8_ = lVar25 << 0x30 | uVar34 >> 0x10;
        break;
      case 0xfffffff7:
        auVar35._0_8_ = uVar34 << 0x38;
        auVar35._8_8_ = lVar25 << 0x38 | uVar34 >> 8;
        break;
      case 0xfffffff8:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar34;
        auVar35 = auVar11 << 0x40;
        break;
      case 0xfffffff9:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar34 << 8;
        auVar35 = auVar12 << 0x40;
        break;
      case 0xfffffffa:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar34 << 0x10;
        auVar35 = auVar13 << 0x40;
        break;
      case 0xfffffffb:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar34 << 0x18;
        auVar35 = auVar14 << 0x40;
        break;
      case 0xfffffffc:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar34 << 0x20;
        auVar35 = auVar15 << 0x40;
        break;
      case 0xfffffffd:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar34 << 0x28;
        auVar35 = auVar16 << 0x40;
        break;
      case 0xfffffffe:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar34 << 0x30;
        auVar35 = auVar17 << 0x40;
        break;
      case 0xffffffff:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar34 << 0x38;
        auVar35 = auVar18 << 0x40;
      }
      auVar33 = auVar33 | auVar35;
LAB_7fffa50c9209:
      cVar1 = *param_1;
      while( true ) {
        if (cVar1 == '\0') {
          return (char *)0x0;
        }
        auVar24[0] = -(cVar1 == auVar33[0]);
        auVar24[1] = -(cVar1 == auVar33[1]);
        auVar24[2] = -(cVar1 == auVar33[2]);
        auVar24[3] = -(cVar1 == auVar33[3]);
        auVar24[4] = -(cVar1 == auVar33[4]);
        auVar24[5] = -(cVar1 == auVar33[5]);
        auVar24[6] = -(cVar1 == auVar33[6]);
        auVar24[7] = -(cVar1 == auVar33[7]);
        auVar24[8] = -(cVar1 == auVar33[8]);
        auVar24[9] = -(cVar1 == auVar33[9]);
        auVar24[10] = -(cVar1 == auVar33[10]);
        auVar24[0xb] = -(cVar1 == auVar33[0xb]);
        auVar24[0xc] = -(cVar1 == auVar33[0xc]);
        auVar24[0xd] = -(cVar1 == auVar33[0xd]);
        auVar24[0xe] = -(cVar1 == auVar33[0xe]);
        auVar24[0xf] = -(cVar1 == auVar33[0xf]);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
  pcVar19 = (char *)FUN_7fffa5588400(param_1,param_2);
  return pcVar19;
}


// ============================================================================
// Function : FUN_7fffa50c9318  |  RVA: 0x959318  |  Size: 71 bytes
// Callers  : FUN_7fffa52c4238@0xb54238
// Callees  : FUN_7fffa52c4078@0xb54078
// ============================================================================
void FUN_7fffa50c9318(uint16_t *param_1)

{
  uint64_t uVar1;
  uint32_t auStack_18 [4];
  
  auStack_18[0] = 0;
  uVar1 = FUN_7fffa52c4078(auStack_18);
  if (uVar1 < 5) {
    if (0xffff < auStack_18[0]) {
      auStack_18[0] = 0xfffd;
    }
    if (param_1 != (uint16_t *)0x0) {
      *param_1 = (short)auStack_18[0];
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa50c9360  |  RVA: 0x959360  |  Size: 815 bytes
// Callers  : FUN_7fffa507aca4@0x90aca4
// Callees  : FUN_7fffa549da04@0xd2da04, FUN_7fffa5251ea8@0xae1ea8, FUN_7fffa4fd1100@0x861100, FUN_7fffa51552c8@0x9e52c8, FUN_7fffa522496c@0xab496c, FUN_7fffa4eca5dc@0x75a5dc, FUN_7fffa5668bc0@0xef8bc0, FUN_7fffa54e57f4@0xd757f4
// ============================================================================
int FUN_7fffa50c9360(uint32_t param_1,short *param_2,uint32_t param_3,int64_t param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  short *psVar12;
  uint64_t uStack_70;
  int iStack_68;
  uint64_t uStack_60;
  uint32_t auStack_50 [4];
  
  iVar9 = 0;
  uVar11 = (uint64_t)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (short *)0x0) {
LAB_7fffa50c9390:
    *(uint8_t *)(param_4 + 0x38) = 1;
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 0x16;
    FUN_7fffa5668bc0(0,0,0,0,0,param_4);
    return -1;
  }
  uVar7 = (uint64_t)(param_1 & 0x3f);
  lVar10 = (int64_t)(int)param_1 >> 6;
  cVar1 = *(char *)(*(int64_t *)(&DAT_7fffa4782180 + lVar10 * 8) + 0x39 + uVar7 * 0x48);
  if (((uint8_t)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_7fffa50c9390;
  if ((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + lVar10 * 8) + 0x38 + uVar7 * 0x48) & 0x20) != 0)
  {
    FUN_7fffa549da04(param_1,0,2);
  }
  uStack_60 = 0;
  iVar5 = FUN_7fffa5251ea8();
  if ((iVar5 == 0) ||
     (-1 < *(char *)(*(int64_t *)(&DAT_7fffa4782180 + lVar10 * 8) + 0x38 + uVar7 * 0x48))) {
LAB_7fffa50c9548:
    if (-1 < *(char *)(*(int64_t *)(&DAT_7fffa4782180 + lVar10 * 8) + 0x38 +
                      (uint64_t)(param_1 & 0x3f) * 0x48)) {
      uStack_70 = 0;
      iStack_68 = 0;
      iVar5 = (*(code *)&DAT_7ff84ea57790)
                        (*(uint64_t *)
                          (*(int64_t *)(&DAT_7fffa4782180 + lVar10 * 8) + 0x28 +
                          (uint64_t)(param_1 & 0x3f) * 0x48),param_2,uVar11,
                         (int64_t)&uStack_70 + 4,0);
      iVar9 = iStack_68;
      uVar7 = uStack_70;
      if (iVar5 == 0) {
        uVar6 = (*(code *)&DAT_7ff84ea18640)();
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        iVar9 = iStack_68;
        uVar7 = uStack_70;
      }
      goto LAB_7fffa50c95fd;
    }
    if (cVar1 == '\0') {
      puVar8 = (uint64_t *)FUN_7fffa5427b18(&uStack_70,param_1,param_2,uVar11);
    }
    else if (cVar1 == '\x01') {
      puVar8 = (uint64_t *)FUN_7fffa51552c8(&uStack_70,param_1,param_2,uVar11);
    }
    else {
      uVar7 = uStack_60;
      if (cVar1 != '\x02') goto LAB_7fffa50c95fd;
      puVar8 = (uint64_t *)FUN_7fffa4eca5dc(&uStack_70,param_1,param_2,uVar11);
    }
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      FUN_7fffa4fd1100();
    }
    if ((*(int64_t *)(*(int64_t *)(param_4 + 0x18) + 0x138) == 0) &&
       (*(char *)(*(int64_t *)(&DAT_7fffa4782180 + lVar10 * 8) + 0x39 + uVar7 * 0x48) == '\0'))
    goto LAB_7fffa50c9548;
    auStack_50[0] = 0;
    iVar5 = (*(code *)&DAT_7ff84ea57af0)
                      (*(uint64_t *)
                        (*(int64_t *)(&DAT_7fffa4782180 + lVar10 * 8) + 0x28 + uVar7 * 0x48),
                       auStack_50);
    if (iVar5 == 0) goto LAB_7fffa50c9548;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar7 = uStack_60, cVar1 == '\x02')) {
        uStack_70 = 0;
        uVar7 = uStack_70;
        if (param_2 < (short *)((int64_t)param_2 + uVar11)) {
          uStack_70._4_4_ = 0;
          psVar12 = param_2;
          iVar5 = uStack_70._4_4_;
          do {
            sVar4 = *psVar12;
            sVar3 = FUN_7fffa54050b0(sVar4);
            if (sVar3 != sVar4) {
LAB_7fffa50c9510:
              uVar6 = (*(code *)&DAT_7ff84ea18640)();
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
              uVar7 = uStack_70;
              break;
            }
            uStack_70 = CONCAT44(iVar5 + 2,(uint32_t)uStack_70);
            iVar2 = iVar5 + 2;
            if (sVar4 == 10) {
              sVar4 = FUN_7fffa54050b0(0xd);
              if (sVar4 != 0xd) goto LAB_7fffa50c9510;
              uStack_70 = CONCAT44(iVar5 + 3,(uint32_t)uStack_70);
              iVar9 = iVar9 + 1;
              iVar2 = iVar5 + 3;
            }
            iVar5 = iVar2;
            psVar12 = psVar12 + 1;
            uVar7 = uStack_70;
          } while (psVar12 < (short *)((int64_t)param_2 + uVar11));
        }
      }
      goto LAB_7fffa50c95fd;
    }
    puVar8 = (uint64_t *)FUN_7fffa522496c(&uStack_70,param_1,param_2,uVar11,param_4);
  }
  iVar9 = (int)puVar8[1];
  uVar7 = *puVar8;
LAB_7fffa50c95fd:
  uStack_60 = uVar7;
  iVar5 = (int)(uStack_60 >> 0x20);
  if (iVar5 != 0) {
    return iVar5 - iVar9;
  }
  if ((int)uStack_60 != 0) {
    if ((int)uStack_60 == 5) {
      *(uint8_t *)(param_4 + 0x30) = 1;
      *(uint32_t *)(param_4 + 0x2c) = 9;
      *(uint8_t *)(param_4 + 0x38) = 1;
      *(uint32_t *)(param_4 + 0x34) = 5;
      return -1;
    }
    FUN_7fffa54e57f4(uStack_60 & 0xffffffff,param_4);
    return -1;
  }
  if (((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + lVar10 * 8) + 0x38 +
                 (uint64_t)(param_1 & 0x3f) * 0x48) & 0x40) == 0) || ((char)*param_2 != '\x1a')) {
    *(uint32_t *)(param_4 + 0x34) = 0;
    *(uint8_t *)(param_4 + 0x30) = 1;
    *(uint32_t *)(param_4 + 0x2c) = 0x1c;
    *(uint8_t *)(param_4 + 0x38) = 1;
    return -1;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa50c9690  |  RVA: 0x959690  |  Size: 46 bytes
// Callers  : FUN_7fffa5657040@0xee7040
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa50c976d) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9792) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9796) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c979c) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c97a0) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c984e) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9870) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9874) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c987a) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c987e) */

uint64_t *
FUN_7fffa50c9690(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                int64_t param_5)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  code *pcVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint8_t *puVar9;
  uint64_t unaff_RSI;
  uint64_t uVar10;
  uint8_t auStack_48 [8];
  uint8_t auStack_40 [24];
  
  uVar3 = param_1[2];
  uVar10 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar3 < param_2) {
    FUN_7fffa519a400();
    pcVar5 = (code *)__debugbreak();
    puVar7 = (uint64_t *)(*pcVar5)();
    return puVar7;
  }
  uVar4 = param_1[3];
  uVar8 = uVar3 + param_2 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    uVar2 = uVar4 + (uVar4 >> 1);
    uVar10 = uVar8;
    if (uVar8 < uVar2) {
      uVar10 = uVar2;
    }
    uVar2 = uVar10 + 1;
    if (uVar2 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar2) {
        uVar8 = uVar10 + 0x28;
        if (uVar8 <= uVar2) {
          FUN_7fffa5102fc0();
          pcVar5 = (code *)__debugbreak();
          puVar7 = (uint64_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_7fffa50c9733;
      }
      unaff_RSI = FUN_7fffa5225520(uVar2);
    }
LAB_7fffa50c975a:
    param_1[2] = uVar3 + param_2;
    lVar6 = uVar3 + unaff_RSI;
    param_1[3] = uVar10;
    if (uVar4 < 0x10) {
      FUN_7fffa56a5f20(unaff_RSI,param_1,uVar3);
      FUN_7fffa56a5f20(lVar6,param_4,param_5);
      *(uint8_t *)(lVar6 + param_5) = 0;
      goto LAB_7fffa50c9835;
    }
    uVar10 = *param_1;
    FUN_7fffa56a5f20(unaff_RSI,uVar10,uVar3);
    FUN_7fffa56a5f20(lVar6,param_4,param_5);
    puVar9 = auStack_48;
    *(uint8_t *)(lVar6 + param_5) = 0;
    if (0xfff < uVar4 + 1) {
      plVar1 = (int64_t *)(uVar10 - 8);
      uVar10 = (uVar10 - *plVar1) - 8;
      if (uVar10 < 0x20) {
        thunk_FUN_7fffa55eeda0(*plVar1,uVar4 + 0x28);
        goto LAB_7fffa50c9835;
      }
      goto LAB_7fffa50c9809;
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_7fffa50c9733:
    lVar6 = FUN_7fffa5225520(uVar8);
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(unaff_RSI - 8) = lVar6;
      goto LAB_7fffa50c975a;
    }
LAB_7fffa50c9809:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(uint64_t *)(puVar9 + -8) = 0x7fffa50c9818;
  thunk_FUN_7fffa55eeda0(uVar10);
LAB_7fffa50c9835:
  *param_1 = unaff_RSI;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa50c96be  |  RVA: 0x9596be  |  Size: 487 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5225520@0xab5520, _guard_check_icall@0xedc080, thunk_FUN_7fffa55eeda0@0x913000
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa50c976d) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9792) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9796) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c979c) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c97a0) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c984e) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9870) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c9874) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c987a) */
/* WARNING: Removing unreachable block (ram,0x7fffa50c987e) */

void FUN_7fffa50c96be(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  code *pcVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *unaff_RBX;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t unaff_R14;
  uint8_t auStackX_8 [24];
  int64_t in_stack_00000070;
  
  uVar3 = *(uint64_t *)(param_1 + 0x18);
  uVar6 = unaff_R14 + param_2 | 0xf;
  if ((unaff_RDI < uVar6) || (unaff_RDI - (uVar3 >> 1) < uVar3)) {
    uVar6 = 0x8000000000000027;
LAB_7fffa50c9733:
    lVar5 = FUN_7fffa5225520(uVar6);
    if (lVar5 != 0) {
      unaff_RSI = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(unaff_RSI - 8) = lVar5;
      goto LAB_7fffa50c975a;
    }
LAB_7fffa50c9809:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
  }
  else {
    uVar2 = uVar3 + (uVar3 >> 1);
    unaff_RDI = uVar6;
    if (uVar6 < uVar2) {
      unaff_RDI = uVar2;
    }
    uVar2 = unaff_RDI + 1;
    if (uVar2 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar2) {
        uVar6 = unaff_RDI + 0x28;
        if (uVar6 <= uVar2) {
          FUN_7fffa5102fc0();
          pcVar4 = (code *)__debugbreak();
          (*pcVar4)();
          return;
        }
        goto LAB_7fffa50c9733;
      }
      unaff_RSI = FUN_7fffa5225520(uVar2);
    }
LAB_7fffa50c975a:
    unaff_RBX[2] = unaff_R14 + param_2;
    lVar5 = unaff_R14 + unaff_RSI;
    unaff_RBX[3] = unaff_RDI;
    if (uVar3 < 0x10) {
      FUN_7fffa56a5f20(unaff_RSI);
      FUN_7fffa56a5f20(lVar5);
      *(uint8_t *)(lVar5 + in_stack_00000070) = 0;
      goto LAB_7fffa50c9835;
    }
    unaff_RDI = *unaff_RBX;
    FUN_7fffa56a5f20(unaff_RSI,unaff_RDI);
    FUN_7fffa56a5f20(lVar5);
    *(uint8_t *)(lVar5 + in_stack_00000070) = 0;
    if (0xfff < uVar3 + 1) {
      plVar1 = (int64_t *)(unaff_RDI - 8);
      unaff_RDI = (unaff_RDI - *plVar1) - 8;
      if (unaff_RDI < 0x20) {
        thunk_FUN_7fffa55eeda0(*plVar1,uVar3 + 0x28);
        goto LAB_7fffa50c9835;
      }
      goto LAB_7fffa50c9809;
    }
  }
  *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x7fffa50c9818;
  thunk_FUN_7fffa55eeda0(unaff_RDI);
LAB_7fffa50c9835:
  *unaff_RBX = unaff_RSI;
  return;
}


// ============================================================================
// Function : FUN_7fffa50c98a5  |  RVA: 0x9598a5  |  Size: 6 bytes
// Callers  : none
// Callees  : FUN_7fffa519a400@0xa2a400
// ============================================================================
void FUN_7fffa50c98a5(void)

{
  code *pcVar1;
  
  FUN_7fffa519a400();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa50c98ab  |  RVA: 0x9598ab  |  Size: 6 bytes
// Callers  : none
// Callees  : FUN_7fffa5102fc0@0x992fc0
// ============================================================================
void FUN_7fffa50c98ab(void)

{
  code *pcVar1;
  
  FUN_7fffa5102fc0();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa50c98c0  |  RVA: 0x9598c0  |  Size: 5237 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa50c991f) overlaps instruction at (ram,0x7fffa50c991d)
    */

void FUN_7fffa50c98c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint32_t *puVar2;
  uint8_t uVar3;
  uint8_t bVar4;
  uint8_t uVar5;
  code *pcVar6;
  uint8_t bVar7;
  uint16_t uVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [13];
  uint8_t auVar12 [13];
  uint8_t auVar13 [13];
  uint8_t auVar14 [13];
  uint8_t auVar15 [13];
  uint8_t auVar16 [13];
  uint8_t auVar17 [13];
  uint8_t auVar18 [13];
  uint8_t auVar19 [13];
  uint8_t auVar20 [13];
  uint8_t auVar21 [13];
  uint8_t auVar22 [13];
  uint8_t auVar23 [15];
  uint8_t auVar24 [15];
  uint8_t auVar25 [15];
  uint8_t auVar26 [15];
  uint8_t auVar27 [15];
  uint8_t auVar28 [15];
  uint8_t auVar29 [15];
  uint8_t auVar30 [15];
  uint8_t auVar31 [13];
  uint8_t auVar32 [13];
  uint8_t auVar33 [13];
  uint8_t auVar34 [13];
  uint8_t auVar35 [11];
  uint8_t auVar36 [11];
  uint32_t uVar37;
  uint64_t in_RAX;
  uint32_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  int64_t lVar42;
  uint32_t uVar43;
  uint32_t uVar44;
  uint32_t uVar45;
  uint32_t uVar46;
  uint32_t uVar47;
  int64_t lVar48;
  int64_t *plVar49;
  uint8_t *puVar50;
  uint8_t *puVar51;
  uint32_t uVar52;
  uint64_t uVar53;
  uint64_t *puVar54;
  uint32_t uVar55;
  uint32_t uVar56;
  uint64_t uVar57;
  int64_t *plVar58;
  uint32_t uVar59;
  uint32_t uVar60;
  uint32_t uVar61;
  uint32_t uVar62;
  int iVar63;
  bool bVar64;
  uint8_t auVar65 [16];
  uint8_t auVar66 [16];
  uint8_t auVar67 [16];
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint32_t uStack_1c8;
  uint8_t *puStack_1a8;
  int64_t *plStack_170;
  uint32_t auStack_148 [66];
  
  uVar61 = (uint32_t)param_4;
  param_2 = param_2 ^ 0xffffffffb080e348;
  uVar39 = (in_RAX << 3 | in_RAX >> 0x3d) ^ (in_RAX << 0x3c | in_RAX >> 4) ^ in_RAX;
  uVar39 = (uVar39 << 0x38 | uVar39 >> 8) ^ (uVar39 << 6 | uVar39 >> 0x3a) ^ uVar39;
  uVar39 = (uVar39 << 0x30 | uVar39 >> 0x10) ^ (uVar39 << 0xc | uVar39 >> 0x34) ^ uVar39;
  uVar39 = (uVar39 << 0x20 | uVar39 >> 0x20) ^ (uVar39 << 0x18 | uVar39 >> 0x28) ^ uVar39;
  param_2 = (param_2 << 0x15 | param_2 >> 0x2b) ^ (param_2 << 0xc | param_2 >> 0x34) ^ param_2;
  bVar7 = (uint8_t)param_4;
  uVar39 = (uVar39 << 0x16 | uVar39 >> 0x2a) ^ (uVar39 << 0x29 | uVar39 >> 0x17) ^
           (uVar39 << 0x10 | uVar39 >> 0x30);
  uVar39 = (uVar39 << 0xc | uVar39 >> 0x34) ^ (uVar39 << 0x32 | uVar39 >> 0xe) ^ uVar39;
  uVar39 = (uVar39 << 0x18 | uVar39 >> 0x28) ^ (uVar39 << 0x24 | uVar39 >> 0x1c) ^ uVar39;
  uVar39 = (uVar39 << 8 | uVar39 >> 0x38) ^ (uVar39 << 0x30 | uVar39 >> 0x10) ^ uVar39;
  uVar39 = (uVar39 << 0x20 | uVar39 >> 0x20) ^ (uVar39 << 0x10 | uVar39 >> 0x30) ^ uVar39;
  uVar57 = uVar39 << 10 | uVar39 >> 0x36;
  uVar39 = (uVar39 << 0x20 | uVar39 >> 0x20) ^ (uVar39 << 4 | uVar39 >> 0x3c);
  uVar40 = uVar57 ^ uVar39;
  if (uVar61 != 0x4c560fa5) {
    uVar40 = uVar39 - uVar57;
  }
  param_2 = (param_2 << 0x2a | param_2 >> 0x16) ^ (param_2 << 0x18 | param_2 >> 0x28) ^ param_2;
  param_2 = (param_2 << 0x14 | param_2 >> 0x2c) ^ (param_2 << 0x30 | param_2 >> 0x10) ^ param_2;
  param_2 = (param_2 << 0x20 | param_2 >> 0x20) ^ (param_2 << 0x28 | param_2 >> 0x18) ^ param_2;
  uVar39 = (param_2 << 0x3a | param_2 >> 6) ^ (param_2 << 5 | param_2 >> 0x3b) ^
           (param_2 << 0x30 | param_2 >> 0x10);
  uVar39 = (uVar39 << 0x14 | uVar39 >> 0x2c) ^ (uVar39 << 0x2a | uVar39 >> 0x16) ^ uVar39;
  uVar39 = (uVar39 << 0x28 | uVar39 >> 0x18) ^ (uVar39 << 0x14 | uVar39 >> 0x2c) ^ uVar39;
  uVar57 = (uVar39 << 0x10 | uVar39 >> 0x30) ^ uVar39;
  uVar53 = uVar39 << 0x28 | uVar39 >> 0x18;
  uVar40 = (uVar40 << 8 | uVar40 >> 0x38) ^ (uVar40 << 0x14 | uVar40 >> 0x2c) ^ uVar40;
  uVar40 = (uVar40 << 0x10 | uVar40 >> 0x30) ^ (uVar40 << 0x28 | uVar40 >> 0x18) ^ uVar40;
  uVar40 = (uVar40 << 0x20 | uVar40 >> 0x20) ^ (uVar40 << 0x10 | uVar40 >> 0x30) ^ uVar40;
  plVar58 = (int64_t *)(uVar40 << 0x20 | uVar40 >> 0x20);
  uVar39 = uVar57 ^ uVar53;
  if ((uint64_t)
      ((-0x1adfeba << (bVar7 & 0x1f) | 0xfe520146U >> 0x20 - (bVar7 & 0x1f)) + 0x232a6486) ==
      0xfffffffff63bc75b) {
    uVar39 = uVar53 & uVar57;
  }
  uVar39 = (uVar39 << 0x20 | uVar39 >> 0x20) ^ (uVar39 << 0x10 | uVar39 >> 0x30) ^ uVar39;
  puVar54 = (uint64_t *)(uVar39 << 0x20 | uVar39 >> 0x20);
  auStack_148[0] = 0xddbb06bb;
  puStack_1a8 = (uint8_t *)*puVar54;
  uVar39 = puVar54[1];
  uVar8 = (uint16_t)param_4;
  if (uVar39 == 0) {
    plVar49 = (int64_t *)plVar58[1];
    lVar48 = plVar49[2];
    uVar40 = plVar49[3];
    uVar39 = 0;
  }
  else {
    lVar48 = *plVar58;
    uVar38 = *(uint32_t *)(lVar48 + 0x40);
    uVar40 = 0;
    do {
      *(uint8_t *)(lVar48 + (uint64_t)uVar38) = puStack_1a8[uVar40];
      uVar38 = *(int *)(lVar48 + 0x40) + 1;
      *(uint32_t *)(lVar48 + 0x40) = uVar38;
      if (0x1d03d481 - uVar61 == (uVar38 * 0x10000000 | uVar38 >> 4) * (uVar61 + 0xa7d56192)) {
        uVar57 = 0;
        while( true ) {
          uVar38 = (uVar61 + 0xf699e977) * 0x6af24b77;
          if (~(uint64_t)uVar38 * 0x25b0f240295fc4f7 == 0x2edb6243b121272d) {
            uVar38 = ~(uVar38 + 0x46fec8de);
            uVar53 = (uint64_t)(uVar38 << 0x11 | uVar38 >> 0xf);
          }
          else {
            uVar53 = 0x52822848;
          }
          uVar3 = *(uint8_t *)(lVar48 + 6 + uVar57);
          bVar4 = *(uint8_t *)(lVar48 + 5 + uVar57);
          uVar5 = *(uint8_t *)(lVar48 + 7 + uVar57);
          auVar24._12_2_ = 0;
          auVar24._0_12_ = SUB1612((uint8_t  [16])0x0,0);
          auVar24[0xe] = *(uint8_t *)(lVar48 + 0xd + uVar57);
          auVar26[10] = *(uint8_t *)(lVar48 + 9 + uVar57);
          auVar26._0_10_ = SUB1610((uint8_t  [16])0x0,0);
          auVar26[0xb] = 0;
          auVar26._12_3_ = auVar24._12_3_;
          auVar28._10_5_ = auVar26._10_5_;
          auVar28._0_10_ = (unkuint10)0;
          auVar30._8_7_ = auVar28._8_7_;
          auVar30._0_8_ = (uint64_t)bVar4 << 0x30;
          auVar35._9_2_ = 0;
          auVar35._0_9_ = auVar30._6_9_;
          auVar65._0_4_ = (CONCAT11(bVar4,*(uint8_t *)(lVar48 + 1 + uVar57)) & 0xff) << 0x10;
          auVar65._4_11_ = auVar35 << 0x10;
          auVar65[0xf] = 0;
          auVar11[0xc] = *(uint8_t *)(lVar48 + 0xe + uVar57);
          auVar11._0_12_ = ZEXT812(0);
          auVar12._10_3_ = auVar11._10_3_;
          auVar12._0_10_ = (unkuint10)*(uint8_t *)(lVar48 + (uVar57 | 10)) << 0x40;
          auVar31._5_8_ = 0;
          auVar31._0_5_ = auVar12._8_5_;
          uVar38 = CONCAT13(0,CONCAT12(uVar3,(uint16_t)*(uint8_t *)(lVar48 + 2 + uVar57)));
          auVar13[4] = uVar3;
          auVar13._0_4_ = uVar38;
          auVar13[5] = 0;
          auVar13._6_7_ = SUB137(auVar31 << 0x40,6);
          auVar67._0_4_ = (uVar38 & 0xffff) << 8;
          auVar67._4_4_ = auVar13._4_4_ << 8;
          auVar67._8_4_ = auVar12._8_4_ << 8;
          auVar67._12_4_ = (uint32_t)(uint3)(auVar11._10_3_ >> 0x10) << 8;
          auVar9._1_4_ = (uint32_t)*(uint8_t *)(lVar48 + 4 + uVar57) << 0x18;
          auVar9[0] = *(uint8_t *)(lVar48 + uVar57);
          auVar9._5_4_ = (uint32_t)*(uint8_t *)(lVar48 + 8 + uVar57) << 0x18;
          auVar9._9_4_ = (uint32_t)*(uint8_t *)(lVar48 + 0xc + uVar57) << 0x18;
          auVar9._13_3_ = 0;
          auVar14[0xc] = *(uint8_t *)(lVar48 + 0xf + uVar57);
          auVar14._0_12_ = ZEXT812(0);
          auVar15._10_3_ = auVar14._10_3_;
          auVar15._0_10_ = (unkuint10)*(uint8_t *)(lVar48 + (uVar57 | 0xb)) << 0x40;
          auVar32._5_8_ = 0;
          auVar32._0_5_ = auVar15._8_5_;
          uVar38 = CONCAT13(0,CONCAT12(uVar5,(uint16_t)*(uint8_t *)(lVar48 + 3 + uVar57)));
          auVar16[4] = uVar5;
          auVar16._0_4_ = uVar38;
          auVar16[5] = 0;
          auVar16._6_7_ = SUB137(auVar32 << 0x40,6);
          auVar69._0_4_ = uVar38 & 0xffff;
          auVar69._4_9_ = auVar16._4_9_;
          auVar69._13_3_ = 0;
          *(uint8_t (*) [16])((int64_t)auStack_148 + uVar57) =
               auVar69 | auVar67 | auVar9 << 0x18 | auVar65;
          if (uVar57 == 0x30) break;
          uVar57 = uVar57 + 0x10;
        }
        uVar57 = 0x10;
        uVar59 = (uint32_t)uVar53;
        uVar38 = auStack_148[0];
        while( true ) {
          uVar55 = (uVar61 - uVar59) + 0xb328f678;
          uVar41 = ((param_4 | 1) * 0x1810ca03a6360dcd + uVar53) * (int64_t)(int)uVar55;
          if ((uVar53 | 1) * -0x48acd7fa9fb5173e - param_4 ==
              (uVar41 * 0x8000000 | uVar41 >> 0x25) - 0x43eaa394) {
            bVar64 = uVar57 == 0x3f;
            uVar37 = (uVar61 ^ 0xa56815a) + 0xe5de1132;
            bVar4 = (uint8_t)uVar53 & 0x1f;
            uVar37 = ~((uVar55 | 1) * (uVar37 << bVar4 | uVar37 >> 0x20 - bVar4));
            uVar44 = ((uVar61 + 0x5e7eb7a1) * 0x10000 | uVar61 + 0x5e7eb7a1 >> 0x10) ^ uVar55;
            uStack_1c8 = uVar59 | 1;
            bVar4 = (uint8_t)uVar53 & 0x1f;
            if ((uVar44 << bVar4 | uVar44 >> 0x20 - bVar4) == 0xbe8b5e1b) {
              bVar64 = 0x3f < uVar57;
            }
            uVar44 = auStack_148[uVar57 - 2];
            bVar4 = (uint8_t)uVar55 & 0x1f;
            uVar55 = (uVar44 << 0xd | uVar44 >> 0x13) ^ (uVar44 << 0xf | uVar44 >> 0x11) ^
                     uVar44 >> 10;
            uVar41 = uVar57 & 0x3ffffffffffffff1;
            if ((uStack_1c8 * -0x49605b31 >> bVar4 | uStack_1c8 * -0x49605b31 << 0x20 - bVar4) *
                (uVar61 | 1) < ~((uVar61 + 0x23a85501 ^ 0x28e778) * (uVar59 | 1))) {
              uVar41 = uVar57 - 0xf;
            }
            uVar44 = auStack_148[uVar41];
            uVar52 = uVar44 << 0xe | uVar44 >> 0x12;
            uVar45 = uVar44 << 0x19 | uVar44 >> 7;
          }
          else {
            bVar64 = uVar57 == 0x3f;
            uVar44 = auStack_148[uVar57 - 0xf];
            uVar55 = auStack_148[uVar57 - 2];
            uVar45 = uVar44 << 0x19 | uVar44 >> 7;
            uVar52 = uVar44 << 0xe | uVar44 >> 0x12;
            uVar55 = (uVar55 << 0xf | uVar55 >> 0x11) ^ (uVar55 << 0xd | uVar55 >> 0x13) ^
                     uVar55 >> 10;
            uVar37 = ((uVar59 ^ 0xaa0bddc5) << 5 | (uVar59 ^ 0xaa0bddc5) >> 0x1b) + uVar61 ^
                     0x6f30f626;
          }
          uVar46 = uVar45 ^ uVar52 | uVar44 >> 3;
          if ((uint64_t)(((uVar61 ^ 0xcf844f32) - uVar59) * 0x1d4eae3b) <=
              (uint64_t)(int64_t)(int)(((uVar59 ^ 0x2073fc4a) + 0xa27fbb8c) * (uVar61 | 1))) {
            uVar46 = uVar44 >> 3 ^ uVar45 ^ uVar52;
          }
          auStack_148[uVar57] = uVar38 + uVar55 + auStack_148[uVar57 - 7] + uVar46;
          if (bVar64) break;
          uVar57 = uVar57 + 1;
          uVar38 = uVar44;
        }
        uVar38 = *(uint32_t *)(lVar48 + 0x54);
        lVar42 = 0;
        uVar44 = *(uint32_t *)(lVar48 + 0x60);
        uVar45 = *(uint32_t *)(lVar48 + 0x58);
        uVar52 = *(uint32_t *)(lVar48 + 0x50);
        uVar46 = uVar38;
        uVar43 = *(uint32_t *)(lVar48 + 0x5c);
        uVar56 = *(uint32_t *)(lVar48 + 100);
        uVar59 = *(uint32_t *)(lVar48 + 0x6c);
        uVar55 = *(uint32_t *)(lVar48 + 0x68);
        while( true ) {
          uVar60 = uVar56;
          uVar62 = uVar52;
          uVar47 = uVar45;
          uVar56 = uVar44;
          iVar63 = ((uVar60 ^ uVar55) & uVar56 ^ uVar55) + uVar59 +
                   ((uVar56 << 0x1a | uVar56 >> 6) ^ (uVar56 << 0x15 | uVar56 >> 0xb) ^
                   (uVar56 << 7 | uVar56 >> 0x19)) + auStack_148[lVar42] +
                   *(int *)(&UNK_7fffa578b732 +
                           lVar42 * 4 +
                           (int64_t)(int)(((uVar37 - uVar61) + -0x35960db8) * -0x754be6b));
          uVar44 = uVar43 + iVar63;
          uVar52 = iVar63 + ((uVar47 ^ uVar46) & uVar62 ^ uVar47 & uVar46) +
                            ((uVar62 << 0x1e | uVar62 >> 2) ^ (uVar62 << 0x13 | uVar62 >> 0xd) ^
                            (uVar62 << 10 | uVar62 >> 0x16));
          if (lVar42 == 0x3f) break;
          lVar42 = lVar42 + 1;
          uVar45 = uVar46;
          uVar46 = uVar62;
          uVar43 = uVar47;
          uVar59 = uVar55;
          uVar55 = uVar60;
        }
        *(uint32_t *)(lVar48 + 0x60) = *(uint32_t *)(lVar48 + 0x60) + uVar44;
        *(uint32_t *)(lVar48 + 0x5c) = *(uint32_t *)(lVar48 + 0x5c) + uVar47;
        *(uint32_t *)(lVar48 + 100) = *(uint32_t *)(lVar48 + 100) + uVar56;
        *(uint32_t *)(lVar48 + 0x68) = uVar60 + *(uint32_t *)(lVar48 + 0x68);
        *(uint32_t *)(lVar48 + 0x58) = uVar46 + *(uint32_t *)(lVar48 + 0x58);
        *(uint32_t *)(lVar48 + 0x50) = *(uint32_t *)(lVar48 + 0x50) + uVar52;
        uVar44 = (uVar37 ^ 0xe65ae57a) << (bVar7 & 0x1f) |
                 (uVar37 ^ 0xe65ae57a) >> 0x20 - (bVar7 & 0x1f);
        *(uint32_t *)(lVar48 + 0x6c) = uVar55 + *(uint32_t *)(lVar48 + 0x6c);
        uVar59 = uVar38 + uVar62;
        if ((int)(uVar44 << 0xd | uVar44 >> 0x13) <
            (int)(((uVar37 + 0x54c8dcca) * 8 | uVar37 + 0x54c8dcca >> 0x1d) * (uVar61 | 1))) {
          uVar59 = uVar62 ^ uVar38;
        }
        *(uint32_t *)(lVar48 + 0x54) = uVar59;
        *(uint32_t *)(lVar48 + 0x40) = 0;
        *(int64_t *)(lVar48 + 0x48) = *(int64_t *)(lVar48 + 0x48) + 0x200;
        uVar38 = 0;
      }
      uVar59 = (uint32_t)uVar40 + 1;
      if ((0x985616b3 - uVar61 ^ 0x6193b384) + 0x231ce3a7 <= (uVar61 ^ 0xf587074c) + 0x6a0c11b5) {
        uVar59 = (uint32_t)uVar40 | 1;
      }
      uVar40 = (uint64_t)uVar59;
    } while (uVar40 < uVar39);
    puStack_1a8 = (uint8_t *)*puVar54;
    uVar39 = puVar54[1];
    plVar49 = (int64_t *)plVar58[1];
    lVar48 = plVar49[2];
    uVar40 = plVar49[3];
    if (uVar40 - lVar48 < uVar39) {
      uVar57 = 0x7fffffffffffffff;
      lVar42 = -lVar48;
      if ((int)(~(uVar61 + 0x497b532c) * -0x3eaa228f) <= (int)(-0xf67476e - uVar61)) {
        lVar42 = lVar48;
      }
      if (lVar42 + 0x7fffffffffffffffU < uVar39) {
        (*(code *)(&UNK_7fffa519b617 + (short)((uVar8 | 1) * 0x11f5)))();
        return;
      }
      uVar53 = uVar39 + lVar48;
      if ((-1 < (int64_t)uVar53) && (uVar40 <= (uVar40 >> 1 ^ 0x7fffffffffffffff))) {
        uVar57 = (uVar40 >> 1) + uVar40;
        if (uVar57 < (uVar53 | 0xf)) {
          uVar57 = uVar53 | 0xf;
        }
      }
      uVar41 = (uint64_t)(uVar61 + 0x7a207f69);
      (*(code *)((int64_t)(short)(uVar8 ^ 0xd8b1) + 0x7fffa526d39c))
                (uVar41,&IMAGE_DOS_HEADER_7fffa4770000,(int64_t)(short)(uVar8 ^ 0xd8b1),
                 uVar57 + 1 << 0x3c ^ uVar57 + 1);
      lVar42 = (uVar41 << 0x2c | uVar41 >> 0x14) - ((uVar41 >> 0x14) << 0x36);
      plVar49[3] = uVar57;
      plVar49[2] = uVar53;
      if (uVar40 < 0x10) {
        FUN_7fffa56a5f20(lVar42,plVar49,lVar48);
        FUN_7fffa56a5f20(lVar42 + lVar48,puStack_1a8,uVar39);
        *(uint8_t *)(uVar39 + lVar42 + lVar48) = *(uint8_t *)((int64_t)plVar49 + lVar48);
      }
      else {
        lVar1 = *plVar49;
        FUN_7fffa56a5f20(lVar42,lVar1,lVar48);
        FUN_7fffa56a5f20(lVar42 + lVar48,puStack_1a8,uVar39);
        *(uint8_t *)(uVar39 + lVar42 + lVar48) = *(uint8_t *)(lVar1 + lVar48);
        (*(code *)((int64_t)(short)((uVar8 ^ 0x7980) + 0x1c26) + 0x7fffa568e9e5))();
      }
      *plVar49 = lVar42;
      goto LAB_7fffa50ca576;
    }
  }
  plVar49[2] = lVar48 + uVar39;
  bVar64 = 0xf < uVar40;
  if ((uVar61 | 1) * -0xecf9e7a < 0x472a8d9) {
    bVar64 = ((0x9652 - uVar61 ^ 0x86a2) & 0xffff) <= uVar40;
  }
  if (bVar64) {
    plVar49 = (int64_t *)*plVar49;
  }
  puVar50 = (uint8_t *)((int64_t)plVar49 + lVar48);
  uVar40 = uVar39;
  if (((puStack_1a8 <= puVar50) && (puVar50 < puStack_1a8 + uVar39)) &&
     (uVar40 = (int64_t)puVar50 - (int64_t)puStack_1a8, puVar50 < puStack_1a8 || uVar40 == 0)) {
    uVar40 = 0;
  }
  puVar50[uVar39] = *puVar50;
  FUN_7fffa56a5f20(puVar50,puStack_1a8,uVar40);
  FUN_7fffa56a5f20(puVar50 + uVar40,puStack_1a8 + uVar39 + uVar40,uVar39 - uVar40);
LAB_7fffa50ca576:
  plStack_170 = plVar58 + 1;
  puVar50 = (uint8_t *)puVar54[2];
  uVar39 = puVar54[3];
  if (uVar39 == 0) {
    plStack_170 = (int64_t *)*plStack_170;
    lVar48 = plStack_170[2];
    uVar40 = plStack_170[3];
    uVar39 = 0;
  }
  else {
    lVar48 = *plVar58;
    uVar38 = *(uint32_t *)(lVar48 + 0x40);
    uVar40 = 0;
    uStack_1c8 = uVar61 | 1;
    do {
      *(uint8_t *)(lVar48 + (uint64_t)uVar38) = puVar50[uVar40];
      uVar38 = *(int *)(lVar48 + 0x40) + 1;
      *(uint32_t *)(lVar48 + 0x40) = uVar38;
      if (uVar38 == 0x40) {
        uVar53 = 0;
        uVar57 = 0;
        while( true ) {
          uVar41 = uVar53;
          if ((int64_t)
              (0x21b2000010000U >> (bVar7 & 0x3f) | 0x21b2000010000 << 0x40 - (bVar7 & 0x3f)) <=
              (int64_t)(int)(0xcdd8c414U >> (bVar7 & 0x1f) | -0x32273bec << 0x20 - (bVar7 & 0x1f)))
          {
            uVar41 = uVar57;
          }
          uVar3 = *(uint8_t *)(lVar48 + 6 + uVar41);
          uVar5 = *(uint8_t *)(lVar48 + 7 + uVar41);
          bVar4 = *(uint8_t *)(lVar48 + 5 + uVar41);
          auVar17[0xc] = *(uint8_t *)(lVar48 + 0xf + uVar41);
          auVar17._0_12_ = ZEXT812(0);
          auVar18._10_3_ = auVar17._10_3_;
          auVar18._0_10_ = (unkuint10)*(uint8_t *)(lVar48 + 0xb + uVar41) << 0x40;
          auVar33._5_8_ = 0;
          auVar33._0_5_ = auVar18._8_5_;
          uVar38 = CONCAT13(0,CONCAT12(uVar5,(uint16_t)*(uint8_t *)(lVar48 + 3 + uVar41)));
          auVar19[4] = uVar5;
          auVar19._0_4_ = uVar38;
          auVar19[5] = 0;
          auVar19._6_7_ = SUB137(auVar33 << 0x40,6);
          auVar68._0_4_ = uVar38 & 0xffff;
          auVar68._4_9_ = auVar19._4_9_;
          auVar68._13_3_ = 0;
          auVar20[0xc] = *(uint8_t *)(lVar48 + 0xe + uVar41);
          auVar20._0_12_ = ZEXT812(0);
          auVar21._10_3_ = auVar20._10_3_;
          auVar21._0_10_ = (unkuint10)*(uint8_t *)(lVar48 + 10 + uVar41) << 0x40;
          auVar34._5_8_ = 0;
          auVar34._0_5_ = auVar21._8_5_;
          uVar38 = CONCAT13(0,CONCAT12(uVar3,(uint16_t)*(uint8_t *)(lVar48 + 2 + uVar41)));
          auVar22[4] = uVar3;
          auVar22._0_4_ = uVar38;
          auVar22[5] = 0;
          auVar22._6_7_ = SUB137(auVar34 << 0x40,6);
          auVar66._0_4_ = (uVar38 & 0xffff) << 8;
          auVar66._4_4_ = auVar22._4_4_ << 8;
          auVar66._8_4_ = auVar21._8_4_ << 8;
          auVar66._12_4_ = (uint32_t)(uint3)(auVar20._10_3_ >> 0x10) << 8;
          auVar23._12_2_ = 0;
          auVar23._0_12_ = SUB1612((uint8_t  [16])0x0,0);
          auVar23[0xe] = *(uint8_t *)(lVar48 + 0xd + uVar41);
          auVar25[10] = *(uint8_t *)(lVar48 + 9 + uVar41);
          auVar25._0_10_ = SUB1610((uint8_t  [16])0x0,0);
          auVar25[0xb] = 0;
          auVar25._12_3_ = auVar23._12_3_;
          auVar27._10_5_ = auVar25._10_5_;
          auVar27._0_10_ = (unkuint10)0;
          auVar29._8_7_ = auVar27._8_7_;
          auVar29._0_8_ = (uint64_t)bVar4 << 0x30;
          auVar36._9_2_ = 0;
          auVar36._0_9_ = auVar29._6_9_;
          auVar70._0_4_ = (CONCAT11(bVar4,*(uint8_t *)(lVar48 + (uVar41 | 1))) & 0xff) << 0x10;
          auVar70._4_11_ = auVar36 << 0x10;
          auVar70[0xf] = 0;
          auVar10._1_4_ = (uint32_t)*(uint8_t *)(lVar48 + 4 + uVar41) << 0x18;
          auVar10[0] = *(uint8_t *)(lVar48 + uVar41);
          auVar10._5_4_ = (uint32_t)*(uint8_t *)(lVar48 + 8 + uVar41) << 0x18;
          auVar10._9_4_ = (uint32_t)*(uint8_t *)(lVar48 + 0xc + uVar41) << 0x18;
          auVar10._13_3_ = 0;
          *(uint8_t (*) [16])((int64_t)auStack_148 + uVar53) =
               auVar10 << 0x18 | auVar70 | auVar66 | auVar68;
          if (uVar53 == 0x30) break;
          uVar57 = uVar57 + 1;
          uVar53 = uVar53 + 0x10;
        }
        lVar42 = 0x10;
        uVar38 = auStack_148[0];
        do {
          iVar63 = uVar38 + auStack_148[lVar42 + -7];
          uVar38 = auStack_148[lVar42 + -0xf];
          uVar59 = auStack_148[lVar42 + -2];
          uVar55 = uVar38 + 3;
          if (uVar61 == 0x4c560fa5) {
            uVar55 = uVar38 >> 3;
          }
          auStack_148[lVar42] =
               (uVar55 ^ (uVar38 << 0x19 | uVar38 >> 7) ^ (uVar38 << 0xe | uVar38 >> 0x12)) +
               ((uVar59 << 0xd | uVar59 >> 0x13) ^ (uVar59 << 0xf | uVar59 >> 0x11) ^ uVar59 >> 10)
               + iVar63;
          lVar42 = lVar42 + 1;
        } while (lVar42 != 0x40);
        lVar42 = 0;
        uVar59 = *(uint32_t *)(lVar48 + 0x58);
        uVar55 = *(uint32_t *)(lVar48 + 0x60);
        uVar37 = *(uint32_t *)(lVar48 + 0x68);
        uVar44 = *(uint32_t *)(lVar48 + 0x50);
        uVar45 = *(uint32_t *)(lVar48 + 0x54);
        uVar52 = *(uint32_t *)(lVar48 + 0x6c);
        uVar46 = *(uint32_t *)(lVar48 + 100);
        uVar38 = *(uint32_t *)(lVar48 + 0x5c);
        do {
          uVar60 = uVar46;
          uVar56 = uVar45;
          uVar45 = uVar44;
          uVar47 = uVar37;
          uVar46 = uVar55;
          uVar43 = uVar59;
          puVar2 = auStack_148 + lVar42;
          uVar57 = lVar42 - 0x1fd9e711;
          lVar1 = lVar42 * 4;
          uVar55 = (uVar60 ^ uVar47) & uVar46 ^ uVar47;
          uVar52 = ((uVar46 << 7 | uVar46 >> 0x19) ^
                   (uVar46 << 0x1a | uVar46 >> 6) ^ (uVar46 << 0x15 | uVar46 >> 0xb)) + uVar52;
          lVar42 = lVar42 + 1;
          uVar59 = uVar52 + uVar55;
          if (uVar61 != 0x4c560fa5) {
            uVar59 = uVar55 ^ uVar52;
          }
          iVar63 = uVar59 + *puVar2 + *(int *)(&UNK_7fffa578f114 +
                                              lVar1 + (int)(uStack_1c8 * -0xb400000 |
                                                           uStack_1c8 * -0x41981c2d >> 10));
          uVar55 = uVar38 + iVar63;
          uVar44 = (uVar43 & uVar56 ^ (uVar56 ^ uVar43) & uVar45) +
                   ((uVar45 << 0x13 | uVar45 >> 0xd) ^ (uVar45 << 0x1e | uVar45 >> 2) ^
                   (uVar45 << 10 | uVar45 >> 0x16)) + iVar63;
          uVar59 = uVar56;
          uVar37 = uVar60;
          uVar52 = uVar47;
          uVar38 = uVar43;
        } while ((uVar57 << 0x37 | uVar57 >> 9) != 0x977ffffffff0130c);
        *(uint32_t *)(lVar48 + 0x68) = uVar60 + *(uint32_t *)(lVar48 + 0x68);
        *(uint32_t *)(lVar48 + 0x6c) = *(uint32_t *)(lVar48 + 0x6c) + uVar47;
        *(uint32_t *)(lVar48 + 0x5c) = uVar43 + *(uint32_t *)(lVar48 + 0x5c);
        *(uint32_t *)(lVar48 + 0x58) = *(uint32_t *)(lVar48 + 0x58) + uVar56;
        *(uint32_t *)(lVar48 + 100) = uVar46 + *(uint32_t *)(lVar48 + 100);
        *(uint32_t *)(lVar48 + 0x50) = uVar44 + *(uint32_t *)(lVar48 + 0x50);
        *(uint32_t *)(lVar48 + 0x54) = uVar45 + *(uint32_t *)(lVar48 + 0x54);
        *(uint32_t *)(lVar48 + 0x60) = *(uint32_t *)(lVar48 + 0x60) + uVar55;
        uVar57 = (uint64_t)((uint32_t)*(int64_t *)(lVar48 + 0x48) & 0x200);
        if (~(((uint32_t)lVar42 ^ 0x5d1dc7f4) * -0x1d5a9d7d) <=
            (0xe24efe2dU >> (bVar7 & 0x1f) | -0x1db101d3 << 0x20 - (bVar7 & 0x1f))) {
          uVar57 = *(int64_t *)(lVar48 + 0x48) + 0x200;
        }
        *(uint32_t *)(lVar48 + 0x40) = 0;
        *(uint64_t *)(lVar48 + 0x48) = uVar57;
        uVar38 = 0;
      }
      uVar40 = (uint64_t)((int)uVar40 + 1);
    } while (uVar40 < uVar39);
    puVar50 = (uint8_t *)puVar54[2];
    uVar39 = puVar54[3];
    plStack_170 = (int64_t *)*plStack_170;
    lVar48 = plStack_170[2];
    uVar40 = plStack_170[3];
    if (uVar40 - lVar48 < uVar39) {
      if (0x7fffffffffffffffU - lVar48 < uVar39) {
        (*(code *)((int64_t)(int)(0x4c554f7d - uVar61) + 0x7fffa51a6428))
                  (&IMAGE_DOS_HEADER_7fffa4770000,puVar50,0x4c554f7d - uVar61,0);
        pcVar6 = (code *)__debugbreak();
        (*pcVar6)();
        return;
      }
      uVar53 = uVar39 + lVar48;
      uVar57 = 0x7fffffffffffffff;
      if ((-1 < (int64_t)uVar53) && (uVar40 <= (uVar40 >> 1 ^ 0x7fffffffffffffff))) {
        uVar41 = (uVar40 >> 1) + uVar40;
        uVar57 = uVar53 | 0xf;
        if ((uVar53 | 0xf) <= uVar41) {
          uVar57 = uVar41;
        }
      }
      uVar41 = (uint64_t)(0x12cc9eb3 - uVar61);
      (*(code *)((int64_t)(short)((uVar8 + 0x3ff6) * 0x20 | (uint16_t)(uVar8 + 0x3ff6) >> 0xb) +
                0x7fffa526b747))();
      lVar42 = (uVar41 << 0x2c | uVar41 >> 0x14) - ((uVar41 >> 0x14) << 0x36);
      plStack_170[2] = uVar53;
      plStack_170[3] = uVar57;
      if (uVar40 < 0x10) {
        FUN_7fffa56a5f20(lVar42,plStack_170,lVar48);
        FUN_7fffa56a5f20(lVar42 + lVar48,puVar50,uVar39);
        *(uint8_t *)(uVar39 + lVar42 + lVar48) = *(uint8_t *)((int64_t)plStack_170 + lVar48);
      }
      else {
        lVar1 = *plStack_170;
        FUN_7fffa56a5f20(lVar42,lVar1,lVar48,0);
        FUN_7fffa56a5f20(lVar42 + lVar48,puVar50,uVar39);
        *(uint8_t *)(uVar39 + lVar42 + lVar48) = *(uint8_t *)(lVar1 + lVar48);
        (*(code *)((int64_t)(short)~((uVar8 | 1) * 0x5c00 | (uint16_t)((uVar8 | 1) * -0x5c69) >> 6) +
                  0x7fffa568c956))();
      }
      *plStack_170 = lVar42;
      return;
    }
  }
  plStack_170[2] = lVar48 + uVar39;
  if (0xf < uVar40) {
    plStack_170 = (int64_t *)*plStack_170;
  }
  puVar51 = (uint8_t *)((int64_t)plStack_170 + lVar48);
  uVar40 = uVar39;
  if (((puVar51 < puVar50 + uVar39) && (puVar50 <= puVar51)) &&
     (uVar40 = (int64_t)puVar51 - (int64_t)puVar50, puVar51 < puVar50 || uVar40 == 0)) {
    uVar40 = 0;
  }
  puVar51[uVar39] = *puVar51;
  FUN_7fffa56a5f20(puVar51);
  FUN_7fffa56a5f20(puVar51 + uVar40,puVar50 + uVar39 + uVar40,uVar39 - uVar40);
  return;
}


// ============================================================================
// Function : FUN_7fffa50cad90  |  RVA: 0x95ad90  |  Size: 21 bytes
// Callers  : FUN_7fffa4ab2990@0x342990
// Callees  : FUN_7fffa566083c@0xef083c, FUN_7fffa5213870@0xaa3870
// ============================================================================
uint8_t FUN_7fffa50cad90(void)

{
  FUN_7fffa566083c();
  FUN_7fffa5213870();
  return 1;
}


// ============================================================================
// Function : FUN_7fffa50cadb0  |  RVA: 0x95adb0  |  Size: 71 bytes
// Callers  : FUN_7fffa4a994d0@0x3294d0
// Callees  : FUN_7fffa560b2b0@0xe9b2b0
// ============================================================================
uint64_t * FUN_7fffa50cadb0(uint64_t *param_1,uint64_t param_2)

{
  uint64_t uStack_18;
  uint8_t uStack_10;
  
  uStack_10 = 1;
  *param_1 = &PTR_FUN_7fffa56f3928;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_18 = param_2;
  FUN_7fffa560b2b0(&uStack_18);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa50cadf8  |  RVA: 0x95adf8  |  Size: 1 bytes
// Callers  : FUN_7fffa5400390@0xc90390
// Callees  : none
// ============================================================================
void FUN_7fffa50cadf8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa50cae10  |  RVA: 0x95ae10  |  Size: 630 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa50cb084) */
/* WARNING: Removing unreachable block (ram,0x7fffa50cb086) */
/* WARNING: Removing unreachable block (ram,0x7fffa50cb08d) */
/* WARNING: Removing unreachable block (ram,0x7fffa50cb075) */

uint64_t FUN_7fffa50cae10(int64_t param_1)

{
  uint8_t extraout_AH;
  uint8_t in_TF;
  
  if (param_1 != 0) {
    FUN_7fffa51829e0(0xee9533ec);
    (*(code *)&UNK_7fffa52d5be0)();
    if ((in_TF & 1) != 0) {
      DAT_7fffea61611a = extraout_AH;
    }
  }
  (*pcRam00007fffa4784ff0)(param_1);
  if (*(int64_t *)((int64_t)ProcessEnvironmentBlock + 0x18) == 0x3f7bd3509fc5c323) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa50cb0d0  |  RVA: 0x95b0d0  |  Size: 520 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa50cb0d0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)

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
  uint8_t (*pauVar23) [32];
  uint8_t (*pauVar24) [32];
  uint64_t *puVar25;
  uint64_t *puVar26;
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
    puVar26 = (uint64_t *)((int64_t)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    param_1 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    *param_1 = uVar11;
    param_1[1] = uVar12;
    return;
  }
  puVar26 = (uint64_t *)((int64_t)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (param_1 < puVar26) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (int64_t)param_2 - (int64_t)param_1;
    puVar26 = (uint64_t *)((int64_t)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar26;
    uVar13 = puVar26[1];
    puVar25 = (uint64_t *)((int64_t)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar26 = puVar25;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((uint64_t)puVar25 & 0xf) != 0) {
      puVar26 = (uint64_t *)((uint64_t)puVar25 & 0xfffffffffffffff0);
      uVar32 = *(uint64_t *)((int64_t)puVar26 + lVar30);
      uVar33 = ((uint64_t *)((int64_t)puVar26 + lVar30))[1];
      *puVar25 = uVar12;
      *(uint64_t *)((int64_t)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (int64_t)puVar26 - (int64_t)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar25 = puVar26;
      while( true ) {
        puVar1 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar26 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x20);
        uVar13 = *puVar26;
        uVar32 = puVar26[1];
        puVar26 = puVar25 + -0x10;
        puVar25[-2] = *puVar1;
        puVar25[-1] = uVar12;
        puVar25[-4] = uVar13;
        puVar25[-3] = uVar32;
        puVar1 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar25[-6] = *puVar1;
        puVar25[-5] = uVar12;
        puVar25[-8] = uVar13;
        puVar25[-7] = uVar32;
        puVar1 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar25[-10] = *puVar1;
        puVar25[-9] = uVar12;
        puVar25[-0xc] = uVar13;
        puVar25[-0xb] = uVar32;
        puVar1 = (uint64_t *)((int64_t)puVar25 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(uint64_t *)((int64_t)puVar26 + lVar30);
        uVar33 = ((uint64_t *)((int64_t)puVar26 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar25[-0xe] = uVar12;
        puVar25[-0xd] = uVar13;
        *puVar26 = uVar32;
        puVar25[-0xf] = uVar33;
        puVar25 = puVar26;
      }
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar26 = puVar26 + -2;
      uVar32 = *(uint64_t *)((int64_t)puVar26 + lVar30);
      uVar33 = ((uint64_t *)((int64_t)puVar26 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
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
  puVar26 = (uint64_t *)((int64_t)param_2 + (param_3 - 0x20));
  uVar32 = *puVar26;
  uVar33 = puVar26[1];
  uVar14 = puVar26[2];
  uVar15 = puVar26[3];
  if (0x100 < param_3) {
    lVar30 = ((uint64_t)param_1 & 0x1f) - 0x20;
    pauVar23 = (uint8_t (*) [32])((int64_t)param_1 - lVar30);
    pauVar27 = (uint8_t (*) [32])((int64_t)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar28 = pauVar27;
          pauVar24 = pauVar23;
          auVar3 = pauVar28[1];
          auVar4 = pauVar28[2];
          auVar5 = pauVar28[3];
          auVar6 = vmovntdq_avx(*pauVar28);
          *pauVar24 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[3] = auVar3;
          auVar3 = pauVar28[5];
          auVar4 = pauVar28[6];
          auVar5 = pauVar28[7];
          auVar6 = vmovntdq_avx(pauVar28[4]);
          pauVar24[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[7] = auVar3;
          pauVar23 = pauVar24 + 8;
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
          *(uint8_t (*) [32])(*pauVar24 + uVar31) = auVar3;
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
          *(uint8_t (*) [32])(pauVar24[1] + uVar31) = auVar3;
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
          *(uint8_t (*) [32])(pauVar24[2] + uVar31) = auVar3;
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
          *(uint8_t (*) [32])(pauVar24[3] + uVar31) = auVar3;
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
          *(uint8_t (*) [32])(pauVar24[4] + uVar31) = auVar3;
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
          *(uint8_t (*) [32])(pauVar24[5] + uVar31) = auVar3;
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
          *(uint8_t (*) [32])(pauVar24[6] + uVar31) = auVar3;
        default:
          puVar26 = (uint64_t *)(pauVar24[-1] + uVar29);
          *puVar26 = uVar32;
          puVar26[1] = uVar33;
          puVar26[2] = uVar14;
          puVar26[3] = uVar15;
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
        *(uint64_t *)*pauVar23 = *(uint64_t *)*pauVar27;
        *(uint64_t *)(*pauVar23 + 8) = uVar10;
        *(uint64_t *)(*pauVar23 + 0x10) = uVar11;
        *(uint64_t *)(*pauVar23 + 0x18) = uVar12;
        *(uint64_t *)pauVar23[1] = uVar13;
        *(uint64_t *)(pauVar23[1] + 8) = uVar32;
        *(uint64_t *)(pauVar23[1] + 0x10) = uVar33;
        *(uint64_t *)(pauVar23[1] + 0x18) = uVar14;
        *(uint64_t *)pauVar23[2] = uVar15;
        *(uint64_t *)(pauVar23[2] + 8) = uVar16;
        *(uint64_t *)(pauVar23[2] + 0x10) = uVar17;
        *(uint64_t *)(pauVar23[2] + 0x18) = uVar18;
        *(uint64_t *)pauVar23[3] = uVar19;
        *(uint64_t *)(pauVar23[3] + 8) = uVar20;
        *(uint64_t *)(pauVar23[3] + 0x10) = uVar21;
        *(uint64_t *)(pauVar23[3] + 0x18) = uVar22;
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
        *(uint64_t *)pauVar23[4] = *(uint64_t *)pauVar27[4];
        *(uint64_t *)(pauVar23[4] + 8) = uVar10;
        *(uint64_t *)(pauVar23[4] + 0x10) = uVar11;
        *(uint64_t *)(pauVar23[4] + 0x18) = uVar12;
        *(uint64_t *)pauVar23[5] = uVar13;
        *(uint64_t *)(pauVar23[5] + 8) = uVar32;
        *(uint64_t *)(pauVar23[5] + 0x10) = uVar33;
        *(uint64_t *)(pauVar23[5] + 0x18) = uVar14;
        *(uint64_t *)pauVar23[6] = uVar15;
        *(uint64_t *)(pauVar23[6] + 8) = uVar16;
        *(uint64_t *)(pauVar23[6] + 0x10) = uVar17;
        *(uint64_t *)(pauVar23[6] + 0x18) = uVar18;
        *(uint64_t *)pauVar23[7] = uVar19;
        *(uint64_t *)(pauVar23[7] + 8) = uVar20;
        *(uint64_t *)(pauVar23[7] + 0x10) = uVar21;
        *(uint64_t *)(pauVar23[7] + 0x18) = uVar22;
        pauVar23 = pauVar23 + 8;
        pauVar27 = pauVar27 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7fffa50cb322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
            *(uint32_t *)(&UNK_7fffa58946f0 + (param_3 + 0x1f >> 5) * 4)))();
  return;
}


// ============================================================================
// Function : FUN_7fffa50cb4f0  |  RVA: 0x95b4f0  |  Size: 1570 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa50cb4f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5)

{
  int64_t *plVar1;
  char *pcVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t bVar7;
  uint16_t uVar8;
  uint8_t auVar9 [16];
  uint8_t bVar10;
  uint8_t bVar11;
  char cVar12;
  uint8_t bVar13;
  uint8_t bVar14;
  uint8_t bVar15;
  uint64_t in_RAX;
  uint32_t *puVar16;
  uint32_t uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint32_t uVar20;
  int64_t lVar21;
  char cVar22;
  uint8_t bVar23;
  uint64_t uVar24;
  char cVar25;
  uint32_t in_R10D;
  uint64_t *puVar26;
  int64_t lVar27;
  uint8_t *puVar28;
  float fVar29;
  uint8_t in_XMM0 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  int64_t lStack_78;
  uint8_t *puStack_70;
  
  uVar20 = (uint32_t)in_RAX;
  puVar26 = (uint64_t *)(param_2 >> 0x2d ^ param_2);
  lVar18 = (param_5 << 0x33 | param_5 >> 0xd) * 0x3000000040000001;
  uVar24 = *(uint64_t *)(lVar18 + 0x28);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar24;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar24;
  auVar9._8_8_ = 1;
  auVar9._0_8_ = 0x4325c53ef368eb0;
  auVar30._4_12_ = in_XMM0._4_12_;
  auVar30._0_4_ =
       (float)(SUB168(auVar4 * auVar9,8) +
               (uint64_t)
               CARRY8(SUB168(auVar4 * ZEXT816(0x4325c53ef368eb0),0),
                      SUB168(auVar3 * ZEXT816(0x4325c53ef368eb05),8)) + 1) / 0.875;
  fVar29 = (float)FUN_7fffa5102fa0(auVar30._0_8_);
  uVar24 = (int64_t)(fVar29 - 9.223372e+18) & (int64_t)fVar29 >> 0x3f | (int64_t)fVar29;
  if ((uint64_t)(int64_t)(int)((uVar20 + 0x9b196cbb) * 0x76c4c7d9 + 0x2aad9553) <=
      (uint64_t)(((uVar20 ^ 0xfff78bd9) << 0x11 | (uVar20 ^ 0xfff78bd9) >> 0xf) ^ 0xca7ead09)) {
    uVar24 = (int64_t)fVar29;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar24;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar24;
  uVar19 = SUB168(auVar6 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar6 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar5 * ZEXT816(0x1111111111111112),8));
  lVar21 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
    }
  }
  bVar23 = 0x3f;
  if (0x1d < uVar24) {
    bVar23 = (uint8_t)lVar21 ^ 0x3f;
  }
  bVar10 = 0x40 - bVar23;
  lVar21 = 1L << (-bVar23 & 0x3f);
  lStack_78 = 0;
  if (uVar24 == 0) {
    puVar28 = &UNK_7fffa56ee720;
  }
  else {
    lVar27 = 0x78L << (bVar10 & 0x3f);
    uVar24 = in_RAX & 0xffffffff;
    bVar7 = (uint8_t)uVar24 & 0xf;
    uVar19 = (0x88L << (bVar10 & 0x3f)) + 0xeU & 0xfffffffffffffff8;
    (*(code *)((int64_t)(short)(-0x52df << bVar7 | 0xad21U >> 0x10 - bVar7) + 0x7fffa526f62a))
              (uVar24,uVar19 << 0x3c ^ uVar19,uVar19 << 0xe);
    lStack_78 = (uVar24 << 0x2c | uVar24 >> 0x14) - ((uVar24 >> 0x14) << 0x36);
    puVar28 = (uint8_t *)
              ((uint64_t)(-((int)lStack_78 + (int)lVar27 + -8) & 0xf) + lStack_78 + lVar27 + -8);
    FUN_7fffa4ecf8e0(puVar28,0,0x10L << (bVar10 & 0x3f));
    puVar28[lVar21 * 0x10 + -2] = 1;
  }
  *puVar26 = 0;
  *(uint32_t *)(puVar26 + 1) = 0;
  puVar26[2] = 0;
  uVar24 = param_3 >> (bVar23 & 0x3f);
  puStack_70 = puVar28 + uVar24 * 0x10;
  pcVar2 = puVar28 + uVar24 * 0x10;
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
  uVar8 = (uint16_t)(SUB161(auVar31 >> 7,0) & 1) | (uint16_t)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
          (uint16_t)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe;
  uVar17 = (uint32_t)uVar8;
  if (uVar8 == 0) {
    bVar7 = ~bVar10;
    bVar15 = (uint8_t)param_3;
    bVar14 = bVar15 ^ 7;
    bVar11 = ~bVar15 & 0xf8;
    bVar13 = bVar15 & 0xf8;
    cVar25 = (bVar10 & bVar13) * -0x51 + (bVar14 | bVar10) * 'Y' + (~bVar15 & 7 | bVar7) * -0x39;
    cVar12 = (bVar15 & 7 | bVar10) * -0x58;
    bVar23 = (uint8_t)in_RAX & 0x1f;
    cVar22 = cVar25 + cVar12;
    if ((0x5ee0d35fU >> bVar23 | 0x5ee0d35f << 0x20 - bVar23) * 0x62e1dbcb < 0x4fc4569b) {
      cVar22 = cVar12 * cVar25;
    }
    cVar12 = ((bVar15 | 0xf8) & bVar7) * 'C';
    cVar22 = cVar22 + (((bVar7 | bVar13) * '\x18' + (bVar14 ^ bVar7) * '8') - (bVar7 ^ bVar11));
    cVar25 = cVar22 + cVar12;
    if (~(uVar20 ^ 0x429a6c60) <= (uVar20 | 1) * 0x48419c37) {
      cVar25 = cVar12 * cVar22;
    }
    lVar27 = 1;
    while( true ) {
      puStack_70[0xf] =
           puStack_70[0xf] |
           '\x01' << ((bVar13 & bVar7) * -0x43 + (bVar14 & bVar7) * -0x37 +
                      (bVar11 & bVar7) * ((uint8_t)in_RAX ^ 0x24) * -0x4f + cVar25 & 0x1f);
      uVar24 = uVar24 + lVar27 & lVar21 - 1U;
      puStack_70 = puVar28 + uVar24 * 0x10;
      pcVar2 = puVar28 + uVar24 * 0x10;
      auVar32[0] = -(*pcVar2 == '\0');
      auVar32[1] = -(pcVar2[1] == '\0');
      auVar32[2] = -(pcVar2[2] == '\0');
      auVar32[3] = -(pcVar2[3] == '\0');
      auVar32[4] = -(pcVar2[4] == '\0');
      auVar32[5] = -(pcVar2[5] == '\0');
      auVar32[6] = -(pcVar2[6] == '\0');
      auVar32[7] = -(pcVar2[7] == '\0');
      auVar32[8] = -(pcVar2[8] == '\0');
      auVar32[9] = -(pcVar2[9] == '\0');
      auVar32[10] = -(pcVar2[10] == '\0');
      auVar32[0xb] = -(pcVar2[0xb] == '\0');
      auVar32[0xc] = -(pcVar2[0xc] == '\0');
      auVar32[0xd] = -(pcVar2[0xd] == '\0');
      auVar32[0xe] = -(pcVar2[0xe] == '\0');
      auVar32[0xf] = -(pcVar2[0xf] == '\0');
      uVar17 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar32 >> 7,0) & 1) |
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
                             (uint16_t)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe);
      if (uVar17 != 0) break;
      lVar27 = lVar27 + 1;
    }
  }
  lStack_78 = uVar24 * 0x78 + lStack_78;
  uVar8 = (uint16_t)in_RAX;
  uVar20 = 0;
  for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
    uVar20 = uVar20 + 1;
  }
  uVar24 = (uint64_t)uVar20;
  (*(code *)((int64_t)(short)(0x3188 - uVar8) + 0x7fffa526aeca))();
  puVar16 = (uint32_t *)((in_RAX << 0x2c | in_RAX >> 0x14) - ((in_RAX >> 0x14) << 0x36));
  *(uint32_t **)(lStack_78 + uVar24 * 8) = puVar16;
  *puVar16 = in_R10D;
  *(uint8_t (*) [16])(puVar16 + 2) = (uint8_t  [16])0x0;
  *(uint64_t *)(puVar16 + 6) = 0;
  puStack_70[uVar24] =
       (&UNK_7fffa5832f9a)[(param_3 & 0xff) * 4 + (int64_t)(short)((uVar8 ^ 0xf8eb) + 0x123d)];
  *(uint32_t *)(puVar26 + 1) = uVar20;
  puVar26[2] = lStack_78 + uVar24 * 8;
  *puVar26 = puStack_70;
  (*(code *)((int64_t)(short)(-0x3fa6 - uVar8) + 0x7fffa562bcc8))();
  plVar1 = (int64_t *)(lVar18 + 0x28);
  *plVar1 = *plVar1 + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa50cbb12  |  RVA: 0x95bb12  |  Size: 26 bytes
// Callers  : none
// Callees  : FUN_7fffa4fcf020@0x85f020
// ============================================================================
void FUN_7fffa50cbb12(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa4fcf020(**(uint64_t **)(param_2 + 0x48));
  return;
}


// ============================================================================
// Function : FUN_7fffa50cbb30  |  RVA: 0x95bb30  |  Size: 1 bytes
// Callers  : FUN_7fffa55c8d00@0xe58d00
// Callees  : none
// ============================================================================
void FUN_7fffa50cbb30(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa50cbb60  |  RVA: 0x95bb60  |  Size: 553 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa50cbb60(uint64_t param_1,uint64_t param_2,uint8_t param_3)

{
  uint64_t uVar1;
  code *pcVar2;
  short sVar3;
  char cVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint64_t in_RAX;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  
  uVar8 = in_RAX >> 0xc ^ in_RAX;
  plVar7 = (int64_t *)(uVar8 >> 0x30 ^ uVar8 >> 0x18 ^ uVar8);
  bVar5 = param_3 << 5 ^ param_3;
  uVar8 = plVar7[2];
  uVar1 = plVar7[3];
  bVar5 = (param_3 << 6 | bVar5 >> 2) ^ (param_3 << 3 | bVar5 >> 5) ^ bVar5;
  bVar6 = bVar5 << 4 | bVar5 >> 4;
  bVar5 = (bVar5 << 6 | bVar5 >> 2) ^ bVar6 ^ bVar5;
  cVar4 = (bVar5 << 4 | bVar5 >> 4) * 'A';
  if (uVar8 < uVar1) {
    plVar7[2] = uVar8 + 1;
    if (((uint32_t)param_1 | 1) * 0x53540000 >> 0x12 < uVar1) {
      plVar7 = (int64_t *)*plVar7;
    }
    *(char *)((int64_t)plVar7 + uVar8) = cVar4;
    *(uint8_t *)((int64_t)plVar7 + uVar8 + 1) = 0;
  }
  else {
    uVar11 = 0x7fffffffffffffff;
    sVar3 = (short)param_1;
    if (uVar8 == 0x7fffffffffffffff) {
      (*(code *)(&UNK_7fffa519d134 + (short)(sVar3 + -0x7087)))();
      pcVar2 = (code *)__debugbreak();
      (*pcVar2)();
      return;
    }
    if ((-2 < (int64_t)uVar8) && (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
      uVar9 = uVar8 + 1 | 0xf;
      uVar11 = (uVar1 >> 1) + uVar1;
      if (uVar11 < uVar9) {
        uVar11 = uVar9;
      }
    }
    (*(code *)((int64_t)(short)((0xa70eU - sVar3) * 0x80 | (uint16_t)(0xa70eU - sVar3) >> 9) +
              0x7fffa526ccff))
              (bVar6,param_2,((uint32_t)param_1 ^ 0x9d71f149) + 0xe766dcf4,(uVar11 + 1) * 0x4000);
    lVar10 = (param_1 << 0x2c | param_1 >> 0x14) - ((param_1 >> 0x14) << 0x36);
    plVar7[2] = uVar8 + 1;
    plVar7[3] = uVar11;
    if (uVar1 < 0x10) {
      FUN_7fffa56a5f20(lVar10,plVar7,uVar8);
      *(uint8_t *)(lVar10 + 1 + uVar8) = 0;
      *(char *)(lVar10 + uVar8) = cVar4;
    }
    else {
      FUN_7fffa56a5f20(lVar10,*plVar7,uVar8);
      *(uint8_t *)(lVar10 + 1 + uVar8) = 0;
      *(char *)(lVar10 + uVar8) = cVar4;
      (*(code *)((int64_t)(short)(-0x1dc - sVar3) + 0x7fffa568c15f))();
    }
    *plVar7 = lVar10;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa50cbd90  |  RVA: 0x95bd90  |  Size: 4077 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa50cbd90(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint32_t param_4)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  bool bVar7;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t in_RAX;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint8_t bVar16;
  uint32_t uVar17;
  code *pcVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t *puVar26;
  uint64_t *puVar27;
  uint64_t uVar28;
  uint64_t *puVar29;
  uint64_t *puVar30;
  uint64_t uStack_70;
  uint8_t uStack_61;
  undefined7 uStack_60;
  
  puVar30 = (uint64_t *)(in_RAX ^ 0xed5a4a53);
  uVar24 = (int64_t)param_3 - (int64_t)puVar30;
  if (0x317 < (int64_t)uVar24) {
    uVar28 = param_2 * 0xffffffc000001;
    puVar29 = param_3;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar24;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar24;
      uVar24 = SUB168(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaa),8) +
               (uint64_t)
               CARRY8(SUB168(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaa),0),
                      SUB168(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8));
      bVar16 = (uint8_t)param_4;
      if ((int64_t)uVar28 < 1) {
        uVar28 = uVar24 - 1;
        puVar14 = puVar30 + uVar28 * 3;
        uVar25 = uVar28 >> 1;
        puVar20 = puVar30 + uVar25 * 3;
        uStack_70 = uVar24 >> 1;
        do {
          uVar19 = uStack_70 - 1;
          uVar5 = puVar30[uVar19 * 3];
          uVar17 = *(uint32_t *)((int64_t)puVar30 + uVar19 * 0x18 + 4);
          bVar2 = *(uint8_t *)(puVar30 + uVar19 * 3 + 1);
          uStack_60 = (undefined7)((uint64_t)puVar30[uVar19 * 3 + 2] >> 8);
          uVar6 = *(uint64_t *)((int64_t)puVar30 + uVar19 * 0x18 + 9);
          uStack_61 = (uint8_t)((uint64_t)uVar6 >> 0x38);
          uVar23 = uVar19;
          if ((int64_t)uStack_70 <= (int64_t)uVar25) {
            uVar22 = uVar19;
            do {
              uVar23 = uVar22 * 2 + 2;
              uVar1 = uVar22 * 2 + 1;
              uVar21 = *(uint32_t *)((int64_t)puVar30 + uVar1 * 0x18 + 4);
              uVar4 = *(uint32_t *)((int64_t)puVar30 + uVar23 * 0x18 + 4);
              if ((uVar4 < uVar21) ||
                 ((uVar4 == uVar21 &&
                  (*(uint8_t *)(puVar30 + uVar23 * 3 + 1) < *(uint8_t *)(puVar30 + uVar1 * 3 + 1))))) {
                uVar23 = uVar1;
              }
              puVar30[uVar22 * 3 + 2] = puVar30[uVar23 * 3 + 2];
              uVar12 = (puVar30 + uVar23 * 3)[1];
              puVar30[uVar22 * 3] = puVar30[uVar23 * 3];
              (puVar30 + uVar22 * 3)[1] = uVar12;
              uVar22 = uVar23;
            } while ((int64_t)uVar23 < (int64_t)uVar25);
          }
          if (uVar23 == uVar25 && (uVar24 & 1) == 0) {
            puVar20[2] = puVar14[2];
            uVar12 = puVar14[1];
            *puVar20 = *puVar14;
            puVar20[1] = uVar12;
            uVar23 = uVar28;
          }
          if ((int64_t)uVar23 < (int64_t)uStack_70) {
LAB_7fffa50cca80:
            uVar22 = uVar23;
          }
          else {
            do {
              uVar22 = (int64_t)(uVar23 - 1) >> 1;
              puVar26 = puVar30 + uVar22 * 3;
              uVar21 = *(uint32_t *)((int64_t)puVar30 + uVar22 * 0x18 + 4);
              if (uVar17 <= uVar21) {
                if (uVar21 != uVar17) goto LAB_7fffa50cca80;
                bVar7 = (char)bVar2 < (char)*(uint8_t *)(puVar26 + 1);
                if (((param_4 ^ 0x159e9b3) << 0x1b | (param_4 ^ 0x159e9b3) >> 5) <
                    ((param_4 | 1) * 0xa2bb203 ^ 0xc0e9c998)) {
                  bVar7 = *(uint8_t *)(puVar26 + 1) < bVar2;
                }
                if (!bVar7) goto LAB_7fffa50cca80;
              }
              puVar30[uVar23 * 3 + 2] = puVar26[2];
              uVar12 = puVar26[1];
              puVar30[uVar23 * 3] = *puVar26;
              (puVar30 + uVar23 * 3)[1] = uVar12;
              uVar23 = uVar22;
            } while ((int64_t)uStack_70 <= (int64_t)uVar22);
          }
          puVar30[uVar22 * 3] = uVar5;
          *(uint8_t *)(puVar30 + uVar22 * 3 + 1) = bVar2;
          *(uint64_t *)((int64_t)puVar30 + uVar22 * 0x18 + 9) = uVar6;
          puVar30[uVar22 * 3 + 2] = CONCAT71(uStack_60,uStack_61);
          bVar7 = 1 < (int64_t)uStack_70;
          uStack_70 = uVar19;
        } while (bVar7);
        do {
          uVar17 = *(uint32_t *)((int64_t)puVar29 + -0x14);
          uVar5 = puVar29[-3];
          bVar2 = *(uint8_t *)(puVar29 + -2);
          uStack_60 = (undefined7)((uint64_t)puVar29[-1] >> 8);
          uVar6 = *(uint64_t *)((int64_t)puVar29 + -0xf);
          uStack_61 = (uint8_t)((uint64_t)uVar6 >> 0x38);
          uVar12 = puVar30[1];
          puVar29[-3] = *puVar30;
          puVar29[-2] = uVar12;
          puVar29[-1] = puVar30[2];
          puVar29 = puVar29 + -3;
          uVar28 = ((int64_t)puVar29 - (int64_t)puVar30 >> 3) * -0x5555555555555555;
          uVar24 = uVar28 - 1;
          uVar25 = (int64_t)uVar24 >> 1;
          if ((int64_t)uVar25 < 1) {
            uVar19 = 0;
          }
          else {
            uVar23 = 0;
            do {
              uVar22 = uVar23 * 2 + 1;
              uVar19 = uVar23 * 2 + 2;
              if ((0x1a50c7bb << (bVar16 & 0x1f) | 0x1a50c7bbU >> 0x20 - (bVar16 & 0x1f)) !=
                  0xc7bb1a50) {
                uVar19 = uVar23 * 2 | 2;
              }
              uVar21 = *(uint32_t *)((int64_t)puVar30 + uVar22 * 0x18 + 4);
              uVar4 = *(uint32_t *)((int64_t)puVar30 + uVar19 * 0x18 + 4);
              if ((uVar4 < uVar21) ||
                 ((uVar4 == uVar21 &&
                  (*(uint8_t *)(puVar30 + uVar19 * 3 + 1) < *(uint8_t *)(puVar30 + uVar22 * 3 + 1))))) {
                uVar19 = uVar22;
              }
              puVar30[uVar23 * 3 + 2] = puVar30[uVar19 * 3 + 2];
              uVar12 = (puVar30 + uVar19 * 3)[1];
              puVar30[uVar23 * 3] = puVar30[uVar19 * 3];
              (puVar30 + uVar23 * 3)[1] = uVar12;
              uVar23 = uVar19;
            } while ((int64_t)uVar19 < (int64_t)uVar25);
          }
          if ((uVar19 == uVar25) && ((uVar28 & 1) == 0)) {
            puVar30[uVar25 * 3 + 2] = puVar30[uVar24 * 3 + 2];
            uVar12 = (puVar30 + uVar24 * 3)[1];
            puVar30[uVar25 * 3] = puVar30[uVar24 * 3];
            (puVar30 + uVar25 * 3)[1] = uVar12;
            uVar19 = uVar24;
          }
          if (0 < (int64_t)uVar19) {
            do {
              uVar24 = uVar19 - 1;
              uVar28 = uVar24 >> 1;
              puVar14 = puVar30 + uVar28 * 3;
              uVar21 = *(uint32_t *)((int64_t)puVar30 + uVar28 * 0x18 + 4);
              if ((uVar17 <= uVar21) && ((uVar21 != uVar17 || (bVar2 <= *(uint8_t *)(puVar14 + 1)))))
              goto LAB_7fffa50ccc62;
              puVar30[uVar19 * 3 + 2] = puVar14[2];
              uVar12 = puVar14[1];
              puVar30[uVar19 * 3] = *puVar14;
              (puVar30 + uVar19 * 3)[1] = uVar12;
              uVar19 = uVar28;
            } while (1 < uVar24);
            uVar19 = 0;
          }
LAB_7fffa50ccc62:
          puVar30[uVar19 * 3] = uVar5;
          *(uint8_t *)(puVar30 + uVar19 * 3 + 1) = bVar2;
          *(uint64_t *)((int64_t)puVar30 + uVar19 * 0x18 + 9) = uVar6;
          puVar30[uVar19 * 3 + 2] = CONCAT71(uStack_60,uStack_61);
          if ((int64_t)puVar29 - (int64_t)puVar30 < 0x19) {
            return;
          }
        } while( true );
      }
      puVar14 = puVar29 + -3;
      uVar25 = (int64_t)puVar14 - (int64_t)puVar30;
      puVar20 = puVar30 + (uVar24 >> 1) * 3;
      if ((int64_t)(uint64_t)(param_4 + 0x349ba6d1 ^ 0xb499aa81) < (int64_t)uVar25) {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar25;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar25;
        uVar24 = SUB168(auVar11 * ZEXT816(0xaaaaaaaaaaaaaaa),8) + 1 +
                 (uint64_t)
                 CARRY8(SUB168(auVar11 * ZEXT816(0xaaaaaaaaaaaaaaa),0),
                        SUB168(auVar10 * ZEXT816(0xaaaaaaaaaaaaaaab),8)) >> 3;
        puVar26 = puVar30 + uVar24 * 3;
        uVar17 = *(uint32_t *)((int64_t)puVar30 + uVar24 * 0x18 + 4);
        if ((uVar17 < *(uint32_t *)((int64_t)puVar30 + 4)) ||
           ((uVar17 == *(uint32_t *)((int64_t)puVar30 + 4) &&
            (*(uint8_t *)(puVar26 + 1) < *(uint8_t *)(puVar30 + 1))))) {
          uVar5 = puVar26[2];
          uVar6 = *puVar26;
          uVar12 = puVar26[1];
          puVar26[2] = puVar30[2];
          uVar13 = puVar30[1];
          *puVar26 = *puVar30;
          puVar26[1] = uVar13;
          puVar30[2] = uVar5;
          *puVar30 = uVar6;
          puVar30[1] = uVar12;
          uVar17 = *(uint32_t *)((int64_t)puVar26 + 4);
        }
        puVar15 = puVar30 + uVar24 * 6;
        if ((*(uint32_t *)((int64_t)puVar15 + 4) < uVar17) ||
           ((*(uint32_t *)((int64_t)puVar15 + 4) == uVar17 &&
            (*(uint8_t *)(puVar15 + 1) < *(uint8_t *)(puVar26 + 1))))) {
          uVar5 = puVar15[2];
          uVar6 = *puVar15;
          uVar12 = puVar15[1];
          puVar15[2] = puVar26[2];
          uVar13 = puVar26[1];
          *puVar15 = *puVar26;
          puVar15[1] = uVar13;
          puVar26[2] = uVar5;
          *puVar26 = uVar6;
          puVar26[1] = uVar12;
          if ((*(uint32_t *)((int64_t)puVar26 + 4) < *(uint32_t *)((int64_t)puVar30 + 4)) ||
             ((*(uint32_t *)((int64_t)puVar26 + 4) == *(uint32_t *)((int64_t)puVar30 + 4) &&
              (*(uint8_t *)(puVar26 + 1) < *(uint8_t *)(puVar30 + 1))))) {
            uVar5 = puVar26[2];
            uVar6 = *puVar26;
            uVar12 = puVar26[1];
            puVar26[2] = puVar30[2];
            uVar13 = puVar30[1];
            *puVar26 = *puVar30;
            puVar26[1] = uVar13;
            puVar30[2] = uVar5;
            *puVar30 = uVar6;
            puVar30[1] = uVar12;
          }
        }
        uVar21 = *(uint32_t *)((int64_t)puVar20 + 4);
        puVar15 = puVar20 + uVar24 * -3;
        uVar17 = *(uint32_t *)((int64_t)puVar20 + uVar24 * -0x18 + 4);
        if ((uVar21 < uVar17) ||
           ((uVar21 == uVar17 && (*(uint8_t *)(puVar20 + 1) < *(uint8_t *)(puVar15 + 1))))) {
          uVar5 = puVar20[2];
          uVar6 = *puVar20;
          uVar12 = puVar20[1];
          puVar20[2] = puVar15[2];
          uVar13 = puVar15[1];
          *puVar20 = *puVar15;
          puVar20[1] = uVar13;
          puVar15[2] = uVar5;
          *puVar15 = uVar6;
          puVar15[1] = uVar12;
          uVar21 = *(uint32_t *)((int64_t)puVar20 + 4);
        }
        puVar27 = puVar20 + uVar24 * 3;
        if ((*(uint32_t *)((int64_t)puVar27 + 4) < uVar21) ||
           ((*(uint32_t *)((int64_t)puVar27 + 4) == uVar21 &&
            (*(uint8_t *)(puVar27 + 1) < *(uint8_t *)(puVar20 + 1))))) {
          uVar5 = puVar27[2];
          uVar6 = *puVar27;
          uVar12 = puVar27[1];
          puVar27[2] = puVar20[2];
          uVar13 = puVar20[1];
          *puVar27 = *puVar20;
          puVar27[1] = uVar13;
          puVar20[2] = uVar5;
          *puVar20 = uVar6;
          puVar20[1] = uVar12;
          if ((*(uint32_t *)((int64_t)puVar20 + 4) < *(uint32_t *)((int64_t)puVar15 + 4)) ||
             ((*(uint32_t *)((int64_t)puVar20 + 4) == *(uint32_t *)((int64_t)puVar15 + 4) &&
              (*(uint8_t *)(puVar20 + 1) < *(uint8_t *)(puVar15 + 1))))) {
            uVar5 = puVar20[2];
            uVar6 = *puVar20;
            uVar12 = puVar20[1];
            puVar20[2] = puVar15[2];
            uVar13 = puVar15[1];
            *puVar20 = *puVar15;
            puVar20[1] = uVar13;
            puVar15[2] = uVar5;
            *puVar15 = uVar6;
            puVar15[1] = uVar12;
          }
        }
        puVar15 = puVar14 + uVar24 * -3;
        uVar21 = *(uint32_t *)((int64_t)puVar29 + uVar24 * -0x18 + -0x14);
        puVar27 = puVar14 + uVar24 * -6;
        uVar17 = *(uint32_t *)((int64_t)puVar29 + uVar24 * -0x30 + -0x14);
        if ((uVar21 < uVar17) ||
           ((uVar21 == uVar17 && (*(uint8_t *)(puVar15 + 1) < *(uint8_t *)(puVar27 + 1))))) {
          uVar5 = puVar15[2];
          uVar6 = *puVar15;
          uVar12 = puVar15[1];
          puVar15[2] = puVar27[2];
          uVar13 = puVar27[1];
          *puVar15 = *puVar27;
          puVar15[1] = uVar13;
          puVar27[2] = uVar5;
          *puVar27 = uVar6;
          puVar27[1] = uVar12;
          uVar21 = *(uint32_t *)((int64_t)puVar15 + 4);
        }
        if ((*(uint32_t *)((int64_t)puVar29 + -0x14) < uVar21) ||
           ((*(uint32_t *)((int64_t)puVar29 + -0x14) == uVar21 &&
            (*(uint8_t *)(puVar29 + -2) < *(uint8_t *)(puVar15 + 1))))) {
          uVar5 = puVar29[-1];
          uVar6 = *puVar14;
          uVar12 = puVar29[-2];
          puVar29[-1] = puVar15[2];
          uVar13 = puVar15[1];
          *puVar14 = *puVar15;
          puVar29[-2] = uVar13;
          puVar15[2] = uVar5;
          *puVar15 = uVar6;
          puVar15[1] = uVar12;
          if ((*(uint32_t *)((int64_t)puVar15 + 4) < *(uint32_t *)((int64_t)puVar27 + 4)) ||
             ((*(uint32_t *)((int64_t)puVar15 + 4) == *(uint32_t *)((int64_t)puVar27 + 4) &&
              (*(uint8_t *)(puVar15 + 1) < *(uint8_t *)(puVar27 + 1))))) {
            uVar5 = puVar15[2];
            uVar6 = *puVar15;
            uVar12 = puVar15[1];
            puVar15[2] = puVar27[2];
            uVar13 = puVar27[1];
            *puVar15 = *puVar27;
            puVar15[1] = uVar13;
            puVar27[2] = uVar5;
            *puVar27 = uVar6;
            puVar27[1] = uVar12;
          }
        }
        uVar17 = *(uint32_t *)((int64_t)puVar20 + 4);
        if ((uVar17 < *(uint32_t *)((int64_t)puVar26 + 4)) ||
           ((uVar17 == *(uint32_t *)((int64_t)puVar26 + 4) &&
            (*(uint8_t *)(puVar20 + 1) < *(uint8_t *)(puVar26 + 1))))) {
          uVar5 = puVar20[2];
          uVar6 = *puVar20;
          uVar12 = puVar20[1];
          puVar20[2] = puVar26[2];
          uVar13 = puVar26[1];
          *puVar20 = *puVar26;
          puVar20[1] = uVar13;
          puVar26[2] = uVar5;
          *puVar26 = uVar6;
          puVar26[1] = uVar12;
          uVar17 = *(uint32_t *)((int64_t)puVar20 + 4);
        }
        if ((*(uint32_t *)((int64_t)puVar15 + 4) < uVar17) ||
           ((*(uint32_t *)((int64_t)puVar15 + 4) == uVar17 &&
            (*(uint8_t *)(puVar15 + 1) < *(uint8_t *)(puVar20 + 1))))) {
          uVar5 = puVar15[2];
          uVar6 = *puVar15;
          uVar12 = puVar15[1];
          puVar15[2] = puVar20[2];
          uVar13 = puVar20[1];
          *puVar15 = *puVar20;
          puVar15[1] = uVar13;
          puVar20[2] = uVar5;
          *puVar20 = uVar6;
          puVar20[1] = uVar12;
          if ((*(uint32_t *)((int64_t)puVar20 + 4) < *(uint32_t *)((int64_t)puVar26 + 4)) ||
             ((*(uint32_t *)((int64_t)puVar20 + 4) == *(uint32_t *)((int64_t)puVar26 + 4) &&
              (*(uint8_t *)(puVar20 + 1) < *(uint8_t *)(puVar26 + 1))))) {
            uVar5 = puVar20[2];
            uVar6 = *puVar20;
            uVar12 = puVar20[1];
            puVar20[2] = puVar26[2];
            uVar13 = puVar26[1];
            *puVar20 = *puVar26;
            puVar20[1] = uVar13;
            puVar26[2] = uVar5;
            *puVar26 = uVar6;
            puVar26[1] = uVar12;
          }
        }
      }
      else {
        uVar17 = *(uint32_t *)((int64_t)puVar20 + 4);
        if ((uVar17 < *(uint32_t *)((int64_t)puVar30 + 4)) ||
           ((uVar17 == *(uint32_t *)((int64_t)puVar30 + 4) &&
            (*(uint8_t *)(puVar20 + 1) < *(uint8_t *)(puVar30 + 1))))) {
          uVar5 = puVar20[2];
          uVar6 = *puVar20;
          uVar12 = puVar20[1];
          puVar20[2] = puVar30[2];
          uVar13 = puVar30[1];
          *puVar20 = *puVar30;
          puVar20[1] = uVar13;
          puVar30[2] = uVar5;
          *puVar30 = uVar6;
          puVar30[1] = uVar12;
          uVar17 = *(uint32_t *)((int64_t)puVar20 + 4);
        }
        if ((*(uint32_t *)((int64_t)puVar29 + -0x14) < uVar17) ||
           ((*(uint32_t *)((int64_t)puVar29 + -0x14) == uVar17 &&
            (*(uint8_t *)(puVar29 + -2) < *(uint8_t *)(puVar20 + 1))))) {
          uVar5 = puVar29[-1];
          uVar6 = *puVar14;
          uVar12 = puVar29[-2];
          puVar29[-1] = puVar20[2];
          uVar13 = puVar20[1];
          *puVar14 = *puVar20;
          puVar29[-2] = uVar13;
          puVar20[2] = uVar5;
          *puVar20 = uVar6;
          puVar20[1] = uVar12;
          if (*(uint32_t *)((int64_t)puVar20 + 4) < *(uint32_t *)((int64_t)puVar30 + 4)) {
LAB_7fffa50cc0be:
            uVar5 = puVar20[2];
            uVar6 = *puVar20;
            uVar12 = puVar20[1];
            puVar20[2] = puVar30[2];
            uVar13 = puVar30[1];
            *puVar20 = *puVar30;
            puVar20[1] = uVar13;
            puVar30[2] = uVar5;
            *puVar30 = uVar6;
            puVar30[1] = uVar12;
          }
          else if (*(uint32_t *)((int64_t)puVar20 + 4) == *(uint32_t *)((int64_t)puVar30 + 4)) {
            bVar7 = *(uint8_t *)(puVar20 + 1) != *(uint8_t *)(puVar30 + 1);
            if (0x3745395 < (0x47f6f223 << (bVar16 & 0x1f) | 0x47f6f223U >> 0x20 - (bVar16 & 0x1f)))
            {
              bVar7 = *(uint8_t *)(puVar20 + 1) < *(uint8_t *)(puVar30 + 1);
            }
            if (bVar7) goto LAB_7fffa50cc0be;
          }
        }
      }
      puVar14 = puVar20;
      do {
        param_3 = puVar14;
        uVar17 = *(uint32_t *)((int64_t)param_3 - 0x14);
        uVar21 = *(uint32_t *)((int64_t)param_3 + 4);
        if (uVar17 < uVar21) goto LAB_7fffa50cc5f4;
        if (uVar17 == uVar21) {
          if (*(char *)(param_3 + 1) != *(char *)(param_3 + -2)) goto LAB_7fffa50cc5f4;
        }
        else if (uVar21 < uVar17) goto LAB_7fffa50cc5f4;
        puVar14 = param_3 + -3;
      } while (puVar30 < param_3 + -3);
      param_3 = param_3 + -3;
LAB_7fffa50cc5f4:
      puVar20 = puVar20 + 3;
      if (puVar20 < puVar29) {
        uVar17 = *(uint32_t *)((int64_t)param_3 + 4);
        do {
          uVar21 = *(uint32_t *)((int64_t)puVar20 + 4);
          if (uVar21 < uVar17) break;
          if (uVar21 == uVar17) {
            if (*(char *)(param_3 + 1) != *(char *)(puVar20 + 1)) break;
          }
          else if ((uVar17 < uVar21) && (0x84579845 - param_4 < 0x6cbb604e)) break;
          puVar20 = puVar20 + 3;
        } while (puVar20 < puVar29);
      }
      puVar26 = param_3;
      puVar14 = puVar20;
LAB_7fffa50cc6ac:
      uVar17 = (param_4 ^ 0xa54f9ce5) + 0x6ddc5c61;
      bVar7 = puVar14 == puVar29;
      if ((param_4 ^ 0x6d3249f0) * -0x23bd0a09 <= (uVar17 * 0x8000000 | uVar17 >> 5)) {
        bVar7 = puVar14 < puVar29;
      }
      puVar15 = puVar14;
      if (bVar7) {
        do {
          puVar14 = puVar15;
          uVar17 = *(uint32_t *)((int64_t)puVar14 + 4);
          uVar21 = *(uint32_t *)((int64_t)param_3 + 4);
          if ((uVar17 <= uVar21) &&
             ((uVar21 != uVar17 || (*(uint8_t *)(puVar14 + 1) <= *(uint8_t *)(param_3 + 1))))) {
            if (uVar17 < uVar21) goto joined_r0x7fffa50cc7ea;
            bVar7 = (char)*(uint8_t *)(param_3 + 1) < (char)*(uint8_t *)(puVar14 + 1);
            if (param_4 + 0x847d1042 < (param_4 | 1) * -0x33bfc82f) {
              bVar7 = *(uint8_t *)(puVar14 + 1) < *(uint8_t *)(param_3 + 1);
            }
            if (bVar7) goto joined_r0x7fffa50cc7ea;
            if (puVar14 == puVar20) {
              puVar20 = puVar20 + 3;
            }
            else {
              uVar5 = puVar20[2];
              uVar6 = *puVar20;
              uVar12 = puVar20[1];
              puVar20[2] = puVar14[2];
              uVar13 = puVar14[1];
              *puVar20 = *puVar14;
              puVar20[1] = uVar13;
              puVar20 = puVar20 + 3;
              puVar14[2] = uVar5;
              *puVar14 = uVar6;
              puVar14[1] = uVar12;
            }
          }
          puVar15 = puVar14 + 3;
        } while (puVar14 + 3 < puVar29);
        puVar14 = puVar14 + 3;
      }
joined_r0x7fffa50cc7ea:
      if (puVar30 < puVar26) {
        do {
          puVar27 = puVar26 + -3;
          uVar17 = *(uint32_t *)((int64_t)param_3 + 4);
          uVar21 = *(uint32_t *)((int64_t)puVar26 - 0x14);
          puVar15 = param_3;
          if ((uVar17 <= uVar21) &&
             ((uVar21 != uVar17 || (*(uint8_t *)(param_3 + 1) <= *(uint8_t *)(puVar26 + -2))))) {
            if (uVar17 < uVar21) break;
            if (*(uint8_t *)(param_3 + 1) < *(uint8_t *)(puVar26 + -2)) break;
            puVar15 = param_3 + -3;
            if (puVar26 != param_3) {
              uVar5 = param_3[-1];
              uVar6 = *puVar15;
              uVar12 = param_3[-2];
              param_3[-1] = puVar26[-1];
              uVar13 = puVar26[-2];
              *puVar15 = *puVar27;
              param_3[-2] = uVar13;
              puVar26[-1] = uVar5;
              *puVar27 = uVar6;
              puVar26[-2] = uVar12;
            }
          }
          param_3 = puVar15;
          puVar26 = puVar27;
        } while (puVar30 < puVar27);
      }
      if ((puVar26 != puVar30) || (puVar14 != puVar29)) {
        if (puVar26 == puVar30) {
          if (puVar20 != puVar14) {
            uVar5 = param_3[2];
            uVar6 = *param_3;
            uVar12 = param_3[1];
            param_3[2] = puVar20[2];
            uVar13 = puVar20[1];
            *param_3 = *puVar20;
            param_3[1] = uVar13;
            puVar20[2] = uVar5;
            *puVar20 = uVar6;
            puVar20[1] = uVar12;
          }
          uVar5 = param_3[2];
          uVar6 = *param_3;
          uVar12 = param_3[1];
          param_3[2] = puVar14[2];
          uVar13 = puVar14[1];
          *param_3 = *puVar14;
          param_3[1] = uVar13;
          puVar14[2] = uVar5;
          *puVar14 = uVar6;
          puVar14[1] = uVar12;
          puVar14 = puVar14 + 3;
          puVar20 = puVar20 + 3;
          param_3 = param_3 + 3;
        }
        else {
          puVar15 = puVar26 + -3;
          if (puVar14 == puVar29) {
            puVar27 = param_3 + -3;
            if (puVar26 != param_3) {
              uVar5 = puVar26[-1];
              uVar6 = *puVar15;
              uVar12 = puVar26[-2];
              puVar26[-1] = param_3[-1];
              uVar13 = param_3[-2];
              *puVar15 = *puVar27;
              puVar26[-2] = uVar13;
              param_3[-1] = uVar5;
              *puVar27 = uVar6;
              param_3[-2] = uVar12;
            }
            uVar5 = param_3[-1];
            uVar6 = *puVar27;
            uVar12 = param_3[-2];
            param_3[-1] = puVar20[-1];
            uVar13 = puVar20[-2];
            *puVar27 = puVar20[-3];
            param_3[-2] = uVar13;
            puVar20[-1] = uVar5;
            puVar20[-3] = uVar6;
            puVar20[-2] = uVar12;
            puVar20 = puVar20 + -3;
            param_3 = puVar27;
            puVar26 = puVar15;
          }
          else {
            uVar5 = puVar14[2];
            uVar6 = *puVar14;
            uVar12 = puVar14[1];
            puVar14[2] = puVar26[-1];
            uVar13 = puVar26[-2];
            *puVar14 = *puVar15;
            puVar14[1] = uVar13;
            puVar14 = puVar14 + 3;
            puVar26[-1] = uVar5;
            *puVar15 = uVar6;
            puVar26[-2] = uVar12;
            puVar26 = puVar15;
          }
        }
        goto LAB_7fffa50cc6ac;
      }
      uVar28 = (uVar28 >> 1) + (uVar28 >> 2);
      if ((int64_t)param_3 - (int64_t)puVar30 < (int64_t)puVar29 - (int64_t)puVar20) {
        pcVar18 = (code *)((int64_t)(int)(param_4 + 0x8001227b) + 0x7fffa50d98a5);
        (*pcVar18)(pcVar18,uVar28 * 0x4000001,param_3,~(param_4 ^ 0xffffffff));
        param_3 = puVar29;
        puVar30 = puVar20;
      }
      else {
        pcVar18 = (code *)((int64_t)
                           (int)((0x6ab53853U >> (bVar16 & 0x1f) |
                                 0x6ab53853 << 0x20 - (bVar16 & 0x1f)) * -0xb11befb) +
                          0x7fffa50db307);
        (*pcVar18)(pcVar18,uVar28 * 0x4000001,puVar29,
                   0x2707ffe << (bVar16 & 0x1f) | 0x2707ffeU >> 0x20 - (bVar16 & 0x1f));
      }
      uVar24 = (int64_t)param_3 - (int64_t)puVar30;
      puVar29 = param_3;
    } while ((int64_t)(uint64_t)((param_4 ^ 0xbb6afba9) + 0x3b6b093f) <= (int64_t)uVar24);
  }
  if ((puVar30 != param_3) && (puVar29 = puVar30 + 3, puVar29 != param_3)) {
    puVar14 = puVar30;
    puVar20 = puVar29;
    do {
      bVar16 = *(uint8_t *)(puVar14 + 4);
      uVar3 = *(uint32_t *)(puVar14 + 3);
      uStack_60 = (undefined7)((uint64_t)puVar14[5] >> 8);
      uVar5 = *(uint64_t *)((int64_t)puVar14 + 0x21);
      uStack_61 = (uint8_t)((uint64_t)uVar5 >> 0x38);
      uVar17 = *(uint32_t *)((int64_t)puVar14 + 0x1c);
      if ((uVar17 < *(uint32_t *)((int64_t)puVar30 + 4)) ||
         ((puVar14 = puVar20, uVar17 == *(uint32_t *)((int64_t)puVar30 + 4) &&
          (bVar16 < *(uint8_t *)(puVar30 + 1))))) {
        FUN_7fffa56a5f20(puVar29,puVar30,(int64_t)puVar20 - (int64_t)puVar30);
        *(uint8_t *)(puVar30 + 1) = bVar16;
        *(uint32_t *)puVar30 = uVar3;
        *(uint32_t *)((int64_t)puVar30 + 4) = uVar17;
        puVar14 = puVar30;
      }
      else {
        for (; (uVar17 < *(uint32_t *)((int64_t)puVar14 - 0x14) ||
               ((uVar17 == *(uint32_t *)((int64_t)puVar14 - 0x14) && (bVar16 < *(uint8_t *)(puVar14 + -2))
                ))); puVar14 = puVar14 + -3) {
          puVar14[2] = puVar14[-1];
          *puVar14 = puVar14[-3];
          puVar14[1] = puVar14[-2];
        }
        *(uint32_t *)puVar14 = uVar3;
        *(uint32_t *)((int64_t)puVar14 + 4) = uVar17;
        *(uint8_t *)(puVar14 + 1) = bVar16;
      }
      puVar26 = puVar20 + 3;
      puVar14[2] = CONCAT71(uStack_60,uStack_61);
      *(uint64_t *)((int64_t)puVar14 + 9) = uVar5;
      puVar14 = puVar20;
      puVar20 = puVar26;
    } while (puVar26 != param_3);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa50cce4e  |  RVA: 0x95ce4e  |  Size: 22 bytes
// Callers  : none
// Callees  : FUN_7fffa565700c@0xee700c
// ============================================================================
void FUN_7fffa50cce4e(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa565700c(*(uint32_t *)(param_2 + 0x60));
  return;
}


// ============================================================================
// Function : FUN_7fffa50cce70  |  RVA: 0x95ce70  |  Size: 188361 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa50cce70(void) {
    /* +0x95ce70 */ __asm { PUSH RBP }
    /* +0x95ce71 */ __asm { PUSH RBX }
    /* +0x95ce72 */ __asm { PUSH R15 }
    /* +0x95ce74 */ __asm { PUSH R12 }
    /* +0x95ce76 */ __asm { PUSH RSI }
    /* +0x95ce77 */ __asm { PUSH R13 }
    /* +0x95ce79 */ __asm { PUSH R14 }
    /* +0x95ce7b */ __asm { PUSH RDI }
    /* +0x95ce7c */ __asm { SUB RSP,0x558 }
    /* +0x95ce83 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x95ce8b */ __asm { MOVDQA xmmword ptr [RBP + 0x4c0],XMM12 }
    /* +0x95ce94 */ __asm { MOVDQA xmmword ptr [RBP + 0x4b0],XMM8 }
    /* +0x95ce9d */ __asm { MOVDQA xmmword ptr [RBP + 0x4a0],XMM6 }
    /* +0x95cea5 */ __asm { MOVAPS xmmword ptr [RBP + 0x490],XMM11 }
    /* +0x95cead */ __asm { MOVDQA xmmword ptr [RBP + 0x480],XMM10 }
    /* +0x95ceb6 */ __asm { MOVDQA xmmword ptr [RBP + 0x470],XMM9 }
    /* +0x95cebf */ __asm { MOVDQA xmmword ptr [RBP + 0x460],XMM13 }
    /* +0x95cec8 */ __asm { MOVDQA xmmword ptr [RBP + 0x450],XMM7 }
    /* +0x95ced0 */ __asm { MOVDQA xmmword ptr [RBP + 0x440],XMM14 }
    /* +0x95ced9 */ __asm { MOVDQA xmmword ptr [RBP + 0x430],XMM15 }
    /* +0x95cee2 */ __asm { MOV qword ptr [RBP + 0x428],-0x2 }
    /* +0x95ceed */ __asm { MOV R14,R11 }
    /* +0x95cef0 */ __asm { MOV R9,RCX }
    /* +0x95cef3 */ __asm { MOV RBX,-0x4c33122af161c6e }
    /* +0x95cefd */ __asm { SUB RBX,R11 }
    /* +0x95cf00 */ __asm { MOV R8D,0x9a65d6f3 }
    /* +0x95cf06 */ __asm { ADD R8D,0x88c08df7 }
    /* +0x95cf0d */ __asm { MOV R11,RAX }
    /* +0x95cf10 */ __asm { ROL R11,0x28 }
    /* +0x95cf14 */ __asm { ADD RBX,0x4307f8f0 }
    /* +0x95cf1b */ __asm { MOV RSI,RAX }
    /* +0x95cf1e */ __asm { ROL RSI,0x27 }
    /* +0x95cf22 */ __asm { XOR RSI,R11 }
    /* +0x95cf25 */ __asm { XOR RSI,RAX }
    /* +0x95cf28 */ __asm { MOV R13,RSI }
    /* +0x95cf2b */ __asm { ROL R13,0xe }
    /* +0x95cf2f */ __asm { MOV RAX,RSI }
    /* +0x95cf32 */ __asm { ROL RAX,0x10 }
    /* +0x95cf36 */ __asm { MOV qword ptr [RBP + 0x3f8],RAX }
    /* +0x95cf3d */ __asm { XOR RSI,RAX }
    /* +0x95cf40 */ __asm { XOR RSI,R13 }
    /* +0x95cf43 */ __asm { MOV R12,RSI }
    /* +0x95cf46 */ __asm { ROL R12,0x20 }
    /* +0x95cf4a */ __asm { XOR R12,RSI }
    /* +0x95cf4d */ __asm { ROL RSI,0x1c }
    /* +0x95cf51 */ __asm { MOV RAX,RSI }
    /* +0x95cf54 */ __asm { MOV ECX,R14D }
    /* +0x95cf57 */ __asm { ROR R8D,CL }
    /* +0x95cf5a */ __asm { OR RAX,R12 }
    /* +0x95cf5d */ __asm { XOR R12,RSI }
    /* +0x95cf60 */ __asm { XOR R8D,0x99c4919 }
    /* +0x95cf67 */ __asm { MOV R11,-0x44922fff46e44923 }
    /* +0x95cf71 */ __asm { IMUL R11,R9 }
    /* +0x95cf75 */ __asm { IMUL R11,RBX }
    /* +0x95cf79 */ __asm { MOV R9,0xffcedb37e8 }
    /* +0x95cf83 */ __asm { ADD R9,0x36d0216d }
    /* +0x95cf8a */ __asm { XOR R9,0x5ab5b26 }
    /* +0x95cf91 */ __asm { CMP R9,R8 }
    /* +0x95cf94 */ __asm { CMOVLE R12,RAX }
    /* +0x95cf98 */ __asm { MOV R9,R12 }
    /* +0x95cf9b */ __asm { ROL R9,0x8 }
    /* +0x95cf9f */ __asm { ADD R9,0x79d83201 }
    /* +0x95cfa6 */ __asm { MOV R15D,0xe7b2fee2 }
    /* +0x95cfac */ __asm { XOR R15,R9 }
    /* +0x95cfaf */ __asm { MOV dword ptr [RBP + 0x30],0x2d5bc1c5 }
    /* +0x95cfb6 */ __asm { MOV R9D,dword ptr [RBP + 0x30] }
    /* +0x95cfba */ __asm { MOV R9D,0x4cc883ed }
    /* +0x95cfc0 */ __asm { MOVD XMM0,R9D }
    /* +0x95cfc5 */ __asm { MOVZX EAX,uint8_t ptr [R11 + 0x7] }
    /* +0x95cfca */ __asm { XOR R9D,R9D }
    /* +0x95cfcd */ __asm { CMP AL,0xff }
    /* +0x95cfcf */ __asm { SETNZ R9B }
    /* +0x95cfd3 */ __asm { XOR EDI,EDI }
    /* +0x95cfd5 */ __asm { TEST AL,AL }
    /* +0x95cfd7 */ __asm { SETNS DIL }
    /* +0x95cfdb */ __asm { MOV R8D,0xeb2a19f4 }
    /* +0x95cfe1 */ __asm { ADD R8D,0x8476ffd3 }
    /* +0x95cfe8 */ __asm { MOVD XMM11,R14D }
    /* +0x95cfed */ __asm { ROR R8D,CL }
    /* +0x95cff0 */ __asm { MOVSXD RAX,R8D }
    /* +0x95cff3 */ __asm { PXOR XMM0,XMM11 }
    /* +0x95cff8 */ __asm { MOVD R8D,XMM0 }
    /* +0x95cffd */ __asm { ROL R8D,0xd }
    /* +0x95d001 */ __asm { CMP RAX,R8 }
    /* +0x95d004 */ __asm { CMOVG EDI,R9D }
    /* +0x95d008 */ __asm { MOV R8D,0x71a53de2 }
    /* +0x95d00e */ __asm { CMP DIL,0x1 }
    /* +0x95d012 */ __asm { JNZ 0x7fffa50f9735 }
    /* +0x95d018 */ __asm { MOVZX EAX,uint8_t ptr [R11 + 0x8] }
    /* +0x95d01d */ __asm { AND AL,0x1 }
    /* +0x95d01f */ __asm { MOV R9B,0xc8 }
    /* +0x95d022 */ __asm { MOV DIL,0xc8 }
    /* +0x95d025 */ __asm { SUB R9B,DIL }
    /* +0x95d028 */ __asm { MOV ECX,R14D }
    /* +0x95d02b */ __asm { ROL R9B,CL }
    /* +0x95d02e */ __asm { CMP AL,R9B }
    /* +0x95d031 */ __asm { JNZ 0x7fffa50f9735 }
    /* +0x95d037 */ __asm { MOV uint8_t ptr [RBP + 0x368],DIL }
    /* +0x95d03e */ __asm { MOV qword ptr [RBP + 0x3f0],R13 }
    /* +0x95d045 */ __asm { MOV qword ptr [RBP + 0x398],RSI }
    /* +0x95d04c */ __asm { MOV qword ptr [RBP + 0x1e8],RDX }
    /* +0x95d053 */ __asm { MOV qword ptr [RBP + 0x2c8],R10 }
    /* +0x95d05a */ __asm { LEA RAX,[R11 + 0x1e0] }
    /* +0x95d061 */ __asm { MOV R8D,0xcc656677 }
    /* +0x95d067 */ __asm { MOV ECX,0x58c376f9 }
    /* +0x95d06c */ __asm { ADD ECX,R14D }
    /* +0x95d06f */ __asm { ADD ECX,0xf0a9e65b }
    /* +0x95d075 */ __asm { MOV EDI,R14D }
    /* +0x95d078 */ __asm { OR EDI,0x1 }
    /* +0x95d07b */ __asm { IMUL R8D,EDI }
    /* +0x95d07f */ __asm { ADD R8D,0x97acaf1d }
    /* +0x95d086 */ __asm { CMP RCX,R8 }
    /* +0x95d089 */ __asm { MOV qword ptr [RBP + 0x400],RDI }
    /* +0x95d090 */ __asm { MOV qword ptr [RBP + 0x3e0],RAX }
    /* +0x95d097 */ __asm { JNZ 0x7fffa50cd0e0 }
    /* +0x95d099 */ __asm { LEA R9,[R15 + 0x78] }
    /* +0x95d09d */ __asm { MOV qword ptr [RBP + 0x2f0],R9 }
    /* +0x95d0a4 */ __asm { MOV RSI,R11 }
    /* +0x95d0a7 */ __asm { LEA RBX,[R11 + 0x258] }
    /* +0x95d0ae */ __asm { MOV R8D,0x3a0 }
    /* +0x95d0b4 */ __asm { XOR EDX,EDX }
    /* +0x95d0b6 */ __asm { MOV RCX,RAX }
    /* +0x95d0b9 */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0x95d0be */ __asm { MOV R13D,0xea161673 }
    /* +0x95d0c4 */ __asm { MOV ECX,0xebab09ed }
    /* +0x95d0c9 */ __asm { ADD R13D,R14D }
    /* +0x95d0cc */ __asm { ROL R13D,0x1c }
    /* +0x95d0d0 */ __asm { ADD R13,RSI }
    /* +0x95d0d3 */ __asm { NEG ECX }
    /* +0x95d0d5 */ __asm { LEA EAX,[R14 + RCX*0x1] }
    /* +0x95d0d9 */ __asm { ADD EAX,0x95c0ffdd }
    /* +0x95d0de */ __asm { JMP 0x7fffa50cd143 }
    /* +0x95d0e0 */ __asm { MOV EDI,0xf67b9c90 }
    /* +0x95d0e5 */ __asm { ADD EDI,0x4e567cb2 }
    /* +0x95d0eb */ __asm { MOV ECX,R14D }
    /* +0x95d0ee */ __asm { ROR EDI,CL }
    /* +0x95d0f0 */ __asm { LEA R13,[R11 + 0x218] }
    /* +0x95d0f7 */ __asm { LEA R9,[R15 + 0x78] }
    /* +0x95d0fb */ __asm { MOV qword ptr [RBP + 0x2f0],R9 }
    /* +0x95d102 */ __asm { MOV R9W,0xafc2 }
    /* +0x95d107 */ __asm { ADD R9D,R14D }
    /* +0x95d10a */ __asm { XOR R9D,0xb897 }
    /* +0x95d111 */ __asm { MOV RSI,R11 }
    /* +0x95d114 */ __asm { MOVZX EBX,R9W }
    /* +0x95d118 */ __asm { ADD RBX,R11 }
    /* +0x95d11b */ __asm { MOV R8D,0x3a0 }
    /* +0x95d121 */ __asm { XOR EDX,EDX }
    /* +0x95d123 */ __asm { MOV RCX,RAX }
    /* +0x95d126 */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0x95d12b */ __asm { MOV R9,qword ptr [R15 + 0x78] }
    /* +0x95d12f */ __asm { MOV qword ptr [RSI + 0x1e0],R9 }
    /* +0x95d136 */ __asm { IMUL EAX,EDI,0x120eab55 }
    /* +0x95d13c */ __asm { MOV RDI,qword ptr [RBP + 0x400] }
    /* +0x95d143 */ __asm { MOV R8D,0x3dae4cb1 }
    /* +0x95d149 */ __asm { MOV R9D,0x52ae678f }
    /* +0x95d14f */ __asm { IMUL R9D,EDI }
    /* +0x95d153 */ __asm { SUB R8D,R14D }
    /* +0x95d156 */ __asm { ADD R8D,0x3ac833a5 }
    /* +0x95d15d */ __asm { MOV qword ptr [RBP + 0x258],RAX }
    /* +0x95d164 */ __asm { ADD R9D,EAX }
    /* +0x95d167 */ __asm { IMUL ECX,R9D,0x7ffe02f1 }
    /* +0x95d16e */ __asm { ROL R8D,0x9 }
    /* +0x95d172 */ __asm { SUB R8D,EAX }
    /* +0x95d175 */ __asm { MOV R9,qword ptr [R15 + 0x80] }
    /* +0x95d17c */ __asm { MOV qword ptr [RSI + 0x1e8],R9 }
    /* +0x95d183 */ __asm { MOV R9,qword ptr [R15 + 0x88] }
    /* +0x95d18a */ __asm { MOV qword ptr [RSI + 0x1f0],R9 }
    /* +0x95d191 */ __asm { MOV R9,qword ptr [R15 + 0x90] }
    /* +0x95d198 */ __asm { MOV qword ptr [RSI + 0x1f8],R9 }
    /* +0x95d19f */ __asm { MOV R9,qword ptr [R15 + 0x98] }
    /* +0x95d1a6 */ __asm { MOV qword ptr [RBP + 0x3b8],R9 }
    /* +0x95d1ad */ __asm { MOV qword ptr [RSI + 0x200],R9 }
    /* +0x95d1b4 */ __asm { MOV R9,qword ptr [R15 + 0xa0] }
    /* +0x95d1bb */ __asm { CMP R8,RCX }
    /* +0x95d1be */ __asm { MOV qword ptr [RBP + 0x110],RAX }
    /* +0x95d1c5 */ __asm { MOV qword ptr [RBP + 0x418],RSI }
    /* +0x95d1cc */ __asm { JLE 0x7fffa50cd1fb }
    /* +0x95d1ce */ __asm { MOV qword ptr [RSI + 0x208],R9 }
    /* +0x95d1d5 */ __asm { MOV ECX,0xe87d2b54 }
    /* +0x95d1da */ __asm { ADD ECX,0x8001fffc }
    /* +0x95d1e0 */ __asm { MOV R9,qword ptr [R15 + 0xa8] }
    /* +0x95d1e7 */ __asm { MOV qword ptr [RSI + 0x210],R9 }
    /* +0x95d1ee */ __asm { XOR ECX,EAX }
    /* +0x95d1f0 */ __asm { ADD ECX,R14D }
    /* +0x95d1f3 */ __asm { XOR ECX,0x66f89b3a }
    /* +0x95d1f9 */ __asm { JMP 0x7fffa50cd21d }
    /* +0x95d1fb */ __asm { MOV qword ptr [RSI + 0x208],R9 }
    /* +0x95d202 */ __asm { MOV R9,qword ptr [R15 + 0xa8] }
    /* +0x95d209 */ __asm { MOV ECX,0xf36389eb }
    /* +0x95d20e */ __asm { MOV qword ptr [RSI + 0x210],R9 }
    /* +0x95d215 */ __asm { ADD ECX,R14D }
    /* +0x95d218 */ __asm { NOT ECX }
    /* +0x95d21a */ __asm { ROL ECX,0x1a }
    /* +0x95d21d */ __asm { MOV R8D,0x71a53de2 }
    /* +0x95d223 */ __asm { MOV R9D,0x8670956 }
    /* +0x95d229 */ __asm { ADD R9D,0x7c852abb }
    /* +0x95d230 */ __asm { MOV RDX,RCX }
    /* +0x95d233 */ __asm { ROR R9D,CL }
    /* +0x95d236 */ __asm { MOV RAX,qword ptr [R15 + 0xb0] }
    /* +0x95d23d */ __asm { ADD R9D,R14D }
    /* +0x95d240 */ __asm { CMP R9,0x570259d0 }
    /* +0x95d247 */ __asm { JNZ 0x7fffa50cd26a }
    /* +0x95d249 */ __asm { MOV qword ptr [R13],RAX }
    /* +0x95d24d */ __asm { MOV R9,qword ptr [R15 + 0xb8] }
    /* +0x95d254 */ __asm { MOV EDI,0xaabd1d29 }
    /* +0x95d259 */ __asm { ADD EDI,R14D }
    /* +0x95d25c */ __asm { ROL EDI,0x19 }
    /* +0x95d25f */ __asm { MOV RCX,qword ptr [RBP + 0x110] }
    /* +0x95d266 */ __asm { ROL EDI,CL }
    /* +0x95d268 */ __asm { JMP 0x7fffa50cd289 }
    /* +0x95d26a */ __asm { MOV EDI,0x76e580ff }
    /* +0x95d26f */ __asm { ADD EDI,0x3be7327f }
    /* +0x95d275 */ __asm { MOV R9,qword ptr [R15 + 0xb8] }
    /* +0x95d27c */ __asm { MOV qword ptr [R13],RAX }
    /* +0x95d280 */ __asm { XOR EDI,0xe0ceb0dd }
    /* +0x95d286 */ __asm { ADD EDI,R14D }
    /* +0x95d289 */ __asm { MOV CX,0x7f75 }
    /* +0x95d28d */ __asm { MOV R13,RDX }
    /* +0x95d290 */ __asm { LEA R10D,[RDX + RCX*0x1] }
    /* +0x95d294 */ __asm { ADD R10D,0xffffb85f }
    /* +0x95d29b */ __asm { MOV RAX,qword ptr [RBP + 0x418] }
    /* +0x95d2a2 */ __asm { MOV qword ptr [RAX + 0x220],R9 }
    /* +0x95d2a9 */ __asm { MOV R9,qword ptr [R15 + 0xc0] }
    /* +0x95d2b0 */ __asm { MOV qword ptr [RAX + 0x228],R9 }
    /* +0x95d2b7 */ __asm { MOV R9,qword ptr [R15 + 0xc8] }
    /* +0x95d2be */ __asm { MOV ECX,R14D }
    /* +0x95d2c1 */ __asm { ROL R10W,CL }
    /* +0x95d2c5 */ __asm { MOVZX ECX,R10W }
    /* +0x95d2c9 */ __asm { MOV qword ptr [RAX + 0x230],R9 }
    /* +0x95d2d0 */ __asm { MOV R9,qword ptr [R15 + 0xd0] }
    /* +0x95d2d7 */ __asm { MOV qword ptr [RAX + 0x238],R9 }
    /* +0x95d2de */ __asm { MOV R9,qword ptr [R15 + 0xd8] }
    /* +0x95d2e5 */ __asm { MOV qword ptr [RAX + 0x240],R9 }
    /* +0x95d2ec */ __asm { MOV R9,qword ptr [R15 + 0xe0] }
    /* +0x95d2f3 */ __asm { MOV qword ptr [RAX + 0x248],R9 }
    /* +0x95d2fa */ __asm { MOV R9,qword ptr [R15 + 0xe8] }
    /* +0x95d301 */ __asm { MOV qword ptr [RAX + 0x250],R9 }
    /* +0x95d308 */ __asm { MOV R9,qword ptr [R15 + 0xf0] }
    /* +0x95d30f */ __asm { MOV qword ptr [RBX],R9 }
    /* +0x95d312 */ __asm { MOV RBX,RAX }
    /* +0x95d315 */ __asm { MOV R9,qword ptr GS:[RCX] }
    /* +0x95d319 */ __asm { MOV R9W,0x3c11 }
    /* +0x95d31e */ __asm { NOT R9D }
    /* +0x95d321 */ __asm { MOV RAX,qword ptr [RBP + 0x258] }
    /* +0x95d328 */ __asm { ADD R9D,EAX }
    /* +0x95d32b */ __asm { IMUL R9D,R9D,0x6335 }
    /* +0x95d332 */ __asm { MOVZX ECX,R9W }
    /* +0x95d336 */ __asm { XOR RCX,0x9636 }
    /* +0x95d33d */ __asm { MOV R9,qword ptr GS:[RCX] }
    /* +0x95d341 */ __asm { MOV R11D,EAX }
    /* +0x95d344 */ __asm { OR R11D,0x1 }
    /* +0x95d348 */ __asm { MOV R9W,0x8795 }
    /* +0x95d34d */ __asm { MOV EAX,0xc08da593 }
    /* +0x95d352 */ __asm { SUB EAX,R14D }
    /* +0x95d355 */ __asm { ADD EAX,0x555c6702 }
    /* +0x95d35a */ __asm { MOV RSI,RDI }
    /* +0x95d35d */ __asm { MOV ECX,EDI }
    /* +0x95d35f */ __asm { ROL EAX,CL }
    /* +0x95d361 */ __asm { MOV R10D,0xca7fed88 }
    /* +0x95d367 */ __asm { ADD R10D,R14D }
    /* +0x95d36a */ __asm { XOR R9D,R14D }
    /* +0x95d36d */ __asm { MOV qword ptr [RBP + 0x3c0],R11 }
    /* +0x95d374 */ __asm { IMUL R9D,R11D }
    /* +0x95d378 */ __asm { ROL R9W,0x1 }
    /* +0x95d37c */ __asm { MOVZX ECX,R9W }
    /* +0x95d380 */ __asm { MOV EDX,0xe069fb65 }
    /* +0x95d385 */ __asm { SUB EDX,R10D }
    /* +0x95d388 */ __asm { MOV R9,qword ptr [R15 + 0xf8] }
    /* +0x95d38f */ __asm { MOV qword ptr [RBX + 0x260],R9 }
    /* +0x95d396 */ __asm { MOV R9D,dword ptr [R15 + 0x44] }
    /* +0x95d39a */ __asm { MOV qword ptr [RBX + 0x268],R9 }
    /* +0x95d3a1 */ __asm { MOV R9,qword ptr [R15 + 0x70] }
    /* +0x95d3a5 */ __asm { MOV qword ptr [RBX + 0x270],R9 }
    /* +0x95d3ac */ __asm { MOVZX R9D,word ptr [R15 + 0x3c] }
    /* +0x95d3b1 */ __asm { MOV qword ptr [RBX + 0x290],R9 }
    /* +0x95d3b8 */ __asm { MOVZX R9D,word ptr [R15 + 0x38] }
    /* +0x95d3bd */ __asm { MOV qword ptr [RBX + 0x2b0],R9 }
    /* +0x95d3c4 */ __asm { MOVZX R9D,word ptr [R15 + 0x42] }
    /* +0x95d3c9 */ __asm { MOV qword ptr [RBX + RDX*0x1],R9 }
    /* +0x95d3cd */ __asm { MOVZX R9D,word ptr [R15 + 0x3a] }
    /* +0x95d3d2 */ __asm { MOV qword ptr [RBX + 0x2f0],R9 }
    /* +0x95d3d9 */ __asm { MOVZX R9D,word ptr [R15 + 0x3e] }
    /* +0x95d3de */ __asm { MOV qword ptr [RBX + RAX*0x1],R9 }
    /* +0x95d3e2 */ __asm { MOV qword ptr [RBP + 0x2e8],R15 }
    /* +0x95d3e9 */ __asm { MOVZX EAX,word ptr [R15 + 0x40] }
    /* +0x95d3ee */ __asm { MOV R15,R13 }
    /* +0x95d3f1 */ __asm { MOV qword ptr [RBX + 0x330],RAX }
    /* +0x95d3f8 */ __asm { MOV R9,qword ptr GS:[RCX] }
    /* +0x95d3fc */ __asm { MOV qword ptr [RBX + 0x300],R9 }
    /* +0x95d403 */ __asm { MOV qword ptr [RBX + 0x320],R9 }
    /* +0x95d40a */ __asm { MOV dword ptr [RBP + 0x30],0x522ac155 }
    /* +0x95d411 */ __asm { MOV R9D,dword ptr [RBP + 0x30] }
    /* +0x95d415 */ __asm { MOV R9W,0xd8ae }
    /* +0x95d41a */ __asm { ADD R9D,R14D }
    /* +0x95d41d */ __asm { MOV ECX,R15D }
    /* +0x95d420 */ __asm { ROR R9W,CL }
    /* +0x95d424 */ __asm { MOVZX ECX,R9W }
    /* +0x95d428 */ __asm { XOR RCX,0x3bde }
    /* +0x95d42f */ __asm { MOV word ptr [RBX + 0x542],0x302 }
    /* +0x95d438 */ __asm { MOV R9,qword ptr GS:[RCX] }
    /* +0x95d43c */ __asm { MOV R9,qword ptr [R9 + 0x18] }
    /* +0x95d440 */ __asm { MOV RDX,0x1e88b04cf127b8dd }
    /* +0x95d44a */ __asm { IMUL RDX,R9 }
    /* +0x95d44e */ __asm { MOV R9,-0x7d13a990d56e4cdd }
    /* +0x95d458 */ __asm { CMP RDX,R9 }
    /* +0x95d45b */ __asm { NOP }
    /* +0x95d45c */ __asm { NOP }
    /* +0x95d45d */ __asm { NOP }
    /* +0x95d45e */ __asm { NOP }
    /* +0x95d45f */ __asm { NOP }
    /* +0x95d460 */ __asm { NOP }
    /* +0x95d461 */ __asm { NOP }
    /* +0x95d462 */ __asm { NOP }
    /* +0x95d463 */ __asm { NOP }
    /* +0x95d464 */ __asm { MOVZX ECX,uint8_t ptr [RBX + 0x39] }
    /* +0x95d468 */ __asm { LEA R9,[0x7fffa5610f86] }
    /* +0x95d46f */ __asm { MOV R10D,0xda9131eb }
    /* +0x95d475 */ __asm { SUB R10D,ESI }
    /* +0x95d478 */ __asm { ROL R10D,0xb }
    /* +0x95d47c */ __asm { MOV RDI,qword ptr [RBP + 0x400] }
    /* +0x95d483 */ __asm { IMUL R10D,EDI }
    /* +0x95d487 */ __asm { MOVSXD RAX,R10D }
    /* +0x95d48a */ __asm { ADD RAX,R9 }
    /* +0x95d48d */ __asm { MOV qword ptr [RBX + 0x560],RAX }
    /* +0x95d494 */ __asm { AND RCX,0xf }
    /* +0x95d498 */ __asm { MOV R13,qword ptr [RBP + 0x110] }
    /* +0x95d49f */ __asm { JZ 0x7fffa50cd532 }
    /* +0x95d4a5 */ __asm { MOV RDX,0x0 }
    /* +0x95d4ac */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x95d4b3 */ __asm { NOP }
    /* +0x95d4b4 */ __asm { SHL ECX,0x5 }
    /* +0x95d4b7 */ __asm { XOR R10D,R10D }
    /* +0x95d4ba */ __asm { XOR R9D,R9D }
    /* +0x95d4bd */ __asm { NOP dword ptr [RAX] }
    /* +0x95d4c0 */ __asm { MOVZX EAX,uint8_t ptr [RBX + R10*0x1 + 0x40] }
    /* +0x95d4c6 */ __asm { AND AL,0xf }
    /* +0x95d4c8 */ __asm { CMP AL,0x1 }
    /* +0x95d4ca */ __asm { JNZ 0x7fffa50cd4ee }
    /* +0x95d4cc */ __asm { CMP dword ptr [RBX + R10*0x1 + 0x48],0x5 }
    /* +0x95d4d2 */ __asm { JNZ 0x7fffa50cd4ee }
    /* +0x95d4d4 */ __asm { MOV RDX,0x0 }
    /* +0x95d4db */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x95d4e2 */ __asm { CMP dword ptr [RBX + R10*0x1 + 0x50],0xf }
    /* +0x95d4e8 */ __asm { JA 0x7fffa50f9735 }
    /* +0x95d4ee */ __asm { MOV AL,0x66 }
    /* +0x95d4f0 */ __asm { MOV R11D,R15D }
    /* +0x95d4f3 */ __asm { OR R11B,0x1 }
    /* +0x95d4f7 */ __asm { MUL R11B }
    /* +0x95d4fa */ __asm { SUB AL,R14B }
    /* +0x95d4fd */ __asm { ADD AL,0x1f }
    /* +0x95d4ff */ __asm { MOVZX R11D,uint8_t ptr [RBX + R10*0x1 + 0x43] }
    /* +0x95d505 */ __asm { AND R11B,0x7 }
    /* +0x95d509 */ __asm { CMP R11B,AL }
    /* +0x95d50c */ __asm { JNZ 0x7fffa50f9735 }
    /* +0x95d512 */ __asm { MOV EDX,dword ptr [RBX + R10*0x1 + 0x44] }
    /* +0x95d517 */ __asm { CMP EDX,R9D }
    /* +0x95d51a */ __asm { CMOVA R9D,EDX }
    /* +0x95d51e */ __asm { ADD R10,0x20 }
    /* +0x95d522 */ __asm { CMP RCX,R10 }
    /* +0x95d525 */ __asm { JNZ 0x7fffa50cd4c0 }
    /* +0x95d527 */ __asm { CMP R9D,0x20 }
    /* +0x95d52b */ __asm { JBE 0x7fffa50cd535 }
    /* +0x95d52d */ __asm { JMP 0x7fffa50f9735 }
    /* +0x95d532 */ __asm { XOR R9D,R9D }
    /* +0x95d535 */ __asm { MOV R10D,0x20c72d27 }
    /* +0x95d53b */ __asm { ADD R10D,0x54f28ec1 }
    /* +0x95d542 */ __asm { MOV ECX,R14D }
    /* +0x95d545 */ __asm { ROL R10D,CL }
    /* +0x95d548 */ __asm { MOV ECX,R13D }
    /* +0x95d54b */ __asm { ROR R10D,CL }
    /* +0x95d54e */ __asm { XOR R10D,0x70da14d7 }
    /* +0x95d555 */ __asm { MOV dword ptr [RBP + 0x30],R10D }
    /* +0x95d559 */ __asm { MOV R10D,dword ptr [RBP + 0x30] }
    /* +0x95d55d */ __asm { TEST R10B,0x1 }
    /* +0x95d561 */ __asm { JNZ 0x7fffa50fa728 }
    /* +0x95d567 */ __asm { CMP R9D,0x9 }
    /* +0x95d56b */ __asm { MOV qword ptr [RBP + 0x3c8],R14 }
    /* +0x95d572 */ __asm { MOV qword ptr [RBP + 0x3b0],RSI }
    /* +0x95d579 */ __asm { MOV qword ptr [RBP + 0x138],R15 }
    /* +0x95d580 */ __asm { JC 0x7fffa50cda4c }
    /* +0x95d586 */ __asm { CMP R9D,0x20 }
    /* +0x95d58a */ __asm { JNZ 0x7fffa50cd886 }
    /* +0x95d590 */ __asm { MOV dword ptr [RBP + 0x30],0x28193a9b }
    /* +0x95d597 */ __asm { MOV R9D,dword ptr [RBP + 0x30] }
    /* +0x95d59b */ __asm { MOV R9D,0x642a784d }
    /* +0x95d5a1 */ __asm { NOT R9D }
    /* +0x95d5a4 */ __asm { ADD R9D,ESI }
    /* +0x95d5a7 */ __asm { ADD R9D,R14D }
    /* +0x95d5aa */ __asm { MOV R10D,0x100040 }
    /* +0x95d5b0 */ __asm { MOV RAX,qword ptr [RBP + 0x2e8] }
    /* +0x95d5b7 */ __asm { AND R10D,dword ptr [RAX + 0x30] }
    /* +0x95d5bb */ __asm { CMP R10D,R9D }
    /* +0x95d5be */ __asm { JNZ 0x7fffa50f9735 }
    /* +0x95d5c4 */ __asm { MOV dword ptr [RBP + 0x30],0x2ac02394 }
    /* +0x95d5cb */ __asm { MOV R9D,dword ptr [RBP + 0x30] }
    /* +0x95d5cf */ __asm { MOV ECX,0xc890195c }
    /* +0x95d5d4 */ __asm { LEA R10D,[RCX + R13*0x1] }
    /* +0x95d5d8 */ __asm { ADD R10D,0xa9e3d1d6 }
    /* +0x95d5df */ __asm { XOR R10D,R14D }
    /* +0x95d5e2 */ __asm { CMP R9D,R10D }
    /* +0x95d5e5 */ __asm { JNC 0x7fffa50fabbd }
    /* +0x95d5eb */ __asm { MOV RAX,qword ptr [RBP + 0x2e8] }
    /* +0x95d5f2 */ __asm { MOV R9D,dword ptr [RAX + 0x30] }
    /* +0x95d5f6 */ __asm { NOT R9D }
    /* +0x95d5f9 */ __asm { TEST R9D,0x100040 }
    /* +0x95d600 */ __asm { JNZ 0x7fffa50fabe0 }
    /* +0x95d606 */ __asm { MOV R9W,0x2762 }
    /* +0x95d60b */ __asm { XOR R9D,0x25d2 }
    /* +0x95d612 */ __asm { SUB R9D,dword ptr [RBP + 0x258] }
    /* +0x95d619 */ __asm { MOVZX ECX,R9W }
    /* +0x95d61d */ __asm { MOVSXD RCX,dword ptr [RAX + RCX*0x1] }
    /* +0x95d621 */ __asm { LEA R13,[RAX + RCX*0x1] }
    /* +0x95d625 */ __asm { ADD R13,0x4d0 }
    /* +0x95d62c */ __asm { MOV R10W,0x33fe }
    /* +0x95d631 */ __asm { MOV R8D,0x12e015d2 }
    /* +0x95d637 */ __asm { LEA R9,[0x7fffa4791a31] }
    /* +0x95d63e */ __asm { LEA R11,[0x7fffa4793dcf] }
    /* +0x95d645 */ __asm { MOV EDX,R14D }
    /* +0x95d648 */ __asm { XOR EDX,R10D }
    /* +0x95d64b */ __asm { PUSHFQ }
    /* +0x95d64c */ __asm { POP R10 }
    /* +0x95d64e */ __asm { MOV RAX,0x0 }
    /* +0x95d655 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x95d65c */ __asm { IMUL ECX,EDX,-0x734b }
    /* +0x95d662 */ __asm { LEA RAX,[0x7fffa4786a9e] }
    /* +0x95d669 */ __asm { IMUL R8D,EDI }
    /* +0x95d66d */ __asm { MOVSXD RDX,R8D }
    /* +0x95d670 */ __asm { XOR RDX,0x3dba06c6 }
    /* +0x95d677 */ __asm { ADD RDX,R11 }
    /* +0x95d67a */ __asm { SUB ECX,R15D }
    /* +0x95d67d */ __asm { ADD ECX,0xffff9c7a }
    /* +0x95d683 */ __asm { MOVSX RCX,CX }
    /* +0x95d687 */ __asm { MOV R8D,0xb7573a7f }
    /* +0x95d68d */ __asm { ADD R8D,ESI }
    /* +0x95d690 */ __asm { ROL R8D,0x11 }
    /* +0x95d694 */ __asm { NOT R8D }
    /* +0x95d697 */ __asm { ROL R8D,0x4 }
    /* +0x95d69b */ __asm { MOVSXD R8,R8D }
    /* +0x95d69e */ __asm { MOVZX R8D,uint8_t ptr [R9 + R8*0x1 + 0xd] }
    /* +0x95d6a4 */ __asm { MOV R9,qword ptr [RDX + R8*0x8 + 0x19] }
    /* +0x95d6a9 */ __asm { XOR R9,qword ptr [RAX + RCX*0x1 + 0x53] }
    /* +0x95d6ae */ __asm { MOVQ XMM0,R9 }
    /* +0x95d6b3 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x95d6b7 */ __asm { PXOR XMM4,XMM0 }
    /* +0x95d6bb */ __asm { MOVQ qword ptr [RBP + 0x30],XMM4 }
    /* +0x95d6c0 */ __asm { MOV R11,qword ptr [RBP + 0x30] }
    /* +0x95d6c4 */ __asm { TEST R10D,0x100 }
    /* +0x95d6cb */ __asm { NOP }
    /* +0x95d6cc */ __asm { NOP }
    /* +0x95d6cd */ __asm { NOP }
    /* +0x95d6ce */ __asm { NOP }
    /* +0x95d6cf */ __asm { NOP }
    /* +0x95d6d0 */ __asm { MOV dword ptr [RBP + 0x30],0xe023c33e }
    /* +0x95d6d7 */ __asm { MOV R9D,dword ptr [RBP + 0x30] }
    /* +0x95d6db */ __asm { MOV R8D,0x804229bd }
    /* +0x95d6e1 */ __asm { SUB R8D,R14D }
    /* +0x95d6e4 */ __asm { ROL R8D,0x1e }
    /* +0x95d6e8 */ __asm { NOT R8D }
    /* +0x95d6eb */ __asm { CMP R9D,R8D }
    /* +0x95d6ee */ __asm { JNC 0x7fffa50fabe8 }
    /* +0x95d6f4 */ __asm { TEST R11,R11 }
    /* +0x95d6f7 */ __asm { JZ 0x7fffa50fabf9 }
    /* +0x95d6fd */ __asm { MOV R9,qword ptr [RBP + 0x2e8] }
    /* +0x95d704 */ __asm { ADD R9,0x4d0 }
    /* +0x95d70b */ __asm { MOV R10W,0x5562 }
    /* +0x95d710 */ __asm { ADD R10D,0xffffaabe }
    /* +0x95d717 */ __asm { MOV dword ptr [RBP + 0x30],0x0 }
    /* +0x95d71e */ __asm { MOV ECX,ESI }
    /* +0x95d720 */ __asm { ROR R10W,CL }
    /* +0x95d724 */ __asm { MOV ECX,R14D }
    /* +0x95d727 */ __asm { ROL R10W,CL }
    /* +0x95d72b */ __asm { MOVZX EDX,R10W }
    /* +0x95d72f */ __asm { LEA R8,[RBP + 0x30] }
    /* +0x95d733 */ __asm { MOV RCX,R9 }
    /* +0x95d736 */ __asm { CALL R11 }
    /* +0x95d739 */ __asm { MOV qword ptr [RBX + 0x578],RAX }
    /* +0x95d740 */ __asm { TEST RAX,RAX }
    /* +0x95d743 */ __asm { JZ 0x7fffa50f972f }
    /* +0x95d749 */ __asm { MOV R8,qword ptr [R13] }
    /* +0x95d74d */ __asm { MOV qword ptr [RBX + 0x568],R8 }
    /* +0x95d754 */ __asm { TEST R8B,0x4 }
    /* +0x95d758 */ __asm { JZ 0x7fffa50cd870 }
    /* +0x95d75e */ __asm { MOV R9D,0x91fab2b7 }
    /* +0x95d764 */ __asm { MOV R8D,R14D }
    /* +0x95d767 */ __asm { MOV R10W,0x90f6 }
    /* +0x95d76c */ __asm { IMUL R10D,R10D,0x301f }
    /* +0x95d773 */ __asm { MOV ECX,R14D }
    /* +0x95d776 */ __asm { ROR R10W,CL }
    /* +0x95d77a */ __asm { OR R8D,0x1 }
    /* +0x95d77e */ __asm { SUB R10D,ESI }
    /* +0x95d781 */ __asm { MOV DX,0x2207 }
    /* +0x95d785 */ __asm { IMUL EDX,R8D }
    /* +0x95d789 */ __asm { ROL DX,0x4 }
    /* +0x95d78d */ __asm { IMUL EDX,dword ptr [RBP + 0x3c0] }
    /* +0x95d794 */ __asm { MOVZX ECX,DX }
    /* +0x95d797 */ __asm { IMUL EDX,R9D,-0x1df9dc3b }
    /* +0x95d79e */ __asm { NOT EDX }
    /* +0x95d7a0 */ __asm { IMUL EDX,EDI }
    /* +0x95d7a3 */ __asm { XOR EDX,R15D }
    /* +0x95d7a6 */ __asm { ROL R10W,0x2 }
}


// ============================================================================
// Function : Unwind@7fffa50fdd20  |  RVA: 0x98dd20  |  Size: 317 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fdd20(uint64_t param_1,int64_t param_2)

{
  if ((*(uint8_t *)(param_2 + 0x260) & *(uint8_t *)(param_2 + 0xd0)) == 1) {
    (*(code *)((int64_t)
               (((int)*(uint64_t *)(param_2 + 400) + 0x35d69b25) * *(int *)(param_2 + 0x480)) +
              0x7fffa56930bf))
              (*(uint64_t *)(param_2 + 0x448),*(uint64_t *)(param_2 + 400),
               *(uint64_t *)(param_2 + 0x170) >> 0x3d ^ *(uint64_t *)(param_2 + 0x170));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50fde60  |  RVA: 0x98de60  |  Size: 304 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fde60(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x58)) {
    iVar1 = CONCAT22((short)((uint64_t)param_2 >> 0x10),0x6c30) * -0x3eff +
            ((int)*(uint64_t *)(param_2 + 0x448) - *(int *)(param_2 + 0x2d8));
    (*(code *)((int64_t)(short)iVar1 + 0x7fffa568d2c3))
              (iVar1,0x6c30,*(uint64_t *)(param_2 + 0x40) >> 0x3d ^ *(uint64_t *)(param_2 + 0x40))
    ;
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50fdf90  |  RVA: 0x98df90  |  Size: 320 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fdf90(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  if (0xf < *(uint64_t *)(param_2 + 200)) {
    uVar1 = *(uint64_t *)(param_2 + 0xb0);
    uVar3 = (short)*(uint64_t *)(param_2 + 0x430) - 0xca;
    uVar3 = uVar3 * 0x800 | uVar3 >> 5;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x448) & 0xf;
    (*(code *)((int64_t)(short)(uVar3 << bVar2 | uVar3 >> 0x10 - bVar2) + 0x7fffa568c4c4))
              (*(uint64_t *)(param_2 + 0x448),uVar1,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50fe0d0  |  RVA: 0x98e0d0  |  Size: 298 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fe0d0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  code *pcVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x1f8)) {
    uVar1 = ~((int)CONCAT62((int6)((uint64_t)param_1 >> 0x10),0x6fa3) *
             ((uint32_t)*(uint64_t *)(param_2 + 0x1b8) | 1));
    pcVar2 = (code *)((int64_t)(short)((short)uVar1 * 5) + 0x7fffa56898f8);
    (*pcVar2)(uVar1,pcVar2,*(uint64_t *)(param_2 + 0x1e0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1e0)
             );
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50fe200  |  RVA: 0x98e200  |  Size: 369 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fe200(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  
  if ((0xf < *(uint64_t *)(param_2 + 0x3d8) & *(uint8_t *)(param_2 + 0xd0)) == 1) {
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x448);
    uVar1 = *(uint64_t *)(param_2 + 0x3f8);
    uVar4 = ((uVar5 ^ 0xa2226e1a) << 0x13 | (uVar5 ^ 0xa2226e1a) >> 0xd) ^
            (uint32_t)*(uint64_t *)(param_2 + 400);
    uVar4 = uVar4 << 0x1c | uVar4 >> 4;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x430);
    bVar2 = bVar3 & 0x1f;
    uVar6 = uVar1 ^ 0x3d;
    if (uVar4 < ((uVar5 ^ 0x68b09c51) >> bVar2 | (uVar5 ^ 0x68b09c51) << 0x20 - bVar2)) {
      uVar6 = uVar1 >> 0x3d;
    }
    bVar3 = bVar3 & 0x1f;
    (*(code *)((int64_t)(int)((0xd42a6b47U >> bVar3 | -0x2bd594b9 << 0x20 - bVar3) + uVar5) +
              0x7fffa5693b80))(*(uint64_t *)(param_2 + 0x448) & 0xffffffff,uVar4,uVar6 ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa50fe380  |  RVA: 0x98e380  |  Size: 368 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa50fe380(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  int iVar3;
  uint64_t uVar4;
  
  if ((0xf < *(uint64_t *)(param_2 + 0x260) & *(uint8_t *)(param_2 + 0xd0)) == 1) {
    iVar3 = (int)*(uint64_t *)(param_2 + 0x448);
    uVar1 = *(uint64_t *)(param_2 + 0x478);
    uVar4 = uVar1 | 0x3d;
    if (((int)*(uint64_t *)(param_2 + 0x1b8) + 0x27d9594) * 0x75b6b463 + iVar3 != 0x2d1bc05c) {
      uVar4 = uVar1 >> 0x3d;
    }
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x430) & 0x1f;
    (*(code *)((int64_t)(int)(~(0xaf5635a << bVar2 | 0xaf5635aU >> 0x20 - bVar2) + iVar3) +
              0x7fffa56937d8))(*(uint64_t *)(param_2 + 0x430),uVar1 >> 0x3d,uVar4 ^ uVar1);
  }
  return;
}

