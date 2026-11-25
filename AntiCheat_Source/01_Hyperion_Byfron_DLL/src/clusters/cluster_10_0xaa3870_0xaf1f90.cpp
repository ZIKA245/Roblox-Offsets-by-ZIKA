// Subsystem: Internal Routines Cluster 10 (0xaa3870 .. 0xaf1f90)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa5213870  |  RVA: 0xaa3870  |  Size: 16 bytes
// Callers  : FUN_7fffa5581e30@0xe11e30, FUN_7fffa50cad90@0x95ad90
// Callees  : FUN_7fffa5427ac0@0xcb7ac0
// ============================================================================
uint8_t FUN_7fffa5213870(void)

{
  FUN_7fffa5427ac0();
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5213880  |  RVA: 0xaa3880  |  Size: 1116 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5213972) */

void FUN_7fffa5213880(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint32_t unaff_EDI;
  uint16_t uVar6;
  int64_t lVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t lVar10;
  
  uVar3 = (unaff_EDI ^ 0x5b86c84d) * 0x39373023 +
          (unaff_EDI & 0x5b86c84d) * 0x324b0626 + (unaff_EDI ^ 0xa47937b2) * 0x6ec29fd +
          (~unaff_EDI & 0xa47937b2) * 0x324b0626;
  bVar2 = (uint8_t)uVar3;
  lVar7 = (int64_t)(short)(((uint16_t)uVar3 ^ 0x40fc) * -0x7a9b);
  *(uint8_t *)((int64_t)(int)(0xffffeaaeU >> (bVar2 & 0x1f) | -0x1552 << 0x20 - (bVar2 & 0x1f)) +
           0x7fffa47911ab) = (bVar2 | 1) * -0x36 + -0x62;
  *(uint8_t (*) [16])(lVar7 + 0x7fffa478ca22) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar7 + 0x7fffa478ca32) = 0;
  uVar8 = uVar3 | 1;
  *(uint32_t *)((int64_t)(int)(uVar3 ^ 0x3937e0b7) + 0x7fffa47937da) = 0;
  uVar1 = rdtsc();
  lVar7 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)(uVar3 ^ 0x3937e0b7) >> 0x1f,(int)uVar1)) * 0x9847155c1d8861c;
  uVar4 = 0;
  while( true ) {
    if (((0xb2e44e49 - uVar3) * 0x40000000 | 0xb2e44e49 - uVar3 >> 2) < uVar8 * 0x4d01c379) {
      uVar9 = uVar8 * 0x7602a070 | uVar8 * 0x57602a07 >> 0x1c;
      *(char *)(uVar4 + 0x7fffa478671c) = (char)((uint64_t)(lVar7 * 0x55c1d8861c) >> 0x20);
      *(char *)(uVar4 + ((int64_t)(int)(-0x446a2e7a - uVar3) ^ 0xb3248c1U) + 0x7fffa4791db6) =
           (char)((uint64_t)(lVar7 * 0xf5511f75c0) >> 0x20);
      *(char *)((uVar4 | 3) + 0x7fffa478671c) =
           (char)((uint64_t)(lVar7 * -0x61a301a38eec9f00) >> 0x20);
      lVar10 = (int64_t)(short)((short)uVar8 * -0x5a4c) + 0x7fffa478ceb8;
    }
    else {
      *(char *)(uVar4 + (int64_t)(int)(-0x3937b54d - uVar3) + 0x7fffa478ec46) =
           (char)((uint64_t)(lVar7 * 0x55c1d8861c) >> 0x20);
      uVar6 = 0x4192 << (bVar2 & 0xf) | 0x4192U >> 0x10 - (bVar2 & 0xf);
      uVar9 = uVar3 ^ 0x46c8cfd9;
      *(char *)(uVar4 + (int64_t)(short)(uVar6 << 1 | (uint16_t)((short)uVar6 < 0)) + 0x7fffa478d6bb)
           = (char)((uint64_t)(lVar7 * -0x61a301a38eec9f00) >> 0x20);
      *(char *)(uVar4 + (int64_t)
                        (int)(-0x6d951 << (bVar2 & 0x1f) | 0xfff926afU >> 0x20 - (bVar2 & 0x1f)) +
                        0x7fffa4794249) = (char)((uint64_t)(lVar7 * -0xaaee08a40) >> 0x20);
      lVar10 = (int64_t)(int)(uVar3 ^ 0x3937d053) + 0x7fffa479478e;
    }
    lVar5 = lVar7 * 0xf0cd815310;
    lVar7 = lVar7 * -0x61a301a38eec9f00;
    *(char *)(uVar4 + lVar10 + 1) = (char)((uint64_t)lVar5 >> 0x20);
    if (uVar4 == 0x34) break;
    uVar4 = uVar4 + 4;
  }
  uVar6 = 0x2db1U >> (bVar2 & 0xf) | 0x2db1 << 0x10 - (bVar2 & 0xf);
  bVar2 = (uint8_t)uVar9 & 0xf;
  uVar4 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)((uVar9 + 0xd8e9a8ef) * -0x3fffff6b) + 0x7fffa47911b3) *
           0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint32_t *)((int64_t)(int)(uVar8 * 0x64b8ed6c ^ uVar9) + 0x7fffa4791cef + (uVar4 >> 0x20) * 4) =
       *(uint32_t *)((int64_t)(int)(uVar9 + 0xb937fe94 ^ uVar3) + 0x7fffa47935ff) ^ 0x80223887;
  *(char *)((int64_t)(short)(uVar6 << bVar2 | uVar6 >> 0x10 - bVar2) + 0x7fffa4788e8c) =
       (char)(uVar4 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5213cf0  |  RVA: 0xaa3cf0  |  Size: 376 bytes
// Callers  : FUN_7fffa4ed1810@0x761810, FUN_7fffa47de330@0x6e330, FUN_7fffa512f3d0@0x9bf3d0
// Callees  : FUN_7fffa5488850@0xd18850, FUN_7fffa55c8d90@0xe58d90
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void FUN_7fffa5213cf0(uint64_t param_1,int64_t param_2,int *param_3)

{
  uint32_t *puVar1;
  uint8_t bVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  uint8_t *pbVar6;
  int64_t lVar7;
  uint32_t uVar8;
  uint8_t *pbVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint32_t uVar12;
  uint8_t bVar13;
  uint64_t uVar14;
  
  uVar11 = (uint64_t)*param_3;
  if ((uVar11 & 4) == 0) {
    uVar10 = param_1;
  }
  else {
    uVar10 = (int64_t)param_3[1] + param_1 & (int64_t)-param_3[2];
  }
  pbVar9 = (uint8_t *)(*(int64_t *)(param_2 + 8) +
                   (uint64_t)*(uint32_t *)(*(int64_t *)(param_2 + 0x10) + 8));
  bVar2 = pbVar9[3];
  if ((*pbVar9 & 7) < 3) {
    if ((bVar2 & 0xf) != 0) {
LAB_7fffa5213e61:
      uVar14 = (uint64_t)bVar2 & 0xfffffffffffffff0;
      goto LAB_7fffa5213e65;
    }
  }
  else {
    uVar12 = bVar2 & 0x1f;
    if ((bVar2 & 0x1f) != 0) {
      if ((*pbVar9 & 0x40) == 0) {
        lVar7 = (uint64_t)uVar12 + 4;
      }
      else {
        lVar7 = (uint64_t)uVar12 * 2 + 5;
      }
      pbVar9 = pbVar9 + lVar7;
      uVar14 = 0;
      uVar8 = 0;
      pbVar6 = pbVar9;
      if (bVar2 >> 5 != 0) {
        do {
          pbVar9 = pbVar6 + 3;
          bVar13 = *pbVar6 >> 3;
          if (bVar13 != 0) {
            if ((*pbVar6 & 2) == 0) {
              pbVar9 = pbVar6 + (uint64_t)bVar13 + 6;
            }
            else {
              pbVar9 = pbVar9 + (uint64_t)bVar13 * 2 + 4;
            }
          }
          uVar8 = uVar8 + 1;
          pbVar6 = pbVar9;
        } while (uVar8 < bVar2 >> 5);
      }
      uVar8 = 0;
      if ((bVar2 & 0x1f) != 0) {
        do {
          bVar2 = *pbVar9;
          bVar13 = bVar2;
          if (((bVar2 < 4) || (bVar13 = bVar2 & 0xf, (uint8_t)(bVar13 - 8) < 3)) ||
             (bVar13 = bVar2 & 7, (uint8_t)(bVar13 - 4) < 4)) {
            if (bVar13 == 0) {
              bVar2 = pbVar9[1];
              goto LAB_7fffa5213e61;
            }
            if (0x20 < bVar13) goto LAB_7fffa5213e8d;
          }
          else {
            if ((bVar2 & 0x3f) != 0x20) goto LAB_7fffa5213e8d;
            bVar13 = 0x20;
          }
          bVar2 = (&UNK_7fffa5213ea8)[bVar13];
          pbVar6 = (uint8_t *)(uint64_t)bVar2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(bVar2) {
          case 0:
            lVar7 = 2;
            break;
          case 1:
            lVar7 = 5;
            break;
          case 2:
            lVar7 = 3;
            break;
          case 3:
            lVar7 = 1;
            break;
          case 4:
LAB_7fffa5213e8d:
            FUN_7fffa55c8d90();
            pcVar3 = (code *)__debugbreak();
            (*pcVar3)();
            return;
          case 5:
            *pbVar6 = *pbVar6 + bVar2;
            *pbVar6 = *pbVar6 + bVar2;
            *pbVar6 = *pbVar6 + bVar2;
            *pbVar6 = *pbVar6 + bVar2;
            *pbVar6 = *pbVar6 + bVar2;
            *pbVar6 = *pbVar6 + bVar2;
            *pbVar6 = *pbVar6 + bVar2;
            bVar13 = *pbVar6;
            *pbVar6 = *pbVar6 + bVar2;
            pcVar5 = (char *)(param_1 & 0xffffffff);
            puVar1 = (uint32_t *)(pbVar9 + uVar11 + 0x4e);
            uVar12 = *puVar1;
            uVar8 = *puVar1 + (uint32_t)pbVar9;
            *puVar1 = uVar8 + CARRY1(bVar13,bVar2);
            pbVar9[uVar11] =
                 pbVar9[uVar11] + (char)pbVar9 +
                 (CARRY4(uVar12,(uint32_t)pbVar9) || CARRY4(uVar8,(uint32_t)CARRY1(bVar13,bVar2)));
            cVar4 = (char)pcVar5;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
            *pcVar5 = *pcVar5 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          pbVar9 = pbVar9 + lVar7;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar12);
      }
      goto LAB_7fffa5213e65;
    }
  }
  uVar14 = 0;
LAB_7fffa5213e65:
  FUN_7fffa5488850(uVar14 + param_1 ^ *(uint64_t *)((uVar11 & 0xfffffffffffffff8) + uVar10));
  return;
}


// ============================================================================
// Function : FUN_7fffa5213ecc  |  RVA: 0xaa3ecc  |  Size: 1 bytes
// Callers  : FUN_7fffa4ee8dac@0x778dac
// Callees  : none
// ============================================================================
void FUN_7fffa5213ecc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5213ed4  |  RVA: 0xaa3ed4  |  Size: 177 bytes
// Callers  : none
// Callees  : FUN_7fffa549ab90@0xd2ab90, FUN_7fffa5181628@0xa11628
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa5213ed4(uint64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  uint32_t uVar1;
  int64_t lVar2;
  uint64_t uStack_58;
  uint64_t *puStack_50;
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
  }
  if (param_2 != (uint64_t *)0x0) {
    *param_2 = param_1;
  }
  uStack_58 = param_1;
  puStack_50 = param_2;
  uVar1 = FUN_7fffa549ab90(alStack_48,&uStack_58,param_3,0);
  if (cStack_20 == '\x02') {
    *(uint32_t *)(alStack_48[0] + 0x3a8) = *(uint32_t *)(alStack_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (cStack_18 != '\0') {
    lVar2 = FUN_7fffa5181628(alStack_48);
    *(uint32_t *)(lVar2 + 0x20) = uStack_1c;
  }
  if (cStack_10 != '\0') {
    lVar2 = FUN_7fffa5181628(alStack_48);
    *(uint32_t *)(lVar2 + 0x24) = uStack_14;
  }
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa5213f88  |  RVA: 0xaa3f88  |  Size: 78 bytes
// Callers  : FUN_7fffa566083c@0xef083c
// Callees  : FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa5608650@0xe98650, FUN_7fffa519a8c4@0xa2a8c4, FUN_7fffa56a085c@0xf3085c
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5213f88(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (_DAT_7fffa4780244 == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_7fffa5608650();
  }
  if (lVar1 != 0) {
    FUN_7fffa519a8c4(_DAT_7fffa4780244,0,param_3,param_4,uVar2);
    FUN_7fffa56a085c(lVar1);
    FUN_7fffa52d8dd0(lVar1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5214000  |  RVA: 0xaa4000  |  Size: 3453 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5214000(void) {
    /* +0xaa4000 */ __asm { PUSH R15 }
    /* +0xaa4002 */ __asm { PUSH RSI }
    /* +0xaa4003 */ __asm { PUSH R12 }
    /* +0xaa4005 */ __asm { PUSH RBP }
    /* +0xaa4006 */ __asm { PUSH RDI }
    /* +0xaa4007 */ __asm { PUSH R14 }
    /* +0xaa4009 */ __asm { PUSH RBX }
    /* +0xaa400a */ __asm { PUSH R13 }
    /* +0xaa400c */ __asm { SUB RSP,0x58 }
    /* +0xaa4010 */ __asm { MOV R13,RCX }
    /* +0xaa4013 */ __asm { MOV dword ptr [RSP + 0x48],0x3726f9ce }
    /* +0xaa401b */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa4020 */ __asm { TEST R11B,0x1 }
    /* +0xaa4024 */ __asm { NOP }
    /* +0xaa4025 */ __asm { NOP }
    /* +0xaa4026 */ __asm { NOP }
    /* +0xaa4027 */ __asm { NOP }
    /* +0xaa4028 */ __asm { NOP }
    /* +0xaa4029 */ __asm { PUSHFQ }
    /* +0xaa402a */ __asm { POP RDI }
    /* +0xaa402b */ __asm { TEST EDI,0x100 }
    /* +0xaa4031 */ __asm { NOP }
    /* +0xaa4032 */ __asm { NOP }
    /* +0xaa4033 */ __asm { NOP }
    /* +0xaa4034 */ __asm { NOP }
    /* +0xaa4035 */ __asm { NOP }
    /* +0xaa4036 */ __asm { NOP }
    /* +0xaa4037 */ __asm { MOV RAX,0x0 }
    /* +0xaa403e */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xaa4045 */ __asm { MOV dword ptr [RSP + 0x48],0x6775d915 }
    /* +0xaa404d */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa4052 */ __asm { CMP R11D,0x95c9fbad }
    /* +0xaa4059 */ __asm { JNC 0x7fffa5214a72 }
    /* +0xaa405f */ __asm { PUSHFQ }
    /* +0xaa4060 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xaa4068 */ __asm { POPFQ }
    /* +0xaa4069 */ __asm { MOV dword ptr [RSP + 0x48],0x7f7df7fb }
    /* +0xaa4071 */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa4076 */ __asm { CMP R11D,0xfccf9be8 }
    /* +0xaa407d */ __asm { JNC 0x7fffa5214a82 }
    /* +0xaa4083 */ __asm { MOV dword ptr [RSP + 0x48],0xd71e7108 }
    /* +0xaa408b */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa4090 */ __asm { MOV dword ptr [RSP + 0x48],0x4581014 }
    /* +0xaa4098 */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa409d */ __asm { MOV R11W,0x20c5 }
    /* +0xaa40a2 */ __asm { ADD R11D,0xffffe3bb }
    /* +0xaa40a9 */ __asm { MOV ECX,R13D }
    /* +0xaa40ac */ __asm { ROR R11W,CL }
    /* +0xaa40b0 */ __asm { MOVZX R8D,R11W }
    /* +0xaa40b4 */ __asm { MOV R15,qword ptr GS:[R8] }
    /* +0xaa40b8 */ __asm { MOV R11D,0x46f01443 }
    /* +0xaa40be */ __asm { LEA R10,[0x7fffa47ca4f5] }
    /* +0xaa40c5 */ __asm { IMUL R11D,R11D,-0x22b4d22b }
    /* +0xaa40cc */ __asm { ROR R11D,CL }
    /* +0xaa40cf */ __asm { MOVSXD RDX,R11D }
    /* +0xaa40d2 */ __asm { MOV R11D,dword ptr [R10 + RDX*0x1] }
    /* +0xaa40d6 */ __asm { CMP R11D,R15D }
    /* +0xaa40d9 */ __asm { JZ 0x7fffa5214125 }
    /* +0xaa40db */ __asm { MOV R11W,0xaaa2 }
    /* +0xaa40e0 */ __asm { LEA RSI,[0x7fffa47bbfee] }
    /* +0xaa40e7 */ __asm { IMUL R11D,R11D,-0x6905 }
    /* +0xaa40ee */ __asm { LEA R10,[0x7fffa47c57c5] }
    /* +0xaa40f5 */ __asm { MOV EDX,0x183abb43 }
    /* +0xaa40fa */ __asm { LEA EAX,[RDX + R13*0x1] }
    /* +0xaa40fe */ __asm { ADD EAX,0x646e7c40 }
    /* +0xaa4103 */ __asm { ROL EAX,0x8 }
    /* +0xaa4106 */ __asm { MOVSXD RDX,EAX }
    /* +0xaa4109 */ __asm { MOV R12D,R13D }
    /* +0xaa410c */ __asm { XOR R12D,R11D }
    /* +0xaa410f */ __asm { LEA RCX,[R10 + RDX*0x1] }
    /* +0xaa4113 */ __asm { ADD RCX,0x8 }
    /* +0xaa4117 */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0xaa411d */ __asm { MOVSX RDX,R12W }
    /* +0xaa4121 */ __asm { XCHG dword ptr [RSI + RDX*0x1],R15D }
    /* +0xaa4125 */ __asm { MOV R11D,0x80bc9774 }
    /* +0xaa412b */ __asm { MOV AX,0xd7a6 }
    /* +0xaa412f */ __asm { ADD EAX,0x2190 }
    /* +0xaa4134 */ __asm { MOV ECX,R13D }
    /* +0xaa4137 */ __asm { ROL AX,CL }
    /* +0xaa413a */ __asm { LEA R10,[0x7fffa47c4e59] }
    /* +0xaa4141 */ __asm { XOR R11D,0x7f4b9b0b }
    /* +0xaa4148 */ __asm { ROR R11D,CL }
    /* +0xaa414b */ __asm { MOVSXD RDX,R11D }
    /* +0xaa414e */ __asm { MOV R11D,dword ptr [R10 + RDX*0x1 + 0x4] }
    /* +0xaa4153 */ __asm { INC R11D }
    /* +0xaa4156 */ __asm { LEA R10,[0x7fffa47c2bb1] }
    /* +0xaa415d */ __asm { MOVSX RDX,AX }
    /* +0xaa4161 */ __asm { MOV dword ptr [R10 + RDX*0x1 + 0x4],R11D }
    /* +0xaa4166 */ __asm { TEST EDI,0x100 }
    /* +0xaa416c */ __asm { NOP }
    /* +0xaa416d */ __asm { NOP }
    /* +0xaa416e */ __asm { NOP }
    /* +0xaa416f */ __asm { NOP }
    /* +0xaa4170 */ __asm { NOP }
    /* +0xaa4171 */ __asm { NOP }
    /* +0xaa4172 */ __asm { NOP }
    /* +0xaa4173 */ __asm { NOP }
    /* +0xaa4174 */ __asm { NOP }
    /* +0xaa4175 */ __asm { MOV dword ptr [RSP + 0x48],0x948d28f }
    /* +0xaa417d */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa4182 */ __asm { TEST R11D,R11D }
    /* +0xaa4185 */ __asm { JS 0x7fffa5214a8a }
    /* +0xaa418b */ __asm { MOV dword ptr [RSP + 0x48],0x5c0ed8f6 }
    /* +0xaa4193 */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa4198 */ __asm { TEST R11B,0x1 }
    /* +0xaa419c */ __asm { JNZ 0x7fffa5214a92 }
    /* +0xaa41a2 */ __asm { MOV dword ptr [RSP + 0x48],0x63e27f24 }
    /* +0xaa41aa */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa41af */ __asm { TEST R11B,0x1 }
    /* +0xaa41b3 */ __asm { JNZ 0x7fffa5214a9a }
    /* +0xaa41b9 */ __asm { MOV R11W,0xc9e9 }
    /* +0xaa41be */ __asm { MOV EAX,R13D }
    /* +0xaa41c1 */ __asm { OR EAX,0x1 }
    /* +0xaa41c4 */ __asm { MOV R9D,EAX }
    /* +0xaa41c7 */ __asm { IMUL R9D,R11D }
    /* +0xaa41cb */ __asm { ROL R9W,0x7 }
    /* +0xaa41d0 */ __asm { ADD R9D,0xffffc982 }
    /* +0xaa41d7 */ __asm { MOVZX R8D,R9W }
    /* +0xaa41db */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0xaa41df */ __asm { MOV ECX,0xb9d6f563 }
    /* +0xaa41e4 */ __asm { ADD RCX,qword ptr [R10 + 0x18] }
    /* +0xaa41e8 */ __asm { MOV R10,0xf5ac1fb93b652c2 }
    /* +0xaa41f2 */ __asm { CMP RCX,R10 }
    /* +0xaa41f5 */ __asm { JZ 0x7fffa5214a3d }
    /* +0xaa41fb */ __asm { MOV R11W,0x3052 }
    /* +0xaa4200 */ __asm { IMUL R11D,R11D,0x95 }
    /* +0xaa4207 */ __asm { XOR R11D,0x275a }
    /* +0xaa420e */ __asm { MOV R9D,EAX }
    /* +0xaa4211 */ __asm { IMUL R9D,R11D }
    /* +0xaa4215 */ __asm { MOVZX R8D,R9W }
    /* +0xaa4219 */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0xaa421d */ __asm { MOV RCX,-0x286dd80cc09fadf }
    /* +0xaa4227 */ __asm { MOV R10,qword ptr [R10 + 0xb00] }
    /* +0xaa422e */ __asm { MOV RDX,0x72c3f62504e81755 }
    /* +0xaa4238 */ __asm { MOV R9,R13 }
    /* +0xaa423b */ __asm { OR R9,0x1 }
    /* +0xaa423f */ __asm { IMUL RCX,R9 }
    /* +0xaa4243 */ __asm { ROL RCX,0x17 }
    /* +0xaa4247 */ __asm { SUB R10,RDX }
    /* +0xaa424a */ __asm { XOR R10,RCX }
    /* +0xaa424d */ __asm { CMP R10,-0x6b02c7e0 }
    /* +0xaa4254 */ __asm { JZ 0x7fffa5214a45 }
    /* +0xaa425a */ __asm { MOV R11W,0x9e8e }
    /* +0xaa425f */ __asm { IMUL R8D,R11D,-0x1d55 }
    /* +0xaa4266 */ __asm { NOT R8D }
    /* +0xaa4269 */ __asm { LEA RCX,[0x7fffa47c08bf] }
    /* +0xaa4270 */ __asm { MOVSX RDX,R8W }
    /* +0xaa4274 */ __asm { MOV R11W,0x9c03 }
    /* +0xaa4279 */ __asm { IMUL R8D,R11D,-0x7ac5 }
    /* +0xaa4280 */ __asm { ADD R8D,0x2364 }
    /* +0xaa4287 */ __asm { MOVSX R11,R8W }
    /* +0xaa428b */ __asm { LEA R10,[0x7fffa47bf4af] }
    /* +0xaa4292 */ __asm { ADD R10,RDX }
    /* +0xaa4295 */ __asm { MOVZX R8D,uint8_t ptr [RCX + R11*0x1 + 0x7] }
    /* +0xaa429b */ __asm { MOVZX EDX,uint8_t ptr [R10 + R8*0x8 + 0x1a] }
    /* +0xaa42a1 */ __asm { MOVZX R11D,uint8_t ptr [R10 + R8*0x8 + 0x17] }
    /* +0xaa42a7 */ __asm { ROL DL,0x6 }
    /* +0xaa42aa */ __asm { MOVZX ECX,uint8_t ptr [R10 + R8*0x8 + 0x18] }
    /* +0xaa42b0 */ __asm { ROL CL,0x6 }
    /* +0xaa42b3 */ __asm { MOVZX EBP,uint8_t ptr [R10 + R8*0x8 + 0x19] }
    /* +0xaa42b9 */ __asm { ROL BPL,0x6 }
    /* +0xaa42bd */ __asm { ROL R11B,0x6 }
    /* +0xaa42c1 */ __asm { MOV uint8_t ptr [RSP + 0x4c],BPL }
    /* +0xaa42c6 */ __asm { MOVZX EBP,uint8_t ptr [R10 + R8*0x8 + 0x15] }
    /* +0xaa42cc */ __asm { ROL BPL,0x6 }
    /* +0xaa42d0 */ __asm { MOV uint8_t ptr [RSP + 0x48],BPL }
    /* +0xaa42d5 */ __asm { MOVZX EBP,uint8_t ptr [R10 + R8*0x8 + 0x1c] }
    /* +0xaa42db */ __asm { MOV uint8_t ptr [RSP + 0x4b],CL }
    /* +0xaa42df */ __asm { ROL BPL,0x6 }
    /* +0xaa42e3 */ __asm { MOV uint8_t ptr [RSP + 0x4f],BPL }
    /* +0xaa42e8 */ __asm { MOVZX ECX,uint8_t ptr [R10 + R8*0x8 + 0x16] }
    /* +0xaa42ee */ __asm { ROL CL,0x6 }
    /* +0xaa42f1 */ __asm { MOV uint8_t ptr [RSP + 0x49],CL }
    /* +0xaa42f5 */ __asm { MOVZX R10D,uint8_t ptr [R10 + R8*0x8 + 0x1b] }
    /* +0xaa42fb */ __asm { ROL R10B,0x6 }
    /* +0xaa42ff */ __asm { MOV uint8_t ptr [RSP + 0x4e],R10B }
    /* +0xaa4304 */ __asm { MOV uint8_t ptr [RSP + 0x4d],DL }
    /* +0xaa4308 */ __asm { MOV uint8_t ptr [RSP + 0x4a],R11B }
    /* +0xaa430d */ __asm { MOV R12,qword ptr [RSP + 0x48] }
    /* +0xaa4312 */ __asm { MOV RBP,RDI }
    /* +0xaa4315 */ __asm { TEST EBP,0x100 }
    /* +0xaa431b */ __asm { NOP }
    /* +0xaa431c */ __asm { NOP }
    /* +0xaa431d */ __asm { NOP }
    /* +0xaa431e */ __asm { NOP }
    /* +0xaa431f */ __asm { NOP }
    /* +0xaa4320 */ __asm { NOP }
    /* +0xaa4321 */ __asm { NOP }
    /* +0xaa4322 */ __asm { NOP }
    /* +0xaa4323 */ __asm { NOP }
    /* +0xaa4324 */ __asm { NOP }
    /* +0xaa4325 */ __asm { NOP }
    /* +0xaa4326 */ __asm { NOP }
    /* +0xaa4327 */ __asm { NOP }
    /* +0xaa4328 */ __asm { NOP }
    /* +0xaa4329 */ __asm { NOP }
    /* +0xaa432a */ __asm { NOP }
    /* +0xaa432b */ __asm { NOP }
    /* +0xaa43ca */ __asm { MOV R10,R12 }
    /* +0xaa43cd */ __asm { SHR R10,0x10 }
    /* +0xaa43d1 */ __asm { MOV R11,R12 }
    /* +0xaa43d4 */ __asm { SHR R11,0x18 }
    /* +0xaa43d8 */ __asm { MOV RDX,R12 }
    /* +0xaa43db */ __asm { SHR RDX,0x8 }
    /* +0xaa43df */ __asm { MOV R8W,0x193e }
    /* +0xaa43e4 */ __asm { ADD R8D,0xffffae96 }
    /* +0xaa43eb */ __asm { MOV R15D,R13D }
    /* +0xaa43ee */ __asm { XOR R15D,R8D }
    /* +0xaa43f1 */ __asm { MOVZX R8D,R15W }
    /* +0xaa43f5 */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0xaa43f9 */ __asm { MOV RSI,0x4aeee4b1c7925659 }
    /* +0xaa4403 */ __asm { CMP qword ptr [R8 + 0x60],RSI }
    /* +0xaa4407 */ __asm { NOP }
    /* +0xaa4408 */ __asm { NOP }
    /* +0xaa4409 */ __asm { NOP }
    /* +0xaa440a */ __asm { NOP }
    /* +0xaa440b */ __asm { NOP }
    /* +0xaa440c */ __asm { MOV R15D,0xaa4d3eb3 }
    /* +0xaa4412 */ __asm { ADD R15D,R13D }
    /* +0xaa4415 */ __asm { ROL R15D,0x11 }
    /* +0xaa4419 */ __asm { MOV R8D,EDX }
    /* +0xaa441c */ __asm { SHL R8D,0x8 }
    /* +0xaa4420 */ __asm { MOVZX EBX,R10B }
    /* +0xaa4424 */ __asm { SHL EBX,0x10 }
    /* +0xaa4427 */ __asm { MOVZX R8D,R8W }
    /* +0xaa442b */ __asm { MOVZX ESI,R12B }
    /* +0xaa442f */ __asm { MOV EDI,R11D }
    /* +0xaa4432 */ __asm { SHL EDI,0x18 }
    /* +0xaa4435 */ __asm { OR EDI,EBX }
    /* +0xaa4437 */ __asm { OR EDI,R8D }
    /* +0xaa443a */ __asm { OR EDI,ESI }
    /* +0xaa443c */ __asm { CMP EDI,R15D }
    /* +0xaa443f */ __asm { JNZ 0x7fffa521489e }
    /* +0xaa4445 */ __asm { MOV dword ptr [RSP + 0x48],0x2a1a0eb3 }
    /* +0xaa444d */ __asm { MOV R8D,dword ptr [RSP + 0x48] }
    /* +0xaa4452 */ __asm { TEST R8D,R8D }
    /* +0xaa4455 */ __asm { JS 0x7fffa5214acd }
    /* +0xaa445b */ __asm { PUSHFQ }
    /* +0xaa445c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xaa4464 */ __asm { POPFQ }
    /* +0xaa4465 */ __asm { MOV dword ptr [RSP + 0x48],0xc1096d52 }
    /* +0xaa446d */ __asm { MOV R8D,dword ptr [RSP + 0x48] }
    /* +0xaa4472 */ __asm { TEST R8B,0x1 }
    /* +0xaa4476 */ __asm { JNZ 0x7fffa5214ad5 }
    /* +0xaa447c */ __asm { MOV qword ptr [RSP + 0x30],R12 }
    /* +0xaa4481 */ __asm { MOV dword ptr [RSP + 0x48],0x902febf3 }
    /* +0xaa4489 */ __asm { MOV R8D,dword ptr [RSP + 0x48] }
    /* +0xaa448e */ __asm { TEST R8B,0x1 }
    /* +0xaa4492 */ __asm { JZ 0x7fffa5214ae6 }
    /* +0xaa4498 */ __asm { LEA RBX,[0x7fffa4770000] }
    /* +0xaa449f */ __asm { NOP }
    /* +0xaa44a0 */ __asm { MOV R8,0x0 }
    /* +0xaa44a7 */ __asm { MOV R8W,0xce38 }
    /* +0xaa44ac */ __asm { IMUL R8D,EAX }
    /* +0xaa44b0 */ __asm { ROL R8W,0x1 }
    /* +0xaa44b4 */ __asm { MOVZX R8D,R8W }
    /* +0xaa44b8 */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0xaa44bc */ __asm { MOV RSI,0x1285cc2d56bbeba9 }
    /* +0xaa44c6 */ __asm { MOV R12,-0x11c6f0f5c }
    /* +0xaa44d0 */ __asm { MOV R14,R13 }
    /* +0xaa44d3 */ __asm { ADD R14,R12 }
    /* +0xaa44d6 */ __asm { ADD R14,RSI }
    /* +0xaa44d9 */ __asm { CMP qword ptr [R8 + 0x7e8],R14 }
    /* +0xaa44e0 */ __asm { NOP }
    /* +0xaa44e1 */ __asm { NOP }
    /* +0xaa44e2 */ __asm { NOP }
    /* +0xaa44e3 */ __asm { NOP }
    /* +0xaa44e4 */ __asm { NOP }
    /* +0xaa44e5 */ __asm { NOP }
    /* +0xaa44e6 */ __asm { NOP }
    /* +0xaa44e7 */ __asm { NOP }
    /* +0xaa44e8 */ __asm { NOP }
    /* +0xaa44e9 */ __asm { NOP }
    /* +0xaa44ea */ __asm { NOP }
    /* +0xaa44eb */ __asm { NOP }
    /* +0xaa44ec */ __asm { NOP }
    /* +0xaa44ed */ __asm { NOP }
    /* +0xaa44ee */ __asm { NOP }
    /* +0xaa44ef */ __asm { NOP }
    /* +0xaa44f0 */ __asm { MOV R8W,0xb2fa }
    /* +0xaa44f5 */ __asm { XOR R8D,0x270 }
    /* +0xaa44fc */ __asm { ADD R8D,R13D }
    /* +0xaa44ff */ __asm { ADD R8D,0xffff87f2 }
    /* +0xaa4506 */ __asm { MOVZX R8D,R8W }
    /* +0xaa450a */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0xaa450e */ __asm { MOV BX,0xf87d }
    /* +0xaa4512 */ __asm { XOR EBX,0x2b99 }
    /* +0xaa4518 */ __asm { SUB EBX,R13D }
    /* +0xaa451b */ __asm { ROL BX,0xb }
    /* +0xaa451f */ __asm { MOVZX R12D,BX }
    /* +0xaa4523 */ __asm { MOV R8,qword ptr [R8 + 0x18] }
    /* +0xaa4527 */ __asm { MOV RSI,qword ptr GS:[R12] }
    /* +0xaa452c */ __asm { MOV R12D,0x5f4356c3 }
    /* +0xaa4532 */ __asm { ADD R12D,R13D }
    /* +0xaa4535 */ __asm { ROL R12D,0x1e }
    /* +0xaa4539 */ __asm { IMUL R8,qword ptr [RSI + 0x18] }
    /* +0xaa453e */ __asm { MOV RSI,0x76459ec05110cae1 }
    /* +0xaa4548 */ __asm { IMUL RSI,R8 }
    /* +0xaa454c */ __asm { NOT RSI }
    /* +0xaa454f */ __asm { ADD R12D,0xe892b35b }
    /* +0xaa4556 */ __asm { SUB RSI,R12 }
    /* +0xaa4559 */ __asm { MOV R8,0x26593ef6d8d81d9c }
    /* +0xaa4563 */ __asm { CMP RSI,R8 }
    /* +0xaa4566 */ __asm { NOP }
    /* +0xaa4567 */ __asm { NOP }
    /* +0xaa4568 */ __asm { NOP }
    /* +0xaa4569 */ __asm { NOP }
    /* +0xaa456a */ __asm { NOP }
    /* +0xaa456b */ __asm { NOP }
    /* +0xaa456c */ __asm { NOP }
    /* +0xaa456d */ __asm { NOP }
    /* +0xaa456e */ __asm { NOP }
    /* +0xaa456f */ __asm { NOP }
    /* +0xaa4570 */ __asm { NOP }
    /* +0xaa4571 */ __asm { NOP }
    /* +0xaa4572 */ __asm { NOP }
    /* +0xaa4573 */ __asm { NOP }
    /* +0xaa4574 */ __asm { NOP }
    /* +0xaa4575 */ __asm { NOP }
    /* +0xaa4576 */ __asm { MOV EBX,0x3b21964b }
    /* +0xaa457b */ __asm { MOV dword ptr [RSP + 0x48],0x1ffcde3a }
    /* +0xaa4583 */ __asm { MOV R8D,dword ptr [RSP + 0x48] }
    /* +0xaa4588 */ __asm { MOV R8W,0xab0a }
    /* +0xaa458d */ __asm { ADD R8D,0xfffff166 }
    /* +0xaa4594 */ __asm { IMUL R8D,EAX }
    /* +0xaa4598 */ __asm { MOVZX R8D,R8W }
    /* +0xaa459c */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0xaa45a0 */ __asm { MOV RSI,0x6957af3dc089db44 }
    /* +0xaa45aa */ __asm { MOV RCX,qword ptr [RCX + -0xda0] }
    /* +0xaa45b1 */ __asm { MOV R8D,0xe3eb0e50 }
    /* +0xaa45b7 */ __asm { ADD R8D,R13D }
    /* +0xaa45ba */ __asm { ROL R8D,0x1d }
    /* +0xaa45be */ __asm { MOV R14D,0xe0ee47cf }
    /* +0xaa45c4 */ __asm { ADD RCX,qword ptr [RAX + 0x60] }
    /* +0xaa45c8 */ __asm { MOV R12,0x335ffa89b2b57e89 }
    /* +0xaa45d2 */ __asm { XOR EAX,EAX }
    /* +0xaa45d4 */ __asm { CMP RCX,R12 }
    /* +0xaa45d7 */ __asm { SETC AL }
    /* +0xaa45da */ __asm { IMUL R9,RSI }
    /* +0xaa45de */ __asm { ROL R9,0x25 }
    /* +0xaa45e2 */ __asm { XOR ESI,ESI }
    /* +0xaa45e4 */ __asm { CMP RCX,R9 }
    /* +0xaa45e7 */ __asm { SETZ SIL }
    /* +0xaa45eb */ __asm { LEA ECX,[R14 + R13*0x1] }
    /* +0xaa45ef */ __asm { ADD ECX,0xd6e8f5e1 }
    /* +0xaa45f5 */ __asm { ROL ECX,0xb }
    /* +0xaa45f8 */ __asm { NOT R8D }
    /* +0xaa45fb */ __asm { CMP RCX,R8 }
    /* +0xaa45fe */ __asm { CMOVNC EAX,ESI }
    /* +0xaa4601 */ __asm { CMP AL,0x1 }
    /* +0xaa4603 */ __asm { JZ 0x7fffa5214a55 }
    /* +0xaa4609 */ __asm { MOV R8D,0x172098a6 }
    /* +0xaa460f */ __asm { XOR R8D,0xb94b1bd }
    /* +0xaa4616 */ __asm { ADD R8D,R13D }
    /* +0xaa4619 */ __asm { ROL R8D,0x17 }
    /* +0xaa461d */ __asm { MOV RAX,-0x4080c7f8b6dd3ae5 }
    /* +0xaa4627 */ __asm { CMP qword ptr [R8],RAX }
    /* +0xaa462a */ __asm { NOP }
    /* +0xaa462b */ __asm { NOP }
    /* +0xaa462c */ __asm { NOP }
    /* +0xaa462d */ __asm { NOP }
    /* +0xaa462e */ __asm { NOP }
    /* +0xaa462f */ __asm { ADD EBX,0xc99a9b14 }
    /* +0xaa4635 */ __asm { MOV EAX,R13D }
    /* +0xaa4638 */ __asm { OR EAX,0x1 }
    /* +0xaa463b */ __asm { MOV R9D,0x1bfffd1b }
    /* +0xaa4641 */ __asm { IMUL R9D,R9D,-0x28fc957f }
    /* +0xaa4648 */ __asm { SUB R9D,R13D }
    /* +0xaa464b */ __asm { XOR R9D,0xbeabdbed }
    /* +0xaa4652 */ __asm { MOV dword ptr [RSP + 0x48],R9D }
    /* +0xaa4657 */ __asm { MOV R9D,dword ptr [RSP + 0x48] }
    /* +0xaa465c */ __asm { CMP R9D,0xdc012d51 }
    /* +0xaa4663 */ __asm { NOP }
    /* +0xaa4664 */ __asm { NOP }
    /* +0xaa4665 */ __asm { NOP }
    /* +0xaa4666 */ __asm { NOP }
    /* +0xaa4667 */ __asm { NOP }
    /* +0xaa4668 */ __asm { NOP }
    /* +0xaa4669 */ __asm { NOP }
    /* +0xaa466a */ __asm { NOP }
    /* +0xaa466b */ __asm { NOP }
    /* +0xaa466c */ __asm { NOP }
    /* +0xaa466d */ __asm { NOP }
    /* +0xaa466e */ __asm { NOP }
    /* +0xaa466f */ __asm { NOP }
    /* +0xaa4670 */ __asm { NOP }
    /* +0xaa4671 */ __asm { NOP }
    /* +0xaa4672 */ __asm { NOP }
    /* +0xaa4673 */ __asm { NOP }
    /* +0xaa489e */ __asm { MOV dword ptr [RSP + 0x48],0xefffd9db }
    /* +0xaa48a6 */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa48ab */ __asm { ADD RCX,-0x100 }
    /* +0xaa48b2 */ __asm { MOV RAX,0x67252e85140794f7 }
    /* +0xaa48bc */ __asm { IMUL RAX,RCX }
    /* +0xaa48c0 */ __asm { MOV R10,0x74cc678565e557d6 }
    /* +0xaa48ca */ __asm { IMUL R10,R10,-0x48f068a5 }
    /* +0xaa48d1 */ __asm { XOR R10,RAX }
    /* +0xaa48d4 */ __asm { CMP R10,-0x1 }
    /* +0xaa48d8 */ __asm { NOP }
    /* +0xaa48d9 */ __asm { NOP }
    /* +0xaa48da */ __asm { NOP }
    /* +0xaa48db */ __asm { NOP }
    /* +0xaa48dc */ __asm { NOP }
    /* +0xaa48dd */ __asm { MOV R11W,0xf8c0 }
    /* +0xaa48e2 */ __asm { ADD R11D,0x15f1 }
    /* +0xaa48e9 */ __asm { XOR R11D,R13D }
    /* +0xaa48ec */ __asm { ADD R11D,0x370b }
    /* +0xaa48f3 */ __asm { MOVZX R8D,R11W }
    /* +0xaa48f7 */ __asm { MOV R10,qword ptr GS:[R8] }
    /* +0xaa48fb */ __asm { ROL R10,0x21 }
    /* +0xaa48ff */ __asm { XOR R10,-0x7489e25c }
    /* +0xaa4906 */ __asm { ADD R10,0xab491c1 }
    /* +0xaa490d */ __asm { MOV RAX,-0x25686a44c696d7aa }
    /* +0xaa4917 */ __asm { MOV ECX,0x28cea022 }
    /* +0xaa491c */ __asm { SUB RCX,RAX }
    /* +0xaa491f */ __asm { CMP RCX,R10 }
    /* +0xaa4922 */ __asm { JZ 0x7fffa5214a5e }
    /* +0xaa4928 */ __asm { TEST EBP,0x100 }
    /* +0xaa492e */ __asm { NOP }
    /* +0xaa492f */ __asm { NOP }
    /* +0xaa4930 */ __asm { NOP }
    /* +0xaa4931 */ __asm { NOP }
    /* +0xaa4932 */ __asm { NOP }
    /* +0xaa4933 */ __asm { MOV dword ptr [RSP + 0x48],0x8d55fbd0 }
    /* +0xaa493b */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa4940 */ __asm { TEST R11D,R11D }
    /* +0xaa4943 */ __asm { NOP }
    /* +0xaa4944 */ __asm { NOP }
    /* +0xaa4945 */ __asm { NOP }
    /* +0xaa4946 */ __asm { NOP }
    /* +0xaa4947 */ __asm { NOP }
    /* +0xaa4948 */ __asm { MOV dword ptr [RSP + 0x48],0x26f4aa72 }
    /* +0xaa4950 */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xaa4955 */ __asm { CMP R11D,0xa1e5f15 }
    /* +0xaa495c */ __asm { JBE 0x7fffa5214af2 }
    /* +0xaa4962 */ __asm { TEST EBP,0x100 }
    /* +0xaa4968 */ __asm { NOP }
    /* +0xaa4969 */ __asm { NOP }
    /* +0xaa496a */ __asm { NOP }
    /* +0xaa496b */ __asm { NOP }
    /* +0xaa496c */ __asm { NOP }
    /* +0xaa496d */ __asm { MOV RAX,0x0 }
    /* +0xaa4974 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xaa497b */ __asm { LEA R10,[0x7fffa47befe8] }
    /* +0xaa4982 */ __asm { MOV R11W,0xddce }
    /* +0xaa4987 */ __asm { MOV EAX,0xfffff7b5 }
    /* +0xaa498c */ __asm { SUB EAX,R11D }
    /* +0xaa498f */ __asm { ROL AX,0x3 }
    /* +0xaa4993 */ __asm { MOV R11W,0xd09e }
    /* +0xaa4998 */ __asm { MOVSX RDX,AX }
    /* +0xaa499c */ __asm { LEA RAX,[0x7fffa47c10d9] }
    /* +0xaa49a3 */ __asm { ADD R11D,0xffffaa46 }
    /* +0xaa49aa */ __asm { MOV ECX,R13D }
    /* +0xaa49ad */ __asm { ROL R11W,CL }
    /* +0xaa49b1 */ __asm { MOV R9D,dword ptr [R10 + RDX*0x1 + 0x4] }
    /* +0xaa49b6 */ __asm { MOVSX RDX,R11W }
    /* +0xaa49ba */ __asm { DEC R9D }
    /* +0xaa49bd */ __asm { MOV dword ptr [RAX + RDX*0x1 + 0x4],R9D }
    /* +0xaa49c2 */ __asm { JNZ 0x7fffa5214a17 }
    /* +0xaa49c4 */ __asm { LEA R10,[0x7fffa47caf7e] }
    /* +0xaa49cb */ __asm { MOV R11D,0xa2a0d705 }
    /* +0xaa49d1 */ __asm { IMUL R11D,R11D,0x7472d7cb }
    /* +0xaa49d8 */ __asm { ADD R11D,0xf1974638 }
    /* +0xaa49df */ __asm { MOV ECX,R13D }
    /* +0xaa49e2 */ __asm { ROR R11D,CL }
    /* +0xaa49e5 */ __asm { MOVSXD RDX,R11D }
    /* +0xaa49e8 */ __asm { XOR R11D,R11D }
    /* +0xaa49eb */ __asm { XCHG dword ptr [R10 + RDX*0x1],R11D }
    /* +0xaa49ef */ __asm { MOV R11D,0x26a125b6 }
    /* +0xaa49f5 */ __asm { XOR R11D,0xf9f7282b }
    /* +0xaa49fc */ __asm { SUB R11D,R13D }
    /* +0xaa49ff */ __asm { MOVSXD RDX,R11D }
    /* +0xaa4a02 */ __asm { LEA R10,[0x7fffa47c7967] }
    /* +0xaa4a09 */ __asm { LEA RCX,[R10 + RDX*0x1] }
    /* +0xaa4a0d */ __asm { ADD RCX,0x8 }
    /* +0xaa4a11 */ __asm { CALL qword ptr [0x7fffa5877640] }
    /* +0xaa4a17 */ __asm { CMP EDI,R15D }
    /* +0xaa4a1a */ __asm { SETZ R8B }
    /* +0xaa4a1e */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xaa4a25 */ __asm { MOV RAX,0x0 }
    /* +0xaa4a2c */ __asm { ADD RSP,0x58 }
    /* +0xaa4a30 */ __asm { POP R13 }
    /* +0xaa4a32 */ __asm { POP RBX }
    /* +0xaa4a33 */ __asm { POP R14 }
    /* +0xaa4a35 */ __asm { POP RDI }
    /* +0xaa4a36 */ __asm { POP RBP }
    /* +0xaa4a37 */ __asm { POP R12 }
    /* +0xaa4a39 */ __asm { POP RSI }
    /* +0xaa4a3a */ __asm { POP R15 }
    /* +0xaa4a3c */ __asm { RET }
    /* +0xaa4a3d */ __asm { JNS 0x7fffa5214aa5 }
    /* +0xaa4a3f */ __asm { SUB ECX,0xfffff7b6 }
    /* +0xaa4a45 */ __asm { MOV EAX,ES:[-0x547eb2000007f217] }
    /* +0xaa4a50 */ __asm { JMP 0x7fffa52143ca }
    /* +0xaa4a5e */ __asm { IMUL R13,qword ptr [R8 + 0x100c5f7],-0x7af10000 }
    /* +0xaa4a69 */ __asm { RET }
    /* +0xaa4a72 */ __asm { POP RSI }
    /* +0xaa4a73 */ __asm { FLD extended double ptr [RCX + 0x4678da8] }
    /* +0xaa4a79 */ __asm { SUB DH,DH }
    /* +0xaa4a7b */ __asm { JZ 0x7fffa5214ace }
}


// ============================================================================
// Function : FUN_7fffa5214b10  |  RVA: 0xaa4b10  |  Size: 18 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5214b10(void) {
    /* +0xaa4b10 */ __asm { PUSH RBP }
    /* +0xaa4b11 */ __asm { PUSH RBX }
    /* +0xaa4b12 */ __asm { PUSH R14 }
    /* +0xaa4b14 */ __asm { PUSH R13 }
    /* +0xaa4b16 */ __asm { SUB RSP,0x58 }
    /* +0xaa4b1a */ __asm { LEA RBP,[RSP + 0x50] }
    /* +0xaa4b1f */ __asm { MOV R13,R9 }
}


// ============================================================================
// Function : FUN_7fffa5215110  |  RVA: 0xaa5110  |  Size: 1 bytes
// Callers  : FUN_7fffa56a09c0@0xf309c0, FUN_7fffa54539d0@0xce39d0
// Callees  : none
// ============================================================================
void FUN_7fffa5215110(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5215120  |  RVA: 0xaa5120  |  Size: 601 bytes
// Callers  : FUN_7fffa569fb70@0xf2fb70
// Callees  : FUN_7fffa55f6f60@0xe86f60, FUN_7fffa54037a0@0xc937a0, FUN_7fffa55abf20@0xe3bf20, FUN_7fffa5151f60@0x9e1f60, FUN_7fffa560e390@0xe9e390, FUN_7fffa5246e30@0xad6e30, FUN_7fffa5610170@0xea0170, FUN_7fffa54539d0@0xce39d0
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint64_t
FUN_7fffa5215120(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,uint8_t *param_5,
                int param_6,uint64_t param_7,uint8_t param_8)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  code *pcVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  uint8_t *pbVar7;
  bool bVar8;
  uint64_t in_stack_ffffffffffffff78;
  uint32_t uVar9;
  uint64_t in_stack_ffffffffffffff80;
  uint32_t uVar10;
  int aiStack_68 [14];
  
  uVar9 = (uint32_t)((uint64_t)in_stack_ffffffffffffff78 >> 0x20);
  uVar10 = (uint32_t)((uint64_t)in_stack_ffffffffffffff80 >> 0x20);
  FUN_7fffa560e390(param_3);
  lVar3 = FUN_7fffa54539d0();
  if ((*(int *)(lVar3 + 0x40) == 0) && (iVar1 = *param_1, iVar1 != -0x1f928c9d)) {
    if (iVar1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar8 = *(int64_t *)(param_1 + 0x18) == 0x19930520;
        goto LAB_7fffa521517c;
      }
    }
    else {
      bVar8 = iVar1 == -0x7fffffda;
LAB_7fffa521517c:
      if (bVar8) goto LAB_7fffa5215187;
    }
    if ((*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_7fffa5215187:
  if ((param_1[1] & 0x66U) == 0) {
    FUN_7fffa5610170(aiStack_68,param_5,*(uint64_t *)(param_4 + 8));
    if ((aiStack_68[0] != 0) || ((*param_5 & 0x40) != 0)) {
      if ((*param_1 == -0x1f928c9d) &&
         (((2 < (uint32_t)param_1[6] && (0x19930522 < (uint32_t)param_1[8])) &&
          (iVar1 = *(int *)(*(int64_t *)(param_1 + 0xc) + 8), iVar1 != 0)))) {
        lVar3 = FUN_7fffa5246e30();
        pcVar4 = (code *)(lVar3 + iVar1);
        if (pcVar4 != (code *)0x0) {
          uVar5 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                            CONCAT44(uVar10,(uint32_t)param_8));
          return uVar5;
        }
      }
      FUN_7fffa54037a0(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar9,param_6),
                       param_7);
    }
  }
  else if (((*(int *)(param_5 + 8) != 0) &&
           (pbVar7 = (uint8_t *)(*(int64_t *)(param_4 + 8) + (int64_t)*(int *)(param_5 + 8)),
           uVar6 = *pbVar7 & 0xf,
           *(uint32_t *)(pbVar7 + (-4 - (int64_t)(char)(&UNK_7fffa56b3150)[uVar6])) >>
           ((&UNK_7fffa56b3160)[uVar6] & 0x1f) != 0)) && (param_6 == 0)) {
    if ((param_1[1] & 0x20U) != 0) {
      if (*param_1 == -0x7fffffda) {
        iVar1 = FUN_7fffa5151f60(param_5,param_4,*(uint64_t *)(param_4 + 0x20));
        if ((-2 < iVar1) && (iVar2 = FUN_7fffa55abf20(param_4,param_5), iVar1 < iVar2)) {
          FUN_7fffa55f6f60(param_2,param_4,param_5,iVar1);
          return 1;
        }
LAB_7fffa5215373:
        FUN_7fffa524fccc();
        pcVar4 = (code *)__debugbreak();
        uVar5 = (*pcVar4)();
        return uVar5;
      }
      if (*param_1 == -0x7fffffd7) {
        iVar1 = param_1[0xe];
        if ((-2 < iVar1) && (iVar2 = FUN_7fffa55abf20(param_4,param_5), iVar1 < iVar2)) {
          FUN_7fffa55f6f60(*(uint64_t *)(param_1 + 10),param_4,param_5,iVar1);
          return 1;
        }
        goto LAB_7fffa5215373;
      }
    }
    FUN_7fffa507ac70(param_2,param_4,param_5);
  }
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5215380  |  RVA: 0xaa5380  |  Size: 1 bytes
// Callers  : FUN_7fffa5225520@0xab5520, FUN_7fffa560b2ce@0xe9b2ce, FUN_7fffa5497d30@0xd27d30
// Callees  : none
// ============================================================================
void FUN_7fffa5215380(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5215390  |  RVA: 0xaa5390  |  Size: 3477 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5215390(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  int *piVar1;
  char *pcVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint16_t uVar6;
  uint8_t bVar7;
  int64_t in_RAX;
  uint64_t uVar8;
  int64_t lVar9;
  uint8_t bVar10;
  uint8_t bVar11;
  uint32_t uVar12;
  int iVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  int64_t lVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  bool bVar22;
  uint64_t uVar23;
  uint32_t uVar24;
  int64_t lVar25;
  uint32_t uVar26;
  uint64_t uVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  uint64_t uVar30;
  uint64_t *puVar31;
  uint32_t uVar32;
  int64_t lVar33;
  uint64_t *puVar34;
  int iVar35;
  int iVar36;
  uint64_t uVar37;
  uint64_t *puVar38;
  char cVar39;
  uint8_t uVar43;
  uint8_t uVar45;
  uint8_t uVar47;
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  char cVar44;
  char cVar46;
  char cVar48;
  uint8_t auVar42 [16];
  uint32_t auStack_178 [64];
  uint64_t uStack_78;
  int *piStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  uint32_t uStack_4c;
  uint64_t uStack_48;
  
  param_1 = param_1 ^ 0x7087e94d;
  uVar29 = (uint32_t)param_2;
  uStack_48 = param_2;
  uVar18 = uVar29 | 1;
  bVar10 = (uint8_t)param_2;
  uStack_60 = 0x3970e84b;
  uVar28 = 4;
  if (*(uint32_t *)(param_3 + 0x10c) < 4) {
    uVar28 = *(uint32_t *)(param_3 + 0x10c);
  }
  param_1 = (param_1 << 0x23 | param_1 >> 0x1d) ^
            (param_1 << 1 | (uint64_t)((int64_t)param_1 < 0)) ^ param_1;
  param_1 = (param_1 << 6 | param_1 >> 0x3a) ^ (param_1 << 2 | param_1 >> 0x3e) ^ param_1;
  param_1 = (param_1 << 4 | param_1 >> 0x3c) ^ (param_1 << 0xc | param_1 >> 0x34) ^ param_1;
  param_1 = (param_1 << 8 | param_1 >> 0x38) ^ (param_1 << 0x18 | param_1 >> 0x28) ^ param_1;
  uVar20 = param_1 << 0x30 | param_1 >> 0x10;
  uVar27 = ~uVar20;
  uVar30 = ~param_1;
  uVar37 = ~param_3;
  iVar35 = 1 << ((uint8_t)uVar28 & 0x1f);
  uVar28 = 1 << (*(uint8_t *)(param_3 + 0x100) & 0x1f);
  uVar23 = param_1 << 0x10 | param_1 >> 0x30;
  uVar14 = (uVar20 ^ uVar30) - param_3;
  if ((int64_t)(int)(-0x4c9a7a7 << (bVar10 & 0x1f) | 0xfb365859U >> 0x20 - (bVar10 & 0x1f)) <=
      (int64_t)(uint64_t)((-0x7c70218e - uVar29) * 0x58f4d4ff + 0xdec12c72)) {
    uVar14 = uVar20 ^ uVar30 ^ param_3;
  }
  uVar30 = (((uVar27 | param_1) & uVar37) - uVar14) * 0x558597ac +
           ((param_1 & param_3 & uVar20) - ((uVar27 | uVar30) ^ param_3)) * 0xf1e4438b +
           ((uVar37 | uVar27 & param_1) - ((uVar30 | uVar20) ^ param_3)) * 0x6aca509e +
           (~(param_3 | param_1) & uVar27) *
           (uint64_t)(0x88717e3cU >> (bVar10 & 0x1f) | -0x778e81c4 << 0x20 - (bVar10 & 0x1f)) +
           ((uVar20 ^ param_1) & uVar37) * 0xf1e4438c + ((uVar20 ^ param_1) & param_3) * 0x558597ad
           + (uVar27 & param_1 & uVar37) * -0xc04fe84a;
  uVar20 = uVar23 & uVar30;
  uVar27 = ~uVar30 & ~uVar23;
  uVar37 = ~param_3;
  uVar14 = uVar27 & uVar37;
  if (uVar29 + 0xb972e60b <= (uVar29 ^ 0xab5270fd) + 0x4b541723) {
    uVar14 = uVar37 + uVar27;
  }
  uVar8 = ~uVar23 & uVar30;
  uVar27 = (uVar30 ^ uVar23) & uVar37;
  if (uVar18 * 0x50414eff != -0x6fbc694d) {
    uVar27 = uVar37 * (uVar30 ^ uVar23);
  }
  lVar25 = *(int64_t *)(param_3 + 0x70);
  uVar24 = *(uint32_t *)(param_3 + 0x1c);
  lVar4 = *(int64_t *)(param_3 + 8);
  puVar34 = (uint64_t *)
            (((~uVar20 | uVar37) - uVar14) * 0x74fc9794 +
             (((uVar23 | uVar30) & param_3) - (uVar20 & param_3)) * 0x7a7785c7 +
             ((((uVar23 ^ ~uVar30) & uVar37) - (uVar8 | uVar37)) + (param_3 & uVar8)) * 0xa71921 +
            (param_3 ^ (uVar23 | uVar30)) * 0x7a7785c6 + (param_3 ^ uVar20) * -0xef741d5a +
            uVar27 * -0xeecd0438);
  uStack_60 = (int64_t)puVar34 - lVar4;
  uVar26 = (uint32_t)uStack_60;
  uVar19 = uVar26 - uVar28;
  if (uVar26 - uVar24 <= uVar28) {
    uVar19 = uVar24;
  }
  if (*(int *)(param_3 + 0x28) != 0) {
    uVar19 = uVar24;
  }
  lVar17 = *(int64_t *)(param_3 + 0x38);
  cVar39 = (char)*(uint32_t *)(param_3 + 0x34);
  uVar28 = (uint32_t)*(uint64_t *)(param_3 + 0x60);
  if (*(int *)(param_3 + 300) == 0) {
    uStack_78 = *(uint64_t *)(param_3 + 0x60);
    uStack_4c = uVar19;
    uVar24 = *(uint32_t *)(param_3 + 0x2c);
    uVar14 = (uint64_t)uVar24;
    bVar22 = (int)(uint32_t)(uint16_t)((0xa09bU >> (bVar10 & 0xf) | -0x5f65 << 0x10 - (bVar10 & 0xf)) -
                                0x35d) <= (int)(uVar26 - uVar24);
    if (~((0xe43562b - uVar29) * -0x3ffffffb) <=
        ((uVar29 + 0xcc469822) * 0x2000 | uVar29 + 0xcc469822 >> 0x13)) {
      bVar22 = (uint32_t)(uint16_t)(0x30U >> (bVar10 & 0xf) | 0x30 << 0x10 - (bVar10 & 0xf)) <
               uVar26 - uVar24;
    }
    lVar9 = lVar25;
    lVar33 = lVar17;
    if (bVar22) {
      if (uVar24 < 0xffffffa0) {
        uVar20 = uVar14 + 0x60;
        do {
          uVar23 = (uint64_t)((uint32_t)uVar14 & 7);
          uVar24 = *(uint32_t *)(param_3 + 0x40 + uVar23 * 4);
          *(uint32_t *)(param_3 + 0x40 + uVar23 * 4) =
               (*(int *)(lVar4 + 8 + uVar14) * -0x61c8864f ^ *(uint32_t *)(param_3 + 0x60)) >>
               (0x18U - cVar39 & 0x1f);
          uVar23 = (uint64_t)(uVar24 >> 4 & 0xfffffff0);
          bVar11 = *(uint8_t *)(lVar17 + uVar23);
          lVar33 = 0xf;
          if ((bVar11 & 0xf) != 1) {
            lVar33 = 0;
          }
          bVar7 = ~bVar11;
          if (((uVar29 + 0x53204bc4) * 0x20000 | uVar29 + 0x53204bc4 >> 0xf) == 0xf023762a) {
            bVar7 = bVar11 - 1;
          }
          lVar33 = lVar33 + (uint64_t)(bVar7 & 0xf);
          *(char *)(lVar17 + uVar23) = (char)lVar33;
          *(char *)(lVar17 + uVar23 + lVar33) = (char)uVar24;
          *(uint32_t *)(uVar23 * 4 + lVar25 + lVar33 * 4) = (uint32_t)uVar14;
          uVar14 = ((uVar29 ^ 0x53ddb855) <=
                   ((uVar29 ^ 0xdff52c52) << 3 | (uVar29 ^ 0xdff52c52) >> 0x1d)) + uVar14;
        } while (uVar14 != uVar20);
        lVar33 = *(int64_t *)(param_3 + 0x38);
        lVar9 = *(int64_t *)(param_3 + 0x70);
      }
      uVar32 = 0xcf86ea30U >> (bVar10 & 0x1f) | -0x307915d0 << 0x20 - (bVar10 & 0x1f);
      piVar1 = (int *)((int64_t)puVar34 + 1);
      uVar24 = uVar26 - 0x20;
      uVar14 = (uint64_t)uVar24;
      piStack_70 = (int *)(lVar4 + uVar14);
      uVar15 = (uint32_t)piVar1 - (uint32_t)piStack_70;
      if ((uint64_t)(0x1b45daf1 << (bVar10 & 0x1f) | 0x1b45daf1U >> 0x20 - (bVar10 & 0x1f)) ==
          (int64_t)(int)((uVar29 ^ 0x740d14f5) << 0xb | (uVar29 ^ 0x740d14f5) >> 0x15)) {
        uVar15 = (uint32_t)piVar1 | (uint32_t)piStack_70;
      }
      uVar12 = 8;
      if (uVar15 + 1 < 8) {
        uVar12 = uVar15 + 1;
      }
      bVar22 = (int64_t)piVar1 <= (int64_t)piStack_70;
      if ((uVar32 << 1 | (uint32_t)((int)uVar32 < 0)) < (uVar29 + 0xc53e3a00 ^ 0x52290757) * -0x25c6b2b9
         ) {
        bVar22 = piVar1 < piStack_70;
      }
      uVar15 = 0;
      if (!bVar22) {
        uVar15 = uVar12;
      }
      uVar32 = (uVar26 + uVar15) - 0x20;
      bVar22 = uVar24 < uVar32;
      if (0x6614958e - uVar29 < 0xfc62fc69) {
        bVar22 = uVar24 <= uVar32;
      }
      if (bVar22) {
        uVar32 = *(uint32_t *)(param_3 + 0x60);
        bVar11 = 0x18 - (char)*(uint32_t *)(param_3 + 0x34);
        if ((uVar15 & 1) != 0) {
          uVar14 = uVar14 + 1;
          *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar24 & 7) * 4) =
               (*piStack_70 * -0x61c8864f ^ uVar32) >> (bVar11 & 0x1f);
        }
        if (uVar15 != 1) {
          iVar36 = (((uVar15 + (int)puVar34) - (int)uVar14) - (int)lVar4) + -0x20;
          do {
            uVar20 = (uint64_t)
                     ((0x58361efe << (bVar10 & 0x1f) | 0x58361efeU >> 0x20 - (bVar10 & 0x1f)) +
                     0x6e497faf) + 0x50606c79;
            uVar15 = *(int *)(lVar4 + uVar14) * -0x61c8864f ^ uVar32;
            uVar12 = (uint32_t)uVar14;
            if ((uVar20 << 0x35 | uVar20 >> 0xb) == 0x5b1ffffffffc0450) {
              iVar13 = *(int *)(lVar4 + 1 + uVar14);
              *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar12 & 7) * 4) = uVar15 >> (bVar11 & 0x1f);
            }
            else {
              uVar16 = uVar15 >> (bVar11 & 0x1f);
              if (uVar29 + 0xf224807 < (uVar29 + 0x578eb7cb ^ 0xa50d9260)) {
                uVar16 = (int)uVar15 >> (bVar11 & 0x1f);
              }
              *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar12 & 7) * 4) = uVar16;
              iVar13 = *(int *)(lVar4 + 1 + uVar14);
            }
            uVar14 = uVar14 + 2;
            *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar12 + 1 & 7) * 4) =
                 (iVar13 * -0x61c8864f ^ uVar32) >> (bVar11 & 0x1f);
            iVar36 = iVar36 + -2;
          } while (iVar36 != 0);
        }
      }
    }
    if (uVar24 < uVar26) {
      lVar5 = *(int64_t *)(param_3 + 8);
      uVar14 = (uint64_t)uVar24;
      uVar3 = *(uint32_t *)(param_3 + 0x34);
      do {
        uVar29 = (uint32_t)uVar14;
        piVar1 = (int *)(lVar5 + 8 + uVar14);
        uVar20 = uVar14 + 1;
        uVar14 = (uint64_t)(uVar29 & 1);
        if ((int64_t)
            (int)((0x6b4f24efU >> (bVar10 & 0x1f) | 0x6b4f24ef << 0x20 - (bVar10 & 0x1f)) *
                 0x7825a44d) <=
            (int64_t)
            (uint64_t)(-0x309329aa << (bVar10 & 0x1f) | 0xcf6cd656U >> 0x20 - (bVar10 & 0x1f))) {
          uVar14 = uVar20;
        }
        uVar24 = *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar29 & 7) * 4);
        *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar29 & 7) * 4) =
             (*piVar1 * -0x61c8864f ^ *(uint32_t *)(param_3 + 0x60)) >> (0x18U - (char)uVar3 & 0x1f);
        uVar20 = (uint64_t)(uVar24 >> 4 & 0xfffffff0);
        lVar21 = 0;
        if ((*(uint8_t *)(lVar33 + uVar20) & 0xf) == 1) {
          lVar21 = 0xf;
        }
        lVar21 = lVar21 + (uint64_t)(*(uint8_t *)(lVar33 + uVar20) - 1 & 0xf);
        *(char *)(lVar33 + uVar20) = (char)lVar21;
        *(char *)(uVar20 + lVar33 + lVar21) = (char)uVar24;
        *(uint32_t *)(uVar20 * 4 + lVar9 + lVar21 * 4) = uVar29;
      } while (uVar14 != (uStack_60 & 0xffffffff));
    }
    *(uint32_t *)(param_3 + 0x2c) = uVar26;
    uVar29 = *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar26 & 7) * 4);
    *(uint32_t *)(param_3 + 0x40 + (uint64_t)(uVar26 & 7) * 4) =
         (*(int *)(lVar4 + 8 + (uStack_60 & 0xffffffff)) * -0x61c8864f ^ uVar28) >>
         (0x18U - cVar39 & 0x1f);
  }
  else {
    uVar14 = *puVar34;
    *(uint32_t *)(param_3 + 0x2c) = uVar26;
    uVar29 = ((int)uVar14 * -0x61c8864f ^ uVar28) >> (0x18U - cVar39 & 0x1f);
  }
  *(int *)(param_3 + 0x68) = *(int *)(param_3 + 0x68) + uVar29;
  uVar14 = (uint64_t)(uVar29 >> 4 & 0xfffffff0);
  lVar25 = uVar14 * 4 + lVar25;
  bVar10 = *(uint8_t *)(lVar17 + uVar14);
  pcVar2 = (char *)(lVar17 + uVar14);
  uVar47 = (uint8_t)(uVar29 >> 0x18);
  uVar45 = (uint8_t)(uVar29 >> 0x10);
  uVar43 = (uint8_t)(uVar29 >> 8);
  auVar40._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar47,uVar47),uVar45),CONCAT14(uVar45,uVar29)) >> 0x20);
  auVar40[3] = uVar43;
  auVar40[2] = uVar43;
  auVar40[0] = (uint8_t)uVar29;
  auVar40[1] = auVar40[0];
  auVar40._8_8_ = 0;
  auVar41 = pshuflw(auVar40,auVar40,0);
  cVar39 = auVar41[0];
  auVar42[0] = -(cVar39 == *pcVar2);
  cVar44 = auVar41[1];
  auVar42[1] = -(cVar44 == pcVar2[1]);
  cVar46 = auVar41[2];
  auVar42[2] = -(cVar46 == pcVar2[2]);
  cVar48 = auVar41[3];
  auVar42[3] = -(cVar48 == pcVar2[3]);
  auVar42[4] = -(cVar39 == pcVar2[4]);
  auVar42[5] = -(cVar44 == pcVar2[5]);
  auVar42[6] = -(cVar46 == pcVar2[6]);
  auVar42[7] = -(cVar48 == pcVar2[7]);
  auVar42[8] = -(cVar39 == pcVar2[8]);
  auVar42[9] = -(cVar44 == pcVar2[9]);
  auVar42[10] = -(cVar46 == pcVar2[10]);
  auVar42[0xb] = -(cVar48 == pcVar2[0xb]);
  auVar42[0xc] = -(cVar39 == pcVar2[0xc]);
  auVar42[0xd] = -(cVar44 == pcVar2[0xd]);
  auVar42[0xe] = -(cVar46 == pcVar2[0xe]);
  auVar42[0xf] = -(cVar48 == pcVar2[0xf]);
  uVar6 = (uint16_t)(SUB161(auVar42 >> 7,0) & 1) | (uint16_t)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
          (uint16_t)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
          (uint16_t)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
          (uint16_t)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
          (uint16_t)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
          (uint16_t)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
          (uint16_t)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
          (uint16_t)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
          (uint16_t)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
          (uint16_t)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
          (uint16_t)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
          (uint16_t)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
          (uint16_t)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
          (uint16_t)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar42[0xf] >> 7) << 0xf;
  if (uVar6 != 0) {
    uVar20 = (uint64_t)(uint16_t)(uVar6 >> (bVar10 & 0xf) | uVar6 << 0x10 - (bVar10 & 0xf));
    lVar33 = 0;
    do {
      iVar36 = 0;
      for (uVar23 = uVar20; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x8000000000000000) {
        iVar36 = iVar36 + 1;
      }
      uVar28 = iVar36 + (uint32_t)bVar10 & 0xf;
      if (uVar28 != 0) {
        uVar28 = *(uint32_t *)(lVar25 + (uint64_t)uVar28 * 4);
        if (uVar28 < uVar19) goto LAB_7fffa5215eb6;
        iVar35 = iVar35 + -1;
        auStack_178[lVar33] = uVar28;
        lVar33 = lVar33 + 1;
      }
      uVar20 = uVar20 & uVar20 - 1;
      if ((uVar20 == 0) || (iVar35 == 0)) goto LAB_7fffa5215eb6;
    } while( true );
  }
  lVar33 = 0;
LAB_7fffa5215eb6:
  lVar9 = 0;
  if ((bVar10 & 0xf) == 1) {
    lVar9 = 0xf;
  }
  lVar9 = lVar9 + (uint64_t)(bVar10 - 1 & 0xf);
  *(uint8_t *)(lVar17 + uVar14) = (char)lVar9;
  ((uint8_t *)(lVar17 + uVar14))[lVar9] = auVar40[0];
  iVar35 = *(int *)(param_3 + 0x2c);
  *(int *)(param_3 + 0x2c) = iVar35 + 1;
  *(int *)(lVar25 + lVar9 * 4) = iVar35;
  if (lVar33 != 0) {
    puStack_58 = (uint64_t *)((int64_t)param_4 - 3U);
    lStack_68 = lVar4 + 8;
    uVar14 = 3;
    lVar25 = 0;
    do {
      uVar28 = auStack_178[lVar25];
      puVar31 = (uint64_t *)(lVar4 + (uint64_t)uVar28);
      if (*(int *)((uVar14 - 3) + (int64_t)puVar31) == *(int *)((int64_t)puVar34 + (uVar14 - 3)))
      {
        puVar38 = puVar34;
        if (puVar34 < (uint64_t *)((int64_t)param_4 - 7U)) {
          if (*puVar31 == *puVar34) {
            puVar31 = (uint64_t *)(lVar4 + 8 + (uint64_t)uVar28);
            lVar17 = 0;
            do {
              puVar38 = puVar38 + 1;
              if ((uint64_t *)((int64_t)param_4 - 7U) <= puVar38) goto LAB_7fffa5215f60;
              uVar20 = *puVar31;
              lVar17 = lVar17 + 8;
              puVar31 = puVar31 + 1;
            } while (uVar20 == *puVar38);
            uVar23 = 0;
            for (uVar20 = *puVar38 ^ uVar20; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar23 = uVar23 + 1;
            }
            uVar20 = uVar23 >> 3 & 0x1fffffff;
            if ((((uint32_t)uStack_48 + 0x880ad3e1) * 4 | (uint32_t)uStack_48 + 0x880ad3e1 >> 0x1e) <=
                uVar18 * 0xe702d3a) {
              uVar20 = uVar23 - 3;
            }
            uVar20 = uVar20 + lVar17;
          }
          else {
            uVar29 = 0;
            for (uVar20 = *puVar34 ^ *puVar31; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar20 = (uint64_t)(uVar29 >> 3);
          }
        }
        else {
LAB_7fffa5215f60:
          if ((puVar38 < (uint64_t *)((int64_t)param_4 - 3U)) && ((int)*puVar31 == (int)*puVar38))
          {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          }
          if ((puVar38 < (uint64_t *)((int64_t)param_4 - 1U)) &&
             ((short)*puVar31 == (short)*puVar38)) {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
            puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
          }
          if (puVar38 < param_4) {
            bVar22 = (char)*puVar31 <= (char)*puVar38;
            if (uVar18 * 0x7f8842bc + 0x1a97c50e <= uVar18 * -0x714b0ff2) {
              bVar22 = (char)*puVar31 == (char)*puVar38;
            }
            puVar38 = (uint64_t *)((int64_t)puVar38 + (uint64_t)bVar22);
          }
          uVar20 = (int64_t)puVar38 - (int64_t)puVar34;
        }
        if (uVar14 < uVar20) {
          bVar10 = (uint8_t)uStack_48 & 0x1f;
          uVar29 = uVar28 & uVar26 + 3;
          if ((int64_t)(int)(0xcb6476dbU >> bVar10 | -0x349b8925 << 0x20 - bVar10) <
              (int64_t)(uint64_t)((uint32_t)uStack_48 ^ 0x6021366b)) {
            uVar29 = (uVar26 + 3) - uVar28;
          }
          *(uint64_t *)((in_RAX << 0x3a) + in_RAX) = (uint64_t)uVar29;
          uVar14 = uVar20;
          if ((uint64_t *)((int64_t)puVar34 + uVar20) == param_4) {
            return;
          }
        }
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != lVar33);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5216140  |  RVA: 0xaa6140  |  Size: 1696 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa52167e0) overlaps instruction at (ram,0x7fffa52167de)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa52162b2) */
/* WARNING: Removing unreachable block (ram,0x7fffa52167cc) */
/* WARNING: Removing unreachable block (ram,0x7fffa52167d6) */

void FUN_7fffa5216140(void)

{
  code *pcVar1;
  uint32_t uVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  uint8_t bVar5;
  uint16_t uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint32_t uVar10;
  uint64_t unaff_RBX;
  uint64_t uVar11;
  uint16_t uVar12;
  uint64_t unaff_RDI;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  
  uVar8 = ~unaff_RBX;
  lVar9 = (~unaff_RDI & uVar8) * 0x4b3aeb43 +
          (uVar8 | ~unaff_RDI) * -0xb57c89ef +
          (uVar8 ^ unaff_RDI) * 0x728e16ac +
          (unaff_RDI ^ unaff_RBX) * 0xbdc901ef + (unaff_RBX & unaff_RDI) * -0x6a419eac;
  bVar3 = (uint8_t)lVar9;
  lVar13 = (int64_t)(short)(-0x50d5 << (bVar3 & 0xf) | 0xaf2bU >> 0x10 - (bVar3 & 0xf));
  *(uint8_t (*) [16])(lVar13 + 0x7fffa47c2285) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar13 + 0x7fffa47c2275) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar13 + 0x7fffa47c2265) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar13 + 0x7fffa47c2255) = (uint8_t  [16])0x0;
  uVar7 = (uint32_t)lVar9;
  uVar2 = (uVar7 | 1) * -0x50f9f451 >> 5;
  uVar10 = (uVar7 | 1) * 0x78000000 | uVar2;
  uVar14 = 0xf511f9efe5dd4730U -
           *(int64_t *)
            ((int64_t)(short)((0x2d2c << (bVar3 & 0xf) | 0x2d2cU >> 0x10 - (bVar3 & 0xf)) * 0x46d1)
            + 0x7fffa47826c4) ^ uRam00007fffa4780ae0;
  uVar11 = uVar14 >> 0xb ^ uVar14;
  uVar8 = 0x1f174f545ea2c6c8;
  if ((int)(-0x56cb28ff << (bVar3 & 0x1f) | 0xa934d701U >> 0x20 - (bVar3 & 0x1f)) <
      (int)((0x3d90a34b - uVar7) * 0x61bff853 + 0x24bad9d9)) {
    uVar8 = 0x396c5c94753d7b2;
  }
  uVar8 = (uVar8 >> 0x26 ^ uVar8) * 0x3fffffff80000001;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar15 = uVar8 >> 0xe ^ uVar8;
  *(uint64_t *)((int64_t)(int)((-0x2fb34908 - uVar7) * -0x7e0510e7) + 0x7fffa47cb350) =
       uVar15 >> 0x1c ^ uVar8 >> 0x38 ^ uVar15;
  uVar6 = (uint16_t)uVar2;
  uVar4 = uVar6 | 1;
  uVar11 = uVar11 >> 0x16 ^ uVar11 >> 0x2c ^ uVar11;
  *(uint64_t *)((int64_t)(short)(((short)lVar9 + 0x1156) * uVar4) + 0x7fffa47bf2c2) =
       uVar14 >> 0x3e ^ uVar11 >> 0x1f ^ uVar11;
  bVar5 = (uint8_t)uVar2;
  uVar12 = ~(uVar6 ^ 0x1fc1) * -0x5085;
  uVar11 = 0x831a1e0cca7e0a5b -
           *(int64_t *)
            ((uint64_t)(uint16_t)(uVar12 << (bVar3 & 0xf) | uVar12 >> 0x10 - (bVar3 & 0xf)) +
            0x7fffa477b6e7);
  uVar11 = (uVar11 * 0x800000 | uVar11 >> 0x29) ^ (uVar11 * 0x80000 | uVar11 >> 0x2d) ^ uVar11;
  uVar8 = (uVar11 << 0x26 | uVar11 >> 0x1a) ^ (uVar11 << 0x2e | uVar11 >> 0x12) ^ uVar11;
  uVar8 = (uVar8 << 0x1c | uVar8 >> 0x24) ^ (uVar8 << 0xc | uVar8 >> 0x34) ^ uVar8;
  uVar12 = uVar4 * (-0x6f90 << (bVar3 & 0xf) | 0x9070U >> 0x10 - (bVar3 & 0xf));
  *(uint64_t *)
   ((int64_t)
    (short)(((uint16_t)(uVar7 ^ 0x77b4) >> 1 | (uint16_t)(((uVar7 ^ 0x77b4) & 1) != 0) << 0xf) - uVar6)
   + 0x7fffa47c11db) =
       (uint64_t)
       (&UNK_7fffa574ba3a +
       (int)((0xc1099158U >> (bVar5 & 0x1f) | -0x3ef66ea8 << 0x20 - (bVar5 & 0x1f)) ^ uVar7)) ^
       0xa42ad98ef8a4f018;
  *(uint64_t *)((int64_t)(short)(uVar12 * 0x20 | uVar12 >> 0xb) + 0x7fffa47c3b85) =
       (uVar8 << 0x18 | uVar8 >> 0x28) ^ (uVar8 << 0x38 | uVar8 >> 8) ^ uVar8;
  if ((lVar9 + 0x881ab8625aa84f9bU >> (bVar5 & 0x3f) |
      lVar9 + 0x881ab8625aa84f9bU << 0x40 - (bVar5 & 0x3f)) == 0x7fffa477f5f9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)(*(int *)(uVar11 - 0x15717) * -0x33333301);
    return;
  }
  lVar13 = -lRam00007fffa4780fb8;
  uVar12 = 0x6becU >> (bVar3 & 0xf) | 0x6bec << 0x10 - (bVar3 & 0xf);
  *(int64_t *)
   ((int64_t)
    (short)((uint16_t)~(uVar4 * -0x47f) >> (bVar3 & 0xf) | ~(uVar4 * -0x47f) << 0x10 - (bVar3 & 0xf))
   + 0x7fffa47c0f4e) =
       (int64_t)
       (int)~((uVar10 ^ 0x7f4c3e14) << (bVar3 & 0x1f) |
             (uVar10 ^ 0x7f4c3e14) >> 0x20 - (bVar3 & 0x1f)) + 0x136518c1502efdff;
  uVar8 = ((uint64_t)uVar10 | 1) * -0x7116c43252b0c4e4 - 0x76acaa3a;
  *(uint64_t *)
   ((int64_t)(short)((uVar12 << (bVar5 & 0xf) | uVar12 >> 0x10 - (bVar5 & 0xf)) + 0x2b90) +
   0x7fffa47c18ab) = uVar8 >> (bVar3 & 0x3f) | uVar8 << 0x40 - (bVar3 & 0x3f);
  *(uint64_t *)
   ((int64_t)
    (int)(((uVar7 | 1) * -0x1c1f7562 | (uint32_t)((int)((uVar7 | 1) * 0x71f0454f) < 0)) * (uVar10 | 1))
   + 0x7fffa47cada5) =
       ((lVar9 + 0xc8bc3a76279310d4U) * 0x8000000 | lVar9 + 0xc8bc3a76279310d4U >> 0x25) -
       (uint64_t)uVar10;
  *(int64_t *)((int64_t)(short)(~((short)lVar9 + 0x5d9U) - uVar6) + 0x7fffa47c1f97) = lVar13;
  return;
}


// ============================================================================
// Function : FUN_7fffa52167f0  |  RVA: 0xaa67f0  |  Size: 1539 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa52167f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5,uint32_t param_6)

{
  char *pcVar1;
  uint64_t uVar2;
  uint8_t uVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint32_t uVar8;
  uint8_t auVar9 [16];
  uint16_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint8_t bVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint8_t *puVar19;
  short sVar20;
  uint64_t *puVar21;
  int64_t lVar22;
  uint32_t uVar23;
  uint64_t in_R11;
  uint64_t uVar24;
  int64_t lVar25;
  float fVar26;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  int64_t lStack_b8;
  uint8_t bStack_a0;
  uint8_t *puStack_98;
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(uint64_t *)(in_R11 + 0x28);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(uint64_t *)(in_R11 + 0x28);
  auVar9._8_8_ = 1;
  auVar9._0_8_ = 0x4325c53ef368eb0;
  fVar26 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar5 * auVar9,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar5 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar4 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar24 = (int64_t)(fVar26 - 9.223372e+18) & (int64_t)fVar26 >> 0x3f | (int64_t)fVar26;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar24;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar24;
  uVar17 = SUB168(auVar7 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar7 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar6 * ZEXT816(0x1111111111111112),8));
  uVar15 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> uVar15 == 0; uVar15 = uVar15 - 1) {
    }
  }
  uVar17 = 0x3f;
  if (0x1d < uVar24) {
    uVar17 = uVar15 ^ 0x3f;
  }
  lVar25 = 1L << (-(char)uVar17 & 0x3fU);
  puVar21 = (uint64_t *)
            (((param_4 >> 0x2c ^ param_4) << 7 | param_4 >> 0x39) * 0x7131e3e72c325d41);
  lStack_b8 = 0;
  if (uVar24 == 0) {
    puVar19 = &UNK_7fffa56ee720;
  }
  else {
    uVar15 = 0x40 - uVar17;
    bVar14 = (uint8_t)uVar15;
    lVar18 = 0x78L << (bVar14 & 0x3f);
    sVar20 = (short)(param_6 + 0xef16e2a6);
    (*(code *)((int64_t)(short)(sVar20 << 1 | (uint16_t)(sVar20 < 0)) + 0x7fffa526bf19))
              (uVar15,param_6 ^ 0x93a39c2b);
    lStack_b8 = (uVar15 << 0x2c | uVar15 >> 0x14) - ((uVar15 >> 0x14) << 0x36);
    lVar22 = lStack_b8 + lVar18;
    uVar23 = 8 - (int)lVar22;
    if ((0x77fa6f70 - param_6) * -0x3fffff6b < 0x16c74d0b) {
      uVar23 = (int)lStack_b8 + -8 + (int)lVar18;
    }
    puVar19 = (uint8_t *)((uint64_t)(uVar23 & 0xf) + lVar22 + -8);
    FUN_7fffa4ecf8e0(puVar19,0,0x10L << (bVar14 & 0x3f));
    puVar19[lVar25 * 0x10 + -2] = 1;
  }
  uVar15 = param_2 >> (uVar17 & 0xffffffff);
  puStack_98 = puVar19 + uVar15 * 0x10;
  *puVar21 = 0;
  puVar21[2] = 0;
  *(uint32_t *)(puVar21 + 1) = 0;
  pcVar1 = puVar19 + uVar15 * 0x10;
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
  uVar23 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar27 >> 7,0) & 1) |
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
  bStack_a0 = (uint8_t)param_2;
  if (uVar23 == 0) {
    lVar22 = 0;
    do {
      puStack_98[0xf] = puStack_98[0xf] | '\x01' << (bStack_a0 & 7);
      lVar18 = uVar15 + lVar22;
      lVar22 = lVar22 + 1;
      uVar15 = lVar18 + 1U & lVar25 - 1U;
      puStack_98 = puVar19 + uVar15 * 0x10;
      pcVar1 = puVar19 + uVar15 * 0x10;
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
      uVar23 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar28 >> 7,0) & 1) |
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
    } while (uVar23 == 0);
  }
  uVar17 = in_R11 * 2 ^ in_R11;
  lStack_b8 = uVar15 * 0x78 + lStack_b8;
  uVar10 = (uint16_t)param_6 | 1;
  uVar8 = 0;
  for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
    uVar8 = uVar8 + 1;
  }
  uVar24 = (uint64_t)uVar8;
  bVar14 = (uint8_t)param_6 & 0x1f;
  uVar15 = param_5 << 0x28;
  if ((uint64_t)(0xb2e98be3 - param_6) == 0xffffffffd9bc04cc) {
    uVar15 = param_5 - 0x28;
  }
  uVar15 = uVar15 ^ param_5;
  uVar2 = lStack_b8 + uVar24 * 8;
  uVar12 = uVar2;
  (*(code *)((int64_t)(int)((param_6 ^ 0xe2080eac) + 0x4821f502) + 0x7fffa5279825))();
  puVar16 = (uint64_t *)((uVar12 << 0x2c | uVar12 >> 0x14) - ((uVar12 >> 0x14) << 0x36));
  uVar12 = uVar15 << 3;
  if (param_6 == 0x55d51325) {
    uVar12 = uVar15 >> 8;
  }
  uVar15 = (uVar12 ^ uVar15) >> 0x10 ^ uVar12 ^ uVar15;
  uVar15 = uVar15 >> 0x20 ^ uVar15;
  uVar15 = (uVar15 << 0x2d | uVar15 >> 0x13) ^ (uVar15 << 1 | (uint64_t)((int64_t)uVar15 < 0)) ^
           uVar15;
  uVar15 = (uVar15 << 0x1a | uVar15 >> 0x26) ^ (uVar15 << 2 | uVar15 >> 0x3e) ^ uVar15;
  uVar15 = (uVar15 << 4 | uVar15 >> 0x3c) ^ (uVar15 << 0x34 | uVar15 >> 0xc) ^ uVar15;
  uVar12 = (uVar15 << 8 | uVar15 >> 0x38) ^ uVar15;
  uVar15 = uVar15 << 0x28 | uVar15 >> 0x18;
  *(uint64_t **)(lStack_b8 + uVar24 * 8) = puVar16;
  uVar3 = (&UNK_7fffa583c515)[(param_2 & 0xff) * 4 + (int64_t)(int)(param_6 + 0xaa2a36e6)];
  puVar16[2] = param_3;
  puVar13 = (uint64_t *)(uVar12 * uVar15);
  if ((0xc89a80dc - param_6 ^ 0x4a8dad00) < (0x19f4ab8a << bVar14 | 0x19f4ab8aU >> 0x20 - bVar14)) {
    puVar13 = (uint64_t *)(uVar15 ^ uVar12);
  }
  uVar11 = puVar13[1];
  *puVar16 = *puVar13;
  puVar16[1] = uVar11;
  puStack_98[uVar24] = uVar3;
  *(uint32_t *)(puVar21 + 1) = uVar8;
  *puVar21 = puStack_98;
  puVar21[2] = uVar2;
  (*(code *)((int64_t)(short)(uVar10 * -0x66c4 | (uint16_t)(uVar10 * 0x664f) >> 0xe) + 0x7fffa547dae2
            ))(puVar16,(param_6 + 0xba37eef7) * 0x800000 | param_6 + 0xba37eef7 >> 9,
               ~((uVar17 << 0x35) + uVar17));
  *(int64_t *)(in_R11 + 0x28) = *(int64_t *)(in_R11 + 0x28) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa5216e00  |  RVA: 0xaa6e00  |  Size: 146 bytes
// Callers  : FUN_7fffa55ca84c@0xe5a84c
// Callees  : FUN_7fffa5217178@0xaa7178, FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa4f5cbf0@0x7ecbf0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5216e00(uint8_t *param_1,uint64_t param_2,uint64_t param_3,code *param_4)

{
  uint8_t uVar1;
  int iVar2;
  uint32_t *puVar3;
  uint8_t *puVar4;
  int64_t lVar5;
  uint8_t *puVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  uint64_t uVar9;
  uint8_t *puVar10;
  uint8_t auStack_468 [32];
  int64_t lStack_448;
  uint64_t auStack_438 [62];
  uint64_t auStack_248 [62];
  uint64_t uStack_58;
  
  uStack_58 = _DAT_7fffa4780040 ^ (uint64_t)auStack_468;
  if ((((param_1 == (uint8_t *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (code *)0x0)) {
    puVar3 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar3 = 0x16;
    FUN_7fffa55c8ce0();
    FUN_7fffa5217178();
    return;
  }
  FUN_7fffa4f5cbf0(param_4);
  FUN_7fffa4ecf8e0(auStack_438,0,0x1f0);
  FUN_7fffa4ecf8e0(auStack_248,0,0x1f0);
  if (param_2 < 2) {
code_r0x7fffa5217178:
    FUN_7fffa5488850(uStack_58 ^ (uint64_t)auStack_468);
    return;
  }
  lStack_448 = 0;
  puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_7fffa5216ec0:
  uVar9 = (uint64_t)((int64_t)puVar10 - (int64_t)param_1) / param_3 + 1;
  if (8 < uVar9) {
    lVar5 = (uVar9 >> 1) * param_3;
    puVar4 = param_1 + lVar5;
    iVar2 = (*param_4)(param_1,puVar4);
    if (0 < iVar2) {
      puVar6 = puVar4;
      uVar9 = param_3;
      if (param_1 != puVar4) {
        do {
          uVar1 = puVar6[-lVar5];
          puVar6[-lVar5] = *puVar6;
          *puVar6 = uVar1;
          uVar9 = uVar9 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    iVar2 = (*param_4)(param_1,puVar10);
    if ((0 < iVar2) && (param_1 != puVar10)) {
      puVar6 = puVar10;
      uVar9 = param_3;
      do {
        uVar1 = puVar6[(int64_t)param_1 - (int64_t)puVar10];
        puVar6[(int64_t)param_1 - (int64_t)puVar10] = *puVar6;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    iVar2 = (*param_4)(puVar4);
    if ((0 < iVar2) && (puVar4 != puVar10)) {
      puVar6 = puVar10;
      uVar9 = param_3;
      do {
        uVar1 = puVar6[(int64_t)puVar4 - (int64_t)puVar10];
        puVar6[(int64_t)puVar4 - (int64_t)puVar10] = *puVar6;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar6 = param_1;
    puVar8 = puVar10;
    do {
      if (puVar6 < puVar4) {
        do {
          puVar6 = puVar6 + param_3;
          if (puVar4 <= puVar6) goto LAB_7fffa5217050;
          iVar2 = (*param_4)(puVar6);
        } while (iVar2 < 1);
      }
      else {
LAB_7fffa5217050:
        do {
          puVar6 = puVar6 + param_3;
          if (puVar10 < puVar6) break;
          iVar2 = (*param_4)(puVar6);
        } while (iVar2 < 1);
      }
      do {
        puVar7 = puVar8;
        puVar8 = puVar7 + -param_3;
        if (puVar8 <= puVar4) break;
        iVar2 = (*param_4)(puVar8);
      } while (0 < iVar2);
      if (puVar8 < puVar6) goto LAB_7fffa52170ba;
      if (puVar8 != puVar6) {
        puVar7 = puVar8;
        uVar9 = param_3;
        do {
          uVar1 = puVar7[(int64_t)puVar6 - (int64_t)puVar8];
          puVar7[(int64_t)puVar6 - (int64_t)puVar8] = *puVar7;
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar7 = puVar6;
      if (puVar4 != puVar8) {
        puVar7 = puVar4;
      }
      puVar4 = puVar7;
    } while( true );
  }
  puVar6 = param_1;
  puVar4 = param_1;
  if (param_1 < puVar10) {
    do {
      while( true ) {
        puVar8 = puVar6;
        puVar4 = puVar4 + param_3;
        if (puVar10 < puVar4) break;
        iVar2 = (*param_4)(puVar4,puVar8);
        puVar6 = puVar4;
        if (iVar2 < 1) {
          puVar6 = puVar8;
        }
      }
      if (puVar8 != puVar10) {
        puVar4 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar4[(int64_t)puVar8 - (int64_t)puVar10];
          puVar4[(int64_t)puVar8 - (int64_t)puVar10] = *puVar4;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar10 = puVar10 + -param_3;
      puVar6 = param_1;
      puVar4 = param_1;
    } while (param_1 < puVar10);
  }
  goto LAB_7fffa5216f43;
LAB_7fffa52170ba:
  if (puVar4 < puVar7) {
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= puVar4) goto LAB_7fffa52170d7;
      iVar2 = (*param_4)(puVar7);
    } while (iVar2 == 0);
  }
  else {
LAB_7fffa52170d7:
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= param_1) break;
      iVar2 = (*param_4)(puVar7);
    } while (iVar2 == 0);
  }
  if ((int64_t)puVar7 - (int64_t)param_1 < (int64_t)puVar10 - (int64_t)puVar6) {
    if (puVar6 < puVar10) {
      auStack_438[lStack_448] = puVar6;
      auStack_248[lStack_448] = puVar10;
      lStack_448 = lStack_448 + 1;
    }
    if (param_1 < puVar7) {
      puVar10 = puVar7;
      goto LAB_7fffa5216ec0;
    }
  }
  else {
    if (param_1 < puVar7) {
      auStack_438[lStack_448] = param_1;
      auStack_248[lStack_448] = puVar7;
      lStack_448 = lStack_448 + 1;
    }
    if (puVar6 < puVar10) {
      param_1 = puVar6;
      goto LAB_7fffa5216ec0;
    }
  }
LAB_7fffa5216f43:
  lStack_448 = lStack_448 + -1;
  if (-1 < lStack_448) {
    param_1 = (uint8_t *)auStack_438[lStack_448];
    puVar10 = (uint8_t *)auStack_248[lStack_448];
    goto LAB_7fffa5216ec0;
  }
  goto code_r0x7fffa5217178;
}


// ============================================================================
// Function : FUN_7fffa5216e92  |  RVA: 0xaa6e92  |  Size: 738 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5216e92(void)

{
  uint8_t uVar1;
  int iVar2;
  uint8_t *puVar3;
  int64_t lVar4;
  uint8_t *puVar5;
  uint8_t *puVar6;
  uint8_t *puVar7;
  uint64_t uVar8;
  code *unaff_R12;
  uint8_t *unaff_R13;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  uint8_t *puVar9;
  uint8_t uStack0000000000000000;
  int64_t lStackX_20;
  uint8_t uStack0000000000000030;
  uint64_t in_stack_00000410;
  
  lStackX_20 = 0;
  puVar9 = unaff_R13 + unaff_R15 * unaff_R14;
LAB_7fffa5216ec0:
  uVar8 = (uint64_t)((int64_t)puVar9 - (int64_t)unaff_R13) / unaff_R14 + 1;
  if (8 < uVar8) {
    lVar4 = (uVar8 >> 1) * unaff_R14;
    puVar3 = unaff_R13 + lVar4;
    iVar2 = (*unaff_R12)(unaff_R13,puVar3);
    if (0 < iVar2) {
      puVar5 = puVar3;
      uVar8 = unaff_R14;
      if (unaff_R13 != puVar3) {
        do {
          uVar1 = puVar5[-lVar4];
          puVar5[-lVar4] = *puVar5;
          *puVar5 = uVar1;
          uVar8 = uVar8 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar8 != 0);
      }
    }
    iVar2 = (*unaff_R12)(unaff_R13,puVar9);
    if ((0 < iVar2) && (unaff_R13 != puVar9)) {
      puVar5 = puVar9;
      uVar8 = unaff_R14;
      do {
        uVar1 = puVar5[(int64_t)unaff_R13 - (int64_t)puVar9];
        puVar5[(int64_t)unaff_R13 - (int64_t)puVar9] = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar2 = (*unaff_R12)(puVar3);
    if ((0 < iVar2) && (puVar3 != puVar9)) {
      puVar5 = puVar9;
      uVar8 = unaff_R14;
      do {
        uVar1 = puVar5[(int64_t)puVar3 - (int64_t)puVar9];
        puVar5[(int64_t)puVar3 - (int64_t)puVar9] = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar5 = unaff_R13;
    puVar7 = puVar9;
    do {
      if (puVar5 < puVar3) {
        do {
          puVar5 = puVar5 + unaff_R14;
          if (puVar3 <= puVar5) goto LAB_7fffa5217050;
          iVar2 = (*unaff_R12)(puVar5);
        } while (iVar2 < 1);
      }
      else {
LAB_7fffa5217050:
        do {
          puVar5 = puVar5 + unaff_R14;
          if (puVar9 < puVar5) break;
          iVar2 = (*unaff_R12)(puVar5);
        } while (iVar2 < 1);
      }
      do {
        puVar6 = puVar7;
        puVar7 = puVar6 + -unaff_R14;
        if (puVar7 <= puVar3) break;
        iVar2 = (*unaff_R12)(puVar7);
      } while (0 < iVar2);
      if (puVar7 < puVar5) goto LAB_7fffa52170ba;
      if (puVar7 != puVar5) {
        puVar6 = puVar7;
        uVar8 = unaff_R14;
        do {
          uVar1 = puVar6[(int64_t)puVar5 - (int64_t)puVar7];
          puVar6[(int64_t)puVar5 - (int64_t)puVar7] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar6 = puVar5;
      if (puVar3 != puVar7) {
        puVar6 = puVar3;
      }
      puVar3 = puVar6;
    } while( true );
  }
  puVar5 = unaff_R13;
  puVar3 = unaff_R13;
  if (unaff_R13 < puVar9) {
    do {
      while( true ) {
        puVar7 = puVar5;
        puVar3 = puVar3 + unaff_R14;
        if (puVar9 < puVar3) break;
        iVar2 = (*unaff_R12)(puVar3,puVar7);
        puVar5 = puVar3;
        if (iVar2 < 1) {
          puVar5 = puVar7;
        }
      }
      if (puVar7 != puVar9) {
        puVar3 = puVar9;
        uVar8 = unaff_R14;
        do {
          uVar1 = puVar3[(int64_t)puVar7 - (int64_t)puVar9];
          puVar3[(int64_t)puVar7 - (int64_t)puVar9] = *puVar3;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar9 = puVar9 + -unaff_R14;
      puVar5 = unaff_R13;
      puVar3 = unaff_R13;
    } while (unaff_R13 < puVar9);
  }
  goto LAB_7fffa5216f43;
LAB_7fffa52170ba:
  if (puVar3 < puVar6) {
    do {
      puVar6 = puVar6 + -unaff_R14;
      if (puVar6 <= puVar3) goto LAB_7fffa52170d7;
      iVar2 = (*unaff_R12)(puVar6);
    } while (iVar2 == 0);
  }
  else {
LAB_7fffa52170d7:
    do {
      puVar6 = puVar6 + -unaff_R14;
      if (puVar6 <= unaff_R13) break;
      iVar2 = (*unaff_R12)(puVar6);
    } while (iVar2 == 0);
  }
  if ((int64_t)puVar6 - (int64_t)unaff_R13 < (int64_t)puVar9 - (int64_t)puVar5) {
    if (puVar5 < puVar9) {
      *(uint8_t **)(&uStack0000000000000030 + lStackX_20 * 8) = puVar5;
      *(uint8_t **)((int64_t)register0x00000020 + lStackX_20 * 8 + 0x220) = puVar9;
      lStackX_20 = lStackX_20 + 1;
    }
    if (unaff_R13 < puVar6) {
      puVar9 = puVar6;
      goto LAB_7fffa5216ec0;
    }
  }
  else {
    if (unaff_R13 < puVar6) {
      *(uint8_t **)(&uStack0000000000000030 + lStackX_20 * 8) = unaff_R13;
      *(uint8_t **)((int64_t)register0x00000020 + lStackX_20 * 8 + 0x220) = puVar6;
      lStackX_20 = lStackX_20 + 1;
    }
    if (puVar5 < puVar9) {
      unaff_R13 = puVar5;
      goto LAB_7fffa5216ec0;
    }
  }
LAB_7fffa5216f43:
  lStackX_20 = lStackX_20 + -1;
  if (lStackX_20 < 0) {
    FUN_7fffa5488850(in_stack_00000410 ^ (uint64_t)&uStack0000000000000000);
    return;
  }
  unaff_R13 = *(uint8_t **)(&uStack0000000000000030 + lStackX_20 * 8);
  puVar9 = *(uint8_t **)((int64_t)register0x00000020 + lStackX_20 * 8 + 0x220);
  goto LAB_7fffa5216ec0;
}


// ============================================================================
// Function : FUN_7fffa5217178  |  RVA: 0xaa7178  |  Size: 32 bytes
// Callers  : FUN_7fffa5216e00@0xaa6e00
// Callees  : FUN_7fffa5488850@0xd18850
// ============================================================================
void FUN_7fffa5217178(void)

{
  uint8_t uStack0000000000000000;
  uint64_t in_stack_00000410;
  
  FUN_7fffa5488850(in_stack_00000410 ^ (uint64_t)&uStack0000000000000000);
  return;
}


// ============================================================================
// Function : FUN_7fffa52171a0  |  RVA: 0xaa71a0  |  Size: 771 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52171a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  uint8_t *pbVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  
  uVar2 = param_3 >> 0x36 ^ param_3;
  uVar3 = (uint32_t)param_1;
  uVar2 = (uVar2 >> 1 | (uint64_t)((uVar2 & 1) != 0) << 0x3f) ^ (uVar2 << 0x24 | param_3 >> 0x1c) ^
          uVar2;
  uVar2 = (uVar2 << 0x3e | uVar2 >> 2) ^ (uVar2 << 8 | uVar2 >> 0x38) ^ uVar2;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ (uVar2 << 0x3c | uVar2 >> 4) ^ uVar2;
  uVar2 = (uVar2 << 0x20 | uVar2 >> 0x20) ^ (uVar2 << 0x38 | uVar2 >> 8) ^ uVar2;
  uVar5 = uVar2 << 0x30 | uVar2 >> 0x10;
  uVar2 = ~uVar5 & uVar2;
  if (((uVar3 ^ 0x763541c6) << 3 | (uVar3 ^ 0x763541c6) >> 0x1d) ==
      ((uVar3 + 0x48d8d3f) * 0x2000 | uVar3 + 0x48d8d3f >> 0x13)) {
    uVar2 = uVar5;
  }
  uVar2 = (uVar2 & 0xffffffff) >> 10 ^ (uVar2 << 0x20 | uVar2 >> 0x20);
  if (0x13 < uVar2) {
    pbVar4 = (uint8_t *)(param_4 + 0xa18c66f7);
    do {
      uVar2 = uVar2 - 1;
      bVar1 = (uint8_t)param_1 & 0x1f;
      if (~(0x384ecdadU >> bVar1 | 0x384ecdad << 0x20 - bVar1) < 0x8e63b3da - uVar3) {
        uVar6 = (uVar3 + 0x234cad2b) * 0x20000 | uVar3 + 0x234cad2b >> 0xf;
      }
      else {
        uVar6 = (uVar3 | 1) * -0x6da07da7;
      }
    } while (((((((((((((((uint64_t)pbVar4[-0xb] ^
                         ((uint64_t)pbVar4[-0xc] ^
                         (((uint64_t)pbVar4[-0xe] ^
                          ((((uint64_t)pbVar4[-0x11] ^
                            ((-0x60cf5ef51aebe5b2 - (uint64_t)uVar6) * (param_1 | 1) + -0x68944d08)
                            * ((uint64_t)pbVar4[-0x12] ^
                              ((uint64_t)pbVar4[-0x13] ^ 0x7a352eb8bad5384b) * 0x1000000029b)) *
                            0x1000000029b ^ (uint64_t)pbVar4[-0x10]) * 0x1000000029b ^
                          (uint64_t)pbVar4[-0xf]) * 0x1000000029b) * 0x1000000029b ^
                         (uint64_t)pbVar4[-0xd]) * 0x1000000029b) * 0x1000000029b) * 0x1000000029b
                        ^ (uint64_t)pbVar4[-10]) * 0x1000000029b ^ (uint64_t)pbVar4[-9]) *
                       0x1000000029b ^ (uint64_t)pbVar4[-8]) * 0x1000000029b ^
                     (uint64_t)pbVar4[-7]) * 0x1000000029b ^ (uint64_t)pbVar4[-6]) * 0x1000000029b
                   ^ (uint64_t)pbVar4[-5]) * 0x1000000029b ^ (uint64_t)pbVar4[-4]) * 0x1000000029b
                 ^ (uint64_t)pbVar4[-3]) * 0x1000000029b ^ (uint64_t)pbVar4[-2]) * 0x1000000029b ^
               (uint64_t)pbVar4[-1]) * 0x1000000029b ^ (uint64_t)*pbVar4) * 0x1000000029b !=
              0x7b8d6b7bf7bfab9d) && (pbVar4 = pbVar4 + 1, 0x13 < uVar2));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52174b0  |  RVA: 0xaa74b0  |  Size: 1 bytes
// Callers  : FUN_7fffa55d8480@0xe68480
// Callees  : none
// ============================================================================
void FUN_7fffa52174b0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa52174e0  |  RVA: 0xaa74e0  |  Size: 36646 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa52174e0(void) {
    /* +0xaa74e0 */ __asm { PUSH RBP }
    /* +0xaa74e1 */ __asm { PUSH R12 }
    /* +0xaa74e3 */ __asm { PUSH R13 }
    /* +0xaa74e5 */ __asm { PUSH R14 }
    /* +0xaa74e7 */ __asm { PUSH RSI }
    /* +0xaa74e8 */ __asm { PUSH RDI }
    /* +0xaa74e9 */ __asm { PUSH RBX }
    /* +0xaa74ea */ __asm { PUSH R15 }
    /* +0xaa74ec */ __asm { SUB RSP,0x238 }
    /* +0xaa74f3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xaa74fb */ __asm { MOVDQA xmmword ptr [RBP + 0x1a0],XMM15 }
    /* +0xaa7504 */ __asm { MOVDQA xmmword ptr [RBP + 0x190],XMM9 }
    /* +0xaa750d */ __asm { MOVDQA xmmword ptr [RBP + 0x180],XMM6 }
    /* +0xaa7515 */ __asm { MOVDQA xmmword ptr [RBP + 0x170],XMM12 }
    /* +0xaa751e */ __asm { MOVDQA xmmword ptr [RBP + 0x160],XMM8 }
    /* +0xaa7527 */ __asm { MOVDQA xmmword ptr [RBP + 0x150],XMM14 }
    /* +0xaa7530 */ __asm { MOVDQA xmmword ptr [RBP + 0x140],XMM10 }
    /* +0xaa7539 */ __asm { MOV qword ptr [RBP + 0x138],-0x2 }
    /* +0xaa7544 */ __asm { MOV R15,R8 }
    /* +0xaa7547 */ __asm { MOV qword ptr [RBP + 0xd8],RAX }
    /* +0xaa754e */ __asm { MOV R10,qword ptr [RBP + 0x220] }
    /* +0xaa7555 */ __asm { MOV R9,R10 }
    /* +0xaa7558 */ __asm { ROL R9,0x25 }
    /* +0xaa755c */ __asm { MOV EAX,0x6f647a29 }
    /* +0xaa7561 */ __asm { MOVQ XMM5,R9 }
    /* +0xaa7566 */ __asm { MOV R9,R11 }
    /* +0xaa7569 */ __asm { SHL R9,0x30 }
    /* +0xaa756d */ __asm { XOR R9,R11 }
    /* +0xaa7570 */ __asm { MOV qword ptr [RBP + 0x70],R9 }
    /* +0xaa7574 */ __asm { PUSHFQ }
    /* +0xaa7575 */ __asm { POP RBX }
    /* +0xaa7576 */ __asm { MOV R9D,0x7256d0bd }
    /* +0xaa757c */ __asm { XOR EAX,0x17501acf }
    /* +0xaa7581 */ __asm { SUB EAX,R15D }
    /* +0xaa7584 */ __asm { SUB R9D,R15D }
    /* +0xaa7587 */ __asm { MOV R11,R10 }
    /* +0xaa758a */ __asm { ROL R11,0x3a }
    /* +0xaa758e */ __asm { ADD R9D,0x8b783257 }
    /* +0xaa7595 */ __asm { MOVQ XMM1,R11 }
    /* +0xaa759a */ __asm { PXOR XMM1,XMM5 }
    /* +0xaa759e */ __asm { MOVQ R8,XMM1 }
    /* +0xaa75a3 */ __asm { XOR R8,R10 }
    /* +0xaa75a6 */ __asm { MOV R10,R8 }
    /* +0xaa75a9 */ __asm { ROL R10,0xa }
    /* +0xaa75ad */ __asm { MOVSXD R11,EAX }
    /* +0xaa75b0 */ __asm { MOV RDX,R8 }
    /* +0xaa75b3 */ __asm { ROL RDX,0x34 }
    /* +0xaa75b7 */ __asm { XOR RDX,R10 }
    /* +0xaa75ba */ __asm { XOR RDX,R8 }
    /* +0xaa75bd */ __asm { MOV R10,RDX }
    /* +0xaa75c0 */ __asm { ROL R10,0x14 }
    /* +0xaa75c4 */ __asm { MOV R8,RDX }
    /* +0xaa75c7 */ __asm { ROL R8,0x28 }
    /* +0xaa75cb */ __asm { XOR R8,R10 }
    /* +0xaa75ce */ __asm { XOR R8,RDX }
    /* +0xaa75d1 */ __asm { MOV R10,R8 }
    /* +0xaa75d4 */ __asm { ROL R10,0x10 }
    /* +0xaa75d8 */ __asm { MOV RDX,R8 }
    /* +0xaa75db */ __asm { ROL RDX,0x28 }
    /* +0xaa75df */ __asm { XOR RDX,R10 }
    /* +0xaa75e2 */ __asm { XOR RDX,R8 }
    /* +0xaa75e5 */ __asm { MOV R10,RDX }
    /* +0xaa75e8 */ __asm { ROL R10,0x10 }
    /* +0xaa75ec */ __asm { MOV R8,RDX }
    /* +0xaa75ef */ __asm { ROL R8,0x20 }
    /* +0xaa75f3 */ __asm { XOR R8,R10 }
    /* +0xaa75f6 */ __asm { XOR R8,RDX }
    /* +0xaa75f9 */ __asm { ROL R8,0x20 }
    /* +0xaa75fd */ __asm { XOR R10D,R10D }
    /* +0xaa7600 */ __asm { CMP R11,R9 }
    /* +0xaa7603 */ __asm { CMOVL R10,R8 }
    /* +0xaa7607 */ __asm { MOV qword ptr [RBP + 0x30],R10 }
    /* +0xaa760b */ __asm { MOV qword ptr [RBP + 0x120],RBX }
    /* +0xaa7612 */ __asm { TEST EBX,0x100 }
    /* +0xaa7618 */ __asm { NOP }
    /* +0xaa7619 */ __asm { NOP }
    /* +0xaa761a */ __asm { NOP }
    /* +0xaa761b */ __asm { NOP }
    /* +0xaa761c */ __asm { NOP }
    /* +0xaa761d */ __asm { NOP }
    /* +0xaa761e */ __asm { MOV dword ptr [RBP + 0x90],0x8c1f5463 }
    /* +0xaa7628 */ __asm { MOV EAX,dword ptr [RBP + 0x90] }
    /* +0xaa762e */ __asm { CMP EAX,0x77eec1b7 }
    /* +0xaa7633 */ __asm { NOP }
    /* +0xaa7634 */ __asm { NOP }
    /* +0xaa7635 */ __asm { NOP }
    /* +0xaa7636 */ __asm { NOP }
    /* +0xaa7637 */ __asm { NOP }
    /* +0xaa7638 */ __asm { NOP }
    /* +0xaa7639 */ __asm { MOV R9,0x7b493725387761e6 }
    /* +0xaa7643 */ __asm { ADD R9,0x684afaac }
    /* +0xaa764a */ __asm { MOV ECX,R15D }
    /* +0xaa764d */ __asm { ROL R9,CL }
    /* +0xaa7650 */ __asm { ADD R9,0x84be9c7 }
    /* +0xaa7657 */ __asm { LEA RDX,[0x7fffa4784adb] }
    /* +0xaa765e */ __asm { MOV R11,qword ptr [RBP + 0x70] }
    /* +0xaa7662 */ __asm { MOV qword ptr [R11],0x0 }
    /* +0xaa7669 */ __asm { MOV R11,qword ptr [RBP + 0x30] }
    /* +0xaa766d */ __asm { MOV qword ptr [R11],0x0 }
    /* +0xaa7674 */ __asm { CMP RDX,R9 }
    /* +0xaa7677 */ __asm { NOP }
    /* +0xaa7678 */ __asm { NOP }
    /* +0xaa7679 */ __asm { NOP }
    /* +0xaa767a */ __asm { NOP }
    /* +0xaa767b */ __asm { NOP }
    /* +0xaa767c */ __asm { MOV EAX,0x31636920 }
    /* +0xaa7681 */ __asm { MOV dword ptr [RBP + 0xd0],EAX }
    /* +0xaa7687 */ __asm { MOV R13,qword ptr [RDX + 0x26d] }
    /* +0xaa768e */ __asm { MOV R9,qword ptr [RDX + 0x275] }
    /* +0xaa7695 */ __asm { MOV R8D,R13D }
    /* +0xaa7698 */ __asm { SHR R8D,0x2 }
    /* +0xaa769c */ __asm { MOV R10,R13 }
    /* +0xaa769f */ __asm { SHR R10,0x26 }
    /* +0xaa76a3 */ __asm { AND R10D,0x600 }
    /* +0xaa76aa */ __asm { MOV AX,0xe199 }
    /* +0xaa76ae */ __asm { MOV dword ptr [RBP + 0x100],EAX }
    /* +0xaa76b4 */ __asm { MOV EDI,0xc4e65fc1 }
    /* +0xaa76b9 */ __asm { ADD EDI,0x7b19a03f }
    /* +0xaa76bf */ __asm { MOV ECX,R15D }
    /* +0xaa76c2 */ __asm { ROL EDI,CL }
    /* +0xaa76c4 */ __asm { MOVD XMM5,R10D }
    /* +0xaa76c9 */ __asm { MOV R10,R13 }
    /* +0xaa76cc */ __asm { SHR R10,0x2a }
    /* +0xaa76d0 */ __asm { AND R10D,0x1800 }
    /* +0xaa76d7 */ __asm { MOV RAX,R13 }
    /* +0xaa76da */ __asm { SHR RAX,0x2d }
    /* +0xaa76de */ __asm { AND EAX,0x2000 }
    /* +0xaa76e3 */ __asm { OR RAX,R10 }
    /* +0xaa76e6 */ __asm { MOV R10,R9 }
    /* +0xaa76e9 */ __asm { SHR R10,0x15 }
    /* +0xaa76ed */ __asm { AND R10D,EDI }
    /* +0xaa76f0 */ __asm { MOV RCX,R9 }
    /* +0xaa76f3 */ __asm { MOV R12,R9 }
    /* +0xaa76f6 */ __asm { SHR R12,0x7 }
    /* +0xaa76fa */ __asm { MOV RBX,R9 }
    /* +0xaa76fd */ __asm { SHR RBX,0x1d }
    /* +0xaa7701 */ __asm { MOV R11,0x200000000 }
    /* +0xaa770b */ __asm { AND R11,RBX }
    /* +0xaa770e */ __asm { MOV RBX,R9 }
    /* +0xaa7711 */ __asm { SHR RBX,0x19 }
    /* +0xaa7715 */ __asm { MOV RSI,0x100000000 }
    /* +0xaa771f */ __asm { AND RSI,RBX }
    /* +0xaa7722 */ __asm { MOV RDX,qword ptr [RDX + 0x27d] }
    /* +0xaa7729 */ __asm { MOV R14,RDX }
    /* +0xaa772c */ __asm { SHL R14,0x6 }
    /* +0xaa7730 */ __asm { MOV RBX,0x60000000000 }
    /* +0xaa773a */ __asm { AND RBX,R14 }
    /* +0xaa773d */ __asm { AND R12D,0x10000000 }
    /* +0xaa7744 */ __asm { SHR R9,0x10 }
    /* +0xaa7748 */ __asm { AND R9D,0x20000000 }
    /* +0xaa774f */ __asm { OR R9,R12 }
    /* +0xaa7752 */ __asm { MOV EDI,R13D }
    /* +0xaa7755 */ __asm { OR R9,RSI }
    /* +0xaa7758 */ __asm { MOV ESI,R13D }
    /* +0xaa775b */ __asm { SHR ESI,0x6 }
    /* +0xaa775e */ __asm { OR R9,R11 }
    /* +0xaa7761 */ __asm { MOV R12,R13 }
    /* +0xaa7764 */ __asm { AND R8D,0x1 }
    /* +0xaa7768 */ __asm { OR R9,R8 }
    /* +0xaa776b */ __asm { MOV R14,R13 }
    /* +0xaa776e */ __asm { AND ESI,0x2 }
    /* +0xaa7771 */ __asm { OR R9,RSI }
    /* +0xaa7774 */ __asm { MOV R8D,R13D }
    /* +0xaa7777 */ __asm { SHR R8D,0x7 }
    /* +0xaa777b */ __asm { AND R8D,0x4 }
    /* +0xaa777f */ __asm { MOVD XMM1,R8D }
    /* +0xaa7784 */ __asm { MOV ESI,R13D }
    /* +0xaa7787 */ __asm { SHR ESI,0x11 }
    /* +0xaa778a */ __asm { AND ESI,0x10 }
    /* +0xaa778d */ __asm { MOV R8,R13 }
    /* +0xaa7790 */ __asm { MOV qword ptr [RBP + 0x130],R15 }
    /* +0xaa7797 */ __asm { MOV R15D,R13D }
    /* +0xaa779a */ __asm { SHR R13D,0xf }
    /* +0xaa779e */ __asm { AND R13D,0x8 }
    /* +0xaa77a2 */ __asm { OR R13,RSI }
    /* +0xaa77a5 */ __asm { SHR R15D,0x12 }
    /* +0xaa77a9 */ __asm { AND R15D,0x20 }
    /* +0xaa77ad */ __asm { OR R13,R15 }
    /* +0xaa77b0 */ __asm { SHR EDI,0x15 }
    /* +0xaa77b3 */ __asm { SHR R12,0x21 }
    /* +0xaa77b7 */ __asm { AND R12D,0x100 }
    /* +0xaa77be */ __asm { SHR R14,0x1c }
    /* +0xaa77c2 */ __asm { AND R14D,0x80 }
    /* +0xaa77c9 */ __asm { AND EDI,0x40 }
    /* +0xaa77cc */ __asm { OR R13,RDI }
    /* +0xaa77cf */ __asm { MOV EDI,EDX }
    /* +0xaa77d1 */ __asm { OR R13,R14 }
    /* +0xaa77d4 */ __asm { MOV R15D,EDX }
    /* +0xaa77d7 */ __asm { AND R15D,0x200 }
    /* +0xaa77de */ __asm { SHL R15,0x1b }
    /* +0xaa77e2 */ __asm { OR R13,R12 }
    /* +0xaa77e5 */ __asm { MOV RSI,RDX }
    /* +0xaa77e8 */ __asm { MOV R11,RDX }
    /* +0xaa77eb */ __asm { MOV R12D,EDX }
    /* +0xaa77ee */ __asm { MOV R14D,EDX }
    /* +0xaa77f1 */ __asm { AND EDX,0x6 }
    /* +0xaa77f4 */ __asm { SHL RDX,0x21 }
    /* +0xaa77f8 */ __asm { OR RDX,R15 }
    /* +0xaa77fb */ __asm { MOV R15,qword ptr [RBP + 0x130] }
    /* +0xaa7802 */ __asm { AND EDI,0x800 }
    /* +0xaa7808 */ __asm { SHL RDI,0x1a }
    /* +0xaa780c */ __asm { OR RDX,RDI }
    /* +0xaa780f */ __asm { AND R12D,0x400000 }
    /* +0xaa7816 */ __asm { SHL R12,0x10 }
    /* +0xaa781a */ __asm { OR RDX,R12 }
    /* +0xaa781d */ __asm { MOV R12,RCX }
    /* +0xaa7820 */ __asm { AND R14D,0x40000000 }
    /* +0xaa7827 */ __asm { SHL R14,0x9 }
    /* +0xaa782b */ __asm { OR RDX,R14 }
    /* +0xaa782e */ __asm { SHR R8,0x2f }
    /* +0xaa7832 */ __asm { AND R8D,0xc000 }
    /* +0xaa7839 */ __asm { OR R8,RAX }
    /* +0xaa783c */ __asm { SHL RSI,0x7 }
    /* +0xaa7840 */ __asm { OR R8,R10 }
    /* +0xaa7843 */ __asm { MOV R10,0x10000000000 }
    /* +0xaa784d */ __asm { AND R10,RSI }
    /* +0xaa7850 */ __asm { OR R10,RDX }
    /* +0xaa7853 */ __asm { SHR R11,0x3 }
    /* +0xaa7857 */ __asm { OR R10,RBX }
    /* +0xaa785a */ __asm { MOV RCX,0x80000000000 }
    /* +0xaa7864 */ __asm { AND RCX,R11 }
    /* +0xaa7867 */ __asm { MOV EDX,R12D }
    /* +0xaa786a */ __asm { AND EDX,0x7 }
    /* +0xaa786d */ __asm { SHL EDX,0x10 }
    /* +0xaa7870 */ __asm { OR RCX,RDX }
    /* +0xaa7873 */ __asm { MOV EDX,R12D }
    /* +0xaa7876 */ __asm { AND EDX,0x40 }
    /* +0xaa7879 */ __asm { SHL EDX,0xd }
    /* +0xaa787c */ __asm { OR RCX,RDX }
    /* +0xaa787f */ __asm { MOV EDX,R12D }
    /* +0xaa7882 */ __asm { SHL EDX,0xc }
    /* +0xaa7885 */ __asm { AND EDX,0x100000 }
    /* +0xaa788b */ __asm { OR RCX,RDX }
    /* +0xaa788e */ __asm { MOV EDX,R12D }
    /* +0xaa7891 */ __asm { SHL EDX,0xa }
    /* +0xaa7894 */ __asm { AND EDX,0x200000 }
    /* +0xaa789a */ __asm { OR RCX,RDX }
    /* +0xaa789d */ __asm { MOV EDX,R12D }
    /* +0xaa78a0 */ __asm { SHL EDX,0x8 }
    /* +0xaa78a3 */ __asm { AND EDX,0x7c00000 }
    /* +0xaa78a9 */ __asm { OR RCX,RDX }
    /* +0xaa78ac */ __asm { MOV RDX,R12 }
    /* +0xaa78af */ __asm { SHR RDX,0x5 }
    /* +0xaa78b3 */ __asm { AND EDX,0x8000000 }
    /* +0xaa78b9 */ __asm { OR RCX,RDX }
    /* +0xaa78bc */ __asm { OR RCX,R10 }
    /* +0xaa78bf */ __asm { OR RCX,R9 }
    /* +0xaa78c2 */ __asm { MOVQ XMM2,RCX }
    /* +0xaa78c7 */ __asm { POR XMM2,XMM1 }
    /* +0xaa78cb */ __asm { MOVQ R9,XMM2 }
    /* +0xaa78d0 */ __asm { OR R9,R13 }
    /* +0xaa78d3 */ __asm { MOVQ XMM1,R9 }
    /* +0xaa78d8 */ __asm { MOV EAX,dword ptr [RBP + 0xd0] }
    /* +0xaa78de */ __asm { ADD EAX,R15D }
    /* +0xaa78e1 */ __asm { ROL EAX,0x2 }
    /* +0xaa78e4 */ __asm { SHR R12,0x17 }
    /* +0xaa78e8 */ __asm { AND R12D,EAX }
    /* +0xaa78eb */ __asm { MOV EAX,dword ptr [RBP + 0x100] }
    /* +0xaa78f1 */ __asm { XOR EAX,0xe1d1 }
    /* +0xaa78f6 */ __asm { MOV ECX,R15D }
    /* +0xaa78f9 */ __asm { ROR AX,CL }
    /* +0xaa78fc */ __asm { MOVZX R9D,AX }
    /* +0xaa7900 */ __asm { POR XMM1,XMM5 }
    /* +0xaa7904 */ __asm { OR R12,R8 }
    /* +0xaa7907 */ __asm { MOVQ R11,XMM1 }
    /* +0xaa790c */ __asm { OR R12,R11 }
    /* +0xaa790f */ __asm { SHL R12,0x4 }
    /* +0xaa7913 */ __asm { MOV R14,qword ptr GS:[R9] }
    /* +0xaa7917 */ __asm { MOV EAX,dword ptr [R12] }
    /* +0xaa791b */ __asm { CMP EAX,R14D }
    /* +0xaa791e */ __asm { JZ 0x7fffa521792f }
    /* +0xaa7920 */ __asm { LEA RCX,[R12 + 0x8] }
    /* +0xaa7925 */ __asm { CALL qword ptr [0x7fffa5877480] }
    /* +0xaa792b */ __asm { XCHG dword ptr [R12],R14D }
    /* +0xaa792f */ __asm { MOV ESI,R15D }
    /* +0xaa7932 */ __asm { OR ESI,0x1 }
    /* +0xaa7935 */ __asm { MOV qword ptr [RBP + 0x80],R12 }
    /* +0xaa793c */ __asm { INC dword ptr [R12 + 0x4] }
    /* +0xaa7941 */ __asm { PXOR XMM8,XMM8 }
    /* +0xaa7946 */ __asm { MOVDQA xmmword ptr [RBP + 0xb0],XMM8 }
    /* +0xaa794f */ __asm { MOVDQA xmmword ptr [RBP + 0xa0],XMM8 }
    /* +0xaa7958 */ __asm { MOVDQA xmmword ptr [RBP + 0x90],XMM8 }
    /* +0xaa7961 */ __asm { MOV qword ptr [RBP + 0x48],0x0 }
    /* +0xaa7969 */ __asm { MOV EAX,R15D }
    /* +0xaa796c */ __asm { OR EAX,0x1 }
    /* +0xaa796f */ __asm { MOV dword ptr [RBP + 0x100],EAX }
    /* +0xaa7975 */ __asm { XOR R13D,R13D }
    /* +0xaa7978 */ __asm { XOR R12D,R12D }
    /* +0xaa797b */ __asm { MOV R14,qword ptr [RBP + 0xd8] }
    /* +0xaa7982 */ __asm { MOV qword ptr [RBP + 0xd0],RSI }
    /* +0xaa7989 */ __asm { JMP 0x7fffa52179d0 }
    /* +0xaa7990 */ __asm { MOVAPS XMM5,xmmword ptr [RBP + 0x90] }
    /* +0xaa7997 */ __asm { MOVAPS XMM1,xmmword ptr [RBP + 0xa0] }
    /* +0xaa799e */ __asm { MOVDQA XMM2,xmmword ptr [RBP + 0xb0] }
    /* +0xaa79a6 */ __asm { MOVDQU xmmword ptr [R13 + 0x20],XMM2 }
    /* +0xaa79ac */ __asm { MOVUPS xmmword ptr [R13 + 0x10],XMM1 }
    /* +0xaa79b1 */ __asm { MOVUPS xmmword ptr [R13],XMM5 }
    /* +0xaa79b6 */ __asm { ADD R13,0x30 }
    /* +0xaa79ba */ __asm { MOVQ XMM5,qword ptr [RBP + 0xa8] }
    /* +0xaa79c2 */ __asm { MOVQ XMM1,R14 }
    /* +0xaa79c7 */ __asm { PADDQ XMM1,XMM5 }
    /* +0xaa79cb */ __asm { MOVQ R14,XMM1 }
    /* +0xaa79d0 */ __asm { MOV dword ptr [RBP + 0xe0],0x41040a71 }
    /* +0xaa79da */ __asm { MOV EAX,dword ptr [RBP + 0xe0] }
    /* +0xaa79e0 */ __asm { RDTSC }
    /* +0xaa79e2 */ __asm { SHL RDX,0x20 }
    /* +0xaa79e6 */ __asm { OR RDX,RAX }
    /* +0xaa79e9 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xaa79f3 */ __asm { IMUL RDX,R9 }
    /* +0xaa79f7 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xaa7a01 */ __asm { ADD RDX,R9 }
    /* +0xaa7a04 */ __asm { MOV R9,RDX }
    /* +0xaa7a07 */ __asm { SHR R9,0x1b }
    /* +0xaa7a0b */ __asm { MOV RCX,RDX }
    /* +0xaa7a0e */ __asm { SHR RCX,0x3b }
    /* +0xaa7a12 */ __asm { SHR RDX,0x2d }
    /* +0xaa7a16 */ __asm { XOR R9D,EDX }
    /* +0xaa7a19 */ __asm { ROR R9D,CL }
    /* +0xaa7a1c */ __asm { AND R9D,0x3 }
    /* +0xaa7a20 */ __asm { CMP R9D,0x2 }
    /* +0xaa7a24 */ __asm { JNC 0x7fffa5217c20 }
    /* +0xaa7a2a */ __asm { CMP R9D,0x1 }
    /* +0xaa7a2e */ __asm { JZ 0x7fffa5217da0 }
    /* +0xaa7a34 */ __asm { LEA RDX,[0x7fffa47b8f42] }
    /* +0xaa7a3b */ __asm { MOV R9,0x4117719a42803e8a }
    /* +0xaa7a45 */ __asm { XOR R9,R15 }
    /* +0xaa7a48 */ __asm { ROL R9,0xf }
    /* +0xaa7a4c */ __asm { MOV R8,RDX }
    /* +0xaa7a4f */ __asm { MOV R11,-0x2137d0069dc1ca3 }
    /* +0xaa7a59 */ __asm { IMUL R8,R11 }
    /* +0xaa7a5d */ __asm { XOR R8,0x66f2326e }
    /* +0xaa7a64 */ __asm { CMP R9,R8 }
    /* +0xaa7a67 */ __asm { JZ 0x7fffa52187c9 }
    /* +0xaa7a6d */ __asm { MOV EAX,0x539b8d1a }
    /* +0xaa7a72 */ __asm { IMUL R9D,EAX,-0x4086e045 }
    /* +0xaa7a79 */ __asm { MOV ECX,R15D }
    /* +0xaa7a7c */ __asm { ROR R9D,CL }
    /* +0xaa7a7f */ __asm { MOV R8,RDX }
    /* +0xaa7a82 */ __asm { ADD R8,R9 }
    /* +0xaa7a85 */ __asm { MOVZX R9D,uint8_t ptr [R9 + RDX*0x1 + 0x9] }
    /* +0xaa7a8b */ __asm { MOVZX R10D,uint8_t ptr [R8 + R9*0x4 + 0xf] }
    /* +0xaa7a91 */ __asm { NOT R10B }
    /* +0xaa7a94 */ __asm { ROL R10B,0x5 }
    /* +0xaa7a98 */ __asm { MOV uint8_t ptr [RBP + 0xe0],R10B }
    /* +0xaa7a9f */ __asm { MOVZX R10D,uint8_t ptr [R8 + R9*0x4 + 0x10] }
    /* +0xaa7aa5 */ __asm { NOT R10B }
    /* +0xaa7aa8 */ __asm { ROL R10B,0x5 }
    /* +0xaa7aac */ __asm { MOV uint8_t ptr [RBP + 0xe1],R10B }
    /* +0xaa7ab3 */ __asm { MOVZX R10D,uint8_t ptr [R8 + R9*0x4 + 0x11] }
    /* +0xaa7ab9 */ __asm { NOT R10B }
    /* +0xaa7abc */ __asm { ROL R10B,0x5 }
    /* +0xaa7ac0 */ __asm { MOV uint8_t ptr [RBP + 0xe2],R10B }
    /* +0xaa7ac7 */ __asm { MOVZX R8D,uint8_t ptr [R8 + R9*0x4 + 0x12] }
    /* +0xaa7acd */ __asm { NOT R8B }
    /* +0xaa7ad0 */ __asm { ROL R8B,0x5 }
    /* +0xaa7ad4 */ __asm { MOV uint8_t ptr [RBP + 0xe3],R8B }
    /* +0xaa7adb */ __asm { MOV EAX,dword ptr [RBP + 0xe0] }
    /* +0xaa7ae1 */ __asm { MOV ECX,0x9102c3cc }
    /* +0xaa7ae6 */ __asm { XOR EAX,ECX }
    /* +0xaa7ae8 */ __asm { BT EAX,EAX }
    /* +0xaa7aeb */ __asm { JNC 0x7fffa521825a }
    /* +0xaa7af1 */ __asm { NOP }
    /* +0xaa7af3 */ __asm { MOV R8,0x0 }
    /* +0xaa7afa */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xaa7b01 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM8 }
    /* +0xaa7b0a */ __asm { MOV dword ptr [RBP + 0x20],0x4f65b788 }
    /* +0xaa7b11 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xaa7b14 */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xaa7b1e */ __asm { MOV dword ptr [RBP + 0x20],0x60bb437f }
    /* +0xaa7b25 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xaa7b28 */ __asm { CMP EAX,0x47bc1fc5 }
    /* +0xaa7b2d */ __asm { JBE 0x7fffa52187ed }
    /* +0xaa7b33 */ __asm { PUSHFQ }
    /* +0xaa7b34 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xaa7b3c */ __asm { POPFQ }
    /* +0xaa7b3d */ __asm { MOV dword ptr [RBP + 0x20],0x40cc51a8 }
    /* +0xaa7b44 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xaa7b47 */ __asm { LEA R8,[0x7fffa47b8998] }
    /* +0xaa7b4e */ __asm { MOV R9,0x23812be2ba4ccf34 }
    /* +0xaa7b58 */ __asm { CMP R8,R9 }
    /* +0xaa7b5b */ __asm { NOP }
    /* +0xaa7b5c */ __asm { NOP }
    /* +0xaa7b5d */ __asm { NOP }
    /* +0xaa7b5e */ __asm { NOP }
    /* +0xaa7b5f */ __asm { NOP }
    /* +0xaa7b60 */ __asm { LEA RDI,[0x7fffa47886f9] }
    /* +0xaa7b67 */ __asm { MOV AX,0x62e3 }
    /* +0xaa7b6b */ __asm { MOV ECX,0xc1829993 }
    /* +0xaa7b70 */ __asm { MOV R9W,0x57d0 }
    /* +0xaa7b75 */ __asm { IMUL R9D,R9D,-0x56b1 }
    /* +0xaa7b7c */ __asm { ADD R9D,R15D }
    /* +0xaa7b7f */ __asm { MOVZX R9D,R9W }
    /* +0xaa7b83 */ __asm { ADD EAX,0x5bfd }
    /* +0xaa7b88 */ __asm { XOR EAX,R15D }
    /* +0xaa7b8b */ __asm { ROL AX,0x8 }
    /* +0xaa7b8f */ __asm { MOVZX EDX,AX }
    /* +0xaa7b92 */ __asm { IMUL EAX,ECX,0x6b7158b3 }
    /* +0xaa7b98 */ __asm { ROL EAX,0xc }
    /* +0xaa7b9b */ __asm { MOV qword ptr [RBP + 0x20],R11 }
    /* +0xaa7b9f */ __asm { SUB EAX,R15D }
    /* +0xaa7ba2 */ __asm { MOVSXD R10,EAX }
    /* +0xaa7ba5 */ __asm { MOV EAX,dword ptr [R8 + 0x4640] }
    /* +0xaa7bac */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0xaa7bb3 */ __asm { SYSCALL }
    /* +0xaa7bb5 */ __asm { MOV R9,0x6ed1ee9026cb3790 }
    /* +0xaa7bbf */ __asm { CMP RDI,R9 }
    /* +0xaa7bc2 */ __asm { JNZ 0x7fffa5217bc7 }
    /* +0xaa7bc4 */ __asm { FBLD tword ptr [RSI + -0x6f] }
    /* +0xaa7bc7 */ __asm { MOV AX,0x3794 }
    /* +0xaa7bcb */ __asm { XOR EAX,R15D }
    /* +0xaa7bce */ __asm { ADD EAX,0x5ebc }
    /* +0xaa7bd3 */ __asm { XOR ECX,ECX }
    /* +0xaa7bd5 */ __asm { IMUL R9D,ECX,0x7ffe03e1 }
    /* +0xaa7bdc */ __asm { MOV ECX,R15D }
    /* +0xaa7bdf */ __asm { ROR R9D,CL }
    /* +0xaa7be2 */ __asm { NOT R9D }
    /* +0xaa7be5 */ __asm { MOV CX,0xf5e }
    /* +0xaa7be9 */ __asm { MOV qword ptr [RBP + 0xe0],R8 }
    /* +0xaa7bf0 */ __asm { MOVZX EDX,AX }
    /* +0xaa7bf3 */ __asm { MOVSXD R10,R9D }
    /* +0xaa7bf6 */ __asm { MOV EAX,dword ptr [RDI + -0x4089] }
    /* +0xaa7bfc */ __asm { ADD ECX,0xffffebe5 }
    /* +0xaa7c02 */ __asm { XOR ECX,0xffff9263 }
    /* +0xaa7c08 */ __asm { ADD ECX,R15D }
    /* +0xaa7c0b */ __asm { MOVZX R8D,CX }
    /* +0xaa7c0f */ __asm { MOV qword ptr [RSP + 0x28],RDX }
    /* +0xaa7c14 */ __asm { JMP 0x7fffa52183d5 }
    /* +0xaa7c20 */ __asm { CMP R9D,0x3 }
    /* +0xaa7c24 */ __asm { JZ 0x7fffa5217f40 }
    /* +0xaa7c2a */ __asm { MOV EDX,0xbf313555 }
    /* +0xaa7c2f */ __asm { MOV R9,-0x23c68bb64bf42fe7 }
    /* +0xaa7c39 */ __asm { CMP RDX,R9 }
    /* +0xaa7c3c */ __asm { NOP }
    /* +0xaa7c3d */ __asm { NOP }
    /* +0xaa7c3e */ __asm { NOP }
    /* +0xaa7c3f */ __asm { NOP }
    /* +0xaa7c40 */ __asm { NOP }
    /* +0xaa7c41 */ __asm { MOV EAX,0x48573d8 }
    /* +0xaa7c46 */ __asm { XOR EAX,0xbbb7baf3 }
    /* +0xaa7c4b */ __asm { MOV ECX,R15D }
    /* +0xaa7c4e */ __asm { ROR EAX,CL }
    /* +0xaa7c50 */ __asm { MOVSXD R9,EAX }
    /* +0xaa7c53 */ __asm { XOR R9,0x7ffe0380 }
    /* +0xaa7c5a */ __asm { TEST uint8_t ptr [R9 + RDX*0x1 + 0x240],0x1 }
    /* +0xaa7c63 */ __asm { JZ 0x7fffa52185e0 }
    /* +0xaa7c69 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM8 }
    /* +0xaa7c72 */ __asm { MOV dword ptr [RBP + 0x20],0x1c1d90e9 }
    /* +0xaa7c79 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xaa7c7c */ __asm { TEST AL,0x1 }
    /* +0xaa7c7e */ __asm { JZ 0x7fffa52187f5 }
    /* +0xaa7c84 */ __asm { MOV AX,0xb173 }
    /* +0xaa7c88 */ __asm { XOR EAX,0x4793 }
    /* +0xaa7c8d */ __asm { SUB EAX,R15D }
    /* +0xaa7c90 */ __asm { ROL AX,0x7 }
    /* +0xaa7c94 */ __asm { MOVZX R9D,AX }
    /* +0xaa7c98 */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xaa7ca2 */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0xaa7ca6 */ __asm { MOV R11,0x4e82f541e7ce67b5 }
    /* +0xaa7cb0 */ __asm { CMP R9,R11 }
    /* +0xaa7cb3 */ __asm { NOP }
    /* +0xaa7cb4 */ __asm { NOP }
    /* +0xaa7cb5 */ __asm { NOP }
    /* +0xaa7cb6 */ __asm { NOP }
    /* +0xaa7cb7 */ __asm { NOP }
    /* +0xaa7cb8 */ __asm { NOP }
    /* +0xaa7cb9 */ __asm { NOP }
    /* +0xaa7cba */ __asm { NOP }
    /* +0xaa7cbb */ __asm { NOP }
    /* +0xaa7cbc */ __asm { NOP }
    /* +0xaa7cbd */ __asm { NOP }
    /* +0xaa7cbe */ __asm { NOP }
    /* +0xaa7cbf */ __asm { NOP }
    /* +0xaa7cc0 */ __asm { MOV CX,0x50a2 }
    /* +0xaa7cc4 */ __asm { ADD ECX,0x4626 }
    /* +0xaa7cca */ __asm { MOV R10,R15 }
    /* +0xaa7ccd */ __asm { OR R10,0x1 }
    /* +0xaa7cd1 */ __asm { MOV AX,0x86ac }
    /* +0xaa7cd5 */ __asm { XOR ECX,R15D }
    /* +0xaa7cd8 */ __asm { MOVZX EDX,CX }
    /* +0xaa7cdb */ __asm { LEA R8,[0x7fffa47ba728] }
    /* +0xaa7ce2 */ __asm { MOV qword ptr [RBP + 0x20],R11 }
    /* +0xaa7ce6 */ __asm { MOV CX,0x3b06 }
    /* +0xaa7cea */ __asm { IMUL ECX,ECX,0x30a7 }
    /* +0xaa7cf0 */ __asm { SUB ECX,R15D }
    /* +0xaa7cf3 */ __asm { ROL CX,0x2 }
    /* +0xaa7cf7 */ __asm { MOVZX R11D,CX }
    /* +0xaa7cfb */ __asm { MOV R9W,0x17ad }
    /* +0xaa7d00 */ __asm { XOR R9D,0x16ad }
    /* +0xaa7d07 */ __asm { ROL R9W,0xc }
    /* +0xaa7d0c */ __asm { MOV ECX,R15D }
    /* +0xaa7d0f */ __asm { ROR R9W,CL }
    /* +0xaa7d13 */ __asm { MOVZX R9D,R9W }
    /* +0xaa7d17 */ __asm { MOV ECX,0xffff86ab }
    /* +0xaa7d1c */ __asm { SUB ECX,EAX }
    /* +0xaa7d1e */ __asm { MOV RBX,-0x240f40945ec1b636 }
    /* +0xaa7d28 */ __asm { IMUL RBX,R10 }
    /* +0xaa7d2c */ __asm { ROL RBX,0xd }
    /* +0xaa7d30 */ __asm { MOVSX R10,CX }
    /* +0xaa7d34 */ __asm { LEA RDI,[0x7fffa477d93d] }
    /* +0xaa7d3b */ __asm { MOV EAX,dword ptr [R8 + R11*0x1 + 0x88] }
}


// ============================================================================
// Function : Unwind@7fffa52219f0  |  RVA: 0xab19f0  |  Size: 3533 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa52219f0(void) {
    /* +0xab19f0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xab19f5 */ __asm { PUSH RBP }
    /* +0xab19f6 */ __asm { PUSH R12 }
    /* +0xab19f8 */ __asm { PUSH R13 }
    /* +0xab19fa */ __asm { PUSH R14 }
    /* +0xab19fc */ __asm { PUSH RSI }
    /* +0xab19fd */ __asm { PUSH RDI }
    /* +0xab19fe */ __asm { PUSH RBX }
    /* +0xab19ff */ __asm { PUSH R15 }
    /* +0xab1a01 */ __asm { SUB RSP,0xc8 }
    /* +0xab1a08 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xab1a0f */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM15 }
    /* +0xab1a16 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0xab1a1d */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0xab1a23 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0xab1a2d */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM8 }
    /* +0xab1a37 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0xab1a41 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM10 }
    /* +0xab1a4b */ __asm { MOV R10,qword ptr [RBP + 0x100] }
    /* +0xab1a52 */ __asm { RDTSC }
    /* +0xab1a54 */ __asm { SHL RDX,0x20 }
    /* +0xab1a58 */ __asm { OR RDX,RAX }
    /* +0xab1a5b */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xab1a65 */ __asm { IMUL RDX,R9 }
    /* +0xab1a69 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xab1a73 */ __asm { ADD RDX,R9 }
    /* +0xab1a76 */ __asm { MOV R9,RDX }
    /* +0xab1a79 */ __asm { SHR R9,0x2d }
    /* +0xab1a7d */ __asm { MOV RCX,RDX }
    /* +0xab1a80 */ __asm { SHR RCX,0x3b }
    /* +0xab1a84 */ __asm { SHR RDX,0x1b }
    /* +0xab1a88 */ __asm { XOR EDX,R9D }
    /* +0xab1a8b */ __asm { ROR EDX,CL }
    /* +0xab1a8d */ __asm { AND EDX,0x3 }
    /* +0xab1a90 */ __asm { CMP EDX,0x2 }
    /* +0xab1a93 */ __asm { JC 0x7fffa5221c2f }
    /* +0xab1a99 */ __asm { CMP EDX,0x3 }
    /* +0xab1a9c */ __asm { JNZ 0x7fffa5221e96 }
    /* +0xab1aa2 */ __asm { MOV R8D,0xf77132fb }
    /* +0xab1aa8 */ __asm { MOV R9,-0x17837063caedd26e }
    /* +0xab1ab2 */ __asm { CMP R8,R9 }
    /* +0xab1ab5 */ __asm { JZ 0x7fffa522285a }
    /* +0xab1abb */ __asm { NOP }
    /* +0xab1abd */ __asm { MOV R11,0x0 }
    /* +0xab1ac4 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xab1acb */ __asm { CMP dword ptr [R8 + -0x77732f3b],0xd }
    /* +0xab1ad3 */ __asm { JNC 0x7fffa522222a }
    /* +0xab1ad9 */ __asm { PXOR XMM5,XMM5 }
    /* +0xab1add */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab1ae5 */ __asm { MOV dword ptr [RBP + 0x20],0xd9189e82 }
    /* +0xab1aec */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab1aef */ __asm { MOV AX,0xc8f1 }
    /* +0xab1af3 */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xab1afd */ __asm { MOV R9,qword ptr [RBP + 0x40] }
    /* +0xab1b01 */ __asm { OR R9D,0x1 }
    /* +0xab1b05 */ __asm { MOV ECX,R9D }
    /* +0xab1b08 */ __asm { IMUL ECX,EAX }
    /* +0xab1b0b */ __asm { SUB ECX,dword ptr [RBP + 0x130] }
    /* +0xab1b11 */ __asm { ADD ECX,0xffff89a7 }
    /* +0xab1b17 */ __asm { MOVZX ECX,CX }
    /* +0xab1b1a */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xab1b1e */ __asm { MOV dword ptr [RBP + 0x20],0x27c59411 }
    /* +0xab1b25 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab1b28 */ __asm { LEA R8,[0x7fffa478c913] }
    /* +0xab1b2f */ __asm { MOV R11,-0x1c24de5814aa2e45 }
    /* +0xab1b39 */ __asm { CMP R8,R11 }
    /* +0xab1b3c */ __asm { JZ 0x7fffa5222868 }
    /* +0xab1b42 */ __asm { MOV CX,0xf1b }
    /* +0xab1b46 */ __asm { MOVD XMM5,dword ptr [RBP + 0x58] }
    /* +0xab1b4b */ __asm { MOV R11W,0xd545 }
    /* +0xab1b50 */ __asm { ADD R11D,0x24fd }
    /* +0xab1b57 */ __asm { MOV R10W,0x17cc }
    /* +0xab1b5c */ __asm { MOV qword ptr [RBP + 0x20],RDX }
    /* +0xab1b60 */ __asm { MOV EAX,dword ptr [R8 + -0x7a87] }
    /* +0xab1b67 */ __asm { MOV R8,qword ptr [RBP + 0x130] }
    /* +0xab1b6e */ __asm { MOV EDX,R8D }
    /* +0xab1b71 */ __asm { OR EDX,0x1 }
    /* +0xab1b74 */ __asm { IMUL EDX,ECX }
    /* +0xab1b77 */ __asm { LEA RDI,[0x7fffa47c156d] }
    /* +0xab1b7e */ __asm { MOVD XMM1,EDX }
    /* +0xab1b82 */ __asm { PSUBW XMM1,XMM5 }
    /* +0xab1b86 */ __asm { ADD R10D,R8D }
    /* +0xab1b89 */ __asm { ADD R10D,0xffffd156 }
    /* +0xab1b90 */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0xab1b94 */ __asm { ROR R10W,CL }
    /* +0xab1b98 */ __asm { MOVZX EDX,R10W }
    /* +0xab1b9c */ __asm { MOVD ECX,XMM1 }
    /* +0xab1ba0 */ __asm { XOR ECX,0xd419 }
    /* +0xab1ba6 */ __asm { MOVSX R10,CX }
    /* +0xab1baa */ __asm { XOR R11D,R8D }
    /* +0xab1bad */ __asm { IMUL R11D,R9D }
    /* +0xab1bb1 */ __asm { ADD R11D,0xffffe07e }
    /* +0xab1bb8 */ __asm { MOVZX R9D,R11W }
    /* +0xab1bbc */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0xab1bc3 */ __asm { SYSCALL }
    /* +0xab1bc5 */ __asm { MOV R9,0x34c1ce2a2d7927f5 }
    /* +0xab1bcf */ __asm { CMP RDI,R9 }
    /* +0xab1bd2 */ __asm { NOP }
    /* +0xab1bd3 */ __asm { NOP }
    /* +0xab1bd4 */ __asm { NOP }
    /* +0xab1bd5 */ __asm { NOP }
    /* +0xab1bd6 */ __asm { NOP }
    /* +0xab1bd7 */ __asm { NOP }
    /* +0xab1bd8 */ __asm { NOP }
    /* +0xab1bd9 */ __asm { NOP }
    /* +0xab1bda */ __asm { NOP }
    /* +0xab1bdb */ __asm { NOP }
    /* +0xab1bdc */ __asm { NOP }
    /* +0xab1bdd */ __asm { NOP }
    /* +0xab1bde */ __asm { NOP }
    /* +0xab1bdf */ __asm { NOP }
    /* +0xab1be0 */ __asm { NOP }
    /* +0xab1be1 */ __asm { NOP }
    /* +0xab1be2 */ __asm { NOP }
    /* +0xab1c2f */ __asm { CMP EDX,0x1 }
    /* +0xab1c32 */ __asm { JZ 0x7fffa522209d }
    /* +0xab1c38 */ __asm { MOV R8D,0x8ef93695 }
    /* +0xab1c3e */ __asm { MOV R9,-0x70bd633c50705000 }
    /* +0xab1c48 */ __asm { CMP R8,R9 }
    /* +0xab1c4b */ __asm { NOP }
    /* +0xab1c4c */ __asm { NOP }
    /* +0xab1c4d */ __asm { NOP }
    /* +0xab1c4e */ __asm { NOP }
    /* +0xab1c4f */ __asm { NOP }
    /* +0xab1c50 */ __asm { NOP }
    /* +0xab1c51 */ __asm { NOP }
    /* +0xab1c52 */ __asm { NOP }
    /* +0xab1c53 */ __asm { NOP }
    /* +0xab1c54 */ __asm { NOP }
    /* +0xab1c55 */ __asm { NOP }
    /* +0xab1c56 */ __asm { NOP }
    /* +0xab1c57 */ __asm { NOP }
    /* +0xab1c58 */ __asm { MOV R9D,dword ptr [R8 + -0xefb33d1] }
    /* +0xab1c5f */ __asm { MOV R11,0x48f906dd658de1ea }
    /* +0xab1c69 */ __asm { MOV R10,qword ptr [RBP + -0x8] }
    /* +0xab1c6d */ __asm { IMUL R10,R11 }
    /* +0xab1c71 */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0xab1c75 */ __asm { ROR R10,CL }
    /* +0xab1c78 */ __asm { MOV R11,0x5555555555555556 }
    /* +0xab1c82 */ __asm { IMUL R11,R9 }
    /* +0xab1c86 */ __asm { NOT R10 }
    /* +0xab1c89 */ __asm { CMP R11,R10 }
    /* +0xab1c8c */ __asm { JNC 0x7fffa52223e1 }
    /* +0xab1c92 */ __asm { PXOR XMM5,XMM5 }
    /* +0xab1c96 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab1c9e */ __asm { MOV R9W,0x2939 }
    /* +0xab1ca3 */ __asm { ADD R9D,dword ptr [RBP + 0x130] }
    /* +0xab1caa */ __asm { ROL R9W,0x7 }
    /* +0xab1caf */ __asm { MOV R11,qword ptr [RBP + 0x60] }
    /* +0xab1cb3 */ __asm { LEA EAX,[R11 + R9*0x1] }
    /* +0xab1cb7 */ __asm { MOVZX R9D,AX }
    /* +0xab1cbb */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0xab1cbf */ __asm { MOV R9,qword ptr [R9 + 0x18] }
    /* +0xab1cc3 */ __asm { MOV R8,-0x414e6f132bfcb481 }
    /* +0xab1ccd */ __asm { MOV R11,-0x410d8d98cf40541 }
    /* +0xab1cd7 */ __asm { CMP R9,R11 }
    /* +0xab1cda */ __asm { NOP }
    /* +0xab1cdb */ __asm { NOP }
    /* +0xab1cdc */ __asm { NOP }
    /* +0xab1cdd */ __asm { NOP }
    /* +0xab1cde */ __asm { NOP }
    /* +0xab1cdf */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xab1ce9 */ __asm { MOV dword ptr [RBP + 0x20],0x832df4ea }
    /* +0xab1cf0 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab1cf3 */ __asm { CMP EAX,0x50f290e2 }
    /* +0xab1cf8 */ __asm { NOP }
    /* +0xab1cf9 */ __asm { NOP }
    /* +0xab1cfa */ __asm { NOP }
    /* +0xab1cfb */ __asm { NOP }
    /* +0xab1cfc */ __asm { NOP }
    /* +0xab1cfd */ __asm { NOP }
    /* +0xab1cfe */ __asm { NOP }
    /* +0xab1cff */ __asm { NOP }
    /* +0xab1d00 */ __asm { NOP }
    /* +0xab1d01 */ __asm { NOP }
    /* +0xab1d02 */ __asm { NOP }
    /* +0xab1d03 */ __asm { NOP }
    /* +0xab1d04 */ __asm { NOP }
    /* +0xab1d05 */ __asm { NOP }
    /* +0xab1d06 */ __asm { NOP }
    /* +0xab1d07 */ __asm { PUSHFQ }
    /* +0xab1d08 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xab1d10 */ __asm { POPFQ }
    /* +0xab1d11 */ __asm { MOV dword ptr [RBP + 0x20],0x570de216 }
    /* +0xab1d18 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab1d1b */ __asm { TEST EAX,EAX }
    /* +0xab1d1d */ __asm { NOP }
    /* +0xab1d1e */ __asm { NOP }
    /* +0xab1d1f */ __asm { NOP }
    /* +0xab1d20 */ __asm { NOP }
    /* +0xab1d21 */ __asm { NOP }
    /* +0xab1d22 */ __asm { LEA R8,[0x7fffa47874f7] }
    /* +0xab1d29 */ __asm { MOV R9D,0x73259298 }
    /* +0xab1d2f */ __asm { MOV R11,-0x588d9b4fc36db549 }
    /* +0xab1d39 */ __asm { MOV R10,qword ptr [RBP + 0x130] }
    /* +0xab1d40 */ __asm { SUB R10,qword ptr [RBP + 0x60] }
    /* +0xab1d44 */ __asm { MOV RDX,-0x49d9113ff6855b68 }
    /* +0xab1d4e */ __asm { XOR EAX,EAX }
    /* +0xab1d50 */ __asm { CMP R8,RDX }
    /* +0xab1d53 */ __asm { SETC AL }
    /* +0xab1d56 */ __asm { MOV ECX,0x233ff26c }
    /* +0xab1d5b */ __asm { MOV EDX,0x53b318e6 }
    /* +0xab1d60 */ __asm { SUB EDX,ECX }
    /* +0xab1d62 */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0xab1d66 */ __asm { ROL EDX,CL }
    /* +0xab1d68 */ __asm { MOVSXD RDX,EDX }
    /* +0xab1d6b */ __asm { ADD R10,R11 }
    /* +0xab1d6e */ __asm { NOT R10 }
    /* +0xab1d71 */ __asm { MOV R11D,0xe2600f0f }
    /* +0xab1d77 */ __asm { IMUL R11,R10 }
    /* +0xab1d7b */ __asm { XOR ECX,ECX }
    /* +0xab1d7d */ __asm { CMP R8,R11 }
    /* +0xab1d80 */ __asm { SETZ CL }
    /* +0xab1d83 */ __asm { IMUL R9D,R9D,0x35a4f355 }
    /* +0xab1d8a */ __asm { XOR R9D,dword ptr [RBP + 0x58] }
    /* +0xab1d8e */ __asm { MOV R10D,0xe11c34ba }
    /* +0xab1d94 */ __asm { SUB R10D,R9D }
    /* +0xab1d97 */ __asm { CMP R10,RDX }
    /* +0xab1d9a */ __asm { CMOVL ECX,EAX }
    /* +0xab1d9d */ __asm { CMP CL,0x1 }
    /* +0xab1da0 */ __asm { JZ 0x7fffa5222870 }
    /* +0xab1da6 */ __asm { MOV R14W,0x2d21 }
    /* +0xab1dab */ __asm { NOP }
    /* +0xab1dad */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xab1db4 */ __asm { MOV R11,0x0 }
    /* +0xab1dbb */ __asm { MOV R9,qword ptr [RBP + 0x130] }
    /* +0xab1dc2 */ __asm { MOVD XMM5,R9D }
    /* +0xab1dc7 */ __asm { MOV AX,0xf772 }
    /* +0xab1dcb */ __asm { SUB EAX,R9D }
    /* +0xab1dce */ __asm { ROL AX,0x3 }
    /* +0xab1dd2 */ __asm { OR R9D,0x1 }
    /* +0xab1dd6 */ __asm { MOV R11W,0x1954 }
    /* +0xab1ddb */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0xab1ddf */ __asm { SUB R11D,ECX }
    /* +0xab1de2 */ __asm { ADD R11D,0x1767 }
    /* +0xab1de9 */ __asm { MOVD XMM1,R11D }
    /* +0xab1dee */ __asm { PXOR XMM1,XMM5 }
    /* +0xab1df2 */ __asm { MOV R11D,ECX }
    /* +0xab1df5 */ __asm { OR R11D,0x1 }
    /* +0xab1df9 */ __asm { IMUL R11D,EAX }
    /* +0xab1dfd */ __asm { MOV qword ptr [RBP + 0x20],R10 }
    /* +0xab1e01 */ __asm { MOV EAX,dword ptr [R8 + -0x2edb] }
    /* +0xab1e08 */ __asm { ADD R11D,0xffffed01 }
    /* +0xab1e0f */ __asm { MOVZX EDX,R11W }
    /* +0xab1e13 */ __asm { MOVD R10D,XMM1 }
    /* +0xab1e18 */ __asm { MOVSX R10,R10W }
    /* +0xab1e1c */ __asm { LEA RDI,[0x7fffa4788c58] }
    /* +0xab1e23 */ __asm { IMUL R9D,R14D }
    /* +0xab1e27 */ __asm { ROL R9W,CL }
    /* +0xab1e2b */ __asm { ROL R9W,0x8 }
    /* +0xab1e30 */ __asm { MOVZX R9D,R9W }
    /* +0xab1e34 */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0xab1e3b */ __asm { SYSCALL }
    /* +0xab1e3d */ __asm { MOV R9,-0x388c8023a4f28f06 }
    /* +0xab1e47 */ __asm { CMP RDI,R9 }
    /* +0xab1e4a */ __asm { JZ 0x7fffa5222882 }
    /* +0xab1e50 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab1e57 */ __asm { NOP }
    /* +0xab1e59 */ __asm { MOV R8,0x0 }
    /* +0xab1e60 */ __asm { MOV qword ptr [RBP + 0xe0],R8 }
    /* +0xab1e67 */ __asm { MOV EAX,dword ptr [RDI + -0x45d4] }
    /* +0xab1e6d */ __asm { MOV R9W,0x479c }
    /* +0xab1e72 */ __asm { ADD R9D,0x266d }
    /* +0xab1e79 */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0xab1e7d */ __asm { ROL R9W,CL }
    /* +0xab1e81 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab1e88 */ __asm { XOR ECX,R9D }
    /* +0xab1e8b */ __asm { NOT ECX }
    /* +0xab1e8d */ __asm { MOVSX R10,CX }
    /* +0xab1e91 */ __asm { JMP 0x7fffa5222801 }
    /* +0xab1e96 */ __asm { MOV R11D,0x4fae3f16 }
    /* +0xab1e9c */ __asm { MOV R9,-0x17034ee81eccd632 }
    /* +0xab1ea6 */ __asm { CMP R11,R9 }
    /* +0xab1ea9 */ __asm { JZ 0x7fffa522289a }
    /* +0xab1eaf */ __asm { MOV R8D,0xe7be4a88 }
    /* +0xab1eb5 */ __asm { MOV R10D,0xd3e683cc }
    /* +0xab1ebb */ __asm { IMUL R10D,dword ptr [RBP + 0x12c] }
    /* +0xab1ec3 */ __asm { ADD R8D,0x52c7595b }
    /* +0xab1eca */ __asm { MOV R9,qword ptr [R11 + 0x304fc0f2] }
    /* +0xab1ed1 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab1ed8 */ __asm { SUB R10D,ECX }
    /* +0xab1edb */ __asm { MOV R11,-0x4ea0bb046768b6e4 }
    /* +0xab1ee5 */ __asm { MOV RAX,R9 }
    /* +0xab1ee8 */ __asm { MUL R11 }
    /* +0xab1eeb */ __asm { MOV R11,RDX }
    /* +0xab1eee */ __asm { MOV EDX,0x1476c9f }
    /* +0xab1ef3 */ __asm { MOV RAX,R9 }
    /* +0xab1ef6 */ __asm { MUL RDX }
    /* +0xab1ef9 */ __asm { ADD RAX,R11 }
    /* +0xab1efc */ __asm { ADC RDX,0x0 }
    /* +0xab1f00 */ __asm { XOR R10D,0x1b5a98a4 }
    /* +0xab1f07 */ __asm { MOV R9D,0xd26afecc }
    /* +0xab1f0d */ __asm { ADD R9D,0xa1871c31 }
    /* +0xab1f14 */ __asm { ROL R8D,0xd }
    /* +0xab1f18 */ __asm { ROL R9D,CL }
    /* +0xab1f1b */ __asm { MOVD XMM5,R8D }
    /* +0xab1f20 */ __asm { PADDD XMM5,xmmword ptr [RBP + 0x10] }
    /* +0xab1f25 */ __asm { MOVD R8D,XMM5 }
    /* +0xab1f2a */ __asm { MOV RCX,qword ptr [RBP + 0x40] }
    /* +0xab1f2e */ __asm { ROL R8D,CL }
    /* +0xab1f31 */ __asm { AND EDX,0x1 }
    /* +0xab1f34 */ __asm { SUB R9D,dword ptr [RBP + 0x70] }
    /* +0xab1f38 */ __asm { XOR ECX,ECX }
    /* +0xab1f3a */ __asm { CMP R10,R8 }
    /* +0xab1f3d */ __asm { CMOVC RCX,RDX }
    /* +0xab1f41 */ __asm { OR RCX,R9 }
    /* +0xab1f44 */ __asm { JZ 0x7fffa522252d }
    /* +0xab1f4a */ __asm { PXOR XMM5,XMM5 }
    /* +0xab1f4e */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab1f56 */ __asm { PUSHFQ }
    /* +0xab1f57 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xab1f5f */ __asm { POPFQ }
    /* +0xab1f60 */ __asm { MOV dword ptr [RBP + 0x20],0x1af364fa }
    /* +0xab1f67 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab1f6a */ __asm { MOV R9W,0x96e0 }
    /* +0xab1f6f */ __asm { NOT R9D }
    /* +0xab1f72 */ __asm { ADD R9D,dword ptr [RBP + 0x130] }
    /* +0xab1f79 */ __asm { MOV RCX,qword ptr [RBP + 0x28] }
    /* +0xab1f7d */ __asm { ROR R9W,CL }
    /* +0xab1f81 */ __asm { MOVSX ECX,R9W }
    /* +0xab1f85 */ __asm { CMP EAX,ECX }
    /* +0xab1f87 */ __asm { JLE 0x7fffa52228a2 }
    /* +0xab1f8d */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xab1f97 */ __asm { MOV dword ptr [RBP + 0x20],0x7f64d23 }
    /* +0xab1f9e */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab1fa1 */ __asm { TEST AL,0x1 }
    /* +0xab1fa3 */ __asm { NOP }
    /* +0xab1fa4 */ __asm { NOP }
    /* +0xab1fa5 */ __asm { NOP }
    /* +0xab1fa6 */ __asm { NOP }
    /* +0xab1fa7 */ __asm { NOP }
    /* +0xab1fa8 */ __asm { NOP }
    /* +0xab1fa9 */ __asm { NOP }
    /* +0xab1faa */ __asm { MOV dword ptr [RBP + 0x20],0x513877c0 }
    /* +0xab1fb1 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab1fb4 */ __asm { LEA R8,[0x7fffa478cb92] }
    /* +0xab1fbb */ __asm { MOV R9,0x9bab0b1513f1091 }
    /* +0xab1fc5 */ __asm { CMP R8,R9 }
    /* +0xab1fc8 */ __asm { NOP }
    /* +0xab1fc9 */ __asm { NOP }
    /* +0xab1fca */ __asm { NOP }
    /* +0xab1fcb */ __asm { NOP }
    /* +0xab1fcc */ __asm { NOP }
    /* +0xab1fcd */ __asm { MOV AX,0x6f2f }
    /* +0xab1fd1 */ __asm { MOVD XMM5,dword ptr [RBP + 0x70] }
    /* +0xab1fd6 */ __asm { MOV CX,0xe0cd }
    /* +0xab1fda */ __asm { LEA RDI,[0x7fffa47841e7] }
    /* +0xab1fe1 */ __asm { ADD ECX,0xffffbb6c }
    /* +0xab1fe7 */ __asm { ROL CX,0x1 }
    /* +0xab1fea */ __asm { XOR ECX,dword ptr [RBP + 0x28] }
    /* +0xab1fed */ __asm { NOT ECX }
    /* +0xab1fef */ __asm { MOVZX R9D,CX }
    /* +0xab1ff3 */ __asm { MOV R10W,0xc759 }
    /* +0xab1ff8 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab1fff */ __asm { MOV R11D,ECX }
    /* +0xab2002 */ __asm { XOR R11D,R10D }
    /* +0xab2005 */ __asm { IMUL R11D,R11D,-0x5e57 }
    /* +0xab200c */ __asm { SUB R11D,dword ptr [RBP + 0x40] }
    /* +0xab2010 */ __asm { MOVZX EDX,R11W }
    /* +0xab2014 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xab201b */ __asm { MOV R11,0x0 }
    /* +0xab2022 */ __asm { NOP }
    /* +0xab2024 */ __asm { MOV qword ptr [RBP + 0x20],R11 }
    /* +0xab2028 */ __asm { IMUL EAX,EAX,-0x237d }
    /* +0xab202e */ __asm { ADD EAX,0xffff9bf5 }
    /* +0xab2033 */ __asm { ROL AX,CL }
    /* +0xab2036 */ __asm { MOVD XMM1,EAX }
    /* +0xab203a */ __asm { PXOR XMM1,XMM5 }
    /* +0xab203e */ __asm { MOVD ECX,XMM1 }
    /* +0xab2042 */ __asm { MOVSX R10,CX }
    /* +0xab2046 */ __asm { MOV EAX,dword ptr [R8 + -0x7d06] }
    /* +0xab204d */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0xab2054 */ __asm { SYSCALL }
    /* +0xab2056 */ __asm { MOV R9,-0x1925765e0fdcd491 }
    /* +0xab2060 */ __asm { CMP RDI,R9 }
    /* +0xab2063 */ __asm { NOP }
    /* +0xab2064 */ __asm { NOP }
    /* +0xab2065 */ __asm { NOP }
    /* +0xab2066 */ __asm { NOP }
    /* +0xab2067 */ __asm { NOP }
    /* +0xab2068 */ __asm { MOV qword ptr [RBP + 0xe0],R8 }
    /* +0xab206f */ __asm { MOV AX,0x6c4e }
    /* +0xab2073 */ __asm { IMUL EAX,EAX,0x77f7 }
    /* +0xab2079 */ __asm { MOV R9,qword ptr [RBP + 0x130] }
    /* +0xab2080 */ __asm { MOV ECX,R9D }
    /* +0xab2083 */ __asm { XOR ECX,EAX }
    /* +0xab2085 */ __asm { MOV R9D,0x57a1 }
    /* +0xab208b */ __asm { SUB R9D,ECX }
    /* +0xab208e */ __asm { MOVSX R10,R9W }
    /* +0xab2092 */ __asm { MOV EAX,dword ptr [RDI + 0xbd1] }
    /* +0xab2098 */ __asm { JMP 0x7fffa5222801 }
    /* +0xab209d */ __asm { PXOR XMM5,XMM5 }
    /* +0xab20a1 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab20a9 */ __asm { MOV dword ptr [RBP + 0x20],0x84585857 }
    /* +0xab20b0 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab20b3 */ __asm { MOV ECX,0xf4be073d }
    /* +0xab20b8 */ __asm { IMUL ECX,ECX,-0x3ef283b1 }
    /* +0xab20be */ __asm { MOV R9,qword ptr [RBP + 0x70] }
    /* +0xab20c2 */ __asm { ADD R9D,ECX }
    /* +0xab20c5 */ __asm { MOV ECX,0x68d991dc }
    /* +0xab20ca */ __asm { SUB ECX,R9D }
    /* +0xab20cd */ __asm { CMP EAX,ECX }
    /* +0xab20cf */ __asm { JA 0x7fffa52220dc }
    /* +0xab20d1 */ __asm { POP RSI }
    /* +0xab20d2 */ __asm { OR DH,BL }
    /* +0xab20d4 */ __asm { MOV EAX,0x2659fb13 }
    /* +0xab20d9 */ __asm { SBB dword ptr [RDI + 0x49],EAX }
    /* +0xab20dc */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xab20e6 */ __asm { MOV dword ptr [RBP + 0x20],0xbb28dc69 }
    /* +0xab20ed */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab20f0 */ __asm { PUSHFQ }
    /* +0xab20f1 */ __asm { POP R11 }
    /* +0xab20f3 */ __asm { TEST R11D,0x100 }
    /* +0xab20fa */ __asm { NOP }
    /* +0xab20fb */ __asm { NOP }
    /* +0xab20fc */ __asm { NOP }
    /* +0xab20fd */ __asm { MOV dword ptr [RBP + 0x20],0xe9951326 }
    /* +0xab2104 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab2107 */ __asm { MOV CX,0x96e0 }
    /* +0xab210b */ __asm { MOV R9,qword ptr [RBP + 0x40] }
    /* +0xab210f */ __asm { OR R9D,0x1 }
    /* +0xab2113 */ __asm { XOR ECX,dword ptr [RBP + 0x130] }
    /* +0xab2119 */ __asm { IMUL ECX,R9D }
    /* +0xab211d */ __asm { ROL CX,0xa }
    /* +0xab2121 */ __asm { MOVZX ECX,CX }
    /* +0xab2124 */ __asm { CMP EAX,ECX }
    /* +0xab2126 */ __asm { NOP }
    /* +0xab2127 */ __asm { NOP }
    /* +0xab2128 */ __asm { NOP }
    /* +0xab2129 */ __asm { NOP }
    /* +0xab212a */ __asm { NOP }
    /* +0xab212b */ __asm { LEA R8,[0x7fffa47bc9e1] }
    /* +0xab2132 */ __asm { MOV R9,0x7dc6117e9be264e7 }
    /* +0xab213c */ __asm { CMP R8,R9 }
    /* +0xab213f */ __asm { NOP }
    /* +0xab2140 */ __asm { NOP }
    /* +0xab2141 */ __asm { NOP }
    /* +0xab2142 */ __asm { NOP }
    /* +0xab2143 */ __asm { NOP }
    /* +0xab2144 */ __asm { MOVQ XMM5,R8 }
    /* +0xab2149 */ __asm { LEA RDI,[0x7fffa47baea2] }
    /* +0xab2150 */ __asm { MOV AX,0x465c }
    /* +0xab2154 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab215b */ __asm { SUB EAX,ECX }
    /* +0xab215d */ __asm { IMUL R10D,EAX }
    /* +0xab2161 */ __asm { NOT R10D }
    /* +0xab2164 */ __asm { MOVSX R9,R10W }
    /* +0xab2168 */ __asm { MOVQ XMM1,R9 }
    /* +0xab216d */ __asm { MOV AX,0xe5cf }
    /* +0xab2171 */ __asm { MOV R11D,0xa67dffc6 }
    /* +0xab2177 */ __asm { XOR EAX,0x69f }
    /* +0xab217c */ __asm { IMUL EAX,EAX,0x6d93 }
    /* +0xab2182 */ __asm { XOR EAX,ECX }
    /* +0xab2184 */ __asm { MOVZX R9D,AX }
    /* +0xab2188 */ __asm { PADDQ XMM1,XMM5 }
    /* +0xab218c */ __asm { MOVQ R10,XMM1 }
    /* +0xab2191 */ __asm { MOV qword ptr [RBP + 0x20],R8 }
    /* +0xab2195 */ __asm { MOV EAX,dword ptr [R10 + 0x74] }
    /* +0xab2199 */ __asm { MOV R10W,0x7f5a }
    /* +0xab219e */ __asm { MOV R8,qword ptr [RBP + 0x70] }
    /* +0xab21a2 */ __asm { ADD R10D,R8D }
    /* +0xab21a5 */ __asm { XOR R10D,0xfffff31f }
    /* +0xab21ac */ __asm { ADD R10D,ECX }
    /* +0xab21af */ __asm { MOVZX EDX,R10W }
    /* +0xab21b3 */ __asm { XOR R11D,0x59820039 }
    /* +0xab21ba */ __asm { ROL R11D,0x8 }
    /* +0xab21be */ __asm { ROR R11D,CL }
    /* +0xab21c1 */ __asm { MOV RCX,qword ptr [RBP + 0x40] }
    /* +0xab21c5 */ __asm { ROL R11D,CL }
    /* +0xab21c8 */ __asm { MOVSXD R10,R11D }
    /* +0xab21cb */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0xab21d2 */ __asm { SYSCALL }
    /* +0xab21d4 */ __asm { MOV R9,0x12702bcad3be6410 }
    /* +0xab21de */ __asm { CMP RDI,R9 }
    /* +0xab21e1 */ __asm { JZ 0x7fffa52228aa }
    /* +0xab21e7 */ __asm { MOV R9W,0x7a9c }
    /* +0xab21ec */ __asm { MOV R11,qword ptr [RBP + 0x58] }
    /* +0xab21f0 */ __asm { MOV EAX,R11D }
    /* +0xab21f3 */ __asm { OR EAX,0x1 }
    /* +0xab21f6 */ __asm { XOR R9D,dword ptr [RBP + 0x130] }
    /* +0xab21fd */ __asm { NOT R9D }
    /* +0xab2200 */ __asm { IMUL R9D,EAX }
    /* +0xab2204 */ __asm { MOVSX R10,R9W }
    /* +0xab2208 */ __asm { NOP }
    /* +0xab220a */ __asm { MOV R8,0x0 }
    /* +0xab2211 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab2218 */ __asm { MOV qword ptr [RBP + 0xe0],R8 }
    /* +0xab221f */ __asm { MOV EAX,dword ptr [RDI + 0x21da] }
    /* +0xab2225 */ __asm { JMP 0x7fffa5222801 }
    /* +0xab222a */ __asm { MOV EAX,0x8d1eb576 }
    /* +0xab222f */ __asm { IMUL EAX,EAX,0x344706a9 }
    /* +0xab2235 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab223c */ __asm { ROL EAX,CL }
    /* +0xab223e */ __asm { SUB EAX,dword ptr [RBP + 0x28] }
    /* +0xab2241 */ __asm { PXOR XMM5,XMM5 }
    /* +0xab2245 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab224d */ __asm { MOV dword ptr [RBP + 0x20],EAX }
    /* +0xab2250 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab2253 */ __asm { MOV AX,0xc7c7 }
    /* +0xab2257 */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
}


// ============================================================================
// Function : Unwind@7fffa5222900  |  RVA: 0xab2900  |  Size: 3847 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa5222900(void) {
    /* +0xab2900 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xab2905 */ __asm { PUSH RBP }
    /* +0xab2906 */ __asm { PUSH R12 }
    /* +0xab2908 */ __asm { PUSH R13 }
    /* +0xab290a */ __asm { PUSH R14 }
    /* +0xab290c */ __asm { PUSH RSI }
    /* +0xab290d */ __asm { PUSH RDI }
    /* +0xab290e */ __asm { PUSH RBX }
    /* +0xab290f */ __asm { PUSH R15 }
    /* +0xab2911 */ __asm { SUB RSP,0xc8 }
    /* +0xab2918 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xab291f */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM15 }
    /* +0xab2926 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0xab292d */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0xab2933 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0xab293d */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM8 }
    /* +0xab2947 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0xab2951 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM10 }
    /* +0xab295b */ __asm { MOV R9,qword ptr [RBP + 0x30] }
    /* +0xab295f */ __asm { MOV RBX,qword ptr [R9] }
    /* +0xab2962 */ __asm { RDTSC }
    /* +0xab2964 */ __asm { SHL RDX,0x20 }
    /* +0xab2968 */ __asm { OR RDX,RAX }
    /* +0xab296b */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xab2975 */ __asm { IMUL RDX,R9 }
    /* +0xab2979 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xab2983 */ __asm { ADD RDX,R9 }
    /* +0xab2986 */ __asm { MOV RCX,RDX }
    /* +0xab2989 */ __asm { SHR RCX,0x3b }
    /* +0xab298d */ __asm { MOV R9,RDX }
    /* +0xab2990 */ __asm { SHR R9,0x2d }
    /* +0xab2994 */ __asm { SHR RDX,0x1b }
    /* +0xab2998 */ __asm { XOR R9D,EDX }
    /* +0xab299b */ __asm { ROR R9D,CL }
    /* +0xab299e */ __asm { AND R9D,0x3 }
    /* +0xab29a2 */ __asm { CMP R9D,0x2 }
    /* +0xab29a6 */ __asm { JC 0x7fffa5222aa3 }
    /* +0xab29ac */ __asm { CMP R9D,0x3 }
    /* +0xab29b0 */ __asm { JZ 0x7fffa5222cad }
    /* +0xab29b6 */ __asm { LEA RDX,[0x7fffa47bfab2] }
    /* +0xab29bd */ __asm { MOV R9,0x48bb244dedd3b8b8 }
    /* +0xab29c7 */ __asm { CMP RDX,R9 }
    /* +0xab29ca */ __asm { JZ 0x7fffa52239c0 }
    /* +0xab29d0 */ __asm { MOV R9D,0x87e9abc4 }
    /* +0xab29d6 */ __asm { MOV EAX,0x508a97d3 }
    /* +0xab29db */ __asm { IMUL ECX,EAX,0x4f140993 }
    /* +0xab29e1 */ __asm { NOT ECX }
    /* +0xab29e3 */ __asm { MOV R8,qword ptr [RBP + 0x130] }
    /* +0xab29ea */ __asm { ADD ECX,R8D }
    /* +0xab29ed */ __asm { IMUL ECX,dword ptr [RBP + 0x12c] }
    /* +0xab29f4 */ __asm { XOR R9D,R8D }
    /* +0xab29f7 */ __asm { ADD R9D,0x62759020 }
    /* +0xab29fe */ __asm { MOV R11,qword ptr [RBP + 0x58] }
    /* +0xab2a02 */ __asm { MOV EAX,R11D }
    /* +0xab2a05 */ __asm { OR EAX,0x1 }
    /* +0xab2a08 */ __asm { IMUL R9D,EAX }
    /* +0xab2a0c */ __asm { MOV R10D,0x3a647d02 }
    /* +0xab2a12 */ __asm { IMUL R10D,EAX }
    /* +0xab2a16 */ __asm { SUB R10D,R8D }
    /* +0xab2a19 */ __asm { ADD R10D,0xf19dbe01 }
    /* +0xab2a20 */ __asm { XOR EAX,EAX }
    /* +0xab2a22 */ __asm { XOR R11D,R11D }
    /* +0xab2a25 */ __asm { CMP R9,R10 }
    /* +0xab2a28 */ __asm { SETGE AL }
    /* +0xab2a2b */ __asm { SETC R11B }
    /* +0xab2a2f */ __asm { CMP RCX,0x457539ba }
    /* +0xab2a36 */ __asm { CMOVZ R11D,EAX }
    /* +0xab2a3a */ __asm { TEST R11B,R11B }
    /* +0xab2a3d */ __asm { JZ 0x7fffa522310c }
    /* +0xab2a43 */ __asm { MOV AX,0x843b }
    /* +0xab2a47 */ __asm { XOR EAX,dword ptr [RBP + 0x130] }
    /* +0xab2a4d */ __asm { MOV R9D,0xffffdea8 }
    /* +0xab2a53 */ __asm { SUB R9D,EAX }
    /* +0xab2a56 */ __asm { MOV EAX,0xb96c8a00 }
    /* +0xab2a5b */ __asm { MOVD XMM5,EAX }
    /* +0xab2a5f */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab2a66 */ __asm { NOP }
    /* +0xab2a68 */ __asm { MOV R8,0x0 }
    /* +0xab2a6f */ __asm { MOVDQA XMM1,xmmword ptr [RBP + 0x10] }
    /* +0xab2a74 */ __asm { PADDD XMM1,XMM5 }
    /* +0xab2a78 */ __asm { MOVD EAX,XMM1 }
    /* +0xab2a7c */ __asm { IMUL EAX,dword ptr [RBP + 0x12c] }
    /* +0xab2a83 */ __asm { ROL EAX,0x8 }
    /* +0xab2a86 */ __asm { XOR EAX,0x246613d2 }
    /* +0xab2a8b */ __asm { MOVSXD R14,EAX }
    /* +0xab2a8e */ __asm { MOVSX R9,R9W }
    /* +0xab2a92 */ __asm { MOV R8,RDX }
    /* +0xab2a95 */ __asm { ADD R8,R9 }
    /* +0xab2a98 */ __asm { MOVZX R10D,uint8_t ptr [R9 + RDX*0x1 + 0xe] }
    /* +0xab2a9e */ __asm { JMP 0x7fffa5223168 }
    /* +0xab2aa3 */ __asm { CMP R9D,0x1 }
    /* +0xab2aa7 */ __asm { JZ 0x7fffa5222eca }
    /* +0xab2aad */ __asm { MOV R8D,0x49d811b3 }
    /* +0xab2ab3 */ __asm { MOV R9,0x14cb93649980410d }
    /* +0xab2abd */ __asm { CMP R8,R9 }
    /* +0xab2ac0 */ __asm { NOP }
    /* +0xab2ac1 */ __asm { NOP }
    /* +0xab2ac2 */ __asm { NOP }
    /* +0xab2ac3 */ __asm { NOP }
    /* +0xab2ac4 */ __asm { NOP }
    /* +0xab2ac5 */ __asm { MOV EAX,dword ptr [R8 + 0x3625f08d] }
    /* +0xab2acc */ __asm { MOV R9W,0xa067 }
    /* +0xab2ad1 */ __asm { ADD R9D,0x5f98 }
    /* +0xab2ad8 */ __asm { MOV RCX,qword ptr [RBP + 0x58] }
    /* +0xab2adc */ __asm { ROR R9W,CL }
    /* +0xab2ae0 */ __asm { AND EAX,0x1 }
    /* +0xab2ae3 */ __asm { NOT R9D }
    /* +0xab2ae6 */ __asm { MOVZX ECX,R9W }
    /* +0xab2aea */ __asm { CMP EAX,ECX }
    /* +0xab2aec */ __asm { JNZ 0x7fffa52233a6 }
    /* +0xab2af2 */ __asm { PXOR XMM5,XMM5 }
    /* +0xab2af6 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab2afe */ __asm { MOV dword ptr [RBP + 0x20],0xd37731db }
    /* +0xab2b05 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab2b08 */ __asm { TEST EAX,EAX }
    /* +0xab2b0a */ __asm { NOP }
    /* +0xab2b0b */ __asm { NOP }
    /* +0xab2b0c */ __asm { NOP }
    /* +0xab2b0d */ __asm { NOP }
    /* +0xab2b0e */ __asm { NOP }
    /* +0xab2b0f */ __asm { NOP }
    /* +0xab2b10 */ __asm { NOP }
    /* +0xab2b11 */ __asm { NOP }
    /* +0xab2b12 */ __asm { NOP }
    /* +0xab2b13 */ __asm { NOP }
    /* +0xab2b14 */ __asm { NOP }
    /* +0xab2b15 */ __asm { PUSHFQ }
    /* +0xab2b16 */ __asm { POP R11 }
    /* +0xab2b18 */ __asm { MOV EAX,0x4a167d63 }
    /* +0xab2b1d */ __asm { AND R11D,0x100 }
    /* +0xab2b24 */ __asm { IMUL EAX,dword ptr [RBP + 0xd0] }
    /* +0xab2b2b */ __asm { XOR EAX,0xd15613d6 }
    /* +0xab2b30 */ __asm { MOVD XMM5,EAX }
    /* +0xab2b34 */ __asm { MOVD XMM1,dword ptr [RBP + 0x60] }
    /* +0xab2b39 */ __asm { PSUBD XMM5,XMM1 }
    /* +0xab2b3d */ __asm { MOVD EAX,XMM5 }
    /* +0xab2b41 */ __asm { ADD EAX,0x262bcdab }
    /* +0xab2b46 */ __asm { CMP R11D,EAX }
    /* +0xab2b49 */ __asm { NOP }
    /* +0xab2b4a */ __asm { NOP }
    /* +0xab2b4b */ __asm { NOP }
    /* +0xab2b4c */ __asm { NOP }
    /* +0xab2b4d */ __asm { NOP }
    /* +0xab2b4e */ __asm { MOV R9D,0x443cb636 }
    /* +0xab2b54 */ __asm { MOV R11,qword ptr [RBP + 0x58] }
    /* +0xab2b58 */ __asm { MOV EAX,R11D }
    /* +0xab2b5b */ __asm { OR EAX,0x1 }
    /* +0xab2b5e */ __asm { IMUL R9D,EAX }
    /* +0xab2b62 */ __asm { XOR R9D,0x67ea3584 }
    /* +0xab2b69 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab2b70 */ __asm { ROL R9D,CL }
    /* +0xab2b73 */ __asm { NOP }
    /* +0xab2b75 */ __asm { MOV R8,0x0 }
    /* +0xab2b7c */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab2b83 */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xab2b8d */ __asm { XOR R9D,0x3963509a }
    /* +0xab2b94 */ __asm { MOV R9,qword ptr [R9] }
    /* +0xab2b97 */ __asm { MOV R8,-0x7cfd8e07d51936f9 }
    /* +0xab2ba1 */ __asm { ADD R8,R9 }
    /* +0xab2ba4 */ __asm { MOV R9,-0x1554339cbd4b0a69 }
    /* +0xab2bae */ __asm { CMP R8,R9 }
    /* +0xab2bb1 */ __asm { JZ 0x7fffa52239a3 }
    /* +0xab2bb7 */ __asm { MOV dword ptr [RBP + 0x20],0xff7f7e97 }
    /* +0xab2bbe */ __asm { MOV ECX,dword ptr [RBP + 0x20] }
    /* +0xab2bc1 */ __asm { CMP ECX,0xb44385bc }
    /* +0xab2bc7 */ __asm { NOP }
    /* +0xab2bc8 */ __asm { NOP }
    /* +0xab2bc9 */ __asm { NOP }
    /* +0xab2bca */ __asm { NOP }
    /* +0xab2bcb */ __asm { NOP }
    /* +0xab2bcc */ __asm { NOP }
    /* +0xab2bcd */ __asm { NOP }
    /* +0xab2bce */ __asm { NOP }
    /* +0xab2bcf */ __asm { NOP }
    /* +0xab2bd0 */ __asm { LEA R8,[0x7fffa4781746] }
    /* +0xab2bd7 */ __asm { MOV R9,-0x1823375ac9b57714 }
    /* +0xab2be1 */ __asm { CMP R8,R9 }
    /* +0xab2be4 */ __asm { JZ 0x7fffa52239c8 }
    /* +0xab2bea */ __asm { MOV R9D,0x4109a47b }
    /* +0xab2bf0 */ __asm { IMUL R9D,EAX }
    /* +0xab2bf4 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab2bfb */ __asm { ROR R9D,CL }
    /* +0xab2bfe */ __asm { MOVD XMM5,dword ptr [RBP + 0x58] }
    /* +0xab2c03 */ __asm { ROL R9D,0x8 }
    /* +0xab2c07 */ __asm { ADD R9D,0x3bc1a8d4 }
    /* +0xab2c0e */ __asm { MOVSXD R10,R9D }
    /* +0xab2c11 */ __asm { MOV AX,0xdf7a }
    /* +0xab2c15 */ __asm { MOVD XMM1,EAX }
    /* +0xab2c19 */ __asm { PSUBW XMM1,XMM5 }
    /* +0xab2c1d */ __asm { MOV EDX,ECX }
    /* +0xab2c1f */ __asm { OR EDX,0x1 }
    /* +0xab2c22 */ __asm { MOV qword ptr [RBP + 0x20],R11 }
    /* +0xab2c26 */ __asm { MOV EAX,dword ptr [R8 + 0x3746] }
    /* +0xab2c2d */ __asm { MOVD R9D,XMM1 }
    /* +0xab2c32 */ __asm { IMUL R9D,EDX }
    /* +0xab2c36 */ __asm { ROL R9W,0x7 }
    /* +0xab2c3b */ __asm { IMUL R9D,R9D,0x1a1b }
    /* +0xab2c42 */ __asm { MOVZX EDX,R9W }
    /* +0xab2c46 */ __asm { LEA RDI,[0x7fffa47810c0] }
    /* +0xab2c4d */ __asm { MOV R9W,0x9986 }
    /* +0xab2c52 */ __asm { SUB R9D,ECX }
    /* +0xab2c55 */ __asm { XOR R9D,0x2b6 }
    /* +0xab2c5c */ __asm { MOVZX R9D,R9W }
    /* +0xab2c60 */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0xab2c67 */ __asm { SYSCALL }
    /* +0xab2c69 */ __asm { MOV R9,-0x4183f9ae46c65c6b }
    /* +0xab2c73 */ __asm { CMP RDI,R9 }
    /* +0xab2c76 */ __asm { NOP }
    /* +0xab2c77 */ __asm { NOP }
    /* +0xab2c78 */ __asm { NOP }
    /* +0xab2c79 */ __asm { NOP }
    /* +0xab2c7a */ __asm { NOP }
    /* +0xab2c7b */ __asm { MOV AX,0xe401 }
    /* +0xab2c7f */ __asm { ADD EAX,0x1bff }
    /* +0xab2c84 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab2c8b */ __asm { ROL AX,CL }
    /* +0xab2c8e */ __asm { NOT EAX }
    /* +0xab2c90 */ __asm { MOV RCX,qword ptr [RBP + 0x60] }
    /* +0xab2c94 */ __asm { ROL AX,CL }
    /* +0xab2c97 */ __asm { MOVSX R10,AX }
    /* +0xab2c9b */ __asm { MOV qword ptr [RBP + 0xe0],R8 }
    /* +0xab2ca2 */ __asm { MOV EAX,dword ptr [RDI + 0x35c4] }
    /* +0xab2ca8 */ __asm { JMP 0x7fffa522394e }
    /* +0xab2cad */ __asm { MOV R8D,0xa89b33b2 }
    /* +0xab2cb3 */ __asm { MOV R9,-0x2f3b3f35cc3815ed }
    /* +0xab2cbd */ __asm { CMP R8,R9 }
    /* +0xab2cc0 */ __asm { JZ 0x7fffa52239cf }
    /* +0xab2cc6 */ __asm { MOV EAX,0xb21b92f3 }
    /* +0xab2ccb */ __asm { MOV ECX,0x1ffb0c0e }
    /* +0xab2cd0 */ __asm { MOV R9D,0x8b5d71b5 }
    /* +0xab2cd6 */ __asm { SUB R9D,ECX }
    /* +0xab2cd9 */ __asm { MOV RCX,qword ptr [RBP + 0x60] }
    /* +0xab2cdd */ __asm { XOR R9D,ECX }
    /* +0xab2ce0 */ __asm { ROL R9D,0x1e }
    /* +0xab2ce4 */ __asm { XOR EAX,0xf66b4a3d }
    /* +0xab2ce9 */ __asm { ADD EAX,ECX }
    /* +0xab2ceb */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab2cf2 */ __asm { ROL EAX,CL }
    /* +0xab2cf4 */ __asm { MOVSXD R11,EAX }
    /* +0xab2cf7 */ __asm { ADD R11,R8 }
    /* +0xab2cfa */ __asm { MOV EAX,0x38e644fe }
    /* +0xab2cff */ __asm { XOR EAX,ECX }
    /* +0xab2d01 */ __asm { IMUL ECX,EAX,0x190cc86f }
    /* +0xab2d07 */ __asm { NOT ECX }
    /* +0xab2d09 */ __asm { IMUL R10,R8,-0x289d33b2 }
    /* +0xab2d10 */ __asm { CMP R9,RCX }
    /* +0xab2d13 */ __asm { CMOVGE R10,R11 }
    /* +0xab2d17 */ __asm { TEST uint8_t ptr [R10 + 0x240],0x1 }
    /* +0xab2d1f */ __asm { JZ 0x7fffa52234ed }
    /* +0xab2d25 */ __asm { PUSHFQ }
    /* +0xab2d26 */ __asm { POP R11 }
    /* +0xab2d28 */ __asm { AND R11D,0x100 }
    /* +0xab2d2f */ __asm { MOV AX,0x1f47 }
    /* +0xab2d33 */ __asm { PXOR XMM5,XMM5 }
    /* +0xab2d37 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab2d3f */ __asm { MOV R9,qword ptr [RBP + 0x58] }
    /* +0xab2d43 */ __asm { MOV ECX,R9D }
    /* +0xab2d46 */ __asm { SUB ECX,EAX }
    /* +0xab2d48 */ __asm { ADD ECX,0x3272 }
    /* +0xab2d4e */ __asm { MOVZX EAX,CX }
    /* +0xab2d51 */ __asm { CMP R11D,EAX }
    /* +0xab2d54 */ __asm { NOP }
    /* +0xab2d55 */ __asm { NOP }
    /* +0xab2d56 */ __asm { NOP }
    /* +0xab2d57 */ __asm { NOP }
    /* +0xab2d58 */ __asm { NOP }
    /* +0xab2d59 */ __asm { MOV dword ptr [RBP + 0x20],0x437fd0dc }
    /* +0xab2d60 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab2d63 */ __asm { TEST EAX,EAX }
    /* +0xab2d65 */ __asm { NOP }
    /* +0xab2d66 */ __asm { NOP }
    /* +0xab2d67 */ __asm { NOP }
    /* +0xab2d68 */ __asm { NOP }
    /* +0xab2d69 */ __asm { NOP }
    /* +0xab2d6a */ __asm { NOP }
    /* +0xab2d6b */ __asm { NOP }
    /* +0xab2d6c */ __asm { NOP }
    /* +0xab2d6d */ __asm { NOP }
    /* +0xab2d6e */ __asm { NOP }
    /* +0xab2d6f */ __asm { NOP }
    /* +0xab2d70 */ __asm { NOP }
    /* +0xab2d71 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab2d78 */ __asm { MOV R9,qword ptr [RBP + 0x60] }
    /* +0xab2d7c */ __asm { ADD R9D,ECX }
    /* +0xab2d7f */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xab2d89 */ __asm { MOV R10D,0x355a29f9 }
    /* +0xab2d8f */ __asm { LEA EAX,[R10 + R9*0x1 + -0x102] }
    /* +0xab2d97 */ __asm { MOV dword ptr [RBP + 0x20],EAX }
    /* +0xab2d9a */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab2d9d */ __asm { MOV R9D,0x3e2d51bd }
    /* +0xab2da3 */ __asm { IMUL R9D,R9D,-0xd19cc91 }
    /* +0xab2daa */ __asm { ROR R9D,CL }
    /* +0xab2dad */ __asm { ROL R9D,0x9 }
    /* +0xab2db1 */ __asm { ADD R9D,EAX }
    /* +0xab2db4 */ __asm { JNC 0x7fffa52239de }
    /* +0xab2dba */ __asm { MOV EAX,0x686bd3bc }
    /* +0xab2dbf */ __asm { ADD EAX,dword ptr [RBP + 0x130] }
    /* +0xab2dc5 */ __asm { XOR EAX,dword ptr [RBP + 0x60] }
    /* +0xab2dc8 */ __asm { NOT EAX }
    /* +0xab2dca */ __asm { MOV dword ptr [RBP + 0x20],EAX }
    /* +0xab2dcd */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab2dd0 */ __asm { TEST AL,0x1 }
    /* +0xab2dd2 */ __asm { JZ 0x7fffa52239e6 }
    /* +0xab2dd8 */ __asm { MOV R9,qword ptr [RBP + 0x60] }
    /* +0xab2ddc */ __asm { OR R9,0x1 }
    /* +0xab2de0 */ __asm { MOV R11,0x30340935091e5f1a }
    /* +0xab2dea */ __asm { XOR R11,-0x1aefd58d }
    /* +0xab2df1 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab2df8 */ __asm { ROR R11,CL }
    /* +0xab2dfb */ __asm { IMUL R11,R9 }
    /* +0xab2dff */ __asm { LEA R8,[0x7fffa4789471] }
    /* +0xab2e06 */ __asm { CMP R8,R11 }
    /* +0xab2e09 */ __asm { JZ 0x7fffa52239ee }
    /* +0xab2e0f */ __asm { MOV AX,0xe297 }
    /* +0xab2e13 */ __asm { MOV R14,qword ptr [RBP + 0x60] }
    /* +0xab2e17 */ __asm { MOVD XMM5,R14D }
    /* +0xab2e1c */ __asm { MOV R9W,0x7577 }
    /* +0xab2e21 */ __asm { ADD R9D,R14D }
    /* +0xab2e24 */ __asm { LEA RDI,[0x7fffa47b9d13] }
    /* +0xab2e2b */ __asm { MOV R10W,0x999f }
    /* +0xab2e30 */ __asm { MOV R11D,0x6dab6480 }
    /* +0xab2e36 */ __asm { ADD R11D,R14D }
    /* +0xab2e39 */ __asm { ROL R11D,0x17 }
    /* +0xab2e3d */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab2e44 */ __asm { ROR R11D,CL }
    /* +0xab2e47 */ __asm { NOT R9D }
    /* +0xab2e4a */ __asm { NOT R11D }
    /* +0xab2e4d */ __asm { MOVSXD R11,R11D }
    /* +0xab2e50 */ __asm { SUB R9D,ECX }
    /* +0xab2e53 */ __asm { MOVZX EDX,R9W }
    /* +0xab2e57 */ __asm { MOVD XMM1,R10D }
    /* +0xab2e5c */ __asm { PSUBW XMM5,XMM1 }
    /* +0xab2e60 */ __asm { SUB EAX,R14D }
    /* +0xab2e63 */ __asm { ROR AX,CL }
    /* +0xab2e66 */ __asm { MOVD ECX,XMM5 }
    /* +0xab2e6a */ __asm { ADD EAX,0x10f9 }
    /* +0xab2e6f */ __asm { MOVZX R9D,AX }
    /* +0xab2e73 */ __asm { ADD ECX,0xffffa61e }
    /* +0xab2e79 */ __asm { MOVSX R10,CX }
    /* +0xab2e7d */ __asm { MOV qword ptr [RBP + 0x20],RCX }
    /* +0xab2e81 */ __asm { MOV EAX,dword ptr [R8 + R11*0x1 + 0x58] }
    /* +0xab2e86 */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0xab2e8d */ __asm { SYSCALL }
    /* +0xab2e8f */ __asm { MOV R9,0x2751d4fe747b7944 }
    /* +0xab2e99 */ __asm { CMP RDI,R9 }
    /* +0xab2e9c */ __asm { NOP }
    /* +0xab2e9d */ __asm { NOP }
    /* +0xab2e9e */ __asm { NOP }
    /* +0xab2e9f */ __asm { NOP }
    /* +0xab2ea0 */ __asm { NOP }
    /* +0xab2ea1 */ __asm { MOV qword ptr [RBP + 0xe0],R8 }
    /* +0xab2ea8 */ __asm { MOV AX,0x9b6a }
    /* +0xab2eac */ __asm { MOV RCX,qword ptr [RBP + 0x58] }
    /* +0xab2eb0 */ __asm { XOR ECX,EAX }
    /* +0xab2eb2 */ __asm { MOV R9D,0x77be }
    /* +0xab2eb8 */ __asm { SUB R9D,ECX }
    /* +0xab2ebb */ __asm { MOVSX R10,R9W }
    /* +0xab2ebf */ __asm { MOV EAX,dword ptr [RDI + 0x27f5] }
    /* +0xab2ec5 */ __asm { JMP 0x7fffa522394e }
    /* +0xab2eca */ __asm { MOV R9,qword ptr [RBP + 0x130] }
    /* +0xab2ed1 */ __asm { OR R9,0x1 }
    /* +0xab2ed5 */ __asm { MOV R8D,0xf854da7 }
    /* +0xab2edb */ __asm { MOV R11,0x524cdbba608e7be9 }
    /* +0xab2ee5 */ __asm { IMUL R11,R9 }
    /* +0xab2ee9 */ __asm { ROL R11,0x18 }
    /* +0xab2eed */ __asm { ADD R11,qword ptr [RBP + 0x60] }
    /* +0xab2ef1 */ __asm { CMP R8,R11 }
    /* +0xab2ef4 */ __asm { JZ 0x7fffa52239fd }
    /* +0xab2efa */ __asm { MOV R9,qword ptr [R8 + 0x7078b261] }
    /* +0xab2f01 */ __asm { MOV R11,-0x11f1fbad326d30dd }
    /* +0xab2f0b */ __asm { MOV RAX,R9 }
    /* +0xab2f0e */ __asm { MUL R11 }
    /* +0xab2f11 */ __asm { MOV R11,RDX }
    /* +0xab2f14 */ __asm { MOV R10D,0x1475ef6 }
    /* +0xab2f1a */ __asm { MOV RAX,R9 }
    /* +0xab2f1d */ __asm { MUL R10 }
    /* +0xab2f20 */ __asm { ADD RAX,R11 }
    /* +0xab2f23 */ __asm { ADC RDX,0x0 }
    /* +0xab2f27 */ __asm { TEST DL,0x1 }
    /* +0xab2f2a */ __asm { JZ 0x7fffa5223685 }
    /* +0xab2f30 */ __asm { MOV AX,0x582e }
    /* +0xab2f34 */ __asm { XOR EAX,dword ptr [RBP + 0x130] }
    /* +0xab2f3a */ __asm { NOT EAX }
    /* +0xab2f3c */ __asm { IMUL EAX,EAX,-0x744d }
    /* +0xab2f42 */ __asm { PXOR XMM5,XMM5 }
    /* +0xab2f46 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab2f4e */ __asm { XOR EAX,0x23 }
    /* +0xab2f51 */ __asm { MOVZX R9D,AX }
    /* +0xab2f55 */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0xab2f59 */ __asm { MOV R11,0x23e8d8cae1e38d9 }
    /* +0xab2f63 */ __asm { CMP qword ptr [R9 + 0x30],R11 }
    /* +0xab2f67 */ __asm { NOP }
    /* +0xab2f68 */ __asm { NOP }
    /* +0xab2f69 */ __asm { NOP }
    /* +0xab2f6a */ __asm { NOP }
    /* +0xab2f6b */ __asm { NOP }
    /* +0xab2f6c */ __asm { MOV R10,qword ptr [RBP + 0x130] }
    /* +0xab2f73 */ __asm { MOVD XMM5,R10D }
    /* +0xab2f78 */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xab2f82 */ __asm { MOV RDX,qword ptr [RBP + 0x58] }
    /* +0xab2f86 */ __asm { MOV EAX,EDX }
    /* +0xab2f88 */ __asm { OR EAX,0x1 }
    /* +0xab2f8b */ __asm { MOV CX,0xd128 }
    /* +0xab2f8f */ __asm { ADD ECX,0x2955 }
    /* +0xab2f95 */ __asm { IMUL ECX,EAX }
    /* +0xab2f98 */ __asm { ROL CX,0xe }
    /* +0xab2f9c */ __asm { MOVD XMM1,ECX }
    /* +0xab2fa0 */ __asm { PADDW XMM1,XMM5 }
    /* +0xab2fa4 */ __asm { PEXTRW R9D,XMM1,0x0 }
    /* +0xab2faa */ __asm { MOV R11,qword ptr GS:[R9] }
    /* +0xab2fae */ __asm { MOV R9D,R10D }
    /* +0xab2fb1 */ __asm { OR R9D,0x1 }
    /* +0xab2fb5 */ __asm { MOV AX,0xd5cb }
    /* +0xab2fb9 */ __asm { IMUL EAX,R9D }
    /* +0xab2fbd */ __asm { ROR AX,0x1 }
    /* +0xab2fc0 */ __asm { XOR EAX,EDX }
    /* +0xab2fc2 */ __asm { MOVZX ECX,AX }
    /* +0xab2fc5 */ __asm { MOV R11,qword ptr [R11 + 0x18] }
    /* +0xab2fc9 */ __asm { MOV R10,qword ptr GS:[RCX] }
    /* +0xab2fcd */ __asm { ADD R11,qword ptr [R10 + 0x18] }
    /* +0xab2fd1 */ __asm { MOV R10D,0x3ba574ee }
    /* +0xab2fd7 */ __asm { SUB R10,R11 }
    /* +0xab2fda */ __asm { MOV R11,0x9164afb64ae2a59 }
    /* +0xab2fe4 */ __asm { CMP R10,R11 }
    /* +0xab2fe7 */ __asm { JZ 0x7fffa52239b0 }
    /* +0xab2fed */ __asm { MOV AX,0x134a }
    /* +0xab2ff1 */ __asm { XOR EAX,dword ptr [RBP + 0x58] }
    /* +0xab2ff4 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab2ffb */ __asm { ROR AX,CL }
    /* +0xab2ffe */ __asm { NOT EAX }
    /* +0xab3000 */ __asm { MOVZX ECX,AX }
    /* +0xab3003 */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xab3007 */ __asm { MOV R10,-0x318b8f4d76b54a51 }
    /* +0xab3011 */ __asm { CMP qword ptr [R11 + 0x30],R10 }
    /* +0xab3015 */ __asm { JZ 0x7fffa52239b8 }
    /* +0xab301b */ __asm { LEA R8,[0x7fffa47b5e14] }
    /* +0xab3022 */ __asm { MOV R11,-0x57f2886857dac005 }
    /* +0xab302c */ __asm { NOT R11 }
    /* +0xab302f */ __asm { ADD R11,qword ptr [RBP + 0x130] }
    /* +0xab3036 */ __asm { SUB R11,qword ptr [RBP + 0x60] }
    /* +0xab303a */ __asm { CMP R8,R11 }
    /* +0xab303d */ __asm { NOP }
    /* +0xab303e */ __asm { NOP }
    /* +0xab303f */ __asm { NOP }
    /* +0xab3040 */ __asm { NOP }
    /* +0xab3041 */ __asm { NOP }
    /* +0xab3042 */ __asm { MOV R13,-0x1e62b69796d2f38b }
    /* +0xab304c */ __asm { MOV R14,qword ptr [RBP + 0x58] }
    /* +0xab3050 */ __asm { MOVD XMM5,R14D }
    /* +0xab3055 */ __asm { MOV R11W,0xbaef }
    /* +0xab305a */ __asm { MOV R10W,0xe54b }
    /* +0xab305f */ __asm { ADD R10D,0x2e08 }
    /* +0xab3066 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab306d */ __asm { ROL R10W,CL }
    /* +0xab3071 */ __asm { MOV qword ptr [RBP + 0x20],RDX }
    /* +0xab3075 */ __asm { LEA RDI,[0x7fffa477ef02] }
    /* +0xab307c */ __asm { ADD R13,qword ptr [RBP + 0x60] }
    /* +0xab3080 */ __asm { MOV EAX,dword ptr [R8 + 0x71c4] }
    /* +0xab3087 */ __asm { ADD R10D,R14D }
    /* +0xab308a */ __asm { MOVZX EDX,R10W }
    /* +0xab308e */ __asm { IMUL R10D,R11D,0x3f0b }
    /* +0xab3095 */ __asm { SUB R10D,ECX }
    /* +0xab3098 */ __asm { NOT R13 }
    /* +0xab309b */ __asm { ROL R13,0x1 }
    /* +0xab309e */ __asm { ROL R10W,0x3 }
    /* +0xab30a3 */ __asm { MOV R11W,0xf317 }
    /* +0xab30a8 */ __asm { IMUL R9D,R11D }
    /* +0xab30ac */ __asm { MOV R11D,0x2147 }
    /* +0xab30b2 */ __asm { SUB R11D,R9D }
    /* +0xab30b5 */ __asm { MOVZX R9D,R11W }
    /* +0xab30b9 */ __asm { MOVD XMM1,R10D }
    /* +0xab30be */ __asm { PXOR XMM1,XMM5 }
    /* +0xab30c2 */ __asm { MOVD ECX,XMM1 }
    /* +0xab30c6 */ __asm { MOVSX R10,CX }
    /* +0xab30ca */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0xab30d1 */ __asm { SYSCALL }
    /* +0xab30d3 */ __asm { CMP RDI,R13 }
    /* +0xab30d6 */ __asm { NOP }
    /* +0xab30d7 */ __asm { NOP }
    /* +0xab30d8 */ __asm { NOP }
    /* +0xab30d9 */ __asm { NOP }
    /* +0xab30da */ __asm { NOP }
    /* +0xab30db */ __asm { MOV AX,0xe858 }
    /* +0xab30df */ __asm { ADD EAX,0x2427 }
    /* +0xab30e4 */ __asm { MOV R9,qword ptr [RBP + 0x60] }
    /* +0xab30e8 */ __asm { XOR R9D,EAX }
    /* +0xab30eb */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab30f2 */ __asm { ROR R9W,CL }
    /* +0xab30f6 */ __asm { MOV qword ptr [RBP + 0xe0],R8 }
    /* +0xab30fd */ __asm { MOVSX R10,R9W }
    /* +0xab3101 */ __asm { MOV EAX,dword ptr [RDI + 0x5eb6] }
    /* +0xab3107 */ __asm { JMP 0x7fffa522394e }
    /* +0xab310c */ __asm { MOV R14D,0x5ec07bbe }
    /* +0xab3112 */ __asm { SUB R14D,dword ptr [RBP + 0x130] }
    /* +0xab3119 */ __asm { MOV RCX,qword ptr [RBP + 0x58] }
    /* +0xab311d */ __asm { ROR R14D,CL }
    /* +0xab3120 */ __asm { ADD R14D,0x1516500f }
    /* +0xab3127 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab312e */ __asm { NOP }
    /* +0xab3130 */ __asm { MOV R8,0x0 }
}


// ============================================================================
// Function : Unwind@7fffa5223a60  |  RVA: 0xab3a60  |  Size: 2656 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa5223a60(void) {
    /* +0xab3a60 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xab3a65 */ __asm { PUSH RBP }
    /* +0xab3a66 */ __asm { PUSH R12 }
    /* +0xab3a68 */ __asm { PUSH R13 }
    /* +0xab3a6a */ __asm { PUSH R14 }
    /* +0xab3a6c */ __asm { PUSH RSI }
    /* +0xab3a6d */ __asm { PUSH RDI }
    /* +0xab3a6e */ __asm { PUSH RBX }
    /* +0xab3a6f */ __asm { PUSH R15 }
    /* +0xab3a71 */ __asm { SUB RSP,0xc8 }
    /* +0xab3a78 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xab3a7f */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM15 }
    /* +0xab3a86 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM9 }
    /* +0xab3a8d */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0xab3a93 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0xab3a9d */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM8 }
    /* +0xab3aa7 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0xab3ab1 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM10 }
    /* +0xab3abb */ __asm { MOV RBX,qword ptr [RBP + 0x110] }
    /* +0xab3ac2 */ __asm { RDTSC }
    /* +0xab3ac4 */ __asm { SHL RDX,0x20 }
    /* +0xab3ac8 */ __asm { OR RDX,RAX }
    /* +0xab3acb */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0xab3ad5 */ __asm { IMUL RCX,RDX }
    /* +0xab3ad9 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xab3ae3 */ __asm { ADD RCX,R9 }
    /* +0xab3ae6 */ __asm { MOV R10,RCX }
    /* +0xab3ae9 */ __asm { SHR R10,0x1b }
    /* +0xab3aed */ __asm { MOV R9,RCX }
    /* +0xab3af0 */ __asm { SHR R9,0x2d }
    /* +0xab3af4 */ __asm { XOR R9D,R10D }
    /* +0xab3af7 */ __asm { SHR RCX,0x3b }
    /* +0xab3afb */ __asm { ROR R9D,CL }
    /* +0xab3afe */ __asm { AND R9D,0x3 }
    /* +0xab3b02 */ __asm { CMP R9D,0x2 }
    /* +0xab3b06 */ __asm { JC 0x7fffa5223b98 }
    /* +0xab3b0c */ __asm { MOV AX,0xcb32 }
    /* +0xab3b10 */ __asm { ADD EAX,0x34ca }
    /* +0xab3b15 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab3b1c */ __asm { ROL AX,CL }
    /* +0xab3b1f */ __asm { NOT EAX }
    /* +0xab3b21 */ __asm { MOVZX EAX,AX }
    /* +0xab3b24 */ __asm { CMP R9D,EAX }
    /* +0xab3b27 */ __asm { JC 0x7fffa5223d13 }
    /* +0xab3b2d */ __asm { MOV EAX,0xc6687eb9 }
    /* +0xab3b32 */ __asm { LEA R8,[0x7fffa47bdbe9] }
    /* +0xab3b39 */ __asm { MOVQ XMM5,R8 }
    /* +0xab3b3e */ __asm { IMUL EAX,EAX,0x3e535811 }
    /* +0xab3b44 */ __asm { MOV RCX,qword ptr [RBP + 0x130] }
    /* +0xab3b4b */ __asm { ROL EAX,CL }
    /* +0xab3b4d */ __asm { ADD EAX,0xba517c37 }
    /* +0xab3b52 */ __asm { XOR EAX,dword ptr [RBP + 0x60] }
    /* +0xab3b55 */ __asm { MOVD XMM1,EAX }
    /* +0xab3b59 */ __asm { PSUBQ XMM5,XMM1 }
    /* +0xab3b5d */ __asm { MOVQ R9,XMM5 }
    /* +0xab3b62 */ __asm { ROL R9,0x3b }
    /* +0xab3b66 */ __asm { MOV R11,0x5b2d3c03cdd5540d }
    /* +0xab3b70 */ __asm { IMUL R11,R9 }
    /* +0xab3b74 */ __asm { MOV R9,0x71740fd32c21ec46 }
    /* +0xab3b7e */ __asm { CMP R11,R9 }
    /* +0xab3b81 */ __asm { NOP }
    /* +0xab3b82 */ __asm { NOP }
    /* +0xab3b83 */ __asm { NOP }
    /* +0xab3b84 */ __asm { NOP }
    /* +0xab3b85 */ __asm { MOV qword ptr [RBP + 0xe0],R11 }
    /* +0xab3b8c */ __asm { MOV EAX,dword ptr [R8 + -0x16bd] }
    /* +0xab3b93 */ __asm { JMP 0x7fffa522457d }
    /* +0xab3b98 */ __asm { CMP R9D,0x1 }
    /* +0xab3b9c */ __asm { JZ 0x7fffa5224132 }
    /* +0xab3ba2 */ __asm { MOV R8D,0xbbb3169f }
    /* +0xab3ba8 */ __asm { MOV R9,-0x2b1498f5de0fc82d }
    /* +0xab3bb2 */ __asm { NOT R9 }
    /* +0xab3bb5 */ __asm { ADD R9,qword ptr [RBP + 0x130] }
    /* +0xab3bbc */ __asm { SUB R9,qword ptr [RBP + 0x60] }
    /* +0xab3bc0 */ __asm { ROL R9,0x35 }
    /* +0xab3bc4 */ __asm { CMP R8,R9 }
    /* +0xab3bc7 */ __asm { NOP }
    /* +0xab3bc8 */ __asm { NOP }
    /* +0xab3bc9 */ __asm { NOP }
    /* +0xab3bca */ __asm { MOV EAX,0x1bda28ad }
    /* +0xab3bcf */ __asm { MOV R9,qword ptr [RBP + 0x130] }
    /* +0xab3bd6 */ __asm { LEA ECX,[R9 + -0x650a6f71] }
    /* +0xab3bdd */ __asm { MOVD XMM5,ECX }
    /* +0xab3be1 */ __asm { MOVD XMM1,dword ptr [RBP + 0x60] }
    /* +0xab3be6 */ __asm { PSUBD XMM5,XMM1 }
    /* +0xab3bea */ __asm { MOVD R9D,XMM5 }
    /* +0xab3bef */ __asm { ADD R9D,EAX }
    /* +0xab3bf2 */ __asm { CMP R9,0x193968b4 }
    /* +0xab3bf9 */ __asm { JZ 0x7fffa5224395 }
    /* +0xab3bff */ __asm { MOV R9D,dword ptr [R8 + -0x3bb513db] }
    /* +0xab3c06 */ __asm { MOV R11,0x5555555555555556 }
    /* +0xab3c10 */ __asm { IMUL R11,R9 }
    /* +0xab3c14 */ __asm { MOV R9,0x5555555555555555 }
    /* +0xab3c1e */ __asm { CMP R11,R9 }
    /* +0xab3c21 */ __asm { JA 0x7fffa5224395 }
    /* +0xab3c27 */ __asm { MOV RDX,qword ptr [RBP + 0x130] }
    /* +0xab3c2e */ __asm { MOV R9,RDX }
    /* +0xab3c31 */ __asm { OR R9,0x1 }
    /* +0xab3c35 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab3c3c */ __asm { NOP }
    /* +0xab3c3e */ __asm { MOV R8,0x0 }
    /* +0xab3c45 */ __asm { MOV R10,-0x6d305806a2e79ec0 }
    /* +0xab3c4f */ __asm { LEA R8,[0x7fffa47be436] }
    /* +0xab3c56 */ __asm { MOV RAX,qword ptr [RBP + 0x60] }
    /* +0xab3c5a */ __asm { MOV RCX,RAX }
    /* +0xab3c5d */ __asm { OR RCX,0x1 }
    /* +0xab3c61 */ __asm { MOV R11,R8 }
    /* +0xab3c64 */ __asm { NOT R11 }
    /* +0xab3c67 */ __asm { MOVQ XMM5,R9 }
    /* +0xab3c6c */ __asm { ADD R10,RAX }
    /* +0xab3c6f */ __asm { MOVQ XMM1,R10 }
    /* +0xab3c74 */ __asm { MOV R9,-0x2638ad7729a72ac5 }
    /* +0xab3c7e */ __asm { IMUL R9,RCX }
    /* +0xab3c82 */ __asm { ROL R9,0x36 }
    /* +0xab3c86 */ __asm { SUB R9,RDX }
    /* +0xab3c89 */ __asm { MOVDQA XMM2,XMM5 }
    /* +0xab3c8d */ __asm { PSRLQ XMM2,0x20 }
    /* +0xab3c92 */ __asm { PMULUDQ XMM2,XMM1 }
    /* +0xab3c96 */ __asm { MOVDQA XMM3,XMM1 }
    /* +0xab3c9a */ __asm { PSRLQ XMM3,0x20 }
    /* +0xab3c9f */ __asm { PMULUDQ XMM3,XMM5 }
    /* +0xab3ca3 */ __asm { PADDQ XMM3,XMM2 }
    /* +0xab3ca7 */ __asm { PSLLQ XMM3,0x20 }
    /* +0xab3cac */ __asm { PMULUDQ XMM5,XMM1 }
    /* +0xab3cb0 */ __asm { PADDQ XMM5,XMM3 }
    /* +0xab3cb4 */ __asm { MOVQ R10,XMM5 }
    /* +0xab3cb9 */ __asm { ADD R10,-0x43b9f73f }
    /* +0xab3cc0 */ __asm { MOV EDX,0xac62276b }
    /* +0xab3cc5 */ __asm { IMUL RDX,R11 }
    /* +0xab3cc9 */ __asm { IMUL RDX,R10 }
    /* +0xab3ccd */ __asm { CMP R9,RDX }
    /* +0xab3cd0 */ __asm { NOP }
    /* +0xab3cd1 */ __asm { NOP }
    /* +0xab3cd2 */ __asm { NOP }
    /* +0xab3cd3 */ __asm { NOP }
    /* +0xab3cd4 */ __asm { NOP }
    /* +0xab3cd5 */ __asm { NOP }
    /* +0xab3cd6 */ __asm { NOP }
    /* +0xab3cd7 */ __asm { NOP }
    /* +0xab3cd8 */ __asm { NOP }
    /* +0xab3cd9 */ __asm { NOP }
    /* +0xab3cda */ __asm { NOP }
    /* +0xab3cdb */ __asm { NOP }
    /* +0xab3cdc */ __asm { NOP }
    /* +0xab3cdd */ __asm { NOP }
    /* +0xab3cde */ __asm { NOP }
    /* +0xab3cdf */ __asm { NOP }
    /* +0xab3ce0 */ __asm { NOP }
    /* +0xab3d13 */ __asm { LEA R8,[0x7fffa47c15ca] }
    /* +0xab3d1a */ __asm { MOV R9,-0xf642554a4658f38 }
    /* +0xab3d24 */ __asm { CMP R8,R9 }
    /* +0xab3d27 */ __asm { NOP }
    /* +0xab3d28 */ __asm { NOP }
    /* +0xab3d29 */ __asm { NOP }
    /* +0xab3d2a */ __asm { NOP }
    /* +0xab3d2b */ __asm { NOP }
    /* +0xab3d2c */ __asm { NOP }
    /* +0xab3d2d */ __asm { NOP }
    /* +0xab3d2e */ __asm { NOP }
    /* +0xab3d2f */ __asm { NOP }
    /* +0xab3d30 */ __asm { MOV R9D,0x338e157e }
    /* +0xab3d36 */ __asm { MOV R14,qword ptr [RBP + 0x130] }
    /* +0xab3d3d */ __asm { SUB R9D,R14D }
    /* +0xab3d40 */ __asm { MOV RCX,qword ptr [RBP + 0x60] }
    /* +0xab3d44 */ __asm { XOR R9D,ECX }
    /* +0xab3d47 */ __asm { ROL R9D,0x6 }
    /* +0xab3d4b */ __asm { ADD R9D,0xe8b239cb }
    /* +0xab3d52 */ __asm { MOV EAX,0x7058d84e }
    /* +0xab3d57 */ __asm { MOV R10D,0x396001f7 }
    /* +0xab3d5d */ __asm { SUB R10D,R14D }
    /* +0xab3d60 */ __asm { ROL R10D,0x12 }
    /* +0xab3d64 */ __asm { SUB R10D,ECX }
    /* +0xab3d67 */ __asm { ROL R10D,0x10 }
    /* +0xab3d6b */ __asm { IMUL EAX,EAX,0x2cf7f0a3 }
    /* +0xab3d71 */ __asm { MOV EDX,0x40b7990f }
    /* +0xab3d76 */ __asm { NOT EDX }
    /* +0xab3d78 */ __asm { ADD EDX,ECX }
    /* +0xab3d7a */ __asm { MOV ECX,R14D }
    /* +0xab3d7d */ __asm { ROR EDX,CL }
    /* +0xab3d7f */ __asm { XOR EAX,R14D }
    /* +0xab3d82 */ __asm { NOT EAX }
    /* +0xab3d84 */ __asm { MOV ECX,0xb5b5e583 }
    /* +0xab3d89 */ __asm { IMUL ECX,dword ptr [RBP + 0x12c] }
    /* +0xab3d90 */ __asm { ROL ECX,0xf }
    /* +0xab3d93 */ __asm { MOVSXD R11,EAX }
    /* +0xab3d96 */ __asm { MOVQ XMM5,R11 }
    /* +0xab3d9b */ __asm { MOVQ XMM1,R8 }
    /* +0xab3da0 */ __asm { PADDQ XMM1,XMM5 }
    /* +0xab3da4 */ __asm { MOVQ R11,XMM1 }
    /* +0xab3da9 */ __asm { MOVZX R8D,uint8_t ptr [R11 + 0xe] }
    /* +0xab3dae */ __asm { MOVZX EAX,uint8_t ptr [R11 + R8*0x4 + 0x1e] }
    /* +0xab3db4 */ __asm { ROL AL,0x4 }
    /* +0xab3db7 */ __asm { MOV uint8_t ptr [RBP + 0xe0],AL }
    /* +0xab3dbd */ __asm { MOVZX EAX,uint8_t ptr [R11 + R8*0x4 + 0x1f] }
    /* +0xab3dc3 */ __asm { ROL AL,0x4 }
    /* +0xab3dc6 */ __asm { MOV uint8_t ptr [RBP + 0xe1],AL }
    /* +0xab3dcc */ __asm { MOVZX EAX,uint8_t ptr [R11 + R8*0x4 + 0x20] }
    /* +0xab3dd2 */ __asm { ROL AL,0x4 }
    /* +0xab3dd5 */ __asm { MOV uint8_t ptr [RBP + 0xe2],AL }
    /* +0xab3ddb */ __asm { MOVZX R8D,uint8_t ptr [R11 + R8*0x4 + 0x21] }
    /* +0xab3de1 */ __asm { ROL R8B,0x4 }
    /* +0xab3de5 */ __asm { MOV uint8_t ptr [RBP + 0xe3],R8B }
    /* +0xab3dec */ __asm { MOV EAX,0x65e8ce72 }
    /* +0xab3df1 */ __asm { XOR EAX,dword ptr [RBP + 0xe0] }
    /* +0xab3df7 */ __asm { NOT ECX }
    /* +0xab3df9 */ __asm { MOV ECX,dword ptr [RCX] }
    /* +0xab3dfb */ __asm { AND ECX,0x1f }
    /* +0xab3dfe */ __asm { MOV R11D,0x1 }
    /* +0xab3e04 */ __asm { SHL R11D,CL }
    /* +0xab3e07 */ __asm { MOV R8D,0x2c0e754c }
    /* +0xab3e0d */ __asm { NOT R8D }
    /* +0xab3e10 */ __asm { ADD R8D,R14D }
    /* +0xab3e13 */ __asm { ROL R8D,0x15 }
    /* +0xab3e17 */ __asm { NOT R8D }
    /* +0xab3e1a */ __asm { MOVSXD R8,R8D }
    /* +0xab3e1d */ __asm { CMP RDX,R8 }
    /* +0xab3e20 */ __asm { CMOVL R11D,ECX }
    /* +0xab3e24 */ __asm { MOV ECX,EAX }
    /* +0xab3e26 */ __asm { AND ECX,R11D }
    /* +0xab3e29 */ __asm { IMUL R11D,EAX }
    /* +0xab3e2d */ __asm { CMP R9,R10 }
    /* +0xab3e30 */ __asm { CMOVG R11D,ECX }
    /* +0xab3e34 */ __asm { TEST R11D,R11D }
    /* +0xab3e37 */ __asm { JZ 0x7fffa52244ab }
    /* +0xab3e3d */ __asm { MOV CX,0xba05 }
    /* +0xab3e41 */ __asm { RDTSC }
    /* +0xab3e43 */ __asm { SHL RDX,0x20 }
    /* +0xab3e47 */ __asm { OR RDX,RAX }
    /* +0xab3e4a */ __asm { ADD ECX,dword ptr [RBP + 0x60] }
    /* +0xab3e4d */ __asm { IMUL EAX,ECX,0x1e43 }
    /* +0xab3e53 */ __asm { NOT EAX }
    /* +0xab3e55 */ __asm { MOV R11,-0x83d143f70980d4b }
    /* +0xab3e5f */ __asm { IMUL R11,RDX }
    /* +0xab3e63 */ __asm { MOV R9,-0x7a0a03d1b8b28816 }
    /* +0xab3e6d */ __asm { ADD R9,R11 }
    /* +0xab3e70 */ __asm { MOV RCX,R9 }
    /* +0xab3e73 */ __asm { SHR RCX,0x3b }
    /* +0xab3e77 */ __asm { MOV R10,R9 }
    /* +0xab3e7a */ __asm { SHR R10,0x2d }
    /* +0xab3e7e */ __asm { SHR R9,0x1b }
    /* +0xab3e82 */ __asm { XOR R9D,R10D }
    /* +0xab3e85 */ __asm { ROR R9D,CL }
    /* +0xab3e88 */ __asm { MOVZX ECX,AX }
    /* +0xab3e8b */ __asm { MOV R11,qword ptr GS:[RCX] }
    /* +0xab3e8f */ __asm { MOV R11,qword ptr [R11 + 0x60] }
    /* +0xab3e93 */ __asm { MOV R8,-0x6d4a04125b46f92d }
    /* +0xab3e9d */ __asm { AND R8,R11 }
    /* +0xab3ea0 */ __asm { MOV R11,0x3bee9ed34a1aa47b }
    /* +0xab3eaa */ __asm { CMP R8,R11 }
    /* +0xab3ead */ __asm { JNZ 0x7fffa5223ecd }
    /* +0xab3eaf */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab3eb6 */ __asm { NOP }
    /* +0xab3eb8 */ __asm { MOV R8,0x0 }
    /* +0xab3ebf */ __asm { XOR AL,0xd5 }
    /* +0xab3ec1 */ __asm { ADD EAX,0x3030be18 }
    /* +0xab3ec6 */ __asm { MOV SIL,0xfb }
    /* +0xab3ec9 */ __asm { XOR EBX,EBX }
    /* +0xab3ecb */ __asm { JMP 0x7fffa5223e73 }
    /* +0xab3ecd */ __asm { CMP R9D,0x107e50a }
    /* +0xab3ed4 */ __asm { JA 0x7fffa5224118 }
    /* +0xab3eda */ __asm { MOV R8,0x0 }
    /* +0xab3ee1 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab3ee8 */ __asm { NOP }
    /* +0xab3eea */ __asm { PUSHFQ }
    /* +0xab3eeb */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xab3ef3 */ __asm { POPFQ }
    /* +0xab3ef4 */ __asm { MOV dword ptr [RBP + 0xe0],0x20920a1 }
    /* +0xab3efe */ __asm { MOV EAX,dword ptr [RBP + 0xe0] }
    /* +0xab3f04 */ __asm { TEST EAX,EAX }
    /* +0xab3f06 */ __asm { NOP }
    /* +0xab3f07 */ __asm { NOP }
    /* +0xab3f08 */ __asm { NOP }
    /* +0xab3f09 */ __asm { NOP }
    /* +0xab3f0a */ __asm { NOP }
    /* +0xab3f0b */ __asm { LEA R8,[0x7fffa47c43ac] }
    /* +0xab3f12 */ __asm { MOV R9,0x420615aa20a10d15 }
    /* +0xab3f1c */ __asm { SUB R9,qword ptr [RBP + 0x130] }
    /* +0xab3f23 */ __asm { ROL R9,0x27 }
    /* +0xab3f27 */ __asm { IMUL R9,R9,0x2eb9373f }
    /* +0xab3f2e */ __asm { MOV RCX,qword ptr [RBP + 0x60] }
    /* +0xab3f32 */ __asm { ROR R9,CL }
    /* +0xab3f35 */ __asm { IMUL R9,R8 }
    /* +0xab3f39 */ __asm { NOT R9 }
    /* +0xab3f3c */ __asm { MOV R11,0x198c606d97b8cee5 }
    /* +0xab3f46 */ __asm { IMUL R11,R9 }
    /* +0xab3f4a */ __asm { MOV R9,-0x61d85ab42413d00f }
    /* +0xab3f54 */ __asm { CMP R11,R9 }
    /* +0xab3f57 */ __asm { NOP }
    /* +0xab3f58 */ __asm { NOP }
    /* +0xab3f59 */ __asm { NOP }
    /* +0xab3f5a */ __asm { NOP }
    /* +0xab3f5b */ __asm { NOP }
    /* +0xab3f5c */ __asm { NOP }
    /* +0xab3f5d */ __asm { MOVZX R9D,uint8_t ptr [R8 + -0x7c63] }
    /* +0xab3f65 */ __asm { MOVZX R10D,uint8_t ptr [R8 + R9*0x4 + -0x7c5d] }
    /* +0xab3f6e */ __asm { NOT R10B }
    /* +0xab3f71 */ __asm { ROL R10B,0x5 }
    /* +0xab3f75 */ __asm { MOV uint8_t ptr [RBP + 0xe0],R10B }
    /* +0xab3f7c */ __asm { MOVZX R10D,uint8_t ptr [R8 + R9*0x4 + -0x7c5c] }
    /* +0xab3f85 */ __asm { NOT R10B }
    /* +0xab3f88 */ __asm { ROL R10B,0x5 }
    /* +0xab3f8c */ __asm { MOV uint8_t ptr [RBP + 0xe1],R10B }
    /* +0xab3f93 */ __asm { MOVZX R10D,uint8_t ptr [R8 + R9*0x4 + -0x7c5b] }
    /* +0xab3f9c */ __asm { NOT R10B }
    /* +0xab3f9f */ __asm { ROL R10B,0x5 }
    /* +0xab3fa3 */ __asm { MOV uint8_t ptr [RBP + 0xe2],R10B }
    /* +0xab3faa */ __asm { MOVZX R8D,uint8_t ptr [R8 + R9*0x4 + -0x7c5a] }
    /* +0xab3fb3 */ __asm { NOT R8B }
    /* +0xab3fb6 */ __asm { ROL R8B,0x5 }
    /* +0xab3fba */ __asm { MOV uint8_t ptr [RBP + 0xe3],R8B }
    /* +0xab3fc1 */ __asm { MOV EAX,0x9102c3cc }
    /* +0xab3fc6 */ __asm { XOR EAX,dword ptr [RBP + 0xe0] }
    /* +0xab3fcc */ __asm { BT EAX,EAX }
    /* +0xab3fcf */ __asm { JNC 0x7fffa5224118 }
    /* +0xab3fd5 */ __asm { PXOR XMM5,XMM5 }
    /* +0xab3fd9 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab3fe1 */ __asm { MOV AX,0xd381 }
    /* +0xab3fe5 */ __asm { SUB EAX,dword ptr [RBP + 0x130] }
    /* +0xab3feb */ __asm { MOV R9,qword ptr [RBP + 0x60] }
    /* +0xab3fef */ __asm { MOV ECX,R9D }
    /* +0xab3ff2 */ __asm { XOR ECX,EAX }
    /* +0xab3ff4 */ __asm { ROL CX,0x1 }
    /* +0xab3ff7 */ __asm { ADD ECX,0x621d }
    /* +0xab3ffd */ __asm { MOVZX R9D,CX }
    /* +0xab4001 */ __asm { MOV R9,qword ptr GS:[R9] }
    /* +0xab4005 */ __asm { MOV R9,qword ptr [R9 + 0x18] }
    /* +0xab4009 */ __asm { MOV R8,-0x554cea589407bf1 }
    /* +0xab4013 */ __asm { AND R8,R9 }
    /* +0xab4016 */ __asm { ROL R8,0x33 }
    /* +0xab401a */ __asm { MOV R9,-0x69b3b3c0292cbb77 }
    /* +0xab4024 */ __asm { IMUL R9,R8 }
    /* +0xab4028 */ __asm { MOV R11,-0x5c7b7d16726b954b }
    /* +0xab4032 */ __asm { CMP R9,R11 }
    /* +0xab4035 */ __asm { NOP }
    /* +0xab4036 */ __asm { NOP }
    /* +0xab4037 */ __asm { NOP }
    /* +0xab4038 */ __asm { NOP }
    /* +0xab4039 */ __asm { NOP }
    /* +0xab403a */ __asm { NOP }
    /* +0xab403b */ __asm { NOP }
    /* +0xab403c */ __asm { NOP }
    /* +0xab403d */ __asm { NOP }
    /* +0xab403e */ __asm { NOP }
    /* +0xab403f */ __asm { NOP }
    /* +0xab4040 */ __asm { NOP }
    /* +0xab4041 */ __asm { NOP }
    /* +0xab4042 */ __asm { NOP }
    /* +0xab4043 */ __asm { NOP }
    /* +0xab4044 */ __asm { NOP }
    /* +0xab4045 */ __asm { NOP }
    /* +0xab4118 */ __asm { LEA R8,[0x7fffa477c7ca] }
    /* +0xab411f */ __asm { MOV qword ptr [RBP + 0xe0],R11 }
    /* +0xab4126 */ __asm { MOV EAX,dword ptr [R8 + 0x7e66] }
    /* +0xab412d */ __asm { JMP 0x7fffa522457d }
    /* +0xab4132 */ __asm { MOV R8D,0x56938c57 }
    /* +0xab4138 */ __asm { MOV R9,-0x50ee14f66cb10e8d }
    /* +0xab4142 */ __asm { CMP R8,R9 }
    /* +0xab4145 */ __asm { JZ 0x7fffa5224528 }
    /* +0xab414b */ __asm { TEST uint8_t ptr [R8 + 0x296a75e9],0x1 }
    /* +0xab4153 */ __asm { JNZ 0x7fffa5224539 }
    /* +0xab4159 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab4160 */ __asm { MOV R8,0x0 }
    /* +0xab4167 */ __asm { NOP }
    /* +0xab4169 */ __asm { RDTSC }
    /* +0xab416b */ __asm { SHL RDX,0x20 }
    /* +0xab416f */ __asm { OR RDX,RAX }
    /* +0xab4172 */ __asm { MOV R9,-0x583f2dd720db9bdb }
    /* +0xab417c */ __asm { IMUL R9,RDX }
    /* +0xab4180 */ __asm { MOV R10,-0x159ea0051a7596ae }
    /* +0xab418a */ __asm { ADD R10,R9 }
    /* +0xab418d */ __asm { MOV RCX,R10 }
    /* +0xab4190 */ __asm { SHR RCX,0x3b }
    /* +0xab4194 */ __asm { MOV R9,R10 }
    /* +0xab4197 */ __asm { SHR R9,0x2d }
    /* +0xab419b */ __asm { SHR R10,0x1b }
    /* +0xab419f */ __asm { XOR R9D,R10D }
    /* +0xab41a2 */ __asm { ROR R9D,CL }
    /* +0xab41a5 */ __asm { MOV dword ptr [RBP + 0xe0],0xebebbf7f }
    /* +0xab41af */ __asm { MOV EAX,dword ptr [RBP + 0xe0] }
    /* +0xab41b5 */ __asm { CMP EAX,0x57820b16 }
    /* +0xab41ba */ __asm { NOP }
    /* +0xab41bb */ __asm { NOP }
    /* +0xab41bc */ __asm { NOP }
    /* +0xab41bd */ __asm { NOP }
    /* +0xab41be */ __asm { NOP }
    /* +0xab41bf */ __asm { CMP R9D,0x4052c1 }
    /* +0xab41c6 */ __asm { JA 0x7fffa5224354 }
    /* +0xab41cc */ __asm { MOV dword ptr [RBP + 0xe0],0x730e03bd }
    /* +0xab41d6 */ __asm { MOV EAX,dword ptr [RBP + 0xe0] }
    /* +0xab41dc */ __asm { LEA R8,[0x7fffa47b48dd] }
    /* +0xab41e3 */ __asm { MOV R9,0x3216e18a4e3d3e7c }
    /* +0xab41ed */ __asm { CMP R8,R9 }
    /* +0xab41f0 */ __asm { NOP }
    /* +0xab41f1 */ __asm { NOP }
    /* +0xab41f2 */ __asm { NOP }
    /* +0xab41f3 */ __asm { NOP }
    /* +0xab41f4 */ __asm { NOP }
    /* +0xab41f5 */ __asm { NOP }
    /* +0xab41f6 */ __asm { NOP }
    /* +0xab41f7 */ __asm { NOP }
    /* +0xab41f8 */ __asm { NOP }
    /* +0xab41f9 */ __asm { NOP }
    /* +0xab41fa */ __asm { NOP }
    /* +0xab41fb */ __asm { NOP }
    /* +0xab41fc */ __asm { NOP }
    /* +0xab41fd */ __asm { MOV R9D,0x3d4f8a0f }
    /* +0xab4203 */ __asm { ADD R9D,dword ptr [RBP + 0x130] }
    /* +0xab420a */ __asm { NOT R9D }
    /* +0xab420d */ __asm { ROL R9D,0x19 }
    /* +0xab4211 */ __asm { MOVZX R10D,uint8_t ptr [R8 + 0x7db0] }
    /* +0xab4219 */ __asm { MOVZX EAX,uint8_t ptr [R8 + R10*0x4 + 0x7dc0] }
    /* +0xab4222 */ __asm { ROL AL,0x4 }
    /* +0xab4225 */ __asm { MOV uint8_t ptr [RBP + 0xe0],AL }
    /* +0xab422b */ __asm { MOVZX EAX,uint8_t ptr [R8 + R10*0x4 + 0x7dc1] }
    /* +0xab4234 */ __asm { ROL AL,0x4 }
    /* +0xab4237 */ __asm { MOV uint8_t ptr [RBP + 0xe1],AL }
    /* +0xab423d */ __asm { MOVZX EAX,uint8_t ptr [R8 + R10*0x4 + 0x7dc2] }
    /* +0xab4246 */ __asm { ROL AL,0x4 }
    /* +0xab4249 */ __asm { MOV uint8_t ptr [RBP + 0xe2],AL }
    /* +0xab424f */ __asm { MOVZX R8D,uint8_t ptr [R8 + R10*0x4 + 0x7dc3] }
    /* +0xab4258 */ __asm { ROL R8B,0x4 }
    /* +0xab425c */ __asm { ADD R9D,0x5e55d856 }
    /* +0xab4263 */ __asm { MOV uint8_t ptr [RBP + 0xe3],R8B }
    /* +0xab426a */ __asm { MOV EAX,0x65e8ce72 }
    /* +0xab426f */ __asm { XOR EAX,dword ptr [RBP + 0xe0] }
    /* +0xab4275 */ __asm { MOV ECX,dword ptr [R9] }
    /* +0xab4278 */ __asm { BT EAX,ECX }
    /* +0xab427b */ __asm { JNC 0x7fffa5224354 }
    /* +0xab4281 */ __asm { PXOR XMM5,XMM5 }
    /* +0xab4285 */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM5 }
    /* +0xab428d */ __asm { MOV dword ptr [RBP + 0x20],0x6f09b95a }
    /* +0xab4294 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab4297 */ __asm { MOV dword ptr [RBP + 0xe0],0x0 }
    /* +0xab42a1 */ __asm { MOV dword ptr [RBP + 0x20],0x2d008819 }
    /* +0xab42a8 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab42ab */ __asm { MOV EAX,0xb15e8509 }
    /* +0xab42b0 */ __asm { SUB EAX,dword ptr [RBP + 0x130] }
    /* +0xab42b6 */ __asm { MOV RCX,qword ptr [RBP + 0x60] }
    /* +0xab42ba */ __asm { ROL EAX,CL }
    /* +0xab42bc */ __asm { ROL EAX,0x1 }
    /* +0xab42be */ __asm { MOV dword ptr [RBP + 0x20],EAX }
    /* +0xab42c1 */ __asm { MOV EAX,dword ptr [RBP + 0x20] }
    /* +0xab42c4 */ __asm { LEA R8,[0x7fffa47b8922] }
    /* +0xab42cb */ __asm { MOV R9,-0x4814885808923b44 }
    /* +0xab42d5 */ __asm { CMP R8,R9 }
    /* +0xab42d8 */ __asm { JZ 0x7fffa52245d2 }
    /* +0xab42de */ __asm { MOV R13,qword ptr [RBP + 0x60] }
    /* +0xab42e2 */ __asm { MOV ECX,R13D }
    /* +0xab42e5 */ __asm { MOV RDX,qword ptr [RBP + 0x130] }
    /* +0xab42ec */ __asm { SUB ECX,EDX }
    /* +0xab42ee */ __asm { MOV AX,0xd7c7 }
    /* +0xab42f2 */ __asm { ADD EAX,0x313a }
    /* +0xab42f7 */ __asm { MOV R9D,EDX }
    /* +0xab42fa */ __asm { OR R9D,0x1 }
    /* +0xab42fe */ __asm { MOV R11W,0xa35f }
    /* +0xab4303 */ __asm { ADD R11D,ECX }
    /* +0xab4306 */ __asm { ROL R11W,0xa }
    /* +0xab430b */ __asm { MOVSX R10,R11W }
    /* +0xab430f */ __asm { MOV CX,0x63c5 }
    /* +0xab4313 */ __asm { XOR ECX,0x4c99 }
    /* +0xab4319 */ __asm { MOV qword ptr [RBP + 0x20],R11 }
    /* +0xab431d */ __asm { MOV R11D,R13D }
    /* +0xab4320 */ __asm { OR R11D,0x1 }
    /* +0xab4324 */ __asm { IMUL ECX,R11D }
    /* +0xab4328 */ __asm { ADD ECX,0xffffa0b4 }
    /* +0xab432e */ __asm { IMUL ECX,R9D }
    /* +0xab4332 */ __asm { MOVZX R9D,CX }
    /* +0xab4336 */ __asm { XOR EAX,0x7209 }
    /* +0xab433b */ __asm { IMUL EAX,R11D }
    /* +0xab433f */ __asm { SUB EAX,EDX }
    /* +0xab4341 */ __asm { MOVZX EDX,AX }
    /* +0xab4344 */ __asm { MOV EAX,dword ptr [R8 + 0x46b6] }
    /* +0xab434b */ __asm { LEA R8,[RBP + 0xe0] }
    /* +0xab4352 */ __asm { SYSCALL }
    /* +0xab4354 */ __asm { LEA R8,[0x7fffa477ef9b] }
    /* +0xab435b */ __asm { MOV R9,0x4193b37466cfd0be }
    /* +0xab4365 */ __asm { CMP R8,R9 }
    /* +0xab4368 */ __asm { JZ 0x7fffa52245e3 }
    /* +0xab436e */ __asm { MOV AX,0x8ab3 }
    /* +0xab4372 */ __asm { SUB EAX,dword ptr [RBP + 0x130] }
    /* +0xab4378 */ __asm { MOV qword ptr [RBP + 0xe0],R11 }
    /* +0xab437f */ __asm { XOR EAX,0xffff917a }
    /* +0xab4384 */ __asm { ADD EAX,dword ptr [RBP + 0x60] }
    /* +0xab4387 */ __asm { MOVZX R9D,AX }
    /* +0xab438b */ __asm { MOV EAX,dword ptr [R8 + R9*0x1 + 0x6c] }
    /* +0xab4390 */ __asm { JMP 0x7fffa522457d }
    /* +0xab4395 */ __asm { MOV R8,0x0 }
    /* +0xab439c */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xab43a3 */ __asm { NOP }
    /* +0xab43a5 */ __asm { RDTSC }
    /* +0xab43a7 */ __asm { SHL RDX,0x20 }
    /* +0xab43ab */ __asm { OR RDX,RAX }
    /* +0xab43ae */ __asm { MOV R11,-0x583f2dd720db9bdb }
    /* +0xab43b8 */ __asm { IMUL R11,RDX }
    /* +0xab43bc */ __asm { MOV R9,-0x23f5567aaaddec5a }
    /* +0xab43c6 */ __asm { ADD R9,R11 }
    /* +0xab43c9 */ __asm { MOV R10,R9 }
    /* +0xab43cc */ __asm { SHR R10,0x1b }
    /* +0xab43d0 */ __asm { MOV RCX,R9 }
    /* +0xab43d3 */ __asm { SHR RCX,0x3b }
}


// ============================================================================
// Function : Unwind@7fffa5224600  |  RVA: 0xab4600  |  Size: 280 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5224600(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t *puVar2;
  int iVar3;
  
  if (*(int64_t *)(param_2 + 200) != 0) {
    iVar3 = CONCAT22((short)((uint32_t)*(uint32_t *)(param_2 + 0x1b0) >> 0x10) -
                     (short)((uint64_t)param_1 >> 0x10),
                     (short)*(uint32_t *)(param_2 + 0x1b0) + 0x1421) + 0xb6b;
    (*(code *)((int64_t)(short)iVar3 + 0x7fffa568c5c4))
              (iVar3,CONCAT62((int6)((uint64_t)param_1 >> 0x10),0xebdf) & 0xffffffff,
               *(uint64_t *)(param_2 + 200) >> 0x3d ^ *(uint64_t *)(param_2 + 200));
  }
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x100) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar2 = *(uint32_t **)(param_2 + 0x100);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5224720  |  RVA: 0xab4720  |  Size: 409 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5224720(uint32_t param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t in_R11;
  
  uVar2 = (param_1 ^ 0x6ceddc08) * param_4 * 0x7beebc57;
  if (uVar2 <= *(uint8_t *)(in_R11 + 1)) {
    uVar1 = uVar2 + 1;
    if (uVar2 < 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint64_t)(uVar1 & 0x7ffffffc);
      lVar4 = 0;
      do {
        lVar4 = lVar4 + 0x10;
      } while ((uint64_t)(uVar1 >> 2 & 0x1fffffff) * 0x10 != lVar4);
      if ((uVar1 & 0x7ffffffc) == uVar1) {
        return;
      }
    }
    for (; (uint64_t)uVar1 - 1 != uVar3; uVar3 = uVar3 + 1) {
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52248c0  |  RVA: 0xab48c0  |  Size: 158 bytes
// Callers  : FUN_7fffa55f6f60@0xe86f60, FUN_7fffa512f2a0@0x9bf2a0
// Callees  : none
// ============================================================================
void FUN_7fffa52248c0(int64_t param_1,int64_t *param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  
  uVar3 = *(uint8_t *)*param_2 & 0xf;
  lVar5 = *param_2 - (int64_t)(char)(&UNK_7fffa56b3150)[uVar3];
  uVar3 = *(uint32_t *)(lVar5 + -4) >> ((&UNK_7fffa56b3160)[uVar3] & 0x1f);
  *param_2 = lVar5;
  uVar4 = uVar3 & 3;
  *(uint32_t *)(param_1 + 0x10) = uVar3 >> 2;
  *(uint32_t *)(param_1 + 0x14) = uVar4;
  if (uVar4 - 1 < 2) {
    uVar2 = *(uint32_t *)*param_2;
    *param_2 = (int64_t)((uint32_t *)*param_2 + 1);
    *(uint32_t *)(param_1 + 0x18) = uVar2;
    uVar3 = *(uint8_t *)*param_2 & 0xf;
    bVar1 = (&UNK_7fffa56b3160)[uVar3];
    lVar5 = *param_2 - (int64_t)(char)(&UNK_7fffa56b3150)[uVar3];
    uVar3 = *(uint32_t *)(lVar5 + -4);
    *param_2 = lVar5;
    *(uint32_t *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
  }
  else if (uVar4 == 3) {
    uVar2 = *(uint32_t *)*param_2;
    *param_2 = (int64_t)((uint32_t *)*param_2 + 1);
    *(uint32_t *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5224960  |  RVA: 0xab4960  |  Size: 9 bytes
// Callers  : FUN_7fffa4e8ea00@0x71ea00, FUN_7fffa5451110@0xce1110
// Callees  : none
// ============================================================================
void FUN_7fffa5224960(uint64_t param_1,code *UNRECOVERED_JUMPTABLE,uint64_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x7fffa5224966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}


// ============================================================================
// Function : FUN_7fffa522496c  |  RVA: 0xab496c  |  Size: 1171 bytes
// Callers  : FUN_7fffa50c9360@0x959360
// Callees  : FUN_7fffa4fd1100@0x861100, FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5488850@0xd18850, FUN_7fffa562521c@0xeb521c, FUN_7fffa52c4238@0xb54238, FUN_7fffa5657488@0xee7488
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa522496c(uint64_t *param_1,uint32_t param_2,uint8_t *param_3,uint64_t param_4,
                     uint8_t *param_5)

{
  char cVar1;
  uint8_t bVar2;
  char cVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  char *pcVar7;
  int iVar8;
  uint8_t *puVar9;
  uint8_t *pbVar10;
  int iVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int iVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint8_t auStack_108 [32];
  uint8_t *puStack_e8;
  uint32_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint16_t auStack_c8 [2];
  uint32_t uStack_c4;
  uint32_t auStack_c0 [2];
  uint8_t *pbStack_b8;
  uint8_t *puStack_b0;
  uint64_t uStack_a8;
  uint32_t uStack_a0;
  int iStack_9c;
  uint8_t *pbStack_98;
  int64_t lStack_90;
  uint64_t uStack_88;
  uint8_t *puStack_80;
  uint8_t *pbStack_78;
  uint64_t uStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  uint8_t auStack_58 [8];
  uint8_t bStack_50;
  uint8_t bStack_4f;
  uint8_t auStack_48 [8];
  uint64_t uStack_40;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_40 = _DAT_7fffa4780040 ^ (uint64_t)auStack_108;
  puStack_b0 = param_5;
  lVar16 = (int64_t)(int)param_2 >> 6;
  uVar6 = (uint64_t)(param_2 & 0x3f);
  uStack_70 = *(uint64_t *)(*(int64_t *)(&DAT_7fffa4782180 + lVar16 * 8) + 0x28 + uVar6 * 0x48);
  pbStack_b8 = param_3 + (param_4 & 0xffffffff);
  pbStack_98 = param_3;
  lStack_90 = lVar16;
  uStack_a0 = (*(code *)&DAT_7ff84ea57b00)();
  iVar11 = 0;
  if (puStack_b0[0x28] == '\0') {
    FUN_7fffa4fd1100(puStack_b0);
  }
  iStack_9c = *(int *)(*(int64_t *)(puStack_b0 + 0x18) + 0xc);
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  if (pbStack_98 < param_3 + (param_4 & 0xffffffff)) {
    iVar8 = 0;
    lStack_68 = lVar16;
    do {
      auStack_c8[0] = CONCAT11(auStack_c8[0]._1_1_,*param_3);
      uStack_c4 = 0;
      cVar3 = '\x01';
      if (iStack_9c == 0xfde9) {
        iVar8 = 0;
        lVar17 = 0;
        pcVar7 = (char *)(uVar6 * 0x48 + 0x3e + *(int64_t *)(&DAT_7fffa4782180 + lStack_68 * 8));
        do {
          if (*pcVar7 == '\0') break;
          iVar8 = iVar8 + 1;
          lVar17 = lVar17 + 1;
          pcVar7 = pcVar7 + 1;
        } while (lVar17 < 5);
        if (lVar17 < 1) {
          cVar1 = *(char *)((uint64_t)*param_3 + 0x7fffa47809b0);
          iVar8 = cVar1 + 1;
          lVar16 = (int64_t)pbStack_b8 - (int64_t)param_3;
          if (lVar16 < iVar8) {
            if (0 < lVar16) {
              lVar17 = 0;
              do {
                *(uint8_t *)(lVar17 + uVar6 * 0x48 + 0x3e +
                         *(int64_t *)(&DAT_7fffa4782180 + lStack_90 * 8)) = param_3[lVar17];
                iVar11 = iVar11 + 1;
                lVar17 = lVar17 + 1;
              } while (iVar11 < lVar16);
            }
            *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + (int)lVar16;
            break;
          }
          uStack_a8 = 0;
          cVar3 = (iVar8 == 4) + '\x01';
          puStack_e8 = puStack_b0;
          pbStack_78 = param_3;
          lVar16 = FUN_7fffa562521c(&uStack_c4,&pbStack_78,cVar3,&uStack_a8);
          if (lVar16 == -1) break;
          pbVar10 = param_3 + cVar1;
          lVar16 = lStack_90;
        }
        else {
          iVar15 = *(char *)((uint64_t)
                             *(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + lVar16 * 8) + 0x3e +
                                      uVar6 * 0x48) + 0x7fffa47809b0) + 1;
          iVar8 = iVar15 - iVar8;
          uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar8);
          lVar12 = (int64_t)pbStack_b8 - (int64_t)param_3;
          lVar14 = (int64_t)iVar8;
          if (lVar12 < lVar14) {
            if (0 < lVar12) {
              lVar14 = lVar17;
              do {
                *(uint8_t *)(lVar14 + uVar6 * 0x48 + 0x3e +
                         *(int64_t *)(&DAT_7fffa4782180 + lVar16 * 8)) = param_3[lVar14 - lVar17];
                iVar11 = iVar11 + 1;
                lVar14 = lVar14 + 1;
              } while (iVar11 < lVar12);
            }
            *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + (int)lVar12;
            break;
          }
          lVar12 = 0;
          puVar9 = (uint8_t *)
                   (uVar6 * 0x48 + 0x3e + *(int64_t *)(&DAT_7fffa4782180 + lStack_68 * 8));
          do {
            auStack_58[lVar12] = *puVar9;
            lVar12 = lVar12 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 < lVar17);
          if (0 < lVar14) {
            FUN_7fffa56a5f20(auStack_58 + lVar17,param_3,lVar14);
          }
          lVar12 = 0;
          do {
            *(uint8_t *)
             (lVar12 + uVar6 * 0x48 + 0x3e + *(int64_t *)(&DAT_7fffa4782180 + lVar16 * 8)) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < lVar17);
          uStack_88 = 0;
          puStack_80 = auStack_58;
          cVar3 = (iVar15 == 4) + '\x01';
          puStack_e8 = puStack_b0;
          lVar17 = FUN_7fffa562521c(&uStack_c4,&puStack_80,cVar3,&uStack_88);
          if (lVar17 == -1) break;
          pbVar10 = param_3 + ((int)uStack_a8 + -1);
        }
      }
      else {
        lVar17 = *(int64_t *)(&DAT_7fffa4782180 + lVar16 * 8);
        bVar2 = *(uint8_t *)(lVar17 + 0x3d + uVar6 * 0x48);
        if ((bVar2 & 4) == 0) {
          if (*(short *)(**(int64_t **)(puStack_b0 + 0x18) + (uint64_t)*param_3 * 2) < 0) {
            pbVar10 = param_3 + 1;
            if (pbVar10 < pbStack_b8) {
              iVar8 = FUN_7fffa52c4238(&uStack_c4,param_3,2,puStack_b0);
              if (iVar8 != -1) goto LAB_7fffa5224c74;
            }
            else {
              *(uint8_t *)(lVar17 + 0x3e + uVar6 * 0x48) = *param_3;
              pbVar10 = (uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + lVar16 * 8) + 0x3d + uVar6 * 0x48
                                );
              *pbVar10 = *pbVar10 | 4;
              *(int *)((int64_t)param_1 + 4) = iVar8 + 1;
            }
            break;
          }
          uVar13 = 1;
          pbVar10 = param_3;
        }
        else {
          bStack_50 = *(uint8_t *)(lVar17 + 0x3e + uVar6 * 0x48);
          bStack_4f = *param_3;
          *(uint8_t *)(lVar17 + 0x3d + uVar6 * 0x48) = bVar2 & 0xfb;
          uVar13 = 2;
          pbVar10 = &bStack_50;
        }
        iVar8 = FUN_7fffa52c4238(&uStack_c4,pbVar10,uVar13,puStack_b0);
        pbVar10 = param_3;
        if (iVar8 == -1) break;
      }
LAB_7fffa5224c74:
      param_3 = pbVar10 + 1;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 5;
      puStack_e8 = auStack_48;
      uVar4 = FUN_7fffa5657488(uStack_a0,0,&uStack_c4,cVar3);
      uVar13 = uStack_70;
      if (uVar4 == 0) break;
      auStack_c0[0] = 0;
      puStack_e8 = (uint8_t *)0x0;
      iVar8 = (*(code *)&DAT_7ff84ea57790)(uStack_70,auStack_48,uVar4,auStack_c0);
      if (iVar8 == 0) {
LAB_7fffa5224dcd:
        uVar5 = (*(code *)&DAT_7ff84ea18640)();
        *(uint32_t *)param_1 = uVar5;
        break;
      }
      iVar8 = (*(int *)(param_1 + 1) - (int)pbStack_98) + (int)param_3;
      *(int *)((int64_t)param_1 + 4) = iVar8;
      if (auStack_c0[0] < uVar4) break;
      if ((char)auStack_c8[0] == '\n') {
        auStack_c8[0] = 0xd;
        puStack_e8 = (uint8_t *)0x0;
        iVar8 = (*(code *)&DAT_7ff84ea57790)(uVar13,auStack_c8,1,auStack_c0);
        if (iVar8 == 0) goto LAB_7fffa5224dcd;
        if (auStack_c0[0] == 0) break;
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        *(int *)((int64_t)param_1 + 4) = *(int *)((int64_t)param_1 + 4) + 1;
        iVar8 = *(int *)((int64_t)param_1 + 4);
      }
    } while (param_3 < pbStack_b8);
  }
  FUN_7fffa5488850(uStack_40 ^ (uint64_t)auStack_108);
  return;
}


// ============================================================================
// Function : FUN_7fffa5224e00  |  RVA: 0xab4e00  |  Size: 1099 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5224f69) */
/* WARNING: Removing unreachable block (ram,0x7fffa5224f7c) */

void FUN_7fffa5224e00(void)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t unaff_RSI;
  uint8_t bVar9;
  uint64_t unaff_R13;
  uint64_t unaff_R15;
  
  lVar5 = ~(unaff_RSI ^ unaff_R13 ^ unaff_R15) * 0x319e6d10 +
          (~unaff_R13 & unaff_RSI & unaff_R15) * 0x30cff91 +
          (unaff_R13 ^ unaff_R15 ^ unaff_RSI) * 0x319e6d10 +
          (~unaff_R13 & unaff_RSI & unaff_R15) * -0x30cff91;
  uVar2 = (uint32_t)lVar5;
  *(uint8_t *)((int64_t)(int)(uVar2 + 0x319dd366) + 0x7fffa47c5d88) = 0;
  bVar9 = (uint8_t)lVar5;
  uVar3 = (uint16_t)lVar5;
  lVar4 = (int64_t)(short)((uVar3 + 0x1983) * -0x6bab);
  lVar6 = (int64_t)(int)((uVar2 | 1) * -0xf8fcd8f + -0x6135a1d2);
  *(uint8_t (*) [16])(lVar6 + 0x7fffa47c778b) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa47c777b) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa47c776b) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar6 + 0x7fffa47c775b) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar4 + 0x7fffa47c060a) =
       (uint64_t)(uint16_t)(0U >> (bVar9 & 0xf) | 0 << 0x10 - (bVar9 & 0xf));
  uVar1 = rdtsc();
  lVar4 = (uVar1 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)lVar4 >> 0x20),(int)uVar1)) *
          0x5acaeca37306b6 + 0xb;
  lVar6 = 0;
  do {
    lVar4 = lVar4 * 0x5acaeca37306b6 + 0xb;
    lVar7 = lVar4 * 0x5acaeca37306b6 + 0xb;
    lVar8 = lVar7 * 0x5acaeca37306b6 + 0xb;
    *(char *)(lVar6 + (int64_t)(short)(-0x3967 << (bVar9 & 0xf) | 0xc699U >> 0x10 - (bVar9 & 0xf))
                      + 0x7fffa47bfd41) = (char)((uint64_t)lVar8 >> 0x20);
    *(char *)(lVar6 + (int64_t)(int)((uVar2 | 1) * -0x19e6f6d0) + 0x7fffa47cbda9) =
         (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar6 + ((int64_t)(int)(uVar2 + 0x4dcecce3) ^ 0xffffffffe3cf77bdU) + 0x7fffa47c9b6a)
         = (char)((uint64_t)lVar4 >> 0x20);
    lVar4 = ((0x3151ee2a92442e23 - lVar5) * -0x45ad8a21 ^ 0x54da86dbU) * lVar8 + 0xb;
    *(char *)(lVar6 + (int64_t)(short)(uVar3 ^ 0x6894) + 0x7fffa47bc977) =
         (char)((uint64_t)lVar4 >> 0x20);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x70);
  bVar9 = *(char *)((int64_t)
                    (int)(0x2897ffffU >> (bVar9 & 0x1f) | 0x2897ffff << 0x20 - (bVar9 & 0x1f)) +
                   0x7fffa47c9b47) + 1U & 7;
  *(uint64_t *)
   ((int64_t)(short)((0x68c1 - uVar3) * 0x800 | (uint16_t)(0x68c1 - uVar3) >> 5) + 0x7fffa47c353c +
   (uint64_t)bVar9 * 8) = ~*(uint64_t *)((int64_t)(short)((uVar3 | 1) * -0x4ce) + 0x7fffa47bc627)
  ;
  *(uint8_t *)((int64_t)(int)((uVar2 ^ 0x81c0529c) * -0x128443e7) + 0x7fffa47ca952) = bVar9;
  return;
}


// ============================================================================
// Function : FUN_7fffa522524c  |  RVA: 0xab524c  |  Size: 117 bytes
// Callers  : FUN_7fffa517c9b4@0xa0c9b4, FUN_7fffa5427044@0xcb7044, FUN_7fffa505ca30@0x8eca30
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184, FUN_7fffa52d5bb0@0xb65bb0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa522524c(uint32_t param_1)

{
  uint32_t *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (uint32_t *)FUN_7fffa52d5bb0();
    *puVar1 = 0;
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < _DAT_7fffa4782580)) {
      if ((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + ((uint64_t)(int64_t)(int)param_1 >> 6) * 8)
                     + 0x38 + (uint64_t)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(uint64_t *)
                (*(int64_t *)(&DAT_7fffa4782180 + ((uint64_t)(int64_t)(int)param_1 >> 6) * 8) +
                 0x28 + (uint64_t)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (uint32_t *)FUN_7fffa52d5bb0();
    *puVar1 = 0;
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = 9;
    FUN_7fffa55c8ce0();
  }
  return 0xffffffffffffffff;
}


// ============================================================================
// Function : FUN_7fffa52252d0  |  RVA: 0xab52d0  |  Size: 554 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52252d0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47bb69d = '\0';
  uRam00007fffa47bb6dc = 0;
  uRam00007fffa47bb6e4 = 0;
  uRam00007fffa47bb6cc = 0;
  uRam00007fffa47bb6d4 = 0;
  uRam00007fffa47bb6bc = 0;
  uRam00007fffa47bb6c4 = 0;
  uRam00007fffa47bb6ac = 0;
  uRam00007fffa47bb6b4 = 0;
  uRam00007fffa47bb6f2 = 0;
  uVar1 = rdtsc();
  lVar2 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0x3aa2bf729418fef + 1;
  lVar4 = 3;
  while( true ) {
    lVar2 = lVar2 * 0x3aa2bf729418fef + 1;
    lVar3 = lVar2 * 0x3aa2bf729418fef + 1;
    lVar5 = lVar3 * 0x3aa2bf729418fef + 1;
    *(char *)(lVar4 + 0x7fffa47bb696) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar4 + 0x7fffa47bb695) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar4 + 0x7fffa47bb697) = (char)((uint64_t)lVar5 >> 0x20);
    if (lVar4 == 0x67) break;
    lVar2 = lVar5 * 0x3aa2bf729418fef + 1;
    *(char *)(lVar4 + 0x7fffa47bb698) = (char)((uint64_t)lVar2 >> 0x20);
    lVar4 = lVar4 + 4;
  }
  bRam00007fffa47bb69d = bRam00007fffa47bb69d + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa47bb69d * 8 + 0x7fffa47bb6ac) = ~uRam00007fffa47bb6f2;
  return;
}


// ============================================================================
// Function : FUN_7fffa5225500  |  RVA: 0xab5500  |  Size: 21 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5225500(int64_t param_1)

{
  (*(code *)&DAT_7ff850512320)(param_1 + 8);
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5225520  |  RVA: 0xab5520  |  Size: 68 bytes
// Callers  : FUN_7fffa5697520@0xf27520, FUN_7fffa51816dc@0xa116dc, FUN_7fffa50c96be@0x9596be
// Callees  : FUN_7fffa549ae70@0xd2ae70, FUN_7fffa54a4560@0xd34560, FUN_7fffa50fecc0@0x98ecc0, FUN_7fffa5215380@0xaa5380
// ============================================================================
void FUN_7fffa5225520(int64_t param_1)

{
  code *pcVar1;
  int64_t lVar2;
  int iVar3;
  
  lVar2 = FUN_7fffa5215380();
  while( true ) {
    if (lVar2 != 0) {
      return;
    }
    iVar3 = FUN_7fffa50fecc0(param_1);
    if (iVar3 == 0) break;
    lVar2 = FUN_7fffa5215380(param_1);
  }
  if (param_1 == -1) {
    FUN_7fffa549ae70();
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)();
    return;
  }
  FUN_7fffa54a4560();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5225570  |  RVA: 0xab5570  |  Size: 11 bytes
// Callers  : FUN_7fffa5400390@0xc90390, FUN_7fffa517e320@0xa0e320
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5225677) */
/* WARNING: Removing unreachable block (ram,0x7fffa5225665) */
/* WARNING: Removing unreachable block (ram,0x7fffa5225653) */
/* WARNING: Removing unreachable block (ram,0x7fffa522562c) */
/* WARNING: Removing unreachable block (ram,0x7fffa52255a7) */
/* WARNING: Removing unreachable block (ram,0x7fffa5225582) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa5225570(void)

{
  int *piVar1;
  uint32_t *puVar2;
  int64_t lVar3;
  int iVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint8_t bVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  puVar2 = (uint32_t *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_7fffa47800e8 = 0x8000;
    _DAT_7fffa47800f0 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((uint64_t)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      _DAT_7fffa4781b80 = _DAT_7fffa4781b80 | 1;
    }
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar4 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar1[1];
    uVar10 = piVar1[2];
    if ((uVar12 >> 9 & 1) != 0) {
      _DAT_7fffa4781b80 = _DAT_7fffa4781b80 | 2;
    }
    if (0 < *piVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar13 = *(uint32_t *)(lVar3 + 8);
    }
    if (0x23 < iVar4) {
      lVar3 = cpuid(0x24);
      uVar8 = *(uint32_t *)(lVar3 + 4);
    }
    if (0x28 < iVar4) {
      lVar3 = cpuid(0x29);
      uVar11 = *(uint32_t *)(lVar3 + 4);
    }
  }
  _DAT_7fffa47800e0 = 1;
  _DAT_7fffa47800e4 = 2;
  uVar6 = _DAT_7fffa47800f8 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_7fffa47800e0 = 2;
    _DAT_7fffa47800e4 = 6;
    uVar6 = _DAT_7fffa47800f8 & 0xffffffffffffffee;
  }
  _DAT_7fffa47800f8 = uVar6;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar6 = xinuse(0);
  uVar9 = in_XCR0 & uVar6 & 0xffffffff;
  uVar6 = _DAT_7fffa47800f8;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar7 = (uint8_t)uVar9, (bVar7 & 6) != 6)) goto LAB_7fffa52257e4;
  _DAT_7fffa47800e0 = 3;
  uVar5 = _DAT_7fffa47800e4 | 8;
  if ((uVar12 & 0x20) == 0) {
LAB_7fffa522578a:
    _DAT_7fffa47800f8 = uVar6;
    _DAT_7fffa47800e4 = uVar5;
    uVar5 = _DAT_7fffa47800e4;
    uVar6 = _DAT_7fffa47800f8;
  }
  else {
    _DAT_7fffa47800e0 = 5;
    uVar5 = _DAT_7fffa47800e4 | 0x28;
    uVar6 = _DAT_7fffa47800f8 & 0xfffffffffffffffd;
    if ((uVar12 & 0xd0030000) == 0xd0030000) {
      if ((bVar7 & 0xe0) != 0xe0) goto LAB_7fffa522578a;
      _DAT_7fffa47800e4 = _DAT_7fffa47800e4 | 0x68;
      _DAT_7fffa47800e0 = 6;
      uVar5 = _DAT_7fffa47800e4;
      uVar6 = _DAT_7fffa47800f8 & 0xffffffffffffffd9;
    }
  }
  _DAT_7fffa47800f8 = uVar6;
  _DAT_7fffa47800e4 = uVar5;
  if ((uVar10 >> 0x17 & 1) != 0) {
    _DAT_7fffa47800f8 = _DAT_7fffa47800f8 & 0xfffffffffeffffff;
  }
  uVar6 = _DAT_7fffa47800f8;
  if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
    _DAT_7fffa4781b84 = uVar8 & 0xff;
    uVar6 = _DAT_7fffa47800f8 & 0xfffffffffeffffd0;
    if (1 < _DAT_7fffa4781b84) {
      uVar6 = _DAT_7fffa47800f8 & 0xfffffffffeffff90;
    }
  }
LAB_7fffa52257e4:
  _DAT_7fffa47800f8 = uVar6;
  if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
    _DAT_7fffa47800f8 = _DAT_7fffa47800f8 & 0xffffffffffffff7f;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa522557b  |  RVA: 0xab557b  |  Size: 312 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5225677) */
/* WARNING: Removing unreachable block (ram,0x7fffa5225665) */
/* WARNING: Removing unreachable block (ram,0x7fffa5225653) */
/* WARNING: Removing unreachable block (ram,0x7fffa522562c) */
/* WARNING: Removing unreachable block (ram,0x7fffa52255a7) */
/* WARNING: Removing unreachable block (ram,0x7fffa5225582) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa522557b(void)

{
  int *piVar1;
  uint32_t *puVar2;
  int64_t lVar3;
  int iVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint8_t bVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  puVar2 = (uint32_t *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_7fffa47800e8 = 0x8000;
    _DAT_7fffa47800f0 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((uint64_t)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      _DAT_7fffa4781b80 = _DAT_7fffa4781b80 | 1;
    }
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar4 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar1[1];
    uVar10 = piVar1[2];
    if ((uVar12 >> 9 & 1) != 0) {
      _DAT_7fffa4781b80 = _DAT_7fffa4781b80 | 2;
    }
    if (0 < *piVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar13 = *(uint32_t *)(lVar3 + 8);
    }
    if (0x23 < iVar4) {
      lVar3 = cpuid(0x24);
      uVar8 = *(uint32_t *)(lVar3 + 4);
    }
    if (0x28 < iVar4) {
      lVar3 = cpuid(0x29);
      uVar11 = *(uint32_t *)(lVar3 + 4);
    }
  }
  _DAT_7fffa47800e0 = 1;
  _DAT_7fffa47800e4 = 2;
  uVar6 = _DAT_7fffa47800f8 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_7fffa47800e0 = 2;
    _DAT_7fffa47800e4 = 6;
    uVar6 = _DAT_7fffa47800f8 & 0xffffffffffffffee;
  }
  _DAT_7fffa47800f8 = uVar6;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar6 = xinuse(0);
  uVar9 = in_XCR0 & uVar6 & 0xffffffff;
  uVar6 = _DAT_7fffa47800f8;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar7 = (uint8_t)uVar9, (bVar7 & 6) != 6)) goto LAB_7fffa52257e4;
  _DAT_7fffa47800e0 = 3;
  uVar5 = _DAT_7fffa47800e4 | 8;
  if ((uVar12 & 0x20) == 0) {
LAB_7fffa522578a:
    _DAT_7fffa47800f8 = uVar6;
    _DAT_7fffa47800e4 = uVar5;
    uVar5 = _DAT_7fffa47800e4;
    uVar6 = _DAT_7fffa47800f8;
  }
  else {
    _DAT_7fffa47800e0 = 5;
    uVar5 = _DAT_7fffa47800e4 | 0x28;
    uVar6 = _DAT_7fffa47800f8 & 0xfffffffffffffffd;
    if ((uVar12 & 0xd0030000) == 0xd0030000) {
      if ((bVar7 & 0xe0) != 0xe0) goto LAB_7fffa522578a;
      _DAT_7fffa47800e4 = _DAT_7fffa47800e4 | 0x68;
      _DAT_7fffa47800e0 = 6;
      uVar5 = _DAT_7fffa47800e4;
      uVar6 = _DAT_7fffa47800f8 & 0xffffffffffffffd9;
    }
  }
  _DAT_7fffa47800f8 = uVar6;
  _DAT_7fffa47800e4 = uVar5;
  if ((uVar10 >> 0x17 & 1) != 0) {
    _DAT_7fffa47800f8 = _DAT_7fffa47800f8 & 0xfffffffffeffffff;
  }
  uVar6 = _DAT_7fffa47800f8;
  if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
    _DAT_7fffa4781b84 = uVar8 & 0xff;
    uVar6 = _DAT_7fffa47800f8 & 0xfffffffffeffffd0;
    if (1 < _DAT_7fffa4781b84) {
      uVar6 = _DAT_7fffa47800f8 & 0xfffffffffeffff90;
    }
  }
LAB_7fffa52257e4:
  _DAT_7fffa47800f8 = uVar6;
  if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
    _DAT_7fffa47800f8 = _DAT_7fffa47800f8 & 0xffffffffffffff7f;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa52256b3  |  RVA: 0xab56b3  |  Size: 357 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa52256b3(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  uint32_t unaff_EBP;
  uint64_t unaff_RSI;
  uint32_t unaff_EDI;
  uint32_t in_R9D;
  uint32_t in_R10D;
  uint8_t unaff_R14B;
  uint64_t in_XCR0;
  
  _DAT_7fffa47800f8 = in_RAX & 0xffffffffffffffef;
  _DAT_7fffa47800e0 = 2;
  _DAT_7fffa47800e4 = 6;
  if ((unaff_EDI >> 0x1b & 1) == 0) {
    _DAT_7fffa47800e0 = 2;
    _DAT_7fffa47800e4 = 6;
    return 0;
  }
  uVar1 = xinuse(0);
  uVar3 = in_XCR0 & uVar1 & 0xffffffff;
  uVar1 = _DAT_7fffa47800f8;
  if (((unaff_EDI >> 0x1c & 1) != 0) && (bVar2 = (uint8_t)uVar3, (bVar2 & 6) == 6)) {
    _DAT_7fffa47800e0 = 3;
    _DAT_7fffa47800e4 = 0xe;
    if ((in_R9D & 0x20) != 0) {
      _DAT_7fffa47800e0 = 5;
      _DAT_7fffa47800e4 = 0x2e;
      _DAT_7fffa47800f8 = in_RAX & 0xffffffffffffffed;
      if (((in_R9D & 0xd0030000) == 0xd0030000) && ((bVar2 & 0xe0) == 0xe0)) {
        _DAT_7fffa47800e4 = 0x6e;
        _DAT_7fffa47800f8 = in_RAX & 0xffffffffffffffc9;
        _DAT_7fffa47800e0 = 6;
      }
    }
    if ((unaff_EBP >> 0x17 & 1) != 0) {
      _DAT_7fffa47800f8 = _DAT_7fffa47800f8 & 0xfffffffffeffffff;
    }
    uVar1 = _DAT_7fffa47800f8;
    if (((in_R10D >> 0x13 & 1) != 0) && ((bVar2 & 0xe0) == 0xe0)) {
      _DAT_7fffa4781b84 = (uint32_t)unaff_R14B;
      uVar1 = _DAT_7fffa47800f8 & 0xfffffffffeffffd0;
      if (1 < _DAT_7fffa4781b84) {
        uVar1 = _DAT_7fffa47800f8 & 0xfffffffffeffff90;
      }
    }
  }
  _DAT_7fffa47800f8 = uVar1;
  if ((((in_R10D >> 0x15 & 1) != 0) && ((unaff_RSI & 1) != 0)) && ((uVar3 >> 0x13 & 1) != 0)) {
    _DAT_7fffa47800f8 = _DAT_7fffa47800f8 & 0xffffffffffffff7f;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5225820  |  RVA: 0xab5820  |  Size: 1922 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5225820(void)

{
  char *pcVar1;
  uint8_t uVar2;
  uint64_t *puVar3;
  uint8_t auVar4 [16];
  uint8_t bVar5;
  uint16_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint32_t uVar10;
  uint64_t in_RAX;
  uint64_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t uVar14;
  code *pcVar15;
  int64_t lVar16;
  uint8_t *pbVar17;
  char *pcVar18;
  uint32_t uVar19;
  uint64_t *puVar20;
  int64_t lVar21;
  int64_t lVar22;
  char *pcVar23;
  int64_t in_R11;
  int64_t lVar24;
  uint64_t *puVar25;
  uint64_t uVar26;
  int64_t lVar27;
  bool bVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint64_t uVar32;
  uint8_t auVar33 [16];
  
  pbVar17 = (uint8_t *)((0x1b03ecc5 - in_R11) * 0x7c56b157477975b9);
  uVar19 = (uint32_t)in_RAX;
  bVar5 = (uint8_t)in_RAX & 0xf;
  lVar16 = *(int64_t *)
            ((int64_t)(short)((0x7a02 << bVar5 | 0x7a02U >> 0x10 - bVar5) + 0x90a) + 0x7fffa47bb4ea
            );
  if (lVar16 == 0) goto LAB_7fffa5225ea7;
  uVar6 = (uint16_t)in_RAX;
  pcVar18 = *(char **)((int64_t)(int)((uVar19 | 1) * -0x3beae792 + -0x71c8a2b4) + 0x7fffa47c6536);
  lVar24 = *(int64_t *)
            ((int64_t)(short)((uVar6 + 0x49d1) * 0x40 | (uint16_t)(uVar6 + 0x49d1) >> 10) +
            0x7fffa47c1d4a) * 0x10;
  if (pcVar18 == pcVar18 + lVar24 + 0x10) {
    lVar27 = 0;
  }
  else {
    lVar27 = 0;
    pcVar23 = pcVar18;
    do {
      auVar29[0] = -(*pcVar23 == '\0');
      auVar29[1] = -(pcVar23[1] == '\0');
      auVar29[2] = -(pcVar23[2] == '\0');
      auVar29[3] = -(pcVar23[3] == '\0');
      auVar29[4] = -(pcVar23[4] == '\0');
      auVar29[5] = -(pcVar23[5] == '\0');
      auVar29[6] = -(pcVar23[6] == '\0');
      auVar29[7] = -(pcVar23[7] == '\0');
      auVar29[8] = -(pcVar23[8] == '\0');
      auVar29[9] = -(pcVar23[9] == '\0');
      auVar29[10] = -(pcVar23[10] == '\0');
      auVar29[0xb] = -(pcVar23[0xb] == '\0');
      auVar29[0xc] = -(pcVar23[0xc] == '\0');
      auVar29[0xd] = -(pcVar23[0xd] == '\0');
      auVar29[0xe] = -(pcVar23[0xe] == '\0');
      auVar29[0xf] = -(pcVar23[0xf] == '\0');
      for (uVar10 = ((uint32_t)(pcVar23 != pcVar18 + lVar24) << 0xe | 0x3fff) &
                    ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
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
                                   (uint16_t)(auVar29[0xf] >> 7) << 0xf); uVar10 != 0;
          uVar10 = uVar10 - 1 & uVar10) {
        uVar12 = 0;
        for (uVar13 = uVar10; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar11 = (uint64_t)uVar12;
        puVar20 = *(uint64_t **)(lVar16 + uVar11 * 8);
        puVar25 = puVar20;
        if (7 < (uint64_t)puVar20[3]) {
          puVar25 = (uint64_t *)*puVar20;
        }
        if (puVar20[2] == 0) {
          uVar32 = 0;
        }
        else {
          lVar21 = 0;
          uVar32 = 0;
          do {
            uVar32 = (uint64_t)*(uint16_t *)((int64_t)puVar25 + lVar21) + uVar32 + 0x9e3779b9;
            uVar32 = (uVar32 >> 0x20 ^ uVar32) * 0xe9846af9b1a615d;
            uVar32 = (uVar32 >> 0x20 ^ uVar32) * 0xe9846af9b1a615d;
            uVar32 = uVar32 >> 0x1c ^ uVar32;
            lVar21 = lVar21 + 2;
          } while (puVar20[2] * 2 != lVar21);
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar32;
        uVar32 = SUB168(auVar4 * ZEXT816(0x9e3779b97f4a7c15),8) ^
                 SUB168(auVar4 * ZEXT816(0x9e3779b97f4a7c15),0);
        uVar26 = uVar32 >> (*pbVar17 & 0x3f);
        lVar21 = *(int64_t *)(pbVar17 + 0x10) + uVar26 * 0x10;
        pcVar1 = (char *)(*(int64_t *)(pbVar17 + 0x10) + uVar26 * 0x10);
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
        uVar12 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
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
        if (uVar12 == 0) {
          lVar22 = 0;
          do {
            *(uint8_t *)(lVar21 + 0xf) = *(uint8_t *)(lVar21 + 0xf) | '\x01' << ((uint8_t)uVar32 & 7);
            lVar21 = uVar26 + lVar22;
            lVar22 = lVar22 + 1;
            uVar26 = lVar21 + 1U & *(uint64_t *)(pbVar17 + 8);
            lVar21 = *(int64_t *)(pbVar17 + 0x10) + uVar26 * 0x10;
            pcVar1 = (char *)(*(int64_t *)(pbVar17 + 0x10) + uVar26 * 0x10);
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
            uVar12 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar31 >> 7,0) & 1) |
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
          } while (uVar12 == 0);
          puVar20 = *(uint64_t **)(lVar16 + uVar11 * 8);
        }
        uVar13 = 0;
        for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        uVar2 = (&UNK_7fffa5837ed7)
                [(uVar32 & 0xff) * 4 +
                 (int64_t)(short)((uVar6 + 0x51cb) * 0x2000 | (uint16_t)(uVar6 + 0x51cb) >> 3)];
        *(uint64_t **)(uVar26 * 0x78 + *(int64_t *)(pbVar17 + 0x18) + (uint64_t)uVar13 * 8) =
             puVar20;
        *(uint64_t *)(lVar16 + uVar11 * 8) = 0;
        *(uint8_t *)(lVar21 + (uint64_t)uVar13) = uVar2;
        puVar3 = *(uint64_t **)(lVar16 + uVar11 * 8);
        if (puVar3 != (uint64_t *)0x0) {
          if (7 < puVar3[3]) {
            uVar32 = *puVar3;
            uVar14 = (uint64_t)(uVar19 + 0x9da62cf7 ^ 0xb2eb97f8);
            uVar26 = uVar32 >> 0x3d ^ uVar32;
            if ((int64_t)uVar14 < (int64_t)(int)(uVar19 + 0xde4c053e)) {
              uVar26 = (uint64_t)((uint32_t)uVar32 & (uint32_t)(uVar32 >> 0x3d));
            }
            (*(code *)(&UNK_7fffa568ef99 + (short)((uVar6 | 1) * -0x4ee9)))
                      (uVar14,&UNK_7fffa568ef99,uVar26);
          }
          puVar3[2] = 0;
          *(uint16_t *)puVar3 = 0;
          puVar3[3] = 7;
          uVar11 = *(uint64_t *)(lVar16 + uVar11 * 8);
          FUN_7fffa5687c30(in_RAX,FUN_7fffa5687c30,uVar11 >> 0x3d ^ uVar11);
        }
        lVar27 = lVar27 + 1;
      }
      lVar16 = lVar16 + 0x78;
      bVar28 = pcVar23 != pcVar18 + lVar24;
      pcVar23 = pcVar23 + 0x10;
    } while (bVar28);
    lVar16 = *(int64_t *)
              (s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e +
              (int64_t)(short)(~(uVar6 ^ 0x1018) << 1 | (uint16_t)(-1 < (short)(uVar6 ^ 0x1018))) +
              0xd);
  }
  if (lVar27 == *(int64_t *)((int64_t)(int)(uVar19 + 0x7802fb3) + 0x7fffa47c51d4)) {
LAB_7fffa5225e5e:
    if (lVar16 == 0) goto LAB_7fffa5225ea7;
  }
  else {
    if (lVar16 == 0) goto LAB_7fffa5225ea7;
    uVar10 = (uVar19 ^ 0x2bf752a) + 0xe53fa6b0;
    pcVar18 = *(char **)((int64_t)(int)(uVar10 * 8 | uVar10 >> 0x1d) + 0x7fffa47c4f12);
    lVar24 = *(int64_t *)
              ((int64_t)
               (int)(((uVar19 ^ 0x21e3f71) << 0x1d | (uVar19 ^ 0x21e3f71) >> 3) ^ 0xe0b35479) +
              0x7fffa47c3c61) * 0x10;
    if (pcVar18 != pcVar18 + lVar24 + 0x10) {
      pcVar23 = pcVar18 + lVar24;
      while( true ) {
        uVar10 = (uint32_t)(pcVar18 != pcVar23) << 0xe | 0x3fff;
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
        uVar12 = ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar33 >> 7,0) & 1) |
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
                                (uint16_t)(auVar33[0xf] >> 7) << 0xf);
        while (uVar10 = uVar12 & uVar10, uVar10 != 0) {
          uVar12 = 0;
          for (uVar13 = uVar10; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          puVar3 = *(uint64_t **)(lVar16 + (uint64_t)uVar12 * 8);
          if (puVar3 != (uint64_t *)0x0) {
            if (7 < puVar3[3]) {
              (*(code *)((int64_t)(int)(-0x781a906 - uVar19) + 0x7fffa56955b7))
                        (-0x781a906 - uVar19,0x7fffa56955b7,*puVar3 >> 0x3d ^ *puVar3);
            }
            puVar3[2] = 0;
            *(uint16_t *)puVar3 = 0;
            uVar13 = 0x6a02433b - uVar19 ^ 0x8e7c46af;
            puVar3[3] = 7;
            uVar11 = *(uint64_t *)(lVar16 + (uint64_t)uVar12 * 8);
            pcVar15 = (code *)((int64_t)(int)uVar13 + 0x7fffa569281b);
            (*pcVar15)(uVar13,pcVar15,uVar11 >> 0x3d ^ uVar11);
          }
          uVar12 = uVar10 - 1;
        }
        if (pcVar18 == pcVar23) break;
        lVar16 = lVar16 + 0x78;
        pcVar18 = pcVar18 + 0x10;
      }
      lVar16 = *(int64_t *)((int64_t)(int)((uVar19 | 1) * 0xca5920 + 0x727272cc) + 0x7fffa47c560c)
      ;
      goto LAB_7fffa5225e5e;
    }
  }
  (*(code *)(&UNK_7fffa568a90f + (short)(uVar6 + 0xef26 ^ 0xcc86)))(&IMAGE_DOS_HEADER_7fffa4770000);
LAB_7fffa5225ea7:
  uVar10 = uVar19 | 1;
  lVar16 = (int64_t)(int)(uVar10 * 0x3369800a + 0x1addf597);
  uVar7 = *(uint64_t *)pbVar17;
  uVar8 = *(uint64_t *)(pbVar17 + 8);
  uVar9 = *(uint64_t *)(pbVar17 + 0x18);
  *(uint64_t *)(lVar16 + 0x7fffa47c574f) = *(uint64_t *)(pbVar17 + 0x10);
  *(uint64_t *)(lVar16 + 0x7fffa47c5757) = uVar9;
  *(uint64_t *)(lVar16 + 0x7fffa47c573f) = uVar7;
  *(uint64_t *)(lVar16 + 0x7fffa47c5747) = uVar8;
  uVar11 = *(int64_t *)
            ((int64_t)(int)(uVar10 * 0x42f7d740 | uVar10 * 0x150bdf5d >> 0x1a) + 0x7fffa47c3a7a) *
           0xf + 0xe;
  if (lRam00007fffa47bb1f8 == 0) {
    uVar11 = 0;
  }
  uVar32 = (uint64_t)((float)uVar11 * 0.875);
  uVar32 = (int64_t)((float)uVar11 * 0.875 - 9.223372e+18) & (int64_t)uVar32 >> 0x3f | uVar32;
  if (uVar11 < 0x1e) {
    uVar32 = uVar11;
  }
  *(uint64_t *)((int64_t)(int)(-0x781b2f1 - uVar19) + 0x7fffa47c9572) = uVar32;
  return;
}


// ============================================================================
// Function : FUN_7fffa5225fd0  |  RVA: 0xab5fd0  |  Size: 1618 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5225fd0(void) {
    /* +0xab5fd0 */ __asm { PUSH R14 }
    /* +0xab5fd2 */ __asm { PUSH R15 }
    /* +0xab5fd4 */ __asm { PUSH RDI }
    /* +0xab5fd5 */ __asm { PUSH R12 }
    /* +0xab5fd7 */ __asm { PUSH RBP }
    /* +0xab5fd8 */ __asm { PUSH R13 }
    /* +0xab5fda */ __asm { PUSH RSI }
    /* +0xab5fdb */ __asm { PUSH RBX }
    /* +0xab5fdc */ __asm { SUB RSP,0x18 }
    /* +0xab5fe0 */ __asm { MOV R9D,0x50a6fcad }
    /* +0xab5fe6 */ __asm { LEA R11,[0x7fffa477e87d] }
    /* +0xab5fed */ __asm { MOV RAX,0x7788668a2f8ff27 }
    /* +0xab5ff7 */ __asm { MOV ECX,0xa2e4150b }
    /* +0xab5ffc */ __asm { ADD RCX,RAX }
    /* +0xab5fff */ __asm { ROL RCX,0x27 }
    /* +0xab6003 */ __asm { XOR R9D,0x2590327 }
    /* +0xab600a */ __asm { ROL R9D,0x9 }
    /* +0xab600e */ __asm { MOVSXD R9,R9D }
    /* +0xab6011 */ __asm { LEA RAX,[0x7fffa4793b93] }
    /* +0xab6018 */ __asm { XORPS XMM2,XMM2 }
    /* +0xab601b */ __asm { MOVUPS xmmword ptr [RAX + R9*0x1 + 0x30],XMM2 }
    /* +0xab6021 */ __asm { MOVUPS xmmword ptr [RAX + R9*0x1 + 0x20],XMM2 }
    /* +0xab6027 */ __asm { MOVUPS xmmword ptr [RAX + R9*0x1 + 0x10],XMM2 }
    /* +0xab602d */ __asm { MOVUPS xmmword ptr [RAX + R9*0x1],XMM2 }
    /* +0xab6032 */ __asm { CMP R11,RCX }
    /* +0xab6035 */ __asm { JZ 0x7fffa52265d0 }
    /* +0xab603b */ __asm { LEA RAX,[0x7fffa586df6f] }
    /* +0xab6042 */ __asm { LEA R9,[0x7fffa477a7f4] }
    /* +0xab6049 */ __asm { MOV R8D,0x111fd292 }
    /* +0xab604f */ __asm { ADD R8D,0xeedf62b7 }
    /* +0xab6056 */ __asm { MOVSXD RCX,R8D }
    /* +0xab6059 */ __asm { ADD RCX,RAX }
    /* +0xab605c */ __asm { SUB RCX,qword ptr [R11 + 0x231b] }
    /* +0xab6063 */ __asm { MOV RDX,-0x7f01fc07f01fc07f }
    /* +0xab606d */ __asm { IMUL RDX,RCX }
    /* +0xab6071 */ __asm { BSWAP RDX }
    /* +0xab6074 */ __asm { MOV RAX,RDX }
    /* +0xab6077 */ __asm { SHR RAX,0x4 }
    /* +0xab607b */ __asm { MOV R11,0xf0f0f0f0f0f0f0f }
    /* +0xab6085 */ __asm { AND RAX,R11 }
    /* +0xab6088 */ __asm { AND RDX,R11 }
    /* +0xab608b */ __asm { SHL RDX,0x4 }
    /* +0xab608f */ __asm { OR RDX,RAX }
    /* +0xab6092 */ __asm { MOV RAX,0x3333333333333333 }
    /* +0xab609c */ __asm { MOV R10,RDX }
    /* +0xab609f */ __asm { AND R10,RAX }
    /* +0xab60a2 */ __asm { SHR RDX,0x2 }
    /* +0xab60a6 */ __asm { AND RDX,RAX }
    /* +0xab60a9 */ __asm { LEA RDX,[RDX + R10*0x4] }
    /* +0xab60ad */ __asm { MOV RCX,0x5555555555555555 }
    /* +0xab60b7 */ __asm { MOV R10,RDX }
    /* +0xab60ba */ __asm { AND R10,RCX }
    /* +0xab60bd */ __asm { SHR RDX,0x1 }
    /* +0xab60c0 */ __asm { AND RDX,RCX }
    /* +0xab60c3 */ __asm { MOV R8,0x56d0b2d94cb580ef }
    /* +0xab60cd */ __asm { LEA RDX,[RDX + R10*0x2] }
    /* +0xab60d1 */ __asm { CMP R9,R8 }
    /* +0xab60d4 */ __asm { JNZ 0x7fffa52260da }
    /* +0xab60d6 */ __asm { LOOPNZ 0x7fffa52260b5 }
    /* +0xab60d8 */ __asm { XCHG EAX,EDX }
    /* +0xab60d9 */ __asm { XCHG EAX,ESP }
    /* +0xab60da */ __asm { LEA R8,[0x7fffa4787058] }
    /* +0xab60e1 */ __asm { SUB RDX,qword ptr [R9 + 0x685c] }
    /* +0xab60e8 */ __asm { MOV R9,0x629f2eeb814004c1 }
    /* +0xab60f2 */ __asm { CMP R8,R9 }
    /* +0xab60f5 */ __asm { NOP }
    /* +0xab60f6 */ __asm { NOP }
    /* +0xab60f7 */ __asm { NOP }
    /* +0xab60f8 */ __asm { NOP }
    /* +0xab60f9 */ __asm { NOP }
    /* +0xab60fa */ __asm { NOP }
    /* +0xab60fb */ __asm { NOP }
    /* +0xab60fc */ __asm { NOP }
    /* +0xab60fd */ __asm { NOP }
    /* +0xab60fe */ __asm { NOP }
    /* +0xab60ff */ __asm { NOP }
    /* +0xab6100 */ __asm { NOP }
    /* +0xab6101 */ __asm { NOP }
    /* +0xab6102 */ __asm { NOP }
    /* +0xab6103 */ __asm { NOP }
    /* +0xab6104 */ __asm { MOV R9W,0x304b }
    /* +0xab6109 */ __asm { ADD R9D,0x6e10 }
    /* +0xab6110 */ __asm { MOVSX R10,R9W }
    /* +0xab6114 */ __asm { LEA RDI,[0x7fffa478b1dd] }
    /* +0xab611b */ __asm { IMUL RBP,R8,-0x5bc0 }
    /* +0xab6122 */ __asm { MOV R12D,0x5b17aeb7 }
    /* +0xab6128 */ __asm { ADD R12D,0xce0d5b74 }
    /* +0xab612f */ __asm { MOV R9D,0x28bf491d }
    /* +0xab6135 */ __asm { IMUL EBX,R9D,0x753cfd53 }
    /* +0xab613c */ __asm { XOR EBX,0xd6f3b39e }
    /* +0xab6142 */ __asm { LEA R9,[0x7fffa4782045] }
    /* +0xab6149 */ __asm { ADD R8,-0x5bc0 }
    /* +0xab6150 */ __asm { CMP RBX,R12 }
    /* +0xab6153 */ __asm { MOVQ XMM2,RDX }
    /* +0xab6158 */ __asm { CMOVLE R8,RBP }
    /* +0xab615c */ __asm { MOV RDX,0x2dd0e00ca6c08478 }
    /* +0xab6166 */ __asm { MOVQ XMM3,qword ptr [R8] }
    /* +0xab616b */ __asm { PXOR XMM3,XMM2 }
    /* +0xab616f */ __asm { MOVQ qword ptr [RDI + R10*0x1],XMM3 }
    /* +0xab6175 */ __asm { CMP R9,RDX }
    /* +0xab6178 */ __asm { NOP }
    /* +0xab6179 */ __asm { NOP }
    /* +0xab617a */ __asm { NOP }
    /* +0xab617b */ __asm { NOP }
    /* +0xab617c */ __asm { NOP }
    /* +0xab617d */ __asm { MOV R10D,0x36dfb39c }
    /* +0xab6183 */ __asm { ADD R10D,0x28007b63 }
    /* +0xab618a */ __asm { MOV EBP,0x1df38f70 }
    /* +0xab618f */ __asm { LEA R8,[0x7fffa47855cf] }
    /* +0xab6196 */ __asm { XOR EDX,EDX }
    /* +0xab6198 */ __asm { SUB RDX,qword ptr [R9 + -0xcfd] }
    /* +0xab619f */ __asm { MOV R9,RDX }
    /* +0xab61a2 */ __asm { SHR R9,0x7 }
    /* +0xab61a6 */ __asm { XOR R9,RDX }
    /* +0xab61a9 */ __asm { MOVQ XMM2,R9 }
    /* +0xab61ae */ __asm { MOVDQA XMM3,XMM2 }
    /* +0xab61b2 */ __asm { PSRLQ XMM3,0xe }
    /* +0xab61b7 */ __asm { MOVQ RDI,XMM3 }
    /* +0xab61bc */ __asm { IMUL RDI,R9 }
    /* +0xab61c0 */ __asm { SHR R9,0x38 }
    /* +0xab61c4 */ __asm { PXOR XMM3,XMM2 }
    /* +0xab61c8 */ __asm { MOVQ RDX,XMM3 }
    /* +0xab61cd */ __asm { XOR EBP,0x4824df0b }
    /* +0xab61d3 */ __asm { CMP RBP,R10 }
    /* +0xab61d6 */ __asm { CMOVGE RDX,RDI }
    /* +0xab61da */ __asm { XOR R9,RDX }
    /* +0xab61dd */ __asm { SHR RDX,0x1c }
    /* +0xab61e1 */ __asm { XOR RDX,R9 }
    /* +0xab61e4 */ __asm { MOV R9,0x3c50ab10a6c44ac5 }
    /* +0xab61ee */ __asm { CMP R8,R9 }
    /* +0xab61f1 */ __asm { JNZ 0x7fffa52261fa }
    /* +0xab61f3 */ __asm { JO 0x7fffa522618e }
    /* +0xab61f5 */ __asm { NOP }
    /* +0xab61f6 */ __asm { NOP }
    /* +0xab61f7 */ __asm { NOP }
    /* +0xab61f8 */ __asm { NOP }
    /* +0xab61f9 */ __asm { NOP }
    /* +0xab61fa */ __asm { NOP }
    /* +0xab61fb */ __asm { NOP }
    /* +0xab61fc */ __asm { NOP }
    /* +0xab61fd */ __asm { NOP }
    /* +0xab61fe */ __asm { NOP }
    /* +0xab61ff */ __asm { PUSH RBP }
    /* +0xab6200 */ __asm { DEC dword ptr [RCX + 0x3] }
    /* +0xab6203 */ __asm { NOP }
    /* +0xab6204 */ __asm { FNSTCW word ptr [RSI + -0x46b60001] }
    /* +0xab620a */ __asm { PUSH RBX }
    /* +0xab620b */ __asm { INSD RDI,DX }
    /* +0xab620d */ __asm { SAR EDX,0x1 }
    /* +0xab620f */ __asm { SUB EAX,0xf486de3 }
    /* +0xab6214 */ __asm { RETF 0x394d }
    /* +0xab621e */ __asm { MOV R14D,0x9f751c0e }
    /* +0xab6224 */ __asm { MOV R9,0x7258bea7e760a52a }
    /* +0xab622e */ __asm { LEA R8,[0x7fffa478e205] }
    /* +0xab6235 */ __asm { MOV RBP,-0x70ca45901b1d2a49 }
    /* +0xab623f */ __asm { XOR RBP,0x314a0f3d }
    /* +0xab6246 */ __asm { ROL RBP,0xe }
    /* +0xab624a */ __asm { ADD RDX,qword ptr [R10 + 0x3d9c] }
    /* +0xab6251 */ __asm { LEA R12,[0x7fffa477d1d6] }
    /* +0xab6258 */ __asm { XOR R14D,0x44f9e3f1 }
    /* +0xab625f */ __asm { ROL R14D,0x12 }
    /* +0xab6263 */ __asm { MOVSXD RDI,R14D }
    /* +0xab6266 */ __asm { LEA R10,[0x7fffa4780548] }
    /* +0xab626d */ __asm { MOV RBX,R10 }
    /* +0xab6270 */ __asm { NOT RBX }
    /* +0xab6273 */ __asm { MOVQ XMM2,RBP }
    /* +0xab6278 */ __asm { MOVQ XMM3,RBX }
    /* +0xab627d */ __asm { MOV RBP,-0x3dfc3ac5c06764f3 }
    /* +0xab6287 */ __asm { SUB RBP,RDX }
    /* +0xab628a */ __asm { MOVDQA XMM4,XMM3 }
    /* +0xab628e */ __asm { PSRLQ XMM4,0x20 }
    /* +0xab6293 */ __asm { PMULUDQ XMM4,XMM2 }
    /* +0xab6297 */ __asm { MOVDQA XMM0,XMM2 }
    /* +0xab629b */ __asm { PSRLQ XMM0,0x20 }
    /* +0xab62a0 */ __asm { PMULUDQ XMM0,XMM3 }
    /* +0xab62a4 */ __asm { PADDQ XMM0,XMM4 }
    /* +0xab62a8 */ __asm { PSLLQ XMM0,0x20 }
    /* +0xab62ad */ __asm { PMULUDQ XMM2,XMM3 }
    /* +0xab62b1 */ __asm { PADDQ XMM2,XMM0 }
    /* +0xab62b5 */ __asm { MOVQ RSI,XMM2 }
    /* +0xab62ba */ __asm { MOV qword ptr [R8 + RDI*0x1 + 0x8],RBP }
    /* +0xab62bf */ __asm { MOV RDX,qword ptr [R12 + 0x3f0a] }
    /* +0xab62c7 */ __asm { ROL RDX,0x21 }
    /* +0xab62cb */ __asm { ADD R9,-0x23991143 }
    /* +0xab62d2 */ __asm { CMP R9,RSI }
    /* +0xab62d5 */ __asm { NOP }
    /* +0xab62d6 */ __asm { NOP }
    /* +0xab62d7 */ __asm { NOP }
    /* +0xab62d8 */ __asm { NOP }
    /* +0xab62d9 */ __asm { NOP }
    /* +0xab62da */ __asm { LEA R8,[0x7fffa477b6bb] }
    /* +0xab62e1 */ __asm { MOV R9,0x0 }
    /* +0xab62e8 */ __asm { NOP }
    /* +0xab62ea */ __asm { LEA R12,[0x7fffa4770000] }
    /* +0xab62f1 */ __asm { SUB RDX,qword ptr [R10 + 0xaf0] }
    /* +0xab62f8 */ __asm { MOV R9,RDX }
    /* +0xab62fb */ __asm { SHL R9,0x13 }
    /* +0xab62ff */ __asm { XOR R9,RDX }
    /* +0xab6302 */ __asm { MOVQ XMM2,R9 }
    /* +0xab6307 */ __asm { LEA RDX,[0x7fffa478f4dd] }
    /* +0xab630e */ __asm { MOV R9D,0x32c0f8dc }
    /* +0xab6314 */ __asm { ADD R9D,0xcd3e627f }
    /* +0xab631b */ __asm { MOVSXD R9,R9D }
    /* +0xab631e */ __asm { MOVDQA XMM3,XMM2 }
    /* +0xab6322 */ __asm { PSLLQ XMM3,0x26 }
    /* +0xab6327 */ __asm { PXOR XMM3,XMM2 }
    /* +0xab632b */ __asm { MOVQ R10,XMM3 }
    /* +0xab6330 */ __asm { MOV RDI,0x400000800001 }
    /* +0xab633a */ __asm { IMUL RDI,R10 }
    /* +0xab633e */ __asm { MOV R10,-0xd51008fc3cb0cd3 }
    /* +0xab6348 */ __asm { MOV qword ptr [RDX + R9*0x1 + 0x10],RDI }
    /* +0xab634d */ __asm { CMP R8,R10 }
    /* +0xab6350 */ __asm { JZ 0x7fffa52265eb }
    /* +0xab6356 */ __asm { LEA R9,[0x7fffa47869a6] }
    /* +0xab635d */ __asm { MOV R10,R9 }
    /* +0xab6360 */ __asm { ROL R10,0x34 }
    /* +0xab6364 */ __asm { ADD R10,0x7206d75a }
    /* +0xab636b */ __asm { MOV RDX,0x1bed008ec16c7e01 }
    /* +0xab6375 */ __asm { ADD RDX,qword ptr [R8 + 0x598d] }
    /* +0xab637c */ __asm { MOV R8,0x2524dd4c11890908 }
    /* +0xab6386 */ __asm { CMP R10,R8 }
    /* +0xab6389 */ __asm { JZ 0x7fffa522660a }
    /* +0xab638f */ __asm { MOV R10,0x43561c9a65788146 }
    /* +0xab6399 */ __asm { MOV R8W,0x88a2 }
    /* +0xab639e */ __asm { LEA RDI,[0x7fffa4794e8c] }
    /* +0xab63a5 */ __asm { MOV R14D,0xee9ddd6f }
    /* +0xab63ab */ __asm { LEA R8D,[R8 + R8*0x4] }
    /* +0xab63af */ __asm { MOVSX R8,R8W }
    /* +0xab63b3 */ __asm { XOR RDX,qword ptr [R9 + R8*0x1] }
    /* +0xab63b7 */ __asm { MOVQ XMM2,RDX }
    /* +0xab63bc */ __asm { LEA R9,[0x7fffa4784709] }
    /* +0xab63c3 */ __asm { XOR R14D,0x1162dcc3 }
    /* +0xab63ca */ __asm { XOR R10,0x4ff91257 }
    /* +0xab63d1 */ __asm { MOV RDX,0xe00bf4d4f894cc0 }
    /* +0xab63db */ __asm { MOVSXD R8,R14D }
    /* +0xab63de */ __asm { MOVQ XMM3,R10 }
    /* +0xab63e3 */ __asm { PADDQ XMM3,XMM2 }
    /* +0xab63e7 */ __asm { MOVQ qword ptr [RDI + R8*0x1 + 0x18],XMM3 }
    /* +0xab63ee */ __asm { CMP R9,RDX }
    /* +0xab63f1 */ __asm { JNZ 0x7fffa5226401 }
    /* +0xab63f3 */ __asm { SBB uint8_t ptr [RSI + -0x77],AH }
    /* +0xab63f6 */ __asm { ADD dword ptr [RBP + -0x3018b6d4],EDX }
    /* +0xab63fc */ __asm { SBB BL,AL }
    /* +0xab63fe */ __asm { CMP CH,AL }
    /* +0xab6401 */ __asm { LEA R8,[0x7fffa478166f] }
    /* +0xab6408 */ __asm { LEA RDX,[0x7fffa478789f] }
    /* +0xab640f */ __asm { LEA R12,[0x7fffa4770000] }
    /* +0xab6416 */ __asm { MOV R10,0x0 }
    /* +0xab641d */ __asm { NOP }
    /* +0xab641f */ __asm { MOV R10W,0xda5d }
    /* +0xab6424 */ __asm { MOV RDI,-0x6f5754af147e735c }
    /* +0xab642e */ __asm { ADD RDI,qword ptr [R9 + -0x3b91] }
    /* +0xab6435 */ __asm { ADD R10D,0xfffffd3c }
    /* +0xab643c */ __asm { MOV R9,-0x239c49c4643cd5ce }
    /* +0xab6446 */ __asm { MOVSX R10,R10W }
    /* +0xab644a */ __asm { MOVQ XMM2,RDI }
    /* +0xab644f */ __asm { MOVDQA XMM3,XMM2 }
    /* +0xab6453 */ __asm { PSLLQ XMM3,0x2e }
    /* +0xab6458 */ __asm { MOVDQA XMM4,XMM2 }
    /* +0xab645c */ __asm { PSLLQ XMM4,0x17 }
    /* +0xab6461 */ __asm { PXOR XMM4,XMM3 }
    /* +0xab6465 */ __asm { PXOR XMM4,XMM2 }
    /* +0xab6469 */ __asm { MOVQ qword ptr [RDX + R10*0x1 + 0x20],XMM4 }
    /* +0xab6470 */ __asm { CMP R8,R9 }
    /* +0xab6473 */ __asm { JZ 0x7fffa522661b }
    /* +0xab6479 */ __asm { MOV R9D,0xd924d31 }
    /* +0xab647f */ __asm { LEA RSI,[0x7fffa578cccc] }
    /* +0xab6486 */ __asm { IMUL R10D,R9D,0x62b9a3fb }
    /* +0xab648d */ __asm { NOP }
    /* +0xab648e */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xab6495 */ __asm { MOV R9,0x0 }
    /* +0xab649c */ __asm { NOT R10D }
    /* +0xab649f */ __asm { MOV R14D,0xfa730e4c }
    /* +0xab64a5 */ __asm { MOV RBP,-0x436987dbc85a1d3a }
    /* +0xab64af */ __asm { LEA R9,[0x7fffa4790c73] }
    /* +0xab64b6 */ __asm { LEA RDX,[0x7fffa4791a22] }
    /* +0xab64bd */ __asm { LEA R15,[0x7fffa56fd0b0] }
    /* +0xab64c4 */ __asm { MOV RDI,-0x1ede839a8d12090d }
    /* +0xab64ce */ __asm { XOR RDI,R15 }
    /* +0xab64d1 */ __asm { BSWAP RDI }
    /* +0xab64d4 */ __asm { LEA R15,[0x7fffa478516e] }
    /* +0xab64db */ __asm { SUB RDI,qword ptr [R8 + -0x34f] }
    /* +0xab64e2 */ __asm { MOVSXD R8,R10D }
    /* +0xab64e5 */ __asm { MOV R10,-0x66147e98899e4362 }
    /* +0xab64ef */ __asm { ADD R10,RSI }
    /* +0xab64f2 */ __asm { ADD R10,R8 }
    /* +0xab64f5 */ __asm { ADD R14D,0x58c27ca }
    /* +0xab64fc */ __asm { MOVSXD R8,R14D }
    /* +0xab64ff */ __asm { ADD RBP,-0x402ba50a }
    /* +0xab6506 */ __asm { MOV R13W,0xc396 }
    /* +0xab650b */ __asm { MOVSX RBX,R13W }
    /* +0xab650f */ __asm { XOR RBX,0x3d5c }
    /* +0xab6516 */ __asm { MOV qword ptr [R15 + RBX*0x1 + 0x38],RBP }
    /* +0xab651b */ __asm { MOV R14D,0x75ebec6 }
    /* +0xab6521 */ __asm { BSWAP RDI }
    /* +0xab6524 */ __asm { IMUL R14D,R14D,-0x5ec47b81 }
    /* +0xab652b */ __asm { MOV RBP,RDI }
    /* +0xab652e */ __asm { SHR RBP,0x4 }
    /* +0xab6532 */ __asm { AND RBP,R11 }
    /* +0xab6535 */ __asm { AND RDI,R11 }
    /* +0xab6538 */ __asm { SHL RDI,0x4 }
    /* +0xab653c */ __asm { OR RDI,RBP }
    /* +0xab653f */ __asm { MOV R11,RDI }
    /* +0xab6542 */ __asm { AND R11,RAX }
    /* +0xab6545 */ __asm { SHR RDI,0x2 }
    /* +0xab6549 */ __asm { AND RDI,RAX }
    /* +0xab654c */ __asm { LEA RAX,[RDI + R11*0x4] }
    /* +0xab6550 */ __asm { MOV R11,RAX }
    /* +0xab6553 */ __asm { AND R11,RCX }
    /* +0xab6556 */ __asm { SHR RAX,0x1 }
    /* +0xab6559 */ __asm { AND RAX,RCX }
    /* +0xab655c */ __asm { LEA RAX,[RAX + R11*0x2] }
    /* +0xab6560 */ __asm { MOV R11,RAX }
    /* +0xab6563 */ __asm { ROL R11,0xf }
    /* +0xab6567 */ __asm { NOT R14D }
    /* +0xab656a */ __asm { MOVQ XMM2,RAX }
    /* +0xab656f */ __asm { ROL RAX,0x7 }
    /* +0xab6573 */ __asm { MOVQ XMM3,R11 }
    /* +0xab6578 */ __asm { MOVQ XMM4,RAX }
    /* +0xab657d */ __asm { PXOR XMM4,XMM3 }
    /* +0xab6581 */ __asm { PXOR XMM4,XMM2 }
    /* +0xab6585 */ __asm { MOVQ RAX,XMM4 }
    /* +0xab658a */ __asm { MOV R11,RAX }
    /* +0xab658d */ __asm { ROL R11,0xe }
    /* +0xab6591 */ __asm { MOV RCX,RAX }
    /* +0xab6594 */ __asm { ROL RCX,0x1e }
    /* +0xab6598 */ __asm { XOR RCX,R11 }
    /* +0xab659b */ __asm { XOR RCX,RAX }
    /* +0xab659e */ __asm { MOV RAX,RCX }
    /* +0xab65a1 */ __asm { ROL RAX,0x3c }
    /* +0xab65a5 */ __asm { MOVSXD R11,R14D }
    /* +0xab65a8 */ __asm { MOV RDI,RCX }
    /* +0xab65ab */ __asm { ROL RDI,0x1c }
    /* +0xab65af */ __asm { MOV qword ptr [R9 + R11*0x1 + 0x30],R10 }
    /* +0xab65b4 */ __asm { XOR RDI,RAX }
    /* +0xab65b7 */ __asm { XOR RDI,RCX }
    /* +0xab65ba */ __asm { MOV qword ptr [RDX + R8*0x1 + 0x28],RDI }
    /* +0xab65bf */ __asm { ADD RSP,0x18 }
    /* +0xab65c3 */ __asm { POP RBX }
    /* +0xab65c4 */ __asm { POP RSI }
    /* +0xab65c5 */ __asm { POP R13 }
    /* +0xab65c7 */ __asm { POP RBP }
    /* +0xab65c8 */ __asm { POP R12 }
    /* +0xab65ca */ __asm { POP RDI }
    /* +0xab65cb */ __asm { POP R15 }
    /* +0xab65cd */ __asm { POP R14 }
    /* +0xab65cf */ __asm { RET }
    /* +0xab65d0 */ __asm { MOV RAX,0x1e9ebefffffa63e9 }
    /* +0xab65db */ __asm { SBB EAX,0xb67ed469 }
    /* +0xab65e0 */ __asm { SBB dword ptr [RCX + 0xc0dd293],EAX }
    /* +0xab65e6 */ __asm { JMP 0x7fffa522621e }
    /* +0xab65eb */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xab65f2 */ __asm { NOP }
    /* +0xab65f3 */ __asm { MOV R9,0x0 }
    /* +0xab65fa */ __asm { PUSH RDX }
    /* +0xab65fb */ __asm { FISTTP dword ptr [RBX + 0x7aa605c1] }
    /* +0xab6601 */ __asm { MOV RBX,-0x46000002b3161c24 }
    /* +0xab661b */ __asm { MOV R9,0x0 }
    /* +0xab6622 */ __asm { NOP }
    /* +0xab6623 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xab662a */ __asm { JO 0x7fffa52265f7 }
    /* +0xab662d */ __asm { ADC AL,0x77 }
    /* +0xab662f */ __asm { CMP dword ptr FS:[RDX],EAX }
    /* +0xab6632 */ __asm { PUSH -0x54 }
    /* +0xab6634 */ __asm { JMP 0x7fffa5226479 }
}


// ============================================================================
// Function : FUN_7fffa5226640  |  RVA: 0xab6640  |  Size: 580 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5226640(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47bb217 = 0;
  uRam00007fffa47bb228 = 0;
  uRam00007fffa47bb230 = 0;
  uRam00007fffa47bb238 = 0;
  uRam00007fffa47bb247 = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x499f2b66121e977 + 0xb;
  lVar5 = 2;
  while( true ) {
    lVar4 = lVar3 * 0x499f2b66121e977 + 0xb;
    lVar3 = lVar4 * 0x499f2b66121e977 + 0xb;
    *(char *)(lVar5 + 0x7fffa47bb20f) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x499f2b66121e977 + 0xb;
    *(char *)(lVar5 + 0x7fffa47bb210) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar5 + 0x7fffa47bb20e) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar5 == 0x3e) break;
    lVar5 = lVar5 + 3;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bb217 * 0x33333334 + 0x33333334) * 5;
  *(uint32_t *)((uVar2 >> 0x20) * 4 + 0x7fffa47bb228) = uRam00007fffa47bb247 ^ 0x4877e6f6;
  bRam00007fffa47bb217 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5226890  |  RVA: 0xab6890  |  Size: 214 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5226890(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa5226970  |  RVA: 0xab6970  |  Size: 103130 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5226970(void) {
    /* +0xab6970 */ __asm { PUSH RBP }
    /* +0xab6971 */ __asm { PUSH RSI }
    /* +0xab6972 */ __asm { PUSH R13 }
    /* +0xab6974 */ __asm { PUSH RBX }
    /* +0xab6975 */ __asm { PUSH RDI }
    /* +0xab6976 */ __asm { PUSH R15 }
    /* +0xab6978 */ __asm { PUSH R12 }
    /* +0xab697a */ __asm { PUSH R14 }
    /* +0xab697c */ __asm { SUB RSP,0x518 }
    /* +0xab6983 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xab698b */ __asm { MOVAPS xmmword ptr [RBP + 0x480],XMM9 }
    /* +0xab6993 */ __asm { MOVDQA xmmword ptr [RBP + 0x470],XMM15 }
    /* +0xab699c */ __asm { MOVDQA xmmword ptr [RBP + 0x460],XMM7 }
    /* +0xab69a4 */ __asm { MOVDQA xmmword ptr [RBP + 0x450],XMM6 }
    /* +0xab69ac */ __asm { MOVAPS xmmword ptr [RBP + 0x440],XMM11 }
    /* +0xab69b4 */ __asm { MOVAPS xmmword ptr [RBP + 0x430],XMM10 }
    /* +0xab69bc */ __asm { MOVDQA xmmword ptr [RBP + 0x420],XMM12 }
    /* +0xab69c5 */ __asm { MOVAPS xmmword ptr [RBP + 0x410],XMM8 }
    /* +0xab69cd */ __asm { MOVDQA xmmword ptr [RBP + 0x400],XMM14 }
    /* +0xab69d6 */ __asm { MOVDQA xmmword ptr [RBP + 0x3f0],XMM13 }
    /* +0xab69df */ __asm { MOV qword ptr [RBP + 0x3e8],-0x2 }
    /* +0xab69ea */ __asm { MOV RSI,R11 }
    /* +0xab69ed */ __asm { MOV R11,RAX }
    /* +0xab69f0 */ __asm { SHL R11,0x34 }
    /* +0xab69f4 */ __asm { MOV R10D,0x645ddef }
    /* +0xab69fa */ __asm { ADD R10D,0x69917ac }
    /* +0xab6a01 */ __asm { MOV R13D,ESI }
    /* +0xab6a04 */ __asm { OR R13D,0x1 }
    /* +0xab6a08 */ __asm { IMUL R10D,R13D }
    /* +0xab6a0c */ __asm { ROL R10D,0x15 }
    /* +0xab6a10 */ __asm { MOVSXD R10,R10D }
    /* +0xab6a13 */ __asm { MOV RDX,RAX }
    /* +0xab6a16 */ __asm { SHL RDX,0x1a }
    /* +0xab6a1a */ __asm { XOR RDX,R11 }
    /* +0xab6a1d */ __asm { XOR RDX,RAX }
    /* +0xab6a20 */ __asm { MOV RAX,RDX }
    /* +0xab6a23 */ __asm { ROL RAX,0x38 }
    /* +0xab6a27 */ __asm { MOV R11,RDX }
    /* +0xab6a2a */ __asm { ROL R11,0x14 }
    /* +0xab6a2e */ __asm { XOR R11,RAX }
    /* +0xab6a31 */ __asm { XOR R11,RDX }
    /* +0xab6a34 */ __asm { MOV RAX,R11 }
    /* +0xab6a37 */ __asm { ROL RAX,0x28 }
    /* +0xab6a3b */ __asm { MOV RDX,R11 }
    /* +0xab6a3e */ __asm { ROL RDX,0x30 }
    /* +0xab6a42 */ __asm { XOR RDX,RAX }
    /* +0xab6a45 */ __asm { XOR RDX,R11 }
    /* +0xab6a48 */ __asm { MOV R11,RDX }
    /* +0xab6a4b */ __asm { ROL R11,0x10 }
    /* +0xab6a4f */ __asm { MOV RAX,RDX }
    /* +0xab6a52 */ __asm { ROL RAX,0x20 }
    /* +0xab6a56 */ __asm { XOR RAX,R11 }
    /* +0xab6a59 */ __asm { XOR RAX,RDX }
    /* +0xab6a5c */ __asm { MOV RDX,RAX }
    /* +0xab6a5f */ __asm { ROL RDX,0x20 }
    /* +0xab6a63 */ __asm { MOV R11,RAX }
    /* +0xab6a66 */ __asm { ROL R11,0x5 }
    /* +0xab6a6a */ __asm { ROL RAX,0x33 }
    /* +0xab6a6e */ __asm { XOR RAX,R11 }
    /* +0xab6a71 */ __asm { MOV qword ptr [RBP + 0x2e0],RDX }
    /* +0xab6a78 */ __asm { XOR RAX,RDX }
    /* +0xab6a7b */ __asm { MOV R11,RAX }
    /* +0xab6a7e */ __asm { ROL R11,0xa }
    /* +0xab6a82 */ __asm { MOV RDX,R11 }
    /* +0xab6a85 */ __asm { AND RDX,RAX }
    /* +0xab6a88 */ __asm { XOR R11,RAX }
    /* +0xab6a8b */ __asm { ROL RAX,0x26 }
    /* +0xab6a8f */ __asm { CMP R10,-0x942267d }
    /* +0xab6a96 */ __asm { CMOVNZ R11,RDX }
    /* +0xab6a9a */ __asm { XOR R11,RAX }
    /* +0xab6a9d */ __asm { MOV RAX,R11 }
    /* +0xab6aa0 */ __asm { ROL RAX,0x14 }
    /* +0xab6aa4 */ __asm { MOV R10,R11 }
    /* +0xab6aa7 */ __asm { ROL R10,0xc }
    /* +0xab6aab */ __asm { XOR R10,RAX }
    /* +0xab6aae */ __asm { XOR R10,R11 }
    /* +0xab6ab1 */ __asm { MOV RAX,R10 }
    /* +0xab6ab4 */ __asm { ROL RAX,0x18 }
    /* +0xab6ab8 */ __asm { MOV R11,R10 }
    /* +0xab6abb */ __asm { ROL R11,0x28 }
    /* +0xab6abf */ __asm { XOR R11,RAX }
    /* +0xab6ac2 */ __asm { XOR R11,R10 }
    /* +0xab6ac5 */ __asm { MOV RAX,R11 }
    /* +0xab6ac8 */ __asm { ROL RAX,0x10 }
    /* +0xab6acc */ __asm { MOV R10,R11 }
    /* +0xab6acf */ __asm { ROL R10,0x30 }
    /* +0xab6ad3 */ __asm { XOR R10,RAX }
    /* +0xab6ad6 */ __asm { XOR R10,R11 }
    /* +0xab6ad9 */ __asm { MOV qword ptr [RBP + 0x208],R10 }
    /* +0xab6ae0 */ __asm { MOV dword ptr [RBP + 0x240],0x7de9bca4 }
    /* +0xab6aea */ __asm { MOV R10D,dword ptr [RBP + 0x240] }
    /* +0xab6af1 */ __asm { TEST R10D,R10D }
    /* +0xab6af4 */ __asm { NOP }
    /* +0xab6af5 */ __asm { NOP }
    /* +0xab6af6 */ __asm { NOP }
    /* +0xab6af7 */ __asm { NOP }
    /* +0xab6af8 */ __asm { NOP }
    /* +0xab6af9 */ __asm { PUSHFQ }
    /* +0xab6afa */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xab6b02 */ __asm { POPFQ }
    /* +0xab6b03 */ __asm { MOV R10D,0x4890bee2 }
    /* +0xab6b09 */ __asm { IMUL R10D,R10D,-0x1e851f95 }
    /* +0xab6b10 */ __asm { ADD R10D,ESI }
    /* +0xab6b13 */ __asm { MOV EDX,0xa571a13d }
    /* +0xab6b18 */ __asm { SUB EDX,ESI }
    /* +0xab6b1a */ __asm { LEA R9,[0x7fffa47cb886] }
    /* +0xab6b21 */ __asm { LEA RAX,[0x7fffa47c8e83] }
    /* +0xab6b28 */ __asm { LEA R11,[0x7fffa47cbe50] }
    /* +0xab6b2f */ __asm { MOV R8D,0x8a6a42b4 }
    /* +0xab6b35 */ __asm { ADD R8D,0x7707d4c8 }
    /* +0xab6b3c */ __asm { MOV ECX,ESI }
    /* +0xab6b3e */ __asm { ROR R8D,CL }
    /* +0xab6b41 */ __asm { ROL EDX,0x9 }
    /* +0xab6b44 */ __asm { ROL R8D,0xd }
    /* +0xab6b48 */ __asm { ADD EDX,0xa8367eed }
    /* +0xab6b4e */ __asm { CMP R8,0xdd556e4 }
    /* +0xab6b55 */ __asm { SETZ R8B }
    /* +0xab6b59 */ __asm { MOVSXD RDX,EDX }
    /* +0xab6b5c */ __asm { MOVZX EDX,uint8_t ptr [R9 + RDX*0x1 + 0x6] }
    /* +0xab6b62 */ __asm { MOV ECX,0xbbe63412 }
    /* +0xab6b67 */ __asm { IMUL ECX,R13D }
    /* +0xab6b6b */ __asm { ROR ECX,0x1 }
    /* +0xab6b6d */ __asm { NOT ECX }
    /* +0xab6b6f */ __asm { MOVSXD RCX,ECX }
    /* +0xab6b72 */ __asm { MOV R11,qword ptr [R11 + RCX*0x1 + 0x3f] }
    /* +0xab6b77 */ __asm { MOVSXD R10,R10D }
    /* +0xab6b7a */ __asm { ADD R10,RAX }
    /* +0xab6b7d */ __asm { XOR R11,qword ptr [R10 + RDX*0x8 + 0x12] }
    /* +0xab6b82 */ __asm { MOVQ XMM1,R11 }
    /* +0xab6b87 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0xab6b8b */ __asm { PXOR XMM4,XMM1 }
    /* +0xab6b8f */ __asm { MOVDQA XMM1,XMM4 }
    /* +0xab6b93 */ __asm { PSRLW XMM1,0x1 }
    /* +0xab6b98 */ __asm { PAND XMM1,xmmword ptr [0x7fffa56b83f0] }
    /* +0xab6ba0 */ __asm { PSLLW XMM4,0x7 }
    /* +0xab6ba5 */ __asm { PAND XMM4,xmmword ptr [0x7fffa56b26b0] }
    /* +0xab6bad */ __asm { POR XMM4,XMM1 }
    /* +0xab6bb1 */ __asm { MOVQ qword ptr [RBP + 0x240],XMM4 }
    /* +0xab6bb9 */ __asm { MOV RDI,qword ptr [RBP + 0x240] }
    /* +0xab6bc0 */ __asm { MOV RAX,qword ptr [RDI + 0x7b8] }
    /* +0xab6bc7 */ __asm { TEST RAX,RAX }
    /* +0xab6bca */ __asm { SETZ R9B }
    /* +0xab6bce */ __asm { CMP R9B,R8B }
    /* +0xab6bd1 */ __asm { JNZ 0x7fffa5243cca }
    /* +0xab6bd7 */ __asm { MOV RDX,RAX }
    /* +0xab6bda */ __asm { MOVD XMM1,ESI }
    /* +0xab6bde */ __asm { MOVDQA xmmword ptr [RBP + 0x330],XMM1 }
    /* +0xab6be6 */ __asm { AND RDX,0x3f }
    /* +0xab6bea */ __asm { MOV qword ptr [RBP],RSI }
    /* +0xab6bee */ __asm { MOV qword ptr [RBP + 0x388],R13 }
    /* +0xab6bf5 */ __asm { MOV qword ptr [RBP + 0x100],RDI }
    /* +0xab6bfc */ __asm { JZ 0x7fffa5226c90 }
    /* +0xab6c02 */ __asm { XOR R10D,R10D }
    /* +0xab6c05 */ __asm { MOV R11,qword ptr [RBP + 0x208] }
    /* +0xab6c0c */ __asm { CMP R10,0x2d0 }
    /* +0xab6c13 */ __asm { JZ 0x7fffa522c0c3 }
    /* +0xab6c19 */ __asm { NOP dword ptr [RAX] }
    /* +0xab6c20 */ __asm { MOVZX R8D,uint8_t ptr [R11 + R10*0x1 + 0x80d0c3c] }
    /* +0xab6c29 */ __asm { INC RAX }
    /* +0xab6c2c */ __asm { XOR R8B,uint8_t ptr [RDI + RDX*0x1] }
    /* +0xab6c30 */ __asm { MOV qword ptr [RDI + 0x7b8],RAX }
    /* +0xab6c37 */ __asm { MOV uint8_t ptr [R11 + R10*0x1 + 0x80d0c3c],R8B }
    /* +0xab6c3f */ __asm { MOV RAX,qword ptr [RDI + 0x7b8] }
    /* +0xab6c46 */ __asm { MOV RDX,RAX }
    /* +0xab6c49 */ __asm { AND RDX,0x3f }
    /* +0xab6c4d */ __asm { JZ 0x7fffa5226ca9 }
    /* +0xab6c4f */ __asm { MOVZX R8D,uint8_t ptr [RDI + RDX*0x1] }
    /* +0xab6c54 */ __asm { XOR R8B,uint8_t ptr [R11 + R10*0x1 + 0x80d0c3d] }
    /* +0xab6c5c */ __asm { INC RAX }
    /* +0xab6c5f */ __asm { MOV qword ptr [RDI + 0x7b8],RAX }
    /* +0xab6c66 */ __asm { MOV uint8_t ptr [R11 + R10*0x1 + 0x80d0c3d],R8B }
    /* +0xab6c6e */ __asm { MOV RAX,qword ptr [RDI + 0x7b8] }
    /* +0xab6c75 */ __asm { MOV RDX,RAX }
    /* +0xab6c78 */ __asm { AND RDX,0x3f }
    /* +0xab6c7c */ __asm { JZ 0x7fffa5226cbe }
    /* +0xab6c7e */ __asm { ADD R10,0x2 }
    /* +0xab6c82 */ __asm { CMP R10,0x2d0 }
    /* +0xab6c89 */ __asm { JNZ 0x7fffa5226c20 }
    /* +0xab6c8b */ __asm { JMP 0x7fffa522c0c3 }
    /* +0xab6c90 */ __asm { MOV RAX,qword ptr [RBP + 0x208] }
    /* +0xab6c97 */ __asm { LEA R10,[RAX + 0x80d0c3c] }
    /* +0xab6c9e */ __asm { MOV R9D,0x2d0 }
    /* +0xab6ca4 */ __asm { JMP 0x7fffa522951a }
    /* +0xab6ca9 */ __asm { MOV R9D,0x2cf }
    /* +0xab6caf */ __asm { SUB R9,R10 }
    /* +0xab6cb2 */ __asm { ADD R10,R11 }
    /* +0xab6cb5 */ __asm { ADD R10,0x80d0c3d }
    /* +0xab6cbc */ __asm { JMP 0x7fffa5226cd8 }
    /* +0xab6cbe */ __asm { MOV R9D,0x2ce }
    /* +0xab6cc4 */ __asm { SUB R9,R10 }
    /* +0xab6cc7 */ __asm { MOV R11,qword ptr [RBP + 0x208] }
    /* +0xab6cce */ __asm { ADD R10,R11 }
    /* +0xab6cd1 */ __asm { ADD R10,0x80d0c3e }
    /* +0xab6cd8 */ __asm { MOVZX EDX,uint8_t ptr [RDI + 0xd0] }
    /* +0xab6cdf */ __asm { MOVQ XMM1,RAX }
    /* +0xab6ce4 */ __asm { TEST RDX,RDX }
    /* +0xab6ce7 */ __asm { MOV qword ptr [RBP + 0x370],R9 }
    /* +0xab6cee */ __asm { MOVDQA xmmword ptr [RBP + 0x3d0],XMM1 }
    /* +0xab6cf6 */ __asm { JZ 0x7fffa5226d71 }
    /* +0xab6cf8 */ __asm { MOVZX EBX,uint8_t ptr [RDI + 0xc8] }
    /* +0xab6cff */ __asm { MOVZX R14D,uint8_t ptr [RDI + 0xca] }
    /* +0xab6d07 */ __asm { MOVZX R8D,uint8_t ptr [RDI + 0xc9] }
    /* +0xab6d0f */ __asm { MOV ECX,R8D }
    /* +0xab6d12 */ __asm { SHL ECX,0x6 }
    /* +0xab6d15 */ __asm { OR RCX,RBX }
    /* +0xab6d18 */ __asm { JZ 0x7fffa5226e19 }
    /* +0xab6d1e */ __asm { TEST R8B,R8B }
    /* +0xab6d21 */ __asm { SETZ R8B }
    /* +0xab6d25 */ __asm { OR R8B,R14B }
    /* +0xab6d28 */ __asm { OR R8B,0x2 }
    /* +0xab6d2c */ __asm { MOV R15,qword ptr [RDI + 0x80] }
    /* +0xab6d33 */ __asm { OR R14B,0x4 }
    /* +0xab6d37 */ __asm { MOVUPS XMM15,xmmword ptr [RDI + 0x98] }
    /* +0xab6d3f */ __asm { MOVDQU XMM8,xmmword ptr [RDI + 0x40] }
    /* +0xab6d45 */ __asm { MOVDQU XMM14,xmmword ptr [RDI + 0x50] }
    /* +0xab6d4b */ __asm { MOVDQU XMM2,xmmword ptr [RDI + 0x60] }
    /* +0xab6d50 */ __asm { MOVDQU XMM5,xmmword ptr [RDI + 0x70] }
    /* +0xab6d55 */ __asm { MOVUPS XMM11,xmmword ptr [RDI + 0xa8] }
    /* +0xab6d5d */ __asm { MOVUPS XMM7,xmmword ptr [RDI + 0x88] }
    /* +0xab6d64 */ __asm { MOVDQU XMM6,xmmword ptr [RDI + 0xb8] }
    /* +0xab6d6c */ __asm { JMP 0x7fffa5226e77 }
    /* +0xab6d71 */ __asm { MOV R8D,0x847c3672 }
    /* +0xab6d77 */ __asm { ADD R8D,0x21dcc8f0 }
    /* +0xab6d7e */ __asm { IMUL R8D,R13D }
    /* +0xab6d82 */ __asm { MOVSXD RAX,R8D }
    /* +0xab6d85 */ __asm { MOV R8D,0xfe890b2f }
    /* +0xab6d8b */ __asm { ADD R8D,0x218a10c0 }
    /* +0xab6d92 */ __asm { ROL R8D,0x12 }
    /* +0xab6d96 */ __asm { SUB R8D,ESI }
    /* +0xab6d99 */ __asm { CMP R8,RAX }
    /* +0xab6d9c */ __asm { JGE 0x7fffa52286e2 }
    /* +0xab6da2 */ __asm { MOV R8D,0xa8bd3a12 }
    /* +0xab6da8 */ __asm { IMUL R8D,R8D,0x3ffffff9 }
    /* +0xab6daf */ __asm { ADD R8D,0x9d2a9942 }
    /* +0xab6db6 */ __asm { MOVDQU XMM1,xmmword ptr [RDI + 0x60] }
    /* +0xab6dbb */ __asm { MOVDQU XMM0,xmmword ptr [RDI + 0x70] }
    /* +0xab6dc0 */ __asm { MOVUPS XMM15,xmmword ptr [RDI + 0x88] }
    /* +0xab6dc8 */ __asm { MOVUPS XMM2,xmmword ptr [RDI + 0x98] }
    /* +0xab6dcf */ __asm { MOVSS XMM4,dword ptr [RDI + 0xc8] }
    /* +0xab6dd7 */ __asm { MOVAPS xmmword ptr [RBP + 0xc0],XMM4 }
    /* +0xab6dde */ __asm { MOVAPS XMM5,XMM15 }
    /* +0xab6de2 */ __asm { SHUFPS XMM5,XMM2,0x88 }
    /* +0xab6de6 */ __asm { MOVAPS XMM11,XMM2 }
    /* +0xab6dea */ __asm { SHUFPS XMM11,XMM15,0xa }
    /* +0xab6def */ __asm { MOVAPS xmmword ptr [RBP + 0x2a0],XMM2 }
    /* +0xab6df6 */ __asm { SHUFPS XMM15,XMM2,0xdd }
    /* +0xab6dfb */ __asm { MOVDQA XMM4,XMM0 }
    /* +0xab6dff */ __asm { MOVDQA xmmword ptr [RBP + 0x50],XMM1 }
    /* +0xab6e04 */ __asm { PADDD XMM4,XMM1 }
    /* +0xab6e08 */ __asm { PADDD XMM4,XMM5 }
    /* +0xab6e0c */ __asm { MOVDQA xmmword ptr [RBP + 0x3c0],XMM4 }
    /* +0xab6e14 */ __asm { JMP 0x7fffa522874e }
    /* +0xab6e19 */ __asm { MOVDQU XMM8,xmmword ptr [RDI + 0x40] }
    /* +0xab6e1f */ __asm { MOVDQU XMM14,xmmword ptr [RDI + 0x50] }
    /* +0xab6e25 */ __asm { OR R14B,0x4 }
    /* +0xab6e29 */ __asm { MOVZX EDX,DL }
    /* +0xab6e2c */ __asm { ADD RDX,-0x2 }
    /* +0xab6e30 */ __asm { MOV R8,RDX }
    /* +0xab6e33 */ __asm { SHL R8,0x5 }
    /* +0xab6e37 */ __asm { MOVUPS XMM7,xmmword ptr [RDI + R8*0x1 + 0xd1] }
    /* +0xab6e40 */ __asm { MOVUPS XMM15,xmmword ptr [RDI + R8*0x1 + 0xe1] }
    /* +0xab6e49 */ __asm { MOVUPS XMM11,xmmword ptr [RDI + R8*0x1 + 0xf1] }
    /* +0xab6e52 */ __asm { MOVDQU XMM6,xmmword ptr [RDI + R8*0x1 + 0x101] }
    /* +0xab6e5c */ __asm { TEST RDX,RDX }
    /* +0xab6e5f */ __asm { JZ 0x7fffa5227a4d }
    /* +0xab6e65 */ __asm { XOR R15D,R15D }
    /* +0xab6e68 */ __asm { MOV BL,0x40 }
    /* +0xab6e6a */ __asm { MOVDQA XMM5,XMM14 }
    /* +0xab6e6f */ __asm { MOVDQA XMM2,XMM8 }
    /* +0xab6e74 */ __asm { MOV R8D,R14D }
    /* +0xab6e77 */ __asm { MOV uint8_t ptr [RBP + 0x50],R14B }
    /* +0xab6e7b */ __asm { MOVDQA xmmword ptr [RBP + 0x1a0],XMM8 }
    /* +0xab6e84 */ __asm { MOVDQA xmmword ptr [RBP + 0x2b0],XMM14 }
    /* +0xab6e8d */ __asm { MOV R11D,0xb8644fb7 }
    /* +0xab6e93 */ __asm { LEA ECX,[RSI + R11*0x1] }
    /* +0xab6e97 */ __asm { ADD ECX,0xdcd5f42b }
    /* +0xab6e9d */ __asm { LEA RAX,[RDX + -0x1] }
    /* +0xab6ea1 */ __asm { MOV qword ptr [RBP + 0x280],RAX }
    /* +0xab6ea8 */ __asm { SHL RDX,0x5 }
    /* +0xab6eac */ __asm { ADD RDX,RCX }
    /* +0xab6eaf */ __asm { LEA RAX,[RDI + RDX*0x1] }
    /* +0xab6eb3 */ __asm { ADD RAX,-0x10 }
    /* +0xab6eb7 */ __asm { MOV qword ptr [RBP + 0x180],RAX }
    /* +0xab6ebe */ __asm { MOVAPS xmmword ptr [RBP + 0x310],XMM15 }
    /* +0xab6ec6 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xab6ed0 */ __asm { MOV R11D,0xa1c4cb9 }
    /* +0xab6ed6 */ __asm { MOV EAX,0x1f0339b6 }
    /* +0xab6edb */ __asm { MOV EDI,0x66ceb563 }
    /* +0xab6ee0 */ __asm { MOV ESI,0x78ddbc40 }
    /* +0xab6ee5 */ __asm { MOV EDX,0x2f90b689 }
    /* +0xab6eea */ __asm { ADD R11D,0xa78af7e6 }
    /* +0xab6ef1 */ __asm { IMUL R11D,R13D }
    /* +0xab6ef5 */ __asm { ADD EDX,0xc418cce4 }
    /* +0xab6efb */ __asm { MOV R12D,0xdc291e26 }
    /* +0xab6f01 */ __asm { XOR EAX,0x26e86de }
    /* +0xab6f06 */ __asm { MOV RCX,qword ptr [RBP] }
    /* +0xab6f0a */ __asm { SUB EAX,ECX }
    /* +0xab6f0c */ __asm { CDQE }
    /* +0xab6f0e */ __asm { ADD EDI,0xc8ca3ac1 }
    /* +0xab6f14 */ __asm { ROL EDI,0x1a }
    /* +0xab6f17 */ __asm { XOR EDI,ECX }
    /* +0xab6f19 */ __asm { ROL EDX,CL }
    /* +0xab6f1b */ __asm { MOV R9D,0x15d4b0a3 }
    /* +0xab6f21 */ __asm { XOR R9D,0xc93b4478 }
    /* +0xab6f28 */ __asm { ROR R9D,CL }
    /* +0xab6f2b */ __asm { ADD EDX,0xeb089b66 }
    /* +0xab6f31 */ __asm { MOV ECX,0x1e8c2c6f }
    /* +0xab6f36 */ __asm { SUB ECX,ESI }
    /* +0xab6f38 */ __asm { MOV R14D,0x501c6703 }
    /* +0xab6f3e */ __asm { MOV ESI,0x63dfb983 }
    /* +0xab6f43 */ __asm { MOVSXD RCX,ECX }
    /* +0xab6f46 */ __asm { CMP RDX,RAX }
    /* +0xab6f49 */ __asm { JLE 0x7fffa5226f60 }
    /* +0xab6f4b */ __asm { MOVDQA XMM3,XMM6 }
    /* +0xab6f4f */ __asm { PSLLQ XMM3,0x20 }
    /* +0xab6f54 */ __asm { JMP 0x7fffa5226f6d }
    /* +0xab6f60 */ __asm { PSHUFD XMM3,XMM6,0xa0 }
    /* +0xab6f65 */ __asm { PADDQ XMM3,xmmword ptr [0x7fffa56ba500] }
    /* +0xab6f6d */ __asm { MOVQ XMM1,R15 }
    /* +0xab6f72 */ __asm { MOVAPS XMM14,XMM7 }
    /* +0xab6f76 */ __asm { MOVAPS XMM0,xmmword ptr [RBP + 0x310] }
    /* +0xab6f7d */ __asm { SHUFPS XMM14,XMM0,0xdd }
    /* +0xab6f82 */ __asm { MOVAPS xmmword ptr [RBP + 0x120],XMM7 }
    /* +0xab6f89 */ __asm { SHUFPS XMM7,XMM0,0x88 }
    /* +0xab6f8d */ __asm { MOVAPS XMM8,XMM7 }
    /* +0xab6f91 */ __asm { SHUFPS XMM8,XMM14,0xd6 }
    /* +0xab6f96 */ __asm { MOVZX R8D,R8B }
    /* +0xab6f9a */ __asm { MOVZX EDX,BL }
    /* +0xab6f9d */ __asm { MOVD XMM4,EDX }
    /* +0xab6fa1 */ __asm { PINSRW XMM4,R8D,0x2 }
    /* +0xab6fa7 */ __asm { PUNPCKLQDQ XMM1,XMM4 }
    /* +0xab6fab */ __asm { PADDD XMM2,XMM5 }
    /* +0xab6faf */ __asm { MOVAPS XMM13,XMM7 }
    /* +0xab6fb3 */ __asm { PADDD XMM2,XMM7 }
    /* +0xab6fb7 */ __asm { PSHUFLW XMM4,XMM2,0xb1 }
    /* +0xab6fbc */ __asm { PSHUFHW XMM4,XMM4,0xb1 }
    /* +0xab6fc1 */ __asm { PSHUFLW XMM1,XMM1,0xb1 }
    /* +0xab6fc6 */ __asm { PSHUFHW XMM15,XMM1,0xb1 }
    /* +0xab6fcc */ __asm { PXOR XMM15,XMM4 }
    /* +0xab6fd1 */ __asm { MOVAPS XMM1,XMM11 }
    /* +0xab6fd5 */ __asm { SHUFPS XMM1,XMM0,0x13 }
    /* +0xab6fd9 */ __asm { PADDD XMM2,XMM14 }
    /* +0xab6fde */ __asm { MOVDQA XMM4,XMM15 }
    /* +0xab6fe3 */ __asm { PADDD XMM4,xmmword ptr [0x7fffa56b83a0] }
    /* +0xab6feb */ __asm { PXOR XMM5,XMM4 }
    /* +0xab6fef */ __asm { MOVDQA XMM0,XMM5 }
    /* +0xab6ff3 */ __asm { PSRLD XMM0,0xc }
    /* +0xab6ff8 */ __asm { PSLLD XMM5,0x14 }
    /* +0xab6ffd */ __asm { POR XMM5,XMM0 }
    /* +0xab7001 */ __asm { PADDD XMM2,XMM5 }
    /* +0xab7005 */ __asm { PXOR XMM15,XMM2 }
    /* +0xab700a */ __asm { MOVDQA XMM0,XMM15 }
    /* +0xab700f */ __asm { PSRLD XMM0,0x8 }
    /* +0xab7014 */ __asm { PSLLD XMM15,0x18 }
    /* +0xab701a */ __asm { POR XMM15,XMM0 }
    /* +0xab701f */ __asm { PADDD XMM4,XMM15 }
    /* +0xab7024 */ __asm { PSHUFD XMM10,XMM4,0x39 }
    /* +0xab702a */ __asm { PXOR XMM4,XMM5 }
    /* +0xab702e */ __asm { MOVDQA XMM5,XMM4 }
    /* +0xab7032 */ __asm { PSRLD XMM5,0x7 }
    /* +0xab7037 */ __asm { PSLLD XMM4,0x19 }
    /* +0xab703c */ __asm { POR XMM4,XMM5 }
    /* +0xab7040 */ __asm { MOVAPS XMM12,XMM11 }
    /* +0xab7044 */ __asm { SHUFPS XMM12,XMM6,0x88 }
    /* +0xab7049 */ __asm { MOVAPS XMM5,XMM11 }
    /* +0xab704d */ __asm { SHUFPS XMM5,XMM6,0x7d }
    /* +0xab7051 */ __asm { SHUFPS XMM5,XMM5,0xd2 }
    /* +0xab7055 */ __asm { MOVAPS XMM7,XMM5 }
    /* +0xab7058 */ __asm { MOVLHPS XMM7,XMM14 }
    /* +0xab705c */ __asm { MOVAPS XMM0,XMM12 }
    /* +0xab7060 */ __asm { SHUFPS XMM0,XMM1,0x8c }
    /* +0xab7064 */ __asm { PADDD XMM2,XMM12 }
    /* +0xab7069 */ __asm { UNPCKHPD XMM12,XMM7 }
    /* +0xab706e */ __asm { MOVAPS XMM1,XMM7 }
    /* +0xab7071 */ __asm { SHUFPS XMM1,XMM12,0x24 }
    /* +0xab7076 */ __asm { MOVAPS XMM9,XMM8 }
    /* +0xab707a */ __asm { UNPCKLPS XMM9,xmmword ptr [0x7fffa56baa70] }
    /* +0xab7082 */ __asm { PSHUFD XMM15,XMM15,0x4e }
    /* +0xab7088 */ __asm { SHUFPS XMM0,XMM0,0x78 }
    /* +0xab708c */ __asm { PSHUFD XMM2,XMM2,0x93 }
    /* +0xab7091 */ __asm { MOVDQA xmmword ptr [RBP + 0x2c0],XMM3 }
    /* +0xab7099 */ __asm { ORPS XMM9,XMM3 }
    /* +0xab709d */ __asm { SHUFPS XMM1,XMM1,0x78 }
    /* +0xab70a1 */ __asm { PADDD XMM2,XMM4 }
    /* +0xab70a5 */ __asm { PADDD XMM5,XMM2 }
    /* +0xab70a9 */ __asm { PSHUFLW XMM2,XMM2,0xb1 }
    /* +0xab70ae */ __asm { PSHUFHW XMM2,XMM2,0xb1 }
    /* +0xab70b3 */ __asm { PSHUFLW XMM15,XMM15,0xb1 }
    /* +0xab70b9 */ __asm { PSHUFHW XMM15,XMM15,0xb1 }
    /* +0xab70bf */ __asm { PXOR XMM15,XMM2 }
    /* +0xab70c4 */ __asm { PADDD XMM10,XMM15 }
    /* +0xab70c9 */ __asm { PXOR XMM4,XMM10 }
    /* +0xab70ce */ __asm { MOVDQA XMM2,XMM4 }
    /* +0xab70d2 */ __asm { PSRLD XMM2,0xc }
    /* +0xab70d7 */ __asm { PSLLD XMM4,0x14 }
    /* +0xab70dc */ __asm { POR XMM4,XMM2 }
    /* +0xab70e0 */ __asm { PADDD XMM5,XMM4 }
    /* +0xab70e4 */ __asm { MOVDQA XMM12,XMM5 }
    /* +0xab70e9 */ __asm { MOVAPS xmmword ptr [RBP + 0x3c0],XMM8 }
    /* +0xab70f1 */ __asm { PADDD XMM12,XMM8 }
    /* +0xab70f6 */ __asm { PXOR XMM5,XMM15 }
    /* +0xab70fb */ __asm { MOVDQA XMM2,XMM5 }
    /* +0xab70ff */ __asm { PSRLD XMM2,0x8 }
    /* +0xab7104 */ __asm { PSLLD XMM5,0x18 }
    /* +0xab7109 */ __asm { POR XMM5,XMM2 }
    /* +0xab710d */ __asm { PSHUFD XMM8,XMM5,0x4e }
    /* +0xab7113 */ __asm { PADDD XMM5,XMM10 }
    /* +0xab7118 */ __asm { PSHUFD XMM2,XMM5,0x93 }
    /* +0xab711d */ __asm { PSHUFD XMM15,XMM12,0x39 }
    /* +0xab7123 */ __asm { PXOR XMM5,XMM4 }
    /* +0xab7127 */ __asm { MOVDQA XMM4,XMM5 }
    /* +0xab712b */ __asm { PSRLD XMM4,0x7 }
    /* +0xab7130 */ __asm { PSLLD XMM5,0x19 }
    /* +0xab7135 */ __asm { POR XMM5,XMM4 }
    /* +0xab7139 */ __asm { PADDD XMM15,XMM5 }
    /* +0xab713e */ __asm { PSHUFLW XMM4,XMM15,0xb1 }
    /* +0xab7144 */ __asm { PSHUFHW XMM10,XMM4,0xb1 }
    /* +0xab714a */ __asm { PSHUFLW XMM4,XMM8,0xb1 }
    /* +0xab7150 */ __asm { PSHUFHW XMM4,XMM4,0xb1 }
    /* +0xab7155 */ __asm { PXOR XMM4,XMM10 }
    /* +0xab715a */ __asm { PADDD XMM2,XMM4 }
    /* +0xab715e */ __asm { MOVDQA XMM12,XMM2 }
    /* +0xab7163 */ __asm { CMP RDI,RCX }
    /* +0xab7166 */ __asm { JC 0x7fffa5227172 }
    /* +0xab7168 */ __asm { PXOR XMM12,XMM12 }
    /* +0xab716d */ __asm { PSUBD XMM12,XMM2 }
    /* +0xab7172 */ __asm { PXOR XMM5,XMM2 }
    /* +0xab7176 */ __asm { MOVDQA XMM2,XMM5 }
    /* +0xab717a */ __asm { PSRLD XMM2,0xc }
    /* +0xab717f */ __asm { PSLLD XMM5,0x14 }
    /* +0xab7184 */ __asm { POR XMM5,XMM2 }
    /* +0xab7188 */ __asm { MOVAPS XMM10,XMM11 }
    /* +0xab718c */ __asm { SHUFPS XMM10,XMM6,0x68 }
    /* +0xab7191 */ __asm { MOVAPS XMM2,XMM10 }
    /* +0xab7195 */ __asm { SHUFPS XMM2,XMM2,0xed }
    /* +0xab7199 */ __asm { MOVAPS XMM8,XMM13 }
    /* +0xab719d */ __asm { SHUFPS XMM8,XMM8,0xe3 }
    /* +0xab71a2 */ __asm { UNPCKLPS XMM8,XMM2 }
    /* +0xab71a6 */ __asm { PADDD XMM15,XMM8 }
    /* +0xab71ab */ __asm { PADDD XMM15,XMM5 }
    /* +0xab71b0 */ __asm { MOVAPS XMM2,XMM8 }
    /* +0xab71b4 */ __asm { UNPCKHPS XMM2,XMM14 }
    /* +0xab71b8 */ __asm { MOVAPS XMM13,XMM1 }
    /* +0xab71bc */ __asm { UNPCKLPS XMM13,XMM2 }
    /* +0xab71c0 */ __asm { PXOR XMM4,XMM15 }
    /* +0xab71c5 */ __asm { MOVDQA XMM2,XMM4 }
    /* +0xab71c9 */ __asm { PSRLD XMM2,0x8 }
    /* +0xab71ce */ __asm { PSLLD XMM4,0x18 }
    /* +0xab71d3 */ __asm { POR XMM4,XMM2 }
    /* +0xab71d7 */ __asm { PADDD XMM12,XMM4 }
    /* +0xab71dc */ __asm { PXOR XMM5,XMM12 }
    /* +0xab71e1 */ __asm { MOVAPS XMM6,XMM11 }
    /* +0xab71e5 */ __asm { SHUFPS XMM6,xmmword ptr [RBP + 0x310],0xe5 }
    /* +0xab71ed */ __asm { MOVAPS XMM2,XMM11 }
    /* +0xab71f1 */ __asm { SHUFPS XMM2,XMM6,0x2c }
    /* +0xab71f5 */ __asm { MOVDQA XMM6,XMM5 }
    /* +0xab71f9 */ __asm { PSRLD XMM6,0x7 }
    /* +0xab71fe */ __asm { PSLLD XMM5,0x19 }
    /* +0xab7203 */ __asm { POR XMM5,XMM6 }
    /* +0xab7207 */ __asm { PSHUFD XMM6,XMM15,0x93 }
    /* +0xab720d */ __asm { PADDD XMM6,XMM1 }
    /* +0xab7211 */ __asm { PSHUFD XMM1,XMM13,0x1e }
    /* +0xab7217 */ __asm { PSHUFD XMM15,XMM12,0x39 }
    /* +0xab721d */ __asm { PSHUFD XMM4,XMM4,0x4e }
    /* +0xab7222 */ __asm { PADDD XMM6,XMM5 }
    /* +0xab7226 */ __asm { PADDD XMM0,XMM6 }
    /* +0xab722a */ __asm { PSHUFLW XMM12,XMM6,0xb1 }
    /* +0xab7230 */ __asm { PSHUFHW XMM12,XMM12,0xb1 }
    /* +0xab7236 */ __asm { PSHUFLW XMM4,XMM4,0xb1 }
    /* +0xab723b */ __asm { PSHUFHW XMM4,XMM4,0xb1 }
    /* +0xab7240 */ __asm { PXOR XMM4,XMM12 }
    /* +0xab7245 */ __asm { PADDD XMM15,XMM4 }
    /* +0xab724a */ __asm { PXOR XMM5,XMM15 }
    /* +0xab724f */ __asm { MOVDQA XMM12,XMM5 }
    /* +0xab7254 */ __asm { PSRLD XMM12,0xc }
    /* +0xab725a */ __asm { PSLLD XMM5,0x14 }
    /* +0xab725f */ __asm { POR XMM5,XMM12 }
    /* +0xab7264 */ __asm { PADDD XMM0,XMM5 }
    /* +0xab7268 */ __asm { PXOR XMM4,XMM0 }
    /* +0xab726c */ __asm { MOVDQA XMM12,XMM4 }
    /* +0xab7271 */ __asm { PSRLD XMM12,0x8 }
    /* +0xab7277 */ __asm { PSLLD XMM4,0x18 }
    /* +0xab727c */ __asm { POR XMM4,XMM12 }
    /* +0xab7281 */ __asm { PADDD XMM15,XMM4 }
    /* +0xab7286 */ __asm { PXOR XMM5,XMM15 }
    /* +0xab728b */ __asm { PSHUFD XMM12,XMM4,0x4e }
    /* +0xab7291 */ __asm { PSHUFD XMM4,XMM15,0x93 }
    /* +0xab7297 */ __asm { MOVDQA XMM15,XMM5 }
    /* +0xab729c */ __asm { PSRLD XMM15,0x7 }
    /* +0xab72a2 */ __asm { PSLLD XMM5,0x19 }
    /* +0xab72a7 */ __asm { POR XMM5,XMM15 }
    /* +0xab72ac */ __asm { PSHUFD XMM15,XMM0,0x39 }
    /* +0xab72b2 */ __asm { MOVAPS XMM0,XMM14 }
    /* +0xab72b6 */ __asm { SHUFPS XMM0,XMM10,0xdd }
    /* +0xab72bb */ __asm { SHUFPS XMM0,XMM0,0x78 }
    /* +0xab72bf */ __asm { PADDD XMM0,XMM15 }
    /* +0xab72c4 */ __asm { PADDD XMM0,XMM5 }
    /* +0xab72c8 */ __asm { PSHUFLW XMM15,XMM0,0xb1 }
    /* +0xab72ce */ __asm { PSHUFHW XMM15,XMM15,0xb1 }
    /* +0xab72d4 */ __asm { PSHUFLW XMM12,XMM12,0xb1 }
}


// ============================================================================
// Function : Unwind@7fffa5243d10  |  RVA: 0xad3d10  |  Size: 407 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5243d10(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  
  uVar1 = *(uint64_t *)(param_2 + 0x390);
  uVar2 = *(uint64_t *)(param_2 + 0x80);
  (*(code *)((int64_t)(short)(((uint16_t)uVar2 | 1) * 0x7c3 + 0x2b09) + 0x7fffa568de1a))
            (uVar2,uVar1,uVar1 >> 0x3d ^ uVar1);
  if (*(char *)(param_2 + 0x340) != '\0') {
    uVar2 = *(uint64_t *)(param_2 + 0x80);
    bVar3 = (uint8_t)uVar2 & 0x1f;
    (*(code *)((int64_t)(int)(-0x54c20002 << bVar3 | 0xab3dfffeU >> 0x20 - bVar3) + 0x7fffa5692692)
    )(uVar2,0x7fffa5692692,*(uint64_t *)(param_2 + 0x1c0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1c0)
     );
  }
  *(uint64_t *)(param_2 + 0x388) = *(uint64_t *)(param_2 + 0x440);
  *(uint64_t *)(param_2 + 200) = *(uint64_t *)(param_2 + 0x2a8);
  *(uint8_t *)(param_2 + 0xaf) = *(uint8_t *)(param_2 + 0x200);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5243eb0  |  RVA: 0xad3eb0  |  Size: 303 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5243eb0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if ((*(char *)(param_2 + 0xaf) == '\x01') && (7 < *(uint64_t *)(param_2 + 200))) {
    pcVar1 = (code *)((int64_t)
                      (int)(((uint32_t)*(uint64_t *)(param_2 + 0x80) ^ 0xb505d5c3) * 0x451cfb1 +
                           -0x3fffffe3) + 0x7fffa56930a7);
    (*pcVar1)(*(uint64_t *)(param_2 + 0x80),pcVar1,
              *(uint64_t *)(param_2 + 0x388) >> 0x3d ^ *(uint64_t *)(param_2 + 0x388));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5243fe0  |  RVA: 0xad3fe0  |  Size: 369 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5243fe0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  
  if (*(int64_t *)(param_2 + 0x390) != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x80);
    uVar4 = (int)uVar1 + 0xb539bb11;
    plVar2 = *(int64_t **)((int64_t)(short)(-0x75de - (short)uVar1) + 0x7fffa4789a6d);
    if (plVar2 == (int64_t *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar2;
    }
    uVar3 = (short)*(uint32_t *)(param_2 + 0x80) + 0x765e;
    LOCK();
    plVar2 = (int64_t *)((int64_t)(short)(uVar3 * 8 | uVar3 >> 0xd) + 0x7fffa47c59bf);
    *plVar2 = *plVar2 + (*(int64_t *)(uint64_t)~(uVar4 * 0x100000 | uVar4 >> 0xc) -
                        (*(int64_t *)
                          (uint64_t)
                          (*(int *)(param_2 + 0x408) * 0x2eb82d00 |
                          (uint32_t)(*(int *)(param_2 + 0x408) * -0x48d147d3) >> 0x18) +
                         *(int64_t *)(param_2 + 0x390) + lVar5));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5244160  |  RVA: 0xad4160  |  Size: 297 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5244160(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x390)) {
    (*(code *)((int64_t)
               (int)(*(uint32_t *)(param_2 + 0x80) << 0x1c |
                    (*(uint32_t *)(param_2 + 0x80) ^ 0x95325d40) >> 4) + 0x7fffa568fe16))
              (param_1,param_2,
               *(uint64_t *)(param_2 + 0x2c0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x2c0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5244290  |  RVA: 0xad4290  |  Size: 283 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5244290(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x3d8)) {
    FUN_7fffa5687c30(param_1,0x98abf574,
                     *(uint64_t *)(param_2 + 0x3c0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x3c0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa52443b0  |  RVA: 0xad43b0  |  Size: 302 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52443b0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t in_R10;
  
  if (0xf < *(uint64_t *)(param_2 + 0x3d8)) {
    iVar1 = ((uint32_t)*(uint64_t *)(param_2 + 0x80) ^
            (int)CONCAT62((int6)((uint64_t)in_R10 >> 0x10),0x59af) - 0x3d08U) + 0x1d60;
    (*(code *)((int64_t)(short)iVar1 + 0x7fffa568be88))
              (iVar1,param_2,
               *(uint64_t *)(param_2 + 0x3c0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x3c0));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa52444e0  |  RVA: 0xad44e0  |  Size: 115 bytes
// Callers  : none
// Callees  : FUN_7fffa548d338@0xd1d338, FUN_7fffa51476a0@0x9d76a0, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa55c6b44@0xe56b44
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa52444e0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  uVar1 = 0;
  if (_DAT_7fffa4781c20 == 0) {
    FUN_7fffa55c6b44();
    lVar2 = FUN_7fffa51476a0();
    if (lVar2 == 0) {
      FUN_7fffa52d8dd0(0);
      uVar1 = 0xffffffff;
    }
    else {
      lVar3 = FUN_7fffa548d338(lVar2);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        _DAT_7fffa4781c20 = lVar3;
        _DAT_7fffa4781c38 = lVar3;
      }
      FUN_7fffa52d8dd0(0);
      FUN_7fffa52d8dd0(lVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa5244560  |  RVA: 0xad4560  |  Size: 463 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5244687) */

uint64_t FUN_7fffa5244560(uint64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t unaff_R14;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0;
  uStack_50 = param_1;
  do {
    puStack_60 = &uStack_50;
    uVar1 = (int64_t)&puStack_60 * -0x68e32b2f;
    uVar2 = ~(uint64_t)&puStack_60;
    puStack_58 = &uStack_48;
    FUN_7fffa547a340(((int64_t)&puStack_60 * -0x1a38cacbc0000000 | uVar1 >> 0x22) ^
                     (uVar1 << 0x34 | uVar1 >> 0xc) ^ uVar1,
                     (uVar2 & unaff_R14) * -0x5aa9a0a9 + (uVar2 | unaff_R14) * 0x5aa9a0a9 +
                     (unaff_R14 ^ (uint64_t)&puStack_60) * 0x5aa9a0a9);
    uStack_48 = uStack_48 + 1;
  } while (uStack_48 < 0x160);
  uVar1 = ((int64_t)&puStack_60 * 0x4000000 | (uint64_t)&puStack_60 >> 0x26) ^
          ((int64_t)&puStack_60 * 0x1000 | (uint64_t)&puStack_60 >> 0x34) ^ (uint64_t)&puStack_60
  ;
  FUN_7fffa4f44890(0x8ac58be0,uVar1 >> 0xe ^ uVar1);
  return (uint64_t)puStack_60 & 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa5244750  |  RVA: 0xad4750  |  Size: 38 bytes
// Callers  : FUN_7fffa55aec50@0xe3ec50
// Callees  : FUN_7fffa5453ab0@0xce3ab0
// ============================================================================
void FUN_7fffa5244750(uint64_t param_1,uint64_t *param_2)

{
  FUN_7fffa5453ab0(param_1,*param_2,2);
  return;
}


// ============================================================================
// Function : FUN_7fffa5244778  |  RVA: 0xad4778  |  Size: 101 bytes
// Callers  : FUN_7fffa549ab20@0xd2ab20, FUN_7fffa50082d0@0x8982d0
// Callees  : FUN_7fffa5174bf0@0xa04bf0, FUN_7fffa55c8d00@0xe58d00, FUN_7fffa507a38c@0x90a38c
// ============================================================================
uint8_t ** FUN_7fffa5244778(int64_t *param_1,uint8_t **param_2)

{
  uint8_t **ppuVar1;
  
  if ((param_2 == (uint8_t **)0x0) || (param_1 == (int64_t *)0x0)) {
    param_2 = (uint8_t **)0x0;
  }
  else {
    ppuVar1 = (uint8_t **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (int64_t)param_2;
      FUN_7fffa55c8d00(param_2);
      if (((ppuVar1 != (uint8_t **)0x0) && (FUN_7fffa5174bf0(ppuVar1), *(int *)(ppuVar1 + 2) == 0)
          ) && (ppuVar1 != &PTR_DAT_7fffa4780790)) {
        FUN_7fffa507a38c(ppuVar1);
      }
    }
  }
  return param_2;
}


// ============================================================================
// Function : FUN_7fffa52447e0  |  RVA: 0xad47e0  |  Size: 486 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52447e0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47826c2 = '\0';
  uRam00007fffa47826e2 = 0;
  uRam00007fffa47826ea = 0;
  uRam00007fffa47826d2 = 0;
  uRam00007fffa47826da = 0;
  uRam00007fffa47826fa = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)(uVar1 >> 0x20)) << 0x20 | uVar1 & 0xffffffff) *
          0x9ca5c350372e70f + 0xb;
  lVar2 = 2;
  do {
    lVar4 = lVar3 * 0x9ca5c350372e70f + 0xb;
    lVar5 = lVar4 * 0x9ca5c350372e70f + 0xb;
    lVar3 = lVar5 * 0x9ca5c350372e70f + 0xb;
    *(char *)(lVar2 + 0x7fffa47826b7) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47826b5) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47826b6) = (char)((uint64_t)lVar5 >> 0x20);
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x50);
  bRam00007fffa47826c2 = bRam00007fffa47826c2 + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa47826c2 * 8 + 0x7fffa47826d2) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa52449d0  |  RVA: 0xad49d0  |  Size: 960 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52449d0(void)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint32_t uVar8;
  int64_t lVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t unaff_R12;
  
  lVar7 = (~unaff_R12 & 0xffffffffbc66e9fa) * 0x1ffff3675341a;
  uVar5 = (unaff_R12 & 0x43991605) * -0xc98acbe6 + lVar7 + (unaff_R12 ^ 0x43991605) * -0xc98acbe6;
  uVar4 = (uint32_t)uVar5;
  uVar8 = uVar4 | 1;
  bVar1 = (uint8_t)uVar5;
  *(uint8_t *)((int64_t)(short)((short)uVar8 * 0x7a66 + -0x5e3a) + 0x7fffa478571a) = ~(bVar1 ^ 0x19);
  lVar9 = (int64_t)(int)((uVar4 ^ 0x36725c49) << 0x1d | (uVar4 ^ 0x36725c49) >> 3);
  *(uint64_t *)(lVar9 + 0x7fffa4793a15) = 0;
  *(uint64_t *)(lVar9 + 0x7fffa4793a1d) = 0;
  *(uint64_t *)(lVar9 + 0x7fffa4793a05) = 0;
  *(uint64_t *)(lVar9 + 0x7fffa4793a0d) = 0;
  *(uint64_t *)(lVar9 + 0x7fffa4793a25) = 0;
  uVar10 = uVar8 * 0x43991605 ^ 0x2f4ad583;
  *(uint64_t *)
   ((int64_t)(int)((uVar4 + 0x5e75311e) * 0x40 | uVar4 + 0x5e75311e >> 0x1a) + 0x7fffa4790c28) =
       (uint64_t)(uVar10 << 0x1c | uVar10 >> 4);
  uVar11 = rdtsc();
  lVar9 = (uVar11 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar11)) * 0xb4f7671028fd9f6 + 0xb;
  uVar11 = 0;
  while( true ) {
    lVar9 = lVar9 * 0xb4f7671028fd9f6 + 0xb;
    uVar10 = uVar8 * -0x27c5ae46 ^ 0xd086a9b7;
    uVar6 = uVar11 ^ 0x748655ef;
    if ((uint64_t)(int64_t)(int)(uVar4 + 0xcd6b6463) <=
        (uint64_t)(uVar10 << 1 | (uint32_t)((int)uVar10 < 0))) {
      uVar6 = uVar11 | 0x748655ef;
    }
    uVar2 = (uint16_t)uVar5;
    *(char *)(uVar11 + (int64_t)(short)((uVar2 + 0x6fea) * -0x8fb) + 0x7fffa47871d7) =
         (char)((uint64_t)lVar9 >> 0x20);
    if ((uVar6 << 0x20 | uVar6 >> 0x20) == 0x748655bb00000000) break;
    lVar9 = lVar9 * 0xb4f7671028fd9f6 + 0xb;
    *(char *)(uVar11 + (int64_t)(short)(-0x6417 << (bVar1 & 0xf) | 0x9be9U >> 0x10 - (bVar1 & 0xf))
                       + 0x7fffa4785282) = (char)((uint64_t)lVar9 >> 0x20);
    lVar9 = lVar9 * 0xb4f7671028fd9f6 + 0xb;
    *(char *)(uVar11 + (int64_t)(int)(uVar4 + 0x3674616b) + 0x7fffa4791f98) =
         (char)((uint64_t)lVar9 >> 0x20);
    lVar9 = lVar9 * (uVar5 ^ 0xb4f7671cb051210) + 0xb;
    *(char *)(uVar11 + (int64_t)(short)(0x4700 << (bVar1 & 0xf) | 0x4700U >> 0x10 - (bVar1 & 0xf))
                       + 0x7fffa4788cd9) = (char)((uint64_t)lVar9 >> 0x20);
    uVar11 = uVar11 + 4;
  }
  uVar3 = (-0x7eab - uVar2) * 0x46b7;
  bVar1 = (uint8_t)uVar11 & 0xf;
  uVar5 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(short)(uVar3 << bVar1 | uVar3 >> 0x10 - bVar1) +
                          0x7fffa478875a) * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)
   ((int64_t)
    (short)((((short)lVar7 +
             (short)(unaff_R12 & 0x43991605) * 0x341a + (short)(unaff_R12 ^ 0x43991605) * 0x341a) -
            (short)uVar11) + 0x300d) + 0x7fffa478515b + (uVar5 >> 0x20) * 8) = 0xffffffffffffffff;
  *(char *)((int64_t)(short)(~(uVar2 ^ 0x8094) * 0x4f13) + 0x7fffa4786373) = (char)(uVar5 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5244d90  |  RVA: 0xad4d90  |  Size: 86 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5244d90(void)

{
  code *pcVar1;
  
  FUN_7fffa54ad470(0x5887961e);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5244df0  |  RVA: 0xad4df0  |  Size: 71 bytes
// Callers  : none
// Callees  : FUN_7fffa4f41160@0x7d1160, FUN_7fffa47de1c0@0x6e1c0, FUN_7fffa5444780@0xcd4780
// ============================================================================
void FUN_7fffa5244df0(int param_1)

{
  code *pcVar1;
  uint64_t uVar2;
  uint8_t auStack_38 [48];
  
  uVar2 = FUN_7fffa5444780();
  FUN_7fffa47de1c0(auStack_38,*(uint32_t *)(&UNK_7fffa56b0048 + (int64_t)param_1 * 4),uVar2,
                   (&PTR_s_device_or_resource_busy_7fffa56b0010)[param_1]);
  FUN_7fffa4f41160(auStack_38,&UNK_7fffa58941d8);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5244e38  |  RVA: 0xad4e38  |  Size: 413 bytes
// Callers  : FUN_7fffa55ca84c@0xe5a84c
// Callees  : FUN_7fffa51817f8@0xa117f8, FUN_7fffa562518c@0xeb518c, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa4ed9184@0x769184, FUN_7fffa56a65a0@0xf365a0
// ============================================================================
uint32_t FUN_7fffa5244e38(char *param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  int64_t lVar3;
  uint32_t *puVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  bool bVar8;
  
  if (param_1 == (char *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_7fffa52d8dd0(*(uint64_t *)(param_2 + 0x10));
      *(uint8_t *)(param_2 + 0x28) = 0;
    }
    *(uint64_t *)(param_2 + 0x10) = 0;
    *(uint64_t *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = FUN_7fffa562518c(param_4,9,param_1,0xffffffff,0,0);
      uVar7 = (uint64_t)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(uint64_t *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_7fffa52d8dd0(*(uint64_t *)(param_2 + 0x10));
            *(uint8_t *)(param_2 + 0x28) = 0;
          }
          lVar3 = FUN_7fffa56a65a0(uVar7 * 2);
          *(int64_t *)(param_2 + 0x10) = lVar3;
          uVar6 = -(uint64_t)(lVar3 != 0) & uVar7;
          uVar5 = ~-(uint32_t)(lVar3 != 0) & 0xc;
          if (lVar3 != 0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = lVar3 != 0;
          *(uint64_t *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_7fffa562518c(param_4,9,param_1,0xffffffff,*(uint64_t *)(param_2 + 0x10),
                                 (int)uVar6);
        if ((int64_t)iVar1 != 0) {
          *(int64_t *)(param_2 + 0x20) = (int64_t)iVar1 + -1;
          return 0;
        }
      }
      uVar2 = (*(code *)&DAT_7ff84ea18640)();
      FUN_7fffa51817f8(uVar2);
      puVar4 = (uint32_t *)FUN_7fffa4ed9184();
      return *puVar4;
    }
    if (*(int64_t *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_7fffa52d8dd0(*(uint64_t *)(param_2 + 0x10));
        *(uint8_t *)(param_2 + 0x28) = 0;
      }
      lVar3 = FUN_7fffa56a65a0(2);
      *(int64_t *)(param_2 + 0x10) = lVar3;
      uVar5 = ~-(uint32_t)(lVar3 != 0) & 0xc;
      bVar8 = lVar3 != 0;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(uint64_t *)(param_2 + 0x18) = (uint64_t)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(uint16_t **)(param_2 + 0x10) = 0;
  }
  *(uint64_t *)(param_2 + 0x20) = 0;
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5244fe0  |  RVA: 0xad4fe0  |  Size: 1418 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa5245567) overlaps instruction at (ram,0x7fffa5245564)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa524555c) */
/* WARNING: Removing unreachable block (ram,0x7fffa524526b) */
/* WARNING: Removing unreachable block (ram,0x7fffa5245555) */
/* WARNING: Removing unreachable block (ram,0x7fffa5245564) */
/* WARNING: Removing unreachable block (ram,0x7fffa524554d) */

void FUN_7fffa5244fe0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uRam00007fffa4785dd0 =
       (0x4cd6c60966b16aa2 - lRam00007fffa47815b8) * 0x470573a86f925f10 |
       (uint64_t)((0x4cd6c60966b16aa2 - lRam00007fffa47815b8) * 0x3470573a86f925f1) >> 0x3c;
  uVar1 = uRam00007fffa4780be0 >> 0x38 | (uRam00007fffa4780be0 & 0xff000000000000) >> 0x28 |
          (uRam00007fffa4780be0 & 0xff0000000000) >> 0x18 |
          (uRam00007fffa4780be0 & 0xff00000000) >> 8 | (uRam00007fffa4780be0 & 0xff000000) << 8 |
          (uRam00007fffa4780be0 & 0xff0000) << 0x18 | (uRam00007fffa4780be0 & 0xff00) << 0x28 |
          uRam00007fffa4780be0 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uVar2 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2 ^
          uRam00007fffa4780f60;
  uVar1 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28;
  uVar3 = uVar1 | (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
          (uVar2 & 0xff000000) << 8;
  uRam00007fffa4785dd8 =
       (uVar3 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) ^
       uVar1 << 0x36 ^ uVar3 << 0x1b ^ uRam00007fffa47812d8;
  lRam00007fffa4785de0 =
       (0xf4e42fda6d0035fdU - lRam00007fffa4781598 ^
       lRam00007fffa4781598 + 0xb1bd02592ffca02U >> 0x2e ^
       lRam00007fffa4781598 + 0xb1bd02592ffca02U >> 0x17) * 0x6fffa000bfff8001;
  uRam00007fffa4785de8 = 0xa700007fffa58616;
  uVar3 = (uint64_t)((int64_t)&UNK_7fffa58507c8 - lRam00007fffa4780be8) >> 7 ^
          (int64_t)&UNK_7fffa58507c8 - lRam00007fffa4780be8;
  uVar1 = uVar3 >> 0xe ^ uVar3;
  uVar1 = uVar1 >> 0x1c ^ uVar3 >> 0x38 ^ uVar1;
  uVar1 = (uVar3 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
           (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
           (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38) + lRam00007fffa47815c0;
  lRam00007fffa4785df0 = (uVar1 >> 0x17 ^ uVar1 >> 0x2e ^ uVar1) * 0x40000008000001;
  lRam00007fffa4785df8 = (0x37eb572ec636c256 - lRam00007fffa4781410) * -0x7f01fc07f01fc07f;
  uVar1 = 0xcddb103dc778dc04 - lRam00007fffa4781540;
  uRam00007fffa4785e08 = 0x51806795f0b63231;
  uVar1 = (uVar1 * 0x200000 | uVar1 >> 0x2b) ^ (uVar1 * 0x80000 | uVar1 >> 0x2d) ^ uVar1;
  uVar1 = (uVar1 << 0x2a | uVar1 >> 0x16) ^ (uVar1 << 0x26 | uVar1 >> 0x1a) ^ uVar1;
  uVar1 = (uVar1 << 0xc | uVar1 >> 0x34) ^ (uVar1 << 0x14 | uVar1 >> 0x2c) ^ uVar1;
  uVar1 = (uVar1 << 0x28 | uVar1 >> 0x18) ^ (uVar1 << 0x18 | uVar1 >> 0x28) ^ uVar1;
  uVar1 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ (uVar1 << 0x30 | uVar1 >> 0x10) ^ uVar1;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 & 0x3333333333333333) * 4 + (uVar1 >> 2 & 0x3333333333333333);
  lRam00007fffa4785e00 =
       ((uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2) * -0x7f01fc07f01fc07f;
  return;
}


// ============================================================================
// Function : FUN_7fffa5245570  |  RVA: 0xad5570  |  Size: 749 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5245570(uint64_t param_1,int64_t param_2,int param_3)

{
  uint8_t *puVar1;
  uint8_t bVar2;
  uint8_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  bVar2 = (uint8_t)param_3;
  if ((param_3 + 0x4a9ae206U ^ 0x21be78f7) * -0x73eaf6db <
      (0x4da2ccddU >> (bVar2 & 0x1f) | 0x4da2ccdd << 0x20 - (bVar2 & 0x1f))) {
    lVar4 = 0x5b25b9fc;
  }
  else {
    lVar4 = -0x5b25b9fc;
  }
  uVar5 = (param_2 + 0x8c0eb63U << 0x27 | param_2 + 0x8c0eb63U >> 0x19) + lVar4;
  uVar5 = uVar5 * 0x100 | uVar5 >> 0x38;
  uVar5 = uVar5 << 0x21 ^ uVar5;
  puVar3 = *(uint8_t **)*(uint8_t (*) [16])(uVar5 - 0x210ffc38);
  if (puVar3 != (uint8_t *)0x0) {
    puVar1 = *(uint8_t **)(uVar5 - 0x210ffc30);
    for (; puVar3 != puVar1; puVar3 = puVar3 + 0x88) {
      if (0xf < *(uint64_t *)(puVar3 + 0x78)) {
        FUN_7fffa5687c30();
      }
      *(uint64_t *)(puVar3 + 0x78) = 0xf;
      *(uint64_t *)(puVar3 + 0x70) = 0;
      puVar3[0x60] = 0;
      if (0xf < *(uint64_t *)(puVar3 + 0x58)) {
        (*(code *)((int64_t)
                   (short)((0x6dc2U >> (bVar2 & 0xf) | 0x6dc2 << 0x10 - (bVar2 & 0xf)) - 0x9e0) +
                  0x7fffa568c3a3))();
      }
      *(uint64_t *)(puVar3 + 0x58) = 0xf;
      *(uint64_t *)(puVar3 + 0x50) = 0;
      puVar3[0x40] = 0;
      if (0xf < *(uint64_t *)(puVar3 + 0x38)) {
        (*(code *)((int64_t)(0x18946b85 - param_3) + 0x7fffa5692a33))
                  (param_3,(int64_t)(0x18946b85 - param_3),
                   *(uint64_t *)(puVar3 + 0x20) >> 0x3d ^ *(uint64_t *)(puVar3 + 0x20),0x7c7e107e)
        ;
      }
      *(uint64_t *)(puVar3 + 0x38) = 0xf;
      puVar3[0x20] = 0;
      *(uint64_t *)(puVar3 + 0x30) = 0;
      if (0xf < *(uint64_t *)(puVar3 + 0x18)) {
        (*(code *)((int64_t)
                   (int)(0xff6e00ffU >> (bVar2 & 0x1f) | -0x91ff01 << 0x20 - (bVar2 & 0x1f)) +
                  0x7fffa5690e30))();
      }
      *(uint64_t *)(puVar3 + 0x18) = 0xf;
      *puVar3 = 0;
      *(uint64_t *)(puVar3 + 0x10) = 0;
    }
    (*(code *)((int64_t)(int)~(param_3 + 0xe76bad69U) + 0x7fffa5694322))();
    *(uint8_t (*) [16])(uVar5 - 0x210ffc38) = (uint8_t  [16])0x0;
    *(uint64_t *)(uVar5 - 0x210ffc28) = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5245870  |  RVA: 0xad5870  |  Size: 186 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa52458e6) */

uint64_t FUN_7fffa5245870(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t unaff_R13D;
  
  uVar1 = ~unaff_R13D | param_3;
  (*(code *)((int64_t)
             (int)((uVar1 * -0x354f5934 + (param_3 & ~unaff_R13D) * 0x354f5934 +
                    (unaff_R13D ^ param_3) * -0x354f5934 ^ 0x74a55773) * 0x4f80366f) +
            0x7fffa525edc7))(param_1,uVar1 * 0x7ffe02d4,0x816a62f3);
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5245930  |  RVA: 0xad5930  |  Size: 347 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint8_t (*) [64] FUN_7fffa5245930(uint8_t (*param_1) [64],int64_t param_2,uint64_t param_3)

{
  uint8_t auVar1 [32];
  uint8_t (*pauVar2) [64];
  uint8_t (*pauVar3) [64];
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint8_t auVar7 [64];
  uint8_t auVar8 [64];
  uint8_t auVar9 [32];
  
  if (param_3 < 0x41) {
    auVar7 = vpbroadcastb_avx512bw();
    auVar7 = vmovdqu8_avx512bw(auVar7);
    *param_1 = auVar7;
    return param_1;
  }
  if (param_3 < 0x81) {
    auVar8 = vpbroadcastb_avx512bw();
    auVar7 = vmovdqu8_avx512bw(auVar8);
    *param_1 = auVar7;
    auVar7 = vmovdqu8_avx512bw(auVar8);
    param_1[1] = auVar7;
    return param_1;
  }
  if ((0x80000 < param_3) && (param_3 < 0x2000001)) {
    pauVar2 = param_1;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      (*pauVar2)[0] = (char)param_2;
      pauVar2 = (uint8_t (*) [64])(*pauVar2 + 1);
    }
    return param_1;
  }
  auVar7 = vpbroadcastb_avx512bw();
  lVar5 = ((uint64_t)param_1 & 0x3f) - 0x40;
  pauVar2 = (uint8_t (*) [64])((int64_t)param_1 - lVar5);
  param_3 = param_3 + lVar5;
  if (0x100 < param_3) {
    if (0x2000000 < param_3) {
      do {
        uVar4 = param_3;
        pauVar3 = pauVar2;
        auVar8 = vmovntdq_avx512f(auVar7);
        *pauVar3 = auVar8;
        auVar8 = vmovntdq_avx512f(auVar7);
        pauVar3[1] = auVar8;
        auVar8 = vmovntdq_avx512f(auVar7);
        pauVar3[2] = auVar8;
        auVar8 = vmovntdq_avx512f(auVar7);
        pauVar3[3] = auVar8;
        pauVar2 = pauVar3 + 4;
        param_3 = uVar4 - 0x100;
      } while (0xff < uVar4 - 0x100);
      uVar6 = uVar4 - 0xe1 & 0xffffffffffffffe0;
      auVar9 = auVar7._0_32_;
      switch(uVar4) {
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
        auVar1 = vmovntdq_avx(auVar9);
        *(uint8_t (*) [32])(*pauVar3 + uVar6) = auVar1;
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
        auVar1 = vmovntdq_avx(auVar9);
        *(uint8_t (*) [32])(*pauVar3 + uVar6 + 0x20) = auVar1;
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
        auVar1 = vmovntdq_avx(auVar9);
        *(uint8_t (*) [32])(pauVar3[1] + uVar6) = auVar1;
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
        auVar1 = vmovntdq_avx(auVar9);
        *(uint8_t (*) [32])(pauVar3[1] + uVar6 + 0x20) = auVar1;
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
        auVar1 = vmovntdq_avx(auVar9);
        *(uint8_t (*) [32])(pauVar3[2] + uVar6) = auVar1;
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
        auVar1 = vmovntdq_avx(auVar9);
        *(uint8_t (*) [32])(pauVar3[2] + uVar6 + 0x20) = auVar1;
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
        auVar1 = vmovntdq_avx(auVar9);
        *(uint8_t (*) [32])(pauVar3[3] + uVar6) = auVar1;
      default:
        auVar9 = vmovdqu8_avx512vl(auVar9);
        *(uint8_t (*) [32])(pauVar3[-1] + uVar4 + 0x20) = auVar9;
      case 0x100:
        auVar7 = vmovdqu8_avx512bw(auVar7);
        *param_1 = auVar7;
        return param_1;
      }
    }
    do {
      auVar8 = vmovdqa64_avx512f(auVar7);
      *pauVar2 = auVar8;
      auVar8 = vmovdqa64_avx512f(auVar7);
      pauVar2[1] = auVar8;
      auVar8 = vmovdqa64_avx512f(auVar7);
      pauVar2[2] = auVar8;
      auVar8 = vmovdqa64_avx512f(auVar7);
      pauVar2[3] = auVar8;
      pauVar2 = pauVar2 + 4;
      param_3 = param_3 - 0x100;
    } while (0xff < param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x7fffa5245a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pauVar2 = (uint8_t (*) [64])
            (*(code *)(IMAGE_DOS_HEADER_7fffa4770000.e_magic +
                      *(uint32_t *)(&UNK_7fffa58732f0 + (param_3 + 0x1f >> 5) * 4)))
                      (auVar7._0_8_,param_2 - lVar5);
  return pauVar2;
}


// ============================================================================
// Function : FUN_7fffa5245b40  |  RVA: 0xad5b40  |  Size: 828 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5245e55) */

void FUN_7fffa5245b40(void)

{
  char *pcVar1;
  uint64_t uVar2;
  uint16_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint32_t unaff_EDI;
  uint32_t unaff_R12D;
  uint32_t unaff_R14D;
  uint32_t uVar7;
  
  uVar7 = (~unaff_R12D & ~(unaff_R14D | unaff_EDI)) * 0x10be776b +
          (unaff_EDI | unaff_R14D | unaff_R12D) * 0x10be776b;
  uVar3 = (uint16_t)uVar7;
  uRam00007fffa47bc8ef = 0x8895 - uVar7 & 0xffff;
  *(uint8_t *)((int64_t)(short)((0xe833 - uVar3 ^ 0x503a) + 0x9a13) + 0x7fffa47c1f21) =
       ((uint8_t)uVar7 | 1) * -0x59 ^ 0x33;
  uRam00007fffa47bc8e9 = 0;
  uRam00007fffa47bc8e1 = 0;
  uVar2 = rdtsc();
  lVar5 = (CONCAT44(0x7fff,(int)(uVar2 >> 0x20)) << 0x20 | uVar2 & 0xffffffff) * 0x8cb55d56f8c646d +
          0xb;
  lVar4 = 3;
  while( true ) {
    lVar6 = -0xb;
    if (((uVar7 | 1) * 0x28000000 | (uVar7 | 1) * 0x562fed05 >> 5) < 0x3b811325 - uVar7) {
      lVar6 = 0xb;
    }
    lVar6 = lVar6 + lVar5 * 0x8cb55d56f8c646d;
    lVar5 = lVar6 * 0x8cb55d56f8c646d + 0xb;
    *(char *)(lVar4 + ((int64_t)(int)((uVar7 + 0x9a0bd71a) * -0x7ba16a53) ^ 0xffffffffcfc3c0a1U) +
                      0x7fffa47c83eb) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar4 + (int64_t)(int)~(uVar7 + 0x10bf5ac9) + 0x7fffa47cac2d) =
         (char)((uint64_t)lVar5 >> 0x20);
    if (lVar4 == 0x27) break;
    lVar6 = lVar5 * 0x8cb55d56f8c646d + 0xb;
    lVar5 = lVar6 * 0x8cb55d56f8c646d + 0xb;
    *(char *)(lVar4 + (int64_t)(short)((uVar3 ^ 0x4dd2) << 0xe | (uVar3 ^ 0x4dd2) >> 2) +
                      0x7fffa47bd77e) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar4 + (int64_t)(short)~(uVar3 + 0x9298) + 0x7fffa47be3fe) =
         (char)((uint64_t)lVar5 >> 0x20);
    lVar4 = lVar4 + 4;
  }
  uVar2 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)(-0x10bf2c9b - uVar7) + 0x7fffa47c7e08) * 0x55555556 +
          0x55555556) * 3;
  pcVar1 = s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e +
           (uVar2 >> 0x20) * 4 + (int64_t)(short)(0x2353 - (uVar3 + 0xc50b)) + 0x10;
  pcVar1[0] = -0x80;
  pcVar1[1] = 'm';
  pcVar1[2] = -0x1a;
  pcVar1[3] = -0x6b;
  *(char *)((int64_t)&g_api_KERNEL32_DLL_AreFileApisANSI +
           (int64_t)
           (short)((uint16_t)(uVar7 ^ 0x193a) >> 1 | (uint16_t)(((uVar7 ^ 0x193a) & 1) != 0) << 0xf) + 1
           ) = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5245e80  |  RVA: 0xad5e80  |  Size: 1775 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa524637f) */
/* WARNING: Removing unreachable block (ram,0x7fffa52461d9) */
/* WARNING: Removing unreachable block (ram,0x7fffa52463ef) */

int64_t * FUN_7fffa5245e80(int64_t *param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  short sVar3;
  uint16_t uVar4;
  uint16_t uVar5;
  uint16_t unaff_SI;
  uint16_t uVar6;
  uint16_t uVar7;
  uint16_t uVar8;
  uint16_t uVar9;
  uint16_t uVar10;
  uint16_t uVar11;
  
  uVar8 = unaff_SI ^ 0x8c;
  uVar9 = ~uVar8;
  uVar4 = uVar9 | 0x78b1;
  uVar10 = uVar9 & 0x874e;
  uVar6 = (~unaff_SI & 0x8c | 0x78b1) * 0x8c + (~unaff_SI & 0x80) * 0x780a;
  uVar11 = ~uVar6;
  uVar2 = (unaff_SI & 0x7831) * -0x7748 + uVar6;
  uVar7 = uVar8 & 0x78b1 | uVar2;
  uVar5 = ~uVar2;
  sVar3 = (~(uVar6 | uVar2) & (unaff_SI ^ 0x87c2)) * -0x716f +
          (uVar8 & 0x874e & uVar5 & uVar11) * -0x52d1 +
          (((~(uVar2 & uVar4) | uVar11) + uVar6) - ((uVar8 & 0x874e & uVar11) + (uVar4 ^ uVar6))) *
          0x162d + (~uVar10 & uVar5 & uVar6) * 0x1f29 + (~(uVar8 & 0x78b1) & uVar6) * -0xf1d +
                   (uVar2 & uVar10 & uVar6) * 0x1f29 + uVar11 * 0x162c +
                   ((uVar4 | uVar2) ^ uVar6) * 0x162d +
                   (uVar2 & uVar11 & uVar10) * 0x2e46 +
                   (~(uVar6 | unaff_SI ^ 0x783d) & uVar2) * -0x6162 +
                   (uVar11 ^ (uVar9 | 0x874e)) * 0xf1d +
                   (uVar10 & uVar5 & uVar11) * 0x590a +
                   ((uVar9 ^ 0x78b1) & uVar6 & uVar5) * -0x3557 + (uVar6 ^ uVar7) * -0x56b8 +
                   ((uVar8 | 0x78b1 | uVar2) ^ uVar6) * 0x73a9 +
                   (uVar9 & 0x78b1 & uVar5 & uVar11) * -0x68fe +
                   ((uVar9 | 0x874e) & uVar5 | uVar6) * 0x239 +
                   (uVar7 & uVar6) * -0x2161 + ((unaff_SI ^ 0x783d) & uVar11) * -0x5245 +
                   (~uVar10 & uVar5 & uVar11) * 0x100c + 0x162d +
          ((unaff_SI ^ 0x8c) & 0x78b1) * -0x780a +
          (unaff_SI & 0x7831) * -0x10ae + (unaff_SI & 0x8742) * 0x1f29 +
          ((unaff_SI | 0xff73) & 0x874e) * -0x1e9d;
  bVar1 = (uint8_t)sVar3 & 0x1f;
  *param_1 = (int64_t)&PTR_DAT_7fffa56fd028 +
             (int64_t)(int)(0x1fffed20U >> bVar1 | 0x1fffed20 << 0x20 - bVar1);
  *(uint8_t (*) [16])(param_1 + 1) = (uint8_t  [16])0x0;
  (*(code *)((int64_t)(short)(0xab95U - sVar3 ^ 0xef3) + 0x7fffa56130a5))(param_2 + 8,param_1 + 1);
  return param_1;
}


// ============================================================================
// Function : Unwind@7fffa5246570  |  RVA: 0xad6570  |  Size: 62 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5246570(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)((*(int *)(param_2 + 0xe0) + -0x453aa0c1) * 0x2d0a0005) + 0x7fffa562de94))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa52465b0  |  RVA: 0xad65b0  |  Size: 701 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa52465b0(void)

{
  uint64_t uVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa478681c = '\0';
  uRam00007fffa4786856 = 0;
  uRam00007fffa478685e = 0;
  uRam00007fffa4786846 = 0;
  uRam00007fffa478684e = 0;
  uRam00007fffa4786836 = 0;
  uRam00007fffa478683e = 0;
  uRam00007fffa4786826 = 0;
  uRam00007fffa478682e = 0;
  uRam00007fffa4786870 = 0;
  uVar1 = rdtsc();
  lVar3 = 4;
  lVar2 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) * 0x870c0ab7aebc311;
  while( true ) {
    *(char *)(lVar3 + 0x7fffa478680c) = (char)((uint64_t)(lVar2 * 0xab7aebc311) >> 0x20);
    *(char *)(lVar3 + 0x7fffa478680e) = (char)((uint64_t)(lVar2 * 0x4da4c07c31) >> 0x20);
    *(char *)(lVar3 + 0x7fffa478680f) = (char)((uint64_t)(lVar2 * 0x42ea5c9241) >> 0x20);
    *(char *)(lVar3 + 0x7fffa4786810) = (char)((uint64_t)(lVar2 * 0x7176690e4f383951) >> 0x20);
    *(char *)(lVar3 + 0x7fffa478680d) = (char)((uint64_t)(lVar2 * 0xc1e9d8e721) >> 0x20);
    if (lVar3 == 0x72) break;
    lVar3 = lVar3 + 5;
    lVar2 = lVar2 * 0x7176690e4f383951;
  }
  bRam00007fffa478681c = bRam00007fffa478681c + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa478681c * 8 + 0x7fffa4786826) = uRam00007fffa4786870;
  return;
}


// ============================================================================
// Function : FUN_7fffa52468b0  |  RVA: 0xad68b0  |  Size: 1394 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa52468b0(void)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t bVar7;
  uint32_t uVar8;
  uint8_t auVar9 [16];
  uint32_t uVar10;
  uint32_t in_EAX;
  uint8_t bVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint64_t *in_R9;
  uint64_t uVar18;
  uint64_t in_R11;
  uint64_t uVar19;
  int64_t lVar20;
  uint8_t *puVar21;
  float fVar22;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint64_t in_stack_00000028;
  short sStack_c0;
  uint8_t *puStack_a0;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint8_t *puStack_70;
  int64_t lStack_68;
  uint32_t uStack_5c;
  
  uVar15 = in_EAX | 1;
  uVar19 = *(uint64_t *)(((int64_t)(short)((short)uVar15 * -0x615b) ^ 0x639dU) + 0x7fffa4785572);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar19;
  uVar12 = ~in_stack_00000028 * 0xe584a933b042a4b;
  uVar12 = (uVar12 << 0x24 | uVar12 >> 0x1c) ^ (uVar12 << 0x2d | uVar12 >> 0x13) ^ uVar12;
  uVar12 = (uVar12 << 0x1a | uVar12 >> 0x26) ^ (uVar12 << 8 | uVar12 >> 0x38) ^ uVar12;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar19;
  auVar9._8_8_ = 1;
  auVar9._0_8_ = 0x4325c53ef368eb0;
  fVar22 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar4 * auVar9,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar4 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar3 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar18 = (int64_t)(fVar22 - 9.223372e+18) & (int64_t)fVar22 >> 0x3f | (int64_t)fVar22;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar18;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar18;
  uVar14 = SUB168(auVar6 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar6 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar5 * ZEXT816(0x1111111111111112),8));
  uVar19 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> uVar19 == 0; uVar19 = uVar19 - 1) {
    }
  }
  uStack_80 = 0x3f;
  if (0x1d < uVar18) {
    uStack_80 = uVar19 ^ 0x3f;
  }
  bVar7 = (uint8_t)uStack_80;
  lVar17 = 1L << (-bVar7 & 0x3f);
  uVar12 = (uVar12 << 0x10 | uVar12 >> 0x30) ^ (uVar12 << 0x34 | uVar12 >> 0xc) ^ uVar12;
  uVar12 = (uVar12 << 0x20 | uVar12 >> 0x20) ^ (uVar12 << 0x28 | uVar12 >> 0x18) ^ uVar12;
  uVar19 = (uVar12 << 0x28 | uVar12 >> 0x18) ^ (uVar12 << 0x35 | uVar12 >> 0xb) ^
           (uVar12 << 0x14 | uVar12 >> 0x2c);
  uVar19 = (uVar19 << 0x28 | uVar19 >> 0x18) ^ (uVar19 << 2 | uVar19 >> 0x3e) ^ uVar19;
  uVar19 = (uVar19 << 4 | uVar19 >> 0x3c) ^ (uVar19 << 0x10 | uVar19 >> 0x30) ^ uVar19;
  uStack_78 = lVar17 - 1;
  uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) ^ (uVar19 << 8 | uVar19 >> 0x38) ^ uVar19;
  lStack_68 = 0;
  uStack_5c = uVar15;
  if (uVar18 == 0) {
    lVar16 = 0;
    puVar21 = &UNK_7fffa56ee720;
  }
  else {
    bVar11 = 0x40 - bVar7;
    lVar20 = 0x78L << (bVar11 & 0x3f);
    uVar12 = (uint64_t)in_EAX;
    uVar18 = (0x88L << (bVar11 & 0x3f)) + 0xeU & 0xfffffffffffffff8;
    (*(code *)((int64_t)(short)((short)uVar15 * -0x3a95 + -0x328d) + 0x7fffa526f728))
              (uVar12,uVar14,uVar18 << 0x3c ^ uVar18);
    lVar16 = (uVar12 << 0x2c | uVar12 >> 0x14) - ((uVar12 >> 0x14) << 0x36);
    puVar21 = (uint8_t *)
              ((uint64_t)(-((int)lVar16 + (int)lVar20 + -8) & 0xf) + lVar16 + lVar20 + -8);
    lStack_68 = lVar16;
    FUN_7fffa4ecf8e0(puVar21,0,0x10L << (bVar11 & 0x3f));
    puVar21[lVar17 * 0x10 + -2] = 1;
  }
  uVar10 = uStack_5c;
  in_R9[2] = 0;
  *in_R9 = 0;
  *(uint32_t *)(in_R9 + 1) = 0;
  uVar12 = (uVar19 << 0x30 | uVar19 >> 0x10) >> (bVar7 & 0x3f);
  puStack_a0 = puVar21 + uVar12 * 0x10;
  pcVar1 = puVar21 + uVar12 * 0x10;
  auVar23[0] = -(*pcVar1 == '\0');
  auVar23[1] = -(pcVar1[1] == '\0');
  auVar23[2] = -(pcVar1[2] == '\0');
  auVar23[3] = -(pcVar1[3] == '\0');
  auVar23[4] = -(pcVar1[4] == '\0');
  auVar23[5] = -(pcVar1[5] == '\0');
  auVar23[6] = -(pcVar1[6] == '\0');
  auVar23[7] = -(pcVar1[7] == '\0');
  auVar23[8] = -(pcVar1[8] == '\0');
  auVar23[9] = -(pcVar1[9] == '\0');
  auVar23[10] = -(pcVar1[10] == '\0');
  auVar23[0xb] = -(pcVar1[0xb] == '\0');
  auVar23[0xc] = -(pcVar1[0xc] == '\0');
  auVar23[0xd] = -(pcVar1[0xd] == '\0');
  auVar23[0xe] = -(pcVar1[0xe] == '\0');
  auVar23[0xf] = -(pcVar1[0xf] == '\0');
  uVar15 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar23 >> 7,0) & 1) |
                          (uint16_t)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                         (uint16_t)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe);
  if (uVar15 == 0) {
    lVar17 = 1;
    while( true ) {
      puStack_a0[0xf] = puStack_a0[0xf] | '\x01' << ((uint8_t)(uVar19 >> 0x10) & 7);
      uVar12 = uVar12 + lVar17 & uStack_78;
      puStack_a0 = puVar21 + uVar12 * 0x10;
      pcVar1 = puVar21 + uVar12 * 0x10;
      auVar24[0] = -(*pcVar1 == '\0');
      auVar24[1] = -(pcVar1[1] == '\0');
      auVar24[2] = -(pcVar1[2] == '\0');
      auVar24[3] = -(pcVar1[3] == '\0');
      auVar24[4] = -(pcVar1[4] == '\0');
      auVar24[5] = -(pcVar1[5] == '\0');
      auVar24[6] = -(pcVar1[6] == '\0');
      auVar24[7] = -(pcVar1[7] == '\0');
      auVar24[8] = -(pcVar1[8] == '\0');
      auVar24[9] = -(pcVar1[9] == '\0');
      auVar24[10] = -(pcVar1[10] == '\0');
      auVar24[0xb] = -(pcVar1[0xb] == '\0');
      auVar24[0xc] = -(pcVar1[0xc] == '\0');
      auVar24[0xd] = -(pcVar1[0xd] == '\0');
      auVar24[0xe] = -(pcVar1[0xe] == '\0');
      auVar24[0xf] = -(pcVar1[0xf] == '\0');
      uVar15 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar24 >> 7,0) & 1) |
                              (uint16_t)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                              (uint16_t)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                              (uint16_t)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                              (uint16_t)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                              (uint16_t)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                              (uint16_t)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                              (uint16_t)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                              (uint16_t)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                              (uint16_t)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                              (uint16_t)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                              (uint16_t)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                              (uint16_t)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                              (uint16_t)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                             (uint16_t)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe);
      if (uVar15 != 0) break;
      lVar17 = lVar17 + 1;
    }
    lVar16 = lStack_68;
  }
  else {
  }
  uVar14 = (uint64_t)in_EAX;
  bVar7 = (uint8_t)in_EAX & 0x1f;
  uVar8 = 0;
  for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
    uVar8 = uVar8 + 1;
  }
  uVar18 = (uint64_t)uVar8;
  lVar16 = uVar12 * 0x78 + lVar16;
  sStack_c0 = (short)uStack_5c * 0x481f;
  puStack_70 = puVar21;
  (*(code *)((int64_t)
             (short)(((uint16_t)(in_EAX ^ 0x59ec) >> 1 | (uint16_t)(((in_EAX ^ 0x59ec) & 1) != 0) << 0xf
                     ) + 0xa546) + 0x7fffa526e7a1))();
  puVar13 = (uint64_t *)((uVar14 << 0x2c | uVar14 >> 0x14) - ((uVar14 >> 0x14) << 0x36));
  *(uint64_t **)(lVar16 + uVar18 * 8) = puVar13;
  *puVar13 = *(uint64_t *)(in_R11 ^ 0xffffffff80dec53f);
  uVar15 = uVar10 * -0x48f0f93a + 0x6ad4eaf4;
  *(uint8_t (*) [16])(puVar13 + 3) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(puVar13 + 1) = (uint8_t  [16])0x0;
  uVar2 = (&UNK_7fffa5830f20)[(uVar19 >> 0x10 & 0xff) * 4];
  puStack_a0[uVar18] = uVar2;
  *in_R9 = puStack_a0;
  in_R9[2] = uVar18 * 8 + lVar16;
  *(uint32_t *)(in_R9 + 1) = uVar8;
  (*(code *)((int64_t)(int)(0xffffd879U >> bVar7 | -0x2787 << 0x20 - bVar7) + 0x7fffa562fe29))
            (puVar13,uVar2,uVar15 * 0x80 | uVar15 >> 0x19,
             ((int64_t)&uStack_80 * 0x800 | (uint64_t)&uStack_80 >> 0x35) ^
             ((int64_t)&uStack_80 * 0x8000000 | (uint64_t)&uStack_80 >> 0x25) ^
             (uint64_t)&uStack_80);
  *(int64_t *)((int64_t)(int)(0xb25e2ae9 - in_EAX ^ 0xa719d30c) + 0x7fffa478f851) =
       *(int64_t *)((int64_t)sStack_c0 + 0x7fffa4786e57) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa5246e30  |  RVA: 0xad6e30  |  Size: 18 bytes
// Callers  : FUN_7fffa5687890@0xf17890, FUN_7fffa507cf70@0x90cf70, FUN_7fffa517b810@0xa0b810, FUN_7fffa5215120@0xaa5120, FUN_7fffa54037a0@0xc937a0, FUN_7fffa4ab2700@0x342700, FUN_7fffa4e8ea00@0x71ea00, FUN_7fffa560923a@0xe9923a
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint64_t FUN_7fffa5246e30(void)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa54539d0();
  return *(uint64_t *)(lVar1 + 0x68);
}


// ============================================================================
// Function : FUN_7fffa5246e50  |  RVA: 0xad6e50  |  Size: 1492 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa5247423) overlaps instruction at (ram,0x7fffa5247422)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa5247418) */
/* WARNING: Removing unreachable block (ram,0x7fffa5246f19) */
/* WARNING: Removing unreachable block (ram,0x7fffa5247402) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x7fffa47bd468 : 0x7fffa52472a3 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint64_t FUN_7fffa5246e50(uint64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  code *pcVar5;
  uint8_t bVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint8_t *puVar9;
  uint8_t *puVar10;
  int iVar11;
  int64_t *plVar12;
  uint8_t bVar13;
  uint8_t bVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint8_t bVar17;
  uint8_t in_TF;
  float10 fVar18;
  uint8_t auStack_78 [56];
  uint32_t uStack_40;
  
  puVar9 = auStack_78;
  uStack_40 = 0xa132c3f4;
  puVar10 = auStack_78;
  if ((param_1 == (uint64_t *)0x0) || (puVar10 = auStack_78, 0xffffffff < param_2))
  goto LAB_7fffa52473c4;
  if ((((int64_t)ProcessEnvironmentBlock + 0x6da3f9acbc9affefU) * 0x4000000 |
      (int64_t)ProcessEnvironmentBlock + 0x6da3f9acbc9affefU >> 0x26) == 0xc7a2f6eeadcc6f73) {
    puVar9 = (uint8_t *)0x7aa275bf;
  }
  uVar15 = (uint64_t)bRam00007fffa47bbb03;
  puVar9[0x38] = *(uint8_t *)(uVar15 * 8 + 0x7fffa47bbb06) ^ bRam00007fffa47bbb43;
  puVar9[0x39] = *(uint8_t *)(uVar15 * 8 + 0x7fffa47bbb07) ^ bRam00007fffa47bbb44;
  puVar9[0x3a] = bRam00007fffa47bbb45 ^ *(uint8_t *)(uVar15 * 8 + 0x7fffa47bbb08);
  puVar9[0x3b] = bRam00007fffa47bbb46 ^ *(uint8_t *)(uVar15 * 8 + 0x7fffa47bbb09);
  puVar9[0x3c] = bRam00007fffa47bbb47 ^ *(uint8_t *)(uVar15 * 8 + 0x7fffa47bbb0a);
  puVar9[0x3d] = bRam00007fffa47bbb48 ^ *(uint8_t *)(uVar15 * 8 + 0x7fffa47bbb0b);
  puVar9[0x3e] = bRam00007fffa47bbb49 ^ *(uint8_t *)(uVar15 * 8 + 0x7fffa47bbb0c);
  puVar9[0x3f] = bRam00007fffa47bbb4a ^ *(uint8_t *)(uVar15 * 8 + 0x7fffa47bbb0d);
  lVar1 = *(int64_t *)(puVar9 + 0x38);
  iVar11 = (int)ClientId.UniqueThread;
  if (iRam00007fffa47bd468 != iVar11) {
    *(uint64_t *)(puVar9 + -8) = 0x7fffa5247019;
    (*(code *)&DAT_7ff8504ead30)(0x7fffa47bd470);
    LOCK();
    UNLOCK();
    iRam00007fffa47bd468 = iVar11;
  }
  bVar6 = bRam00007fffa47bf385;
  bVar14 = bRam00007fffa47bf384;
  bVar17 = bRam00007fffa47bf383;
  iRam00007fffa47bd46c = iRam00007fffa47bd46c + 1;
  uVar15 = (uint64_t)bRam00007fffa47bf358;
  bVar13 = ~(*(uint8_t *)(uVar15 * 4 + 0x7fffa47bf360) ^ bRam00007fffa47bf382);
  puVar9[0x38] = bVar13 >> 1 | bVar13 << 7;
  bVar17 = ~(bVar17 ^ *(uint8_t *)(uVar15 * 4 + 0x7fffa47bf361));
  puVar9[0x39] = bVar17 >> 1 | bVar17 << 7;
  bVar17 = ~(bVar14 ^ *(uint8_t *)(uVar15 * 4 + 0x7fffa47bf362));
  bVar17 = bVar17 >> 1 | bVar17 << 7;
  plVar7 = (int64_t *)(uint64_t)bVar17;
  puVar9[0x3a] = bVar17;
  bVar17 = *(uint8_t *)(uVar15 * 4 + 0x7fffa47bf363) ^ bVar6;
  bVar14 = ~bVar17;
  puVar9[0x3b] = bVar14 >> 1 | bVar14 << 7;
  if (*(int *)(puVar9 + 0x38) == 0) {
    *(uint32_t *)(puVar9 + 0x38) = 0x12952fa7;
    plVar12 = (int64_t *)0x0;
  }
  else {
    *(uint32_t *)(puVar9 + 0x38) = 0x49400d0;
    plVar7 = (int64_t *)0x0;
    if ((param_2 != 0) && (param_2 <= *(int64_t *)(lVar1 + 0x208) - 0x20U)) {
      lVar2 = 0x3f;
      if (param_2 + 0x1f != 0) {
        for (; param_2 + 0x1f >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar16 = 1L << (-((uint8_t)lVar2 ^ 0x3f) & 0x3f);
      uVar15 = (uVar16 >> 6) - 1;
      lVar2 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar15 = -1L << ((char)lVar2 + 1U & 0x3f);
      if (param_2 < 0x21) {
        uVar15 = 0xffffffffffffffff;
      }
      plVar7 = (int64_t *)(uVar15 & *(uint64_t *)(lVar1 + 0x200));
      if (((uint64_t)plVar7 & -(int64_t)plVar7) != 0) {
        lVar2 = 0;
        for (; ((uint64_t)plVar7 & 1) == 0;
            plVar7 = (int64_t *)((uint64_t)plVar7 >> 1 | 0x8000000000000000)) {
          lVar2 = lVar2 + 1;
        }
        plVar7 = *(int64_t **)(lVar1 + lVar2 * 8);
        uVar15 = plVar7[2];
        lVar2 = plVar7[5];
        if (plVar7[4] != 0) {
          *(int64_t *)(plVar7[4] + 0x28) = lVar2;
        }
        plVar12 = plVar7 + 4;
        lVar3 = 0x3f;
        if (uVar15 >> 6 != 0) {
          for (; (uVar15 >> 6) >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        if (lVar2 != 0) {
          *(int64_t *)(lVar2 + 0x20) = *plVar12;
        }
        if ((*(int64_t **)(lVar1 + lVar3 * 8) == plVar7) &&
           (lVar2 = *plVar12, *(int64_t *)(lVar1 + lVar3 * 8) = lVar2, lVar2 == 0)) {
          bVar14 = (uint8_t)lVar3 & 0x3f;
          *(uint64_t *)(lVar1 + 0x200) =
               *(uint64_t *)(lVar1 + 0x200) &
               (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
        }
        lVar2 = plVar7[2];
        plVar7[2] = uVar16;
        uVar15 = lVar2 - uVar16;
        if (0x3f < uVar15) {
          lVar3 = *plVar7;
          lVar2 = (int64_t)plVar7 + uVar16;
          *(uint64_t *)((int64_t)plVar7 + uVar16 + 0x10) = uVar15;
          *(int64_t *)((int64_t)plVar7 + uVar16) = lVar3;
          *(uint8_t *)((int64_t)plVar7 + uVar16 + 0x18) = 0;
          if (lVar3 != 0) {
            *(int64_t *)(lVar3 + 8) = lVar2;
            uVar15 = *(uint64_t *)(lVar2 + 0x10);
          }
          *(int64_t **)(lVar2 + 8) = plVar7;
          *plVar7 = lVar2;
          uVar4 = 0x3f;
          if (uVar15 >> 6 != 0) {
            for (; (uVar15 >> 6) >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          *(uint64_t *)(lVar2 + 0x20) = *(uint64_t *)(lVar1 + uVar4 * 8);
          *(uint64_t *)(lVar2 + 0x28) = 0;
          lVar3 = *(int64_t *)(lVar1 + uVar4 * 8);
          if (lVar3 != 0) {
            *(int64_t *)(lVar3 + 0x28) = lVar2;
          }
          uVar15 = *(uint64_t *)(lVar1 + 0x200);
          *(int64_t *)(lVar1 + uVar4 * 8) = lVar2;
          *(uint64_t *)(lVar1 + 0x200) = uVar15 | 1L << (uVar4 & 0x3f);
        }
        *(int64_t *)(lVar1 + 0x210) = *(int64_t *)(lVar1 + 0x210) + uVar16;
        *(uint8_t *)(plVar7 + 3) = 1;
        goto LAB_7fffa524728a;
      }
    }
    plVar12 = (int64_t *)0x0;
  }
LAB_7fffa524728a:
  iVar11 = iRam00007fffa47bd468;
  iRam00007fffa47bd46c = iRam00007fffa47bd46c + -1;
  if (iRam00007fffa47bd46c == 0) {
    LOCK();
    iRam00007fffa47bd468 = 0;
    UNLOCK();
    *(uint64_t *)(puVar9 + -8) = 0x7fffa52472b3;
    plVar7 = (int64_t *)(*(code *)&DAT_7ff8504eba90)(0x7fffa47bd470,bVar17,bVar6,iVar11);
  }
  *(uint32_t *)(puVar9 + 0x38) = 0xd1283f58;
  if ((*(uint32_t *)(puVar9 + 0x38) & 1) != 0) {
    if ((*(uint32_t *)(puVar9 + 0x38) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar5 = (code *)__debugbreak();
    uVar8 = (*pcVar5)(0);
    return uVar8;
  }
  *(uint32_t *)(puVar9 + 0x38) = 0xdfd86305;
  if ((*(uint32_t *)(puVar9 + 0x38) & 1) == 0) {
    plVar7 = (int64_t *)(uint64_t)*(uint32_t *)(puVar9 + 0x38);
  }
  *param_1 = plVar12;
  *(uint32_t *)(puVar9 + 0x38) = 0xb42fe9c;
  if (*(int *)(puVar9 + 0x38) < 0) {
    fVar18 = (float10)from_bcd(*(unkbyte10 *)((int64_t)plVar12 + 0x4c565aff + (int64_t)param_1));
    *plVar7 = (int64_t)fVar18;
  }
  if (plVar12 == (int64_t *)0x0) {
    *(uint32_t *)(puVar9 + 0x38) = 0x1d3f3082;
    return 5;
  }
  puVar10 = puVar9;
  if ((in_TF & 1) == 0) {
    *(uint32_t *)(puVar9 + 0x38) = 0x6519bce8;
    *(uint64_t *)(puVar9 + -8) = 0x7fffa5247380;
    FUN_7fffa4ecf8e0(plVar12,0,param_2,*(uint32_t *)(puVar9 + 0x38));
    *(uint32_t *)(puVar9 + 0x38) = 0xbdb522ec;
    return 0;
  }
LAB_7fffa52473c4:
  *(uint32_t *)(puVar10 + 0x38) = 0x859d4d4a;
  return 4;
}


// ============================================================================
// Function : FUN_7fffa5247430  |  RVA: 0xad7430  |  Size: 643 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa5247430(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  uRam00007fffa4786000 = 0;
  uRam00007fffa4786008 = 0;
  uRam00007fffa4785ff0 = 0;
  uRam00007fffa4785ff8 = 0;
  uRam00007fffa478601f = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar1)) * 0x20c96bc42f446bd;
  for (lVar2 = 0;
      *(char *)(lVar2 + 0x7fffa4785fe8) = (char)((uint64_t)(lVar3 * 0xbc42f446bd) >> 0x20),
      ((lVar2 + 0xe5c0c6c0U) * 0x1000000 | lVar2 + 0xe5c0c6c0U >> 0x28) != 0xe5c0c708000000;
      lVar2 = lVar2 + 4) {
    *(char *)(lVar2 + 0x7fffa4785fea) = (char)((uint64_t)(lVar3 * 0x48b1556625) >> 0x20);
    *(char *)(lVar2 + 0x7fffa4785fe9) = (char)((uint64_t)(lVar3 * 0x285fd3e789) >> 0x20);
    *(char *)(lVar2 + 0x7fffa4785feb) = (char)((uint64_t)(lVar3 * -0x75a341f0d4c178af) >> 0x20);
    lVar3 = lVar3 * -0x75a341f0d4c178af;
  }
  bRam00007fffa4785fee =
       *(char *)((int64_t)(short)((0x180f - (short)lVar2) * 0x5eb) + 0x7fffa478a941) + 1U & 7;
  *(uint32_t *)
   ((uint64_t)((uint32_t)bRam00007fffa4785fee * 4) + (int64_t)(-0xa048 - (int)lVar2) + 0x7fffa4790080)
       = 0;
  return (int64_t)(((int)lVar2 + 1) * -0x773ba00e) + 0x7fffa47903e6;
}


// ============================================================================
// Function : FUN_7fffa52476c0  |  RVA: 0xad76c0  |  Size: 4934 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa52476c0(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4
                          ,uint32_t param_5)

{
  char *pcVar1;
  int *piVar2;
  uint32_t uVar3;
  uint8_t bVar4;
  uint16_t uVar5;
  uint64_t in_RAX;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int iVar11;
  int64_t lVar12;
  uint32_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  int iVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint8_t bVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  int64_t in_R10;
  int64_t lVar25;
  uint64_t *puVar26;
  uint32_t uVar27;
  uint64_t uVar28;
  uint64_t *puVar29;
  uint32_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  bool bVar33;
  char cVar34;
  uint8_t uVar36;
  char cVar37;
  uint8_t uVar38;
  char cVar39;
  uint8_t uVar40;
  char cVar41;
  uint8_t auVar35 [16];
  uint8_t auVar42 [16];
  uint32_t auStack_1c8 [64];
  int64_t lStack_c8;
  uint64_t *puStack_c0;
  int iStack_b8;
  uint32_t uStack_b4;
  uint64_t uStack_b0;
  int64_t lStack_a8;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int64_t lStack_68;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t uStack_48;
  
  puStack_c0 = (uint64_t *)(in_R10 + 0x19d54fd5);
  uVar28 = in_RAX >> 0x31 ^ in_RAX;
  uVar28 = (uVar28 << 0x22 | in_RAX >> 0x1e) ^ (uVar28 << 1 | (uint64_t)((int64_t)uVar28 < 0)) ^
           uVar28;
  uVar28 = (uVar28 << 2 | uVar28 >> 0x3e) ^ (uVar28 << 4 | uVar28 >> 0x3c) ^ uVar28;
  uStack_b4 = param_5 | 1;
  bVar4 = (uint8_t)param_5;
  uVar5 = 0U >> (bVar4 & 0xf) | 0 << 0x10 - (bVar4 & 0xf);
  uVar13 = 1 << (*(uint8_t *)(param_2 + 0x100) & 0x1f);
  uVar27 = *(uint32_t *)(param_2 + 0x10c);
  uVar30 = 4;
  if (uVar27 < 4) {
    uVar30 = uVar27;
  }
  iStack_b8 = 1 << ((char)uVar27 - 4U & 0x1f);
  uStack_48 = (uint64_t)*(uint32_t *)(param_2 + 0x18);
  _uStack_50 = CONCAT44(uStack_4c,*(uint32_t *)(param_2 + 0x34));
  if (uVar27 <= (param_5 + 0x97ba5bc & 0xffff)) {
    iStack_b8 = 0;
  }
  uVar28 = (uVar28 << 4 | uVar28 >> 0x3c) ^ (uVar28 << 8 | uVar28 >> 0x38) ^ uVar28;
  uVar28 = (uVar28 << 0x10 | uVar28 >> 0x30) ^ (uVar28 << 8 | uVar28 >> 0x38) ^ uVar28;
  puStack_98 = *(uint64_t **)(param_2 + 0xf8);
  lVar12 = *(int64_t *)(param_2 + 0x38);
  lStack_c8 = lVar12;
  iVar11 = 1 << ((uint8_t)uVar30 & 0x1f);
  uVar28 = (uVar28 << 0x10 | uVar28 >> 0x30) ^ (uVar28 << 0x20 | uVar28 >> 0x20) ^ uVar28;
  puStack_90 = (uint64_t *)((uVar28 << 0x20 | uVar28 >> 0x20) * 0x5970a50c4a458e39);
  uVar27 = *(uint32_t *)(param_2 + 0x1c);
  lStack_68 = *(int64_t *)(param_2 + 0x70);
  lVar15 = *(int64_t *)(param_2 + 8);
  uStack_78 = (int64_t)puStack_90 - lVar15;
  uVar18 = (uint32_t)uStack_78;
  uVar30 = uVar18 - uVar13;
  if (uVar18 - uVar27 <= uVar13) {
    uVar30 = uVar27;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar30 = uVar27;
  }
  puVar29 = puStack_90;
  uVar27 = (int)*puStack_90 * -0x61c8864f;
  uStack_70 = (uint64_t)
              (uVar27 >> (uint64_t)(0x22 - *(int *)(*(uint64_t **)(param_2 + 0xf8) + 0x21)));
  lStack_a8 = lVar15;
  uVar13 = (uint32_t)*(uint64_t *)(param_2 + 0x60);
  cVar34 = (char)*(uint32_t *)(param_2 + 0x34);
  if (*(uint32_t *)(param_2 + 300) == (uint32_t)(uint16_t)(uVar5 << 7 | uVar5 >> 9)) {
    uVar27 = *(uint32_t *)(param_2 + 0x2c);
    uVar28 = (uint64_t)uVar27;
    lVar25 = lVar12;
    lVar7 = lStack_68;
    if (0x180 < uVar18 - uVar27) {
      uVar5 = (short)param_5 + 0x46b7;
      uVar23 = 0x3cc2e701U >> (bVar4 & 0x1f) | 0x3cc2e701 << 0x20 - (bVar4 & 0x1f);
      bVar33 = uVar27 < 0xffffffa0;
      if ((uint64_t)
          (int64_t)
          (int)((-0x560033d3 << (bVar4 & 0x1f) | 0xa9ffcc2dU >> 0x20 - (bVar4 & 0x1f)) * -0xf44c0a3)
          <= (uint64_t)(uVar23 << 0x1b | uVar23 >> 5)) {
        bVar33 = uVar27 <= (uint32_t)(int)(short)(uVar5 * 0x100 | uVar5 >> 8);
      }
      if (bVar33) {
        do {
          uVar24 = (uint32_t)uVar28;
          uVar32 = (uint64_t)(uVar24 & 7);
          piVar2 = (int *)(lVar15 + 8 + uVar28);
          uVar28 = uVar28 + 1;
          uVar23 = *(uint32_t *)(param_2 + 0x40 + uVar32 * 4);
          *(uint32_t *)(param_2 + 0x40 + uVar32 * 4) =
               (*piVar2 * -0x61c8864f ^ *(uint32_t *)(param_2 + 0x60)) >> (0x18U - cVar34 & 0x1f);
          uVar32 = (uint64_t)(uVar23 >> 4 & 0xfffffff0);
          bVar22 = *(uint8_t *)(lVar12 + uVar32) & 0xf;
          bVar33 = bVar22 == 1;
          if (((param_5 ^ 0x1cfaa5b5) << 0xf | (param_5 ^ 0x1cfaa5b5) >> 0x11) <=
              param_5 + 0x636370b1) {
            bVar33 = bVar22 != 0;
          }
          lVar25 = 0;
          if (bVar33) {
            lVar25 = 0xf;
          }
          lVar25 = lVar25 + (uint64_t)(*(uint8_t *)(lVar12 + uVar32) - 1 & 0xf);
          *(char *)(lVar12 + uVar32) = (char)lVar25;
          *(char *)(lVar12 + uVar32 + lVar25) = (char)uVar23;
          *(uint32_t *)(lStack_68 + uVar32 * 4 + lVar25 * 4) = uVar24;
        } while (uVar27 + 0x60 != uVar28);
        lVar25 = *(int64_t *)(param_2 + 0x38);
        lVar7 = *(int64_t *)(param_2 + 0x70);
      }
      uVar27 = uVar18 - 0x20;
      uVar28 = (uint64_t)uVar27;
      piVar2 = (int *)(lVar15 + uVar28);
      uVar24 = ((int)(int *)((int64_t)puStack_90 + 1U) - (int)piVar2) + 1;
      uVar23 = 8;
      if (uVar24 < 8) {
        uVar23 = uVar24;
      }
      uVar24 = 0;
      if (piVar2 <= (int *)((int64_t)puStack_90 + 1U)) {
        uVar24 = uVar23;
      }
      if (uVar27 < (uVar24 + uVar18) - 0x20) {
        bVar22 = 0x18 - (char)*(uint32_t *)(param_2 + 0x34);
        uVar23 = *(uint32_t *)(param_2 + 0x60);
        if ((uVar24 & 1) != 0) {
          *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar27 & 7) * 4) =
               (*piVar2 * -0x61c8864f ^ uVar23) >> (bVar22 & 0x1f);
          uVar28 = uVar28 + 1;
        }
        if (uVar24 != 1) {
          iVar19 = (((uVar24 + (int)puStack_90) - (int)uVar28) - (int)lVar15) + -0x20;
          do {
            uVar24 = (uint32_t)uVar28;
            *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar24 & 7) * 4) =
                 (*(int *)(lVar15 + uVar28) * -0x61c8864f ^ uVar23) >> (bVar22 & 0x1f);
            piVar2 = (int *)(lVar15 + 1 + uVar28);
            uVar28 = uVar28 + 2;
            *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar24 + 1 & 7) * 4) =
                 (*piVar2 * -0x61c8864f ^ uVar23) >> (bVar22 & 0x1f);
            iVar19 = iVar19 + -2;
          } while (iVar19 != 0);
        }
      }
    }
    if (uVar27 < uVar18) {
      lVar14 = *(int64_t *)(param_2 + 8);
      uVar3 = *(uint32_t *)(param_2 + 0x34);
      uVar28 = (uint64_t)uVar27;
      do {
        uVar32 = (uint64_t)((uint32_t)uVar28 & 7);
        uVar27 = *(uint32_t *)(param_2 + 0x40 + uVar32 * 4);
        uVar17 = (uint64_t)(uVar27 >> 4 & 0xfffffff0);
        *(uint32_t *)(param_2 + 0x40 + uVar32 * 4) =
             (*(int *)(lVar14 + 8 + uVar28) * -0x61c8864f ^ *(uint32_t *)(param_2 + 0x60)) >>
             (0x18U - (char)uVar3 & 0x1f);
        lVar6 = 0;
        if ((uint8_t)(*(uint8_t *)(lVar25 + uVar17) & 0xf) ==
            (uint8_t)((((char)(param_5 | 1) * -0x5e + 0x11U | 1) * '\x1b' + -0x18) * (bVar4 | 1))) {
          lVar6 = 0xf;
        }
        lVar6 = lVar6 + (uint64_t)(*(uint8_t *)(lVar25 + uVar17) - 1 & 0xf);
        *(char *)(lVar25 + uVar17) = (char)lVar6;
        *(char *)(lVar25 + uVar17 + lVar6) = (char)uVar27;
        *(uint32_t *)(uVar17 * 4 + lVar7 + lVar6 * 4) = (uint32_t)uVar28;
        uVar28 = uVar28 + 1;
      } while ((uStack_78 & 0xffffffff) != uVar28);
    }
    uVar27 = -0x2ce31dff << (bVar4 & 0x1f) | 0xd31ce201U >> 0x20 - (bVar4 & 0x1f);
    if ((uVar27 << 0x15 | uVar27 >> 0xb) < 0x74f1b592) {
      *(uint32_t *)(param_2 + 0x2c) = uVar18;
    }
    else {
      *(uint32_t *)(param_2 + 0x2c) = uVar18;
    }
    uVar27 = *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar18 & 7) * 4);
    *(uint32_t *)(param_2 + 0x40 + (uint64_t)(uVar18 & 7) * 4) =
         (*(int *)(lVar15 + 8 + (uStack_78 & 0xffffffff)) * -0x61c8864f ^ uVar13) >>
         (0x18U - cVar34 & 0x1f);
  }
  else {
    *(uint32_t *)(param_2 + 0x2c) = uVar18;
    uVar27 = (uVar13 ^ uVar27) >> (0x18U - cVar34 & 0x1f);
  }
  uVar28 = (uint64_t)(uVar27 >> 4 & 0xfffffff0);
  uVar40 = (uint8_t)(uVar27 >> 0x18);
  uVar38 = (uint8_t)(uVar27 >> 0x10);
  uVar36 = (uint8_t)(uVar27 >> 8);
  auVar35._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar40,uVar40),uVar38),CONCAT14(uVar38,uVar27)) >> 0x20);
  auVar35[3] = uVar36;
  auVar35[2] = uVar36;
  auVar35[0] = (uint8_t)uVar27;
  auVar35[1] = auVar35[0];
  auVar35._8_8_ = 0;
  auVar35 = pshuflw(auVar35,auVar35,0);
  uStack_b0 = (uint64_t)uVar27;
  *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + uVar27;
  lVar25 = uVar28 * 4 + lStack_68;
  pcVar1 = (char *)(lVar12 + uVar28);
  cVar34 = auVar35[0];
  auVar42[0] = -(*pcVar1 == cVar34);
  cVar37 = auVar35[1];
  auVar42[1] = -(pcVar1[1] == cVar37);
  cVar39 = auVar35[2];
  auVar42[2] = -(pcVar1[2] == cVar39);
  cVar41 = auVar35[3];
  auVar42[3] = -(pcVar1[3] == cVar41);
  auVar42[4] = -(pcVar1[4] == cVar34);
  auVar42[5] = -(pcVar1[5] == cVar37);
  auVar42[6] = -(pcVar1[6] == cVar39);
  auVar42[7] = -(pcVar1[7] == cVar41);
  auVar42[8] = -(pcVar1[8] == cVar34);
  auVar42[9] = -(pcVar1[9] == cVar37);
  auVar42[10] = -(pcVar1[10] == cVar39);
  auVar42[0xb] = -(pcVar1[0xb] == cVar41);
  auVar42[0xc] = -(pcVar1[0xc] == cVar34);
  auVar42[0xd] = -(pcVar1[0xd] == cVar37);
  auVar42[0xe] = -(pcVar1[0xe] == cVar39);
  auVar42[0xf] = -(pcVar1[0xf] == cVar41);
  uVar5 = (uint16_t)(SUB161(auVar42 >> 7,0) & 1) | (uint16_t)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
          (uint16_t)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
          (uint16_t)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
          (uint16_t)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
          (uint16_t)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
          (uint16_t)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
          (uint16_t)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
          (uint16_t)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
          (uint16_t)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
          (uint16_t)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
          (uint16_t)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
          (uint16_t)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
          (uint16_t)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
          (uint16_t)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar42[0xf] >> 7) << 0xf;
  uVar27 = (uint32_t)*(uint8_t *)(lVar12 + uVar28);
  puStack_90 = puVar29;
  if (uVar5 == 0) {
    lVar7 = 0;
  }
  else {
    bVar22 = *(uint8_t *)(lVar12 + uVar28) & 0xf;
    uVar32 = (uint64_t)(uint16_t)(uVar5 >> bVar22 | uVar5 << 0x10 - bVar22);
    lVar7 = 0;
    do {
      iVar19 = 0;
      for (uVar17 = uVar32; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
        iVar19 = iVar19 + 1;
      }
      uVar13 = iVar19 + uVar27 & 0xf;
      if (uVar13 != (param_5 - 0x5a48 & 0xffff)) {
        uVar13 = *(uint32_t *)(lVar25 + (uint64_t)uVar13 * 4);
        if (uVar13 < uVar30) break;
        auStack_1c8[lVar7] = uVar13;
        lVar7 = lVar7 + 1;
        iVar11 = iVar11 + -1;
      }
      uVar32 = uVar32 & (uint64_t)
                        ((param_5 + 0xbb607927) * 0x5e0bc8e5 + 0xfd909d73 <
                        (param_5 ^ 0xea7acb3c) * -0x3b23bc0d) * 2 + -1 + uVar32;
    } while (uVar32 != 0 && iVar11 != 0);
  }
  uVar32 = uStack_70;
  uStack_70 = uStack_70 * 4;
  lVar14 = 0;
  if ((uVar27 & 0xf) == 1) {
    lVar14 = 0xf;
  }
  lVar14 = lVar14 + (uint64_t)(uVar27 - 1 & 0xf);
  *(uint8_t *)(lVar12 + uVar28) = (char)lVar14;
  ((uint8_t *)(lVar12 + uVar28))[lVar14] = (char)uStack_b0;
  iVar19 = *(int *)(param_2 + 0x2c);
  *(int *)(param_2 + 0x2c) = iVar19 + 1;
  *(int *)(lVar25 + lVar14 * 4) = iVar19;
  uVar27 = (uint32_t)uStack_78;
  if (lVar7 == 0) {
    uVar28 = 3;
  }
  else {
    lVar12 = 0;
    uVar17 = 3;
    do {
      uVar30 = auStack_1c8[lVar12];
      puVar29 = (uint64_t *)(lStack_a8 + (uint64_t)uVar30);
      if (*(int *)((uVar17 - 3) + (int64_t)puVar29) ==
          *(int *)((int64_t)puStack_90 + (uVar17 - 3))) {
        puVar10 = puStack_90;
        if (puStack_90 < (uint64_t *)((int64_t)param_1 - 7U)) {
          if (*puVar29 == *puStack_90) {
            puVar29 = (uint64_t *)((uint64_t)uVar30 + lVar15 + 8);
            lVar25 = 0;
            do {
              puVar10 = puVar10 + 1;
              if ((uint64_t *)((int64_t)param_1 - 7U) <= puVar10) {
                goto code_r0x7fffa5247f2e;
              }
              uVar28 = *puVar29;
              lVar25 = lVar25 + 8;
              puVar29 = puVar29 + 1;
            } while (uVar28 == *puVar10);
            uVar13 = 0;
            for (uVar28 = *puVar10 ^ uVar28; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar28 = (uint64_t)(uVar13 >> 3) + lVar25;
          }
          else {
            uVar13 = 0;
            for (uVar28 = *puVar29 ^ *puStack_90; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar28 = (uint64_t)(uVar13 >> 3);
          }
        }
        else {
code_r0x7fffa5247f2e:
          if ((puVar10 < (uint64_t *)((int64_t)param_1 - 3U)) && ((int)*puVar29 == (int)*puVar10))
          {
            puVar10 = (uint64_t *)((int64_t)puVar10 + 4);
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
          }
          if ((puVar10 < (uint64_t *)((int64_t)param_1 - 1U)) &&
             ((short)*puVar29 == (short)*puVar10)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar10 = (uint64_t *)((int64_t)puVar10 + 2);
          }
          if (puVar10 < param_1) {
            puVar10 = (uint64_t *)
                      ((int64_t)puVar10 + (uint64_t)((char)*puVar29 == (char)*puVar10));
          }
          uVar28 = (int64_t)puVar10 - (int64_t)puStack_90;
        }
        if (uVar17 < uVar28) {
          *puStack_c0 = (uint64_t)((uVar27 + 3) - uVar30);
          uVar17 = uVar28;
          if ((uint64_t *)((int64_t)puStack_90 + uVar28) == param_1) break;
        }
      }
      uVar28 = uVar17;
      lVar12 = lVar12 + 1;
      uVar17 = uVar28;
    } while (lVar12 != lVar7);
  }
  puVar29 = (uint64_t *)(lStack_a8 + uStack_48);
  pcVar1 = (char *)*puStack_98;
  lVar12 = puStack_98[1];
  uVar30 = *(uint32_t *)(puStack_98[0xe] + 0xc + uVar32 * 0x10);
  iVar19 = ((int)pcVar1 - (int)lVar12) - (int)uStack_48;
  uVar13 = iStack_b8 + iVar11;
  if (uVar13 == 0) {
    uStack_b0 = 0;
  }
  else {
    uStack_b0 = 3;
    if (uVar13 < 3) {
      uStack_b0 = (uint64_t)uVar13;
    }
    puVar10 = (uint64_t *)((int64_t)puStack_90 + 4);
    puVar8 = (uint64_t *)((int64_t)param_1 + -7);
    uVar30 = uVar27 | 3;
    if ((uint64_t)(0x6e891805 - param_5) < (uint64_t)(int64_t)(int)(param_5 + 0xc1db5965)) {
      uVar30 = uVar27 + 3;
    }
    uVar17 = 0;
    do {
      uVar18 = *(uint32_t *)(uVar32 * 0x10 + puStack_98[0xe] + uVar17 * 4);
      uVar5 = 0x5a48 - (short)param_5;
      if (uVar18 == (uint16_t)(uVar5 * 0x80 | uVar5 >> 9)) goto LAB_7fffa5248923;
      piVar2 = (int *)(lVar12 + (uint64_t)uVar18);
      if (*piVar2 == (int)*puStack_90) {
        puVar20 = (uint64_t *)(piVar2 + 1);
        puVar9 = (uint64_t *)(((int64_t)pcVar1 - (int64_t)puVar20) + (int64_t)puVar10);
        if (param_1 <= puVar9) {
          puVar9 = param_1;
        }
        puVar16 = puVar10;
        puVar26 = puVar20;
        if (puVar10 < (uint64_t *)((int64_t)puVar9 - 7U)) {
          uVar31 = *puVar10;
          uVar21 = *puVar20;
          bVar33 = uVar21 <= uVar31;
          if ((uint64_t)~(uStack_b4 * -0x740d1a18) <
              (uint64_t)(int64_t)(int)((0x21d9cec7 - param_5) * 8 | 0x21d9cec7 - param_5 >> 0x1d))
          {
            bVar33 = uVar21 == uVar31;
          }
          if (bVar33) {
            lVar15 = lVar12 + 0xc + (uint64_t)uVar18;
            lVar25 = 0;
            do {
              puVar16 = (uint64_t *)((int64_t)puStack_90 + lVar25 + 0xc);
              if ((uint64_t *)((int64_t)puVar9 - 7U) <= puVar16) {
                puVar26 = (uint64_t *)(lVar15 + lVar25);
                goto LAB_7fffa52482af;
              }
              uVar31 = *(uint64_t *)(lVar15 + lVar25);
              lVar25 = lVar25 + 8;
            } while (uVar31 == *puVar16);
            uVar23 = 0;
            for (uVar31 = uVar31 ^ *puVar16; (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x8000000000000000) {
              uVar23 = uVar23 + 1;
            }
            uVar31 = (uint64_t)(uVar23 >> 3) + lVar25;
          }
          else {
            uVar23 = 0;
            for (uVar31 = uVar31 ^ uVar21; (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x8000000000000000) {
              uVar23 = uVar23 + 1;
            }
            uVar31 = (uint64_t)(uVar23 >> 3);
          }
        }
        else {
LAB_7fffa52482af:
          if ((puVar16 < (uint64_t *)((int64_t)puVar9 - 3U)) && ((int)*puVar26 == (int)*puVar16))
          {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
          }
          if ((puVar16 < (uint64_t *)((int64_t)puVar9 - 1U)) &&
             ((short)*puVar26 == (short)*puVar16)) {
            puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
          }
          if (puVar16 < puVar9) {
            puVar16 = (uint64_t *)
                      ((int64_t)puVar16 + (uint64_t)((char)*puVar26 == (char)*puVar16));
          }
          puVar9 = (uint64_t *)-(int64_t)puVar10;
          if (((param_5 + 0xeabd6879) * 0x2000 | param_5 + 0xeabd6879 >> 0x13) + 0x7c712ebd ==
              (0x28c0U >> (bVar4 & 0x1f) | 0x28c0 << 0x20 - (bVar4 & 0x1f))) {
            puVar9 = puVar10;
          }
          uVar31 = (int64_t)puVar9 + (int64_t)puVar16;
        }
        if ((char *)((int64_t)puVar20 + uVar31) == pcVar1) {
          puVar9 = (uint64_t *)((int64_t)puVar10 + uVar31);
          puVar16 = puVar29;
          puVar20 = puVar9;
          if (puVar9 < puVar8) {
            if (*puVar29 == *puVar9) {
              puVar20 = (uint64_t *)((int64_t)puStack_90 + uVar31 + 0xc);
              lVar15 = 8;
              if (puVar20 < puVar8) {
LAB_7fffa52483a0:
                if (*(uint64_t *)((int64_t)puVar29 + lVar15) == *puVar20)
                goto code_r0x7fffa52483ac;
                uVar23 = 0;
                for (uVar21 = *(uint64_t *)((int64_t)puVar29 + lVar15) ^ *puVar20;
                    (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                  uVar23 = uVar23 + 1;
                }
                uVar21 = (uint64_t)(uVar23 >> 3) + lVar15;
                goto LAB_7fffa5248433;
              }
LAB_7fffa52483be:
              puVar16 = (uint64_t *)(lVar15 + (int64_t)puVar29);
              goto LAB_7fffa52483c1;
            }
            uVar23 = 0;
            for (uVar21 = *puVar9 ^ *puVar29; (uVar21 & 1) == 0;
                uVar21 = uVar21 >> 1 | 0x8000000000000000) {
              uVar23 = uVar23 + 1;
            }
            uVar21 = (uint64_t)(uVar23 >> 3);
          }
          else {
LAB_7fffa52483c1:
            if ((puVar20 < (uint64_t *)((int64_t)param_1 - 3U)) &&
               ((int)*puVar16 == (int)*puVar20)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
              puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            }
            if ((puVar20 < (uint64_t *)((int64_t)param_1 - 1U)) &&
               ((short)*puVar16 == (short)*puVar20)) {
              puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            }
            if (puVar20 < param_1) {
              puVar20 = (uint64_t *)
                        ((int64_t)puVar20 + (uint64_t)((char)*puVar16 == (char)*puVar20));
            }
            uVar21 = (int64_t)puVar20 - (int64_t)puVar9;
          }
LAB_7fffa5248433:
          uVar31 = uVar31 + uVar21;
        }
        uVar31 = uVar31 + 4;
        if (uVar28 < uVar31) {
          *puStack_c0 = (uint64_t)((uVar30 + iVar19) - uVar18);
          uVar28 = uVar31;
          if ((uint64_t *)((int64_t)puStack_90 + uVar31) == param_1) goto LAB_7fffa5248926;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uStack_b0);
    uVar30 = *(uint32_t *)(puStack_98[0xe] + (uStack_70 | 3) * 4);
  }
  uVar18 = uVar13 - (int)uStack_b0;
  if ((uVar30 & 0xff) <= uVar13 - (int)uStack_b0) {
    uVar18 = uVar30 & 0xff;
  }
  if (uVar18 == 0) {
LAB_7fffa5248923:
    uVar31 = uVar28;
LAB_7fffa5248926:
    return uVar31 * 0x2d5304db + 0x44044a41 ^ 0x8ed947b7;
  }
  if (7 < uVar18) {
    uVar17 = (uint64_t)(uVar18 & 0xf8);
    uVar32 = 8;
    while( true ) {
      if ((-0x46685fc1 << (bVar4 & 0x1f) | 0xb997a03fU >> 0x20 - (bVar4 & 0x1f)) <
          ~(param_5 ^ 0xbe9c0f98)) {
        bVar33 = uVar17 == uVar32;
        if ((param_5 + 0x163b6297 ^ 0x6e1f23b2) <= param_5 + 0x1d078ab5) {
          bVar33 = (int64_t)uVar17 < (int64_t)uVar32;
        }
      }
      else {
        bVar33 = uVar17 == uVar32;
      }
      if (bVar33) break;
      uVar32 = uVar32 + 8;
    }
  }
  if ((uint64_t)(uVar18 & 7) != 0) {
    uVar32 = 0;
    do {
      uVar32 = uVar32 + 1;
    } while ((uVar18 & 7) != uVar32);
  }
  uVar32 = (uint64_t)(uVar30 >> 8);
  iVar11 = (int)*puStack_90;
  puVar10 = (uint64_t *)((int64_t)puStack_90 + 4);
  lVar15 = uStack_48 + lStack_a8 + 8;
  uVar30 = 0;
  do {
    uVar13 = *(uint32_t *)(puStack_98[0x10] + uVar32 * 4);
    if (*(int *)(lVar12 + (uint64_t)uVar13) == iVar11) {
      lVar25 = lVar12 + (uint64_t)uVar13;
      puVar8 = (uint64_t *)(lVar25 + 4);
      puVar9 = (uint64_t *)(((int64_t)pcVar1 - (int64_t)puVar8) + (int64_t)puVar10);
      if (param_1 <= puVar9) {
        puVar9 = param_1;
      }
      puVar16 = puVar8;
      puVar20 = puVar10;
      if (puVar10 < (uint64_t *)((int64_t)puVar9 - 7U)) {
        if (*puVar8 == *puVar10) {
          lVar7 = 0xc;
LAB_7fffa5248700:
          puVar20 = (uint64_t *)((int64_t)puStack_90 + lVar7);
          if (puVar20 < (uint64_t *)((int64_t)puVar9 - 7U)) {
            if (*(uint64_t *)(lVar25 + lVar7) == *puVar20) goto code_r0x7fffa5248722;
            uVar23 = 0;
            for (uVar17 = *puVar20 ^ *(uint64_t *)(lVar25 + lVar7); (uVar17 & 1) == 0;
                uVar17 = uVar17 >> 1 | 0x8000000000000000) {
              uVar23 = uVar23 + 1;
            }
            uVar31 = ((uint64_t)(uVar23 >> 3) + lVar7) - 4;
            goto LAB_7fffa524879e;
          }
          puVar16 = (uint64_t *)(lVar25 + lVar7);
          goto LAB_7fffa5248744;
        }
        uVar23 = 0;
        for (uVar17 = *puVar8 ^ *puVar10; (uVar17 & 1) == 0;
            uVar17 = uVar17 >> 1 | 0x8000000000000000) {
          uVar23 = uVar23 + 1;
        }
        uVar31 = (uint64_t)(uVar23 >> 3);
      }
      else {
LAB_7fffa5248744:
        if ((puVar20 < (uint64_t *)((int64_t)puVar9 - 3U)) && ((int)*puVar16 == (int)*puVar20)) {
          puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
          puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
        }
        if ((puVar20 < (uint64_t *)((int64_t)puVar9 - 1U)) && ((short)*puVar16 == (short)*puVar20)
           ) {
          puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
          puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
        }
        if (puVar20 < puVar9) {
          puVar20 = (uint64_t *)((int64_t)puVar20 + (uint64_t)((char)*puVar16 == (char)*puVar20))
          ;
        }
        uVar31 = (int64_t)puVar20 - (int64_t)puVar10;
      }
LAB_7fffa524879e:
      if ((char *)((int64_t)puVar8 + uVar31) == pcVar1) {
        puVar8 = (uint64_t *)((int64_t)puVar10 + uVar31);
        puVar20 = puVar29;
        puVar9 = puVar8;
        if (puVar8 < (uint64_t *)((int64_t)param_1 - 7U)) {
          if (*puVar29 == *puVar8) {
            lVar25 = 0;
            do {
              puVar9 = (uint64_t *)((int64_t)puStack_90 + lVar25 + uVar31 + 0xc);
              if ((uint64_t *)((int64_t)param_1 - 7U) <= puVar9) {
                puVar20 = (uint64_t *)(lVar25 + lVar15);
                goto LAB_7fffa524886f;
              }
              uVar17 = *(uint64_t *)(lVar15 + lVar25);
              lVar25 = lVar25 + 8;
            } while (uVar17 == *puVar9);
            uVar23 = 0;
            for (uVar17 = uVar17 ^ *puVar9; (uVar17 & 1) == 0;
                uVar17 = uVar17 >> 1 | 0x8000000000000000) {
              uVar23 = uVar23 + 1;
            }
            uVar17 = (uint64_t)(uVar23 >> 3) + lVar25;
          }
          else {
            uVar23 = 0;
            for (uVar17 = *puVar29 ^ *puVar8; (uVar17 & 1) == 0;
                uVar17 = uVar17 >> 1 | 0x8000000000000000) {
              uVar23 = uVar23 + 1;
            }
            uVar17 = (uint64_t)(uVar23 >> 3);
          }
        }
        else {
LAB_7fffa524886f:
          if ((puVar9 < (uint64_t *)((int64_t)param_1 + -3)) && ((int)*puVar20 == (int)*puVar9)) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            puVar9 = (uint64_t *)((int64_t)puVar9 + 4);
          }
          if ((puVar9 < (uint64_t *)((int64_t)param_1 - 1U)) &&
             ((short)*puVar20 == (short)*puVar9)) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            puVar9 = (uint64_t *)((int64_t)puVar9 + 2);
          }
          if (puVar9 < param_1) {
            puVar9 = (uint64_t *)((int64_t)puVar9 + (uint64_t)((char)*puVar20 == (char)*puVar9));
          }
          uVar17 = (int64_t)puVar9 - (int64_t)puVar8;
        }
        uVar31 = uVar31 + uVar17;
      }
      uVar31 = uVar31 + 4;
      if (uVar28 < uVar31) {
        *puStack_c0 = (uint64_t)((uVar27 + 3 + iVar19) - uVar13);
        if ((uint64_t *)((int64_t)puStack_90 + uVar31) == param_1) goto LAB_7fffa5248926;
        iVar11 = (int)*puStack_90;
        uVar28 = uVar31;
      }
    }
    uVar30 = uVar30 + 1;
    if (uVar30 == uVar18) goto LAB_7fffa5248923;
    uVar32 = uVar32 + 1;
  } while( true );
code_r0x7fffa52483ac:
  puVar20 = puVar20 + 1;
  lVar15 = lVar15 + 8;
  if (puVar8 <= puVar20) goto LAB_7fffa52483be;
  goto LAB_7fffa52483a0;
code_r0x7fffa5248722:
  lVar7 = lVar7 + 8;
  goto LAB_7fffa5248700;
}


// ============================================================================
// Function : FUN_7fffa5248a30  |  RVA: 0xad8a30  |  Size: 36 bytes
// Callers  : none
// Callees  : FUN_7fffa5513ae0@0xda3ae0
// ============================================================================
void FUN_7fffa5248a30(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa5513ae0(param_1,*(uint64_t *)(param_2 + 0x28),*(uint32_t *)(param_2 + 0xf0),
                   param_2 + 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5248a55  |  RVA: 0xad8a55  |  Size: 141 bytes
// Callers  : none
// Callees  : FUN_7fffa5491f30@0xd21f30, FUN_7fffa54991f0@0xd291f0, FUN_7fffa54539d0@0xce39d0, FUN_7fffa5488e60@0xd18e60
// ============================================================================
void FUN_7fffa5248a55(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  int64_t lVar2;
  int iVar3;
  
  FUN_7fffa5491f30(*(uint64_t *)(param_2 + 0x48));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0x28), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = FUN_7fffa54991f0(*(uint64_t *)(piVar1 + 10));
    if (iVar3 != 0) {
      FUN_7fffa5488e60(piVar1,1);
    }
  }
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x20) = *(uint64_t *)(param_2 + 0x78);
  lVar2 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar2 + 0x28) = *(uint64_t *)(param_2 + 0x80);
  lVar2 = FUN_7fffa54539d0();
  *(uint32_t *)(lVar2 + 0x78) = *(uint32_t *)(param_2 + 0x30);
  return;
}


// ============================================================================
// Function : FUN_7fffa5248af0  |  RVA: 0xad8af0  |  Size: 461 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5248af0(void)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint8_t *pbVar6;
  int64_t in_R11;
  uint64_t uVar7;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  
  in_stack_00000028 = in_stack_00000028 << 0x11 ^ in_stack_00000028;
  in_stack_00000028 = in_stack_00000028 << 0x22 ^ in_stack_00000028;
  pbVar6 = (uint8_t *)((in_R11 * -0x6ee4e01e60000000 | (uint64_t)(in_R11 * 0x7247194c88d8ff0d) >> 0x23
                    ) + 0x6d882aab);
  if (4 < in_stack_00000028) {
    uVar2 = (uint32_t)in_stack_00000030 | 1;
    do {
      in_stack_00000028 = in_stack_00000028 - 1;
      bVar1 = (uint8_t)in_stack_00000030 & 0x1f;
      uVar4 = (uint32_t)in_stack_00000030 ^ 0xd0e6c707;
      if ((-0x46e71f2c << bVar1 | 0xb918e0d4U >> 0x20 - bVar1) < (uVar4 << 0x14 | uVar4 >> 0xc)) {
        uVar5 = (uint64_t)*pbVar6;
        uVar3 = (uint64_t)(int)(uVar2 * -0x2cb83396);
        uVar7 = (0x3224876225791306 - in_stack_00000030) * 0x1729b0af;
      }
      else {
        uVar3 = (uint64_t)(uVar2 * -0x6f800000 | uVar2 * 0x6aec2921 >> 9);
        uVar5 = in_stack_00000030 + 0xd97d1c1263dc680a;
        uVar7 = (uint64_t)*pbVar6;
      }
      bVar1 = (uint8_t)uVar3 & 0x3f;
    } while ((((((uint64_t)pbVar6[2] ^
                (((in_stack_00000030 ^ 0xd940828075a2eaac) << bVar1 |
                 (in_stack_00000030 ^ 0xd940828075a2eaac) >> 0x40 - bVar1) + 0x9afe1bb) *
                ((uVar7 ^ uVar5) * 0x4000000025b ^ (uint64_t)pbVar6[1])) * 0x4000000025b ^
               (uint64_t)pbVar6[3]) * 0x4000000025b ^ (uint64_t)pbVar6[4]) * 0x4000000025b !=
              ~((uVar3 | 1) * -0x1c47c655adee7133) + in_stack_00000030) &&
            (pbVar6 = pbVar6 + 1, 4 < in_stack_00000028));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5248cc0  |  RVA: 0xad8cc0  |  Size: 10020 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5248cc0(void) {
    /* +0xad8cc0 */ __asm { PUSH RBP }
    /* +0xad8cc1 */ __asm { PUSH RBX }
    /* +0xad8cc2 */ __asm { PUSH R14 }
    /* +0xad8cc4 */ __asm { PUSH R15 }
    /* +0xad8cc6 */ __asm { PUSH R13 }
    /* +0xad8cc8 */ __asm { PUSH R12 }
    /* +0xad8cca */ __asm { PUSH RSI }
    /* +0xad8ccb */ __asm { PUSH RDI }
    /* +0xad8ccc */ __asm { SUB RSP,0x2b8 }
    /* +0xad8cd3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xad8cdb */ __asm { MOVDQA xmmword ptr [RBP + 0x220],XMM13 }
    /* +0xad8ce4 */ __asm { MOVAPS xmmword ptr [RBP + 0x210],XMM6 }
    /* +0xad8ceb */ __asm { MOV qword ptr [RBP + 0x208],-0x2 }
    /* +0xad8cf6 */ __asm { MOV qword ptr [RBP + 0x110],R8 }
    /* +0xad8cfd */ __asm { MOV dword ptr [RBP + 0x1c0],0xe1684ce2 }
    /* +0xad8d07 */ __asm { MOV R11D,dword ptr [RBP + 0x1c0] }
    /* +0xad8d0e */ __asm { CMP R11D,0xdae1c23f }
    /* +0xad8d15 */ __asm { JBE 0x7fffa524e674 }
    /* +0xad8d1b */ __asm { MOV dword ptr [RBP + 0x1c0],0x9da20a31 }
    /* +0xad8d25 */ __asm { MOV R11D,dword ptr [RBP + 0x1c0] }
    /* +0xad8d2c */ __asm { CMP R11D,0x81ba231f }
    /* +0xad8d33 */ __asm { NOP }
    /* +0xad8d34 */ __asm { NOP }
    /* +0xad8d35 */ __asm { NOP }
    /* +0xad8d36 */ __asm { NOP }
    /* +0xad8d37 */ __asm { NOP }
    /* +0xad8d38 */ __asm { NOP }
    /* +0xad8d39 */ __asm { NOP }
    /* +0xad8d3a */ __asm { NOP }
    /* +0xad8d3b */ __asm { NOP }
    /* +0xad8d3c */ __asm { NOP }
    /* +0xad8d3d */ __asm { NOP }
    /* +0xad8d3e */ __asm { NOP }
    /* +0xad8d3f */ __asm { NOP }
    /* +0xad8d40 */ __asm { NOP }
    /* +0xad8d41 */ __asm { NOP }
    /* +0xad8d42 */ __asm { NOP }
    /* +0xad8d43 */ __asm { NOP }
    /* +0xad8e3b */ __asm { MOV EDX,0xa6a328ce }
    /* +0xad8e40 */ __asm { MOV R9D,0x5e7517fa }
    /* +0xad8e46 */ __asm { ADD EDX,0x2c2c6cb5 }
    /* +0xad8e4c */ __asm { ROL EDX,0x1d }
    /* +0xad8e4f */ __asm { MOVZX R8D,uint8_t ptr [RAX + 0x546c] }
    /* +0xad8e57 */ __asm { MOVZX R10D,uint8_t ptr [RAX + 0x5496] }
    /* +0xad8e5f */ __asm { MOVZX R11D,uint8_t ptr [RAX + 0x5497] }
    /* +0xad8e67 */ __asm { XOR R10B,uint8_t ptr [RAX + R8*0x4 + 0x5474] }
    /* +0xad8e6f */ __asm { MOVZX ECX,uint8_t ptr [RAX + 0x5499] }
    /* +0xad8e76 */ __asm { NOT R10B }
    /* +0xad8e79 */ __asm { ROR R10B,0x1 }
    /* +0xad8e7c */ __asm { MOVZX EBX,uint8_t ptr [RAX + 0x5498] }
    /* +0xad8e83 */ __asm { MOV uint8_t ptr [RBP + 0x1c0],R10B }
    /* +0xad8e8a */ __asm { XOR R11B,uint8_t ptr [RAX + R8*0x4 + 0x5475] }
    /* +0xad8e92 */ __asm { NOT R11B }
    /* +0xad8e95 */ __asm { ROR R11B,0x1 }
    /* +0xad8e98 */ __asm { MOV uint8_t ptr [RBP + 0x1c1],R11B }
    /* +0xad8e9f */ __asm { XOR BL,uint8_t ptr [RAX + R8*0x4 + 0x5476] }
    /* +0xad8ea7 */ __asm { NOT BL }
    /* +0xad8ea9 */ __asm { ROR BL,0x1 }
    /* +0xad8eab */ __asm { MOV uint8_t ptr [RBP + 0x1c2],BL }
    /* +0xad8eb1 */ __asm { XOR CL,uint8_t ptr [RAX + R8*0x4 + 0x5477] }
    /* +0xad8eb9 */ __asm { XOR R9D,0x9e751777 }
    /* +0xad8ec0 */ __asm { NOT CL }
    /* +0xad8ec2 */ __asm { ROR CL,0x1 }
    /* +0xad8ec4 */ __asm { MOV uint8_t ptr [RBP + 0x1c3],CL }
    /* +0xad8eca */ __asm { MOV R10D,dword ptr [RBP + 0x1c0] }
    /* +0xad8ed1 */ __asm { MOV R8D,R10D }
    /* +0xad8ed4 */ __asm { SHR R8D,0x10 }
    /* +0xad8ed8 */ __asm { MOV R11D,R10D }
    /* +0xad8edb */ __asm { SHR R11D,0x18 }
    /* +0xad8edf */ __asm { LEA EDI,[R10 + 0x1] }
    /* +0xad8ee3 */ __asm { MOV EBX,EDI }
    /* +0xad8ee5 */ __asm { SHR EBX,0x18 }
    /* +0xad8ee8 */ __asm { MOV R14D,EDI }
    /* +0xad8eeb */ __asm { SHR R14D,0x10 }
    /* +0xad8eef */ __asm { MOVZX ECX,uint8_t ptr [RAX + 0x546c] }
    /* +0xad8ef6 */ __asm { ROL R14B,0x1 }
    /* +0xad8ef9 */ __asm { IMUL ECX,ECX,0x24924925 }
    /* +0xad8eff */ __asm { ADD ECX,0x24924925 }
    /* +0xad8f05 */ __asm { LEA R12,[RCX*0x8] }
    /* +0xad8f0d */ __asm { SUB R12,RCX }
    /* +0xad8f10 */ __asm { SHR R12,0x20 }
    /* +0xad8f14 */ __asm { LEA ESI,[R12*0x4] }
    /* +0xad8f1c */ __asm { MOVZX ECX,uint8_t ptr [RAX + 0x5498] }
    /* +0xad8f23 */ __asm { LEA R13D,[R14 + RCX*0x1] }
    /* +0xad8f27 */ __asm { XOR R14B,CL }
    /* +0xad8f2a */ __asm { MOV R15D,EDI }
    /* +0xad8f2d */ __asm { ROL R15B,0x1 }
    /* +0xad8f30 */ __asm { ROL BL,0x1 }
    /* +0xad8f32 */ __asm { MOV ECX,R10D }
    /* +0xad8f35 */ __asm { SHR ECX,0x8 }
    /* +0xad8f38 */ __asm { XOR BL,uint8_t ptr [RAX + 0x5499] }
    /* +0xad8f3e */ __asm { CMP RDX,R9 }
    /* +0xad8f41 */ __asm { MOVZX R9D,R15B }
    /* +0xad8f45 */ __asm { MOVD XMM0,R9D }
    /* +0xad8f4a */ __asm { MOVZX R9D,uint8_t ptr [RAX + 0x5496] }
    /* +0xad8f52 */ __asm { MOVD XMM5,R9D }
    /* +0xad8f57 */ __asm { PXOR XMM5,XMM0 }
    /* +0xad8f5b */ __asm { MOVD R9D,XMM5 }
    /* +0xad8f60 */ __asm { NOT R9B }
    /* +0xad8f63 */ __asm { MOV uint8_t ptr [RAX + RSI*0x1 + 0x5474],R9B }
    /* +0xad8f6b */ __asm { MOVZX R9D,R14B }
    /* +0xad8f6f */ __asm { MOVZX EDX,R13B }
    /* +0xad8f73 */ __asm { CMOVNZ EDX,R9D }
    /* +0xad8f77 */ __asm { SHR EDI,0x8 }
    /* +0xad8f7a */ __asm { ROL DIL,0x1 }
    /* +0xad8f7d */ __asm { XOR DIL,uint8_t ptr [RAX + 0x5497] }
    /* +0xad8f84 */ __asm { NOT DL }
    /* +0xad8f86 */ __asm { MOV uint8_t ptr [RAX + RSI*0x1 + 0x5476],DL }
    /* +0xad8f8d */ __asm { NOT BL }
    /* +0xad8f8f */ __asm { MOV uint8_t ptr [RAX + RSI*0x1 + 0x5477],BL }
    /* +0xad8f96 */ __asm { NOT DIL }
    /* +0xad8f99 */ __asm { MOV uint8_t ptr [RAX + RSI*0x1 + 0x5475],DIL }
    /* +0xad8fa1 */ __asm { MOV uint8_t ptr [RAX + 0x546c],R12B }
    /* +0xad8fa8 */ __asm { MOV uint8_t ptr [RBP + 0x1c3],0x0 }
    /* +0xad8faf */ __asm { PXOR XMM0,XMM0 }
    /* +0xad8fb3 */ __asm { MOVDQU xmmword ptr [RBP + 0x1cb],XMM0 }
    /* +0xad8fbb */ __asm { MOVDQU xmmword ptr [RBP + 0x1d7],XMM0 }
    /* +0xad8fc3 */ __asm { MOV dword ptr [RBP + 0x1ed],0x0 }
    /* +0xad8fcd */ __asm { RDTSC }
    /* +0xad8fcf */ __asm { SHL RDX,0x20 }
    /* +0xad8fd3 */ __asm { OR RDX,RAX }
    /* +0xad8fd6 */ __asm { MOV R9,0x660dcddba984d06 }
    /* +0xad8fe0 */ __asm { IMUL RDX,R9 }
    /* +0xad8fe4 */ __asm { MOV EAX,0x3 }
    /* +0xad8fe9 */ __asm { MOV RDI,-0x62443c9b299af691 }
    /* +0xad8ff3 */ __asm { MOV R12,0x660dcdd7bd4ce2f }
    /* +0xad8ffd */ __asm { MOV R13D,0xc0000058 }
    /* +0xad9003 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xad9010 */ __asm { IMUL RDX,R9 }
    /* +0xad9014 */ __asm { ADD RDX,R9 }
    /* +0xad9017 */ __asm { MOV R14,RDX }
    /* +0xad901a */ __asm { SHR R14,0x20 }
    /* +0xad901e */ __asm { LEA R15,[0x7fffa4770000] }
    /* +0xad9025 */ __asm { NOP }
    /* +0xad9026 */ __asm { MOV RBX,0x0 }
    /* +0xad902d */ __asm { MOV uint8_t ptr [RBP + RAX*0x1 + 0x1bd],R14B }
    /* +0xad9035 */ __asm { CMP RAX,0x33 }
    /* +0xad9039 */ __asm { JZ 0x7fffa52490eb }
    /* +0xad903f */ __asm { MOV RSI,RDI }
    /* +0xad9042 */ __asm { IMUL RSI,RSI,-0x4db0ab31 }
    /* +0xad9049 */ __asm { SHR RSI,0x11 }
    /* +0xad904d */ __asm { MOV R15,R12 }
    /* +0xad9050 */ __asm { ADD R15,-0x13c80d1 }
    /* +0xad9057 */ __asm { XOR R15,R13 }
    /* +0xad905a */ __asm { IMUL RDX,R9 }
    /* +0xad905e */ __asm { ADD RDX,R9 }
    /* +0xad9061 */ __asm { MOV R14,RDX }
    /* +0xad9064 */ __asm { SHR R14,0x20 }
    /* +0xad9068 */ __asm { MOV uint8_t ptr [RBP + RAX*0x1 + 0x1be],R14B }
    /* +0xad9070 */ __asm { IMUL RDX,R9 }
    /* +0xad9074 */ __asm { ADD RDX,R9 }
    /* +0xad9077 */ __asm { IMUL RSI,RDX }
    /* +0xad907b */ __asm { ADD RSI,R15 }
    /* +0xad907e */ __asm { SHR RDX,0x20 }
    /* +0xad9082 */ __asm { MOV uint8_t ptr [RBP + RAX*0x1 + 0x1bf],DL }
    /* +0xad9089 */ __asm { MOV RDX,RSI }
    /* +0xad908c */ __asm { SHR RSI,0x20 }
    /* +0xad9090 */ __asm { MOV uint8_t ptr [RBP + RAX*0x1 + 0x1c0],SIL }
    /* +0xad9098 */ __asm { ADD RAX,0x4 }
    /* +0xad909c */ __asm { JMP 0x7fffa5249010 }
    /* +0xad90eb */ __asm { ROL R11B,0x1 }
    /* +0xad90ee */ __asm { MOV EAX,0x735d073c }
    /* +0xad90f3 */ __asm { IMUL R14D,EAX,-0x1fdbcb3f }
    /* +0xad90fa */ __asm { MOV EAX,0x654bdc62 }
    /* +0xad90ff */ __asm { ROL R10B,0x1 }
    /* +0xad9102 */ __asm { MOV ESI,0x9805e598 }
    /* +0xad9107 */ __asm { IMUL EAX,EAX,-0x64963f81 }
    /* +0xad910d */ __asm { MOVSXD RDI,EAX }
    /* +0xad9110 */ __asm { MOVZX EAX,uint8_t ptr [RBP + 0x1c3] }
    /* +0xad9117 */ __asm { MOV R12D,0xd00e1e47 }
    /* +0xad911d */ __asm { XOR R12D,0x6571a99e }
    /* +0xad9124 */ __asm { MOV R9D,0x1f42ca56 }
    /* +0xad912a */ __asm { XOR ESI,0x851a69fd }
    /* +0xad9130 */ __asm { ADD ESI,0x2cf25b84 }
    /* +0xad9136 */ __asm { IMUL EAX,EAX,0x24924925 }
    /* +0xad913c */ __asm { ADD EAX,0x24924925 }
    /* +0xad9141 */ __asm { LEA RDX,[RAX*0x8] }
    /* +0xad9149 */ __asm { SUB RDX,RAX }
    /* +0xad914c */ __asm { SHR RDX,0x20 }
    /* +0xad9150 */ __asm { IMUL R15D,R9D,-0x736627d5 }
    /* +0xad9157 */ __asm { ADD R15D,0x7d0d3af5 }
    /* +0xad915e */ __asm { ROL CL,0x1 }
    /* +0xad9160 */ __asm { MOV EAX,0xcc2f8147 }
    /* +0xad9165 */ __asm { IMUL EAX,EAX,-0x4931c53f }
    /* +0xad916b */ __asm { ADD EAX,0xb4288f6f }
    /* +0xad9170 */ __asm { MOVSXD R13,EAX }
    /* +0xad9173 */ __asm { ROL R8B,0x1 }
    /* +0xad9176 */ __asm { MOVZX EAX,uint8_t ptr [RBP + 0x1f0] }
    /* +0xad917d */ __asm { LEA EBX,[R11 + RAX*0x1] }
    /* +0xad9181 */ __asm { XOR R11B,AL }
    /* +0xad9184 */ __asm { MOVZX R9D,uint8_t ptr [RBP + 0x1ee] }
    /* +0xad918c */ __asm { MOV EAX,R9D }
    /* +0xad918f */ __asm { MUL CL }
    /* +0xad9191 */ __asm { XOR R10B,uint8_t ptr [RBP + 0x1ed] }
    /* +0xad9198 */ __asm { CMP R15,R13 }
    /* +0xad919b */ __asm { MOVZX EBX,BL }
    /* +0xad919e */ __asm { MOVZX R11D,R11B }
    /* +0xad91a2 */ __asm { CMOVL R11D,EBX }
    /* +0xad91a6 */ __asm { NOT R10B }
    /* +0xad91a9 */ __asm { MOV uint8_t ptr [RBP + RDX*0x4 + 0x1cb],R10B }
    /* +0xad91b1 */ __asm { XOR R8B,uint8_t ptr [RBP + 0x1ef] }
    /* +0xad91b8 */ __asm { CMP R12,RSI }
    /* +0xad91bb */ __asm { LEA R10D,[R8 + -0x1] }
    /* +0xad91bf */ __asm { NOT R8B }
    /* +0xad91c2 */ __asm { MOVZX R10D,R10B }
    /* +0xad91c6 */ __asm { MOVZX R8D,R8B }
    /* +0xad91ca */ __asm { CMOVL R8D,R10D }
    /* +0xad91ce */ __asm { XOR CL,R9B }
    /* +0xad91d1 */ __asm { CMP RDI,R14 }
    /* +0xad91d4 */ __asm { MOV uint8_t ptr [RBP + RDX*0x4 + 0x1cd],R8B }
    /* +0xad91dc */ __asm { NOT R11B }
    /* +0xad91df */ __asm { MOV uint8_t ptr [RBP + RDX*0x4 + 0x1ce],R11B }
    /* +0xad91e7 */ __asm { MOVZX R11D,CL }
    /* +0xad91eb */ __asm { MOVZX ECX,AL }
    /* +0xad91ee */ __asm { CMOVL ECX,R11D }
    /* +0xad91f2 */ __asm { NOT CL }
    /* +0xad91f4 */ __asm { MOV uint8_t ptr [RBP + RDX*0x4 + 0x1cc],CL }
    /* +0xad91fb */ __asm { MOV uint8_t ptr [RBP + 0x1c3],DL }
    /* +0xad9201 */ __asm { MOVZX ECX,uint8_t ptr [RBP + RDX*0x4 + 0x1cc] }
    /* +0xad9209 */ __asm { MOVZX R10D,uint8_t ptr [RBP + 0x1ed] }
    /* +0xad9211 */ __asm { MOVZX R9D,uint8_t ptr [RBP + 0x1f0] }
    /* +0xad9219 */ __asm { XOR R10B,uint8_t ptr [RBP + RDX*0x4 + 0x1cb] }
    /* +0xad9221 */ __asm { XOR R9B,uint8_t ptr [RBP + RDX*0x4 + 0x1ce] }
    /* +0xad9229 */ __asm { MOVZX R8D,uint8_t ptr [RBP + RDX*0x4 + 0x1cd] }
    /* +0xad9232 */ __asm { NOT R10B }
    /* +0xad9235 */ __asm { ROR R10B,0x1 }
    /* +0xad9238 */ __asm { MOV uint8_t ptr [RBP],R10B }
    /* +0xad923c */ __asm { XOR R8B,uint8_t ptr [RBP + 0x1ef] }
    /* +0xad9243 */ __asm { NOT R8B }
    /* +0xad9246 */ __asm { XOR CL,uint8_t ptr [RBP + 0x1ee] }
    /* +0xad924c */ __asm { ROR R8B,0x1 }
    /* +0xad924f */ __asm { MOV uint8_t ptr [RBP + 0x2],R8B }
    /* +0xad9253 */ __asm { NOT CL }
    /* +0xad9255 */ __asm { ROR CL,0x1 }
    /* +0xad9257 */ __asm { MOV uint8_t ptr [RBP + 0x1],CL }
    /* +0xad925a */ __asm { NOT R9B }
    /* +0xad925d */ __asm { ROR R9B,0x1 }
    /* +0xad9260 */ __asm { MOV uint8_t ptr [RBP + 0x3],R9B }
    /* +0xad9264 */ __asm { CMP dword ptr [RBP],0x0 }
    /* +0xad9268 */ __asm { JZ 0x7fffa52492d0 }
    /* +0xad926a */ __asm { PUSHFQ }
    /* +0xad926b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xad9273 */ __asm { POPFQ }
    /* +0xad9274 */ __asm { MOV dword ptr [RBP + 0x1c0],0xf372721 }
    /* +0xad927e */ __asm { MOV R11D,dword ptr [RBP + 0x1c0] }
    /* +0xad9285 */ __asm { TEST R11D,R11D }
    /* +0xad9288 */ __asm { MOV RCX,qword ptr [RBP + -0x38] }
    /* +0xad928c */ __asm { JS 0x7fffa524e684 }
    /* +0xad9292 */ __asm { XOR R14D,R14D }
    /* +0xad9295 */ __asm { DEC dword ptr [RCX + 0x4] }
    /* +0xad9298 */ __asm { JNZ 0x7fffa52492aa }
    /* +0xad929a */ __asm { XOR R11D,R11D }
    /* +0xad929d */ __asm { XCHG dword ptr [RCX],R11D }
    /* +0xad92a0 */ __asm { ADD RCX,0x8 }
    /* +0xad92a4 */ __asm { CALL qword ptr [0x7fffa5877640] }
    /* +0xad92aa */ __asm { MOV EAX,R14D }
    /* +0xad92ad */ __asm { MOVAPS XMM6,xmmword ptr [RBP + 0x210] }
    /* +0xad92b4 */ __asm { MOVAPS XMM13,xmmword ptr [RBP + 0x220] }
    /* +0xad92bc */ __asm { ADD RSP,0x2b8 }
    /* +0xad92c3 */ __asm { POP RDI }
    /* +0xad92c4 */ __asm { POP RSI }
    /* +0xad92c5 */ __asm { POP R12 }
    /* +0xad92c7 */ __asm { POP R13 }
    /* +0xad92c9 */ __asm { POP R15 }
    /* +0xad92cb */ __asm { POP R14 }
    /* +0xad92cd */ __asm { POP RBX }
    /* +0xad92ce */ __asm { POP RBP }
    /* +0xad92cf */ __asm { RET }
    /* +0xad92d0 */ __asm { LEA RAX,[0x7fffa47b4ec9] }
    /* +0xad92d7 */ __asm { MOV R11,-0x30629ff2a303237f }
    /* +0xad92e1 */ __asm { CMP RAX,R11 }
    /* +0xad92e4 */ __asm { JZ 0x7fffa524e68f }
    /* +0xad92ea */ __asm { MOV R11D,0x7fd2c302 }
    /* +0xad92f0 */ __asm { IMUL R11D,R11D,-0x196b87a5 }
    /* +0xad92f7 */ __asm { MOVSXD R11,R11D }
    /* +0xad92fa */ __asm { MOVZX R9D,uint8_t ptr [RAX + 0x6c3a] }
    /* +0xad9302 */ __asm { MOV EDX,0xd9645534 }
    /* +0xad9307 */ __asm { ADD EDX,0x77addabc }
    /* +0xad930d */ __asm { MOVZX ECX,uint8_t ptr [RAX + 0x6c7b] }
    /* +0xad9314 */ __asm { MOVZX R10D,uint8_t ptr [RAX + 0x6c7c] }
    /* +0xad931c */ __asm { MOVZX R8D,uint8_t ptr [RAX + 0x6c7f] }
    /* +0xad9324 */ __asm { MOVZX EBX,uint8_t ptr [RAX + R9*0x8 + 0x6c3d] }
    /* +0xad932d */ __asm { XOR BL,uint8_t ptr [RAX + 0x6c7a] }
    /* +0xad9333 */ __asm { MOV uint8_t ptr [RBP + 0x1c0],BL }
    /* +0xad9339 */ __asm { MOVZX EBX,uint8_t ptr [RAX + 0x6c7d] }
    /* +0xad9340 */ __asm { MOVZX R14D,uint8_t ptr [RAX + 0x6c80] }
    /* +0xad9348 */ __asm { XOR CL,uint8_t ptr [RAX + R9*0x8 + 0x6c3e] }
    /* +0xad9350 */ __asm { MOVZX ESI,uint8_t ptr [RAX + 0x6c81] }
    /* +0xad9357 */ __asm { MOV uint8_t ptr [RBP + 0x1c1],CL }
    /* +0xad935d */ __asm { XOR R10B,uint8_t ptr [RAX + R9*0x8 + 0x6c3f] }
    /* +0xad9365 */ __asm { MOV uint8_t ptr [RBP + 0x1c2],R10B }
    /* +0xad936c */ __asm { XOR BL,uint8_t ptr [RAX + R9*0x8 + 0x6c40] }
    /* +0xad9374 */ __asm { MOV uint8_t ptr [RBP + 0x1c3],BL }
    /* +0xad937a */ __asm { MOVZX ECX,uint8_t ptr [RAX + R9*0x8 + 0x6c41] }
    /* +0xad9383 */ __asm { XOR CL,uint8_t ptr [RAX + 0x6c7e] }
    /* +0xad9389 */ __asm { MOV uint8_t ptr [RBP + 0x1c4],CL }
    /* +0xad938f */ __asm { XOR R8B,uint8_t ptr [RAX + R9*0x8 + 0x6c42] }
    /* +0xad9397 */ __asm { MOV uint8_t ptr [RBP + 0x1c5],R8B }
    /* +0xad939e */ __asm { XOR R14B,uint8_t ptr [RAX + R9*0x8 + 0x6c43] }
    /* +0xad93a6 */ __asm { MOV uint8_t ptr [RBP + 0x1c6],R14B }
    /* +0xad93ad */ __asm { MOVZX R9D,uint8_t ptr [RAX + R9*0x8 + 0x6c44] }
    /* +0xad93b6 */ __asm { MOV ECX,ESI }
    /* +0xad93b8 */ __asm { XOR CL,R9B }
    /* +0xad93bb */ __asm { OR R9B,SIL }
    /* +0xad93be */ __asm { CMP RDX,R11 }
    /* +0xad93c1 */ __asm { MOVZX R11D,R9B }
    /* +0xad93c5 */ __asm { MOVZX ECX,CL }
    /* +0xad93c8 */ __asm { CMOVLE ECX,R11D }
    /* +0xad93cc */ __asm { MOV uint8_t ptr [RBP + 0x1c7],CL }
    /* +0xad93d2 */ __asm { MOV R11,qword ptr [RBP + 0x1c0] }
    /* +0xad93d9 */ __asm { MOV qword ptr [RBP + 0xf0],R11 }
    /* +0xad93e0 */ __asm { PUSHFQ }
    /* +0xad93e1 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xad93e9 */ __asm { POPFQ }
    /* +0xad93ea */ __asm { MOV dword ptr [RBP + 0x1c0],0xc5b045ea }
    /* +0xad93f4 */ __asm { MOV R11D,dword ptr [RBP + 0x1c0] }
    /* +0xad93fb */ __asm { CMP R11D,0x1eb8b545 }
    /* +0xad9402 */ __asm { NOP }
    /* +0xad9403 */ __asm { NOP }
    /* +0xad9404 */ __asm { NOP }
    /* +0xad9405 */ __asm { NOP }
    /* +0xad9406 */ __asm { NOP }
    /* +0xad9407 */ __asm { NOP }
    /* +0xad9408 */ __asm { NOP }
    /* +0xad9409 */ __asm { NOP }
    /* +0xad940a */ __asm { NOP }
    /* +0xad940b */ __asm { NOP }
    /* +0xad940c */ __asm { NOP }
    /* +0xad940d */ __asm { NOP }
    /* +0xad940e */ __asm { NOP }
    /* +0xad940f */ __asm { NOP }
    /* +0xad9410 */ __asm { MOV R11W,0xab68 }
    /* +0xad9415 */ __asm { ADD R11D,0x54f8 }
    /* +0xad941c */ __asm { MOVZX R11D,R11W }
    /* +0xad9420 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0xad9424 */ __asm { MOV R9,0x4208b523ef31940f }
    /* +0xad942e */ __asm { CMP qword ptr [R11 + 0x30],R9 }
    /* +0xad9432 */ __asm { MOV ECX,dword ptr [RBP + 0x1b4] }
    /* +0xad9438 */ __asm { NOP }
    /* +0xad9439 */ __asm { NOP }
    /* +0xad943a */ __asm { NOP }
    /* +0xad943b */ __asm { NOP }
    /* +0xad943c */ __asm { NOP }
    /* +0xad943d */ __asm { NOP }
    /* +0xad943e */ __asm { NOP }
    /* +0xad943f */ __asm { NOP }
    /* +0xad9440 */ __asm { NOP }
    /* +0xad9441 */ __asm { NOP }
    /* +0xad9442 */ __asm { NOP }
    /* +0xad9443 */ __asm { NOP }
    /* +0xad9444 */ __asm { NOP }
    /* +0xad9445 */ __asm { NOP }
    /* +0xad9446 */ __asm { NOP }
    /* +0xad9447 */ __asm { MOV dword ptr [RBP + 0x1c0],0x5616028e }
    /* +0xad9451 */ __asm { MOV R11D,dword ptr [RBP + 0x1c0] }
    /* +0xad9458 */ __asm { TEST R11D,R11D }
    /* +0xad945b */ __asm { JNS 0x7fffa5249469 }
    /* +0xad945d */ __asm { XOR EBP,dword ptr [RSI] }
    /* +0xad945f */ __asm { OR AL,0x8f }
    /* +0xad9461 */ __asm { MOVSXD ESI,EBP }
    /* +0xad9463 */ __asm { INSD RDI,DX }
    /* +0xad9464 */ __asm { SUB EAX,0x3c3577e4 }
    /* +0xad9469 */ __asm { PUSHFQ }
    /* +0xad946a */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xad9472 */ __asm { POPFQ }
    /* +0xad9473 */ __asm { TEST CL,0x8 }
    /* +0xad9476 */ __asm { JNZ 0x7fffa5249550 }
    /* +0xad947c */ __asm { MOV dword ptr [RBP + 0x1c0],0x6bfff7a7 }
    /* +0xad9486 */ __asm { MOV R11D,dword ptr [RBP + 0x1c0] }
    /* +0xad948d */ __asm { CMP R11D,0x7dea4114 }
    /* +0xad9494 */ __asm { JNC 0x7fffa524e6a7 }
    /* +0xad949a */ __asm { NOP }
    /* +0xad949b */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xad94a2 */ __asm { MOV RAX,0x0 }
    /* +0xad94a9 */ __asm { TEST dword ptr [RBP + 0x118],0x100 }
    /* +0xad94b3 */ __asm { NOP }
    /* +0xad94b4 */ __asm { NOP }
    /* +0xad94b5 */ __asm { NOP }
    /* +0xad94b6 */ __asm { NOP }
    /* +0xad94b7 */ __asm { NOP }
    /* +0xad94b8 */ __asm { MOV R11W,0x9cb6 }
    /* +0xad94bd */ __asm { ADD R11D,0x2f31 }
    /* +0xad94c4 */ __asm { ROL R11W,0x7 }
    /* +0xad94c9 */ __asm { MOVSX R11,R11W }
    /* +0xad94cd */ __asm { LEA R9,[0x7fffa4a8baeb] }
    /* +0xad94d4 */ __asm { ADD R9,R11 }
    /* +0xad94d7 */ __asm { MOV qword ptr [RBP + 0x88],0x0 }
    /* +0xad94e2 */ __asm { MOV ECX,0x2000 }
    /* +0xad94e7 */ __asm { CALL R9 }
    /* +0xad94ea */ __asm { MOV RSI,RAX }
    /* +0xad94ed */ __asm { XOR R12D,R12D }
    /* +0xad94f0 */ __asm { MOV R8D,0x2000 }
    /* +0xad94f6 */ __asm { MOV RCX,RAX }
    /* +0xad94f9 */ __asm { XOR EDX,EDX }
    /* +0xad94fb */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0xad9500 */ __asm { MOV R11,qword ptr [RBP + 0xf0] }
    /* +0xad9507 */ __asm { NOP word ptr [RAX + RAX*0x1] }
    /* +0xad9510 */ __asm { MOV dword ptr [RBP + 0x1c0],0xf9d84cd8 }
    /* +0xad951a */ __asm { MOV ECX,dword ptr [RBP + 0x1c0] }
    /* +0xad9520 */ __asm { MOV AX,0xd31b }
    /* +0xad9524 */ __asm { AND ECX,0x1 }
    /* +0xad9527 */ __asm { ADD EAX,0x2ce5 }
    /* +0xad952c */ __asm { MOVZX EAX,AX }
    /* +0xad952f */ __asm { CMP ECX,EAX }
    /* +0xad9531 */ __asm { NOP }
    /* +0xad9532 */ __asm { NOP }
    /* +0xad9533 */ __asm { NOP }
    /* +0xad9534 */ __asm { NOP }
    /* +0xad9535 */ __asm { NOP }
    /* +0xad9536 */ __asm { MOV qword ptr [RSI + R12*0x1],R11 }
    /* +0xad953a */ __asm { CMP R12,0x1ff0 }
    /* +0xad9541 */ __asm { JZ 0x7fffa5249557 }
    /* +0xad9543 */ __asm { ADD R12,0x10 }
    /* +0xad9547 */ __asm { ADD R11,0x1000 }
    /* +0xad954e */ __asm { JMP 0x7fffa5249510 }
    /* +0xad9550 */ __asm { XOR ESI,ESI }
    /* +0xad9552 */ __asm { JMP 0x7fffa524b4b9 }
    /* +0xad9557 */ __asm { MOV R11D,0xecd13a6 }
    /* +0xad955d */ __asm { IMUL R11D,R11D,0x237090c7 }
    /* +0xad9564 */ __asm { MOV ECX,0x15db2cf0 }
    /* +0xad9569 */ __asm { IMUL EDX,ECX,-0x182e2b5f }
    /* +0xad956f */ __asm { CMP RDX,R11 }
    /* +0xad9572 */ __asm { JBE 0x7fffa52495fd }
    /* +0xad9578 */ __asm { MOV R12D,0x931bfc99 }
    /* +0xad957e */ __asm { ADD R12D,0x7ffffffc }
    /* +0xad9585 */ __asm { MOV dword ptr [RBP + 0x1c0],0x25355e41 }
    /* +0xad958f */ __asm { MOV R11D,dword ptr [RBP + 0x1c0] }
    /* +0xad9596 */ __asm { MOV R11D,0x4c760614 }
    /* +0xad959c */ __asm { IMUL R11D,R11D,0x17cf8a7d }
    /* +0xad95a3 */ __asm { ROL R11D,0x4 }
    /* +0xad95a7 */ __asm { MOV ECX,0xb685f1d8 }
    /* +0xad95ac */ __asm { IMUL ECX,ECX,-0x1c5f28c1 }
    /* +0xad95b2 */ __asm { RDTSC }
    /* +0xad95b4 */ __asm { SHL RDX,0x20 }
    /* +0xad95b8 */ __asm { OR RDX,RAX }
    /* +0xad95bb */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xad95c5 */ __asm { IMUL RDX,R9 }
    /* +0xad95c9 */ __asm { MOV R9,RDX }
    /* +0xad95cc */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xad95d6 */ __asm { AND R9,RAX }
    /* +0xad95d9 */ __asm { ADD RDX,RAX }
    /* +0xad95dc */ __asm { ADD ECX,0x99291022 }
    /* +0xad95e2 */ __asm { CMP R11,RCX }
    /* +0xad95e5 */ __asm { CMOVNZ RDX,R9 }
    /* +0xad95e9 */ __asm { MOV R11,RDX }
    /* +0xad95ec */ __asm { SHR R11,0x1b }
    /* +0xad95f0 */ __asm { MOV RCX,RDX }
    /* +0xad95f3 */ __asm { SHR RCX,0x3b }
    /* +0xad95f7 */ __asm { SHR RDX,0x2d }
    /* +0xad95fb */ __asm { JMP 0x7fffa5249656 }
    /* +0xad95fd */ __asm { MOV R11D,dword ptr [RBP + 0x1c0] }
    /* +0xad9604 */ __asm { RDTSC }
    /* +0xad9606 */ __asm { SHL RDX,0x20 }
    /* +0xad960a */ __asm { OR RDX,RAX }
    /* +0xad960d */ __asm { MOV R11,-0x30ebf64fafbc6efb }
    /* +0xad9617 */ __asm { IMUL RDX,R11 }
    /* +0xad961b */ __asm { MOV R11,-0x22b18422c4a9c65e }
    /* +0xad9625 */ __asm { ADD RDX,R11 }
    /* +0xad9628 */ __asm { MOV R11,RDX }
    /* +0xad962b */ __asm { SHR R11,0x2d }
    /* +0xad962f */ __asm { MOV RCX,RDX }
    /* +0xad9632 */ __asm { SHR RCX,0x3b }
    /* +0xad9636 */ __asm { MOV dword ptr [RBP + 0x1c0],0x25355e41 }
    /* +0xad9640 */ __asm { MOV EAX,0x981329a5 }
    /* +0xad9645 */ __asm { XOR EAX,0x8a2b6560 }
    /* +0xad964a */ __asm { ADD EAX,0x923f40f9 }
    /* +0xad964f */ __asm { MOVSXD R12,EAX }
    /* +0xad9652 */ __asm { SHR RDX,0x1b }
    /* +0xad9656 */ __asm { XOR R11D,EDX }
    /* +0xad9659 */ __asm { ROR R11D,CL }
    /* +0xad965c */ __asm { AND R11D,0x3 }
    /* +0xad9660 */ __asm { CMP R11D,0x2 }
    /* +0xad9664 */ __asm { JC 0x7fffa5249845 }
    /* +0xad966a */ __asm { CMP R11D,0x3 }
    /* +0xad966e */ __asm { JZ 0x7fffa52499d4 }
    /* +0xad9674 */ __asm { MOV R11D,0x22786966 }
    /* +0xad967a */ __asm { XOR R11D,0x911eaa4d }
    /* +0xad9681 */ __asm { MOV EDX,R12D }
    /* +0xad9684 */ __asm { OR EDX,0x1 }
    /* +0xad9687 */ __asm { IMUL EDX,R11D }
    /* +0xad968b */ __asm { MOV EAX,0xfa9425fe }
    /* +0xad9690 */ __asm { MOV R8,RAX }
    /* +0xad9693 */ __asm { ADD R8,RDX }
    /* +0xad9696 */ __asm { ROL R8,0x34 }
    /* +0xad969a */ __asm { MOV R11,0x771b1b31de92d46f }
    /* +0xad96a4 */ __asm { SUB R11,R12 }
    /* +0xad96a7 */ __asm { ADD R11,0x357a3329 }
    /* +0xad96ae */ __asm { IMUL R11,R8 }
    /* +0xad96b2 */ __asm { MOV R9,0x29ad5737e078d2c }
    /* +0xad96bc */ __asm { CMP R11,R9 }
    /* +0xad96bf */ __asm { JZ 0x7fffa524e6d6 }
    /* +0xad96c5 */ __asm { MOV R11W,0x9038 }
    /* +0xad96ca */ __asm { IMUL R11D,R11D,-0x4ceb }
    /* +0xad96d1 */ __asm { SUB R11D,R12D }
    /* +0xad96d4 */ __asm { ROL R11W,0x2 }
    /* +0xad96d9 */ __asm { MOVZX R11D,R11W }
    /* +0xad96dd */ __asm { CMP dword ptr [RAX + -0x7a96223e],R11D }
    /* +0xad96e4 */ __asm { JA 0x7fffa5249e27 }
    /* +0xad96ea */ __asm { PXOR XMM0,XMM0 }
    /* +0xad96ee */ __asm { MOVDQA xmmword ptr [RBP + 0x1c0],XMM0 }
}


// ============================================================================
// Function : Unwind@7fffa524e7c0  |  RVA: 0xade7c0  |  Size: 135 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa524e7c0(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t *puVar2;
  
  if (*(int64_t *)(param_2 + 0x108) != 0) {
    thunk_FUN_7fffa55eeda0();
  }
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x48) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar2 = *(uint32_t **)(param_2 + 0x48);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa524e850  |  RVA: 0xade850  |  Size: 1623 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa524eea4) overlaps instruction at (ram,0x7fffa524eea1)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa524eea1) */
/* WARNING: Removing unreachable block (ram,0x7fffa524ee99) */
/* WARNING: Removing unreachable block (ram,0x7fffa524ee8f) */

void FUN_7fffa524e850(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47bbb78 = 0x646e8110384f3e6f;
  uRam00007fffa47bbb70 = 0x10a1fd76634ed629;
  uRam00007fffa47bbb68 = 0xece78dda1e2a3fd;
  uRam00007fffa47bbb60 = 0xe2472b9c82e6cbfc;
  uRam00007fffa47bbb80 =
       (uRam00007fffa4780f40 ^ 0x981694da6062d901) << 0x3d |
       (uRam00007fffa4780f40 ^ 0x981694da6062d901) >> 3;
  uRam00007fffa47bbb88 = 0xc5550d06bcecc018;
  uVar1 = uRam00007fffa47815d8 ^ 0x20c26cc900db5c8e;
  uVar1 = (uVar1 << 0x15 | uVar1 >> 0x2b) ^ (uVar1 << 7 | uVar1 >> 0x39) ^ uVar1;
  uVar1 = (uVar1 << 0xe | uVar1 >> 0x32) ^ (uVar1 << 0x2a | uVar1 >> 0x16) ^ uVar1;
  uVar1 = (uVar1 << 0x14 | uVar1 >> 0x2c) ^ (uVar1 << 0x1c | uVar1 >> 0x24) ^ uVar1;
  uVar1 = (uVar1 << 0x38 | uVar1 >> 8) ^ (uVar1 << 0x28 | uVar1 >> 0x18) ^ uVar1;
  uVar1 = uVar1 ^ 0x8d8fc17f ^
          (uVar1 << 0x30 | uVar1 >> 0x10) ^ 0xcc6c8225dc9c00b1 ^ (uVar1 << 0x10 | uVar1 >> 0x30);
  uVar1 = (uVar1 << 0x26 | uVar1 >> 0x1a) ^ (uVar1 << 0x32 | uVar1 >> 0xe) ^
          (uVar1 << 0x17 | uVar1 >> 0x29);
  uVar1 = (uVar1 << 0x1e | uVar1 >> 0x22) ^ (uVar1 << 0x36 | uVar1 >> 10) ^ uVar1;
  uVar1 = (uVar1 << 0x2c | uVar1 >> 0x14) ^ (uVar1 << 0x3c | uVar1 >> 4) ^ uVar1;
  uVar1 = ((uVar1 << 0x18 | uVar1 >> 0x28) ^ (uVar1 << 0x38 | uVar1 >> 8) ^ uVar1) *
          -0x7f01fc07f01fc07f + 0xf6345d0de3f735a9;
  uVar1 = (uVar1 * 0x80000 | uVar1 >> 0x2d) ^ (uVar1 * 0x800000 | uVar1 >> 0x29) ^ uVar1;
  uVar1 = (uVar1 << 0x2e | uVar1 >> 0x12) ^ (uVar1 << 0x26 | uVar1 >> 0x1a) ^ uVar1;
  uVar1 = (uVar1 << 0x1c | uVar1 >> 0x24) ^ (uVar1 << 0xc | uVar1 >> 0x34) ^ uVar1;
  uRam00007fffa47bbb90 = (uVar1 << 0x38 | uVar1 >> 8) ^ (uVar1 << 0x18 | uVar1 >> 0x28) ^ uVar1;
  lRam00007fffa47bbb58 =
       ((0xc03a394d59a26a63U - lRam00007fffa4781058) * 0x8000 |
       0xc03a394d59a26a63U - lRam00007fffa4781058 >> 0x31) + lRam00007fffa47811f8 +
       0xc60c897283bae18;
  return;
}


// ============================================================================
// Function : FUN_7fffa524eeb0  |  RVA: 0xadeeb0  |  Size: 1 bytes
// Callers  : FUN_7fffa54037a0@0xc937a0, FUN_7fffa507ae2a@0x90ae2a
// Callees  : none
// ============================================================================
void FUN_7fffa524eeb0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa524eee0  |  RVA: 0xadeee0  |  Size: 3523 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa524eee0(uint32_t param_1,int64_t param_2,uint32_t *param_3,uint64_t param_4,
                     uint64_t param_5)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  uint32_t *in_RAX;
  uint8_t bVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint32_t *puVar12;
  int iVar13;
  int *piVar14;
  uint32_t *puVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int *piVar18;
  uint64_t uVar19;
  uint32_t uVar20;
  int64_t in_R11;
  int64_t lVar21;
  int *piVar22;
  uint64_t uVar23;
  bool bVar24;
  uint32_t uVar25;
  uint32_t uVar29;
  uint32_t uVar30;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  int iVar31;
  uint32_t uVar32;
  int iVar34;
  uint32_t uVar35;
  int iVar36;
  int iVar37;
  uint8_t auVar33 [16];
  uint32_t uVar38;
  uint32_t uVar39;
  uint8_t auVar40 [16];
  uint32_t uVar43;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint32_t uVar44;
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint32_t uVar47;
  uint32_t uVar48;
  uint32_t uVar49;
  uint32_t uVar50;
  uint8_t auVar51 [16];
  uint32_t uStack_80;
  
  uVar17 = (param_5 ^ 0xffffffff8220ced5) >> 0x10 ^ param_5 ^ 0xffffffff8220ced5;
  uVar17 = uVar17 >> 0x20 ^ uVar17;
  if ((uVar17 & 3) == 0) {
    lVar21 = in_R11 - (uint64_t)((param_1 ^ 0x15c4b55) << 8 | (param_1 ^ 0x15c4b55) >> 0x18);
    uVar23 = lVar21 + 0xc92b5ee2;
    bVar9 = (uint8_t)param_1;
    if (*in_RAX < 0xff) {
      iVar13 = *in_RAX * 4 + 4;
      if (uVar23 == 0) {
        FUN_7fffa4ecf8e0(param_2,0,iVar13);
        *in_RAX = 0;
      }
      else {
        puVar2 = (uint32_t *)((int64_t)param_3 + uVar23);
        FUN_7fffa4ecf8e0(uVar17,0);
        if (0x13 < (int64_t)uVar23) {
          uVar20 = *param_3;
          uStack_80 = param_1 | 1;
          puVar15 = param_3;
          do {
            param_3 = puVar15 + 4;
            uVar19 = (uint64_t)(uVar20 >> 0xe & 0x3fc);
            uVar25 = *(uint32_t *)(uVar17 + 0x800 + uVar19);
            uVar30 = puVar15[1];
            piVar18 = (int *)(uVar17 + (uint64_t)(uVar20 & 0xff) * 4);
            *piVar18 = *piVar18 + 1;
            piVar18 = (int *)(uVar17 + 0xc00 + (uint64_t)(uVar20 >> 0x18) * 4);
            *piVar18 = *piVar18 + 1;
            uVar23 = (uint64_t)((uint16_t)uVar30 & 0xff);
            iVar31 = *(int *)(uVar17 + uVar23 * 4);
            uVar39 = uVar25 + 1;
            if ((0x1ab31b1eU >> (bVar9 & 0x1f) | 0x1ab31b1e << 0x20 - (bVar9 & 0x1f)) <
                (0x9bdd88dd - param_1 ^ 0x778e7a34)) {
              uVar39 = uVar25 & 1;
            }
            piVar18 = (int *)(uVar17 + 0x400 + (uint64_t)(uVar20 >> 8 & 0xff) * 4);
            *piVar18 = *piVar18 + 1;
            uVar11 = (uint64_t)(uVar30 >> 8 & 0xff);
            iVar34 = *(int *)(uVar17 + 0x400 + uVar11 * 4);
            uVar20 = *(uint32_t *)(uVar17 + 0xc00 + (uint64_t)(uVar30 >> 0x18) * 4);
            uVar25 = uVar20 ^ 1;
            if ((int64_t)(int)(uStack_80 * 0x502de6dc + 0x2a2cde45 ^ 0xa758ce6b) <=
                (int64_t)(uint64_t)(uStack_80 * 0x589d47e8 >> 1)) {
              uVar25 = uVar20 + 1;
            }
            *(uint32_t *)(uVar17 + 0x800 + uVar19) = uVar39;
            uVar19 = (uint64_t)(uVar30 >> 0xe & 0x3fc);
            iVar36 = *(int *)(uVar17 + 0x800 + uVar19);
            uVar20 = puVar15[2];
            *(int *)(uVar17 + 0x400 + uVar11 * 4) = iVar34 + 1;
            *(int *)(uVar17 + uVar23 * 4) = iVar31 + 1;
            iVar31 = *(int *)(uVar17 + (uint64_t)(uVar20 & 0xff) * 4);
            *(uint32_t *)(uVar17 + 0xc00 + (uint64_t)(uVar30 >> 0x18) * 4) = uVar25;
            iVar34 = *(int *)(uVar17 + 0xc00 + (uint64_t)(uVar20 >> 0x18) * 4);
            uVar11 = (uint64_t)(uVar20 >> 8 & 0xff);
            iVar37 = *(int *)(uVar17 + 0x400 + uVar11 * 4);
            *(int *)(uVar17 + 0x800 + uVar19) = iVar36 + 1;
            uVar23 = (uint64_t)(uVar20 >> 0xe & 0x3fc);
            iVar36 = *(int *)(uVar17 + 0x800 + uVar23);
            uVar25 = puVar15[3];
            *(int *)(uVar17 + 0xc00 + (uint64_t)(uVar20 >> 0x18) * 4) = iVar34 + 1;
            *(int *)(uVar17 + 0x800 + uVar23) = iVar36 + 1;
            uVar23 = (uint64_t)(uVar25 >> 8 & 0xff);
            iVar34 = *(int *)(uVar17 + 0xc00 + (uint64_t)(uVar25 >> 0x18) * 4);
            *(int *)(uVar17 + 0x400 + uVar11 * 4) = iVar37 + 1;
            uVar19 = (uint64_t)(uVar25 >> 0xe & 0x3fc);
            iVar36 = *(int *)(uVar17 + 0x800 + uVar19);
            iVar37 = *(int *)(uVar17 + 0x400 + uVar23 * 4);
            *(int *)(uVar17 + (uint64_t)(uVar20 & 0xff) * 4) = iVar31 + 1;
            uVar20 = *param_3;
            piVar18 = (int *)(uVar17 + (uint64_t)(uVar25 & 0xff) * 4);
            *piVar18 = *piVar18 + 1;
            *(int *)(uVar17 + 0x400 + uVar23 * 4) = iVar37 + 1;
            *(int *)(uVar17 + 0xc00 + (uint64_t)(uVar25 >> 0x18) * 4) = iVar34 + 1;
            *(int *)(uVar17 + 0x800 + uVar19) = iVar36 + 1;
            puVar12 = puVar15 + 5;
            puVar15 = param_3;
          } while (puVar12 < (uint32_t *)((int64_t)puVar2 - 0xfU));
        }
        uVar23 = (int64_t)param_3 - (int64_t)puVar2;
        if (param_3 < puVar2) {
          for (uVar19 = (int64_t)puVar2 - (int64_t)param_3 & 3; uVar19 != 0; uVar19 = uVar19 - 1)
          {
            uVar20 = *param_3;
            param_3 = (uint32_t *)((int64_t)param_3 + 1);
            piVar18 = (int *)(uVar17 + (uint64_t)(uint8_t)uVar20 * 4);
            *piVar18 = *piVar18 + 1;
          }
          if (uVar23 < 0xfffffffffffffffd) {
            do {
              if (param_1 == 0xd7b00cae) {
                bVar9 = *(uint8_t *)((int64_t)param_3 + 1);
                piVar18 = (int *)(uVar17 + (uint64_t)(uint8_t)*param_3 * 4);
                *piVar18 = *piVar18 + 1;
              }
              else {
                piVar18 = (int *)(uVar17 + (uint64_t)(uint8_t)*param_3 * 4);
                *piVar18 = *piVar18 + 1;
                bVar9 = *(uint8_t *)((int64_t)param_3 + 1);
              }
              piVar18 = (int *)(uVar17 + (uint64_t)bVar9 * 4);
              *piVar18 = *piVar18 + 1;
              piVar18 = (int *)(uVar17 + (uint64_t)*(uint8_t *)((int64_t)param_3 + 2) * 4);
              *piVar18 = *piVar18 + 1;
              piVar18 = (int *)(uVar17 + (uint64_t)*(uint8_t *)((int64_t)param_3 + 3) * 4);
              *piVar18 = *piVar18 + 1;
              param_3 = param_3 + 1;
            } while (param_3 < puVar2);
          }
        }
        auVar28 = _DAT_7fffa56b26a0;
        auVar41 = (uint8_t  [16])0x0;
        lVar21 = -0xf8;
        lVar16 = 0;
        auVar26 = (uint8_t  [16])0x0;
        piVar18 = (int *)(uVar17 + 0x800);
        while( true ) {
          if ((int64_t)(int)(0xfe9f5a9 - param_1) < 0x92960d82) {
            piVar14 = piVar18 + -0x100;
            iVar31 = piVar18[4] + piVar18[-0xfc];
            iVar34 = piVar18[5] + piVar18[-0xfb];
            iVar36 = piVar18[6] + piVar18[-0xfa];
            iVar37 = piVar18[7] + piVar18[-0xf9];
            bVar24 = lVar21 == 0;
            piVar22 = piVar18;
          }
          else {
            piVar14 = (int *)(lVar16 * 4 + uVar17 + 0x400);
            iVar31 = piVar18[4] + piVar18[-0xfc];
            iVar34 = piVar18[5] + piVar18[-0xfb];
            iVar36 = piVar18[6] + piVar18[-0xfa];
            iVar37 = piVar18[7] + piVar18[-0xf9];
            bVar24 = lVar21 + 0x100U == (uint64_t)(0x83296908 - param_1 ^ 0x5b8d1cb3);
            piVar22 = (int *)(uVar17 + 0x800) + lVar16;
          }
          lVar16 = lVar16 + 8;
          auVar33._0_4_ = piVar18[-0x200] + piVar18[0x100] + *piVar22 + *piVar14;
          auVar33._4_4_ = piVar18[-0x1ff] + piVar18[0x101] + piVar22[1] + piVar14[1];
          auVar33._8_4_ = piVar18[-0x1fe] + piVar18[0x102] + piVar22[2] + piVar14[2];
          auVar33._12_4_ = piVar18[-0x1fd] + piVar18[0x103] + piVar22[3] + piVar14[3];
          *(uint8_t (*) [16])(piVar18 + -0x200) = auVar33;
          auVar51 = auVar41 ^ auVar28;
          auVar46 = auVar33 ^ auVar28;
          auVar45._0_4_ = -(uint32_t)(auVar51._0_4_ < auVar46._0_4_);
          auVar45._4_4_ = -(uint32_t)(auVar51._4_4_ < auVar46._4_4_);
          auVar45._8_4_ = -(uint32_t)(auVar51._8_4_ < auVar46._8_4_);
          auVar45._12_4_ = -(uint32_t)(auVar51._12_4_ < auVar46._12_4_);
          auVar41 = ~auVar45 & auVar41 | auVar33 & auVar45;
          auVar46._0_4_ = piVar18[0x104] + piVar18[-0x1fc] + iVar31;
          auVar46._4_4_ = piVar18[0x105] + piVar18[-0x1fb] + iVar34;
          auVar46._8_4_ = piVar18[0x106] + piVar18[-0x1fa] + iVar36;
          auVar46._12_4_ = piVar18[0x107] + piVar18[-0x1f9] + iVar37;
          auVar33 = auVar26 ^ auVar28;
          *(uint8_t (*) [16])(piVar18 + -0x1fc) = auVar46;
          auVar45 = auVar46 ^ auVar28;
          auVar51._0_4_ = -(uint32_t)(auVar33._0_4_ < auVar45._0_4_);
          auVar51._4_4_ = -(uint32_t)(auVar33._4_4_ < auVar45._4_4_);
          auVar51._8_4_ = -(uint32_t)(auVar33._8_4_ < auVar45._8_4_);
          auVar51._12_4_ = -(uint32_t)(auVar33._12_4_ < auVar45._12_4_);
          auVar26 = ~auVar51 & auVar26 | auVar46 & auVar51;
          if (bVar24) break;
          piVar18 = piVar18 + 8;
          lVar21 = lVar21 + 8;
        }
        auVar33 = auVar26 ^ auVar28;
        auVar46 = auVar41 ^ auVar28;
        auVar40._0_4_ = -(uint32_t)(auVar33._0_4_ < auVar46._0_4_);
        auVar40._4_4_ = -(uint32_t)(auVar33._4_4_ < auVar46._4_4_);
        auVar40._8_4_ = -(uint32_t)(auVar33._8_4_ < auVar46._8_4_);
        auVar40._12_4_ = -(uint32_t)(auVar33._12_4_ < auVar46._12_4_);
        auVar26 = ~auVar40 & auVar26 | auVar41 & auVar40;
        uVar20 = 0xff;
        while (*(int *)(uVar17 + (uint64_t)uVar20 * 4) == 0) {
          uVar20 = uVar20 - 1;
        }
        if (uVar20 <= *in_RAX) {
          auVar42._0_8_ = auVar26._8_8_;
          auVar42._8_4_ = auVar26._8_4_;
          auVar42._12_4_ = auVar26._12_4_;
          auVar41 = auVar26 ^ auVar28;
          auVar33 = auVar42 ^ auVar28;
          auVar27._0_4_ = -(uint32_t)(auVar33._0_4_ < auVar41._0_4_);
          auVar27._4_4_ = -(uint32_t)(auVar33._4_4_ < auVar41._4_4_);
          auVar27._8_4_ = -(uint32_t)(auVar33._8_4_ < auVar41._8_4_);
          auVar27._12_4_ = -(uint32_t)(auVar33._12_4_ < auVar41._12_4_);
          auVar26 = ~auVar27 & auVar42 | auVar26 & auVar27;
          uVar29 = auVar26._4_4_;
          auVar41._0_8_ = CONCAT44(uVar29,uVar29);
          auVar41._8_4_ = uVar29;
          auVar41._12_4_ = uVar29;
          uVar23 = CONCAT44(-(uint32_t)(SUB164(auVar28 ^ auVar41,4) < SUB164(auVar26 ^ auVar28,4)),
                            -(uint32_t)(SUB164(auVar28 ^ auVar41,0) < SUB164(auVar26 ^ auVar28,0)));
          *in_RAX = uVar20;
          FUN_7fffa56a5f20(param_2,uVar17,iVar13,~uVar23 & auVar41._0_8_ | auVar26._0_8_ & uVar23);
        }
      }
    }
    else {
      *in_RAX = 0xff;
      if (uVar23 < 0x5dc) {
        FUN_7fffa4ecf8e0(param_2,0,0x400);
        if (uVar23 == ~(0xffffffffU >> (bVar9 & 0x1f) | -1 << 0x20 - (bVar9 & 0x1f))) {
          *in_RAX = 0;
        }
        else {
          puVar2 = param_3;
          do {
            puVar15 = (uint32_t *)((int64_t)puVar2 + 1);
            piVar18 = (int *)(param_2 + (uint64_t)(uint8_t)*puVar2 * 4);
            *piVar18 = *piVar18 + 1;
            puVar2 = puVar15;
          } while (puVar15 < (uint32_t *)(uVar23 + (int64_t)param_3));
          uVar17 = 0x100;
          do {
            uVar20 = (int)uVar17 - 1;
            uVar17 = (uint64_t)uVar20;
          } while (*(int *)(param_2 + uVar17 * 4) == 0);
          *in_RAX = uVar20;
          if (uVar20 < 7) {
            uVar23 = 0;
            uVar25 = 0;
          }
          else {
            uVar23 = uVar17 + 1 & 0xfffffffffffffff8;
            uVar32 = 0;
            uVar35 = 0;
            uVar43 = 0;
            uVar44 = 0;
            uVar19 = 0;
            uVar25 = 0;
            uVar30 = 0;
            uVar39 = 0;
            uVar38 = 0;
            do {
              puVar2 = (uint32_t *)(param_2 + uVar19 * 4);
              puVar15 = (uint32_t *)(param_2 + 0x10 + uVar19 * 4);
              uVar47 = -(uint32_t)((int)(uVar25 ^ 0x80000000) < (int)(*puVar15 ^ 0x80000000));
              uVar48 = -(uint32_t)((int)(uVar30 ^ 0x80000000) < (int)(puVar15[1] ^ 0x80000000));
              uVar49 = -(uint32_t)((int)(uVar39 ^ 0x80000000) < (int)(puVar15[2] ^ 0x80000000));
              uVar50 = -(uint32_t)((int)(uVar38 ^ 0x80000000) < (int)(puVar15[3] ^ 0x80000000));
              uVar25 = ~uVar47 & uVar25 | *puVar15 & uVar47;
              uVar30 = ~uVar48 & uVar30 | puVar15[1] & uVar48;
              uVar39 = ~uVar49 & uVar39 | puVar15[2] & uVar49;
              uVar38 = ~uVar50 & uVar38 | puVar15[3] & uVar50;
              uVar47 = -(uint32_t)((int)(uVar32 ^ 0x80000000) < (int)(*puVar2 ^ 0x80000000));
              uVar48 = -(uint32_t)((int)(uVar35 ^ 0x80000000) < (int)(puVar2[1] ^ 0x80000000));
              uVar49 = -(uint32_t)((int)(uVar43 ^ 0x80000000) < (int)(puVar2[2] ^ 0x80000000));
              uVar50 = -(uint32_t)((int)(uVar44 ^ 0x80000000) < (int)(puVar2[3] ^ 0x80000000));
              uVar32 = ~uVar47 & uVar32 | *puVar2 & uVar47;
              uVar35 = ~uVar48 & uVar35 | puVar2[1] & uVar48;
              uVar43 = ~uVar49 & uVar43 | puVar2[2] & uVar49;
              uVar44 = ~uVar50 & uVar44 | puVar2[3] & uVar50;
              uVar19 = uVar19 + 8;
            } while (((uint64_t)uVar20 + 1 & 0xfffffffffffffff8) != uVar19);
            uVar47 = -(uint32_t)((int)(uVar25 ^ 0x80000000) < (int)(uVar32 ^ 0x80000000));
            uVar48 = -(uint32_t)((int)(uVar30 ^ 0x80000000) < (int)(uVar35 ^ 0x80000000));
            uVar49 = -(uint32_t)((int)(uVar39 ^ 0x80000000) < (int)(uVar43 ^ 0x80000000));
            uVar50 = -(uint32_t)((int)(uVar38 ^ 0x80000000) < (int)(uVar44 ^ 0x80000000));
            uVar32 = ~uVar47 & uVar25 | uVar32 & uVar47;
            uVar35 = ~uVar48 & uVar30 | uVar35 & uVar48;
            uVar39 = ~uVar49 & uVar39 | uVar43 & uVar49;
            uVar38 = ~uVar50 & uVar38 | uVar44 & uVar50;
            uVar25 = -(uint32_t)((int)(uVar39 ^ 0x80000000) < (int)(uVar32 ^ 0x80000000));
            uVar30 = -(uint32_t)((int)(uVar38 ^ 0x80000000) < (int)(uVar35 ^ 0x80000000));
            uVar25 = ~uVar25 & uVar39 | uVar32 & uVar25;
            uVar30 = ~uVar30 & uVar38 | uVar35 & uVar30;
            uVar39 = -(uint32_t)((int)(uVar30 ^ 0x80000000) < (int)(uVar25 ^ 0x80000000));
            uVar25 = ~uVar39 & uVar30 | uVar25 & uVar39;
            if (uVar17 + 1 == uVar23) {
              return;
            }
          }
          while( true ) {
            uVar30 = *(uint32_t *)(param_2 + uVar23 * 4);
            if (uVar25 < uVar30) {
              uVar25 = uVar30;
            }
            if (uVar20 == uVar23) break;
            uVar23 = uVar23 + 1;
          }
        }
      }
      else {
        FUN_7fffa4ecf8e0(uVar17,0,0x1000);
        puVar2 = (uint32_t *)((int64_t)param_3 + uVar23);
        if (0x13 < (int64_t)uVar23) {
          puVar12 = (uint32_t *)((int64_t)param_3 + lVar21 + 0xc92b5ed3);
          uVar20 = *param_3;
          puVar15 = param_3;
          do {
            param_3 = puVar15 + 4;
            if ((-0x18bd5842 << (bVar9 & 0x1f) | 0xe742a7beU >> 0x20 - (bVar9 & 0x1f)) <
                (param_1 ^ 0xd3d74d3a)) {
              uVar25 = (param_1 ^ 0xa2b7cff2) + 0xec4d54f0;
              uVar25 = uVar25 >> 1 | (uint32_t)((uVar25 & 1) != 0) << 0x1f;
            }
            else {
              uVar25 = param_1 + 0x525ce663;
            }
            bVar8 = (uint8_t)uVar25 & 0x1f;
            uVar30 = puVar15[1];
            uVar19 = (uint64_t)uVar30;
            uVar23 = (uint64_t)(uVar20 & 0xff);
            uVar39 = uVar20 >> 0x10 & 0xff;
            iVar13 = *(int *)(uVar17 + uVar23 * 4) + 1;
            bVar7 = (uint8_t)uVar25 & 0x1f;
            if ((int64_t)
                (int)(((param_1 ^ 0xd422a622) << bVar7 | (param_1 ^ 0xd422a622) >> 0x20 - bVar7) +
                     0x56831965) <
                (int64_t)(uint64_t)(0x1a44ca38U >> bVar8 | 0x1a44ca38 << 0x20 - bVar8)) {
              *(int *)(uVar17 + uVar23 * 4) = iVar13;
              piVar18 = (int *)(uVar17 + 0xc00 + (uint64_t)(uVar20 >> 0x18) * 4);
              *piVar18 = *piVar18 + 1;
              iVar34 = *(int *)(uVar17 + (uVar19 & 0xff) * 4);
              uVar10 = (uint64_t)(uVar30 >> 0x18);
              iVar31 = *(int *)(uVar17 + 0xc00 + uVar10 * 4);
              piVar18 = (int *)(uVar17 + 0x800 + (uint64_t)uVar39 * 4);
              *piVar18 = *piVar18 + 1;
              uVar11 = (uint64_t)(uVar30 >> 0xe & 0x3fc);
              iVar13 = *(int *)(uVar17 + 0x800 + uVar11) + 1;
            }
            else {
              uVar10 = (uint64_t)(uVar30 >> 0x18);
              iVar31 = *(int *)(uVar17 + 0xc00 + uVar10 * 4);
              uVar11 = (uint64_t)(uVar30 >> 0xe & 0x3fc);
              iVar34 = *(int *)(uVar17 + (uVar19 & 0xff) * 4);
              *(int *)(uVar17 + uVar23 * 4) = iVar13;
              piVar18 = (int *)(uVar17 + 0x800 + (uint64_t)uVar39 * 4);
              *piVar18 = *piVar18 + 1;
              iVar13 = (uint32_t)((int64_t)
                              (int)(((0xfbf69b6b - uVar25) * 0x20000 | 0xfbf69b6b - uVar25 >> 0xf) -
                                   param_1) <=
                             (int64_t)
                             (uint64_t)(((uVar25 | 1) * -0x120bc00 - param_1) + 0x581120ce)) +
                       *(int *)(uVar17 + 0x800 + uVar11);
              piVar18 = (int *)(uVar17 + 0xc00 + (uint64_t)(uVar20 >> 0x18) * 4);
              *piVar18 = *piVar18 + 1;
            }
            uVar39 = (uVar25 | 1) * -0x2f7fc3cc;
            uVar23 = (uint64_t)(uVar20 >> 8 & 0xff);
            if ((uint64_t)(uVar39 << (bVar9 & 0x1f) | uVar39 >> 0x20 - (bVar9 & 0x1f)) <
                (uint64_t)
                (int64_t)(int)(((param_1 | 1) * 0x2aa2f853 + 0x589128c5 ^ uVar25) + 0x915f1966)) {
              piVar18 = (int *)(uVar17 + 0x400 + uVar23 * 4);
              *piVar18 = *piVar18 + 1;
              uVar20 = puVar15[2];
            }
            else {
              uVar20 = puVar15[2];
              piVar18 = (int *)(uVar17 + 0x400 + uVar23 * 4);
              *piVar18 = *piVar18 + 1;
            }
            puVar1 = puVar15 + 5;
            uVar23 = (uint64_t)(uVar30 >> 8) & 0xff;
            iVar36 = *(int *)(uVar17 + 0x400 + uVar23 * 4);
            *(int *)(uVar17 + (uVar19 & 0xff) * 4) = iVar34 + 1;
            iVar34 = *(int *)(uVar17 + (uint64_t)(uVar20 & 0xff) * 4);
            *(int *)(uVar17 + 0x400 + uVar23 * 4) = iVar36 + 1;
            *(int *)(uVar17 + 0x800 + uVar11) = iVar13;
            uVar23 = (uint64_t)(uVar20 >> 0xe & 0x3fc);
            iVar13 = *(int *)(uVar17 + 0x800 + uVar23);
            *(int *)(uVar17 + 0xc00 + uVar10 * 4) = iVar31 + 1;
            uVar25 = puVar15[3];
            *(int *)(uVar17 + 0x800 + uVar23) = iVar13 + 1;
            *(int *)(uVar17 + (uint64_t)(uVar20 & 0xff) * 4) = iVar34 + 1;
            iVar13 = *(int *)(uVar17 + (uint64_t)(uVar25 & 0xff) * 4);
            uVar19 = (uint64_t)(uVar25 >> 0xe & 0x3fc);
            iVar31 = *(int *)(uVar17 + 0x800 + uVar19);
            piVar18 = (int *)(uVar17 + 0x400 + (uint64_t)(uVar20 >> 8 & 0xff) * 4);
            *piVar18 = *piVar18 + 1;
            uVar23 = (uint64_t)(uVar25 >> 8 & 0xff);
            iVar34 = *(int *)(uVar17 + 0x400 + uVar23 * 4);
            piVar18 = (int *)(uVar17 + 0xc00 + (uint64_t)(uVar20 >> 0x18) * 4);
            *piVar18 = *piVar18 + 1;
            iVar36 = *(int *)(uVar17 + 0xc00 + (uint64_t)(uVar25 >> 0x18) * 4);
            uVar20 = *param_3;
            *(int *)(uVar17 + 0x800 + uVar19) = iVar31 + 1;
            *(int *)(uVar17 + 0x400 + uVar23 * 4) = iVar34 + 1;
            *(int *)(uVar17 + (uint64_t)(uVar25 & 0xff) * 4) = iVar13 + 1;
            *(int *)(uVar17 + 0xc00 + (uint64_t)(uVar25 >> 0x18) * 4) = iVar36 + 1;
            puVar15 = param_3;
          } while (puVar1 < puVar12);
        }
        if (param_3 < puVar2) {
          puVar15 = param_3;
          for (uVar23 = (uint64_t)((int)puVar2 - (int)param_3 & 3); uVar23 != 0;
              uVar23 = uVar23 - 1) {
            piVar18 = (int *)(uVar17 + (uint64_t)(uint8_t)*puVar15 * 4);
            *piVar18 = *piVar18 + 1;
            puVar15 = (uint32_t *)((int64_t)puVar15 + 1);
          }
          if ((uint64_t)((int64_t)param_3 - (int64_t)puVar2) < 0xfffffffffffffffd) {
            do {
              piVar18 = (int *)(uVar17 + (uint64_t)(uint8_t)*puVar15 * 4);
              *piVar18 = *piVar18 + 1;
              piVar18 = (int *)(uVar17 + (uint64_t)*(uint8_t *)((int64_t)puVar15 + 1) * 4);
              *piVar18 = *piVar18 + 1;
              piVar18 = (int *)(uVar17 + (uint64_t)*(uint8_t *)((int64_t)puVar15 + 2) * 4);
              *piVar18 = *piVar18 + 1;
              piVar18 = (int *)(uVar17 + (uint64_t)*(uint8_t *)((int64_t)puVar15 + 3) * 4);
              *piVar18 = *piVar18 + 1;
              puVar15 = puVar15 + 1;
            } while (puVar15 < puVar2);
          }
        }
        lVar21 = 0;
        do {
          piVar22 = (int *)(uVar17 + 0x800 + lVar21 * 4);
          piVar18 = (int *)(uVar17 + lVar21 * 4);
          piVar14 = (int *)(uVar17 + 0x10 + lVar21 * 4);
          piVar3 = (int *)(uVar17 + 0x400 + lVar21 * 4);
          piVar4 = (int *)(uVar17 + 0x410 + lVar21 * 4);
          piVar5 = (int *)(uVar17 + 0x810 + lVar21 * 4);
          piVar6 = (int *)(uVar17 + 0xc00 + lVar21 * 4);
          auVar28._0_4_ = *piVar6 + *piVar18 + *piVar3 + *piVar22;
          auVar28._4_4_ = piVar6[1] + piVar18[1] + piVar3[1] + piVar22[1];
          auVar28._8_4_ = piVar6[2] + piVar18[2] + piVar3[2] + piVar22[2];
          auVar28._12_4_ = piVar6[3] + piVar18[3] + piVar3[3] + piVar22[3];
          piVar18 = (int *)(uVar17 + 0xc10 + lVar21 * 4);
          auVar26._0_4_ = *piVar18 + *piVar4 + *piVar5 + *piVar14;
          auVar26._4_4_ = piVar18[1] + piVar4[1] + piVar5[1] + piVar14[1];
          auVar26._8_4_ = piVar18[2] + piVar4[2] + piVar5[2] + piVar14[2];
          auVar26._12_4_ = piVar18[3] + piVar4[3] + piVar5[3] + piVar14[3];
          *(uint8_t (*) [16])(uVar17 + 0x10 + lVar21 * 4) = auVar26;
          *(uint8_t (*) [16])(uVar17 + lVar21 * 4) = auVar28;
          lVar21 = lVar21 + 8;
        } while (lVar21 != 0x100);
        uVar20 = 0xff;
        while (*(int *)(uVar17 + (uint64_t)uVar20 * 4) == 0) {
          uVar20 = uVar20 - 1;
        }
        *in_RAX = uVar20;
        FUN_7fffa56a5f20(param_2,uVar17,0x400);
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x7fffa56b26a0) is written */
  return;
}


// ============================================================================
// Function : FUN_7fffa524fccc  |  RVA: 0xadfccc  |  Size: 86 bytes
// Callers  : FUN_7fffa5130768@0x9c0768, FUN_7fffa4e90ae0@0x720ae0, FUN_7fffa54539d0@0xce39d0, FUN_7fffa56a0818@0xf30818, FUN_7fffa5404d03@0xc94d03, FUN_7fffa52c403c@0xb5403c, FUN_7fffa5687890@0xf17890, FUN_7fffa510261b@0x99261b
// Callees  : FUN_7fffa55f0140@0xe80140, FUN_7fffa4d03fd8@0x593fd8, FUN_7fffa56962a0@0xf262a0, FUN_7fffa5687c00@0xf17c00
// ============================================================================
void FUN_7fffa524fccc(void)

{
  code *pcVar1;
  int64_t lVar2;
  int iVar3;
  uint8_t *puVar4;
  uint8_t auStack_28 [8];
  uint8_t auStack_20 [32];
  
  lVar2 = FUN_7fffa5687c00();
  if (lVar2 != 0) {
    FUN_7fffa4d03fd8(0x16);
  }
  puVar4 = auStack_28;
  if ((DAT_7fffa4780230 & 2) != 0) {
    iVar3 = (*(code *)&DAT_7ff84ea3d8d0)(0x17);
    puVar4 = auStack_28;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(uint64_t *)(puVar4 + -8) = 0x7fffa524fd17;
    FUN_7fffa56962a0(3,0x40000015);
  }
  *(uint64_t *)(puVar4 + -8) = 0x7fffa524fd21;
  FUN_7fffa55f0140(3);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa524fd30  |  RVA: 0xadfd30  |  Size: 1505 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa524fd30(uint64_t param_1)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint16_t uVar7;
  uint32_t uVar8;
  uint8_t auVar9 [16];
  short sVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t in_EAX;
  uint8_t bVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  uint64_t *in_R11;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint8_t bVar20;
  uint32_t uVar21;
  uint64_t *puVar22;
  int64_t lVar23;
  uint8_t *puVar24;
  float fVar25;
  int64_t in_XMM0_Qa;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint32_t uStack_9c;
  uint8_t *puStack_88;
  int64_t lStack_50;
  
  uVar18 = in_XMM0_Qa * 0x5f4be267c6ed4fb;
  uVar19 = uVar18 ^ 0xd5c4dd1;
  uVar19 = (uVar19 << 0x11 | uVar18 >> 0x2f) ^ (uVar19 << 0x13 | uVar18 >> 0x2d) ^
           (uVar19 << 0x3b | uVar19 >> 5);
  sVar10 = (short)in_EAX;
  uVar18 = *(uint64_t *)
            ((int64_t)(short)((sVar10 + 0x143dU) * 0x10 | (uint16_t)(sVar10 + 0x143dU) >> 0xc) +
            0x7fffa47c2d33);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar18;
  lStack_50 = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar18;
  auVar9._8_8_ = 1;
  auVar9._0_8_ = 0x4325c53ef368eb0;
  fVar25 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar4 * auVar9,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar4 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar3 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar17 = (int64_t)(fVar25 - 9.223372e+18) & (int64_t)fVar25 >> 0x3f | (int64_t)fVar25;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar17;
  uVar18 = SUB168(auVar6 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar6 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar5 * ZEXT816(0x1111111111111112),8));
  lVar16 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  bVar20 = 0x3f;
  if (0x1d < uVar17) {
    bVar20 = (uint8_t)lVar16 ^ 0x3f;
  }
  lVar16 = 1L << (-bVar20 & 0x3f);
  uVar19 = uVar19 ^ (uVar19 << 0x30 | uVar19 >> 0x10) ^ (uVar19 << 0x2c | uVar19 >> 0x14);
  uVar19 = (uVar19 << 0x18 | uVar19 >> 0x28) ^ (uVar19 << 0x20 | uVar19 >> 0x20) ^ uVar19;
  uVar18 = (uVar19 << 0x10 | uVar19 >> 0x30) * -0xfff000fff000fff;
  if (uVar17 == 0) {
    puVar24 = &UNK_7fffa56ee720;
  }
  else {
    bVar14 = 0x40 - bVar20;
    lVar23 = 0x78L << (bVar14 & 0x3f);
    uVar19 = (0x88L << (bVar14 & 0x3f)) + 0xeU & 0xfffffffffffffff8;
    uVar19 = uVar19 << 0x3c ^ uVar19;
    (*(code *)((int64_t)(short)(-0x68df - (sVar10 + -0x3c35)) + 0x7fffa5271b6a))();
    lStack_50 = (uVar19 << 0x2c | uVar19 >> 0x14) - ((uVar19 >> 0x14) << 0x36);
    puVar24 = (uint8_t *)
              ((uint64_t)(-((int)lStack_50 + (int)lVar23 + -8) & 0xf) + lStack_50 + lVar23 + -8);
    FUN_7fffa4ecf8e0(puVar24,0,0x10L << (bVar14 & 0x3f));
    puVar24[lVar16 * 0x10 + -2] = 1;
  }
  uVar19 = uVar18 >> (bVar20 & 0x3f);
  puStack_88 = puVar24 + uVar19 * 0x10;
  *in_R11 = 0;
  *(uint32_t *)(in_R11 + 1) = 0;
  pcVar1 = puVar24 + uVar19 * 0x10;
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
  in_R11[2] = 0;
  uStack_9c = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar26 >> 7,0) & 1) |
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
  if (uStack_9c == 0) {
    lVar23 = 1;
    while( true ) {
      puStack_88[0xf] = puStack_88[0xf] | '\x01' << ((uint8_t)uVar18 & 7);
      uVar19 = uVar19 + lVar23 & lVar16 - 1U;
      puStack_88 = puVar24 + uVar19 * 0x10;
      pcVar1 = puVar24 + uVar19 * 0x10;
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
      uVar7 = (uint16_t)(SUB161(auVar27 >> 7,0) & 1) | (uint16_t)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
      uStack_9c = (uint32_t)uVar7;
      if (uVar7 != 0) break;
      lVar23 = lVar23 + 1;
    }
  }
  uVar21 = in_EAX | 1;
  param_1 = (param_1 << 0x2d | param_1 >> 0x13) ^ (param_1 << 0x33 | param_1 >> 0xd) ^ param_1;
  bVar20 = (uint8_t)in_EAX & 0xf;
  lStack_50 = uVar19 * 0x78 + lStack_50;
  bVar14 = (uint8_t)in_EAX & 0x1f;
  param_1 = (param_1 << 0x1a | param_1 >> 0x26) ^ (param_1 << 0x26 | param_1 >> 0x1a) ^ param_1;
  param_1 = (param_1 << 0x34 | param_1 >> 0xc) ^ (param_1 << 0xc | param_1 >> 0x34) ^ param_1;
  param_1 = (param_1 << 0x28 | param_1 >> 0x18) ^ (param_1 << 0x18 | param_1 >> 0x28) ^ param_1;
  uVar8 = 0;
  for (; (uStack_9c & 1) == 0; uStack_9c = uStack_9c >> 1 | 0x80000000) {
    uVar8 = uVar8 + 1;
  }
  uVar17 = (uint64_t)uVar8;
  uVar19 = (uint64_t)(uVar21 * -0x5781b45e);
  puVar22 = (uint64_t *)
            ((((param_1 << 0x10 | param_1 >> 0x30) ^ (param_1 << 0x30 | param_1 >> 0x10) ^ param_1)
             - (uint64_t)(0x33675069 << bVar14 | 0x33675069U >> 0x20 - bVar14)) +
            (uint64_t)(0x88d1b98c - in_EAX));
  (*(code *)((int64_t)(int)(uVar21 * -0x54fbe567) + 0x7fffa5274287))();
  puVar15 = (uint64_t *)((uVar19 << 0x2c | uVar19 >> 0x14) - ((uVar19 >> 0x14) << 0x36));
  *(uint64_t **)(lStack_50 + uVar17 * 8) = puVar15;
  uVar11 = puVar22[1];
  uVar12 = puVar22[2];
  uVar13 = puVar22[3];
  *puVar15 = *puVar22;
  puVar15[1] = uVar11;
  puVar15[2] = uVar12;
  puVar15[3] = uVar13;
  puVar22[3] = 7;
  *(uint16_t *)puVar22 = 0;
  uVar2 = (&UNK_7fffa5833f5e)
          [(uVar18 & 0xff) * 4 + (int64_t)(short)(-0x303e << bVar20 | 0xcfc2U >> 0x10 - bVar20)];
  puVar22[2] = 0;
  puStack_88[uVar17] = uVar2;
  in_R11[2] = lStack_50 + uVar17 * 8;
  *(uint32_t *)(in_R11 + 1) = uVar8;
  *in_R11 = puStack_88;
  (*(code *)((int64_t)(short)((sVar10 + 0xabefU) * 0x200 | (uint16_t)(sVar10 + 0xabefU) >> 7) +
            0x7fffa5225841))();
  *(int64_t *)
   ((int64_t)(int)(uVar21 * -0x2cf10000 | uVar21 * -0x568c2cf1 >> 0x10) + 0x7fffa47c56c9) =
       *(int64_t *)(((int64_t)(int)(uVar21 * -0x5781b45e) ^ 0x42c368cfU) + 0x7fffa47c4cfb) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa5250320  |  RVA: 0xae0320  |  Size: 1315 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa5250320(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t bVar6;
  uint32_t uVar7;
  uint8_t auVar8 [16];
  uint64_t *in_RAX;
  uint8_t bVar9;
  uint32_t uVar10;
  code *pcVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  short sVar16;
  uint64_t uVar17;
  uint64_t in_R10;
  uint64_t uVar18;
  uint16_t uVar19;
  uint32_t in_R11D;
  int64_t lVar20;
  uint8_t *puVar21;
  int64_t lVar22;
  float fVar23;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t *puStack_88;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint8_t *puStack_50;
  int64_t lStack_48;
  
  param_1 = (param_1 << 3 | param_1 >> 0x3d) ^ (param_1 << 0x1c | param_1 >> 0x24) ^ param_1;
  param_1 = (param_1 << 6 | param_1 >> 0x3a) ^ (param_1 << 0x38 | param_1 >> 8) ^ param_1;
  param_1 = (param_1 << 0x30 | param_1 >> 0x10) ^ (param_1 << 0xc | param_1 >> 0x34) ^ param_1;
  param_1 = (param_1 << 0x18 | param_1 >> 0x28) ^ (param_1 << 0x20 | param_1 >> 0x20) ^ param_1;
  uVar17 = param_1 << 0x10 | param_1 >> 0x30;
  lVar14 = uVar17 * 0x2b770e70b0e3885f;
  if (((in_R11D + 0xd1d8c17d) * 0x80 | in_R11D + 0xd1d8c17d >> 0x19) <
      ((in_R11D | 1) * -0x37f00000 | (in_R11D | 1) * 0x2f408c81 >> 0xc) + 0xbe81a802) {
    lVar14 = uVar17 + 0xd488f18f4f1c77a1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(uint64_t *)(in_R10 + 0x28);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(uint64_t *)(in_R10 + 0x28);
  auVar8._8_8_ = 1;
  auVar8._0_8_ = 0x4325c53ef368eb0;
  lStack_48 = 0;
  uVar15 = lVar14 + 0x1190151a;
  fVar23 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar3 * auVar8,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar3 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar2 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar18 = (int64_t)(fVar23 - 9.223372e+18) & (int64_t)fVar23 >> 0x3f | (int64_t)fVar23;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar18;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar18;
  uVar13 = SUB168(auVar5 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar5 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar4 * ZEXT816(0x1111111111111112),8));
  uVar17 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> uVar17 == 0; uVar17 = uVar17 - 1) {
    }
  }
  uStack_60 = 0x3f;
  if ((in_R11D + 0xf8533453 & 0xffff) <= uVar18) {
    uStack_60 = uVar17 ^ 0x3f;
  }
  bVar6 = (uint8_t)uStack_60;
  lVar14 = 1L << (-bVar6 & 0x3f);
  uStack_58 = lVar14 - 1;
  if (uVar18 == 0) {
    lVar22 = 0;
    puVar21 = &UNK_7fffa56ee720;
  }
  else {
    bVar9 = 0x40 - bVar6;
    lVar20 = 0x78L << (bVar9 & 0x3f);
    pcVar11 = (code *)((int64_t)
                       (short)((uint16_t)(in_R11D ^ 0x59ee) >> 1 |
                              (uint16_t)(((in_R11D ^ 0x59ee) & 1) != 0) << 0xf) + 0x7fffa526e19e);
    (*pcVar11)(in_R11D ^ 0xd9f5a997,((0x88L << (bVar9 & 0x3f)) + 0xeU & 0xfffffffffffffff8) << 0xe);
    lVar22 = ((int64_t)pcVar11 << 0x2c | (uint64_t)pcVar11 >> 0x14) -
             (((uint64_t)pcVar11 >> 0x14) << 0x36);
    puVar21 = (uint8_t *)
              ((uint64_t)(-((int)lVar22 + (int)lVar20 + -8) & 0xf) + lVar22 + lVar20 + -8);
    lStack_48 = lVar22;
    FUN_7fffa4ecf8e0(puVar21,0,0x10L << (bVar9 & 0x3f));
    puVar21[lVar14 * 0x10 + -2] = 1;
  }
  uVar17 = uVar15 >> (bVar6 & 0x3f);
  *(uint32_t *)(in_RAX + 1) = 0;
  puStack_88 = puVar21 + uVar17 * 0x10;
  pcVar1 = puVar21 + uVar17 * 0x10;
  auVar24[0] = -(*pcVar1 == '\0');
  auVar24[1] = -(pcVar1[1] == '\0');
  auVar24[2] = -(pcVar1[2] == '\0');
  auVar24[3] = -(pcVar1[3] == '\0');
  auVar24[4] = -(pcVar1[4] == '\0');
  auVar24[5] = -(pcVar1[5] == '\0');
  auVar24[6] = -(pcVar1[6] == '\0');
  auVar24[7] = -(pcVar1[7] == '\0');
  auVar24[8] = -(pcVar1[8] == '\0');
  auVar24[9] = -(pcVar1[9] == '\0');
  auVar24[10] = -(pcVar1[10] == '\0');
  auVar24[0xb] = -(pcVar1[0xb] == '\0');
  auVar24[0xc] = -(pcVar1[0xc] == '\0');
  auVar24[0xd] = -(pcVar1[0xd] == '\0');
  auVar24[0xe] = -(pcVar1[0xe] == '\0');
  auVar24[0xf] = -(pcVar1[0xf] == '\0');
  *in_RAX = 0;
  in_RAX[2] = 0;
  uVar10 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar24 >> 7,0) & 1) |
                          (uint16_t)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                          (uint16_t)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                          (uint16_t)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                          (uint16_t)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                          (uint16_t)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                          (uint16_t)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                          (uint16_t)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                          (uint16_t)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                          (uint16_t)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                          (uint16_t)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                          (uint16_t)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                          (uint16_t)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                          (uint16_t)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                         (uint16_t)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe);
  if (uVar10 == 0) {
    uVar13 = 1;
    while( true ) {
      bVar6 = (uint8_t)in_R11D & 0x1f;
      uVar18 = uVar17 + uVar13;
      if ((int64_t)(uint64_t)(0x6e2b05b8 - (in_R11D + 0x594a56c7)) <=
          (int64_t)(int)((0x332d9a8e << bVar6 | 0x332d9a8eU >> 0x20 - bVar6) + 0x2fa347f0)) {
        uVar18 = uVar13 | uVar17;
      }
      puStack_88[0xf] = puStack_88[0xf] | '\x01' << ((uint8_t)uVar15 & 7);
      uVar17 = uVar18 & uStack_58;
      puStack_88 = puVar21 + uVar17 * 0x10;
      pcVar1 = puVar21 + uVar17 * 0x10;
      auVar25[0] = -(*pcVar1 == '\0');
      auVar25[1] = -(pcVar1[1] == '\0');
      auVar25[2] = -(pcVar1[2] == '\0');
      auVar25[3] = -(pcVar1[3] == '\0');
      auVar25[4] = -(pcVar1[4] == '\0');
      auVar25[5] = -(pcVar1[5] == '\0');
      auVar25[6] = -(pcVar1[6] == '\0');
      auVar25[7] = -(pcVar1[7] == '\0');
      auVar25[8] = -(pcVar1[8] == '\0');
      auVar25[9] = -(pcVar1[9] == '\0');
      auVar25[10] = -(pcVar1[10] == '\0');
      auVar25[0xb] = -(pcVar1[0xb] == '\0');
      auVar25[0xc] = -(pcVar1[0xc] == '\0');
      auVar25[0xd] = -(pcVar1[0xd] == '\0');
      auVar25[0xe] = -(pcVar1[0xe] == '\0');
      auVar25[0xf] = -(pcVar1[0xf] == '\0');
      uVar10 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar25 >> 7,0) & 1) |
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
                             (uint16_t)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe);
      if (uVar10 != 0) break;
      uVar13 = uVar13 + 1;
    }
    lVar22 = lStack_48;
  }
  else {
  }
  sVar16 = -0x50e7 - (short)in_R11D;
  uVar19 = (short)in_R11D + 0xce68;
  lVar22 = uVar17 * 0x78 + lVar22;
  uVar7 = 0;
  for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
    uVar7 = uVar7 + 1;
  }
  uVar17 = (uint64_t)uVar7;
  pcVar11 = (code *)((int64_t)(short)(uVar19 * 0x400 | uVar19 >> 6) + 0x7fffa526dc48);
  puStack_50 = puVar21;
  (*pcVar11)(((int64_t)&uStack_60 << 0x2b | (uint64_t)&uStack_60 >> 0x15) ^
             ((int64_t)&uStack_60 << 0x37 | (uint64_t)&uStack_60 >> 9),uVar15 & 0xff,&uStack_60,
             (0x6bab1a6 - in_R11D) * 0x40000015 + 0x518db417);
  puVar12 = (uint64_t *)
            (((int64_t)pcVar11 << 0x2c | (uint64_t)pcVar11 >> 0x14) -
            (((uint64_t)pcVar11 >> 0x14) << 0x36));
  *(uint64_t **)(lVar22 + uVar17 * 8) = puVar12;
  *(uint32_t *)(puVar12 + 1) = 0;
  *puVar12 = param_4 ^ 0x9c8272;
  puStack_88[uVar17] =
       (&UNK_7fffa583cdc8)[(uVar15 & 0xff) * 4 + (int64_t)(int)(in_R11D + 0x1a43758d)];
  in_RAX[2] = lVar22 + uVar17 * 8;
  *(uint32_t *)(in_RAX + 1) = uVar7;
  *in_RAX = puStack_88;
  (*(code *)((int64_t)(short)(sVar16 * 2 | (uint16_t)(sVar16 < 0)) + 0x7fffa56ae9f3))
            (puStack_88,
             (in_R10 << 0x31 | in_R10 >> 0xf) ^ (in_R10 << 0x2f | in_R10 >> 0x11) ^ in_R10);
  *(int64_t *)(in_R10 + 0x28) = *(int64_t *)(in_R10 + 0x28) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa5250850  |  RVA: 0xae0850  |  Size: 750 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5250850(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  int64_t lVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  
  uRam00007fffa47bb43e = 0;
  uRam00007fffa47bb46c = 0;
  uRam00007fffa47bb474 = 0;
  uRam00007fffa47bb45c = 0;
  uRam00007fffa47bb464 = 0;
  uRam00007fffa47bb44c = 0;
  uRam00007fffa47bb454 = 0;
  uRam00007fffa47bb47c = 0;
  uRam00007fffa47bb48a = 0;
  uVar5 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)(uVar5 >> 0x20)) << 0x20 | uVar5 & 0xffffffff) * 0xe0553d93e40a115;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 5;
    *(char *)(uVar5 + 0x7fffa47bb434) = (char)((uint64_t)(lVar3 * 0xd93e40a115) >> 0x20);
    *(char *)(uVar5 + 0x7fffa47bb437) = (char)((uint64_t)(lVar3 * -0x3d768e37e25d44f) >> 0x20);
    *(char *)(uVar5 + 0x7fffa47bb435) = (char)((uint64_t)(lVar3 * 0xf11bdb6bb9) >> 0x20);
    *(char *)(uVar5 + 0x7fffa47bb436) = (char)((uint64_t)(lVar3 * 0xf03ff2f2d) >> 0x20);
    lVar3 = lVar3 * -0x7c13b9d65960197b;
    *(char *)(uVar5 + 0x7fffa47bb438) = (char)((uint64_t)lVar3 >> 0x20);
    uVar5 = uVar1;
  } while ((uVar1 << 0x28 | uVar1 >> 0x18) * -0x51f055bbe554d6f1 != -0x7bc36f0000000000);
  bVar2 = (uint8_t)uVar1 & 0xf;
  uVar4 = (uint32_t)*(uint8_t *)((int64_t)(short)((0x8c68U >> bVar2 | -0x7398 << 0x10 - bVar2) + 0xbf28) +
                         0x7fffa47bdc45) * 0x24924925 + 0x24924925;
  uVar5 = (uint64_t)uVar4 * 8 - (uint64_t)uVar4;
  *(uint64_t *)((int64_t)(int)~((uint32_t)uVar1 ^ 0xb5f2) + 0x7fffa47c69fa + (uVar5 >> 0x20) * 8) =
       0xffffffffffffffff;
  *(char *)((int64_t)(int)(((uint32_t)uVar1 | 1) * 0x745139e0 + -0x2a2528c8) + 0x7fffa47c62e6) =
       (char)(uVar5 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5250b40  |  RVA: 0xae0b40  |  Size: 2565 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5250d0c) */
/* WARNING: Removing unreachable block (ram,0x7fffa5250db3) */
/* WARNING: Removing unreachable block (ram,0x7fffa5250db7) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7fffa5250b40(void)

{
  uint8_t bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint32_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  
  uVar6 = rdtsc();
  lVar9 = (CONCAT44(0xffffffff,(int)(uVar6 >> 0x20)) << 0x20 | uVar6 & 0xffffffff) *
          0x299c25085ae2c7e9 + 0x7eff2367c4505e1c;
  lVar2 = lVar9 * 0xb8b8edae34d1fd3 + 0xb;
  uRam00007fffa47bd0f0 = (uint8_t)((uint64_t)lVar9 >> 0x20);
  uVar8 = (uint32_t)(uint8_t)((uint64_t)lVar2 >> 0x20) * 0x55555556 + 0x55555556;
  uVar13 = (uint64_t)uVar8 + (uint64_t)uVar8 * 2;
  lVar9 = (uVar13 >> 0x20) * 4;
  lVar2 = lVar2 * 0xb8b8edae34d1fd3 + 0xb;
  uRam00007fffa47bd0f2 = (uint8_t)((uint64_t)lVar2 >> 0x20);
  lVar2 = lVar2 * 0xb8b8edae34d1fd3 + 0xb;
  uVar6 = ((lVar2 * 0xb8b8edae34d1fd3 + 0xb) * 0xedae34d1fd3 + 0xb) * 0xb8b8edae34d1fd3 + 0xb;
  uRam00007fffa47bd0f3 = (uint8_t)((uint64_t)lVar2 >> 0x20);
  lVar3 = ((uVar6 & 0xffffffff) * 0xe34d1fd3 +
           ((uVar6 >> 0x20) * 0xe34d1fd3 + (uVar6 & 0xffffffff) * 0xb8b8eda << 0x20) + 0xb) *
          0xb8b8edae34d1fd3 + 0xb;
  lVar4 = lVar3 * 0xb8b8edae34d1fd3 + 0xb;
  lVar5 = lVar4 * 0xb8b8edae34d1fd3 + 0xb;
  lVar2 = lVar5 * 0xb8b8edae34d1fd3 + 0xb;
  lVar7 = (lVar2 * 0xb8b8edae34d1fd3 + 0xb) * 0xb8b8edae34d1fd3 + 0xb;
  lVar10 = lVar7 * 0xb8b8edae34d1fd3 + 0xb;
  lVar11 = lVar10 * 0xb8b8edae34d1fd3 + 0xb;
  lVar12 = lVar11 * 0xb8b8edae34d1fd3 + 0xb;
  uRam00007fffa47bd100 = (uint8_t)((uint64_t)lVar12 >> 0x20);
  lVar12 = lVar12 * 0xb8b8edae34d1fd3 + 0xb;
  uRam00007fffa47bd101 = (uint8_t)((uint64_t)lVar12 >> 0x20);
  bVar1 = (uint8_t)((uint64_t)
                 ((((lVar12 * 0xb8b8edae34d1fd3 + 0xb) * 0xb8b8edae34d1fd3 + 0xb) *
                   0xb8b8edae34d1fd3 + 0xb) * 0xdae34d1fd3 + 0xb) >> 0x20);
  uRam00007fffa47bd102 = (uint32_t)bVar1;
  uRam00007fffa47bd0f4._0_4_ =
       CONCAT13((char)((uint64_t)lVar3 >> 0x20),
                CONCAT12((char)((uint64_t)lVar4 >> 0x20),
                         CONCAT11((char)((uint64_t)lVar5 >> 0x20),(char)((uint64_t)lVar2 >> 0x20))
                        ));
  uRam00007fffa47bd0f4 = (uint64_t)CONCAT14((char)(uVar6 >> 0x20),(uint32_t)uRam00007fffa47bd0f4)
  ;
  uRam00007fffa47bd0fc =
       (uint32_t)CONCAT12((char)((uint64_t)lVar7 >> 0x20),
                      CONCAT11((char)((uint64_t)lVar10 >> 0x20),(char)((uint64_t)lVar11 >> 0x20)))
  ;
  *(uint8_t *)((int64_t)&uRam00007fffa47bd0f4 + lVar9) = bVar1;
  *(uint8_t *)((int64_t)&uRam00007fffa47bd0f4 + lVar9 + 3) = 0x70;
  *(uint8_t *)((int64_t)&uRam00007fffa47bd0f4 + lVar9 + 1) = 0xae;
  *(uint8_t *)((int64_t)&uRam00007fffa47bd0f4 + lVar9 + 2) = 0xd2;
  uRam00007fffa47bd0f1 = (char)(uVar13 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5251550  |  RVA: 0xae1550  |  Size: 435 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5251550(uint64_t param_1,uint64_t param_2,int param_3)

{
  uint8_t bVar1;
  uint32_t uStack_6c;
  uint32_t *puStack_68;
  uint32_t *puStack_60;
  uint8_t *puStack_58;
  uint32_t uStack_50;
  uint8_t auStack_4c [4];
  uint32_t *puStack_48;
  uint8_t *puStack_40;
  uint32_t *puStack_38;
  
  if ((*(uint8_t *)((int64_t)(short)((short)param_3 + 0x6ef9) + 0x7fffa47bf54c) & 0x10) == 0) {
    uStack_6c = 0;
    bVar1 = (uint8_t)param_3 & 0x1f;
    puStack_48 = &uStack_50;
    puStack_40 = auStack_4c;
    puStack_38 = &uStack_6c;
    (*(code *)(&UNK_7fffa4e9d3e1 + (int)(0xfff924ffU >> bVar1 | -0x6db01 << 0x20 - bVar1)))
              (0x8fa2e4e4);
    uStack_50 = 0;
    puStack_68 = &uStack_50;
    puStack_60 = &uStack_6c;
    puStack_58 = auStack_4c;
    (*(code *)((int64_t)(param_3 + -0x63c54771) + 0x7fffa55bb19e))();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5251710  |  RVA: 0xae1710  |  Size: 89 bytes
// Callers  : FUN_7fffa54037a0@0xc937a0, FUN_7fffa507ae2a@0x90ae2a
// Callees  : FUN_7fffa4abb4b0@0x34b4b0
// ============================================================================
uint64_t * FUN_7fffa5251710(uint64_t *param_1,int *param_2,int param_3)

{
  uint8_t bVar1;
  char cVar2;
  uint32_t uVar3;
  int iVar4;
  uint8_t *pbVar5;
  uint32_t uVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  uint32_t uVar10;
  int iVar11;
  uint8_t *pbVar12;
  int *piStack_38;
  int iStack_30;
  uint32_t uStack_2c;
  
  uVar6 = uStack_2c;
  iVar7 = 0;
  iStack_30 = 0;
  iVar11 = 0;
  piStack_38 = param_2;
  FUN_7fffa4abb4b0(param_2,&piStack_38);
  if (*param_2 != 0) {
    uVar10 = param_2[6];
    iVar9 = 0;
    pbVar12 = *(uint8_t **)(param_2 + 2);
    iVar11 = 0;
    do {
      if (((int)uVar10 <= param_3) && (param_3 <= param_2[7])) {
        iVar11 = iVar9;
        if (iVar7 == 0) {
          iVar11 = iVar7;
        }
        iVar7 = iVar11;
        iVar11 = iVar9;
      }
      iVar9 = iVar9 + 1;
      lVar8 = (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar12 & 0xf];
      bVar1 = (&UNK_7fffa56b3160)[*pbVar12 & 0xf];
      pbVar5 = pbVar12 + -lVar8;
      uVar10 = *(uint32_t *)(pbVar5 + -4);
      *(uint8_t **)(param_2 + 2) = pbVar5;
      uVar10 = uVar10 >> (bVar1 & 0x1f);
      param_2[6] = uVar10;
      cVar2 = (&UNK_7fffa56b3150)[*pbVar5 & 0xf];
      bVar1 = (&UNK_7fffa56b3160)[*pbVar5 & 0xf];
      pbVar5 = pbVar12 + (-lVar8 - (int64_t)cVar2);
      uVar3 = *(uint32_t *)(pbVar5 + -4);
      *(uint8_t **)(param_2 + 2) = pbVar5;
      param_2[7] = uVar3 >> (bVar1 & 0x1f);
      bVar1 = (&UNK_7fffa56b3160)[*pbVar5 & 0xf];
      pbVar12 = pbVar12 + ((-(int64_t)cVar2 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar5 & 0xf]) -
                          lVar8);
      uVar3 = *(uint32_t *)(pbVar12 + -4);
      *(uint8_t **)(param_2 + 2) = pbVar12;
      param_2[8] = uVar3 >> (bVar1 & 0x1f);
      iVar4 = *(int *)pbVar12;
      pbVar12 = pbVar12 + 4;
      *(uint8_t **)(param_2 + 2) = pbVar12;
      param_2[9] = iVar4;
    } while (iVar9 != *param_2);
    uVar6 = uStack_2c;
  }
  piStack_38 = param_2;
  iStack_30 = iVar7;
  uStack_2c = uVar6;
  FUN_7fffa4abb4b0(param_2,&piStack_38);
  *(int *)(param_1 + 3) = iVar11 + 1;
  *(uint32_t *)((int64_t)param_1 + 0x1c) = uStack_2c;
  *(uint32_t *)((int64_t)param_1 + 0xc) = uVar6;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar7;
  param_1[2] = param_2;
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa5251769  |  RVA: 0xae1769  |  Size: 204 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5251769(void)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  uint8_t *pbVar5;
  int64_t unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint32_t in_R11D;
  int unaff_R12D;
  int unaff_R13D;
  int64_t *unaff_R14;
  uint8_t *pbVar9;
  uint64_t in_stack_00000028;
  
  iVar8 = 0;
  pbVar9 = *(uint8_t **)(unaff_RDI + 8);
  do {
    if (((int)in_R11D <= unaff_EBP) && (unaff_EBP <= *(int *)(unaff_RDI + 0x1c))) {
      iVar4 = iVar8;
      if (unaff_ESI == 0) {
        iVar4 = unaff_ESI;
      }
      unaff_ESI = iVar4;
      unaff_R13D = iVar8;
    }
    iVar8 = iVar8 + 1;
    lVar7 = (int64_t)*(char *)((uint64_t)(*pbVar9 & 0xf) + 0xf43150 + unaff_RBX);
    bVar1 = *(uint8_t *)((uint64_t)(*pbVar9 & 0xf) + 0xf43160 + unaff_RBX);
    pbVar5 = pbVar9 + -lVar7;
    uVar2 = *(uint32_t *)(pbVar5 + -4);
    *(uint8_t **)(unaff_RDI + 8) = pbVar5;
    in_R11D = uVar2 >> (bVar1 & 0x1f);
    *(uint32_t *)(unaff_RDI + 0x18) = in_R11D;
    lVar6 = (int64_t)*(char *)((uint64_t)(*pbVar5 & 0xf) + 0xf43150 + unaff_RBX);
    bVar1 = *(uint8_t *)((uint64_t)(*pbVar5 & 0xf) + 0xf43160 + unaff_RBX);
    pbVar5 = pbVar9 + (-lVar7 - lVar6);
    uVar2 = *(uint32_t *)(pbVar5 + -4);
    *(uint8_t **)(unaff_RDI + 8) = pbVar5;
    *(uint32_t *)(unaff_RDI + 0x1c) = uVar2 >> (bVar1 & 0x1f);
    bVar1 = *(uint8_t *)((uint64_t)(*pbVar5 & 0xf) + 0xf43160 + unaff_RBX);
    pbVar9 = pbVar9 + ((-lVar6 - (int64_t)
                                 *(char *)((uint64_t)(*pbVar5 & 0xf) + 0xf43150 + unaff_RBX)) -
                      lVar7);
    uVar2 = *(uint32_t *)(pbVar9 + -4);
    *(uint8_t **)(unaff_RDI + 8) = pbVar9;
    *(uint32_t *)(unaff_RDI + 0x20) = uVar2 >> (bVar1 & 0x1f);
    uVar3 = *(uint32_t *)pbVar9;
    pbVar9 = pbVar9 + 4;
    *(uint8_t **)(unaff_RDI + 8) = pbVar9;
    *(uint32_t *)(unaff_RDI + 0x24) = uVar3;
  } while (iVar8 != unaff_R12D);
  FUN_7fffa4abb4b0();
  *(int *)(unaff_R14 + 3) = unaff_R13D + 1;
  *(uint32_t *)((int64_t)unaff_R14 + 0x1c) = in_stack_00000028._4_4_;
  *(uint32_t *)((int64_t)unaff_R14 + 0xc) = in_stack_00000028._4_4_;
  *unaff_R14 = unaff_RDI;
  *(int *)(unaff_R14 + 1) = unaff_ESI;
  unaff_R14[2] = unaff_RDI;
  return;
}


// ============================================================================
// Function : FUN_7fffa5251835  |  RVA: 0xae1835  |  Size: 83 bytes
// Callers  : none
// Callees  : FUN_7fffa4abb4b0@0x34b4b0
// ============================================================================
void FUN_7fffa5251835(void)

{
  uint32_t unaff_EBX;
  uint32_t unaff_ESI;
  uint64_t unaff_RDI;
  int unaff_R13D;
  uint64_t *unaff_R14;
  uint32_t uStack000000000000002c;
  
  uStack000000000000002c = unaff_EBX;
  FUN_7fffa4abb4b0();
  *(int *)(unaff_R14 + 3) = unaff_R13D + 1;
  *(uint32_t *)((int64_t)unaff_R14 + 0x1c) = uStack000000000000002c;
  *(uint32_t *)((int64_t)unaff_R14 + 0xc) = unaff_EBX;
  *unaff_R14 = unaff_RDI;
  *(uint32_t *)(unaff_R14 + 1) = unaff_ESI;
  unaff_R14[2] = unaff_RDI;
  return;
}


// ============================================================================
// Function : FUN_7fffa5251890  |  RVA: 0xae1890  |  Size: 220 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5251957) */

int64_t FUN_7fffa5251890(void)

{
  int64_t in_RAX;
  
  if ((*(uint8_t *)(*(int64_t *)(in_RAX * 0xfc0fc0fc0fc0fc1 + 8) + 0x68) & 1) == 0) {
    in_RAX = -0x55319ed48b45bdcf;
    uRam00007fffa47bd17d = 1;
  }
  return in_RAX;
}


// ============================================================================
// Function : FUN_7fffa5251960  |  RVA: 0xae1960  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t
FUN_7fffa5251960(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  FUN_7fffa5213cf0(param_2,param_4,*(uint64_t *)(param_4 + 0x38));
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5251980  |  RVA: 0xae1980  |  Size: 654 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5251bc7) */
/* WARNING: Removing unreachable block (ram,0x7fffa5251bde) */

void FUN_7fffa5251980(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa47850c3 = 0;
  uRam00007fffa47850cd = 0;
  uRam00007fffa47850d5 = 0;
  uRam00007fffa47850dd = 0;
  uRam00007fffa47850e6 = 0;
  uVar1 = rdtsc();
  lVar3 = 3;
  lVar4 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x5fcad20909dfb7d;
  while( true ) {
    *(char *)(lVar3 + 0x7fffa47850b6) = (char)((uint64_t)(lVar4 * -0xd01154f19fa4f7) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47850b5) = (char)((uint64_t)(lVar4 * 0x20909dfb7d) >> 0x20);
    if (lVar3 == 0x3b) break;
    *(char *)(lVar3 + 0x7fffa47850b7) = (char)((uint64_t)(lVar4 * 0xb62d34665) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47850b8) = (char)((uint64_t)(lVar4 * -0x69b09c09ce099af) >> 0x20);
    lVar3 = lVar3 + 4;
    lVar4 = lVar4 * -0x69b09c09ce099af;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47850c3 * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa47850cd) = uRam00007fffa47850e6;
  bRam00007fffa47850c3 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5251c10  |  RVA: 0xae1c10  |  Size: 576 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa5251e46) */

uint64_t FUN_7fffa5251c10(int64_t *param_1,uint64_t param_2,int64_t param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint32_t unaff_EBX;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  uint32_t unaff_R14D;
  
  puVar4 = *(uint64_t **)*param_1;
  puVar1 = (uint64_t *)((int64_t *)*param_1)[1];
  if (puVar1 != puVar4) {
    uVar6 = ~unaff_EBX;
    lVar3 = ((int64_t)puVar1 - (int64_t)puVar4 >> 3) * -0x3333333333333333;
    while( true ) {
      lVar3 = lVar3 + -1;
      uVar2 = *puVar4;
      if (((uVar2 <= param_2) && (param_2 < uVar2 + (uint32_t)puVar4[1])) &&
         (*(int *)((int64_t)puVar4 + 0xc) != 1)) break;
      if (lVar3 == 0) goto LAB_7fffa5251d8c;
      puVar4 = puVar4 + 5;
    }
    if (puVar4[(uint64_t)(puVar4[2] == 0) + 3] != 0) {
      uVar5 = param_3 * -0xf;
      lVar3 = puVar4[(uint64_t)(puVar4[2] == 0) + 3] + (param_2 - uVar2);
      uVar5 = (param_3 * -0xf000 | uVar5 >> 0x34) ^ (param_3 * -0x3c | uVar5 >> 0x3e) ^ uVar5;
      uVar5 = uVar5 << 0x29 | uVar5 >> 0x17;
      uVar2 = lVar3 * -0x7ffff;
      (*(code *)((int64_t)
                 (int)((unaff_EBX & ~unaff_R14D) * -0x3b2c7146 +
                       (uVar6 & unaff_R14D) * -0x3b2c7146 +
                       (unaff_EBX ^ unaff_R14D) * -0x1ff645c4 + (uVar6 ^ unaff_R14D) * -0x274319d +
                       (unaff_EBX & unaff_R14D | ~unaff_R14D & uVar6) * -0x58ae856d ^ 0xa4ddd44a) +
                0x7fffa52e3310))
                (uVar2,((lVar3 * -0x3ffff800000 | uVar2 >> 0x29) ^
                        (lVar3 * -0x3ffff8 | uVar2 >> 0x3d) ^ uVar2) - 0xd6cc1734,uVar5,param_4,
                 0xffffffffc4d82023);
      return uVar5 & 0xffffffff;
    }
  }
LAB_7fffa5251d8c:
  *param_4 = 0xffffffffffffffff;
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5251e54  |  RVA: 0xae1e54  |  Size: 82 bytes
// Callers  : FUN_7fffa54050b0@0xc950b0
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_7fffa5251e54(void)

{
  if (_DAT_7fffa4780ab0 == -2) {
    _DAT_7fffa4780ab0 = (*(code *)&DAT_7ff84ea572c0)(&UNK_7fffa5876638,0x40000000,3,0,3,0,0);
  }
  return _DAT_7fffa4780ab0 != -1;
}


// ============================================================================
// Function : FUN_7fffa5251ea8  |  RVA: 0xae1ea8  |  Size: 95 bytes
// Callers  : FUN_7fffa50c9360@0x959360
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_7fffa5251ea8(uint32_t param_1)

{
  uint32_t *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < _DAT_7fffa4782580)) {
      return *(uint8_t *)(*(int64_t *)
                        (&DAT_7fffa4782180 + ((uint64_t)(int64_t)(int)param_1 >> 6) * 8) + 0x38 +
                      (uint64_t)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = 9;
    FUN_7fffa55c8ce0();
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5251f08  |  RVA: 0xae1f08  |  Size: 1 bytes
// Callers  : FUN_7fffa5465140@0xcf5140
// Callees  : none
// ============================================================================
void FUN_7fffa5251f08(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5251f18  |  RVA: 0xae1f18  |  Size: 46 bytes
// Callers  : none
// Callees  : FUN_7fffa549ab20@0xd2ab20
// ============================================================================
void FUN_7fffa5251f18(void)

{
  uint8_t auStackX_8 [8];
  uint32_t auStackX_10 [2];
  uint32_t auStackX_18 [4];
  
  auStackX_10[0] = 4;
  auStackX_18[0] = 4;
  FUN_7fffa549ab20(auStackX_8,auStackX_18,auStackX_8,auStackX_10);
  return;
}


// ============================================================================
// Function : FUN_7fffa5251f50  |  RVA: 0xae1f50  |  Size: 3672 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t *
FUN_7fffa5251f50(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint8_t bVar7;
  uint16_t uVar8;
  uint8_t uVar9;
  bool bVar10;
  int iVar11;
  uint64_t in_RAX;
  uint64_t *puVar12;
  uint8_t bVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint64_t uVar21;
  int64_t lVar22;
  int64_t lVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int64_t lVar28;
  uint64_t *puVar29;
  uint64_t *in_R10;
  uint64_t uVar30;
  int64_t lVar31;
  int64_t lVar32;
  uint64_t *puVar33;
  uint8_t bVar34;
  int64_t *plVar35;
  int64_t lVar36;
  uint64_t *puVar37;
  char cVar38;
  uint8_t uVar41;
  char cVar43;
  uint8_t uVar44;
  uint8_t auVar39 [16];
  char cVar42;
  char cVar45;
  uint8_t auVar40 [16];
  uint32_t auStack_1b8 [64];
  uint64_t *puStack_b8;
  uint64_t *puStack_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  uint64_t uStack_78;
  char *pcStack_70;
  uint32_t *puStack_68;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  
  puStack_58 = param_1;
  uVar26 = param_5 * 0x68e2c91f5f8eea29 + 0xe27601cb609e8faa;
  uVar24 = (uint32_t)in_RAX;
  uVar17 = param_4 + 0x3b0fc4f5;
  uVar26 = (uVar26 << 0x25 | uVar26 >> 0x1b) - 0x1a0bcdf1;
  uVar26 = uVar26 << 0x35 ^ uVar26;
  uVar17 = (uVar17 << 0x23 | uVar17 >> 0x1d) ^ (uVar17 << 0x39 | uVar17 >> 7) ^ uVar17;
  uVar17 = (uVar17 << 0x32 | uVar17 >> 0xe) ^ (uVar17 << 6 | uVar17 >> 0x3a) ^ uVar17;
  uVar17 = (uVar17 << 0x24 | uVar17 >> 0x1c) ^ (uVar17 << 0xc | uVar17 >> 0x34) ^ uVar17;
  uVar17 = (uVar17 << 0x18 | uVar17 >> 0x28) ^ (uVar17 << 8 | uVar17 >> 0x38) ^ uVar17;
  puStack_48 = (uint64_t *)(uVar26 ^ 0xd932cceb);
  if ((uint64_t)(uVar24 - 0x4cf246) < 0xffffffffafb05764) {
    puStack_48 = (uint64_t *)(uVar26 + 0xd932cceb);
  }
  uVar17 = (uVar17 << 0x10 | uVar17 >> 0x30) ^ (uVar17 << 0x30 | uVar17 >> 0x10) ^ uVar17;
  uVar30 = uVar17 << 0x20 | uVar17 >> 0x20;
  bVar13 = (uint8_t)in_RAX & 0x1f;
  uVar26 = uVar17 + uVar30;
  if ((int64_t)(int)(0x5140d88aU >> bVar13 | 0x5140d88a << 0x20 - bVar13) <=
      (int64_t)(uint64_t)(0xb2176256 - uVar24)) {
    uVar26 = uVar17 ^ uVar30;
  }
  lVar23 = ((uVar26 ^ uVar30) << 0x1c | (uVar26 ^ uVar30) >> 0x24) -
           (uint64_t)(0x65accf63 - uVar24 ^ 0x2798eaf7);
  uVar25 = 4;
  if (*(uint32_t *)(lVar23 + 0x10c) < 4) {
    uVar25 = *(uint32_t *)(lVar23 + 0x10c);
  }
  lVar5 = *(int64_t *)(lVar23 + 8);
  uVar14 = 1 << ((uint8_t)uVar25 & 0x1f);
  uVar17 = (int64_t)in_R10 - lVar5;
  uVar15 = 1 << (*(uint8_t *)(lVar23 + 0x100) & 0x1f);
  uVar19 = (uint32_t)uVar17;
  uVar25 = *(uint32_t *)(lVar23 + 0x1c);
  uVar20 = uVar19 - uVar15;
  if (uVar19 - uVar25 <= uVar15) {
    uVar20 = uVar25;
  }
  lVar31 = *(int64_t *)(lVar23 + 0x10);
  puStack_50 = (uint64_t *)(uint64_t)*(uint32_t *)(lVar23 + 0x18);
  if (*(int *)(lVar23 + 0x28) != 0) {
    uVar20 = uVar25;
  }
  puStack_68 = (uint32_t *)(uint64_t)uVar20;
  lVar22 = *(int64_t *)(lVar23 + 0x38);
  lVar36 = *(int64_t *)(lVar23 + 0x70);
  uVar26 = *(uint64_t *)(lVar23 + 0x60);
  lStack_98 = lVar5;
  lStack_a0 = lVar31;
  cVar38 = (char)*(uint32_t *)(lVar23 + 0x34);
  if (*(int *)(lVar23 + 300) == 0) {
    uVar25 = *(uint32_t *)(lVar23 + 0x2c);
    uVar30 = (uint64_t)uVar25;
    lVar32 = lVar22;
    lVar16 = lVar36;
    if (0x180 < uVar19 - uVar25) {
      if (uVar25 < 0xffffffa0) {
        uVar27 = uVar30 + 0x60;
        do {
          uVar20 = ((uVar24 | 1) * 0x770f04fe ^ 0x466a6d34) + 0xf07efd4e;
          iVar11 = 0x25977273 - (uVar24 ^ 0x9a333b0d);
          bVar7 = (uint8_t)iVar11 & 0x1f;
          uVar21 = (uint64_t)((uint32_t)uVar30 & 7);
          uVar25 = *(uint32_t *)(lVar23 + 0x40 + uVar21 * 4);
          *(int *)(lVar23 + 0x40 + uVar21 * 4) =
               (int)((*(int64_t *)(lVar5 + 8 + uVar30) * -0x30e4432340650000 ^
                     *(uint64_t *)(lVar23 + 0x60)) >> (0x38U - cVar38 & 0x3f));
          uVar21 = (uint64_t)(uVar25 >> 4 & 0xfffffff0);
          bVar13 = *(uint8_t *)(lVar22 + uVar21);
          bVar34 = bVar13 - 1 & 0xf;
          if (~((uVar24 - iVar11) + 0xccaf46d0) <= (uVar20 << bVar7 | uVar20 >> 0x20 - bVar7)) {
            bVar34 = bVar13 + 0x1e;
          }
          lVar32 = 0xf;
          if ((bVar13 & 0xf) != 1) {
            lVar32 = 0;
          }
          lVar32 = lVar32 + (uint64_t)bVar34;
          *(char *)(lVar22 + uVar21) = (char)lVar32;
          *(char *)(lVar22 + uVar21 + lVar32) = (char)uVar25;
          *(uint32_t *)(lVar36 + uVar21 * 4 + lVar32 * 4) = (uint32_t)uVar30;
          uVar30 = uVar30 + 1;
        } while (uVar27 != uVar30);
        lVar32 = *(int64_t *)(lVar23 + 0x38);
        lVar16 = *(int64_t *)(lVar23 + 0x70);
      }
      uVar25 = uVar19 - 0x20;
      uVar30 = (uint64_t)uVar25;
      plVar35 = (int64_t *)(lVar5 + uVar30);
      uVar15 = ((int)(int64_t *)((int64_t)in_R10 + 1U) - (int)plVar35) + 1;
      uVar20 = 8;
      if (uVar15 < 8) {
        uVar20 = uVar15;
      }
      uVar15 = 0;
      if (plVar35 <= (int64_t *)((int64_t)in_R10 + 1U)) {
        uVar15 = uVar20;
      }
      uVar20 = (uVar15 + uVar19) - 0x20;
      if (uVar25 < uVar20) {
        uVar27 = *(uint64_t *)(lVar23 + 0x60);
        bVar13 = 0x38 - (char)*(uint32_t *)(lVar23 + 0x34);
        if ((uVar15 & 1) != (~(uVar24 + 0xde5d) & 0xffff)) {
          *(int *)(lVar23 + 0x40 + (uint64_t)(uVar25 & 7) * 4) =
               (int)((*plVar35 * -0x30e4432340650000 ^ uVar27) >> (bVar13 & 0x3f));
          uVar30 = uVar30 + 1;
        }
        if (uVar15 != 1) {
          do {
            uVar15 = (uint32_t)uVar30;
            *(int *)(lVar23 + 0x40 + (uint64_t)(uVar15 & 7) * 4) =
                 (int)((*(int64_t *)(lVar5 + uVar30) * -0x30e4432340650000 ^ uVar27) >>
                      (bVar13 & 0x3f));
            plVar35 = (int64_t *)(lVar5 + 1 + uVar30);
            uVar30 = uVar30 + 2;
            *(int *)(lVar23 + 0x40 + (uint64_t)(uVar15 + 1 & 7) * 4) =
                 (int)((*plVar35 * -0x30e4432340650000 ^ uVar27) >> (bVar13 & 0x3f));
          } while (uVar20 != (uint32_t)uVar30);
        }
      }
    }
    if (uVar25 < uVar19) {
      lVar6 = *(int64_t *)(lVar23 + 8);
      uVar4 = *(uint32_t *)(lVar23 + 0x34);
      uVar30 = (uint64_t)uVar25;
      do {
        uVar27 = (uint64_t)((uint32_t)uVar30 & 7);
        bVar10 = uVar30 + 1 == (uVar17 & 0xffffffff);
        if ((uint64_t)(int64_t)(int)((uVar24 | 1) * 0x28bda81) <
            (uint64_t)((-0x61888623 - uVar24) * 0x4a40984b)) {
          bVar10 = uVar30 < (uVar17 & 0xffffffff);
        }
        uVar25 = *(uint32_t *)(lVar23 + 0x40 + uVar27 * 4);
        *(int *)(lVar23 + 0x40 + uVar27 * 4) =
             (int)((*(int64_t *)(lVar6 + 8 + uVar30) * -0x30e4432340650000 ^
                   *(uint64_t *)(lVar23 + 0x60)) >> (0x38U - (char)uVar4 & 0x3f));
        uVar27 = (uint64_t)(uVar25 >> 4 & 0xfffffff0);
        lVar28 = 0xf;
        if ((*(uint8_t *)(lVar32 + uVar27) & 0xf) != 1) {
          lVar28 = 0;
        }
        lVar28 = (uint64_t)(*(uint8_t *)(lVar32 + uVar27) - 1 & 0xf) + lVar28;
        *(char *)(lVar32 + uVar27) = (char)lVar28;
        *(char *)(lVar32 + uVar27 + lVar28) = (char)uVar25;
        *(uint32_t *)(lVar16 + uVar27 * 4 + lVar28 * 4) = (uint32_t)uVar30;
        uVar30 = uVar30 + 1;
      } while (!bVar10);
    }
    *(uint32_t *)(lVar23 + 0x2c) = uVar19;
    puStack_b8 = (uint64_t *)(uint64_t)*(uint32_t *)(lVar23 + 0x40 + (uint64_t)(uVar19 & 7) * 4);
    *(int *)(lVar23 + 0x40 + (uint64_t)(uVar19 & 7) * 4) =
         (int)((uVar26 ^ *(int64_t *)(lVar5 + 8 + (uVar17 & 0xffffffff)) * -0x30e4432340650000) >>
              (0x38U - cVar38 & 0x3f));
  }
  else {
    uVar17 = *in_R10;
    *(uint32_t *)(lVar23 + 0x2c) = uVar19;
    puStack_b8 = (uint64_t *)((uVar17 * -0x30e4432340650000 ^ uVar26) >> (0x38U - cVar38 & 0x3f));
  }
  uVar17 = (uint64_t)((uint32_t)((uint64_t)puStack_b8 >> 4) & 0xffffff0);
  *(int *)(lVar23 + 0x68) = *(int *)(lVar23 + 0x68) + (int)puStack_b8;
  lVar36 = lVar36 + uVar17 * 4;
  bVar13 = *(uint8_t *)(lVar22 + uVar17);
  pcVar3 = (char *)(lVar22 + uVar17);
  uVar9 = (uint8_t)((uint64_t)puStack_b8 >> 0x10);
  uVar44 = (uint8_t)((uint64_t)puStack_b8 >> 0x18);
  uVar41 = (uint8_t)((uint64_t)puStack_b8 >> 8);
  auVar39._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar44,uVar44),uVar9),CONCAT14(uVar9,(int)puStack_b8)) >>
            0x20);
  auVar39[3] = uVar41;
  auVar39[2] = uVar41;
  auVar39[0] = SUB81(puStack_b8,0);
  auVar39[1] = auVar39[0];
  auVar39._8_8_ = 0;
  auVar39 = pshuflw(auVar39,auVar39,0);
  cVar38 = auVar39[0];
  auVar40[0] = -(cVar38 == *pcVar3);
  cVar42 = auVar39[1];
  auVar40[1] = -(cVar42 == pcVar3[1]);
  cVar43 = auVar39[2];
  auVar40[2] = -(cVar43 == pcVar3[2]);
  cVar45 = auVar39[3];
  auVar40[3] = -(cVar45 == pcVar3[3]);
  auVar40[4] = -(cVar38 == pcVar3[4]);
  auVar40[5] = -(cVar42 == pcVar3[5]);
  auVar40[6] = -(cVar43 == pcVar3[6]);
  auVar40[7] = -(cVar45 == pcVar3[7]);
  auVar40[8] = -(cVar38 == pcVar3[8]);
  auVar40[9] = -(cVar42 == pcVar3[9]);
  auVar40[10] = -(cVar43 == pcVar3[10]);
  auVar40[0xb] = -(cVar45 == pcVar3[0xb]);
  auVar40[0xc] = -(cVar38 == pcVar3[0xc]);
  auVar40[0xd] = -(cVar42 == pcVar3[0xd]);
  auVar40[0xe] = -(cVar43 == pcVar3[0xe]);
  auVar40[0xf] = -(cVar45 == pcVar3[0xf]);
  uVar8 = (uint16_t)(SUB161(auVar40 >> 7,0) & 1) | (uint16_t)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
          (uint16_t)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar40[0xf] >> 7) << 0xf;
  uVar25 = (uint32_t)bVar13;
  puStack_b0 = in_R10;
  uStack_78 = in_RAX;
  if (uVar8 == 0) {
    lVar32 = 0;
  }
  else {
    uVar26 = (uint64_t)(uint16_t)(uVar8 >> (bVar13 & 0xf) | uVar8 << 0x10 - (bVar13 & 0xf));
    lVar32 = 0;
    do {
      iVar11 = 0;
      for (uVar30 = uVar26; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x8000000000000000) {
        iVar11 = iVar11 + 1;
      }
      uVar20 = iVar11 + uVar25 & 0xf;
      if (uVar20 != 0) {
        uVar20 = *(uint32_t *)(lVar36 + (uint64_t)uVar20 * 4);
        if (uVar20 < (uint32_t)puStack_68) break;
        uVar14 = uVar14 - 1;
        auStack_1b8[lVar32] = uVar20;
        lVar32 = lVar32 + 1;
      }
      uVar26 = uVar26 & uVar26 - 1;
    } while (uVar26 != 0 && uVar14 != ((0x3683 - uVar24 ^ 0x14e1) & 0xffff));
  }
  uVar20 = uVar25 ^ 0xf;
  if (0x792ea7ae < ((uVar24 ^ 0x5eb8f776) << 0xb | (uVar24 ^ 0x5eb8f776) >> 0x15)) {
    uVar20 = uVar25 & 0xf;
  }
  lVar16 = 0;
  if (uVar20 == 1) {
    lVar16 = 0xf;
  }
  lVar16 = (uint64_t)(bVar13 - 1 & 0xf) + lVar16;
  *(uint8_t *)(lVar22 + uVar17) = (char)lVar16;
  ((uint8_t *)(lVar22 + uVar17))[lVar16] = (char)puStack_b8;
  uVar24 = *(uint32_t *)(lVar23 + 0x2c);
  puVar12 = (uint64_t *)(uint64_t)uVar24;
  *(uint32_t *)(lVar23 + 0x2c) = uVar24 + 1;
  *(uint32_t *)(lVar36 + lVar16 * 4) = uVar24;
  if (lVar32 != 0) {
    puStack_80 = (uint64_t *)((int64_t)puStack_50 + lVar5);
    pcStack_70 = (char *)(lVar31 + (int64_t)puStack_50);
    puVar1 = (uint64_t *)((int64_t)puStack_58 - 7);
    puVar2 = (uint64_t *)((int64_t)in_R10 + 4);
    puStack_90 = (uint64_t *)((int64_t)puStack_58 - 1);
    puStack_b8 = in_R10 + 1;
    lStack_a8 = lVar5 + 8;
    puStack_68 = (uint32_t *)((int64_t)in_R10 + 0xc);
    lVar23 = lVar31 + 0xc;
    puStack_60 = (uint64_t *)((int64_t)puStack_50 + lVar5 + 8);
    uVar17 = 3;
    lVar36 = 0;
    puVar12 = puStack_50;
    do {
      uVar24 = auStack_1b8[lVar36];
      uVar26 = (uint64_t)uVar24;
      if (uVar24 < (uint32_t)puStack_50) {
        if (*(uint32_t *)(lVar31 + uVar26) != (uint32_t)*in_R10) goto LAB_7fffa5252838;
        puVar33 = (uint64_t *)(lVar31 + uVar26 + 4);
        puVar37 = (uint64_t *)(((int64_t)pcStack_70 - (int64_t)puVar33) + (int64_t)puVar2);
        if (puStack_58 <= puVar37) {
          puVar37 = puStack_58;
        }
        puVar18 = puVar33;
        puVar29 = puVar2;
        if (puVar2 < (uint64_t *)((int64_t)puVar37 - 7U)) {
          if (*puVar33 == *puVar2) {
            lVar31 = lVar23 + uVar26;
            lVar22 = 0;
            do {
              puVar29 = (uint64_t *)((int64_t)puStack_68 + lVar22);
              if ((uint64_t *)((int64_t)puVar37 - 7U) <= puVar29) {
                puVar18 = (uint64_t *)(lVar31 + lVar22);
                in_RAX = uStack_78;
                goto LAB_7fffa5252a4c;
              }
              puVar12 = (uint64_t *)0x0;
              uVar26 = *(uint64_t *)(lVar31 + lVar22);
              lVar22 = lVar22 + 8;
            } while (uVar26 == *puVar29);
            uVar25 = 0;
            for (uVar26 = *puVar29 ^ uVar26; (uVar26 & 1) == 0;
                uVar26 = uVar26 >> 1 | 0x8000000000000000) {
              uVar25 = uVar25 + 1;
            }
            uVar26 = (uint64_t)(uVar25 >> 3) + lVar22;
            in_RAX = uStack_78;
          }
          else {
            puVar12 = (uint64_t *)0x0;
            uVar25 = 0;
            for (uVar26 = *puVar33 ^ *puVar2; (uVar26 & 1) == 0;
                uVar26 = uVar26 >> 1 | 0x8000000000000000) {
              uVar25 = uVar25 + 1;
            }
            uVar26 = (uint64_t)(uVar25 >> 3);
          }
        }
        else {
LAB_7fffa5252a4c:
          if ((puVar29 < (uint64_t *)((int64_t)puVar37 - 3U)) &&
             ((uint32_t)*puVar18 == (uint32_t)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
          }
          puVar12 = (uint64_t *)((int64_t)puVar37 - 1);
          if ((puVar29 < puVar12) &&
             (puVar12 = (uint64_t *)(uint64_t)(uint16_t)*puVar18,
             (uint16_t)*puVar18 == (uint16_t)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
          }
          if (puVar29 < puVar37) {
            iVar11 = 0x1ecc0915 - (uint32_t)in_RAX;
            bVar10 = ((char)*puVar18 != (char)*puVar29) !=
                     (int)(iVar11 * -0x20000000 | (uint32_t)(iVar11 * 0x5a8e6127) >> 3) <
                     (int)(((uint32_t)in_RAX | 1) * 0x7d7b3d54 + -0x6bc6edcf);
            puVar12 = (uint64_t *)(uint64_t)bVar10;
            puVar29 = (uint64_t *)((int64_t)puVar29 + (uint64_t)bVar10);
          }
          uVar26 = (int64_t)puVar29 - (int64_t)puVar2;
        }
        if ((char *)((int64_t)puVar33 + uVar26) == pcStack_70) {
          puStack_88 = (uint64_t *)((int64_t)puVar2 + uVar26);
          puVar33 = puStack_80;
          puVar37 = puStack_88;
          if (puStack_88 < puVar1) {
            if (*puStack_80 == *puStack_88) {
              puVar37 = (uint64_t *)((int64_t)puStack_68 + uVar26);
              lVar31 = (int64_t)puStack_68 + uVar26;
              puVar33 = puStack_60;
              if (puVar37 < puVar1) {
LAB_7fffa5252bf0:
                uVar30 = *puVar33;
                uVar27 = *puVar37;
                bVar10 = uVar30 != uVar27 && (int64_t)uVar27 <= (int64_t)uVar30;
                if ((uint64_t)(((uint32_t)in_RAX ^ 0x713a02e5) + 0x6bfb49e7) < 0xffffffff9f530e01) {
                  bVar10 = uVar30 == uVar27;
                }
                if (bVar10) goto code_r0x7fffa5252c39;
                uVar25 = 0;
                for (uVar30 = uVar30 ^ uVar27; (uVar30 & 1) == 0;
                    uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                  uVar25 = uVar25 + 1;
                }
                puVar12 = (uint64_t *)((uint64_t)(uVar25 >> 3) + lVar31);
                uVar30 = (int64_t)puVar12 - (int64_t)puStack_88;
                in_RAX = uStack_78;
                goto LAB_7fffa5252d19;
              }
              goto LAB_7fffa5252c62;
            }
            uVar25 = 0;
            for (uVar30 = *puStack_80 ^ *puStack_88; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar25 = uVar25 + 1;
            }
            uVar30 = (uint64_t)(uVar25 >> 3);
          }
          else {
LAB_7fffa5252c62:
            if ((puVar37 < (uint64_t *)((int64_t)puStack_58 - 3U)) &&
               ((uint32_t)*puVar33 == (uint32_t)*puVar37)) {
              puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            }
            if ((puVar37 < puStack_90) && ((uint16_t)*puVar33 == (uint16_t)*puVar37)) {
              puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
            }
            if (puVar37 < puStack_58) {
              puVar37 = (uint64_t *)
                        ((int64_t)puVar37 + (uint64_t)((char)*puVar33 == (char)*puVar37));
            }
            uVar30 = (int64_t)puVar37 - (int64_t)puStack_88;
            puVar12 = (uint64_t *)0x0;
          }
LAB_7fffa5252d19:
          uVar26 = uVar26 + uVar30;
        }
        uVar26 = uVar26 + 4;
        in_R10 = puStack_b0;
LAB_7fffa5252d20:
        lVar31 = lStack_a0;
        if (uVar17 < uVar26) {
LAB_7fffa5252d31:
          uVar17 = uVar26;
          uVar20 = (uint32_t)in_RAX | 1;
          puVar12 = (uint64_t *)(uint64_t)uVar20;
          bVar13 = (uint8_t)in_RAX & 0x1f;
          uVar25 = uVar24 | uVar19 + 3;
          if ((int64_t)(int)(uVar20 * -0x68000000 | uVar20 * -0x20e17934 >> 7) <
              (int64_t)(uint64_t)(-0x733f57a1 << bVar13 | 0x8cc0a85fU >> 0x20 - bVar13)) {
            uVar25 = (uVar19 + 3) - uVar24;
          }
          *puStack_48 = (uint64_t)uVar25;
          lVar31 = lStack_a0;
          if ((uint64_t *)((int64_t)in_R10 + uVar17) == puStack_58) {
            return puVar12;
          }
        }
      }
      else {
        puVar37 = (uint64_t *)(lStack_98 + uVar26);
        uVar20 = *(uint32_t *)((uVar17 - 3) + (int64_t)puVar37);
        uVar25 = *(uint32_t *)((int64_t)in_R10 + (uVar17 - 3));
        puVar12 = (uint64_t *)(uint64_t)(uVar20 == uVar25);
        uVar14 = 0xbd5475e2 - (int)in_RAX;
        bVar10 = uVar25 <= uVar20;
        if ((int)in_RAX + 0x65b8f432 < (int)((uVar14 * 0x10000000 | uVar14 >> 4) + 0xcc0e7f05)) {
          bVar10 = uVar20 == uVar25;
        }
        if (bVar10) {
          puVar33 = in_R10;
          if (in_R10 < puVar1) {
            if (*puVar37 == *in_R10) {
              lVar31 = lVar5 + 8 + uVar26;
              lVar22 = 0;
              do {
                puVar33 = (uint64_t *)((int64_t)puStack_b8 + lVar22);
                if (puVar1 <= puVar33) {
                  puVar37 = (uint64_t *)(lVar31 + lVar22);
                  in_R10 = puStack_b0;
                  goto joined_r0x7fffa5252b57;
                }
                uVar26 = *(uint64_t *)(lVar31 + lVar22);
                lVar22 = lVar22 + 8;
              } while (uVar26 == *puVar33);
              uVar25 = 0;
              for (uVar26 = *puVar33 ^ uVar26; (uVar26 & 1) == 0;
                  uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                uVar25 = uVar25 + 1;
              }
              uVar26 = (uint64_t)(uVar25 >> 3) + lVar22;
              in_R10 = puStack_b0;
            }
            else {
              uVar25 = 0;
              for (uVar26 = *in_R10 ^ *puVar37; (uVar26 & 1) == 0;
                  uVar26 = uVar26 >> 1 | 0x8000000000000000) {
                uVar25 = uVar25 + 1;
              }
              uVar26 = (uint64_t)(uVar25 >> 3);
            }
            goto LAB_7fffa5252d20;
          }
joined_r0x7fffa5252b57:
          if ((puVar33 < (uint64_t *)((int64_t)puStack_58 - 3U)) &&
             (puVar12 = (uint64_t *)(uint64_t)(uint32_t)*puVar37, (uint32_t)*puVar37 == (uint32_t)*puVar33)) {
            puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
          }
          if ((puVar33 < puStack_90) &&
             (puVar12 = (uint64_t *)(uint64_t)(uint16_t)*puVar37,
             (uint16_t)*puVar37 == (uint16_t)*puVar33)) {
            puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
            puVar12 = (uint64_t *)0x0;
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
          }
          if (puVar33 < puStack_58) {
            puVar12 = (uint64_t *)(uint64_t)((char)*puVar37 == (char)*puVar33);
            puVar33 = (uint64_t *)((int64_t)puVar33 + (int64_t)puVar12);
          }
          uVar26 = (int64_t)puVar33 - (int64_t)in_R10;
          lVar31 = lStack_a0;
          if ((uint64_t)((int64_t)puVar33 - (int64_t)in_R10) <= uVar17) goto LAB_7fffa5252838;
          goto LAB_7fffa5252d31;
        }
        lVar31 = lStack_a0;
      }
LAB_7fffa5252838:
      lVar36 = lVar36 + 1;
    } while (lVar36 != lVar32);
  }
  return puVar12;
code_r0x7fffa5252c39:
  puVar37 = puVar37 + 1;
  lVar31 = lVar31 + 8;
  puVar33 = puVar33 + 1;
  in_RAX = uStack_78;
  if (puVar1 <= puVar37) goto LAB_7fffa5252c62;
  goto LAB_7fffa5252bf0;
}


// ============================================================================
// Function : FUN_7fffa5252dc0  |  RVA: 0xae2dc0  |  Size: 2344 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5252dc0(void) {
    /* +0xae2dc0 */ __asm { PUSH RBX }
    /* +0xae2dc1 */ __asm { PUSH R12 }
    /* +0xae2dc3 */ __asm { PUSH R15 }
    /* +0xae2dc5 */ __asm { PUSH R13 }
    /* +0xae2dc7 */ __asm { SUB RSP,0x48 }
    /* +0xae2dcb */ __asm { RDTSC }
    /* +0xae2dcd */ __asm { SHL RDX,0x20 }
    /* +0xae2dd1 */ __asm { OR RDX,RAX }
    /* +0xae2dd4 */ __asm { MOV R8,R9 }
    /* +0xae2dd7 */ __asm { SHR R8,0x31 }
    /* +0xae2ddb */ __asm { XOR R8,R9 }
    /* +0xae2dde */ __asm { MOV RCX,R8 }
    /* +0xae2de1 */ __asm { SHL RCX,0xd }
    /* +0xae2de5 */ __asm { LEA R11,[R8 + 0xd] }
    /* +0xae2de9 */ __asm { MOV R9W,0x9c84 }
    /* +0xae2dee */ __asm { MOV EAX,0x5107db4e }
    /* +0xae2df3 */ __asm { ADD EAX,R10D }
    /* +0xae2df6 */ __asm { ADD R9D,R10D }
    /* +0xae2df9 */ __asm { IMUL R9D,R9D,-0x2b7b }
    /* +0xae2e00 */ __asm { ROL R9W,0x7 }
    /* +0xae2e05 */ __asm { IMUL EAX,EAX,-0x2b3f8f39 }
    /* +0xae2e0b */ __asm { MOV R15D,0x15dcee3d }
    /* +0xae2e11 */ __asm { ADD R15D,R10D }
    /* +0xae2e14 */ __asm { ADD R15D,0x23ca1d41 }
    /* +0xae2e1b */ __asm { ROL R15D,0x1d }
    /* +0xae2e1f */ __asm { CMP RAX,R15 }
    /* +0xae2e22 */ __asm { CMOVA R11,RCX }
    /* +0xae2e26 */ __asm { XOR R11,R8 }
    /* +0xae2e29 */ __asm { MOV RCX,R11 }
    /* +0xae2e2c */ __asm { SHL RCX,0x1a }
    /* +0xae2e30 */ __asm { MOVZX R9D,R9W }
    /* +0xae2e34 */ __asm { MOV R8,R11 }
    /* +0xae2e37 */ __asm { SHL R8,0x34 }
    /* +0xae2e3b */ __asm { XOR R8,RCX }
    /* +0xae2e3e */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0xae2e48 */ __asm { IMUL RCX,RDX }
    /* +0xae2e4c */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xae2e56 */ __asm { ADD RAX,RCX }
    /* +0xae2e59 */ __asm { MOV RCX,RAX }
    /* +0xae2e5c */ __asm { SHR RCX,0x3b }
    /* +0xae2e60 */ __asm { MOV RDX,RAX }
    /* +0xae2e63 */ __asm { SHR RDX,0x2d }
    /* +0xae2e67 */ __asm { SHR RAX,0x1b }
    /* +0xae2e6b */ __asm { XOR EAX,EDX }
    /* +0xae2e6d */ __asm { ROR EAX,CL }
    /* +0xae2e6f */ __asm { AND EAX,0x3 }
    /* +0xae2e72 */ __asm { XOR R8,R11 }
    /* +0xae2e75 */ __asm { CMP EAX,R9D }
    /* +0xae2e78 */ __asm { JC 0x7fffa5252f05 }
    /* +0xae2e7e */ __asm { CMP EAX,0x3 }
    /* +0xae2e81 */ __asm { JZ 0x7fffa5252f6a }
    /* +0xae2e87 */ __asm { MOV R11,0x4a6546a15a38749e }
    /* +0xae2e91 */ __asm { IMUL R11,R11,-0x13d435e9 }
    /* +0xae2e98 */ __asm { MOV ECX,R10D }
    /* +0xae2e9b */ __asm { ROL R11,CL }
    /* +0xae2e9e */ __asm { LEA RDX,[0x7fffa47ba9cb] }
    /* +0xae2ea5 */ __asm { MOV R9,RDX }
    /* +0xae2ea8 */ __asm { XOR R9,R11 }
    /* +0xae2eab */ __asm { CMP R9,-0x1 }
    /* +0xae2eaf */ __asm { JNZ 0x7fffa5252eb7 }
    /* +0xae2eb1 */ __asm { HLT }
    /* +0xae2eb7 */ __asm { MOV CX,0xa884 }
    /* +0xae2ebb */ __asm { ADD ECX,R10D }
    /* +0xae2ebe */ __asm { MOV R11D,0x94c0be }
    /* +0xae2ec4 */ __asm { XOR R11D,0xa29fde13 }
    /* +0xae2ecb */ __asm { MOV R9W,0xe3d }
    /* +0xae2ed0 */ __asm { IMUL R12D,R9D,-0x57db }
    /* +0xae2ed7 */ __asm { ROL R12W,0x7 }
    /* +0xae2edc */ __asm { ROL CX,0x2 }
    /* +0xae2ee0 */ __asm { ROL R11D,0xe }
    /* +0xae2ee4 */ __asm { MOVZX R9D,CX }
    /* +0xae2ee8 */ __asm { XOR R11D,R10D }
    /* +0xae2eeb */ __asm { MOVSXD R11,R11D }
    /* +0xae2eee */ __asm { MOV qword ptr [RSP + 0x30],RAX }
    /* +0xae2ef3 */ __asm { MOV EAX,dword ptr [RDX + 0x25bd] }
    /* +0xae2ef9 */ __asm { ADD R12D,R10D }
    /* +0xae2efc */ __asm { MOVZX EDX,R12W }
    /* +0xae2f00 */ __asm { JMP 0x7fffa525366e }
    /* +0xae2f05 */ __asm { CMP EAX,0x1 }
    /* +0xae2f08 */ __asm { JZ 0x7fffa5253065 }
    /* +0xae2f0e */ __asm { LEA R9,[0x7fffa47bf86a] }
    /* +0xae2f15 */ __asm { MOV R11,-0x36bee93a732506ba }
    /* +0xae2f1f */ __asm { CMP R9,R11 }
    /* +0xae2f22 */ __asm { JZ 0x7fffa525342d }
    /* +0xae2f28 */ __asm { MOV DX,0x577d }
    /* +0xae2f2c */ __asm { SUB EDX,R10D }
    /* +0xae2f2f */ __asm { MOV CX,0x906b }
    /* +0xae2f33 */ __asm { XOR ECX,0xfffff8ee }
    /* +0xae2f39 */ __asm { ADD ECX,R10D }
    /* +0xae2f3c */ __asm { MOV R10D,0x626dc5a2 }
    /* +0xae2f42 */ __asm { MOV R11D,0x626dc5a0 }
    /* +0xae2f48 */ __asm { SUB R11D,R10D }
    /* +0xae2f4b */ __asm { MOV qword ptr [RSP + 0x30],R10 }
    /* +0xae2f50 */ __asm { MOV EAX,dword ptr [R9 + -0x33ca] }
    /* +0xae2f57 */ __asm { MOVZX R9D,CX }
    /* +0xae2f5b */ __asm { MOVSXD R10,R11D }
    /* +0xae2f5e */ __asm { ROL DX,0x2 }
    /* +0xae2f62 */ __asm { MOVZX EDX,DX }
    /* +0xae2f65 */ __asm { JMP 0x7fffa5253671 }
    /* +0xae2f6a */ __asm { LEA R9,[0x7fffa47b4c6e] }
    /* +0xae2f71 */ __asm { MOV RDX,R9 }
    /* +0xae2f74 */ __asm { ROL RDX,0x6 }
    /* +0xae2f78 */ __asm { ADD RDX,-0x7d5de978 }
    /* +0xae2f7f */ __asm { MOV R11,-0x7fa68ce61c543d1b }
    /* +0xae2f89 */ __asm { CMP RDX,R11 }
    /* +0xae2f8c */ __asm { JNZ 0x7fffa5252f93 }
    /* +0xae2f8e */ __asm { AND ESP,dword ptr [RDX] }
    /* +0xae2f90 */ __asm { CMC }
    /* +0xae2f91 */ __asm { MOV BL,0xf4 }
    /* +0xae2f93 */ __asm { MOV AX,0x3632 }
    /* +0xae2f97 */ __asm { LEA EDX,[R10 + RAX*0x1] }
    /* +0xae2f9b */ __asm { ROL DX,0xa }
    /* +0xae2f9f */ __asm { MOVZX EAX,DX }
    /* +0xae2fa2 */ __asm { XOR RAX,0xc1e4 }
    /* +0xae2fa8 */ __asm { MOV RDX,R9 }
    /* +0xae2fab */ __asm { ADD RDX,RAX }
    /* +0xae2fae */ __asm { MOVZX R9D,uint8_t ptr [R9 + RAX*0x1 + 0x9] }
    /* +0xae2fb4 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + 0xf] }
    /* +0xae2fba */ __asm { NOT AL }
    /* +0xae2fbc */ __asm { ROL AL,0x5 }
    /* +0xae2fbf */ __asm { MOV uint8_t ptr [RSP + 0x30],AL }
    /* +0xae2fc3 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + 0x10] }
    /* +0xae2fc9 */ __asm { NOT AL }
    /* +0xae2fcb */ __asm { ROL AL,0x5 }
    /* +0xae2fce */ __asm { MOV uint8_t ptr [RSP + 0x31],AL }
    /* +0xae2fd2 */ __asm { MOVZX EAX,uint8_t ptr [RDX + R9*0x4 + 0x11] }
    /* +0xae2fd8 */ __asm { NOT AL }
    /* +0xae2fda */ __asm { ROL AL,0x5 }
    /* +0xae2fdd */ __asm { MOV uint8_t ptr [RSP + 0x32],AL }
    /* +0xae2fe1 */ __asm { MOVZX R9D,uint8_t ptr [RDX + R9*0x4 + 0x12] }
    /* +0xae2fe7 */ __asm { NOT R9B }
    /* +0xae2fea */ __asm { ROL R9B,0x5 }
    /* +0xae2fee */ __asm { MOV uint8_t ptr [RSP + 0x33],R9B }
    /* +0xae2ff3 */ __asm { MOV EDX,0x9102c3cc }
    /* +0xae2ff8 */ __asm { XOR EDX,dword ptr [RSP + 0x30] }
    /* +0xae2ffc */ __asm { BT EDX,EDX }
    /* +0xae2fff */ __asm { JNC 0x7fffa52530fc }
    /* +0xae3005 */ __asm { LEA R9,[0x7fffa47bbc8b] }
    /* +0xae300c */ __asm { MOV R11,-0x667e6ab052240293 }
    /* +0xae3016 */ __asm { CMP R9,R11 }
    /* +0xae3019 */ __asm { JZ 0x7fffa52536a3 }
    /* +0xae301f */ __asm { MOV qword ptr [RSP + 0x30],RDX }
    /* +0xae3024 */ __asm { MOV DX,0x9774 }
    /* +0xae3028 */ __asm { MOV CX,0xa87f }
    /* +0xae302c */ __asm { XOR ECX,0x71aa }
    /* +0xae3032 */ __asm { NOT EDX }
    /* +0xae3034 */ __asm { ADD EDX,R10D }
    /* +0xae3037 */ __asm { OR R10D,0x1 }
    /* +0xae303b */ __asm { IMUL R10D,ECX }
    /* +0xae303f */ __asm { MOV EAX,dword ptr [R9 + 0x12fd] }
    /* +0xae3046 */ __asm { MOV ECX,0x7c928f45 }
    /* +0xae304b */ __asm { ADD ECX,0x836d70db }
    /* +0xae3051 */ __asm { ROL ECX,0x1b }
    /* +0xae3054 */ __asm { MOVZX R9D,R10W }
    /* +0xae3058 */ __asm { MOVZX EDX,DX }
    /* +0xae305b */ __asm { NOT ECX }
    /* +0xae305d */ __asm { MOVSXD R10,ECX }
    /* +0xae3060 */ __asm { JMP 0x7fffa5253671 }
    /* +0xae3065 */ __asm { MOV R9D,0x451ce5fa }
    /* +0xae306b */ __asm { MOV R11,0x26c78dc64d7d7d67 }
    /* +0xae3075 */ __asm { CMP R9,R11 }
    /* +0xae3078 */ __asm { JZ 0x7fffa5253435 }
    /* +0xae307e */ __asm { TEST uint8_t ptr [R9 + 0x3ae11c46],0x1 }
    /* +0xae3086 */ __asm { JNZ 0x7fffa525345d }
    /* +0xae308c */ __asm { LEA RAX,[0x7fffa47bb50e] }
    /* +0xae3093 */ __asm { MOV R11,-0x462c8432d811404a }
    /* +0xae309d */ __asm { CMP RAX,R11 }
    /* +0xae30a0 */ __asm { NOP }
    /* +0xae30a1 */ __asm { NOP }
    /* +0xae30a2 */ __asm { NOP }
    /* +0xae30a3 */ __asm { NOP }
    /* +0xae30a4 */ __asm { NOP }
    /* +0xae30a5 */ __asm { NOP }
    /* +0xae30a6 */ __asm { NOP }
    /* +0xae30a7 */ __asm { NOP }
    /* +0xae30a8 */ __asm { NOP }
    /* +0xae30a9 */ __asm { NOP }
    /* +0xae30aa */ __asm { NOP }
    /* +0xae30ab */ __asm { NOP }
    /* +0xae30ac */ __asm { NOP }
    /* +0xae30ad */ __asm { NOP }
    /* +0xae30ae */ __asm { NOP }
    /* +0xae30af */ __asm { MOV R11W,0x6882 }
    /* +0xae30b4 */ __asm { MOV EDX,R10D }
    /* +0xae30b7 */ __asm { OR EDX,0x1 }
    /* +0xae30ba */ __asm { MOV qword ptr [RSP + 0x30],R9 }
    /* +0xae30bf */ __asm { MOV R12W,0xf001 }
    /* +0xae30c4 */ __asm { ADD R11D,R10D }
    /* +0xae30c7 */ __asm { NOT R11D }
    /* +0xae30ca */ __asm { MOV R9W,0x7729 }
    /* +0xae30cf */ __asm { ADD R9D,0x7daa }
    /* +0xae30d6 */ __asm { IMUL R9D,EDX }
    /* +0xae30da */ __asm { ADD R12D,-0x2 }
    /* +0xae30de */ __asm { MOV ECX,R10D }
    /* +0xae30e1 */ __asm { ROR R12W,CL }
    /* +0xae30e5 */ __asm { MOVZX EDX,R9W }
    /* +0xae30e9 */ __asm { MOVZX R9D,R11W }
    /* +0xae30ed */ __asm { MOVSX R10,R12W }
    /* +0xae30f1 */ __asm { MOV EAX,dword ptr [RAX + 0xf92] }
    /* +0xae30f7 */ __asm { JMP 0x7fffa5253671 }
    /* +0xae30fc */ __asm { RDTSC }
    /* +0xae30fe */ __asm { SHL RDX,0x20 }
    /* +0xae3102 */ __asm { OR RDX,RAX }
    /* +0xae3105 */ __asm { MOV R11,-0x5b596a0ee0e87373 }
    /* +0xae310f */ __asm { IMUL R11,RDX }
    /* +0xae3113 */ __asm { MOV RAX,-0x1c505674351fe7c6 }
    /* +0xae311d */ __asm { MOV DX,0xb379 }
    /* +0xae3121 */ __asm { MOV R12D,R10D }
    /* +0xae3124 */ __asm { OR R12D,0x1 }
    /* +0xae3128 */ __asm { IMUL R12D,EDX }
    /* +0xae312c */ __asm { ROL R12W,0x5 }
    /* +0xae3131 */ __asm { ADD RAX,R11 }
    /* +0xae3134 */ __asm { MOV RCX,RAX }
    /* +0xae3137 */ __asm { SHR RCX,0x3b }
    /* +0xae313b */ __asm { MOV R9,qword ptr [RSP + 0x68] }
    /* +0xae3140 */ __asm { LEA R11,[R9 + -0xf50] }
    /* +0xae3147 */ __asm { IMUL EDX,R12D,-0x5d49 }
    /* +0xae314e */ __asm { MOVZX EDX,DX }
    /* +0xae3151 */ __asm { MOV R15,RAX }
    /* +0xae3154 */ __asm { SHR R15,0x2d }
    /* +0xae3158 */ __asm { SHR RAX,0x1b }
    /* +0xae315c */ __asm { XOR EAX,R15D }
    /* +0xae315f */ __asm { ROR EAX,CL }
    /* +0xae3161 */ __asm { MOV RCX,qword ptr GS:[RDX] }
    /* +0xae3165 */ __asm { IMUL R11,qword ptr [RCX + 0xe78] }
    /* +0xae316d */ __asm { MOV RCX,0x12a4136c23a31609 }
    /* +0xae3177 */ __asm { CMP R11,RCX }
    /* +0xae317a */ __asm { JZ 0x7fffa5253400 }
    /* +0xae3180 */ __asm { CMP EAX,0x105514 }
    /* +0xae3185 */ __asm { JA 0x7fffa5253391 }
    /* +0xae318b */ __asm { MOV dword ptr [RSP + 0x30],0x78ddc699 }
    /* +0xae3193 */ __asm { MOV EDX,dword ptr [RSP + 0x30] }
    /* +0xae3197 */ __asm { PUSHFQ }
    /* +0xae3198 */ __asm { POP RCX }
    /* +0xae3199 */ __asm { TEST ECX,0x100 }
    /* +0xae319f */ __asm { NOP }
    /* +0xae31a0 */ __asm { NOP }
    /* +0xae31a1 */ __asm { NOP }
    /* +0xae31a2 */ __asm { NOP }
    /* +0xae31a3 */ __asm { NOP }
    /* +0xae31a4 */ __asm { MOV EAX,0xd3ed2810 }
    /* +0xae31a9 */ __asm { NOT EAX }
    /* +0xae31ab */ __asm { LEA EDX,[R10 + RAX*0x1] }
    /* +0xae31af */ __asm { ADD EDX,0x5d9121a2 }
    /* +0xae31b5 */ __asm { MOVSXD R11,EDX }
    /* +0xae31b8 */ __asm { MOV EDX,0x70950335 }
    /* +0xae31bd */ __asm { SUB EDX,R10D }
    /* +0xae31c0 */ __asm { IMUL EAX,EDX,-0x394b1f03 }
    /* +0xae31c6 */ __asm { ADD EAX,0x11329872 }
    /* +0xae31cb */ __asm { MOV EDX,0x1a65f697 }
    /* +0xae31d0 */ __asm { MOV RCX,-0x51f6d20ac84e51f5 }
    /* +0xae31da */ __asm { CMP RDX,RCX }
    /* +0xae31dd */ __asm { SETNZ CL }
    /* +0xae31e0 */ __asm { CMP R11,RAX }
    /* +0xae31e3 */ __asm { SETL AL }
    /* +0xae31e6 */ __asm { CMP CL,AL }
    /* +0xae31e8 */ __asm { JNZ 0x7fffa52536e1 }
    /* +0xae31ee */ __asm { MOV RAX,0x0 }
    /* +0xae31f5 */ __asm { NOP }
    /* +0xae31f6 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xae31fd */ __asm { MOV R11,qword ptr [RDX + 0x65980971] }
    /* +0xae3204 */ __asm { MOV RCX,0x3cf79e1cd67463d6 }
    /* +0xae320e */ __asm { MOV RAX,R11 }
    /* +0xae3211 */ __asm { MUL RCX }
    /* +0xae3214 */ __asm { MOV RCX,RDX }
    /* +0xae3217 */ __asm { MOV EDX,0x14631e8 }
    /* +0xae321c */ __asm { MOV RAX,R11 }
    /* +0xae321f */ __asm { MUL RDX }
    /* +0xae3222 */ __asm { ADD RAX,RCX }
    /* +0xae3225 */ __asm { ADC RDX,0x0 }
    /* +0xae3229 */ __asm { TEST DL,0x1 }
    /* +0xae322c */ __asm { JZ 0x7fffa5253391 }
    /* +0xae3232 */ __asm { MOV EDX,R10D }
    /* +0xae3235 */ __asm { OR EDX,0x1 }
    /* +0xae3238 */ __asm { MOV AX,0x2e8a }
    /* +0xae323c */ __asm { LEA ECX,[R10 + RAX*0x1] }
    /* +0xae3240 */ __asm { ADD ECX,0x3ffa }
    /* +0xae3246 */ __asm { XORPS XMM1,XMM1 }
    /* +0xae3249 */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM1 }
    /* +0xae324e */ __asm { ROL CX,0xb }
    /* +0xae3252 */ __asm { MOVZX EAX,CX }
    /* +0xae3255 */ __asm { MOV R11,qword ptr GS:[RAX] }
    /* +0xae3259 */ __asm { MOV RCX,-0x7d52978669c3a6ed }
    /* +0xae3263 */ __asm { CMP R11,RCX }
    /* +0xae3266 */ __asm { JZ 0x7fffa5253416 }
    /* +0xae326c */ __asm { MOV ECX,0xc0042ec }
    /* +0xae3271 */ __asm { IMUL ECX,EDX }
    /* +0xae3274 */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xae327c */ __asm { ADD ECX,0x42641eb2 }
    /* +0xae3282 */ __asm { MOV dword ptr [RSP + 0x40],ECX }
    /* +0xae3286 */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xae328a */ __asm { MOV ECX,EDX }
    /* +0xae328c */ __asm { XOR ECX,0x1 }
    /* +0xae328f */ __asm { MOV EAX,0xd8881c97 }
    /* +0xae3294 */ __asm { AND EDX,0x1 }
    /* +0xae3297 */ __asm { MOV R11D,0x3a6b0c33 }
    /* +0xae329d */ __asm { XOR EAX,R10D }
    /* +0xae32a0 */ __asm { ROL EAX,0x16 }
    /* +0xae32a3 */ __asm { XOR R11D,0xa2ea958d }
    /* +0xae32aa */ __asm { ADD EAX,0x2263cecc }
    /* +0xae32af */ __asm { IMUL R11D,R11D,-0x3a2c1a93 }
    /* +0xae32b6 */ __asm { XOR R11D,R10D }
    /* +0xae32b9 */ __asm { MOVSXD R11,R11D }
    /* +0xae32bc */ __asm { CMP RAX,R11 }
    /* +0xae32bf */ __asm { CMOVA EDX,ECX }
    /* +0xae32c2 */ __asm { TEST EDX,EDX }
    /* +0xae32c4 */ __asm { JZ 0x7fffa52532c7 }
    /* +0xae32c6 */ __asm { CLD }
    /* +0xae32c7 */ __asm { MOV DX,0x6631 }
    /* +0xae32cb */ __asm { MOV R11,qword ptr [R9 + -0xa90] }
    /* +0xae32d2 */ __asm { SUB EDX,R10D }
    /* +0xae32d5 */ __asm { ADD EDX,0x31ab }
    /* +0xae32db */ __asm { MOVZX EAX,DX }
    /* +0xae32de */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0xae32e2 */ __asm { MOV R9D,0x201cf89a }
    /* +0xae32e8 */ __asm { OR R11,qword ptr [RCX + 0x18] }
    /* +0xae32ec */ __asm { LEA EAX,[R10 + R9*0x1] }
    /* +0xae32f0 */ __asm { ADD EAX,0xb719ab32 }
    /* +0xae32f5 */ __asm { ROL R11,0x29 }
    /* +0xae32f9 */ __asm { XOR R11,RAX }
    /* +0xae32fc */ __asm { NOT R11 }
    /* +0xae32ff */ __asm { MOV RCX,-0x43fcdeecb2812976 }
    /* +0xae3309 */ __asm { CMP R11,RCX }
    /* +0xae330c */ __asm { JZ 0x7fffa5253422 }
    /* +0xae3312 */ __asm { MOV R13,R8 }
    /* +0xae3315 */ __asm { LEA R8,[0x7fffa4788333] }
    /* +0xae331c */ __asm { NOP }
    /* +0xae331d */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xae3324 */ __asm { MOV R9,0x0 }
    /* +0xae332b */ __asm { MOV R11,0x1f9a65b67eb55f23 }
    /* +0xae3335 */ __asm { CMP R8,R11 }
    /* +0xae3338 */ __asm { JNZ 0x7fffa525333e }
    /* +0xae333a */ __asm { FSTP float ptr [RDI + 0x53] }
    /* +0xae333d */ __asm { PUSH RBX }
    /* +0xae333e */ __asm { MOV AX,0x1b81 }
    /* +0xae3342 */ __asm { XOR EAX,0x7302 }
    /* +0xae3347 */ __asm { MOV DX,0x4179 }
    /* +0xae334b */ __asm { XOR EDX,R10D }
    /* +0xae334e */ __asm { ADD EAX,R10D }
    /* +0xae3351 */ __asm { MOVSX R11,AX }
    /* +0xae3355 */ __asm { MOV qword ptr [RSP + 0x40],R9 }
    /* +0xae335a */ __asm { MOV EAX,dword ptr [R8 + -0x3d17] }
    /* +0xae3361 */ __asm { ROL DX,0xa }
    /* +0xae3365 */ __asm { IMUL EDX,EDX,-0x3331 }
    /* +0xae336b */ __asm { MOVZX EDX,DX }
    /* +0xae336e */ __asm { MOV R8W,0x9774 }
    /* +0xae3373 */ __asm { XOR R8D,R10D }
    /* +0xae3376 */ __asm { ROL R8W,0x1 }
    /* +0xae337a */ __asm { MOVZX R9D,R8W }
    /* +0xae337e */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xae3383 */ __asm { MOV RBX,R10 }
    /* +0xae3386 */ __asm { MOV R10,R11 }
    /* +0xae3389 */ __asm { SYSCALL }
    /* +0xae338b */ __asm { MOV R10,RBX }
    /* +0xae338e */ __asm { MOV R8,R13 }
    /* +0xae3391 */ __asm { LEA R9,[0x7fffa4786311] }
    /* +0xae3398 */ __asm { MOV RDX,0x0 }
    /* +0xae339f */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xae33a6 */ __asm { MOV R11,0x63719c9d504fb855 }
    /* +0xae33b0 */ __asm { CMP R9,R11 }
    /* +0xae33b3 */ __asm { JZ 0x7fffa52536cd }
    /* +0xae33b9 */ __asm { MOV DX,0x2b3e }
    /* +0xae33bd */ __asm { XOR EDX,R10D }
    /* +0xae33c0 */ __asm { ROR DX,0x1 }
    /* +0xae33c3 */ __asm { IMUL EDX,EDX,-0x76d9 }
    /* +0xae33c9 */ __asm { MOVZX EDX,DX }
    /* +0xae33cc */ __asm { MOV ECX,0x5b3d941f }
    /* +0xae33d1 */ __asm { XOR ECX,0xa4c26be1 }
    /* +0xae33d7 */ __asm { MOVSXD R11,ECX }
    /* +0xae33da */ __asm { MOV qword ptr [RSP + 0x30],RAX }
    /* +0xae33df */ __asm { MOV EAX,dword ptr [R9 + -0x1cad] }
    /* +0xae33e6 */ __asm { MOV CX,0x3f60 }
    /* +0xae33ea */ __asm { ADD ECX,0x1728 }
    /* +0xae33f0 */ __asm { ROL CX,0x4 }
    /* +0xae33f4 */ __asm { ADD ECX,R10D }
    /* +0xae33f7 */ __asm { MOVZX R9D,CX }
    /* +0xae33fb */ __asm { JMP 0x7fffa525366e }
    /* +0xae3400 */ __asm { PUSH RDX }
    /* +0xae3401 */ __asm { MOV dword ptr [RSI],ESP }
    /* +0xae3403 */ __asm { SCASD RDI }
    /* +0xae3404 */ __asm { CMP EAX,0x105514 }
    /* +0xae340b */ __asm { JBE 0x7fffa525318b }
    /* +0xae3411 */ __asm { JMP 0x7fffa5253391 }
    /* +0xae3416 */ __asm { SBB DH,uint8_t ptr [RDI + -0x3987e3bb] }
    /* +0xae3422 */ __asm { MOV R8B,0x79 }
    /* +0xae3425 */ __asm { AND uint8_t ptr [R8 + -0x17],R15B }
    /* +0xae3429 */ __asm { IN EAX,0xfe }
    /* +0xae342d */ __asm { IMUL ECX,dword ptr FS:[RBP + -0x50c17],-0x3d38b701 }
    /* +0xae3438 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xae343a */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xae343c */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xae3443 */ __asm { ADC EAX,0x3e6d132d }
    /* +0xae3448 */ __asm { PUSH -0x6f8b7ea1 }
    /* +0xae344d */ __asm { FISTP dword ptr [RSI + 0x41] }
    /* +0xae3450 */ __asm { TEST uint8_t ptr [RCX + 0x3ae11c46],0x1 }
    /* +0xae3457 */ __asm { JZ 0x7fffa525308c }
    /* +0xae345d */ __asm { RDTSC }
    /* +0xae345f */ __asm { SHL RDX,0x20 }
    /* +0xae3463 */ __asm { OR RDX,RAX }
    /* +0xae3466 */ __asm { MOV R11,-0x583f2dd720db9bdb }
    /* +0xae3470 */ __asm { IMUL R11,RDX }
    /* +0xae3474 */ __asm { MOV RCX,-0x53809983d4d7bb76 }
    /* +0xae347e */ __asm { ADD RCX,R11 }
    /* +0xae3481 */ __asm { MOV R11,RCX }
    /* +0xae3484 */ __asm { SHR R11,0x2d }
    /* +0xae3488 */ __asm { MOV RAX,RCX }
    /* +0xae348b */ __asm { SHR RAX,0x1b }
    /* +0xae348f */ __asm { XOR EAX,R11D }
    /* +0xae3492 */ __asm { SHR RCX,0x3b }
    /* +0xae3496 */ __asm { ROR EAX,CL }
    /* +0xae3498 */ __asm { MOV dword ptr [RSP + 0x30],0x5e445028 }
    /* +0xae34a0 */ __asm { MOV EDX,dword ptr [RSP + 0x30] }
    /* +0xae34a4 */ __asm { CMP EDX,0x7d6d9c08 }
    /* +0xae34aa */ __asm { JNC 0x7fffa52536b9 }
    /* +0xae34b0 */ __asm { PUSHFQ }
    /* +0xae34b1 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xae34b9 */ __asm { POPFQ }
    /* +0xae34ba */ __asm { CMP EAX,0x4520f0 }
    /* +0xae34bf */ __asm { JA 0x7fffa52535f8 }
    /* +0xae34c5 */ __asm { MOV dword ptr [RSP + 0x30],0xffc991bf }
    /* +0xae34cd */ __asm { MOV EDX,dword ptr [RSP + 0x30] }
    /* +0xae34d1 */ __asm { MOV R9D,0x92fbc572 }
    /* +0xae34d7 */ __asm { TEST uint8_t ptr [R9 + -0x12fdc332],0x1 }
    /* +0xae34df */ __asm { JNZ 0x7fffa52535f8 }
    /* +0xae34e5 */ __asm { XORPS XMM1,XMM1 }
    /* +0xae34e8 */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM1 }
    /* +0xae34ed */ __asm { MOV DX,0x8ae3 }
    /* +0xae34f1 */ __asm { MOV ECX,R10D }
    /* +0xae34f4 */ __asm { XOR ECX,EDX }
    /* +0xae34f6 */ __asm { MOVZX EAX,CX }
    /* +0xae34f9 */ __asm { XOR RAX,0x1dff }
    /* +0xae34ff */ __asm { MOV R11,qword ptr GS:[RAX] }
    /* +0xae3503 */ __asm { MOV RCX,-0x7657c8b5be8caad5 }
    /* +0xae350d */ __asm { MOV R11,qword ptr [R11 + 0x18] }
    /* +0xae3511 */ __asm { MOV R9,-0x14f1383c803a4f }
    /* +0xae351b */ __asm { ADD RCX,-0x6af8cee0 }
    /* +0xae3522 */ __asm { XOR RCX,R10 }
    /* +0xae3525 */ __asm { AND R9,R11 }
    /* +0xae3528 */ __asm { MOV R11,-0x2b855e5507ceb999 }
    /* +0xae3532 */ __asm { IMUL R11,R9 }
    /* +0xae3536 */ __asm { MOV RAX,-0xb4ad882c }
    /* +0xae3540 */ __asm { ADD RAX,R11 }
    /* +0xae3543 */ __asm { CMP RCX,RAX }
    /* +0xae3546 */ __asm { JZ 0x7fffa525369b }
    /* +0xae354c */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xae3554 */ __asm { PUSHFQ }
    /* +0xae3555 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xae355d */ __asm { POPFQ }
    /* +0xae355e */ __asm { MOV dword ptr [RSP + 0x40],0xea6fffb }
    /* +0xae3566 */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xae356a */ __asm { TEST EDX,EDX }
    /* +0xae356c */ __asm { JS 0x7fffa52536e9 }
    /* +0xae3572 */ __asm { MOV dword ptr [RSP + 0x40],0x64f1bf6d }
    /* +0xae357a */ __asm { MOV EDX,dword ptr [RSP + 0x40] }
    /* +0xae357e */ __asm { TEST DL,0x1 }
    /* +0xae3581 */ __asm { JZ 0x7fffa5253700 }
    /* +0xae3587 */ __asm { MOV R13,R8 }
    /* +0xae358a */ __asm { LEA R8,[0x7fffa4781748] }
    /* +0xae3591 */ __asm { MOV R11,0x5f4e897324eafedc }
    /* +0xae359b */ __asm { CMP R8,R11 }
    /* +0xae359e */ __asm { JZ 0x7fffa5253709 }
    /* +0xae35a4 */ __asm { MOV R11W,0x977c }
    /* +0xae35a9 */ __asm { MOV qword ptr [RSP + 0x40],R9 }
    /* +0xae35ae */ __asm { MOV EAX,dword ptr [R8 + 0x3744] }
    /* +0xae35b5 */ __asm { MOV R8W,0xb284 }
    /* +0xae35ba */ __asm { MOV EDX,R10D }
    /* +0xae35bd */ __asm { OR EDX,0x1 }
    /* +0xae35c0 */ __asm { NOT R11D }
    /* +0xae35c3 */ __asm { ADD R11D,R10D }
    /* +0xae35c6 */ __asm { MOVSX R11,R11W }
    /* +0xae35ca */ __asm { MOV CX,0x1290 }
    /* +0xae35ce */ __asm { IMUL ECX,EDX }
    /* +0xae35d1 */ __asm { ROR CX,0x1 }
    /* +0xae35d4 */ __asm { MOVZX EDX,CX }
    /* +0xae35d7 */ __asm { IMUL R8D,R8D,-0x1b05 }
    /* +0xae35de */ __asm { XOR R8D,R10D }
    /* +0xae35e1 */ __asm { MOVZX R9D,R8W }
    /* +0xae35e5 */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xae35ea */ __asm { MOV RBX,R10 }
    /* +0xae35ed */ __asm { MOV R10,R11 }
    /* +0xae35f0 */ __asm { SYSCALL }
    /* +0xae35f2 */ __asm { MOV R10,RBX }
    /* +0xae35f5 */ __asm { MOV R8,R13 }
    /* +0xae35f8 */ __asm { LEA R9,[0x7fffa47829c7] }
    /* +0xae35ff */ __asm { MOV R11,0x1db88261b19febdc }
    /* +0xae3609 */ __asm { CMP R9,R11 }
    /* +0xae360c */ __asm { JZ 0x7fffa52536c1 }
    /* +0xae3612 */ __asm { MOV EDX,0x368788f7 }
    /* +0xae3617 */ __asm { MOV R12W,0x5055 }
    /* +0xae361c */ __asm { MOV ECX,R10D }
    /* +0xae361f */ __asm { OR ECX,0x1 }
    /* +0xae3622 */ __asm { ADD EDX,0x2327a83a }
    /* +0xae3628 */ __asm { NOP }
    /* +0xae3629 */ __asm { MOV RAX,0x0 }
    /* +0xae3630 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0xae3637 */ __asm { MOV qword ptr [RSP + 0x30],RAX }
    /* +0xae363c */ __asm { ROL EDX,0x6 }
    /* +0xae363f */ __asm { IMUL EDX,ECX }
    /* +0xae3642 */ __asm { MOVSXD R11,EDX }
    /* +0xae3645 */ __asm { MOV DX,0x4498 }
}


// ============================================================================
// Function : FUN_7fffa5253720  |  RVA: 0xae3720  |  Size: 73 bytes
// Callers  : FUN_7fffa52cf2a0@0xb5f2a0
// Callees  : FUN_7fffa5513ad0@0xda3ad0, FUN_7fffa5657b48@0xee7b48
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_7fffa5253720(uint64_t param_1,int param_2,uint64_t param_3,code *param_4,
                     uint32_t param_5,uint64_t param_6)

{
  int iVar1;
  
  iVar1 = FUN_7fffa5513ad0();
  if ((iVar1 == 0) && (param_2 == 1)) {
    (*param_4)(param_1,0,param_3);
  }
  FUN_7fffa5657b48(param_5,param_6);
  return;
}


// ============================================================================
// Function : FUN_7fffa5253770  |  RVA: 0xae3770  |  Size: 54718 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5253770(void) {
    /* +0xae3770 */ __asm { PUSH RBP }
    /* +0xae3771 */ __asm { PUSH RDI }
    /* +0xae3772 */ __asm { PUSH R12 }
    /* +0xae3774 */ __asm { PUSH R14 }
    /* +0xae3776 */ __asm { PUSH RBX }
    /* +0xae3777 */ __asm { PUSH RSI }
    /* +0xae3778 */ __asm { PUSH R15 }
    /* +0xae377a */ __asm { PUSH R13 }
    /* +0xae377c */ __asm { SUB RSP,0x398 }
    /* +0xae3783 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xae378b */ __asm { MOVDQA xmmword ptr [RBP + 0x300],XMM7 }
    /* +0xae3793 */ __asm { MOVDQA xmmword ptr [RBP + 0x2f0],XMM8 }
    /* +0xae379c */ __asm { MOVDQA xmmword ptr [RBP + 0x2e0],XMM12 }
    /* +0xae37a5 */ __asm { MOVAPS xmmword ptr [RBP + 0x2d0],XMM15 }
    /* +0xae37ad */ __asm { MOVDQA xmmword ptr [RBP + 0x2c0],XMM6 }
    /* +0xae37b5 */ __asm { MOVDQA xmmword ptr [RBP + 0x2b0],XMM9 }
    /* +0xae37be */ __asm { MOVDQA xmmword ptr [RBP + 0x2a0],XMM10 }
    /* +0xae37c7 */ __asm { MOVDQA xmmword ptr [RBP + 0x290],XMM14 }
    /* +0xae37d0 */ __asm { MOVDQA xmmword ptr [RBP + 0x280],XMM11 }
    /* +0xae37d9 */ __asm { MOVDQA xmmword ptr [RBP + 0x270],XMM13 }
    /* +0xae37e2 */ __asm { MOV qword ptr [RBP + 0x268],-0x2 }
    /* +0xae37ed */ __asm { MOV qword ptr [RBP + -0x28],RDX }
    /* +0xae37f1 */ __asm { MOV R9,RAX }
    /* +0xae37f4 */ __asm { ROL R9,0xb }
    /* +0xae37f8 */ __asm { MOVQ XMM2,RAX }
    /* +0xae37fd */ __asm { MOVQ XMM4,R8 }
    /* +0xae3802 */ __asm { PSRLQ XMM4,0x17 }
    /* +0xae3807 */ __asm { MOV R10,R8 }
    /* +0xae380a */ __asm { SHR R10,0x2e }
    /* +0xae380e */ __asm { ROL RAX,0x12 }
    /* +0xae3812 */ __asm { MOVQ XMM5,RAX }
    /* +0xae3817 */ __asm { MOVD XMM0,R10D }
    /* +0xae381c */ __asm { PXOR XMM0,XMM4 }
    /* +0xae3820 */ __asm { MOVQ RAX,XMM0 }
    /* +0xae3825 */ __asm { XOR RAX,R8 }
    /* +0xae3828 */ __asm { MOV R11,RAX }
    /* +0xae382b */ __asm { ROL R11,0x1b }
    /* +0xae382f */ __asm { MOVQ XMM4,RAX }
    /* +0xae3834 */ __asm { ROL RAX,0x3b }
    /* +0xae3838 */ __asm { XOR RAX,R11 }
    /* +0xae383b */ __asm { MOVQ XMM0,RAX }
    /* +0xae3840 */ __asm { PXOR XMM0,XMM4 }
    /* +0xae3844 */ __asm { PXOR XMM5,XMM2 }
    /* +0xae3848 */ __asm { MOVQ R13,XMM5 }
    /* +0xae384d */ __asm { XOR R9,R13 }
    /* +0xae3850 */ __asm { MOV RAX,R9 }
    /* +0xae3853 */ __asm { ROL RAX,0x24 }
    /* +0xae3857 */ __asm { MOVQ R10,XMM0 }
    /* +0xae385c */ __asm { MOV R11,R9 }
    /* +0xae385f */ __asm { ROL R11,0x16 }
    /* +0xae3863 */ __asm { MOVQ XMM2,RAX }
    /* +0xae3868 */ __asm { MOVQ XMM4,R11 }
    /* +0xae386d */ __asm { PXOR XMM4,XMM2 }
    /* +0xae3871 */ __asm { MOVQ RAX,XMM4 }
    /* +0xae3876 */ __asm { XOR RAX,R9 }
    /* +0xae3879 */ __asm { MOV R9,RAX }
    /* +0xae387c */ __asm { ROL R9,0x8 }
    /* +0xae3880 */ __asm { MOV R11,RAX }
    /* +0xae3883 */ __asm { ROL R11,0x2c }
    /* +0xae3887 */ __asm { XOR R11,R9 }
    /* +0xae388a */ __asm { XOR R11,RAX }
    /* +0xae388d */ __asm { MOV R9,R11 }
    /* +0xae3890 */ __asm { ROL R9,0x10 }
    /* +0xae3894 */ __asm { MOV RAX,R11 }
    /* +0xae3897 */ __asm { ROL RAX,0x18 }
    /* +0xae389b */ __asm { XOR RAX,R9 }
    /* +0xae389e */ __asm { XOR RAX,R11 }
    /* +0xae38a1 */ __asm { MOV R9,RAX }
    /* +0xae38a4 */ __asm { ROL R9,0x20 }
    /* +0xae38a8 */ __asm { MOV qword ptr [RBP + 0x230],R10 }
    /* +0xae38af */ __asm { MOV R11,RAX }
    /* +0xae38b2 */ __asm { ROL R11,0x30 }
    /* +0xae38b6 */ __asm { XOR R11,R9 }
    /* +0xae38b9 */ __asm { XOR R11,RAX }
    /* +0xae38bc */ __asm { ROL R11,0x20 }
    /* +0xae38c0 */ __asm { MOV qword ptr [RBP + 0xa0],R11 }
    /* +0xae38c7 */ __asm { MOV dword ptr [RBP + 0x160],0x28420103 }
    /* +0xae38d1 */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0xae38d8 */ __asm { TEST R10B,0x1 }
    /* +0xae38dc */ __asm { NOP }
    /* +0xae38dd */ __asm { NOP }
    /* +0xae38de */ __asm { NOP }
    /* +0xae38df */ __asm { NOP }
    /* +0xae38e0 */ __asm { NOP }
    /* +0xae38e1 */ __asm { NOP }
    /* +0xae38e2 */ __asm { NOP }
    /* +0xae38e3 */ __asm { NOP }
    /* +0xae38e4 */ __asm { NOP }
    /* +0xae38e5 */ __asm { NOP }
    /* +0xae38e6 */ __asm { MOV R10D,0xaae65004 }
    /* +0xae38ec */ __asm { ADD R10D,0x47cc8663 }
    /* +0xae38f3 */ __asm { MOV R8,qword ptr [RBP + -0x28] }
    /* +0xae38f7 */ __asm { MOV ECX,R8D }
    /* +0xae38fa */ __asm { ROR R10D,CL }
    /* +0xae38fd */ __asm { IMUL R10D,R10D,0x67ac15b }
    /* +0xae3904 */ __asm { MOV dword ptr [RBP + 0x160],R10D }
    /* +0xae390b */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0xae3912 */ __asm { MOV R10W,0xe3b }
    /* +0xae3917 */ __asm { ADD R10D,0xfffff1c6 }
    /* +0xae391e */ __asm { RDTSC }
    /* +0xae3920 */ __asm { SHL RDX,0x20 }
    /* +0xae3924 */ __asm { ROL R10W,CL }
    /* +0xae3928 */ __asm { OR RDX,RAX }
    /* +0xae392b */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xae3935 */ __asm { IMUL RDX,R9 }
    /* +0xae3939 */ __asm { MOV R9,-0x22b18422c4a9c65e }
    /* +0xae3943 */ __asm { ADD RDX,R9 }
    /* +0xae3946 */ __asm { MOV R11,RDX }
    /* +0xae3949 */ __asm { SHR R11,0x1b }
    /* +0xae394d */ __asm { MOV RCX,RDX }
    /* +0xae3950 */ __asm { SHR RCX,0x3b }
    /* +0xae3954 */ __asm { SHR RDX,0x2d }
    /* +0xae3958 */ __asm { XOR R11D,EDX }
    /* +0xae395b */ __asm { ROR R11D,CL }
    /* +0xae395e */ __asm { MOVZX R10D,R10W }
    /* +0xae3962 */ __asm { AND R11D,0x3 }
    /* +0xae3966 */ __asm { MOVD XMM15,R8D }
    /* +0xae396b */ __asm { CMP R11D,R10D }
    /* +0xae396e */ __asm { JC 0x7fffa5253a2e }
    /* +0xae3974 */ __asm { CMP R11D,0x3 }
    /* +0xae3978 */ __asm { JNZ 0x7fffa5253d38 }
    /* +0xae397e */ __asm { LEA R8,[0x7fffa47b6c54] }
    /* +0xae3985 */ __asm { MOV R9,-0x4982f9bab93a022 }
    /* +0xae398f */ __asm { CMP R8,R9 }
    /* +0xae3992 */ __asm { JZ 0x7fffa525efb9 }
    /* +0xae3998 */ __asm { MOV R10D,0x6a3e9729 }
    /* +0xae399e */ __asm { ADD R10D,0x94c16b16 }
    /* +0xae39a5 */ __asm { ROL R10D,0x8 }
    /* +0xae39a9 */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xae39ad */ __asm { ROL R10D,CL }
    /* +0xae39b0 */ __asm { MOV R11D,0xe17c5d71 }
    /* +0xae39b6 */ __asm { XOR R11D,ECX }
    /* +0xae39b9 */ __asm { NOT R11D }
    /* +0xae39bc */ __asm { ROL R11D,0xb }
    /* +0xae39c0 */ __asm { CMP R11,R10 }
    /* +0xae39c3 */ __asm { JLE 0x7fffa52541de }
    /* +0xae39c9 */ __asm { MOVZX R10D,uint8_t ptr [R8 + 0x5af5] }
    /* +0xae39d1 */ __asm { MOV ECX,0x34d69ece }
    /* +0xae39d6 */ __asm { IMUL EDX,ECX,-0x4a1826bf }
    /* +0xae39dc */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xae39e0 */ __asm { ROR EDX,CL }
    /* +0xae39e2 */ __asm { ROL EDX,0x1e }
    /* +0xae39e5 */ __asm { MOVSXD RDI,EDX }
    /* +0xae39e8 */ __asm { MOVZX R9D,uint8_t ptr [R8 + R10*0x4 + 0x5afb] }
    /* +0xae39f1 */ __asm { NOT R9B }
    /* +0xae39f4 */ __asm { ROL R9B,0x5 }
    /* +0xae39f8 */ __asm { LEA RAX,[R8 + R10*0x4] }
    /* +0xae39fc */ __asm { ADD RAX,0x5afb }
    /* +0xae3a02 */ __asm { MOV uint8_t ptr [RBP + 0x160],R9B }
    /* +0xae3a09 */ __asm { MOVZX R9D,uint8_t ptr [R8 + R10*0x4 + 0x5afc] }
    /* +0xae3a12 */ __asm { NOT R9B }
    /* +0xae3a15 */ __asm { ROL R9B,0x5 }
    /* +0xae3a19 */ __asm { MOV uint8_t ptr [RBP + 0x161],R9B }
    /* +0xae3a20 */ __asm { MOVZX R9D,uint8_t ptr [R8 + R10*0x4 + 0x5afd] }
    /* +0xae3a29 */ __asm { JMP 0x7fffa525424f }
    /* +0xae3a2e */ __asm { CMP R11D,0x1 }
    /* +0xae3a32 */ __asm { JZ 0x7fffa5253dd7 }
    /* +0xae3a38 */ __asm { MOV R8D,0xf84422ef }
    /* +0xae3a3e */ __asm { MOV R9,-0x702e5795 }
    /* +0xae3a45 */ __asm { SUB R9,R8 }
    /* +0xae3a48 */ __asm { MOV RAX,-0x5a731ed49fa36c89 }
    /* +0xae3a52 */ __asm { CMP R9,RAX }
    /* +0xae3a55 */ __asm { NOP }
    /* +0xae3a56 */ __asm { NOP }
    /* +0xae3a57 */ __asm { NOP }
    /* +0xae3a58 */ __asm { NOP }
    /* +0xae3a59 */ __asm { NOP }
    /* +0xae3a5a */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xae3a61 */ __asm { MOV RCX,0x0 }
    /* +0xae3a68 */ __asm { MOV R10D,dword ptr [R8 + -0x78461f2f] }
    /* +0xae3a6f */ __asm { RDTSC }
    /* +0xae3a71 */ __asm { SHL RDX,0x20 }
    /* +0xae3a75 */ __asm { OR RDX,RAX }
    /* +0xae3a78 */ __asm { CMP R10D,0xd }
    /* +0xae3a7c */ __asm { JNC 0x7fffa52545d3 }
    /* +0xae3a82 */ __asm { MOV R10W,0x5ba4 }
    /* +0xae3a87 */ __asm { MOV R11,qword ptr [RBP + -0x28] }
    /* +0xae3a8b */ __asm { ADD R10D,R11D }
    /* +0xae3a8e */ __asm { XOR R10D,0xd545 }
    /* +0xae3a95 */ __asm { MOVZX R10D,R10W }
    /* +0xae3a99 */ __asm { MOV R9,0x6fce2a175e744687 }
    /* +0xae3aa3 */ __asm { ADD R9,R11 }
    /* +0xae3aa6 */ __asm { ROL R9,0x10 }
    /* +0xae3aaa */ __asm { MOV RAX,-0x5a46117eacb056b3 }
    /* +0xae3ab4 */ __asm { IMUL RDX,RAX }
    /* +0xae3ab8 */ __asm { MOVQ XMM2,RDX }
    /* +0xae3abd */ __asm { MOVQ XMM4,R9 }
    /* +0xae3ac2 */ __asm { PADDQ XMM4,XMM2 }
    /* +0xae3ac6 */ __asm { MOVQ RCX,XMM4 }
    /* +0xae3acb */ __asm { MOV R11,RCX }
    /* +0xae3ace */ __asm { SHR R11,0x2d }
    /* +0xae3ad2 */ __asm { PSRLQ XMM4,0x1b }
    /* +0xae3ad7 */ __asm { SHR RCX,0x3b }
    /* +0xae3adb */ __asm { MOVD XMM2,R11D }
    /* +0xae3ae0 */ __asm { PXOR XMM2,XMM4 }
    /* +0xae3ae4 */ __asm { MOVD R8D,XMM2 }
    /* +0xae3ae9 */ __asm { ROR R8D,CL }
    /* +0xae3aec */ __asm { MOV R9,qword ptr GS:[R10] }
    /* +0xae3af0 */ __asm { ADD R9,qword ptr [RBP + 0x358] }
    /* +0xae3af7 */ __asm { MOV RAX,-0x9d70972277277 }
    /* +0xae3b01 */ __asm { CMP R9,RAX }
    /* +0xae3b04 */ __asm { NOP }
    /* +0xae3b05 */ __asm { NOP }
    /* +0xae3b06 */ __asm { NOP }
    /* +0xae3b07 */ __asm { NOP }
    /* +0xae3b08 */ __asm { NOP }
    /* +0xae3b09 */ __asm { NOP }
    /* +0xae3b0a */ __asm { NOP }
    /* +0xae3b0b */ __asm { NOP }
    /* +0xae3b0c */ __asm { NOP }
    /* +0xae3b0d */ __asm { MOV R10D,0x9c0bc7ed }
    /* +0xae3b13 */ __asm { IMUL R10D,R10D,0x21f8c9a7 }
    /* +0xae3b1a */ __asm { XOR R10D,dword ptr [RBP + -0x28] }
    /* +0xae3b1e */ __asm { XOR ECX,ECX }
    /* +0xae3b20 */ __asm { XOR EDX,EDX }
    /* +0xae3b22 */ __asm { CMP R8D,0x45b337c }
    /* +0xae3b29 */ __asm { SETGE CL }
    /* +0xae3b2c */ __asm { SETC DL }
    /* +0xae3b2f */ __asm { MOV R8D,0xba0c418d }
    /* +0xae3b35 */ __asm { MOVD XMM2,R8D }
    /* +0xae3b3a */ __asm { PSUBD XMM2,XMM15 }
    /* +0xae3b3f */ __asm { MOVD R11D,XMM2 }
    /* +0xae3b44 */ __asm { ROL R11D,0x2 }
    /* +0xae3b48 */ __asm { CMP R10,R11 }
    /* +0xae3b4b */ __asm { CMOVG ECX,EDX }
    /* +0xae3b4e */ __asm { CMP CL,0x1 }
    /* +0xae3b51 */ __asm { JNZ 0x7fffa5253cc7 }
    /* +0xae3b57 */ __asm { MOV dword ptr [RBP + 0x160],0xdd8575a }
    /* +0xae3b61 */ __asm { MOV R10D,dword ptr [RBP + 0x160] }
    /* +0xae3b68 */ __asm { MOV R8D,0x689f6c7d }
    /* +0xae3b6e */ __asm { MOV R9,0x176c8ff9820b7acf }
    /* +0xae3b78 */ __asm { IMUL R9,R8 }
    /* +0xae3b7c */ __asm { XOR R9,0x4430c3ec }
    /* +0xae3b83 */ __asm { MOV RAX,0x66eb497f55b77663 }
    /* +0xae3b8d */ __asm { CMP R9,RAX }
    /* +0xae3b90 */ __asm { JZ 0x7fffa52609a0 }
    /* +0xae3b96 */ __asm { MOV R10W,0xffeb }
    /* +0xae3b9b */ __asm { MOV ECX,0xfffffff7 }
    /* +0xae3ba0 */ __asm { SUB ECX,R10D }
    /* +0xae3ba3 */ __asm { MOVZX R10D,CX }
    /* +0xae3ba7 */ __asm { CMP dword ptr [R8 + 0x175e9743],R10D }
    /* +0xae3bae */ __asm { JBE 0x7fffa5253cc7 }
    /* +0xae3bb4 */ __asm { PXOR XMM2,XMM2 }
    /* +0xae3bb8 */ __asm { MOVDQA xmmword ptr [RBP + 0x160],XMM2 }
    /* +0xae3bc0 */ __asm { PUSHFQ }
    /* +0xae3bc1 */ __asm { POP R10 }
    /* +0xae3bc3 */ __asm { TEST R10D,0x100 }
    /* +0xae3bca */ __asm { NOP }
    /* +0xae3bcb */ __asm { NOP }
    /* +0xae3bcc */ __asm { NOP }
    /* +0xae3bcd */ __asm { NOP }
    /* +0xae3bce */ __asm { NOP }
    /* +0xae3bcf */ __asm { MOV R10D,0x297e966a }
    /* +0xae3bd5 */ __asm { XOR R10D,dword ptr [RBP + -0x28] }
    /* +0xae3bd9 */ __asm { ADD R10D,0x39cad607 }
    /* +0xae3be0 */ __asm { MOV dword ptr [RBP + 0x10],R10D }
    /* +0xae3be4 */ __asm { MOV R10D,dword ptr [RBP + 0x10] }
    /* +0xae3be8 */ __asm { TEST R10D,R10D }
    /* +0xae3beb */ __asm { NOP }
    /* +0xae3bec */ __asm { NOP }
    /* +0xae3bed */ __asm { NOP }
    /* +0xae3bee */ __asm { NOP }
    /* +0xae3bef */ __asm { NOP }
    /* +0xae3bf0 */ __asm { NOP }
    /* +0xae3bf1 */ __asm { NOP }
    /* +0xae3bf2 */ __asm { NOP }
    /* +0xae3bf3 */ __asm { NOP }
    /* +0xae3bf4 */ __asm { NOP }
    /* +0xae3bf5 */ __asm { NOP }
    /* +0xae3bf6 */ __asm { NOP }
    /* +0xae3bf7 */ __asm { NOP }
    /* +0xae3bf8 */ __asm { NOP }
    /* +0xae3bf9 */ __asm { NOP }
    /* +0xae3bfa */ __asm { MOV R10W,0x7913 }
    /* +0xae3bff */ __asm { SUB R10D,dword ptr [RBP + -0x28] }
    /* +0xae3c03 */ __asm { ADD R10D,0xee }
    /* +0xae3c0a */ __asm { MOVZX R10D,R10W }
    /* +0xae3c0e */ __asm { MOV dword ptr [RBP + 0x160],0x0 }
    /* +0xae3c18 */ __asm { MOV R9,qword ptr GS:[R10] }
    /* +0xae3c1c */ __asm { MOV RAX,0x70b902fde319477 }
    /* +0xae3c26 */ __asm { CMP qword ptr [R9 + 0x60],RAX }
    /* +0xae3c2a */ __asm { NOP }
    /* +0xae3c2b */ __asm { NOP }
    /* +0xae3c2c */ __asm { NOP }
    /* +0xae3c2d */ __asm { NOP }
    /* +0xae3c2e */ __asm { MOV dword ptr [RBP + 0x10],0x5fc147fb }
    /* +0xae3c35 */ __asm { MOV R10D,dword ptr [RBP + 0x10] }
    /* +0xae3c39 */ __asm { CMP R10D,0x894911c5 }
    /* +0xae3c40 */ __asm { NOP }
    /* +0xae3c41 */ __asm { NOP }
    /* +0xae3c42 */ __asm { NOP }
    /* +0xae3c43 */ __asm { NOP }
    /* +0xae3c44 */ __asm { NOP }
    /* +0xae3c45 */ __asm { NOP }
    /* +0xae3c46 */ __asm { NOP }
    /* +0xae3c47 */ __asm { NOP }
    /* +0xae3c48 */ __asm { NOP }
    /* +0xae3c49 */ __asm { NOP }
    /* +0xae3c4a */ __asm { NOP }
    /* +0xae3c4b */ __asm { NOP }
    /* +0xae3c4c */ __asm { LEA R8,[0x7fffa4783558] }
    /* +0xae3c53 */ __asm { MOV R9,0x66601118262fc2ff }
    /* +0xae3c5d */ __asm { CMP R8,R9 }
    /* +0xae3c60 */ __asm { NOP }
    /* +0xae3c61 */ __asm { NOP }
    /* +0xae3c62 */ __asm { NOP }
    /* +0xae3c63 */ __asm { NOP }
    /* +0xae3c64 */ __asm { NOP }
    /* +0xae3c65 */ __asm { MOV R10D,0x205ace6d }
    /* +0xae3c6b */ __asm { MOV qword ptr [RBP + 0x10],RCX }
    /* +0xae3c6f */ __asm { MOV CX,0xdba3 }
    /* +0xae3c73 */ __asm { MOVD XMM2,ECX }
    /* +0xae3c77 */ __asm { XOR R10D,0x1424999f }
    /* +0xae3c7e */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xae3c82 */ __asm { ROL R10D,CL }
    /* +0xae3c85 */ __asm { MOV R11W,0xb29d }
    /* +0xae3c8a */ __asm { LEA EDX,[RCX + R11*0x1] }
    /* +0xae3c8e */ __asm { ADD EDX,0xffffd3ba }
    /* +0xae3c94 */ __asm { MOVZX EDX,DX }
    /* +0xae3c97 */ __asm { XOR R10D,0x501b9703 }
    /* +0xae3c9e */ __asm { MOVSXD R10,R10D }
    /* +0xae3ca1 */ __asm { MOVD XMM4,ECX }
    /* +0xae3ca5 */ __asm { PSUBW XMM2,XMM4 }
    /* +0xae3ca9 */ __asm { MOV EAX,dword ptr [R8 + 0x1934] }
    /* +0xae3cb0 */ __asm { MOVD ECX,XMM2 }
    /* +0xae3cb4 */ __asm { ADD ECX,0xffff9e3e }
    /* +0xae3cba */ __asm { MOVZX R9D,CX }
    /* +0xae3cbe */ __asm { LEA R8,[RBP + 0x160] }
    /* +0xae3cc5 */ __asm { SYSCALL }
    /* +0xae3cc7 */ __asm { LEA R8,[0x7fffa4788b23] }
    /* +0xae3cce */ __asm { MOV R9,0x1659b6ef1 }
    /* +0xae3cd8 */ __asm { SUB R9,R8 }
    /* +0xae3cdb */ __asm { MOV RAX,-0x6edef6f48e345e41 }
    /* +0xae3ce5 */ __asm { CMP R9,RAX }
    /* +0xae3ce8 */ __asm { JZ 0x7fffa526022e }
    /* +0xae3cee */ __asm { MOV qword ptr [RBP + 0x160],RCX }
    /* +0xae3cf5 */ __asm { MOV ECX,0xd077238 }
    /* +0xae3cfa */ __asm { MOV R10D,0xf7c57e75 }
    /* +0xae3d00 */ __asm { ADD R10D,0x566707b9 }
    /* +0xae3d07 */ __asm { MOVD XMM2,R10D }
    /* +0xae3d0c */ __asm { PXOR XMM2,XMM15 }
    /* +0xae3d11 */ __asm { MOVD R10D,XMM2 }
    /* +0xae3d16 */ __asm { ROL R10D,0xb }
    /* +0xae3d1a */ __asm { MOVSXD R10,R10D }
    /* +0xae3d1d */ __asm { IMUL ECX,ECX,-0x3ffffff3 }
    /* +0xae3d23 */ __asm { XOR ECX,dword ptr [RBP + -0x28] }
    /* +0xae3d26 */ __asm { IMUL EDX,ECX,-0x5cb2f739 }
    /* +0xae3d2c */ __asm { MOV EAX,dword ptr [R8 + -0x3d83] }
    /* +0xae3d33 */ __asm { JMP 0x7fffa52551dd }
    /* +0xae3d38 */ __asm { LEA R8,[0x7fffa47c0ef4] }
    /* +0xae3d3f */ __asm { MOV RCX,R8 }
    /* +0xae3d42 */ __asm { ROL RCX,0x33 }
    /* +0xae3d46 */ __asm { ADD RCX,-0x7f0c5ce1 }
    /* +0xae3d4d */ __asm { MOV R9,0x46389b8d24949da3 }
    /* +0xae3d57 */ __asm { CMP RCX,R9 }
    /* +0xae3d5a */ __asm { NOP }
    /* +0xae3d5b */ __asm { NOP }
    /* +0xae3d5c */ __asm { NOP }
    /* +0xae3d5d */ __asm { NOP }
    /* +0xae3d5e */ __asm { NOP }
    /* +0xae3d5f */ __asm { MOV R10D,0x9b26180a }
    /* +0xae3d65 */ __asm { ADD R10D,0x6ea7a418 }
    /* +0xae3d6c */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xae3d70 */ __asm { ROR R10D,CL }
    /* +0xae3d73 */ __asm { MOV R11D,0xadcc7071 }
    /* +0xae3d79 */ __asm { ADD R11D,0x3ca60219 }
    /* +0xae3d80 */ __asm { ROR R11D,CL }
    /* +0xae3d83 */ __asm { ADD R10D,0xa1eefb1e }
    /* +0xae3d8a */ __asm { CMP R10,R11 }
    /* +0xae3d8d */ __asm { JNC 0x7fffa5254907 }
    /* +0xae3d93 */ __asm { MOV R14D,0x5b94b1ed }
    /* +0xae3d99 */ __asm { ADD R14D,dword ptr [RBP + -0x28] }
    /* +0xae3d9d */ __asm { MOVZX ECX,uint8_t ptr [R8 + -0x4867] }
    /* +0xae3da5 */ __asm { LEA R9,[R8 + RCX*0x4] }
    /* +0xae3da9 */ __asm { ADD R9,-0x4857 }
    /* +0xae3db0 */ __asm { MOVZX EAX,uint8_t ptr [R8 + RCX*0x4 + -0x4857] }
    /* +0xae3db9 */ __asm { MOVZX R10D,uint8_t ptr [R8 + RCX*0x4 + -0x4856] }
    /* +0xae3dc2 */ __asm { ROL AL,0x4 }
    /* +0xae3dc5 */ __asm { NOT R14D }
    /* +0xae3dc8 */ __asm { ROL R10B,0x4 }
    /* +0xae3dcc */ __asm { MOV uint8_t ptr [RBP + 0x160],AL }
    /* +0xae3dd2 */ __asm { JMP 0x7fffa5254958 }
    /* +0xae3dd7 */ __asm { LEA R8,[0x7fffa47b74f4] }
    /* +0xae3dde */ __asm { MOV R9,0x24209696c9da1cf6 }
    /* +0xae3de8 */ __asm { CMP R8,R9 }
    /* +0xae3deb */ __asm { NOP }
    /* +0xae3dec */ __asm { NOP }
    /* +0xae3ded */ __asm { NOP }
    /* +0xae3dee */ __asm { NOP }
    /* +0xae3def */ __asm { NOP }
    /* +0xae3df0 */ __asm { NOP }
    /* +0xae3df1 */ __asm { NOP }
    /* +0xae3df2 */ __asm { NOP }
    /* +0xae3df3 */ __asm { NOP }
    /* +0xae3df4 */ __asm { MOV R10W,0x14b6 }
    /* +0xae3df9 */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xae3dfd */ __asm { MOV EDX,ECX }
    /* +0xae3dff */ __asm { XOR EDX,R10D }
    /* +0xae3e02 */ __asm { XOR EDX,0x3cec }
    /* +0xae3e08 */ __asm { MOVZX R10D,DX }
    /* +0xae3e0c */ __asm { MOVD XMM2,R10D }
    /* +0xae3e11 */ __asm { MOV R11D,0x83352609 }
    /* +0xae3e17 */ __asm { ADD R11D,0xe104ba3e }
    /* +0xae3e1e */ __asm { MOV R10D,0x113566a2 }
    /* +0xae3e24 */ __asm { MOVQ XMM4,R8 }
    /* +0xae3e29 */ __asm { ROL R11D,0xf }
    /* +0xae3e2d */ __asm { ADD R11D,ECX }
    /* +0xae3e30 */ __asm { MOV EAX,0x28a34683 }
    /* +0xae3e35 */ __asm { ADD EAX,0x377d4f84 }
    /* +0xae3e3a */ __asm { ADD R10D,0xeef3995a }
    /* +0xae3e41 */ __asm { ROR R10D,CL }
    /* +0xae3e44 */ __asm { PADDQ XMM4,XMM2 }
    /* +0xae3e48 */ __asm { MOVQ R9,XMM4 }
    /* +0xae3e4d */ __asm { MOVZX R8D,uint8_t ptr [R9 + 0xe] }
    /* +0xae3e52 */ __asm { MOVSX RDX,R8B }
    /* +0xae3e56 */ __asm { MOV R14D,ECX }
    /* +0xae3e59 */ __asm { OR R14D,0x1 }
    /* +0xae3e5d */ __asm { IMUL EAX,R14D }
    /* +0xae3e61 */ __asm { CMP RAX,R11 }
    /* +0xae3e64 */ __asm { CMOVLE RDX,R8 }
    /* +0xae3e68 */ __asm { MOVZX EAX,uint8_t ptr [R9 + RDX*0x4 + 0x1e] }
    /* +0xae3e6e */ __asm { ROL AL,0x4 }
    /* +0xae3e71 */ __asm { MOV uint8_t ptr [RBP + 0x160],AL }
    /* +0xae3e77 */ __asm { MOVZX EAX,uint8_t ptr [R9 + RDX*0x4 + 0x1f] }
    /* +0xae3e7d */ __asm { ROL AL,0x4 }
    /* +0xae3e80 */ __asm { MOV uint8_t ptr [RBP + 0x161],AL }
    /* +0xae3e86 */ __asm { MOVZX EAX,uint8_t ptr [R9 + RDX*0x4 + 0x20] }
    /* +0xae3e8c */ __asm { ROL AL,0x4 }
    /* +0xae3e8f */ __asm { MOV uint8_t ptr [RBP + 0x162],AL }
    /* +0xae3e95 */ __asm { MOVZX R9D,uint8_t ptr [R9 + RDX*0x4 + 0x21] }
    /* +0xae3e9b */ __asm { ROL R9B,0x4 }
    /* +0xae3e9f */ __asm { MOV uint8_t ptr [RBP + 0x163],R9B }
    /* +0xae3ea6 */ __asm { MOV ECX,0x65e8ce72 }
    /* +0xae3eab */ __asm { XOR ECX,dword ptr [RBP + 0x160] }
    /* +0xae3eb1 */ __asm { MOV R10D,dword ptr [R10] }
    /* +0xae3eb4 */ __asm { BT ECX,R10D }
    /* +0xae3eb8 */ __asm { JNC 0x7fffa5254e8c }
    /* +0xae3ebe */ __asm { RDTSC }
    /* +0xae3ec0 */ __asm { SHL RDX,0x20 }
    /* +0xae3ec4 */ __asm { OR RDX,RAX }
    /* +0xae3ec7 */ __asm { MOV R9,0x7facc0f7a00541bd }
    /* +0xae3ed1 */ __asm { IMUL R9,RDX }
    /* +0xae3ed5 */ __asm { MOV RCX,-0x24737980d434d13e }
    /* +0xae3edf */ __asm { ADD RCX,R9 }
    /* +0xae3ee2 */ __asm { MOV R11,RCX }
    /* +0xae3ee5 */ __asm { SHR R11,0x2d }
    /* +0xae3ee9 */ __asm { MOV R10,RCX }
    /* +0xae3eec */ __asm { SHR R10,0x1b }
    /* +0xae3ef0 */ __asm { XOR R10D,R11D }
    /* +0xae3ef3 */ __asm { SHR RCX,0x3b }
    /* +0xae3ef7 */ __asm { ROR R10D,CL }
    /* +0xae3efa */ __asm { MOV dword ptr [RBP + 0x160],0x97f1c2fe }
    /* +0xae3f04 */ __asm { MOV ECX,dword ptr [RBP + 0x160] }
    /* +0xae3f0a */ __asm { TEST ECX,ECX }
    /* +0xae3f0c */ __asm { JS 0x7fffa5253f14 }
    /* +0xae3f0e */ __asm { RET }
    /* +0xae3f14 */ __asm { MOV ECX,0x28a7bdb3 }
    /* +0xae3f19 */ __asm { MOV R11D,0x4adf8f3b }
    /* +0xae3f1f */ __asm { SUB R11D,ECX }
    /* +0xae3f22 */ __asm { ROL R11D,0x8 }
    /* +0xae3f26 */ __asm { PUSHFQ }
    /* +0xae3f27 */ __asm { POP R8 }
    /* +0xae3f29 */ __asm { MOV EAX,0xa9b178b }
    /* +0xae3f2e */ __asm { XOR EAX,0x3bc3543b }
    /* +0xae3f33 */ __asm { IMUL EAX,R14D }
    /* +0xae3f37 */ __asm { CMP R11,RAX }
    /* +0xae3f3a */ __asm { SETL R9B }
    /* +0xae3f3e */ __asm { SHR R8D,0x8 }
    /* +0xae3f42 */ __asm { AND R8D,0x1 }
    /* +0xae3f46 */ __asm { XOR R8B,R9B }
    /* +0xae3f49 */ __asm { NOP }
    /* +0xae3f4a */ __asm { NOP }
    /* +0xae3f4b */ __asm { NOP }
    /* +0xae3f4c */ __asm { NOP }
    /* +0xae3f4d */ __asm { NOP }
    /* +0xae3f4e */ __asm { NOP }
    /* +0xae3f4f */ __asm { NOP }
    /* +0xae3f50 */ __asm { NOP }
    /* +0xae3f51 */ __asm { NOP }
    /* +0xae3f52 */ __asm { NOP }
    /* +0xae3f53 */ __asm { NOP }
    /* +0xae3f54 */ __asm { NOP }
    /* +0xae3f55 */ __asm { NOP }
    /* +0xae3f56 */ __asm { NOP }
    /* +0xae3f57 */ __asm { NOP }
    /* +0xae3f58 */ __asm { NOP }
    /* +0xae3f59 */ __asm { NOP }
    /* +0xae3fa6 */ __asm { MOV R10W,0x22e3 }
    /* +0xae3fab */ __asm { MOV RCX,qword ptr [RBP + -0x28] }
    /* +0xae3faf */ __asm { XOR R10D,ECX }
    /* +0xae3fb2 */ __asm { PUSHFQ }
    /* +0xae3fb3 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xae3fbb */ __asm { POPFQ }
    /* +0xae3fbc */ __asm { MOV dword ptr [RBP + 0x160],0x0 }
    /* +0xae3fc6 */ __asm { ADD R10D,0xffffa52e }
    /* +0xae3fcd */ __asm { MOVZX R10D,R10W }
    /* +0xae3fd1 */ __asm { MOV R9,qword ptr GS:[R10] }
    /* +0xae3fd5 */ __asm { MOV R10W,0xdc5d }
    /* +0xae3fda */ __asm { IMUL R10D,R10D,0x6a0b }
    /* +0xae3fe1 */ __asm { ROL R10W,0xb }
}


// ============================================================================
// Function : Unwind@7fffa5261e10  |  RVA: 0xaf1e10  |  Size: 383 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5261e10(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x298) & 0x1f;
  if ((uint64_t)((0x63a6f3adU >> bVar1 | 0x63a6f3ad << 0x20 - bVar1) ^ *(uint32_t *)(param_2 + 0x58)) <
      *(uint64_t *)(param_2 + 0xb8)) {
    uVar2 = (short)*(uint64_t *)(param_2 + 0x298) - 0x9d7;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x58) & 0xf;
    (*(code *)(&UNK_7fffa568f231 +
              (short)((uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + 0x1560 ^ 0xe74a)))
              (*(uint64_t *)(param_2 + 0x298) & 0xffffffff,param_2,
               *(uint64_t *)(param_2 + 0x100) >> 0x3d ^ *(uint64_t *)(param_2 + 0x100));
  }
  *(uint64_t *)(param_2 + 0x248) = *(uint64_t *)(param_2 + 0x260);
  return;
}


// ============================================================================
// Function : Unwind@7fffa5261f90  |  RVA: 0xaf1f90  |  Size: 424 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5261f90(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  
  if (0x7fffffffffffffef < *(uint64_t *)(param_2 + 0x88)) {
    uVar3 = (int)*(uint64_t *)(param_2 + 0x298) + 0x7074c990U ^
            (uint32_t)*(uint64_t *)(param_2 + 0x58);
    (*(code *)((int64_t)(int)(uVar3 << 10 | uVar3 >> 0x16) + 0x7fffa56978de))
              (*(uint64_t *)(param_2 + 0x298),0xaed60356,
               *(uint64_t *)(param_2 + 0x248) >> 0x3d ^ *(uint64_t *)(param_2 + 0x248));
  }
  uVar2 = ~((uint16_t)*(uint64_t *)(param_2 + 0x298) ^ 0x7d21);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x58) & 0xf;
  (*(code *)((int64_t)(short)(uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + 0x7fffa568dd01))
            (*(uint64_t *)(param_2 + 0x58),*(uint64_t *)(param_2 + 0x298),
             *(uint64_t *)(param_2 + 0x160) >> 0x3d ^ *(uint64_t *)(param_2 + 0x160));
  *(uint64_t *)(param_2 + 0x250) = *(uint64_t *)(param_2 + 0xc0);
  return;
}

