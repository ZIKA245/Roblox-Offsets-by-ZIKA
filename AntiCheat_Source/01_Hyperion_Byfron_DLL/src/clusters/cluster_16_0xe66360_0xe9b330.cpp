// Subsystem: Internal Routines Cluster 16 (0xe66360 .. 0xe9b330)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : Unwind@7fffa55d6360  |  RVA: 0xe66360  |  Size: 54 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55d6360(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  (*(code *)(&UNK_7fffa5632fdf + (int)((*(uint32_t *)(param_2 + 0x50) ^ 0x80c6572a) * -0x29a3d02f)))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa55d63a0  |  RVA: 0xe663a0  |  Size: 18 bytes
// Callers  : FUN_7fffa507cf70@0x90cf70, FUN_7fffa54037a0@0xc937a0, FUN_7fffa4ab2700@0x342700, FUN_7fffa507ae2a@0x90ae2a, FUN_7fffa515589b@0x9e589b, FUN_7fffa5687890@0xf17890, FUN_7fffa56a0310@0xf30310, FUN_7fffa517b810@0xa0b810
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
uint64_t FUN_7fffa55d63a0(void)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa54539d0();
  return *(uint64_t *)(lVar1 + 0x60);
}


// ============================================================================
// Function : FUN_7fffa55d63c0  |  RVA: 0xe663c0  |  Size: 78 bytes
// Callers  : none
// Callees  : FUN_7fffa5181690@0xa11690, FUN_7fffa569aae0@0xf2aae0
// ============================================================================
uint64_t * FUN_7fffa55d63c0(uint64_t param_1,uint64_t *param_2,uint32_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = FUN_7fffa569aae0(param_3);
  lVar2 = -1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  FUN_7fffa5181690(param_2,lVar1);
  return param_2;
}


// ============================================================================
// Function : FUN_7fffa55d6410  |  RVA: 0xe66410  |  Size: 289 bytes
// Callers  : FUN_7fffa56084d0@0xe984d0
// Callees  : FUN_7fffa569ad70@0xf2ad70, FUN_7fffa564c5c0@0xedc5c0, FUN_7fffa51817f8@0xa117f8, FUN_7fffa5488850@0xd18850, FUN_7fffa52d9094@0xb69094
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa55d6410(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint8_t auStack_2a8 [32];
  uint8_t auStack_288 [8];
  int64_t lStack_280;
  int64_t lStack_278;
  char cStack_268;
  uint64_t uStack_260;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  uint64_t uStack_240;
  uint8_t uStack_238;
  uint8_t auStack_228 [528];
  uint64_t uStack_18;
  
  uStack_18 = _DAT_7fffa4780040 ^ (uint64_t)auStack_2a8;
  iVar1 = (*(code *)&DAT_7ff84ea3c730)(param_1,auStack_228,0x105);
  if (iVar1 == 0) {
    uVar2 = (*(code *)&DAT_7ff84ea18640)();
    FUN_7fffa51817f8(uVar2);
  }
  else {
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_260 = param_2;
    uStack_258 = param_3 & 0xffffffff;
    uStack_250 = param_2;
    uStack_248 = param_3 & 0xffffffff;
    FUN_7fffa564c5c0(&lStack_280,0);
    uVar3 = 0xfde9;
    if (*(int *)(lStack_278 + 0xc) == 0xfde9) {
      if (cStack_268 != '\0') {
        *(uint32_t *)(lStack_280 + 0x3a8) = *(uint32_t *)(lStack_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar1 = FUN_7fffa52d9094();
      if (iVar1 == 0) {
        if (cStack_268 != '\0') {
          *(uint32_t *)(lStack_280 + 0x3a8) = *(uint32_t *)(lStack_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (cStack_268 != '\0') {
          *(uint32_t *)(lStack_280 + 0x3a8) = *(uint32_t *)(lStack_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_7fffa569ad70(auStack_228,&uStack_260,auStack_288,uVar3);
  }
  FUN_7fffa5488850(uStack_18 ^ (uint64_t)auStack_2a8);
  return;
}


// ============================================================================
// Function : FUN_7fffa55d6540  |  RVA: 0xe66540  |  Size: 1723 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55d6540(uint64_t param_1,uint32_t param_2)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint8_t bVar4;
  uint16_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint16_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t in_RAX;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  code *pcVar15;
  uint8_t *pbVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint64_t *puVar19;
  int64_t lVar20;
  int64_t lVar21;
  char *pcVar22;
  uint64_t uVar23;
  int64_t lVar24;
  char *pcVar25;
  int64_t lVar26;
  bool bVar27;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  
  bVar4 = (uint8_t)param_2 & 0x1f;
  uVar12 = (in_RAX << 0x33 | in_RAX >> 0xd) ^ (in_RAX << 0x1c | in_RAX >> 0x24) ^ in_RAX;
  uVar13 = uVar12 << 0x26 | uVar12 >> 0x1a;
  uVar23 = *(uint64_t *)
            ((int64_t)(int)(0xdffffde7U >> bVar4 | -0x20000219 << 0x20 - bVar4) + 0x7fffa47c58a9);
  uVar14 = uVar13 ^ uVar12;
  if ((int64_t)(uint64_t)(param_2 ^ 0x8e353b05) < (int64_t)(int)(param_2 ^ 0x59507c4b)) {
    uVar14 = uVar12 * uVar13;
  }
  uVar14 = uVar14 ^ (uVar12 << 0x38 | uVar12 >> 8);
  uVar14 = (uVar14 << 0xc | uVar14 >> 0x34) ^ (uVar14 << 0x30 | uVar14 >> 0x10) ^ uVar14;
  uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) ^ (uVar14 << 0x18 | uVar14 >> 0x28) ^ uVar14;
  uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) * 0x3caf32c2a6790577;
  uVar14 = (uVar14 << 0x25 | uVar14 >> 0x1b) ^ (uVar14 << 0x2e | uVar14 >> 0x12) ^ uVar14;
  uVar14 = (uVar14 << 0x1c | uVar14 >> 0x24) ^ (uVar14 << 10 | uVar14 >> 0x36) ^ uVar14;
  uVar14 = (uVar14 << 0x14 | uVar14 >> 0x2c) ^ (uVar14 << 0x38 | uVar14 >> 8) ^ uVar14;
  uVar14 = (uVar14 << 0x30 | uVar14 >> 0x10) ^ (uVar14 << 0x28 | uVar14 >> 0x18) ^ uVar14;
  uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ (uVar14 << 0x20 | uVar14 >> 0x20) ^ uVar14;
  pbVar16 = (uint8_t *)(uVar14 << 0x20 | uVar14 >> 0x20);
  uVar8 = (uint16_t)param_2;
  if (uVar23 == 0) goto LAB_7fffa55d6acf;
  pcVar25 = *(char **)((int64_t)(short)(uVar8 + 0xc21e) + 0x7fffa47c4e00);
  lVar20 = *(int64_t *)
            ((int64_t)(int)((param_2 ^ 0x38623d97) << 0xb | (param_2 ^ 0x38623d97) >> 0x15) +
            0x7fffa47c638f) * 0x10;
  if (pcVar25 == pcVar25 + lVar20 + 0x10) {
    lVar24 = 0;
  }
  else {
    lVar24 = 0;
    uVar17 = param_2 | 1;
    pcVar22 = pcVar25;
    do {
      auVar28[0] = -(*pcVar22 == '\0');
      auVar28[1] = -(pcVar22[1] == '\0');
      auVar28[2] = -(pcVar22[2] == '\0');
      auVar28[3] = -(pcVar22[3] == '\0');
      auVar28[4] = -(pcVar22[4] == '\0');
      auVar28[5] = -(pcVar22[5] == '\0');
      auVar28[6] = -(pcVar22[6] == '\0');
      auVar28[7] = -(pcVar22[7] == '\0');
      auVar28[8] = -(pcVar22[8] == '\0');
      auVar28[9] = -(pcVar22[9] == '\0');
      auVar28[10] = -(pcVar22[10] == '\0');
      auVar28[0xb] = -(pcVar22[0xb] == '\0');
      auVar28[0xc] = -(pcVar22[0xc] == '\0');
      auVar28[0xd] = -(pcVar22[0xd] == '\0');
      auVar28[0xe] = -(pcVar22[0xe] == '\0');
      auVar28[0xf] = -(pcVar22[0xf] == '\0');
      uVar6 = ((uint16_t)((uint16_t)(SUB161(auVar28 >> 7,0) & 1) |
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
              ((uint32_t)(pcVar22 != pcVar25 + lVar20) << 0xe | 0x3fff);
      while (uVar6 != 0) {
        uVar18 = 0;
        for (uVar7 = uVar6; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar13 = (uint64_t)uVar18;
        puVar19 = *(uint64_t **)(uVar23 + uVar13 * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (*puVar19 >> 3) + *puVar19;
        uVar12 = SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),8) ^
                 SUB168(auVar3 * ZEXT816(0x9e3779b97f4a7c15),0);
        uVar14 = uVar12 >> (*pbVar16 & 0x3f);
        lVar21 = *(int64_t *)(pbVar16 + 0x10) + uVar14 * 0x10;
        pcVar1 = (char *)(*(int64_t *)(pbVar16 + 0x10) + uVar14 * 0x10);
        auVar29[0] = -(*pcVar1 == '\0');
        auVar29[1] = -(pcVar1[1] == '\0');
        auVar29[2] = -(pcVar1[2] == '\0');
        auVar29[3] = -(pcVar1[3] == '\0');
        auVar29[4] = -(pcVar1[4] == '\0');
        auVar29[5] = -(pcVar1[5] == '\0');
        auVar29[6] = -(pcVar1[6] == '\0');
        auVar29[7] = -(pcVar1[7] == '\0');
        auVar29[8] = -(pcVar1[8] == '\0');
        auVar29[9] = -(pcVar1[9] == '\0');
        auVar29[10] = -(pcVar1[10] == '\0');
        auVar29[0xb] = -(pcVar1[0xb] == '\0');
        auVar29[0xc] = -(pcVar1[0xc] == '\0');
        auVar29[0xd] = -(pcVar1[0xd] == '\0');
        auVar29[0xe] = -(pcVar1[0xe] == '\0');
        auVar29[0xf] = -(pcVar1[0xf] == '\0');
        uVar18 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar29 >> 7,0) & 1) |
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
                               (uint16_t)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe);
        if (uVar18 == 0) {
          lVar26 = 1;
          do {
            *(uint8_t *)(lVar21 + 0xf) = *(uint8_t *)(lVar21 + 0xf) | '\x01' << ((uint8_t)uVar12 & 7);
            uVar14 = uVar14 + lVar26 & *(uint64_t *)(pbVar16 + 8);
            lVar21 = *(int64_t *)(pbVar16 + 0x10) + uVar14 * 0x10;
            pcVar1 = (char *)(*(int64_t *)(pbVar16 + 0x10) + uVar14 * 0x10);
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
            uVar5 = (uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
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
                    (uint16_t)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe;
            uVar18 = (uint32_t)uVar5;
            lVar26 = lVar26 + 1;
          } while ((uint16_t)((uVar8 | 1) * 0x334d ^ uVar5) == 0xffff);
          puVar19 = *(uint64_t **)(uVar23 + uVar13 * 8);
        }
        uVar7 = 0;
        for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar2 = (&UNK_7fffa583c6bc)
                [(uVar12 & 0xff) * 4 +
                 (int64_t)(int)((param_2 ^ 0x27a0e3e9) << 0x1e | (param_2 ^ 0x27a0e3e9) >> 2)];
        *(uint64_t **)(uVar14 * 0x78 + *(int64_t *)(pbVar16 + 0x18) + (uint64_t)uVar7 * 8) =
             puVar19;
        *(uint64_t *)(uVar23 + uVar13 * 8) = 0;
        *(uint8_t *)(lVar21 + (uint64_t)uVar7) = uVar2;
        uVar14 = *(uint64_t *)(uVar23 + uVar13 * 8);
        if (uVar14 != 0) {
          pcVar15 = (code *)((int64_t)(int)(uVar17 * -0x60000000 | uVar17 * 0x34e6f53d >> 3) +
                            0x7fffa5695a67);
          (*pcVar15)(param_2,pcVar15,uVar14 >> 0x3d ^ uVar14);
        }
        lVar24 = lVar24 + 1;
        uVar18 = uVar6 - 1 & uVar6;
        uVar6 = uVar6 - 1 | uVar6;
        if (uVar17 * 0x4a1609e == -0x11d8d816) {
          uVar6 = uVar18;
        }
      }
      uVar23 = uVar23 + 0x78;
      bVar27 = pcVar22 != pcVar25 + lVar20;
      pcVar22 = pcVar22 + 0x10;
    } while (bVar27);
    uVar17 = (param_2 + 0x2afe4fd5) * -0x4486183d;
    uVar23 = *(uint64_t *)
              ((int64_t)(int)(uVar17 >> 1 | (uint32_t)((uVar17 & 1) != 0) << 0x1f) + 0x7fffa47cb50a);
  }
  if (lVar24 == lRam00007fffa47bd2b0) {
LAB_7fffa55d6a83:
    if (uVar23 == 0) goto LAB_7fffa55d6acf;
  }
  else {
    if (uVar23 == 0) goto LAB_7fffa55d6acf;
    pcVar25 = *(char **)((int64_t)(short)(uVar8 - 0xd53) + 0x7fffa47c1d71);
    if (pcVar25 != pcVar25 + lRam00007fffa47bd290 * 0x10 + 0x10) {
      pcVar22 = pcVar25 + lRam00007fffa47bd290 * 0x10;
      uVar14 = uVar23;
      while( true ) {
        auVar31[0] = -(*pcVar25 == '\0');
        auVar31[1] = -(pcVar25[1] == '\0');
        auVar31[2] = -(pcVar25[2] == '\0');
        auVar31[3] = -(pcVar25[3] == '\0');
        auVar31[4] = -(pcVar25[4] == '\0');
        auVar31[5] = -(pcVar25[5] == '\0');
        auVar31[6] = -(pcVar25[6] == '\0');
        auVar31[7] = -(pcVar25[7] == '\0');
        auVar31[8] = -(pcVar25[8] == '\0');
        auVar31[9] = -(pcVar25[9] == '\0');
        auVar31[10] = -(pcVar25[10] == '\0');
        auVar31[0xb] = -(pcVar25[0xb] == '\0');
        auVar31[0xc] = -(pcVar25[0xc] == '\0');
        auVar31[0xd] = -(pcVar25[0xd] == '\0');
        auVar31[0xe] = -(pcVar25[0xe] == '\0');
        auVar31[0xf] = -(pcVar25[0xf] == '\0');
        uVar23 = uRam00007fffa47bd2a0;
        for (uVar17 = ((uint16_t)((uint16_t)(SUB161(auVar31 >> 7,0) & 1) |
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
                               (uint16_t)(auVar31[0xf] >> 7) << 0xf) ^ 0x7fff) &
                      ((uint32_t)(pcVar25 != pcVar22) << 0xe | 0x3fff); uRam00007fffa47bd2a0 = uVar23,
            uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
          uVar6 = 0;
          for (uVar18 = uVar17; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          if (*(int64_t *)(uVar14 + (uint64_t)uVar6 * 8) != 0) {
            (*(code *)((int64_t)(short)((uVar8 + 0x7d04) * 4 | (uint16_t)(uVar8 + 0x7d04) >> 0xe) +
                      0x7fffa5687e38))();
          }
          uVar23 = uRam00007fffa47bd2a0;
        }
        if (pcVar25 == pcVar22) break;
        pcVar25 = pcVar25 + 0x10;
        uVar14 = uVar14 + 0x78;
      }
      goto LAB_7fffa55d6a83;
    }
  }
  (*(code *)((int64_t)
             (int)((param_2 ^ 0x27a37693) >> 1 | (uint32_t)(((param_2 ^ 0x27a37693) & 1) != 0) << 0x1f)
            + 0x7fffa56921bc))(0,&IMAGE_DOS_HEADER_7fffa4770000,uVar23 >> 0x3d ^ uVar23);
LAB_7fffa55d6acf:
  lVar20 = (int64_t)(int)((param_2 + 0x27948a25) * 0x10000000 | param_2 + 0x27948a25 >> 4);
  uVar9 = *(uint64_t *)pbVar16;
  uVar10 = *(uint64_t *)(pbVar16 + 8);
  uVar11 = *(uint64_t *)(pbVar16 + 0x18);
  *(uint64_t *)(lVar20 + 0x7fffa47cadcf) = *(uint64_t *)(pbVar16 + 0x10);
  *(uint64_t *)(lVar20 + 0x7fffa47cadd7) = uVar11;
  *(uint64_t *)(lVar20 + 0x7fffa47cadbf) = uVar9;
  *(uint64_t *)(lVar20 + 0x7fffa47cadc7) = uVar10;
  uVar23 = 0;
  if ((*(int64_t *)(((int64_t)(int)(param_2 + 0xda2305d0) ^ 0x4d7fadccU) + 0x7fffa47c6d1a) == 0)
      == (((0xfc15d08b - param_2) * 0x800000 | 0xfc15d08b - param_2 >> 9) == 0x4f709cee)) {
    uVar23 = *(int64_t *)
              ((int64_t)(short)((0xb343 - uVar8) * 4 | (uint16_t)(0xb343 - uVar8) >> 0xe) +
              0x7fffa47c0f69) * 0xf + 0xe;
  }
  uVar14 = (uint64_t)((float)uVar23 * 0.875);
  uVar14 = (int64_t)((float)uVar23 * 0.875 - 9.223372e+18) & (int64_t)uVar14 >> 0x3f | uVar14;
  if (uVar23 < 0x1e) {
    uVar14 = uVar23;
  }
  *(uint64_t *)((int64_t)(short)(uVar8 ^ 0x2fe1) + 0x7fffa47be50d) = uVar14;
  return;
}


// ============================================================================
// Function : FUN_7fffa55d6c10  |  RVA: 0xe66c10  |  Size: 623 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55d6c10(void)

{
  uint8_t bVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint32_t uVar4;
  
  uRam00007fffa478524d = 0;
  uRam00007fffa4785278 = 0;
  uRam00007fffa4785280 = 0;
  uRam00007fffa4785268 = 0;
  uRam00007fffa4785270 = 0;
  uRam00007fffa4785258 = 0;
  uRam00007fffa4785260 = 0;
  uRam00007fffa4785288 = 0;
  uRam00007fffa478529e = 0;
  uVar2 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)(uVar2 >> 0x20)) << 0x20 | uVar2 & 0xffffffff) * 0x77c2c9d6ac2937b +
          0xb;
  uVar2 = 0;
  while( true ) {
    lVar3 = lVar3 * 0x77c2c9d6ac2937b + 0xb;
    *(char *)(uVar2 + 0x7fffa4785248) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x77c2c9d6ac2937b + 0xb;
    *(char *)(uVar2 + 0x7fffa4785249) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar3 * 0x77c2c9d6ac2937b + 0xb;
    *(char *)(uVar2 + 0x7fffa478524a) = (char)((uint64_t)lVar3 >> 0x20);
    if (~(uVar2 >> 1) * -0x2e5ecda050371311 == 0x3ce2f6effaf8cc63) break;
    lVar3 = lVar3 * 0x77c2c9d6ac2937b + 0xb;
    *(char *)(uVar2 + 0x7fffa478524b) = (char)((uint64_t)lVar3 >> 0x20);
    uVar2 = uVar2 + 4;
  }
  uVar4 = (uint32_t)uVar2 | 1;
  bVar1 = (uint8_t)uVar2 & 0xf;
  lVar3 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(int)(uVar4 * 0x6562d848) + 0x7fffa478fde5) * 0x24924925 +
          0x24924925) * 7;
  *(uint64_t *)
   ((uint64_t)(uint32_t)((int)((uint64_t)lVar3 >> 0x20) << 3) +
   (int64_t)(short)((short)uVar4 * -0x1e97) + 0x7fffa47863eb) =
       ~*(uint64_t *)((int64_t)(short)~((uint16_t)uVar2 ^ 0x26a9) + 0x7fffa478796c);
  *(char *)((int64_t)(short)(0x47ebU >> bVar1 | 0x47eb << 0x10 - bVar1) + 0x7fffa4789dcf) =
       (char)((uint64_t)lVar3 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55d6e80  |  RVA: 0xe66e80  |  Size: 794 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55d6e80(void)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t unaff_EDI;
  int64_t lVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint32_t uVar6;
  
  uVar6 = unaff_EDI * -0x7c9d6913 + ~unaff_EDI * -0x7c9d6913;
  bVar2 = (uint8_t)uVar6;
  *(uint8_t *)((int64_t)(int)(uVar6 ^ 0x83624ac4) + 0x7fffa479300f) = bVar2 ^ 0x13;
  auRam00007fffa47853f4 = (uint8_t  [16])0x0;
  uRam00007fffa4785404 = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)(uVar6 ^ 0x83624ac4) >> 0x1f,(int)uVar1)) *
          ((0x6da9c097a46960cc << (bVar2 & 0x3f) | 0x6da9c097a46960ccU >> 0x40 - (bVar2 & 0x3f)) +
          0x2bd1145c);
  uVar5 = 4;
  while( true ) {
    *(char *)(uVar5 + (int64_t)
                      (short)((0x6bed << (bVar2 & 0xf) | 0x6bedU >> 0x10 - (bVar2 & 0xf)) + 0x295e)
                      + 0x7fffa478cb12) = (char)((uint64_t)(lVar3 * 0x4b323481aa) >> 0x20);
    *(char *)(uVar5 + (int64_t)
                      (int)(-0x1a990001 << (bVar2 & 0x1f) | 0xe566ffffU >> 0x20 - (bVar2 & 0x1f)) +
                      0x7fffa47928a5) = (char)((uint64_t)(lVar3 * 0x756bcc4e4) >> 0x20);
    *(char *)(uVar5 + 0x7fffa47853dd) = (char)((uint64_t)(lVar3 * 0x2d3ee1a368) >> 0x20);
    lVar3 = lVar3 * -0x244840d09b214f0;
    *(char *)(uVar5 + (int64_t)(short)(0x9ecU >> (bVar2 & 0xf) | 0x9ec << 0x10 - (bVar2 & 0xf)) +
                      0x7fffa478d2a1) = (char)((uint64_t)lVar3 >> 0x20);
    if (uVar5 == (0x1e86943 - uVar6 & 0xffff)) break;
    uVar5 = uVar5 + 4;
  }
  uVar4 = (uint32_t)*(uint8_t *)((int64_t)(int)(uVar6 ^ 0x8362498d) + 0x7fffa4793348) * 0x33333334 +
          0x33333334;
  uVar5 = (uint64_t)uVar4 * 4 + (uint64_t)uVar4;
  *(uint32_t *)((int64_t)(int)((uVar6 ^ 0x887a96ec) << 0x14 | (uVar6 ^ 0x887a96ec) >> 0xc) +
            0x7fffa4790575 + (uVar5 >> 0x20) * 4) = uRam00007fffa4785404._4_4_ ^ 0xc34c8565;
  *(char *)((int64_t)(int)(0x32dffff9U >> (bVar2 & 0x1f) | 0x32dffff9 << 0x20 - (bVar2 & 0x1f)) +
           0x7fffa4792d8b) = (char)(uVar5 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55d71a0  |  RVA: 0xe671a0  |  Size: 1700 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55d7424) */
/* WARNING: Removing unreachable block (ram,0x7fffa55d745c) */
/* WARNING: Removing unreachable block (ram,0x7fffa55d782e) */

void FUN_7fffa55d71a0(void)

{
  uint16_t uVar1;
  int64_t lVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t unaff_R13;
  
  uVar5 = (unaff_R13 | 0xfffffffff9ff8f7c) * -0x128ed308 + (~unaff_R13 & 0x6007083) * -0x128ed308;
  uVar4 = (uint32_t)uVar5;
  *(uint8_t (*) [16])((int64_t)(int)(uVar4 ^ 0xed71b73e) + 0x7fffa47c63aa) =
       (uint8_t  [16])0x0;
  *(uint64_t *)((int64_t)(int)(uVar4 ^ 0xed71b73e) + 0x7fffa47c63ba) = 0;
  bVar3 = (uint8_t)uVar5;
  *(uint64_t *)
   ((int64_t)(int)(0xff116effU >> (bVar3 & 0x1f) | -0xee9101 << 0x20 - (bVar3 & 0x1f)) +
   0x7fffa47cb64a) = 0x457430c97a23d875;
  uVar6 = ~((uVar5 | 1) * 0x77bc0b9e0c13aabb);
  uVar1 = (uint16_t)uVar5;
  *(uint64_t *)(((int64_t)(short)(0x507b - uVar1) ^ 0xfffffffffffffc85U) + 0x7fffa47c45e2) =
       (uVar5 + 0xe9586ca52f47d1ea) * 0x7428e393;
  *(uint64_t *)
   ((int64_t)(int)(0x3affff5c << (bVar3 & 0x1f) | 0x3affff5cU >> 0x20 - (bVar3 & 0x1f)) +
   0x7fffa47c6b86) = uVar6 << 0x1c | uVar6 >> 0x24;
  lRam00007fffa47bc7c8 = uVar5 + 0x45debcd0393c5842;
  uVar6 = ((uint64_t)
           ((0x7ef6a8f3792b586b -
            (int64_t)(&UNK_7fffa56ffb22 + (int)((uVar4 | 1) * -0x601f8ca4 + -0x1301904e))) *
           -0x6db6db6db6db6db7) >> 0x31 |
          (0xa8f3792b586b - (int64_t)(&UNK_7fffa56ffa14 + (int)((uVar4 + 0x2a85e894) * 0x7868a869))
          ) * -0x6db6db6db6db8000) + ((uVar5 | 1) * 0x689c3c584e9a2cf9 ^ 0x758646c3);
  uVar6 = uVar6 >> 3 ^ uVar6;
  uVar6 = uVar6 >> 6 ^ uVar6;
  uVar6 = uVar6 >> 0xc ^ uVar6;
  *(uint64_t *)((int64_t)(int)(0x128dfbda - uVar4) + 0x7fffa47c9efe) =
       (uVar6 ^ 0x6e08bbad737f662b ^ uVar6 >> 0x18 ^ uVar6 >> 0x30) + 0x499a5ab2d5528167;
  lVar2 = lRam00007fffa4780f90;
  uVar6 = (int64_t)
          (&UNK_7fffa56fe1a7 +
          (int)(0xff6c01ffU >> (bVar3 & 0x1f) | -0x93fe01 << 0x20 - (bVar3 & 0x1f))) * -0x8000000 +
          0x67421a3050000000U ^
          0x55be452ce843460aU - (int64_t)(&UNK_7fffa56f7ddd + (short)((uVar1 | 1) * -0x22cd)) ^
          0x8280000000000000 - ((uint64_t)((uVar4 ^ 0xbd94a9c3) + 0xa56fd2dd) << 0x36);
  *(uint64_t *)((int64_t)(short)((uVar1 | 1) * 0x4fea) + 0x7fffa47c1aae) =
       (uVar6 << 0x13 | uVar6 >> 0x2d) ^
       (uint64_t)(&UNK_7fffa56f37a0 + (short)(0x277d - (uVar1 + 0xcf7d)));
  *(uint64_t *)
   ((int64_t)(int)((0x7d8ed220 - uVar4) * 0x100 | 0x7d8ed220 - uVar4 >> 0x18) + 0x7fffa47caf76) =
       (lVar2 - (int64_t)(&UNK_7fffa5743058 + (short)(uVar1 + 0xdf10))) + 0x557e1785c64b9832U ^
       0x98372b93a54324ca;
  *(uint64_t *)
   ((int64_t)(int)(-0x120000b5 << (bVar3 & 0x1f) | 0xedffff4bU >> 0x20 - (bVar3 & 0x1f)) +
   0x7fffa47c7c03) = -0x35ca0576c6f90e27 - uVar5;
  return;
}


// ============================================================================
// Function : FUN_7fffa55d7850  |  RVA: 0xe67850  |  Size: 3102 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55d7850(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint8_t bVar6;
  uint16_t uVar7;
  int iVar8;
  uint32_t uVar9;
  bool bVar10;
  bool bVar11;
  uint8_t uVar12;
  uint64_t *in_RAX;
  uint64_t uVar13;
  uint64_t uVar14;
  uint8_t bVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t uVar20;
  int iVar21;
  uint32_t uVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint32_t uVar25;
  int64_t lVar26;
  uint64_t *puVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  uint64_t *in_R10;
  int64_t lVar30;
  uint32_t uVar31;
  uint64_t in_R11;
  uint64_t uVar32;
  int64_t lVar33;
  uint32_t uVar34;
  uint64_t *puVar35;
  char cVar36;
  uint8_t uVar41;
  char cVar43;
  uint8_t uVar44;
  uint64_t uVar37;
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  char cVar42;
  char cVar45;
  uint8_t auVar40 [16];
  int iStack_178;
  uint32_t auStack_168 [66];
  uint64_t uStack_60;
  uint64_t uStack_58;
  int iStack_4c;
  int64_t lStack_48;
  
  param_2 = (param_2 << 0x30 | param_2 >> 0x10) ^ (param_2 << 0xe | param_2 >> 0x32) ^ param_2;
  param_2 = (param_2 << 0x1c | param_2 >> 0x24) ^ (param_2 << 0x20 | param_2 >> 0x20) ^ param_2;
  uVar13 = (param_2 << 0x25 | param_2 >> 0x1b) ^ (param_2 << 0x2b | param_2 >> 0x15) ^
           (param_2 << 0x1e | param_2 >> 0x22);
  uVar20 = (in_R11 << 5 | in_R11 >> 0x3b) ^ (in_R11 << 0x2a | in_R11 >> 0x16) ^ in_R11;
  uVar20 = (uVar20 << 10 | uVar20 >> 0x36) ^ (uVar20 << 0x14 | uVar20 >> 0x2c) ^ uVar20;
  uVar20 = (uVar20 << 0x14 | uVar20 >> 0x2c) ^ (uVar20 << 0x28 | uVar20 >> 0x18) ^ uVar20;
  uVar20 = (uVar20 << 0x28 | uVar20 >> 0x18) ^ (uVar20 << 0x10 | uVar20 >> 0x30) ^ uVar20;
  uVar20 = (uVar20 << 0x10 | uVar20 >> 0x30) ^ (uVar20 << 0x20 | uVar20 >> 0x20) ^ uVar20;
  uVar32 = uVar20 >> 0x20;
  uVar13 = (uVar13 << 0x1a | uVar13 >> 0x26) ^ (uVar13 << 0xe | uVar13 >> 0x32) ^ uVar13;
  uVar13 = (uVar13 << 0x34 | uVar13 >> 0xc) ^ (uVar13 << 0x1c | uVar13 >> 0x24) ^ uVar13;
  uVar13 = (uVar13 << 0x38 | uVar13 >> 8) ^ (uVar13 << 0x28 | uVar13 >> 0x18) ^ uVar13;
  uVar32 = uVar32 << 0x28 ^ (uVar20 << 0x20 | uVar32);
  lVar33 = *(int64_t *)(uVar32 + 0x38);
  iStack_4c = *(int *)(uVar32 + 0x34);
  lStack_48 = *(int64_t *)(uVar32 + 8);
  uVar17 = 4;
  if (*(uint32_t *)(uVar32 + 0x10c) < 4) {
    uVar17 = *(uint32_t *)(uVar32 + 0x10c);
  }
  uVar34 = *(uint32_t *)(uVar32 + 0x1c);
  iVar21 = 1 << ((uint8_t)uVar17 & 0x1f);
  uVar25 = 1 << (*(uint8_t *)(uVar32 + 0x100) & 0x1f);
  lVar4 = *(int64_t *)(uVar32 + 0x70);
  uStack_60 = (int64_t)in_R10 - lStack_48;
  uVar31 = (uint32_t)uStack_60;
  uVar17 = uVar31 - uVar25;
  if (uVar31 - uVar34 <= uVar25) {
    uVar17 = uVar34;
  }
  if (*(int *)(uVar32 + 0x28) != 0) {
    uVar17 = uVar34;
  }
  uVar20 = *(uint64_t *)(uVar32 + 0x60);
  uVar34 = (uint32_t)param_1;
  bVar15 = (uint8_t)param_1 & 0xf;
  uStack_58 = param_1;
  if (*(uint32_t *)(uVar32 + 300) ==
      (uint32_t)(uint16_t)((0x3f7f << bVar15 | 0x3f7fU >> 0x10 - bVar15) + 0x2031)) {
    lVar23 = uVar32 + 0x40;
    uVar25 = *(uint32_t *)(uVar32 + 0x2c);
    uVar18 = (uint64_t)uVar25;
    uVar29 = uVar31 - uVar25;
    if (0xba8ba786 - uVar34 != (uVar34 ^ 0x31735646)) {
      uVar29 = uVar25 ^ uVar31;
    }
    lVar26 = lVar4;
    lVar19 = lVar33;
    if (0x180 < uVar29) {
      if (uVar25 < (uint32_t)(int)(short)(0x6e86 - (short)param_1)) {
        while( true ) {
          uVar14 = (uint64_t)((uint32_t)uVar18 & 7);
          uVar29 = *(uint32_t *)(uVar32 + 0x40 + uVar14 * 4);
          uVar37 = (uint64_t)(uVar29 >> 4 & 0xfffffff0);
          *(int *)(uVar32 + 0x40 + uVar14 * 4) =
               (int)((*(int64_t *)(lStack_48 + 8 + uVar18) * -0x30e4432340650000 ^
                     *(uint64_t *)(uVar32 + 0x60)) >> (0x38U - (char)iStack_4c & 0x3f));
          lVar19 = 0xf;
          if ((*(uint8_t *)(lVar33 + uVar37) & 0xf) != 1) {
            lVar19 = 0;
          }
          lVar19 = (uint64_t)(*(uint8_t *)(lVar33 + uVar37) - 1 & 0xf) + lVar19;
          *(char *)(lVar33 + uVar37) = (char)lVar19;
          *(char *)(lVar33 + uVar37 + lVar19) = (char)uVar29;
          *(uint32_t *)(lVar4 + uVar37 * 4 + lVar19 * 4) = (uint32_t)uVar18;
          if ((uint64_t)(uVar25 + 0x60) - 1 == uVar18) break;
          uVar18 = uVar18 + 1;
        }
        lVar19 = *(int64_t *)(uVar32 + 0x38);
        lVar26 = *(int64_t *)(uVar32 + 0x70);
      }
      uVar25 = uVar31 - 0x20;
      uVar18 = (uint64_t)uVar25;
      plVar2 = (int64_t *)(lStack_48 + uVar18);
      uVar16 = ((int)(int64_t *)((int64_t)in_R10 + 1U) - (int)plVar2) + 1;
      uVar29 = 8;
      if (uVar16 < 8) {
        uVar29 = uVar16;
      }
      uVar16 = 0;
      if (plVar2 <= (int64_t *)((int64_t)in_R10 + 1U)) {
        uVar16 = uVar29;
      }
      if (uVar25 < (uVar31 + uVar16) - 0x20) {
        uVar37 = *(uint64_t *)(uVar32 + 0x60);
        uVar29 = 0x38 - *(int *)(uVar32 + 0x34);
        if ((uVar16 & 1) == 0) {
          uVar14 = uVar18;
        }
        else {
          *(int *)(lVar23 + (uint64_t)(uVar25 & 7) * 4) =
               (int)((*plVar2 * -0x30e4432340650000 ^ uVar37) >> (uint64_t)uVar29);
          uVar14 = uVar18 | 1;
          if ((int)(uVar34 ^ 0xc4c1d0f4) < (int)(0x1206c7a1 - uVar34)) {
            uVar14 = uVar18 + 1;
          }
        }
        if (uVar16 != ((0x66c - uVar34 ^ 0x9787) & 0xffff)) {
          iStack_178 = (int)in_R10;
          while( true ) {
            uVar28 = (uVar34 ^ 0x7970ca0e) + 0xa6f13642;
            bVar15 = (uint8_t)uVar29;
            uVar9 = (uint32_t)uVar14;
            *(int *)(lVar23 + (uint64_t)(uVar9 & 7) * 4) =
                 (int)((*(int64_t *)(lStack_48 + uVar14) * -0x30e4432340650000 ^ uVar37) >>
                      (bVar15 & 0x3f));
            uVar18 = *(uint64_t *)(lStack_48 + 1 + uVar14);
            uVar24 = uVar18 * -0x30e4432340650000;
            if ((int64_t)(uint64_t)(~(uVar34 ^ 0x883aff40) << 0x1b | ~(uVar34 ^ 0x883aff40) >> 5)
                < (int64_t)(int)(uVar28 * 0x80 | uVar28 >> 0x19)) {
              uVar24 = uVar18 ^ 0xcf1bbcdcbf9b0000;
            }
            *(int *)(lVar23 + (uint64_t)(uVar9 + 1 & 7) * 4) =
                 (int)((uVar24 ^ uVar37) >> (bVar15 & 0x3f));
            if ((((int)lStack_48 - uVar16) - iStack_178) + uVar9 == -0x22) break;
            uVar14 = uVar14 + 2;
          }
        }
      }
    }
    if (uVar25 < uVar31) {
      lVar5 = *(int64_t *)(uVar32 + 8);
      bVar15 = 0x38 - (char)*(uint32_t *)(uVar32 + 0x34);
      uVar18 = (uint64_t)uVar25;
      while( true ) {
        uVar25 = (uint32_t)uVar18;
        if (0x89bc391b - uVar34 < 0xe3842f82) {
          uVar22 = (uint32_t)
                   ((*(int64_t *)(lVar5 + 8 + uVar18) * -0x30e4432340650000 ^
                    *(uint64_t *)(uVar32 + 0x60)) >> (bVar15 & 0x3f));
          uVar37 = (uint64_t)((uVar25 & 7) << 2);
          uVar29 = *(uint32_t *)(uVar32 + 0x40 + uVar37);
        }
        else {
          uVar22 = (uint32_t)
                   ((*(int64_t *)(lVar5 + 8 + uVar18) * -0x30e4432340650000 ^
                    *(uint64_t *)(uVar32 + 0x60)) >> (bVar15 & 0x3f));
          uVar37 = (uint64_t)((uVar25 & 7) << 2);
          uVar29 = *(uint32_t *)(uVar32 + 0x40 + uVar37);
        }
        *(uint32_t *)(uVar37 + lVar23) = uVar22;
        uVar37 = (uint64_t)(uVar29 >> 4 & 0xfffffff0);
        lVar30 = 0;
        if ((*(uint8_t *)(lVar19 + uVar37) & 0xf) == 1) {
          lVar30 = 0xf;
        }
        lVar30 = (uint64_t)(*(uint8_t *)(lVar19 + uVar37) - 1 & 0xf) + lVar30;
        *(char *)(lVar19 + uVar37) = (char)lVar30;
        *(char *)(lVar19 + uVar37 + lVar30) = (char)uVar29;
        *(uint32_t *)(lVar26 + uVar37 * 4 + lVar30 * 4) = uVar25;
        if ((uStack_60 & 0xffffffff) - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
      }
    }
    *(uint32_t *)(uVar32 + 0x2c) = uVar31;
    uVar18 = (int64_t)(int)(0x38U - iStack_4c);
    if (~(uVar34 ^ 0xb9855a0c) < 0x2eb9b8ca) {
      uVar18 = (uint64_t)(0x38U - iStack_4c);
    }
    uVar37 = (uint64_t)*(uint32_t *)(uVar32 + 0x40 + (uint64_t)(uVar31 & 7) * 4);
    *(int *)(uVar32 + 0x40 + (uint64_t)(uVar31 & 7) * 4) =
         (int)((uVar20 ^ *(int64_t *)(lStack_48 + 8 + (uStack_60 & 0xffffffff)) *
                         -0x30e4432340650000) >> uVar18);
  }
  else {
    uVar18 = *in_R10;
    *(uint32_t *)(uVar32 + 0x2c) = uVar31;
    auVar39._4_12_ = SUB1612((uint8_t  [16])0x0,4);
    auVar39._0_4_ = 0x38 - iStack_4c;
    uVar37 = (uVar18 * -0x30e4432340650000 ^ uVar20) >> auVar39._0_8_;
  }
  *(int *)(uVar32 + 0x68) = *(int *)(uVar32 + 0x68) + (int)uVar37;
  uVar20 = (uint64_t)((uint32_t)(uVar37 >> 4) & 0xffffff0);
  lVar4 = lVar4 + uVar20 * 4;
  bVar15 = *(uint8_t *)(lVar33 + uVar20);
  pcVar3 = (char *)(lVar33 + uVar20);
  uVar12 = (uint8_t)(uVar37 >> 0x10);
  uVar44 = (uint8_t)(uVar37 >> 0x18);
  uVar41 = (uint8_t)(uVar37 >> 8);
  auVar38._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar44,uVar44),uVar12),CONCAT14(uVar12,(int)uVar37)) >> 0x20
            );
  auVar38[3] = uVar41;
  auVar38[2] = uVar41;
  auVar38[0] = (uint8_t)uVar37;
  auVar38[1] = auVar38[0];
  auVar38._8_8_ = 0;
  auVar39 = pshuflw(auVar38,auVar38,0);
  cVar36 = auVar39[0];
  auVar40[0] = -(cVar36 == *pcVar3);
  cVar42 = auVar39[1];
  auVar40[1] = -(cVar42 == pcVar3[1]);
  cVar43 = auVar39[2];
  auVar40[2] = -(cVar43 == pcVar3[2]);
  cVar45 = auVar39[3];
  auVar40[3] = -(cVar45 == pcVar3[3]);
  auVar40[4] = -(cVar36 == pcVar3[4]);
  auVar40[5] = -(cVar42 == pcVar3[5]);
  auVar40[6] = -(cVar43 == pcVar3[6]);
  auVar40[7] = -(cVar45 == pcVar3[7]);
  auVar40[8] = -(cVar36 == pcVar3[8]);
  auVar40[9] = -(cVar42 == pcVar3[9]);
  auVar40[10] = -(cVar43 == pcVar3[10]);
  auVar40[0xb] = -(cVar45 == pcVar3[0xb]);
  auVar40[0xc] = -(cVar36 == pcVar3[0xc]);
  auVar40[0xd] = -(cVar42 == pcVar3[0xd]);
  auVar40[0xe] = -(cVar43 == pcVar3[0xe]);
  auVar40[0xf] = -(cVar45 == pcVar3[0xf]);
  uVar7 = (uint16_t)(SUB161(auVar40 >> 7,0) & 1) | (uint16_t)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
  if (uVar7 == 0) {
    lVar23 = 0;
  }
  else {
    uVar18 = (uint64_t)(uint16_t)(uVar7 >> (bVar15 & 0xf) | uVar7 << 0x10 - (bVar15 & 0xf));
    lVar23 = 0;
    do {
      iVar8 = 0;
      for (uVar37 = uVar18; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x8000000000000000) {
        iVar8 = iVar8 + 1;
      }
      uVar31 = iVar8 + (uint32_t)bVar15 & 0xf;
      if (uVar31 != 0) {
        uVar31 = *(uint32_t *)(lVar4 + (uint64_t)uVar31 * 4);
        if (uVar31 < uVar17) break;
        iVar21 = iVar21 + -1;
        auStack_168[lVar23] = uVar31;
        lVar23 = lVar23 + 1;
      }
      uVar18 = uVar18 & uVar18 - 1;
    } while (uVar18 != 0 && iVar21 != 0);
  }
  uVar17 = (uint32_t)uStack_58;
  uVar31 = 0;
  if ((bVar15 & 0xf) == 1) {
    uVar31 = 0xf;
  }
  bVar6 = (uint8_t)uStack_58 & 0x1f;
  uVar29 = (uVar17 ^ 0xba2489e7) + 0x35a418ff;
  uVar25 = bVar15 - 1;
  if ((int64_t)(uint64_t)(uVar29 * 0x400 | uVar29 >> 0x16) <
      (int64_t)(int)(0x62704d20 << bVar6 | 0x62704d20U >> 0x20 - bVar6)) {
    uVar25 = (uint32_t)bVar15;
  }
  uVar29 = uVar25 & 0xf | uVar31;
  if (((0x3652874b - uVar17) * 0x200000 | 0x3652874b - uVar17 >> 0xb) <
      ((uVar34 | 1) * 0x74070000 | (uVar34 | 1) * 0x6f027407 >> 0x10)) {
    uVar29 = uVar31 + (uVar25 & 0xf);
  }
  *(uint8_t *)(lVar33 + uVar20) = (char)uVar29;
  ((uint8_t *)(lVar33 + uVar20))[uVar29] = auVar38[0];
  iVar21 = *(int *)(uVar32 + 0x2c);
  *(int *)(uVar32 + 0x2c) = iVar21 + 1;
  *(int *)(lVar4 + (uint64_t)uVar29 * 4) = iVar21;
  if (lVar23 != 0) {
    puVar1 = (uint64_t *)((int64_t)in_RAX - 7);
    bVar10 = in_R10 < puVar1;
    if (0x2822b8a2 < (int)(uVar17 ^ 0x9ac7ea8d)) {
      bVar10 = (int64_t)puVar1 < (int64_t)in_R10;
    }
    uVar32 = 3;
    lVar33 = 0;
    do {
      uVar34 = auStack_168[lVar33];
      puVar27 = (uint64_t *)(lStack_48 + (uint64_t)uVar34);
      if (*(int *)((uVar32 - 3) + (int64_t)puVar27) == *(int *)((int64_t)in_R10 + (uVar32 - 3))) {
        puVar35 = in_R10;
        if (bVar10) {
          if (*puVar27 == *in_R10) {
            lVar4 = lStack_48 + 8 + (uint64_t)uVar34;
            lVar19 = 0;
            do {
              puVar35 = (uint64_t *)((int64_t)in_R10 + lVar19 + 8);
              if (puVar1 <= puVar35) {
                puVar27 = (uint64_t *)(lVar4 + lVar19);
                goto joined_r0x7fffa55d8328;
              }
              uVar20 = *(uint64_t *)(lVar4 + lVar19);
              lVar19 = lVar19 + 8;
            } while (uVar20 == *puVar35);
            uVar31 = 0;
            for (uVar20 = uVar20 ^ *puVar35; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar31 = uVar31 + 1;
            }
            uVar20 = (uint64_t)(uVar31 >> 3) + lVar19;
          }
          else {
            uVar31 = 0;
            for (uVar20 = *in_R10 ^ *puVar27; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar31 = uVar31 + 1;
            }
            uVar20 = (uint64_t)(uVar31 >> 3);
          }
        }
        else {
joined_r0x7fffa55d8328:
          if (puVar35 < (uint64_t *)((int64_t)in_RAX - 3U)) {
            bVar15 = (uint8_t)uStack_58 & 0x1f;
            bVar11 = (int)*puVar27 == (int)*puVar35;
            if ((int64_t)
                (uint64_t)
                ((uVar17 ^ 0xf3433931) >> 1 | (uint32_t)(((uVar17 ^ 0xf3433931) & 1) != 0) << 0x1f) <
                (int64_t)(int)(0xdfc80fe0U >> bVar15 | -0x2037f020 << 0x20 - bVar15)) {
              bVar11 = (int)*puVar35 <= (int)*puVar27;
            }
            if (bVar11) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
              puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
            }
          }
          if (puVar35 < (uint64_t *)((int64_t)in_RAX - 1U)) {
            bVar11 = (short)*puVar27 == (short)*puVar35;
            if (((uVar17 ^ 0x2f1ec8cf) << 0x1a | (uVar17 ^ 0x2f1ec8cf) >> 6) != 0xa5eac698) {
              bVar11 = (short)*puVar27 < (short)*puVar35;
            }
            if (bVar11) {
              puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
              puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
            }
          }
          if (puVar35 < in_RAX) {
            puVar35 = (uint64_t *)
                      ((int64_t)puVar35 + (uint64_t)((char)*puVar27 == (char)*puVar35));
          }
          uVar20 = (int64_t)puVar35 - (int64_t)in_R10;
        }
        if (uVar32 < uVar20) {
          *(uint64_t *)
           ((uVar13 << 0x10 | uVar13 >> 0x30) ^ (uVar13 << 0x30 | uVar13 >> 0x10) ^ uVar13) =
               (uint64_t)(((int)uStack_60 + 3) - uVar34);
          uVar32 = uVar20;
          if ((uint64_t *)((int64_t)in_R10 + uVar20) == in_RAX) {
            return;
          }
        }
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 != lVar23);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55d8480  |  RVA: 0xe68480  |  Size: 72 bytes
// Callers  : FUN_7fffa54765d0@0xd065d0
// Callees  : FUN_7fffa50fec70@0x98ec70, FUN_7fffa52174b0@0xaa74b0
// ============================================================================
uint64_t FUN_7fffa55d8480(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  uVar1 = FUN_7fffa52174b0(&IMAGE_DOS_HEADER_7fffa4770000);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_7fffa50fec70(&IMAGE_DOS_HEADER_7fffa4770000,param_1 + -0x7fffa4770000);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (uint64_t)(~*(uint32_t *)(lVar2 + 0x24) >> 0x1f);
    }
  }
  return uVar1;
}


// ============================================================================
// Function : FUN_7fffa55d84cc  |  RVA: 0xe684cc  |  Size: 100 bytes
// Callers  : FUN_7fffa56091b0@0xe991b0, FUN_7fffa5660944@0xef0944
// Callees  : _guard_dispatch_icall@0xf30810
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_7fffa55d84cc(uint32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  code *pcVar2;
  int64_t alStackX_10 [3];
  
  alStackX_10[0] = 0;
  iVar1 = (*(code *)&DAT_7ff84ea3e410)(0,L"mscoree.dll",alStackX_10,param_4,0xfffffffffffffffe);
  if ((iVar1 != 0) &&
     (pcVar2 = (code *)(*(code *)&DAT_7ff84ea33140)(alStackX_10[0],"CorExitProcess"),
     pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1);
  }
  if (alStackX_10[0] != 0) {
    (*(code *)&DAT_7ff84ea3c7d0)();
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55d8530  |  RVA: 0xe68530  |  Size: 1254 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55d8530(void) {
    /* +0xe68530 */ __asm { PUSH RBP }
    /* +0xe68531 */ __asm { PUSH R14 }
    /* +0xe68533 */ __asm { PUSH RBX }
    /* +0xe68534 */ __asm { PUSH RSI }
    /* +0xe68535 */ __asm { PUSH R15 }
    /* +0xe68537 */ __asm { PUSH R13 }
    /* +0xe68539 */ __asm { PUSH RDI }
    /* +0xe6853a */ __asm { PUSH R12 }
    /* +0xe6853c */ __asm { SUB RSP,0x658 }
    /* +0xe68543 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xe6854b */ __asm { MOVDQA xmmword ptr [RBP + 0x5c0],XMM13 }
    /* +0xe68554 */ __asm { MOVDQA xmmword ptr [RBP + 0x5b0],XMM6 }
    /* +0xe6855c */ __asm { MOVAPS xmmword ptr [RBP + 0x5a0],XMM11 }
    /* +0xe68564 */ __asm { MOVDQA xmmword ptr [RBP + 0x590],XMM10 }
    /* +0xe6856d */ __asm { MOVDQA xmmword ptr [RBP + 0x580],XMM9 }
    /* +0xe68576 */ __asm { MOVDQA xmmword ptr [RBP + 0x570],XMM12 }
    /* +0xe6857f */ __asm { MOVDQA xmmword ptr [RBP + 0x560],XMM14 }
    /* +0xe68588 */ __asm { MOVDQA xmmword ptr [RBP + 0x550],XMM8 }
    /* +0xe68591 */ __asm { MOVDQA xmmword ptr [RBP + 0x540],XMM7 }
    /* +0xe68599 */ __asm { MOVDQA xmmword ptr [RBP + 0x530],XMM15 }
    /* +0xe685a2 */ __asm { MOV qword ptr [RBP + 0x528],-0x2 }
    /* +0xe685ad */ __asm { MOV RBX,RAX }
    /* +0xe685b0 */ __asm { MOV ECX,0xbe881f1c }
    /* +0xe685b5 */ __asm { XOR ECX,0x82a37f62 }
    /* +0xe685bb */ __asm { ADD ECX,EBX }
    /* +0xe685bd */ __asm { MOV dword ptr [RBP + 0x1d0],ECX }
    /* +0xe685c3 */ __asm { MOV ECX,dword ptr [RBP + 0x1d0] }
    /* +0xe685c9 */ __asm { MOV ECX,0x1c4c0977 }
    /* +0xe685ce */ __asm { MOV R14D,EBX }
    /* +0xe685d1 */ __asm { OR R14D,0x1 }
    /* +0xe685d5 */ __asm { IMUL ECX,R14D }
    /* +0xe685d9 */ __asm { XOR ECX,0x18e6dbc1 }
    /* +0xe685df */ __asm { MOV dword ptr [RBP + 0x1d0],ECX }
    /* +0xe685e5 */ __asm { MOV ECX,dword ptr [RBP + 0x1d0] }
    /* +0xe685eb */ __asm { LEA R10,[0x7fffa477f38f] }
    /* +0xe685f2 */ __asm { MOV RDX,R10 }
    /* +0xe685f5 */ __asm { ROL RDX,0x2f }
    /* +0xe685f9 */ __asm { XOR RDX,0x631107d9 }
    /* +0xe68600 */ __asm { MOV RAX,0x141dc9a00042fef8 }
    /* +0xe6860a */ __asm { MOV RCX,RBX }
    /* +0xe6860d */ __asm { OR RCX,0x1 }
    /* +0xe68611 */ __asm { MOV qword ptr [RBP + 0x428],RCX }
    /* +0xe68618 */ __asm { IMUL RAX,RCX }
    /* +0xe6861c */ __asm { ADD RDX,0x592080fe }
    /* +0xe68623 */ __asm { XOR RDX,RAX }
    /* +0xe68626 */ __asm { CMP RDX,-0x1 }
    /* +0xe6862a */ __asm { NOP }
    /* +0xe6862b */ __asm { NOP }
    /* +0xe6862c */ __asm { NOP }
    /* +0xe6862d */ __asm { NOP }
    /* +0xe6862e */ __asm { MOVZX ECX,uint8_t ptr [R10 + 0x5200] }
    /* +0xe68636 */ __asm { MOVZX R9D,uint8_t ptr [R10 + RCX*0x4 + 0x520a] }
    /* +0xe6863f */ __asm { NOT R9B }
    /* +0xe68642 */ __asm { ROL R9B,0x3 }
    /* +0xe68646 */ __asm { MOV uint8_t ptr [RBP + 0x1d0],R9B }
    /* +0xe6864d */ __asm { MOVZX R9D,uint8_t ptr [R10 + RCX*0x4 + 0x520b] }
    /* +0xe68656 */ __asm { NOT R9B }
    /* +0xe68659 */ __asm { ROL R9B,0x3 }
    /* +0xe6865d */ __asm { MOV uint8_t ptr [RBP + 0x1d1],R9B }
    /* +0xe68664 */ __asm { MOVZX R9D,uint8_t ptr [R10 + RCX*0x4 + 0x520c] }
    /* +0xe6866d */ __asm { NOT R9B }
    /* +0xe68670 */ __asm { ROL R9B,0x3 }
    /* +0xe68674 */ __asm { MOV uint8_t ptr [RBP + 0x1d2],R9B }
    /* +0xe6867b */ __asm { MOVZX ECX,uint8_t ptr [R10 + RCX*0x4 + 0x520d] }
    /* +0xe68684 */ __asm { NOT CL }
    /* +0xe68686 */ __asm { ROL CL,0x3 }
    /* +0xe68689 */ __asm { MOV uint8_t ptr [RBP + 0x1d3],CL }
    /* +0xe6868f */ __asm { MOV ESI,0x97cd0fa7 }
    /* +0xe68694 */ __asm { XOR ESI,dword ptr [RBP + 0x1d0] }
    /* +0xe6869a */ __asm { MOV R11D,0x1 }
    /* +0xe686a0 */ __asm { MOV ECX,ESI }
    /* +0xe686a2 */ __asm { SHL R11D,CL }
    /* +0xe686a5 */ __asm { BT ESI,ESI }
    /* +0xe686a8 */ __asm { JNC 0x7fffa55d86bf }
    /* +0xe686aa */ __asm { MOV dword ptr [RBP + 0x1d0],0xf699d9b3 }
    /* +0xe686b4 */ __asm { MOV ECX,dword ptr [RBP + 0x1d0] }
    /* +0xe686ba */ __asm { JMP 0x7fffa55eaee2 }
    /* +0xe686bf */ __asm { MOV dword ptr [RBP + 0x1d0],0x35b1841a }
    /* +0xe686c9 */ __asm { MOV ECX,dword ptr [RBP + 0x1d0] }
    /* +0xe686cf */ __asm { TEST CL,0x1 }
    /* +0xe686d2 */ __asm { JZ 0x7fffa55d86dd }
    /* +0xe686d4 */ __asm { LOOP 0x7fffa55d86a8 }
    /* +0xe686d6 */ __asm { MOV CH,uint8_t ptr [RDX + 0x63] }
    /* +0xe686d9 */ __asm { SUB uint8_t ptr [RBX],AH }
    /* +0xe686db */ __asm { JNZ 0x7fffa55d8758 }
    /* +0xe686dd */ __asm { MOV dword ptr [RBP + 0x94],R11D }
    /* +0xe686e4 */ __asm { MOV dword ptr [RBP + 0x4ac],ESI }
    /* +0xe686ea */ __asm { MOV ECX,0xe885a47e }
    /* +0xe686ef */ __asm { IMUL ECX,R14D }
    /* +0xe686f3 */ __asm { IMUL R10D,ECX,0x43785cf9 }
    /* +0xe686fa */ __asm { ADD R10D,0xed1bdacb }
    /* +0xe68701 */ __asm { MOV EDX,0x4ed28365 }
    /* +0xe68706 */ __asm { ADD EDX,0x7ffe0240 }
    /* +0xe6870c */ __asm { XOR EDX,EBX }
    /* +0xe6870e */ __asm { MOV EAX,0x6cb0a8c }
    /* +0xe68713 */ __asm { XOR RAX,qword ptr [RDX] }
    /* +0xe68716 */ __asm { SUB RAX,R10 }
    /* +0xe68719 */ __asm { MOV RCX,-0x3de92e8d165c5532 }
    /* +0xe68723 */ __asm { CMP RAX,RCX }
    /* +0xe68726 */ __asm { NOP }
    /* +0xe68727 */ __asm { NOP }
    /* +0xe68728 */ __asm { NOP }
    /* +0xe68729 */ __asm { NOP }
    /* +0xe6872a */ __asm { NOP }
    /* +0xe6872b */ __asm { LEA RDI,[RBP + 0x470] }
    /* +0xe68732 */ __asm { MOV R11D,0xfbb4c559 }
    /* +0xe68738 */ __asm { LEA RDX,[0x7fffa4fd577c] }
    /* +0xe6873f */ __asm { MOV ESI,0xe0a34cad }
    /* +0xe68744 */ __asm { MOV R10W,0x597d }
    /* +0xe68749 */ __asm { ADD R10D,0xfffffc40 }
    /* +0xe68750 */ __asm { MOV ECX,0xabf45c }
    /* +0xe68755 */ __asm { MOV qword ptr [RBP + 0x68],0x0 }
    /* +0xe6875d */ __asm { IMUL R9D,R11D,0x5fffd5 }
    /* +0xe68764 */ __asm { ROL R9D,0x9 }
    /* +0xe68768 */ __asm { IMUL R9D,R14D }
    /* +0xe6876c */ __asm { ADD R9,RDI }
    /* +0xe6876f */ __asm { MOV AX,0x5991 }
    /* +0xe68773 */ __asm { SUB EAX,EBX }
    /* +0xe68775 */ __asm { XOR EAX,0x62ec }
    /* +0xe6877a */ __asm { ROL R9,0x7 }
    /* +0xe6877e */ __asm { MOVSX R11,AX }
    /* +0xe68782 */ __asm { LEA R8,[0x7fffa4774510] }
    /* +0xe68789 */ __asm { MOV R12D,EBX }
    /* +0xe6878c */ __asm { OR R12D,0x1 }
    /* +0xe68790 */ __asm { IMUL ESI,R14D }
    /* +0xe68794 */ __asm { ADD ESI,0xa8a5104d }
    /* +0xe6879a */ __asm { ADD ECX,EBX }
    /* +0xe6879c */ __asm { ADD ECX,0xe69f9092 }
    /* +0xe687a2 */ __asm { MOVSXD RAX,ECX }
    /* +0xe687a5 */ __asm { ADD R8,R11 }
    /* +0xe687a8 */ __asm { MOV R11,R8 }
    /* +0xe687ab */ __asm { ROL R11,0xb }
    /* +0xe687af */ __asm { MOV RCX,R8 }
    /* +0xe687b2 */ __asm { ROL RCX,0x9 }
    /* +0xe687b6 */ __asm { XOR RCX,R11 }
    /* +0xe687b9 */ __asm { XOR RCX,R8 }
    /* +0xe687bc */ __asm { XOR R10D,0xfffff8c9 }
    /* +0xe687c3 */ __asm { IMUL R10D,R12D }
    /* +0xe687c7 */ __asm { MOVSX R11,R10W }
    /* +0xe687cb */ __asm { ADD R11,RDX }
    /* +0xe687ce */ __asm { LEA RDX,[RBP + 0x68] }
    /* +0xe687d2 */ __asm { MOV qword ptr [RSP + 0x20],RDX }
    /* +0xe687d7 */ __asm { LEA R10,[RBP + 0x4c] }
    /* +0xe687db */ __asm { CALL R11 }
    /* +0xe687de */ __asm { MOV dword ptr [RBP + 0x1d0],ESI }
    /* +0xe687e4 */ __asm { MOV ECX,dword ptr [RBP + 0x1d0] }
    /* +0xe687ea */ __asm { CMP ECX,0x2605fd8c }
    /* +0xe687f0 */ __asm { JNC 0x7fffa55eb126 }
    /* +0xe687f6 */ __asm { PUSHFQ }
    /* +0xe687f7 */ __asm { POP RDX }
    /* +0xe687f8 */ __asm { MOV qword ptr [RBP + 0x158],RDX }
    /* +0xe687ff */ __asm { TEST EDX,0x100 }
    /* +0xe68805 */ __asm { NOP }
    /* +0xe68806 */ __asm { NOP }
    /* +0xe68807 */ __asm { NOP }
    /* +0xe68808 */ __asm { NOP }
    /* +0xe68809 */ __asm { NOP }
    /* +0xe6880a */ __asm { MOV dword ptr [RBP + 0x1d0],0xb251126c }
    /* +0xe68814 */ __asm { MOV ECX,dword ptr [RBP + 0x1d0] }
    /* +0xe6881a */ __asm { CMP ECX,0xa6a4aa4d }
    /* +0xe68820 */ __asm { JBE 0x7fffa55eb12c }
    /* +0xe68826 */ __asm { MOV dword ptr [RBP + 0x1d0],0xb6ff746f }
    /* +0xe68830 */ __asm { MOV ECX,dword ptr [RBP + 0x1d0] }
    /* +0xe68836 */ __asm { CMP ECX,0x3a324f3f }
    /* +0xe6883c */ __asm { JBE 0x7fffa55eb13f }
    /* +0xe68842 */ __asm { MOV RAX,qword ptr [RBP + 0x618] }
    /* +0xe68849 */ __asm { NOP }
    /* +0xe6884a */ __asm { MOV R10,0x0 }
    /* +0xe68851 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe68858 */ __asm { MOV R10,-0x791e5bf636f34547 }
    /* +0xe68862 */ __asm { MOV qword ptr [RBP + 0x410],RAX }
    /* +0xe68869 */ __asm { SUB RAX,R10 }
    /* +0xe6886c */ __asm { MOV RCX,-0x7d324cd8248e048b }
    /* +0xe68876 */ __asm { CMP RAX,RCX }
    /* +0xe68879 */ __asm { NOP }
    /* +0xe6887a */ __asm { NOP }
    /* +0xe6887b */ __asm { NOP }
    /* +0xe6887c */ __asm { NOP }
    /* +0xe6887d */ __asm { NOP }
    /* +0xe6887e */ __asm { MOV CX,0x5085 }
    /* +0xe68882 */ __asm { IMUL R11D,ECX,0x78e7 }
    /* +0xe68889 */ __asm { MOV ECX,EBX }
    /* +0xe6888b */ __asm { ROL R11W,CL }
    /* +0xe6888f */ __asm { MOVZX R10D,R11W }
    /* +0xe68893 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xe68897 */ __asm { MOV CX,0x7b8a }
    /* +0xe6889b */ __asm { ADD ECX,EBX }
    /* +0xe6889d */ __asm { ROL CX,0xd }
    /* +0xe688a1 */ __asm { NOT ECX }
    /* +0xe688a3 */ __asm { MOVZX R10D,CX }
    /* +0xe688a7 */ __asm { NOT RAX }
    /* +0xe688aa */ __asm { ADD RAX,qword ptr GS:[R10] }
    /* +0xe688ae */ __asm { MOV ECX,0x20bb566f }
    /* +0xe688b3 */ __asm { MOV R11D,0x361ba754 }
    /* +0xe688b9 */ __asm { ADD R11D,EBX }
    /* +0xe688bc */ __asm { ROL R11D,0x1b }
    /* +0xe688c0 */ __asm { NOT ECX }
    /* +0xe688c2 */ __asm { ADD R11D,0x625a3044 }
    /* +0xe688c9 */ __asm { MOVSXD RDX,R11D }
    /* +0xe688cc */ __asm { MOV R10D,0xdace3a0e }
    /* +0xe688d2 */ __asm { IMUL R10D,R14D }
    /* +0xe688d6 */ __asm { XOR R10D,0xc1ca3060 }
    /* +0xe688dd */ __asm { ROL R10D,0x1d }
    /* +0xe688e1 */ __asm { LEA R8D,[RBX + RCX*0x1] }
    /* +0xe688e5 */ __asm { ADD R8D,0x2c2adf6 }
    /* +0xe688ec */ __asm { MOV RCX,0x79dce223970bab43 }
    /* +0xe688f6 */ __asm { IMUL RCX,RAX }
    /* +0xe688fa */ __asm { XOR RCX,-0x55d7ec68 }
    /* +0xe68901 */ __asm { CMP RDX,R8 }
    /* +0xe68904 */ __asm { MOV RAX,0x79dce223c2dc4725 }
    /* +0xe6890e */ __asm { CMOVL RAX,RCX }
    /* +0xe68912 */ __asm { MOV RCX,-0x11d4d6b20a76a634 }
    /* +0xe6891c */ __asm { XOR R11D,R11D }
    /* +0xe6891f */ __asm { XOR R8D,R8D }
    /* +0xe68922 */ __asm { CMP RAX,RCX }
    /* +0xe68925 */ __asm { SETG R11B }
    /* +0xe68929 */ __asm { SETZ R8B }
    /* +0xe6892d */ __asm { MOV EDX,0x1111effc }
    /* +0xe68932 */ __asm { XOR EDX,0xe7fdc01 }
    /* +0xe68938 */ __asm { SUB EDX,EBX }
    /* +0xe6893a */ __asm { CMP RDX,R10 }
    /* +0xe6893d */ __asm { CMOVL R11D,R8D }
    /* +0xe68941 */ __asm { CMP R11B,0x1 }
    /* +0xe68945 */ __asm { NOP }
    /* +0xe68946 */ __asm { NOP }
    /* +0xe68947 */ __asm { NOP }
    /* +0xe68948 */ __asm { NOP }
    /* +0xe68949 */ __asm { NOP }
    /* +0xe6894a */ __asm { NOP }
    /* +0xe6894b */ __asm { NOP }
    /* +0xe6894c */ __asm { NOP }
    /* +0xe6894d */ __asm { NOP }
    /* +0xe6894e */ __asm { NOP }
    /* +0xe6894f */ __asm { NOP }
    /* +0xe68950 */ __asm { NOP }
    /* +0xe68951 */ __asm { NOP }
    /* +0xe68952 */ __asm { NOP }
    /* +0xe68953 */ __asm { NOP }
    /* +0xe68954 */ __asm { NOP }
    /* +0xe68955 */ __asm { NOP }
    /* +0xe7aee2 */ __asm { TEST R11D,ESI }
    /* +0xe7aee5 */ __asm { SETZ AL }
    /* +0xe7aee8 */ __asm { MOVAPS XMM15,xmmword ptr [RBP + 0x530] }
    /* +0xe7aef0 */ __asm { MOVAPS XMM7,xmmword ptr [RBP + 0x540] }
    /* +0xe7aef7 */ __asm { MOVAPS XMM8,xmmword ptr [RBP + 0x550] }
    /* +0xe7aeff */ __asm { MOVAPS XMM14,xmmword ptr [RBP + 0x560] }
    /* +0xe7af07 */ __asm { MOVAPS XMM12,xmmword ptr [RBP + 0x570] }
    /* +0xe7af0f */ __asm { MOVAPS XMM9,xmmword ptr [RBP + 0x580] }
    /* +0xe7af17 */ __asm { MOVAPS XMM10,xmmword ptr [RBP + 0x590] }
    /* +0xe7af1f */ __asm { MOVAPS XMM11,xmmword ptr [RBP + 0x5a0] }
    /* +0xe7af27 */ __asm { MOVAPS XMM6,xmmword ptr [RBP + 0x5b0] }
    /* +0xe7af2e */ __asm { MOVAPS XMM13,xmmword ptr [RBP + 0x5c0] }
    /* +0xe7af36 */ __asm { ADD RSP,0x658 }
    /* +0xe7af3d */ __asm { POP R12 }
    /* +0xe7af3f */ __asm { POP RDI }
    /* +0xe7af40 */ __asm { POP R13 }
    /* +0xe7af42 */ __asm { POP R15 }
    /* +0xe7af44 */ __asm { POP RSI }
    /* +0xe7af45 */ __asm { POP RBX }
    /* +0xe7af46 */ __asm { POP R14 }
    /* +0xe7af48 */ __asm { POP RBP }
    /* +0xe7af49 */ __asm { RET }
    /* +0xe7b104 */ __asm { SCASD RDI }
    /* +0xe7b105 */ __asm { LEA EBP,[RAX + 0x1] }
    /* +0xe7b108 */ __asm { ADD uint8_t ptr [RAX],AL }
    /* +0xe7b10a */ __asm { MOV R11D,0xffffa417 }
    /* +0xe7b111 */ __asm { SUB EBX,ECX }
    /* +0xe7b113 */ __asm { MOV R10,qword ptr [RBP + 0x160] }
    /* +0xe7b11a */ __asm { XOR R10D,R11D }
    /* +0xe7b11d */ __asm { MOVSX RCX,R10W }
    /* +0xe7b121 */ __asm { ADD RCX,RAX }
    /* +0xe7b124 */ __asm { CALL RCX }
    /* +0xe7b126 */ __asm { JMP 0x7fffa55eb111 }
    /* +0xe7b12c */ __asm { MOV [0xc44ca31152c9a081],EAX }
    /* +0xe7b135 */ __asm { CMPSD RDI,RSI }
    /* +0xe7b136 */ __asm { JS 0x7fffa55eb104 }
    /* +0xe7b138 */ __asm { OR uint8_t ptr [RAX],DL }
    /* +0xe7b13a */ __asm { JMP 0x7fffa55d8826 }
    /* +0xe7b13f */ __asm { CMP dword ptr [R9 + R13*0x8 + -0x12905],0x1d8d4c90 }
    /* +0xe7b14b */ __asm { MOV CL,0x4e }
    /* +0xe7b14d */ __asm { SBB BH,BH }
    /* +0xe7b14f */ __asm { MOV RDX,0x0 }
    /* +0xe7b156 */ __asm { XCHG EAX,EDI }
    /* +0xe7b157 */ __asm { MOV uint8_t ptr [RBX + 0x35],DH }
    /* +0xe7b15a */ __asm { ADC DL,BH }
    /* +0xe7b15c */ __asm { XCHG dword ptr [RDI + -0x17],EBX }
    /* +0xe7b15f */ __asm { ADC AL,BL }
}


// ============================================================================
// Function : Unwind@7fffa55ecb20  |  RVA: 0xe7cb20  |  Size: 414 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55ecb20(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x470) & 0xf;
  if ((uint64_t)(uint16_t)~(-0x3801 << bVar1 | 0xc7ffU >> 0x10 - bVar1) <
      *(uint64_t *)(param_2 + 0x268)) {
    (*(code *)((int64_t)
               (short)((short)*(uint64_t *)(param_2 + 0x4e0) *
                      (0x7b65 - (short)*(uint32_t *)(param_2 + 0x470))) + 0x7fffa568b5c0))
              (*(uint64_t *)(param_2 + 0x120) ^ 0xa817fc09,&IMAGE_DOS_HEADER_7fffa4770000,
               *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  *(uint64_t *)(param_2 + 0x260) = 0;
  *(uint16_t *)(param_2 + 0x250) = 0;
  *(uint64_t *)(param_2 + 0x268) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa55eccc0  |  RVA: 0xe7ccc0  |  Size: 364 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55eccc0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x558)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x470) & 0xf;
    (*(code *)(&UNK_7fffa5688137 +
              (short)((short)*(uint64_t *)(param_2 + 0xf0) +
                     (0x5125U >> bVar1 | 0x5125 << 0x10 - bVar1))))
              (&UNK_7fffa5688137 +
               (short)((short)*(uint64_t *)(param_2 + 0xf0) +
                      (0x5125U >> bVar1 | 0x5125 << 0x10 - bVar1)),param_2,
               *(uint64_t *)(param_2 + 0x540) >> 0x3d ^ *(uint64_t *)(param_2 + 0x540));
  }
  *(uint64_t *)(param_2 + 0x558) = 7;
  *(uint16_t *)(param_2 + 0x540) = 0;
  *(uint64_t *)(param_2 + 0x550) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa55ece30  |  RVA: 0xe7ce30  |  Size: 351 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55ece30(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x268)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x470) & 0x1f;
    pcVar2 = (code *)((int64_t)
                      (int)((0x5d06cc17 << bVar1 | 0x5d06cc17U >> 0x20 - bVar1) *
                           *(int *)(param_2 + 0x508)) + 0x7fffa5692c67);
    (*pcVar2)(pcVar2,param_2,
              *(uint64_t *)(param_2 + 0x250) >> 0x3d ^ *(uint64_t *)(param_2 + 0x250));
  }
  *(uint64_t *)(param_2 + 0x260) = 0;
  *(uint16_t *)(param_2 + 0x250) = 0;
  *(uint64_t *)(param_2 + 0x268) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa55ecf90  |  RVA: 0xe7cf90  |  Size: 311 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55ecf90(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)((int64_t)(short)(((uint16_t)*(uint32_t *)(param_2 + 0xf0) ^ 0xee31) + 0x7727) +
                   0x7fffa568c6c8);
  (*pcVar1)(pcVar1,param_2,*(uint64_t *)(param_2 + 0x1b0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1b0)
           );
  return;
}


// ============================================================================
// Function : Unwind@7fffa55ed0d0  |  RVA: 0xe7d0d0  |  Size: 389 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55ed0d0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  int64_t lVar3;
  code *pcVar4;
  uint32_t uVar5;
  
  uVar5 = 0x23282e37 - *(int *)(param_2 + 0x1e0);
  if ((uint64_t)~(uVar5 * 0x800 | uVar5 >> 0x15) < *(uint64_t *)(param_2 + 0x198)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x470) & 0x1f;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x248) & 0xf;
    lVar3 = (int64_t)
            (short)(~(0x2720U >> bVar2 | 0x2720 << 0x10 - bVar2) +
                   (short)*(uint64_t *)(param_2 + 0x470));
    pcVar4 = (code *)(lVar3 + 0x7fffa568c2c5);
    (*pcVar4)(lVar3,pcVar4,*(uint64_t *)(param_2 + 0x180) >> 0x3d ^ *(uint64_t *)(param_2 + 0x180)
              ,-0x6fffce8b << bVar1 | 0x90003175U >> 0x20 - bVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa55ed260  |  RVA: 0xe7d260  |  Size: 410 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa55ed260(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  code *pcVar3;
  int iVar4;
  uint32_t uVar5;
  uint16_t uVar6;
  uint32_t uVar7;
  
  uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x1e0);
  iVar4 = (int)*(uint64_t *)(param_2 + 0x470);
  uVar7 = ~(uVar5 ^ 0x24082ff8);
  uVar2 = 6;
  if ((int64_t)(int)((uVar5 + 0x758338bb ^ 0x878dfdd8) + iVar4) <
      (int64_t)(uint64_t)(iVar4 + 0x72539f4b)) {
    uVar2 = (uint64_t)~(uVar7 << 0x1a | uVar7 >> 6);
  }
  if (uVar2 < *(uint64_t *)(param_2 + 0x208)) {
    uVar6 = 0x721 - (short)*(uint64_t *)(param_2 + 0x470);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x248) & 0xf;
    pcVar3 = (code *)((int64_t)(short)((uVar6 >> bVar1 | uVar6 << 0x10 - bVar1) ^ 0xb101) +
                     0x7fffa568a210);
    (*pcVar3)(pcVar3,*(uint64_t *)(param_2 + 0x470),
              *(uint64_t *)(param_2 + 0x1f0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1f0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa55ed400  |  RVA: 0xe7d400  |  Size: 4872 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa55ed400(void) {
    /* +0xe7d400 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0xe7d405 */ __asm { PUSH RBP }
    /* +0xe7d406 */ __asm { PUSH R14 }
    /* +0xe7d408 */ __asm { PUSH RBX }
    /* +0xe7d409 */ __asm { PUSH RSI }
    /* +0xe7d40a */ __asm { PUSH R15 }
    /* +0xe7d40c */ __asm { PUSH R13 }
    /* +0xe7d40e */ __asm { PUSH RDI }
    /* +0xe7d40f */ __asm { PUSH R12 }
    /* +0xe7d411 */ __asm { SUB RSP,0x108 }
    /* +0xe7d418 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0xe7d41f */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM13 }
    /* +0xe7d426 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM6 }
    /* +0xe7d42c */ __asm { MOVAPS xmmword ptr [RSP + 0x80],XMM11 }
    /* +0xe7d435 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0xe7d43f */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM9 }
    /* +0xe7d449 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM12 }
    /* +0xe7d453 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM14 }
    /* +0xe7d45d */ __asm { MOVDQA xmmword ptr [RSP + 0xd0],XMM8 }
    /* +0xe7d467 */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM7 }
    /* +0xe7d470 */ __asm { MOVDQA xmmword ptr [RSP + 0xf0],XMM15 }
    /* +0xe7d47a */ __asm { LEA RCX,[RBP + 0x430] }
    /* +0xe7d481 */ __asm { MOV RAX,0x377fffffe03a486f }
    /* +0xe7d48b */ __asm { ADD RAX,RCX }
    /* +0xe7d48e */ __asm { MOV RDX,RCX }
    /* +0xe7d491 */ __asm { SHL RDX,0x37 }
    /* +0xe7d495 */ __asm { MOV R11D,0x1961c78a }
    /* +0xe7d49b */ __asm { IMUL R11D,dword ptr [RBP + 0x4a0] }
    /* +0xe7d4a3 */ __asm { LEA R10,[0x7fffa4ee23ab] }
    /* +0xe7d4aa */ __asm { MOV ECX,0x342b5618 }
    /* +0xe7d4af */ __asm { IMUL R8D,ECX,0x78803f7f }
    /* +0xe7d4b6 */ __asm { MOV RCX,qword ptr [RBP + 0x70] }
    /* +0xe7d4ba */ __asm { ROR R8D,CL }
    /* +0xe7d4bd */ __asm { NOT R11D }
    /* +0xe7d4c0 */ __asm { SUB R8D,dword ptr [RBP + 0x3f0] }
    /* +0xe7d4c7 */ __asm { MOVSXD R9,R8D }
    /* +0xe7d4ca */ __asm { ADD RAX,RDX }
    /* +0xe7d4cd */ __asm { ADD R11D,dword ptr [RBP + 0x160] }
    /* +0xe7d4d4 */ __asm { MOVSXD RCX,R11D }
    /* +0xe7d4d7 */ __asm { ADD RCX,R10 }
    /* +0xe7d4da */ __asm { CALL RCX }
    /* +0xe7d4dc */ __asm { MOV RDI,qword ptr [RBP + 0x68] }
    /* +0xe7d4e0 */ __asm { RDTSC }
    /* +0xe7d4e2 */ __asm { SHL RDX,0x20 }
    /* +0xe7d4e6 */ __asm { OR RDX,RAX }
    /* +0xe7d4e9 */ __asm { MOV RAX,-0x30ebf64fafbc6efb }
    /* +0xe7d4f3 */ __asm { IMUL RDX,RAX }
    /* +0xe7d4f7 */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xe7d501 */ __asm { ADD RDX,RAX }
    /* +0xe7d504 */ __asm { MOV R10,RDX }
    /* +0xe7d507 */ __asm { SHR R10,0x1b }
    /* +0xe7d50b */ __asm { MOV RCX,RDX }
    /* +0xe7d50e */ __asm { SHR RCX,0x3b }
    /* +0xe7d512 */ __asm { SHR RDX,0x2d }
    /* +0xe7d516 */ __asm { XOR EDX,R10D }
    /* +0xe7d519 */ __asm { ROR EDX,CL }
    /* +0xe7d51b */ __asm { AND EDX,0x3 }
    /* +0xe7d51e */ __asm { CMP EDX,0x2 }
    /* +0xe7d521 */ __asm { JC 0x7fffa55ed75e }
    /* +0xe7d527 */ __asm { CMP EDX,0x3 }
    /* +0xe7d52a */ __asm { JNZ 0x7fffa55eda47 }
    /* +0xe7d530 */ __asm { MOV RAX,0x3fe31b2cf8115851 }
    /* +0xe7d53a */ __asm { XOR RAX,0x1764f8b7 }
    /* +0xe7d540 */ __asm { ROL RAX,0x29 }
    /* +0xe7d544 */ __asm { MOV RCX,qword ptr [RBP + 0x70] }
    /* +0xe7d548 */ __asm { ROR RAX,CL }
    /* +0xe7d54b */ __asm { MOV R10D,0xb139d63d }
    /* +0xe7d551 */ __asm { MOV RDX,R10 }
    /* +0xe7d554 */ __asm { XOR RDX,RAX }
    /* +0xe7d557 */ __asm { CMP RDX,-0x1 }
    /* +0xe7d55b */ __asm { NOP }
    /* +0xe7d55c */ __asm { NOP }
    /* +0xe7d55d */ __asm { NOP }
    /* +0xe7d55e */ __asm { NOP }
    /* +0xe7d55f */ __asm { NOP }
    /* +0xe7d560 */ __asm { NOP }
    /* +0xe7d561 */ __asm { NOP }
    /* +0xe7d562 */ __asm { NOP }
    /* +0xe7d563 */ __asm { NOP }
    /* +0xe7d564 */ __asm { NOP }
    /* +0xe7d565 */ __asm { CMP dword ptr [R10 + -0x313bd27d],0xd }
    /* +0xe7d56d */ __asm { JNC 0x7fffa55ede88 }
    /* +0xe7d573 */ __asm { PXOR XMM0,XMM0 }
    /* +0xe7d577 */ __asm { MOVDQA xmmword ptr [RBP + 0x120],XMM0 }
    /* +0xe7d57f */ __asm { MOV dword ptr [RBP + 0xf8],0x1875a4a3 }
    /* +0xe7d589 */ __asm { MOV ECX,dword ptr [RBP + 0xf8] }
    /* +0xe7d58f */ __asm { CMP ECX,0x69bbd490 }
    /* +0xe7d595 */ __asm { JNC 0x7fffa55ee5cd }
    /* +0xe7d59b */ __asm { MOV dword ptr [RBP + 0x120],0x0 }
    /* +0xe7d5a5 */ __asm { MOV dword ptr [RBP + 0xf8],0xb57340b2 }
    /* +0xe7d5af */ __asm { MOV ECX,dword ptr [RBP + 0xf8] }
    /* +0xe7d5b5 */ __asm { TEST ECX,ECX }
    /* +0xe7d5b7 */ __asm { JNS 0x7fffa55ee5d5 }
    /* +0xe7d5bd */ __asm { PUSHFQ }
    /* +0xe7d5be */ __asm { POP RDX }
    /* +0xe7d5bf */ __asm { TEST EDX,0x100 }
    /* +0xe7d5c5 */ __asm { NOP }
    /* +0xe7d5c6 */ __asm { NOP }
    /* +0xe7d5c7 */ __asm { NOP }
    /* +0xe7d5c8 */ __asm { NOP }
    /* +0xe7d5c9 */ __asm { NOP }
    /* +0xe7d5ca */ __asm { NOP }
    /* +0xe7d5cb */ __asm { NOP }
    /* +0xe7d5cc */ __asm { NOP }
    /* +0xe7d5cd */ __asm { MOV CX,0x7536 }
    /* +0xe7d5d1 */ __asm { MOV R11D,dword ptr [RBP + 0x168] }
    /* +0xe7d5d8 */ __asm { IMUL R11D,ECX }
    /* +0xe7d5dc */ __asm { ADD R11D,0x3882 }
    /* +0xe7d5e3 */ __asm { MOV RCX,qword ptr [RBP + 0x70] }
    /* +0xe7d5e7 */ __asm { ROL R11W,CL }
    /* +0xe7d5eb */ __asm { MOVZX R10D,R11W }
    /* +0xe7d5ef */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xe7d5f3 */ __asm { MOV RAX,qword ptr [RAX + 0x4d0] }
    /* +0xe7d5fa */ __asm { MOV R10,0x60c0159081c2155 }
    /* +0xe7d604 */ __asm { ADD R10,RAX }
    /* +0xe7d607 */ __asm { MOV RAX,-0x3aeb43daf1be8f }
    /* +0xe7d611 */ __asm { CMP R10,RAX }
    /* +0xe7d614 */ __asm { NOP }
    /* +0xe7d615 */ __asm { NOP }
    /* +0xe7d616 */ __asm { NOP }
    /* +0xe7d617 */ __asm { NOP }
    /* +0xe7d618 */ __asm { NOP }
    /* +0xe7d619 */ __asm { NOP }
    /* +0xe7d61a */ __asm { NOP }
    /* +0xe7d61b */ __asm { NOP }
    /* +0xe7d61c */ __asm { NOP }
    /* +0xe7d61d */ __asm { NOP }
    /* +0xe7d61e */ __asm { NOP }
    /* +0xe7d61f */ __asm { NOP }
    /* +0xe7d620 */ __asm { NOP }
    /* +0xe7d621 */ __asm { NOP }
    /* +0xe7d622 */ __asm { LEA R11,[0x7fffa47bbaf9] }
    /* +0xe7d629 */ __asm { MOV RAX,0x61be20a9a0b7188d }
    /* +0xe7d633 */ __asm { CMP R11,RAX }
    /* +0xe7d636 */ __asm { JZ 0x7fffa55ee5e9 }
    /* +0xe7d63c */ __asm { MOV R8W,0xb9f5 }
    /* +0xe7d641 */ __asm { MOV R10W,0x404 }
    /* +0xe7d646 */ __asm { MOV RAX,qword ptr [RBP + 0x70] }
    /* +0xe7d64a */ __asm { XOR R10D,EAX }
    /* +0xe7d64d */ __asm { MOV RDX,qword ptr [RBP + 0x3f0] }
    /* +0xe7d654 */ __asm { MOV ECX,EDX }
    /* +0xe7d656 */ __asm { ROL R10W,CL }
    /* +0xe7d65a */ __asm { ROL R10W,0xd }
    /* +0xe7d65f */ __asm { ADD R10D,0xffffae2c }
    /* +0xe7d666 */ __asm { ADD R8D,EDX }
    /* +0xe7d669 */ __asm { MOVSX R10,R10W }
    /* +0xe7d66d */ __asm { LEA RBX,[0x7fffa478abe4] }
    /* +0xe7d674 */ __asm { MOV R12,-0xafd9d87e }
    /* +0xe7d67e */ __asm { SUB R12,RBX }
    /* +0xe7d681 */ __asm { XOR R8D,0x3b7a }
    /* +0xe7d688 */ __asm { MOV ECX,EAX }
    /* +0xe7d68a */ __asm { ROR R8W,CL }
    /* +0xe7d68e */ __asm { MOVZX R9D,R8W }
    /* +0xe7d692 */ __asm { MOV R8W,0x4c1c }
    /* +0xe7d697 */ __asm { ADD R8D,0x4906 }
    /* +0xe7d69e */ __asm { ROR R8W,CL }
    /* +0xe7d6a2 */ __asm { XOR R8D,EDX }
    /* +0xe7d6a5 */ __asm { MOVZX EAX,R8W }
    /* +0xe7d6a9 */ __asm { MOV CX,0xbc48 }
    /* +0xe7d6ad */ __asm { ADD ECX,EDX }
    /* +0xe7d6af */ __asm { NOT ECX }
    /* +0xe7d6b1 */ __asm { ROL CX,0xd }
    /* +0xe7d6b5 */ __asm { LEA R8D,[RCX + RCX*0x8] }
    /* +0xe7d6b9 */ __asm { LEA R8D,[R8 + R8*0x2] }
    /* +0xe7d6bd */ __asm { ADD ECX,ECX }
    /* +0xe7d6bf */ __asm { ADD ECX,R8D }
    /* +0xe7d6c2 */ __asm { MOVZX EDX,CX }
    /* +0xe7d6c5 */ __asm { MOV qword ptr [RBP + 0xf8],R8 }
    /* +0xe7d6cc */ __asm { MOV EAX,dword ptr [RAX + R11*0x1 + 0x88] }
    /* +0xe7d6d4 */ __asm { LEA R8,[RBP + 0x120] }
    /* +0xe7d6db */ __asm { SYSCALL }
    /* +0xe7d6dd */ __asm { MOV RAX,-0x669601bf3145721c }
    /* +0xe7d6e7 */ __asm { CMP R12,RAX }
    /* +0xe7d6ea */ __asm { NOP }
    /* +0xe7d6eb */ __asm { NOP }
    /* +0xe7d6ec */ __asm { NOP }
    /* +0xe7d6ed */ __asm { NOP }
    /* +0xe7d6ee */ __asm { NOP }
    /* +0xe7d6ef */ __asm { NOP }
    /* +0xe7d6f0 */ __asm { MOV CX,0xf6f }
    /* +0xe7d6f4 */ __asm { MOVQ XMM0,RBX }
    /* +0xe7d6f9 */ __asm { MOV R11D,0xa74f749f }
    /* +0xe7d6ff */ __asm { IMUL R11D,R11D,0x25fc50c9 }
    /* +0xe7d706 */ __asm { ADD R11D,0xc7ee8539 }
    /* +0xe7d70d */ __asm { MOV RDX,qword ptr [RBP + 0x70] }
    /* +0xe7d711 */ __asm { XOR R11D,EDX }
    /* +0xe7d714 */ __asm { IMUL R11D,dword ptr [RBP + 0x4a0] }
    /* +0xe7d71c */ __asm { MOVSXD RAX,R11D }
    /* +0xe7d71f */ __asm { MOVQ XMM5,RAX }
    /* +0xe7d724 */ __asm { PADDQ XMM5,XMM0 }
    /* +0xe7d728 */ __asm { MOV qword ptr [RBP + 0x120],R10 }
    /* +0xe7d72f */ __asm { MOVQ RAX,XMM5 }
    /* +0xe7d734 */ __asm { MOV EAX,dword ptr [RAX + 0xc0] }
    /* +0xe7d73a */ __asm { MOV R11D,EDX }
    /* +0xe7d73d */ __asm { OR R11D,0x1 }
    /* +0xe7d741 */ __asm { IMUL R11D,ECX }
    /* +0xe7d745 */ __asm { ROL R11W,0xc }
    /* +0xe7d74a */ __asm { MOV RCX,qword ptr [RBP + 0x3f0] }
    /* +0xe7d751 */ __asm { ROL R11W,CL }
    /* +0xe7d755 */ __asm { MOVSX R10,R11W }
    /* +0xe7d759 */ __asm { JMP 0x7fffa55ee4e2 }
    /* +0xe7d75e */ __asm { CMP EDX,0x1 }
    /* +0xe7d761 */ __asm { JNZ 0x7fffa55edce6 }
    /* +0xe7d767 */ __asm { LEA R10,[0x7fffa47b8efc] }
    /* +0xe7d76e */ __asm { MOV RAX,-0x1d61b510c0df466 }
    /* +0xe7d778 */ __asm { CMP R10,RAX }
    /* +0xe7d77b */ __asm { JZ 0x7fffa55ee5f1 }
    /* +0xe7d781 */ __asm { MOV ECX,0xa98b5a2a }
    /* +0xe7d786 */ __asm { MOV EDX,0xb6a10159 }
    /* +0xe7d78b */ __asm { MOV RAX,qword ptr [RBP + 0x4a0] }
    /* +0xe7d792 */ __asm { IMUL EAX,ECX }
    /* +0xe7d795 */ __asm { SUB EDX,dword ptr [RBP + 0x160] }
    /* +0xe7d79b */ __asm { ROL EDX,0x2 }
    /* +0xe7d79e */ __asm { XOR EDX,dword ptr [RBP + 0x3f0] }
    /* +0xe7d7a4 */ __asm { NOT EDX }
    /* +0xe7d7a6 */ __asm { MOVZX ECX,uint8_t ptr [R10 + 0x384d] }
    /* +0xe7d7ae */ __asm { ADD EAX,0x883e340c }
    /* +0xe7d7b3 */ __asm { MOVZX R9D,uint8_t ptr [R10 + RCX*0x4 + 0x3853] }
    /* +0xe7d7bc */ __asm { NOT R9B }
    /* +0xe7d7bf */ __asm { ROL R9B,0x5 }
    /* +0xe7d7c3 */ __asm { MOV uint8_t ptr [RBP + 0x120],R9B }
    /* +0xe7d7ca */ __asm { MOVZX R9D,uint8_t ptr [R10 + RCX*0x4 + 0x3854] }
    /* +0xe7d7d3 */ __asm { NOT R9B }
    /* +0xe7d7d6 */ __asm { ROL R9B,0x5 }
    /* +0xe7d7da */ __asm { MOV uint8_t ptr [RBP + 0x121],R9B }
    /* +0xe7d7e1 */ __asm { MOVZX R9D,uint8_t ptr [R10 + RCX*0x4 + 0x3855] }
    /* +0xe7d7ea */ __asm { NOT R9B }
    /* +0xe7d7ed */ __asm { ROL R9B,0x5 }
    /* +0xe7d7f1 */ __asm { MOV uint8_t ptr [RBP + 0x122],R9B }
    /* +0xe7d7f8 */ __asm { MOVZX ECX,uint8_t ptr [R10 + RCX*0x4 + 0x3856] }
    /* +0xe7d801 */ __asm { NOT CL }
    /* +0xe7d803 */ __asm { ROL CL,0x5 }
    /* +0xe7d806 */ __asm { MOV uint8_t ptr [RBP + 0x123],CL }
    /* +0xe7d80c */ __asm { MOV ECX,0x9102c3cc }
    /* +0xe7d811 */ __asm { XOR ECX,dword ptr [RBP + 0x120] }
    /* +0xe7d817 */ __asm { MOV R11D,0x1 }
    /* +0xe7d81d */ __asm { SHL R11D,CL }
    /* +0xe7d820 */ __asm { MOV R8D,R11D }
    /* +0xe7d823 */ __asm { AND R8D,ECX }
    /* +0xe7d826 */ __asm { SUB R11D,ECX }
    /* +0xe7d829 */ __asm { CMP RDX,RAX }
    /* +0xe7d82c */ __asm { CMOVLE R11D,R8D }
    /* +0xe7d830 */ __asm { TEST R11D,R11D }
    /* +0xe7d833 */ __asm { JZ 0x7fffa55ee219 }
    /* +0xe7d839 */ __asm { PUSHFQ }
    /* +0xe7d83a */ __asm { POP RDX }
    /* +0xe7d83b */ __asm { PXOR XMM0,XMM0 }
    /* +0xe7d83f */ __asm { MOVDQA xmmword ptr [RBP + 0x120],XMM0 }
    /* +0xe7d847 */ __asm { TEST EDX,0x100 }
    /* +0xe7d84d */ __asm { NOP }
    /* +0xe7d84e */ __asm { NOP }
    /* +0xe7d84f */ __asm { NOP }
    /* +0xe7d850 */ __asm { NOP }
    /* +0xe7d851 */ __asm { NOP }
    /* +0xe7d852 */ __asm { MOV ECX,0x702acffa }
    /* +0xe7d857 */ __asm { IMUL R11D,ECX,-0x7a0e0ab1 }
    /* +0xe7d85e */ __asm { XOR R11D,0xbc4dbcad }
    /* +0xe7d865 */ __asm { MOV RCX,qword ptr [RBP + 0x160] }
    /* +0xe7d86c */ __asm { ROL R11D,CL }
    /* +0xe7d86f */ __asm { ADD R11D,dword ptr [RBP + 0x3f0] }
    /* +0xe7d876 */ __asm { MOV dword ptr [RBP + 0xf8],R11D }
    /* +0xe7d87d */ __asm { MOV ECX,dword ptr [RBP + 0xf8] }
    /* +0xe7d883 */ __asm { TEST ECX,ECX }
    /* +0xe7d885 */ __asm { JNS 0x7fffa55ed8a1 }
    /* +0xe7d887 */ __asm { MOV R10,0x0 }
    /* +0xe7d88e */ __asm { NOP }
    /* +0xe7d88f */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe7d896 */ __asm { AND AL,0xab }
    /* +0xe7d898 */ __asm { INSD RDI,DX }
    /* +0xe7d899 */ __asm { PUSH RDX }
    /* +0xe7d89a */ __asm { IRETD }
    /* +0xe7d8a1 */ __asm { MOV R11W,0x184f }
    /* +0xe7d8a6 */ __asm { XOR R11D,0xe630 }
    /* +0xe7d8ad */ __asm { MOV RCX,qword ptr [RBP + 0x3f0] }
    /* +0xe7d8b4 */ __asm { ROL R11W,CL }
    /* +0xe7d8b8 */ __asm { NOT R11D }
    /* +0xe7d8bb */ __asm { MOV RCX,qword ptr [RBP + 0x160] }
    /* +0xe7d8c2 */ __asm { ROL R11W,CL }
    /* +0xe7d8c6 */ __asm { MOVZX R10D,R11W }
    /* +0xe7d8ca */ __asm { MOV dword ptr [RBP + 0x120],0x0 }
    /* +0xe7d8d4 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xe7d8d8 */ __asm { MOV R11W,0x13a4 }
    /* +0xe7d8dd */ __asm { ADD R11D,0xffffff74 }
    /* +0xe7d8e4 */ __asm { IMUL R11D,dword ptr [RBP + 0x168] }
    /* +0xe7d8ec */ __asm { ADD R11D,ECX }
    /* +0xe7d8ef */ __asm { MOVZX R10D,R11W }
    /* +0xe7d8f3 */ __asm { MOV RAX,qword ptr [RAX + 0x60] }
    /* +0xe7d8f7 */ __asm { MOV RCX,qword ptr GS:[R10] }
    /* +0xe7d8fb */ __asm { MOV RCX,-0x2495b4658a37c48c }
    /* +0xe7d905 */ __asm { IMUL RCX,qword ptr [RBP + 0x428] }
    /* +0xe7d90d */ __asm { MOV RDX,-0xcc5d7b93 }
    /* +0xe7d917 */ __asm { ADD RDX,RCX }
    /* +0xe7d91a */ __asm { MOV RCX,qword ptr [RBP + 0x70] }
    /* +0xe7d91e */ __asm { ROR RDX,CL }
    /* +0xe7d921 */ __asm { CMP RAX,RDX }
    /* +0xe7d924 */ __asm { NOP }
    /* +0xe7d925 */ __asm { NOP }
    /* +0xe7d926 */ __asm { NOP }
    /* +0xe7d927 */ __asm { NOP }
    /* +0xe7d928 */ __asm { NOP }
    /* +0xe7d929 */ __asm { NOP }
    /* +0xe7d92a */ __asm { NOP }
    /* +0xe7d92b */ __asm { NOP }
    /* +0xe7d92c */ __asm { NOP }
    /* +0xe7d92d */ __asm { MOV CX,0x9870 }
    /* +0xe7d931 */ __asm { MOV RAX,qword ptr [RBP + 0x70] }
    /* +0xe7d935 */ __asm { MOV R11D,EAX }
    /* +0xe7d938 */ __asm { OR R11D,0x1 }
    /* +0xe7d93c */ __asm { IMUL R11D,ECX }
    /* +0xe7d940 */ __asm { ROL R11W,0x1 }
    /* +0xe7d944 */ __asm { MOV ECX,dword ptr [RBP + 0x168] }
    /* +0xe7d94a */ __asm { IMUL ECX,R11D }
    /* +0xe7d94e */ __asm { MOVZX R10D,CX }
    /* +0xe7d952 */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xe7d956 */ __asm { MOV RCX,-0x7012e99a7b67fac3 }
    /* +0xe7d960 */ __asm { CMP qword ptr [RAX + 0x30],RCX }
    /* +0xe7d964 */ __asm { NOP }
    /* +0xe7d965 */ __asm { NOP }
    /* +0xe7d966 */ __asm { NOP }
    /* +0xe7d967 */ __asm { NOP }
    /* +0xe7d968 */ __asm { NOP }
    /* +0xe7d969 */ __asm { LEA R11,[0x7fffa4789a28] }
    /* +0xe7d970 */ __asm { MOV R10,R11 }
    /* +0xe7d973 */ __asm { ROL R10,0x11 }
    /* +0xe7d977 */ __asm { MOV RAX,-0xad0269c1 }
    /* +0xe7d981 */ __asm { ADD RAX,R10 }
    /* +0xe7d984 */ __asm { MOV RCX,0x2a5eac7c04fead06 }
    /* +0xe7d98e */ __asm { CMP RAX,RCX }
    /* +0xe7d991 */ __asm { JZ 0x7fffa55ee60b }
    /* +0xe7d997 */ __asm { MOV R8W,0x5054 }
    /* +0xe7d99c */ __asm { LEA RBX,[0x7fffa47b4ef2] }
    /* +0xe7d9a3 */ __asm { MOV CX,0x42cb }
    /* +0xe7d9a7 */ __asm { MOV ESI,dword ptr [RBP + 0x168] }
    /* +0xe7d9ad */ __asm { IMUL ECX,ESI }
    /* +0xe7d9b0 */ __asm { MOV RAX,qword ptr [RBP + 0x160] }
    /* +0xe7d9b7 */ __asm { MOV R9D,EAX }
    /* +0xe7d9ba */ __asm { XOR R9D,ECX }
    /* +0xe7d9bd */ __asm { ROL R9W,0xc }
    /* +0xe7d9c2 */ __asm { MOV DX,0x3428 }
    /* +0xe7d9c6 */ __asm { XOR EDX,0x26a0 }
    /* +0xe7d9cc */ __asm { IMUL EDX,ESI }
    /* +0xe7d9cf */ __asm { MOV RCX,qword ptr [RBP + 0x70] }
    /* +0xe7d9d3 */ __asm { ROL DX,CL }
    /* +0xe7d9d6 */ __asm { MOVSX R10,R9W }
    /* +0xe7d9da */ __asm { MOVZX EDX,DX }
    /* +0xe7d9dd */ __asm { MOV qword ptr [RBP + 0xf8],RAX }
    /* +0xe7d9e4 */ __asm { MOV EAX,dword ptr [R11 + -0x4b9c] }
    /* +0xe7d9eb */ __asm { IMUL R8D,ESI }
    /* +0xe7d9ef */ __asm { XOR R8D,0xa74 }
    /* +0xe7d9f6 */ __asm { MOVZX R9D,R8W }
    /* +0xe7d9fa */ __asm { LEA R8,[RBP + 0x120] }
    /* +0xe7da01 */ __asm { SYSCALL }
    /* +0xe7da03 */ __asm { MOV RAX,-0x63b04d120b49211f }
    /* +0xe7da0d */ __asm { CMP RBX,RAX }
    /* +0xe7da10 */ __asm { NOP }
    /* +0xe7da11 */ __asm { NOP }
    /* +0xe7da12 */ __asm { NOP }
    /* +0xe7da13 */ __asm { NOP }
    /* +0xe7da14 */ __asm { NOP }
    /* +0xe7da15 */ __asm { MOV ECX,0x8f77d01f }
    /* +0xe7da1a */ __asm { ADD ECX,0xd6b84295 }
    /* +0xe7da20 */ __asm { MOV R11D,dword ptr [RBP + 0x488] }
    /* +0xe7da27 */ __asm { IMUL R11D,ECX }
    /* +0xe7da2b */ __asm { SUB R11D,dword ptr [RBP + 0x3f0] }
    /* +0xe7da32 */ __asm { MOV qword ptr [RBP + 0x120],R10 }
    /* +0xe7da39 */ __asm { MOV EAX,dword ptr [RBX + 0x7616] }
    /* +0xe7da3f */ __asm { MOVSXD R10,R11D }
    /* +0xe7da42 */ __asm { JMP 0x7fffa55ee4e2 }
    /* +0xe7da47 */ __asm { LEA R11,[0x7fffa47b70b0] }
    /* +0xe7da4e */ __asm { MOV ECX,0x2f6969e6 }
    /* +0xe7da53 */ __asm { IMUL ECX,ECX,-0x2487724d }
    /* +0xe7da59 */ __asm { XOR ECX,dword ptr [RBP + 0x160] }
    /* +0xe7da5f */ __asm { MOV RAX,qword ptr [RBP + 0x3f0] }
    /* +0xe7da66 */ __asm { LEA R10D,[RAX + RCX*0x1] }
    /* +0xe7da6a */ __asm { ADD R10D,0x4f00e6be }
    /* +0xe7da71 */ __asm { MOV RDX,0x0 }
    /* +0xe7da78 */ __asm { LEA RAX,[0x7fffa4770000] }
    /* +0xe7da7f */ __asm { ADD R10,R11 }
    /* +0xe7da82 */ __asm { MOV RAX,-0xb2b37b3923b973b }
    /* +0xe7da8c */ __asm { IMUL RAX,R10 }
    /* +0xe7da90 */ __asm { MOV RCX,0x4010b8fb6bf9163a }
    /* +0xe7da9a */ __asm { CMP RAX,RCX }
    /* +0xe7da9d */ __asm { NOP }
    /* +0xe7da9e */ __asm { NOP }
    /* +0xe7da9f */ __asm { NOP }
    /* +0xe7daa0 */ __asm { NOP }
    /* +0xe7daa1 */ __asm { NOP }
    /* +0xe7daa2 */ __asm { MOV R10D,0xdcef2a2d }
    /* +0xe7daa8 */ __asm { MOV R8D,0xd5f56a6a }
    /* +0xe7daae */ __asm { MOV RDX,qword ptr [RBP + 0x70] }
    /* +0xe7dab2 */ __asm { ADD R10D,EDX }
    /* +0xe7dab5 */ __asm { NOT R10D }
    /* +0xe7dab8 */ __asm { MOV RCX,qword ptr [RBP + 0x3f0] }
    /* +0xe7dabf */ __asm { ROL R10D,CL }
    /* +0xe7dac2 */ __asm { SUB R8D,EDX }
    /* +0xe7dac5 */ __asm { IMUL EDX,R8D,-0x25096fb1 }
    /* +0xe7dacc */ __asm { SUB EDX,ECX }
    /* +0xe7dace */ __asm { ADD EDX,0x1ad5b31e }
    /* +0xe7dad4 */ __asm { MOV RCX,R11 }
    /* +0xe7dad7 */ __asm { ADD RCX,RDX }
    /* +0xe7dada */ __asm { MOVZX R11D,uint8_t ptr [RDX + R11*0x1 + 0xe] }
    /* +0xe7dae0 */ __asm { MOVZX R9D,uint8_t ptr [RCX + R11*0x4 + 0x1e] }
    /* +0xe7dae6 */ __asm { ROL R9B,0x4 }
    /* +0xe7daea */ __asm { MOV uint8_t ptr [RBP + 0x120],R9B }
    /* +0xe7daf1 */ __asm { MOVZX R9D,uint8_t ptr [RCX + R11*0x4 + 0x1f] }
    /* +0xe7daf7 */ __asm { ROL R9B,0x4 }
    /* +0xe7dafb */ __asm { MOV uint8_t ptr [RBP + 0x121],R9B }
    /* +0xe7db02 */ __asm { MOVZX R9D,uint8_t ptr [RCX + R11*0x4 + 0x20] }
    /* +0xe7db08 */ __asm { ROL R9B,0x4 }
    /* +0xe7db0c */ __asm { MOV uint8_t ptr [RBP + 0x122],R9B }
    /* +0xe7db13 */ __asm { MOVZX ECX,uint8_t ptr [RCX + R11*0x4 + 0x21] }
    /* +0xe7db19 */ __asm { ROL CL,0x4 }
    /* +0xe7db1c */ __asm { ADD R10D,0xd39f50b4 }
    /* +0xe7db23 */ __asm { MOV uint8_t ptr [RBP + 0x123],CL }
    /* +0xe7db29 */ __asm { MOV ECX,dword ptr [R10] }
    /* +0xe7db2c */ __asm { MOV R11D,0x65e8ce72 }
    /* +0xe7db32 */ __asm { XOR R11D,dword ptr [RBP + 0x120] }
    /* +0xe7db39 */ __asm { BT R11D,ECX }
    /* +0xe7db3d */ __asm { JNC 0x7fffa55ee381 }
    /* +0xe7db43 */ __asm { MOV CX,0xfc42 }
    /* +0xe7db47 */ __asm { PXOR XMM0,XMM0 }
    /* +0xe7db4b */ __asm { MOVDQA xmmword ptr [RBP + 0x120],XMM0 }
    /* +0xe7db53 */ __asm { XOR ECX,dword ptr [RBP + 0x3f0] }
    /* +0xe7db59 */ __asm { ADD ECX,0xffff8629 }
    /* +0xe7db5f */ __asm { MOV R10,qword ptr [RBP + 0x460] }
    /* +0xe7db66 */ __asm { IMUL R10D,ECX }
    /* +0xe7db6a */ __asm { MOVZX R10D,R10W }
    /* +0xe7db6e */ __asm { MOV RAX,qword ptr GS:[R10] }
    /* +0xe7db72 */ __asm { MOV RCX,0x6b56e19a5b2def97 }
    /* +0xe7db7c */ __asm { CMP qword ptr [RAX + 0x18],RCX }
    /* +0xe7db80 */ __asm { NOP }
    /* +0xe7db81 */ __asm { NOP }
    /* +0xe7db82 */ __asm { NOP }
    /* +0xe7db83 */ __asm { NOP }
    /* +0xe7db84 */ __asm { NOP }
    /* +0xe7db85 */ __asm { NOP }
    /* +0xe7db86 */ __asm { NOP }
    /* +0xe7db87 */ __asm { NOP }
    /* +0xe7db88 */ __asm { NOP }
    /* +0xe7db89 */ __asm { NOP }
    /* +0xe7db8a */ __asm { NOP }
    /* +0xe7db8b */ __asm { NOP }
    /* +0xe7db8c */ __asm { NOP }
    /* +0xe7db8d */ __asm { NOP }
    /* +0xe7db8e */ __asm { NOP }
    /* +0xe7db8f */ __asm { MOV R10,0x0 }
    /* +0xe7db96 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe7db9d */ __asm { NOP }
    /* +0xe7db9e */ __asm { MOV dword ptr [RBP + 0x120],0x0 }
    /* +0xe7dba8 */ __asm { MOV dword ptr [RBP + 0xf8],0x40a00a00 }
    /* +0xe7dbb2 */ __asm { MOV ECX,dword ptr [RBP + 0xf8] }
    /* +0xe7dbb8 */ __asm { TEST CL,0x1 }
    /* +0xe7dbbb */ __asm { JNZ 0x7fffa55ee61a }
    /* +0xe7dbc1 */ __asm { MOV dword ptr [RBP + 0xf8],0xbb8f6870 }
    /* +0xe7dbcb */ __asm { MOV ECX,dword ptr [RBP + 0xf8] }
    /* +0xe7dbd1 */ __asm { MOV RCX,qword ptr [RBP + 0x3f0] }
    /* +0xe7dbd8 */ __asm { SUB RCX,qword ptr [RBP + 0x160] }
    /* +0xe7dbdf */ __asm { LEA R10,[0x7fffa47ba4a4] }
    /* +0xe7dbe6 */ __asm { MOV RAX,-0x3b3d178f02c33ad4 }
    /* +0xe7dbf0 */ __asm { ADD RAX,RCX }
    /* +0xe7dbf3 */ __asm { XOR RAX,0x758d245c }
    /* +0xe7dbf9 */ __asm { IMUL RAX,RAX,-0x6a27659d }
    /* +0xe7dc00 */ __asm { CMP R10,RAX }
    /* +0xe7dc03 */ __asm { JNZ 0x7fffa55edc12 }
    /* +0xe7dc05 */ __asm { MOV uint8_t ptr [RAX + -0x75da1d71],CL }
    /* +0xe7dc0b */ __asm { POP RAX }
    /* +0xe7dc0d */ __asm { INT3 }
    /* +0xe7dc12 */ __asm { MOV RAX,qword ptr [RBP + 0x3f0] }
    /* +0xe7dc19 */ __asm { MOVD XMM0,EAX }
    /* +0xe7dc1d */ __asm { MOV R11W,0xae7 }
    /* +0xe7dc22 */ __asm { MOV qword ptr [RBP + 0xf8],RDX }
    /* +0xe7dc29 */ __asm { LEA RBX,[0x7fffa47c00b5] }
    /* +0xe7dc30 */ __asm { MOV R8D,0x17f0cbde }
    /* +0xe7dc36 */ __asm { SUB R8D,EAX }
    /* +0xe7dc39 */ __asm { ROL R8D,0x7 }
    /* +0xe7dc3d */ __asm { MOV RCX,qword ptr [RBP + 0x70] }
    /* +0xe7dc41 */ __asm { ROR R8D,CL }
    /* +0xe7dc44 */ __asm { MOV SI,0x531d }
    /* +0xe7dc48 */ __asm { MOV EAX,dword ptr [R10 + 0x2024] }
    /* +0xe7dc4f */ __asm { ADD R8D,0xcb4c9eda }
    /* +0xe7dc56 */ __asm { MOVSXD R10,R8D }
    /* +0xe7dc59 */ __asm { MOV R8D,ECX }
    /* +0xe7dc5c */ __asm { XOR R8D,R11D }
    /* +0xe7dc5f */ __asm { NOT R8D }
    /* +0xe7dc62 */ __asm { IMUL R11D,R8D,-0x447 }
    /* +0xe7dc69 */ __asm { MOVZX EDX,R11W }
    /* +0xe7dc6d */ __asm { MOV R9,qword ptr [RBP + 0x160] }
    /* +0xe7dc74 */ __asm { LEA R11D,[R9 + RSI*0x1] }
    /* +0xe7dc78 */ __asm { MOV R9,-0x19c3a57db2808e77 }
    /* +0xe7dc82 */ __asm { SUB R9,RCX }
    /* +0xe7dc85 */ __asm { ROL R9,0x22 }
    /* +0xe7dc89 */ __asm { MOVD XMM5,R11D }
    /* +0xe7dc8e */ __asm { NOT R9 }
    /* +0xe7dc91 */ __asm { MOV R12,qword ptr [RBP + 0x428] }
    /* +0xe7dc98 */ __asm { IMUL R12,R9 }
    /* +0xe7dc9c */ __asm { PXOR XMM5,XMM0 }
    /* +0xe7dca0 */ __asm { MOVD ECX,XMM5 }
    /* +0xe7dca4 */ __asm { ROR CX,0x1 }
    /* +0xe7dca7 */ __asm { MOVZX R9D,CX }
    /* +0xe7dcab */ __asm { LEA R8,[RBP + 0x120] }
}


// ============================================================================
// Function : FUN_7fffa55ee684  |  RVA: 0xe7e684  |  Size: 1 bytes
// Callers  : FUN_7fffa54050b0@0xc950b0
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7fffa55ee684(uint64_t param_1,uint32_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  iVar1 = (*(code *)&DAT_7ff84ea57bd0)(_DAT_7fffa4780ab0,param_1,param_2,param_3,0);
  if (iVar1 == 0) {
    iVar2 = (*(code *)&DAT_7ff84ea18640)();
    if (iVar2 == 6) {
      if (_DAT_7fffa4780ab0 < 0xfffffffffffffffe) {
        (*(code *)&DAT_7ff84ea57010)();
      }
      _DAT_7fffa4780ab0 =
           (*(code *)&DAT_7ff84ea572c0)(&UNK_7fffa5876638,0x40000000,3,0,CONCAT44(uVar3,3),0,0);
      iVar1 = (*(code *)&DAT_7ff84ea57bd0)(_DAT_7fffa4780ab0,param_1,param_2,param_3,0);
    }
  }
  return iVar1;
}


// ============================================================================
// Function : FUN_7fffa55ee750  |  RVA: 0xe7e750  |  Size: 16 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55ee750(uint8_t *param_1,uint8_t *param_2,int64_t param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55ee760  |  RVA: 0xe7e760  |  Size: 1405 bytes
// Callers  : none
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5102fa0@0x992fa0
// ============================================================================
void FUN_7fffa55ee760(uint64_t param_1,uint64_t param_2,int64_t param_3,uint32_t param_4,
                     uint64_t param_5)

{
  char *pcVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint32_t uVar6;
  uint8_t auVar7 [16];
  uint8_t bVar8;
  uint8_t bVar9;
  uint8_t bVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint8_t *puVar17;
  uint32_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint16_t uVar21;
  float fVar22;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint8_t *puStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t *puStack_78;
  uint8_t *puStack_70;
  int64_t lStack_68;
  uint32_t uStack_5c;
  
  puVar11 = (uint64_t *)((param_1 << 0x37 | param_1 >> 9) ^ 0xffffffffa4bcbca8);
  bVar9 = (uint8_t)param_4;
  uVar20 = *(uint64_t *)
            ((int64_t)(int)(-0xc50f01 << (bVar9 & 0x1f) | 0xff3af0ffU >> 0x20 - (bVar9 & 0x1f)) +
            0x7fffa47c90f8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar20;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar20;
  auVar7._8_8_ = 1;
  auVar7._0_8_ = 0x4325c53ef368eb0;
  fVar22 = (float)FUN_7fffa5102fa0((float)(SUB168(auVar3 * auVar7,8) +
                                           (uint64_t)
                                           CARRY8(SUB168(auVar3 * ZEXT816(0x4325c53ef368eb0),0),
                                                  SUB168(auVar2 * ZEXT816(0x4325c53ef368eb05),8)) +
                                          1) / 0.875);
  uVar19 = (int64_t)(fVar22 - 9.223372e+18) & (int64_t)fVar22 >> 0x3f | (int64_t)fVar22;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar19;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar19;
  uVar13 = SUB168(auVar5 * ZEXT816(0x1111111111111111),8) +
           (uint64_t)
           CARRY8(SUB168(auVar5 * ZEXT816(0x1111111111111111),0),
                  SUB168(auVar4 * ZEXT816(0x1111111111111112),8));
  uVar20 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> uVar20 == 0; uVar20 = uVar20 - 1) {
    }
  }
  uStack_a8 = 0x3f;
  if (0x1d < uVar19) {
    uStack_a8 = uVar20 ^ 0x3f;
  }
  bVar8 = (uint8_t)uStack_a8;
  lVar15 = 1L << (-bVar8 & 0x3f);
  uStack_a0 = lVar15 - 1;
  lStack_90 = 0;
  if (uVar19 == 0) {
    lVar14 = 0;
    puVar17 = &UNK_7fffa56ee720;
  }
  else {
    bVar10 = 0x40 - bVar8;
    lVar16 = 0x78L << (bVar10 & 0x3f);
    uVar13 = (uint64_t)param_4;
    uVar18 = 0x47ffffb2 << (bVar9 & 0x1f) | 0x47ffffb2U >> 0x20 - (bVar9 & 0x1f);
    uVar20 = 0x10L << (bVar10 & 0x3f);
    if (((param_4 | 1) * 0x38c452d2 ^ 0xc8c8dd74) != (param_4 | 1) * 0x31c98666) {
      uVar20 = 0x10L >> (bVar10 & 0x3f);
    }
    puStack_70 = (uint8_t *)param_3;
    (*(code *)((int64_t)(int)(uVar18 << 0x11 | uVar18 >> 0xf) + 0x7fffa5274621))();
    lVar14 = (uVar13 << 0x2c | uVar13 >> 0x14) - ((uVar13 >> 0x14) << 0x36);
    puVar17 = (uint8_t *)
              ((uint64_t)(-((int)lVar14 + (int)lVar16 + -8) & 0xf) + lVar14 + lVar16 + -8);
    lStack_90 = lVar14;
    FUN_7fffa4ecf8e0(puVar17,0,uVar20);
    puVar17[lVar15 * 0x10 + -2] = 1;
  }
  *puVar11 = 0;
  puVar11[2] = 0;
  uVar20 = param_5 >> (bVar8 & 0x3f);
  puStack_70 = puVar17 + uVar20 * 0x10;
  pcVar1 = puVar17 + uVar20 * 0x10;
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
  *(uint32_t *)(puVar11 + 1) = 0;
  uStack_5c = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar24 >> 7,0) & 1) |
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
  if (uStack_5c == 0) {
    lVar15 = 1;
    while( true ) {
      puStack_70[0xf] = puStack_70[0xf] | '\x01' << ((uint8_t)param_5 & 7);
      uVar20 = uVar20 + lVar15 & uStack_a0;
      puStack_70 = puVar17 + uVar20 * 0x10;
      pcVar1 = puVar17 + uVar20 * 0x10;
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
      uStack_5c = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar23 >> 7,0) & 1) |
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
      if (uStack_5c != 0) break;
      lVar15 = lVar15 + 1;
    }
    lVar14 = lStack_90;
  }
  else {
  }
  lStack_88 = 0x7fffa55ca2a7;
  puStack_78 = &uStack_a8;
  lStack_80 = 0x7fffa47c6467;
  lStack_68 = (int64_t)(int)(-0x76f84aee - param_4);
  lVar14 = uVar20 * 0x78 + lVar14;
  uVar20 = 0xffd2bde5847bcbff;
  if (param_4 == 0x89086698) {
    uVar20 = 0xffd2421a447bcbff;
  }
  uVar13 = (uint64_t)param_4;
  puStack_98 = puVar17;
  (*(code *)((int64_t)(int)(param_4 + 0x76f6b183) + 0x7fffa5279295))();
  puVar12 = (uint64_t *)((uVar13 << 0x2c | uVar13 >> 0x14) - ((uVar13 >> 0x14) << 0x36));
  uVar18 = 0;
  for (uVar6 = uStack_5c; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
    uVar18 = uVar18 + 1;
  }
  uVar13 = (uint64_t)uVar18;
  *(uint64_t **)(lVar14 + uVar13 * 8) = puVar12;
  *puVar12 = *(uint64_t *)((param_3 << 0x26) + param_3 + 0x64fb7d3fc193edf5);
  *(uint8_t (*) [16])(puVar12 + 1) = (uint8_t  [16])0x0;
  puStack_70[uVar13] = (&UNK_7fffa583c0a6)[(param_5 & 0xff) * 4 + lStack_68];
  puVar11[2] = lVar14 + uVar13 * 8;
  *(uint32_t *)(puVar11 + 1) = uVar18;
  *puVar11 = puStack_70;
  uVar21 = (uint16_t)param_4 + 0x5748;
  (*(code *)((short)(((uint16_t)param_4 ^ 0x881a) + 0xe427) + lStack_88))
            (param_5 & 0xff,
             (0xe7611816U >> (bVar9 & 0x1f) | -0x189ee7ea << 0x20 - (bVar9 & 0x1f)) ^ 0x84f4b6bf,
             uVar20 ^ 0x3fffd23de5e,puStack_78);
  *(int64_t *)(lStack_80 + 0x28 + (int64_t)(int)~(param_4 ^ 0x8908fe3e)) =
       *(int64_t *)(((int64_t)(short)(uVar21 * 0x400 | uVar21 >> 6) ^ 0xa5aU) + 0x7fffa47c433b) +
       1;
  return;
}


// ============================================================================
// Function : FUN_7fffa55eece0  |  RVA: 0xe7ece0  |  Size: 183 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55eece0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t in_RAX;
  uint64_t uVar1;
  
  param_3 = param_3 << 0xb ^ param_3;
  uVar1 = (in_RAX ^ 0x39658713) * -0x56f4079db8fa219d;
  uVar1 = ((in_RAX ^ 0x39658713) * 0x2fe1891c17798c00 | uVar1 >> 0x36) ^
          (uVar1 << 0x2b | uVar1 >> 0x15) ^ uVar1;
  uVar1 = (uVar1 << 0x14 | uVar1 >> 0x2c) ^ (uVar1 << 0x16 | uVar1 >> 0x2a) ^ uVar1;
  uVar1 = (uVar1 << 0x2c | uVar1 >> 0x14) ^ (uVar1 << 0x28 | uVar1 >> 0x18) ^ uVar1;
  uVar1 = (uVar1 << 0x18 | uVar1 >> 0x28) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) ^ (uVar1 << 0x30 | uVar1 >> 0x10) ^ uVar1;
  (**(code **)(uVar1 << 0x20 | uVar1 >> 0x20))(param_3 << 0x16 ^ param_3 << 0x2c ^ param_3);
  return;
}


// ============================================================================
// Function : FUN_7fffa55eeda0  |  RVA: 0xe7eda0  |  Size: 1 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55eeda0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa55eedb0  |  RVA: 0xe7edb0  |  Size: 1016 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55eedb0(void)

{
  int64_t lVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  short sVar9;
  short sVar10;
  int64_t lVar11;
  uint8_t bVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  int iVar16;
  int64_t lVar17;
  
  _uRam00007fffa47bd457 = 0;
  uRam00007fffa47bd44b = 0;
  uRam00007fffa47bd44c = 0;
  uRam00007fffa47bd43b = 0;
  uRam00007fffa47bd443 = 0;
  uRam00007fffa47bd444 = 0;
  uVar8 = rdtsc();
  lVar14 = (CONCAT44(0x7fff,(int)(uVar8 >> 0x20)) << 0x20 | uVar8 & 0xffffffff) * 0x47b5e64ee7e3055
           + 1;
  lVar15 = -0x39e938179b0408b9;
  lVar11 = 0;
  while( true ) {
    lVar14 = lVar14 * 0x47b5e64ee7e3055 + 1;
    lVar17 = lVar14 * 0x47b5e64ee7e3055 + 1;
    lVar1 = lVar17 * 0x47b5e64ee7e3055 + 1;
    *(char *)(lVar11 + 0x7fffa47bd430) = (char)((uint64_t)lVar17 >> 0x20);
    *(char *)(lVar11 + 0x7fffa47bd42f) = (char)((uint64_t)lVar14 >> 0x20);
    lVar14 = lVar1 * 0x47b5e64ee7e3055 + 1;
    *(char *)(lVar11 + 0x7fffa47bd432) = (char)((uint64_t)lVar14 >> 0x20);
    *(char *)(lVar11 + 0x7fffa47bd431) = (char)((uint64_t)lVar1 >> 0x20);
    if (lVar15 == 0x49115ee40551ad73) break;
    lVar15 = lVar15 + -0x39e93817ab9b1dfc;
    lVar11 = lVar11 + 4;
  }
  bVar12 = (char)lVar11 + 4;
  lVar14 = (int64_t)(short)~(0x6239U >> (bVar12 & 0xf) | 0x6239 << 0x10 - (bVar12 & 0xf));
  uVar8 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)
                           (int)(0x6865ffffU >> (bVar12 & 0x1f) |
                                0x6865ffff << 0x20 - (bVar12 & 0x1f)) + 0x7fffa47c6bd6) * 0x55555556
          + 0x55555556) * 3;
  uVar13 = uVar8 >> 0x20;
  bVar2 = *(uint8_t *)((int64_t)
                    (short)((0x2a91U >> (bVar12 & 0xf) | 0x2a91 << 0x10 - (bVar12 & 0xf)) + 0x6b43)
                   + 0x7fffa47c3e88);
  sVar10 = (short)lVar11;
  bVar3 = *(uint8_t *)((int64_t)(short)(-0x5f13 - sVar10) + 0x7fffa47c3398);
  bVar4 = *(uint8_t *)((int64_t)(-0xfc5d - (int)lVar11) + 0x7fffa47cd0e3);
  bVar5 = *(uint8_t *)((int64_t)(short)((0xd0afU - sVar10 ^ 0x7070) + 0x1db0) + 0x7fffa47c15ba);
  iVar16 = (int)lVar11 + 5;
  bVar6 = *(uint8_t *)((int64_t)(iVar16 * 0x687d5fba) + 0x7fffa47c81c4);
  sVar9 = (short)iVar16;
  bVar7 = *(uint8_t *)((int64_t)
                    (short)((sVar9 * -0x28e0 | (uint16_t)(sVar9 * -0x328e) >> 0xc) * -0x3e51) +
                   0x7fffa47c130c);
  *(uint8_t *)(lVar14 + 0x7fffa47c3676 + uVar13 * 8) = bVar7 << 3 | bVar7 >> 5;
  bVar7 = *(uint8_t *)((int64_t)
                    (short)((sVar10 + 0xb303U) * 0x2000 | (uint16_t)(sVar10 + 0xb303U ^ 0xf620) >> 3)
                   + 0x7fffa47bebb7);
  *(uint8_t *)(lVar14 + 0x7fffa47c3677 + uVar13 * 8) = bVar7 << 3 | bVar7 >> 5;
  *(uint8_t *)(lVar14 + 0x7fffa47c367c + uVar13 * 8) = bVar5 << 3 | bVar5 >> 5;
  *(uint8_t *)(lVar14 + 0x7fffa47c3678 + uVar13 * 8) = bVar3 << 3 | bVar3 >> 5;
  *(uint8_t *)(lVar14 + 0x7fffa47c3679 + uVar13 * 8) = bVar4 << 3 | bVar4 >> 5;
  bVar3 = uRam00007fffa47bd457._4_1_;
  *(uint8_t *)(lVar14 + 0x7fffa47c367b + uVar13 * 8) = bVar2 << 3 | bVar2 >> 5;
  *(uint8_t *)(lVar14 + 0x7fffa47c367d + uVar13 * 8) = bVar6 << 3 | bVar6 >> 5;
  *(uint8_t *)(lVar14 + 0x7fffa47c367a + uVar13 * 8) = bVar3 << 3 | bVar3 >> 5;
  *(char *)((int64_t)(int)~(-0x7fe0000 << (bVar12 & 0x1f) | 0xf8020000U >> 0x20 - (bVar12 & 0x1f))
           + 0x7fffa47ccc3e) = (char)(uVar8 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55ef1b0  |  RVA: 0xe7f1b0  |  Size: 3106 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa55ef1b0(uint16_t *param_1,int64_t param_2,int64_t param_3,uint64_t *param_4)

{
  uint8_t *pbVar1;
  uint16_t uVar2;
  bool bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint16_t uVar6;
  uint8_t bVar7;
  int iVar8;
  sbyte sVar9;
  uint32_t uVar10;
  uint64_t in_RAX;
  uint8_t bVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint32_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  int iVar24;
  uint32_t uVar25;
  uint16_t uVar26;
  uint32_t uVar27;
  uint64_t in_R10;
  uint64_t *puVar28;
  uint32_t *puVar29;
  uint64_t *puVar30;
  int64_t lVar31;
  uint64_t uVar32;
  uint64_t *puVar33;
  int64_t lVar34;
  uint64_t uVar35;
  uint32_t uVar36;
  uint64_t *puVar37;
  uint16_t uVar38;
  uint64_t uStack_100;
  uint64_t uStack_b8;
  uint8_t *puStack_68;
  
  uVar27 = (uint32_t)in_R10;
  uVar35 = ((in_R10 & 0xffffffff | 1) * 0xd5c5c5f0 +
            ((in_R10 & 0xffffffff | 1) * 0xfa7cd9a8 + (in_R10 >> 0x20) * 0xd5c5c5f0 << 0x20) ^
           0xc0000091) * param_2;
  uVar17 = param_3 + 0xce46fe11;
  uVar16 = (uint64_t)((uint32_t)uVar35 & 0xc);
  if (uVar27 != 0x63dbbc1f) {
    uVar16 = uVar35 + 0xc;
  }
  if ((2 < uVar35) && (8 < in_RAX)) {
    uVar16 = uVar16 + (uVar35 >> 7);
    lVar34 = uVar17 + uVar35;
    puVar28 = (uint64_t *)((int64_t)param_4 + (in_RAX - 8));
    uVar2 = *param_1;
    lVar31 = 1;
    if (uVar2 != 0) {
      lVar31 = (int64_t)(1 << ((char)uVar2 - 1U & 0x1f));
    }
    uVar12 = *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -1) * 4 + 4) + 0x8000;
    uVar38 = param_1[(uint64_t)
                     ((uVar12 & 0xffff0000) -
                      *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -1) * 4 + 4) >>
                     ((uint8_t)(uVar12 >> 0x10) & 0x3f)) +
                     (int64_t)
                     *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -1) * 4 + 2) + 2]
    ;
    bVar5 = (uint8_t)in_R10;
    uVar6 = (uint16_t)in_R10;
    if ((uVar35 & 1) == 0) {
      uVar12 = *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -2) * 4 + 4) + 0x8000;
      uVar18 = lVar34 - 2;
      uVar26 = param_1[(uint64_t)
                       ((uVar12 & 0xffff0000) -
                        *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -2) * 4 + 4)
                       >> ((uint8_t)(uVar12 >> 0x10) & 0x3f)) +
                       (int64_t)
                       *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -2) * 4 + 2) +
                       2];
      uStack_b8 = 0;
      uVar12 = 0;
      puVar33 = param_4;
    }
    else {
      uVar12 = *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -2) * 4 + 4) + 0x8000;
      uVar23 = (uint64_t)uVar38;
      if ((uint64_t)(int64_t)(int)(uVar27 + 0x9807c188) <=
          (uint64_t)(0x24ffef6f << (bVar5 & 0x1f) | 0x24ffef6fU >> 0x20 - (bVar5 & 0x1f))) {
        uVar23 = (int64_t)(short)uVar38;
      }
      uVar13 = *(uint32_t *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -3) * 4 + 4) + uVar23;
      uVar36 = (uint32_t)uVar23 &
               *(uint32_t *)((int64_t)(short)((uVar6 ^ 0x4333) << 3 | (uVar6 ^ 0x4333) >> 0xd) +
                         0x7fffa58504cb + (uVar13 >> 0x10) * 4);
      uVar38 = param_1[(uint64_t)
                       ((uVar12 & 0xffff0000) -
                        *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -2) * 4 + 4)
                       >> ((uint8_t)(uVar12 >> 0x10) & 0x3f)) +
                       (int64_t)
                       *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -2) * 4 + 2) +
                       2];
      uVar18 = lVar34 - 3;
      uVar26 = param_1[(uVar23 >> ((uint8_t)(uVar13 >> 0x10) & 0x3f)) +
                       (int64_t)
                       *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(lVar34 + -3) * 4 + 2) +
                       2];
      puVar33 = (uint64_t *)((int64_t)param_4 + (uVar13 >> 0x13));
      *param_4 = (uint64_t)uVar36;
      uVar12 = (uint32_t)(uVar13 >> 0x10);
      bVar11 = (uint8_t)((uVar13 >> 0x13) << 3);
      if (in_RAX < uVar16) {
        uVar12 = uVar12 & 7;
        uStack_b8 = (uint64_t)(uVar36 >> (bVar11 & 0x3f));
        if (puVar28 < puVar33) {
          puVar33 = puVar28;
        }
      }
      else {
        uVar12 = uVar12 & 7;
        uStack_b8 = (uint64_t)(uVar36 >> (bVar11 & 0x3f));
      }
    }
    uVar23 = (uint64_t)uVar26;
    uVar13 = (uint64_t)uVar38;
    if ((uVar35 & 2) == 0) {
      uVar23 = *(uint32_t *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 2) * 4 + 4) + uVar23;
      pbVar1 = (uint8_t *)(uVar18 - 1);
      uVar13 = *(uint32_t *)(param_1 + lVar31 * 2 + (uint64_t)*pbVar1 * 4 + 4) + uVar13;
      iVar15 = (int)(uVar13 >> 0x10) + uVar12;
      uVar36 = iVar15 + (int)(uVar23 >> 0x10);
      uStack_b8 = uStack_b8 |
                  (uint64_t)
                  ((uint32_t)uVar38 &
                  *(uint32_t *)(&UNK_7fffa585afbe +
                           (uVar13 >> 0x10) * 4 + (int64_t)(int)((uVar27 | 1) * -0x65a36462))) <<
                  (sbyte)uVar12 |
                  (uint64_t)
                  ((uint32_t)uVar26 &
                  *(uint32_t *)(&UNK_7fffa58524ae +
                           (uVar23 >> 0x10) * 4 + (int64_t)(short)((uVar6 | 1) * -0x4f2))) <<
                  ((uint8_t)iVar15 & 0x3f);
      uVar23 = (uint64_t)
               param_1[(uint64_t)(uVar26 >> ((uint8_t)(uVar23 >> 0x10) & 0x3f)) +
                       (int64_t)
                       *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 2) * 4 + 2) + 2
                      ];
      uVar18 = uVar18 - 2;
      uVar38 = param_1[(uint64_t)(uVar38 >> ((uint8_t)(uVar13 >> 0x10) & 0x3f)) +
                       (int64_t)*(int *)(param_1 + lVar31 * 2 + (uint64_t)*pbVar1 * 4 + 2) + 2];
      uVar13 = (uint64_t)uVar38;
      uVar12 = uVar36 >> 3;
      *puVar33 = uStack_b8;
      puVar33 = (uint64_t *)((int64_t)puVar33 + (uint64_t)uVar12);
      if (in_RAX < uVar16) {
        if (puVar28 < puVar33) {
          puVar33 = puVar28;
        }
        bVar11 = (uint8_t)(uVar12 << 3);
      }
      else {
        bVar11 = (uint8_t)(uVar12 << 3);
      }
      uVar12 = uVar36 & 7;
      uStack_b8 = uStack_b8 >> (bVar11 & 0x3f);
      if (uVar17 < uVar18) goto LAB_7fffa55ef7ac;
    }
    else if (uVar17 < uVar18) {
LAB_7fffa55ef7ac:
      do {
        uVar36 = -0x6634da67 << (bVar5 & 0x1f) | 0x99cb2599U >> 0x20 - (bVar5 & 0x1f);
        uVar20 = uVar36 * -0x429ea6bf;
        if ((((uint64_t)uVar20 * -0x42527c7a1dcf04db << 0x2e |
             (uint64_t)uVar20 * -0x42527c7a1dcf04db >> 0x12) ^ 0xd3c2c13b ^
            0x2ecd82b1ddc10904 - in_R10) == 0xffffffffbcf8e82b) {
          bVar11 = *(uint8_t *)(uVar18 - 2);
          uVar10 = 0xa5fb5fea - uVar27 >> 1 | (uint32_t)((0xa5fb5fea - uVar27 & 1) != 0) << 0x1f;
          bVar4 = (uint8_t)uVar20 & 0x1f;
          bVar3 = uVar17 < uVar18 - 4;
          if (((-0xf937a37 << (bVar5 & 0x1f) | 0xf06c85c9U >> 0x20 - (bVar5 & 0x1f)) ^ 0x67fe39ab) +
              uVar36 * 0x429ea6bf <= (uVar10 >> bVar4 | uVar10 << 0x20 - bVar4)) {
            bVar3 = (int64_t)(uVar18 - 4) <= (int64_t)uVar17;
          }
          iVar15 = *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 4) * 4 + 2);
          uVar36 = *(uint32_t *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 4) * 4 + 4);
          uVar20 = uVar20 + 0xe187b96a ^ uVar27;
        }
        else {
          uVar20 = -0x14e02877 << (bVar5 & 0x1f) | 0xeb1fd789U >> 0x20 - (bVar5 & 0x1f);
          bVar3 = uVar17 < uVar18 - 4;
          bVar11 = *(uint8_t *)(uVar18 - 2);
          iVar15 = *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 4) * 4 + 2);
          uVar36 = *(uint32_t *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 4) * 4 + 4);
        }
        uStack_100 = uVar18 - 4;
        uVar35 = (uint64_t)bVar11;
        bVar11 = (uint8_t)uVar20;
        if ((uint64_t)(0x9fd9dc96 - (uVar20 ^ 0x56a0ec6b)) <
            (uint64_t)
            (int64_t)
            (int)((0x741f3e06 << (bVar11 & 0x1f) | 0x741f3e06U >> 0x20 - (bVar11 & 0x1f)) - uVar27))
        {
          uVar10 = ~(uVar20 + 0x9749c4eb >> (bVar5 & 0x1f) |
                    uVar20 + 0x9749c4eb << 0x20 - (bVar5 & 0x1f));
          uVar22 = (uint64_t)*(int *)(param_1 + lVar31 * 2 + uVar35 * 4 + 2);
        }
        else {
          uVar10 = uVar20 | 1;
          uVar22 = (int64_t)(int)*(uint32_t *)(param_1 + lVar31 * 2 + uVar35 * 4 + 2);
          if ((int64_t)
              (uint64_t)
              ((uVar27 + 0xa514604a << (bVar11 & 0x1f) |
               uVar27 + 0xa514604a >> 0x20 - (bVar11 & 0x1f)) ^ 0xa0980067) <
              (int64_t)(int)(uVar10 * -0x31755b55)) {
            uVar22 = (uint64_t)*(uint32_t *)(param_1 + lVar31 * 2 + uVar35 * 4 + 2);
          }
          uVar10 = uVar10 * -0x27800000 | uVar10 * 0x7adc57b1 >> 9;
          uVar10 = uVar10 << (bVar5 & 0x1f) | uVar10 >> 0x20 - (bVar5 & 0x1f);
        }
        uVar25 = (uVar20 ^ 0x6a769994) >> (bVar5 & 0x1f) |
                 (uVar20 ^ 0x6a769994) << 0x20 - (bVar5 & 0x1f);
        sVar9 = (sbyte)uVar12;
        uVar19 = *(uint32_t *)(param_1 + lVar31 * 2 + uVar35 * 4 + 4) + uVar23;
        uVar35 = *(uint32_t *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 1) * 4 + 4) + uVar13
        ;
        bVar7 = (uint8_t)(uVar35 >> 0x10);
        bVar4 = (uint8_t)(uVar19 >> 0x10);
        if ((~(uVar20 ^ 0x34d3c9d9) << 0xd | ~(uVar20 ^ 0x34d3c9d9) >> 0x13) <
            (uVar25 << 1 | (uint32_t)((int)uVar25 < 0))) {
          puStack_68 = &UNK_7fffa585e356 + (int)((uVar27 + 0x84b292b7) * (uVar20 | 1));
          uVar25 = ((uVar27 + 0xea437425) * -0x3ffffbdf ^ uVar20) + 0x5ff21913;
          uVar32 = (uint64_t)param_1[(uVar23 >> (bVar4 & 0x3f)) + uVar22 + 2];
          uVar22 = uVar36 + uVar32 >> 0x10;
          puVar29 = (uint32_t *)(&UNK_7fffa5850f96 + uVar22 * 4 + (int64_t)(short)(uVar6 - 0xa3d));
        }
        else {
          uVar25 = 0xb89560e2U >> (bVar11 & 0x1f) | -0x476a9f1e << 0x20 - (bVar11 & 0x1f);
          uVar25 = uVar25 << (bVar5 & 0x1f) | uVar25 >> 0x20 - (bVar5 & 0x1f);
          uVar32 = (uint64_t)param_1[(uVar23 >> (bVar4 & 0x3f)) + uVar22 + 2];
          uVar38 = 0x15e7 - (short)uVar20;
          uVar38 = uVar38 << (bVar5 & 0xf) | uVar38 >> 0x10 - (bVar5 & 0xf);
          puStack_68 = &UNK_7fffa5851dc1 + (short)(uVar38 << 4 | uVar38 >> 0xc);
          uVar22 = uVar36 + uVar32 >> 0x10;
          puVar29 = (uint32_t *)(&UNK_7fffa585e04f +
                            uVar22 * 4 + (int64_t)(int)~((uVar27 | 1) * -0x17ff85ae));
        }
        iVar8 = uVar12 + (int)(uVar35 >> 0x10) + (int)(uVar19 >> 0x10);
        uVar20 = (uint32_t)uVar23;
        uVar26 = param_1[(uVar13 >> (bVar7 & 0x3f)) +
                         (int64_t)
                         *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 1) * 4 + 2) +
                         2];
        uVar14 = (uint64_t)
                 *(uint32_t *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 3) * 4 + 4) +
                 (uint64_t)uVar26;
        iVar24 = (int)(uVar14 >> 0x10) + iVar8;
        uVar36 = (int)uVar22 + iVar24;
        uVar12 = uVar36 & 7;
        uVar21 = (uint64_t)(uVar36 >> 3);
        lVar34 = uVar21 * 3;
        if ((uint64_t)((uVar10 + 0xb492b109) * 0x73598e9 - uVar27) <
            (uint64_t)(int64_t)(int)((uVar27 | 1) * (uVar25 + 0xb00d3151))) {
          lVar34 = uVar21 * 8;
        }
        uVar23 = (uint64_t)param_1[(uVar32 >> ((uint8_t)uVar22 & 0x3f)) + (int64_t)iVar15 + 2];
        puVar30 = (uint64_t *)((int64_t)puVar33 + uVar21);
        puVar37 = puVar30;
        if (puVar28 < puVar30) {
          puVar37 = puVar28;
        }
        if (uVar16 <= in_RAX) {
          puVar37 = puVar30;
        }
        uVar36 = (uint32_t)uVar13;
        uVar38 = param_1[(uint64_t)(uVar26 >> ((uint8_t)(uVar14 >> 0x10) & 0x3f)) +
                         (int64_t)
                         *(int *)(param_1 + lVar31 * 2 + (uint64_t)*(uint8_t *)(uVar18 - 3) * 4 + 2) +
                         2];
        uVar13 = (uint64_t)uVar38;
        uStack_b8 = (uint64_t)((uint32_t)uVar32 & *puVar29) << ((uint8_t)iVar24 & 0x3f) |
                    (uint64_t)(uVar36 & *(uint32_t *)(puStack_68 + (uVar35 >> 0x10) * 4)) << sVar9 |
                    uStack_b8 |
                    (uint64_t)
                    (uVar20 & *(uint32_t *)(&UNK_7fffa585f2d1 +
                                       (uVar19 >> 0x10) * 4 +
                                       (int64_t)(int)(~(uVar10 + 0xe6139a30) + uVar27))) <<
                    (sVar9 + bVar7 & 0x3f) |
                    (uint64_t)
                    ((uint32_t)uVar26 &
                    *(uint32_t *)(&UNK_7fffa585111b +
                             (uVar14 >> 0x10) * 4 +
                             (int64_t)
                             (short)(((uint16_t)(uVar27 + 0x11b6) ^ 0xc5a0) * ((uint16_t)uVar25 | 1))))
                    << ((uint8_t)iVar8 & 0x3f);
        *puVar33 = uStack_b8;
        uStack_b8 = uStack_b8 >> lVar34;
        puVar33 = puVar37;
        uVar18 = uStack_100;
      } while (bVar3);
    }
    uVar10 = uVar12 + uVar2;
    uVar20 = (uint32_t)uVar2 + (uVar10 & 7);
    uVar36 = uVar20 & 7;
    if ((uVar27 | 1) * -0x6f8682b7 == -0x5bcfad16) {
      uVar36 = uVar20 | 7;
    }
    uVar25 = *(uint32_t *)(&UNK_7fffa58501f0 + (uint64_t)uVar2 * 4);
    uStack_b8 = (uint64_t)(uVar38 & uVar25) << (sbyte)uVar12 | uStack_b8;
    puVar30 = (uint64_t *)((uint64_t)(uVar10 >> 3) + (int64_t)puVar33);
    if (puVar28 < puVar30) {
      puVar30 = puVar28;
    }
    puVar37 = (uint64_t *)((uint64_t)(uVar20 >> 3) + (int64_t)puVar30);
    if (puVar28 < puVar37) {
      puVar37 = puVar28;
    }
    *puVar33 = uStack_b8;
    puVar33 = (uint64_t *)((uint64_t)(uVar36 + 1 >> 3) + (int64_t)puVar37);
    if (puVar28 < puVar33) {
      puVar33 = puVar28;
    }
    uVar17 = uStack_b8 >> ((uint8_t)uVar10 & 0x38) |
             (uint64_t)((uint32_t)uVar23 & uVar25) << (sbyte)(uVar10 & 7);
    *puVar30 = uVar17;
    *puVar37 = uVar17 >> ((uint8_t)uVar20 & 0x38) | 1L << ((uint64_t)uVar36 & 0x3f);
    if (puVar33 < puVar28) {
      uVar16 = (uint64_t)((uVar36 + 1 & 7) != 0);
      uVar17 = -uVar16;
      if (uVar27 == 0x6768fc97) {
        uVar17 = uVar16;
      }
      lVar34 = (int64_t)puVar33 + (uVar17 - (int64_t)param_4);
      uVar17 = (lVar34 << 0x2d) + lVar34;
      goto LAB_7fffa55efd69;
    }
  }
  uVar17 = 0;
LAB_7fffa55efd69:
  return uVar17 << 0x38 ^ uVar17;
}


// ============================================================================
// Function : FUN_7fffa55efdf0  |  RVA: 0xe7fdf0  |  Size: 657 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55efdf0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  bRam00007fffa47bcea1 = 0;
  auRam00007fffa47bcece = (uint8_t  [16])0x0;
  auRam00007fffa47bcebe = (uint8_t  [16])0x0;
  auRam00007fffa47bceae = (uint8_t  [16])0x0;
  uRam00007fffa47bceec = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0x7fff,(int)uVar1)) * 0xbed79e3e26c1d87 + 0xb;
  lVar2 = 3;
  while( true ) {
    uVar4 = lVar3 * 0xbed79e3e26c1d87 + 0xb;
    lVar3 = (uVar4 & 0xffffffff) * 0xe26c1d87 +
            ((uVar4 & 0xffffffff) * 0xbed79e3 + (uVar4 >> 0x20) * 0xe26c1d87 << 0x20) + 0xb;
    lVar5 = lVar3 * 0xbed79e3e26c1d87 + 0xb;
    *(char *)(lVar2 + 0x7fffa47bce98) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bce96) = (char)(uVar4 >> 0x20);
    *(char *)(lVar2 + 0x7fffa47bce97) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar2 == 0x5b) break;
    lVar3 = lVar5 * 0xbed79e3e26c1d87 + 0xb;
    *(char *)(lVar2 + 0x7fffa47bce99) = (char)((uint64_t)lVar3 >> 0x20);
    lVar2 = lVar2 + 4;
  }
  uVar4 = (uint64_t)((uint32_t)bRam00007fffa47bcea1 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uVar4 >> 0x20) * 8 + 0x7fffa47bceae) = 0xffffffffffffffff;
  bRam00007fffa47bcea1 = (char)(uVar4 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f0084  |  RVA: 0xe80084  |  Size: 186 bytes
// Callers  : FUN_7fffa505ca30@0x8eca30
// Callees  : FUN_7fffa4d25bbc@0x5b5bbc, FUN_7fffa4ed9184@0x769184, FUN_7fffa52d5bb0@0xb65bb0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa55f0084(uint32_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  uint32_t *puVar3;
  uint64_t uVar4;
  
  if ((-1 < (int)param_1) && (param_1 < _DAT_7fffa4782580)) {
    uVar2 = (uint64_t)(param_1 & 0x3f);
    if (((*(uint8_t *)(*(int64_t *)(&DAT_7fffa4782180 + ((uint64_t)(int64_t)(int)param_1 >> 6) * 8)
                    + 0x38 + uVar2 * 0x48) & 1) != 0) &&
       (*(int64_t *)
         (*(int64_t *)(&DAT_7fffa4782180 + ((uint64_t)(int64_t)(int)param_1 >> 6) * 8) + 0x28 +
         uVar2 * 0x48) != -1)) {
      iVar1 = FUN_7fffa4d25bbc();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          uVar4 = 0xfffffff6;
        }
        else if (param_1 == 1) {
          uVar4 = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_7fffa55f0104;
          uVar4 = 0xfffffff4;
        }
        (*(code *)&DAT_7ff84ea54fe0)(uVar4,0);
      }
LAB_7fffa55f0104:
      *(uint64_t *)
       (*(int64_t *)(&DAT_7fffa4782180 + ((uint64_t)(int64_t)(int)param_1 >> 6) * 8) + 0x28 +
       uVar2 * 0x48) = 0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = (uint32_t *)FUN_7fffa4ed9184();
  *puVar3 = 9;
  puVar3 = (uint32_t *)FUN_7fffa52d5bb0();
  *puVar3 = 0;
  return 0xffffffff;
}


// ============================================================================
// Function : FUN_7fffa55f0140  |  RVA: 0xe80140  |  Size: 1 bytes
// Callers  : FUN_7fffa4d03fd8@0x593fd8, FUN_7fffa524fccc@0xadfccc
// Callees  : none
// ============================================================================
void FUN_7fffa55f0140(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa55f0150  |  RVA: 0xe80150  |  Size: 2918 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55f0150(void) {
    /* +0xe80150 */ __asm { PUSH RBX }
    /* +0xe80151 */ __asm { PUSH R12 }
    /* +0xe80153 */ __asm { PUSH R14 }
    /* +0xe80155 */ __asm { PUSH RDI }
    /* +0xe80156 */ __asm { PUSH R15 }
    /* +0xe80158 */ __asm { SUB RSP,0x60 }
    /* +0xe8015c */ __asm { MOVAPS xmmword ptr [RSP + 0x50],XMM6 }
    /* +0xe80161 */ __asm { MOV R15,R10 }
    /* +0xe80164 */ __asm { ROL R10,0x2b }
    /* +0xe80168 */ __asm { MOV RDI,R9 }
    /* +0xe8016b */ __asm { MOV R9,0x3762548a05bc59a3 }
    /* +0xe80175 */ __asm { CMP qword ptr [RSP + 0x88],R9 }
    /* +0xe8017d */ __asm { NOP }
    /* +0xe8017e */ __asm { NOP }
    /* +0xe8017f */ __asm { NOP }
    /* +0xe80180 */ __asm { NOP }
    /* +0xe80181 */ __asm { NOP }
    /* +0xe80182 */ __asm { MOV R11W,0xf35d }
    /* +0xe80187 */ __asm { IMUL R11D,R11D,-0x56ad }
    /* +0xe8018e */ __asm { NOP }
    /* +0xe8018f */ __asm { MOV RAX,0x0 }
    /* +0xe80196 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xe8019d */ __asm { RDTSC }
    /* +0xe8019f */ __asm { SHL RDX,0x20 }
    /* +0xe801a3 */ __asm { OR RDX,RAX }
    /* +0xe801a6 */ __asm { MOV R9,-0x30ebf64fafbc6efb }
    /* +0xe801b0 */ __asm { IMUL R9,RDX }
    /* +0xe801b4 */ __asm { MOV RAX,-0x22b18422c4a9c65e }
    /* +0xe801be */ __asm { ADD RAX,R9 }
    /* +0xe801c1 */ __asm { MOV RCX,RAX }
    /* +0xe801c4 */ __asm { SHR RCX,0x3b }
    /* +0xe801c8 */ __asm { MOV R8,RAX }
    /* +0xe801cb */ __asm { SHR R8,0x2d }
    /* +0xe801cf */ __asm { SHR RAX,0x1b }
    /* +0xe801d3 */ __asm { XOR EAX,R8D }
    /* +0xe801d6 */ __asm { ROR EAX,CL }
    /* +0xe801d8 */ __asm { AND EAX,0x3 }
    /* +0xe801db */ __asm { MOV ECX,EDI }
    /* +0xe801dd */ __asm { ROL R11W,CL }
    /* +0xe801e1 */ __asm { XOR R11D,0x9d1 }
    /* +0xe801e8 */ __asm { MOVZX R11D,R11W }
    /* +0xe801ec */ __asm { MOVQ XMM6,R10 }
    /* +0xe801f1 */ __asm { CMP EAX,R11D }
    /* +0xe801f4 */ __asm { JNC 0x7fffa55f0260 }
    /* +0xe801f6 */ __asm { CMP EAX,0x1 }
    /* +0xe801f9 */ __asm { JNZ 0x7fffa55f02a5 }
    /* +0xe801ff */ __asm { LEA RAX,[0x7fffa47b9007] }
    /* +0xe80206 */ __asm { MOV R8,RAX }
    /* +0xe80209 */ __asm { ADD R8,0x5e4f2da2 }
    /* +0xe80210 */ __asm { ROL R8,0x30 }
    /* +0xe80214 */ __asm { ADD R8,0x1c5b0f53 }
    /* +0xe8021b */ __asm { MOV R9,-0x68049259f24c288a }
    /* +0xe80225 */ __asm { CMP R8,R9 }
    /* +0xe80228 */ __asm { JZ 0x7fffa55f0d33 }
    /* +0xe8022e */ __asm { MOV R8,0x0 }
    /* +0xe80235 */ __asm { NOP }
    /* +0xe80236 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xe8023d */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xe80242 */ __asm { MOV R11D,0xab8f126c }
    /* +0xe80248 */ __asm { IMUL R11D,R11D,0x40000015 }
    /* +0xe8024f */ __asm { SUB R11D,EDI }
    /* +0xe80252 */ __asm { MOVSXD R10,R11D }
    /* +0xe80255 */ __asm { MOV EAX,dword ptr [RAX + 0x4031] }
    /* +0xe8025b */ __asm { JMP 0x7fffa55f0c9f }
    /* +0xe80260 */ __asm { CMP EAX,0x3 }
    /* +0xe80263 */ __asm { JNZ 0x7fffa55f04fa }
    /* +0xe80269 */ __asm { LEA RAX,[0x7fffa47b52be] }
    /* +0xe80270 */ __asm { MOV R9,-0x619d5f98bb82ce79 }
    /* +0xe8027a */ __asm { CMP RAX,R9 }
    /* +0xe8027d */ __asm { NOP }
    /* +0xe8027e */ __asm { NOP }
    /* +0xe8027f */ __asm { NOP }
    /* +0xe80280 */ __asm { NOP }
    /* +0xe80281 */ __asm { NOP }
    /* +0xe80282 */ __asm { MOV R11D,0xd9034e26 }
    /* +0xe80288 */ __asm { XOR R11D,EDI }
    /* +0xe8028b */ __asm { ADD R11D,0x34403336 }
    /* +0xe80292 */ __asm { MOVSXD R10,R11D }
    /* +0xe80295 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xe8029a */ __asm { MOV EAX,dword ptr [RAX + 0x726e] }
    /* +0xe802a0 */ __asm { JMP 0x7fffa55f0c9f }
    /* +0xe802a5 */ __asm { MOV EAX,0x367407f4 }
    /* +0xe802aa */ __asm { MOV R9,0x4838b9de3a794727 }
    /* +0xe802b4 */ __asm { CMP RAX,R9 }
    /* +0xe802b7 */ __asm { JZ 0x7fffa55f0d3b }
    /* +0xe802bd */ __asm { MOV R9,qword ptr [RAX + 0x4989f814] }
    /* +0xe802c4 */ __asm { MOV RCX,-0x67c40db6d1ba0079 }
    /* +0xe802ce */ __asm { MOV RAX,R9 }
    /* +0xe802d1 */ __asm { MUL RCX }
    /* +0xe802d4 */ __asm { MOV RCX,RDX }
    /* +0xe802d7 */ __asm { MOV R11D,0x146e6d7 }
    /* +0xe802dd */ __asm { MOV RAX,R9 }
    /* +0xe802e0 */ __asm { MUL R11 }
    /* +0xe802e3 */ __asm { MOV R8,RDX }
    /* +0xe802e6 */ __asm { ADD RAX,RCX }
    /* +0xe802e9 */ __asm { ADC R8,0x0 }
    /* +0xe802ed */ __asm { RDTSC }
    /* +0xe802ef */ __asm { SHL RDX,0x20 }
    /* +0xe802f3 */ __asm { OR RDX,RAX }
    /* +0xe802f6 */ __asm { TEST R8B,0x1 }
    /* +0xe802fa */ __asm { JNZ 0x7fffa55f06c8 }
    /* +0xe80300 */ __asm { MOV R11W,0x9564 }
    /* +0xe80305 */ __asm { MOV R8D,0xffff95c4 }
    /* +0xe8030b */ __asm { SUB R8D,R11D }
    /* +0xe8030e */ __asm { MOV R9,0x5851f42d4c957f2d }
    /* +0xe80318 */ __asm { IMUL RDX,R9 }
    /* +0xe8031c */ __asm { MOVZX R8D,R8W }
    /* +0xe80320 */ __asm { MOV RAX,0x5a47731abbb3b2c6 }
    /* +0xe8032a */ __asm { ADD RAX,RDX }
    /* +0xe8032d */ __asm { MOV RCX,RAX }
    /* +0xe80330 */ __asm { SHR RCX,0x3b }
    /* +0xe80334 */ __asm { MOV R9,RAX }
    /* +0xe80337 */ __asm { SHR R9,0x2d }
    /* +0xe8033b */ __asm { SHR RAX,0x1b }
    /* +0xe8033f */ __asm { XOR EAX,R9D }
    /* +0xe80342 */ __asm { ROR EAX,CL }
    /* +0xe80344 */ __asm { MOV R9,qword ptr GS:[R8] }
    /* +0xe80348 */ __asm { MOV RCX,0x1f14ea5964d496b3 }
    /* +0xe80352 */ __asm { CMP qword ptr [R9 + 0x30],RCX }
    /* +0xe80356 */ __asm { NOP }
    /* +0xe80357 */ __asm { NOP }
    /* +0xe80358 */ __asm { NOP }
    /* +0xe80359 */ __asm { NOP }
    /* +0xe8035a */ __asm { NOP }
    /* +0xe8035b */ __asm { CMP EAX,0x110f216 }
    /* +0xe80360 */ __asm { JA 0x7fffa55f049c }
    /* +0xe80366 */ __asm { PUSHFQ }
    /* +0xe80367 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe8036f */ __asm { POPFQ }
    /* +0xe80370 */ __asm { MOV dword ptr [RSP + 0x30],0xb4d801c6 }
    /* +0xe80378 */ __asm { MOV R11D,dword ptr [RSP + 0x30] }
    /* +0xe8037d */ __asm { CMP R11D,0xdd5990ba }
    /* +0xe80384 */ __asm { JNC 0x7fffa55f0d6b }
    /* +0xe8038a */ __asm { MOV EAX,0xbff56bdf }
    /* +0xe8038f */ __asm { MOV R9,0x64aded05a855e6fc }
    /* +0xe80399 */ __asm { CMP RAX,R9 }
    /* +0xe8039c */ __asm { JNZ 0x7fffa55f03ab }
    /* +0xe8039e */ __asm { CMP AL,0xb0 }
    /* +0xe803a0 */ __asm { INT1 }
    /* +0xe803ab */ __asm { MOV EAX,dword ptr [RAX + -0x3ff7691b] }
    /* +0xe803b1 */ __asm { MOV R9,0x5555555555555556 }
    /* +0xe803bb */ __asm { IMUL R9,RAX }
    /* +0xe803bf */ __asm { MOV RCX,0x5555555555555555 }
    /* +0xe803c9 */ __asm { CMP R9,RCX }
    /* +0xe803cc */ __asm { JA 0x7fffa55f049c }
    /* +0xe803d2 */ __asm { XORPS XMM3,XMM3 }
    /* +0xe803d5 */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM3 }
    /* +0xe803da */ __asm { MOV dword ptr [RSP + 0x48],0xd7dd6dfd }
    /* +0xe803e2 */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xe803e7 */ __asm { MOV dword ptr [RSP + 0x48],0x65d574c7 }
    /* +0xe803ef */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xe803f4 */ __asm { MOV R8W,0x7d19 }
    /* +0xe803f9 */ __asm { XOR R8D,EDI }
    /* +0xe803fc */ __asm { ROL R8W,0x1 }
    /* +0xe80400 */ __asm { MOVSX R8D,R8W }
    /* +0xe80404 */ __asm { CMP R11D,R8D }
    /* +0xe80407 */ __asm { NOP }
    /* +0xe80408 */ __asm { NOP }
    /* +0xe80409 */ __asm { NOP }
    /* +0xe8040a */ __asm { NOP }
    /* +0xe8040b */ __asm { NOP }
    /* +0xe8040c */ __asm { PUSHFQ }
    /* +0xe8040d */ __asm { POP RAX }
    /* +0xe8040e */ __asm { TEST EAX,0x100 }
    /* +0xe80413 */ __asm { NOP }
    /* +0xe80414 */ __asm { NOP }
    /* +0xe80415 */ __asm { NOP }
    /* +0xe80416 */ __asm { NOP }
    /* +0xe80417 */ __asm { NOP }
    /* +0xe80418 */ __asm { NOP }
    /* +0xe80419 */ __asm { NOP }
    /* +0xe8041a */ __asm { NOP }
    /* +0xe8041b */ __asm { MOV RAX,0x0 }
    /* +0xe80422 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xe80429 */ __asm { NOP }
    /* +0xe8042a */ __asm { LEA RAX,[0x7fffa47be9d9] }
    /* +0xe80431 */ __asm { MOV R9,-0x731a56d921f85a29 }
    /* +0xe8043b */ __asm { CMP RAX,R9 }
    /* +0xe8043e */ __asm { NOP }
    /* +0xe8043f */ __asm { NOP }
    /* +0xe80440 */ __asm { NOP }
    /* +0xe80441 */ __asm { NOP }
    /* +0xe80442 */ __asm { MOV R11W,0xa536 }
    /* +0xe80447 */ __asm { MOV R8W,0x1b5c }
    /* +0xe8044c */ __asm { XOR R8D,0xffffd52b }
    /* +0xe80453 */ __asm { MOV R10D,0x1eb6b0c9 }
    /* +0xe80459 */ __asm { ADD R8D,0x3199 }
    /* +0xe80460 */ __asm { MOVZX R9D,R8W }
    /* +0xe80464 */ __asm { XOR R11D,0xaf36 }
    /* +0xe8046b */ __asm { MOV ECX,EDI }
    /* +0xe8046d */ __asm { ROR R11W,CL }
    /* +0xe80471 */ __asm { MOVZX EDX,R11W }
    /* +0xe80475 */ __asm { MOV qword ptr [RSP + 0x48],R8 }
    /* +0xe8047a */ __asm { MOV R11D,EDI }
    /* +0xe8047d */ __asm { OR R11D,0x1 }
    /* +0xe80481 */ __asm { MOV EAX,dword ptr [RAX + -0x2511] }
    /* +0xe80487 */ __asm { ADD R10D,0xf319de60 }
    /* +0xe8048e */ __asm { IMUL R10D,R11D }
    /* +0xe80492 */ __asm { MOVSXD R10,R10D }
    /* +0xe80495 */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xe8049a */ __asm { SYSCALL }
    /* +0xe8049c */ __asm { MOV R9,0x37d94eab0c105fed }
    /* +0xe804a6 */ __asm { LEA RAX,[0x7fffa4787897] }
    /* +0xe804ad */ __asm { XOR R9,-0x67f7c3a0 }
    /* +0xe804b4 */ __asm { MOV R8,RDI }
    /* +0xe804b7 */ __asm { OR R8,0x1 }
    /* +0xe804bb */ __asm { IMUL R8,R9 }
    /* +0xe804bf */ __asm { CMP RAX,R8 }
    /* +0xe804c2 */ __asm { JZ 0x7fffa55f0d53 }
    /* +0xe804c8 */ __asm { MOVD XMM3,EDI }
    /* +0xe804cc */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xe804d1 */ __asm { MOV EAX,dword ptr [RAX + -0x3267] }
    /* +0xe804d7 */ __asm { MOV R11D,0x201f8465 }
    /* +0xe804dd */ __asm { MOVD XMM5,R11D }
    /* +0xe804e2 */ __asm { PADDD XMM5,XMM3 }
    /* +0xe804e6 */ __asm { MOVD R11D,XMM5 }
    /* +0xe804eb */ __asm { XOR R11D,0xcd23f8bd }
    /* +0xe804f2 */ __asm { MOVSXD R10,R11D }
    /* +0xe804f5 */ __asm { JMP 0x7fffa55f0c9f }
    /* +0xe804fa */ __asm { MOV R9,0x7d9bbba3d893f05f }
    /* +0xe80504 */ __asm { XOR R9,RDI }
    /* +0xe80507 */ __asm { LEA RAX,[0x7fffa47bcfd8] }
    /* +0xe8050e */ __asm { ADD R9,-0x1be46135 }
    /* +0xe80515 */ __asm { CMP RAX,R9 }
    /* +0xe80518 */ __asm { NOP }
    /* +0xe80519 */ __asm { NOP }
    /* +0xe8051a */ __asm { NOP }
    /* +0xe8051b */ __asm { NOP }
    /* +0xe8051c */ __asm { NOP }
    /* +0xe8051d */ __asm { MOV EDX,0x8e28e0c9 }
    /* +0xe80522 */ __asm { NEG EDX }
    /* +0xe80524 */ __asm { LEA R9D,[RDI + RDX*0x1] }
    /* +0xe80528 */ __asm { ADD R9D,0xfb6a5df7 }
    /* +0xe8052f */ __asm { MOV R8D,EDI }
    /* +0xe80532 */ __asm { MOVZX EDX,uint8_t ptr [RAX + -0x94b] }
    /* +0xe80539 */ __asm { MOVZX R11D,uint8_t ptr [RAX + RDX*0x4 + -0x93b] }
    /* +0xe80542 */ __asm { ROL R11B,0x4 }
    /* +0xe80546 */ __asm { MOV uint8_t ptr [RSP + 0x30],R11B }
    /* +0xe8054b */ __asm { MOVZX R11D,uint8_t ptr [RAX + RDX*0x4 + -0x93a] }
    /* +0xe80554 */ __asm { ROL R11B,0x4 }
    /* +0xe80558 */ __asm { MOV uint8_t ptr [RSP + 0x31],R11B }
    /* +0xe8055d */ __asm { MOVZX R11D,uint8_t ptr [RAX + RDX*0x4 + -0x939] }
    /* +0xe80566 */ __asm { ROL R11B,0x4 }
    /* +0xe8056a */ __asm { MOV uint8_t ptr [RSP + 0x32],R11B }
    /* +0xe8056f */ __asm { MOVZX R11D,uint8_t ptr [RAX + RDX*0x4 + -0x938] }
    /* +0xe80578 */ __asm { ROL R11B,0x4 }
    /* +0xe8057c */ __asm { OR R8D,0x1 }
    /* +0xe80580 */ __asm { MOV uint8_t ptr [RSP + 0x33],R11B }
    /* +0xe80585 */ __asm { MOV R11D,0x65e8ce72 }
    /* +0xe8058b */ __asm { XOR R11D,dword ptr [RSP + 0x30] }
    /* +0xe80590 */ __asm { MOV ECX,dword ptr [R9] }
    /* +0xe80593 */ __asm { BT R11D,ECX }
    /* +0xe80597 */ __asm { JNC 0x7fffa55f09aa }
    /* +0xe8059d */ __asm { MOV ECX,0xe6e6630a }
    /* +0xe805a2 */ __asm { MOV R9D,0x22a39d25 }
    /* +0xe805a8 */ __asm { MOV R11,-0xd7620188 }
    /* +0xe805b2 */ __asm { XOR R11,0x26855da0 }
    /* +0xe805b9 */ __asm { ADD R11,RDI }
    /* +0xe805bc */ __asm { IMUL R8D,R9D }
    /* +0xe805c0 */ __asm { NOT R8D }
    /* +0xe805c3 */ __asm { LEA R9,[R10 + -0x1] }
    /* +0xe805c7 */ __asm { IMUL EDX,ECX,-0x3467b6f3 }
    /* +0xe805cd */ __asm { ADD EDX,0x7770fb66 }
    /* +0xe805d3 */ __asm { MOV ECX,EDI }
    /* +0xe805d5 */ __asm { ROL EDX,CL }
    /* +0xe805d7 */ __asm { MOVSXD R14,EDX }
    /* +0xe805da */ __asm { MOV EDX,0xddc23771 }
    /* +0xe805df */ __asm { SUB EDX,EDI }
    /* +0xe805e1 */ __asm { ADD EDX,0x45db365f }
    /* +0xe805e7 */ __asm { LEA RAX,[0x7fffa47b5f07] }
    /* +0xe805ee */ __asm { MOV RCX,RAX }
    /* +0xe805f1 */ __asm { ROL RCX,0x2a }
    /* +0xe805f5 */ __asm { MOV R12,RCX }
    /* +0xe805f8 */ __asm { NOT R12 }
    /* +0xe805fb */ __asm { MOV RBX,R10 }
    /* +0xe805fe */ __asm { AND RBX,R12 }
    /* +0xe80601 */ __asm { MOV RDI,-0xa764699d }
    /* +0xe8060b */ __asm { IMUL RDI,RBX }
    /* +0xe8060f */ __asm { MOV RBX,RCX }
    /* +0xe80612 */ __asm { XOR RBX,R10 }
    /* +0xe80615 */ __asm { IMUL RBX,R8 }
    /* +0xe80619 */ __asm { ADD RBX,RDI }
    /* +0xe8061c */ __asm { OR R10,RCX }
    /* +0xe8061f */ __asm { MOV R8,-0xdf2ad941 }
    /* +0xe80629 */ __asm { IMUL R8,R10 }
    /* +0xe8062d */ __asm { CMP R14,-0x2b88c5d9 }
    /* +0xe80634 */ __asm { MOVQ XMM3,R12 }
    /* +0xe80639 */ __asm { PCMPEQD XMM5,XMM5 }
    /* +0xe8063d */ __asm { PXOR XMM5,XMM6 }
    /* +0xe80641 */ __asm { MOVQ R10,XMM5 }
    /* +0xe80646 */ __asm { CMOVZ R9,R10 }
    /* +0xe8064a */ __asm { AND R9,RCX }
    /* +0xe8064d */ __asm { IMUL R9,RDX }
    /* +0xe80651 */ __asm { MOVDQA XMM5,XMM6 }
    /* +0xe80655 */ __asm { PANDN XMM5,XMM3 }
    /* +0xe80659 */ __asm { MOVQ RDX,XMM5 }
    /* +0xe8065e */ __asm { IMUL RDX,R11 }
    /* +0xe80662 */ __asm { AND RCX,R10 }
    /* +0xe80665 */ __asm { MOV R11,-0xb8455486 }
    /* +0xe8066f */ __asm { IMUL R11,RCX }
    /* +0xe80673 */ __asm { ADD R11,RBX }
    /* +0xe80676 */ __asm { ADD R11,R8 }
    /* +0xe80679 */ __asm { ADD R11,RDX }
    /* +0xe8067c */ __asm { ADD R11,R9 }
    /* +0xe8067f */ __asm { MOV R9,0xc98cf07a3796115 }
    /* +0xe80689 */ __asm { IMUL R9,R11 }
    /* +0xe8068d */ __asm { MOV RCX,0x100d60b58fe67c26 }
    /* +0xe80697 */ __asm { CMP R9,RCX }
    /* +0xe8069a */ __asm { JZ 0x7fffa55f0d4b }
    /* +0xe806a0 */ __asm { MOV R11W,0xfa0 }
    /* +0xe806a5 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xe806aa */ __asm { IMUL R11D,R11D,-0x7883 }
    /* +0xe806b1 */ __asm { NOT R11D }
    /* +0xe806b4 */ __asm { ROL R11W,0xb }
    /* +0xe806b9 */ __asm { MOVSX R10,R11W }
    /* +0xe806bd */ __asm { MOV EAX,dword ptr [RAX + 0x6625] }
    /* +0xe806c3 */ __asm { JMP 0x7fffa55f0c9f }
    /* +0xe806c8 */ __asm { MOV R9,-0x158b4ad174161d9b }
    /* +0xe806d2 */ __asm { IMUL RDX,R9 }
    /* +0xe806d6 */ __asm { PUSHFQ }
    /* +0xe806d7 */ __asm { POP R11 }
    /* +0xe806d9 */ __asm { MOV RAX,-0x3cbd0fe94b68fd46 }
    /* +0xe806e3 */ __asm { ADD RAX,RDX }
    /* +0xe806e6 */ __asm { MOV RCX,RAX }
    /* +0xe806e9 */ __asm { SHR RCX,0x3b }
    /* +0xe806ed */ __asm { MOV R8,RAX }
    /* +0xe806f0 */ __asm { SHR R8,0x1b }
    /* +0xe806f4 */ __asm { SHR RAX,0x2d }
    /* +0xe806f8 */ __asm { XOR EAX,R8D }
    /* +0xe806fb */ __asm { ROR EAX,CL }
    /* +0xe806fd */ __asm { TEST R11D,0x100 }
    /* +0xe80704 */ __asm { NOP }
    /* +0xe80705 */ __asm { NOP }
    /* +0xe80706 */ __asm { NOP }
    /* +0xe80707 */ __asm { NOP }
    /* +0xe80708 */ __asm { NOP }
    /* +0xe80709 */ __asm { NOP }
    /* +0xe8070a */ __asm { NOP }
    /* +0xe8070b */ __asm { NOP }
    /* +0xe8070c */ __asm { NOP }
    /* +0xe8070d */ __asm { NOP }
    /* +0xe8070e */ __asm { NOP }
    /* +0xe8070f */ __asm { NOP }
    /* +0xe80710 */ __asm { NOP }
    /* +0xe80711 */ __asm { NOP }
    /* +0xe80712 */ __asm { NOP }
    /* +0xe80713 */ __asm { MOV dword ptr [RSP + 0x30],0x966219e6 }
    /* +0xe8071b */ __asm { MOV R11D,dword ptr [RSP + 0x30] }
    /* +0xe80720 */ __asm { MOV R8W,0xdcb3 }
    /* +0xe80725 */ __asm { IMUL R8D,R8D,-0x327b }
    /* +0xe8072c */ __asm { NOT R8D }
    /* +0xe8072f */ __asm { MOVZX R8D,R8W }
    /* +0xe80733 */ __asm { CMP R11D,R8D }
    /* +0xe80736 */ __asm { JGE 0x7fffa55f0d5b }
    /* +0xe8073c */ __asm { MOV R11D,0xb3c421f5 }
    /* +0xe80742 */ __asm { IMUL R11D,R11D,-0xd616b7b }
    /* +0xe80749 */ __asm { ADD R11D,0xb9354037 }
    /* +0xe80750 */ __asm { MOV ECX,EDI }
    /* +0xe80752 */ __asm { ROR R11D,CL }
    /* +0xe80755 */ __asm { CMP EAX,R11D }
    /* +0xe80758 */ __asm { JNC 0x7fffa55f0956 }
    /* +0xe8075e */ __asm { MOV R11D,0xef94462a }
    /* +0xe80764 */ __asm { SUB R11D,EDI }
    /* +0xe80767 */ __asm { ADD R11D,0x408e2eb0 }
    /* +0xe8076e */ __asm { MOV dword ptr [RSP + 0x30],R11D }
    /* +0xe80773 */ __asm { MOV R11D,dword ptr [RSP + 0x30] }
    /* +0xe80778 */ __asm { LEA RAX,[0x7fffa47bd1ed] }
    /* +0xe8077f */ __asm { MOV R9,0x453acc0162c6e9bc }
    /* +0xe80789 */ __asm { CMP RAX,R9 }
    /* +0xe8078c */ __asm { NOP }
    /* +0xe8078d */ __asm { NOP }
    /* +0xe8078e */ __asm { NOP }
    /* +0xe8078f */ __asm { NOP }
    /* +0xe80790 */ __asm { NOP }
    /* +0xe80791 */ __asm { MOV R11D,0xced2eacb }
    /* +0xe80797 */ __asm { ADD R11D,0x88425128 }
    /* +0xe8079e */ __asm { MOV R8D,EDI }
    /* +0xe807a1 */ __asm { OR R8D,0x1 }
    /* +0xe807a5 */ __asm { MOV R9D,0xc3563a15 }
    /* +0xe807ab */ __asm { IMUL R9D,R8D }
    /* +0xe807af */ __asm { ROL R9D,0x3 }
    /* +0xe807b3 */ __asm { MOV ECX,EDI }
    /* +0xe807b5 */ __asm { ROL R11D,CL }
    /* +0xe807b8 */ __asm { ADD R9D,0xb7f0ba6e }
    /* +0xe807bf */ __asm { IMUL R11D,R11D,-0x1f34a25b }
    /* +0xe807c6 */ __asm { MOVSXD RCX,R11D }
    /* +0xe807c9 */ __asm { CMP R9,0x4957af18 }
    /* +0xe807d0 */ __asm { MOVSX R8,uint8_t ptr [RAX + -0xaa4] }
    /* +0xe807d8 */ __asm { MOVZX EDX,R8B }
    /* +0xe807dc */ __asm { CMOVZ RDX,R8 }
    /* +0xe807e0 */ __asm { MOVZX R8D,uint8_t ptr [RAX + RDX*0x4 + -0xa9e] }
    /* +0xe807e9 */ __asm { NOT R8B }
    /* +0xe807ec */ __asm { ROL R8B,0x5 }
    /* +0xe807f0 */ __asm { MOV uint8_t ptr [RSP + 0x30],R8B }
    /* +0xe807f5 */ __asm { MOVZX R9D,uint8_t ptr [RAX + RDX*0x4 + -0xa9d] }
    /* +0xe807fe */ __asm { LEA R11D,[R9 + 0x1] }
    /* +0xe80802 */ __asm { CMP RCX,0x4272c3ff }
    /* +0xe80809 */ __asm { NOT R9B }
    /* +0xe8080c */ __asm { MOVZX R8D,R9B }
    /* +0xe80810 */ __asm { MOVZX R11D,R11B }
    /* +0xe80814 */ __asm { CMOVNZ R11D,R8D }
    /* +0xe80818 */ __asm { ROL R11B,0x5 }
    /* +0xe8081c */ __asm { MOV uint8_t ptr [RSP + 0x31],R11B }
    /* +0xe80821 */ __asm { MOVZX R8D,uint8_t ptr [RAX + RDX*0x4 + -0xa9c] }
    /* +0xe8082a */ __asm { NOT R8B }
    /* +0xe8082d */ __asm { ROL R8B,0x5 }
    /* +0xe80831 */ __asm { MOV uint8_t ptr [RSP + 0x32],R8B }
    /* +0xe80836 */ __asm { MOVZX R8D,uint8_t ptr [RAX + RDX*0x4 + -0xa9b] }
    /* +0xe8083f */ __asm { NOT R8B }
    /* +0xe80842 */ __asm { ROL R8B,0x5 }
    /* +0xe80846 */ __asm { MOV uint8_t ptr [RSP + 0x33],R8B }
    /* +0xe8084b */ __asm { MOV R11D,0x9102c3cc }
    /* +0xe80851 */ __asm { XOR R11D,dword ptr [RSP + 0x30] }
    /* +0xe80856 */ __asm { BT R11D,R11D }
    /* +0xe8085a */ __asm { JNC 0x7fffa55f0956 }
    /* +0xe80860 */ __asm { XORPS XMM3,XMM3 }
    /* +0xe80863 */ __asm { MOVAPS xmmword ptr [RSP + 0x30],XMM3 }
    /* +0xe80868 */ __asm { MOV dword ptr [RSP + 0x48],0xd44344 }
    /* +0xe80870 */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xe80875 */ __asm { TEST R11D,R11D }
    /* +0xe80878 */ __asm { NOP }
    /* +0xe80879 */ __asm { NOP }
    /* +0xe8087a */ __asm { NOP }
    /* +0xe8087b */ __asm { NOP }
    /* +0xe8087c */ __asm { NOP }
    /* +0xe8087d */ __asm { NOP }
    /* +0xe8087e */ __asm { NOP }
    /* +0xe8087f */ __asm { NOP }
    /* +0xe80880 */ __asm { NOP }
    /* +0xe80881 */ __asm { NOP }
    /* +0xe80882 */ __asm { MOV R11D,0x4008a536 }
    /* +0xe80888 */ __asm { SUB R11D,EDI }
    /* +0xe8088b */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xe80892 */ __asm { NOP }
    /* +0xe80893 */ __asm { MOV RAX,0x0 }
    /* +0xe8089a */ __asm { PUSHFQ }
    /* +0xe8089b */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe808a3 */ __asm { POPFQ }
    /* +0xe808a4 */ __asm { MOV dword ptr [RSP + 0x30],0x0 }
    /* +0xe808ac */ __asm { ADD R11D,0xfcd1227f }
    /* +0xe808b3 */ __asm { MOV dword ptr [RSP + 0x48],R11D }
    /* +0xe808b8 */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xe808bd */ __asm { MOV R11D,0x9bbb4c89 }
    /* +0xe808c3 */ __asm { ADD R11D,EDI }
    /* +0xe808c6 */ __asm { ROL R11D,0x8 }
    /* +0xe808ca */ __asm { MOV dword ptr [RSP + 0x48],R11D }
    /* +0xe808cf */ __asm { MOV R11D,dword ptr [RSP + 0x48] }
    /* +0xe808d4 */ __asm { LEA RAX,[0x7fffa4789540] }
    /* +0xe808db */ __asm { MOV R9,-0x37db5665e2e5d214 }
    /* +0xe808e5 */ __asm { CMP RAX,R9 }
    /* +0xe808e8 */ __asm { NOP }
    /* +0xe808e9 */ __asm { NOP }
    /* +0xe808ea */ __asm { NOP }
    /* +0xe808eb */ __asm { NOP }
    /* +0xe808ec */ __asm { NOP }
    /* +0xe808ed */ __asm { MOV DX,0x32e5 }
    /* +0xe808f1 */ __asm { NOT EDX }
    /* +0xe808f3 */ __asm { LEA R11D,[RDI + RDX*0x1] }
    /* +0xe808f7 */ __asm { MOV R8W,0xaab5 }
    /* +0xe808fc */ __asm { ADD R8D,0xffffc181 }
    /* +0xe80903 */ __asm { MOV R9W,0x51e4 }
    /* +0xe80908 */ __asm { ADD R9D,0xffffae1c }
    /* +0xe8090f */ __asm { MOV ECX,EDI }
    /* +0xe80911 */ __asm { ROL R9W,CL }
    /* +0xe80915 */ __asm { ROL R11W,0x7 }
    /* +0xe8091a */ __asm { NOT R9D }
    /* +0xe8091d */ __asm { MOVSX R10,R9W }
    /* +0xe80921 */ __asm { MOV RCX,0x0 }
    /* +0xe80928 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe8092f */ __asm { MOV qword ptr [RSP + 0x48],RCX }
    /* +0xe80934 */ __asm { MOV ECX,EDI }
    /* +0xe80936 */ __asm { ROR R8W,CL }
    /* +0xe8093a */ __asm { MOV EAX,dword ptr [RAX + -0x4f24] }
    /* +0xe80940 */ __asm { IMUL R8D,R8D,0x93 }
    /* +0xe80947 */ __asm { MOVZX R9D,R8W }
    /* +0xe8094b */ __asm { MOVZX EDX,R11W }
    /* +0xe8094f */ __asm { LEA R8,[RSP + 0x30] }
    /* +0xe80954 */ __asm { SYSCALL }
    /* +0xe80956 */ __asm { LEA RAX,[0x7fffa477d8ec] }
    /* +0xe8095d */ __asm { MOV R9,-0x37b7ef6511fbf8af }
    /* +0xe80967 */ __asm { CMP RAX,R9 }
    /* +0xe8096a */ __asm { JNZ 0x7fffa55f0974 }
    /* +0xe8096c */ __asm { XCHG EAX,EDX }
    /* +0xe8096e */ __asm { OUT 0xf5,EAX }
    /* +0xe80971 */ __asm { MOV DS,word ptr [RBX + -0x73] }
    /* +0xe80974 */ __asm { MOVD XMM3,EDI }
    /* +0xe80978 */ __asm { MOV qword ptr [RSP + 0x30],R8 }
    /* +0xe8097d */ __asm { MOV R11D,0x7728465b }
    /* +0xe80983 */ __asm { MOVD XMM5,R11D }
    /* +0xe80988 */ __asm { PXOR XMM5,XMM3 }
    /* +0xe8098c */ __asm { MOV EAX,dword ptr [RAX + 0x7570] }
    /* +0xe80992 */ __asm { MOVD R11D,XMM5 }
    /* +0xe80997 */ __asm { ROL R11D,0x17 }
    /* +0xe8099b */ __asm { IMUL R11D,R11D,-0x60e52315 }
    /* +0xe809a2 */ __asm { MOVSXD R10,R11D }
    /* +0xe809a5 */ __asm { JMP 0x7fffa55f0c9f }
    /* +0xe809aa */ __asm { RDTSC }
    /* +0xe809ac */ __asm { SHL RDX,0x20 }
    /* +0xe809b0 */ __asm { OR RDX,RAX }
    /* +0xe809b3 */ __asm { MOV R11D,0x31ed3775 }
}


// ============================================================================
// Function : FUN_7fffa55f0da0  |  RVA: 0xe80da0  |  Size: 640 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f0da0(int64_t param_1,uint8_t param_2,uint64_t param_3,uint32_t param_4)

{
  int64_t in_RAX;
  uint64_t uVar1;
  uint8_t bVar2;
  char in_R11B;
  uint8_t bVar3;
  uint8_t bVar4;
  
  bVar4 = in_R11B * 'U' ^ 0xb8;
  param_3 = (param_3 << 0x2f | param_3 >> 0x11) ^ (param_3 << 0x1d | param_3 >> 0x23) ^ param_3;
  bVar2 = (uint8_t)param_4;
  bVar4 = (in_R11B * '@' | bVar4 >> 2) ^ (bVar4 << 4 | bVar4 >> 4) ^ bVar4;
  bVar4 = ((bVar4 << 4 | bVar4 >> 4) -
          ((0xe3U >> (bVar2 & 7) | -0x1d << 8 - (bVar2 & 7)) + bVar2 + 0xa2)) + 0xbf;
  param_3 = (param_3 << 0x1e | param_3 >> 0x22) ^ (param_3 << 0x3a | param_3 >> 6) ^ param_3;
  uVar1 = (uint64_t)bVar4;
  param_3 = (param_3 << 0x3c | param_3 >> 4) ^ (param_3 << 0x34 | param_3 >> 0xc) ^ param_3;
  param_3 = (param_3 << 0x28 | param_3 >> 0x18) ^ (param_3 << 0x38 | param_3 >> 8) ^ param_3;
  if (((param_3 << 0x30 | param_3 >> 0x10) ^ (param_3 << 0x10 | param_3 >> 0x30) ^ param_3) +
      0x1d0d973c < param_2 + uVar1) {
    return;
  }
  if ((char)param_2 < '\x04') {
    if ((char)param_2 < '\x02') {
      if (param_2 == (uint8_t)(bVar2 + 0x73)) {
        uVar1 = (uint64_t)*(uint8_t *)(param_1 + uVar1);
        goto LAB_7fffa55f0ede;
      }
    }
    else if (param_2 == 2) {
      uVar1 = (uint64_t)*(uint16_t *)(param_1 + uVar1);
      goto LAB_7fffa55f0ede;
    }
  }
  else if ((char)param_2 < '\b') {
    if (param_2 == 4) {
      uVar1 = (uint64_t)*(uint32_t *)(param_1 + uVar1);
      goto LAB_7fffa55f0ede;
    }
  }
  else if (param_2 == 8) {
    uVar1 = *(uint64_t *)(param_1 + uVar1);
    goto LAB_7fffa55f0ede;
  }
  uVar1 = 0;
LAB_7fffa55f0ede:
  bVar3 = *(uint8_t *)(in_RAX + 7);
  if ((bVar3 & 8) == 0) {
    if ((uint8_t)(bVar3 & 4) == (uint8_t)(0U >> (bVar2 & 7) | '\0' << 8 - (bVar2 & 7))) {
      bVar3 = bVar3 | 4;
      *(uint64_t *)(in_RAX + 0x30) = uVar1;
      *(uint8_t *)(in_RAX + 0xf) = *(uint8_t *)(in_RAX + 0xf) & 0xf | param_2 << 4;
      *(uint8_t *)(in_RAX + 0x13) = *(uint8_t *)(in_RAX + 0x13) & 0xf | bVar4 * '\x10';
    }
    else {
      bVar3 = bVar3 | 8;
      bVar2 = *(uint8_t *)(in_RAX + 0x10) * -0x10;
      if ((param_4 | 1) * -0x7aba091f + 0x9a9bc0c7 <
          ((param_4 ^ 0x39084afa) << 0xd | (param_4 ^ 0x39084afa) >> 0x13)) {
        bVar2 = *(uint8_t *)(in_RAX + 0x10) & 0xf0;
      }
      *(uint8_t *)(in_RAX + 0x10) = bVar2 | param_2 & 0xf;
      *(uint8_t *)(in_RAX + 0x14) = *(uint8_t *)(in_RAX + 0x14) & 0xf0 | bVar4 & 0xf;
      *(char *)(in_RAX + 0x38) = (char)uVar1;
    }
    *(uint8_t *)(in_RAX + 7) = bVar3;
    *(uint8_t *)(in_RAX + 0xb) = param_2 + *(char *)(in_RAX + 0xb);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55f1020  |  RVA: 0xe81020  |  Size: 465 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f1020(void)

{
  uint8_t bVar1;
  uint32_t in_EAX;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t in_R11;
  uint64_t *puVar6;
  int64_t in_stack_00000030;
  
  uVar4 = 0x71b2537cU - in_stack_00000030 << 0x30 | 0x71b2537cU - in_stack_00000030 >> 0x10;
  bVar1 = (uint8_t)in_EAX & 0x1f;
  uVar3 = (in_R11 << 0x31 | in_R11 >> 0xf) ^ (in_R11 << 0x36 | in_R11 >> 10) ^ in_R11;
  uVar4 = uVar4 >> 8 ^ uVar4;
  uVar2 = uVar4 - (uVar4 >> 0x10);
  if (0x71c6fb3d < (in_EAX ^ 0x601bebb9)) {
    uVar2 = uVar4 >> 0x10 ^ uVar4;
  }
  uVar4 = uVar2 >> 0x20 ^ uVar2;
  if ((-0xbbe9115 << bVar1 | 0xf4416eebU >> 0x20 - bVar1) < (in_EAX | 1) * 0x177cb75b) {
    uVar4 = uVar2 * (uVar2 >> 0x20);
  }
  uVar3 = (uVar3 << 0x2c | uVar3 >> 0x14) ^ (uVar3 << 0x22 | uVar3 >> 0x1e) ^ uVar3;
  uVar3 = (uVar3 << 0x18 | uVar3 >> 0x28) ^ (uVar3 << 4 | uVar3 >> 0x3c) ^ uVar3;
  uVar3 = (uVar3 << 8 | uVar3 >> 0x38) ^ (uVar3 << 0x30 | uVar3 >> 0x10) ^ uVar3;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) ^ (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar3;
  puVar5 = (uint64_t *)(uVar3 << 0x20 | uVar3 >> 0x20);
  puVar6 = (uint64_t *)(uVar4 - (uVar4 << 0x36));
  if (puVar6 != puVar5) {
    if (7 < puVar6[3]) {
      uVar2 = *puVar6;
      FUN_7fffa5687c30(uVar2,FUN_7fffa5687c30,uVar2 >> 0x3d ^ uVar2);
    }
    *(uint16_t *)puVar6 = 0;
    puVar6[2] = 0;
    puVar6[3] = 7;
    uVar2 = *puVar5;
    uVar4 = puVar5[1];
    uVar3 = puVar5[3];
    puVar6[2] = puVar5[2];
    puVar6[3] = uVar3;
    *puVar6 = uVar2;
    puVar6[1] = uVar4;
    puVar5[3] = 7;
    puVar5[2] = 0;
    *(uint16_t *)puVar5 = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55f1200  |  RVA: 0xe81200  |  Size: 706 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f1200(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa4785f26 = 0;
  uRam00007fffa4785f3a = 0;
  uRam00007fffa4785f42 = 0;
  uRam00007fffa4785f2a = 0;
  uRam00007fffa4785f32 = 0;
  uRam00007fffa4785f4a = 0;
  uRam00007fffa4785f53 = 0;
  uVar1 = rdtsc();
  lVar3 = 2;
  lVar4 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x883fc72a715db50;
  while( true ) {
    *(char *)(lVar3 + 0x7fffa4785f1e) = (char)((uint64_t)(lVar4 * 0x72a715db50) >> 0x20);
    *(char *)(lVar3 + 0x7fffa4785f20) = (char)((uint64_t)(lVar4 * 0x4e4da0d000) >> 0x20);
    *(char *)(lVar3 + 0x7fffa4785f1f) = (char)((uint64_t)(lVar4 * 0x401701f900) >> 0x20);
    if (lVar3 == 0x3e) break;
    *(char *)(lVar3 + 0x7fffa4785f23) = (char)((uint64_t)(lVar4 * -0x18b71ddb57000000) >> 0x20);
    *(char *)(lVar3 + 0x7fffa4785f21) = (char)((uint64_t)(lVar4 * 0xc1e4310000) >> 0x20);
    *(char *)(lVar3 + 0x7fffa4785f22) = (char)((uint64_t)(lVar4 * 0xd23a500000) >> 0x20);
    lVar3 = lVar3 + 6;
    lVar4 = lVar4 * -0x18b71ddb57000000;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa4785f26 * 0x33333334 + 0x33333334) * 5;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa4785f2a) = 0;
  bRam00007fffa4785f26 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f14d0  |  RVA: 0xe814d0  |  Size: 40 bytes
// Callers  : none
// Callees  : FUN_7fffa56a0618@0xf30618, FUN_7fffa4a994d0@0x3294d0
// ============================================================================
uint64_t FUN_7fffa55f14d0(void)

{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  uint32_t auStackX_8 [8];
  
  iVar2 = FUN_7fffa56a0618(auStackX_8);
  if (iVar2 == 0) {
    return (uint64_t)auStackX_8[0];
  }
  FUN_7fffa4a994d0("invalid random_device value");
  pcVar1 = (code *)__debugbreak();
  uVar3 = (*pcVar1)();
  return uVar3;
}


// ============================================================================
// Function : FUN_7fffa55f1500  |  RVA: 0xe81500  |  Size: 3608 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t * FUN_7fffa55f1500(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  uint32_t uVar10;
  int64_t in_RAX;
  int64_t lVar11;
  uint64_t *puVar12;
  uint8_t bVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  int iVar22;
  int iVar23;
  uint32_t uVar24;
  uint64_t uVar25;
  int64_t lVar26;
  int iVar27;
  int64_t in_R10;
  uint32_t uVar28;
  uint64_t in_R11;
  uint64_t uVar29;
  uint64_t *puVar30;
  int64_t lVar31;
  uint64_t *puVar32;
  uint64_t *puVar33;
  uint32_t uVar34;
  char cVar35;
  uint8_t uVar38;
  char cVar39;
  uint8_t uVar40;
  char cVar41;
  uint8_t uVar42;
  char cVar43;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint32_t uVar44;
  uint8_t auVar45 [16];
  uint64_t *in_stack_00000028;
  uint32_t auStack_1a8 [64];
  uint64_t uStack_a8;
  int64_t lStack_a0;
  uint64_t *puStack_98;
  int64_t lStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  uint64_t uStack_68;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  
  puStack_60 = param_1;
  puVar30 = (uint64_t *)(in_RAX + -0x486c105a);
  uVar15 = (in_R11 << 0x35 | in_R11 >> 0xb) * 0x1001001001001001;
  uVar15 = uVar15 >> 0x2e ^ uVar15;
  lVar6 = *(int64_t *)(uVar15 + 8);
  lVar7 = *(int64_t *)(uVar15 + 0x10);
  lVar26 = *(int64_t *)(uVar15 + 0x70);
  lVar31 = *(int64_t *)(uVar15 + 0x38);
  uVar16 = 5;
  if (*(uint32_t *)(uVar15 + 0x10c) < 5) {
    uVar16 = *(uint32_t *)(uVar15 + 0x10c);
  }
  uVar24 = 1 << (*(uint8_t *)(uVar15 + 0x100) & 0x1f);
  iVar23 = 1 << ((uint8_t)uVar16 & 0x1f);
  uVar16 = *(uint32_t *)(uVar15 + 0x1c);
  puStack_58 = (uint64_t *)((int64_t)puVar30 - lVar6);
  uVar14 = (uint32_t)puStack_58;
  uVar10 = uVar14 - uVar24;
  if (uVar14 - uVar16 <= uVar24) {
    uVar10 = uVar16;
  }
  if (*(int *)(uVar15 + 0x28) != 0) {
    uVar10 = uVar16;
  }
  uStack_68 = (uint64_t)uVar10;
  uStack_a8 = (uint64_t)*(uint32_t *)(uVar15 + 0x18);
  puStack_48 = puVar30;
  lStack_70 = lVar6;
  lStack_78 = lVar7;
  uVar10 = (uint32_t)in_R10;
  cVar35 = (char)*(uint32_t *)(uVar15 + 0x34);
  uVar16 = (uint32_t)*(uint64_t *)(uVar15 + 0x60);
  if (*(int *)(uVar15 + 300) == 0) {
    uVar24 = *(uint32_t *)(uVar15 + 0x2c);
    puVar12 = (uint64_t *)(uint64_t)uVar24;
    lVar20 = lVar31;
    lVar19 = lVar26;
    if ((0x35a4 - uVar10 & 0xffff) < uVar14 - uVar24) {
      if (uVar24 < 0xffffffa0) {
        puVar17 = puVar12 + 0xc;
        uVar24 = uVar10 | 1;
        do {
          uVar28 = uVar24 * -0x462c77d + 0xd5f97661;
          bVar9 = ~(uVar24 * -0x5102425d) <= uVar28;
          if (uVar10 == 0xef471f6f) {
            bVar9 = uVar28 < ~(uVar24 * -0x5102425d);
          }
          uVar28 = (uint32_t)puVar12;
          if (bVar9) {
            uVar34 = *(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar28 & 7) * 4);
            *(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar28 & 7) * 4) =
                 (*(int *)(lVar6 + 8 + (int64_t)puVar12) * -0x61c8864f ^ *(uint32_t *)(uVar15 + 0x60))
                 >> (0x18U - cVar35 & 0x1f);
            puVar12 = (uint64_t *)((int64_t)puVar12 + 1);
          }
          else {
            iVar22 = *(int *)(lVar6 + 8 + (int64_t)puVar12);
            iVar27 = uVar24 * 0x8ca0062 + -0x4a3220ed;
            uVar44 = iVar22 + 0x61c8864f;
            if ((iVar27 * 2 | (uint32_t)(iVar27 < 0)) < 0x7819b2d8) {
              uVar44 = iVar22 * -0x61c8864f;
            }
            uVar34 = *(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar28 & 7) * 4);
            *(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar28 & 7) * 4) =
                 (uVar44 ^ *(uint32_t *)(uVar15 + 0x60)) >> (0x18U - cVar35 & 0x1f);
            puVar12 = (uint64_t *)((int64_t)puVar12 + 1);
            if ((int64_t)(0x80000055fbb424U - in_R10 << 0x31 | 0x80000055fbb424U - in_R10 >> 0xf) <
                (int64_t)
                (int)(((uVar10 + 0x21da7835) * 4 | uVar10 + 0x21da7835 >> 0x1e) ^ 0x7f3594c5)) {
              puVar12 = (uint64_t *)(uint64_t)(uVar28 & 1);
            }
          }
          uVar29 = (uint64_t)(uVar34 >> 3 & 0xffffffe0);
          iVar22 = 0x1f;
          if ((*(uint8_t *)(lVar31 + uVar29) & 0x1f) != 1) {
            iVar22 = 0;
          }
          uVar44 = iVar22 + (uint32_t)(*(uint8_t *)(lVar31 + uVar29) - 1 & 0x1f);
          *(char *)(lVar31 + uVar29) = (char)uVar44;
          *(char *)((uint64_t)uVar44 + uVar29 + lVar31) = (char)uVar34;
          *(uint32_t *)(lVar26 + uVar29 * 4 + (uint64_t)uVar44 * 4) = uVar28;
        } while (puVar12 != puVar17);
        lVar20 = *(int64_t *)(uVar15 + 0x38);
        lVar19 = *(int64_t *)(uVar15 + 0x70);
      }
      uVar24 = uVar14 - 0x20;
      puVar12 = (uint64_t *)(uint64_t)uVar24;
      piVar1 = (int *)(lVar6 + (int64_t)puVar12);
      uVar44 = ((int)(int *)(in_RAX - 0x486c1059U) - (int)piVar1) + 1;
      uVar28 = 8;
      if (uVar44 < 8) {
        uVar28 = uVar44;
      }
      uVar44 = 0;
      if (piVar1 <= (int *)(in_RAX - 0x486c1059U)) {
        uVar44 = uVar28;
      }
      uVar28 = (uVar14 + uVar44) - 0x20;
      if (uVar24 < uVar28) {
        uVar34 = *(uint32_t *)(uVar15 + 0x60);
        bVar13 = 0x18 - (char)*(uint32_t *)(uVar15 + 0x34);
        if ((uVar44 & 1) == 0) {
          puVar17 = puVar12;
        }
        else {
          puVar17 = (uint64_t *)((int64_t)puVar12 + 1);
          *(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar24 & 7) * 4) =
               (*piVar1 * -0x61c8864f ^ uVar34) >> (bVar13 & 0x1f);
        }
        if (uVar44 != ((uVar10 ^ 0xa3be) + 0x6867 & 0xffff)) {
          do {
            uVar44 = (uint32_t)puVar17;
            *(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar44 & 7) * 4) =
                 (*(int *)(lVar6 + (int64_t)puVar17) * -0x61c8864f ^ uVar34) >> (bVar13 & 0x1f);
            piVar1 = (int *)(lVar6 + 1 + (int64_t)puVar17);
            puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
            *(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar44 + 1 & 7) * 4) =
                 (*piVar1 * -0x61c8864f ^ uVar34) >> (bVar13 & 0x1f);
          } while (uVar28 != (uint32_t)puVar17);
        }
      }
    }
    if (uVar24 < uVar14) {
      lVar8 = *(int64_t *)(uVar15 + 8);
      uVar29 = (uint64_t)uVar24;
      uVar5 = *(uint32_t *)(uVar15 + 0x34);
      do {
        uVar18 = (uint64_t)((uint32_t)uVar29 & 7);
        uVar24 = *(uint32_t *)(uVar15 + 0x40 + uVar18 * 4);
        uVar25 = (uint64_t)(uVar24 >> 3 & 0xffffffe0);
        *(uint32_t *)(uVar15 + 0x40 + uVar18 * 4) =
             (*(int *)(lVar8 + 8 + uVar29) * -0x61c8864f ^ *(uint32_t *)(uVar15 + 0x60)) >>
             (0x18U - (char)uVar5 & 0x1f);
        lVar11 = 0;
        if ((*(uint8_t *)(lVar20 + uVar25) & 0x1f) == 1) {
          lVar11 = 0x1f;
        }
        puVar12 = (uint64_t *)(lVar11 + (uint64_t)(*(uint8_t *)(lVar20 + uVar25) - 1 & 0x1f));
        *(char *)(lVar20 + uVar25) = (char)puVar12;
        *(char *)(lVar20 + uVar25 + (int64_t)puVar12) = (char)uVar24;
        *(uint32_t *)(lVar19 + uVar25 * 4 + (int64_t)puVar12 * 4) = (uint32_t)uVar29;
        uVar29 = uVar29 + 1;
      } while (((uint64_t)puStack_58 & 0xffffffff) != uVar29);
    }
    *(uint32_t *)(uVar15 + 0x2c) = uVar14;
    uVar24 = *(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar14 & 7) * 4);
    *(uint32_t *)(uVar15 + 0x40 + (uint64_t)(uVar14 & 7) * 4) =
         (*(int *)(lVar6 + 8 + ((uint64_t)puStack_58 & 0xffffffff)) * -0x61c8864f ^ uVar16) >>
         (0x18U - cVar35 & 0x1f);
  }
  else {
    uVar24 = *(uint32_t *)puVar30 ^ 0x9e3779b1;
    if (uVar10 != 0x71079d34) {
      uVar24 = *(uint32_t *)puVar30 * -0x61c8864f;
    }
    *(uint32_t *)(uVar15 + 0x2c) = uVar14;
    uVar24 = (uVar24 ^ uVar16) >> (0x18U - cVar35 & 0x1f);
    puVar12 = puStack_58;
  }
  if ((uVar10 ^ 0x1d700748) < 0x7ae06e0) {
    uStack_80 = (uint64_t)(int)(uVar10 + 0x9a5655f7);
    *(uint32_t *)(uVar15 + 0x68) = *(int *)(uVar15 + 0x68) + uVar24;
  }
  else {
    uStack_80 = 0x6302481b;
    *(int *)(uVar15 + 0x68) = *(int *)(uVar15 + 0x68) + uVar24;
  }
  uVar29 = (uint64_t)(uVar24 >> 3 & 0xffffffe0);
  uVar42 = (uint8_t)(uVar24 >> 0x18);
  uVar40 = (uint8_t)(uVar24 >> 0x10);
  uVar38 = (uint8_t)(uVar24 >> 8);
  auVar36._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar42,uVar42),uVar40),CONCAT14(uVar40,uVar24)) >> 0x20);
  auVar36[3] = uVar38;
  auVar36[2] = uVar38;
  auVar36[0] = (uint8_t)uVar24;
  auVar36[1] = auVar36[0];
  auVar36._8_8_ = 0;
  auVar37 = pshuflw(auVar36,auVar36,0);
  bVar13 = *(uint8_t *)(lVar31 + uVar29);
  lVar26 = lVar26 + uVar29 * 4;
  pcVar4 = (char *)(lVar31 + uVar29);
  pcVar3 = (char *)(lVar31 + 0x10 + uVar29);
  cVar35 = auVar37[0];
  auVar45[0] = -(*pcVar4 == cVar35);
  cVar39 = auVar37[1];
  auVar45[1] = -(pcVar4[1] == cVar39);
  cVar41 = auVar37[2];
  auVar45[2] = -(pcVar4[2] == cVar41);
  cVar43 = auVar37[3];
  auVar45[3] = -(pcVar4[3] == cVar43);
  auVar45[4] = -(pcVar4[4] == cVar35);
  auVar45[5] = -(pcVar4[5] == cVar39);
  auVar45[6] = -(pcVar4[6] == cVar41);
  auVar45[7] = -(pcVar4[7] == cVar43);
  auVar45[8] = -(pcVar4[8] == cVar35);
  auVar45[9] = -(pcVar4[9] == cVar39);
  auVar45[10] = -(pcVar4[10] == cVar41);
  auVar45[0xb] = -(pcVar4[0xb] == cVar43);
  auVar45[0xc] = -(pcVar4[0xc] == cVar35);
  auVar45[0xd] = -(pcVar4[0xd] == cVar39);
  auVar45[0xe] = -(pcVar4[0xe] == cVar41);
  auVar45[0xf] = -(pcVar4[0xf] == cVar43);
  auVar37[0] = -(*pcVar3 == cVar35);
  auVar37[1] = -(pcVar3[1] == cVar39);
  auVar37[2] = -(pcVar3[2] == cVar41);
  auVar37[3] = -(pcVar3[3] == cVar43);
  auVar37[4] = -(pcVar3[4] == cVar35);
  auVar37[5] = -(pcVar3[5] == cVar39);
  auVar37[6] = -(pcVar3[6] == cVar41);
  auVar37[7] = -(pcVar3[7] == cVar43);
  auVar37[8] = -(pcVar3[8] == cVar35);
  auVar37[9] = -(pcVar3[9] == cVar39);
  auVar37[10] = -(pcVar3[10] == cVar41);
  auVar37[0xb] = -(pcVar3[0xb] == cVar43);
  auVar37[0xc] = -(pcVar3[0xc] == cVar35);
  auVar37[0xd] = -(pcVar3[0xd] == cVar39);
  auVar37[0xe] = -(pcVar3[0xe] == cVar41);
  auVar37[0xf] = -(pcVar3[0xf] == cVar43);
  uVar16 = CONCAT22((uint16_t)(SUB161(auVar37 >> 7,0) & 1) |
                    (uint16_t)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                    (uint16_t)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                    (uint16_t)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                    (uint16_t)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                    (uint16_t)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                    (uint16_t)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                    (uint16_t)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                    (uint16_t)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                    (uint16_t)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                    (uint16_t)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                    (uint16_t)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                    (uint16_t)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                    (uint16_t)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                    (uint16_t)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                    (uint16_t)(auVar37[0xf] >> 7) << 0xf,
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
                    (uint16_t)(auVar45[0xf] >> 7) << 0xf);
  lStack_90 = in_R10;
  if (uVar16 == 0) {
    lVar20 = 0;
  }
  else {
    uVar18 = (uint64_t)(uVar16 >> (bVar13 & 0x1f) | uVar16 << 0x20 - (bVar13 & 0x1f));
    lVar20 = 0;
    do {
      iVar22 = 0;
      for (uVar25 = uVar18; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
        iVar22 = iVar22 + 1;
      }
      uVar16 = iVar22 + (uint32_t)bVar13 & 0x1f;
      if (uVar16 != 0) {
        uVar16 = *(uint32_t *)(lVar26 + (uint64_t)uVar16 * 4);
        if (uVar16 < (uint32_t)uStack_68) break;
        iVar23 = iVar23 + -1;
        auStack_1a8[lVar20] = uVar16;
        lVar20 = lVar20 + 1;
      }
      uVar18 = uVar18 & uVar18 - 1;
      puVar12 = (uint64_t *)(uint64_t)(iVar23 != 0);
    } while (uVar18 != 0 && iVar23 != 0);
  }
  lVar19 = 0x1f;
  if ((bVar13 & 0x1f) != 1) {
    lVar19 = 0;
  }
  lVar19 = lVar19 + (uint64_t)(bVar13 - 1 & 0x1f);
  *(uint8_t *)(uVar29 + lVar31) = (char)lVar19;
  ((uint8_t *)(uVar29 + lVar31))[lVar19] = auVar36[0];
  iVar23 = *(int *)(uVar15 + 0x2c);
  *(int *)(uVar15 + 0x2c) = iVar23 + 1;
  *(int *)(lVar26 + lVar19 * 4) = iVar23;
  if (lVar20 != 0) {
    puStack_98 = (uint64_t *)(lVar6 + uStack_a8);
    pcVar3 = (char *)(lVar7 + uStack_a8);
    puStack_50 = (uint64_t *)((int64_t)in_stack_00000028 - 1);
    puVar17 = (uint64_t *)((int64_t)in_stack_00000028 - 7);
    puVar2 = (uint64_t *)(in_RAX - 0x486c1056);
    iVar23 = (int)puStack_58;
    puStack_88 = (uint64_t *)(in_RAX + -0x486c1052);
    lStack_a0 = lVar6 + 8;
    uStack_68 = lVar6 + 8 + uStack_a8;
    uVar15 = 3;
    puStack_58 = (uint64_t *)pcVar3;
    uVar16 = (uint32_t)uStack_80 | 1;
    uStack_80 = (uint64_t)uVar16;
    lVar26 = 0;
    do {
      uVar10 = auStack_1a8[lVar26];
      uVar29 = (uint64_t)uVar10;
      if (uVar10 < (uint32_t)uStack_a8) {
        if (*(uint32_t *)(lStack_78 + uVar29) == (uint32_t)*puVar30) {
          puVar33 = (uint64_t *)(lStack_78 + uVar29 + 4);
          puVar30 = (uint64_t *)(((int64_t)pcVar3 - (int64_t)puVar33) + (int64_t)puVar2);
          if (in_stack_00000028 <= puVar30) {
            puVar30 = in_stack_00000028;
          }
          puVar21 = puVar33;
          puVar32 = puVar2;
          if (puVar2 < (uint64_t *)((int64_t)puVar30 - 7U)) {
            if (*puVar33 == *puVar2) {
              lVar31 = lVar7 + 0xc + uVar29;
              lVar19 = 0;
              do {
                puVar32 = (uint64_t *)(in_RAX + -0x486c104e + lVar19);
                puVar12 = (uint64_t *)0x0;
                if ((uint64_t *)((int64_t)puVar30 - 7U) <= puVar32) {
                  puVar21 = (uint64_t *)(lVar31 + lVar19);
                  goto LAB_7fffa55f20a2;
                }
                uVar29 = *(uint64_t *)(lVar31 + lVar19);
                lVar19 = lVar19 + 8;
              } while (uVar29 == *puVar32);
              uVar14 = 0;
              for (uVar29 = uVar29 ^ *puVar32; (uVar29 & 1) == 0;
                  uVar29 = uVar29 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar29 = (uint64_t)(uVar14 >> 3) + lVar19;
            }
            else {
              uVar14 = 0;
              for (uVar29 = *puVar2 ^ *puVar33; (uVar29 & 1) == 0;
                  uVar29 = uVar29 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar29 = (uint64_t)(uVar14 >> 3);
            }
          }
          else {
LAB_7fffa55f20a2:
            if ((puVar32 < (uint64_t *)((int64_t)puVar30 - 3U)) &&
               ((uint32_t)*puVar21 == (uint32_t)*puVar32)) {
              puVar21 = (uint64_t *)((int64_t)puVar21 + 4);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
            }
            if ((puVar32 < (uint64_t *)((int64_t)puVar30 - 1U)) &&
               ((uint16_t)*puVar21 == (uint16_t)*puVar32)) {
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
              puVar21 = (uint64_t *)((int64_t)puVar21 + 2);
            }
            if (puVar32 < puVar30) {
              puVar32 = (uint64_t *)
                        ((int64_t)puVar32 + (uint64_t)((char)*puVar21 == (char)*puVar32));
            }
            puVar12 = (uint64_t *)0x0;
            uVar29 = (int64_t)puVar32 - (int64_t)puVar2;
          }
          if ((char *)((int64_t)puVar33 + uVar29) == pcVar3) {
            puVar30 = (uint64_t *)((int64_t)puVar2 + uVar29);
            puVar32 = puStack_98;
            puVar33 = puVar30;
            if (puVar30 < puVar17) {
              if (*puStack_98 == *puVar30) {
                lVar31 = 0;
                do {
                  puVar33 = (uint64_t *)(in_RAX + -0x486c104e + uVar29 + lVar31);
                  if (puVar17 <= puVar33) {
                    puVar32 = (uint64_t *)(lVar31 + uStack_68);
                    goto LAB_7fffa55f21e6;
                  }
                  puVar32 = (uint64_t *)(uStack_68 + lVar31);
                  lVar31 = lVar31 + 8;
                } while (*puVar32 == *puVar33);
                uVar14 = 0;
                for (uVar18 = *puVar33 ^ *puVar32; (uVar18 & 1) == 0;
                    uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                  uVar14 = uVar14 + 1;
                }
                uVar18 = (uint64_t)(uVar14 >> 3) + lVar31;
              }
              else {
                uVar14 = 0;
                for (uVar18 = *puVar30 ^ *puStack_98; (uVar18 & 1) == 0;
                    uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                  uVar14 = uVar14 + 1;
                }
                uVar18 = (uint64_t)(uVar14 >> 3);
              }
            }
            else {
LAB_7fffa55f21e6:
              if ((puVar33 < (uint64_t *)((int64_t)in_stack_00000028 - 3U)) &&
                 (puVar12 = (uint64_t *)0x0, (uint32_t)*puVar32 == (uint32_t)*puVar33)) {
                puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
                puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
              }
              if ((puVar33 < puStack_50) &&
                 (puVar12 = (uint64_t *)(uint64_t)(uint16_t)*puVar32,
                 (uint16_t)*puVar32 == (uint16_t)*puVar33)) {
                puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
                puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
              }
              if (puVar33 < in_stack_00000028) {
                puVar33 = (uint64_t *)
                          ((int64_t)puVar33 + (uint64_t)((char)*puVar32 == (char)*puVar33));
              }
              uVar18 = (int64_t)puVar33 - (int64_t)puVar30;
            }
            uVar29 = uVar29 + uVar18;
          }
          uVar29 = uVar29 + 4;
          puVar30 = puStack_48;
LAB_7fffa55f227b:
          if (uVar15 < uVar29) {
            *puStack_60 = (uint64_t)((iVar23 + 3) - uVar10);
            puVar12 = puStack_60;
            uVar15 = uVar29;
            if (((((uint32_t)lStack_90 ^ 0x45afad52) + 0x176b8173) * uVar16 == -0x241ea16d) !=
                ((uint64_t *)((int64_t)puVar30 + uVar29) != in_stack_00000028)) {
              return puStack_60;
            }
          }
        }
      }
      else {
        puVar33 = (uint64_t *)(lStack_70 + uVar29);
        if (*(int *)((uVar15 - 3) + (int64_t)puVar33) == *(int *)((int64_t)puVar30 + (uVar15 - 3))
           ) {
          if (puVar30 < puVar17) {
            puVar12 = (uint64_t *)0x0;
            if (*puVar33 == *puVar30) {
              puVar33 = (uint64_t *)(lVar6 + 8 + uVar29);
              lVar31 = 0;
              puVar32 = (uint64_t *)(in_RAX + -0x486c1052);
              do {
                if (puVar17 <= puVar32) goto code_r0x7fffa55f1f95;
                uVar29 = *puVar32;
                uVar18 = *puVar33;
                puVar32 = puVar32 + 1;
                lVar31 = lVar31 + 8;
                puVar33 = puVar33 + 1;
              } while (uVar18 == uVar29);
              uVar14 = 0;
              for (uVar18 = uVar18 ^ uVar29; (uVar18 & 1) == 0;
                  uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar29 = (uint64_t)(uVar14 >> 3) + lVar31;
            }
            else {
              uVar14 = 0;
              for (uVar29 = *puVar30 ^ *puVar33; (uVar29 & 1) == 0;
                  uVar29 = uVar29 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar29 = (uint64_t)(uVar14 >> 3);
            }
          }
          else {
            puVar32 = puVar30;
code_r0x7fffa55f1f95:
            puVar12 = (uint64_t *)0x0;
            if ((puVar32 < (uint64_t *)((int64_t)in_stack_00000028 - 3U)) &&
               ((uint32_t)*puVar33 == (uint32_t)*puVar32)) {
              puVar32 = (uint64_t *)((int64_t)puVar32 + 4);
              puVar33 = (uint64_t *)((int64_t)puVar33 + 4);
            }
            if ((puVar32 < puStack_50) &&
               (puVar12 = (uint64_t *)(uint64_t)(uint16_t)*puVar33,
               (uint16_t)*puVar33 == (uint16_t)*puVar32)) {
              puVar33 = (uint64_t *)((int64_t)puVar33 + 2);
              puVar32 = (uint64_t *)((int64_t)puVar32 + 2);
            }
            if (puVar32 < in_stack_00000028) {
              puVar12 = (uint64_t *)0x0;
              puVar32 = (uint64_t *)
                        ((int64_t)puVar32 + (uint64_t)((char)*puVar33 == (char)*puVar32));
            }
            uVar29 = (int64_t)puVar32 - (int64_t)puVar30;
          }
          goto LAB_7fffa55f227b;
        }
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != lVar20);
  }
  return puVar12;
}


// ============================================================================
// Function : FUN_7fffa55f2330  |  RVA: 0xe82330  |  Size: 626 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f2330(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t in_RAX;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  bRam00007fffa478560a = 0;
  uRam00007fffa478562e = 0;
  uRam00007fffa4785636 = 0;
  uRam00007fffa478561e = 0;
  uRam00007fffa4785626 = 0;
  uRam00007fffa478560e = 0;
  uRam00007fffa4785616 = 0;
  uRam00007fffa4785642 = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) * 0xaf3dd5aabd9c898;
  for (lVar5 = 0;
      *(char *)(lVar5 + 0x7fffa4785600) = (char)((uint64_t)(lVar3 * 0x5aabd9c898) >> 0x20),
      lVar5 != 0x4c; lVar5 = lVar5 + 4) {
    *(char *)(lVar5 + 0x7fffa4785601) = (char)((uint64_t)(lVar3 * 0x20beddda40) >> 0x20);
    *(char *)(lVar5 + 0x7fffa4785603) = (char)((uint64_t)(lVar3 * 0x248fa0398c911000) >> 0x20);
    *(char *)(lVar5 + 0x7fffa4785602) = (char)((uint64_t)(lVar3 * 0xe5667b9600) >> 0x20);
    lVar3 = lVar3 * 0x248fa0398c911000;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa478560a * 0x2aaaaaab + 0x2aaaaaab) * 6;
  uVar4 = uVar2 >> 0x20;
  *(uint32_t *)(uVar4 * 8 + 0x7fffa478560e) = (uint32_t)uRam00007fffa4785642;
  *(uint32_t *)(uVar4 * 8 + 0x7fffa4785612) = uRam00007fffa4785642._4_4_;
  bRam00007fffa478560a = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f25b0  |  RVA: 0xe825b0  |  Size: 489 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f25b0(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47bb02a = 0;
  uRam00007fffa47bb02e = 0;
  uRam00007fffa47bb036 = 0;
  uRam00007fffa47bb03e = 0;
  uRam00007fffa47bb048 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)(uVar1 >> 0x20)) << 0x20 | uVar1 & 0xffffffff) * 0x30fabca896fe04d +
          0xb;
  lVar5 = 0;
  do {
    lVar3 = lVar2 * 0x30fabca896fe04d + 0xb;
    lVar4 = lVar3 * 0x30fabca896fe04d + 0xb;
    lVar2 = lVar4 * 0x30fabca896fe04d + 0xb;
    *(char *)(lVar5 + 0x7fffa47bb01a) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar5 + 0x7fffa47bb01b) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar5 + 0x7fffa47bb01c) = (char)((uint64_t)lVar2 >> 0x20);
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x45);
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47bb02a * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa47bb02e) = 0;
  bRam00007fffa47bb02a = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f279c  |  RVA: 0xe8279c  |  Size: 20 bytes
// Callers  : none
// Callees  : FUN_7fffa55c6b44@0xe56b44
// ============================================================================
uint8_t FUN_7fffa55f279c(void)

{
  uint8_t bVar1;
  
  bVar1 = FUN_7fffa55c6b44();
  return bVar1 ^ 1;
}


// ============================================================================
// Function : FUN_7fffa55f27b0  |  RVA: 0xe827b0  |  Size: 1767 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f27b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t param_5)

{
  uint32_t uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [13];
  uint8_t auVar4 [13];
  uint8_t auVar5 [13];
  uint8_t auVar6 [13];
  uint8_t auVar7 [15];
  uint8_t auVar8 [15];
  uint8_t auVar9 [15];
  uint8_t auVar10 [15];
  uint8_t auVar11 [13];
  uint8_t auVar12 [13];
  uint8_t auVar13 [11];
  uint5 uVar14;
  uint32_t uVar15;
  uint8_t bVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint32_t uVar23;
  int iVar24;
  uint32_t uVar25;
  uint64_t uVar26;
  uint32_t uVar27;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint32_t auStack_1d8 [8];
  uint32_t auStack_1b8 [4];
  int64_t lStack_1a8;
  uint32_t auStack_198 [9];
  uint32_t auStack_174 [5];
  uint32_t auStack_160 [50];
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint64_t uStack_70;
  uint32_t uStack_68;
  uint32_t uStack_64;
  int64_t lStack_60;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  
  uVar17 = (uint32_t)param_2;
  bVar16 = (uint8_t)param_2;
  uStack_74 = uVar17 | 1;
  param_3 = (param_3 << 0x1c | param_3 >> 0x24) ^ (param_3 << 0x3c | param_3 >> 4) ^ param_3;
  uVar20 = param_3 << 0x30 | param_3 >> 0x10;
  uVar22 = param_3 ^ uVar20;
  if (((0x5f0c9212 - uVar17) * 0x400000 | 0x5f0c9212 - uVar17 >> 10) <
      ~((0xd4655082 - uVar17) * 0x20000000 | 0xd4655082 - uVar17 >> 3)) {
    uVar22 = param_3 - uVar20;
  }
  uStack_90 = param_2;
  lVar21 = (uVar22 ^ uVar20) * 0x1004010040100401;
  uVar20 = (param_1 << 0x33 | param_1 >> 0xd) + 0x44173c50;
  uVar20 = (uVar20 * 0x10000000 | uVar20 >> 0x24) ^ (uVar20 << 0x26 | uVar20 >> 0x1a) ^ uVar20;
  uVar20 = (uVar20 << 0xc | uVar20 >> 0x34) ^ (uVar20 << 0x38 | uVar20 >> 8) ^ uVar20;
  uVar22 = (uVar20 << 0x30 | uVar20 >> 0x10) ^ uVar20;
  uVar26 = uVar20 << 0x18 | uVar20 >> 0x28;
  uVar20 = uVar26 ^ uVar22;
  if ((uint64_t)
      (int64_t)(int)(0x187fdbeeU >> (bVar16 & 0x1f) | 0x187fdbee << 0x20 - (bVar16 & 0x1f)) <
      (uint64_t)(-0x5944991c << (bVar16 & 0x1f) | 0xa6bb66e4U >> 0x20 - (bVar16 & 0x1f))) {
    uVar20 = uVar22 | uVar26;
  }
  uVar20 = (uVar20 << 0x30 | uVar20 >> 0x10) ^ (uVar20 << 0x20 | uVar20 >> 0x20) ^ uVar20;
  uVar22 = uVar20 << 0x20;
  uVar26 = uVar20 >> 0x20;
  uStack_70 = 0;
  if (((uint64_t)(uVar17 | 1) * 0x80be6ad & 0xffffffff) <=
      (uint64_t)
      (int64_t)
      (int)((0xecb7e752U >> (bVar16 & 0x1f) | -0x134818ae << 0x20 - (bVar16 & 0x1f)) + 0xd22dc1c9))
  {
    uVar20 = 0;
  }
  uVar20 = uVar20 ^ (uVar22 | uVar26);
  uVar20 = (uVar20 << 0x21 | uVar20 >> 0x1f) ^ (uVar20 << 0x2f | uVar20 >> 0x11) ^ uVar20;
  uVar20 = (uVar20 << 2 | uVar20 >> 0x3e) ^ (uVar20 << 0x1e | uVar20 >> 0x22) ^ uVar20;
  uVar20 = (uVar20 << 0x3c | uVar20 >> 4) ^ (uVar20 << 4 | uVar20 >> 0x3c) ^ uVar20;
  uVar20 = (uVar20 << 8 | uVar20 >> 0x38) ^ (uVar20 << 0x38 | uVar20 >> 8) ^ uVar20;
  uVar20 = (uVar20 << 0x10 | uVar20 >> 0x30) ^ (uVar20 << 0x30 | uVar20 >> 0x10) ^ uVar20;
  if (param_5 != 0) {
    uVar25 = *(uint32_t *)(uVar20 + 0x40);
    lStack_60 = lVar21;
    uStack_98 = uVar20;
    do {
      *(uint8_t *)(uVar20 + uVar25) = *(uint8_t *)(lVar21 + uStack_70);
      uVar25 = *(int *)(uVar20 + 0x40) + 1;
      *(uint32_t *)(uVar20 + 0x40) = uVar25;
      if (uVar25 == 0x40) {
        lVar21 = 0;
        while( true ) {
          bVar16 = *(uint8_t *)(uVar20 + 5 + lVar21 * 4);
          auVar2._1_4_ = (uint32_t)*(uint8_t *)(uVar20 + 4 + lVar21 * 4) << 0x18;
          auVar2[0] = *(uint8_t *)(uVar20 + lVar21 * 4);
          auVar2._5_4_ = (uint32_t)*(uint8_t *)(uVar20 + 8 + lVar21 * 4) << 0x18;
          auVar2._9_4_ = (uint32_t)*(uint8_t *)(uVar20 + 0xc + lVar21 * 4) << 0x18;
          auVar2._13_3_ = 0;
          auVar7._12_2_ = 0;
          auVar7._0_12_ = SUB1612((uint8_t  [16])0x0,0);
          auVar7[0xe] = *(uint8_t *)(uVar20 + 0xd + lVar21 * 4);
          auVar8[10] = *(uint8_t *)(uVar20 + 9 + lVar21 * 4);
          auVar8._0_10_ = SUB1610((uint8_t  [16])0x0,0);
          auVar8[0xb] = 0;
          auVar8._12_3_ = auVar7._12_3_;
          auVar9._10_5_ = auVar8._10_5_;
          auVar9._0_10_ = (unkuint10)0;
          auVar10._8_7_ = auVar9._8_7_;
          auVar10._0_8_ = (uint64_t)bVar16 << 0x30;
          auVar13._9_2_ = 0;
          auVar13._0_9_ = auVar10._6_9_;
          auVar28._0_4_ = (CONCAT11(bVar16,*(uint8_t *)(uVar20 + 1 + lVar21 * 4)) & 0xff) << 0x10
          ;
          auVar28._4_11_ = auVar13 << 0x10;
          auVar28[0xf] = 0;
          auVar3[0xc] = *(uint8_t *)(uVar20 + 0xe + lVar21 * 4);
          auVar3._0_12_ = ZEXT712(0);
          uVar14 = CONCAT32(auVar3._10_3_,(uint16_t)*(uint8_t *)(uVar20 + 10 + lVar21 * 4));
          auVar11._5_8_ = 0;
          auVar11._0_5_ = uVar14;
          uVar25 = CONCAT31(0,*(uint8_t *)(uVar20 + 2 + lVar21 * 4));
          auVar4[4] = *(uint8_t *)(uVar20 + 6 + lVar21 * 4);
          auVar4._0_4_ = uVar25;
          auVar4[5] = 0;
          auVar4._6_7_ = SUB137(auVar11 << 0x40,6);
          auVar29._0_4_ = uVar25 << 8;
          auVar29._4_4_ = auVar4._4_4_ << 8;
          auVar29._8_4_ = (int)uVar14 << 8;
          auVar29._12_4_ = (uint32_t)(uint3)(auVar3._10_3_ >> 0x10) << 8;
          auVar5[0xc] = *(uint8_t *)(uVar20 + 0xf + lVar21 * 4);
          auVar5._0_12_ = ZEXT712(0);
          auVar12[1] = 0;
          auVar12[0] = *(uint8_t *)(uVar20 + 0xb + lVar21 * 4);
          auVar12._2_3_ = auVar5._10_3_;
          auVar12._5_8_ = 0;
          auVar30._0_4_ = CONCAT31(0,*(uint8_t *)(uVar20 + 3 + lVar21 * 4));
          auVar6[4] = *(uint8_t *)(uVar20 + 7 + lVar21 * 4);
          auVar6._0_4_ = auVar30._0_4_;
          auVar6[5] = 0;
          auVar6._6_7_ = SUB137(auVar12 << 0x40,6);
          auVar30._4_9_ = auVar6._4_9_;
          auVar30._13_3_ = 0;
          *(uint8_t (*) [16])(auStack_198 + lVar21) =
               auVar30 | auVar29 | auVar28 | auVar2 << 0x18;
          if (lVar21 == 0xc) break;
          lVar21 = lVar21 + 4;
        }
        uVar22 = 0x11;
        uVar25 = auStack_198[0];
        while( true ) {
          iVar24 = uVar25 + auStack_1b8[uVar22];
          uVar23 = (int)uStack_90 + 0x14ba922d;
          uVar25 = auStack_1d8[uVar22];
          uVar1 = auStack_1b8[uVar22 + 5];
          auStack_198[uVar22 - 1] =
               ((uVar25 << 0x19 | uVar25 >> 7) ^ (uVar25 << 0xe | uVar25 >> 0x12) ^ uVar25 >> 3) +
               iVar24 + ((uVar1 << 0xf | uVar1 >> 0x11) ^ (uVar1 << 0xd | uVar1 >> 0x13) ^
                        uVar1 >> 10);
          if (uVar22 == (uVar23 * 0x8000 | uVar23 >> 0x11)) break;
          uVar22 = uVar22 + 1;
        }
        uVar25 = *(uint32_t *)(uVar20 + 0x50);
        uStack_78 = *(uint32_t *)(uVar20 + 0x54);
        uStack_48 = *(uint32_t *)(uVar20 + 0x68);
        uVar1 = *(uint32_t *)(uVar20 + 0x6c);
        uStack_84 = *(uint32_t *)(uVar20 + 0x60);
        uStack_54 = *(uint32_t *)(uVar20 + 0x58);
        uStack_68 = *(uint32_t *)(uVar20 + 100);
        uStack_58 = *(uint32_t *)(uVar20 + 0x5c);
        lStack_1a8 = 0;
        uStack_64 = uVar1;
        uStack_88 = uStack_48;
        uStack_7c = uStack_84;
        uStack_50 = uStack_58;
        uVar23 = uVar25;
        uStack_44 = uStack_78;
        uVar18 = uStack_68;
        uVar19 = uStack_54;
        while( true ) {
          uStack_4c = uStack_44;
          uStack_44 = uVar23;
          uVar15 = uStack_7c;
          uStack_80 = uStack_7c << 0x1a | uStack_7c >> 6;
          uVar27 = (uVar18 ^ uStack_88) & uStack_7c ^ uStack_88;
          uVar23 = -uVar27;
          if ((uint64_t)((uVar17 + 0x8df2b548) * 0x7ffe0005) <=
              (uint64_t)(int64_t)(int)(uStack_74 * -0x36d8ad88 ^ 0x9c374efe)) {
            uVar23 = uVar27;
          }
          uVar23 = ((uStack_7c << 0x15 | uStack_7c >> 0xb) ^ uStack_80 ^
                   (uStack_7c << 7 | uStack_7c >> 0x19)) + uStack_64 + uVar23 +
                   *(int *)(&UNK_7fffa578e0f7 +
                           lStack_1a8 * 4 + (int64_t)(int)(uStack_74 * 0x7333db53));
          uVar27 = uVar23 & auStack_198[lStack_1a8];
          if ((uint64_t)(uVar17 + 0xa897fddd) <=
              (uint64_t)(int64_t)(int)((0xe05f31 - uVar17) * 0x40000 | 0xe05f31 - uVar17 >> 0xe))
          {
            uVar27 = uVar23 + auStack_198[lStack_1a8];
          }
          uVar23 = uVar27 + (uStack_4c & uVar19 ^ (uStack_4c ^ uVar19) & uStack_44) +
                            ((uStack_44 << 0x13 | uStack_44 >> 0xd) ^
                             (uStack_44 << 0x1e | uStack_44 >> 2) ^
                            (uStack_44 << 10 | uStack_44 >> 0x16));
          if (lStack_1a8 == 0x3f) break;
          lStack_1a8 = lStack_1a8 + 1;
          uStack_64 = uStack_88;
          uStack_88 = uVar18;
          uStack_7c = uStack_50 + uVar27;
          uStack_50 = uVar19;
          uVar18 = uVar15;
          uVar19 = uStack_4c;
        }
        if ((uint64_t)
            ((0xa43a7604U - (int)uStack_90) * 0x1000000 | 0xa43a7604U - (int)uStack_90 >> 8) ==
            0xffffffffc7156c4b) {
          *(uint32_t *)(uStack_98 + 0x68) = uVar18 + uStack_48;
          *(uint32_t *)(uStack_98 + 100) = uStack_68 + uStack_7c;
          *(uint32_t *)(uStack_98 + 0x54) = uStack_78 + uStack_44;
          *(uint32_t *)(uStack_98 + 0x50) = uVar23 + uVar25;
        }
        else {
          *(uint32_t *)(uStack_98 + 100) = uStack_68 + uStack_7c;
          *(uint32_t *)(uStack_98 + 0x50) = uVar23 + uVar25;
          *(uint32_t *)(uStack_98 + 0x68) = uVar18 + uStack_48;
          *(uint32_t *)(uStack_98 + 0x54) = uStack_44 + uStack_78;
        }
        *(uint32_t *)(uStack_98 + 0x5c) = uVar19 + uStack_58;
        *(uint32_t *)(uStack_98 + 0x6c) = uStack_88 + uVar1;
        *(uint32_t *)(uStack_98 + 0x60) = uStack_84 + uStack_50 + uVar27;
        *(uint32_t *)(uStack_98 + 0x58) = uStack_4c + uStack_54;
        *(uint32_t *)(uStack_98 + 0x40) = 0;
        *(int64_t *)(uStack_98 + 0x48) = *(int64_t *)(uStack_98 + 0x48) + 0x200;
        uVar25 = 0;
        uVar20 = uStack_98;
        lVar21 = lStack_60;
      }
      uStack_70 = (uint64_t)((int)uStack_70 + 1);
    } while (uStack_70 < param_5);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55f2ed0  |  RVA: 0xe82ed0  |  Size: 24 bytes
// Callers  : FUN_7fffa55f6f60@0xe86f60, FUN_7fffa507cd30@0x90cd30
// Callees  : FUN_7fffa54539d0@0xce39d0
// ============================================================================
void FUN_7fffa55f2ed0(uint64_t param_1)

{
  int64_t lVar1;
  
  lVar1 = FUN_7fffa54539d0();
  *(uint64_t *)(lVar1 + 0x60) = param_1;
  return;
}


// ============================================================================
// Function : FUN_7fffa55f2ef0  |  RVA: 0xe82ef0  |  Size: 606 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f2ef0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  lVar5 = 0;
  bRam00007fffa4784b38 = 0;
  uRam00007fffa4784b52 = 0;
  uRam00007fffa4784b56 = 0;
  uRam00007fffa4784b42 = 0;
  uRam00007fffa4784b4a = 0;
  uRam00007fffa4784b4e = 0;
  uRam00007fffa4784b6b = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x3b69a460032e089 + 0xb;
  while( true ) {
    lVar3 = lVar3 * 0x3b69a460032e089 + 0xb;
    lVar4 = lVar3 * 0x3b69a460032e089 + 0xb;
    *(char *)(lVar5 + 0x7fffa4784b2f) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar5 + 0x7fffa4784b30) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar5 == 0x44) break;
    lVar4 = lVar4 * 0x3b69a460032e089 + 0xb;
    lVar3 = lVar4 * 0x3b69a460032e089 + 0xb;
    *(char *)(lVar5 + 0x7fffa4784b31) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar5 + 0x7fffa4784b32) = (char)((uint64_t)lVar3 >> 0x20);
    lVar5 = lVar5 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa4784b38 * 0x24924925 + 0x24924925) * 7;
  *(uint32_t *)((uVar2 >> 0x20) * 4 + 0x7fffa4784b42) = uRam00007fffa4784b6b ^ 0x75857004;
  bRam00007fffa4784b38 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f3150  |  RVA: 0xe83150  |  Size: 253 bytes
// Callers  : FUN_7fffa560e038@0xe9e038
// Callees  : FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa5609524@0xe99524
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa55f3150(void)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  uint8_t *pbVar4;
  int64_t lVar5;
  uint32_t *puVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  uint8_t auStack_78 [66];
  short sStack_36;
  uint32_t *puStack_30;
  
  FUN_7fffa4ecf8e0(auStack_78,0,0x68);
  (*(code *)&DAT_7ff84ea3e3c0)(auStack_78);
  if ((sStack_36 != 0) && (puStack_30 != (uint32_t *)0x0)) {
    puVar6 = puStack_30 + 1;
    pbVar4 = (uint8_t *)((int64_t)(int)*puStack_30 + (int64_t)puVar6);
    uVar7 = 0x2000;
    if ((int)*puStack_30 < 0x2000) {
      uVar7 = *puStack_30;
    }
    FUN_7fffa5609524(uVar7);
    if ((int)_DAT_7fffa4782580 < (int)uVar7) {
      uVar7 = _DAT_7fffa4782580;
    }
    uVar8 = (uint64_t)uVar7;
    if (uVar7 != 0) {
      lVar5 = 0;
      do {
        if (((*(int64_t *)pbVar4 != -1) && (*(int64_t *)pbVar4 != -2)) && ((*puVar6 & 1) != 0)) {
          if ((*puVar6 & 8) == 0) {
            iVar2 = (*(code *)&DAT_7ff84ea57530)(*(uint64_t *)pbVar4);
            if (iVar2 == 0) goto LAB_7fffa55f321f;
          }
          uVar3 = (uint64_t)((uint32_t)lVar5 & 0x3f);
          lVar1 = *(int64_t *)(&DAT_7fffa4782180 + (lVar5 >> 6) * 8);
          *(uint64_t *)(lVar1 + 0x28 + uVar3 * 0x48) = *(uint64_t *)pbVar4;
          *(uint8_t *)(lVar1 + 0x38 + uVar3 * 0x48) = (uint8_t)*puVar6;
        }
LAB_7fffa55f321f:
        lVar5 = lVar5 + 1;
        puVar6 = (uint32_t *)((int64_t)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55f3250  |  RVA: 0xe83250  |  Size: 56 bytes
// Callers  : FUN_7fffa5660944@0xef0944
// Callees  : FUN_7fffa5007cbc@0x897cbc, FUN_7fffa5476b88@0xd06b88, FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa55f3250(uint64_t param_1,uint32_t *param_2,uint64_t param_3,uint32_t *param_4)

{
  FUN_7fffa5476b88(*param_2);
  FUN_7fffa5007cbc(param_3);
  FUN_7fffa4f54478(*param_4);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f3290  |  RVA: 0xe83290  |  Size: 4347 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa55f3290(void) {
    /* +0xe83290 */ __asm { PUSH RBP }
    /* +0xe83291 */ __asm { PUSH R15 }
    /* +0xe83293 */ __asm { PUSH RDI }
    /* +0xe83294 */ __asm { PUSH R12 }
    /* +0xe83296 */ __asm { PUSH R14 }
    /* +0xe83298 */ __asm { PUSH RSI }
    /* +0xe83299 */ __asm { PUSH R13 }
    /* +0xe8329b */ __asm { PUSH RBX }
    /* +0xe8329c */ __asm { SUB RSP,0x978 }
    /* +0xe832a3 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0xe832ab */ __asm { MOVAPS xmmword ptr [RBP + 0x8e0],XMM15 }
    /* +0xe832b3 */ __asm { MOV R14,R10 }
    /* +0xe832b6 */ __asm { MOV R11D,0xe7dfa9bf }
    /* +0xe832bc */ __asm { MOV R9,RCX }
    /* +0xe832bf */ __asm { ROL R9,0x2 }
    /* +0xe832c3 */ __asm { IMUL R11D,R11D,-0x780a207f }
    /* +0xe832ca */ __asm { MOV EDX,0x588580bd }
    /* +0xe832cf */ __asm { SUB R11D,R14D }
    /* +0xe832d2 */ __asm { MOV R10,RCX }
    /* +0xe832d5 */ __asm { ROL R10,0x19 }
    /* +0xe832d9 */ __asm { XOR R10,R9 }
    /* +0xe832dc */ __asm { XOR R10,RCX }
    /* +0xe832df */ __asm { MOV RAX,R10 }
    /* +0xe832e2 */ __asm { ROL RAX,0x4 }
    /* +0xe832e6 */ __asm { MOV R8,R10 }
    /* +0xe832e9 */ __asm { ROL R8,0x32 }
    /* +0xe832ed */ __asm { ADD EDX,0x1829bfeb }
    /* +0xe832f3 */ __asm { XOR EDX,R14D }
    /* +0xe832f6 */ __asm { MOVSXD R9,R11D }
    /* +0xe832f9 */ __asm { XOR R8,RAX }
    /* +0xe832fc */ __asm { XOR R8,R10 }
    /* +0xe832ff */ __asm { MOV R11,R8 }
    /* +0xe83302 */ __asm { ROL R11,0x8 }
    /* +0xe83306 */ __asm { MOV R10,R8 }
    /* +0xe83309 */ __asm { ROL R10,0x24 }
    /* +0xe8330d */ __asm { XOR R10,R11 }
    /* +0xe83310 */ __asm { XOR R10,R8 }
    /* +0xe83313 */ __asm { MOV RAX,R10 }
    /* +0xe83316 */ __asm { ROL RAX,0x8 }
    /* +0xe8331a */ __asm { MOV R11,R10 }
    /* +0xe8331d */ __asm { ROL R11,0x10 }
    /* +0xe83321 */ __asm { XOR R11,RAX }
    /* +0xe83324 */ __asm { XOR R11,R10 }
    /* +0xe83327 */ __asm { MOV R10,R11 }
    /* +0xe8332a */ __asm { ROL R10,0x20 }
    /* +0xe8332e */ __asm { XOR R10,R11 }
    /* +0xe83331 */ __asm { ROL R11,0x10 }
    /* +0xe83335 */ __asm { MOV RAX,R11 }
    /* +0xe83338 */ __asm { XOR RAX,R10 }
    /* +0xe8333b */ __asm { ADD R11,R10 }
    /* +0xe8333e */ __asm { CMP R9,RDX }
    /* +0xe83341 */ __asm { CMOVA R11,RAX }
    /* +0xe83345 */ __asm { MOV dword ptr [RBP + 0x70],0xfff3fef3 }
    /* +0xe8334c */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe8334f */ __asm { MOV dword ptr [RBP + 0x70],0x7dbd3fc8 }
    /* +0xe83356 */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe83359 */ __asm { MOV DX,0xee3b }
    /* +0xe8335d */ __asm { MOV R8D,0xffff851a }
    /* +0xe83363 */ __asm { SUB R8D,EDX }
    /* +0xe83366 */ __asm { MOVD XMM4,R8D }
    /* +0xe8336b */ __asm { MOVD XMM1,R14D }
    /* +0xe83370 */ __asm { PXOR XMM1,XMM4 }
    /* +0xe83374 */ __asm { PEXTRW EDX,XMM1,0x0 }
    /* +0xe83379 */ __asm { MOV R9,qword ptr GS:[RDX] }
    /* +0xe8337d */ __asm { MOV dword ptr [RBP + 0x70],0x69834357 }
    /* +0xe83384 */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe83387 */ __asm { MOV RDX,qword ptr [R9 + 0x18] }
    /* +0xe8338b */ __asm { MOV dword ptr [RBP + 0x70],0x730387cc }
    /* +0xe83392 */ __asm { MOV R8D,dword ptr [RBP + 0x70] }
    /* +0xe83396 */ __asm { CMP R8D,0xb6e97cce }
    /* +0xe8339d */ __asm { JC 0x7fffa55f33a1 }
    /* +0xe8339f */ __asm { OUT 0x13,EAX }
    /* +0xe833a1 */ __asm { PUSHFQ }
    /* +0xe833a2 */ __asm { POP RBX }
    /* +0xe833a3 */ __asm { TEST EBX,0x100 }
    /* +0xe833a9 */ __asm { JZ 0x7fffa55f33b9 }
    /* +0xe833ab */ __asm { FSUB double ptr [RCX] }
    /* +0xe833ad */ __asm { JS 0x7fffa55f3417 }
    /* +0xe833af */ __asm { ENTER 0xbd0a,0x1a }
    /* +0xe833b3 */ __asm { OR uint8_t ptr [RDX + -0x453db3b7],AH }
    /* +0xe833b9 */ __asm { MOV R9,qword ptr [RDX + 0x10] }
    /* +0xe833bd */ __asm { ADD RDX,0x10 }
    /* +0xe833c1 */ __asm { TEST R9,R9 }
    /* +0xe833c4 */ __asm { SETZ CL }
    /* +0xe833c7 */ __asm { CMP R9,RDX }
    /* +0xe833ca */ __asm { SETZ AL }
    /* +0xe833cd */ __asm { OR AL,CL }
    /* +0xe833cf */ __asm { JNZ 0x7fffa55f34c0 }
    /* +0xe833d5 */ __asm { ROL R11,0x20 }
    /* +0xe833d9 */ __asm { MOV R8D,R14D }
    /* +0xe833dc */ __asm { OR R8D,0x1 }
    /* +0xe833e0 */ __asm { MOV dword ptr [RBP + 0x894],R8D }
    /* +0xe833e7 */ __asm { ADD R11,0x25735887 }
    /* +0xe833ee */ __asm { MOV R10,0x3e149def2df35f59 }
    /* +0xe833f8 */ __asm { MOV RAX,0x8000000081b }
    /* +0xe83402 */ __asm { NOP word ptr CS:[RAX + RAX*0x1] }
    /* +0xe83410 */ __asm { CMP qword ptr [R9 + 0x60],0x0 }
    /* +0xe83415 */ __asm { JZ 0x7fffa55f34af }
    /* +0xe8341b */ __asm { CMP word ptr [R9 + 0x58],0x0 }
    /* +0xe83421 */ __asm { JZ 0x7fffa55f34af }
    /* +0xe83427 */ __asm { MOV dword ptr [RBP + 0x70],0xbcfede6b }
    /* +0xe8342e */ __asm { MOV R8D,dword ptr [RBP + 0x70] }
    /* +0xe83432 */ __asm { CMP R8D,0x1fc2c15a }
    /* +0xe83439 */ __asm { NOP }
    /* +0xe8343a */ __asm { NOP }
    /* +0xe8343b */ __asm { NOP }
    /* +0xe8343c */ __asm { NOP }
    /* +0xe8343d */ __asm { NOP }
    /* +0xe8343e */ __asm { MOVZX R8D,word ptr [R9 + 0x58] }
    /* +0xe83443 */ __asm { MOV RDI,R10 }
    /* +0xe83446 */ __asm { TEST R8,R8 }
    /* +0xe83449 */ __asm { JZ 0x7fffa55f34a6 }
    /* +0xe8344b */ __asm { MOV RCX,qword ptr [R9 + 0x60] }
    /* +0xe8344f */ __asm { SHR R8D,0x1 }
    /* +0xe83452 */ __asm { MOV RDI,R10 }
    /* +0xe83455 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0xe83460 */ __asm { MOVZX ESI,word ptr [RCX] }
    /* +0xe83463 */ __asm { CMP ESI,0xff }
    /* +0xe83469 */ __asm { JA 0x7fffa55f34af }
    /* +0xe8346b */ __asm { MOV R12D,ESI }
    /* +0xe8346e */ __asm { OR R12D,0x20 }
    /* +0xe83472 */ __asm { DEC R8 }
    /* +0xe83475 */ __asm { MOV R13D,0x6e4f04a2 }
    /* +0xe8347b */ __asm { LEA R15D,[RSI + -0x41] }
    /* +0xe8347f */ __asm { SUB R13D,R14D }
    /* +0xe83482 */ __asm { ADD R13D,0x8234921d }
    /* +0xe83489 */ __asm { ADD RCX,0x2 }
    /* +0xe8348d */ __asm { CMP R15W,0x1a }
    /* +0xe83492 */ __asm { CMOVNC R12D,ESI }
    /* +0xe83496 */ __asm { MOVZX ESI,R12W }
    /* +0xe8349a */ __asm { XOR RDI,RSI }
    /* +0xe8349d */ __asm { IMUL RDI,RAX }
    /* +0xe834a1 */ __asm { CMP R8,R13 }
    /* +0xe834a4 */ __asm { JNZ 0x7fffa55f3460 }
    /* +0xe834a6 */ __asm { CMP RDI,R11 }
    /* +0xe834a9 */ __asm { JZ 0x7fffa55f3533 }
    /* +0xe834af */ __asm { MOV R9,qword ptr [R9] }
    /* +0xe834b2 */ __asm { TEST R9,R9 }
    /* +0xe834b5 */ __asm { JZ 0x7fffa55f34c0 }
    /* +0xe834b7 */ __asm { CMP R9,RDX }
    /* +0xe834ba */ __asm { JNZ 0x7fffa55f3410 }
    /* +0xe834c0 */ __asm { MOV R11W,0x6321 }
    /* +0xe834c5 */ __asm { ADD R11D,R14D }
    /* +0xe834c8 */ __asm { ROL R11W,0xd }
    /* +0xe834cd */ __asm { ADD R11D,0xffffe124 }
    /* +0xe834d4 */ __asm { MOVZX EDX,R11W }
    /* +0xe834d8 */ __asm { MOV R11,qword ptr GS:[RDX] }
    /* +0xe834dc */ __asm { MOV R9,-0x4c9ea83a898c0149 }
    /* +0xe834e6 */ __asm { CMP qword ptr [R11 + 0x18],R9 }
    /* +0xe834ea */ __asm { NOP }
    /* +0xe834eb */ __asm { NOP }
    /* +0xe834ec */ __asm { NOP }
    /* +0xe834ed */ __asm { NOP }
    /* +0xe834ee */ __asm { NOP }
    /* +0xe834ef */ __asm { NOP }
    /* +0xe834f0 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0xe834f7 */ __asm { MOV R9,0x0 }
    /* +0xe834fe */ __asm { NOP }
    /* +0xe834ff */ __asm { PUSHFQ }
    /* +0xe83500 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe83508 */ __asm { POPFQ }
    /* +0xe83509 */ __asm { MOV dword ptr [RBP + 0x70],0xf7f9ffdf }
    /* +0xe83510 */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xe83514 */ __asm { XOR R9D,R9D }
    /* +0xe83517 */ __asm { MOVAPS XMM15,xmmword ptr [RBP + 0x8e0] }
    /* +0xe8351f */ __asm { ADD RSP,0x978 }
    /* +0xe83526 */ __asm { POP RBX }
    /* +0xe83527 */ __asm { POP R13 }
    /* +0xe83529 */ __asm { POP RSI }
    /* +0xe8352a */ __asm { POP R14 }
    /* +0xe8352c */ __asm { POP R12 }
    /* +0xe8352e */ __asm { POP RDI }
    /* +0xe8352f */ __asm { POP R15 }
    /* +0xe83531 */ __asm { POP RBP }
    /* +0xe83532 */ __asm { RET }
    /* +0xe83533 */ __asm { MOV R11D,0x79be280d }
    /* +0xe83539 */ __asm { IMUL R11D,dword ptr [RBP + 0x894] }
    /* +0xe83541 */ __asm { NOT R11D }
    /* +0xe83544 */ __asm { MOV dword ptr [RBP + 0x70],R11D }
    /* +0xe83548 */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xe8354c */ __asm { MOV dword ptr [RBP + 0x70],0xeffbb73f }
    /* +0xe83553 */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xe83557 */ __asm { MOV DX,0x994b }
    /* +0xe8355b */ __asm { MOV R8D,R14D }
    /* +0xe8355e */ __asm { XOR R8D,EDX }
    /* +0xe83561 */ __asm { ADD R8D,0xfffff00c }
    /* +0xe83568 */ __asm { MOVZX EDX,R8W }
    /* +0xe8356c */ __asm { AND R11D,0x1 }
    /* +0xe83570 */ __asm { CMP R11D,EDX }
    /* +0xe83573 */ __asm { NOP }
    /* +0xe83574 */ __asm { NOP }
    /* +0xe83575 */ __asm { NOP }
    /* +0xe83576 */ __asm { NOP }
    /* +0xe83577 */ __asm { NOP }
    /* +0xe83578 */ __asm { NOP }
    /* +0xe83579 */ __asm { NOP }
    /* +0xe8357a */ __asm { NOP }
    /* +0xe8357b */ __asm { NOP }
    /* +0xe8357c */ __asm { NOP }
    /* +0xe8357d */ __asm { NOP }
    /* +0xe8357e */ __asm { NOP }
    /* +0xe8357f */ __asm { MOV dword ptr [RBP + 0x70],0x49252e75 }
    /* +0xe83586 */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xe8358a */ __asm { CMP R11D,0xa743f37a }
    /* +0xe83591 */ __asm { JNC 0x7fffa55f3659 }
    /* +0xe83597 */ __asm { MOV EDX,0x12b8d496 }
    /* +0xe8359c */ __asm { ADD EDX,0x80e9035e }
    /* +0xe835a2 */ __asm { MOVSXD RAX,dword ptr [R9 + 0x40] }
    /* +0xe835a6 */ __asm { MOV R13D,EAX }
    /* +0xe835a9 */ __asm { MOV RDI,qword ptr [R9 + 0x30] }
    /* +0xe835ad */ __asm { XOR EDX,0x93819e19 }
    /* +0xe835b3 */ __asm { SUB EDX,R14D }
    /* +0xe835b6 */ __asm { MOV R11D,0xa7cf26b0 }
    /* +0xe835bc */ __asm { CMP RDX,R11 }
    /* +0xe835bf */ __asm { CMOVZ R13,RAX }
    /* +0xe835c3 */ __asm { MOV dword ptr [RBP + 0x70],0x3152f71b }
    /* +0xe835ca */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xe835ce */ __asm { LEA R11,[0x7fffa4792ad1] }
    /* +0xe835d5 */ __asm { LEA RDX,[0x7fffa4789047] }
    /* +0xe835dc */ __asm { MOV AX,0xc712 }
    /* +0xe835e0 */ __asm { MOV ESI,R14D }
    /* +0xe835e3 */ __asm { OR ESI,0x1 }
    /* +0xe835e6 */ __asm { IMUL EAX,ESI }
    /* +0xe835e9 */ __asm { LEA R9,[0x7fffa478784a] }
    /* +0xe835f0 */ __asm { MOVSX R10,AX }
    /* +0xe835f4 */ __asm { XOR R10,-0x22b3 }
    /* +0xe835fb */ __asm { MOVZX R10D,uint8_t ptr [RDX + R10*0x1 + 0x1] }
    /* +0xe83601 */ __asm { MOV EDX,0xf0846225 }
    /* +0xe83606 */ __asm { NOT EDX }
    /* +0xe83608 */ __asm { ADD EDX,R14D }
    /* +0xe8360b */ __asm { MOVSXD RDX,EDX }
    /* +0xe8360e */ __asm { MOV AX,0xec5f }
    /* +0xe83612 */ __asm { XOR EAX,0x26c }
    /* +0xe83617 */ __asm { ROL AX,0x3 }
    /* +0xe8361b */ __asm { ADD RDX,R11 }
    /* +0xe8361e */ __asm { XOR EAX,R14D }
    /* +0xe83621 */ __asm { MOVSX R8,AX }
    /* +0xe83625 */ __asm { MOV R11,qword ptr [RDX + R10*0x8 + 0xe] }
    /* +0xe8362a */ __asm { XOR R11,qword ptr [R9 + R8*0x1 + 0x30] }
    /* +0xe8362f */ __asm { MOV qword ptr [RBP + 0x70],R11 }
    /* +0xe83633 */ __asm { MOV RDX,qword ptr [RBP + 0x70] }
    /* +0xe83637 */ __asm { MOV dword ptr [RBP + 0x70],0x9e6809c }
    /* +0xe8363e */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xe83642 */ __asm { TEST R11D,R11D }
    /* +0xe83645 */ __asm { JS 0x7fffa55f3666 }
    /* +0xe83647 */ __asm { TEST EBX,0x100 }
    /* +0xe8364d */ __asm { JNZ 0x7fffa55f3676 }
    /* +0xe8364f */ __asm { TEST RDX,RDX }
    /* +0xe83652 */ __asm { JNZ 0x7fffa55f3682 }
    /* +0xe83654 */ __asm { JMP 0x7fffa55f3df3 }
    /* +0xe83659 */ __asm { MOV EAX,[0xe9587da232d0f205] }
    /* +0xe83662 */ __asm { XOR EDI,EDI }
    /* +0xe83666 */ __asm { SHL AL,0x1 }
    /* +0xe83668 */ __asm { ADD CH,AL }
    /* +0xe8366a */ __asm { ADD EAX,dword ptr [RDI + RCX*0x2 + -0x7a] }
    /* +0xe8366e */ __asm { TEST EBX,0x100 }
    /* +0xe83674 */ __asm { JZ 0x7fffa55f364f }
    /* +0xe83676 */ __asm { ADD dword ptr CS:[0x7fffb531bbc9],0x77184 }
    /* +0xe83681 */ __asm { ADD uint8_t ptr [RBP + RCX*0x4 + 0x7d],CL }
    /* +0xe83685 */ __asm { JO 0x7fffa55f36d3 }
    /* +0xe83687 */ __asm { MOV ECX,EDI }
    /* +0xe83689 */ __asm { CALL RDX }
    /* +0xe8368b */ __asm { MOV qword ptr [RBP + 0x880],R15 }
    /* +0xe83692 */ __asm { PUSHFQ }
    /* +0xe83693 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe8369b */ __asm { POPFQ }
    /* +0xe8369c */ __asm { MOV dword ptr [RBP + 0x550],0x2b78f9bd }
    /* +0xe836a6 */ __asm { MOV R11D,dword ptr [RBP + 0x550] }
    /* +0xe836ad */ __asm { CMP R11D,0x6b9e8ba0 }
    /* +0xe836b4 */ __asm { NOP }
    /* +0xe836b5 */ __asm { NOP }
    /* +0xe836b6 */ __asm { NOP }
    /* +0xe836b7 */ __asm { NOP }
    /* +0xe836b8 */ __asm { NOP }
    /* +0xe836b9 */ __asm { MOV R11W,0x5b93 }
    /* +0xe836be */ __asm { MOV EDX,0xfffff32d }
    /* +0xe836c3 */ __asm { SUB EDX,R11D }
    /* +0xe836c6 */ __asm { LEA R9,[0x7fffa47c3045] }
    /* +0xe836cd */ __asm { MOVSX R10,DX }
    /* +0xe836d3 */ __asm { MOV EBX,0x8141b367 }
    /* +0xe836d8 */ __asm { RET }
    /* +0xe83df3 */ __asm { MOV qword ptr [RBP + 0x8c8],RDI }
    /* +0xe83dfa */ __asm { MOV qword ptr [RBP + 0x8c0],R13 }
    /* +0xe83e01 */ __asm { MOV qword ptr [RBP + 0x540],RBX }
    /* +0xe83e08 */ __asm { MOV R11W,0x85fb }
    /* +0xe83e0d */ __asm { XOR R11D,0x85f8 }
    /* +0xe83e14 */ __asm { ROL R11W,0x6 }
    /* +0xe83e19 */ __asm { MOV ECX,R14D }
    /* +0xe83e1c */ __asm { ROL R11W,CL }
    /* +0xe83e20 */ __asm { MOVZX EDX,R11W }
    /* +0xe83e24 */ __asm { MOV R11,qword ptr GS:[RDX] }
    /* +0xe83e28 */ __asm { MOV dword ptr [RBP + 0x70],0xaa37834e }
    /* +0xe83e2f */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe83e32 */ __asm { MOV R9,qword ptr [R11 + 0x18] }
    /* +0xe83e36 */ __asm { MOV dword ptr [RBP + 0x70],0x63e78466 }
    /* +0xe83e3d */ __asm { MOV R11D,dword ptr [RBP + 0x70] }
    /* +0xe83e41 */ __asm { ADD R9,0x10 }
    /* +0xe83e45 */ __asm { MOV R11,0x800000001cb }
    /* +0xe83e4f */ __asm { LEA RDI,[0x7fffa4770000] }
    /* +0xe83e56 */ __asm { MOV RCX,0x0 }
    /* +0xe83e5d */ __asm { MOV R9,qword ptr [R9] }
    /* +0xe83e60 */ __asm { MOV CX,0x29bb }
    /* +0xe83e64 */ __asm { XOR ECX,0xffffc0f9 }
    /* +0xe83e6a */ __asm { ADD ECX,R14D }
    /* +0xe83e6d */ __asm { ROL CX,0x6 }
    /* +0xe83e71 */ __asm { MOVZX ECX,CX }
    /* +0xe83e74 */ __asm { MOV RCX,qword ptr GS:[RCX] }
    /* +0xe83e78 */ __asm { MOV RCX,qword ptr [RCX + 0x30] }
    /* +0xe83e7c */ __asm { MOV RDI,-0x582ab67b476b7c9f }
    /* +0xe83e86 */ __asm { ADD RDI,RCX }
    /* +0xe83e89 */ __asm { ROL RDI,0x16 }
    /* +0xe83e8d */ __asm { ADD RDI,-0x1a114853 }
    /* +0xe83e94 */ __asm { MOV RDX,-0x61de18bf4c996767 }
    /* +0xe83e9e */ __asm { CMP RDI,RDX }
    /* +0xe83ea1 */ __asm { NOP }
    /* +0xe83ea2 */ __asm { NOP }
    /* +0xe83ea3 */ __asm { NOP }
    /* +0xe83ea4 */ __asm { MOVZX R13D,word ptr [R9 + 0x58] }
    /* +0xe83ea9 */ __asm { CMP R13D,0x2 }
    /* +0xe83ead */ __asm { JC 0x7fffa55f3f39 }
    /* +0xe83eb3 */ __asm { MOV RCX,qword ptr [R9 + 0x60] }
    /* +0xe83eb7 */ __asm { SHR R13D,0x1 }
    /* +0xe83eba */ __asm { LEA R15,[0x7fffa4770000] }
    /* +0xe83ec1 */ __asm { NOP }
    /* +0xe83ec2 */ __asm { MOV RDI,0x0 }
    /* +0xe83ec9 */ __asm { CMP R13W,0x1 }
    /* +0xe83ece */ __asm { JNZ 0x7fffa55f3f7e }
    /* +0xe83ed4 */ __asm { MOV R12,0x6e7f3cd194177f63 }
    /* +0xe83ede */ __asm { XOR EBX,EBX }
    /* +0xe83ee0 */ __asm { AND R13D,0x1 }
    /* +0xe83ee4 */ __asm { MOV EDX,0xa95526c1 }
    /* +0xe83ee9 */ __asm { IMUL EDX,dword ptr [RBP + 0x894] }
    /* +0xe83ef0 */ __asm { NOT EDX }
    /* +0xe83ef2 */ __asm { NOP }
    /* +0xe83ef3 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xe83efa */ __asm { MOV RAX,0x0 }
    /* +0xe83f01 */ __asm { CMP R13D,EDX }
    /* +0xe83f04 */ __asm { JZ 0x7fffa55f3f27 }
    /* +0xe83f06 */ __asm { MOVZX EDX,word ptr [RCX + RBX*0x2] }
    /* +0xe83f0a */ __asm { MOV R8D,EDX }
    /* +0xe83f0d */ __asm { OR R8D,0x20 }
    /* +0xe83f11 */ __asm { LEA EAX,[RDX + -0x41] }
    /* +0xe83f14 */ __asm { CMP AX,0x1a }
    /* +0xe83f18 */ __asm { CMOVNC R8D,EDX }
    /* +0xe83f1c */ __asm { MOVZX EDX,R8B }
    /* +0xe83f20 */ __asm { XOR R12,RDX }
    /* +0xe83f23 */ __asm { IMUL R12,R11 }
    /* +0xe83f27 */ __asm { MOV RDX,-0x353d474d520a881b }
    /* +0xe83f31 */ __asm { CMP R12,RDX }
    /* +0xe83f34 */ __asm { SETZ CL }
    /* +0xe83f37 */ __asm { JMP 0x7fffa55f3f3b }
    /* +0xe83f39 */ __asm { XOR ECX,ECX }
    /* +0xe83f3b */ __asm { MOV EDX,0xb113da20 }
    /* +0xe83f40 */ __asm { XOR EDX,R14D }
    /* +0xe83f43 */ __asm { ROL EDX,0xe }
    /* +0xe83f46 */ __asm { MOV dword ptr [RBP + 0x70],EDX }
    /* +0xe83f49 */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe83f4c */ __asm { MOV R8W,0xe992 }
    /* +0xe83f51 */ __asm { ADD R8D,R14D }
    /* +0xe83f54 */ __asm { AND EDX,0x1 }
    /* +0xe83f57 */ __asm { IMUL R8D,R8D,0x6547 }
    /* +0xe83f5e */ __asm { ADD R8D,0x7489 }
    /* +0xe83f65 */ __asm { MOVZX R8D,R8W }
    /* +0xe83f69 */ __asm { CMP EDX,R8D }
    /* +0xe83f6c */ __asm { NOP }
    /* +0xe83f6d */ __asm { NOP }
    /* +0xe83f6e */ __asm { NOP }
    /* +0xe83f6f */ __asm { NOP }
    /* +0xe83f70 */ __asm { NOP }
    /* +0xe83f71 */ __asm { TEST CL,CL }
    /* +0xe83f73 */ __asm { JZ 0x7fffa55f3e4f }
    /* +0xe83f79 */ __asm { JMP 0x7fffa55f44cc }
    /* +0xe83f7e */ __asm { MOV EDI,R13D }
    /* +0xe83f81 */ __asm { AND EDI,0xfffffffe }
    /* +0xe83f84 */ __asm { MOV EBX,0x2 }
    /* +0xe83f89 */ __asm { MOV R12,0x6e7f3cd194177f63 }
    /* +0xe83f93 */ __asm { MOVZX R15D,word ptr [RCX + RBX*0x2 + -0x4] }
    /* +0xe83f99 */ __asm { MOV EAX,R15D }
    /* +0xe83f9c */ __asm { OR EAX,0x20 }
    /* +0xe83f9f */ __asm { MOVZX R8D,word ptr [RCX + RBX*0x2 + -0x2] }
    /* +0xe83fa5 */ __asm { MOV R10D,R8D }
    /* +0xe83fa8 */ __asm { OR R10D,0x20 }
    /* +0xe83fac */ __asm { LEA EDX,[R15 + -0x41] }
    /* +0xe83fb0 */ __asm { CMP DX,0x1a }
    /* +0xe83fb4 */ __asm { CMOVNC EAX,R15D }
    /* +0xe83fb8 */ __asm { MOVZX EDX,AL }
    /* +0xe83fbb */ __asm { XOR RDX,R12 }
    /* +0xe83fbe */ __asm { IMUL RDX,R11 }
    /* +0xe83fc2 */ __asm { LEA EAX,[R8 + -0x41] }
    /* +0xe83fc6 */ __asm { CMP AX,0x1a }
    /* +0xe83fca */ __asm { CMOVNC R10D,R8D }
    /* +0xe83fce */ __asm { MOVZX R12D,R10B }
    /* +0xe83fd2 */ __asm { XOR R12,RDX }
    /* +0xe83fd5 */ __asm { IMUL R12,R11 }
    /* +0xe83fd9 */ __asm { CMP RDI,RBX }
    /* +0xe83fdc */ __asm { JZ 0x7fffa55f3ee0 }
    /* +0xe83fe2 */ __asm { ADD RBX,0x2 }
    /* +0xe83fe6 */ __asm { JMP 0x7fffa55f3f93 }
    /* +0xe844cc */ __asm { MOV dword ptr [RBP + 0x70],0x59d73be1 }
    /* +0xe844d3 */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe844d6 */ __asm { CMP EDX,0xb8257758 }
    /* +0xe844dc */ __asm { NOP }
    /* +0xe844dd */ __asm { NOP }
    /* +0xe844de */ __asm { NOP }
    /* +0xe844df */ __asm { NOP }
    /* +0xe844e0 */ __asm { NOP }
    /* +0xe844e1 */ __asm { NOP }
    /* +0xe844e2 */ __asm { NOP }
    /* +0xe844e3 */ __asm { MOV R9,qword ptr [R9 + 0x30] }
    /* +0xe844e7 */ __asm { TEST R9,R9 }
    /* +0xe844ea */ __asm { JZ 0x7fffa55f468b }
    /* +0xe844f0 */ __asm { MOV DX,0xf98 }
    /* +0xe844f4 */ __asm { IMUL R8D,EDX,0x54cb }
    /* +0xe844fb */ __asm { ADD R8D,0xffffc278 }
    /* +0xe84502 */ __asm { MOV ECX,R14D }
    /* +0xe84505 */ __asm { ROR R8W,CL }
    /* +0xe84509 */ __asm { MOV EDX,dword ptr [R9 + 0x3c] }
    /* +0xe8450d */ __asm { ADD RDX,R9 }
    /* +0xe84510 */ __asm { MOVZX EAX,R8W }
    /* +0xe84514 */ __asm { CMP RDX,RAX }
    /* +0xe84517 */ __asm { JZ 0x7fffa55f468b }
    /* +0xe8451d */ __asm { MOV R8W,0x56bf }
    /* +0xe84522 */ __asm { SUB R8D,R14D }
    /* +0xe84525 */ __asm { ROL R8W,0x6 }
    /* +0xe8452a */ __asm { MOVZX EAX,R8W }
    /* +0xe8452e */ __asm { MOV R10,qword ptr GS:[RAX] }
    /* +0xe84532 */ __asm { MOV R8W,0x3c5c }
    /* +0xe84537 */ __asm { ADD R8D,0x7081 }
    /* +0xe8453e */ __asm { MOV ECX,R14D }
    /* +0xe84541 */ __asm { ROL R8W,CL }
    /* +0xe84545 */ __asm { MOV R10,qword ptr [R10 + 0xfe8] }
    /* +0xe8454c */ __asm { MOVZX EAX,R8W }
    /* +0xe84550 */ __asm { XOR RAX,0xd65e }
    /* +0xe84556 */ __asm { MOV RAX,qword ptr GS:[RAX] }
    /* +0xe8455a */ __asm { ADD R10,qword ptr [RAX + 0x370] }
    /* +0xe84561 */ __asm { MOV RAX,0x5d293fd3606c96ab }
    /* +0xe8456b */ __asm { XOR RAX,R14 }
    /* +0xe8456e */ __asm { XOR RAX,R10 }
    /* +0xe84571 */ __asm { CMP RAX,-0x1 }
    /* +0xe84575 */ __asm { NOP }
    /* +0xe84576 */ __asm { NOP }
    /* +0xe84577 */ __asm { NOP }
    /* +0xe84578 */ __asm { NOP }
    /* +0xe84579 */ __asm { NOP }
    /* +0xe8457a */ __asm { MOV R10,0x7ff8b499ab38a1a1 }
    /* +0xe84584 */ __asm { IMUL R10,R10,0x27e87d9f }
    /* +0xe8458b */ __asm { MOV RAX,0x0 }
    /* +0xe84592 */ __asm { LEA R8,[0x7fffa4770000] }
    /* +0xe84599 */ __asm { NOP }
    /* +0xe8459a */ __asm { NOT R10 }
    /* +0xe8459d */ __asm { MOV ECX,R14D }
    /* +0xe845a0 */ __asm { ROL R10,CL }
    /* +0xe845a3 */ __asm { MOV R8,qword ptr [RDX + 0x88] }
    /* +0xe845aa */ __asm { XOR EDX,EDX }
    /* +0xe845ac */ __asm { MOV EAX,0xffffffff }
    /* +0xe845b1 */ __asm { AND RAX,R8 }
    /* +0xe845b4 */ __asm { JZ 0x7fffa55f468d }
    /* +0xe845ba */ __asm { CMP R8,R10 }
    /* +0xe845bd */ __asm { JC 0x7fffa55f468d }
    /* +0xe845c3 */ __asm { TEST dword ptr [RBP + 0x540],0x100 }
    /* +0xe845cd */ __asm { NOP }
    /* +0xe845ce */ __asm { NOP }
    /* +0xe845cf */ __asm { NOP }
    /* +0xe845d0 */ __asm { NOP }
    /* +0xe845d1 */ __asm { NOP }
    /* +0xe845d2 */ __asm { NOP }
    /* +0xe845d3 */ __asm { NOP }
    /* +0xe845d4 */ __asm { NOP }
    /* +0xe845d5 */ __asm { NOP }
    /* +0xe845d6 */ __asm { MOV dword ptr [RBP + 0x70],0xaa54569c }
    /* +0xe845dd */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe845e0 */ __asm { MOV R8W,0xde82 }
    /* +0xe845e5 */ __asm { XOR R8D,0xde82 }
    /* +0xe845ec */ __asm { MOV ECX,R14D }
    /* +0xe845ef */ __asm { ROR R8W,CL }
    /* +0xe845f3 */ __asm { MOVZX R8D,R8W }
    /* +0xe845f7 */ __asm { CMP EDX,R8D }
    /* +0xe845fa */ __asm { JGE 0x7fffa55f5bb9 }
    /* +0xe84600 */ __asm { CMP dword ptr [R9 + RAX*0x1 + 0x1c],0x0 }
    /* +0xe84606 */ __asm { JZ 0x7fffa55f5bc8 }
    /* +0xe8460c */ __asm { CMP dword ptr [R9 + RAX*0x1 + 0x20],0x0 }
    /* +0xe84612 */ __asm { JZ 0x7fffa55f5bc8 }
    /* +0xe84618 */ __asm { CMP dword ptr [R9 + RAX*0x1 + 0x24],0x0 }
    /* +0xe8461e */ __asm { JZ 0x7fffa55f5bc8 }
    /* +0xe84624 */ __asm { MOV dword ptr [RBP + 0x70],0xb1676a98 }
    /* +0xe8462b */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe8462e */ __asm { MOV EDX,dword ptr [R9 + RAX*0x1 + 0x1c] }
    /* +0xe84633 */ __asm { MOV qword ptr [RBP + 0x38],RDX }
    /* +0xe84637 */ __asm { MOV dword ptr [RBP + 0x70],0x5d52e0ba }
    /* +0xe8463e */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe84641 */ __asm { CMP EDX,0xb5807139 }
    /* +0xe84647 */ __asm { JNC 0x7fffa55f5bd8 }
    /* +0xe8464d */ __asm { MOV R10D,dword ptr [R9 + RAX*0x1 + 0x20] }
    /* +0xe84652 */ __asm { MOV dword ptr [RBP + 0x70],0x7c0c5dd9 }
    /* +0xe84659 */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe8465c */ __asm { MOV R13D,dword ptr [R9 + RAX*0x1 + 0x24] }
    /* +0xe84661 */ __asm { MOV dword ptr [RBP + 0x70],0x8645c168 }
    /* +0xe84668 */ __asm { MOV EDX,dword ptr [RBP + 0x70] }
    /* +0xe8466b */ __asm { MOV DX,0x5a8 }
    /* +0xe8466f */ __asm { XOR EDX,0xffffffda }
}


// ============================================================================
// Function : FUN_7fffa55f6140  |  RVA: 0xe86140  |  Size: 1846 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f6140(uint64_t param_1,char *param_2,uint64_t param_3,uint64_t param_4)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint32_t uVar4;
  uint8_t bVar5;
  uint16_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint16_t uVar10;
  uint32_t uVar11;
  int iVar12;
  uint64_t uVar13;
  char *pcVar14;
  int64_t lVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint8_t bVar18;
  int64_t lVar19;
  char *pcVar20;
  int64_t lVar21;
  uint64_t *puVar22;
  int64_t lVar23;
  uint8_t bVar24;
  uint8_t *pbVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  bool bVar29;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  
  param_4 = (param_4 << 0x3a | param_4 >> 6) ^ (param_4 << 0x1b | param_4 >> 0x25) ^ param_4;
  uVar16 = (uint32_t)param_2;
  bVar5 = (uint8_t)param_2;
  param_4 = (param_4 << 0x34 | param_4 >> 0xc) ^ (param_4 << 0x36 | param_4 >> 10) ^ param_4;
  param_4 = (param_4 << 0x28 | param_4 >> 0x18) ^ (param_4 << 0x2c | param_4 >> 0x14) ^ param_4;
  param_4 = (param_4 << 0x10 | param_4 >> 0x30) ^ (param_4 << 0x18 | param_4 >> 0x28) ^ param_4;
  param_4 = (param_4 << 0x30 | param_4 >> 0x10) ^ (param_4 << 0x20 | param_4 >> 0x20) ^ param_4;
  pbVar25 = (uint8_t *)((param_4 << 0x20 | param_4 >> 0x20) * 0x5140d56f258e5b19 -
                    (uint64_t)(0x7dfb906f << (bVar5 & 0x1f) | 0x7dfb906fU >> 0x20 - (bVar5 & 0x1f))
                    );
  uVar6 = (uint16_t)param_2;
  if (uRam00007fffa4781528 == 0) goto LAB_7fffa55f6765;
  pcVar14 = *(char **)((int64_t)
                       (int)((-0x7bb65768 << (bVar5 & 0x1f) | 0x8449a898U >> 0x20 - (bVar5 & 0x1f))
                            * 0x7fd3e8f3) + 0x7fffa478acf4);
  lVar19 = *(int64_t *)
            ((int64_t)(short)(~(uVar6 + 0x83fd) << 10 | (uint16_t)~(uVar6 + 0x83fd) >> 6) +
            0x7fffa478464d) * 0x10;
  if (pcVar14 == pcVar14 + lVar19 + 0x10) {
    lVar15 = 0;
    uVar27 = uRam00007fffa4781528;
  }
  else {
    lVar15 = 0;
    pcVar20 = pcVar14;
    uVar27 = uRam00007fffa4781528;
    do {
      auVar30[0] = -(*pcVar20 == '\0');
      auVar30[1] = -(pcVar20[1] == '\0');
      auVar30[2] = -(pcVar20[2] == '\0');
      auVar30[3] = -(pcVar20[3] == '\0');
      auVar30[4] = -(pcVar20[4] == '\0');
      auVar30[5] = -(pcVar20[5] == '\0');
      auVar30[6] = -(pcVar20[6] == '\0');
      auVar30[7] = -(pcVar20[7] == '\0');
      auVar30[8] = -(pcVar20[8] == '\0');
      auVar30[9] = -(pcVar20[9] == '\0');
      auVar30[10] = -(pcVar20[10] == '\0');
      auVar30[0xb] = -(pcVar20[0xb] == '\0');
      auVar30[0xc] = -(pcVar20[0xc] == '\0');
      auVar30[0xd] = -(pcVar20[0xd] == '\0');
      auVar30[0xe] = -(pcVar20[0xe] == '\0');
      auVar30[0xf] = -(pcVar20[0xf] == '\0');
      for (uVar17 = ((uint16_t)((uint16_t)(SUB161(auVar30 >> 7,0) & 1) |
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
                             (uint16_t)(auVar30[0xf] >> 7) << 0xf) ^ 0x7fff) &
                    ((uint32_t)(pcVar20 != pcVar14 + lVar19) << 0xe | 0x3fff); uVar17 != 0;
          uVar17 = uVar17 - 1 & uVar17) {
        uVar11 = 0;
        for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar26 = (uint64_t)uVar11;
        puVar22 = *(uint64_t **)(uVar27 + uVar26 * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *puVar22;
        uVar13 = SUB168(ZEXT816(0x9e3779b97f4a7c15) * auVar3,8) ^
                 SUB168(ZEXT816(0x9e3779b97f4a7c15) * auVar3,0);
        uVar28 = uVar13 >> (*pbVar25 & 0x3f);
        lVar21 = *(int64_t *)(pbVar25 + 0x10) + uVar28 * 0x10;
        pcVar1 = (char *)(*(int64_t *)(pbVar25 + 0x10) + uVar28 * 0x10);
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
        if (uVar11 == 0) {
          bVar24 = '\x01' << ((uint8_t)uVar13 & 7);
          lVar23 = 1;
          do {
            bVar18 = *(uint8_t *)(lVar21 + 0xf) | bVar24;
            if ((uint64_t)(int64_t)(int)~(uVar16 + 0x7f123c73) < (uint64_t)(0x5f9ccd37 - uVar16))
            {
              bVar18 = bVar24 + *(uint8_t *)(lVar21 + 0xf);
            }
            *(uint8_t *)(lVar21 + 0xf) = bVar18;
            uVar28 = uVar28 + lVar23 & *(uint64_t *)(pbVar25 + 8);
            lVar21 = *(int64_t *)(pbVar25 + 0x10) + uVar28 * 0x10;
            pcVar1 = (char *)(*(int64_t *)(pbVar25 + 0x10) + uVar28 * 0x10);
            auVar32[0] = -(*pcVar1 == '\0');
            auVar32[1] = -(pcVar1[1] == '\0');
            auVar32[2] = -(pcVar1[2] == '\0');
            auVar32[3] = -(pcVar1[3] == '\0');
            auVar32[4] = -(pcVar1[4] == '\0');
            auVar32[5] = -(pcVar1[5] == '\0');
            auVar32[6] = -(pcVar1[6] == '\0');
            auVar32[7] = -(pcVar1[7] == '\0');
            auVar32[8] = -(pcVar1[8] == '\0');
            auVar32[9] = -(pcVar1[9] == '\0');
            auVar32[10] = -(pcVar1[10] == '\0');
            auVar32[0xb] = -(pcVar1[0xb] == '\0');
            auVar32[0xc] = -(pcVar1[0xc] == '\0');
            auVar32[0xd] = -(pcVar1[0xd] == '\0');
            auVar32[0xe] = -(pcVar1[0xe] == '\0');
            auVar32[0xf] = -(pcVar1[0xf] == '\0');
            uVar11 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar32 >> 7,0) & 1) |
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
            lVar23 = lVar23 + 1;
          } while (uVar11 == 0);
          puVar22 = *(uint64_t **)(uVar27 + uVar26 * 8);
        }
        param_2 = (char *)(uVar13 & 0xff);
        uVar4 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar2 = (&UNK_7fffa583f143)
                [(int64_t)param_2 * 4 +
                 (int64_t)(int)((uVar16 ^ 0x24633734) << 7 | (uVar16 ^ 0x24633734) >> 0x19)];
        *(uint64_t **)(uVar28 * 0x78 + *(int64_t *)(pbVar25 + 0x18) + (uint64_t)uVar4 * 8) =
             puVar22;
        *(uint64_t *)(uVar27 + uVar26 * 8) = 0;
        *(uint8_t *)(lVar21 + (uint64_t)uVar4) = uVar2;
        lVar21 = *(int64_t *)(uVar27 + uVar26 * 8);
        if (lVar21 != 0) {
          uVar28 = *(uint64_t *)(lVar21 + 0x20);
          if (uVar28 != 0) {
            uVar11 = (int)CONCAT62((uint6)(uint16_t)(uVar4 >> 0x10),0x8f8e) * -0x1069 ^ uVar16;
            (*(code *)(&UNK_7fffa5688463 + (short)uVar11))(uVar11,param_2,uVar28 >> 0x3d ^ uVar28);
            *(uint8_t (*) [16])(lVar21 + 0x20) = (uint8_t  [16])0x0;
            *(uint64_t *)(lVar21 + 0x30) = 0;
          }
          uVar10 = (uint16_t)((uVar16 | 1) * 0x2be2);
          (*(code *)((int64_t)(short)(uVar10 << 0xe | uVar10 >> 2) + 0x7fffa568fb21))();
        }
        lVar15 = lVar15 + 1;
      }
      uVar27 = uVar27 + 0x78;
      bVar29 = pcVar20 != pcVar14 + lVar19;
      pcVar20 = pcVar20 + 0x10;
    } while (bVar29);
    uVar27 = *(uint64_t *)((int64_t)(short)(uVar6 + 0x1114) + 0x7fffa4783b05);
  }
  uVar17 = (uVar16 | 1) * 0x1509cd45 + 0x1636abf4;
  if (lVar15 == *(int64_t *)((int64_t)(int)(uVar17 * 0x100000 | uVar17 >> 0xc) + 0x7fffa478c52b))
  {
LAB_7fffa55f672e:
    if (uVar27 == 0) goto LAB_7fffa55f6765;
  }
  else {
    if (uVar27 == 0) goto LAB_7fffa55f6765;
    param_2 = *(char **)((int64_t)(short)((uVar6 | 1) * -0x2276 + -0x5f94) + 0x7fffa4781f9e);
    lVar19 = *(int64_t *)
              (((int64_t)(short)((uVar6 | 1) * 0x498a + -0x20a4) ^ 0x6f68U) + 0x7fffa4782dfe) *
             0x10;
    bVar29 = param_2 <= param_2 + lVar19 + 0x10;
    if (~((uVar16 | 1) * 0x5a633264) < (uVar16 << 0x1e | uVar16 + 0xe34d79c8 >> 2)) {
      bVar29 = param_2 == param_2 + lVar19 + 0x10;
    }
    if (!bVar29) {
      pcVar20 = param_2 + lVar19;
      pcVar14 = param_2;
      uVar28 = uVar27;
      do {
        auVar33[0] = -(*pcVar14 == '\0');
        auVar33[1] = -(pcVar14[1] == '\0');
        auVar33[2] = -(pcVar14[2] == '\0');
        auVar33[3] = -(pcVar14[3] == '\0');
        auVar33[4] = -(pcVar14[4] == '\0');
        auVar33[5] = -(pcVar14[5] == '\0');
        auVar33[6] = -(pcVar14[6] == '\0');
        auVar33[7] = -(pcVar14[7] == '\0');
        auVar33[8] = -(pcVar14[8] == '\0');
        auVar33[9] = -(pcVar14[9] == '\0');
        auVar33[10] = -(pcVar14[10] == '\0');
        auVar33[0xb] = -(pcVar14[0xb] == '\0');
        auVar33[0xc] = -(pcVar14[0xc] == '\0');
        auVar33[0xd] = -(pcVar14[0xd] == '\0');
        auVar33[0xe] = -(pcVar14[0xe] == '\0');
        auVar33[0xf] = -(pcVar14[0xf] == '\0');
        uVar27 = uRam00007fffa4781528;
        for (uVar17 = ((uint32_t)(pcVar14 != pcVar20) << 0xe | 0x3fff) &
                      ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar33 >> 7,0) & 1) |
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
            uRam00007fffa4781528 = uVar27, uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
          uVar11 = 0;
          for (uVar4 = uVar17; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          lVar19 = *(int64_t *)(uVar28 + (uint64_t)uVar11 * 8);
          if (lVar19 != 0) {
            if (*(int64_t *)(lVar19 + 0x20) != 0) {
              (*(code *)((int64_t)
                         (short)(0x5c88U >> (bVar5 & 0xf) | 0x5c88 << 0x10 - (bVar5 & 0xf)) +
                        0x7fffa568c320))();
              *(uint8_t (*) [16])(lVar19 + 0x20) = (uint8_t  [16])0x0;
              *(uint64_t *)(lVar19 + 0x30) = 0;
            }
            FUN_7fffa5687c30();
          }
          uVar27 = uRam00007fffa4781528;
        }
        uVar28 = uVar28 + 0x78;
        param_2 = pcVar14 + 0x10;
        bVar29 = pcVar14 != pcVar20;
        pcVar14 = param_2;
      } while (bVar29);
      goto LAB_7fffa55f672e;
    }
  }
  uVar17 = ~(uint32_t)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x22bd);
  iVar12 = uVar16 + uVar17;
  (*(code *)((int64_t)(short)iVar12 + 0x7fffa568d5df))(iVar12,uVar17,uVar27 >> 0x3d ^ uVar27);
LAB_7fffa55f6765:
  lVar19 = (int64_t)(int)((uVar16 ^ 0x5bf638d5) + 0x3b94641d);
  uVar7 = *(uint64_t *)pbVar25;
  uVar8 = *(uint64_t *)(pbVar25 + 8);
  uVar9 = *(uint64_t *)(pbVar25 + 0x18);
  *(uint64_t *)(lVar19 + 0x7fffa478bf29) = *(uint64_t *)(pbVar25 + 0x10);
  *(uint64_t *)(lVar19 + 0x7fffa478bf31) = uVar9;
  *(uint64_t *)(lVar19 + 0x7fffa478bf19) = uVar7;
  *(uint64_t *)(lVar19 + 0x7fffa478bf21) = uVar8;
  uVar27 = *(int64_t *)(((int64_t)(int)(uVar16 + 0x19e17b9f) ^ 0x46816ceeU) + 0x7fffa478ecd8) *
           0xf + 0xe;
  if (*(int64_t *)
       ((int64_t)(short)((uVar6 | 1) * -0x5c00 | (uint16_t)((uVar6 | 1) * -0x132e) >> 7) +
       0x7fffa47877a4) == 0) {
    uVar27 = 0;
  }
  uVar28 = (uint64_t)((float)uVar27 * 0.875);
  uVar28 = (int64_t)((float)uVar27 * 0.875 - 9.223372e+18) & (int64_t)uVar28 >> 0x3f | uVar28;
  if (uVar27 < (0x3c0000 << (bVar5 & 0x1f) | 0x3c0000U >> 0x20 - (bVar5 & 0x1f))) {
    uVar28 = uVar27;
  }
  *(uint64_t *)
   ((int64_t)(short)~(0x3384 << (bVar5 & 0xf) | 0x3384U >> 0x10 - (bVar5 & 0xf)) + 0x7fffa4782ef3)
       = uVar28;
  return;
}


// ============================================================================
// Function : FUN_7fffa55f6890  |  RVA: 0xe86890  |  Size: 845 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f6890(uint64_t param_1,uint64_t param_2)

{
  uint8_t bVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t unaff_R15;
  int64_t lVar8;
  
  uVar4 = CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x6700);
  uVar6 = unaff_R15 ^ uVar4 ^ 0x6f235432;
  lVar8 = uVar6 * -0x800c00002eb + ~uVar6 * -0x8000000025b +
          ((~unaff_R15 | uVar4) ^ 0x6f235432) * -0xc0000090 +
          (~(uVar4 & 0x6f235432) | unaff_R15) * 0xc0000090 +
          (~(unaff_R15 | 0x6f235432) & uVar4) * 0xc0000090;
  uVar3 = (uint32_t)lVar8;
  bVar1 = (uint8_t)lVar8;
  *(uint8_t *)((int64_t)(short)((short)lVar8 + -0x6701) + 0x7fffa47c395a) = (bVar1 | 1) * -0x3f ^ 0x9b
  ;
  lVar8 = (int64_t)(short)(0x6950 << (bVar1 & 0xf) | 0x6950U >> 0x10 - (bVar1 & 0xf));
  lVar7 = (int64_t)
          (int)((0xe170e33aU >> (bVar1 & 0x1f) | -0x1e8f1cc6 << 0x20 - (bVar1 & 0x1f)) * 0x8d20b91);
  *(uint8_t (*) [16])(lVar7 + 0x7fffa47c55b9) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar7 + 0x7fffa47c55a9) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar8 + 0x7fffa47c51a5) =
       (uint64_t)((0x249c0cde - uVar3 ^ 0x44787693) + 0x9f1b83f0);
  uVar4 = rdtsc();
  lVar7 = (uVar4 & 0xffffffff00000000 | CONCAT44((int)((uint64_t)lVar8 >> 0x20),(int)uVar4)) *
          0x375799265d892de;
  lVar8 = 2;
  while( true ) {
    lVar5 = (0x932ec496f01babccU >> (bVar1 & 0x3f) | -0x6cd13b690fe45434 << 0x40 - (bVar1 & 0x3f)) *
            lVar7 + 0x375799265d892de;
    lVar7 = lVar5 * 0x375799265d892de + 0x375799265d892de;
    *(char *)(lVar8 + (int64_t)(int)~(uVar3 + 0xac88) + 0x7fffa47c838c) =
         (char)((uint64_t)lVar7 >> 0x20);
    lVar7 = lVar7 * 0x375799265d892de + 0x375799265d892de;
    *(char *)(lVar8 + (int64_t)(int)((uVar3 ^ 0xfffb4e54) << 0x1d | (uVar3 ^ 0xfffb4e54) >> 3) +
                      0x7fffa47c6b28) = (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar8 + ((int64_t)
                       (int)(-0x4e5672bd << (bVar1 & 0x1f) | 0xb1a98d43U >> 0x20 - (bVar1 & 0x1f)) ^
                      0xffffffffe27276d3U) + 0x7fffa47c99ee) = (char)((uint64_t)lVar5 >> 0x20);
    if (lVar8 == 0x4d) break;
    lVar8 = lVar8 + 3;
  }
  bVar2 = *(char *)((int64_t)(int)(uVar3 + 0xae65406d ^ 0x519a6f0e) + 0x7fffa47ca6ee) + 1U & 3;
  *(uint64_t *)
   ((int64_t)(short)(-0xfc1 << (bVar1 & 0xf) | 0xf03fU >> 0x10 - (bVar1 & 0xf)) + 0x7fffa47bd544 +
   (uint64_t)bVar2 * 8) =
       *(uint64_t *)
        ((int64_t)(int)(uVar3 - 0x145e4 >> 1 | (uint32_t)((uVar3 - 0x145e4 & 1) != 0) << 0x1f) +
        0x7fffa47c76b4);
  *(uint8_t *)((int64_t)(int)((uVar3 ^ 0xb7fffa2c) << 5 | (uVar3 ^ 0xb7fffa2c) >> 0x1b) +
           0x7fffa47cc5be) = bVar2;
  return;
}


// ============================================================================
// Function : FUN_7fffa55f6be0  |  RVA: 0xe86be0  |  Size: 891 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f6be0(void)

{
  uint64_t uVar1;
  
  uRam00007fffa47bb708 = 0x9bf93df0c224d4ea;
  uVar1 = 0xc732b350e6b6b2ed - lRam00007fffa4781118;
  uVar1 = ~(uVar1 << 0x2e ^ uVar1 * 0x800000 ^ uVar1);
  uRam00007fffa47bb720 = 0x7ffda56f9dcb;
  uRam00007fffa47bb728 = 0x7a57d1cb29289dcb;
  uRam00007fffa47bb718 = 0;
  uRam00007fffa47bb710 = uVar1 >> 0x36 ^ uVar1 >> 0x1b ^ uVar1;
  lRam00007fffa47bb730 =
       (uRam00007fffa47814e0 << 0x1f | uRam00007fffa47814e0 >> 0x21) * -0xa4b8fc5b3bf2089;
  uVar1 = (-lRam00007fffa47811e0 << 0x2d | (uint64_t)-lRam00007fffa47811e0 >> 0x13) *
          -0x6970d1e1c3bf87ff;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  uRam00007fffa47bb740 = 0xfc5b2099b350019d;
  uRam00007fffa47bb738 =
       ~(uint64_t)
        (&UNK_7fffa586efe0 + (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f6f60  |  RVA: 0xe86f60  |  Size: 928 bytes
// Callers  : FUN_7fffa5215120@0xaa5120, FUN_7fffa507ac70@0x90ac70
// Callees  : FUN_7fffa565d310@0xeed310, FUN_7fffa55d63a0@0xe663a0, FUN_7fffa52248c0@0xab48c0, FUN_7fffa5488850@0xd18850, FUN_7fffa512f2a0@0x9bf2a0, FUN_7fffa55f2ed0@0xe82ed0, FUN_7fffa56a1540@0xf31540, FUN_7fffa54539d0@0xce39d0
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa55f6f60(int64_t *param_1,uint64_t param_2,int64_t param_3,int param_4)

{
  uint32_t uVar1;
  bool bVar2;
  bool bVar3;
  uint32_t *puVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint8_t *pbVar8;
  uint32_t uVar9;
  uint8_t *pbVar10;
  uint8_t *pbVar11;
  uint8_t *pbVar12;
  uint64_t *puVar13;
  int iVar14;
  uint8_t auStack_138 [32];
  uint64_t *puStack_118;
  int iStack_108;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint32_t uStack_e8;
  uint64_t uStack_e0;
  int iStack_d8;
  uint32_t *puStack_d0;
  uint8_t *pbStack_c8;
  uint64_t uStack_c0;
  int64_t *plStack_b8;
  int64_t *plStack_b0;
  uint64_t uStack_a8;
  int64_t *plStack_a0;
  uint64_t uStack_98;
  uint8_t *pbStack_90;
  uint32_t *puStack_88;
  uint8_t *pbStack_80;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t auStack_68 [2];
  uint8_t *pbStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_48 = _DAT_7fffa4780040 ^ (uint64_t)auStack_138;
  iStack_108 = param_4;
  uStack_e0 = param_2;
  iStack_d8 = param_4;
  plStack_b8 = param_1;
  plStack_a0 = param_1;
  uStack_98 = param_2;
  uVar6 = FUN_7fffa55d63a0();
  uStack_c0 = uVar6;
  iVar5 = FUN_7fffa565d310(param_1,param_2,param_3);
  lVar7 = FUN_7fffa54539d0();
  *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
  pbStack_60 = (uint8_t *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    auStack_68[0] = 0;
  }
  else {
    pbStack_60 = (uint8_t *)(*(int64_t *)(param_2 + 8) + (int64_t)*(int *)(param_3 + 8));
    uVar9 = *pbStack_60 & 0xf;
    pbStack_60 = pbStack_60 + -(int64_t)(char)(&UNK_7fffa56b3150)[uVar9];
    auStack_68[0] = *(uint32_t *)(pbStack_60 + -4) >> ((&UNK_7fffa56b3160)[uVar9] & 0x1f);
  }
  uStack_f8 = auStack_68;
  puStack_88 = auStack_68;
  pbVar10 = pbStack_60 + -1;
  bVar2 = false;
  bVar3 = false;
  iVar14 = 0;
  pbVar12 = pbStack_60;
  pbVar8 = pbVar10;
  if (0 < (int)auStack_68[0]) {
    do {
      if (iVar14 == iVar5) {
        pbVar10 = pbVar12;
        bVar2 = true;
      }
      if (iVar14 == iStack_108) {
        pbVar8 = pbVar12;
        bVar3 = true;
      }
      if ((bVar2) && (bVar3)) break;
      pbVar11 = pbVar12 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar12 & 0xf];
      uVar9 = *(uint32_t *)(pbVar11 + -4) >> ((&UNK_7fffa56b3160)[*pbVar12 & 0xf] & 0x1f);
      uStack_58 = CONCAT44(uVar9,uVar9 >> 2) & 0x3ffffffff;
      if ((uVar9 & 3) - 1 < 2) {
        pbVar12 = pbVar11 + (4 - (int64_t)(char)(&UNK_7fffa56b3150)[pbVar11[4] & 0xf]);
        uStack_50 = CONCAT44(*(uint32_t *)(pbVar12 + -4) >>
                             ((&UNK_7fffa56b3160)[pbVar11[4] & 0xf] & 0x1f),*(uint32_t *)pbVar11);
      }
      else {
        pbVar12 = pbVar11;
        if ((uVar9 & 3) == 3) {
          pbVar12 = pbVar11 + 4;
          uStack_50 = CONCAT44(uStack_50._4_4_,*(uint32_t *)pbVar11);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)auStack_68[0]);
    param_2 = uStack_e0;
  }
  uStack_f0 = pbVar10;
  plStack_b0 = param_1;
  uStack_a8 = uVar6;
  pbStack_90 = pbVar8;
  pbStack_80 = pbVar8;
  while( true ) {
    puStack_d0 = auStack_68;
    pbStack_c8 = pbStack_60;
    if ((pbVar10 < pbStack_60) || (pbVar10 <= pbVar8)) break;
    FUN_7fffa52248c0(uStack_f8,&uStack_f0);
    puVar4 = uStack_f8;
    uVar9 = uStack_f8[5];
    uVar1 = uStack_f8[6];
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_f8[7]);
    uStack_f0._0_4_ = SUB84(pbVar10,0);
    uStack_f0._4_4_ = (uint32_t)((uint64_t)pbVar10 >> 0x20);
    uStack_78 = (uint32_t)uStack_f8;
    uStack_74 = uStack_f8._4_4_;
    uStack_70 = (uint32_t)uStack_f0;
    uStack_6c = uStack_f0._4_4_;
    uStack_f0 = pbVar10;
    FUN_7fffa52248c0(uStack_f8,&uStack_f0);
    pbVar10 = pbVar10 + -(uint64_t)puVar4[4];
    puStack_118 = &uStack_f8;
    uStack_f0 = pbVar10;
    iVar5 = FUN_7fffa512f2a0(&puStack_88,iStack_108,&uStack_78);
    puStack_d0 = (uint32_t *)CONCAT44(puStack_d0._4_4_,iVar5);
    uStack_e8 = 0;
    if (uVar9 != 0) {
      uStack_e8 = uVar1;
    }
    if (uStack_e8 != 0) {
      *(int *)(param_2 + 0x48) = iVar5 + 2;
      if (uVar9 - 1 < 2) {
        puVar13 = (uint64_t *)((uStack_e0 & 0xffffffff) + *plStack_b0);
        if (uVar9 == 2) {
          puVar13 = (uint64_t *)*puVar13;
        }
        FUN_7fffa56a1540(*(int64_t *)(param_2 + 8) + (int64_t)(int)uStack_e8,*plStack_b0,puVar13,
                         0x103);
      }
      else {
        FUN_7fffa5668b80(*(int64_t *)(param_2 + 8) + (int64_t)(int)uStack_e8,plStack_b8,0x103);
      }
      FUN_7fffa55f2ed0(uStack_c0);
    }
  }
  lVar7 = FUN_7fffa54539d0(uStack_f8);
  if (0 < *(int *)(lVar7 + 0x30)) {
    lVar7 = FUN_7fffa54539d0();
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
  }
  FUN_7fffa5488850(uStack_48 ^ (uint64_t)auStack_138);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f7340  |  RVA: 0xe87340  |  Size: 456 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f7340(uint32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint8_t (*pauVar6) [16];
  
  uVar3 = param_4 << 0xf | param_4 >> 0x31;
  uVar5 = uVar3 * 0x4000000080000001;
  uVar4 = (uVar3 * 0x1000000020000000 | uVar5 >> 0x23) ^ uVar5;
  uVar5 = uVar5 << 0x2b | uVar5 >> 0x15;
  uVar3 = uVar5 + uVar4;
  if ((param_1 | 1) * 0x4284f2b0 != -0x1815ab6f) {
    uVar3 = uVar5 ^ uVar4;
  }
  uVar3 = (uVar3 << 0x16 | uVar3 >> 0x2a) ^ (uVar3 << 0x3a | uVar3 >> 6) ^ uVar3;
  uVar3 = (uVar3 << 0x34 | uVar3 >> 0xc) ^ (uVar3 << 0x2c | uVar3 >> 0x14) ^ uVar3;
  uVar3 = (uVar3 << 0x28 | uVar3 >> 0x18) ^ (uVar3 << 0x18 | uVar3 >> 0x28) ^ uVar3;
  uVar3 = (uVar3 << 0x30 | uVar3 >> 0x10) ^ (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar3;
  pauVar6 = (uint8_t (*) [16])(uVar3 >> 0x3b ^ uVar3);
  puVar1 = *(uint64_t **)*pauVar6;
  if (puVar1 != (uint64_t *)0x0) {
    puVar2 = *(uint64_t **)(*pauVar6 + 8);
    if (puVar1 != puVar2) {
      uVar3 = puVar1[3];
      while( true ) {
        if (7 < uVar3) {
          (*(code *)((int64_t)(short)~((uint16_t)param_1 ^ 0x5c46) + 0x7fffa568e14a))
                    (param_1,0x7353150a,*puVar1 >> 0x3d ^ *puVar1);
        }
        puVar1[2] = 0;
        *(uint16_t *)puVar1 = 0;
        puVar1[3] = 7;
        if (puVar1 + 4 == puVar2) break;
        uVar3 = puVar1[7];
        puVar1 = puVar1 + 4;
      }
    }
    (*(code *)((int64_t)(int)(param_1 + 0xa36e08b0) + 0x7fffa5693a21))();
    *pauVar6 = (uint8_t  [16])0x0;
    *(uint64_t *)pauVar6[1] = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55f7520  |  RVA: 0xe87520  |  Size: 669 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f7520(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47bbdb5 = 0;
  uRam00007fffa47bbddf = 0;
  uRam00007fffa47bbde7 = 0;
  uRam00007fffa47bbdcf = 0;
  uRam00007fffa47bbdd7 = 0;
  uRam00007fffa47bbdbf = 0;
  uRam00007fffa47bbdc7 = 0;
  uRam00007fffa47bbdfe = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0xfe67b8304be76cb + 1;
  lVar4 = 0;
  while( true ) {
    lVar3 = lVar3 * 0xfe67b8304be76cb + 1;
    lVar5 = lVar3 * 0xfe67b8304be76cb + 1;
    *(char *)(lVar4 + 0x7fffa47bbdac) = (char)((uint64_t)lVar3 >> 0x20);
    lVar3 = lVar5 * 0xfe67b8304be76cb + 1;
    *(char *)(lVar4 + 0x7fffa47bbdad) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar4 + 0x7fffa47bbdae) = (char)((uint64_t)lVar3 >> 0x20);
    if (lVar4 == 0x60) break;
    lVar4 = lVar4 + 3;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bbdb5 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa47bbdbf) = ~uRam00007fffa47bbdfe;
  bRam00007fffa47bbdb5 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f77c0  |  RVA: 0xe877c0  |  Size: 3931 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa55f77c0(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  uint64_t *puVar1;
  int *piVar2;
  char *pcVar3;
  uint8_t *pbVar4;
  uint32_t uVar5;
  int64_t lVar6;
  uint16_t uVar7;
  bool bVar8;
  uint8_t bVar9;
  int64_t in_RAX;
  uint8_t bVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  int iVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint16_t uVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint64_t *puVar22;
  uint32_t uVar23;
  uint32_t uVar24;
  uint32_t uVar25;
  uint32_t uVar26;
  int64_t lVar27;
  uint64_t *puVar28;
  uint32_t uVar29;
  uint64_t *in_R10;
  uint64_t uVar30;
  uint64_t *puVar31;
  uint32_t uVar32;
  uint64_t in_R11;
  int64_t lVar33;
  int64_t lVar34;
  int64_t lVar35;
  int iVar36;
  uint64_t *puVar37;
  uint32_t uVar38;
  int64_t lVar39;
  uint64_t uVar40;
  int64_t lVar41;
  char cVar42;
  uint8_t bVar43;
  uint8_t uVar46;
  uint8_t uVar48;
  uint8_t bVar50;
  uint8_t uVar51;
  uint8_t bVar53;
  uint8_t auVar44 [16];
  char cVar47;
  char cVar49;
  char cVar52;
  uint8_t auVar45 [16];
  uint8_t auVar54 [16];
  char cStack_180;
  uint8_t uStack_17c;
  uint32_t auStack_178 [64];
  uint64_t *puStack_78;
  uint32_t uStack_6c;
  uint64_t uStack_68;
  uint64_t *puStack_60;
  uint64_t uStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  
  uVar38 = (param_3 ^ 0x4b6f99b5) << 7 | (param_3 ^ 0x4b6f99b5) >> 0x19;
  param_1 = ~param_1;
  puStack_48 = *(uint64_t **)(in_RAX + 0xf8);
  puStack_60 = *(uint64_t **)(in_RAX + 0x70);
  uVar26 = *(uint32_t *)(in_RAX + 0x1c);
  lVar34 = *(int64_t *)(in_RAX + 8);
  uVar15 = 4;
  if (*(uint32_t *)(in_RAX + 0x10c) < 4) {
    uVar15 = *(uint32_t *)(in_RAX + 0x10c);
  }
  lVar27 = puStack_48[7];
  param_1 = (param_1 << 10 | param_1 >> 0x36) ^ (param_1 << 0x11 | param_1 >> 0x2f) ^ param_1;
  uVar11 = (in_R11 << 0x21 | in_R11 >> 0x1f) ^ (in_R11 << 0x14 | in_R11 >> 0x2c) ^ in_R11;
  uVar11 = (uVar11 << 0x28 | uVar11 >> 0x18) ^ (uVar11 << 2 | uVar11 >> 0x3e) ^ uVar11;
  uVar11 = (uVar11 << 4 | uVar11 >> 0x3c) ^ (uVar11 << 0x10 | uVar11 >> 0x30) ^ uVar11;
  uVar11 = (uVar11 << 8 | uVar11 >> 0x38) ^ (uVar11 << 0x20 | uVar11 >> 0x20) ^ uVar11;
  param_1 = (param_1 << 0x14 | param_1 >> 0x2c) ^ (param_1 << 0x22 | param_1 >> 0x1e) ^ param_1;
  param_1 = (param_1 << 4 | param_1 >> 0x3c) ^ (param_1 << 0x28 | param_1 >> 0x18) ^ param_1;
  param_1 = (param_1 << 8 | param_1 >> 0x38) ^ (param_1 << 0x10 | param_1 >> 0x30) ^ param_1;
  lVar35 = puStack_48[0xe];
  param_1 = (param_1 << 0x20 | param_1 >> 0x20) ^ (param_1 << 0x10 | param_1 >> 0x30) ^ param_1;
  uVar24 = 1 << (*(uint8_t *)(in_RAX + 0x100) & 0x1f);
  iVar36 = 1 << ((uint8_t)uVar15 & 0x1f);
  puVar20 = (uint64_t *)(uVar11 << 0x30 | uVar11 >> 0x10);
  uVar21 = param_1 << 0x20 | param_1 >> 0x20;
  puVar22 = (uint64_t *)(uVar21 - 0xc19e5d3);
  uStack_58 = (uint64_t)*(uint32_t *)(in_RAX + 0x18);
  uVar11 = (int64_t)puVar22 - lVar34;
  uVar23 = (uint32_t)uVar11;
  puStack_50 = puVar22;
  uVar32 = (int)*puVar22 * -0x61c8864f;
  uVar15 = uVar23 - uVar24;
  if (uVar23 - uVar26 <= uVar24) {
    uVar15 = uVar26;
  }
  if (*(int *)(in_RAX + 0x28) != 0) {
    uVar15 = uVar26;
  }
  uStack_6c = uVar15;
  lVar41 = *(int64_t *)(in_RAX + 0x38);
  uVar24 = uVar32 >> (uint64_t)(0x18 - *(int *)((int64_t)puStack_48 + 0x34));
  uVar14 = (uint64_t)(uVar24 >> 4 & 0xfffffff0);
  cStack_180 = (char)*(uint32_t *)(in_RAX + 0x34);
  uVar26 = (uint32_t)*(uint64_t *)(in_RAX + 0x60);
  bVar43 = (uint8_t)param_3;
  bVar9 = (uint8_t)uVar38;
  if (*(int *)(in_RAX + 300) == 0) {
    uStack_68 = *(uint64_t *)(in_RAX + 0x60);
    uVar32 = *(uint32_t *)(in_RAX + 0x2c);
    uVar40 = (uint64_t)uVar32;
    lVar18 = (int64_t)puStack_60;
    lVar33 = lVar41;
    if (0x180 < uVar23 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar30 = uVar40 + 0x60;
        do {
          uVar12 = (uint64_t)((uint32_t)uVar40 & 7);
          uVar32 = *(uint32_t *)(in_RAX + 0x40 + uVar12 * 4);
          *(uint32_t *)(in_RAX + 0x40 + uVar12 * 4) =
               (*(int *)(lVar34 + 8 + uVar40) * -0x61c8864f ^ *(uint32_t *)(in_RAX + 0x60)) >>
               (0x18U - cStack_180 & 0x1f);
          uVar12 = (uint64_t)(uVar32 >> 4 & 0xfffffff0);
          iVar16 = 0;
          if ((*(uint8_t *)(lVar41 + uVar12) & 0xf) == 1) {
            iVar16 = 0xf;
          }
          if ((uint64_t)(int64_t)(int)((param_3 + 0x9b92135d) * (uVar38 | 1) + 0x6d1d4a3e) <
              (uint64_t)(~((uVar38 | 1) * 0x3f293997) + param_3)) {
            iVar16 = 0;
          }
          uVar29 = iVar16 + (uint32_t)(*(uint8_t *)(lVar41 + uVar12) - 1 & 0xf);
          *(char *)(lVar41 + uVar12) = (char)uVar29;
          *(char *)((uint64_t)uVar29 + lVar41 + uVar12) = (char)uVar32;
          *(uint32_t *)(uVar12 * 4 + (int64_t)puStack_60 + (uint64_t)uVar29 * 4) = (uint32_t)uVar40;
          uVar40 = uVar40 + 1;
        } while (uVar30 != uVar40);
        lVar33 = *(int64_t *)(in_RAX + 0x38);
        lVar18 = *(int64_t *)(in_RAX + 0x70);
      }
      uVar32 = uVar23 - 0x20;
      uVar40 = (uint64_t)uVar32;
      piVar2 = (int *)(lVar34 + uVar40);
      uVar25 = ((int)(int *)(uVar21 - 0xc19e5d2) - (int)piVar2) + 1;
      uVar29 = 8;
      if (uVar25 < 8) {
        uVar29 = uVar25;
      }
      uVar25 = 0;
      if (piVar2 <= (int *)(uVar21 - 0xc19e5d2)) {
        uVar25 = uVar29;
      }
      if (uVar32 < (uVar23 + uVar25) - 0x20) {
        uVar29 = *(uint32_t *)(in_RAX + 0x60);
        bVar10 = 0x18 - (char)*(uint32_t *)(in_RAX + 0x34);
        if (((param_3 + 0x2df3f647) * 0x40055e0f == 0x3f5f7d93) == ((uVar25 & 1) == 0)) {
          uVar40 = uVar40 + 1;
          *(uint32_t *)(in_RAX + 0x40 + (uint64_t)(uVar32 & 7) * 4) =
               (*piVar2 * -0x61c8864f ^ uVar29) >> (bVar10 & 0x1f);
        }
        if (uVar25 != 1) {
          iVar16 = (((uVar25 + (int)puVar22) - (int)uVar40) - (int)lVar34) + -0x20;
          do {
            uVar25 = (uint32_t)uVar40;
            *(uint32_t *)(in_RAX + 0x40 + (uint64_t)(uVar25 & 7) * 4) =
                 (*(int *)(lVar34 + uVar40) * -0x61c8864f ^ uVar29) >> (bVar10 & 0x1f);
            piVar2 = (int *)(lVar34 + 1 + uVar40);
            uVar40 = uVar40 + 2;
            *(uint32_t *)(in_RAX + 0x40 + (uint64_t)(uVar25 + 1 & 7) * 4) =
                 (*piVar2 * -0x61c8864f ^ uVar29) >> (bVar10 & 0x1f);
            iVar16 = iVar16 + -2;
          } while (iVar16 != 0);
        }
      }
    }
    if (uVar32 < uVar23) {
      lVar6 = *(int64_t *)(in_RAX + 8);
      uVar5 = *(uint32_t *)(in_RAX + 0x34);
      uVar30 = (uint64_t)uVar32;
      uVar40 = (uVar11 & 0xffffffff) - 1;
      while( true ) {
        if ((int64_t)
            (uint64_t)
            (((uVar38 ^ 0x38bac65) >> (bVar43 & 0x1f) |
             (uVar38 ^ 0x38bac65) << 0x20 - (bVar43 & 0x1f)) ^ 0xcdaaa10b) <
            (int64_t)
            (int)(uVar38 + 0xe8ba1ab8 >> (bVar43 & 0x1f) |
                 uVar38 + 0xe8ba1ab8 << 0x20 - (bVar43 & 0x1f))) {
          uVar32 = *(int *)(lVar6 + 8 + uVar30) * -0x61c8864f ^ *(uint32_t *)(in_RAX + 0x60);
          bVar8 = uVar40 == uVar30;
        }
        else {
          uVar29 = *(int *)(lVar6 + 8 + uVar30) * -0x61c8864f;
          uVar32 = uVar29 & *(uint32_t *)(in_RAX + 0x60);
          if ((int64_t)(int)~((uVar38 | 1) * -0x5d60ec3a) <
              (int64_t)(uint64_t)(param_3 + 0xed43c92d)) {
            uVar32 = *(uint32_t *)(in_RAX + 0x60) ^ uVar29;
          }
          bVar8 = (int64_t)(uVar30 + 1) < (int64_t)(uVar11 & 0xffffffff);
          if ((param_3 + 0x20392fdf >> (bVar9 & 0x1f) |
              param_3 + 0x20392fdf << 0x20 - (bVar9 & 0x1f)) * 0x56772bfd <
              ~(param_3 ^ 0x50e7475c) + uVar38) {
            bVar8 = uVar40 == uVar30;
          }
        }
        uVar17 = (uint64_t)((uint32_t)uVar30 & 7);
        uVar29 = *(uint32_t *)(in_RAX + 0x40 + uVar17 * 4);
        uVar12 = (uint64_t)(uVar29 >> 4 & 0xfffffff0);
        *(uint32_t *)(in_RAX + 0x40 + uVar17 * 4) = uVar32 >> (0x18U - (char)uVar5 & 0x1f);
        lVar39 = 0xf;
        if ((*(uint8_t *)(lVar33 + uVar12) & 0xf) != 1) {
          lVar39 = 0;
        }
        lVar39 = lVar39 + (uint64_t)(*(uint8_t *)(lVar33 + uVar12) - 1 & 0xf);
        *(char *)(lVar33 + uVar12) = (char)lVar39;
        *(char *)(lVar33 + uVar12 + lVar39) = (char)uVar29;
        *(uint32_t *)(lVar18 + uVar12 * 4 + lVar39 * 4) = (uint32_t)uVar30;
        if (bVar8) break;
        uVar30 = uVar30 + 1;
      }
    }
    *(uint32_t *)(in_RAX + 0x2c) = uVar23;
    uVar32 = *(uint32_t *)(in_RAX + 0x40 + (uint64_t)(uVar23 & 7) * 4);
    *(uint32_t *)(in_RAX + 0x40 + (uint64_t)(uVar23 & 7) * 4) =
         (*(int *)(lVar34 + 8 + (uVar11 & 0xffffffff)) * -0x61c8864f ^ uVar26) >>
         (0x18U - cStack_180 & 0x1f);
  }
  else {
    *(uint32_t *)(in_RAX + 0x2c) = uVar23;
    uVar32 = (uVar26 ^ uVar32) >> (0x18U - cStack_180 & 0x1f);
  }
  uVar51 = (uint8_t)(uVar32 >> 0x18);
  uVar48 = (uint8_t)(uVar32 >> 0x10);
  uVar46 = (uint8_t)(uVar32 >> 8);
  auVar45._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar51,uVar51),uVar48),CONCAT14(uVar48,uVar32)) >> 0x20);
  auVar45[3] = uVar46;
  auVar45[2] = uVar46;
  auVar45[0] = (uint8_t)uVar32;
  auVar45[1] = auVar45[0];
  auVar45._8_8_ = 0;
  uVar19 = ((uint16_t)uVar38 | 1) * 0x62ab ^ 0x6f98;
  uVar29 = 0x947fafa2U >> (bVar9 & 0x1f) | -0x6b80505e << 0x20 - (bVar9 & 0x1f);
  *(int *)(in_RAX + 0x68) = *(int *)(in_RAX + 0x68) + uVar32;
  uVar26 = uVar32 >> 4;
  if ((uint64_t)(int64_t)(int)((uVar38 ^ 0xf8c1a865) + param_3) <=
      (uint64_t)((uVar29 << (bVar43 & 0x1f) | uVar29 >> 0x20 - (bVar43 & 0x1f)) + 0xbced4f21)) {
    uVar26 = uVar32 * 4;
  }
  auVar44 = pshuflw(auVar45,auVar45,0);
  uVar11 = (uint64_t)(uVar26 & 0xffffff0);
  bVar10 = *(uint8_t *)(lVar41 + uVar11);
  lVar33 = uVar11 * 4 + (int64_t)puStack_60;
  pcVar3 = (char *)(lVar41 + uVar11);
  cVar42 = auVar44[0];
  auVar54[0] = -(*pcVar3 == cVar42);
  cVar47 = auVar44[1];
  auVar54[1] = -(pcVar3[1] == cVar47);
  cVar49 = auVar44[2];
  auVar54[2] = -(pcVar3[2] == cVar49);
  cVar52 = auVar44[3];
  auVar54[3] = -(pcVar3[3] == cVar52);
  auVar54[4] = -(pcVar3[4] == cVar42);
  auVar54[5] = -(pcVar3[5] == cVar47);
  auVar54[6] = -(pcVar3[6] == cVar49);
  auVar54[7] = -(pcVar3[7] == cVar52);
  auVar54[8] = -(pcVar3[8] == cVar42);
  auVar54[9] = -(pcVar3[9] == cVar47);
  auVar54[10] = -(pcVar3[10] == cVar49);
  auVar54[0xb] = -(pcVar3[0xb] == cVar52);
  auVar54[0xc] = -(pcVar3[0xc] == cVar42);
  auVar54[0xd] = -(pcVar3[0xd] == cVar47);
  auVar54[0xe] = -(pcVar3[0xe] == cVar49);
  auVar54[0xf] = -(pcVar3[0xf] == cVar52);
  uVar7 = (uint16_t)(SUB161(auVar54 >> 7,0) & 1) | (uint16_t)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
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
          (uint16_t)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar54[0xf] >> 7) << 0xf;
  puStack_78 = (uint64_t *)in_RAX;
  if ((uint16_t)((uVar19 << 2 | uVar19 >> 0xe) ^ uVar7) != 0xffff) {
    uVar40 = (uint64_t)(uint16_t)(uVar7 >> (bVar10 & 0xf) | uVar7 << 0x10 - (bVar10 & 0xf));
    lVar18 = 0;
    do {
      iVar16 = 0;
      for (uVar30 = uVar40; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x8000000000000000) {
        iVar16 = iVar16 + 1;
      }
      uVar26 = iVar16 + (uint32_t)bVar10 & 0xf;
      if (uVar26 != 0) {
        uVar26 = *(uint32_t *)(lVar33 + (uint64_t)uVar26 * 4);
        if (uVar26 < uVar15) goto LAB_7fffa55f80d4;
        iVar36 = iVar36 + -1;
        auStack_178[lVar18] = uVar26;
        lVar18 = lVar18 + 1;
      }
      uVar40 = uVar40 & uVar40 - 1;
      if ((uVar40 == 0) || (iVar36 == 0)) goto LAB_7fffa55f80d4;
    } while( true );
  }
  lVar18 = 0;
LAB_7fffa55f80d4:
  pbVar4 = (uint8_t *)(lVar27 + uVar14);
  lVar27 = 0xf;
  if ((bVar10 & 0xf) != 1) {
    lVar27 = 0;
  }
  lVar27 = lVar27 + (uint64_t)(bVar10 - 1 & 0xf);
  *(uint8_t *)(lVar41 + uVar11) = (char)lVar27;
  ((uint8_t *)(lVar41 + uVar11))[lVar27] = auVar45[0];
  iVar16 = *(int *)((int64_t)puStack_78 + 0x2c);
  *(int *)((int64_t)puStack_78 + 0x2c) = iVar16 + 1;
  *(int *)(lVar33 + lVar27 * 4) = iVar16;
  if (lVar18 == 0) {
    uVar11 = 3;
  }
  else {
    puVar1 = (uint64_t *)((int64_t)in_R10 - 7);
    puStack_78 = (uint64_t *)((int64_t)in_R10 + -1);
    puVar31 = (uint64_t *)(uVar21 - 0xc19e5cb);
    lVar27 = 0;
    puStack_60 = (uint64_t *)CONCAT44(puStack_60._4_4_,uVar23 + 3);
    uVar40 = 3;
    do {
      uVar26 = auStack_178[lVar27];
      puVar13 = (uint64_t *)(lVar34 + (uint64_t)uVar26);
      if (*(int *)((uVar40 - 3) + (int64_t)puVar13) == *(int *)((uVar21 - 0xc19e5d6) + uVar40)) {
        puVar28 = puVar22;
        if (puVar22 < puVar1) {
          if (*puVar13 == *puVar22) {
            puVar13 = (uint64_t *)(lVar34 + 8 + (uint64_t)uVar26);
            puVar37 = puVar31;
            puVar28 = puVar31;
            if (puVar31 < puVar1) {
LAB_7fffa55f8210:
              if (*puVar13 == *puVar28) goto code_r0x7fffa55f821f;
              uVar15 = 0;
              for (uVar11 = *puVar13 ^ *puVar28; (uVar11 & 1) == 0;
                  uVar11 = uVar11 >> 1 | 0x8000000000000000) {
                uVar15 = uVar15 + 1;
              }
              lVar41 = (uint64_t)(uVar15 >> 3) + (int64_t)puVar37;
              uVar11 = lVar41 - (int64_t)puVar22;
              if (((uVar38 ^ 0x8a2d16ee) + 0xba19efb ^ param_3) <
                  ((uVar38 ^ 0x2a992c60) >> (bVar43 & 0x1f) |
                  (uVar38 ^ 0x2a992c60) << 0x20 - (bVar43 & 0x1f)) + 0x8001fc28) {
                uVar11 = (int64_t)puVar22 * lVar41;
              }
              goto joined_r0x7fffa55f8323;
            }
            goto joined_r0x7fffa55f8242;
          }
          uVar15 = 0;
          for (uVar11 = *puVar13 ^ *puVar22; (uVar11 & 1) == 0;
              uVar11 = uVar11 >> 1 | 0x8000000000000000) {
            uVar15 = uVar15 + 1;
          }
          uVar11 = (uint64_t)(uVar15 >> 3);
        }
        else {
joined_r0x7fffa55f8242:
          if ((puVar28 < (uint64_t *)((int64_t)in_R10 - 3U)) && ((int)*puVar13 == (int)*puVar28))
          {
            puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
            puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
          }
          if ((puVar28 < (uint64_t *)((int64_t)in_R10 + -1)) &&
             ((short)*puVar13 == (short)*puVar28)) {
            puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
            puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
          }
          if (puVar28 < in_R10) {
            puVar28 = (uint64_t *)
                      ((int64_t)puVar28 + (uint64_t)((char)*puVar13 == (char)*puVar28));
          }
          uVar11 = (int64_t)puVar28 - (int64_t)puVar22;
        }
joined_r0x7fffa55f8323:
        if (uVar40 < uVar11) {
          *puVar20 = (uint64_t)((uVar23 + 3) - uVar26);
          uVar40 = uVar11;
          if ((uint64_t *)((int64_t)puVar22 + uVar11) == in_R10) break;
        }
      }
      uVar11 = uVar40;
      lVar27 = lVar27 + 1;
      uVar40 = uVar11;
    } while (lVar27 != lVar18);
  }
  uStack_17c = (uint8_t)uVar24;
  auVar45 = pshuflw(ZEXT216(CONCAT11(uStack_17c,uStack_17c)),
                    ZEXT216(CONCAT11(uStack_17c,uStack_17c)),0);
  bVar43 = auVar45[0];
  auVar44[0] = -(*pbVar4 == bVar43);
  bVar10 = auVar45[1];
  auVar44[1] = -(pbVar4[1] == bVar10);
  bVar50 = auVar45[2];
  auVar44[2] = -(pbVar4[2] == bVar50);
  bVar53 = auVar45[3];
  auVar44[3] = -(pbVar4[3] == bVar53);
  auVar44[4] = -(pbVar4[4] == bVar43);
  auVar44[5] = -(pbVar4[5] == bVar10);
  auVar44[6] = -(pbVar4[6] == bVar50);
  auVar44[7] = -(pbVar4[7] == bVar53);
  auVar44[8] = -(pbVar4[8] == bVar43);
  auVar44[9] = -(pbVar4[9] == bVar10);
  auVar44[10] = -(pbVar4[10] == bVar50);
  auVar44[0xb] = -(pbVar4[0xb] == bVar53);
  auVar44[0xc] = -(pbVar4[0xc] == bVar43);
  auVar44[0xd] = -(pbVar4[0xd] == bVar10);
  auVar44[0xe] = -(pbVar4[0xe] == bVar50);
  auVar44[0xf] = -(pbVar4[0xf] == bVar53);
  uVar19 = (uint16_t)(SUB161(auVar44 >> 7,0) & 1) | (uint16_t)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
  if ((uVar19 == 0) || (iVar36 == 0)) {
    return;
  }
  puStack_60 = (uint64_t *)(lVar34 + uStack_58);
  bVar43 = *pbVar4;
  pcVar3 = (char *)*puStack_48;
  lVar27 = puStack_48[1];
  uVar26 = *(uint32_t *)(puStack_48 + 3);
  puStack_78 = (uint64_t *)pcVar3;
  bVar10 = bVar43 & 0xf;
  uVar40 = (uint64_t)(uint16_t)(uVar19 >> bVar10 | uVar19 << 0x10 - bVar10);
  lVar41 = 0;
  do {
    iVar16 = 0;
    for (uVar30 = uVar40; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x8000000000000000) {
      iVar16 = iVar16 + 1;
    }
    uVar32 = (param_3 + 0x45de4150) * 0x7ffe026d;
    uVar24 = iVar16 + (uint32_t)bVar43 & 0xf;
    uVar15 = *(uint32_t *)(lVar35 + uVar14 * 4 + (uint64_t)uVar24 * 4);
    if (((uVar32 >> (bVar9 & 0x1f) | uVar32 << 0x20 - (bVar9 & 0x1f)) == 0xbc79645e) ||
       (uVar24 != 0)) {
      if (uVar15 < uVar26) {
LAB_7fffa55f8436:
        if (lVar41 == 0) {
          return;
        }
        puStack_48 = (uint64_t *)((int64_t)in_R10 - 1U);
        puVar1 = (uint64_t *)(uVar21 - 0xc19e5cf);
        iVar36 = (int)*puVar22;
        uVar26 = uVar23 + 3 + ((int)pcVar3 - (int)lVar27);
        lVar34 = uStack_58 + lVar34 + 8;
        lVar35 = 0;
        do {
          uVar14 = (uint64_t)auStack_178[lVar35];
          if (*(int *)(lVar27 + uVar14) == iVar36) {
            puVar13 = (uint64_t *)(lVar27 + uVar14 + 4);
            puVar31 = (uint64_t *)(((int64_t)puStack_78 - (int64_t)puVar13) + (int64_t)puVar1);
            if (in_R10 <= puVar31) {
              puVar31 = in_R10;
            }
            puVar28 = puVar1;
            puVar37 = puVar13;
            if (puVar1 < (uint64_t *)((int64_t)puVar31 - 7U)) {
              if (*puVar13 == *puVar1) {
                lVar33 = lVar27 + 0xc + uVar14;
                lVar18 = 0;
                do {
                  puVar28 = (uint64_t *)((uVar21 - 0xc19e5c7) + lVar18);
                  if ((uint64_t *)((int64_t)puVar31 - 7U) <= puVar28) {
                    puVar37 = (uint64_t *)(lVar33 + lVar18);
                    goto LAB_7fffa55f855c;
                  }
                  uVar14 = *(uint64_t *)(lVar33 + lVar18);
                  lVar18 = lVar18 + 8;
                } while (uVar14 == *puVar28);
                uVar15 = 0;
                for (uVar14 = *puVar28 ^ uVar14; (uVar14 & 1) == 0;
                    uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                  uVar15 = uVar15 + 1;
                }
                uVar14 = (uint64_t)(uVar15 >> 3) + lVar18;
              }
              else {
                uVar15 = 0;
                for (uVar14 = *puVar1 ^ *puVar13; (uVar14 & 1) == 0;
                    uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                  uVar15 = uVar15 + 1;
                }
                uVar14 = (uint64_t)(uVar15 >> 3);
              }
            }
            else {
LAB_7fffa55f855c:
              if ((puVar28 < (uint64_t *)((int64_t)puVar31 - 3U)) &&
                 ((int)*puVar37 == (int)*puVar28)) {
                puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
              }
              if ((puVar28 < (uint64_t *)((int64_t)puVar31 - 1U)) &&
                 ((short)*puVar37 == (short)*puVar28)) {
                puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              }
              if (puVar28 < puVar31) {
                puVar28 = (uint64_t *)
                          ((int64_t)puVar28 + (uint64_t)((char)*puVar37 == (char)*puVar28));
              }
              uVar14 = (int64_t)puVar28 - (int64_t)puVar1;
            }
            if ((uint64_t *)((int64_t)puVar13 + uVar14) == puStack_78) {
              puVar31 = (uint64_t *)(uVar14 + (int64_t)puVar1);
              puVar13 = puVar31;
              puVar28 = puStack_60;
              if (puVar31 < (uint64_t *)((int64_t)in_R10 + -7)) {
                if (*puStack_60 == *puVar31) {
                  lVar33 = 0;
                  do {
                    puVar13 = (uint64_t *)((uVar21 - 0xc19e5c7) + uVar14 + lVar33);
                    if ((uint64_t *)((int64_t)in_R10 + -7) <= puVar13) {
                      puVar28 = (uint64_t *)(lVar33 + lVar34);
                      goto LAB_7fffa55f8632;
                    }
                    uVar40 = *(uint64_t *)(lVar34 + lVar33);
                    lVar33 = lVar33 + 8;
                  } while (uVar40 == *puVar13);
                  uVar15 = 0;
                  for (uVar40 = uVar40 ^ *puVar13; (uVar40 & 1) == 0;
                      uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar40 = (uint64_t)(uVar15 >> 3) + lVar33;
                }
                else {
                  uVar15 = 0;
                  for (uVar40 = *puVar31 ^ *puStack_60; (uVar40 & 1) == 0;
                      uVar40 = uVar40 >> 1 | 0x8000000000000000) {
                    uVar15 = uVar15 + 1;
                  }
                  uVar40 = (uint64_t)(uVar15 >> 3);
                }
              }
              else {
LAB_7fffa55f8632:
                if ((puVar13 < (uint64_t *)((int64_t)in_R10 - 3U)) &&
                   ((int)*puVar28 == (int)*puVar13)) {
                  puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
                  puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
                }
                if ((puVar13 < (uint64_t *)((int64_t)in_R10 - 1U)) &&
                   ((short)*puVar28 == (short)*puVar13)) {
                  puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
                  puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
                }
                if (puVar13 < in_R10) {
                  puVar13 = (uint64_t *)
                            ((int64_t)puVar13 + (uint64_t)((char)*puVar28 == (char)*puVar13));
                }
                uVar40 = (int64_t)puVar13 - (int64_t)puVar31;
              }
              uVar14 = uVar14 + uVar40;
            }
            uVar14 = uVar14 + 4;
            if (uVar11 < uVar14) {
              uVar23 = auStack_178[lVar35] + (int)uStack_58;
              uVar24 = (0x3b245a56 - uVar38) * (param_3 | 1);
              uVar15 = uVar23 | uVar26;
              if ((uint64_t)(uVar24 * 0x800000 | uVar24 >> 9) <=
                  (uint64_t)
                  (int64_t)
                  (int)~((0x7974a2bb << (bVar9 & 0x1f) | 0x7974a2bbU >> 0x20 - (bVar9 & 0x1f)) +
                        param_3)) {
                uVar15 = uVar26 - uVar23;
              }
              *puVar20 = (uint64_t)uVar15;
              if ((uint64_t *)((int64_t)puVar22 + uVar14) == in_R10) {
                return;
              }
              iVar36 = (int)*puVar22;
              uVar11 = uVar14;
            }
          }
          lVar35 = lVar35 + 1;
          if (lVar35 == lVar41) {
            return;
          }
        } while( true );
      }
      iVar36 = iVar36 + -1;
      auStack_178[lVar41] = uVar15;
      lVar41 = lVar41 + 1;
    }
    uVar40 = uVar40 & uVar40 - 1;
    if ((uVar40 == 0) || (iVar36 == 0)) goto LAB_7fffa55f8436;
  } while( true );
code_r0x7fffa55f821f:
  puVar28 = puVar28 + 1;
  puVar13 = puVar13 + 1;
  puVar37 = puVar37 + 1;
  if (puVar1 <= puVar28) goto joined_r0x7fffa55f8242;
  goto LAB_7fffa55f8210;
}


// ============================================================================
// Function : FUN_7fffa55f8750  |  RVA: 0xe88750  |  Size: 1 bytes
// Callers  : FUN_7fffa4ab28e0@0x3428e0, FUN_7fffa565b84c@0xeeb84c
// Callees  : none
// ============================================================================
void FUN_7fffa55f8750(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa55f8c50  |  RVA: 0xe88c50  |  Size: 108 bytes
// Callers  : FUN_7fffa507a38c@0x90a38c
// Callees  : FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
void FUN_7fffa55f8c50(int64_t *param_1)

{
  if (param_1 != (int64_t *)0x0) {
    if ((uint8_t *)*param_1 != PTR_DAT_7fffa4780910) {
      FUN_7fffa52d8dd0();
    }
    if ((uint8_t *)param_1[1] != PTR_DAT_7fffa4780918) {
      FUN_7fffa52d8dd0();
    }
    if ((uint8_t *)param_1[2] != PTR_DAT_7fffa4780920) {
      FUN_7fffa52d8dd0();
    }
    if ((uint8_t *)param_1[0xb] != PTR_DAT_7fffa4780968) {
      FUN_7fffa52d8dd0();
    }
    if ((uint8_t *)param_1[0xc] != PTR_DAT_7fffa4780970) {
      FUN_7fffa52d8dd0();
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa55f8cc0  |  RVA: 0xe88cc0  |  Size: 3282 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55f8e36) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_7fffa55f8cc0(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  uint8_t bVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int iVar14;
  uint32_t uVar15;
  uint16_t uVar16;
  bool bVar17;
  uint16_t uVar18;
  
  bRam00007fffa47bbb03 = 0;
  auRam00007fffa47bbb26 = (uint8_t  [16])0x0;
  auRam00007fffa47bbb16 = (uint8_t  [16])0x0;
  auRam00007fffa47bbb06 = (uint8_t  [16])0x0;
  uRam00007fffa47bbb43 = 0;
  uVar1 = rdtsc();
  lVar11 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
           CONCAT44(0x7fff,(int)uVar1)) * 0x535bb35b36bf98e + 0xb;
  lVar9 = 3;
  while( true ) {
    lVar11 = lVar11 * 0x535bb35b36bf98e + 0xb;
    lVar12 = lVar11 * 0x535bb35b36bf98e + 0xb;
    lVar13 = lVar12 * 0x535bb35b36bf98e + 0xb;
    *(char *)(lVar9 + 0x7fffa47bbaf5) = (char)((uint64_t)lVar11 >> 0x20);
    *(char *)(lVar9 + 0x7fffa47bbaf7) = (char)((uint64_t)lVar13 >> 0x20);
    *(char *)(lVar9 + 0x7fffa47bbaf6) = (char)((uint64_t)lVar12 >> 0x20);
    if (lVar9 == 0x53) break;
    lVar11 = lVar13 * 0x535bb35b36bf98e + 0xb;
    *(char *)(lVar9 + 0x7fffa47bbaf8) = (char)((uint64_t)lVar11 >> 0x20);
    lVar9 = lVar9 + 4;
  }
  uVar10 = (uint64_t)((uint32_t)bRam00007fffa47bbb03 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)(auRam00007fffa47bbb06 + (uVar10 >> 0x20) * 8) = uRam00007fffa47bbb43;
  bRam00007fffa47bbb03 = (uint8_t)(uVar10 >> 0x20);
  bRam00007fffa4785b1a = '\0';
  auRam00007fffa4785b39 = (uint8_t  [16])0x0;
  auRam00007fffa4785b29 = (uint8_t  [16])0x0;
  _uRam00007fffa4785b49 = 0;
  uVar10 = rdtsc();
  lVar9 = 0;
  lVar11 = (uVar10 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar10)) * 0xb6d981be3e3ff71;
  do {
    *(char *)(lVar9 + 0x7fffa4785b11) = (char)((uint64_t)(lVar11 * -0x5274ed3dea835c3f) >> 0x20);
    *(char *)(lVar9 + 0x7fffa4785b0f) = (char)((uint64_t)(lVar11 * 0xe767484fe1) >> 0x20);
    *(char *)(lVar9 + 0x7fffa4785b10) = (char)((uint64_t)(lVar11 * 0xb3f5ff6151) >> 0x20);
    *(char *)(lVar9 + 0x7fffa4785b0e) = (char)((uint64_t)(lVar11 * 0x1be3e3ff71) >> 0x20);
    bVar17 = lVar9 != 0x48;
    lVar9 = lVar9 + 4;
    lVar11 = lVar11 * -0x5274ed3dea835c3f;
  } while (bVar17);
  uVar10 = (uint64_t)((uint8_t)(bRam00007fffa4785b1a + 1) & 3);
  bVar8 = bRam00007fffa4785b4b;
  bVar7 = bRam00007fffa4785b50;
  bVar3 = (uint8_t)uRam00007fffa4785b49;
  bVar6 = bRam00007fffa4785b4e;
  bVar5 = bRam00007fffa4785b4d;
  auRam00007fffa4785b29[uVar10 * 8 + 6] = bRam00007fffa4785b4f << 5 | bRam00007fffa4785b4f >> 3;
  auRam00007fffa4785b29[uVar10 * 8] = bVar3 << 5 | bVar3 >> 3;
  bVar3 = uRam00007fffa4785b49._1_1_;
  auRam00007fffa4785b29[uVar10 * 8 + 5] = bVar6 << 5 | bVar6 >> 3;
  auRam00007fffa4785b29[uVar10 * 8 + 4] = bVar5 << 5 | bVar5 >> 3;
  bVar5 = bRam00007fffa4785b4c;
  auRam00007fffa4785b29[uVar10 * 8 + 7] = bVar7 << 5 | bVar7 >> 3;
  auRam00007fffa4785b29[uVar10 * 8 + 2] = bVar8 << 5 | bVar8 >> 3;
  auRam00007fffa4785b29[uVar10 * 8 + 1] = bVar3 << 5 | bVar3 >> 3;
  auRam00007fffa4785b29[uVar10 * 8 + 3] = bVar5 << 5 | bVar5 >> 3;
  bRam00007fffa4785b1a = bRam00007fffa4785b1a + 1 & 3;
  uRam00007fffa47bf358 = 0;
  auRam00007fffa47bf370 = SUB1612((uint8_t  [16])0x0,4);
  auRam00007fffa47bf360 = SUB1612((uint8_t  [16])0x0,0);
  uRam00007fffa47bf36c = 0;
  uRam00007fffa47bf382 = 0;
  uVar10 = rdtsc();
  lVar9 = (uVar10 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar10)) * 0x660dcddba984d06;
  uVar10 = 0xffffffffffffffff;
  lVar11 = 0;
  while( true ) {
    lVar9 = lVar9 * 0x660dcddba984d06 + 0x660dcddba984d06;
    *(char *)(lVar11 + 0x7fffa47bf355) = (char)((uint64_t)lVar9 >> 0x20);
    if ((uVar10 << 0x25 | uVar10 >> 0x1b) == 0xfffff9ffffffffff) break;
    lVar9 = lVar9 * 0x660dcddba984d06 + 0x660dcddba984d06;
    *(char *)(lVar11 + 0x7fffa47bf356) = (char)((uint64_t)lVar9 >> 0x20);
    lVar9 = lVar9 * 0x660dcddba984d06 + 0x660dcddba984d06;
    *(char *)(lVar11 + 0x7fffa47bf357) = (char)((uint64_t)lVar9 >> 0x20);
    lVar9 = lVar9 * 0x660dcddba984d06 + 0x660dcddba984d06;
    (&uRam00007fffa47bf358)[lVar11] = (char)((uint64_t)lVar9 >> 0x20);
    lVar11 = lVar11 + 4;
    uVar10 = uVar10 - 4;
  }
  uVar15 = (uint32_t)lVar11;
  uVar4 = (uint16_t)lVar11;
  bVar3 = (uint8_t)lVar11;
  uVar10 = (uint64_t)
           ((uint32_t)*(uint8_t *)((int64_t)(short)((uVar4 ^ 0xfda8) * -0x531b) + 0x7fffa47bfa60) *
            0x24924925 + 0x24924925) * 7;
  iVar14 = uVar15 + 1;
  lVar9 = (int64_t)(short)(uVar4 + 0x788f ^ 0xd358);
  *(uint32_t *)((int64_t)(int)((uVar15 ^ 0x23e406e0) + 0xdc1b64a9 ^ 0x4c) + 0x7fffa47c882b +
           (uVar10 >> 0x20) * 4) =
       ~*(uint32_t *)((int64_t)(short)(((uVar4 ^ 0x51ca) << 0xc | (uVar4 ^ 0x51ca) >> 4) + 0x92a) +
                 0x7fffa47c4539);
  *(char *)((int64_t)(short)(-0xbb1 << (bVar3 & 0xf) | 0xf44fU >> 0x10 - (bVar3 & 0xf)) +
           0x7fffa47bff09) = (char)(uVar10 >> 0x20);
  bVar8 = ~bVar3 * 't' + 0x34;
  *(uint8_t *)((int64_t)(short)((uVar4 ^ 0xd755) * 0x4d) + 0x7fffa4789b64) =
       bVar8 * '\x10' | bVar8 >> 4;
  *(uint32_t *)(lVar9 + 0x7fffa478b8ef) = 0;
  *(uint64_t *)(lVar9 + 0x7fffa478b8e7) = 0;
  *(uint32_t *)((int64_t)(iVar14 * 0x3eb19e53) + 0x7fffa47916f8) =
       (uint32_t)(uint16_t)((0x256fU >> (bVar3 & 0xf) | 0x256f << 0x10 - (bVar3 & 0xf)) ^ 0x256f);
  lVar9 = rdtsc();
  lVar9 = lVar9 * 0x928b8da25607cbf;
  uVar10 = 0;
  while( true ) {
    *(char *)(uVar10 + (int64_t)(short)(0xcf0bU >> (bVar3 & 0xf) | -0x30f5 << 0x10 - (bVar3 & 0xf))
                       + 0x7fffa47895b3) = (char)((uint64_t)(lVar9 * 0xb902099681) >> 0x20);
    *(char *)(uVar10 + ((int64_t)(short)((short)iVar14 * 0x6418 + -0x7507) ^ 0x92U) +
                       0x7fffa478b1ba) = (char)((uint64_t)(lVar9 * 0xda25607cbf) >> 0x20);
    if ((uVar10 << 0x28 | uVar10 >> 0x18) == 0x200000000000) break;
    uVar2 = (uint64_t)lVar9 >> 0x20;
    lVar11 = lVar9 * 0x383f6dc63f;
    lVar9 = lVar9 * -0xd80e7292ff;
    bVar8 = (uint8_t)((uint64_t)lVar11 >> 0x20);
    if ((0xe21fbcacU >> (bVar3 & 0x1f) | -0x1de04354 << 0x20 - (bVar3 & 0x1f)) * 0x4d <=
        (0x54c052df << (bVar3 & 0x1f) | 0x54c052dfU >> 0x20 - (bVar3 & 0x1f))) {
      bVar8 = (uint8_t)uVar2 | 0x38;
    }
    *(uint8_t *)(uVar10 + (int64_t)(int)((0x27c00021 - uVar15) * 0x1000 | 0x27c00021 - uVar15 >> 0x14)
                       + 0x7fffa4795244) = bVar8;
    *(char *)(uVar10 + (int64_t)(int)~((uVar15 + 0x1d9c5aa5) * 0x5e2ae197) + 0x7fffa4792d64) =
         (char)((uint64_t)lVar9 >> 0x20);
    uVar10 = uVar10 + 4;
  }
  uVar18 = (short)uVar10 + 0xf63;
  uVar16 = (short)uVar10 + 0xb34d;
  uVar2 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)~(iVar14 * 0x6db6de1b) + 0x7fffa478e7f1) * 0x55555556 +
          0x55555556) * 3;
  *(uint32_t *)((int64_t)(short)((uVar16 * 0x200 | uVar16 >> 7) - uVar4) + 0x7fffa4788998 +
           (uVar2 >> 0x20) * 4) =
       ~*(uint32_t *)((int64_t)(int)((-0xa9b2aee - uVar15) * 0x3fffff71 + 0x93520f33 ^ (uint32_t)uVar10) +
                 0x7fffa4794006);
  *(char *)((int64_t)(short)~((uVar4 + 1) * ((uVar18 ^ 0x4c) << 3 | uVar18 >> 0xd)) +
           0x7fffa47899be) = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa55f99a0  |  RVA: 0xe899a0  |  Size: 1 bytes
// Callers  : FUN_7fffa5453ab0@0xce3ab0
// Callees  : none
// ============================================================================
void FUN_7fffa55f99a0(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa55f99b0  |  RVA: 0xe899b0  |  Size: 6408 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Type propagation algorithm not settling */

void FUN_7fffa55f99b0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                     uint64_t *param_5,uint64_t param_6)

{
  char *pcVar1;
  uint32_t uVar2;
  int64_t lVar3;
  uint16_t uVar4;
  uint8_t uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint8_t bVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint8_t *pbVar16;
  uint64_t *puVar17;
  int *piVar18;
  uint32_t uVar19;
  int64_t lVar20;
  bool bVar21;
  uint32_t uVar22;
  int64_t lVar23;
  int64_t lVar24;
  int iVar25;
  int iVar26;
  uint32_t uVar27;
  uint64_t uVar28;
  uint64_t *puVar29;
  uint8_t *pbVar30;
  uint32_t uVar31;
  uint64_t in_R11;
  int64_t lVar32;
  uint64_t uVar33;
  uint64_t *puVar34;
  uint64_t uVar35;
  uint8_t *pbVar36;
  uint64_t uVar37;
  uint64_t *puVar38;
  char cVar39;
  uint8_t uVar42;
  char cVar43;
  char cVar44;
  uint8_t uVar45;
  char cVar46;
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint32_t uVar47;
  uint8_t auVar48 [16];
  uint32_t auStack_1d8 [68];
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int iStack_b8;
  uint32_t uStack_b4;
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  uint64_t uStack_98;
  int64_t lStack_90;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t *puStack_68;
  int64_t lStack_58;
  uint64_t *puStack_50;
  uint64_t uStack_48;
  
  uVar31 = (uint32_t)in_R11;
  puStack_50 = param_1;
  uVar28 = param_6 << 0xe | param_6 >> 0x32;
  param_4 = (param_4 << 0x18 | param_4 >> 0x28) ^ (param_4 << 0x39 | param_4 >> 7) ^ param_4;
  bVar12 = (uint8_t)in_R11 & 0x1f;
  param_4 = param_4 ^ (param_4 << 0x32 | param_4 >> 0xe) ^ (param_4 << 0x30 | param_4 >> 0x10);
  param_4 = (param_4 << 0x24 | param_4 >> 0x1c) ^ (param_4 << 0x20 | param_4 >> 0x20) ^ param_4;
  lVar32 = ((param_4 << 0x38 | param_4 >> 8) ^ 0x6cd57e50) +
           (int64_t)(int)(0x43017e4f << bVar12 | 0x43017e4fU >> 0x20 - bVar12);
  uVar19 = 1 << (*(uint8_t *)(lVar32 + 0x100) & 0x1f);
  uVar35 = *param_5;
  uStack_98 = uVar35 * -0x30e4432340650000 >>
              (0x42U - *(char *)(*(uint64_t **)(lVar32 + 0xf8) + 0x21) & 0x3f);
  lStack_90 = *(int64_t *)(lVar32 + 8);
  uStack_c8 = (int64_t)param_5 - lStack_90;
  uVar27 = *(uint32_t *)(lVar32 + 0x1c);
  uVar22 = (uint32_t)uStack_c8;
  uVar47 = uVar22 - uVar19;
  if (uVar22 - uVar27 <= uVar19) {
    uVar47 = uVar27;
  }
  if (*(int *)(lVar32 + 0x28) != 0) {
    uVar47 = uVar27;
  }
  puStack_68 = (uint64_t *)(uint64_t)uVar47;
  uVar37 = uVar28 ^ param_6;
  if (~(uVar31 + 0x275b5be2) < (uVar31 ^ 0x2a0bf547)) {
    uVar37 = uVar28 | param_6;
  }
  uStack_c0 = *(uint64_t *)(lVar32 + 0x60);
  uVar2 = *(uint32_t *)(lVar32 + 0x34);
  puStack_a8 = *(uint64_t **)(lVar32 + 0xf8);
  lVar24 = *(int64_t *)(lVar32 + 0x38);
  puStack_a0 = (uint64_t *)((uVar37 ^ (param_6 << 0x2e | param_6 >> 0x12)) - 0xdb47c4ee);
  uVar27 = *(uint32_t *)(lVar32 + 0x10c);
  uVar47 = 4;
  if (uVar27 < 4) {
    uVar47 = uVar27;
  }
  iVar25 = 1 << ((uint8_t)uVar47 & 0x1f);
  iVar6 = 0;
  if (4 < uVar27) {
    iVar6 = 1 << ((char)uVar27 - 4U & 0x1f);
  }
  uStack_78 = (uint64_t)*(uint32_t *)(lVar32 + 0x18);
  lVar14 = *(int64_t *)(lVar32 + 0x70);
  _iStack_b8 = CONCAT44(uStack_b4,iVar6);
  cVar39 = (char)uVar2;
  if (*(int *)(lVar32 + 300) != 0) {
    *(uint32_t *)(lVar32 + 0x2c) = uVar22;
    uVar35 = (uStack_c0 ^ uVar35 * -0x30e4432340650000) >> (0x38U - cVar39 & 0x3f);
    goto LAB_7fffa55fa1aa;
  }
  uVar27 = *(uint32_t *)(lVar32 + 0x2c);
  uVar35 = (uint64_t)uVar27;
  lVar15 = lVar24;
  lVar20 = lVar14;
  if (uVar22 - uVar27 < 0x181) {
joined_r0x7fffa55f9dcc:
    uStack_70._4_4_ = (uint32_t)((uint64_t)uStack_70 >> 0x20);
  }
  else {
    if (uVar27 < 0xffffffa0) {
      uVar28 = uVar35 + 0x60;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
      do {
        bVar12 = (uint8_t)in_R11 & 0x1f;
        uVar37 = (uint64_t)((uint32_t)uVar35 & 7);
        if (0xc6d04b54 - uVar31 < (0x784a8464U >> bVar12 | 0x784a8464 << 0x20 - bVar12) + 0xa814d514
           ) {
          uVar27 = *(uint32_t *)(lVar32 + 0x40 + uVar37 * 4);
          uVar13 = *(uint64_t *)(lStack_90 + 8 + uVar35);
          uVar8 = uVar13 | 0xcf1bbcdcbf9b0000;
          if ((uVar31 | 1) * 0x2a3ae720 >> 3 != 0xb8ffd0d8) {
            uVar8 = uVar13 * -0x30e4432340650000;
          }
          *(int *)(lVar32 + 0x40 + uVar37 * 4) =
               (int)((uVar8 ^ *(uint64_t *)(lVar32 + 0x60)) >> (0x38U - cVar39 & 0x3f));
        }
        else {
          uVar27 = *(uint32_t *)(lVar32 + 0x40 + uVar37 * 4);
          *(int *)(lVar32 + 0x40 + uVar37 * 4) =
               (int)((*(int64_t *)(lStack_90 + 8 + uVar35) * -0x30e4432340650000 ^
                     *(uint64_t *)(lVar32 + 0x60)) >> (0x38U - cVar39 & 0x3f));
        }
        uVar37 = (uint64_t)(uVar27 >> 4 & 0xfffffff0);
        iVar6 = 0xf;
        if ((*(uint8_t *)(lVar24 + uVar37) & 0xf) != 1) {
          iVar6 = 0;
        }
        uVar47 = iVar6 + (uint32_t)(*(uint8_t *)(lVar24 + uVar37) - 1 & 0xf);
        *(char *)(lVar24 + uVar37) = (char)uVar47;
        *(char *)((uint64_t)uVar47 + uVar37 + lVar24) = (char)uVar27;
        *(uint32_t *)(uVar37 * 4 + lVar14 + (uint64_t)uVar47 * 4) = (uint32_t)uVar35;
        uVar35 = uVar35 + 1;
      } while (uVar28 != uVar35);
      lVar15 = *(int64_t *)(lVar32 + 0x38);
      lVar20 = *(int64_t *)(lVar32 + 0x70);
    }
    uVar27 = uVar22 - 0x20;
    uVar35 = (uint64_t)uVar27;
    pbVar30 = (uint8_t *)(lStack_90 + uVar35);
    uVar19 = ((int)(uint8_t *)((int64_t)param_5 + 1U) - (int)pbVar30) + 1;
    uVar47 = 8;
    if (uVar19 < 8) {
      uVar47 = uVar19;
    }
    uVar19 = 0;
    if (pbVar30 <= (uint8_t *)((int64_t)param_5 + 1U)) {
      uVar19 = uVar47;
    }
    if (uVar27 < (uVar22 + uVar19) - 0x20) {
      uVar28 = *(uint64_t *)(lVar32 + 0x60);
      bVar12 = 0x38 - (char)*(uint32_t *)(lVar32 + 0x34);
      if ((uVar19 & 1) != 0) {
        uVar35 = uVar35 + 1;
        *(int *)(lVar32 + 0x40 + (uint64_t)(uVar27 & 7) * 4) =
             (int)((*(int64_t *)pbVar30 * -0x30e4432340650000 ^ uVar28) >> (bVar12 & 0x3f));
      }
      if (uVar19 != 1) {
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
        iVar6 = (((uVar19 + (int)param_5) - (int)uVar35) - (int)lStack_90) + -0x20;
        do {
          uVar13 = *(int64_t *)(lStack_90 + uVar35) * -0x30e4432340650000;
          uVar37 = uVar13 ^ uVar28;
          if ((0x1cb06b06 - uVar31) * -0x677a649f != 0x4c1029ca) {
            uVar37 = uVar28 | uVar13;
          }
          *(int *)(lVar32 + 0x40 + (uint64_t)((uint32_t)uVar35 & 7) * 4) =
               (int)(uVar37 >> (bVar12 & 0x3f));
          *(int *)(lVar32 + 0x40 + (uint64_t)((uint32_t)uVar35 + 1 & 7) * 4) =
               (int)((*(int64_t *)(lStack_90 + 1 + uVar35) * -0x30e4432340650000 ^ uVar28) >>
                    (bVar12 & 0x3f));
          uVar35 = uVar35 + 2;
          iVar6 = iVar6 + -2;
        } while (iVar6 != 0);
        goto joined_r0x7fffa55f9dcc;
      }
    }
  }
  if (uVar27 < uVar22) {
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
    lVar3 = *(int64_t *)(lVar32 + 8);
    uVar2 = *(uint32_t *)(lVar32 + 0x34);
    uVar35 = (uint64_t)uVar27;
    while( true ) {
      uVar28 = (uint64_t)((uint32_t)uVar35 & 7);
      uVar27 = *(uint32_t *)(lVar32 + 0x40 + uVar28 * 4);
      *(int *)(lVar32 + 0x40 + uVar28 * 4) =
           (int)((*(int64_t *)(lVar3 + 8 + uVar35) * -0x30e4432340650000 ^
                 *(uint64_t *)(lVar32 + 0x60)) >> (0x38U - (char)uVar2 & 0x3f));
      uVar28 = (uint64_t)(uVar27 >> 4 & 0xfffffff0);
      lVar23 = 0xf;
      if ((*(uint8_t *)(lVar15 + uVar28) & 0xf) != 1) {
        lVar23 = 0;
      }
      lVar23 = lVar23 + (uint64_t)(*(uint8_t *)(lVar15 + uVar28) - 1 & 0xf);
      *(char *)(lVar15 + uVar28) = (char)lVar23;
      *(char *)(lVar15 + uVar28 + lVar23) = (char)uVar27;
      *(uint32_t *)(uVar28 * 4 + lVar20 + lVar23 * 4) = (uint32_t)uVar35;
      if ((uStack_c8 & 0xffffffff) - 1 == uVar35) break;
      uVar35 = uVar35 + 1;
    }
  }
  *(uint32_t *)(lVar32 + 0x2c) = uVar22;
  uVar35 = (uint64_t)*(uint32_t *)(lVar32 + 0x40 + (uint64_t)(uVar22 & 7) * 4);
  *(int *)(lVar32 + 0x40 + (uint64_t)(uVar22 & 7) * 4) =
       (int)((*(int64_t *)(lStack_90 + 8 + (uStack_c8 & 0xffffffff)) * -0x30e4432340650000 ^
             uStack_c0) >> (0x38U - cVar39 & 0x3f));
LAB_7fffa55fa1aa:
  uVar28 = (uint64_t)((uint32_t)(uVar35 >> 4) & 0xffffff0);
  uVar5 = (uint8_t)(uVar35 >> 0x10);
  uVar45 = (uint8_t)(uVar35 >> 0x18);
  uVar42 = (uint8_t)(uVar35 >> 8);
  auVar40._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar45,uVar45),uVar5),CONCAT14(uVar5,(int)uVar35)) >> 0x20);
  auVar40[3] = uVar42;
  auVar40[2] = uVar42;
  auVar40[0] = (uint8_t)uVar35;
  auVar40[1] = auVar40[0];
  auVar40._8_8_ = 0;
  auVar41 = pshuflw(auVar40,auVar40,0);
  *(int *)(lVar32 + 0x68) = *(int *)(lVar32 + 0x68) + (int)uVar35;
  lVar14 = lVar14 + uVar28 * 4;
  bVar12 = *(uint8_t *)(lVar24 + uVar28);
  pcVar1 = (char *)(lVar24 + uVar28);
  cVar39 = auVar41[0];
  auVar48[0] = -(*pcVar1 == cVar39);
  cVar43 = auVar41[1];
  auVar48[1] = -(pcVar1[1] == cVar43);
  cVar44 = auVar41[2];
  auVar48[2] = -(pcVar1[2] == cVar44);
  cVar46 = auVar41[3];
  auVar48[3] = -(pcVar1[3] == cVar46);
  auVar48[4] = -(pcVar1[4] == cVar39);
  auVar48[5] = -(pcVar1[5] == cVar43);
  auVar48[6] = -(pcVar1[6] == cVar44);
  auVar48[7] = -(pcVar1[7] == cVar46);
  auVar48[8] = -(pcVar1[8] == cVar39);
  auVar48[9] = -(pcVar1[9] == cVar43);
  auVar48[10] = -(pcVar1[10] == cVar44);
  auVar48[0xb] = -(pcVar1[0xb] == cVar46);
  auVar48[0xc] = -(pcVar1[0xc] == cVar39);
  auVar48[0xd] = -(pcVar1[0xd] == cVar43);
  auVar48[0xe] = -(pcVar1[0xe] == cVar44);
  auVar48[0xf] = -(pcVar1[0xf] == cVar46);
  uVar4 = (uint16_t)(SUB161(auVar48 >> 7,0) & 1) | (uint16_t)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
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
          (uint16_t)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar48[0xf] >> 7) << 0xf;
  if (uVar4 != 0) {
    uVar35 = (uint64_t)(uint16_t)(uVar4 >> (bVar12 & 0xf) | uVar4 << 0x10 - (bVar12 & 0xf));
    lVar15 = 0;
    uStack_48 = in_R11;
    do {
      iVar6 = 0;
      for (uVar37 = uVar35; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x8000000000000000) {
        iVar6 = iVar6 + 1;
      }
      uVar27 = iVar6 + (uint32_t)bVar12 & 0xf;
      if (uVar27 != 0) {
        uVar27 = *(uint32_t *)(lVar14 + (uint64_t)uVar27 * 4);
        if (uVar27 < (uint32_t)puStack_68) goto LAB_7fffa55fa265;
        iVar25 = iVar25 + -1;
        auStack_1d8[lVar15] = uVar27;
        lVar15 = lVar15 + 1;
      }
      uVar35 = uVar35 & uVar35 - 1;
      if ((uVar35 == 0) || (iVar25 == 0)) goto LAB_7fffa55fa265;
    } while( true );
  }
  lVar15 = 0;
  uStack_48._0_4_ = uVar31;
LAB_7fffa55fa265:
  uVar35 = uStack_98;
  uStack_98 = uStack_98 << 2;
  iVar6 = 0xf;
  if ((bVar12 & 0xf) != ((uVar31 ^ 0x8f1f) + 0x221e & 0xffff)) {
    iVar6 = 0;
  }
  uVar27 = iVar6 + (bVar12 - 1 & 0xf);
  *(uint8_t *)(uVar28 + lVar24) = (char)uVar27;
  ((uint8_t *)(uVar28 + lVar24))[uVar27] = auVar40[0];
  iVar6 = *(int *)(lVar32 + 0x2c);
  *(int *)(lVar32 + 0x2c) = iVar6 + 1;
  *(int *)(lVar14 + (uint64_t)uVar27 * 4) = iVar6;
  iVar6 = (int)uStack_c8;
  if (lVar15 == 0) {
    pbVar30 = (uint8_t *)0x3;
  }
  else {
    puStack_68 = param_5 + 1;
    lStack_58 = lStack_90 + 8;
    lVar32 = 0;
    pbVar36 = (uint8_t *)0x3;
    do {
      uVar27 = auStack_1d8[lVar32];
      puVar38 = (uint64_t *)(lStack_90 + (uint64_t)uVar27);
      if (*(int *)(pbVar36 + -3 + (int64_t)puVar38) ==
          *(int *)((int64_t)param_5 + (int64_t)(pbVar36 + -3))) {
        if (param_5 < (uint64_t *)((int64_t)puStack_50 - 7U)) {
          if (*puVar38 == *param_5) {
            puVar38 = (uint64_t *)(lStack_90 + 8 + (uint64_t)uVar27);
            puVar17 = param_5;
            puVar29 = param_5 + 1;
            do {
              if ((uint64_t *)((int64_t)puStack_50 - 7U) <= puVar29) goto LAB_7fffa55fa39b;
              uVar28 = *puVar29;
              uVar37 = *puVar38;
              puVar29 = puVar29 + 1;
              puVar17 = puVar17 + 1;
              puVar38 = puVar38 + 1;
            } while (uVar37 == uVar28);
            uVar47 = 0;
            for (uVar28 = uVar28 ^ uVar37; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar47 = uVar47 + 1;
            }
            pbVar30 = (uint8_t *)((int64_t)puVar17 + ((uint64_t)(uVar47 >> 3) - (int64_t)param_5));
          }
          else {
            uVar47 = 0;
            for (uVar28 = *param_5 ^ *puVar38; (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar47 = uVar47 + 1;
            }
            pbVar30 = (uint8_t *)(uint64_t)(uVar47 >> 3);
          }
        }
        else {
          puVar29 = param_5;
LAB_7fffa55fa39b:
          if ((puVar29 < (uint64_t *)((int64_t)puStack_50 - 3U)) &&
             ((int)*puVar38 == (int)*puVar29)) {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            puVar29 = (uint64_t *)((int64_t)puVar29 + 4);
          }
          if ((puVar29 < (uint64_t *)((int64_t)puStack_50 - 1U)) &&
             ((short)*puVar38 == (short)*puVar29)) {
            puVar29 = (uint64_t *)((int64_t)puVar29 + 2);
            puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
          }
          if (puVar29 < puStack_50) {
            puVar29 = (uint64_t *)
                      ((int64_t)puVar29 + (uint64_t)((uint8_t)*puVar38 == (uint8_t)*puVar29));
          }
          pbVar30 = (uint8_t *)((int64_t)puVar29 - (int64_t)param_5);
        }
        bVar21 = (int64_t)pbVar30 < (int64_t)pbVar36;
        if ((uint64_t)((uint32_t)uStack_48 + 0x285603a1) <
            (uint64_t)(int64_t)(int)(((uint32_t)uStack_48 | 1) * 0x8d72a0b)) {
          bVar21 = pbVar36 < pbVar30;
        }
        if (bVar21) {
          *puStack_a0 = (uint64_t)((iVar6 + 3) - uVar27);
          pbVar36 = pbVar30;
          if ((uint64_t *)((int64_t)param_5 + (int64_t)pbVar30) == puStack_50) break;
        }
      }
      pbVar30 = pbVar36;
      lVar32 = lVar32 + 1;
      pbVar36 = pbVar30;
    } while (lVar32 != lVar15);
  }
  puVar38 = (uint64_t *)(lStack_90 + uStack_78);
  uVar47 = iStack_b8 + iVar25;
  pbVar36 = (uint8_t *)*puStack_a8;
  lVar32 = puStack_a8[1];
  iVar25 = ((int)pbVar36 - (int)lVar32) - (int)uStack_78;
  uVar27 = *(uint32_t *)(puStack_a8[0xe] + 0xc + uVar35 * 0x10);
  bVar12 = (uint8_t)(uint32_t)uStack_48;
  if (uVar47 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = 3;
    if (uVar47 < 3) {
      uVar28 = (uint64_t)uVar47;
    }
    puVar17 = (uint64_t *)((int64_t)param_5 + 4);
    lVar24 = uStack_78 + lStack_90 + 8;
    uVar37 = 0;
    do {
      uVar27 = *(uint32_t *)(puStack_a8[0xe] + uVar35 * 0x10 + uVar37 * 4);
      if (uVar27 == (((uint32_t)uStack_48 ^ 0x52fc) & 0xffff)) {
        return;
      }
      piVar18 = (int *)((uint64_t)uVar27 + lVar32);
      if (*piVar18 == (int)*param_5) {
        puVar29 = (uint64_t *)(piVar18 + 1);
        puVar7 = (uint64_t *)(((int64_t)pbVar36 - (int64_t)puVar29) + (int64_t)puVar17);
        if (puStack_50 <= puVar7) {
          puVar7 = puStack_50;
        }
        puVar10 = puVar29;
        puVar9 = puVar17;
        if (puVar17 < (uint64_t *)((int64_t)puVar7 - 7U)) {
          if (*puVar29 == *puVar17) {
            lVar14 = 0xc;
LAB_7fffa55fa700:
            puVar9 = (uint64_t *)((int64_t)param_5 + lVar14);
            if (puVar9 < (uint64_t *)((int64_t)puVar7 - 7U)) {
              if (*(uint64_t *)((int64_t)piVar18 + lVar14) == *puVar9) goto code_r0x7fffa55fa719;
              uVar19 = 0;
              for (uVar13 = *puVar9 ^ *(uint64_t *)((int64_t)piVar18 + lVar14); (uVar13 & 1) == 0;
                  uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                uVar19 = uVar19 + 1;
              }
              uVar13 = ((uint64_t)(uVar19 >> 3) + lVar14) - 4;
              goto LAB_7fffa55fa777;
            }
            puVar10 = (uint64_t *)((int64_t)piVar18 + lVar14);
            goto LAB_7fffa55fa728;
          }
          uVar19 = 0;
          for (uVar13 = *puVar17 ^ *puVar29; (uVar13 & 1) == 0;
              uVar13 = uVar13 >> 1 | 0x8000000000000000) {
            uVar19 = uVar19 + 1;
          }
          uVar13 = (uint64_t)(uVar19 >> 3);
        }
        else {
LAB_7fffa55fa728:
          if ((puVar9 < (uint64_t *)((int64_t)puVar7 - 3U)) && ((int)*puVar10 == (int)*puVar9)) {
            puVar9 = (uint64_t *)((int64_t)puVar9 + 4);
            puVar10 = (uint64_t *)((int64_t)puVar10 + 4);
          }
          if ((puVar9 < (uint64_t *)((int64_t)puVar7 - 1U)) && ((short)*puVar10 == (short)*puVar9)
             ) {
            puVar10 = (uint64_t *)((int64_t)puVar10 + 2);
            puVar9 = (uint64_t *)((int64_t)puVar9 + 2);
          }
          if (puVar9 < puVar7) {
            puVar9 = (uint64_t *)((int64_t)puVar9 + (uint64_t)((uint8_t)*puVar10 == (uint8_t)*puVar9));
          }
          uVar13 = (int64_t)puVar9 - (int64_t)puVar17;
        }
LAB_7fffa55fa777:
        if ((uint8_t *)((int64_t)puVar29 + uVar13) == pbVar36) {
          puVar29 = (uint64_t *)((int64_t)puVar17 + uVar13);
          puVar9 = puVar38;
          puVar7 = puVar29;
          if (puVar29 < (uint64_t *)((int64_t)puStack_50 - 7U)) {
            if (*puVar38 == *puVar29) {
              lVar14 = 0;
              do {
                puVar7 = (uint64_t *)((int64_t)param_5 + lVar14 + uVar13 + 0xc);
                if ((uint64_t *)((int64_t)puStack_50 - 7U) <= puVar7) {
                  puVar9 = (uint64_t *)(lVar14 + lVar24);
                  goto LAB_7fffa55fa8ed;
                }
                uVar8 = *(uint64_t *)(lVar24 + lVar14);
                uVar33 = *puVar7;
                bVar21 = uVar8 == uVar33;
                if ((uint64_t)(int64_t)(int)((uint32_t)uStack_48 ^ 0xf3f027dc) <=
                    (uint64_t)
                    ((0x97250295U >> (bVar12 & 0x1f) | -0x68dafd6b << 0x20 - (bVar12 & 0x1f)) +
                    0xf8715665)) {
                  bVar21 = (int64_t)uVar33 <= (int64_t)uVar8;
                }
                lVar14 = lVar14 + 8;
              } while (bVar21);
              uVar19 = 0;
              for (uVar33 = uVar33 ^ uVar8; (uVar33 & 1) == 0;
                  uVar33 = uVar33 >> 1 | 0x8000000000000000) {
                uVar19 = uVar19 + 1;
              }
              uVar8 = (uint64_t)(uVar19 >> 3) + lVar14;
            }
            else {
              uVar19 = 0;
              for (uVar8 = *puVar29 ^ *puVar38; (uVar8 & 1) == 0;
                  uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                uVar19 = uVar19 + 1;
              }
              uVar8 = (uint64_t)(uVar19 >> 3);
            }
          }
          else {
LAB_7fffa55fa8ed:
            if ((puVar7 < (uint64_t *)((int64_t)puStack_50 - 3U)) &&
               ((int)*puVar9 == (int)*puVar7)) {
              puVar9 = (uint64_t *)((int64_t)puVar9 + 4);
              puVar7 = (uint64_t *)((int64_t)puVar7 + 4);
            }
            if ((puVar7 < (uint64_t *)((int64_t)puStack_50 - 1U)) &&
               ((short)*puVar9 == (short)*puVar7)) {
              puVar7 = (uint64_t *)((int64_t)puVar7 + 2);
              puVar9 = (uint64_t *)((int64_t)puVar9 + 2);
            }
            if (puVar7 < puStack_50) {
              puVar7 = (uint64_t *)((int64_t)puVar7 + (uint64_t)((uint8_t)*puVar9 == (uint8_t)*puVar7))
              ;
            }
            uVar8 = (int64_t)puVar7 - (int64_t)puVar29;
          }
          uVar13 = uVar13 + uVar8;
        }
        pbVar16 = (uint8_t *)(uVar13 + 4);
        if (pbVar30 < pbVar16) {
          uVar27 = (iVar6 + 3 + iVar25) - uVar27;
          uVar13 = (uint64_t)uVar27;
          if ((uint32_t)uStack_48 == 0xde2a9af8) {
            uVar13 = (int64_t)(int)uVar27;
          }
          *puStack_a0 = uVar13;
          pbVar30 = pbVar16;
          if ((uint64_t *)((int64_t)param_5 + (int64_t)pbVar16) == puStack_50) {
            return;
          }
        }
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 != uVar28);
    uVar27 = *(uint32_t *)(puStack_a8[0xe] + (uStack_98 | 3) * 4);
  }
  uVar47 = uVar47 - (int)uVar28;
  if ((uVar27 & 0xff) <= uVar47) {
    uVar47 = uVar27 & 0xff;
  }
  if (uVar47 == 0) {
    return;
  }
  uVar35 = (uint64_t)(uVar47 & 7);
  if ((-0x3b81bcf << (bVar12 & 0x1f) | 0xfc47e431U >> 0x20 - (bVar12 & 0x1f)) < 0x12b28907) {
    uVar35 = (uint64_t)uVar47 ^ 7;
  }
  if (7 < uVar47) {
    uVar28 = 0;
    do {
      uVar37 = uVar28 + 8;
      if ((uint64_t)
          ((((uint32_t)uStack_48 ^ 0x9df784c3) >> 1 |
           (uint32_t)((((uint32_t)uStack_48 ^ 0x9df784c3) & 1) != 0) << 0x1f) + 0x7d7533be) !=
          0xffffffffd026e30b) {
        if (((uint32_t)uStack_48 | 1) * 0x4d317a02 + 0x207b822f <
            (((uint32_t)uStack_48 ^ 0x90b5ddb3) << 0x11 | ((uint32_t)uStack_48 ^ 0x90b5ddb3) >> 0xf)) {
          uVar37 = uVar28 | 8;
        }
      }
      uVar28 = uVar37;
    } while (uVar37 != (uVar47 & 0xf8));
  }
  uVar19 = 0x374e44ed - (uint32_t)uStack_48 ^ 0xf44f1f1;
  if ((uint32_t)uVar35 != (uVar19 << 0xe | uVar19 >> 0x12)) {
    for (lVar24 = 0; uVar35 - 1 != lVar24; lVar24 = lVar24 + 1) {
    }
  }
  puVar17 = (uint64_t *)((int64_t)puStack_50 - 7);
  puVar29 = (uint64_t *)((int64_t)param_5 + 4);
  iVar26 = (int)*param_5;
  uVar35 = (uint64_t)(uVar27 >> 8);
  puVar7 = (uint64_t *)(uStack_78 + lStack_90 + 8);
  uVar27 = 0;
  do {
    uVar19 = *(uint32_t *)(puStack_a8[0x10] + uVar35 * 4);
    if (*(int *)(lVar32 + (uint64_t)uVar19) == iVar26) {
      lVar24 = lVar32 + (uint64_t)uVar19;
      puVar9 = (uint64_t *)(lVar24 + 4);
      puVar10 = (uint64_t *)(((int64_t)pbVar36 - (int64_t)puVar9) + (int64_t)puVar29);
      if (puStack_50 <= puVar10) {
        puVar10 = puStack_50;
      }
      puVar34 = puVar9;
      puVar11 = puVar29;
      if (puVar29 < (uint64_t *)((int64_t)puVar10 - 7U)) {
        if (*puVar9 == *puVar29) {
          lVar14 = 0xc;
LAB_7fffa55fabe0:
          puVar11 = (uint64_t *)((int64_t)param_5 + lVar14);
          if (puVar11 < (uint64_t *)((int64_t)puVar10 - 7U)) {
            if (*(uint64_t *)(lVar24 + lVar14) == *puVar11) goto code_r0x7fffa55fabfa;
            uVar22 = 0;
            for (uVar28 = *puVar11 ^ *(uint64_t *)(lVar24 + lVar14); (uVar28 & 1) == 0;
                uVar28 = uVar28 >> 1 | 0x8000000000000000) {
              uVar22 = uVar22 + 1;
            }
            uVar28 = ((uint64_t)(uVar22 >> 3) + lVar14) - 4;
            goto LAB_7fffa55face7;
          }
          puVar34 = (uint64_t *)(lVar24 + lVar14);
          goto LAB_7fffa55fac16;
        }
        uVar22 = 0;
        for (uVar28 = *puVar29 ^ *puVar9; (uVar28 & 1) == 0;
            uVar28 = uVar28 >> 1 | 0x8000000000000000) {
          uVar22 = uVar22 + 1;
        }
        uVar28 = (uint64_t)(uVar22 >> 3);
      }
      else {
LAB_7fffa55fac16:
        if ((puVar11 < (uint64_t *)((int64_t)puVar10 - 3U)) && ((int)*puVar34 == (int)*puVar11)) {
          puVar11 = (uint64_t *)((int64_t)puVar11 + 4);
          puVar34 = (uint64_t *)((int64_t)puVar34 + 4);
        }
        if ((puVar11 < (uint64_t *)((int64_t)puVar10 - 1U)) &&
           ((short)*puVar34 == (short)*puVar11)) {
          puVar11 = (uint64_t *)((int64_t)puVar11 + 2);
          puVar34 = (uint64_t *)((int64_t)puVar34 + 2);
        }
        if (puVar11 < puVar10) {
          bVar21 = (uint8_t)*puVar34 == (uint8_t)*puVar11;
          if ((int64_t)(uint64_t)(((uint32_t)uStack_48 + 0xc5c791da) * -0x2473adc1 + 0x33606cb4) <
              (int64_t)(int)~(((uint32_t)uStack_48 | 1) * -0x3d97d0f1)) {
            bVar21 = (uint8_t)*puVar11 < (uint8_t)*puVar34;
          }
          puVar11 = (uint64_t *)((int64_t)puVar11 + (uint64_t)bVar21);
        }
        uVar28 = (int64_t)puVar11 - (int64_t)puVar29;
      }
LAB_7fffa55face7:
      if ((uint8_t *)((int64_t)puVar9 + uVar28) == pbVar36) {
        puVar9 = (uint64_t *)(uVar28 + (int64_t)puVar29);
        puVar11 = puVar38;
        puVar10 = puVar9;
        if (puVar9 < puVar17) {
          uVar37 = *puVar9;
          uVar13 = *puVar38;
          bVar21 = uVar13 == uVar37;
          if ((((uint32_t)uStack_48 | 1) * -0x64882b80 | ((uint32_t)uStack_48 | 1) * 0x4136efa9 >> 0x19) <
              (-0x361f7fcf << (bVar12 & 0x1f) | 0xc9e08031U >> 0x20 - (bVar12 & 0x1f))) {
            bVar21 = uVar13 != uVar37 && (int64_t)uVar37 <= (int64_t)uVar13;
          }
          if (bVar21) {
            puVar10 = (uint64_t *)((int64_t)param_5 + uVar28 + 0xc);
            pbVar16 = (uint8_t *)((int64_t)param_5 + uVar28 + 0xc);
            puVar11 = puVar7;
            if (puVar10 < puVar17) {
LAB_7fffa55fad90:
              if (*puVar11 == *puVar10) goto code_r0x7fffa55fad9f;
              uVar22 = 0;
              for (uVar37 = *puVar11 ^ *puVar10; (uVar37 & 1) == 0;
                  uVar37 = uVar37 >> 1 | 0x8000000000000000) {
                uVar22 = uVar22 + 1;
              }
              pbVar16 = pbVar16 + ((uint64_t)(uVar22 >> 3) - (int64_t)puVar9);
              goto LAB_7fffa55fae85;
            }
            goto LAB_7fffa55fadba;
          }
          uVar22 = 0;
          for (uVar37 = uVar37 ^ uVar13; (uVar37 & 1) == 0;
              uVar37 = uVar37 >> 1 | 0x8000000000000000) {
            uVar22 = uVar22 + 1;
          }
          pbVar16 = (uint8_t *)(uint64_t)(uVar22 >> 3);
        }
        else {
LAB_7fffa55fadba:
          if ((puVar10 < (uint64_t *)((int64_t)puStack_50 - 3U)) &&
             ((int)*puVar11 == (int)*puVar10)) {
            puVar10 = (uint64_t *)((int64_t)puVar10 + 4);
            puVar11 = (uint64_t *)((int64_t)puVar11 + 4);
          }
          if ((puVar10 < (uint64_t *)((int64_t)puStack_50 + -1)) &&
             ((short)*puVar11 == (short)*puVar10)) {
            puVar10 = (uint64_t *)((int64_t)puVar10 + 2);
            puVar11 = (uint64_t *)((int64_t)puVar11 + 2);
          }
          if (puVar10 < puStack_50) {
            puVar10 = (uint64_t *)
                      ((int64_t)puVar10 + (uint64_t)((uint8_t)*puVar11 == (uint8_t)*puVar10));
          }
          pbVar16 = (uint8_t *)((int64_t)puVar10 - (int64_t)puVar9);
        }
LAB_7fffa55fae85:
        uVar28 = uVar28 + (int64_t)pbVar16;
      }
      pbVar16 = (uint8_t *)(uVar28 + 4);
      if (pbVar30 < pbVar16) {
        *puStack_a0 = (uint64_t)((iVar6 + iVar25 + 3) - uVar19);
        if ((uint64_t *)((int64_t)param_5 + (int64_t)pbVar16) == puStack_50) {
          return;
        }
        iVar26 = (int)*param_5;
        pbVar30 = pbVar16;
      }
    }
    uVar27 = uVar27 + 1;
    if (uVar27 == uVar47) {
      return;
    }
    uVar35 = uVar35 + 1;
  } while( true );
code_r0x7fffa55fa719:
  lVar14 = lVar14 + 8;
  goto LAB_7fffa55fa700;
code_r0x7fffa55fabfa:
  lVar14 = lVar14 + 8;
  goto LAB_7fffa55fabe0;
code_r0x7fffa55fad9f:
  puVar10 = puVar10 + 1;
  pbVar16 = pbVar16 + 8;
  puVar11 = puVar11 + 1;
  if (puVar17 <= puVar10) goto LAB_7fffa55fadba;
  goto LAB_7fffa55fad90;
}


// ============================================================================
// Function : FUN_7fffa55fb2e0  |  RVA: 0xe8b2e0  |  Size: 41094 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa55fb362) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ffc80) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fb4cf) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fb51f) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fb522) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fb527) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fb52a) */
/* WARNING: Removing unreachable block (ram,0x7fffa560051b) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fff94) */
/* WARNING: Removing unreachable block (ram,0x7fffa56021ff) */
/* WARNING: Removing unreachable block (ram,0x7fffa56017d1) */
/* WARNING: Removing unreachable block (ram,0x7fffa56022f5) */
/* WARNING: Removing unreachable block (ram,0x7fffa560434d) */
/* WARNING: Removing unreachable block (ram,0x7fffa56034e7) */
/* WARNING: Removing unreachable block (ram,0x7fffa5604ada) */
/* WARNING: Removing unreachable block (ram,0x7fffa560532e) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fe821) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ff63d) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ffa93) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fe649) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ffb8a) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ff4cc) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fe1f4) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ffc1a) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fddd7) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fb800) */
/* WARNING: Removing unreachable block (ram,0x7fffa56011ae) */
/* WARNING: Removing unreachable block (ram,0x7fffa5602a3e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5601fd5) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ffdfc) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ffed0) */
/* WARNING: Removing unreachable block (ram,0x7fffa55ffdb7) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fda61) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fb8ff) */
/* WARNING: Removing unreachable block (ram,0x7fffa56024bd) */
/* WARNING: Removing unreachable block (ram,0x7fffa56026ef) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fcf4e) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fc199) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fb93f) */
/* WARNING: Removing unreachable block (ram,0x7fffa55fcc08) */
/* WARNING: Removing unreachable block (ram,0x7fffa5602994) */
/* WARNING: Removing unreachable block (ram,0x7fffa5602e68) */
/* WARNING: Removing unreachable block (ram,0x7fffa5603bc2) */

int64_t FUN_7fffa55fb2e0(int64_t param_1,int64_t *param_2,int *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint32_t uVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  bool bVar17;
  int iVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  char cVar22;
  char cVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint8_t bVar26;
  uint8_t bVar27;
  uint8_t bVar28;
  uint8_t bVar29;
  uint32_t uVar30;
  uint32_t uVar31;
  int64_t lVar32;
  int64_t lVar33;
  int iVar34;
  int iVar35;
  uint64_t uVar36;
  uint32_t uVar37;
  uint64_t *puVar38;
  uint64_t *puVar39;
  uint32_t uVar40;
  int iVar41;
  uint64_t uVar42;
  uint64_t *puVar43;
  int iVar44;
  uint64_t uVar45;
  uint64_t *puVar46;
  uint64_t *puVar47;
  uint64_t *puVar48;
  uint32_t uVar49;
  int iVar50;
  uint64_t *puVar51;
  uint32_t uVar52;
  uint32_t uVar53;
  uint64_t uVar54;
  int64_t lVar55;
  uint64_t *puVar56;
  uint64_t *puVar57;
  uint64_t uVar58;
  int *piVar59;
  uint64_t *puVar60;
  int iVar61;
  uint64_t *puVar62;
  uint32_t uVar63;
  uint64_t *puStack_220;
  int iStack_200;
  int iStack_1f8;
  uint64_t *puStack_1f0;
  
  iVar41 = *param_3;
  iVar35 = param_3[1];
  iVar34 = *(int *)(param_1 + 0x128);
  puVar51 = *(uint64_t **)(param_1 + 0xf8);
  uVar52 = (uint32_t)puVar51[0x21];
  puVar10 = (uint64_t *)*puVar51;
  uVar11 = puVar51[1];
  uVar12 = puVar51[0x10];
  uVar9 = (uint32_t)puVar51[3];
  puVar57 = (uint64_t *)(uVar9 + uVar11);
  uVar13 = puVar51[0xe];
  uVar53 = *(uint32_t *)(param_1 + 0x18);
  lVar14 = *(int64_t *)(param_1 + 0x70);
  iVar50 = *(int *)(param_1 + 0x110);
  lVar15 = *(int64_t *)(param_1 + 0x80);
  uVar49 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  lVar16 = *(int64_t *)(param_1 + 8);
  iVar44 = (int)lVar16;
  iVar61 = ((int)param_4 + (int)param_5) - iVar44;
  uVar37 = iVar61 - uVar49;
  if (iVar61 - uVar53 <= uVar49) {
    uVar37 = uVar53;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar37 = uVar53;
  }
  puVar3 = (uint64_t *)((uint64_t)uVar37 + lVar16);
  iVar61 = ((int)puVar10 + (int)param_4) - (int)puVar57;
  iVar18 = (int)puVar3;
  puVar4 = (uint64_t *)((int64_t)param_4 + param_5);
  puVar7 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  uVar53 = *(uint32_t *)((int64_t)puVar51 + 0x104);
  uVar49 = ((int)uVar11 - (int)puVar10) + uVar37;
  uVar45 = (uint64_t)uVar49;
  bVar28 = (uint8_t)uVar53;
  bVar29 = (uint8_t)puVar51[0x21];
  cVar22 = (char)*(uint32_t *)(param_1 + 0x108);
  cVar23 = (char)*(int *)(param_1 + 0x104);
  puStack_220 = param_4;
  if (iVar50 < 6) {
    if (iVar50 == 5) {
      if (iVar34 != 0) {
        if (uVar52 < 0x3e) {
          uVar24 = 0;
          do {
            uVar24 = uVar24 + 0x40;
          } while (uVar24 < (uint64_t)(4L << (bVar29 & 0x3f)));
        }
        if (uVar53 < 0x3e) {
          uVar24 = 0;
          do {
            uVar24 = uVar24 + 0x40;
          } while (uVar24 < (uint64_t)(4L << (bVar28 & 0x3f)));
        }
      }
      param_4 = (uint64_t *)((uint64_t)(iVar61 == iVar18) + (int64_t)param_4);
      if (param_4 < puVar7) {
        bVar28 = 0x40 - cVar22;
        puVar51 = (uint64_t *)((int64_t)puVar4 - 1);
        puVar2 = (uint64_t *)((int64_t)puVar4 - 3);
        puVar1 = puVar4 + -4;
        puVar48 = (uint64_t *)((int64_t)puVar4 - 7);
        bVar26 = 0x40 - cVar23;
LAB_7fffa56008f2:
        uVar24 = *param_4 * -0x30e4432345000000;
        uVar25 = uVar24 >> (bVar26 & 0x3f);
        uVar24 = uVar24 >> (uint64_t)(0x38 - uVar53);
        uVar52 = *(uint32_t *)(lVar15 + uVar25 * 4);
        uVar36 = *param_4 * -0x30e44323485a9b9d;
        uVar58 = uVar36 >> (bVar28 & 0x3f);
        uVar36 = uVar36 >> (0x38 - bVar29 & 0x3f);
        uVar31 = *(uint32_t *)(uVar12 + (uVar24 >> 8) * 4);
        iStack_200 = (int)param_4;
        iVar50 = iStack_200 - iVar44;
        iVar34 = iVar50 + 1;
        uVar30 = iVar34 - iVar41;
        piVar59 = (int *)((uVar30 - uVar49) + uVar11);
        if (uVar37 <= uVar30) {
          piVar59 = (int *)(lVar16 + (uint64_t)uVar30);
        }
        uVar40 = *(uint32_t *)(uVar13 + (uVar36 >> 8) * 4);
        uVar63 = *(uint32_t *)(lVar14 + uVar58 * 4);
        *(int *)(lVar15 + uVar25 * 4) = iVar50;
        *(int *)(lVar14 + uVar58 * 4) = iVar50;
        if ((2 < (uVar37 - 1) - uVar30) && (*piVar59 == *(int *)((int64_t)param_4 + 1))) {
          puVar46 = puVar4;
          if (uVar30 < uVar37) {
            puVar46 = puVar10;
          }
          puVar43 = (uint64_t *)(piVar59 + 1);
          puVar62 = (uint64_t *)((int64_t)param_4 + 5);
          puVar47 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar46 + (5 - (int64_t)puVar43));
          if (puVar4 <= puVar47) {
            puVar47 = puVar4;
          }
          puVar56 = puVar62;
          puVar39 = puVar43;
          if (puVar62 < (uint64_t *)((int64_t)puVar47 - 7U)) {
            if (*puVar43 == *puVar62) {
              lVar33 = 0;
              do {
                puVar56 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xd);
                if ((uint64_t *)((int64_t)puVar47 - 7U) <= puVar56) {
                  puVar56 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xd);
                  puVar39 = (uint64_t *)((int64_t)piVar59 + lVar33 + 0xc);
                  goto LAB_7fffa5600fe7;
                }
                uVar24 = *(uint64_t *)((int64_t)piVar59 + lVar33 + 0xc);
                uVar25 = *puVar56;
                lVar33 = lVar33 + 8;
              } while (uVar24 == uVar25);
              uVar52 = 0;
              for (uVar24 = uVar24 ^ uVar25; (uVar24 & 1) == 0;
                  uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar52 = uVar52 + 1;
              }
              uVar24 = (uint64_t)(uVar52 >> 3) + lVar33;
            }
            else {
              uVar52 = 0;
              for (uVar24 = *puVar62 ^ *puVar43; (uVar24 & 1) == 0;
                  uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar52 = uVar52 + 1;
              }
              uVar24 = (uint64_t)(uVar52 >> 3);
            }
          }
          else {
LAB_7fffa5600fe7:
            if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
               ((int)*puVar39 == (int)*puVar56)) {
              puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
            }
            if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
               ((short)*puVar39 == (short)*puVar56)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
              puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
            }
            if (puVar56 < puVar47) {
              puVar56 = (uint64_t *)
                        ((int64_t)puVar56 + (uint64_t)((char)*puVar39 == (char)*puVar56));
            }
            uVar24 = (int64_t)puVar56 - (int64_t)puVar62;
          }
          if ((uint64_t *)((int64_t)puVar43 + uVar24) == puVar46) {
            puVar62 = (uint64_t *)((int64_t)puVar62 + uVar24);
            puVar46 = puVar3;
            puVar43 = puVar62;
            if (puVar62 < puVar48) {
              if (*puVar3 == *puVar62) {
                puVar43 = (uint64_t *)((int64_t)param_4 + uVar24 + 0xd);
                lVar33 = 8;
                if (puVar43 < puVar48) {
LAB_7fffa5601230:
                  if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar43)
                  goto code_r0x7fffa5601240;
                  uVar52 = 0;
                  for (uVar25 = *(uint64_t *)((int64_t)puVar3 + lVar33) ^ *puVar43;
                      (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar25 = (uint64_t)(uVar52 >> 3) + lVar33;
                  goto LAB_7fffa56012af;
                }
LAB_7fffa5601252:
                puVar46 = (uint64_t *)(lVar33 + (int64_t)puVar3);
                goto LAB_7fffa5601255;
              }
              uVar52 = 0;
              for (uVar25 = *puVar62 ^ *puVar3; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar52 = uVar52 + 1;
              }
              uVar25 = (uint64_t)(uVar52 >> 3);
            }
            else {
LAB_7fffa5601255:
              if ((puVar43 < puVar2) && ((int)*puVar46 == (int)*puVar43)) {
                puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
              }
              if ((puVar43 < puVar51) && ((short)*puVar46 == (short)*puVar43)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
                puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
              }
              if (puVar43 < puVar4) {
                puVar43 = (uint64_t *)
                          ((int64_t)puVar43 + (uint64_t)((char)*puVar46 == (char)*puVar43));
              }
              uVar25 = (int64_t)puVar43 - (int64_t)puVar62;
            }
LAB_7fffa56012af:
            uVar24 = uVar25 + uVar24;
          }
          puVar46 = (uint64_t *)((int64_t)param_4 + 1);
          puVar43 = (uint64_t *)param_2[3];
          uVar25 = (int64_t)puVar46 - (int64_t)puStack_220;
          if (puVar1 < puVar46) {
            puVar62 = puVar43;
            puVar47 = puStack_220;
            if (puStack_220 <= puVar1) {
              uVar36 = puStack_220[1];
              *puVar43 = *puStack_220;
              puVar43[1] = uVar36;
              puVar62 = (uint64_t *)
                        ((int64_t)puVar43 + ((int64_t)puVar1 - (int64_t)puStack_220));
              puVar47 = puVar1;
              if (0x10 < (int64_t)puVar1 - (int64_t)puStack_220) {
                puVar43 = puVar43 + 6;
                while( true ) {
                  uVar36 = puStack_220[3];
                  puVar43[-4] = puStack_220[2];
                  puVar43[-3] = uVar36;
                  uVar36 = puStack_220[5];
                  puVar43[-2] = puStack_220[4];
                  puVar43[-1] = uVar36;
                  if (puVar62 <= puVar43) break;
                  puVar43 = puVar43 + 4;
                  puStack_220 = puStack_220 + 4;
                }
              }
            }
            if (puVar47 < puVar46) {
              uVar36 = ((int64_t)param_4 + 1) - (int64_t)puVar47;
              puVar43 = puVar62;
              if ((3 < uVar36) && (0x1f < (uint64_t)((int64_t)puVar62 - (int64_t)puVar47))) {
                if (uVar36 < 0x20) {
                  uVar58 = 0;
                }
                else {
                  uVar58 = uVar36 & 0xffffffffffffffe0;
                  uVar42 = 0;
                  do {
                    uVar19 = ((uint64_t *)((int64_t)puVar47 + uVar42))[1];
                    puVar5 = (uint64_t *)((int64_t)puVar47 + uVar42 + 0x10);
                    uVar20 = *puVar5;
                    uVar21 = puVar5[1];
                    *(uint64_t *)((int64_t)puVar62 + uVar42) =
                         *(uint64_t *)((int64_t)puVar47 + uVar42);
                    ((uint64_t *)((int64_t)puVar62 + uVar42))[1] = uVar19;
                    puVar5 = (uint64_t *)((int64_t)puVar62 + uVar42 + 0x10);
                    *puVar5 = uVar20;
                    puVar5[1] = uVar21;
                    uVar42 = uVar42 + 0x20;
                  } while (uVar42 != uVar58);
                  if (uVar36 == uVar58) goto LAB_7fffa5601627;
                  if ((uVar36 & 0x1c) == 0) {
                    puVar43 = (uint64_t *)((int64_t)puVar62 + uVar58);
                    puVar47 = (uint64_t *)((int64_t)puVar47 + uVar58);
                    goto LAB_7fffa560155d;
                  }
                }
                uVar42 = uVar36 & 0xfffffffffffffffc;
                puVar43 = (uint64_t *)((int64_t)puVar62 + uVar42);
                do {
                  *(uint32_t *)((int64_t)puVar62 + uVar58) =
                       *(uint32_t *)((int64_t)puVar47 + uVar58);
                  uVar58 = uVar58 + 4;
                } while (uVar58 != uVar42);
                if (uVar36 == uVar42) goto LAB_7fffa5601627;
                puVar47 = (uint64_t *)((int64_t)puVar47 + uVar42);
              }
LAB_7fffa560155d:
              uVar52 = (int)((int64_t)param_4 + 1) - (int)puVar47 & 7;
              if (uVar52 == 0) {
                puVar62 = puVar47;
              }
              else {
                uVar36 = 0;
                puVar39 = puVar43;
                puVar56 = puVar47;
                do {
                  puVar43 = (uint64_t *)((int64_t)puVar39 + 1);
                  *(char *)puVar39 = (char)*puVar56;
                  uVar36 = uVar36 + 1;
                  puVar62 = (uint64_t *)((int64_t)puVar56 + 1);
                  puVar39 = puVar43;
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 1);
                } while (uVar36 != uVar52);
              }
              if (6 < (uint64_t)((int64_t)param_4 - (int64_t)puVar47)) {
                lVar33 = 0;
                do {
                  *(uint8_t *)((int64_t)puVar43 + lVar33) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 1) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 1);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 2) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 2);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 3) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 3);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 4) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 4);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 5) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 5);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 6) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 6);
                  lVar55 = lVar33 + 7;
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 7) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 7);
                  lVar33 = lVar33 + 8;
                } while ((uint64_t *)((int64_t)puVar62 + lVar55) != param_4);
              }
            }
LAB_7fffa5601627:
            lVar33 = param_2[1];
            param_2[3] = param_2[3] + uVar25;
            if (0xffff < uVar25) {
              *(uint32_t *)(param_2 + 9) = 1;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar33 - *param_2) >> 3);
            }
          }
          else {
            uVar36 = puStack_220[1];
            *puVar43 = *puStack_220;
            puVar43[1] = uVar36;
            if (0x10 < uVar25) {
              uVar36 = puStack_220[3];
              lVar33 = param_2[3];
              *(uint64_t *)(lVar33 + 0x10) = puStack_220[2];
              *(uint64_t *)(lVar33 + 0x18) = uVar36;
              if (0x20 < (int64_t)uVar25) {
                lVar55 = 0;
                do {
                  puVar8 = (uint64_t *)((int64_t)puStack_220 + lVar55 + 0x20);
                  uVar19 = puVar8[1];
                  puVar5 = (uint64_t *)(lVar33 + 0x20 + lVar55);
                  *puVar5 = *puVar8;
                  puVar5[1] = uVar19;
                  puVar5 = (uint64_t *)((int64_t)puStack_220 + lVar55 + 0x30);
                  uVar19 = puVar5[1];
                  puVar8 = (uint64_t *)(lVar33 + 0x30 + lVar55);
                  *puVar8 = *puVar5;
                  puVar8[1] = uVar19;
                  lVar32 = lVar33 + 0x20 + lVar55;
                  lVar55 = lVar55 + 0x20;
                } while (lVar32 + 0x20U < lVar33 + uVar25);
              }
              goto LAB_7fffa5601627;
            }
            lVar33 = param_2[1];
            param_2[3] = param_2[3] + uVar25;
          }
          lVar55 = uVar24 + 4;
          *(short *)(lVar33 + 4) = (short)uVar25;
          uVar24 = uVar24 + 1;
          *(uint32_t *)param_2[1] = 1;
          lVar33 = param_2[1];
          iStack_200 = iVar41;
          iVar41 = iVar35;
          goto joined_r0x7fffa56016ab;
        }
        puVar46 = param_4;
        if (uVar37 < uVar63) {
          puVar43 = (uint64_t *)(lVar16 + (uint64_t)uVar63);
          if (*puVar43 != *param_4) goto LAB_7fffa5600c80;
          puVar62 = puVar43 + 1;
          puVar47 = param_4 + 1;
          puVar56 = puVar47;
          if (puVar47 < puVar48) {
            if (*puVar62 == *puVar47) {
              lVar33 = 0x10;
LAB_7fffa5600fb0:
              puVar56 = (uint64_t *)(lVar33 + (int64_t)param_4);
              if (puVar56 < puVar48) {
                if (*(uint64_t *)((int64_t)puVar43 + lVar33) == *puVar56)
                goto code_r0x7fffa5600fd2;
                uVar52 = 0;
                for (uVar24 = *puVar56 ^ *(uint64_t *)((int64_t)puVar43 + lVar33);
                    (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                  uVar52 = uVar52 + 1;
                }
                uVar24 = ((uint64_t)(uVar52 >> 3) + lVar33) - 8;
                goto LAB_7fffa560117c;
              }
              puVar62 = (uint64_t *)(lVar33 + (int64_t)puVar43);
              goto joined_r0x7fffa5601116;
            }
            uVar52 = 0;
            for (uVar24 = *puVar47 ^ *puVar62; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar52 = uVar52 + 1;
            }
            uVar24 = (uint64_t)(uVar52 >> 3);
          }
          else {
joined_r0x7fffa5601116:
            if ((puVar56 < puVar2) && ((int)*puVar62 == (int)*puVar56)) {
              puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
              puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
            }
            if ((puVar56 < puVar51) && ((short)*puVar62 == (short)*puVar56)) {
              puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
              puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
            }
            if (puVar56 < puVar4) {
              puVar56 = (uint64_t *)
                        ((int64_t)puVar56 + (uint64_t)((char)*puVar62 == (char)*puVar56));
            }
            uVar24 = (int64_t)puVar56 - (int64_t)puVar47;
          }
LAB_7fffa560117c:
          iStack_200 = iStack_200 - (int)puVar43;
          lVar55 = uVar24 + 8;
          if (puStack_220 < param_4) {
            puVar43 = (uint64_t *)((uint64_t)uVar63 + lVar16 + -1);
            do {
              puVar46 = (uint64_t *)((int64_t)param_4 + -1);
              if (*(char *)puVar46 != (char)*puVar43) {
                puVar46 = param_4;
                break;
              }
              lVar55 = lVar55 + 1;
              if (puVar46 <= puStack_220) break;
              bVar17 = puVar3 < puVar43;
              puVar43 = (uint64_t *)((int64_t)puVar43 + -1);
              param_4 = puVar46;
            } while (bVar17);
          }
          goto LAB_7fffa5601ffc;
        }
        if ((char)uVar40 == (char)uVar36) {
          uVar40 = uVar40 >> 8;
          if ((uVar40 <= uVar9) || (puVar43 = (uint64_t *)(uVar11 + uVar40), *puVar43 != *param_4))
          goto LAB_7fffa5600c80;
          puVar62 = param_4 + 1;
          puVar47 = puVar43 + 1;
          puVar56 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar10 + (8 - (int64_t)puVar47));
          if (puVar4 <= puVar56) {
            puVar56 = puVar4;
          }
          puVar39 = puVar62;
          puVar60 = puVar47;
          if (puVar62 < (uint64_t *)((int64_t)puVar56 - 7U)) {
            if (*puVar47 == *puVar62) {
              lVar33 = 0x10;
LAB_7fffa5600c50:
              puVar39 = (uint64_t *)(lVar33 + (int64_t)param_4);
              if (puVar39 < (uint64_t *)((int64_t)puVar56 - 7U)) {
                if (*(uint64_t *)((int64_t)puVar43 + lVar33) == *puVar39)
                goto code_r0x7fffa5600c6d;
                uVar52 = 0;
                for (uVar24 = *puVar39 ^ *(uint64_t *)((int64_t)puVar43 + lVar33);
                    (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                  uVar52 = uVar52 + 1;
                }
                uVar24 = ((uint64_t)(uVar52 >> 3) + lVar33) - 8;
                goto LAB_7fffa5601bc3;
              }
              puVar60 = (uint64_t *)((int64_t)puVar43 + lVar33);
              goto LAB_7fffa5601b0e;
            }
            uVar52 = 0;
            for (uVar24 = *puVar62 ^ *puVar47; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar52 = uVar52 + 1;
            }
            uVar24 = (uint64_t)(uVar52 >> 3);
          }
          else {
LAB_7fffa5601b0e:
            if ((puVar39 < (uint64_t *)((int64_t)puVar56 - 3U)) &&
               ((int)*puVar60 == (int)*puVar39)) {
              puVar60 = (uint64_t *)((int64_t)puVar60 + 4);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
            }
            if ((puVar39 < (uint64_t *)((int64_t)puVar56 - 1U)) &&
               ((short)*puVar60 == (short)*puVar39)) {
              puVar60 = (uint64_t *)((int64_t)puVar60 + 2);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
            }
            if (puVar39 < puVar56) {
              puVar39 = (uint64_t *)
                        ((int64_t)puVar39 + (uint64_t)((char)*puVar60 == (char)*puVar39));
            }
            uVar24 = (int64_t)puVar39 - (int64_t)puVar62;
          }
LAB_7fffa5601bc3:
          if ((uint64_t *)((int64_t)puVar47 + uVar24) == puVar10) {
            puVar62 = (uint64_t *)((int64_t)puVar62 + uVar24);
            puVar43 = puVar62;
            puVar47 = puVar3;
            if (puVar62 < puVar48) {
              if (*puVar3 == *puVar62) {
                puVar43 = (uint64_t *)((int64_t)param_4 + uVar24 + 0x10);
                lVar33 = 8;
                if (puVar43 < puVar48) {
LAB_7fffa5601da0:
                  if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar43)
                  goto code_r0x7fffa5601ddd;
                  uVar52 = 0;
                  for (uVar25 = *puVar43 ^ *(uint64_t *)((int64_t)puVar3 + lVar33);
                      (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar25 = (uint64_t)(uVar52 >> 3) + lVar33;
                  goto LAB_7fffa5601e8c;
                }
LAB_7fffa5601dfe:
                puVar47 = (uint64_t *)(lVar33 + (int64_t)puVar3);
                goto LAB_7fffa5601e01;
              }
              uVar52 = 0;
              for (uVar25 = *puVar62 ^ *puVar3; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar52 = uVar52 + 1;
              }
              uVar25 = (uint64_t)(uVar52 >> 3);
            }
            else {
LAB_7fffa5601e01:
              if ((puVar43 < puVar2) && ((int)*puVar47 == (int)*puVar43)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
                puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
              }
              if ((puVar43 < puVar51) && ((short)*puVar47 == (short)*puVar43)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
                puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
              }
              if (puVar43 < puVar4) {
                puVar43 = (uint64_t *)
                          ((int64_t)puVar43 + (uint64_t)((char)*puVar47 == (char)*puVar43));
              }
              uVar25 = (int64_t)puVar43 - (int64_t)puVar62;
            }
LAB_7fffa5601e8c:
            uVar24 = uVar24 + uVar25;
          }
          iStack_200 = (iVar50 - uVar40) - uVar49;
          lVar55 = uVar24 + 8;
          if (param_4 <= puStack_220) goto LAB_7fffa5601ffc;
          puVar43 = (uint64_t *)((uint64_t)uVar40 + (uVar11 - 1));
          param_4 = (uint64_t *)((int64_t)param_4 + -1);
          do {
            if ((char)*param_4 != (char)*puVar43) goto LAB_7fffa5601eec;
            lVar55 = lVar55 + 1;
            puVar46 = (uint64_t *)((int64_t)param_4 + -1);
            if (param_4 <= puStack_220) break;
            bVar17 = puVar57 < puVar43;
            puVar43 = (uint64_t *)((int64_t)puVar43 + -1);
            param_4 = puVar46;
          } while (bVar17);
LAB_7fffa5601ee7:
          puVar46 = (uint64_t *)((int64_t)puVar46 + 1);
          goto LAB_7fffa5601ffc;
        }
LAB_7fffa5600c80:
        if (uVar37 < uVar52) {
          puVar43 = (uint64_t *)((uint64_t)uVar52 + lVar16);
          if ((int)*puVar43 == (int)*param_4) {
LAB_7fffa5600cb1:
            uVar24 = *(int64_t *)((int64_t)param_4 + 1) * -0x30e44323485a9b9d;
            uVar25 = uVar24 >> (0x38 - bVar29 & 0x3f);
            uVar24 = uVar24 >> (bVar28 & 0x3f);
            puVar46 = (uint64_t *)((int64_t)param_4 + 1);
            uVar31 = *(uint32_t *)(lVar14 + uVar24 * 4);
            uVar36 = (uint64_t)uVar31;
            uVar30 = *(uint32_t *)(uVar13 + (uVar25 >> 8) * 4);
            *(int *)(lVar14 + uVar24 * 4) = iVar34;
            if (uVar37 < uVar31) {
              puVar62 = (uint64_t *)(lVar16 + uVar36);
              if (*puVar62 != *puVar46) goto LAB_7fffa5600e4a;
              puVar43 = (uint64_t *)((int64_t)param_4 + 9);
              puVar47 = puVar62 + 1;
              puVar56 = puVar43;
              if (puVar43 < puVar48) {
                if (*puVar47 == *puVar43) {
                  lVar33 = lVar16 + 0x10 + uVar36;
                  lVar55 = 0;
LAB_7fffa5601790:
                  puVar47 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                  if (puVar47 < puVar48) {
                    uVar24 = *puVar47;
                    uVar25 = *(uint64_t *)(lVar33 + lVar55);
                    if (uVar25 == uVar24) goto code_r0x7fffa56017ee;
                    uVar52 = 0;
                    for (uVar24 = uVar24 ^ uVar25; (uVar24 & 1) == 0;
                        uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar24 = (uint64_t)(uVar52 >> 3) + lVar55 + 8;
                    goto LAB_7fffa5601cd4;
                  }
                  puVar47 = (uint64_t *)(lVar33 + lVar55);
                  puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                  goto joined_r0x7fffa560151b;
                }
                uVar52 = 0;
                for (uVar24 = *puVar43 ^ *puVar47; (uVar24 & 1) == 0;
                    uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                  uVar52 = uVar52 + 1;
                }
                uVar24 = (uint64_t)(uVar52 >> 3);
              }
              else {
joined_r0x7fffa560151b:
                if ((puVar56 < puVar2) && ((int)*puVar47 == (int)*puVar56)) {
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                }
                if ((puVar56 < puVar51) && ((short)*puVar47 == (short)*puVar56)) {
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                }
                if (puVar56 < puVar4) {
                  puVar56 = (uint64_t *)
                            ((int64_t)puVar56 + (uint64_t)((char)*puVar47 == (char)*puVar56));
                }
                uVar24 = (int64_t)puVar56 - (int64_t)puVar43;
              }
LAB_7fffa5601cd4:
              iStack_200 = (int)puVar46 - (int)puVar62;
              lVar55 = uVar24 + 8;
              if (puVar46 <= puStack_220) goto LAB_7fffa5601ffc;
              puVar43 = (uint64_t *)(uVar36 + lVar16 + -1);
              do {
                if ((char)*param_4 != (char)*puVar43) goto LAB_7fffa5601eec;
                lVar55 = lVar55 + 1;
                puVar46 = (uint64_t *)((int64_t)param_4 + -1);
                if (param_4 <= puStack_220) break;
                bVar17 = puVar3 < puVar43;
                param_4 = puVar46;
                puVar43 = (uint64_t *)((int64_t)puVar43 + -1);
              } while (bVar17);
              goto LAB_7fffa5601ee7;
            }
            if ((char)uVar25 == (char)uVar30) {
              uVar30 = uVar30 >> 8;
              uVar24 = (uint64_t)uVar30;
              if ((uVar9 < uVar30) && (*(uint64_t *)(uVar11 + uVar24) == *puVar46)) {
                puVar43 = (uint64_t *)((int64_t)param_4 + 9);
                puVar47 = (uint64_t *)(uVar11 + uVar24) + 1;
                puVar62 = (uint64_t *)
                          ((int64_t)param_4 + (int64_t)puVar10 + (9 - (int64_t)puVar47));
                if (puVar4 <= puVar62) {
                  puVar62 = puVar4;
                }
                puVar56 = puVar43;
                puStack_1f0 = puVar47;
                if (puVar43 < (uint64_t *)((int64_t)puVar62 - 7U)) {
                  if (*puVar47 == *puVar43) {
                    lVar33 = uVar11 + 0x10 + uVar24;
                    lVar55 = 0;
                    do {
                      puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                      if ((uint64_t *)((int64_t)puVar62 - 7U) <= puVar56) {
                        puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                        puStack_1f0 = (uint64_t *)(lVar33 + lVar55);
                        goto LAB_7fffa5602abe;
                      }
                      uVar25 = *(uint64_t *)(lVar33 + lVar55);
                      uVar36 = *puVar56;
                      lVar55 = lVar55 + 8;
                    } while (uVar25 == uVar36);
                    uVar52 = 0;
                    for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                        uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar25 = (uint64_t)(uVar52 >> 3) + lVar55;
                  }
                  else {
                    uVar52 = 0;
                    for (uVar25 = *puVar43 ^ *puVar47; (uVar25 & 1) == 0;
                        uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar25 = (uint64_t)(uVar52 >> 3);
                  }
                }
                else {
LAB_7fffa5602abe:
                  if ((puVar56 < (uint64_t *)((int64_t)puVar62 - 3U)) &&
                     ((int)*puStack_1f0 == (int)*puVar56)) {
                    puStack_1f0 = (uint64_t *)((int64_t)puStack_1f0 + 4);
                    puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                  }
                  if ((puVar56 < (uint64_t *)((int64_t)puVar62 - 1U)) &&
                     ((short)*puStack_1f0 == (short)*puVar56)) {
                    puStack_1f0 = (uint64_t *)((int64_t)puStack_1f0 + 2);
                    puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                  }
                  if (puVar56 < puVar62) {
                    puVar56 = (uint64_t *)
                              ((int64_t)puVar56 + (uint64_t)((char)*puStack_1f0 == (char)*puVar56)
                              );
                  }
                  uVar25 = (int64_t)puVar56 - (int64_t)puVar43;
                }
                if ((uint64_t *)((int64_t)puVar47 + uVar25) == puVar10) {
                  puVar43 = (uint64_t *)((int64_t)puVar43 + uVar25);
                  puVar62 = puVar43;
                  puVar47 = puVar3;
                  if (puVar43 < puVar48) {
                    if (*puVar3 == *puVar43) {
                      puVar62 = (uint64_t *)((int64_t)param_4 + uVar25 + 0x11);
                      lVar33 = 8;
                      if (puVar62 < puVar48) {
LAB_7fffa5602ba5:
                        if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar62)
                        goto code_r0x7fffa5602bb1;
                        uVar52 = 0;
                        for (uVar36 = *puVar62 ^ *(uint64_t *)((int64_t)puVar3 + lVar33);
                            (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                          uVar52 = uVar52 + 1;
                        }
                        uVar36 = (uint64_t)(uVar52 >> 3) + lVar33;
                        goto LAB_7fffa5602c59;
                      }
LAB_7fffa5602bc3:
                      puVar47 = (uint64_t *)(lVar33 + (int64_t)puVar3);
                      goto LAB_7fffa5602bc6;
                    }
                    uVar52 = 0;
                    for (uVar36 = *puVar3 ^ *puVar43; (uVar36 & 1) == 0;
                        uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar36 = (uint64_t)(uVar52 >> 3);
                  }
                  else {
LAB_7fffa5602bc6:
                    if ((puVar62 < puVar2) && ((int)*puVar47 == (int)*puVar62)) {
                      puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                      puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                    }
                    if ((puVar62 < puVar51) && ((short)*puVar47 == (short)*puVar62)) {
                      puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                      puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                    }
                    if (puVar62 < puVar4) {
                      puVar62 = (uint64_t *)
                                ((int64_t)puVar62 + (uint64_t)((char)*puVar47 == (char)*puVar62));
                    }
                    uVar36 = (int64_t)puVar62 - (int64_t)puVar43;
                  }
LAB_7fffa5602c59:
                  uVar25 = uVar25 + uVar36;
                }
                iStack_200 = (iVar34 - uVar49) - uVar30;
                lVar55 = uVar25 + 8;
                if (puStack_220 < puVar46) {
                  puVar43 = (uint64_t *)(uVar24 + (uVar11 - 1));
                  do {
                    puVar46 = param_4;
                    if ((char)*puVar46 != (char)*puVar43) {
                      puVar46 = (uint64_t *)((int64_t)puVar46 + 1);
                      break;
                    }
                    lVar55 = lVar55 + 1;
                    if (puVar46 <= puStack_220) break;
                    bVar17 = puVar57 < puVar43;
                    puVar43 = (uint64_t *)((int64_t)puVar43 + -1);
                    param_4 = (uint64_t *)((int64_t)puVar46 + -1);
                  } while (bVar17);
                }
                goto LAB_7fffa5601ffc;
              }
            }
LAB_7fffa5600e4a:
            puVar46 = (uint64_t *)((int64_t)puVar43 + 4);
            puVar62 = (uint64_t *)((int64_t)param_4 + 4);
            if (uVar52 < uVar37) {
              puVar47 = (uint64_t *)(((int64_t)puVar10 - (int64_t)puVar46) + (int64_t)puVar62);
              if (puVar4 <= puVar47) {
                puVar47 = puVar4;
              }
              puVar56 = puVar46;
              puVar39 = puVar62;
              if (puVar62 < (uint64_t *)((int64_t)puVar47 - 7U)) {
                if (*puVar46 == *puVar62) {
                  lVar33 = 0;
                  do {
                    puVar56 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xc);
                    if ((uint64_t *)((int64_t)puVar47 - 7U) <= puVar56) {
                      puVar39 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xc);
                      puVar56 = (uint64_t *)((int64_t)puVar43 + lVar33 + 0xc);
                      goto LAB_7fffa560199a;
                    }
                    uVar24 = *puVar56;
                    uVar25 = *(uint64_t *)((int64_t)puVar43 + lVar33 + 0xc);
                    lVar33 = lVar33 + 8;
                  } while (uVar25 == uVar24);
                  uVar31 = 0;
                  for (uVar24 = uVar24 ^ uVar25; (uVar24 & 1) == 0;
                      uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar31 = uVar31 + 1;
                  }
                  uVar24 = (uint64_t)(uVar31 >> 3) + lVar33;
                }
                else {
                  uVar31 = 0;
                  for (uVar24 = *puVar62 ^ *puVar46; (uVar24 & 1) == 0;
                      uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar31 = uVar31 + 1;
                  }
                  uVar24 = (uint64_t)(uVar31 >> 3);
                }
              }
              else {
LAB_7fffa560199a:
                if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
                   ((int)*puVar56 == (int)*puVar39)) {
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                }
                if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
                   ((short)*puVar56 == (short)*puVar39)) {
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                }
                if (puVar39 < puVar47) {
                  puVar39 = (uint64_t *)
                            ((int64_t)puVar39 + (uint64_t)((char)*puVar56 == (char)*puVar39));
                }
                uVar24 = (int64_t)puVar39 - (int64_t)puVar62;
              }
              if ((uint64_t *)((int64_t)puVar46 + uVar24) == puVar10) {
                puVar62 = (uint64_t *)((int64_t)puVar62 + uVar24);
                puVar46 = puVar62;
                puVar47 = puVar3;
                if (puVar62 < puVar48) {
                  if (*puVar3 == *puVar62) {
                    puVar46 = (uint64_t *)((int64_t)param_4 + uVar24 + 0xc);
                    lVar33 = 8;
                    if (puVar46 < puVar48) {
LAB_7fffa5601a60:
                      if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar46)
                      goto code_r0x7fffa5601a70;
                      uVar31 = 0;
                      for (uVar25 = *puVar46 ^ *(uint64_t *)((int64_t)puVar3 + lVar33);
                          (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                        uVar31 = uVar31 + 1;
                      }
                      uVar25 = (uint64_t)(uVar31 >> 3) + lVar33;
                      goto LAB_7fffa5601f2c;
                    }
LAB_7fffa5601a89:
                    puVar47 = (uint64_t *)(lVar33 + (int64_t)puVar3);
                    goto LAB_7fffa5601a8c;
                  }
                  uVar31 = 0;
                  for (uVar25 = *puVar3 ^ *puVar62; (uVar25 & 1) == 0;
                      uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar31 = uVar31 + 1;
                  }
                  uVar25 = (uint64_t)(uVar31 >> 3);
                }
                else {
LAB_7fffa5601a8c:
                  if ((puVar46 < puVar2) && ((int)*puVar47 == (int)*puVar46)) {
                    puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                    puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                  }
                  if ((puVar46 < puVar51) && ((short)*puVar47 == (short)*puVar46)) {
                    puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                    puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
                  }
                  if (puVar46 < puVar4) {
                    puVar46 = (uint64_t *)
                              ((int64_t)puVar46 + (uint64_t)((char)*puVar47 == (char)*puVar46));
                  }
                  uVar25 = (int64_t)puVar46 - (int64_t)puVar62;
                }
LAB_7fffa5601f2c:
                uVar24 = uVar24 + uVar25;
              }
              iStack_200 = iVar50 - uVar52;
              lVar55 = uVar24 + 4;
              puVar46 = param_4;
              if ((puStack_220 < param_4) && (puVar57 < puVar43)) {
                param_4 = (uint64_t *)((int64_t)param_4 + -1);
                while (puVar43 = (uint64_t *)((int64_t)puVar43 + -1),
                      (char)*param_4 == *(char *)puVar43) {
                  bVar17 = param_4 <= puStack_220;
                  lVar55 = lVar55 + 1;
                  param_4 = (uint64_t *)((int64_t)param_4 + -1);
                  if ((bVar17) || (puVar43 <= puVar57)) break;
                }
                puVar46 = (uint64_t *)((int64_t)param_4 + 1);
              }
              goto LAB_7fffa5601ffc;
            }
            puVar47 = puVar62;
            if (puVar62 < puVar48) {
              if (*puVar46 == *puVar62) {
                lVar33 = 0xc;
LAB_7fffa5600e90:
                puVar47 = (uint64_t *)(lVar33 + (int64_t)param_4);
                if (puVar47 < puVar48) {
                  if (*(uint64_t *)((int64_t)puVar43 + lVar33) == *puVar47)
                  goto code_r0x7fffa5600eb2;
                  uVar52 = 0;
                  for (uVar24 = *puVar47 ^ *(uint64_t *)((int64_t)puVar43 + lVar33);
                      (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar24 = ((uint64_t)(uVar52 >> 3) + lVar33) - 4;
                  goto LAB_7fffa56018cd;
                }
                puVar46 = (uint64_t *)(lVar33 + (int64_t)puVar43);
                goto joined_r0x7fffa56010e5;
              }
              uVar52 = 0;
              for (uVar24 = *puVar62 ^ *puVar46; (uVar24 & 1) == 0;
                  uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar52 = uVar52 + 1;
              }
              uVar24 = (uint64_t)(uVar52 >> 3);
            }
            else {
joined_r0x7fffa56010e5:
              if ((puVar47 < puVar2) && ((int)*puVar46 == (int)*puVar47)) {
                puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
              }
              if ((puVar47 < puVar51) && ((short)*puVar46 == (short)*puVar47)) {
                puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
                puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
              }
              if (puVar47 < puVar4) {
                puVar47 = (uint64_t *)
                          ((int64_t)puVar47 + (uint64_t)((char)*puVar46 == (char)*puVar47));
              }
              uVar24 = (int64_t)puVar47 - (int64_t)puVar62;
            }
LAB_7fffa56018cd:
            lVar55 = uVar24 + 4;
            iStack_200 = iStack_200 - (int)puVar43;
            puVar46 = param_4;
            if ((puStack_220 < param_4) && (puVar3 < puVar43)) {
              while( true ) {
                puVar46 = (uint64_t *)((int64_t)param_4 - 1);
                puVar43 = (uint64_t *)((int64_t)puVar43 + -1);
                if ((char)*puVar46 != *(char *)puVar43) break;
                lVar55 = lVar55 + 1;
                if ((puVar46 <= puStack_220) || (param_4 = puVar46, puVar43 <= puVar3))
                goto LAB_7fffa5601ffc;
              }
              puVar46 = param_4;
            }
            goto LAB_7fffa5601ffc;
          }
        }
        else if ((((char)uVar24 == (char)uVar31) && (uVar31 = uVar31 >> 8, uVar9 < uVar31)) &&
                (*(int *)(uVar11 + uVar31) == (int)*param_4)) {
          puVar43 = (uint64_t *)(uVar31 + uVar11);
          uVar52 = uVar31 + uVar49;
          goto LAB_7fffa5600cb1;
        }
        param_4 = (uint64_t *)
                  ((int64_t)param_4 + ((int64_t)param_4 - (int64_t)puStack_220 >> 8) + 1);
        goto LAB_7fffa56008d7;
      }
LAB_7fffa5605408:
      param_4 = puStack_220;
      goto LAB_7fffa560541f;
    }
LAB_7fffa55fde48:
    if (iVar34 != 0) {
      if (uVar52 < 0x3e) {
        uVar24 = 0;
        do {
          uVar24 = uVar24 + 0x40;
        } while (uVar24 < (uint64_t)(4L << (bVar29 & 0x3f)));
      }
      if (uVar53 < 0x3e) {
        uVar24 = 0;
        do {
          uVar24 = uVar24 + 0x40;
        } while (uVar24 < (uint64_t)(4L << (bVar28 & 0x3f)));
      }
    }
    param_4 = (uint64_t *)((uint64_t)(iVar61 == iVar18) + (int64_t)param_4);
    if (param_4 < puVar7) {
      puVar51 = (uint64_t *)((int64_t)puVar4 - 3);
      bVar26 = 0x40 - cVar22;
      puVar2 = (uint64_t *)((int64_t)puVar4 - 1);
      puVar1 = (uint64_t *)((int64_t)puVar4 - 7);
      puVar48 = puVar4 + -4;
      bVar27 = 0x20 - cVar23;
      do {
        iStack_200 = (int)param_4;
        iVar50 = iStack_200 - iVar44;
        iVar34 = iVar50 + 1;
        uVar52 = iVar34 - iVar41;
        piVar59 = (int *)(lVar16 + (uint64_t)uVar52);
        if (uVar52 < uVar37) {
          piVar59 = (int *)((uVar52 - uVar49) + uVar11);
        }
        uVar63 = (int)*param_4 * -0x61c8864f;
        uVar25 = *param_4 * -0x30e44323485a9b9d;
        uVar36 = uVar25 >> (0x38 - bVar29 & 0x3f);
        uVar25 = uVar25 >> (bVar26 & 0x3f);
        uVar53 = *(uint32_t *)(lVar14 + uVar25 * 4);
        uVar24 = (uint64_t)(uVar63 >> (bVar27 & 0x1f));
        uVar63 = uVar63 >> (0x18 - bVar28 & 0x1f);
        uVar31 = *(uint32_t *)(uVar13 + (uVar36 >> 8) * 4);
        uVar30 = *(uint32_t *)(lVar15 + uVar24 * 4);
        uVar40 = *(uint32_t *)(uVar12 + (uint64_t)(uVar63 >> 8) * 4);
        *(int *)(lVar15 + uVar24 * 4) = iVar50;
        *(int *)(lVar14 + uVar25 * 4) = iVar50;
        if (((uVar37 - 1) - uVar52 < 3) || (*piVar59 != *(int *)((int64_t)param_4 + 1))) {
          if (uVar37 < uVar53) {
            puVar46 = (uint64_t *)((uint64_t)uVar53 + lVar16);
            if (*puVar46 != *param_4) goto LAB_7fffa55fe410;
            puVar43 = puVar46 + 1;
            puVar62 = param_4 + 1;
            puVar47 = puVar62;
            if (puVar62 < puVar1) {
              if (*puVar43 == *puVar62) {
                lVar33 = 0x10;
LAB_7fffa55fe6f0:
                puVar47 = (uint64_t *)((int64_t)param_4 + lVar33);
                if (puVar47 < puVar1) {
                  if (*(uint64_t *)((int64_t)puVar46 + lVar33) == *puVar47)
                  goto code_r0x7fffa55fe712;
                  uVar52 = 0;
                  for (uVar24 = *(uint64_t *)((int64_t)puVar46 + lVar33) ^ *puVar47;
                      (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar24 = (lVar33 + (uint64_t)(uVar52 >> 3)) - 8;
                  goto LAB_7fffa55feb0d;
                }
                puVar43 = (uint64_t *)(lVar33 + (int64_t)puVar46);
                goto joined_r0x7fffa55feaa2;
              }
              uVar52 = 0;
              for (uVar24 = *puVar43 ^ *puVar62; (uVar24 & 1) == 0;
                  uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar52 = uVar52 + 1;
              }
              uVar24 = (uint64_t)(uVar52 >> 3);
            }
            else {
joined_r0x7fffa55feaa2:
              if ((puVar47 < puVar51) && ((int)*puVar43 == (int)*puVar47)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
                puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
              }
              if ((puVar47 < puVar2) && ((short)*puVar43 == (short)*puVar47)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
                puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
              }
              if (puVar47 < puVar4) {
                puVar47 = (uint64_t *)
                          ((int64_t)puVar47 + (uint64_t)((char)*puVar43 == (char)*puVar47));
              }
              uVar24 = (int64_t)puVar47 - (int64_t)puVar62;
            }
LAB_7fffa55feb0d:
            iStack_200 = iStack_200 - (int)puVar46;
            lVar33 = uVar24 + 8;
            if (puStack_220 < param_4) {
              puVar46 = (uint64_t *)((uint64_t)uVar53 + lVar16 + -1);
              param_4 = (uint64_t *)((int64_t)param_4 + -1);
              do {
                if ((char)*param_4 != (char)*puVar46) goto LAB_7fffa55ff8b8;
                lVar33 = lVar33 + 1;
                puVar43 = (uint64_t *)((int64_t)param_4 + -1);
                if (param_4 <= puStack_220) break;
                bVar17 = puVar3 < puVar46;
                puVar46 = (uint64_t *)((int64_t)puVar46 + -1);
                param_4 = puVar43;
              } while (bVar17);
LAB_7fffa55ff8b3:
              puVar43 = (uint64_t *)((int64_t)puVar43 + 1);
            }
            else {
LAB_7fffa55ff8bb:
              puVar43 = param_4;
            }
LAB_7fffa55ff8c6:
            puVar46 = (uint64_t *)param_2[3];
            uVar24 = (int64_t)puVar43 - (int64_t)puStack_220;
            if (puVar48 < puVar43) {
              puVar62 = puVar46;
              if (puStack_220 <= puVar48) {
                uVar25 = puStack_220[1];
                puVar62 = (uint64_t *)
                          ((int64_t)puVar46 + ((int64_t)puVar48 - (int64_t)puStack_220));
                *puVar46 = *puStack_220;
                puVar46[1] = uVar25;
                if (0x10 < (int64_t)puVar48 - (int64_t)puStack_220) {
                  puVar46 = puVar46 + 6;
                  while( true ) {
                    uVar25 = puStack_220[3];
                    puVar46[-4] = puStack_220[2];
                    puVar46[-3] = uVar25;
                    uVar25 = puStack_220[5];
                    puVar46[-2] = puStack_220[4];
                    puVar46[-1] = uVar25;
                    if (puVar62 <= puVar46) break;
                    puVar46 = puVar46 + 4;
                    puStack_220 = puStack_220 + 4;
                  }
                }
                puStack_220 = puVar48;
              }
              if (puStack_220 < puVar43) {
                uVar25 = (int64_t)puVar43 - (int64_t)puStack_220;
                if ((uint64_t)((int64_t)puVar62 - (int64_t)puStack_220) < 0x20 || uVar25 < 4) {
LAB_7fffa55ff977:
                  puVar46 = puVar62;
                }
                else {
                  if (uVar25 < 0x20) {
                    uVar36 = 0;
                  }
                  else {
                    uVar36 = uVar25 & 0xffffffffffffffe0;
                    uVar58 = 0;
                    do {
                      uVar19 = ((uint64_t *)((int64_t)puStack_220 + uVar58))[1];
                      puVar5 = (uint64_t *)((int64_t)puStack_220 + uVar58 + 0x10);
                      uVar20 = *puVar5;
                      uVar21 = puVar5[1];
                      *(uint64_t *)((int64_t)puVar62 + uVar58) =
                           *(uint64_t *)((int64_t)puStack_220 + uVar58);
                      ((uint64_t *)((int64_t)puVar62 + uVar58))[1] = uVar19;
                      puVar5 = (uint64_t *)((int64_t)puVar62 + uVar58 + 0x10);
                      *puVar5 = uVar20;
                      puVar5[1] = uVar21;
                      uVar58 = uVar58 + 0x20;
                    } while (uVar58 != uVar36);
                    if (uVar25 == uVar36) goto LAB_7fffa55ffba0;
                    if ((uVar25 & 0x1c) == 0) {
                      puVar62 = (uint64_t *)((int64_t)puVar62 + uVar36);
                      puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar36);
                      goto LAB_7fffa55ff977;
                    }
                  }
                  uVar58 = uVar25 & 0xfffffffffffffffc;
                  puVar46 = (uint64_t *)((int64_t)puVar62 + uVar58);
                  do {
                    *(uint32_t *)((int64_t)puVar62 + uVar36) =
                         *(uint32_t *)((int64_t)puStack_220 + uVar36);
                    uVar36 = uVar36 + 4;
                  } while (uVar36 != uVar58);
                  if (uVar25 == uVar58) goto LAB_7fffa55ffba0;
                  puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar58);
                }
                uVar25 = (uint64_t)((int)puVar43 - (int)puStack_220 & 7);
                if (uVar25 == 0) {
                  puVar56 = puStack_220;
                }
                else {
                  uVar36 = 0;
                  puVar47 = puVar46;
                  puVar62 = puStack_220;
                  do {
                    puVar56 = (uint64_t *)((int64_t)puVar62 + 1);
                    puVar46 = (uint64_t *)((int64_t)puVar47 + 1);
                    uVar36 = uVar36 + 1;
                    *(char *)puVar47 = (char)*puVar62;
                    puVar47 = puVar46;
                    puVar62 = puVar56;
                  } while (uVar36 != uVar25);
                }
                if ((uint64_t)((int64_t)puStack_220 - (int64_t)puVar43) < 0xfffffffffffffff9) {
                  lVar55 = 0;
                  while( true ) {
                    *(uint8_t *)((int64_t)puVar46 + lVar55) =
                         *(uint8_t *)((int64_t)puVar56 + lVar55);
                    *(uint8_t *)((int64_t)puVar46 + lVar55 + 1) =
                         *(uint8_t *)((int64_t)puVar56 + lVar55 + 1);
                    *(uint8_t *)((int64_t)puVar46 + lVar55 + 2) =
                         *(uint8_t *)((int64_t)puVar56 + lVar55 + 2);
                    *(uint8_t *)((int64_t)puVar46 + lVar55 + 3) =
                         *(uint8_t *)((int64_t)puVar56 + lVar55 + 3);
                    *(uint8_t *)((int64_t)puVar46 + lVar55 + 4) =
                         *(uint8_t *)((int64_t)puVar56 + lVar55 + 4);
                    *(uint8_t *)((int64_t)puVar46 + lVar55 + 5) =
                         *(uint8_t *)((int64_t)puVar56 + lVar55 + 5);
                    *(uint8_t *)((int64_t)puVar46 + lVar55 + 6) =
                         *(uint8_t *)((int64_t)puVar56 + lVar55 + 6);
                    *(uint8_t *)((int64_t)puVar46 + lVar55 + 7) =
                         *(uint8_t *)((int64_t)puVar56 + lVar55 + 7);
                    if ((uint64_t *)((int64_t)puVar56 + lVar55 + 8) == puVar43) break;
                    lVar55 = lVar55 + 8;
                  }
                }
              }
LAB_7fffa55ffba0:
              lVar55 = param_2[1];
              param_2[3] = param_2[3] + uVar24;
              if (0xffff < uVar24) {
                *(uint32_t *)(param_2 + 9) = 1;
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar55 - *param_2) >> 3);
              }
            }
            else {
              uVar25 = puStack_220[1];
              *puVar46 = *puStack_220;
              puVar46[1] = uVar25;
              if (0x10 < uVar24) {
                lVar55 = param_2[3];
                uVar25 = puStack_220[3];
                *(uint64_t *)(lVar55 + 0x10) = puStack_220[2];
                *(uint64_t *)(lVar55 + 0x18) = uVar25;
                if (0x20 < (int64_t)uVar24) {
                  uVar25 = lVar55 + 0x40;
                  puStack_220 = puStack_220 + 6;
                  while( true ) {
                    uVar36 = puStack_220[-1];
                    *(uint64_t *)(uVar25 - 0x20) = puStack_220[-2];
                    *(uint64_t *)(uVar25 - 0x18) = uVar36;
                    uVar36 = puStack_220[1];
                    *(uint64_t *)(uVar25 - 0x10) = *puStack_220;
                    *(uint64_t *)(uVar25 - 8) = uVar36;
                    if (lVar55 + uVar24 <= uVar25) break;
                    uVar25 = uVar25 + 0x20;
                    puStack_220 = puStack_220 + 4;
                  }
                }
                goto LAB_7fffa55ffba0;
              }
              lVar55 = param_2[1];
              param_2[3] = param_2[3] + uVar24;
            }
            *(short *)(lVar55 + 4) = (short)uVar24;
            *(int *)param_2[1] = iStack_200 + 3;
            lVar55 = param_2[1];
            uVar24 = lVar33 - 3;
            iVar35 = iVar41;
            iVar41 = iStack_200;
            goto joined_r0x7fffa55ffca3;
          }
          if ((char)uVar36 == (char)uVar31) {
            uVar31 = uVar31 >> 8;
            if ((uVar9 < uVar31) && (puVar46 = (uint64_t *)(uVar11 + uVar31), *puVar46 == *param_4)
               ) {
              puVar43 = param_4 + 1;
              puVar62 = puVar46 + 1;
              puVar47 = (uint64_t *)
                        ((int64_t)param_4 + (int64_t)puVar10 + (8 - (int64_t)puVar62));
              if (puVar4 <= puVar47) {
                puVar47 = puVar4;
              }
              puVar39 = puVar62;
              puVar56 = puVar43;
              if (puVar43 < (uint64_t *)((int64_t)puVar47 - 7U)) {
                if (*puVar62 == *puVar43) {
                  lVar33 = 0x10;
LAB_7fffa55fe3e0:
                  puVar56 = (uint64_t *)((int64_t)param_4 + lVar33);
                  if (puVar56 < (uint64_t *)((int64_t)puVar47 - 7U)) {
                    if (*(uint64_t *)((int64_t)puVar46 + lVar33) == *puVar56)
                    goto code_r0x7fffa55fe3fd;
                    uVar52 = 0;
                    for (uVar24 = *puVar56 ^ *(uint64_t *)((int64_t)puVar46 + lVar33);
                        (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar24 = ((uint64_t)(uVar52 >> 3) + lVar33) - 8;
                    goto LAB_7fffa55ff531;
                  }
                  puVar39 = (uint64_t *)((int64_t)puVar46 + lVar33);
                  goto LAB_7fffa55ff43f;
                }
                uVar52 = 0;
                for (uVar24 = *puVar43 ^ *puVar62; (uVar24 & 1) == 0;
                    uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                  uVar52 = uVar52 + 1;
                }
                uVar24 = (uint64_t)(uVar52 >> 3);
              }
              else {
LAB_7fffa55ff43f:
                if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
                   ((int)*puVar39 == (int)*puVar56)) {
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                }
                if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
                   ((short)*puVar39 == (short)*puVar56)) {
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                }
                if (puVar56 < puVar47) {
                  puVar56 = (uint64_t *)
                            ((int64_t)puVar56 + (uint64_t)((char)*puVar39 == (char)*puVar56));
                }
                uVar24 = (int64_t)puVar56 - (int64_t)puVar43;
              }
LAB_7fffa55ff531:
              if ((uint64_t *)((int64_t)puVar62 + uVar24) == puVar10) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + uVar24);
                puVar46 = puVar43;
                puVar62 = puVar3;
                if (puVar43 < puVar1) {
                  if (*puVar3 == *puVar43) {
                    puVar46 = (uint64_t *)((int64_t)param_4 + uVar24 + 0x10);
                    lVar33 = 8;
                    if (puVar46 < puVar1) {
LAB_7fffa55ff590:
                      if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar46)
                      goto code_r0x7fffa55ff5a0;
                      uVar52 = 0;
                      for (uVar25 = *(uint64_t *)((int64_t)puVar3 + lVar33) ^ *puVar46;
                          (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                        uVar52 = uVar52 + 1;
                      }
                      uVar25 = (uint64_t)(uVar52 >> 3) + lVar33;
                      goto LAB_7fffa55ff84b;
                    }
LAB_7fffa55ff5b2:
                    puVar62 = (uint64_t *)(lVar33 + (int64_t)puVar3);
                    goto LAB_7fffa55ff5b5;
                  }
                  uVar52 = 0;
                  for (uVar25 = *puVar3 ^ *puVar43; (uVar25 & 1) == 0;
                      uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar25 = (uint64_t)(uVar52 >> 3);
                }
                else {
LAB_7fffa55ff5b5:
                  if ((puVar46 < puVar51) && ((int)*puVar62 == (int)*puVar46)) {
                    puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                  }
                  if ((puVar46 < puVar2) && ((short)*puVar62 == (short)*puVar46)) {
                    puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                  }
                  if (puVar46 < puVar4) {
                    puVar46 = (uint64_t *)
                              ((int64_t)puVar46 + (uint64_t)((char)*puVar62 == (char)*puVar46));
                  }
                  uVar25 = (int64_t)puVar46 - (int64_t)puVar43;
                }
LAB_7fffa55ff84b:
                uVar24 = uVar24 + uVar25;
              }
              lVar33 = uVar24 + 8;
              iStack_200 = iVar50 - (uVar31 + uVar49);
              if (param_4 <= puStack_220) goto LAB_7fffa55ff8bb;
              puVar46 = (uint64_t *)((uint64_t)uVar31 + (uVar11 - 1));
              param_4 = (uint64_t *)((int64_t)param_4 + -1);
              do {
                if ((char)*param_4 != (char)*puVar46) goto LAB_7fffa55ff8b8;
                lVar33 = lVar33 + 1;
                puVar43 = (uint64_t *)((int64_t)param_4 + -1);
                if (param_4 <= puStack_220) break;
                bVar17 = puVar57 < puVar46;
                puVar46 = (uint64_t *)((int64_t)puVar46 + -1);
                param_4 = puVar43;
              } while (bVar17);
              goto LAB_7fffa55ff8b3;
            }
          }
LAB_7fffa55fe410:
          if (uVar37 < uVar30) {
            puVar46 = (uint64_t *)((uint64_t)uVar30 + lVar16);
            if ((int)*puVar46 == (int)*param_4) goto LAB_7fffa55fe496;
          }
          else if ((((char)uVar63 == (char)uVar40) && (uVar40 = uVar40 >> 8, uVar9 < uVar40)) &&
                  (*(int *)(uVar11 + uVar40) == (int)*param_4)) {
            puVar46 = (uint64_t *)(uVar40 + uVar11);
            uVar30 = uVar40 + uVar49;
LAB_7fffa55fe496:
            uVar36 = *(int64_t *)((int64_t)param_4 + 1) * -0x30e44323485a9b9d;
            uVar25 = uVar36 >> (bVar26 & 0x3f);
            uVar36 = uVar36 >> (0x38 - bVar29 & 0x3f);
            puVar43 = (uint64_t *)((int64_t)param_4 + 1);
            uVar52 = *(uint32_t *)(uVar13 + (uVar36 >> 8) * 4);
            uVar53 = *(uint32_t *)(lVar14 + uVar25 * 4);
            uVar24 = (uint64_t)uVar53;
            *(int *)(lVar14 + uVar25 * 4) = iVar34;
            if (uVar37 < uVar53) {
              puVar62 = (uint64_t *)(lVar16 + uVar24);
              if (*puVar62 != *puVar43) goto LAB_7fffa55fe76f;
              puVar46 = (uint64_t *)((int64_t)param_4 + 9);
              puVar47 = puVar62 + 1;
              puVar56 = puVar46;
              if (puVar46 < puVar1) {
                if (*puVar47 == *puVar46) {
                  lVar33 = lVar16 + 0x10 + uVar24;
                  lVar55 = 0;
LAB_7fffa55ff030:
                  puVar47 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                  if (puVar47 < puVar1) {
                    uVar25 = *(uint64_t *)(lVar33 + lVar55);
                    uVar36 = *puVar47;
                    if (uVar25 == uVar36) goto code_r0x7fffa55ff052;
                    uVar52 = 0;
                    for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                        uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar25 = (uint64_t)(uVar52 >> 3) + lVar55 + 8;
                    goto LAB_7fffa55ff375;
                  }
                  puVar47 = (uint64_t *)(lVar33 + lVar55);
                  puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                  goto joined_r0x7fffa55ff302;
                }
                uVar52 = 0;
                for (uVar25 = *puVar47 ^ *puVar46; (uVar25 & 1) == 0;
                    uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                  uVar52 = uVar52 + 1;
                }
                uVar25 = (uint64_t)(uVar52 >> 3);
              }
              else {
joined_r0x7fffa55ff302:
                if ((puVar56 < puVar51) && ((int)*puVar47 == (int)*puVar56)) {
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                }
                if ((puVar56 < puVar2) && ((short)*puVar47 == (short)*puVar56)) {
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                }
                if (puVar56 < puVar4) {
                  puVar56 = (uint64_t *)
                            ((int64_t)puVar56 + (uint64_t)((char)*puVar47 == (char)*puVar56));
                }
                uVar25 = (int64_t)puVar56 - (int64_t)puVar46;
              }
LAB_7fffa55ff375:
              lVar33 = uVar25 + 8;
              iStack_200 = (int)puVar43 - (int)puVar62;
              if (puStack_220 < puVar43) {
                puVar46 = (uint64_t *)(uVar24 + lVar16 + -1);
                for (; (char)*param_4 == (char)*puVar46;
                    param_4 = (uint64_t *)((int64_t)param_4 + -1)) {
                  lVar33 = lVar33 + 1;
                  if ((puVar46 <= puVar3) || (param_4 <= puStack_220)) goto LAB_7fffa55ff8bb;
                  puVar46 = (uint64_t *)((int64_t)puVar46 + -1);
                }
LAB_7fffa55ff8b8:
                param_4 = (uint64_t *)((int64_t)param_4 + 1);
                goto LAB_7fffa55ff8bb;
              }
            }
            else {
              if ((char)uVar52 == (char)uVar36) {
                uVar52 = uVar52 >> 8;
                uVar24 = (uint64_t)uVar52;
                if ((uVar9 < uVar52) && (*(uint64_t *)(uVar11 + uVar24) == *puVar43)) {
                  puVar47 = (uint64_t *)(uVar11 + uVar24) + 1;
                  puVar46 = (uint64_t *)((int64_t)param_4 + 9);
                  puVar62 = (uint64_t *)
                            ((int64_t)param_4 + (int64_t)puVar10 + (9 - (int64_t)puVar47));
                  if (puVar4 <= puVar62) {
                    puVar62 = puVar4;
                  }
                  puVar56 = puVar46;
                  puVar39 = puVar47;
                  if (puVar46 < (uint64_t *)((int64_t)puVar62 - 7U)) {
                    if (*puVar47 == *puVar46) {
                      lVar33 = uVar11 + 0x10 + uVar24;
                      lVar55 = 0;
                      do {
                        puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                        if ((uint64_t *)((int64_t)puVar62 - 7U) <= puVar56) {
                          puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                          puVar39 = (uint64_t *)(lVar33 + lVar55);
                          goto LAB_7fffa560043d;
                        }
                        uVar25 = *(uint64_t *)(lVar33 + lVar55);
                        uVar36 = *puVar56;
                        lVar55 = lVar55 + 8;
                      } while (uVar25 == uVar36);
                      uVar53 = 0;
                      for (uVar36 = uVar36 ^ uVar25; (uVar36 & 1) == 0;
                          uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                        uVar53 = uVar53 + 1;
                      }
                      uVar25 = (uint64_t)(uVar53 >> 3) + lVar55;
                    }
                    else {
                      uVar53 = 0;
                      for (uVar25 = *puVar46 ^ *puVar47; (uVar25 & 1) == 0;
                          uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                        uVar53 = uVar53 + 1;
                      }
                      uVar25 = (uint64_t)(uVar53 >> 3);
                    }
                  }
                  else {
LAB_7fffa560043d:
                    if ((puVar56 < (uint64_t *)((int64_t)puVar62 - 3U)) &&
                       ((int)*puVar39 == (int)*puVar56)) {
                      puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                      puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                    }
                    if ((puVar56 < (uint64_t *)((int64_t)puVar62 - 1U)) &&
                       ((short)*puVar39 == (short)*puVar56)) {
                      puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                      puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                    }
                    if (puVar56 < puVar62) {
                      puVar56 = (uint64_t *)
                                ((int64_t)puVar56 + (uint64_t)((char)*puVar39 == (char)*puVar56));
                    }
                    uVar25 = (int64_t)puVar56 - (int64_t)puVar46;
                  }
                  if ((uint64_t *)((int64_t)puVar47 + uVar25) == puVar10) {
                    puVar46 = (uint64_t *)((int64_t)puVar46 + uVar25);
                    puVar62 = puVar46;
                    puVar47 = puVar3;
                    if (puVar46 < puVar1) {
                      if (*puVar3 == *puVar46) {
                        puVar62 = (uint64_t *)((int64_t)param_4 + uVar25 + 0x11);
                        lVar33 = 8;
                        if (puVar62 < puVar1) {
LAB_7fffa5600545:
                          if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar62)
                          goto code_r0x7fffa5600555;
                          uVar53 = 0;
                          for (uVar36 = *puVar62 ^ *(uint64_t *)((int64_t)puVar3 + lVar33);
                              (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                            uVar53 = uVar53 + 1;
                          }
                          uVar36 = (uint64_t)(uVar53 >> 3) + lVar33;
                          goto LAB_7fffa560062b;
                        }
LAB_7fffa5600567:
                        puVar47 = (uint64_t *)(lVar33 + (int64_t)puVar3);
                        goto LAB_7fffa560056a;
                      }
                      uVar53 = 0;
                      for (uVar36 = *puVar3 ^ *puVar46; (uVar36 & 1) == 0;
                          uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                        uVar53 = uVar53 + 1;
                      }
                      uVar36 = (uint64_t)(uVar53 >> 3);
                    }
                    else {
LAB_7fffa560056a:
                      if ((puVar62 < puVar51) && ((int)*puVar47 == (int)*puVar62)) {
                        puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                        puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                      }
                      if ((puVar62 < puVar2) && ((short)*puVar47 == (short)*puVar62)) {
                        puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                        puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                      }
                      if (puVar62 < puVar4) {
                        puVar62 = (uint64_t *)
                                  ((int64_t)puVar62 + (uint64_t)((char)*puVar47 == (char)*puVar62)
                                  );
                      }
                      uVar36 = (int64_t)puVar62 - (int64_t)puVar46;
                    }
LAB_7fffa560062b:
                    uVar25 = uVar25 + uVar36;
                  }
                  iStack_200 = (iVar34 - uVar49) - uVar52;
                  lVar33 = uVar25 + 8;
                  if (puStack_220 < puVar43) {
                    lVar32 = uVar24 + (uVar11 - 1);
                    for (lVar55 = 0;
                        *(char *)((int64_t)param_4 + lVar55) == *(char *)(lVar32 + lVar55);
                        lVar55 = lVar55 + -1) {
                      puVar43 = (uint64_t *)((int64_t)param_4 + lVar55);
                      if (((uint64_t *)(lVar32 + lVar55) <= puVar57) || (puVar43 <= puStack_220)) {
                        lVar33 = lVar33 + 1;
                        goto LAB_7fffa55ff8c6;
                      }
                      lVar33 = lVar33 + 1;
                    }
                    puVar43 = (uint64_t *)((int64_t)param_4 + lVar55 + 1);
                  }
                  goto LAB_7fffa55ff8c6;
                }
              }
LAB_7fffa55fe76f:
              puVar43 = (uint64_t *)((int64_t)param_4 + 4);
              puVar62 = (uint64_t *)((int64_t)puVar46 + 4);
              if (uVar37 <= uVar30) {
                puVar47 = puVar43;
                if (puVar43 < puVar1) {
                  if (*puVar62 == *puVar43) {
                    lVar33 = 0xc;
LAB_7fffa55fe880:
                    puVar47 = (uint64_t *)((int64_t)param_4 + lVar33);
                    if (puVar47 < puVar1) {
                      if (*(uint64_t *)((int64_t)puVar46 + lVar33) == *puVar47)
                      goto code_r0x7fffa55fe8a2;
                      uVar52 = 0;
                      for (uVar24 = *(uint64_t *)((int64_t)puVar46 + lVar33) ^ *puVar47;
                          (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                        uVar52 = uVar52 + 1;
                      }
                      uVar24 = ((uint64_t)(uVar52 >> 3) + lVar33) - 4;
                      goto LAB_7fffa55ff0d6;
                    }
                    puVar62 = (uint64_t *)(lVar33 + (int64_t)puVar46);
                    goto joined_r0x7fffa55fea8f;
                  }
                  uVar52 = 0;
                  for (uVar24 = *puVar62 ^ *puVar43; (uVar24 & 1) == 0;
                      uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar24 = (uint64_t)(uVar52 >> 3);
                }
                else {
joined_r0x7fffa55fea8f:
                  if ((puVar47 < puVar51) && ((int)*puVar62 == (int)*puVar47)) {
                    puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                  }
                  if ((puVar47 < puVar2) && ((short)*puVar62 == (short)*puVar47)) {
                    puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                  }
                  if (puVar47 < puVar4) {
                    puVar47 = (uint64_t *)
                              ((int64_t)puVar47 + (uint64_t)((char)*puVar62 == (char)*puVar47));
                  }
                  uVar24 = (int64_t)puVar47 - (int64_t)puVar43;
                }
LAB_7fffa55ff0d6:
                lVar33 = uVar24 + 4;
                iStack_200 = iStack_200 - (int)puVar46;
                if ((puVar46 <= puVar3) || (param_4 <= puStack_220)) goto LAB_7fffa55ff8bb;
                param_4 = (uint64_t *)((int64_t)param_4 + -1);
                do {
                  puVar46 = (uint64_t *)((int64_t)puVar46 + -1);
                  if ((char)*param_4 != *(char *)puVar46) goto LAB_7fffa55ff8b8;
                  lVar33 = lVar33 + 1;
                  puVar43 = (uint64_t *)((int64_t)param_4 + -1);
                } while ((puStack_220 < param_4) && (param_4 = puVar43, puVar3 < puVar46));
                goto LAB_7fffa55ff8b3;
              }
              puVar47 = (uint64_t *)(((int64_t)puVar10 - (int64_t)puVar62) + (int64_t)puVar43);
              if (puVar4 <= puVar47) {
                puVar47 = puVar4;
              }
              puVar56 = puVar62;
              puVar39 = puVar43;
              if (puVar43 < (uint64_t *)((int64_t)puVar47 - 7U)) {
                if (*puVar62 == *puVar43) {
                  lVar33 = 0;
                  do {
                    puVar56 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xc);
                    if ((uint64_t *)((int64_t)puVar47 - 7U) <= puVar56) {
                      puVar39 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xc);
                      puVar56 = (uint64_t *)((int64_t)puVar46 + lVar33 + 0xc);
                      goto LAB_7fffa55ff166;
                    }
                    uVar24 = *(uint64_t *)((int64_t)puVar46 + lVar33 + 0xc);
                    uVar25 = *puVar56;
                    lVar33 = lVar33 + 8;
                  } while (uVar24 == uVar25);
                  uVar52 = 0;
                  for (uVar25 = uVar25 ^ uVar24; (uVar25 & 1) == 0;
                      uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar24 = (uint64_t)(uVar52 >> 3) + lVar33;
                }
                else {
                  uVar52 = 0;
                  for (uVar24 = *puVar43 ^ *puVar62; (uVar24 & 1) == 0;
                      uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar24 = (uint64_t)(uVar52 >> 3);
                }
              }
              else {
LAB_7fffa55ff166:
                if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
                   ((int)*puVar56 == (int)*puVar39)) {
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                }
                if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
                   ((short)*puVar56 == (short)*puVar39)) {
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                }
                if (puVar39 < puVar47) {
                  puVar39 = (uint64_t *)
                            ((int64_t)puVar39 + (uint64_t)((char)*puVar56 == (char)*puVar39));
                }
                uVar24 = (int64_t)puVar39 - (int64_t)puVar43;
              }
              if ((uint64_t *)((int64_t)puVar62 + uVar24) == puVar10) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + uVar24);
                puVar62 = puVar3;
                puVar47 = puVar43;
                if (puVar43 < puVar1) {
                  if (*puVar3 == *puVar43) {
                    lVar33 = 0;
                    do {
                      puVar62 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar24 + 0xc);
                      if (puVar1 <= puVar62) {
                        puVar47 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar24 + 0xc);
                        puVar62 = (uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                        goto LAB_7fffa55ff6f4;
                      }
                      uVar25 = *puVar62;
                      uVar36 = *(uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                      lVar33 = lVar33 + 8;
                    } while (uVar36 == uVar25);
                    uVar52 = 0;
                    for (uVar36 = uVar36 ^ uVar25; (uVar36 & 1) == 0;
                        uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar25 = (uint64_t)(uVar52 >> 3) + lVar33;
                  }
                  else {
                    uVar52 = 0;
                    for (uVar25 = *puVar43 ^ *puVar3; (uVar25 & 1) == 0;
                        uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar25 = (uint64_t)(uVar52 >> 3);
                  }
                }
                else {
LAB_7fffa55ff6f4:
                  if ((puVar47 < puVar51) && ((int)*puVar62 == (int)*puVar47)) {
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                    puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                  }
                  if ((puVar47 < puVar2) && ((short)*puVar62 == (short)*puVar47)) {
                    puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                  }
                  if (puVar47 < puVar4) {
                    puVar47 = (uint64_t *)
                              ((int64_t)puVar47 + (uint64_t)((char)*puVar62 == (char)*puVar47));
                  }
                  uVar25 = (int64_t)puVar47 - (int64_t)puVar43;
                }
                uVar24 = uVar24 + uVar25;
              }
              lVar33 = uVar24 + 4;
              iStack_200 = iVar50 - uVar30;
              if ((puStack_220 < param_4) && (puVar57 < puVar46)) {
                do {
                  puVar43 = (uint64_t *)((int64_t)param_4 - 1);
                  puVar46 = (uint64_t *)((int64_t)puVar46 + -1);
                  if ((char)*puVar43 != *(char *)puVar46) goto LAB_7fffa55ff7f5;
                  lVar33 = lVar33 + 1;
                } while ((puStack_220 < puVar43) && (param_4 = puVar43, puVar57 < puVar46));
              }
              else {
LAB_7fffa55ff7f5:
                puVar43 = param_4;
              }
            }
            goto LAB_7fffa55ff8c6;
          }
          param_4 = (uint64_t *)
                    ((int64_t)param_4 + ((int64_t)param_4 - (int64_t)puStack_220 >> 8) + 1);
        }
        else {
          puVar46 = puVar4;
          if (uVar52 < uVar37) {
            puVar46 = puVar10;
          }
          puVar43 = (uint64_t *)((int64_t)param_4 + 5);
          puVar62 = (uint64_t *)(piVar59 + 1);
          puVar47 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar46 + (5 - (int64_t)puVar62));
          if (puVar4 <= puVar47) {
            puVar47 = puVar4;
          }
          puVar56 = puVar62;
          puVar39 = puVar43;
          if (puVar43 < (uint64_t *)((int64_t)puVar47 - 7U)) {
            if (*puVar43 == *puVar62) {
              lVar33 = 0;
LAB_7fffa55fe220:
              puVar56 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xd);
              if (puVar56 < (uint64_t *)((int64_t)puVar47 - 7U)) {
                uVar24 = *(uint64_t *)((int64_t)piVar59 + lVar33 + 0xc);
                uVar25 = *puVar56;
                if (uVar24 == uVar25) goto code_r0x7fffa55fe24c;
                uVar52 = 0;
                for (uVar24 = uVar24 ^ uVar25; (uVar24 & 1) == 0;
                    uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                  uVar52 = uVar52 + 1;
                }
                uVar24 = (uint64_t)(uVar52 >> 3) + lVar33 + 8;
                goto LAB_7fffa55fea3c;
              }
              puVar39 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xd);
              puVar56 = (uint64_t *)((int64_t)piVar59 + lVar33 + 0xc);
              goto LAB_7fffa55fe8f4;
            }
            uVar52 = 0;
            for (uVar24 = *puVar62 ^ *puVar43; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar52 = uVar52 + 1;
            }
            uVar24 = (uint64_t)(uVar52 >> 3);
          }
          else {
LAB_7fffa55fe8f4:
            if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
               ((int)*puVar56 == (int)*puVar39)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
              puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
            }
            if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
               ((short)*puVar56 == (short)*puVar39)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
              puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
            }
            if (puVar39 < puVar47) {
              puVar39 = (uint64_t *)
                        ((int64_t)puVar39 + (uint64_t)((char)*puVar56 == (char)*puVar39));
            }
            uVar24 = (int64_t)puVar39 - (int64_t)puVar43;
          }
LAB_7fffa55fea3c:
          if ((uint64_t *)((int64_t)puVar62 + uVar24) == puVar46) {
            puVar43 = (uint64_t *)((int64_t)puVar43 + uVar24);
            puVar46 = puVar3;
            puVar62 = puVar43;
            if (puVar43 < puVar1) {
              if (*puVar3 == *puVar43) {
                puVar62 = (uint64_t *)((int64_t)param_4 + uVar24 + 0xd);
                lVar33 = 8;
                if (puVar62 < puVar1) {
LAB_7fffa55feb80:
                  if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar62)
                  goto code_r0x7fffa55feb90;
                  uVar52 = 0;
                  for (uVar25 = *(uint64_t *)((int64_t)puVar3 + lVar33) ^ *puVar62;
                      (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar25 = (uint64_t)(uVar52 >> 3) + lVar33;
                  goto LAB_7fffa55fec0b;
                }
LAB_7fffa55feba2:
                puVar46 = (uint64_t *)(lVar33 + (int64_t)puVar3);
                goto LAB_7fffa55feba5;
              }
              uVar52 = 0;
              for (uVar25 = *puVar43 ^ *puVar3; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar52 = uVar52 + 1;
              }
              uVar25 = (uint64_t)(uVar52 >> 3);
            }
            else {
LAB_7fffa55feba5:
              if ((puVar62 < puVar51) && ((int)*puVar46 == (int)*puVar62)) {
                puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
              }
              if ((puVar62 < puVar2) && ((short)*puVar46 == (short)*puVar62)) {
                puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
                puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
              }
              if (puVar62 < puVar4) {
                puVar62 = (uint64_t *)
                          ((int64_t)puVar62 + (uint64_t)((char)*puVar46 == (char)*puVar62));
              }
              uVar25 = (int64_t)puVar62 - (int64_t)puVar43;
            }
LAB_7fffa55fec0b:
            uVar24 = uVar25 + uVar24;
          }
          puVar43 = (uint64_t *)((int64_t)param_4 + 1);
          uVar25 = (int64_t)puVar43 - (int64_t)puStack_220;
          puVar46 = (uint64_t *)param_2[3];
          if (puVar48 < puVar43) {
            puVar62 = puVar46;
            if (puStack_220 <= puVar48) {
              uVar36 = puStack_220[1];
              *puVar46 = *puStack_220;
              puVar46[1] = uVar36;
              puVar62 = (uint64_t *)
                        ((int64_t)puVar46 + ((int64_t)puVar48 - (int64_t)puStack_220));
              if (0x10 < (int64_t)puVar48 - (int64_t)puStack_220) {
                puVar46 = puVar46 + 6;
                while( true ) {
                  uVar36 = puStack_220[3];
                  puVar46[-4] = puStack_220[2];
                  puVar46[-3] = uVar36;
                  uVar36 = puStack_220[5];
                  puVar46[-2] = puStack_220[4];
                  puVar46[-1] = uVar36;
                  if (puVar62 <= puVar46) break;
                  puVar46 = puVar46 + 4;
                  puStack_220 = puStack_220 + 4;
                }
              }
              puStack_220 = puVar48;
            }
            if (puStack_220 < puVar43) {
              uVar36 = ((int64_t)param_4 + 1) - (int64_t)puStack_220;
              puVar46 = puVar62;
              if (!((uint64_t)((int64_t)puVar62 - (int64_t)puStack_220) < 0x20 || uVar36 < 4)) {
                if (uVar36 < 0x20) {
                  uVar42 = 0;
                }
                else {
                  uVar42 = uVar36 & 0xffffffffffffffe0;
                  uVar58 = 0;
                  do {
                    uVar19 = *(uint64_t *)((int64_t)puStack_220 + uVar58);
                    uVar20 = ((uint64_t *)((int64_t)puStack_220 + uVar58))[1];
                    puVar5 = (uint64_t *)((int64_t)puStack_220 + uVar58 + 0x10);
                    uVar21 = puVar5[1];
                    puVar8 = (uint64_t *)((int64_t)puVar62 + uVar58 + 0x10);
                    *puVar8 = *puVar5;
                    puVar8[1] = uVar21;
                    *(uint64_t *)((int64_t)puVar62 + uVar58) = uVar19;
                    ((uint64_t *)((int64_t)puVar62 + uVar58))[1] = uVar20;
                    uVar58 = uVar58 + 0x20;
                  } while (uVar58 != uVar42);
                  if (uVar36 == uVar42) goto LAB_7fffa55feeb4;
                  if ((uVar36 & 0x1c) == 0) {
                    puVar46 = (uint64_t *)((int64_t)puVar62 + uVar42);
                    puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar42);
                    goto LAB_7fffa55fee51;
                  }
                }
                uVar58 = uVar36 & 0xfffffffffffffffc;
                puVar46 = (uint64_t *)((int64_t)puVar62 + uVar58);
                do {
                  *(uint32_t *)((int64_t)puVar62 + uVar42) =
                       *(uint32_t *)((int64_t)puStack_220 + uVar42);
                  uVar42 = uVar42 + 4;
                } while (uVar42 != uVar58);
                if (uVar36 == uVar58) goto LAB_7fffa55feeb4;
                puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar58);
              }
LAB_7fffa55fee51:
              uVar52 = (int)((int64_t)param_4 + 1) - (int)puStack_220 & 7;
              if (uVar52 == 0) {
                puVar62 = puStack_220;
              }
              else {
                uVar36 = 0;
                puVar56 = puVar46;
                puVar47 = puStack_220;
                do {
                  puVar46 = (uint64_t *)((int64_t)puVar56 + 1);
                  uVar36 = uVar36 + 1;
                  *(char *)puVar56 = (char)*puVar47;
                  puVar62 = (uint64_t *)((int64_t)puVar47 + 1);
                  puVar56 = puVar46;
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 1);
                } while (uVar36 != uVar52);
              }
              if (6 < (uint64_t)((int64_t)param_4 - (int64_t)puStack_220)) {
                lVar33 = 0;
                while( true ) {
                  *(uint8_t *)((int64_t)puVar46 + lVar33) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33);
                  *(uint8_t *)((int64_t)puVar46 + lVar33 + 1) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 1);
                  *(uint8_t *)((int64_t)puVar46 + lVar33 + 2) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 2);
                  *(uint8_t *)((int64_t)puVar46 + lVar33 + 3) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 3);
                  *(uint8_t *)((int64_t)puVar46 + lVar33 + 4) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 4);
                  *(uint8_t *)((int64_t)puVar46 + lVar33 + 5) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 5);
                  *(uint8_t *)((int64_t)puVar46 + lVar33 + 6) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 6);
                  *(uint8_t *)((int64_t)puVar46 + lVar33 + 7) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 7);
                  if ((uint64_t *)((int64_t)puVar62 + lVar33 + 7) == param_4) break;
                  lVar33 = lVar33 + 8;
                }
              }
            }
LAB_7fffa55feeb4:
            param_2[3] = param_2[3] + uVar25;
            lVar55 = param_2[1];
            if (0xffff < uVar25) {
              *(uint32_t *)(param_2 + 9) = 1;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar55 - *param_2) >> 3);
            }
          }
          else {
            uVar36 = puStack_220[1];
            *puVar46 = *puStack_220;
            puVar46[1] = uVar36;
            lVar33 = param_2[3];
            if (0x10 < uVar25) {
              uVar36 = puStack_220[3];
              *(uint64_t *)(lVar33 + 0x10) = puStack_220[2];
              *(uint64_t *)(lVar33 + 0x18) = uVar36;
              if (0x20 < (int64_t)uVar25) {
                lVar55 = 0;
                do {
                  puVar8 = (uint64_t *)((int64_t)puStack_220 + lVar55 + 0x20);
                  uVar19 = puVar8[1];
                  puVar5 = (uint64_t *)(lVar33 + 0x20 + lVar55);
                  *puVar5 = *puVar8;
                  puVar5[1] = uVar19;
                  puVar5 = (uint64_t *)((int64_t)puStack_220 + lVar55 + 0x30);
                  uVar19 = puVar5[1];
                  puVar8 = (uint64_t *)(lVar33 + 0x30 + lVar55);
                  *puVar8 = *puVar5;
                  puVar8[1] = uVar19;
                  lVar32 = lVar33 + 0x20 + lVar55;
                  lVar55 = lVar55 + 0x20;
                } while (lVar32 + 0x20U < lVar33 + uVar25);
              }
              goto LAB_7fffa55feeb4;
            }
            lVar55 = param_2[1];
            param_2[3] = lVar33 + uVar25;
          }
          lVar33 = uVar24 + 4;
          uVar24 = uVar24 + 1;
          *(short *)(lVar55 + 4) = (short)uVar25;
          *(uint32_t *)param_2[1] = 1;
          lVar55 = param_2[1];
joined_r0x7fffa55ffca3:
          if (0xffff < uVar24) {
            *(uint32_t *)(param_2 + 9) = 2;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar55 - *param_2) >> 3);
          }
          param_4 = (uint64_t *)(lVar33 + (int64_t)puVar43);
          *(short *)(lVar55 + 6) = (short)uVar24;
          param_2[1] = param_2[1] + 8;
          if (puVar7 < param_4) {
            puStack_220 = param_4;
          }
          else {
            uVar52 = iVar50 + 2;
            *(uint32_t *)(lVar14 + ((uint64_t)
                                (*(int64_t *)(lVar16 + (uint64_t)uVar52) * -0x30e44323485a9b9d) >>
                               (bVar26 & 0x3f)) * 4) = uVar52;
            *(int *)(lVar14 + ((uint64_t)
                               (*(int64_t *)((int64_t)param_4 + -2) * -0x30e44323485a9b9d) >>
                              (bVar26 & 0x3f)) * 4) = ((int)param_4 + -2) - iVar44;
            *(uint32_t *)(lVar15 + (uint64_t)
                               ((uint32_t)(*(int *)(lVar16 + (uint64_t)uVar52) * -0x61c8864f) >>
                               (bVar27 & 0x1f)) * 4) = uVar52;
            *(int *)(lVar15 + (uint64_t)
                              ((uint32_t)(*(int *)((int64_t)param_4 + -1) * -0x61c8864f) >>
                              (bVar27 & 0x1f)) * 4) = ((int)param_4 + -1) - iVar44;
            iVar34 = iVar35;
            do {
              iVar35 = iVar41;
              iVar50 = (int)param_4 - iVar44;
              uVar52 = iVar50 - iVar34;
              lVar33 = lVar16;
              if (uVar52 < uVar37) {
                lVar33 = uVar11 - uVar45;
              }
              puStack_220 = param_4;
              iVar41 = iVar35;
              if ((uVar37 - 1) - uVar52 < 3) {
                iVar35 = iVar34;
                break;
              }
              piVar59 = (int *)(lVar33 + (uint64_t)uVar52);
              if (*piVar59 != (int)*param_4) {
                iVar35 = iVar34;
                break;
              }
              puVar46 = (uint64_t *)(piVar59 + 1);
              puVar43 = (uint64_t *)((int64_t)param_4 + 4);
              puVar62 = puVar4;
              if (uVar52 < uVar37) {
                puVar62 = puVar10;
              }
              puVar47 = (uint64_t *)
                        ((int64_t)param_4 + (int64_t)puVar62 + (4 - (int64_t)puVar46));
              if (puVar4 <= puVar47) {
                puVar47 = puVar4;
              }
              puVar56 = puVar46;
              puVar39 = puVar43;
              if (puVar43 < (uint64_t *)((int64_t)puVar47 - 7U)) {
                if (*puVar46 == *puVar43) {
                  lVar55 = 0;
                  do {
                    puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0xc);
                    if ((uint64_t *)((int64_t)puVar47 - 7U) <= puVar56) {
                      puVar39 = (uint64_t *)((int64_t)param_4 + lVar55 + 0xc);
                      puVar56 = (uint64_t *)((int64_t)piVar59 + lVar55 + 0xc);
                      goto LAB_7fffa5600062;
                    }
                    uVar24 = *puVar56;
                    uVar25 = *(uint64_t *)(lVar33 + (uint64_t)uVar52 + 0xc + lVar55);
                    lVar55 = lVar55 + 8;
                  } while (uVar25 == uVar24);
                  uVar52 = 0;
                  for (uVar24 = uVar24 ^ uVar25; (uVar24 & 1) == 0;
                      uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar24 = (uint64_t)(uVar52 >> 3) + lVar55;
                }
                else {
                  uVar52 = 0;
                  for (uVar24 = *puVar46 ^ *puVar43; (uVar24 & 1) == 0;
                      uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar52 = uVar52 + 1;
                  }
                  uVar24 = (uint64_t)(uVar52 >> 3);
                }
              }
              else {
LAB_7fffa5600062:
                if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
                   ((int)*puVar56 == (int)*puVar39)) {
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                }
                if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
                   ((short)*puVar56 == (short)*puVar39)) {
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                }
                if (puVar39 < puVar47) {
                  puVar39 = (uint64_t *)
                            ((int64_t)puVar39 + (uint64_t)((char)*puVar56 == (char)*puVar39));
                }
                uVar24 = (int64_t)puVar39 - (int64_t)puVar43;
              }
              if ((uint64_t *)((int64_t)puVar46 + uVar24) == puVar62) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + uVar24);
                puVar46 = puVar43;
                puVar62 = puVar3;
                if (puVar43 < puVar1) {
                  if (*puVar3 == *puVar43) {
                    lVar33 = 0;
                    do {
                      puVar46 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar24 + 0xc);
                      if (puVar1 <= puVar46) {
                        puVar46 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar24 + 0xc);
                        puVar62 = (uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                        goto LAB_7fffa5600232;
                      }
                      uVar25 = *(uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                      uVar36 = *puVar46;
                      lVar33 = lVar33 + 8;
                    } while (uVar25 == uVar36);
                    uVar52 = 0;
                    for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                        uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar25 = (uint64_t)(uVar52 >> 3) + lVar33;
                  }
                  else {
                    uVar52 = 0;
                    for (uVar25 = *puVar43 ^ *puVar3; (uVar25 & 1) == 0;
                        uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                      uVar52 = uVar52 + 1;
                    }
                    uVar25 = (uint64_t)(uVar52 >> 3);
                  }
                }
                else {
LAB_7fffa5600232:
                  if ((puVar46 < puVar51) && ((int)*puVar62 == (int)*puVar46)) {
                    puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                  }
                  if ((puVar46 < puVar2) && ((short)*puVar62 == (short)*puVar46)) {
                    puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                  }
                  if (puVar46 < puVar4) {
                    puVar46 = (uint64_t *)
                              ((int64_t)puVar46 + (uint64_t)((char)*puVar62 == (char)*puVar46));
                  }
                  uVar25 = (int64_t)puVar46 - (int64_t)puVar43;
                }
                uVar24 = uVar24 + uVar25;
              }
              if (param_4 <= puVar48) {
                uVar25 = param_4[1];
                puVar46 = (uint64_t *)param_2[3];
                *puVar46 = *param_4;
                puVar46[1] = uVar25;
              }
              *(uint16_t *)(param_2[1] + 4) = 0;
              *(uint32_t *)param_2[1] = 1;
              if (0xffff < uVar24 + 1) {
                *(uint32_t *)(param_2 + 9) = 2;
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
              }
              *(short *)(param_2[1] + 6) = (short)(uVar24 + 1);
              param_2[1] = param_2[1] + 8;
              *(int *)(lVar15 + (uint64_t)((uint32_t)((int)*param_4 * -0x61c8864f) >> (bVar27 & 0x1f))
                                * 4) = iVar50;
              uVar25 = *param_4;
              param_4 = (uint64_t *)((int64_t)param_4 + uVar24 + 4);
              *(int *)(lVar14 + (uVar25 * -0x30e44323485a9b9d >> (bVar26 & 0x3f)) * 4) = iVar50;
              puStack_220 = param_4;
              iVar41 = iVar34;
              iVar34 = iVar35;
            } while (param_4 <= puVar7);
          }
        }
      } while (param_4 < puVar7);
    }
  }
  else if (iVar50 == 6) {
    if (iVar34 != 0) {
      if (uVar52 < 0x3e) {
        uVar24 = 0;
        do {
          uVar24 = uVar24 + 0x40;
        } while (uVar24 < (uint64_t)(4L << (bVar29 & 0x3f)));
      }
      if (uVar53 < 0x3e) {
        uVar24 = 0;
        do {
          uVar24 = uVar24 + 0x40;
        } while (uVar24 < (uint64_t)(4L << (bVar28 & 0x3f)));
      }
    }
    param_4 = (uint64_t *)((int64_t)param_4 + (uint64_t)(iVar61 == iVar18));
    if (param_4 < puVar7) {
      puVar51 = (uint64_t *)((int64_t)puVar4 - 7);
      puVar2 = puVar4 + -4;
      bVar29 = 0x40 - cVar23;
      bVar26 = 0x40 - cVar22;
      puVar1 = (uint64_t *)((int64_t)puVar4 - 3);
      puVar48 = (uint64_t *)((int64_t)puVar4 - 1);
      do {
        uVar36 = *param_4 * -0x30e44323485a9b9d;
        uVar25 = *param_4 * -0x30e4432340650000;
        uVar24 = uVar25 >> (bVar29 & 0x3f);
        uVar25 = uVar25 >> (0x38 - bVar28 & 0x3f);
        iVar50 = (int)param_4;
        iVar61 = iVar50 - iVar44;
        iVar34 = iVar61 + 1;
        uVar53 = iVar34 - iVar41;
        uVar58 = uVar36 >> (bVar26 & 0x3f);
        uVar36 = uVar36 >> (uint64_t)(0x38 - uVar52);
        piVar59 = (int *)(lVar16 + (uint64_t)uVar53);
        if (uVar53 < uVar37) {
          piVar59 = (int *)((uVar53 - uVar49) + uVar11);
        }
        uVar31 = *(uint32_t *)(lVar14 + uVar58 * 4);
        uVar42 = (uint64_t)uVar31;
        uVar30 = *(uint32_t *)(lVar15 + uVar24 * 4);
        uVar40 = *(uint32_t *)(uVar13 + (uVar36 >> 8) * 4);
        uVar63 = *(uint32_t *)(uVar12 + (uVar25 >> 8) * 4);
        *(int *)(lVar15 + uVar24 * 4) = iVar61;
        *(int *)(lVar14 + uVar58 * 4) = iVar61;
        if (((uVar37 - 1) - uVar53 < 3) || (*piVar59 != *(int *)((int64_t)param_4 + 1))) {
          puVar46 = param_4;
          if (uVar37 < uVar31) {
            puVar43 = (uint64_t *)(lVar16 + uVar42);
            if (*puVar43 != *param_4) goto LAB_7fffa5603300;
            puVar62 = puVar43 + 1;
            puVar47 = param_4 + 1;
            puVar56 = puVar47;
            if (puVar47 < puVar51) {
              if (*puVar62 == *puVar47) {
                lVar33 = lVar16 + 0x10 + uVar42;
                lVar55 = 0;
                do {
                  puVar62 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x10);
                  if (puVar51 <= puVar62) {
                    puVar62 = (uint64_t *)(lVar33 + lVar55);
                    puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x10);
                    goto joined_r0x7fffa56039b3;
                  }
                  uVar24 = *(uint64_t *)(lVar33 + lVar55);
                  uVar25 = *puVar62;
                  lVar55 = lVar55 + 8;
                } while (uVar24 == uVar25);
                uVar53 = 0;
                for (uVar24 = uVar24 ^ uVar25; (uVar24 & 1) == 0;
                    uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                  uVar53 = uVar53 + 1;
                }
                uVar24 = (uint64_t)(uVar53 >> 3) + lVar55;
              }
              else {
                uVar53 = 0;
                for (uVar24 = *puVar62 ^ *puVar47; (uVar24 & 1) == 0;
                    uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                  uVar53 = uVar53 + 1;
                }
                uVar24 = (uint64_t)(uVar53 >> 3);
              }
            }
            else {
joined_r0x7fffa56039b3:
              if ((puVar56 < puVar1) && ((int)*puVar62 == (int)*puVar56)) {
                puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
              }
              if ((puVar56 < puVar48) && ((short)*puVar62 == (short)*puVar56)) {
                puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
              }
              if (puVar56 < puVar4) {
                puVar56 = (uint64_t *)
                          ((int64_t)puVar56 + (uint64_t)((char)*puVar62 == (char)*puVar56));
              }
              uVar24 = (int64_t)puVar56 - (int64_t)puVar47;
            }
            iVar50 = iVar50 - (int)puVar43;
            lVar33 = uVar24 + 8;
            if (puStack_220 < param_4) {
              for (puVar43 = (uint64_t *)(uVar42 + lVar16 + -1);
                  puVar46 = (uint64_t *)((int64_t)puVar46 + -1),
                  *(char *)puVar46 == (char)*puVar43;
                  puVar43 = (uint64_t *)((int64_t)puVar43 + -1)) {
                lVar33 = lVar33 + 1;
                if ((puVar46 <= puStack_220) || (puVar43 <= puVar3)) goto LAB_7fffa5604755;
              }
LAB_7fffa560404f:
              puVar46 = (uint64_t *)((int64_t)puVar46 + 1);
            }
LAB_7fffa5604755:
            puVar43 = (uint64_t *)param_2[3];
            uVar24 = (int64_t)puVar46 - (int64_t)puStack_220;
            if (puVar2 < puVar46) {
              puVar62 = puVar43;
              if (puStack_220 <= puVar2) {
                uVar25 = puStack_220[1];
                *puVar43 = *puStack_220;
                puVar43[1] = uVar25;
                puVar62 = (uint64_t *)
                          ((int64_t)puVar43 + ((int64_t)puVar2 - (int64_t)puStack_220));
                if (0x10 < (int64_t)puVar2 - (int64_t)puStack_220) {
                  lVar55 = 0x10;
                  do {
                    uVar19 = ((uint64_t *)((int64_t)puStack_220 + lVar55))[1];
                    *(uint64_t *)((int64_t)puVar43 + lVar55) =
                         *(uint64_t *)((int64_t)puStack_220 + lVar55);
                    ((uint64_t *)((int64_t)puVar43 + lVar55))[1] = uVar19;
                    puVar5 = (uint64_t *)((int64_t)puStack_220 + lVar55 + 0x10);
                    uVar19 = puVar5[1];
                    puVar8 = (uint64_t *)((int64_t)puVar43 + lVar55 + 0x10);
                    *puVar8 = *puVar5;
                    puVar8[1] = uVar19;
                    lVar32 = lVar55 + 0x20;
                    lVar55 = lVar55 + 0x20;
                  } while ((uint64_t *)((int64_t)puVar43 + lVar32) < puVar62);
                }
                puStack_220 = puVar2;
              }
              if (puStack_220 < puVar46) {
                uVar25 = (int64_t)puVar46 - (int64_t)puStack_220;
                if (uVar25 < 4 || (uint64_t)((int64_t)puVar62 - (int64_t)puStack_220) < 0x20) {
LAB_7fffa56048bf:
                  puVar43 = puVar62;
                }
                else {
                  if (uVar25 < 0x20) {
                    uVar36 = 0;
                  }
                  else {
                    uVar36 = uVar25 & 0xffffffffffffffe0;
                    uVar58 = 0;
                    do {
                      uVar19 = ((uint64_t *)((int64_t)puStack_220 + uVar58))[1];
                      puVar5 = (uint64_t *)((int64_t)puStack_220 + uVar58 + 0x10);
                      uVar20 = *puVar5;
                      uVar21 = puVar5[1];
                      *(uint64_t *)((int64_t)puVar62 + uVar58) =
                           *(uint64_t *)((int64_t)puStack_220 + uVar58);
                      ((uint64_t *)((int64_t)puVar62 + uVar58))[1] = uVar19;
                      puVar5 = (uint64_t *)((int64_t)puVar62 + uVar58 + 0x10);
                      *puVar5 = uVar20;
                      puVar5[1] = uVar21;
                      uVar58 = uVar58 + 0x20;
                    } while (uVar58 != uVar36);
                    if (uVar25 == uVar36) goto LAB_7fffa56049c0;
                    if ((uVar25 & 0x1c) == 0) {
                      puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar36);
                      puVar62 = (uint64_t *)((int64_t)puVar62 + uVar36);
                      goto LAB_7fffa56048bf;
                    }
                  }
                  uVar58 = uVar25 & 0xfffffffffffffffc;
                  puVar43 = (uint64_t *)((int64_t)puVar62 + uVar58);
                  do {
                    *(uint32_t *)((int64_t)puVar62 + uVar36) =
                         *(uint32_t *)((int64_t)puStack_220 + uVar36);
                    uVar36 = uVar36 + 4;
                  } while (uVar36 != uVar58);
                  if (uVar25 == uVar58) goto LAB_7fffa56049c0;
                  puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar58);
                }
                uVar25 = (int64_t)puVar46 - (int64_t)puStack_220 & 7;
                puVar62 = puStack_220;
                if (uVar25 != 0) {
                  uVar36 = 0;
                  puVar47 = puVar43;
                  puVar56 = puStack_220;
                  do {
                    puVar62 = (uint64_t *)((int64_t)puVar56 + 1);
                    puVar43 = (uint64_t *)((int64_t)puVar47 + 1);
                    *(char *)puVar47 = (char)*puVar56;
                    uVar36 = uVar36 + 1;
                    puVar47 = puVar43;
                    puVar56 = puVar62;
                  } while (uVar36 != uVar25);
                }
                if ((uint64_t)((int64_t)puStack_220 - (int64_t)puVar46) < 0xfffffffffffffff9) {
                  lVar55 = 0;
                  while( true ) {
                    *(uint8_t *)((int64_t)puVar43 + lVar55) =
                         *(uint8_t *)((int64_t)puVar62 + lVar55);
                    *(uint8_t *)((int64_t)puVar43 + lVar55 + 1) =
                         *(uint8_t *)((int64_t)puVar62 + lVar55 + 1);
                    *(uint8_t *)((int64_t)puVar43 + lVar55 + 2) =
                         *(uint8_t *)((int64_t)puVar62 + lVar55 + 2);
                    *(uint8_t *)((int64_t)puVar43 + lVar55 + 3) =
                         *(uint8_t *)((int64_t)puVar62 + lVar55 + 3);
                    *(uint8_t *)((int64_t)puVar43 + lVar55 + 4) =
                         *(uint8_t *)((int64_t)puVar62 + lVar55 + 4);
                    *(uint8_t *)((int64_t)puVar43 + lVar55 + 5) =
                         *(uint8_t *)((int64_t)puVar62 + lVar55 + 5);
                    *(uint8_t *)((int64_t)puVar43 + lVar55 + 6) =
                         *(uint8_t *)((int64_t)puVar62 + lVar55 + 6);
                    *(uint8_t *)((int64_t)puVar43 + lVar55 + 7) =
                         *(uint8_t *)((int64_t)puVar62 + lVar55 + 7);
                    if ((uint64_t *)((int64_t)puVar62 + lVar55 + 8) == puVar46) break;
                    lVar55 = lVar55 + 8;
                  }
                }
              }
LAB_7fffa56049c0:
              param_2[3] = param_2[3] + uVar24;
              lVar55 = param_2[1];
              if (0xffff < uVar24) {
                *(uint32_t *)(param_2 + 9) = 1;
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar55 - *param_2) >> 3);
              }
            }
            else {
              uVar25 = puStack_220[1];
              *puVar43 = *puStack_220;
              puVar43[1] = uVar25;
              if (0x10 < uVar24) {
                lVar55 = param_2[3];
                uVar25 = puStack_220[3];
                *(uint64_t *)(lVar55 + 0x10) = puStack_220[2];
                *(uint64_t *)(lVar55 + 0x18) = uVar25;
                if (0x20 < (int64_t)uVar24) {
                  lVar32 = 0;
                  do {
                    puVar8 = (uint64_t *)((int64_t)puStack_220 + lVar32 + 0x20);
                    uVar19 = puVar8[1];
                    puVar5 = (uint64_t *)(lVar55 + 0x20 + lVar32);
                    *puVar5 = *puVar8;
                    puVar5[1] = uVar19;
                    puVar5 = (uint64_t *)((int64_t)puStack_220 + lVar32 + 0x30);
                    uVar19 = puVar5[1];
                    puVar8 = (uint64_t *)(lVar55 + 0x30 + lVar32);
                    *puVar8 = *puVar5;
                    puVar8[1] = uVar19;
                    lVar6 = lVar55 + 0x20 + lVar32;
                    lVar32 = lVar32 + 0x20;
                  } while (lVar6 + 0x20U < lVar55 + uVar24);
                }
                goto LAB_7fffa56049c0;
              }
              param_2[3] = param_2[3] + uVar24;
              lVar55 = param_2[1];
            }
            *(short *)(lVar55 + 4) = (short)uVar24;
            *(int *)param_2[1] = iVar50 + 3;
            lVar55 = param_2[1];
            uVar24 = lVar33 - 3;
            iVar35 = iVar41;
            iVar41 = iVar50;
            goto joined_r0x7fffa5604a0e;
          }
          if ((char)uVar36 == (char)uVar40) {
            uVar40 = uVar40 >> 8;
            uVar24 = (uint64_t)uVar40;
            if ((uVar40 <= uVar9) || (*(uint64_t *)(uVar11 + uVar24) != *param_4))
            goto LAB_7fffa5603300;
            puVar62 = (uint64_t *)(uVar11 + uVar24) + 1;
            puVar46 = param_4 + 1;
            puVar43 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar10 + (8 - (int64_t)puVar62))
            ;
            if (puVar4 <= puVar43) {
              puVar43 = puVar4;
            }
            puVar47 = puVar62;
            puVar56 = puVar46;
            if (puVar46 < (uint64_t *)((int64_t)puVar43 - 7U)) {
              if (*puVar62 == *puVar46) {
                lVar33 = uVar11 + 0x10 + uVar24;
                lVar55 = 0;
                do {
                  puVar47 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x10);
                  if ((uint64_t *)((int64_t)puVar43 - 7U) <= puVar47) {
                    puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x10);
                    puVar47 = (uint64_t *)(lVar33 + lVar55);
                    goto LAB_7fffa560420f;
                  }
                  uVar25 = *(uint64_t *)(lVar33 + lVar55);
                  uVar36 = *puVar47;
                  lVar55 = lVar55 + 8;
                } while (uVar25 == uVar36);
                uVar53 = 0;
                for (uVar36 = uVar36 ^ uVar25; (uVar36 & 1) == 0;
                    uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                  uVar53 = uVar53 + 1;
                }
                uVar25 = (uint64_t)(uVar53 >> 3) + lVar55;
              }
              else {
                uVar53 = 0;
                for (uVar25 = *puVar62 ^ *puVar46; (uVar25 & 1) == 0;
                    uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                  uVar53 = uVar53 + 1;
                }
                uVar25 = (uint64_t)(uVar53 >> 3);
              }
            }
            else {
LAB_7fffa560420f:
              if ((puVar56 < (uint64_t *)((int64_t)puVar43 - 3U)) &&
                 ((int)*puVar47 == (int)*puVar56)) {
                puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
              }
              if ((puVar56 < (uint64_t *)((int64_t)puVar43 - 1U)) &&
                 ((short)*puVar47 == (short)*puVar56)) {
                puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
              }
              if (puVar56 < puVar43) {
                puVar56 = (uint64_t *)
                          ((int64_t)puVar56 + (uint64_t)((char)*puVar47 == (char)*puVar56));
              }
              uVar25 = (int64_t)puVar56 - (int64_t)puVar46;
            }
            if ((uint64_t *)((int64_t)puVar62 + uVar25) == puVar10) {
              puVar46 = (uint64_t *)((int64_t)puVar46 + uVar25);
              puVar43 = puVar3;
              puVar62 = puVar46;
              if (puVar46 < puVar51) {
                if (*puVar3 == *puVar46) {
                  puVar62 = (uint64_t *)((int64_t)param_4 + uVar25 + 0x10);
                  lVar55 = 0;
                  lVar33 = 0;
                  do {
                    if (puVar51 <= puVar62) {
                      puVar43 = (uint64_t *)((int64_t)puVar3 + (8 - lVar33));
                      goto LAB_7fffa5604656;
                    }
                    uVar36 = *(uint64_t *)((int64_t)puVar3 + lVar55 + 8);
                    uVar58 = *puVar62;
                    puVar62 = puVar62 + 1;
                    lVar33 = lVar33 + -8;
                    lVar55 = lVar55 + 8;
                  } while (uVar36 == uVar58);
                  uVar53 = 0;
                  for (uVar58 = uVar58 ^ uVar36; (uVar58 & 1) == 0;
                      uVar58 = uVar58 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar36 = (uint64_t)(uVar53 >> 3) - lVar33;
                }
                else {
                  uVar53 = 0;
                  for (uVar36 = *puVar3 ^ *puVar46; (uVar36 & 1) == 0;
                      uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar36 = (uint64_t)(uVar53 >> 3);
                }
              }
              else {
LAB_7fffa5604656:
                if ((puVar62 < puVar1) && ((int)*puVar43 == (int)*puVar62)) {
                  puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                  puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
                }
                if ((puVar62 < puVar48) && ((short)*puVar43 == (short)*puVar62)) {
                  puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
                  puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                }
                if (puVar62 < puVar4) {
                  puVar62 = (uint64_t *)
                            ((int64_t)puVar62 + (uint64_t)((char)*puVar43 == (char)*puVar62));
                }
                uVar36 = (int64_t)puVar62 - (int64_t)puVar46;
              }
              uVar25 = uVar25 + uVar36;
            }
            iVar50 = (iVar61 - uVar40) - uVar49;
            lVar33 = uVar25 + 8;
            if (puStack_220 < param_4) {
              puVar46 = (uint64_t *)(uVar24 + (uVar11 - 1));
              puVar43 = (uint64_t *)((int64_t)param_4 + -1);
              do {
                if ((char)*puVar43 != (char)*puVar46) {
                  param_4 = (uint64_t *)((int64_t)puVar43 + 1);
                  goto LAB_7fffa560474d;
                }
                lVar33 = lVar33 + 1;
                param_4 = (uint64_t *)((int64_t)puVar43 + -1);
                if (puVar43 <= puStack_220) break;
                bVar17 = puVar57 < puVar46;
                puVar46 = (uint64_t *)((int64_t)puVar46 + -1);
                puVar43 = param_4;
              } while (bVar17);
LAB_7fffa5604742:
              param_4 = (uint64_t *)((int64_t)param_4 + 1);
            }
LAB_7fffa560474d:
            puVar46 = param_4;
            goto LAB_7fffa5604755;
          }
LAB_7fffa5603300:
          if (uVar37 < uVar30) {
            puVar43 = (uint64_t *)((uint64_t)uVar30 + lVar16);
            if ((int)*puVar43 == (int)*param_4) goto LAB_7fffa560332a;
          }
          else if ((((char)uVar25 == (char)uVar63) && (uVar63 = uVar63 >> 8, uVar9 < uVar63)) &&
                  (*(int *)(uVar11 + uVar63) == (int)*param_4)) {
            puVar43 = (uint64_t *)(uVar63 + uVar11);
            uVar30 = uVar63 + uVar49;
LAB_7fffa560332a:
            uVar25 = *(int64_t *)((int64_t)param_4 + 1) * -0x30e44323485a9b9d;
            uVar24 = uVar25 >> ((uint8_t)(0x38 - uVar52) & 0x3f);
            uVar25 = uVar25 >> (bVar26 & 0x3f);
            puVar46 = (uint64_t *)((int64_t)param_4 + 1);
            uVar53 = *(uint32_t *)(lVar14 + uVar25 * 4);
            uVar36 = (uint64_t)uVar53;
            uVar31 = *(uint32_t *)(uVar13 + (uVar24 >> 8) * 4);
            *(int *)(lVar14 + uVar25 * 4) = iVar34;
            if (uVar37 < uVar53) {
              puVar62 = (uint64_t *)(lVar16 + uVar36);
              if (*puVar62 == *puVar46) {
                puVar43 = (uint64_t *)((int64_t)param_4 + 9);
                puVar47 = puVar62 + 1;
                if (puVar43 < puVar51) {
                  if (*puVar47 == *puVar43) {
                    lVar33 = lVar16 + 0x10 + uVar36;
                    lVar55 = 0;
                    do {
                      puVar47 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                      if (puVar51 <= puVar47) {
                        puVar47 = (uint64_t *)(lVar33 + lVar55);
                        puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                        goto LAB_7fffa56040d0;
                      }
                      uVar24 = *(uint64_t *)(lVar33 + lVar55);
                      uVar25 = *puVar47;
                      lVar55 = lVar55 + 8;
                    } while (uVar24 == uVar25);
                    uVar53 = 0;
                    for (uVar24 = uVar24 ^ uVar25; (uVar24 & 1) == 0;
                        uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                      uVar53 = uVar53 + 1;
                    }
                    uVar24 = (uint64_t)(uVar53 >> 3) + lVar55;
                  }
                  else {
                    uVar53 = 0;
                    for (uVar24 = *puVar47 ^ *puVar43; (uVar24 & 1) == 0;
                        uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                      uVar53 = uVar53 + 1;
                    }
                    uVar24 = (uint64_t)(uVar53 >> 3);
                  }
                }
                else {
                  puVar56 = puVar43;
LAB_7fffa56040d0:
                  if ((puVar56 < puVar1) && ((int)*puVar47 == (int)*puVar56)) {
                    puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                    puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                  }
                  if ((puVar56 < puVar48) && ((short)*puVar47 == (short)*puVar56)) {
                    puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                    puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                  }
                  if (puVar56 < puVar4) {
                    puVar56 = (uint64_t *)
                              ((int64_t)puVar56 + (uint64_t)((char)*puVar47 == (char)*puVar56));
                  }
                  uVar24 = (int64_t)puVar56 - (int64_t)puVar43;
                }
                iVar50 = (int)puVar46 - (int)puVar62;
                lVar33 = uVar24 + 8;
                if (puStack_220 < puVar46) {
                  puVar43 = (uint64_t *)(uVar36 + lVar16 + -1);
                  do {
                    puVar46 = param_4;
                    if ((char)*puVar46 != (char)*puVar43) {
                      puVar46 = (uint64_t *)((int64_t)puVar46 + 1);
                      goto LAB_7fffa5604755;
                    }
                    lVar33 = lVar33 + 1;
                    if (puVar43 <= puVar3) break;
                    puVar43 = (uint64_t *)((int64_t)puVar43 + -1);
                    param_4 = (uint64_t *)((int64_t)puVar46 + -1);
                  } while (puStack_220 < puVar46);
                }
                goto LAB_7fffa5604755;
              }
            }
            else if ((char)uVar31 == (char)uVar24) {
              uVar31 = uVar31 >> 8;
              uVar24 = (uint64_t)uVar31;
              if ((uVar9 < uVar31) && (*(uint64_t *)(uVar11 + uVar24) == *puVar46)) {
                puVar47 = (uint64_t *)(uVar11 + uVar24) + 1;
                puVar43 = (uint64_t *)((int64_t)param_4 + 9);
                puVar62 = (uint64_t *)
                          ((int64_t)param_4 + (int64_t)puVar10 + (9 - (int64_t)puVar47));
                if (puVar4 <= puVar62) {
                  puVar62 = puVar4;
                }
                puVar56 = puVar43;
                puVar39 = puVar47;
                if (puVar43 < (uint64_t *)((int64_t)puVar62 - 7U)) {
                  if (*puVar47 == *puVar43) {
                    lVar33 = uVar11 + 0x10 + uVar24;
                    lVar55 = 0;
LAB_7fffa56035ce:
                    puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                    if (puVar56 < (uint64_t *)((int64_t)puVar62 - 7U)) {
                      uVar25 = *puVar56;
                      uVar36 = *(uint64_t *)(lVar33 + lVar55);
                      if (uVar36 == uVar25) goto code_r0x7fffa56035eb;
                      uVar53 = 0;
                      for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                          uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                        uVar53 = uVar53 + 1;
                      }
                      uVar25 = (uint64_t)(uVar53 >> 3) + lVar55 + 8;
                      goto LAB_7fffa5605193;
                    }
                    puVar56 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x11);
                    puVar39 = (uint64_t *)(lVar33 + lVar55);
                    goto LAB_7fffa56050eb;
                  }
                  uVar53 = 0;
                  for (uVar25 = *puVar47 ^ *puVar43; (uVar25 & 1) == 0;
                      uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar25 = (uint64_t)(uVar53 >> 3);
                }
                else {
LAB_7fffa56050eb:
                  if ((puVar56 < (uint64_t *)((int64_t)puVar62 - 3U)) &&
                     ((int)*puVar39 == (int)*puVar56)) {
                    puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                    puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                  }
                  if ((puVar56 < (uint64_t *)((int64_t)puVar62 - 1U)) &&
                     ((short)*puVar39 == (short)*puVar56)) {
                    puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                    puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                  }
                  if (puVar56 < puVar62) {
                    puVar56 = (uint64_t *)
                              ((int64_t)puVar56 + (uint64_t)((char)*puVar39 == (char)*puVar56));
                  }
                  uVar25 = (int64_t)puVar56 - (int64_t)puVar43;
                }
LAB_7fffa5605193:
                if ((uint64_t *)((int64_t)puVar47 + uVar25) == puVar10) {
                  puVar43 = (uint64_t *)((int64_t)puVar43 + uVar25);
                  puVar62 = puVar3;
                  puVar47 = puVar43;
                  if (puVar43 < puVar51) {
                    if (*puVar3 == *puVar43) {
                      lVar33 = 0;
                      do {
                        puVar62 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar25 + 0x11);
                        if (puVar51 <= puVar62) {
                          puVar47 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar25 + 0x11);
                          puVar62 = (uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                          goto LAB_7fffa56052a2;
                        }
                        uVar36 = *(uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                        uVar58 = *puVar62;
                        lVar33 = lVar33 + 8;
                      } while (uVar36 == uVar58);
                      uVar53 = 0;
                      for (uVar36 = uVar36 ^ uVar58; (uVar36 & 1) == 0;
                          uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                        uVar53 = uVar53 + 1;
                      }
                      uVar36 = (uint64_t)(uVar53 >> 3) + lVar33;
                    }
                    else {
                      uVar53 = 0;
                      for (uVar36 = *puVar3 ^ *puVar43; (uVar36 & 1) == 0;
                          uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                        uVar53 = uVar53 + 1;
                      }
                      uVar36 = (uint64_t)(uVar53 >> 3);
                    }
                  }
                  else {
LAB_7fffa56052a2:
                    if ((puVar47 < puVar1) && ((int)*puVar62 == (int)*puVar47)) {
                      puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                      puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                    }
                    if ((puVar47 < puVar48) && ((short)*puVar62 == (short)*puVar47)) {
                      puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                      puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                    }
                    if (puVar47 < puVar4) {
                      puVar47 = (uint64_t *)
                                ((int64_t)puVar47 + (uint64_t)((char)*puVar62 == (char)*puVar47));
                    }
                    uVar36 = (int64_t)puVar47 - (int64_t)puVar43;
                  }
                  uVar25 = uVar25 + uVar36;
                }
                iVar50 = (iVar34 - uVar49) - uVar31;
                lVar33 = uVar25 + 8;
                if (puStack_220 < puVar46) {
                  lVar55 = uVar24 + (uVar11 - 1);
                  for (lVar32 = 0;
                      *(char *)((int64_t)param_4 + lVar32) == *(char *)(lVar55 + lVar32);
                      lVar32 = lVar32 + -1) {
                    if (((uint64_t *)((int64_t)param_4 + lVar32) <= puStack_220) ||
                       ((uint64_t *)(lVar55 + lVar32) <= puVar57)) {
                      lVar33 = (lVar33 - lVar32) + 1;
                      puVar46 = (uint64_t *)((int64_t)param_4 + lVar32);
                      goto LAB_7fffa5604755;
                    }
                  }
                  lVar33 = lVar33 - lVar32;
                  puVar46 = (uint64_t *)((int64_t)param_4 + lVar32 + 1);
                }
                goto LAB_7fffa5604755;
              }
            }
            puVar46 = (uint64_t *)((int64_t)puVar43 + 4);
            puVar62 = (uint64_t *)((int64_t)param_4 + 4);
            if (uVar37 <= uVar30) {
              puVar47 = puVar62;
              if (puVar62 < puVar51) {
                if (*puVar46 == *puVar62) {
                  lVar33 = 0;
                  do {
                    puVar46 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xc);
                    if (puVar51 <= puVar46) {
                      puVar46 = (uint64_t *)((int64_t)puVar43 + lVar33 + 0xc);
                      puVar47 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xc);
                      goto joined_r0x7fffa5603981;
                    }
                    uVar24 = *puVar46;
                    uVar25 = *(uint64_t *)((int64_t)puVar43 + lVar33 + 0xc);
                    lVar33 = lVar33 + 8;
                  } while (uVar25 == uVar24);
                  uVar53 = 0;
                  for (uVar25 = uVar25 ^ uVar24; (uVar25 & 1) == 0;
                      uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar24 = (uint64_t)(uVar53 >> 3) + lVar33;
                }
                else {
                  uVar53 = 0;
                  for (uVar24 = *puVar46 ^ *puVar62; (uVar24 & 1) == 0;
                      uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar24 = (uint64_t)(uVar53 >> 3);
                }
              }
              else {
joined_r0x7fffa5603981:
                if ((puVar47 < puVar1) && ((int)*puVar46 == (int)*puVar47)) {
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                  puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                }
                if ((puVar47 < puVar48) && ((short)*puVar46 == (short)*puVar47)) {
                  puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                }
                if (puVar47 < puVar4) {
                  puVar47 = (uint64_t *)
                            ((int64_t)puVar47 + (uint64_t)((char)*puVar46 == (char)*puVar47));
                }
                uVar24 = (int64_t)puVar47 - (int64_t)puVar62;
              }
              lVar33 = uVar24 + 4;
              iVar50 = iVar50 - (int)puVar43;
              if ((puStack_220 < param_4) && (puVar3 < puVar43)) {
                puVar46 = param_4;
                while( true ) {
                  puVar43 = (uint64_t *)((int64_t)puVar43 + -1);
                  puVar46 = (uint64_t *)((int64_t)puVar46 + -1);
                  if (*(char *)puVar46 != *(char *)puVar43) break;
                  if ((puVar43 <= puVar3) || (puVar46 <= puStack_220)) {
                    lVar33 = lVar33 + 1;
                    goto LAB_7fffa5604755;
                  }
                  lVar33 = lVar33 + 1;
                }
                goto LAB_7fffa560404f;
              }
              puVar46 = param_4;
              goto LAB_7fffa5604755;
            }
            puVar47 = (uint64_t *)(((int64_t)puVar10 - (int64_t)puVar46) + (int64_t)puVar62);
            if (puVar4 <= puVar47) {
              puVar47 = puVar4;
            }
            puVar39 = puVar46;
            puVar56 = puVar62;
            if (puVar62 < (uint64_t *)((int64_t)puVar47 - 7U)) {
              if (*puVar46 == *puVar62) {
                lVar33 = 0xc;
LAB_7fffa5603740:
                puVar56 = (uint64_t *)((int64_t)param_4 + lVar33);
                if (puVar56 < (uint64_t *)((int64_t)puVar47 - 7U)) {
                  if (*(uint64_t *)((int64_t)puVar43 + lVar33) == *puVar56)
                  goto code_r0x7fffa5603766;
                  uVar53 = 0;
                  for (uVar24 = *(uint64_t *)((int64_t)puVar43 + lVar33) ^ *puVar56;
                      (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar24 = ((uint64_t)(uVar53 >> 3) + lVar33) - 4;
                  goto LAB_7fffa5603eef;
                }
                puVar39 = (uint64_t *)(lVar33 + (int64_t)puVar43);
                goto LAB_7fffa5603e79;
              }
              uVar53 = 0;
              for (uVar24 = *puVar46 ^ *puVar62; (uVar24 & 1) == 0;
                  uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar24 = (uint64_t)(uVar53 >> 3);
            }
            else {
LAB_7fffa5603e79:
              if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
                 ((int)*puVar39 == (int)*puVar56)) {
                puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
              }
              if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
                 ((short)*puVar39 == (short)*puVar56)) {
                puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
              }
              if (puVar56 < puVar47) {
                puVar56 = (uint64_t *)
                          ((int64_t)puVar56 + (uint64_t)((char)*puVar39 == (char)*puVar56));
              }
              uVar24 = (int64_t)puVar56 - (int64_t)puVar62;
            }
LAB_7fffa5603eef:
            if ((uint64_t *)((int64_t)puVar46 + uVar24) == puVar10) {
              puVar62 = (uint64_t *)((int64_t)puVar62 + uVar24);
              puVar46 = puVar3;
              puVar47 = puVar62;
              if (puVar62 < puVar51) {
                if (*puVar3 == *puVar62) {
                  lVar33 = 0;
                  do {
                    puVar46 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar24 + 0xc);
                    if (puVar51 <= puVar46) {
                      puVar47 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar24 + 0xc);
                      puVar46 = (uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                      goto LAB_7fffa5604531;
                    }
                    uVar25 = *(uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                    uVar36 = *puVar46;
                    lVar33 = lVar33 + 8;
                  } while (uVar25 == uVar36);
                  uVar53 = 0;
                  for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                      uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar25 = (uint64_t)(uVar53 >> 3) + lVar33;
                }
                else {
                  uVar53 = 0;
                  for (uVar25 = *puVar62 ^ *puVar3; (uVar25 & 1) == 0;
                      uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar25 = (uint64_t)(uVar53 >> 3);
                }
              }
              else {
LAB_7fffa5604531:
                if ((puVar47 < puVar1) && ((int)*puVar46 == (int)*puVar47)) {
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                  puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                }
                if ((puVar47 < puVar48) && ((short)*puVar46 == (short)*puVar47)) {
                  puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                }
                if (puVar47 < puVar4) {
                  puVar47 = (uint64_t *)
                            ((int64_t)puVar47 + (uint64_t)((char)*puVar46 == (char)*puVar47));
                }
                uVar25 = (int64_t)puVar47 - (int64_t)puVar62;
              }
              uVar24 = uVar24 + uVar25;
            }
            iVar50 = iVar61 - uVar30;
            lVar33 = uVar24 + 4;
            if ((puStack_220 < param_4) && (puVar57 < puVar43)) {
              do {
                param_4 = (uint64_t *)((int64_t)param_4 + -1);
                puVar43 = (uint64_t *)((int64_t)puVar43 + -1);
                if (*(char *)param_4 != *(char *)puVar43) goto LAB_7fffa5604742;
                lVar33 = lVar33 + 1;
              } while ((puStack_220 < param_4) && (puVar57 < puVar43));
            }
            goto LAB_7fffa560474d;
          }
          param_4 = (uint64_t *)
                    ((int64_t)param_4 + ((int64_t)param_4 - (int64_t)puStack_220 >> 8) + 1);
        }
        else {
          puVar46 = (uint64_t *)(piVar59 + 1);
          puVar43 = puVar4;
          if (uVar53 < uVar37) {
            puVar43 = puVar10;
          }
          puVar62 = (uint64_t *)((int64_t)param_4 + 5);
          puVar47 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar43 + (5 - (int64_t)puVar46));
          if (puVar4 <= puVar47) {
            puVar47 = puVar4;
          }
          puVar56 = puVar62;
          puVar39 = puVar46;
          if (puVar62 < (uint64_t *)((int64_t)puVar47 - 7U)) {
            if (*puVar46 == *puVar62) {
              lVar33 = 0;
              do {
                puVar56 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xd);
                if ((uint64_t *)((int64_t)puVar47 - 7U) <= puVar56) {
                  puVar56 = (uint64_t *)((int64_t)param_4 + lVar33 + 0xd);
                  puVar39 = (uint64_t *)((int64_t)piVar59 + lVar33 + 0xc);
                  goto LAB_7fffa560379c;
                }
                uVar24 = *(uint64_t *)((int64_t)piVar59 + lVar33 + 0xc);
                uVar25 = *puVar56;
                lVar33 = lVar33 + 8;
              } while (uVar24 == uVar25);
              uVar53 = 0;
              for (uVar25 = uVar25 ^ uVar24; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar24 = (uint64_t)(uVar53 >> 3) + lVar33;
            }
            else {
              uVar53 = 0;
              for (uVar24 = *puVar46 ^ *puVar62; (uVar24 & 1) == 0;
                  uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar24 = (uint64_t)(uVar53 >> 3);
            }
          }
          else {
LAB_7fffa560379c:
            if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
               ((int)*puVar39 == (int)*puVar56)) {
              puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
            }
            if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
               ((short)*puVar39 == (short)*puVar56)) {
              puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
            }
            if (puVar56 < puVar47) {
              puVar56 = (uint64_t *)
                        ((int64_t)puVar56 + (uint64_t)((char)*puVar39 == (char)*puVar56));
            }
            uVar24 = (int64_t)puVar56 - (int64_t)puVar62;
          }
          if ((uint64_t *)((int64_t)puVar46 + uVar24) == puVar43) {
            puVar62 = (uint64_t *)((int64_t)puVar62 + uVar24);
            puVar46 = puVar3;
            puVar43 = puVar62;
            if (puVar62 < puVar51) {
              if (*puVar3 == *puVar62) {
                puVar43 = (uint64_t *)((int64_t)param_4 + uVar24 + 0xd);
                lVar33 = 8;
                if (puVar43 < puVar51) {
LAB_7fffa56038b0:
                  if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar43)
                  goto code_r0x7fffa56038c0;
                  uVar53 = 0;
                  for (uVar25 = *puVar43 ^ *(uint64_t *)((int64_t)puVar3 + lVar33);
                      (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar25 = (uint64_t)(uVar53 >> 3) + lVar33;
                  goto LAB_7fffa5603b6a;
                }
LAB_7fffa56038d2:
                puVar46 = (uint64_t *)(lVar33 + (int64_t)puVar3);
                goto LAB_7fffa56038d5;
              }
              uVar25 = 0;
              for (uVar36 = *puVar3 ^ *puVar62; (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar25 = uVar25 + 1;
              }
              uVar25 = uVar25 >> 3 & 0x1fffffff;
            }
            else {
LAB_7fffa56038d5:
              if ((puVar43 < puVar1) && ((int)*puVar46 == (int)*puVar43)) {
                puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
              }
              if ((puVar43 < puVar48) && ((short)*puVar46 == (short)*puVar43)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
                puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
              }
              if (puVar43 < puVar4) {
                puVar43 = (uint64_t *)
                          ((int64_t)puVar43 + (uint64_t)((char)*puVar46 == (char)*puVar43));
              }
              uVar25 = (int64_t)puVar43 - (int64_t)puVar62;
            }
LAB_7fffa5603b6a:
            uVar24 = uVar24 + uVar25;
          }
          puVar46 = (uint64_t *)((int64_t)param_4 + 1);
          uVar25 = (int64_t)puVar46 - (int64_t)puStack_220;
          puVar43 = (uint64_t *)param_2[3];
          if (puVar2 < puVar46) {
            puVar62 = puVar43;
            if (puStack_220 <= puVar2) {
              uVar36 = puStack_220[1];
              *puVar43 = *puStack_220;
              puVar43[1] = uVar36;
              puVar62 = (uint64_t *)
                        ((int64_t)puVar43 + ((int64_t)puVar2 - (int64_t)puStack_220));
              if (0x10 < (int64_t)puVar2 - (int64_t)puStack_220) {
                lVar33 = 0x10;
                do {
                  uVar19 = ((uint64_t *)((int64_t)puStack_220 + lVar33))[1];
                  *(uint64_t *)((int64_t)puVar43 + lVar33) =
                       *(uint64_t *)((int64_t)puStack_220 + lVar33);
                  ((uint64_t *)((int64_t)puVar43 + lVar33))[1] = uVar19;
                  puVar5 = (uint64_t *)((int64_t)puStack_220 + lVar33 + 0x10);
                  uVar19 = puVar5[1];
                  puVar8 = (uint64_t *)((int64_t)puVar43 + lVar33 + 0x10);
                  *puVar8 = *puVar5;
                  puVar8[1] = uVar19;
                  lVar55 = lVar33 + 0x20;
                  lVar33 = lVar33 + 0x20;
                } while ((uint64_t *)((int64_t)puVar43 + lVar55) < puVar62);
              }
              puStack_220 = puVar2;
            }
            if (puStack_220 < puVar46) {
              uVar36 = (int64_t)param_4 + (1 - (int64_t)puStack_220);
              puVar43 = puVar62;
              if ((3 < uVar36) && (0x1f < (uint64_t)((int64_t)puVar62 - (int64_t)puStack_220))) {
                if (uVar36 < 0x20) {
                  uVar42 = 0;
                }
                else {
                  uVar42 = uVar36 & 0xffffffffffffffe0;
                  uVar58 = 0;
                  do {
                    uVar19 = *(uint64_t *)((int64_t)puStack_220 + uVar58);
                    uVar20 = ((uint64_t *)((int64_t)puStack_220 + uVar58))[1];
                    puVar5 = (uint64_t *)((int64_t)puStack_220 + uVar58 + 0x10);
                    uVar21 = puVar5[1];
                    puVar8 = (uint64_t *)((int64_t)puVar62 + uVar58 + 0x10);
                    *puVar8 = *puVar5;
                    puVar8[1] = uVar21;
                    *(uint64_t *)((int64_t)puVar62 + uVar58) = uVar19;
                    ((uint64_t *)((int64_t)puVar62 + uVar58))[1] = uVar20;
                    uVar58 = uVar58 + 0x20;
                  } while (uVar58 != uVar42);
                  if (uVar36 == uVar42) goto LAB_7fffa56044b7;
                  if ((uVar36 & 0x1c) == 0) {
                    puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar42);
                    puVar43 = (uint64_t *)((int64_t)puVar62 + uVar42);
                    goto LAB_7fffa56043e5;
                  }
                }
                uVar58 = uVar36 & 0xfffffffffffffffc;
                puVar43 = (uint64_t *)((int64_t)puVar62 + uVar58);
                do {
                  *(uint32_t *)((int64_t)puVar62 + uVar42) =
                       *(uint32_t *)((int64_t)puStack_220 + uVar42);
                  uVar42 = uVar42 + 4;
                } while (uVar42 != uVar58);
                if (uVar36 == uVar58) goto LAB_7fffa56044b7;
                puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar58);
              }
LAB_7fffa56043e5:
              uVar36 = (int64_t)param_4 + (1 - (int64_t)puStack_220) & 7;
              if (uVar36 == 0) {
                puVar62 = puStack_220;
              }
              else {
                uVar58 = 0;
                puVar47 = puVar43;
                puVar56 = puStack_220;
                do {
                  puVar62 = (uint64_t *)((int64_t)puVar56 + 1);
                  puVar43 = (uint64_t *)((int64_t)puVar47 + 1);
                  uVar58 = uVar58 + 1;
                  *(char *)puVar47 = (char)*puVar56;
                  puVar47 = puVar43;
                  puVar56 = puVar62;
                } while (uVar58 != uVar36);
              }
              if (6 < (uint64_t)((int64_t)param_4 - (int64_t)puStack_220)) {
                lVar33 = 0;
                do {
                  *(uint8_t *)((int64_t)puVar43 + lVar33) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 1) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 1);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 2) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 2);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 3) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 3);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 4) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 4);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 5) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 5);
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 6) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 6);
                  lVar55 = lVar33 + 7;
                  *(uint8_t *)((int64_t)puVar43 + lVar33 + 7) =
                       *(uint8_t *)((int64_t)puVar62 + lVar33 + 7);
                  lVar33 = lVar33 + 8;
                } while ((uint64_t *)((int64_t)puVar62 + lVar55) != param_4);
              }
            }
LAB_7fffa56044b7:
            param_2[3] = param_2[3] + uVar25;
            lVar55 = param_2[1];
            if (0xffff < uVar25) {
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar55 - *param_2) >> 3);
              *(uint32_t *)(param_2 + 9) = 1;
            }
          }
          else {
            uVar36 = puStack_220[1];
            *puVar43 = *puStack_220;
            puVar43[1] = uVar36;
            if (0x10 < uVar25) {
              lVar33 = param_2[3];
              uVar36 = puStack_220[3];
              *(uint64_t *)(lVar33 + 0x10) = puStack_220[2];
              *(uint64_t *)(lVar33 + 0x18) = uVar36;
              if (0x20 < (int64_t)uVar25) {
                lVar55 = 0;
                do {
                  puVar8 = (uint64_t *)((int64_t)puStack_220 + lVar55 + 0x20);
                  uVar19 = puVar8[1];
                  puVar5 = (uint64_t *)(lVar33 + 0x20 + lVar55);
                  *puVar5 = *puVar8;
                  puVar5[1] = uVar19;
                  puVar5 = (uint64_t *)((int64_t)puStack_220 + lVar55 + 0x30);
                  uVar19 = puVar5[1];
                  puVar8 = (uint64_t *)(lVar33 + 0x30 + lVar55);
                  *puVar8 = *puVar5;
                  puVar8[1] = uVar19;
                  lVar32 = lVar33 + 0x20 + lVar55;
                  lVar55 = lVar55 + 0x20;
                } while (lVar32 + 0x20U < lVar33 + uVar25);
              }
              goto LAB_7fffa56044b7;
            }
            lVar55 = param_2[1];
            param_2[3] = param_2[3] + uVar25;
          }
          lVar33 = uVar24 + 4;
          *(short *)(lVar55 + 4) = (short)uVar25;
          uVar24 = uVar24 + 1;
          *(uint32_t *)param_2[1] = 1;
          lVar55 = param_2[1];
joined_r0x7fffa5604a0e:
          if (0xffff < uVar24) {
            *(uint32_t *)(param_2 + 9) = 2;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar55 - *param_2) >> 3);
          }
          param_4 = (uint64_t *)(lVar33 + (int64_t)puVar46);
          *(short *)(lVar55 + 6) = (short)uVar24;
          param_2[1] = param_2[1] + 8;
          if (puVar7 < param_4) {
            puStack_220 = param_4;
          }
          else {
            uVar53 = iVar61 + 2;
            *(uint32_t *)(lVar14 + ((uint64_t)
                                (*(int64_t *)(lVar16 + (uint64_t)uVar53) * -0x30e44323485a9b9d) >>
                               (bVar26 & 0x3f)) * 4) = uVar53;
            *(int *)(lVar14 + ((uint64_t)
                               (*(int64_t *)((int64_t)param_4 + -2) * -0x30e44323485a9b9d) >>
                              (bVar26 & 0x3f)) * 4) = ((int)param_4 + -2) - iVar44;
            *(uint32_t *)(lVar15 + ((uint64_t)
                                (*(int64_t *)((uint64_t)uVar53 + lVar16) * -0x30e4432340650000) >>
                               (bVar29 & 0x3f)) * 4) = uVar53;
            *(int *)(lVar15 + ((uint64_t)
                               (*(int64_t *)((int64_t)param_4 + -1) * -0x30e4432340650000) >>
                              (bVar29 & 0x3f)) * 4) = ((int)param_4 + -1) - iVar44;
            iVar34 = iVar41;
            do {
              iVar50 = iVar35;
              iVar41 = (int)param_4 - iVar44;
              uVar53 = iVar41 - iVar50;
              lVar33 = lVar16;
              if (uVar53 < uVar37) {
                lVar33 = uVar11 - uVar45;
              }
              if (((uVar37 - 1) - uVar53 < 3) ||
                 (piVar59 = (int *)(lVar33 + (uint64_t)uVar53), *piVar59 != (int)*param_4)) {
                puStack_220 = param_4;
                iVar41 = iVar34;
                iVar35 = iVar50;
                break;
              }
              puVar46 = puVar4;
              if (uVar53 < uVar37) {
                puVar46 = puVar10;
              }
              puVar43 = (uint64_t *)((int64_t)param_4 + 4);
              puVar62 = (uint64_t *)(piVar59 + 1);
              puVar47 = (uint64_t *)
                        ((int64_t)param_4 + (int64_t)puVar46 + (4 - (int64_t)puVar62));
              if (puVar4 <= puVar47) {
                puVar47 = puVar4;
              }
              puVar39 = puVar62;
              puVar56 = puVar43;
              if (puVar43 < (uint64_t *)((int64_t)puVar47 - 7U)) {
                if (*puVar62 == *puVar43) {
                  lVar33 = 0xc;
LAB_7fffa5604d40:
                  puVar56 = (uint64_t *)((int64_t)param_4 + lVar33);
                  if (puVar56 < (uint64_t *)((int64_t)puVar47 - 7U)) {
                    if (*(uint64_t *)((int64_t)piVar59 + lVar33) == *puVar56)
                    goto code_r0x7fffa5604d59;
                    uVar53 = 0;
                    for (uVar24 = *(uint64_t *)((int64_t)piVar59 + lVar33) ^ *puVar56;
                        (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                      uVar53 = uVar53 + 1;
                    }
                    uVar24 = ((uint64_t)(uVar53 >> 3) + lVar33) - 4;
                    goto LAB_7fffa5604e28;
                  }
                  puVar39 = (uint64_t *)((int64_t)piVar59 + lVar33);
                  goto LAB_7fffa5604da2;
                }
                uVar53 = 0;
                for (uVar24 = *puVar62 ^ *puVar43; (uVar24 & 1) == 0;
                    uVar24 = uVar24 >> 1 | 0x8000000000000000) {
                  uVar53 = uVar53 + 1;
                }
                uVar24 = (uint64_t)(uVar53 >> 3);
              }
              else {
LAB_7fffa5604da2:
                if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
                   ((int)*puVar39 == (int)*puVar56)) {
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                }
                if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
                   ((short)*puVar39 == (short)*puVar56)) {
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                  puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                }
                if (puVar56 < puVar47) {
                  puVar56 = (uint64_t *)
                            ((int64_t)puVar56 + (uint64_t)((char)*puVar39 == (char)*puVar56));
                }
                uVar24 = (int64_t)puVar56 - (int64_t)puVar43;
              }
LAB_7fffa5604e28:
              if ((uint64_t *)((int64_t)puVar62 + uVar24) == puVar46) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + uVar24);
                puVar46 = puVar3;
                puVar62 = puVar43;
                if (puVar43 < puVar51) {
                  if (*puVar3 == *puVar43) {
                    lVar33 = 0;
                    do {
                      puVar46 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar24 + 0xc);
                      if (puVar51 <= puVar46) {
                        puVar62 = (uint64_t *)((int64_t)param_4 + lVar33 + uVar24 + 0xc);
                        puVar46 = (uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                        goto LAB_7fffa5604f1c;
                      }
                      uVar25 = *puVar46;
                      uVar36 = *(uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                      lVar33 = lVar33 + 8;
                    } while (uVar36 == uVar25);
                    uVar53 = 0;
                    for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                        uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                      uVar53 = uVar53 + 1;
                    }
                    uVar25 = (uint64_t)(uVar53 >> 3) + lVar33;
                  }
                  else {
                    uVar53 = 0;
                    for (uVar25 = *puVar43 ^ *puVar3; (uVar25 & 1) == 0;
                        uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                      uVar53 = uVar53 + 1;
                    }
                    uVar25 = (uint64_t)(uVar53 >> 3);
                  }
                }
                else {
LAB_7fffa5604f1c:
                  if ((puVar62 < puVar1) && ((int)*puVar46 == (int)*puVar62)) {
                    puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
                  }
                  if ((puVar62 < puVar48) && ((short)*puVar46 == (short)*puVar62)) {
                    puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
                    puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
                  }
                  if (puVar62 < puVar4) {
                    puVar62 = (uint64_t *)
                              ((int64_t)puVar62 + (uint64_t)((char)*puVar46 == (char)*puVar62));
                  }
                  uVar25 = (int64_t)puVar62 - (int64_t)puVar43;
                }
                uVar24 = uVar24 + uVar25;
              }
              if (param_4 <= puVar2) {
                puVar46 = (uint64_t *)param_2[3];
                uVar25 = param_4[1];
                *puVar46 = *param_4;
                puVar46[1] = uVar25;
              }
              *(uint16_t *)(param_2[1] + 4) = 0;
              *(uint32_t *)param_2[1] = 1;
              if (0xffff < uVar24 + 1) {
                *(uint32_t *)(param_2 + 9) = 2;
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
              }
              *(short *)(param_2[1] + 6) = (short)(uVar24 + 1);
              param_2[1] = param_2[1] + 8;
              puStack_220 = (uint64_t *)((int64_t)param_4 + uVar24 + 4);
              *(int *)(lVar15 + (*param_4 * -0x30e4432340650000 >> (bVar29 & 0x3f)) * 4) = iVar41;
              *(int *)(lVar14 + (*param_4 * -0x30e44323485a9b9d >> (bVar26 & 0x3f)) * 4) = iVar41;
              param_4 = puStack_220;
              iVar41 = iVar50;
              iVar35 = iVar34;
              iVar34 = iVar50;
            } while (puStack_220 <= puVar7);
          }
        }
      } while (param_4 < puVar7);
    }
  }
  else {
    if (iVar50 != 7) goto LAB_7fffa55fde48;
    if (iVar34 != 0) {
      if (uVar52 < 0x3e) {
        uVar24 = 0;
        do {
          uVar24 = uVar24 + 0x40;
        } while (uVar24 < (uint64_t)(4L << (bVar29 & 0x3f)));
      }
      if (uVar53 < 0x3e) {
        uVar24 = 0;
        do {
          uVar24 = uVar24 + 0x40;
        } while (uVar24 < (uint64_t)(4L << (bVar28 & 0x3f)));
      }
    }
    puVar51 = (uint64_t *)((int64_t)param_4 + (uint64_t)(iVar61 == iVar18));
    if (puVar51 < puVar7) {
      puVar2 = puVar4 + -4;
      bVar26 = 0x40 - cVar22;
      puVar1 = (uint64_t *)((int64_t)puVar4 - 1);
      uVar52 = 0x40 - *(int *)(param_1 + 0x104);
      puVar48 = (uint64_t *)((int64_t)puVar4 - 7);
      puVar46 = (uint64_t *)((int64_t)puVar4 - 3);
      uVar24 = uVar45 ^ 0xffffffffffffffff;
LAB_7fffa55fb7a6:
      iStack_1f8 = (int)puVar51;
      iVar50 = iStack_1f8 - iVar44;
      uVar54 = *puVar51 * -0x30e44323485a9b9d;
      uVar36 = uVar54 >> (bVar26 & 0x3f);
      iVar34 = iVar50 + 1;
      uVar54 = uVar54 >> (0x38 - bVar29 & 0x3f);
      uVar53 = *(uint32_t *)(uVar13 + (uVar54 >> 8) * 4);
      uVar40 = iVar34 - iVar41;
      uVar31 = *(uint32_t *)(lVar14 + uVar36 * 4);
      uVar58 = (uint64_t)uVar31;
      uVar42 = *puVar51 * -0x30e44323405a9d00;
      uVar25 = uVar42 >> (0x38 - bVar28 & 0x3f);
      bVar27 = (uint8_t)uVar52;
      uVar42 = uVar42 >> (bVar27 & 0x3f);
      uVar30 = *(uint32_t *)(uVar12 + (uVar25 >> 8) * 4);
      piVar59 = (int *)((uVar40 - uVar49) + uVar11);
      if (uVar37 <= uVar40) {
        piVar59 = (int *)((uint64_t)uVar40 + lVar16);
      }
      uVar63 = *(uint32_t *)(lVar15 + uVar42 * 4);
      *(int *)(lVar15 + uVar42 * 4) = iVar50;
      *(int *)(lVar14 + uVar36 * 4) = iVar50;
      if ((2 < (uVar37 - 1) - uVar40) && (*piVar59 == *(int *)((int64_t)puVar51 + 1))) {
        puVar43 = (uint64_t *)(piVar59 + 1);
        puVar62 = puVar4;
        if (uVar40 < uVar37) {
          puVar62 = puVar10;
        }
        puVar47 = (uint64_t *)((int64_t)puVar51 + 5);
        puVar56 = (uint64_t *)((int64_t)puVar51 + (int64_t)puVar62 + (5 - (int64_t)puVar43));
        if (puVar4 <= puVar56) {
          puVar56 = puVar4;
        }
        puVar39 = puVar43;
        puVar60 = puVar47;
        if (puVar47 < (uint64_t *)((int64_t)puVar56 - 7U)) {
          if (*puVar43 == *puVar47) {
            lVar33 = 0;
LAB_7fffa55fbe80:
            puVar39 = (uint64_t *)((int64_t)puVar51 + lVar33 + 0xd);
            if (puVar39 < (uint64_t *)((int64_t)puVar56 - 7U)) {
              uVar25 = *(uint64_t *)((int64_t)piVar59 + lVar33 + 0xc);
              uVar36 = *puVar39;
              if (uVar25 == uVar36) goto code_r0x7fffa55fbe9e;
              uVar53 = 0;
              for (uVar36 = uVar36 ^ uVar25; (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar25 = (uint64_t)(uVar53 >> 3) + lVar33 + 8;
              goto LAB_7fffa55fc241;
            }
            puVar60 = (uint64_t *)((int64_t)puVar51 + lVar33 + 0xd);
            puVar39 = (uint64_t *)((int64_t)piVar59 + lVar33 + 0xc);
            goto LAB_7fffa55fc008;
          }
          uVar53 = 0;
          for (uVar25 = *puVar43 ^ *puVar47; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar53 = uVar53 + 1;
          }
          uVar25 = (uint64_t)(uVar53 >> 3);
        }
        else {
LAB_7fffa55fc008:
          if ((puVar60 < (uint64_t *)((int64_t)puVar56 - 3U)) && ((int)*puVar39 == (int)*puVar60))
          {
            puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
            puVar60 = (uint64_t *)((int64_t)puVar60 + 4);
          }
          if ((puVar60 < (uint64_t *)((int64_t)puVar56 - 1U)) &&
             ((short)*puVar39 == (short)*puVar60)) {
            puVar60 = (uint64_t *)((int64_t)puVar60 + 2);
            puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
          }
          if (puVar60 < puVar56) {
            puVar60 = (uint64_t *)
                      ((int64_t)puVar60 + (uint64_t)((char)*puVar39 == (char)*puVar60));
          }
          uVar25 = ~(uint64_t)puVar47;
          uVar25 = ((uVar45 | (uint64_t)puVar60 ^ uVar25) - ((uint64_t)puVar60 ^ uVar25 ^ uVar24))
                   * 0xe86e2c4b + (~uVar45 & ~(uint64_t)puVar60 & uVar25) * -0xe86e2c4d +
                   ((uint64_t)puVar60 & uVar25 ^ uVar24) * 2 +
                   (((uint64_t)puVar47 ^ (uint64_t)puVar60) & uVar45) * -0xe9c1917a +
                   (((uint64_t)puVar60 | (uint64_t)puVar47) & uVar24) * -0xe9c1917b +
                   (~uVar45 & (uint64_t)puVar60 & uVar25) * 4 +
                   (((uint64_t)puVar60 & (uint64_t)puVar47 ^ uVar45) -
                   (~(uint64_t)puVar60 & uVar25 & uVar45)) * 0x153652e +
                   (((uint64_t)puVar47 ^ (uint64_t)puVar60) & uVar24) * 0x1d22fbdc3;
        }
LAB_7fffa55fc241:
        if ((uint64_t *)((int64_t)puVar43 + uVar25) == puVar62) {
          puVar47 = (uint64_t *)((int64_t)puVar47 + uVar25);
          puVar43 = puVar3;
          puVar62 = puVar47;
          if (puVar47 < puVar48) {
            if (*puVar3 == *puVar47) {
              lVar33 = 0;
              do {
                puVar43 = (uint64_t *)((int64_t)puVar51 + lVar33 + uVar25 + 0xd);
                if (puVar48 <= puVar43) {
                  puVar62 = (uint64_t *)((int64_t)puVar51 + lVar33 + uVar25 + 0xd);
                  puVar43 = (uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                  goto LAB_7fffa55fc579;
                }
                uVar36 = *(uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                uVar58 = *puVar43;
                lVar33 = lVar33 + 8;
              } while (uVar36 == uVar58);
              uVar53 = 0;
              for (uVar58 = uVar58 ^ uVar36; (uVar58 & 1) == 0;
                  uVar58 = uVar58 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar36 = (uint64_t)(uVar53 >> 3) + lVar33;
            }
            else {
              uVar53 = 0;
              for (uVar36 = *puVar47 ^ *puVar3; (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar36 = (uint64_t)(uVar53 >> 3);
            }
          }
          else {
LAB_7fffa55fc579:
            if ((puVar62 < puVar46) && ((int)*puVar43 == (int)*puVar62)) {
              puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
              puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
            }
            if ((puVar62 < puVar1) && ((short)*puVar43 == (short)*puVar62)) {
              puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
              puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
            }
            if (puVar62 < puVar4) {
              puVar62 = (uint64_t *)
                        ((int64_t)puVar62 + (uint64_t)((char)*puVar43 == (char)*puVar62));
            }
            uVar36 = (int64_t)puVar62 - (int64_t)puVar47;
          }
          uVar25 = uVar25 + uVar36;
        }
        puVar43 = (uint64_t *)((int64_t)puVar51 + 1);
        uVar36 = (int64_t)puVar43 - (int64_t)param_4;
        puVar62 = (uint64_t *)param_2[3];
        if (puVar2 < puVar43) {
          puVar47 = puVar62;
          if (param_4 <= puVar2) {
            uVar58 = param_4[1];
            *puVar62 = *param_4;
            puVar62[1] = uVar58;
            puVar47 = (uint64_t *)((int64_t)puVar62 + ((int64_t)puVar2 - (int64_t)param_4));
            if (0x10 < (int64_t)puVar2 - (int64_t)param_4) {
              lVar33 = 0x10;
              do {
                uVar19 = ((uint64_t *)((int64_t)param_4 + lVar33))[1];
                *(uint64_t *)((int64_t)puVar62 + lVar33) =
                     *(uint64_t *)((int64_t)param_4 + lVar33);
                ((uint64_t *)((int64_t)puVar62 + lVar33))[1] = uVar19;
                puVar5 = (uint64_t *)((int64_t)param_4 + lVar33 + 0x10);
                uVar19 = puVar5[1];
                puVar8 = (uint64_t *)((int64_t)puVar62 + lVar33 + 0x10);
                *puVar8 = *puVar5;
                puVar8[1] = uVar19;
                lVar55 = lVar33 + 0x20;
                lVar33 = lVar33 + 0x20;
              } while ((uint64_t *)((int64_t)puVar62 + lVar55) < puVar47);
            }
            param_4 = puVar2;
          }
          if (param_4 < puVar43) {
            uVar58 = (int64_t)puVar51 + (1 - (int64_t)param_4);
            if ((uint64_t)((int64_t)puVar47 - (int64_t)param_4) < 0x20 || uVar58 < 4) {
LAB_7fffa55fc6d4:
              puVar62 = puVar47;
            }
            else {
              if (uVar58 < 0x20) {
                uVar54 = 0;
              }
              else {
                uVar54 = uVar58 & 0xffffffffffffffe0;
                uVar42 = 0;
                do {
                  uVar19 = ((uint64_t *)((int64_t)param_4 + uVar42))[1];
                  puVar5 = (uint64_t *)((int64_t)param_4 + uVar42 + 0x10);
                  uVar20 = *puVar5;
                  uVar21 = puVar5[1];
                  *(uint64_t *)((int64_t)puVar47 + uVar42) =
                       *(uint64_t *)((int64_t)param_4 + uVar42);
                  ((uint64_t *)((int64_t)puVar47 + uVar42))[1] = uVar19;
                  puVar5 = (uint64_t *)((int64_t)puVar47 + uVar42 + 0x10);
                  *puVar5 = uVar20;
                  puVar5[1] = uVar21;
                  uVar42 = uVar42 + 0x20;
                } while (uVar42 != uVar54);
                if (uVar58 == uVar54) goto LAB_7fffa55fc8e0;
                if ((uVar58 & 0x1c) == 0) {
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar54);
                  puVar47 = (uint64_t *)((int64_t)puVar47 + uVar54);
                  goto LAB_7fffa55fc6d4;
                }
              }
              uVar42 = uVar58 & 0xfffffffffffffffc;
              puVar62 = (uint64_t *)((int64_t)puVar47 + uVar42);
              do {
                *(uint32_t *)((int64_t)puVar47 + uVar54) =
                     *(uint32_t *)((int64_t)param_4 + uVar54);
                uVar54 = uVar54 + 4;
              } while (uVar54 != uVar42);
              if (uVar58 == uVar42) goto LAB_7fffa55fc8e0;
              param_4 = (uint64_t *)((int64_t)param_4 + uVar42);
            }
            uVar58 = (int64_t)puVar51 + (1 - (int64_t)param_4) & 7;
            puVar47 = param_4;
            if (uVar58 != 0) {
              uVar42 = 0;
              puVar56 = puVar62;
              do {
                puVar62 = (uint64_t *)((int64_t)puVar56 + 1);
                *(char *)puVar56 = (char)*puVar47;
                uVar42 = uVar42 + 1;
                puVar47 = (uint64_t *)((int64_t)puVar47 + 1);
                puVar56 = puVar62;
              } while (uVar42 != uVar58);
            }
            if (6 < (uint64_t)((int64_t)puVar51 - (int64_t)param_4)) {
              lVar33 = 0;
              do {
                *(uint8_t *)((int64_t)puVar62 + lVar33) =
                     *(uint8_t *)((int64_t)puVar47 + lVar33);
                *(uint8_t *)((int64_t)puVar62 + lVar33 + 1) =
                     *(uint8_t *)((int64_t)puVar47 + lVar33 + 1);
                *(uint8_t *)((int64_t)puVar62 + lVar33 + 2) =
                     *(uint8_t *)((int64_t)puVar47 + lVar33 + 2);
                *(uint8_t *)((int64_t)puVar62 + lVar33 + 3) =
                     *(uint8_t *)((int64_t)puVar47 + lVar33 + 3);
                *(uint8_t *)((int64_t)puVar62 + lVar33 + 4) =
                     *(uint8_t *)((int64_t)puVar47 + lVar33 + 4);
                *(uint8_t *)((int64_t)puVar62 + lVar33 + 5) =
                     *(uint8_t *)((int64_t)puVar47 + lVar33 + 5);
                *(uint8_t *)((int64_t)puVar62 + lVar33 + 6) =
                     *(uint8_t *)((int64_t)puVar47 + lVar33 + 6);
                lVar55 = lVar33 + 7;
                *(uint8_t *)((int64_t)puVar62 + lVar33 + 7) =
                     *(uint8_t *)((int64_t)puVar47 + lVar33 + 7);
                lVar33 = lVar33 + 8;
              } while ((uint64_t *)((int64_t)puVar47 + lVar55) != puVar51);
            }
          }
LAB_7fffa55fc8e0:
          lVar33 = param_2[1];
          param_2[3] = param_2[3] + uVar36;
          if (0xffff < uVar36) {
            *(uint32_t *)(param_2 + 9) = 1;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar33 - *param_2) >> 3);
          }
        }
        else {
          uVar58 = param_4[1];
          *puVar62 = *param_4;
          puVar62[1] = uVar58;
          if (0x10 < uVar36) {
            lVar33 = param_2[3];
            uVar58 = param_4[3];
            *(uint64_t *)(lVar33 + 0x10) = param_4[2];
            *(uint64_t *)(lVar33 + 0x18) = uVar58;
            if (0x20 < (int64_t)uVar36) {
              lVar55 = 0;
              do {
                puVar8 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x20);
                uVar19 = puVar8[1];
                puVar5 = (uint64_t *)(lVar33 + 0x20 + lVar55);
                *puVar5 = *puVar8;
                puVar5[1] = uVar19;
                puVar5 = (uint64_t *)((int64_t)param_4 + lVar55 + 0x30);
                uVar19 = puVar5[1];
                puVar8 = (uint64_t *)(lVar33 + 0x30 + lVar55);
                *puVar8 = *puVar5;
                puVar8[1] = uVar19;
                lVar32 = lVar33 + 0x20 + lVar55;
                lVar55 = lVar55 + 0x20;
              } while (lVar32 + 0x20U < lVar33 + uVar36);
            }
            goto LAB_7fffa55fc8e0;
          }
          lVar33 = param_2[1];
          param_2[3] = param_2[3] + uVar36;
        }
        lVar55 = uVar25 + 4;
        *(short *)(lVar33 + 4) = (short)uVar36;
        *(uint32_t *)param_2[1] = 1;
        lVar33 = param_2[1];
        uVar25 = uVar25 + 1;
        iStack_1f8 = iVar41;
        iVar41 = iVar35;
        goto joined_r0x7fffa55fc94f;
      }
      puVar43 = puVar51;
      if (uVar37 < uVar31) {
        puVar62 = (uint64_t *)(uVar58 + lVar16);
        if (*puVar62 != *puVar51) goto LAB_7fffa55fba90;
        puVar47 = puVar51 + 1;
        puVar56 = puVar62 + 1;
        puVar39 = puVar47;
        if (puVar47 < puVar48) {
          if (*puVar56 == *puVar47) {
            lVar55 = lVar16 + 0x10 + uVar58;
            lVar33 = 0;
            do {
              puVar56 = (uint64_t *)((int64_t)puVar51 + lVar33 + 0x10);
              if (puVar48 <= puVar56) {
                puVar56 = (uint64_t *)(lVar55 + lVar33);
                puVar39 = (uint64_t *)((int64_t)puVar51 + lVar33 + 0x10);
                goto joined_r0x7fffa55fbd76;
              }
              uVar25 = *puVar56;
              uVar36 = *(uint64_t *)(lVar55 + lVar33);
              lVar33 = lVar33 + 8;
            } while (uVar36 == uVar25);
            uVar53 = 0;
            for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar53 = uVar53 + 1;
            }
            uVar25 = (uint64_t)(uVar53 >> 3) + lVar33;
          }
          else {
            uVar53 = 0;
            for (uVar25 = *puVar56 ^ *puVar47; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar53 = uVar53 + 1;
            }
            uVar25 = (uint64_t)(uVar53 >> 3);
          }
        }
        else {
joined_r0x7fffa55fbd76:
          if ((puVar39 < puVar46) && ((int)*puVar56 == (int)*puVar39)) {
            puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
            puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
          }
          if ((puVar39 < puVar1) && ((short)*puVar56 == (short)*puVar39)) {
            puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
            puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
          }
          if (puVar39 < puVar4) {
            puVar39 = (uint64_t *)
                      ((int64_t)puVar39 + (uint64_t)((char)*puVar56 == (char)*puVar39));
          }
          uVar25 = (int64_t)puVar39 - (int64_t)puVar47;
        }
        lVar55 = uVar25 + 8;
        iStack_1f8 = iStack_1f8 - (int)puVar62;
        if (param_4 < puVar51) {
          for (puVar51 = (uint64_t *)(uVar58 + lVar16 + -1);
              puVar43 = (uint64_t *)((int64_t)puVar43 + -1), *(char *)puVar43 == (char)*puVar51;
              puVar51 = (uint64_t *)((int64_t)puVar51 + -1)) {
            lVar55 = lVar55 + 1;
            if ((puVar51 <= puVar3) || (puVar43 <= param_4)) goto LAB_7fffa55fd243;
          }
LAB_7fffa55fcc74:
          puVar43 = (uint64_t *)((int64_t)puVar43 + 1);
        }
        goto LAB_7fffa55fd243;
      }
      if ((char)uVar54 == (char)uVar53) {
        uVar53 = uVar53 >> 8;
        if ((uVar53 <= uVar9) || (puVar62 = (uint64_t *)(uVar11 + uVar53), *puVar62 != *puVar51))
        goto LAB_7fffa55fba90;
        puVar47 = puVar51 + 1;
        puVar56 = puVar62 + 1;
        puVar39 = (uint64_t *)((int64_t)puVar51 + (int64_t)puVar10 + (8 - (int64_t)puVar56));
        if (puVar4 <= puVar39) {
          puVar39 = puVar4;
        }
        puVar38 = puVar56;
        puVar60 = puVar47;
        if (puVar47 < (uint64_t *)((int64_t)puVar39 - 7U)) {
          if (*puVar56 == *puVar47) {
            lVar33 = 0x10;
LAB_7fffa55fc9c0:
            puVar60 = (uint64_t *)((int64_t)puVar51 + lVar33);
            if (puVar60 < (uint64_t *)((int64_t)puVar39 - 7U)) {
              if (*(uint64_t *)((int64_t)puVar62 + lVar33) == *puVar60) goto code_r0x7fffa55fca22;
              uVar25 = 0;
              for (uVar36 = *(uint64_t *)((int64_t)puVar62 + lVar33) ^ *puVar60; (uVar36 & 1) == 0
                  ; uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar25 = uVar25 + 1;
              }
              uVar25 = ((uVar25 >> 3 & 0x1fffffff) - 8) + lVar33;
              goto LAB_7fffa55fcf8b;
            }
            puVar38 = (uint64_t *)((int64_t)puVar62 + lVar33);
            goto LAB_7fffa55fce5f;
          }
          uVar31 = 0;
          for (uVar25 = *puVar47 ^ *puVar56; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar31 = uVar31 + 1;
          }
          uVar25 = (uint64_t)(uVar31 >> 3);
        }
        else {
LAB_7fffa55fce5f:
          if ((puVar60 < (uint64_t *)((int64_t)puVar39 - 3U)) && ((int)*puVar38 == (int)*puVar60))
          {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            puVar60 = (uint64_t *)((int64_t)puVar60 + 4);
          }
          if ((puVar60 < (uint64_t *)((int64_t)puVar39 - 1U)) &&
             ((short)*puVar38 == (short)*puVar60)) {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
            puVar60 = (uint64_t *)((int64_t)puVar60 + 2);
          }
          if (puVar60 < puVar39) {
            puVar60 = (uint64_t *)
                      ((int64_t)puVar60 + (uint64_t)((char)*puVar38 == (char)*puVar60));
          }
          uVar25 = (int64_t)puVar60 - (int64_t)puVar47;
        }
LAB_7fffa55fcf8b:
        if ((uint64_t *)((int64_t)puVar56 + uVar25) == puVar10) {
          puVar47 = (uint64_t *)((int64_t)puVar47 + uVar25);
          puVar62 = puVar3;
          puVar56 = puVar47;
          if (puVar47 < puVar48) {
            if (*puVar3 == *puVar47) {
              lVar33 = 0;
              do {
                puVar62 = (uint64_t *)((int64_t)puVar51 + lVar33 + uVar25 + 0x10);
                if (puVar48 <= puVar62) {
                  puVar56 = (uint64_t *)((int64_t)puVar51 + lVar33 + uVar25 + 0x10);
                  puVar62 = (uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                  goto LAB_7fffa55fd172;
                }
                uVar36 = *(uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                uVar58 = *puVar62;
                lVar33 = lVar33 + 8;
              } while (uVar36 == uVar58);
              uVar31 = 0;
              for (uVar36 = uVar36 ^ uVar58; (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar31 = uVar31 + 1;
              }
              uVar36 = (uint64_t)(uVar31 >> 3) + lVar33;
            }
            else {
              uVar31 = 0;
              for (uVar36 = *puVar47 ^ *puVar3; (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar31 = uVar31 + 1;
              }
              uVar36 = (uint64_t)(uVar31 >> 3);
            }
          }
          else {
LAB_7fffa55fd172:
            if ((puVar56 < puVar46) && ((int)*puVar62 == (int)*puVar56)) {
              puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
              puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
            }
            if ((puVar56 < puVar1) && ((short)*puVar62 == (short)*puVar56)) {
              puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
              puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
            }
            if (puVar56 < puVar4) {
              puVar56 = (uint64_t *)
                        ((int64_t)puVar56 + (uint64_t)((char)*puVar62 == (char)*puVar56));
            }
            uVar36 = (int64_t)puVar56 - (int64_t)puVar47;
          }
          uVar25 = uVar25 + uVar36;
        }
        iStack_1f8 = iVar50 - (uVar53 + uVar49);
        lVar55 = uVar25 + 8;
        if (puVar51 <= param_4) goto LAB_7fffa55fd243;
        puVar62 = (uint64_t *)((uint64_t)uVar53 + (uVar11 - 1));
        puVar51 = (uint64_t *)((int64_t)puVar51 + -1);
        do {
          if ((char)*puVar51 != (char)*puVar62) goto LAB_7fffa55fd238;
          lVar55 = lVar55 + 1;
          puVar43 = (uint64_t *)((int64_t)puVar51 + -1);
          if (puVar51 <= param_4) break;
          bVar17 = puVar57 < puVar62;
          puVar62 = (uint64_t *)((int64_t)puVar62 + -1);
          puVar51 = puVar43;
        } while (bVar17);
LAB_7fffa55fd233:
        puVar43 = (uint64_t *)((int64_t)puVar43 + 1);
        goto LAB_7fffa55fd243;
      }
LAB_7fffa55fba90:
      if (uVar37 < uVar63) {
        puVar62 = (uint64_t *)((uint64_t)uVar63 + lVar16);
        if ((int)*puVar62 == (int)*puVar51) goto LAB_7fffa55fbaaf;
      }
      else if ((((char)uVar25 == (char)uVar30) && (uVar30 = uVar30 >> 8, uVar9 < uVar30)) &&
              (*(int *)(uVar11 + uVar30) == (int)*puVar51)) {
        puVar62 = (uint64_t *)(uVar30 + uVar11);
        uVar63 = uVar30 + uVar49;
LAB_7fffa55fbaaf:
        uVar36 = *(int64_t *)((int64_t)puVar51 + 1) * -0x30e44323485a9b9d;
        uVar25 = uVar36 >> (0x38 - bVar29 & 0x3f);
        puVar43 = (uint64_t *)((int64_t)puVar51 + 1);
        uVar36 = uVar36 >> (bVar26 & 0x3f);
        uVar53 = *(uint32_t *)(uVar13 + (uVar25 >> 8) * 4);
        uVar31 = *(uint32_t *)(lVar14 + uVar36 * 4);
        uVar58 = (uint64_t)uVar31;
        *(int *)(lVar14 + uVar36 * 4) = iVar34;
        if (uVar37 < uVar31) {
          puVar47 = (uint64_t *)(uVar58 + lVar16);
          if (*puVar47 == *puVar43) {
            puVar62 = (uint64_t *)((int64_t)puVar51 + 9);
            puVar56 = puVar47 + 1;
            if (puVar62 < puVar48) {
              if (*puVar56 == *puVar62) {
                lVar33 = lVar16 + 0x10 + uVar58;
                lVar55 = 0;
LAB_7fffa55fc970:
                puVar56 = (uint64_t *)((int64_t)puVar51 + lVar55 + 0x11);
                if (puVar56 < puVar48) {
                  uVar25 = *puVar56;
                  uVar36 = *(uint64_t *)(lVar33 + lVar55);
                  if (uVar36 == uVar25) goto code_r0x7fffa55fc9a0;
                  uVar53 = 0;
                  for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                      uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                    uVar53 = uVar53 + 1;
                  }
                  uVar25 = (uint64_t)(uVar53 >> 3) + lVar55 + 8;
                  goto LAB_7fffa55fcda4;
                }
                puVar39 = (uint64_t *)((int64_t)puVar51 + lVar55 + 0x11);
                puVar56 = (uint64_t *)(lVar33 + lVar55);
                goto LAB_7fffa55fcd26;
              }
              uVar53 = 0;
              for (uVar25 = *puVar62 ^ *puVar56; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar25 = (uint64_t)(uVar53 >> 3);
            }
            else {
              puVar39 = puVar62;
LAB_7fffa55fcd26:
              if ((puVar39 < puVar46) && ((int)*puVar56 == (int)*puVar39)) {
                puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
              }
              if ((puVar39 < puVar1) && ((short)*puVar56 == (short)*puVar39)) {
                puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
              }
              if (puVar39 < puVar4) {
                puVar39 = (uint64_t *)
                          ((int64_t)puVar39 + (uint64_t)((char)*puVar56 == (char)*puVar39));
              }
              uVar25 = (int64_t)puVar39 - (int64_t)puVar62;
            }
LAB_7fffa55fcda4:
            lVar55 = uVar25 + 8;
            iStack_1f8 = (int)puVar43 - (int)puVar47;
            if (param_4 < puVar43) {
              puVar62 = (uint64_t *)(uVar58 + lVar16 + -1);
              do {
                puVar43 = puVar51;
                if ((char)*puVar43 != (char)*puVar62) {
                  puVar43 = (uint64_t *)((int64_t)puVar43 + 1);
                  break;
                }
                lVar55 = lVar55 + 1;
                if (puVar43 <= param_4) break;
                bVar17 = puVar3 < puVar62;
                puVar51 = (uint64_t *)((int64_t)puVar43 + -1);
                puVar62 = (uint64_t *)((int64_t)puVar62 + -1);
              } while (bVar17);
            }
            goto LAB_7fffa55fd243;
          }
        }
        else if ((char)uVar25 == (char)uVar53) {
          uVar53 = uVar53 >> 8;
          uVar25 = (uint64_t)uVar53;
          if ((uVar9 < uVar53) && (*(uint64_t *)(uVar11 + uVar25) == *puVar43)) {
            puVar56 = (uint64_t *)(uVar11 + uVar25) + 1;
            puVar62 = (uint64_t *)((int64_t)puVar51 + 9);
            puVar47 = (uint64_t *)((int64_t)puVar51 + (int64_t)puVar10 + (9 - (int64_t)puVar56))
            ;
            if (puVar4 <= puVar47) {
              puVar47 = puVar4;
            }
            puVar39 = puVar62;
            puVar60 = puVar56;
            if (puVar62 < (uint64_t *)((int64_t)puVar47 - 7U)) {
              if (*puVar56 == *puVar62) {
                lVar33 = uVar11 + 0x10 + uVar25;
                lVar55 = 0;
                do {
                  puVar39 = (uint64_t *)((int64_t)puVar51 + lVar55 + 0x11);
                  if ((uint64_t *)((int64_t)puVar47 - 7U) <= puVar39) {
                    puVar39 = (uint64_t *)((int64_t)puVar51 + lVar55 + 0x11);
                    puVar60 = (uint64_t *)(lVar33 + lVar55);
                    goto LAB_7fffa55fdb00;
                  }
                  uVar36 = *puVar39;
                  uVar58 = *(uint64_t *)(lVar33 + lVar55);
                  lVar55 = lVar55 + 8;
                } while (uVar58 == uVar36);
                uVar31 = 0;
                for (uVar36 = uVar36 ^ uVar58; (uVar36 & 1) == 0;
                    uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                  uVar31 = uVar31 + 1;
                }
                uVar36 = (uint64_t)(uVar31 >> 3) + lVar55;
              }
              else {
                uVar31 = 0;
                for (uVar36 = *puVar62 ^ *puVar56; (uVar36 & 1) == 0;
                    uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                  uVar31 = uVar31 + 1;
                }
                uVar36 = (uint64_t)(uVar31 >> 3);
              }
            }
            else {
LAB_7fffa55fdb00:
              if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 3U)) &&
                 ((int)*puVar60 == (int)*puVar39)) {
                puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
                puVar60 = (uint64_t *)((int64_t)puVar60 + 4);
              }
              if ((puVar39 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
                 ((short)*puVar60 == (short)*puVar39)) {
                puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
                puVar60 = (uint64_t *)((int64_t)puVar60 + 2);
              }
              if (puVar39 < puVar47) {
                puVar39 = (uint64_t *)
                          ((int64_t)puVar39 + (uint64_t)((char)*puVar60 == (char)*puVar39));
              }
              uVar36 = (int64_t)puVar39 - (int64_t)puVar62;
            }
            if ((uint64_t *)((int64_t)puVar56 + uVar36) == puVar10) {
              puVar62 = (uint64_t *)((int64_t)puVar62 + uVar36);
              puVar47 = puVar62;
              puVar56 = puVar3;
              if (puVar62 < puVar48) {
                if (*puVar3 == *puVar62) {
                  lVar33 = 0;
                  do {
                    puVar47 = (uint64_t *)((int64_t)puVar51 + lVar33 + uVar36 + 0x11);
                    if (puVar48 <= puVar47) {
                      puVar47 = (uint64_t *)((int64_t)puVar51 + lVar33 + uVar36 + 0x11);
                      puVar56 = (uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                      goto LAB_7fffa55fdcc7;
                    }
                    uVar58 = *puVar47;
                    uVar42 = *(uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                    lVar33 = lVar33 + 8;
                  } while (uVar42 == uVar58);
                  uVar31 = 0;
                  for (uVar58 = uVar58 ^ uVar42; (uVar58 & 1) == 0;
                      uVar58 = uVar58 >> 1 | 0x8000000000000000) {
                    uVar31 = uVar31 + 1;
                  }
                  uVar58 = (uint64_t)(uVar31 >> 3) + lVar33;
                }
                else {
                  uVar31 = 0;
                  for (uVar58 = *puVar62 ^ *puVar3; (uVar58 & 1) == 0;
                      uVar58 = uVar58 >> 1 | 0x8000000000000000) {
                    uVar31 = uVar31 + 1;
                  }
                  uVar58 = (uint64_t)(uVar31 >> 3);
                }
              }
              else {
LAB_7fffa55fdcc7:
                if ((puVar47 < puVar46) && ((int)*puVar56 == (int)*puVar47)) {
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 4);
                }
                if ((puVar47 < puVar1) && ((short)*puVar56 == (short)*puVar47)) {
                  puVar47 = (uint64_t *)((int64_t)puVar47 + 2);
                  puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                }
                if (puVar47 < puVar4) {
                  puVar47 = (uint64_t *)
                            ((int64_t)puVar47 + (uint64_t)((char)*puVar56 == (char)*puVar47));
                }
                uVar58 = (int64_t)puVar47 - (int64_t)puVar62;
              }
              uVar36 = uVar36 + uVar58;
            }
            iStack_1f8 = (iVar34 - uVar53) - uVar49;
            lVar55 = uVar36 + 8;
            if (param_4 < puVar43) {
              puVar62 = (uint64_t *)(uVar25 + (uVar11 - 1));
              for (puVar43 = puVar51; (char)*puVar43 == (char)*puVar62;
                  puVar43 = (uint64_t *)((int64_t)puVar43 + -1)) {
                lVar55 = lVar55 + 1;
                if ((puVar43 <= param_4) || (puVar62 <= puVar57)) goto LAB_7fffa55fd243;
                puVar62 = (uint64_t *)((int64_t)puVar62 + -1);
              }
              puVar43 = (uint64_t *)((int64_t)puVar43 + 1);
            }
            goto LAB_7fffa55fd243;
          }
        }
        puVar43 = (uint64_t *)((int64_t)puVar62 + 4);
        puVar47 = (uint64_t *)((int64_t)puVar51 + 4);
        if (uVar63 < uVar37) {
          puVar56 = (uint64_t *)(((int64_t)puVar10 - (int64_t)puVar43) + (int64_t)puVar47);
          if (puVar4 <= puVar56) {
            puVar56 = puVar4;
          }
          puVar39 = puVar43;
          puVar60 = puVar47;
          if (puVar47 < (uint64_t *)((int64_t)puVar56 - 7U)) {
            if (*puVar43 == *puVar47) {
              lVar33 = 0;
              do {
                puVar39 = (uint64_t *)((int64_t)puVar51 + lVar33 + 0xc);
                if ((uint64_t *)((int64_t)puVar56 - 7U) <= puVar39) {
                  puVar60 = (uint64_t *)((int64_t)puVar51 + lVar33 + 0xc);
                  puVar39 = (uint64_t *)((int64_t)puVar62 + lVar33 + 0xc);
                  goto LAB_7fffa55fca3f;
                }
                uVar25 = *puVar39;
                uVar36 = *(uint64_t *)((int64_t)puVar62 + lVar33 + 0xc);
                lVar33 = lVar33 + 8;
              } while (uVar36 == uVar25);
              uVar53 = 0;
              for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar25 = (uint64_t)(uVar53 >> 3) + lVar33;
            }
            else {
              uVar53 = 0;
              for (uVar25 = *puVar43 ^ *puVar47; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar25 = (uint64_t)(uVar53 >> 3);
            }
          }
          else {
LAB_7fffa55fca3f:
            if ((puVar60 < (uint64_t *)((int64_t)puVar56 - 3U)) &&
               ((int)*puVar39 == (int)*puVar60)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
              puVar60 = (uint64_t *)((int64_t)puVar60 + 4);
            }
            if ((puVar60 < (uint64_t *)((int64_t)puVar56 - 1U)) &&
               ((short)*puVar39 == (short)*puVar60)) {
              puVar60 = (uint64_t *)((int64_t)puVar60 + 2);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
            }
            if (puVar60 < puVar56) {
              puVar60 = (uint64_t *)
                        ((int64_t)puVar60 + (uint64_t)((char)*puVar39 == (char)*puVar60));
            }
            uVar25 = (int64_t)puVar60 - (int64_t)puVar47;
          }
          if ((uint64_t *)((int64_t)puVar43 + uVar25) == puVar10) {
            puVar47 = (uint64_t *)((int64_t)puVar47 + uVar25);
            puVar43 = puVar47;
            puVar56 = puVar3;
            if (puVar47 < puVar48) {
              if (*puVar3 == *puVar47) {
                lVar33 = 0;
                do {
                  puVar43 = (uint64_t *)((int64_t)puVar51 + lVar33 + uVar25 + 0xc);
                  if (puVar48 <= puVar43) {
                    puVar43 = (uint64_t *)((int64_t)puVar51 + lVar33 + uVar25 + 0xc);
                    puVar56 = (uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                    goto LAB_7fffa55fd062;
                  }
                  uVar36 = *(uint64_t *)((int64_t)puVar3 + lVar33 + 8);
                  uVar58 = *puVar43;
                  lVar33 = lVar33 + 8;
                } while (uVar36 == uVar58);
                uVar53 = 0;
                for (uVar58 = uVar58 ^ uVar36; (uVar58 & 1) == 0;
                    uVar58 = uVar58 >> 1 | 0x8000000000000000) {
                  uVar53 = uVar53 + 1;
                }
                uVar36 = (uint64_t)(uVar53 >> 3) + lVar33;
              }
              else {
                uVar53 = 0;
                for (uVar36 = *puVar47 ^ *puVar3; (uVar36 & 1) == 0;
                    uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                  uVar53 = uVar53 + 1;
                }
                uVar36 = (uint64_t)(uVar53 >> 3);
              }
            }
            else {
LAB_7fffa55fd062:
              if ((puVar43 < puVar46) && ((int)*puVar56 == (int)*puVar43)) {
                puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
                puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
              }
              if ((puVar43 < puVar1) && ((short)*puVar56 == (short)*puVar43)) {
                puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
                puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
              }
              if (puVar43 < puVar4) {
                puVar43 = (uint64_t *)
                          ((int64_t)puVar43 + (uint64_t)((char)*puVar56 == (char)*puVar43));
              }
              uVar36 = (int64_t)puVar43 - (int64_t)puVar47;
            }
            uVar25 = uVar25 + uVar36;
          }
          lVar55 = uVar25 + 4;
          iStack_1f8 = iVar50 - uVar63;
          puVar43 = puVar51;
          if ((param_4 < puVar51) && (puVar57 < puVar62)) {
            puVar51 = (uint64_t *)((int64_t)puVar51 + -1);
            do {
              puVar62 = (uint64_t *)((int64_t)puVar62 + -1);
              if ((char)*puVar51 != *(char *)puVar62) goto LAB_7fffa55fd238;
              lVar55 = lVar55 + 1;
              puVar43 = (uint64_t *)((int64_t)puVar51 + -1);
            } while ((puVar57 < puVar62) && (bVar17 = param_4 < puVar51, puVar51 = puVar43, bVar17))
            ;
            goto LAB_7fffa55fd233;
          }
        }
        else {
          puVar56 = puVar47;
          if (puVar47 < puVar48) {
            if (*puVar43 == *puVar47) {
              lVar33 = 0;
              do {
                puVar43 = (uint64_t *)((int64_t)puVar51 + lVar33 + 0xc);
                if (puVar48 <= puVar43) {
                  puVar43 = (uint64_t *)((int64_t)puVar62 + lVar33 + 0xc);
                  puVar56 = (uint64_t *)((int64_t)puVar51 + lVar33 + 0xc);
                  goto joined_r0x7fffa55fcb96;
                }
                uVar25 = *puVar43;
                uVar36 = *(uint64_t *)((int64_t)puVar62 + lVar33 + 0xc);
                lVar33 = lVar33 + 8;
              } while (uVar36 == uVar25);
              uVar53 = 0;
              for (uVar25 = uVar25 ^ uVar36; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar25 = (uint64_t)(uVar53 >> 3) + lVar33;
            }
            else {
              uVar53 = 0;
              for (uVar25 = *puVar43 ^ *puVar47; (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar25 = (uint64_t)(uVar53 >> 3);
            }
          }
          else {
joined_r0x7fffa55fcb96:
            if ((puVar56 < puVar46) && ((int)*puVar43 == (int)*puVar56)) {
              puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
              puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
            }
            if ((puVar56 < puVar1) && ((short)*puVar43 == (short)*puVar56)) {
              puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
              puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
            }
            if (puVar56 < puVar4) {
              puVar56 = (uint64_t *)
                        ((int64_t)puVar56 + (uint64_t)((char)*puVar43 == (char)*puVar56));
            }
            uVar25 = (int64_t)puVar56 - (int64_t)puVar47;
          }
          lVar55 = uVar25 + 4;
          iStack_1f8 = iStack_1f8 - (int)puVar62;
          puVar43 = puVar51;
          if ((puVar3 < puVar62) && (param_4 < puVar51)) {
            puVar51 = (uint64_t *)((int64_t)puVar51 + -1);
            do {
              puVar62 = (uint64_t *)((int64_t)puVar62 + -1);
              if ((char)*puVar51 != *(char *)puVar62) {
                puVar43 = (uint64_t *)((int64_t)puVar51 + 1);
                goto LAB_7fffa55fd243;
              }
              lVar55 = lVar55 + 1;
              puVar43 = (uint64_t *)((int64_t)puVar51 + -1);
            } while ((param_4 < puVar51) && (puVar51 = puVar43, puVar3 < puVar62));
            goto LAB_7fffa55fcc74;
          }
        }
        goto LAB_7fffa55fd243;
      }
      puVar51 = (uint64_t *)((int64_t)puVar51 + ((int64_t)puVar51 - (int64_t)param_4 >> 8) + 1);
      goto LAB_7fffa55fb798;
    }
  }
  param_4 = puStack_220;
LAB_7fffa560541f:
  param_3[1] = iVar35;
  *param_3 = iVar41;
  return (int64_t)puVar4 - (int64_t)param_4;
code_r0x7fffa5601240:
  puVar43 = puVar43 + 1;
  lVar33 = lVar33 + 8;
  if (puVar48 <= puVar43) goto LAB_7fffa5601252;
  goto LAB_7fffa5601230;
code_r0x7fffa5600fd2:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa5600fb0;
code_r0x7fffa5600c6d:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa5600c50;
code_r0x7fffa5601ddd:
  puVar43 = puVar43 + 1;
  lVar33 = lVar33 + 8;
  if (puVar48 <= puVar43) goto LAB_7fffa5601dfe;
  goto LAB_7fffa5601da0;
code_r0x7fffa56017ee:
  lVar55 = lVar55 + 8;
  goto LAB_7fffa5601790;
LAB_7fffa5601eec:
  puVar46 = (uint64_t *)((int64_t)param_4 + 1);
LAB_7fffa5601ffc:
  uVar25 = (int64_t)puVar46 - (int64_t)puStack_220;
  puVar43 = (uint64_t *)param_2[3];
  if (puVar1 < puVar46) {
    puVar62 = puVar43;
    if (puStack_220 <= puVar1) {
      puVar62 = (uint64_t *)((int64_t)puVar43 + ((int64_t)puVar1 - (int64_t)puStack_220));
      uVar24 = puStack_220[1];
      *puVar43 = *puStack_220;
      puVar43[1] = uVar24;
      if (0x10 < (int64_t)puVar1 - (int64_t)puStack_220) {
        lVar33 = 0x10;
        while( true ) {
          uVar19 = ((uint64_t *)((int64_t)puStack_220 + lVar33))[1];
          *(uint64_t *)((int64_t)puVar43 + lVar33) =
               *(uint64_t *)((int64_t)puStack_220 + lVar33);
          ((uint64_t *)((int64_t)puVar43 + lVar33))[1] = uVar19;
          puVar5 = (uint64_t *)((int64_t)puStack_220 + lVar33 + 0x10);
          uVar19 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar43 + lVar33 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar19;
          if (puVar62 <= (uint64_t *)((int64_t)puVar43 + lVar33 + 0x20)) break;
          lVar33 = lVar33 + 0x20;
        }
      }
      puStack_220 = puVar1;
    }
    if (puStack_220 < puVar46) {
      uVar24 = (int64_t)puVar46 - (int64_t)puStack_220;
      puVar43 = puVar62;
      if ((3 < uVar24) && (0x1f < (uint64_t)((int64_t)puVar62 - (int64_t)puStack_220))) {
        if (uVar24 < 0x20) {
          uVar58 = 0;
        }
        else {
          uVar58 = uVar24 & 0xffffffffffffffe0;
          uVar36 = 0;
          do {
            uVar19 = *(uint64_t *)((int64_t)puStack_220 + uVar36);
            uVar20 = ((uint64_t *)((int64_t)puStack_220 + uVar36))[1];
            puVar5 = (uint64_t *)((int64_t)puStack_220 + uVar36 + 0x10);
            uVar21 = puVar5[1];
            puVar8 = (uint64_t *)((int64_t)puVar62 + uVar36 + 0x10);
            *puVar8 = *puVar5;
            puVar8[1] = uVar21;
            *(uint64_t *)((int64_t)puVar62 + uVar36) = uVar19;
            ((uint64_t *)((int64_t)puVar62 + uVar36))[1] = uVar20;
            uVar36 = uVar36 + 0x20;
          } while (uVar36 != uVar58);
          if (uVar24 == uVar58) goto LAB_7fffa56023c0;
          if ((uVar24 & 0x1c) == 0) {
            puVar43 = (uint64_t *)((int64_t)puVar62 + uVar58);
            puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar58);
            goto LAB_7fffa5602292;
          }
        }
        uVar36 = uVar24 & 0xfffffffffffffffc;
        puVar43 = (uint64_t *)((int64_t)puVar62 + uVar36);
        do {
          *(uint32_t *)((int64_t)puVar62 + uVar58) =
               *(uint32_t *)((int64_t)puStack_220 + uVar58);
          uVar58 = uVar58 + 4;
        } while (uVar58 != uVar36);
        if (uVar24 == uVar36) goto LAB_7fffa56023c0;
        puStack_220 = (uint64_t *)((int64_t)puStack_220 + uVar36);
      }
LAB_7fffa5602292:
      uVar24 = (int64_t)puVar46 - (int64_t)puStack_220 & 7;
      if (uVar24 == 0) {
        puVar62 = puStack_220;
      }
      else {
        uVar36 = 0;
        puVar47 = puVar43;
        puVar56 = puStack_220;
        do {
          puVar62 = (uint64_t *)((int64_t)puVar56 + 1);
          puVar43 = (uint64_t *)((int64_t)puVar47 + 1);
          uVar36 = uVar36 + 1;
          *(char *)puVar47 = (char)*puVar56;
          puVar47 = puVar43;
          puVar56 = puVar62;
        } while (uVar36 != uVar24);
      }
      if ((uint64_t)((int64_t)puStack_220 - (int64_t)puVar46) < 0xfffffffffffffff9) {
        while( true ) {
          *(char *)puVar43 = (char)*puVar62;
          *(uint8_t *)((int64_t)puVar43 + 1) = *(uint8_t *)((int64_t)puVar62 + 1);
          *(uint8_t *)((int64_t)puVar43 + 2) = *(uint8_t *)((int64_t)puVar62 + 2);
          *(uint8_t *)((int64_t)puVar43 + 3) = *(uint8_t *)((int64_t)puVar62 + 3);
          *(uint8_t *)((int64_t)puVar43 + 4) = *(uint8_t *)((int64_t)puVar62 + 4);
          *(uint8_t *)((int64_t)puVar43 + 5) = *(uint8_t *)((int64_t)puVar62 + 5);
          *(uint8_t *)((int64_t)puVar43 + 6) = *(uint8_t *)((int64_t)puVar62 + 6);
          *(uint8_t *)((int64_t)puVar43 + 7) = *(uint8_t *)((int64_t)puVar62 + 7);
          if (puVar62 + 1 == puVar46) break;
          puVar43 = puVar43 + 1;
          puVar62 = puVar62 + 1;
        }
      }
    }
  }
  else {
    uVar24 = puStack_220[1];
    *puVar43 = *puStack_220;
    puVar43[1] = uVar24;
    if (uVar25 < 0x11) {
      param_2[3] = param_2[3] + uVar25;
      lVar33 = param_2[1];
      goto LAB_7fffa56023f1;
    }
    lVar33 = param_2[3];
    uVar24 = puStack_220[3];
    *(uint64_t *)(lVar33 + 0x10) = puStack_220[2];
    *(uint64_t *)(lVar33 + 0x18) = uVar24;
    if (0x20 < (int64_t)uVar25) {
      lVar32 = 0;
      do {
        puVar8 = (uint64_t *)((int64_t)puStack_220 + lVar32 + 0x20);
        uVar19 = puVar8[1];
        puVar5 = (uint64_t *)(lVar33 + 0x20 + lVar32);
        *puVar5 = *puVar8;
        puVar5[1] = uVar19;
        puVar5 = (uint64_t *)((int64_t)puStack_220 + lVar32 + 0x30);
        uVar19 = puVar5[1];
        puVar8 = (uint64_t *)(lVar33 + 0x30 + lVar32);
        *puVar8 = *puVar5;
        puVar8[1] = uVar19;
        lVar6 = lVar33 + 0x20 + lVar32;
        lVar32 = lVar32 + 0x20;
      } while (lVar6 + 0x20U < lVar33 + uVar25);
    }
  }
LAB_7fffa56023c0:
  param_2[3] = param_2[3] + uVar25;
  lVar33 = param_2[1];
  if (0xffff < uVar25) {
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar33 - *param_2) >> 3);
    *(uint32_t *)(param_2 + 9) = 1;
  }
LAB_7fffa56023f1:
  uVar24 = lVar55 - 3;
  *(short *)(lVar33 + 4) = (short)uVar25;
  *(int *)param_2[1] = iStack_200 + 3;
  lVar33 = param_2[1];
joined_r0x7fffa56016ab:
  if (0xffff < uVar24) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar33 - *param_2) >> 3);
  }
  param_4 = (uint64_t *)(lVar55 + (int64_t)puVar46);
  *(short *)(lVar33 + 6) = (short)uVar24;
  param_2[1] = param_2[1] + 8;
  iVar35 = iVar41;
  if (puVar7 < param_4) {
LAB_7fffa56008d4:
    iVar41 = iStack_200;
    puStack_220 = param_4;
  }
  else {
    uVar52 = iVar50 + 2;
    *(uint32_t *)(lVar14 + ((uint64_t)(*(int64_t *)(lVar16 + (uint64_t)uVar52) * -0x30e44323485a9b9d)
                       >> (bVar28 & 0x3f)) * 4) = uVar52;
    *(int *)(lVar14 + ((uint64_t)(*(int64_t *)((int64_t)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (bVar28 & 0x3f)) * 4) = ((int)param_4 + -2) - iVar44;
    *(uint32_t *)(lVar15 + ((uint64_t)(*(int64_t *)(lVar16 + (uint64_t)uVar52) * -0x30e4432345000000)
                       >> (bVar26 & 0x3f)) * 4) = uVar52;
    *(int *)(lVar15 + ((uint64_t)(*(int64_t *)((int64_t)param_4 + -1) * -0x30e4432345000000) >>
                      (bVar26 & 0x3f)) * 4) = ((int)param_4 + -1) - iVar44;
    do {
      iVar41 = iVar35;
      iVar35 = iStack_200;
      iVar34 = (int)param_4 - iVar44;
      uVar52 = iVar34 - iVar41;
      lVar33 = lVar16;
      if (uVar52 < uVar37) {
        lVar33 = uVar11 - uVar45;
      }
      if (((uVar37 - 1) - uVar52 < 3) ||
         (piVar59 = (int *)(lVar33 + (uint64_t)uVar52), *piVar59 != (int)*param_4)) {
        iStack_200 = iVar35;
        iVar35 = iVar41;
        goto LAB_7fffa56008d4;
      }
      puVar46 = (uint64_t *)((int64_t)param_4 + 4);
      puVar43 = (uint64_t *)(piVar59 + 1);
      puVar62 = puVar4;
      if (uVar52 < uVar37) {
        puVar62 = puVar10;
      }
      puVar47 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar62 + (4 - (int64_t)puVar43));
      if (puVar4 <= puVar47) {
        puVar47 = puVar4;
      }
      puVar56 = puVar46;
      puVar39 = puVar43;
      if (puVar46 < (uint64_t *)((int64_t)puVar47 - 7U)) {
        if (*puVar43 == *puVar46) {
          lVar33 = 0xc;
LAB_7fffa5602680:
          puVar56 = (uint64_t *)((int64_t)param_4 + lVar33);
          if (puVar56 < (uint64_t *)((int64_t)puVar47 - 7U)) {
            if (*(uint64_t *)((int64_t)piVar59 + lVar33) == *puVar56) goto code_r0x7fffa560269a;
            uVar52 = 0;
            for (uVar24 = *puVar56 ^ *(uint64_t *)((int64_t)piVar59 + lVar33); (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar52 = uVar52 + 1;
            }
            uVar24 = ((uint64_t)(uVar52 >> 3) + lVar33) - 4;
            goto LAB_7fffa56027bf;
          }
          puVar39 = (uint64_t *)((int64_t)piVar59 + lVar33);
          goto LAB_7fffa560270b;
        }
        uVar24 = 0;
        for (uVar25 = *puVar46 ^ *puVar43; (uVar25 & 1) == 0;
            uVar25 = uVar25 >> 1 | 0x8000000000000000) {
          uVar24 = uVar24 + 1;
        }
        uVar24 = uVar24 >> 3 & 0x1fffffff;
      }
      else {
LAB_7fffa560270b:
        if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 3U)) && ((int)*puVar39 == (int)*puVar56)) {
          puVar56 = (uint64_t *)((int64_t)puVar56 + 4);
          puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
        }
        if ((puVar56 < (uint64_t *)((int64_t)puVar47 - 1U)) &&
           ((short)*puVar39 == (short)*puVar56)) {
          puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
          puVar56 = (uint64_t *)((int64_t)puVar56 + 2);
        }
        if (puVar56 < puVar47) {
          puVar56 = (uint64_t *)((int64_t)puVar56 + (uint64_t)((char)*puVar39 == (char)*puVar56))
          ;
        }
        uVar24 = (int64_t)puVar56 - (int64_t)puVar46;
      }
LAB_7fffa56027bf:
      if ((uint64_t *)((int64_t)puVar43 + uVar24) == puVar62) {
        puVar46 = (uint64_t *)((int64_t)puVar46 + uVar24);
        puVar43 = puVar46;
        puVar62 = puVar3;
        if (puVar46 < puVar48) {
          if (*puVar3 == *puVar46) {
            puVar43 = (uint64_t *)((int64_t)param_4 + uVar24 + 0xc);
            lVar33 = 8;
LAB_7fffa5602820:
            if (puVar43 < puVar48) {
              if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar43) goto code_r0x7fffa560284c;
              uVar52 = 0;
              for (uVar25 = *puVar43 ^ *(uint64_t *)((int64_t)puVar3 + lVar33); (uVar25 & 1) == 0;
                  uVar25 = uVar25 >> 1 | 0x8000000000000000) {
                uVar52 = uVar52 + 1;
              }
              uVar25 = (uint64_t)(uVar52 >> 3) + lVar33;
              goto LAB_7fffa56028dc;
            }
            puVar62 = (uint64_t *)(lVar33 + (int64_t)puVar3);
            goto LAB_7fffa5602861;
          }
          uVar52 = 0;
          for (uVar25 = *puVar46 ^ *puVar3; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar52 = uVar52 + 1;
          }
          uVar25 = (uint64_t)(uVar52 >> 3);
        }
        else {
LAB_7fffa5602861:
          if ((puVar43 < puVar2) && ((int)*puVar62 == (int)*puVar43)) {
            puVar43 = (uint64_t *)((int64_t)puVar43 + 4);
            puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
          }
          if ((puVar43 < puVar51) && ((short)*puVar62 == (short)*puVar43)) {
            puVar43 = (uint64_t *)((int64_t)puVar43 + 2);
            puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
          }
          if (puVar43 < puVar4) {
            puVar43 = (uint64_t *)
                      ((int64_t)puVar43 + (uint64_t)((char)*puVar62 == (char)*puVar43));
          }
          uVar25 = (int64_t)puVar43 - (int64_t)puVar46;
        }
LAB_7fffa56028dc:
        uVar24 = uVar24 + uVar25;
      }
      if (param_4 <= puVar1) {
        uVar25 = param_4[1];
        puVar46 = (uint64_t *)param_2[3];
        *puVar46 = *param_4;
        puVar46[1] = uVar25;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar24 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar24 + 1);
      param_2[1] = param_2[1] + 8;
      *(int *)(lVar15 + (*param_4 * -0x30e4432345000000 >> (bVar26 & 0x3f)) * 4) = iVar34;
      *(int *)(lVar14 + (*param_4 * -0x30e44323485a9b9d >> (bVar28 & 0x3f)) * 4) = iVar34;
      param_4 = (uint64_t *)((int64_t)param_4 + uVar24 + 4);
      puStack_220 = param_4;
      iStack_200 = iVar41;
    } while (param_4 <= puVar7);
  }
LAB_7fffa56008d7:
  if (puVar7 <= param_4) goto LAB_7fffa5605408;
  goto LAB_7fffa56008f2;
code_r0x7fffa5602bb1:
  puVar62 = puVar62 + 1;
  lVar33 = lVar33 + 8;
  if (puVar48 <= puVar62) goto LAB_7fffa5602bc3;
  goto LAB_7fffa5602ba5;
code_r0x7fffa5601a70:
  puVar46 = puVar46 + 1;
  lVar33 = lVar33 + 8;
  if (puVar48 <= puVar46) goto LAB_7fffa5601a89;
  goto LAB_7fffa5601a60;
code_r0x7fffa5600eb2:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa5600e90;
code_r0x7fffa560269a:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa5602680;
code_r0x7fffa560284c:
  puVar43 = puVar43 + 1;
  lVar33 = lVar33 + 8;
  goto LAB_7fffa5602820;
code_r0x7fffa56035eb:
  lVar55 = lVar55 + 8;
  goto LAB_7fffa56035ce;
code_r0x7fffa5603766:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa5603740;
code_r0x7fffa56038c0:
  puVar43 = puVar43 + 1;
  lVar33 = lVar33 + 8;
  if (puVar51 <= puVar43) goto LAB_7fffa56038d2;
  goto LAB_7fffa56038b0;
code_r0x7fffa5604d59:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa5604d40;
code_r0x7fffa55fe712:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa55fe6f0;
code_r0x7fffa55fe3fd:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa55fe3e0;
code_r0x7fffa55ff5a0:
  puVar46 = puVar46 + 1;
  lVar33 = lVar33 + 8;
  if (puVar1 <= puVar46) goto LAB_7fffa55ff5b2;
  goto LAB_7fffa55ff590;
code_r0x7fffa55ff052:
  lVar55 = lVar55 + 8;
  goto LAB_7fffa55ff030;
code_r0x7fffa55fe8a2:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa55fe880;
code_r0x7fffa5600555:
  puVar62 = puVar62 + 1;
  lVar33 = lVar33 + 8;
  if (puVar1 <= puVar62) goto LAB_7fffa5600567;
  goto LAB_7fffa5600545;
code_r0x7fffa55fe24c:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa55fe220;
code_r0x7fffa55feb90:
  puVar62 = puVar62 + 1;
  lVar33 = lVar33 + 8;
  if (puVar1 <= puVar62) goto LAB_7fffa55feba2;
  goto LAB_7fffa55feb80;
code_r0x7fffa55fbe9e:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa55fbe80;
code_r0x7fffa55fca22:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa55fc9c0;
LAB_7fffa55fd238:
  puVar43 = (uint64_t *)((int64_t)puVar51 + 1);
LAB_7fffa55fd243:
  puVar51 = (uint64_t *)param_2[3];
  uVar25 = (int64_t)puVar43 - (int64_t)param_4;
  if (puVar2 < puVar43) {
    puVar62 = puVar51;
    if (param_4 <= puVar2) {
      uVar36 = param_4[1];
      *puVar51 = *param_4;
      puVar51[1] = uVar36;
      puVar62 = (uint64_t *)((int64_t)puVar51 + ((int64_t)puVar2 - (int64_t)param_4));
      if (0x10 < (int64_t)puVar2 - (int64_t)param_4) {
        lVar33 = 0x10;
        do {
          uVar19 = ((uint64_t *)((int64_t)param_4 + lVar33))[1];
          *(uint64_t *)((int64_t)puVar51 + lVar33) = *(uint64_t *)((int64_t)param_4 + lVar33);
          ((uint64_t *)((int64_t)puVar51 + lVar33))[1] = uVar19;
          puVar5 = (uint64_t *)((int64_t)param_4 + lVar33 + 0x10);
          uVar19 = puVar5[1];
          puVar8 = (uint64_t *)((int64_t)puVar51 + lVar33 + 0x10);
          *puVar8 = *puVar5;
          puVar8[1] = uVar19;
          lVar32 = lVar33 + 0x20;
          lVar33 = lVar33 + 0x20;
        } while ((uint64_t *)((int64_t)puVar51 + lVar32) < puVar62);
      }
      param_4 = puVar2;
    }
    if (param_4 < puVar43) {
      uVar36 = (int64_t)puVar43 - (int64_t)param_4;
      if ((3 < uVar36) && (0x1f < (uint64_t)((int64_t)puVar62 - (int64_t)param_4))) {
        if (uVar36 < 0x20) {
          uVar42 = 0;
        }
        else {
          uVar42 = uVar36 & 0xffffffffffffffe0;
          uVar58 = 0;
          do {
            uVar19 = ((uint64_t *)((int64_t)param_4 + uVar58))[1];
            puVar5 = (uint64_t *)((int64_t)param_4 + uVar58 + 0x10);
            uVar20 = *puVar5;
            uVar21 = puVar5[1];
            *(uint64_t *)((int64_t)puVar62 + uVar58) =
                 *(uint64_t *)((int64_t)param_4 + uVar58);
            ((uint64_t *)((int64_t)puVar62 + uVar58))[1] = uVar19;
            puVar5 = (uint64_t *)((int64_t)puVar62 + uVar58 + 0x10);
            *puVar5 = uVar20;
            puVar5[1] = uVar21;
            uVar58 = uVar58 + 0x20;
          } while (uVar58 != uVar42);
          if (uVar36 == uVar42) goto LAB_7fffa55fd4e0;
          if ((uVar36 & 0x1c) == 0) {
            puVar62 = (uint64_t *)((int64_t)puVar62 + uVar42);
            param_4 = (uint64_t *)((int64_t)param_4 + uVar42);
            goto LAB_7fffa55fd428;
          }
        }
        uVar58 = uVar36 & 0xfffffffffffffffc;
        do {
          *(uint32_t *)((int64_t)puVar62 + uVar42) = *(uint32_t *)((int64_t)param_4 + uVar42);
          uVar42 = uVar42 + 4;
        } while (uVar42 != uVar58);
        if (uVar36 == uVar58) goto LAB_7fffa55fd4e0;
        param_4 = (uint64_t *)((int64_t)param_4 + uVar58);
        puVar62 = (uint64_t *)((int64_t)puVar62 + uVar58);
      }
LAB_7fffa55fd428:
      uVar36 = (int64_t)puVar43 - (int64_t)param_4 & 7;
      puVar51 = param_4;
      if (uVar36 != 0) {
        uVar58 = 0;
        puVar47 = param_4;
        puVar56 = puVar62;
        do {
          puVar62 = (uint64_t *)((int64_t)puVar56 + 1);
          puVar51 = (uint64_t *)((int64_t)puVar47 + 1);
          *(char *)puVar56 = (char)*puVar47;
          uVar58 = uVar58 + 1;
          puVar47 = puVar51;
          puVar56 = puVar62;
        } while (uVar58 != uVar36);
      }
      if ((uint64_t)((int64_t)param_4 - (int64_t)puVar43) < 0xfffffffffffffff9) {
        lVar33 = 0;
        do {
          *(uint8_t *)((int64_t)puVar62 + lVar33) = *(uint8_t *)((int64_t)puVar51 + lVar33);
          *(uint8_t *)((int64_t)puVar62 + lVar33 + 1) =
               *(uint8_t *)((int64_t)puVar51 + lVar33 + 1);
          *(uint8_t *)((int64_t)puVar62 + lVar33 + 2) =
               *(uint8_t *)((int64_t)puVar51 + lVar33 + 2);
          *(uint8_t *)((int64_t)puVar62 + lVar33 + 3) =
               *(uint8_t *)((int64_t)puVar51 + lVar33 + 3);
          *(uint8_t *)((int64_t)puVar62 + lVar33 + 4) =
               *(uint8_t *)((int64_t)puVar51 + lVar33 + 4);
          *(uint8_t *)((int64_t)puVar62 + lVar33 + 5) =
               *(uint8_t *)((int64_t)puVar51 + lVar33 + 5);
          *(uint8_t *)((int64_t)puVar62 + lVar33 + 6) =
               *(uint8_t *)((int64_t)puVar51 + lVar33 + 6);
          *(uint8_t *)((int64_t)puVar62 + lVar33 + 7) =
               *(uint8_t *)((int64_t)puVar51 + lVar33 + 7);
          lVar32 = lVar33 + 8;
          lVar33 = lVar33 + 8;
        } while ((uint64_t *)((int64_t)puVar51 + lVar32) != puVar43);
      }
    }
  }
  else {
    uVar36 = param_4[1];
    *puVar51 = *param_4;
    puVar51[1] = uVar36;
    if (uVar25 < 0x11) {
      lVar33 = param_2[1];
      param_2[3] = param_2[3] + uVar25;
      goto LAB_7fffa55fd51f;
    }
    lVar33 = param_2[3];
    uVar36 = param_4[3];
    *(uint64_t *)(lVar33 + 0x10) = param_4[2];
    *(uint64_t *)(lVar33 + 0x18) = uVar36;
    if (0x20 < (int64_t)uVar25) {
      lVar32 = 0;
      do {
        puVar8 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x20);
        uVar19 = puVar8[1];
        puVar5 = (uint64_t *)(lVar33 + 0x20 + lVar32);
        *puVar5 = *puVar8;
        puVar5[1] = uVar19;
        puVar5 = (uint64_t *)((int64_t)param_4 + lVar32 + 0x30);
        uVar19 = puVar5[1];
        puVar8 = (uint64_t *)(lVar33 + 0x30 + lVar32);
        *puVar8 = *puVar5;
        puVar8[1] = uVar19;
        lVar6 = lVar33 + 0x20 + lVar32;
        lVar32 = lVar32 + 0x20;
      } while (lVar6 + 0x20U < lVar33 + uVar25);
    }
  }
LAB_7fffa55fd4e0:
  lVar33 = param_2[1];
  param_2[3] = param_2[3] + uVar25;
  if (0xffff < uVar25) {
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar33 - *param_2) >> 3);
    *(uint32_t *)(param_2 + 9) = 1;
  }
LAB_7fffa55fd51f:
  *(short *)(lVar33 + 4) = (short)uVar25;
  *(int *)param_2[1] = iStack_1f8 + 3;
  lVar33 = param_2[1];
  uVar25 = lVar55 - 3;
joined_r0x7fffa55fc94f:
  if (0xffff < uVar25) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar33 - *param_2) >> 3);
  }
  *(short *)(lVar33 + 6) = (short)uVar25;
  param_2[1] = param_2[1] + 8;
  puVar51 = (uint64_t *)(lVar55 + (int64_t)puVar43);
  iVar35 = iVar41;
  if (puVar7 < puVar51) {
LAB_7fffa55fb795:
    iVar41 = iStack_1f8;
    param_4 = puVar51;
  }
  else {
    uVar53 = iVar50 + 2;
    *(uint32_t *)(lVar14 + ((uint64_t)(*(int64_t *)(lVar16 + (uint64_t)uVar53) * -0x30e44323485a9b9d)
                       >> (bVar26 & 0x3f)) * 4) = uVar53;
    *(int *)(lVar14 + ((uint64_t)(*(int64_t *)((int64_t)puVar51 + -2) * -0x30e44323485a9b9d) >>
                      (bVar26 & 0x3f)) * 4) = ((int)puVar51 + -2) - iVar44;
    *(uint32_t *)(lVar15 + ((uint64_t)(*(int64_t *)(lVar16 + (uint64_t)uVar53) * -0x30e44323405a9d00)
                       >> (bVar27 & 0x3f)) * 4) = uVar53;
    *(int *)(lVar15 + ((uint64_t)(*(int64_t *)((int64_t)puVar51 + -1) * -0x30e44323405a9d00) >>
                      (uint64_t)uVar52) * 4) = ((int)puVar51 + -1) - iVar44;
    puVar43 = puVar51;
    iVar34 = iVar41;
    do {
      iVar35 = iStack_1f8;
      iVar41 = iVar34;
      iVar34 = (int)puVar43 - iVar44;
      uVar53 = iVar34 - iVar41;
      lVar33 = lVar16;
      if (uVar53 < uVar37) {
        lVar33 = uVar11 - uVar45;
      }
      if (((uVar37 - 1) - uVar53 < 3) ||
         (piVar59 = (int *)(lVar33 + (uint64_t)uVar53), *piVar59 != (int)*puVar43)) {
        puVar51 = puVar43;
        iStack_1f8 = iVar35;
        iVar35 = iVar41;
        goto LAB_7fffa55fb795;
      }
      puVar51 = (uint64_t *)(piVar59 + 1);
      puVar62 = puVar4;
      if (uVar53 < uVar37) {
        puVar62 = puVar10;
      }
      puVar47 = (uint64_t *)((int64_t)puVar43 + 4);
      puVar56 = (uint64_t *)((int64_t)puVar43 + (int64_t)puVar62 + (4 - (int64_t)puVar51));
      if (puVar4 <= puVar56) {
        puVar56 = puVar4;
      }
      puVar39 = puVar47;
      puVar60 = puVar51;
      if (puVar47 < (uint64_t *)((int64_t)puVar56 - 7U)) {
        if (*puVar51 == *puVar47) {
          lVar33 = 0xc;
LAB_7fffa55fd7c0:
          puVar39 = (uint64_t *)((int64_t)puVar43 + lVar33);
          if (puVar39 < (uint64_t *)((int64_t)puVar56 - 7U)) {
            if (*(uint64_t *)((int64_t)piVar59 + lVar33) == *puVar39) goto code_r0x7fffa55fd7d9;
            uVar53 = 0;
            for (uVar25 = *puVar39 ^ *(uint64_t *)((int64_t)piVar59 + lVar33); (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar53 = uVar53 + 1;
            }
            uVar25 = ((uint64_t)(uVar53 >> 3) + lVar33) - 4;
            goto LAB_7fffa55fd895;
          }
          puVar60 = (uint64_t *)((int64_t)piVar59 + lVar33);
          goto LAB_7fffa55fd7e5;
        }
        uVar53 = 0;
        for (uVar25 = *puVar47 ^ *puVar51; (uVar25 & 1) == 0;
            uVar25 = uVar25 >> 1 | 0x8000000000000000) {
          uVar53 = uVar53 + 1;
        }
        uVar25 = (uint64_t)(uVar53 >> 3);
      }
      else {
LAB_7fffa55fd7e5:
        if ((puVar39 < (uint64_t *)((int64_t)puVar56 - 3U)) && ((int)*puVar60 == (int)*puVar39)) {
          puVar60 = (uint64_t *)((int64_t)puVar60 + 4);
          puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
        }
        if ((puVar39 < (uint64_t *)((int64_t)puVar56 - 1U)) &&
           ((short)*puVar60 == (short)*puVar39)) {
          puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
          puVar60 = (uint64_t *)((int64_t)puVar60 + 2);
        }
        if (puVar39 < puVar56) {
          puVar39 = (uint64_t *)((int64_t)puVar39 + (uint64_t)((char)*puVar60 == (char)*puVar39))
          ;
        }
        uVar25 = (int64_t)puVar39 - (int64_t)puVar47;
      }
LAB_7fffa55fd895:
      if ((uint64_t *)((int64_t)puVar51 + uVar25) == puVar62) {
        puVar47 = (uint64_t *)((int64_t)puVar47 + uVar25);
        puVar51 = puVar3;
        puVar62 = puVar47;
        if (puVar47 < puVar48) {
          if (*puVar3 == *puVar47) {
            puVar62 = (uint64_t *)((int64_t)puVar43 + uVar25 + 0xc);
            lVar33 = 8;
            if (puVar62 < puVar48) {
LAB_7fffa55fd9a0:
              if (*(uint64_t *)((int64_t)puVar3 + lVar33) == *puVar62) goto code_r0x7fffa55fd9b0;
              uVar53 = 0;
              for (uVar36 = *puVar62 ^ *(uint64_t *)((int64_t)puVar3 + lVar33); (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar53 = uVar53 + 1;
              }
              uVar36 = (uint64_t)(uVar53 >> 3) + lVar33;
              goto LAB_7fffa55fdad4;
            }
LAB_7fffa55fd9c2:
            puVar51 = (uint64_t *)(lVar33 + (int64_t)puVar3);
            goto LAB_7fffa55fd9c7;
          }
          uVar53 = 0;
          for (uVar36 = *puVar47 ^ *puVar3; (uVar36 & 1) == 0;
              uVar36 = uVar36 >> 1 | 0x8000000000000000) {
            uVar53 = uVar53 + 1;
          }
          uVar36 = (uint64_t)(uVar53 >> 3);
        }
        else {
LAB_7fffa55fd9c7:
          if ((puVar62 < puVar46) && ((int)*puVar51 == (int)*puVar62)) {
            puVar51 = (uint64_t *)((int64_t)puVar51 + 4);
            puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
          }
          if ((puVar62 < puVar1) && ((short)*puVar51 == (short)*puVar62)) {
            puVar51 = (uint64_t *)((int64_t)puVar51 + 2);
            puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
          }
          if (puVar62 < puVar4) {
            puVar62 = (uint64_t *)
                      ((int64_t)puVar62 + (uint64_t)((char)*puVar51 == (char)*puVar62));
          }
          uVar36 = (int64_t)puVar62 - (int64_t)puVar47;
        }
LAB_7fffa55fdad4:
        uVar25 = uVar25 + uVar36;
      }
      if (puVar43 <= puVar2) {
        uVar36 = puVar43[1];
        puVar51 = (uint64_t *)param_2[3];
        *puVar51 = *puVar43;
        puVar51[1] = uVar36;
      }
      *(uint16_t *)(param_2[1] + 4) = 0;
      *(uint32_t *)param_2[1] = 1;
      if (0xffff < uVar25 + 1) {
        *(uint32_t *)(param_2 + 9) = 2;
        *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
      }
      *(short *)(param_2[1] + 6) = (short)(uVar25 + 1);
      param_2[1] = param_2[1] + 8;
      puVar51 = (uint64_t *)((int64_t)puVar43 + uVar25 + 4);
      *(int *)(lVar15 + (*puVar43 * -0x30e44323405a9d00 >> (bVar27 & 0x3f)) * 4) = iVar34;
      *(int *)(lVar14 + (*puVar43 * -0x30e44323485a9b9d >> (bVar26 & 0x3f)) * 4) = iVar34;
      puVar43 = puVar51;
      param_4 = puVar51;
      iVar34 = iVar35;
      iStack_1f8 = iVar41;
    } while (puVar51 <= puVar7);
  }
LAB_7fffa55fb798:
  if (puVar7 <= puVar51) goto LAB_7fffa560541f;
  goto LAB_7fffa55fb7a6;
code_r0x7fffa55fc9a0:
  lVar55 = lVar55 + 8;
  goto LAB_7fffa55fc970;
code_r0x7fffa55fd7d9:
  lVar33 = lVar33 + 8;
  goto LAB_7fffa55fd7c0;
code_r0x7fffa55fd9b0:
  puVar62 = puVar62 + 1;
  lVar33 = lVar33 + 8;
  if (puVar48 <= puVar62) goto LAB_7fffa55fd9c2;
  goto LAB_7fffa55fd9a0;
}


// ============================================================================
// Function : FUN_7fffa5605480  |  RVA: 0xe95480  |  Size: 1015 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5605480(uint64_t param_1,uint32_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  code *pcVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint32_t uVar10;
  uint64_t in_XMM4_Qa;
  int64_t lVar11;
  
  uVar6 = (param_2 + 0x75578c2f) * 0x1000000 | param_2 + 0x75578c2f >> 8;
  bVar3 = (uint8_t)param_2;
  uVar4 = (in_XMM4_Qa << 0x2d | in_XMM4_Qa >> 0x13) ^ (in_XMM4_Qa << 7 | in_XMM4_Qa >> 0x39) ^
          (in_XMM4_Qa << 0x33 | in_XMM4_Qa >> 0xd);
  uVar4 = (uVar4 << 0x28 | uVar4 >> 0x18) ^ (uVar4 << 0x34 | uVar4 >> 0xc) ^ uVar4;
  uVar4 = (uVar4 << 0x28 | uVar4 >> 0x18) ^ (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar4;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ (uVar4 << 0x20 | uVar4 >> 0x20) ^ uVar4;
  uVar4 = (uVar4 << 0x25 | uVar4 >> 0x1b) ^ (uVar4 << 0x3c | uVar4 >> 4) ^
          (uVar4 << 0x20 | uVar4 >> 0x20);
  uVar4 = (uVar4 << 10 | uVar4 >> 0x36) ^ (uVar4 << 0x38 | uVar4 >> 8) ^ uVar4;
  uVar4 = (uVar4 << 0x30 | uVar4 >> 0x10) ^ (uVar4 << 0x14 | uVar4 >> 0x2c) ^ uVar4;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) ^ (uVar4 << 0x28 | uVar4 >> 0x18) ^ uVar4;
  uVar7 = uVar4 << 0x10 | uVar4 >> 0x30;
  uVar4 = -uVar7;
  if ((int64_t)(int)(param_2 + 0x9d30462c) < (int64_t)(uint64_t)((param_2 | 1) * -0x779dcae0)) {
    uVar4 = uVar7;
  }
  uVar7 = uVar4 ^ 0x95225b2a;
  uVar10 = (uint32_t)(uVar4 >> 0x20);
  lVar11 = (uVar7 & 0xffffffff) * 0x5a77cd1c +
           ((uVar7 & 0xffffffff) * 0xffffffff + (uint64_t)uVar10 * 0x5a77cd1c << 0x20);
  lVar9 = (uVar4 | 0xffffffff6adda4d5) * 0x4292e921 +
          ((uint64_t)uVar10 * (uint64_t)uVar6 << 0x20) + (uVar7 & 0xffffffff) * (uint64_t)uVar6 +
          0x4292e921;
  lVar8 = lVar9 + lVar11;
  if (((0x51ae281d << (bVar3 & 0x1f) | 0x51ae281dU >> 0x20 - (bVar3 & 0x1f)) ^ 0xc2cb4015) <
      ((0xef576a0fU >> (bVar3 & 0x1f) | -0x10a895f1 << 0x20 - (bVar3 & 0x1f)) ^ 0x54265fbe)) {
    lVar8 = lVar11 * lVar9;
  }
  uVar7 = uVar4 + 1;
  if ((-0x1171107a << (bVar3 & 0x1f) | 0xee8eef86U >> 0x20 - (bVar3 & 0x1f)) == 0xe1bba3bb) {
    uVar7 = ~uVar4;
  }
  uVar7 = (uVar4 & 0x95225b2a & uVar7) * 0x2680f743 +
          (~uVar4 & 0x95225b2a) * (uint64_t)((param_2 + 0x4e87d97b ^ 0xf9a8e3d1) * -0x1f17bd3f) +
          (lVar8 - (uVar4 & 0xffffffff6adda4d5)) ^ (uVar4 << 0x20 | uVar4 >> 0x20);
  uVar4 = *(uint64_t *)(uVar7 + 8);
  if (uVar4 != 0) {
    puVar1 = *(uint64_t **)(uVar7 + 0x18);
    puVar2 = *(uint64_t **)(uVar7 + 0x20);
    if (puVar1 != puVar2) {
      uVar4 = puVar1[7];
      while( true ) {
        if (7 < uVar4) {
          uVar4 = puVar1[4];
          pcVar5 = (code *)((int64_t)
                            (short)((0x6f23U >> (bVar3 & 0xf) | 0x6f23 << 0x10 - (bVar3 & 0xf)) *
                                   0x7a9f) + 0x7fffa568dc6c);
          (*pcVar5)(pcVar5,uVar4,uVar4 >> 0x3d ^ uVar4,0x330652ca);
        }
        *(uint16_t *)(puVar1 + 4) = 0;
        puVar1[7] = 7;
        puVar1[6] = 0;
        if (7 < puVar1[3]) {
          pcVar5 = (code *)((int64_t)
                            (int)(0xd3ffffc8U >> (bVar3 & 0x1f) |
                                 -0x2c000038 << 0x20 - (bVar3 & 0x1f)) + 0x7fffa56958e1);
          (*pcVar5)(pcVar5,0x7fffa56958e1,*puVar1 >> 0x3d ^ *puVar1);
        }
        puVar1[3] = 7;
        puVar1[2] = 0;
        *(uint16_t *)puVar1 = 0;
        if (puVar1 + 8 == puVar2) break;
        uVar4 = puVar1[0xf];
        puVar1 = puVar1 + 8;
      }
      uVar4 = *(uint64_t *)(uVar7 + 8);
    }
    pcVar5 = (code *)((int64_t)(short)(0x64a0U >> (bVar3 & 0xf) | 0x64a0 << 0x10 - (bVar3 & 0xf)) +
                     0x7fffa568fa9e);
    (*pcVar5)(param_2,pcVar5,uVar4 >> 0x3d ^ uVar4);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5605880  |  RVA: 0xe95880  |  Size: 46 bytes
// Callers  : FUN_7fffa507ae2a@0x90ae2a
// Callees  : FUN_7fffa55abd60@0xe3bd60
// ============================================================================
void FUN_7fffa5605880(int64_t param_1,uint32_t param_2)

{
  uint8_t *pbVar1;
  uint8_t bVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  uint32_t uVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  uint8_t *pbVar9;
  uint32_t uVar10;
  
  *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_1 + 0x10);
  FUN_7fffa55abd60();
  uVar10 = 0;
  if (param_2 != 0) {
    do {
      *(uint8_t *)(param_1 + 0x18) = 0;
      *(uint64_t *)(param_1 + 0x1c) = 0;
      *(uint64_t *)(param_1 + 0x24) = 0;
      *(uint64_t *)(param_1 + 0x30) = 0;
      *(uint64_t *)(param_1 + 0x38) = 0;
      bVar2 = **(uint8_t **)(param_1 + 8);
      pbVar9 = *(uint8_t **)(param_1 + 8) + 1;
      *(uint8_t *)(param_1 + 0x18) = bVar2;
      *(uint8_t **)(param_1 + 8) = pbVar9;
      if ((bVar2 & 1) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(int64_t)(char)(&UNK_7fffa56b3150)[bVar7 & 0xf];
        *(uint32_t *)(param_1 + 0x1c) =
             *(uint32_t *)(pbVar9 + -4) >> ((&UNK_7fffa56b3160)[bVar7 & 0xf] & 0x1f);
        *(uint8_t **)(param_1 + 8) = pbVar9;
      }
      if ((bVar2 & 2) != 0) {
        uVar4 = *(uint32_t *)pbVar9;
        pbVar9 = pbVar9 + 4;
        *(uint8_t **)(param_1 + 8) = pbVar9;
        *(uint32_t *)(param_1 + 0x20) = uVar4;
      }
      if ((bVar2 & 4) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(int64_t)(char)(&UNK_7fffa56b3150)[bVar7 & 0xf];
        *(uint32_t *)(param_1 + 0x24) =
             *(uint32_t *)(pbVar9 + -4) >> ((&UNK_7fffa56b3160)[bVar7 & 0xf] & 0x1f);
        *(uint8_t **)(param_1 + 8) = pbVar9;
      }
      pbVar1 = pbVar9 + 4;
      *(uint32_t *)(param_1 + 0x28) = *(uint32_t *)pbVar9;
      bVar7 = bVar2 & 0x30;
      *(uint8_t **)(param_1 + 8) = pbVar1;
      if ((bVar2 & 8) == 0) {
        if (bVar7 == 0x10) {
          bVar2 = (&UNK_7fffa56b3160)[*pbVar1 & 0xf];
          uVar6 = *(uint32_t *)(((int64_t)pbVar1 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar1 & 0xf])
                           + -4);
          *(int64_t *)(param_1 + 8) =
               (int64_t)pbVar1 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar1 & 0xf];
          *(uint64_t *)(param_1 + 0x30) =
               (uint64_t)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
        }
        else if (bVar7 == 0x20) {
          cVar3 = (&UNK_7fffa56b3150)[*pbVar1 & 0xf];
          bVar2 = (&UNK_7fffa56b3160)[*pbVar1 & 0xf];
          pbVar9 = pbVar1 + -(int64_t)cVar3;
          uVar6 = *(uint32_t *)(pbVar9 + -4);
          *(uint8_t **)(param_1 + 8) = pbVar9;
          *(uint64_t *)(param_1 + 0x30) =
               (uint64_t)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          bVar2 = (&UNK_7fffa56b3160)[*pbVar9 & 0xf];
          uVar6 = *(uint32_t *)(pbVar1 + (-(int64_t)cVar3 -
                                     (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar9 & 0xf]) + -4);
          *(uint8_t **)(param_1 + 8) =
               pbVar1 + (-(int64_t)cVar3 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar9 & 0xf]);
          uVar8 = (uint64_t)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          goto LAB_7fffa5605a40;
        }
      }
      else if (bVar7 == 0x10) {
        iVar5 = *(int *)pbVar1;
        *(uint8_t **)(param_1 + 8) = pbVar9 + 8;
        *(int64_t *)(param_1 + 0x30) = (int64_t)iVar5;
      }
      else if (bVar7 == 0x20) {
        iVar5 = *(int *)pbVar1;
        *(uint8_t **)(param_1 + 8) = pbVar9 + 8;
        *(int64_t *)(param_1 + 0x30) = (int64_t)iVar5;
        uVar8 = (uint64_t)*(int *)(pbVar9 + 8);
        *(uint8_t **)(param_1 + 8) = pbVar9 + 0xc;
LAB_7fffa5605a40:
        *(uint64_t *)(param_1 + 0x38) = uVar8;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa56058ae  |  RVA: 0xe958ae  |  Size: 423 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa56058ae(void)

{
  uint8_t *pbVar1;
  uint8_t bVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  uint32_t uVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  uint8_t *pbVar9;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint32_t unaff_EDI;
  uint32_t in_R11D;
  
  do {
    *(char *)(unaff_RBX + 0x18) = (char)unaff_RBP;
    *(uint64_t *)(unaff_RBX + 0x1c) = unaff_RBP;
    *(uint64_t *)(unaff_RBX + 0x24) = unaff_RBP;
    *(uint64_t *)(unaff_RBX + 0x30) = 0;
    *(uint64_t *)(unaff_RBX + 0x38) = 0;
    bVar2 = **(uint8_t **)(unaff_RBX + 8);
    pbVar9 = *(uint8_t **)(unaff_RBX + 8) + 1;
    *(uint8_t *)(unaff_RBX + 0x18) = bVar2;
    *(uint8_t **)(unaff_RBX + 8) = pbVar9;
    if ((bVar2 & 1) != 0) {
      bVar7 = *pbVar9;
      pbVar9 = pbVar9 + -(int64_t)(char)(&UNK_7fffa56b3150)[bVar7 & 0xf];
      *(uint32_t *)(unaff_RBX + 0x1c) =
           *(uint32_t *)(pbVar9 + -4) >> ((&UNK_7fffa56b3160)[bVar7 & 0xf] & 0x1f);
      *(uint8_t **)(unaff_RBX + 8) = pbVar9;
    }
    if ((bVar2 & 2) != 0) {
      uVar4 = *(uint32_t *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(uint8_t **)(unaff_RBX + 8) = pbVar9;
      *(uint32_t *)(unaff_RBX + 0x20) = uVar4;
    }
    if ((bVar2 & 4) != 0) {
      bVar7 = *pbVar9;
      pbVar9 = pbVar9 + -(int64_t)(char)(&UNK_7fffa56b3150)[bVar7 & 0xf];
      *(uint32_t *)(unaff_RBX + 0x24) =
           *(uint32_t *)(pbVar9 + -4) >> ((&UNK_7fffa56b3160)[bVar7 & 0xf] & 0x1f);
      *(uint8_t **)(unaff_RBX + 8) = pbVar9;
    }
    pbVar1 = pbVar9 + 4;
    *(uint32_t *)(unaff_RBX + 0x28) = *(uint32_t *)pbVar9;
    bVar7 = bVar2 & 0x30;
    *(uint8_t **)(unaff_RBX + 8) = pbVar1;
    if ((bVar2 & 8) == 0) {
      if (bVar7 == 0x10) {
        bVar2 = (&UNK_7fffa56b3160)[*pbVar1 & 0xf];
        uVar6 = *(uint32_t *)(((int64_t)pbVar1 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar1 & 0xf]) +
                         -4);
        *(int64_t *)(unaff_RBX + 8) =
             (int64_t)pbVar1 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar1 & 0xf];
        *(uint64_t *)(unaff_RBX + 0x30) =
             (uint64_t)(*(int *)(unaff_RBX + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
      }
      else if (bVar7 == 0x20) {
        cVar3 = (&UNK_7fffa56b3150)[*pbVar1 & 0xf];
        bVar2 = (&UNK_7fffa56b3160)[*pbVar1 & 0xf];
        pbVar9 = pbVar1 + -(int64_t)cVar3;
        uVar6 = *(uint32_t *)(pbVar9 + -4);
        *(uint8_t **)(unaff_RBX + 8) = pbVar9;
        *(uint64_t *)(unaff_RBX + 0x30) =
             (uint64_t)(*(int *)(unaff_RBX + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
        bVar2 = (&UNK_7fffa56b3160)[*pbVar9 & 0xf];
        uVar6 = *(uint32_t *)(pbVar1 + (-(int64_t)cVar3 -
                                   (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar9 & 0xf]) + -4);
        *(uint8_t **)(unaff_RBX + 8) =
             pbVar1 + (-(int64_t)cVar3 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar9 & 0xf]);
        uVar8 = (uint64_t)(*(int *)(unaff_RBX + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
        goto LAB_7fffa5605a40;
      }
    }
    else if (bVar7 == 0x10) {
      iVar5 = *(int *)pbVar1;
      *(uint8_t **)(unaff_RBX + 8) = pbVar9 + 8;
      *(int64_t *)(unaff_RBX + 0x30) = (int64_t)iVar5;
    }
    else if (bVar7 == 0x20) {
      iVar5 = *(int *)pbVar1;
      *(uint8_t **)(unaff_RBX + 8) = pbVar9 + 8;
      *(int64_t *)(unaff_RBX + 0x30) = (int64_t)iVar5;
      uVar8 = (uint64_t)*(int *)(pbVar9 + 8);
      *(uint8_t **)(unaff_RBX + 8) = pbVar9 + 0xc;
LAB_7fffa5605a40:
      *(uint64_t *)(unaff_RBX + 0x38) = uVar8;
    }
    in_R11D = in_R11D + 1;
    if (unaff_EDI <= in_R11D) {
      return;
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa5605a55  |  RVA: 0xe95a55  |  Size: 16 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5605a55(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa5605a70  |  RVA: 0xe95a70  |  Size: 135 bytes
// Callers  : FUN_7fffa50c6000@0x956000
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa5605a70(void)

{
  int iVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = (*(code *)&DAT_7ff84ea57120)(uVar3 * 0x28 + 0x7fffa4781e20,4000,0);
    if (iVar1 == 0) {
      uVar3 = (uint64_t)_DAT_7fffa4781e48;
      uVar2 = _DAT_7fffa4781e48;
      while (uVar2 != 0) {
        uVar2 = (int)uVar3 - 1;
        uVar3 = (uint64_t)uVar2;
        (*(code *)&DAT_7ff850519980)(uVar3 * 0x28 + 0x7fffa4781e20);
        _DAT_7fffa4781e48 = _DAT_7fffa4781e48 - 1;
      }
      return 0;
    }
    _DAT_7fffa4781e48 = _DAT_7fffa4781e48 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (uint64_t)uVar2;
  } while (uVar2 == 0);
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5605af8  |  RVA: 0xe95af8  |  Size: 32 bytes
// Callers  : none
// Callees  : FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa56a085c@0xf3085c
// ============================================================================
void FUN_7fffa5605af8(int64_t param_1)

{
  if (param_1 != 0) {
    FUN_7fffa56a085c();
    FUN_7fffa52d8dd0(param_1);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5605b20  |  RVA: 0xe95b20  |  Size: 20 bytes
// Callers  : FUN_7fffa52c6460@0xb56460, FUN_7fffa55883ea@0xe183ea
// Callees  : FUN_7fffa512f380@0x9bf380, FUN_7fffa5488244@0xd18244
// ============================================================================
void FUN_7fffa5605b20(void)

{
  FUN_7fffa5488244(0);
  FUN_7fffa512f380();
  return;
}


// ============================================================================
// Function : FUN_7fffa5605b34  |  RVA: 0xe95b34  |  Size: 148 bytes
// Callers  : none
// Callees  : FUN_7fffa564c5c0@0xedc5c0, FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184
// ============================================================================
uint8_t * FUN_7fffa5605b34(uint8_t *param_1,uint8_t *param_2,uint64_t param_3)

{
  uint32_t *puVar1;
  uint8_t *pbVar2;
  int64_t alStack_28 [2];
  int64_t lStack_18;
  char cStack_10;
  
  if ((param_1 == (uint8_t *)0x0) || (param_2 == (uint8_t *)0x0)) {
    puVar1 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar1 = 0x16;
    FUN_7fffa55c8ce0();
  }
  else if (param_1 < param_2) {
    FUN_7fffa564c5c0(alStack_28,param_3);
    pbVar2 = param_2 + -1;
    if (*(int *)(lStack_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < param_1) break;
      } while ((*(uint8_t *)((uint64_t)*pbVar2 + 0x19 + lStack_18) & 4) != 0);
      pbVar2 = param_2 + (-1 - (uint64_t)((int)param_2 - (int)pbVar2 & 1));
    }
    if (cStack_10 != '\0') {
      *(uint32_t *)(alStack_28[0] + 0x3a8) = *(uint32_t *)(alStack_28[0] + 0x3a8) & 0xfffffffd;
    }
    return pbVar2;
  }
  return (uint8_t *)0x0;
}


// ============================================================================
// Function : FUN_7fffa5605bd0  |  RVA: 0xe95bd0  |  Size: 304 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa5605ce1) overlaps instruction at (ram,0x7fffa5605cde)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d3e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d4e) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d53) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d60) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d65) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d72) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d77) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d84) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d89) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d96) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605d9b) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605da8) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605dad) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605dba) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605dbf) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605dcc) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605dd1) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605dde) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605de3) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605df0) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605df5) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605e05) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605e0a) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605e1a) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605e1f) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605e2f) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605e34) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605cf7) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605cf9) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605cde) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605cf2) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605cfd) */
/* WARNING: Removing unreachable block (ram,0x7fffa5605cd6) */

uint64_t FUN_7fffa5605bd0(void)

{
  uint32_t uStack_28;
  
  return CONCAT44(0xe761c344,uStack_28);
}


// ============================================================================
// Function : FUN_7fffa5605d10  |  RVA: 0xe95d10  |  Size: 1 bytes
// Callers  : FUN_7fffa54037a0@0xc937a0
// Callees  : none
// ============================================================================
void FUN_7fffa5605d10(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5605d16  |  RVA: 0xe95d16  |  Size: 24 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa5605d16(void)

{
  FUN_7fffa4f54478(7);
  return;
}


// ============================================================================
// Function : FUN_7fffa5605d30  |  RVA: 0xe95d30  |  Size: 266 bytes
// Callers  : FUN_7fffa507a38c@0x90a38c
// Callees  : FUN_7fffa52d8dd0@0xb68dd0
// ============================================================================
void FUN_7fffa5605d30(int64_t param_1)

{
  if (param_1 != 0) {
    if (*(uint8_t **)(param_1 + 0x18) != PTR_DAT_7fffa4780928) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x20) != PTR_DAT_7fffa4780930) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x28) != PTR_DAT_7fffa4780938) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x30) != PTR_DAT_7fffa4780940) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x38) != PTR_DAT_7fffa4780948) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x40) != PTR_DAT_7fffa4780950) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x48) != PTR_DAT_7fffa4780958) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x68) != PTR_DAT_7fffa4780978) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x70) != PTR_DAT_7fffa4780980) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x78) != PTR_DAT_7fffa4780988) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x80) != PTR_DAT_7fffa4780990) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x88) != PTR_DAT_7fffa4780998) {
      FUN_7fffa52d8dd0();
    }
    if (*(uint8_t **)(param_1 + 0x90) != PTR_DAT_7fffa47809a0) {
      FUN_7fffa52d8dd0();
    }
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa5605e40  |  RVA: 0xe95e40  |  Size: 6482 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa5605e40(void)

{
  uint8_t uVar1;
  uint8_t auVar2 [16];
  uint8_t bVar3;
  int iVar4;
  short sVar5;
  uint8_t auVar6 [16];
  bool bVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  code *pcVar10;
  uint8_t *puVar11;
  uint32_t uVar12;
  int iVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  IMAGE_DOS_HEADER *pIVar19;
  uint16_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t in_R11;
  uint64_t uVar23;
  uint64_t uVar24;
  uint8_t (*pauVar25) [16];
  int64_t lVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  uint8_t (*pauVar30) [16];
  uint8_t auVar31 [16];
  uint16_t uVar32;
  short sVar33;
  uint64_t uVar34;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t uStack_e8;
  
  uVar21 = in_stack_00000030 << 0x14 | in_stack_00000030 >> 0x2c;
  uVar9 = uVar21 * -0x5627d34ffe6a952f;
  in_stack_00000028 =
       (in_stack_00000028 << 0x3c | in_stack_00000028 >> 4) ^
       (in_stack_00000028 << 0x35 | in_stack_00000028 >> 0xb) ^ in_stack_00000028;
  in_stack_00000028 =
       (in_stack_00000028 << 0x2a | in_stack_00000028 >> 0x16) ^
       (in_stack_00000028 << 0x38 | in_stack_00000028 >> 8) ^ in_stack_00000028;
  in_stack_00000028 =
       (in_stack_00000028 << 0x14 | in_stack_00000028 >> 0x2c) ^
       (in_stack_00000028 << 0x30 | in_stack_00000028 >> 0x10) ^ in_stack_00000028;
  in_stack_00000028 =
       (in_stack_00000028 << 0x20 | in_stack_00000028 >> 0x20) ^
       (in_stack_00000028 << 0x28 | in_stack_00000028 >> 0x18) ^ in_stack_00000028;
  uVar22 = in_stack_00000028 << 0x30 | in_stack_00000028 >> 0x10;
  uVar22 = uVar22 >> 0x14 ^ uVar22;
  uVar9 = (uVar21 * 0x65800cab56880000 | uVar9 >> 0x2d) ^ (uVar9 << 0x2c | uVar9 >> 0x14) ^ uVar9;
  uVar9 = (uVar9 << 0x18 | uVar9 >> 0x28) ^ (uVar9 << 0x26 | uVar9 >> 0x1a) ^ uVar9;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_R11 + 2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = SUB168(auVar2 * ZEXT816(0x5555555555555556),8);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = in_R11 + 2;
  auVar6 = auVar31 * ZEXT816(0x5555555555555555) + auVar6;
  uVar21 = auVar6._8_8_ * 4 | auVar6._0_8_ >> 0x3e;
  uVar9 = (uVar9 << 0xc | uVar9 >> 0x34) ^ (uVar9 << 0x30 | uVar9 >> 0x10) ^ uVar9;
  uVar23 = (uVar9 << 0x20 | uVar9 >> 0x20) ^ (uVar9 << 0x18 | uVar9 >> 0x28);
  uVar9 = (uVar23 ^ uVar9) << 0x10 | (uVar23 ^ uVar9) >> 0x30;
  pauVar30 = (uint8_t (*) [16])(uVar22 >> 0x28 ^ uVar22);
  *pauVar30 = (uint8_t  [16])0x0;
  *(uint64_t *)pauVar30[1] = 0;
  *(uint64_t *)(pauVar30[1] + 8) = 0xf;
  bVar3 = (uint8_t)in_stack_00000038;
  uVar14 = (uint32_t)in_stack_00000038;
  if (0xf < uVar21) {
    if (((int64_t)uVar21 < 0) &&
       ((0x4f0fa314 << (bVar3 & 0x1f) | 0x4f0fa314U >> 0x20 - (bVar3 & 0x1f)) <=
        (uVar14 ^ 0x32cd6b60) + 0x25e3f08c)) goto LAB_7fffa56077c9;
    uVar22 = 0x16;
    if (0x16 < (uVar21 | 0xf)) {
      uVar22 = uVar21 | 0xf;
    }
    pcVar10 = (code *)((int64_t)
                       (int)(0x5ffffd9cU >> (bVar3 & 0x1f) | 0x5ffffd9c << 0x20 - (bVar3 & 0x1f)) +
                      0x7fffa5274399);
    (*pcVar10)(pcVar10,0xc6768f0e,uVar9,0x1865d799980f);
    *(uint64_t *)(pauVar30[1] + 8) = uVar22;
    uVar23 = ((uint64_t)pcVar10 >> 0x14) << 0x36;
    puVar11 = (uint8_t *)(((int64_t)pcVar10 << 0x2c | (uint64_t)pcVar10 >> 0x14) - uVar23);
    *puVar11 = 0;
    *(uint64_t *)pauVar30[1] = 0;
    *(uint8_t **)*pauVar30 = puVar11;
  }
  auVar2 = _DAT_7fffa56bc5d0;
  uVar21 = 0;
  while( true ) {
    if (in_R11 <= uVar21) {
      return;
    }
    uVar28 = *(uint64_t *)pauVar30[1];
    uVar22 = *(uint64_t *)(pauVar30[1] + 8);
    uVar20 = (uint16_t)in_stack_00000038;
    uVar1 = (&UNK_7fffa573eafb)
            [(uint64_t)(*(uint8_t *)(uVar9 + uVar21) >> 2) + (int64_t)(short)(uVar20 + 0xa9cb)];
    if (uVar22 <= uVar28) break;
    pauVar25 = pauVar30;
    if (0xf < uVar22) {
      pauVar25 = *(uint8_t (**) [16])*pauVar30;
    }
    *(uint64_t *)pauVar30[1] = uVar28 + 1;
    (*pauVar25)[uVar28 + 1] = 0;
    (*pauVar25)[uVar28] = uVar1;
LAB_7fffa5606331:
    uVar12 = (*(uint8_t *)(uVar9 + uVar21) & 3) << 4;
    iVar4 = (int)uVar21;
    uVar21 = (uint64_t)(iVar4 + 1);
    if (uVar21 < in_R11) {
      uVar28 = *(uint64_t *)pauVar30[1];
      uVar22 = *(uint64_t *)(pauVar30[1] + 8);
      uVar32 = uVar20 | 1;
      uVar1 = (&UNK_7fffa5743a09)
              [(uint64_t)(uVar12 | *(uint8_t *)(uVar9 + uVar21) >> 4) +
               (int64_t)(short)(uVar32 * -0x7be0 | (uint16_t)(uVar32 * -0x4bdf) >> 0xb)];
      sVar5 = (short)(in_stack_00000038 >> 0x10);
      if (uVar28 < uVar22) {
        *(uint64_t *)pauVar30[1] = uVar28 + 1;
        pauVar25 = pauVar30;
        if (((uint16_t)(0xdd9e - uVar20) + 0x4b2b & 0xffff) < uVar22) {
          pauVar25 = *(uint8_t (**) [16])*pauVar30;
        }
        (*pauVar25)[uVar28] = uVar1;
        (*pauVar25)[uVar28 + 1] = 0;
      }
      else {
        if (uVar28 == 0x7fffffffffffffff) goto LAB_7fffa56076a3;
        uVar15 = 0x7fffffffffffffff;
        if (-2 < (int64_t)uVar28) {
          uVar34 = uVar22 >> 1;
          if ((0x2783d37bU >> (bVar3 & 0x1f) | 0x2783d37b << 0x20 - (bVar3 & 0x1f)) == 0x168ea354) {
            uVar34 = uVar22 + 1;
          }
          uVar15 = 0x7fffffffffffffff;
          if (uVar22 <= (uVar34 ^ 0x7fffffffffffffff)) {
            uVar8 = uVar28 + 1 | 0xf;
            uVar15 = uVar34 + uVar22;
            if (uVar34 + uVar22 < uVar8) {
              uVar15 = uVar8;
            }
          }
        }
        pcVar10 = (code *)((int64_t)(short)(-0x3ca - uVar20) + 0x7fffa526d734);
        (*pcVar10)(pcVar10,CONCAT22(~(uint16_t)((uVar14 | 1) * 0x77c7d843 >> 0x10) * -0x44f5 - sVar5,
                                    -0x3ca - uVar20),0x7fffffffffffffff,
                   (uVar15 + 1 << 0x3c ^ uVar15 + 1) * 0x4001);
        lVar26 = ((int64_t)pcVar10 << 0x2c | (uint64_t)pcVar10 >> 0x14) -
                 (((uint64_t)pcVar10 >> 0x14) << 0x36);
        *(uint64_t *)(pauVar30[1] + 8) = uVar15;
        *(uint64_t *)pauVar30[1] = uVar28 + 1;
        if (uVar22 < 0x10) {
          FUN_7fffa56a5f20(lVar26,pauVar30,uVar28);
          *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
          *(uint8_t *)(lVar26 + uVar28) = uVar1;
        }
        else {
          uVar22 = *(uint64_t *)*pauVar30;
          FUN_7fffa56a5f20(lVar26,uVar22,uVar28);
          *(uint8_t *)(lVar26 + uVar28) = uVar1;
          *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
          (*(code *)((int64_t)(short)(-0xb10 << (bVar3 & 0xf) | 0xf4f0U >> 0x10 - (bVar3 & 0xf)) +
                    0x7fffa568b85d))
                    ((uint64_t)(uVar14 | 1) * 0xa719ac5f,uVar1,uVar22 >> 0x3d ^ uVar22);
        }
        *(int64_t *)*pauVar30 = lVar26;
      }
      uVar22 = (uint64_t)(iVar4 + 2);
      uVar12 = (*(uint8_t *)(uVar9 + uVar21) & 0xf) << 2;
      if (uVar22 < in_R11) {
        uVar28 = *(uint64_t *)pauVar30[1];
        uVar21 = *(uint64_t *)(pauVar30[1] + 8);
        uVar1 = (&UNK_7fffa574a729)
                [(uint64_t)(*(uint8_t *)(uVar9 + uVar22) >> 6 | uVar12) +
                 (int64_t)(int)((-0x1461337d - uVar14) * -0x768646e1)];
        if (uVar21 <= uVar28) {
          if (((uint64_t)((0x6dec28c2 - uVar14) * 0x10 | 0x6dec28c2 - uVar14 >> 0x1c) ^
              (~uVar28 << 0x14 | ~uVar28 >> 0x2c)) !=
              (uint64_t)((uVar14 ^ 0xb86c38bb) << 7 | (uVar14 ^ 0xb86c38bb) >> 0x19)) {
            uVar15 = 0x7fffffffffffffff;
            if (-2 < (int64_t)uVar28) {
              uVar15 = uVar21 >> 1 ^ 0x7fffffffffffffff;
              bVar7 = (int64_t)uVar21 <= (int64_t)uVar15;
              if (0xba4c82db - uVar14 < 0x41bbc75b) {
                bVar7 = uVar15 < uVar21;
              }
              uVar15 = 0x7fffffffffffffff;
              if (!bVar7) {
                uVar34 = uVar28 + 1 | 0xf;
                uVar15 = (uVar21 >> 1) + uVar21;
                if (uVar15 < uVar34) {
                  uVar15 = uVar34;
                }
              }
            }
            pcVar10 = (code *)((int64_t)
                               (short)((0xfae5U >> (bVar3 & 0xf) | -0x51b << 0x10 - (bVar3 & 0xf)) -
                                      0xbaf) + 0x7fffa526fce1);
            (*pcVar10)(pcVar10,(0x4afec338 - uVar14) * 0x185f4bb9);
            lVar26 = ((int64_t)pcVar10 << 0x2c | (uint64_t)pcVar10 >> 0x14) -
                     (((uint64_t)pcVar10 >> 0x14) << 0x36);
            *(uint64_t *)pauVar30[1] = uVar28 + 1;
            *(uint64_t *)(pauVar30[1] + 8) = uVar15;
            if (uVar21 < 0x10) {
              FUN_7fffa56a5f20(lVar26,pauVar30,uVar28);
              *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
              *(uint8_t *)(lVar26 + uVar28) = uVar1;
            }
            else {
              uVar21 = *(uint64_t *)*pauVar30;
              FUN_7fffa56a5f20(lVar26,uVar21,uVar28);
              *(uint8_t *)(lVar26 + uVar28) = uVar1;
              *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
              FUN_7fffa5687c30(FUN_7fffa5687c30,0xf843c998,uVar21 >> 0x3d ^ uVar21);
            }
            *(int64_t *)*pauVar30 = lVar26;
            goto LAB_7fffa560715a;
          }
          goto LAB_7fffa560777c;
        }
        *(uint64_t *)pauVar30[1] = uVar28 + 1;
        pauVar25 = pauVar30;
        if (0xf < uVar21) {
          pauVar25 = *(uint8_t (**) [16])*pauVar30;
        }
        (*pauVar25)[uVar28] = uVar1;
        (*pauVar25)[uVar28 + 1] = 0;
LAB_7fffa560715a:
        uVar28 = *(uint64_t *)pauVar30[1];
        uVar21 = *(uint64_t *)(pauVar30[1] + 8);
        uVar1 = (&UNK_7fffa5745801)
                [(uint64_t)(*(uint8_t *)(uVar9 + uVar22) & 0x3f) +
                 (int64_t)(int)(uVar14 + 0x5e133cc5)];
        if (uVar28 < uVar21) {
          *(uint64_t *)pauVar30[1] = uVar28 + 1;
          pauVar25 = pauVar30;
          if (0xf < uVar21) {
            pauVar25 = *(uint8_t (**) [16])*pauVar30;
          }
          (*pauVar25)[uVar28] = uVar1;
          (*pauVar25)[uVar28 + 1] = 0;
          uVar21 = (uint64_t)(iVar4 + 3);
        }
        else {
          if (uVar28 == 0x7fffffffffffffff) goto LAB_7fffa5607752;
          uVar22 = 0x7fffffffffffffff;
          if (-2 < (int64_t)uVar28) {
            uVar22 = 0x7fffffffffffffff;
            if (uVar21 <= (uVar21 >> 1 ^ 0x7fffffffffffffff)) {
              uVar15 = uVar28 + 1 | 0xf;
              uVar22 = (uVar21 >> 1) + uVar21;
              if (uVar22 < uVar15) {
                uVar22 = uVar15;
              }
            }
          }
          uVar15 = 0x1865d799980f;
          (*(code *)((int64_t)(int)(uVar14 ^ 0x5e132307) + 0x7fffa5279ef3))
                    (0x1865d799980f,
                     (0x7c19da37U >> (bVar3 & 0x1f) | 0x7c19da37 << 0x20 - (bVar3 & 0x1f)) +
                     0xc000012f);
          lVar26 = (uVar15 << 0x2c | uVar15 >> 0x14) - ((uVar15 >> 0x14) << 0x36);
          *(uint64_t *)pauVar30[1] = uVar28 + 1;
          *(uint64_t *)(pauVar30[1] + 8) = uVar22;
          if (uVar21 < 0x10) {
            FUN_7fffa56a5f20(lVar26,pauVar30,uVar28,&IMAGE_DOS_HEADER_7fffa4770000);
            *(uint8_t *)(lVar26 + uVar28) = uVar1;
            *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
          }
          else {
            uVar21 = *(uint64_t *)*pauVar30;
            uVar22 = uVar21;
            FUN_7fffa56a5f20(lVar26,uVar21,uVar28);
            auVar31 = ZEXT416((uint32_t)CONCAT62((int6)(uVar22 >> 0x10),0xab9d)) ^ auVar2;
            *(uint8_t *)(lVar26 + uVar28) = uVar1;
            *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
            sVar33 = uVar20 + auVar31._0_2_;
            (*(code *)((int64_t)sVar33 + 0x7fffa568d1be))
                      (0x7fffa568d1be,CONCAT22(sVar5 + auVar31._2_2_,sVar33),uVar21 >> 0x3d ^ uVar21
                      );
          }
          *(int64_t *)*pauVar30 = lVar26;
          uVar21 = (uint64_t)(iVar4 + 3);
        }
      }
      else {
        uVar28 = *(uint64_t *)pauVar30[1];
        uVar21 = *(uint64_t *)(pauVar30[1] + 8);
        uVar1 = (&UNK_7fffa57453b7)[(uint64_t)uVar12 + (int64_t)(int)(uVar14 + 0x5e13410f)];
        if (uVar21 <= uVar28) {
          if (uVar28 != 0x7fffffffffffffff) {
            uVar22 = 0x7fffffffffffffff;
            if (-2 < (int64_t)uVar28) {
              uVar22 = 0x7fffffffffffffff;
              if (uVar21 <= (uVar21 >> 1 ^ 0x7fffffffffffffff)) {
                uVar15 = uVar28 + 1 | 0xf;
                uVar22 = (uVar21 >> 1) + uVar21;
                if (uVar22 < uVar15) {
                  uVar22 = uVar15;
                }
              }
            }
            pcVar10 = (code *)((int64_t)(short)((0x40de - uVar20) * 0x29ff) + 0x7fffa526dad4);
            (*pcVar10)(pcVar10,(uVar22 + 1 << 0x3c ^ uVar22 + 1) * 0x4001);
            lVar26 = ((int64_t)pcVar10 << 0x2c | (uint64_t)pcVar10 >> 0x14) -
                     (((uint64_t)pcVar10 >> 0x14) << 0x36);
            *(uint64_t *)pauVar30[1] = uVar28 + 1;
            *(uint64_t *)(pauVar30[1] + 8) = uVar22;
            if (uVar21 < 0x10) {
              FUN_7fffa56a5f20(lVar26,pauVar30,uVar28);
              *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
              *(uint8_t *)(lVar26 + uVar28) = uVar1;
            }
            else {
              uVar21 = *(uint64_t *)*pauVar30;
              FUN_7fffa56a5f20(lVar26,uVar21,uVar28);
              pcVar10 = (code *)((int64_t)(int)((uVar14 | 1) * -0x38828c01 + 0x5f2781c0) +
                                0x7fffa569672b);
              *(uint8_t *)(lVar26 + uVar28) = uVar1;
              *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
              (*pcVar10)(pcVar10,uVar14 | 1,uVar21 >> 0x3d ^ uVar21);
            }
            *(int64_t *)*pauVar30 = lVar26;
            goto LAB_7fffa5607333;
          }
          goto LAB_7fffa560772c;
        }
        *(uint64_t *)pauVar30[1] = uVar28 + 1;
        pauVar25 = pauVar30;
        if (0xf < uVar21) {
          pauVar25 = *(uint8_t (**) [16])*pauVar30;
        }
        (*pauVar25)[uVar28 + 1] = 0;
        (*pauVar25)[uVar28] = uVar1;
LAB_7fffa5607333:
        uVar21 = *(uint64_t *)pauVar30[1];
        uVar22 = *(uint64_t *)(pauVar30[1] + 8);
        if (uVar22 <= uVar21) {
          uVar28 = uVar21 << 3 | uVar21 >> 0x3d;
          lVar26 = uVar28 * 0x4d22f30bbf60a513;
          if (((in_stack_00000038 ^ 0xfff7ac7fa1e828ba) << 0x19 |
              (in_stack_00000038 ^ 0xfff7ac7fa1e828ba) >> 0x27) <
              (uint64_t)
              ((0x59b0f7a1 << (bVar3 & 0x1f) | 0x59b0f7a1U >> 0x20 - (bVar3 & 0x1f)) ^ 0xfa98c01e))
          {
            lVar26 = uVar28 + 0x4d22f30bbf60a513;
          }
          if (lVar26 != 0x7e5140c5431cc6a1) {
            uVar28 = 0x7fffffffffffffff;
            if (-2 < (int64_t)uVar21) {
              uVar28 = 0x7fffffffffffffff;
              if (uVar22 <= (uVar22 >> 1 ^ 0x7fffffffffffffff)) {
                uVar15 = uVar21 + 1 | 0xf;
                uVar28 = (uVar22 >> 1) + uVar22;
                if (uVar28 < uVar15) {
                  uVar28 = uVar15;
                }
              }
            }
            uVar15 = uVar28 + 1;
            uVar8 = uVar15 << 0x3c;
            uVar34 = uVar8 | uVar15;
            if (0xbe0b480b - uVar14 <= (uVar14 ^ 0x672f9de5)) {
              uVar34 = uVar15 ^ uVar8;
            }
            pcVar10 = (code *)((int64_t)(int)((uVar14 ^ 0x7ad8017d) + 0x24cb11bb) + 0x7fffa5276f2e)
            ;
            (*pcVar10)(pcVar10,uVar34 * 0x4001,uVar8,0xc6768f0e);
            *(uint64_t *)(pauVar30[1] + 8) = uVar28;
            lVar26 = ((int64_t)pcVar10 << 0x2c | (uint64_t)pcVar10 >> 0x14) -
                     (((uint64_t)pcVar10 >> 0x14) << 0x36);
            *(uint64_t *)pauVar30[1] = uVar21 + 1;
            if ((uVar14 | 1) * -0x2b4b660c + 0x7156ad3 < uVar22) {
              uVar22 = *(uint64_t *)*pauVar30;
              FUN_7fffa56a5f20(lVar26,uVar22,uVar21);
              *(uint16_t *)(lVar26 + uVar21) = 0x3d;
              iVar13 = (uVar14 ^ 0xed465b54) * -0x3ffffd11 + -0x680af8dd;
              pcVar10 = (code *)((int64_t)iVar13 + 0x7fffa5695ddb);
              (*pcVar10)(pcVar10,iVar13,uVar22 >> 0x3d ^ uVar22);
            }
            else {
              FUN_7fffa56a5f20(lVar26,pauVar30,uVar21);
              *(uint16_t *)(lVar26 + uVar21) = 0x3d;
            }
            *(int64_t *)*pauVar30 = lVar26;
            goto LAB_7fffa5607617;
          }
          goto LAB_7fffa56077a3;
        }
        *(uint64_t *)pauVar30[1] = uVar21 + 1;
        pauVar25 = pauVar30;
        if (0xf < uVar22) {
          pauVar25 = *(uint8_t (**) [16])*pauVar30;
        }
        *(uint16_t *)(*pauVar25 + uVar21) = 0x3d;
        uVar21 = (uint64_t)(iVar4 + 3);
      }
    }
    else {
      uVar21 = *(uint64_t *)pauVar30[1];
      uVar22 = *(uint64_t *)(pauVar30[1] + 8);
      uVar1 = (&UNK_7fffa5740218)[(uint64_t)uVar12 + (int64_t)(short)((uVar20 | 1) * -0x7048)];
      if (uVar21 < uVar22) {
        *(uint64_t *)pauVar30[1] = uVar21 + 1;
        pauVar25 = pauVar30;
        if ((uVar14 ^ 0xa1ec28b5) < uVar22) {
          pauVar25 = *(uint8_t (**) [16])*pauVar30;
        }
        (*pauVar25)[uVar21 + 1] = 0;
        (*pauVar25)[uVar21] = uVar1;
      }
      else {
        uVar32 = 0xffff;
        if ((uVar21 + 0x61097574 << 0x24 | uVar21 + 0x61097574 >> 0x1c) == 0x1097573800000006)
        goto LAB_7fffa560767e;
        uVar28 = 0x7fffffffffffffff;
        if (-2 < (int64_t)uVar21) {
          uVar28 = 0x7fffffffffffffff;
          if (uVar22 <= (uVar22 >> 1 ^ 0x7fffffffffffffff)) {
            uVar15 = uVar21 + 1 | 0xf;
            uVar28 = (uVar22 >> 1) + uVar22;
            if (uVar28 < uVar15) {
              uVar28 = uVar15;
            }
          }
        }
        pcVar10 = (code *)((int64_t)(short)(uVar20 + 0x665d) + 0x7fffa5271b99);
        (*pcVar10)(pcVar10,~((0x6e37b043 - uVar14) * 0x20000000 | 0x6e37b043 - uVar14 >> 3));
        lVar26 = ((int64_t)pcVar10 << 0x2c | (uint64_t)pcVar10 >> 0x14) -
                 (((uint64_t)pcVar10 >> 0x14) << 0x36);
        *(uint64_t *)pauVar30[1] = uVar21 + 1;
        *(uint64_t *)(pauVar30[1] + 8) = uVar28;
        if (((uint64_t)
             (CONCAT22(0x796,0x995cU >> (bVar3 & 0xf) | -0x66a4 << 0x10 - (bVar3 & 0xf)) - 0x5717) &
            0xffff) < uVar22) {
          uVar22 = *(uint64_t *)*pauVar30;
          FUN_7fffa56a5f20(lVar26,uVar22,uVar21);
          *(uint8_t *)(lVar26 + 1 + uVar21) = 0;
          *(uint8_t *)(lVar26 + uVar21) = uVar1;
          uVar12 = (uVar14 ^ 0x72609e7b) * -0x4000000 | (uVar14 ^ 0x72609e7b) * 0x30e01b3f >> 6;
          (*(code *)(&UNK_7fffa5695edf + (int)uVar12))
                    (&UNK_7fffa5695edf + (int)uVar12,uVar12,uVar22 >> 0x3d ^ uVar22);
        }
        else {
          FUN_7fffa56a5f20(lVar26,pauVar30,uVar21);
          *(uint8_t *)(lVar26 + uVar21) = uVar1;
          *(uint8_t *)(lVar26 + 1 + uVar21) = 0;
        }
        *(int64_t *)*pauVar30 = lVar26;
      }
      uVar22 = *(uint64_t *)pauVar30[1];
      uVar15 = *(uint64_t *)(pauVar30[1] + 8);
      if (uVar15 <= uVar22) {
        uVar17 = uVar22 << 0x33 | uVar22 >> 0xd;
        uVar24 = ~uVar23;
        uVar12 = uVar14 | 1;
        uVar16 = ~uVar17 & ~uVar21;
        uVar18 = uVar17 & ~uVar21;
        uVar28 = ((uVar18 | uVar23) * -0x6b87593 + (uVar23 ^ uVar18) * 0xb04e5a16) -
                 (uVar23 & uVar16);
        uVar34 = ~uVar17 | uVar21;
        pIVar19 = &IMAGE_DOS_HEADER_7fffa4770000;
        uVar27 = (~(uVar17 | uVar23) & uVar21) * -2;
        uVar29 = (uVar34 & uVar24) * 0x9a676421;
        uVar34 = uVar34 ^ uVar23;
        uVar8 = (0x8c3cba01U >> (bVar3 & 0x1f) | -0x73c345ff << 0x20 - (bVar3 & 0x1f)) ^ uVar34;
        if ((uVar12 * 0x2ddd34c7 ^ 0xf62b5e2d) < ~(uVar12 * 0x1d0989e7)) {
          uVar8 = uVar34 * 0xf2e8063;
        }
        uVar8 = ((int64_t)
                 (int)(0xe73c5b40U >> (bVar3 & 0x1f) | -0x18c3a4c0 << 0x20 - (bVar3 & 0x1f)) +
                0x30e92fc6) * (uVar17 ^ uVar21 ^ uVar24) + uVar28 +
                (uint64_t)(uVar14 ^ 0xf3f10e) * (uVar18 & uVar23) + uVar8;
        uVar21 = uVar8 & uVar29;
        if ((uVar14 + 0x4525df4b ^ 0xbb3d7495) < uVar12 * 0x1917ba0b) {
          uVar21 = uVar29 + uVar8;
        }
        uStack_e8 = uVar22;
        if ((uVar27 - (uVar16 & uVar24)) + uVar21 != -0x40000a995e483) {
          uVar21 = 0x7fffffffffffffff;
          if (-2 < (int64_t)uVar22) {
            uVar21 = 0x7fffffffffffffff;
            if (uVar15 <= (uVar15 >> 1 ^ 0x7fffffffffffffff)) {
              uVar28 = uVar22 + 1 | 0xf;
              uVar21 = (uVar15 >> 1) + uVar15;
              if (uVar21 < uVar28) {
                uVar21 = uVar28;
              }
              pIVar19 = (IMAGE_DOS_HEADER *)0x0;
            }
          }
          uVar28 = 0x7fffa52732c7;
          (*(code *)((int64_t)(int)(uVar14 + 0x5e134f2f) + 0x7fffa52732c7))
                    (0x7fffa52732c7,0x56237295,pIVar19,uVar14 ^ 0x679aa7b4);
          *(uint64_t *)(pauVar30[1] + 8) = uVar21;
          *(uint64_t *)pauVar30[1] = uVar22 + 1;
          lVar26 = (uVar28 << 0x2c | uVar28 >> 0x14) - ((uVar28 >> 0x14) << 0x36);
          if (uVar15 < 0x10) {
            FUN_7fffa56a5f20(lVar26,pauVar30,uVar22);
            *(uint16_t *)(lVar26 + uVar22) = 0x3d;
          }
          else {
            uVar21 = *(uint64_t *)*pauVar30;
            FUN_7fffa56a5f20(lVar26,uVar21,uVar22);
            *(uint16_t *)(lVar26 + uVar22) = 0x3d;
            pcVar10 = (code *)((int64_t)(short)((uVar20 | 1) * 0xe4d ^ 0xfcbb) + 0x7fffa568f5ac);
            (*pcVar10)(pcVar10,uVar14 ^ 0x18afe9df,uVar21 >> 0x3d ^ uVar21);
          }
          *(int64_t *)*pauVar30 = lVar26;
          goto LAB_7fffa5606f13;
        }
        goto LAB_7fffa56076ea;
      }
      pauVar25 = pauVar30;
      if (0xf < uVar15) {
        pauVar25 = *(uint8_t (**) [16])*pauVar30;
      }
      *(uint64_t *)pauVar30[1] = uVar22 + 1;
      *(uint16_t *)(*pauVar25 + uVar22) = 0x3d;
LAB_7fffa5606f13:
      uVar28 = *(uint64_t *)pauVar30[1];
      uVar21 = *(uint64_t *)(pauVar30[1] + 8);
      if (uVar28 < uVar21) {
        pauVar25 = pauVar30;
        if (0xf < uVar21) {
          pauVar25 = *(uint8_t (**) [16])*pauVar30;
        }
        *(uint64_t *)pauVar30[1] = uVar28 + 1;
        *(uint16_t *)(*pauVar25 + uVar28) = 0x3d;
        uVar21 = (uint64_t)(iVar4 + 3);
      }
      else {
        if (uVar28 == 0x7fffffffffffffff) goto LAB_7fffa56076c8;
        uVar22 = 0x7fffffffffffffff;
        if (-2 < (int64_t)uVar28) {
          uVar22 = 0x7fffffffffffffff;
          if (uVar21 <= (uVar21 >> 1 ^ 0x7fffffffffffffff)) {
            uVar22 = uVar28 + 1 | 0xf;
            uVar15 = uVar21 + (uVar21 >> 1);
            if (uVar22 <= uVar15) {
              uVar22 = uVar15;
            }
          }
        }
        uVar15 = uVar22 + 1;
        if (0x24f9ad71 < (int)(uVar14 ^ 0x4a5c483b)) {
          uVar15 = (uint64_t)((uint32_t)uVar22 & 1);
        }
        uVar34 = 0x1865d799980f;
        (*(code *)((int64_t)(short)((uVar20 + 0x7b96) * 0x800 | (uint16_t)(uVar20 + 0x7b96) >> 5) +
                  0x7fffa527258e))(uVar15 * 0x4000 + (uVar15 << 0x3c ^ uVar15));
        lVar26 = (uVar34 << 0x2c | uVar34 >> 0x14) - ((uVar34 >> 0x14) << 0x36);
        *(uint64_t *)(pauVar30[1] + 8) = uVar22;
        *(uint64_t *)pauVar30[1] = uVar28 + 1;
        if (uVar21 < 0x10) {
          FUN_7fffa56a5f20(lVar26,pauVar30,uVar28);
          *(uint16_t *)(lVar26 + uVar28) = 0x3d;
        }
        else {
          uVar21 = *(uint64_t *)*pauVar30;
          FUN_7fffa56a5f20(lVar26,uVar21,uVar28);
          uVar12 = 0x9fffe171U >> (bVar3 & 0x1f) | -0x60001e8f << 0x20 - (bVar3 & 0x1f);
          uVar12 = uVar12 << 0x1d | uVar12 >> 3;
          pcVar10 = (code *)((int64_t)(int)uVar12 + 0x7fffa56970a4);
          *(uint16_t *)(lVar26 + uVar28) = 0x3d;
          (*pcVar10)(pcVar10,uVar12,uVar21 >> 0x3d ^ uVar21);
        }
        *(int64_t *)*pauVar30 = lVar26;
LAB_7fffa5607617:
        uVar21 = (uint64_t)(iVar4 + 3);
      }
    }
  }
  uVar32 = 0xffff;
  if (uVar28 != 0x7fffffffffffffff) {
    uVar15 = 0x7fffffffffffffff;
    if (-2 < (int64_t)uVar28) {
      uVar15 = 0x7fffffffffffffff;
      if (uVar22 <= (uVar22 >> 1 ^ 0x7fffffffffffffff)) {
        uVar15 = uVar28 + 1 | 0xf;
        uVar34 = uVar22 + (uVar22 >> 1);
        if (uVar15 <= uVar34) {
          uVar15 = uVar34;
        }
      }
    }
    pcVar10 = (code *)((int64_t)(int)(uVar14 ^ 0x5e1359ce) + 0x7fffa527393c);
    (*pcVar10)(pcVar10,uVar14 ^ 0x679aa7b4);
    lVar26 = ((int64_t)pcVar10 << 0x2c | (uint64_t)pcVar10 >> 0x14) -
             (((uint64_t)pcVar10 >> 0x14) << 0x36);
    *(uint64_t *)pauVar30[1] = uVar28 + 1;
    *(uint64_t *)(pauVar30[1] + 8) = uVar15;
    if (uVar22 < 0x10) {
      FUN_7fffa56a5f20(lVar26,pauVar30,uVar28);
      *(uint8_t *)(lVar26 + uVar28) = uVar1;
      *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
    }
    else {
      uVar22 = *(uint64_t *)*pauVar30;
      FUN_7fffa56a5f20(lVar26,uVar22,uVar28);
      *(uint8_t *)(lVar26 + uVar28) = uVar1;
      pcVar10 = (code *)((int64_t)
                         (short)((uint16_t)(0xc291 - uVar14) >> 1 |
                                (uint16_t)((0xc291 - uVar14 & 1) != 0) << 0xf) + 0x7fffa568af45);
      *(uint8_t *)(lVar26 + 1 + uVar28) = 0;
      (*pcVar10)(pcVar10,uVar14 ^ 0x695b3ca6,uVar22 >> 0x3d ^ uVar22);
    }
    *(int64_t *)*pauVar30 = lVar26;
    goto LAB_7fffa5606331;
  }
  (*(code *)(&UNK_7fffa519bbb6 + (short)((uVar20 + 0xab9c) * 0x2ef)))();
LAB_7fffa560767e:
  uVar12 = ((0xf71bbbf1 - uVar14) * 0x80000 | 0xf71bbbf1 - uVar14 >> 0xd) ^ 0x664472f1;
  bVar3 = (uint8_t)uVar21 & 0x1f;
  (*(code *)(&UNK_7fffa51a363a + (int)(uVar12 << bVar3 | uVar12 >> 0x20 - bVar3)))();
LAB_7fffa56076a3:
  (*(code *)(&UNK_7fffa51a07cb + (short)(uVar32 * 0x3a28 ^ 0x270d)))();
LAB_7fffa56076c8:
  (*(code *)((int64_t)(int)~((uVar14 | 1) * 0x37a0f16a) + 0x7fffa51a8c6f))();
  uVar27 = in_stack_00000038;
LAB_7fffa56076ea:
  (*(code *)(&UNK_7fffa519c166 +
            (short)((short)((uVar14 ^ 0xa6d2) - 0x7102) * ((uint16_t)uStack_e8 | 1))))();
  in_stack_00000038 = uVar27;
LAB_7fffa560772c:
  uVar20 = (uint16_t)in_stack_00000038 ^ 0xcf55;
  (*(code *)(&UNK_7fffa51a0e89 + (short)((uVar20 << 0xe | uVar20 >> 2) ^ 0x6c8c)))();
LAB_7fffa5607752:
  uVar14 = (uint32_t)in_stack_00000038 | 1;
  (*(code *)(&UNK_7fffa51a374c + (int)(uVar14 * -0x354aecf0 | uVar14 * -0x26a95d9e >> 0x1d)))();
LAB_7fffa560777c:
  (*(code *)(&UNK_7fffa519b6f4 + (short)(((uint16_t)uVar28 ^ 0xae59) + 0x9b66)))();
LAB_7fffa56077a3:
  bVar3 = (uint8_t)in_stack_00000038 & 0xf;
  (*(code *)(&UNK_7fffa519ff60 + (short)(0x2829 << bVar3 | 0x2829U >> 0x10 - bVar3)))();
LAB_7fffa56077c9:
  FUN_7fffa519a400();
  pcVar10 = (code *)__debugbreak();
  (*pcVar10)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa56077f0  |  RVA: 0xe977f0  |  Size: 280 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa56077f0(uint64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int iVar2;
  
  puVar1 = *(uint64_t **)(param_2 + 0x70);
  if (0xf < puVar1[3]) {
    iVar2 = ((int)*(uint64_t *)(param_2 + 0x170) + 0x64df35e9U ^ 0xba4cc39a) + 0x4377b827;
    (*(code *)((int64_t)iVar2 + 0x7fffa56926d0))(0x7fffa56926d0,iVar2,*puVar1 >> 0x3d ^ *puVar1);
  }
  puVar1[3] = 0xf;
  puVar1[2] = 0;
  *(uint8_t *)puVar1 = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa5607910  |  RVA: 0xe97910  |  Size: 463 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5607910(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa478545c = '\0';
  uRam00007fffa478549d = 0;
  uRam00007fffa47854a5 = 0;
  uRam00007fffa478548d = 0;
  uRam00007fffa4785495 = 0;
  uRam00007fffa478547d = 0;
  uRam00007fffa4785485 = 0;
  uRam00007fffa478546d = 0;
  uRam00007fffa4785475 = 0;
  uRam00007fffa47854ad = 0;
  lVar1 = rdtsc();
  lVar1 = lVar1 * 0x37d3a99e3021c1 + 0xb;
  lVar4 = 3;
  while( true ) {
    lVar2 = lVar1 * 0x37d3a99e3021c1 + 0xb;
    lVar3 = lVar2 * 0x37d3a99e3021c1 + 0xb;
    lVar1 = lVar3 * 0x37d3a99e3021c1 + 0xb;
    *(char *)(lVar4 + 0x7fffa4785457) = (char)((uint64_t)lVar1 >> 0x20);
    *(char *)(lVar4 + 0x7fffa4785456) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar4 + 0x7fffa4785455) = (char)((uint64_t)lVar2 >> 0x20);
    if (lVar4 == 0x5d) break;
    lVar4 = lVar4 + 3;
  }
  bRam00007fffa478545c = bRam00007fffa478545c + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa478545c * 8 + 0x7fffa478546d) = 0xffffffffffffffff;
  return;
}


// ============================================================================
// Function : FUN_7fffa5607af0  |  RVA: 0xe97af0  |  Size: 1 bytes
// Callers  : FUN_7fffa4e8ea00@0x71ea00, FUN_7fffa5451110@0xce1110
// Callees  : none
// ============================================================================
void FUN_7fffa5607af0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5607b00  |  RVA: 0xe97b00  |  Size: 2432 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa5607b00(void) {
    /* +0xe97b00 */ __asm { PUSH RBX }
    /* +0xe97b01 */ __asm { PUSH R14 }
    /* +0xe97b03 */ __asm { PUSH R12 }
    /* +0xe97b05 */ __asm { PUSH RDI }
    /* +0xe97b06 */ __asm { PUSH RSI }
    /* +0xe97b07 */ __asm { PUSH R15 }
    /* +0xe97b09 */ __asm { PUSH R13 }
    /* +0xe97b0b */ __asm { PUSH RBP }
    /* +0xe97b0c */ __asm { SUB RSP,0x68 }
    /* +0xe97b10 */ __asm { MOV RBP,R8 }
    /* +0xe97b13 */ __asm { PUSHFQ }
    /* +0xe97b14 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe97b1c */ __asm { POPFQ }
    /* +0xe97b1d */ __asm { MOV dword ptr [RSP + 0x40],0x2b6f0b94 }
    /* +0xe97b25 */ __asm { MOV R11D,dword ptr [RSP + 0x40] }
    /* +0xe97b2a */ __asm { TEST R11D,R11D }
    /* +0xe97b2d */ __asm { JS 0x7fffa560843a }
    /* +0xe97b33 */ __asm { MOV dword ptr [RSP + 0x40],0x1cfc805b }
    /* +0xe97b3b */ __asm { MOV R11D,dword ptr [RSP + 0x40] }
    /* +0xe97b40 */ __asm { TEST R11B,0x1 }
    /* +0xe97b44 */ __asm { JZ 0x7fffa5608456 }
    /* +0xe97b4a */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xe97b51 */ __asm { MOV R8,0x0 }
    /* +0xe97b58 */ __asm { NOP }
    /* +0xe97b59 */ __asm { MOV dword ptr [RSP + 0x40],0xbd835d22 }
    /* +0xe97b61 */ __asm { MOV R11D,dword ptr [RSP + 0x40] }
    /* +0xe97b66 */ __asm { TEST R11B,0x1 }
    /* +0xe97b6a */ __asm { JNZ 0x7fffa560846d }
    /* +0xe97b70 */ __asm { MOV R11W,0x4fdd }
    /* +0xe97b75 */ __asm { XOR R11D,0x5d0a }
    /* +0xe97b7c */ __asm { IMUL R11D,R11D,0x247b }
    /* +0xe97b83 */ __asm { ADD R11D,EBP }
    /* +0xe97b86 */ __asm { MOVZX EAX,R11W }
    /* +0xe97b8a */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0xe97b8e */ __asm { MOV RCX,qword ptr [RCX + 0x60] }
    /* +0xe97b92 */ __asm { MOV R8,0x563de065dd97d57b }
    /* +0xe97b9c */ __asm { SUB RCX,R8 }
    /* +0xe97b9f */ __asm { MOV R8,-0x28ebc051b0b77e2b }
    /* +0xe97ba9 */ __asm { CMP RCX,R8 }
    /* +0xe97bac */ __asm { JNZ 0x7fffa5607bc1 }
    /* +0xe97bae */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xe97bb5 */ __asm { MOV R8,0x0 }
    /* +0xe97bbc */ __asm { NOP }
    /* +0xe97bbd */ __asm { PUSH RDX }
    /* +0xe97bbe */ __asm { OUT DX,AL }
    /* +0xe97bbf */ __asm { JL 0x7fffa5607bb5 }
    /* +0xe97bc1 */ __asm { MOV R11W,0x42c3 }
    /* +0xe97bc6 */ __asm { SUB R11D,EBP }
    /* +0xe97bc9 */ __asm { MOV EAX,0x281b52b9 }
    /* +0xe97bce */ __asm { ADD EAX,0xd7e4f047 }
    /* +0xe97bd3 */ __asm { MOV ECX,EBP }
    /* +0xe97bd5 */ __asm { ROR EAX,CL }
    /* +0xe97bd7 */ __asm { IMUL R11D,R11D,0x6edd }
    /* +0xe97bde */ __asm { MOVZX ECX,R11W }
    /* +0xe97be2 */ __asm { ADD RAX,qword ptr GS:[RCX] }
    /* +0xe97be6 */ __asm { MOV R8,-0x7c591c8dd6b83359 }
    /* +0xe97bf0 */ __asm { MOV R11,0x60e2b9abe110c8c9 }
    /* +0xe97bfa */ __asm { ADD R11,-0x1691e886 }
    /* +0xe97c01 */ __asm { ROL R11,0x3b }
    /* +0xe97c05 */ __asm { MOV ECX,EBP }
    /* +0xe97c07 */ __asm { ROR R11,CL }
    /* +0xe97c0a */ __asm { AND R8,RAX }
    /* +0xe97c0d */ __asm { CMP R8,R11 }
    /* +0xe97c10 */ __asm { JZ 0x7fffa5608432 }
    /* +0xe97c16 */ __asm { MOV R11W,0xfdcc }
    /* +0xe97c1b */ __asm { MOV EAX,EBP }
    /* +0xe97c1d */ __asm { OR EAX,0x1 }
    /* +0xe97c20 */ __asm { IMUL EAX,R11D }
    /* +0xe97c24 */ __asm { XOR EAX,0xe279 }
    /* +0xe97c29 */ __asm { MOVSX RCX,AX }
    /* +0xe97c2d */ __asm { LEA R8,[0x7fffa551492b] }
    /* +0xe97c34 */ __asm { ADD R8,RCX }
    /* +0xe97c37 */ __asm { CALL R8 }
    /* +0xe97c3a */ __asm { MOV RDI,qword ptr [RAX] }
    /* +0xe97c3d */ __asm { MOV R13,qword ptr [RDI] }
    /* +0xe97c40 */ __asm { TEST R13,R13 }
    /* +0xe97c43 */ __asm { JZ 0x7fffa5607d86 }
    /* +0xe97c49 */ __asm { MOV RBX,0x8000000081b }
    /* +0xe97c53 */ __asm { MOV R15,0x4cbe6668dfb33cd7 }
    /* +0xe97c5d */ __asm { MOV RSI,-0x1e8a136936d0f26a }
    /* +0xe97c67 */ __asm { JMP 0x7fffa5607c81 }
    /* +0xe97c70 */ __asm { MOV R13,qword ptr [RDI + 0x8] }
    /* +0xe97c74 */ __asm { ADD RDI,0x8 }
    /* +0xe97c78 */ __asm { TEST R13,R13 }
    /* +0xe97c7b */ __asm { JZ 0x7fffa5607d86 }
    /* +0xe97c81 */ __asm { MOV R11W,0xe1a7 }
    /* +0xe97c86 */ __asm { IMUL R11D,R11D,0x753 }
    /* +0xe97c8d */ __asm { MOV ECX,EBP }
    /* +0xe97c8f */ __asm { ROR R11W,CL }
    /* +0xe97c93 */ __asm { MOVSX RCX,R11W }
    /* +0xe97c97 */ __asm { LEA R8,[0x7fffa562a5ec] }
    /* +0xe97c9e */ __asm { ADD R8,RCX }
    /* +0xe97ca1 */ __asm { MOV RCX,R13 }
    /* +0xe97ca4 */ __asm { CALL R8 }
    /* +0xe97ca7 */ __asm { CMP RAX,0x1a }
    /* +0xe97cab */ __asm { JC 0x7fffa5607c70 }
    /* +0xe97cad */ __asm { LEA RCX,[RAX + R13*0x1] }
    /* +0xe97cb1 */ __asm { ADD RCX,-0x19 }
    /* +0xe97cb5 */ __asm { CMP R13,RCX }
    /* +0xe97cb8 */ __asm { JNC 0x7fffa5607c70 }
    /* +0xe97cba */ __asm { LEA RCX,[RAX + R13*0x1] }
    /* +0xe97cbe */ __asm { ADD RCX,-0x1a }
    /* +0xe97cc2 */ __asm { MOV qword ptr [RSP + 0x58],RCX }
    /* +0xe97cc7 */ __asm { LEA R8,[R13 + 0x1] }
    /* +0xe97ccb */ __asm { NOP dword ptr [RAX + RAX*0x1] }
    /* +0xe97cd0 */ __asm { MOV R11,-0x44c8b0a88e816631 }
    /* +0xe97cda */ __asm { MOV RDX,R8 }
    /* +0xe97cdd */ __asm { MOV R10,0x3e149def2df35f59 }
    /* +0xe97ce7 */ __asm { NOP word ptr [RAX + RAX*0x1] }
    /* +0xe97cf0 */ __asm { MOVZX EAX,uint8_t ptr [RDX] }
    /* +0xe97cf3 */ __asm { LEA R9D,[RAX + -0x41] }
    /* +0xe97cf7 */ __asm { MOV R14D,EAX }
    /* +0xe97cfa */ __asm { OR R14B,0x20 }
    /* +0xe97cfe */ __asm { CMP R9B,0x1a }
    /* +0xe97d02 */ __asm { MOVZX R9D,R14B }
    /* +0xe97d06 */ __asm { CMOVNC R9D,EAX }
    /* +0xe97d0a */ __asm { MOV RAX,R11 }
    /* +0xe97d0d */ __asm { MOVZX R14D,uint8_t ptr [RDX + -0x1] }
    /* +0xe97d12 */ __asm { MOV R12D,R14D }
    /* +0xe97d15 */ __asm { OR R12B,0x20 }
    /* +0xe97d19 */ __asm { LEA ECX,[R14 + -0x41] }
    /* +0xe97d1d */ __asm { CMP CL,0x1a }
    /* +0xe97d20 */ __asm { MOVZX ECX,R12B }
    /* +0xe97d24 */ __asm { CMOVNC ECX,R14D }
    /* +0xe97d28 */ __asm { MOVZX R9D,R9B }
    /* +0xe97d2c */ __asm { MOVZX ECX,CL }
    /* +0xe97d2f */ __asm { XOR RCX,R10 }
    /* +0xe97d32 */ __asm { IMUL RCX,RBX }
    /* +0xe97d36 */ __asm { XOR RCX,R9 }
    /* +0xe97d39 */ __asm { MOV R10,RCX }
    /* +0xe97d3c */ __asm { IMUL R10,RBX }
    /* +0xe97d40 */ __asm { CMP RAX,R15 }
    /* +0xe97d43 */ __asm { JZ 0x7fffa5607d50 }
    /* +0xe97d45 */ __asm { ADD RDX,0x2 }
    /* +0xe97d49 */ __asm { ADD R11,RSI }
    /* +0xe97d4c */ __asm { JMP 0x7fffa5607cf0 }
    /* +0xe97d50 */ __asm { MOV RCX,0x6bf88a4ca66e8faf }
    /* +0xe97d5a */ __asm { CMP R10,RCX }
    /* +0xe97d5d */ __asm { JZ 0x7fffa5607d79 }
    /* +0xe97d5f */ __asm { LEA R11,[R13 + 0x1] }
    /* +0xe97d63 */ __asm { INC R8 }
    /* +0xe97d66 */ __asm { CMP R13,qword ptr [RSP + 0x58] }
    /* +0xe97d6b */ __asm { MOV R13,R11 }
    /* +0xe97d6e */ __asm { JC 0x7fffa5607cd0 }
    /* +0xe97d74 */ __asm { JMP 0x7fffa5607c70 }
    /* +0xe97d79 */ __asm { MOV dword ptr [RSP + 0x40],0xed06c04b }
    /* +0xe97d81 */ __asm { JMP 0x7fffa56083f6 }
    /* +0xe97d86 */ __asm { LEA RCX,[0x7fffa551cdf8] }
    /* +0xe97d8d */ __asm { MOV R11D,0x2c867f7b }
    /* +0xe97d93 */ __asm { XOR R11D,EBP }
    /* +0xe97d96 */ __asm { IMUL R11D,R11D,-0x5eaf8dcb }
    /* +0xe97d9d */ __asm { ADD R11D,0xd4060058 }
    /* +0xe97da4 */ __asm { MOVSXD R8,R11D }
    /* +0xe97da7 */ __asm { ADD R8,RCX }
    /* +0xe97daa */ __asm { CALL R8 }
    /* +0xe97dad */ __asm { MOV R12,qword ptr [RAX] }
    /* +0xe97db0 */ __asm { MOV RDI,qword ptr [R12] }
    /* +0xe97db4 */ __asm { TEST RDI,RDI }
    /* +0xe97db7 */ __asm { JZ 0x7fffa5607f05 }
    /* +0xe97dbd */ __asm { MOV R14,0x8000000081b }
    /* +0xe97dc7 */ __asm { MOV RBX,-0x217987edb9a1e57c }
    /* +0xe97dd1 */ __asm { JMP 0x7fffa5607df2 }
    /* +0xe97de0 */ __asm { MOV RDI,qword ptr [R12 + 0x8] }
    /* +0xe97de5 */ __asm { ADD R12,0x8 }
    /* +0xe97de9 */ __asm { TEST RDI,RDI }
    /* +0xe97dec */ __asm { JZ 0x7fffa5607f05 }
    /* +0xe97df2 */ __asm { LEA RCX,[0x7fffa5628303] }
    /* +0xe97df9 */ __asm { MOV EAX,0xd1ba1f08 }
    /* +0xe97dfe */ __asm { LEA R15D,[RAX + RBP*0x1] }
    /* +0xe97e02 */ __asm { ADD R15D,0x41212a32 }
    /* +0xe97e09 */ __asm { MOV AX,0xdcb5 }
    /* +0xe97e0d */ __asm { NOT EAX }
    /* +0xe97e0f */ __asm { ADD EAX,EBP }
    /* +0xe97e11 */ __asm { MOVSX R8,AX }
    /* +0xe97e15 */ __asm { ADD R8,RCX }
    /* +0xe97e18 */ __asm { MOV RCX,RDI }
    /* +0xe97e1b */ __asm { CALL R8 }
    /* +0xe97e1e */ __asm { CMP RAX,R15 }
    /* +0xe97e21 */ __asm { JBE 0x7fffa5607de0 }
    /* +0xe97e23 */ __asm { LEA RCX,[RDI + RAX*0x1] }
    /* +0xe97e27 */ __asm { ADD RCX,-0x1d }
    /* +0xe97e2b */ __asm { CMP RDI,RCX }
    /* +0xe97e2e */ __asm { JNC 0x7fffa5607de0 }
    /* +0xe97e30 */ __asm { LEA RCX,[RDI + RAX*0x1] }
    /* +0xe97e34 */ __asm { ADD RCX,-0x1e }
    /* +0xe97e38 */ __asm { NOP dword ptr [RAX + RAX*0x1] }
    /* +0xe97e40 */ __asm { NOP }
    /* +0xe97e42 */ __asm { MOV R8,0x0 }
    /* +0xe97e49 */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xe97e50 */ __asm { MOV EAX,0x1 }
    /* +0xe97e55 */ __asm { MOV R8,0x3e149def2df35f59 }
    /* +0xe97e5f */ __asm { NOP }
    /* +0xe97e60 */ __asm { MOVZX R11D,uint8_t ptr [RDI + RAX*0x1 + -0x1] }
    /* +0xe97e66 */ __asm { MOV DL,0x40 }
    /* +0xe97e68 */ __asm { SUB DL,R11B }
    /* +0xe97e6b */ __asm { MOV R10D,R11D }
    /* +0xe97e6e */ __asm { OR R10B,0x20 }
    /* +0xe97e72 */ __asm { MOV R9B,0x2 }
    /* +0xe97e75 */ __asm { MOVZX R15D,uint8_t ptr [RDI + RAX*0x1] }
    /* +0xe97e7a */ __asm { LEA ESI,[R15 + -0x41] }
    /* +0xe97e7e */ __asm { MOV R13D,R15D }
    /* +0xe97e81 */ __asm { OR R13B,0x20 }
    /* +0xe97e85 */ __asm { CMP SIL,0x1a }
    /* +0xe97e89 */ __asm { MOVZX ESI,R13B }
    /* +0xe97e8d */ __asm { CMOVNC ESI,R15D }
    /* +0xe97e91 */ __asm { ADD R9D,EBP }
    /* +0xe97e94 */ __asm { CMP DL,R9B }
    /* +0xe97e97 */ __asm { MOVZX R10D,R10B }
    /* +0xe97e9b */ __asm { CMOVBE R10D,R11D }
    /* +0xe97e9f */ __asm { MOVZX EDX,SIL }
    /* +0xe97ea3 */ __asm { MOVZX R11D,R10B }
    /* +0xe97ea7 */ __asm { XOR R11,R8 }
    /* +0xe97eaa */ __asm { IMUL R11,R14 }
    /* +0xe97eae */ __asm { XOR R11,RDX }
    /* +0xe97eb1 */ __asm { MOV R8,R11 }
    /* +0xe97eb4 */ __asm { IMUL R8,R14 }
    /* +0xe97eb8 */ __asm { CMP RAX,0x1d }
    /* +0xe97ebc */ __asm { JZ 0x7fffa5607ed0 }
    /* +0xe97ebe */ __asm { ADD RAX,0x2 }
    /* +0xe97ec2 */ __asm { JMP 0x7fffa5607e60 }
    /* +0xe97ed0 */ __asm { CMP R8,RBX }
    /* +0xe97ed3 */ __asm { JZ 0x7fffa5607ee6 }
    /* +0xe97ed5 */ __asm { CMP RDI,RCX }
    /* +0xe97ed8 */ __asm { JNC 0x7fffa5607de0 }
    /* +0xe97ede */ __asm { INC RDI }
    /* +0xe97ee1 */ __asm { JMP 0x7fffa5607e40 }
    /* +0xe97ee6 */ __asm { MOV dword ptr [RSP + 0x40],0xdb151bf7 }
    /* +0xe97eee */ __asm { MOV R11D,dword ptr [RSP + 0x40] }
    /* +0xe97ef3 */ __asm { TEST R11B,0x1 }
    /* +0xe97ef7 */ __asm { JNZ 0x7fffa56083fb }
    /* +0xe97f05 */ __asm { MOV dword ptr [RSP + 0x64],0x2 }
    /* +0xe97f0d */ __asm { RDTSC }
    /* +0xe97f0f */ __asm { SHL RDX,0x20 }
    /* +0xe97f13 */ __asm { OR RDX,RAX }
    /* +0xe97f16 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0xe97f20 */ __asm { IMUL RCX,RDX }
    /* +0xe97f24 */ __asm { MOV RDX,-0x22b18422c4a9c65e }
    /* +0xe97f2e */ __asm { ADD RDX,RCX }
    /* +0xe97f31 */ __asm { MOV RAX,RDX }
    /* +0xe97f34 */ __asm { SHR RAX,0x2d }
    /* +0xe97f38 */ __asm { MOV RCX,RDX }
    /* +0xe97f3b */ __asm { SHR RCX,0x3b }
    /* +0xe97f3f */ __asm { SHR RDX,0x1b }
    /* +0xe97f43 */ __asm { XOR EAX,EDX }
    /* +0xe97f45 */ __asm { ROR EAX,CL }
    /* +0xe97f47 */ __asm { AND EAX,0x3 }
    /* +0xe97f4a */ __asm { CMP EAX,0x2 }
    /* +0xe97f4d */ __asm { JNC 0x7fffa5608021 }
    /* +0xe97f53 */ __asm { CMP EAX,0x1 }
    /* +0xe97f56 */ __asm { JZ 0x7fffa560808d }
    /* +0xe97f5c */ __asm { MOV R8D,0x400fef6f }
    /* +0xe97f62 */ __asm { MOV RCX,0x324167d6e02cf238 }
    /* +0xe97f6c */ __asm { ADD RCX,-0x13526c36 }
    /* +0xe97f73 */ __asm { MOV RAX,RBP }
    /* +0xe97f76 */ __asm { XOR RAX,RCX }
    /* +0xe97f79 */ __asm { CMP R8,RAX }
    /* +0xe97f7c */ __asm { JZ 0x7fffa560847b }
    /* +0xe97f82 */ __asm { NOP }
    /* +0xe97f83 */ __asm { MOV RCX,0x0 }
    /* +0xe97f8a */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0xe97f91 */ __asm { MOV R11W,0x21e6 }
    /* +0xe97f96 */ __asm { ADD R11D,0x3e1a }
    /* +0xe97f9d */ __asm { ROL R11W,0x8 }
    /* +0xe97fa2 */ __asm { MOV ECX,EBP }
    /* +0xe97fa4 */ __asm { ROR R11W,CL }
    /* +0xe97fa8 */ __asm { MOVZX R11D,R11W }
    /* +0xe97fac */ __asm { CMP dword ptr [R8 + 0x3fee1451],R11D }
    /* +0xe97fb3 */ __asm { JA 0x7fffa56081ba }
    /* +0xe97fb9 */ __asm { LEA R8,[0x7fffa47bb8b0] }
    /* +0xe97fc0 */ __asm { MOV RCX,-0x2c5516ce5b9bbc1f }
    /* +0xe97fca */ __asm { CMP R8,RCX }
    /* +0xe97fcd */ __asm { NOP }
    /* +0xe97fce */ __asm { NOP }
    /* +0xe97fcf */ __asm { NOP }
    /* +0xe97fd0 */ __asm { NOP }
    /* +0xe97fd1 */ __asm { NOP }
    /* +0xe97fd2 */ __asm { NOP }
    /* +0xe97fd3 */ __asm { NOP }
    /* +0xe97fd4 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xe97fd9 */ __asm { MOV EAX,dword ptr [R8 + 0xc18] }
    /* +0xe97fe0 */ __asm { MOV R11D,0xbb4bfbfa }
    /* +0xe97fe6 */ __asm { ADD R11D,0x44b40405 }
    /* +0xe97fed */ __asm { MOV ECX,EBP }
    /* +0xe97fef */ __asm { ROL R11D,CL }
    /* +0xe97ff2 */ __asm { MOVSXD R10,R11D }
    /* +0xe97ff5 */ __asm { MOV R11W,0x3b87 }
    /* +0xe97ffa */ __asm { ADD R11D,0x3b5c }
    /* +0xe98001 */ __asm { XOR R11D,EBP }
    /* +0xe98004 */ __asm { ROL R11W,0x4 }
    /* +0xe98009 */ __asm { MOVZX EDX,R11W }
    /* +0xe9800d */ __asm { MOV R11W,0x4918 }
    /* +0xe98012 */ __asm { XOR R11D,EBP }
    /* +0xe98015 */ __asm { NOT R11D }
    /* +0xe98018 */ __asm { MOVZX R9D,R11W }
    /* +0xe9801c */ __asm { JMP 0x7fffa56083d4 }
    /* +0xe98021 */ __asm { CMP EAX,0x3 }
    /* +0xe98024 */ __asm { JZ 0x7fffa5608105 }
    /* +0xe9802a */ __asm { LEA R8,[0x7fffa47bbce4] }
    /* +0xe98031 */ __asm { MOV RCX,-0x7407fd04a2af6444 }
    /* +0xe9803b */ __asm { CMP R8,RCX }
    /* +0xe9803e */ __asm { JZ 0x7fffa560848d }
    /* +0xe98044 */ __asm { MOV R11W,0x493c }
    /* +0xe98049 */ __asm { MOV R9W,0xec39 }
    /* +0xe9804e */ __asm { ADD R9D,0x182 }
    /* +0xe98055 */ __asm { MOV AX,0x491d }
    /* +0xe98059 */ __asm { ADD EAX,EBP }
    /* +0xe9805b */ __asm { NOT EAX }
    /* +0xe9805d */ __asm { MOVSX R10,AX }
    /* +0xe98061 */ __asm { ROL R9W,0x2 }
    /* +0xe98066 */ __asm { XOR R9D,EBP }
    /* +0xe98069 */ __asm { MOVZX EDX,R9W }
    /* +0xe9806d */ __asm { XOR R11D,EBP }
    /* +0xe98070 */ __asm { ROL R11W,0xd }
    /* +0xe98075 */ __asm { NOT R11D }
    /* +0xe98078 */ __asm { MOVZX R9D,R11W }
    /* +0xe9807c */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xe98081 */ __asm { MOV EAX,dword ptr [R8 + 0x12f4] }
    /* +0xe98088 */ __asm { JMP 0x7fffa56083d4 }
    /* +0xe9808d */ __asm { LEA R8,[0x7fffa47b9984] }
    /* +0xe98094 */ __asm { MOV RCX,-0x53e6f9e871269210 }
    /* +0xe9809e */ __asm { XOR RCX,0x15e25d70 }
    /* +0xe980a5 */ __asm { MOV RAX,RBP }
    /* +0xe980a8 */ __asm { ADD RAX,RCX }
    /* +0xe980ab */ __asm { CMP R8,RAX }
    /* +0xe980ae */ __asm { NOP }
    /* +0xe980af */ __asm { NOP }
    /* +0xe980b0 */ __asm { NOP }
    /* +0xe980b1 */ __asm { NOP }
    /* +0xe980b2 */ __asm { NOP }
    /* +0xe980b3 */ __asm { NOP }
    /* +0xe980b4 */ __asm { NOP }
    /* +0xe980b5 */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xe980ba */ __asm { MOV AX,0xe969 }
    /* +0xe980be */ __asm { XOR EAX,0x128d }
    /* +0xe980c3 */ __asm { ADD EAX,0x4d38 }
    /* +0xe980c8 */ __asm { XOR EAX,EBP }
    /* +0xe980ca */ __asm { MOVSX R10,AX }
    /* +0xe980ce */ __asm { MOV EAX,dword ptr [R8 + 0x2b44] }
    /* +0xe980d5 */ __asm { MOV R11W,0x7357 }
    /* +0xe980da */ __asm { IMUL R11D,R11D,0x2ca1 }
    /* +0xe980e1 */ __asm { ROL R11W,0x5 }
    /* +0xe980e6 */ __asm { SUB R11D,EBP }
    /* +0xe980e9 */ __asm { MOVZX EDX,R11W }
    /* +0xe980ed */ __asm { MOV CX,0x4c51 }
    /* +0xe980f1 */ __asm { LEA R11D,[RCX + RBP*0x1] }
    /* +0xe980f5 */ __asm { ADD R11D,0xfffffcd0 }
    /* +0xe980fc */ __asm { MOVZX R9D,R11W }
    /* +0xe98100 */ __asm { JMP 0x7fffa56083d4 }
    /* +0xe98105 */ __asm { MOV R11D,0xda7a79f4 }
    /* +0xe9810b */ __asm { ADD R11D,0xf66bd1ba }
    /* +0xe98112 */ __asm { MOV ECX,EBP }
    /* +0xe98114 */ __asm { ROL R11D,CL }
    /* +0xe98117 */ __asm { LEA R8,[0x7fffa47bb6e9] }
    /* +0xe9811e */ __asm { MOVSXD RCX,R11D }
    /* +0xe98121 */ __asm { ADD RCX,R8 }
    /* +0xe98124 */ __asm { MOV R11D,0xa6bf23b1 }
    /* +0xe9812a */ __asm { SUB R11,RCX }
    /* +0xe9812d */ __asm { MOV RCX,0x60e1306c3b395def }
    /* +0xe98137 */ __asm { CMP R11,RCX }
    /* +0xe9813a */ __asm { NOP }
    /* +0xe9813b */ __asm { NOP }
    /* +0xe9813c */ __asm { NOP }
    /* +0xe9813d */ __asm { NOP }
    /* +0xe9813e */ __asm { NOP }
    /* +0xe9813f */ __asm { MOV EAX,0x564fafd2 }
    /* +0xe98144 */ __asm { XOR EAX,0xcfd86d38 }
    /* +0xe98149 */ __asm { LEA R11,[R8 + 0xd6b] }
    /* +0xe98150 */ __asm { MOV ECX,EBP }
    /* +0xe98152 */ __asm { ROR EAX,CL }
    /* +0xe98154 */ __asm { OR R8,0xd6b }
    /* +0xe9815b */ __asm { MOV R10D,0x1da2ec1e }
    /* +0xe98161 */ __asm { MOV R9W,0x67d2 }
    /* +0xe98166 */ __asm { MOV DX,0x4fe0 }
    /* +0xe9816a */ __asm { XOR EDX,0x684a }
    /* +0xe98170 */ __asm { ROR DX,CL }
    /* +0xe98173 */ __asm { MOV ECX,0x40a734ff }
    /* +0xe98178 */ __asm { SUB ECX,R10D }
    /* +0xe9817b */ __asm { ADD EDX,0xffffbb17 }
    /* +0xe98181 */ __asm { MOVZX EDX,DX }
    /* +0xe98184 */ __asm { MOV R10D,0xe77222fe }
    /* +0xe9818a */ __asm { XOR R10D,EBP }
    /* +0xe9818d */ __asm { XOR R10D,0xf5a96be2 }
    /* +0xe98194 */ __asm { MOVSXD R10,R10D }
    /* +0xe98197 */ __asm { CMP RCX,RAX }
    /* +0xe9819a */ __asm { CMOVLE R8,R11 }
    /* +0xe9819e */ __asm { SUB R9D,EBP }
    /* +0xe981a1 */ __asm { XOR R9D,0xb0eb }
    /* +0xe981a8 */ __asm { MOVZX R9D,R9W }
    /* +0xe981ac */ __asm { MOV qword ptr [RSP + 0x40],RCX }
    /* +0xe981b1 */ __asm { MOV EAX,dword ptr [R8 + 0x74] }
    /* +0xe981b5 */ __asm { JMP 0x7fffa56083d4 }
    /* +0xe981ba */ __asm { PUSHFQ }
    /* +0xe981bb */ __asm { POP R9 }
    /* +0xe981bd */ __asm { RDTSC }
    /* +0xe981bf */ __asm { SHL RDX,0x20 }
    /* +0xe981c3 */ __asm { OR RDX,RAX }
    /* +0xe981c6 */ __asm { MOV R8,0x5851f42d4c957f2d }
    /* +0xe981d0 */ __asm { IMUL R8,RDX }
    /* +0xe981d4 */ __asm { MOV RCX,0x5c0c67c7a449f022 }
    /* +0xe981de */ __asm { ADD RCX,R8 }
    /* +0xe981e1 */ __asm { MOV RAX,RCX }
    /* +0xe981e4 */ __asm { SHR RAX,0x2d }
    /* +0xe981e8 */ __asm { MOV RDX,RCX }
    /* +0xe981eb */ __asm { SHR RDX,0x1b }
    /* +0xe981ef */ __asm { XOR EAX,EDX }
    /* +0xe981f1 */ __asm { SHR RCX,0x3b }
    /* +0xe981f5 */ __asm { ROR EAX,CL }
    /* +0xe981f7 */ __asm { TEST R9D,0x100 }
    /* +0xe981fe */ __asm { NOP }
    /* +0xe981ff */ __asm { NOP }
    /* +0xe98200 */ __asm { NOP }
    /* +0xe98201 */ __asm { NOP }
    /* +0xe98202 */ __asm { NOP }
    /* +0xe98203 */ __asm { NOP }
    /* +0xe98204 */ __asm { MOV R8,0x0 }
    /* +0xe9820b */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xe98212 */ __asm { NOP }
    /* +0xe98213 */ __asm { MOV dword ptr [RSP + 0x40],0xe1c47cd }
    /* +0xe9821b */ __asm { MOV R11D,dword ptr [RSP + 0x40] }
    /* +0xe98220 */ __asm { CMP R11D,0x6189fac3 }
    /* +0xe98227 */ __asm { NOP }
    /* +0xe98228 */ __asm { NOP }
    /* +0xe98229 */ __asm { NOP }
    /* +0xe9822a */ __asm { NOP }
    /* +0xe9822b */ __asm { NOP }
    /* +0xe9822c */ __asm { CMP EAX,0x40813e1 }
    /* +0xe98231 */ __asm { JA 0x7fffa560834c }
    /* +0xe98237 */ __asm { MOV dword ptr [RSP + 0x40],0xb9bd9a5e }
    /* +0xe9823f */ __asm { MOV R11D,dword ptr [RSP + 0x40] }
    /* +0xe98244 */ __asm { XORPS XMM3,XMM3 }
    /* +0xe98247 */ __asm { MOVAPS xmmword ptr [RSP + 0x40],XMM3 }
    /* +0xe9824c */ __asm { MOV dword ptr [RSP + 0x50],0xf4f05a7 }
    /* +0xe98254 */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0xe98259 */ __asm { TEST R11D,R11D }
    /* +0xe9825c */ __asm { JS 0x7fffa56084a3 }
    /* +0xe98262 */ __asm { TEST R9D,0x100 }
    /* +0xe98269 */ __asm { NOP }
    /* +0xe9826a */ __asm { NOP }
    /* +0xe9826b */ __asm { NOP }
    /* +0xe9826c */ __asm { NOP }
    /* +0xe9826d */ __asm { NOP }
    /* +0xe9826e */ __asm { MOV dword ptr [RSP + 0x40],0x0 }
    /* +0xe98276 */ __asm { MOV dword ptr [RSP + 0x50],0xe26f97cb }
    /* +0xe9827e */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0xe98283 */ __asm { CMP R11D,0x806c3b0f }
    /* +0xe9828a */ __asm { JBE 0x7fffa56084b8 }
    /* +0xe98290 */ __asm { TEST R9D,0x100 }
    /* +0xe98297 */ __asm { JZ 0x7fffa56082a7 }
    /* +0xe98299 */ __asm { JNO 0x7fffa56082e8 }
    /* +0xe9829c */ __asm { MOV [0xd08c2debb26f87f4],EAX }
    /* +0xe982a5 */ __asm { MUL ESP }
    /* +0xe982a7 */ __asm { MOV dword ptr [RSP + 0x50],0x52a5cc0 }
    /* +0xe982af */ __asm { MOV R11D,dword ptr [RSP + 0x50] }
    /* +0xe982b4 */ __asm { TEST R11D,R11D }
    /* +0xe982b7 */ __asm { NOP }
    /* +0xe982b8 */ __asm { NOP }
    /* +0xe982b9 */ __asm { NOP }
    /* +0xe982ba */ __asm { NOP }
    /* +0xe982bb */ __asm { NOP }
    /* +0xe982bc */ __asm { NOP }
    /* +0xe982bd */ __asm { NOP }
    /* +0xe982be */ __asm { MOV R8,0x0 }
    /* +0xe982c5 */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0xe982cc */ __asm { LEA R8,[0x7fffa47b89e6] }
    /* +0xe982d3 */ __asm { PUSHFQ }
    /* +0xe982d4 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0xe982dc */ __asm { POPFQ }
    /* +0xe982dd */ __asm { MOV RCX,-0xe7f5cf67 }
    /* +0xe982e7 */ __asm { SUB RCX,R8 }
    /* +0xe982ea */ __asm { MOV R11,0x1e87b1a143936c4 }
    /* +0xe982f4 */ __asm { CMP RCX,R11 }
    /* +0xe982f7 */ __asm { NOP }
    /* +0xe982f8 */ __asm { NOP }
    /* +0xe982f9 */ __asm { NOP }
    /* +0xe982fa */ __asm { NOP }
    /* +0xe982fb */ __asm { NOP }
    /* +0xe982fc */ __asm { MOV R11W,0x3276 }
    /* +0xe98301 */ __asm { MOV R10D,0x24c6d27c }
    /* +0xe98307 */ __asm { MOV qword ptr [RSP + 0x50],RCX }
    /* +0xe9830c */ __asm { MOV R9W,0x8a31 }
    /* +0xe98311 */ __asm { ADD R9D,0x75d4 }
    /* +0xe98318 */ __asm { MOV ECX,EBP }
    /* +0xe9831a */ __asm { ROL R9W,CL }
    /* +0xe9831e */ __asm { ADD R10D,0xee1476a0 }
    /* +0xe98325 */ __asm { MOVZX EDX,R9W }
    /* +0xe98329 */ __asm { ADD R11D,0xffffce0a }
    /* +0xe98330 */ __asm { ROR R11W,CL }
    /* +0xe98334 */ __asm { XOR R10D,EBP }
    /* +0xe98337 */ __asm { MOVZX R9D,R11W }
    /* +0xe9833b */ __asm { MOV EAX,dword ptr [R8 + 0x45f2] }
    /* +0xe98342 */ __asm { MOVSXD R10,R10D }
    /* +0xe98345 */ __asm { LEA R8,[RSP + 0x40] }
    /* +0xe9834a */ __asm { SYSCALL }
    /* +0xe9834c */ __asm { LEA R8,[0x7fffa478b8f5] }
    /* +0xe98353 */ __asm { MOV RCX,R8 }
    /* +0xe98356 */ __asm { NOT RCX }
    /* +0xe98359 */ __asm { MOV R11,-0x7c55073a5e08c5dd }
    /* +0xe98363 */ __asm { IMUL R11,RCX }
    /* +0xe98367 */ __asm { XOR R11,0x24793c0b }
    /* +0xe9836e */ __asm { MOV RCX,0x785afa9553a22cfb }
}


// ============================================================================
// Function : FUN_7fffa56084d0  |  RVA: 0xe984d0  |  Size: 381 bytes
// Callers  : FUN_7fffa517e320@0xa0e320
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa4ed9184@0x769184, FUN_7fffa52d8dd0@0xb68dd0, FUN_7fffa52679b8@0xaf79b8, FUN_7fffa55d6410@0xe66410, FUN_7fffa5267248@0xaf7248, FUN_7fffa55c6b44@0xe56b44, FUN_7fffa52d0eb4@0xb60eb4
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7fffa56084d0(int param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  uint32_t *puVar4;
  int64_t *plVar5;
  char *pcVar6;
  int iVar7;
  int64_t *plStackX_10;
  int64_t lStackX_18;
  uint64_t uStackX_20;
  
  iVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    puVar4 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar4 = 0x16;
    FUN_7fffa55c8ce0();
    return 0x16;
  }
  FUN_7fffa55c6b44();
  FUN_7fffa55d6410(0,s_C__Users_ZIKA_AppData_Local_Robl_7fffa4781c60,0x104);
  PTR_s_C__Users_ZIKA_AppData_Local_Robl_7fffa4782588 =
       s_C__Users_ZIKA_AppData_Local_Robl_7fffa4781c60;
  if ((_DAT_7fffa47825a8 == (char *)0x0) || (pcVar6 = _DAT_7fffa47825a8, *_DAT_7fffa47825a8 == '\0')
     ) {
    pcVar6 = s_C__Users_ZIKA_AppData_Local_Robl_7fffa4781c60;
  }
  lStackX_18 = 0;
  uStackX_20 = 0;
  FUN_7fffa5267248(pcVar6,0,0,&lStackX_18,&uStackX_20);
  lVar1 = lStackX_18;
  plVar5 = (int64_t *)FUN_7fffa52679b8(lStackX_18,uStackX_20,1);
  if (plVar5 == (int64_t *)0x0) {
    puVar4 = (uint32_t *)FUN_7fffa4ed9184();
    iVar7 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    FUN_7fffa5267248(pcVar6,plVar5,plVar5 + lVar1,&lStackX_18,&uStackX_20);
    if (param_1 != 1) {
      plStackX_10 = (int64_t *)0x0;
      iVar3 = FUN_7fffa52d0eb4(plVar5,&plStackX_10);
      plVar2 = plStackX_10;
      if (iVar3 != 0) {
        FUN_7fffa52d8dd0(plStackX_10);
        plStackX_10 = (int64_t *)0x0;
        FUN_7fffa52d8dd0(plVar5);
        return iVar3;
      }
      _DAT_7fffa4782590 = 0;
      lVar1 = *plStackX_10;
      while (lVar1 != 0) {
        plStackX_10 = plStackX_10 + 1;
        _DAT_7fffa4782590 = _DAT_7fffa4782590 + 1;
        lVar1 = *plStackX_10;
      }
      plStackX_10 = (int64_t *)0x0;
      _DAT_7fffa4782598 = plVar2;
      FUN_7fffa52d8dd0(0);
      plStackX_10 = (int64_t *)0x0;
      goto LAB_7fffa5608635;
    }
    _DAT_7fffa4782590 = (int)lStackX_18 + -1;
    _DAT_7fffa4782598 = plVar5;
  }
  plVar5 = (int64_t *)0x0;
LAB_7fffa5608635:
  FUN_7fffa52d8dd0(plVar5);
  return iVar7;
}


// ============================================================================
// Function : FUN_7fffa5608650  |  RVA: 0xe98650  |  Size: 1 bytes
// Callers  : FUN_7fffa55d50b4@0xe650b4, FUN_7fffa56a0818@0xf30818, FUN_7fffa4f5c658@0x7ec658, FUN_7fffa5213f88@0xaa3f88
// Callees  : none
// ============================================================================
void FUN_7fffa5608650(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa5608660  |  RVA: 0xe98660  |  Size: 535 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5608660(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t in_RAX;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  bRam00007fffa478534d = 0;
  uRam00007fffa4785362 = 0;
  uRam00007fffa4785366 = 0;
  uRam00007fffa4785352 = 0;
  uRam00007fffa478535a = 0;
  uRam00007fffa478535e = 0;
  uRam00007fffa4785379 = 0;
  uVar1 = rdtsc();
  lVar3 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44((int)((uint64_t)in_RAX >> 0x20),(int)uVar1)) * 0x729213fe99558c4 + 0xb;
  lVar5 = 3;
  while( true ) {
    lVar3 = lVar3 * 0x729213fe99558c4 + 0xb;
    lVar4 = lVar3 * 0x729213fe99558c4 + 0xb;
    lVar6 = lVar4 * 0x729213fe99558c4 + 0xb;
    *(char *)(lVar5 + 0x7fffa4785343) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar5 + 0x7fffa4785345) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar5 + 0x7fffa4785344) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar5 == 0x43) break;
    lVar3 = lVar6 * 0x729213fe99558c4 + 0xb;
    *(char *)(lVar5 + 0x7fffa4785346) = (char)((uint64_t)lVar3 >> 0x20);
    lVar5 = lVar5 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa478534d * 0x24924925 + 0x24924925) * 7;
  *(uint32_t *)((uVar2 >> 0x20) * 4 + 0x7fffa4785352) = 0xcdb3a475;
  bRam00007fffa478534d = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa5608880  |  RVA: 0xe98880  |  Size: 713 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5608a50) */

void FUN_7fffa5608880(void)

{
  uint8_t bVar1;
  int64_t lVar2;
  uint8_t bVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  uRam00007fffa47bcb80 = 0;
  uRam00007fffa47bcb99 = 0;
  uRam00007fffa47bcba1 = 0;
  uRam00007fffa47bcb89 = 0;
  uRam00007fffa47bcb91 = 0;
  uRam00007fffa47bcbaa = 0;
  lVar5 = rdtsc();
  lVar2 = 4;
  lVar5 = lVar5 * 0xf1cc63217dbb8ef;
  do {
    lVar4 = lVar2;
    *(char *)(lVar4 + 0x7fffa47bcb76) = (char)((uint64_t)(lVar5 * 0x4661e077cf) >> 0x20);
    *(char *)(lVar4 + 0x7fffa47bcb77) = (char)((uint64_t)(lVar5 * 0x7de14a46cdc1a241) >> 0x20);
    *(char *)(lVar4 + 0x7fffa47bcb74) = (char)((uint64_t)(lVar5 * 0x3217dbb8ef) >> 0x20);
    *(char *)(lVar4 + 0x7fffa47bcb75) = (char)((uint64_t)(lVar5 * 0x2ce0826f21) >> 0x20);
    lVar2 = lVar4 + 4;
    lVar5 = lVar5 * 0x7de14a46cdc1a241;
  } while ((lVar4 + 0x4e650ce0) * -0x5da9bc17fd92119d != 0x14cf99e106786048);
  bVar1 = (uint8_t)lVar4 & 0xf;
  bVar3 = (uint8_t)lVar4 & 0xf;
  bVar3 = *(char *)((int64_t)(short)(0xadf7U >> bVar3 | -0x5209 << 0x10 - bVar3) + 0x7fffa47bd3d3)
          + 1U & 7;
  *(uint32_t *)((uint64_t)bVar3 * 4 + 0x7fffa47bcb89) =
       *(uint32_t *)((int64_t)(short)(((short)(lVar4 + 4) + 0x69e5) * -0x47e7 + 0x6e1f) +
                0x7fffa47c4852) ^ 0x9ad0f296;
  *(uint8_t *)((int64_t)(short)(-0x5168 << bVar1 | 0xae98U >> 0x10 - bVar1) + 0x7fffa47c32d2) = bVar3;
  return;
}


// ============================================================================
// Function : FUN_7fffa5608b50  |  RVA: 0xe98b50  |  Size: 38 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa5608b76) */

uint64_t FUN_7fffa5608b50(void)

{
  uint32_t in_EAX;
  uint64_t uStack_8;
  
  uStack_8 = CONCAT44(0xaa22df3c,in_EAX);
  return uStack_8;
}


// ============================================================================
// Function : FUN_7fffa5608b80  |  RVA: 0xe98b80  |  Size: 766 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa5608dc3) */

void FUN_7fffa5608b80(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  short sVar5;
  uint8_t bVar6;
  uint64_t uVar7;
  
  uRam00007fffa47bd2bd = 0;
  uRam00007fffa47bd2f7 = 0;
  uRam00007fffa47bd2ff = 0;
  uRam00007fffa47bd2e7 = 0;
  uRam00007fffa47bd2ef = 0;
  uRam00007fffa47bd2d7 = 0;
  uRam00007fffa47bd2df = 0;
  uRam00007fffa47bd2c7 = 0;
  uRam00007fffa47bd2cf = 0;
  uRam00007fffa47bd308 = 0;
  uVar3 = rdtsc();
  lVar4 = (CONCAT44(0x7fff,(int)((uint64_t)uVar3 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar3)) * 0xae6959c5434efa1 + 0xb;
  uVar7 = 4;
  sVar5 = -0x1c7;
  while( true ) {
    lVar4 = lVar4 * 0xae6959c5434efa1 + 0xb;
    *(char *)(uVar7 + 0x7fffa47bd2b4) = (char)((uint64_t)lVar4 >> 0x20);
    lVar1 = lVar4 * 0xae6959c5434efa1 + 0xb;
    lVar2 = lVar1 * 0xae6959c5434efa1 + 0xb;
    lVar4 = lVar2 * 0xae6959c5434efa1 + 0xb;
    *(char *)(uVar7 + 0x7fffa47bd2b7) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(uVar7 + 0x7fffa47bd2b6) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(uVar7 + 0x7fffa47bd2b5) = (char)((uint64_t)lVar1 >> 0x20);
    if ((uVar7 << 0x3c | uVar7 >> 4) == 0xc000000000000005) break;
    uVar7 = uVar7 + 4;
    sVar5 = sVar5 + -0x16c;
  }
  bVar6 = (uint8_t)uVar7 & 0x1f;
  bVar6 = *(char *)(((int64_t)(int)(-0x64724355 << bVar6 | 0x9b8dbcabU >> 0x20 - bVar6) ^
                    0x4647e594U) + 0x7fffa47c945f) + 1U & 7;
  *(uint64_t *)((int64_t)(short)(sVar5 + -0x1a8e) + 0x7fffa47c0e64 + (uint64_t)bVar6 * 8) = 0;
  *(uint8_t *)((int64_t)(int)(((uint32_t)uVar7 ^ 0x1fffeeb) << 7 | (uint32_t)uVar7 >> 0x19) + 0x7fffa47c773d)
       = bVar6;
  return;
}


// ============================================================================
// Function : FUN_7fffa5608e80  |  RVA: 0xe98e80  |  Size: 94 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
uint64_t FUN_7fffa5608e80(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                          int param_5)

{
  int64_t *plVar1;
  
  if (((param_5 == 0) &&
      (plVar1 = *(int64_t **)(param_1 + 0x558), param_3 <= *(uint32_t *)(plVar1 + 1))) &&
     (*plVar1 == param_2)) {
    FUN_7fffa56a5f20(param_4,(int64_t)plVar1 + 0xc);
    *plVar1 = 0;
    *(int *)(plVar1 + 1) = (int)param_3;
  }
  else {
    param_3 = 0;
  }
  return param_3;
}


// ============================================================================
// Function : FUN_7fffa5608ee0  |  RVA: 0xe98ee0  |  Size: 671 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa560917d) overlaps instruction at (ram,0x7fffa560917a)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa5608f35) */
/* WARNING: Removing unreachable block (ram,0x7fffa5609172) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x7fffa5609117 */
/* WARNING: Removing unreachable block (ram,0x7fffa560917a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7fffa5608ee0(void)

{
  int iVar1;
  uint64_t unaff_RDI;
  uint8_t in_AF;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  
  iVar1 = 0x224 - (int)CONCAT62((int6)((uint64_t)unaff_RDI >> 0x10),0x4408);
  FUN_7fffa507eca0(~((uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)(in_IF & 1) * 0x200 |
                     (uint64_t)(in_TF & 1) * 0x100 | 0x80 | (uint64_t)(in_AF & 1) * 0x10 | 4 |
                     (uint64_t)(in_ID & 1) * 0x200000 | (uint64_t)(in_VIP & 1) * 0x100000 |
                     (uint64_t)(in_VIF & 1) * 0x80000 | (uint64_t)(in_AC & 1) * 0x40000) *
                   -0x55b10a7d + 0x6077b584,iVar1,(int64_t)(short)iVar1 + 0x7fffa5082e84);
  FUN_7fffa564c6d0();
  return;
}


// ============================================================================
// Function : FUN_7fffa56091b0  |  RVA: 0xe991b0  |  Size: 45 bytes
// Callers  : FUN_7fffa5660944@0xef0944
// Callees  : FUN_7fffa55d84cc@0xe684cc
// ============================================================================
void FUN_7fffa56091b0(uint32_t param_1,char param_2)

{
  code *pcVar1;
  uint64_t uVar2;
  
  if (param_2 != '\0') {
    uVar2 = (*(code *)&DAT_7ff84ea23e40)();
    (*(code *)&DAT_7ff84ea424a0)(uVar2,param_1);
  }
  FUN_7fffa55d84cc(param_1);
  (*(code *)&DAT_7ff84ea417a0)(param_1);
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa56091e0  |  RVA: 0xe991e0  |  Size: 90 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa5404c39@0xc94c39
// Callees  : FUN_7fffa55d63a0@0xe663a0
// ============================================================================
uint64_t FUN_7fffa56091e0(uint8_t *param_1,uint8_t *param_2,uint32_t *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_7fffa55d63a0();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_7fffa55d63a0();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*param_1 & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_7fffa55d63a0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_7fffa5246e30();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_7fffa55d63a0();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_7fffa5246e30();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((int64_t)iVar3 + 0x10 + lVar6) - (int64_t)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*param_1 & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*param_1 & 2) != 0)))) {
    return 1;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa560923a  |  RVA: 0xe9923a  |  Size: 127 bytes
// Callers  : none
// Callees  : FUN_7fffa55d63a0@0xe663a0, FUN_7fffa5246e30@0xad6e30
// ============================================================================
uint64_t FUN_7fffa560923a(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  uint8_t *unaff_RBP;
  uint8_t *unaff_RDI;
  uint32_t *unaff_R14;
  
  iVar3 = *(int *)(unaff_RDI + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_7fffa55d63a0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_7fffa5246e30();
  if (lVar5 != *(int *)(unaff_RBP + 4) + lVar6) {
    iVar3 = *(int *)(unaff_RDI + 4);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_7fffa55d63a0();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(unaff_RBP + 4);
    lVar6 = FUN_7fffa5246e30();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((int64_t)iVar3 + 0x10 + lVar6) - (int64_t)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*unaff_RBP & 2) == 0) || ((*unaff_RDI & 8) != 0)) &&
       ((uVar4 = *unaff_R14, (uVar4 & 1) == 0 || ((*unaff_RDI & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*unaff_RDI & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*unaff_RDI & 2) != 0)))) {
    return 1;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa56092b9  |  RVA: 0xe992b9  |  Size: 61 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa56092b9(void)

{
  uint32_t uVar1;
  uint8_t *unaff_RBP;
  uint8_t *unaff_RDI;
  uint32_t *unaff_R14;
  
  if ((((((*unaff_RBP & 2) == 0) || ((*unaff_RDI & 8) != 0)) &&
       ((uVar1 = *unaff_R14, (uVar1 & 1) == 0 || ((*unaff_RDI & 1) != 0)))) &&
      (((uVar1 & 4) == 0 || ((*unaff_RDI & 4) != 0)))) &&
     (((uVar1 & 2) == 0 || ((*unaff_RDI & 2) != 0)))) {
    return 1;
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa56092f6  |  RVA: 0xe992f6  |  Size: 15 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa56092f6(void)

{
  return 1;
}


// ============================================================================
// Function : FUN_7fffa5609310  |  RVA: 0xe99310  |  Size: 531 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t FUN_7fffa5609310(uint64_t param_1,int param_2,uint64_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t in_RAX;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t in_R10;
  uint32_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  
  uVar8 = (in_RAX >> 1 | (uint64_t)((in_RAX & 1) != 0) << 0x3f) ^ (in_RAX << 8 | in_RAX >> 0x38) ^
          in_RAX;
  uVar8 = (uVar8 << 0x10 | uVar8 >> 0x30) ^ (uVar8 << 0x3e | uVar8 >> 2) ^ uVar8;
  uVar8 = (uVar8 << 0x3c | uVar8 >> 4) ^ (uVar8 << 0x20 | uVar8 >> 0x20) ^ uVar8;
  uVar8 = (uVar8 << 8 | uVar8 >> 0x38) + 0x52b6d0d3;
  uVar8 = (uVar8 << 0x27 | uVar8 >> 0x19) ^ (uVar8 >> 1 | (uint64_t)((uVar8 & 1) != 0) << 0x3f) ^
          uVar8;
  uVar8 = (uVar8 << 0x3e | uVar8 >> 2) ^ (uVar8 << 0xe | uVar8 >> 0x32) ^ uVar8;
  uVar8 = (uVar8 << 0x1c | uVar8 >> 0x24) ^ (uVar8 << 0x3c | uVar8 >> 4) ^ uVar8;
  param_4 = param_4 >> 0x1c ^ param_4 >> 0xe ^ param_4;
  param_4 = (param_4 << 0x18 | param_4 >> 8) ^ (param_4 << 0x15 | param_4 >> 0xb) ^ param_4;
  param_4 = (param_4 << 0x10 | param_4 >> 0x10) ^ (param_4 << 10 | param_4 >> 0x16) ^ param_4;
  uVar9 = param_4 << 0xc | param_4 >> 0x14;
  uVar1 = uVar9 - 0x439f58;
  if ((int)uVar1 < (int)(param_2 + 0xe4110946U & 0xffff)) {
    return 0;
  }
  uVar9 = uVar9 - 0x439f57;
  if (uVar1 < 3) {
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    uVar7 = (uint64_t)(uVar9 & 0xfffffffc);
    lVar10 = 0;
    lVar11 = 0;
    uVar6 = 0;
    lVar12 = 0;
    lVar13 = 0;
    do {
      puVar2 = (uint32_t *)(uVar8 + 8 + uVar6 * 8);
      puVar3 = (uint32_t *)(uVar8 + 0x18 + uVar6 * 8);
      uVar4 = *(uint64_t *)(in_R10 + uVar6 * 4);
      uVar5 = *(uint64_t *)(in_R10 + 8 + uVar6 * 4);
      uVar6 = uVar6 + 4;
      lVar10 = lVar10 + (uVar4 & 0xffffffff) * (uint64_t)(*puVar2 & 0xff);
      lVar11 = lVar11 + (uVar4 >> 0x20) * (uint64_t)(puVar2[2] & 0xff);
      lVar12 = lVar12 + (uVar5 & 0xffffffff) * (uint64_t)(*puVar3 & 0xff);
      lVar13 = lVar13 + (uVar5 >> 0x20) * (uint64_t)(puVar3[2] & 0xff);
    } while (uVar6 != uVar7);
    uVar6 = lVar13 + lVar11 + lVar12 + lVar10;
    if ((uVar9 & 0xfffffffc) == uVar9) goto LAB_7fffa56094c3;
  }
  do {
    lVar11 = uVar7 * 8;
    lVar10 = uVar7 * 4;
    uVar7 = uVar7 + 1;
    uVar6 = uVar6 + (uint64_t)*(uint32_t *)(in_R10 + lVar10) *
                    (*(uint64_t *)(uVar8 + 8 + lVar11) & SUB168(ZEXT416(0xff),0));
  } while (uVar9 != uVar7);
LAB_7fffa56094c3:
  return uVar6 >> 3;
}


// ============================================================================
// Function : FUN_7fffa5609524  |  RVA: 0xe99524  |  Size: 168 bytes
// Callers  : FUN_7fffa560e038@0xe9e038, FUN_7fffa55f3150@0xe83150
// Callees  : FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa511e794@0x9ae794, FUN_7fffa5476b88@0xd06b88, FUN_7fffa4ed9184@0x769184, FUN_7fffa4f54478@0x7e4478
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_7fffa5609524(uint32_t param_1)

{
  int iVar1;
  uint32_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint32_t uVar5;
  
  if (param_1 < 0x2000) {
    uVar5 = 0;
    FUN_7fffa5476b88(7);
    lVar4 = 0;
    iVar1 = _DAT_7fffa4782580;
    while (iVar1 <= (int)param_1) {
      if (*(int64_t *)(&DAT_7fffa4782180 + lVar4 * 8) == 0) {
        lVar3 = FUN_7fffa511e794();
        *(int64_t *)(&DAT_7fffa4782180 + lVar4 * 8) = lVar3;
        if (lVar3 == 0) {
          uVar5 = 0xc;
          break;
        }
        iVar1 = _DAT_7fffa4782580 + 0x40;
        _DAT_7fffa4782580 = iVar1;
      }
      lVar4 = lVar4 + 1;
    }
    FUN_7fffa4f54478(7);
  }
  else {
    puVar2 = (uint32_t *)FUN_7fffa4ed9184();
    *puVar2 = 9;
    FUN_7fffa55c8ce0();
    uVar5 = 9;
  }
  return uVar5;
}


// ============================================================================
// Function : FUN_7fffa56095cc  |  RVA: 0xe995cc  |  Size: 24 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa56095cc(void)

{
  FUN_7fffa4f54478(8);
  return;
}


// ============================================================================
// Function : FUN_7fffa56095f0  |  RVA: 0xe995f0  |  Size: 31 bytes
// Callers  : none
// Callees  : none
// ============================================================================
bool FUN_7fffa56095f0(uint64_t *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}


// ============================================================================
// Function : FUN_7fffa5609610  |  RVA: 0xe99610  |  Size: 3419 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa5609610(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                     uint32_t param_5)

{
  int64_t *plVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  uint8_t bVar5;
  uint8_t uVar6;
  uint8_t bVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int iVar16;
  int iVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  int iVar22;
  int64_t lVar23;
  int64_t lVar24;
  uint64_t *in_R11;
  uint64_t *puVar25;
  int64_t lVar26;
  uint32_t uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  int64_t lVar30;
  uint8_t auVar31 [16];
  char cVar32;
  uint8_t uVar35;
  char cVar36;
  char cVar37;
  uint8_t uVar38;
  char cVar39;
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint32_t auStack_1b8 [66];
  uint64_t *puStack_b0;
  uint64_t *puStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  uint64_t uStack_90;
  int64_t lStack_88;
  uint64_t *puStack_80;
  uint64_t *puStack_78;
  uint64_t *puStack_70;
  int iStack_64;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  int *piStack_48;
  
  puStack_78 = (uint64_t *)(param_3 - (param_3 << 0x30));
  uVar10 = (param_2 << 8 | param_2 >> 0x38) ^ (param_2 << 0x2a | param_2 >> 0x16) ^
           (param_2 << 0x33 | param_2 >> 0xd);
  uVar10 = (uVar10 << 0x2a | uVar10 >> 0x16) ^ (uVar10 << 0x2e | uVar10 >> 0x12) ^ uVar10;
  uVar10 = (uVar10 << 0x14 | uVar10 >> 0x2c) ^ (uVar10 << 0x1c | uVar10 >> 0x24) ^ uVar10;
  uVar10 = (uVar10 << 0x28 | uVar10 >> 0x18) ^ (uVar10 << 0x38 | uVar10 >> 8) ^ uVar10;
  puStack_b0 = (uint64_t *)
               ((uVar10 << 0x30 | uVar10 >> 0x10) ^ (uVar10 << 0x10 | uVar10 >> 0x30) ^ uVar10);
  lStack_88 = *(int64_t *)(param_1 + 8);
  uVar27 = *(uint32_t *)(param_1 + 0x1c);
  uVar20 = 5;
  if (*(uint32_t *)(param_1 + 0x10c) < 5) {
    uVar20 = *(uint32_t *)(param_1 + 0x10c);
  }
  uVar19 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  uVar10 = (int64_t)puStack_78 - lStack_88;
  uVar18 = (uint32_t)uVar10;
  iVar16 = 1 << ((uint8_t)uVar20 & 0x1f);
  uVar20 = uVar18 - uVar19;
  if (uVar18 - uVar27 <= uVar19) {
    uVar20 = uVar27;
  }
  lVar30 = *(int64_t *)(param_1 + 0x70);
  lStack_98 = *(int64_t *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar20 = uVar27;
  }
  uStack_90 = (uint64_t)*(uint32_t *)(param_1 + 0x18);
  uVar29 = *(uint64_t *)(param_1 + 0x60);
  lVar14 = *(int64_t *)(param_1 + 0x38);
  puVar9 = puStack_78;
  cVar32 = (char)*(uint32_t *)(param_1 + 0x34);
  bVar5 = (uint8_t)param_5;
  if (*(int *)(param_1 + 300) == 0) {
    uVar27 = *(uint32_t *)(param_1 + 0x2c);
    uVar11 = (uint64_t)uVar27;
    uVar19 = uVar27 * uVar18;
    if ((uint64_t)
        ((0xdb67c14eU >> (bVar5 & 0x1f) | -0x24983eb2 << 0x20 - (bVar5 & 0x1f)) ^ 0x59dd3281) <=
        (uint64_t)(int64_t)(int)((param_5 ^ 0xaecaf934) << 0x10 | (param_5 ^ 0xaecaf934) >> 0x10))
    {
      uVar19 = uVar18 - uVar27;
    }
    lVar24 = lVar14;
    lVar12 = lVar30;
    if (0x180 < uVar19) {
      if (uVar27 < (uint32_t)(int)(short)~(((uint16_t)param_5 | 1) * -0x4a7f)) {
        while( true ) {
          uVar15 = (uint64_t)((uint32_t)uVar11 & 7);
          uVar19 = *(uint32_t *)(param_1 + 0x40 + uVar15 * 4);
          *(int *)(param_1 + 0x40 + uVar15 * 4) =
               (int)((*(int64_t *)(lStack_88 + 8 + uVar11) * -0x30e4432345000000 ^
                     *(uint64_t *)(param_1 + 0x60)) >> (0x38U - cVar32 & 0x3f));
          uVar15 = (uint64_t)(uVar19 >> 3 & 0xffffffe0);
          lVar24 = 0;
          if ((*(uint8_t *)(lVar14 + uVar15) & 0x1f) == 1) {
            lVar24 = 0x1f;
          }
          lVar24 = (uint64_t)(*(uint8_t *)(lVar14 + uVar15) - 1 & 0x1f) + lVar24;
          *(char *)(lVar14 + uVar15) = (char)lVar24;
          *(char *)(lVar14 + uVar15 + lVar24) = (char)uVar19;
          *(uint32_t *)(lVar30 + uVar15 * 4 + lVar24 * 4) = (uint32_t)uVar11;
          if ((uint64_t)(uVar27 + 0x60) - 1 == uVar11) break;
          uVar11 = uVar11 + 1;
        }
        lVar24 = *(int64_t *)(param_1 + 0x38);
        lVar12 = *(int64_t *)(param_1 + 0x70);
      }
      uVar27 = uVar18 - 0x20;
      uVar11 = (uint64_t)uVar27;
      plVar1 = (int64_t *)(lStack_88 + uVar11);
      uVar21 = ((int)(int64_t *)((int64_t)puStack_78 + 1U) - (int)plVar1) + 1;
      uVar19 = 8;
      if (uVar21 < 8) {
        uVar19 = uVar21;
      }
      uVar21 = 0;
      if (plVar1 <= (int64_t *)((int64_t)puStack_78 + 1U)) {
        uVar21 = uVar19;
      }
      if (uVar27 < (uVar21 + uVar18) - 0x20) {
        bVar7 = 0x38 - (char)*(uint32_t *)(param_1 + 0x34);
        uVar15 = *(uint64_t *)(param_1 + 0x60);
        if ((uVar21 & 1) != 0) {
          uVar11 = uVar11 + 1;
          *(int *)(param_1 + 0x40 + (uint64_t)(uVar27 & 7) * 4) =
               (int)((*plVar1 * -0x30e4432345000000 ^ uVar15) >> (bVar7 & 0x3f));
        }
        if (uVar21 != 1) {
          lVar23 = uVar11 + 1;
          while( true ) {
            uVar19 = (uint32_t)lVar23;
            *(int *)(param_1 + 0x40 + (uint64_t)(uVar19 - 1 & 7) * 4) =
                 (int)((*(int64_t *)(lStack_88 + -1 + lVar23) * -0x30e4432345000000 ^ uVar15) >>
                      (bVar7 & 0x3f));
            *(int *)(param_1 + 0x40 + (uint64_t)(uVar19 & 7) * 4) =
                 (int)((*(int64_t *)(lStack_88 + lVar23) * -0x30e4432345000000 ^ uVar15) >>
                      (bVar7 & 0x3f));
            if ((((int)lStack_88 - uVar21) - (int)puStack_78) + uVar19 == -0x21) break;
            lVar23 = lVar23 + 2;
          }
        }
      }
    }
    if (uVar27 < uVar18) {
      lVar23 = *(int64_t *)(param_1 + 8);
      uVar11 = (uint64_t)uVar27;
      iVar22 = 0x38 - *(int *)(param_1 + 0x34);
      while( true ) {
        uVar15 = *(int64_t *)(lVar23 + 8 + uVar11) * -0x30e4432345000000 ^
                 *(uint64_t *)(param_1 + 0x60);
        uVar28 = (uint64_t)((uint32_t)uVar11 & 7);
        iVar17 = (int)(uVar15 >> ((uint8_t)iVar22 & 0x3f));
        if ((uint64_t)(int64_t)(int)(param_5 + 0xf143b267) <
            (uint64_t)~(0x22291ae << (bVar5 & 0x1f) | 0x22291aeU >> 0x20 - (bVar5 & 0x1f))) {
          iVar17 = (int)uVar15 - iVar22;
        }
        uVar27 = *(uint32_t *)(param_1 + 0x40 + uVar28 * 4);
        *(int *)(param_1 + 0x40 + uVar28 * 4) = iVar17;
        uVar15 = (uint64_t)(uVar27 >> 3 & 0xffffffe0);
        lVar26 = 0x1f;
        if ((uint8_t)(*(uint8_t *)(lVar24 + uVar15) & 0x1f ^ bVar5 - 0x1f) != 0xbe) {
          lVar26 = 0;
        }
        lVar26 = lVar26 + (uint64_t)(*(uint8_t *)(lVar24 + uVar15) - 1 & 0x1f);
        *(char *)(lVar24 + uVar15) = (char)lVar26;
        *(char *)(lVar24 + uVar15 + lVar26) = (char)uVar27;
        *(uint32_t *)(lVar12 + uVar15 * 4 + lVar26 * 4) = (uint32_t)uVar11;
        if ((uVar10 & 0xffffffff) - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
      }
    }
    *(uint32_t *)(param_1 + 0x2c) = uVar18;
    uVar11 = (uint64_t)*(uint32_t *)(param_1 + 0x40 + (uint64_t)(uVar18 & 7) * 4);
    *(int *)(param_1 + 0x40 + (uint64_t)(uVar18 & 7) * 4) =
         (int)((*(int64_t *)(lStack_88 + 8 + (uVar10 & 0xffffffff)) * -0x30e4432345000000 ^ uVar29)
              >> (0x38U - cVar32 & 0x3f));
  }
  else {
    uVar11 = (uVar29 ^ *puStack_78 * -0x30e4432345000000) >> (0x38U - cVar32 & 0x3f);
    *(uint32_t *)(param_1 + 0x2c) = uVar18;
  }
  uVar10 = (uint64_t)((uint32_t)(uVar11 >> 3) & 0x1fffffe0);
  lVar30 = lVar30 + uVar10 * 4;
  uVar6 = (uint8_t)(uVar11 >> 0x10);
  uVar38 = (uint8_t)(uVar11 >> 0x18);
  uVar35 = (uint8_t)(uVar11 >> 8);
  auVar33._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar38,uVar38),uVar6),CONCAT14(uVar6,(int)uVar11)) >> 0x20);
  auVar33[3] = uVar35;
  auVar33[2] = uVar35;
  auVar33[0] = (uint8_t)uVar11;
  auVar33[1] = auVar33[0];
  auVar33._8_8_ = 0;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)uVar11;
  auVar34 = pshuflw(auVar33,auVar33,0);
  pcVar2 = (char *)(lVar14 + uVar10);
  pcVar3 = (char *)(lVar14 + 0x10 + uVar10);
  cVar32 = auVar34[0];
  auVar31[0] = -(*pcVar2 == cVar32);
  cVar36 = auVar34[1];
  auVar31[1] = -(pcVar2[1] == cVar36);
  cVar37 = auVar34[2];
  auVar31[2] = -(pcVar2[2] == cVar37);
  cVar39 = auVar34[3];
  auVar31[3] = -(pcVar2[3] == cVar39);
  auVar31[4] = -(pcVar2[4] == cVar32);
  auVar31[5] = -(pcVar2[5] == cVar36);
  auVar31[6] = -(pcVar2[6] == cVar37);
  auVar31[7] = -(pcVar2[7] == cVar39);
  auVar31[8] = -(pcVar2[8] == cVar32);
  auVar31[9] = -(pcVar2[9] == cVar36);
  auVar31[10] = -(pcVar2[10] == cVar37);
  auVar31[0xb] = -(pcVar2[0xb] == cVar39);
  auVar31[0xc] = -(pcVar2[0xc] == cVar32);
  auVar31[0xd] = -(pcVar2[0xd] == cVar36);
  auVar31[0xe] = -(pcVar2[0xe] == cVar37);
  auVar31[0xf] = -(pcVar2[0xf] == cVar39);
  auVar34[0] = -(*pcVar3 == cVar32);
  auVar34[1] = -(pcVar3[1] == cVar36);
  auVar34[2] = -(pcVar3[2] == cVar37);
  auVar34[3] = -(pcVar3[3] == cVar39);
  auVar34[4] = -(pcVar3[4] == cVar32);
  auVar34[5] = -(pcVar3[5] == cVar36);
  auVar34[6] = -(pcVar3[6] == cVar37);
  auVar34[7] = -(pcVar3[7] == cVar39);
  auVar34[8] = -(pcVar3[8] == cVar32);
  auVar34[9] = -(pcVar3[9] == cVar36);
  auVar34[10] = -(pcVar3[10] == cVar37);
  auVar34[0xb] = -(pcVar3[0xb] == cVar39);
  auVar34[0xc] = -(pcVar3[0xc] == cVar32);
  auVar34[0xd] = -(pcVar3[0xd] == cVar36);
  auVar34[0xe] = -(pcVar3[0xe] == cVar37);
  auVar34[0xf] = -(pcVar3[0xf] == cVar39);
  uVar19 = CONCAT22((uint16_t)(SUB161(auVar34 >> 7,0) & 1) |
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
                    (uint16_t)(auVar34[0xf] >> 7) << 0xf,
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
                    (uint16_t)(auVar31[0xf] >> 7) << 0xf);
  uVar27 = (uint32_t)*(uint8_t *)(lVar14 + uVar10);
  puStack_78 = puVar9;
  if (uVar19 == 0) {
    lVar24 = 0;
  }
  else {
    bVar7 = *(uint8_t *)(lVar14 + uVar10) & 0x1f;
    uVar29 = (uint64_t)(uVar19 >> bVar7 | uVar19 << 0x20 - bVar7);
    lVar24 = 0;
    do {
      iVar22 = 0;
      for (uVar11 = uVar29; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
        iVar22 = iVar22 + 1;
      }
      uVar19 = iVar22 + uVar27 & 0x1f;
      if (uVar19 != 0) {
        uVar19 = *(uint32_t *)(lVar30 + (uint64_t)uVar19 * 4);
        if (uVar19 < uVar20) break;
        iVar16 = iVar16 + -1;
        auStack_1b8[lVar24] = uVar19;
        lVar24 = lVar24 + 1;
      }
      uVar29 = uVar29 & uVar29 - 1;
    } while (uVar29 != 0 && iVar16 != 0);
  }
  lVar12 = 0;
  if ((uVar27 & 0x1f) == 1) {
    lVar12 = 0x1f;
  }
  lVar12 = lVar12 + (uint64_t)(uVar27 - 1 & 0x1f);
  *(uint8_t *)(lVar14 + uVar10) = (char)lVar12;
  ((uint8_t *)(lVar14 + uVar10))[lVar12] = auVar33[0];
  iVar16 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar16 + 1;
  *(int *)(lVar30 + lVar12 * 4) = iVar16;
  if (lVar24 != 0) {
    puStack_80 = (uint64_t *)(lStack_88 + uStack_90);
    puStack_60 = (uint64_t *)((int64_t)puStack_b0 - 7);
    puStack_50 = (uint64_t *)((int64_t)puStack_b0 - 3);
    iStack_64 = uVar18 + 3;
    puStack_58 = (uint64_t *)((int64_t)puStack_78 + 4);
    puStack_70 = (uint64_t *)((int64_t)puStack_b0 - 1);
    puStack_a8 = puStack_78 + 1;
    piStack_48 = (int *)((int64_t)puStack_78 + 0xc);
    lStack_a0 = lStack_88 + uStack_90 + 8;
    uVar10 = 3;
    lVar30 = 0;
    do {
      uVar27 = auStack_1b8[lVar30];
      uVar29 = (uint64_t)uVar27;
      if (uVar27 < (uint32_t)uStack_90) {
        if (*(int *)(lStack_98 + uVar29) != (int)*puStack_78) goto LAB_7fffa5609ea0;
        lVar14 = lStack_98 + uVar29;
        puVar9 = (uint64_t *)(lVar14 + 4);
        puVar8 = (uint64_t *)
                 (((int64_t)(lStack_98 + uStack_90) - (int64_t)puVar9) + (int64_t)puStack_58);
        if (puStack_b0 <= puVar8) {
          puVar8 = puStack_b0;
        }
        puVar25 = puStack_58;
        puVar13 = puVar9;
        if (puStack_58 < (uint64_t *)((int64_t)puVar8 - 7U)) {
          uVar29 = *puVar9;
          uVar11 = *puStack_58;
          bVar4 = (int64_t)uVar29 < (int64_t)uVar11;
          if (0x71bcdc25 < (param_5 ^ 0x77b9b874)) {
            bVar4 = uVar29 == uVar11;
          }
          if (bVar4) {
            lVar12 = 0xc;
LAB_7fffa5609f80:
            puVar25 = (uint64_t *)((int64_t)puStack_78 + lVar12);
            if (puVar25 < (uint64_t *)((int64_t)puVar8 - 7U)) {
              uVar29 = *(uint64_t *)(lVar14 + lVar12);
              uVar11 = *puVar25;
              if (uVar29 == uVar11) goto code_r0x7fffa5609f9d;
              uVar15 = uVar11 * uVar29;
              if (~(0xf0593f1fU >> (bVar5 & 0x1f) | -0xfa6c0e1 << 0x20 - (bVar5 & 0x1f)) <=
                  ~(param_5 + 0xd54217a4)) {
                uVar15 = uVar11 ^ uVar29;
              }
              uVar20 = 0;
              for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar29 = ((uint64_t)(uVar20 >> 3) + lVar12) - 4;
              goto LAB_7fffa560a14b;
            }
            puVar13 = (uint64_t *)(lVar14 + lVar12);
            goto LAB_7fffa560a0f3;
          }
          uVar20 = 0;
          for (uVar29 = uVar29 ^ uVar11; (uVar29 & 1) == 0;
              uVar29 = uVar29 >> 1 | 0x8000000000000000) {
            uVar20 = uVar20 + 1;
          }
          uVar29 = (uint64_t)(uVar20 >> 3);
        }
        else {
LAB_7fffa560a0f3:
          if ((puVar25 < (uint64_t *)((int64_t)puVar8 - 3U)) && ((int)*puVar13 == (int)*puVar25))
          {
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
            puVar13 = (uint64_t *)((int64_t)puVar13 + 4);
          }
          if ((puVar25 < (uint64_t *)((int64_t)puVar8 - 1U)) &&
             ((short)*puVar13 == (short)*puVar25)) {
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
            puVar13 = (uint64_t *)((int64_t)puVar13 + 2);
          }
          if (puVar25 < puVar8) {
            puVar25 = (uint64_t *)
                      ((int64_t)puVar25 + (uint64_t)((char)*puVar13 == (char)*puVar25));
          }
          uVar29 = (int64_t)puVar25 - (int64_t)puStack_58;
        }
LAB_7fffa560a14b:
        if ((char *)((int64_t)puVar9 + uVar29) == (char *)(lStack_98 + uStack_90)) {
          puVar25 = (uint64_t *)((int64_t)puStack_58 + uVar29);
          puVar9 = puVar25;
          puVar8 = puStack_80;
          if (puVar25 < puStack_60) {
            if (*puStack_80 == *puVar25) {
              lVar14 = 0;
              do {
                puVar9 = (uint64_t *)((int64_t)puStack_78 + 0xc + lVar14 + uVar29);
                if (puStack_60 <= puVar9) {
                  puVar8 = (uint64_t *)(lVar14 + lStack_a0);
                  goto LAB_7fffa560a296;
                }
                puVar8 = (uint64_t *)(lStack_a0 + lVar14);
                lVar14 = lVar14 + 8;
              } while (*puVar8 == *puVar9);
              uVar20 = 0;
              for (uVar11 = *puVar8 ^ *puVar9; (uVar11 & 1) == 0;
                  uVar11 = uVar11 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar15 = (uint64_t)(uVar20 >> 3) + lVar14;
            }
            else {
              uVar11 = 0;
              for (uVar15 = *puVar25 ^ *puStack_80; (uVar15 & 1) == 0;
                  uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                uVar11 = uVar11 + 1;
              }
              uVar15 = uVar11 >> 3 & 0x1fffffff;
              if (param_5 + 0xe99f9706 <=
                  (0x8e59dd24U >> (bVar5 & 0x1f) | -0x71a622dc << 0x20 - (bVar5 & 0x1f))) {
                uVar15 = uVar11 * 3;
              }
            }
          }
          else {
LAB_7fffa560a296:
            if ((puVar9 < puStack_50) && ((int)*puVar8 == (int)*puVar9)) {
              puVar9 = (uint64_t *)((int64_t)puVar9 + 4);
              puVar8 = (uint64_t *)((int64_t)puVar8 + 4);
            }
            if ((puVar9 < puStack_70) && ((short)*puVar8 == (short)*puVar9)) {
              puVar8 = (uint64_t *)((int64_t)puVar8 + 2);
              puVar9 = (uint64_t *)((int64_t)puVar9 + 2);
            }
            if (puVar9 < puStack_b0) {
              puVar9 = (uint64_t *)((int64_t)puVar9 + (uint64_t)((char)*puVar8 == (char)*puVar9))
              ;
            }
            uVar15 = (int64_t)puVar9 - (int64_t)puVar25;
          }
          uVar29 = uVar29 + uVar15;
        }
        uVar29 = uVar29 + 4;
LAB_7fffa560a2ce:
        if (uVar10 < uVar29) {
          *in_R11 = (uint64_t)((uVar18 + 3) - uVar27);
          uVar10 = uVar29;
          if ((uint64_t *)((int64_t)puStack_78 + uVar29) == puStack_b0) {
            return;
          }
        }
      }
      else {
        puVar9 = (uint64_t *)(lStack_88 + uVar29);
        if (*(int *)((uVar10 - 3) + (int64_t)puVar9) ==
            *(int *)((int64_t)puStack_78 + (uVar10 - 3))) {
          if (puStack_78 < puStack_60) {
            if (*puVar9 == *puStack_78) {
              puVar9 = (uint64_t *)(lStack_88 + 8 + uVar29);
              lVar14 = 0;
              puVar8 = puStack_78 + 1;
              do {
                if (puStack_60 <= puVar8) goto LAB_7fffa5609fd2;
                uVar29 = *puVar9;
                uVar11 = *puVar8;
                puVar8 = puVar8 + 1;
                lVar14 = lVar14 + 8;
                puVar9 = puVar9 + 1;
              } while (uVar29 == uVar11);
              uVar20 = 0;
              for (uVar11 = uVar11 ^ uVar29; (uVar11 & 1) == 0;
                  uVar11 = uVar11 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar29 = (uint64_t)(uVar20 >> 3) + lVar14;
            }
            else {
              uVar20 = 0;
              for (uVar29 = *puVar9 ^ *puStack_78; (uVar29 & 1) == 0;
                  uVar29 = uVar29 >> 1 | 0x8000000000000000) {
                uVar20 = uVar20 + 1;
              }
              uVar29 = (uint64_t)(uVar20 >> 3);
            }
          }
          else {
            puVar8 = puStack_78;
LAB_7fffa5609fd2:
            if ((puVar8 < puStack_50) && ((int)*puVar9 == (int)*puVar8)) {
              puVar9 = (uint64_t *)((int64_t)puVar9 + 4);
              puVar8 = (uint64_t *)((int64_t)puVar8 + 4);
            }
            if ((puVar8 < puStack_70) && ((short)*puVar9 == (short)*puVar8)) {
              puVar8 = (uint64_t *)((int64_t)puVar8 + 2);
              puVar9 = (uint64_t *)((int64_t)puVar9 + 2);
            }
            if (puVar8 < puStack_b0) {
              puVar8 = (uint64_t *)((int64_t)puVar8 + (uint64_t)((char)*puVar9 == (char)*puVar8))
              ;
            }
            uVar29 = (int64_t)puVar8 - (int64_t)puStack_78;
          }
          goto LAB_7fffa560a2ce;
        }
      }
LAB_7fffa5609ea0:
      lVar30 = lVar30 + 1;
    } while (lVar30 != lVar24);
  }
  return;
code_r0x7fffa5609f9d:
  lVar12 = lVar12 + 8;
  goto LAB_7fffa5609f80;
}


// ============================================================================
// Function : FUN_7fffa560a380  |  RVA: 0xe9a380  |  Size: 1 bytes
// Callers  : FUN_7fffa5465140@0xcf5140
// Callees  : none
// ============================================================================
void FUN_7fffa560a380(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa560a390  |  RVA: 0xe9a390  |  Size: 497 bytes
// Callers  : FUN_7fffa47de1c0@0x6e1c0
// Callees  : FUN_7fffa5697520@0xf27520, FUN_7fffa56a5f20@0xf35f20, FUN_7fffa5488850@0xd18850, _guard_check_icall@0xedc080, FUN_7fffa560b2b0@0xe9b2b0, thunk_FUN_7fffa55eeda0@0x913000, FUN_7fffa52c5b40@0xb55b40, FUN_7fffa5657040@0xee7040
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x7fffa560a4dd) */
/* WARNING: Removing unreachable block (ram,0x7fffa560a500) */
/* WARNING: Removing unreachable block (ram,0x7fffa560a504) */
/* WARNING: Removing unreachable block (ram,0x7fffa560a507) */
/* WARNING: Removing unreachable block (ram,0x7fffa560a50b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa560a390(uint64_t ***param_1,uint32_t *param_2,uint64_t param_3)

{
  int64_t *plVar1;
  code *pcVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint64_t ***pppuVar6;
  uint64_t ****ppppuVar7;
  uint8_t *puVar8;
  uint8_t *puVar9;
  uint8_t auStack_c8 [8];
  uint8_t auStack_c0 [24];
  uint64_t ****ppppuStack_a8;
  uint8_t uStack_a0;
  uint8_t auStack_98 [32];
  uint64_t ****ppppuStack_78;
  uint64_t uStack_70;
  uint64_t **ppuStack_68;
  uint64_t **ppuStack_60;
  uint64_t ****appppuStack_58 [2];
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = _DAT_7fffa4780040 ^ (uint64_t)auStack_c8;
  ppppuStack_a8 = (uint64_t ****)param_1;
  pppuVar6 = (uint64_t ***)FUN_7fffa5697520(auStack_98,param_3);
  plVar1 = *(int64_t **)(param_2 + 2);
  ppppuStack_a8 = (uint64_t ****)pppuVar6;
  if (pppuVar6[2] != (uint64_t **)0x0) {
    FUN_7fffa5657040(pppuVar6,&UNK_7fffa5873bcc,2);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,appppuStack_58,*param_2);
  ppppuVar7 = appppuStack_58;
  if (0xf < uStack_40) {
    ppppuVar7 = appppuStack_58[0];
  }
  FUN_7fffa5657040(pppuVar6,ppppuVar7,uStack_48);
  FUN_7fffa52c5b40(appppuStack_58);
  ppppuStack_78 = (uint64_t ****)0x0;
  uStack_70 = 0;
  ppuStack_68 = (uint64_t **)0x0;
  ppuStack_60 = (uint64_t **)0x0;
  if (pppuVar6[3] < (uint64_t **)0x10) {
    FUN_7fffa56a5f20(&ppppuStack_78,pppuVar6,(int64_t)pppuVar6[2] + 1);
  }
  else {
    ppppuStack_78 = (uint64_t ****)*pppuVar6;
  }
  ppuStack_60 = pppuVar6[3];
  ppuStack_68 = pppuVar6[2];
  pppuVar6[3] = (uint64_t **)0xf;
  *(uint8_t *)pppuVar6 = 0;
  pppuVar6[2] = (uint64_t **)0x0;
  pppuVar6[3] = (uint64_t **)0xf;
  *(uint8_t *)pppuVar6 = 0;
  ppppuStack_a8 = &ppppuStack_78;
  if ((uint64_t **)0xf < ppuStack_60) {
    ppppuStack_a8 = ppppuStack_78;
  }
  *param_1 = (uint64_t **)&PTR_FUN_7fffa56f3928;
  param_1[1] = (uint64_t **)0x0;
  param_1[2] = (uint64_t **)0x0;
  uStack_a0 = 1;
  FUN_7fffa560b2b0(&ppppuStack_a8);
  puVar9 = auStack_c8;
  *param_1 = (uint64_t **)&PTR_FUN_7fffa56f52d8;
  if (ppuStack_60 < (uint64_t **)0x10) goto LAB_7fffa560a54a;
  puVar8 = auStack_c8;
  puVar9 = auStack_c8;
  ppppuVar7 = ppppuStack_78;
  if ((int64_t)ppuStack_60 + 1U < 0x1000) {
LAB_7fffa560a542:
    puVar9 = puVar8;
  }
  else {
    ppppuVar7 = (uint64_t ****)ppppuStack_78[-1];
    if (0x1f < (uint64_t)((int64_t)ppppuStack_78 + (-8 - (int64_t)ppppuVar7))) {
      pcVar2 = (code *)swi(0x29);
      ppppuVar7 = (uint64_t ****)(*pcVar2)(5);
      puVar8 = auStack_c0;
      goto LAB_7fffa560a542;
    }
  }
  *(uint64_t *)(puVar9 + -8) = 0x7fffa560a54a;
  thunk_FUN_7fffa55eeda0(ppppuVar7);
LAB_7fffa560a54a:
  *param_1 = (uint64_t **)std::_System_error::vftable;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(uint32_t *)(param_1 + 3) = *param_2;
  *(uint32_t *)((int64_t)param_1 + 0x1c) = uVar3;
  *(uint32_t *)(param_1 + 4) = uVar4;
  *(uint32_t *)((int64_t)param_1 + 0x24) = uVar5;
  *(uint64_t *)(puVar9 + -8) = 0x7fffa560a56a;
  FUN_7fffa5488850(uStack_38 ^ (uint64_t)puVar9);
  return;
}


// ============================================================================
// Function : FUN_7fffa560a590  |  RVA: 0xe9a590  |  Size: 686 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa560a7fd) */

void FUN_7fffa560a590(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  bRam00007fffa47bcc41 = '\0';
  uRam00007fffa47bcc7a = 0;
  uRam00007fffa47bcc82 = 0;
  uRam00007fffa47bcc6a = 0;
  uRam00007fffa47bcc72 = 0;
  uRam00007fffa47bcc5a = 0;
  uRam00007fffa47bcc62 = 0;
  uRam00007fffa47bcc4a = 0;
  uRam00007fffa47bcc52 = 0;
  uRam00007fffa47bcc91 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x926f60624d1afcf + 0xb;
  uVar5 = 0;
  while( true ) {
    lVar2 = lVar2 * 0x926f60624d1afcf + 0xb;
    lVar3 = lVar2 * 0x926f60624d1afcf + 0xb;
    lVar4 = lVar3 * 0x926f60624d1afcf + 0xb;
    *(char *)(uVar5 + 0x7fffa47bcc3b) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(uVar5 + 0x7fffa47bcc3d) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)((uVar5 | 1) + 0x7fffa47bcc3b) = (char)((uint64_t)lVar3 >> 0x20);
    if (uVar5 == 100) break;
    lVar2 = lVar4 * 0x926f60624d1afcf + 0xb;
    *(char *)((uVar5 | 3) + 0x7fffa47bcc3b) = (char)((uint64_t)lVar2 >> 0x20);
    uVar5 = uVar5 + 4;
  }
  bRam00007fffa47bcc41 = bRam00007fffa47bcc41 + 1 & 7;
  *(uint64_t *)((uint64_t)bRam00007fffa47bcc41 * 8 + 0x7fffa47bcc4a) = 0;
  return;
}


// ============================================================================
// Function : FUN_7fffa560a840  |  RVA: 0xe9a840  |  Size: 1389 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa560ab37) */
/* WARNING: Removing unreachable block (ram,0x7fffa560acca) */

void FUN_7fffa560a840(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint8_t bVar10;
  
  bRam00007fffa4786148 = 0;
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[10] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0xb] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0xc] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0xd] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0xe] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0xf] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x10] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x11] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x12] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x13] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x14] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x15] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x16] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x17] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x18] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x19] = '\0';
  uRam00007fffa4786166 = 0;
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[2] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[3] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[4] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[5] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[6] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[7] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[8] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[9] = '\0';
  uRam00007fffa4786156 = 0;
  uRam00007fffa478615e = 0;
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x1a] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x1b] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x1c] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x1d] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x1e] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x1f] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x20] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x21] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x2f] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x30] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x31] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x32] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x33] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x34] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x35] = '\0';
  s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x36] = '\0';
  uVar1 = rdtsc();
  lVar8 = (CONCAT44(0xffffffff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 |
          CONCAT44(0xffffffff,(int)uVar1)) * 0x8cfe3fd6c0a79ee;
  lVar7 = 3;
  while( true ) {
    lVar8 = lVar8 * 0x8cfe3fd6c0a79ee + 0x8cfe3fd6c0a79ee;
    *(char *)(lVar7 + 0x7fffa4786144) = (char)((uint64_t)lVar8 >> 0x20);
    lVar8 = lVar8 * 0x8cfe3fd6c0a79ee + 0x8cfe3fd6c0a79ee;
    *(char *)(lVar7 + 0x7fffa4786145) = (char)((uint64_t)lVar8 >> 0x20);
    lVar9 = lVar8 * 0x8cfe3fd6c0a79ee + 0x8cfe3fd6c0a79ee;
    lVar8 = lVar9 * 0x8cfe3fd6c0a79ee + 0x8cfe3fd6c0a79ee;
    *(char *)(lVar7 + 0x7fffa4786147) = (char)((uint64_t)lVar8 >> 0x20);
    *(char *)(lVar7 + 0x7fffa4786146) = (char)((uint64_t)lVar9 >> 0x20);
    if (lVar7 == 0x5b) break;
    lVar7 = lVar7 + 4;
  }
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa4786148 * 0x24924925 + 0x24924925) * 7;
  lVar7 = (uVar2 >> 0x20) * 8;
  bVar10 = ~s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x2f];
  cVar5 = s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x32];
  cVar3 = s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x30];
  cVar6 = s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x33];
  cVar4 = s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x31];
  *(uint8_t *)(lVar7 + 0x7fffa478615c) =
       ~s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x35] << 5 |
       (uint8_t)~s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x35] >> 3;
  *(uint8_t *)(lVar7 + 0x7fffa4786156) = bVar10 << 5 | bVar10 >> 3;
  *(uint8_t *)(lVar7 + 0x7fffa4786158) = ~cVar4 << 5 | (uint8_t)~cVar4 >> 3;
  bVar10 = ~s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x36];
  *(uint8_t *)(lVar7 + 0x7fffa478615a) = ~cVar6 << 5 | (uint8_t)~cVar6 >> 3;
  cVar4 = s_>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>_7fffa478616c[0x34];
  *(uint8_t *)(lVar7 + 0x7fffa4786159) = ~cVar5 << 5 | (uint8_t)~cVar5 >> 3;
  *(uint8_t *)(lVar7 + 0x7fffa478615d) = bVar10 << 5 | bVar10 >> 3;
  *(uint8_t *)(lVar7 + 0x7fffa478615b) = ~cVar4 << 5 | (uint8_t)~cVar4 >> 3;
  *(uint8_t *)(lVar7 + 0x7fffa4786157) = ~cVar3 << 5 | (uint8_t)~cVar3 >> 3;
  bRam00007fffa4786148 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa560add0  |  RVA: 0xe9add0  |  Size: 1223 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa560b27e) */

void FUN_7fffa560add0(uint64_t param_1,uint64_t param_2)

{
  uint16_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint64_t unaff_R15;
  int64_t lVar11;
  
  uVar2 = CONCAT62((int6)((uint64_t)param_2 >> 0x10),0x97bf);
  lVar11 = (~uVar2 & unaff_R15) + (~unaff_R15 | uVar2);
  uVar4 = lVar11 * 0x89ae747;
  uVar9 = (uint32_t)uVar4;
  uVar8 = (int64_t)(int)(uVar9 + 0x899f406) + 0x7fffa5881ba1;
  bVar3 = (uint8_t)uVar4;
  uVar1 = (uint16_t)uVar4;
  uVar2 = (uint64_t)("`local vftable\'" + (int64_t)(short)((uVar1 ^ 0x97bf) * 0x27a1) + 2) >> 3 ^
          uVar8;
  uVar5 = uVar2 >> 6 ^ uVar2;
  uVar5 = uVar5 >> 0xc ^ uVar5;
  uVar5 = uVar5 >> 0x30 ^ uVar5 >> 0x18 ^ uVar5;
  uVar8 = uVar5 << 3 | uVar8 >> 0x3d;
  uVar6 = uVar5 << 5 | uVar2 >> 0x3b;
  uVar2 = uVar6 ^ uVar8;
  if ((uint64_t)(int64_t)(int)((uVar9 | 1) * 0x2aa06ec3) <= (uint64_t)(uVar9 ^ 0xde545ecc)) {
    uVar2 = uVar6 & uVar8;
  }
  uVar2 = uVar2 ^ uVar5;
  uVar2 = (uVar2 << 10 | uVar2 >> 0x36) ^ (uVar2 << 6 | uVar2 >> 0x3a) ^ uVar2;
  uVar2 = (uVar2 << 0xc | uVar2 >> 0x34) ^ (uVar2 << 0x14 | uVar2 >> 0x2c) ^ uVar2;
  uVar2 = (uVar2 << 0x18 | uVar2 >> 0x28) ^ (uVar2 << 0x28 | uVar2 >> 0x18) ^ uVar2;
  uVar2 = (uVar2 << 0x30 | uVar2 >> 0x10) ^ (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar2;
  uVar2 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
          (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
          (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  uVar2 = uVar2 >> 0x13 ^ uVar2;
  uVar2 = uVar2 >> 0x26 ^ uVar2;
  uVar2 = uVar2 * 0x6087d5c71b3bc3e5 ^ (lVar11 * -0x89ae747 + 0x43eae38d14337e1) * uVar2;
  uVar2 = uVar2 << 6 ^ uVar2;
  uVar2 = uVar2 << 0xc ^ uVar2;
  lVar11 = (int64_t)(int)(uVar9 + 0x89a20af);
  *(uint64_t *)(lVar11 + 0x7fffa4791d10) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa4791d18) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa4791d00) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa4791d08) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa4791cf0) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa4791cf8) = 0;
  *(uint64_t *)(lVar11 + 0x7fffa4791d20) = 0;
  *(uint64_t *)
   ((int64_t)(short)(0x89bdU >> (bVar3 & 0xf) | -0x7643 << 0x10 - (bVar3 & 0xf)) + 0x7fffa478778c)
       = uVar2 << 0x18 ^ uVar2 << 0x30 ^ uVar2;
  uVar10 = uRam00007fffa4781500 >> 0x38 | (uRam00007fffa4781500 & 0xff000000000000) >> 0x28 |
           (uRam00007fffa4781500 & 0xff0000000000) >> 0x18 |
           (uRam00007fffa4781500 & 0xff00000000) >> 8 | (uRam00007fffa4781500 & 0xff000000) << 8 |
           (uRam00007fffa4781500 & 0xff0000) << 0x18 | (uRam00007fffa4781500 & 0xff00) << 0x28 |
           uRam00007fffa4781500 << 0x38;
  uVar9 = (uVar9 ^ 0x4d059ab6) + 0xb75d89d9;
  uVar8 = uRam00007fffa4781500 & 0xff;
  uVar7 = uVar4 | 1;
  uVar6 = uVar7 * 0x152a52240b600000 | uVar7 * 0x5faa68a95291205b >> 0x2b;
  uVar2 = (int64_t)(&UNK_7fffa5859298 + (short)(uVar1 + 0x6f07)) * 0x80000000;
  uVar5 = (uint64_t)(&UNK_7fffa58544b1 + (short)~((uVar1 | 1) * 0x2118)) >> 0x21;
  uVar2 = ((uint64_t)(&UNK_7fffa5859298 + (short)(uVar1 + 0x6f07)) & 0x1ffffffff) >> 0x19 |
          (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
          (uVar2 & 0xff00000000) >> 8 | ((uVar2 | uVar5) & 0xff000000) << 8 |
          (uVar5 & 0xff0000) << 0x18;
  *(uint64_t *)
   ((int64_t)(short)(-0x3ad << (bVar3 & 0xf) | 0xfc53U >> 0x10 - (bVar3 & 0xf)) + 0x7fffa478ae68) =
       uVar2 * 0x28782ab755c80000 |
       (uVar2 | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38) * -0x73f3daf0faa91547 >> 0x2d;
  uVar2 = (uint64_t)(uVar9 * 0x10000 | uVar9 >> 0x10) + 0xa6dbe19ee825ff0e;
  uRam00007fffa4785658 =
       (uVar8 >> 6 ^ uVar10 >> 0x1f ^ uVar10) * -0x5b6c229af02e57fd + 0x7d50c78c12d935d9 ^
       0xabaa4a2a85f9fcdb;
  if ((uVar6 == uVar2) &&
     (uVar4 = CONCAT62((int6)(uVar4 >> 0x10),CONCAT11(0xfe,bVar3)), uVar6 <= uVar2)) {
    FUN_7fffa52c3bf0();
    return;
  }
  uVar2 = uRam00007fffa4781570 ^ 0xbea9b462300820e2;
  bVar3 = (uint8_t)uVar4;
  *(uint64_t *)
   ((int64_t)(int)(0x85fffe28U >> (bVar3 & 0x1f) | -0x7a0001d8 << 0x20 - (bVar3 & 0x1f)) +
   0x7fffa479422e) =
       (uVar7 * 0x1bac8bbd4ef8b180 | (uint64_t)((int64_t)(uVar7 * 0xdd645dea77c58c0) < 0)) ^
       0x7fc2f663;
  *(uint64_t *)((int64_t)(short)((uVar1 | 1) * 0x7085) + 0x7fffa4788e4b) = uVar2;
  *(uint64_t *)((int64_t)(short)((0x6fdf - (short)uVar4) * 0x637b) + 0x7fffa478c536) =
       ((uVar4 ^ 0xc1003936c2ddcc93) << 0x12 | (uVar4 ^ 0xc1003936c2ddcc93) >> 0x2e) -
       (*(int64_t *)
         (s___AVtype_info___7fffa47817c8 +
         (int64_t)(int)(-0x33d01 << (bVar3 & 0x1f) | 0xfffcc2ffU >> 0x20 - (bVar3 & 0x1f)) + 0xb) -
        1U << 0x29 |
       *(int64_t *)
        (s___AVtype_info___7fffa47817c8 +
        (int64_t)(int)(-0x33d01 << (bVar3 & 0x1f) | 0xfffcc2ffU >> 0x20 - (bVar3 & 0x1f)) + 0xb) -
       1U >> 0x17);
  *(uint64_t *)
   ((int64_t)(int)(-0x436301 << (bVar3 & 0x1f) | 0xffbc9cffU >> 0x20 - (bVar3 & 0x1f)) +
   0x7fffa478dd4f) = (uVar4 ^ 0xa9e64cf8dbfd4a14) << 0x37 | (uVar4 ^ 0xa9e64cf8dbfd4a14) >> 9;
  *(uint64_t *)((int64_t)(int)((uint32_t)uVar4 ^ 0x89a797a) + 0x7fffa478f4bd) =
       0x80d26e0bdc716467U >> (bVar3 & 0x3f) | -0x7f2d91f4238e9b99 << 0x40 - (bVar3 & 0x3f);
  return;
}


// ============================================================================
// Function : FUN_7fffa560b2b0  |  RVA: 0xe9b2b0  |  Size: 30 bytes
// Callers  : FUN_7fffa4f5c6f0@0x7ec6f0, FUN_7fffa565cc60@0xeecc60, FUN_7fffa52d3b70@0xb63b70, FUN_7fffa560a390@0xe9a390, FUN_7fffa54e5780@0xd75780, FUN_7fffa54000e0@0xc900e0, FUN_7fffa5287f60@0xb17f60, FUN_7fffa50cadb0@0x95adb0
// Callees  : none
// ============================================================================
void FUN_7fffa560b2b0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(uint8_t *)(param_2 + 1) = 0;
    return;
  }
  lVar2 = -1;
  do {
    lVar1 = lVar2;
    lVar2 = lVar1 + 1;
  } while (*(char *)(*param_1 + 1 + lVar1) != '\0');
  lVar2 = FUN_7fffa5215380(lVar1 + 2);
  if (lVar2 != 0) {
    FUN_7fffa52d3bb0(lVar2,lVar1 + 2,*param_1);
    *param_2 = lVar2;
    *(uint8_t *)(param_2 + 1) = 1;
  }
  FUN_7fffa52c3bf0(0);
  return;
}


// ============================================================================
// Function : FUN_7fffa560b2ce  |  RVA: 0xe9b2ce  |  Size: 98 bytes
// Callers  : none
// Callees  : FUN_7fffa5215380@0xaa5380, FUN_7fffa52d3bb0@0xb63bb0, FUN_7fffa52c3bf0@0xb53bf0
// ============================================================================
void FUN_7fffa560b2ce(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *unaff_RBX;
  int64_t *unaff_RDI;
  
  lVar2 = -1;
  do {
    lVar1 = lVar2;
    lVar2 = lVar1 + 1;
  } while (*(char *)(param_3 + 1 + lVar1) != '\0');
  lVar2 = FUN_7fffa5215380(lVar1 + 2);
  if (lVar2 != 0) {
    FUN_7fffa52d3bb0(lVar2,lVar1 + 2,*unaff_RBX);
    *unaff_RDI = lVar2;
    *(uint8_t *)(unaff_RDI + 1) = 1;
  }
  FUN_7fffa52c3bf0(0);
  return;
}


// ============================================================================
// Function : FUN_7fffa560b330  |  RVA: 0xe9b330  |  Size: 21 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa560b330(uint64_t *param_1,uint64_t *param_2)

{
  *param_2 = *param_1;
  *(uint8_t *)(param_2 + 1) = 0;
  return;
}

