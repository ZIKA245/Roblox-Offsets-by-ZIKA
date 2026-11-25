// Subsystem: Internal Routines Cluster 00 (0x6e1c0 .. 0x2fedd0)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa47de1c0  |  RVA: 0x6e1c0  |  Size: 307 bytes
// Callers  : FUN_7fffa5244df0@0xad4df0
// Callees  : FUN_7fffa5488850@0xd18850, _guard_check_icall@0xedc080, FUN_7fffa5181690@0xa11690, FUN_7fffa560a390@0xe9a390, thunk_FUN_7fffa55eeda0@0x913000
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa47de255) */
/* WARNING: Removing unreachable block (ram,0x7fffa47de27a) */
/* WARNING: Removing unreachable block (ram,0x7fffa47de27e) */
/* WARNING: Removing unreachable block (ram,0x7fffa47de281) */
/* WARNING: Removing unreachable block (ram,0x7fffa47de285) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa47de1c0(uint64_t *param_1,uint32_t param_2,uint64_t param_3,int64_t param_4)

{
  code *pcVar1;
  uint8_t *puVar2;
  uint8_t *puVar3;
  int64_t lVar4;
  uint8_t auStack_68 [8];
  uint8_t auStack_60 [24];
  uint64_t *puStack_48;
  uint64_t uStack_40;
  int64_t alStack_38 [6];
  
  alStack_38[4] = _DAT_7fffa4780040 ^ (uint64_t)auStack_68;
  alStack_38[0] = 0;
  alStack_38[1] = 0;
  alStack_38[2] = 0;
  alStack_38[3] = 0;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_4 + lVar4) != '\0');
  puStack_48 = param_1;
  FUN_7fffa5181690(alStack_38,param_4);
  puStack_48 = (uint64_t *)CONCAT44(puStack_48._4_4_,param_2);
  uStack_40 = param_3;
  FUN_7fffa560a390(param_1,&puStack_48,alStack_38);
  puVar3 = auStack_68;
  if ((uint64_t)alStack_38[3] < 0x10) goto LAB_7fffa47de2c6;
  puVar2 = auStack_68;
  puVar3 = auStack_68;
  lVar4 = alStack_38[0];
  if (alStack_38[3] + 1U < 0x1000) {
LAB_7fffa47de2be:
    puVar3 = puVar2;
  }
  else {
    lVar4 = *(int64_t *)(alStack_38[0] + -8);
    if (0x1f < (alStack_38[0] - lVar4) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar4 = (*pcVar1)(5);
      puVar2 = auStack_60;
      goto LAB_7fffa47de2be;
    }
  }
  *(uint64_t *)(puVar3 + -8) = 0x7fffa47de2c6;
  thunk_FUN_7fffa55eeda0(lVar4);
LAB_7fffa47de2c6:
  *param_1 = std::system_error::vftable;
  *(uint64_t *)(puVar3 + -8) = 0x7fffa47de2e0;
  FUN_7fffa5488850(*(uint64_t *)(puVar3 + 0x50) ^ (uint64_t)puVar3);
  return;
}


// ============================================================================
// Function : FUN_7fffa47de300  |  RVA: 0x6e300  |  Size: 35 bytes
// Callers  : none
// Callees  : FUN_7fffa4f5c6f0@0x7ec6f0, FUN_7fffa4f41160@0x7d1160
// ============================================================================
void FUN_7fffa47de300(uint64_t param_1)

{
  code *pcVar1;
  uint8_t auStack_28 [40];
  
  FUN_7fffa4f5c6f0(auStack_28,param_1);
  FUN_7fffa4f41160(auStack_28,&UNK_7fffa5894298);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa47de330  |  RVA: 0x6e330  |  Size: 104 bytes
// Callers  : none
// Callees  : FUN_7fffa548e3e0@0xd1e3e0, FUN_7fffa5213cf0@0xaa3cf0
// ============================================================================
uint64_t FUN_7fffa47de330(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  lVar1 = *(int64_t *)(param_4 + 0x38);
  FUN_7fffa5213cf0(param_2,param_4,lVar1 + 4);
  if ((*(uint32_t *)(lVar1 + 4) & ((*(uint8_t *)(param_1 + 4) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar2 = FUN_7fffa548e3e0(param_1,param_2,param_3,param_4);
  return uVar2;
}


// ============================================================================
// Function : FUN_7fffa47de3a0  |  RVA: 0x6e3a0  |  Size: 3238 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
void FUN_7fffa47de3a0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  bool bVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [13];
  uint8_t auVar8 [13];
  uint8_t auVar9 [13];
  uint8_t auVar10 [15];
  uint8_t auVar11 [13];
  uint8_t auVar12 [13];
  uint8_t auVar13 [13];
  uint8_t auVar14 [13];
  uint8_t auVar15 [13];
  uint8_t auVar16 [13];
  uint8_t auVar17 [13];
  uint8_t auVar18 [13];
  uint8_t auVar19 [13];
  uint8_t auVar20 [15];
  uint8_t auVar21 [15];
  uint8_t auVar22 [15];
  uint8_t auVar23 [15];
  uint8_t auVar24 [15];
  uint8_t auVar25 [15];
  uint8_t auVar26 [15];
  uint8_t auVar27 [13];
  uint8_t auVar28 [13];
  uint8_t auVar29 [13];
  uint8_t auVar30 [13];
  uint8_t auVar31 [11];
  uint8_t auVar32 [11];
  uint8_t uVar33;
  uint32_t uVar34;
  uint64_t uVar35;
  int64_t lVar36;
  uint8_t bVar37;
  uint32_t uVar38;
  uint32_t uVar39;
  uint32_t uVar40;
  int iVar41;
  uint64_t uVar42;
  uint32_t uVar43;
  char cVar44;
  uint32_t uVar45;
  uint32_t uVar46;
  uint8_t *puVar47;
  int iVar48;
  uint32_t uVar49;
  int iVar50;
  uint32_t uVar51;
  uint32_t uVar52;
  int64_t lVar53;
  uint32_t uVar54;
  int iVar55;
  uint8_t (*pauVar56) [16];
  uint32_t uVar57;
  uint32_t uVar58;
  uint32_t uVar59;
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint64_t in_XMM2_Qb;
  uint8_t auVar62 [16];
  uint8_t auVar63 [16];
  uint8_t auVar64 [16];
  uint8_t auVar65 [16];
  int iVar66;
  int64_t in_stack_00000028;
  uint32_t auStack_1c4 [8];
  uint32_t auStack_1a4 [5];
  int64_t lStack_190;
  uint32_t auStack_188 [66];
  int64_t lStack_80;
  uint32_t uStack_74;
  uint8_t (*pauStack_70) [16];
  int64_t lStack_68;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint8_t *puStack_48;
  
  pauVar56 = (uint8_t (*) [16])
             ((~in_XMM2_Qb << 0x37 | ~in_XMM2_Qb >> 9) * (param_1 + -0x1010000000318) *
             -0x58f064fc89cdb8d7);
  uVar43 = *(uint32_t *)pauVar56[4];
  uVar35 = (uint64_t)uVar43;
  (*pauVar56)[uVar35] = 0x80;
  lStack_190 = param_1;
  if (uVar35 < 0x38) {
    if (uVar43 != 0x37) {
      FUN_7fffa4ecf8e0(*pauVar56 + uVar35 + 1,0,0x37 - uVar35);
    }
  }
  else {
    if (uVar43 + 1 < 0x40) {
      FUN_7fffa4ecf8e0(*pauVar56 + (uVar43 + 1),0,(uint64_t)(0x3e - uVar43) + 1);
    }
    uVar35 = 0;
    do {
      auVar7[0xc] = (*pauVar56)[uVar35 + 0xf];
      auVar7._0_12_ = ZEXT812(0);
      auVar8._10_3_ = auVar7._10_3_;
      auVar8._0_10_ = (unkuint10)(uint8_t)(*pauVar56)[uVar35 + 0xb] << 0x40;
      auVar27._5_8_ = 0;
      auVar27._0_5_ = auVar8._8_5_;
      uVar43 = CONCAT13(0,CONCAT12((*pauVar56)[uVar35 + 7],(uint16_t)(uint8_t)(*pauVar56)[uVar35 + 3]));
      auVar9[4] = (*pauVar56)[uVar35 + 7];
      auVar9._0_4_ = uVar43;
      auVar9[5] = 0;
      auVar9._6_7_ = SUB137(auVar27 << 0x40,6);
      auVar60._0_4_ = uVar43 & 0xffff;
      auVar60._4_9_ = auVar9._4_9_;
      auVar60._13_3_ = 0;
      auVar5._1_4_ = (uint32_t)(uint8_t)(*pauVar56)[uVar35 + 4] << 0x18;
      auVar5[0] = (*pauVar56)[uVar35];
      auVar5._5_4_ = (uint32_t)(uint8_t)(*pauVar56)[uVar35 + 8] << 0x18;
      auVar5._9_4_ = (uint32_t)(uint8_t)(*pauVar56)[uVar35 + 0xc] << 0x18;
      auVar5._13_3_ = 0;
      auVar10._12_2_ = 0;
      auVar10._0_12_ = SUB1612((uint8_t  [16])0x0,0);
      auVar10[0xe] = (*pauVar56)[uVar35 + 0xd];
      auVar21[10] = (*pauVar56)[uVar35 + 9];
      auVar21._0_10_ = SUB1610((uint8_t  [16])0x0,0);
      auVar21[0xb] = 0;
      auVar21._12_3_ = auVar10._12_3_;
      auVar23._10_5_ = auVar21._10_5_;
      auVar23._0_10_ = (unkuint10)0;
      auVar25._8_7_ = auVar23._8_7_;
      auVar25._0_8_ = (uint64_t)(uint8_t)(*pauVar56)[uVar35 | 5] << 0x30;
      auVar31._9_2_ = 0;
      auVar31._0_9_ = auVar25._6_9_;
      auVar62._0_4_ = (CONCAT11((*pauVar56)[uVar35 | 5],(*pauVar56)[uVar35 + 1]) & 0xff) << 0x10;
      auVar62._4_11_ = auVar31 << 0x10;
      auVar62[0xf] = 0;
      auVar11[0xc] = (*pauVar56)[uVar35 + 0xe];
      auVar11._0_12_ = ZEXT812(0);
      auVar12._10_3_ = auVar11._10_3_;
      auVar12._0_10_ = (unkuint10)(uint8_t)(*pauVar56)[uVar35 + 10] << 0x40;
      auVar28._5_8_ = 0;
      auVar28._0_5_ = auVar12._8_5_;
      uVar43 = CONCAT13(0,CONCAT12((*pauVar56)[uVar35 + 6],(uint16_t)(uint8_t)(*pauVar56)[uVar35 + 2]));
      auVar13[4] = (*pauVar56)[uVar35 + 6];
      auVar13._0_4_ = uVar43;
      auVar13[5] = 0;
      auVar13._6_7_ = SUB137(auVar28 << 0x40,6);
      auVar63._0_4_ = (uVar43 & 0xffff) << 8;
      auVar63._4_4_ = auVar13._4_4_ << 8;
      auVar63._8_4_ = auVar12._8_4_ << 8;
      auVar63._12_4_ = (uint32_t)(uint3)(auVar11._10_3_ >> 0x10) << 8;
      *(uint8_t (*) [16])((int64_t)auStack_188 + uVar35) =
           auVar63 | auVar60 | auVar62 | auVar5 << 0x18;
      uVar35 = uVar35 + 0x10;
    } while (uVar35 != 0x40);
    lVar36 = 0x10;
    uVar43 = auStack_188[0];
    while( true ) {
      iVar48 = uVar43 + auStack_1a4[lVar36];
      uVar43 = auStack_1c4[lVar36];
      uVar54 = auStack_1a4[lVar36 + 5];
      auStack_188[lVar36] =
           (uVar43 >> 3 ^ (uVar43 << 0x19 | uVar43 >> 7) ^ (uVar43 << 0xe | uVar43 >> 0x12)) +
           ((uVar54 << 0xd | uVar54 >> 0x13) ^ (uVar54 << 0xf | uVar54 >> 0x11) ^ uVar54 >> 10) +
           iVar48;
      if (lVar36 == 0x3f) break;
      lVar36 = lVar36 + 1;
    }
    uVar43 = *(uint32_t *)(pauVar56[6] + 4);
    uStack_54 = *(uint32_t *)(pauVar56[6] + 0xc);
    uStack_4c = *(uint32_t *)pauVar56[6];
    uVar54 = *(uint32_t *)(pauVar56[5] + 0xc);
    uVar51 = *(uint32_t *)pauVar56[5];
    uVar52 = *(uint32_t *)(pauVar56[5] + 4);
    uStack_74 = *(uint32_t *)(pauVar56[5] + 8);
    uStack_50 = *(uint32_t *)(pauVar56[6] + 8);
    uVar35 = 0;
    uVar58 = uVar43;
    uVar34 = uStack_54;
    uVar59 = uStack_4c;
    uVar49 = uVar54;
    uVar40 = uVar51;
    uStack_60 = uStack_50;
    uVar46 = uStack_74;
    uVar39 = uVar52;
    do {
      auStack_1a4[3] = uVar39;
      uVar45 = uVar46;
      uVar38 = uStack_60;
      uVar39 = uVar40;
      uVar57 = uVar59;
      uStack_60 = uVar58;
      lStack_68 = CONCAT44(lStack_68._4_4_,uVar49);
      pauStack_70 = (uint8_t (*) [16])CONCAT44(pauStack_70._4_4_,uVar34);
      uStack_58 = uVar57 << 7 | uVar57 >> 0x19;
      puStack_48 = &UNK_7fffa5785ce4;
      lStack_80 = CONCAT44(lStack_80._4_4_,auStack_1a4[3]);
      uStack_5c = uVar39 << 10 | uVar39 >> 0x16;
      uVar58 = auStack_1a4[3] ^ uVar45;
      if (0xff8e978c < (int)lStack_190 + 0xb2d4fefaU) {
        uVar58 = auStack_1a4[3] - uVar45;
      }
      uVar1 = uVar35 + 1;
      iVar48 = ((uVar57 << 0x1a | uVar57 >> 6) ^ (uVar57 << 0x15 | uVar57 >> 0xb) ^ uStack_58) +
               uVar34 + (uVar57 & uStack_60 | ~uVar57 & uVar38) +
               *(int *)(&UNK_7fffa5785ce4 +
                       uVar35 * 4 + (int64_t)(short)((short)lStack_190 + -0x629d)) +
               auStack_188[uVar35];
      uVar40 = ((uVar39 << 0x13 | uVar39 >> 0xd) ^ (uVar39 << 0x1e | uVar39 >> 2) ^ uStack_5c) +
               (uVar58 & uVar39 ^ uVar45 & auStack_1a4[3]) + iVar48;
      uVar59 = iVar48 + uVar49;
      uVar35 = uVar1;
      uVar58 = uVar57;
      uVar34 = uVar38;
      uVar49 = uVar45;
      uVar46 = auStack_1a4[3];
    } while ((uVar1 ^ 0x7ef9dc6f) * -0x7b70347c431f4edd != -0x4c9b1ec3b57a6693);
    *(uint32_t *)(pauVar56[5] + 8) = auStack_1a4[3] + uStack_74;
    *(uint32_t *)(pauVar56[5] + 0xc) = uVar45 + uVar54;
    *(uint32_t *)pauVar56[6] = uVar59 + uStack_4c;
    *(uint32_t *)(pauVar56[6] + 8) = uStack_50 + uStack_60;
    *(uint32_t *)(pauVar56[6] + 4) = uVar57 + uVar43;
    *(uint32_t *)(pauVar56[6] + 0xc) = uStack_54 + uVar38;
    *(uint32_t *)(pauVar56[5] + 4) = uVar39 + uVar52;
    *(uint32_t *)pauVar56[5] = uVar51 + uVar40;
    pauVar56[2] = (uint8_t  [16])0x0;
    pauVar56[1] = (uint8_t  [16])0x0;
    *pauVar56 = (uint8_t  [16])0x0;
    *(uint64_t *)pauVar56[3] = 0;
    param_1 = lStack_190;
  }
  lVar36 = (uint64_t)(uint32_t)(*(int *)pauVar56[4] << 3) + *(int64_t *)(pauVar56[4] + 8);
  *(uint16_t *)(pauVar56[3] + 0xe) = (uint16_t)lVar36 << 8 | (uint16_t)lVar36 >> 8;
  pauVar56[3][0xb] = (char)((uint64_t)lVar36 >> 0x20);
  pauVar56[3][0xd] = (char)((uint64_t)lVar36 >> 0x10);
  pauVar56[3][10] = (char)((uint64_t)lVar36 >> 0x28);
  *(int64_t *)(pauVar56[4] + 8) = lVar36;
  pauVar56[3][0xc] = (char)((uint64_t)lVar36 >> 0x18);
  pauVar56[3][9] = (char)((uint64_t)lVar36 >> 0x30);
  pauVar56[3][8] = (char)((uint64_t)lVar36 >> 0x38);
  uVar35 = 0;
  while( true ) {
    uVar43 = (uint32_t)param_1;
    lVar36 = 0;
    if ((uint64_t)((uVar43 ^ 0x3de47bba) << 7 | (uVar43 ^ 0x3de47bba) >> 0x19) <
        (uint64_t)(int64_t)(int)(uVar43 ^ 0xb1607a42)) {
      lVar36 = uVar35 + 9;
    }
    auVar14[0xc] = (*pauVar56)[uVar35 + 0xe];
    auVar14._0_12_ = ZEXT812(0);
    auVar15._10_3_ = auVar14._10_3_;
    auVar15._0_10_ = (unkuint10)(uint8_t)(*pauVar56)[uVar35 + 10] << 0x40;
    auVar29._5_8_ = 0;
    auVar29._0_5_ = auVar15._8_5_;
    uVar54 = CONCAT13(0,CONCAT12((*pauVar56)[uVar35 + 6],(uint16_t)(uint8_t)(*pauVar56)[uVar35 + 2]));
    auVar16[4] = (*pauVar56)[uVar35 + 6];
    auVar16._0_4_ = uVar54;
    auVar16[5] = 0;
    auVar16._6_7_ = SUB137(auVar29 << 0x40,6);
    auVar64._0_4_ = (uVar54 & 0xffff) << 8;
    auVar64._4_4_ = auVar16._4_4_ << 8;
    auVar64._8_4_ = auVar15._8_4_ << 8;
    auVar64._12_4_ = (uint32_t)(uint3)(auVar14._10_3_ >> 0x10) << 8;
    auVar6._1_4_ = (uint32_t)(uint8_t)(*pauVar56)[uVar35 + 4] << 0x18;
    auVar6[0] = (*pauVar56)[uVar35];
    auVar6._5_4_ = (uint32_t)(uint8_t)(*pauVar56)[uVar35 + 8] << 0x18;
    auVar6._9_4_ = (uint32_t)(uint8_t)(*pauVar56)[uVar35 + 0xc] << 0x18;
    auVar6._13_3_ = 0;
    auVar17[0xc] = (*pauVar56)[uVar35 + 0xf];
    auVar17._0_12_ = ZEXT812(0);
    auVar18._10_3_ = auVar17._10_3_;
    auVar18._0_10_ = (unkuint10)(uint8_t)(*pauVar56)[uVar35 + 0xb] << 0x40;
    auVar30._5_8_ = 0;
    auVar30._0_5_ = auVar18._8_5_;
    uVar54 = CONCAT13(0,CONCAT12((*pauVar56)[uVar35 + 7],(uint16_t)(uint8_t)(*pauVar56)[uVar35 | 3]));
    auVar19[4] = (*pauVar56)[uVar35 + 7];
    auVar19._0_4_ = uVar54;
    auVar19[5] = 0;
    auVar19._6_7_ = SUB137(auVar30 << 0x40,6);
    auVar65._0_4_ = uVar54 & 0xffff;
    auVar65._4_9_ = auVar19._4_9_;
    auVar65._13_3_ = 0;
    auVar20._12_2_ = 0;
    auVar20._0_12_ = SUB1612((uint8_t  [16])0x0,0);
    auVar20[0xe] = (*pauVar56)[uVar35 | 0xd];
    auVar22[10] = (*pauVar56)[lVar36];
    auVar22._0_10_ = SUB1610((uint8_t  [16])0x0,0);
    auVar22[0xb] = 0;
    auVar22._12_3_ = auVar20._12_3_;
    auVar24._10_5_ = auVar22._10_5_;
    auVar24._0_10_ = (unkuint10)0;
    auVar26._8_7_ = auVar24._8_7_;
    auVar26._0_8_ = (uint64_t)(uint8_t)(*pauVar56)[uVar35 + 5] << 0x30;
    auVar32._9_2_ = 0;
    auVar32._0_9_ = auVar26._6_9_;
    auVar61._0_4_ = (CONCAT11((*pauVar56)[uVar35 + 5],(*pauVar56)[uVar35 + 1]) & 0xff) << 0x10;
    auVar61._4_11_ = auVar32 << 0x10;
    auVar61[0xf] = 0;
    *(uint8_t (*) [16])((int64_t)auStack_188 + uVar35) =
         auVar61 | auVar65 | auVar6 << 0x18 | auVar64;
    if (uVar35 == 0x30) break;
    uVar35 = uVar35 + 0x10;
  }
  uVar35 = 0xffffffffffffffee;
  lStack_68 = 0;
  do {
    lVar53 = lStack_68;
    uVar1 = uVar35 << 0x1c;
    uVar2 = uVar35 >> 0x24;
    uVar54 = auStack_188[lVar53 + 1];
    uVar51 = auStack_188[lVar53 + 0xe];
    uVar42 = (param_1 + 0x257a5d4aa047ee7e) * 0x999661d9;
    lVar36 = lVar53 + 7;
    if (((0x84c43154 - uVar43) * 0x4000000 | 0x84c43154 - uVar43 >> 6) == 0xee1310b8) {
      lVar36 = lVar53 + -7;
    }
    auStack_188[lVar53 + 0x10] =
         ((uVar54 << 0xe | uVar54 >> 0x12) ^ (uVar54 << 0x19 | uVar54 >> 7) ^ uVar54 >> 3) +
         ((uVar51 << 0xd | uVar51 >> 0x13) ^ (uVar51 << 0xf | uVar51 >> 0x11) ^ uVar51 >> 10) +
         auStack_188[lVar36 + 0x10] + auStack_188[0];
    lStack_68 = lVar53 + 1;
    uVar35 = uVar35 - 1;
    auStack_188[0] = uVar54;
  } while ((uVar42 << 0x28 | uVar42 >> 0x18) != ((uVar1 | uVar2) ^ 0x6e27813));
  uStack_4c = *(uint32_t *)pauVar56[5];
  uStack_54 = *(uint32_t *)(pauVar56[5] + 4);
  uStack_5c = *(uint32_t *)(pauVar56[6] + 0xc);
  lStack_80 = lVar53 + 0x11;
  uStack_60 = *(uint32_t *)(pauVar56[6] + 4);
  uStack_50 = *(uint32_t *)(pauVar56[5] + 0xc);
  uVar43 = *(uint32_t *)(pauVar56[6] + 8);
  pauStack_70 = pauVar56;
  uVar40 = (uint32_t)lStack_80 | 1;
  lVar36 = 0;
  uVar54 = *(uint32_t *)pauVar56[6];
  uVar51 = uStack_54;
  uVar52 = uStack_5c;
  uVar58 = uStack_60;
  uVar34 = *(uint32_t *)(pauVar56[5] + 8);
  uVar59 = uStack_4c;
  uVar49 = uVar43;
  iVar48 = 0;
  auStack_1a4[3] = uStack_50;
  do {
    iVar41 = iVar48;
    uVar46 = uVar49;
    uVar39 = uVar59;
    uStack_58 = uVar34;
    uVar49 = uVar58;
    uVar34 = uVar51;
    uVar58 = uVar54;
    uVar35 = lVar36 - 0x7584b3c4;
    iVar48 = ((uVar58 << 7 | uVar58 >> 0x19) ^
             (uVar58 << 0x1a | uVar58 >> 6) ^ (uVar58 << 0x15 | uVar58 >> 0xb)) +
             ((uVar49 ^ uVar46) & uVar58 ^ uVar46) + uVar52 +
             *(int *)(&UNK_7fffa578189d +
                     lVar36 * 4 +
                     (int64_t)
                     (short)((((uint16_t)lStack_80 | 1) * 0x115 ^ (uint16_t)lStack_190) * 0x4b61 +
                            0x5ef7)) + auStack_188[lVar36];
    lVar36 = lVar36 + 1;
    uVar59 = (uVar34 & uStack_58 ^ (uStack_58 ^ uVar34) & uVar39) +
             ((uVar39 << 10 | uVar39 >> 0x16) ^
             (uVar39 << 0x13 | uVar39 >> 0xd) ^ (uVar39 << 0x1e | uVar39 >> 2)) + iVar48;
    uVar54 = iVar48 + auStack_1a4[3];
    uVar51 = uVar39;
    uVar52 = uVar46;
    iVar48 = iVar41 + 1;
    auStack_1a4[3] = uStack_58;
  } while ((uVar35 ^ 0x51597b8) != (int64_t)(int)(uVar40 * 0x234e7dc - (uint32_t)lStack_190));
  iVar55 = uVar54 + *(uint32_t *)pauVar56[6];
  iVar50 = *(uint32_t *)(pauVar56[5] + 8) + uVar34;
  iVar48 = (int)lStack_68;
  *(uint32_t *)(pauVar56[5] + 0xc) = uStack_58 + uStack_50;
  uVar54 = (uint32_t)lVar36;
  uVar51 = ((uVar54 + 0x9b55714b ^ 0xf6f18a63) - iVar48) - 0x10;
  uVar52 = uVar51 * 0x400 | uVar51 >> 0x16;
  iVar66 = uVar59 + uStack_4c;
  *(int *)pauVar56[5] = iVar66;
  uVar51 = ~((iVar48 + 0x551c2650U ^ (uint32_t)lStack_190) * 0x346b7a2d);
  *(uint32_t *)(pauVar56[5] + 4) = uStack_54 + uVar39;
  bVar4 = uVar51 != uVar52;
  if (((uint32_t)lStack_190 + 0x2c1edb8a) - uVar54 == 0x2c1ede63) {
    bVar4 = uVar52 < uVar51;
  }
  if (bVar4) {
    *(int *)pauVar56[6] = iVar55;
    uVar51 = (iVar41 - iVar48) + 0x3d29ceaf;
    bVar3 = (uint8_t)lStack_190 & 0x1f;
    uVar51 = (uVar51 >> bVar3 | uVar51 << 0x20 - bVar3) + 0xfd45b1ca;
    *(int *)(pauVar56[5] + 8) = iVar50;
    *(uint32_t *)(pauVar56[6] + 4) = uVar58 + uStack_60;
  }
  else {
    *(uint32_t *)(pauVar56[6] + 4) = uVar58 + uStack_60;
    *(int *)pauVar56[6] = iVar55;
    *(int *)(pauVar56[5] + 8) = iVar50;
    uVar51 = (uVar54 + 0x32733de6) * 0x800 | uVar54 + 0x32733de6 >> 0x15;
    bVar3 = (uint8_t)lStack_80 & 0x1f;
    uVar51 = ~(uVar51 >> bVar3 | uVar51 << 0x20 - bVar3);
  }
  puVar47 = (uint8_t *)((in_stack_00000028 << 0x3f) + in_stack_00000028);
  *(uint32_t *)(pauVar56[6] + 8) = uVar49 + uVar43;
  uVar52 = (uVar51 + 0xfe40e698) - uVar54;
  bVar3 = (uint8_t)lStack_80 & 0x1f;
  *(uint32_t *)(pauVar56[6] + 0xc) = uVar46 + uStack_5c;
  bVar37 = (uint8_t)lVar36 & 0x1f;
  uVar43 = 0x2a4d498cU >> bVar37 | 0x2a4d498c << 0x20 - bVar37;
  bVar37 = (uint8_t)lStack_190 & 0x1f;
  uVar40 = (uVar43 << bVar37 | uVar43 >> 0x20 - bVar37) * uVar40;
  bVar37 = (uint8_t)uVar51;
  *puVar47 = (char)((uint32_t)iVar66 >> 0x18);
  puVar47[4] = pauVar56[5][7];
  puVar47[8] = pauVar56[5][0xb];
  puVar47[0xc] = pauVar56[5][0xf];
  puVar47[0x10] = pauVar56[6][3];
  puVar47[0x14] = pauVar56[6][7];
  uVar43 = ((uint32_t)lStack_190 | 1) * -0x111ad46 + 0xa22e6f3;
  puVar47[0x18] = pauVar56[6][0xb];
  puVar47[0x1c] = pauVar56[6][0xf];
  puVar47[1] = pauVar56[5][2];
  puVar47[5] = pauVar56[5][6];
  cVar44 = (char)*(uint32_t *)(pauVar56[5] + 8) + '\x10';
  if ((uint64_t)(uVar40 << (bVar37 & 0x1f) | uVar40 >> 0x20 - (bVar37 & 0x1f)) !=
      0xffffffffc6d24735) {
    cVar44 = (char)((uint32_t)*(uint32_t *)(pauVar56[5] + 8) >> 0x10);
  }
  puVar47[9] = cVar44;
  puVar47[0xd] = pauVar56[5][0xe];
  puVar47[0x11] = pauVar56[6][2];
  uVar54 = ~((uVar54 | 1) * 0x42000000 | (uVar54 | 1) * -0x1c0e0b5f >> 7);
  cVar44 = (char)*(uint32_t *)(pauVar56[6] + 4) + '\x10';
  if ((uVar43 >> (bVar37 & 0x1f) | uVar43 << 0x20 - (bVar37 & 0x1f)) <
      ((uVar54 << (bVar37 & 0x1f) | uVar54 >> 0x20 - (bVar37 & 0x1f)) ^ (uint32_t)lStack_190)) {
    cVar44 = (char)((uint32_t)*(uint32_t *)(pauVar56[6] + 4) >> 0x10);
  }
  puVar47[0x15] = cVar44;
  puVar47[0x19] = pauVar56[6][10];
  puVar47[0x1d] = pauVar56[6][0xe];
  uVar33 = pauVar56[5][1];
  if ((uVar52 << bVar3 | uVar52 >> 0x20 - bVar3) + (uint32_t)lStack_190 != -0x6f9205a7) {
    uVar33 = 0;
  }
  puVar47[2] = uVar33;
  puVar47[6] = pauVar56[5][5];
  puVar47[10] = pauVar56[5][9];
  puVar47[0xe] = pauVar56[5][0xd];
  puVar47[0x12] = pauVar56[6][1];
  puVar47[0x16] = pauVar56[6][5];
  puVar47[0x1a] = pauVar56[6][9];
  puVar47[0x1e] = pauVar56[6][0xd];
  puVar47[3] = pauVar56[5][0];
  puVar47[7] = pauVar56[5][4];
  puVar47[0xb] = pauVar56[5][8];
  puVar47[0xf] = pauVar56[5][0xc];
  puVar47[0x13] = pauVar56[6][0];
  puVar47[0x17] = pauVar56[6][4];
  puVar47[0x1b] = pauVar56[6][8];
  puVar47[0x1f] = pauVar56[6][0xc];
  return;
}


// ============================================================================
// Function : FUN_7fffa47df050  |  RVA: 0x6f050  |  Size: 1 bytes
// Callers  : FUN_7fffa517e320@0xa0e320
// Callees  : none
// ============================================================================
void FUN_7fffa47df050(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa47df060  |  RVA: 0x6f060  |  Size: 30572 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa47df060(void) {
    /* +0x6f060 */ __asm { PUSH RDI }
    /* +0x6f061 */ __asm { PUSH RBX }
    /* +0x6f062 */ __asm { PUSH R12 }
    /* +0x6f064 */ __asm { PUSH RSI }
    /* +0x6f065 */ __asm { PUSH RBP }
    /* +0x6f066 */ __asm { PUSH R14 }
    /* +0x6f068 */ __asm { PUSH R15 }
    /* +0x6f06a */ __asm { PUSH R13 }
    /* +0x6f06c */ __asm { SUB RSP,0x1b8 }
    /* +0x6f073 */ __asm { MOVDQA xmmword ptr [RSP + 0x1a0],XMM11 }
    /* +0x6f07d */ __asm { MOVDQA xmmword ptr [RSP + 0x190],XMM13 }
    /* +0x6f087 */ __asm { MOVDQA xmmword ptr [RSP + 0x180],XMM7 }
    /* +0x6f090 */ __asm { MOVDQA xmmword ptr [RSP + 0x170],XMM12 }
    /* +0x6f09a */ __asm { MOVDQA xmmword ptr [RSP + 0x160],XMM6 }
    /* +0x6f0a3 */ __asm { MOVDQA xmmword ptr [RSP + 0x150],XMM8 }
    /* +0x6f0ad */ __asm { MOVDQA xmmword ptr [RSP + 0x140],XMM14 }
    /* +0x6f0b7 */ __asm { MOVDQA xmmword ptr [RSP + 0x130],XMM15 }
    /* +0x6f0c1 */ __asm { MOVDQA xmmword ptr [RSP + 0x120],XMM10 }
    /* +0x6f0cb */ __asm { MOVDQA xmmword ptr [RSP + 0x110],XMM9 }
    /* +0x6f0d5 */ __asm { MOV RSI,RDX }
    /* +0x6f0d8 */ __asm { MOV RCX,qword ptr [RSP + 0x220] }
    /* +0x6f0e0 */ __asm { XOR R9,-0x49a837ab }
    /* +0x6f0e7 */ __asm { MOV EDX,0xb4e0c85c }
    /* +0x6f0ec */ __asm { MOV R10,RCX }
    /* +0x6f0ef */ __asm { ROL R10,0x37 }
    /* +0x6f0f3 */ __asm { MOV R8,-0x9842c103 }
    /* +0x6f0fd */ __asm { ADD R8,R9 }
    /* +0x6f100 */ __asm { MOV R9,R8 }
    /* +0x6f103 */ __asm { ROL R9,0x33 }
    /* +0x6f107 */ __asm { MOV RAX,RCX }
    /* +0x6f10a */ __asm { ROL RAX,0x25 }
    /* +0x6f10e */ __asm { XOR RAX,R10 }
    /* +0x6f111 */ __asm { XOR RAX,RCX }
    /* +0x6f114 */ __asm { MOV RCX,RAX }
    /* +0x6f117 */ __asm { ROL RCX,0x2e }
    /* +0x6f11b */ __asm { MOV R10,RAX }
    /* +0x6f11e */ __asm { ROL R10,0xa }
    /* +0x6f122 */ __asm { MOVQ XMM2,R9 }
    /* +0x6f127 */ __asm { MOV R9,R8 }
    /* +0x6f12a */ __asm { ROL R9,0x16 }
    /* +0x6f12e */ __asm { XOR R10,RCX }
    /* +0x6f131 */ __asm { MOVQ XMM0,R9 }
    /* +0x6f136 */ __asm { PXOR XMM0,XMM2 }
    /* +0x6f13a */ __asm { MOVQ RCX,XMM0 }
    /* +0x6f13f */ __asm { XOR RCX,R8 }
    /* +0x6f142 */ __asm { MOV R8,RCX }
    /* +0x6f145 */ __asm { ROL R8,0x2c }
    /* +0x6f149 */ __asm { MOV R9,RCX }
    /* +0x6f14c */ __asm { ROL R9,0x26 }
    /* +0x6f150 */ __asm { XOR R9,R8 }
    /* +0x6f153 */ __asm { XOR R9,RCX }
    /* +0x6f156 */ __asm { MOV RCX,R9 }
    /* +0x6f159 */ __asm { ROL RCX,0x18 }
    /* +0x6f15d */ __asm { MOV R8,R9 }
    /* +0x6f160 */ __asm { ROL R8,0xc }
    /* +0x6f164 */ __asm { XOR R8,RCX }
    /* +0x6f167 */ __asm { XOR R8,R9 }
    /* +0x6f16a */ __asm { MOV RCX,R8 }
    /* +0x6f16d */ __asm { ROL RCX,0x30 }
    /* +0x6f171 */ __asm { MOV R9,R8 }
    /* +0x6f174 */ __asm { ROL R9,0x18 }
    /* +0x6f178 */ __asm { XOR R9,RCX }
    /* +0x6f17b */ __asm { XOR R9,R8 }
    /* +0x6f17e */ __asm { MOV RCX,R9 }
    /* +0x6f181 */ __asm { ROL RCX,0x20 }
    /* +0x6f185 */ __asm { XOR RCX,R9 }
    /* +0x6f188 */ __asm { ROL R9,0x30 }
    /* +0x6f18c */ __asm { MOV R8,RCX }
    /* +0x6f18f */ __asm { XOR R8,R9 }
    /* +0x6f192 */ __asm { ADD RCX,R9 }
    /* +0x6f195 */ __asm { MOV R9D,0x8e675225 }
    /* +0x6f19b */ __asm { XOR R10,RAX }
    /* +0x6f19e */ __asm { MOV RAX,R10 }
    /* +0x6f1a1 */ __asm { ROL RAX,0x1c }
    /* +0x6f1a5 */ __asm { MOV R14,R10 }
    /* +0x6f1a8 */ __asm { ROL R14,0x14 }
    /* +0x6f1ac */ __asm { XOR R14,RAX }
    /* +0x6f1af */ __asm { XOR R14,R10 }
    /* +0x6f1b2 */ __asm { MOV RAX,R14 }
    /* +0x6f1b5 */ __asm { ROL RAX,0x28 }
    /* +0x6f1b9 */ __asm { MOV R10,R14 }
    /* +0x6f1bc */ __asm { ROL R10,0x38 }
    /* +0x6f1c0 */ __asm { XOR R10,RAX }
    /* +0x6f1c3 */ __asm { XOR R10,R14 }
    /* +0x6f1c6 */ __asm { MOV RAX,R10 }
    /* +0x6f1c9 */ __asm { ROL RAX,0x30 }
    /* +0x6f1cd */ __asm { MOV R13,R10 }
    /* +0x6f1d0 */ __asm { ROL R13,0x10 }
    /* +0x6f1d4 */ __asm { IMUL R9D,R9D,-0x740a6e03 }
    /* +0x6f1db */ __asm { XOR R13,RAX }
    /* +0x6f1de */ __asm { XOR R13,R10 }
    /* +0x6f1e1 */ __asm { MOV R14,R13 }
    /* +0x6f1e4 */ __asm { SHL R14,0x2f }
    /* +0x6f1e8 */ __asm { XOR R14,R13 }
    /* +0x6f1eb */ __asm { ADD R9D,ESI }
    /* +0x6f1ee */ __asm { XOR R9D,0xe6940bec }
    /* +0x6f1f5 */ __asm { SUB EDX,ESI }
    /* +0x6f1f7 */ __asm { ADD EDX,0x8faf548a }
    /* +0x6f1fd */ __asm { CMP RDX,R9 }
    /* +0x6f200 */ __asm { CMOVA RCX,R8 }
    /* +0x6f204 */ __asm { ROL RCX,0x20 }
    /* +0x6f208 */ __asm { TEST R11,R11 }
    /* +0x6f20b */ __asm { JZ 0x7fffa47df8c1 }
    /* +0x6f211 */ __asm { MOV RBP,R11 }
    /* +0x6f214 */ __asm { PXOR XMM2,XMM2 }
    /* +0x6f218 */ __asm { MOVDQU xmmword ptr [R14 + 0x1d0],XMM2 }
    /* +0x6f221 */ __asm { MOVDQU xmmword ptr [R14 + 0x1c0],XMM2 }
    /* +0x6f22a */ __asm { MOVDQU xmmword ptr [R14 + 0x1b0],XMM2 }
    /* +0x6f233 */ __asm { MOVDQU xmmword ptr [R14 + 0x1a0],XMM2 }
    /* +0x6f23c */ __asm { MOVDQU xmmword ptr [R14 + 0x190],XMM2 }
    /* +0x6f245 */ __asm { MOVDQU xmmword ptr [R14 + 0x180],XMM2 }
    /* +0x6f24e */ __asm { MOVDQU xmmword ptr [R14 + 0x170],XMM2 }
    /* +0x6f257 */ __asm { MOVDQU xmmword ptr [R14 + 0x160],XMM2 }
    /* +0x6f260 */ __asm { MOVDQU xmmword ptr [R14 + 0x150],XMM2 }
    /* +0x6f269 */ __asm { MOVDQU xmmword ptr [R14 + 0x140],XMM2 }
    /* +0x6f272 */ __asm { MOVDQU xmmword ptr [R14 + 0x130],XMM2 }
    /* +0x6f27b */ __asm { MOVDQU xmmword ptr [R14 + 0x120],XMM2 }
    /* +0x6f284 */ __asm { MOVDQU xmmword ptr [R14 + 0x110],XMM2 }
    /* +0x6f28d */ __asm { MOVDQU xmmword ptr [R14 + 0x100],XMM2 }
    /* +0x6f296 */ __asm { MOVDQU xmmword ptr [R14 + 0xf0],XMM2 }
    /* +0x6f29f */ __asm { MOVDQU xmmword ptr [R14 + 0xe0],XMM2 }
    /* +0x6f2a8 */ __asm { MOVDQU xmmword ptr [R14 + 0xd0],XMM2 }
    /* +0x6f2b1 */ __asm { MOVDQU xmmword ptr [R14 + 0xc0],XMM2 }
    /* +0x6f2ba */ __asm { MOVDQU xmmword ptr [R14 + 0xb0],XMM2 }
    /* +0x6f2c3 */ __asm { MOVDQU xmmword ptr [R14 + 0xa0],XMM2 }
    /* +0x6f2cc */ __asm { MOVDQU xmmword ptr [R14 + 0x90],XMM2 }
    /* +0x6f2d5 */ __asm { MOVDQU xmmword ptr [R14 + 0x80],XMM2 }
    /* +0x6f2de */ __asm { MOVDQU xmmword ptr [R14 + 0x70],XMM2 }
    /* +0x6f2e4 */ __asm { MOVDQU xmmword ptr [R14 + 0x60],XMM2 }
    /* +0x6f2ea */ __asm { MOVDQU xmmword ptr [R14 + 0x50],XMM2 }
    /* +0x6f2f0 */ __asm { MOVDQU xmmword ptr [R14 + 0x40],XMM2 }
    /* +0x6f2f6 */ __asm { MOVDQU xmmword ptr [R14 + 0x30],XMM2 }
    /* +0x6f2fc */ __asm { MOVDQU xmmword ptr [R14 + 0x20],XMM2 }
    /* +0x6f302 */ __asm { MOVDQU xmmword ptr [R14 + 0x10],XMM2 }
    /* +0x6f308 */ __asm { MOVDQU xmmword ptr [R14],XMM2 }
    /* +0x6f30d */ __asm { MOV uint8_t ptr [R14],0x2a }
    /* +0x6f311 */ __asm { CMP R11,0xf }
    /* +0x6f315 */ __asm { MOV R9D,0xf }
    /* +0x6f31b */ __asm { CMOVC R9,R11 }
    /* +0x6f31f */ __asm { MOV uint8_t ptr [R14 + 0x4],0xff }
    /* +0x6f324 */ __asm { LEA R13,[R14 + 0x1c8] }
    /* +0x6f32b */ __asm { MOV word ptr [R14 + 0x2],0x0 }
    /* +0x6f332 */ __asm { CMP R11,0x4 }
    /* +0x6f336 */ __asm { JC 0x7fffa47df3c7 }
    /* +0x6f33c */ __asm { MOV R11,R14 }
    /* +0x6f33f */ __asm { SUB R11,RCX }
    /* +0x6f342 */ __asm { ADD R11,0x1c8 }
    /* +0x6f349 */ __asm { CMP R11,0x20 }
    /* +0x6f34d */ __asm { JC 0x7fffa47df3c7 }
    /* +0x6f34f */ __asm { MOV EDX,R9D }
    /* +0x6f352 */ __asm { AND EDX,0xc }
    /* +0x6f355 */ __asm { MOV R10D,dword ptr [RCX] }
    /* +0x6f358 */ __asm { MOV dword ptr [R13],R10D }
    /* +0x6f35c */ __asm { MOV R10W,0x239 }
    /* +0x6f361 */ __asm { MOVD XMM2,R10D }
    /* +0x6f366 */ __asm { MOVD XMM0,ESI }
    /* +0x6f36a */ __asm { PADDW XMM0,XMM2 }
    /* +0x6f36e */ __asm { MOVD R10D,XMM0 }
    /* +0x6f373 */ __asm { ADD R10D,0xffff84a0 }
    /* +0x6f37a */ __asm { MOVZX EAX,R10W }
    /* +0x6f37e */ __asm { CMP RDX,RAX }
    /* +0x6f381 */ __asm { JZ 0x7fffa47df3bd }
    /* +0x6f383 */ __asm { MOV R10D,0x26230c55 }
    /* +0x6f389 */ __asm { IMUL R10D,R10D,0x5e0f9869 }
    /* +0x6f390 */ __asm { MOVD XMM2,ESI }
    /* +0x6f394 */ __asm { MOV R8D,dword ptr [RCX + 0x4] }
    /* +0x6f398 */ __asm { MOV dword ptr [R14 + 0x1cc],R8D }
    /* +0x6f39f */ __asm { MOVD XMM0,R10D }
    /* +0x6f3a4 */ __asm { PADDD XMM0,XMM2 }
    /* +0x6f3a8 */ __asm { MOVD R10D,XMM0 }
    /* +0x6f3ad */ __asm { CMP EDX,R10D }
    /* +0x6f3b0 */ __asm { JZ 0x7fffa47df3bd }
    /* +0x6f3b2 */ __asm { MOV R10D,dword ptr [RCX + 0x8] }
    /* +0x6f3b6 */ __asm { MOV dword ptr [R14 + 0x1d0],R10D }
    /* +0x6f3bd */ __asm { CMP RBP,RDX }
    /* +0x6f3c0 */ __asm { JNZ 0x7fffa47df3c9 }
    /* +0x6f3c2 */ __asm { JMP 0x7fffa47df473 }
    /* +0x6f3c7 */ __asm { XOR EDX,EDX }
    /* +0x6f3c9 */ __asm { MOV R11,R9 }
    /* +0x6f3cc */ __asm { MOV R10,RDX }
    /* +0x6f3cf */ __asm { AND R11,0x3 }
    /* +0x6f3d3 */ __asm { JZ 0x7fffa47df3f3 }
    /* +0x6f3d5 */ __asm { DEC R11 }
    /* +0x6f3d8 */ __asm { MOV R10,RDX }
    /* +0x6f3db */ __asm { NOP dword ptr [RAX + RAX*0x1] }
    /* +0x6f3e0 */ __asm { MOVZX R8D,uint8_t ptr [RCX + R10*0x1] }
    /* +0x6f3e5 */ __asm { MOV uint8_t ptr [R13 + R10*0x1],R8B }
    /* +0x6f3ea */ __asm { INC R10 }
    /* +0x6f3ed */ __asm { SUB R11,0x1 }
    /* +0x6f3f1 */ __asm { JNC 0x7fffa47df3e0 }
    /* +0x6f3f3 */ __asm { SUB RDX,R9 }
    /* +0x6f3f6 */ __asm { MOVD XMM2,ESI }
    /* +0x6f3fa */ __asm { MOV R8W,0x5c03 }
    /* +0x6f3ff */ __asm { ADD R8D,0xffff94d7 }
    /* +0x6f406 */ __asm { ROL R8W,0x3 }
    /* +0x6f40b */ __asm { MOVD XMM0,R8D }
    /* +0x6f410 */ __asm { PXOR XMM0,XMM2 }
    /* +0x6f414 */ __asm { MOVD EAX,XMM0 }
    /* +0x6f418 */ __asm { MOVSX R11,AX }
    /* +0x6f41c */ __asm { CMP RDX,R11 }
    /* +0x6f41f */ __asm { JA 0x7fffa47df473 }
    /* +0x6f421 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0x6f430 */ __asm { MOVZX EDX,uint8_t ptr [RCX + R10*0x1] }
    /* +0x6f435 */ __asm { MOV uint8_t ptr [R14 + R10*0x1 + 0x1c8],DL }
    /* +0x6f43d */ __asm { MOVZX EDX,uint8_t ptr [RCX + R10*0x1 + 0x1] }
    /* +0x6f443 */ __asm { MOV uint8_t ptr [R14 + R10*0x1 + 0x1c9],DL }
    /* +0x6f44b */ __asm { MOVZX EDX,uint8_t ptr [RCX + R10*0x1 + 0x2] }
    /* +0x6f451 */ __asm { MOV uint8_t ptr [R14 + R10*0x1 + 0x1ca],DL }
    /* +0x6f459 */ __asm { MOVZX EDX,uint8_t ptr [RCX + R10*0x1 + 0x3] }
    /* +0x6f45f */ __asm { MOV uint8_t ptr [R14 + R10*0x1 + 0x1cb],DL }
    /* +0x6f467 */ __asm { LEA R11,[R10 + 0x4] }
    /* +0x6f46b */ __asm { MOV R10,R11 }
    /* +0x6f46e */ __asm { CMP R9,R11 }
    /* +0x6f471 */ __asm { JNZ 0x7fffa47df430 }
    /* +0x6f473 */ __asm { MOVZX R9D,uint8_t ptr [R13] }
    /* +0x6f478 */ __asm { LEA R11,[0x7fffa586e365] }
    /* +0x6f47f */ __asm { MOV R10D,0x92c1e9b7 }
    /* +0x6f485 */ __asm { XOR R10D,0x28c1e9ff }
    /* +0x6f48c */ __asm { ROL R10D,0x9 }
    /* +0x6f490 */ __asm { NOT R10D }
    /* +0x6f493 */ __asm { MOVSXD R10,R10D }
    /* +0x6f496 */ __asm { ADD R10,R11 }
    /* +0x6f499 */ __asm { CMP uint8_t ptr [R9 + R10*0x1],0x0 }
    /* +0x6f49e */ __asm { MOV qword ptr [RSP + 0xc0],RBP }
    /* +0x6f4a6 */ __asm { JZ 0x7fffa47df8cb }
    /* +0x6f4ac */ __asm { MOV R9D,ESI }
    /* +0x6f4af */ __asm { OR R9D,0x1 }
    /* +0x6f4b3 */ __asm { XOR R10D,R10D }
    /* +0x6f4b6 */ __asm { MOVD XMM2,ESI }
    /* +0x6f4ba */ __asm { LEA R8D,[RSI + -0xad9efe0] }
    /* +0x6f4c1 */ __asm { MOVD XMM0,R8D }
    /* +0x6f4c6 */ __asm { LEA R8,[0x7fffa586e54d] }
    /* +0x6f4cd */ __asm { MOVDQA XMM3,xmmword ptr [0x7fffa5873080] }
    /* +0x6f4d5 */ __asm { MOVDQA XMM5,xmmword ptr [0x7fffa56b2680] }
    /* +0x6f4dd */ __asm { LEA R15,[0x7fffa586ca09] }
    /* +0x6f4e4 */ __asm { JMP 0x7fffa47df51a }
    /* +0x6f4f0 */ __asm { MOV dword ptr [R14 + 0x18],ECX }
    /* +0x6f4f4 */ __asm { MOV DL,0xc8 }
    /* +0x6f4f6 */ __asm { XOR DL,0xd2 }
    /* +0x6f4f9 */ __asm { MOV ECX,ESI }
    /* +0x6f4fb */ __asm { ROR DL,CL }
    /* +0x6f4fd */ __asm { OR BL,0x1 }
    /* +0x6f500 */ __asm { MOV EAX,EBX }
    /* +0x6f502 */ __asm { MUL DL }
    /* +0x6f504 */ __asm { MOVZX EDX,uint8_t ptr [R14 + 0xb] }
    /* +0x6f509 */ __asm { INC DL }
    /* +0x6f50b */ __asm { MOV uint8_t ptr [R14 + 0xb],DL }
    /* +0x6f50f */ __asm { INC R10B }
    /* +0x6f512 */ __asm { CMP DL,AL }
    /* +0x6f514 */ __asm { JA 0x7fffa47e6593 }
    /* +0x6f51a */ __asm { MOVZX R10D,R10B }
    /* +0x6f51e */ __asm { CMP RBP,R10 }
    /* +0x6f521 */ __asm { JBE 0x7fffa47e659a }
    /* +0x6f527 */ __asm { MOV EAX,0x3ac5c07a }
    /* +0x6f52c */ __asm { MOV EDX,0x7d491c8b }
    /* +0x6f531 */ __asm { ADD EDX,0x979a1d1a }
    /* +0x6f537 */ __asm { MOV ECX,ESI }
    /* +0x6f539 */ __asm { ROL EDX,CL }
    /* +0x6f53b */ __asm { MOVD XMM4,EAX }
    /* +0x6f53f */ __asm { PSUBD XMM4,XMM2 }
    /* +0x6f543 */ __asm { MOVD EAX,XMM4 }
    /* +0x6f547 */ __asm { ADD EAX,0x7c59e158 }
    /* +0x6f54c */ __asm { CMP RDX,RAX }
    /* +0x6f54f */ __asm { JNZ 0x7fffa47df5a0 }
    /* +0x6f551 */ __asm { MOV R11D,0x3a5a67b8 }
    /* +0x6f557 */ __asm { MOV ECX,0xcba55f3a }
    /* +0x6f55c */ __asm { IMUL EBX,ECX,-0x3fda6d19 }
    /* +0x6f562 */ __asm { MOV ECX,ESI }
    /* +0x6f564 */ __asm { ROR EBX,CL }
    /* +0x6f566 */ __asm { MOVZX EDX,uint8_t ptr [R13 + R10*0x1] }
    /* +0x6f56c */ __asm { MOV RAX,R8 }
    /* +0x6f56f */ __asm { ADD EBX,0xf097a704 }
    /* +0x6f575 */ __asm { MOVD XMM4,R11D }
    /* +0x6f57a */ __asm { PMULUDQ XMM4,XMM3 }
    /* +0x6f57e */ __asm { PADDD XMM4,XMM0 }
    /* +0x6f582 */ __asm { MOVD ECX,XMM4 }
    /* +0x6f586 */ __asm { MOVSXD R11,ECX }
    /* +0x6f589 */ __asm { ADD RAX,RDX }
    /* +0x6f58c */ __asm { ADD RAX,R11 }
    /* +0x6f58f */ __asm { JMP 0x7fffa47df5d1 }
    /* +0x6f5a0 */ __asm { MOV EBX,0xb686887a }
    /* +0x6f5a5 */ __asm { MOV RAX,R15 }
    /* +0x6f5a8 */ __asm { MOV CX,0x5f3d }
    /* +0x6f5ac */ __asm { IMUL EDX,ECX,0x12b }
    /* +0x6f5b2 */ __asm { MOV ECX,ESI }
    /* +0x6f5b4 */ __asm { ROR DX,CL }
    /* +0x6f5b7 */ __asm { IMUL EBX,R9D }
    /* +0x6f5bb */ __asm { MOVSX R11,DX }
    /* +0x6f5bf */ __asm { MOVZX EDX,uint8_t ptr [R13 + R10*0x1] }
    /* +0x6f5c5 */ __asm { ADD RAX,RDX }
    /* +0x6f5c8 */ __asm { ADD RAX,R11 }
    /* +0x6f5cb */ __asm { XOR EBX,0xc93b085c }
    /* +0x6f5d1 */ __asm { MOVZX ECX,uint8_t ptr [RAX] }
    /* +0x6f5d4 */ __asm { CMP CL,0x2 }
    /* +0x6f5d7 */ __asm { JL 0x7fffa47df640 }
    /* +0x6f5d9 */ __asm { CMP ECX,0x3 }
    /* +0x6f5dc */ __asm { JNZ 0x7fffa47df987 }
    /* +0x6f5e2 */ __asm { MOV ECX,dword ptr [R14 + 0x18] }
    /* +0x6f5e6 */ __asm { MOV uint8_t ptr [R14 + 0x20],DL }
    /* +0x6f5ea */ __asm { MOV R11D,EDX }
    /* +0x6f5ed */ __asm { AND R11B,0x8 }
    /* +0x6f5f1 */ __asm { OR uint8_t ptr [R14 + 0x5],0x1 }
    /* +0x6f5f6 */ __asm { LEA EAX,[RDX + RDX*0x1] }
    /* +0x6f5f9 */ __asm { AND AL,0x4 }
    /* +0x6f5fb */ __asm { LEA R12D,[RDX*0x8] }
    /* +0x6f603 */ __asm { AND R12B,0x8 }
    /* +0x6f607 */ __asm { OR R12B,AL }
    /* +0x6f60a */ __asm { SHR DL,0x1 }
    /* +0x6f60c */ __asm { AND DL,0x2 }
    /* +0x6f60f */ __asm { OR DL,R12B }
    /* +0x6f612 */ __asm { SHR R11B,0x3 }
    /* +0x6f616 */ __asm { OR R11B,DL }
    /* +0x6f619 */ __asm { AND ECX,0xfffffff0 }
    /* +0x6f61c */ __asm { MOVD XMM4,ECX }
    /* +0x6f620 */ __asm { MOVZX ECX,R11B }
    /* +0x6f624 */ __asm { MOVD XMM1,ECX }
    /* +0x6f628 */ __asm { POR XMM1,XMM4 }
    /* +0x6f62c */ __asm { MOVD ECX,XMM1 }
    /* +0x6f630 */ __asm { JMP 0x7fffa47df4f0 }
    /* +0x6f640 */ __asm { CMP ECX,0x1 }
    /* +0x6f643 */ __asm { JNZ 0x7fffa47e188e }
    /* +0x6f649 */ __asm { CMP DL,0x36 }
    /* +0x6f64c */ __asm { JL 0x7fffa47df6b0 }
    /* +0x6f64e */ __asm { CMP DL,0x65 }
    /* +0x6f651 */ __asm { JGE 0x7fffa47df6f1 }
    /* +0x6f657 */ __asm { MOV R11B,0xcf }
    /* +0x6f65a */ __asm { MOVZX ECX,R11B }
    /* +0x6f65e */ __asm { MOVD XMM4,ECX }
    /* +0x6f662 */ __asm { MOV R11D,ESI }
    /* +0x6f665 */ __asm { OR R11B,0x1 }
    /* +0x6f669 */ __asm { MOVZX ECX,R11B }
    /* +0x6f66d */ __asm { MOVD XMM1,ECX }
    /* +0x6f671 */ __asm { PMULLW XMM1,XMM4 }
    /* +0x6f675 */ __asm { MOVD EAX,XMM1 }
    /* +0x6f679 */ __asm { MOV ECX,EBX }
    /* +0x6f67b */ __asm { ROR AL,CL }
    /* +0x6f67d */ __asm { XOR AL,0x62 }
    /* +0x6f67f */ __asm { CMP DL,AL }
    /* +0x6f681 */ __asm { JL 0x7fffa47df76f }
    /* +0x6f687 */ __asm { CMP DL,0x3e }
    /* +0x6f68a */ __asm { JZ 0x7fffa47df7e0 }
    /* +0x6f690 */ __asm { MOVZX ECX,DL }
    /* +0x6f693 */ __asm { CMP ECX,0x64 }
    /* +0x6f696 */ __asm { JZ 0x7fffa47df7e0 }
    /* +0x6f69c */ __asm { JMP 0x7fffa47e188e }
    /* +0x6f6b0 */ __asm { CMP DL,0xf3 }
    /* +0x6f6b3 */ __asm { JGE 0x7fffa47df745 }
    /* +0x6f6b9 */ __asm { MOV R11B,0xd9 }
    /* +0x6f6bc */ __asm { MOVD XMM4,EBX }
    /* +0x6f6c0 */ __asm { XOR R11B,SIL }
    /* +0x6f6c3 */ __asm { MOVZX ECX,R11B }
    /* +0x6f6c7 */ __asm { MOVD XMM1,ECX }
    /* +0x6f6cb */ __asm { PSUBB XMM1,XMM4 }
    /* +0x6f6cf */ __asm { MOVD ECX,XMM1 }
    /* +0x6f6d3 */ __asm { IMUL ECX,ECX,-0x51 }
    /* +0x6f6d6 */ __asm { CMP DL,CL }
    /* +0x6f6d8 */ __asm { JGE 0x7fffa47df78b }
    /* +0x6f6de */ __asm { CMP DL,0xf0 }
    /* +0x6f6e1 */ __asm { JNZ 0x7fffa47e188e }
    /* +0x6f6e7 */ __asm { OR uint8_t ptr [R14 + 0x5],0x80 }
    /* +0x6f6ec */ __asm { JMP 0x7fffa47df7f6 }
    /* +0x6f6f1 */ __asm { JZ 0x7fffa47df7e0 }
    /* +0x6f6f7 */ __asm { CMP DL,0x67 }
    /* +0x6f6fa */ __asm { JGE 0x7fffa47df7be }
    /* +0x6f700 */ __asm { MOV ECX,0xf6909290 }
    /* +0x6f705 */ __asm { IMUL ECX,R9D }
    /* +0x6f709 */ __asm { MOV EDX,0x38d71180 }
    /* +0x6f70e */ __asm { SUB EDX,ECX }
    /* +0x6f710 */ __asm { MOV EAX,0xe0ea4a1f }
    /* +0x6f715 */ __asm { IMUL EAX,R9D }
    /* +0x6f719 */ __asm { MOV ECX,EBX }
    /* +0x6f71b */ __asm { ROR EAX,CL }
    /* +0x6f71d */ __asm { ADD EAX,0xa4c0b83a }
    /* +0x6f722 */ __asm { MOVSXD R11,EAX }
    /* +0x6f725 */ __asm { MOVZX ECX,uint8_t ptr [R14 + 0x5] }
    /* +0x6f72a */ __asm { LEA EAX,[RCX + -0x20] }
    /* +0x6f72d */ __asm { OR CL,0x20 }
    /* +0x6f730 */ __asm { CMP R11,RDX }
    /* +0x6f733 */ __asm { MOVZX ECX,CL }
    /* +0x6f736 */ __asm { MOVZX EAX,AL }
    /* +0x6f739 */ __asm { CMOVA EAX,ECX }
    /* +0x6f73c */ __asm { MOV uint8_t ptr [R14 + 0x5],AL }
    /* +0x6f740 */ __asm { JMP 0x7fffa47df7f6 }
    /* +0x6f745 */ __asm { CMP DL,0x26 }
    /* +0x6f748 */ __asm { JL 0x7fffa47df7a2 }
    /* +0x6f74a */ __asm { CMP DL,0x2e }
    /* +0x6f74d */ __asm { JGE 0x7fffa47df7cb }
    /* +0x6f74f */ __asm { MOV R11D,EDX }
    /* +0x6f752 */ __asm { ROL R11B,0x3 }
    /* +0x6f756 */ __asm { MOVZX R11D,R11B }
    /* +0x6f75a */ __asm { LEA ECX,[R11 + R11*0x4] }
    /* +0x6f75e */ __asm { LEA ECX,[R11 + RCX*0x4] }
    /* +0x6f762 */ __asm { ADD CL,0x16 }
    /* +0x6f765 */ __asm { CMP CL,0x1b }
    /* +0x6f768 */ __asm { JZ 0x7fffa47df7e0 }
    /* +0x6f76a */ __asm { JMP 0x7fffa47e188e }
    /* +0x6f76f */ __asm { MOV AL,0xb9 }
    /* +0x6f771 */ __asm { ADD AL,SIL }
    /* +0x6f774 */ __asm { XOR AL,0xbb }
    /* +0x6f776 */ __asm { ROL AL,0x1 }
    /* +0x6f778 */ __asm { MOV R11D,EBX }
    /* +0x6f77b */ __asm { OR R11B,0x1 }
    /* +0x6f77f */ __asm { MUL R11B }
    /* +0x6f782 */ __asm { CMP DL,AL }
    /* +0x6f784 */ __asm { JZ 0x7fffa47df7e0 }
    /* +0x6f786 */ __asm { JMP 0x7fffa47e188e }
    /* +0x6f78b */ __asm { OR uint8_t ptr [R14 + 0x6],0x1 }
    /* +0x6f790 */ __asm { MOV DL,0x3d }
    /* +0x6f792 */ __asm { ADD DL,SIL }
    /* +0x6f795 */ __asm { MOV ECX,EBX }
    /* +0x6f797 */ __asm { ROL DL,CL }
    /* +0x6f799 */ __asm { XOR DL,0x74 }
    /* +0x6f79c */ __asm { MOV uint8_t ptr [R14 + 0x1c],DL }
    /* +0x6f7a0 */ __asm { JMP 0x7fffa47df7f6 }
    /* +0x6f7a2 */ __asm { NOT DL }
    /* +0x6f7a4 */ __asm { ROR DL,0x1 }
    /* +0x6f7a6 */ __asm { ADD DL,0x8b }
    /* +0x6f7a9 */ __asm { CMP DL,0x91 }
    /* +0x6f7ac */ __asm { JNZ 0x7fffa47e188e }
    /* +0x6f7b2 */ __asm { MOV uint8_t ptr [R14 + 0x1c],0xf3 }
    /* +0x6f7b7 */ __asm { OR uint8_t ptr [R14 + 0x6],0x2 }
    /* +0x6f7bc */ __asm { JMP 0x7fffa47df7f6 }
    /* +0x6f7be */ __asm { JNZ 0x7fffa47e188e }
    /* +0x6f7c4 */ __asm { OR uint8_t ptr [R14 + 0x5],0x40 }
    /* +0x6f7c9 */ __asm { JMP 0x7fffa47df7f6 }
    /* +0x6f7cb */ __asm { JNZ 0x7fffa47e188e }
    /* +0x6f7d1 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0x6f7e0 */ __asm { MOV R11D,EDX }
    /* +0x6f7e3 */ __asm { AND R11B,0xfe }
    /* +0x6f7e7 */ __asm { CMP R11B,0x64 }
    /* +0x6f7eb */ __asm { JNZ 0x7fffa47df824 }
    /* +0x6f7ed */ __asm { OR uint8_t ptr [R14 + 0x6],0x4 }
    /* +0x6f7f2 */ __asm { MOV uint8_t ptr [R14 + 0x1d],DL }
    /* +0x6f7f6 */ __asm { MOV RBP,qword ptr [RSP + 0xc0] }
    /* +0x6f7fe */ __asm { MOVZX EDX,uint8_t ptr [R14 + 0x5] }
    /* +0x6f803 */ __asm { TEST DL,0x1 }
    /* +0x6f806 */ __asm { JZ 0x7fffa47df4f4 }
    /* +0x6f80c */ __asm { MOV ECX,dword ptr [R14 + 0x18] }
    /* +0x6f810 */ __asm { AND ECX,0xfffffff0 }
    /* +0x6f813 */ __asm { MOV uint8_t ptr [R14 + 0x20],0x0 }
    /* +0x6f818 */ __asm { AND DL,0xfe }
    /* +0x6f81b */ __asm { MOV uint8_t ptr [R14 + 0x5],DL }
    /* +0x6f81f */ __asm { JMP 0x7fffa47df4f0 }
    /* +0x6f824 */ __asm { MOV R11B,0xed }
    /* +0x6f827 */ __asm { MOVD XMM4,ESI }
    /* +0x6f82b */ __asm { POR XMM4,XMM5 }
    /* +0x6f82f */ __asm { MOVZX EAX,uint8_t ptr [R14 + 0x1d] }
    /* +0x6f834 */ __asm { XOR R11B,BL }
    /* +0x6f837 */ __asm { MOVZX ECX,R11B }
    /* +0x6f83b */ __asm { MOVD XMM1,ECX }
    /* +0x6f83f */ __asm { PMULLW XMM1,XMM4 }
    /* +0x6f843 */ __asm { MOVD ECX,XMM1 }
    /* +0x6f847 */ __asm { ADD CL,0xdb }
    /* +0x6f84a */ __asm { CMP DL,CL }
    /* +0x6f84c */ __asm { MOV RBP,qword ptr [RSP + 0xc0] }
    /* +0x6f854 */ __asm { JNZ 0x7fffa47df87d }
    /* +0x6f856 */ __asm { MOV R11D,EAX }
    /* +0x6f859 */ __asm { AND R11B,0xfe }
    /* +0x6f85d */ __asm { CMP R11B,0x64 }
    /* +0x6f861 */ __asm { JZ 0x7fffa47df87d }
    /* +0x6f863 */ __asm { MOV RCX,0x0 }
    /* +0x6f86a */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0x6f871 */ __asm { MOV uint8_t ptr [R14 + 0x1d],0x3e }
    /* +0x6f876 */ __asm { OR uint8_t ptr [R14 + 0x6],0x4 }
    /* +0x6f87b */ __asm { JMP 0x7fffa47df7fe }
    /* +0x6f87d */ __asm { CMP AL,0x64 }
    /* +0x6f87f */ __asm { JL 0x7fffa47df88d }
    /* +0x6f881 */ __asm { AND AL,0x7e }
    /* +0x6f883 */ __asm { CMP AL,0x64 }
    /* +0x6f885 */ __asm { JZ 0x7fffa47df7fe }
    /* +0x6f88b */ __asm { JMP 0x7fffa47df8b3 }
    /* +0x6f88d */ __asm { MOV R11B,0xb2 }
    /* +0x6f890 */ __asm { XOR R11B,BL }
    /* +0x6f893 */ __asm { MOVZX ECX,R11B }
    /* +0x6f897 */ __asm { MOVD XMM4,ECX }
    /* +0x6f89b */ __asm { MOVZX ECX,AL }
    /* +0x6f89e */ __asm { MOVD XMM1,ECX }
    /* +0x6f8a2 */ __asm { PXOR XMM1,XMM4 }
    /* +0x6f8a6 */ __asm { MOVD ECX,XMM1 }
    /* +0x6f8aa */ __asm { CMP CL,0xc8 }
    /* +0x6f8ad */ __asm { JZ 0x7fffa47df7fe }
    /* +0x6f8b3 */ __asm { MOV uint8_t ptr [R14 + 0x1d],DL }
    /* +0x6f8b7 */ __asm { OR uint8_t ptr [R14 + 0x6],0x4 }
    /* +0x6f8bc */ __asm { JMP 0x7fffa47df7fe }
    /* +0x6f8c1 */ __asm { MOV EBP,0x80000100 }
    /* +0x6f8c6 */ __asm { JMP 0x7fffa47e659f }
    /* +0x6f8cb */ __asm { MOV R9B,0x2a }
    /* +0x6f8ce */ __asm { MOV R10W,0x34b3 }
    /* +0x6f8d3 */ __asm { IMUL R10D,R10D,0x6585 }
    /* +0x6f8da */ __asm { NOT R10D }
    /* +0x6f8dd */ __asm { MOVZX R10D,R10W }
    /* +0x6f8e1 */ __asm { AND R9B,0x3f }
    /* +0x6f8e5 */ __asm { MOVZX R8D,R9B }
    /* +0x6f8e9 */ __asm { MOVD XMM2,R8D }
    /* +0x6f8ee */ __asm { MOV R9,0x0 }
    /* +0x6f8f5 */ __asm { NOP }
    /* +0x6f8f7 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x6f8fe */ __asm { MOVZX R9D,uint8_t ptr [R14 + 0x1] }
    /* +0x6f903 */ __asm { AND R9B,0xfc }
    /* +0x6f907 */ __asm { MOVZX R8D,uint8_t ptr [R14 + 0x5] }
}


// ============================================================================
// Function : FUN_7fffa47e6820  |  RVA: 0x76820  |  Size: 589 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa47e6820(void)

{
  uint8_t bVar1;
  uint8_t bVar2;
  int64_t lVar3;
  uint16_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  
  uRam00007fffa4785ccd = 0;
  s_77777777777777777777777777777777_7fffa4785cd8[9] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[10] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0xb] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0xc] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0xd] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0xe] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0xf] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x10] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x11] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x12] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x13] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x14] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x15] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x16] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x17] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x18] = '\0';
  uRam00007fffa4785cd1 = 0;
  s_77777777777777777777777777777777_7fffa4785cd8[1] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[2] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[3] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[4] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[5] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[6] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[7] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[8] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x19] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x1a] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x1b] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x1c] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x1d] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x1e] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x1f] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x20] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x31] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x32] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x33] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x34] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x35] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x36] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x37] = '\0';
  s_77777777777777777777777777777777_7fffa4785cd8[0x38] = '\0';
  uVar6 = rdtsc();
  lVar5 = (uVar6 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar6)) * 0x6943623ad880a6c;
  uVar4 = 3;
  lVar3 = 2;
  uVar6 = 0xfffffffffffffffc;
  while( true ) {
    lVar7 = lVar5 * 0x6943623ad880a6c + 0x6943623ad880a6c;
    lVar5 = lVar7 * 0x6943623ad880a6c + 0x6943623ad880a6c;
    *(char *)(lVar3 + 0x7fffa4785cc6) = (char)((uint64_t)lVar5 >> 0x20);
    lVar5 = lVar5 * 0x6943623ad880a6c + 0x6943623ad880a6c;
    *(char *)(lVar3 + 0x7fffa4785cc7) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar3 + 0x7fffa4785cc5) = (char)((uint64_t)lVar7 >> 0x20);
    if ((uVar6 << 5 | uVar6 >> 0x3b) * -0x709e186b5cf0f5f == -0x6d8185801e69c781) break;
    uVar4 = uVar4 + 3;
    lVar3 = lVar3 + 3;
    uVar6 = uVar6 - 3;
  }
  bVar1 = (uint8_t)uVar4 & 0xf;
  bVar2 = (uint8_t)uVar4 & 0x1f;
  uVar6 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(short)((0x5c06 << bVar1 | 0x5c06U >> 0x10 - bVar1) + 0xb3a4) +
                          0x7fffa478a5fb) * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)
   ((int64_t)(int)(-0x15d7001 << bVar2 | 0xfea28fffU >> 0x20 - bVar2) + 0x7fffa4790b8a +
   (uVar6 >> 0x20) * 8) = *(uint64_t *)((int64_t)(short)((uVar4 | 1) * -0x3613) + 0x7fffa478bd7e)
  ;
  *(char *)((int64_t)(short)((0x4e94 - uVar4) * -0x3eb5 + -0x32b9) + 0x7fffa478a6a7) =
       (char)(uVar6 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa47e6a70  |  RVA: 0x76a70  |  Size: 1017 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
uint32_t FUN_7fffa47e6a70(int64_t param_1,uint32_t *param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5,uint64_t param_6,uint32_t param_7)

{
  int *piVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint8_t bVar4;
  bool bVar5;
  uint64_t uVar6;
  uint8_t *pbVar7;
  uint64_t uVar8;
  uint64_t in_R11;
  uint64_t uVar9;
  uint8_t *pbVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  
  uVar8 = ~(param_5 << 3 | param_5 >> 0x3d);
  uVar13 = *param_2;
  uVar9 = (in_R11 << 0x38 | in_R11 >> 8) + 0x212590eb;
  uVar9 = (uVar9 << 0x23 | uVar9 >> 0x1d) ^ (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar9;
  uVar9 = (uVar9 << 6 | uVar9 >> 0x3a) ^ (uVar9 << 0x1a | uVar9 >> 0x26) ^ uVar9;
  uVar9 = (uVar9 << 0xc | uVar9 >> 0x34) ^ (uVar9 << 0x34 | uVar9 >> 0xc) ^ uVar9;
  uVar9 = (uVar9 << 0x18 | uVar9 >> 0x28) ^ (uVar9 << 0x28 | uVar9 >> 0x18) ^ uVar9;
  pbVar10 = (uint8_t *)((uVar9 << 0x10 | uVar9 >> 0x30) ^ (uVar9 << 0x30 | uVar9 >> 0x10) ^ uVar9);
  uVar11 = 0;
  FUN_7fffa4ecf8e0(param_1,0,(uint64_t)(uVar13 + 1) << 2);
  uVar9 = (uint64_t)((uint32_t)uVar8 & 0x30);
  if ((uint64_t)((param_7 | 1) * -0x4bba7a20) <= (uint64_t)(int64_t)(int)(param_7 ^ 0x7093cc75))
  {
    uVar9 = uVar8 << 0x30;
  }
  uVar8 = uVar9 ^ uVar8 << 0x18 ^ uVar8;
  uVar8 = (uVar8 << 0x13 | uVar8 >> 0x2d) ^ (uVar8 << 0x28 | uVar8 >> 0x18) ^ uVar8;
  uVar8 = (uVar8 << 0x26 | uVar8 >> 0x1a) ^ (uVar8 << 0x10 | uVar8 >> 0x30) ^ uVar8;
  uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) ^ (uVar8 << 0xc | uVar8 >> 0x34) ^ uVar8;
  uVar8 = (uVar8 << 0x24 | uVar8 >> 0x1c) ^ (uVar8 << 0x3b | uVar8 >> 5) ^
          (uVar8 << 0x28 | uVar8 >> 0x18);
  uVar8 = (uVar8 << 0x26 | uVar8 >> 0x1a) ^ (uVar8 << 0x38 | uVar8 >> 8) ^ uVar8;
  uVar8 = (uVar8 << 0x30 | uVar8 >> 0x10) ^ (uVar8 << 0xc | uVar8 >> 0x34) ^ uVar8;
  uVar9 = (uVar8 << 0x18 | uVar8 >> 0x28) ^ (uVar8 << 0x20 | uVar8 >> 0x20);
  if (uVar9 == uVar8) {
    *param_2 = 0;
  }
  else {
    uVar8 = uVar8 ^ uVar9;
    pbVar7 = pbVar10 + (uVar8 << 0x10 | uVar8 >> 0x30);
    do {
      bVar4 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      piVar1 = (int *)(param_1 + (uint64_t)bVar4 * 4);
      *piVar1 = *piVar1 + 1;
    } while (pbVar10 < pbVar7);
    do {
      uVar11 = uVar13;
      uVar8 = (uint64_t)uVar11;
      uVar13 = uVar11 - 1;
    } while (*(int *)(param_1 + uVar8 * 4) == 0);
    *param_2 = uVar11;
    if (uVar11 < 7) {
      uVar6 = 0;
      uVar11 = 0;
    }
    else {
      uVar6 = uVar8 + 1 & 0xfffffffffffffff8;
      uVar13 = 0;
      uVar15 = 0;
      uVar12 = 0;
      uVar14 = 0;
      uVar9 = 8;
      uVar17 = 0;
      uVar16 = 0;
      uVar18 = 0;
      uVar19 = 0;
      while( true ) {
        puVar2 = (uint32_t *)(param_1 + -0x20 + uVar9 * 4);
        puVar3 = (uint32_t *)(param_1 + -0x10 + uVar9 * 4);
        uVar20 = -(uint32_t)((int)(uVar17 ^ 0x80000000) < (int)(*puVar3 ^ 0x80000000));
        uVar21 = -(uint32_t)((int)(uVar16 ^ 0x80000000) < (int)(puVar3[1] ^ 0x80000000));
        uVar22 = -(uint32_t)((int)(uVar18 ^ 0x80000000) < (int)(puVar3[2] ^ 0x80000000));
        uVar23 = -(uint32_t)((int)(uVar19 ^ 0x80000000) < (int)(puVar3[3] ^ 0x80000000));
        uVar17 = ~uVar20 & uVar17 | *puVar3 & uVar20;
        uVar16 = ~uVar21 & uVar16 | puVar3[1] & uVar21;
        uVar18 = ~uVar22 & uVar18 | puVar3[2] & uVar22;
        uVar19 = ~uVar23 & uVar19 | puVar3[3] & uVar23;
        bVar5 = ((uint64_t)uVar11 + 1 & 0xfffffffffffffff8) == uVar9;
        if ((param_7 + 0xd6c89e27 ^ 0x76c30f2) + 0x3ffffed3 < 0xc0000006) {
          bVar5 = uVar9 < uVar6;
        }
        uVar20 = -(uint32_t)((int)(uVar13 ^ 0x80000000) < (int)(*puVar2 ^ 0x80000000));
        uVar21 = -(uint32_t)((int)(uVar15 ^ 0x80000000) < (int)(puVar2[1] ^ 0x80000000));
        uVar22 = -(uint32_t)((int)(uVar12 ^ 0x80000000) < (int)(puVar2[2] ^ 0x80000000));
        uVar23 = -(uint32_t)((int)(uVar14 ^ 0x80000000) < (int)(puVar2[3] ^ 0x80000000));
        uVar13 = ~uVar20 & uVar13 | *puVar2 & uVar20;
        uVar15 = ~uVar21 & uVar15 | puVar2[1] & uVar21;
        uVar12 = ~uVar22 & uVar12 | puVar2[2] & uVar22;
        uVar14 = ~uVar23 & uVar14 | puVar2[3] & uVar23;
        if (bVar5) break;
        uVar9 = uVar9 + 8;
      }
      uVar11 = -(uint32_t)((int)(uVar17 ^ 0x80000000) < (int)(uVar13 ^ 0x80000000));
      uVar20 = -(uint32_t)((int)(uVar16 ^ 0x80000000) < (int)(uVar15 ^ 0x80000000));
      uVar21 = -(uint32_t)((int)(uVar18 ^ 0x80000000) < (int)(uVar12 ^ 0x80000000));
      uVar22 = -(uint32_t)((int)(uVar19 ^ 0x80000000) < (int)(uVar14 ^ 0x80000000));
      uVar13 = ~uVar11 & uVar17 | uVar13 & uVar11;
      uVar11 = ~uVar20 & uVar16 | uVar15 & uVar20;
      uVar15 = ~uVar21 & uVar18 | uVar12 & uVar21;
      uVar12 = ~uVar22 & uVar19 | uVar14 & uVar22;
      uVar14 = -(uint32_t)((int)(uVar15 ^ 0x80000000) < (int)(uVar13 ^ 0x80000000));
      uVar17 = -(uint32_t)((int)(uVar12 ^ 0x80000000) < (int)(uVar11 ^ 0x80000000));
      uVar15 = ~uVar14 & uVar15 | uVar13 & uVar14;
      uVar11 = ~uVar17 & uVar12 | uVar11 & uVar17;
      uVar13 = -(uint32_t)((int)(uVar11 ^ 0x80000000) < (int)(uVar15 ^ 0x80000000));
      uVar11 = ~uVar13 & uVar11 | uVar15 & uVar13;
      if (uVar8 + 1 == uVar6) goto LAB_7fffa47e6c37;
    }
    while( true ) {
      uVar13 = *(uint32_t *)(param_1 + uVar6 * 4);
      if (uVar11 < uVar13) {
        uVar11 = uVar13;
      }
      if (uVar8 <= uVar6) break;
      uVar6 = uVar6 + 1;
    }
  }
LAB_7fffa47e6c37:
  return uVar11 << 0x14 ^ uVar11;
}


// ============================================================================
// Function : FUN_7fffa47e6e70  |  RVA: 0x76e70  |  Size: 12094 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa47e914a) */
/* WARNING: Removing unreachable block (ram,0x7fffa47e9c52) */
/* WARNING: Removing unreachable block (ram,0x7fffa47e7a2f) */
/* WARNING: Removing unreachable block (ram,0x7fffa47e7034) */
/* WARNING: Removing unreachable block (ram,0x7fffa47e7192) */
/* WARNING: Removing unreachable block (ram,0x7fffa47e92d0) */
/* WARNING: Removing unreachable block (ram,0x7fffa47e784e) */
/* WARNING: Removing unreachable block (ram,0x7fffa47e829d) */
/* WARNING: Removing unreachable block (ram,0x7fffa47e89b2) */
/* WARNING: Removing unreachable block (ram,0x7fffa47e883e) */

int64_t FUN_7fffa47e6e70(code *param_1,int64_t *param_2,uint32_t *param_3,code *param_4,
                         int64_t param_5)

{
  code *pcVar1;
  code cVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint64_t *puVar5;
  uint8_t bVar6;
  uint8_t auVar7 [16];
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *plVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  code *pcVar21;
  code *pcVar22;
  uint64_t uVar23;
  code *pcVar24;
  code *pcVar25;
  bool bVar26;
  uint32_t uVar27;
  code *pcVar28;
  code *pcVar29;
  uint64_t uVar30;
  code *pcVar31;
  uint32_t uVar32;
  code *pcVar33;
  code *pcVar34;
  int64_t *plVar35;
  code *pcVar36;
  int iVar37;
  uint32_t uVar38;
  uint32_t uVar39;
  uint64_t uVar40;
  uint8_t auVar41 [16];
  uint8_t auStack_f423d [999401];
  uint32_t uStack_254;
  code *pcStack_250;
  code *pcStack_248;
  code *pcStack_240;
  code *pcStack_238;
  uint64_t uStack_230;
  code *pcStack_228;
  code *pcStack_220;
  uint64_t uStack_218;
  code *pcStack_210;
  uint32_t *puStack_208;
  uint32_t uStack_1fc;
  int64_t lStack_1f8;
  int64_t lStack_1f0;
  uint64_t uStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  code *pcStack_1d0;
  int64_t *plStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  code *pcStack_1b0;
  uint64_t uStack_1a8;
  uint32_t uStack_19c;
  code *pcStack_198;
  code *pcStack_190;
  code *pcStack_188;
  code *pcStack_180;
  code *pcStack_178;
  uint64_t uStack_170;
  code *pcStack_168;
  int64_t lStack_160;
  uint64_t uStack_158;
  code *pcStack_150;
  uint64_t uStack_148;
  code *pcStack_140;
  int64_t lStack_138;
  int iStack_130;
  uint32_t uStack_12c;
  uint64_t uStack_128;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  uint64_t uStack_118;
  uint64_t uStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  uint64_t uStack_f0;
  uint32_t uStack_e4;
  code *pcStack_e0;
  int64_t lStack_d8;
  uint32_t uStack_cc;
  uint64_t uStack_c8;
  uint32_t uStack_bc;
  uint64_t uStack_b8;
  int64_t lStack_b0;
  uint64_t uStack_a8;
  code *pcStack_a0;
  
  pcVar1 = param_4 + param_5 + -0x10;
  pcStack_150 = *(code **)(param_1 + 8);
  pcStack_180 = *(code **)(param_1 + 0x10);
  uVar27 = *(uint32_t *)(param_1 + 0x2c);
  uVar17 = (uint64_t)uVar27;
  uStack_1c0 = (int64_t)pcVar1 - (int64_t)(pcStack_150 + uVar17);
  uVar32 = (int)uStack_1c0 + 1;
  uVar38 = 8;
  if (uVar32 < 8) {
    uVar38 = uVar32;
  }
  uVar32 = 0;
  if (pcStack_150 + uVar17 <= pcVar1) {
    uVar32 = uVar38;
  }
  uStack_e4 = *(uint32_t *)(param_1 + 0x10c);
  uStack_cc = 6;
  if (uStack_e4 < 6) {
    uStack_cc = uStack_e4;
  }
  if (uStack_cc < 5) {
    uStack_cc = 4;
  }
  uStack_254 = *param_3;
  uStack_12c = param_3[1];
  uVar38 = *(uint32_t *)(param_1 + 0x18);
  uStack_218 = (uint64_t)uVar38;
  uStack_b8 = *(uint64_t *)(param_1 + 0x70);
  uVar39 = *(uint32_t *)(param_1 + 0x1c);
  uVar3 = *(uint32_t *)(param_1 + 0x100);
  *(uint32_t *)(param_1 + 300) = 0;
  pcVar28 = pcStack_150 + uStack_218;
  pcStack_210 = param_4 + (param_4 == pcVar28);
  uStack_120 = *(uint32_t *)(param_1 + 0x110);
  uStack_1fc = 6;
  if (uStack_120 < 6) {
    uStack_1fc = uStack_120;
  }
  if (uStack_1fc < 5) {
    uStack_1fc = 4;
  }
  pcStack_e0 = pcStack_150;
  if (uVar27 < uVar32 + uVar27) {
    uVar30 = *(uint64_t *)(param_1 + 0x60);
    uVar4 = *(uint32_t *)(param_1 + 0x34);
    do {
      if (uStack_120 < 6) {
        if (uStack_120 != 5) goto LAB_7fffa47e70e0;
        uVar20 = *(int64_t *)(pcStack_150 + uVar17) * -0x30e4432345000000;
LAB_7fffa47e70cf:
        uVar19 = (uint32_t)((uVar20 ^ uVar30) >> (0x38U - (char)uVar4 & 0x3f));
      }
      else {
        if (uStack_1fc == 6) {
          uVar20 = *(int64_t *)(pcStack_150 + uVar17) * -0x30e4432340650000;
          goto LAB_7fffa47e70cf;
        }
LAB_7fffa47e70e0:
        uVar19 = (*(int *)(pcStack_150 + uVar17) * -0x61c8864f ^ (uint32_t)uVar30) >>
                 (0x18U - (char)uVar4 & 0x1f);
      }
      *(uint32_t *)(param_1 + (uint64_t)((uint32_t)uVar17 & 7) * 4 + 0x40) = uVar19;
      pcStack_e0 = param_1;
      if ((uint64_t)(uVar32 + uVar27) - 1 == uVar17) break;
      uVar17 = uVar17 + 1;
    } while( true );
  }
  pcVar36 = param_4 + param_5;
  uStack_bc = uStack_12c;
  puStack_208 = param_3;
  if (pcStack_210 < pcVar1) {
    uVar17 = (uint64_t)uVar39;
    pcStack_1d8 = pcStack_180 + uStack_218;
    pcStack_108 = pcStack_180 + uVar17;
    uStack_11c = 1 << ((uint8_t)uVar3 & 0x1f);
    pcStack_168 = pcVar36 + -7;
    iStack_130 = uVar38 - 1;
    pcStack_1b0 = pcVar36 + -3;
    pcStack_1e0 = pcVar36 + -0x20;
    pcStack_190 = pcVar36 + -1;
    pcStack_248 = pcStack_150 + uStack_218 + 8;
    uStack_f0 = 0xa0e94b80;
    pcStack_240 = pcVar36;
    pcStack_228 = param_1;
    pcStack_1d0 = pcStack_248;
    plStack_1c8 = param_2;
    uStack_118 = uStack_218;
    pcStack_100 = pcVar28;
    pcStack_a0 = pcStack_180;
    do {
      pcVar15 = pcStack_100;
      plVar35 = plStack_1c8;
      pcVar16 = pcStack_228;
      pcVar31 = pcStack_240;
      uStack_19c = *(uint32_t *)(param_1 + 0x1c);
      uStack_a8 = (int64_t)pcStack_210 - (int64_t)pcStack_150;
      iVar37 = (int)uStack_a8 + 1;
      uVar27 = iVar37 - uStack_19c;
      bVar26 = uStack_11c < uVar27 && *(uint32_t *)(param_1 + 0x28) == 0;
      uVar30 = (uint64_t)CONCAT31((int3)(uVar27 >> 8),bVar26);
      uVar38 = iVar37 - uStack_254;
      uStack_148 = (uint64_t)uVar38;
      pcVar33 = pcStack_150;
      if (uVar38 < (uint32_t)uStack_218) {
        pcVar33 = pcStack_a0;
      }
      uVar32 = iVar37 - uStack_11c;
      if (uStack_11c >= uVar27 || *(uint32_t *)(param_1 + 0x28) != 0) {
        uVar32 = uStack_19c;
      }
      pcStack_188 = pcStack_210 + 1;
      if (iStack_130 - uVar38 < 3) {
        pcVar21 = (code *)0x0;
      }
      else {
        pcVar21 = (code *)0x0;
        if (uStack_254 <= ((int)uStack_a8 - uVar32) + 1) {
          pcVar21 = pcVar33 + uStack_148;
          if (*(uint32_t *)pcStack_188 == *(uint32_t *)pcVar21) {
            pcVar29 = pcVar36;
            if (uVar38 < (uint32_t)uStack_218) {
              pcVar29 = pcStack_1d8;
            }
            pcVar34 = pcStack_210 + 5;
            pcVar22 = pcVar21 + 4;
            pcVar14 = pcStack_210 + (int64_t)(pcVar29 + (5 - (int64_t)pcVar22));
            if (pcVar36 <= pcStack_210 + (int64_t)(pcVar29 + (5 - (int64_t)pcVar22))) {
              pcVar14 = pcVar36;
            }
            pcVar24 = pcVar22;
            pcVar25 = pcVar34;
            if (pcVar34 < pcVar14 + -7) {
              pcVar28 = pcStack_100;
              if (*(uint64_t *)pcVar22 == *(uint64_t *)pcVar34) {
                pcVar33 = pcVar33 + uStack_148 + 0xc;
                lVar18 = 0;
                do {
                  if (pcVar14 + -7 <= pcStack_210 + lVar18 + 0xd) {
                    pcVar25 = pcStack_210 + lVar18 + 0xd;
                    pcVar24 = pcVar21 + lVar18 + 0xc;
                    goto LAB_7fffa47e755c;
                  }
                  uVar20 = *(uint64_t *)(pcStack_210 + lVar18 + 0xd);
                  pcVar24 = pcVar33 + lVar18;
                  lVar18 = lVar18 + 8;
                } while (*(uint64_t *)pcVar24 == uVar20);
                uVar27 = 0;
                for (uVar20 = uVar20 ^ *(uint64_t *)pcVar24; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar27 = uVar27 + 1;
                }
                uVar20 = (uint64_t)(uVar27 >> 3) + lVar18;
              }
              else {
                uVar27 = 0;
                for (uVar20 = *(uint64_t *)pcVar34 ^ *(uint64_t *)pcVar22; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar27 = uVar27 + 1;
                }
                uVar20 = (uint64_t)(uVar27 >> 3);
              }
            }
            else {
LAB_7fffa47e755c:
              if ((pcVar25 < pcVar14 + -3) && (*(uint32_t *)pcVar24 == *(uint32_t *)pcVar25)) {
                pcVar25 = pcVar25 + 4;
                pcVar24 = pcVar24 + 4;
              }
              pcVar33 = pcVar14 + -1;
              if ((pcVar25 < pcVar33) &&
                 (pcVar33 = (code *)(uint64_t)*(uint16_t *)pcVar24,
                 *(uint16_t *)pcVar24 == *(uint16_t *)pcVar25)) {
                pcVar24 = pcVar24 + 2;
                pcVar25 = pcVar25 + 2;
              }
              if (pcVar25 < pcVar14) {
                pcVar25 = pcVar25 + (*pcVar24 == *pcVar25);
              }
              uVar20 = (int64_t)pcVar25 - (int64_t)pcVar34;
            }
            if (pcVar22 + uVar20 == pcVar29) {
              pcVar34 = pcVar34 + uVar20;
              pcVar21 = pcVar28;
              pcVar29 = pcVar34;
              if (pcVar34 < pcStack_168) {
                if (*(uint64_t *)pcVar28 == *(uint64_t *)pcVar34) {
                  lVar18 = 0;
                  do {
                    if (pcStack_168 <= pcStack_210 + lVar18 + uVar20 + 0xd) {
                      pcVar29 = pcStack_210 + lVar18 + uVar20 + 0xd;
                      pcVar21 = pcStack_248 + lVar18;
                      goto LAB_7fffa47e766c;
                    }
                    uVar40 = *(uint64_t *)(pcStack_210 + lVar18 + uVar20 + 0xd);
                    pcVar21 = pcStack_248 + lVar18;
                    lVar18 = lVar18 + 8;
                  } while (*(uint64_t *)pcVar21 == uVar40);
                  uVar27 = 0;
                  for (uVar40 = uVar40 ^ *(uint64_t *)pcVar21; (uVar40 & 1) == 0;
                      uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar40 = (uint64_t)(uVar27 >> 3) + lVar18;
                }
                else {
                  uVar27 = 0;
                  for (uVar40 = *(uint64_t *)pcVar28 ^ *(uint64_t *)pcVar34; (uVar40 & 1) == 0;
                      uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar40 = (uint64_t)(uVar27 >> 3);
                }
              }
              else {
LAB_7fffa47e766c:
                if ((pcVar29 < pcStack_1b0) &&
                   (pcVar33 = (code *)(uint64_t)*(uint32_t *)pcVar21,
                   *(uint32_t *)pcVar21 == *(uint32_t *)pcVar29)) {
                  pcVar21 = pcVar21 + 4;
                  pcVar29 = pcVar29 + 4;
                }
                if ((pcVar29 < pcStack_190) &&
                   (pcVar33 = (code *)(uint64_t)*(uint16_t *)pcVar21,
                   *(uint16_t *)pcVar21 == *(uint16_t *)pcVar29)) {
                  pcVar29 = pcVar29 + 2;
                  pcVar21 = pcVar21 + 2;
                }
                if (pcVar29 < pcVar36) {
                  pcVar29 = pcVar29 + (*pcVar21 == *pcVar29);
                }
                uVar40 = (int64_t)pcVar29 - (int64_t)pcVar34;
              }
              uVar20 = uVar20 + uVar40;
            }
            pcVar21 = (code *)(uVar20 + 4);
            param_1 = pcStack_228;
          }
          else {
            pcVar21 = (code *)0x0;
          }
        }
      }
      pcStack_250 = (code *)0x3b9ac9ff;
      pcStack_220 = param_4;
      if (uStack_1fc < 5) {
        if (uStack_cc < 5) {
          lVar18 = (((int64_t)param_1 << 9 | (uint64_t)param_1 >> 0x37) ^
                    ((int64_t)param_1 << 2 | (uint64_t)param_1 >> 0x3e) ^ (uint64_t)param_1 ^
                   0xffffffffa21ec8f9) * -0xfffffffffffff;
          FUN_7fffa561dc20(&pcStack_250,pcStack_210,(int64_t)pcVar36 * -0x7fffffffffffffff);
          pcVar33 = (code *)(lVar18 * -0xfffffffffffff + -0xd26bbe7d);
          plVar35 = plStack_1c8;
        }
        else if (uStack_e4 < 6) {
          FUN_7fffa55f1500(&pcStack_250);
          uVar30 = (uVar30 << 0x2a | uVar30 >> 0x16) ^ (uVar30 << 0x2b | uVar30 >> 0x15) ^ uVar30;
          uVar30 = (uVar30 << 0x16 | uVar30 >> 0x2a) ^ (uVar30 << 0x14 | uVar30 >> 0x2c) ^ uVar30;
          uVar30 = (uVar30 << 0x2c | uVar30 >> 0x14) ^ (uVar30 << 0x28 | uVar30 >> 0x18) ^ uVar30;
          uVar30 = (uVar30 << 0x10 | uVar30 >> 0x30) ^ (uVar30 << 0x18 | uVar30 >> 0x28) ^ uVar30;
          uVar30 = (uVar30 << 0x30 | uVar30 >> 0x10) ^ (uVar30 << 0x20 | uVar30 >> 0x20) ^ uVar30;
          pcVar33 = (code *)(uVar30 << 0x20 | uVar30 >> 0x20);
        }
        else {
          pcVar28 = FUN_7fffa5175280;
          FUN_7fffa5175280((uint64_t)param_1 ^ 0x7ffe03c0,0x17fe9ff7);
          pcVar33 = (code *)((int64_t)pcVar28 * 0x55aaaaaaaaaaaaab + 0x7e55555548961e29);
          param_4 = pcStack_220;
          pcVar28 = pcStack_100;
        }
      }
      else if (uStack_120 < 6) {
        if (uStack_e4 < 5) {
          pcVar36 = pcVar36 + 0x41ec0db;
          pcStack_f8 = FUN_7fffa547a400;
          FUN_7fffa547a400(&pcStack_250,pcStack_210,pcVar36,
                           (int64_t)(param_1 + -0x5c4bfbec) * 0x80 |
                           (uint64_t)(param_1 + -0x5c4bfbec) >> 0x39);
          uVar30 = ((int64_t)pcVar36 << 0x1c | (uint64_t)pcVar36 >> 0x24) ^
                   ((int64_t)pcVar36 << 0x3e | (uint64_t)pcVar36 >> 2) ^ (uint64_t)pcVar36;
          uVar30 = (uVar30 << 0x38 | uVar30 >> 8) ^ (uVar30 << 0x3c | uVar30 >> 4) ^ uVar30;
          uVar30 = (uVar30 << 0x30 | uVar30 >> 0x10) ^ (uVar30 << 0x38 | uVar30 >> 8) ^ uVar30;
          uVar30 = (uVar30 << 0x20 | uVar30 >> 0x20) ^ (uVar30 << 0x30 | uVar30 >> 0x10) ^ uVar30;
          pcVar33 = (code *)((uVar30 << 0x20 | uVar30 >> 0x20) * 0xffc00ffc00ffc01);
          param_1 = pcVar16;
          pcVar36 = pcVar31;
          pcVar28 = pcVar15;
        }
        else {
          if (uStack_e4 != 5) {
            pcStack_198 = (code *)0xc0000010;
            pcStack_238 = (code *)0x919f23d1;
            uVar38 = (uint32_t)bVar26;
            uVar27 = (uint32_t)~uStack_b8 & uVar38;
            uVar20 = (uint64_t)uVar38;
            uVar30 = ((int64_t)param_1 << 0x13 | (uint64_t)param_1 >> 0x2d) ^ (uint64_t)param_1;
            uVar23 = (int64_t)param_1 << 0x1d | (uint64_t)param_1 >> 0x23;
            pcStack_f8 = FUN_7fffa5281120;
            pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,uVar27);
            uVar40 = (uVar23 | uVar30 | uVar20) ^ ~uStack_b8;
            pcStack_178 = (code *)(uVar40 * -0x77656b40);
            lStack_b0 = uVar40 * 0x77656b40;
            uVar30 = FUN_7fffa5281120(((uint64_t)((uint32_t)~uVar30 & (uint32_t)uVar23 & uVar27) +
                                      (((uVar23 | ~uVar30) ^ uVar20) & uStack_b8)) * 0x844294e,
                                      pcStack_210,&pcStack_250,
                                      (~uVar23 & uVar30 & ~(uVar20 | uStack_b8)) * 0x844294e);
            uVar30 = ~uVar30;
            uVar20 = uVar30 >> 0x33;
            param_1 = pcVar16;
            pcVar36 = pcVar31;
            pcVar28 = pcVar15;
            goto LAB_7fffa47e81aa;
          }
          uVar30 = (int64_t)pcStack_210 * 0x1000000000001;
          uVar20 = ((int64_t)pcVar36 << 0x37 | (uint64_t)pcVar36 >> 9) ^
                   ((int64_t)pcVar36 << 0x15 | (uint64_t)pcVar36 >> 0x2b) ^ (uint64_t)pcVar36;
          FUN_7fffa5609610(param_1,uVar20 << 0xd | uVar20 >> 0x33);
          uVar30 = uVar30 >> 1 ^ uVar30;
          uVar30 = uVar30 >> 2 ^ uVar30;
          uVar30 = uVar30 >> 4 ^ uVar30;
          uVar30 = uVar30 >> 8 ^ uVar30;
          uVar30 = uVar30 >> 0x10 ^ uVar30;
          pcVar33 = (code *)(uVar30 >> 0x20 ^ uVar30);
          plVar35 = plStack_1c8;
        }
      }
      else if (uStack_cc < 5) {
        pcVar31 = param_1 + 0x3adc4736;
        FUN_7fffa5251f50(pcVar36,0x3a99cdd3,
                         ((int64_t)register0x00000020 - 0xd932cf3bU << 0x35 ^
                         (int64_t)register0x00000020 - 0xd932cf3bU) + 0x1a0bcdf1,
                         (((int64_t)pcVar31 * 0x20000000 | (uint64_t)pcVar31 >> 0x23) ^
                          ((int64_t)pcVar31 * 0x80 | (uint64_t)pcVar31 >> 0x39) ^
                         ((int64_t)pcVar31 << 0x24 | (uint64_t)pcVar31 >> 0x1c)) - 0x3b0fc4f5);
        pcVar33 = pcVar33 + -0xf40f6131;
        plVar35 = plStack_1c8;
      }
      else if (uStack_e4 < 6) {
        lVar18 = FUN_7fffa5696410(pcStack_210,pcVar36,FUN_7fffa5696410,
                                  ((int64_t)&pcStack_250 * 0x11000000 ^
                                  (int64_t)&pcStack_250 * 0x11) * -0x1fffffffff);
        uVar30 = lVar18 * 0x1e22c07081a64d69;
        uVar30 = (lVar18 * 0x1603840d326b4800 | uVar30 >> 0x35) ^
                 (lVar18 * 0x3840d326b4800000 | uVar30 >> 0x29) ^ uVar30;
        uVar30 = (uVar30 << 0x16 | uVar30 >> 0x2a) ^ (uVar30 << 0x2e | uVar30 >> 0x12) ^ uVar30;
        uVar30 = (uVar30 << 0x2c | uVar30 >> 0x14) ^ (uVar30 << 0x1c | uVar30 >> 0x24) ^ uVar30;
        uVar20 = (uVar30 << 0x18 | uVar30 >> 0x28) ^ (uVar30 << 0x38 | uVar30 >> 8);
        param_1 = pcStack_228;
LAB_7fffa47e81aa:
        pcVar33 = (code *)(uVar20 ^ uVar30);
      }
      else {
        uVar27 = (uStack_cc | 1) * -0x1044990b + 0x32d7993e;
        uVar30 = (uint64_t)param_1 >> 5 ^ (uint64_t)param_1;
        uVar30 = uVar30 << 0x3d | uVar30 >> 3;
        (*(code *)((int64_t)(int)((uStack_cc | 1) * -0x2348) + 0x7fffa52d3ae8))(pcVar36,0xd1ee8e90)
        ;
        pcVar33 = (code *)(uVar30 - (uVar27 * 0x10000 | uVar27 >> 0x10));
        param_4 = pcStack_220;
      }
      pcVar31 = pcVar21;
      if (pcVar21 < pcVar33) {
        pcVar31 = pcVar33;
      }
      if (pcVar31 < (code *)0x4) {
        *(uint32_t *)(param_1 + 300) =
             (uint32_t)(0x8ff < (uint64_t)((int64_t)pcStack_210 - (int64_t)param_4));
        pcStack_210 = pcStack_210 +
                      ((uint64_t)((int64_t)pcStack_210 - (int64_t)param_4) >> 8) + 1;
      }
      else {
        if (pcVar21 < pcVar33) {
          pcStack_188 = pcStack_210;
        }
        else {
          pcStack_250 = (code *)0x1;
        }
        pcVar33 = pcStack_188;
        if (pcStack_210 < pcVar1) {
          pcStack_f8 = pcStack_210 + 0xd;
          pcVar16 = pcVar31;
          pcVar15 = pcStack_210;
          do {
            pcVar34 = pcStack_100;
            plVar13 = plStack_1c8;
            pcVar29 = pcStack_228;
            pcVar21 = pcStack_240;
            pcVar33 = pcVar15 + 1;
            uStack_148 = uStack_148 & 0xffffffff;
            uVar27 = (int)uStack_a8 + 1;
            uStack_a8 = (uint64_t)uVar27;
            if (pcStack_250 == (code *)0x0) {
              pcStack_250 = (code *)0x0;
LAB_7fffa47e83b2:
              pcVar22 = pcStack_250;
            }
            else {
              uVar38 = *(uint32_t *)(param_1 + 0x1c);
              uVar32 = uVar27 - uStack_254;
              pcVar31 = pcStack_150;
              if (uVar32 < (uint32_t)uStack_218) {
                pcVar31 = pcStack_a0;
              }
              uVar39 = uVar27 - uStack_11c;
              if (uVar27 - uVar38 <= uStack_11c) {
                uVar39 = uVar38;
              }
              if (*(uint32_t *)(param_1 + 0x28) != 0) {
                uVar39 = uVar38;
              }
              pcVar22 = pcStack_250;
              pcStack_210 = pcVar15;
              pcVar28 = pcStack_100;
              pcStack_198 = pcStack_250;
              if (uStack_254 <= uVar27 - uVar39) {
                if (2 < iStack_130 - uVar32) {
                  if (*(uint32_t *)pcVar33 == *(uint32_t *)(pcVar31 + uVar32)) {
                    pcStack_238 = pcVar15 + 5;
                    pcVar36 = pcVar31 + uVar32 + 4;
                    pcStack_140 = pcStack_240;
                    if (uVar32 < (uint32_t)uStack_218) {
                      pcStack_140 = pcStack_1d8;
                    }
                    pcVar14 = pcVar15 + (int64_t)(pcStack_140 + (5 - (int64_t)pcVar36));
                    if (pcStack_240 <= pcVar15 + (int64_t)(pcStack_140 + (5 - (int64_t)pcVar36)))
                    {
                      pcVar14 = pcStack_240;
                    }
                    pcVar24 = pcStack_238;
                    pcVar25 = pcVar36;
                    if (pcStack_238 < pcVar14 + -7) {
                      if (*(uint64_t *)pcVar36 == *(uint64_t *)pcStack_238) {
                        lVar18 = 0;
                        do {
                          pcVar24 = pcStack_f8 + lVar18;
                          plVar35 = plStack_1c8;
                          if (pcVar14 + -7 <= pcVar24) {
                            pcVar25 = pcVar31 + lVar18 + uStack_148 + 0xc;
                            goto LAB_7fffa47e91bc;
                          }
                          lVar11 = lVar18 + uStack_148 + 0xc;
                          lVar12 = lVar18 + 0xd;
                          lVar18 = lVar18 + 8;
                        } while (*(uint64_t *)(pcVar31 + lVar11) ==
                                 *(uint64_t *)(pcVar15 + lVar12));
                        uVar27 = 0;
                        for (uVar30 = *(uint64_t *)(pcVar31 + lVar11) ^
                                      *(uint64_t *)(pcVar15 + lVar12); (uVar30 & 1) == 0;
                            uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                          uVar27 = uVar27 + 1;
                        }
                        uVar30 = (uint64_t)(uVar27 >> 3) + lVar18;
                      }
                      else {
                        uVar27 = 0;
                        for (uVar30 = *(uint64_t *)pcStack_238 ^ *(uint64_t *)pcVar36;
                            (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                          uVar27 = uVar27 + 1;
                        }
                        uVar30 = (uint64_t)(uVar27 >> 3);
                      }
                    }
                    else {
LAB_7fffa47e91bc:
                      if ((pcVar24 < pcVar14 + -3) && (*(uint32_t *)pcVar25 == *(uint32_t *)pcVar24)) {
                        pcVar25 = pcVar25 + 4;
                        pcVar24 = pcVar24 + 4;
                      }
                      if ((pcVar24 < pcVar14 + -1) && (*(uint16_t *)pcVar25 == *(uint16_t *)pcVar24)) {
                        pcVar25 = pcVar25 + 2;
                        pcVar24 = pcVar24 + 2;
                      }
                      if (pcVar24 < pcVar14) {
                        pcVar24 = pcVar24 + (*pcVar25 == *pcVar24);
                      }
                      uVar30 = (int64_t)pcVar24 - (int64_t)pcStack_238;
                    }
                    if (pcVar36 + uVar30 == pcStack_140) {
                      pcVar15 = pcStack_238 + uVar30;
                      pcVar36 = pcVar15;
                      pcVar31 = pcStack_100;
                      if (pcVar15 < pcStack_168) {
                        if (*(uint64_t *)pcStack_100 == *(uint64_t *)pcVar15) {
                          lVar18 = 0;
                          do {
                            pcVar36 = pcStack_f8 + lVar18 + uVar30;
                            if (pcStack_168 <= pcVar36) {
                              pcVar31 = pcStack_248 + lVar18;
                              goto code_r0x7fffa47e9337;
                            }
                            pcVar31 = pcStack_248 + lVar18;
                            lVar18 = lVar18 + 8;
                          } while (*(uint64_t *)pcVar31 == *(uint64_t *)pcVar36);
                          uVar27 = 0;
                          for (uVar20 = *(uint64_t *)pcVar31 ^ *(uint64_t *)pcVar36;
                              (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                            uVar27 = uVar27 + 1;
                          }
                          uVar20 = (uint64_t)(uVar27 >> 3) + lVar18;
                        }
                        else {
                          uVar20 = 0;
                          for (uVar40 = *(uint64_t *)pcVar15 ^ *(uint64_t *)pcStack_100;
                              (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                            uVar20 = uVar20 + 1;
                          }
                          uVar20 = uVar20 >> 3 & 0x1fffffff;
                        }
                      }
                      else {
code_r0x7fffa47e9337:
                        if ((pcVar36 < pcStack_1b0) && (*(uint32_t *)pcVar31 == *(uint32_t *)pcVar36)) {
                          pcVar31 = pcVar31 + 4;
                          pcVar36 = pcVar36 + 4;
                        }
                        if ((pcVar36 < pcStack_190) && (*(uint16_t *)pcVar31 == *(uint16_t *)pcVar36)) {
                          pcVar31 = pcVar31 + 2;
                          pcVar36 = pcVar36 + 2;
                        }
                        if (pcVar36 < pcStack_240) {
                          pcVar36 = pcVar36 + (*pcVar31 == *pcVar36);
                        }
                        uVar20 = (int64_t)pcVar36 - (int64_t)pcVar15;
                      }
                      uVar30 = uVar30 + uVar20;
                    }
                    param_1 = pcStack_228;
                    pcVar36 = pcStack_240;
                    if (uVar30 < 0xfffffffffffffffc) {
                      uVar27 = 0x1f;
                      if ((uint32_t)pcStack_250 != 0) {
                        for (; (uint32_t)pcStack_250 >> uVar27 == 0; uVar27 = uVar27 - 1) {
                        }
                      }
                      if ((int)((int)pcVar16 * 3 + (uVar27 ^ 0x1f) + -0x1e) <
                          (int)(code *)(uVar30 + 4) * 3) {
                        pcVar22 = (code *)0x1;
                        pcVar16 = (code *)(uVar30 + 4);
                        pcStack_188 = pcVar33;
                      }
                      goto LAB_7fffa47e83b5;
                    }
                  }
                }
                goto LAB_7fffa47e83b2;
              }
            }
LAB_7fffa47e83b5:
            pcStack_250 = (code *)0x3b9ac9ff;
            if (uStack_120 < 5) {
              if (uStack_e4 < 5) {
                uVar30 = ((int64_t)param_1 << 2 | (uint64_t)param_1 >> 0x3e) ^
                         ((int64_t)param_1 << 9 | (uint64_t)param_1 >> 0x37) ^ (uint64_t)param_1
                         ^ 0xffffffffa21ec8f9;
                lVar18 = uVar30 - (uVar30 << 0x34);
                FUN_7fffa561dc20(&pcStack_250,pcVar33,(int64_t)pcVar36 * -0x7fffffffffffffff);
                pcVar31 = (code *)(lVar18 * -0xfffffffffffff + -0xd26bbe7d);
                pcVar28 = pcStack_100;
              }
              else if (uStack_e4 == 5) {
                pcVar31 = param_1;
                pcStack_210 = pcVar22;
                FUN_7fffa55f1500(&pcStack_250);
                uVar30 = ((int64_t)pcVar31 << 0x2a | (uint64_t)pcVar31 >> 0x16) ^
                         ((int64_t)pcVar31 << 0x2b | (uint64_t)pcVar31 >> 0x15) ^
                         (uint64_t)pcVar31;
                uVar30 = (uVar30 << 0x14 | uVar30 >> 0x2c) ^ (uVar30 << 0x16 | uVar30 >> 0x2a) ^
                         uVar30;
                uVar30 = (uVar30 << 0x28 | uVar30 >> 0x18) ^ (uVar30 << 0x2c | uVar30 >> 0x14) ^
                         uVar30;
                uVar30 = (uVar30 << 0x10 | uVar30 >> 0x30) ^ (uVar30 << 0x18 | uVar30 >> 0x28) ^
                         uVar30;
                uVar30 = (uVar30 << 0x30 | uVar30 >> 0x10) ^ (uVar30 << 0x20 | uVar30 >> 0x20) ^
                         uVar30;
                pcVar31 = (code *)(uVar30 << 0x20 | uVar30 >> 0x20);
              }
              else {
                pcVar31 = param_1;
                FUN_7fffa5175280((uint64_t)param_1 ^ 0x7ffe03c0,0x17fe9ff7);
                pcVar31 = (code *)((int64_t)pcVar31 * 0x55aaaaaaaaaaaaab + 0x7e55555548961e29);
              }
            }
            else if (uStack_120 == 5) {
              if (uStack_e4 < 5) {
                pcVar28 = pcVar36 + 0x41ec0db;
                FUN_7fffa547a400(&pcStack_250,pcVar33,pcVar28,
                                 (int64_t)(param_1 + -0x5c4bfbec) * 0x80 |
                                 (uint64_t)(param_1 + -0x5c4bfbec) >> 0x39);
                uVar30 = ((int64_t)pcVar28 << 0x1c | (uint64_t)pcVar28 >> 0x24) ^
                         ((int64_t)pcVar28 << 0x3e | (uint64_t)pcVar28 >> 2) ^ (uint64_t)pcVar28;
                uVar30 = (uVar30 << 0x38 | uVar30 >> 8) ^ (uVar30 << 0x3c | uVar30 >> 4) ^ uVar30;
                uVar30 = (uVar30 << 0x38 | uVar30 >> 8) ^ (uVar30 << 0x30 | uVar30 >> 0x10) ^ uVar30
                ;
                uVar30 = (uVar30 << 0x20 | uVar30 >> 0x20) ^ (uVar30 << 0x30 | uVar30 >> 0x10) ^
                         uVar30;
                pcVar31 = (code *)((uVar30 << 0x20 | uVar30 >> 0x20) * 0xffc00ffc00ffc01);
                pcVar28 = pcStack_100;
              }
              else if (uStack_e4 == 5) {
                uVar30 = (int64_t)pcVar33 * 0x1000000000001;
                uVar20 = ((int64_t)pcVar36 << 0x15 | (uint64_t)pcVar36 >> 0x2b) ^
                         ((int64_t)pcVar36 << 0x37 | (uint64_t)pcVar36 >> 9) ^ (uint64_t)pcVar36;
                FUN_7fffa5609610(param_1,uVar20 << 0xd | uVar20 >> 0x33,uVar30,
                                 &IMAGE_DOS_HEADER_7fffa4770000);
                uVar30 = uVar30 >> 1 ^ uVar30;
                uVar30 = uVar30 >> 2 ^ uVar30;
                uVar30 = uVar30 >> 4 ^ uVar30;
                uVar30 = uVar30 >> 8 ^ uVar30;
                uVar30 = uVar30 >> 0x10 ^ uVar30;
                pcVar31 = (code *)(uVar30 >> 0x20 ^ uVar30);
              }
              else {
                bVar6 = (uint8_t)uStack_cc & 0x1f;
                uVar30 = (*(code *)(&UNK_7fffa52905bc +
                                   (int)(0xffc2d93fU >> bVar6 | -0x3d26c1 << 0x20 - bVar6)))
                                   (&UNK_7fffa52905bc +
                                    (int)(0xffc2d93fU >> bVar6 | -0x3d26c1 << 0x20 - bVar6),pcVar33,
                                    &pcStack_250,param_1);
                pcVar31 = (code *)(~uVar30 >> 0x33 ^ ~uVar30);
              }
            }
            else {
              pcStack_198 = pcVar16;
              if (uStack_e4 < 5) {
                uStack_230 = (uint64_t)uStack_12c;
                pcStack_140 = (code *)~uStack_230;
                lStack_138 = (uStack_1c0 ^ (uint64_t)pcStack_140) * -0xc00000fd;
                uStack_1b8 = 0xffffffffd3cce749;
                lStack_b0 = -0x55e9c94a;
                param_1 = param_1 + 0x3adc4736;
                uStack_110 = 0x990d006;
                pcStack_178 = FUN_7fffa5251f50;
                uStack_c8 = ((int64_t)param_1 * 0x20000000 | (uint64_t)param_1 >> 0x23) ^
                            ((int64_t)param_1 * 0x80 | (uint64_t)param_1 >> 0x39);
                uVar20 = ~(uint64_t)pcStack_e0 & uStack_f0;
                uStack_170 = ~uStack_f0;
                uStack_1e8 = (uint64_t)pcStack_e0 | uStack_170;
                uVar40 = 0xd932ccea - (int64_t)&pcStack_250;
                lStack_d8 = (uVar40 & uVar20) * -0x3eba451c;
                lStack_1f8 = (uVar40 & (~(uint64_t)pcStack_e0 | uStack_f0)) * -0x161fa598;
                lStack_1f0 = (((uint64_t)pcStack_140 | uVar40) & uStack_1c0) * -0x5f051093;
                pcStack_238 = (code *)0x4397cbd1;
                uVar30 = (int64_t)register0x00000020 - 0xd932cf3b;
                uStack_1a8 = (int64_t)param_1 << 0x24 | (uint64_t)param_1 >> 0x1c;
                uStack_128 = (uint64_t)pcStack_e0 ^ uStack_f0;
                uStack_158 = 0x6289d9a0;
                lStack_160 = (uVar20 & uVar30) * 0xc20aee79;
                lVar18 = (uVar40 & (uint64_t)pcStack_140 & uStack_1c0) + ~uStack_1c0;
                pcStack_210 = pcVar22;
                FUN_7fffa5251f50(pcStack_240,(uVar30 << 0x35 ^ uVar30) + 0x1a0bcdf1 >> 0x25,
                                 (uint64_t)pcStack_140 & uStack_1c0,
                                 (uStack_c8 ^ uStack_1a8) - 0x3b0fc4f5);
                pcVar31 = (code *)(lVar18 + -0xf40f6131);
                param_1 = pcVar29;
                plVar35 = plVar13;
                pcVar36 = pcVar21;
                pcVar28 = pcVar34;
              }
              else {
                if (uStack_cc < 6) {
                  pcStack_210 = pcVar22;
                  lVar18 = FUN_7fffa5696410((uint64_t)uStack_19c,pcVar36,
                                            (((int64_t)&pcStack_250 * 0x10 ^ (uint64_t)pcStack_180
                                             ) & ~(uint64_t)uStack_19c) * -0xf20c8dc,
                                            ((int64_t)&pcStack_250 * 0x11 ^
                                            (int64_t)&pcStack_250 * 0x11000000) * -0x1fffffffff);
                  uVar30 = lVar18 * 0x1e22c07081a64d69;
                  uVar30 = (lVar18 * 0x1603840d326b4800 | uVar30 >> 0x35) ^
                           (lVar18 * 0x3840d326b4800000 | uVar30 >> 0x29) ^ uVar30;
                  uVar30 = (uVar30 << 0x16 | uVar30 >> 0x2a) ^ (uVar30 << 0x2e | uVar30 >> 0x12) ^
                           uVar30;
                  uVar30 = (uVar30 << 0x2c | uVar30 >> 0x14) ^ (uVar30 << 0x1c | uVar30 >> 0x24) ^
                           uVar30;
                  pcVar31 = (code *)((uVar30 << 0x38 | uVar30 >> 8) ^
                                     (uVar30 << 0x18 | uVar30 >> 0x28) ^ uVar30);
                  param_1 = pcVar29;
                  pcVar28 = pcVar34;
                }
                else {
                  uVar30 = (uint64_t)param_1 >> 5 ^ (uint64_t)param_1;
                  uVar20 = uVar30 << 0x3d | uVar30 >> 3;
                  uVar40 = ((int64_t)&pcStack_250 << 0x27 | (uint64_t)&pcStack_250 >> 0x19) ^
                           ((int64_t)&pcStack_250 * 0x8000000 | (uint64_t)&pcStack_250 >> 0x25) ^
                           (uint64_t)&pcStack_250;
                  auVar41._8_4_ = (int)uVar40;
                  auVar41._0_8_ = uVar40;
                  auVar41._12_4_ = (int)(uVar40 >> 0x20);
                  auVar7._8_4_ = 0xffffffff;
                  auVar7._0_8_ = 0xffffffffffffffff;
                  auVar7._12_4_ = 0xffffffff;
                  pcStack_210 = pcVar22;
                  FUN_7fffa52c43f0(((SUB168(auVar41 ^ auVar7,0) >> 0x20) * 0xa38cffbb << 0x20) +
                                   (uint64_t)SUB164(auVar41 ^ auVar7,0) * 0xa38cffbb ^
                                   0xffffffffffffffff,
                                   (~uVar30 & uVar17) * -0x17caaf7d +
                                   (uVar30 ^ uVar17) * 0x17caaf7d + (~uVar17 & uVar30) * -0xe9b93e0d
                                   + (~uVar30 | uVar17) * -0xd1ee8e90);
                  pcVar31 = (code *)(uVar20 - 0x69f1c0f7);
                }
                pcVar22 = pcStack_210;
                pcVar16 = pcStack_198;
              }
            }
            param_4 = pcStack_220;
            if (pcVar31 < (code *)0x4) {
LAB_7fffa47e93e4:
              pcVar33 = pcStack_188;
              pcStack_250 = pcVar22;
              pcVar31 = pcVar16;
              break;
            }
            iVar37 = 0x1f;
            if ((uint32_t)pcStack_250 != 0) {
              for (; (uint32_t)pcStack_250 >> iVar37 == 0; iVar37 = iVar37 + -1) {
              }
            }
            uVar27 = 0x1f;
            if ((uint32_t)pcVar22 != 0) {
              for (; (uint32_t)pcVar22 >> uVar27 == 0; uVar27 = uVar27 - 1) {
              }
            }
            if ((int)pcVar31 * 4 - iVar37 <= (int)((uVar27 ^ 0x1f) + (int)pcVar16 * 4 + -0x1b))
            goto LAB_7fffa47e93e4;
            pcStack_f8 = pcStack_f8 + 1;
            uStack_148 = (uint64_t)((int)uStack_148 + 1);
            pcVar16 = pcVar31;
            pcVar15 = pcVar33;
            pcStack_188 = pcVar33;
          } while (pcVar33 < pcVar1);
        }
        uVar27 = uStack_254;
        if ((code *)0x3 < pcStack_250) {
          pcVar15 = pcStack_150;
          pcVar16 = pcVar28;
          if ((uint32_t)(pcVar33 + (3 - (int64_t)(pcStack_150 + (int64_t)pcStack_250))) <
              (uint32_t)uStack_218) {
            pcVar15 = pcStack_a0;
            pcVar16 = pcStack_108;
          }
          uVar30 = (uint64_t)(pcVar33 + (3 - (int64_t)(pcStack_150 + (int64_t)pcStack_250))) &
                   0xffffffff;
          if (pcVar16 < pcVar15 + uVar30 && param_4 < pcVar33) {
            pcVar33 = pcVar33 + -1;
            pcVar15 = pcVar15 + uVar30;
            do {
              pcVar15 = pcVar15 + -1;
              if (*pcVar33 != *pcVar15) break;
              bVar26 = param_4 < pcVar33;
              pcVar31 = pcVar31 + 1;
              pcVar33 = pcVar33 + -1;
            } while (bVar26 && pcVar16 < pcVar15);
            pcVar33 = pcVar33 + 1;
          }
          uVar27 = (int)pcStack_250 - 3;
          uStack_bc = uStack_254;
        }
        uStack_254 = uVar27;
        uVar30 = (int64_t)pcVar33 - (int64_t)param_4;
        pcVar16 = (code *)plVar35[3];
        if (pcStack_1e0 < pcVar33) {
          pcVar15 = pcVar16;
          pcVar21 = param_4;
          if (param_4 <= pcStack_1e0) {
            pcVar15 = pcVar16 + ((int64_t)pcStack_1e0 - (int64_t)param_4);
            uVar20 = *(uint64_t *)(param_4 + 8);
            *(uint64_t *)pcVar16 = *(uint64_t *)param_4;
            *(uint64_t *)(pcVar16 + 8) = uVar20;
            pcVar21 = pcStack_1e0;
            if (0x10 < (int64_t)pcStack_1e0 - (int64_t)param_4) {
              pcVar16 = pcVar16 + 0x30;
              while( true ) {
                uVar20 = *(uint64_t *)(param_4 + 0x18);
                *(uint64_t *)(pcVar16 + -0x20) = *(uint64_t *)(param_4 + 0x10);
                *(uint64_t *)(pcVar16 + -0x18) = uVar20;
                uVar20 = *(uint64_t *)(param_4 + 0x28);
                *(uint64_t *)(pcVar16 + -0x10) = *(uint64_t *)(param_4 + 0x20);
                *(uint64_t *)(pcVar16 + -8) = uVar20;
                if (pcVar15 <= pcVar16) break;
                pcVar16 = pcVar16 + 0x20;
                param_4 = param_4 + 0x20;
              }
            }
          }
          if (pcVar21 < pcVar33) {
            uVar20 = (int64_t)pcVar33 - (int64_t)pcVar21;
            pcVar16 = pcVar15;
            if (!((uint64_t)((int64_t)pcVar15 - (int64_t)pcVar21) < 0x20 || uVar20 < 4)) {
              if (uVar20 < 0x20) {
                uVar40 = 0;
              }
              else {
                uVar40 = uVar20 & 0xffffffffffffffe0;
                lVar18 = 0;
                while( true ) {
                  uVar8 = *(uint64_t *)(pcVar21 + lVar18);
                  uVar9 = *(uint64_t *)(pcVar21 + lVar18 + 8);
                  uVar10 = *(uint64_t *)(pcVar21 + lVar18 + 0x10 + 8);
                  *(uint64_t *)(pcVar15 + lVar18 + 0x10) =
                       *(uint64_t *)(pcVar21 + lVar18 + 0x10);
                  *(uint64_t *)(pcVar15 + lVar18 + 0x10 + 8) = uVar10;
                  *(uint64_t *)(pcVar15 + lVar18) = uVar8;
                  *(uint64_t *)(pcVar15 + lVar18 + 8) = uVar9;
                  if (uVar40 - 0x20 == lVar18) break;
                  lVar18 = lVar18 + 0x20;
                }
                if (uVar20 == uVar40) goto LAB_7fffa47e9760;
                if ((uVar20 & 0x1c) == 0) {
                  pcVar16 = pcVar15 + uVar40;
                  pcVar21 = pcVar21 + uVar40;
                  goto LAB_7fffa47e96a7;
                }
              }
              uVar23 = uVar20 & 0xfffffffffffffffc;
              pcVar16 = pcVar15 + uVar23;
              do {
                *(uint32_t *)(pcVar15 + uVar40) = *(uint32_t *)(pcVar21 + uVar40);
                uVar40 = uVar40 + 4;
              } while (uVar23 != uVar40);
              if (uVar20 == uVar23) goto LAB_7fffa47e9760;
              pcVar21 = pcVar21 + uVar23;
            }
LAB_7fffa47e96a7:
            pcVar15 = pcVar21;
            for (uVar20 = (uint64_t)((int)pcVar33 - (int)pcVar21 & 7); uVar20 != 0;
                uVar20 = uVar20 - 1) {
              cVar2 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              *pcVar16 = cVar2;
              pcVar16 = pcVar16 + 1;
            }
            if ((uint64_t)((int64_t)pcVar21 - (int64_t)pcVar33) < 0xfffffffffffffff9) {
              lVar18 = 0;
              while( true ) {
                pcVar16[lVar18] = pcVar15[lVar18];
                pcVar16[lVar18 + 1] = pcVar15[lVar18 + 1];
                pcVar16[lVar18 + 2] = pcVar15[lVar18 + 2];
                pcVar16[lVar18 + 3] = pcVar15[lVar18 + 3];
                pcVar16[lVar18 + 4] = pcVar15[lVar18 + 4];
                pcVar16[lVar18 + 5] = pcVar15[lVar18 + 5];
                pcVar16[lVar18 + 6] = pcVar15[lVar18 + 6];
                pcVar16[lVar18 + 7] = pcVar15[lVar18 + 7];
                if (pcVar15 + lVar18 + 8 == pcVar33) break;
                lVar18 = lVar18 + 8;
              }
            }
          }
LAB_7fffa47e9760:
          plVar35[3] = plVar35[3] + uVar30;
          lVar18 = plVar35[1];
          if (0xffff < uVar30) {
            *(uint32_t *)(plVar35 + 9) = 1;
            *(int *)((int64_t)plVar35 + 0x4c) = (int)((uint64_t)(lVar18 - *plVar35) >> 3);
          }
        }
        else {
          uVar20 = *(uint64_t *)(param_4 + 8);
          *(uint64_t *)pcVar16 = *(uint64_t *)param_4;
          *(uint64_t *)(pcVar16 + 8) = uVar20;
          if (0x10 < uVar30) {
            uVar20 = *(uint64_t *)(param_4 + 0x18);
            lVar18 = plVar35[3];
            *(uint64_t *)(lVar18 + 0x10) = *(uint64_t *)(param_4 + 0x10);
            *(uint64_t *)(lVar18 + 0x18) = uVar20;
            if (0x20 < (int64_t)uVar30) {
              uVar20 = lVar18 + 0x40;
              param_4 = param_4 + 0x30;
              while( true ) {
                uVar40 = *(uint64_t *)(param_4 + -8);
                *(uint64_t *)(uVar20 - 0x20) = *(uint64_t *)(param_4 + -0x10);
                *(uint64_t *)(uVar20 - 0x18) = uVar40;
                uVar40 = *(uint64_t *)(param_4 + 8);
                *(uint64_t *)(uVar20 - 0x10) = *(uint64_t *)param_4;
                *(uint64_t *)(uVar20 - 8) = uVar40;
                if (lVar18 + uVar30 <= uVar20) break;
                uVar20 = uVar20 + 0x20;
                param_4 = param_4 + 0x20;
              }
            }
            goto LAB_7fffa47e9760;
          }
          lVar18 = plVar35[1];
          plVar35[3] = plVar35[3] + uVar30;
        }
        *(short *)(lVar18 + 4) = (short)uVar30;
        *(int *)plVar35[1] = (int)pcStack_250;
        if ((code *)0xffff < pcVar31 + -3) {
          *(uint32_t *)(plVar35 + 9) = 2;
          *(int *)((int64_t)plVar35 + 0x4c) = (int)((uint64_t)(plVar35[1] - *plVar35) >> 3);
        }
        *(short *)(plVar35[1] + 6) = (short)(pcVar31 + -3);
        plVar35[1] = plVar35[1] + 8;
        if (*(uint32_t *)(param_1 + 300) != 0) {
          uVar27 = *(uint32_t *)(param_1 + 0x2c);
          uVar30 = (uint64_t)uVar27;
          uVar38 = ((int)pcVar1 - (int)(pcStack_150 + uVar30)) + 1;
          if (7 < uVar38) {
            uVar38 = 8;
          }
          if (pcVar1 < pcStack_150 + uVar30) {
            uVar38 = 0;
          }
          if (uVar27 < uVar38 + uVar27) {
            uVar32 = *(uint32_t *)(param_1 + 0x34);
            uVar20 = *(uint64_t *)(param_1 + 0x60);
            do {
              if (uStack_120 < 6) {
                if (uStack_120 != 5) goto code_r0x7fffa47e9901;
                uVar40 = *(int64_t *)(pcStack_150 + uVar30) * -0x30e4432345000000;
LAB_7fffa47e98ed:
                uVar39 = (uint32_t)((uVar40 ^ uVar20) >> (0x38U - (char)uVar32 & 0x3f));
              }
              else {
                if (uStack_1fc == 6) {
                  uVar40 = *(int64_t *)(pcStack_150 + uVar30) * -0x30e4432340650000;
                  goto LAB_7fffa47e98ed;
                }
code_r0x7fffa47e9901:
                uVar39 = (*(int *)(pcStack_150 + uVar30) * -0x61c8864f ^ (uint32_t)uVar20) >>
                         (0x18U - (char)uVar32 & 0x1f);
              }
              *(uint32_t *)(pcStack_228 + (uint64_t)((uint32_t)uVar30 & 7) * 4 + 0x40) = uVar39;
              param_1 = pcStack_228;
              if ((uint64_t)(uVar38 + uVar27) - 1 == uVar30) break;
              uVar30 = uVar30 + 1;
            } while( true );
          }
          *(uint32_t *)(param_1 + 300) = 0;
          pcVar28 = pcStack_100;
        }
        param_4 = pcVar33 + (int64_t)pcVar31;
        if (pcVar1 < param_4) {
          pcStack_210 = param_4;
        }
        else {
          do {
            uVar32 = uStack_bc;
            uVar27 = *(uint32_t *)(param_1 + 0x1c);
            iVar37 = (int)param_4 - (int)pcStack_150;
            uVar38 = iVar37 - uVar32;
            pcVar28 = pcStack_150;
            if (uVar38 < (uint32_t)uStack_218) {
              pcVar28 = pcStack_a0;
            }
            uVar39 = iVar37 - uStack_11c;
            if (iVar37 - uVar27 <= uStack_11c) {
              uVar39 = uVar27;
            }
            if (*(uint32_t *)(param_1 + 0x28) != 0) {
              uVar39 = uVar27;
            }
            if (((iVar37 - uVar39 < uVar32) || (iStack_130 - uVar38 < 3)) ||
               (pcVar33 = pcVar28 + uVar38, *(uint32_t *)param_4 != *(uint32_t *)pcVar33)) {
              pcStack_210 = param_4;
              pcVar28 = pcStack_100;
              uStack_bc = uVar32;
              break;
            }
            pcVar31 = pcVar36;
            if (uVar38 < (uint32_t)uStack_218) {
              pcVar31 = pcStack_1d8;
            }
            pcVar15 = pcVar33 + 4;
            pcVar16 = param_4 + 4;
            pcVar21 = param_4 + (int64_t)(pcVar31 + (4 - (int64_t)pcVar15));
            if (pcVar36 <= param_4 + (int64_t)(pcVar31 + (4 - (int64_t)pcVar15))) {
              pcVar21 = pcVar36;
            }
            pcVar29 = pcVar16;
            pcVar34 = pcVar15;
            if (pcVar16 < pcVar21 + -7) {
              if (*(uint64_t *)pcVar15 == *(uint64_t *)pcVar16) {
                lVar18 = 0;
                do {
                  if (pcVar21 + -7 <= param_4 + lVar18 + 0xc) {
                    pcVar29 = param_4 + lVar18 + 0xc;
                    pcVar34 = pcVar33 + lVar18 + 0xc;
                    goto LAB_7fffa47e9b73;
                  }
                  uVar30 = *(uint64_t *)(param_4 + lVar18 + 0xc);
                  lVar11 = lVar18 + (uint64_t)uVar38 + 0xc;
                  lVar18 = lVar18 + 8;
                } while (*(uint64_t *)(pcVar28 + lVar11) == uVar30);
                uVar27 = 0;
                for (uVar30 = *(uint64_t *)(pcVar28 + lVar11) ^ uVar30; (uVar30 & 1) == 0;
                    uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                  uVar27 = uVar27 + 1;
                }
                uVar30 = (uint64_t)(uVar27 >> 3) + lVar18;
                param_1 = pcStack_228;
                pcVar36 = pcStack_240;
              }
              else {
                uVar27 = 0;
                for (uVar30 = *(uint64_t *)pcVar16 ^ *(uint64_t *)pcVar15; (uVar30 & 1) == 0;
                    uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                  uVar27 = uVar27 + 1;
                }
                uVar30 = (uint64_t)(uVar27 >> 3);
              }
            }
            else {
LAB_7fffa47e9b73:
              if ((pcVar29 < pcVar21 + -3) && (*(uint32_t *)pcVar34 == *(uint32_t *)pcVar29)) {
                pcVar29 = pcVar29 + 4;
                pcVar34 = pcVar34 + 4;
              }
              if ((pcVar29 < pcVar21 + -1) && (*(uint16_t *)pcVar34 == *(uint16_t *)pcVar29)) {
                pcVar34 = pcVar34 + 2;
                pcVar29 = pcVar29 + 2;
              }
              if (pcVar29 < pcVar21) {
                pcVar29 = pcVar29 + (*pcVar34 == *pcVar29);
              }
              uVar30 = (int64_t)pcVar29 - (int64_t)pcVar16;
              param_1 = pcStack_228;
              pcVar36 = pcStack_240;
            }
            if (pcVar15 + uVar30 == pcVar31) {
              pcVar16 = pcVar16 + uVar30;
              pcVar28 = pcVar16;
              pcVar33 = pcStack_100;
              if (pcVar16 < pcStack_168) {
                if (*(uint64_t *)pcStack_100 == *(uint64_t *)pcVar16) {
                  pcVar28 = param_4 + uVar30 + 0xc;
                  lVar18 = 8;
                  if (pcVar28 < pcStack_168) {
LAB_7fffa47e9d10:
                    if (*(uint64_t *)(pcStack_100 + lVar18) == *(uint64_t *)pcVar28)
                    goto code_r0x7fffa47e9d20;
                    uVar27 = 0;
                    for (uVar20 = *(uint64_t *)pcVar28 ^ *(uint64_t *)(pcStack_100 + lVar18);
                        (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                      uVar27 = uVar27 + 1;
                    }
                    uVar20 = (uint64_t)(uVar27 >> 3) + lVar18;
                    goto LAB_7fffa47e9dc0;
                  }
LAB_7fffa47e9d32:
                  pcVar33 = pcStack_100 + lVar18;
                  goto code_r0x7fffa47e9d37;
                }
                uVar27 = 0;
                for (uVar20 = *(uint64_t *)pcVar16 ^ *(uint64_t *)pcStack_100; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar27 = uVar27 + 1;
                }
                uVar20 = (uint64_t)(uVar27 >> 3);
              }
              else {
code_r0x7fffa47e9d37:
                if ((pcVar28 < pcStack_1b0) && (*(uint32_t *)pcVar33 == *(uint32_t *)pcVar28)) {
                  pcVar33 = pcVar33 + 4;
                  pcVar28 = pcVar28 + 4;
                }
                if ((pcVar28 < pcStack_190) && (*(uint16_t *)pcVar33 == *(uint16_t *)pcVar28)) {
                  pcVar28 = pcVar28 + 2;
                  pcVar33 = pcVar33 + 2;
                }
                if (pcVar28 < pcVar36) {
                  pcVar28 = pcVar28 + (*pcVar33 == *pcVar28);
                }
                uVar20 = (int64_t)pcVar28 - (int64_t)pcVar16;
              }
LAB_7fffa47e9dc0:
              uVar30 = uVar30 + uVar20;
            }
            if (param_4 <= pcStack_1e0) {
              puVar5 = (uint64_t *)plStack_1c8[3];
              uVar20 = *(uint64_t *)(param_4 + 8);
              *puVar5 = *(uint64_t *)param_4;
              puVar5[1] = uVar20;
            }
            *(uint16_t *)(plStack_1c8[1] + 4) = 0;
            *(uint32_t *)plStack_1c8[1] = 1;
            if (0xffff < uVar30 + 1) {
              *(int *)((int64_t)plStack_1c8 + 0x4c) =
                   (int)((uint64_t)(plStack_1c8[1] - *plStack_1c8) >> 3);
              *(uint32_t *)(plStack_1c8 + 9) = 2;
            }
            *(short *)(plStack_1c8[1] + 6) = (short)(uVar30 + 1);
            plStack_1c8[1] = plStack_1c8[1] + 8;
            param_4 = param_4 + uVar30 + 4;
            pcStack_210 = param_4;
            pcVar28 = pcStack_100;
            uStack_bc = uStack_254;
            uStack_254 = uVar32;
          } while (param_4 <= pcVar1);
        }
      }
    } while (pcStack_210 < pcVar1);
  }
  puStack_208[1] = uStack_bc;
  *puStack_208 = uStack_254;
  return (int64_t)pcVar36 - (int64_t)param_4;
code_r0x7fffa47e9d20:
  pcVar28 = pcVar28 + 8;
  lVar18 = lVar18 + 8;
  if (pcStack_168 <= pcVar28) goto LAB_7fffa47e9d32;
  goto LAB_7fffa47e9d10;
}


// ============================================================================
// Function : FUN_7fffa47e9e80  |  RVA: 0x79e80  |  Size: 3215 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa47e9e80(void) {
    /* +0x79e80 */ __asm { PUSH RSI }
    /* +0x79e81 */ __asm { PUSH R12 }
    /* +0x79e83 */ __asm { PUSH RBP }
    /* +0x79e84 */ __asm { PUSH R15 }
    /* +0x79e86 */ __asm { SUB RSP,0x48 }
    /* +0x79e8a */ __asm { MOV RSI,RCX }
    /* +0x79e8d */ __asm { SHL RSI,0x35 }
    /* +0x79e91 */ __asm { XOR RSI,RCX }
    /* +0x79e94 */ __asm { RDTSC }
    /* +0x79e96 */ __asm { SHL RDX,0x20 }
    /* +0x79e9a */ __asm { OR RDX,RAX }
    /* +0x79e9d */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0x79ea7 */ __asm { IMUL RDX,R9 }
    /* +0x79eab */ __asm { MOV R8,-0x22b18422c4a9c65e }
    /* +0x79eb5 */ __asm { ADD R8,RDX }
    /* +0x79eb8 */ __asm { MOV RCX,R8 }
    /* +0x79ebb */ __asm { SHR RCX,0x3b }
    /* +0x79ebf */ __asm { MOV R11,R8 }
    /* +0x79ec2 */ __asm { SHR R11,0x2d }
    /* +0x79ec6 */ __asm { SHR R8,0x1b }
    /* +0x79eca */ __asm { XOR R8D,R11D }
    /* +0x79ecd */ __asm { ROR R8D,CL }
    /* +0x79ed0 */ __asm { AND R8D,0x3 }
    /* +0x79ed4 */ __asm { CMP R8D,0x2 }
    /* +0x79ed8 */ __asm { JNC 0x7fffa47ea1e2 }
    /* +0x79ede */ __asm { CMP R8D,0x1 }
    /* +0x79ee2 */ __asm { JZ 0x7fffa47ea41b }
    /* +0x79ee8 */ __asm { LEA R8,[0x7fffa47be52e] }
    /* +0x79eef */ __asm { MOV EAX,0x62eee0c3 }
    /* +0x79ef4 */ __asm { MOV R9D,R10D }
    /* +0x79ef7 */ __asm { OR R9D,0x1 }
    /* +0x79efb */ __asm { IMUL R9D,EAX }
    /* +0x79eff */ __asm { ROL R9D,0x13 }
    /* +0x79f03 */ __asm { ADD R9,R8 }
    /* +0x79f06 */ __asm { MOV RCX,0x7230da994fdcafd3 }
    /* +0x79f10 */ __asm { IMUL RCX,R9 }
    /* +0x79f14 */ __asm { MOV R9,0x6690b77f43d5569 }
    /* +0x79f1e */ __asm { ADD R9,RCX }
    /* +0x79f21 */ __asm { MOV RCX,0x2a5ade43ba3e0fc4 }
    /* +0x79f2b */ __asm { CMP R9,RCX }
    /* +0x79f2e */ __asm { JZ 0x7fffa47eab76 }
    /* +0x79f34 */ __asm { MOV AX,0x6d0 }
    /* +0x79f38 */ __asm { MOV R9D,0x61775db2 }
    /* +0x79f3e */ __asm { ADD EAX,0x3d9 }
    /* +0x79f43 */ __asm { XOR EAX,R10D }
    /* +0x79f46 */ __asm { XOR R9D,R10D }
    /* +0x79f49 */ __asm { ROL AX,0x9 }
    /* +0x79f4d */ __asm { MOVSX RCX,AX }
    /* +0x79f51 */ __asm { MOV R11,R8 }
    /* +0x79f54 */ __asm { ADD R11,RCX }
    /* +0x79f57 */ __asm { MOVZX ECX,uint8_t ptr [RCX + R8*0x1 + 0xe] }
    /* +0x79f5d */ __asm { MOVZX R8D,uint8_t ptr [R11 + RCX*0x4 + 0x1e] }
    /* +0x79f63 */ __asm { ROL R8B,0x4 }
    /* +0x79f67 */ __asm { MOV uint8_t ptr [RSP + 0x30],R8B }
    /* +0x79f6c */ __asm { MOVZX R8D,uint8_t ptr [R11 + RCX*0x4 + 0x1f] }
    /* +0x79f72 */ __asm { ROL R8B,0x4 }
    /* +0x79f76 */ __asm { MOV uint8_t ptr [RSP + 0x31],R8B }
    /* +0x79f7b */ __asm { MOVZX R8D,uint8_t ptr [R11 + RCX*0x4 + 0x20] }
    /* +0x79f81 */ __asm { ROL R8B,0x4 }
    /* +0x79f85 */ __asm { MOV uint8_t ptr [RSP + 0x32],R8B }
    /* +0x79f8a */ __asm { MOVZX ECX,uint8_t ptr [R11 + RCX*0x4 + 0x21] }
    /* +0x79f90 */ __asm { ROL CL,0x4 }
    /* +0x79f93 */ __asm { MOV uint8_t ptr [RSP + 0x33],CL }
    /* +0x79f97 */ __asm { MOV R8D,0x65e8ce72 }
    /* +0x79f9d */ __asm { XOR R8D,dword ptr [RSP + 0x30] }
    /* +0x79fa2 */ __asm { NOT R9D }
    /* +0x79fa5 */ __asm { MOV R9D,dword ptr [R9] }
    /* +0x79fa8 */ __asm { RDTSC }
    /* +0x79faa */ __asm { SHL RDX,0x20 }
    /* +0x79fae */ __asm { OR RDX,RAX }
    /* +0x79fb1 */ __asm { BT R8D,R9D }
    /* +0x79fb5 */ __asm { JNC 0x7fffa47ea6b0 }
    /* +0x79fbb */ __asm { PUSHFQ }
    /* +0x79fbc */ __asm { POP RCX }
    /* +0x79fbd */ __asm { TEST ECX,0x100 }
    /* +0x79fc3 */ __asm { SETZ R9B }
    /* +0x79fc7 */ __asm { MOV R11D,0x9cf15c5b }
    /* +0x79fcd */ __asm { XOR R11D,0x81fe3802 }
    /* +0x79fd4 */ __asm { ADD R11D,R10D }
    /* +0x79fd7 */ __asm { MOV R8,-0x6bdeac2e46be109b }
    /* +0x79fe1 */ __asm { IMUL RDX,R8 }
    /* +0x79fe5 */ __asm { MOV RCX,-0x2bb16529cf595816 }
    /* +0x79fef */ __asm { ADD RCX,RDX }
    /* +0x79ff2 */ __asm { MOV RDX,RCX }
    /* +0x79ff5 */ __asm { SHR RDX,0x1b }
    /* +0x79ff9 */ __asm { MOV R8,RCX }
    /* +0x79ffc */ __asm { SHR R8,0x2d }
    /* +0x7a000 */ __asm { XOR R8D,EDX }
    /* +0x7a003 */ __asm { SHR RCX,0x3b }
    /* +0x7a007 */ __asm { ROR R8D,CL }
    /* +0x7a00a */ __asm { MOV ECX,0xdaaea79d }
    /* +0x7a00f */ __asm { LEA EAX,[R10 + RCX*0x1] }
    /* +0x7a013 */ __asm { ADD EAX,0x370ab691 }
    /* +0x7a018 */ __asm { MOVSXD RCX,EAX }
    /* +0x7a01b */ __asm { CMP RCX,R11 }
    /* +0x7a01e */ __asm { SETC CL }
    /* +0x7a021 */ __asm { XOR CL,R9B }
    /* +0x7a024 */ __asm { NOP }
    /* +0x7a025 */ __asm { NOP }
    /* +0x7a026 */ __asm { NOP }
    /* +0x7a027 */ __asm { NOP }
    /* +0x7a028 */ __asm { NOP }
    /* +0x7a029 */ __asm { NOP }
    /* +0x7a02a */ __asm { NOP }
    /* +0x7a02b */ __asm { NOP }
    /* +0x7a02c */ __asm { NOP }
    /* +0x7a02d */ __asm { NOP }
    /* +0x7a02e */ __asm { NOP }
    /* +0x7a02f */ __asm { NOP }
    /* +0x7a030 */ __asm { NOP }
    /* +0x7a031 */ __asm { NOP }
    /* +0x7a032 */ __asm { NOP }
    /* +0x7a033 */ __asm { NOP }
    /* +0x7a034 */ __asm { NOP }
    /* +0x7a10b */ __asm { MOV dword ptr [RSP + 0x40],0xae61ac7d }
    /* +0x7a113 */ __asm { MOV R8D,dword ptr [RSP + 0x40] }
    /* +0x7a118 */ __asm { MOV R9,-0x582e7a4d58a33e36 }
    /* +0x7a122 */ __asm { XOR R9,R10 }
    /* +0x7a125 */ __asm { ROL R9,0x25 }
    /* +0x7a129 */ __asm { LEA RAX,[0x7fffa4787304] }
    /* +0x7a130 */ __asm { CMP RAX,R9 }
    /* +0x7a133 */ __asm { NOP }
    /* +0x7a134 */ __asm { NOP }
    /* +0x7a135 */ __asm { NOP }
    /* +0x7a136 */ __asm { NOP }
    /* +0x7a137 */ __asm { NOP }
    /* +0x7a138 */ __asm { MOV R8W,0x6981 }
    /* +0x7a13d */ __asm { MOV R9D,0x40d1c674 }
    /* +0x7a143 */ __asm { ADD R9D,0x399291b9 }
    /* +0x7a14a */ __asm { MOV ECX,R10D }
    /* +0x7a14d */ __asm { ROR R9D,CL }
    /* +0x7a150 */ __asm { MOV R11D,0x69a9 }
    /* +0x7a156 */ __asm { SUB R11D,R8D }
    /* +0x7a159 */ __asm { IMUL R8D,R9D,0xa2feb6b }
    /* +0x7a160 */ __asm { MOV qword ptr [RSP + 0x40],RDX }
    /* +0x7a165 */ __asm { MOVZX EDX,R11W }
    /* +0x7a169 */ __asm { MOV EAX,dword ptr [RAX + -0x2478] }
    /* +0x7a16f */ __asm { MOVSXD R11,R8D }
    /* +0x7a172 */ __asm { MOV R8W,0x3d85 }
    /* +0x7a177 */ __asm { ADD R8D,0xffffe27b }
    /* +0x7a17e */ __asm { ROR R8W,CL }
    /* +0x7a182 */ __asm { MOVZX R9D,R8W }
    /* +0x7a186 */ __asm { LEA R8,[RSP + 0x30] }
    /* +0x7a18b */ __asm { MOV R15,R10 }
    /* +0x7a18e */ __asm { MOV R10,R11 }
    /* +0x7a191 */ __asm { SYSCALL }
    /* +0x7a193 */ __asm { MOV R10,R15 }
    /* +0x7a196 */ __asm { MOV R9,-0x2ca11e0e6fb38ec6 }
    /* +0x7a1a0 */ __asm { LEA RAX,[0x7fffa4785adc] }
    /* +0x7a1a7 */ __asm { MOV R8,R10 }
    /* +0x7a1aa */ __asm { OR R8,0x1 }
    /* +0x7a1ae */ __asm { IMUL R8,R9 }
    /* +0x7a1b2 */ __asm { ROL R8,0x10 }
    /* +0x7a1b6 */ __asm { CMP RAX,R8 }
    /* +0x7a1b9 */ __asm { NOP }
    /* +0x7a1ba */ __asm { NOP }
    /* +0x7a1bb */ __asm { NOP }
    /* +0x7a1bc */ __asm { NOP }
    /* +0x7a1bd */ __asm { NOP }
    /* +0x7a1be */ __asm { NOP }
    /* +0x7a1bf */ __asm { MOV R8D,0x1fc4a433 }
    /* +0x7a1c5 */ __asm { MOV qword ptr [RSP + 0x30],RDX }
    /* +0x7a1ca */ __asm { MOV EAX,dword ptr [RAX + -0xcec] }
    /* +0x7a1d0 */ __asm { SUB R10D,R8D }
    /* +0x7a1d3 */ __asm { ADD R10D,0x3e4e01d8 }
    /* +0x7a1da */ __asm { MOVSXD R10,R10D }
    /* +0x7a1dd */ __asm { JMP 0x7fffa47eab52 }
    /* +0x7a1e2 */ __asm { CMP R8D,0x3 }
    /* +0x7a1e6 */ __asm { JNZ 0x7fffa47ea461 }
    /* +0x7a1ec */ __asm { LEA RAX,[0x7fffa47b754f] }
    /* +0x7a1f3 */ __asm { MOV R8,-0x1a616382479b231f }
    /* +0x7a1fd */ __asm { CMP RAX,R8 }
    /* +0x7a200 */ __asm { JZ 0x7fffa47eab8a }
    /* +0x7a206 */ __asm { MOV R8D,0x8741a18c }
    /* +0x7a20c */ __asm { ADD R8D,0x79be5434 }
    /* +0x7a213 */ __asm { MOV ECX,R10D }
    /* +0x7a216 */ __asm { ROL R8D,CL }
    /* +0x7a219 */ __asm { MOVZX R11D,uint8_t ptr [RAX + 0x513e] }
    /* +0x7a221 */ __asm { MOVZX ECX,uint8_t ptr [RAX + R11*0x4 + 0x514e] }
    /* +0x7a22a */ __asm { ROL CL,0x4 }
    /* +0x7a22d */ __asm { MOV uint8_t ptr [RSP + 0x30],CL }
    /* +0x7a231 */ __asm { MOVZX ECX,uint8_t ptr [RAX + R11*0x4 + 0x514f] }
    /* +0x7a23a */ __asm { ROL CL,0x4 }
    /* +0x7a23d */ __asm { MOV uint8_t ptr [RSP + 0x31],CL }
    /* +0x7a241 */ __asm { MOVZX ECX,uint8_t ptr [RAX + R11*0x4 + 0x5150] }
    /* +0x7a24a */ __asm { ROL CL,0x4 }
    /* +0x7a24d */ __asm { MOV uint8_t ptr [RSP + 0x32],CL }
    /* +0x7a251 */ __asm { MOVZX ECX,uint8_t ptr [RAX + R11*0x4 + 0x5151] }
    /* +0x7a25a */ __asm { ROL CL,0x4 }
    /* +0x7a25d */ __asm { NOT R8D }
    /* +0x7a260 */ __asm { MOV uint8_t ptr [RSP + 0x33],CL }
    /* +0x7a264 */ __asm { MOV EAX,0x65e8ce72 }
    /* +0x7a269 */ __asm { XOR EAX,dword ptr [RSP + 0x30] }
    /* +0x7a26d */ __asm { MOV R8D,dword ptr [R8] }
    /* +0x7a270 */ __asm { BT EAX,R8D }
    /* +0x7a274 */ __asm { JNC 0x7fffa47ea8f7 }
    /* +0x7a27a */ __asm { MOV RBP,R10 }
    /* +0x7a27d */ __asm { RDTSC }
    /* +0x7a27f */ __asm { SHL RDX,0x20 }
    /* +0x7a283 */ __asm { OR RDX,RAX }
    /* +0x7a286 */ __asm { IMUL R9,RDX }
    /* +0x7a28a */ __asm { MOV RCX,0x7419ab7671a11a6 }
    /* +0x7a294 */ __asm { ADD RCX,R9 }
    /* +0x7a297 */ __asm { MOV R8,RCX }
    /* +0x7a29a */ __asm { SHR R8,0x2d }
    /* +0x7a29e */ __asm { MOV R10,RCX }
    /* +0x7a2a1 */ __asm { SHR R10,0x1b }
    /* +0x7a2a5 */ __asm { XOR R8D,R10D }
    /* +0x7a2a8 */ __asm { SHR RCX,0x3b }
    /* +0x7a2ac */ __asm { ROR R8D,CL }
    /* +0x7a2af */ __asm { MOV dword ptr [RSP + 0x30],0xaedf4bf6 }
    /* +0x7a2b7 */ __asm { MOV R10D,dword ptr [RSP + 0x30] }
    /* +0x7a2bc */ __asm { TEST R10B,0x1 }
    /* +0x7a2c0 */ __asm { JNZ 0x7fffa47eabac }
    /* +0x7a2c6 */ __asm { CMP R8D,0x10e341e }
    /* +0x7a2cd */ __asm { JA 0x7fffa47ea3e4 }
    /* +0x7a2d3 */ __asm { MOV dword ptr [RSP + 0x30],0xfeaad314 }
    /* +0x7a2db */ __asm { MOV R10D,dword ptr [RSP + 0x30] }
    /* +0x7a2e0 */ __asm { TEST R10B,0x1 }
    /* +0x7a2e4 */ __asm { NOP }
    /* +0x7a2e5 */ __asm { NOP }
    /* +0x7a2e6 */ __asm { NOP }
    /* +0x7a2e7 */ __asm { NOP }
    /* +0x7a2e8 */ __asm { NOP }
    /* +0x7a2e9 */ __asm { NOP }
    /* +0x7a2ea */ __asm { NOP }
    /* +0x7a2eb */ __asm { NOP }
    /* +0x7a2ec */ __asm { NOP }
    /* +0x7a2ed */ __asm { NOP }
    /* +0x7a2ee */ __asm { NOP }
    /* +0x7a2ef */ __asm { NOP }
    /* +0x7a2f0 */ __asm { NOP }
    /* +0x7a2f1 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x7a2f8 */ __asm { MOV RAX,0x0 }
    /* +0x7a2ff */ __asm { MOV EAX,0xed94a17a }
    /* +0x7a304 */ __asm { MOV R9,-0x2b22651ce5ad8d62 }
    /* +0x7a30e */ __asm { CMP RAX,R9 }
    /* +0x7a311 */ __asm { NOP }
    /* +0x7a312 */ __asm { NOP }
    /* +0x7a313 */ __asm { NOP }
    /* +0x7a314 */ __asm { NOP }
    /* +0x7a315 */ __asm { NOP }
    /* +0x7a316 */ __asm { CMP dword ptr [RAX + -0x6d969dba],0xd }
    /* +0x7a31d */ __asm { JC 0x7fffa47ea3e4 }
    /* +0x7a323 */ __asm { MOV RAX,0x0 }
    /* +0x7a32a */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x7a331 */ __asm { XORPS XMM1,XMM1 }
    /* +0x7a334 */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM1 }
    /* +0x7a339 */ __asm { MOV dword ptr [RSP + 0x40],0xb7edfbae }
    /* +0x7a341 */ __asm { MOV R10D,dword ptr [RSP + 0x40] }
    /* +0x7a346 */ __asm { TEST R10B,0x1 }
    /* +0x7a34a */ __asm { NOP }
    /* +0x7a34b */ __asm { NOP }
    /* +0x7a34c */ __asm { NOP }
    /* +0x7a34d */ __asm { NOP }
    /* +0x7a34e */ __asm { NOP }
    /* +0x7a34f */ __asm { NOP }
    /* +0x7a350 */ __asm { NOP }
    /* +0x7a351 */ __asm { NOP }
    /* +0x7a352 */ __asm { NOP }
    /* +0x7a353 */ __asm { NOP }
    /* +0x7a354 */ __asm { NOP }
    /* +0x7a355 */ __asm { NOP }
    /* +0x7a356 */ __asm { NOP }
    /* +0x7a357 */ __asm { NOP }
    /* +0x7a358 */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0x7a360 */ __asm { MOV dword ptr [RSP + 0x40],0x2bf76812 }
    /* +0x7a368 */ __asm { MOV R10D,dword ptr [RSP + 0x40] }
    /* +0x7a36d */ __asm { MOV dword ptr [RSP + 0x40],0xb744b812 }
    /* +0x7a375 */ __asm { MOV R10D,dword ptr [RSP + 0x40] }
    /* +0x7a37a */ __asm { LEA RAX,[0x7fffa47b63e2] }
    /* +0x7a381 */ __asm { MOV R9,-0x118cf60b75d0cc17 }
    /* +0x7a38b */ __asm { CMP RAX,R9 }
    /* +0x7a38e */ __asm { MOV R8,RBP }
    /* +0x7a391 */ __asm { JZ 0x7fffa47eac0b }
    /* +0x7a397 */ __asm { MOV R10D,0x1e895da6 }
    /* +0x7a39d */ __asm { MOV R11W,0x7ff5 }
    /* +0x7a3a2 */ __asm { XOR R10D,R8D }
    /* +0x7a3a5 */ __asm { MOV qword ptr [RSP + 0x40],RDX }
    /* +0x7a3aa */ __asm { MOV R9W,0x7751 }
    /* +0x7a3af */ __asm { ROL R10D,0x10 }
    /* +0x7a3b3 */ __asm { MOVSXD R10,R10D }
    /* +0x7a3b6 */ __asm { MOV EAX,dword ptr [RAX + 0x60e6] }
    /* +0x7a3bc */ __asm { ADD R9D,R8D }
    /* +0x7a3bf */ __asm { ROL R9W,0x3 }
    /* +0x7a3c4 */ __asm { IMUL R9D,R9D,-0x383 }
    /* +0x7a3cb */ __asm { MOVZX R9D,R9W }
    /* +0x7a3cf */ __asm { XOR R11D,0x223a }
    /* +0x7a3d6 */ __asm { ADD R11D,R8D }
    /* +0x7a3d9 */ __asm { MOVZX EDX,R11W }
    /* +0x7a3dd */ __asm { LEA R8,[RSP + 0x30] }
    /* +0x7a3e2 */ __asm { SYSCALL }
    /* +0x7a3e4 */ __asm { LEA RAX,[0x7fffa478845c] }
    /* +0x7a3eb */ __asm { MOV R9,-0xb123b8ef70b3df0 }
    /* +0x7a3f5 */ __asm { CMP RAX,R9 }
    /* +0x7a3f8 */ __asm { JNZ 0x7fffa47ea3fc }
    /* +0x7a3fa */ __asm { POP RDI }
    /* +0x7a3fc */ __asm { MOV R10D,0xe176a25a }
    /* +0x7a402 */ __asm { NOT R10D }
    /* +0x7a405 */ __asm { ADD R10D,EBP }
    /* +0x7a408 */ __asm { MOVSXD R10,R10D }
    /* +0x7a40b */ __asm { MOV qword ptr [RSP + 0x30],RDX }
    /* +0x7a410 */ __asm { MOV EAX,dword ptr [RAX + -0x3e8c] }
    /* +0x7a416 */ __asm { JMP 0x7fffa47eab52 }
    /* +0x7a41b */ __asm { LEA RAX,[0x7fffa47b7bc8] }
    /* +0x7a422 */ __asm { MOV R9,-0x1c7d9c87b0bdb11e }
    /* +0x7a42c */ __asm { CMP RAX,R9 }
    /* +0x7a42f */ __asm { NOP }
    /* +0x7a430 */ __asm { NOP }
    /* +0x7a431 */ __asm { NOP }
    /* +0x7a432 */ __asm { NOP }
    /* +0x7a433 */ __asm { NOP }
    /* +0x7a434 */ __asm { MOV R8D,0xa2a328f4 }
    /* +0x7a43a */ __asm { IMUL R8D,R8D,-0x3fffffd7 }
    /* +0x7a441 */ __asm { XOR R8D,0xf3de706b }
    /* +0x7a448 */ __asm { MOV ECX,R10D }
    /* +0x7a44b */ __asm { ROL R8D,CL }
    /* +0x7a44e */ __asm { MOVSXD R10,R8D }
    /* +0x7a451 */ __asm { MOV qword ptr [RSP + 0x30],RDX }
    /* +0x7a456 */ __asm { MOV EAX,dword ptr [RAX + 0x5450] }
    /* +0x7a45c */ __asm { JMP 0x7fffa47eab52 }
    /* +0x7a461 */ __asm { MOV EAX,0xca1573fb }
    /* +0x7a466 */ __asm { MOV R9,0x56e10f32de98563e }
    /* +0x7a470 */ __asm { CMP RAX,R9 }
    /* +0x7a473 */ __asm { NOP }
    /* +0x7a474 */ __asm { NOP }
    /* +0x7a475 */ __asm { NOP }
    /* +0x7a476 */ __asm { NOP }
    /* +0x7a477 */ __asm { NOP }
    /* +0x7a478 */ __asm { MOV R8,qword ptr [RAX + -0x4a1773f3] }
    /* +0x7a47f */ __asm { RDTSC }
    /* +0x7a481 */ __asm { MOV RCX,RAX }
    /* +0x7a484 */ __asm { MOV R9,RDX }
    /* +0x7a487 */ __asm { MOV RDX,-0x396673430577ef4a }
    /* +0x7a491 */ __asm { MOV RAX,R8 }
    /* +0x7a494 */ __asm { MUL RDX }
    /* +0x7a497 */ __asm { MOV R11,RDX }
    /* +0x7a49a */ __asm { SHL R9,0x20 }
    /* +0x7a49e */ __asm { OR R9,RCX }
    /* +0x7a4a1 */ __asm { MOV ECX,0x146eb7f }
    /* +0x7a4a6 */ __asm { MOV RAX,R8 }
    /* +0x7a4a9 */ __asm { MUL RCX }
    /* +0x7a4ac */ __asm { ADD RAX,R11 }
    /* +0x7a4af */ __asm { ADC RDX,0x0 }
    /* +0x7a4b3 */ __asm { TEST DL,0x1 }
    /* +0x7a4b6 */ __asm { JNZ 0x7fffa47ea599 }
    /* +0x7a4bc */ __asm { PUSHFQ }
    /* +0x7a4bd */ __asm { POP RAX }
    /* +0x7a4be */ __asm { MOV R8,-0x4b061743ec0c107b }
    /* +0x7a4c8 */ __asm { IMUL R9,R8 }
    /* +0x7a4cc */ __asm { MOV R11,-0x74a31536dfda1f9a }
    /* +0x7a4d6 */ __asm { ADD R11,R9 }
    /* +0x7a4d9 */ __asm { MOV RCX,R11 }
    /* +0x7a4dc */ __asm { SHR RCX,0x3b }
    /* +0x7a4e0 */ __asm { MOV R8,R11 }
    /* +0x7a4e3 */ __asm { SHR R8,0x2d }
    /* +0x7a4e7 */ __asm { SHR R11,0x1b }
    /* +0x7a4eb */ __asm { XOR R8D,R11D }
    /* +0x7a4ee */ __asm { ROR R8D,CL }
    /* +0x7a4f1 */ __asm { TEST EAX,0x100 }
    /* +0x7a4f6 */ __asm { NOP }
    /* +0x7a4f7 */ __asm { NOP }
    /* +0x7a4f8 */ __asm { NOP }
    /* +0x7a4f9 */ __asm { NOP }
    /* +0x7a4fa */ __asm { NOP }
    /* +0x7a4fb */ __asm { MOV dword ptr [RSP + 0x30],0x7ff4348e }
    /* +0x7a503 */ __asm { MOV EAX,dword ptr [RSP + 0x30] }
    /* +0x7a507 */ __asm { TEST EAX,EAX }
    /* +0x7a509 */ __asm { JS 0x7fffa47eabc1 }
    /* +0x7a50f */ __asm { CMP R8D,0x4365a91 }
    /* +0x7a516 */ __asm { JA 0x7fffa47ea536 }
    /* +0x7a518 */ __asm { MOV R8D,0xe31ba928 }
    /* +0x7a51e */ __asm { XOR R8D,R10D }
    /* +0x7a521 */ __asm { ROL R8D,0x7 }
    /* +0x7a525 */ __asm { ADD R8D,0x86b4d7b0 }
    /* +0x7a52c */ __asm { MOV dword ptr [RSP + 0x30],R8D }
    /* +0x7a531 */ __asm { MOV R8D,dword ptr [RSP + 0x30] }
    /* +0x7a536 */ __asm { LEA R8,[0x7fffa4780269] }
    /* +0x7a53d */ __asm { MOV R9,-0x26bccf6ed697a506 }
    /* +0x7a547 */ __asm { CMP R8,R9 }
    /* +0x7a54a */ __asm { JZ 0x7fffa47eabeb }
    /* +0x7a550 */ __asm { OR R10D,0x1 }
    /* +0x7a554 */ __asm { MOV qword ptr [RSP + 0x30],RAX }
    /* +0x7a559 */ __asm { MOV EAX,0x4e80258f }
    /* +0x7a55e */ __asm { IMUL EAX,EAX,-0x11ad3761 }
    /* +0x7a564 */ __asm { NOT EAX }
    /* +0x7a566 */ __asm { IMUL EAX,R10D }
    /* +0x7a56a */ __asm { MOVSXD R9,EAX }
    /* +0x7a56d */ __asm { MOV R11D,0x2886d757 }
    /* +0x7a573 */ __asm { ADD R11D,0xe57a8846 }
    /* +0x7a57a */ __asm { IMUL R11D,R10D }
    /* +0x7a57e */ __asm { MOV ECX,0xcc59dd6e }
    /* +0x7a583 */ __asm { XOR RCX,R11 }
    /* +0x7a586 */ __asm { MOV EAX,dword ptr [RCX + R8*0x1 + 0x8c] }
    /* +0x7a58e */ __asm { MOV RDX,RSI }
    /* +0x7a591 */ __asm { MOV R10,R9 }
    /* +0x7a594 */ __asm { JMP 0x7fffa47eab55 }
    /* +0x7a599 */ __asm { MOV R8,-0x158b4ad174161d9b }
    /* +0x7a5a3 */ __asm { IMUL R9,R8 }
    /* +0x7a5a7 */ __asm { MOV R8,-0x15fd0d60ca08356e }
    /* +0x7a5b1 */ __asm { ADD R8,R9 }
    /* +0x7a5b4 */ __asm { MOV R9,R8 }
    /* +0x7a5b7 */ __asm { SHR R9,0x2d }
    /* +0x7a5bb */ __asm { MOV RCX,R8 }
    /* +0x7a5be */ __asm { SHR RCX,0x3b }
    /* +0x7a5c2 */ __asm { SHR R8,0x1b }
    /* +0x7a5c6 */ __asm { XOR R8D,R9D }
    /* +0x7a5c9 */ __asm { ROR R8D,CL }
    /* +0x7a5cc */ __asm { MOV R9D,0xe653b7aa }
    /* +0x7a5d2 */ __asm { XOR R9D,0x1954bf95 }
    /* +0x7a5d9 */ __asm { MOV ECX,R10D }
    /* +0x7a5dc */ __asm { ROL R9D,CL }
    /* +0x7a5df */ __asm { MOV R9,qword ptr [R9] }
    /* +0x7a5e2 */ __asm { ROR R9,0x1 }
    /* +0x7a5e5 */ __asm { MOV ECX,0xef43e6e0 }
    /* +0x7a5ea */ __asm { SUB RCX,R9 }
    /* +0x7a5ed */ __asm { MOV R9,0x100afa51b6cd8163 }
    /* +0x7a5f7 */ __asm { CMP RCX,R9 }
    /* +0x7a5fa */ __asm { NOP }
    /* +0x7a5fb */ __asm { NOP }
    /* +0x7a5fc */ __asm { NOP }
    /* +0x7a5fd */ __asm { NOP }
    /* +0x7a5fe */ __asm { NOP }
    /* +0x7a5ff */ __asm { NOP }
    /* +0x7a600 */ __asm { NOP }
    /* +0x7a601 */ __asm { NOP }
    /* +0x7a602 */ __asm { NOP }
    /* +0x7a603 */ __asm { NOP }
    /* +0x7a604 */ __asm { NOP }
    /* +0x7a605 */ __asm { NOP }
    /* +0x7a606 */ __asm { NOP }
    /* +0x7a607 */ __asm { NOP }
    /* +0x7a608 */ __asm { NOP }
    /* +0x7a609 */ __asm { NOP }
    /* +0x7a60a */ __asm { NOP }
    /* +0x7a641 */ __asm { MOV R8D,0x3ffbdfc5 }
    /* +0x7a647 */ __asm { MOV EAX,0x4b63a4b0 }
    /* +0x7a64c */ __asm { IMUL R9D,EAX,0x70a6e1cf }
    /* +0x7a653 */ __asm { ROL R9D,0xc }
    /* +0x7a657 */ __asm { MOV EAX,R10D }
    /* +0x7a65a */ __asm { OR EAX,0x1 }
    /* +0x7a65d */ __asm { IMUL R9D,EAX }
    /* +0x7a661 */ __asm { IMUL EAX,R8D }
    /* +0x7a665 */ __asm { ROL EAX,0xb }
    /* +0x7a668 */ __asm { ADD EAX,0x1c77d2da }
    /* +0x7a66d */ __asm { MOVSXD R8,EAX }
    /* +0x7a670 */ __asm { CMP R9,R8 }
    /* +0x7a673 */ __asm { JGE 0x7fffa47ea949 }
    /* +0x7a679 */ __asm { MOV R8D,0x4cddf4c4 }
    /* +0x7a67f */ __asm { ADD R8D,R10D }
    /* +0x7a682 */ __asm { MOVZX ECX,uint8_t ptr [R11 + -0x3475] }
    /* +0x7a68a */ __asm { LEA RAX,[R11 + RCX*0x4] }
    /* +0x7a68e */ __asm { ADD RAX,-0x346f }
    /* +0x7a694 */ __asm { MOVZX R9D,uint8_t ptr [R11 + RCX*0x4 + -0x346f] }
    /* +0x7a69d */ __asm { NOT R9B }
    /* +0x7a6a0 */ __asm { ROL R9B,0x5 }
    /* +0x7a6a4 */ __asm { XOR R8D,0x92dc48eb }
    /* +0x7a6ab */ __asm { JMP 0x7fffa47ea98d }
    /* +0x7a6b0 */ __asm { MOV R9,-0x2ecbdabc217d106b }
    /* +0x7a6ba */ __asm { IMUL RDX,R9 }
    /* +0x7a6be */ __asm { MOV R8,R10 }
    /* +0x7a6c1 */ __asm { OR R8,0x1 }
    /* +0x7a6c5 */ __asm { MOV R9,0x89103226db8cf73 }
    /* +0x7a6cf */ __asm { IMUL R9,R9,-0xf61d3f5 }
    /* +0x7a6d6 */ __asm { XOR R9,-0x59d6215 }
    /* +0x7a6dd */ __asm { IMUL R9,R8 }
    /* +0x7a6e1 */ __asm { ADD R9,RDX }
    /* +0x7a6e4 */ __asm { MOV RCX,R9 }
    /* +0x7a6e7 */ __asm { SHR RCX,0x3b }
    /* +0x7a6eb */ __asm { MOV R8,R9 }
    /* +0x7a6ee */ __asm { SHR R8,0x1b }
    /* +0x7a6f2 */ __asm { SHR R9,0x2d }
    /* +0x7a6f6 */ __asm { XOR R8D,R9D }
    /* +0x7a6f9 */ __asm { ROR R8D,CL }
    /* +0x7a6fc */ __asm { MOV R9,qword ptr [RSP + 0x68] }
    /* +0x7a701 */ __asm { MOV RCX,0x5f5f2b53bf06b647 }
    /* +0x7a70b */ __asm { CMP qword ptr [R9 + -0x550],RCX }
    /* +0x7a712 */ __asm { JNZ 0x7fffa47ea71c }
    /* +0x7a714 */ __asm { AND BL,CH }
    /* +0x7a716 */ __asm { STOSD RDI }
    /* +0x7a717 */ __asm { CALL 0x7fff266612dd }
    /* +0x7a71c */ __asm { CMP R8D,0x439d234 }
    /* +0x7a723 */ __asm { JA 0x7fffa47ea899 }
    /* +0x7a729 */ __asm { MOV dword ptr [RSP + 0x30],0xfddbd4af }
    /* +0x7a731 */ __asm { MOV R8D,dword ptr [RSP + 0x30] }
    /* +0x7a736 */ __asm { LEA RAX,[0x7fffa47bf93b] }
    /* +0x7a73d */ __asm { MOV R9,-0xbb2d4451dff6e88 }
    /* +0x7a747 */ __asm { CMP RAX,R9 }
    /* +0x7a74a */ __asm { JZ 0x7fffa47eabfb }
    /* +0x7a750 */ __asm { MOVZX R11D,uint8_t ptr [RAX + -0x31f2] }
    /* +0x7a758 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R11*0x4 + -0x31ec] }
    /* +0x7a761 */ __asm { NOT R9B }
    /* +0x7a764 */ __asm { ROL R9B,0x5 }
    /* +0x7a768 */ __asm { MOV uint8_t ptr [RSP + 0x30],R9B }
    /* +0x7a76d */ __asm { MOVZX R9D,uint8_t ptr [RAX + R11*0x4 + -0x31eb] }
    /* +0x7a776 */ __asm { NOT R9B }
    /* +0x7a779 */ __asm { ROL R9B,0x5 }
    /* +0x7a77d */ __asm { MOV uint8_t ptr [RSP + 0x31],R9B }
    /* +0x7a782 */ __asm { MOVZX R9D,uint8_t ptr [RAX + R11*0x4 + -0x31ea] }
    /* +0x7a78b */ __asm { NOT R9B }
}


// ============================================================================
// Function : FUN_7fffa47eac70  |  RVA: 0x7ac70  |  Size: 516 bytes
// Callers  : none
// Callees  : FUN_7fffa565caf0@0xeecaf0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa47eac70(void) {
    /* +0x7ac70 */ __asm { PUSH RBP }
    /* +0x7ac71 */ __asm { PUSH RSI }
    /* +0x7ac72 */ __asm { PUSH RBX }
    /* +0x7ac73 */ __asm { PUSH RDI }
    /* +0x7ac74 */ __asm { PUSH R12 }
    /* +0x7ac76 */ __asm { PUSH R13 }
    /* +0x7ac78 */ __asm { PUSH R15 }
    /* +0x7ac7a */ __asm { PUSH R14 }
    /* +0x7ac7c */ __asm { MOV EAX,0x1598 }
    /* +0x7ac81 */ __asm { CALL 0x7fffa565caf0 }
    /* +0x7ac86 */ __asm { SUB RSP,RAX }
    /* +0x7ac89 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x7ac91 */ __asm { MOVDQA xmmword ptr [RBP + 0x1500],XMM13 }
    /* +0x7ac9a */ __asm { MOVDQA xmmword ptr [RBP + 0x14f0],XMM6 }
    /* +0x7aca2 */ __asm { MOVDQA xmmword ptr [RBP + 0x14e0],XMM12 }
    /* +0x7acab */ __asm { MOVDQA xmmword ptr [RBP + 0x14d0],XMM9 }
    /* +0x7acb4 */ __asm { MOVDQA xmmword ptr [RBP + 0x14c0],XMM14 }
    /* +0x7acbd */ __asm { MOVDQA xmmword ptr [RBP + 0x14b0],XMM7 }
    /* +0x7acc5 */ __asm { MOV qword ptr [RBP + 0x14a8],-0x2 }
    /* +0x7acd0 */ __asm { MOV RCX,R8 }
    /* +0x7acd3 */ __asm { MOV dword ptr [RBP + 0x1470],R11D }
    /* +0x7acda */ __asm { MOV R12D,R9D }
    /* +0x7acdd */ __asm { MOV R8D,0x3143927f }
    /* +0x7ace3 */ __asm { ADD R8D,0x5c0f5428 }
    /* +0x7acea */ __asm { ROL R8D,CL }
    /* +0x7aced */ __asm { MOV RAX,qword ptr [RBP + 0x1580] }
    /* +0x7acf4 */ __asm { MOV R11D,0x26ec99db }
    /* +0x7acfa */ __asm { MOV EBX,0xda886c91 }
    /* +0x7acff */ __asm { XOR R11D,ECX }
    /* +0x7ad02 */ __asm { ADD R11D,0x3839d607 }
    /* +0x7ad09 */ __asm { LEA RDI,[RAX + 0x43d22a91] }
    /* +0x7ad10 */ __asm { MOV R13,RDI }
    /* +0x7ad13 */ __asm { ROL R13,0x18 }
    /* +0x7ad17 */ __asm { XOR R13,RDI }
    /* +0x7ad1a */ __asm { MOV R9D,0x6615d315 }
    /* +0x7ad20 */ __asm { SUB R9D,ECX }
    /* +0x7ad23 */ __asm { ADD R9D,0x8bbee81e }
    /* +0x7ad2a */ __asm { MOV qword ptr [RBP + 0x1418],RCX }
    /* +0x7ad31 */ __asm { XOR EBX,ECX }
    /* +0x7ad33 */ __asm { NOT EBX }
    /* +0x7ad35 */ __asm { MOV R10,0xfc0fc0fc0fc0fc1 }
    /* +0x7ad3f */ __asm { IMUL R10,RDX }
    /* +0x7ad43 */ __asm { MOV RDX,R10 }
    /* +0x7ad46 */ __asm { ROL RDX,0x3c }
    /* +0x7ad4a */ __asm { MOV RAX,R10 }
    /* +0x7ad4d */ __asm { ROL RAX,0xf }
    /* +0x7ad51 */ __asm { XOR RAX,RDX }
    /* +0x7ad54 */ __asm { MOV qword ptr [RBP + 0x12c0],RDI }
    /* +0x7ad5b */ __asm { MOV RCX,RDI }
    /* +0x7ad5e */ __asm { ROL RCX,0x3c }
    /* +0x7ad62 */ __asm { MOV qword ptr [RBP + 0x110],RCX }
    /* +0x7ad69 */ __asm { XOR R13,RCX }
    /* +0x7ad6c */ __asm { MOV RDX,R13 }
    /* +0x7ad6f */ __asm { ROL RDX,0x30 }
    /* +0x7ad73 */ __asm { MOV RCX,R13 }
    /* +0x7ad76 */ __asm { ROL RCX,0x38 }
    /* +0x7ad7a */ __asm { MOV qword ptr [RBP + 0xd0],R13 }
    /* +0x7ad81 */ __asm { XOR RCX,R13 }
    /* +0x7ad84 */ __asm { MOV qword ptr [RBP + 0x160],RCX }
    /* +0x7ad8b */ __asm { XOR RDX,RCX }
    /* +0x7ad8e */ __asm { MOV RCX,RDX }
    /* +0x7ad91 */ __asm { ROL RCX,0x20 }
    /* +0x7ad95 */ __asm { XOR RCX,RDX }
    /* +0x7ad98 */ __asm { ROL RDX,0x30 }
    /* +0x7ad9c */ __asm { MOV qword ptr [RBP + 0x13d8],RDX }
    /* +0x7ada3 */ __asm { XOR RCX,RDX }
    /* +0x7ada6 */ __asm { MOV RDX,RCX }
    /* +0x7ada9 */ __asm { ROL RDX,0x20 }
    /* +0x7adad */ __asm { MOV R13,RDX }
    /* +0x7adb0 */ __asm { XOR R13,RCX }
    /* +0x7adb3 */ __asm { MOV qword ptr [RBP + 0x1220],RCX }
    /* +0x7adba */ __asm { IMUL R13,RCX }
    /* +0x7adbe */ __asm { CMP RBX,R9 }
    /* +0x7adc1 */ __asm { MOV qword ptr [RBP + 0x12b8],RDX }
    /* +0x7adc8 */ __asm { CMOVNZ R13,RDX }
    /* +0x7adcc */ __asm { XOR RAX,R10 }
    /* +0x7adcf */ __asm { MOV R10,RAX }
    /* +0x7add2 */ __asm { ROL R10,0x1e }
    /* +0x7add6 */ __asm { LEA RCX,[RAX + R10*0x1] }
    /* +0x7adda */ __asm { XOR R10,RAX }
    /* +0x7addd */ __asm { ROL RAX,0x38 }
    /* +0x7ade1 */ __asm { MOV qword ptr [RBP + 0x12b0],R13 }
    /* +0x7ade8 */ __asm { MOV RDI,R13 }
    /* +0x7adeb */ __asm { NOT R8D }
    /* +0x7adee */ __asm { CMP R11,R8 }
    /* +0x7adf1 */ __asm { CMOVBE R10,RCX }
    /* +0x7adf5 */ __asm { XOR R10,RAX }
    /* +0x7adf8 */ __asm { MOV RAX,R10 }
    /* +0x7adfb */ __asm { ROL RAX,0x30 }
    /* +0x7adff */ __asm { MOV RCX,R10 }
    /* +0x7ae02 */ __asm { ROL RCX,0x3c }
    /* +0x7ae06 */ __asm { MOV qword ptr [RBP + 0x158],RCX }
    /* +0x7ae0d */ __asm { XOR R10,RCX }
    /* +0x7ae10 */ __asm { MOV qword ptr [RBP + 0xd8],RAX }
    /* +0x7ae17 */ __asm { XOR R10,RAX }
    /* +0x7ae1a */ __asm { MOV RAX,R10 }
    /* +0x7ae1d */ __asm { ROL RAX,0x38 }
    /* +0x7ae21 */ __asm { XOR RAX,R10 }
    /* +0x7ae24 */ __asm { ROL R10,0x20 }
    /* +0x7ae28 */ __asm { MOV qword ptr [RBP + 0x1b0],RAX }
    /* +0x7ae2f */ __asm { MOV qword ptr [RBP + 0x1420],R10 }
    /* +0x7ae36 */ __asm { XOR RAX,R10 }
    /* +0x7ae39 */ __asm { ROL RAX,0x10 }
    /* +0x7ae3d */ __asm { MOV qword ptr [RBP + 0x1b8],RAX }
    /* +0x7ae44 */ __asm { MOV qword ptr [RBP + 0x11d0],RAX }
    /* +0x7ae4b */ __asm { MOV dword ptr [RBP + 0x1d0],0xcf80d7e6 }
    /* +0x7ae55 */ __asm { MOV R10D,dword ptr [RBP + 0x1d0] }
    /* +0x7ae5c */ __asm { CMP R10D,0xae195e79 }
    /* +0x7ae63 */ __asm { NOP }
    /* +0x7ae64 */ __asm { NOP }
    /* +0x7ae65 */ __asm { NOP }
    /* +0x7ae66 */ __asm { NOP }
    /* +0x7ae67 */ __asm { NOP }
    /* +0x7ae68 */ __asm { NOP }
    /* +0x7ae69 */ __asm { NOP }
    /* +0x7ae6a */ __asm { NOP }
    /* +0x7ae6b */ __asm { NOP }
    /* +0x7ae6c */ __asm { NOP }
    /* +0x7ae6d */ __asm { NOP }
    /* +0x7ae6e */ __asm { NOP }
    /* +0x7ae6f */ __asm { NOP }
    /* +0x7ae70 */ __asm { NOP }
    /* +0x7ae71 */ __asm { NOP }
    /* +0x7ae72 */ __asm { NOP }
    /* +0x7ae73 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a3ca10  |  RVA: 0x2cca10  |  Size: 147 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a3ca10(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1348) & 0xf;
  (*(code *)((int64_t)
             (short)((uint16_t)*(uint64_t *)(param_2 + 0x1260) ^
                    ((0xd5b1U >> bVar2 | -0x2a4f << 0x10 - bVar2) -
                    (short)*(uint32_t *)(param_2 + 0x1498)) + 0x3ea2) + 0x7fffa562a835))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a3cab0  |  RVA: 0x2ccab0  |  Size: 529 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a3cab0(void) {
    /* +0x2ccab0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2ccab5 */ __asm { PUSH RBP }
    /* +0x2ccab6 */ __asm { PUSH RSI }
    /* +0x2ccab7 */ __asm { PUSH RBX }
    /* +0x2ccab8 */ __asm { PUSH RDI }
    /* +0x2ccab9 */ __asm { PUSH R12 }
    /* +0x2ccabb */ __asm { PUSH R13 }
    /* +0x2ccabd */ __asm { PUSH R15 }
    /* +0x2ccabf */ __asm { PUSH R14 }
    /* +0x2ccac1 */ __asm { SUB RSP,0xc8 }
    /* +0x2ccac8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2ccacf */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2ccad6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2ccadc */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2ccae6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2ccaf0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2ccafa */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2ccb03 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2ccb0b */ __asm { JZ 0x7fffa4a3ec10 }
    /* +0x2ccb11 */ __asm { LEA RAX,[0x7fffa47bd173] }
    /* +0x2ccb18 */ __asm { MOV R11D,0xadf14c21 }
    /* +0x2ccb1e */ __asm { MOV R10D,0x157848a7 }
    /* +0x2ccb24 */ __asm { IMUL R10D,R10D,0x2aad5dc3 }
    /* +0x2ccb2b */ __asm { ROL R10D,0x13 }
    /* +0x2ccb2f */ __asm { MOV R15,qword ptr [RBP + 0x11e0] }
    /* +0x2ccb36 */ __asm { ADD R11D,R15D }
    /* +0x2ccb39 */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2ccb40 */ __asm { XOR R11D,EDX }
    /* +0x2ccb43 */ __asm { MOV R8W,0x16cb }
    /* +0x2ccb48 */ __asm { MOV RBX,qword ptr [RBP + 0x150] }
    /* +0x2ccb4f */ __asm { SUB R10D,EBX }
    /* +0x2ccb52 */ __asm { MOV ECX,R15D }
    /* +0x2ccb55 */ __asm { ROL R10D,CL }
    /* +0x2ccb58 */ __asm { ADD R10D,EDX }
    /* +0x2ccb5b */ __asm { NOT R11D }
    /* +0x2ccb5e */ __asm { MOV RCX,qword ptr [RBP + 0x12c8] }
    /* +0x2ccb65 */ __asm { ROR R11D,CL }
    /* +0x2ccb68 */ __asm { IMUL R11D,R11D,-0x6378c48f }
    /* +0x2ccb6f */ __asm { MOVSXD RCX,R11D }
    /* +0x2ccb72 */ __asm { LEA R9,[0x7fffa47cad26] }
    /* +0x2ccb79 */ __asm { ADD R9,RCX }
    /* +0x2ccb7c */ __asm { MOVSXD R10,R10D }
    /* +0x2ccb7f */ __asm { OR EBX,0x1 }
    /* +0x2ccb82 */ __asm { MOV qword ptr [RBP + 0x1410],RBX }
    /* +0x2ccb89 */ __asm { IMUL R8D,EBX }
    /* +0x2ccb8d */ __asm { MOV R11D,R15D }
    /* +0x2ccb90 */ __asm { XOR R11D,R8D }
    /* +0x2ccb93 */ __asm { IMUL ECX,R11D,-0x39df }
    /* +0x2ccb9a */ __asm { LEA R8D,[RDX + RCX*0x1] }
    /* +0x2ccb9e */ __asm { MOVSX RCX,R8W }
    /* +0x2ccba2 */ __asm { MOVZX ECX,uint8_t ptr [RAX + RCX*0x1 + 0x9] }
    /* +0x2ccba7 */ __asm { MOV RAX,qword ptr [R9 + RCX*0x8 + 0x13] }
    /* +0x2ccbac */ __asm { LEA RCX,[0x7fffa47cb8ae] }
    /* +0x2ccbb3 */ __asm { XOR RAX,qword ptr [RCX + R10*0x1 + 0x52] }
    /* +0x2ccbb8 */ __asm { MOVQ XMM2,RAX }
    /* +0x2ccbbd */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2ccbc1 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2ccbc5 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2ccbca */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2ccbce */ __asm { TEST R8,R8 }
    /* +0x2ccbd1 */ __asm { JNZ 0x7fffa4a3ec06 }
    /* +0x2ccbd7 */ __asm { MOV R10W,0x8ba4 }
    /* +0x2ccbdc */ __asm { ADD R10D,0x2c0 }
    /* +0x2ccbe3 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2ccbea */ __asm { MOV R9D,EAX }
    /* +0x2ccbed */ __asm { OR R9D,0x1 }
    /* +0x2ccbf1 */ __asm { IMUL R10D,R9D }
    /* +0x2ccbf5 */ __asm { MOV RAX,qword ptr [RBP + 0x150] }
    /* +0x2ccbfc */ __asm { MOV R8D,EAX }
    /* +0x2ccbff */ __asm { XOR R8D,R10D }
    /* +0x2ccc02 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2ccc09 */ __asm { ROR R8W,CL }
    /* +0x2ccc0d */ __asm { MOV RAX,0x0 }
    /* +0x2ccc14 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2ccc1b */ __asm { NOP }
    /* +0x2ccc1c */ __asm { MOVZX R8D,R8W }
    /* +0x2ccc20 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2ccc24 */ __asm { MOV R10W,0x95da }
    /* +0x2ccc29 */ __asm { IMUL R10D,R10D,0x1317 }
    /* +0x2ccc30 */ __asm { ADD R10D,ECX }
    /* +0x2ccc33 */ __asm { NOT R10D }
    /* +0x2ccc36 */ __asm { MOV dword ptr [RBP + 0x1228],R9D }
    /* +0x2ccc3d */ __asm { IMUL R10D,R9D }
    /* +0x2ccc41 */ __asm { XOR R10D,dword ptr [RBP + 0x12c8] }
    /* +0x2ccc48 */ __asm { MOVZX R8D,R10W }
    /* +0x2ccc4c */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2ccc50 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2ccc5a */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2ccc5e */ __asm { NOP }
    /* +0x2ccc5f */ __asm { NOP }
    /* +0x2ccc60 */ __asm { NOP }
    /* +0x2ccc61 */ __asm { NOP }
    /* +0x2ccc62 */ __asm { NOP }
    /* +0x2ccc63 */ __asm { NOP }
    /* +0x2ccc64 */ __asm { NOP }
    /* +0x2ccc65 */ __asm { NOP }
    /* +0x2ccc66 */ __asm { NOP }
    /* +0x2ccc67 */ __asm { NOP }
    /* +0x2ccc68 */ __asm { NOP }
    /* +0x2ccc69 */ __asm { NOP }
    /* +0x2ccc6a */ __asm { NOP }
    /* +0x2ccc6b */ __asm { NOP }
    /* +0x2ccc6c */ __asm { NOP }
    /* +0x2ccc6d */ __asm { NOP }
    /* +0x2ccc6e */ __asm { NOP }
    /* +0x2cec06 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2cec0d */ __asm { CALL R8 }
    /* +0x2cec10 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2cec19 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2cec23 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2cec2d */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2cec37 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2cec3d */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2cec44 */ __asm { ADD RSP,0xc8 }
    /* +0x2cec4b */ __asm { POP R14 }
    /* +0x2cec4d */ __asm { POP R15 }
    /* +0x2cec4f */ __asm { POP R13 }
    /* +0x2cec51 */ __asm { POP R12 }
    /* +0x2cec53 */ __asm { POP RDI }
    /* +0x2cec54 */ __asm { POP RBX }
    /* +0x2cec55 */ __asm { POP RSI }
    /* +0x2cec56 */ __asm { POP RBP }
    /* +0x2cec57 */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa4a3ec60  |  RVA: 0x2cec60  |  Size: 122 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a3ec60(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)(short)(((short)*(uint32_t *)(param_2 + 0x1260) + -0x6017) * -0x426b) +
            0x7fffa562794a))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a3ece0  |  RVA: 0x2cece0  |  Size: 1236 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a3ece0(void) {
    /* +0x2cece0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2cece5 */ __asm { PUSH RBP }
    /* +0x2cece6 */ __asm { PUSH RSI }
    /* +0x2cece7 */ __asm { PUSH RBX }
    /* +0x2cece8 */ __asm { PUSH RDI }
    /* +0x2cece9 */ __asm { PUSH R12 }
    /* +0x2ceceb */ __asm { PUSH R13 }
    /* +0x2ceced */ __asm { PUSH R15 }
    /* +0x2cecef */ __asm { PUSH R14 }
    /* +0x2cecf1 */ __asm { SUB RSP,0xc8 }
    /* +0x2cecf8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2cecff */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2ced06 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2ced0c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2ced16 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2ced20 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2ced2a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2ced33 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2ced3b */ __asm { JZ 0x7fffa4a40d0d }
    /* +0x2ced41 */ __asm { LEA RAX,[0x7fffa47bc2d0] }
    /* +0x2ced48 */ __asm { MOV R11D,0x189058d4 }
    /* +0x2ced4e */ __asm { MOV R10W,0x9c95 }
    /* +0x2ced53 */ __asm { ADD R10D,0xffffff66 }
    /* +0x2ced5a */ __asm { LEA R8,[0x7fffa47c4f1c] }
    /* +0x2ced61 */ __asm { XOR R11D,0xb4b5a85d }
    /* +0x2ced68 */ __asm { ROL R10W,0x2 }
    /* +0x2ced6d */ __asm { IMUL R11D,dword ptr [RBP + 0x108] }
    /* +0x2ced75 */ __asm { MOV R9W,0x78db }
    /* +0x2ced7a */ __asm { MOV EDX,0xce4 }
    /* +0x2ced7f */ __asm { SUB EDX,R9D }
    /* +0x2ced82 */ __asm { MOV RBX,qword ptr [RBP + 0x11e0] }
    /* +0x2ced89 */ __asm { XOR EDX,EBX }
    /* +0x2ced8b */ __asm { NOP }
    /* +0x2ced8c */ __asm { MOV R9,0x0 }
    /* +0x2ced93 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x2ced9a */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2ceda1 */ __asm { ROR R11D,CL }
    /* +0x2ceda4 */ __asm { MOVSXD R9,R11D }
    /* +0x2ceda7 */ __asm { MOVSX R11,DX }
    /* +0x2cedab */ __asm { ADD R11,RAX }
    /* +0x2cedae */ __asm { NOT R10D }
    /* +0x2cedb1 */ __asm { MOV ECX,EBX }
    /* +0x2cedb3 */ __asm { ROR R10W,CL }
    /* +0x2cedb7 */ __asm { MOVSX R10,R10W }
    /* +0x2cedbb */ __asm { LEA RAX,[0x7fffa47c312c] }
    /* +0x2cedc2 */ __asm { MOVZX ECX,uint8_t ptr [R8 + R9*0x1 + 0x9] }
    /* +0x2cedc8 */ __asm { MOV RCX,qword ptr [R11 + RCX*0x8 + 0x13] }
    /* +0x2cedcd */ __asm { XOR RCX,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x2cedd2 */ __asm { MOVQ XMM2,RCX }
    /* +0x2cedd7 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2ceddb */ __asm { PXOR XMM4,XMM2 }
    /* +0x2ceddf */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2cede4 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2cede8 */ __asm { TEST R8,R8 }
    /* +0x2cedeb */ __asm { JNZ 0x7fffa4a40cf4 }
    /* +0x2cedf1 */ __asm { MOV R10W,0x88e9 }
    /* +0x2cedf6 */ __asm { IMUL R10D,R10D,-0x52b5 }
    /* +0x2cedfd */ __asm { ADD R10D,dword ptr [RBP + 0x11e0] }
    /* +0x2cee04 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2cee0b */ __asm { ROL R10W,CL }
    /* +0x2cee0f */ __asm { MOVZX R8D,R10W }
    /* +0x2cee13 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2cee17 */ __asm { MOV CX,0x1b48 }
    /* +0x2cee1b */ __asm { MOVZX R8D,CX }
    /* +0x2cee1f */ __asm { XOR R8,0x1b78 }
    /* +0x2cee26 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2cee2a */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2cee34 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2cee38 */ __asm { NOP }
    /* +0x2cee39 */ __asm { NOP }
    /* +0x2cee3a */ __asm { NOP }
    /* +0x2cee3b */ __asm { NOP }
    /* +0x2cee3c */ __asm { NOP }
    /* +0x2cee3d */ __asm { PUSHFQ }
    /* +0x2cee3e */ __asm { POP R8 }
    /* +0x2cee40 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2cee44 */ __asm { MOV qword ptr [RBP + 0x1498],RAX }
    /* +0x2cee4b */ __asm { MOV qword ptr [RBP + 0x150],R8 }
    /* +0x2cee52 */ __asm { TEST R8D,0x100 }
    /* +0x2cee59 */ __asm { NOP }
    /* +0x2cee5a */ __asm { NOP }
    /* +0x2cee5b */ __asm { NOP }
    /* +0x2cee5c */ __asm { NOP }
    /* +0x2cee5d */ __asm { NOP }
    /* +0x2cee5e */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2cee65 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2cee69 */ __asm { MOV R8W,0x2ab3 }
    /* +0x2cee6e */ __asm { MOV RAX,qword ptr [RBP + 0x1400] }
    /* +0x2cee75 */ __asm { MOV R11D,EAX }
    /* +0x2cee78 */ __asm { IMUL R11D,R8D }
    /* +0x2cee7c */ __asm { NOT R11D }
    /* +0x2cee7f */ __asm { IMUL R8D,R11D,-0x7c41 }
    /* +0x2cee86 */ __asm { ADD R8D,0xffffe475 }
    /* +0x2cee8d */ __asm { MOVSX R8D,R8W }
    /* +0x2cee91 */ __asm { CMP R10D,R8D }
    /* +0x2cee94 */ __asm { NOP }
    /* +0x2cee95 */ __asm { NOP }
    /* +0x2cee96 */ __asm { NOP }
    /* +0x2cee97 */ __asm { NOP }
    /* +0x2cee98 */ __asm { NOP }
    /* +0x2cee99 */ __asm { ADD qword ptr [RBP + 0x1498],0x10 }
    /* +0x2ceea1 */ __asm { MOV R9,-0x25888cbe778b912b }
    /* +0x2ceeab */ __asm { MOV R11,0x10000000014b }
    /* +0x2ceeb5 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x2ceebc */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2ceebf */ __asm { MOV qword ptr [RBP + 0x1498],RAX }
    /* +0x2ceec6 */ __asm { PUSHFQ }
    /* +0x2ceec7 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2ceecf */ __asm { POPFQ }
    /* +0x2ceed0 */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2ceed7 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2ceedb */ __asm { CMP R8D,0xfcebf0f4 }
    /* +0x2ceee2 */ __asm { JBE 0x7fffa4a3f12d }
    /* +0x2ceee8 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x2ceeef */ __asm { MOVZX R12D,word ptr [RAX + 0x58] }
    /* +0x2ceef4 */ __asm { CMP R12D,0x2 }
    /* +0x2ceef8 */ __asm { JNC 0x7fffa4a3ef01 }
    /* +0x2ceefa */ __asm { XOR ECX,ECX }
    /* +0x2ceefc */ __asm { JMP 0x7fffa4a3f0c3 }
    /* +0x2cef01 */ __asm { SHR R12D,0x1 }
    /* +0x2cef04 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x2cef0b */ __asm { MOV RDI,qword ptr [RAX + 0x60] }
    /* +0x2cef0f */ __asm { CMP R12W,0x1 }
    /* +0x2cef14 */ __asm { JZ 0x7fffa4a3efe9 }
    /* +0x2cef1a */ __asm { MOV ESI,R12D }
    /* +0x2cef1d */ __asm { AND ESI,0xfffffffe }
    /* +0x2cef20 */ __asm { MOV R14D,0x2 }
    /* +0x2cef26 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x2cef30 */ __asm { MOV EBX,0x9fcbe76b }
    /* +0x2cef35 */ __asm { MOV EDX,0xb68ce690 }
    /* +0x2cef3a */ __asm { ADD EDX,0x6d561e86 }
    /* +0x2cef40 */ __asm { XOR EDX,0xf95842d1 }
    /* +0x2cef46 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2cef4d */ __asm { ROR EDX,CL }
    /* +0x2cef4f */ __asm { MOV R10,R9 }
    /* +0x2cef52 */ __asm { SUB R10,RCX }
    /* +0x2cef55 */ __asm { MOVZX R8D,word ptr [RDI + R14*0x2 + -0x4] }
    /* +0x2cef5b */ __asm { LEA EAX,[R8 + -0x41] }
    /* +0x2cef5f */ __asm { IMUL R13,R10,-0x3836f1b3 }
    /* +0x2cef66 */ __asm { MOV R10,qword ptr [RBP + 0x1418] }
    /* +0x2cef6d */ __asm { MOV ECX,R10D }
    /* +0x2cef70 */ __asm { ROR R13,CL }
    /* +0x2cef73 */ __asm { XOR EBX,0xb13318a8 }
    /* +0x2cef79 */ __asm { ROL EBX,0x18 }
    /* +0x2cef7c */ __asm { NOT EBX }
    /* +0x2cef7e */ __asm { IMUL EBX,dword ptr [RBP + 0x104] }
    /* +0x2cef85 */ __asm { MOV ECX,R8D }
    /* +0x2cef88 */ __asm { OR ECX,0x20 }
    /* +0x2cef8b */ __asm { CMP AX,0x1a }
    /* +0x2cef8f */ __asm { CMOVNC ECX,R8D }
    /* +0x2cef93 */ __asm { MOVZX R8D,CL }
    /* +0x2cef97 */ __asm { XOR R8,R15 }
    /* +0x2cef9a */ __asm { MOV ECX,R10D }
    /* +0x2cef9d */ __asm { ROL EDX,CL }
    /* +0x2cef9f */ __asm { IMUL R8,R13 }
    /* +0x2cefa3 */ __asm { XOR ECX,ECX }
    /* +0x2cefa5 */ __asm { CMP RBX,RDX }
    /* +0x2cefa8 */ __asm { SETL CL }
    /* +0x2cefab */ __asm { NEG ECX }
    /* +0x2cefad */ __asm { MOV RAX,0x7ffffffffffffffd }
    /* +0x2cefb7 */ __asm { OR RCX,RAX }
    /* +0x2cefba */ __asm { ADD RCX,R14 }
    /* +0x2cefbd */ __asm { MOVZX ECX,word ptr [RDI + RCX*0x2] }
    /* +0x2cefc1 */ __asm { MOV EDX,ECX }
    /* +0x2cefc3 */ __asm { OR EDX,0x20 }
    /* +0x2cefc6 */ __asm { LEA EAX,[RCX + -0x41] }
    /* +0x2cefc9 */ __asm { CMP AX,0x1a }
    /* +0x2cefcd */ __asm { CMOVNC EDX,ECX }
    /* +0x2cefd0 */ __asm { MOVZX R15D,DL }
    /* +0x2cefd4 */ __asm { XOR R15,R8 }
    /* +0x2cefd7 */ __asm { IMUL R15,R11 }
    /* +0x2cefdb */ __asm { CMP RSI,R14 }
    /* +0x2cefde */ __asm { JZ 0x7fffa4a3eff6 }
    /* +0x2cefe0 */ __asm { ADD R14,0x2 }
    /* +0x2cefe4 */ __asm { JMP 0x7fffa4a3ef30 }
    /* +0x2cefe9 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x2ceff3 */ __asm { XOR R14D,R14D }
    /* +0x2ceff6 */ __asm { TEST R12B,0x1 }
    /* +0x2ceffa */ __asm { JZ 0x7fffa4a3f0b3 }
    /* +0x2cf000 */ __asm { MOV R8D,0xc2b9a0cc }
    /* +0x2cf006 */ __asm { MOV ESI,0xf2deffb }
    /* +0x2cf00b */ __asm { SUB ESI,R8D }
    /* +0x2cf00e */ __asm { MOV R8D,0xdadf14b4 }
    /* +0x2cf014 */ __asm { XOR R8D,0x48c987b7 }
    /* +0x2cf01b */ __asm { MOV R12D,0xb70c0edb }
    /* +0x2cf021 */ __asm { XOR R12D,0x6deee0b1 }
    /* +0x2cf028 */ __asm { MOV R10D,dword ptr [RBP + 0x104] }
    /* +0x2cf02f */ __asm { IMUL R12D,R10D }
    /* +0x2cf033 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2cf03a */ __asm { MOV ECX,EAX }
    /* +0x2cf03c */ __asm { ROL ESI,CL }
    /* +0x2cf03e */ __asm { ADD ESI,0xa150de24 }
    /* +0x2cf044 */ __asm { MOV RCX,0x20a3d01ee4c1291a }
    /* +0x2cf04e */ __asm { NOT R12D }
    /* +0x2cf051 */ __asm { IMUL RDX,RCX,-0x18a3f9ed }
    /* +0x2cf058 */ __asm { SUB RDX,RAX }
    /* +0x2cf05b */ __asm { MOV ECX,0xaa97c5e7 }
    /* +0x2cf060 */ __asm { ADD RDX,RCX }
    /* +0x2cf063 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2cf06a */ __asm { ROR RDX,CL }
    /* +0x2cf06d */ __asm { IMUL R8D,R10D }
    /* +0x2cf071 */ __asm { ADD R8D,EAX }
    /* +0x2cf074 */ __asm { MOVSXD RCX,R8D }
    /* +0x2cf077 */ __asm { MOVZX R8D,word ptr [RDI + R14*0x2] }
    /* +0x2cf07c */ __asm { MOV R13D,R8D }
    /* +0x2cf07f */ __asm { OR R13D,0x20 }
    /* +0x2cf083 */ __asm { LEA EDI,[R8 + -0x41] }
    /* +0x2cf087 */ __asm { CMP DI,0x1a }
    /* +0x2cf08b */ __asm { CMOVNC R13D,R8D }
    /* +0x2cf08f */ __asm { MOVZX R8D,R13B }
    /* +0x2cf093 */ __asm { MOV RBX,R15 }
    /* +0x2cf096 */ __asm { IMUL RBX,R8 }
    /* +0x2cf09a */ __asm { XOR R15,R8 }
    /* +0x2cf09d */ __asm { CMP RSI,RDX }
    /* +0x2cf0a0 */ __asm { CMOVA R15,RBX }
    /* +0x2cf0a4 */ __asm { LEA R8,[R15 + R11*0x1] }
    /* +0x2cf0a8 */ __asm { IMUL R15,R11 }
    /* +0x2cf0ac */ __asm { CMP RCX,R12 }
    /* +0x2cf0af */ __asm { CMOVBE R15,R8 }
    /* +0x2cf0b3 */ __asm { MOV RAX,0x39cda41577e4d47d }
    /* +0x2cf0bd */ __asm { CMP R15,RAX }
    /* +0x2cf0c0 */ __asm { SETZ CL }
    /* +0x2cf0c3 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2cf0ca */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2cf0ce */ __asm { MOV EDX,0x425776da }
    /* +0x2cf0d3 */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x2cf0da */ __asm { ADD EDX,EAX }
    /* +0x2cf0dc */ __asm { MOV ESI,0x204bd524 }
    /* +0x2cf0e1 */ __asm { ADD ESI,EAX }
    /* +0x2cf0e3 */ __asm { MOV R15D,0x61f9efd9 }
    /* +0x2cf0e9 */ __asm { SUB R15D,ESI }
    /* +0x2cf0ec */ __asm { XOR ESI,ESI }
    /* +0x2cf0ee */ __asm { XOR R13D,R13D }
    /* +0x2cf0f1 */ __asm { CMP R8D,0x26bd4fb8 }
    /* +0x2cf0f8 */ __asm { SETC SIL }
    /* +0x2cf0fc */ __asm { MOVSXD R8,R15D }
    /* +0x2cf0ff */ __asm { SETGE R13B }
    /* +0x2cf103 */ __asm { IMUL EDX,dword ptr [RBP + 0x108] }
    /* +0x2cf10a */ __asm { ROL EDX,0xb }
    /* +0x2cf10d */ __asm { CMP RDX,R8 }
    /* +0x2cf110 */ __asm { CMOVNC ESI,R13D }
    /* +0x2cf114 */ __asm { TEST SIL,SIL }
    /* +0x2cf117 */ __asm { JZ 0x7fffa4a3f135 }
    /* +0x2cf119 */ __asm { TEST CL,CL }
    /* +0x2cf11b */ __asm { JNZ 0x7fffa4a3f152 }
    /* +0x2cf11d */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2cf124 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2cf128 */ __asm { JMP 0x7fffa4a3eeb5 }
    /* +0x2cf12d */ __asm { RET }
    /* +0x2cf135 */ __asm { MOV RDX,0x0 }
    /* +0x2cf13c */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x2cf143 */ __asm { NOP }
    /* +0x2cf144 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2cf149 */ __asm { NOP }
    /* +0x2cf14a */ __asm { NOP }
    /* +0x2cf14b */ __asm { NOP }
    /* +0x2cf14c */ __asm { NOP }
    /* +0x2cf14d */ __asm { NOP }
    /* +0x2cf14e */ __asm { NOP }
    /* +0x2cf14f */ __asm { NOP }
    /* +0x2cf150 */ __asm { NOP }
    /* +0x2cf151 */ __asm { NOP }
    /* +0x2cf152 */ __asm { NOP }
    /* +0x2cf153 */ __asm { NOP }
    /* +0x2cf154 */ __asm { NOP }
    /* +0x2cf155 */ __asm { NOP }
    /* +0x2cf156 */ __asm { NOP }
    /* +0x2cf157 */ __asm { NOP }
    /* +0x2cf158 */ __asm { NOP }
    /* +0x2cf159 */ __asm { NOP }
    /* +0x2d0cf4 */ __asm { NOP }
    /* +0x2d0cf5 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2d0cfc */ __asm { MOV RAX,0x0 }
    /* +0x2d0d03 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2d0d0a */ __asm { CALL R8 }
    /* +0x2d0d0d */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2d0d16 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2d0d20 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2d0d2a */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2d0d34 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2d0d3a */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2d0d41 */ __asm { ADD RSP,0xc8 }
    /* +0x2d0d48 */ __asm { POP R14 }
    /* +0x2d0d4a */ __asm { POP R15 }
    /* +0x2d0d4c */ __asm { POP R13 }
    /* +0x2d0d4e */ __asm { POP R12 }
    /* +0x2d0d50 */ __asm { POP RDI }
    /* +0x2d0d51 */ __asm { POP RBX }
    /* +0x2d0d52 */ __asm { POP RSI }
    /* +0x2d0d53 */ __asm { POP RBP }
    /* +0x2d0d54 */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa4a40d60  |  RVA: 0x2d0d60  |  Size: 396 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a40d60(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  bool bVar2;
  uint16_t uVar3;
  int iVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  
  uVar6 = (uint32_t)*(uint64_t *)(param_2 + 0x1348);
  uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x1498);
  uVar7 = *(int *)(param_2 + 0x1260) * -0x4fdd6fe0 |
          (uint32_t)(*(int *)(param_2 + 0x1260) * 0x36045204) >> 0x1d;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
  bVar2 = *(uint64_t *)(param_2 + 0x268) < ((uint64_t)((uVar6 ^ 0x7ba2eca) + uVar5) & 0xffff);
  if ((uVar7 >> bVar1 | uVar7 << 0x20 - bVar1) <= (*(uint32_t *)(param_2 + 0x1d0) ^ 0xb7a1dee0)) {
    bVar2 = (uint64_t)((0x2ea - uVar6 ^ uVar5) * -0x22d1 & 0xffff) <
            *(uint64_t *)(param_2 + 0x268);
  }
  if (bVar2) {
    iVar4 = (int)*(uint64_t *)(param_2 + 0x1480) * 0x8417;
    uVar3 = (uint16_t)iVar4;
    uVar5 = ~CONCAT22((short)((uint32_t)iVar4 >> 0x10),uVar3 << 0xe | uVar3 >> 2);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1348) & 0xf;
    uVar3 = (uint16_t)uVar5;
    uVar3 = uVar3 << bVar1 | uVar3 >> 0x10 - bVar1;
    (*(code *)((int64_t)(short)uVar3 + 0x7fffa5688aee))
              (*(uint64_t *)(param_2 + 0x1498),CONCAT22((short)(uVar5 >> 0x10),uVar3),
               *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a40ef0  |  RVA: 0x2d0ef0  |  Size: 576 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */

void Unwind_7fffa4a40ef0(uint64_t param_1,int64_t param_2)

{
  uint32_t *puVar1;
  uint8_t bVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint16_t uVar9;
  uint16_t uVar10;
  short sVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t uVar14;
  uint16_t uVar15;
  uint64_t uVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  int64_t unaff_R13;
  IMAGE_DOS_HEADER *unaff_R14;
  IMAGE_DOS_HEADER *unaff_R15;
  bool bVar20;
  uint8_t in_AF;
  bool bVar21;
  bool bVar22;
  uint8_t in_TF;
  uint8_t in_IF;
  bool bVar23;
  bool bVar24;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  uint8_t auStack_108 [200];
  
  bVar23 = false;
  plVar6 = (int64_t *)auStack_108;
  if (*(int64_t *)(param_2 + 0x170) != 0) {
    uVar18 = (uint32_t)*(uint64_t *)(param_2 + 0x188);
    iVar13 = (int)*(uint64_t *)(param_2 + 0x1518);
    iVar5 = (int)*(uint64_t *)(param_2 + 0x1498);
    uVar17 = (iVar13 + 0xa0f470f4U ^ uVar18) - iVar5;
    *(uint64_t *)(param_2 + 0x78) =
         *(uint64_t *)((int64_t)(-0x3168856a - ((iVar13 - iVar5) + 0x6fc27452)) + 0x7fffa47c5eb5)
         ^ *(uint64_t *)
            ((int64_t)(int)(uVar17 * 0x4000000 | uVar17 >> 6) + 0x7fffa47c9655 +
            (uint64_t)
            *(uint8_t *)((int64_t)(int)((uVar18 + 0x994b6795) * *(int *)(param_2 + 0x184)) +
                     0x7fffa47c9076) * 8) ^ 0xffffffffffffffff;
    if (*(code **)(param_2 + 0x78) == (code *)0x0) {
      lVar4 = *(int64_t *)(param_2 + 0x188);
      sVar11 = (short)*(uint64_t *)(param_2 + 0x1480) * (-0x55e1 - (short)lVar4);
      uVar15 = ((uint16_t)*(uint64_t *)(param_2 + 0x1260) ^ 0xbfd9) + 0x1a78;
      bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
      uVar15 = uVar15 << bVar2 | uVar15 >> 0x10 - bVar2;
      bVar2 = (uint8_t)lVar4 & 0xf;
      uVar14 = *(uint64_t *)
                (*(int64_t *)
                  ((uint64_t)(uint16_t)(uVar15 >> bVar2 | uVar15 << 0x10 - bVar2) + 0xff00000000) +
                0x60) ^ 0x2136b1a8;
      uVar16 = uVar14 * 0x45dbee932d8fa605;
      bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1518) & 0x3f;
      uVar12 = (0xc5af187544433767U >> bVar2 | -0x3a50e78abbbcc899 << 0x40 - bVar2) + lVar4 ^
               *(uint64_t *)(param_2 + 0x1498);
      uVar14 = uVar12 + uVar14 * -0x45dbee932d8fa605;
      lVar4 = *(int64_t *)
               (*(int64_t *)
                 (((uint64_t)
                   ((uint32_t)(uint16_t)(sVar11 * 2 | (uint16_t)(sVar11 < 0)) -
                    (int)*(uint64_t *)(param_2 + 0x1260) & 0xffff) ^ 0x7d8d) + 0xff00000000) +
               0x18);
      *(uint64_t *)(param_2 + 0x12a8) =
           (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)SBORROW8(uVar12,uVar16) * 0x800 |
           (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
           (uint64_t)((int64_t)uVar14 < 0) * 0x80 | (uint64_t)(uVar14 == 0) * 0x40 |
           (uint64_t)(in_AF & 1) * 0x10 | (uint64_t)((POPCOUNT(uVar14 & 0xff) & 1U) == 0) * 4 |
           (uint64_t)(uVar12 < uVar16) | (uint64_t)(in_ID & 1) * 0x200000 |
           (uint64_t)(in_VIP & 1) * 0x100000 | (uint64_t)(in_VIF & 1) * 0x80000 |
           (uint64_t)(in_AC & 1) * 0x40000;
      *(uint32_t *)(param_2 + 0x78) = 0x656c32dd;
      plVar3 = (int64_t *)(lVar4 + 0x10);
      uVar18 = (uint32_t)*(uint64_t *)(param_2 + 0x1260);
      uVar14 = (uint64_t)(uVar18 | 1);
      *(uint64_t *)(param_2 + 0x1258) = uVar14;
      puVar1 = (uint32_t *)(param_2 + 0x1498);
      bVar20 = uVar18 < *puVar1;
      bVar24 = SBORROW4(uVar18,*puVar1);
      uVar18 = uVar18 - *puVar1;
      bVar22 = (int)uVar18 < 0;
      bVar21 = uVar18 == 0;
      bVar2 = POPCOUNT(uVar18 & 0xff);
      plVar8 = (int64_t *)(param_2 + 0x80);
code_r0x7fffa4a41126:
      plVar3 = (int64_t *)*plVar3;
      *(uint64_t *)((int64_t)plVar6 + -8) =
           (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)bVar24 * 0x800 | (uint64_t)bVar23 * 0x400 |
           (uint64_t)(in_IF & 1) * 0x200 | (uint64_t)(in_TF & 1) * 0x100 |
           (uint64_t)bVar22 * 0x80 | (uint64_t)bVar21 * 0x40 | (uint64_t)(in_AF & 1) * 0x10 |
           (uint64_t)((bVar2 & 1) == 0) * 4 | (uint64_t)bVar20 | (uint64_t)(in_ID & 1) * 0x200000
           | (uint64_t)(in_VIP & 1) * 0x100000 | (uint64_t)(in_VIF & 1) * 0x80000 |
           (uint64_t)(in_AC & 1) * 0x40000;
      *(uint64_t *)((int64_t)plVar6 + -8) =
           *(uint64_t *)((int64_t)plVar6 + -8) & 0xfffffffffffffeff;
      uVar12 = *(uint64_t *)((int64_t)plVar6 + -8);
      in_NT = (uVar12 & 0x4000) != 0;
      bVar23 = (uVar12 & 0x400) != 0;
      in_IF = (uVar12 & 0x200) != 0;
      in_TF = (uVar12 & 0x100) != 0;
      in_AF = (uVar12 & 0x10) != 0;
      in_ID = (uVar12 & 0x200000) != 0;
      in_AC = (uVar12 & 0x40000) != 0;
      in_VIP = 0;
      in_VIF = 0;
      *(uint32_t *)(plVar8 + -1) = 0xfe012e70;
      if (*(uint32_t *)(plVar8 + -1) < 0xfcebf0f5) {
        return;
      }
      uVar15 = ((short)plVar8[0x280] * -0x3782 ^ 0x745fU) * (short)plVar8[0x23b];
      bVar2 = (uint8_t)plVar8[0x21] & 0xf;
      uVar9 = uVar15 >> bVar2 | uVar15 << 0x10 - bVar2;
      uVar15 = *(uint16_t *)(plVar3 + 0xb);
      uVar17 = (uint32_t)uVar15;
      if (uVar15 < (uint16_t)(uVar9 << 1 | (uint16_t)((short)uVar9 < 0))) {
        lVar4 = 0;
        plVar7 = plVar8;
        goto code_r0x7fffa4a411cb;
      }
      unaff_R13 = plVar3[0xc];
      uVar17 = (uint32_t)(uVar15 >> 1);
      if (uVar15 >> 1 != 1) {
        unaff_R15 = (IMAGE_DOS_HEADER *)(uint64_t)(uVar17 & 0xfffffffe);
        unaff_R14 = (IMAGE_DOS_HEADER *)0x2;
        uVar12 = 0xa953a802a90b55cd;
        goto code_r0x7fffa4a41210;
      }
      uVar12 = 0xa953a802a90b55cd;
      unaff_R14 = (IMAGE_DOS_HEADER *)0x0;
      do {
        if ((uVar17 & 1) != 0) {
          uVar15 = *(uint16_t *)(unaff_R13 + (int64_t)unaff_R14 * 2);
          unaff_R15 = (IMAGE_DOS_HEADER *)(uint64_t)(uVar15 - 0x41);
          uVar9 = uVar15 | 0x20;
          if (0x19 < (uint16_t)(uVar15 - 0x41)) {
            uVar9 = uVar15;
          }
          uVar12 = (uVar12 ^ (uint8_t)uVar9) * 0x10000000014b;
        }
        lVar4 = CONCAT71(0x39cda41577e4d4,uVar12 == 0x39cda41577e4d47d);
        plVar7 = plVar8;
code_r0x7fffa4a411cb:
        *(uint32_t *)(plVar7 + -1) = 0x275bfaa;
        if (*(uint32_t *)(plVar7 + -1) < 0x26bd4fb8) {
          bVar20 = false;
          bVar24 = false;
          bVar22 = false;
          if ((char)lVar4 == '\0') goto code_r0x7fffa4a411e9;
        }
        else {
          unaff_R15 = &IMAGE_DOS_HEADER_7fffa4770000;
          unaff_R13 = 0;
        }
        if (lVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar8 = (int64_t *)*plVar7;
        plVar6 = plVar7 + 1;
        uVar12 = 0;
        while( true ) {
          uVar14 = uVar14 * 0x10000000014b ^ uVar12;
          uVar12 = uVar14 * 0x10000000014b;
          if (unaff_R15 == unaff_R14) break;
          unaff_R14 = (IMAGE_DOS_HEADER *)&unaff_R14->e_cblp;
code_r0x7fffa4a41210:
          uVar19 = (int)plVar8[0x293] + 0x2b6754d8;
          bVar2 = (uint8_t)plVar8[0x21] & 0x1f;
          uVar15 = *(uint16_t *)(unaff_R13 + -2 + (int64_t)unaff_R14 * 2);
          uVar19 = ~(uVar19 >> bVar2 | uVar19 << 0x20 - bVar2);
          uVar9 = uVar15 | 0x20;
          if ((uint16_t)((short)uVar18 + 0x9e4fU ^ (uint16_t)plVar8[0x21]) <= (uint16_t)(uVar15 - 0x41)) {
            uVar9 = uVar15;
          }
          uVar15 = uVar9 | 0xff;
          if ((uVar19 >> 1 | (uint32_t)((uVar19 & 1) != 0) << 0x1f) + (int)plVar8[0x283] == -0x3667e262)
          {
            uVar15 = uVar9 & 0xff;
          }
          uVar9 = *(uint16_t *)(unaff_R13 + -4 + (int64_t)unaff_R14 * 2);
          uVar10 = uVar9 | 0x20;
          if (0x19 < (uint16_t)(uVar9 - 0x41)) {
            uVar10 = uVar9;
          }
          uVar14 = (uint8_t)uVar10 ^ uVar12;
          uVar12 = (uint64_t)uVar15;
        }
      } while( true );
    }
    (**(code **)(param_2 + 0x78))(*(uint64_t *)(param_2 + 0x170));
  }
  return;
code_r0x7fffa4a411e9:
  *(uint32_t *)(plVar7 + -1) = 0xb7a0a379;
  bVar21 = true;
  bVar2 = 0;
  plVar8 = plVar7;
  goto code_r0x7fffa4a41126;
}


// ============================================================================
// Function : Unwind@7fffa4a42fb0  |  RVA: 0x2d2fb0  |  Size: 149 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a42fb0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  uVar3 = (short)*(uint64_t *)(param_2 + 0x188) + 0x25c6;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0xf;
  uVar3 = (uVar3 >> bVar2 | uVar3 << 0x10 - bVar2) + 0xb510;
  uVar3 = uVar3 * 0x20 | uVar3 >> 0xb;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  (*(code *)(&UNK_7fffa562725a + (short)(uVar3 << bVar2 | uVar3 >> 0x10 - bVar2)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a43050  |  RVA: 0x2d3050  |  Size: 249 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a43050(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if ((uint64_t)(uint32_t)(*(int *)(param_2 + 0x184) * 0x42b684d5) < *(uint64_t *)(param_2 + 0x268)) {
    uVar1 = *(uint64_t *)(param_2 + 0x250);
    FUN_7fffa5687c30(uVar1,param_2,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a43150  |  RVA: 0x2d3150  |  Size: 136 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a43150(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x188) & 0x1f;
  uVar3 = 0x77fff859U >> bVar2 | 0x77fff859 << 0x20 - bVar2;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
  (*(code *)(&UNK_7fffa56348b2 + (int)(uVar3 << bVar2 | uVar3 >> 0x20 - bVar2)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a431e0  |  RVA: 0x2d31e0  |  Size: 502 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a431e0(void) {
    /* +0x2d31e0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2d31e5 */ __asm { PUSH RBP }
    /* +0x2d31e6 */ __asm { PUSH RSI }
    /* +0x2d31e7 */ __asm { PUSH RBX }
    /* +0x2d31e8 */ __asm { PUSH RDI }
    /* +0x2d31e9 */ __asm { PUSH R12 }
    /* +0x2d31eb */ __asm { PUSH R13 }
    /* +0x2d31ed */ __asm { PUSH R15 }
    /* +0x2d31ef */ __asm { PUSH R14 }
    /* +0x2d31f1 */ __asm { SUB RSP,0xc8 }
    /* +0x2d31f8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2d31ff */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2d3206 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2d320c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2d3216 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2d3220 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2d322a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2d3233 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2d323b */ __asm { JZ 0x7fffa4a453b6 }
    /* +0x2d3241 */ __asm { MOV R10D,0xa12fb60a }
    /* +0x2d3247 */ __asm { LEA RCX,[0x7fffa47c5e04] }
    /* +0x2d324e */ __asm { LEA RAX,[0x7fffa47bcd11] }
    /* +0x2d3255 */ __asm { MOV R9W,0x2a7b }
    /* +0x2d325a */ __asm { XOR R9D,0xffffddff }
    /* +0x2d3261 */ __asm { MOV R8D,0xe96f379e }
    /* +0x2d3267 */ __asm { IMUL R11D,R8D,-0x2b69f15 }
    /* +0x2d326e */ __asm { LEA R8,[0x7fffa47cb16a] }
    /* +0x2d3275 */ __asm { MOV RBX,qword ptr [RBP + 0x1418] }
    /* +0x2d327c */ __asm { LEA EDX,[RBX + R9*0x1] }
    /* +0x2d3280 */ __asm { NOT R11D }
    /* +0x2d3283 */ __asm { ADD R11D,dword ptr [RBP + 0x108] }
    /* +0x2d328a */ __asm { MOVSXD R9,R11D }
    /* +0x2d328d */ __asm { NOT R10D }
    /* +0x2d3290 */ __asm { ADD R10D,EBX }
    /* +0x2d3293 */ __asm { ROL R10D,0x1d }
    /* +0x2d3297 */ __asm { MOVSXD R10,R10D }
    /* +0x2d329a */ __asm { MOVZX R10D,uint8_t ptr [RCX + R10*0x1 + 0x9] }
    /* +0x2d32a0 */ __asm { XOR EDX,dword ptr [RBP + 0x11e0] }
    /* +0x2d32a6 */ __asm { MOVSX RCX,DX }
    /* +0x2d32aa */ __asm { ADD RCX,RAX }
    /* +0x2d32ad */ __asm { MOV RAX,qword ptr [R8 + R9*0x1 + 0x52] }
    /* +0x2d32b2 */ __asm { XOR RAX,qword ptr [RCX + R10*0x8 + 0x13] }
    /* +0x2d32b7 */ __asm { MOVQ XMM2,RAX }
    /* +0x2d32bc */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2d32c0 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2d32c4 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2d32c9 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2d32cd */ __asm { TEST R8,R8 }
    /* +0x2d32d0 */ __asm { JNZ 0x7fffa4a453ac }
    /* +0x2d32d6 */ __asm { MOV R10W,0x53b4 }
    /* +0x2d32db */ __asm { ADD R10D,dword ptr [RBP + 0x11e0] }
    /* +0x2d32e2 */ __asm { MOV R8D,0xffffae61 }
    /* +0x2d32e8 */ __asm { SUB R8D,R10D }
    /* +0x2d32eb */ __asm { MOVZX R8D,R8W }
    /* +0x2d32ef */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2d32f3 */ __asm { MOV R10W,0xdf02 }
    /* +0x2d32f8 */ __asm { MOV R8D,0xffffdf0e }
    /* +0x2d32fe */ __asm { SUB R8D,R10D }
    /* +0x2d3301 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2d3308 */ __asm { ROL R8W,CL }
    /* +0x2d330c */ __asm { MOVZX R8D,R8W }
    /* +0x2d3310 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2d3314 */ __asm { MOV RCX,qword ptr [RCX + 0x60] }
    /* +0x2d3318 */ __asm { ROL RCX,0x36 }
    /* +0x2d331c */ __asm { ADD RCX,0x2e66b32c }
    /* +0x2d3323 */ __asm { MOV R8,0x25c1b79da7bb96a1 }
    /* +0x2d332d */ __asm { CMP RCX,R8 }
    /* +0x2d3330 */ __asm { NOP }
    /* +0x2d3331 */ __asm { NOP }
    /* +0x2d3332 */ __asm { NOP }
    /* +0x2d3333 */ __asm { NOP }
    /* +0x2d3334 */ __asm { NOP }
    /* +0x2d3335 */ __asm { PUSHFQ }
    /* +0x2d3336 */ __asm { POP R8 }
    /* +0x2d3338 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2d333c */ __asm { MOV qword ptr [RBP + 0x11d8],RAX }
    /* +0x2d3343 */ __asm { MOV qword ptr [RBP + 0x1220],R8 }
    /* +0x2d334a */ __asm { TEST R8D,0x100 }
    /* +0x2d3351 */ __asm { NOP }
    /* +0x2d3352 */ __asm { NOP }
    /* +0x2d3353 */ __asm { NOP }
    /* +0x2d3354 */ __asm { NOP }
    /* +0x2d3355 */ __asm { NOP }
    /* +0x2d3356 */ __asm { MOV R11,0x0 }
    /* +0x2d335d */ __asm { NOP }
    /* +0x2d335e */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x2d3365 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2d336c */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2d3370 */ __asm { TEST R10D,R10D }
    /* +0x2d3373 */ __asm { NOP }
    /* +0x2d3374 */ __asm { NOP }
    /* +0x2d3375 */ __asm { NOP }
    /* +0x2d3376 */ __asm { NOP }
    /* +0x2d3377 */ __asm { NOP }
    /* +0x2d3378 */ __asm { NOP }
    /* +0x2d3379 */ __asm { NOP }
    /* +0x2d337a */ __asm { NOP }
    /* +0x2d337b */ __asm { NOP }
    /* +0x2d337c */ __asm { NOP }
    /* +0x2d337d */ __asm { NOP }
    /* +0x2d337e */ __asm { NOP }
    /* +0x2d337f */ __asm { NOP }
    /* +0x2d3380 */ __asm { NOP }
    /* +0x2d3381 */ __asm { NOP }
    /* +0x2d3382 */ __asm { NOP }
    /* +0x2d3383 */ __asm { NOP }
    /* +0x2d53ac */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2d53b3 */ __asm { CALL R8 }
    /* +0x2d53b6 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2d53bf */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2d53c9 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2d53d3 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2d53dd */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2d53e3 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2d53ea */ __asm { ADD RSP,0xc8 }
    /* +0x2d53f1 */ __asm { POP R14 }
    /* +0x2d53f3 */ __asm { POP R15 }
    /* +0x2d53f5 */ __asm { POP R13 }
    /* +0x2d53f7 */ __asm { POP R12 }
    /* +0x2d53f9 */ __asm { POP RDI }
    /* +0x2d53fa */ __asm { POP RBX }
    /* +0x2d53fb */ __asm { POP RSI }
    /* +0x2d53fc */ __asm { POP RBP }
    /* +0x2d53fd */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa4a45400  |  RVA: 0x2d5400  |  Size: 1315 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a45400(void) {
    /* +0x2d5400 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2d5405 */ __asm { PUSH RBP }
    /* +0x2d5406 */ __asm { PUSH RSI }
    /* +0x2d5407 */ __asm { PUSH RBX }
    /* +0x2d5408 */ __asm { PUSH RDI }
    /* +0x2d5409 */ __asm { PUSH R12 }
    /* +0x2d540b */ __asm { PUSH R13 }
    /* +0x2d540d */ __asm { PUSH R15 }
    /* +0x2d540f */ __asm { PUSH R14 }
    /* +0x2d5411 */ __asm { SUB RSP,0xc8 }
    /* +0x2d5418 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2d541f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2d5426 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2d542c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2d5436 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2d5440 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2d544a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2d5453 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2d545b */ __asm { JZ 0x7fffa4a4784b }
    /* +0x2d5461 */ __asm { MOV R10W,0xe2cb }
    /* +0x2d5466 */ __asm { LEA R9,[0x7fffa47c992b] }
    /* +0x2d546d */ __asm { LEA R8,[0x7fffa47c6a22] }
    /* +0x2d5474 */ __asm { MOV R11D,0xa5ff7ae8 }
    /* +0x2d547a */ __asm { IMUL R11D,R11D,-0x1203c64b }
    /* +0x2d5481 */ __asm { MOV RBX,qword ptr [RBP + 0x11e0] }
    /* +0x2d5488 */ __asm { XOR R11D,EBX }
    /* +0x2d548b */ __asm { NOT R11D }
    /* +0x2d548e */ __asm { MOV R15,qword ptr [RBP + 0x108] }
    /* +0x2d5495 */ __asm { ADD R11D,R15D }
    /* +0x2d5498 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2d549f */ __asm { ROR R11D,CL }
    /* +0x2d54a2 */ __asm { MOVSXD R11,R11D }
    /* +0x2d54a5 */ __asm { LEA RAX,[0x7fffa47bc1ca] }
    /* +0x2d54ac */ __asm { MOVZX EDX,uint8_t ptr [R9 + R11*0x1 + 0x9] }
    /* +0x2d54b2 */ __asm { MOV R11D,0xd135213a }
    /* +0x2d54b8 */ __asm { XOR R11D,R15D }
    /* +0x2d54bb */ __asm { ROR R11D,0x1 }
    /* +0x2d54be */ __asm { ADD R11D,ECX }
    /* +0x2d54c1 */ __asm { IMUL R11D,R11D,0x3f409d23 }
    /* +0x2d54c8 */ __asm { NOT R11D }
    /* +0x2d54cb */ __asm { MOVSXD R9,R11D }
    /* +0x2d54ce */ __asm { ADD R9,R8 }
    /* +0x2d54d1 */ __asm { NOT R10D }
    /* +0x2d54d4 */ __asm { ADD R10D,EBX }
    /* +0x2d54d7 */ __asm { IMUL R10D,R10D,-0x58b7 }
    /* +0x2d54de */ __asm { ADD R10D,R15D }
    /* +0x2d54e1 */ __asm { ROL R10W,0xd }
    /* +0x2d54e6 */ __asm { MOV RCX,qword ptr [R9 + RDX*0x8 + 0x13] }
    /* +0x2d54eb */ __asm { MOVSX R10,R10W }
    /* +0x2d54ef */ __asm { XOR RCX,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x2d54f4 */ __asm { MOVQ XMM2,RCX }
    /* +0x2d54f9 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2d54fd */ __asm { PXOR XMM4,XMM2 }
    /* +0x2d5501 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2d5506 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2d550a */ __asm { TEST R8,R8 }
    /* +0x2d550d */ __asm { JNZ 0x7fffa4a47841 }
    /* +0x2d5513 */ __asm { MOV R10W,0x1bc2 }
    /* +0x2d5518 */ __asm { MOV RDX,qword ptr [RBP + 0x108] }
    /* +0x2d551f */ __asm { MOV R8D,EDX }
    /* +0x2d5522 */ __asm { OR R8D,0x1 }
    /* +0x2d5526 */ __asm { MOV qword ptr [RBP + 0xd8],R8 }
    /* +0x2d552d */ __asm { IMUL R10D,R8D }
    /* +0x2d5531 */ __asm { NOT R10D }
    /* +0x2d5534 */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x2d553b */ __asm { MOV ECX,R11D }
    /* +0x2d553e */ __asm { ROL R10W,CL }
    /* +0x2d5542 */ __asm { XOR R10D,0x7dcc }
    /* +0x2d5549 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2d5550 */ __asm { SUB R10D,ECX }
    /* +0x2d5553 */ __asm { MOVZX R8D,R10W }
    /* +0x2d5557 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2d555b */ __asm { MOV R10W,0x1306 }
    /* +0x2d5560 */ __asm { IMUL R10D,R10D,-0x7bff }
    /* +0x2d5567 */ __asm { ADD R10D,EDX }
    /* +0x2d556a */ __asm { ROL R10W,CL }
    /* +0x2d556e */ __asm { SUB R10D,R11D }
    /* +0x2d5571 */ __asm { MOVZX R8D,R10W }
    /* +0x2d5575 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2d5579 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2d5583 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2d5587 */ __asm { NOP }
    /* +0x2d5588 */ __asm { NOP }
    /* +0x2d5589 */ __asm { NOP }
    /* +0x2d558a */ __asm { NOP }
    /* +0x2d558b */ __asm { NOP }
    /* +0x2d558c */ __asm { MOV R10W,0x3063 }
    /* +0x2d5591 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2d5595 */ __asm { MOV qword ptr [RBP + 0x1498],RAX }
    /* +0x2d559c */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2d55a3 */ __asm { MOV R8D,EAX }
    /* +0x2d55a6 */ __asm { XOR R8D,R10D }
    /* +0x2d55a9 */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x2d55b0 */ __asm { MOV R10,qword ptr [RBP + 0x108] }
    /* +0x2d55b7 */ __asm { ADD R10D,EAX }
    /* +0x2d55ba */ __asm { SUB R8D,R10D }
    /* +0x2d55bd */ __asm { PUSHFQ }
    /* +0x2d55be */ __asm { POP RDX }
    /* +0x2d55bf */ __asm { AND EDX,0x100 }
    /* +0x2d55c5 */ __asm { ADD R8D,0xfffffd6a }
    /* +0x2d55cc */ __asm { MOVZX R8D,R8W }
    /* +0x2d55d0 */ __asm { MOV qword ptr [RBP + 0x1b8],RDX }
    /* +0x2d55d7 */ __asm { MOV qword ptr [RBP + 0x12c0],R8 }
    /* +0x2d55de */ __asm { CMP RDX,R8 }
    /* +0x2d55e1 */ __asm { NOP }
    /* +0x2d55e2 */ __asm { NOP }
    /* +0x2d55e3 */ __asm { NOP }
    /* +0x2d55e4 */ __asm { NOP }
    /* +0x2d55e5 */ __asm { NOP }
    /* +0x2d55e6 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2d55ed */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2d55f1 */ __asm { TEST R10D,R10D }
    /* +0x2d55f4 */ __asm { NOP }
    /* +0x2d55f5 */ __asm { NOP }
    /* +0x2d55f6 */ __asm { NOP }
    /* +0x2d55f7 */ __asm { NOP }
    /* +0x2d55f8 */ __asm { NOP }
    /* +0x2d55f9 */ __asm { ADD qword ptr [RBP + 0x1498],0x10 }
    /* +0x2d5601 */ __asm { MOVD XMM2,dword ptr [RBP + 0x1418] }
    /* +0x2d5609 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x2d5610 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2d5613 */ __asm { MOV qword ptr [RBP + 0x1498],RAX }
    /* +0x2d561a */ __asm { PUSHFQ }
    /* +0x2d561b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2d5623 */ __asm { POPFQ }
    /* +0x2d5624 */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2d562b */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2d562f */ __asm { CMP R10D,0xfcebf0f4 }
    /* +0x2d5636 */ __asm { JBE 0x7fffa4a458ba }
    /* +0x2d563c */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x2d5643 */ __asm { MOVZX R8D,word ptr [RAX + 0x58] }
    /* +0x2d5648 */ __asm { CMP R8D,0x2 }
    /* +0x2d564c */ __asm { JNC 0x7fffa4a45656 }
    /* +0x2d564e */ __asm { XOR R10D,R10D }
    /* +0x2d5651 */ __asm { JMP 0x7fffa4a45891 }
    /* +0x2d5656 */ __asm { MOV RCX,R8 }
    /* +0x2d5659 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x2d5660 */ __asm { MOV R11,qword ptr [RAX + 0x60] }
    /* +0x2d5664 */ __asm { SHR ECX,0x1 }
    /* +0x2d5666 */ __asm { MOV qword ptr [RBP + 0x12c8],RCX }
    /* +0x2d566d */ __asm { CMP CX,0x1 }
    /* +0x2d5671 */ __asm { JZ 0x7fffa4a45839 }
    /* +0x2d5677 */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2d567e */ __asm { AND EAX,0xfffffffe }
    /* +0x2d5681 */ __asm { MOV qword ptr [RBP + 0x11d8],RAX }
    /* +0x2d5688 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x2d5692 */ __asm { XOR R14D,R14D }
    /* +0x2d5695 */ __asm { JMP 0x7fffa4a4572f }
    /* +0x2d569a */ __asm { XOR R10D,R10D }
    /* +0x2d569d */ __asm { IMUL EDX,R13D,-0x6d75 }
    /* +0x2d56a4 */ __asm { XOR EDX,dword ptr [RBP + 0x11e0] }
    /* +0x2d56aa */ __asm { ADD R14,0x2 }
    /* +0x2d56ae */ __asm { MOVZX ECX,DIL }
    /* +0x2d56b2 */ __asm { XOR RCX,R15 }
    /* +0x2d56b5 */ __asm { MOV RBX,0x10000000014b }
    /* +0x2d56bf */ __asm { IMUL RCX,RBX }
    /* +0x2d56c3 */ __asm { MOVD XMM4,EDX }
    /* +0x2d56c7 */ __asm { PSUBW XMM4,XMM2 }
    /* +0x2d56cb */ __asm { MOV EDX,R8D }
    /* +0x2d56ce */ __asm { NOT EDX }
    /* +0x2d56d0 */ __asm { MOV EAX,R8D }
    /* +0x2d56d3 */ __asm { AND EAX,0xfe }
    /* +0x2d56d8 */ __asm { AND EDX,0x1 }
    /* +0x2d56db */ __asm { IMUL EDX,EDX,-0x5c1a }
    /* +0x2d56e1 */ __asm { MOVZX R8D,R8B }
    /* +0x2d56e5 */ __asm { XOR R8D,0x1 }
    /* +0x2d56e9 */ __asm { IMUL R8D,R8D,-0x70de }
    /* +0x2d56f0 */ __asm { MOV R9,qword ptr [RBP + 0x108] }
    /* +0x2d56f7 */ __asm { XOR ESI,R9D }
    /* +0x2d56fa */ __asm { ADD ESI,dword ptr [RBP + 0x1418] }
    /* +0x2d5700 */ __asm { ADD ESI,R10D }
    /* +0x2d5703 */ __asm { ADD ESI,EDX }
    /* +0x2d5705 */ __asm { MOVD R10D,XMM4 }
    /* +0x2d570a */ __asm { XOR R10D,R9D }
    /* +0x2d570d */ __asm { IMUL R10D,EAX }
    /* +0x2d5711 */ __asm { ADD R10D,R8D }
    /* +0x2d5714 */ __asm { ADD R10D,ESI }
    /* +0x2d5717 */ __asm { MOVZX R15D,R10W }
    /* +0x2d571b */ __asm { XOR R15,RCX }
    /* +0x2d571e */ __asm { IMUL R15,RBX }
    /* +0x2d5722 */ __asm { CMP qword ptr [RBP + 0x11d8],R14 }
    /* +0x2d5729 */ __asm { JZ 0x7fffa4a45846 }
    /* +0x2d572f */ __asm { MOV R13W,0x46e }
    /* +0x2d5734 */ __asm { MOV R12W,0xece4 }
    /* +0x2d5739 */ __asm { MOV SI,0x4bab }
    /* +0x2d573d */ __asm { MOV R10D,0x5df9a1a8 }
    /* +0x2d5743 */ __asm { ADD R10D,0x55f14c20 }
    /* +0x2d574a */ __asm { MOV R8D,0x3eb4806c }
    /* +0x2d5750 */ __asm { MOV EAX,0x8cdb546b }
    /* +0x2d5755 */ __asm { XOR EAX,0x4a0be7fd }
    /* +0x2d575a */ __asm { ADD EAX,0xb1a7ead7 }
    /* +0x2d575f */ __asm { MOVZX ECX,word ptr [R11 + R14*0x2] }
    /* +0x2d5764 */ __asm { MOV EDI,ECX }
    /* +0x2d5766 */ __asm { OR EDI,0x20 }
    /* +0x2d5769 */ __asm { LEA EDX,[RCX + -0x41] }
    /* +0x2d576c */ __asm { CMP DX,0x1a }
    /* +0x2d5770 */ __asm { CMOVNC EDI,ECX }
    /* +0x2d5773 */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2d577a */ __asm { MOV ECX,EDX }
    /* +0x2d577c */ __asm { ROL R10D,CL }
    /* +0x2d577f */ __asm { MOV RBX,qword ptr [RBP + 0x108] }
    /* +0x2d5786 */ __asm { ADD R10D,EBX }
    /* +0x2d5789 */ __asm { MOV R9,qword ptr [RBP + 0x11e0] }
    /* +0x2d5790 */ __asm { MOV ECX,R9D }
    /* +0x2d5793 */ __asm { ROL R10D,CL }
    /* +0x2d5796 */ __asm { IMUL EAX,dword ptr [RBP + 0x150] }
    /* +0x2d579d */ __asm { MOV ECX,EDX }
    /* +0x2d579f */ __asm { ROR EAX,CL }
    /* +0x2d57a1 */ __asm { XOR R8D,R9D }
    /* +0x2d57a4 */ __asm { ROR R8D,CL }
    /* +0x2d57a7 */ __asm { MOV ECX,EBX }
    /* +0x2d57a9 */ __asm { ROL R8D,CL }
    /* +0x2d57ac */ __asm { MOV ECX,0xf4a25c6c }
    /* +0x2d57b1 */ __asm { SUB ECX,R8D }
    /* +0x2d57b4 */ __asm { MOVZX R8D,word ptr [R11 + R14*0x2 + 0x2] }
    /* +0x2d57ba */ __asm { CMP RAX,RCX }
    /* +0x2d57bd */ __asm { JA 0x7fffa4a457c5 }
    /* +0x2d57bf */ __asm { LEA ECX,[R8 + 0x41] }
    /* +0x2d57c3 */ __asm { JMP 0x7fffa4a457cc }
    /* +0x2d57c5 */ __asm { LEA ECX,[R8 + 0xffbf] }
    /* +0x2d57cc */ __asm { XOR EDX,EDX }
    /* +0x2d57ce */ __asm { XOR EAX,EAX }
    /* +0x2d57d0 */ __asm { CMP CX,0x1a }
    /* +0x2d57d4 */ __asm { SETNZ DL }
    /* +0x2d57d7 */ __asm { SETC AL }
    /* +0x2d57da */ __asm { MOV ECX,0x753d1f66 }
    /* +0x2d57df */ __asm { IMUL ECX,dword ptr [RBP + 0x104] }
    /* +0x2d57e6 */ __asm { ADD ECX,dword ptr [RBP + 0x108] }
    /* +0x2d57ec */ __asm { ROL ECX,0x2 }
    /* +0x2d57ef */ __asm { NOT ECX }
    /* +0x2d57f1 */ __asm { MOVSXD RCX,ECX }
    /* +0x2d57f4 */ __asm { CMP R10,RCX }
    /* +0x2d57f7 */ __asm { CMOVG EDX,EAX }
    /* +0x2d57fa */ __asm { TEST DL,DL }
    /* +0x2d57fc */ __asm { JZ 0x7fffa4a45802 }
    /* +0x2d57fe */ __asm { OR R8D,0x20 }
    /* +0x2d5802 */ __asm { ADD ESI,0x5320 }
    /* +0x2d5808 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2d580f */ __asm { ROL SI,CL }
    /* +0x2d5812 */ __asm { TEST R8B,0x1 }
    /* +0x2d5816 */ __asm { JZ 0x7fffa4a4569a }
    /* +0x2d581c */ __asm { ADD R12D,dword ptr [RBP + 0x108] }
    /* +0x2d5823 */ __asm { IMUL R10D,R12D,-0x6033 }
    /* +0x2d582a */ __asm { XOR R10D,dword ptr [RBP + 0x1418] }
    /* +0x2d5831 */ __asm { NOT R10D }
    /* +0x2d5834 */ __asm { JMP 0x7fffa4a4569d }
    /* +0x2d5839 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x2d5843 */ __asm { XOR R14D,R14D }
    /* +0x2d5846 */ __asm { TEST uint8_t ptr [RBP + 0x12c8],0x1 }
    /* +0x2d584d */ __asm { JZ 0x7fffa4a45880 }
    /* +0x2d584f */ __asm { MOVZX R8D,word ptr [R11 + R14*0x2] }
    /* +0x2d5854 */ __asm { LEA R10D,[R8 + -0x41] }
    /* +0x2d5858 */ __asm { MOV R11D,R8D }
    /* +0x2d585b */ __asm { OR R11D,0x20 }
    /* +0x2d585f */ __asm { CMP R10W,0x1a }
    /* +0x2d5864 */ __asm { CMOVNC R11D,R8D }
    /* +0x2d5868 */ __asm { MOVZX R8D,R11B }
    /* +0x2d586c */ __asm { XOR R8,R15 }
    /* +0x2d586f */ __asm { MOV RAX,0x10000000014b }
    /* +0x2d5879 */ __asm { IMUL R8,RAX }
    /* +0x2d587d */ __asm { MOV R15,R8 }
    /* +0x2d5880 */ __asm { MOV RAX,0x39cda41577e4d47d }
    /* +0x2d588a */ __asm { CMP R15,RAX }
    /* +0x2d588d */ __asm { SETZ R10B }
    /* +0x2d5891 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2d5898 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2d589c */ __asm { CMP R8D,0x26bd4fb8 }
    /* +0x2d58a3 */ __asm { JNC 0x7fffa4a458c2 }
    /* +0x2d58a5 */ __asm { TEST R10B,R10B }
    /* +0x2d58a8 */ __asm { JNZ 0x7fffa4a458d1 }
    /* +0x2d58aa */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2d58b1 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2d58b5 */ __asm { JMP 0x7fffa4a45609 }
    /* +0x2d58ba */ __asm { RET }
    /* +0x2d58c2 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2d58c7 */ __asm { NOP }
    /* +0x2d58c8 */ __asm { NOP }
    /* +0x2d58c9 */ __asm { NOP }
    /* +0x2d58ca */ __asm { NOP }
    /* +0x2d58cb */ __asm { NOP }
    /* +0x2d58cc */ __asm { NOP }
    /* +0x2d58cd */ __asm { NOP }
    /* +0x2d58ce */ __asm { NOP }
    /* +0x2d58cf */ __asm { NOP }
    /* +0x2d58d0 */ __asm { NOP }
    /* +0x2d58d1 */ __asm { NOP }
    /* +0x2d58d2 */ __asm { NOP }
    /* +0x2d58d3 */ __asm { NOP }
    /* +0x2d58d4 */ __asm { NOP }
    /* +0x2d58d5 */ __asm { NOP }
    /* +0x2d58d6 */ __asm { NOP }
    /* +0x2d58d7 */ __asm { NOP }
    /* +0x2d7841 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2d7848 */ __asm { CALL R8 }
    /* +0x2d784b */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2d7854 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2d785e */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2d7868 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2d7872 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2d7878 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2d787f */ __asm { ADD RSP,0xc8 }
    /* +0x2d7886 */ __asm { POP R14 }
    /* +0x2d7888 */ __asm { POP R15 }
    /* +0x2d788a */ __asm { POP R13 }
    /* +0x2d788c */ __asm { POP R12 }
    /* +0x2d788e */ __asm { POP RDI }
    /* +0x2d788f */ __asm { POP RBX }
    /* +0x2d7890 */ __asm { POP RSI }
    /* +0x2d7891 */ __asm { POP RBP }
    /* +0x2d7892 */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa4a478a0  |  RVA: 0x2d78a0  |  Size: 124 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a478a0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint16_t uVar2;
  
  uVar2 = ~((short)*(uint64_t *)(param_2 + 0x1480) * -0x37db);
  (*(code *)((int64_t)(short)(uVar2 << 5 | uVar2 >> 0xb) + 0x7fffa562b3d9))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a47920  |  RVA: 0x2d7920  |  Size: 130 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a47920(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  
  uVar3 = 0x50a2 - (short)*(uint32_t *)(param_2 + 0x1498);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0xf;
  (*(code *)(&UNK_7fffa562b690 + (short)(uVar3 >> bVar2 | uVar3 << 0x10 - bVar2)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a479b0  |  RVA: 0x2d79b0  |  Size: 119 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a479b0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)(int)(*(uint32_t *)(param_2 + 0x1498) ^ 0x5ed5b6bf) + 0x7fffa5634df3))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a47a30  |  RVA: 0x2d7a30  |  Size: 408 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a47a30(void) {
    /* +0x2d7a30 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2d7a35 */ __asm { PUSH RBP }
    /* +0x2d7a36 */ __asm { PUSH RSI }
    /* +0x2d7a37 */ __asm { PUSH RBX }
    /* +0x2d7a38 */ __asm { PUSH RDI }
    /* +0x2d7a39 */ __asm { PUSH R12 }
    /* +0x2d7a3b */ __asm { PUSH R13 }
    /* +0x2d7a3d */ __asm { PUSH R15 }
    /* +0x2d7a3f */ __asm { PUSH R14 }
    /* +0x2d7a41 */ __asm { SUB RSP,0xc8 }
    /* +0x2d7a48 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2d7a4f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2d7a56 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2d7a5c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2d7a66 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2d7a70 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2d7a7a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2d7a83 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2d7a8b */ __asm { JZ 0x7fffa4a49ec0 }
    /* +0x2d7a91 */ __asm { MOV R10D,0xebae98fc }
    /* +0x2d7a97 */ __asm { ADD R10D,0x38416700 }
    /* +0x2d7a9e */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2d7aa5 */ __asm { ROR R10D,CL }
    /* +0x2d7aa8 */ __asm { MOVSXD RAX,R10D }
    /* +0x2d7aab */ __asm { MOV R10W,0x4798 }
    /* +0x2d7ab0 */ __asm { XOR R10D,ECX }
    /* +0x2d7ab3 */ __asm { ROL R10W,0x1 }
    /* +0x2d7ab7 */ __asm { LEA RCX,[0x7fffa47bd417] }
    /* +0x2d7abe */ __asm { MOV R8W,0xacf7 }
    /* +0x2d7ac3 */ __asm { MOVSX R10,R10W }
    /* +0x2d7ac7 */ __asm { MOVZX R10D,uint8_t ptr [RCX + R10*0x1 + 0x9] }
    /* +0x2d7acd */ __asm { IMUL R8D,dword ptr [RBP + 0x1400] }
    /* +0x2d7ad5 */ __asm { ADD R8D,0x11da }
    /* +0x2d7adc */ __asm { ROL R8W,0x3 }
    /* +0x2d7ae1 */ __asm { MOVSX RCX,R8W }
    /* +0x2d7ae5 */ __asm { LEA R8,[0x7fffa47cb4b1] }
    /* +0x2d7aec */ __asm { ADD R8,RAX }
    /* +0x2d7aef */ __asm { MOV RAX,qword ptr [R8 + R10*0x8 + 0x13] }
    /* +0x2d7af4 */ __asm { LEA R8,[0x7fffa47be62e] }
    /* +0x2d7afb */ __asm { XOR RAX,qword ptr [R8 + RCX*0x1 + 0x52] }
    /* +0x2d7b00 */ __asm { MOVQ XMM2,RAX }
    /* +0x2d7b05 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2d7b09 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2d7b0d */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2d7b12 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2d7b16 */ __asm { TEST R8,R8 }
    /* +0x2d7b19 */ __asm { JNZ 0x7fffa4a49eb6 }
    /* +0x2d7b1f */ __asm { MOV R10W,0x28da }
    /* +0x2d7b24 */ __asm { IMUL R10D,R10D,0x2353 }
    /* +0x2d7b2b */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x2d7b32 */ __asm { ADD R10D,R11D }
    /* +0x2d7b35 */ __asm { ROL R10W,0x7 }
    /* +0x2d7b3a */ __asm { MOVZX R8D,R10W }
    /* +0x2d7b3e */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2d7b42 */ __asm { MOV R10W,0xc36d }
    /* +0x2d7b47 */ __asm { LEA R10D,[R11 + R10*0x1 + -0x768f] }
    /* +0x2d7b4f */ __asm { MOVZX R8D,R10W }
    /* +0x2d7b53 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2d7b57 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2d7b61 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2d7b65 */ __asm { NOP }
    /* +0x2d7b66 */ __asm { NOP }
    /* +0x2d7b67 */ __asm { NOP }
    /* +0x2d7b68 */ __asm { NOP }
    /* +0x2d7b69 */ __asm { NOP }
    /* +0x2d7b6a */ __asm { NOP }
    /* +0x2d7b6b */ __asm { NOP }
    /* +0x2d7b6c */ __asm { NOP }
    /* +0x2d7b6d */ __asm { NOP }
    /* +0x2d7b6e */ __asm { NOP }
    /* +0x2d7b6f */ __asm { NOP }
    /* +0x2d7b70 */ __asm { NOP }
    /* +0x2d7b71 */ __asm { NOP }
    /* +0x2d7b72 */ __asm { NOP }
    /* +0x2d7b73 */ __asm { NOP }
    /* +0x2d7b74 */ __asm { NOP }
    /* +0x2d7b75 */ __asm { NOP }
    /* +0x2d9eb6 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2d9ebd */ __asm { CALL R8 }
    /* +0x2d9ec0 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2d9ec9 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2d9ed3 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2d9edd */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2d9ee7 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2d9eed */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2d9ef4 */ __asm { ADD RSP,0xc8 }
    /* +0x2d9efb */ __asm { POP R14 }
    /* +0x2d9efd */ __asm { POP R15 }
    /* +0x2d9eff */ __asm { POP R13 }
    /* +0x2d9f01 */ __asm { POP R12 }
    /* +0x2d9f03 */ __asm { POP RDI }
    /* +0x2d9f04 */ __asm { POP RBX }
    /* +0x2d9f05 */ __asm { POP RSI }
    /* +0x2d9f06 */ __asm { POP RBP }
    /* +0x2d9f07 */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa4a49f10  |  RVA: 0x2d9f10  |  Size: 132 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a49f10(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint16_t uVar2;
  
  uVar2 = ~((uint16_t)*(uint32_t *)(param_2 + 0x188) ^ 0x4d8f);
  uVar2 = (uVar2 << 2 | uVar2 >> 0xe) ^ (uint16_t)*(uint32_t *)(param_2 + 0x1498);
  (*(code *)(&UNK_7fffa562949b + (short)(uVar2 << 2 | uVar2 >> 0xe)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a49fa0  |  RVA: 0x2d9fa0  |  Size: 129 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a49fa0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)(&UNK_7fffa5627fcf +
            (short)(~((-0x2b72 - (short)*(uint32_t *)(param_2 + 0x1498)) * 0x31e5) * -0x1375)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a4a030  |  RVA: 0x2da030  |  Size: 140 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a4a030(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  (*(code *)(&UNK_7fffa5629594 +
            (short)(((uint16_t)*(uint64_t *)(param_2 + 0x1260) ^
                    (0xcb7U >> bVar2 | 0xcb7 << 0x10 - bVar2)) + 0x24ec)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a4a0c0  |  RVA: 0x2da0c0  |  Size: 240 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a4a0c0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)
                      (short)(((short)*(uint64_t *)(param_2 + 0x1498) + -0x371e) * 0x7c35) +
                     0x7fffa568956c);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a4a1b0  |  RVA: 0x2da1b0  |  Size: 232 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a4a1b0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)(short)~((short)*(uint64_t *)(param_2 + 0x1498) + 0xa1afU) +
                     0x7fffa568d132);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a4a2a0  |  RVA: 0x2da2a0  |  Size: 255 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a4a2a0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar2 = (uint32_t)*(uint64_t *)(param_2 + 0x1498) ^ 0x5ec88c4d;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0x1f;
    (*(code *)((int64_t)(int)(uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) + 0x7fffa5696a38))
              (*(uint64_t *)(param_2 + 0x1260),*(uint64_t *)(param_2 + 0x1498),
               *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a4a3a0  |  RVA: 0x2da3a0  |  Size: 3887 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a4a3a0(void) {
    /* +0x2da3a0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2da3a5 */ __asm { PUSH RBP }
    /* +0x2da3a6 */ __asm { PUSH RSI }
    /* +0x2da3a7 */ __asm { PUSH RBX }
    /* +0x2da3a8 */ __asm { PUSH RDI }
    /* +0x2da3a9 */ __asm { PUSH R12 }
    /* +0x2da3ab */ __asm { PUSH R13 }
    /* +0x2da3ad */ __asm { PUSH R15 }
    /* +0x2da3af */ __asm { PUSH R14 }
    /* +0x2da3b1 */ __asm { SUB RSP,0xc8 }
    /* +0x2da3b8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2da3bf */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2da3c6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2da3cc */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2da3d6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2da3e0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2da3ea */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2da3f3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2da3fb */ __asm { JZ 0x7fffa4a4c11b }
    /* +0x2da401 */ __asm { MOV R8W,0xdf16 }
    /* +0x2da406 */ __asm { MOV R10W,0x8240 }
    /* +0x2da40b */ __asm { ADD R10D,0x6bfd }
    /* +0x2da412 */ __asm { MOV R11D,0xde113e0c }
    /* +0x2da418 */ __asm { MOV RCX,qword ptr [RBP + 0x1400] }
    /* +0x2da41f */ __asm { IMUL ECX,R10D }
    /* +0x2da423 */ __asm { MOVSX RAX,CX }
    /* +0x2da427 */ __asm { ADD R11D,0x376542bd }
    /* +0x2da42e */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2da435 */ __asm { XOR R8D,EDX }
    /* +0x2da438 */ __asm { NOT R8D }
    /* +0x2da43b */ __asm { MOVSX R10,R8W }
    /* +0x2da43f */ __asm { LEA RCX,[0x7fffa47c29f1] }
    /* +0x2da446 */ __asm { LEA R8,[0x7fffa47ca195] }
    /* +0x2da44d */ __asm { XOR R11D,EDX }
    /* +0x2da450 */ __asm { IMUL R11D,R11D,-0x591768cb }
    /* +0x2da457 */ __asm { MOVSXD R9,R11D }
    /* +0x2da45a */ __asm { MOVZX R8D,uint8_t ptr [R8 + R9*0x1 + 0x9] }
    /* +0x2da460 */ __asm { LEA R9,[0x7fffa47bd8e5] }
    /* +0x2da467 */ __asm { ADD R9,RAX }
    /* +0x2da46a */ __asm { MOV RAX,qword ptr [R9 + R8*0x8 + 0x13] }
    /* +0x2da46f */ __asm { XOR RAX,qword ptr [RCX + R10*0x1 + 0x52] }
    /* +0x2da474 */ __asm { MOVQ XMM2,RAX }
    /* +0x2da479 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2da47d */ __asm { PXOR XMM4,XMM2 }
    /* +0x2da481 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2da486 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2da48a */ __asm { TEST R8,R8 }
    /* +0x2da48d */ __asm { JNZ 0x7fffa4a4c111 }
    /* +0x2da493 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2da49a */ __asm { NOP }
    /* +0x2da49b */ __asm { MOV RAX,0x0 }
    /* +0x2da4a2 */ __asm { MOV R10W,0xfa96 }
    /* +0x2da4a7 */ __asm { XOR R10D,0xe10 }
    /* +0x2da4ae */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x2da4b5 */ __asm { ADD R10D,R11D }
    /* +0x2da4b8 */ __asm { MOVZX R8D,R10W }
    /* +0x2da4bc */ __asm { XOR R8,0xa7b8 }
    /* +0x2da4c3 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2da4c7 */ __asm { MOV R10W,0x29e8 }
    /* +0x2da4cc */ __asm { IMUL R10D,R10D,0x4773 }
    /* +0x2da4d3 */ __asm { ROL R10W,0x4 }
    /* +0x2da4d8 */ __asm { SUB R10D,R11D }
    /* +0x2da4db */ __asm { MOVZX R8D,R10W }
    /* +0x2da4df */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2da4e3 */ __asm { MOV R8D,0xef326775 }
    /* +0x2da4e9 */ __asm { ADD R8D,0xe071b1c }
    /* +0x2da4f0 */ __asm { ROL R8D,0x17 }
    /* +0x2da4f4 */ __asm { ADD R8D,R11D }
    /* +0x2da4f7 */ __asm { XOR R8,qword ptr [RCX + 0x60] }
    /* +0x2da4fb */ __asm { MOV RCX,-0x522953e89cc5a3a7 }
    /* +0x2da505 */ __asm { IMUL RCX,R8 }
    /* +0x2da509 */ __asm { MOV R8,0x13b4d1f5bbb981e4 }
    /* +0x2da513 */ __asm { CMP RCX,R8 }
    /* +0x2da516 */ __asm { NOP }
    /* +0x2da517 */ __asm { NOP }
    /* +0x2da518 */ __asm { NOP }
    /* +0x2da519 */ __asm { NOP }
    /* +0x2da51a */ __asm { NOP }
    /* +0x2da51b */ __asm { PUSHFQ }
    /* +0x2da51c */ __asm { POP R8 }
    /* +0x2da51e */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2da522 */ __asm { MOV qword ptr [RBP + 0x1410],R8 }
    /* +0x2da529 */ __asm { TEST R8D,0x100 }
    /* +0x2da530 */ __asm { NOP }
    /* +0x2da531 */ __asm { NOP }
    /* +0x2da532 */ __asm { NOP }
    /* +0x2da533 */ __asm { NOP }
    /* +0x2da534 */ __asm { NOP }
    /* +0x2da535 */ __asm { NOP }
    /* +0x2da536 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x2da53d */ __asm { MOV R11,0x0 }
    /* +0x2da544 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2da54b */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2da54f */ __asm { TEST R10D,R10D }
    /* +0x2da552 */ __asm { NOP }
    /* +0x2da553 */ __asm { NOP }
    /* +0x2da554 */ __asm { NOP }
    /* +0x2da555 */ __asm { NOP }
    /* +0x2da556 */ __asm { NOP }
    /* +0x2da557 */ __asm { ADD RAX,0x10 }
    /* +0x2da55b */ __asm { MOV RCX,-0x56ac57fd56f4aa33 }
    /* +0x2da565 */ __asm { MOV R8,0x10000000014b }
    /* +0x2da56f */ __asm { MOV R9,0x39cda41577e4d47d }
    /* +0x2da579 */ __asm { MOV R10D,0x9b6d1c3f }
    /* +0x2da57f */ __asm { IMUL R10D,R10D,0x462736b1 }
    /* +0x2da586 */ __asm { NOT R10D }
    /* +0x2da589 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2da58c */ __asm { PUSHFQ }
    /* +0x2da58d */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2da595 */ __asm { POPFQ }
    /* +0x2da596 */ __asm { MOV dword ptr [RBP + -0x8],R10D }
    /* +0x2da59a */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2da59e */ __asm { CMP R10D,0xfcebf0f4 }
    /* +0x2da5a5 */ __asm { JBE 0x7fffa4a4a6a1 }
    /* +0x2da5ab */ __asm { MOVZX R11D,word ptr [RAX + 0x58] }
    /* +0x2da5b0 */ __asm { CMP R11D,0x2 }
    /* +0x2da5b4 */ __asm { JNC 0x7fffa4a4a5be }
    /* +0x2da5b6 */ __asm { XOR R10D,R10D }
    /* +0x2da5b9 */ __asm { JMP 0x7fffa4a4a678 }
    /* +0x2da5be */ __asm { MOV R10,qword ptr [RAX + 0x60] }
    /* +0x2da5c2 */ __asm { SHR R11D,0x1 }
    /* +0x2da5c5 */ __asm { MOV DX,0x4c9e }
    /* +0x2da5c9 */ __asm { ADD EDX,0x22f }
    /* +0x2da5cf */ __asm { ROL DX,0x6 }
    /* +0x2da5d3 */ __asm { SUB EDX,dword ptr [RBP + 0x1418] }
    /* +0x2da5d9 */ __asm { CMP R11W,DX }
    /* +0x2da5dd */ __asm { JZ 0x7fffa4a4a63f }
    /* +0x2da5df */ __asm { MOV EBX,R11D }
    /* +0x2da5e2 */ __asm { AND EBX,0xfffffffe }
    /* +0x2da5e5 */ __asm { MOV R13,RCX }
    /* +0x2da5e8 */ __asm { XOR R14D,R14D }
    /* +0x2da5eb */ __asm { MOVZX EDX,word ptr [R10 + R14*0x2] }
    /* +0x2da5f0 */ __asm { LEA ESI,[RDX + -0x41] }
    /* +0x2da5f3 */ __asm { MOV R15D,EDX }
    /* +0x2da5f6 */ __asm { OR R15D,0x20 }
    /* +0x2da5fa */ __asm { CMP SI,0x1a }
    /* +0x2da5fe */ __asm { CMOVNC R15D,EDX }
    /* +0x2da602 */ __asm { MOVZX EDX,R15B }
    /* +0x2da606 */ __asm { XOR RDX,R13 }
    /* +0x2da609 */ __asm { MOVZX R15D,word ptr [R10 + R14*0x2 + 0x2] }
    /* +0x2da60f */ __asm { ADD R14,0x2 }
    /* +0x2da613 */ __asm { MOV ESI,R15D }
    /* +0x2da616 */ __asm { OR ESI,0x20 }
    /* +0x2da619 */ __asm { LEA R13D,[R15 + -0x41] }
    /* +0x2da61d */ __asm { CMP R13W,0x1a }
    /* +0x2da622 */ __asm { CMOVNC ESI,R15D }
    /* +0x2da626 */ __asm { MOVZX R15D,SIL }
    /* +0x2da62a */ __asm { IMUL RDX,R8 }
    /* +0x2da62e */ __asm { XOR RDX,R15 }
    /* +0x2da631 */ __asm { IMUL RDX,R8 }
    /* +0x2da635 */ __asm { MOV R13,RDX }
    /* +0x2da638 */ __asm { CMP RBX,R14 }
    /* +0x2da63b */ __asm { JNZ 0x7fffa4a4a5eb }
    /* +0x2da63d */ __asm { JMP 0x7fffa4a4a645 }
    /* +0x2da63f */ __asm { MOV RDX,RCX }
    /* +0x2da642 */ __asm { XOR R14D,R14D }
    /* +0x2da645 */ __asm { TEST R11B,0x1 }
    /* +0x2da649 */ __asm { JZ 0x7fffa4a4a671 }
    /* +0x2da64b */ __asm { MOVZX R11D,word ptr [R10 + R14*0x2] }
    /* +0x2da650 */ __asm { MOV R10D,R11D }
    /* +0x2da653 */ __asm { OR R10D,0x20 }
    /* +0x2da657 */ __asm { LEA ESI,[R11 + -0x41] }
    /* +0x2da65b */ __asm { CMP SI,0x1a }
    /* +0x2da65f */ __asm { CMOVNC R10D,R11D }
    /* +0x2da663 */ __asm { MOVZX R11D,R10B }
    /* +0x2da667 */ __asm { XOR R11,RDX }
    /* +0x2da66a */ __asm { IMUL R11,R8 }
    /* +0x2da66e */ __asm { MOV RDX,R11 }
    /* +0x2da671 */ __asm { CMP RDX,R9 }
    /* +0x2da674 */ __asm { SETZ R10B }
    /* +0x2da678 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2da67f */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x2da683 */ __asm { CMP R11D,0x26bd4fb8 }
    /* +0x2da68a */ __asm { JNC 0x7fffa4a4a6a9 }
    /* +0x2da68c */ __asm { TEST R10B,R10B }
    /* +0x2da68f */ __asm { JNZ 0x7fffa4a4a6b8 }
    /* +0x2da691 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2da698 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2da69c */ __asm { JMP 0x7fffa4a4a579 }
    /* +0x2da6a1 */ __asm { RET }
    /* +0x2da6a9 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2da6ae */ __asm { JNS 0x7fffa4a4a6eb }
    /* +0x2da6b0 */ __asm { IRETD }
    /* +0x2da6b8 */ __asm { MOV R10W,0x3663 }
    /* +0x2da6bd */ __asm { IMUL R10D,R10D,0x75ad }
    /* +0x2da6c4 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2da6cb */ __asm { ROL R10W,CL }
    /* +0x2da6cf */ __asm { NOT R10D }
    /* +0x2da6d2 */ __asm { MOVZX R8D,R10W }
    /* +0x2da6d6 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2da6da */ __asm { MOV R8,0x432683e3afdf2b29 }
    /* +0x2da6e4 */ __asm { CMP RCX,R8 }
    /* +0x2da6e7 */ __asm { NOP }
    /* +0x2da6e8 */ __asm { NOP }
    /* +0x2da6e9 */ __asm { NOP }
    /* +0x2da6ea */ __asm { NOP }
    /* +0x2da6eb */ __asm { NOP }
    /* +0x2da6ec */ __asm { NOP }
    /* +0x2da6ed */ __asm { NOP }
    /* +0x2da6ee */ __asm { NOP }
    /* +0x2da6ef */ __asm { NOP }
    /* +0x2da6f0 */ __asm { NOP }
    /* +0x2da6f1 */ __asm { NOP }
    /* +0x2da6f2 */ __asm { NOP }
    /* +0x2da6f3 */ __asm { NOP }
    /* +0x2da6f4 */ __asm { NOP }
    /* +0x2da6f5 */ __asm { NOP }
    /* +0x2da6f6 */ __asm { MOV RCX,qword ptr [RAX + 0x30] }
    /* +0x2da6fa */ __asm { MOV R10W,0x8dcf }
    /* +0x2da6ff */ __asm { SUB R10D,dword ptr [RBP + 0x1418] }
    /* +0x2da706 */ __asm { IMUL R10D,R10D,0x1e31 }
    /* +0x2da70d */ __asm { MOVZX R8D,R10W }
    /* +0x2da711 */ __asm { XOR R8,0x778d }
    /* +0x2da718 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2da71c */ __asm { MOV qword ptr [RBP + 0x108],RCX }
    /* +0x2da723 */ __asm { TEST RCX,RCX }
    /* +0x2da726 */ __asm { JZ 0x7fffa4a4a8ba }
    /* +0x2da72c */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2da733 */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x2da737 */ __asm { ADD R8,RAX }
    /* +0x2da73a */ __asm { JZ 0x7fffa4a4a8ba }
    /* +0x2da740 */ __asm { MOV R10W,0x760d }
    /* +0x2da745 */ __asm { XOR R10D,0x85f2 }
    /* +0x2da74c */ __asm { ROL R10W,0xa }
    /* +0x2da751 */ __asm { NOT R10D }
    /* +0x2da754 */ __asm { MOVZX R11D,R10W }
    /* +0x2da758 */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x2da75c */ __asm { MOV RAX,qword ptr [RAX + 0xfe8] }
    /* +0x2da763 */ __asm { MOV R10W,0x289d }
    /* +0x2da768 */ __asm { XOR R10D,0x2891 }
    /* +0x2da76f */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2da776 */ __asm { ROL R10W,CL }
    /* +0x2da77a */ __asm { MOVZX R11D,R10W }
    /* +0x2da77e */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x2da782 */ __asm { ADD RAX,qword ptr [RCX + 0x370] }
    /* +0x2da789 */ __asm { MOV RCX,-0x5d293fd390ef0015 }
    /* +0x2da793 */ __asm { CMP RAX,RCX }
    /* +0x2da796 */ __asm { NOP }
    /* +0x2da797 */ __asm { NOP }
    /* +0x2da798 */ __asm { NOP }
    /* +0x2da799 */ __asm { NOP }
    /* +0x2da79a */ __asm { NOP }
    /* +0x2da79b */ __asm { MOV RCX,qword ptr [R8 + 0x88] }
    /* +0x2da7a2 */ __asm { MOV qword ptr [RBP + 0x11d8],0x0 }
    /* +0x2da7ad */ __asm { MOV R10D,0xffffffff }
    /* +0x2da7b3 */ __asm { MOV qword ptr [RBP + 0x1498],RCX }
    /* +0x2da7ba */ __asm { AND R10,RCX }
    /* +0x2da7bd */ __asm { JZ 0x7fffa4a4a8dd }
    /* +0x2da7c3 */ __asm { MOV RAX,qword ptr [RBP + 0x1498] }
    /* +0x2da7ca */ __asm { SHR RAX,0x20 }
    /* +0x2da7ce */ __asm { JZ 0x7fffa4a4a8dd }
    /* +0x2da7d4 */ __asm { TEST dword ptr [RBP + 0x1410],0x100 }
    /* +0x2da7de */ __asm { NOP }
    /* +0x2da7df */ __asm { NOP }
    /* +0x2da7e0 */ __asm { NOP }
    /* +0x2da7e1 */ __asm { NOP }
    /* +0x2da7e2 */ __asm { NOP }
    /* +0x2da7e3 */ __asm { NOP }
    /* +0x2da7e4 */ __asm { NOP }
    /* +0x2da7e5 */ __asm { NOP }
    /* +0x2da7e6 */ __asm { NOP }
    /* +0x2da7e7 */ __asm { MOV dword ptr [RBP + -0x8],0xaa54569c }
    /* +0x2da7ee */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2da7f2 */ __asm { TEST R8D,R8D }
    /* +0x2da7f5 */ __asm { NOP }
    /* +0x2da7f6 */ __asm { NOP }
    /* +0x2da7f7 */ __asm { NOP }
    /* +0x2da7f8 */ __asm { NOP }
    /* +0x2da7f9 */ __asm { NOP }
    /* +0x2da7fa */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2da801 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x1c],0x0 }
    /* +0x2da807 */ __asm { JZ 0x7fffa4a4a8c7 }
    /* +0x2da80d */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2da814 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x20],0x0 }
    /* +0x2da81a */ __asm { JZ 0x7fffa4a4a8c7 }
    /* +0x2da820 */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2da827 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x24],0x0 }
    /* +0x2da82d */ __asm { JZ 0x7fffa4a4a8c7 }
    /* +0x2da833 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2da83a */ __asm { MOV RAX,0x0 }
    /* +0x2da841 */ __asm { NOP }
    /* +0x2da842 */ __asm { MOV dword ptr [RBP + -0x8],0xb1676a98 }
    /* +0x2da849 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2da84d */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2da854 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x1c] }
    /* +0x2da859 */ __asm { ADD R8,RAX }
    /* +0x2da85c */ __asm { MOV qword ptr [RBP + 0x12c8],R8 }
    /* +0x2da863 */ __asm { MOV dword ptr [RBP + -0x8],0x5d52e0ba }
    /* +0x2da86a */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2da86e */ __asm { CMP R8D,0xb5807139 }
    /* +0x2da875 */ __asm { NOP }
    /* +0x2da876 */ __asm { NOP }
    /* +0x2da877 */ __asm { NOP }
    /* +0x2da878 */ __asm { NOP }
    /* +0x2da879 */ __asm { NOP }
    /* +0x2da87a */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2da881 */ __asm { MOV R12D,dword ptr [RAX + R10*0x1 + 0x20] }
    /* +0x2da886 */ __asm { ADD R12,RAX }
    /* +0x2da889 */ __asm { MOV dword ptr [RBP + -0x8],0x7c0c5dd9 }
    /* +0x2da890 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2da894 */ __asm { MOV R14D,dword ptr [RAX + R10*0x1 + 0x24] }
    /* +0x2da899 */ __asm { ADD R14,RAX }
    /* +0x2da89c */ __asm { MOV dword ptr [RBP + -0x8],0x8645c168 }
    /* +0x2da8a3 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2da8a7 */ __asm { MOV ESI,dword ptr [RAX + R10*0x1 + 0x10] }
    /* +0x2da8ac */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x18] }
    /* +0x2da8b1 */ __asm { MOV qword ptr [RBP + 0x11d8],R8 }
    /* +0x2da8b8 */ __asm { JMP 0x7fffa4a4a8dd }
    /* +0x2da8ba */ __asm { MOV qword ptr [RBP + 0x11d8],0x0 }
    /* +0x2da8c5 */ __asm { JMP 0x7fffa4a4a8dd }
    /* +0x2da8c7 */ __asm { MOV dword ptr [RBP + -0x8],0x49080108 }
    /* +0x2da8ce */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2da8d2 */ __asm { MOV qword ptr [RBP + 0x11d8],0x0 }
    /* +0x2da8dd */ __asm { MOV R8,qword ptr [RBP + 0x1498] }
    /* +0x2da8e4 */ __asm { MOV R13,R8 }
    /* +0x2da8e7 */ __asm { SHR R13,0x20 }
    /* +0x2da8eb */ __asm { ADD R13D,R8D }
    /* +0x2da8ee */ __asm { XOR R15D,R15D }
    /* +0x2da8f1 */ __asm { MOV qword ptr [RBP + 0x1318],0x0 }
    /* +0x2da8fc */ __asm { MOV RBX,qword ptr [RBP + 0x108] }
    /* +0x2da903 */ __asm { JMP 0x7fffa4a4a990 }
    /* +0x2da908 */ __asm { MOV R10W,0x8da2 }
    /* +0x2da90d */ __asm { XOR R10D,0x8db5 }
    /* +0x2da914 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2da91b */ __asm { ROL R10W,CL }
    /* +0x2da91f */ __asm { ADD R10D,0x4 }
    /* +0x2da923 */ __asm { MOVZX R8D,R10W }
    /* +0x2da927 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2da92b */ __asm { MOV R10W,0xec13 }
    /* +0x2da930 */ __asm { XOR R10D,ECX }
    /* +0x2da933 */ __asm { ADD R10D,0xffffa0ef }
    /* +0x2da93a */ __asm { MOVZX R8D,R10W }
    /* +0x2da93e */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2da942 */ __asm { MOV R8D,0x6a8 }
    /* +0x2da948 */ __asm { ADD RCX,R8 }
    /* +0x2da94b */ __asm { IMUL RCX,qword ptr [RAX + 0xc00] }
    /* +0x2da953 */ __asm { ROL RCX,0xe }
    /* +0x2da957 */ __asm { MOV EAX,0xe1a59754 }
    /* +0x2da95c */ __asm { ADD RCX,RAX }
    /* +0x2da95f */ __asm { MOV RAX,-0x604808cc4313a1c7 }
    /* +0x2da969 */ __asm { CMP RCX,RAX }
    /* +0x2da96c */ __asm { JZ 0x7fffa4a4ab8f }
    /* +0x2da972 */ __asm { XOR R8D,R8D }
    /* +0x2da975 */ __asm { INC R15 }
    /* +0x2da978 */ __asm { MOV RAX,0x0 }
    /* +0x2da97f */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2da986 */ __asm { NOP }
    /* +0x2da987 */ __asm { TEST R8,R8 }
    /* +0x2da98a */ __asm { JNZ 0x7fffa4a4bfa0 }
    /* +0x2da990 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2da997 */ __asm { MOV RAX,0x0 }
    /* +0x2da99e */ __asm { NOP }
    /* +0x2da99f */ __asm { CMP R15,qword ptr [RBP + 0x11d8] }
    /* +0x2da9a6 */ __asm { JZ 0x7fffa4a4ab9a }
    /* +0x2da9ac */ __asm { MOV R10D,0x460e4f8a }
    /* +0x2da9b2 */ __asm { MOV R8D,0x493c8305 }
    /* +0x2da9b8 */ __asm { IMUL R11D,R10D,0x5bca46dd }
    /* +0x2da9bf */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2da9c6 */ __asm { ROL R11D,CL }
    /* +0x2da9c9 */ __asm { MOV R10D,0x49a8fbdb }
    /* +0x2da9cf */ __asm { ADD R8D,0xd33c82fe }
    /* +0x2da9d6 */ __asm { IMUL R8D,dword ptr [RBP + 0x104] }
    /* +0x2da9de */ __asm { NOT R8D }
    /* +0x2da9e1 */ __asm { SUB R10D,ECX }
    /* +0x2da9e4 */ __asm { ROR R10D,0x1 }
    /* +0x2da9e7 */ __asm { MOVSXD RCX,R10D }
    /* +0x2da9ea */ __asm { MOV EDX,dword ptr [R12 + R15*0x4] }
    /* +0x2da9ee */ __asm { LEA RAX,[RBX + RDX*0x1] }
    /* +0x2da9f2 */ __asm { MOVSX RDI,word ptr [R14 + R15*0x2] }
    /* +0x2da9f7 */ __asm { MOVZX R10D,DI }
    /* +0x2da9fb */ __asm { MOV R9D,ESI }
    /* +0x2da9fe */ __asm { XOR R9D,R10D }
    /* +0x2daa01 */ __asm { TEST RDX,RDX }
    /* +0x2daa04 */ __asm { CMOVZ RAX,RDX }
    /* +0x2daa08 */ __asm { MOV qword ptr [RBP],RAX }
    /* +0x2daa0c */ __asm { XOR R11D,0xb5aa46c2 }
    /* +0x2daa13 */ __asm { CMP R11,R8 }
    /* +0x2daa16 */ __asm { MOVZX R8D,DI }
    /* +0x2daa1a */ __asm { CMOVG R8,RDI }
    /* +0x2daa1e */ __asm { MOV R11,qword ptr [RBP + 0x12c8] }
    /* +0x2daa25 */ __asm { MOV R8D,dword ptr [R11 + R8*0x4] }
    /* +0x2daa29 */ __asm { CMP R8D,R13D }
    /* +0x2daa2c */ __asm { SETC DL }
    /* +0x2daa2f */ __asm { MOV R11D,R8D }
    /* +0x2daa32 */ __asm { ADD R11,RBX }
    /* +0x2daa35 */ __asm { CMP R8D,dword ptr [RBP + 0x1498] }
    /* +0x2daa3c */ __asm { SETNC R8B }
    /* +0x2daa40 */ __asm { AND R8B,DL }
    /* +0x2daa43 */ __asm { ADD R10D,ESI }
    /* +0x2daa46 */ __asm { CMP RCX,0x3c6676df }
    /* +0x2daa4d */ __asm { CMOVZ R10D,R9D }
    /* +0x2daa51 */ __asm { MOV qword ptr [RBP + -0x8],R11 }
    /* +0x2daa55 */ __asm { MOV uint8_t ptr [RBP + 0xc],R8B }
    /* +0x2daa59 */ __asm { MOV dword ptr [RBP + 0x8],R10D }
    /* +0x2daa5d */ __asm { TEST RAX,RAX }
    /* +0x2daa60 */ __asm { JZ 0x7fffa4a4ab70 }
    /* +0x2daa66 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2daa6d */ __asm { NOP }
    /* +0x2daa6e */ __asm { MOV RAX,0x0 }
    /* +0x2daa75 */ __asm { MOV dword ptr [RBP + 0x12e8],0x52658ddc }
    /* +0x2daa7f */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x2daa86 */ __asm { MOV R10,qword ptr [RBP] }
    /* +0x2daa8a */ __asm { MOVZX EDX,uint8_t ptr [R10] }
    /* +0x2daa8e */ __asm { TEST DL,DL }
    /* +0x2daa90 */ __asm { JZ 0x7fffa4a4a908 }
    /* +0x2daa96 */ __asm { LEA RAX,[R10 + 0x1] }
    /* +0x2daa9a */ __asm { MOV R8D,0xb5383f }
    /* +0x2daaa0 */ __asm { MOVZX R11D,DL }
    /* +0x2daaa4 */ __asm { XOR R11D,R8D }
    /* +0x2daaa7 */ __asm { IMUL R8D,R11D,0x10001ab }
    /* +0x2daaae */ __asm { MOVZX EDX,uint8_t ptr [RAX] }
    /* +0x2daab1 */ __asm { INC RAX }
    /* +0x2daab4 */ __asm { TEST DL,DL }
    /* +0x2daab6 */ __asm { JNZ 0x7fffa4a4aaa0 }
    /* +0x2daab8 */ __asm { MOV R11D,0x9e19411e }
    /* +0x2daabe */ __asm { ADD R11D,0xb1b5c8f5 }
    /* +0x2daac5 */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x2daacd */ __asm { AND R8D,0x7fffffff }
    /* +0x2daad4 */ __asm { CMP R8D,R11D }
    /* +0x2daad7 */ __asm { JNZ 0x7fffa4a4a908 }
    /* +0x2daadd */ __asm { MOV RAX,qword ptr [RBP + 0x1318] }
    /* +0x2daae4 */ __asm { TEST RAX,RAX }
    /* +0x2daae7 */ __asm { CMOVZ RAX,R10 }
    /* +0x2daaeb */ __asm { MOV qword ptr [RBP + 0x1318],RAX }
    /* +0x2daaf2 */ __asm { CMP uint8_t ptr [RBP + 0xc],0x1 }
    /* +0x2daaf6 */ __asm { JNZ 0x7fffa4a4ab86 }
    /* +0x2daafc */ __asm { LEA RAX,[0x7fffa52bd9ba] }
    /* +0x2dab03 */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2dab0a */ __asm { MOV R11,RCX }
    /* +0x2dab0d */ __asm { SHL R11,0x1b }
    /* +0x2dab11 */ __asm { ADD R11,RCX }
    /* +0x2dab14 */ __asm { LEA RCX,[RBP + -0x8] }
    /* +0x2dab18 */ __asm { MOV R10,RCX }
    /* +0x2dab1b */ __asm { SHL R10,0x3a }
    /* +0x2dab1f */ __asm { ADD R10,RCX }
    /* +0x2dab22 */ __asm { ADD R10,-0x47bfba14 }
    /* +0x2dab29 */ __asm { MOV R8D,0xd31bdb18 }
    /* +0x2dab2f */ __asm { IMUL EDX,R8D,-0x7b0b205f }
    /* +0x2dab36 */ __asm { NOT EDX }
    /* +0x2dab38 */ __asm { MOV R8W,0xeecd }
    /* +0x2dab3d */ __asm { ADD R8D,0xffffc27e }
    /* +0x2dab44 */ __asm { ROL R8W,0xe }
    /* +0x2dab49 */ __asm { XOR R11,0x2320a5df }
    /* +0x2dab50 */ __asm { IMUL R8D,dword ptr [RBP + 0x1400] }
    /* +0x2dab58 */ __asm { MOVSX RCX,R8W }
    /* +0x2dab5c */ __asm { ADD RCX,RAX }
    /* +0x2dab5f */ __asm { CALL RCX }
    /* +0x2dab61 */ __asm { MOV R8,RCX }
    /* +0x2dab64 */ __asm { ADD R8,-0x526c897e }
    /* +0x2dab6b */ __asm { JMP 0x7fffa4a4a975 }
    /* +0x2dab70 */ __asm { MOV dword ptr [RBP + 0x12e8],0xe74f1127 }
    /* +0x2dab7a */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x2dab81 */ __asm { JMP 0x7fffa4a4a972 }
    /* +0x2dab86 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2dab8a */ __asm { JMP 0x7fffa4a4a975 }
    /* +0x2dab8f */ __asm { ADD CL,uint8_t ptr [R13 + -0x161312f2] }
    /* +0x2dab96 */ __asm { FDIVR ST0,ST5 }
    /* +0x2dab9a */ __asm { CMP qword ptr [RBP + 0x1318],0x0 }
    /* +0x2daba2 */ __asm { JNZ 0x7fffa4a4abac }
    /* +0x2daba4 */ __asm { XOR R8D,R8D }
    /* +0x2daba7 */ __asm { JMP 0x7fffa4a4bfa0 }
    /* +0x2dabac */ __asm { MOV qword ptr [RBP + 0x12e8],0x0 }
    /* +0x2dabb7 */ __asm { CMP qword ptr [RBP + 0x108],0x0 }
    /* +0x2dabbf */ __asm { JZ 0x7fffa4a4b147 }
    /* +0x2dabc5 */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2dabcc */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x2dabd0 */ __asm { ADD R8,RAX }
    /* +0x2dabd3 */ __asm { JZ 0x7fffa4a4b147 }
    /* +0x2dabd9 */ __asm { MOV R10W,0xc754 }
    /* +0x2dabde */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2dabe5 */ __asm { XOR R10D,EDX }
    /* +0x2dabe8 */ __asm { ADD R10D,0xffff8c2a }
    /* +0x2dabef */ __asm { MOVZX R11D,R10W }
    /* +0x2dabf3 */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x2dabf7 */ __asm { MOV R10W,0xba9a }
    /* +0x2dabfc */ __asm { SUB R10D,EDX }
    /* +0x2dabff */ __asm { ROL R10W,0x1 }
    /* +0x2dac03 */ __asm { MOV RAX,qword ptr [RAX + 0xfe8] }
    /* +0x2dac0a */ __asm { IMUL R10D,R10D,0x760b }
    /* +0x2dac11 */ __asm { MOVZX R11D,R10W }
    /* +0x2dac15 */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x2dac19 */ __asm { MOV R10D,0x375859b4 }
    /* +0x2dac1f */ __asm { ADD RAX,qword ptr [RCX + 0x370] }
    /* +0x2dac26 */ __asm { MOV RCX,0x5531bc4a55849bdf }
    /* +0x2dac30 */ __asm { IMUL RCX,RAX }
    /* +0x2dac34 */ __asm { SUB R10D,EDX }
    /* +0x2dac37 */ __asm { IMUL R11D,R10D,-0x604460ad }
    /* +0x2dac3e */ __asm { ADD R11D,0x1cbf2f9a }
    /* +0x2dac45 */ __asm { MOV RAX,0x8000000108b }
    /* +0x2dac4f */ __asm { XOR RAX,RCX }
    /* +0x2dac52 */ __asm { SUB RAX,R11 }
    /* +0x2dac55 */ __asm { MOV RCX,0x510bcd9e777526de }
    /* +0x2dac5f */ __asm { CMP RAX,RCX }
    /* +0x2dac62 */ __asm { NOP }
    /* +0x2dac63 */ __asm { NOP }
    /* +0x2dac64 */ __asm { NOP }
    /* +0x2dac65 */ __asm { NOP }
    /* +0x2dac66 */ __asm { NOP }
    /* +0x2dac67 */ __asm { MOV R10W,0x4d93 }
    /* +0x2dac6c */ __asm { MOV R11D,0x4d93 }
}


// ============================================================================
// Function : Unwind@7fffa4a4c170  |  RVA: 0x2dc170  |  Size: 122 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a4c170(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)(&UNK_7fffa563341a + ((int)*(uint64_t *)(param_2 + 0x1498) + 0x5ed46c74)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a4c1f0  |  RVA: 0x2dc1f0  |  Size: 466 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a4c1f0(void) {
    /* +0x2dc1f0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2dc1f5 */ __asm { PUSH RBP }
    /* +0x2dc1f6 */ __asm { PUSH RSI }
    /* +0x2dc1f7 */ __asm { PUSH RBX }
    /* +0x2dc1f8 */ __asm { PUSH RDI }
    /* +0x2dc1f9 */ __asm { PUSH R12 }
    /* +0x2dc1fb */ __asm { PUSH R13 }
    /* +0x2dc1fd */ __asm { PUSH R15 }
    /* +0x2dc1ff */ __asm { PUSH R14 }
    /* +0x2dc201 */ __asm { SUB RSP,0xc8 }
    /* +0x2dc208 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2dc20f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2dc216 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2dc21c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2dc226 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2dc230 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2dc23a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2dc243 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2dc24b */ __asm { JZ 0x7fffa4a4e50d }
    /* +0x2dc251 */ __asm { LEA RAX,[0x7fffa47c9f5d] }
    /* +0x2dc258 */ __asm { LEA R8,[0x7fffa47bd8af] }
    /* +0x2dc25f */ __asm { MOV R10D,0xd5c5b5fe }
    /* +0x2dc265 */ __asm { MOV R11W,0xd1dd }
    /* +0x2dc26a */ __asm { MOV RDX,qword ptr [RBP + 0x11e0] }
    /* +0x2dc271 */ __asm { ADD R11D,EDX }
    /* +0x2dc274 */ __asm { XOR R11D,0xffff9e5b }
    /* +0x2dc27b */ __asm { ADD R11D,0x1d }
    /* +0x2dc27f */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2dc286 */ __asm { ROR R11W,CL }
    /* +0x2dc28a */ __asm { ADD R10D,ECX }
    /* +0x2dc28d */ __asm { MOVSX R11,R11W }
    /* +0x2dc291 */ __asm { MOV ESI,EDX }
    /* +0x2dc293 */ __asm { OR ESI,0x1 }
    /* +0x2dc296 */ __asm { LEA R9,[0x7fffa47c1109] }
    /* +0x2dc29d */ __asm { MOVZX R9D,uint8_t ptr [R9 + R11*0x1 + 0x9] }
    /* +0x2dc2a3 */ __asm { MOV R11W,0x83d3 }
    /* +0x2dc2a8 */ __asm { MOV dword ptr [RBP + 0x1318],ESI }
    /* +0x2dc2ae */ __asm { IMUL R11D,ESI }
    /* +0x2dc2b2 */ __asm { ADD R11D,0x2752 }
    /* +0x2dc2b9 */ __asm { ROR R11W,CL }
    /* +0x2dc2bd */ __asm { ROL R11W,0x9 }
    /* +0x2dc2c2 */ __asm { MOVSX RCX,R11W }
    /* +0x2dc2c6 */ __asm { MOV RCX,qword ptr [R8 + RCX*0x1 + 0x52] }
    /* +0x2dc2cb */ __asm { XOR R10D,EDX }
    /* +0x2dc2ce */ __asm { ADD R10D,0x890e0982 }
    /* +0x2dc2d5 */ __asm { ROR R10D,0x1 }
    /* +0x2dc2d8 */ __asm { MOVSXD R8,R10D }
    /* +0x2dc2db */ __asm { ADD R8,RAX }
    /* +0x2dc2de */ __asm { XOR RCX,qword ptr [R8 + R9*0x8 + 0x13] }
    /* +0x2dc2e3 */ __asm { MOVQ XMM2,RCX }
    /* +0x2dc2e8 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2dc2ec */ __asm { PXOR XMM4,XMM2 }
    /* +0x2dc2f0 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2dc2f5 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2dc2f9 */ __asm { TEST R8,R8 }
    /* +0x2dc2fc */ __asm { JNZ 0x7fffa4a4e503 }
    /* +0x2dc302 */ __asm { MOV R10W,0xc216 }
    /* +0x2dc307 */ __asm { MOV ECX,dword ptr [RBP + 0x1318] }
    /* +0x2dc30d */ __asm { IMUL ECX,R10D }
    /* +0x2dc311 */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x2dc318 */ __asm { LEA R10D,[R11 + RCX*0x1] }
    /* +0x2dc31c */ __asm { ADD R10D,0x3070 }
    /* +0x2dc323 */ __asm { MOVZX R8D,R10W }
    /* +0x2dc327 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2dc32b */ __asm { MOV R10W,0x257b }
    /* +0x2dc330 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2dc337 */ __asm { ADD R10D,ECX }
    /* +0x2dc33a */ __asm { XOR R10D,R11D }
    /* +0x2dc33d */ __asm { IMUL R10D,R10D,0x478f }
    /* +0x2dc344 */ __asm { ROL R10W,0x3 }
    /* +0x2dc349 */ __asm { MOVZX R8D,R10W }
    /* +0x2dc34d */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2dc351 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2dc35b */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2dc35f */ __asm { NOP }
    /* +0x2dc360 */ __asm { NOP }
    /* +0x2dc361 */ __asm { NOP }
    /* +0x2dc362 */ __asm { NOP }
    /* +0x2dc363 */ __asm { NOP }
    /* +0x2dc364 */ __asm { NOP }
    /* +0x2dc365 */ __asm { NOP }
    /* +0x2dc366 */ __asm { NOP }
    /* +0x2dc367 */ __asm { NOP }
    /* +0x2dc368 */ __asm { NOP }
    /* +0x2dc369 */ __asm { NOP }
    /* +0x2dc36a */ __asm { NOP }
    /* +0x2dc36b */ __asm { NOP }
    /* +0x2dc36c */ __asm { NOP }
    /* +0x2dc36d */ __asm { NOP }
    /* +0x2dc36e */ __asm { NOP }
    /* +0x2dc36f */ __asm { NOP }
    /* +0x2de503 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2de50a */ __asm { CALL R8 }
    /* +0x2de50d */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2de516 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2de520 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2de52a */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2de534 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2de53a */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2de541 */ __asm { ADD RSP,0xc8 }
    /* +0x2de548 */ __asm { POP R14 }
    /* +0x2de54a */ __asm { POP R15 }
    /* +0x2de54c */ __asm { POP R13 }
    /* +0x2de54e */ __asm { POP R12 }
    /* +0x2de550 */ __asm { POP RDI }
    /* +0x2de551 */ __asm { POP RBX }
    /* +0x2de552 */ __asm { POP RSI }
    /* +0x2de553 */ __asm { POP RBP }
    /* +0x2de554 */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa4a4e560  |  RVA: 0x2de560  |  Size: 1049 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a4e560(void) {
    /* +0x2de560 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2de565 */ __asm { PUSH RBP }
    /* +0x2de566 */ __asm { PUSH RSI }
    /* +0x2de567 */ __asm { PUSH RBX }
    /* +0x2de568 */ __asm { PUSH RDI }
    /* +0x2de569 */ __asm { PUSH R12 }
    /* +0x2de56b */ __asm { PUSH R13 }
    /* +0x2de56d */ __asm { PUSH R15 }
    /* +0x2de56f */ __asm { PUSH R14 }
    /* +0x2de571 */ __asm { SUB RSP,0xc8 }
    /* +0x2de578 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2de57f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2de586 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2de58c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2de596 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2de5a0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2de5aa */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2de5b3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2de5bb */ __asm { JZ 0x7fffa4a5063d }
    /* +0x2de5c1 */ __asm { MOV R10D,0xdc63aa9f }
    /* +0x2de5c7 */ __asm { LEA R9,[0x7fffa47c92dd] }
    /* +0x2de5ce */ __asm { LEA R8,[0x7fffa47be182] }
    /* +0x2de5d5 */ __asm { LEA RAX,[0x7fffa47c7afc] }
    /* +0x2de5dc */ __asm { MOV R11D,0x58857565 }
    /* +0x2de5e2 */ __asm { MOV DX,0x8a9 }
    /* +0x2de5e6 */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x2de5ee */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2de5f5 */ __asm { ROR R11D,CL }
    /* +0x2de5f8 */ __asm { ADD R11D,0x513f76c4 }
    /* +0x2de5ff */ __asm { MOVSXD R14,R11D }
    /* +0x2de602 */ __asm { SUB R10D,ECX }
    /* +0x2de605 */ __asm { XOR R10D,0x7d4abb6e }
    /* +0x2de60c */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x2de613 */ __asm { SUB R10D,R11D }
    /* +0x2de616 */ __asm { MOVSXD R10,R10D }
    /* +0x2de619 */ __asm { ADD R10,R9 }
    /* +0x2de61c */ __asm { LEA R9D,[R11 + RDX*0x1] }
    /* +0x2de620 */ __asm { ADD R9D,0x6d57 }
    /* +0x2de627 */ __asm { XOR R9D,ECX }
    /* +0x2de62a */ __asm { LEA R11D,[R9 + R9*0x4] }
    /* +0x2de62e */ __asm { LEA R11D,[R9 + R11*0x4] }
    /* +0x2de632 */ __asm { MOVSX R9,R11W }
    /* +0x2de636 */ __asm { MOVZX R8D,uint8_t ptr [R8 + R9*0x1 + 0x9] }
    /* +0x2de63c */ __asm { MOV R8,qword ptr [R10 + R8*0x8 + 0x13] }
    /* +0x2de641 */ __asm { XOR R8,qword ptr [RAX + R14*0x1 + 0x52] }
    /* +0x2de646 */ __asm { MOVQ XMM2,R8 }
    /* +0x2de64b */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2de64f */ __asm { PXOR XMM4,XMM2 }
    /* +0x2de653 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2de658 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2de65c */ __asm { TEST R8,R8 }
    /* +0x2de65f */ __asm { JNZ 0x7fffa4a50633 }
    /* +0x2de665 */ __asm { MOV RAX,0x0 }
    /* +0x2de66c */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2de673 */ __asm { NOP }
    /* +0x2de674 */ __asm { MOV R10W,0x9939 }
    /* +0x2de679 */ __asm { ADD R10D,0x6f09 }
    /* +0x2de680 */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x2de687 */ __asm { MOV R8D,EAX }
    /* +0x2de68a */ __asm { XOR R8D,R10D }
    /* +0x2de68d */ __asm { MOV R11,qword ptr [RBP + 0x11e0] }
    /* +0x2de694 */ __asm { ADD R8D,R11D }
    /* +0x2de697 */ __asm { MOVZX R8D,R8W }
    /* +0x2de69b */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2de69f */ __asm { MOV R10W,0x213f }
    /* +0x2de6a4 */ __asm { XOR R10D,R11D }
    /* +0x2de6a7 */ __asm { MOV RCX,qword ptr [RBP + 0x1400] }
    /* +0x2de6ae */ __asm { MOV R8D,ECX }
    /* +0x2de6b1 */ __asm { IMUL R8D,R10D }
    /* +0x2de6b5 */ __asm { MOVZX R8D,R8W }
    /* +0x2de6b9 */ __asm { XOR R8,0x2ccd }
    /* +0x2de6c0 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2de6c4 */ __asm { MOV R10,R11 }
    /* +0x2de6c7 */ __asm { OR R10,0x1 }
    /* +0x2de6cb */ __asm { MOV R8,-0x908003730929a9e }
    /* +0x2de6d5 */ __asm { IMUL R8,R10 }
    /* +0x2de6d9 */ __asm { ROL R8,0x1c }
    /* +0x2de6dd */ __asm { IMUL R8,qword ptr [RBP + 0x11d8] }
    /* +0x2de6e5 */ __asm { XOR R8,qword ptr [RCX + 0x60] }
    /* +0x2de6e9 */ __asm { CMP R8,0x3215ab72 }
    /* +0x2de6f0 */ __asm { NOP }
    /* +0x2de6f1 */ __asm { NOP }
    /* +0x2de6f2 */ __asm { NOP }
    /* +0x2de6f3 */ __asm { NOP }
    /* +0x2de6f4 */ __asm { NOP }
    /* +0x2de6f5 */ __asm { PUSHFQ }
    /* +0x2de6f6 */ __asm { POP R8 }
    /* +0x2de6f8 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2de6fc */ __asm { MOV qword ptr [RBP + 0x1298],R8 }
    /* +0x2de703 */ __asm { TEST R8D,0x100 }
    /* +0x2de70a */ __asm { NOP }
    /* +0x2de70b */ __asm { NOP }
    /* +0x2de70c */ __asm { NOP }
    /* +0x2de70d */ __asm { NOP }
    /* +0x2de70e */ __asm { NOP }
    /* +0x2de70f */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x2de716 */ __asm { NOP }
    /* +0x2de717 */ __asm { MOV R11,0x0 }
    /* +0x2de71e */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2de725 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2de729 */ __asm { TEST R8D,R8D }
    /* +0x2de72c */ __asm { NOP }
    /* +0x2de72d */ __asm { NOP }
    /* +0x2de72e */ __asm { NOP }
    /* +0x2de72f */ __asm { NOP }
    /* +0x2de730 */ __asm { NOP }
    /* +0x2de731 */ __asm { ADD RAX,0x10 }
    /* +0x2de735 */ __asm { MOV R9,0x10000000014b }
    /* +0x2de73f */ __asm { MOV RDX,0x10003f16d8c8 }
    /* +0x2de749 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2de750 */ __asm { SUB ECX,dword ptr [RBP + 0x1418] }
    /* +0x2de756 */ __asm { MOV qword ptr [RBP + 0x12c8],RCX }
    /* +0x2de75d */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2de760 */ __asm { PUSHFQ }
    /* +0x2de761 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2de769 */ __asm { POPFQ }
    /* +0x2de76a */ __asm { MOV ESI,0xd0730b73 }
    /* +0x2de76f */ __asm { ADD ESI,0xdabb10c8 }
    /* +0x2de775 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2de77c */ __asm { ROL ESI,CL }
    /* +0x2de77e */ __asm { IMUL ECX,ESI,0x1b8b06c9 }
    /* +0x2de784 */ __asm { ADD ECX,dword ptr [RBP + 0x1418] }
    /* +0x2de78a */ __asm { MOV dword ptr [RBP + -0x8],ECX }
    /* +0x2de78d */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x2de790 */ __asm { CMP ECX,0xfcebf0f4 }
    /* +0x2de796 */ __asm { JBE 0x7fffa4a4e910 }
    /* +0x2de79c */ __asm { MOVZX R15D,word ptr [RAX + 0x58] }
    /* +0x2de7a1 */ __asm { CMP R15D,0x2 }
    /* +0x2de7a5 */ __asm { JC 0x7fffa4a4e843 }
    /* +0x2de7ab */ __asm { SHR R15D,0x1 }
    /* +0x2de7ae */ __asm { MOV RBX,qword ptr [RAX + 0x60] }
    /* +0x2de7b2 */ __asm { CMP R15W,0x1 }
    /* +0x2de7b7 */ __asm { JNZ 0x7fffa4a4e888 }
    /* +0x2de7bd */ __asm { MOV RCX,-0x56ac57fd56f4aa33 }
    /* +0x2de7c7 */ __asm { XOR R14D,R14D }
    /* +0x2de7ca */ __asm { TEST R15B,0x1 }
    /* +0x2de7ce */ __asm { JZ 0x7fffa4a4e822 }
    /* +0x2de7d0 */ __asm { MOV SI,0x362b }
    /* +0x2de7d4 */ __asm { XOR ESI,dword ptr [RBP + 0x1418] }
    /* +0x2de7da */ __asm { IMUL ESI,ESI,-0x367 }
    /* +0x2de7e0 */ __asm { ADD ESI,0x63f9 }
    /* +0x2de7e6 */ __asm { XOR ESI,dword ptr [RBP + 0x11e0] }
    /* +0x2de7ec */ __asm { NOP }
    /* +0x2de7ee */ __asm { LEA R15,[0x7fffa4770000] }
    /* +0x2de7f5 */ __asm { MOV R13,0x0 }
    /* +0x2de7fc */ __asm { MOVZX EBX,word ptr [RBX + R14*0x2] }
    /* +0x2de801 */ __asm { LEA R15D,[RBX + -0x41] }
    /* +0x2de805 */ __asm { MOV R13D,EBX }
    /* +0x2de808 */ __asm { OR R13D,0x20 }
    /* +0x2de80c */ __asm { CMP R15W,SI }
    /* +0x2de810 */ __asm { CMOVNC R13D,EBX }
    /* +0x2de814 */ __asm { MOVZX EBX,R13B }
    /* +0x2de818 */ __asm { XOR RBX,RCX }
    /* +0x2de81b */ __asm { IMUL RBX,R9 }
    /* +0x2de81f */ __asm { MOV RCX,RBX }
    /* +0x2de822 */ __asm { MOV RBX,-0x761b7898dcf0e830 }
    /* +0x2de82c */ __asm { IMUL RBX,R10 }
    /* +0x2de830 */ __asm { XOR RBX,qword ptr [RBP + 0x1418] }
    /* +0x2de837 */ __asm { XOR RBX,RCX }
    /* +0x2de83a */ __asm { CMP RBX,-0x1 }
    /* +0x2de83e */ __asm { SETZ CL }
    /* +0x2de841 */ __asm { JMP 0x7fffa4a4e845 }
    /* +0x2de843 */ __asm { XOR ECX,ECX }
    /* +0x2de845 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2de84c */ __asm { MOV ESI,dword ptr [RBP + -0x8] }
    /* +0x2de84f */ __asm { CMP ESI,0x26bd4fb8 }
    /* +0x2de855 */ __asm { JNC 0x7fffa4a4e918 }
    /* +0x2de85b */ __asm { TEST CL,CL }
    /* +0x2de85d */ __asm { JNZ 0x7fffa4a4e92a }
    /* +0x2de863 */ __asm { MOV R8D,0xcb82c0bd }
    /* +0x2de869 */ __asm { ADD R8D,dword ptr [RBP + 0x12c8] }
    /* +0x2de870 */ __asm { ROL R8D,0xc }
    /* +0x2de874 */ __asm { ADD R8D,0x3274f0d4 }
    /* +0x2de87b */ __asm { MOV dword ptr [RBP + -0x8],R8D }
    /* +0x2de87f */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2de883 */ __asm { JMP 0x7fffa4a4e75d }
    /* +0x2de888 */ __asm { MOV RCX,0x0 }
    /* +0x2de88f */ __asm { NOP }
    /* +0x2de890 */ __asm { LEA R13,[0x7fffa4770000] }
    /* +0x2de897 */ __asm { MOV EDI,R15D }
    /* +0x2de89a */ __asm { AND EDI,0xfffffffe }
    /* +0x2de89d */ __asm { MOV R14D,0x2 }
    /* +0x2de8a3 */ __asm { MOV RCX,-0x56ac57fd56f4aa33 }
    /* +0x2de8ad */ __asm { MOVZX R12D,word ptr [RBX + R14*0x2 + -0x4] }
    /* +0x2de8b3 */ __asm { MOV ESI,R12D }
    /* +0x2de8b6 */ __asm { OR ESI,0x20 }
    /* +0x2de8b9 */ __asm { MOVZX R13D,word ptr [RBX + R14*0x2 + -0x2] }
    /* +0x2de8bf */ __asm { LEA R8D,[R13 + -0x41] }
    /* +0x2de8c3 */ __asm { MOV R11D,R13D }
    /* +0x2de8c6 */ __asm { OR R11D,0x20 }
    /* +0x2de8ca */ __asm { CMP R8W,0x1a }
    /* +0x2de8cf */ __asm { CMOVNC R11D,R13D }
    /* +0x2de8d3 */ __asm { MOVZX R8D,R11B }
    /* +0x2de8d7 */ __asm { LEA R11D,[R12 + -0x41] }
    /* +0x2de8dc */ __asm { CMP R11W,0x1a }
    /* +0x2de8e1 */ __asm { CMOVNC ESI,R12D }
    /* +0x2de8e5 */ __asm { MOVZX R11D,SIL }
    /* +0x2de8e9 */ __asm { XOR R11,RCX }
    /* +0x2de8ec */ __asm { MOV RCX,RDX }
    /* +0x2de8ef */ __asm { XOR RCX,0x3f16d983 }
    /* +0x2de8f6 */ __asm { IMUL RCX,R11 }
    /* +0x2de8fa */ __asm { XOR RCX,R8 }
    /* +0x2de8fd */ __asm { IMUL RCX,R9 }
    /* +0x2de901 */ __asm { CMP RDI,R14 }
    /* +0x2de904 */ __asm { JZ 0x7fffa4a4e7ca }
    /* +0x2de90a */ __asm { ADD R14,0x2 }
    /* +0x2de90e */ __asm { JMP 0x7fffa4a4e8ad }
    /* +0x2de910 */ __asm { RET }
    /* +0x2de918 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2de91d */ __asm { NOP }
    /* +0x2de91e */ __asm { NOP }
    /* +0x2de91f */ __asm { NOP }
    /* +0x2de920 */ __asm { NOP }
    /* +0x2de921 */ __asm { NOP }
    /* +0x2de922 */ __asm { NOP }
    /* +0x2de923 */ __asm { NOP }
    /* +0x2de924 */ __asm { NOP }
    /* +0x2de925 */ __asm { NOP }
    /* +0x2de926 */ __asm { NOP }
    /* +0x2de927 */ __asm { NOP }
    /* +0x2de928 */ __asm { NOP }
    /* +0x2de929 */ __asm { NOP }
    /* +0x2de92a */ __asm { NOP }
    /* +0x2de92b */ __asm { NOP }
    /* +0x2de92c */ __asm { NOP }
    /* +0x2de92d */ __asm { NOP }
    /* +0x2e0633 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2e063a */ __asm { CALL R8 }
    /* +0x2e063d */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2e0646 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2e0650 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2e065a */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2e0664 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2e066a */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2e0671 */ __asm { ADD RSP,0xc8 }
    /* +0x2e0678 */ __asm { POP R14 }
    /* +0x2e067a */ __asm { POP R15 }
    /* +0x2e067c */ __asm { POP R13 }
    /* +0x2e067e */ __asm { POP R12 }
    /* +0x2e0680 */ __asm { POP RDI }
    /* +0x2e0681 */ __asm { POP RBX }
    /* +0x2e0682 */ __asm { POP RSI }
    /* +0x2e0683 */ __asm { POP RBP }
    /* +0x2e0684 */ __asm { RET }
}


// ============================================================================
// Function : Unwind@7fffa4a50690  |  RVA: 0x2e0690  |  Size: 123 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a50690(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)(&UNK_7fffa5627399 + (short)((short)*(uint64_t *)(param_2 + 0x12a0) * -0x4563)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a50710  |  RVA: 0x2e0710  |  Size: 223 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a50710(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    uVar1 = (int)*(uint64_t *)(param_2 + 0x1498) + 0x1ed5391c;
    (*(code *)((int64_t)(int)(uVar1 * 8 | uVar1 >> 0x1d) + 0x7fffa56918bb))
              (0x7fffa56918bb,*(uint64_t *)(param_2 + 0x1498),
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a507f0  |  RVA: 0x2e07f0  |  Size: 259 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a507f0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x1498);
    uVar3 = uVar4 ^ 0x4476e999;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0x1f;
    pcVar2 = (code *)((int64_t)(int)((uVar3 << bVar1 | uVar3 >> 0x20 - bVar1) + 0xa682c1e3) +
                     0x7fffa5690ec2);
    (*pcVar2)(pcVar2,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250),
              uVar4 - (int)*(uint64_t *)(param_2 + 0x1260));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a50900  |  RVA: 0x2e0900  |  Size: 123 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a50900(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)(short)((short)*(uint64_t *)(param_2 + 0x1480) * -0x7181 ^ 0x8a23) +
            0x7fffa562c9d2))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a50980  |  RVA: 0x2e0980  |  Size: 234 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a50980(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    FUN_7fffa5687c30(FUN_7fffa5687c30,param_2,
                     *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a50a70  |  RVA: 0x2e0a70  |  Size: 240 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a50a70(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    pcVar1 = (code *)((int64_t)(short)((short)*(uint32_t *)(param_2 + 0x1348) + 0x40d0) +
                     0x7fffa568d8e9);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a50b60  |  RVA: 0x2e0b60  |  Size: 254 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a50b60(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    pcVar1 = (code *)((int64_t)
                      (short)(~((uint16_t)*(uint64_t *)(param_2 + 0x1498) ^ 0x12b4) -
                             (short)*(uint64_t *)(param_2 + 0x1260)) + 0x7fffa568e972);
    (*pcVar1)(pcVar1,*(uint64_t *)(param_2 + 0x1498),
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a50c60  |  RVA: 0x2e0c60  |  Size: 243 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a50c60(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t in_R10;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    iVar1 = (int)*(uint64_t *)(param_2 + 0x1480) *
            ((int)CONCAT62((int6)((uint64_t)in_R10 >> 0x10),0xac1c) + 0x6c88);
    (*(code *)((int64_t)(short)iVar1 + 0x7fffa568d304))
              (0x7fffa568d304,iVar1,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a50d60  |  RVA: 0x2e0d60  |  Size: 4571 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a50d60(void) {
    /* +0x2e0d60 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2e0d65 */ __asm { PUSH RBP }
    /* +0x2e0d66 */ __asm { PUSH RSI }
    /* +0x2e0d67 */ __asm { PUSH RBX }
    /* +0x2e0d68 */ __asm { PUSH RDI }
    /* +0x2e0d69 */ __asm { PUSH R12 }
    /* +0x2e0d6b */ __asm { PUSH R13 }
    /* +0x2e0d6d */ __asm { PUSH R15 }
    /* +0x2e0d6f */ __asm { PUSH R14 }
    /* +0x2e0d71 */ __asm { SUB RSP,0xc8 }
    /* +0x2e0d78 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2e0d7f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2e0d86 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2e0d8c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2e0d96 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2e0da0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2e0daa */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2e0db3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2e0dbb */ __asm { JZ 0x7fffa4a50e65 }
    /* +0x2e0dc1 */ __asm { LEA RAX,[0x7fffa47bc450] }
    /* +0x2e0dc8 */ __asm { LEA R8,[0x7fffa47c10f0] }
    /* +0x2e0dcf */ __asm { MOV R10D,0xd6875afd }
    /* +0x2e0dd5 */ __asm { XOR R10D,0x6002d127 }
    /* +0x2e0ddc */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2e0de3 */ __asm { ROR R10D,CL }
    /* +0x2e0de6 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e0ded */ __asm { XOR R10D,ECX }
    /* +0x2e0df0 */ __asm { LEA RDX,[0x7fffa47cb62e] }
    /* +0x2e0df7 */ __asm { MOV R11W,0x62b6 }
    /* +0x2e0dfc */ __asm { ADD R11D,dword ptr [RBP + 0x11e0] }
    /* +0x2e0e03 */ __asm { ROR R11W,0x1 }
    /* +0x2e0e07 */ __asm { MOVSXD R9,R10D }
    /* +0x2e0e0a */ __asm { SUB R11D,ECX }
    /* +0x2e0e0d */ __asm { ROL R11W,0x2 }
    /* +0x2e0e12 */ __asm { ADD R9,RDX }
    /* +0x2e0e15 */ __asm { MOVSX R10,R11W }
    /* +0x2e0e19 */ __asm { MOVZX R10D,uint8_t ptr [R8 + R10*0x1 + 0x9] }
    /* +0x2e0e1f */ __asm { MOV R8,qword ptr [R9 + R10*0x8 + 0x13] }
    /* +0x2e0e24 */ __asm { MOV R10W,0x39ac }
    /* +0x2e0e29 */ __asm { IMUL R11D,R10D,0x46a9 }
    /* +0x2e0e30 */ __asm { ROR R11W,CL }
    /* +0x2e0e34 */ __asm { NOT R11D }
    /* +0x2e0e37 */ __asm { MOVSX R10,R11W }
    /* +0x2e0e3b */ __asm { XOR R8,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x2e0e40 */ __asm { MOVQ XMM2,R8 }
    /* +0x2e0e45 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2e0e49 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2e0e4d */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2e0e52 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2e0e56 */ __asm { TEST R8,R8 }
    /* +0x2e0e59 */ __asm { JZ 0x7fffa4a50ead }
    /* +0x2e0e5b */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2e0e62 */ __asm { CALL R8 }
    /* +0x2e0e65 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2e0e6e */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2e0e78 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2e0e82 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2e0e8c */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2e0e92 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2e0e99 */ __asm { ADD RSP,0xc8 }
    /* +0x2e0ea0 */ __asm { POP R14 }
    /* +0x2e0ea2 */ __asm { POP R15 }
    /* +0x2e0ea4 */ __asm { POP R13 }
    /* +0x2e0ea6 */ __asm { POP R12 }
    /* +0x2e0ea8 */ __asm { POP RDI }
    /* +0x2e0ea9 */ __asm { POP RBX }
    /* +0x2e0eaa */ __asm { POP RSI }
    /* +0x2e0eab */ __asm { POP RBP }
    /* +0x2e0eac */ __asm { RET }
    /* +0x2e0ead */ __asm { MOV R10W,0xdb05 }
    /* +0x2e0eb2 */ __asm { XOR R10D,dword ptr [RBP + 0x11e0] }
    /* +0x2e0eb9 */ __asm { ROL R10W,0x6 }
    /* +0x2e0ebe */ __asm { IMUL R10D,dword ptr [RBP + 0x1400] }
    /* +0x2e0ec6 */ __asm { MOVZX R8D,R10W }
    /* +0x2e0eca */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2e0ece */ __asm { MOV R10W,0x82ec }
    /* +0x2e0ed3 */ __asm { MOV R8D,0xffff83ac }
    /* +0x2e0ed9 */ __asm { SUB R8D,R10D }
    /* +0x2e0edc */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e0ee3 */ __asm { ROR R8W,CL }
    /* +0x2e0ee7 */ __asm { MOVZX R8D,R8W }
    /* +0x2e0eeb */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2e0eef */ __asm { MOV R8,-0x44780309c84fdf3c }
    /* +0x2e0ef9 */ __asm { IMUL R8,qword ptr [RBP + 0x11d8] }
    /* +0x2e0f01 */ __asm { NOT R8 }
    /* +0x2e0f04 */ __asm { MOV R9,qword ptr [RBP + 0x108] }
    /* +0x2e0f0b */ __asm { OR R9,0x1 }
    /* +0x2e0f0f */ __asm { MOV qword ptr [RBP + 0x1220],R9 }
    /* +0x2e0f16 */ __asm { IMUL R8,R9 }
    /* +0x2e0f1a */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2e0f1e */ __asm { NOP }
    /* +0x2e0f1f */ __asm { NOP }
    /* +0x2e0f20 */ __asm { NOP }
    /* +0x2e0f21 */ __asm { NOP }
    /* +0x2e0f22 */ __asm { NOP }
    /* +0x2e0f23 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2e0f27 */ __asm { PUSHFQ }
    /* +0x2e0f28 */ __asm { POP R8 }
    /* +0x2e0f2a */ __asm { MOV qword ptr [RBP + 0x1488],R8 }
    /* +0x2e0f31 */ __asm { TEST R8D,0x100 }
    /* +0x2e0f38 */ __asm { NOP }
    /* +0x2e0f39 */ __asm { NOP }
    /* +0x2e0f3a */ __asm { NOP }
    /* +0x2e0f3b */ __asm { NOP }
    /* +0x2e0f3c */ __asm { NOP }
    /* +0x2e0f3d */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2e0f44 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2e0f48 */ __asm { TEST R10D,R10D }
    /* +0x2e0f4b */ __asm { NOP }
    /* +0x2e0f4c */ __asm { NOP }
    /* +0x2e0f4d */ __asm { NOP }
    /* +0x2e0f4e */ __asm { NOP }
    /* +0x2e0f4f */ __asm { NOP }
    /* +0x2e0f50 */ __asm { MOV R11,0x0 }
    /* +0x2e0f57 */ __asm { NOP }
    /* +0x2e0f58 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x2e0f5f */ __asm { ADD RAX,0x10 }
    /* +0x2e0f63 */ __asm { MOV R9,0x10000000014b }
    /* +0x2e0f6d */ __asm { MOV R10,0x39cda41577e4d47d }
    /* +0x2e0f77 */ __asm { MOV R8,qword ptr [RBP + 0x108] }
    /* +0x2e0f7e */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2e0f81 */ __asm { PUSHFQ }
    /* +0x2e0f82 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2e0f8a */ __asm { POPFQ }
    /* +0x2e0f8b */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2e0f92 */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x2e0f95 */ __asm { CMP EDX,0xfcebf0f4 }
    /* +0x2e0f9b */ __asm { JBE 0x7fffa4a5111f }
    /* +0x2e0fa1 */ __asm { MOVZX EBX,word ptr [RAX + 0x58] }
    /* +0x2e0fa5 */ __asm { CMP EBX,0x2 }
    /* +0x2e0fa8 */ __asm { JC 0x7fffa4a5107f }
    /* +0x2e0fae */ __asm { MOV RDX,qword ptr [RAX + 0x60] }
    /* +0x2e0fb2 */ __asm { MOV CX,0xc5bb }
    /* +0x2e0fb6 */ __asm { IMUL ESI,ECX,0x8d }
    /* +0x2e0fbc */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2e0fc3 */ __asm { ROR SI,CL }
    /* +0x2e0fc6 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e0fcd */ __asm { ROL SI,CL }
    /* +0x2e0fd0 */ __asm { SHR EBX,0x1 }
    /* +0x2e0fd2 */ __asm { ADD ESI,0x5 }
    /* +0x2e0fd5 */ __asm { CMP BX,SI }
    /* +0x2e0fd8 */ __asm { JZ 0x7fffa4a51083 }
    /* +0x2e0fde */ __asm { MOV ECX,EBX }
    /* +0x2e0fe0 */ __asm { AND ECX,0xfffffffe }
    /* +0x2e0fe3 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x2e0fed */ __asm { XOR R14D,R14D }
    /* +0x2e0ff0 */ __asm { MOV ESI,0x57cb3011 }
    /* +0x2e0ff5 */ __asm { MOV EDI,0x6e34223d }
    /* +0x2e0ffa */ __asm { ADD ESI,R8D }
    /* +0x2e0ffd */ __asm { MOVZX R12D,word ptr [RDX + R14*0x2] }
    /* +0x2e1002 */ __asm { MOV R13D,R12D }
    /* +0x2e1005 */ __asm { OR R13D,0x20 }
    /* +0x2e1009 */ __asm { LEA R11D,[R12 + -0x41] }
    /* +0x2e100e */ __asm { CMP R11W,0x1a }
    /* +0x2e1013 */ __asm { CMOVNC R13D,R12D }
    /* +0x2e1017 */ __asm { MOVZX R12D,R13B }
    /* +0x2e101b */ __asm { XOR R12,R15 }
    /* +0x2e101e */ __asm { IMUL R12,R9 }
    /* +0x2e1022 */ __asm { XOR ESI,0x53bb215d }
    /* +0x2e1028 */ __asm { ADD ESI,dword ptr [RBP + 0x1418] }
    /* +0x2e102e */ __asm { MOVSXD R13,ESI }
    /* +0x2e1031 */ __asm { SUB EDI,R8D }
    /* +0x2e1034 */ __asm { ROL EDI,0x1b }
    /* +0x2e1037 */ __asm { IMUL EDI,dword ptr [RBP + 0x104] }
    /* +0x2e103e */ __asm { MOVZX R11D,word ptr [RDX + R14*0x2 + 0x2] }
    /* +0x2e1044 */ __asm { LEA ESI,[R11 + -0x41] }
    /* +0x2e1048 */ __asm { MOV R15D,R11D }
    /* +0x2e104b */ __asm { OR R15D,0x20 }
    /* +0x2e104f */ __asm { CMP SI,0x1a }
    /* +0x2e1053 */ __asm { CMOVNC R15D,R11D }
    /* +0x2e1057 */ __asm { MOVZX R15D,R15B }
    /* +0x2e105b */ __asm { XOR R15,R12 }
    /* +0x2e105e */ __asm { IMUL R15,R9 }
    /* +0x2e1062 */ __asm { CMP RDI,R13 }
    /* +0x2e1065 */ __asm { LEA R11,[R14 + 0x2] }
    /* +0x2e1069 */ __asm { LEA R13,[R14 + R14*0x1] }
    /* +0x2e106d */ __asm { CMOVGE R13,R11 }
    /* +0x2e1071 */ __asm { MOV R14,R13 }
    /* +0x2e1074 */ __asm { CMP R13,RCX }
    /* +0x2e1077 */ __asm { JNZ 0x7fffa4a50ff0 }
    /* +0x2e107d */ __asm { JMP 0x7fffa4a51090 }
    /* +0x2e107f */ __asm { XOR EDX,EDX }
    /* +0x2e1081 */ __asm { JMP 0x7fffa4a510e1 }
    /* +0x2e1083 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x2e108d */ __asm { XOR R13D,R13D }
    /* +0x2e1090 */ __asm { TEST BL,0x1 }
    /* +0x2e1093 */ __asm { JZ 0x7fffa4a510db }
    /* +0x2e1095 */ __asm { MOV RBX,0x1ffff90987403 }
    /* +0x2e109f */ __asm { MOVZX ECX,word ptr [RDX + R13*0x2] }
    /* +0x2e10a4 */ __asm { MOV EDX,ECX }
    /* +0x2e10a6 */ __asm { OR EDX,0x20 }
    /* +0x2e10a9 */ __asm { LEA ESI,[RCX + -0x41] }
    /* +0x2e10ac */ __asm { CMP SI,0x1a }
    /* +0x2e10b0 */ __asm { CMOVNC EDX,ECX }
    /* +0x2e10b3 */ __asm { ADD RBX,0x6f67b55d }
    /* +0x2e10ba */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2e10c1 */ __asm { ROL RBX,CL }
    /* +0x2e10c4 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e10cb */ __asm { ROR RBX,CL }
    /* +0x2e10ce */ __asm { MOVZX ECX,DL }
    /* +0x2e10d1 */ __asm { XOR RCX,R15 }
    /* +0x2e10d4 */ __asm { IMUL RBX,RCX }
    /* +0x2e10d8 */ __asm { MOV R15,RBX }
    /* +0x2e10db */ __asm { CMP R15,R10 }
    /* +0x2e10de */ __asm { SETZ DL }
    /* +0x2e10e1 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2e10e8 */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x2e10eb */ __asm { MOV ESI,0x7f2d84ce }
    /* +0x2e10f0 */ __asm { IMUL ESI,dword ptr [RBP + 0x1498] }
    /* +0x2e10f7 */ __asm { ROL ESI,0x3 }
    /* +0x2e10fa */ __asm { ADD ESI,0x499602b6 }
    /* +0x2e1100 */ __asm { IMUL ESI,dword ptr [RBP + 0x104] }
    /* +0x2e1107 */ __asm { CMP ECX,ESI }
    /* +0x2e1109 */ __asm { JNC 0x7fffa4a51127 }
    /* +0x2e110b */ __asm { TEST DL,DL }
    /* +0x2e110d */ __asm { JNZ 0x7fffa4a51135 }
    /* +0x2e110f */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2e1116 */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x2e111a */ __asm { JMP 0x7fffa4a50f7e }
    /* +0x2e111f */ __asm { RET }
    /* +0x2e1127 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2e112c */ __asm { JNS 0x7fffa4a51169 }
    /* +0x2e112e */ __asm { IRETD }
    /* +0x2e1135 */ __asm { MOV R10W,0x5a46 }
    /* +0x2e113a */ __asm { NOT R10D }
    /* +0x2e113d */ __asm { ADD R10D,dword ptr [RBP + 0x11e0] }
    /* +0x2e1144 */ __asm { ROL R10W,0x4 }
    /* +0x2e1149 */ __asm { MOVZX R8D,R10W }
    /* +0x2e114d */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2e1151 */ __asm { MOV R8,-0x22cd0e9c29844fba }
    /* +0x2e115b */ __asm { IMUL R8,R8,0x69b2f44f }
    /* +0x2e1162 */ __asm { XOR R8,qword ptr [RBP + 0x1418] }
    /* +0x2e1169 */ __asm { ROL R8,0x3b }
    /* +0x2e116d */ __asm { SUB R8,qword ptr [RBP + 0x108] }
    /* +0x2e1174 */ __asm { CMP RCX,R8 }
    /* +0x2e1177 */ __asm { NOP }
    /* +0x2e1178 */ __asm { NOP }
    /* +0x2e1179 */ __asm { NOP }
    /* +0x2e117a */ __asm { NOP }
    /* +0x2e117b */ __asm { NOP }
    /* +0x2e117c */ __asm { NOP }
    /* +0x2e117d */ __asm { NOP }
    /* +0x2e117e */ __asm { NOP }
    /* +0x2e117f */ __asm { NOP }
    /* +0x2e1180 */ __asm { NOP }
    /* +0x2e1181 */ __asm { NOP }
    /* +0x2e1182 */ __asm { NOP }
    /* +0x2e1183 */ __asm { NOP }
    /* +0x2e1184 */ __asm { NOP }
    /* +0x2e1185 */ __asm { NOP }
    /* +0x2e1186 */ __asm { MOV R10W,0x4246 }
    /* +0x2e118b */ __asm { MOV RCX,qword ptr [RAX + 0x30] }
    /* +0x2e118f */ __asm { ADD R10D,0x4479 }
    /* +0x2e1196 */ __asm { ROL R10W,0x1 }
    /* +0x2e119a */ __asm { SUB R10D,dword ptr [RBP + 0x1418] }
    /* +0x2e11a1 */ __asm { XOR R10D,dword ptr [RBP + 0x11e0] }
    /* +0x2e11a8 */ __asm { MOVZX R8D,R10W }
    /* +0x2e11ac */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2e11b0 */ __asm { MOV qword ptr [RBP + 0x12c8],RCX }
    /* +0x2e11b7 */ __asm { TEST RCX,RCX }
    /* +0x2e11ba */ __asm { JZ 0x7fffa4a5144b }
    /* +0x2e11c0 */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2e11c7 */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x2e11cb */ __asm { ADD R8,RAX }
    /* +0x2e11ce */ __asm { JZ 0x7fffa4a5144b }
    /* +0x2e11d4 */ __asm { MOV R10W,0x6ec1 }
    /* +0x2e11d9 */ __asm { MOV RBX,qword ptr [RBP + 0x1418] }
    /* +0x2e11e0 */ __asm { ADD R10D,EBX }
    /* +0x2e11e3 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2e11ea */ __asm { ROR R10W,CL }
    /* +0x2e11ee */ __asm { MOVZX R11D,R10W }
    /* +0x2e11f2 */ __asm { XOR R11,0x10a9 }
    /* +0x2e11f9 */ __asm { MOV R11,qword ptr GS:[R11] }
    /* +0x2e11fd */ __asm { MOV R10D,0x11446762 }
    /* +0x2e1203 */ __asm { MOV SI,0x38df }
    /* +0x2e1207 */ __asm { IMUL ESI,dword ptr [RBP + 0x1400] }
    /* +0x2e120e */ __asm { MOV EDX,R11D }
    /* +0x2e1211 */ __asm { AND EDX,0xfe8 }
    /* +0x2e1217 */ __asm { MOV R9D,0xb41af038 }
    /* +0x2e121d */ __asm { ADD R11,0xfe8 }
    /* +0x2e1224 */ __asm { MOV EAX,0xf23b5103 }
    /* +0x2e1229 */ __asm { SUB EAX,R10D }
    /* +0x2e122c */ __asm { XOR EAX,EBX }
    /* +0x2e122e */ __asm { SUB ESI,ECX }
    /* +0x2e1230 */ __asm { ROL SI,0xc }
    /* +0x2e1234 */ __asm { MOVZX R10D,SI }
    /* +0x2e1238 */ __asm { XOR R9D,EBX }
    /* +0x2e123b */ __asm { MOV R15,qword ptr [RBP + 0x108] }
    /* +0x2e1242 */ __asm { MOV ECX,R15D }
    /* +0x2e1245 */ __asm { ROL R9D,CL }
    /* +0x2e1248 */ __asm { ADD EAX,0x357e4ab7 }
    /* +0x2e124d */ __asm { XOR R9D,0x7d688145 }
    /* +0x2e1254 */ __asm { CMP R9,RAX }
    /* +0x2e1257 */ __asm { CMOVZ R11,RDX }
    /* +0x2e125b */ __asm { MOV RAX,qword ptr [R11] }
    /* +0x2e125e */ __asm { MOV RCX,qword ptr GS:[R10] }
    /* +0x2e1262 */ __asm { MOV R11D,0x56692ead }
    /* +0x2e1268 */ __asm { ADD RAX,qword ptr [RCX + 0x370] }
    /* +0x2e126f */ __asm { MOV RCX,-0x5d293fd390ef0015 }
    /* +0x2e1279 */ __asm { XOR R9D,R9D }
    /* +0x2e127c */ __asm { XOR R10D,R10D }
    /* +0x2e127f */ __asm { CMP RAX,RCX }
    /* +0x2e1282 */ __asm { SETZ R9B }
    /* +0x2e1286 */ __asm { SETL R10B }
    /* +0x2e128a */ __asm { MOV EDX,0x7fcfb475 }
    /* +0x2e128f */ __asm { ADD EDX,R15D }
    /* +0x2e1292 */ __asm { XOR EDX,EBX }
    /* +0x2e1294 */ __asm { ADD R11D,0xc21a6b1e }
    /* +0x2e129b */ __asm { MOV ECX,EBX }
    /* +0x2e129d */ __asm { ROR R11D,CL }
    /* +0x2e12a0 */ __asm { XOR EDX,0xc2114f04 }
    /* +0x2e12a6 */ __asm { SUB R11D,R15D }
    /* +0x2e12a9 */ __asm { CMP R11,RDX }
    /* +0x2e12ac */ __asm { CMOVNC R10D,R9D }
    /* +0x2e12b0 */ __asm { CMP R10B,0x1 }
    /* +0x2e12b4 */ __asm { NOP }
    /* +0x2e12b5 */ __asm { NOP }
    /* +0x2e12b6 */ __asm { NOP }
    /* +0x2e12b7 */ __asm { NOP }
    /* +0x2e12b8 */ __asm { NOP }
    /* +0x2e12b9 */ __asm { MOV R11W,0x1c30 }
    /* +0x2e12be */ __asm { MOV RAX,-0x28712134fc33b743 }
    /* +0x2e12c8 */ __asm { IMUL RAX,qword ptr [RBP + 0x11d8] }
    /* +0x2e12d0 */ __asm { ADD R11D,0x5a26 }
    /* +0x2e12d7 */ __asm { XOR RAX,0x61e643b8 }
    /* +0x2e12dd */ __asm { ROL RAX,0x2 }
    /* +0x2e12e1 */ __asm { XOR R11D,0x7656 }
    /* +0x2e12e8 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2e12ef */ __asm { ROL R11W,CL }
    /* +0x2e12f3 */ __asm { MOV R8,qword ptr [R8 + 0x88] }
    /* +0x2e12fa */ __asm { NOT RAX }
    /* +0x2e12fd */ __asm { MOV qword ptr [RBP + 0x1410],0x0 }
    /* +0x2e1308 */ __asm { MOV qword ptr [RBP + 0x150],R8 }
    /* +0x2e130f */ __asm { CMP R8,RAX }
    /* +0x2e1312 */ __asm { JC 0x7fffa4a51475 }
    /* +0x2e1318 */ __asm { MOV R10D,dword ptr [RBP + 0x150] }
    /* +0x2e131f */ __asm { MOVZX R8D,R11W }
    /* +0x2e1323 */ __asm { CMP R10D,R8D }
    /* +0x2e1326 */ __asm { JZ 0x7fffa4a51475 }
    /* +0x2e132c */ __asm { TEST dword ptr [RBP + 0x1488],0x100 }
    /* +0x2e1336 */ __asm { NOP }
    /* +0x2e1337 */ __asm { NOP }
    /* +0x2e1338 */ __asm { NOP }
    /* +0x2e1339 */ __asm { NOP }
    /* +0x2e133a */ __asm { NOP }
    /* +0x2e133b */ __asm { NOP }
    /* +0x2e133c */ __asm { NOP }
    /* +0x2e133d */ __asm { NOP }
    /* +0x2e133e */ __asm { NOP }
    /* +0x2e133f */ __asm { MOV dword ptr [RBP + -0x8],0xaa54569c }
    /* +0x2e1346 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e134a */ __asm { TEST R8D,R8D }
    /* +0x2e134d */ __asm { NOP }
    /* +0x2e134e */ __asm { NOP }
    /* +0x2e134f */ __asm { NOP }
    /* +0x2e1350 */ __asm { NOP }
    /* +0x2e1351 */ __asm { NOP }
    /* +0x2e1352 */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2e1359 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x1c],0x0 }
    /* +0x2e135f */ __asm { JZ 0x7fffa4a5145f }
    /* +0x2e1365 */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2e136c */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x20],0x0 }
    /* +0x2e1372 */ __asm { JZ 0x7fffa4a5145f }
    /* +0x2e1378 */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2e137f */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x24],0x0 }
    /* +0x2e1385 */ __asm { JZ 0x7fffa4a5145f }
    /* +0x2e138b */ __asm { MOV dword ptr [RBP + -0x8],0xb1676a98 }
    /* +0x2e1392 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e1396 */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2e139d */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x1c] }
    /* +0x2e13a2 */ __asm { MOV qword ptr [RBP + 0x1c0],R8 }
    /* +0x2e13a9 */ __asm { MOV dword ptr [RBP + -0x8],0x5d52e0ba }
    /* +0x2e13b0 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e13b4 */ __asm { CMP R8D,0xb5807139 }
    /* +0x2e13bb */ __asm { NOP }
    /* +0x2e13bc */ __asm { NOP }
    /* +0x2e13bd */ __asm { NOP }
    /* +0x2e13be */ __asm { NOP }
    /* +0x2e13bf */ __asm { NOP }
    /* +0x2e13c0 */ __asm { MOV RAX,qword ptr [RBP + 0x1c0] }
    /* +0x2e13c7 */ __asm { ADD RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2e13ce */ __asm { MOV qword ptr [RBP + 0x1c0],RAX }
    /* +0x2e13d5 */ __asm { MOV R8D,0x669aeba9 }
    /* +0x2e13db */ __asm { MOV R11D,0x3feeba72 }
    /* +0x2e13e1 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x2e13e8 */ __asm { MOV RAX,0x0 }
    /* +0x2e13ef */ __asm { IMUL R8D,dword ptr [RBP + 0x104] }
    /* +0x2e13f7 */ __asm { ROL R8D,0x1e }
    /* +0x2e13fb */ __asm { XOR R8D,dword ptr [RBP + 0x108] }
    /* +0x2e1402 */ __asm { IMUL R11D,R11D,-0x74331f1b }
    /* +0x2e1409 */ __asm { XOR R11D,0x4167a533 }
    /* +0x2e1410 */ __asm { ADD R11D,dword ptr [RBP + 0x1418] }
    /* +0x2e1417 */ __asm { IMUL R11D,dword ptr [RBP + 0x1498] }
    /* +0x2e141f */ __asm { MOVSXD RAX,R11D }
    /* +0x2e1422 */ __asm { CMP R8,RAX }
    /* +0x2e1425 */ __asm { JL 0x7fffa4a5147e }
    /* +0x2e1427 */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2e142e */ __asm { MOV R11D,dword ptr [RAX + R10*0x1 + 0x20] }
    /* +0x2e1433 */ __asm { MOV dword ptr [RBP + 0x12a8],0x7c0c5dd9 }
    /* +0x2e143d */ __asm { MOV R8D,dword ptr [RBP + 0x12a8] }
    /* +0x2e1444 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x24] }
    /* +0x2e1449 */ __asm { JMP 0x7fffa4a514a0 }
    /* +0x2e144b */ __asm { MOV qword ptr [RBP + 0x1410],0x0 }
    /* +0x2e1456 */ __asm { MOV qword ptr [RBP + 0x1318],RAX }
    /* +0x2e145d */ __asm { JMP 0x7fffa4a5147c }
    /* +0x2e145f */ __asm { MOV dword ptr [RBP + -0x8],0x49080108 }
    /* +0x2e1466 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2e146a */ __asm { MOV qword ptr [RBP + 0x1410],0x0 }
    /* +0x2e1475 */ __asm { MOV qword ptr [RBP + 0x1318],RAX }
    /* +0x2e147c */ __asm { JMP 0x7fffa4a514dd }
    /* +0x2e147e */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2e1485 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x24] }
    /* +0x2e148a */ __asm { MOV dword ptr [RBP + 0x12a8],0x7c0c5dd9 }
    /* +0x2e1494 */ __asm { MOV R11D,dword ptr [RAX + R10*0x1 + 0x20] }
    /* +0x2e1499 */ __asm { MOV R9D,dword ptr [RBP + 0x12a8] }
    /* +0x2e14a0 */ __asm { MOV R13D,R11D }
    /* +0x2e14a3 */ __asm { MOV R8D,R8D }
    /* +0x2e14a6 */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2e14ad */ __asm { ADD R13,RAX }
    /* +0x2e14b0 */ __asm { ADD R8,RAX }
    /* +0x2e14b3 */ __asm { MOV qword ptr [RBP + 0x1298],R8 }
    /* +0x2e14ba */ __asm { MOV dword ptr [RBP + -0x8],0x8645c168 }
    /* +0x2e14c1 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e14c5 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x10] }
    /* +0x2e14ca */ __asm { MOV qword ptr [RBP + 0x1318],R8 }
    /* +0x2e14d1 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x18] }
    /* +0x2e14d6 */ __asm { MOV qword ptr [RBP + 0x1410],R8 }
    /* +0x2e14dd */ __asm { MOV R8,qword ptr [RBP + 0x150] }
    /* +0x2e14e4 */ __asm { MOV RSI,R8 }
    /* +0x2e14e7 */ __asm { SHR RSI,0x20 }
    /* +0x2e14eb */ __asm { ADD ESI,R8D }
    /* +0x2e14ee */ __asm { XOR R15D,R15D }
    /* +0x2e14f1 */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x2e14f8 */ __asm { MOV EBX,EAX }
    /* +0x2e14fa */ __asm { SUB EBX,dword ptr [RBP + 0x108] }
    /* +0x2e1500 */ __asm { MOV qword ptr [RBP + 0x1228],0x0 }
    /* +0x2e150b */ __asm { CMP R15,qword ptr [RBP + 0x1410] }
    /* +0x2e1512 */ __asm { JZ 0x7fffa4a517d2 }
    /* +0x2e1518 */ __asm { MOV R10D,0x7df54459 }
    /* +0x2e151e */ __asm { MOV R11D,0x88724cde }
    /* +0x2e1524 */ __asm { IMUL R11D,dword ptr [RBP + 0x1498] }
    /* +0x2e152c */ __asm { IMUL R10D,R10D,-0x34e4ccb3 }
    /* +0x2e1533 */ __asm { MOV R8D,0xb46e3780 }
    /* +0x2e1539 */ __asm { XOR R8D,dword ptr [RBP + 0x108] }
    /* +0x2e1540 */ __asm { ROR R8D,0x1 }
    /* +0x2e1543 */ __asm { ADD R8D,0x8f33ec09 }
    /* +0x2e154a */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e1551 */ __asm { ROR R8D,CL }
    /* +0x2e1554 */ __asm { NOT R10D }
    /* +0x2e1557 */ __asm { ROL R11D,0x5 }
    /* +0x2e155b */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x2e1563 */ __asm { SUB R10D,ECX }
    /* +0x2e1566 */ __asm { MOVSXD RAX,R10D }
    /* +0x2e1569 */ __asm { MOV R10D,0xb1d4b43c }
    /* +0x2e156f */ __asm { ADD R10D,EBX }
    /* +0x2e1572 */ __asm { IMUL ECX,R10D,0x7ffe0325 }
    /* +0x2e1579 */ __asm { MOV R9,qword ptr [RBP + 0x1298] }
    /* +0x2e1580 */ __asm { MOVZX R10D,word ptr [R9 + R15*0x2] }
    /* +0x2e1585 */ __asm { MOV R9,qword ptr [RBP + 0x1318] }
    /* +0x2e158c */ __asm { ADD R9D,R10D }
    /* +0x2e158f */ __asm { MOV RDX,qword ptr [RBP + 0x1c0] }
    /* +0x2e1596 */ __asm { MOV R10D,dword ptr [RDX + R10*0x4] }
    /* +0x2e159a */ __asm { CMP R10D,dword ptr [RBP + 0x150] }
    /* +0x2e15a1 */ __asm { SETNC R14B }
    /* +0x2e15a5 */ __asm { MOV dword ptr [RBP + 0x8],R9D }
    /* +0x2e15a9 */ __asm { CMP R10D,ESI }
    /* +0x2e15ac */ __asm { SETC DL }
    /* +0x2e15af */ __asm { MOV R9D,dword ptr [R13 + R15*0x4] }
    /* +0x2e15b4 */ __asm { XOR EDI,EDI }
    /* +0x2e15b6 */ __asm { XOR R12D,R12D }
    /* +0x2e15b9 */ __asm { TEST R9D,R9D }
    /* +0x2e15bc */ __asm { SETZ DIL }
    /* +0x2e15c0 */ __asm { SETS R12B }
    /* +0x2e15c4 */ __asm { CMP R11,RCX }
    /* +0x2e15c7 */ __asm { CMOVLE EDI,R12D }
    /* +0x2e15cb */ __asm { MOV RCX,qword ptr [RBP + 0x12c8] }
    /* +0x2e15d2 */ __asm { ADD R9,RCX }
    /* +0x2e15d5 */ __asm { TEST DIL,DIL }
    /* +0x2e15d8 */ __asm { MOV R11D,0x0 }
    /* +0x2e15de */ __asm { CMOVZ R11,R9 }
    /* +0x2e15e2 */ __asm { AND DL,R14B }
    /* +0x2e15e5 */ __asm { MOVZX R9D,DL }
    /* +0x2e15e9 */ __asm { NEG DL }
    /* +0x2e15eb */ __asm { CMP R8,RAX }
    /* +0x2e15ee */ __asm { MOVZX R8D,DL }
    /* +0x2e15f2 */ __asm { CMOVBE R8D,R9D }
    /* +0x2e15f6 */ __asm { MOV qword ptr [RBP],R11 }
    /* +0x2e15fa */ __asm { MOV uint8_t ptr [RBP + 0xc],R8B }
    /* +0x2e15fe */ __asm { MOV R8D,R10D }
    /* +0x2e1601 */ __asm { ADD R8,RCX }
    /* +0x2e1604 */ __asm { MOV qword ptr [RBP + -0x8],R8 }
    /* +0x2e1608 */ __asm { TEST R11,R11 }
    /* +0x2e160b */ __asm { JZ 0x7fffa4a516ee }
    /* +0x2e1611 */ __asm { MOV dword ptr [RBP + 0x12e8],0x52658ddc }
    /* +0x2e161b */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x2e1622 */ __asm { MOV R10,qword ptr [RBP] }
    /* +0x2e1626 */ __asm { MOVZX EDX,uint8_t ptr [R10] }
    /* +0x2e162a */ __asm { TEST DL,DL }
    /* +0x2e162c */ __asm { JZ 0x7fffa4a51666 }
    /* +0x2e162e */ __asm { LEA RAX,[R10 + 0x1] }
}


// ============================================================================
// Function : Unwind@7fffa4a52f20  |  RVA: 0x2e2f20  |  Size: 235 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a52f20(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)
                      (short)(0x5353 - ((uint16_t)*(uint32_t *)(param_2 + 0x1498) ^ 0x7715)) +
                     0x7fffa568ed24);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a53010  |  RVA: 0x2e3010  |  Size: 237 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a53010(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
    pcVar2 = (code *)((int64_t)(short)(0x522U >> bVar1 | 0x522 << 0x10 - bVar1) + 0x7fffa568fae8);
    (*pcVar2)(pcVar2,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a53100  |  RVA: 0x2e3100  |  Size: 119 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a53100(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)(short)((short)*(uint32_t *)(param_2 + 0x1498) + 0x508dU ^ 0xae3b) +
            0x7fffa562a5fc))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a53180  |  RVA: 0x2e3180  |  Size: 427 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a53180(void) {
    /* +0x2e3180 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2e3185 */ __asm { PUSH RBP }
    /* +0x2e3186 */ __asm { PUSH RSI }
    /* +0x2e3187 */ __asm { PUSH RBX }
    /* +0x2e3188 */ __asm { PUSH RDI }
    /* +0x2e3189 */ __asm { PUSH R12 }
    /* +0x2e318b */ __asm { PUSH R13 }
    /* +0x2e318d */ __asm { PUSH R15 }
    /* +0x2e318f */ __asm { PUSH R14 }
    /* +0x2e3191 */ __asm { SUB RSP,0xc8 }
    /* +0x2e3198 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2e319f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2e31a6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2e31ac */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2e31b6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2e31c0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2e31ca */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2e31d3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2e31db */ __asm { JZ 0x7fffa4a5327e }
    /* +0x2e31e1 */ __asm { MOV R10W,0xa045 }
    /* +0x2e31e6 */ __asm { LEA RAX,[0x7fffa47c00a4] }
    /* +0x2e31ed */ __asm { LEA RCX,[0x7fffa47c4dd1] }
    /* +0x2e31f4 */ __asm { MOV R9W,0x127b }
    /* +0x2e31f9 */ __asm { IMUL R8D,R10D,0x12d9 }
    /* +0x2e3200 */ __asm { ADD R8D,0x88b }
    /* +0x2e3207 */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2e320e */ __asm { LEA R10D,[RDX + R9*0x1] }
    /* +0x2e3212 */ __asm { XOR R10D,0x30a5 }
    /* +0x2e3219 */ __asm { IMUL R11D,R10D,-0x2dbf }
    /* +0x2e3220 */ __asm { LEA R9,[0x7fffa47c1e44] }
    /* +0x2e3227 */ __asm { MOVSX R10,R11W }
    /* +0x2e322b */ __asm { MOV R11D,0x828b574e }
    /* +0x2e3231 */ __asm { XOR R11D,EDX }
    /* +0x2e3234 */ __asm { ADD R11D,0x4c3a1be3 }
    /* +0x2e323b */ __asm { ROL R11D,0x10 }
    /* +0x2e323f */ __asm { MOVSXD R11,R11D }
    /* +0x2e3242 */ __asm { MOVZX ECX,uint8_t ptr [RCX + R11*0x1 + 0x9] }
    /* +0x2e3248 */ __asm { MOVSX R8,R8W }
    /* +0x2e324c */ __asm { ADD R8,RAX }
    /* +0x2e324f */ __asm { MOV RAX,qword ptr [R8 + RCX*0x8 + 0x13] }
    /* +0x2e3254 */ __asm { XOR RAX,qword ptr [R9 + R10*0x1 + 0x52] }
    /* +0x2e3259 */ __asm { MOVQ XMM2,RAX }
    /* +0x2e325e */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2e3262 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2e3266 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2e326b */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2e326f */ __asm { TEST R8,R8 }
    /* +0x2e3272 */ __asm { JZ 0x7fffa4a532c6 }
    /* +0x2e3274 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2e327b */ __asm { CALL R8 }
    /* +0x2e327e */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2e3287 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2e3291 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2e329b */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2e32a5 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2e32ab */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2e32b2 */ __asm { ADD RSP,0xc8 }
    /* +0x2e32b9 */ __asm { POP R14 }
    /* +0x2e32bb */ __asm { POP R15 }
    /* +0x2e32bd */ __asm { POP R13 }
    /* +0x2e32bf */ __asm { POP R12 }
    /* +0x2e32c1 */ __asm { POP RDI }
    /* +0x2e32c2 */ __asm { POP RBX }
    /* +0x2e32c3 */ __asm { POP RSI }
    /* +0x2e32c4 */ __asm { POP RBP }
    /* +0x2e32c5 */ __asm { RET }
    /* +0x2e32c6 */ __asm { MOV R10W,0x4fae }
    /* +0x2e32cb */ __asm { ADD R10D,dword ptr [RBP + 0x1418] }
    /* +0x2e32d2 */ __asm { ROL R10W,0xd }
    /* +0x2e32d7 */ __asm { MOVZX R8D,R10W }
    /* +0x2e32db */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2e32df */ __asm { MOV CX,0xa599 }
    /* +0x2e32e3 */ __asm { MOVZX R8D,CX }
    /* +0x2e32e7 */ __asm { XOR R8,0xa5a9 }
    /* +0x2e32ee */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2e32f2 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2e32fc */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2e3300 */ __asm { NOP }
    /* +0x2e3301 */ __asm { NOP }
    /* +0x2e3302 */ __asm { NOP }
    /* +0x2e3303 */ __asm { NOP }
    /* +0x2e3304 */ __asm { NOP }
    /* +0x2e3305 */ __asm { PUSHFQ }
    /* +0x2e3306 */ __asm { POP R8 }
    /* +0x2e3308 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2e330c */ __asm { MOV qword ptr [RBP + 0x1410],R8 }
    /* +0x2e3313 */ __asm { TEST R8D,0x100 }
    /* +0x2e331a */ __asm { NOP }
    /* +0x2e331b */ __asm { NOP }
    /* +0x2e331c */ __asm { NOP }
    /* +0x2e331d */ __asm { NOP }
    /* +0x2e331e */ __asm { NOP }
    /* +0x2e331f */ __asm { NOP }
    /* +0x2e3320 */ __asm { NOP }
    /* +0x2e3321 */ __asm { NOP }
    /* +0x2e3322 */ __asm { NOP }
    /* +0x2e3323 */ __asm { NOP }
    /* +0x2e3324 */ __asm { NOP }
    /* +0x2e3325 */ __asm { NOP }
    /* +0x2e3326 */ __asm { NOP }
    /* +0x2e3327 */ __asm { NOP }
    /* +0x2e3328 */ __asm { NOP }
    /* +0x2e3329 */ __asm { NOP }
    /* +0x2e332a */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a552e0  |  RVA: 0x2e52e0  |  Size: 266 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a552e0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if ((uint64_t)(*(uint32_t *)(param_2 + 0x1498) ^ 0xa12ab35d) < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)(short)((uint16_t)*(uint64_t *)(param_2 + 0x1498) ^ 0x7a0) +
                     0x7fffa568c73e);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a553f0  |  RVA: 0x2e53f0  |  Size: 126 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a553f0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  (*(code *)(&UNK_7fffa562b6ac + (short)~(0x8b2dU >> bVar2 | -0x74d3 << 0x10 - bVar2)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a55470  |  RVA: 0x2e5470  |  Size: 260 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a55470(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  if ((uint64_t)(0xa12ab361 - *(int *)(param_2 + 0x1498)) < *(uint64_t *)(param_2 + 0x13b8)) {
    uVar1 = ~((int)*(uint64_t *)(param_2 + 0x1498) + 0x5ed55289U);
    (*(code *)((int64_t)(int)(uVar1 << 5 | uVar1 >> 0x1b) + 0x7fffa5693791))
              (0x7fffa5693791,*(uint64_t *)(param_2 + 0x1498),
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a55580  |  RVA: 0x2e5580  |  Size: 265 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a55580(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    pcVar1 = (code *)((int64_t)
                      (int)(((uint32_t)*(uint64_t *)(param_2 + 0x1260) | 1) * 0x630dc5bf ^
                           (uint32_t)*(uint64_t *)(param_2 + 0x1498)) + 0x7fffa5695177);
    (*pcVar1)(pcVar1,0,*(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a55690  |  RVA: 0x2e5690  |  Size: 3444 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a55690(void) {
    /* +0x2e5690 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2e5695 */ __asm { PUSH RBP }
    /* +0x2e5696 */ __asm { PUSH RSI }
    /* +0x2e5697 */ __asm { PUSH RBX }
    /* +0x2e5698 */ __asm { PUSH RDI }
    /* +0x2e5699 */ __asm { PUSH R12 }
    /* +0x2e569b */ __asm { PUSH R13 }
    /* +0x2e569d */ __asm { PUSH R15 }
    /* +0x2e569f */ __asm { PUSH R14 }
    /* +0x2e56a1 */ __asm { SUB RSP,0xc8 }
    /* +0x2e56a8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2e56af */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2e56b6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2e56bc */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2e56c6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2e56d0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2e56da */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2e56e3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2e56eb */ __asm { JZ 0x7fffa4a55796 }
    /* +0x2e56f1 */ __asm { MOV R11D,0x648f801d }
    /* +0x2e56f7 */ __asm { LEA RAX,[0x7fffa47c3eba] }
    /* +0x2e56fe */ __asm { MOV R10D,0x7651559d }
    /* +0x2e5704 */ __asm { XOR R10D,0xc840de47 }
    /* +0x2e570b */ __asm { MOV R8D,0x6e265c07 }
    /* +0x2e5711 */ __asm { SUB R8D,R11D }
    /* +0x2e5714 */ __asm { MOV R11D,0x912fb4ea }
    /* +0x2e571a */ __asm { XOR R11D,0xa9b8a256 }
    /* +0x2e5721 */ __asm { MOV RBX,qword ptr [RBP + 0x1418] }
    /* +0x2e5728 */ __asm { MOV ECX,EBX }
    /* +0x2e572a */ __asm { ROR R11D,CL }
    /* +0x2e572d */ __asm { LEA R9,[0x7fffa47c79ce] }
    /* +0x2e5734 */ __asm { LEA RDX,[0x7fffa47c7d62] }
    /* +0x2e573b */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2e5742 */ __asm { SUB R11D,ECX }
    /* +0x2e5745 */ __asm { MOVSXD R11,R11D }
    /* +0x2e5748 */ __asm { ADD R11,RAX }
    /* +0x2e574b */ __asm { XOR R8D,EBX }
    /* +0x2e574e */ __asm { ADD R8D,0x5742d792 }
    /* +0x2e5755 */ __asm { ROL R10D,CL }
    /* +0x2e5758 */ __asm { MOVSXD RCX,R8D }
    /* +0x2e575b */ __asm { XOR R10D,EBX }
    /* +0x2e575e */ __asm { MOVSXD R10,R10D }
    /* +0x2e5761 */ __asm { MOVZX R10D,uint8_t ptr [R9 + R10*0x1 + 0x9] }
    /* +0x2e5767 */ __asm { MOV RAX,qword ptr [RDX + RCX*0x1 + 0x52] }
    /* +0x2e576c */ __asm { XOR RAX,qword ptr [R11 + R10*0x8 + 0x13] }
    /* +0x2e5771 */ __asm { MOVQ XMM2,RAX }
    /* +0x2e5776 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2e577a */ __asm { PXOR XMM4,XMM2 }
    /* +0x2e577e */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2e5783 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2e5787 */ __asm { TEST R8,R8 }
    /* +0x2e578a */ __asm { JZ 0x7fffa4a557de }
    /* +0x2e578c */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2e5793 */ __asm { CALL R8 }
    /* +0x2e5796 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2e579f */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2e57a9 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2e57b3 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2e57bd */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2e57c3 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2e57ca */ __asm { ADD RSP,0xc8 }
    /* +0x2e57d1 */ __asm { POP R14 }
    /* +0x2e57d3 */ __asm { POP R15 }
    /* +0x2e57d5 */ __asm { POP R13 }
    /* +0x2e57d7 */ __asm { POP R12 }
    /* +0x2e57d9 */ __asm { POP RDI }
    /* +0x2e57da */ __asm { POP RBX }
    /* +0x2e57db */ __asm { POP RSI }
    /* +0x2e57dc */ __asm { POP RBP }
    /* +0x2e57dd */ __asm { RET }
    /* +0x2e57de */ __asm { MOV R10W,0x1e31 }
    /* +0x2e57e3 */ __asm { MOV RDX,qword ptr [RBP + 0x11e0] }
    /* +0x2e57ea */ __asm { XOR R10D,EDX }
    /* +0x2e57ed */ __asm { ROL R10W,0xd }
    /* +0x2e57f2 */ __asm { MOV R11,qword ptr [RBP + 0x1400] }
    /* +0x2e57f9 */ __asm { IMUL R10D,R11D }
    /* +0x2e57fd */ __asm { MOVZX R8D,R10W }
    /* +0x2e5801 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2e5805 */ __asm { MOV R8D,EDX }
    /* +0x2e5808 */ __asm { OR R8D,0x1 }
    /* +0x2e580c */ __asm { MOV R10W,0x955 }
    /* +0x2e5811 */ __asm { MOV qword ptr [RBP + 0x108],R8 }
    /* +0x2e5818 */ __asm { IMUL R10D,R8D }
    /* +0x2e581c */ __asm { NOT R10D }
    /* +0x2e581f */ __asm { IMUL R10D,R11D }
    /* +0x2e5823 */ __asm { MOVZX R8D,R10W }
    /* +0x2e5827 */ __asm { MOV R9,qword ptr GS:[R8] }
    /* +0x2e582b */ __asm { MOV R8D,0x1b51d5d4 }
    /* +0x2e5831 */ __asm { MOV R11D,0xba27e0d7 }
    /* +0x2e5837 */ __asm { XOR R11D,EDX }
    /* +0x2e583a */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e5841 */ __asm { ROR R11D,CL }
    /* +0x2e5844 */ __asm { SUB R8D,ECX }
    /* +0x2e5847 */ __asm { ADD R8D,0x6815c588 }
    /* +0x2e584e */ __asm { MOV ECX,EDX }
    /* +0x2e5850 */ __asm { ROR R8D,CL }
    /* +0x2e5853 */ __asm { ROL R11D,0x1c }
    /* +0x2e5857 */ __asm { ADD R8,qword ptr [R9 + 0x60] }
    /* +0x2e585b */ __asm { XOR R8,R11 }
    /* +0x2e585e */ __asm { MOV RCX,0x6de75e5d130a120 }
    /* +0x2e5868 */ __asm { CMP R8,RCX }
    /* +0x2e586b */ __asm { NOP }
    /* +0x2e586c */ __asm { NOP }
    /* +0x2e586d */ __asm { NOP }
    /* +0x2e586e */ __asm { NOP }
    /* +0x2e586f */ __asm { NOP }
    /* +0x2e5870 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2e5874 */ __asm { PUSHFQ }
    /* +0x2e5875 */ __asm { POP R8 }
    /* +0x2e5877 */ __asm { MOV qword ptr [RBP + 0x150],R8 }
    /* +0x2e587e */ __asm { TEST R8D,0x100 }
    /* +0x2e5885 */ __asm { NOP }
    /* +0x2e5886 */ __asm { NOP }
    /* +0x2e5887 */ __asm { NOP }
    /* +0x2e5888 */ __asm { NOP }
    /* +0x2e5889 */ __asm { NOP }
    /* +0x2e588a */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2e5891 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2e5895 */ __asm { TEST R10D,R10D }
    /* +0x2e5898 */ __asm { NOP }
    /* +0x2e5899 */ __asm { NOP }
    /* +0x2e589a */ __asm { NOP }
    /* +0x2e589b */ __asm { NOP }
    /* +0x2e589c */ __asm { NOP }
    /* +0x2e589d */ __asm { ADD RAX,0x10 }
    /* +0x2e58a1 */ __asm { MOV R8,-0x56ac57fd56f4aa33 }
    /* +0x2e58ab */ __asm { MOV R9,0x10000000014b }
    /* +0x2e58b5 */ __asm { MOV R10,-0x674f3799497970cd }
    /* +0x2e58bf */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e58c6 */ __asm { MOV R11D,ECX }
    /* +0x2e58c9 */ __asm { SUB R11D,dword ptr [RBP + 0x11e0] }
    /* +0x2e58d0 */ __asm { MOV dword ptr [RBP + 0x12b0],R11D }
    /* +0x2e58d7 */ __asm { MOV R11,0x39cda41577e4d47d }
    /* +0x2e58e1 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2e58e4 */ __asm { PUSHFQ }
    /* +0x2e58e5 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2e58ed */ __asm { POPFQ }
    /* +0x2e58ee */ __asm { MOV EDX,0xf87f04bf }
    /* +0x2e58f3 */ __asm { ADD EDX,0x3ffffbd8 }
    /* +0x2e58f9 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e5900 */ __asm { ROL EDX,CL }
    /* +0x2e5902 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2e5909 */ __asm { ROR EDX,CL }
    /* +0x2e590b */ __asm { ROL EDX,0xa }
    /* +0x2e590e */ __asm { MOV dword ptr [RBP + -0x8],EDX }
    /* +0x2e5911 */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x2e5914 */ __asm { CMP EDX,0xfcebf0f4 }
    /* +0x2e591a */ __asm { JBE 0x7fffa4a55a92 }
    /* +0x2e5920 */ __asm { MOVZX R15D,word ptr [RAX + 0x58] }
    /* +0x2e5925 */ __asm { CMP R15D,0x2 }
    /* +0x2e5929 */ __asm { JC 0x7fffa4a559bd }
    /* +0x2e592f */ __asm { SHR R15D,0x1 }
    /* +0x2e5932 */ __asm { MOV RBX,qword ptr [RAX + 0x60] }
    /* +0x2e5936 */ __asm { MOV DX,0x88f5 }
    /* +0x2e593a */ __asm { ADD EDX,0x6bd5 }
    /* +0x2e5940 */ __asm { XOR EDX,dword ptr [RBP + 0x1418] }
    /* +0x2e5946 */ __asm { IMUL EDX,EDX,0x503b }
    /* +0x2e594c */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2e5953 */ __asm { ROR DX,CL }
    /* +0x2e5956 */ __asm { CMP R15W,DX }
    /* +0x2e595a */ __asm { JZ 0x7fffa4a559c4 }
    /* +0x2e595c */ __asm { MOV EDI,R15D }
    /* +0x2e595f */ __asm { AND EDI,0xfffffffe }
    /* +0x2e5962 */ __asm { MOV R13,R8 }
    /* +0x2e5965 */ __asm { XOR R14D,R14D }
    /* +0x2e5968 */ __asm { LEA RCX,[R14 + 0x2] }
    /* +0x2e596c */ __asm { MOVZX EDX,word ptr [RBX + R14*0x2 + 0x2] }
    /* +0x2e5972 */ __asm { LEA ESI,[RDX + -0x41] }
    /* +0x2e5975 */ __asm { MOV R12D,EDX }
    /* +0x2e5978 */ __asm { OR R12D,0x20 }
    /* +0x2e597c */ __asm { CMP SI,0x1a }
    /* +0x2e5980 */ __asm { CMOVNC R12D,EDX }
    /* +0x2e5984 */ __asm { MOVZX R12D,R12B }
    /* +0x2e5988 */ __asm { MOVZX EDX,word ptr [RBX + R14*0x2] }
    /* +0x2e598d */ __asm { MOV ESI,EDX }
    /* +0x2e598f */ __asm { OR ESI,0x20 }
    /* +0x2e5992 */ __asm { LEA R14D,[RDX + -0x41] }
    /* +0x2e5996 */ __asm { CMP R14W,0x1a }
    /* +0x2e599b */ __asm { CMOVNC ESI,EDX }
    /* +0x2e599e */ __asm { MOVZX EDX,SIL }
    /* +0x2e59a2 */ __asm { XOR RDX,R13 }
    /* +0x2e59a5 */ __asm { IMUL RDX,R9 }
    /* +0x2e59a9 */ __asm { XOR RDX,R12 }
    /* +0x2e59ac */ __asm { IMUL RDX,R9 }
    /* +0x2e59b0 */ __asm { MOV R13,RDX }
    /* +0x2e59b3 */ __asm { MOV R14,RCX }
    /* +0x2e59b6 */ __asm { CMP RDI,RCX }
    /* +0x2e59b9 */ __asm { JNZ 0x7fffa4a55968 }
    /* +0x2e59bb */ __asm { JMP 0x7fffa4a559c9 }
    /* +0x2e59bd */ __asm { XOR EDX,EDX }
    /* +0x2e59bf */ __asm { JMP 0x7fffa4a55a6d }
    /* +0x2e59c4 */ __asm { MOV RDX,R8 }
    /* +0x2e59c7 */ __asm { XOR ECX,ECX }
    /* +0x2e59c9 */ __asm { TEST R15B,0x1 }
    /* +0x2e59cd */ __asm { JZ 0x7fffa4a55a38 }
    /* +0x2e59cf */ __asm { MOV R13,R10 }
    /* +0x2e59d2 */ __asm { MOV ESI,0x49989f87 }
    /* +0x2e59d7 */ __asm { XOR R13,qword ptr [RBP + 0x11e0] }
    /* +0x2e59de */ __asm { IMUL R13,qword ptr [RBP + 0x11d8] }
    /* +0x2e59e6 */ __asm { MOVZX ECX,word ptr [RBX + RCX*0x2] }
    /* +0x2e59ea */ __asm { LEA R15D,[RCX + -0x41] }
    /* +0x2e59ee */ __asm { MOV EDI,ECX }
    /* +0x2e59f0 */ __asm { OR EDI,0x20 }
    /* +0x2e59f3 */ __asm { ROL R13,0x30 }
    /* +0x2e59f7 */ __asm { MOV R12D,0x4aa17920 }
    /* +0x2e59fd */ __asm { ADD R12D,dword ptr [RBP + 0x1418] }
    /* +0x2e5a04 */ __asm { MOV EBX,0x39f47762 }
    /* +0x2e5a09 */ __asm { SUB EBX,R12D }
    /* +0x2e5a0c */ __asm { ADD ESI,dword ptr [RBP + 0x12b0] }
    /* +0x2e5a12 */ __asm { CMP R15W,0x1a }
    /* +0x2e5a17 */ __asm { NOT ESI }
    /* +0x2e5a19 */ __asm { MOVSXD R14,ESI }
    /* +0x2e5a1c */ __asm { CMOVNC EDI,ECX }
    /* +0x2e5a1f */ __asm { MOVZX ECX,DIL }
    /* +0x2e5a23 */ __asm { MOV RDI,RDX }
    /* +0x2e5a26 */ __asm { XOR RDI,RCX }
    /* +0x2e5a29 */ __asm { IMUL RDX,RCX }
    /* +0x2e5a2d */ __asm { CMP RBX,R14 }
    /* +0x2e5a30 */ __asm { CMOVG RDX,RDI }
    /* +0x2e5a34 */ __asm { IMUL RDX,R13 }
    /* +0x2e5a38 */ __asm { MOV ESI,0x977c2681 }
    /* +0x2e5a3d */ __asm { XOR ESI,dword ptr [RBP + 0x11e0] }
    /* +0x2e5a43 */ __asm { ADD ESI,0x7d908383 }
    /* +0x2e5a49 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e5a50 */ __asm { ROR ESI,CL }
    /* +0x2e5a52 */ __asm { IMUL ECX,ESI,0x46202b93 }
    /* +0x2e5a58 */ __asm { MOVSXD RCX,ECX }
    /* +0x2e5a5b */ __asm { CMP RCX,-0x26e622a5 }
    /* +0x2e5a62 */ __asm { SETZ CL }
    /* +0x2e5a65 */ __asm { CMP RDX,R11 }
    /* +0x2e5a68 */ __asm { SETNZ DL }
    /* +0x2e5a6b */ __asm { XOR DL,CL }
    /* +0x2e5a6d */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2e5a74 */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x2e5a77 */ __asm { CMP ECX,0x26bd4fb8 }
    /* +0x2e5a7d */ __asm { JNC 0x7fffa4a55a9a }
    /* +0x2e5a7f */ __asm { TEST DL,DL }
    /* +0x2e5a81 */ __asm { JNZ 0x7fffa4a55aa8 }
    /* +0x2e5a83 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2e5a8a */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x2e5a8d */ __asm { JMP 0x7fffa4a558e1 }
    /* +0x2e5a92 */ __asm { RET }
    /* +0x2e5a9a */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2e5a9f */ __asm { JNS 0x7fffa4a55adc }
    /* +0x2e5aa1 */ __asm { IRETD }
    /* +0x2e5aa8 */ __asm { MOV R10W,0x7c72 }
    /* +0x2e5aad */ __asm { ADD R10D,dword ptr [RBP + 0x1418] }
    /* +0x2e5ab4 */ __asm { IMUL R10D,dword ptr [RBP + 0x108] }
    /* +0x2e5abc */ __asm { ROL R10W,0x3 }
    /* +0x2e5ac1 */ __asm { MOVZX R8D,R10W }
    /* +0x2e5ac5 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2e5ac9 */ __asm { MOV R8,0x432683e3afdf2b29 }
    /* +0x2e5ad3 */ __asm { CMP RCX,R8 }
    /* +0x2e5ad6 */ __asm { NOP }
    /* +0x2e5ad7 */ __asm { NOP }
    /* +0x2e5ad8 */ __asm { NOP }
    /* +0x2e5ad9 */ __asm { NOP }
    /* +0x2e5ada */ __asm { NOP }
    /* +0x2e5adb */ __asm { NOP }
    /* +0x2e5adc */ __asm { NOP }
    /* +0x2e5add */ __asm { NOP }
    /* +0x2e5ade */ __asm { NOP }
    /* +0x2e5adf */ __asm { NOP }
    /* +0x2e5ae0 */ __asm { NOP }
    /* +0x2e5ae1 */ __asm { NOP }
    /* +0x2e5ae2 */ __asm { NOP }
    /* +0x2e5ae3 */ __asm { NOP }
    /* +0x2e5ae4 */ __asm { NOP }
    /* +0x2e5ae5 */ __asm { MOV R11,0x0 }
    /* +0x2e5aec */ __asm { NOP }
    /* +0x2e5aed */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x2e5af4 */ __asm { MOV R10W,0x7ede }
    /* +0x2e5af9 */ __asm { IMUL R10D,dword ptr [RBP + 0x108] }
    /* +0x2e5b01 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e5b08 */ __asm { ADD R10D,ECX }
    /* +0x2e5b0b */ __asm { MOVZX R8D,R10W }
    /* +0x2e5b0f */ __asm { XOR R8,0xfbec }
    /* +0x2e5b16 */ __asm { MOV RCX,qword ptr [RAX + 0x30] }
    /* +0x2e5b1a */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2e5b1e */ __asm { MOV qword ptr [RBP + 0x1318],RCX }
    /* +0x2e5b25 */ __asm { TEST RCX,RCX }
    /* +0x2e5b28 */ __asm { JZ 0x7fffa4a55dc3 }
    /* +0x2e5b2e */ __asm { MOV RAX,0x0 }
    /* +0x2e5b35 */ __asm { NOP }
    /* +0x2e5b36 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2e5b3d */ __asm { MOV RAX,qword ptr [RBP + 0x1318] }
    /* +0x2e5b44 */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x2e5b48 */ __asm { ADD R8,RAX }
    /* +0x2e5b4b */ __asm { JZ 0x7fffa4a55dc3 }
    /* +0x2e5b51 */ __asm { MOV R10W,0x91f8 }
    /* +0x2e5b56 */ __asm { MOV R11D,0xffffb81b }
    /* +0x2e5b5c */ __asm { SUB R11D,R10D }
    /* +0x2e5b5f */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2e5b66 */ __asm { XOR R11D,ECX }
    /* +0x2e5b69 */ __asm { IMUL R11D,dword ptr [RBP + 0x1400] }
    /* +0x2e5b71 */ __asm { MOVZX R11D,R11W }
    /* +0x2e5b75 */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x2e5b79 */ __asm { MOV R10W,0x8a3e }
    /* +0x2e5b7e */ __asm { ADD R10D,ECX }
    /* +0x2e5b81 */ __asm { IMUL R10D,R10D,0x6327 }
    /* +0x2e5b88 */ __asm { ROL R10W,0x2 }
    /* +0x2e5b8d */ __asm { MOV RAX,qword ptr [RAX + 0xfe8] }
    /* +0x2e5b94 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e5b9b */ __asm { ADD R10D,ECX }
    /* +0x2e5b9e */ __asm { MOVZX R11D,R10W }
    /* +0x2e5ba2 */ __asm { MOV R9,qword ptr GS:[R11] }
    /* +0x2e5ba6 */ __asm { MOV R10D,0x9413a234 }
    /* +0x2e5bac */ __asm { MOV R11D,0x310b067e }
    /* +0x2e5bb2 */ __asm { XOR R11D,0x95865bd1 }
    /* +0x2e5bb9 */ __asm { IMUL R11D,R11D,0x3454b3a1 }
    /* +0x2e5bc0 */ __asm { XOR R11D,ECX }
    /* +0x2e5bc3 */ __asm { NOT R11D }
    /* +0x2e5bc6 */ __asm { XOR R10D,0x2bd8f5a4 }
    /* +0x2e5bcd */ __asm { IMUL R10D,dword ptr [RBP + 0x1498] }
    /* +0x2e5bd5 */ __asm { ROL R10D,CL }
    /* +0x2e5bd8 */ __asm { MOVSXD RCX,R10D }
    /* +0x2e5bdb */ __asm { ADD RAX,qword ptr [R9 + 0x370] }
    /* +0x2e5be2 */ __asm { MOV R9D,0x8453bc7d }
    /* +0x2e5be8 */ __asm { XOR R9,RAX }
    /* +0x2e5beb */ __asm { MOV EAX,0xc924dc8b }
    /* +0x2e5bf0 */ __asm { ADD RAX,R9 }
    /* +0x2e5bf3 */ __asm { MOV R9,-0x5d293fd24b97dfde }
    /* +0x2e5bfd */ __asm { XOR R10D,R10D }
    /* +0x2e5c00 */ __asm { CMP RAX,R9 }
    /* +0x2e5c03 */ __asm { SETL R10B }
    /* +0x2e5c07 */ __asm { MOV R9,-0x5d293fd24b97dfdf }
    /* +0x2e5c11 */ __asm { XOR EDX,EDX }
    /* +0x2e5c13 */ __asm { CMP RAX,R9 }
    /* +0x2e5c16 */ __asm { SETZ DL }
    /* +0x2e5c19 */ __asm { CMP R11,RCX }
    /* +0x2e5c1c */ __asm { CMOVGE R10D,EDX }
    /* +0x2e5c20 */ __asm { CMP R10B,0x1 }
    /* +0x2e5c24 */ __asm { NOP }
    /* +0x2e5c25 */ __asm { NOP }
    /* +0x2e5c26 */ __asm { NOP }
    /* +0x2e5c27 */ __asm { NOP }
    /* +0x2e5c28 */ __asm { NOP }
    /* +0x2e5c29 */ __asm { MOV CX,0x1e23 }
    /* +0x2e5c2d */ __asm { ADD ECX,0xffff8543 }
    /* +0x2e5c33 */ __asm { MOV R8,qword ptr [R8 + 0x88] }
    /* +0x2e5c3a */ __asm { MOV qword ptr [RBP + 0x1298],R8 }
    /* +0x2e5c41 */ __asm { MOV R10D,R8D }
    /* +0x2e5c44 */ __asm { ROL CX,0x7 }
    /* +0x2e5c48 */ __asm { NOT ECX }
    /* +0x2e5c4a */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x2e5c51 */ __asm { LEA R8D,[RAX + RCX*0x1] }
    /* +0x2e5c55 */ __asm { MOVZX R8D,R8W }
    /* +0x2e5c59 */ __asm { MOV qword ptr [RBP + 0x1410],0x0 }
    /* +0x2e5c64 */ __asm { CMP R10,R8 }
    /* +0x2e5c67 */ __asm { JZ 0x7fffa4a55dfc }
    /* +0x2e5c6d */ __asm { MOV RAX,qword ptr [RBP + 0x1298] }
    /* +0x2e5c74 */ __asm { SHR RAX,0x20 }
    /* +0x2e5c78 */ __asm { JZ 0x7fffa4a55dfc }
    /* +0x2e5c7e */ __asm { TEST dword ptr [RBP + 0x150],0x100 }
    /* +0x2e5c88 */ __asm { NOP }
    /* +0x2e5c89 */ __asm { NOP }
    /* +0x2e5c8a */ __asm { NOP }
    /* +0x2e5c8b */ __asm { NOP }
    /* +0x2e5c8c */ __asm { NOP }
    /* +0x2e5c8d */ __asm { NOP }
    /* +0x2e5c8e */ __asm { NOP }
    /* +0x2e5c8f */ __asm { NOP }
    /* +0x2e5c90 */ __asm { NOP }
    /* +0x2e5c91 */ __asm { MOV dword ptr [RBP + -0x8],0xaa54569c }
    /* +0x2e5c98 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e5c9c */ __asm { TEST R8D,R8D }
    /* +0x2e5c9f */ __asm { NOP }
    /* +0x2e5ca0 */ __asm { NOP }
    /* +0x2e5ca1 */ __asm { NOP }
    /* +0x2e5ca2 */ __asm { NOP }
    /* +0x2e5ca3 */ __asm { NOP }
    /* +0x2e5ca4 */ __asm { MOV RAX,qword ptr [RBP + 0x1318] }
    /* +0x2e5cab */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x1c] }
    /* +0x2e5cb0 */ __asm { MOV CX,0x2ad1 }
    /* +0x2e5cb4 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2e5cbb */ __asm { LEA R11D,[RAX + RCX*0x1] }
    /* +0x2e5cbf */ __asm { ADD R11D,0x3b51 }
    /* +0x2e5cc6 */ __asm { XOR R11D,dword ptr [RBP + 0x1418] }
    /* +0x2e5ccd */ __asm { ADD R11D,0xffffb9f9 }
    /* +0x2e5cd4 */ __asm { MOVZX R11D,R11W }
    /* +0x2e5cd8 */ __asm { CMP R8D,R11D }
    /* +0x2e5cdb */ __asm { JZ 0x7fffa4a55dd7 }
    /* +0x2e5ce1 */ __asm { MOV RAX,qword ptr [RBP + 0x1318] }
    /* +0x2e5ce8 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x20],0x0 }
    /* +0x2e5cee */ __asm { JZ 0x7fffa4a55dd7 }
    /* +0x2e5cf4 */ __asm { MOV RAX,qword ptr [RBP + 0x1318] }
    /* +0x2e5cfb */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x24],0x0 }
    /* +0x2e5d01 */ __asm { JZ 0x7fffa4a55dd7 }
    /* +0x2e5d07 */ __asm { MOV dword ptr [RBP + -0x8],0xb1676a98 }
    /* +0x2e5d0e */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e5d12 */ __asm { MOV RAX,qword ptr [RBP + 0x1318] }
    /* +0x2e5d19 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x1c] }
    /* +0x2e5d1e */ __asm { ADD R8,RAX }
    /* +0x2e5d21 */ __asm { MOV qword ptr [RBP + 0x1228],R8 }
    /* +0x2e5d28 */ __asm { MOV dword ptr [RBP + -0x8],0x5d52e0ba }
    /* +0x2e5d2f */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e5d33 */ __asm { CMP R8D,0xb5807139 }
    /* +0x2e5d3a */ __asm { NOP }
    /* +0x2e5d3b */ __asm { NOP }
    /* +0x2e5d3c */ __asm { NOP }
    /* +0x2e5d3d */ __asm { NOP }
    /* +0x2e5d3e */ __asm { NOP }
    /* +0x2e5d3f */ __asm { MOV R8D,0x4b7aece1 }
    /* +0x2e5d45 */ __asm { MOV R11D,0x82e476ed }
    /* +0x2e5d4b */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x2e5d53 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2e5d5a */ __asm { ROL R11D,CL }
    /* +0x2e5d5d */ __asm { ROL R11D,0xe }
    /* +0x2e5d61 */ __asm { XOR R8D,dword ptr [RBP + 0x1418] }
    /* +0x2e5d68 */ __asm { ROL R8D,CL }
    /* +0x2e5d6b */ __asm { MOV RAX,qword ptr [RBP + 0x1318] }
    /* +0x2e5d72 */ __asm { MOVSXD RCX,dword ptr [RAX + R10*0x1 + 0x20] }
    /* +0x2e5d77 */ __asm { MOV R15D,ECX }
    /* +0x2e5d7a */ __asm { ADD R8D,0x4354f486 }
    /* +0x2e5d81 */ __asm { CMP R11,R8 }
    /* +0x2e5d84 */ __asm { CMOVC R15,RCX }
    /* +0x2e5d88 */ __asm { ADD R15,RAX }
    /* +0x2e5d8b */ __asm { MOV dword ptr [RBP + -0x8],0x7c0c5dd9 }
    /* +0x2e5d92 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e5d96 */ __asm { MOV EBX,dword ptr [RAX + R10*0x1 + 0x24] }
    /* +0x2e5d9b */ __asm { ADD RBX,RAX }
    /* +0x2e5d9e */ __asm { MOV dword ptr [RBP + -0x8],0x8645c168 }
    /* +0x2e5da5 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e5da9 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x10] }
    /* +0x2e5dae */ __asm { MOV qword ptr [RBP + 0x11d8],R8 }
    /* +0x2e5db5 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x18] }
    /* +0x2e5dba */ __asm { MOV qword ptr [RBP + 0x1410],R8 }
    /* +0x2e5dc1 */ __asm { JMP 0x7fffa4a55e03 }
    /* +0x2e5dc3 */ __asm { MOV qword ptr [RBP + 0x1410],0x0 }
    /* +0x2e5dce */ __asm { MOV qword ptr [RBP + 0x11d8],RAX }
    /* +0x2e5dd5 */ __asm { JMP 0x7fffa4a55e03 }
    /* +0x2e5dd7 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2e5dde */ __asm { NOP }
    /* +0x2e5ddf */ __asm { MOV RAX,0x0 }
    /* +0x2e5de6 */ __asm { MOV dword ptr [RBP + -0x8],0x49080108 }
    /* +0x2e5ded */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2e5df1 */ __asm { MOV qword ptr [RBP + 0x1410],0x0 }
    /* +0x2e5dfc */ __asm { MOV qword ptr [RBP + 0x11d8],RAX }
    /* +0x2e5e03 */ __asm { MOV R8,qword ptr [RBP + 0x1298] }
    /* +0x2e5e0a */ __asm { MOV RDI,R8 }
    /* +0x2e5e0d */ __asm { SHR RDI,0x20 }
    /* +0x2e5e11 */ __asm { ADD EDI,R8D }
    /* +0x2e5e14 */ __asm { XOR R12D,R12D }
    /* +0x2e5e17 */ __asm { MOV qword ptr [RBP + 0x1c0],0x0 }
    /* +0x2e5e22 */ __asm { MOV RSI,qword ptr [RBP + 0x1318] }
    /* +0x2e5e29 */ __asm { CMP R12,qword ptr [RBP + 0x1410] }
    /* +0x2e5e30 */ __asm { JZ 0x7fffa4a5613b }
    /* +0x2e5e36 */ __asm { MOVZX ECX,word ptr [RBX + R12*0x2] }
    /* +0x2e5e3b */ __asm { MOV R10,qword ptr [RBP + 0x11d8] }
    /* +0x2e5e42 */ __asm { LEA R8D,[RCX + R10*0x1] }
    /* +0x2e5e46 */ __asm { MOV R10D,0xad80ce48 }
    /* +0x2e5e4c */ __asm { IMUL R10D,R10D,-0x3d25635f }
    /* +0x2e5e53 */ __asm { SUB R10D,dword ptr [RBP + 0x11e0] }
    /* +0x2e5e5a */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2e5e61 */ __asm { XOR R10D,EDX }
    /* +0x2e5e64 */ __asm { MOVSXD RAX,R10D }
    /* +0x2e5e67 */ __asm { MOV R10D,dword ptr [R15 + R12*0x4] }
    /* +0x2e5e6b */ __asm { MOV dword ptr [RBP + 0x8],R8D }
    /* +0x2e5e6f */ __asm { MOV R8D,0x332df499 }
    /* +0x2e5e75 */ __asm { MOV R11D,0x4fc3de43 }
    /* +0x2e5e7b */ __asm { XOR R11D,EDX }
    /* +0x2e5e7e */ __asm { ADD R11D,0x3626dbb2 }
    /* +0x2e5e85 */ __asm { XOR R8D,0x7b259606 }
    /* +0x2e5e8c */ __asm { ADD R8D,0xa0719ded }
    /* +0x2e5e93 */ __asm { MOV R9,qword ptr [RBP + 0x1498] }
    /* +0x2e5e9a */ __asm { IMUL R8D,R9D }
    /* +0x2e5e9e */ __asm { SUB R8D,EDX }
    /* +0x2e5ea1 */ __asm { IMUL R11D,R9D }
    /* +0x2e5ea5 */ __asm { MOV R9,qword ptr [RBP + 0x1228] }
    /* +0x2e5eac */ __asm { MOV ECX,dword ptr [R9 + RCX*0x4] }
    /* +0x2e5eb0 */ __asm { MOV R14D,ECX }
    /* +0x2e5eb3 */ __asm { CMP ECX,EDI }
    /* +0x2e5eb5 */ __asm { SETC DL }
    /* +0x2e5eb8 */ __asm { XOR R13D,R13D }
    /* +0x2e5ebb */ __asm { XOR R9D,R9D }
    /* +0x2e5ebe */ __asm { CMP ECX,dword ptr [RBP + 0x1298] }
    /* +0x2e5ec4 */ __asm { LEA RCX,[R14 + RSI*0x1] }
    /* +0x2e5ec8 */ __asm { SETNZ R13B }
    /* +0x2e5ecc */ __asm { SETNC R9B }
    /* +0x2e5ed0 */ __asm { IMUL R14,RSI }
    /* +0x2e5ed4 */ __asm { CMP R11,RAX }
    /* +0x2e5ed7 */ __asm { CMOVBE R14,RCX }
    /* +0x2e5edb */ __asm { LEA RAX,[RSI + R10*0x1] }
    /* +0x2e5edf */ __asm { TEST R10,R10 }
    /* +0x2e5ee2 */ __asm { CMOVZ RAX,R10 }
    /* +0x2e5ee6 */ __asm { MOV qword ptr [RBP + -0x8],R14 }
    /* +0x2e5eea */ __asm { MOV ECX,0xf1259c92 }
    /* +0x2e5eef */ __asm { CMP R8,RCX }
    /* +0x2e5ef2 */ __asm { CMOVNZ R9D,R13D }
    /* +0x2e5ef6 */ __asm { AND R9B,DL }
    /* +0x2e5ef9 */ __asm { MOV qword ptr [RBP],RAX }
    /* +0x2e5efd */ __asm { MOV uint8_t ptr [RBP + 0xc],R9B }
    /* +0x2e5f01 */ __asm { TEST RAX,RAX }
    /* +0x2e5f04 */ __asm { JZ 0x7fffa4a560fe }
    /* +0x2e5f0a */ __asm { MOV dword ptr [RBP + 0x12e8],0x52658ddc }
    /* +0x2e5f14 */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x2e5f1b */ __asm { MOV AL,0xec }
    /* +0x2e5f1d */ __asm { MOV R8,qword ptr [RBP + 0x11e0] }
    /* +0x2e5f24 */ __asm { MOV EDX,R8D }
    /* +0x2e5f27 */ __asm { OR DL,0x1 }
}


// ============================================================================
// Function : Unwind@7fffa4a57ac0  |  RVA: 0x2e7ac0  |  Size: 130 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a57ac0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)(&UNK_7fffa5628c86 +
            (short)((short)*(uint64_t *)(param_2 + 0x1480) * -0x5305 ^ 0x513b)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a57b50  |  RVA: 0x2e7b50  |  Size: 1149 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a57b50(void) {
    /* +0x2e7b50 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2e7b55 */ __asm { PUSH RBP }
    /* +0x2e7b56 */ __asm { PUSH RSI }
    /* +0x2e7b57 */ __asm { PUSH RBX }
    /* +0x2e7b58 */ __asm { PUSH RDI }
    /* +0x2e7b59 */ __asm { PUSH R12 }
    /* +0x2e7b5b */ __asm { PUSH R13 }
    /* +0x2e7b5d */ __asm { PUSH R15 }
    /* +0x2e7b5f */ __asm { PUSH R14 }
    /* +0x2e7b61 */ __asm { SUB RSP,0xc8 }
    /* +0x2e7b68 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2e7b6f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2e7b76 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2e7b7c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2e7b86 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2e7b90 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2e7b9a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2e7ba3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2e7bab */ __asm { JZ 0x7fffa4a57c50 }
    /* +0x2e7bb1 */ __asm { MOV R10D,0x64860307 }
    /* +0x2e7bb7 */ __asm { LEA R9,[0x7fffa47c5183] }
    /* +0x2e7bbe */ __asm { LEA R8,[0x7fffa47ca6d2] }
    /* +0x2e7bc5 */ __asm { NOP }
    /* +0x2e7bc6 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2e7bcd */ __asm { MOV RAX,0x0 }
    /* +0x2e7bd4 */ __asm { LEA RAX,[0x7fffa47be638] }
    /* +0x2e7bdb */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2e7be2 */ __asm { XOR R10D,EDX }
    /* +0x2e7be5 */ __asm { IMUL R10D,R10D,-0x46476f7b }
    /* +0x2e7bec */ __asm { MOVSXD RCX,R10D }
    /* +0x2e7bef */ __asm { ADD RCX,R9 }
    /* +0x2e7bf2 */ __asm { MOV R11W,0xad00 }
    /* +0x2e7bf7 */ __asm { XOR R11D,0x3b82 }
    /* +0x2e7bfe */ __asm { MOV R10D,0x5ed635d3 }
    /* +0x2e7c04 */ __asm { ADD R10D,EDX }
    /* +0x2e7c07 */ __asm { NOT R10D }
    /* +0x2e7c0a */ __asm { MOVSXD R10,R10D }
    /* +0x2e7c0d */ __asm { MOVZX R10D,uint8_t ptr [R8 + R10*0x1 + 0x9] }
    /* +0x2e7c13 */ __asm { SUB R11D,EDX }
    /* +0x2e7c16 */ __asm { ADD R11D,0xfffff444 }
    /* +0x2e7c1d */ __asm { MOVSX R8,R11W }
    /* +0x2e7c21 */ __asm { MOV RAX,qword ptr [RAX + R8*0x1 + 0x52] }
    /* +0x2e7c26 */ __asm { XOR RAX,qword ptr [RCX + R10*0x8 + 0x13] }
    /* +0x2e7c2b */ __asm { MOVQ XMM2,RAX }
    /* +0x2e7c30 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2e7c34 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2e7c38 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2e7c3d */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2e7c41 */ __asm { TEST R8,R8 }
    /* +0x2e7c44 */ __asm { JZ 0x7fffa4a57c98 }
    /* +0x2e7c46 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2e7c4d */ __asm { CALL R8 }
    /* +0x2e7c50 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2e7c59 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2e7c63 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2e7c6d */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2e7c77 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2e7c7d */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2e7c84 */ __asm { ADD RSP,0xc8 }
    /* +0x2e7c8b */ __asm { POP R14 }
    /* +0x2e7c8d */ __asm { POP R15 }
    /* +0x2e7c8f */ __asm { POP R13 }
    /* +0x2e7c91 */ __asm { POP R12 }
    /* +0x2e7c93 */ __asm { POP RDI }
    /* +0x2e7c94 */ __asm { POP RBX }
    /* +0x2e7c95 */ __asm { POP RSI }
    /* +0x2e7c96 */ __asm { POP RBP }
    /* +0x2e7c97 */ __asm { RET }
    /* +0x2e7c98 */ __asm { MOV R10W,0x1d12 }
    /* +0x2e7c9d */ __asm { XOR R10D,dword ptr [RBP + 0x1418] }
    /* +0x2e7ca4 */ __asm { IMUL R10D,R10D,0x1a9b }
    /* +0x2e7cab */ __asm { ROR R10W,0x1 }
    /* +0x2e7caf */ __asm { MOVZX R8D,R10W }
    /* +0x2e7cb3 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2e7cb7 */ __asm { MOV R10W,0x63 }
    /* +0x2e7cbc */ __asm { MOV R8D,0x93 }
    /* +0x2e7cc2 */ __asm { SUB R8D,R10D }
    /* +0x2e7cc5 */ __asm { MOVZX R8D,R8W }
    /* +0x2e7cc9 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2e7ccd */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2e7cd7 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2e7cdb */ __asm { NOP }
    /* +0x2e7cdc */ __asm { NOP }
    /* +0x2e7cdd */ __asm { NOP }
    /* +0x2e7cde */ __asm { NOP }
    /* +0x2e7cdf */ __asm { NOP }
    /* +0x2e7ce0 */ __asm { PUSHFQ }
    /* +0x2e7ce1 */ __asm { POP R8 }
    /* +0x2e7ce3 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2e7ce7 */ __asm { MOV qword ptr [RBP + 0x11e0],RAX }
    /* +0x2e7cee */ __asm { MOV qword ptr [RBP + 0x1318],R8 }
    /* +0x2e7cf5 */ __asm { TEST R8D,0x100 }
    /* +0x2e7cfc */ __asm { NOP }
    /* +0x2e7cfd */ __asm { NOP }
    /* +0x2e7cfe */ __asm { NOP }
    /* +0x2e7cff */ __asm { NOP }
    /* +0x2e7d00 */ __asm { NOP }
    /* +0x2e7d01 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2e7d08 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2e7d0c */ __asm { TEST R10D,R10D }
    /* +0x2e7d0f */ __asm { NOP }
    /* +0x2e7d10 */ __asm { NOP }
    /* +0x2e7d11 */ __asm { NOP }
    /* +0x2e7d12 */ __asm { NOP }
    /* +0x2e7d13 */ __asm { NOP }
    /* +0x2e7d14 */ __asm { ADD qword ptr [RBP + 0x11e0],0x10 }
    /* +0x2e7d1c */ __asm { MOV R11,0x10000000014b }
    /* +0x2e7d26 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2e7d2d */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2e7d30 */ __asm { MOV qword ptr [RBP + 0x11e0],RAX }
    /* +0x2e7d37 */ __asm { PUSHFQ }
    /* +0x2e7d38 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2e7d40 */ __asm { POPFQ }
    /* +0x2e7d41 */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2e7d48 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2e7d4c */ __asm { MOV R9D,0x3f1fb586 }
    /* +0x2e7d52 */ __asm { ADD R9D,0x1ea18e20 }
    /* +0x2e7d59 */ __asm { XOR R9D,dword ptr [RBP + 0x1418] }
    /* +0x2e7d60 */ __asm { CMP R8D,R9D }
    /* +0x2e7d63 */ __asm { JBE 0x7fffa4a57fb6 }
    /* +0x2e7d69 */ __asm { MOV RDX,0x0 }
    /* +0x2e7d70 */ __asm { NOP }
    /* +0x2e7d71 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x2e7d78 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2e7d7f */ __asm { MOVZX EBX,word ptr [RAX + 0x58] }
    /* +0x2e7d83 */ __asm { CMP EBX,0x2 }
    /* +0x2e7d86 */ __asm { JNC 0x7fffa4a57d90 }
    /* +0x2e7d88 */ __asm { XOR R8D,R8D }
    /* +0x2e7d8b */ __asm { JMP 0x7fffa4a57f68 }
    /* +0x2e7d90 */ __asm { SHR EBX,0x1 }
    /* +0x2e7d92 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2e7d99 */ __asm { MOV RCX,qword ptr [RAX + 0x60] }
    /* +0x2e7d9d */ __asm { CMP BX,0x1 }
    /* +0x2e7da1 */ __asm { JNZ 0x7fffa4a57db5 }
    /* +0x2e7da3 */ __asm { MOV RDX,-0x56ac57fd56f4aa33 }
    /* +0x2e7dad */ __asm { XOR R14D,R14D }
    /* +0x2e7db0 */ __asm { JMP 0x7fffa4a57e89 }
    /* +0x2e7db5 */ __asm { MOV R15D,EBX }
    /* +0x2e7db8 */ __asm { AND R15D,0xfffffffe }
    /* +0x2e7dbc */ __asm { MOV RDX,-0x56ac57fd56f4aa33 }
    /* +0x2e7dc6 */ __asm { XOR R13D,R13D }
    /* +0x2e7dc9 */ __asm { MOV R8D,0x7bdf91c4 }
    /* +0x2e7dcf */ __asm { LEA R9,[R13 + 0x2] }
    /* +0x2e7dd3 */ __asm { MOV SI,0xa042 }
    /* +0x2e7dd7 */ __asm { ADD ESI,0x1306 }
    /* +0x2e7ddd */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x2e7de4 */ __asm { XOR ESI,EAX }
    /* +0x2e7de6 */ __asm { LEA R14,[R13*0x2] }
    /* +0x2e7dee */ __asm { MOVZX EDI,word ptr [RCX + R13*0x2] }
    /* +0x2e7df3 */ __asm { MOV R12D,EDI }
    /* +0x2e7df6 */ __asm { OR R12D,0x20 }
    /* +0x2e7dfa */ __asm { ADD R8D,EAX }
    /* +0x2e7dfd */ __asm { MOV R10D,0x5bf2a0cc }
    /* +0x2e7e03 */ __asm { SUB R10D,R8D }
    /* +0x2e7e06 */ __asm { MOV R8D,0x17f0b427 }
    /* +0x2e7e0c */ __asm { ADD R8D,EAX }
    /* +0x2e7e0f */ __asm { XOR R8D,0xcdb017ec }
    /* +0x2e7e16 */ __asm { ROR R8D,0x1 }
    /* +0x2e7e19 */ __asm { MOVSXD R8,R8D }
    /* +0x2e7e1c */ __asm { CMP R10,0x3ee85bb6 }
    /* +0x2e7e23 */ __asm { CMOVZ R14,R9 }
    /* +0x2e7e27 */ __asm { XOR R10D,R10D }
    /* +0x2e7e2a */ __asm { XOR R9D,R9D }
    /* +0x2e7e2d */ __asm { CMP R14,R15 }
    /* +0x2e7e30 */ __asm { SETGE R10B }
    /* +0x2e7e34 */ __asm { SETZ R9B }
    /* +0x2e7e38 */ __asm { CMP R8,-0x45aa47b6 }
    /* +0x2e7e3f */ __asm { CMOVNZ R9D,R10D }
    /* +0x2e7e43 */ __asm { LEA R10D,[RDI + -0x41] }
    /* +0x2e7e47 */ __asm { CMP R10W,SI }
    /* +0x2e7e4b */ __asm { CMOVNC R12D,EDI }
    /* +0x2e7e4f */ __asm { MOVZX R8D,R12B }
    /* +0x2e7e53 */ __asm { XOR R8,RDX }
    /* +0x2e7e56 */ __asm { IMUL R8,R11 }
    /* +0x2e7e5a */ __asm { MOVZX EDX,word ptr [RCX + R13*0x2 + 0x2] }
    /* +0x2e7e60 */ __asm { MOV R10D,EDX }
    /* +0x2e7e63 */ __asm { OR R10D,0x20 }
    /* +0x2e7e67 */ __asm { LEA ESI,[RDX + -0x41] }
    /* +0x2e7e6a */ __asm { CMP SI,0x1a }
    /* +0x2e7e6e */ __asm { CMOVNC R10D,EDX }
    /* +0x2e7e72 */ __asm { MOVZX EDX,R10B }
    /* +0x2e7e76 */ __asm { XOR RDX,R8 }
    /* +0x2e7e79 */ __asm { IMUL RDX,R11 }
    /* +0x2e7e7d */ __asm { MOV R13,R14 }
    /* +0x2e7e80 */ __asm { TEST R9B,R9B }
    /* +0x2e7e83 */ __asm { JZ 0x7fffa4a57dc9 }
    /* +0x2e7e89 */ __asm { MOV R9,0x0 }
    /* +0x2e7e90 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0x2e7e97 */ __asm { NOP }
    /* +0x2e7e99 */ __asm { TEST BL,0x1 }
    /* +0x2e7e9c */ __asm { JZ 0x7fffa4a57f57 }
    /* +0x2e7ea2 */ __asm { MOV R9D,0xd679d984 }
    /* +0x2e7ea8 */ __asm { MOV R13D,0xe481ce54 }
    /* +0x2e7eae */ __asm { MOVZX EBX,word ptr [RCX + R14*0x2] }
    /* +0x2e7eb3 */ __asm { LEA ESI,[RBX + -0x41] }
    /* +0x2e7eb6 */ __asm { MOV R8D,0xcd506a1b }
    /* +0x2e7ebc */ __asm { MOV R15D,EBX }
    /* +0x2e7ebf */ __asm { SHL R15D,0x6 }
    /* +0x2e7ec3 */ __asm { ADD R15D,EBX }
    /* +0x2e7ec6 */ __asm { NEG R15D }
    /* +0x2e7ec9 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2e7ed0 */ __asm { ADD R9D,ECX }
    /* +0x2e7ed3 */ __asm { MOV EDI,0x65b29b8e }
    /* +0x2e7ed8 */ __asm { SUB EDI,ECX }
    /* +0x2e7eda */ __asm { ROL EDI,0x12 }
    /* +0x2e7edd */ __asm { IMUL R12D,R9D,-0x25a00399 }
    /* +0x2e7ee4 */ __asm { MOV R9,0x100074ed5024 }
    /* +0x2e7eee */ __asm { ADD R8D,0xdf5984c9 }
    /* +0x2e7ef5 */ __asm { ROR R8D,CL }
    /* +0x2e7ef8 */ __asm { ADD R8D,0x77712ce2 }
    /* +0x2e7eff */ __asm { MOVSXD R10,R8D }
    /* +0x2e7f02 */ __asm { IMUL R8D,R13D,-0x749692e1 }
    /* +0x2e7f09 */ __asm { ROR R8D,0x1 }
    /* +0x2e7f0c */ __asm { IMUL R8D,dword ptr [RBP + 0x104] }
    /* +0x2e7f14 */ __asm { MOV R13D,EBX }
    /* +0x2e7f17 */ __asm { OR R13D,0x20 }
    /* +0x2e7f1b */ __asm { ADD R12D,0x696159ef }
    /* +0x2e7f22 */ __asm { CMP R12,RDI }
    /* +0x2e7f25 */ __asm { CMOVBE R15D,ESI }
    /* +0x2e7f29 */ __asm { CMP R15W,0x1a }
    /* +0x2e7f2e */ __asm { CMOVNC R13D,EBX }
    /* +0x2e7f32 */ __asm { MOVZX EBX,R13B }
    /* +0x2e7f36 */ __asm { MOV R13,RDX }
    /* +0x2e7f39 */ __asm { XOR R13,RBX }
    /* +0x2e7f3c */ __asm { ADD RBX,RDX }
    /* +0x2e7f3f */ __asm { CMP R10,R8 }
    /* +0x2e7f42 */ __asm { CMOVA RBX,R13 }
    /* +0x2e7f46 */ __asm { ADD RCX,R9 }
    /* +0x2e7f49 */ __asm { ADD RCX,-0x1618022b }
    /* +0x2e7f50 */ __asm { IMUL RBX,RCX }
    /* +0x2e7f54 */ __asm { MOV RDX,RBX }
    /* +0x2e7f57 */ __asm { MOV RAX,0x39cda41577e4d47d }
    /* +0x2e7f61 */ __asm { CMP RDX,RAX }
    /* +0x2e7f64 */ __asm { SETZ R8B }
    /* +0x2e7f68 */ __asm { MOV R9D,0x7823659 }
    /* +0x2e7f6e */ __asm { XOR R9D,0x66c93a01 }
    /* +0x2e7f75 */ __asm { ADD R9D,dword ptr [RBP + 0x1418] }
    /* +0x2e7f7c */ __asm { MOV dword ptr [RBP + -0x8],R9D }
    /* +0x2e7f80 */ __asm { MOV R9D,dword ptr [RBP + -0x8] }
    /* +0x2e7f84 */ __asm { CMP R9D,0x26bd4fb8 }
    /* +0x2e7f8b */ __asm { JNC 0x7fffa4a57fbe }
    /* +0x2e7f8d */ __asm { TEST R8B,R8B }
    /* +0x2e7f90 */ __asm { JNZ 0x7fffa4a57fcd }
    /* +0x2e7f92 */ __asm { MOV R10D,0xbfe6045c }
    /* +0x2e7f98 */ __asm { XOR R10D,dword ptr [RBP + 0x1418] }
    /* +0x2e7f9f */ __asm { NOT R10D }
    /* +0x2e7fa2 */ __asm { IMUL R10D,R10D,-0x3383bcf7 }
    /* +0x2e7fa9 */ __asm { MOV dword ptr [RBP + -0x8],R10D }
    /* +0x2e7fad */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2e7fb1 */ __asm { JMP 0x7fffa4a57d26 }
    /* +0x2e7fb6 */ __asm { RET }
    /* +0x2e7fbe */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2e7fc3 */ __asm { NOP }
    /* +0x2e7fc4 */ __asm { NOP }
    /* +0x2e7fc5 */ __asm { NOP }
    /* +0x2e7fc6 */ __asm { NOP }
    /* +0x2e7fc7 */ __asm { NOP }
    /* +0x2e7fc8 */ __asm { NOP }
    /* +0x2e7fc9 */ __asm { NOP }
    /* +0x2e7fca */ __asm { NOP }
    /* +0x2e7fcb */ __asm { NOP }
    /* +0x2e7fcc */ __asm { NOP }
    /* +0x2e7fcd */ __asm { NOP }
    /* +0x2e7fce */ __asm { NOP }
    /* +0x2e7fcf */ __asm { NOP }
    /* +0x2e7fd0 */ __asm { NOP }
    /* +0x2e7fd1 */ __asm { NOP }
    /* +0x2e7fd2 */ __asm { NOP }
    /* +0x2e7fd3 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a59a20  |  RVA: 0x2e9a20  |  Size: 257 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a59a20(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)(*(int *)(param_2 + 0x184) * -0x14b98e63 + 0x15f5c20c) +
                     0x7fffa5691d3d);
    (*pcVar1)(pcVar1,0,*(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250),
              &IMAGE_DOS_HEADER_7fffa4770000);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a59b30  |  RVA: 0x2e9b30  |  Size: 227 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a59b30(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    pcVar1 = (code *)((int64_t)(-0x5ed62a27 - (int)*(uint64_t *)(param_2 + 0x1498)) +
                     0x7fffa56959a9);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a59c20  |  RVA: 0x2e9c20  |  Size: 114 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a59c20(void)

{
  code *pcVar1;
  
  Unwind_7fffa56253e0();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a59ca0  |  RVA: 0x2e9ca0  |  Size: 235 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a59ca0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
    (*(code *)((int64_t)(short)(0x21ceU >> bVar1 | 0x21ce << 0x10 - bVar1) + 0x7fffa568f3bd))
              (*(uint64_t *)(param_2 + 0x1498),param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a59d90  |  RVA: 0x2e9d90  |  Size: 239 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a59d90(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)
                      (short)~(((uint16_t)*(uint64_t *)(param_2 + 0x1498) ^ 0xe79c) * 0x189d) +
                     0x7fffa568ce87);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a59e80  |  RVA: 0x2e9e80  |  Size: 275 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a59e80(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint16_t uVar3;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar3 = (short)*(uint64_t *)(param_2 + 0x1260) + 0xee77;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
    pcVar2 = (code *)((int64_t)(short)(uVar3 >> bVar1 | uVar3 << 0x10 - bVar1) + 0x7fffa568dcc6);
    (*pcVar2)(pcVar2,&IMAGE_DOS_HEADER_7fffa4770000,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a59fa0  |  RVA: 0x2e9fa0  |  Size: 235 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a59fa0(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    (*(code *)((int64_t)
               (short)(((short)*(uint64_t *)(param_2 + 0x1498) + 0x72be) * 0x4539 + -0xdc5) +
              0x7fffa568c065))
              (0x7fffa568c065,param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a5a090  |  RVA: 0x2ea090  |  Size: 138 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a5a090(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  short sVar3;
  uint16_t uVar4;
  
  sVar3 = (short)((int)*(uint64_t *)(param_2 + 0x1480) * 0xe3e7);
  uVar4 = (sVar3 << 1 | (uint16_t)(sVar3 < 0)) + 0xa0b0;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0xf;
  (*(code *)(&UNK_7fffa562c00d + (short)(uVar4 >> bVar2 | uVar4 << 0x10 - bVar2)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a5a120  |  RVA: 0x2ea120  |  Size: 477 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a5a120(void) {
    /* +0x2ea120 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2ea125 */ __asm { PUSH RBP }
    /* +0x2ea126 */ __asm { PUSH RSI }
    /* +0x2ea127 */ __asm { PUSH RBX }
    /* +0x2ea128 */ __asm { PUSH RDI }
    /* +0x2ea129 */ __asm { PUSH R12 }
    /* +0x2ea12b */ __asm { PUSH R13 }
    /* +0x2ea12d */ __asm { PUSH R15 }
    /* +0x2ea12f */ __asm { PUSH R14 }
    /* +0x2ea131 */ __asm { SUB RSP,0xc8 }
    /* +0x2ea138 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2ea13f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2ea146 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2ea14c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2ea156 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2ea160 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2ea16a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2ea173 */ __asm { XOR R10D,R10D }
    /* +0x2ea176 */ __asm { XOR R8D,R8D }
    /* +0x2ea179 */ __asm { CMP qword ptr [RBP + 0x12a8],0x0 }
    /* +0x2ea181 */ __asm { SETG R10B }
    /* +0x2ea185 */ __asm { SETZ R8B }
    /* +0x2ea189 */ __asm { MOV R11D,0xb7086c6f }
    /* +0x2ea18f */ __asm { NOT R11D }
    /* +0x2ea192 */ __asm { ADD R11D,dword ptr [RBP + 0x1418] }
    /* +0x2ea199 */ __asm { MOV EAX,0xea2246e2 }
    /* +0x2ea19e */ __asm { CMP R11,RAX }
    /* +0x2ea1a1 */ __asm { CMOVNZ R8D,R10D }
    /* +0x2ea1a5 */ __asm { TEST R8B,R8B }
    /* +0x2ea1a8 */ __asm { JNZ 0x7fffa4a5a242 }
    /* +0x2ea1ae */ __asm { MOV R10D,0x912aaecc }
    /* +0x2ea1b4 */ __asm { MOV R8D,0xb4941b2b }
    /* +0x2ea1ba */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2ea1c1 */ __asm { SUB R10D,ECX }
    /* +0x2ea1c4 */ __asm { LEA RAX,[0x7fffa47ca79f] }
    /* +0x2ea1cb */ __asm { XOR R8D,0x8fe3fc44 }
    /* +0x2ea1d2 */ __asm { ROR R8D,CL }
    /* +0x2ea1d5 */ __asm { ADD R8D,0x6235069 }
    /* +0x2ea1dc */ __asm { MOVSXD R11,R8D }
    /* +0x2ea1df */ __asm { MOV R8D,0x212d9ad4 }
    /* +0x2ea1e5 */ __asm { NEG R8D }
    /* +0x2ea1e8 */ __asm { ADD R8D,ECX }
    /* +0x2ea1eb */ __asm { ADD R8D,0x8001fd8f }
    /* +0x2ea1f2 */ __asm { MOVSXD R8,R8D }
    /* +0x2ea1f5 */ __asm { ADD R8,RAX }
    /* +0x2ea1f8 */ __asm { LEA RAX,[0x7fffa47c4e4f] }
    /* +0x2ea1ff */ __asm { ROL R10D,0x5 }
    /* +0x2ea203 */ __asm { LEA R9,[0x7fffa47c9e66] }
    /* +0x2ea20a */ __asm { MOVZX ECX,uint8_t ptr [R9 + R11*0x1 + 0x9] }
    /* +0x2ea210 */ __asm { MOVSXD R10,R10D }
    /* +0x2ea213 */ __asm { MOV RAX,qword ptr [RAX + R10*0x1 + 0x52] }
    /* +0x2ea218 */ __asm { XOR RAX,qword ptr [R8 + RCX*0x8 + 0x13] }
    /* +0x2ea21d */ __asm { MOVQ XMM2,RAX }
    /* +0x2ea222 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2ea226 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2ea22a */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2ea22f */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2ea233 */ __asm { TEST R8,R8 }
    /* +0x2ea236 */ __asm { JZ 0x7fffa4a5a28a }
    /* +0x2ea238 */ __asm { MOV RCX,qword ptr [RBP + 0x12a8] }
    /* +0x2ea23f */ __asm { CALL R8 }
    /* +0x2ea242 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2ea24b */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2ea255 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2ea25f */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2ea269 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2ea26f */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2ea276 */ __asm { ADD RSP,0xc8 }
    /* +0x2ea27d */ __asm { POP R14 }
    /* +0x2ea27f */ __asm { POP R15 }
    /* +0x2ea281 */ __asm { POP R13 }
    /* +0x2ea283 */ __asm { POP R12 }
    /* +0x2ea285 */ __asm { POP RDI }
    /* +0x2ea286 */ __asm { POP RBX }
    /* +0x2ea287 */ __asm { POP RSI }
    /* +0x2ea288 */ __asm { POP RBP }
    /* +0x2ea289 */ __asm { RET }
    /* +0x2ea28a */ __asm { MOV R10W,0xe6dd }
    /* +0x2ea28f */ __asm { MOV R8D,0xffffe85d }
    /* +0x2ea295 */ __asm { SUB R8D,R10D }
    /* +0x2ea298 */ __asm { ROL R8W,0xe }
    /* +0x2ea29d */ __asm { MOVZX R8D,R8W }
    /* +0x2ea2a1 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2ea2a5 */ __asm { MOV R10W,0xbdb }
    /* +0x2ea2aa */ __asm { XOR R10D,0xbd7 }
    /* +0x2ea2b1 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2ea2b8 */ __asm { ROL R10W,CL }
    /* +0x2ea2bc */ __asm { MOVZX R8D,R10W }
    /* +0x2ea2c0 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2ea2c4 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2ea2ce */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2ea2d2 */ __asm { NOP }
    /* +0x2ea2d3 */ __asm { NOP }
    /* +0x2ea2d4 */ __asm { NOP }
    /* +0x2ea2d5 */ __asm { NOP }
    /* +0x2ea2d6 */ __asm { NOP }
    /* +0x2ea2d7 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2ea2db */ __asm { PUSHFQ }
    /* +0x2ea2dc */ __asm { POP R8 }
    /* +0x2ea2de */ __asm { MOV qword ptr [RBP + 0x150],R8 }
    /* +0x2ea2e5 */ __asm { TEST R8D,0x100 }
    /* +0x2ea2ec */ __asm { NOP }
    /* +0x2ea2ed */ __asm { NOP }
    /* +0x2ea2ee */ __asm { NOP }
    /* +0x2ea2ef */ __asm { NOP }
    /* +0x2ea2f0 */ __asm { NOP }
    /* +0x2ea2f1 */ __asm { NOP }
    /* +0x2ea2f2 */ __asm { NOP }
    /* +0x2ea2f3 */ __asm { NOP }
    /* +0x2ea2f4 */ __asm { NOP }
    /* +0x2ea2f5 */ __asm { NOP }
    /* +0x2ea2f6 */ __asm { NOP }
    /* +0x2ea2f7 */ __asm { NOP }
    /* +0x2ea2f8 */ __asm { NOP }
    /* +0x2ea2f9 */ __asm { NOP }
    /* +0x2ea2fa */ __asm { NOP }
    /* +0x2ea2fb */ __asm { NOP }
    /* +0x2ea2fc */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a5bfd0  |  RVA: 0x2ebfd0  |  Size: 815 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a5bfd0(void) {
    /* +0x2ebfd0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2ebfd5 */ __asm { PUSH RBP }
    /* +0x2ebfd6 */ __asm { PUSH RSI }
    /* +0x2ebfd7 */ __asm { PUSH RBX }
    /* +0x2ebfd8 */ __asm { PUSH RDI }
    /* +0x2ebfd9 */ __asm { PUSH R12 }
    /* +0x2ebfdb */ __asm { PUSH R13 }
    /* +0x2ebfdd */ __asm { PUSH R15 }
    /* +0x2ebfdf */ __asm { PUSH R14 }
    /* +0x2ebfe1 */ __asm { SUB RSP,0xc8 }
    /* +0x2ebfe8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2ebfef */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2ebff6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2ebffc */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2ec006 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2ec010 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2ec01a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2ec023 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2ec02b */ __asm { JZ 0x7fffa4a5c0c7 }
    /* +0x2ec031 */ __asm { LEA RAX,[0x7fffa47c700a] }
    /* +0x2ec038 */ __asm { LEA RCX,[0x7fffa47c4838] }
    /* +0x2ec03f */ __asm { MOV R10D,0xff35777f }
    /* +0x2ec045 */ __asm { MOV R8D,0x61baa8b9 }
    /* +0x2ec04b */ __asm { XOR R8D,0x536fe23a }
    /* +0x2ec052 */ __asm { LEA R9,[0x7fffa47ca57c] }
    /* +0x2ec059 */ __asm { IMUL R10D,dword ptr [RBP + 0x104] }
    /* +0x2ec061 */ __asm { ADD R10D,0x65458d03 }
    /* +0x2ec068 */ __asm { MOVSXD R10,R10D }
    /* +0x2ec06b */ __asm { MOVZX R10D,uint8_t ptr [R9 + R10*0x1 + 0x9] }
    /* +0x2ec071 */ __asm { MOV R11D,0x22e006dc }
    /* +0x2ec077 */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2ec07e */ __asm { XOR R11D,EDX }
    /* +0x2ec081 */ __asm { ADD R11D,0x7c349814 }
    /* +0x2ec088 */ __asm { MOVSXD R9,R11D }
    /* +0x2ec08b */ __asm { ADD R8D,EDX }
    /* +0x2ec08e */ __asm { ROL R8D,0x6 }
    /* +0x2ec092 */ __asm { MOVSXD R8,R8D }
    /* +0x2ec095 */ __asm { ADD R8,RCX }
    /* +0x2ec098 */ __asm { MOV RCX,qword ptr [R8 + R10*0x8 + 0x13] }
    /* +0x2ec09d */ __asm { XOR RCX,qword ptr [RAX + R9*0x1 + 0x52] }
    /* +0x2ec0a2 */ __asm { MOVQ XMM2,RCX }
    /* +0x2ec0a7 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2ec0ab */ __asm { PXOR XMM4,XMM2 }
    /* +0x2ec0af */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2ec0b4 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2ec0b8 */ __asm { TEST R8,R8 }
    /* +0x2ec0bb */ __asm { JZ 0x7fffa4a5c10f }
    /* +0x2ec0bd */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2ec0c4 */ __asm { CALL R8 }
    /* +0x2ec0c7 */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2ec0d0 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2ec0da */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2ec0e4 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2ec0ee */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2ec0f4 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2ec0fb */ __asm { ADD RSP,0xc8 }
    /* +0x2ec102 */ __asm { POP R14 }
    /* +0x2ec104 */ __asm { POP R15 }
    /* +0x2ec106 */ __asm { POP R13 }
    /* +0x2ec108 */ __asm { POP R12 }
    /* +0x2ec10a */ __asm { POP RDI }
    /* +0x2ec10b */ __asm { POP RBX }
    /* +0x2ec10c */ __asm { POP RSI }
    /* +0x2ec10d */ __asm { POP RBP }
    /* +0x2ec10e */ __asm { RET }
    /* +0x2ec10f */ __asm { MOV R10W,0xf351 }
    /* +0x2ec114 */ __asm { NOT R10D }
    /* +0x2ec117 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2ec11e */ __asm { ADD R10D,ECX }
    /* +0x2ec121 */ __asm { ROL R10W,0x7 }
    /* +0x2ec126 */ __asm { MOVZX R8D,R10W }
    /* +0x2ec12a */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2ec12e */ __asm { MOV R10W,0xacd3 }
    /* +0x2ec133 */ __asm { XOR R10D,0xcccc }
    /* +0x2ec13a */ __asm { ROL R10W,CL }
    /* +0x2ec13e */ __asm { MOVZX R8D,R10W }
    /* +0x2ec142 */ __asm { XOR R8,0x804d }
    /* +0x2ec149 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2ec14d */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2ec157 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2ec15b */ __asm { NOP }
    /* +0x2ec15c */ __asm { NOP }
    /* +0x2ec15d */ __asm { NOP }
    /* +0x2ec15e */ __asm { NOP }
    /* +0x2ec15f */ __asm { NOP }
    /* +0x2ec160 */ __asm { PUSHFQ }
    /* +0x2ec161 */ __asm { POP R8 }
    /* +0x2ec163 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2ec167 */ __asm { MOV qword ptr [RBP + 0x12c8],R8 }
    /* +0x2ec16e */ __asm { TEST R8D,0x100 }
    /* +0x2ec175 */ __asm { NOP }
    /* +0x2ec176 */ __asm { NOP }
    /* +0x2ec177 */ __asm { NOP }
    /* +0x2ec178 */ __asm { NOP }
    /* +0x2ec179 */ __asm { NOP }
    /* +0x2ec17a */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2ec181 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2ec185 */ __asm { TEST R10D,R10D }
    /* +0x2ec188 */ __asm { NOP }
    /* +0x2ec189 */ __asm { NOP }
    /* +0x2ec18a */ __asm { NOP }
    /* +0x2ec18b */ __asm { NOP }
    /* +0x2ec18c */ __asm { NOP }
    /* +0x2ec18d */ __asm { ADD RAX,0x10 }
    /* +0x2ec191 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x2ec198 */ __asm { MOV R11,0x0 }
    /* +0x2ec19f */ __asm { NOP }
    /* +0x2ec1a0 */ __asm { MOV RCX,-0x56ac57fd56f4aa33 }
    /* +0x2ec1aa */ __asm { MOV R8,0x10000000014b }
    /* +0x2ec1b4 */ __asm { MOV R9,0x39cda41577e4d47d }
    /* +0x2ec1be */ __asm { MOV R10D,0x1e62c8c8 }
    /* +0x2ec1c4 */ __asm { IMUL R10D,R10D,0x716726c7 }
    /* +0x2ec1cb */ __asm { XOR R10D,0xc62422ba }
    /* +0x2ec1d2 */ __asm { SUB R10D,dword ptr [RBP + 0x1418] }
    /* +0x2ec1d9 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2ec1dc */ __asm { PUSHFQ }
    /* +0x2ec1dd */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2ec1e5 */ __asm { POPFQ }
    /* +0x2ec1e6 */ __asm { MOV dword ptr [RBP + -0x8],R10D }
    /* +0x2ec1ea */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2ec1ee */ __asm { CMP R10D,0xfcebf0f4 }
    /* +0x2ec1f5 */ __asm { JBE 0x7fffa4a5c2e8 }
    /* +0x2ec1fb */ __asm { MOVZX R11D,word ptr [RAX + 0x58] }
    /* +0x2ec200 */ __asm { CMP R11D,0x2 }
    /* +0x2ec204 */ __asm { JC 0x7fffa4a5c275 }
    /* +0x2ec206 */ __asm { MOV R10,qword ptr [RAX + 0x60] }
    /* +0x2ec20a */ __asm { SHR R11D,0x1 }
    /* +0x2ec20d */ __asm { CMP R11W,0x1 }
    /* +0x2ec212 */ __asm { JZ 0x7fffa4a5c27a }
    /* +0x2ec214 */ __asm { MOV EBX,R11D }
    /* +0x2ec217 */ __asm { AND EBX,0xfffffffe }
    /* +0x2ec21a */ __asm { MOV R14D,0x2 }
    /* +0x2ec220 */ __asm { MOV RDX,RCX }
    /* +0x2ec223 */ __asm { MOVZX R15D,word ptr [R10 + R14*0x2 + -0x2] }
    /* +0x2ec229 */ __asm { LEA ESI,[R15 + -0x41] }
    /* +0x2ec22d */ __asm { MOV R13D,R15D }
    /* +0x2ec230 */ __asm { OR R13D,0x20 }
    /* +0x2ec234 */ __asm { CMP SI,0x1a }
    /* +0x2ec238 */ __asm { CMOVNC R13D,R15D }
    /* +0x2ec23c */ __asm { MOVZX R15D,word ptr [R10 + R14*0x2 + -0x4] }
    /* +0x2ec242 */ __asm { LEA ESI,[R15 + -0x41] }
    /* +0x2ec246 */ __asm { MOV EDI,R15D }
    /* +0x2ec249 */ __asm { OR EDI,0x20 }
    /* +0x2ec24c */ __asm { CMP SI,0x1a }
    /* +0x2ec250 */ __asm { CMOVNC EDI,R15D }
    /* +0x2ec254 */ __asm { MOVZX R15D,DIL }
    /* +0x2ec258 */ __asm { XOR R15,RDX }
    /* +0x2ec25b */ __asm { IMUL R15,R8 }
    /* +0x2ec25f */ __asm { MOVZX EDX,R13B }
    /* +0x2ec263 */ __asm { XOR RDX,R15 }
    /* +0x2ec266 */ __asm { IMUL RDX,R8 }
    /* +0x2ec26a */ __asm { CMP RBX,R14 }
    /* +0x2ec26d */ __asm { JZ 0x7fffa4a5c280 }
    /* +0x2ec26f */ __asm { ADD R14,0x2 }
    /* +0x2ec273 */ __asm { JMP 0x7fffa4a5c223 }
    /* +0x2ec275 */ __asm { XOR R10D,R10D }
    /* +0x2ec278 */ __asm { JMP 0x7fffa4a5c2b0 }
    /* +0x2ec27a */ __asm { MOV RDX,RCX }
    /* +0x2ec27d */ __asm { XOR R14D,R14D }
    /* +0x2ec280 */ __asm { TEST R11B,0x1 }
    /* +0x2ec284 */ __asm { JZ 0x7fffa4a5c2a9 }
    /* +0x2ec286 */ __asm { MOVZX R11D,word ptr [R10 + R14*0x2] }
    /* +0x2ec28b */ __asm { LEA R10D,[R11 + -0x41] }
    /* +0x2ec28f */ __asm { MOV ESI,R11D }
    /* +0x2ec292 */ __asm { OR ESI,0x20 }
    /* +0x2ec295 */ __asm { CMP R10W,0x1a }
    /* +0x2ec29a */ __asm { CMOVNC ESI,R11D }
    /* +0x2ec29e */ __asm { MOVZX R11D,SIL }
    /* +0x2ec2a2 */ __asm { XOR RDX,R11 }
    /* +0x2ec2a5 */ __asm { IMUL RDX,R8 }
    /* +0x2ec2a9 */ __asm { CMP RDX,R9 }
    /* +0x2ec2ac */ __asm { SETZ R10B }
    /* +0x2ec2b0 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x2ec2b7 */ __asm { NOP }
    /* +0x2ec2b8 */ __asm { MOV R11,0x0 }
    /* +0x2ec2bf */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2ec2c6 */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x2ec2ca */ __asm { CMP R11D,0x26bd4fb8 }
    /* +0x2ec2d1 */ __asm { JNC 0x7fffa4a5c2f0 }
    /* +0x2ec2d3 */ __asm { TEST R10B,R10B }
    /* +0x2ec2d6 */ __asm { JNZ 0x7fffa4a5c2ff }
    /* +0x2ec2d8 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2ec2df */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2ec2e3 */ __asm { JMP 0x7fffa4a5c1be }
    /* +0x2ec2e8 */ __asm { RET }
    /* +0x2ec2f0 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2ec2f5 */ __asm { NOP }
    /* +0x2ec2f6 */ __asm { NOP }
    /* +0x2ec2f7 */ __asm { NOP }
    /* +0x2ec2f8 */ __asm { NOP }
    /* +0x2ec2f9 */ __asm { NOP }
    /* +0x2ec2fa */ __asm { NOP }
    /* +0x2ec2fb */ __asm { NOP }
    /* +0x2ec2fc */ __asm { NOP }
    /* +0x2ec2fd */ __asm { NOP }
    /* +0x2ec2fe */ __asm { NOP }
    /* +0x2ec2ff */ __asm { NOP }
    /* +0x2ec300 */ __asm { NOP }
    /* +0x2ec301 */ __asm { NOP }
    /* +0x2ec302 */ __asm { NOP }
    /* +0x2ec303 */ __asm { NOP }
    /* +0x2ec304 */ __asm { NOP }
    /* +0x2ec305 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a5dc70  |  RVA: 0x2edc70  |  Size: 133 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a5dc70(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  (*(code *)((int64_t)(short)(~(-0x1dc << bVar2 | 0xfe24U >> 0x10 - bVar2) * 0x6d5b) +
            0x7fffa562b47c))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a5dd00  |  RVA: 0x2edd00  |  Size: 136 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a5dd00(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar3 = *(uint32_t *)(param_2 + 0x188) ^ 0xfffda59f;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
  uVar3 = uVar3 << bVar2 | uVar3 >> 0x20 - bVar2;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1518) & 0x1f;
  uVar3 = uVar3 >> bVar2 | uVar3 << 0x20 - bVar2;
  (*(code *)((int64_t)(int)(uVar3 << 0x19 | uVar3 >> 7) + 0x7fffa562dbad))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a5dd90  |  RVA: 0x2edd90  |  Size: 129 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a5dd90(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)
             (((int)*(uint64_t *)(param_2 + 0x188) - *(int *)(param_2 + 0x1498)) + -0x5ed65901) +
            0x7fffa5631ae3))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a5de20  |  RVA: 0x2ede20  |  Size: 230 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a5de20(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
    pcVar2 = (code *)((int64_t)(int)(0x2ba7fffdU >> bVar1 | 0x2ba7fffd << 0x20 - bVar1) +
                     0x7fffa5693147);
    (*pcVar2)(pcVar2,param_2,
              *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a5df10  |  RVA: 0x2edf10  |  Size: 272 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a5df10(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)
                      (int)(~(*(uint32_t *)(param_2 + 0x188) ^ 0x5ed61b4c) -
                           (int)*(uint64_t *)(param_2 + 0x1498)) + 0x7fffa56949cf);
    (*pcVar1)(pcVar1,&IMAGE_DOS_HEADER_7fffa4770000,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a5e020  |  RVA: 0x2ee020  |  Size: 888 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a5e020(void) {
    /* +0x2ee020 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2ee025 */ __asm { PUSH RBP }
    /* +0x2ee026 */ __asm { PUSH RSI }
    /* +0x2ee027 */ __asm { PUSH RBX }
    /* +0x2ee028 */ __asm { PUSH RDI }
    /* +0x2ee029 */ __asm { PUSH R12 }
    /* +0x2ee02b */ __asm { PUSH R13 }
    /* +0x2ee02d */ __asm { PUSH R15 }
    /* +0x2ee02f */ __asm { PUSH R14 }
    /* +0x2ee031 */ __asm { SUB RSP,0xc8 }
    /* +0x2ee038 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2ee03f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2ee046 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2ee04c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2ee056 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2ee060 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2ee06a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2ee073 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2ee07b */ __asm { JZ 0x7fffa4a5e11b }
    /* +0x2ee081 */ __asm { LEA RAX,[0x7fffa47c6044] }
    /* +0x2ee088 */ __asm { MOV R10D,0x303e894a }
    /* +0x2ee08e */ __asm { MOV R8W,0xef0e }
    /* +0x2ee093 */ __asm { XOR R8D,0xffffe43d }
    /* +0x2ee09a */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x2ee0a1 */ __asm { ADD R8D,R11D }
    /* +0x2ee0a4 */ __asm { MOVSX RCX,R8W }
    /* +0x2ee0a8 */ __asm { LEA R8,[0x7fffa47cacad] }
    /* +0x2ee0af */ __asm { XOR R10D,0xa1ccc66f }
    /* +0x2ee0b6 */ __asm { IMUL R10D,dword ptr [RBP + 0x104] }
    /* +0x2ee0be */ __asm { ROL R10D,0x1d }
    /* +0x2ee0c2 */ __asm { MOVSXD R9,R10D }
    /* +0x2ee0c5 */ __asm { ADD R9,R8 }
    /* +0x2ee0c8 */ __asm { LEA R8,[0x7fffa47bff27] }
    /* +0x2ee0cf */ __asm { MOV R10D,0x5fdc2eef }
    /* +0x2ee0d5 */ __asm { ADD R10D,R11D }
    /* +0x2ee0d8 */ __asm { ADD R10D,0x3ef8f519 }
    /* +0x2ee0df */ __asm { ROL R10D,0x2 }
    /* +0x2ee0e3 */ __asm { MOVSXD R10,R10D }
    /* +0x2ee0e6 */ __asm { MOVZX R10D,uint8_t ptr [RAX + R10*0x1 + 0x9] }
    /* +0x2ee0ec */ __asm { MOV RAX,qword ptr [R8 + RCX*0x1 + 0x52] }
    /* +0x2ee0f1 */ __asm { XOR RAX,qword ptr [R9 + R10*0x8 + 0x13] }
    /* +0x2ee0f6 */ __asm { MOVQ XMM2,RAX }
    /* +0x2ee0fb */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2ee0ff */ __asm { PXOR XMM4,XMM2 }
    /* +0x2ee103 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2ee108 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2ee10c */ __asm { TEST R8,R8 }
    /* +0x2ee10f */ __asm { JZ 0x7fffa4a5e163 }
    /* +0x2ee111 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2ee118 */ __asm { CALL R8 }
    /* +0x2ee11b */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2ee124 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2ee12e */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2ee138 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2ee142 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2ee148 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2ee14f */ __asm { ADD RSP,0xc8 }
    /* +0x2ee156 */ __asm { POP R14 }
    /* +0x2ee158 */ __asm { POP R15 }
    /* +0x2ee15a */ __asm { POP R13 }
    /* +0x2ee15c */ __asm { POP R12 }
    /* +0x2ee15e */ __asm { POP RDI }
    /* +0x2ee15f */ __asm { POP RBX }
    /* +0x2ee160 */ __asm { POP RSI }
    /* +0x2ee161 */ __asm { POP RBP }
    /* +0x2ee162 */ __asm { RET }
    /* +0x2ee163 */ __asm { MOV R10W,0x4c4d }
    /* +0x2ee168 */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x2ee16f */ __asm { ADD R10D,R11D }
    /* +0x2ee172 */ __asm { NOT R10D }
    /* +0x2ee175 */ __asm { MOVZX R8D,R10W }
    /* +0x2ee179 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2ee17d */ __asm { MOV R10W,0xb34e }
    /* +0x2ee182 */ __asm { SUB R10D,R11D }
    /* +0x2ee185 */ __asm { ROL R10W,0x4 }
    /* +0x2ee18a */ __asm { NOT R10D }
    /* +0x2ee18d */ __asm { MOVZX R8D,R10W }
    /* +0x2ee191 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2ee195 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2ee19f */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2ee1a3 */ __asm { NOP }
    /* +0x2ee1a4 */ __asm { NOP }
    /* +0x2ee1a5 */ __asm { NOP }
    /* +0x2ee1a6 */ __asm { NOP }
    /* +0x2ee1a7 */ __asm { NOP }
    /* +0x2ee1a8 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2ee1ac */ __asm { PUSHFQ }
    /* +0x2ee1ad */ __asm { POP R8 }
    /* +0x2ee1af */ __asm { MOV qword ptr [RBP + 0x1318],R8 }
    /* +0x2ee1b6 */ __asm { TEST R8D,0x100 }
    /* +0x2ee1bd */ __asm { NOP }
    /* +0x2ee1be */ __asm { NOP }
    /* +0x2ee1bf */ __asm { NOP }
    /* +0x2ee1c0 */ __asm { NOP }
    /* +0x2ee1c1 */ __asm { NOP }
    /* +0x2ee1c2 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2ee1c9 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2ee1cd */ __asm { TEST R10D,R10D }
    /* +0x2ee1d0 */ __asm { NOP }
    /* +0x2ee1d1 */ __asm { NOP }
    /* +0x2ee1d2 */ __asm { NOP }
    /* +0x2ee1d3 */ __asm { NOP }
    /* +0x2ee1d4 */ __asm { NOP }
    /* +0x2ee1d5 */ __asm { ADD RAX,0x10 }
    /* +0x2ee1d9 */ __asm { MOV R8,0x10000000014b }
    /* +0x2ee1e3 */ __asm { MOV R9,qword ptr [RBP + 0x1418] }
    /* +0x2ee1ea */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x2ee1f1 */ __asm { MOV R11,0x0 }
    /* +0x2ee1f8 */ __asm { NOP }
    /* +0x2ee1f9 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2ee1fc */ __asm { PUSHFQ }
    /* +0x2ee1fd */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2ee205 */ __asm { POPFQ }
    /* +0x2ee206 */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2ee20d */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2ee211 */ __asm { CMP R10D,0xfcebf0f4 }
    /* +0x2ee218 */ __asm { JBE 0x7fffa4a5e381 }
    /* +0x2ee21e */ __asm { MOVZX R11D,word ptr [RAX + 0x58] }
    /* +0x2ee223 */ __asm { CMP R11D,0x2 }
    /* +0x2ee227 */ __asm { JC 0x7fffa4a5e309 }
    /* +0x2ee22d */ __asm { SHR R11D,0x1 }
    /* +0x2ee230 */ __asm { MOV R10,qword ptr [RAX + 0x60] }
    /* +0x2ee234 */ __asm { CMP R11W,0x1 }
    /* +0x2ee239 */ __asm { JZ 0x7fffa4a5e30e }
    /* +0x2ee23f */ __asm { NOP }
    /* +0x2ee240 */ __asm { LEA R13,[0x7fffa4770000] }
    /* +0x2ee247 */ __asm { MOV RDX,0x0 }
    /* +0x2ee24e */ __asm { MOV EBX,R11D }
    /* +0x2ee251 */ __asm { AND EBX,0xfffffffe }
    /* +0x2ee254 */ __asm { MOV R14D,0x2 }
    /* +0x2ee25a */ __asm { MOV RDX,-0x56ac57fd56f4aa33 }
    /* +0x2ee264 */ __asm { MOV R15D,0x83336e66 }
    /* +0x2ee26a */ __asm { MOV R13W,0xf0e4 }
    /* +0x2ee26f */ __asm { IMUL R13D,dword ptr [RBP + 0x1400] }
    /* +0x2ee277 */ __asm { XOR R13D,0x85f6 }
    /* +0x2ee27e */ __asm { MOVZX EDI,word ptr [R10 + R14*0x2 + -0x2] }
    /* +0x2ee284 */ __asm { LEA R12D,[RDI + -0x41] }
    /* +0x2ee288 */ __asm { MOV ESI,EDI }
    /* +0x2ee28a */ __asm { OR ESI,0x20 }
    /* +0x2ee28d */ __asm { CMP R12W,R13W }
    /* +0x2ee291 */ __asm { CMOVNC ESI,EDI }
    /* +0x2ee294 */ __asm { MOV R13D,0x6cee446d }
    /* +0x2ee29a */ __asm { LEA EDI,[R9 + R13*0x1] }
    /* +0x2ee29e */ __asm { ADD EDI,0xf4f0ae96 }
    /* +0x2ee2a4 */ __asm { XOR EDI,0x353f306e }
    /* +0x2ee2aa */ __asm { MOVZX R12D,word ptr [R10 + R14*0x2 + -0x4] }
    /* +0x2ee2b0 */ __asm { MOV R13D,R12D }
    /* +0x2ee2b3 */ __asm { OR R13D,0x20 }
    /* +0x2ee2b7 */ __asm { MOV ECX,R12D }
    /* +0x2ee2ba */ __asm { SHL ECX,0x5 }
    /* +0x2ee2bd */ __asm { IMUL R15D,R15D,0x109ec99d }
    /* +0x2ee2c4 */ __asm { XOR R15D,R9D }
    /* +0x2ee2c7 */ __asm { ADD R15D,0xd0734a76 }
    /* +0x2ee2ce */ __asm { MOVSXD R15,R15D }
    /* +0x2ee2d1 */ __asm { CMP R15,RDI }
    /* +0x2ee2d4 */ __asm { CMOVNZ ECX,R13D }
    /* +0x2ee2d8 */ __asm { LEA R15D,[R12 + -0x41] }
    /* +0x2ee2dd */ __asm { CMP R15W,0x1a }
    /* +0x2ee2e2 */ __asm { CMOVNC ECX,R12D }
    /* +0x2ee2e6 */ __asm { MOVZX ECX,CL }
    /* +0x2ee2e9 */ __asm { XOR RCX,RDX }
    /* +0x2ee2ec */ __asm { IMUL RCX,R8 }
    /* +0x2ee2f0 */ __asm { MOVZX EDX,SIL }
    /* +0x2ee2f4 */ __asm { XOR RDX,RCX }
    /* +0x2ee2f7 */ __asm { IMUL RDX,R8 }
    /* +0x2ee2fb */ __asm { CMP RBX,R14 }
    /* +0x2ee2fe */ __asm { JZ 0x7fffa4a5e31b }
    /* +0x2ee300 */ __asm { ADD R14,0x2 }
    /* +0x2ee304 */ __asm { JMP 0x7fffa4a5e264 }
    /* +0x2ee309 */ __asm { XOR R10D,R10D }
    /* +0x2ee30c */ __asm { JMP 0x7fffa4a5e358 }
    /* +0x2ee30e */ __asm { MOV RDX,-0x56ac57fd56f4aa33 }
    /* +0x2ee318 */ __asm { XOR R14D,R14D }
    /* +0x2ee31b */ __asm { TEST R11B,0x1 }
    /* +0x2ee31f */ __asm { JZ 0x7fffa4a5e347 }
    /* +0x2ee321 */ __asm { MOVZX R11D,word ptr [R10 + R14*0x2] }
    /* +0x2ee326 */ __asm { MOV R10D,R11D }
    /* +0x2ee329 */ __asm { OR R10D,0x20 }
    /* +0x2ee32d */ __asm { LEA ESI,[R11 + -0x41] }
    /* +0x2ee331 */ __asm { CMP SI,0x1a }
    /* +0x2ee335 */ __asm { CMOVNC R10D,R11D }
    /* +0x2ee339 */ __asm { MOVZX R11D,R10B }
    /* +0x2ee33d */ __asm { XOR R11,RDX }
    /* +0x2ee340 */ __asm { IMUL R11,R8 }
    /* +0x2ee344 */ __asm { MOV RDX,R11 }
    /* +0x2ee347 */ __asm { MOV RCX,0x39cda41577e4d47d }
    /* +0x2ee351 */ __asm { CMP RDX,RCX }
    /* +0x2ee354 */ __asm { SETZ R10B }
    /* +0x2ee358 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2ee35f */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x2ee363 */ __asm { CMP R11D,0x26bd4fb8 }
    /* +0x2ee36a */ __asm { JNC 0x7fffa4a5e389 }
    /* +0x2ee36c */ __asm { TEST R10B,R10B }
    /* +0x2ee36f */ __asm { JNZ 0x7fffa4a5e398 }
    /* +0x2ee371 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2ee378 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2ee37c */ __asm { JMP 0x7fffa4a5e1ea }
    /* +0x2ee381 */ __asm { RET }
    /* +0x2ee389 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2ee38e */ __asm { NOP }
    /* +0x2ee38f */ __asm { NOP }
    /* +0x2ee390 */ __asm { NOP }
    /* +0x2ee391 */ __asm { NOP }
    /* +0x2ee392 */ __asm { NOP }
    /* +0x2ee393 */ __asm { NOP }
    /* +0x2ee394 */ __asm { NOP }
    /* +0x2ee395 */ __asm { NOP }
    /* +0x2ee396 */ __asm { NOP }
    /* +0x2ee397 */ __asm { NOP }
    /* +0x2ee398 */ __asm { NOP }
    /* +0x2ee399 */ __asm { NOP }
    /* +0x2ee39a */ __asm { NOP }
    /* +0x2ee39b */ __asm { NOP }
    /* +0x2ee39c */ __asm { NOP }
    /* +0x2ee39d */ __asm { NOP }
    /* +0x2ee39e */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a5fba0  |  RVA: 0x2efba0  |  Size: 981 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a5fba0(void) {
    /* +0x2efba0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2efba5 */ __asm { PUSH RBP }
    /* +0x2efba6 */ __asm { PUSH RSI }
    /* +0x2efba7 */ __asm { PUSH RBX }
    /* +0x2efba8 */ __asm { PUSH RDI }
    /* +0x2efba9 */ __asm { PUSH R12 }
    /* +0x2efbab */ __asm { PUSH R13 }
    /* +0x2efbad */ __asm { PUSH R15 }
    /* +0x2efbaf */ __asm { PUSH R14 }
    /* +0x2efbb1 */ __asm { SUB RSP,0xc8 }
    /* +0x2efbb8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2efbbf */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2efbc6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2efbcc */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2efbd6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2efbe0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2efbea */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2efbf3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2efbfb */ __asm { JZ 0x7fffa4a5fc8d }
    /* +0x2efc01 */ __asm { MOV R10W,0x11ff }
    /* +0x2efc06 */ __asm { LEA R9,[0x7fffa47bfeff] }
    /* +0x2efc0d */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2efc14 */ __asm { XOR R10D,ECX }
    /* +0x2efc17 */ __asm { MOV R8D,0x615a }
    /* +0x2efc1d */ __asm { SUB R8D,R10D }
    /* +0x2efc20 */ __asm { MOVSX RAX,R8W }
    /* +0x2efc24 */ __asm { ADD RAX,R9 }
    /* +0x2efc27 */ __asm { LEA R8,[0x7fffa47c9585] }
    /* +0x2efc2e */ __asm { LEA R9,[0x7fffa47c7f06] }
    /* +0x2efc35 */ __asm { MOV R10D,0x6a90a27f }
    /* +0x2efc3b */ __asm { MOV R11D,0x920a25bb }
    /* +0x2efc41 */ __asm { ADD R11D,0xe95da41 }
    /* +0x2efc48 */ __asm { ROR R11D,CL }
    /* +0x2efc4b */ __asm { MOVSXD R10,R10D }
    /* +0x2efc4e */ __asm { XOR R10,-0x6a906327 }
    /* +0x2efc55 */ __asm { MOVSXD RCX,R11D }
    /* +0x2efc58 */ __asm { MOVZX ECX,uint8_t ptr [R8 + RCX*0x1 + 0x9] }
    /* +0x2efc5e */ __asm { MOV RAX,qword ptr [RAX + RCX*0x8 + 0x13] }
    /* +0x2efc63 */ __asm { XOR RAX,qword ptr [R9 + R10*0x1 + 0x52] }
    /* +0x2efc68 */ __asm { MOVQ XMM2,RAX }
    /* +0x2efc6d */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2efc71 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2efc75 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2efc7a */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2efc7e */ __asm { TEST R8,R8 }
    /* +0x2efc81 */ __asm { JZ 0x7fffa4a5fcd5 }
    /* +0x2efc83 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2efc8a */ __asm { CALL R8 }
    /* +0x2efc8d */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2efc96 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2efca0 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2efcaa */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2efcb4 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2efcba */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2efcc1 */ __asm { ADD RSP,0xc8 }
    /* +0x2efcc8 */ __asm { POP R14 }
    /* +0x2efcca */ __asm { POP R15 }
    /* +0x2efccc */ __asm { POP R13 }
    /* +0x2efcce */ __asm { POP R12 }
    /* +0x2efcd0 */ __asm { POP RDI }
    /* +0x2efcd1 */ __asm { POP RBX }
    /* +0x2efcd2 */ __asm { POP RSI }
    /* +0x2efcd3 */ __asm { POP RBP }
    /* +0x2efcd4 */ __asm { RET }
    /* +0x2efcd5 */ __asm { MOV RAX,0x0 }
    /* +0x2efcdc */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2efce3 */ __asm { NOP }
    /* +0x2efce4 */ __asm { MOV R10W,0x78e9 }
    /* +0x2efce9 */ __asm { MOV R8D,0x7949 }
    /* +0x2efcef */ __asm { SUB R8D,R10D }
    /* +0x2efcf2 */ __asm { MOVZX R8D,R8W }
    /* +0x2efcf6 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2efcfa */ __asm { MOV R10W,0x4e2e }
    /* +0x2efcff */ __asm { ADD R10D,dword ptr [RBP + 0x1418] }
    /* +0x2efd06 */ __asm { ROL R10W,0xd }
    /* +0x2efd0b */ __asm { MOVZX R8D,R10W }
    /* +0x2efd0f */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2efd13 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2efd1d */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2efd21 */ __asm { NOP }
    /* +0x2efd22 */ __asm { NOP }
    /* +0x2efd23 */ __asm { NOP }
    /* +0x2efd24 */ __asm { NOP }
    /* +0x2efd25 */ __asm { NOP }
    /* +0x2efd26 */ __asm { PUSHFQ }
    /* +0x2efd27 */ __asm { POP R8 }
    /* +0x2efd29 */ __asm { MOV R11D,0x5ed54cad }
    /* +0x2efd2f */ __asm { ADD R11D,dword ptr [RBP + 0x1418] }
    /* +0x2efd36 */ __asm { ROL R11D,0x11 }
    /* +0x2efd3a */ __asm { AND R8D,0x100 }
    /* +0x2efd41 */ __asm { NOT R11D }
    /* +0x2efd44 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2efd48 */ __asm { MOV qword ptr [RBP + 0x1410],R8 }
    /* +0x2efd4f */ __asm { MOV qword ptr [RBP + 0x150],R11 }
    /* +0x2efd56 */ __asm { CMP R8,R11 }
    /* +0x2efd59 */ __asm { NOP }
    /* +0x2efd5a */ __asm { NOP }
    /* +0x2efd5b */ __asm { NOP }
    /* +0x2efd5c */ __asm { NOP }
    /* +0x2efd5d */ __asm { NOP }
    /* +0x2efd5e */ __asm { MOV R10D,0xbda2b66 }
    /* +0x2efd64 */ __asm { IMUL R10D,R10D,0x63fdf8ab }
    /* +0x2efd6b */ __asm { NOT R10D }
    /* +0x2efd6e */ __asm { MOV dword ptr [RBP + -0x8],R10D }
    /* +0x2efd72 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2efd76 */ __asm { MOV R8W,0xde7f }
    /* +0x2efd7b */ __asm { IMUL R8D,R8D,-0x6e6f }
    /* +0x2efd82 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2efd89 */ __asm { ROR R8W,CL }
    /* +0x2efd8d */ __asm { ADD R8D,0x2c4 }
    /* +0x2efd94 */ __asm { MOVSX R8D,R8W }
    /* +0x2efd98 */ __asm { CMP R10D,R8D }
    /* +0x2efd9b */ __asm { NOP }
    /* +0x2efd9c */ __asm { NOP }
    /* +0x2efd9d */ __asm { NOP }
    /* +0x2efd9e */ __asm { NOP }
    /* +0x2efd9f */ __asm { NOP }
    /* +0x2efda0 */ __asm { ADD RAX,0x10 }
    /* +0x2efda4 */ __asm { MOV R9,0x10000000014b }
    /* +0x2efdae */ __asm { MOV R10,0x7ffffffffffffffd }
    /* +0x2efdb8 */ __asm { MOV R11,-0x63192df4e5384914 }
    /* +0x2efdc2 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2efdc5 */ __asm { PUSHFQ }
    /* +0x2efdc6 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2efdce */ __asm { POPFQ }
    /* +0x2efdcf */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2efdd6 */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x2efdd9 */ __asm { CMP EDX,0xfcebf0f4 }
    /* +0x2efddf */ __asm { JBE 0x7fffa4a5ff50 }
    /* +0x2efde5 */ __asm { MOV DX,0x81d0 }
    /* +0x2efde9 */ __asm { IMUL ECX,EDX,-0x4c07 }
    /* +0x2efdef */ __asm { XOR ECX,dword ptr [RBP + 0x1418] }
    /* +0x2efdf5 */ __asm { MOVZX EDX,word ptr [RAX + 0x58] }
    /* +0x2efdf9 */ __asm { CMP DX,CX }
    /* +0x2efdfc */ __asm { JNC 0x7fffa4a5fe05 }
    /* +0x2efdfe */ __asm { XOR EDX,EDX }
    /* +0x2efe00 */ __asm { JMP 0x7fffa4a5ff2a }
    /* +0x2efe05 */ __asm { SHR EDX,0x1 }
    /* +0x2efe07 */ __asm { MOV RBX,qword ptr [RAX + 0x60] }
    /* +0x2efe0b */ __asm { CMP DX,0x1 }
    /* +0x2efe0f */ __asm { JZ 0x7fffa4a5fecb }
    /* +0x2efe15 */ __asm { MOV R15D,EDX }
    /* +0x2efe18 */ __asm { AND R15D,0xfffffffe }
    /* +0x2efe1c */ __asm { MOV R14D,0x2 }
    /* +0x2efe22 */ __asm { MOV RCX,-0x56ac57fd56f4aa33 }
    /* +0x2efe2c */ __asm { MOV R13D,0x89b65ba1 }
    /* +0x2efe32 */ __asm { MOV DI,0xea68 }
    /* +0x2efe36 */ __asm { MOV ESI,0xffffd0a6 }
    /* +0x2efe3b */ __asm { SUB ESI,EDI }
    /* +0x2efe3d */ __asm { IMUL ESI,dword ptr [RBP + 0x1400] }
    /* +0x2efe44 */ __asm { MOVZX EDI,word ptr [RBX + R14*0x2 + -0x4] }
    /* +0x2efe4a */ __asm { MOV R12D,EDI }
    /* +0x2efe4d */ __asm { OR R12D,0x20 }
    /* +0x2efe51 */ __asm { LEA R8D,[RDI + -0x41] }
    /* +0x2efe55 */ __asm { CMP R8W,0x1a }
    /* +0x2efe5a */ __asm { CMOVNC R12D,EDI }
    /* +0x2efe5e */ __asm { MOVZX EDI,R12B }
    /* +0x2efe62 */ __asm { XOR RDI,RCX }
    /* +0x2efe65 */ __asm { MOV R8D,0x7f6f783c }
    /* +0x2efe6b */ __asm { IMUL RDI,R9 }
    /* +0x2efe6f */ __asm { IMUL R12D,R13D,-0x38e11257 }
    /* +0x2efe76 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2efe7d */ __asm { ROR R12D,CL }
    /* +0x2efe80 */ __asm { ADD R8D,ECX }
    /* +0x2efe83 */ __asm { ADD R8D,0xa1ac1cd8 }
    /* +0x2efe8a */ __asm { CMP R8,R12 }
    /* +0x2efe8d */ __asm { MOV ECX,0x0 }
    /* +0x2efe92 */ __asm { ADC RCX,-0x1 }
    /* +0x2efe96 */ __asm { OR RCX,R10 }
    /* +0x2efe99 */ __asm { ADD RCX,R14 }
    /* +0x2efe9c */ __asm { MOVZX R8D,word ptr [RBX + RCX*0x2] }
    /* +0x2efea1 */ __asm { MOV ECX,R8D }
    /* +0x2efea4 */ __asm { OR ECX,0x20 }
    /* +0x2efea7 */ __asm { LEA R13D,[R8 + -0x41] }
    /* +0x2efeab */ __asm { CMP R13W,SI }
    /* +0x2efeaf */ __asm { CMOVNC ECX,R8D }
    /* +0x2efeb3 */ __asm { MOVZX ECX,CL }
    /* +0x2efeb6 */ __asm { XOR RCX,RDI }
    /* +0x2efeb9 */ __asm { IMUL RCX,R9 }
    /* +0x2efebd */ __asm { CMP R15,R14 }
    /* +0x2efec0 */ __asm { JZ 0x7fffa4a5fed8 }
    /* +0x2efec2 */ __asm { ADD R14,0x2 }
    /* +0x2efec6 */ __asm { JMP 0x7fffa4a5fe2c }
    /* +0x2efecb */ __asm { MOV RCX,-0x56ac57fd56f4aa33 }
    /* +0x2efed5 */ __asm { XOR R14D,R14D }
    /* +0x2efed8 */ __asm { TEST DL,0x1 }
    /* +0x2efedb */ __asm { JZ 0x7fffa4a5ff17 }
    /* +0x2efedd */ __asm { MOV DX,0x10b4 }
    /* +0x2efee1 */ __asm { MOVZX EBX,word ptr [RBX + R14*0x2] }
    /* +0x2efee6 */ __asm { LEA ESI,[RBX + -0x41] }
    /* +0x2efee9 */ __asm { MOV R15D,EBX }
    /* +0x2efeec */ __asm { OR R15D,0x20 }
    /* +0x2efef0 */ __asm { ADD EDX,0x416f }
    /* +0x2efef6 */ __asm { XOR EDX,0x1eeb }
    /* +0x2efefc */ __asm { ADD EDX,dword ptr [RBP + 0x1418] }
    /* +0x2eff02 */ __asm { CMP SI,DX }
    /* +0x2eff05 */ __asm { CMOVNC R15D,EBX }
    /* +0x2eff09 */ __asm { MOVZX EDX,R15B }
    /* +0x2eff0d */ __asm { XOR RDX,RCX }
    /* +0x2eff10 */ __asm { IMUL RDX,R9 }
    /* +0x2eff14 */ __asm { MOV RCX,RDX }
    /* +0x2eff17 */ __asm { MOV RDX,R11 }
    /* +0x2eff1a */ __asm { ADD RDX,qword ptr [RBP + 0x1418] }
    /* +0x2eff21 */ __asm { ROL RDX,0x1 }
    /* +0x2eff24 */ __asm { CMP RCX,RDX }
    /* +0x2eff27 */ __asm { SETZ DL }
    /* +0x2eff2a */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2eff31 */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x2eff34 */ __asm { CMP ECX,0x26bd4fb8 }
    /* +0x2eff3a */ __asm { JNC 0x7fffa4a5ff66 }
    /* +0x2eff3c */ __asm { TEST DL,DL }
    /* +0x2eff3e */ __asm { JNZ 0x7fffa4a5ff74 }
    /* +0x2eff40 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2eff47 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2eff4b */ __asm { JMP 0x7fffa4a5fdc2 }
    /* +0x2eff50 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x2eff57 */ __asm { MOV RDX,0x0 }
    /* +0x2eff5e */ __asm { RET }
    /* +0x2eff66 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2eff6b */ __asm { NOP }
    /* +0x2eff6c */ __asm { NOP }
    /* +0x2eff6d */ __asm { NOP }
    /* +0x2eff6e */ __asm { NOP }
    /* +0x2eff6f */ __asm { NOP }
    /* +0x2eff70 */ __asm { NOP }
    /* +0x2eff71 */ __asm { NOP }
    /* +0x2eff72 */ __asm { NOP }
    /* +0x2eff73 */ __asm { NOP }
    /* +0x2eff74 */ __asm { NOP }
    /* +0x2eff75 */ __asm { NOP }
    /* +0x2eff76 */ __asm { NOP }
    /* +0x2eff77 */ __asm { NOP }
    /* +0x2eff78 */ __asm { NOP }
    /* +0x2eff79 */ __asm { NOP }
    /* +0x2eff7a */ __asm { NOP }
    /* +0x2eff7b */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a61950  |  RVA: 0x2f1950  |  Size: 245 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a61950(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    lVar1 = (int64_t)(int)~((uint32_t)*(uint64_t *)(param_2 + 0x1498) ^ 0xa12a4e52);
    (*(code *)(lVar1 + 0x7fffa5697931))
              (lVar1,param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a61a50  |  RVA: 0x2f1a50  |  Size: 143 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a61a50(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar3 = (int)*(uint64_t *)(param_2 + 0x1518) +
          ((uint32_t)*(uint64_t *)(param_2 + 0x188) ^ 0x208f1d2e) + 0xa8948d34;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
  (*(code *)((int64_t)(int)(uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) + 0x7fffa5632f50))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a61ae0  |  RVA: 0x2f1ae0  |  Size: 122 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a61ae0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
  (*(code *)(&UNK_7fffa562f34a + (int)(0x825bfffdU >> bVar2 | -0x7da40003 << 0x20 - bVar2)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a61b60  |  RVA: 0x2f1b60  |  Size: 235 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a61b60(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    FUN_7fffa5687c30(FUN_7fffa5687c30,param_2,
                     *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a61c50  |  RVA: 0x2f1c50  |  Size: 505 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a61c50(void) {
    /* +0x2f1c50 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2f1c55 */ __asm { PUSH RBP }
    /* +0x2f1c56 */ __asm { PUSH RSI }
    /* +0x2f1c57 */ __asm { PUSH RBX }
    /* +0x2f1c58 */ __asm { PUSH RDI }
    /* +0x2f1c59 */ __asm { PUSH R12 }
    /* +0x2f1c5b */ __asm { PUSH R13 }
    /* +0x2f1c5d */ __asm { PUSH R15 }
    /* +0x2f1c5f */ __asm { PUSH R14 }
    /* +0x2f1c61 */ __asm { SUB RSP,0xc8 }
    /* +0x2f1c68 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2f1c6f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2f1c76 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2f1c7c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2f1c86 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2f1c90 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2f1c9a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2f1ca3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2f1cab */ __asm { JZ 0x7fffa4a61d8d }
    /* +0x2f1cb1 */ __asm { LEA R9,[0x7fffa47bfb93] }
    /* +0x2f1cb8 */ __asm { MOV R11D,0xca7facd8 }
    /* +0x2f1cbe */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x2f1cc6 */ __asm { LEA RAX,[0x7fffa47bf9a3] }
    /* +0x2f1ccd */ __asm { LEA R8,[0x7fffa47bbf56] }
    /* +0x2f1cd4 */ __asm { MOV DX,0xde0c }
    /* +0x2f1cd8 */ __asm { MOV RBX,qword ptr [RBP + 0x1418] }
    /* +0x2f1cdf */ __asm { XOR EDX,EBX }
    /* +0x2f1ce1 */ __asm { ADD EDX,0x5540 }
    /* +0x2f1ce7 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2f1cee */ __asm { ROL DX,CL }
    /* +0x2f1cf1 */ __asm { MOV R10D,0x6a010ca3 }
    /* +0x2f1cf7 */ __asm { ROL R11D,0x10 }
    /* +0x2f1cfb */ __asm { MOV R15,qword ptr [RBP + 0x1498] }
    /* +0x2f1d02 */ __asm { ADD R11D,R15D }
    /* +0x2f1d05 */ __asm { MOV ESI,R15D }
    /* +0x2f1d08 */ __asm { XOR ESI,EBX }
    /* +0x2f1d0a */ __asm { XOR ESI,R10D }
    /* +0x2f1d0d */ __asm { MOV R10D,0x73a57fa8 }
    /* +0x2f1d13 */ __asm { SUB R10D,ESI }
    /* +0x2f1d16 */ __asm { CMP R11,R10 }
    /* +0x2f1d19 */ __asm { SETL R10B }
    /* +0x2f1d1d */ __asm { ADD EDX,0xffffe9c6 }
    /* +0x2f1d23 */ __asm { MOVSX R11,DX }
    /* +0x2f1d27 */ __asm { ADD R11,R9 }
    /* +0x2f1d2a */ __asm { MOV DX,0xd683 }
    /* +0x2f1d2e */ __asm { ADD EDX,EBX }
    /* +0x2f1d30 */ __asm { ROR DX,CL }
    /* +0x2f1d33 */ __asm { ADD EDX,0x755d }
    /* +0x2f1d39 */ __asm { MOV R9W,0xe61d }
    /* +0x2f1d3e */ __asm { ADD R9D,ECX }
    /* +0x2f1d41 */ __asm { NOT R9D }
    /* +0x2f1d44 */ __asm { MOV ECX,EBX }
    /* +0x2f1d46 */ __asm { ROL R9W,CL }
    /* +0x2f1d4a */ __asm { MOVSX RCX,DX }
    /* +0x2f1d4e */ __asm { MOVSX R9,R9W }
    /* +0x2f1d52 */ __asm { MOVZX R8D,uint8_t ptr [R8 + R9*0x1 + 0x9] }
    /* +0x2f1d58 */ __asm { MOV RAX,qword ptr [RAX + RCX*0x1 + 0x52] }
    /* +0x2f1d5d */ __asm { XOR RAX,qword ptr [R11 + R8*0x8 + 0x13] }
    /* +0x2f1d62 */ __asm { MOVQ XMM2,RAX }
    /* +0x2f1d67 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2f1d6b */ __asm { PXOR XMM4,XMM2 }
    /* +0x2f1d6f */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2f1d74 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2f1d78 */ __asm { TEST R8,R8 }
    /* +0x2f1d7b */ __asm { SETNZ DL }
    /* +0x2f1d7e */ __asm { CMP R10B,DL }
    /* +0x2f1d81 */ __asm { JNZ 0x7fffa4a61dd5 }
    /* +0x2f1d83 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2f1d8a */ __asm { CALL R8 }
    /* +0x2f1d8d */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2f1d96 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2f1da0 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2f1daa */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2f1db4 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2f1dba */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2f1dc1 */ __asm { ADD RSP,0xc8 }
    /* +0x2f1dc8 */ __asm { POP R14 }
    /* +0x2f1dca */ __asm { POP R15 }
    /* +0x2f1dcc */ __asm { POP R13 }
    /* +0x2f1dce */ __asm { POP R12 }
    /* +0x2f1dd0 */ __asm { POP RDI }
    /* +0x2f1dd1 */ __asm { POP RBX }
    /* +0x2f1dd2 */ __asm { POP RSI }
    /* +0x2f1dd3 */ __asm { POP RBP }
    /* +0x2f1dd4 */ __asm { RET }
    /* +0x2f1dd5 */ __asm { MOV R10W,0x2be7 }
    /* +0x2f1dda */ __asm { MOV R11,qword ptr [RBP + 0x11e0] }
    /* +0x2f1de1 */ __asm { ADD R10D,R11D }
    /* +0x2f1de4 */ __asm { IMUL R10D,R10D,0x6163 }
    /* +0x2f1deb */ __asm { ROR R10W,0x1 }
    /* +0x2f1def */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2f1df6 */ __asm { ADD R10D,ECX }
    /* +0x2f1df9 */ __asm { MOVZX R8D,R10W }
    /* +0x2f1dfd */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2f1e01 */ __asm { OR R11D,0x1 }
    /* +0x2f1e05 */ __asm { MOV R10W,0xd921 }
    /* +0x2f1e0a */ __asm { MOV qword ptr [RBP + 0x1b8],R11 }
    /* +0x2f1e11 */ __asm { IMUL R10D,R11D }
    /* +0x2f1e15 */ __asm { ROL R10W,CL }
    /* +0x2f1e19 */ __asm { MOV R8D,0xffffa3e7 }
    /* +0x2f1e1f */ __asm { SUB R8D,R10D }
    /* +0x2f1e22 */ __asm { MOVZX R8D,R8W }
    /* +0x2f1e26 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2f1e2a */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2f1e34 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2f1e38 */ __asm { NOP }
    /* +0x2f1e39 */ __asm { NOP }
    /* +0x2f1e3a */ __asm { NOP }
    /* +0x2f1e3b */ __asm { NOP }
    /* +0x2f1e3c */ __asm { NOP }
    /* +0x2f1e3d */ __asm { NOP }
    /* +0x2f1e3e */ __asm { NOP }
    /* +0x2f1e3f */ __asm { NOP }
    /* +0x2f1e40 */ __asm { NOP }
    /* +0x2f1e41 */ __asm { NOP }
    /* +0x2f1e42 */ __asm { NOP }
    /* +0x2f1e43 */ __asm { NOP }
    /* +0x2f1e44 */ __asm { NOP }
    /* +0x2f1e45 */ __asm { NOP }
    /* +0x2f1e46 */ __asm { NOP }
    /* +0x2f1e47 */ __asm { NOP }
    /* +0x2f1e48 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a63e20  |  RVA: 0x2f3e20  |  Size: 251 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a63e20(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1260) & 0xf;
    (*(code *)((int64_t)
               (short)((-0x4126 << bVar1 | 0xbedaU >> 0x10 - bVar1) +
                      (short)*(uint64_t *)(param_2 + 0x1498)) + 0x7fffa568d209))
              (*(uint64_t *)(param_2 + 0x1498),*(uint64_t *)(param_2 + 0x1260),
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a63f20  |  RVA: 0x2f3f20  |  Size: 238 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a63f20(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
    pcVar2 = (code *)((int64_t)(short)((0x9377U >> bVar1 | -0x6c89 << 0x10 - bVar1) * -0x5c71) +
                     0x7fffa568edbd);
    (*pcVar2)(*(uint64_t *)(param_2 + 0x1498),pcVar2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a64010  |  RVA: 0x2f4010  |  Size: 482 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a64010(void) {
    /* +0x2f4010 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2f4015 */ __asm { PUSH RBP }
    /* +0x2f4016 */ __asm { PUSH RSI }
    /* +0x2f4017 */ __asm { PUSH RBX }
    /* +0x2f4018 */ __asm { PUSH RDI }
    /* +0x2f4019 */ __asm { PUSH R12 }
    /* +0x2f401b */ __asm { PUSH R13 }
    /* +0x2f401d */ __asm { PUSH R15 }
    /* +0x2f401f */ __asm { PUSH R14 }
    /* +0x2f4021 */ __asm { SUB RSP,0xc8 }
    /* +0x2f4028 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2f402f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2f4036 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2f403c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2f4046 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2f4050 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2f405a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2f4063 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2f406b */ __asm { JZ 0x7fffa4a64110 }
    /* +0x2f4071 */ __asm { LEA RAX,[0x7fffa47c171d] }
    /* +0x2f4078 */ __asm { MOV R8W,0x375e }
    /* +0x2f407d */ __asm { MOV R11W,0x4010 }
    /* +0x2f4082 */ __asm { MOV RDX,qword ptr [RBP + 0x1498] }
    /* +0x2f4089 */ __asm { XOR R8D,EDX }
    /* +0x2f408c */ __asm { MOV R10D,0x741b46dd }
    /* +0x2f4092 */ __asm { XOR R10D,0xc6c332fd }
    /* +0x2f4099 */ __asm { SUB R10D,EDX }
    /* +0x2f409c */ __asm { IMUL R10D,dword ptr [RBP + 0x104] }
    /* +0x2f40a4 */ __asm { MOVSXD R10,R10D }
    /* +0x2f40a7 */ __asm { SUB R11D,dword ptr [RBP + 0x1418] }
    /* +0x2f40ae */ __asm { ROR R11W,0x1 }
    /* +0x2f40b2 */ __asm { LEA RCX,[0x7fffa47c054c] }
    /* +0x2f40b9 */ __asm { ADD R11D,EDX }
    /* +0x2f40bc */ __asm { MOVSX R9,R11W }
    /* +0x2f40c0 */ __asm { LEA R11,[0x7fffa47c609f] }
    /* +0x2f40c7 */ __asm { ROL R8W,0xc }
    /* +0x2f40cc */ __asm { IMUL R8D,dword ptr [RBP + 0x1400] }
    /* +0x2f40d4 */ __asm { MOVSX R8,R8W }
    /* +0x2f40d8 */ __asm { ADD R8,RAX }
    /* +0x2f40db */ __asm { MOVZX R10D,uint8_t ptr [R11 + R10*0x1 + 0x9] }
    /* +0x2f40e1 */ __asm { MOV RAX,qword ptr [RCX + R9*0x1 + 0x52] }
    /* +0x2f40e6 */ __asm { XOR RAX,qword ptr [R8 + R10*0x8 + 0x13] }
    /* +0x2f40eb */ __asm { MOVQ XMM2,RAX }
    /* +0x2f40f0 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2f40f4 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2f40f8 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2f40fd */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2f4101 */ __asm { TEST R8,R8 }
    /* +0x2f4104 */ __asm { JZ 0x7fffa4a64152 }
    /* +0x2f4106 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2f410d */ __asm { CALL R8 }
    /* +0x2f4110 */ __asm { MOVAPS XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2f4118 */ __asm { MOVAPS XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2f4121 */ __asm { MOVAPS XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2f412a */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2f4133 */ __asm { MOVAPS XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2f4138 */ __asm { MOVAPS XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2f413e */ __asm { ADD RSP,0xc8 }
    /* +0x2f4145 */ __asm { POP R14 }
    /* +0x2f4147 */ __asm { POP R15 }
    /* +0x2f4149 */ __asm { POP R13 }
    /* +0x2f414b */ __asm { POP R12 }
    /* +0x2f414d */ __asm { POP RDI }
    /* +0x2f414e */ __asm { POP RBX }
    /* +0x2f414f */ __asm { POP RSI }
    /* +0x2f4150 */ __asm { POP RBP }
    /* +0x2f4151 */ __asm { RET }
    /* +0x2f4152 */ __asm { MOV RAX,0x0 }
    /* +0x2f4159 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2f4160 */ __asm { NOP }
    /* +0x2f4161 */ __asm { MOV R10W,0xe67e }
    /* +0x2f4166 */ __asm { MOV RCX,qword ptr [RBP + 0x1498] }
    /* +0x2f416d */ __asm { XOR R10D,ECX }
    /* +0x2f4170 */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x2f4177 */ __asm { ADD R10D,R11D }
    /* +0x2f417a */ __asm { IMUL R10D,R10D,0x1c6f }
    /* +0x2f4181 */ __asm { NOT R10D }
    /* +0x2f4184 */ __asm { MOVZX R8D,R10W }
    /* +0x2f4188 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2f418c */ __asm { MOV R10W,0xc367 }
    /* +0x2f4191 */ __asm { SUB R10D,R11D }
    /* +0x2f4194 */ __asm { XOR R10D,0xffff9e3a }
    /* +0x2f419b */ __asm { ADD R10D,ECX }
    /* +0x2f419e */ __asm { MOVZX R8D,R10W }
    /* +0x2f41a2 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2f41a6 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2f41b0 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2f41b4 */ __asm { NOP }
    /* +0x2f41b5 */ __asm { NOP }
    /* +0x2f41b6 */ __asm { NOP }
    /* +0x2f41b7 */ __asm { NOP }
    /* +0x2f41b8 */ __asm { NOP }
    /* +0x2f41b9 */ __asm { PUSHFQ }
    /* +0x2f41ba */ __asm { POP R8 }
    /* +0x2f41bc */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2f41c0 */ __asm { MOV qword ptr [RBP + 0x1298],R8 }
    /* +0x2f41c7 */ __asm { TEST R8D,0x100 }
    /* +0x2f41ce */ __asm { NOP }
    /* +0x2f41cf */ __asm { NOP }
    /* +0x2f41d0 */ __asm { NOP }
    /* +0x2f41d1 */ __asm { NOP }
    /* +0x2f41d2 */ __asm { NOP }
    /* +0x2f41d3 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2f41da */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2f41de */ __asm { TEST R10D,R10D }
    /* +0x2f41e1 */ __asm { NOP }
    /* +0x2f41e2 */ __asm { NOP }
    /* +0x2f41e3 */ __asm { NOP }
    /* +0x2f41e4 */ __asm { NOP }
    /* +0x2f41e5 */ __asm { NOP }
    /* +0x2f41e6 */ __asm { NOP }
    /* +0x2f41e7 */ __asm { NOP }
    /* +0x2f41e8 */ __asm { NOP }
    /* +0x2f41e9 */ __asm { NOP }
    /* +0x2f41ea */ __asm { NOP }
    /* +0x2f41eb */ __asm { NOP }
    /* +0x2f41ec */ __asm { NOP }
    /* +0x2f41ed */ __asm { NOP }
    /* +0x2f41ee */ __asm { NOP }
    /* +0x2f41ef */ __asm { NOP }
    /* +0x2f41f0 */ __asm { NOP }
    /* +0x2f41f1 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a65e00  |  RVA: 0x2f5e00  |  Size: 222 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a65e00(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    (*(code *)(&UNK_7fffa569125c + (*(int *)(param_2 + 0x1498) + 0x5ed4b682)))
              (&UNK_7fffa569125c + (*(int *)(param_2 + 0x1498) + 0x5ed4b682),param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a65ee0  |  RVA: 0x2f5ee0  |  Size: 248 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a65ee0(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    FUN_7fffa5687c30(FUN_7fffa5687c30,&IMAGE_DOS_HEADER_7fffa4770000,
                     *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250),
                     *(uint32_t *)(param_2 + 0x1498) ^ 0x4a2764a8);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a65fe0  |  RVA: 0x2f5fe0  |  Size: 128 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a65fe0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0xf;
  (*(code *)((int64_t)(short)(0x617e << bVar2 | 0x617eU >> 0x10 - bVar2) + 0x7fffa562cde7))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a66060  |  RVA: 0x2f6060  |  Size: 1310 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a66060(void) {
    /* +0x2f6060 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2f6065 */ __asm { PUSH RBP }
    /* +0x2f6066 */ __asm { PUSH RSI }
    /* +0x2f6067 */ __asm { PUSH RBX }
    /* +0x2f6068 */ __asm { PUSH RDI }
    /* +0x2f6069 */ __asm { PUSH R12 }
    /* +0x2f606b */ __asm { PUSH R13 }
    /* +0x2f606d */ __asm { PUSH R15 }
    /* +0x2f606f */ __asm { PUSH R14 }
    /* +0x2f6071 */ __asm { SUB RSP,0xc8 }
    /* +0x2f6078 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2f607f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2f6086 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2f608c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2f6096 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2f60a0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2f60aa */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2f60b3 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2f60bb */ __asm { JZ 0x7fffa4a6616e }
    /* +0x2f60c1 */ __asm { LEA R8,[0x7fffa47bd08f] }
    /* +0x2f60c8 */ __asm { LEA RAX,[0x7fffa47bf098] }
    /* +0x2f60cf */ __asm { MOV R10W,0x569e }
    /* +0x2f60d4 */ __asm { MOV R11W,0x831e }
    /* +0x2f60d9 */ __asm { XOR R11D,0x6624 }
    /* +0x2f60e0 */ __asm { MOV RBX,qword ptr [RBP + 0x1418] }
    /* +0x2f60e7 */ __asm { MOV ECX,EBX }
    /* +0x2f60e9 */ __asm { ROL R11W,CL }
    /* +0x2f60ed */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2f60f4 */ __asm { ADD R11D,ECX }
    /* +0x2f60f7 */ __asm { ROR R11W,0x1 }
    /* +0x2f60fb */ __asm { LEA R9,[0x7fffa47c83c1] }
    /* +0x2f6102 */ __asm { MOV EDX,0x2163ae66 }
    /* +0x2f6107 */ __asm { IMUL EDX,EDX,-0x29e1644d }
    /* +0x2f610d */ __asm { XOR EDX,EBX }
    /* +0x2f610f */ __asm { ROL EDX,CL }
    /* +0x2f6111 */ __asm { MOVSX R11,R11W }
    /* +0x2f6115 */ __asm { ADD R11,R8 }
    /* +0x2f6118 */ __asm { NOT EDX }
    /* +0x2f611a */ __asm { MOVSXD R8,EDX }
    /* +0x2f611d */ __asm { LEA EDX,[RCX + R10*0x1] }
    /* +0x2f6121 */ __asm { ADD EDX,0xffff9601 }
    /* +0x2f6127 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2f612e */ __asm { ROL DX,CL }
    /* +0x2f6131 */ __asm { NOT EDX }
    /* +0x2f6133 */ __asm { ADD EDX,EBX }
    /* +0x2f6135 */ __asm { MOVSX R10,DX }
    /* +0x2f6139 */ __asm { MOVZX R10D,uint8_t ptr [RAX + R10*0x1 + 0x9] }
    /* +0x2f613f */ __asm { MOV RAX,qword ptr [R9 + R8*0x1 + 0x52] }
    /* +0x2f6144 */ __asm { XOR RAX,qword ptr [R11 + R10*0x8 + 0x13] }
    /* +0x2f6149 */ __asm { MOVQ XMM2,RAX }
    /* +0x2f614e */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2f6152 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2f6156 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2f615b */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2f615f */ __asm { TEST R8,R8 }
    /* +0x2f6162 */ __asm { JZ 0x7fffa4a661b0 }
    /* +0x2f6164 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2f616b */ __asm { CALL R8 }
    /* +0x2f616e */ __asm { MOVAPS XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2f6176 */ __asm { MOVAPS XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2f617f */ __asm { MOVAPS XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2f6188 */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2f6191 */ __asm { MOVAPS XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2f6196 */ __asm { MOVAPS XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2f619c */ __asm { ADD RSP,0xc8 }
    /* +0x2f61a3 */ __asm { POP R14 }
    /* +0x2f61a5 */ __asm { POP R15 }
    /* +0x2f61a7 */ __asm { POP R13 }
    /* +0x2f61a9 */ __asm { POP R12 }
    /* +0x2f61ab */ __asm { POP RDI }
    /* +0x2f61ac */ __asm { POP RBX }
    /* +0x2f61ad */ __asm { POP RSI }
    /* +0x2f61ae */ __asm { POP RBP }
    /* +0x2f61af */ __asm { RET }
    /* +0x2f61b0 */ __asm { MOV R10W,0x5fe2 }
    /* +0x2f61b5 */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2f61bc */ __asm { MOV EDX,EAX }
    /* +0x2f61be */ __asm { OR EDX,0x1 }
    /* +0x2f61c1 */ __asm { IMUL R10D,EDX }
    /* +0x2f61c5 */ __asm { XOR R10D,0xd8cc }
    /* +0x2f61cc */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2f61d3 */ __asm { ROR R10W,CL }
    /* +0x2f61d7 */ __asm { MOV R11,qword ptr [RBP + 0x11e0] }
    /* +0x2f61de */ __asm { ADD R10D,R11D }
    /* +0x2f61e1 */ __asm { MOVZX R8D,R10W }
    /* +0x2f61e5 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2f61e9 */ __asm { MOV R10W,0x3c71 }
    /* +0x2f61ee */ __asm { ADD R10D,0xffffe4eb }
    /* +0x2f61f5 */ __asm { MOV qword ptr [RBP + 0x1220],RDX }
    /* +0x2f61fc */ __asm { IMUL R10D,EDX }
    /* +0x2f6200 */ __asm { NOT R10D }
    /* +0x2f6203 */ __asm { ADD R10D,R11D }
    /* +0x2f6206 */ __asm { MOVZX R8D,R10W }
    /* +0x2f620a */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2f620e */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2f6218 */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2f621c */ __asm { NOP }
    /* +0x2f621d */ __asm { NOP }
    /* +0x2f621e */ __asm { NOP }
    /* +0x2f621f */ __asm { NOP }
    /* +0x2f6220 */ __asm { NOP }
    /* +0x2f6221 */ __asm { PUSHFQ }
    /* +0x2f6222 */ __asm { POP R13 }
    /* +0x2f6224 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2f622b */ __asm { MOV R9D,ECX }
    /* +0x2f622e */ __asm { MOV RBX,qword ptr [RBP + 0x1498] }
    /* +0x2f6235 */ __asm { SUB R9D,EBX }
    /* +0x2f6238 */ __asm { LEA R8,[R13 + 0x100] }
    /* +0x2f623f */ __asm { MOV R10D,0x7311f8a2 }
    /* +0x2f6245 */ __asm { MOV R11D,0x34bc7781 }
    /* +0x2f624b */ __asm { IMUL R11D,R11D,0x7b5ba543 }
    /* +0x2f6252 */ __asm { ADD R11D,R9D }
    /* +0x2f6255 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2f6259 */ __asm { MOV R9W,0xf129 }
    /* +0x2f625e */ __asm { MOV RCX,qword ptr [RBP + 0x1400] }
    /* +0x2f6265 */ __asm { MOV EDX,ECX }
    /* +0x2f6267 */ __asm { IMUL EDX,R9D }
    /* +0x2f626b */ __asm { ROL DX,0x1 }
    /* +0x2f626e */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2f6275 */ __asm { XOR R11D,ECX }
    /* +0x2f6278 */ __asm { IMUL R9D,EDX,0x626b }
    /* +0x2f627f */ __asm { XOR R9D,ECX }
    /* +0x2f6282 */ __asm { SUB R9D,dword ptr [RBP + 0x11e0] }
    /* +0x2f6289 */ __asm { MOVZX EDX,R9W }
    /* +0x2f628d */ __asm { IMUL R10D,dword ptr [RBP + 0x104] }
    /* +0x2f6295 */ __asm { ADD R10D,EBX }
    /* +0x2f6298 */ __asm { ROR R10D,CL }
    /* +0x2f629b */ __asm { IMUL ECX,R10D,0x73b1da11 }
    /* +0x2f62a2 */ __asm { AND R13D,0x100 }
    /* +0x2f62a9 */ __asm { CMP RCX,R11 }
    /* +0x2f62ac */ __asm { CMOVA R13,R8 }
    /* +0x2f62b0 */ __asm { MOV qword ptr [RBP + 0x1c0],R13 }
    /* +0x2f62b7 */ __asm { MOV qword ptr [RBP + 0x1298],RDX }
    /* +0x2f62be */ __asm { CMP R13,RDX }
    /* +0x2f62c1 */ __asm { NOP }
    /* +0x2f62c2 */ __asm { NOP }
    /* +0x2f62c3 */ __asm { NOP }
    /* +0x2f62c4 */ __asm { NOP }
    /* +0x2f62c5 */ __asm { NOP }
    /* +0x2f62c6 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2f62cd */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2f62d1 */ __asm { TEST R10D,R10D }
    /* +0x2f62d4 */ __asm { NOP }
    /* +0x2f62d5 */ __asm { NOP }
    /* +0x2f62d6 */ __asm { NOP }
    /* +0x2f62d7 */ __asm { NOP }
    /* +0x2f62d8 */ __asm { NOP }
    /* +0x2f62d9 */ __asm { ADD RAX,0x10 }
    /* +0x2f62dd */ __asm { MOV R9,0x6ee97ffff169042a }
    /* +0x2f62e7 */ __asm { MOV R10,0x10000000014b }
    /* +0x2f62f1 */ __asm { MOV R11,0x39cda41577e4d47d }
    /* +0x2f62fb */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2f6302 */ __asm { OR RCX,0x1 }
    /* +0x2f6306 */ __asm { MOV qword ptr [RBP + 0x1488],RCX }
    /* +0x2f630d */ __asm { MOV R8,qword ptr [RBP + 0x108] }
    /* +0x2f6314 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2f6317 */ __asm { PUSHFQ }
    /* +0x2f6318 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2f6320 */ __asm { POPFQ }
    /* +0x2f6321 */ __asm { MOV ECX,0x7c425322 }
    /* +0x2f6326 */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2f632d */ __asm { XOR ECX,EDX }
    /* +0x2f632f */ __asm { IMUL ESI,ECX,0x5e785849 }
    /* +0x2f6335 */ __asm { MOV RCX,qword ptr [RBP + 0x1498] }
    /* +0x2f633c */ __asm { ROL ESI,CL }
    /* +0x2f633e */ __asm { ADD ESI,0x2e035a8f }
    /* +0x2f6344 */ __asm { XOR ESI,dword ptr [RBP + 0x108] }
    /* +0x2f634a */ __asm { MOV dword ptr [RBP + -0x8],ESI }
    /* +0x2f634d */ __asm { MOV R15D,dword ptr [RBP + -0x8] }
    /* +0x2f6351 */ __asm { MOV R14D,0xeb7a6e49 }
    /* +0x2f6357 */ __asm { XOR R14D,EDX }
    /* +0x2f635a */ __asm { NEG R14D }
    /* +0x2f635d */ __asm { LEA ESI,[RCX + R14*0x1] }
    /* +0x2f6361 */ __asm { ADD ESI,0x473c73c2 }
    /* +0x2f6367 */ __asm { CMP R15D,ESI }
    /* +0x2f636a */ __asm { JBE 0x7fffa4a66567 }
    /* +0x2f6370 */ __asm { MOVZX EDI,word ptr [RAX + 0x58] }
    /* +0x2f6374 */ __asm { CMP EDI,0x2 }
    /* +0x2f6377 */ __asm { JNC 0x7fffa4a66380 }
    /* +0x2f6379 */ __asm { XOR ECX,ECX }
    /* +0x2f637b */ __asm { JMP 0x7fffa4a6652c }
    /* +0x2f6380 */ __asm { SHR EDI,0x1 }
    /* +0x2f6382 */ __asm { MOV R13,qword ptr [RAX + 0x60] }
    /* +0x2f6386 */ __asm { CMP DI,0x1 }
    /* +0x2f638a */ __asm { JZ 0x7fffa4a66472 }
    /* +0x2f6390 */ __asm { MOV R12D,EDI }
    /* +0x2f6393 */ __asm { AND R12D,0xfffffffe }
    /* +0x2f6397 */ __asm { MOV R14D,0x2 }
    /* +0x2f639d */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x2f63a7 */ __asm { MOV ESI,0x3c894b62 }
    /* +0x2f63ac */ __asm { XOR ESI,dword ptr [RBP + 0x108] }
    /* +0x2f63b2 */ __asm { SUB ESI,dword ptr [RBP + 0x1498] }
    /* +0x2f63b8 */ __asm { ROL ESI,0x7 }
    /* +0x2f63bb */ __asm { NOT ESI }
    /* +0x2f63bd */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2f63c4 */ __asm { ROL ESI,CL }
    /* +0x2f63c6 */ __asm { ROL RSI,0x2c }
    /* +0x2f63ca */ __asm { ADD RSI,-0xe96ff2e }
    /* +0x2f63d1 */ __asm { CMP RSI,R9 }
    /* +0x2f63d4 */ __asm { JZ 0x7fffa4a66402 }
    /* +0x2f63d6 */ __asm { MOVZX ESI,word ptr [R13 + R14*0x2 + -0x4] }
    /* +0x2f63dc */ __asm { LEA EBX,[RSI + -0x41] }
    /* +0x2f63df */ __asm { MOV ECX,ESI }
    /* +0x2f63e1 */ __asm { OR ECX,0x20 }
    /* +0x2f63e4 */ __asm { CMP BX,0x1a }
    /* +0x2f63e8 */ __asm { CMOVNC ECX,ESI }
    /* +0x2f63eb */ __asm { MOVZX EBX,word ptr [R13 + R14*0x2 + -0x2] }
    /* +0x2f63f1 */ __asm { LEA EDX,[RBX + -0x41] }
    /* +0x2f63f4 */ __asm { MOV ESI,EBX }
    /* +0x2f63f6 */ __asm { OR ESI,0x20 }
    /* +0x2f63f9 */ __asm { CMP DX,0x1a }
    /* +0x2f63fd */ __asm { CMOVNC ESI,EBX }
    /* +0x2f6400 */ __asm { JMP 0x7fffa4a6644f }
    /* +0x2f6402 */ __asm { MOV DX,0x96d5 }
    /* +0x2f6406 */ __asm { ADD EDX,0xe5e }
    /* +0x2f640c */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2f6413 */ __asm { ROR DX,CL }
    /* +0x2f6416 */ __asm { IMUL EDX,dword ptr [RBP + 0x1400] }
    /* +0x2f641d */ __asm { MOVZX ECX,word ptr [R13 + R14*0x2 + -0x4] }
    /* +0x2f6423 */ __asm { LEA ESI,[RCX + -0x41] }
    /* +0x2f6426 */ __asm { NOT EDX }
    /* +0x2f6428 */ __asm { ADD EDX,dword ptr [RBP + 0x108] }
    /* +0x2f642e */ __asm { ROL DX,0xe }
    /* +0x2f6432 */ __asm { CMP SI,DX }
    /* +0x2f6435 */ __asm { JNC 0x7fffa4a6643a }
    /* +0x2f6437 */ __asm { OR ECX,0x20 }
    /* +0x2f643a */ __asm { MOVZX EDX,word ptr [R13 + R14*0x2 + -0x2] }
    /* +0x2f6440 */ __asm { MOV ESI,EDX }
    /* +0x2f6442 */ __asm { OR ESI,0x20 }
    /* +0x2f6445 */ __asm { LEA EBX,[RDX + -0x41] }
    /* +0x2f6448 */ __asm { CMP BX,0x1a }
    /* +0x2f644c */ __asm { CMOVNC ESI,EDX }
    /* +0x2f644f */ __asm { MOVZX ECX,CL }
    /* +0x2f6452 */ __asm { XOR RCX,R15 }
    /* +0x2f6455 */ __asm { IMUL RCX,R10 }
    /* +0x2f6459 */ __asm { MOVZX R15D,SIL }
    /* +0x2f645d */ __asm { XOR R15,RCX }
    /* +0x2f6460 */ __asm { IMUL R15,R10 }
    /* +0x2f6464 */ __asm { CMP R12,R14 }
    /* +0x2f6467 */ __asm { JZ 0x7fffa4a6647f }
    /* +0x2f6469 */ __asm { ADD R14,0x2 }
    /* +0x2f646d */ __asm { JMP 0x7fffa4a663a7 }
    /* +0x2f6472 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x2f647c */ __asm { XOR R14D,R14D }
    /* +0x2f647f */ __asm { TEST DIL,0x1 }
    /* +0x2f6483 */ __asm { JZ 0x7fffa4a66526 }
    /* +0x2f6489 */ __asm { MOV RBX,qword ptr [RBP + 0x1498] }
    /* +0x2f6490 */ __asm { MOV ECX,EBX }
    /* +0x2f6492 */ __asm { SUB ECX,R8D }
    /* +0x2f6495 */ __asm { MOV RDI,0x5f037a110b34cb0a }
    /* +0x2f649f */ __asm { MOV RDX,-0xc0000091 }
    /* +0x2f64a9 */ __asm { ADD RDI,RDX }
    /* +0x2f64ac */ __asm { MOVZX R12D,word ptr [R13 + R14*0x2] }
    /* +0x2f64b2 */ __asm { MOV ESI,R12D }
    /* +0x2f64b5 */ __asm { OR ESI,0x20 }
    /* +0x2f64b8 */ __asm { MOV R13D,0x8893ad79 }
    /* +0x2f64be */ __asm { ADD R13D,ECX }
    /* +0x2f64c1 */ __asm { NOT R13D }
    /* +0x2f64c4 */ __asm { XOR RDI,-0x4841caf3 }
    /* +0x2f64cb */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2f64d2 */ __asm { MOV ECX,EDX }
    /* +0x2f64d4 */ __asm { ROL R13D,CL }
    /* +0x2f64d7 */ __asm { IMUL RDI,qword ptr [RBP + 0x1488] }
    /* +0x2f64df */ __asm { IMUL R14D,R13D,0x359f5bf5 }
    /* +0x2f64e6 */ __asm { XOR RDI,RBX }
    /* +0x2f64e9 */ __asm { ADD RDI,RDX }
    /* +0x2f64ec */ __asm { MOV R13D,0x9514b34d }
    /* +0x2f64f2 */ __asm { XOR R13D,R8D }
    /* +0x2f64f5 */ __asm { MOV ECX,EBX }
    /* +0x2f64f7 */ __asm { ROR R13D,CL }
    /* +0x2f64fa */ __asm { SUB R13D,EDX }
    /* +0x2f64fd */ __asm { XOR R13D,0x6ee45a20 }
    /* +0x2f6504 */ __asm { CMP R13,R14 }
    /* +0x2f6507 */ __asm { LEA ECX,[R12 + 0x20] }
    /* +0x2f650c */ __asm { CMOVA ECX,ESI }
    /* +0x2f650f */ __asm { LEA ESI,[R12 + -0x41] }
    /* +0x2f6514 */ __asm { CMP SI,0x1a }
    /* +0x2f6518 */ __asm { CMOVNC ECX,R12D }
    /* +0x2f651c */ __asm { MOVZX ECX,CL }
    /* +0x2f651f */ __asm { XOR R15,RCX }
    /* +0x2f6522 */ __asm { IMUL R15,RDI }
    /* +0x2f6526 */ __asm { CMP R15,R11 }
    /* +0x2f6529 */ __asm { SETZ CL }
    /* +0x2f652c */ __asm { MOV ESI,0x8dbb205b }
    /* +0x2f6531 */ __asm { XOR ESI,dword ptr [RBP + 0x1498] }
    /* +0x2f6537 */ __asm { ROL ESI,0x4 }
    /* +0x2f653a */ __asm { XOR ESI,0x7817d394 }
    /* +0x2f6540 */ __asm { SUB ESI,dword ptr [RBP + 0x1418] }
    /* +0x2f6546 */ __asm { MOV dword ptr [RBP + -0x8],ESI }
    /* +0x2f6549 */ __asm { MOV ESI,dword ptr [RBP + -0x8] }
    /* +0x2f654c */ __asm { CMP ESI,0x26bd4fb8 }
    /* +0x2f6552 */ __asm { JNC 0x7fffa4a6656f }
    /* +0x2f6554 */ __asm { TEST CL,CL }
    /* +0x2f6556 */ __asm { JNZ 0x7fffa4a6657d }
    /* +0x2f6558 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2f655f */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x2f6562 */ __asm { JMP 0x7fffa4a66314 }
    /* +0x2f6567 */ __asm { RET }
    /* +0x2f656f */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2f6574 */ __asm { NOP }
    /* +0x2f6575 */ __asm { NOP }
    /* +0x2f6576 */ __asm { NOP }
    /* +0x2f6577 */ __asm { NOP }
    /* +0x2f6578 */ __asm { NOP }
    /* +0x2f6579 */ __asm { NOP }
    /* +0x2f657a */ __asm { NOP }
    /* +0x2f657b */ __asm { NOP }
    /* +0x2f657c */ __asm { NOP }
    /* +0x2f657d */ __asm { NOP }
    /* +0x2f657e */ __asm { NOP }
    /* +0x2f657f */ __asm { NOP }
    /* +0x2f6580 */ __asm { NOP }
    /* +0x2f6581 */ __asm { NOP }
    /* +0x2f6582 */ __asm { NOP }
    /* +0x2f6583 */ __asm { NOP }
    /* +0x2f6584 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a682c0  |  RVA: 0x2f82c0  |  Size: 4648 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a682c0(void) {
    /* +0x2f82c0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2f82c5 */ __asm { PUSH RBP }
    /* +0x2f82c6 */ __asm { PUSH RSI }
    /* +0x2f82c7 */ __asm { PUSH RBX }
    /* +0x2f82c8 */ __asm { PUSH RDI }
    /* +0x2f82c9 */ __asm { PUSH R12 }
    /* +0x2f82cb */ __asm { PUSH R13 }
    /* +0x2f82cd */ __asm { PUSH R15 }
    /* +0x2f82cf */ __asm { PUSH R14 }
    /* +0x2f82d1 */ __asm { SUB RSP,0xc8 }
    /* +0x2f82d8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2f82df */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2f82e6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2f82ec */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2f82f6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2f8300 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2f830a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2f8313 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2f831b */ __asm { JZ 0x7fffa4a683c0 }
    /* +0x2f8321 */ __asm { MOV DX,0x2f22 }
    /* +0x2f8325 */ __asm { MOV R11W,0x281c }
    /* +0x2f832a */ __asm { LEA RAX,[0x7fffa47bf01e] }
    /* +0x2f8331 */ __asm { MOV RBX,qword ptr [RBP + 0x108] }
    /* +0x2f8338 */ __asm { MOV R12D,EBX }
    /* +0x2f833b */ __asm { OR R12D,0x1 }
    /* +0x2f833f */ __asm { LEA R8,[0x7fffa47c1ab1] }
    /* +0x2f8346 */ __asm { MOV R10D,0xdd695b82 }
    /* +0x2f834c */ __asm { LEA R9,[0x7fffa47cac73] }
    /* +0x2f8353 */ __asm { XOR EDX,EBX }
    /* +0x2f8355 */ __asm { IMUL EDX,EDX,-0x7b51 }
    /* +0x2f835b */ __asm { IMUL R10D,R12D }
    /* +0x2f835f */ __asm { ROL R10D,0x15 }
    /* +0x2f8363 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2f836a */ __asm { ROL R10D,CL }
    /* +0x2f836d */ __asm { ADD R11D,EBX }
    /* +0x2f8370 */ __asm { IMUL R11D,R11D,-0x3423 }
    /* +0x2f8377 */ __asm { ADD R11D,ECX }
    /* +0x2f837a */ __asm { MOVSX R11,R11W }
    /* +0x2f837e */ __asm { ROR DX,CL }
    /* +0x2f8381 */ __asm { MOVZX ECX,uint8_t ptr [RAX + R11*0x1 + 0x9] }
    /* +0x2f8387 */ __asm { MOVSX RAX,DX }
    /* +0x2f838b */ __asm { ADD RAX,R8 }
    /* +0x2f838e */ __asm { MOVSXD R10,R10D }
    /* +0x2f8391 */ __asm { MOV R8,qword ptr [R9 + R10*0x1 + 0x52] }
    /* +0x2f8396 */ __asm { XOR R8,qword ptr [RAX + RCX*0x8 + 0x13] }
    /* +0x2f839b */ __asm { MOVQ XMM2,R8 }
    /* +0x2f83a0 */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2f83a4 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2f83a8 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2f83ad */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2f83b1 */ __asm { TEST R8,R8 }
    /* +0x2f83b4 */ __asm { JZ 0x7fffa4a68402 }
    /* +0x2f83b6 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2f83bd */ __asm { CALL R8 }
    /* +0x2f83c0 */ __asm { MOVAPS XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2f83c8 */ __asm { MOVAPS XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2f83d1 */ __asm { MOVAPS XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2f83da */ __asm { MOVAPS XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2f83e3 */ __asm { MOVAPS XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2f83e8 */ __asm { MOVAPS XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2f83ee */ __asm { ADD RSP,0xc8 }
    /* +0x2f83f5 */ __asm { POP R14 }
    /* +0x2f83f7 */ __asm { POP R15 }
    /* +0x2f83f9 */ __asm { POP R13 }
    /* +0x2f83fb */ __asm { POP R12 }
    /* +0x2f83fd */ __asm { POP RDI }
    /* +0x2f83fe */ __asm { POP RBX }
    /* +0x2f83ff */ __asm { POP RSI }
    /* +0x2f8400 */ __asm { POP RBP }
    /* +0x2f8401 */ __asm { RET }
    /* +0x2f8402 */ __asm { MOV R10W,0x4daf }
    /* +0x2f8407 */ __asm { MOV RDX,qword ptr [RBP + 0x108] }
    /* +0x2f840e */ __asm { MOV R11D,EDX }
    /* +0x2f8411 */ __asm { OR R11D,0x1 }
    /* +0x2f8415 */ __asm { IMUL R10D,R11D }
    /* +0x2f8419 */ __asm { XOR R10D,0xd7de }
    /* +0x2f8420 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2f8427 */ __asm { ROR R10W,CL }
    /* +0x2f842b */ __asm { IMUL R10D,R10D,0xa93 }
    /* +0x2f8432 */ __asm { MOVZX R8D,R10W }
    /* +0x2f8436 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2f843a */ __asm { MOV R10W,0x9ee6 }
    /* +0x2f843f */ __asm { IMUL R10D,R10D,-0x5625 }
    /* +0x2f8446 */ __asm { ROR R10W,CL }
    /* +0x2f844a */ __asm { MOV dword ptr [RBP + 0x1220],R11D }
    /* +0x2f8451 */ __asm { IMUL R10D,R11D }
    /* +0x2f8455 */ __asm { MOVZX R8D,R10W }
    /* +0x2f8459 */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2f845d */ __asm { MOV R8,RCX }
    /* +0x2f8460 */ __asm { OR R8,0x60 }
    /* +0x2f8464 */ __asm { ADD RCX,0x60 }
    /* +0x2f8468 */ __asm { MOV R11D,0xa4db2c20 }
    /* +0x2f846e */ __asm { XOR R11D,0x7895f8e2 }
    /* +0x2f8475 */ __asm { IMUL R11D,dword ptr [RBP + 0x104] }
    /* +0x2f847d */ __asm { SUB R11D,EDX }
    /* +0x2f8480 */ __asm { CMP R11,0x76265b96 }
    /* +0x2f8487 */ __asm { CMOVNZ RCX,R8 }
    /* +0x2f848b */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2f8495 */ __asm { CMP qword ptr [RCX],R8 }
    /* +0x2f8498 */ __asm { NOP }
    /* +0x2f8499 */ __asm { NOP }
    /* +0x2f849a */ __asm { NOP }
    /* +0x2f849b */ __asm { NOP }
    /* +0x2f849c */ __asm { NOP }
    /* +0x2f849d */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2f84a1 */ __asm { MOV qword ptr [RBP + 0x11e0],RAX }
    /* +0x2f84a8 */ __asm { PUSHFQ }
    /* +0x2f84a9 */ __asm { POP RDX }
    /* +0x2f84aa */ __asm { MOV R10,qword ptr [RBP + 0x1418] }
    /* +0x2f84b1 */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2f84b8 */ __asm { ADD R10D,EAX }
    /* +0x2f84bb */ __asm { AND EDX,0x100 }
    /* +0x2f84c1 */ __asm { MOV R8W,0x743 }
    /* +0x2f84c6 */ __asm { ADD R10D,R8D }
    /* +0x2f84c9 */ __asm { ADD R10D,0x1b }
    /* +0x2f84cd */ __asm { ROL R10W,0x9 }
    /* +0x2f84d2 */ __asm { MOVZX R8D,R10W }
    /* +0x2f84d6 */ __asm { MOV qword ptr [RBP + 0x1298],RDX }
    /* +0x2f84dd */ __asm { MOV qword ptr [RBP + 0x1228],R8 }
    /* +0x2f84e4 */ __asm { CMP RDX,R8 }
    /* +0x2f84e7 */ __asm { NOP }
    /* +0x2f84e8 */ __asm { NOP }
    /* +0x2f84e9 */ __asm { NOP }
    /* +0x2f84ea */ __asm { NOP }
    /* +0x2f84eb */ __asm { NOP }
    /* +0x2f84ec */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2f84f3 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2f84f7 */ __asm { TEST R10D,R10D }
    /* +0x2f84fa */ __asm { NOP }
    /* +0x2f84fb */ __asm { NOP }
    /* +0x2f84fc */ __asm { NOP }
    /* +0x2f84fd */ __asm { NOP }
    /* +0x2f84fe */ __asm { NOP }
    /* +0x2f84ff */ __asm { ADD qword ptr [RBP + 0x11e0],0x10 }
    /* +0x2f8507 */ __asm { MOV R9,0x10000000014b }
    /* +0x2f8511 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f8518 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2f851b */ __asm { MOV qword ptr [RBP + 0x11e0],RAX }
    /* +0x2f8522 */ __asm { PUSHFQ }
    /* +0x2f8523 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2f852b */ __asm { POPFQ }
    /* +0x2f852c */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2f8533 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2f8537 */ __asm { MOV EDX,0x79248be5 }
    /* +0x2f853c */ __asm { XOR R11D,R11D }
    /* +0x2f853f */ __asm { CMP R8D,0xfcebf0f4 }
    /* +0x2f8546 */ __asm { SETNZ R11B }
    /* +0x2f854a */ __asm { MOV ESI,0x8c03d38c }
    /* +0x2f854f */ __asm { ADD EDX,0x2e2d5513 }
    /* +0x2f8555 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2f855c */ __asm { ADD ESI,ECX }
    /* +0x2f855e */ __asm { MOV RAX,qword ptr [RBP + 0x108] }
    /* +0x2f8565 */ __asm { XOR EDX,EAX }
    /* +0x2f8567 */ __asm { ROL EDX,CL }
    /* +0x2f8569 */ __asm { MOVSXD RCX,EDX }
    /* +0x2f856c */ __asm { XOR EDX,EDX }
    /* +0x2f856e */ __asm { CMP R8D,0xfcebf0f5 }
    /* +0x2f8575 */ __asm { SETNC DL }
    /* +0x2f8578 */ __asm { XOR ESI,EAX }
    /* +0x2f857a */ __asm { ADD ESI,0xa7c246db }
    /* +0x2f8580 */ __asm { MOVSXD R8,ESI }
    /* +0x2f8583 */ __asm { CMP R8,RCX }
    /* +0x2f8586 */ __asm { CMOVGE R11D,EDX }
    /* +0x2f858a */ __asm { TEST R11B,R11B }
    /* +0x2f858d */ __asm { JZ 0x7fffa4a686fe }
    /* +0x2f8593 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f859a */ __asm { MOVZX R11D,word ptr [RAX + 0x58] }
    /* +0x2f859f */ __asm { CMP R11D,0x2 }
    /* +0x2f85a3 */ __asm { JC 0x7fffa4a6866e }
    /* +0x2f85a9 */ __asm { SHR R11D,0x1 }
    /* +0x2f85ac */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f85b3 */ __asm { MOV RDX,qword ptr [RAX + 0x60] }
    /* +0x2f85b7 */ __asm { CMP R11W,0x1 }
    /* +0x2f85bc */ __asm { JZ 0x7fffa4a68673 }
    /* +0x2f85c2 */ __asm { MOV EBX,R11D }
    /* +0x2f85c5 */ __asm { AND EBX,0xfffffffe }
    /* +0x2f85c8 */ __asm { LEA R13,[RBX + -0x2] }
    /* +0x2f85cc */ __asm { MOV RCX,-0x56ac57fd56f4aa33 }
    /* +0x2f85d6 */ __asm { XOR R14D,R14D }
    /* +0x2f85d9 */ __asm { LEA R8,[R14 + 0x2] }
    /* +0x2f85dd */ __asm { XOR ESI,ESI }
    /* +0x2f85df */ __asm { CMP R13,R14 }
    /* +0x2f85e2 */ __asm { SETZ SIL }
    /* +0x2f85e6 */ __asm { MOVZX R15D,word ptr [RDX + R14*0x2 + 0x2] }
    /* +0x2f85ec */ __asm { MOV R10D,R15D }
    /* +0x2f85ef */ __asm { OR R10D,0x20 }
    /* +0x2f85f3 */ __asm { LEA EDI,[R15 + -0x41] }
    /* +0x2f85f7 */ __asm { CMP DI,0x1a }
    /* +0x2f85fb */ __asm { CMOVNC R10D,R15D }
    /* +0x2f85ff */ __asm { XOR EDI,EDI }
    /* +0x2f8601 */ __asm { CMP R8,RBX }
    /* +0x2f8604 */ __asm { SETBE DIL }
    /* +0x2f8608 */ __asm { MOVZX R15D,word ptr [RDX + R14*0x2] }
    /* +0x2f860d */ __asm { LEA R14D,[R15 + -0x41] }
    /* +0x2f8611 */ __asm { MOV EAX,R15D }
    /* +0x2f8614 */ __asm { OR EAX,0x20 }
    /* +0x2f8617 */ __asm { CMP R14W,0x1a }
    /* +0x2f861c */ __asm { CMOVNC EAX,R15D }
    /* +0x2f8620 */ __asm { MOVZX R15D,AL }
    /* +0x2f8624 */ __asm { XOR R15,RCX }
    /* +0x2f8627 */ __asm { MOVZX ECX,R10B }
    /* +0x2f862b */ __asm { IMUL R15,R9 }
    /* +0x2f862f */ __asm { XOR R15,RCX }
    /* +0x2f8632 */ __asm { MOV R10D,0x2cfafd29 }
    /* +0x2f8638 */ __asm { SUB R10D,dword ptr [RBP + 0x1418] }
    /* +0x2f863f */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2f8646 */ __asm { ROR R10D,CL }
    /* +0x2f8649 */ __asm { IMUL R15,R9 }
    /* +0x2f864d */ __asm { ROL R10D,0x9 }
    /* +0x2f8651 */ __asm { MOVSXD RAX,R10D }
    /* +0x2f8654 */ __asm { CMP RAX,-0x50e85f6d }
    /* +0x2f865a */ __asm { CMOVZ EDI,ESI }
    /* +0x2f865d */ __asm { MOV RCX,R15 }
    /* +0x2f8660 */ __asm { MOV R14,R8 }
    /* +0x2f8663 */ __asm { TEST DIL,DIL }
    /* +0x2f8666 */ __asm { JZ 0x7fffa4a685d9 }
    /* +0x2f866c */ __asm { JMP 0x7fffa4a68680 }
    /* +0x2f866e */ __asm { XOR R11D,R11D }
    /* +0x2f8671 */ __asm { JMP 0x7fffa4a686bd }
    /* +0x2f8673 */ __asm { MOV R15,-0x56ac57fd56f4aa33 }
    /* +0x2f867d */ __asm { XOR R8D,R8D }
    /* +0x2f8680 */ __asm { TEST R11B,0x1 }
    /* +0x2f8684 */ __asm { JZ 0x7fffa4a686ac }
    /* +0x2f8686 */ __asm { MOVZX R8D,word ptr [RDX + R8*0x2] }
    /* +0x2f868b */ __asm { MOV R11D,R8D }
    /* +0x2f868e */ __asm { OR R11D,0x20 }
    /* +0x2f8692 */ __asm { LEA EDX,[R8 + -0x41] }
    /* +0x2f8696 */ __asm { CMP DX,0x1a }
    /* +0x2f869a */ __asm { CMOVNC R11D,R8D }
    /* +0x2f869e */ __asm { MOVZX R8D,R11B }
    /* +0x2f86a2 */ __asm { XOR R8,R15 }
    /* +0x2f86a5 */ __asm { IMUL R8,R9 }
    /* +0x2f86a9 */ __asm { MOV R15,R8 }
    /* +0x2f86ac */ __asm { MOV RAX,0x39cda41577e4d47d }
    /* +0x2f86b6 */ __asm { CMP R15,RAX }
    /* +0x2f86b9 */ __asm { SETZ R11B }
    /* +0x2f86bd */ __asm { MOV R8D,0x89055f02 }
    /* +0x2f86c3 */ __asm { XOR R8D,dword ptr [RBP + 0x1418] }
    /* +0x2f86ca */ __asm { ROL R8D,0xd }
    /* +0x2f86ce */ __asm { XOR R8D,dword ptr [RBP + 0x108] }
    /* +0x2f86d5 */ __asm { NOT R8D }
    /* +0x2f86d8 */ __asm { MOV dword ptr [RBP + -0x8],R8D }
    /* +0x2f86dc */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2f86e0 */ __asm { CMP R8D,0x26bd4fb8 }
    /* +0x2f86e7 */ __asm { JNC 0x7fffa4a68706 }
    /* +0x2f86e9 */ __asm { TEST R11B,R11B }
    /* +0x2f86ec */ __asm { JNZ 0x7fffa4a68715 }
    /* +0x2f86ee */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2f86f5 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2f86f9 */ __asm { JMP 0x7fffa4a68511 }
    /* +0x2f86fe */ __asm { RET }
    /* +0x2f8706 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2f870b */ __asm { JNS 0x7fffa4a68748 }
    /* +0x2f870d */ __asm { IRETD }
    /* +0x2f8715 */ __asm { MOV R10W,0x6578 }
    /* +0x2f871a */ __asm { XOR R10D,0xffffbd44 }
    /* +0x2f8721 */ __asm { ADD R10D,0xfffff8f6 }
    /* +0x2f8728 */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x2f872f */ __asm { MOV R8D,EAX }
    /* +0x2f8732 */ __asm { XOR R8D,R10D }
    /* +0x2f8735 */ __asm { IMUL R8D,dword ptr [RBP + 0x1220] }
    /* +0x2f873d */ __asm { MOVZX R8D,R8W }
    /* +0x2f8741 */ __asm { MOV RAX,-0x65fa3a48 }
    /* +0x2f8748 */ __asm { ADD RAX,qword ptr GS:[R8] }
    /* +0x2f874c */ __asm { ROL RAX,0x2e }
    /* +0x2f8750 */ __asm { MOV ECX,0x9a32e401 }
    /* +0x2f8755 */ __asm { ADD RCX,RAX }
    /* +0x2f8758 */ __asm { MOV RAX,0x3c3850ca3b2bb67a }
    /* +0x2f8762 */ __asm { CMP RCX,RAX }
    /* +0x2f8765 */ __asm { NOP }
    /* +0x2f8766 */ __asm { NOP }
    /* +0x2f8767 */ __asm { NOP }
    /* +0x2f8768 */ __asm { NOP }
    /* +0x2f8769 */ __asm { NOP }
    /* +0x2f876a */ __asm { NOP }
    /* +0x2f876b */ __asm { NOP }
    /* +0x2f876c */ __asm { NOP }
    /* +0x2f876d */ __asm { NOP }
    /* +0x2f876e */ __asm { NOP }
    /* +0x2f876f */ __asm { NOP }
    /* +0x2f8770 */ __asm { NOP }
    /* +0x2f8771 */ __asm { NOP }
    /* +0x2f8772 */ __asm { NOP }
    /* +0x2f8773 */ __asm { NOP }
    /* +0x2f8774 */ __asm { MOV R10W,0x8352 }
    /* +0x2f8779 */ __asm { MOV RAX,qword ptr [RBP + 0x1418] }
    /* +0x2f8780 */ __asm { MOV R8D,EAX }
    /* +0x2f8783 */ __asm { XOR R8D,R10D }
    /* +0x2f8786 */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2f878d */ __asm { ROL R8W,CL }
    /* +0x2f8791 */ __asm { ROL R8W,0x9 }
    /* +0x2f8796 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f879d */ __asm { MOV RCX,qword ptr [RAX + 0x30] }
    /* +0x2f87a1 */ __asm { MOVZX R8D,R8W }
    /* +0x2f87a5 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2f87a9 */ __asm { MOV qword ptr [RBP + 0x11e0],RCX }
    /* +0x2f87b0 */ __asm { TEST RCX,RCX }
    /* +0x2f87b3 */ __asm { JZ 0x7fffa4a689b0 }
    /* +0x2f87b9 */ __asm { MOV R10W,0xfe12 }
    /* +0x2f87be */ __asm { ADD R10D,0xffffc71b }
    /* +0x2f87c5 */ __asm { XOR R10D,dword ptr [RBP + 0x1418] }
    /* +0x2f87cc */ __asm { ADD R10D,0xffff8981 }
    /* +0x2f87d3 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f87da */ __asm { MOV R8D,dword ptr [RAX + 0x3c] }
    /* +0x2f87de */ __asm { IMUL R10D,dword ptr [RBP + 0x1220] }
    /* +0x2f87e6 */ __asm { MOVZX R11D,R10W }
    /* +0x2f87ea */ __asm { ADD R8,RAX }
    /* +0x2f87ed */ __asm { CMP R8,R11 }
    /* +0x2f87f0 */ __asm { JZ 0x7fffa4a689b0 }
    /* +0x2f87f6 */ __asm { MOV R10W,0xd8b9 }
    /* +0x2f87fb */ __asm { MOV RAX,qword ptr [RBP + 0x1400] }
    /* +0x2f8802 */ __asm { MOV R11D,EAX }
    /* +0x2f8805 */ __asm { IMUL R11D,R10D }
    /* +0x2f8809 */ __asm { NOT R11D }
    /* +0x2f880c */ __asm { MOV R10D,dword ptr [RBP + 0x1220] }
    /* +0x2f8813 */ __asm { IMUL R10D,R11D }
    /* +0x2f8817 */ __asm { ADD R10D,0x39ec }
    /* +0x2f881e */ __asm { MOVZX R11D,R10W }
    /* +0x2f8822 */ __asm { MOV RAX,qword ptr GS:[R11] }
    /* +0x2f8826 */ __asm { MOV R10W,0xe556 }
    /* +0x2f882b */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2f8832 */ __asm { MOV R11D,ECX }
    /* +0x2f8835 */ __asm { XOR R11D,R10D }
    /* +0x2f8838 */ __asm { ROL R11W,0xc }
    /* +0x2f883d */ __asm { XOR R11D,dword ptr [RBP + 0x108] }
    /* +0x2f8844 */ __asm { MOVZX R11D,R11W }
    /* +0x2f8848 */ __asm { MOV RAX,qword ptr [RAX + 0xfe8] }
    /* +0x2f884f */ __asm { MOV RCX,qword ptr GS:[R11] }
    /* +0x2f8853 */ __asm { ADD RAX,qword ptr [RCX + 0x370] }
    /* +0x2f885a */ __asm { MOV RCX,-0x5d293fd390ef0015 }
    /* +0x2f8864 */ __asm { CMP RAX,RCX }
    /* +0x2f8867 */ __asm { NOP }
    /* +0x2f8868 */ __asm { NOP }
    /* +0x2f8869 */ __asm { NOP }
    /* +0x2f886a */ __asm { NOP }
    /* +0x2f886b */ __asm { NOP }
    /* +0x2f886c */ __asm { MOV RCX,qword ptr [R8 + 0x88] }
    /* +0x2f8873 */ __asm { MOV qword ptr [RBP + 0x1498],0x0 }
    /* +0x2f887e */ __asm { MOV R10D,0xffffffff }
    /* +0x2f8884 */ __asm { MOV qword ptr [RBP + 0x12c8],RCX }
    /* +0x2f888b */ __asm { AND R10,RCX }
    /* +0x2f888e */ __asm { JZ 0x7fffa4a689da }
    /* +0x2f8894 */ __asm { MOV RAX,qword ptr [RBP + 0x12c8] }
    /* +0x2f889b */ __asm { SHR RAX,0x20 }
    /* +0x2f889f */ __asm { JZ 0x7fffa4a689da }
    /* +0x2f88a5 */ __asm { MOV R8,qword ptr [RBP + 0x1228] }
    /* +0x2f88ac */ __asm { CMP dword ptr [RBP + 0x1298],R8D }
    /* +0x2f88b3 */ __asm { NOP }
    /* +0x2f88b4 */ __asm { NOP }
    /* +0x2f88b5 */ __asm { NOP }
    /* +0x2f88b6 */ __asm { NOP }
    /* +0x2f88b7 */ __asm { NOP }
    /* +0x2f88b8 */ __asm { NOP }
    /* +0x2f88b9 */ __asm { NOP }
    /* +0x2f88ba */ __asm { NOP }
    /* +0x2f88bb */ __asm { NOP }
    /* +0x2f88bc */ __asm { MOV dword ptr [RBP + -0x8],0xaa54569c }
    /* +0x2f88c3 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2f88c7 */ __asm { MOV R11W,0x7aa7 }
    /* +0x2f88cc */ __asm { IMUL R11D,R11D,0x499d }
    /* +0x2f88d3 */ __asm { XOR R11D,0x1925 }
    /* +0x2f88da */ __asm { MOV R9D,dword ptr [RBP + 0x1220] }
    /* +0x2f88e1 */ __asm { IMUL R9D,R11D }
    /* +0x2f88e5 */ __asm { ADD R9D,dword ptr [RBP + 0x1418] }
    /* +0x2f88ec */ __asm { MOVZX R11D,R9W }
    /* +0x2f88f0 */ __asm { CMP R8D,R11D }
    /* +0x2f88f3 */ __asm { NOP }
    /* +0x2f88f4 */ __asm { NOP }
    /* +0x2f88f5 */ __asm { NOP }
    /* +0x2f88f6 */ __asm { NOP }
    /* +0x2f88f7 */ __asm { NOP }
    /* +0x2f88f8 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f88ff */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x1c],0x0 }
    /* +0x2f8905 */ __asm { JZ 0x7fffa4a689c4 }
    /* +0x2f890b */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f8912 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x20],0x0 }
    /* +0x2f8918 */ __asm { JZ 0x7fffa4a689c4 }
    /* +0x2f891e */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f8925 */ __asm { CMP dword ptr [RAX + R10*0x1 + 0x24],0x0 }
    /* +0x2f892b */ __asm { JZ 0x7fffa4a689c4 }
    /* +0x2f8931 */ __asm { MOV dword ptr [RBP + -0x8],0xb1676a98 }
    /* +0x2f8938 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2f893c */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f8943 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x1c] }
    /* +0x2f8948 */ __asm { ADD R8,RAX }
    /* +0x2f894b */ __asm { MOV qword ptr [RBP + 0x1318],R8 }
    /* +0x2f8952 */ __asm { MOV dword ptr [RBP + -0x8],0x5d52e0ba }
    /* +0x2f8959 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2f895d */ __asm { CMP R8D,0xb5807139 }
    /* +0x2f8964 */ __asm { NOP }
    /* +0x2f8965 */ __asm { NOP }
    /* +0x2f8966 */ __asm { NOP }
    /* +0x2f8967 */ __asm { NOP }
    /* +0x2f8968 */ __asm { NOP }
    /* +0x2f8969 */ __asm { MOV RAX,qword ptr [RBP + 0x11e0] }
    /* +0x2f8970 */ __asm { MOV R13D,dword ptr [RAX + R10*0x1 + 0x20] }
    /* +0x2f8975 */ __asm { ADD R13,RAX }
    /* +0x2f8978 */ __asm { MOV dword ptr [RBP + -0x8],0x7c0c5dd9 }
    /* +0x2f897f */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2f8983 */ __asm { MOV ESI,dword ptr [RAX + R10*0x1 + 0x24] }
    /* +0x2f8988 */ __asm { ADD RSI,RAX }
    /* +0x2f898b */ __asm { MOV dword ptr [RBP + -0x8],0x8645c168 }
    /* +0x2f8992 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2f8996 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x10] }
    /* +0x2f899b */ __asm { MOV qword ptr [RBP + 0x11d8],R8 }
    /* +0x2f89a2 */ __asm { MOV R8D,dword ptr [RAX + R10*0x1 + 0x18] }
    /* +0x2f89a7 */ __asm { MOV qword ptr [RBP + 0x1498],R8 }
    /* +0x2f89ae */ __asm { JMP 0x7fffa4a689e1 }
    /* +0x2f89b0 */ __asm { MOV qword ptr [RBP + 0x1498],0x0 }
    /* +0x2f89bb */ __asm { MOV qword ptr [RBP + 0x11d8],RAX }
    /* +0x2f89c2 */ __asm { JMP 0x7fffa4a689e1 }
    /* +0x2f89c4 */ __asm { MOV dword ptr [RBP + -0x8],0x49080108 }
    /* +0x2f89cb */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2f89cf */ __asm { MOV qword ptr [RBP + 0x1498],0x0 }
    /* +0x2f89da */ __asm { MOV qword ptr [RBP + 0x11d8],RAX }
    /* +0x2f89e1 */ __asm { MOV R8,qword ptr [RBP + 0x12c8] }
    /* +0x2f89e8 */ __asm { MOV RBX,R8 }
    /* +0x2f89eb */ __asm { SHR RBX,0x20 }
    /* +0x2f89ef */ __asm { ADD EBX,R8D }
    /* +0x2f89f2 */ __asm { XOR R14D,R14D }
    /* +0x2f89f5 */ __asm { MOV qword ptr [RBP + 0x1c0],0x0 }
    /* +0x2f8a00 */ __asm { JMP 0x7fffa4a68ab7 }
    /* +0x2f8a05 */ __asm { MOV R10W,0x9889 }
    /* +0x2f8a0a */ __asm { IMUL R10D,dword ptr [RBP + 0x1400] }
    /* +0x2f8a12 */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2f8a19 */ __asm { ADD R10D,ECX }
    /* +0x2f8a1c */ __asm { ADD R10D,0x7ba5 }
    /* +0x2f8a23 */ __asm { MOVZX R8D,R10W }
    /* +0x2f8a27 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2f8a2b */ __asm { MOV R10W,0xfa4a }
    /* +0x2f8a30 */ __asm { XOR R10D,0x40aa }
    /* +0x2f8a37 */ __asm { ADD R10D,ECX }
    /* +0x2f8a3a */ __asm { MOVZX R8D,R10W }
    /* +0x2f8a3e */ __asm { MOV RAX,qword ptr [RAX + 0xc00] }
    /* +0x2f8a45 */ __asm { MOV R8,qword ptr GS:[R8] }
    /* +0x2f8a49 */ __asm { MOV R11D,0x550d66d }
    /* +0x2f8a4f */ __asm { MOV EDX,0xf09013b2 }
    /* +0x2f8a54 */ __asm { ADD EDX,0x4b029577 }
    /* +0x2f8a5a */ __asm { ROR EDX,CL }
    /* +0x2f8a5c */ __asm { MOV ECX,R8D }
    /* +0x2f8a5f */ __asm { AND ECX,0x6a8 }
    /* +0x2f8a65 */ __asm { MOV R9,qword ptr [RBP + 0x1418] }
    /* +0x2f8a6c */ __asm { SUB EDX,R9D }
    /* +0x2f8a6f */ __asm { ADD EDX,0x77ff7ab0 }
    /* +0x2f8a75 */ __asm { XOR R11D,R9D }
    /* +0x2f8a78 */ __asm { ADD R11D,0x843d2146 }
    /* +0x2f8a7f */ __asm { IMUL R11D,R12D }
    /* +0x2f8a83 */ __asm { ADD R8,0x6a8 }
    /* +0x2f8a8a */ __asm { CMP R11,RDX }
    /* +0x2f8a8d */ __asm { CMOVZ R8,RCX }
    /* +0x2f8a91 */ __asm { IMUL R8,RAX }
    /* +0x2f8a95 */ __asm { MOV RAX,0x1b967edfdccb6d1b }
    /* +0x2f8a9f */ __asm { CMP R8,RAX }
    /* +0x2f8aa2 */ __asm { JZ 0x7fffa4a68c8d }
    /* +0x2f8aa8 */ __asm { XOR R8D,R8D }
    /* +0x2f8aab */ __asm { INC R14 }
    /* +0x2f8aae */ __asm { TEST R8,R8 }
    /* +0x2f8ab1 */ __asm { JNZ 0x7fffa4a6a144 }
    /* +0x2f8ab7 */ __asm { CMP R14,qword ptr [RBP + 0x1498] }
    /* +0x2f8abe */ __asm { JZ 0x7fffa4a68c98 }
    /* +0x2f8ac4 */ __asm { NOP }
    /* +0x2f8ac5 */ __asm { MOV RAX,0x0 }
    /* +0x2f8acc */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2f8ad3 */ __asm { MOVZX R10D,word ptr [RSI + R14*0x2] }
    /* +0x2f8ad8 */ __asm { MOV RAX,qword ptr [RBP + 0x11d8] }
    /* +0x2f8adf */ __asm { LEA R8D,[RAX + R10*0x1] }
    /* +0x2f8ae3 */ __asm { MOV dword ptr [RBP + 0x8],R8D }
    /* +0x2f8ae7 */ __asm { MOV R8D,dword ptr [R13 + R14*0x4] }
    /* +0x2f8aec */ __asm { MOV RAX,qword ptr [RBP + 0x1318] }
    /* +0x2f8af3 */ __asm { MOV R10D,dword ptr [RAX + R10*0x4] }
    /* +0x2f8af7 */ __asm { MOV R11D,R10D }
    /* +0x2f8afa */ __asm { CMP R10D,dword ptr [RBP + 0x12c8] }
    /* +0x2f8b01 */ __asm { SETNC DL }
    /* +0x2f8b04 */ __asm { MOV RCX,qword ptr [RBP + 0x11e0] }
    /* +0x2f8b0b */ __asm { ADD R11,RCX }
    /* +0x2f8b0e */ __asm { LEA RAX,[R8 + RCX*0x1] }
    /* +0x2f8b12 */ __asm { TEST R8,R8 }
    /* +0x2f8b15 */ __asm { MOV qword ptr [RBP + -0x8],R11 }
    /* +0x2f8b19 */ __asm { CMOVZ RAX,R8 }
    /* +0x2f8b1d */ __asm { CMP R10D,EBX }
    /* +0x2f8b20 */ __asm { SETC R10B }
    /* +0x2f8b24 */ __asm { AND R10B,DL }
    /* +0x2f8b27 */ __asm { MOV uint8_t ptr [RBP + 0xc],R10B }
    /* +0x2f8b2b */ __asm { MOV qword ptr [RBP],RAX }
    /* +0x2f8b2f */ __asm { TEST RAX,RAX }
    /* +0x2f8b32 */ __asm { JZ 0x7fffa4a68c6e }
    /* +0x2f8b38 */ __asm { MOV dword ptr [RBP + 0x12e8],0x52658ddc }
    /* +0x2f8b42 */ __asm { MOV R10D,dword ptr [RBP + 0x12e8] }
    /* +0x2f8b49 */ __asm { MOV R10,qword ptr [RBP] }
    /* +0x2f8b4d */ __asm { MOVZX EDX,uint8_t ptr [R10] }
    /* +0x2f8b51 */ __asm { TEST DL,DL }
    /* +0x2f8b53 */ __asm { JZ 0x7fffa4a68a05 }
    /* +0x2f8b59 */ __asm { LEA RAX,[R10 + 0x1] }
    /* +0x2f8b5d */ __asm { MOV R8D,0xb5383f }
    /* +0x2f8b63 */ __asm { MOVZX R11D,DL }
    /* +0x2f8b67 */ __asm { XOR R11D,R8D }
    /* +0x2f8b6a */ __asm { IMUL R8D,R11D,0x10001ab }
    /* +0x2f8b71 */ __asm { MOVZX EDX,uint8_t ptr [RAX] }
    /* +0x2f8b74 */ __asm { TEST DL,DL }
    /* +0x2f8b76 */ __asm { JZ 0x7fffa4a68b7d }
}


// ============================================================================
// Function : Unwind@7fffa4a6a290  |  RVA: 0x2fa290  |  Size: 256 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6a290(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if ((uint64_t)((*(int *)(param_2 + 0x184) * 0x7e898f74 ^ 0xb2ef9ea0U) >> 2) <
      *(uint64_t *)(param_2 + 0x13b8)) {
    uVar1 = *(uint64_t *)(param_2 + 0x13a0);
    (*(code *)((int64_t)~(*(int *)(param_2 + 0x184) * -0x6a3b9eb5) + 0x7fffa5697882))
              (uVar1,param_2,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6a390  |  RVA: 0x2fa390  |  Size: 130 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6a390(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)
             (short)((short)*(uint64_t *)(param_2 + 0x1480) * -0x3379 -
                    (short)*(uint32_t *)(param_2 + 0x1260)) + 0x7fffa562b13c))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6a420  |  RVA: 0x2fa420  |  Size: 241 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6a420(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    uVar1 = (short)*(uint64_t *)(param_2 + 0x1498) + 0x4d99;
    (*(code *)(&UNK_7fffa568a62f + (short)(uVar1 * 0x200 | uVar1 >> 7)))
              (&UNK_7fffa568a62f + (short)(uVar1 * 0x200 | uVar1 >> 7),
               *(uint64_t *)(param_2 + 0x1498),
               *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6a520  |  RVA: 0x2fa520  |  Size: 1104 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a6a520(void) {
    /* +0x2fa520 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2fa525 */ __asm { PUSH RBP }
    /* +0x2fa526 */ __asm { PUSH RSI }
    /* +0x2fa527 */ __asm { PUSH RBX }
    /* +0x2fa528 */ __asm { PUSH RDI }
    /* +0x2fa529 */ __asm { PUSH R12 }
    /* +0x2fa52b */ __asm { PUSH R13 }
    /* +0x2fa52d */ __asm { PUSH R15 }
    /* +0x2fa52f */ __asm { PUSH R14 }
    /* +0x2fa531 */ __asm { SUB RSP,0xc8 }
    /* +0x2fa538 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2fa53f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2fa546 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2fa54c */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2fa556 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2fa560 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2fa56a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2fa573 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2fa57b */ __asm { JZ 0x7fffa4a6a63b }
    /* +0x2fa581 */ __asm { MOV R10W,0x642f }
    /* +0x2fa586 */ __asm { LEA R8,[0x7fffa47c54ba] }
    /* +0x2fa58d */ __asm { MOV R9W,0x7e06 }
    /* +0x2fa592 */ __asm { LEA RAX,[0x7fffa47c30b4] }
    /* +0x2fa599 */ __asm { MOV RDX,qword ptr [RBP + 0x1418] }
    /* +0x2fa5a0 */ __asm { MOV R11D,EDX }
    /* +0x2fa5a3 */ __asm { XOR R11D,R9D }
    /* +0x2fa5a6 */ __asm { NOT R11D }
    /* +0x2fa5a9 */ __asm { MOV R9D,0xe2215c5 }
    /* +0x2fa5af */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2fa5b6 */ __asm { XOR R9D,ECX }
    /* +0x2fa5b9 */ __asm { NOT R9D }
    /* +0x2fa5bc */ __asm { ROL R9D,0x11 }
    /* +0x2fa5c0 */ __asm { ADD R9D,EDX }
    /* +0x2fa5c3 */ __asm { NOT R9D }
    /* +0x2fa5c6 */ __asm { MOVSXD R9,R9D }
    /* +0x2fa5c9 */ __asm { MOV RDX,qword ptr [RBP + 0x11e0] }
    /* +0x2fa5d0 */ __asm { ADD R11D,EDX }
    /* +0x2fa5d3 */ __asm { ROL R11W,CL }
    /* +0x2fa5d7 */ __asm { ADD R9,R8 }
    /* +0x2fa5da */ __asm { MOVSX R8,R11W }
    /* +0x2fa5de */ __asm { ADD R10D,EDX }
    /* +0x2fa5e1 */ __asm { XOR R10D,0x1cec }
    /* +0x2fa5e8 */ __asm { ROR R10W,CL }
    /* +0x2fa5ec */ __asm { LEA RCX,[0x7fffa47c1b1c] }
    /* +0x2fa5f3 */ __asm { MOVSX R10,R10W }
    /* +0x2fa5f7 */ __asm { MOVZX R10D,uint8_t ptr [RCX + R10*0x1 + 0x9] }
    /* +0x2fa5fd */ __asm { MOV RCX,qword ptr [R9 + R10*0x8 + 0x13] }
    /* +0x2fa602 */ __asm { XOR RCX,qword ptr [RAX + R8*0x1 + 0x52] }
    /* +0x2fa607 */ __asm { MOVQ XMM2,RCX }
    /* +0x2fa60c */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2fa610 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2fa614 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2fa619 */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2fa61d */ __asm { TEST R8,R8 }
    /* +0x2fa620 */ __asm { JZ 0x7fffa4a6a683 }
    /* +0x2fa622 */ __asm { MOV RAX,0x0 }
    /* +0x2fa629 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2fa630 */ __asm { NOP }
    /* +0x2fa631 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2fa638 */ __asm { CALL R8 }
    /* +0x2fa63b */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2fa644 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2fa64e */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2fa658 */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2fa662 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2fa668 */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2fa66f */ __asm { ADD RSP,0xc8 }
    /* +0x2fa676 */ __asm { POP R14 }
    /* +0x2fa678 */ __asm { POP R15 }
    /* +0x2fa67a */ __asm { POP R13 }
    /* +0x2fa67c */ __asm { POP R12 }
    /* +0x2fa67e */ __asm { POP RDI }
    /* +0x2fa67f */ __asm { POP RBX }
    /* +0x2fa680 */ __asm { POP RSI }
    /* +0x2fa681 */ __asm { POP RBP }
    /* +0x2fa682 */ __asm { RET }
    /* +0x2fa683 */ __asm { MOV R10W,0x22a8 }
    /* +0x2fa688 */ __asm { MOV RCX,qword ptr [RBP + 0x108] }
    /* +0x2fa68f */ __asm { MOV R8D,ECX }
    /* +0x2fa692 */ __asm { MOV RDX,qword ptr [RBP + 0x11e0] }
    /* +0x2fa699 */ __asm { SUB R8D,EDX }
    /* +0x2fa69c */ __asm { ADD R8D,R10D }
    /* +0x2fa69f */ __asm { IMUL R10D,R8D,-0x50dd }
    /* +0x2fa6a6 */ __asm { ADD R10D,0xffffefd1 }
    /* +0x2fa6ad */ __asm { MOV R11,qword ptr [RBP + 0x1418] }
    /* +0x2fa6b4 */ __asm { XOR R10D,R11D }
    /* +0x2fa6b7 */ __asm { MOVZX R8D,R10W }
    /* +0x2fa6bb */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2fa6bf */ __asm { MOV R8D,ECX }
    /* +0x2fa6c2 */ __asm { OR R8D,0x1 }
    /* +0x2fa6c6 */ __asm { MOV R10W,0x3596 }
    /* +0x2fa6cb */ __asm { ADD R10D,R11D }
    /* +0x2fa6ce */ __asm { IMUL R10D,R10D,-0x7279 }
    /* +0x2fa6d5 */ __asm { ADD R10D,0x5125 }
    /* +0x2fa6dc */ __asm { XOR R10D,EDX }
    /* +0x2fa6df */ __asm { MOV dword ptr [RBP + 0x1488],R8D }
    /* +0x2fa6e6 */ __asm { IMUL R10D,R8D }
    /* +0x2fa6ea */ __asm { MOVZX R8D,R10W }
    /* +0x2fa6ee */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2fa6f2 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2fa6fc */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2fa700 */ __asm { NOP }
    /* +0x2fa701 */ __asm { NOP }
    /* +0x2fa702 */ __asm { NOP }
    /* +0x2fa703 */ __asm { NOP }
    /* +0x2fa704 */ __asm { NOP }
    /* +0x2fa705 */ __asm { PUSHFQ }
    /* +0x2fa706 */ __asm { POP R8 }
    /* +0x2fa708 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2fa70c */ __asm { MOV qword ptr [RBP + 0x1298],R8 }
    /* +0x2fa713 */ __asm { TEST R8D,0x100 }
    /* +0x2fa71a */ __asm { NOP }
    /* +0x2fa71b */ __asm { NOP }
    /* +0x2fa71c */ __asm { NOP }
    /* +0x2fa71d */ __asm { NOP }
    /* +0x2fa71e */ __asm { NOP }
    /* +0x2fa71f */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2fa726 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2fa72a */ __asm { TEST R10D,R10D }
    /* +0x2fa72d */ __asm { NOP }
    /* +0x2fa72e */ __asm { NOP }
    /* +0x2fa72f */ __asm { NOP }
    /* +0x2fa730 */ __asm { NOP }
    /* +0x2fa731 */ __asm { NOP }
    /* +0x2fa732 */ __asm { ADD RAX,0x10 }
    /* +0x2fa736 */ __asm { MOV R10,0x10000000014b }
    /* +0x2fa740 */ __asm { MOV R11,-0x10008bc80037 }
    /* +0x2fa74a */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2fa74d */ __asm { PUSHFQ }
    /* +0x2fa74e */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2fa756 */ __asm { POPFQ }
    /* +0x2fa757 */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2fa75e */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x2fa761 */ __asm { MOV ECX,0xa690ee52 }
    /* +0x2fa766 */ __asm { IMUL ECX,dword ptr [RBP + 0x104] }
    /* +0x2fa76d */ __asm { SUB ECX,dword ptr [RBP + 0x108] }
    /* +0x2fa773 */ __asm { XOR ECX,dword ptr [RBP + 0x1498] }
    /* +0x2fa779 */ __asm { NOT ECX }
    /* +0x2fa77b */ __asm { CMP EDX,ECX }
    /* +0x2fa77d */ __asm { JBE 0x7fffa4a6a959 }
    /* +0x2fa783 */ __asm { MOV RDX,0x0 }
    /* +0x2fa78a */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x2fa791 */ __asm { MOVZX ECX,word ptr [RAX + 0x58] }
    /* +0x2fa795 */ __asm { CMP ECX,0x2 }
    /* +0x2fa798 */ __asm { JC 0x7fffa4a6a7bf }
    /* +0x2fa79a */ __asm { MOV RDX,qword ptr [RAX + 0x60] }
    /* +0x2fa79e */ __asm { SHR ECX,0x1 }
    /* +0x2fa7a0 */ __asm { MOV R15D,ECX }
    /* +0x2fa7a3 */ __asm { AND R15D,0x1 }
    /* +0x2fa7a7 */ __asm { CMP CX,0x1 }
    /* +0x2fa7ab */ __asm { JNZ 0x7fffa4a6a7c6 }
    /* +0x2fa7ad */ __asm { MOV RBX,-0x56ac57fd56f4aa33 }
    /* +0x2fa7b7 */ __asm { XOR R14D,R14D }
    /* +0x2fa7ba */ __asm { JMP 0x7fffa4a6a84d }
    /* +0x2fa7bf */ __asm { XOR EDX,EDX }
    /* +0x2fa7c1 */ __asm { JMP 0x7fffa4a6a933 }
    /* +0x2fa7c6 */ __asm { AND ECX,0xfffffffe }
    /* +0x2fa7c9 */ __asm { MOV R13,-0x56ac57fd56f4aa33 }
    /* +0x2fa7d3 */ __asm { XOR R12D,R12D }
    /* +0x2fa7d6 */ __asm { MOV RBX,R11 }
    /* +0x2fa7d9 */ __asm { LEA R14,[R12 + 0x2] }
    /* +0x2fa7de */ __asm { MOVZX EDI,word ptr [RDX + R12*0x2 + 0x2] }
    /* +0x2fa7e4 */ __asm { LEA ESI,[RDI + -0x41] }
    /* +0x2fa7e7 */ __asm { MOV R8D,EDI }
    /* +0x2fa7ea */ __asm { OR R8D,0x20 }
    /* +0x2fa7ee */ __asm { ADD RBX,qword ptr [RBP + 0x108] }
    /* +0x2fa7f5 */ __asm { NOT RBX }
    /* +0x2fa7f8 */ __asm { MOV R9,qword ptr [RBP + 0x1418] }
    /* +0x2fa7ff */ __asm { ADD R9,RBX }
    /* +0x2fa802 */ __asm { ADD R9,0x267fd756 }
    /* +0x2fa809 */ __asm { XOR R9,0x537244c5 }
    /* +0x2fa810 */ __asm { CMP SI,0x1a }
    /* +0x2fa814 */ __asm { CMOVNC R8D,EDI }
    /* +0x2fa818 */ __asm { MOVZX R8D,R8B }
    /* +0x2fa81c */ __asm { MOVZX EBX,word ptr [RDX + R12*0x2] }
    /* +0x2fa821 */ __asm { MOV ESI,EBX }
    /* +0x2fa823 */ __asm { OR ESI,0x20 }
    /* +0x2fa826 */ __asm { LEA EDI,[RBX + -0x41] }
    /* +0x2fa829 */ __asm { CMP DI,0x1a }
    /* +0x2fa82d */ __asm { CMOVNC ESI,EBX }
    /* +0x2fa830 */ __asm { MOVZX EBX,SIL }
    /* +0x2fa834 */ __asm { XOR RBX,R13 }
    /* +0x2fa837 */ __asm { IMUL RBX,R10 }
    /* +0x2fa83b */ __asm { XOR RBX,R8 }
    /* +0x2fa83e */ __asm { IMUL RBX,R9 }
    /* +0x2fa842 */ __asm { MOV R13,RBX }
    /* +0x2fa845 */ __asm { MOV R12,R14 }
    /* +0x2fa848 */ __asm { CMP RCX,R14 }
    /* +0x2fa84b */ __asm { JNZ 0x7fffa4a6a7d6 }
    /* +0x2fa84d */ __asm { MOV ESI,0x4359aef9 }
    /* +0x2fa852 */ __asm { MOV R13D,0xaac06025 }
    /* +0x2fa858 */ __asm { MOV R9,qword ptr [RBP + 0x1498] }
    /* +0x2fa85f */ __asm { ADD R13D,R9D }
    /* +0x2fa862 */ __asm { MOV ECX,0x4a77cfe3 }
    /* +0x2fa867 */ __asm { XOR ECX,R9D }
    /* +0x2fa86a */ __asm { SUB ECX,dword ptr [RBP + 0x108] }
    /* +0x2fa870 */ __asm { IMUL R8D,ECX,-0x3293cda7 }
    /* +0x2fa877 */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2fa87e */ __asm { ADD R8D,ECX }
    /* +0x2fa881 */ __asm { XOR EDI,EDI }
    /* +0x2fa883 */ __asm { CMP R15,R8 }
    /* +0x2fa886 */ __asm { SETZ DIL }
    /* +0x2fa88a */ __asm { XOR ESI,R9D }
    /* +0x2fa88d */ __asm { ROL ESI,0xd }
    /* +0x2fa890 */ __asm { IMUL ESI,dword ptr [RBP + 0x1410] }
    /* +0x2fa897 */ __asm { ROL R13D,0xc }
    /* +0x2fa89b */ __asm { ADD R13D,0x8ce56a32 }
    /* +0x2fa8a2 */ __asm { ROL R13D,CL }
    /* +0x2fa8a5 */ __asm { NOT R13D }
    /* +0x2fa8a8 */ __asm { ROR ESI,CL }
    /* +0x2fa8aa */ __asm { MOVSXD RCX,R13D }
    /* +0x2fa8ad */ __asm { MOVSXD R13,ESI }
    /* +0x2fa8b0 */ __asm { CMP R13,RCX }
    /* +0x2fa8b3 */ __asm { CMOVL R15D,EDI }
    /* +0x2fa8b7 */ __asm { TEST R15B,R15B }
    /* +0x2fa8ba */ __asm { JNZ 0x7fffa4a6a923 }
    /* +0x2fa8bc */ __asm { MOV ECX,0x599a7cb2 }
    /* +0x2fa8c1 */ __asm { MOV R9,qword ptr [RBP + 0x1498] }
    /* +0x2fa8c8 */ __asm { SUB ECX,R9D }
    /* +0x2fa8cb */ __asm { MOVZX EDX,word ptr [RDX + R14*0x2] }
    /* +0x2fa8d0 */ __asm { MOV ESI,EDX }
    /* +0x2fa8d2 */ __asm { OR ESI,0x20 }
    /* +0x2fa8d5 */ __asm { LEA R15D,[RDX + -0x41] }
    /* +0x2fa8d9 */ __asm { CMP R15W,0x1a }
    /* +0x2fa8de */ __asm { CMOVNC ESI,EDX }
    /* +0x2fa8e1 */ __asm { MOVZX EDX,SIL }
    /* +0x2fa8e5 */ __asm { OR ESI,0xff }
    /* +0x2fa8eb */ __asm { ROL ECX,0x1e }
    /* +0x2fa8ee */ __asm { NOT ECX }
    /* +0x2fa8f0 */ __asm { MOV R8,qword ptr [RBP + 0x108] }
    /* +0x2fa8f7 */ __asm { SUB ECX,R8D }
    /* +0x2fa8fa */ __asm { MOV R15D,0x61638de }
    /* +0x2fa900 */ __asm { ADD R15D,R9D }
    /* +0x2fa903 */ __asm { IMUL R15D,R15D,0x7abe96f9 }
    /* +0x2fa90a */ __asm { NOT R15D }
    /* +0x2fa90d */ __asm { ADD R15D,R8D }
    /* +0x2fa910 */ __asm { CMP R15,RCX }
    /* +0x2fa913 */ __asm { CMOVG EDX,ESI }
    /* +0x2fa916 */ __asm { MOVZX ECX,DX }
    /* +0x2fa919 */ __asm { XOR RCX,RBX }
    /* +0x2fa91c */ __asm { IMUL RCX,R10 }
    /* +0x2fa920 */ __asm { MOV RBX,RCX }
    /* +0x2fa923 */ __asm { MOV RCX,0x39cda41577e4d47d }
    /* +0x2fa92d */ __asm { CMP RBX,RCX }
    /* +0x2fa930 */ __asm { SETZ DL }
    /* +0x2fa933 */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2fa93a */ __asm { MOV ECX,dword ptr [RBP + -0x8] }
    /* +0x2fa93d */ __asm { CMP ECX,0x26bd4fb8 }
    /* +0x2fa943 */ __asm { JNC 0x7fffa4a6a961 }
    /* +0x2fa945 */ __asm { TEST DL,DL }
    /* +0x2fa947 */ __asm { JNZ 0x7fffa4a6a96f }
    /* +0x2fa949 */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2fa950 */ __asm { MOV R8D,dword ptr [RBP + -0x8] }
    /* +0x2fa954 */ __asm { JMP 0x7fffa4a6a74a }
    /* +0x2fa959 */ __asm { RET }
    /* +0x2fa961 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2fa966 */ __asm { NOP }
    /* +0x2fa967 */ __asm { NOP }
    /* +0x2fa968 */ __asm { NOP }
    /* +0x2fa969 */ __asm { NOP }
    /* +0x2fa96a */ __asm { NOP }
    /* +0x2fa96b */ __asm { NOP }
    /* +0x2fa96c */ __asm { NOP }
    /* +0x2fa96d */ __asm { NOP }
    /* +0x2fa96e */ __asm { NOP }
    /* +0x2fa96f */ __asm { NOP }
    /* +0x2fa970 */ __asm { NOP }
    /* +0x2fa971 */ __asm { NOP }
    /* +0x2fa972 */ __asm { NOP }
    /* +0x2fa973 */ __asm { NOP }
    /* +0x2fa974 */ __asm { NOP }
    /* +0x2fa975 */ __asm { NOP }
    /* +0x2fa976 */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a6ca60  |  RVA: 0x2fca60  |  Size: 123 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6ca60(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  
  uVar2 = 0xc40710c5 - *(int *)(param_2 + 0x1498);
  (*(code *)((int64_t)(int)((uVar2 * 0x8000000 | uVar2 >> 5) ^ 0x66e9e11f) + 0x7fffa5634fec))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6cae0  |  RVA: 0x2fcae0  |  Size: 234 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6cae0(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    (*(code *)(&UNK_7fffa56916c1 +
              (int)(*(int *)(param_2 + 0x184) * -0x74cccae6 |
                   (uint32_t)(*(int *)(param_2 + 0x184) * 0x45999a8d < 0))))
              (&UNK_7fffa56916c1 +
               (int)(*(int *)(param_2 + 0x184) * -0x74cccae6 |
                    (uint32_t)(*(int *)(param_2 + 0x184) * 0x45999a8d < 0)),param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6cbd0  |  RVA: 0x2fcbd0  |  Size: 234 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6cbd0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    pcVar1 = (code *)((int64_t)(int)(0xf9c9e3a - (*(uint32_t *)(param_2 + 0x1498) ^ 0xaeb7d3a8)) +
                     0x7fffa5693ef0);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6ccc0  |  RVA: 0x2fccc0  |  Size: 852 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4a6ccc0(void) {
    /* +0x2fccc0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x2fccc5 */ __asm { PUSH RBP }
    /* +0x2fccc6 */ __asm { PUSH RSI }
    /* +0x2fccc7 */ __asm { PUSH RBX }
    /* +0x2fccc8 */ __asm { PUSH RDI }
    /* +0x2fccc9 */ __asm { PUSH R12 }
    /* +0x2fcccb */ __asm { PUSH R13 }
    /* +0x2fcccd */ __asm { PUSH R15 }
    /* +0x2fcccf */ __asm { PUSH R14 }
    /* +0x2fccd1 */ __asm { SUB RSP,0xc8 }
    /* +0x2fccd8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x2fccdf */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0x2fcce6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0x2fccec */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM12 }
    /* +0x2fccf6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM9 }
    /* +0x2fcd00 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM14 }
    /* +0x2fcd0a */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM7 }
    /* +0x2fcd13 */ __asm { CMP qword ptr [RBP + 0xf0],0x0 }
    /* +0x2fcd1b */ __asm { JZ 0x7fffa4a6cdbd }
    /* +0x2fcd21 */ __asm { MOV R10W,0xf60e }
    /* +0x2fcd26 */ __asm { IMUL R10D,R10D,-0x181d }
    /* +0x2fcd2d */ __asm { LEA R8,[0x7fffa47bd085] }
    /* +0x2fcd34 */ __asm { LEA RAX,[0x7fffa47c0992] }
    /* +0x2fcd3b */ __asm { MOV R11W,0x5e75 }
    /* +0x2fcd40 */ __asm { ADD R11D,0xffffbc42 }
    /* +0x2fcd47 */ __asm { XOR R11D,0x2362 }
    /* +0x2fcd4e */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2fcd55 */ __asm { ROR R10W,CL }
    /* +0x2fcd59 */ __asm { LEA RDX,[0x7fffa47c7386] }
    /* +0x2fcd60 */ __asm { ADD R11D,ECX }
    /* +0x2fcd63 */ __asm { MOVSX R9,R11W }
    /* +0x2fcd67 */ __asm { MOV R11D,0x670bade }
    /* +0x2fcd6d */ __asm { SUB R11D,ECX }
    /* +0x2fcd70 */ __asm { ADD R11D,0x32388bfc }
    /* +0x2fcd77 */ __asm { MOVZX R8D,uint8_t ptr [R8 + R9*0x1 + 0x9] }
    /* +0x2fcd7d */ __asm { MOVSX R9,R10W }
    /* +0x2fcd81 */ __asm { ADD R9,RAX }
    /* +0x2fcd84 */ __asm { MOV RAX,qword ptr [R9 + R8*0x8 + 0x13] }
    /* +0x2fcd89 */ __asm { MOVSXD R10,R11D }
    /* +0x2fcd8c */ __asm { XOR R10,0x6881d9ae }
    /* +0x2fcd93 */ __asm { XOR RAX,qword ptr [RDX + R10*0x1 + 0x52] }
    /* +0x2fcd98 */ __asm { MOVQ XMM2,RAX }
    /* +0x2fcd9d */ __asm { PCMPEQD XMM4,XMM4 }
    /* +0x2fcda1 */ __asm { PXOR XMM4,XMM2 }
    /* +0x2fcda5 */ __asm { MOVQ qword ptr [RBP + -0x8],XMM4 }
    /* +0x2fcdaa */ __asm { MOV R8,qword ptr [RBP + -0x8] }
    /* +0x2fcdae */ __asm { TEST R8,R8 }
    /* +0x2fcdb1 */ __asm { JZ 0x7fffa4a6ce05 }
    /* +0x2fcdb3 */ __asm { MOV RCX,qword ptr [RBP + 0xf0] }
    /* +0x2fcdba */ __asm { CALL R8 }
    /* +0x2fcdbd */ __asm { MOVDQA XMM7,xmmword ptr [RSP + 0xb0] }
    /* +0x2fcdc6 */ __asm { MOVDQA XMM14,xmmword ptr [RSP + 0xa0] }
    /* +0x2fcdd0 */ __asm { MOVDQA XMM9,xmmword ptr [RSP + 0x90] }
    /* +0x2fcdda */ __asm { MOVDQA XMM12,xmmword ptr [RSP + 0x80] }
    /* +0x2fcde4 */ __asm { MOVDQA XMM6,xmmword ptr [RSP + 0x70] }
    /* +0x2fcdea */ __asm { MOVDQA XMM13,xmmword ptr [RSP + 0x60] }
    /* +0x2fcdf1 */ __asm { ADD RSP,0xc8 }
    /* +0x2fcdf8 */ __asm { POP R14 }
    /* +0x2fcdfa */ __asm { POP R15 }
    /* +0x2fcdfc */ __asm { POP R13 }
    /* +0x2fcdfe */ __asm { POP R12 }
    /* +0x2fce00 */ __asm { POP RDI }
    /* +0x2fce01 */ __asm { POP RBX }
    /* +0x2fce02 */ __asm { POP RSI }
    /* +0x2fce03 */ __asm { POP RBP }
    /* +0x2fce04 */ __asm { RET }
    /* +0x2fce05 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x2fce0c */ __asm { NOP }
    /* +0x2fce0d */ __asm { MOV RAX,0x0 }
    /* +0x2fce14 */ __asm { MOV R10W,0xb6ba }
    /* +0x2fce19 */ __asm { SUB R10D,dword ptr [RBP + 0x1418] }
    /* +0x2fce20 */ __asm { IMUL R10D,R10D,0x3919 }
    /* +0x2fce27 */ __asm { ADD R10D,0xffff8338 }
    /* +0x2fce2e */ __asm { MOVZX R8D,R10W }
    /* +0x2fce32 */ __asm { MOV RAX,qword ptr GS:[R8] }
    /* +0x2fce36 */ __asm { MOV R10W,0xc328 }
    /* +0x2fce3b */ __asm { MOV R8D,0x6f98 }
    /* +0x2fce41 */ __asm { SUB R8D,R10D }
    /* +0x2fce44 */ __asm { IMUL R10D,R8D,0x74e5 }
    /* +0x2fce4b */ __asm { MOVZX R8D,R10W }
    /* +0x2fce4f */ __asm { MOV RCX,qword ptr GS:[R8] }
    /* +0x2fce53 */ __asm { MOV R8,0x6de75e5538dd497 }
    /* +0x2fce5d */ __asm { CMP qword ptr [RCX + 0x60],R8 }
    /* +0x2fce61 */ __asm { NOP }
    /* +0x2fce62 */ __asm { NOP }
    /* +0x2fce63 */ __asm { NOP }
    /* +0x2fce64 */ __asm { NOP }
    /* +0x2fce65 */ __asm { NOP }
    /* +0x2fce66 */ __asm { MOV RAX,qword ptr [RAX + 0x18] }
    /* +0x2fce6a */ __asm { PUSHFQ }
    /* +0x2fce6b */ __asm { POP R8 }
    /* +0x2fce6d */ __asm { MOV qword ptr [RBP + 0x12c8],R8 }
    /* +0x2fce74 */ __asm { TEST R8D,0x100 }
    /* +0x2fce7b */ __asm { NOP }
    /* +0x2fce7c */ __asm { NOP }
    /* +0x2fce7d */ __asm { NOP }
    /* +0x2fce7e */ __asm { NOP }
    /* +0x2fce7f */ __asm { NOP }
    /* +0x2fce80 */ __asm { MOV dword ptr [RBP + -0x8],0x656c32dd }
    /* +0x2fce87 */ __asm { MOV R10D,dword ptr [RBP + -0x8] }
    /* +0x2fce8b */ __asm { TEST R10D,R10D }
    /* +0x2fce8e */ __asm { NOP }
    /* +0x2fce8f */ __asm { NOP }
    /* +0x2fce90 */ __asm { NOP }
    /* +0x2fce91 */ __asm { NOP }
    /* +0x2fce92 */ __asm { NOP }
    /* +0x2fce93 */ __asm { ADD RAX,0x10 }
    /* +0x2fce97 */ __asm { MOV R8,-0x56ac57fd56f4aa33 }
    /* +0x2fcea1 */ __asm { MOV R9,0x39cda41577e4d47d }
    /* +0x2fceab */ __asm { MOV R10,0x10000000014b }
    /* +0x2fceb5 */ __asm { MOV RAX,qword ptr [RAX] }
    /* +0x2fceb8 */ __asm { PUSHFQ }
    /* +0x2fceb9 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x2fcec1 */ __asm { POPFQ }
    /* +0x2fcec2 */ __asm { MOV dword ptr [RBP + -0x8],0xfe012e70 }
    /* +0x2fcec9 */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x2fcecd */ __asm { CMP R11D,0xfcebf0f4 }
    /* +0x2fced4 */ __asm { JBE 0x7fffa4a6cffd }
    /* +0x2fceda */ __asm { MOVZX R11D,word ptr [RAX + 0x58] }
    /* +0x2fcedf */ __asm { CMP R11D,0x2 }
    /* +0x2fcee3 */ __asm { JC 0x7fffa4a6cf3c }
    /* +0x2fcee5 */ __asm { SHR R11D,0x1 }
    /* +0x2fcee8 */ __asm { MOV RDX,qword ptr [RAX + 0x60] }
    /* +0x2fceec */ __asm { MOV RCX,0x0 }
    /* +0x2fcef3 */ __asm { LEA R13,[0x7fffa4770000] }
    /* +0x2fcefa */ __asm { NOP }
    /* +0x2fcefb */ __asm { CMP R11W,0x1 }
    /* +0x2fcf00 */ __asm { JNZ 0x7fffa4a6cf6e }
    /* +0x2fcf02 */ __asm { MOV RBX,R8 }
    /* +0x2fcf05 */ __asm { XOR R14D,R14D }
    /* +0x2fcf08 */ __asm { TEST R11B,0x1 }
    /* +0x2fcf0c */ __asm { JZ 0x7fffa4a6cf33 }
    /* +0x2fcf0e */ __asm { MOVZX R11D,word ptr [RDX + R14*0x2] }
    /* +0x2fcf13 */ __asm { MOV EDX,R11D }
    /* +0x2fcf16 */ __asm { OR EDX,0x20 }
    /* +0x2fcf19 */ __asm { LEA ECX,[R11 + -0x41] }
    /* +0x2fcf1d */ __asm { CMP CX,0x1a }
    /* +0x2fcf21 */ __asm { CMOVNC EDX,R11D }
    /* +0x2fcf25 */ __asm { MOVZX R11D,DL }
    /* +0x2fcf29 */ __asm { XOR R11,RBX }
    /* +0x2fcf2c */ __asm { IMUL R11,R10 }
    /* +0x2fcf30 */ __asm { MOV RBX,R11 }
    /* +0x2fcf33 */ __asm { CMP RBX,R9 }
    /* +0x2fcf36 */ __asm { SETZ R11B }
    /* +0x2fcf3a */ __asm { JMP 0x7fffa4a6cf3f }
    /* +0x2fcf3c */ __asm { XOR R11D,R11D }
    /* +0x2fcf3f */ __asm { MOV dword ptr [RBP + -0x8],0x275bfaa }
    /* +0x2fcf46 */ __asm { MOV EDX,dword ptr [RBP + -0x8] }
    /* +0x2fcf49 */ __asm { CMP EDX,0x26bd4fb8 }
    /* +0x2fcf4f */ __asm { JNC 0x7fffa4a6d005 }
    /* +0x2fcf55 */ __asm { TEST R11B,R11B }
    /* +0x2fcf58 */ __asm { JNZ 0x7fffa4a6d018 }
    /* +0x2fcf5e */ __asm { MOV dword ptr [RBP + -0x8],0xb7a0a379 }
    /* +0x2fcf65 */ __asm { MOV R11D,dword ptr [RBP + -0x8] }
    /* +0x2fcf69 */ __asm { JMP 0x7fffa4a6ceb5 }
    /* +0x2fcf6e */ __asm { NOP }
    /* +0x2fcf6f */ __asm { MOV RCX,0x0 }
    /* +0x2fcf76 */ __asm { LEA R13,[0x7fffa4770000] }
    /* +0x2fcf7d */ __asm { MOV R15D,R11D }
    /* +0x2fcf80 */ __asm { AND R15D,0xfffffffe }
    /* +0x2fcf84 */ __asm { MOV R14D,0x2 }
    /* +0x2fcf8a */ __asm { MOV RBX,R8 }
    /* +0x2fcf8d */ __asm { MOV SI,0x3598 }
    /* +0x2fcf91 */ __asm { ADD ESI,0xffff9c68 }
    /* +0x2fcf97 */ __asm { MOVZX ECX,word ptr [RDX + R14*0x2 + -0x4] }
    /* +0x2fcf9d */ __asm { MOV R13D,ECX }
    /* +0x2fcfa0 */ __asm { OR R13D,0x20 }
    /* +0x2fcfa4 */ __asm { LEA EDI,[RCX + -0x41] }
    /* +0x2fcfa7 */ __asm { CMP DI,0x1a }
    /* +0x2fcfab */ __asm { CMOVNC R13D,ECX }
    /* +0x2fcfaf */ __asm { MOVZX EDI,word ptr [RDX + R14*0x2 + -0x2] }
    /* +0x2fcfb5 */ __asm { MOV R12D,EDI }
    /* +0x2fcfb8 */ __asm { OR R12D,0x20 }
    /* +0x2fcfbc */ __asm { MOV RCX,qword ptr [RBP + 0x1418] }
    /* +0x2fcfc3 */ __asm { ROR SI,CL }
    /* +0x2fcfc6 */ __asm { ADD ESI,0xffffcb9a }
    /* +0x2fcfcc */ __asm { MOVZX ECX,R13B }
    /* +0x2fcfd0 */ __asm { XOR RCX,RBX }
    /* +0x2fcfd3 */ __asm { IMUL RCX,R10 }
    /* +0x2fcfd7 */ __asm { LEA R13D,[RDI + -0x41] }
    /* +0x2fcfdb */ __asm { CMP R13W,SI }
    /* +0x2fcfdf */ __asm { CMOVNC R12D,EDI }
    /* +0x2fcfe3 */ __asm { MOVZX EBX,R12B }
    /* +0x2fcfe7 */ __asm { XOR RBX,RCX }
    /* +0x2fcfea */ __asm { IMUL RBX,R10 }
    /* +0x2fcfee */ __asm { CMP R15,R14 }
    /* +0x2fcff1 */ __asm { JZ 0x7fffa4a6cf08 }
    /* +0x2fcff7 */ __asm { ADD R14,0x2 }
    /* +0x2fcffb */ __asm { JMP 0x7fffa4a6cf8d }
    /* +0x2fcffd */ __asm { RET }
    /* +0x2fd005 */ __asm { MOV ESI,0xee4d1cec }
    /* +0x2fd00a */ __asm { NOP }
    /* +0x2fd00b */ __asm { NOP }
    /* +0x2fd00c */ __asm { NOP }
    /* +0x2fd00d */ __asm { NOP }
    /* +0x2fd00e */ __asm { NOP }
    /* +0x2fd00f */ __asm { NOP }
    /* +0x2fd010 */ __asm { NOP }
    /* +0x2fd011 */ __asm { NOP }
    /* +0x2fd012 */ __asm { NOP }
    /* +0x2fd013 */ __asm { NOP }
    /* +0x2fd014 */ __asm { NOP }
    /* +0x2fd015 */ __asm { NOP }
    /* +0x2fd016 */ __asm { NOP }
    /* +0x2fd017 */ __asm { NOP }
    /* +0x2fd018 */ __asm { NOP }
    /* +0x2fd019 */ __asm { NOP }
    /* +0x2fd01a */ __asm { NOP }
}


// ============================================================================
// Function : Unwind@7fffa4a6e890  |  RVA: 0x2fe890  |  Size: 239 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6e890(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    iVar2 = (int)*(uint64_t *)(param_2 + 0x1498) + 0x5ed4d4a0;
    pcVar1 = (code *)((int64_t)(int)(iVar2 * 2 | (uint32_t)(iVar2 < 0)) + 0x7fffa5696c4b);
    (*pcVar1)(pcVar1,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6e980  |  RVA: 0x2fe980  |  Size: 269 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6e980(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x268)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1518) & 0x1f;
    pcVar2 = (code *)((int64_t)
                      (int)((-0x2f6af7e6 << bVar1 | 0xd095081aU >> 0x20 - bVar1) -
                           (int)*(uint64_t *)(param_2 + 0x1498)) + 0x7fffa5691f4d);
    (*pcVar2)(pcVar2,0,*(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6ea90  |  RVA: 0x2fea90  |  Size: 242 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6ea90(uint64_t param_1,int64_t param_2)

{
  uint16_t uVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    uVar1 = (uint16_t)*(uint64_t *)(param_2 + 0x1498) ^ 0xf15d;
    (*(code *)((int64_t)(short)(uVar1 << 6 | uVar1 >> 10) + 0x7fffa568f860))
              (0x7fffa568f860,param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6eb90  |  RVA: 0x2feb90  |  Size: 245 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6eb90(uint64_t param_1,int64_t param_2)

{
  if (0xf < *(uint64_t *)(param_2 + 0x13b8)) {
    (*(code *)((int64_t)~(*(int *)(param_2 + 0x184) * 0x59ab1098) + 0x7fffa5692579))
              (0x7fffa5692579,param_2,
               *(uint64_t *)(param_2 + 0x13a0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13a0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6ec90  |  RVA: 0x2fec90  |  Size: 305 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6ec90(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  
  if ((uint64_t)
      ((*(int *)(param_2 + 0x184) * -0x5f0a8000 |
       (uint32_t)(*(int *)(param_2 + 0x184) * 0x14be83d6) >> 0x12) * -0x7282c03b) <
      *(uint64_t *)(param_2 + 0x268)) {
    uVar1 = *(uint64_t *)(param_2 + 0x250);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1498) & 0x1f;
    uVar3 = *(int *)(param_2 + 0x184) * 0x40000000 |
            (uint32_t)(*(int *)(param_2 + 0x184) * 0x3b179a10) >> 6;
    uVar4 = uVar1 ^ 0x3d;
    if ((0xc62a0542U >> bVar2 | -0x39d5fabe << 0x20 - bVar2) != uVar3) {
      uVar4 = uVar1 >> 0x3d;
    }
    FUN_7fffa5687c30(FUN_7fffa5687c30,uVar3,uVar4 ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4a6edd0  |  RVA: 0x2fedd0  |  Size: 120 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4a6edd0(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)((int64_t)(*(int *)(param_2 + 0x184) * 0x58f86725 + 0x46451dc2) + 0x7fffa562e61f))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}

