// Subsystem: Internal Routines Cluster 08 (0x9f9710 .. 0xa99560)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa5169710  |  RVA: 0x9f9710  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5169710(void)

{
  code *pcVar1;
  uint8_t bVar2;
  int in_R9D;
  
  bVar2 = (uint8_t)in_R9D & 0xf;
  (*(code *)(&UNK_7fffa47ece2c + ((0x3404832b - in_R9D) * 0x10696127 + -0x378f226)))
            (&UNK_7fffa585fce6 + (short)(-0x2acf << bVar2 | 0xd531U >> 0x10 - bVar2));
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5169770  |  RVA: 0x9f9770  |  Size: 618 bytes
// Callers  : FUN_7fffa5496290@0xd26290
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5488850@0xd18850, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5169770(int64_t param_1,uint64_t param_2,uint16_t *param_3,uint64_t param_4)

{
  uint16_t *puVar1;
  uint16_t uVar2;
  uint8_t auVar3 [32];
  uint8_t auVar4 [32];
  int iVar5;
  uint8_t auVar6 [32];
  uint8_t auVar7 [32];
  uint8_t auVar8 [64];
  uint8_t auStack_1d8 [56];
  uint8_t aauStack_1a0 [2] [16];
  uint8_t auStack_180 [32];
  uint8_t aauStack_160 [4] [32];
  uint8_t auStack_e0 [32];
  uint64_t uStack_60;
  
  uStack_60 = _DAT_7fffa4780040 ^ (uint64_t)auStack_1d8;
  puVar1 = param_3 + param_4;
  if (param_4 < 0x15) {
    auVar8 = ZEXT1664((uint8_t  [16])0x0);
    auStack_180 = auVar8._0_32_;
    while (param_3 != puVar1) {
      uVar2 = *param_3;
      param_3 = param_3 + 1;
      auVar6._2_2_ = 0;
      auVar6._0_2_ = uVar2;
      auVar6._4_2_ = uVar2;
      auVar6._6_2_ = 0;
      auVar6._8_2_ = uVar2;
      auVar6._10_2_ = 0;
      auVar6._12_2_ = uVar2;
      auVar6._14_2_ = 0;
      auVar6._16_2_ = uVar2;
      auVar6._18_2_ = 0;
      auVar6._20_2_ = uVar2;
      auVar6._22_2_ = 0;
      auVar6._24_2_ = uVar2;
      auVar6._26_2_ = 0;
      auVar6._28_2_ = uVar2;
      auVar6._30_2_ = 0;
      auVar6 = vpsllvd_avx2(_DAT_7fffa56b26e0,auVar6 ^ _DAT_7fffa56b2720);
      auStack_180 = vpor_avx2(auVar6,auVar8._0_32_);
      auVar8 = ZEXT3264(auStack_180);
    }
  }
  else {
    FUN_7fffa4ecf8e0(aauStack_160,0,0x100);
    for (; param_3 != puVar1; param_3 = param_3 + 1) {
      aauStack_160[0][*param_3] = 0xff;
    }
    auStack_180 = ZEXT2032(CONCAT416((uint32_t)(SUB321(auStack_e0 >> 7,0) & 1) |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xf,0) & 1) << 1 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x17,0) & 1) << 2 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x1f,0) & 1) << 3 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x27,0) & 1) << 4 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x2f,0) & 1) << 5 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x37,0) & 1) << 6 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x3f,0) & 1) << 7 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x47,0) & 1) << 8 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x4f,0) & 1) << 9 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x57,0) & 1) << 10 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x5f,0) & 1) << 0xb |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x67,0) & 1) << 0xc |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x6f,0) & 1) << 0xd |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x77,0) & 1) << 0xe |
                                     (uint32_t)SUB321(auStack_e0 >> 0x7f,0) << 0xf |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x87,0) & 1) << 0x10 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x8f,0) & 1) << 0x11 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x97,0) & 1) << 0x12 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0x9f,0) & 1) << 0x13 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xa7,0) & 1) << 0x14 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xaf,0) & 1) << 0x15 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xb7,0) & 1) << 0x16 |
                                     (uint32_t)SUB321(auStack_e0 >> 0xbf,0) << 0x17 |
                                     (uint32_t)(SUB321(auStack_e0 >> 199,0) & 1) << 0x18 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xcf,0) & 1) << 0x19 |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xd7,0) & 1) << 0x1a |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xdf,0) & 1) << 0x1b |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xe7,0) & 1) << 0x1c |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xef,0) & 1) << 0x1d |
                                     (uint32_t)(SUB321(auStack_e0 >> 0xf7,0) & 1) << 0x1e |
                                     (uint32_t)(uint8_t)(auStack_e0[0x1f] >> 7) << 0x1f,
                                     ZEXT416((uint32_t)(SUB321(aauStack_160[0] >> 7,0) & 1) |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xf,0) & 1) << 1 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x17,0) & 1) << 2 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x1f,0) & 1) << 3 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x27,0) & 1) << 4 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x2f,0) & 1) << 5 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x37,0) & 1) << 6 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x3f,0) & 1) << 7 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x47,0) & 1) << 8 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x4f,0) & 1) << 9 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x57,0) & 1) << 10 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x5f,0) & 1) << 0xb |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x67,0) & 1) << 0xc |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x6f,0) & 1) << 0xd |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x77,0) & 1) << 0xe |
                                             (uint32_t)SUB321(aauStack_160[0] >> 0x7f,0) << 0xf |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x87,0) & 1) << 0x10 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x8f,0) & 1) << 0x11 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x97,0) & 1) << 0x12 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0x9f,0) & 1) << 0x13 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xa7,0) & 1) << 0x14 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xaf,0) & 1) << 0x15 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xb7,0) & 1) << 0x16 |
                                             (uint32_t)SUB321(aauStack_160[0] >> 0xbf,0) << 0x17 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 199,0) & 1) << 0x18 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xcf,0) & 1) << 0x19 |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xd7,0) & 1) << 0x1a |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xdf,0) & 1) << 0x1b |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xe7,0) & 1) << 0x1c |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xef,0) & 1) << 0x1d |
                                             (uint32_t)(SUB321(aauStack_160[0] >> 0xf7,0) & 1) << 0x1e |
                                             (uint32_t)(uint8_t)(aauStack_160[0][0x1f] >> 7) << 0x1f)));
  }
  do {
    if (param_2 < 8) {
      if ((param_2 & 7) != 0) {
        FUN_7fffa56a5f20(aauStack_1a0,param_1,((uint32_t)param_2 & 7) * 2);
        auVar7 = vpmovzxwd_avx2(aauStack_1a0[0]);
        auVar6 = vpand_avx2(_DAT_7fffa56b2740,auVar7);
        auVar3 = vpandn_avx2(auVar7,_DAT_7fffa56b2700);
        auVar6 = vpcmpeqd_avx2(auVar6,SUB6432(ZEXT1664((uint8_t  [16])0x0),0));
        auVar7 = vpsrld_avx2(auVar7,5);
        auVar7 = vpermd_avx2(auVar7,auStack_180);
        auVar3 = vpsllvd_avx2(auVar7,auVar3);
        auVar6 = vpand_avx2(auVar3,auVar6);
        vmovmskps_avx(auVar6);
      }
      break;
    }
    auVar7 = vpmovzxwd_avx2(*(uint8_t (*) [16])(param_1 + -0x10 + param_2 * 2));
    param_2 = param_2 - 8;
    auVar6 = vpand_avx2(auVar7,_DAT_7fffa56b2740);
    auVar3 = vpcmpeqd_avx2(auVar6,SUB6432(ZEXT1664((uint8_t  [16])0x0),0));
    auVar6 = vpsrld_avx2(auVar7,5);
    auVar4 = vpermd_avx2(auVar6,auStack_180);
    auVar6 = vpandn_avx2(auVar7,_DAT_7fffa56b2700);
    auVar6 = vpsllvd_avx2(auVar4,auVar6);
    auVar6 = vpand_avx2(auVar6,auVar3);
    iVar5 = vmovmskps_avx(auVar6);
  } while (iVar5 == 0xff);
  FUN_7fffa5488850(uStack_60 ^ (uint64_t)auStack_1d8);
  return;
}


// ============================================================================
// Function : FUN_7fffa51699e0  |  RVA: 0x9f99e0  |  Size: 3990 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5169d4f) */
/* WARNING: Removing unreachable block (ram,0x7fffa516a5b7) */
/* WARNING: Removing unreachable block (ram,0x7fffa516a10b) */
/* WARNING: Removing unreachable block (ram,0x7fffa516a703) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x7fffa47bf406 : 0x7fffa516a939 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7fffa51699e0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa47bf3d6 = '\0';
  uRam00007fffa47bf406 = 0;
  auRam00007fffa47bf3f0 = (uint8_t  [16])0x0;
  auRam00007fffa47bf3e0 = (uint8_t  [16])0x0;
  lVar2 = rdtsc();
  lVar2 = lVar2 * 0x167738c259c0142;
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 3;
    lVar2 = lVar2 * 0x167738c259c0142 + 0x167738c259c0142;
    *(char *)(lVar4 + 0x7fffa47bf3c8) = (char)((uint64_t)lVar2 >> 0x20);
    lVar3 = lVar2 * 0x167738c259c0142 + 0x167738c259c0142;
    lVar2 = lVar3 * 0x167738c259c0142 + 0x167738c259c0142;
    *(char *)(lVar4 + 0x7fffa47bf3ca) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar4 + 0x7fffa47bf3c9) = (char)((uint64_t)lVar3 >> 0x20);
    lVar4 = lVar1;
  } while (lVar1 != 0x51);
  bRam00007fffa47bf3d6 = bRam00007fffa47bf3d6 + 1 & 3;
  *(uint64_t *)(auRam00007fffa47bf3e0 + (uint64_t)bRam00007fffa47bf3d6 * 8) =
       uRam00007fffa47bf406;
  return;
}


// ============================================================================
// Function : FUN_7fffa516a980  |  RVA: 0x9fa980  |  Size: 613 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa516a980(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa47bb25c = '\0';
  uRam00007fffa47bb26f = 0;
  uRam00007fffa47bb277 = 0;
  uRam00007fffa47bb25f = 0;
  uRam00007fffa47bb267 = 0;
  uRam00007fffa47bb28d = 0;
  uVar1 = rdtsc();
  lVar3 = 4;
  lVar2 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0x5d478c2fed09c73;
  do {
    *(char *)(lVar3 + 0x7fffa47bb253) = (char)((uint64_t)(lVar2 * 0xc8e8899591) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb251) = (char)((uint64_t)(lVar2 * 0xbece7c5ba9) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb250) = (char)((uint64_t)(lVar2 * 0xc2fed09c73) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb254) = (char)((uint64_t)(lVar2 * -0x7a3057fa4f3d73dd) >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bb252) = (char)((uint64_t)(lVar2 * 0x98b10828eb) >> 0x20);
    lVar3 = lVar3 + 5;
    lVar2 = lVar2 * -0x7a3057fa4f3d73dd;
  } while (lVar3 != 0x45);
  bRam00007fffa47bb25c = bRam00007fffa47bb25c + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa47bb25c * 8 + 0x7fffa47bb25f) = ~uRam00007fffa47bb28d;
  return;
}


// ============================================================================
// Function : FUN_7fffa516abf0  |  RVA: 0x9fabf0  |  Size: 1 bytes
// Callers  : FUN_7fffa56962a0@0xf262a0
// Callees  : none
// ============================================================================
void FUN_7fffa516abf0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa516ac00  |  RVA: 0x9fac00  |  Size: 180 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa516ac00(void) {
    /* +0x9fac00 */ __asm { PUSH RBP }
    /* +0x9fac01 */ __asm { PUSH R13 }
    /* +0x9fac03 */ __asm { PUSH RSI }
    /* +0x9fac04 */ __asm { PUSH RDI }
    /* +0x9fac05 */ __asm { PUSH R14 }
    /* +0x9fac07 */ __asm { PUSH R12 }
    /* +0x9fac09 */ __asm { PUSH R15 }
    /* +0x9fac0b */ __asm { PUSH RBX }
    /* +0x9fac0c */ __asm { SUB RSP,0x5d8 }
    /* +0x9fac13 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x9fac1b */ __asm { MOVAPS xmmword ptr [RBP + 0x540],XMM6 }
    /* +0x9fac22 */ __asm { MOVDQA xmmword ptr [RBP + 0x530],XMM15 }
    /* +0x9fac2b */ __asm { MOVAPS xmmword ptr [RBP + 0x520],XMM14 }
    /* +0x9fac33 */ __asm { MOVAPS xmmword ptr [RBP + 0x510],XMM9 }
    /* +0x9fac3b */ __asm { MOVAPS xmmword ptr [RBP + 0x500],XMM13 }
    /* +0x9fac43 */ __asm { MOVAPS xmmword ptr [RBP + 0x4f0],XMM11 }
    /* +0x9fac4b */ __asm { MOVDQA xmmword ptr [RBP + 0x4e0],XMM12 }
    /* +0x9fac54 */ __asm { MOVAPS xmmword ptr [RBP + 0x4d0],XMM10 }
    /* +0x9fac5c */ __asm { MOVAPS xmmword ptr [RBP + 0x4c0],XMM7 }
    /* +0x9fac63 */ __asm { MOVAPS xmmword ptr [RBP + 0x4b0],XMM8 }
    /* +0x9fac6b */ __asm { MOV qword ptr [RBP + 0x4a8],-0x2 }
    /* +0x9fac76 */ __asm { MOV RAX,R9 }
    /* +0x9fac79 */ __asm { ROL RAX,0x36 }
    /* +0x9fac7d */ __asm { MOV R13,R10 }
    /* +0x9fac80 */ __asm { MOV R11,R9 }
    /* +0x9fac83 */ __asm { ROL R11,0x20 }
    /* +0x9fac87 */ __asm { XOR R11,RAX }
    /* +0x9fac8a */ __asm { XOR R11,R9 }
    /* +0x9fac8d */ __asm { ROL R11,0x14 }
    /* +0x9fac91 */ __asm { MOV dword ptr [RBP + 0x30],0x9dc0966b }
    /* +0x9fac98 */ __asm { MOV R8D,dword ptr [RBP + 0x30] }
    /* +0x9fac9c */ __asm { CMP R8D,0xf547f05f }
    /* +0x9faca3 */ __asm { NOP }
    /* +0x9faca4 */ __asm { NOP }
    /* +0x9faca5 */ __asm { NOP }
    /* +0x9faca6 */ __asm { NOP }
    /* +0x9faca7 */ __asm { NOP }
    /* +0x9faca8 */ __asm { NOP }
    /* +0x9faca9 */ __asm { NOP }
    /* +0x9facaa */ __asm { NOP }
    /* +0x9facab */ __asm { NOP }
    /* +0x9facac */ __asm { NOP }
    /* +0x9facad */ __asm { NOP }
    /* +0x9facae */ __asm { NOP }
    /* +0x9facaf */ __asm { NOP }
    /* +0x9facb0 */ __asm { NOP }
    /* +0x9facb1 */ __asm { NOP }
    /* +0x9facb2 */ __asm { NOP }
    /* +0x9facb3 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa5173e70  |  RVA: 0xa03e70  |  Size: 366 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5173e70(uint64_t param_1,int64_t param_2)

{
  bool bVar1;
  uint16_t uVar2;
  int iVar3;
  
  iVar3 = (int)*(uint64_t *)(param_2 + 0x508);
  bVar1 = 0xf < *(uint64_t *)(param_2 + 200);
  if (0xffffffffceb54071 < (uint64_t)(0x87d997fb - iVar3)) {
    bVar1 = *(uint64_t *)(param_2 + 200) != 0xf;
  }
  if (bVar1) {
    iVar3 = 0xfb49 - iVar3;
    uVar2 = (uint16_t)iVar3;
    uVar2 = uVar2 << 0xc | uVar2 >> 4;
    (*(code *)((int64_t)(short)uVar2 + 0x7fffa56898e8))
              (*(uint64_t *)(param_2 + 0x508),CONCAT22((short)((uint32_t)iVar3 >> 0x10),uVar2),
               *(uint64_t *)(param_2 + 0xb0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xb0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa5173fe0  |  RVA: 0xa03fe0  |  Size: 2875 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa5173fe0(void) {
    /* +0xa03fe0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xa03fe5 */ __asm { PUSH RBP }
    /* +0xa03fe6 */ __asm { PUSH R13 }
    /* +0xa03fe8 */ __asm { PUSH RSI }
    /* +0xa03fe9 */ __asm { PUSH RDI }
    /* +0xa03fea */ __asm { PUSH R14 }
    /* +0xa03fec */ __asm { PUSH R12 }
    /* +0xa03fee */ __asm { PUSH R15 }
    /* +0xa03ff0 */ __asm { PUSH RBX }
    /* +0xa03ff1 */ __asm { SUB RSP,0xe8 }
    /* +0xa03ff8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xa03fff */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM6 }
    /* +0xa04005 */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM15 }
    /* +0xa0400c */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM14 }
    /* +0xa04013 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM9 }
    /* +0xa0401a */ __asm { MOVAPS xmmword ptr [RSP + 0x80],XMM13 }
    /* +0xa04023 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM11 }
    /* +0xa0402d */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM12 }
    /* +0xa04037 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM10 }
    /* +0xa04041 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM7 }
    /* +0xa0404a */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM8 }
    /* +0xa04054 */ __asm { LEA R10,[0x7fffa5693fef] }
    /* +0xa0405b */ __asm { MOV EDX,0x5f45d57f }
    /* +0xa04060 */ __asm { XOR EDX,0x308fca4c }
    /* +0xa04066 */ __asm { IMUL EDX,dword ptr [RBP + -0x20] }
    /* +0xa0406a */ __asm { MOV RAX,qword ptr [RBP + 0x170] }
    /* +0xa04071 */ __asm { MOV R8,RAX }
    /* +0xa04074 */ __asm { SHR R8,0x3d }
    /* +0xa04078 */ __asm { XOR R8,RAX }
    /* +0xa0407b */ __asm { MOVSXD RAX,EDX }
    /* +0xa0407e */ __asm { ADD RAX,R10 }
    /* +0xa04081 */ __asm { MOV DX,0x64f }
    /* +0xa04085 */ __asm { MOV R9D,0x651 }
    /* +0xa0408b */ __asm { SUB R9D,EDX }
    /* +0xa0408e */ __asm { MOVZX EBX,R9W }
    /* +0xa04092 */ __asm { MOV R11D,0x7974e41 }
    /* +0xa04098 */ __asm { XOR R11D,0x2a5d504a }
    /* +0xa0409f */ __asm { MOV R14,qword ptr [RBP + 0x488] }
    /* +0xa040a6 */ __asm { MOV ECX,R14D }
    /* +0xa040a9 */ __asm { ROR R11D,CL }
    /* +0xa040ac */ __asm { CALL RAX }
    /* +0xa040ae */ __asm { MOV R10,qword ptr [RBP + 0x330] }
    /* +0xa040b5 */ __asm { RDTSC }
    /* +0xa040b7 */ __asm { SHL RDX,0x20 }
    /* +0xa040bb */ __asm { OR RDX,RAX }
    /* +0xa040be */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xa040c8 */ __asm { IMUL RDX,R9 }
    /* +0xa040cc */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xa040d6 */ __asm { ADD RCX,RDX }
    /* +0xa040d9 */ __asm { MOV RDX,RCX }
    /* +0xa040dc */ __asm { SHR RDX,0x2d }
    /* +0xa040e0 */ __asm { MOV R8,RCX }
    /* +0xa040e3 */ __asm { SHR R8,0x1b }
    /* +0xa040e7 */ __asm { XOR R8D,EDX }
    /* +0xa040ea */ __asm { SHR RCX,0x3b }
    /* +0xa040ee */ __asm { ROR R8D,CL }
    /* +0xa040f1 */ __asm { AND R8D,0x3 }
    /* +0xa040f5 */ __asm { CMP R8D,EBX }
    /* +0xa040f8 */ __asm { JNC 0x7fffa5174235 }
    /* +0xa040fe */ __asm { CMP R8D,0x1 }
    /* +0xa04102 */ __asm { JNZ 0x7fffa51744cb }
    /* +0xa04108 */ __asm { MOV RAX,0x0 }
    /* +0xa0410f */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xa04116 */ __asm { NOP }
    /* +0xa04117 */ __asm { MOV EAX,0x135b5b60 }
    /* +0xa0411c */ __asm { MOV RCX,0x3dcb7b6edf67370d }
    /* +0xa04126 */ __asm { CMP RAX,RCX }
    /* +0xa04129 */ __asm { NOP }
    /* +0xa0412a */ __asm { NOP }
    /* +0xa0412b */ __asm { NOP }
    /* +0xa0412c */ __asm { MOVZX R8D,uint8_t ptr [RAX + 0x6ca2a6e0] }
    /* +0xa04134 */ __asm { RDTSC }
    /* +0xa04136 */ __asm { SHL RDX,0x20 }
    /* +0xa0413a */ __asm { OR RDX,RAX }
    /* +0xa0413d */ __asm { TEST R8B,0x1 }
    /* +0xa04141 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xa0414b */ __asm { JNZ 0x7fffa517482e }
    /* +0xa04151 */ __asm { MOV EAX,0x42cbc6ba }
    /* +0xa04156 */ __asm { SUB EAX,R14D }
    /* +0xa04159 */ __asm { MOV RCX,-0x5851f42d4c957f2d }
    /* +0xa04163 */ __asm { ADD RCX,RDX }
    /* +0xa04166 */ __asm { ROL EAX,0xb }
    /* +0xa04169 */ __asm { MOV R11,0x5851f42d4c957f2d }
    /* +0xa04173 */ __asm { IMUL R11,RDX }
    /* +0xa04177 */ __asm { NOT EAX }
    /* +0xa04179 */ __asm { MOV R8D,0x2c0144e9 }
    /* +0xa0417f */ __asm { ADD R8D,0x4db32eaf }
    /* +0xa04186 */ __asm { MOVD XMM5,R8D }
    /* +0xa0418b */ __asm { MOVDQA XMM2,xmmword ptr [RBP + 0x310] }
    /* +0xa04193 */ __asm { PMULUDQ XMM2,XMM5 }
    /* +0xa04197 */ __asm { MOVD EDX,XMM2 }
    /* +0xa0419b */ __asm { CMP RAX,RDX }
    /* +0xa0419e */ __asm { CMOVNZ R11,RCX }
    /* +0xa041a2 */ __asm { MOV RAX,0x42fe8908f2ae81c6 }
    /* +0xa041ac */ __asm { ADD R11,RAX }
    /* +0xa041af */ __asm { MOV RCX,R11 }
    /* +0xa041b2 */ __asm { SHR RCX,0x3b }
    /* +0xa041b6 */ __asm { MOV RAX,R11 }
    /* +0xa041b9 */ __asm { SHR RAX,0x2d }
    /* +0xa041bd */ __asm { SHR R11,0x1b }
    /* +0xa041c1 */ __asm { XOR EAX,R11D }
    /* +0xa041c4 */ __asm { ROR EAX,CL }
    /* +0xa041c6 */ __asm { MOV dword ptr [RBP + 0x30],0x712e424 }
    /* +0xa041cd */ __asm { MOV R8D,dword ptr [RBP + 0x30] }
    /* +0xa041d1 */ __asm { CMP R8D,0x7962b2bb }
    /* +0xa041d8 */ __asm { NOP }
    /* +0xa041d9 */ __asm { NOP }
    /* +0xa041da */ __asm { NOP }
    /* +0xa041db */ __asm { NOP }
    /* +0xa041dc */ __asm { NOP }
    /* +0xa041dd */ __asm { CMP EAX,0x11185c }
    /* +0xa041e2 */ __asm { NOP }
    /* +0xa041e3 */ __asm { NOP }
    /* +0xa041e4 */ __asm { NOP }
    /* +0xa041e5 */ __asm { NOP }
    /* +0xa041e6 */ __asm { NOP }
    /* +0xa041e7 */ __asm { NOP }
    /* +0xa041e8 */ __asm { NOP }
    /* +0xa041e9 */ __asm { NOP }
    /* +0xa041ea */ __asm { NOP }
    /* +0xa041eb */ __asm { NOP }
    /* +0xa041ec */ __asm { NOP }
    /* +0xa041ed */ __asm { NOP }
    /* +0xa041ee */ __asm { NOP }
    /* +0xa041ef */ __asm { NOP }
    /* +0xa041f0 */ __asm { NOP }
    /* +0xa041f1 */ __asm { NOP }
    /* +0xa041f2 */ __asm { NOP }
    /* +0xa04216 */ __asm { MOV R9,0x0 }
    /* +0xa0421d */ __asm { NOP }
    /* +0xa0421f */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xa04226 */ __asm { MOV qword ptr [RBP + 0x30],R9 }
    /* +0xa0422a */ __asm { MOV EAX,dword ptr [RAX + -0x4e61] }
    /* +0xa04230 */ __asm { JMP 0x7fffa5174b36 }
    /* +0xa04235 */ __asm { CMP R8D,0x3 }
    /* +0xa04239 */ __asm { JNZ 0x7fffa5174757 }
    /* +0xa0423f */ __asm { MOV EAX,0x9f13a816 }
    /* +0xa04244 */ __asm { MOV RCX,-0x52e9baea65df855b }
    /* +0xa0424e */ __asm { CMP RAX,RCX }
    /* +0xa04251 */ __asm { JZ 0x7fffa5174b02 }
    /* +0xa04257 */ __asm { CMP dword ptr [RAX + -0x1f15a456],0xd }
    /* +0xa0425e */ __asm { JC 0x7fffa5174b12 }
    /* +0xa04264 */ __asm { MOV RCX,0x74531ca7ca1805d5 }
    /* +0xa0426e */ __asm { RDTSC }
    /* +0xa04270 */ __asm { SHL RDX,0x20 }
    /* +0xa04274 */ __asm { OR RDX,RAX }
    /* +0xa04277 */ __asm { MOV RAX,-0x4a9b10dd1385131b }
    /* +0xa04281 */ __asm { IMUL RDX,RAX }
    /* +0xa04285 */ __asm { MOV EAX,0xb5334ad3 }
    /* +0xa0428a */ __asm { IMUL RAX,RCX }
    /* +0xa0428e */ __asm { XOR RAX,-0xbb466a6 }
    /* +0xa04294 */ __asm { SUB RAX,R14 }
    /* +0xa04297 */ __asm { ADD RAX,RDX }
    /* +0xa0429a */ __asm { MOV RCX,RAX }
    /* +0xa0429d */ __asm { SHR RCX,0x3b }
    /* +0xa042a1 */ __asm { MOV RDX,RAX }
    /* +0xa042a4 */ __asm { SHR RDX,0x2d }
    /* +0xa042a8 */ __asm { SHR RAX,0x1b }
    /* +0xa042ac */ __asm { XOR EAX,EDX }
    /* +0xa042ae */ __asm { ROR EAX,CL }
    /* +0xa042b0 */ __asm { PUSHFQ }
    /* +0xa042b1 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa042b9 */ __asm { POPFQ }
    /* +0xa042ba */ __asm { MOV dword ptr [RBP + 0x30],0x43503830 }
    /* +0xa042c1 */ __asm { MOV R8D,dword ptr [RBP + 0x30] }
    /* +0xa042c5 */ __asm { TEST R8D,R8D }
    /* +0xa042c8 */ __asm { NOP }
    /* +0xa042c9 */ __asm { NOP }
    /* +0xa042ca */ __asm { NOP }
    /* +0xa042cb */ __asm { NOP }
    /* +0xa042cc */ __asm { NOP }
    /* +0xa042cd */ __asm { CMP EAX,0x463c9d }
    /* +0xa042d2 */ __asm { JA 0x7fffa517449b }
    /* +0xa042d8 */ __asm { MOV R12,R10 }
    /* +0xa042db */ __asm { MOV CX,0x695a }
    /* +0xa042df */ __asm { MOVZX EAX,CX }
    /* +0xa042e2 */ __asm { XOR RAX,0x693a }
    /* +0xa042e8 */ __asm { MOV R10,-0x4a88547 }
    /* +0xa042ef */ __asm { ADD R10,qword ptr GS:[RAX] }
    /* +0xa042f3 */ __asm { XOR R10,0x1c05c953 }
    /* +0xa042fa */ __asm { MOV RAX,-0x359e622cdae9dbbb }
    /* +0xa04304 */ __asm { CMP R10,RAX }
    /* +0xa04307 */ __asm { JZ 0x7fffa5174af2 }
    /* +0xa0430d */ __asm { MOV EAX,0x5fffa32d }
    /* +0xa04312 */ __asm { MOV R9,RAX }
    /* +0xa04315 */ __asm { ROL R9,0x16 }
    /* +0xa04319 */ __asm { ADD R9,-0x6b8bf08e }
    /* +0xa04320 */ __asm { XOR R9,-0x78e3e2ce }
    /* +0xa04327 */ __asm { MOV R10,0x1b1a39dbc804cb7e }
    /* +0xa04331 */ __asm { CMP R9,R10 }
    /* +0xa04334 */ __asm { NOP }
    /* +0xa04335 */ __asm { NOP }
    /* +0xa04336 */ __asm { NOP }
    /* +0xa04337 */ __asm { NOP }
    /* +0xa04338 */ __asm { NOP }
    /* +0xa04339 */ __asm { NOP }
    /* +0xa0433a */ __asm { NOP }
    /* +0xa0433b */ __asm { NOP }
    /* +0xa0433c */ __asm { NOP }
    /* +0xa0433d */ __asm { NOP }
    /* +0xa0433e */ __asm { MOV R10,qword ptr [RAX + 0x1ffe5cdb] }
    /* +0xa04345 */ __asm { MOV RAX,R10 }
    /* +0xa04348 */ __asm { MOV RCX,0x2e7452a8b5303300 }
    /* +0xa04352 */ __asm { MUL RCX }
    /* +0xa04355 */ __asm { MOV RCX,RDX }
    /* +0xa04358 */ __asm { MOV EDX,0x1472c10 }
    /* +0xa0435d */ __asm { MOV RAX,R10 }
    /* +0xa04360 */ __asm { MUL RDX }
    /* +0xa04363 */ __asm { ADD RAX,RCX }
    /* +0xa04366 */ __asm { ADC RDX,0x0 }
    /* +0xa0436a */ __asm { TEST DL,0x1 }
    /* +0xa0436d */ __asm { MOV R10,R12 }
    /* +0xa04370 */ __asm { MOV R14,qword ptr [RBP + 0x488] }
    /* +0xa04377 */ __asm { JZ 0x7fffa517449b }
    /* +0xa0437d */ __asm { PUSHFQ }
    /* +0xa0437e */ __asm { POP R8 }
    /* +0xa04380 */ __asm { PXOR XMM5,XMM5 }
    /* +0xa04384 */ __asm { MOVDQA xmmword ptr [RBP + 0x30],XMM5 }
    /* +0xa04389 */ __asm { TEST R8D,0x100 }
    /* +0xa04390 */ __asm { JZ 0x7fffa5174397 }
    /* +0xa04392 */ __asm { JP 0x7fffa5174380 }
    /* +0xa04394 */ __asm { AND dword ptr [RSI + 0x1c],EBX }
    /* +0xa04397 */ __asm { MOV R8D,0xf6b74faa }
    /* +0xa0439d */ __asm { ADD R8D,0x4e480a76 }
    /* +0xa043a4 */ __asm { XOR R8D,0xe13f8829 }
    /* +0xa043ab */ __asm { MOV dword ptr [RBP + 0x360],R8D }
    /* +0xa043b2 */ __asm { MOV R8D,dword ptr [RBP + 0x360] }
    /* +0xa043b9 */ __asm { CMP R8D,0x2dd67222 }
    /* +0xa043c0 */ __asm { JBE 0x7fffa5174b98 }
    /* +0xa043c6 */ __asm { MOV dword ptr [RBP + 0x30],0x0 }
    /* +0xa043cd */ __asm { MOV dword ptr [RBP + 0x360],0xfa63e70 }
    /* +0xa043d7 */ __asm { MOV R8D,dword ptr [RBP + 0x360] }
    /* +0xa043de */ __asm { TEST R8B,0x1 }
    /* +0xa043e2 */ __asm { JNZ 0x7fffa5174b9f }
    /* +0xa043e8 */ __asm { PUSHFQ }
    /* +0xa043e9 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa043f1 */ __asm { POPFQ }
    /* +0xa043f2 */ __asm { MOV dword ptr [RBP + 0x360],0x4a18c7d3 }
    /* +0xa043fc */ __asm { MOV R8D,dword ptr [RBP + 0x360] }
    /* +0xa04403 */ __asm { CMP R8D,0x7c2f7b93 }
    /* +0xa0440a */ __asm { JNC 0x7fffa5174bb3 }
    /* +0xa04410 */ __asm { LEA RAX,[0x7fffa4785739] }
    /* +0xa04417 */ __asm { NOP }
    /* +0xa04419 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xa04420 */ __asm { MOV R9,0x0 }
    /* +0xa04427 */ __asm { MOV R10,0x6fc70652df999f19 }
    /* +0xa04431 */ __asm { CMP RAX,R10 }
    /* +0xa04434 */ __asm { JZ 0x7fffa5174bbb }
    /* +0xa0443a */ __asm { MOV R8W,0x282e }
    /* +0xa0443f */ __asm { MOV EDX,0x72005c66 }
    /* +0xa04444 */ __asm { IMUL R11D,EDX,0x44dc3657 }
    /* +0xa0444b */ __asm { MOV qword ptr [RBP + 0x360],R9 }
    /* +0xa04452 */ __asm { MOV R10W,0x3531 }
    /* +0xa04457 */ __asm { XOR R8D,0x283e }
    /* +0xa0445e */ __asm { MOV R14,qword ptr [RBP + 0x488] }
    /* +0xa04465 */ __asm { MOV ECX,R14D }
    /* +0xa04468 */ __asm { ROL R8W,CL }
    /* +0xa0446c */ __asm { LEA EDX,[R14 + R10*0x1] }
    /* +0xa04470 */ __asm { ADD EDX,0x43c }
    /* +0xa04476 */ __asm { MOVZX EDX,DX }
    /* +0xa04479 */ __asm { ROL R8W,0x5 }
    /* +0xa0447e */ __asm { MOVZX R9D,R8W }
    /* +0xa04482 */ __asm { ADD R11D,0xaebb1555 }
    /* +0xa04489 */ __asm { MOV EAX,dword ptr [RAX + -0x111d] }
    /* +0xa0448f */ __asm { MOVSXD R10,R11D }
    /* +0xa04492 */ __asm { LEA R8,[RBP + 0x30] }
    /* +0xa04496 */ __asm { SYSCALL }
    /* +0xa04498 */ __asm { MOV R10,R12 }
    /* +0xa0449b */ __asm { LEA RAX,[0x7fffa4788d3d] }
    /* +0xa044a2 */ __asm { MOV RCX,-0x576feab4547f2c11 }
    /* +0xa044ac */ __asm { SUB RCX,R14 }
    /* +0xa044af */ __asm { ROL RCX,0x36 }
    /* +0xa044b3 */ __asm { CMP RAX,RCX }
    /* +0xa044b6 */ __asm { JZ 0x7fffa5174bc3 }
    /* +0xa044bc */ __asm { MOV qword ptr [RBP + 0x30],R9 }
    /* +0xa044c0 */ __asm { MOV EAX,dword ptr [RAX + -0x3ee1] }
    /* +0xa044c6 */ __asm { JMP 0x7fffa5174b36 }
    /* +0xa044cb */ __asm { MOV R8D,0x741ffb7a }
    /* +0xa044d1 */ __asm { SUB R8D,R14D }
    /* +0xa044d4 */ __asm { RDTSC }
    /* +0xa044d6 */ __asm { SHL RDX,0x20 }
    /* +0xa044da */ __asm { OR RDX,RAX }
    /* +0xa044dd */ __asm { PUSHFQ }
    /* +0xa044de */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa044e6 */ __asm { POPFQ }
    /* +0xa044e7 */ __asm { IMUL RDX,R9 }
    /* +0xa044eb */ __asm { MOV RAX,0x5eebb758f05d2a9a }
    /* +0xa044f5 */ __asm { ADD RDX,RAX }
    /* +0xa044f8 */ __asm { MOV RCX,RDX }
    /* +0xa044fb */ __asm { SHR RCX,0x3b }
    /* +0xa044ff */ __asm { MOVQ XMM5,RDX }
    /* +0xa04504 */ __asm { SHR RDX,0x2d }
    /* +0xa04508 */ __asm { ROL R8D,0x14 }
    /* +0xa0450c */ __asm { MOVD XMM2,EDX }
    /* +0xa04510 */ __asm { PSRLQ XMM5,0x1b }
    /* +0xa04515 */ __asm { PXOR XMM5,XMM2 }
    /* +0xa04519 */ __asm { MOVD EDX,XMM5 }
    /* +0xa0451d */ __asm { ROR EDX,CL }
    /* +0xa0451f */ __asm { NOT R8D }
    /* +0xa04522 */ __asm { MOV dword ptr [RBP + 0x30],R8D }
    /* +0xa04526 */ __asm { MOV R8D,dword ptr [RBP + 0x30] }
    /* +0xa0452a */ __asm { CMP R8D,0x45739538 }
    /* +0xa04531 */ __asm { NOP }
    /* +0xa04532 */ __asm { NOP }
    /* +0xa04533 */ __asm { NOP }
    /* +0xa04534 */ __asm { NOP }
    /* +0xa04535 */ __asm { NOP }
    /* +0xa04536 */ __asm { CMP EDX,0x4613623 }
    /* +0xa0453c */ __asm { JA 0x7fffa517472b }
    /* +0xa04542 */ __asm { MOV dword ptr [RBP + 0x30],0xdde596e4 }
    /* +0xa04549 */ __asm { MOV R8D,dword ptr [RBP + 0x30] }
    /* +0xa0454d */ __asm { MOV EAX,0xbfb3e253 }
    /* +0xa04552 */ __asm { MOV RCX,-0x499901cbcefa98bb }
    /* +0xa0455c */ __asm { IMUL RCX,RAX }
    /* +0xa04560 */ __asm { MOV RDX,-0x919d94bd }
    /* +0xa0456a */ __asm { ADD RDX,RCX }
    /* +0xa0456d */ __asm { MOV RCX,0x66cf9ba49a4e7505 }
    /* +0xa04577 */ __asm { CMP RDX,RCX }
    /* +0xa0457a */ __asm { JZ 0x7fffa5174bcc }
    /* +0xa04580 */ __asm { MOV R8D,0x5abd20cb }
    /* +0xa04586 */ __asm { MOV EDX,0xda59fb3b }
    /* +0xa0458b */ __asm { MOVD XMM5,EDX }
    /* +0xa0458f */ __asm { MOVDQA XMM2,xmmword ptr [RBP + 0x20] }
    /* +0xa04594 */ __asm { PADDD XMM2,XMM5 }
    /* +0xa04598 */ __asm { MOVD EDX,XMM2 }
    /* +0xa0459c */ __asm { IMUL EDX,EDX,-0xb2a0445 }
    /* +0xa045a2 */ __asm { IMUL ECX,R8D,-0x20aa4323 }
    /* +0xa045a9 */ __asm { ADD ECX,R14D }
    /* +0xa045ac */ __asm { ADD ECX,0xc7b4fa30 }
    /* +0xa045b2 */ __asm { CMP RCX,RDX }
    /* +0xa045b5 */ __asm { SETA R8B }
    /* +0xa045b9 */ __asm { MOV EAX,dword ptr [RAX + -0x3fb5df8f] }
    /* +0xa045bf */ __asm { MOV RCX,0x5555555555555556 }
    /* +0xa045c9 */ __asm { IMUL RAX,RCX }
    /* +0xa045cd */ __asm { MOV RCX,0x5555555555555555 }
    /* +0xa045d7 */ __asm { CMP RAX,RCX }
    /* +0xa045da */ __asm { SETA R11B }
    /* +0xa045de */ __asm { CMP R8B,R11B }
    /* +0xa045e1 */ __asm { JZ 0x7fffa517472b }
    /* +0xa045e7 */ __asm { MOV R12,R10 }
    /* +0xa045ea */ __asm { MOV DX,0x89d2 }
    /* +0xa045ee */ __asm { XOR EDX,0xffffe2f2 }
    /* +0xa045f4 */ __asm { PXOR XMM5,XMM5 }
    /* +0xa045f8 */ __asm { MOVDQA xmmword ptr [RBP + 0x30],XMM5 }
    /* +0xa045fd */ __asm { MOV R8D,R14D }
    /* +0xa04600 */ __asm { OR R8D,0x1 }
    /* +0xa04604 */ __asm { IMUL EDX,R8D }
    /* +0xa04608 */ __asm { MOVZX EAX,DX }
    /* +0xa0460b */ __asm { MOV R10,qword ptr GS:[RAX] }
    /* +0xa0460f */ __asm { MOV EAX,0x71d721c9 }
    /* +0xa04614 */ __asm { XOR EAX,0x76a45706 }
    /* +0xa04619 */ __asm { ROL EAX,0x1a }
    /* +0xa0461c */ __asm { MOV R10,qword ptr [R10 + 0x18] }
    /* +0xa04620 */ __asm { XOR EAX,R14D }
    /* +0xa04623 */ __asm { SUB R10,qword ptr [RAX] }
    /* +0xa04626 */ __asm { ADD R10,-0x735ec4f1 }
    /* +0xa0462d */ __asm { ROL R10,0x12 }
    /* +0xa04631 */ __asm { XOR R10,0x7f151459 }
    /* +0xa04638 */ __asm { MOV RAX,0x75eabb35c9ad5903 }
    /* +0xa04642 */ __asm { CMP R10,RAX }
    /* +0xa04645 */ __asm { NOP }
    /* +0xa04646 */ __asm { NOP }
    /* +0xa04647 */ __asm { NOP }
    /* +0xa04648 */ __asm { NOP }
    /* +0xa04649 */ __asm { NOP }
    /* +0xa0464a */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xa04651 */ __asm { MOV RAX,0x0 }
    /* +0xa04658 */ __asm { NOP }
    /* +0xa04659 */ __asm { MOV dword ptr [RBP + 0x30],0x0 }
    /* +0xa04660 */ __asm { MOV dword ptr [RBP + 0x360],0x525f263f }
    /* +0xa0466a */ __asm { MOV EDX,dword ptr [RBP + 0x360] }
    /* +0xa04670 */ __asm { CMP EDX,0xb31abe76 }
    /* +0xa04676 */ __asm { NOP }
    /* +0xa04677 */ __asm { NOP }
    /* +0xa04678 */ __asm { NOP }
    /* +0xa04679 */ __asm { NOP }
    /* +0xa0467a */ __asm { NOP }
    /* +0xa0467b */ __asm { PUSHFQ }
    /* +0xa0467c */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa04684 */ __asm { POPFQ }
    /* +0xa04685 */ __asm { MOV dword ptr [RBP + 0x360],0xd46cd788 }
    /* +0xa0468f */ __asm { MOV EDX,dword ptr [RBP + 0x360] }
    /* +0xa04695 */ __asm { CMP EDX,0xd8046760 }
    /* +0xa0469b */ __asm { NOP }
    /* +0xa0469c */ __asm { NOP }
    /* +0xa0469d */ __asm { NOP }
    /* +0xa0469e */ __asm { NOP }
    /* +0xa0469f */ __asm { NOP }
    /* +0xa046a0 */ __asm { LEA RAX,[0x7fffa47c17ea] }
    /* +0xa046a7 */ __asm { MOV R10,-0x3fdd18a390a79bb7 }
    /* +0xa046b1 */ __asm { CMP RAX,R10 }
    /* +0xa046b4 */ __asm { NOP }
    /* +0xa046b5 */ __asm { NOP }
    /* +0xa046b6 */ __asm { NOP }
    /* +0xa046b7 */ __asm { NOP }
    /* +0xa046b8 */ __asm { NOP }
    /* +0xa046b9 */ __asm { MOV DX,0xabfd }
    /* +0xa046bd */ __asm { MOV R9W,0xaad5 }
    /* +0xa046c2 */ __asm { IMUL R9D,R9D,-0x3e7d }
    /* +0xa046c9 */ __asm { MOV RCX,qword ptr [RBP + 0x488] }
    /* +0xa046d0 */ __asm { ROR R9W,CL }
    /* +0xa046d4 */ __asm { MOV R11W,0x8e6d }
    /* +0xa046d9 */ __asm { IMUL R8D,R11D }
    /* +0xa046dd */ __asm { ADD EDX,0x1a9e }
    /* +0xa046e3 */ __asm { XOR EDX,ECX }
    /* +0xa046e5 */ __asm { ROR DX,0x1 }
    /* +0xa046e8 */ __asm { MOVSX R10,R9W }
    /* +0xa046ec */ __asm { ADD R8D,0xffffbc61 }
    /* +0xa046f3 */ __asm { ROL R8W,0x9 }
    /* +0xa046f8 */ __asm { MOVZX R9D,DX }
    /* +0xa046fc */ __asm { MOVZX EDX,R8W }
    /* +0xa04700 */ __asm { MOV R8D,0x8e990e0a }
    /* +0xa04706 */ __asm { XOR R8D,ECX }
    /* +0xa04709 */ __asm { ADD R8D,0x1d9ff74e }
    /* +0xa04710 */ __asm { ROL R8D,0x12 }
    /* +0xa04714 */ __asm { MOVSXD RCX,R8D }
    /* +0xa04717 */ __asm { MOV qword ptr [RBP + 0x360],R8 }
    /* +0xa0471e */ __asm { MOV EAX,dword ptr [RCX + RAX*0x1 + 0x74] }
    /* +0xa04722 */ __asm { LEA R8,[RBP + 0x30] }
    /* +0xa04726 */ __asm { SYSCALL }
    /* +0xa04728 */ __asm { MOV R10,R12 }
    /* +0xa0472b */ __asm { LEA RAX,[0x7fffa4784a93] }
    /* +0xa04732 */ __asm { MOV RCX,-0x51afb7997d83465d }
    /* +0xa0473c */ __asm { CMP RAX,RCX }
    /* +0xa0473f */ __asm { NOP }
    /* +0xa04740 */ __asm { NOP }
    /* +0xa04741 */ __asm { NOP }
    /* +0xa04742 */ __asm { NOP }
    /* +0xa04743 */ __asm { NOP }
    /* +0xa04744 */ __asm { NOP }
    /* +0xa04745 */ __asm { NOP }
    /* +0xa04746 */ __asm { NOP }
    /* +0xa04747 */ __asm { NOP }
    /* +0xa04748 */ __asm { MOV qword ptr [RBP + 0x30],R9 }
    /* +0xa0474c */ __asm { MOV EAX,dword ptr [RAX + -0x463] }
    /* +0xa04752 */ __asm { JMP 0x7fffa5174b36 }
    /* +0xa04757 */ __asm { LEA RAX,[0x7fffa47b8de9] }
    /* +0xa0475e */ __asm { MOV RCX,-0x136f07d87f87b8e6 }
    /* +0xa04768 */ __asm { CMP RAX,RCX }
    /* +0xa0476b */ __asm { NOP }
    /* +0xa0476c */ __asm { NOP }
    /* +0xa0476d */ __asm { NOP }
    /* +0xa0476e */ __asm { NOP }
    /* +0xa0476f */ __asm { NOP }
    /* +0xa04770 */ __asm { MOV R8D,0x42553e39 }
    /* +0xa04776 */ __asm { ADD R8D,R14D }
    /* +0xa04779 */ __asm { MOVZX EDX,uint8_t ptr [RAX + 0x38a4] }
    /* +0xa04780 */ __asm { MOVZX R11D,uint8_t ptr [RAX + RDX*0x4 + 0x38b4] }
    /* +0xa04789 */ __asm { ROL R11B,0x4 }
    /* +0xa0478d */ __asm { MOV uint8_t ptr [RBP + 0x30],R11B }
    /* +0xa04791 */ __asm { MOVZX R11D,uint8_t ptr [RAX + RDX*0x4 + 0x38b5] }
    /* +0xa0479a */ __asm { ROL R11B,0x4 }
    /* +0xa0479e */ __asm { MOV uint8_t ptr [RBP + 0x31],R11B }
    /* +0xa047a2 */ __asm { MOVZX R11D,uint8_t ptr [RAX + RDX*0x4 + 0x38b6] }
    /* +0xa047ab */ __asm { ROL R11B,0x4 }
    /* +0xa047af */ __asm { MOV uint8_t ptr [RBP + 0x32],R11B }
    /* +0xa047b3 */ __asm { MOVZX R11D,uint8_t ptr [RAX + RDX*0x4 + 0x38b7] }
    /* +0xa047bc */ __asm { MOV EAX,0x6370508 }
    /* +0xa047c1 */ __asm { ROL R11B,0x4 }
    /* +0xa047c5 */ __asm { SUB EAX,R8D }
    /* +0xa047c8 */ __asm { MOV uint8_t ptr [RBP + 0x33],R11B }
    /* +0xa047cc */ __asm { MOV R8D,0x65e8ce72 }
    /* +0xa047d2 */ __asm { XOR R8D,dword ptr [RBP + 0x30] }
    /* +0xa047d6 */ __asm { MOV EDX,dword ptr [RAX] }
    /* +0xa047d8 */ __asm { BT R8D,EDX }
    /* +0xa047dc */ __asm { JNC 0x7fffa5174ac8 }
    /* +0xa047e2 */ __asm { LEA RAX,[0x7fffa47b6136] }
    /* +0xa047e9 */ __asm { MOV R8D,0xadfbbcd6 }
    /* +0xa047ef */ __asm { MOV R9,RAX }
    /* +0xa047f2 */ __asm { ROL R9,0x2d }
    /* +0xa047f6 */ __asm { LEA EDX,[R14 + R8*0x1] }
    /* +0xa047fa */ __asm { ADD EDX,0xae3817d3 }
    /* +0xa04800 */ __asm { XOR EDX,0xd346dd92 }
    /* +0xa04806 */ __asm { XOR RDX,R9 }
    /* +0xa04809 */ __asm { NOT RDX }
    /* +0xa0480c */ __asm { MOV RCX,-0x215413cfa590234e }
    /* +0xa04816 */ __asm { CMP RDX,RCX }
    /* +0xa04819 */ __asm { JZ 0x7fffa5174bd4 }
    /* +0xa0481f */ __asm { MOV qword ptr [RBP + 0x30],R9 }
    /* +0xa04823 */ __asm { MOV EAX,dword ptr [RAX + 0x6f02] }
    /* +0xa04829 */ __asm { JMP 0x7fffa5174b36 }
    /* +0xa0482e */ __asm { IMUL RDX,RAX }
    /* +0xa04832 */ __asm { MOV RAX,0x48b458a5bbfc449e }
    /* +0xa0483c */ __asm { ADD RDX,RAX }
    /* +0xa0483f */ __asm { MOV RAX,RDX }
    /* +0xa04842 */ __asm { SHR RAX,0x2d }
    /* +0xa04846 */ __asm { MOVD XMM5,EAX }
    /* +0xa0484a */ __asm { MOVQ XMM2,RDX }
    /* +0xa0484f */ __asm { PSRLQ XMM2,0x1b }
    /* +0xa04854 */ __asm { PXOR XMM2,XMM5 }
    /* +0xa04858 */ __asm { SHR RDX,0x3b }
    /* +0xa0485c */ __asm { MOVD R8D,XMM2 }
    /* +0xa04861 */ __asm { MOV ECX,EDX }
    /* +0xa04863 */ __asm { ROR R8D,CL }
    /* +0xa04866 */ __asm { MOV dword ptr [RBP + 0x30],0xfe57f3ff }
    /* +0xa0486d */ __asm { MOV EDX,dword ptr [RBP + 0x30] }
    /* +0xa04870 */ __asm { CMP EDX,0x98a940aa }
    /* +0xa04876 */ __asm { JA 0x7fffa517487a }
    /* +0xa04878 */ __asm { ADC uint8_t ptr [RDI],CL }
    /* +0xa0487a */ __asm { CMP R8D,0x110632 }
}


// ============================================================================
// Function : FUN_7fffa5174bf0  |  RVA: 0xa04bf0  |  Size: 168 bytes
// Callers  : FUN_7fffa54e570c@0xd7570c, FUN_7fffa5244778@0xad4778
// Callees  : FUN_7fffa560e074@0xe9e074
// ============================================================================
void FUN_7fffa5174bf0(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (uint64_t *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if ((puVar2[-2] != 0x7fffa47808f8) && (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    FUN_7fffa560e074(*(uint64_t *)(param_1 + 0x120));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5174ca0  |  RVA: 0xa04ca0  |  Size: 1348 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5174ca0(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t in_R11;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  
  bVar2 = (uint8_t)param_2;
  uVar14 = (in_R11 << 4 | in_R11 >> 0x3c) ^ (in_R11 << 9 | in_R11 >> 0x37) ^ in_R11;
  uVar3 = (uint32_t)param_2;
  uVar11 = (param_1 << 3 | param_1 >> 0x3d) * 0x373c912315058e95;
  uVar14 = (uVar14 << 0x12 | uVar14 >> 0x2e) ^ (uVar14 << 8 | uVar14 >> 0x38) ^ uVar14;
  uVar19 = param_2 ^ 0x94d049bbfd31c3f6;
  uVar4 = uVar11 - 0x2d;
  if ((0x2a18c123 - uVar3 >> 1 | (uint32_t)((0x2a18c123 - uVar3 & 1) != 0) << 0x1f) != 0x5f0c61b7) {
    uVar4 = uVar11 >> 0x2d;
  }
  uVar4 = uVar4 ^ uVar11;
  uVar14 = (uVar14 << 0x24 | uVar14 >> 0x1c) ^ (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar14;
  uVar4 = (uVar4 << 0x28 | uVar4 >> 0x18) ^ (uVar4 << 5 | uVar4 >> 0x3b) ^ uVar4;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ (uVar4 << 10 | uVar4 >> 0x36) ^ uVar4;
  uVar5 = uVar4 << 0x14 | uVar4 >> 0x2c;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) ^ uVar5 ^ uVar4;
  uVar20 = uVar4 << 0x18 | uVar4 >> 0x28;
  uVar9 = uVar4 << 0x3d | uVar4 >> 3;
  uVar11 = uVar20 ^ uVar9;
  if ((0x34b0dbd1U >> (bVar2 & 0x1f) | 0x34b0dbd1 << 0x20 - (bVar2 & 0x1f)) < 0x18b4172f - uVar3) {
    uVar11 = uVar20 - uVar9;
  }
  uVar11 = uVar11 ^ (uVar4 << 0x2b | uVar4 >> 0x15);
  uVar11 = (uVar11 << 0x26 | uVar11 >> 0x1a) ^ (uVar11 << 10 | uVar11 >> 0x36) ^ uVar11;
  uVar11 = (uVar11 << 0xc | uVar11 >> 0x34) ^ (uVar11 << 0x14 | uVar11 >> 0x2c) ^ uVar11;
  uVar11 = (uVar11 << 0x28 | uVar11 >> 0x18) ^ (uVar11 << 0x18 | uVar11 >> 0x28) ^ uVar11;
  uVar20 = (uVar11 << 0x10 | uVar11 >> 0x30) ^ uVar11;
  uVar11 = uVar11 << 0x30 | uVar11 >> 0x10;
  uVar4 = uVar11 ^ uVar20;
  if (uVar3 == 0x635f6bc8) {
    uVar4 = uVar11 + uVar20;
  }
  uVar17 = uVar4 << 0x20 | uVar4 >> 0x20;
  uVar7 = uVar4 ^ uVar17;
  uVar15 = ~uVar7;
  uVar12 = ~uVar17;
  uVar18 = ~uVar5;
  uVar1 = (uVar12 | uVar15) & uVar18 ^ uVar9;
  uVar13 = ~uVar9;
  uVar11 = uVar12 & uVar5 & uVar7;
  uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) ^ (uVar14 << 8 | uVar14 >> 0x38) ^ uVar14;
  uVar20 = uVar1 * 0x2a75ade1;
  if ((0x85702f98U >> (bVar2 & 0x1f) | -0x7a8fd068 << 0x20 - (bVar2 & 0x1f)) <=
      (-0x4693c388 << (bVar2 & 0x1f) | 0xb96c3c78U >> 0x20 - (bVar2 & 0x1f))) {
    uVar20 = (uint64_t)((uint32_t)uVar1 & ((0x664b6f88 - uVar3) * 0x400 | 0x664b6f88 - uVar3 >> 0x16));
  }
  uVar6 = uVar13 ^ uVar11;
  if (((uVar3 | 1) * 0x41a1eb94 | (uint32_t)((int)((uVar3 | 1) * -0x5f2f0a36) < 0)) <
      (-0x52881497 << (bVar2 & 0x1f) | 0xad77eb69U >> 0x20 - (bVar2 & 0x1f))) {
    uVar6 = uVar13 * uVar11;
  }
  uVar16 = uVar15 ^ uVar17;
  if ((0x7b3688f2 << (bVar2 & 0x1f) | 0x7b3688f2U >> 0x20 - (bVar2 & 0x1f)) <
      (-0x54488707 << (bVar2 & 0x1f) | 0xabb778f9U >> 0x20 - (bVar2 & 0x1f)) + 0xb7239e2a) {
    uVar16 = uVar17 & uVar15;
  }
  lVar10 = (uVar16 & uVar5 ^ uVar13) * -0xbd6cbb77 + uVar6 * 0x972ca29 +
           (uVar4 & uVar18) + (uVar9 & uVar5 & uVar17 & uVar15) * 0xbd6cbb78 + uVar1 * -0x2a75ade1 +
           ((uVar12 ^ uVar7 | uVar18) & uVar13) *
           (uint64_t)
           ((-0x4daffb7c << (bVar2 & 0x1f) | 0xb2500484U >> 0x20 - (bVar2 & 0x1f)) + 0x2722bae6) +
           (uVar11 | uVar13) * -0x972ca28 + (uVar11 & uVar13) * 0xc6df85a0 + uVar20;
  uVar4 = ((param_2 ^ 0x318766f1ac0f162d) << 0x33 | (param_2 ^ 0x318766f1ac0f162d) >> 0xd) *
          0xe06386ab + lVar10;
  uVar11 = lVar10 + 0x9e3779b97f4a7c15;
  uVar4 = (uVar4 >> 0x1e ^ uVar4) * (param_2 ^ 0xbf58476df2e437a4);
  uVar4 = (uVar4 >> 0x1b ^ uVar4) *
          (0x6266223d729a0937U >> (bVar2 & 0x3f) | 0x6266223d729a0937 << 0x40 - (bVar2 & 0x3f));
  puVar8 = (uint64_t *)((uVar14 << 0x30 | uVar14 >> 0x10) ^ 0x42d058f7);
  uVar14 = (uVar11 >> 0x1e ^ uVar11) * -0x40a7b892e31b1a47;
  uVar14 = uVar14 >> 0x1b ^ uVar14;
  uVar14 = (uVar19 & 0xffffffff) * (uVar14 & 0xffffffff) +
           ((uVar14 >> 0x20) * (uVar19 & 0xffffffff) + (uVar19 >> 0x20) * (uVar14 & 0xffffffff) <<
           0x20);
  puVar8[1] = uVar4 >> 0x1f ^ uVar4;
  *puVar8 = uVar14 >> 0x1f ^ uVar14;
  return;
}


// ============================================================================
// Function : FUN_7fffa5175200  |  RVA: 0xa05200  |  Size: 125 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5175200(uint64_t *param_1,int64_t param_2,uint64_t param_3)

{
  uint8_t bVar1;
  uint64_t uVar2;
  bool bVar3;
  
  param_2 = param_2 - (int64_t)param_1;
  if (param_3 != 0) {
    do {
      if (((uint64_t)param_1 & 7) == 0) {
        while ((((int)param_2 + (int)param_1 & 0xfffU) < 0xff9 &&
               (uVar2 = *param_1, uVar2 == *(uint64_t *)(param_2 + (int64_t)param_1)))) {
          param_1 = param_1 + 1;
          bVar3 = param_3 < 8;
          param_3 = param_3 - 8;
          if (bVar3 || param_3 == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (uint8_t)*param_1;
      if (bVar1 != *(uint8_t *)(param_2 + (int64_t)param_1)) {
        return -(uint64_t)(bVar1 < *(uint8_t *)(param_2 + (int64_t)param_1)) | 1;
      }
      param_1 = (uint64_t *)((int64_t)param_1 + 1);
      param_3 = param_3 - 1;
    } while ((param_3 != 0) && (bVar1 != 0));
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa5175280  |  RVA: 0xa05280  |  Size: 3223 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int64_t FUN_7fffa5175280(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int *piVar3;
  uint32_t uVar4;
  int64_t lVar5;
  bool bVar6;
  int iVar7;
  int64_t in_RAX;
  uint64_t uVar8;
  int64_t lVar9;
  uint8_t bVar10;
  uint32_t uVar11;
  uint64_t *puVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int64_t lVar17;
  char *pcVar18;
  uint32_t uVar19;
  uint64_t *puVar20;
  int iVar21;
  uint32_t uVar22;
  uint64_t *puVar23;
  uint64_t *in_R10;
  uint64_t *in_R11;
  uint64_t *puVar24;
  uint64_t uVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  int iVar28;
  int iVar29;
  int64_t lVar30;
  uint64_t uVar31;
  int64_t lVar32;
  uint64_t uVar33;
  char cVar34;
  uint8_t uVar37;
  char cVar38;
  uint8_t uVar39;
  char cVar40;
  uint8_t uVar41;
  char cVar42;
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar43 [16];
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint32_t auStack_1d8 [66];
  int64_t lStack_d0;
  short sStack_c2;
  uint64_t *puStack_c0;
  uint64_t *puStack_b8;
  int *piStack_b0;
  uint64_t uStack_a8;
  int64_t lStack_a0;
  uint64_t uStack_98;
  uint64_t *puStack_90;
  int iStack_84;
  uint64_t uStack_80;
  uint64_t *puStack_78;
  uint64_t uStack_70;
  uint32_t uStack_5c;
  uint64_t *puStack_58;
  char *pcStack_50;
  int64_t lStack_48;
  
  puStack_c0 = (uint64_t *)(in_RAX * -0x7fbfdfeff7fbfdff);
  uVar27 = (uint32_t)param_2;
  uVar19 = uVar27 | 1;
  uVar13 = uVar27 + 0x845087dd ^ 0xcd67e1f5;
  uVar26 = 0x5b30e30e - uVar27 ^ 0xbd318368;
  param_1 = (uVar26 << 0x18 | uVar26 >> 8) ^ param_1;
  uVar26 = *(uint32_t *)(param_1 + 0x1c);
  lStack_48 = *(int64_t *)(param_1 + 8);
  uStack_70 = (int64_t)in_R10 - lStack_48;
  uVar22 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  lStack_a0 = *(int64_t *)(param_1 + 0x10);
  bVar6 = (uint32_t)uStack_70 - uVar26 < uVar22;
  if ((int64_t)(int)(uVar13 << 10 | uVar13 >> 0x16) < 0xac60f6b5) {
    bVar6 = uVar22 < (uint32_t)uStack_70 - uVar26;
  }
  uVar13 = (uint32_t)uStack_70 - uVar22;
  if (!bVar6) {
    uVar13 = uVar26;
  }
  uStack_80 = (uint64_t)*(uint32_t *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar13 = uVar26;
  }
  piStack_b0 = (int *)(uint64_t)uVar13;
  uVar26 = 6;
  if (*(uint32_t *)(param_1 + 0x10c) < 6) {
    uVar26 = *(uint32_t *)(param_1 + 0x10c);
  }
  lVar32 = *(int64_t *)(param_1 + 0x70);
  iVar21 = 1 << ((uint8_t)uVar26 & 0x1f);
  iVar28 = *(int *)(param_1 + 0x34);
  lVar15 = *(int64_t *)(param_1 + 0x38);
  uStack_98 = param_2;
  pcStack_50 = (char *)(uint64_t)uVar19;
  uVar26 = (uint32_t)*(uint64_t *)(param_1 + 0x60);
  cVar44 = (char)iVar28;
  if (*(int *)(param_1 + 300) == 0) {
    uVar13 = *(uint32_t *)(param_1 + 0x2c);
    uVar31 = (uint64_t)uVar13;
    lVar17 = lVar32;
    lVar30 = lVar15;
    if (0x180 < (uint32_t)uStack_70 - uVar13) {
      if (uVar13 < 0xffffffa0) {
        uVar33 = uVar31 + 0x5f;
        while( true ) {
          uVar8 = (uint64_t)((uint32_t)uVar31 & 7);
          uVar13 = *(uint32_t *)(param_1 + 0x40 + uVar8 * 4);
          *(uint32_t *)(param_1 + 0x40 + uVar8 * 4) =
               (*(int *)(lStack_48 + 8 + uVar31) * -0x61c8864f ^ *(uint32_t *)(param_1 + 0x60)) >>
               (uint64_t)(0x18 - iVar28);
          uVar8 = (uint64_t)(uVar13 >> 2 & 0xffffffc0);
          lVar30 = 0;
          if ((*(uint8_t *)(lVar15 + uVar8) & 0x3f) == 1) {
            lVar30 = 0x3f;
          }
          lVar30 = (uint64_t)(*(uint8_t *)(lVar15 + uVar8) - 1 & 0x3f) + lVar30;
          *(char *)(lVar15 + uVar8) = (char)lVar30;
          *(char *)(lVar15 + uVar8 + lVar30) = (char)uVar13;
          *(uint32_t *)(lVar32 + uVar8 * 4 + lVar30 * 4) = (uint32_t)uVar31;
          if (uVar33 == uVar31) break;
          uVar31 = uVar31 + 1;
        }
        lVar30 = *(int64_t *)(param_1 + 0x38);
        lVar17 = *(int64_t *)(param_1 + 0x70);
      }
      uVar13 = (uint32_t)uStack_70 - 0x20;
      uVar31 = (uint64_t)uVar13;
      iVar29 = (int)((int64_t)in_R10 + 1U);
      iVar7 = (int)(lStack_48 + uVar31);
      bVar10 = (uint8_t)param_2 & 0x1f;
      iVar28 = iVar29 - iVar7;
      if ((uVar19 * -0x80000000 | uVar19 * 0x6de94efc >> 3) <=
          (0x3182f8d0 << bVar10 | 0x3182f8d0U >> 0x20 - bVar10)) {
        iVar28 = iVar29 * iVar7;
      }
      uVar22 = 8;
      if (iVar28 + 1U < 8) {
        uVar22 = iVar28 + 1U;
      }
      uVar11 = 0;
      if (lStack_48 + uVar31 <= (int64_t)in_R10 + 1U) {
        uVar11 = uVar22;
      }
      if (uVar13 < ((uint32_t)uStack_70 + uVar11) - 0x20) {
        uVar22 = *(uint32_t *)(param_1 + 0x60);
        iVar28 = *(int *)(param_1 + 0x34);
        do {
          uVar14 = (uint32_t)uVar31;
          piVar3 = (int *)(lStack_48 + uVar31);
          uVar31 = uVar31 + 1;
          *(uint32_t *)(param_1 + 0x40 + (uint64_t)(uVar14 & 7) * 4) =
               (*piVar3 * -0x61c8864f ^ uVar22) >> (uint64_t)(0x18 - iVar28);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    if (uVar13 < (uint32_t)uStack_70) {
      lVar5 = *(int64_t *)(param_1 + 8);
      uVar31 = (uint64_t)uVar13;
      uVar4 = *(uint32_t *)(param_1 + 0x34);
      do {
        uVar33 = (uint64_t)((uint32_t)uVar31 & 7);
        uVar13 = *(uint32_t *)(param_1 + 0x40 + uVar33 * 4);
        *(uint32_t *)(param_1 + 0x40 + uVar33 * 4) =
             (*(int *)(lVar5 + 8 + uVar31) * -0x61c8864f ^ *(uint32_t *)(param_1 + 0x60)) >>
             (0x18U - (char)uVar4 & 0x1f);
        uVar33 = (uint64_t)(uVar13 >> 2 & 0xffffffc0);
        lVar9 = 0;
        if (((*(uint8_t *)(lVar30 + uVar33) & 0x3f) != 1) !=
            (uint64_t)(uVar27 + 0x46559abe ^ 0xd14837f6) <
            (uint64_t)
            (int64_t)
            (int)((uVar19 * -0x6cb712bf >> 1 | (uint32_t)((uVar19 * -0x6cb712bf & 1) != 0) << 0x1f) +
                 0xc9c155b)) {
          lVar9 = 0x3f;
        }
        lVar9 = (uint64_t)(*(uint8_t *)(lVar30 + uVar33) - 1 & 0x3f) + lVar9;
        *(char *)(lVar30 + uVar33) = (char)lVar9;
        *(char *)(lVar30 + uVar33 + lVar9) = (char)uVar13;
        *(uint32_t *)(uVar33 * 4 + lVar17 + lVar9 * 4) = (uint32_t)uVar31;
        uVar31 = uVar31 + 1;
      } while ((uStack_70 & 0xffffffff) != uVar31);
    }
    *(uint32_t *)(param_1 + 0x2c) = (uint32_t)uStack_70;
    uVar13 = *(uint32_t *)(param_1 + 0x40 + (uint64_t)((uint32_t)uStack_70 & 7) * 4);
    *(uint32_t *)(param_1 + 0x40 + (uint64_t)((uint32_t)uStack_70 & 7) * 4) =
         (*(int *)(lStack_48 + 8 + (uStack_70 & 0xffffffff)) * -0x61c8864f ^ uVar26) >>
         (0x18U - cVar44 & 0x1f);
  }
  else {
    uVar13 = ((int)*in_R10 * -0x61c8864f ^ uVar26) >> (0x18U - cVar44 & 0x1f);
    *(uint32_t *)(param_1 + 0x2c) = (uint32_t)uStack_70;
  }
  if ((((uVar27 ^ 0x60e77e26) << 0x11 | (uVar27 ^ 0x60e77e26) >> 0xf) ^ 0xc0000263) < 0xba5b584e) {
    uVar31 = (uint64_t)(uVar13 >> 2 & 0xffffffc0);
    uStack_a8 = (uint64_t)(uVar19 * 0x28dd7160 ^ 0x763c6d03);
    *(uint32_t *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar13;
    bVar10 = *(uint8_t *)(lVar15 + uVar31);
    pcVar18 = (char *)(lVar15 + 0x30 + uVar31);
    cVar44 = *pcVar18;
    cVar45 = pcVar18[1];
    cVar46 = pcVar18[2];
    cVar47 = pcVar18[3];
    cVar48 = pcVar18[4];
    cVar49 = pcVar18[5];
    cVar50 = pcVar18[6];
    cVar51 = pcVar18[7];
    cVar52 = pcVar18[8];
    cVar53 = pcVar18[9];
    cVar54 = pcVar18[10];
    cVar55 = pcVar18[0xb];
    cVar56 = pcVar18[0xc];
    cVar57 = pcVar18[0xd];
    cVar58 = pcVar18[0xe];
    cVar59 = pcVar18[0xf];
  }
  else {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar13;
    uVar31 = (uint64_t)(uVar13 >> 2 & 0xffffffc0);
    bVar10 = *(uint8_t *)(lVar15 + uVar31);
    pcVar18 = (char *)(lVar15 + 0x30 + uVar31);
    cVar44 = *pcVar18;
    cVar45 = pcVar18[1];
    cVar46 = pcVar18[2];
    cVar47 = pcVar18[3];
    cVar48 = pcVar18[4];
    cVar49 = pcVar18[5];
    cVar50 = pcVar18[6];
    cVar51 = pcVar18[7];
    cVar52 = pcVar18[8];
    cVar53 = pcVar18[9];
    cVar54 = pcVar18[10];
    cVar55 = pcVar18[0xb];
    cVar56 = pcVar18[0xc];
    cVar57 = pcVar18[0xd];
    cVar58 = pcVar18[0xe];
    cVar59 = pcVar18[0xf];
    uStack_a8 = (uint64_t)((uVar27 + 0x1d41364f) * -0x6103bc43);
  }
  pcVar18 = (char *)(lVar15 + uVar31);
  lVar32 = lVar32 + uVar31 * 4;
  uVar41 = (uint8_t)(uVar13 >> 0x18);
  uVar39 = (uint8_t)(uVar13 >> 0x10);
  uVar37 = (uint8_t)(uVar13 >> 8);
  auVar35._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar41,uVar41),uVar39),CONCAT14(uVar39,uVar13)) >> 0x20);
  auVar35[3] = uVar37;
  auVar35[2] = uVar37;
  auVar35[0] = (char)uVar13;
  auVar35[1] = auVar35[0];
  auVar35._8_8_ = 0;
  auVar36 = pshuflw(auVar35,auVar35,0);
  cVar34 = auVar36[0];
  auVar43[0] = -(*pcVar18 == cVar34);
  cVar38 = auVar36[1];
  auVar43[1] = -(pcVar18[1] == cVar38);
  cVar40 = auVar36[2];
  auVar43[2] = -(pcVar18[2] == cVar40);
  cVar42 = auVar36[3];
  auVar43[3] = -(pcVar18[3] == cVar42);
  auVar43[4] = -(pcVar18[4] == cVar34);
  auVar43[5] = -(pcVar18[5] == cVar38);
  auVar43[6] = -(pcVar18[6] == cVar40);
  auVar43[7] = -(pcVar18[7] == cVar42);
  auVar43[8] = -(pcVar18[8] == cVar34);
  auVar43[9] = -(pcVar18[9] == cVar38);
  auVar43[10] = -(pcVar18[10] == cVar40);
  auVar43[0xb] = -(pcVar18[0xb] == cVar42);
  auVar43[0xc] = -(pcVar18[0xc] == cVar34);
  auVar43[0xd] = -(pcVar18[0xd] == cVar38);
  auVar43[0xe] = -(pcVar18[0xe] == cVar40);
  auVar43[0xf] = -(pcVar18[0xf] == cVar42);
  auVar60[0] = -(pcVar18[0x10] == cVar34);
  auVar60[1] = -(pcVar18[0x11] == cVar38);
  auVar60[2] = -(pcVar18[0x12] == cVar40);
  auVar60[3] = -(pcVar18[0x13] == cVar42);
  auVar60[4] = -(pcVar18[0x14] == cVar34);
  auVar60[5] = -(pcVar18[0x15] == cVar38);
  auVar60[6] = -(pcVar18[0x16] == cVar40);
  auVar60[7] = -(pcVar18[0x17] == cVar42);
  auVar60[8] = -(pcVar18[0x18] == cVar34);
  auVar60[9] = -(pcVar18[0x19] == cVar38);
  auVar60[10] = -(pcVar18[0x1a] == cVar40);
  auVar60[0xb] = -(pcVar18[0x1b] == cVar42);
  auVar60[0xc] = -(pcVar18[0x1c] == cVar34);
  auVar60[0xd] = -(pcVar18[0x1d] == cVar38);
  auVar60[0xe] = -(pcVar18[0x1e] == cVar40);
  auVar60[0xf] = -(pcVar18[0x1f] == cVar42);
  auVar61[0] = -(pcVar18[0x20] == cVar34);
  auVar61[1] = -(pcVar18[0x21] == cVar38);
  auVar61[2] = -(pcVar18[0x22] == cVar40);
  auVar61[3] = -(pcVar18[0x23] == cVar42);
  auVar61[4] = -(pcVar18[0x24] == cVar34);
  auVar61[5] = -(pcVar18[0x25] == cVar38);
  auVar61[6] = -(pcVar18[0x26] == cVar40);
  auVar61[7] = -(pcVar18[0x27] == cVar42);
  auVar61[8] = -(pcVar18[0x28] == cVar34);
  auVar61[9] = -(pcVar18[0x29] == cVar38);
  auVar61[10] = -(pcVar18[0x2a] == cVar40);
  auVar61[0xb] = -(pcVar18[0x2b] == cVar42);
  auVar61[0xc] = -(pcVar18[0x2c] == cVar34);
  auVar61[0xd] = -(pcVar18[0x2d] == cVar38);
  auVar61[0xe] = -(pcVar18[0x2e] == cVar40);
  auVar61[0xf] = -(pcVar18[0x2f] == cVar42);
  auVar36[0] = -(cVar44 == cVar34);
  auVar36[1] = -(cVar45 == cVar38);
  auVar36[2] = -(cVar46 == cVar40);
  auVar36[3] = -(cVar47 == cVar42);
  auVar36[4] = -(cVar48 == cVar34);
  auVar36[5] = -(cVar49 == cVar38);
  auVar36[6] = -(cVar50 == cVar40);
  auVar36[7] = -(cVar51 == cVar42);
  auVar36[8] = -(cVar52 == cVar34);
  auVar36[9] = -(cVar53 == cVar38);
  auVar36[10] = -(cVar54 == cVar40);
  auVar36[0xb] = -(cVar55 == cVar42);
  auVar36[0xc] = -(cVar56 == cVar34);
  auVar36[0xd] = -(cVar57 == cVar38);
  auVar36[0xe] = -(cVar58 == cVar40);
  auVar36[0xf] = -(cVar59 == cVar42);
  uVar31 = (uint64_t)
           (uint16_t)((uint16_t)(SUB161(auVar60 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                   (uint16_t)(auVar60[0xf] >> 7) << 0xf) << 0x10 |
           (uint64_t)
           CONCAT22((uint16_t)(SUB161(auVar36 >> 7,0) & 1) |
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
                    (uint16_t)(auVar36[0xf] >> 7) << 0xf,
                    (uint16_t)(SUB161(auVar61 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar61[0xf] >> 7) << 0xf) << 0x20 |
           (uint64_t)
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
                   (uint16_t)(auVar43[0xf] >> 7) << 0xf);
  uVar26 = (uint32_t)bVar10;
  puStack_90 = in_R11;
  if (uVar31 != 0) {
    uVar31 = uVar31 >> (bVar10 & 0x3f) | uVar31 << 0x40 - (bVar10 & 0x3f);
    uVar33 = 0;
    do {
      iVar28 = 0;
      for (uVar8 = uVar31; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
        iVar28 = iVar28 + 1;
      }
      uVar13 = iVar28 + uVar26 & 0x3f;
      if (uVar13 != 0) {
        uVar13 = *(uint32_t *)(lVar32 + (uint64_t)uVar13 * 4);
        if (uVar13 < (uint32_t)piStack_b0) goto LAB_7fffa5175960;
        iVar21 = iVar21 + -1;
        auStack_1d8[uVar33] = uVar13;
        uVar33 = uVar33 + 1;
      }
      uVar31 = uVar31 & uVar31 - 1;
      if ((uVar31 == (uVar27 - 0x9ff7 & 0xffff)) || (iVar21 == 0)) goto LAB_7fffa5175960;
    } while( true );
  }
  uVar33 = 0;
  pcStack_50._0_4_ = uVar19;
LAB_7fffa5175960:
  bVar10 = (uint8_t)param_2 & 0x1f;
  lVar15 = 0x3f;
  if ((uVar26 & 0x3f) != 1) {
    lVar15 = 0;
  }
  uStack_5c = (uint32_t)uStack_a8 | 1;
  uVar13 = uVar26 - 1;
  if (uStack_5c * (0x6ef59806U >> bVar10 | 0x6ef59806 << 0x20 - bVar10) == -0x59ffcbf9) {
    uVar13 = -uVar26;
  }
  lVar15 = lVar15 + (uint64_t)(uVar13 & 0x3f);
  *pcVar18 = (char)lVar15;
  pcVar18[lVar15] = auVar35[0];
  iVar28 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar28 + 1;
  *(int *)(lVar32 + lVar15 * 4) = iVar28;
  uVar31 = 3;
  if (uVar33 != ((uint32_t)pcStack_50 * -0x42cb677a ^ 0x976e634a)) {
    puStack_58 = (uint64_t *)(lStack_48 + uStack_80);
    pcStack_50 = (char *)(lStack_a0 + uStack_80);
    puVar1 = (uint64_t *)((int64_t)puStack_90 - 7);
    puStack_78 = (uint64_t *)((int64_t)puStack_90 - 1);
    puStack_b8 = (uint64_t *)((int64_t)puStack_90 - 3);
    iStack_84 = (uint32_t)uStack_70 + 3;
    puVar2 = (uint64_t *)((int64_t)in_R10 + 4);
    piStack_b0 = (int *)((int64_t)in_R10 + 0xc);
    lStack_d0 = lStack_a0 + 0xc;
    uStack_70 = lStack_48 + uStack_80 + 8;
    uVar16 = 0;
    uVar8 = 3;
    do {
      uVar26 = auStack_1d8[uVar16];
      uVar31 = (uint64_t)uVar26;
      if (uVar26 < (uint32_t)uStack_80) {
        if (*(int *)(lStack_a0 + uVar31) == (int)*in_R10) {
          puVar24 = (uint64_t *)(lStack_a0 + uVar31 + 4);
          puVar12 = (uint64_t *)(((int64_t)pcStack_50 - (int64_t)puVar24) + (int64_t)puVar2);
          if (puStack_90 <= puVar12) {
            puVar12 = puStack_90;
          }
          puVar20 = puVar2;
          puVar23 = puVar24;
          if (puVar2 < (uint64_t *)((int64_t)puVar12 - 7U)) {
            if (*puVar24 == *puVar2) {
              lVar32 = lStack_a0 + 0xc + uVar31;
              lVar15 = 0;
              do {
                puVar20 = (uint64_t *)((int64_t)piStack_b0 + lVar15);
                if ((uint64_t *)((int64_t)puVar12 - 7U) <= puVar20) {
                  puVar23 = (uint64_t *)(lVar32 + lVar15);
                  goto LAB_7fffa5175c6e;
                }
                uVar31 = *(uint64_t *)(lVar32 + lVar15);
                lVar15 = lVar15 + 8;
              } while (uVar31 == *puVar20);
              uVar13 = 0;
              for (uVar31 = *puVar20 ^ uVar31; (uVar31 & 1) == 0;
                  uVar31 = uVar31 >> 1 | 0x8000000000000000) {
                uVar13 = uVar13 + 1;
              }
              uVar31 = (uint64_t)(uVar13 >> 3) + lVar15;
            }
            else {
              uVar13 = 0;
              for (uVar31 = *puVar24 ^ *puVar2; (uVar31 & 1) == 0;
                  uVar31 = uVar31 >> 1 | 0x8000000000000000) {
                uVar13 = uVar13 + 1;
              }
              uVar31 = (uint64_t)(uVar13 >> 3);
            }
          }
          else {
LAB_7fffa5175c6e:
            if ((puVar20 < (uint64_t *)((int64_t)puVar12 - 3U)) &&
               ((int)*puVar23 == (int)*puVar20)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
              puVar23 = (uint64_t *)((int64_t)puVar23 + 4);
            }
            if ((puVar20 < (uint64_t *)((int64_t)puVar12 - 1U)) &&
               ((short)*puVar23 == (short)*puVar20)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
              puVar23 = (uint64_t *)((int64_t)puVar23 + 2);
            }
            if (puVar20 < puVar12) {
              puVar20 = (uint64_t *)
                        ((int64_t)puVar20 + (uint64_t)((char)*puVar23 == (char)*puVar20));
            }
            uVar31 = (int64_t)puVar20 - (int64_t)puVar2;
          }
          if ((char *)((int64_t)puVar24 + uVar31) == pcStack_50) {
            puVar12 = (uint64_t *)((int64_t)puVar2 + uVar31);
            puVar24 = puVar12;
            puVar20 = puStack_58;
            if (puVar12 < puVar1) {
              if (*puStack_58 == *puVar12) {
                lVar32 = 0;
                do {
                  puVar24 = (uint64_t *)((int64_t)piStack_b0 + lVar32 + uVar31);
                  if (puVar1 <= puVar24) {
                    puVar20 = (uint64_t *)(lVar32 + uStack_70);
                    goto LAB_7fffa5175deb;
                  }
                  puVar20 = (uint64_t *)(uStack_70 + lVar32);
                  lVar32 = lVar32 + 8;
                } while (*puVar20 == *puVar24);
                uVar13 = 0;
                for (uVar25 = *puVar20 ^ *puVar24; (uVar25 & 1) == 0;
                    uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                  uVar13 = uVar13 + 1;
                }
                uVar25 = (uint64_t)(uVar13 >> 3) + lVar32;
              }
              else {
                uVar13 = 0;
                for (uVar25 = *puStack_58 ^ *puVar12; (uVar25 & 1) == 0;
                    uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                  uVar13 = uVar13 + 1;
                }
                uVar25 = (uint64_t)(uVar13 >> 3);
              }
            }
            else {
LAB_7fffa5175deb:
              if ((puVar24 < puStack_b8) && ((int)*puVar20 == (int)*puVar24)) {
                puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
                puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
              }
              if (puVar24 < puStack_78) {
                sStack_c2 = (short)*puVar20;
                uVar13 = uStack_5c * -0x5f515d6f + 0xbb685119;
                bVar10 = (uint8_t)uStack_98 & 0x1f;
                bVar6 = sStack_c2 == (short)*puVar24;
                if ((uint64_t)(int64_t)(int)(uVar13 >> bVar10 | uVar13 << 0x20 - bVar10) <=
                    (uint64_t)(((uint32_t)uStack_a8 ^ 0xe44ca3c7) - (int)uStack_98)) {
                  bVar6 = sStack_c2 < (short)*puVar24;
                }
                if (bVar6) {
                  puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
                  puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
                }
              }
              if (puVar24 < puStack_90) {
                puVar24 = (uint64_t *)
                          ((int64_t)puVar24 + (uint64_t)((char)*puVar20 == (char)*puVar24));
              }
              uVar25 = (int64_t)puVar24 - (int64_t)puVar12;
            }
            uVar31 = uVar31 + uVar25;
          }
          uVar31 = uVar31 + 4;
LAB_7fffa5175ee9:
          if ((uVar8 < uVar31) &&
             (*puStack_c0 = (uint64_t)(iStack_84 - uVar26), uVar8 = uVar31,
             (uint64_t *)((int64_t)in_R10 + uVar31) == puStack_90)) break;
        }
      }
      else {
        puVar12 = (uint64_t *)(lStack_48 + uVar31);
        if (*(int *)((uVar8 - 3) + (int64_t)puVar12) == *(int *)((int64_t)in_R10 + (uVar8 - 3))) {
          puVar24 = in_R10;
          if (in_R10 < puVar1) {
            if (*puVar12 != *in_R10) {
              uVar13 = 0;
              for (uVar31 = *puVar12 ^ *in_R10; (uVar31 & 1) == 0;
                  uVar31 = uVar31 >> 1 | 0x8000000000000000) {
                uVar13 = uVar13 + 1;
              }
              uVar31 = (uint64_t)(uVar13 >> 3);
              goto LAB_7fffa5175ee9;
            }
            lVar32 = 8;
LAB_7fffa5175c40:
            puVar24 = (uint64_t *)((int64_t)in_R10 + lVar32);
            if (puVar24 < puVar1) {
              if (*(uint64_t *)((int64_t)puVar12 + lVar32) == *puVar24) goto code_r0x7fffa5175c5d;
              uVar13 = 0;
              for (uVar31 = *puVar24 ^ *(uint64_t *)((int64_t)puVar12 + lVar32); (uVar31 & 1) == 0
                  ; uVar31 = uVar31 >> 1 | 0x8000000000000000) {
                uVar13 = uVar13 + 1;
              }
              uVar31 = (uint64_t)(uVar13 >> 3) + lVar32;
              goto LAB_7fffa5175ee9;
            }
            puVar12 = (uint64_t *)((int64_t)puVar12 + lVar32);
          }
          if ((puVar24 < puStack_b8) && ((int)*puVar12 == (int)*puVar24)) {
            puVar24 = (uint64_t *)((int64_t)puVar24 + 4);
            puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
          }
          if ((puVar24 < puStack_78) && ((short)*puVar12 == (short)*puVar24)) {
            puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
            puVar24 = (uint64_t *)((int64_t)puVar24 + 2);
          }
          if (puVar24 < puStack_90) {
            puVar24 = (uint64_t *)
                      ((int64_t)puVar24 + (uint64_t)((char)*puVar12 == (char)*puVar24));
          }
          uVar31 = (int64_t)puVar24 - (int64_t)in_R10;
          goto LAB_7fffa5175ee9;
        }
      }
      uVar31 = uVar8;
      uVar16 = uVar16 + 1;
      uVar8 = uVar31;
    } while (uVar16 != uVar33);
  }
  return uVar31 * -0x2fffffffffffffd;
code_r0x7fffa5175c5d:
  lVar32 = lVar32 + 8;
  goto LAB_7fffa5175c40;
}


// ============================================================================
// Function : FUN_7fffa5175f20  |  RVA: 0xa05f20  |  Size: 5013 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa51760dd) */

int64_t FUN_7fffa5175f20(uint64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4
                         )

{
  int64_t *plVar1;
  char *pcVar2;
  char *pcVar3;
  uint32_t uVar4;
  int64_t lVar5;
  bool bVar6;
  uint8_t uVar7;
  uint32_t uVar8;
  uint64_t in_RAX;
  uint8_t bVar9;
  uint8_t bVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint32_t uVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint32_t uVar22;
  uint64_t uVar23;
  int64_t lVar24;
  uint16_t uVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint64_t uVar28;
  int64_t lVar29;
  uint32_t uVar30;
  uint64_t uVar31;
  uint32_t uVar32;
  uint32_t uVar33;
  uint64_t uVar34;
  uint32_t uVar35;
  uint64_t *in_R11;
  int64_t lVar36;
  uint64_t *puVar37;
  uint64_t uVar38;
  int64_t lVar39;
  int iVar40;
  uint32_t uVar41;
  int iVar42;
  uint64_t *puVar43;
  uint8_t auVar44 [16];
  char cVar45;
  uint8_t uVar48;
  char cVar49;
  char cVar50;
  uint8_t uVar51;
  char cVar52;
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint64_t uStack_1f8;
  uint32_t auStack_198 [64];
  uint64_t *puStack_98;
  uint64_t uStack_90;
  int iStack_84;
  uint64_t uStack_80;
  int iStack_78;
  uint32_t uStack_74;
  int64_t lStack_70;
  uint64_t *puStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  uint64_t uStack_48;
  
  uVar31 = in_RAX << 0xf ^ in_RAX;
  uVar22 = (uint32_t)param_4;
  uVar41 = uVar22 | 1;
  param_1 = (param_1 << 0x24 | param_1 >> 0x1c) ^ (param_1 << 0x3b | param_1 >> 5) ^ param_1;
  bVar10 = (uint8_t)param_4;
  uVar35 = 0x41b00 << (bVar10 & 0x1f) | 0x41b00U >> 0x20 - (bVar10 & 0x1f);
  param_1 = (param_1 << 0x36 | param_1 >> 10) ^ (param_1 << 8 | param_1 >> 0x38) ^ param_1;
  param_1 = (param_1 << 0x10 | param_1 >> 0x30) ^ (param_1 << 0x2c | param_1 >> 0x14) ^ param_1;
  param_1 = (param_1 << 0x18 | param_1 >> 0x28) ^ (param_1 << 0x20 | param_1 >> 0x20) ^ param_1;
  uVar21 = param_1 << 0x30 | param_1 >> 0x10;
  uVar28 = param_1 << 0x10 | param_1 >> 0x30;
  uVar21 = (uVar21 ^ uVar28) * uVar21;
  if (((0xa0726774 - uVar22) * 8 | 0xa0726774 - uVar22 >> 0x1d) * -0x5f86a513 !=
      (uVar35 << 3 | uVar35 >> 0x1d)) {
    uVar21 = uVar28;
  }
  puStack_68 = (uint64_t *)(in_RAX << 0x3c ^ uVar31 << 0x1e ^ uVar31);
  uVar21 = (uVar21 << 0x2f | uVar21 >> 0x11) ^ (uVar21 << 0x2e | uVar21 >> 0x12) ^
           (uVar21 << 0x2b | uVar21 >> 0x15);
  uVar21 = (uVar21 << 6 | uVar21 >> 0x3a) ^ (uVar21 << 8 | uVar21 >> 0x38) ^ uVar21;
  uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ (uVar21 << 0xc | uVar21 >> 0x34) ^ uVar21;
  uVar31 = (uVar21 << 0x18 | uVar21 >> 0x28) ^ uVar21;
  uVar28 = uVar21 << 0x20 | uVar21 >> 0x20;
  uVar21 = uVar28 ^ uVar31;
  if ((int64_t)(uint64_t)(uVar22 ^ 0x1d2339eb) <
      (int64_t)(int)(uVar41 * -0x71635c06 + 0x58601660)) {
    uVar21 = uVar28 & uVar31;
  }
  uVar31 = uVar21 << 0x10 | uVar21 >> 0x30;
  uVar32 = uVar41 * 0x43303fc3;
  uStack_80 = (uint64_t)uVar32;
  uVar35 = *(uint32_t *)(uVar31 + 0x18);
  uVar30 = *(uint32_t *)(uVar31 + 0x1c);
  uVar21 = *param_3;
  uVar26 = 1 << (*(uint8_t *)(uVar31 + 0x100) & 0x1f);
  uVar28 = uVar21 * -0x30e4432345000000 >>
           (0x42U - *(char *)(*(uint64_t **)(uVar31 + 0xf8) + 0x21) & 0x3f);
  lVar13 = *(int64_t *)(uVar31 + 8);
  uVar34 = (int64_t)param_3 - lVar13;
  uVar33 = (uint32_t)uVar34;
  uVar27 = uVar33 - uVar26;
  if (uVar33 - uVar30 <= uVar26) {
    uVar27 = uVar30;
  }
  lVar24 = *(int64_t *)(uVar31 + 0x38);
  if (*(int *)(uVar31 + 0x28) != 0) {
    uVar27 = uVar30;
  }
  uVar30 = *(uint32_t *)(uVar31 + 0x10c);
  uVar26 = 5;
  if (uVar30 < 5) {
    uVar26 = uVar30;
  }
  iVar42 = 1 << ((uint8_t)uVar26 & 0x1f);
  puStack_98 = *(uint64_t **)(uVar31 + 0xf8);
  lVar39 = *(int64_t *)(uVar31 + 0x70);
  uVar38 = *(uint64_t *)(uVar31 + 0x60);
  iStack_84 = 0;
  if (5 < uVar30) {
    iStack_84 = 1 << ((char)uVar30 - 5U & 0x1f);
  }
  uStack_90 = param_4;
  cVar45 = (char)*(uint32_t *)(uVar31 + 0x34);
  if (*(int *)(uVar31 + 300) != 0) {
    *(uint32_t *)(uVar31 + 0x2c) = uVar33;
    uVar21 = (uVar21 * -0x30e4432345000000 ^ uVar38) >> (0x38U - cVar45 & 0x3f);
    goto LAB_7fffa51766c8;
  }
  uVar30 = *(uint32_t *)(uVar31 + 0x2c);
  uVar21 = (uint64_t)uVar30;
  lVar29 = lVar39;
  lVar36 = lVar24;
  if (uVar33 - uVar30 < 0x181) {
joined_r0x7fffa517639d:
    uStack_60._4_4_ = (uint32_t)((uint64_t)uStack_60 >> 0x20);
  }
  else {
    if (uVar30 < 0xffffffa0) {
      uVar23 = uVar21 + 0x60;
      do {
        uVar15 = (uint64_t)((uint32_t)uVar21 & 7);
        uVar30 = *(uint32_t *)(uVar31 + 0x40 + uVar15 * 4);
        *(int *)(uVar31 + 0x40 + uVar15 * 4) =
             (int)((*(int64_t *)(lVar13 + 8 + uVar21) * -0x30e4432345000000 ^
                   *(uint64_t *)(uVar31 + 0x60)) >> (0x38U - cVar45 & 0x3f));
        uVar15 = (uint64_t)(uVar30 >> 3 & 0xffffffe0);
        iVar40 = 0x1f;
        if ((*(uint8_t *)(lVar24 + uVar15) & 0x1f) != 1) {
          iVar40 = 0;
        }
        uVar26 = (uint32_t)(*(uint8_t *)(lVar24 + uVar15) - 1 & 0x1f) + iVar40;
        *(char *)(lVar24 + uVar15) = (char)uVar26;
        *(char *)((uint64_t)uVar26 + lVar24 + uVar15) = (char)uVar30;
        *(uint32_t *)(lVar39 + uVar15 * 4 + (uint64_t)uVar26 * 4) = (uint32_t)uVar21;
        uVar21 = uVar21 + 1;
      } while (uVar23 != uVar21);
      lVar36 = *(int64_t *)(uVar31 + 0x38);
      lVar29 = *(int64_t *)(uVar31 + 0x70);
    }
    uVar30 = uVar33 - 0x20;
    uVar21 = (uint64_t)uVar30;
    plVar1 = (int64_t *)(lVar13 + uVar21);
    uVar8 = ((int)(int64_t *)((int64_t)param_3 + 1U) - (int)plVar1) + 1;
    uVar26 = 8;
    if (uVar8 < 8) {
      uVar26 = uVar8;
    }
    uVar8 = 0;
    if (plVar1 <= (int64_t *)((int64_t)param_3 + 1U)) {
      uVar8 = uVar26;
    }
    uVar26 = (uVar33 + uVar8) - 0x20;
    if (uVar26 <= uVar30) goto joined_r0x7fffa517639d;
    uVar23 = *(uint64_t *)(uVar31 + 0x60);
    uVar18 = 0x38 - *(int *)(uVar31 + 0x34);
    bVar9 = (uint8_t)uVar18;
    if ((uVar8 & 1) != 0) {
      uVar21 = uVar21 + 1;
      *(int *)(uVar31 + 0x40 + (uint64_t)(uVar30 & 7) * 4) =
           (int)((*plVar1 * -0x30e4432345000000 ^ uVar23) >> (bVar9 & 0x3f));
    }
    if (uVar8 != 1) {
      uStack_48 = (uint64_t)uVar18;
      _iStack_78 = CONCAT44(uStack_74,iVar42);
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar27);
      while( true ) {
        uVar8 = uVar41 * -0x43303fc3 + 0x7ecdd9d3;
        uVar18 = -0x4a1e7e1a << (bVar10 & 0x1f) | 0xb5e181e6U >> 0x20 - (bVar10 & 0x1f);
        *(int *)(uVar31 + 0x40 + (uint64_t)((uint32_t)uVar21 & 7) * 4) =
             (int)((*(int64_t *)(lVar13 + uVar21) * -0x30e4432345000000 ^ uVar23) >> (bVar9 & 0x3f)
                  );
        uVar15 = uVar21 | 1;
        if ((int)((uVar8 << (bVar10 & 0x1f) | uVar8 >> 0x20 - (bVar10 & 0x1f)) * 0x35e9b42d) <=
            (int)(uVar18 << 0x1c | uVar18 >> 4)) {
          uVar15 = uVar21 + 1;
        }
        *(int *)(uVar31 + 0x40 + (uint64_t)((uint32_t)uVar15 & 7) * 4) =
             (int)((*(int64_t *)(lVar13 + uVar15) * -0x30e4432345000000 ^ uVar23) >> (bVar9 & 0x3f)
                  );
        if (uVar26 == (uint32_t)uVar21 + 2) break;
        uVar21 = uVar21 + 2;
      }
      goto joined_r0x7fffa517639d;
    }
  }
  if (uVar30 < uVar33) {
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar27);
    lVar5 = *(int64_t *)(uVar31 + 8);
    uVar4 = *(uint32_t *)(uVar31 + 0x34);
    uVar21 = (uint64_t)uVar30;
    while( true ) {
      bVar10 = (uint8_t)uVar32 & 0x1f;
      uVar26 = ((0x4de6ea91 - uVar22) * 0x40000 | 0x4de6ea91 - uVar22 >> 0xe) ^ uVar32;
      uVar23 = (uint64_t)((uint32_t)uVar21 & 7);
      uVar30 = *(uint32_t *)(uVar31 + 0x40 + uVar23 * 4);
      *(int *)(uVar31 + 0x40 + uVar23 * 4) =
           (int)((*(int64_t *)(lVar5 + 8 + uVar21) * -0x30e4432345000000 ^
                 *(uint64_t *)(uVar31 + 0x60)) >> (0x38U - (char)uVar4 & 0x3f));
      uVar23 = (uint64_t)(uVar30 >> 3 & 0xffffffe0);
      uVar15 = (uint64_t)(*(uint8_t *)(lVar36 + uVar23) - 1 & 0x1f);
      if ((int64_t)(uint64_t)(uVar26 >> 1 | (uint32_t)((uVar26 & 1) != 0) << 0x1f) <=
          (int64_t)
          (int)((uVar22 + 0x23a40f0f >> bVar10 | uVar22 + 0x23a40f0f << 0x20 - bVar10) + 0x9b3ef803)
         ) {
        uVar15 = 0x1f;
      }
      lVar11 = 0;
      if ((*(uint8_t *)(lVar36 + uVar23) & 0x1f) == 1) {
        lVar11 = 0x1f;
      }
      lVar11 = uVar15 + lVar11;
      *(char *)(lVar36 + uVar23) = (char)lVar11;
      *(char *)(lVar36 + uVar23 + lVar11) = (char)uVar30;
      *(uint32_t *)(lVar29 + uVar23 * 4 + lVar11 * 4) = (uint32_t)uVar21;
      if ((uVar34 & 0xffffffff) - 1 == uVar21) break;
      uVar21 = uVar21 + 1;
    }
  }
  *(uint32_t *)(uVar31 + 0x2c) = uVar33;
  uVar21 = (uint64_t)*(uint32_t *)(uVar31 + 0x40 + (uint64_t)(uVar33 & 7) * 4);
  *(int *)(uVar31 + 0x40 + (uint64_t)(uVar33 & 7) * 4) =
       (int)((*(int64_t *)(lVar13 + 8 + (uVar34 & 0xffffffff)) * -0x30e4432345000000 ^ uVar38) >>
            (0x38U - cVar45 & 0x3f));
LAB_7fffa51766c8:
  uVar34 = (uint64_t)((uint32_t)(uVar21 >> 3) & 0x1fffffe0);
  uVar7 = (uint8_t)(uVar21 >> 0x10);
  uVar51 = (uint8_t)(uVar21 >> 0x18);
  uVar48 = (uint8_t)(uVar21 >> 8);
  auVar46._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar51,uVar51),uVar7),CONCAT14(uVar7,(int)uVar21)) >> 0x20);
  auVar46[3] = uVar48;
  auVar46[2] = uVar48;
  auVar46[0] = (uint8_t)uVar21;
  auVar46[1] = auVar46[0];
  auVar46._8_8_ = 0;
  auVar47 = pshuflw(auVar46,auVar46,0);
  *(int *)(uVar31 + 0x68) = *(int *)(uVar31 + 0x68) + (int)uVar21;
  lVar39 = lVar39 + uVar34 * 4;
  bVar10 = *(uint8_t *)(lVar24 + uVar34);
  pcVar2 = (char *)(lVar24 + uVar34);
  pcVar3 = (char *)(lVar24 + 0x10 + uVar34);
  cVar45 = auVar47[0];
  auVar44[0] = -(*pcVar2 == cVar45);
  cVar49 = auVar47[1];
  auVar44[1] = -(pcVar2[1] == cVar49);
  cVar50 = auVar47[2];
  auVar44[2] = -(pcVar2[2] == cVar50);
  cVar52 = auVar47[3];
  auVar44[3] = -(pcVar2[3] == cVar52);
  auVar44[4] = -(pcVar2[4] == cVar45);
  auVar44[5] = -(pcVar2[5] == cVar49);
  auVar44[6] = -(pcVar2[6] == cVar50);
  auVar44[7] = -(pcVar2[7] == cVar52);
  auVar44[8] = -(pcVar2[8] == cVar45);
  auVar44[9] = -(pcVar2[9] == cVar49);
  auVar44[10] = -(pcVar2[10] == cVar50);
  auVar44[0xb] = -(pcVar2[0xb] == cVar52);
  auVar44[0xc] = -(pcVar2[0xc] == cVar45);
  auVar44[0xd] = -(pcVar2[0xd] == cVar49);
  auVar44[0xe] = -(pcVar2[0xe] == cVar50);
  auVar44[0xf] = -(pcVar2[0xf] == cVar52);
  auVar47[0] = -(*pcVar3 == cVar45);
  auVar47[1] = -(pcVar3[1] == cVar49);
  auVar47[2] = -(pcVar3[2] == cVar50);
  auVar47[3] = -(pcVar3[3] == cVar52);
  auVar47[4] = -(pcVar3[4] == cVar45);
  auVar47[5] = -(pcVar3[5] == cVar49);
  auVar47[6] = -(pcVar3[6] == cVar50);
  auVar47[7] = -(pcVar3[7] == cVar52);
  auVar47[8] = -(pcVar3[8] == cVar45);
  auVar47[9] = -(pcVar3[9] == cVar49);
  auVar47[10] = -(pcVar3[10] == cVar50);
  auVar47[0xb] = -(pcVar3[0xb] == cVar52);
  auVar47[0xc] = -(pcVar3[0xc] == cVar45);
  auVar47[0xd] = -(pcVar3[0xd] == cVar49);
  auVar47[0xe] = -(pcVar3[0xe] == cVar50);
  auVar47[0xf] = -(pcVar3[0xf] == cVar52);
  uVar22 = CONCAT22((uint16_t)(SUB161(auVar47 >> 7,0) & 1) |
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
  puStack_58 = in_R11;
  if (uVar22 != 0) {
    uVar21 = (uint64_t)(uVar22 >> (bVar10 & 0x1f) | uVar22 << 0x20 - (bVar10 & 0x1f));
    lVar36 = 0;
    do {
      iVar40 = 0;
      for (uVar38 = uVar21; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x8000000000000000) {
        iVar40 = iVar40 + 1;
      }
      uVar22 = iVar40 + (uint32_t)bVar10 & 0x1f;
      if (uVar22 != 0) {
        uVar22 = *(uint32_t *)(lVar39 + (uint64_t)uVar22 * 4);
        if (uVar22 < uVar27) goto LAB_7fffa517676d;
        auStack_198[lVar36] = uVar22;
        lVar36 = lVar36 + 1;
        iVar42 = iVar42 + -1;
      }
      uVar21 = uVar21 & uVar21 - 1;
      if ((uVar21 == 0) || (iVar42 == 0)) goto LAB_7fffa517676d;
    } while( true );
  }
  lVar36 = 0;
LAB_7fffa517676d:
  lVar29 = 0x1f;
  if ((bVar10 & 0x1f) != 1) {
    lVar29 = 0;
  }
  lVar29 = lVar29 + (uint64_t)(bVar10 - 1 & 0x1f);
  *(uint8_t *)(lVar24 + uVar34) = (char)lVar29;
  ((uint8_t *)(lVar24 + uVar34))[lVar29] = auVar46[0];
  iVar40 = *(int *)(uVar31 + 0x2c);
  *(int *)(uVar31 + 0x2c) = iVar40 + 1;
  *(int *)(lVar39 + lVar29 * 4) = iVar40;
  if (lVar36 == 0) {
    uStack_1f8 = 3;
  }
  else {
    lStack_70 = lVar13 + 8;
    lVar24 = 0;
    uVar21 = 3;
    do {
      uVar22 = auStack_198[lVar24];
      puVar19 = (uint64_t *)(lVar13 + (uint64_t)uVar22);
      if (*(int *)((uVar21 - 3) + (int64_t)puVar19) == *(int *)((int64_t)param_3 + (uVar21 - 3)))
      {
        puVar16 = param_3;
        if (param_3 < (uint64_t *)((int64_t)puStack_58 - 7U)) {
          if (*puVar19 == *param_3) {
            lVar39 = lVar13 + 8 + (uint64_t)uVar22;
            lVar29 = 0;
            do {
              puVar16 = (uint64_t *)((int64_t)param_3 + lVar29 + 8);
              if ((uint64_t *)((int64_t)puStack_58 - 7U) <= puVar16) {
                puVar19 = (uint64_t *)(lVar39 + lVar29);
                goto joined_r0x7fffa5176856;
              }
              uVar31 = *(uint64_t *)(lVar39 + lVar29);
              lVar29 = lVar29 + 8;
            } while (uVar31 == *puVar16);
            uVar30 = 0;
            for (uVar31 = *puVar16 ^ uVar31; (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x8000000000000000) {
              uVar30 = uVar30 + 1;
            }
            uStack_1f8 = (uint64_t)(uVar30 >> 3) + lVar29;
          }
          else {
            uVar30 = 0;
            for (uVar31 = *param_3 ^ *puVar19; (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x8000000000000000) {
              uVar30 = uVar30 + 1;
            }
            uStack_1f8 = (uint64_t)(uVar30 >> 3);
          }
        }
        else {
joined_r0x7fffa5176856:
          if ((puVar16 < (uint64_t *)((int64_t)puStack_58 - 3U)) &&
             ((int)*puVar19 == (int)*puVar16)) {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
          }
          if ((puVar16 < (uint64_t *)((int64_t)puStack_58 - 1U)) &&
             ((short)*puVar19 == (short)*puVar16)) {
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
          }
          if (puVar16 < puStack_58) {
            puVar16 = (uint64_t *)
                      ((int64_t)puVar16 + (uint64_t)((char)*puVar19 == (char)*puVar16));
          }
          uStack_1f8 = (int64_t)puVar16 - (int64_t)param_3;
        }
        if ((uVar21 < uStack_1f8) &&
           (*puStack_68 = (uint64_t)((uVar33 + 3) - uVar22), uVar21 = uStack_1f8,
           (uint64_t *)(uStack_1f8 + (int64_t)param_3) == puStack_58)) break;
      }
      uStack_1f8 = uVar21;
      lVar24 = lVar24 + 1;
      uVar21 = uStack_1f8;
    } while (lVar24 != lVar36);
  }
  puVar19 = (uint64_t *)(lVar13 + (uint64_t)uVar35);
  pcVar2 = (char *)*puStack_98;
  lVar24 = puStack_98[1];
  uVar22 = *(uint32_t *)(puStack_98[0xe] + 0xc + uVar28 * 0x10);
  iVar40 = ((int)pcVar2 - (int)lVar24) - uVar35;
  uVar30 = iStack_84 + iVar42;
  bVar10 = (uint8_t)uStack_80;
  if (uVar30 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = 3;
    if (uVar30 < 3) {
      uVar21 = (uint64_t)uVar30;
    }
    puVar16 = (uint64_t *)((int64_t)param_3 + 4);
    puVar12 = (uint64_t *)((int64_t)puStack_58 + -7);
    uVar31 = 0;
    do {
      uVar22 = *(uint32_t *)(puStack_98[0xe] + uVar28 * 0x10 + uVar31 * 4);
      uVar34 = (uint64_t)uVar22;
      if (uVar34 == 0) {
        uVar34 = uStack_1f8;
        goto LAB_7fffa51772ae;
      }
      if (*(int *)(uVar34 + lVar24) == (int)*param_3) {
        puVar20 = (uint64_t *)((int *)(uVar34 + lVar24) + 1);
        puVar37 = (uint64_t *)(((int64_t)pcVar2 - (int64_t)puVar20) + (int64_t)puVar16);
        if (puStack_58 <= puVar37) {
          puVar37 = puStack_58;
        }
        puVar14 = (uint64_t *)((int64_t)puVar37 - 7);
        puVar17 = puVar16;
        puVar43 = puVar20;
        if (puVar16 < puVar14) {
          if (*puVar20 == *puVar16) {
            lVar39 = lVar24 + 0xc + uVar34;
            lVar36 = 0;
            do {
              puVar17 = (uint64_t *)((int64_t)param_3 + lVar36 + 0xc);
              if ((-0x3daaf408 << (bVar10 & 0x1f) | 0xc2550bf8U >> 0x20 - (bVar10 & 0x1f)) * uVar41
                  == 0x45af9b15) {
                if (puVar14 <= puVar17) goto LAB_7fffa5176bb8;
              }
              else if (puVar14 < puVar17) {
LAB_7fffa5176bb8:
                puVar43 = (uint64_t *)(lVar39 + lVar36);
                goto LAB_7fffa5176bc0;
              }
              uVar34 = *(uint64_t *)(lVar39 + lVar36);
              lVar36 = lVar36 + 8;
            } while (uVar34 == *puVar17);
            uVar27 = 0;
            for (uVar34 = uVar34 ^ *puVar17; (uVar34 & 1) == 0;
                uVar34 = uVar34 >> 1 | 0x8000000000000000) {
              uVar27 = uVar27 + 1;
            }
            uVar34 = (uint64_t)(uVar27 >> 3) + lVar36;
          }
          else {
            uVar27 = 0;
            for (uVar34 = *puVar16 ^ *puVar20; (uVar34 & 1) == 0;
                uVar34 = uVar34 >> 1 | 0x8000000000000000) {
              uVar27 = uVar27 + 1;
            }
            uVar34 = (uint64_t)(uVar27 >> 3);
          }
        }
        else {
LAB_7fffa5176bc0:
          if ((puVar17 < (uint64_t *)((int64_t)puVar37 - 3U)) && ((int)*puVar43 == (int)*puVar17))
          {
            puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
            puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
          }
          if ((puVar17 < (uint64_t *)((int64_t)puVar37 - 1U)) &&
             ((short)*puVar43 == (short)*puVar17)) {
            puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
            puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
          }
          if (puVar17 < puVar37) {
            puVar17 = (uint64_t *)
                      ((int64_t)puVar17 + (uint64_t)((char)*puVar43 == (char)*puVar17));
          }
          uVar34 = (int64_t)puVar17 - (int64_t)puVar16;
        }
        if ((char *)((int64_t)puVar20 + uVar34) == pcVar2) {
          puVar37 = (uint64_t *)((int64_t)puVar16 + uVar34);
          puVar14 = puVar19;
          puVar20 = puVar37;
          if (puVar37 < puVar12) {
            if (*puVar19 == *puVar37) {
              puVar20 = (uint64_t *)((int64_t)param_3 + uVar34 + 0xc);
              lVar39 = 8;
              if (puVar20 < puVar12) {
LAB_7fffa5176c90:
                if (*(uint64_t *)((int64_t)puVar19 + lVar39) == *puVar20)
                goto code_r0x7fffa5176ca5;
                uVar27 = 0;
                for (uVar38 = *puVar20 ^ *(uint64_t *)((int64_t)puVar19 + lVar39);
                    (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x8000000000000000) {
                  uVar27 = uVar27 + 1;
                }
                uVar38 = (uint64_t)(uVar27 >> 3) + lVar39;
                goto LAB_7fffa5176d0a;
              }
LAB_7fffa5176cb7:
              puVar14 = (uint64_t *)(lVar39 + (int64_t)puVar19);
              goto LAB_7fffa5176cbc;
            }
            uVar27 = 0;
            for (uVar38 = *puVar19 ^ *puVar37; (uVar38 & 1) == 0;
                uVar38 = uVar38 >> 1 | 0x8000000000000000) {
              uVar27 = uVar27 + 1;
            }
            uVar38 = (uint64_t)(uVar27 >> 3);
          }
          else {
LAB_7fffa5176cbc:
            if ((puVar20 < (uint64_t *)((int64_t)puStack_58 - 3U)) &&
               ((int)*puVar14 == (int)*puVar20)) {
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
              puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
            }
            if ((puVar20 < (uint64_t *)((int64_t)puStack_58 - 1U)) &&
               ((short)*puVar14 == (short)*puVar20)) {
              puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            }
            if (puVar20 < puStack_58) {
              puVar20 = (uint64_t *)
                        ((int64_t)puVar20 + (uint64_t)((char)*puVar14 == (char)*puVar20));
            }
            uVar38 = (int64_t)puVar20 - (int64_t)puVar37;
          }
LAB_7fffa5176d0a:
          uVar34 = uVar34 + uVar38;
        }
        uVar34 = uVar34 + 4;
        if ((uStack_1f8 < uVar34) &&
           (*puStack_68 = (uint64_t)((uVar33 + 3 + iVar40) - uVar22), uStack_1f8 = uVar34,
           (uint64_t *)((int64_t)param_3 + uVar34) == puStack_58)) goto LAB_7fffa51772ae;
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar21);
    uVar22 = *(uint32_t *)(puStack_98[0xe] + (uVar28 << 2 | 3) * 4);
  }
  uVar30 = uVar30 - (int)uVar21;
  if ((uVar22 & 0xff) <= uVar30) {
    uVar30 = uVar22 & 0xff;
  }
  uVar34 = uStack_1f8;
  if (uVar30 != 0) {
    uVar25 = (uint16_t)uStack_90 ^ 0xfdec;
    if ((((uint32_t)uStack_80 | 1) * (uint32_t)(uint16_t)(uVar25 << 1 | (uint16_t)((short)uVar25 < 0)) - 0x6206
        & 0xffff) <= uVar30) {
      uVar21 = 0;
      do {
        uVar21 = uVar21 + 8;
      } while (uVar21 != (uVar30 & 0xf8));
    }
    if ((uint64_t)(uVar30 & 7) != 0) {
      for (lVar39 = 0; (uint64_t)(uVar30 & 7) * 4 + -4 != lVar39; lVar39 = lVar39 + 4) {
      }
    }
    uVar21 = (uint64_t)(uVar22 >> 8);
    iVar42 = (int)*param_3;
    puVar16 = (uint64_t *)((int64_t)param_3 + 4);
    lVar13 = (uint64_t)uVar35 + lVar13 + 8;
    uVar22 = 0;
    do {
      uVar35 = *(uint32_t *)(puStack_98[0x10] + uVar21 * 4);
      uVar28 = (int64_t)(int)uVar35;
      if (((uint32_t)uStack_90 ^ 0x21378433) - (uint32_t)uStack_80 == -0x467506d9) {
        uVar28 = (uint64_t)uVar35;
      }
      if (*(int *)(lVar24 + uVar28) == iVar42) {
        puVar37 = (uint64_t *)(uVar28 + lVar24 + 4);
        puVar12 = (uint64_t *)(((int64_t)pcVar2 - (int64_t)puVar37) + (int64_t)puVar16);
        if (puStack_58 <= puVar12) {
          puVar12 = puStack_58;
        }
        puVar14 = puVar37;
        puVar20 = puVar16;
        if (puVar16 < (uint64_t *)((int64_t)puVar12 - 7U)) {
          if (*puVar37 == *puVar16) {
            lVar39 = uVar28 + lVar24 + 0xc;
            lVar36 = 0;
            do {
              puVar20 = (uint64_t *)((int64_t)param_3 + lVar36 + 0xc);
              if ((uint64_t *)((int64_t)puVar12 - 7U) <= puVar20) {
                puVar14 = (uint64_t *)(lVar39 + lVar36);
                goto LAB_7fffa517703c;
              }
              uVar28 = *(uint64_t *)(lVar39 + lVar36);
              lVar36 = lVar36 + 8;
            } while (uVar28 == *puVar20);
            uVar27 = 0;
            for (uVar28 = uVar28 ^ *puVar20; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar27 = uVar27 + 1;
            }
            uVar34 = (uint64_t)(uVar27 >> 3) + lVar36;
          }
          else {
            uVar27 = 0;
            for (uVar28 = *puVar16 ^ *puVar37; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar27 = uVar27 + 1;
            }
            uVar34 = (uint64_t)(uVar27 >> 3);
          }
        }
        else {
LAB_7fffa517703c:
          uVar27 = (0x779d8687 - (uint32_t)uStack_90) * 0x80000 | 0x779d8687 - (uint32_t)uStack_90 >> 0xd;
          bVar6 = puVar20 == (uint64_t *)((int64_t)puVar12 - 3U);
          if ((uint64_t)(((-0x2768b0bd - (uint32_t)uStack_80) * 0x683d7f4d ^ 0xa6ab87e7) * uVar41) <=
              (uint64_t)
              (int64_t)(int)(uVar27 << (bVar10 & 0x1f) | uVar27 >> 0x20 - (bVar10 & 0x1f))) {
            bVar6 = puVar20 < (uint64_t *)((int64_t)puVar12 - 3U);
          }
          if ((bVar6) && ((int)*puVar14 == (int)*puVar20)) {
            puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
          }
          if ((puVar20 < (uint64_t *)((int64_t)puVar12 - 1U)) &&
             ((short)*puVar14 == (short)*puVar20)) {
            puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
            puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
          }
          if (puVar20 < puVar12) {
            puVar20 = (uint64_t *)
                      ((int64_t)puVar20 + (uint64_t)((char)*puVar14 == (char)*puVar20));
          }
          uVar34 = (int64_t)puVar20 - (int64_t)puVar16;
        }
        if ((char *)((int64_t)puVar37 + uVar34) == pcVar2) {
          puVar12 = (uint64_t *)(uVar34 + (int64_t)puVar16);
          puVar20 = puVar19;
          puVar37 = puVar12;
          if (puVar12 < (uint64_t *)((int64_t)puStack_58 - 7U)) {
            if (*puVar19 == *puVar12) {
              lVar39 = 0;
              do {
                puVar37 = (uint64_t *)((int64_t)param_3 + lVar39 + uVar34 + 0xc);
                if ((uint64_t *)((int64_t)puStack_58 - 7U) <= puVar37) {
                  puVar20 = (uint64_t *)(lVar39 + lVar13);
                  goto LAB_7fffa5177208;
                }
                uVar28 = *(uint64_t *)(lVar13 + lVar39);
                lVar39 = lVar39 + 8;
              } while (uVar28 == *puVar37);
              uVar31 = 0;
              for (uVar28 = *puVar37 ^ uVar28; (uVar28 & 1) == 0;
                  uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                uVar31 = uVar31 + 1;
              }
              uVar27 = (0x5b911317 - (uint32_t)uStack_90) * -0x7b7806c5 + 0x10dec272;
              uVar28 = uVar31 >> 3 & 0x1fffffff;
              if ((int64_t)
                  (uint64_t)(uVar27 << (bVar10 & 0x1f) | uVar27 >> 0x20 - (bVar10 & 0x1f)) <
                  (int64_t)(int)(((uint32_t)uStack_90 ^ 0xb3a23798) * -0x34f0f50d ^ 0x999284b2)) {
                uVar28 = uVar31 ^ 3;
              }
              uVar28 = uVar28 + lVar39;
            }
            else {
              uVar27 = 0;
              for (uVar28 = *puVar19 ^ *puVar12; (uVar28 & 1) == 0;
                  uVar28 = uVar28 >> 1 | 0x8000000000000000) {
                uVar27 = uVar27 + 1;
              }
              uVar28 = (uint64_t)(uVar27 >> 3);
            }
          }
          else {
LAB_7fffa5177208:
            if ((puVar37 < (uint64_t *)((int64_t)puStack_58 + -3)) &&
               ((int)*puVar20 == (int)*puVar37)) {
              puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            }
            if ((puVar37 < (uint64_t *)((int64_t)puStack_58 - 1U)) &&
               ((short)*puVar20 == (short)*puVar37)) {
              puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            }
            if (puVar37 < puStack_58) {
              puVar37 = (uint64_t *)
                        ((int64_t)puVar37 + (uint64_t)((char)*puVar20 == (char)*puVar37));
            }
            uVar28 = (int64_t)puVar37 - (int64_t)puVar12;
          }
          uVar34 = uVar34 + uVar28;
        }
        uVar34 = uVar34 + 4;
        if (uStack_1f8 < uVar34) {
          *puStack_68 = (uint64_t)((uVar33 + 3 + iVar40) - uVar35);
          if ((uint64_t *)((int64_t)param_3 + uVar34) == puStack_58) {
            break;
          }
          iVar42 = (int)*param_3;
          uStack_1f8 = uVar34;
        }
      }
      uVar22 = uVar22 + 1;
      uVar21 = uVar21 + 1;
      uVar34 = uStack_1f8;
    } while (uVar22 != uVar30);
  }
LAB_7fffa51772ae:
  bVar10 = (uint8_t)uStack_90 & 0x1f;
  return ((0x1d872802 - (uint32_t)uStack_80 << bVar10 | 0x1d872802 - (uint32_t)uStack_80 >> 0x20 - bVar10) +
         0xb2b3b86f) + uVar34;
code_r0x7fffa5176ca5:
  puVar20 = puVar20 + 1;
  lVar39 = lVar39 + 8;
  if (puVar12 <= puVar20) goto LAB_7fffa5176cb7;
  goto LAB_7fffa5176c90;
}


// ============================================================================
// Function : FUN_7fffa5177440  |  RVA: 0xa07440  |  Size: 1646 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa5177965) overlaps instruction at (ram,0x7fffa5177964)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa5177b0e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5177440(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                     uint64_t param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  short *psVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t *puVar6;
  uint64_t uVar7;
  uint32_t *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int64_t *plVar14;
  uint64_t **ppuVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  uint16_t uVar21;
  uint64_t in_R11;
  int64_t *plVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  uint8_t in_AF;
  uint8_t in_TF;
  uint8_t in_IF;
  bool bVar25;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  uint8_t auVar26 [16];
  int64_t lStack_108;
  uint8_t *puStack_100;
  uint8_t auStack_f8 [48];
  int64_t lStack_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  uint64_t **ppuStack_b0;
  int64_t **pplStack_a8;
  int iStack_9c;
  code *pcStack_98;
  uint64_t uStack_90;
  int64_t *plStack_88;
  uint64_t *puStack_80;
  uint64_t *puStack_78;
  uint32_t uStack_6c;
  uint64_t *puStack_68;
  int iStack_5c;
  
  bVar25 = false;
  ppuVar15 = &puStack_78;
  uVar9 = param_1 << 0x37 | param_1 >> 9;
  param_5 = param_5 << 7 ^ param_5;
  uVar7 = param_5 << 0xe ^ param_5;
  puStack_78 = (uint64_t *)((uVar7 << 0x1c ^ param_5 << 0x38 ^ uVar7) * -0x377e80982fd53945);
  uVar18 = (uint32_t)in_R11;
  uVar19 = uVar18 | 1;
  uVar9 = uVar9 * 4 ^ uVar9;
  uVar9 = uVar9 << 4 ^ uVar9;
  uVar9 = uVar9 << 8 ^ uVar9;
  uVar7 = uVar9 * 0x10000 ^ uVar9;
  if (0xb0f1a761 - uVar18 <= (uVar19 * 0xf3e2b10 | uVar19 * -0x7f0c1d4f >> 0x1c)) {
    uVar7 = uVar9 * -0xffff;
  }
  uVar7 = uVar7 << 0x20 ^ uVar7;
  puStack_68 = (uint64_t *)(uVar7 >> 0x17 ^ uVar7 >> 0x2e ^ uVar7);
  plStack_b8 = (int64_t *)CONCAT44(plStack_b8._4_4_,0xae8e7af9);
  bVar5 = (uint8_t)in_R11 & 0x1f;
  iStack_5c = uVar19 * -0x59d50283 + 0x6bd46256;
  plVar22 = (int64_t *)0x10000000;
  if ((int64_t *)puStack_68[1] < (int64_t *)0x10000000) {
    plVar22 = (int64_t *)puStack_68[1];
  }
  uVar17 = (uint64_t)(uVar19 * -0x4eb512a2) + (int64_t)param_4;
  bVar4 = (uint8_t)in_R11 & 0xf;
  pcStack_98 = (code *)((int64_t)(short)(0x4a30 << bVar4 | 0x4a30U >> 0x10 - bVar4) +
                       0x7fffa5699fd8);
  uVar10 = (puStack_78[1] + 0xfff & 0xfffffffffffff000) + (int64_t)plVar22;
  uVar7 = uVar10 * 2;
  uVar23 = ~uVar7 & uVar10;
  uVar11 = (uint64_t)(((0xa29c0404 - uVar18) * 0x800000 | 0xa29c0404 - uVar18 >> 9) + 0x9fb6ea56) *
           (uVar7 ^ uVar10) + (uVar7 & uVar10) * 0xa0e76024 + (0xc5aba6bb - uVar18) * uVar23;
  uVar9 = ~uVar10 ^ uVar7;
  uVar20 = uVar9 | 0xffffffffce4cbc2e;
  if (0x6669201b - uVar18 < (uVar18 + 0x1c655e41) * 0xb9b3491 + 0x9ba09c94) {
    uVar20 = uVar9 * -0x31b343d2;
  }
  lVar12 = (int64_t)iStack_5c;
  puVar13 = (uint64_t *)(uVar20 & uVar11);
  if ((int64_t)(int)(uVar18 ^ 0xf23b1984) <=
      (int64_t)(uint64_t)(0xc0c82becU >> bVar5 | -0x3f37d414 << 0x20 - bVar5)) {
    puVar13 = (uint64_t *)(uVar11 + uVar20);
  }
  puVar16 = (uint64_t *)
            ((~uVar10 & ~uVar7) * 0xa0e76024 + uVar23 * -0x656c33a1 + (uVar7 ^ uVar10) * 0x5a5c03b5
            + (int64_t)puVar13);
  puStack_100 = (uint8_t *)0x7fffa5177737;
  plStack_c0 = param_4;
  uStack_90 = in_R11;
  uStack_6c = uVar19;
  (*pcStack_98)((int64_t)puVar16 * 0x40000 | (uint64_t)puVar16 >> 0x2e,
                (uVar17 & 0xffffffff) * 0xffffffff + (uVar17 >> 0x20) * 0xaa25915d << 0x20);
  puVar24 = puStack_68;
  plVar14 = (int64_t *)auStack_f8;
  lStack_c8 = *plStack_c0;
  if ((*(uint64_t *)
        (*(int64_t *)
          ((uint64_t)(uint16_t)((short)uVar19 * -0x58e0 | (uint16_t)((short)uVar19 * 0x34e4) >> 0xd) +
          0xff00000000) + 0x18) & 0x6f73dbf8322e3319) == 0x42cb9832d3f4ebb7) {
    uVar7 = 0;
    puStack_100 = auStack_f8;
    plVar14 = &lStack_108;
    lStack_108 = lVar12;
    puVar24 = puVar13;
    goto code_r0x7fffa5177b11;
  }
  puVar13 = puStack_68 + 3;
  for (uVar7 = 0; uVar7 < *(uint32_t *)((int64_t)puVar24 + 0x14); uVar7 = uVar7 + 1) {
    plStack_88 = (int64_t *)puVar13[1];
    if (plVar22 <= (int64_t *)puVar13[1]) {
      plStack_88 = plVar22;
    }
    puStack_80 = puVar13;
    if (plStack_88 == (int64_t *)0x0) {
      iStack_9c = -0x7f023b24;
      break;
    }
    if ((*(uint8_t *)((int64_t)puVar13 + 0x14) & 0xfe) != 0) {
      pplStack_a8 = &plStack_88;
      plStack_b8 = &lStack_c8;
      ppuStack_b0 = &puStack_80;
      uVar20 = ((int64_t)&plStack_b8 << 0x36 | (uint64_t)&plStack_b8 >> 10) ^
               ((int64_t)&plStack_b8 * 0x80 | (uint64_t)&plStack_b8 >> 0x39) ^
               (uint64_t)&plStack_b8;
      uVar9 = uVar20 >> 0xd;
      uVar9 = uVar9 << 0xe ^ (uVar20 << 0x33 | uVar9);
      auVar26._8_4_ = (int)uVar9;
      auVar26._0_8_ = uVar9;
      auVar26._12_4_ = (int)(uVar9 >> 0x20);
      puStack_100 = (uint8_t *)0x7fffa51778a6;
      (*(code *)(&UNK_7fffa52deae4 + ((int)in_R11 + -0x604046ce)))
                (uVar9,(int64_t)((int)in_R11 + 0x4e6436ce),
                 *(uint64_t *)
                  (*(int64_t *)((uint64_t)(uVar19 * -0x8542 - 0x4bda & 0xffff) + 0xff00000000) +
                  0x60) ^ 0x1ffcd2886b1c5833,(auVar26._8_8_ + 0x48453efe) * 0x20000000);
      in_R11 = uStack_90;
    }
    iStack_9c = (int)in_R11 + -0x6edf2b2d;
    plVar22 = (int64_t *)((int64_t)plVar22 - (int64_t)plStack_88);
    lStack_c8 = lStack_c8 + (int64_t)plStack_88;
    puVar13 = puVar13 + 4;
  }
  puStack_80 = (uint64_t *)CONCAT44(puStack_80._4_4_,0x483c6d55);
  puVar6 = auStack_f8;
  puVar16 = puStack_78;
  plVar22 = plStack_c0;
  if (puStack_78[1] == 0) goto LAB_7fffa517793b;
  puStack_80 = (uint64_t *)CONCAT44(puStack_80._4_4_,0x77720377);
  uVar7 = 0x77720377;
  do {
    uVar1 = *puVar16;
    uVar2 = puVar16[1];
    puVar13 = ppuVar15[-10];
    *(uint64_t *)((int64_t)plVar14 + -8) = 0x7fffa517793b;
    FUN_7fffa56a5f20(puVar13,uVar1,uVar2,uVar7);
    puVar6 = (uint8_t *)plVar14;
LAB_7fffa517793b:
    do {
      plVar14 = (int64_t *)puVar6;
      uVar21 = (short)in_R11 + 0xa4e6;
      puVar6 = (uint8_t *)plVar14;
    } while (*(int64_t *)((uint64_t)(uint16_t)(uVar21 * 0x200 | uVar21 >> 7) + 0xff00000000) ==
             -0x3951e05d7604c423);
    psVar3 = (short *)*plVar22;
    if (((psVar3 == (short *)0x0) || (*psVar3 != 0x5a4d)) ||
       (uVar9 = (uint64_t)*(uint32_t *)(psVar3 + 0x1e), *(int *)((int64_t)psVar3 + uVar9) != 0x4550))
    {
LAB_7fffa5177a53_5:
      *(uint32_t *)(ppuVar15 + -1) = 0xbdfd5fff;
      uVar7 = (uint64_t)*(uint32_t *)(ppuVar15 + -1);
    }
    else {
      uVar7 = (int64_t)psVar3 + uVar9;
      *(uint64_t *)((int64_t)plVar14 + -8) =
           (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)SCARRY8((int64_t)psVar3,uVar9) * 0x800 |
           (uint64_t)bVar25 * 0x400 | (uint64_t)(in_IF & 1) * 0x200 |
           (uint64_t)(in_TF & 1) * 0x100 | (uint64_t)((int64_t)uVar7 < 0) * 0x80 |
           (uint64_t)(uVar7 == 0) * 0x40 | (uint64_t)(in_AF & 1) * 0x10 |
           (uint64_t)((POPCOUNT(uVar7 & 0xff) & 1U) == 0) * 4 |
           (uint64_t)CARRY8((uint64_t)psVar3,uVar9) | (uint64_t)(in_ID & 1) * 0x200000 |
           (uint64_t)(in_VIP & 1) * 0x100000 | (uint64_t)(in_VIF & 1) * 0x80000 |
           (uint64_t)(in_AC & 1) * 0x40000;
      *(uint64_t *)((int64_t)plVar14 + -8) =
           *(uint64_t *)((int64_t)plVar14 + -8) & 0xfffffffffffffeff;
      uVar9 = *(uint64_t *)((int64_t)plVar14 + -8);
      in_NT = (uVar9 & 0x4000) != 0;
      bVar25 = (uVar9 & 0x400) != 0;
      in_IF = (uVar9 & 0x200) != 0;
      in_TF = (uVar9 & 0x100) != 0;
      in_AF = (uVar9 & 0x10) != 0;
      in_ID = (uVar9 & 0x200000) != 0;
      in_AC = (uVar9 & 0x40000) != 0;
      in_VIP = 0;
      in_VIF = 0;
      *(uint32_t *)(ppuVar15 + -1) = 0x24200900;
      if (*(short *)(uVar7 + 6) == 0) goto LAB_7fffa5177a53_5;
      puVar8 = (uint32_t *)(uVar7 + *(uint16_t *)(uVar7 + 0x14) + 0x2c);
      uVar9 = 1;
      while (*(uint32_t *)(ppuVar15 + -1) = (uint32_t)in_R11 ^ 0xaa81bc74,
            ((uint64_t)ppuVar15[-1] & 1) == 0) {
        *puVar8 = puVar8[-2];
        puVar8[-1] = (*(int *)(uVar7 + 0x38) + puVar8[-3]) - 1U & -*(int *)(uVar7 + 0x38);
        if (*(uint16_t *)(uVar7 + 6) <= uVar9) goto LAB_7fffa5177a53_5;
        puVar8 = puVar8 + 10;
        uVar9 = uVar9 + 1;
      }
      ppuVar15 = (uint64_t **)0xf84d8b44;
    }
    uVar18 = (uint32_t)uVar7;
    uVar19 = uVar18 + 0xb60704df;
    if (uVar18 >= 0x49f8fb21 && uVar19 != 0) {
      *(uint64_t *)((int64_t)plVar14 + -8) =
           (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)SBORROW4(uVar18,0x49f8fb21) * 0x800 |
           (uint64_t)bVar25 * 0x400 | (uint64_t)(in_IF & 1) * 0x200 |
           (uint64_t)(in_TF & 1) * 0x100 | (uint64_t)((int)uVar19 < 0) * 0x80 |
           (uint64_t)(uVar19 == 0) * 0x40 | (uint64_t)(in_AF & 1) * 0x10 |
           (uint64_t)((POPCOUNT(uVar19 & 0xff) & 1U) == 0) * 4 | (uint64_t)(uVar18 < 0x49f8fb21) |
           (uint64_t)(in_ID & 1) * 0x200000 | (uint64_t)(in_VIP & 1) * 0x100000 |
           (uint64_t)(in_VIF & 1) * 0x80000 | (uint64_t)(in_AC & 1) * 0x40000;
      *(uint32_t *)(ppuVar15 + -1) = 0x114b1800;
      *(uint64_t *)(*plVar22 + 0xff0) = *puVar24;
      *(uint32_t *)(*plVar22 + 0xff8) = *(uint32_t *)(puVar24 + 1);
      *(uint32_t *)(*plVar22 + 0xffc) = *(uint32_t *)(puVar16 + 1);
      return;
    }
code_r0x7fffa5177b11:
    _DAT_7fffa516ddfa = _DAT_7fffa516ddfa & 0x926926ff;
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa5177b20  |  RVA: 0xa07b20  |  Size: 155 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5177b20(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  uVar1 = **(uint64_t **)(param_2 + 0x38);
  if (uVar1 != 0) {
    (*(code *)((int64_t)(int)(0x2485ff27U - (int)*(uint64_t *)(param_2 + 0x68) ^ 0x3bb9e046) +
              0x7fffa5690fe5))(param_1,*(uint64_t *)(param_2 + 0x68),uVar1 >> 0x3d ^ uVar1);
    puVar2 = *(uint64_t **)(param_2 + 0x38);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5177bc0  |  RVA: 0xa07bc0  |  Size: 206 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5177bc0(int64_t param_1,uint64_t *param_2,int64_t param_3)

{
  uint32_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *in_RAX;
  uint32_t *puVar12;
  uint32_t *puVar13;
  uint32_t *puVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar15 = (int64_t)param_2 - param_1;
  param_1 = param_1 + param_3;
  puVar14 = (uint32_t *)(param_1 + -0x10 + lVar15);
  uVar4 = puVar14[1];
  uVar5 = puVar14[2];
  uVar6 = puVar14[3];
  puVar12 = (uint32_t *)(param_1 + -0x10);
  uVar16 = param_3 - 0x10;
  puVar13 = puVar12;
  uVar18 = *puVar14;
  uVar19 = uVar4;
  uVar20 = uVar5;
  uVar21 = uVar6;
  if (((uint64_t)puVar12 & 0xf) != 0) {
    puVar13 = (uint32_t *)((uint64_t)puVar12 & 0xfffffffffffffff0);
    puVar1 = (uint32_t *)((int64_t)puVar13 + lVar15);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar20 = puVar1[2];
    uVar21 = puVar1[3];
    *puVar12 = *puVar14;
    *(uint32_t *)(param_1 + -0xc) = uVar4;
    *(uint32_t *)(param_1 + -8) = uVar5;
    *(uint32_t *)(param_1 + -4) = uVar6;
    uVar16 = (int64_t)puVar13 - (int64_t)in_RAX;
  }
  uVar17 = uVar16 >> 7;
  if (uVar17 != 0) {
    *puVar13 = uVar18;
    puVar13[1] = uVar19;
    puVar13[2] = uVar20;
    puVar13[3] = uVar21;
    puVar14 = puVar13;
    while( true ) {
      puVar2 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar13 = puVar14 + -0x20;
      *(uint64_t *)(puVar14 + -4) = *puVar2;
      *(uint64_t *)(puVar14 + -2) = uVar9;
      *(uint64_t *)(puVar14 + -8) = uVar10;
      *(uint64_t *)(puVar14 + -6) = uVar11;
      puVar2 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar17 = uVar17 - 1;
      *(uint64_t *)(puVar14 + -0xc) = *puVar2;
      *(uint64_t *)(puVar14 + -10) = uVar9;
      *(uint64_t *)(puVar14 + -0x10) = uVar10;
      *(uint64_t *)(puVar14 + -0xe) = uVar11;
      puVar2 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(uint64_t *)(puVar14 + -0x14) = *puVar2;
      *(uint64_t *)(puVar14 + -0x12) = uVar9;
      *(uint64_t *)(puVar14 + -0x18) = uVar10;
      *(uint64_t *)(puVar14 + -0x16) = uVar11;
      puVar2 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar12 = (uint32_t *)((int64_t)puVar13 + lVar15);
      uVar18 = *puVar12;
      uVar19 = puVar12[1];
      uVar20 = puVar12[2];
      uVar21 = puVar12[3];
      if (uVar17 == 0) break;
      *(uint64_t *)(puVar14 + -0x1c) = uVar9;
      *(uint64_t *)(puVar14 + -0x1a) = uVar10;
      *puVar13 = uVar18;
      puVar14[-0x1f] = uVar19;
      puVar14[-0x1e] = uVar20;
      puVar14[-0x1d] = uVar21;
      puVar14 = puVar13;
    }
    *(uint64_t *)(puVar14 + -0x1c) = uVar9;
    *(uint64_t *)(puVar14 + -0x1a) = uVar10;
    uVar16 = uVar16 & 0x7f;
  }
  for (uVar17 = uVar16 >> 4; uVar17 != 0; uVar17 = uVar17 - 1) {
    *puVar13 = uVar18;
    puVar13[1] = uVar19;
    puVar13[2] = uVar20;
    puVar13[3] = uVar21;
    puVar13 = puVar13 + -4;
    puVar14 = (uint32_t *)((int64_t)puVar13 + lVar15);
    uVar18 = *puVar14;
    uVar19 = puVar14[1];
    uVar20 = puVar14[2];
    uVar21 = puVar14[3];
  }
  if ((uVar16 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar13 = uVar18;
  puVar13[1] = uVar19;
  puVar13[2] = uVar20;
  puVar13[3] = uVar21;
  return;
}


// ============================================================================
// Function : FUN_7fffa5177ca0  |  RVA: 0xa07ca0  |  Size: 1 bytes
// Callers  : FUN_7fffa5697680@0xf27680
// Callees  : none
// ============================================================================
void FUN_7fffa5177ca0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5177cb0  |  RVA: 0xa07cb0  |  Size: 582 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5177e6a) */

void FUN_7fffa5177cb0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  lVar2 = 0;
  bRam00007fffa47bf7a7 = '\0';
  uRam00007fffa47bf7c1 = 0;
  uRam00007fffa47bf7c9 = 0;
  uRam00007fffa47bf7b1 = 0;
  uRam00007fffa47bf7b9 = 0;
  uRam00007fffa47bf7e0 = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x3d6ce5432b8b013 + 0xb;
  while( true ) {
    lVar3 = lVar3 * 0x3d6ce5432b8b013 + 0xb;
    lVar4 = lVar3 * 0x3d6ce5432b8b013 + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf7a2) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bf7a3) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar2 == 0x44) break;
    lVar3 = lVar4 * 0x3d6ce5432b8b013 + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf7a4) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x3d6ce5432b8b013 + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf7a5) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 4;
  }
  bRam00007fffa47bf7a7 = bRam00007fffa47bf7a7 + 1 & 3;
  *(uint64_t *)((uint64_t)bRam00007fffa47bf7a7 * 8 + 0x7fffa47bf7b1) = uRam00007fffa47bf7e0;
  return;
}


// ============================================================================
// Function : FUN_7fffa5177ef8  |  RVA: 0xa07ef8  |  Size: 55 bytes
// Callers  : FUN_7fffa507a38c@0x90a38c
// Callees  : FUN_7fffa4ee8e08@0x778e08, FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
void FUN_7fffa5177ef8(uint8_t **param_1)

{
  if (((param_1 != (uint8_t **)0x0) && (param_1 != &PTR_DAT_7fffa56b3f70)) &&
     (*(int *)((int64_t)param_1 + 0x15c) == 0)) {
    FUN_7fffa4ee8e08();
    FUN_7fffa52d8dd0(param_1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5177f30  |  RVA: 0xa07f30  |  Size: 728 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5177f30(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint64_t in_RAX;
  int64_t lVar4;
  int64_t lVar5;
  uint32_t uVar6;
  uint16_t uVar7;
  
  uRam00007fffa4785558 = 0;
  uRam00007fffa4785559 = 0;
  uRam00007fffa4785548 = 0;
  uRam00007fffa4785550 = 0;
  uRam00007fffa4785551 = 0;
  uRam00007fffa4785538 = 0;
  uRam00007fffa4785540 = 0;
  uRam00007fffa4785528 = 0;
  uRam00007fffa4785530 = 0;
  uRam00007fffa4785518 = 0;
  uRam00007fffa4785520 = 0;
  uVar2 = rdtsc();
  lVar4 = (CONCAT44(0x7fff,(int)((uint64_t)uVar2 >> 0x20)) << 0x20 |
          CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar2)) * 0x25195a0f1587d6c;
  lVar5 = 0;
  while( true ) {
    *(char *)(lVar5 + 0x7fffa4785510) = (char)((uint64_t)(lVar4 * 0xa0f1587d6c) >> 0x20);
    uVar1 = lVar5 + 3;
    *(char *)(lVar5 + 0x7fffa4785511) = (char)((uint64_t)(lVar4 * 0xbbcfb2a590) >> 0x20);
    *(char *)(lVar5 + 0x7fffa4785512) = (char)((uint64_t)(lVar4 * 0xeb53b528c0) >> 0x20);
    if ((uVar1 << 0x2c | uVar1 >> 0x14) * -0x3d1d7b76749b6e23 == 0x226ed00000000000) break;
    *(char *)(lVar5 + 0x7fffa4785514) = (char)((uint64_t)(lVar4 * 0x7c6eaaac00) >> 0x20);
    *(char *)(lVar5 + 0x7fffa4785513) = (char)((uint64_t)(lVar4 * 0xc98752f100) >> 0x20);
    lVar4 = lVar4 * 0x2199c91f25fc9000;
    *(char *)(lVar5 + 0x7fffa4785515) = (char)((uint64_t)lVar4 >> 0x20);
    lVar5 = lVar5 + 6;
  }
  uVar6 = (int)uVar1 * -0x73ee6345 + 0x85ee68d4;
  uVar7 = (short)uVar1 + 0x8f37;
  bVar3 = *(char *)((int64_t)(int)(uVar6 * 0x40000 | uVar6 >> 0xe) + 0x7fffa478f715) + 1U & 7;
  *(uint64_t *)((int64_t)((int)uVar1 + -0xba0e) + 0x7fffa4790ed6 + (uint64_t)bVar3 * 8) =
       0xffffffffffffffff;
  *(uint8_t *)((int64_t)(short)(uVar7 * 0x10 | uVar7 >> 0xc) + 0x7fffa4785c90) = bVar3;
  return;
}


// ============================================================================
// Function : FUN_7fffa5178cfc  |  RVA: 0xa08cfc  |  Size: 26 bytes
// Callers  : FUN_7fffa549cd74@0xd2cd74
// Callees  : FUN_7fffa5130724@0x9c0724
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5178cfc(int64_t *param_1)

{
  if (*param_1 != _DAT_7fffa4781c30) {
    FUN_7fffa5130724();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5179320  |  RVA: 0xa09320  |  Size: 3819 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
void FUN_7fffa5179320(uint64_t param_1)

{
  uint64_t *puVar1;
  uint32_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  bool bVar7;
  uint8_t bVar8;
  uint16_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int iVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  code *pcVar19;
  uint64_t in_R10;
  uint64_t uVar20;
  int64_t lVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint32_t uVar26;
  bool bVar27;
  
  uVar26 = (uint32_t)param_1;
  uVar24 = uVar26 | 1;
  uVar16 = (in_R10 << 0x33 | in_R10 >> 0xd) ^ (in_R10 << 8 | in_R10 >> 0x38) ^ in_R10;
  uVar16 = (uVar16 << 0x26 | uVar16 >> 0x1a) ^ (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar16;
  uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) ^ (uVar16 << 0xc | uVar16 >> 0x34) ^ uVar16;
  uVar16 = (uVar16 << 0x14 | uVar16 >> 0x2c) ^ (uVar16 << 0xb | uVar16 >> 0x35) ^
           (uVar16 << 0x28 | uVar16 >> 0x18);
  uVar20 = (uVar16 << 6 | uVar16 >> 0x3a) ^ uVar16;
  uVar16 = uVar16 << 0x18 | uVar16 >> 0x28;
  uVar22 = ~uVar16;
  uVar17 = uVar20 & uVar22;
  uVar22 = uVar22 ^ uVar20;
  if (uVar24 * 0x49cd2816 + 0x25afc5c8 < 0x2310ba3e) {
    uVar22 = uVar17;
  }
  uVar16 = ~uVar20 & uVar16;
  lVar21 = uVar16 + 0x11469674;
  if ((int64_t)(int)((uVar26 + 0x607dbdd6) * -0x4b9820fb) <
      (int64_t)(uint64_t)((uVar24 * -0x38840000 | uVar24 * 0x4a67e3be >> 0xf) + 0x88df4ad1)) {
    lVar21 = uVar16 * -0x11469674;
  }
  uVar16 = lVar21 + uVar17 * -0x58730658 + uVar16 * 0x11469675 + uVar22 * 0x58730659;
  uVar16 = (uVar16 << 0x30 | uVar16 >> 0x10) ^ (uVar16 * 0x1000 | uVar16 >> 0x34) ^ uVar16;
  uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) ^ (uVar16 << 0x18 | uVar16 >> 0x28) ^ uVar16;
  uVar22 = uVar16 << 0x30 | uVar16 >> 0x10;
  uVar17 = uVar16 << 0x10 | uVar16 >> 0x30;
  uVar16 = uVar22 ^ uVar17;
  if (((0x26126ccb - uVar26) * 0x40000 | 0x26126ccb - uVar26 >> 0xe) == 0x1c1e65f9) {
    uVar16 = uVar17 * uVar22;
  }
  uVar16 = uVar16 ^ uVar22;
  if (uVar16 == 0) {
    return;
  }
  uVar9 = (uint16_t)param_1 | 1;
  if (*(int64_t *)(uVar16 + 0x388) != 0) {
    return;
  }
  bVar7 = true;
  if (*(uint64_t *)(uVar16 + 0x2a8) <= uVar16) {
    bVar7 = *(uint64_t *)(uVar16 + 0x2b0) <= uVar16;
  }
  if (*(int64_t *)(uVar16 + 0xe48) != 0) {
    if (*(code **)(uVar16 + 0x370) == (code *)0x0) {
      (*(code *)(&UNK_7fffa52cd26f + (int)((uVar26 ^ 0x6e498fe4) + 0x102fa347)))
                (*(int64_t *)(uVar16 + 0xe48));
    }
    else {
      (**(code **)(uVar16 + 0x370))(*(uint64_t *)(uVar16 + 0x378));
    }
  }
  uVar22 = *(uint64_t *)(uVar16 + 0xe68);
  if (uVar22 != 0) {
    uVar17 = *(uint64_t *)(uVar22 + 0x20);
    bVar27 = true;
    if (uVar17 <= uVar22) {
      bVar27 = *(uint64_t *)(uVar22 + 0x28) <= uVar22;
    }
    pcVar19 = *(code **)(uVar22 + 0x17a0);
    uVar15 = *(uint64_t *)(uVar22 + 0x17a8);
    *(uint8_t (*) [16])(uVar22 + 0x50) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar22 + 0x40) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar22 + 0x30) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar22 + 0x20) = (uint8_t  [16])0x0;
    *(uint64_t *)(uVar22 + 0x60) = 0;
    if (uVar17 == 0) {
LAB_7fffa517960c:
      if (bVar27) {
        if (pcVar19 == (code *)0x0) goto LAB_7fffa5179654;
        (*pcVar19)(uVar15,uVar22);
      }
    }
    else {
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)(uVar15);
        goto LAB_7fffa517960c;
      }
      (*(code *)((int64_t)
                 (int)(uVar26 + 0x7e78170b >> 1 | (uint32_t)((uVar26 + 0x7e78170b & 1) != 0) << 0x1f) +
                0x7fffa52d0b7c))(uVar17);
      if (!bVar27) goto LAB_7fffa5179676;
LAB_7fffa5179654:
      (*(code *)((int64_t)(int)(uVar24 * 0x7bb48060 + 0x32e7df4e) + 0x7fffa52d2902))(uVar22);
    }
  }
LAB_7fffa5179676:
  *(uint64_t *)(uVar16 + 0xe78) = 0;
  *(uint64_t *)(uVar16 + 0xe80) = 0;
  *(uint64_t *)(uVar16 + 0xe68) = 0;
  *(uint64_t *)(uVar16 + 0xe70) = 0;
  *(uint64_t *)(uVar16 + 0xe58) = 0;
  *(uint64_t *)(uVar16 + 0xe60) = 0;
  *(uint64_t *)(uVar16 + 0xe48) = 0;
  *(uint64_t *)(uVar16 + 0xe50) = 0;
  *(uint64_t *)(uVar16 + 0xe88) = 0;
  plVar3 = *(int64_t **)(uVar16 + 0xe90);
  bVar8 = (uint8_t)param_1;
  if (plVar3 == (int64_t *)0x0) goto LAB_7fffa517a149;
  if ((*(uint8_t *)(plVar3 + 0x179) & 1) == 0) {
    lVar21 = *plVar3;
    bVar27 = 0 < lVar21;
    if ((int64_t)(uint64_t)(-0x5c517599 << (bVar8 & 0x1f) | 0xa3ae8a67U >> 0x20 - (bVar8 & 0x1f))
        <= (int64_t)((param_1 ^ 0xfffffdff4c5fcfdf) - 0xdd984c1 ^ 0xc000007b)) {
      bVar27 = lVar21 == 0;
    }
    if (!bVar27) {
      lVar23 = lVar21 + 0x60;
      (*(code *)&DAT_7ff8504ccea0)(lVar23);
      *(uint32_t *)(lVar21 + 0x98) = 1;
      (*(code *)&DAT_7ff8504ccfa0)(lVar23);
      (*(code *)&DAT_7ff8504fcac0)(lVar21 + 0x88);
      (*(code *)&DAT_7ff8504fcac0)(lVar21 + 0x90);
      if (*(int64_t *)(lVar21 + 0x20) != 0) {
        uVar22 = 1;
        do {
          lVar4 = *(int64_t *)(*(int64_t *)(lVar21 + 0x18) + -8 + uVar22 * 8);
          if (lVar4 != 0) {
            iVar14 = (*(code *)&DAT_7ff84ea57200)(lVar4,0xffffffff);
            (*(code *)&DAT_7ff84ea57010)(lVar4);
            if (iVar14 < 0x80) {
              if (iVar14 != 0) goto LAB_7fffa51797f5;
            }
            else if (iVar14 != 0x80) {
LAB_7fffa51797f5:
              (*(code *)&DAT_7ff84ea18640)();
            }
          }
          if (*(uint64_t *)(lVar21 + 0x20) <= uVar22) break;
          uVar22 = uVar22 + 1;
        } while( true );
      }
      (*(code *)&DAT_7ff850519980)(lVar23);
      pcVar19 = *(code **)(lVar21 + 8);
      uVar15 = *(uint64_t *)(lVar21 + 0x10);
      if (*(int64_t *)(lVar21 + 0x30) != 0) {
        if (pcVar19 == (code *)0x0) {
          (*(code *)((int64_t)(int)~((uVar26 + 0x37d8db65) * 0x5bfa435b) + 0x7fffa52d03c2))
                    (*(int64_t *)(lVar21 + 0x30));
        }
        else {
          (*pcVar19)(uVar15);
        }
        pcVar19 = *(code **)(lVar21 + 8);
        uVar15 = *(uint64_t *)(lVar21 + 0x10);
      }
      if (*(int64_t *)(lVar21 + 0x18) != 0) {
        if (pcVar19 == (code *)0x0) {
          (*(code *)((int64_t)(int)(uVar24 * -0x6441b1d8) + 0x7fffa52cbf18))
                    (*(int64_t *)(lVar21 + 0x18));
        }
        else {
          (*pcVar19)(uVar15);
        }
      }
      if (*(code **)(lVar21 + 8) == (code *)0x0) {
        (*(code *)((int64_t)(short)(0x178e << (bVar8 & 0xf) | 0x178eU >> 0x10 - (bVar8 & 0xf)) +
                  0x7fffa52cb60d))(lVar21);
      }
      else {
        (**(code **)(lVar21 + 8))(*(uint64_t *)(lVar21 + 0x10),lVar21);
      }
    }
  }
  uVar25 = 0;
  do {
    lVar21 = plVar3[1];
    lVar23 = plVar3[2];
    lVar18 = (uint64_t)uVar25 * 0x198;
    uVar15 = *(uint64_t *)(lVar21 + 0x68 + lVar18);
    lVar4 = *(int64_t *)(lVar21 + 0x60 + lVar18);
    uVar5 = *(uint64_t *)(lVar21 + 0x30 + lVar18);
    puVar1 = (uint64_t *)(lVar21 + 0x10 + lVar18);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    puVar1 = (uint64_t *)(lVar21 + 0x20 + lVar18);
    uVar12 = *puVar1;
    uVar13 = puVar1[1];
    uVar6 = *(uint64_t *)(lVar21 + 0x38 + lVar18);
    if (lVar4 != 0) {
      (*(code *)&DAT_7ff8504ccea0)(lVar23);
      uVar2 = *(uint32_t *)(lVar23 + 0x34);
      if (uVar2 < *(uint32_t *)(lVar23 + 0x30)) {
        *(uint32_t *)(lVar23 + 0x34) = uVar2 + 1;
        lVar21 = *(int64_t *)(lVar23 + 0x50);
        *(uint64_t *)(lVar21 + 8 + (uint64_t)uVar2 * 0x10) = uVar15;
        *(int64_t *)(lVar21 + (uint64_t)uVar2 * 0x10) = lVar4;
        (*(code *)&DAT_7ff8504ccfa0)(lVar23);
      }
      else {
        (*(code *)&DAT_7ff8504ccfa0)(lVar23);
        if (*(code **)(lVar23 + 0x40) == (code *)0x0) {
          (*(code *)((int64_t)(int)(uVar26 ^ 0x7e790f0e) + 0x7fffa52cf520))(lVar4);
        }
        else {
          (**(code **)(lVar23 + 0x40))(*(uint64_t *)(lVar23 + 0x48),lVar4);
        }
      }
    }
    uVar25 = uVar25 + 1;
    FUN_7fffa4ecf8e0(plVar3[1] + lVar18,0,0x198);
    lVar21 = plVar3[1];
    puVar1 = (uint64_t *)(lVar21 + 0x10 + lVar18);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1 = (uint64_t *)(lVar21 + 0x20 + lVar18);
    *puVar1 = uVar12;
    puVar1[1] = uVar13;
    *(uint64_t *)(lVar21 + 0x30 + lVar18) = uVar5;
    *(uint64_t *)(plVar3[1] + 0x38 + lVar18) = uVar6;
    uVar2 = *(uint32_t *)(plVar3 + 0x16e);
  } while (uVar25 <= uVar2);
  *(uint8_t (*) [16])(plVar3 + 0x25) = (uint8_t  [16])0x0;
  plVar3[0x27] = 0;
  *(uint32_t *)((int64_t)plVar3 + (uint64_t)(uVar26 + 0x7e79c1a2)) = 1;
  lVar21 = plVar3[1];
  if (lVar21 != 0) {
    lVar4 = plVar3[0x176];
    pcVar19 = (code *)plVar3[0x175];
    uVar22 = (uint64_t)(uVar2 + 1);
    lVar23 = lVar21 + 0x10;
    do {
      (*(code *)&DAT_7ff850519980)(lVar23);
      lVar23 = lVar23 + 0x198;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
    if (pcVar19 == (code *)0x0) {
      (*(code *)((int64_t)(short)(uVar9 * -0x1d7e + 0x4e6a) + 0x7fffa52c8c48))(lVar21);
    }
    else {
      (*pcVar19)(lVar4,lVar21);
    }
  }
  lVar21 = plVar3[2];
  if (lVar21 != 0) {
    lVar23 = *(int64_t *)(lVar21 + 0x50);
    if (lVar23 != 0) {
      if (*(int *)(lVar21 + 0x30) != 0) {
        lVar23 = 0;
        uVar22 = 0;
        do {
          lVar4 = *(int64_t *)(*(int64_t *)(lVar21 + 0x50) + lVar23);
          if (lVar4 != 0) {
            if (*(code **)(lVar21 + 0x40) == (code *)0x0) {
              (*(code *)(&UNK_7fffa52c86ac + (short)~((uint16_t)param_1 + 0xdd)))(lVar4);
            }
            else {
              (**(code **)(lVar21 + 0x40))(*(uint64_t *)(lVar21 + 0x48));
            }
          }
          uVar22 = uVar22 + 1;
          lVar23 = lVar23 + 0x10;
        } while (uVar22 < *(uint32_t *)(lVar21 + 0x30));
        lVar23 = *(int64_t *)(lVar21 + 0x50);
        if (lVar23 == 0) goto LAB_7fffa5179c07;
      }
      if (*(code **)(lVar21 + 0x40) == (code *)0x0) {
        (*(code *)((int64_t)(int)(-0x7e7aae34 - uVar26) + 0x7fffa52d3402))(lVar23);
      }
      else {
        (**(code **)(lVar21 + 0x40))(*(uint64_t *)(lVar21 + 0x48));
      }
    }
LAB_7fffa5179c07:
    (*(code *)&DAT_7ff850519980)(lVar21);
    if (*(code **)(lVar21 + 0x40) == (code *)0x0) {
      (*(code *)((int64_t)(short)(uVar9 * -0x4c0a) + 0x7fffa52c52a6))(lVar21);
    }
    else {
      (**(code **)(lVar21 + 0x40))(*(uint64_t *)(lVar21 + 0x48),lVar21);
    }
  }
  lVar21 = plVar3[3];
  if (lVar21 != 0) {
    (*(code *)&DAT_7ff850519980)(lVar21);
    lVar23 = *(int64_t *)(lVar21 + 0x48);
    if (lVar23 != 0) {
      if (0 < *(int *)(lVar21 + 0x28)) {
        lVar23 = 1;
        while( true ) {
          uVar22 = *(uint64_t *)(*(int64_t *)(lVar21 + 0x48) + -8 + lVar23 * 8);
          (*(code *)(&UNK_7fffa517a55d +
                    (short)(0xfb70U >> (bVar8 & 0xf) | -0x490 << 0x10 - (bVar8 & 0xf))))
                    ((int64_t)(int)uVar26,
                     (uVar22 << 0x23 | uVar22 >> 0x1d) ^ (uVar22 << 0x2c | uVar22 >> 0x14) ^ uVar22)
          ;
          if (*(int *)(lVar21 + 0x28) <= lVar23) break;
          lVar23 = lVar23 + 1;
        }
        lVar23 = *(int64_t *)(lVar21 + 0x48);
        if (lVar23 == 0) goto LAB_7fffa5179d42;
      }
      if (*(code **)(lVar21 + 0x38) == (code *)0x0) {
        FUN_7fffa52c3bf0(lVar23);
      }
      else {
        (**(code **)(lVar21 + 0x38))(*(uint64_t *)(lVar21 + 0x40));
      }
    }
LAB_7fffa5179d42:
    if (*(code **)(lVar21 + 0x38) == (code *)0x0) {
      (*(code *)((int64_t)(short)(0x7104U >> (bVar8 & 0xf) | 0x7104 << 0x10 - (bVar8 & 0xf)) +
                0x7fffa52c77df))(lVar21);
    }
    else {
      (**(code **)(lVar21 + 0x38))(*(uint64_t *)(lVar21 + 0x40),lVar21);
    }
  }
  lVar21 = plVar3[4];
  if (lVar21 != 0) {
    lVar23 = *(int64_t *)(lVar21 + 0x50);
    if (lVar23 != 0) {
      if (*(int *)(lVar21 + 0x30) != 0) {
        lVar23 = 0;
        uVar22 = 0;
        do {
          lVar4 = *(int64_t *)(*(int64_t *)(lVar21 + 0x50) + lVar23);
          if (lVar4 != 0) {
            if (*(code **)(lVar21 + 0x40) == (code *)0x0) {
              (*(code *)((int64_t)
                         (int)(0x3fffc053U >> (bVar8 & 0x1f) | 0x3fffc053 << 0x20 - (bVar8 & 0x1f))
                        + 0x7fffa52d3aa4))(lVar4);
            }
            else {
              (**(code **)(lVar21 + 0x40))(*(uint64_t *)(lVar21 + 0x48));
            }
          }
          uVar22 = uVar22 + 1;
          lVar23 = lVar23 + 0x10;
        } while (uVar22 < *(uint32_t *)(lVar21 + 0x30));
        lVar23 = *(int64_t *)(lVar21 + 0x50);
        if (lVar23 == 0) goto LAB_7fffa5179e82;
      }
      if (*(code **)(lVar21 + 0x40) == (code *)0x0) {
        (*(code *)((int64_t)
                   (int)(-0x31e51 << (bVar8 & 0x1f) | 0xfffce1afU >> 0x20 - (bVar8 & 0x1f)) +
                  0x7fffa52d0385))(lVar23);
      }
      else {
        (**(code **)(lVar21 + 0x40))(*(uint64_t *)(lVar21 + 0x48));
      }
    }
LAB_7fffa5179e82:
    (*(code *)&DAT_7ff850519980)(lVar21);
    if (*(code **)(lVar21 + 0x40) == (code *)0x0) {
      (*(code *)((int64_t)(int)(uVar26 ^ 0x7e79626a) + 0x7fffa52d103c))(lVar21);
    }
    else {
      (**(code **)(lVar21 + 0x40))(*(uint64_t *)(lVar21 + 0x48),lVar21);
    }
  }
  pcVar19 = (code *)plVar3[0x45];
  lVar21 = plVar3[0x46];
  (*(code *)&DAT_7ff850519980)(plVar3 + 0x2b);
  (*(code *)&DAT_7ff850519980)(plVar3 + 0x160);
  lVar23 = *(int64_t *)
            ((int64_t)plVar3 + (uint64_t)(0xa2U >> (bVar8 & 0x1f) | 0xa2 << 0x20 - (bVar8 & 0x1f))
            );
  if (lVar23 == 0) {
LAB_7fffa5179f1b:
    lVar23 = plVar3[0x53];
    if (lVar23 != 0) {
      if (pcVar19 == (code *)0x0) goto LAB_7fffa5179f85;
      (*pcVar19)(lVar21);
    }
  }
  else {
    if (pcVar19 != (code *)0x0) {
      (*pcVar19)(lVar21);
      goto LAB_7fffa5179f1b;
    }
    (*(code *)((int64_t)(int)(uVar24 * 0x3f877cbc | (uint32_t)((int)(uVar24 * -0x603c41a2) < 0)) +
              0x7fffa52cf82b))(lVar23);
    lVar23 = *(int64_t *)((int64_t)plVar3 + (uint64_t)(uint16_t)(uVar9 * 0x68));
    if (lVar23 != 0) {
LAB_7fffa5179f85:
      (*(code *)((int64_t)(short)(-0x5cf2 << (bVar8 & 0xf) | 0xa30eU >> 0x10 - (bVar8 & 0xf)) +
                0x7fffa52c932d))(lVar23);
    }
  }
  uVar22 = plVar3[0x177];
  if (uVar22 != 0) {
    uVar17 = *(uint64_t *)(uVar22 + 0x20);
    bVar27 = true;
    if (uVar17 <= uVar22) {
      bVar27 = *(uint64_t *)(uVar22 + 0x28) <= uVar22;
    }
    uVar15 = *(uint64_t *)(uVar22 + 0x17a8);
    pcVar19 = *(code **)(uVar22 + 0x17a0);
    *(uint8_t (*) [16])(uVar22 + 0x50) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar22 + 0x40) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar22 + 0x30) = (uint8_t  [16])0x0;
    *(uint8_t (*) [16])(uVar22 + 0x20) = (uint8_t  [16])0x0;
    *(uint64_t *)(uVar22 + 0x60) = 0;
    if (uVar17 == 0) {
LAB_7fffa517a024:
      if (bVar27) {
        if (pcVar19 == (code *)0x0) goto LAB_7fffa517a077;
        (*pcVar19)(uVar15,uVar22);
      }
    }
    else {
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)(uVar15);
        goto LAB_7fffa517a024;
      }
      (*(code *)((int64_t)(short)(uVar9 * -0x119) + 0x7fffa52c51b7))(uVar17);
      if (!bVar27) goto code_r0x7fffa517a0a5;
LAB_7fffa517a077:
      (*(code *)((int64_t)(short)(-0x4bbe << (bVar8 & 0xf) | 0xb442U >> 0x10 - (bVar8 & 0xf)) +
                0x7fffa52c8ee0))(uVar22);
    }
  }
code_r0x7fffa517a0a5:
  if (plVar3[0x28] != 0) {
    if ((code *)plVar3[0x175] == (code *)0x0) {
      (*(code *)((int64_t)(short)(uVar9 * -0x6ca6 + -0x313e) + 0x7fffa52c67c8))(plVar3[0x28]);
    }
    else {
      (*(code *)plVar3[0x175])(plVar3[0x176]);
    }
  }
  if ((code *)plVar3[0x175] == (code *)0x0) {
    (*(code *)((int64_t)(int)(uVar24 * -0x2477af02 + -0x7dcbc932) + 0x7fffa52d09e0))(plVar3);
  }
  else {
    (*(code *)plVar3[0x175])(plVar3[0x176],plVar3);
  }
LAB_7fffa517a149:
  lVar21 = *(int64_t *)(uVar16 + 0x2a8);
  *(uint64_t *)(uVar16 + 0xe90) = 0;
  *(uint64_t *)(uVar16 + 0x2d8) = 0;
  *(uint64_t *)(uVar16 + 0x2e0) = 0;
  *(uint64_t *)(uVar16 + 0x2c8) = 0;
  *(uint64_t *)(uVar16 + 0x2d0) = 0;
  *(uint64_t *)(uVar16 + 0x2b8) = 0;
  *(uint64_t *)(uVar16 + 0x2c0) = 0;
  *(uint64_t *)(uVar16 + 0x2a8) = 0;
  *(uint64_t *)(uVar16 + 0x2b0) = 0;
  *(uint64_t *)(uVar16 + 0x2e8) = 0;
  if (lVar21 != 0) {
    if (*(code **)(uVar16 + 0x370) == (code *)0x0) {
      (*(code *)(&UNK_7fffa52ccf2c +
                (int)(0x3fffdb31U >> (bVar8 & 0x1f) | 0x3fffdb31 << 0x20 - (bVar8 & 0x1f))))(lVar21)
      ;
    }
    else {
      (**(code **)(uVar16 + 0x370))(*(uint64_t *)(uVar16 + 0x378));
    }
  }
  if (bVar7) {
    if (*(code **)(uVar16 + 0x370) == (code *)0x0) {
      (*(code *)((int64_t)(short)(uVar9 * -0x7d55 + 0x773) + 0x7fffa52c9e88))(uVar16);
    }
    else {
      (**(code **)(uVar16 + 0x370))(*(uint64_t *)(uVar16 + 0x378),uVar16);
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa517a230  |  RVA: 0xa0a230  |  Size: 4964 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa517ab05) */
/* WARNING: Removing unreachable block (ram,0x7fffa517a7f4) */
/* WARNING: Removing unreachable block (ram,0x7fffa517afae) */
/* WARNING: Removing unreachable block (ram,0x7fffa517b206) */
/* WARNING: Removing unreachable block (ram,0x7fffa517ab7f) */
/* WARNING: Removing unreachable block (ram,0x7fffa517a91d) */
/* WARNING: Removing unreachable block (ram,0x7fffa517b511) */
/* WARNING: Removing unreachable block (ram,0x7fffa517a992) */
/* WARNING: Removing unreachable block (ram,0x7fffa517b1a9) */
/* WARNING: Removing unreachable block (ram,0x7fffa517b409) */
/* WARNING: Removing unreachable block (ram,0x7fffa517b415) */

int64_t FUN_7fffa517a230(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  uint32_t uVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  int64_t lVar22;
  uint32_t uVar23;
  int *piVar24;
  uint64_t uVar25;
  uint64_t *puVar26;
  uint32_t uVar27;
  uint64_t uVar28;
  uint64_t auStack_138 [2];
  uint32_t uStack_124;
  int64_t *plStack_120;
  int64_t lStack_118;
  uint32_t *puStack_110;
  uint64_t *puStack_108;
  uint64_t *puStack_100;
  int64_t lStack_f8;
  uint64_t *puStack_f0;
  uint64_t *puStack_e8;
  uint32_t uStack_dc;
  int64_t lStack_d8;
  uint64_t *puStack_d0;
  uint64_t *puStack_c8;
  uint64_t uStack_c0;
  uint64_t *puStack_b8;
  uint64_t uStack_b0;
  code *pcStack_a8;
  uint32_t uStack_9c;
  uint64_t *puStack_98;
  uint64_t uStack_90;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  int64_t lStack_78;
  uint32_t uStack_6c;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  
  puVar17 = (uint64_t *)((int64_t)param_4 + param_5);
  puStack_b8 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  uStack_dc = *(uint32_t *)(param_1 + 0x110);
  uStack_124 = *param_3;
  uVar23 = param_3[1];
  lStack_118 = *(int64_t *)(param_1 + 8);
  lStack_78 = *(int64_t *)(param_1 + 0x10);
  uStack_c0 = (uint64_t)*(uint32_t *)(param_1 + 0x18);
  *(uint32_t *)(param_1 + 300) = 0;
  puStack_100 = (uint64_t *)(lStack_118 + uStack_c0);
  puVar15 = (uint64_t *)((uint64_t)(param_4 == puStack_100) + (int64_t)param_4);
  puStack_110 = param_3;
  if (puVar15 < puStack_b8) {
    uStack_b0 = (uint64_t)*(uint32_t *)(param_1 + 0x1c);
    puStack_98 = (uint64_t *)(lStack_78 + uStack_c0);
    puStack_e8 = (uint64_t *)(uStack_b0 + lStack_78);
    puStack_c8 = puVar17 + -4;
    uStack_9c = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
    puStack_d0 = (uint64_t *)((int64_t)puVar17 + -3);
    puStack_68 = (uint64_t *)((int64_t)puVar17 + -7);
    puStack_88 = (uint64_t *)((int64_t)puVar17 + -1);
    iVar11 = *(uint32_t *)(param_1 + 0x18) - 1;
    lStack_58 = uStack_c0 + 8 + lStack_118;
    plStack_120 = param_2;
    puStack_108 = puVar17;
    lStack_d8 = lStack_118;
    lStack_50 = lStack_118;
    uStack_48 = param_1;
    do {
      uVar8 = uStack_48;
      puVar14 = puStack_108;
      iVar3 = *(int *)(param_1 + 0x1c);
      iVar7 = ((int)puVar15 - (int)lStack_d8) + 1;
      uVar27 = iVar7 - uStack_124;
      lVar10 = lStack_d8;
      if (uVar27 < (uint32_t)uStack_c0) {
        lVar10 = lStack_78;
      }
      iVar12 = iVar7 - uStack_9c;
      if ((uint32_t)(iVar7 - iVar3) <= uStack_9c) {
        iVar12 = iVar3;
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        iVar12 = iVar3;
      }
      if (((uint32_t)(iVar7 - iVar12) < uStack_124) || (iVar11 - uVar27 < 3)) {
LAB_7fffa517a560:
        auStack_138[0] = 999999999;
        if (uStack_dc < 6) {
          if (uStack_dc == 5) {
            uVar9 = 0x7fffa5623c76;
            uVar8 = (uint64_t)auStack_138 >> 3;
            uVar25 = ((int64_t)puVar17 << 0x29 | (uint64_t)puVar17 >> 0x17) ^
                     ((int64_t)puVar17 << 0xc | (uint64_t)puVar17 >> 0x34) ^ (uint64_t)puVar17;
            FUN_7fffa5613f70(uVar8,((int64_t)auStack_138 << 0x25 | (uint64_t)auStack_138 >> 0x1b)
                                   ^ uVar8 ^ (uint64_t)auStack_138,uVar25 << 8 | uVar25 >> 0x38);
            uVar9 = uVar9 << 0x2d ^ uVar9;
            param_1 = uStack_48;
          }
          else {
            puStack_60 = (uint64_t *)CONCAT44(puStack_60._4_4_,uVar23);
            uVar9 = ~uStack_b0;
            puStack_80 = (uint64_t *)((param_1 << 0x22 ^ param_1) * 0xc6ae469d);
            auStack_138[1] = 0xad10c9b8;
            uVar16 = (((int64_t)puVar15 << 8 | (uint64_t)puVar15 >> 0x38) ^
                      ((int64_t)puVar15 << 0x1a | (uint64_t)puVar15 >> 0x26) ^ (uint64_t)puVar15)
                     - 0x5307618;
            uVar25 = uVar16 * 0x80000 | uVar16 >> 0x2d;
            lStack_f8 = (uint64_t)((uint32_t)uStack_b0 & (uint32_t)~uVar25) * -0x5ebe33f5;
            uStack_90 = uStack_b0 ^ uVar25;
            pcStack_a8 = FUN_7fffa512fb30;
            puStack_f0 = (uint64_t *)0x892d2897;
            uStack_6c = 0xf8fcead9;
            uVar9 = FUN_7fffa512fb30(uStack_90,
                                     (uVar25 | uStack_b0) * 0xb104afa5 +
                                     ((uVar25 & uVar9) - uStack_90) * 0x1fd721ee +
                                     (uVar25 | uVar9) * -0x7e9555e3 + lStack_f8 +
                                     (~uVar25 & uVar9) * 0xb104afa5,
                                     (uVar16 * 8 | uVar16 >> 0x3d) ^ uVar16 ^ uVar25,puStack_108);
            uVar25 = uVar9 ^ 0xc0000004;
            uVar25 = (uVar25 >> 1 | (uint64_t)((uVar25 & 1) != 0) << 0x3f) ^
                     (uVar25 << 0xb | uVar9 >> 0x35) ^ uVar25;
            uVar9 = (uVar25 << 0x3e | uVar25 >> 2) ^ uVar25 ^ (uVar25 << 0x16 | uVar25 >> 0x2a);
            uVar9 = (uVar9 << 0x2c | uVar9 >> 0x14) ^ (uVar9 << 0x3c | uVar9 >> 4) ^ uVar9;
            uVar9 = (uVar9 << 0x38 | uVar9 >> 8) ^ (uVar9 << 0x18 | uVar9 >> 0x28) ^ uVar9;
            puVar17 = puVar14;
            param_1 = uVar8;
          }
        }
        else {
          uVar9 = ((int64_t)puVar15 << 0x34) + (int64_t)puVar15;
          puStack_60 = (uint64_t *)CONCAT44(puStack_60._4_4_,uVar23);
          puVar20 = auStack_138;
          FUN_7fffa5659210(FUN_7fffa5659210,(int64_t)puVar17 - ((int64_t)puVar17 << 0x3d),
                           uStack_48,
                           ((int64_t)puVar15 * 0x8000000 | uVar9 >> 0x25) ^
                           (uVar9 * 0x10 | uVar9 >> 0x3c) ^ uVar9);
          uVar25 = (uint64_t)puVar20 ^ 0x3448e13f;
          uVar9 = uVar25 * 0x7b16e8811d5c5177;
          uVar9 = (uVar25 * 0x1023ab8a2ee00000 | uVar9 >> 0x2b) ^
                  (uVar25 * 0x6e8811d5c5177000 | uVar9 >> 0x34) ^ uVar9;
          uVar9 = (uVar9 << 0x2a | uVar9 >> 0x16) ^ (uVar9 << 0x18 | uVar9 >> 0x28) ^ uVar9;
          uVar9 = (uVar9 << 0x30 | uVar9 >> 0x10) ^ (uVar9 << 0x14 | uVar9 >> 0x2c) ^ uVar9;
          uVar9 = (uVar9 << 0x28 | uVar9 >> 0x18) ^ (uVar9 << 0x20 | uVar9 >> 0x20) ^ uVar9;
          uVar9 = uVar9 << 0x30 | uVar9 >> 0x10;
          puVar17 = puVar14;
          param_1 = uVar8;
        }
        if (3 < uVar9) {
          uVar27 = uStack_124;
          if (3 < auStack_138[0]) {
            uVar8 = (int64_t)puVar15 + (3 - (lStack_d8 + auStack_138[0]));
            uVar25 = uVar8 & 0xffffffff;
            lVar10 = lStack_d8;
            puVar14 = puStack_100;
            if ((uint32_t)uVar8 < (uint32_t)uStack_c0) {
              lVar10 = lStack_78;
              puVar14 = puStack_e8;
            }
            if (param_4 < puVar15 && puVar14 < (uint64_t *)(lVar10 + uVar25)) {
              puVar20 = (uint64_t *)(lVar10 + uVar25);
              while( true ) {
                puVar20 = (uint64_t *)((int64_t)puVar20 + -1);
                puVar18 = (uint64_t *)((int64_t)puVar15 + -1);
                if (*(char *)puVar18 != *(char *)puVar20) break;
                puVar15 = puVar18;
                if ((puVar18 <= param_4) || (puVar20 <= puVar14)) {
                  uVar9 = uVar9 + 1;
                  break;
                }
                uVar9 = uVar9 + 1;
              }
            }
            uVar27 = (int)auStack_138[0] - 3;
            uVar23 = uStack_124;
          }
          uStack_124 = uVar27;
          goto LAB_7fffa517adae;
        }
        uVar8 = (int64_t)puVar15 - (int64_t)param_4;
        puVar15 = (uint64_t *)((int64_t)puVar15 + (uVar8 >> 8) + 1);
        *(uint32_t *)(param_1 + 300) = (uint32_t)(0x8ff < uVar8);
      }
      else {
        piVar24 = (int *)(lVar10 + (uint64_t)uVar27);
        if (*(int *)((int64_t)puVar15 + 1) != *piVar24) goto LAB_7fffa517a560;
        puStack_60 = puVar17;
        if (uVar27 < (uint32_t)uStack_c0) {
          puStack_60 = puStack_98;
        }
        puStack_f0 = (uint64_t *)(piVar24 + 1);
        puVar14 = (uint64_t *)((int64_t)puVar15 + 5);
        puVar20 = (uint64_t *)
                  ((int64_t)puVar15 + (int64_t)puStack_60 + (5 - (int64_t)puStack_f0));
        if (puVar17 <= puVar20) {
          puVar20 = puVar17;
        }
        puVar18 = puVar14;
        puVar21 = puStack_f0;
        if (puVar14 < (uint64_t *)((int64_t)puVar20 - 7U)) {
          if (*puStack_f0 == *puVar14) {
            lVar22 = 0;
LAB_7fffa517ab50:
            puVar18 = (uint64_t *)((int64_t)puVar15 + lVar22 + 0xd);
            puVar17 = puStack_108;
            puStack_80 = puVar14;
            if (puVar18 < (uint64_t *)((int64_t)puVar20 - 7U)) {
              uVar8 = *puVar18;
              uVar9 = *(uint64_t *)(lVar10 + (uint64_t)uVar27 + 0xc + lVar22);
              if (uVar9 == uVar8) goto code_r0x7fffa517ab98;
              uVar27 = 0;
              for (uVar8 = uVar8 ^ uVar9; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000)
              {
                uVar27 = uVar27 + 1;
              }
              uVar9 = (uint64_t)(uVar27 >> 3) + lVar22 + 8;
              goto LAB_7fffa517ac5d;
            }
            puVar18 = (uint64_t *)((int64_t)puVar15 + lVar22 + 0xd);
            puVar21 = (uint64_t *)((int64_t)piVar24 + lVar22 + 0xc);
            goto LAB_7fffa517abe3;
          }
          uVar27 = 0;
          for (uVar8 = *puVar14 ^ *puStack_f0; (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            uVar27 = uVar27 + 1;
          }
          uVar9 = (uint64_t)(uVar27 >> 3);
        }
        else {
LAB_7fffa517abe3:
          if ((puVar18 < (uint64_t *)((int64_t)puVar20 - 3U)) && ((int)*puVar21 == (int)*puVar18))
          {
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
          }
          if ((puVar18 < (uint64_t *)((int64_t)puVar20 - 1U)) &&
             ((short)*puVar21 == (short)*puVar18)) {
            puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
          }
          if (puVar18 < puVar20) {
            puVar18 = (uint64_t *)
                      ((int64_t)puVar18 + (uint64_t)((char)*puVar21 == (char)*puVar18));
          }
          uVar9 = (int64_t)puVar18 - (int64_t)puVar14;
        }
LAB_7fffa517ac5d:
        if ((uint64_t *)((int64_t)puStack_f0 + uVar9) == puStack_60) {
          puVar14 = (uint64_t *)((int64_t)puVar14 + uVar9);
          puVar20 = puStack_100;
          puVar18 = puVar14;
          if (puVar14 < puStack_68) {
            if (*puStack_100 == *puVar14) {
              lVar10 = 0;
              do {
                puVar20 = (uint64_t *)((int64_t)puVar15 + lVar10 + uVar9 + 0xd);
                if (puStack_68 <= puVar20) {
                  puVar18 = (uint64_t *)((int64_t)puVar15 + lVar10 + uVar9 + 0xd);
                  puVar20 = (uint64_t *)(lVar10 + lStack_58);
                  goto LAB_7fffa517ad49;
                }
                puVar18 = (uint64_t *)(lStack_58 + lVar10);
                uVar8 = *puVar20;
                lVar10 = lVar10 + 8;
              } while (*puVar18 == uVar8);
              uVar27 = 0;
              for (uVar8 = uVar8 ^ *puVar18; (uVar8 & 1) == 0;
                  uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                uVar27 = uVar27 + 1;
              }
              uVar8 = (uint64_t)(uVar27 >> 3) + lVar10;
            }
            else {
              uVar27 = 0;
              for (uVar8 = *puVar14 ^ *puStack_100; (uVar8 & 1) == 0;
                  uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                uVar27 = uVar27 + 1;
              }
              uVar8 = (uint64_t)(uVar27 >> 3);
            }
          }
          else {
LAB_7fffa517ad49:
            if ((puVar18 < puStack_d0) && ((int)*puVar20 == (int)*puVar18)) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
            }
            if ((puVar18 < puStack_88) && ((short)*puVar20 == (short)*puVar18)) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
              puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
            }
            if (puVar18 < puVar17) {
              puVar18 = (uint64_t *)
                        ((int64_t)puVar18 + (uint64_t)((char)*puVar20 == (char)*puVar18));
            }
            uVar8 = (int64_t)puVar18 - (int64_t)puVar14;
          }
          uVar9 = uVar9 + uVar8;
        }
        uVar9 = uVar9 + 4;
        auStack_138[0] = 1;
        puVar15 = (uint64_t *)((int64_t)puVar15 + 1);
        param_1 = uStack_48;
LAB_7fffa517adae:
        uVar8 = (int64_t)puVar15 - (int64_t)param_4;
        puVar14 = (uint64_t *)plStack_120[3];
        if (puStack_c8 < puVar15) {
          puVar20 = puVar14;
          if (param_4 <= puStack_c8) {
            uVar25 = param_4[1];
            puVar20 = (uint64_t *)((int64_t)puVar14 + ((int64_t)puStack_c8 - (int64_t)param_4));
            *puVar14 = *param_4;
            puVar14[1] = uVar25;
            if (0x10 < (int64_t)puStack_c8 - (int64_t)param_4) {
              puVar14 = puVar14 + 6;
              while( true ) {
                uVar25 = param_4[3];
                puVar14[-4] = param_4[2];
                puVar14[-3] = uVar25;
                uVar25 = param_4[5];
                puVar14[-2] = param_4[4];
                puVar14[-1] = uVar25;
                if (puVar20 <= puVar14) break;
                puVar14 = puVar14 + 4;
                param_4 = param_4 + 4;
              }
            }
            param_4 = puStack_c8;
          }
          if (param_4 < puVar15) {
            uVar25 = (int64_t)puVar15 - (int64_t)param_4;
            if ((3 < uVar25) && (0x1f < (uint64_t)((int64_t)puVar20 - (int64_t)param_4))) {
              if (uVar25 < 0x20) {
                uVar28 = 0;
              }
              else {
                uVar28 = uVar25 & 0xffffffffffffffe0;
                uVar16 = 0;
                do {
                  uVar4 = *(uint64_t *)((int64_t)param_4 + uVar16);
                  uVar5 = ((uint64_t *)((int64_t)param_4 + uVar16))[1];
                  puVar1 = (uint64_t *)((int64_t)param_4 + uVar16 + 0x10);
                  uVar6 = puVar1[1];
                  puVar2 = (uint64_t *)((int64_t)puVar20 + uVar16 + 0x10);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                  *(uint64_t *)((int64_t)puVar20 + uVar16) = uVar4;
                  ((uint64_t *)((int64_t)puVar20 + uVar16))[1] = uVar5;
                  uVar16 = uVar16 + 0x20;
                } while (uVar28 != uVar16);
                if (uVar25 == uVar28) goto LAB_7fffa517afe0;
                if ((uVar25 & 0x1c) == 0) {
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar28);
                  puVar20 = (uint64_t *)((int64_t)puVar20 + uVar28);
                  goto LAB_7fffa517af5b;
                }
              }
              uVar16 = uVar25 & 0xfffffffffffffffc;
              do {
                *(uint32_t *)((int64_t)puVar20 + uVar28) =
                     *(uint32_t *)((int64_t)param_4 + uVar28);
                uVar28 = uVar28 + 4;
              } while (uVar16 != uVar28);
              if (uVar25 == uVar16) goto LAB_7fffa517afe0;
              param_4 = (uint64_t *)((int64_t)param_4 + uVar16);
              puVar20 = (uint64_t *)((int64_t)puVar20 + uVar16);
            }
LAB_7fffa517af5b:
            uVar27 = (int)puVar15 - (int)param_4 & 7;
            if (uVar27 == 0) {
              puVar14 = param_4;
            }
            else {
              uVar25 = 1;
              puVar14 = puVar20;
              puVar17 = param_4;
              while( true ) {
                puVar20 = (uint64_t *)((int64_t)puVar14 + 1);
                *(char *)puVar14 = (char)*puVar17;
                if (uVar25 == uVar27) break;
                uVar25 = uVar25 + 1;
                puVar14 = puVar20;
                puVar17 = (uint64_t *)((int64_t)puVar17 + 1);
              }
              puVar14 = (uint64_t *)((int64_t)puVar17 + 1);
              puVar17 = puStack_108;
            }
            if ((uint64_t)((int64_t)param_4 - (int64_t)puVar15) < 0xfffffffffffffff9) {
              do {
                *(char *)puVar20 = (char)*puVar14;
                *(uint8_t *)((int64_t)puVar20 + 1) = *(uint8_t *)((int64_t)puVar14 + 1);
                *(uint8_t *)((int64_t)puVar20 + 2) = *(uint8_t *)((int64_t)puVar14 + 2);
                *(uint8_t *)((int64_t)puVar20 + 3) = *(uint8_t *)((int64_t)puVar14 + 3);
                *(uint8_t *)((int64_t)puVar20 + 4) = *(uint8_t *)((int64_t)puVar14 + 4);
                *(uint8_t *)((int64_t)puVar20 + 5) = *(uint8_t *)((int64_t)puVar14 + 5);
                *(uint8_t *)((int64_t)puVar20 + 6) = *(uint8_t *)((int64_t)puVar14 + 6);
                *(uint8_t *)((int64_t)puVar20 + 7) = *(uint8_t *)((int64_t)puVar14 + 7);
                puVar20 = puVar20 + 1;
                puVar14 = puVar14 + 1;
              } while (puVar14 != puVar15);
            }
          }
LAB_7fffa517afe0:
          lVar10 = plStack_120[1];
          plStack_120[3] = plStack_120[3] + uVar8;
          if (0xffff < uVar8) {
            *(uint32_t *)(plStack_120 + 9) = 1;
            *(int *)((int64_t)plStack_120 + 0x4c) = (int)((uint64_t)(lVar10 - *plStack_120) >> 3);
          }
          param_1 = uStack_48;
        }
        else {
          uVar25 = param_4[1];
          *puVar14 = *param_4;
          puVar14[1] = uVar25;
          if (0x10 < uVar8) {
            lVar10 = plStack_120[3];
            uVar25 = param_4[3];
            *(uint64_t *)(lVar10 + 0x10) = param_4[2];
            *(uint64_t *)(lVar10 + 0x18) = uVar25;
            if (0x20 < (int64_t)uVar8) {
              lVar22 = 0;
              while( true ) {
                puVar2 = (uint64_t *)((int64_t)param_4 + lVar22 + 0x20);
                uVar4 = puVar2[1];
                puVar1 = (uint64_t *)(lVar10 + 0x20 + lVar22);
                *puVar1 = *puVar2;
                puVar1[1] = uVar4;
                puVar1 = (uint64_t *)((int64_t)param_4 + lVar22 + 0x30);
                uVar4 = puVar1[1];
                puVar2 = (uint64_t *)(lVar10 + 0x30 + lVar22);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                if (lVar10 + uVar8 <= lVar10 + 0x20 + lVar22 + 0x20U) break;
                lVar22 = lVar22 + 0x20;
              }
            }
            goto LAB_7fffa517afe0;
          }
          lVar10 = plStack_120[1];
          plStack_120[3] = plStack_120[3] + uVar8;
        }
        *(short *)(lVar10 + 4) = (short)uVar8;
        *(int *)plStack_120[1] = (int)auStack_138[0];
        if (0xffff < uVar9 - 3) {
          *(int *)((int64_t)plStack_120 + 0x4c) =
               (int)((uint64_t)(plStack_120[1] - *plStack_120) >> 3);
          *(uint32_t *)(plStack_120 + 9) = 2;
        }
        *(short *)(plStack_120[1] + 6) = (short)(uVar9 - 3);
        plStack_120[1] = plStack_120[1] + 8;
        if (*(int *)(param_1 + 300) != 0) {
          *(uint32_t *)(param_1 + 300) = 0;
        }
        puVar15 = (uint64_t *)((int64_t)puVar15 + uVar9);
        if (puStack_b8 < puVar15) {
          param_4 = puVar15;
        }
        else {
          uVar27 = uVar23;
          do {
            uVar13 = uStack_124;
            iVar3 = *(int *)(param_1 + 0x1c);
            iVar7 = (int)puVar15 - (int)lStack_d8;
            uVar23 = iVar7 - uVar27;
            lVar10 = lStack_d8;
            if (uVar23 < (uint32_t)uStack_c0) {
              lVar10 = lStack_78;
            }
            iVar12 = iVar7 - uStack_9c;
            if ((uint32_t)(iVar7 - iVar3) <= uStack_9c) {
              iVar12 = iVar3;
            }
            if (*(int *)(param_1 + 0x28) != 0) {
              iVar12 = iVar3;
            }
            if ((((uint32_t)(iVar7 - iVar12) < uVar27) || (iVar11 - uVar23 < 3)) ||
               (piVar24 = (int *)((uint64_t)uVar23 + lVar10), (int)*puVar15 != *piVar24)) {
              param_4 = puVar15;
              uVar23 = uVar27;
              uStack_124 = uVar13;
              break;
            }
            puVar14 = puVar17;
            if (uVar23 < (uint32_t)uStack_c0) {
              puVar14 = puStack_98;
            }
            puVar20 = (uint64_t *)(piVar24 + 1);
            puVar21 = (uint64_t *)((int64_t)puVar15 + (int64_t)puVar14 + (4 - (int64_t)puVar20))
            ;
            puVar18 = (uint64_t *)((int64_t)puVar15 + 4);
            if (puVar17 <= puVar21) {
              puVar21 = puVar17;
            }
            puVar19 = puVar18;
            puVar26 = puVar20;
            if (puVar18 < (uint64_t *)((int64_t)puVar21 - 7U)) {
              if (*puVar20 == *puVar18) {
                lVar22 = 0;
                do {
                  puVar19 = (uint64_t *)((int64_t)puVar15 + lVar22 + 0xc);
                  if ((uint64_t *)((int64_t)puVar21 - 7U) <= puVar19) {
                    puVar19 = (uint64_t *)((int64_t)puVar15 + lVar22 + 0xc);
                    puVar26 = (uint64_t *)((int64_t)piVar24 + lVar22 + 0xc);
                    goto LAB_7fffa517b26a;
                  }
                  uVar8 = *(uint64_t *)((uint64_t)uVar23 + lVar10 + 0xc + lVar22);
                  uVar9 = *puVar19;
                  lVar22 = lVar22 + 8;
                } while (uVar8 == uVar9);
                uVar23 = 0;
                for (uVar9 = uVar9 ^ uVar8; (uVar9 & 1) == 0;
                    uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                  uVar23 = uVar23 + 1;
                }
                uVar8 = (uint64_t)(uVar23 >> 3) + lVar22;
              }
              else {
                uVar8 = 0;
                for (uVar9 = *puVar20 ^ *puVar18; (uVar9 & 1) == 0;
                    uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                  uVar8 = uVar8 + 1;
                }
                uVar8 = uVar8 >> 3 & 0x1fffffff;
              }
            }
            else {
LAB_7fffa517b26a:
              if ((puVar19 < (uint64_t *)((int64_t)puVar21 - 3U)) &&
                 ((int)*puVar26 == (int)*puVar19)) {
                puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
                puVar26 = (uint64_t *)((int64_t)puVar26 + 4);
              }
              if ((puVar19 < (uint64_t *)((int64_t)puVar21 - 1U)) &&
                 ((short)*puVar26 == (short)*puVar19)) {
                puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
                puVar26 = (uint64_t *)((int64_t)puVar26 + 2);
              }
              if (puVar19 < puVar21) {
                puVar19 = (uint64_t *)
                          ((int64_t)puVar19 + (uint64_t)((char)*puVar26 == (char)*puVar19));
              }
              uVar8 = (int64_t)puVar19 - (int64_t)puVar18;
              puVar17 = puStack_108;
            }
            if ((uint64_t *)((int64_t)puVar20 + uVar8) == puVar14) {
              puVar18 = (uint64_t *)((int64_t)puVar18 + uVar8);
              puVar14 = puVar18;
              puVar20 = puStack_100;
              if (puVar18 < puStack_68) {
                if (*puStack_100 == *puVar18) {
                  puVar14 = (uint64_t *)((int64_t)puVar15 + uVar8 + 0xc);
                  lVar10 = -8;
                  lVar22 = 8;
LAB_7fffa517b3d0:
                  if (puVar14 < puStack_68) {
                    if (*(uint64_t *)((int64_t)puStack_100 + lVar22) == *puVar14)
                    goto code_r0x7fffa517b43e;
                    uVar23 = 0;
                    for (uVar9 = *(uint64_t *)((int64_t)puStack_100 + lVar22) ^ *puVar14;
                        (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                      uVar23 = uVar23 + 1;
                    }
                    uVar9 = (uint64_t)(uVar23 >> 3) - lVar10;
                    goto LAB_7fffa517b4da;
                  }
                  puVar20 = (uint64_t *)((int64_t)puStack_100 - lVar10);
                  goto LAB_7fffa517b45c;
                }
                uVar23 = 0;
                for (uVar9 = *puStack_100 ^ *puVar18; (uVar9 & 1) == 0;
                    uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                  uVar23 = uVar23 + 1;
                }
                uVar9 = (uint64_t)(uVar23 >> 3);
              }
              else {
LAB_7fffa517b45c:
                if ((puVar14 < puStack_d0) && ((int)*puVar20 == (int)*puVar14)) {
                  puVar20 = (uint64_t *)((int64_t)puVar20 + 4);
                  puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
                }
                if ((puVar14 < puStack_88) && ((short)*puVar20 == (short)*puVar14)) {
                  puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
                  puVar20 = (uint64_t *)((int64_t)puVar20 + 2);
                }
                if (puVar14 < puVar17) {
                  puVar14 = (uint64_t *)
                            ((int64_t)puVar14 + (uint64_t)((char)*puVar20 == (char)*puVar14));
                }
                uVar9 = (int64_t)puVar14 - (int64_t)puVar18;
              }
LAB_7fffa517b4da:
              uVar8 = uVar8 + uVar9;
            }
            if (puVar15 <= puStack_c8) {
              uVar9 = puVar15[1];
              puVar14 = (uint64_t *)plStack_120[3];
              *puVar14 = *puVar15;
              puVar14[1] = uVar9;
            }
            *(uint16_t *)(plStack_120[1] + 4) = 0;
            *(uint32_t *)plStack_120[1] = 1;
            if (0xffff < uVar8 + 1) {
              *(uint32_t *)(plStack_120 + 9) = 2;
              *(int *)((int64_t)plStack_120 + 0x4c) =
                   (int)((uint64_t)(plStack_120[1] - *plStack_120) >> 3);
            }
            *(short *)(plStack_120[1] + 6) = (short)(uVar8 + 1);
            plStack_120[1] = plStack_120[1] + 8;
            puVar15 = (uint64_t *)((int64_t)puVar15 + uVar8 + 4);
            param_1 = uStack_48;
            param_4 = puVar15;
            uVar23 = uVar13;
            uStack_124 = uVar27;
            uVar27 = uVar13;
          } while (puVar15 <= puStack_b8);
        }
      }
    } while (puVar15 < puStack_b8);
  }
  *puStack_110 = uStack_124;
  puStack_110[1] = uVar23;
  return (int64_t)puVar17 - (int64_t)param_4;
code_r0x7fffa517ab98:
  lVar22 = lVar22 + 8;
  goto LAB_7fffa517ab50;
code_r0x7fffa517b43e:
  puVar14 = puVar14 + 1;
  lVar10 = lVar10 + -8;
  lVar22 = lVar22 + 8;
  goto LAB_7fffa517b3d0;
}


// ============================================================================
// Function : FUN_7fffa517b600  |  RVA: 0xa0b600  |  Size: 190 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

uint64_t
FUN_7fffa517b600(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)

{
  uint32_t in_EAX;
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int in_R10D;
  uint64_t uStack_8;
  
  uVar3 = param_3 + 0x692f34c9;
  uVar1 = ~param_4 >> 0x12 ^ ~param_4;
  uVar3 = (uVar3 << 0x3e | uVar3 >> 2) ^ (uVar3 << 0x30 | uVar3 >> 0x10) ^ uVar3;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) ^ (uVar3 << 0x3c | uVar3 >> 4) ^ uVar3;
  plVar2 = (int64_t *)(uVar1 >> 0x24 ^ uVar1);
  if (*(int64_t *)
       (*(int64_t *)
         ((uint64_t)((in_R10D + 0x4072U ^ 0xffff9e43) - 0x510b & 0xffff) + 0xff00000000) + 0x30) ==
      0x46a8b0f08e8f9709) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(bool *)(uVar3 << 8 | uVar3 >> 0x38) =
       *(int64_t *)(*plVar2 + 0x10) == *(int64_t *)(plVar2[1] + 0xf8);
  uStack_8 = CONCAT44(0xefe7bf2c,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa517b6d0  |  RVA: 0xa0b6d0  |  Size: 281 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void FUN_7fffa517b6d0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                     uint64_t param_5)

{
  int iVar1;
  int64_t in_RAX;
  int64_t unaff_RBP;
  int64_t in_R10;
  
  if (0x4606cc77 < (param_3 ^ 0x71fea51b) + 0x385c37f3) {
    *(uint8_t *)(unaff_RBP + -0x17) = *(uint8_t *)(unaff_RBP + -0x17) | (uint8_t)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_5 = (param_5 << 0x23 | param_5 >> 0x1d) ^ (param_5 << 0x19 | param_5 >> 0x27) ^ param_5;
  param_5 = (param_5 << 6 | param_5 >> 0x3a) ^ (param_5 << 0x32 | param_5 >> 0xe) ^ param_5;
  iVar1 = (*(code *)(&UNK_7fffa4abfa0d + (short)((uint16_t)param_3 ^ 0xb5b7)))
                    (in_RAX * -0x6157e7788ba2bfb1 + 0x74db543bedbcc928,
                     *(int64_t *)(in_R10 + 8) + 0x48,0x30);
  param_5 = (param_5 << 0xc | param_5 >> 0x34) ^ (param_5 << 0x24 | param_5 >> 0x1c) ^ param_5;
  param_5 = (param_5 << 8 | param_5 >> 0x38) ^ (param_5 << 0x18 | param_5 >> 0x28) ^ param_5;
  *(bool *)(((param_5 << 0x10 | param_5 >> 0x30) ^ (param_5 << 0x30 | param_5 >> 0x10) ^ param_5) -
           0x31a078ba) = iVar1 == 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa517b7fc  |  RVA: 0xa0b7fc  |  Size: 1 bytes
// Callers  : FUN_7fffa52c4078@0xb54078
// Callees  : none
// ============================================================================
void FUN_7fffa517b7fc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa517b810  |  RVA: 0xa0b810  |  Size: 1447 bytes
// Callers  : FUN_7fffa507cf70@0x90cf70
// Callees  : FUN_7fffa4e90ae0@0x720ae0, FUN_7fffa55d63a0@0xe663a0, FUN_7fffa5404c00@0xc94c00, FUN_7fffa5427020@0xcb7020, FUN_7fffa507ef00@0x90ef00, FUN_7fffa51023d0@0x9923d0, FUN_7fffa4cf5490@0x585490, FUN_7fffa4cf5cf0@0x585cf0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa517b810(int *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                     uint32_t *param_5,char param_6,int param_7,uint64_t param_8)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int *piVar10;
  uint32_t uVar11;
  uint64_t uVar12;
  uint8_t auStack_138 [32];
  uint32_t *puStack_118;
  uint32_t *puStack_110;
  int iStack_108;
  uint64_t uStack_100;
  uint32_t *puStack_f8;
  int64_t lStack_f0;
  char cStack_e8;
  int iStack_d8;
  uint32_t uStack_d4;
  uint64_t uStack_d0;
  int64_t *plStack_c8;
  uint32_t uStack_c0;
  int iStack_bc;
  uint64_t uStack_b8;
  int64_t lStack_b0;
  uint8_t auStack_a8 [8];
  uint32_t *puStack_a0;
  uint64_t uStack_98;
  int64_t *plStack_90;
  uint32_t uStack_88;
  uint32_t uStack_78;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  int iStack_64;
  uint32_t uStack_60;
  uint64_t uStack_58;
  
  uStack_58 = _DAT_7fffa4780040 ^ (uint64_t)auStack_138;
  uStack_d0 = param_3;
  uStack_b8 = param_2;
  iVar5 = FUN_7fffa4e90ae0(param_5,param_4);
  iStack_d8 = iVar5;
  FUN_7fffa4cf5490(param_2,param_4,param_5,&plStack_c8);
  iVar6 = FUN_7fffa4cf5cf0(param_2,param_4,param_5);
  if (iVar6 < iVar5) {
    FUN_7fffa5496540(&plStack_c8,param_4,param_5,iVar5);
    FUN_7fffa4a8ff50(param_2,param_4,param_5,iVar5);
  }
  else {
    iVar5 = FUN_7fffa4cf5cf0(param_2,param_4,param_5);
    iStack_d8 = iVar5;
  }
  if ((-2 < iVar5) && (iVar5 < (int)param_5[1])) {
    if ((*param_1 == -0x1f928c9d) &&
       (((param_1[6] == 4 && (param_1[8] + 0xe66cfae0U < 3)) && (*(int64_t *)(param_1 + 0xc) == 0))
       )) {
      lVar7 = FUN_7fffa54539d0();
      if (*(int64_t *)(lVar7 + 0x20) == 0) goto LAB_7fffa517bd38;
      lVar7 = FUN_7fffa54539d0();
      param_1 = *(int **)(lVar7 + 0x20);
      lVar7 = FUN_7fffa54539d0();
      param_3 = *(uint64_t *)(lVar7 + 0x28);
      uStack_d0 = param_3;
      FUN_7fffa5513b10(*(uint64_t *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(int64_t *)(param_1 + 0xc) == 0))))))
      goto LAB_7fffa517bdb1;
      lVar7 = FUN_7fffa54539d0();
      if (*(int64_t *)(lVar7 + 0x38) != 0) {
        lVar7 = FUN_7fffa54539d0();
        uVar8 = *(uint64_t *)(lVar7 + 0x38);
        lVar7 = FUN_7fffa54539d0();
        *(uint64_t *)(lVar7 + 0x38) = 0;
        cVar4 = FUN_7fffa5404c00(param_1,uVar8);
        if (cVar4 == '\0') {
          cVar4 = FUN_7fffa56a0310(uVar8);
          if (cVar4 == '\0') {
            FUN_7fffa52c403c();
            pcVar3 = (code *)__debugbreak();
            (*pcVar3)();
            return;
          }
          FUN_7fffa5488e60(param_1,1);
          FUN_7fffa5427020(&uStack_70);
          FUN_7fffa4f41160(&uStack_70,&UNK_7fffa5894368);
          pcVar3 = (code *)__debugbreak();
          (*pcVar3)();
          return;
        }
        iVar5 = iStack_d8;
      }
    }
    uStack_98 = *(uint64_t *)(param_4 + 8);
    puStack_a0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (param_5[3] != 0) {
        puStack_110 = (uint32_t *)CONCAT44(puStack_110._4_4_,param_7);
        puStack_118 = param_5;
        FUN_7fffa507ef00(&plStack_90,&puStack_a0,iVar5,param_4);
        plStack_c8 = plStack_90;
        uStack_d4 = uStack_88;
        if (uStack_88 < uStack_78) {
          do {
            lVar9 = plStack_90[1];
            lVar7 = (int64_t)*(int *)(*plStack_90 + 0x10) + (uint64_t)uStack_88 * 0x14;
            iStack_bc = *(int *)(lVar7 + lVar9);
            if (iStack_bc <= iVar5) {
              if (iVar5 <= *(int *)(lVar7 + 4 + lVar9)) {
                uStack_c0 = *(uint32_t *)(lVar7 + 8 + lVar9);
                uVar12 = 0;
                uVar2 = *(uint32_t *)(lVar7 + 0xc + lVar9);
                lStack_b0 = (int64_t)*(int *)(lVar7 + 0x10 + lVar9) + *(int64_t *)(param_4 + 8);
                uStack_d4 = uStack_88;
                if (uVar2 != 0) {
                  do {
                    puVar1 = (uint32_t *)(lStack_b0 + uVar12 * 0x14);
                    uStack_70 = *puVar1;
                    uStack_6c = puVar1[1];
                    uStack_68 = puVar1[2];
                    iStack_64 = puVar1[3];
                    uStack_60 = *(uint32_t *)(lStack_b0 + 0x10 + uVar12 * 0x14);
                    iVar5 = *(int *)(*(int64_t *)(param_1 + 0xc) + 0xc);
                    lVar7 = FUN_7fffa5246e30();
                    piVar10 = (int *)((int64_t)iVar5 + lVar7 + 4);
                    iVar5 = *(int *)(*(int64_t *)(param_1 + 0xc) + 0xc);
                    lVar7 = FUN_7fffa5246e30();
                    iVar5 = *(int *)(lVar7 + iVar5);
                    uStack_88 = uStack_d4;
                    plStack_90 = plStack_c8;
                    while( true ) {
                      uStack_d4 = uStack_88;
                      plStack_c8 = plStack_90;
                      if (iVar5 < 1) break;
                      iVar6 = *piVar10;
                      lVar7 = FUN_7fffa5246e30();
                      lVar7 = iVar6 + lVar7;
                      iVar6 = FUN_7fffa56091e0(&uStack_70,lVar7,*(uint64_t *)(param_1 + 0xc));
                      param_2 = uStack_b8;
                      if (iVar6 != 0) {
                        uVar8 = FUN_7fffa4cf5490(uStack_b8,param_4,param_5,auStack_a8);
                        if (lVar7 != 0) {
                          FUN_7fffa5451110(param_1,uVar8,&uStack_70,lVar7);
                        }
                        lVar9 = (int64_t)iStack_64;
                        lVar7 = FUN_7fffa55d63a0();
                        puStack_118 = (uint32_t *)(lVar7 + lVar9);
                        cStack_e8 = param_6;
                        puStack_f8 = &uStack_70;
                        uStack_100 = CONCAT44(uStack_100._4_4_,uStack_c0);
                        iStack_108 = iStack_bc;
                        puStack_110 = param_5;
                        lStack_f0 = param_4;
                        FUN_7fffa4a99500(param_2,param_1,uStack_d0,uVar8);
                        plStack_90 = plStack_c8;
                        uStack_88 = uStack_d4;
                        iVar5 = iStack_d8;
                        goto LAB_7fffa517bc06;
                      }
                      piVar10 = piVar10 + 1;
                      iVar5 = iVar5 + -1;
                      uStack_88 = uStack_d4;
                      plStack_90 = plStack_c8;
                    }
                    uVar11 = (int)uVar12 + 1;
                    uVar12 = (uint64_t)uVar11;
                  } while (uVar11 != uVar2);
                  iVar5 = iStack_d8;
                }
                param_2 = uStack_b8;
              }
            }
LAB_7fffa517bc06:
            uStack_88 = uStack_88 + 1;
            uStack_d4 = uStack_88;
          } while (uStack_88 < uStack_78);
        }
      }
      if ((0x19930520 < (*param_5 & 0x1fffffff)) &&
         (((uVar2 = param_5[8], uVar2 != 0 && (lVar7 = FUN_7fffa55d63a0(), lVar7 + (int)uVar2 != 0))
          || (((param_5[9] & 4) != 0 && (cVar4 = FUN_7fffa55ce110(param_4,param_5), cVar4 == '\0')))
          ))) {
        if ((param_5[9] & 4) != 0) {
          lVar7 = FUN_7fffa54539d0();
          *(int **)(lVar7 + 0x20) = param_1;
          lVar7 = FUN_7fffa54539d0();
          *(uint64_t *)(lVar7 + 0x28) = uStack_d0;
          FUN_7fffa52c403c();
          pcVar3 = (code *)__debugbreak();
          (*pcVar3)();
          return;
        }
        uVar2 = param_5[8];
        if (uVar2 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_7fffa55d63a0();
          lVar7 = (int)uVar2 + lVar7;
        }
        cVar4 = FUN_7fffa5404c00(param_1,lVar7);
        if (cVar4 == '\0') {
          uVar8 = FUN_7fffa4cf5490(param_2,param_4,param_5,auStack_a8);
          cStack_e8 = param_6;
          puStack_f8 = (uint32_t *)0x0;
          uStack_100 = CONCAT44(uStack_100._4_4_,0xffffffff);
          iStack_108 = -1;
          puStack_110 = param_5;
          puStack_118 = (uint32_t *)0x0;
          lStack_f0 = param_4;
          FUN_7fffa4a99500(param_2,param_1,uStack_d0,uVar8);
        }
      }
    }
    else if (param_5[3] != 0) {
      if (param_6 != '\0') goto LAB_7fffa517bdb1;
      uStack_100 = param_8;
      iStack_108 = param_7;
      puStack_110 = (uint32_t *)CONCAT44(puStack_110._4_4_,iVar5);
      puStack_118 = param_5;
      FUN_7fffa51023d0(param_1,param_2,param_3,param_4);
    }
    lVar7 = FUN_7fffa54539d0();
    if (*(int64_t *)(lVar7 + 0x38) == 0) {
LAB_7fffa517bd38:
      FUN_7fffa5488850(uStack_58 ^ (uint64_t)auStack_138);
      return;
    }
  }
LAB_7fffa517bdb1:
  FUN_7fffa524fccc();
  pcVar3 = (code *)__debugbreak();
  (*pcVar3)();
  return;
}


// ============================================================================
// Function : FUN_7fffa517bdb8  |  RVA: 0xa0bdb8  |  Size: 178 bytes
// Callers  : FUN_7fffa52bbf48@0xb4bf48
// Callees  : FUN_7fffa5476b88@0xd06b88, FUN_7fffa56605e8@0xef05e8, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa4f54478@0x7e4478
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7fffa517bdb8(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int iStack_18;
  
  iStack_18 = 0;
  FUN_7fffa5476b88(8);
  for (iVar3 = 3; iVar3 != _DAT_7fffa4781c10; iVar3 = iVar3 + 1) {
    lVar4 = (int64_t)iVar3;
    lVar1 = *(int64_t *)(_DAT_7fffa4781c18 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint32_t *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (iVar2 = FUN_7fffa56605e8(*(uint64_t *)(_DAT_7fffa4781c18 + lVar4 * 8)), iVar2 != -1)) {
        iStack_18 = iStack_18 + 1;
      }
      (*(code *)&DAT_7ff850519980)(*(int64_t *)(_DAT_7fffa4781c18 + lVar4 * 8) + 0x30);
      FUN_7fffa52d8dd0(*(uint64_t *)(_DAT_7fffa4781c18 + lVar4 * 8));
      *(uint64_t *)(_DAT_7fffa4781c18 + lVar4 * 8) = 0;
    }
  }
  FUN_7fffa4f54478(8);
  return iStack_18;
}


// ============================================================================
// Function : FUN_7fffa517be70  |  RVA: 0xa0be70  |  Size: 238 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa517be70(uint16_t param_1,uint64_t param_2)

{
  uint8_t bVar1;
  int64_t *plVar2;
  
  param_2 = param_2 << 6 ^ param_2;
  param_2 = param_2 << 0xc ^ param_2;
  plVar2 = (int64_t *)(param_2 ^ 0xc0151a4d ^ param_2 << 0x30 ^ param_2 << 0x18);
  *(uint64_t *)plVar2[1] = 0;
  plVar2 = (int64_t *)*plVar2;
  if (plVar2 != (int64_t *)0x0) {
    do {
      plVar2 = (int64_t *)*plVar2;
      (*(code *)((int64_t)(short)((param_1 | 1) * -0x1abc) + 0x7fffa568e1dc))();
    } while (plVar2 != (int64_t *)0x0);
  }
  bVar1 = (uint8_t)param_1 & 0xf;
  (*(code *)(&UNK_7fffa5688129 + (short)(0x60ffU >> bVar1 | 0x60ff << 0x10 - bVar1)))();
  return;
}


// ============================================================================
// Function : FUN_7fffa517bf60  |  RVA: 0xa0bf60  |  Size: 1148 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa517bf60(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  uint8_t bVar6;
  int64_t lVar7;
  int iVar8;
  uint8_t bVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  int64_t lVar14;
  
  uRam00007fffa47bad1e = 0;
  uRam00007fffa47bad43 = 0;
  uRam00007fffa47bad4b = 0;
  uRam00007fffa47bad33 = 0;
  uRam00007fffa47bad3b = 0;
  uRam00007fffa47bad23 = 0;
  uRam00007fffa47bad2b = 0;
  uRam00007fffa47bad60 = 0;
  uVar2 = rdtsc();
  lVar7 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar2 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar2)) * 0x2459c495f8813c0;
  lVar10 = 3;
  while( true ) {
    uVar1 = lVar10 - 3;
    lVar7 = lVar7 * 0x2459c495f8813c0 + 0x2459c495f8813c0;
    lVar14 = lVar7 * 0x2459c495f8813c0 + 0x2459c495f8813c0;
    *(char *)(lVar10 + 0x7fffa47bad0e) = (char)((uint64_t)lVar14 >> 0x20);
    *(char *)(lVar10 + 0x7fffa47bad0d) = (char)((uint64_t)lVar7 >> 0x20);
    lVar7 = lVar14 * 0x2459c495f8813c0 + 0x2459c495f8813c0;
    *(char *)(lVar10 + 0x7fffa47bad0f) = (char)((uint64_t)lVar7 >> 0x20);
    if ((uVar1 * 0x800 | uVar1 >> 0x35) * 0x5b791b803ae80d8d == 0x75f0b8152a58a000) break;
    lVar7 = lVar7 * 0x2459c495f8813c0 + 0x2459c495f8813c0;
    *(char *)(lVar10 + 0x7fffa47bad10) = (char)((uint64_t)lVar7 >> 0x20);
    lVar10 = lVar10 + 4;
  }
  uVar5 = (uint32_t)uVar1;
  iVar3 = (int)lVar10;
  iVar8 = iVar3 + -2;
  lVar7 = (int64_t)(int)(uVar5 ^ 0xffff5ec8);
  bVar4 = (uint8_t)uVar1;
  uVar1 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)
                           (short)(-0x7228 << (bVar4 & 0xf) | 0x8dd8U >> 0x10 - (bVar4 & 0xf)) +
                          0x7fffa47bcf96) * 0x2aaaaaab + 0x2aaaaaab) * 6;
  uVar11 = uVar1 >> 0x20;
  bVar9 = *(uint8_t *)((int64_t)
                    (int)(0xfff145ffU >> (bVar4 & 0x1f) | -0xeba01 << 0x20 - (bVar4 & 0x1f)) +
                   0x7fffa47c9902);
  bVar6 = *(uint8_t *)((int64_t)
                    (int)(((iVar3 + 0x892dc95fU) * 0x100000 | iVar3 + 0x892dc95fU >> 0xc) +
                         0x6396d319) + 0x7fffa47c476b);
  bVar13 = ~bVar9;
  if (0x9ab89e8f < (iVar8 * 0x7a200000 | (uint32_t)(iVar8 * -0x72a3d85e) >> 0xc)) {
    bVar13 = bVar9 + 1;
  }
  bVar4 = ~*(uint8_t *)((int64_t)(short)(-0x71d8 << (bVar4 & 0xf) | 0x8e28U >> 0x10 - (bVar4 & 0xf)) +
                    0x7fffa47bcadd);
  bVar9 = *(uint8_t *)((int64_t)(iVar3 + -0xfe07) + 0x7fffa47cab06);
  bVar12 = ~*(uint8_t *)((int64_t)(int)(uVar5 ^ 0xffff4e33) + 0x7fffa47c5f0b);
  *(uint8_t *)(lVar7 + 0x7fffa47c4e7c + uVar11 * 8) = bVar4 << 5 | bVar4 >> 3;
  *(uint8_t *)(lVar7 + 0x7fffa47c4e79 + uVar11 * 8) = bVar12 << 5 | bVar12 >> 3;
  bVar4 = *(uint8_t *)((int64_t)~(iVar8 * -0x26051035) + 0x7fffa47c487f);
  bVar12 = ~*(uint8_t *)((int64_t)(iVar8 * -0x11e58299 + 0xf8b9c2e) + 0x7fffa47c9792);
  *(uint8_t *)(lVar7 + 0x7fffa47c4e78 + uVar11 * 8) = bVar13 << 5 | bVar13 >> 3;
  *(uint8_t *)(lVar7 + 0x7fffa47c4e7a + uVar11 * 8) = bVar12 << 5 | bVar12 >> 3;
  bVar13 = ~*(uint8_t *)((int64_t)(short)((short)iVar8 * -0x1e92) + 0x7fffa47bbcfe);
  *(uint8_t *)(lVar7 + 0x7fffa47c4e7b + uVar11 * 8) = bVar13 << 5 | bVar13 >> 3;
  bVar4 = ~bVar4;
  *(uint8_t *)(lVar7 + 0x7fffa47c4e7e + uVar11 * 8) = bVar4 << 5 | bVar4 >> 3;
  bVar9 = ~bVar9;
  *(uint8_t *)(lVar7 + 0x7fffa47c4e7d + uVar11 * 8) = bVar9 << 5 | bVar9 >> 3;
  bVar6 = ~bVar6;
  *(uint8_t *)(lVar7 + 0x7fffa47c4e77 + uVar11 * 8) = bVar6 << 5 | bVar6 >> 3;
  *(char *)((int64_t)(int)~(uVar5 ^ 0x9a5f) + 0x7fffa47c475a) = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa517c3e0  |  RVA: 0xa0c3e0  |  Size: 1489 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa517c7c3) */
/* WARNING: Removing unreachable block (ram,0x7fffa517c824) */
/* WARNING: Removing unreachable block (ram,0x7fffa517c75d) */

void FUN_7fffa517c3e0(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uRam00007fffa47849b8 = 0xb1dd42b615cc10e2;
  lVar1 = lRam00007fffa4781148 + lRam00007fffa47812f8;
  uVar2 = -lVar1;
  uVar2 = (lVar1 * -0x8000 | uVar2 >> 0x31) ^ (lVar1 * -0x80 | uVar2 >> 0x39) ^ uVar2;
  uRam00007fffa47849d0 = 0x6cbffa836e622d28;
  uVar2 = (uVar2 << 0x1e | uVar2 >> 0x22) ^ (uVar2 << 0xe | uVar2 >> 0x32) ^ uVar2;
  uVar3 = uVar2 << 0x3c | uVar2 >> 4;
  uVar5 = (uVar2 << 0x1c | uVar2 >> 0x24) ^ uVar2 ^ uVar3;
  uVar2 = uVar5 * -0x7ff001ffc007ff;
  uVar2 = (uVar5 * 0x1ffc0080000000 | uVar2 >> 0x21) ^ (uVar5 * -0x3ff800ffe0000000 | uVar2 >> 0x23)
          ^ uVar2;
  uRam00007fffa47849e8 = 0;
  uRam00007fffa47849c8 = 0x4cc80b3e8624c34b;
  uVar2 = (uVar2 << 0x3e | uVar2 >> 2) ^ (uVar2 << 0x3a | uVar2 >> 6) ^ uVar2;
  uRam00007fffa47849d8 = 0x9349acde8b9934c6;
  uVar5 = (uVar2 << 0x34 | uVar2 >> 0xc) ^ (uVar2 << 0x3c | uVar2 >> 4);
  uVar4 = ~uVar3;
  uVar6 = ~uVar5;
  uVar7 = uVar6 & ~uVar2;
  uVar8 = ~uVar2 & uVar5;
  uVar2 = ((uVar6 ^ uVar2) & uVar4) * 0x2766c68d + ((uVar5 | uVar2) ^ uVar3) * -0x4a98a4c0 +
          ((uVar5 ^ uVar2) & uVar4) * 0x71ff6b4e + (uVar8 & uVar4) * -0x51d8209e +
          (uVar7 & uVar4) * 0x4663bc64 +
          (uVar5 & uVar2 ^ uVar3) * 0x4a98a4c0 +
          (uVar8 | uVar4) * 0x51d8209e + (uVar5 | uVar2 | uVar3) * 0x2331de32 +
          (uVar3 | uVar7) * -0x2331de32 +
          ((uVar6 | uVar2) ^ uVar3) * -0x51d8209e + (uVar5 ^ uVar2 | uVar4) * -0x4a98a4bf;
  uVar2 = (uVar2 << 0x38 | uVar2 >> 8) ^ (uVar2 << 0x28 | uVar2 >> 0x18) ^ uVar2;
  uRam00007fffa47849c0 = (uVar2 << 0x30 | uVar2 >> 0x10) ^ (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar2;
  uRam00007fffa47849f0 = 0xffffffffffffffff;
  uRam00007fffa47849e0 = 0xf5ffa62758211dec;
  return;
}


// ============================================================================
// Function : FUN_7fffa517c9b4  |  RVA: 0xa0c9b4  |  Size: 139 bytes
// Callers  : FUN_7fffa5102740@0x992740
// Callees  : FUN_7fffa565700c@0xee700c, FUN_7fffa4ed9184@0x769184, FUN_7fffa52d5bb0@0xb65bb0, FUN_7fffa522524c@0xab524c, FUN_7fffa548e49c@0xd1e49c
// ============================================================================
uint64_t
FUN_7fffa517c9b4(uint64_t param_1,uint32_t *param_2,uint64_t *param_3,uint32_t *param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint32_t *puVar4;
  
  FUN_7fffa548e49c(*param_2);
  if ((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + ((int64_t)(int)*(uint32_t *)*param_3 >> 6) * 8) +
                 0x38 + (uint64_t)(*(uint32_t *)*param_3 & 0x3f) * 0x48) & 1) != 0) {
    uVar3 = FUN_7fffa522524c();
    iVar1 = (*(code *)&DAT_7ff84ea57440)(uVar3);
    uVar3 = 0;
    if (iVar1 != 0) goto LAB_7fffa517ca2b;
    uVar2 = (*(code *)&DAT_7ff84ea18640)();
    puVar4 = (uint32_t *)FUN_7fffa52d5bb0();
    *puVar4 = uVar2;
  }
  puVar4 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar4 = 9;
  uVar3 = 0xffffffff;
LAB_7fffa517ca2b:
  FUN_7fffa565700c(*param_4);
  return uVar3;
}


// ============================================================================
// Function : FUN_7fffa517dd70  |  RVA: 0xa0dd70  |  Size: 127 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa517dd70(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  uVar1 = (short)*(uint32_t *)(param_2 + 0xb8) + 0x4f19;
  (*(code *)(&UNK_7fffa5491317 + (short)(uVar1 * 0x100 | uVar1 >> 8)))();
  return;
}


// ============================================================================
// Function : FUN_7fffa517ddf0  |  RVA: 0xa0ddf0  |  Size: 110 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa517ddf0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  code *pcVar3;
  
  uVar1 = *(uint64_t *)(param_2 + 400);
  if (uVar1 != 0) {
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xb8) & 0xf;
    pcVar3 = (code *)((int64_t)(short)(0x1243 << bVar2 | 0x1243U >> 0x10 - bVar2) + 0x7fffa568b7a0)
    ;
    (*pcVar3)(pcVar3,0x7fffa568b7a0,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa517de60  |  RVA: 0xa0de60  |  Size: 947 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa517de60(void)

{
  uint64_t uVar1;
  uint16_t uVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  uVar3 = in_RAX & 0xffffffffffffff00;
  lVar7 = (in_RAX & 0xffffffffe4c08f00) * -0x1564464c6 + (uVar3 ^ 0xffffffffe4c08f02) * -0x1564464c6
          + (~uVar3 & 0x1b3f70fd) * -0x96446024 + (uVar3 | 0xffffffffe4c08f02) * 0xc00004a2;
  uVar6 = (uint32_t)lVar7;
  uRam00007fffa47bc6cc = (uVar6 ^ 0x6024) & 0xffff;
  uVar2 = (uint16_t)lVar7;
  bVar4 = (uint8_t)lVar7;
  lVar7 = (int64_t)(int)(-0x69bc7b3e - uVar6);
  *(uint8_t *)((int64_t)(short)~(uVar2 ^ 0x5572) + 0x7fffa47bfbe4) =
       '\0' << (bVar4 & 7) | 0U >> 8 - (bVar4 & 7);
  *(uint64_t *)(lVar7 + 0x7fffa47ca20f) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47ca217) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47ca1ff) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47ca207) = 0;
  uVar1 = rdtsc();
  lVar8 = 0;
  lVar7 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)(in_RAX >> 0x20),(int)uVar1)) * 0xe73302fb92af88e;
  while( true ) {
    *(char *)(lVar8 + (int64_t)(short)(uVar2 + 0x44ad) + 0x7fffa47c21b0) =
         (char)((uint64_t)(lVar7 * 0xde200d50b8) >> 0x20);
    *(char *)(lVar8 + (int64_t)
                      (int)(0x5ffff3e9 << (bVar4 & 0x1f) | 0x5ffff3e9U >> 0x20 - (bVar4 & 0x1f)) +
                      0x7fffa47c87ea) = (char)((uint64_t)(lVar7 * 0x2fb92af88e) >> 0x20);
    *(char *)(lVar8 + (int64_t)(short)(0xf01eU >> (bVar4 & 0xf) | -0xfe2 << 0x10 - (bVar4 & 0xf)) +
                      0x7fffa47bd77f) = (char)((uint64_t)(lVar7 * 0x97bbeb6ec4) >> 0x20);
    if (lVar8 == 0x4e) break;
    *(char *)(lVar8 + (int64_t)(int)((uVar6 ^ 0x71cc5a0d) + 0x18773c0c) + 0x7fffa47c504d) =
         (char)((uint64_t)(lVar7 * 0x8ee3c50610) >> 0x20);
    *(char *)(lVar8 + ((int64_t)(int)(0x75943432 - uVar6) ^ 0x20b098c5U) + 0x7fffa47c79b9) =
         (char)((uint64_t)(lVar7 * 0x6650a3ff4c238440) >> 0x20);
    *(char *)(lVar8 + (int64_t)
                      (short)(((0x71f5 - uVar2) * 2 | (uint16_t)((short)(0x71f5 - uVar2) < 0)) * 0xf33
                             ) + 0x7fffa47c2f3d) = (char)((uint64_t)(lVar7 * 0x8dc3c8dce0) >> 0x20)
    ;
    lVar8 = lVar8 + 6;
    lVar7 = lVar7 * 0x6650a3ff4c238440;
  }
  bVar5 = *(char *)((int64_t)
                    (int)((-0x6020f120 << (bVar4 & 0x1f) | 0x9fdf0ee0U >> 0x20 - (bVar4 & 0x1f)) *
                         -0x52bd1437) + 0x7fffa47c9e7c) + 1U & 7;
  *(uint32_t *)
   ((int64_t)(short)((0xae6U >> (bVar4 & 0xf) | 0xae6 << 0x10 - (bVar4 & 0xf)) * 0x51) +
    0x7fffa47c2f8f + (uint64_t)bVar5 * 4) = 0x568eec27;
  *(uint8_t *)((int64_t)(short)((uVar2 | 1) * 0x60b2 + -0x51) + 0x7fffa47c0d24) = bVar5;
  return;
}


// ============================================================================
// Function : FUN_7fffa517e220  |  RVA: 0xa0e220  |  Size: 206 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa517e220(int64_t param_1,uint64_t *param_2,int64_t param_3)

{
  uint32_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *in_RAX;
  uint32_t *puVar12;
  uint32_t *puVar13;
  uint32_t *puVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar15 = (int64_t)param_2 - param_1;
  param_1 = param_1 + param_3;
  puVar14 = (uint32_t *)(param_1 + -0x10 + lVar15);
  uVar4 = puVar14[1];
  uVar5 = puVar14[2];
  uVar6 = puVar14[3];
  puVar12 = (uint32_t *)(param_1 + -0x10);
  uVar16 = param_3 - 0x10;
  puVar13 = puVar12;
  uVar18 = *puVar14;
  uVar19 = uVar4;
  uVar20 = uVar5;
  uVar21 = uVar6;
  if (((uint64_t)puVar12 & 0xf) != 0) {
    puVar13 = (uint32_t *)((uint64_t)puVar12 & 0xfffffffffffffff0);
    puVar1 = (uint32_t *)((int64_t)puVar13 + lVar15);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar20 = puVar1[2];
    uVar21 = puVar1[3];
    *puVar12 = *puVar14;
    *(uint32_t *)(param_1 + -0xc) = uVar4;
    *(uint32_t *)(param_1 + -8) = uVar5;
    *(uint32_t *)(param_1 + -4) = uVar6;
    uVar16 = (int64_t)puVar13 - (int64_t)in_RAX;
  }
  uVar17 = uVar16 >> 7;
  if (uVar17 != 0) {
    *puVar13 = uVar18;
    puVar13[1] = uVar19;
    puVar13[2] = uVar20;
    puVar13[3] = uVar21;
    puVar14 = puVar13;
    while( true ) {
      puVar2 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar13 = puVar14 + -0x20;
      *(uint64_t *)(puVar14 + -4) = *puVar2;
      *(uint64_t *)(puVar14 + -2) = uVar9;
      *(uint64_t *)(puVar14 + -8) = uVar10;
      *(uint64_t *)(puVar14 + -6) = uVar11;
      puVar2 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar17 = uVar17 - 1;
      *(uint64_t *)(puVar14 + -0xc) = *puVar2;
      *(uint64_t *)(puVar14 + -10) = uVar9;
      *(uint64_t *)(puVar14 + -0x10) = uVar10;
      *(uint64_t *)(puVar14 + -0xe) = uVar11;
      puVar2 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(uint64_t *)(puVar14 + -0x14) = *puVar2;
      *(uint64_t *)(puVar14 + -0x12) = uVar9;
      *(uint64_t *)(puVar14 + -0x18) = uVar10;
      *(uint64_t *)(puVar14 + -0x16) = uVar11;
      puVar2 = (uint64_t *)((int64_t)puVar14 + lVar15 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar12 = (uint32_t *)((int64_t)puVar13 + lVar15);
      uVar18 = *puVar12;
      uVar19 = puVar12[1];
      uVar20 = puVar12[2];
      uVar21 = puVar12[3];
      if (uVar17 == 0) break;
      *(uint64_t *)(puVar14 + -0x1c) = uVar9;
      *(uint64_t *)(puVar14 + -0x1a) = uVar10;
      *puVar13 = uVar18;
      puVar14[-0x1f] = uVar19;
      puVar14[-0x1e] = uVar20;
      puVar14[-0x1d] = uVar21;
      puVar14 = puVar13;
    }
    *(uint64_t *)(puVar14 + -0x1c) = uVar9;
    *(uint64_t *)(puVar14 + -0x1a) = uVar10;
    uVar16 = uVar16 & 0x7f;
  }
  for (uVar17 = uVar16 >> 4; uVar17 != 0; uVar17 = uVar17 - 1) {
    *puVar13 = uVar18;
    puVar13[1] = uVar19;
    puVar13[2] = uVar20;
    puVar13[3] = uVar21;
    puVar13 = puVar13 + -4;
    puVar14 = (uint32_t *)((int64_t)puVar13 + lVar15);
    uVar18 = *puVar14;
    uVar19 = puVar14[1];
    uVar20 = puVar14[2];
    uVar21 = puVar14[3];
  }
  if ((uVar16 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar13 = uVar18;
  puVar13[1] = uVar19;
  puVar13[2] = uVar20;
  puVar13[3] = uVar21;
  return;
}


// ============================================================================
// Function : FUN_7fffa517e300  |  RVA: 0xa0e300  |  Size: 20 bytes
// Callers  : FUN_7fffa5581e30@0xe11e30
// Callees  : FUN_7fffa4f5c658@0x7ec658
// ============================================================================
bool FUN_7fffa517e300(void)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa4f5c658();
  return lVar1 != 0;
}


// ============================================================================
// Function : FUN_7fffa517e320  |  RVA: 0xa0e320  |  Size: 60 bytes
// Callers  : FUN_7fffa5697680@0xf27680
// Callees  : FUN_7fffa505ca10@0x8eca10, FUN_7fffa5225570@0xab5570, FUN_7fffa56084d0@0xe984d0, FUN_7fffa5513ad0@0xda3ad0, FUN_7fffa47df050@0x6f050
// ============================================================================
uint32_t FUN_7fffa517e320(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = FUN_7fffa5513ad0();
  if (iVar1 != 0) {
    FUN_7fffa5225570();
    return 1;
  }
  uVar2 = FUN_7fffa47df050();
  iVar1 = FUN_7fffa56084d0(uVar2);
  if (iVar1 == 0) {
    FUN_7fffa505ca10();
    return 1;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa517e360  |  RVA: 0xa0e360  |  Size: 73 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa517e360(uint64_t param_1,uint8_t param_2)

{
  code *pcVar1;
  
  (*(code *)(&UNK_7fffa4aa5e10 +
            (int)((0xbf5ea010U >> (param_2 & 0x1f) | -0x40a15ff0 << 0x20 - (param_2 & 0x1f)) *
                 -0x241f2971)))("invalid string position");
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa517e3b0  |  RVA: 0xa0e3b0  |  Size: 29 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa517e3cb) */

uint64_t FUN_7fffa517e3b0(void)

{
  uint32_t in_EAX;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0xf8f277f6,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa517e3e0  |  RVA: 0xa0e3e0  |  Size: 1039 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa517e3e0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  
  bRam00007fffa47860f7 = 0;
  uRam00007fffa4786118 = 0;
  uRam00007fffa4786120 = 0;
  uRam00007fffa4786108 = 0;
  uRam00007fffa4786110 = 0;
  uRam00007fffa4786128 = 0;
  _uRam00007fffa4786135 = 0;
  uVar1 = rdtsc();
  lVar7 = 5;
  lVar5 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0xb60f6ba80626be;
  while( true ) {
    *(char *)(lVar7 + 0x7fffa47860e9) = (char)((uint64_t)(lVar5 * 0xf840a470f8) >> 0x20);
    *(char *)(lVar7 + 0x7fffa47860e8) = (char)((uint64_t)(lVar5 * 0x15ecbcd336c4f504) >> 0x20);
    *(char *)(lVar7 + 0x7fffa47860e7) = (char)((uint64_t)(lVar5 * 0x6ba80626be) >> 0x20);
    if (lVar7 == 0x59) break;
    *(char *)(lVar7 + 0x7fffa47860eb) = (char)((uint64_t)(lVar5 * 0xe1308f1be0) >> 0x20);
    *(char *)(lVar7 + 0x7fffa47860ea) = (char)((uint64_t)(lVar5 * 0x7dc8a0a810) >> 0x20);
    *(char *)(lVar7 + 0x7fffa47860ec) = (char)((uint64_t)(lVar5 * 0x30ba629cef99f040) >> 0x20);
    lVar7 = lVar7 + 6;
    lVar5 = lVar5 * 0x30ba629cef99f040;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47860f7 * 0x33333334 + 0x33333334) * 5;
  uVar6 = uVar2 >> 0x20;
  *(uint8_t *)(uVar6 * 8 + 0x7fffa478610a) = bRam00007fffa4786137 << 5 | bRam00007fffa4786137 >> 3;
  bVar4 = bRam00007fffa478613a;
  bVar3 = uRam00007fffa4786135._1_1_;
  *(uint8_t *)(uVar6 * 8 + 0x7fffa4786108) =
       (uint8_t)uRam00007fffa4786135 << 5 | (uint8_t)uRam00007fffa4786135 >> 3;
  *(uint8_t *)(uVar6 * 8 + 0x7fffa478610d) = bVar4 << 5 | bVar4 >> 3;
  bVar4 = bRam00007fffa4786138;
  *(uint8_t *)(uVar6 * 8 + 0x7fffa4786109) = bVar3 << 5 | bVar3 >> 3;
  *(uint8_t *)(uVar6 * 8 + 0x7fffa478610c) = bRam00007fffa4786139 << 5 | bRam00007fffa4786139 >> 3;
  bVar3 = bRam00007fffa478613c;
  *(uint8_t *)(uVar6 * 8 + 0x7fffa478610b) = bVar4 << 5 | bVar4 >> 3;
  *(uint8_t *)(uVar6 * 8 + 0x7fffa478610f) = bVar3 << 5 | bVar3 >> 3;
  *(uint8_t *)(uVar6 * 8 + 0x7fffa478610e) = bRam00007fffa478613b << 5 | bRam00007fffa478613b >> 3;
  bRam00007fffa47860f7 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa517e7f0  |  RVA: 0xa0e7f0  |  Size: 7465 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa517f6b9) */
/* WARNING: Removing unreachable block (ram,0x7fffa517ef7d) */
/* WARNING: Removing unreachable block (ram,0x7fffa517f19d) */
/* WARNING: Removing unreachable block (ram,0x7fffa517f1b4) */
/* WARNING: Removing unreachable block (ram,0x7fffa517f96d) */
/* WARNING: Removing unreachable block (ram,0x7fffa517f72a) */
/* WARNING: Removing unreachable block (ram,0x7fffa517f7ef) */
/* WARNING: Removing unreachable block (ram,0x7fffa518005f) */
/* WARNING: Removing unreachable block (ram,0x7fffa5180274) */

int64_t FUN_7fffa517e7f0(uint64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint32_t uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint32_t uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int iVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  uint64_t *puVar22;
  int iVar23;
  uint64_t uVar24;
  uint64_t *puVar25;
  int iVar26;
  code *pcVar27;
  int *piVar28;
  uint64_t *puVar29;
  uint32_t uVar30;
  uint64_t *puVar31;
  int64_t lVar32;
  uint64_t *puVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t *puVar36;
  uint64_t *puVar37;
  uint32_t uVar38;
  uint32_t uVar39;
  int64_t lStack_1a0;
  uint32_t uStack_194;
  uint64_t uStack_140;
  uint64_t uStack_138;
  int64_t lStack_130;
  uint64_t uStack_128;
  uint64_t *puStack_120;
  uint64_t *puStack_118;
  uint64_t uStack_110;
  uint64_t *puStack_108;
  uint64_t *puStack_100;
  uint64_t *puStack_f8;
  int64_t lStack_f0;
  int64_t lStack_e8;
  uint64_t *puStack_e0;
  uint64_t uStack_d8;
  uint64_t *puStack_d0;
  uint32_t *puStack_c8;
  uint64_t *puStack_c0;
  uint64_t uStack_b8;
  uint64_t *puStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  uint32_t uStack_84;
  uint64_t uStack_80;
  int64_t lStack_78;
  uint32_t uStack_70;
  int iStack_6c;
  int64_t lStack_68;
  int64_t lStack_60;
  
  uVar5 = *(uint32_t *)(param_1 + 0x110);
  lVar7 = *(int64_t *)(param_1 + 8);
  lStack_f0 = *(int64_t *)(param_1 + 0x10);
  uStack_d8 = (uint64_t)*(uint32_t *)(param_1 + 0x18);
  puStack_d0 = (uint64_t *)(lVar7 + uStack_d8);
  uVar30 = 6;
  if (uVar5 < 6) {
    uVar30 = uVar5;
  }
  uStack_84 = 4;
  if (4 < uVar30) {
    uStack_84 = uVar30;
  }
  uStack_70 = *param_3;
  uStack_194 = param_3[1];
  puVar22 = (uint64_t *)((int64_t)param_4 + param_5);
  puStack_108 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  puVar37 = (uint64_t *)((uint64_t)(param_4 == puStack_d0) + (int64_t)param_4);
  *(uint32_t *)(param_1 + 300) = 0;
  puStack_c8 = param_3;
  if (puStack_108 <= puVar37) {
LAB_7fffa5180543:
    puStack_c8[1] = uStack_194;
    *puStack_c8 = uStack_70;
    return (int64_t)puVar22 - (int64_t)param_4;
  }
  puStack_c0 = (uint64_t *)((uint64_t)*(uint32_t *)(param_1 + 0x1c) + lStack_f0);
  puStack_90 = (uint64_t *)(lStack_f0 + uStack_d8);
  puStack_e0 = puVar22 + -4;
  puVar1 = (uint64_t *)((int64_t)puVar22 - 1);
  uVar30 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  puStack_b0 = (uint64_t *)((int64_t)puVar22 + -7);
  puStack_100 = (uint64_t *)((int64_t)puVar22 + -3);
  iStack_6c = *(uint32_t *)(param_1 + 0x18) - 1;
  iVar23 = (int)lVar7;
  uStack_128 = (uint64_t)(1 - iVar23);
  lStack_68 = uStack_d8 + lVar7 + 8;
  puStack_120 = puVar22;
  uStack_a0 = uStack_128;
LAB_7fffa517ea13:
  iVar6 = *(int *)(param_1 + 0x1c);
  uVar38 = (int)puVar37 - iVar23;
  puVar21 = (uint64_t *)(uint64_t)uVar38;
  iVar26 = uVar38 + 1;
  uVar39 = iVar26 - uStack_70;
  uVar14 = (uint64_t)uVar39;
  lVar20 = lVar7;
  if (uVar39 < (uint32_t)uStack_d8) {
    lVar20 = lStack_f0;
  }
  iVar16 = iVar26 - uVar30;
  if ((uint32_t)(iVar26 - iVar6) <= uVar30) {
    iVar16 = iVar6;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar16 = iVar6;
  }
  puStack_f8 = (uint64_t *)((int64_t)puVar37 + 1);
  if (iStack_6c - uVar39 < 3) {
LAB_7fffa517eadd:
    uVar24 = 0;
  }
  else {
    uVar24 = 0;
    if (uStack_70 <= (uVar38 - iVar16) + 1) {
      if (*(int *)puStack_f8 != *(int *)(lVar20 + uVar14)) goto LAB_7fffa517eadd;
      puVar36 = (uint64_t *)((int64_t)puVar37 + 5);
      puVar19 = (uint64_t *)((int *)(lVar20 + uVar14) + 1);
      puVar25 = puVar22;
      if (uVar39 < (uint32_t)uStack_d8) {
        puVar25 = puStack_90;
      }
      puVar15 = (uint64_t *)((int64_t)puVar37 + (int64_t)puVar25 + (5 - (int64_t)puVar19));
      if (puVar22 <= puVar15) {
        puVar15 = puVar22;
      }
      puVar29 = (uint64_t *)((int64_t)puVar15 - 7);
      puVar18 = puVar36;
      puVar31 = puVar19;
      if (puVar36 < puVar29) {
        if (*puVar19 == *puVar36) {
          puVar18 = (uint64_t *)((int64_t)puVar37 + 0xd);
          puVar31 = (uint64_t *)(uVar14 + lVar20 + 0xc);
          puVar13 = puVar18;
          if (puVar18 < puVar29) {
LAB_7fffa517ebb0:
            if (*puVar31 == *puVar18) goto code_r0x7fffa517ebbb;
            uVar38 = 0;
            for (uVar24 = *puVar31 ^ *puVar18; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar38 = uVar38 + 1;
            }
            uVar24 = (int64_t)puVar13 + ((uint64_t)(uVar38 >> 3) - (int64_t)puVar36);
            goto LAB_7fffa517ec10;
          }
          goto LAB_7fffa517eb2f;
        }
        uVar38 = 0;
        for (uVar24 = *puVar19 ^ *puVar36; (uVar24 & 1) == 0;
            uVar24 = uVar24 >> 1 | 0x8000000000000000) {
          uVar38 = uVar38 + 1;
        }
        uVar24 = (uint64_t)(uVar38 >> 3);
      }
      else {
LAB_7fffa517eb2f:
        if ((puVar18 < (uint64_t *)((int64_t)puVar15 - 3U)) && ((int)*puVar31 == (int)*puVar18)) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
          puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
        }
        if ((puVar18 < (uint64_t *)((int64_t)puVar15 - 1U)) &&
           ((short)*puVar31 == (short)*puVar18)) {
          puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
          puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
        }
        if (puVar18 < puVar15) {
          puVar18 = (uint64_t *)((int64_t)puVar18 + (uint64_t)((char)*puVar31 == (char)*puVar18))
          ;
        }
        uVar24 = (int64_t)puVar18 - (int64_t)puVar36;
      }
LAB_7fffa517ec10:
      if ((uint64_t *)((int64_t)puVar19 + uVar24) == puVar25) {
        puVar36 = (uint64_t *)((int64_t)puVar36 + uVar24);
        puVar25 = puStack_d0;
        puVar19 = puVar36;
        if (puVar36 < puStack_b0) {
          if (*puStack_d0 == *puVar36) {
            puVar19 = (uint64_t *)((int64_t)puVar37 + uVar24 + 0xd);
            lVar20 = 8;
LAB_7fffa517ec60:
            if (puVar19 < puStack_b0) {
              if (*(uint64_t *)((int64_t)puStack_d0 + lVar20) == *puVar19)
              goto code_r0x7fffa517ecc3;
              uVar38 = 0;
              for (uVar17 = *puVar19 ^ *(uint64_t *)((int64_t)puStack_d0 + lVar20);
                  (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                uVar38 = uVar38 + 1;
              }
              uVar17 = (uint64_t)(uVar38 >> 3) + lVar20;
              goto LAB_7fffa517ed2b;
            }
            puVar25 = (uint64_t *)(lVar20 + (int64_t)puStack_d0);
            goto LAB_7fffa517ece3;
          }
          uVar38 = 0;
          for (uVar17 = *puVar36 ^ *puStack_d0; (uVar17 & 1) == 0;
              uVar17 = uVar17 >> 1 | 0x8000000000000000) {
            uVar38 = uVar38 + 1;
          }
          uVar17 = (uint64_t)(uVar38 >> 3);
        }
        else {
LAB_7fffa517ece3:
          if ((puVar19 < puStack_100) && ((int)*puVar25 == (int)*puVar19)) {
            puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
          }
          if ((puVar19 < puVar1) && ((short)*puVar25 == (short)*puVar19)) {
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
          }
          if (puVar19 < puVar22) {
            puVar19 = (uint64_t *)
                      ((int64_t)puVar19 + (uint64_t)((char)*puVar25 == (char)*puVar19));
          }
          uVar17 = (int64_t)puVar19 - (int64_t)puVar36;
        }
LAB_7fffa517ed2b:
        uVar24 = uVar24 + uVar17;
      }
      uVar24 = uVar24 + 4;
    }
  }
  uStack_138 = 999999999;
  puStack_98 = param_4;
  if (uVar5 < 5) {
    uVar17 = (((int64_t)puVar37 << 0x1a | (uint64_t)puVar37 >> 0x26) ^
              ((int64_t)puVar37 << 8 | (uint64_t)puVar37 >> 0x38) ^ (uint64_t)puVar37) -
             0x5307618;
    uVar12 = FUN_7fffa512fb30(uVar17,0xffffffffcd90a63e,
                              (uVar17 * 8 | uVar17 >> 0x3d) ^ (uVar17 * 0x80000 | uVar17 >> 0x2d) ^
                              uVar17,puVar22);
    uVar17 = uVar12 ^ 0xc0000004;
    uVar17 = (uVar17 << 0xb | uVar12 >> 0x35) ^
             (uVar17 >> 1 | (uint64_t)((uVar17 & 1) != 0) << 0x3f) ^ uVar17;
    uVar17 = (uVar17 << 0x3e | uVar17 >> 2) ^ (uVar17 << 0x16 | uVar17 >> 0x2a) ^ uVar17;
    uVar17 = (uVar17 << 0x3c | uVar17 >> 4) ^ (uVar17 << 0x2c | uVar17 >> 0x14) ^ uVar17;
    uVar17 = (uVar17 << 0x18 | uVar17 >> 0x28) ^ (uVar17 << 0x38 | uVar17 >> 8) ^ uVar17;
  }
  else if (uVar5 == 5) {
    uVar17 = (uint64_t)&uStack_138 >> 3;
    pcVar27 = FUN_7fffa5613f70;
    uVar12 = ((int64_t)puVar22 << 0x29 | (uint64_t)puVar22 >> 0x17) ^
             ((int64_t)puVar22 << 0xc | (uint64_t)puVar22 >> 0x34) ^ (uint64_t)puVar22;
    FUN_7fffa5613f70(uVar17,((int64_t)&uStack_138 << 0x25 | (uint64_t)&uStack_138 >> 0x1b) ^
                            uVar17 ^ (uint64_t)&uStack_138,uVar12 << 8 | uVar12 >> 0x38);
    uVar17 = (int64_t)pcVar27 << 0x2d ^ (uint64_t)pcVar27;
  }
  else {
    uVar17 = (int64_t)puVar37 * 0x10000000000001;
    puVar36 = &uStack_138;
    puStack_118 = puVar21;
    FUN_7fffa5659210(FUN_7fffa5659210,(int64_t)puVar22 - ((int64_t)puVar22 << 0x3d),param_1,
                     ((int64_t)puVar37 * 0x8000000 | uVar17 >> 0x25) ^
                     ((int64_t)puVar37 * 0x100000000000010 | uVar17 >> 0x3c) ^ uVar17);
    uVar17 = (uint64_t)puVar36 ^ 0x3448e13f;
    uVar12 = uVar17 * 0x7b16e8811d5c5177;
    uVar17 = (uVar17 * 0x1023ab8a2ee00000 | uVar12 >> 0x2b) ^
             uVar12 ^ (uVar17 * 0x6e8811d5c5177000 | uVar12 >> 0x34);
    uVar17 = (uVar17 << 0x2a | uVar17 >> 0x16) ^ (uVar17 << 0x18 | uVar17 >> 0x28) ^ uVar17;
    uVar17 = (uVar17 << 0x30 | uVar17 >> 0x10) ^ uVar17 ^ (uVar17 << 0x14 | uVar17 >> 0x2c);
    uVar17 = (uVar17 << 0x20 | uVar17 >> 0x20) ^ (uVar17 << 0x28 | uVar17 >> 0x18) ^ uVar17;
    uVar17 = uVar17 << 0x30 | uVar17 >> 0x10;
    puVar22 = puStack_120;
    param_4 = puStack_98;
    puVar21 = puStack_118;
  }
  uStack_140 = uVar24;
  if (uVar24 < uVar17) {
    uStack_140 = uVar17;
  }
  if (3 < uStack_140) {
    if (uVar24 < uVar17) {
      puStack_f8 = puVar37;
    }
    else {
      uStack_138 = 1;
    }
    lStack_1a0 = (int64_t)puVar37 + 0xd;
    uVar38 = ((int)uStack_a0 + (int)puVar37) - uStack_70;
    lStack_e8 = lStack_1a0;
    do {
      puVar19 = puStack_98;
      puVar25 = puStack_120;
      uStack_b8 = (uint64_t)uVar38;
      uVar38 = (int)puVar21 + 1;
      puVar21 = (uint64_t *)(uint64_t)uVar38;
      puVar36 = (uint64_t *)((int64_t)puVar37 + 1);
      if (uStack_138 == 0) {
        uVar24 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x1c);
        uVar11 = uVar38 - uStack_70;
        lVar20 = lVar7;
        if (uVar11 < (uint32_t)uStack_d8) {
          lVar20 = lStack_f0;
        }
        iVar26 = uVar38 - uVar30;
        if (uVar38 - iVar6 <= uVar30) {
          iVar26 = iVar6;
        }
        if (*(int *)(param_1 + 0x28) != 0) {
          iVar26 = iVar6;
        }
        puVar22 = puStack_120;
        uVar24 = uStack_138;
        param_4 = puStack_98;
        puStack_118 = puVar37;
        uStack_a8 = uStack_138;
        if ((!(iStack_6c - uVar11 < 3 || uVar38 - iVar26 < uStack_70)) &&
           (*(int *)puVar36 == *(int *)(lVar20 + (uint64_t)uVar11))) {
          puVar15 = puStack_120;
          if (uVar11 < (uint32_t)uStack_d8) {
            puVar15 = puStack_90;
          }
          puVar29 = (uint64_t *)((int64_t)puVar37 + 5);
          puVar31 = (uint64_t *)((int *)(lVar20 + (uint64_t)uVar11) + 1);
          puVar18 = (uint64_t *)((int64_t)puVar37 + (int64_t)puVar15 + (5 - (int64_t)puVar31));
          if (puStack_120 <= puVar18) {
            puVar18 = puStack_120;
          }
          puVar13 = puVar29;
          puVar33 = puVar31;
          if (puVar29 < (uint64_t *)((int64_t)puVar18 - 7U)) {
            if (*puVar31 == *puVar29) {
              lVar32 = 0;
              do {
                puVar13 = (uint64_t *)(lStack_e8 + lVar32);
                if ((uint64_t *)((int64_t)puVar18 - 7U) <= puVar13) {
                  puVar33 = (uint64_t *)(lVar32 + lVar20 + uStack_b8 + 0xc);
                  goto LAB_7fffa517f399;
                }
                uVar17 = *(uint64_t *)(lVar20 + uStack_b8 + 0xc + lVar32);
                uVar12 = *(uint64_t *)((int64_t)puVar37 + lVar32 + 0xd);
                lVar32 = lVar32 + 8;
              } while (uVar17 == uVar12);
              uVar38 = 0;
              for (uVar17 = uVar17 ^ uVar12; (uVar17 & 1) == 0;
                  uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                uVar38 = uVar38 + 1;
              }
              uVar17 = (uint64_t)(uVar38 >> 3) + lVar32;
            }
            else {
              uVar38 = 0;
              for (uVar17 = *puVar29 ^ *puVar31; (uVar17 & 1) == 0;
                  uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                uVar38 = uVar38 + 1;
              }
              uVar17 = (uint64_t)(uVar38 >> 3);
            }
          }
          else {
LAB_7fffa517f399:
            if ((puVar13 < (uint64_t *)((int64_t)puVar18 - 3U)) &&
               ((int)*puVar33 == (int)*puVar13)) {
              puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            }
            if ((puVar13 < (uint64_t *)((int64_t)puVar18 - 1U)) &&
               ((short)*puVar33 == (short)*puVar13)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
              puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
            }
            if (puVar13 < puVar18) {
              puVar13 = (uint64_t *)
                        ((int64_t)puVar13 + (uint64_t)((char)*puVar33 == (char)*puVar13));
            }
            uVar17 = (int64_t)puVar13 - (int64_t)puVar29;
          }
          if ((uint64_t *)((int64_t)puVar31 + uVar17) == puVar15) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + uVar17);
            puVar15 = puStack_d0;
            puVar37 = puVar29;
            if (puVar29 < puStack_b0) {
              if (*puStack_d0 == *puVar29) {
                lVar20 = 0;
LAB_7fffa517f490:
                puVar37 = (uint64_t *)(lStack_e8 + uVar17 + lVar20);
                if (puVar37 < puStack_b0) {
                  if (*(uint64_t *)(lStack_68 + lVar20) == *puVar37) goto code_r0x7fffa517f4b6;
                  uVar38 = 0;
                  for (uVar12 = *(uint64_t *)(lStack_68 + lVar20) ^ *puVar37; (uVar12 & 1) == 0;
                      uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                    uVar38 = uVar38 + 1;
                  }
                  uVar12 = (lVar20 + lStack_1a0 + uVar17 + (uint64_t)(uVar38 >> 3)) -
                           (int64_t)puVar29;
                  goto LAB_7fffa517f50e;
                }
                puVar15 = (uint64_t *)(lVar20 + lStack_68);
                goto LAB_7fffa517f4c4;
              }
              uVar38 = 0;
              for (uVar12 = *puVar29 ^ *puStack_d0; (uVar12 & 1) == 0;
                  uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                uVar38 = uVar38 + 1;
              }
              uVar12 = (uint64_t)(uVar38 >> 3);
            }
            else {
LAB_7fffa517f4c4:
              if ((puVar37 < puStack_100) && ((int)*puVar15 == (int)*puVar37)) {
                puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
                puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
              }
              if ((puVar37 < puVar1) && ((short)*puVar15 == (short)*puVar37)) {
                puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
                puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
              }
              if (puVar37 < puStack_120) {
                puVar37 = (uint64_t *)
                          ((int64_t)puVar37 + (uint64_t)((char)*puVar15 == (char)*puVar37));
              }
              uVar12 = (int64_t)puVar37 - (int64_t)puVar29;
            }
LAB_7fffa517f50e:
            uVar17 = uVar17 + uVar12;
          }
          if (uVar17 < 0xfffffffffffffffc) {
            uVar38 = 0x1f;
            if ((uint32_t)uStack_138 != 0) {
              for (; (uint32_t)uStack_138 >> uVar38 == 0; uVar38 = uVar38 - 1) {
              }
            }
            if ((int)((uVar38 ^ 0x1f) + (int)uStack_140 * 3 + -0x1e) < (int)(uVar17 + 4) * 3) {
              uVar24 = 1;
              uStack_140 = uVar17 + 4;
              puStack_f8 = puVar36;
            }
          }
        }
      }
      uStack_138 = 999999999;
      if (uVar5 < 5) {
        uVar35 = (uint64_t)uStack_84;
        uVar34 = uVar35 ^ 0xffffffffffffffff;
        lStack_60 = (param_1 << 0x22 ^ param_1) * 0xc6ae469d;
        uStack_80 = 0xc0000004;
        uStack_110 = 0x2ef9467f;
        uVar12 = uStack_128 | ~uVar14;
        lStack_130 = (uVar34 | uStack_128 ^ uVar14) * -0x572296ba;
        lStack_78 = ((uStack_128 ^ uVar14) & uVar34) * 0x6a26c7d0;
        uVar17 = (((int64_t)puVar36 * 0x100 | (uint64_t)puVar36 >> 0x38) ^
                 ((int64_t)puVar36 * 0x4000000 | (uint64_t)puVar36 >> 0x26) ^ (uint64_t)puVar36)
                 - 0x5307618;
        uVar17 = (uVar17 * 8 | uVar17 >> 0x3d) ^ (uVar17 * 0x80000 | uVar17 >> 0x2d) ^ uVar17;
        puStack_118 = puVar21;
        uStack_a8 = uVar24;
        uVar17 = FUN_7fffa512fb30(uVar17,(~uVar35 & (uVar14 | ~uStack_128)) * 0x18e9350c +
                                         (uVar12 ^ uVar35) * 0x38545db8 + lStack_78 +
                                         (uint64_t)(((uint32_t)~uVar14 ^ (uint32_t)uStack_128) & uStack_84)
                                         * -0x5e503f6 + lStack_130 +
                                         ((uint64_t)(uVar39 & (uint32_t)uStack_128 ^ uStack_84) -
                                         ((uVar14 | uStack_128) ^ uVar35)) * 0x513d92c4 +
                                         (uVar12 | uVar34) * 0x38545db8 +
                                         (~uVar35 & (uint64_t)((uint32_t)~uStack_128 & uVar39)) *
                                         0x1f6b28ac,uVar17,puStack_120);
        uVar17 = uVar17 ^ uStack_80;
        uVar17 = (uVar17 << 0xb | uVar17 >> 0x35) ^
                 (uVar17 >> 1 | (uint64_t)((uVar17 & 1) != 0) << 0x3f) ^ uVar17;
        uVar17 = (uVar17 << 0x3e | uVar17 >> 2) ^ (uVar17 << 0x16 | uVar17 >> 0x2a) ^ uVar17;
        uVar17 = (uVar17 << 0x2c | uVar17 >> 0x14) ^ (uVar17 << 0x3c | uVar17 >> 4) ^ uVar17;
        uVar17 = (uVar17 << 0x18 | uVar17 >> 0x28) ^ (uVar17 << 0x38 | uVar17 >> 8) ^ uVar17;
        param_4 = puVar19;
        puVar22 = puVar25;
      }
      else if (uVar5 == 5) {
        pcVar27 = FUN_7fffa5613f70;
        FUN_7fffa5613f70();
        uVar17 = (int64_t)pcVar27 << 0x2d ^ (uint64_t)pcVar27;
      }
      else {
        uVar17 = (int64_t)puVar36 * 0x10000000000001;
        puVar22 = &uStack_138;
        FUN_7fffa5659210(FUN_7fffa5659210,(int64_t)puStack_120 - ((int64_t)puStack_120 << 0x3d),
                         param_1,((int64_t)puVar36 * 0x8000000 | uVar17 >> 0x25) ^
                                 ((int64_t)puVar36 * 0x100000000000010 | uVar17 >> 0x3c) ^ uVar17);
        uVar17 = (uint64_t)puVar22 ^ 0x3448e13f;
        uVar12 = uVar17 * 0x7b16e8811d5c5177;
        uVar17 = (uVar17 * 0x1023ab8a2ee00000 | uVar12 >> 0x2b) ^
                 (uVar17 * 0x6e8811d5c5177000 | uVar12 >> 0x34) ^ uVar12;
        uVar17 = (uVar17 << 0x2a | uVar17 >> 0x16) ^ (uVar17 << 0x18 | uVar17 >> 0x28) ^ uVar17;
        uVar17 = (uVar17 << 0x30 | uVar17 >> 0x10) ^ (uVar17 << 0x14 | uVar17 >> 0x2c) ^ uVar17;
        uVar17 = (uVar17 << 0x20 | uVar17 >> 0x20) ^ (uVar17 << 0x28 | uVar17 >> 0x18) ^ uVar17;
        uVar17 = uVar17 << 0x30 | uVar17 >> 0x10;
        puVar22 = puStack_120;
      }
      if (uVar17 < 4) goto joined_r0x7fffa517fb63;
      iVar6 = 0x1f;
      if ((uint32_t)uStack_138 != 0) {
        for (; (uint32_t)uStack_138 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      uVar38 = 0x1f;
      if ((uint32_t)uVar24 != 0) {
        for (; (uint32_t)uVar24 >> uVar38 == 0; uVar38 = uVar38 - 1) {
        }
      }
      iVar26 = (int)uStack_140 * 4;
      if ((int)uVar17 * 4 - iVar6 <= (int)(((uVar38 ^ 0x1f) - 0x1b) + iVar26))
      goto joined_r0x7fffa517fb63;
      uVar24 = uStack_138;
      uStack_140 = uVar17;
      puStack_f8 = puVar36;
      if (puStack_108 <= puVar36) goto joined_r0x7fffa517fb63;
      lStack_e8 = lStack_e8 + 1;
      uVar38 = (int)uStack_b8 + 1;
      lStack_1a0 = lStack_1a0 + 1;
      puVar37 = puVar36;
    } while( true );
  }
  uVar14 = (int64_t)puVar37 - (int64_t)param_4;
  puVar37 = (uint64_t *)((int64_t)puVar37 + (uVar14 >> 8) + 1);
  *(uint32_t *)(param_1 + 300) = (uint32_t)(0x8ff < uVar14);
  goto LAB_7fffa517e9f1;
code_r0x7fffa517ebbb:
  puVar18 = puVar18 + 1;
  puVar31 = puVar31 + 1;
  puVar13 = puVar13 + 1;
  if (puVar29 <= puVar18) goto LAB_7fffa517eb2f;
  goto LAB_7fffa517ebb0;
code_r0x7fffa517ecc3:
  puVar19 = puVar19 + 1;
  lVar20 = lVar20 + 8;
  goto LAB_7fffa517ec60;
code_r0x7fffa517f4b6:
  lVar20 = lVar20 + 8;
  goto LAB_7fffa517f490;
joined_r0x7fffa517fb63:
  iVar6 = (int)uVar24;
  if (3 < uVar24) {
    uVar38 = ((int)puStack_f8 - (iVar6 + iVar23)) + 3;
    puVar37 = puStack_d0;
    lVar20 = lVar7;
    if (uVar38 < (uint32_t)uStack_d8) {
      puVar37 = puStack_c0;
      lVar20 = lStack_f0;
    }
    if (puVar37 < (uint64_t *)(lVar20 + (uint64_t)uVar38) && param_4 < puStack_f8) {
      lVar32 = lVar20 + (uint64_t)uVar38 + -1;
      for (lVar20 = 0; *(char *)((int64_t)puStack_f8 + lVar20 + -1) == *(char *)(lVar32 + lVar20);
          lVar20 = lVar20 + -1) {
        puVar21 = (uint64_t *)((int64_t)puStack_f8 + lVar20 + -1);
        if (puVar21 <= param_4 || (uint64_t *)(lVar32 + lVar20) <= puVar37) {
          uStack_140 = (uStack_140 - lVar20) + 1;
          puStack_f8 = puVar21;
          goto LAB_7fffa517fc95;
        }
      }
      uStack_140 = uStack_140 - lVar20;
      puStack_f8 = (uint64_t *)((int64_t)puStack_f8 + lVar20);
    }
LAB_7fffa517fc95:
    uStack_194 = uStack_70;
    uStack_70 = iVar6 - 3;
  }
  puVar37 = (uint64_t *)param_2[3];
  uVar14 = (int64_t)puStack_f8 - (int64_t)param_4;
  if (puStack_e0 < puStack_f8) {
    puVar21 = puVar37;
    if (param_4 <= puStack_e0) {
      puVar21 = (uint64_t *)((int64_t)puVar37 + ((int64_t)puStack_e0 - (int64_t)param_4));
      uVar24 = param_4[1];
      *puVar37 = *param_4;
      puVar37[1] = uVar24;
      if (0x10 < (int64_t)puStack_e0 - (int64_t)param_4) {
        puVar37 = puVar37 + 6;
        while( true ) {
          uVar24 = param_4[3];
          puVar37[-4] = param_4[2];
          puVar37[-3] = uVar24;
          uVar24 = param_4[5];
          puVar37[-2] = param_4[4];
          puVar37[-1] = uVar24;
          if (puVar21 <= puVar37) break;
          puVar37 = puVar37 + 4;
          param_4 = param_4 + 4;
        }
      }
      param_4 = puStack_e0;
    }
    if (param_4 < puStack_f8) {
      uVar24 = (int64_t)puStack_f8 - (int64_t)param_4;
      if ((uint64_t)((int64_t)puVar21 - (int64_t)param_4) < 0x20 || uVar24 < 4) {
        puVar37 = puVar21;
      }
      else {
        if (uVar24 < 0x20) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar24 & 0xffffffffffffffe0;
          uVar12 = 0;
          do {
            uVar8 = *(uint64_t *)((int64_t)param_4 + uVar12);
            uVar9 = ((uint64_t *)((int64_t)param_4 + uVar12))[1];
            puVar2 = (uint64_t *)((int64_t)param_4 + uVar12 + 0x10);
            uVar10 = puVar2[1];
            puVar4 = (uint64_t *)((int64_t)puVar21 + uVar12 + 0x10);
            *puVar4 = *puVar2;
            puVar4[1] = uVar10;
            *(uint64_t *)((int64_t)puVar21 + uVar12) = uVar8;
            ((uint64_t *)((int64_t)puVar21 + uVar12))[1] = uVar9;
            uVar12 = uVar12 + 0x20;
          } while (uVar17 != uVar12);
          if (uVar24 == uVar17) goto LAB_7fffa517ffe0;
          if ((uVar24 & 0x1c) == 0) {
            puVar37 = (uint64_t *)((int64_t)puVar21 + uVar17);
            param_4 = (uint64_t *)((int64_t)param_4 + uVar17);
            goto LAB_7fffa517ff12;
          }
        }
        uVar12 = uVar24 & 0xfffffffffffffffc;
        puVar37 = (uint64_t *)((int64_t)puVar21 + uVar12);
        do {
          *(uint32_t *)((int64_t)puVar21 + uVar17) = *(uint32_t *)((int64_t)param_4 + uVar17);
          uVar17 = uVar17 + 4;
        } while (uVar12 != uVar17);
        if (uVar24 == uVar12) goto LAB_7fffa517ffe0;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar12);
      }
LAB_7fffa517ff12:
      uVar38 = (int)puStack_f8 - (int)param_4 & 7;
      uVar24 = (uint64_t)uVar38;
      puVar36 = puVar37;
      puVar21 = param_4;
      if (uVar38 == 0) {
        puVar25 = param_4;
      }
      else {
        do {
          uVar24 = uVar24 - 1;
          puVar37 = (uint64_t *)((int64_t)puVar36 + 1);
          *(char *)puVar36 = (char)*puVar21;
          puVar25 = (uint64_t *)((int64_t)puVar21 + 1);
          puVar36 = puVar37;
          puVar21 = (uint64_t *)((int64_t)puVar21 + 1);
        } while (uVar24 != 0);
      }
      if ((uint64_t)((int64_t)param_4 - (int64_t)puStack_f8) < 0xfffffffffffffff9) {
        lVar20 = 0;
        do {
          *(uint8_t *)((int64_t)puVar37 + lVar20) = *(uint8_t *)((int64_t)puVar25 + lVar20);
          *(uint8_t *)((int64_t)puVar37 + lVar20 + 1) =
               *(uint8_t *)((int64_t)puVar25 + lVar20 + 1);
          *(uint8_t *)((int64_t)puVar37 + lVar20 + 2) =
               *(uint8_t *)((int64_t)puVar25 + lVar20 + 2);
          *(uint8_t *)((int64_t)puVar37 + lVar20 + 3) =
               *(uint8_t *)((int64_t)puVar25 + lVar20 + 3);
          *(uint8_t *)((int64_t)puVar37 + lVar20 + 4) =
               *(uint8_t *)((int64_t)puVar25 + lVar20 + 4);
          *(uint8_t *)((int64_t)puVar37 + lVar20 + 5) =
               *(uint8_t *)((int64_t)puVar25 + lVar20 + 5);
          *(uint8_t *)((int64_t)puVar37 + lVar20 + 6) =
               *(uint8_t *)((int64_t)puVar25 + lVar20 + 6);
          *(uint8_t *)((int64_t)puVar37 + lVar20 + 7) =
               *(uint8_t *)((int64_t)puVar25 + lVar20 + 7);
          lVar32 = lVar20 + 8;
          lVar20 = lVar20 + 8;
        } while ((uint64_t *)((int64_t)puVar25 + lVar32) != puStack_f8);
      }
    }
  }
  else {
    uVar24 = param_4[1];
    *puVar37 = *param_4;
    puVar37[1] = uVar24;
    lVar20 = param_2[3];
    if (uVar14 < 0x11) {
      lVar32 = param_2[1];
      param_2[3] = lVar20 + uVar14;
      goto LAB_7fffa518000a;
    }
    uVar24 = param_4[3];
    *(uint64_t *)(lVar20 + 0x10) = param_4[2];
    *(uint64_t *)(lVar20 + 0x18) = uVar24;
    if (0x20 < (int64_t)uVar14) {
      lVar32 = 0;
      do {
        puVar4 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x20);
        uVar8 = puVar4[1];
        puVar2 = (uint64_t *)(lVar20 + 0x20 + lVar32);
        *puVar2 = *puVar4;
        puVar2[1] = uVar8;
        puVar2 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x30);
        uVar8 = puVar2[1];
        puVar4 = (uint64_t *)(lVar20 + 0x30 + lVar32);
        *puVar4 = *puVar2;
        puVar4[1] = uVar8;
        lVar3 = lVar20 + 0x20 + lVar32;
        lVar32 = lVar32 + 0x20;
      } while (lVar3 + 0x20U < lVar20 + uVar14);
    }
  }
LAB_7fffa517ffe0:
  lVar32 = param_2[1];
  param_2[3] = param_2[3] + uVar14;
  if (0xffff < uVar14) {
    *(uint32_t *)(param_2 + 9) = 1;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar32 - *param_2) >> 3);
  }
LAB_7fffa518000a:
  *(short *)(lVar32 + 4) = (short)uVar14;
  *(int *)param_2[1] = iVar6;
  if (0xffff < uStack_140 - 3) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
  }
  *(short *)(param_2[1] + 6) = (short)(uStack_140 - 3);
  param_2[1] = param_2[1] + 8;
  if (*(int *)(param_1 + 300) != 0) {
    *(uint32_t *)(param_1 + 300) = 0;
  }
  puVar37 = (uint64_t *)((int64_t)puStack_f8 + uStack_140);
  if (puStack_108 < puVar37) {
    param_4 = puVar37;
  }
  else {
    do {
      uVar38 = uStack_194;
      iVar16 = (int)puVar37 - iVar23;
      iVar6 = *(int *)(param_1 + 0x1c);
      iVar26 = iVar16 - uVar30;
      if ((uint32_t)(iVar16 - iVar6) <= uVar30) {
        iVar26 = iVar6;
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        iVar26 = iVar6;
      }
      uVar39 = iVar16 - uVar38;
      lVar20 = lVar7;
      if (uVar39 < (uint32_t)uStack_d8) {
        lVar20 = lStack_f0;
      }
      if ((((uint32_t)(iVar16 - iVar26) < uVar38) || (iStack_6c - uVar39 < 3)) ||
         (piVar28 = (int *)(lVar20 + (uint64_t)uVar39), (int)*puVar37 != *piVar28)) {
        param_4 = puVar37;
        uStack_194 = uVar38;
        break;
      }
      puVar21 = puVar22;
      if (uVar39 < (uint32_t)uStack_d8) {
        puVar21 = puStack_90;
      }
      puVar36 = (uint64_t *)(piVar28 + 1);
      puVar25 = (uint64_t *)((int64_t)puVar37 + 4);
      puVar19 = (uint64_t *)((int64_t)puVar37 + (int64_t)puVar21 + (4 - (int64_t)puVar36));
      if (puVar22 <= puVar19) {
        puVar19 = puVar22;
      }
      puVar15 = puVar25;
      puVar29 = puVar36;
      if (puVar25 < (uint64_t *)((int64_t)puVar19 - 7U)) {
        if (*puVar36 == *puVar25) {
          lVar20 = 0xc;
LAB_7fffa5180220:
          puVar15 = (uint64_t *)((int64_t)puVar37 + lVar20);
          if (puVar15 < (uint64_t *)((int64_t)puVar19 - 7U)) {
            if (*(uint64_t *)((int64_t)piVar28 + lVar20) == *puVar15) goto code_r0x7fffa5180282;
            uVar39 = 0;
            for (uVar14 = *puVar15 ^ *(uint64_t *)((int64_t)piVar28 + lVar20); (uVar14 & 1) == 0;
                uVar14 = uVar14 >> 1 | 0x8000000000000000) {
              uVar39 = uVar39 + 1;
            }
            uVar14 = ((uint64_t)(uVar39 >> 3) + lVar20) - 4;
            puVar22 = puStack_120;
            goto LAB_7fffa518033f;
          }
          puVar29 = (uint64_t *)((int64_t)piVar28 + lVar20);
          puVar22 = puStack_120;
          goto LAB_7fffa5180296;
        }
        uVar39 = 0;
        for (uVar14 = *puVar36 ^ *puVar25; (uVar14 & 1) == 0;
            uVar14 = uVar14 >> 1 | 0x8000000000000000) {
          uVar39 = uVar39 + 1;
        }
        uVar14 = (uint64_t)(uVar39 >> 3);
      }
      else {
LAB_7fffa5180296:
        if ((puVar15 < (uint64_t *)((int64_t)puVar19 - 3U)) && ((int)*puVar29 == (int)*puVar15)) {
          puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
          puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
        }
        if (puVar15 < (uint64_t *)((int64_t)puVar19 - 1U)) {
          if ((short)*puVar29 == (short)*puVar15) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
          }
          puVar22 = puStack_120;
        }
        if (puVar15 < puVar19) {
          puVar15 = (uint64_t *)((int64_t)puVar15 + (uint64_t)((char)*puVar29 == (char)*puVar15))
          ;
        }
        uVar14 = (int64_t)puVar15 - (int64_t)puVar25;
      }
LAB_7fffa518033f:
      if ((uint64_t *)((int64_t)puVar36 + uVar14) == puVar21) {
        puVar25 = (uint64_t *)((int64_t)puVar25 + uVar14);
        puVar21 = puStack_d0;
        puVar36 = puVar25;
        if (puVar25 < puStack_b0) {
          if (*puStack_d0 == *puVar25) {
            lVar20 = 0;
            do {
              puVar21 = (uint64_t *)((int64_t)puVar37 + lVar20 + uVar14 + 0xc);
              if (puStack_b0 <= puVar21) {
                puVar36 = (uint64_t *)((int64_t)puVar37 + lVar20 + uVar14 + 0xc);
                puVar21 = (uint64_t *)(lVar20 + lStack_68);
                goto LAB_7fffa518049f;
              }
              uVar24 = *puVar21;
              puVar21 = (uint64_t *)(lStack_68 + lVar20);
              lVar20 = lVar20 + 8;
            } while (*puVar21 == uVar24);
            uVar39 = 0;
            for (uVar24 = uVar24 ^ *puVar21; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar39 = uVar39 + 1;
            }
            uVar24 = (uint64_t)(uVar39 >> 3) + lVar20;
          }
          else {
            uVar39 = 0;
            for (uVar24 = *puVar25 ^ *puStack_d0; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar39 = uVar39 + 1;
            }
            uVar24 = (uint64_t)(uVar39 >> 3);
          }
        }
        else {
LAB_7fffa518049f:
          if ((puVar36 < puStack_100) && ((int)*puVar21 == (int)*puVar36)) {
            puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
          }
          if ((puVar36 < puVar1) && ((short)*puVar21 == (short)*puVar36)) {
            puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
            puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
          }
          if (puVar36 < puVar22) {
            puVar36 = (uint64_t *)
                      ((int64_t)puVar36 + (uint64_t)((char)*puVar21 == (char)*puVar36));
          }
          uVar24 = (int64_t)puVar36 - (int64_t)puVar25;
        }
        uVar14 = uVar14 + uVar24;
      }
      if (puVar37 <= puStack_e0) {
        puVar21 = (uint64_t *)param_2[3];
        uVar24 = puVar37[1];
        *puVar21 = *puVar37;
        puVar21[1] = uVar24;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar14 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar14 + 1);
      puVar37 = (uint64_t *)((int64_t)puVar37 + uVar14 + 4);
      param_2[1] = param_2[1] + 8;
      param_4 = puVar37;
      uStack_194 = uStack_70;
      uStack_70 = uVar38;
    } while (puVar37 <= puStack_108);
  }
LAB_7fffa517e9f1:
  if (puStack_108 <= puVar37) goto LAB_7fffa5180543;
  goto LAB_7fffa517ea13;
code_r0x7fffa5180282:
  lVar20 = lVar20 + 8;
  goto LAB_7fffa5180220;
}


// ============================================================================
// Function : FUN_7fffa5180590  |  RVA: 0xa10590  |  Size: 558 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5180590(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  bRam00007fffa47bd360 = '\0';
  uRam00007fffa47bd397 = 0;
  uRam00007fffa47bd39f = 0;
  uRam00007fffa47bd387 = 0;
  uRam00007fffa47bd38f = 0;
  uRam00007fffa47bd377 = 0;
  uRam00007fffa47bd37f = 0;
  uRam00007fffa47bd367 = 0;
  uRam00007fffa47bd36f = 0;
  uRam00007fffa47bd3b0 = 0;
  uVar1 = rdtsc();
  lVar3 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0x97f86a35f113d93;
  lVar2 = 3;
  while( true ) {
    *(char *)(lVar2 + 0x7fffa47bd354) = (char)((uint64_t)(lVar3 * 0xd96b73874b) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bd352) = (char)((uint64_t)(lVar3 * 0x1a35f113d93) >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bd353) = (char)((uint64_t)(lVar3 * 0xe56556269) >> 0x20);
    if (lVar2 == 0x6b) break;
    lVar3 = lVar3 * 0x103592150b8e8f11;
    *(char *)(lVar2 + 0x7fffa47bd355) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 4;
  }
  bRam00007fffa47bd360 = bRam00007fffa47bd360 + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa47bd360 * 8 + 0x7fffa47bd367) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa51807c0  |  RVA: 0xa107c0  |  Size: 1129 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa51807c0(uint32_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                          uint32_t param_5,uint64_t param_6)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int64_t lStack_c8;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t *puStack_a0;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  uint32_t *puStack_88;
  uint64_t *puStack_80;
  uint32_t *puStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint32_t uStack_44;
  
  uStack_d8 = CONCAT44(uStack_d8._4_4_,param_1);
  uStack_d0 = ~in_RAX;
  uStack_68 = ~in_RAX;
  lStack_c8 = (param_2 & in_RAX & uStack_68) * -0xef889bb1 + ~param_2 * 0x512e8273 +
              param_2 * 0x512e8273;
  uVar3 = (uint64_t)param_1;
  uStack_e0 = 0;
  uStack_c0 = param_1;
  uStack_bc = param_3;
  uStack_b8 = param_4;
  uStack_60 = param_2;
  if (param_3 != 0) {
    uStack_a8 = (uint64_t)param_3;
    uStack_b0 = param_2;
    uStack_58 = in_RAX;
    uStack_50 = in_RAX;
    do {
      uStack_44 = (uint32_t)CONCAT62((int6)(uVar3 >> 0x10),0x1a49);
      uStack_d8 = 0x7fffa547c68a;
      puStack_98 = &uStack_e0;
      puStack_a0 = &uStack_b0;
      uVar5 = (int64_t)&puStack_a0 * -0x68e32b2f;
      uVar6 = ((int64_t)&puStack_a0 * -0x1a38cacbc0000000 | uVar5 >> 0x22) ^ uVar5;
      uVar4 = uStack_50 & ~uVar6;
      uVar7 = uVar6 | uStack_50;
      uVar3 = uStack_68;
      if ((int)lStack_c8 != -0x512e8273) {
        uVar3 = uStack_58;
      }
      uVar3 = (*(code *)((int64_t)(short)(0x5a43 - (short)lStack_c8) + 0x7fffa547c68a))
                        ((uVar5 << 0x34 | uVar5 >> 0xc) ^ uVar6,
                         (uStack_d0 ^ uVar6 | uStack_58) * 0xb2f78064 +
                         (uVar7 | uStack_58) * -0x584ddfbb + (uVar7 & uStack_68) * -0x6a263aa2 +
                         (~uVar7 & uStack_68) * -0x11caa7953 +
                         (uVar3 & (uStack_50 ^ uVar6)) * 0x58c1216e +
                         (((~uVar6 | uStack_d0) & uStack_58) - (uVar6 & uStack_50 ^ uStack_58)) *
                         0x5a365ef6 +
                         (((uVar4 & uStack_68) - (uVar4 & uStack_58)) +
                         ((uVar6 | uStack_d0) ^ uStack_58)) * 0xc45c9998);
      uStack_e0 = uStack_e0 + 1;
    } while (uStack_e0 < uStack_a8);
  }
  uStack_e0 = 0;
  uStack_b0 = uStack_b8;
  if (param_5 != 0) {
    uVar3 = (uint64_t)param_5;
    do {
      puStack_a0 = &uStack_b0;
      puStack_98 = &uStack_e0;
      (*(code *)((int64_t)(int)(((uint32_t)lStack_c8 ^ 0xa49668d6) * -0x36215873) + 0x7fffa56a5451))
                ((int64_t)&puStack_a0 << 0x29 | (uint64_t)&puStack_a0 >> 0x17);
      uStack_e0 = uStack_e0 + 1;
    } while (uStack_e0 < uVar3);
  }
  if (param_6 != 0) {
    uStack_b0 = param_6;
    uStack_e0 = 0;
    uVar2 = (uint16_t)lStack_c8;
    do {
      puStack_a0 = &uStack_b0;
      puStack_98 = &uStack_e0;
      (*(code *)(&UNK_7fffa569a0aa + (short)(((uVar2 | 1) * -0x2734 ^ 0xde3a) - 0x6a0)))();
      uStack_e0 = uStack_e0 + 1;
    } while (uStack_e0 < 4);
  }
  puStack_88 = &uStack_bc;
  puStack_70 = &param_6;
  puStack_90 = &uStack_60;
  puStack_78 = &param_5;
  puStack_a0 = &uStack_b0;
  puStack_98 = (uint64_t *)&uStack_c0;
  puStack_80 = &uStack_b8;
  bVar1 = (uint8_t)lStack_c8 & 0x1f;
  uVar3 = (uint64_t)(0x176d37bdU >> bVar1 | 0x176d37bd << 0x20 - bVar1) ^ (uint64_t)&puStack_a0;
  uVar3 = (uVar3 << 0xc | (uint64_t)&puStack_a0 >> 0x34) ^ (uVar3 << 0x2f | uVar3 >> 0x11) ^ uVar3;
  (*(code *)(&UNK_7fffa56b4360 + (0x5acd566d - (int)lStack_c8) * -0xcad02bd))
            ((uVar3 << 0x30) + uVar3);
  return uStack_b0 & 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa5180c40  |  RVA: 0xa10c40  |  Size: 2292 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa518149e) overlaps instruction at (ram,0x7fffa518149d)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa518147d) */

void FUN_7fffa5180c40(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint8_t *unaff_RDI;
  uint8_t bVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint16_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  code *pcVar14;
  uint32_t uVar15;
  uint8_t bVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  int iVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint64_t uVar23;
  uint8_t auStack_118 [24];
  uint64_t *puStack_100;
  uint64_t uStack_f8;
  int64_t lStack_f0;
  uint8_t uStack_e1;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t **ppuStack_d0;
  uint8_t *puStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint8_t uStack_a9;
  uint64_t uStack_a8;
  uint32_t uStack_9c;
  uint32_t uStack_98;
  int iStack_94;
  uint64_t uStack_90;
  uint64_t **ppuStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  
  uVar1 = uStack_d8;
  uVar15 = (uint32_t)in_RAX;
  bVar2 = (uint8_t)in_RAX;
  uVar17 = 0x18fc9bb5U >> (bVar2 & 0x1f) | 0x18fc9bb5 << 0x20 - (bVar2 & 0x1f);
  if ((uVar15 + 0xe883a11d ^ uVar17) == 0xc72d87f) {
    bVar16 = (uint8_t)uVar17 & 0x1f;
    uVar12 = 0x20f9ce4a << bVar16 | 0x20f9ce4aU >> 0x20 - bVar16;
    uVar23 = (uint64_t)(int)(uVar12 >> (bVar2 & 0x1f) | uVar12 << 0x20 - (bVar2 & 0x1f));
    uVar7 = (uint64_t)(uVar17 + (uVar15 ^ 0xb66dd085) + 0x4d1c3ce9);
    uVar3 = (uint64_t)*(uint8_t *)(uVar7 + 0x7fffa47816c1);
    lVar5 = uVar7 + uVar3 * 4 + 0x7fffa47816cb;
    bVar16 = *(uint8_t *)(uVar7 + 0x7fffa47816cc + uVar3 * 4);
    bVar8 = ~*(uint8_t *)(uVar7 + 0x7fffa47816cb + uVar3 * 4);
    bVar8 = bVar8 << 3 | bVar8 >> 5;
  }
  else {
    uVar23 = (uint64_t)((uVar15 + 0xf4f437c7) * -0xf93f3e3 + 0xdf3e3f98);
    uVar3 = (uint64_t)bRam00007fffa478458f;
    lVar5 = uVar3 * 4 + 0x7fffa4784599;
    bVar16 = ~*(uint8_t *)(uVar3 * 4 + 0x7fffa4784599);
    bVar8 = bVar16 << 3 | bVar16 >> 5;
    bVar16 = *(uint8_t *)(uVar3 * 4 + 0x7fffa478459a);
  }
  uStack_d8._0_4_ =
       CONCAT13(~*(uint8_t *)(lVar5 + 3) << 3 | (uint8_t)~*(uint8_t *)(lVar5 + 3) >> 5,
                CONCAT12(~*(uint8_t *)(lVar5 + 2) << 3 | (uint8_t)~*(uint8_t *)(lVar5 + 2) >> 5,
                         CONCAT11(~bVar16 << 3 | (uint8_t)~bVar16 >> 5,bVar8)));
  if ((((uint32_t)uStack_d8 ^ 0x97cd0fa7) >> (((uint32_t)uStack_d8 ^ 0x97cd0fa7) & 0x1f) & 1) != 0) {
    return;
  }
  uStack_d8._4_4_ = (uint32_t)((uint64_t)uVar1 >> 0x20);
  uVar22 = (uint32_t)uVar23;
  uStack_d8._0_4_ = (uVar22 - uVar15) + 0xd0349fc3;
  uVar17 = uVar22 | 1;
  uVar12 = uVar17 * -0x6f9534f1 ^ uVar15;
  if ((uint32_t)uStack_d8 < (uVar12 << 0x19 | uVar12 >> 7)) {
    uVar12 = uVar15 | 1;
    puStack_100 = (uint64_t *)0x0;
    uStack_b8 = 0x1000;
    pcVar14 = (code *)((int64_t)(int)(0x593367c9 - (uVar12 * 0x665e927f + uVar22)) + 0x7fffa549811e
                      );
    (*pcVar14)(((uVar15 ^ 0x3ba43ac7) - uVar22) + 0x670f5eba,
               (((int64_t)&puStack_100 << 0x24 | (uint64_t)&puStack_100 >> 0x1c) ^
                ((int64_t)&puStack_100 * 0x20000000 | (uint64_t)&puStack_100 >> 0x23) ^
               (uint64_t)&puStack_100) + 0x76040a22);
    if ((int)(~(uint32_t)pcVar14 *
             ((uVar17 * 0x3388cfaa << (bVar2 & 0x1f) | uVar17 * 0x3388cfaa >> 0x20 - (bVar2 & 0x1f))
             ^ 0x2686c971)) < 0) {
      return;
    }
    uStack_d8._0_4_ = 0x4162726c;
    uVar18 = (uVar15 ^ 0x24b36820) + uVar22;
    uStack_c0 = (uint64_t)(uVar18 * 0x100000 | uVar18 >> 0xc);
    uStack_80 = (uint64_t)
                (int)(((uVar22 ^ 0x333845fa) >> (bVar2 & 0x1f) |
                      (uVar22 ^ 0x333845fa) << 0x20 - (bVar2 & 0x1f)) ^ 0xa86286d7);
    pcVar14 = (code *)((int64_t)(int)((uVar22 ^ 0x77372f21) * uVar12) + 0x7fffa526182f);
    uVar7 = (int64_t)&uStack_a9 * 0x2000;
    uVar18 = uVar17 * -0x1a19ae51 + 0xa5e80b23;
    bVar16 = (uint8_t)uVar23 & 0x1f;
    iStack_94 = ((uVar15 ^ 0x5528e9ac) >> bVar16 | (uVar15 ^ 0x5528e9ac) << 0x20 - bVar16) +
                0xdbb6b974;
    bVar16 = (uint8_t)uVar23 & 0x1f;
    uStack_9c = 0x36d930d5U >> bVar16 | 0x36d930d5 << 0x20 - bVar16;
    uVar21 = (uVar22 ^ 0xcca0432f) + 0x262a2dff ^ 0xe3d91f3b;
    uStack_78 = (uint64_t)(uVar15 ^ 0x9170f94c);
    bVar16 = (uint8_t)(uVar23 & 0xffffffff);
    uStack_e0 = (uint64_t)
                ((uVar12 * 0x241e45f1 << (bVar16 & 0x1f) |
                 uVar12 * 0x241e45f1 >> 0x20 - (bVar16 & 0x1f)) + 0xbd232c9);
    lStack_f0 = (int64_t)
                (int)((0xac5b4dc0U >> (bVar16 & 0x1f) | -0x53a4b240 << 0x20 - (bVar16 & 0x1f)) -
                     uVar15);
    uStack_a8 = (uint64_t)((uVar18 * 0x4000 | uVar18 >> 0x12) * uVar12);
    uVar18 = (uVar22 ^ 0x7b2b00bd) * -0x2a93b9a7;
    uVar10 = (uint64_t)(int)uVar18;
    uVar3 = uVar7 ^ (uint64_t)&uStack_a9;
    if (uVar10 < (((0xe338157 - uVar15) * 2 | (uint32_t)((int)(0xe338157 - uVar15) < 0)) - uVar22) *
                 -0xc457759) {
      uVar3 = uVar7 | (uint64_t)&uStack_a9;
    }
    uVar6 = ~uVar18;
    uStack_a9 = 1;
    uStack_f8 = in_RAX;
    ppuStack_88 = &puStack_100;
    uStack_70 = uVar17;
    uStack_6c = uVar12;
    (*pcVar14)(uVar23 & 0xffffffff,pcVar14,uVar10,uVar3 >> 0x31 ^ uVar3);
    uVar9 = (uint32_t)uVar10;
    uVar13 = (uint32_t)(uVar10 >> 10) & 0x3fffff;
    uVar19 = ~uVar13;
    uStack_98 = uVar13 ^ uVar18;
    uVar12 = uVar19 & uVar9;
    uVar17 = uVar12 + (uVar22 ^ 0x7b2b00bd) * 0x2a93b9a7;
    if ((0x3e431eb3 - uVar15 << (bVar16 & 0x1f) | 0x3e431eb3 - uVar15 >> 0x20 - (bVar16 & 0x1f)) <
        (uVar21 << (bVar2 & 0x1f) | uVar21 >> 0x20 - (bVar2 & 0x1f))) {
      uVar17 = uVar18 & uVar12;
    }
    uVar21 = ~uVar9;
    uVar15 = uVar21 * uVar19;
    if (uStack_e0 < uVar22 + (int)uStack_78 + 0x3e32d71a) {
      uVar15 = uVar9 ^ uVar13;
    }
    uVar22 = uVar19 + uVar9;
    if (lStack_f0 == -0x276f4c18) {
      uVar22 = uVar12;
    }
    iVar20 = (uVar22 ^ uStack_98) * iStack_94;
    uVar22 = uVar15 & uVar13 | uVar6;
    if (uStack_a8 != 0xb1cbf348) {
      uVar22 = uVar6 ^ uVar15 & uVar13;
    }
    iVar4 = -iVar20;
    if (uStack_c0 < uStack_80) {
      iVar4 = iVar20;
    }
    unaff_RDI = (uint8_t *)(uint64_t)uStack_6c;
    uVar15 = ((uVar21 | uVar13) & uVar6) * -0xb8c2424 +
             ((uVar21 & uVar19 & uVar6) + (uVar18 ^ uVar9)) * -0xb8c2423 +
             ((uVar21 & uVar19 & uVar18) + (uVar18 ^ (uVar21 | uVar13))) * 0x2b4df155 +
             ((uVar12 & uVar6) - (~(uVar13 & uVar18) | uVar9)) * 0x1fc1cd32 +
             (uVar12 ^ uStack_98) * ~uStack_9c +
             ((~(uVar9 | uVar18) & uVar13) + uVar17) * -0xb8c2422 +
             iVar4 + uVar22 * 0xb8c2424 + (uVar18 & uVar9 & uVar13) * 0x1fc1cd32;
    uVar17 = uVar15 >> 0x14 ^ uVar15;
    uVar17 = (uVar17 << 0x15 | uVar17 >> 0xb) ^ (uVar17 << 10 | uVar15 >> 0x16) ^ uVar17;
    uVar17 = (uVar17 << 0x14 | uVar17 >> 0xc) ^ (uVar17 << 10 | uVar17 >> 0x16) ^ uVar17;
    uVar17 = (uVar17 << 8 | uVar17 >> 0x18) ^ (uVar17 << 0x14 | uVar17 >> 0xc) ^ uVar17;
    uStack_90 = uVar23;
    if (-1 < (short)((uint16_t)uVar17 ^ (uint16_t)(uVar17 >> 0x10) ^ (uint16_t)(uVar17 << 8)))
    goto LAB_7fffa51812ec;
  }
  else {
    if (-0x47000007 < (int)(uint32_t)uStack_d8) {
      *unaff_RDI = (char)(CONCAT11((uint32_t)uStack_d8 < 0xb8fffff9,*unaff_RDI) >> 1);
      goto LAB_7fffa51812ec;
    }
    if ((uint32_t)uStack_d8 >= 0xb8fffff9) {
      iVar20 = (int)uStack_90 + 0x23e0fe53;
      uVar17 = (int)uStack_90 + 0x69dfa24d;
      (*(code *)(&UNK_7fffa4e9e2c3 + (int)(uVar17 * 0x100 | uVar17 >> 0x18)))
                (&UNK_7fffa4e9e2c3 + (int)(uVar17 * 0x100 | uVar17 >> 0x18),param_2,
                 &UNK_7fffa4e9e2c3,(iVar20 * 2 | (uint32_t)(iVar20 < 0)) ^ (uint32_t)uStack_f8);
      return;
    }
  }
  uVar11 = (uint16_t)(0x3835 - (uint32_t)uStack_f8) ^ 0x4009;
  bVar2 = (uint8_t)uStack_90 & 0xf;
  (*(code *)((int64_t)(short)(uVar11 >> bVar2 | uVar11 << 0x10 - bVar2) + 0x7fffa50837e2))();
LAB_7fffa51812ec:
  uStack_d8 = (uint8_t *)CONCAT44(uStack_d8._4_4_,0xe8c74177);
  iVar20 = (int)unaff_RDI;
  uVar17 = ((uint32_t)uStack_90 ^ 0x8754390) * iVar20;
  uVar17 = uVar17 * 0x8000 | uVar17 >> 0x11;
  uVar1 = *(uint64_t *)(&UNK_7fffa57028ba + (int)uVar17);
  *(uint64_t *)((int64_t)puStack_100 + 7) = *(uint64_t *)(&UNK_7fffa57028c1 + (int)uVar17);
  *puStack_100 = uVar1;
  pcVar14 = (code *)((int64_t)
                     (short)(((uint16_t)uStack_f8 | 1) * (0x9a83U - (short)uStack_90 ^ 0x42c7) ^
                            0x4059) + 0x7fffa4cf549d);
  (*pcVar14)(pcVar14,(int64_t)(int)(0x8f858387 - (uint32_t)uStack_90 ^ (uint32_t)uStack_f8));
  ppuStack_d0 = &puStack_100;
  bVar2 = (uint8_t)uStack_f8 & 0x1f;
  bVar16 = (uint8_t)uStack_90 & 0x1f;
  uStack_d8 = &uStack_e1;
  puStack_c8 = auStack_118;
  (*(code *)(&UNK_7fffa51123e7 +
            (int)((0x5ef5557bU >> bVar2 | 0x5ef5557b << 0x20 - bVar2) + (int)uStack_90)))
            (puStack_c8,(int64_t)&uStack_d8 << 0x23 | (uint64_t)&uStack_d8 >> 0x1d,
             ((uint32_t)(iVar20 * 0x1d17f589) >> bVar16 | iVar20 * 0x1d17f589 << 0x20 - bVar16) ^
             0x396cee57);
  (*(code *)(&UNK_7fffa4e9d51e + (int)(uStack_70 * -0xc479d0d ^ 0xda608e23)))();
  uVar17 = (uint32_t)uStack_90 ^ 0x6bdf4881;
  (*(code *)(&UNK_7fffa55e4325 + (int)uVar17))
            (&UNK_7fffa55e4325 + (int)uVar17,uVar17,&UNK_7fffa55e4325,
             (0x491f4d1c - (uint32_t)uStack_90) * iVar20 + 0x58d35875);
  return;
}


// ============================================================================
// Function : FUN_7fffa51814f0  |  RVA: 0xa114f0  |  Size: 35 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa51814f0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = (int)*(uint64_t *)(param_2 + 0xa8) + 0x69dfa24d;
  (*(code *)(&UNK_7fffa4e9e2c3 + (int)(uVar1 * 0x100 | uVar1 >> 0x18)))();
  return;
}


// ============================================================================
// Function : FUN_7fffa5181580  |  RVA: 0xa11580  |  Size: 166 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5181580(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  code *pcVar4;
  uint16_t uVar5;
  
  uVar1 = *(uint64_t *)(param_2 + 0xb0);
  uVar5 = (short)*(uint64_t *)(param_2 + 0xa8) + 0x3b58;
  uVar2 = *(uint64_t *)(param_2 + 0x40);
  bVar3 = (uint8_t)uVar2 & 0xf;
  pcVar4 = (code *)((int64_t)(short)((uVar5 << bVar3 | uVar5 >> 0x10 - bVar3) + 0x1e98) +
                   0x7fffa55d7834);
  (*pcVar4)(uVar2,(uVar1 << 2 | uVar1 >> 0x3e) ^ (uVar1 << 0x1f | uVar1 >> 0x21) ^ uVar1,pcVar4,
            ((int)*(uint64_t *)(param_2 + 0xa8) + 0x4f7a99a4) - (int)uVar2);
  return;
}


// ============================================================================
// Function : FUN_7fffa5181628  |  RVA: 0xa11628  |  Size: 103 bytes
// Callers  : FUN_7fffa4fd1100@0x861100, FUN_7fffa56605e8@0xef05e8, FUN_7fffa507e880@0x90e880, FUN_7fffa52d5b14@0xb65b14, FUN_7fffa5213ed4@0xaa3ed4
// Callees  : FUN_7fffa55d50b4@0xe650b4, FUN_7fffa524fccc@0xadfccc
// ============================================================================
int64_t FUN_7fffa5181628(int64_t *param_1)

{
  code *pcVar1;
  int64_t lVar2;
  uint32_t auStackX_8 [2];
  
  if (*param_1 == 0) {
    auStackX_8[0] = (*(code *)&DAT_7ff84ea18640)();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      lVar2 = 0;
      *(uint8_t *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    lVar2 = FUN_7fffa55d50b4(auStackX_8,lVar2);
    *param_1 = lVar2;
    (*(code *)&DAT_7ff84ea28280)(auStackX_8[0]);
    if (lVar2 == 0) {
      FUN_7fffa524fccc();
      pcVar1 = (code *)__debugbreak();
      lVar2 = (*pcVar1)();
      return lVar2;
    }
  }
  return *param_1;
}


// ============================================================================
// Function : FUN_7fffa5181690  |  RVA: 0xa11690  |  Size: 76 bytes
// Callers  : FUN_7fffa47de1c0@0x6e1c0, FUN_7fffa55d63c0@0xe663c0
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5181784) */
/* WARNING: Removing unreachable block (ram,0x7fffa51817a9) */
/* WARNING: Removing unreachable block (ram,0x7fffa51817ad) */
/* WARNING: Removing unreachable block (ram,0x7fffa51817b0) */
/* WARNING: Removing unreachable block (ram,0x7fffa51817b4) */

void FUN_7fffa5181690(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  code *pcVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint8_t *puVar5;
  uint64_t uStack_50;
  uint8_t auStack_48 [40];
  
  puVar5 = auStack_48;
  if (0x7fffffffffffffff < param_3) {
    FUN_7fffa519a400();
    pcVar1 = (code *)__debugbreak();
    (*pcVar1)();
    return;
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    FUN_7fffa56a5f20();
    *(uint8_t *)(param_3 + (int64_t)param_1) = 0;
    return;
  }
  uVar2 = param_3 | 0xf;
  if (uVar2 < 0x8000000000000000) goto LAB_7fffa5181708;
  uVar3 = 0x8000000000000027;
  puVar5 = auStack_48;
  uVar2 = 0x7fffffffffffffff;
  do {
    *(uint64_t *)(puVar5 + -8) = 0x7fffa51816fc;
    lVar4 = FUN_7fffa5225520(uVar3);
    if (lVar4 != 0) {
      uVar3 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVar3 - 8) = lVar4;
LAB_7fffa5181753:
      *param_1 = uVar3;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      *(uint64_t *)(puVar5 + -8) = 0x7fffa518176c;
      FUN_7fffa56a5f20(uVar3,param_2,param_3);
      *(uint8_t *)(uVar3 + param_3) = 0;
      return;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar5 = puVar5 + 8;
LAB_7fffa5181708:
    if (uVar2 < 0x16) {
      uVar2 = 0x16;
    }
    if (uVar2 == 0xffffffffffffffff) {
      uVar3 = 0;
      goto LAB_7fffa5181753;
    }
    if (uVar2 + 1 < 0x1000) {
      *(uint64_t *)(puVar5 + -8) = 0x7fffa5181750;
      uVar3 = FUN_7fffa5225520();
      goto LAB_7fffa5181753;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar2 + 1) {
      *(uint64_t *)(puVar5 + -8) = 0x7fffa51817d2;
      FUN_7fffa5102fc0();
      pcVar1 = (code *)__debugbreak();
      (*pcVar1)();
      return;
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa51816dc  |  RVA: 0xa116dc  |  Size: 235 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5225520@0xab5520, _guard_check_icall@0xedc080
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5181784) */
/* WARNING: Removing unreachable block (ram,0x7fffa51817a9) */
/* WARNING: Removing unreachable block (ram,0x7fffa51817ad) */
/* WARNING: Removing unreachable block (ram,0x7fffa51817b0) */
/* WARNING: Removing unreachable block (ram,0x7fffa51817b4) */

void FUN_7fffa51816dc(void)

{
  code *pcVar1;
  uint64_t in_RAX;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uStack_8;
  
  uVar2 = in_RAX | 0xf;
  if (uVar2 <= unaff_RDI) goto LAB_7fffa5181708;
  uVar3 = 0x8000000000000027;
  uVar2 = unaff_RDI;
  do {
    *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x7fffa51816fc;
    lVar4 = FUN_7fffa5225520(uVar3);
    if (lVar4 != 0) {
      uVar3 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVar3 - 8) = lVar4;
LAB_7fffa5181753:
      *unaff_RSI = uVar3;
      unaff_RSI[2] = unaff_RBX;
      unaff_RSI[3] = uVar2;
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x7fffa518176c;
      FUN_7fffa56a5f20(uVar3);
      *(uint8_t *)(uVar3 + unaff_RBX) = 0;
      return;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    register0x00000020 = (BADSPACEBASE *)((int64_t)register0x00000020 + 8);
LAB_7fffa5181708:
    if (uVar2 < 0x16) {
      uVar2 = 0x16;
    }
    if (uVar2 == 0xffffffffffffffff) {
      uVar3 = 0;
      goto LAB_7fffa5181753;
    }
    if (uVar2 + 1 < 0x1000) {
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x7fffa5181750;
      uVar3 = FUN_7fffa5225520();
      goto LAB_7fffa5181753;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar2 + 1) {
      *(uint64_t *)((int64_t)register0x00000020 + -8) = 0x7fffa51817d2;
      FUN_7fffa5102fc0();
      pcVar1 = (code *)__debugbreak();
      (*pcVar1)();
      return;
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa51817c7  |  RVA: 0xa117c7  |  Size: 6 bytes
// Callers  : none
// Callees  : FUN_7fffa519a400@0xa2a400
// ============================================================================
void FUN_7fffa51817c7(void)

{
  code *pcVar1;
  
  FUN_7fffa519a400();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa51817cd  |  RVA: 0xa117cd  |  Size: 6 bytes
// Callers  : none
// Callees  : FUN_7fffa5102fc0@0x992fc0
// ============================================================================
void FUN_7fffa51817cd(void)

{
  code *pcVar1;
  
  FUN_7fffa5102fc0();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa51817e0  |  RVA: 0xa117e0  |  Size: 23 bytes
// Callers  : none
// Callees  : none
// ============================================================================
bool FUN_7fffa51817e0(uint64_t *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}


// ============================================================================
// Function : FUN_7fffa51817f8  |  RVA: 0xa117f8  |  Size: 37 bytes
// Callers  : FUN_7fffa569ad70@0xf2ad70, FUN_7fffa5244e38@0xad4e38, FUN_7fffa56aab2c@0xf3ab2c, FUN_7fffa55d6410@0xe66410
// Callees  : FUN_7fffa5002cfc@0x892cfc, FUN_7fffa4ed9184@0x769184, FUN_7fffa52d5bb0@0xb65bb0
// ============================================================================
void FUN_7fffa51817f8(uint32_t param_1)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  
  puVar1 = (uint32_t *)FUN_7fffa52d5bb0();
  *puVar1 = param_1;
  uVar2 = FUN_7fffa5002cfc(param_1);
  puVar1 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar1 = uVar2;
  return;
}


// ============================================================================
// Function : FUN_7fffa5181820  |  RVA: 0xa11820  |  Size: 43 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa5181820(void)

{
  uint64_t in_R11;
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)(in_R11 ^ 0xffffffff92e437a5);
  FUN_7fffa56a5f20(*(uint64_t *)*puVar1,*(uint64_t *)puVar1[1],*(uint32_t *)puVar1[2]);
  return;
}


// ============================================================================
// Function : FUN_7fffa51829e0  |  RVA: 0xa129e0  |  Size: 51 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa5182a26) overlaps instruction at (ram,0x7fffa5182a23)
    */

uint64_t FUN_7fffa51829e0(uint32_t param_1)

{
  code *pcVar1;
  uint32_t in_EAX;
  uint64_t uVar2;
  uint64_t in_R10;
  uint8_t in_TF;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0xace8bb6f,in_EAX);
  if ((in_TF & 1) == 0) {
    return uStack_8;
  }
  pcVar1 = (code *)__debugbreak();
  uVar2 = (*pcVar1)(~((param_1 | 1) * (int)CONCAT62((int6)((uint64_t)in_R10 >> 0x10),0xde1b)),
                    0xace8bb6f,0xccccccccccccc358);
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa5182a30  |  RVA: 0xa12a30  |  Size: 66 bytes
// Callers  : none
// Callees  : thunk_FUN_7fffa55eeda0@0x913000, FUN_7fffa5155450@0x9e5450
// ============================================================================
uint64_t * FUN_7fffa5182a30(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &PTR_FUN_7fffa56f3928;
  FUN_7fffa5155450(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_7fffa55eeda0(param_1,0x18);
  }
  return param_1;
}


// ============================================================================
// Function : FUN_7fffa5182a80  |  RVA: 0xa12a80  |  Size: 1 bytes
// Callers  : FUN_7fffa5697680@0xf27680
// Callees  : none
// ============================================================================
void FUN_7fffa5182a80(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5182a90  |  RVA: 0xa12a90  |  Size: 1002 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int FUN_7fffa5182a90(uint8_t param_1,uint64_t param_2,uint32_t param_3)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  bool bVar4;
  uint8_t bVar5;
  uint64_t in_RAX;
  uint64_t uVar6;
  uint32_t uVar7;
  int iVar8;
  uint8_t bVar9;
  uint32_t uVar10;
  uint8_t bVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t uVar14;
  uint8_t *in_R10;
  int64_t in_R11;
  uint32_t uVar15;
  char cStack_5c;
  
  uVar6 = (uint64_t)(uint8_t)(param_1 << 4 ^ param_1);
  uVar14 = ~in_RAX << 0x11 ^ ~in_RAX;
  uVar14 = uVar14 << 0x22 ^ uVar14;
  iVar8 = -0x7fffffff;
  if (uVar6 + 2 <= uVar14) {
    bVar11 = (uint8_t)param_3;
    bVar5 = (bVar11 | 1) * ':';
    if ((*in_R10 & 3) != bVar5) {
      bVar9 = *(uint8_t *)(in_R11 + 1 + uVar6);
      bVar4 = (char)bVar9 < -0x40;
      if ((param_3 ^ 0x95889dd9) <= param_3 + 0x950a08b9) {
        bVar4 = (uint8_t)(((bVar11 + 0x4a) * '\b' | (uint8_t)(bVar11 + 0x4a) >> 5) - 0x3c) < bVar9;
      }
      iVar8 = 0;
      if (!bVar4) goto LAB_7fffa5182e4f;
    }
    iVar8 = -0x7fffffff;
    if (uVar6 + 4 <= uVar14) {
      bVar9 = in_R10[5];
      in_R10[2] = in_R10[2] & 0xf0 | 3;
      in_R10[5] = bVar9 | 0x10;
      in_R10[0x20] = *(uint8_t *)(in_R11 + uVar6);
      bVar1 = *(uint8_t *)(in_R11 + 1 + uVar6);
      in_R10[0x21] = bVar1;
      bVar2 = *(uint8_t *)(in_R11 + 2 + uVar6);
      in_R10[0x22] = bVar2;
      bVar3 = *(uint8_t *)(in_R11 + 3 + uVar6);
      in_R10[0x23] = bVar3;
      iVar8 = -0x7ffffff8;
      if ((((bVar9 & 0x20) == 0) &&
          ((char)((-0x1a << (bVar11 & 7) | 0xe6U >> 8 - (bVar11 & 7)) + 0x23) < (char)bVar9)) &&
         (((bVar9 | in_R10[6]) & 3) == 0)) {
        uVar10 = bVar1 & 7;
        bVar9 = (uint8_t)uVar10;
        if (bVar9 < 4) {
          if (bVar9 == 0) {
            iVar8 = -0x7ffffffe;
            goto LAB_7fffa5182e4f;
          }
        }
        else {
          bVar11 = -0x7d << (bVar11 & 7) | 0x83U >> 8 - (bVar11 & 7);
          if (((char)(bVar11 << 4 | bVar11 >> 4) <= (char)bVar9 || bVar9 == 4) &&
             (iVar8 = -0x7ffffffe, (in_R10[4] & 0x10) == 0)) goto LAB_7fffa5182e4f;
        }
        uVar12 = (uint32_t)bVar3;
        uVar13 = bVar3 >> 3 & 1;
        bVar11 = bVar3 >> 4 & 1;
        uVar15 = (uint32_t)((uint8_t)~bVar2 >> 3 & 0xf) << 0x10;
        if ((param_3 ^ 0xa173ce5c) ==
            ((param_3 ^ 0xa2c9efa6) << 0xf | (param_3 ^ 0xa2c9efa6) >> 0x11) + 0xc80ad2d8) {
          uVar15 = 0;
        }
        iVar8 = (uint32_t)(bVar3 >> 7) << 0x16;
        if ((param_3 | 1) * -0x2ef7ef3d < (param_3 | 1) * -0x30760169) {
          iVar8 = (bVar3 >> 7) + 0x16;
        }
        uVar7 = iVar8 + ((bVar2 & 3) << 7 | (uint32_t)(bVar2 >> 7)) + (bVar3 & 7) * 0x800000 +
                uVar12 * 0x10000000 + (uVar12 & 0x60) * 0x200;
        uVar10 = uVar10 << 9 |
                 (uVar12 & 4) * 0x2000000 + (uint32_t)bVar11 * 0x200000 + (uint32_t)bVar11 * 0x4000000 +
                 (uVar13 ^ 1) * 0x100000;
        *(uint32_t *)(in_R10 + 0x18) =
             uVar10 | uVar7 |
             (uint32_t)(~bVar1 & 0x10) + (uint32_t)(-1 < (char)bVar1) * 2 | (uint32_t)(bVar1 * '\b' & 0x40) |
             ~(uint32_t)bVar1 >> 4 & 4 | (uint32_t)((uint8_t)~bVar1 >> 2 & 8) | (uint32_t)(uint8_t)((~bVar2 & 4) << 3)
             | uVar15;
        if ((*in_R10 & 3) != bVar5) {
          *(uint32_t *)(in_R10 + 0x18) = uVar15 & 0x70000 | uVar10 | uVar7 & 0xfff0cf81;
          cStack_5c = (char)uVar13;
          if (cStack_5c == '\0') {
            iVar8 = -0x7fffffc0;
            goto LAB_7fffa5182e4f;
          }
        }
        iVar8 = -0x60533897 - (param_3 + 0x4cc86e31);
        if ((uint8_t)(in_R10[0xb] + 4) < 0x10) {
          iVar8 = 0;
        }
        in_R10[0xb] = in_R10[0xb] + 4;
      }
    }
  }
LAB_7fffa5182e4f:
  return iVar8 + (param_3 | 1) * 0x418b5f6e;
}


// ============================================================================
// Function : FUN_7fffa5182e80  |  RVA: 0xa12e80  |  Size: 48 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5182e80(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint32_t in_EAX;
  uint64_t in_R10;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0x933c0205,in_EAX);
  lVar1 = *(int64_t *)((in_R10 ^ 0x74f73651) + 8);
  *(uint64_t *)(lVar1 + 0x70) = 0;
  uVar2 = *(uint64_t *)(lVar1 + 0x68);
  *(uint64_t *)(*(int64_t *)((in_R10 ^ 0x74f73651) + 8) + 0x78) =
       (uint64_t)((uVar2 & 0xf) == 0 || (uVar2 & 0x4000) == 0);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa5182f60  |  RVA: 0xa12f60  |  Size: 62 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5182f60(uint64_t param_1)

{
  FUN_7fffa5182e80(param_1 ^ 0x74f73651,FUN_7fffa5182e80,0x7dd1d384);
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa5182fa0  |  RVA: 0xa12fa0  |  Size: 27 bytes
// Callers  : FUN_7fffa507cd30@0x90cd30
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5182fa0(int64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  int64_t lVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  
  uVar4 = *(uint32_t *)((int64_t)*(int *)(param_3 + 0x1c) + *param_1);
  if (uVar4 != 0xfffffffe) {
FUN_7fffa5183007:
    return (uint64_t)uVar4;
  }
  uVar3 = param_2[1];
  lVar1 = uVar3 + (int64_t)*(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
    FUN_7fffa524fccc();
    pcVar2 = (code *)__debugbreak();
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  if (*(uint32_t *)(param_3 + 0x14) != 0) {
    uVar5 = 0;
    do {
      if (*param_2 < (int64_t)*(int *)(lVar1 + uVar5 * 8) + uVar3) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while (uVar4 < *(uint32_t *)(param_3 + 0x14));
    if ((int)uVar5 != 0) {
      uVar4 = *(uint32_t *)(uVar3 + (uint64_t)((int)uVar5 - 1) * 8 + 4 +
                       (int64_t)*(int *)(param_3 + 0x18));
      goto FUN_7fffa5183007;
    }
  }
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa5182fbb  |  RVA: 0xa12fbb  |  Size: 76 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5182fbb(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  uint64_t *in_R11;
  
  lVar1 = param_4 + *(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
    FUN_7fffa524fccc();
    pcVar2 = (code *)__debugbreak();
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  if (*(uint32_t *)(param_3 + 0x14) != 0) {
    uVar3 = 0;
    do {
      if (*in_R11 < (uint64_t)(*(int *)(lVar1 + uVar3 * 8) + param_4)) break;
      uVar4 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar4;
    } while (uVar4 < *(uint32_t *)(param_3 + 0x14));
    if ((int)uVar3 != 0) {
      return (uint64_t)
             *(uint32_t *)(param_4 + (uint64_t)((int)uVar3 - 1) * 8 + 4 +
                      (int64_t)*(int *)(param_3 + 0x18));
    }
  }
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa5183007  |  RVA: 0xa13007  |  Size: 5 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5183007(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa518300c  |  RVA: 0xa1300c  |  Size: 15 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa518300c(void)

{
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa518301b  |  RVA: 0xa1301b  |  Size: 6 bytes
// Callers  : none
// Callees  : FUN_7fffa524fccc@0xadfccc
// ============================================================================
void FUN_7fffa518301b(void)

{
  code *pcVar1;
  
  FUN_7fffa524fccc();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5183030  |  RVA: 0xa13030  |  Size: 1385 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5183030(void) {
    /* +0xa13030 */ __asm { PUSH RBP }
    /* +0xa13031 */ __asm { PUSH RDI }
    /* +0xa13032 */ __asm { PUSH R15 }
    /* +0xa13034 */ __asm { PUSH R12 }
    /* +0xa13036 */ __asm { PUSH R13 }
    /* +0xa13038 */ __asm { PUSH RBX }
    /* +0xa13039 */ __asm { PUSH RSI }
    /* +0xa1303a */ __asm { PUSH R14 }
    /* +0xa1303c */ __asm { SUB RSP,0x4d8 }
    /* +0xa13043 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xa1304b */ __asm { MOVAPS xmmword ptr [RBP + 0x440],XMM11 }
    /* +0xa13053 */ __asm { MOVAPS xmmword ptr [RBP + 0x430],XMM8 }
    /* +0xa1305b */ __asm { MOVAPS xmmword ptr [RBP + 0x420],XMM13 }
    /* +0xa13063 */ __asm { MOVAPS xmmword ptr [RBP + 0x410],XMM6 }
    /* +0xa1306a */ __asm { MOVAPS xmmword ptr [RBP + 0x400],XMM10 }
    /* +0xa13072 */ __asm { MOVAPS xmmword ptr [RBP + 0x3f0],XMM9 }
    /* +0xa1307a */ __asm { MOVAPS xmmword ptr [RBP + 0x3e0],XMM14 }
    /* +0xa13082 */ __asm { MOVDQA xmmword ptr [RBP + 0x3d0],XMM7 }
    /* +0xa1308a */ __asm { MOVDQA xmmword ptr [RBP + 0x3c0],XMM12 }
    /* +0xa13093 */ __asm { MOVAPS xmmword ptr [RBP + 0x3b0],XMM15 }
    /* +0xa1309b */ __asm { MOV qword ptr [RBP + 0x3a8],-0x2 }
    /* +0xa130a6 */ __asm { MOV RCX,R8 }
    /* +0xa130a9 */ __asm { MOV R10,qword ptr [RBP + 0x4c0] }
    /* +0xa130b0 */ __asm { MOVQ RAX,XMM3 }
    /* +0xa130b5 */ __asm { MOV RDX,0x36998d3041b9ebf2 }
    /* +0xa130bf */ __asm { SUB RDX,R8 }
    /* +0xa130c2 */ __asm { MOV R8D,0xe9ab3574 }
    /* +0xa130c8 */ __asm { ADD RAX,-0x6e5946f5 }
    /* +0xa130ce */ __asm { ROL RDX,0x23 }
    /* +0xa130d2 */ __asm { IMUL RDX,RAX }
    /* +0xa130d6 */ __asm { NOT R10 }
    /* +0xa130d9 */ __asm { MOV RBX,R10 }
    /* +0xa130dc */ __asm { ROL RBX,0x36 }
    /* +0xa130e0 */ __asm { MOV R11D,0x174e43cc }
    /* +0xa130e6 */ __asm { MOV RAX,R10 }
    /* +0xa130e9 */ __asm { IMUL R9D,R11D,-0x1163498b }
    /* +0xa130f0 */ __asm { ADD R9D,0xfd82f3c1 }
    /* +0xa130f7 */ __asm { ROL R9D,CL }
    /* +0xa130fa */ __asm { ROL RAX,0x22 }
    /* +0xa130fe */ __asm { MOV R11D,0xd4b51216 }
    /* +0xa13104 */ __asm { SUB R11D,ECX }
    /* +0xa13107 */ __asm { ADD R11D,0x22f48247 }
    /* +0xa1310e */ __asm { XOR RAX,RBX }
    /* +0xa13111 */ __asm { XOR RDX,0x954f675 }
    /* +0xa13118 */ __asm { MOV R13,RDX }
    /* +0xa1311b */ __asm { ROL R13,0xd }
    /* +0xa1311f */ __asm { XOR RAX,R10 }
    /* +0xa13122 */ __asm { MOV RBX,RDX }
    /* +0xa13125 */ __asm { ROL RBX,0x2d }
    /* +0xa13129 */ __asm { XOR RBX,R13 }
    /* +0xa1312c */ __asm { XOR RBX,RDX }
    /* +0xa1312f */ __asm { MOVQ XMM4,RBX }
    /* +0xa13134 */ __asm { ROL RBX,0x10 }
    /* +0xa13138 */ __asm { ADD R8D,0x627f83c9 }
    /* +0xa1313f */ __asm { ROR R8D,CL }
    /* +0xa13142 */ __asm { XOR R10D,R10D }
    /* +0xa13145 */ __asm { CMP R11,R8 }
    /* +0xa13148 */ __asm { CMOVG R10,RBX }
    /* +0xa1314c */ __asm { MOV RDX,RAX }
    /* +0xa1314f */ __asm { ROL RDX,0x4 }
    /* +0xa13153 */ __asm { MOVQ XMM5,RDX }
    /* +0xa13158 */ __asm { MOV R8D,0x75b722cf }
    /* +0xa1315e */ __asm { XOR R8D,0xa17cb382 }
    /* +0xa13165 */ __asm { ROR R8D,CL }
    /* +0xa13168 */ __asm { MOV EDX,0xfe6fdb8c }
    /* +0xa1316d */ __asm { XOR EDX,0x1d5138bb }
    /* +0xa13173 */ __asm { MOV qword ptr [RBP + 0x338],RCX }
    /* +0xa1317a */ __asm { ROR EDX,CL }
    /* +0xa1317c */ __asm { MOVQ XMM0,RAX }
    /* +0xa13181 */ __asm { PXOR XMM0,XMM5 }
    /* +0xa13185 */ __asm { MOVQ R11,XMM0 }
    /* +0xa1318a */ __asm { ROL RAX,0x2c }
    /* +0xa1318e */ __asm { MOV RCX,R11 }
    /* +0xa13191 */ __asm { XOR RCX,RAX }
    /* +0xa13194 */ __asm { AND RAX,R11 }
    /* +0xa13197 */ __asm { CMP RDX,-0x5f62149b }
    /* +0xa1319e */ __asm { CMOVNZ RAX,RCX }
    /* +0xa131a2 */ __asm { MOV RDX,RAX }
    /* +0xa131a5 */ __asm { ROL RDX,0x8 }
    /* +0xa131a9 */ __asm { MOVQ XMM5,R10 }
    /* +0xa131ae */ __asm { MOV R10,RAX }
    /* +0xa131b1 */ __asm { XOR R10,RDX }
    /* +0xa131b4 */ __asm { OR RDX,RAX }
    /* +0xa131b7 */ __asm { ROL RAX,0x18 }
    /* +0xa131bb */ __asm { CMP R9,R8 }
    /* +0xa131be */ __asm { POR XMM5,XMM4 }
    /* +0xa131c2 */ __asm { MOVQ R11,XMM5 }
    /* +0xa131c7 */ __asm { PXOR XMM4,XMM4 }
    /* +0xa131cb */ __asm { MOVDQU xmmword ptr [R11],XMM4 }
    /* +0xa131d0 */ __asm { CMOVBE RDX,R10 }
    /* +0xa131d4 */ __asm { XOR RDX,RAX }
    /* +0xa131d7 */ __asm { MOV RAX,RDX }
    /* +0xa131da */ __asm { ROL RAX,0x10 }
    /* +0xa131de */ __asm { MOV qword ptr [RBP + 0x68],R11 }
    /* +0xa131e2 */ __asm { MOV qword ptr [R11 + 0x10],0x0 }
    /* +0xa131ea */ __asm { MOVQ XMM5,RDX }
    /* +0xa131ef */ __asm { ROL RDX,0x30 }
    /* +0xa131f3 */ __asm { XOR RDX,RAX }
    /* +0xa131f6 */ __asm { MOVQ XMM0,RDX }
    /* +0xa131fb */ __asm { PXOR XMM0,XMM5 }
    /* +0xa131ff */ __asm { MOVQ RAX,XMM0 }
    /* +0xa13204 */ __asm { MOV qword ptr [RBP + 0x358],RAX }
    /* +0xa1320b */ __asm { MOV dword ptr [RBP + 0x70],0x26ffdd77 }
    /* +0xa13212 */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xa13216 */ __asm { TEST R11B,0x1 }
    /* +0xa1321a */ __asm { NOP }
    /* +0xa1321b */ __asm { NOP }
    /* +0xa1321c */ __asm { NOP }
    /* +0xa1321d */ __asm { NOP }
    /* +0xa1321e */ __asm { NOP }
    /* +0xa1321f */ __asm { NOP }
    /* +0xa13220 */ __asm { NOP }
    /* +0xa13221 */ __asm { NOP }
    /* +0xa13222 */ __asm { NOP }
    /* +0xa13223 */ __asm { NOP }
    /* +0xa13224 */ __asm { NOP }
    /* +0xa13225 */ __asm { NOP }
    /* +0xa13226 */ __asm { NOP }
    /* +0xa13227 */ __asm { NOP }
    /* +0xa13228 */ __asm { MOV R14,0x311dcb78eaead377 }
    /* +0xa13232 */ __asm { MOV RCX,0x4fca0f978fc072f4 }
    /* +0xa1323c */ __asm { MOV qword ptr [RBP + 0x30],RCX }
    /* +0xa13240 */ __asm { MOV RCX,-0x4fa0cad969fb0e4f }
    /* +0xa1324a */ __asm { MOV qword ptr [RBP + 0x2a8],RCX }
    /* +0xa13251 */ __asm { MOV RCX,0x1f36b4bc0d13e4e3 }
    /* +0xa1325b */ __asm { MOV qword ptr [RBP + 0x2e0],RCX }
    /* +0xa13262 */ __asm { MOV RCX,0x4fab0fda8f9c728d }
    /* +0xa1326c */ __asm { MOV qword ptr [RBP + 0x40],RCX }
    /* +0xa13270 */ __asm { MOV RDX,-0x7ce8941a51f459e7 }
    /* +0xa1327a */ __asm { MOV R11,-0x7e6df35855008406 }
    /* +0xa13284 */ __asm { MOV RSI,-0x73194115cc2c550 }
    /* +0xa1328e */ __asm { MOV RAX,0x1f51b4d90d41e4bf }
    /* +0xa13298 */ __asm { MOV R9,-0x7c9a946e51875990 }
    /* +0xa132a2 */ __asm { PUSHFQ }
    /* +0xa132a3 */ __asm { POP RCX }
    /* +0xa132a4 */ __asm { MOV qword ptr [RBP + 0x310],RCX }
    /* +0xa132ab */ __asm { MOV RBX,-0x1624483ae5d904f6 }
    /* +0xa132b5 */ __asm { MOV R15,-0x6c4aaa1c88d9c085 }
    /* +0xa132bf */ __asm { MOV R12,-0x4fd2caac69b80e13 }
    /* +0xa132c9 */ __asm { MOV RCX,-0x774944d5cb6c52b }
    /* +0xa132d3 */ __asm { MOV qword ptr [RBP + 0x318],RCX }
    /* +0xa132da */ __asm { MOV RCX,-0x7e03f33155688467 }
    /* +0xa132e4 */ __asm { MOV qword ptr [RBP + 0x360],RCX }
    /* +0xa132eb */ __asm { MOV R10,-0x6c1aaa4f8890c0c1 }
    /* +0xa132f5 */ __asm { MOV RCX,0x2ce295da094ac9c8 }
    /* +0xa132ff */ __asm { MOV R13,-0x14b61ea266d44814 }
    /* +0xa13309 */ __asm { MOVQ XMM5,R13 }
    /* +0xa1330e */ __asm { MOVQ XMM15,R12 }
    /* +0xa13313 */ __asm { MOV R12,-0x16774856e5b60488 }
    /* +0xa1331d */ __asm { MOV R13,0x2c9695b40925c98b }
    /* +0xa13327 */ __asm { MOV RDI,-0x25b816930dbdc660 }
    /* +0xa13331 */ __asm { MOV R8,0x74b6bff2a8dd3aec }
    /* +0xa1333b */ __asm { MOVQ XMM0,R8 }
    /* +0xa13340 */ __asm { MOVQ XMM13,RSI }
    /* +0xa13345 */ __asm { MOVQ XMM3,R14 }
    /* +0xa1334a */ __asm { MOV R14,-0x14c21ecc66b14862 }
    /* +0xa13354 */ __asm { MOV RSI,0x74eabf9fa8a83a82 }
    /* +0xa1335e */ __asm { MOV R8,0x192b570b09860952 }
    /* +0xa13368 */ __asm { MOVQ XMM10,R8 }
    /* +0xa1336d */ __asm { MOVQ XMM1,RBX }
    /* +0xa13372 */ __asm { MOVQ XMM9,RCX }
    /* +0xa13377 */ __asm { MOVQ XMM2,RDX }
    /* +0xa1337c */ __asm { MOVQ XMM14,RAX }
    /* +0xa13381 */ __asm { MOV DX,0x5e4d }
    /* +0xa13385 */ __asm { LEA RBX,[0x7fffa526fa21] }
    /* +0xa1338c */ __asm { MOV ECX,0x9a93497c }
    /* +0xa13391 */ __asm { MOV R8D,0x6109d88a }
    /* +0xa13397 */ __asm { SUB R8D,ECX }
    /* +0xa1339a */ __asm { MOVSXD RAX,R8D }
    /* +0xa1339d */ __asm { MOV qword ptr [RBP + 0x1b8],RDI }
    /* +0xa133a4 */ __asm { MOV qword ptr [RBP + 0x1b0],R15 }
    /* +0xa133ab */ __asm { MOV RCX,qword ptr [RBP + 0x2a8] }
    /* +0xa133b2 */ __asm { MOV qword ptr [RBP + 0xa0],RCX }
    /* +0xa133b9 */ __asm { MOV qword ptr [RBP + 0x270],R9 }
    /* +0xa133c0 */ __asm { MOV qword ptr [RBP + 0x78],R9 }
    /* +0xa133c4 */ __asm { MOV qword ptr [RBP + 0xc8],RSI }
    /* +0xa133cb */ __asm { MOV R9,0x1972575809da0937 }
    /* +0xa133d5 */ __asm { LEA RCX,[RBP + 0x70] }
    /* +0xa133d9 */ __asm { MOV R8,-0x25b816ca0dfcc614 }
    /* +0xa133e3 */ __asm { MOV R15,0x3150cb3deabed324 }
    /* +0xa133ed */ __asm { MOV qword ptr [RBP + 0x278],R15 }
    /* +0xa133f4 */ __asm { MOV qword ptr [RBP + 0x98],R15 }
    /* +0xa133fb */ __asm { MOV qword ptr [RBP + 0x140],R9 }
    /* +0xa13402 */ __asm { MOV qword ptr [RBP + 0x90],R9 }
    /* +0xa13409 */ __asm { MOV qword ptr [RBP + 0xd8],R8 }
    /* +0xa13410 */ __asm { MOV R8,qword ptr [RBP + 0x40] }
    /* +0xa13414 */ __asm { MOV qword ptr [RBP + 0x80],R8 }
    /* +0xa1341b */ __asm { MOV qword ptr [RBP + 0x2a0],R11 }
    /* +0xa13422 */ __asm { MOV qword ptr [RBP + 0x88],R11 }
    /* +0xa13429 */ __asm { MOV R8,qword ptr [RBP + 0x318] }
    /* +0xa13430 */ __asm { MOV qword ptr [RBP + 0xc0],R8 }
    /* +0xa13437 */ __asm { MOV qword ptr [RBP + 0xb0],R13 }
    /* +0xa1343e */ __asm { MOV R8,qword ptr [RBP + 0x2e0] }
    /* +0xa13445 */ __asm { MOV qword ptr [RBP + 0x70],R8 }
    /* +0xa13449 */ __asm { MOV qword ptr [RBP + 0xa8],R14 }
    /* +0xa13450 */ __asm { MOV qword ptr [RBP + 0xb8],R12 }
    /* +0xa13457 */ __asm { MOV qword ptr [RBP + 0xd0],R10 }
    /* +0xa1345e */ __asm { MOVQ XMM8,qword ptr [RBP + 0x360] }
    /* +0xa13467 */ __asm { MOVQ XMM11,qword ptr [RBP + 0x30] }
    /* +0xa1346d */ __asm { PUNPCKLQDQ XMM15,XMM5 }
    /* +0xa13472 */ __asm { PUNPCKLQDQ XMM13,XMM0 }
    /* +0xa13477 */ __asm { PUNPCKLQDQ XMM10,XMM3 }
    /* +0xa1347c */ __asm { PUNPCKLQDQ XMM14,XMM2 }
    /* +0xa13481 */ __asm { MOVDQA XMM5,xmmword ptr [RBP + 0x1b0] }
    /* +0xa13489 */ __asm { PXOR XMM15,xmmword ptr [RCX + 0x30] }
    /* +0xa1348f */ __asm { PXOR XMM13,xmmword ptr [RCX + 0x50] }
    /* +0xa13495 */ __asm { PXOR XMM10,xmmword ptr [RCX + 0x20] }
    /* +0xa1349b */ __asm { PXOR XMM14,xmmword ptr [RCX] }
    /* +0xa134a0 */ __asm { PXOR XMM5,xmmword ptr [RCX + 0x60] }
    /* +0xa134a5 */ __asm { PUNPCKLQDQ XMM9,XMM1 }
    /* +0xa134aa */ __asm { MOVDQA xmmword ptr [RBP + 0x1b0],XMM5 }
    /* +0xa134b2 */ __asm { PXOR XMM9,xmmword ptr [RCX + 0x40] }
    /* +0xa134b8 */ __asm { PUNPCKLQDQ XMM11,XMM8 }
    /* +0xa134bd */ __asm { PXOR XMM11,xmmword ptr [RCX + 0x10] }
    /* +0xa134c3 */ __asm { MOV RSI,qword ptr [RBP + 0x338] }
    /* +0xa134ca */ __asm { MOV R9D,ESI }
    /* +0xa134cd */ __asm { OR R9D,0x1 }
    /* +0xa134d1 */ __asm { MOV qword ptr [RBP + 0x2e8],R9 }
    /* +0xa134d8 */ __asm { IMUL EDX,R9D }
    /* +0xa134dc */ __asm { ROL DX,0xc }
    /* +0xa134e0 */ __asm { MOVSX RDX,DX }
    /* +0xa134e4 */ __asm { ADD RDX,RBX }
    /* +0xa134e7 */ __asm { MOVDQA xmmword ptr [RBP + 0x380],XMM4 }
    /* +0xa134ef */ __asm { MOVDQA xmmword ptr [RBP + 0x390],XMM4 }
    /* +0xa134f7 */ __asm { MOV R10,0x1865d7b5987f }
    /* +0xa13501 */ __asm { CALL RDX }
    /* +0xa13503 */ __asm { ROL RCX,0x2c }
    /* +0xa13507 */ __asm { MOV RAX,RCX }
    /* +0xa1350a */ __asm { SHL RAX,0x36 }
    /* +0xa1350e */ __asm { SUB RCX,RAX }
    /* +0xa13511 */ __asm { MOVDQU xmmword ptr [RCX],XMM14 }
    /* +0xa13516 */ __asm { MOV qword ptr [RBP + 0x380],RCX }
    /* +0xa1351d */ __asm { MOV RAX,qword ptr [RBP + 0x1b0] }
    /* +0xa13524 */ __asm { MOV RDX,qword ptr [RBP + 0x1b6] }
    /* +0xa1352b */ __asm { MOV qword ptr [RCX + 0x66],RDX }
    /* +0xa1352f */ __asm { MOV qword ptr [RCX + 0x60],RAX }
    /* +0xa13533 */ __asm { MOVDQU xmmword ptr [RCX + 0x40],XMM9 }
    /* +0xa13539 */ __asm { MOV word ptr [RCX + 0x6e],0x0 }
    /* +0xa1353f */ __asm { MOVDQU xmmword ptr [RCX + 0x30],XMM15 }
    /* +0xa13545 */ __asm { MOVDQU xmmword ptr [RCX + 0x50],XMM13 }
    /* +0xa1354b */ __asm { MOVDQU xmmword ptr [RCX + 0x20],XMM10 }
    /* +0xa13551 */ __asm { MOVDQU xmmword ptr [RCX + 0x10],XMM11 }
    /* +0xa13557 */ __asm { MOV qword ptr [RBP + 0x398],0x37 }
    /* +0xa13562 */ __asm { MOV qword ptr [RBP + 0x390],0x37 }
    /* +0xa1356d */ __asm { MOV dword ptr [RBP + 0x1a0],0x6e006e }
    /* +0xa13577 */ __asm { MOV qword ptr [RBP + 0x1a8],RCX }
    /* +0xa1357e */ __asm { TEST dword ptr [RBP + 0x310],0x100 }
    /* +0xa13588 */ __asm { NOP }
    /* +0xa13589 */ __asm { NOP }
    /* +0xa1358a */ __asm { NOP }
    /* +0xa1358b */ __asm { NOP }
    /* +0xa1358c */ __asm { NOP }
    /* +0xa1358d */ __asm { NOP }
    /* +0xa1358e */ __asm { NOP }
    /* +0xa1358f */ __asm { NOP }
    /* +0xa13590 */ __asm { NOP }
    /* +0xa13591 */ __asm { NOP }
    /* +0xa13592 */ __asm { NOP }
    /* +0xa13593 */ __asm { NOP }
    /* +0xa13594 */ __asm { NOP }
    /* +0xa13595 */ __asm { NOP }
    /* +0xa13596 */ __asm { NOP }
    /* +0xa13597 */ __asm { NOP }
    /* +0xa13598 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa5192200  |  RVA: 0xa22200  |  Size: 352 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5192200(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  
  if ((uint64_t)(0xe5a37bf8 - (*(int *)(param_2 + 0xb0) + -0x3d41f150)) <
      *(uint64_t *)(param_2 + 0x328)) {
    iVar1 = (*(uint32_t *)(param_2 + 0x3b8) ^ 0x205e6e9) + *(int *)(param_2 + 0x2b0);
    (*(code *)((int64_t)iVar1 + 0x7fffa5697061))
              (iVar1,0x7fffa5697061,
               *(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0),
               (uint32_t)*(uint64_t *)(param_2 + 0xb0) | 1);
  }
  *(uint64_t *)(param_2 + 0x108) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5192360  |  RVA: 0xa22360  |  Size: 309 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5192360(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint32_t uVar3;
  
  if (7 < *(uint64_t *)(param_2 + 0x1a8)) {
    uVar3 = *(int *)(param_2 + 0x3d4) * -0x10e25cf1;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xb0) & 0x1f;
    pcVar2 = (code *)((int64_t)(int)(uVar3 << bVar1 | uVar3 >> 0x20 - bVar1) + 0x7fffa569361d);
    (*pcVar2)(*(uint64_t *)(param_2 + 0xb0),pcVar2,
              *(uint64_t *)(param_2 + 400) >> 0x3d ^ *(uint64_t *)(param_2 + 400));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa51924a0  |  RVA: 0xa224a0  |  Size: 356 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa51924a0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x3e0)) {
    pcVar1 = (code *)((int64_t)
                      (short)~(((uint16_t)*(uint64_t *)(param_2 + 0xb0) ^ 0x8c4c) +
                              (short)*(uint32_t *)(param_2 + 0x3b8)) + 0x7fffa568d5a5);
    (*pcVar1)(param_1,pcVar1,*(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0)
             );
  }
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint64_t *)(param_2 + 0x100) = 0;
  *(uint16_t *)(param_2 + 0xf0) = 0;
  *(uint64_t *)(param_2 + 0x358) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5192610  |  RVA: 0xa22610  |  Size: 333 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5192610(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x358)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xb0) & 0x1f;
    pcVar2 = (code *)((int64_t)
                      (int)((0x14a10ca3U >> bVar1 | 0x14a10ca3 << 0x20 - bVar1) + 0x9692b5f4 ^
                           *(uint32_t *)(param_2 + 0x3b8)) + 0x7fffa569380e);
    (*pcVar2)(*(uint64_t *)(param_2 + 0xb0),pcVar2,
              *(uint64_t *)(param_2 + 0x90) >> 0x3d ^ *(uint64_t *)(param_2 + 0x90));
  }
  *(uint64_t *)(param_2 + 0xa8) = 7;
  *(uint64_t *)(param_2 + 0xa0) = 0;
  *(uint16_t *)(param_2 + 0x90) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5192760  |  RVA: 0xa22760  |  Size: 2606 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa5192760(void) {
    /* +0xa22760 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xa22765 */ __asm { PUSH RBP }
    /* +0xa22766 */ __asm { PUSH RDI }
    /* +0xa22767 */ __asm { PUSH R15 }
    /* +0xa22769 */ __asm { PUSH R12 }
    /* +0xa2276b */ __asm { PUSH R13 }
    /* +0xa2276d */ __asm { PUSH RBX }
    /* +0xa2276e */ __asm { PUSH RSI }
    /* +0xa2276f */ __asm { PUSH R14 }
    /* +0xa22771 */ __asm { SUB RSP,0xd8 }
    /* +0xa22778 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xa2277f */ __asm { MOVDQA xmmword ptr [RSP + 0x30],XMM11 }
    /* +0xa22786 */ __asm { MOVDQA xmmword ptr [RSP + 0x40],XMM8 }
    /* +0xa2278d */ __asm { MOVDQA xmmword ptr [RSP + 0x50],XMM13 }
    /* +0xa22794 */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM6 }
    /* +0xa2279a */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM10 }
    /* +0xa227a1 */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM9 }
    /* +0xa227ab */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM14 }
    /* +0xa227b5 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM7 }
    /* +0xa227be */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM12 }
    /* +0xa227c8 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM15 }
    /* +0xa227d2 */ __asm { CMP qword ptr [RBP + 0xf8],0x8 }
    /* +0xa227da */ __asm { MOV RBX,qword ptr [RBP + 0x338] }
    /* +0xa227e1 */ __asm { MOV R14,qword ptr [RBP + 0x30] }
    /* +0xa227e5 */ __asm { JC 0x7fffa5192838 }
    /* +0xa227e7 */ __asm { LEA RAX,[0x7fffa5689bd1] }
    /* +0xa227ee */ __asm { MOV RDX,qword ptr [RBP + 0xe0] }
    /* +0xa227f5 */ __asm { MOV R8,RDX }
    /* +0xa227f8 */ __asm { SHR R8,0x3d }
    /* +0xa227fc */ __asm { MOV R11D,0xf174490b }
    /* +0xa22802 */ __asm { ADD R11D,EBX }
    /* +0xa22805 */ __asm { XOR R11D,0x7f34cb2e }
    /* +0xa2280c */ __asm { XOR R8,RDX }
    /* +0xa2280f */ __asm { MOV R9W,0xbe2b }
    /* +0xa22814 */ __asm { IMUL R9D,R9D,-0x176d }
    /* +0xa2281b */ __asm { ADD R9D,0x6d87 }
    /* +0xa22822 */ __asm { XOR R9D,EBX }
    /* +0xa22825 */ __asm { MOVSX RDX,R9W }
    /* +0xa22829 */ __asm { ADD RDX,RAX }
    /* +0xa2282c */ __asm { IMUL R11D,R11D,0x3954395f }
    /* +0xa22833 */ __asm { ADD R11D,R14D }
    /* +0xa22836 */ __asm { CALL RDX }
    /* +0xa22838 */ __asm { MOV R9D,0x857aaae3 }
    /* +0xa2283e */ __asm { LEA RAX,[RBP + 0x280] }
    /* +0xa22845 */ __asm { MOV R13,RAX }
    /* +0xa22848 */ __asm { SHR R13,0x3b }
    /* +0xa2284c */ __asm { XOR R13,RAX }
    /* +0xa2284f */ __asm { MOV R11W,0x1a09 }
    /* +0xa22854 */ __asm { NOT R11D }
    /* +0xa22857 */ __asm { ADD R11D,EBX }
    /* +0xa2285a */ __asm { MOVD XMM4,R11D }
    /* +0xa2285f */ __asm { MOV R11D,0x3fffff70 }
    /* +0xa22865 */ __asm { SUB R11D,R9D }
    /* +0xa22868 */ __asm { LEA RAX,[0x7fffa5688685] }
    /* +0xa2286f */ __asm { MOV R9W,0xa5e2 }
    /* +0xa22874 */ __asm { MOV RCX,qword ptr [RBP + 0x2a8] }
    /* +0xa2287b */ __asm { MOV RDX,R13 }
    /* +0xa2287e */ __asm { ROL RDX,0x2b }
    /* +0xa22882 */ __asm { MOV RSI,R14 }
    /* +0xa22885 */ __asm { OR R14D,0x1 }
    /* +0xa22889 */ __asm { MOVD XMM5,R14D }
    /* +0xa2288e */ __asm { ADD R9D,0x58aa }
    /* +0xa22895 */ __asm { IMUL R9D,dword ptr [RBP + 0x2e8] }
    /* +0xa2289d */ __asm { LEA R10,[0x7fffa55fe4a3] }
    /* +0xa228a4 */ __asm { PMULLW XMM5,XMM4 }
    /* +0xa228a8 */ __asm { MOVQ XMM4,RDX }
    /* +0xa228ad */ __asm { XOR R11D,ESI }
    /* +0xa228b0 */ __asm { MOVD R8D,XMM5 }
    /* +0xa228b5 */ __asm { MOVSX RDI,R8W }
    /* +0xa228b9 */ __asm { ADD RDI,R10 }
    /* +0xa228bc */ __asm { MOV RDX,R13 }
    /* +0xa228bf */ __asm { ROL RDX,0x1d }
    /* +0xa228c3 */ __asm { MOVQ XMM5,RDX }
    /* +0xa228c8 */ __asm { PXOR XMM5,XMM4 }
    /* +0xa228cc */ __asm { MOVQ R15,XMM5 }
    /* +0xa228d1 */ __asm { SUB R11D,EBX }
    /* +0xa228d4 */ __asm { MOV R8,RCX }
    /* +0xa228d7 */ __asm { SHR R8,0x3d }
    /* +0xa228db */ __asm { XOR R8,RCX }
    /* +0xa228de */ __asm { MOV ECX,0x735290fd }
    /* +0xa228e3 */ __asm { ADD ECX,ESI }
    /* +0xa228e5 */ __asm { MOV EBX,0xf2c9379d }
    /* +0xa228ea */ __asm { SUB EBX,ECX }
    /* +0xa228ec */ __asm { NOT R9D }
    /* +0xa228ef */ __asm { MOVSX RDX,R9W }
    /* +0xa228f3 */ __asm { ADD RDX,RAX }
    /* +0xa228f6 */ __asm { CALL RDX }
    /* +0xa228f8 */ __asm { XOR R15,R13 }
    /* +0xa228fb */ __asm { MOV RAX,R15 }
    /* +0xa228fe */ __asm { SHL RAX,0x1f }
    /* +0xa22902 */ __asm { SUB R15,RAX }
    /* +0xa22905 */ __asm { MOVQ XMM4,R15 }
    /* +0xa2290a */ __asm { PSHUFD XMM3,XMM4,0x44 }
    /* +0xa2290f */ __asm { MOVDQA XMM5,XMM4 }
    /* +0xa22913 */ __asm { PSRLQ XMM5,0xf }
    /* +0xa22918 */ __asm { MOVDQA XMM0,XMM3 }
    /* +0xa2291c */ __asm { PSRLQ XMM0,0x35 }
    /* +0xa22921 */ __asm { MOVSD XMM0,XMM5 }
    /* +0xa22925 */ __asm { PSLLQ XMM4,0x31 }
    /* +0xa2292a */ __asm { PSLLQ XMM3,0xb }
    /* +0xa2292f */ __asm { MOVSD XMM3,XMM4 }
    /* +0xa22933 */ __asm { ORPD XMM3,XMM0 }
    /* +0xa22937 */ __asm { MOV RCX,RBX }
    /* +0xa2293a */ __asm { CALL RDI }
    /* +0xa2293c */ __asm { MOV RBX,qword ptr [RBP + 0x158] }
    /* +0xa22943 */ __asm { RDTSC }
    /* +0xa22945 */ __asm { SHL RDX,0x20 }
    /* +0xa22949 */ __asm { OR RDX,RAX }
    /* +0xa2294c */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xa22956 */ __asm { IMUL RDX,RAX }
    /* +0xa2295a */ __asm { MOV RCX,-0x22b18422c4a9c65e }
    /* +0xa22964 */ __asm { ADD RCX,RDX }
    /* +0xa22967 */ __asm { MOV RAX,RCX }
    /* +0xa2296a */ __asm { SHR RAX,0x2d }
    /* +0xa2296e */ __asm { MOV R9,RCX }
    /* +0xa22971 */ __asm { SHR R9,0x1b }
    /* +0xa22975 */ __asm { XOR R9D,EAX }
    /* +0xa22978 */ __asm { SHR RCX,0x3b }
    /* +0xa2297c */ __asm { ROR R9D,CL }
    /* +0xa2297f */ __asm { AND R9D,0x3 }
    /* +0xa22983 */ __asm { CMP R9D,0x2 }
    /* +0xa22987 */ __asm { JNC 0x7fffa5192bea }
    /* +0xa2298d */ __asm { CMP R9D,0x1 }
    /* +0xa22991 */ __asm { JNZ 0x7fffa5192f47 }
    /* +0xa22997 */ __asm { MOV R11D,0x3e68b15e }
    /* +0xa2299d */ __asm { IMUL R11D,dword ptr [RBP + 0x354] }
    /* +0xa229a5 */ __asm { ROL R11D,0x6 }
    /* +0xa229a9 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0xa229ad */ __asm { ROL R11D,CL }
    /* +0xa229b0 */ __asm { RDTSC }
    /* +0xa229b2 */ __asm { SHL RDX,0x20 }
    /* +0xa229b6 */ __asm { OR RDX,RAX }
    /* +0xa229b9 */ __asm { MOV RCX,-0x4b061743ec0c107b }
    /* +0xa229c3 */ __asm { IMUL RCX,RDX }
    /* +0xa229c7 */ __asm { MOV RAX,0x384de3987dc7b59a }
    /* +0xa229d1 */ __asm { ADD RCX,RAX }
    /* +0xa229d4 */ __asm { MOV R9,RCX }
    /* +0xa229d7 */ __asm { SHR R9,0x1b }
    /* +0xa229db */ __asm { MOV RAX,RCX }
    /* +0xa229de */ __asm { SHR RAX,0x2d }
    /* +0xa229e2 */ __asm { SHR RCX,0x3b }
    /* +0xa229e6 */ __asm { XOR R9D,EAX }
    /* +0xa229e9 */ __asm { ROR R9D,CL }
    /* +0xa229ec */ __asm { MOV dword ptr [RBP + 0x70],R11D }
    /* +0xa229f0 */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xa229f4 */ __asm { CMP R9D,0x45f50c }
    /* +0xa229fb */ __asm { JA 0x7fffa5192bb1 }
    /* +0xa22a01 */ __asm { MOV R11W,0x422e }
    /* +0xa22a06 */ __asm { XOR R11D,0x4c53 }
    /* +0xa22a0d */ __asm { SUB R11D,dword ptr [RBP + 0x338] }
    /* +0xa22a14 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0xa22a18 */ __asm { ROL R11W,CL }
    /* +0xa22a1c */ __asm { MOVZX R9D,R11W }
    /* +0xa22a20 */ __asm { XOR R9,0x2c4d }
    /* +0xa22a27 */ __asm { MOV RAX,qword ptr GS:[R9] }
    /* +0xa22a2b */ __asm { MOV RDX,0x71b5cfbbb83960f9 }
    /* +0xa22a35 */ __asm { IMUL RDX,qword ptr [RAX + 0x18] }
    /* +0xa22a3a */ __asm { MOV RAX,-0xd345387e }
    /* +0xa22a44 */ __asm { ADD RAX,RDX }
    /* +0xa22a47 */ __asm { MOV RDX,0x184e46232e60b7b9 }
    /* +0xa22a51 */ __asm { CMP RAX,RDX }
    /* +0xa22a54 */ __asm { JNZ 0x7fffa5192a60 }
    /* +0xa22a56 */ __asm { JZ 0x7fffa5192a86 }
    /* +0xa22a58 */ __asm { PUSH RSP }
    /* +0xa22a59 */ __asm { MOV CL,uint8_t ptr [RDI + -0x18] }
    /* +0xa22a5c */ __asm { PUSH RDI }
    /* +0xa22a5d */ __asm { JRCXZ 0x7fffa5192ac8 }
    /* +0xa22a60 */ __asm { MOV ECX,0x78680232 }
    /* +0xa22a65 */ __asm { MOV RAX,0x379e6c439051d9bb }
    /* +0xa22a6f */ __asm { CMP RCX,RAX }
    /* +0xa22a72 */ __asm { JZ 0x7fffa5193331 }
    /* +0xa22a78 */ __asm { MOV R10,qword ptr [RCX + 0x795fdd6] }
    /* +0xa22a7f */ __asm { MOV RAX,R10 }
    /* +0xa22a82 */ __asm { MOV RDX,-0x2c53fde0aa6104ef }
    /* +0xa22a8c */ __asm { MUL RDX }
    /* +0xa22a8f */ __asm { MOV R11,RDX }
    /* +0xa22a92 */ __asm { MOV EDX,0x146ba3f }
    /* +0xa22a97 */ __asm { MOV RAX,R10 }
    /* +0xa22a9a */ __asm { MUL RDX }
    /* +0xa22a9d */ __asm { ADD RAX,R11 }
    /* +0xa22aa0 */ __asm { ADC RDX,0x0 }
    /* +0xa22aa4 */ __asm { TEST DL,0x1 }
    /* +0xa22aa7 */ __asm { JZ 0x7fffa5192bb1 }
    /* +0xa22aad */ __asm { XORPD XMM4,XMM4 }
    /* +0xa22ab1 */ __asm { MOVAPD xmmword ptr [RBP + 0x70],XMM4 }
    /* +0xa22ab6 */ __asm { MOV dword ptr [RBP + 0x10],0x5d60eca8 }
    /* +0xa22abd */ __asm { MOV R11D,dword ptr [RBP + 0x10] }
    /* +0xa22ac1 */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0xa22ac8 */ __asm { MOV dword ptr [RBP + 0x10],0x9dc79f6f }
    /* +0xa22acf */ __asm { MOV R11D,dword ptr [RBP + 0x10] }
    /* +0xa22ad3 */ __asm { MOV dword ptr [RBP + 0x10],0x4804 }
    /* +0xa22ada */ __asm { MOV R11D,dword ptr [RBP + 0x10] }
    /* +0xa22ade */ __asm { TEST R11D,R11D }
    /* +0xa22ae1 */ __asm { JS 0x7fffa5193339 }
    /* +0xa22ae7 */ __asm { PUSHFQ }
    /* +0xa22ae8 */ __asm { POP RAX }
    /* +0xa22ae9 */ __asm { TEST EAX,0x100 }
    /* +0xa22aee */ __asm { NOP }
    /* +0xa22aef */ __asm { NOP }
    /* +0xa22af0 */ __asm { NOP }
    /* +0xa22af1 */ __asm { NOP }
    /* +0xa22af2 */ __asm { NOP }
    /* +0xa22af3 */ __asm { NOP }
    /* +0xa22af4 */ __asm { LEA R8,[0x7fffa4785a40] }
    /* +0xa22afb */ __asm { MOV RAX,-0x6802971a80056906 }
    /* +0xa22b05 */ __asm { CMP R8,RAX }
    /* +0xa22b08 */ __asm { JZ 0x7fffa5193341 }
    /* +0xa22b0e */ __asm { MOV R11W,0xa9b5 }
    /* +0xa22b13 */ __asm { MOVD XMM4,R11D }
    /* +0xa22b18 */ __asm { MOV R10D,0x85fd48aa }
    /* +0xa22b1e */ __asm { MOVD XMM5,R14D }
    /* +0xa22b23 */ __asm { MOV R11W,0xd799 }
    /* +0xa22b28 */ __asm { ADD R11D,0xfffff9e0 }
    /* +0xa22b2f */ __asm { IMUL R11D,dword ptr [RBP + 0x2e8] }
    /* +0xa22b37 */ __asm { PMULLW XMM5,XMM4 }
    /* +0xa22b3b */ __asm { MOVD R9D,XMM5 }
    /* +0xa22b40 */ __asm { ROL R9W,0xb }
    /* +0xa22b45 */ __asm { XOR R9D,0xa92f }
    /* +0xa22b4c */ __asm { MOVZX R9D,R9W }
    /* +0xa22b50 */ __asm { ADD R10D,0x7feab864 }
    /* +0xa22b57 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0xa22b5b */ __asm { XOR R10D,ECX }
    /* +0xa22b5e */ __asm { IMUL R10D,dword ptr [RBP + 0x354] }
    /* +0xa22b66 */ __asm { ADD R10D,0x5530575b }
    /* +0xa22b6d */ __asm { ROR R11W,CL }
    /* +0xa22b71 */ __asm { MOVSXD RAX,R10D }
    /* +0xa22b74 */ __asm { MOV qword ptr [RBP + 0x10],RDX }
    /* +0xa22b78 */ __asm { MOV EAX,dword ptr [R8 + RAX*0x1 + 0x128] }
    /* +0xa22b80 */ __asm { MOV R8D,0xb372aa65 }
    /* +0xa22b86 */ __asm { SUB R8D,ECX }
    /* +0xa22b89 */ __asm { ADD R8D,0x61a1e9ac }
    /* +0xa22b90 */ __asm { MOV RCX,qword ptr [RBP + 0x338] }
    /* +0xa22b97 */ __asm { ROL R8D,CL }
    /* +0xa22b9a */ __asm { NOT R11D }
    /* +0xa22b9d */ __asm { MOVZX EDX,R11W }
    /* +0xa22ba1 */ __asm { ADD R8D,0xe86c9786 }
    /* +0xa22ba8 */ __asm { MOVSXD R10,R8D }
    /* +0xa22bab */ __asm { LEA R8,[RBP + 0x70] }
    /* +0xa22baf */ __asm { SYSCALL }
    /* +0xa22bb1 */ __asm { LEA RCX,[0x7fffa477e8da] }
    /* +0xa22bb8 */ __asm { MOV RAX,-0x85df4577ba5ab3d }
    /* +0xa22bc2 */ __asm { CMP RCX,RAX }
    /* +0xa22bc5 */ __asm { JZ 0x7fffa519334b }
    /* +0xa22bcb */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xa22bd2 */ __asm { MOV R8,0x0 }
    /* +0xa22bd9 */ __asm { NOP }
    /* +0xa22bdb */ __asm { MOV qword ptr [RBP + 0x70],R8 }
    /* +0xa22bdf */ __asm { MOV EAX,dword ptr [RCX + 0x5d56] }
    /* +0xa22be5 */ __asm { JMP 0x7fffa5193396 }
    /* +0xa22bea */ __asm { CMP R9D,0x3 }
    /* +0xa22bee */ __asm { JNZ 0x7fffa519301e }
    /* +0xa22bf4 */ __asm { MOV ECX,0x352fa58a }
    /* +0xa22bf9 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xa22c00 */ __asm { NOP }
    /* +0xa22c02 */ __asm { MOV R8,0x0 }
    /* +0xa22c09 */ __asm { MOV RAX,0x376206c3e2f90026 }
    /* +0xa22c13 */ __asm { CMP RCX,RAX }
    /* +0xa22c16 */ __asm { JZ 0x7fffa5193362 }
    /* +0xa22c1c */ __asm { TEST uint8_t ptr [RCX + 0x4ace5cb6],0x1 }
    /* +0xa22c23 */ __asm { JZ 0x7fffa5193372 }
    /* +0xa22c29 */ __asm { RDTSC }
    /* +0xa22c2b */ __asm { SHL RDX,0x20 }
    /* +0xa22c2f */ __asm { OR RDX,RAX }
    /* +0xa22c32 */ __asm { MOV RAX,0x5851f42d4c957f2d }
    /* +0xa22c3c */ __asm { IMUL RAX,RDX }
    /* +0xa22c40 */ __asm { MOV RCX,-0x1e318348ee6a8776 }
    /* +0xa22c4a */ __asm { ADD RCX,RAX }
    /* +0xa22c4d */ __asm { MOV R9,RCX }
    /* +0xa22c50 */ __asm { SHR R9,0x1b }
    /* +0xa22c54 */ __asm { MOV RAX,RCX }
    /* +0xa22c57 */ __asm { SHR RAX,0x2d }
    /* +0xa22c5b */ __asm { XOR EAX,R9D }
    /* +0xa22c5e */ __asm { SHR RCX,0x3b }
    /* +0xa22c62 */ __asm { ROR EAX,CL }
    /* +0xa22c64 */ __asm { MOV dword ptr [RBP + 0x70],0x8300d4e8 }
    /* +0xa22c6b */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xa22c6f */ __asm { CMP EAX,0x10225c5 }
    /* +0xa22c74 */ __asm { JA 0x7fffa5192eba }
    /* +0xa22c7a */ __asm { PUSHFQ }
    /* +0xa22c7b */ __asm { POP R9 }
    /* +0xa22c7d */ __asm { TEST R9D,0x100 }
    /* +0xa22c84 */ __asm { NOP }
    /* +0xa22c85 */ __asm { NOP }
    /* +0xa22c86 */ __asm { NOP }
    /* +0xa22c87 */ __asm { NOP }
    /* +0xa22c88 */ __asm { NOP }
    /* +0xa22c89 */ __asm { NOP }
    /* +0xa22c8a */ __asm { NOP }
    /* +0xa22c8b */ __asm { NOP }
    /* +0xa22c8c */ __asm { NOP }
    /* +0xa22c8d */ __asm { NOP }
    /* +0xa22c8e */ __asm { NOP }
    /* +0xa22c8f */ __asm { NOP }
    /* +0xa22c90 */ __asm { NOP }
    /* +0xa22c91 */ __asm { NOP }
    /* +0xa22c92 */ __asm { NOP }
    /* +0xa22c93 */ __asm { NOP }
    /* +0xa22c94 */ __asm { NOP }
    /* +0xa22eba */ __asm { LEA RCX,[0x7fffa4782521] }
    /* +0xa22ec1 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0xa22ec8 */ __asm { NOP }
    /* +0xa22eca */ __asm { MOV R8,0x0 }
    /* +0xa22ed1 */ __asm { MOV RAX,0x79db929ddcfcd77c }
    /* +0xa22edb */ __asm { XOR R11D,R11D }
    /* +0xa22ede */ __asm { CMP RCX,RAX }
    /* +0xa22ee1 */ __asm { SETL R11B }
    /* +0xa22ee5 */ __asm { MOV R9D,0xbad5fa8e }
    /* +0xa22eeb */ __asm { MOV RDX,qword ptr [RBP + 0x30] }
    /* +0xa22eef */ __asm { XOR R9D,EDX }
    /* +0xa22ef2 */ __asm { IMUL R9D,R9D,-0x338f2efd }
    /* +0xa22ef9 */ __asm { NOT R9D }
    /* +0xa22efc */ __asm { MOV R10,qword ptr [RBP + 0x338] }
    /* +0xa22f03 */ __asm { ADD R9D,R10D }
    /* +0xa22f06 */ __asm { XOR R8D,R8D }
    /* +0xa22f09 */ __asm { MOV RAX,0x79db929ddcfcd77b }
    /* +0xa22f13 */ __asm { CMP RCX,RAX }
    /* +0xa22f16 */ __asm { SETZ R8B }
    /* +0xa22f1a */ __asm { MOV EAX,0xca040138 }
    /* +0xa22f1f */ __asm { ADD EAX,R10D }
    /* +0xa22f22 */ __asm { ROL EAX,0x9 }
    /* +0xa22f25 */ __asm { SUB EAX,EDX }
    /* +0xa22f27 */ __asm { CMP RAX,R9 }
    /* +0xa22f2a */ __asm { CMOVBE R8D,R11D }
    /* +0xa22f2e */ __asm { CMP R8B,0x1 }
    /* +0xa22f32 */ __asm { JZ 0x7fffa51934c6 }
    /* +0xa22f38 */ __asm { MOV qword ptr [RBP + 0x70],R8 }
    /* +0xa22f3c */ __asm { MOV EAX,dword ptr [RCX + 0x293b] }
    /* +0xa22f42 */ __asm { JMP 0x7fffa5193396 }
    /* +0xa22f47 */ __asm { MOV RAX,0x3cedc372b181edc9 }
    /* +0xa22f51 */ __asm { ADD RAX,0x34a8465e }
    /* +0xa22f57 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0xa22f5b */ __asm { ROR RAX,CL }
    /* +0xa22f5e */ __asm { MOV R10D,0xe1f38b47 }
    /* +0xa22f64 */ __asm { IMUL R10,RAX }
    /* +0xa22f68 */ __asm { MOV EDX,0x1b7d3afb }
    /* +0xa22f6d */ __asm { MOV RCX,RDX }
    /* +0xa22f70 */ __asm { XOR RCX,R10 }
    /* +0xa22f73 */ __asm { CMP RCX,-0x1 }
    /* +0xa22f77 */ __asm { NOP }
    /* +0xa22f78 */ __asm { NOP }
    /* +0xa22f79 */ __asm { NOP }
    /* +0xa22f7a */ __asm { NOP }
    /* +0xa22f7b */ __asm { NOP }
    /* +0xa22f7c */ __asm { NOP }
    /* +0xa22f7d */ __asm { NOP }
    /* +0xa22f7e */ __asm { NOP }
    /* +0xa22f7f */ __asm { NOP }
    /* +0xa22f80 */ __asm { NOP }
    /* +0xa22f81 */ __asm { NOP }
    /* +0xa22f82 */ __asm { MOV R9D,0x9329574e }
    /* +0xa22f88 */ __asm { SUB R9D,dword ptr [RBP + 0x30] }
    /* +0xa22f8c */ __asm { ADD R9D,0x9a85177d }
    /* +0xa22f93 */ __asm { MOV RCX,qword ptr [RBP + 0x338] }
    /* +0xa22f9a */ __asm { ROL R9D,CL }
    /* +0xa22f9d */ __asm { MOV R9D,dword ptr [R9 + RDX*0x1 + 0x2c4] }
    /* +0xa22fa5 */ __asm { MOV RAX,0x5555555555555556 }
    /* +0xa22faf */ __asm { IMUL R9,RAX }
    /* +0xa22fb3 */ __asm { MOV RAX,0x5555555555555555 }
    /* +0xa22fbd */ __asm { CMP R9,RAX }
    /* +0xa22fc0 */ __asm { JBE 0x7fffa5193046 }
    /* +0xa22fc6 */ __asm { LEA RDX,[0x7fffa47bac18] }
    /* +0xa22fcd */ __asm { MOV RCX,RDX }
    /* +0xa22fd0 */ __asm { ROL RCX,0x35 }
    /* +0xa22fd4 */ __asm { XOR RCX,-0xd5ad507 }
    /* +0xa22fdb */ __asm { MOV RAX,-0x171b374b742674a3 }
    /* +0xa22fe5 */ __asm { CMP RCX,RAX }
    /* +0xa22fe8 */ __asm { NOP }
    /* +0xa22fe9 */ __asm { NOP }
    /* +0xa22fea */ __asm { NOP }
    /* +0xa22feb */ __asm { NOP }
    /* +0xa22fec */ __asm { NOP }
    /* +0xa22fed */ __asm { NOP }
    /* +0xa22fee */ __asm { NOP }
    /* +0xa22fef */ __asm { NOP }
    /* +0xa22ff0 */ __asm { NOP }
    /* +0xa22ff1 */ __asm { NOP }
    /* +0xa22ff2 */ __asm { NOP }
    /* +0xa22ff3 */ __asm { NOP }
    /* +0xa22ff4 */ __asm { NOP }
    /* +0xa22ff5 */ __asm { NOP }
    /* +0xa22ff6 */ __asm { MOV R11D,0x73c6a839 }
    /* +0xa22ffc */ __asm { MOV R9D,0xa1ac1580 }
    /* +0xa23002 */ __asm { SUB R9D,R11D }
    /* +0xa23005 */ __asm { XOR R9D,dword ptr [RBP + 0x30] }
    /* +0xa23009 */ __asm { ROL R9D,0xa }
    /* +0xa2300d */ __asm { MOV qword ptr [RBP + 0x70],RCX }
    /* +0xa23011 */ __asm { MOV EAX,dword ptr [R9 + RDX*0x1 + 0xd8] }
    /* +0xa23019 */ __asm { JMP 0x7fffa5193396 }
    /* +0xa2301e */ __asm { LEA RCX,[0x7fffa47c02c0] }
    /* +0xa23025 */ __asm { MOV RAX,0x694b81c64312f7e5 }
    /* +0xa2302f */ __asm { CMP RCX,RAX }
    /* +0xa23032 */ __asm { NOP }
    /* +0xa23033 */ __asm { NOP }
    /* +0xa23034 */ __asm { NOP }
    /* +0xa23035 */ __asm { NOP }
    /* +0xa23036 */ __asm { NOP }
    /* +0xa23037 */ __asm { MOV qword ptr [RBP + 0x70],R8 }
    /* +0xa2303b */ __asm { MOV EAX,dword ptr [RCX + -0x3288] }
    /* +0xa23041 */ __asm { JMP 0x7fffa5193396 }
    /* +0xa23046 */ __asm { RDTSC }
    /* +0xa23048 */ __asm { SHL RDX,0x20 }
    /* +0xa2304c */ __asm { OR RDX,RAX }
    /* +0xa2304f */ __asm { MOV RCX,-0x83d143f70980d4b }
    /* +0xa23059 */ __asm { IMUL RCX,RDX }
    /* +0xa2305d */ __asm { MOV RAX,-0x168ae74f204f33ce }
    /* +0xa23067 */ __asm { ADD RCX,RAX }
    /* +0xa2306a */ __asm { MOV RAX,RCX }
    /* +0xa2306d */ __asm { SHR RAX,0x1b }
    /* +0xa23071 */ __asm { MOV R9,RCX }
    /* +0xa23074 */ __asm { SHR R9,0x2d }
    /* +0xa23078 */ __asm { XOR R9D,EAX }
    /* +0xa2307b */ __asm { SHR RCX,0x3b }
    /* +0xa2307f */ __asm { ROR R9D,CL }
    /* +0xa23082 */ __asm { MOV dword ptr [RBP + 0x70],0xc }
    /* +0xa23089 */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xa2308d */ __asm { CMP R11D,0x71229cf6 }
    /* +0xa23094 */ __asm { NOP }
    /* +0xa23095 */ __asm { NOP }
    /* +0xa23096 */ __asm { NOP }
    /* +0xa23097 */ __asm { NOP }
    /* +0xa23098 */ __asm { NOP }
    /* +0xa23099 */ __asm { NOP }
    /* +0xa2309a */ __asm { NOP }
    /* +0xa2309b */ __asm { NOP }
    /* +0xa2309c */ __asm { NOP }
    /* +0xa2309d */ __asm { NOP }
    /* +0xa2309e */ __asm { NOP }
    /* +0xa2309f */ __asm { NOP }
    /* +0xa230a0 */ __asm { NOP }
    /* +0xa230a1 */ __asm { PUSHFQ }
    /* +0xa230a2 */ __asm { POP RAX }
    /* +0xa230a3 */ __asm { TEST EAX,0x100 }
    /* +0xa230a8 */ __asm { NOP }
    /* +0xa230a9 */ __asm { NOP }
    /* +0xa230aa */ __asm { NOP }
    /* +0xa230ab */ __asm { NOP }
    /* +0xa230ac */ __asm { NOP }
    /* +0xa230ad */ __asm { NOP }
    /* +0xa230ae */ __asm { NOP }
    /* +0xa230af */ __asm { NOP }
    /* +0xa230b0 */ __asm { NOP }
    /* +0xa230b1 */ __asm { NOP }
    /* +0xa230b2 */ __asm { NOP }
    /* +0xa230b3 */ __asm { NOP }
    /* +0xa230b4 */ __asm { NOP }
    /* +0xa230b5 */ __asm { NOP }
    /* +0xa230b6 */ __asm { NOP }
    /* +0xa230b7 */ __asm { NOP }
    /* +0xa230b8 */ __asm { NOP }
    /* +0xa230f1 */ __asm { LEA RCX,[0x7fffa47bfd93] }
    /* +0xa230f8 */ __asm { PUSHFQ }
    /* +0xa230f9 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa23101 */ __asm { POPFQ }
    /* +0xa23102 */ __asm { MOV R8,RCX }
    /* +0xa23105 */ __asm { ROL R8,0x2f }
    /* +0xa23109 */ __asm { ADD R8,-0x42254887 }
    /* +0xa23110 */ __asm { XOR R8,-0x7ea656bb }
    /* +0xa23117 */ __asm { MOV RDX,-0x5d0f2791a94a4842 }
    /* +0xa23121 */ __asm { CMP R8,RDX }
    /* +0xa23124 */ __asm { NOP }
    /* +0xa23125 */ __asm { NOP }
    /* +0xa23126 */ __asm { NOP }
    /* +0xa23127 */ __asm { NOP }
    /* +0xa23128 */ __asm { NOP }
    /* +0xa23129 */ __asm { NOP }
    /* +0xa2312a */ __asm { NOP }
    /* +0xa2312b */ __asm { MOVZX R9D,uint8_t ptr [RCX + -0x364a] }
    /* +0xa23133 */ __asm { MOVZX R11D,uint8_t ptr [RCX + R9*0x4 + -0x3644] }
    /* +0xa2313c */ __asm { NOT R11B }
    /* +0xa2313f */ __asm { ROL R11B,0x5 }
    /* +0xa23143 */ __asm { MOV uint8_t ptr [RBP + 0x70],R11B }
    /* +0xa23147 */ __asm { MOVZX R11D,uint8_t ptr [RCX + R9*0x4 + -0x3643] }
    /* +0xa23150 */ __asm { NOT R11B }
    /* +0xa23153 */ __asm { ROL R11B,0x5 }
    /* +0xa23157 */ __asm { MOV uint8_t ptr [RBP + 0x71],R11B }
    /* +0xa2315b */ __asm { MOVZX R11D,uint8_t ptr [RCX + R9*0x4 + -0x3642] }
    /* +0xa23164 */ __asm { NOT R11B }
    /* +0xa23167 */ __asm { ROL R11B,0x5 }
    /* +0xa2316b */ __asm { MOV uint8_t ptr [RBP + 0x72],R11B }
    /* +0xa2316f */ __asm { MOVZX R11D,uint8_t ptr [RCX + R9*0x4 + -0x3641] }
    /* +0xa23178 */ __asm { NOT R11B }
    /* +0xa2317b */ __asm { ROL R11B,0x5 }
    /* +0xa2317f */ __asm { MOV uint8_t ptr [RBP + 0x73],R11B }
    /* +0xa23183 */ __asm { MOV R11D,0x9102c3cc }
    /* +0xa23189 */ __asm { XOR R11D,dword ptr [RBP + 0x70] }
    /* +0xa2318d */ __asm { BT R11D,R11D }
    /* +0xa23191 */ __asm { JNC 0x7fffa51932d6 }
    /* +0xa23197 */ __asm { XORPD XMM4,XMM4 }
    /* +0xa2319b */ __asm { MOVAPD xmmword ptr [RBP + 0x70],XMM4 }
    /* +0xa231a0 */ __asm { MOV dword ptr [RBP + 0x10],0xefbcff96 }
    /* +0xa231a7 */ __asm { MOV R11D,dword ptr [RBP + 0x10] }
    /* +0xa231ab */ __asm { TEST R11B,0x1 }
    /* +0xa231af */ __asm { JNZ 0x7fffa51934d6 }
    /* +0xa231b5 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xa231bc */ __asm { MOV RCX,0x0 }
    /* +0xa231c3 */ __asm { NOP }
    /* +0xa231c4 */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0xa231cb */ __asm { TEST EAX,0x100 }
    /* +0xa231d0 */ __asm { JZ 0x7fffa51931df }
    /* +0xa231d2 */ __asm { OR dword ptr [RDX],EBX }
}


// ============================================================================
// Function : Unwind@7fffa5193500  |  RVA: 0xa23500  |  Size: 4267 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa5193500(void) {
    /* +0xa23500 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xa23505 */ __asm { PUSH RBP }
    /* +0xa23506 */ __asm { PUSH RDI }
    /* +0xa23507 */ __asm { PUSH R15 }
    /* +0xa23509 */ __asm { PUSH R12 }
    /* +0xa2350b */ __asm { PUSH R13 }
    /* +0xa2350d */ __asm { PUSH RBX }
    /* +0xa2350e */ __asm { PUSH RSI }
    /* +0xa2350f */ __asm { PUSH R14 }
    /* +0xa23511 */ __asm { SUB RSP,0xd8 }
    /* +0xa23518 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xa2351f */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM11 }
    /* +0xa23525 */ __asm { MOVAPS xmmword ptr [RSP + 0x40],XMM8 }
    /* +0xa2352b */ __asm { MOVAPS xmmword ptr [RSP + 0x50],XMM13 }
    /* +0xa23531 */ __asm { MOVAPS xmmword ptr [RSP + 0x60],XMM6 }
    /* +0xa23536 */ __asm { MOVAPS xmmword ptr [RSP + 0x70],XMM10 }
    /* +0xa2353c */ __asm { MOVAPS xmmword ptr [RSP + 0x80],XMM9 }
    /* +0xa23545 */ __asm { MOVAPS xmmword ptr [RSP + 0x90],XMM14 }
    /* +0xa2354e */ __asm { MOVAPS xmmword ptr [RSP + 0xa0],XMM7 }
    /* +0xa23556 */ __asm { MOVAPS xmmword ptr [RSP + 0xb0],XMM12 }
    /* +0xa2355f */ __asm { MOVAPS xmmword ptr [RSP + 0xc0],XMM15 }
    /* +0xa23568 */ __asm { LEA RAX,[RBP + 0x180] }
    /* +0xa2356f */ __asm { MOV RDX,RAX }
    /* +0xa23572 */ __asm { SHR RDX,0x3b }
    /* +0xa23576 */ __asm { XOR RDX,RAX }
    /* +0xa23579 */ __asm { MOV R10,RDX }
    /* +0xa2357c */ __asm { ROL R10,0x1d }
    /* +0xa23580 */ __asm { MOV R11W,0x4797 }
    /* +0xa23585 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0xa23589 */ __asm { MOVD XMM4,ECX }
    /* +0xa2358d */ __asm { LEA R8,[0x7fffa55f9782] }
    /* +0xa23594 */ __asm { MOV R14D,ECX }
    /* +0xa23597 */ __asm { OR R14D,0x1 }
    /* +0xa2359b */ __asm { IMUL R11D,R14D }
    /* +0xa2359f */ __asm { MOV RDI,qword ptr [RBP + 0x338] }
    /* +0xa235a6 */ __asm { XOR R11D,EDI }
    /* +0xa235a9 */ __asm { MOV R9W,0x6f3b }
    /* +0xa235ae */ __asm { IMUL R9D,R9D,0x760f }
    /* +0xa235b5 */ __asm { MOVD XMM5,R9D }
    /* +0xa235ba */ __asm { PSUBW XMM5,XMM4 }
    /* +0xa235be */ __asm { MOVD R9D,XMM5 }
    /* +0xa235c3 */ __asm { ADD R9D,0x5aa5 }
    /* +0xa235ca */ __asm { XOR R9D,EDI }
    /* +0xa235cd */ __asm { MOVSX RAX,R9W }
    /* +0xa235d1 */ __asm { ADD RAX,R8 }
    /* +0xa235d4 */ __asm { ROL R11W,0x1 }
    /* +0xa235d8 */ __asm { MOVZX EBX,R11W }
    /* +0xa235dc */ __asm { MOV R11,RDX }
    /* +0xa235df */ __asm { ROL R11,0x2b }
    /* +0xa235e3 */ __asm { XOR R11,R10 }
    /* +0xa235e6 */ __asm { XOR R11,RDX }
    /* +0xa235e9 */ __asm { MOV RDX,R11 }
    /* +0xa235ec */ __asm { SHL RDX,0x1f }
    /* +0xa235f0 */ __asm { SUB R11,RDX }
    /* +0xa235f3 */ __asm { MOVQ XMM4,R11 }
    /* +0xa235f8 */ __asm { PSHUFD XMM3,XMM4,0x44 }
    /* +0xa235fd */ __asm { MOVDQA XMM5,XMM4 }
    /* +0xa23601 */ __asm { PSRLQ XMM5,0xf }
    /* +0xa23606 */ __asm { MOVDQA XMM0,XMM3 }
    /* +0xa2360a */ __asm { PSRLQ XMM0,0x35 }
    /* +0xa2360f */ __asm { MOVSD XMM0,XMM5 }
    /* +0xa23613 */ __asm { PSLLQ XMM4,0x31 }
    /* +0xa23618 */ __asm { PSLLQ XMM3,0xb }
    /* +0xa2361d */ __asm { MOVSD XMM3,XMM4 }
    /* +0xa23621 */ __asm { ORPD XMM3,XMM0 }
    /* +0xa23625 */ __asm { MOV R13D,ECX }
    /* +0xa23628 */ __asm { MOV ECX,0xe8dce167 }
    /* +0xa2362d */ __asm { ADD ECX,0x492ea951 }
    /* +0xa23633 */ __asm { ROL ECX,0x5 }
    /* +0xa23636 */ __asm { OR R13D,0x1 }
    /* +0xa2363a */ __asm { SUB ECX,EDI }
    /* +0xa2363c */ __asm { IMUL ECX,R13D }
    /* +0xa23640 */ __asm { CALL RAX }
    /* +0xa23642 */ __asm { MOV RAX,qword ptr GS:[RBX] }
    /* +0xa23646 */ __asm { MOV RDX,0x6ac17a5b103a243 }
    /* +0xa23650 */ __asm { CMP qword ptr [RAX + 0x30],RDX }
    /* +0xa23654 */ __asm { NOP }
    /* +0xa23655 */ __asm { NOP }
    /* +0xa23656 */ __asm { NOP }
    /* +0xa23657 */ __asm { NOP }
    /* +0xa23658 */ __asm { NOP }
    /* +0xa23659 */ __asm { MOV RBX,qword ptr [RBP + 0x38] }
    /* +0xa2365d */ __asm { MOV R9W,0x1939 }
    /* +0xa23662 */ __asm { MOV RAX,qword ptr [RBP + 0x2e8] }
    /* +0xa23669 */ __asm { MOV R11D,EAX }
    /* +0xa2366c */ __asm { IMUL R11D,R9D }
    /* +0xa23670 */ __asm { ROL R11W,0x5 }
    /* +0xa23675 */ __asm { RDTSC }
    /* +0xa23677 */ __asm { SHL RDX,0x20 }
    /* +0xa2367b */ __asm { OR RDX,RAX }
    /* +0xa2367e */ __asm { MOV R9D,0xffffbdfd }
    /* +0xa23684 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xa2368e */ __asm { IMUL RDX,RAX }
    /* +0xa23692 */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xa2369c */ __asm { ADD RDX,RAX }
    /* +0xa2369f */ __asm { MOV RAX,RDX }
    /* +0xa236a2 */ __asm { SHR RAX,0x2d }
    /* +0xa236a6 */ __asm { MOV RCX,RDX }
    /* +0xa236a9 */ __asm { SHR RCX,0x3b }
    /* +0xa236ad */ __asm { SHR RDX,0x1b }
    /* +0xa236b1 */ __asm { XOR EDX,EAX }
    /* +0xa236b3 */ __asm { ROR EDX,CL }
    /* +0xa236b5 */ __asm { SUB R9D,R11D }
    /* +0xa236b8 */ __asm { MOVZX R11D,R9W }
    /* +0xa236bc */ __asm { AND EDX,0x3 }
    /* +0xa236bf */ __asm { CMP EDX,R11D }
    /* +0xa236c2 */ __asm { JC 0x7fffa5193982 }
    /* +0xa236c8 */ __asm { CMP EDX,0x3 }
    /* +0xa236cb */ __asm { JZ 0x7fffa5193cc2 }
    /* +0xa236d1 */ __asm { MOV ECX,0x48dc19f1 }
    /* +0xa236d6 */ __asm { MOV RAX,-0x4ee356805358b34c }
    /* +0xa236e0 */ __asm { CMP RCX,RAX }
    /* +0xa236e3 */ __asm { NOP }
    /* +0xa236e4 */ __asm { NOP }
    /* +0xa236e5 */ __asm { NOP }
    /* +0xa236e6 */ __asm { NOP }
    /* +0xa236e7 */ __asm { NOP }
    /* +0xa236e8 */ __asm { MOVZX R11D,uint8_t ptr [RCX + 0x3721e84f] }
    /* +0xa236f0 */ __asm { RDTSC }
    /* +0xa236f2 */ __asm { SHL RDX,0x20 }
    /* +0xa236f6 */ __asm { OR RDX,RAX }
    /* +0xa236f9 */ __asm { TEST R11B,0x1 }
    /* +0xa236fd */ __asm { JNZ 0x7fffa5193f9e }
    /* +0xa23703 */ __asm { MOV RAX,-0x583f2dd720db9bdb }
    /* +0xa2370d */ __asm { IMUL RDX,RAX }
    /* +0xa23711 */ __asm { MOV RCX,0x503715872a83f1e2 }
    /* +0xa2371b */ __asm { ADD RCX,RDX }
    /* +0xa2371e */ __asm { MOV RAX,RCX }
    /* +0xa23721 */ __asm { SHR RAX,0x1b }
    /* +0xa23725 */ __asm { MOV R9,RCX }
    /* +0xa23728 */ __asm { SHR R9,0x2d }
    /* +0xa2372c */ __asm { XOR R9D,EAX }
    /* +0xa2372f */ __asm { SHR RCX,0x3b }
    /* +0xa23733 */ __asm { ROR R9D,CL }
    /* +0xa23736 */ __asm { MOV R11W,0xaabf }
    /* +0xa2373b */ __asm { MOV R10,qword ptr [RBP + 0x30] }
    /* +0xa2373f */ __asm { ADD R11D,R10D }
    /* +0xa23742 */ __asm { MOV RCX,qword ptr [RBP + 0x338] }
    /* +0xa23749 */ __asm { ROR R11W,CL }
    /* +0xa2374d */ __asm { ROL R11W,0x1 }
    /* +0xa23751 */ __asm { MOVZX EAX,R11W }
    /* +0xa23755 */ __asm { MOV RAX,qword ptr GS:[RAX] }
    /* +0xa23759 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0xa2375d */ __asm { MOV R8,-0x61eec43a9e9165a9 }
    /* +0xa23767 */ __asm { ADD R8,RAX }
    /* +0xa2376a */ __asm { MOV RAX,-0x7ae8b9d192245f06 }
    /* +0xa23774 */ __asm { XOR RAX,RCX }
    /* +0xa23777 */ __asm { NOT RAX }
    /* +0xa2377a */ __asm { MOV ECX,R10D }
    /* +0xa2377d */ __asm { ROL RAX,CL }
    /* +0xa23780 */ __asm { CMP R8,RAX }
    /* +0xa23783 */ __asm { NOP }
    /* +0xa23784 */ __asm { NOP }
    /* +0xa23785 */ __asm { NOP }
    /* +0xa23786 */ __asm { NOP }
    /* +0xa23787 */ __asm { NOP }
    /* +0xa23788 */ __asm { NOP }
    /* +0xa23789 */ __asm { NOP }
    /* +0xa2378a */ __asm { NOP }
    /* +0xa2378b */ __asm { NOP }
    /* +0xa2378c */ __asm { NOP }
    /* +0xa2378d */ __asm { NOP }
    /* +0xa2378e */ __asm { NOP }
    /* +0xa2378f */ __asm { CMP R9D,0x102ab17 }
    /* +0xa23796 */ __asm { JA 0x7fffa5193959 }
    /* +0xa2379c */ __asm { MOV dword ptr [RBP + 0x70],0x2eefbd59 }
    /* +0xa237a3 */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xa237a7 */ __asm { MOV R9W,0x8e03 }
    /* +0xa237ac */ __asm { ADD R9D,0xffffa48e }
    /* +0xa237b3 */ __asm { MOV RCX,qword ptr [RBP + 0x338] }
    /* +0xa237ba */ __asm { ROR R9W,CL }
    /* +0xa237be */ __asm { AND R11D,0x1 }
    /* +0xa237c2 */ __asm { IMUL R9D,R9D,0x3ad }
    /* +0xa237c9 */ __asm { SUB R9D,dword ptr [RBP + 0x30] }
    /* +0xa237cd */ __asm { MOVZX R9D,R9W }
    /* +0xa237d1 */ __asm { CMP R11D,R9D }
    /* +0xa237d4 */ __asm { NOP }
    /* +0xa237d5 */ __asm { NOP }
    /* +0xa237d6 */ __asm { NOP }
    /* +0xa237d7 */ __asm { NOP }
    /* +0xa237d8 */ __asm { NOP }
    /* +0xa237d9 */ __asm { NOP }
    /* +0xa237da */ __asm { MOV RAX,-0x154514b26ee6e342 }
    /* +0xa237e4 */ __asm { IMUL RAX,RAX,-0x83942dd }
    /* +0xa237eb */ __asm { MOV RCX,qword ptr [RBP + 0x338] }
    /* +0xa237f2 */ __asm { ROR RAX,CL }
    /* +0xa237f5 */ __asm { MOV RDX,-0x4608a18f }
    /* +0xa237fc */ __asm { SUB RDX,RAX }
    /* +0xa237ff */ __asm { MOV ECX,0xb7a67687 }
    /* +0xa23804 */ __asm { CMP RCX,RDX }
    /* +0xa23807 */ __asm { JNZ 0x7fffa519380a }
    /* +0xa23809 */ __asm { CLC }
    /* +0xa2380a */ __asm { CMP dword ptr [RCX + -0x37a872c7],0xd }
    /* +0xa23811 */ __asm { JC 0x7fffa5193959 }
    /* +0xa23817 */ __asm { XORPD XMM4,XMM4 }
    /* +0xa2381b */ __asm { MOVAPD xmmword ptr [RBP + 0x70],XMM4 }
    /* +0xa23820 */ __asm { MOV dword ptr [RBP + 0x10],0x1540bd5 }
    /* +0xa23827 */ __asm { MOV R11D,dword ptr [RBP + 0x10] }
    /* +0xa2382b */ __asm { MOV R11W,0x56c3 }
    /* +0xa23830 */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0xa23837 */ __asm { ADD R11D,dword ptr [RBP + 0x338] }
    /* +0xa2383e */ __asm { MOV R9D,0xffffcf8a }
    /* +0xa23844 */ __asm { SUB R9D,R11D }
    /* +0xa23847 */ __asm { MOVZX R9D,R9W }
    /* +0xa2384b */ __asm { MOV RAX,qword ptr GS:[R9] }
    /* +0xa2384f */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0xa23853 */ __asm { MOV RCX,-0x71abe376eaabb59d }
    /* +0xa2385d */ __asm { AND RCX,RAX }
    /* +0xa23860 */ __asm { MOV RAX,0x725ad0e045fc11fb }
    /* +0xa2386a */ __asm { CMP RCX,RAX }
    /* +0xa2386d */ __asm { JZ 0x7fffa519479e }
    /* +0xa23873 */ __asm { MOV dword ptr [RBP + 0x10],0xeccb22b2 }
    /* +0xa2387a */ __asm { MOV R11D,dword ptr [RBP + 0x10] }
    /* +0xa2387e */ __asm { LEA R8,[0x7fffa47852d3] }
    /* +0xa23885 */ __asm { MOV EAX,0xe3367fbe }
    /* +0xa2388a */ __asm { XOR RAX,R8 }
    /* +0xa2388d */ __asm { ADD RAX,0x56f1a93e }
    /* +0xa23893 */ __asm { MOV RDX,0x2c15be07fc2c212e }
    /* +0xa2389d */ __asm { CMP RAX,RDX }
    /* +0xa238a0 */ __asm { SETNZ R11B }
    /* +0xa238a4 */ __asm { MOV R9D,0xfd505dc9 }
    /* +0xa238aa */ __asm { MOV R10,qword ptr [RBP + 0x338] }
    /* +0xa238b1 */ __asm { XOR R9D,R10D }
    /* +0xa238b4 */ __asm { NOT R9D }
    /* +0xa238b7 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0xa238bb */ __asm { ROL R9D,CL }
    /* +0xa238be */ __asm { MOVSXD RAX,R9D }
    /* +0xa238c1 */ __asm { MOV R9D,0x74eadfd }
    /* +0xa238c7 */ __asm { XOR R9D,R10D }
    /* +0xa238ca */ __asm { XOR R9D,0x2f29e084 }
    /* +0xa238d1 */ __asm { ADD R9D,0x5364751e }
    /* +0xa238d8 */ __asm { CMP R9,RAX }
    /* +0xa238db */ __asm { SBB R11B,0x0 }
    /* +0xa238df */ __asm { JNZ 0x7fffa51947b2 }
    /* +0xa238e5 */ __asm { MOV R9W,0x8b1b }
    /* +0xa238ea */ __asm { MOV R13,qword ptr [RBP + 0x30] }
    /* +0xa238ee */ __asm { XOR R9D,R13D }
    /* +0xa238f1 */ __asm { MOV R11W,0x924f }
    /* +0xa238f6 */ __asm { MOV AX,0x602f }
    /* +0xa238fa */ __asm { MOV R10,qword ptr [RBP + 0x2e8] }
    /* +0xa23901 */ __asm { IMUL R10D,R9D }
    /* +0xa23905 */ __asm { XOR R10D,0x21c9 }
    /* +0xa2390c */ __asm { MOVSX R10,R10W }
    /* +0xa23910 */ __asm { MOV RCX,qword ptr [RBP + 0x338] }
    /* +0xa23917 */ __asm { LEA R9D,[RCX + RAX*0x1] }
    /* +0xa2391b */ __asm { ADD R9D,0x3688 }
    /* +0xa23922 */ __asm { MOV EAX,R14D }
    /* +0xa23925 */ __asm { IMUL EAX,R9D }
    /* +0xa23929 */ __asm { XOR EAX,0x9cb6 }
    /* +0xa2392e */ __asm { ADD R11D,0xffff9aaa }
    /* +0xa23935 */ __asm { ROL R11W,CL }
    /* +0xa23939 */ __asm { MOVZX EDX,AX }
    /* +0xa2393c */ __asm { ROL R11W,0x5 }
    /* +0xa23941 */ __asm { ADD R11D,R13D }
    /* +0xa23944 */ __asm { MOVZX R9D,R11W }
    /* +0xa23948 */ __asm { MOV qword ptr [RBP + 0x10],RCX }
    /* +0xa2394c */ __asm { MOV EAX,dword ptr [R8 + -0x447] }
    /* +0xa23953 */ __asm { LEA R8,[RBP + 0x70] }
    /* +0xa23957 */ __asm { SYSCALL }
    /* +0xa23959 */ __asm { LEA RCX,[0x7fffa478a973] }
    /* +0xa23960 */ __asm { MOV RAX,0x65a15625e5159b60 }
    /* +0xa2396a */ __asm { CMP RCX,RAX }
    /* +0xa2396d */ __asm { JZ 0x7fffa51947c9 }
    /* +0xa23973 */ __asm { MOV qword ptr [RBP + 0x70],R8 }
    /* +0xa23977 */ __asm { MOV EAX,dword ptr [RCX + -0x6343] }
    /* +0xa2397d */ __asm { JMP 0x7fffa51944b2 }
    /* +0xa23982 */ __asm { CMP EDX,0x1 }
    /* +0xa23985 */ __asm { JNZ 0x7fffa5193def }
    /* +0xa2398b */ __asm { MOV R8D,0x44efecf3 }
    /* +0xa23991 */ __asm { MOV RAX,0x16e70b83b9d4364b }
    /* +0xa2399b */ __asm { CMP R8,RAX }
    /* +0xa2399e */ __asm { JZ 0x7fffa51947d1 }
    /* +0xa239a4 */ __asm { MOV R9D,0x495968a }
    /* +0xa239aa */ __asm { IMUL R9D,R13D }
    /* +0xa239ae */ __asm { MOV RCX,qword ptr [RBP + 0x338] }
    /* +0xa239b5 */ __asm { ROR R9D,CL }
    /* +0xa239b8 */ __asm { ROL R9D,0x8 }
    /* +0xa239bc */ __asm { MOV ECX,0x8a05e518 }
    /* +0xa239c1 */ __asm { XOR RCX,R9 }
    /* +0xa239c4 */ __asm { TEST uint8_t ptr [R8 + RCX*0x1 + 0x240],0x1 }
    /* +0xa239cd */ __asm { JZ 0x7fffa5194254 }
    /* +0xa239d3 */ __asm { RDTSC }
    /* +0xa239d5 */ __asm { SHL RDX,0x20 }
    /* +0xa239d9 */ __asm { OR RDX,RAX }
    /* +0xa239dc */ __asm { MOV R8,qword ptr [RBP + 0x338] }
    /* +0xa239e3 */ __asm { MOV R9,R8 }
    /* +0xa239e6 */ __asm { OR R9,0x1 }
    /* +0xa239ea */ __asm { MOV RAX,0x5e96de5c3bb20e36 }
    /* +0xa239f4 */ __asm { IMUL RAX,R9 }
    /* +0xa239f8 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0xa239fc */ __asm { ROL RAX,CL }
    /* +0xa239ff */ __asm { MOV R10,0x7facc0f7a00541bd }
    /* +0xa23a09 */ __asm { IMUL RDX,R10 }
    /* +0xa23a0d */ __asm { LEA R9,[RDX + RAX*0x1] }
    /* +0xa23a11 */ __asm { ADD R9,0x1b33a08e }
    /* +0xa23a18 */ __asm { MOV RAX,R9 }
    /* +0xa23a1b */ __asm { SHR RAX,0x1b }
    /* +0xa23a1f */ __asm { MOV RCX,R9 }
    /* +0xa23a22 */ __asm { SHR RCX,0x3b }
    /* +0xa23a26 */ __asm { SHR R9,0x2d }
    /* +0xa23a2a */ __asm { XOR EAX,R9D }
    /* +0xa23a2d */ __asm { ROR EAX,CL }
    /* +0xa23a2f */ __asm { MOV dword ptr [RBP + 0x70],0x7cda70e9 }
    /* +0xa23a36 */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xa23a3a */ __asm { MOV R11D,0xbbe75096 }
    /* +0xa23a40 */ __asm { XOR R11D,0x45e80afd }
    /* +0xa23a47 */ __asm { MOVD XMM4,R11D }
    /* +0xa23a4c */ __asm { PADDD XMM4,xmmword ptr [RBP + 0x230] }
    /* +0xa23a54 */ __asm { MOVD R11D,XMM4 }
    /* +0xa23a59 */ __asm { ADD R11D,R8D }
    /* +0xa23a5c */ __asm { CMP EAX,R11D }
    /* +0xa23a5f */ __asm { JNC 0x7fffa5193c82 }
    /* +0xa23a65 */ __asm { MOV R11W,0xed3f }
    /* +0xa23a6a */ __asm { MOV RCX,0x0 }
    /* +0xa23a71 */ __asm { NOP }
    /* +0xa23a72 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xa23a79 */ __asm { MOV R8,qword ptr [RBP + 0x30] }
    /* +0xa23a7d */ __asm { MOV R9D,R8D }
    /* +0xa23a80 */ __asm { XOR R9D,R11D }
    /* +0xa23a83 */ __asm { ADD R9D,0xffffa049 }
    /* +0xa23a8a */ __asm { MOV RAX,qword ptr [RBP + 0x2e8] }
    /* +0xa23a91 */ __asm { IMUL EAX,R9D }
    /* +0xa23a95 */ __asm { MOVZX R9D,AX }
    /* +0xa23a99 */ __asm { XOR R9,0x7821 }
    /* +0xa23aa0 */ __asm { MOV RDX,qword ptr GS:[R9] }
    /* +0xa23aa4 */ __asm { MOV RAX,-0xd99448652f75cb1 }
    /* +0xa23aae */ __asm { MOV R9D,0x26d8fdf5 }
    /* +0xa23ab4 */ __asm { MOV R11D,0x9dbf6d06 }
    /* +0xa23aba */ __asm { MOVD XMM4,R11D }
    /* +0xa23abf */ __asm { ADD RAX,0x725578ec }
    /* +0xa23ac5 */ __asm { MOV RCX,qword ptr [RBP + 0x338] }
    /* +0xa23acc */ __asm { ROL RAX,CL }
    /* +0xa23acf */ __asm { ROL RAX,0x12 }
    /* +0xa23ad3 */ __asm { ADD R9D,0x9fbc8de }
    /* +0xa23ada */ __asm { XOR R9D,0x81c42edd }
    /* +0xa23ae1 */ __asm { MOV ECX,R8D }
    /* +0xa23ae4 */ __asm { ROR R9D,CL }
    /* +0xa23ae7 */ __asm { XOR RAX,R8 }
    /* +0xa23aea */ __asm { NOT R9D }
    /* +0xa23aed */ __asm { MOVD XMM5,R13D }
    /* +0xa23af2 */ __asm { PMULUDQ XMM5,XMM4 }
    /* +0xa23af6 */ __asm { MOVD R11D,XMM5 }
    /* +0xa23afb */ __asm { MOV R8D,0xba0b989f }
    /* +0xa23b01 */ __asm { SUB R8D,R11D }
    /* +0xa23b04 */ __asm { ROL R8D,0xd }
    /* +0xa23b08 */ __asm { CMP R8,R9 }
    /* +0xa23b0b */ __asm { MOV R10D,0x60 }
    /* +0xa23b11 */ __asm { MOV RCX,-0x60 }
    /* +0xa23b18 */ __asm { CMOVNC RCX,R10 }
    /* +0xa23b1c */ __asm { MOV RDX,qword ptr [RDX + RCX*0x1] }
    /* +0xa23b20 */ __asm { MOV RCX,-0x712a310648fa55ff }
    /* +0xa23b2a */ __asm { CMP RDX,RAX }
    /* +0xa23b2d */ __asm { NOP }
    /* +0xa23b2e */ __asm { NOP }
    /* +0xa23b2f */ __asm { NOP }
    /* +0xa23b30 */ __asm { NOP }
    /* +0xa23b31 */ __asm { NOP }
    /* +0xa23b32 */ __asm { PXOR XMM4,XMM4 }
    /* +0xa23b36 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM4 }
    /* +0xa23b3b */ __asm { MOV dword ptr [RBP + 0x10],0xfeeb7bff }
    /* +0xa23b42 */ __asm { MOV R11D,dword ptr [RBP + 0x10] }
    /* +0xa23b46 */ __asm { TEST R11B,0x1 }
    /* +0xa23b4a */ __asm { NOP }
    /* +0xa23b4b */ __asm { NOP }
    /* +0xa23b4c */ __asm { NOP }
    /* +0xa23b4d */ __asm { NOP }
    /* +0xa23b4e */ __asm { NOP }
    /* +0xa23b4f */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xa23b56 */ __asm { NOP }
    /* +0xa23b57 */ __asm { MOV RCX,0x0 }
    /* +0xa23b5e */ __asm { MOV dword ptr [RBP + 0x70],0x0 }
    /* +0xa23b65 */ __asm { MOV CX,0x4935 }
    /* +0xa23b69 */ __asm { MOV RAX,qword ptr [RBP + 0x338] }
    /* +0xa23b70 */ __asm { MOV R9D,0xffffc1cc }
    /* +0xa23b76 */ __asm { SUB R9D,EAX }
    /* +0xa23b79 */ __asm { SUB R9D,ECX }
    /* +0xa23b7c */ __asm { MOVZX R9D,R9W }
    /* +0xa23b80 */ __asm { MOV RAX,qword ptr GS:[R9] }
    /* +0xa23b84 */ __asm { MOV RDX,0x6585c13cf0cb2c39 }
    /* +0xa23b8e */ __asm { IMUL RDX,qword ptr [RAX + 0x540] }
    /* +0xa23b96 */ __asm { MOV RAX,-0x3c7028c82680aee8 }
    /* +0xa23ba0 */ __asm { ADD RAX,RDX }
    /* +0xa23ba3 */ __asm { MOV RDX,-0x4804fb8082e21403 }
    /* +0xa23bad */ __asm { CMP RAX,RDX }
    /* +0xa23bb0 */ __asm { JZ 0x7fffa519478e }
    /* +0xa23bb6 */ __asm { PUSHFQ }
    /* +0xa23bb7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa23bbf */ __asm { POPFQ }
    /* +0xa23bc0 */ __asm { MOV dword ptr [RBP + 0x10],0x170e944c }
    /* +0xa23bc7 */ __asm { MOV R11D,dword ptr [RBP + 0x10] }
    /* +0xa23bcb */ __asm { TEST R11D,R11D }
    /* +0xa23bce */ __asm { NOP }
    /* +0xa23bcf */ __asm { NOP }
    /* +0xa23bd0 */ __asm { NOP }
    /* +0xa23bd1 */ __asm { NOP }
    /* +0xa23bd2 */ __asm { NOP }
    /* +0xa23bd3 */ __asm { NOP }
    /* +0xa23bd4 */ __asm { NOP }
    /* +0xa23bd5 */ __asm { NOP }
    /* +0xa23bd6 */ __asm { NOP }
    /* +0xa23bd7 */ __asm { NOP }
    /* +0xa23bd8 */ __asm { NOP }
    /* +0xa23bd9 */ __asm { NOP }
    /* +0xa23bda */ __asm { NOP }
    /* +0xa23bdb */ __asm { NOP }
    /* +0xa23bdc */ __asm { NOP }
    /* +0xa23bdd */ __asm { LEA RCX,[0x7fffa47c173a] }
    /* +0xa23be4 */ __asm { MOV RAX,-0x2550c098269c7099 }
    /* +0xa23bee */ __asm { SUB RAX,qword ptr [RBP + 0x338] }
    /* +0xa23bf5 */ __asm { MOV R9,qword ptr [RBP + 0x30] }
    /* +0xa23bf9 */ __asm { XOR R9,RAX }
    /* +0xa23bfc */ __asm { ROL R9,0x12 }
    /* +0xa23c00 */ __asm { ADD R9,-0x456b13d5 }
    /* +0xa23c07 */ __asm { CMP RCX,R9 }
    /* +0xa23c0a */ __asm { JZ 0x7fffa51947d9 }
    /* +0xa23c10 */ __asm { MOV R11W,0x8c46 }
    /* +0xa23c15 */ __asm { MOV R8D,0xd47154b6 }
    /* +0xa23c1b */ __asm { ADD R8D,0xa7427a6b }
    /* +0xa23c22 */ __asm { MOV qword ptr [RBP + 0x10],R9 }
    /* +0xa23c26 */ __asm { MOV EAX,dword ptr [RCX + -0x5272] }
    /* +0xa23c2c */ __asm { MOV R9W,0x74da }
    /* +0xa23c31 */ __asm { MOVD XMM4,R9D }
    /* +0xa23c36 */ __asm { MOV RDX,qword ptr [RBP + 0x338] }
    /* +0xa23c3d */ __asm { MOVD XMM5,EDX }
    /* +0xa23c41 */ __asm { PADDW XMM5,XMM4 }
    /* +0xa23c45 */ __asm { MOVD R9D,XMM5 }
    /* +0xa23c4a */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0xa23c4e */ __asm { XOR R9D,ECX }
    /* +0xa23c51 */ __asm { ROL R9W,0x5 }
    /* +0xa23c56 */ __asm { XOR R8D,EDX }
    /* +0xa23c59 */ __asm { MOVZX R9D,R9W }
    /* +0xa23c5d */ __asm { ROL R8D,0x12 }
    /* +0xa23c61 */ __asm { ADD R8D,ECX }
    /* +0xa23c64 */ __asm { MOVSXD R10,R8D }
    /* +0xa23c67 */ __asm { SUB R11D,EDX }
    /* +0xa23c6a */ __asm { IMUL R11D,R11D,0x2c8f }
    /* +0xa23c71 */ __asm { SUB R11D,ECX }
    /* +0xa23c74 */ __asm { ROR R11W,0x1 }
    /* +0xa23c78 */ __asm { MOVZX EDX,R11W }
    /* +0xa23c7c */ __asm { LEA R8,[RBP + 0x70] }
    /* +0xa23c80 */ __asm { SYSCALL }
    /* +0xa23c82 */ __asm { LEA RCX,[0x7fffa4785020] }
    /* +0xa23c89 */ __asm { MOV RAX,0x57fbc0e895c6cd4d }
    /* +0xa23c93 */ __asm { CMP RCX,RAX }
    /* +0xa23c96 */ __asm { NOP }
    /* +0xa23c97 */ __asm { NOP }
    /* +0xa23c98 */ __asm { NOP }
    /* +0xa23c99 */ __asm { NOP }
    /* +0xa23c9a */ __asm { NOP }
    /* +0xa23c9b */ __asm { NOP }
    /* +0xa23c9c */ __asm { NOP }
    /* +0xa23c9d */ __asm { NOP }
    /* +0xa23c9e */ __asm { NOP }
    /* +0xa23c9f */ __asm { NOP }
    /* +0xa23ca0 */ __asm { NOP }
    /* +0xa23ca1 */ __asm { NOP }
    /* +0xa23ca2 */ __asm { NOP }
    /* +0xa23ca3 */ __asm { NOP }
    /* +0xa23ca4 */ __asm { NOP }
    /* +0xa23ca5 */ __asm { NOP }
    /* +0xa23ca6 */ __asm { NOP }
    /* +0xa23cc2 */ __asm { LEA R8,[0x7fffa47c40d3] }
    /* +0xa23cc9 */ __asm { MOV RAX,-0x2bc6d859391909e4 }
    /* +0xa23cd3 */ __asm { CMP R8,RAX }
    /* +0xa23cd6 */ __asm { JZ 0x7fffa51947e9 }
    /* +0xa23cdc */ __asm { MOV R11D,0x7206bfbe }
    /* +0xa23ce2 */ __asm { MOV RCX,qword ptr [RBP + 0x30] }
    /* +0xa23ce6 */ __asm { ADD R11D,ECX }
    /* +0xa23ce9 */ __asm { IMUL R11D,R11D,0x5ca3dabd }
    /* +0xa23cf0 */ __asm { XOR R11D,dword ptr [RBP + 0x338] }
    /* +0xa23cf7 */ __asm { MOV R9D,0xa5d03e87 }
    /* +0xa23cfd */ __asm { MOVD XMM4,R9D }
    /* +0xa23d02 */ __asm { MOVZX R10D,uint8_t ptr [R8 + -0x7a46] }
    /* +0xa23d0a */ __asm { IMUL R9D,R11D,0x7eecef9d }
    /* +0xa23d11 */ __asm { PADDD XMM4,xmmword ptr [RBP + 0x300] }
    /* +0xa23d19 */ __asm { MOVD EAX,XMM4 }
    /* +0xa23d1d */ __asm { ROL EAX,CL }
    /* +0xa23d1f */ __asm { ADD EAX,0x35c2bcf4 }
    /* +0xa23d24 */ __asm { ROL EAX,0xe }
    /* +0xa23d27 */ __asm { MOVZX R11D,uint8_t ptr [R8 + R10*0x4 + -0x7a36] }
    /* +0xa23d30 */ __asm { ROL R11B,0x4 }
    /* +0xa23d34 */ __asm { MOV uint8_t ptr [RBP + 0x70],R11B }
    /* +0xa23d38 */ __asm { MOVZX R11D,uint8_t ptr [R8 + R10*0x4 + -0x7a35] }
    /* +0xa23d41 */ __asm { ROL R11B,0x4 }
    /* +0xa23d45 */ __asm { MOV uint8_t ptr [RBP + 0x71],R11B }
    /* +0xa23d49 */ __asm { MOVZX R11D,uint8_t ptr [R8 + R10*0x4 + -0x7a34] }
    /* +0xa23d52 */ __asm { ROL R11B,0x4 }
    /* +0xa23d56 */ __asm { MOV uint8_t ptr [RBP + 0x72],R11B }
    /* +0xa23d5a */ __asm { MOVZX R11D,uint8_t ptr [R8 + R10*0x4 + -0x7a33] }
    /* +0xa23d63 */ __asm { ROL R11B,0x4 }
    /* +0xa23d67 */ __asm { MOV uint8_t ptr [RBP + 0x73],R11B }
    /* +0xa23d6b */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xa23d6f */ __asm { IMUL ECX,R11D,0x65e8ce72 }
    /* +0xa23d76 */ __asm { XOR R11D,0x65e8ce72 }
    /* +0xa23d7d */ __asm { CMP RAX,0x73423c68 }
    /* +0xa23d83 */ __asm { CMOVZ R11D,ECX }
    /* +0xa23d87 */ __asm { MOV R9D,dword ptr [R9] }
    /* +0xa23d8a */ __asm { BT R11D,R9D }
    /* +0xa23d8e */ __asm { JNC 0x7fffa51944c3 }
    /* +0xa23d94 */ __asm { MOV RAX,qword ptr [RBP + 0x338] }
}


// ============================================================================
// Function : FUN_7fffa5194870  |  RVA: 0xa24870  |  Size: 724 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5194870(void)

{
  uRam00007fffa47bc980 = 0;
  uRam00007fffa47bc988 = 0xb28bfff295440830;
  uRam00007fffa47bc970 = 0x718eafb6f3ed4f4;
  uRam00007fffa47bc950 = 0xffffffffffffffff;
  uRam00007fffa47bc978 = 0x81144ea7c84247d8;
  uRam00007fffa47bc958 = 0x78c1f5b9c731642a;
  uRam00007fffa47bc968 = 0x2cc8203a909108;
  uRam00007fffa47bc960 = 0x3f1fea41ece3d6e4;
  return;
}


// ============================================================================
// Function : FUN_7fffa5194b50  |  RVA: 0xa24b50  |  Size: 1054 bytes
// Callers  : none
// Callees  : none
// ============================================================================
IMAGE_DOS_HEADER *
FUN_7fffa5194b50(int64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)

{
  uint8_t bVar1;
  uint32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint64_t *in_RAX;
  IMAGE_DOS_HEADER *pIVar8;
  uint8_t bVar9;
  uint32_t uVar10;
  IMAGE_DOS_HEADER *pIVar11;
  uint64_t *puVar12;
  char *pcVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  int iVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  uint64_t *in_R11;
  char *pcVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  uint64_t uVar24;
  
  puVar19 = (uint64_t *)(param_1 + -0x4f547d63);
  param_2 = (param_2 << 7 | param_2 >> 0x39) ^ (param_2 << 0x1c | param_2 >> 0x24) ^ param_2;
  param_2 = (param_2 << 0xe | param_2 >> 0x32) ^ (param_2 << 0x38 | param_2 >> 8) ^ param_2;
  uVar14 = param_2 << 0x30 | param_2 >> 0x10;
  uVar18 = param_2 << 0x1c | param_2 >> 0x24;
  if ((uint64_t)((param_4 << 0x1d | param_4 + 0xcf8c86e8 >> 3) + 0x16efc6c6) <
      (uint64_t)(int64_t)(int)((param_4 | 1) * 0x60000000 | (param_4 | 1) * 0x4520f03b >> 3)) {
    bVar1 = (uint8_t)param_4 & 0x1f;
    uVar6 = 0x804f29d9U >> bVar1 | -0x7fb0d627 << 0x20 - bVar1;
    uVar14 = uVar18 ^ param_2 ^ uVar14;
    uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) ^ (uVar14 << 0x38 | uVar14 >> 8) ^ uVar14;
    uVar14 = (uVar14 & 0xffffffffffff) >> 0x25 ^ (uVar14 << 0x10 | uVar14 >> 0x30);
  }
  else {
    uVar14 = uVar14 ^ param_2 ^ uVar18;
    uVar14 = (uVar14 << 0x38 | uVar14 >> 8) ^ (uVar14 << 0x20 | uVar14 >> 0x20) ^ uVar14;
    uVar14 = (uVar14 & 0xffffffffffff) >> 0x25 ^ (uVar14 << 0x10 | uVar14 >> 0x30);
    uVar6 = (param_4 ^ 0x1aa62a68) * -0x7697bc00 | (param_4 ^ 0x1aa62a68) * -0x57dda5ef >> 0x16;
  }
  lVar3 = *(int64_t *)(uVar14 + 8);
  uVar7 = *(uint32_t *)(uVar14 + 0x2c);
  uVar18 = (uint64_t)uVar7;
  uVar21 = 1 << (*(uint8_t *)(uVar14 + 0x100) & 0x1f);
  uVar2 = *(uint32_t *)(uVar14 + 0x1c);
  bVar1 = *(uint8_t *)(uVar14 + 0x104);
  uVar23 = 1 << (bVar1 & 0x1f);
  uVar22 = (int)puVar19 - (int)lVar3;
  iVar17 = 1 << (*(uint8_t *)(uVar14 + 0x10c) & 0x1f);
  lVar4 = *(int64_t *)(uVar14 + 0x80);
  uVar10 = uVar22 - uVar23;
  if (uVar22 < uVar23) {
    uVar10 = 0;
  }
  uVar5 = uVar22;
  if (uVar22 < uVar7) {
    uVar5 = uVar7;
  }
  bVar9 = 0x40 - (char)*(uint32_t *)(uVar14 + 0x108);
  uVar7 = uVar22 - uVar21;
  if (uVar22 - uVar2 <= uVar21) {
    uVar7 = uVar2;
  }
  if (*(int *)(uVar14 + 0x28) != 0) {
    uVar7 = uVar2;
  }
  uVar2 = *(uint32_t *)(uVar14 + 300);
  lVar16 = *(int64_t *)(uVar14 + 0x70);
  do {
    if (uVar5 == uVar18) break;
    uVar24 = (uint64_t)(*(int64_t *)(lVar3 + uVar18) * -0x30e4432345000000) >> (bVar9 & 0x3f);
    *(uint32_t *)(lVar4 + (uint64_t)(~(-1 << (bVar1 & 0x1f)) & (uint32_t)uVar18) * 4) =
         *(uint32_t *)(lVar16 + uVar24 * 4);
    *(uint32_t *)(lVar16 + uVar24 * 4) = (uint32_t)uVar18;
    uVar18 = uVar18 + 1;
  } while (uVar2 == 0);
  *(uint32_t *)(uVar14 + 0x2c) = uVar22;
  uVar21 = *(uint32_t *)(lVar16 + (*puVar19 * -0x30e4432345000000 >> (bVar9 & 0x3f)) * 4);
  if (uVar21 < uVar7) {
    return (IMAGE_DOS_HEADER *)(uint64_t)uVar2;
  }
  pcVar20 = (char *)0x3;
  do {
    puVar15 = (uint64_t *)(lVar3 + (uint64_t)uVar21);
    pIVar8 = (IMAGE_DOS_HEADER *)(uint64_t)*(uint32_t *)(pcVar20 + -3 + (int64_t)puVar15);
    if (*(uint32_t *)(pcVar20 + -3 + (int64_t)puVar15) == *(uint32_t *)(pcVar20 + param_1 + -0x4f547d66)) {
      if (puVar19 < (uint64_t *)((int64_t)in_RAX - 7U)) {
        pIVar8 = &IMAGE_DOS_HEADER_7fffa4770000;
        if (*puVar15 == *puVar19) {
          puVar15 = (uint64_t *)(lVar3 + 8 + (uint64_t)uVar21);
          lVar16 = 0;
          puVar12 = (uint64_t *)(param_1 + -0x4f547d5b);
          do {
            if ((uint64_t *)((int64_t)in_RAX - 7U) <= puVar12) {
              goto LAB_7fffa5194ec3;
            }
            uVar14 = *puVar15;
            uVar18 = *puVar12;
            puVar12 = puVar12 + 1;
            lVar16 = lVar16 + 8;
            puVar15 = puVar15 + 1;
          } while (uVar14 == uVar18);
          uVar24 = 0;
          for (uVar18 = uVar18 ^ uVar14; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar24 = uVar24 + 1;
          }
          pIVar8 = (IMAGE_DOS_HEADER *)(uVar24 - 3);
          pIVar11 = (IMAGE_DOS_HEADER *)(uVar24 >> 3 & 0x1fffffff);
          if ((((0x1d475f89 - uVar6) * 4 | 0x1d475f89 - uVar6 >> 0x1e) + 0x99ede91 ^ param_4) ==
              ((param_4 + 0xebd96e50) * 0x20 | param_4 + 0xebd96e50 >> 0x1b) * -0x3910c6d7) {
            pIVar11 = pIVar8;
          }
          pcVar13 = pIVar11->e_magic + lVar16;
        }
        else {
          uVar2 = 0;
          for (uVar14 = *puVar19 ^ *puVar15; (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x8000000000000000) {
            uVar2 = uVar2 + 1;
          }
          pcVar13 = (char *)(uint64_t)(uVar2 >> 3);
        }
      }
      else {
        puVar12 = puVar19;
LAB_7fffa5194ec3:
        pIVar8 = (IMAGE_DOS_HEADER *)0x0;
        if ((puVar12 < (uint64_t *)((int64_t)in_RAX - 3U)) &&
           (pIVar8 = (IMAGE_DOS_HEADER *)(uint64_t)(uint32_t)*puVar15, (uint32_t)*puVar15 == (uint32_t)*puVar12
           )) {
          puVar12 = (uint64_t *)((int64_t)puVar12 + 4);
          puVar15 = (uint64_t *)((int64_t)puVar15 + 4);
        }
        if ((puVar12 < (uint64_t *)((int64_t)in_RAX - 1U)) &&
           (pIVar8 = (IMAGE_DOS_HEADER *)(uint64_t)(uint16_t)*puVar15,
           (uint16_t)*puVar15 == (uint16_t)*puVar12)) {
          puVar15 = (uint64_t *)((int64_t)puVar15 + 2);
          puVar12 = (uint64_t *)((int64_t)puVar12 + 2);
        }
        if (puVar12 < in_RAX) {
          pIVar8 = (IMAGE_DOS_HEADER *)(uint64_t)((char)*puVar15 == (char)*puVar12);
          puVar12 = (uint64_t *)((int64_t)puVar12 + (int64_t)pIVar8);
        }
        pcVar13 = (char *)((int64_t)puVar12 - (int64_t)puVar19);
      }
      if (pcVar20 < pcVar13) {
        pIVar8 = (IMAGE_DOS_HEADER *)(uint64_t)((uVar22 + 3) - uVar21);
        *in_R11 = pIVar8;
        pcVar20 = pcVar13;
        if ((uint64_t *)((int64_t)puVar19 + (int64_t)pcVar13) == in_RAX) {
          return pIVar8;
        }
      }
    }
    if (uVar21 <= uVar10) {
      return pIVar8;
    }
    iVar17 = iVar17 + -1;
    if (iVar17 == 0) {
      return pIVar8;
    }
    uVar21 = *(uint32_t *)(lVar4 + (uint64_t)(uVar21 & uVar23 - 1) * 4);
    if (uVar21 < uVar7) {
      return pIVar8;
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa5194f80  |  RVA: 0xa24f80  |  Size: 3876 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5195077) */

int64_t FUN_7fffa5194f80(uint64_t *param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4,
                         uint64_t *param_5)

{
  uint8_t bVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint8_t *pbVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint8_t bVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  int iVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  bool bVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  uint64_t uVar25;
  uint64_t *puVar26;
  int64_t lVar27;
  uint64_t *puVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint32_t uVar31;
  uint64_t uVar32;
  uint64_t *puVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  int64_t in_R10;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t *puVar41;
  uint64_t *puVar42;
  uint32_t uVar43;
  uint32_t uVar44;
  uint64_t uVar45;
  uint32_t uVar46;
  uint64_t uStack_160;
  
  uVar14 = in_R10 * -0x2c70b79d7a3f93db;
  uVar14 = (in_R10 * -0xb79d7a3f93db000 | uVar14 >> 0x34) ^
           (in_R10 * -0x58e16f3af47f27b6 | (uint64_t)((int64_t)uVar14 < 0)) ^ uVar14;
  uVar14 = (uVar14 << 0x18 | uVar14 >> 0x28) ^ (uVar14 << 2 | uVar14 >> 0x3e) ^ uVar14;
  uVar14 = (uVar14 << 0x30 | uVar14 >> 0x10) ^ (uVar14 << 4 | uVar14 >> 0x3c) ^ uVar14;
  uVar14 = (uVar14 << 8 | uVar14 >> 0x38) ^ (uVar14 << 0x20 | uVar14 >> 0x20) ^ uVar14;
  uVar38 = uVar14 << 0x30 | uVar14 >> 0x10;
  uVar14 = (param_4 << 7 | param_4 >> 0x39) ^ (param_4 << 0x21 | param_4 >> 0x1f) ^ param_4;
  uVar14 = (uVar14 << 2 | uVar14 >> 0x3e) ^ (uVar14 << 0xe | uVar14 >> 0x32) ^ uVar14;
  uVar14 = (uVar14 << 0x1c | uVar14 >> 0x24) ^ (uVar14 << 4 | uVar14 >> 0x3c) ^ uVar14;
  puVar15 = (uint64_t *)(uVar38 + 0xf777dd4c);
  uVar14 = (uVar14 << 8 | uVar14 >> 0x38) ^ (uVar14 << 0x38 | uVar14 >> 8) ^ uVar14;
  uVar14 = (uVar14 << 0x30 | uVar14 >> 0x10) ^ (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar14;
  uVar14 = (uVar14 << 0x29 | uVar14 >> 0x17) ^ (uVar14 << 0xb | uVar14 >> 0x35) ^ uVar14;
  uVar14 = (uVar14 << 0x16 | uVar14 >> 0x2a) ^ (uVar14 << 0x12 | uVar14 >> 0x2e) ^ uVar14;
  uVar14 = (uVar14 << 0x24 | uVar14 >> 0x1c) ^ (uVar14 << 0x2c | uVar14 >> 0x14) ^ uVar14;
  uVar14 = (uVar14 << 8 | uVar14 >> 0x38) ^ (uVar14 << 0x18 | uVar14 >> 0x28) ^ uVar14;
  uVar14 = (uVar14 << 0x30 | uVar14 >> 0x10) ^ (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar14;
  uVar25 = uVar14 >> 0x18 ^ uVar14;
  uVar32 = (uVar14 >> 0x30) + uVar25;
  if (param_2 != 0x7aa09cb2) {
    uVar32 = uVar14 >> 0x30 ^ uVar25;
  }
  bVar1 = *(uint8_t *)(uVar32 + 0x104);
  uVar44 = 1 << (bVar1 & 0x1f);
  uVar2 = *(uint32_t *)(uVar32 + 0x1c);
  lVar5 = *(int64_t *)(uVar32 + 8);
  bVar12 = 0x40 - (char)*(uint32_t *)(uVar32 + 0x108);
  iVar18 = 1 << (*(uint8_t *)(uVar32 + 0x10c) & 0x1f);
  uVar43 = (int)param_5 - (int)lVar5;
  uVar22 = uVar43 - uVar44;
  if (uVar43 < uVar44) {
    uVar22 = 0;
  }
  uVar46 = 1 << (*(uint8_t *)(uVar32 + 0x100) & 0x1f);
  uVar23 = uVar43 - uVar46;
  if (uVar43 - uVar2 <= uVar46) {
    uVar23 = uVar2;
  }
  if (*(int *)(uVar32 + 0x28) != 0) {
    uVar23 = uVar2;
  }
  uVar2 = *(uint32_t *)(uVar32 + 0x2c);
  uVar14 = (uint64_t)uVar2;
  uVar46 = uVar43;
  if (uVar43 < uVar2) {
    uVar46 = uVar2;
  }
  iVar3 = *(int *)(uVar32 + 300);
  uVar2 = *(uint32_t *)(uVar32 + 0x18);
  puVar26 = (uint64_t *)((uint64_t)uVar2 + lVar5);
  lVar6 = *(int64_t *)(uVar32 + 0x70);
  puVar7 = *(uint64_t **)(uVar32 + 0xf8);
  lVar8 = *(int64_t *)(uVar32 + 0x80);
  do {
    if (uVar46 == uVar14) break;
    uVar25 = (uint64_t)(*(int64_t *)(lVar5 + uVar14) * -0x30e4432345000000) >> (bVar12 & 0x3f);
    *(uint32_t *)(lVar8 + (uint64_t)(~(-1 << (bVar1 & 0x1f)) & (uint32_t)uVar14) * 4) =
         *(uint32_t *)(lVar6 + uVar25 * 4);
    *(uint32_t *)(lVar6 + uVar25 * 4) = (uint32_t)uVar14;
    uVar14 = uVar14 + 1;
  } while (iVar3 == 0);
  *(uint32_t *)(uVar32 + 0x2c) = uVar43;
  uVar14 = *param_5;
  uVar32 = uVar14 * -0x30e4432345000000;
  uVar46 = *(uint32_t *)(lVar6 + (uVar32 >> (bVar12 & 0x3f)) * 4);
  uStack_160 = 3;
  if (uVar23 <= uVar46) {
    uStack_160 = 3;
    do {
      puVar16 = (uint64_t *)(lVar5 + (uint64_t)uVar46);
      if (*(int *)((uStack_160 - 3) + (int64_t)puVar16) ==
          *(int *)((int64_t)param_5 + (uStack_160 - 3))) {
        puVar41 = param_5;
        if (param_5 < (uint64_t *)(uVar38 + 0xf777dd45)) {
          if (*puVar16 == *param_5) {
            lVar6 = lVar5 + 8 + (uint64_t)uVar46;
            lVar13 = 0;
            do {
              puVar41 = (uint64_t *)((int64_t)param_5 + lVar13 + 8);
              if ((uint64_t *)(uVar38 + 0xf777dd45) <= puVar41) {
                puVar16 = (uint64_t *)(lVar6 + lVar13);
                goto joined_r0x7fffa51953a6;
              }
              uVar14 = *(uint64_t *)(lVar6 + lVar13);
              lVar13 = lVar13 + 8;
            } while (uVar14 == *puVar41);
            uVar4 = 0;
            for (uVar14 = uVar14 ^ *puVar41; (uVar14 & 1) == 0;
                uVar14 = uVar14 >> 1 | 0x8000000000000000) {
              uVar4 = uVar4 + 1;
            }
            uVar14 = (uint64_t)(uVar4 >> 3) + lVar13;
          }
          else {
            uVar4 = 0;
            for (uVar14 = *puVar16 ^ *param_5; (uVar14 & 1) == 0;
                uVar14 = uVar14 >> 1 | 0x8000000000000000) {
              uVar4 = uVar4 + 1;
            }
            uVar14 = (uint64_t)(uVar4 >> 3);
          }
        }
        else {
joined_r0x7fffa51953a6:
          if ((puVar41 < (uint64_t *)(uVar38 + 0xf777dd49)) && ((uint32_t)*puVar16 == (uint32_t)*puVar41))
          {
            puVar41 = (uint64_t *)((int64_t)puVar41 + 4);
            puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
          }
          if ((puVar41 < (uint64_t *)(uVar38 + 0xf777dd4b)) && ((short)*puVar16 == (short)*puVar41)
             ) {
            puVar41 = (uint64_t *)((int64_t)puVar41 + 2);
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
          }
          if (puVar41 < puVar15) {
            puVar41 = (uint64_t *)
                      ((int64_t)puVar41 + (uint64_t)((uint8_t)*puVar16 == (uint8_t)*puVar41));
          }
          uVar14 = (int64_t)puVar41 - (int64_t)param_5;
        }
        if (uStack_160 < uVar14) {
          *param_1 = (uint64_t)((uVar43 + 3) - uVar46);
          uStack_160 = uVar14;
          if ((uint64_t *)((int64_t)param_5 + uVar14) == puVar15) goto LAB_7fffa5195510;
        }
      }
      if (uVar46 <= uVar22) goto LAB_7fffa5195510;
      iVar18 = iVar18 + -1;
      uVar46 = *(uint32_t *)(lVar8 + (uint64_t)(uVar46 & uVar44 - 1) * 4);
      if ((uVar46 < uVar23) || (iVar18 == 0)) goto LAB_7fffa5195510;
    } while( true );
  }
code_r0x7fffa5195520:
  pbVar9 = (uint8_t *)*puVar7;
  lVar6 = puVar7[1];
  uVar22 = *(uint32_t *)(puVar7 + 0x21);
  uVar46 = 1 << (*(uint8_t *)((int64_t)puVar7 + 0x104) & 0x1f);
  uVar44 = (int)pbVar9 - (int)lVar6;
  uVar23 = uVar44 - uVar46;
  if (uVar44 < uVar46) {
    uVar23 = 0;
  }
  uVar4 = *(uint32_t *)(puVar7 + 3);
  uVar10 = *(uint32_t *)(puVar7[0xe] + (uVar32 >> (-(char)uVar22 & 0x3fU)) * 4);
  if ((uVar10 < uVar4) || (iVar18 == 0)) {
LAB_7fffa5195e8e:
    return uStack_160 + 0x7fad762a;
  }
  lVar8 = puVar7[0x10];
  puVar16 = (uint64_t *)((int64_t)param_5 + 4);
  lVar5 = (uint64_t)uVar2 + 8 + lVar5;
  uVar32 = uVar14;
  do {
    uVar25 = (uint64_t)uVar10;
    if (*(int *)(lVar6 + uVar25) == (int)uVar32) {
      puVar33 = (uint64_t *)(lVar6 + uVar25 + 4);
      puVar41 = (uint64_t *)(((int64_t)pbVar9 - (int64_t)puVar33) + (int64_t)puVar16);
      if (puVar15 <= puVar41) {
        puVar41 = puVar15;
      }
      puVar42 = puVar16;
      puVar28 = puVar33;
      if (puVar16 < (uint64_t *)((int64_t)puVar41 - 7U)) {
        if (*puVar33 == *puVar16) {
          lVar27 = lVar6 + 0xc + uVar25;
          lVar13 = 0;
          do {
            puVar42 = (uint64_t *)((int64_t)param_5 + lVar13 + 0xc);
            if ((uint64_t *)((int64_t)puVar41 - 7U) <= puVar42) {
              puVar28 = (uint64_t *)(lVar27 + lVar13);
              goto LAB_7fffa519572c;
            }
            uVar25 = *(uint64_t *)(lVar27 + lVar13);
            lVar13 = lVar13 + 8;
          } while (uVar25 == *puVar42);
          uVar24 = 0;
          for (uVar25 = *puVar42 ^ uVar25; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar24 = uVar24 + 1;
          }
          uVar25 = (uint64_t)(uVar24 >> 3) + lVar13;
        }
        else {
          uVar24 = 0;
          for (uVar25 = *puVar16 ^ *puVar33; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar24 = uVar24 + 1;
          }
          uVar25 = (uint64_t)(uVar24 >> 3);
        }
      }
      else {
LAB_7fffa519572c:
        if ((puVar42 < (uint64_t *)((int64_t)puVar41 - 3U)) && ((uint32_t)*puVar28 == (uint32_t)*puVar42))
        {
          puVar42 = (uint64_t *)((int64_t)puVar42 + 4);
          puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
        }
        if ((puVar42 < (uint64_t *)((int64_t)puVar41 - 1U)) &&
           ((short)*puVar28 == (short)*puVar42)) {
          puVar42 = (uint64_t *)((int64_t)puVar42 + 2);
          puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
        }
        if (puVar42 < puVar41) {
          puVar42 = (uint64_t *)((int64_t)puVar42 + (uint64_t)((uint8_t)*puVar28 == (uint8_t)*puVar42))
          ;
        }
        uVar25 = (int64_t)puVar42 - (int64_t)puVar16;
      }
      if ((uint8_t *)((int64_t)puVar33 + uVar25) == pbVar9) {
        puVar41 = (uint64_t *)((int64_t)puVar16 + uVar25);
        bVar1 = (uint8_t)param_2;
        puVar33 = puVar41;
        puVar42 = puVar26;
        if (puVar41 < (uint64_t *)(uVar38 + 0xf777dd45)) {
          uVar29 = *puVar26;
          if (uVar29 == *puVar41) {
            lVar13 = 0;
            do {
              puVar33 = (uint64_t *)((int64_t)puVar41 + lVar13 + 8);
              if ((uint64_t *)(uVar38 + 0xf777dd45) <= puVar33) {
                puVar33 = (uint64_t *)((int64_t)puVar41 + lVar13 + 8);
                puVar42 = (uint64_t *)(lVar13 + lVar5);
                goto LAB_7fffa51958a9;
              }
              uVar29 = *(uint64_t *)(lVar5 + lVar13);
              uVar11 = *puVar33;
              lVar13 = lVar13 + 8;
            } while (uVar29 == uVar11);
            uVar24 = 0;
            for (uVar29 = uVar29 ^ uVar11; (uVar29 & 1) == 0;
                uVar29 = uVar29 >> 1 | 0x8000000000000000) {
              uVar24 = uVar24 + 1;
            }
            uVar11 = (uint64_t)(uVar24 >> 3) + lVar13;
            uVar24 = ~((param_2 | 1) * 0x1db99b03);
            uVar29 = (uint64_t)(uVar11 + (int64_t)puVar41) | (uint64_t)puVar41;
            if ((uint64_t)~(0x73533cb6U >> (bVar1 & 0x1f) | 0x73533cb6 << 0x20 - (bVar1 & 0x1f)) <=
                (uint64_t)(int64_t)(int)(uVar24 << 0x18 | uVar24 >> 8)) {
              uVar29 = uVar11;
            }
          }
          else {
            uVar24 = 0;
            for (uVar29 = *puVar41 ^ uVar29; (uVar29 & 1) == 0;
                uVar29 = uVar29 >> 1 | 0x8000000000000000) {
              uVar24 = uVar24 + 1;
            }
            uVar29 = (uint64_t)(uVar24 >> 3);
          }
        }
        else {
LAB_7fffa51958a9:
          if ((puVar33 < (uint64_t *)(uVar38 + 0xf777dd49)) && ((uint32_t)*puVar42 == (uint32_t)*puVar33))
          {
            puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            puVar42 = (uint64_t *)((int64_t)puVar42 + 4);
          }
          if ((puVar33 < (uint64_t *)(uVar38 + 0xf777dd4b)) && ((short)*puVar42 == (short)*puVar33)
             ) {
            puVar42 = (uint64_t *)((int64_t)puVar42 + 2);
            puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
          }
          if (puVar33 < puVar15) {
            uVar24 = param_2 | 1;
            uVar31 = uVar24 * -0x639b39b2 + 0xdd805459;
            bVar21 = (uint8_t)*puVar33 <= (uint8_t)*puVar42;
            if ((uVar24 * -0x586c0000 | uVar24 * 0x63efa9e5 >> 0xe) !=
                (uVar31 * 0x2000000 | uVar31 >> 7)) {
              bVar21 = (uint8_t)*puVar42 == (uint8_t)*puVar33;
            }
            puVar33 = (uint64_t *)((int64_t)puVar33 + (uint64_t)bVar21);
          }
          uVar11 = ~uVar14;
          uVar19 = (uint64_t)uVar22;
          uVar24 = param_2 | 1;
          uVar34 = ~(uint64_t)puVar33;
          uVar20 = ~uVar19;
          uVar29 = uVar14 + 1;
          if ((0x606a0e9U >> (bVar1 & 0x1f) | 0x606a0e9 << 0x20 - (bVar1 & 0x1f)) <=
              ((0xd5b21794U >> (bVar1 & 0x1f) | -0x2a4de86c << 0x20 - (bVar1 & 0x1f)) ^ 0x900dd312))
          {
            uVar29 = uVar11;
          }
          uVar35 = ~(uint64_t)puVar41;
          uVar39 = (uint64_t)puVar33 & uVar35;
          uVar36 = uVar20 & ((uint64_t)puVar33 ^ (uint64_t)puVar41);
          uVar17 = uVar20 ^ uVar39 ^ uVar11;
          uVar45 = ((uVar20 ^ ((uint64_t)puVar33 | uVar35)) & uVar11) * -0x7a25045a;
          uVar31 = (uint32_t)((uint64_t)puVar33 | uVar35);
          if (((0xf597d281 - param_2) * 0x800000 | 0xf597d281 - param_2 >> 9) <=
              ((param_2 + 0x3b0d2faa) * 0x10000 | param_2 + 0x3b0d2faa >> 0x10)) {
            uVar31 = (uint32_t)uVar39;
          }
          uVar37 = (uVar35 ^ (uint64_t)puVar33 ^ uVar19) & uVar14;
          uVar40 = uVar17 * -0x73773bc6;
          if (((uVar24 * 0xaa61000 | uVar24 * -0xd6f559f >> 0x14) ^ 0x3bfa0e1b) <
              ((0xf3ae900 - param_2) * 0x1000 | 0xf3ae900 - param_2 >> 0x14)) {
            uVar40 = uVar17 & 0xffffffff8c88c43a;
          }
          uVar17 = uVar19 + 1;
          if (uVar24 * 0x62cdd412 != 0x5d91c49f) {
            uVar17 = uVar20;
          }
          uVar30 = uVar37 * -0x1e3bdfea;
          if (uVar24 * 0x1ed4c30d + 0xaff7abee < (param_2 + 0x47851b3b) * 0x18c975e3) {
            uVar30 = (int64_t)(int)((param_2 ^ 0xb527149c) + 0xcb9b2524) | uVar37;
          }
          uVar29 = uVar36 & uVar29;
          uVar37 = uVar29 ^ 0xffffffff85dafba5;
          if (0xeb46dab7 - param_2 < 0x6a472b36) {
            uVar37 = uVar29 * -0x7a25045b;
          }
          uVar17 = ((uVar34 | (uint64_t)puVar41) & uVar20 ^ uVar11) * 0x73773bc7 +
                   (((uint64_t)puVar33 ^ (uint64_t)puVar41 | uVar20) & uVar14) * 0x1e3bdfe9 +
                   (uVar36 & uVar14) * -0x1e3bdfeb + (uVar39 & uVar20 & uVar14) * 3 + uVar30 +
                   uVar40 + ((uVar31 & uVar22) & uVar14) * 0x73773bc8 +
                   ((uVar17 ^ (uint64_t)puVar33 & (uint64_t)puVar41 | uVar14) -
                   ((uVar34 ^ (uint64_t)puVar41) & uVar20 | uVar14)) * 0x7a250459;
          uVar29 = uVar17 ^ uVar45;
          if (uVar24 * 0x216b5171 == -0x421a201) {
            uVar29 = uVar45 + uVar17;
          }
          uVar29 = (uint64_t)((uint32_t)uVar11 & uVar22 & (uint32_t)uVar39) * 0x6adc896 +
                   ((uVar34 & uVar35 ^ uVar20) & uVar11) * 0x7a25045b +
                   ((uVar19 ^ (uint64_t)puVar33 & (uint64_t)puVar41) & uVar11) * -2 +
                   (uVar39 & uVar20 & uVar11) * -0x7a250459 + uVar37 + uVar29;
        }
        uVar25 = uVar25 + uVar29;
      }
      uVar25 = uVar25 + 4;
      if (uStack_160 < uVar25) {
        *param_1 = (uint64_t)((((uVar43 + uVar44) - uVar2) - uVar10) + 3);
        uStack_160 = uVar25;
        if ((uint64_t *)((int64_t)param_5 + uVar25) == puVar15) goto LAB_7fffa5195e8e;
        uVar32 = (uint64_t)(uint32_t)*param_5;
      }
    }
    if (uVar10 <= uVar23) goto LAB_7fffa5195e8e;
    uVar24 = uVar10 | uVar46 - 1;
    if (param_2 == 0xa30fee6e) {
      uVar24 = uVar10 & uVar46 - 1;
    }
    iVar18 = iVar18 + -1;
    if ((iVar18 == 0) || (uVar10 = *(uint32_t *)(lVar8 + (uint64_t)uVar24 * 4), uVar10 < uVar4))
    goto LAB_7fffa5195e8e;
  } while( true );
LAB_7fffa5195510:
  uVar14 = *param_5;
  uVar32 = uVar14 * -0x30e4432345000000;
  goto code_r0x7fffa5195520;
}


// ============================================================================
// Function : FUN_7fffa5199770  |  RVA: 0xa29770  |  Size: 325 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5199770(void) {
    /* +0xa29770 */ __asm { PUSH RBP }
    /* +0xa29771 */ __asm { PUSH R12 }
    /* +0xa29773 */ __asm { PUSH RDI }
    /* +0xa29774 */ __asm { PUSH RBX }
    /* +0xa29775 */ __asm { PUSH RSI }
    /* +0xa29776 */ __asm { PUSH R13 }
    /* +0xa29778 */ __asm { PUSH R14 }
    /* +0xa2977a */ __asm { PUSH R15 }
    /* +0xa2977c */ __asm { SUB RSP,0x88 }
    /* +0xa29783 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xa2978b */ __asm { MOV R12,R8 }
    /* +0xa2978e */ __asm { MOV dword ptr [RBP + -0x40],0xcbb6affb }
    /* +0xa29795 */ __asm { MOV EAX,dword ptr [RBP + -0x40] }
    /* +0xa29798 */ __asm { CMP EAX,0x2b0db301 }
    /* +0xa2979d */ __asm { JBE 0x7fffa5199da2 }
    /* +0xa297a3 */ __asm { LEA R10,[0x7fffa477f3da] }
    /* +0xa297aa */ __asm { MOV R8,-0x3e83d9e671ad757 }
    /* +0xa297b4 */ __asm { CMP R10,R8 }
    /* +0xa297b7 */ __asm { NOP }
    /* +0xa297b8 */ __asm { NOP }
    /* +0xa297b9 */ __asm { NOP }
    /* +0xa297ba */ __asm { NOP }
    /* +0xa297bb */ __asm { NOP }
    /* +0xa297bc */ __asm { NOP }
    /* +0xa297bd */ __asm { NOP }
    /* +0xa297be */ __asm { NOP }
    /* +0xa297bf */ __asm { NOP }
    /* +0xa297c0 */ __asm { NOP }
    /* +0xa297c1 */ __asm { NOP }
    /* +0xa297c2 */ __asm { PUSHFQ }
    /* +0xa297c3 */ __asm { POP R9 }
    /* +0xa297c5 */ __asm { MOVZX EAX,uint8_t ptr [R10 + 0x51b5] }
    /* +0xa297cd */ __asm { MOVZX EDX,uint8_t ptr [R10 + RAX*0x4 + 0x51bf] }
    /* +0xa297d6 */ __asm { NOT DL }
    /* +0xa297d8 */ __asm { ROL DL,0x3 }
    /* +0xa297db */ __asm { MOV uint8_t ptr [RBP + -0x40],DL }
    /* +0xa297de */ __asm { MOVZX EDX,uint8_t ptr [R10 + RAX*0x4 + 0x51c0] }
    /* +0xa297e7 */ __asm { NOT DL }
    /* +0xa297e9 */ __asm { ROL DL,0x3 }
    /* +0xa297ec */ __asm { MOV uint8_t ptr [RBP + -0x3f],DL }
    /* +0xa297ef */ __asm { MOVZX EDX,uint8_t ptr [R10 + RAX*0x4 + 0x51c1] }
    /* +0xa297f8 */ __asm { NOT DL }
    /* +0xa297fa */ __asm { ROL DL,0x3 }
    /* +0xa297fd */ __asm { MOV uint8_t ptr [RBP + -0x3e],DL }
    /* +0xa29800 */ __asm { MOVZX R10D,uint8_t ptr [R10 + RAX*0x4 + 0x51c2] }
    /* +0xa29809 */ __asm { NOT R10B }
    /* +0xa2980c */ __asm { ROL R10B,0x3 }
    /* +0xa29810 */ __asm { MOV uint8_t ptr [RBP + -0x3d],R10B }
    /* +0xa29814 */ __asm { MOV EAX,0x97cd0fa7 }
    /* +0xa29819 */ __asm { XOR EAX,dword ptr [RBP + -0x40] }
    /* +0xa2981c */ __asm { BT EAX,EAX }
    /* +0xa2981f */ __asm { JNC 0x7fffa5199851 }
    /* +0xa29821 */ __asm { MOV dword ptr [RBP + -0x40],0xe4043b54 }
    /* +0xa29828 */ __asm { MOV EAX,dword ptr [RBP + -0x40] }
    /* +0xa2982b */ __asm { CMP EAX,0x7ab67bb5 }
    /* +0xa29830 */ __asm { JBE 0x7fffa5199daa }
    /* +0xa29836 */ __asm { XOR R10D,R10D }
    /* +0xa29839 */ __asm { AND R10B,0x1 }
    /* +0xa2983d */ __asm { ADD RSP,0x88 }
    /* +0xa29844 */ __asm { POP R15 }
    /* +0xa29846 */ __asm { POP R14 }
    /* +0xa29848 */ __asm { POP R13 }
    /* +0xa2984a */ __asm { POP RSI }
    /* +0xa2984b */ __asm { POP RBX }
    /* +0xa2984c */ __asm { POP RDI }
    /* +0xa2984d */ __asm { POP R12 }
    /* +0xa2984f */ __asm { POP RBP }
    /* +0xa29850 */ __asm { RET }
    /* +0xa29851 */ __asm { TEST R9D,0x100 }
    /* +0xa29858 */ __asm { NOP }
    /* +0xa29859 */ __asm { NOP }
    /* +0xa2985a */ __asm { NOP }
    /* +0xa2985b */ __asm { NOP }
    /* +0xa2985c */ __asm { NOP }
    /* +0xa2985d */ __asm { NOP }
    /* +0xa2985e */ __asm { NOP }
    /* +0xa2985f */ __asm { NOP }
    /* +0xa29860 */ __asm { NOP }
    /* +0xa29861 */ __asm { MOV dword ptr [RBP + -0x40],0x22325490 }
    /* +0xa29868 */ __asm { MOV EAX,dword ptr [RBP + -0x40] }
    /* +0xa2986b */ __asm { CMP EAX,0x4f68d26a }
    /* +0xa29870 */ __asm { NOP }
    /* +0xa29871 */ __asm { NOP }
    /* +0xa29872 */ __asm { NOP }
    /* +0xa29873 */ __asm { NOP }
    /* +0xa29874 */ __asm { NOP }
    /* +0xa29875 */ __asm { MOV EAX,0xc0f620e2 }
    /* +0xa2987a */ __asm { SUB EAX,R12D }
    /* +0xa2987d */ __asm { IMUL EAX,EAX,0x12c7a8e1 }
    /* +0xa29883 */ __asm { MOV dword ptr [RBP + -0x40],EAX }
    /* +0xa29886 */ __asm { MOV EAX,dword ptr [RBP + -0x40] }
    /* +0xa29889 */ __asm { CMP EAX,0xf9e010ee }
    /* +0xa2988e */ __asm { NOP }
    /* +0xa2988f */ __asm { NOP }
    /* +0xa29890 */ __asm { NOP }
    /* +0xa29891 */ __asm { NOP }
    /* +0xa29892 */ __asm { NOP }
    /* +0xa29893 */ __asm { NOP }
    /* +0xa29894 */ __asm { NOP }
    /* +0xa29895 */ __asm { NOP }
    /* +0xa29896 */ __asm { NOP }
    /* +0xa29897 */ __asm { NOP }
    /* +0xa29898 */ __asm { NOP }
    /* +0xa29899 */ __asm { NOP }
    /* +0xa2989a */ __asm { NOP }
    /* +0xa2989b */ __asm { NOP }
    /* +0xa2989c */ __asm { NOP }
    /* +0xa2989d */ __asm { NOP }
    /* +0xa2989e */ __asm { NOP }
    /* +0xa29da2 */ __asm { MOV EAX,CS:[0x1ee91bfffff9f9e9] }
    /* +0xa29dad */ __asm { FIDIVR dword ptr [RDX + -0x4f] }
    /* +0xa29db0 */ __asm { CLC }
    /* +0xa29db1 */ __asm { SBB EAX,0xe95e794a }
    /* +0xa29db6 */ __asm { JL 0x7fffa5199db2 }
}


// ============================================================================
// Function : FUN_7fffa5199e50  |  RVA: 0xa29e50  |  Size: 644 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5199f70) */
/* WARNING: Removing unreachable block (ram,0x7fffa519a054) */
/* WARNING: Removing unreachable block (ram,0x7fffa519a058) */
/* WARNING: Removing unreachable block (ram,0x7fffa519a08d) */
/* WARNING: Removing unreachable block (ram,0x7fffa519a091) */

void FUN_7fffa5199e50(uint64_t param_1,uint32_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t in_R10;
  
  bVar1 = (uint8_t)param_2 & 0x1f;
  uVar3 = (in_R10 << 0x28 | in_R10 >> 0x18) ^ (in_R10 << 0x30 | in_R10 >> 0x10) ^ in_R10;
  uVar2 = (uVar3 << 0x20 | uVar3 >> 0x20) ^ uVar3;
  uVar4 = uVar3 << 0x10 | uVar3 >> 0x30;
  uVar3 = uVar4 ^ uVar2;
  if ((int64_t)(uint64_t)(0xd577a978 - (param_2 ^ 0xeda13626)) <=
      (int64_t)(int)((0xae369338U >> bVar1 | -0x51c96cc8 << 0x20 - bVar1) + 0xcba73831)) {
    uVar3 = uVar4 * uVar2;
  }
  if ((*(uint32_t *)((uVar3 << 0x20 | uVar3 >> 0x20) * -0x2ddbb50cf33d2ff5 + 0x20) ^ 0x2bb340dd) +
      ((param_2 ^ 0x1710159c) << 8 | (param_2 ^ 0x1710159c) >> 0x18) == 0x5c544b6c) {
    bVar1 = (uint8_t)param_2 & 0xf;
    (*(code *)((int64_t)(short)(0xc8f5U >> bVar1 | -0x370b << 0x10 - bVar1) + 0x7fffa55d5eed))();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa519a0e0  |  RVA: 0xa2a0e0  |  Size: 792 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa519a2c4) */

void FUN_7fffa519a0e0(void)

{
  int64_t lVar1;
  uint8_t bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  
  uRam00007fffa47bfaa8 = 0;
  auRam00007fffa47bfad9 = (uint8_t  [16])0x0;
  auRam00007fffa47bfac9 = (uint8_t  [16])0x0;
  auRam00007fffa47bfab9 = (uint8_t  [16])0x0;
  uVar3 = rdtsc();
  uVar4 = (uVar3 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar3)) * 0x2880fb19c494f7b + 0xb;
  uVar3 = 0;
  do {
    uVar7 = uVar3;
    uVar3 = uVar7 + 4;
    lVar6 = (uVar4 & 0xffffffff) * 0x9c494f7b +
            ((uVar4 & 0xffffffff) * 0x3b1 + (uVar4 >> 0x20) * 0x9c494f7b << 0x20) + 0xb;
    lVar1 = lVar6 * 0x2880fb19c494f7b + 0xb;
    *(char *)(uVar7 + 0x7fffa47bfaa0) = (char)((uint64_t)lVar6 >> 0x20);
    lVar6 = lVar1 * 0x2880fb19c494f7b + 0xb;
    *(char *)(uVar7 + 0x7fffa47bfaa2) = (char)((uint64_t)lVar6 >> 0x20);
    uVar4 = lVar6 * 0x2880fb19c494f7b + 0xb;
    *(char *)(uVar7 + 0x7fffa47bfaa3) = (char)(uVar4 >> 0x20);
    *(char *)(uVar7 + 0x7fffa47bfaa1) = (char)((uint64_t)lVar1 >> 0x20);
  } while ((uVar3 << 0x32 | uVar3 >> 0xe) != 0x130000000000000);
  bVar2 = (uint8_t)uVar3;
  uVar4 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)
                           (short)(0x203f << (bVar2 & 0xf) | 0x203fU >> 0x10 - (bVar2 & 0xf)) +
                          0x7fffa47c08a5) * 0x33333334 + 0x33333334) * 5;
  iVar5 = (int)uVar7 + 5;
  uVar7 = uVar4 | 0x20;
  if ((uint64_t)(iVar5 * 0x2fb88000 | (uint32_t)(iVar5 * 0x7d4a5f71) >> 0x11) <=
      (uint64_t)(int64_t)(int)(0x5c1dad2U >> (bVar2 & 0x1f) | 0x5c1dad2 << 0x20 - (bVar2 & 0x1f)))
  {
    uVar7 = uVar4 >> 0x20;
  }
  *(uint64_t *)((int64_t)((int)uVar3 + -0xa1ff) + 0x7fffa47c9c6c + uVar7 * 8) =
       *(uint64_t *)
        ((int64_t)(short)(-0x7796 << (bVar2 & 0xf) | 0x886aU >> 0x10 - (bVar2 & 0xf)) +
        0x7fffa47c525b);
  *(char *)((int64_t)(-0x9030 - (int)uVar3) + 0x7fffa47c8b24) = (char)uVar7;
  return;
}


// ============================================================================
// Function : FUN_7fffa519a400  |  RVA: 0xa2a400  |  Size: 65 bytes
// Callers  : FUN_7fffa5697520@0xf27520, FUN_7fffa50c98a5@0x9598a5, FUN_7fffa51817c7@0xa117c7
// Callees  : none
// ============================================================================
void FUN_7fffa519a400(void)

{
  code *pcVar1;
  
  FUN_7fffa47de300("string too long");
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa519a460  |  RVA: 0xa2a460  |  Size: 1113 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa519a729) overlaps instruction at (ram,0x7fffa519a727)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa519a71c) */
/* WARNING: Removing unreachable block (ram,0x7fffa519a524) */
/* WARNING: Removing unreachable block (ram,0x7fffa519a8ae) */

void FUN_7fffa519a460(void)

{
  uRam00007fffa47bab68 = 0xc460fc74ddb0c8a3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  uRam00007fffa47bab80 = uRam00007fffa4781110;
  uRam00007fffa47bab88 = 0x6151f48b19f561bb;
  uRam00007fffa47bab98 = 0xe5d09fef6dfa3acb;
  uRam00007fffa47bab90 = 0x7914a04a8e1acf3e;
  uRam00007fffa47baba0 = 0xeda8665b39fcbf64;
  lRam00007fffa47bab70 = -0x58e11d09c7ed38fd - lRam00007fffa4780b00;
  uRam00007fffa47bab78 = 0x3a292c62eafb7c42;
  return;
}


// ============================================================================
// Function : FUN_7fffa519a8c0  |  RVA: 0xa2a8c0  |  Size: 1 bytes
// Callers  : FUN_7fffa5488e60@0xd18e60
// Callees  : none
// ============================================================================
void FUN_7fffa519a8c0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa519a8c4  |  RVA: 0xa2a8c4  |  Size: 1 bytes
// Callers  : FUN_7fffa4ecd2c4@0x75d2c4, FUN_7fffa5213f88@0xaa3f88
// Callees  : none
// ============================================================================
void FUN_7fffa519a8c4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa519a8d0  |  RVA: 0xa2a8d0  |  Size: 537 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa519a8d0(void) {
    /* +0xa2a8d0 */ __asm { PUSH RBP }
    /* +0xa2a8d1 */ __asm { PUSH R14 }
    /* +0xa2a8d3 */ __asm { PUSH R12 }
    /* +0xa2a8d5 */ __asm { PUSH RSI }
    /* +0xa2a8d6 */ __asm { PUSH RBX }
    /* +0xa2a8d7 */ __asm { PUSH RDI }
    /* +0xa2a8d8 */ __asm { PUSH R13 }
    /* +0xa2a8da */ __asm { PUSH R15 }
    /* +0xa2a8dc */ __asm { SUB RSP,0x458 }
    /* +0xa2a8e3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xa2a8eb */ __asm { MOVDQA xmmword ptr [RBP + 0x3c0],XMM12 }
    /* +0xa2a8f4 */ __asm { MOVDQA xmmword ptr [RBP + 0x3b0],XMM14 }
    /* +0xa2a8fd */ __asm { MOVDQA xmmword ptr [RBP + 0x3a0],XMM10 }
    /* +0xa2a906 */ __asm { MOVDQA xmmword ptr [RBP + 0x390],XMM8 }
    /* +0xa2a90f */ __asm { MOVDQA xmmword ptr [RBP + 0x380],XMM9 }
    /* +0xa2a918 */ __asm { MOVDQA xmmword ptr [RBP + 0x370],XMM6 }
    /* +0xa2a920 */ __asm { MOVDQA xmmword ptr [RBP + 0x360],XMM11 }
    /* +0xa2a929 */ __asm { MOVAPS xmmword ptr [RBP + 0x350],XMM7 }
    /* +0xa2a930 */ __asm { MOVDQA xmmword ptr [RBP + 0x340],XMM13 }
    /* +0xa2a939 */ __asm { MOVDQA xmmword ptr [RBP + 0x330],XMM15 }
    /* +0xa2a942 */ __asm { MOV qword ptr [RBP + 0x328],-0x2 }
    /* +0xa2a94d */ __asm { MOV R14,RAX }
    /* +0xa2a950 */ __asm { MOV dword ptr [RBP + 0x140],0xc443031d }
    /* +0xa2a95a */ __asm { MOV R9D,dword ptr [RBP + 0x140] }
    /* +0xa2a961 */ __asm { LEA RAX,[0x7fffa4787357] }
    /* +0xa2a968 */ __asm { MOV RCX,-0x19fef11f32c0a7e6 }
    /* +0xa2a972 */ __asm { CMP RAX,RCX }
    /* +0xa2a975 */ __asm { NOP }
    /* +0xa2a976 */ __asm { NOP }
    /* +0xa2a977 */ __asm { NOP }
    /* +0xa2a978 */ __asm { NOP }
    /* +0xa2a979 */ __asm { NOP }
    /* +0xa2a97a */ __asm { MOV R9D,0xa964f095 }
    /* +0xa2a980 */ __asm { MOV R11D,0x5f14ece5 }
    /* +0xa2a986 */ __asm { MOV RDX,R14 }
    /* +0xa2a989 */ __asm { XOR R11D,EDX }
    /* +0xa2a98c */ __asm { MOVD XMM7,EDX }
    /* +0xa2a990 */ __asm { MOV ECX,0xe85f714d }
    /* +0xa2a995 */ __asm { ADD ECX,EDX }
    /* +0xa2a997 */ __asm { NOT ECX }
    /* +0xa2a999 */ __asm { MOV R8,-0x301a20a545d1a9a3 }
    /* +0xa2a9a3 */ __asm { MOV RDX,RCX }
    /* +0xa2a9a6 */ __asm { OR RDX,R8 }
    /* +0xa2a9a9 */ __asm { ADD R11D,0x699020e4 }
    /* +0xa2a9b0 */ __asm { MOVSXD R11,R11D }
    /* +0xa2a9b3 */ __asm { MOV R10D,0x70bc536c }
    /* +0xa2a9b9 */ __asm { ADD R10D,0xac7d78f9 }
    /* +0xa2a9c0 */ __asm { ROL R10D,0x10 }
    /* +0xa2a9c4 */ __asm { IMUL R8,RCX }
    /* +0xa2a9c8 */ __asm { MOVD XMM2,R10D }
    /* +0xa2a9cd */ __asm { PADDD XMM2,XMM7 }
    /* +0xa2a9d1 */ __asm { MOVD R10D,XMM2 }
    /* +0xa2a9d6 */ __asm { CMP R11,R10 }
    /* +0xa2a9d9 */ __asm { CMOVC R8,RDX }
    /* +0xa2a9dd */ __asm { ROL R8,0x3c }
    /* +0xa2a9e1 */ __asm { XOR R9D,0xbc2ad733 }
    /* +0xa2a9e8 */ __asm { ADD R9,R8 }
    /* +0xa2a9eb */ __asm { MOV R8,-0x6aef6259a9eba834 }
    /* +0xa2a9f5 */ __asm { CMP R9,R8 }
    /* +0xa2a9f8 */ __asm { JNZ 0x7fffa519aa4b }
    /* +0xa2a9fa */ __asm { MOV R9D,0xce4e889a }
    /* +0xa2aa00 */ __asm { IMUL R9D,R9D,0x7ffe0009 }
    /* +0xa2aa07 */ __asm { MOVZX R10D,uint8_t ptr [RAX + -0x2dc8] }
    /* +0xa2aa0f */ __asm { ROL R9D,CL }
    /* +0xa2aa12 */ __asm { MOVD XMM2,R9D }
    /* +0xa2aa17 */ __asm { LEA RCX,[RAX + R10*0x4] }
    /* +0xa2aa1b */ __asm { ADD RCX,-0x2dbe }
    /* +0xa2aa22 */ __asm { MOVZX R11D,uint8_t ptr [RAX + R10*0x4 + -0x2dbe] }
    /* +0xa2aa2b */ __asm { NOT R11B }
    /* +0xa2aa2e */ __asm { ROL R11B,0x3 }
    /* +0xa2aa32 */ __asm { PSUBD XMM2,XMM7 }
    /* +0xa2aa36 */ __asm { MOVD R9D,XMM2 }
    /* +0xa2aa3b */ __asm { ADD R9D,0x9fad2183 }
    /* +0xa2aa42 */ __asm { MOV qword ptr [RBP + 0x2d8],R9 }
    /* +0xa2aa49 */ __asm { JMP 0x7fffa519aa8b }
    /* +0xa2aa4b */ __asm { MOV R9D,0x6fd43655 }
    /* +0xa2aa51 */ __asm { IMUL R9D,R9D,-0xb38421 }
    /* +0xa2aa58 */ __asm { NOT R9D }
    /* +0xa2aa5b */ __asm { MOV ECX,R14D }
    /* +0xa2aa5e */ __asm { ROL R9D,CL }
    /* +0xa2aa61 */ __asm { MOV qword ptr [RBP + 0x2d8],R9 }
    /* +0xa2aa68 */ __asm { MOVZX R10D,uint8_t ptr [RAX + -0x2dc8] }
    /* +0xa2aa70 */ __asm { LEA RCX,[RAX + R10*0x4] }
    /* +0xa2aa74 */ __asm { ADD RCX,-0x2dbe }
    /* +0xa2aa7b */ __asm { MOVZX R11D,uint8_t ptr [RAX + R10*0x4 + -0x2dbe] }
    /* +0xa2aa84 */ __asm { NOT R11B }
    /* +0xa2aa87 */ __asm { ROL R11B,0x3 }
    /* +0xa2aa8b */ __asm { MOV uint8_t ptr [RBP + 0x140],R11B }
    /* +0xa2aa92 */ __asm { MOVZX R11D,uint8_t ptr [RCX + 0x1] }
    /* +0xa2aa97 */ __asm { MOVZX EDX,uint8_t ptr [RCX + 0x2] }
    /* +0xa2aa9b */ __asm { MOVZX R8D,uint8_t ptr [RCX + 0x3] }
    /* +0xa2aaa0 */ __asm { NOT R8B }
    /* +0xa2aaa3 */ __asm { NOT R11B }
    /* +0xa2aaa6 */ __asm { ROL R11B,0x3 }
    /* +0xa2aaaa */ __asm { MOV uint8_t ptr [RBP + 0x141],R11B }
    /* +0xa2aab1 */ __asm { NOT DL }
    /* +0xa2aab3 */ __asm { ROL DL,0x3 }
    /* +0xa2aab6 */ __asm { MOV uint8_t ptr [RBP + 0x142],DL }
    /* +0xa2aabc */ __asm { ROL R8B,0x3 }
    /* +0xa2aac0 */ __asm { MOV uint8_t ptr [RBP + 0x143],R8B }
    /* +0xa2aac7 */ __asm { MOV R9D,0x97cd0fa7 }
    /* +0xa2aacd */ __asm { XOR R9D,dword ptr [RBP + 0x140] }
    /* +0xa2aad4 */ __asm { BT R9D,R9D }
    /* +0xa2aad8 */ __asm { NOP }
    /* +0xa2aad9 */ __asm { NOP }
    /* +0xa2aada */ __asm { NOP }
    /* +0xa2aadb */ __asm { NOP }
    /* +0xa2aadc */ __asm { NOP }
    /* +0xa2aadd */ __asm { NOP }
    /* +0xa2aade */ __asm { NOP }
    /* +0xa2aadf */ __asm { NOP }
    /* +0xa2aae0 */ __asm { NOP }
    /* +0xa2aae1 */ __asm { NOP }
    /* +0xa2aae2 */ __asm { NOP }
    /* +0xa2aae3 */ __asm { NOP }
    /* +0xa2aae4 */ __asm { NOP }
    /* +0xa2aae5 */ __asm { NOP }
    /* +0xa2aae6 */ __asm { NOP }
    /* +0xa2aae7 */ __asm { NOP }
    /* +0xa2aae8 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa51a5c80  |  RVA: 0xa35c80  |  Size: 345 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa51a5c80(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  
  uVar6 = *(int *)(*(int64_t *)(param_2 + 0x140) + 4) - 1;
  *(uint32_t *)(*(int64_t *)(param_2 + 0x140) + 4) = uVar6;
  uVar3 = CONCAT62((int6)((uint64_t)in_RAX >> 0x10),0x81fd);
  uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x98);
  uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x78);
  uVar7 = ~(uVar5 ^ 0x4b28e4e8);
  if ((uVar7 << 0x19 | uVar7 >> 7) - uVar4 == 0x4b6fff6e &&
      uVar6 == (((uVar4 ^ (uint32_t)uVar3) - uVar5) * 0x4753 & 0xffff)) {
    puVar2 = *(uint32_t **)(param_2 + 0x140);
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2,&IMAGE_DOS_HEADER_7fffa4770000,uVar3 & 0xffffffff,uVar1)
    ;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa51a5f90  |  RVA: 0xa35f90  |  Size: 1106 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa51a5f90(int64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *pcVar4;
  uint8_t bVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t *plVar11;
  bool bVar12;
  int64_t in_R10;
  uint32_t in_R11D;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  
  plVar8 = (int64_t *)((in_R10 << 0x3a) + in_R10);
  lVar2 = plVar8[2];
  uVar15 = plVar8[3];
  plVar11 = (int64_t *)
            ((uint64_t)(param_4 * 0x645d08bca91549e1) >> 0x32 ^ param_4 * 0x645d08bca91549e1);
  bVar5 = (uint8_t)in_R11D;
  uVar6 = (*(code *)(&UNK_7fffa5184c33 +
                    (int)(0xfff935efU >> (bVar5 & 0x1f) | -0x6ca11 << 0x20 - (bVar5 & 0x1f))))
                    (plVar11);
  if (uVar15 - lVar2 < uVar6) {
    uVar14 = 0x7ffffffffffffffe;
    if (0x7ffffffffffffffeU - lVar2 < uVar6) {
      (*(code *)((int64_t)(int)(in_R11D ^ 0xd029fdf0) + 0x7fffa51a6a8d))();
      pcVar4 = (code *)__debugbreak();
      (*pcVar4)();
      return;
    }
    uVar13 = uVar6 + lVar2 | 7;
    if (((uVar13 < 0x7fffffffffffffff) && (uVar15 <= 0x7ffffffffffffffe - (uVar15 >> 1))) &&
       (uVar14 = (uVar15 >> 1) + uVar15, uVar14 < uVar13)) {
      uVar14 = uVar13;
    }
    uVar13 = uVar14 * 2 + 2;
    uVar7 = (uint64_t)(in_R11D ^ 0xe9a04b8d);
    FUN_7fffa526aab0(uVar7,FUN_7fffa526aab0,(uVar14 * -2 - 3 & uVar13 << 0x3c) * 0x11a9a73a4,
                     ((uVar13 | uVar13 << 0x3c) ^ uVar13) *
                     (uint64_t)
                     (0x842ab70aU >> (bVar5 & 0x1f) | -0x7bd548f6 << 0x20 - (bVar5 & 0x1f)));
    lVar10 = (uVar7 << 0x2c | uVar7 >> 0x14) - ((uVar7 >> 0x14) << 0x36);
    plVar8[2] = uVar6 + lVar2;
    plVar8[3] = uVar14;
    if (uVar15 < 8) {
      FUN_7fffa56a5f20(lVar10,plVar11,uVar6 * 2);
      FUN_7fffa56a5f20(lVar10 + uVar6 * 2,plVar8,lVar2 * 2 + 2);
    }
    else {
      lVar3 = *plVar8;
      FUN_7fffa56a5f20(lVar10,plVar11,uVar6 * 2);
      FUN_7fffa56a5f20(lVar10 + uVar6 * 2,lVar3,lVar2 * 2 + 2);
      (*(code *)((int64_t)(short)(0x18ceU >> (bVar5 & 0xf) | 0x18ce << 0x10 - (bVar5 & 0xf)) +
                0x7fffa568b917))();
    }
    *plVar8 = lVar10;
  }
  else {
    plVar1 = (int64_t *)((int64_t)plVar11 + uVar6 * 2);
    plVar8[2] = uVar6 + lVar2;
    plVar9 = plVar8;
    if (7 < uVar15) {
      plVar9 = (int64_t *)*plVar8;
    }
    bVar12 = plVar1 <= plVar9;
    uVar15 = uVar6;
    if (plVar11 <= (int64_t *)((int64_t)plVar9 + lVar2 * 2) && !bVar12) {
      if (plVar9 < plVar11 || (int64_t)plVar9 - (int64_t)plVar11 == 0) {
        uVar15 = 0;
      }
      else {
        bVar12 = false;
        uVar15 = (int64_t)plVar9 - (int64_t)plVar11 >> 1;
      }
    }
    FUN_7fffa56a5f20((uint16_t *)((int64_t)plVar9 + uVar6 * 2),plVar9,lVar2 * 2 + 2,bVar12);
    FUN_7fffa56a5f20(plVar9,plVar11,uVar15 * 2);
    uVar14 = -uVar15;
    if ((in_R11D + 0x75ce6228 >> 1 | (uint32_t)((in_R11D + 0x75ce6228 & 1) != 0) << 0x1f) <=
        in_R11D + 0x4d07d939) {
      uVar14 = uVar15;
    }
    FUN_7fffa56a5f20((uint16_t *)((int64_t)plVar9 + uVar15 * 2),
                     (uint16_t *)((int64_t)plVar1 + uVar15 * 2),(uVar14 + uVar6) * 2);
  }
  lVar2 = *plVar8;
  lVar10 = plVar8[1];
  lVar3 = plVar8[3];
  param_1[2] = plVar8[2];
  param_1[3] = lVar3;
  *param_1 = lVar2;
  param_1[1] = lVar10;
  *(uint16_t *)plVar8 = 0;
  plVar8[3] = 7;
  plVar8[2] = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa51a63f0  |  RVA: 0xa363f0  |  Size: 8766 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa51a6d7d) overlaps instruction at (ram,0x7fffa51a6d75)
    */
/* WARNING: Control flow encountered bad instruction data */

int * FUN_7fffa51a63f0(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  int iVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  bool bVar9;
  uint16_t uVar10;
  uint32_t uVar11;
  uint64_t in_RAX;
  int *piVar12;
  uint8_t bVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int *piVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint8_t *puVar20;
  uint64_t *puVar21;
  uint8_t *puVar22;
  uint32_t uVar23;
  uint8_t *pbVar24;
  char *pcVar25;
  uint8_t *pbVar26;
  uint64_t in_R11;
  uint64_t uVar27;
  uint32_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint8_t in_AF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_ID;
  uint64_t uVar31;
  uint64_t uStack_180;
  uint8_t auStack_178 [16];
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t auStack_158 [4];
  uint64_t uStack_138;
  int aiStack_130 [2];
  uint64_t auStack_128 [2];
  int *piStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int *piStack_f0;
  uint64_t auStack_e8 [5];
  uint32_t uStack_bc;
  uint64_t uStack_b8;
  uint32_t uStack_ac;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint8_t *pbStack_90;
  uint64_t uStack_88;
  uint32_t uStack_7c;
  int *piStack_78;
  uint64_t uStack_70;
  uint32_t uStack_64;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  puVar22 = auStack_178;
  puVar20 = auStack_178;
  uVar11 = (uint32_t)in_RAX;
  uVar27 = (in_R11 << 0x26 | in_R11 >> 0x1a) + (uint64_t)(uVar11 ^ 0xa5955c77);
  uVar27 = (uVar27 << 0x3e | uVar27 >> 2) ^ (uVar27 << 0x20 | uVar27 >> 0x20) ^ uVar27;
  uVar14 = uVar27 << 0x3c | uVar27 >> 4;
  uVar31 = uVar14 & uVar27;
  if (uVar11 + 0x81c9b88f <= (uVar11 + 0xfa26446c) * -0x4e250b5f) {
    uVar31 = uVar14 ^ uVar27;
  }
  puVar15 = (uint64_t *)((uVar31 ^ uVar27) << 8 | (uVar31 ^ uVar27) >> 0x38);
  pbStack_90 = (uint8_t *)*puVar15;
  piStack_f0 = (int *)puVar15[1];
  bVar4 = (uint8_t)in_RAX;
  piVar12 = (int *)0xffffffff0b65edc9;
  uVar31 = (uint64_t)((in_NT & 1) != 0) * 0x4000 | (uint64_t)((in_IF & 1) != 0) * 0x200 |
           (uint64_t)((in_AF & 1) != 0) * 0x10 | (uint64_t)((in_ID & 1) != 0) * 0x200000 |
           (uint64_t)((in_AC & 1) != 0) * 0x40000;
  uStack_64 = 0xc7507d7;
  uStack_ac = uVar11 | 1;
  if ((int *)0xf < piStack_f0) {
    piVar16 = piStack_f0;
    pbVar24 = pbStack_90;
    do {
      pbVar26 = pbVar24 + 1;
      bVar13 = pbVar24[0xc];
      if (((uVar11 + 0xecad618f) * 0x100000 | uVar11 + 0xecad618f >> 0xc) < (uVar11 ^ 0xeacbc637)) {
        uVar14 = (uint64_t)*pbVar26 ^ ((uint64_t)*pbVar24 ^ 0x679937d419b80cf9) * 0x200000020d9;
        uVar27 = (uint64_t)(int)(uVar11 + 0x1479db11);
      }
      else {
        uVar27 = (uint64_t)(uStack_ac * 0x3492d445);
        uVar14 = ((uint64_t)*pbVar24 ^ 0x679937d419b80cf9) * 0x200000020d9 ^ (uint64_t)*pbVar26;
      }
      uVar23 = 0xa7361bf - (int)uVar27;
      uVar23 = uVar23 >> (bVar4 & 0x1f) | uVar23 << 0x20 - (bVar4 & 0x1f);
      bVar1 = pbVar24[0xe];
      uVar18 = ((((((((((uint64_t)pbVar24[2] ^ uVar14 * 0x200000020d9) *
                       ((-0x1a10a7804a98bef6 - in_RAX) * (uVar27 | 1) ^ 0x3942017) ^
                      (uint64_t)pbVar24[3]) * 0x200000020d9 ^ (uint64_t)pbVar24[4]) *
                     0x200000020d9 ^ (uint64_t)pbVar24[5]) * 0x200000020d9 ^ (uint64_t)pbVar24[6])
                   * 0x200000020d9 ^ (uint64_t)pbVar24[7]) * 0x200000020d9 ^ (uint64_t)pbVar24[8])
                 * 0x200000020d9 ^ (uint64_t)pbVar24[9]) * 0x200000020d9 ^ (uint64_t)pbVar24[10])
               * 0x200000020d9;
      bVar2 = pbVar24[0xf];
      bVar3 = pbVar24[0xd];
      uVar14 = uVar18 + pbVar24[0xb];
      if ((uVar23 * 0x8000000 | uVar23 * 0x781b8d21 >> 5) == 0x1951b3d2) {
        uVar14 = pbVar24[0xb] ^ uVar18;
      }
      if ((*(int64_t *)
            ((uint64_t)
             (uint16_t)(((0x4011 << (bVar4 & 0xf) | 0x4011U >> 0x10 - (bVar4 & 0xf)) ^ 0xfc80) -
                     (short)uVar27) + 0xff00000000) + 0x6f0U & 0xa3a31a822bbed2c3) ==
          0x4a8a7adac7716dc3) {
        pcVar25 = (char *)((uint64_t)bVar1 - 0x5e);
        *pcVar25 = *pcVar25 + -0x24;
        piVar16 = (int *)CONCAT62((int6)((uint64_t)piVar16 >> 0x10),CONCAT11(0x88,(char)piVar16));
      }
      uVar14 = (((uVar14 * 0x200000020d9 ^ (uint64_t)bVar13) * 0x200000020d9 ^ (uint64_t)bVar3) *
                0x200000020d9 ^ (uint64_t)bVar1) * 0x200000020d9 ^ (uint64_t)bVar2;
      piVar12 = (int *)(uint64_t)
                       (0x31bac9e8U >> (bVar4 & 0x1f) | 0x31bac9e8 << 0x20 - (bVar4 & 0x1f));
      uVar23 = (uVar11 - (int)uVar27) + 0x8444d6dd;
      lVar19 = (uVar14 * 0x80000008364 | uVar14 * 0x200000020d9 >> 0x3e) + 0x5d0fb7f0;
      bVar9 = 0x4a8806cd548c78cf < lVar19;
      if (piVar12 <= (int *)(uint64_t)(uVar23 * 4 | uVar23 >> 0x1e)) {
        bVar9 = lVar19 == 0x4a8806cd548c78d0;
      }
      if (bVar9) {
        return piVar12;
      }
      piVar16 = (int *)((int64_t)piVar16 - 1);
      pbVar24 = pbVar26;
    } while ((int *)0xf < piVar16);
  }
  if ((int *)0xe < piStack_f0) {
    pbVar24 = pbStack_90 + 0xe;
    uStack_58 = in_RAX | 1;
    auStack_128[0] = 0x1000000088b;
    piStack_118 = piStack_f0;
    while( true ) {
      piStack_118 = (int *)((int64_t)piStack_118 - 1);
      uVar14 = (uint64_t)*pbVar24;
      if ((int64_t)(uint64_t)(uVar11 ^ 0x38beed56) <= (int64_t)(int)(uStack_ac * -0x274ba6f0)) {
        uVar14 = (int64_t)(char)*pbVar24;
      }
      piVar12 = (int *)~(uStack_58 * -0x66a2f9ff1476a000 | uStack_58 * 0x5b64cae830075c4b >> 0x33);
      if ((uVar14 ^ (0x44d000001000 << (bVar4 & 0x3f) | 0x44d000001000U >> 0x40 - (bVar4 & 0x3f)) *
                    (((((((((((((uint64_t)pbVar24[-0xc] ^
                               ((uint64_t)pbVar24[-0xd] ^
                               ((uint64_t)pbVar24[-0xe] ^ 0xfdceb71497949c43) * 0x1000000044d) *
                               0x1000000044d) * 0x1000000044d ^ (uint64_t)pbVar24[-0xb]) *
                              (int64_t)piVar12 ^ (uint64_t)pbVar24[-10]) * 0x1000000044d ^
                            (uint64_t)pbVar24[-9]) * 0x1000000044d ^ (uint64_t)pbVar24[-8]) *
                           0x1000000044d ^ (uint64_t)pbVar24[-7]) * 0x1000000044d ^
                         (uint64_t)pbVar24[-6]) * 0x1000000044d ^ (uint64_t)pbVar24[-5]) *
                        0x1000000044d ^ (uint64_t)pbVar24[-4]) * 0x1000000044d ^
                      (uint64_t)pbVar24[-3]) * 0x1000000044d ^ (uint64_t)pbVar24[-2]) *
                     0x1000000044d ^ (uint64_t)pbVar24[-1])) * (in_RAX + 0xff1eb691b1) ==
          -0x5a314671b514695c) {
        return piVar12;
      }
      if (piStack_118 < (int *)0xf) break;
      pbVar24 = pbVar24 + 1;
    }
    if ((int *)0xf < piStack_f0) {
      pbVar24 = pbStack_90 + 0xf;
      piStack_78 = piStack_f0;
      while( true ) {
        piStack_78 = (int *)((int64_t)piStack_78 - 1);
        if (uVar11 + 0x86821878 < ((uVar11 + 0x644a57b5) * 4 | uVar11 + 0x644a57b5 >> 0x1e)) {
          uVar23 = uStack_ac * 0x7b5d5160 ^ 0x7ffe026c;
        }
        else {
          uVar23 = (uStack_ac * 0x5cd608b0 | uStack_ac * -0x4a329f75 >> 0x1c) ^ 0xd7e700ff;
        }
        uStack_168 = (uint64_t)(int)uVar23;
        uVar10 = (-0x76bd - (short)uVar23) * ((uint16_t)in_RAX | 1);
        uVar27 = ((uint64_t)pbVar24[-9] ^
                 (((uint64_t)pbVar24[-0xb] ^
                  (((((uint64_t)pbVar24[-0xf] ^ 0xffd5408f13b72d75) * 0x200000001cb ^
                    (uint64_t)pbVar24[-0xe]) * 0x200000001cb ^ (uint64_t)pbVar24[-0xd]) *
                   0x200000001cb ^ (uint64_t)pbVar24[-0xc]) * 0x200000001cb) * 0x200000001cb ^
                 (uint64_t)pbVar24[-10]) * 0x200000001cb) * 0x200000001cb ^ (uint64_t)pbVar24[-8];
        uVar14 = uVar27 - 0x200000001cb;
        if ((uVar23 + 0x9e0aad9c ^ 0xb06db20a) + uVar11 <
            (0x6b9f986b - uVar23 >> (bVar4 & 0x1f) | 0x6b9f986b - uVar23 << 0x20 - (bVar4 & 0x1f)))
        {
          uVar14 = ~((-0x1349f80140f7637 - uStack_168) * uStack_58) * uVar27;
        }
        if (*(uint64_t *)
             (*(int64_t *)((uint64_t)(uint16_t)(uVar10 * 8 | uVar10 >> 0xd) + 0xff00000000) + 0x60)
            == ((uStack_168 ^ 0xad6deca55c48917c) << 0x2c |
               (uStack_168 ^ 0xad6deca55c48917c) >> 0x14)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar18 = (in_RAX ^ 0x2005554a63d) - 0x4e535dbb;
        uVar29 = uVar18 ^ 0x65ca772d;
        uVar14 = (((uVar14 ^ pbVar24[-7]) * 0x200000001cb ^ (uint64_t)pbVar24[-6]) * 0x200000001cb
                 ^ (uint64_t)pbVar24[-5]) * 0x200000001cb;
        uVar27 = uVar14 ^ pbVar24[-4];
        if ((((((uVar29 & 0xffffffff) * (uVar27 & 0xffffffff) +
                ((uVar14 >> 0x20) * (uVar29 & 0xffffffff) + (uVar18 >> 0x20) * (uVar27 & 0xffffffff)
                << 0x20) ^ (uint64_t)pbVar24[-3]) * 0x200000001cb ^ (uint64_t)pbVar24[-2]) *
              0x200000001cb ^ (uint64_t)pbVar24[-1]) * 0x200000001cb ^ (uint64_t)*pbVar24) *
            0x200000001cb == -0x1662cc4fe73db4b6) {
          return (int *)0x5292135a54736fb6;
        }
        if (piStack_78 < (int *)0x10) break;
        pbVar24 = pbVar24 + 1;
      }
      uVar28 = (uVar23 + 0x99fe6a96) * -0x3fffff6d;
      if ((int *)(uint64_t)(uVar28 >> (bVar4 & 0x1f) | uVar28 << 0x20 - (bVar4 & 0x1f)) <
          piStack_f0) {
        uStack_100 = (int64_t)piStack_f0 - 1;
        pbVar24 = pbStack_90 + 0x10;
        uStack_110 = 0xffffffff2aabb295;
        while( true ) {
          if ((int64_t)(uint64_t)(uVar11 + 0xdfff3e49 ^ uVar23) <
              (int64_t)
              (((uStack_168 + 0x742b200041896210) * 0x100000 |
               uStack_168 + 0x742b200041896210 >> 0x2c) - 0x700dcbc5 ^ in_RAX)) {
            uStack_b8 = (uint64_t)(int)(uVar11 ^ 0x4228462c);
            uStack_160 = (uint64_t)*pbVar24;
            if ((uint64_t)((0x61253ff6 - uVar23 ^ 0x9e781ee7) + uVar11) == 0xffffffffaefcecdc) {
              uStack_160 = (int64_t)(char)*pbVar24;
            }
          }
          else {
            uStack_160 = (uint64_t)*pbVar24;
            uStack_b8 = (uint64_t)
                        ((0x8787f9c8U >> (bVar4 & 0x1f) | -0x78780638 << 0x20 - (bVar4 & 0x1f)) +
                        uVar23);
          }
          uVar28 = uVar23 + 0xc88f4087 >> (bVar4 & 0x1f) |
                   uVar23 + 0xc88f4087 << 0x20 - (bVar4 & 0x1f);
          bVar13 = (uint8_t)uVar23 & 0x1f;
          auStack_158[0] = (uint64_t)pbVar24[-0xc];
          uStack_138 = (uint64_t)(uVar28 << 0x10 | uVar28 >> 0x10);
          uStack_f8 = (uint64_t)pbVar24[-10];
          auStack_e8[4] = (uint64_t)pbVar24[-7];
          uStack_50 = (uint64_t)pbVar24[-0xe];
          uVar28 = uStack_ac * -0xf22ef97 + 0x25544b5;
          uVar17 = (uint32_t)uStack_b8;
          bVar1 = (uint8_t)uStack_b8;
          uStack_48 = (uint64_t)pbVar24[-9];
          uStack_98 = (uint64_t)pbVar24[-4];
          auStack_e8[0] = uStack_b8 | 1;
          uVar14 = (int64_t)(char)pbVar24[-8];
          if ((uint64_t)~(uVar17 + 0x9c9ecabe) <
              (uint64_t)
              (int64_t)(int)((0x6d1a5d85 << bVar13 | 0x6d1a5d85U >> 0x20 - bVar13) - uVar11)) {
            uVar14 = (uint64_t)pbVar24[-8];
          }
          uVar27 = (int64_t)(char)pbVar24[1];
          if ((uVar17 + 0x2681bc86 ^ uVar11) < uStack_138) {
            uVar27 = (uint64_t)pbVar24[1];
          }
          uVar18 = ((uint64_t)pbVar24[-6] ^
                   ((((((-in_RAX - 0xff7b555129 ^ uStack_b8) *
                        (((((uint64_t)pbVar24[-0xf] ^
                           ((0xf2aabba1efffffefU >> (bVar4 & 0x3f) |
                            -0xd55445e10000011 << 0x40 - (bVar4 & 0x3f)) ^ 0xffffffff2aabb295) *
                           ((uint64_t)pbVar24[-0x10] ^ 0xb744a6f8c65b7183)) * 0x1000000088b ^
                          (uint64_t)pbVar24[-0xe]) *
                          (((uStack_b8 & 0xffffffff | 1) * 0x8c6a8357 +
                           ((uStack_b8 & 0xffffffff | 1) * 0xaa3b7a05 +
                            (uStack_b8 >> 0x20) * 0x8c6a8357 << 0x20)) - in_RAX) ^
                         (uint64_t)pbVar24[-0xd]) * 0x1000000088b ^ auStack_158[0]) ^
                       (uint64_t)pbVar24[-0xb]) * 0x1000000088b ^ (uint64_t)pbVar24[-10]) *
                      0x1000000088b ^ (uint64_t)pbVar24[-9]) * 0x1000000088b ^ uVar14) *
                    0x1000000088b ^ (uint64_t)pbVar24[-7]) * 0x1000000088b) * 0x1000000088b ^
                   (uint64_t)pbVar24[-5];
          uVar14 = uVar18 | 0x1000000088b;
          if ((uint64_t)(uVar28 << (bVar1 & 0x1f) | uVar28 >> 0x20 - (bVar1 & 0x1f)) <
              (uint64_t)(int64_t)(int)((-0x63295a77 - uVar11) * 0x4d05c787 + uVar23 + -0x174b6feb)
             ) {
            uVar14 = uVar18 * 0x1000000088b;
          }
          if (((((((((uVar14 ^ uStack_98) * 0x1000000088b ^ (uint64_t)pbVar24[-3]) *
                    ((0x414955860000010U >> (bVar4 & 0x3f) |
                     0x414955860000010 << 0x40 - (bVar4 & 0x3f)) + uStack_168) ^
                   (uint64_t)pbVar24[-2]) * 0x1000000088b ^ (uint64_t)pbVar24[-1]) * 0x1000000088b
                 ^ uStack_160) * 0x1000000088b ^ uVar27) * 0x1000000088b ^ (uint64_t)pbVar24[2]) *
               0x1000000088b ^ (uint64_t)pbVar24[3]) * 0x1000000088b == -0x3c9dd20210985839) {
            return (int *)0xc3622dfdef67a7c7;
          }
          uVar10 = 0xc85d - (uint16_t)in_RAX ^ 0x55d2;
          if (uStack_100 <= (uint16_t)(uVar10 >> (bVar1 & 0xf) | uVar10 << 0x10 - (bVar1 & 0xf)))
          break;
          uStack_100 = uStack_100 - 1;
          pbVar24 = pbVar24 + 1;
        }
        if ((int *)0x1c < piStack_f0) {
          pbVar24 = pbStack_90 + 0x1c;
          piVar12 = piStack_f0;
          do {
            uStack_7c = (uint32_t)pbVar24[-0x13];
            uStack_f8 = (uint64_t)pbVar24[-0x11];
            uStack_50 = (uint64_t)pbVar24[-0x12];
            uStack_48 = (uint64_t)pbVar24[-0x10];
            uStack_a8 = (uint64_t)pbVar24[-0x15];
            uStack_138 = (uint64_t)pbVar24[-7];
            auStack_158[0] = (uint64_t)pbVar24[-3];
            uStack_98 = (uint64_t)pbVar24[-4];
            uStack_100 = (uint64_t)pbVar24[-0xf];
            uVar14 = (0x2ad9e3599524729c - in_RAX) * 0x5b16e465;
            auStack_e8[4] = (uint64_t)pbVar24[-2];
            uStack_110 = uVar14 << (bVar1 & 0x3f) | uVar14 >> 0x40 - (bVar1 & 0x3f);
            uVar27 = ~((in_RAX ^ 0x3ffffdff1eb68d3a) << 0x3b | (in_RAX ^ 0x3ffffdff1eb68d3a) >> 5);
            bVar13 = (uint8_t)uVar23 & 0x3f;
            auStack_158[3] = (uStack_b8 ^ 0xeadd8dfbce19c3a9) * -0x7ffe02e5 + 0x7f67af6b70f13cc4;
            uVar14 = (int64_t)(char)pbVar24[-0x1c];
            if ((0xdb3be4e4U >> (bVar4 & 0x1f) | -0x24c41b1c << 0x20 - (bVar4 & 0x1f)) + uVar23 <=
                (uStack_ac * -0x77faa937 ^ 0xb1ebb5d3)) {
              uVar14 = (uint64_t)pbVar24[-0x1c];
            }
            uVar18 = ((uVar14 ^ 0x18b8ce79e0c4fe9d) * 0x80000000167 ^ (uint64_t)pbVar24[-0x1b]) *
                     0x80000000167 ^ (uint64_t)pbVar24[-0x1a];
            uStack_108 = (uint64_t)pbVar24[-0x16];
            uStack_60 = (uint64_t)pbVar24[-0xe];
            auStack_158[2] = (uint64_t)pbVar24[-0xb];
            auStack_e8[2] = (uint64_t)pbVar24[-0x14];
            auStack_e8[1] = (uint64_t)pbVar24[-0xd];
            uStack_70 = (uint64_t)pbVar24[-0xc];
            uVar14 = uVar18 * 0x80000000167;
            if (((0x38ece22b - uVar23) * -0x4d6433 ^ 0xa5e8bce6) + uVar11 <
                (uVar23 + 0xdb3ceef1 >> (bVar4 & 0x1f) |
                uVar23 + 0xdb3ceef1 << 0x20 - (bVar4 & 0x1f)) * 0x66eface3) {
              uVar14 = uVar18 & 0x80000000167;
            }
            uVar14 = (((((((((uVar14 ^ pbVar24[-0x19]) * 0x80000000167 ^ (uint64_t)pbVar24[-0x18])
                            * 0x80000000167 ^ (uint64_t)pbVar24[-0x17]) * 0x80000000167 ^
                          (uint64_t)pbVar24[-0x16]) * 0x80000000167 ^ (uint64_t)pbVar24[-0x15]) *
                         0x80000000167 ^ (uint64_t)pbVar24[-0x14]) * 0x80000000167 ^
                       (uint64_t)(uint32_t)pbVar24[-0x13]) *
                       ~(-0x380000400000000c << bVar13 | 0xc7ffffbffffffff4U >> 0x40 - bVar13) ^
                      (uint64_t)pbVar24[-0x12]) * 0x80000000167 ^ (uint64_t)pbVar24[-0x11]) *
                     0x80000000167;
            uVar18 = uVar14 ^ pbVar24[-0x10];
            if ((((((((((((((((((auStack_158[3] & 0xffffffff) * (uVar18 & 0xffffffff) +
                                ((uVar14 >> 0x20) * (auStack_158[3] & 0xffffffff) +
                                 (auStack_158[3] >> 0x20) * (uVar18 & 0xffffffff) << 0x20) ^
                               (uint64_t)pbVar24[-0xf]) * 0x80000000167 ^ (uint64_t)pbVar24[-0xe])
                              * 0x80000000167 ^ (uint64_t)pbVar24[-0xd]) * 0x80000000167 ^
                            (uint64_t)pbVar24[-0xc]) * 0x80000000167 ^ (uint64_t)pbVar24[-0xb]) *
                           uStack_110 ^ (uint64_t)pbVar24[-10]) * 0x80000000167 ^
                         (uint64_t)pbVar24[-9]) * 0x80000000167 ^ (uint64_t)pbVar24[-8]) *
                        0x80000000167 ^ (uint64_t)pbVar24[-7]) * 0x80000000167 ^
                      (uint64_t)pbVar24[-6]) * 0x80000000167 ^ (uint64_t)pbVar24[-5]) *
                     (-0x39cf6c50 - (in_RAX + 0xe92f8052d91f237d)) * (uStack_b8 | 1) ^ uStack_98) *
                    (uVar27 << 7 | uVar27 >> 0x39) ^ auStack_158[0]) *
                   ((in_RAX ^ 0x7ff5fffc6f0) - uStack_168) ^ (uint64_t)pbVar24[-2]) * 0x80000000167
                 ^ (uint64_t)pbVar24[-1]) * 0x80000000167 ^ (uint64_t)*pbVar24) * 0x80000000167 ==
                -0x23f13261e1bd019e) {
              return (int *)0xdc0ecd9e1e42fe62;
            }
            piVar16 = (int *)((int64_t)piVar12 - 1);
            piVar12 = (int *)-(int64_t)piVar12;
            if ((uint64_t)~(0x2d2ca3ea << (bVar1 & 0x1f) | 0x2d2ca3eaU >> 0x20 - (bVar1 & 0x1f)) <=
                (uint64_t)
                (int64_t)(int)~(uVar17 * 0x40000000 | (uVar17 ^ 0x1ad2d398) * 0x732c3269 >> 2)) {
              piVar12 = piVar16;
            }
            pbVar24 = pbVar24 + 1;
          } while ((int *)0x1c < piVar12);
        }
      }
    }
    pbVar24 = pbStack_90 + 0xe;
    piVar16 = piStack_f0;
    do {
      uVar23 = uStack_ac * -0x65f32d09 + 0xcf5194f6;
      if ((uint64_t)(uVar23 * 0x20000000 | uVar23 >> 3) <
          (uint64_t)(int64_t)(int)((uVar11 + 0x6758a086) * -0x576a7bdb)) {
        uVar14 = (uint64_t)(0x3f8a04b5 << (bVar4 & 0x1f) | 0x3f8a04b5U >> 0x20 - (bVar4 & 0x1f));
      }
      else {
        uVar14 = (uint64_t)
                 (int)~(0xe7224183U >> (bVar4 & 0x1f) | -0x18ddbe7d << 0x20 - (bVar4 & 0x1f));
      }
      auStack_e8[3] = (uint64_t)pbVar24[-6];
      uStack_160 = (uint64_t)*pbVar24;
      auStack_128[1] = (uint64_t)pbVar24[-7];
      auStack_158[0] = CONCAT44(auStack_158[0]._4_4_,(uint32_t)pbVar24[-0xc]);
      uStack_88 = (uint64_t)pbVar24[-3];
      piStack_78 = (int *)(uint64_t)pbVar24[-10];
      uVar23 = (0x386dfe30 - uVar11 ^ 0xb4272a49) + 0x43e15e3d;
      uVar27 = (uint64_t)pbVar24[-1];
      if (((0xe149742af8a05b - uVar14 << 0x28 | 0xe149742af8a05b - uVar14 >> 0x18) ^ in_RAX) !=
          0x10000000014b) {
        uVar27 = (int64_t)(char)pbVar24[-1];
      }
      uStack_a0 = (uint64_t)pbVar24[-2];
      uVar17 = (uint32_t)uVar14;
      bVar13 = (uint8_t)uVar14 & 0x1f;
      piStack_118 = (int *)(uint64_t)pbVar24[-4];
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar17) | 1;
      uVar28 = (uVar17 | 1) * -0x6c8c5e5d;
      uVar18 = (uint64_t)pbVar24[-0xb];
      if ((uVar28 >> (bVar4 & 0x1f) | uVar28 << 0x20 - (bVar4 & 0x1f)) <
          ~(uVar17 + 0xc299b3e0) - uVar11) {
        uVar18 = (int64_t)(char)pbVar24[-0xb];
      }
      uVar30 = (((uint64_t)pbVar24[-0xd] ^
                ((uint64_t)pbVar24[-0xe] ^ 0x3dc4d951b11b4297) * 0x200000001cb) * 0x200000001cb ^
               (uint64_t)(uint32_t)pbVar24[-0xc]) * 0x200000001cb;
      uVar29 = uVar30 * uVar18;
      if ((uVar23 << bVar13 | uVar23 >> 0x20 - bVar13) != 0x1c6f4319) {
        uVar29 = uVar30 ^ uVar18;
      }
      uStack_64 = 0xad84b799;
      piVar12 = (int *)((uVar29 * 0x200000001cb ^ (uint64_t)pbVar24[-10]) * 0x200000001cb);
      if ((((((((((((uint64_t)pbVar24[-9] ^ (uint64_t)piVar12) * 0x200000001cb ^
                  (uint64_t)pbVar24[-8]) * 0x200000001cb ^ (uint64_t)pbVar24[-7]) * 0x200000001cb
                ^ (uint64_t)pbVar24[-6]) *
                ((~(uVar14 ^ 0x7abe2e3fac077fb3) << (bVar4 & 0x3f) |
                 ~(uVar14 ^ 0x7abe2e3fac077fb3) >> 0x40 - (bVar4 & 0x3f)) - 0x78541b51) ^
               (uint64_t)pbVar24[-5]) *
               (uVar14 + 0x85aacd8533c0c0e4 << 0x28 | uVar14 + 0x85aacd8533c0c0e4 >> 0x18) *
               uStack_58 ^ (uint64_t)pbVar24[-4]) * 0x200000001cb ^ (uint64_t)pbVar24[-3]) *
             0x200000001cb ^ (uint64_t)pbVar24[-2]) * 0x200000001cb ^ uVar27) * 0x200000001cb ^
          (uint64_t)*pbVar24) * 0x200000001cb == 0x2c3d7d5fc2a09dde) {
        return piVar12;
      }
      piVar16 = (int *)((int64_t)piVar16 - 1);
      pbVar24 = pbVar24 + 1;
    } while ((int *)0xe < piVar16);
    if ((int *)0x11 < piStack_f0) {
      pbVar24 = pbStack_90 + 0x11;
      uStack_160 = 0xd6aef6ee;
      auStack_e8[3] = (uint64_t)(uVar11 - uVar17);
      auStack_128[0] = 0x100000008a7;
      piVar16 = piStack_f0;
      while( true ) {
        piVar16 = (int *)((int64_t)piVar16 - 1);
        bVar13 = (uint8_t)uVar14 & 0x3f;
        uVar27 = (uint64_t)pbVar24[-7];
        if ((0x548799bdU >> (bVar4 & 0x1f) | 0x548799bd << 0x20 - (bVar4 & 0x1f)) * (int)uStack_98
            <= ((uStack_ac * 0x64000000 | uStack_ac * -0x7c45839c >> 8) ^ uVar17)) {
          uVar27 = (int64_t)(char)pbVar24[-7];
        }
        uVar18 = (int64_t)(char)pbVar24[-8];
        if (uVar11 != 0xd6f64e0f) {
          uVar18 = (uint64_t)pbVar24[-8];
        }
        uVar29 = (int64_t)(char)pbVar24[-0x11];
        if (((uVar11 - uVar17) + 0xd8c9835f ^ 0x5a4d2350) <
            (int)uStack_98 * 0x64a9b53e + 0xba81e913U) {
          uVar29 = (uint64_t)pbVar24[-0x11];
        }
        uStack_64 = 0x2725ab0f;
        piVar12 = (int *)0x2725ab0f;
        if ((((((((uStack_58 * 0x44dc1245fe00d191 + -0xc0000058) * (uVar14 | 1) *
                  ((((((((((((uVar29 ^ 0xfd6434bbb9270497) * 0x100000008a7 ^
                            (uint64_t)pbVar24[-0x10]) *
                            ((0xfff7fe50844c2a9b - in_RAX >> bVar13 |
                             0xfff7fe50844c2a9b - in_RAX << 0x40 - bVar13) ^ 0xffffffffc9f468f1) ^
                           (uint64_t)pbVar24[-0xf]) * 0x100000008a7 ^ (uint64_t)pbVar24[-0xe]) *
                          0x100000008a7 ^ (uint64_t)pbVar24[-0xd]) * 0x100000008a7 ^
                        (uint64_t)pbVar24[-0xc]) * 0x100000008a7 ^ (uint64_t)pbVar24[-0xb]) *
                       0x100000008a7 ^ (uint64_t)pbVar24[-10]) * 0x100000008a7 ^
                     (uint64_t)pbVar24[-9]) * 0x100000008a7 ^ uVar18) * 0x100000008a7 ^ uVar27) *
                   0x100000008a7 ^ (uint64_t)pbVar24[-6]) ^ (uint64_t)pbVar24[-5]) *
                 (uVar14 + uStack_58 * 0x3c0405bb780faac7 + -0x895ff1af) ^ (uint64_t)pbVar24[-4]) *
                0x100000008a7 ^ (uint64_t)pbVar24[-3]) * 0x100000008a7 ^ (uint64_t)pbVar24[-2]) *
              0x100000008a7 ^ (uint64_t)pbVar24[-1]) * 0x100000008a7 ^ (uint64_t)*pbVar24) *
            0x100000008a7 == -0x225ae7c86dc37c21) {
          return (int *)0x2725ab0f;
        }
        if (piVar16 < (int *)0x12) break;
        pbVar24 = pbVar24 + 1;
      }
    }
  }
  if ((int *)(uint64_t)(uVar11 + 0x8d68 & 0xffff) < piStack_f0) {
    piVar12 = piStack_f0;
    pbVar24 = pbStack_90;
    do {
      if (((0x809cf612 - uVar11) * 0x400000 | 0x809cf612 - uVar11 >> 10) == 0xca3e4829) {
        uVar23 = ~(uStack_ac * 0x2725a704);
      }
      else {
        uVar23 = uStack_ac * 0x40000000 | uStack_ac * 0x206dc0a8 >> 5;
      }
      uVar14 = (uint64_t)uVar23;
      if (((((uint64_t)pbVar24[2] ^
            (((uint64_t)*pbVar24 ^ 0xdce94a43dfec548d) * 0x400000008e5 ^ (uint64_t)pbVar24[1]) *
            0x400000008e5) * 0x400000008e5 ^ (uint64_t)pbVar24[3]) * 0x400000008e5 ^
          (uint64_t)pbVar24[4]) * 0x400000008e5 == 0x7ea0e7b4482eb0dd) {
        return (int *)(uint64_t)pbVar24[4];
      }
      piVar12 = (int *)((int64_t)piVar12 - 1);
      pbVar24 = pbVar24 + 1;
    } while ((int *)0x4 < piVar12);
    uStack_bc = 0xdfec5401;
    uVar10 = (uint16_t)uVar23 ^ 0x1a4c;
    piVar12 = (int *)(uint64_t)
                     (uint16_t)((uVar10 >> (bVar4 & 0xf) | uVar10 << 0x10 - (bVar4 & 0xf)) + 0xa0cf);
    puVar22 = auStack_178;
    if (piVar12 < piStack_f0) {
      uStack_110 = 0xab1022b4;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar23) | 1;
      pbStack_90 = pbStack_90 + 0x10;
      auStack_e8[0] = 0x80000000447;
      do {
        *(int **)(puVar20 + 0xa8) = piStack_f0;
        *(uint64_t *)(puVar20 + 0x120) = (uint64_t)pbStack_90[-0xc];
        bVar4 = pbStack_90[-1];
        *(uint64_t *)(puVar20 + 0x100) = (uint64_t)pbStack_90[-0xd];
        *(uint64_t *)(puVar20 + 0xf0) = (uint64_t)pbStack_90[-2];
        iVar6 = *(int *)(puVar20 + 0xcc);
        *(uint64_t *)(puVar20 + 0xd8) = (uint64_t)pbStack_90[-0xe];
        *(uint64_t *)(puVar20 + 0x58) = (uint64_t)pbStack_90[-10];
        bVar13 = (uint8_t)uVar23;
        if ((uint64_t)((uVar23 + 0x24fcd095) * iVar6) <
            (uint64_t)
            (int64_t)
            (int)(((uint32_t)(iVar6 * -0x3b53b6cc) >> (bVar13 & 0x1f) |
                  iVar6 * -0x3b53b6cc << 0x20 - (bVar13 & 0x1f)) * 0x2c906c3b)) {
          uVar28 = 0x5d426421U - *(int *)(puVar20 + 0x48) << (bVar13 & 0x1f) |
                   0x5d426421U - *(int *)(puVar20 + 0x48) >> 0x20 - (bVar13 & 0x1f);
        }
        else {
          uVar28 = (*(int *)(puVar20 + 0x128) * 0x7bccde00 <<
                    ((uint8_t)*(uint64_t *)(puVar20 + 0x48) & 0x1f) |
                   (uint32_t)(*(int *)(puVar20 + 0x128) * 0x7bccde00) >>
                   0x20 - ((uint8_t)*(uint64_t *)(puVar20 + 0x48) & 0x1f)) + 0xc1626a79;
        }
        bVar1 = pbStack_90[-5];
        *(uint64_t *)(puVar20 + 0x60) = (uint64_t)pbStack_90[-6];
        if ((uint64_t)((uVar23 + 0x235ccf5b ^ 0xf8b580dc) + 0x5bec28ef) <
            (uint64_t)(int64_t)(int)((uVar28 + 0x6f84b1e5) * iVar6 + 0x5d6acb96)) {
          piVar12 = *(int **)(puVar20 + 0x48);
          uVar27 = (uint64_t)(int)((-(int)piVar12 - uVar23) + -0x47e8f2a3);
        }
        else {
          uVar27 = (uint64_t)
                   ~((uint32_t)(iVar6 * 0x43b2d52e) >> (bVar13 & 0x1f) |
                    iVar6 * 0x43b2d52e << 0x20 - (bVar13 & 0x1f));
          piVar12 = *(int **)(puVar20 + 0x48);
        }
        bVar2 = pbStack_90[-0x10];
        bVar3 = pbStack_90[-9];
        bVar5 = pbStack_90[-0xf];
        bVar7 = (uint8_t)piVar12 & 0x3f;
        *(uint64_t *)(puVar20 + 0x20) = (uint64_t)pbStack_90[-3];
        *(uint64_t *)(puVar20 + 0xe0) =
             0x2b14a2e2 - (-0x4eb6164000007ffe << bVar7 | 0xb149e9bfffff8002U >> 0x40 - bVar7);
        lVar19 = *(int64_t *)(puVar20 + 0x90);
        uVar18 = ((uint64_t)bVar2 ^ 0xf599ed85a90a76e7) * lVar19;
        *(uint32_t *)(puVar20 + 0x80) = uVar28 | 1;
        uVar17 = (uVar28 | 1) * 0x49c3aef ^ 0xc00002ee;
        bVar8 = (uint8_t)piVar12 & 0x1f;
        uVar29 = (uint64_t)(piVar12 + 0x88dffc7bda359) >> (bVar13 & 0x3f) |
                 (int64_t)(piVar12 + 0x88dffc7bda359) << 0x40 - (bVar13 & 0x3f);
        *(uint64_t *)(puVar20 + 0xb0) = uVar27;
        uVar30 = ((0x5ca70001b775c35f - uVar27) * 0x40000 | 0x5ca70001b775c35f - uVar27 >> 0x2e) ^
                 (uint64_t)piVar12;
        *(uint64_t *)(puVar20 + 0x18) = (uint64_t)uVar28;
        bVar2 = pbStack_90[-0xb];
        *(uint64_t *)(puVar20 + 0x40) = (uint64_t)pbStack_90[-4];
        bVar7 = pbStack_90[-8];
        *(uint64_t *)(puVar20 + 0x50) = (uint64_t)*pbStack_90;
        uVar27 = uVar18 - bVar5;
        if (~((0xa9051886 - uVar23) * 0x80 | 0xa9051886 - uVar23 >> 0x19) + uVar11 == -0x353af498) {
          uVar27 = uVar18 ^ bVar5;
        }
        pcVar25 = (char *)((*(uint64_t *)(puVar20 + 0x100) ^
                           (uVar27 * lVar19 ^ *(uint64_t *)(puVar20 + 0xd8)) * lVar19) * lVar19);
        uVar18 = (*(uint64_t *)(puVar20 + 0x120) ^ (uint64_t)pcVar25) * lVar19 ^ (uint64_t)bVar2;
        uVar29 = (uVar14 + 0x7ffbd27f48f) *
                 ((((((*(uint64_t *)(puVar20 + 0x60) ^
                      (((((((uint64_t)uVar28 | 1) * 0x1f414a6ce1706458 >> 3 ^ (uint64_t)piVar12) *
                          uVar18 ^ *(uint64_t *)(puVar20 + 0x58)) * lVar19 ^ (uint64_t)bVar3) *
                        lVar19 ^ (uint64_t)bVar7) * (uVar29 << 0xd | uVar29 >> 0x33) ^
                      (uint64_t)pbStack_90[-7]) * lVar19) * lVar19 ^ (uint64_t)bVar1) *
                     *(int64_t *)(puVar20 + 0xe0) ^ *(uint64_t *)(puVar20 + 0x40)) *
                    (uVar30 << 0x17 | uVar30 >> 0x29) ^ *(uint64_t *)(puVar20 + 0x20)) * lVar19 ^
                  *(uint64_t *)(puVar20 + 0xf0)) * lVar19 ^ (uint64_t)bVar4) ^
                 *(uint64_t *)(puVar20 + 0x50);
        uVar27 = uVar29 - 0x80000000447;
        if ((uVar17 >> bVar8 | uVar17 << 0x20 - bVar8) != 0xab1022b4) {
          uVar27 = uVar29 * lVar19;
        }
        *(uint32_t *)(puVar20 + 0x114) = 0x26272afe;
        uVar28 = *(uint32_t *)(puVar20 + 0x114);
        while (0xf755f204 < uVar28) {
          if ((int)uVar28 < -0x8aa0dfb) {
            piVar12 = (int *)((uint64_t)piVar12 & 0xffffffffffffff14);
            *piVar12 = *piVar12 + (int)piVar12;
          }
          else if (-0x8aa0dfb < (int)uVar28) {
            puVar21 = (uint64_t *)(puVar20 + -8);
            puVar20 = puVar20 + -8;
            *puVar21 = uVar18;
            break;
          }
          piVar12 = (int *)CONCAT62((int6)((uint64_t)piVar12 >> 0x10),
                                    CONCAT11((char)((uint64_t)piVar12 >> 8) - *pcVar25,
                                             (char)piVar12));
          uVar28 = *(uint32_t *)(puVar20 + 0x114);
        }
        uVar29 = (uint64_t)piVar12 ^ 0xdd9e557ba6f3821d;
        uVar18 = *(uint64_t *)(puVar20 + 0x18);
        bVar1 = (uint8_t)uVar18 & 0x3f;
        uVar30 = uVar29 >> bVar1 | uVar29 << 0x40 - bVar1;
        bVar4 = ((uVar18 & 0x3f) != 0) * ((int64_t)uVar30 < 0);
        *(uint64_t *)(puVar20 + -8) =
             (uint64_t)((uVar31 & 0x4000) != 0) * 0x4000 |
             (uint64_t)(uint8_t)((bVar1 == 1) * (bVar4 ^ (int64_t)(uVar30 << 1) < 0)) * 0x800 |
             (uint64_t)((uVar31 & 0x400) != 0) * 0x400 | (uint64_t)((uVar31 & 0x200) != 0) * 0x200
             | (uint64_t)((uVar31 & 0x100) != 0) * 0x100 | (uint64_t)((int64_t)uVar29 < 0) * 0x80
             | (uint64_t)(uVar29 == 0) * 0x40 | (uint64_t)((uVar31 & 0x10) != 0) * 0x10 |
             (uint64_t)((POPCOUNT(uVar29 & 0xff) & 1U) == 0) * 4 | (uint64_t)bVar4 |
             (uint64_t)((uVar31 & 0x200000) != 0) * 0x200000 |
             (uint64_t)((uVar31 & 0x40000) != 0) * 0x40000;
        *(uint64_t *)(puVar20 + -8) = *(uint64_t *)(puVar20 + -8) & 0xfffffffffffffeff;
        uVar31 = *(uint64_t *)(puVar20 + -8);
        if (uVar27 == uVar30) {
          return piVar12;
        }
        piStack_f0 = (int *)(*(int64_t *)(puVar20 + 0xa8) - 1);
        pbStack_90 = pbStack_90 + 1;
      } while ((int *)(uint64_t)(-(int)uVar18 - 0xa206ffU & 0xffff) < piStack_f0);
      uVar11 = ~((int)uVar18 + 0x7a7ec70eU);
      piVar12 = (int *)(uint64_t)(uVar11 << 0x12 | uVar11 >> 0xe);
      in_RAX = *(uint64_t *)(puVar20 + 0x48);
      puVar22 = puVar20;
      if (piVar12 < *(int **)(puVar20 + 0x88)) {
        pbVar24 = (uint8_t *)(*(int64_t *)(puVar20 + 0xe8) + 0x15);
        *(int64_t *)(puVar20 + 0x68) = *(int64_t *)(puVar20 + 0x68) + 0x1db9708d;
        uVar31 = *(uint64_t *)(puVar20 + 0x88);
        do {
          *(uint64_t *)(puVar20 + 0x10) = uVar31;
          *(uint64_t *)(puVar20 + 0xa8) = (uint64_t)pbVar24[-4];
          *(uint64_t *)(puVar20 + 0x50) = (uint64_t)pbVar24[-0xf];
          *(uint64_t *)(puVar20 + 0xf0) = (uint64_t)pbVar24[-5];
          *(uint64_t *)(puVar20 + 0x20) = (uint64_t)pbVar24[-0xd];
          *(uint64_t *)(puVar20 + 0x100) = (uint64_t)pbVar24[-3];
          *(uint64_t *)(puVar20 + 0x60) = (uint64_t)pbVar24[-8];
          bVar4 = pbVar24[-0x14];
          *(uint64_t *)(puVar20 + 0x58) = (uint64_t)*pbVar24;
          *(uint64_t *)(puVar20 + 0x78) = (uint64_t)pbVar24[-0x11];
          *(uint64_t *)(puVar20 + 0x40) = (uint64_t)pbVar24[-0xe];
          *(uint64_t *)(puVar20 + 0xe0) = (uint64_t)pbVar24[-0xb];
          bVar1 = pbVar24[-0x13];
          *(uint64_t *)(puVar20 + 0x120) = (uint64_t)pbVar24[-7];
          *(uint64_t *)(puVar20 + 0xd8) = (uint64_t)pbVar24[-1];
          *(uint64_t *)(puVar20 + 0x90) = (uint64_t)pbVar24[-9];
          *(int64_t *)(puVar20 + 0x128) =
               (int64_t)
               (int)(0x2add6c38 -
                    (0x543b4cd7U >> ((uint8_t)*(uint64_t *)(puVar20 + 0x18) & 0x1f) |
                    0x543b4cd7 << 0x20 - ((uint8_t)*(uint64_t *)(puVar20 + 0x18) & 0x1f)));
          bVar2 = pbVar24[-0x15];
          uVar27 = 0x2012421810f - in_RAX ^ uVar14;
          bVar3 = pbVar24[-10];
          *(uint64_t *)(puVar20 + 0x130) = (uint64_t)pbVar24[-6];
          uVar31 = (int64_t)(char)pbVar24[-0x12];
          if ((uint64_t)((uVar23 ^ 0x3745e81b) * -0x43c884e9 + (int)in_RAX) ==
              *(uint64_t *)(puVar20 + 0x68)) {
            uVar31 = (uint64_t)pbVar24[-0x12];
          }
          bVar5 = (uint8_t)in_RAX & 0x1f;
          uVar18 = (uint64_t)pbVar24[-2];
          if ((0x1d94cfde - uVar23 << bVar5 | 0x1d94cfde - uVar23 >> 0x20 - bVar5) != 0x6dabcc02) {
            uVar18 = (int64_t)(char)pbVar24[-2];
          }
          uVar29 = ((uint64_t)pbVar24[-0x10] ^
                   ((uVar31 ^ ((((uint64_t)bVar2 ^ 0x98fe3bf0bef40ee3) * 0x200000001cb ^
                               (uint64_t)bVar4) * 0x200000001cb ^ (uint64_t)bVar1) * 0x200000001cb
                    ) * 0x200000001cb ^ *(uint64_t *)(puVar20 + 0x78)) * 0x200000001cb) *
                   0x200000001cb;
          uVar11 = *(int *)(puVar20 + 0xcc) * 0x29d6dd7c;
          uVar31 = uVar29 ^ *(uint64_t *)(puVar20 + 0x50);
          if ((uint32_t)((*(int *)(puVar20 + 0x80) * 0x547a41d1 + -0x5b0c2472) *
                    *(int *)(puVar20 + 0xcc)) <
              (uVar11 << (bVar13 & 0x1f) | uVar11 >> 0x20 - (bVar13 & 0x1f))) {
            uVar31 = uVar29 + *(uint64_t *)(puVar20 + 0x50);
          }
          uVar31 = ((((((uVar31 * 0x200000001cb ^ *(uint64_t *)(puVar20 + 0x40)) * 0x200000001cb ^
                       *(uint64_t *)(puVar20 + 0x20)) * 0x200000001cb ^ (uint64_t)pbVar24[-0xc]) *
                      0x200000001cb ^ *(uint64_t *)(puVar20 + 0xe0)) * 0x200000001cb ^
                    (uint64_t)bVar3) * 0x200000001cb ^ *(uint64_t *)(puVar20 + 0x90)) *
                   0x200000001cb ^ *(uint64_t *)(puVar20 + 0x60);
          uVar27 = (uVar31 & 0xffffffff) * (uVar27 & 0xffffffff) +
                   ((uVar31 >> 0x20) * (uVar27 & 0xffffffff) +
                    (0x2012421810f - in_RAX >> 0x20) * (uVar31 & 0xffffffff) << 0x20);
          uVar31 = (uint64_t)((uint32_t)uVar27 & (uint32_t)*(uint64_t *)(puVar20 + 0x120));
          if ((uint64_t)((*(uint32_t *)(puVar20 + 0xb0) ^ 0xf2bcf997) - (int)in_RAX) <=
              *(uint64_t *)(puVar20 + 0x128)) {
            uVar31 = *(uint64_t *)(puVar20 + 0x120) ^ uVar27;
          }
          piVar12 = (int *)((((((((uVar31 * 0x200000001cb ^ *(uint64_t *)(puVar20 + 0x130)) *
                                  0x200000001cb ^ *(uint64_t *)(puVar20 + 0xf0)) * 0x200000001cb ^
                                *(uint64_t *)(puVar20 + 0xa8)) * 0x200000001cb ^
                               *(uint64_t *)(puVar20 + 0x100)) * 0x200000001cb ^ uVar18) *
                              0x200000001cb ^ *(uint64_t *)(puVar20 + 0xd8)) * 0x200000001cb ^
                            *(uint64_t *)(puVar20 + 0x58)) * 0x200000001cb);
          if (piVar12 == (int *)0x1b532348e55604b3) {
            return (int *)0x1b532348e55604b3;
          }
          uVar31 = *(int64_t *)(puVar20 + 0x10) - 1;
          pbVar24 = pbVar24 + 1;
          in_RAX = *(uint64_t *)(puVar20 + 0x48);
        } while (0x15 < uVar31);
      }
    }
    uVar31 = *(uint64_t *)(puVar22 + 0x88);
    if (uVar31 != 5) {
      pbVar24 = (uint8_t *)(*(int64_t *)(puVar22 + 0xe8) + 5);
      uVar27 = in_RAX;
      while( true ) {
        uVar31 = uVar31 - 1;
        lVar19 = (((((~(uVar27 ^ 0xfffff7ff1eb69df8) *
                      (pbVar24[-5] ^ uVar14 ^ in_RAX + 0x9be77bef53d4bdfd) ^ (uint64_t)pbVar24[-4])
                     * 0x8000000109b ^ (uint64_t)pbVar24[-3]) * 0x8000000109b ^
                   (uint64_t)pbVar24[-2]) * 0x8000000109b ^ (uint64_t)pbVar24[-1]) * 0x8000000109b
                 ^ (uint64_t)*pbVar24) * 0x8000000109b;
        *(uint32_t *)(puVar22 + 0x114) = 0xae20baa;
        *(int *)(puVar22 + 0xbc) =
             (int)CONCAT71((int7)((uint64_t)lVar19 >> 8),lVar19 == -0x24b140414b75a286);
        if (lVar19 == -0x24b140414b75a286) {
          return (int *)0xdb4ebfbeb48a5d7a;
        }
        if (uVar31 < 6) break;
        pbVar24 = pbVar24 + 1;
        uVar27 = *(uint64_t *)(puVar22 + 0x48);
      }
      return (int *)0xdb4ebfbeb48a5d7a;
    }
  }
  *(uint32_t *)(puVar22 + 0xbc) = 0;
  return piVar12;
}


// ============================================================================
// Function : FUN_7fffa51a8670  |  RVA: 0xa38670  |  Size: 7273 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa51a8670(void) {
    /* +0xa38670 */ __asm { PUSH RBP }
    /* +0xa38671 */ __asm { PUSH RBX }
    /* +0xa38672 */ __asm { PUSH R12 }
    /* +0xa38674 */ __asm { PUSH R15 }
    /* +0xa38676 */ __asm { PUSH R13 }
    /* +0xa38678 */ __asm { PUSH RDI }
    /* +0xa38679 */ __asm { PUSH R14 }
    /* +0xa3867b */ __asm { PUSH RSI }
    /* +0xa3867c */ __asm { SUB RSP,0x198 }
    /* +0xa38683 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xa3868b */ __asm { MOVDQA xmmword ptr [RBP + 0x100],XMM8 }
    /* +0xa38694 */ __asm { MOVDQA xmmword ptr [RBP + 0xf0],XMM11 }
    /* +0xa3869d */ __asm { MOVDQA xmmword ptr [RBP + 0xe0],XMM9 }
    /* +0xa386a6 */ __asm { MOVDQA xmmword ptr [RBP + 0xd0],XMM15 }
    /* +0xa386af */ __asm { MOVDQA xmmword ptr [RBP + 0xc0],XMM10 }
    /* +0xa386b8 */ __asm { MOVDQA xmmword ptr [RBP + 0xb0],XMM6 }
    /* +0xa386c0 */ __asm { MOVAPS xmmword ptr [RBP + 0xa0],XMM14 }
    /* +0xa386c8 */ __asm { MOVDQA xmmword ptr [RBP + 0x90],XMM13 }
    /* +0xa386d1 */ __asm { MOV qword ptr [RBP + 0x88],-0x2 }
    /* +0xa386dc */ __asm { MOV RDI,R10 }
    /* +0xa386df */ __asm { MOV R15D,R9D }
    /* +0xa386e2 */ __asm { MOV R9D,0x70226c9 }
    /* +0xa386e8 */ __asm { IMUL R9D,R9D,0x3d9dded3 }
    /* +0xa386ef */ __asm { PUSHFQ }
    /* +0xa386f0 */ __asm { POP RBX }
    /* +0xa386f1 */ __asm { MOV EAX,0xf9afc6f7 }
    /* +0xa386f6 */ __asm { ADD RAX,R8 }
    /* +0xa386f9 */ __asm { MOV ECX,0xe08f380d }
    /* +0xa386fe */ __asm { SUB R9D,EDX }
    /* +0xa38701 */ __asm { ROL R9D,0xb }
    /* +0xa38705 */ __asm { MOVSXD R10,R9D }
    /* +0xa38708 */ __asm { OR R10,RAX }
    /* +0xa3870b */ __asm { MOV qword ptr [RBP + 0x8],RDX }
    /* +0xa3870f */ __asm { OR EDX,0x1 }
    /* +0xa38712 */ __asm { MOV dword ptr [RBP + 0x58],EDX }
    /* +0xa38715 */ __asm { IMUL ECX,EDX }
    /* +0xa38718 */ __asm { ROL ECX,0x6 }
    /* +0xa3871b */ __asm { MOV RAX,0x1202b59b0 }
    /* +0xa38725 */ __asm { ADD RAX,R8 }
    /* +0xa38728 */ __asm { CMP RCX,0x6106eab0 }
    /* +0xa3872f */ __asm { CMOVZ RAX,R10 }
    /* +0xa38733 */ __asm { MOV R14D,R11D }
    /* +0xa38736 */ __asm { MOV R8,RAX }
    /* +0xa38739 */ __asm { ROL R8,0xd }
    /* +0xa3873d */ __asm { MOVQ XMM4,R8 }
    /* +0xa38742 */ __asm { MOV R8,RAX }
    /* +0xa38745 */ __asm { ROL R8,0x13 }
    /* +0xa38749 */ __asm { MOVQ XMM0,R8 }
    /* +0xa3874e */ __asm { PXOR XMM0,XMM4 }
    /* +0xa38752 */ __asm { MOVQ R8,XMM0 }
    /* +0xa38757 */ __asm { XOR R8,RAX }
    /* +0xa3875a */ __asm { MOV RAX,R8 }
    /* +0xa3875d */ __asm { ROL RAX,0x26 }
    /* +0xa38761 */ __asm { MOV RDX,R8 }
    /* +0xa38764 */ __asm { ROL RDX,0x1a }
    /* +0xa38768 */ __asm { XOR RDX,RAX }
    /* +0xa3876b */ __asm { XOR RDX,R8 }
    /* +0xa3876e */ __asm { MOV R8,RDX }
    /* +0xa38771 */ __asm { ROL R8,0x34 }
    /* +0xa38775 */ __asm { MOV RAX,RDX }
    /* +0xa38778 */ __asm { ROL RAX,0xc }
    /* +0xa3877c */ __asm { XOR RAX,R8 }
    /* +0xa3877f */ __asm { XOR RAX,RDX }
    /* +0xa38782 */ __asm { MOV RDX,RAX }
    /* +0xa38785 */ __asm { ROL RDX,0x18 }
    /* +0xa38789 */ __asm { MOV R8,RAX }
    /* +0xa3878c */ __asm { ROL R8,0x28 }
    /* +0xa38790 */ __asm { XOR R8,RDX }
    /* +0xa38793 */ __asm { XOR R8,RAX }
    /* +0xa38796 */ __asm { MOV RAX,R8 }
    /* +0xa38799 */ __asm { ROL RAX,0x10 }
    /* +0xa3879d */ __asm { MOV R12,R8 }
    /* +0xa387a0 */ __asm { ROL R12,0x30 }
    /* +0xa387a4 */ __asm { XOR R12,RAX }
    /* +0xa387a7 */ __asm { MOV qword ptr [RBP + -0x30],RBX }
    /* +0xa387ab */ __asm { TEST EBX,0x100 }
    /* +0xa387b1 */ __asm { NOP }
    /* +0xa387b2 */ __asm { NOP }
    /* +0xa387b3 */ __asm { NOP }
    /* +0xa387b4 */ __asm { NOP }
    /* +0xa387b5 */ __asm { NOP }
    /* +0xa387b6 */ __asm { XOR R12,R8 }
    /* +0xa387b9 */ __asm { MOV dword ptr [RBP + 0x10],0x1699c9a2 }
    /* +0xa387c0 */ __asm { MOV EDX,dword ptr [RBP + 0x10] }
    /* +0xa387c3 */ __asm { TEST EDX,EDX }
    /* +0xa387c5 */ __asm { JS 0x7fffa51aa8ff }
    /* +0xa387cb */ __asm { LEA RBX,[0x5 + R12*0x2] }
    /* +0xa387d3 */ __asm { PXOR XMM4,XMM4 }
    /* +0xa387d7 */ __asm { MOVDQA xmmword ptr [RBP + -0x50],XMM4 }
    /* +0xa387dc */ __asm { MOV qword ptr [RBP + -0x40],0x0 }
    /* +0xa387e4 */ __asm { MOV qword ptr [RBP + -0x38],0xf }
    /* +0xa387ec */ __asm { MOVD XMM14,dword ptr [RBP + 0x58] }
    /* +0xa387f2 */ __asm { CMP RBX,0xf }
    /* +0xa387f6 */ __asm { JA 0x7fffa51a8814 }
    /* +0xa387f8 */ __asm { MOV qword ptr [RBP + -0x40],RBX }
    /* +0xa387fc */ __asm { LEA RCX,[RBP + -0x50] }
    /* +0xa38800 */ __asm { MOV R8,RBX }
    /* +0xa38803 */ __asm { XOR EDX,EDX }
    /* +0xa38805 */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0xa3880a */ __asm { MOV uint8_t ptr [RBP + RBX*0x1 + -0x50],0x0 }
    /* +0xa3880f */ __asm { JMP 0x7fffa51a88c2 }
    /* +0xa38814 */ __asm { TEST RBX,RBX }
    /* +0xa38817 */ __asm { JS 0x7fffa51aa8ad }
    /* +0xa3881d */ __asm { MOV RAX,RBX }
    /* +0xa38820 */ __asm { OR RAX,0xf }
    /* +0xa38824 */ __asm { LEA R8,[0x7fffa52709a0] }
    /* +0xa3882b */ __asm { MOV EDX,0x4c099f01 }
    /* +0xa38830 */ __asm { ADD EDX,0x503802e1 }
    /* +0xa38836 */ __asm { CMP RAX,0x17 }
    /* +0xa3883a */ __asm { MOV R13D,0x16 }
    /* +0xa38840 */ __asm { CMOVNC R13,RAX }
    /* +0xa38844 */ __asm { LEA R10,[R13 + 0x1] }
    /* +0xa38848 */ __asm { MOVD XMM4,EDX }
    /* +0xa3884c */ __asm { PMULUDQ XMM4,XMM14 }
    /* +0xa38851 */ __asm { MOVD EDX,XMM4 }
    /* +0xa38855 */ __asm { ADD EDX,0xb7186ab0 }
    /* +0xa3885b */ __asm { MOVSXD RAX,EDX }
    /* +0xa3885e */ __asm { MOV RDX,R10 }
    /* +0xa38861 */ __asm { SHL RDX,0x3c }
    /* +0xa38865 */ __asm { MOV R9W,0x2628 }
    /* +0xa3886a */ __asm { SUB R9D,dword ptr [RBP + 0x8] }
    /* +0xa3886e */ __asm { ROL R9W,0xc }
    /* +0xa38873 */ __asm { MOVSX R11,R9W }
    /* +0xa38877 */ __asm { ADD R11,R8 }
    /* +0xa3887a */ __asm { XOR RDX,R10 }
    /* +0xa3887d */ __asm { SHL R10,0xe }
    /* +0xa38881 */ __asm { MOV R8,0x1865d799980f }
    /* +0xa3888b */ __asm { ADD R10,R8 }
    /* +0xa3888e */ __asm { ADD R10,RDX }
    /* +0xa38891 */ __asm { CALL R11 }
    /* +0xa38894 */ __asm { MOV RSI,RCX }
    /* +0xa38897 */ __asm { MOV qword ptr [RBP + -0x40],RBX }
    /* +0xa3889b */ __asm { ROL RSI,0x2c }
    /* +0xa3889f */ __asm { MOV R8,RSI }
    /* +0xa388a2 */ __asm { SHL R8,0x36 }
    /* +0xa388a6 */ __asm { SUB RSI,R8 }
    /* +0xa388a9 */ __asm { MOV qword ptr [RBP + -0x38],R13 }
    /* +0xa388ad */ __asm { MOV R8,RBX }
    /* +0xa388b0 */ __asm { MOV RCX,RSI }
    /* +0xa388b3 */ __asm { XOR EDX,EDX }
    /* +0xa388b5 */ __asm { CALL 0x7fffa4ecf8e0 }
    /* +0xa388ba */ __asm { MOV uint8_t ptr [RSI + RBX*0x1],0x0 }
    /* +0xa388be */ __asm { MOV qword ptr [RBP + -0x50],RSI }
    /* +0xa388c2 */ __asm { MOV EDX,0xf1ad514f }
    /* +0xa388c7 */ __asm { IMUL EDX,dword ptr [RBP + 0x58] }
    /* +0xa388cb */ __asm { ROL EDX,0x6 }
    /* +0xa388ce */ __asm { MOVSXD R8,EDX }
    /* +0xa388d1 */ __asm { MOV RAX,qword ptr [RBP + 0x158] }
    /* +0xa388d8 */ __asm { MOV qword ptr [RBP + -0x28],RAX }
    /* +0xa388dc */ __asm { MOV RAX,qword ptr [RAX + -0xaa8] }
    /* +0xa388e3 */ __asm { MOV RDX,0x774cdda2a16262bf }
    /* +0xa388ed */ __asm { MOV R9,RDX }
    /* +0xa388f0 */ __asm { IMUL R9,RAX }
    /* +0xa388f4 */ __asm { OR RDX,RAX }
    /* +0xa388f7 */ __asm { CMP R8,-0x1a6b1bb6 }
    /* +0xa388fe */ __asm { CMOVZ RDX,R9 }
    /* +0xa38902 */ __asm { MOV R8D,0x12f854ee }
    /* +0xa38908 */ __asm { SUB R8,RDX }
    /* +0xa3890b */ __asm { MOV RAX,-0x3393a3dd220fb593 }
    /* +0xa38915 */ __asm { CMP R8,RAX }
    /* +0xa38918 */ __asm { JNZ 0x7fffa51a8926 }
    /* +0xa3891a */ __asm { LEAVE }
    /* +0xa3891c */ __asm { AND EAX,0x6a59337d }
    /* +0xa38921 */ __asm { TEST EAX,0xf9d7541b }
    /* +0xa38926 */ __asm { ADD R14B,0xa5 }
    /* +0xa3892a */ __asm { ADD R12,R12 }
    /* +0xa3892d */ __asm { MOV EDX,0xf996afc2 }
    /* +0xa38932 */ __asm { LEA RAX,[RBP + -0x4b] }
    /* +0xa38936 */ __asm { MOV R9D,0xa7def7ee }
    /* +0xa3893c */ __asm { SUB R9D,EDX }
    /* +0xa3893f */ __asm { MOVSXD R8,R9D }
    /* +0xa38942 */ __asm { MOV EDX,0xdf92306b }
    /* +0xa38947 */ __asm { MOV RCX,qword ptr [RBP + 0x8] }
    /* +0xa3894b */ __asm { SUB EDX,ECX }
    /* +0xa3894d */ __asm { ADD EDX,0x3699c226 }
    /* +0xa38953 */ __asm { XOR EDX,0x7ed5f075 }
    /* +0xa38959 */ __asm { CMP R8,RDX }
    /* +0xa3895c */ __asm { JBE 0x7fffa51a8995 }
    /* +0xa3895e */ __asm { MOV EDX,0xc6431690 }
    /* +0xa38963 */ __asm { XOR EDX,ECX }
    /* +0xa38965 */ __asm { NOT EDX }
    /* +0xa38967 */ __asm { MOVSXD R8,EDX }
    /* +0xa3896a */ __asm { MOV qword ptr [RBP + -0x8],R8 }
    /* +0xa3896e */ __asm { CMP qword ptr [RBP + -0x38],0x10 }
    /* +0xa38973 */ __asm { LEA R8,[RBP + -0x50] }
    /* +0xa38977 */ __asm { MOV RDX,qword ptr [RBP + -0x50] }
    /* +0xa3897b */ __asm { CMOVC RDX,R8 }
    /* +0xa3897f */ __asm { MOV uint8_t ptr [RDX],R14B }
    /* +0xa38982 */ __asm { CMOVNC R8,qword ptr [RBP + -0x50] }
    /* +0xa38987 */ __asm { SETNC R11B }
    /* +0xa3898b */ __asm { MOV dword ptr [R8 + 0x1],R15D }
    /* +0xa3898f */ __asm { MOV R8,qword ptr [RBP + -0x50] }
    /* +0xa38993 */ __asm { JMP 0x7fffa51a89d0 }
    /* +0xa38995 */ __asm { MOV R8,qword ptr [RBP + -0x50] }
    /* +0xa38999 */ __asm { MOV RDX,qword ptr [RBP + -0x38] }
    /* +0xa3899d */ __asm { MOV R9D,0x27684004 }
    /* +0xa389a3 */ __asm { IMUL R10D,R9D,-0x6e7ade91 }
    /* +0xa389aa */ __asm { ROL R10D,CL }
    /* +0xa389ad */ __asm { MOV qword ptr [RBP + -0x8],R10 }
    /* +0xa389b1 */ __asm { CMP RDX,0x10 }
    /* +0xa389b5 */ __asm { SETNC R11B }
    /* +0xa389b9 */ __asm { LEA RDX,[RBP + -0x50] }
    /* +0xa389bd */ __asm { MOV R10,RDX }
    /* +0xa389c0 */ __asm { CMOVNC R10,R8 }
    /* +0xa389c4 */ __asm { MOV dword ptr [R10 + 0x1],R15D }
    /* +0xa389c8 */ __asm { CMOVNC RDX,qword ptr [RBP + -0x50] }
    /* +0xa389cd */ __asm { MOV uint8_t ptr [RDX],R14B }
    /* +0xa389d0 */ __asm { ADD R8,0x5 }
    /* +0xa389d4 */ __asm { TEST R11B,R11B }
    /* +0xa389d7 */ __asm { CMOVNZ RAX,R8 }
    /* +0xa389db */ __asm { MOV R8,R12 }
    /* +0xa389de */ __asm { MOV RCX,RAX }
    /* +0xa389e1 */ __asm { MOV RDX,RDI }
    /* +0xa389e4 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xa389e9 */ __asm { CMP qword ptr [RBP + -0x38],0x10 }
    /* +0xa389ee */ __asm { JC 0x7fffa51a89f6 }
    /* +0xa389f0 */ __asm { MOV RDI,qword ptr [RBP + -0x50] }
    /* +0xa389f4 */ __asm { JMP 0x7fffa51a89fa }
    /* +0xa389f6 */ __asm { LEA RDI,[RBP + -0x50] }
    /* +0xa389fa */ __asm { MOV R14,qword ptr [RBP + 0x8] }
    /* +0xa389fe */ __asm { MOV R11,qword ptr [RBP + -0x8] }
    /* +0xa38a02 */ __asm { MOV R8,qword ptr [RBP + -0x40] }
    /* +0xa38a06 */ __asm { MOV qword ptr [RBP + 0x40],R8 }
    /* +0xa38a0a */ __asm { PUSHFQ }
    /* +0xa38a0b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xa38a13 */ __asm { POPFQ }
    /* +0xa38a14 */ __asm { MOV dword ptr [RBP + 0x10],0x224ceec4 }
    /* +0xa38a1b */ __asm { MOV EDX,dword ptr [RBP + 0x10] }
    /* +0xa38a1e */ __asm { TEST EDX,EDX }
    /* +0xa38a20 */ __asm { NOP }
    /* +0xa38a21 */ __asm { NOP }
    /* +0xa38a22 */ __asm { NOP }
    /* +0xa38a23 */ __asm { NOP }
    /* +0xa38a24 */ __asm { MOV R8,qword ptr [RBP + 0x40] }
    /* +0xa38a28 */ __asm { ADD R8,0x2 }
    /* +0xa38a2c */ __asm { MOV RDX,0x5555555555555556 }
    /* +0xa38a36 */ __asm { MOV RAX,R8 }
    /* +0xa38a39 */ __asm { MUL RDX }
    /* +0xa38a3c */ __asm { MOV R10,RDX }
    /* +0xa38a3f */ __asm { MOV RDX,0x5555555555555555 }
    /* +0xa38a49 */ __asm { MOV RAX,R8 }
    /* +0xa38a4c */ __asm { MUL RDX }
    /* +0xa38a4f */ __asm { ADD RAX,R10 }
    /* +0xa38a52 */ __asm { ADC RDX,0x0 }
    /* +0xa38a56 */ __asm { SHLD RDX,RAX,0x2 }
    /* +0xa38a5b */ __asm { PXOR XMM4,XMM4 }
    /* +0xa38a5f */ __asm { MOVDQA xmmword ptr [RBP + 0x10],XMM4 }
    /* +0xa38a64 */ __asm { MOV qword ptr [RBP + 0x20],0x0 }
    /* +0xa38a6c */ __asm { MOV qword ptr [RBP + 0x28],0xf }
    /* +0xa38a74 */ __asm { CMP RDX,0x10 }
    /* +0xa38a78 */ __asm { MOV qword ptr [RBP + 0x78],RDI }
    /* +0xa38a7c */ __asm { JC 0x7fffa51a8b2c }
    /* +0xa38a82 */ __asm { TEST RDX,RDX }
    /* +0xa38a85 */ __asm { JS 0x7fffa51aa8dc }
    /* +0xa38a8b */ __asm { OR RDX,0xf }
    /* +0xa38a8f */ __asm { CMP RDX,0x17 }
    /* +0xa38a93 */ __asm { MOV R12D,0x16 }
    /* +0xa38a99 */ __asm { CMOVNC R12,RDX }
    /* +0xa38a9d */ __asm { MOV EDX,0xa2351203 }
    /* +0xa38aa2 */ __asm { MOV ECX,dword ptr [RBP + 0x58] }
    /* +0xa38aa5 */ __asm { IMUL EDX,ECX }
    /* +0xa38aa8 */ __asm { MOV R9D,0x7ffc6dd9 }
    /* +0xa38aae */ __asm { SUB R9D,EDX }
    /* +0xa38ab1 */ __asm { MOV EDX,0xdc2c89be }
    /* +0xa38ab6 */ __asm { IMUL EDX,ECX }
    /* +0xa38ab9 */ __asm { ADD EDX,0xd1f7aec }
    /* +0xa38abf */ __asm { LEA R8,[0x7fffa527aa34] }
    /* +0xa38ac6 */ __asm { MOVSXD R11,R9D }
    /* +0xa38ac9 */ __asm { ADD R11,R8 }
    /* +0xa38acc */ __asm { MOV RDI,qword ptr [RBP + -0x8] }
    /* +0xa38ad0 */ __asm { MOV R9D,EDI }
    /* +0xa38ad3 */ __asm { OR R9D,0x1 }
    /* +0xa38ad7 */ __asm { LEA R10,[R12 + 0x1] }
    /* +0xa38adc */ __asm { MOV R8,R10 }
    /* +0xa38adf */ __asm { SHL R8,0x3c }
    /* +0xa38ae3 */ __asm { XOR R8,R10 }
    /* +0xa38ae6 */ __asm { SHL R10,0xe }
    /* +0xa38aea */ __asm { MOV RAX,0x1865d799980f }
    /* +0xa38af4 */ __asm { ADD R10,RAX }
    /* +0xa38af7 */ __asm { ADD R10,R8 }
    /* +0xa38afa */ __asm { IMUL R9D,EDX }
    /* +0xa38afe */ __asm { MOVSXD RAX,R9D }
    /* +0xa38b01 */ __asm { CALL R11 }
    /* +0xa38b04 */ __asm { MOV R11,RDI }
    /* +0xa38b07 */ __asm { ROL RCX,0x2c }
    /* +0xa38b0b */ __asm { MOV R8,RCX }
    /* +0xa38b0e */ __asm { SHL R8,0x36 }
    /* +0xa38b12 */ __asm { SUB RCX,R8 }
    /* +0xa38b15 */ __asm { MOV uint8_t ptr [RCX],0x0 }
    /* +0xa38b18 */ __asm { MOV qword ptr [RBP + 0x28],R12 }
    /* +0xa38b1c */ __asm { MOV qword ptr [RBP + 0x10],RCX }
    /* +0xa38b20 */ __asm { MOV qword ptr [RBP + 0x20],0x0 }
    /* +0xa38b28 */ __asm { MOV RDI,qword ptr [RBP + 0x78] }
    /* +0xa38b2c */ __asm { MOV ESI,0x2 }
    /* +0xa38b31 */ __asm { MOV EDX,R11D }
    /* +0xa38b34 */ __asm { OR EDX,0x1 }
    /* +0xa38b37 */ __asm { MOV R10,0x7fffffffffffffff }
    /* +0xa38b41 */ __asm { MOV dword ptr [RBP + 0x4c],EDX }
    /* +0xa38b44 */ __asm { MOVD XMM10,EDX }
    /* +0xa38b49 */ __asm { MOVD XMM6,R14D }
    /* +0xa38b4e */ __asm { MOV RDX,RAX }
    /* +0xa38b51 */ __asm { PCMPEQD XMM13,XMM13 }
    /* +0xa38b56 */ __asm { MOV qword ptr [RBP],RDX }
    /* +0xa38b5a */ __asm { MOVQ XMM15,RDX }
    /* +0xa38b5f */ __asm { MOVD XMM9,R11D }
    /* +0xa38b64 */ __asm { MOV qword ptr [RBP + -0x8],R11 }
    /* +0xa38b68 */ __asm { JMP 0x7fffa51a8b7a }
    /* +0xa38b70 */ __asm { MOV word ptr [R8 + R12*0x1],0x3d }
    /* +0xa38b77 */ __asm { ADD ESI,0x3 }
    /* +0xa38b7a */ __asm { LEA R15D,[RSI + -0x2] }
    /* +0xa38b7e */ __asm { CMP qword ptr [RBP + 0x40],R15 }
    /* +0xa38b82 */ __asm { JBE 0x7fffa51aa0d3 }
    /* +0xa38b88 */ __asm { MOV EDX,0x82b2ecb4 }
    /* +0xa38b8d */ __asm { XOR EDX,R14D }
    /* +0xa38b90 */ __asm { MOV R12,qword ptr [RBP + 0x20] }
    /* +0xa38b94 */ __asm { MOV RBX,qword ptr [RBP + 0x28] }
    /* +0xa38b98 */ __asm { LEA R8,[0x7fffa57471e8] }
    /* +0xa38b9f */ __asm { MOVZX ECX,uint8_t ptr [RDI + R15*0x1] }
    /* +0xa38ba4 */ __asm { SHR ECX,0x2 }
    /* +0xa38ba7 */ __asm { MOV R9D,R11D }
    /* +0xa38baa */ __asm { SUB R9D,EDX }
    /* +0xa38bad */ __asm { ADD R9D,0x9af148d1 }
    /* +0xa38bb4 */ __asm { MOVSXD RAX,R9D }
    /* +0xa38bb7 */ __asm { ADD RAX,R8 }
    /* +0xa38bba */ __asm { MOVZX EDX,uint8_t ptr [RCX + RAX*0x1] }
    /* +0xa38bbe */ __asm { CMP R12,RBX }
    /* +0xa38bc1 */ __asm { MOV qword ptr [RBP + 0x38],RSI }
    /* +0xa38bc5 */ __asm { JNC 0x7fffa51a8bf0 }
    /* +0xa38bc7 */ __asm { LEA R8,[R12 + 0x1] }
    /* +0xa38bcc */ __asm { MOV qword ptr [RBP + 0x20],R8 }
    /* +0xa38bd0 */ __asm { LEA R8,[RBP + 0x10] }
    /* +0xa38bd4 */ __asm { CMP RBX,0x10 }
    /* +0xa38bd8 */ __asm { JC 0x7fffa51a8bde }
    /* +0xa38bda */ __asm { MOV R8,qword ptr [RBP + 0x10] }
    /* +0xa38bde */ __asm { MOV uint8_t ptr [R8 + R12*0x1],DL }
    /* +0xa38be2 */ __asm { MOV uint8_t ptr [R8 + R12*0x1 + 0x1],0x0 }
    /* +0xa38be8 */ __asm { JMP 0x7fffa51a8dd1 }
    /* +0xa38bf0 */ __asm { MOV ECX,0x2dd11826 }
    /* +0xa38bf5 */ __asm { ADD ECX,R11D }
    /* +0xa38bf8 */ __asm { IMUL ECX,dword ptr [RBP + 0x58] }
    /* +0xa38bfc */ __asm { ADD ECX,0x202d1ebb }
    /* +0xa38c02 */ __asm { XOR RCX,R12 }
    /* +0xa38c05 */ __asm { XOR RCX,0x795c27a0 }
    /* +0xa38c0c */ __asm { MOV R8,0x7ffffffff95dd85b }
    /* +0xa38c16 */ __asm { CMP RCX,R8 }
    /* +0xa38c19 */ __asm { JZ 0x7fffa51aa74e }
    /* +0xa38c1f */ __asm { MOV uint8_t ptr [RBP + 0x80],DL }
    /* +0xa38c25 */ __asm { MOV AX,0xbb4a }
    /* +0xa38c29 */ __asm { ADD EAX,0x1a79 }
    /* +0xa38c2e */ __asm { MOV ECX,R11D }
    /* +0xa38c31 */ __asm { ROR AX,CL }
    /* +0xa38c34 */ __asm { LEA RDX,[R12 + 0x1] }
    /* +0xa38c39 */ __asm { LEA ECX,[R14 + RAX*0x1] }
    /* +0xa38c3d */ __asm { MOVSX R8,CX }
    /* +0xa38c41 */ __asm { MOV RDI,R10 }
    /* +0xa38c44 */ __asm { CMP R12,R8 }
    /* +0xa38c47 */ __asm { JL 0x7fffa51a8c71 }
    /* +0xa38c49 */ __asm { MOV R8,RBX }
    /* +0xa38c4c */ __asm { SHR R8,0x1 }
    /* +0xa38c4f */ __asm { MOV RAX,R8 }
    /* +0xa38c52 */ __asm { XOR RAX,R10 }
    /* +0xa38c55 */ __asm { MOV RDI,R10 }
    /* +0xa38c58 */ __asm { CMP RBX,RAX }
    /* +0xa38c5b */ __asm { JA 0x7fffa51a8c71 }
    /* +0xa38c5d */ __asm { MOV RAX,RDX }
    /* +0xa38c60 */ __asm { OR RAX,0xf }
    /* +0xa38c64 */ __asm { ADD R8,RBX }
    /* +0xa38c67 */ __asm { CMP RAX,R8 }
    /* +0xa38c6a */ __asm { CMOVA R8,RAX }
    /* +0xa38c6e */ __asm { MOV RDI,R8 }
    /* +0xa38c71 */ __asm { MOV R13D,0xe080ee79 }
    /* +0xa38c77 */ __asm { LEA R10,[RDI + 0x1] }
    /* +0xa38c7b */ __asm { MOV qword ptr [RBP + 0x60],RDX }
    /* +0xa38c7f */ __asm { MOV EDX,0xafee74e5 }
    /* +0xa38c84 */ __asm { MOV R8,R10 }
    /* +0xa38c87 */ __asm { SHL R8,0x3c }
    /* +0xa38c8b */ __asm { SUB R13D,R14D }
    /* +0xa38c8e */ __asm { MOV ECX,R11D }
    /* +0xa38c91 */ __asm { ROR R13D,CL }
    /* +0xa38c94 */ __asm { ROL R13D,0x5 }
    /* +0xa38c98 */ __asm { ADD R13D,0x6a4c9322 }
    /* +0xa38c9f */ __asm { MOV R9D,0x4c73f9a4 }
    /* +0xa38ca5 */ __asm { XOR R9D,R14D }
    /* +0xa38ca8 */ __asm { IMUL R9D,dword ptr [RBP + 0x4c] }
    /* +0xa38cad */ __asm { ADD R9D,0x1e3296a1 }
    /* +0xa38cb4 */ __asm { MOV RSI,R11 }
    /* +0xa38cb7 */ __asm { MOVSXD R11,R9D }
    /* +0xa38cba */ __asm { IMUL EDX,EDX,0x6bdbf05d }
    /* +0xa38cc0 */ __asm { NOT EDX }
    /* +0xa38cc2 */ __asm { MOV ECX,ESI }
    /* +0xa38cc4 */ __asm { ROL EDX,CL }
    /* +0xa38cc6 */ __asm { MOV ECX,R14D }
    /* +0xa38cc9 */ __asm { ROR EDX,CL }
    /* +0xa38ccb */ __asm { MOVSXD RAX,EDX }
    /* +0xa38cce */ __asm { XOR R8,R10 }
    /* +0xa38cd1 */ __asm { SHL R10,0xe }
    /* +0xa38cd5 */ __asm { MOV RDX,0x1865d799980f }
    /* +0xa38cdf */ __asm { ADD R10,RDX }
    /* +0xa38ce2 */ __asm { ADD R10,R8 }
    /* +0xa38ce5 */ __asm { LEA R8,[0x7fffa5277df5] }
    /* +0xa38cec */ __asm { ADD R8,R11 }
    /* +0xa38cef */ __asm { CALL R8 }
    /* +0xa38cf2 */ __asm { MOV R10,R14 }
    /* +0xa38cf5 */ __asm { MOV R14,RCX }
    /* +0xa38cf8 */ __asm { ROL R14,0x2c }
    /* +0xa38cfc */ __asm { MOV R8,R14 }
    /* +0xa38cff */ __asm { SHL R8,0x36 }
    /* +0xa38d03 */ __asm { SUB R14,R8 }
    /* +0xa38d06 */ __asm { MOV R8,qword ptr [RBP + 0x60] }
    /* +0xa38d0a */ __asm { MOV qword ptr [RBP + 0x20],R8 }
    /* +0xa38d0e */ __asm { MOV qword ptr [RBP + 0x28],RDI }
    /* +0xa38d12 */ __asm { CMP RBX,R13 }
    /* +0xa38d15 */ __asm { JA 0x7fffa51a8d40 }
    /* +0xa38d17 */ __asm { MOV R8,R12 }
    /* +0xa38d1a */ __asm { MOV RCX,R14 }
    /* +0xa38d1d */ __asm { LEA RDX,[RBP + 0x10] }
    /* +0xa38d21 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xa38d26 */ __asm { MOVZX R11D,uint8_t ptr [RBP + 0x80] }
    /* +0xa38d2e */ __asm { MOV uint8_t ptr [R14 + R12*0x1],R11B }
    /* +0xa38d32 */ __asm { MOV uint8_t ptr [R14 + R12*0x1 + 0x1],0x0 }
    /* +0xa38d38 */ __asm { JMP 0x7fffa51a8db3 }
    /* +0xa38d40 */ __asm { MOV EDX,0xc81c50f }
    /* +0xa38d45 */ __asm { MOVD XMM4,EDX }
    /* +0xa38d49 */ __asm { MOV EAX,0x23de1168 }
    /* +0xa38d4e */ __asm { IMUL EAX,dword ptr [RBP + 0x58] }
    /* +0xa38d52 */ __asm { LEA EDX,[RSI + RAX*0x1] }
    /* +0xa38d55 */ __asm { ADD EDX,0x1e4e9c27 }
    /* +0xa38d5b */ __asm { MOVSXD R8,EDX }
    /* +0xa38d5e */ __asm { PMULUDQ XMM4,XMM10 }
    /* +0xa38d63 */ __asm { MOVD R9D,XMM4 }
    /* +0xa38d68 */ __asm { LEA RDI,[0x7fffa5694000] }
    /* +0xa38d6f */ __asm { ADD RDI,R8 }
    /* +0xa38d72 */ __asm { MOV RDX,qword ptr [RBP + 0x10] }
    /* +0xa38d76 */ __asm { MOV R8,RDX }
    /* +0xa38d79 */ __asm { MOV RBX,R8 }
    /* +0xa38d7c */ __asm { SHR RBX,0x3d }
    /* +0xa38d80 */ __asm { XOR RBX,R8 }
    /* +0xa38d83 */ __asm { MOV ESI,0x8b06941a }
    /* +0xa38d88 */ __asm { SUB ESI,R9D }
    /* +0xa38d8b */ __asm { XOR ESI,R10D }
    /* +0xa38d8e */ __asm { MOV R8,R12 }
    /* +0xa38d91 */ __asm { MOV RCX,R14 }
    /* +0xa38d94 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0xa38d99 */ __asm { MOV uint8_t ptr [R14 + R12*0x1 + 0x1],0x0 }
    /* +0xa38d9f */ __asm { MOVZX R11D,uint8_t ptr [RBP + 0x80] }
    /* +0xa38da7 */ __asm { MOV uint8_t ptr [R14 + R12*0x1],R11B }
    /* +0xa38dab */ __asm { MOV R11,RSI }
    /* +0xa38dae */ __asm { MOV R8,RBX }
    /* +0xa38db1 */ __asm { CALL RDI }
    /* +0xa38db3 */ __asm { MOV RDI,qword ptr [RBP + 0x78] }
    /* +0xa38db7 */ __asm { MOV RSI,qword ptr [RBP + 0x38] }
    /* +0xa38dbb */ __asm { MOV qword ptr [RBP + 0x10],R14 }
    /* +0xa38dbf */ __asm { MOV R14,qword ptr [RBP + 0x8] }
    /* +0xa38dc3 */ __asm { MOV R11,qword ptr [RBP + -0x8] }
    /* +0xa38dc7 */ __asm { MOV R10,0x7fffffffffffffff }
    /* +0xa38dd1 */ __asm { MOV RBX,qword ptr [RBP + 0x28] }
    /* +0xa38dd5 */ __asm { LEA R13D,[RSI + -0x1] }
    /* +0xa38dd9 */ __asm { MOVZX ECX,uint8_t ptr [RDI + R15*0x1] }
    /* +0xa38dde */ __asm { SHL ECX,0x4 }
    /* +0xa38de1 */ __asm { AND ECX,0x30 }
    /* +0xa38de4 */ __asm { CMP qword ptr [RBP + 0x40],R13 }
    /* +0xa38de8 */ __asm { JBE 0x7fffa51a8f30 }
    /* +0xa38dee */ __asm { LEA R8,[0x7fffa5744a1c] }
    /* +0xa38df5 */ __asm { MOV R12,qword ptr [RBP + 0x20] }
    /* +0xa38df9 */ __asm { MOVZX EDX,uint8_t ptr [RDI + R13*0x1] }
    /* +0xa38dfe */ __asm { SHR EDX,0x4 }
    /* +0xa38e01 */ __asm { OR RDX,RCX }
    /* +0xa38e04 */ __asm { MOV R9D,0x4270b01b }
    /* +0xa38e0a */ __asm { IMUL R9D,dword ptr [RBP + 0x4c] }
    /* +0xa38e0f */ __asm { ROL R9D,0xa }
    /* +0xa38e13 */ __asm { XOR R9D,R14D }
    /* +0xa38e16 */ __asm { IMUL R9D,R9D,0x1824b075 }
    /* +0xa38e1d */ __asm { MOVSXD RAX,R9D }
    /* +0xa38e20 */ __asm { ADD RAX,R8 }
    /* +0xa38e23 */ __asm { MOVZX EDX,uint8_t ptr [RDX + RAX*0x1] }
    /* +0xa38e27 */ __asm { CMP R12,RBX }
    /* +0xa38e2a */ __asm { JC 0x7fffa51a8fe0 }
    /* +0xa38e30 */ __asm { MOV RAX,R12 }
    /* +0xa38e33 */ __asm { ROL RAX,0x19 }
    /* +0xa38e37 */ __asm { ADD RAX,-0x40ac8b1e }
    /* +0xa38e3d */ __asm { CMP RAX,-0x41ac8b1f }
    /* +0xa38e43 */ __asm { JZ 0x7fffa51aa79e }
    /* +0xa38e49 */ __asm { MOV uint8_t ptr [RBP + 0x80],DL }
    /* +0xa38e4f */ __asm { LEA RSI,[R12 + 0x1] }
    /* +0xa38e54 */ __asm { MOV RDI,R10 }
    /* +0xa38e57 */ __asm { CMP R12,-0x1 }
    /* +0xa38e5b */ __asm { JL 0x7fffa51a8e85 }
    /* +0xa38e5d */ __asm { MOV R8,RBX }
    /* +0xa38e60 */ __asm { SHR R8,0x1 }
    /* +0xa38e63 */ __asm { MOV RAX,R8 }
    /* +0xa38e66 */ __asm { XOR RAX,R10 }
    /* +0xa38e69 */ __asm { MOV RDI,R10 }
    /* +0xa38e6c */ __asm { CMP RBX,RAX }
    /* +0xa38e6f */ __asm { JA 0x7fffa51a8e85 }
    /* +0xa38e71 */ __asm { MOV RAX,RSI }
    /* +0xa38e74 */ __asm { OR RAX,0xf }
    /* +0xa38e78 */ __asm { ADD R8,RBX }
    /* +0xa38e7b */ __asm { CMP RAX,R8 }
    /* +0xa38e7e */ __asm { CMOVA R8,RAX }
    /* +0xa38e82 */ __asm { MOV RDI,R8 }
}


// ============================================================================
// Function : Unwind@7fffa51ab5c0  |  RVA: 0xa3b5c0  |  Size: 273 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa51ab5c0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  code *pcVar2;
  short sVar3;
  
  if (0xf < *(uint64_t *)(param_2 + 0xa8)) {
    iVar1 = (int)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0xd0ca) +
            (int)*(uint64_t *)(param_2 + 0x88) + 0x7ba0;
    sVar3 = ((uint16_t)*(uint64_t *)(param_2 + 0x78) | 1) * (short)iVar1;
    pcVar2 = (code *)((int64_t)sVar3 + 0x7fffa5688f28);
    (*pcVar2)(CONCAT22((short)((uint64_t)*(uint64_t *)(param_2 + 0x78) >> 0x10) *
                       (short)((uint32_t)iVar1 >> 0x10),sVar3),pcVar2,
              *(uint64_t *)(param_2 + 0x90) >> 0x3d ^ *(uint64_t *)(param_2 + 0x90));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa51ab6e0  |  RVA: 0xa3b6e0  |  Size: 302 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa51ab6e0(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  code *pcVar3;
  
  if (0xf < *(uint64_t *)(param_2 + 0xa8)) {
    uVar1 = ((uint32_t)*(uint64_t *)(param_2 + 0x78) | 1) * 0x2a0a0eb5 ^ 0xa8f3d789;
    iVar2 = (uVar1 << 0x1d | uVar1 >> 3) * *(int *)(param_2 + 0xd8);
    pcVar3 = (code *)((int64_t)iVar2 + 0x7fffa569215d);
    (*pcVar3)(iVar2,pcVar3,*(uint64_t *)(param_2 + 0x90) >> 0x3d ^ *(uint64_t *)(param_2 + 0x90),
              &IMAGE_DOS_HEADER_7fffa4770000);
  }
  *(uint64_t *)(param_2 + 0xa8) = 0xf;
  *(uint8_t *)(param_2 + 0x90) = 0;
  *(uint64_t *)(param_2 + 0xa0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa51ab810  |  RVA: 0xa3b810  |  Size: 249 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa51ab810(uint64_t param_1,int64_t param_2,uint64_t param_3,uint32_t param_4)

{
  uint16_t uVar1;
  uint32_t uVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x48)) {
    uVar2 = ~((int)*(uint64_t *)(param_2 + 0x88) + CONCAT22((short)((uint32_t)param_4 >> 0x10),0x930e)
             );
    uVar1 = (uint16_t)uVar2;
    uVar1 = uVar1 << 6 | uVar1 >> 10;
    (*(code *)((int64_t)(short)uVar1 + 0x7fffa568875b))
              (CONCAT22((short)(uVar2 >> 0x10),uVar1),0x7fffa568875b,
               *(uint64_t *)(param_2 + 0x30) >> 0x3d ^ *(uint64_t *)(param_2 + 0x30));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa51ab910  |  RVA: 0xa3b910  |  Size: 379332 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa51ab910(void) {
    /* +0xa3b910 */ __asm { PUSH RBP }
    /* +0xa3b911 */ __asm { PUSH R15 }
    /* +0xa3b913 */ __asm { PUSH RBX }
    /* +0xa3b914 */ __asm { PUSH R12 }
    /* +0xa3b916 */ __asm { PUSH RSI }
    /* +0xa3b917 */ __asm { PUSH R13 }
    /* +0xa3b919 */ __asm { PUSH R14 }
    /* +0xa3b91b */ __asm { PUSH RDI }
    /* +0xa3b91c */ __asm { SUB RSP,0xac8 }
    /* +0xa3b923 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xa3b92b */ __asm { MOVDQA xmmword ptr [RBP + 0xa30],XMM6 }
    /* +0xa3b933 */ __asm { MOVDQA xmmword ptr [RBP + 0xa20],XMM13 }
    /* +0xa3b93c */ __asm { MOVAPS xmmword ptr [RBP + 0xa10],XMM14 }
    /* +0xa3b944 */ __asm { MOVAPS xmmword ptr [RBP + 0xa00],XMM15 }
    /* +0xa3b94c */ __asm { MOVDQA xmmword ptr [RBP + 0x9f0],XMM8 }
    /* +0xa3b955 */ __asm { MOVDQA xmmword ptr [RBP + 0x9e0],XMM10 }
    /* +0xa3b95e */ __asm { MOVDQA xmmword ptr [RBP + 0x9d0],XMM11 }
    /* +0xa3b967 */ __asm { MOVDQA xmmword ptr [RBP + 0x9c0],XMM9 }
    /* +0xa3b970 */ __asm { MOVDQA xmmword ptr [RBP + 0x9b0],XMM7 }
    /* +0xa3b978 */ __asm { MOVDQA xmmword ptr [RBP + 0x9a0],XMM12 }
    /* +0xa3b981 */ __asm { MOV qword ptr [RBP + 0x998],-0x2 }
    /* +0xa3b98c */ __asm { MOV RBX,RCX }
    /* +0xa3b98f */ __asm { MOV EDX,0xe2c7ba40 }
    /* +0xa3b994 */ __asm { MOV R10,R9 }
    /* +0xa3b997 */ __asm { ROL R10,0x18 }
    /* +0xa3b99b */ __asm { MOV R14D,EBX }
    /* +0xa3b99e */ __asm { OR R14D,0x1 }
    /* +0xa3b9a2 */ __asm { LEA RCX,[0x7fffa47c6052] }
    /* +0xa3b9a9 */ __asm { XOR RAX,0x222938d4 }
    /* +0xa3b9af */ __asm { LEA R11,[RAX + -0x18] }
    /* +0xa3b9b3 */ __asm { XOR EDX,0x93ef7398 }
    /* +0xa3b9b9 */ __asm { ROL EDX,0x1c }
    /* +0xa3b9bc */ __asm { MOV R8,R9 }
    /* +0xa3b9bf */ __asm { ROL R8,0x2f }
    /* +0xa3b9c3 */ __asm { XOR R8,R10 }
    /* +0xa3b9c6 */ __asm { XOR R8,R9 }
    /* +0xa3b9c9 */ __asm { MOV R9,R8 }
    /* +0xa3b9cc */ __asm { ROL R9,0x30 }
    /* +0xa3b9d0 */ __asm { MOV R15,R8 }
    /* +0xa3b9d3 */ __asm { ROL R15,0x1e }
    /* +0xa3b9d7 */ __asm { XOR R15,R9 }
    /* +0xa3b9da */ __asm { XOR R15,R8 }
    /* +0xa3b9dd */ __asm { MOV R9,R15 }
    /* +0xa3b9e0 */ __asm { ROL R9,0x3c }
    /* +0xa3b9e4 */ __asm { MOV R10,RAX }
    /* +0xa3b9e7 */ __asm { MOV R8,R15 }
    /* +0xa3b9ea */ __asm { ROL R8,0x20 }
    /* +0xa3b9ee */ __asm { XOR R8,R9 }
    /* +0xa3b9f1 */ __asm { XOR R8,R15 }
    /* +0xa3b9f4 */ __asm { ROL R8,0x8 }
    /* +0xa3b9f8 */ __asm { SHR R10,0x18 }
    /* +0xa3b9fc */ __asm { MOV R9,R8 }
    /* +0xa3b9ff */ __asm { SHL R9,0x2c }
    /* +0xa3ba03 */ __asm { ADD R9,R8 }
    /* +0xa3ba06 */ __asm { MOV qword ptr [RBP + 0x3b8],R9 }
    /* +0xa3ba0d */ __asm { MOV R9W,0x294 }
    /* +0xa3ba12 */ __asm { IMUL R9D,R14D }
    /* +0xa3ba16 */ __asm { ADD R9D,0xffffb3ba }
    /* +0xa3ba1d */ __asm { MOVSX R9,R9W }
    /* +0xa3ba21 */ __asm { MOV R9D,dword ptr [RCX + R9*0x1] }
    /* +0xa3ba25 */ __asm { MOVSXD RDX,EDX }
    /* +0xa3ba28 */ __asm { CMP RDX,-0x78ed7363 }
    /* +0xa3ba2f */ __asm { CMOVNZ R10,R11 }
    /* +0xa3ba33 */ __asm { XOR R10,RAX }
    /* +0xa3ba36 */ __asm { MOVQ XMM1,R10 }
    /* +0xa3ba3b */ __asm { SHR R10,0x30 }
    /* +0xa3ba3f */ __asm { MOVD XMM5,R10D }
    /* +0xa3ba44 */ __asm { PXOR XMM5,XMM1 }
    /* +0xa3ba48 */ __asm { MOVQ RAX,XMM5 }
    /* +0xa3ba4d */ __asm { MOV qword ptr [RBP + -0x10],RAX }
    /* +0xa3ba51 */ __asm { XOR RAX,0x6e7ddb2b }
    /* +0xa3ba57 */ __asm { MOV ECX,dword ptr [RAX + 0xc] }
    /* +0xa3ba5a */ __asm { MOV qword ptr [RBP + 0x720],RCX }
    /* +0xa3ba61 */ __asm { MOV ECX,dword ptr [RAX + 0x20] }
    /* +0xa3ba64 */ __asm { MOV qword ptr [RBP + 0x8c8],RCX }
    /* +0xa3ba6b */ __asm { MOVZX ECX,word ptr [RAX + 0x1c] }
    /* +0xa3ba6f */ __asm { MOV qword ptr [RBP + 0x988],RCX }
    /* +0xa3ba76 */ __asm { MOV qword ptr [RBP + 0x220],RAX }
    /* +0xa3ba7d */ __asm { MOVDQU XMM14,xmmword ptr [RAX + 0xc8] }
    /* +0xa3ba86 */ __asm { MOVD XMM15,EBX }
    /* +0xa3ba8b */ __asm { TEST R9B,0x2 }
    /* +0xa3ba8f */ __asm { MOV qword ptr [RBP + 0x358],RBX }
    /* +0xa3ba96 */ __asm { MOV qword ptr [RBP + 0x838],R14 }
    /* +0xa3ba9d */ __asm { MOVDQA xmmword ptr [RBP + 0x370],XMM15 }
    /* +0xa3baa6 */ __asm { JZ 0x7fffa52012c0 }
    /* +0xa3baac */ __asm { MOV R9D,0x77ea125c }
    /* +0xa3bab2 */ __asm { MOV dword ptr [RBP + 0x788],R9D }
    /* +0xa3bab9 */ __asm { MOV ECX,0xd3ef3b1c }
    /* +0xa3babe */ __asm { MOV qword ptr [RBP + 0x48],RCX }
    /* +0xa3bac2 */ __asm { LEA RDI,[0x7fffa5866593] }
    /* +0xa3bac9 */ __asm { LEA RAX,[0x7fffa586980c] }
    /* +0xa3bad0 */ __asm { MOV qword ptr [RBP + 0x228],RAX }
    /* +0xa3bad7 */ __asm { MOV ECX,0x8cebe32 }
    /* +0xa3badc */ __asm { MOV qword ptr [RBP + 0x810],RCX }
    /* +0xa3bae3 */ __asm { MOV ECX,0x18ff56c2 }
    /* +0xa3bae8 */ __asm { MOV qword ptr [RBP + 0x830],RCX }
    /* +0xa3baef */ __asm { LEA R10,[0x7fffa5868037] }
    /* +0xa3baf6 */ __asm { LEA RAX,[0x7fffa5863c60] }
    /* +0xa3bafd */ __asm { MOV qword ptr [RBP + 0x7d8],RAX }
    /* +0xa3bb04 */ __asm { MOV RAX,0x6fd611daab9951f7 }
    /* +0xa3bb0e */ __asm { MOV qword ptr [RBP + -0x18],RAX }
    /* +0xa3bb12 */ __asm { LEA RAX,[0x7fffa562def7] }
    /* +0xa3bb19 */ __asm { MOV qword ptr [RBP + 0x478],RAX }
    /* +0xa3bb20 */ __asm { LEA RAX,[0x7fffa47ca7fe] }
    /* +0xa3bb27 */ __asm { MOV qword ptr [RBP + 0x850],RAX }
    /* +0xa3bb2e */ __asm { LEA RAX,[0x7fffa586cfe1] }
    /* +0xa3bb35 */ __asm { MOV qword ptr [RBP + 0x18],RAX }
    /* +0xa3bb39 */ __asm { LEA RAX,[0x7fffa586e4e9] }
    /* +0xa3bb40 */ __asm { MOV qword ptr [RBP + 0xa8],RAX }
    /* +0xa3bb47 */ __asm { LEA R13,[0x7fffa5866384] }
    /* +0xa3bb4e */ __asm { LEA RAX,[0x7fffa5870a7f] }
    /* +0xa3bb55 */ __asm { MOV qword ptr [RBP + 0x8],RAX }
    /* +0xa3bb59 */ __asm { MOV R9D,0x9e7ef3ad }
    /* +0xa3bb5f */ __asm { MOV dword ptr [RBP + 0x498],R9D }
    /* +0xa3bb66 */ __asm { LEA RAX,[0x7fffa586f143] }
    /* +0xa3bb6d */ __asm { MOV qword ptr [RBP + 0x7e0],RAX }
    /* +0xa3bb74 */ __asm { LEA RAX,[0x7fffa586608f] }
    /* +0xa3bb7b */ __asm { MOV qword ptr [RBP + 0x5f0],RAX }
    /* +0xa3bb82 */ __asm { MOV R8W,0x5e4f }
    /* +0xa3bb87 */ __asm { MOV SI,0xc721 }
    /* +0xa3bb8b */ __asm { MOV R9D,0xb30141fb }
    /* +0xa3bb91 */ __asm { MOV dword ptr [RBP + 0x40],R9D }
    /* +0xa3bb95 */ __asm { LEA RAX,[0x7fffa47bea4d] }
    /* +0xa3bb9c */ __asm { MOV qword ptr [RBP + 0x7a8],RAX }
    /* +0xa3bba3 */ __asm { MOV R11W,0xcd02 }
    /* +0xa3bba8 */ __asm { ADD R11D,EBX }
    /* +0xa3bbab */ __asm { MOV R9D,0x3b010175 }
    /* +0xa3bbb1 */ __asm { MOV dword ptr [RBP + 0x108],R9D }
    /* +0xa3bbb8 */ __asm { LEA RAX,[0x7fffa586dd0d] }
    /* +0xa3bbbf */ __asm { MOV qword ptr [RBP + 0x4e8],RAX }
    /* +0xa3bbc6 */ __asm { MOV R9D,0x2014790f }
    /* +0xa3bbcc */ __asm { ADD R9D,0xb48e901a }
    /* +0xa3bbd3 */ __asm { IMUL R9D,R14D }
    /* +0xa3bbd7 */ __asm { LEA RAX,[0x7fffa47cbd14] }
    /* +0xa3bbde */ __asm { MOV qword ptr [RBP + 0x790],RAX }
    /* +0xa3bbe5 */ __asm { ADD R9D,0x244ca5d2 }
    /* +0xa3bbec */ __asm { MOVSXD RAX,R9D }
    /* +0xa3bbef */ __asm { MOV qword ptr [RBP + 0x4d0],RAX }
    /* +0xa3bbf6 */ __asm { LEA RAX,[0x7fffa47c6dec] }
    /* +0xa3bbfd */ __asm { MOV qword ptr [RBP + 0x690],RAX }
    /* +0xa3bc04 */ __asm { MOV R9D,0x6dbcaeb }
    /* +0xa3bc0a */ __asm { MOV dword ptr [RBP + 0x5e8],R9D }
    /* +0xa3bc11 */ __asm { MOV EAX,0xee0fa5a9 }
    /* +0xa3bc16 */ __asm { MOV R12D,0xedc86f42 }
    /* +0xa3bc1c */ __asm { LEA R15,[0x7fffa5866924] }
    /* +0xa3bc23 */ __asm { MOV CX,0x7d30 }
    /* +0xa3bc27 */ __asm { MOV qword ptr [RBP + 0x758],RCX }
    /* +0xa3bc2e */ __asm { MOV ECX,0xd55959fa }
    /* +0xa3bc33 */ __asm { MOV qword ptr [RBP + -0x50],RCX }
    /* +0xa3bc37 */ __asm { MOV R9D,0xac0f5ae }
    /* +0xa3bc3d */ __asm { MOV dword ptr [RBP + 0x800],R9D }
    /* +0xa3bc44 */ __asm { MOV R14D,0x8b7b9c33 }
    /* +0xa3bc4a */ __asm { MOV EDX,0x727f4166 }
    /* +0xa3bc4f */ __asm { MOV R9W,0x9df6 }
    /* +0xa3bc54 */ __asm { MOV dword ptr [RBP + 0x3e8],R9D }
    /* +0xa3bc5b */ __asm { NOT R11D }
    /* +0xa3bc5e */ __asm { LEA R9,[0x7fffa5867b65] }
    /* +0xa3bc65 */ __asm { MOV qword ptr [RBP + 0x928],R9 }
    /* +0xa3bc6c */ __asm { MOV CX,0xda7f }
    /* +0xa3bc70 */ __asm { IMUL R9D,ECX,-0x415b }
    /* +0xa3bc77 */ __asm { MOV ECX,EBX }
    /* +0xa3bc79 */ __asm { ROR R9W,CL }
    /* +0xa3bc7d */ __asm { MOVSX R11,R11W }
    /* +0xa3bc81 */ __asm { ADD R11,R10 }
    /* +0xa3bc84 */ __asm { MOV qword ptr [RBP + 0x50],R11 }
    /* +0xa3bc88 */ __asm { MOVSX R11,R9W }
    /* +0xa3bc8c */ __asm { ADD R11,RDI }
    /* +0xa3bc8f */ __asm { MOV qword ptr [RBP + 0x148],R11 }
    /* +0xa3bc96 */ __asm { MOV ECX,EBX }
    /* +0xa3bc98 */ __asm { SUB ECX,R8D }
    /* +0xa3bc9b */ __asm { ADD ECX,0x7577 }
    /* +0xa3bca1 */ __asm { MOVSX R11,CX }
    /* +0xa3bca5 */ __asm { ADD R11,R13 }
    /* +0xa3bca8 */ __asm { MOV qword ptr [RBP + 0x990],R11 }
    /* +0xa3bcaf */ __asm { MOV R11W,0x6278 }
    /* +0xa3bcb4 */ __asm { MOV R9D,0x5ceccc87 }
    /* +0xa3bcba */ __asm { IMUL R9D,R9D,0x2d418d2d }
    /* +0xa3bcc1 */ __asm { ROL R9D,0x16 }
    /* +0xa3bcc5 */ __asm { SUB R9D,EBX }
    /* +0xa3bcc8 */ __asm { MOVSXD R9,R9D }
    /* +0xa3bccb */ __asm { ADD R9,qword ptr [RBP + 0x18] }
    /* +0xa3bccf */ __asm { MOV qword ptr [RBP + 0x18],R9 }
    /* +0xa3bcd3 */ __asm { SUB R14D,EBX }
    /* +0xa3bcd6 */ __asm { ROL R14D,0xb }
    /* +0xa3bcda */ __asm { MOVSXD R9,R14D }
    /* +0xa3bcdd */ __asm { ADD R9,qword ptr [RBP + 0x228] }
    /* +0xa3bce4 */ __asm { MOV qword ptr [RBP + 0x848],R9 }
    /* +0xa3bceb */ __asm { MOV RCX,qword ptr [RBP + 0x810] }
    /* +0xa3bcf2 */ __asm { XOR ECX,0x9c69fbe2 }
    /* +0xa3bcf8 */ __asm { IMUL R10D,EAX,-0x6e74ae9b }
    /* +0xa3bcff */ __asm { MOV RDI,qword ptr [RBP + 0x838] }
    /* +0xa3bd06 */ __asm { IMUL ECX,EDI }
    /* +0xa3bd09 */ __asm { MOV qword ptr [RBP + 0x810],RCX }
    /* +0xa3bd10 */ __asm { ADD R10D,0x56bce01b }
    /* +0xa3bd17 */ __asm { MOV R14W,0xec78 }
    /* +0xa3bd1c */ __asm { MOV R8W,0x661 }
    /* +0xa3bd21 */ __asm { MOV EAX,0xa95210ad }
    /* +0xa3bd26 */ __asm { MOV CX,0x3cc }
    /* +0xa3bd2a */ __asm { ADD ECX,0x2dbc }
    /* +0xa3bd30 */ __asm { XOR ECX,EBX }
    /* +0xa3bd32 */ __asm { MOVSX R9,CX }
    /* +0xa3bd36 */ __asm { ADD R9,R15 }
    /* +0xa3bd39 */ __asm { MOV qword ptr [RBP + 0x228],R9 }
    /* +0xa3bd40 */ __asm { MOVQ R9,XMM14 }
    /* +0xa3bd45 */ __asm { XOR R9,qword ptr [RBP + 0x720] }
    /* +0xa3bd4c */ __asm { MOV R15,R9 }
    /* +0xa3bd4f */ __asm { SUB R12D,EBX }
    /* +0xa3bd52 */ __asm { ADD R12D,0x9cb969ff }
    /* +0xa3bd59 */ __asm { MOVSXD R9,R12D }
    /* +0xa3bd5c */ __asm { ADD R11D,0x3a3 }
    /* +0xa3bd63 */ __asm { MOV ECX,EBX }
    /* +0xa3bd65 */ __asm { ROR R11W,CL }
    /* +0xa3bd69 */ __asm { XOR R9,0x24591950 }
    /* +0xa3bd70 */ __asm { ADD R9,qword ptr [RBP + 0x7e0] }
    /* +0xa3bd77 */ __asm { MOV qword ptr [RBP + 0x7e0],R9 }
    /* +0xa3bd7e */ __asm { MOVSX R11,R11W }
    /* +0xa3bd82 */ __asm { ADD R11,qword ptr [RBP + 0x5f0] }
    /* +0xa3bd89 */ __asm { MOV qword ptr [RBP + 0x5f0],R11 }
    /* +0xa3bd90 */ __asm { IMUL R9D,dword ptr [RBP + 0x800],-0x38ff2b2b }
    /* +0xa3bd9b */ __asm { NOT R9D }
    /* +0xa3bd9e */ __asm { MOVSXD R11,R9D }
    /* +0xa3bda1 */ __asm { ADD R11,qword ptr [RBP + 0x478] }
    /* +0xa3bda8 */ __asm { MOV qword ptr [RBP + 0x720],R11 }
    /* +0xa3bdaf */ __asm { XOR R14D,0x133f }
    /* +0xa3bdb6 */ __asm { ADD R14D,EBX }
    /* +0xa3bdb9 */ __asm { MOVSX R11,R14W }
    /* +0xa3bdbd */ __asm { ADD R11,qword ptr [RBP + 0x928] }
    /* +0xa3bdc4 */ __asm { MOV qword ptr [RBP + 0x800],R11 }
    /* +0xa3bdcb */ __asm { ADD EDX,0x5a04d22f }
    /* +0xa3bdd1 */ __asm { MOV RCX,RDI }
    /* +0xa3bdd4 */ __asm { IMUL EDX,ECX }
    /* +0xa3bdd7 */ __asm { MOV R9D,0x444390b7 }
    /* +0xa3bddd */ __asm { MOVSXD R11,EDX }
    /* +0xa3bde0 */ __asm { MOV qword ptr [RBP + 0x928],R11 }
    /* +0xa3bde7 */ __asm { LEA R11,[0x7fffa5864597] }
    /* +0xa3bdee */ __asm { XOR ESI,0x9ef0 }
    /* +0xa3bdf4 */ __asm { ROL SI,0x8 }
    /* +0xa3bdf8 */ __asm { MOVSX RDX,SI }
    /* +0xa3bdfc */ __asm { ADD RDX,R11 }
    /* +0xa3bdff */ __asm { MOV qword ptr [RBP + 0x478],RDX }
    /* +0xa3be06 */ __asm { PSHUFD XMM1,XMM14,0xee }
    /* +0xa3be0c */ __asm { MOVQ R11,XMM1 }
    /* +0xa3be11 */ __asm { XOR R15,R11 }
    /* +0xa3be14 */ __asm { MOV qword ptr [RBP + 0x1a0],R15 }
    /* +0xa3be1b */ __asm { MOV EDX,dword ptr [RBP + 0x788] }
    /* +0xa3be21 */ __asm { ADD EDX,0xd93aa242 }
    /* +0xa3be27 */ __asm { MOV R11,qword ptr [RBP + -0x18] }
    /* +0xa3be2b */ __asm { XOR R11,0x33c4ccdd }
    /* +0xa3be32 */ __asm { XOR EDX,EBX }
    /* +0xa3be34 */ __asm { MOV R15D,EDX }
    /* +0xa3be37 */ __asm { MOVSXD RDX,dword ptr [RBP + 0x5e8] }
    /* +0xa3be3e */ __asm { XOR RDX,-0x6db1601 }
    /* +0xa3be45 */ __asm { MOV qword ptr [RBP + 0x788],RDX }
    /* +0xa3be4c */ __asm { ADD R11,RBX }
    /* +0xa3be4f */ __asm { ROL R11,0x2 }
    /* +0xa3be53 */ __asm { MOV qword ptr [RBP + -0x18],R11 }
    /* +0xa3be57 */ __asm { MOV R13,qword ptr [RBP + 0x988] }
    /* +0xa3be5e */ __asm { SHL R13,0x20 }
    /* +0xa3be62 */ __asm { MOV EDX,dword ptr [RBP + 0x108] }
    /* +0xa3be68 */ __asm { MOV R11,RDI }
    /* +0xa3be6b */ __asm { IMUL EDX,R11D }
    /* +0xa3be6f */ __asm { MOV RCX,qword ptr [RBP + 0x758] }
    /* +0xa3be76 */ __asm { ADD ECX,EBX }
    /* +0xa3be78 */ __asm { MOV qword ptr [RBP + 0x758],RCX }
    /* +0xa3be7f */ __asm { SUB R8D,EBX }
    /* +0xa3be82 */ __asm { XOR EAX,0xf871672d }
    /* +0xa3be87 */ __asm { ROL EDX,0x10 }
    /* +0xa3be8a */ __asm { MOV dword ptr [RBP + 0x108],EDX }
    /* +0xa3be90 */ __asm { MOV EDX,dword ptr [RBP + 0x40] }
    /* +0xa3be93 */ __asm { IMUL EDX,R11D }
    /* +0xa3be97 */ __asm { ADD EDX,0xf0ba4fca }
    /* +0xa3be9d */ __asm { MOV dword ptr [RBP + 0x40],EDX }
    /* +0xa3bea0 */ __asm { IMUL EDX,dword ptr [RBP + 0x498],0x22612193 }
    /* +0xa3beaa */ __asm { NOT EDX }
    /* +0xa3beac */ __asm { ADD EDX,EBX }
    /* +0xa3beae */ __asm { MOV R12D,dword ptr [RBP + 0x3e8] }
    /* +0xa3beb5 */ __asm { ADD R12D,0x7359 }
    /* +0xa3bebc */ __asm { MOV R14D,0x45e52c87 }
    /* +0xa3bec2 */ __asm { IMUL R14D,R11D }
    /* +0xa3bec6 */ __asm { XOR R14D,0xc2a3b3d3 }
    /* +0xa3becd */ __asm { IMUL ESI,R8D,0x345 }
    /* +0xa3bed4 */ __asm { CMP R10,qword ptr [RBP + 0x4d0] }
    /* +0xa3bedb */ __asm { MOV R8,qword ptr [RBP + 0x8c8] }
    /* +0xa3bee2 */ __asm { MOVSXD R10,R8D }
    /* +0xa3bee5 */ __asm { CMOVGE R10,R8 }
    /* +0xa3bee9 */ __asm { MOVSXD R8,R15D }
    /* +0xa3beec */ __asm { LEA RDI,[0x7fffa586f3dc] }
    /* +0xa3bef3 */ __asm { LEA RCX,[0x7fffa586261f] }
    /* +0xa3befa */ __asm { MOV R11,-0x800aedba092 }
    /* +0xa3bf04 */ __asm { ADD R11,RBX }
    /* +0xa3bf07 */ __asm { NOT R11 }
    /* +0xa3bf0a */ __asm { MOV R15,qword ptr [RBP + 0x850] }
    /* +0xa3bf11 */ __asm { MOV R15,qword ptr [R15 + R8*0x1] }
    /* +0xa3bf15 */ __asm { MOVSXD R8,EDX }
    /* +0xa3bf18 */ __asm { MOV RDX,qword ptr [RBP + 0x690] }
    /* +0xa3bf1f */ __asm { MOV RDX,qword ptr [RDX + R8*0x1 + 0x8] }
    /* +0xa3bf24 */ __asm { ADD EAX,EBX }
    /* +0xa3bf26 */ __asm { MOVSXD R8,EAX }
    /* +0xa3bf29 */ __asm { MOV qword ptr [RBP + 0x910],RDX }
    /* +0xa3bf30 */ __asm { MOV RAX,RDX }
    /* +0xa3bf33 */ __asm { XOR RAX,R15 }
    /* +0xa3bf36 */ __asm { MOV RDX,RAX }
    /* +0xa3bf39 */ __asm { ROL RDX,0x1c }
    /* +0xa3bf3d */ __asm { MOVSXD R14,R14D }
    /* +0xa3bf40 */ __asm { MOV qword ptr [RBP + 0x850],R14 }
    /* +0xa3bf47 */ __asm { MOV R14,qword ptr [RBP + 0x790] }
    /* +0xa3bf4e */ __asm { MOV qword ptr [R14 + R8*0x1 + 0x8],RDX }
    /* +0xa3bf53 */ __asm { MOV R8,RAX }
    /* +0xa3bf56 */ __asm { SHL R8,0x15 }
    /* +0xa3bf5a */ __asm { MOV qword ptr [RBP + 0x690],R15 }
    /* +0xa3bf61 */ __asm { MOV RDX,R15 }
    /* +0xa3bf64 */ __asm { ROL RDX,0x31 }
    /* +0xa3bf68 */ __asm { XOR RDX,R8 }
    /* +0xa3bf6b */ __asm { XOR RDX,RAX }
    /* +0xa3bf6e */ __asm { ADD R10,R13 }
    /* +0xa3bf71 */ __asm { MOV RAX,0x3534c75094b1769e }
    /* +0xa3bf7b */ __asm { XOR RAX,R10 }
    /* +0xa3bf7e */ __asm { XOR RAX,qword ptr [RBP + 0x1a0] }
    /* +0xa3bf85 */ __asm { MOV R10,-0x61c8864680b583eb }
    /* +0xa3bf8f */ __asm { ADD RAX,R10 }
    /* +0xa3bf92 */ __asm { MOV R8,RAX }
    /* +0xa3bf95 */ __asm { SHR R8,0x1e }
    /* +0xa3bf99 */ __asm { XOR R8,RAX }
    /* +0xa3bf9c */ __asm { IMUL R8,qword ptr [RBP + -0x18] }
    /* +0xa3bfa1 */ __asm { MOV R10,R8 }
    /* +0xa3bfa4 */ __asm { SHR R10,0x1b }
    /* +0xa3bfa8 */ __asm { XOR R10,R8 }
    /* +0xa3bfab */ __asm { ADD RDI,qword ptr [RBP + 0x788] }
    /* +0xa3bfb2 */ __asm { MOV qword ptr [RBP + 0x790],RDI }
    /* +0xa3bfb9 */ __asm { MOVSX RAX,SI }
    /* +0xa3bfbd */ __asm { ADD RCX,RAX }
    /* +0xa3bfc0 */ __asm { MOV qword ptr [RBP + 0x8c8],RCX }
    /* +0xa3bfc7 */ __asm { MOV R8,qword ptr [RBP + 0x830] }
    /* +0xa3bfce */ __asm { LEA EAX,[RBX + R8*0x1] }
    /* +0xa3bfd2 */ __asm { ADD EAX,0x382446dd }
    /* +0xa3bfd7 */ __asm { CDQE }
    /* +0xa3bfd9 */ __asm { ADD RAX,qword ptr [RBP + 0x4e8] }
    /* +0xa3bfe0 */ __asm { MOV qword ptr [RBP + -0x18],RAX }
    /* +0xa3bfe4 */ __asm { MOV ECX,EBX }
    /* +0xa3bfe6 */ __asm { ROR R12W,CL }
    /* +0xa3bfea */ __asm { ADD R9D,0x1fcc6f47 }
    /* +0xa3bff1 */ __asm { ROL R9D,CL }
    /* +0xa3bff4 */ __asm { MOVSX RAX,R12W }
    /* +0xa3bff8 */ __asm { XOR RAX,0x2b84 }
    /* +0xa3bffe */ __asm { ROL R9D,0xb }
    /* +0xa3c002 */ __asm { ADD RAX,qword ptr [RBP + 0x7d8] }
    /* +0xa3c009 */ __asm { MOV qword ptr [RBP + 0x7d8],RAX }
    /* +0xa3c010 */ __asm { MOVSXD RAX,R9D }
    /* +0xa3c013 */ __asm { ADD RAX,qword ptr [RBP + 0xa8] }
    /* +0xa3c01a */ __asm { MOV qword ptr [RBP + 0x988],RAX }
    /* +0xa3c021 */ __asm { MOV RCX,qword ptr [RBP + -0x50] }
    /* +0xa3c025 */ __asm { ADD ECX,0x392d8f79 }
    /* +0xa3c02b */ __asm { IMUL ECX,dword ptr [RBP + 0x838] }
    /* +0xa3c032 */ __asm { MOV qword ptr [RBP + -0x50],RCX }
    /* +0xa3c036 */ __asm { MOV RAX,-0x6b2fb644ecceee15 }
    /* +0xa3c040 */ __asm { IMUL R10,RAX }
    /* +0xa3c044 */ __asm { MOV R15,R10 }
    /* +0xa3c047 */ __asm { SHR R15,0x3c }
    /* +0xa3c04b */ __asm { MOV RCX,R10 }
    /* +0xa3c04e */ __asm { SHR RCX,0x2c }
    /* +0xa3c052 */ __asm { MOV R9,R10 }
    /* +0xa3c055 */ __asm { SHR R9,0x1f }
    /* +0xa3c059 */ __asm { AND ECX,0xf }
    /* +0xa3c05c */ __asm { MOV qword ptr [RBP + 0xa8],RCX }
    /* +0xa3c063 */ __asm { MOV RAX,R10 }
    /* +0xa3c066 */ __asm { SHR RAX,0x24 }
    /* +0xa3c06a */ __asm { MOV qword ptr [RBP + 0x830],RAX }
    /* +0xa3c071 */ __asm { MOV RDI,R10 }
    /* +0xa3c074 */ __asm { SHR RDI,0x38 }
    /* +0xa3c078 */ __asm { AND EDI,0xf }
    /* +0xa3c07b */ __asm { MOV RAX,R10 }
    /* +0xa3c07e */ __asm { SHR RAX,0x30 }
    /* +0xa3c082 */ __asm { CMP R11,qword ptr [RBP + 0x928] }
    /* +0xa3c089 */ __asm { MOV R8D,0xfff0 }
    /* +0xa3c08f */ __asm { MOV ECX,0xffff }
    /* +0xa3c094 */ __asm { CMOVGE ECX,R8D }
    /* +0xa3c098 */ __asm { MOV R8,qword ptr [RBP + 0x758] }
    /* +0xa3c09f */ __asm { NOT R8D }
    /* +0xa3c0a2 */ __asm { MOVSX R8,R8W }
    /* +0xa3c0a6 */ __asm { MOV R11,qword ptr [RBP + 0x7a8] }
    /* +0xa3c0ad */ __asm { MOV qword ptr [R11 + R8*0x1],RDX }
    /* +0xa3c0b1 */ __asm { MOV R8,R9 }
    /* +0xa3c0b4 */ __asm { MOV R13,R8 }
    /* +0xa3c0b7 */ __asm { NOT R13 }
    /* +0xa3c0ba */ __asm { MOV RDX,RAX }
    /* +0xa3c0bd */ __asm { XOR RDX,0xf }
    /* +0xa3c0c1 */ __asm { MOV R11,R13 }
    /* +0xa3c0c4 */ __asm { XOR R11,RDX }
    /* +0xa3c0c7 */ __asm { AND EDX,R8D }
    /* +0xa3c0ca */ __asm { SUB RDX,R11 }
    /* +0xa3c0cd */ __asm { MOVSXD R11,dword ptr [RBP + 0x108] }
    /* +0xa3c0d4 */ __asm { MOV R14D,EAX }
    /* +0xa3c0d7 */ __asm { AND R14D,0xfffffff0 }
    /* +0xa3c0db */ __asm { MOV RSI,R13 }
    /* +0xa3c0de */ __asm { XOR RSI,R14 }
    /* +0xa3c0e1 */ __asm { IMUL RSI,R11 }
    /* +0xa3c0e5 */ __asm { MOV R11,qword ptr [RBP + 0x48] }
    /* +0xa3c0e9 */ __asm { LEA R12D,[RBX + R11*0x1] }
    /* +0xa3c0ed */ __asm { ADD R12D,0xbba4b124 }
    /* +0xa3c0f4 */ __asm { AND ECX,EAX }
    /* +0xa3c0f6 */ __asm { MOV R11D,EAX }
    /* +0xa3c0f9 */ __asm { XOR RAX,-0x10 }
    /* +0xa3c0fd */ __asm { AND RAX,R13 }
    /* +0xa3c100 */ __asm { IMUL RAX,R12 }
    /* +0xa3c104 */ __asm { IMUL RDX,RDX,0x3e6f8883 }
    /* +0xa3c10b */ __asm { MOV qword ptr [RBP + 0x108],RDX }
    /* +0xa3c112 */ __asm { MOV R12,R10 }
    /* +0xa3c115 */ __asm { SHR R12,0x34 }
    /* +0xa3c119 */ __asm { AND R12D,0xf }
    /* +0xa3c11d */ __asm { MOV qword ptr [RBP + 0x668],R8 }
    /* +0xa3c124 */ __asm { AND R11D,R8D }
    /* +0xa3c127 */ __asm { AND R11D,0xf }
    /* +0xa3c12b */ __asm { XOR RCX,R13 }
    /* +0xa3c12e */ __asm { IMUL RBX,RCX,0x4f76b6c1 }
    /* +0xa3c135 */ __asm { MOV RDX,R11 }
    /* +0xa3c138 */ __asm { XOR RDX,0x95d1df3 }
    /* +0xa3c13f */ __asm { IMUL RCX,R11,0x95d1df3 }
    /* +0xa3c146 */ __asm { MOV R8,qword ptr [RBP + 0x850] }
    /* +0xa3c14d */ __asm { CMP qword ptr [RBP + 0x810],R8 }
    /* +0xa3c154 */ __asm { PXOR XMM1,XMM1 }
    /* +0xa3c158 */ __asm { MOVDQA xmmword ptr [RBP + 0x230],XMM1 }
    /* +0xa3c160 */ __asm { MOV qword ptr [RBP + 0x240],0x0 }
    /* +0xa3c16b */ __asm { MOV qword ptr [RBP + 0x248],0xf }
    /* +0xa3c176 */ __asm { MOVDQA xmmword ptr [RBP + 0x250],XMM1 }
    /* +0xa3c17e */ __asm { MOV qword ptr [RBP + 0x260],0x0 }
    /* +0xa3c189 */ __asm { MOV qword ptr [RBP + 0x268],0xf }
    /* +0xa3c194 */ __asm { MOVDQA xmmword ptr [RBP + 0x270],XMM1 }
    /* +0xa3c19c */ __asm { MOV qword ptr [RBP + 0x280],0x0 }
    /* +0xa3c1a7 */ __asm { MOV qword ptr [RBP + 0x288],0xf }
    /* +0xa3c1b2 */ __asm { MOVDQA xmmword ptr [RBP + 0x290],XMM1 }
    /* +0xa3c1ba */ __asm { MOV qword ptr [RBP + 0x2a0],0x0 }
    /* +0xa3c1c5 */ __asm { MOV qword ptr [RBP + 0x2a8],0xf }
    /* +0xa3c1d0 */ __asm { MOV R8,qword ptr [RBP + 0x848] }
    /* +0xa3c1d7 */ __asm { MOVZX R8D,uint8_t ptr [R15 + R8*0x1] }
    /* +0xa3c1dc */ __asm { MOV uint8_t ptr [RBP + 0x758],R8B }
    /* +0xa3c1e3 */ __asm { CMOVG RDX,RCX }
    /* +0xa3c1e7 */ __asm { MOV uint8_t ptr [RBP + 0x410],0x0 }
    /* +0xa3c1ee */ __asm { XOR R9,R10 }
    /* +0xa3c1f1 */ __asm { MOV ECX,R9D }
    /* +0xa3c1f4 */ __asm { SHR ECX,0x10 }
    /* +0xa3c1f7 */ __asm { AND ECX,0xf }
    /* +0xa3c1fa */ __asm { MOV R8,qword ptr [RBP + 0x800] }
    /* +0xa3c201 */ __asm { MOVZX R15D,uint8_t ptr [RCX + R8*0x1] }
    /* +0xa3c206 */ __asm { MOV ECX,R9D }
    /* +0xa3c209 */ __asm { SHR ECX,0x14 }
    /* +0xa3c20c */ __asm { AND ECX,0xf }
    /* +0xa3c20f */ __asm { MOV R8,qword ptr [RBP + 0x790] }
    /* +0xa3c216 */ __asm { MOVZX ECX,uint8_t ptr [RCX + R8*0x1] }
    /* +0xa3c21b */ __asm { IMUL R11,R11,-0x95d1df2 }
    /* +0xa3c222 */ __asm { XOR R14,-0x10 }
    /* +0xa3c226 */ __asm { MOV qword ptr [RBP + 0x6c8],R13 }
    /* +0xa3c22d */ __asm { AND R14,R13 }
    /* +0xa3c230 */ __asm { SUB R11,R14 }
    /* +0xa3c233 */ __asm { ADD R11,qword ptr [RBP + 0x108] }
    /* +0xa3c23a */ __asm { ADD R11,RDX }
    /* +0xa3c23d */ __asm { ADD RAX,RSI }
    /* +0xa3c240 */ __asm { ADD RAX,RBX }
    /* +0xa3c243 */ __asm { ADD RAX,R11 }
    /* +0xa3c246 */ __asm { MOV R11,qword ptr [RBP + 0x5f0] }
    /* +0xa3c24d */ __asm { MOVZX EDX,uint8_t ptr [R11 + RAX*0x1] }
    /* +0xa3c252 */ __asm { MOVSXD R8,dword ptr [RBP + 0x40] }
    /* +0xa3c256 */ __asm { ADD R8,qword ptr [RBP + 0x8] }
    /* +0xa3c25a */ __asm { MOV EAX,R9D }
    /* +0xa3c25d */ __asm { SHR EAX,0x4 }
    /* +0xa3c260 */ __asm { AND EAX,0xf }
    /* +0xa3c263 */ __asm { MOVZX R8D,uint8_t ptr [RAX + R8*0x1] }
    /* +0xa3c268 */ __asm { MOV uint8_t ptr [RBP + 0x40b],R15B }
    /* +0xa3c26f */ __asm { MOV RAX,qword ptr [RBP + 0x478] }
    /* +0xa3c276 */ __asm { MOVZX EAX,uint8_t ptr [R12 + RAX*0x1] }
    /* +0xa3c27b */ __asm { SHR R10,0x28 }
    /* +0xa3c27f */ __asm { AND R10D,0xf }
    /* +0xa3c283 */ __asm { MOV R11,qword ptr [RBP + 0x8c8] }
    /* +0xa3c28a */ __asm { MOVZX R11D,uint8_t ptr [R10 + R11*0x1] }
    /* +0xa3c28f */ __asm { MOV uint8_t ptr [RBP + 0x40a],CL }
    /* +0xa3c295 */ __asm { MOV RCX,R9 }
    /* +0xa3c298 */ __asm { SHR RCX,0x20 }
    /* +0xa3c29c */ __asm { AND ECX,0xf }
    /* +0xa3c29f */ __asm { MOV R10,qword ptr [RBP + 0x228] }
    /* +0xa3c2a6 */ __asm { MOVZX ECX,uint8_t ptr [RCX + R10*0x1] }
    /* +0xa3c2ab */ __asm { MOV R10D,R9D }
    /* +0xa3c2ae */ __asm { SHR R10D,0x18 }
    /* +0xa3c2b2 */ __asm { AND R10D,0xf }
    /* +0xa3c2b6 */ __asm { MOV R13,qword ptr [RBP + 0x148] }
    /* +0xa3c2bd */ __asm { MOVZX R10D,uint8_t ptr [R10 + R13*0x1] }
    /* +0xa3c2c2 */ __asm { MOV uint8_t ptr [RBP + 0x407],CL }
    /* +0xa3c2c8 */ __asm { MOV RCX,qword ptr [RBP + 0x7d8] }
    /* +0xa3c2cf */ __asm { MOVZX ECX,uint8_t ptr [RDI + RCX*0x1] }
    /* +0xa3c2d3 */ __asm { MOV uint8_t ptr [RBP + 0x401],CL }
    /* +0xa3c2d9 */ __asm { MOV RCX,qword ptr [RBP + 0x7e0] }
    /* +0xa3c2e0 */ __asm { MOV R15,qword ptr [RBP + 0xa8] }
    /* +0xa3c2e7 */ __asm { MOVZX ECX,uint8_t ptr [R15 + RCX*0x1] }
    /* +0xa3c2ec */ __asm { MOV R14D,R9D }
    /* +0xa3c2ef */ __asm { SHR R14D,0x8 }
    /* +0xa3c2f3 */ __asm { AND R14D,0xf }
    /* +0xa3c2f7 */ __asm { MOV RDI,qword ptr [RBP + 0x990] }
    /* +0xa3c2fe */ __asm { MOVZX EBX,uint8_t ptr [R14 + RDI*0x1] }
    /* +0xa3c303 */ __asm { MOV R14,qword ptr [RBP + 0x830] }
    /* +0xa3c30a */ __asm { AND R14D,0xf }
    /* +0xa3c30e */ __asm { MOV RDI,qword ptr [RBP + 0x988] }
    /* +0xa3c315 */ __asm { MOVZX R14D,uint8_t ptr [R14 + RDI*0x1] }
}


// ============================================================================
// Function : Unwind@7fffa5208c90  |  RVA: 0xa98c90  |  Size: 304 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5208c90(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8);
  bVar1 = bVar2 & 0x1f;
  uVar3 = *(uint32_t *)(param_2 + 0x290) ^ 0x4fe265a2;
  bVar2 = bVar2 & 0x1f;
  uVar3 = uVar3 << bVar2 | uVar3 >> 0x20 - bVar2;
  *(uint32_t *)((int64_t)(int)(0x2773f601 - (0x12774e68 << bVar1 | 0x12774e68U >> 0x20 - bVar1)) +
           0x7fffa47cba10) =
       *(uint32_t *)((int64_t)(int)(uVar3 << 0xb | uVar3 >> 0x15) + 0x7fffa47c7d17) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5208dc0  |  RVA: 0xa98dc0  |  Size: 309 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5208dc0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar3 = ~(*(uint32_t *)(param_2 + 0x440) ^ 0x9bf88f6);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0x1f;
  uVar2 = *(int *)(param_2 + 0x640) * 0x36b84a45 ^ *(uint32_t *)(param_2 + 0x390);
  *(uint32_t *)((int64_t)(int)((uVar3 << bVar1 | uVar3 >> 0x20 - bVar1) + 0x516f12ba) + 0x7fffa47cbd34)
       = *(uint32_t *)((int64_t)(int)(uVar2 << 0x18 | uVar2 >> 8) + 0x7fffa47c97a1) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5208f00  |  RVA: 0xa98f00  |  Size: 317 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5208f00(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  short sVar2;
  
  sVar2 = (short)*(uint64_t *)(param_2 + 0x30);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0xf;
  *(uint32_t *)((int64_t)(short)((0xb9f << bVar1 | 0xb9fU >> 0x10 - bVar1) - sVar2) + 0x7fffa47bf280) =
       *(uint32_t *)((int64_t)
                 (short)(((sVar2 + 0x3a30U ^ 0xce5) - (short)*(uint64_t *)(param_2 + 0x3d8)) +
                        0x4ef8) + 0x7fffa47c04e7) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5209040  |  RVA: 0xa99040  |  Size: 375 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5209040(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  uint32_t uVar6;
  
  uVar4 = (int)*(uint64_t *)(param_2 + 0x910) * 0x1992be40;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8);
  bVar2 = bVar3 & 0x1f;
  bVar3 = bVar3 & 0xf;
  uVar5 = (0x352c << bVar3 | 0x352cU >> 0x10 - bVar3) ^ 0xdda0;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x860) & 0xf;
  uVar1 = *(uint32_t *)((int64_t)(short)(uVar5 >> bVar3 | uVar5 << 0x10 - bVar3) + 0x7fffa47c17c9);
  uVar6 = uVar1 | 0xfffffffd;
  if ((uVar4 << bVar2 | uVar4 >> 0x20 - bVar2) + *(int *)(param_2 + 0x30) != -0x1b4b6f1b) {
    uVar6 = uVar1 & 0xfffffffd;
  }
  *(uint32_t *)((int64_t)
            (short)((short)*(uint64_t *)(param_2 + 0x3d8) +
                    (short)*(uint32_t *)(param_2 + 0x668) + -0x31f3) + 0x7fffa47c0c4a) = uVar6;
  return;
}


// ============================================================================
// Function : Unwind@7fffa52091c0  |  RVA: 0xa991c0  |  Size: 305 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa52091c0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  
  uVar2 = *(uint32_t *)(param_2 + 0x790) ^ 0x5769b994;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0x1f;
  uVar3 = (uint16_t)*(uint32_t *)(param_2 + 0x840) ^ 0xbafe;
  *(uint32_t *)((int64_t)
            (short)((uVar3 << 4 | uVar3 >> 0xc) ^ (uint16_t)*(uint64_t *)(param_2 + 0x3d8)) +
           0x7fffa47bd85f) =
       *(uint32_t *)((int64_t)(int)((uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) * 0x4f4e996d) +
                0x7fffa47c9e41) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5209300  |  RVA: 0xa99300  |  Size: 298 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5209300(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8);
  bVar1 = bVar2 & 0x1f;
  uVar4 = (0xb40157d5U >> bVar1 | -0x4bfea82b << 0x20 - bVar1) - *(int *)(param_2 + 0x98);
  uVar3 = 0x2db0 - (short)*(uint32_t *)(param_2 + 0x390);
  bVar2 = bVar2 & 0xf;
  uVar3 = uVar3 >> bVar2 | uVar3 << 0x10 - bVar2;
  *(uint32_t *)((int64_t)(short)((uVar3 << 5 | uVar3 >> 0xb) * 0x7dc3) + 0x7fffa47c00d4) =
       *(uint32_t *)((int64_t)(int)(uVar4 * 0x10000000 | uVar4 >> 4) + 0x7fffa47cbc48) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5209430  |  RVA: 0xa99430  |  Size: 289 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5209430(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x3d8) & 0x1f;
  uVar2 = ~(0x72910000U >> bVar1 | 0x72910000 << 0x20 - bVar1);
  *(uint32_t *)((int64_t)
            (int)(0xd1318a18U - (int)*(uint64_t *)(param_2 + 0x3d8) ^ *(uint32_t *)(param_2 + 0x88)) +
           0x7fffa47c8603) =
       *(uint32_t *)((int64_t)(int)(uVar2 << 0x15 | uVar2 >> 0xb) + 0x7fffa47caeb3) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa5209560  |  RVA: 0xa99560  |  Size: 290 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa5209560(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  uint16_t uVar2;
  
  uVar1 = (uint16_t)*(uint64_t *)(param_2 + 0x3d8);
  uVar2 = uVar1 ^ 0xdf30;
  *(uint32_t *)((int64_t)(short)~(uVar2 << 4 | uVar2 >> 0xc) + 0x7fffa47c00d5) =
       *(uint32_t *)((int64_t)(short)((uint16_t)*(uint64_t *)(param_2 + 0x858) ^ 0x3373 - uVar1) +
                0x7fffa47bfd8c) & 0xfffffffd;
  return;
}

