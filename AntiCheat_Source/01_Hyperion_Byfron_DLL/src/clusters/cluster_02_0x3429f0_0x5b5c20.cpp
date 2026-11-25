// Subsystem: Internal Routines Cluster 02 (0x3429f0 .. 0x5b5c20)
// Functions: 100
#include "../../include/module_declarations.hpp"

// ============================================================================
// Function : FUN_7fffa4ab29f0  |  RVA: 0x3429f0  |  Size: 33128 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4ab2c2f) */
/* WARNING: Removing unreachable block (ram,0x7fffa4ab2caa) */

int64_t FUN_7fffa4ab29f0(int64_t param_1,int64_t *param_2,uint32_t *param_3,uint64_t *param_4,
                         int64_t param_5)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint32_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint8_t uVar6;
  char cVar7;
  char cVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t uVar14;
  uint8_t bVar15;
  uint8_t bVar16;
  uint8_t bVar17;
  uint32_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int iVar21;
  uint64_t uVar22;
  uint32_t uVar23;
  uint64_t uVar24;
  uint64_t *puVar25;
  uint64_t uVar26;
  uint64_t *puVar27;
  uint64_t *puVar28;
  uint32_t uVar29;
  uint64_t *puVar30;
  uint64_t *puVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  uint32_t uVar34;
  uint32_t uVar35;
  uint64_t *puVar36;
  uint32_t uVar37;
  uint32_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t *puVar42;
  int64_t lVar43;
  uint16_t uVar44;
  int iVar45;
  uint32_t uVar46;
  uint32_t uVar47;
  uint32_t uVar48;
  uint8_t uVar49;
  uint32_t uVar50;
  int64_t lVar51;
  uint64_t *puVar52;
  uint64_t uVar53;
  uint64_t *puVar54;
  uint64_t uVar55;
  uint64_t uVar56;
  uint64_t *puVar57;
  uint64_t *puVar58;
  uint32_t uVar59;
  uint64_t uVar60;
  uint64_t uVar61;
  uint64_t *puVar62;
  int64_t lVar63;
  uint64_t *puVar64;
  uint64_t uVar65;
  uint32_t uVar66;
  uint64_t uVar67;
  uint64_t *puVar68;
  int iVar69;
  bool bVar70;
  uint64_t uVar71;
  uint64_t uStack_1d0;
  uint64_t uStack_1b0;
  uint64_t *puStack_d8;
  uint64_t uStack_b0;
  uint64_t uStack_88;
  uint64_t *puStack_78;
  uint32_t uStack_70;
  
  lVar9 = *(int64_t *)(param_1 + 8);
  iVar13 = (int)lVar9;
  uVar18 = (uint32_t)param_4;
  uVar46 = (uint32_t)param_5;
  iVar45 = (uVar18 - iVar13) + uVar46;
  uVar50 = 1 << (*(uint8_t *)(param_1 + 0x100) & 0x1f);
  uVar37 = *(uint32_t *)(param_1 + 0x110);
  uVar48 = 4;
  if (uVar37 - 5 < 3) {
    uVar48 = uVar37;
  }
  uVar38 = *(uint32_t *)(param_1 + 0x1c);
  iVar69 = *(int *)(param_1 + 0x28);
  uVar47 = iVar45 - uVar50;
  if (iVar45 - uVar38 <= uVar50) {
    uVar47 = uVar38;
  }
  if (iVar69 != 0) {
    uVar47 = uVar38;
  }
  uVar60 = ~(uint64_t)uVar50;
  uVar38 = *(uint32_t *)(param_1 + 0x18);
  uVar19 = (uint64_t)uVar38;
  uVar14 = (uint64_t)uVar47;
  if (uVar47 < uVar38) {
    uVar14 = (uint64_t)uVar38;
  }
  uVar61 = uVar60 ^ uVar19;
  uVar66 = uVar38 ^ uVar50;
  uVar39 = ~uVar19 & (uint64_t)uVar50;
  uVar34 = *(uint32_t *)(param_1 + 0x114);
  uVar67 = (uint64_t)(uVar34 + 1 + (uint32_t)(uVar34 == 0));
  uVar60 = ((uint64_t)uVar66 & 0xffffffffb41f347e) * -0x6f48417e +
           (uVar39 & 0xffffffffb41f347e) * 0x2db5d24e +
           (uVar61 & 0xffffffffb41f347e) * -0xb7925c49 +
           (uint64_t)(uVar66 & 0x4be0cb81) * -0x89dc89fb + (uVar61 | 0x4be0cb81) * -0x66601d08 +
           (uVar39 & 0x4be0cb81) * -0x2db5d24e + (uVar61 & 0x4be0cb81) * 0x24cdadd8 +
           ((uint64_t)uVar66 ^ 0xffffffffb41f347e) * 0xaeaa37d3 +
           ((uVar19 | uVar60) ^ 0x4be0cb81) * 0x2db5d24e;
  puVar2 = (uint64_t *)((int64_t)param_4 + param_5);
  uVar19 = *(uint64_t *)(param_1 + 0x70);
  iVar45 = *(int *)(param_1 + 0x108);
  puVar36 = (uint64_t *)((int64_t)param_4 + param_5 + -8);
  uVar66 = (uint32_t)uVar60;
  bVar15 = (uint8_t)uVar60;
  uVar44 = (uint16_t)uVar60;
  cVar7 = (char)iVar45;
  if (uVar47 < uVar38) {
    uVar37 = *param_3;
    uVar46 = param_3[1];
    uVar34 = (uVar18 - iVar13) - uVar47;
    uVar50 = uVar46;
    uVar18 = 0;
    if (uVar46 < uVar34) {
      uVar50 = 0;
      uVar18 = uVar46;
    }
    uVar46 = 0;
    if (uVar37 < uVar34) {
      uVar46 = uVar37;
    }
    puVar62 = (uint64_t *)((int64_t)param_4 + uVar67 + 1);
    if (uVar37 < uVar34) {
      uVar37 = 0;
    }
    if (puVar62 < puVar36) {
      lVar63 = *(int64_t *)(param_1 + 0x10);
      puVar52 = (uint64_t *)(uVar14 + lVar9);
      puVar30 = (uint64_t *)(lVar63 + uVar14);
      bVar17 = 0x20 - cVar7;
      bVar16 = 0x40 - cVar7;
      puVar42 = (uint64_t *)((int64_t)puVar2 - 7);
      puVar58 = puVar2 + -4;
      uVar34 = uVar46;
LAB_7fffa4ab39df:
      if ((int)uVar48 < 6) {
        if ((int)uVar48 < (int)(uint32_t)(uint16_t)(5 << (bVar15 & 0xf) | 5U >> 0x10 - (bVar15 & 0xf))) {
          uVar39 = (uint64_t)
                   ((uint32_t)(*(int *)((int64_t)param_4 + 1) * -0x61c8864f) >> (bVar17 & 0x1f));
          uVar61 = (uint64_t)((uint32_t)*param_4 * -0x61c8864f >> (bVar17 & 0x1f));
          goto LAB_7fffa4ab3acb;
        }
        uVar61 = *param_4 * -0x30e4432345000000;
        uVar39 = *(int64_t *)((int64_t)param_4 + 1) * -0x30e4432345000000;
      }
      else {
        if (uVar48 == 6) {
          uVar61 = *param_4 * -0x30e4432340650000 >> (bVar16 & 0x3f);
          uVar39 = (uint64_t)(*(int64_t *)((int64_t)param_4 + 1) * -0x30e4432340650000) >>
                   (bVar16 & 0x3f);
          goto LAB_7fffa4ab3acb;
        }
        uVar39 = (uint64_t)(uVar48 | 1) * *(int64_t *)((int64_t)param_4 + 1) *
                 ~(uVar60 + 0x2b8e52bba30ccbcf);
        uVar61 = *param_4 * -0x30e44323405a9d00;
      }
      uVar39 = uVar39 >> (bVar16 & 0x3f);
      uVar61 = uVar61 >> (bVar16 & 0x3f);
LAB_7fffa4ab3acb:
      puVar57 = param_4 + 0x10;
      uVar35 = *(uint32_t *)(uVar19 + uVar61 * 4);
      uStack_70 = (uint32_t)uVar14;
      lVar43 = lVar9;
      if (uVar35 < uStack_70) {
        lVar43 = lVar63;
      }
      puVar25 = (uint64_t *)((int64_t)param_4 + uVar67);
      puVar28 = param_4;
      puStack_d8 = (uint64_t *)((int64_t)param_4 + 1);
      uVar40 = uVar67;
      do {
        puVar31 = puVar25;
        puVar27 = puVar62;
        uVar53 = (uint64_t)uVar35;
        uVar29 = ((int)puVar31 - iVar13) - uVar34;
        lVar51 = lVar9;
        if (uVar29 < uStack_70) {
          lVar51 = lVar63;
        }
        if ((uStack_70 - uVar29 < 4) || (uVar34 == 0)) {
          uVar23 = (uint32_t)*puVar31 ^ 1;
        }
        else {
          uVar23 = *(uint32_t *)(lVar51 + (uint64_t)uVar29);
        }
        uVar59 = (int)puVar28 - iVar13;
        *(uint32_t *)(uVar19 + uVar61 * 4) = uVar59;
        puVar62 = puVar2;
        uVar46 = uVar34;
        if ((uint32_t)*puVar31 == uVar23) {
          if (uVar29 < uStack_70) {
            puVar62 = puVar30;
          }
          cVar7 = *(char *)((int64_t)puVar31 - 1);
          cVar8 = *(char *)(lVar51 + -1 + (uint64_t)uVar29);
          bVar70 = cVar7 != cVar8 && cVar8 <= cVar7;
          if (0x8b8d9709 - uVar66 <= (uVar66 ^ 0xba2ac0c3)) {
            bVar70 = cVar7 == cVar8;
          }
          uVar61 = (uint64_t)bVar70;
          puVar28 = (uint64_t *)((int64_t)puVar31 - uVar61);
          puVar57 = (uint64_t *)((lVar51 + (uint64_t)uVar29) - uVar61);
          uVar61 = uVar61 | 4;
          iVar45 = 1;
          goto LAB_7fffa4ab402b;
        }
        if ((uVar47 <= uVar35) && ((uint32_t)*puVar28 == *(uint32_t *)(lVar43 + uVar53)))
        goto LAB_7fffa4ab3f62;
        uVar35 = *(uint32_t *)(uVar19 + uVar39 * 4);
        lVar43 = lVar9;
        if (uVar35 < uStack_70) {
          lVar43 = lVar63;
        }
        if ((int)uVar48 < 6) {
          if ((uVar48 * -0x68ca547f >> 1 | (uint32_t)((uVar48 * -0x68ca547f & 1) != 0) << 0x1f) ==
              0xfa062cc2) {
            lVar51 = -0x30e4432345000000;
            goto LAB_7fffa4ab3d21;
          }
          uVar61 = (uint64_t)((uint32_t)*puVar31 * -0x61c8864f >> (bVar17 & 0x1f));
        }
        else {
          if (uVar48 == 6) {
            uVar61 = *puVar31 ^ 0xcf1bbcdcbf9b0000;
            if (((uVar66 ^ 0xf32375c) << 0x17 | (uVar66 ^ 0xf32375c) >> 9) == 0x3627502c) {
              uVar61 = *puVar31 * -0x30e4432340650000;
            }
          }
          else {
            lVar51 = -0x30e44323405a9d00;
LAB_7fffa4ab3d21:
            uVar61 = lVar51 * *puVar31;
          }
          uVar61 = uVar61 >> (bVar16 & 0x3f);
        }
        uVar59 = (int)puStack_d8 - iVar13;
        *(uint32_t *)(uVar19 + uVar39 * 4) = uVar59;
        if (uVar47 <= uVar35) {
          uVar53 = (uint64_t)uVar35;
          if (((0x7b3e0245 - uVar66) * 0x40000000 | 0x7b3e0245 - uVar66 >> 2) !=
              ((0x72e609e9 - uVar66) * 0x400 | 0x72e609e9 - uVar66 >> 0x16)) {
            uVar53 = (int64_t)(int)uVar35;
          }
          if ((uint32_t)*puStack_d8 == *(uint32_t *)(lVar43 + uVar53)) goto LAB_7fffa4ab3f5c;
        }
        uVar35 = *(uint32_t *)(uVar19 + uVar61 * 4);
        lVar43 = lVar9;
        if (uVar35 < uStack_70) {
          lVar43 = lVar63;
        }
        if ((int)uVar48 < 6) {
          uVar29 = (uVar48 - (uVar66 + 0x28f2af51)) + 0xbc311301;
          if ((uVar29 * 0x20000000 | uVar29 >> 3) == 0xaa357e90) {
            uVar39 = *puVar27 * -0x30e4432345000000;
            goto LAB_7fffa4ab3e85;
          }
          uVar39 = (uint64_t)((uint32_t)*puVar27 * -0x61c8864f >> (bVar17 & 0x1f));
        }
        else {
          if ((int)uVar48 < 7) {
            uVar39 = *puVar27 * -0x30e4432340650000;
          }
          else {
            uVar39 = *puVar27 *
                     (0x6300cf1bbcdcbfa5U >> (bVar15 & 0x3f) |
                     0x6300cf1bbcdcbfa5 << 0x40 - (bVar15 & 0x3f));
          }
LAB_7fffa4ab3e85:
          uVar39 = uVar39 >> (bVar16 & 0x3f);
        }
        if ((uint64_t *)((int64_t)puVar31 + uVar40) < puVar57) {
          uVar53 = uVar40;
        }
        else {
          puVar57 = puVar57 + 0x10;
          uVar53 = uVar40 + 1;
        }
        puVar62 = (uint64_t *)(uVar40 + (int64_t)puVar27);
        puVar25 = (uint64_t *)((int64_t)puVar31 + uVar40);
        puVar28 = puVar31;
        puStack_d8 = puVar27;
        uVar40 = uVar53;
        if (0xcdf6a562 - (uVar66 + 0x3662f2f1) < (-0x5d10515b - uVar66) * 0x7b286573 + 0x350af120 ==
            puVar36 <= puVar62) break;
      } while( true );
    }
LAB_7fffa4ab61bf:
    uVar48 = uVar46;
    if (uVar46 == 0) {
      uVar48 = uVar37;
    }
    *param_3 = uVar48;
    uVar48 = uVar50;
    if (uVar46 != 0) {
      uVar48 = uVar37;
    }
    if (uVar37 == 0) {
      uVar48 = uVar50;
    }
    if (uVar18 != 0) {
      uVar48 = uVar18;
    }
    puVar62 = param_4;
    if (uVar66 + 0x9fdc1649 <= (uVar66 | 1) * -0x56488b72) {
      uVar48 = uVar18;
    }
    goto LAB_7fffa4abac45;
  }
  if (uVar34 < 2) {
    uVar18 = uVar46 ^ uVar18;
    if ((int)(0xfa5482f8U >> (bVar15 & 0x1f) | -0x5ab7d08 << 0x20 - (bVar15 & 0x1f)) <
        (int)(uVar66 + 0x4d25d234)) {
      uVar18 = (uint32_t)puVar2;
    }
    uVar48 = (uVar18 - iVar13) - uVar50;
    if ((uVar18 - iVar13) - uVar38 <= uVar50) {
      uVar48 = uVar38;
    }
    if (iVar69 != 0) {
      uVar48 = uVar38;
    }
    puVar42 = (uint64_t *)((uint64_t)uVar48 + lVar9);
    puVar62 = (uint64_t *)((int64_t)param_4 + (uint64_t)(param_4 == puVar42));
    iVar21 = (int)puVar62 - iVar13;
    uVar18 = iVar21 - uVar50;
    if (iVar21 - uVar38 <= uVar50) {
      uVar18 = uVar38;
    }
    uVar46 = *param_3;
    if (iVar69 != 0) {
      uVar18 = uVar38;
    }
    uVar50 = param_3[1];
    uVar18 = iVar21 - uVar18;
    uStack_1b0._0_4_ = uVar50;
    if (uVar18 < uVar50) {
      uStack_1b0._0_4_ = 0;
    }
    uVar38 = 0;
    if (uVar46 <= uVar18) {
      uVar38 = uVar46;
    }
    puVar52 = (uint64_t *)((int64_t)param_4 + (uint64_t)(param_4 == puVar42) + 3);
    if ((int)uVar37 < 6) {
      if (uVar37 == 5) {
        if (puVar52 < puVar36) {
          bVar17 = 0x40 - cVar7;
          puVar30 = puVar2 + -4;
          puVar58 = (uint64_t *)((int64_t)puVar2 - 7);
          do {
            puVar57 = puVar62 + 0x10;
            uVar14 = *(uint64_t *)((int64_t)puVar62 + 1);
            uVar39 = *puVar62 * -0x30e4432345000000 >> (bVar17 & 0x3f);
            lVar63 = -(uint64_t)uVar38;
            uVar37 = *(uint32_t *)(uVar19 + uVar39 * 4);
            puVar25 = (uint64_t *)((int64_t)puVar62 + 2);
            uVar60 = 2;
            puVar28 = (uint64_t *)((int64_t)puVar62 + 1);
            while( true ) {
              puVar31 = puVar52;
              puVar27 = puVar25;
              uVar14 = uVar14 * -0x30e4432345000000 >> (bVar17 & 0x3f);
              uVar34 = (int)puVar62 - iVar13;
              uVar47 = *(uint32_t *)((int64_t)puVar27 + lVar63);
              *(uint32_t *)(uVar19 + uVar39 * 4) = uVar34;
              if ((uVar38 != 0) && ((uint32_t)*puVar27 == uVar47)) {
                uVar60 = (uint64_t)
                         (*(char *)((int64_t)puVar27 - 1) ==
                         *(char *)((int64_t)puVar27 + lVar63 + -1));
                lVar43 = uVar60 + 4;
                puVar62 = (uint64_t *)((int64_t)puVar27 - uVar60);
                puVar27 = (uint64_t *)((int64_t)puVar27 + (lVar63 - uVar60));
                *(int *)(uVar19 + uVar14 * 4) = (int)puVar28 - iVar13;
                iVar45 = 1;
                uVar47 = (uint32_t)uStack_1b0;
                goto LAB_7fffa4ab6f94;
              }
              if ((uVar48 <= uVar37) &&
                 (uVar61 = (uint64_t)uVar37, (uint32_t)*puVar62 == *(uint32_t *)(lVar9 + uVar61))) {
                puVar27 = puVar28;
                goto LAB_7fffa4ab6ec9;
              }
              uVar39 = *puVar27 * -0x30e4432345000000 >> (bVar17 & 0x3f);
              uVar37 = *(uint32_t *)(uVar19 + uVar14 * 4);
              uVar61 = (uint64_t)uVar37;
              uVar34 = (int)puVar28 - iVar13;
              *(uint32_t *)(uVar19 + uVar14 * 4) = uVar34;
              if ((uVar48 <= uVar37) && ((uint32_t)*puVar28 == *(uint32_t *)(lVar9 + uVar61))) break;
              puVar25 = (uint64_t *)((int64_t)puVar27 + uVar60);
              uVar37 = *(uint32_t *)(uVar19 + uVar39 * 4);
              bVar70 = puVar25 < puVar57;
              if ((uint64_t)(int64_t)(int)((uVar66 | 1) * -0x502272d2 ^ 0x32bbb412) <=
                  (uint64_t)(uVar66 ^ 0x69bd7b36)) {
                bVar70 = (int64_t)puVar57 <= (int64_t)puVar25;
              }
              if (bVar70) {
                uVar61 = uVar60;
              }
              else {
                uVar61 = uVar60 + 1;
                puVar57 = puVar57 + 0x10;
              }
              uVar14 = *puVar31;
              puVar52 = (uint64_t *)(uVar60 + (int64_t)puVar31);
              uVar60 = uVar61;
              puVar62 = puVar27;
              puVar28 = puVar31;
              if (puVar36 <= puVar52) goto LAB_7fffa4abaa50;
            }
            uVar14 = uVar39;
            puVar62 = puVar28;
            if (uVar60 < 5) {
LAB_7fffa4ab6ec9:
              *(int *)(uVar19 + uVar14 * 4) = (int)puVar27 - iVar13;
            }
            puVar27 = (uint64_t *)(uVar61 + lVar9);
            uVar35 = (int)puVar62 - (int)puVar27;
            iVar45 = uVar35 + 3;
            lVar43 = 4;
            uVar47 = uVar38;
            if (uVar48 < uVar37) {
              if (param_4 < puVar62) {
                for (lVar63 = 0;
                    *(char *)((int64_t)puVar62 + lVar63 + -1) ==
                    *(char *)((int64_t)puVar27 + lVar63 + -1); lVar63 = lVar63 + -1) {
                  puVar57 = (uint64_t *)((int64_t)puVar27 + lVar63 + -1);
                  puVar52 = (uint64_t *)((int64_t)puVar62 + lVar63 + -1);
                  if ((puVar57 <= puVar42) || (puVar52 <= param_4)) {
                    lVar43 = 5 - lVar63;
                    puVar62 = puVar52;
                    puVar27 = puVar57;
                    uVar38 = uVar35;
                    goto LAB_7fffa4ab6f94;
                  }
                }
                puVar62 = (uint64_t *)((int64_t)puVar62 + lVar63);
                lVar43 = 4 - lVar63;
                puVar27 = (uint64_t *)((int64_t)puVar27 + lVar63);
              }
              uVar38 = uVar35;
            }
            else {
              uVar38 = uVar35;
            }
LAB_7fffa4ab6f94:
            puVar52 = (uint64_t *)((int64_t)puVar62 + lVar43);
            puVar57 = (uint64_t *)((int64_t)puVar27 + lVar43);
            puVar25 = puVar52;
            if (puVar52 < puVar58) {
              if (*puVar57 == *puVar52) {
                lVar63 = 0;
                do {
                  puVar57 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 8);
                  if (puVar58 <= puVar57) {
                    puVar57 = (uint64_t *)((int64_t)puVar27 + lVar63 + lVar43 + 8);
                    puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 8);
                    goto joined_r0x7fffa4ab708d;
                  }
                  uVar14 = *(uint64_t *)((int64_t)puVar27 + lVar63 + lVar43 + 8);
                  uVar60 = *puVar57;
                  lVar63 = lVar63 + 8;
                } while (uVar14 == uVar60);
                uVar37 = 0;
                for (uVar60 = uVar60 ^ uVar14; (uVar60 & 1) == 0;
                    uVar60 = uVar60 >> 1 | 0x8000000000000000) {
                  uVar37 = uVar37 + 1;
                }
                uVar14 = (uint64_t)(uVar37 >> 3) + lVar63;
              }
              else {
                uVar37 = 0;
                for (uVar14 = *puVar57 ^ *puVar52; (uVar14 & 1) == 0;
                    uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                  uVar37 = uVar37 + 1;
                }
                uVar14 = (uint64_t)(uVar37 >> 3);
              }
            }
            else {
joined_r0x7fffa4ab708d:
              if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
                 ((uint32_t)*puVar57 == (uint32_t)*puVar25)) {
                puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
                puVar57 = (uint64_t *)((int64_t)puVar57 + 4);
              }
              if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
                 ((short)*puVar57 == (short)*puVar25)) {
                puVar57 = (uint64_t *)((int64_t)puVar57 + 2);
                puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
              }
              if (puVar25 < puVar2) {
                puVar25 = (uint64_t *)
                          ((int64_t)puVar25 + (uint64_t)((char)*puVar57 == (char)*puVar25));
              }
              uVar14 = (int64_t)puVar25 - (int64_t)puVar52;
            }
            uVar60 = (int64_t)puVar62 - (int64_t)param_4;
            puVar52 = (uint64_t *)param_2[3];
            if (puVar30 < puVar62) {
              puVar57 = puVar52;
              if (param_4 <= puVar30) {
                uVar39 = param_4[1];
                *puVar52 = *param_4;
                puVar52[1] = uVar39;
                puVar57 = (uint64_t *)((int64_t)puVar52 + ((int64_t)puVar30 - (int64_t)param_4))
                ;
                if (0x10 < (int64_t)puVar30 - (int64_t)param_4) {
                  puVar52 = puVar52 + 6;
                  while( true ) {
                    uVar39 = param_4[3];
                    puVar52[-4] = param_4[2];
                    puVar52[-3] = uVar39;
                    uVar39 = param_4[5];
                    puVar52[-2] = param_4[4];
                    puVar52[-1] = uVar39;
                    if (puVar57 <= puVar52) break;
                    puVar52 = puVar52 + 4;
                    param_4 = param_4 + 4;
                  }
                }
                param_4 = puVar30;
              }
              if (param_4 < puVar62) {
                uVar39 = (int64_t)puVar62 - (int64_t)param_4;
                if ((3 < uVar39) && (0x1f < (uint64_t)((int64_t)puVar57 - (int64_t)param_4))) {
                  if (uVar39 < 0x20) {
                    uVar61 = 0;
LAB_7fffa4ab72cd:
                    uVar67 = uVar39 * -4;
                    if ((0xa135baec - uVar66 ^ 0x1c413925) < (uVar66 ^ 0xf810052) + 0x144ba0ae) {
                      uVar67 = uVar39 & 0xfffffffffffffffc;
                    }
                    for (; *(uint32_t *)((int64_t)puVar57 + uVar61) =
                                *(uint32_t *)((int64_t)param_4 + uVar61), uVar67 - 4 != uVar61;
                        uVar61 = uVar61 + 4) {
                    }
                    if (uVar39 == uVar67) goto LAB_7fffa4ab7443;
                  }
                  else {
                    uVar61 = uVar39 & 0xffffffffffffffe0;
                    lVar63 = 0;
                    while( true ) {
                      uVar10 = ((uint64_t *)((int64_t)param_4 + lVar63))[1];
                      puVar4 = (uint64_t *)((int64_t)param_4 + lVar63 + 0x10);
                      uVar11 = *puVar4;
                      uVar12 = puVar4[1];
                      *(uint64_t *)((int64_t)puVar57 + lVar63) =
                           *(uint64_t *)((int64_t)param_4 + lVar63);
                      ((uint64_t *)((int64_t)puVar57 + lVar63))[1] = uVar10;
                      puVar4 = (uint64_t *)((int64_t)puVar57 + lVar63 + 0x10);
                      *puVar4 = uVar11;
                      puVar4[1] = uVar12;
                      if (uVar61 - 0x20 == lVar63) break;
                      lVar63 = lVar63 + 0x20;
                    }
                    if (uVar39 == uVar61) goto LAB_7fffa4ab7443;
                    uVar67 = uVar61;
                    if ((uVar39 & 0x1c) != 0) goto LAB_7fffa4ab72cd;
                  }
                  puVar57 = (uint64_t *)((int64_t)puVar57 + uVar67);
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar67);
                }
                uVar37 = (int)puVar62 - (int)param_4 & 7;
                uVar39 = (uint64_t)uVar37;
                puVar52 = param_4;
                if (uVar37 != 0) {
                  do {
                    *(char *)puVar57 = (char)*puVar52;
                    puVar52 = (uint64_t *)((int64_t)puVar52 + 1);
                    puVar57 = (uint64_t *)((int64_t)puVar57 + 1);
                    uVar39 = uVar39 - 1;
                  } while (uVar39 != 0);
                }
                if ((uint64_t)((int64_t)param_4 - (int64_t)puVar62) < 0xfffffffffffffff9) {
                  while( true ) {
                    puVar25 = puVar52 + 1;
                    *(char *)puVar57 = (char)*puVar52;
                    *(uint8_t *)((int64_t)puVar57 + 1) = *(uint8_t *)((int64_t)puVar52 + 1);
                    *(uint8_t *)((int64_t)puVar57 + 2) = *(uint8_t *)((int64_t)puVar52 + 2);
                    *(uint8_t *)((int64_t)puVar57 + 3) = *(uint8_t *)((int64_t)puVar52 + 3);
                    *(uint8_t *)((int64_t)puVar57 + 4) = *(uint8_t *)((int64_t)puVar52 + 4);
                    *(uint8_t *)((int64_t)puVar57 + 5) = *(uint8_t *)((int64_t)puVar52 + 5);
                    *(uint8_t *)((int64_t)puVar57 + 6) = *(uint8_t *)((int64_t)puVar52 + 6);
                    *(uint8_t *)((int64_t)puVar57 + 7) = *(uint8_t *)((int64_t)puVar52 + 7);
                    bVar70 = puVar62 <= puVar25;
                    if (((uVar66 + 0xcabdd5a9) * 0x80 | uVar66 + 0xcabdd5a9 >> 0x19) <=
                        (uVar66 ^ 0xa8484e72)) {
                      bVar70 = puVar25 == puVar62;
                    }
                    if (bVar70) break;
                    puVar57 = puVar57 + 1;
                    puVar52 = puVar25;
                  }
                }
              }
LAB_7fffa4ab7443:
              lVar63 = param_2[1];
              param_2[3] = param_2[3] + uVar60;
              if (0xffff < uVar60) {
                *(uint32_t *)(param_2 + 9) = 1;
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar63 - *param_2) >> 3);
              }
            }
            else {
              uVar39 = param_4[1];
              *puVar52 = *param_4;
              puVar52[1] = uVar39;
              if ((-0x66e7b86d << (bVar15 & 0x1f) | 0x99184793U >> 0x20 - (bVar15 & 0x1f)) +
                  0xb86c66f8 < uVar60) {
                lVar63 = param_2[3];
                uVar39 = param_4[3];
                *(uint64_t *)(lVar63 + 0x10) = param_4[2];
                *(uint64_t *)(lVar63 + 0x18) = uVar39;
                if ((int64_t)(uint64_t)(uVar66 ^ 0x41926f11) <= (int64_t)uVar60) {
                  lVar51 = 0;
                  do {
                    puVar5 = (uint64_t *)((int64_t)param_4 + lVar51 + 0x20);
                    uVar10 = puVar5[1];
                    puVar4 = (uint64_t *)(lVar63 + 0x20 + lVar51);
                    *puVar4 = *puVar5;
                    puVar4[1] = uVar10;
                    puVar4 = (uint64_t *)((int64_t)param_4 + lVar51 + 0x30);
                    uVar10 = puVar4[1];
                    puVar5 = (uint64_t *)(lVar63 + 0x30 + lVar51);
                    *puVar5 = *puVar4;
                    puVar5[1] = uVar10;
                    lVar1 = lVar63 + 0x20 + lVar51;
                    lVar51 = lVar51 + 0x20;
                  } while (lVar1 + 0x20U < lVar63 + uVar60);
                }
                goto LAB_7fffa4ab7443;
              }
              lVar63 = param_2[1];
              param_2[3] = param_2[3] + uVar60;
            }
            uVar39 = (lVar43 + uVar14) - 3;
            *(short *)(lVar63 + 4) = (short)uVar60;
            *(int *)param_2[1] = iVar45;
            if ((uVar66 | 1) * -0x26c189d1 < uVar39) {
              *(uint32_t *)(param_2 + 9) = 2;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            }
            param_4 = (uint64_t *)((int64_t)puVar62 + lVar43 + uVar14);
            *(short *)(param_2[1] + 6) = (short)uVar39;
            param_2[1] = param_2[1] + 8;
            if (puVar36 < param_4) {
              uStack_1b0._0_4_ = uVar47;
            }
            else {
              *(uint32_t *)(uVar19 + ((uint64_t)
                                  (*(int64_t *)(lVar9 + 2 + (uint64_t)uVar34) *
                                  -0x30e4432345000000) >> (bVar17 & 0x3f)) * 4) = uVar34 + 2;
              uStack_1b0._0_4_ = 0;
              *(int *)(uVar19 + ((uint64_t)
                                 (*(int64_t *)((int64_t)param_4 + -2) * -0x30e4432345000000) >>
                                (bVar17 & 0x3f)) * 4) = ((int)param_4 + -2) - iVar13;
              if (uVar47 != (uVar66 + 0x90d0 & 0xffff)) {
                do {
                  uVar37 = uVar47;
                  if ((uint32_t)*param_4 != *(uint32_t *)((int64_t)param_4 - (uint64_t)uVar37)) {
                    uStack_1b0._0_4_ = uVar37;
                    break;
                  }
                  lVar63 = -(uint64_t)uVar37;
                  puVar62 = (uint64_t *)((int64_t)param_4 + 4);
                  puVar57 = (uint64_t *)((int64_t)param_4 + lVar63 + 4);
                  puVar52 = puVar62;
                  if (puVar62 < puVar58) {
                    if (*puVar57 == *puVar62) {
                      lVar43 = 0;
                      do {
                        puVar52 = (uint64_t *)((int64_t)param_4 + lVar43 + 0xc);
                        if (puVar58 <= puVar52) {
                          puVar57 = (uint64_t *)((int64_t)param_4 + lVar63 + lVar43 + 0xc);
                          puVar52 = (uint64_t *)((int64_t)param_4 + lVar43 + 0xc);
                          goto joined_r0x7fffa4ab76b4;
                        }
                        uVar14 = *puVar52;
                        uVar60 = *(uint64_t *)((int64_t)param_4 + lVar43 + lVar63 + 0xc);
                        lVar43 = lVar43 + 8;
                      } while (uVar60 == uVar14);
                      uVar47 = 0;
                      for (uVar14 = uVar14 ^ uVar60; (uVar14 & 1) == 0;
                          uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                        uVar47 = uVar47 + 1;
                      }
                      uVar14 = (uint64_t)(uVar47 >> 3) + lVar43;
                    }
                    else {
                      uVar47 = 0;
                      for (uVar14 = *puVar57 ^ *puVar62; (uVar14 & 1) == 0;
                          uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                        uVar47 = uVar47 + 1;
                      }
                      uVar14 = (uint64_t)(uVar47 >> 3);
                    }
                  }
                  else {
joined_r0x7fffa4ab76b4:
                    if ((puVar52 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
                       ((uint32_t)*puVar57 == (uint32_t)*puVar52)) {
                      puVar52 = (uint64_t *)((int64_t)puVar52 + 4);
                      puVar57 = (uint64_t *)((int64_t)puVar57 + 4);
                    }
                    if ((puVar52 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
                       ((short)*puVar57 == (short)*puVar52)) {
                      puVar57 = (uint64_t *)((int64_t)puVar57 + 2);
                      puVar52 = (uint64_t *)((int64_t)puVar52 + 2);
                    }
                    if (puVar52 < puVar2) {
                      puVar52 = (uint64_t *)
                                ((int64_t)puVar52 + (uint64_t)((char)*puVar57 == (char)*puVar52));
                    }
                    uVar14 = (int64_t)puVar52 - (int64_t)puVar62;
                  }
                  *(int *)(uVar19 + (*param_4 * -0x30e4432345000000 >> (bVar17 & 0x3f)) * 4) =
                       (int)param_4 - iVar13;
                  if (param_4 <= puVar30) {
                    uVar60 = param_4[1];
                    puVar62 = (uint64_t *)param_2[3];
                    *puVar62 = *param_4;
                    puVar62[1] = uVar60;
                  }
                  *(uint16_t *)(param_2[1] + 4) = 0;
                  *(uint32_t *)param_2[1] = 1;
                  if (0xffff < uVar14 + 1) {
                    *(uint32_t *)(param_2 + 9) = 2;
                    *(int *)((int64_t)param_2 + 0x4c) =
                         (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                  }
                  *(short *)(param_2[1] + 6) = (short)(uVar14 + 1);
                  param_2[1] = param_2[1] + 8;
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar14 + 4);
                  uStack_1b0._0_4_ = uVar38;
                  uVar47 = uVar38;
                  uVar38 = uVar37;
                } while (param_4 <= puVar36);
              }
            }
            puVar52 = (uint64_t *)((int64_t)param_4 + 3);
            puVar62 = param_4;
          } while (puVar52 < puVar36);
        }
LAB_7fffa4abaa50:
        if (uVar50 <= uVar18) {
          uVar50 = 0;
        }
        uVar48 = uVar50;
        if (uVar38 != 0) {
          uVar48 = uVar46;
        }
        if (uVar46 <= uVar18) {
          uVar48 = uVar50;
        }
        uVar37 = 0;
        if (uVar18 < uVar46) {
          uVar37 = uVar46;
        }
        if (uVar38 != 0) {
          uVar37 = uVar38;
        }
        if ((uint32_t)uStack_1b0 != 0) {
          uVar48 = (uint32_t)uStack_1b0;
        }
        *param_3 = uVar37;
        puVar62 = param_4;
        goto LAB_7fffa4abac45;
      }
LAB_7fffa4ab77d0:
      if (puVar52 < puVar36) {
        puVar30 = (uint64_t *)((int64_t)puVar2 - 7);
        puVar58 = puVar2 + -4;
        bVar17 = 0x20 - cVar7;
        puStack_78 = param_4;
        do {
          uVar37 = *(uint32_t *)((int64_t)puVar62 + 1);
          puVar57 = puVar62 + 0x10;
          uVar60 = (uint64_t)((uint32_t)*puVar62 * -0x61c8864f >> (bVar17 & 0x1f));
          lVar63 = -(uint64_t)uVar38;
          uVar47 = *(uint32_t *)(uVar19 + uVar60 * 4);
          puVar25 = (uint64_t *)((int64_t)puVar62 + 2);
          uVar14 = 2;
          puVar28 = (uint64_t *)((int64_t)puVar62 + 1);
          while( true ) {
            puVar27 = puVar25;
            uVar34 = uVar37 * -0x61c8864f >> (bVar17 & 0x1f);
            uVar37 = (int)puVar62 - iVar13;
            uVar39 = (int64_t)(int)uVar34;
            if ((int64_t)(int)(uVar66 + 0x71f8ca2d) <= (int64_t)(uint64_t)(0x4886114d - uVar66))
            {
              uVar39 = (uint64_t)uVar34;
            }
            uVar34 = *(uint32_t *)((int64_t)puVar27 + lVar63);
            *(uint32_t *)(uVar19 + uVar60 * 4) = uVar37;
            if ((uVar38 != 0) && ((uint32_t)*puVar27 == uVar34)) {
              uVar14 = (uint64_t)
                       (*(char *)((int64_t)puVar27 - 1) ==
                       *(char *)((int64_t)puVar27 + lVar63 + -1));
              lVar43 = uVar14 + 4;
              *(int *)(uVar19 + uVar39 * 4) = (int)puVar28 - iVar13;
              puVar52 = (uint64_t *)((int64_t)puVar27 + (lVar63 - uVar14));
              puVar27 = (uint64_t *)((int64_t)puVar27 - uVar14);
              iVar45 = 1;
              uVar34 = uVar38;
              goto LAB_7fffa4ab7adb;
            }
            if ((uVar48 <= uVar47) &&
               (uVar61 = (uint64_t)uVar47, (uint32_t)*puVar62 == *(uint32_t *)(lVar9 + uVar61))) {
              puVar27 = puVar28;
              goto LAB_7fffa4ab7a4b;
            }
            uVar47 = *(uint32_t *)(uVar19 + uVar39 * 4);
            uVar61 = (uint64_t)uVar47;
            uVar60 = (uint64_t)((uint32_t)*puVar27 * -0x61c8864f >> (bVar17 & 0x1f));
            uVar37 = (int)puVar28 - iVar13;
            *(uint32_t *)(uVar19 + uVar39 * 4) = uVar37;
            if ((uVar48 <= uVar47) && ((uint32_t)*puVar28 == *(uint32_t *)(lVar9 + uVar61))) break;
            uVar47 = *(uint32_t *)(uVar19 + uVar60 * 4);
            if ((uint64_t *)((int64_t)puVar27 + uVar14) < puVar57) {
              uVar39 = uVar14;
            }
            else {
              uVar39 = uVar14 + 1;
              puVar57 = puVar57 + 0x10;
            }
            uVar37 = (uint32_t)*puVar52;
            puVar31 = (uint64_t *)(uVar14 + (int64_t)puVar52);
            puVar25 = (uint64_t *)((int64_t)puVar27 + uVar14);
            uVar14 = uVar39;
            puVar28 = puVar52;
            puVar62 = puVar27;
            puVar52 = puVar31;
            if (puVar36 <= puVar31) goto LAB_7fffa4ab9cfa;
          }
          uVar39 = uVar60;
          puVar62 = puVar28;
          if (uVar14 < (uVar66 | 1) * 0x72dcb115) {
LAB_7fffa4ab7a4b:
            *(int *)(uVar19 + uVar39 * 4) = (int)puVar27 - iVar13;
          }
          puVar57 = (uint64_t *)(uVar61 + lVar9);
          uVar34 = (int)puVar62 - (int)puVar57;
          iVar45 = uVar34 + 3;
          lVar43 = 4;
          puVar27 = puVar62;
          puVar52 = puVar57;
          uStack_1b0._0_4_ = uVar38;
          if ((uVar48 < uVar47) && (puStack_78 < puVar62)) {
            for (lVar63 = 0;
                *(char *)((int64_t)puVar62 + lVar63 + -1) ==
                *(char *)((int64_t)puVar57 + lVar63 + -1); lVar63 = lVar63 + -1) {
              puVar27 = (uint64_t *)((int64_t)puVar62 + lVar63 + -1);
              puVar52 = (uint64_t *)((int64_t)puVar57 + lVar63 + -1);
              if ((puVar27 <= puStack_78) || (puVar52 <= puVar42)) {
                lVar43 = lVar43 + 1;
                goto LAB_7fffa4ab7adb;
              }
              lVar43 = lVar43 + 1;
            }
            puVar27 = (uint64_t *)((int64_t)puVar62 + lVar63);
            puVar52 = (uint64_t *)((int64_t)puVar57 + lVar63);
          }
LAB_7fffa4ab7adb:
          puVar62 = (uint64_t *)((int64_t)puVar27 + lVar43);
          puVar52 = (uint64_t *)((int64_t)puVar52 + lVar43);
          puVar57 = puVar62;
          if (puVar62 < puVar30) {
            if (*puVar52 == *puVar62) {
              lVar63 = 8;
LAB_7fffa4ab7b30:
              puVar57 = (uint64_t *)((int64_t)puVar62 + lVar63);
              if (puVar57 < puVar30) {
                if (*(uint64_t *)((int64_t)puVar52 + lVar63) == *puVar57)
                goto code_r0x7fffa4ab7b4e;
                uVar38 = 0;
                for (uVar14 = *(uint64_t *)((int64_t)puVar52 + lVar63) ^ *puVar57;
                    (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                  uVar38 = uVar38 + 1;
                }
                uVar47 = uVar38 << 3;
                if ((uVar66 ^ 0xffaac6c1) + 0x433ac660 <=
                    (0x77641542U >> (bVar15 & 0x1f) | 0x77641542 << 0x20 - (bVar15 & 0x1f))) {
                  uVar47 = uVar38 >> 3;
                }
                uVar14 = (uint64_t)uVar47 + lVar63;
                goto LAB_7fffa4ab7bad;
              }
              puVar52 = (uint64_t *)((int64_t)puVar52 + lVar63);
              goto joined_r0x7fffa4ab7b1a;
            }
            uVar38 = 0;
            for (uVar14 = *puVar52 ^ *puVar62; (uVar14 & 1) == 0;
                uVar14 = uVar14 >> 1 | 0x8000000000000000) {
              uVar38 = uVar38 + 1;
            }
            uVar14 = (uint64_t)(uVar38 >> 3);
          }
          else {
joined_r0x7fffa4ab7b1a:
            if ((puVar57 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
               ((uint32_t)*puVar52 == (uint32_t)*puVar57)) {
              puVar52 = (uint64_t *)((int64_t)puVar52 + 4);
              puVar57 = (uint64_t *)((int64_t)puVar57 + 4);
            }
            if ((puVar57 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
               ((short)*puVar52 == (short)*puVar57)) {
              puVar52 = (uint64_t *)((int64_t)puVar52 + 2);
              puVar57 = (uint64_t *)((int64_t)puVar57 + 2);
            }
            if (puVar57 < puVar2) {
              puVar57 = (uint64_t *)
                        ((int64_t)puVar57 + (uint64_t)((char)*puVar52 == (char)*puVar57));
            }
            uVar14 = (int64_t)puVar57 - (int64_t)puVar62;
          }
LAB_7fffa4ab7bad:
          uVar60 = (int64_t)puVar27 - (int64_t)puStack_78;
          puVar62 = (uint64_t *)param_2[3];
          if (puVar58 < puVar27) {
            puVar52 = puVar62;
            if (puStack_78 <= puVar58) {
              puVar52 = (uint64_t *)
                        ((int64_t)puVar62 + ((int64_t)puVar58 - (int64_t)puStack_78));
              uVar39 = puStack_78[1];
              *puVar62 = *puStack_78;
              puVar62[1] = uVar39;
              if (0x10 < (int64_t)puVar58 - (int64_t)puStack_78) {
                lVar63 = 0x10;
                while( true ) {
                  uVar10 = ((uint64_t *)((int64_t)puStack_78 + lVar63))[1];
                  *(uint64_t *)((int64_t)puVar62 + lVar63) =
                       *(uint64_t *)((int64_t)puStack_78 + lVar63);
                  ((uint64_t *)((int64_t)puVar62 + lVar63))[1] = uVar10;
                  puVar4 = (uint64_t *)((int64_t)puStack_78 + lVar63 + 0x10);
                  uVar10 = puVar4[1];
                  puVar5 = (uint64_t *)((int64_t)puVar62 + lVar63 + 0x10);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar10;
                  if (puVar52 <= (uint64_t *)((int64_t)puVar62 + lVar63 + 0x20)) break;
                  lVar63 = lVar63 + 0x20;
                }
              }
              puStack_78 = puVar58;
            }
            if (puStack_78 < puVar27) {
              uVar39 = (int64_t)puVar27 - (int64_t)puStack_78;
              puVar62 = puVar52;
              if (!(uVar39 < (~(uVar66 + 0x90cb) & 0xffff) ||
                   (uint64_t)((int64_t)puVar52 - (int64_t)puStack_78) < 0x20)) {
                if (uVar39 < 0x41926f50 - uVar66) {
                  uVar61 = 0;
                }
                else {
                  uVar61 = uVar39 & 0xffffffffffffffe0;
                  lVar63 = 0;
                  while( true ) {
                    uVar10 = ((uint64_t *)((int64_t)puStack_78 + lVar63))[1];
                    puVar4 = (uint64_t *)((int64_t)puStack_78 + lVar63 + 0x10);
                    uVar11 = *puVar4;
                    uVar12 = puVar4[1];
                    *(uint64_t *)((int64_t)puVar52 + lVar63) =
                         *(uint64_t *)((int64_t)puStack_78 + lVar63);
                    ((uint64_t *)((int64_t)puVar52 + lVar63))[1] = uVar10;
                    puVar4 = (uint64_t *)((int64_t)puVar52 + lVar63 + 0x10);
                    *puVar4 = uVar11;
                    puVar4[1] = uVar12;
                    if (uVar61 - 0x20 == lVar63) break;
                    lVar63 = lVar63 + 0x20;
                  }
                  if (uVar39 == uVar61) goto LAB_7fffa4ab7e7c;
                  if ((uVar39 & 0x1c) == 0) {
                    puVar62 = (uint64_t *)((int64_t)puVar52 + uVar61);
                    puStack_78 = (uint64_t *)((int64_t)puStack_78 + uVar61);
                    goto LAB_7fffa4ab7e24;
                  }
                }
                uVar67 = uVar39 & 0xfffffffffffffffc;
                puVar62 = (uint64_t *)((int64_t)puVar52 + uVar67);
                do {
                  *(uint32_t *)((int64_t)puVar52 + uVar61) =
                       *(uint32_t *)((int64_t)puStack_78 + uVar61);
                  uVar61 = uVar61 + 4;
                } while (uVar67 != uVar61);
                if (uVar39 == uVar67) goto LAB_7fffa4ab7e7c;
                puStack_78 = (uint64_t *)((int64_t)puStack_78 + uVar67);
              }
LAB_7fffa4ab7e24:
              uVar38 = (int)puVar27 - (int)puStack_78 & 7;
              uVar39 = (uint64_t)uVar38;
              puVar52 = puStack_78;
              puVar57 = puStack_78;
              if (uVar38 != 0) {
                do {
                  puVar52 = (uint64_t *)((int64_t)puVar57 + 1);
                  *(char *)puVar62 = (char)*puVar57;
                  puVar62 = (uint64_t *)((int64_t)puVar62 + 1);
                  uVar39 = uVar39 - 1;
                  puVar57 = puVar52;
                } while (uVar39 != 0);
              }
              if ((uint64_t)((int64_t)puStack_78 - (int64_t)puVar27) <=
                  (uint64_t)(int64_t)(int)(uVar66 + 0xbe6d90c8)) {
                lVar63 = 0;
                while( true ) {
                  *(uint8_t *)((int64_t)puVar62 + lVar63) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63);
                  *(uint8_t *)((int64_t)puVar62 + lVar63 + 1) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 1);
                  *(uint8_t *)((int64_t)puVar62 + lVar63 + 2) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 2);
                  *(uint8_t *)((int64_t)puVar62 + lVar63 + 3) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 3);
                  *(uint8_t *)((int64_t)puVar62 + lVar63 + 4) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 4);
                  *(uint8_t *)((int64_t)puVar62 + lVar63 + 5) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 5);
                  *(uint8_t *)((int64_t)puVar62 + lVar63 + 6) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 6);
                  *(uint8_t *)((int64_t)puVar62 + lVar63 + 7) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 7);
                  if ((uint64_t *)((int64_t)puVar52 + lVar63 + 8) == puVar27) break;
                  lVar63 = lVar63 + 8;
                }
              }
            }
LAB_7fffa4ab7e7c:
            lVar63 = param_2[1];
            param_2[3] = param_2[3] + uVar60;
            if (0xffff < uVar60) {
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar63 - *param_2) >> 3);
              *(uint32_t *)(param_2 + 9) = 1;
            }
          }
          else {
            uVar39 = puStack_78[1];
            *puVar62 = *puStack_78;
            puVar62[1] = uVar39;
            if (0x10 < uVar60) {
              uVar39 = puStack_78[3];
              lVar63 = param_2[3];
              *(uint64_t *)(lVar63 + 0x10) = puStack_78[2];
              *(uint64_t *)(lVar63 + 0x18) = uVar39;
              if (0x20 < (int64_t)uVar60) {
                lVar51 = 0;
                while( true ) {
                  puVar5 = (uint64_t *)((int64_t)puStack_78 + lVar51 + 0x20);
                  uVar10 = puVar5[1];
                  puVar4 = (uint64_t *)(lVar63 + 0x20 + lVar51);
                  *puVar4 = *puVar5;
                  puVar4[1] = uVar10;
                  puVar4 = (uint64_t *)((int64_t)puStack_78 + lVar51 + 0x30);
                  uVar10 = puVar4[1];
                  puVar5 = (uint64_t *)(lVar63 + 0x30 + lVar51);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar10;
                  if (lVar63 + uVar60 <= lVar63 + 0x20 + lVar51 + 0x20U) break;
                  lVar51 = lVar51 + 0x20;
                }
              }
              goto LAB_7fffa4ab7e7c;
            }
            lVar63 = param_2[1];
            param_2[3] = param_2[3] + uVar60;
          }
          uVar39 = (lVar43 + uVar14) - 3;
          *(short *)(lVar63 + 4) = (short)uVar60;
          *(int *)param_2[1] = iVar45;
          if ((0xa718f51 << (bVar15 & 0x1f) | 0xa718f51U >> 0x20 - (bVar15 & 0x1f)) * -0x50c87691 <
              uVar39) {
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
            *(uint32_t *)(param_2 + 9) = 2;
          }
          puVar62 = (uint64_t *)((int64_t)puVar27 + lVar43 + uVar14);
          *(short *)(param_2[1] + 6) = (short)uVar39;
          param_2[1] = param_2[1] + 8;
          uVar38 = uVar34;
          if (puVar62 <= puVar36) {
            iVar69 = (int)puVar62 + -2;
            *(uint32_t *)(uVar19 + (uint64_t)
                               ((uint32_t)(*(int *)(lVar9 + 2 + (uint64_t)uVar37) * -0x61c8864f) >>
                               (bVar17 & 0x1f)) * 4) = uVar37 + 2;
            iVar45 = iVar69 * iVar13;
            if ((uint64_t)(0xf2fe4e87U >> (bVar15 & 0x1f) | -0xd01b179 << 0x20 - (bVar15 & 0x1f)) <
                (uint64_t)(int64_t)(int)(0x2486c6fe - uVar66)) {
              iVar45 = iVar69 - iVar13;
            }
            uVar37 = *(int *)((int64_t)puVar62 + -2) * -0x61c8864f;
            if (uVar66 != 0x41926f30) {
              uVar37 = *(int *)((int64_t)puVar62 + -2) + 0x61c8864f;
            }
            *(int *)(uVar19 + (uint64_t)(uVar37 >> (bVar17 & 0x1f)) * 4) = iVar45;
            if ((uint32_t)uStack_1b0 == 0) {
              uStack_1b0._0_4_ = 0;
            }
            else {
              uVar37 = (uint32_t)uStack_1b0;
              do {
                uVar47 = uVar34;
                uStack_1b0._0_4_ = uVar37;
                uVar14 = (int64_t)(int)(uint32_t)uStack_1b0;
                if (((uVar66 + 0x59ea1ced) * 0x400000 | uVar66 + 0x59ea1ced >> 10) <
                    uVar66 + 0x6bcc3e78) {
                  uVar14 = (uint64_t)(uint32_t)uStack_1b0;
                }
                if ((uint32_t)*puVar62 != *(uint32_t *)((int64_t)puVar62 - uVar14)) {
                  uVar38 = uVar47;
                  break;
                }
                lVar63 = -uVar14;
                puVar57 = (uint64_t *)((int64_t)puVar62 + 4);
                puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + 4);
                puVar52 = puVar57;
                if (puVar57 < puVar30) {
                  if (*puVar25 == *puVar57) {
                    lVar43 = 0xc;
LAB_7fffa4ab80f0:
                    puVar52 = (uint64_t *)((int64_t)puVar62 + lVar43);
                    if (puVar52 < puVar30) {
                      uVar14 = *(uint64_t *)((int64_t)puVar62 + lVar43 + lVar63);
                      if (uVar14 == *puVar52) goto code_r0x7fffa4ab8109;
                      uVar37 = 0;
                      for (uVar14 = *puVar52 ^ uVar14; (uVar14 & 1) == 0;
                          uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                        uVar37 = uVar37 + 1;
                      }
                      uVar14 = ((uint64_t)(uVar37 >> 3) + lVar43) - 4;
                      goto LAB_7fffa4ab81f6;
                    }
                    puVar25 = (uint64_t *)(lVar63 + (int64_t)puVar52);
                    goto joined_r0x7fffa4ab8125;
                  }
                  uVar37 = 0;
                  for (uVar14 = *puVar57 ^ *puVar25; (uVar14 & 1) == 0;
                      uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                    uVar37 = uVar37 + 1;
                  }
                  uVar14 = (uint64_t)(uVar37 >> 3);
                }
                else {
joined_r0x7fffa4ab8125:
                  if ((puVar52 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
                     ((uint32_t)*puVar25 == (uint32_t)*puVar52)) {
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
                    puVar52 = (uint64_t *)((int64_t)puVar52 + 4);
                  }
                  if ((puVar52 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
                     ((short)*puVar25 == (short)*puVar52)) {
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
                    puVar52 = (uint64_t *)((int64_t)puVar52 + 2);
                  }
                  bVar70 = puVar52 < puVar2;
                  if ((uint64_t)
                      (int64_t)
                      (int)(((uVar66 | 1) * -0x80000000 | (uVar66 | 1) * -0x2c55ac58 >> 4) +
                           0x4bb9413f) <
                      (uint64_t)
                      (0x41421688U >> (bVar15 & 0x1f) | 0x41421688 << 0x20 - (bVar15 & 0x1f))) {
                    bVar70 = puVar52 != puVar2;
                  }
                  if (bVar70) {
                    puVar52 = (uint64_t *)
                              ((int64_t)puVar52 + (uint64_t)((char)*puVar25 == (char)*puVar52));
                  }
                  uVar14 = (int64_t)puVar52 - (int64_t)puVar57;
                }
LAB_7fffa4ab81f6:
                *(int *)(uVar19 + (uint64_t)((uint32_t)*puVar62 * -0x61c8864f >> (bVar17 & 0x1f)) * 4)
                     = (int)puVar62 - iVar13;
                if (puVar62 <= puVar58) {
                  uVar60 = puVar62[1];
                  puVar52 = (uint64_t *)param_2[3];
                  *puVar52 = *puVar62;
                  puVar52[1] = uVar60;
                }
                *(uint16_t *)(param_2[1] + 4) = 0;
                *(uint32_t *)param_2[1] = 1;
                if (0xffff < uVar14 + 1) {
                  *(int *)((int64_t)param_2 + 0x4c) =
                       (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                  *(uint32_t *)(param_2 + 9) = 2;
                }
                *(short *)(param_2[1] + 6) = (short)(uVar14 + 1);
                param_2[1] = param_2[1] + 8;
                puVar62 = (uint64_t *)((int64_t)puVar62 + uVar14 + 4);
                uVar38 = (uint32_t)uStack_1b0;
                uVar37 = uVar47;
                uVar34 = (uint32_t)uStack_1b0;
                uStack_1b0._0_4_ = uVar47;
              } while (puVar62 <= puVar36);
            }
          }
          puVar52 = (uint64_t *)((int64_t)puVar62 + 3);
          puStack_78 = puVar62;
        } while (puVar52 < puVar36);
      }
      else {
        puStack_78 = param_4;
LAB_7fffa4ab9cfa:
        puVar62 = puStack_78;
      }
      uVar37 = 0;
      if (uVar18 < uVar46) {
        uVar37 = uVar46;
      }
      uVar47 = 0;
      if (uVar18 < uVar50) {
        uVar47 = uVar50;
      }
      uVar48 = uVar47;
      if (uVar38 != 0) {
        uVar48 = uVar46;
        uVar37 = uVar38;
      }
      if (uVar46 <= uVar18) {
        uVar48 = uVar47;
      }
      *param_3 = uVar37;
    }
    else if (uVar37 == 6) {
      if (puVar52 < puVar36) {
        puVar30 = puVar2 + -4;
        puVar58 = (uint64_t *)((int64_t)puVar2 - 7);
        bVar17 = 0x40 - cVar7;
        do {
          puVar57 = puVar62 + 0x10;
          uVar39 = *puVar62 * -0x30e4432340650000 >> (bVar17 & 0x3f);
          uVar14 = *(uint64_t *)((int64_t)puVar62 + 1);
          lVar63 = -(uint64_t)uVar38;
          uVar37 = *(uint32_t *)(uVar19 + uVar39 * 4);
          puVar25 = (uint64_t *)((int64_t)puVar62 + 2);
          uVar60 = 2;
          puVar28 = (uint64_t *)((int64_t)puVar62 + 1);
          while( true ) {
            puVar27 = puVar25;
            uVar14 = uVar14 * -0x30e4432340650000 >> (bVar17 & 0x3f);
            uVar34 = (int)puVar62 - iVar13;
            uVar61 = (uint64_t)uVar34;
            uVar47 = *(uint32_t *)((int64_t)puVar27 + lVar63);
            *(uint32_t *)(uVar19 + uVar39 * 4) = uVar34;
            if ((uVar38 != 0) && ((uint32_t)*puVar27 == uVar47)) {
              uVar60 = (uint64_t)
                       (*(char *)((int64_t)puVar27 - 1) ==
                       *(char *)((int64_t)puVar27 + lVar63 + -1));
              lVar63 = (int64_t)puVar27 + (lVar63 - uVar60);
              puVar62 = (uint64_t *)((int64_t)puVar27 - uVar60);
              uVar60 = uVar60 | 4;
              *(int *)(uVar19 + uVar14 * 4) = (int)puVar28 - iVar13;
              iVar45 = 1;
              uVar47 = uVar38;
              goto LAB_7fffa4aba030;
            }
            bVar70 = uVar37 < uVar48;
            if ((uint64_t)((uVar66 | 1) * -0xcd89900 | (uVar66 | 1) * -0x2066c4c8 >> 0x1b) ==
                0xffffffffb1585137) {
              bVar70 = (int)uVar37 < (int)uVar48;
            }
            if ((!bVar70) &&
               (uVar67 = (uint64_t)uVar37, (uint32_t)*puVar62 == *(uint32_t *)(lVar9 + uVar67)))
            goto LAB_7fffa4aba11a;
            uVar37 = *(uint32_t *)(uVar19 + uVar14 * 4);
            uVar67 = (uint64_t)uVar37;
            uVar39 = *puVar27 * -0x30e4432340650000 >> (bVar17 & 0x3f);
            uVar47 = (int)puVar28 - iVar13;
            uVar61 = (uint64_t)uVar47;
            *(uint32_t *)(uVar19 + uVar14 * 4) = uVar47;
            if ((uVar48 <= uVar37) && ((uint32_t)*puVar28 == *(uint32_t *)(lVar9 + uVar67))) break;
            uVar14 = *puVar52;
            uVar37 = *(uint32_t *)(uVar19 + uVar39 * 4);
            if ((uint64_t *)((int64_t)puVar27 + uVar60) < puVar57) {
              uVar61 = uVar60;
            }
            else {
              uVar61 = uVar60 + 1;
              puVar57 = puVar57 + 0x10;
            }
            puVar31 = (uint64_t *)(uVar60 + (int64_t)puVar52);
            puVar25 = (uint64_t *)((int64_t)puVar27 + uVar60);
            uVar60 = uVar61;
            puVar28 = puVar52;
            puVar62 = puVar27;
            puVar52 = puVar31;
            if (puVar36 <= puVar31) {
              puVar62 = param_4;
              goto LAB_7fffa4abab91;
            }
          }
          uVar14 = uVar39;
          puVar62 = puVar28;
          puVar28 = puVar27;
          if (uVar60 < (-0x241cf6a3 << (bVar15 & 0x1f) | 0xdbe3095dU >> 0x20 - (bVar15 & 0x1f)) +
                       0xf6a22422) {
LAB_7fffa4aba11a:
            *(int *)(uVar19 + uVar14 * 4) = (int)puVar28 - iVar13;
          }
          lVar63 = uVar67 + lVar9;
          uVar47 = (int)puVar62 - (int)lVar63;
          iVar45 = uVar47 + 3;
          uVar60 = 4;
          uStack_1b0._0_4_ = uVar38;
          if ((param_4 < puVar62) && (uVar48 < uVar37)) {
            lVar43 = 0;
            do {
              if (*(char *)((int64_t)puVar62 + lVar43 + -1) != *(char *)(lVar63 + -1 + lVar43)) {
                puVar62 = (uint64_t *)((int64_t)puVar62 + lVar43);
                uVar60 = 4 - lVar43;
                lVar63 = lVar63 + lVar43;
                goto LAB_7fffa4aba030;
              }
              lVar51 = lVar43 + -1;
            } while ((puVar42 < (uint64_t *)(lVar63 + lVar43 + -1)) &&
                    (lVar1 = lVar43 + -1, lVar43 = lVar51,
                    param_4 < (uint64_t *)((int64_t)puVar62 + lVar1)));
            puVar62 = (uint64_t *)((int64_t)puVar62 + lVar51);
            uVar60 = 4 - lVar51;
            lVar63 = lVar63 + lVar51;
          }
LAB_7fffa4aba030:
          puVar52 = (uint64_t *)((int64_t)puVar62 + uVar60);
          puVar57 = (uint64_t *)(lVar63 + uVar60);
          if (puVar52 < puVar58) {
            if (*puVar57 == *puVar52) {
              lVar43 = 0;
              do {
                puVar57 = (uint64_t *)((int64_t)puVar62 + lVar43 + uVar60 + 8);
                if (puVar58 <= puVar57) {
                  puVar57 = (uint64_t *)(lVar43 + lVar63 + uVar60 + 8);
                  puVar25 = (uint64_t *)((int64_t)puVar62 + lVar43 + uVar60 + 8);
                  goto LAB_7fffa4aba1dd;
                }
                uVar14 = *puVar57;
                uVar39 = *(uint64_t *)(lVar63 + uVar60 + 8 + lVar43);
                lVar43 = lVar43 + 8;
              } while (uVar39 == uVar14);
              uVar37 = 0;
              for (uVar39 = uVar39 ^ uVar14; (uVar39 & 1) == 0;
                  uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              uStack_88 = (uint64_t)(uVar37 >> 3) + lVar43;
            }
            else {
              uVar37 = 0;
              for (uVar14 = *puVar57 ^ *puVar52; (uVar14 & 1) == 0;
                  uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              uStack_88 = (uint64_t)(uVar37 >> 3);
            }
          }
          else {
            puVar25 = puVar52;
LAB_7fffa4aba1dd:
            if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
               ((uint32_t)*puVar57 == (uint32_t)*puVar25)) {
              puVar57 = (uint64_t *)((int64_t)puVar57 + 4);
              puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
            }
            if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
               ((short)*puVar57 == (short)*puVar25)) {
              puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
              puVar57 = (uint64_t *)((int64_t)puVar57 + 2);
            }
            if (puVar25 < puVar2) {
              puVar25 = (uint64_t *)
                        ((int64_t)puVar25 + (uint64_t)((char)*puVar57 == (char)*puVar25));
            }
            uStack_88 = (int64_t)puVar25 - (int64_t)puVar52;
          }
          puVar52 = (uint64_t *)param_2[3];
          uVar14 = (int64_t)puVar62 - (int64_t)param_4;
          bVar70 = puVar30 < puVar62;
          if ((uVar66 | 1) * -0x7df2f9dd + 0xc000008f < 0x806c6928) {
            bVar70 = puVar62 < puVar30;
          }
          if (bVar70) {
            bVar70 = (int64_t)param_4 < (int64_t)puVar30;
            if ((int64_t)(int)((uVar66 | 1) * 0x548e0f19) <
                (int64_t)(uint64_t)(uVar66 + 0x335d559f)) {
              bVar70 = puVar30 < param_4;
            }
            if (bVar70) {
              puVar57 = puVar52;
LAB_7fffa4aba417:
              puStack_78 = param_4;
            }
            else {
              uVar39 = param_4[1];
              *puVar52 = *param_4;
              puVar52[1] = uVar39;
              puVar57 = (uint64_t *)((int64_t)puVar52 + ((int64_t)puVar30 - (int64_t)param_4));
              if ((int64_t)puVar30 - (int64_t)param_4 <
                  (int64_t)(uint64_t)((uint16_t)((uVar44 | 1) * 0x7080) >> 7)) {
                param_4 = puVar30;
                goto LAB_7fffa4aba417;
              }
              lVar63 = 0x10;
              while( true ) {
                uVar10 = ((uint64_t *)((int64_t)param_4 + lVar63))[1];
                *(uint64_t *)((int64_t)puVar52 + lVar63) =
                     *(uint64_t *)((int64_t)param_4 + lVar63);
                ((uint64_t *)((int64_t)puVar52 + lVar63))[1] = uVar10;
                puVar4 = (uint64_t *)((int64_t)param_4 + lVar63 + 0x10);
                uVar10 = puVar4[1];
                puVar5 = (uint64_t *)((int64_t)puVar52 + lVar63 + 0x10);
                *puVar5 = *puVar4;
                puVar5[1] = uVar10;
                if (puVar57 <= (uint64_t *)((int64_t)puVar52 + lVar63 + 0x20)) break;
                lVar63 = lVar63 + 0x20;
              }
              puStack_78 = puVar30;
            }
            if (puStack_78 < puVar62) {
              uVar39 = (int64_t)puVar62 - (int64_t)puStack_78;
              if (!((uint64_t)((int64_t)puVar57 - (int64_t)puStack_78) < 0x20 || uVar39 < 4)) {
                if (uVar39 < 0x20) {
                  uVar67 = 0;
code_r0x7fffa4aba506:
                  uVar40 = uVar39 & 0xfffffffffffffffc;
                  do {
                    *(uint32_t *)((int64_t)puVar57 + uVar67) =
                         *(uint32_t *)((int64_t)puStack_78 + uVar67);
                    uVar67 = uVar67 + 4;
                  } while (uVar40 != uVar67);
                  uVar67 = uVar40;
                  if (uVar39 == uVar40) goto LAB_7fffa4aba631;
                }
                else {
                  uVar67 = uVar39 & 0xffffffffffffffe0;
                  uVar40 = 0;
                  do {
                    uVar10 = ((uint64_t *)((int64_t)puStack_78 + uVar40))[1];
                    puVar4 = (uint64_t *)((int64_t)puStack_78 + uVar40 + 0x10);
                    uVar11 = *puVar4;
                    uVar12 = puVar4[1];
                    *(uint64_t *)((int64_t)puVar57 + uVar40) =
                         *(uint64_t *)((int64_t)puStack_78 + uVar40);
                    ((uint64_t *)((int64_t)puVar57 + uVar40))[1] = uVar10;
                    puVar4 = (uint64_t *)((int64_t)puVar57 + uVar40 + 0x10);
                    *puVar4 = uVar11;
                    puVar4[1] = uVar12;
                    uVar40 = uVar40 + 0x20;
                  } while (uVar67 != uVar40);
                  if (uVar39 == uVar67) goto LAB_7fffa4aba631;
                  if ((uVar39 & 0x1c) != 0) goto code_r0x7fffa4aba506;
                }
                puStack_78 = (uint64_t *)((int64_t)puStack_78 + uVar67);
                puVar57 = (uint64_t *)((int64_t)puVar57 + uVar67);
              }
              uVar39 = (uint64_t)((int)puVar62 - (int)puStack_78 & 7);
              puVar52 = puStack_78;
              if (uVar39 != (uVar66 + 0x5e9590d0 & 0xffff)) {
                do {
                  uVar67 = *puVar52;
                  puVar52 = (uint64_t *)((int64_t)puVar52 + 1);
                  *(char *)puVar57 = (char)uVar67;
                  puVar57 = (uint64_t *)((int64_t)puVar57 + 1);
                  uVar39 = uVar39 - 1;
                } while (uVar39 != 0);
              }
              if ((uint64_t)((int64_t)puStack_78 - (int64_t)puVar62) < 0xfffffffffffffff9) {
                lVar63 = 0;
                while( true ) {
                  *(uint8_t *)((int64_t)puVar57 + lVar63) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63);
                  *(uint8_t *)((int64_t)puVar57 + lVar63 + 1) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 1);
                  *(uint8_t *)((int64_t)puVar57 + lVar63 + 2) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 2);
                  *(uint8_t *)((int64_t)puVar57 + lVar63 + 3) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 3);
                  *(uint8_t *)((int64_t)puVar57 + lVar63 + 4) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 4);
                  *(uint8_t *)((int64_t)puVar57 + lVar63 + 5) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 5);
                  *(uint8_t *)((int64_t)puVar57 + lVar63 + 6) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 6);
                  *(uint8_t *)((int64_t)puVar57 + lVar63 + 7) =
                       *(uint8_t *)((int64_t)puVar52 + lVar63 + 7);
                  if ((uint64_t *)((int64_t)puVar52 + lVar63 + 8) == puVar62) break;
                  lVar63 = lVar63 + 8;
                }
              }
            }
LAB_7fffa4aba631:
            lVar63 = param_2[1];
            param_2[3] = param_2[3] + uVar14;
            if (0xffff < uVar14) {
              *(uint32_t *)(param_2 + 9) = 1;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar63 - *param_2) >> 3);
            }
          }
          else {
            uVar39 = param_4[1];
            *puVar52 = *param_4;
            puVar52[1] = uVar39;
            if (0x10 < uVar14) {
              lVar63 = param_2[3];
              uVar39 = param_4[3];
              *(uint64_t *)(lVar63 + 0x10) = param_4[2];
              *(uint64_t *)(lVar63 + 0x18) = uVar39;
              if (0x20 < (int64_t)uVar14) {
                uVar39 = lVar63 + 0x40;
                param_4 = param_4 + 6;
                while( true ) {
                  uVar67 = param_4[-1];
                  *(uint64_t *)(uVar39 - 0x20) = param_4[-2];
                  *(uint64_t *)(uVar39 - 0x18) = uVar67;
                  uVar67 = param_4[1];
                  *(uint64_t *)(uVar39 - 0x10) = *param_4;
                  *(uint64_t *)(uVar39 - 8) = uVar67;
                  if (lVar63 + uVar14 <= uVar39) break;
                  uVar39 = uVar39 + 0x20;
                  param_4 = param_4 + 4;
                }
              }
              goto LAB_7fffa4aba631;
            }
            lVar63 = param_2[1];
            param_2[3] = param_2[3] + uVar14;
          }
          uVar39 = (uVar60 + uStack_88) - 3;
          *(short *)(lVar63 + 4) = (short)uVar14;
          *(int *)param_2[1] = iVar45;
          if (0xffff < uVar39) {
            *(uint32_t *)(param_2 + 9) = 2;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
          }
          puVar62 = (uint64_t *)((int64_t)puVar62 + uVar60 + uStack_88);
          *(short *)(param_2[1] + 6) = (short)uVar39;
          param_2[1] = param_2[1] + 8;
          uVar38 = uVar47;
          if (puVar36 < puVar62) {
          }
          else {
            *(int *)(uVar19 + ((uint64_t)(*(int64_t *)(lVar9 + 2 + uVar61) * -0x30e4432340650000)
                              >> (bVar17 & 0x3f)) * 4) = (int)uVar61 + 2;
            *(int *)(uVar19 + ((uint64_t)
                               (*(int64_t *)((int64_t)puVar62 + -2) * -0x30e4432340650000) >>
                              (bVar17 & 0x3f)) * 4) = ((int)puVar62 + -2) - iVar13;
            if ((uint32_t)uStack_1b0 == 0) {
              uStack_1b0._0_4_ = 0;
            }
            else {
              uVar14 = (uint64_t)(uint32_t)uStack_1b0;
              uVar60 = (uint64_t)uVar47;
              do {
                uVar39 = uVar14;
                uVar37 = (uint32_t)uVar60;
                uStack_1b0._0_4_ = (uint32_t)uVar39;
                if ((uint32_t)*puVar62 != *(uint32_t *)((int64_t)puVar62 - uVar39)) {
                  uVar38 = uVar37;
                  break;
                }
                lVar63 = -uVar39;
                puVar52 = (uint64_t *)((int64_t)puVar62 + 4);
                puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + 4);
                puVar57 = puVar52;
                if (puVar52 < puVar58) {
                  if (*puVar25 == *puVar52) {
                    lVar43 = 0;
                    do {
                      puVar57 = (uint64_t *)((int64_t)puVar62 + lVar43 + 0xc);
                      if (puVar58 <= puVar57) {
                        puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 0xc);
                        puVar57 = (uint64_t *)((int64_t)puVar62 + lVar43 + 0xc);
                        goto joined_r0x7fffa4aba7df;
                      }
                      uVar14 = *puVar57;
                      uVar61 = *(uint64_t *)((int64_t)puVar62 + lVar43 + lVar63 + 0xc);
                      lVar43 = lVar43 + 8;
                    } while (uVar61 == uVar14);
                    uVar38 = 0;
                    for (uVar61 = uVar61 ^ uVar14; (uVar61 & 1) == 0;
                        uVar61 = uVar61 >> 1 | 0x8000000000000000) {
                      uVar38 = uVar38 + 1;
                    }
                    uVar14 = (uint64_t)(uVar38 >> 3) + lVar43;
                  }
                  else {
                    uVar38 = 0;
                    for (uVar14 = *puVar52 ^ *puVar25; (uVar14 & 1) == 0;
                        uVar14 = uVar14 >> 1 | 0x8000000000000000) {
                      uVar38 = uVar38 + 1;
                    }
                    uVar14 = (uint64_t)(uVar38 >> 3);
                  }
                }
                else {
joined_r0x7fffa4aba7df:
                  if ((puVar57 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
                     ((uint32_t)*puVar25 == (uint32_t)*puVar57)) {
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
                    puVar57 = (uint64_t *)((int64_t)puVar57 + 4);
                  }
                  if ((puVar57 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
                     ((short)*puVar25 == (short)*puVar57)) {
                    puVar57 = (uint64_t *)((int64_t)puVar57 + 2);
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
                  }
                  if (puVar57 < puVar2) {
                    puVar57 = (uint64_t *)
                              ((int64_t)puVar57 + (uint64_t)((char)*puVar25 == (char)*puVar57));
                  }
                  uVar14 = (int64_t)puVar57 - (int64_t)puVar52;
                }
                *(int *)(uVar19 + (*puVar62 * -0x30e4432340650000 >> (bVar17 & 0x3f)) * 4) =
                     (int)puVar62 - iVar13;
                if (puVar62 <= puVar30) {
                  uVar61 = puVar62[1];
                  puVar52 = (uint64_t *)param_2[3];
                  *puVar52 = *puVar62;
                  puVar52[1] = uVar61;
                }
                *(uint16_t *)(param_2[1] + 4) = 0;
                *(uint32_t *)param_2[1] = 1;
                if (0xffff < uVar14 + 1) {
                  *(uint32_t *)(param_2 + 9) = 2;
                  lVar63 = -*param_2;
                  if ((int)(-0x71cb164e << (bVar15 & 0x1f) | 0x8e34e9b2U >> 0x20 - (bVar15 & 0x1f))
                      <= (int)(0x34caf57 - uVar66)) {
                    lVar63 = *param_2;
                  }
                  *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar63 + param_2[1]) >> 3);
                }
                *(short *)(param_2[1] + 6) = (short)(uVar14 + 1);
                param_2[1] = param_2[1] + 8;
                puVar62 = (uint64_t *)((int64_t)puVar62 + uVar14 + 4);
                uVar14 = uVar60;
                uVar60 = uVar39;
                uVar38 = (uint32_t)uStack_1b0;
                uStack_1b0._0_4_ = uVar37;
              } while (puVar62 <= puVar36);
            }
          }
          puVar52 = (uint64_t *)((int64_t)puVar62 + 3);
          param_4 = puVar62;
        } while (puVar52 < puVar36);
      }
      else {
        puVar62 = param_4;
      }
LAB_7fffa4abab91:
      if (uVar50 <= uVar18) {
        uVar50 = 0;
      }
      uVar48 = uVar50;
      if (uVar38 != 0) {
        uVar48 = uVar46;
      }
      if (uVar46 <= uVar18) {
        uVar48 = uVar50;
      }
      uVar37 = 0;
      if (uVar18 < uVar46) {
        uVar37 = uVar46;
      }
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      *param_3 = uVar37;
    }
    else {
      if (uVar37 != 7) goto LAB_7fffa4ab77d0;
      if (puVar52 < puVar36) {
        puVar30 = (uint64_t *)((int64_t)puVar2 - 1);
        puVar58 = puVar2 + -4;
        puVar57 = (uint64_t *)((int64_t)puVar2 - 7);
        uVar37 = 0x40 - iVar45;
        uVar14 = (uint64_t)uVar37;
        do {
          lVar63 = -(uint64_t)uVar38;
          puVar25 = puVar62 + 0x10;
          bVar17 = (uint8_t)uVar37;
          uVar67 = *puVar62 * -0x30e44323405a9d00 >> (bVar17 & 0x3f);
          uVar39 = *(uint64_t *)((int64_t)puVar62 + 1);
          uVar47 = *(uint32_t *)(uVar19 + uVar67 * 4);
          puVar28 = (uint64_t *)((int64_t)puVar62 + 2);
          uVar61 = 2;
          puVar27 = (uint64_t *)((int64_t)puVar62 + 1);
          while( true ) {
            puVar31 = puVar28;
            uVar39 = uVar39 * -0x30e44323405a9d00 >> (bVar17 & 0x3f);
            uVar35 = (int)puVar62 - iVar13;
            uVar34 = *(uint32_t *)((int64_t)puVar31 + lVar63);
            *(uint32_t *)(uVar19 + uVar67 * 4) = uVar35;
            if ((uVar38 != 0) && ((uint32_t)*puVar31 == uVar34)) {
              uVar61 = (uint64_t)
                       (*(char *)((int64_t)puVar31 - 1) ==
                       *(char *)((int64_t)puVar31 + lVar63 + -1));
              puVar52 = (uint64_t *)((int64_t)puVar31 + (lVar63 - uVar61));
              puVar62 = (uint64_t *)((int64_t)puVar31 - uVar61);
              *(int *)(uVar19 + uVar39 * 4) = (int)puVar27 - iVar13;
              uVar61 = uVar61 | 4;
              iVar45 = 1;
              uVar47 = uVar38;
              goto LAB_7fffa4ab5390;
            }
            if ((uVar48 <= uVar47) &&
               (uVar40 = (uint64_t)uVar47, (uint32_t)*puVar62 == *(uint32_t *)(lVar9 + uVar40))) {
              puVar31 = puVar27;
              goto LAB_7fffa4ab5190;
            }
            uVar67 = ((0x748a5c3378cede23 - uVar60 << 0x26 | 0x748a5c3378cede23 - uVar60 >> 0x1a) -
                     0x62f1a9cd) * *puVar31 >> (bVar17 & 0x3f);
            uVar35 = (int)puVar27 - iVar13;
            uVar47 = *(uint32_t *)(uVar19 + uVar39 * 4);
            uVar40 = (uint64_t)uVar47;
            *(uint32_t *)(uVar19 + uVar39 * 4) = uVar35;
            if ((uVar48 <= uVar47) && ((uint32_t)*puVar27 == *(uint32_t *)(lVar9 + uVar40))) break;
            uVar47 = *(uint32_t *)(uVar19 + uVar67 * 4);
            if ((uint64_t *)((int64_t)puVar31 + uVar61) < puVar25) {
              uVar40 = uVar61;
            }
            else {
              uVar40 = uVar61 + 1;
              puVar25 = puVar25 + 0x10;
            }
            puVar68 = (uint64_t *)(uVar61 + (int64_t)puVar52);
            uVar39 = *puVar52;
            puVar28 = (uint64_t *)((int64_t)puVar31 + uVar61);
            puVar62 = puVar31;
            uVar61 = uVar40;
            puVar27 = puVar52;
            puVar52 = puVar68;
            if (puVar36 <= puVar68) {
              puVar62 = param_4;
              goto LAB_7fffa4abab27;
            }
          }
          uVar39 = uVar67;
          puVar62 = puVar27;
          if (uVar61 < 5) {
LAB_7fffa4ab5190:
            *(int *)(uVar19 + uVar39 * 4) = (int)puVar31 - iVar13;
          }
          puVar52 = (uint64_t *)(uVar40 + lVar9);
          uVar34 = (uint32_t)puVar52;
          uVar29 = ~uVar34;
          uVar23 = (uint32_t)puVar62;
          uVar59 = uVar23 ^ uVar34;
          uVar34 = uVar34 + 1;
          if ((uint64_t)(uVar66 + 0xfe36aba0 >> 1 | (uint32_t)((uVar66 + 0xfe36aba0 & 1) != 0) << 0x1f)
              != 0xffffffffef567dc5) {
            uVar34 = uVar29;
          }
          iVar45 = uVar59 * ((uVar66 ^ 0xa7dc32c3) << 0x1c | (uVar66 ^ 0xa7dc32c3) >> 4);
          if ((int64_t)
              (uint64_t)(0x470ad56a << (bVar15 & 0x1f) | 0x470ad56aU >> 0x20 - (bVar15 & 0x1f)) <=
              (int64_t)
              (int)(-0x420068b2 << (bVar15 & 0x1f) | 0xbdff974eU >> 0x20 - (bVar15 & 0x1f))) {
            iVar45 = uVar59 + (0x20c96eb1 - uVar66) * -0x946955f;
          }
          iVar69 = iVar45 + uVar59 * -0x3e64e5e0 + (uVar23 & uVar29) * 2 +
                   (uVar34 ^ uVar23) * (0x43debb33 - uVar66);
          uVar34 = (uVar29 ^ uVar23) * -0x24c4c03;
          if (0x7304b05d - uVar66 <= ~(uVar66 ^ 0x4fccc808) * 0x45cc8e33) {
            uVar34 = ((uVar66 ^ 0xdc0d80dd) << 0x15 | (uVar66 ^ 0xdc0d80dd) >> 0xb) &
                     (uVar29 ^ uVar23);
          }
          iVar45 = uVar34 + iVar69 + 3;
          uVar61 = 4;
          if ((uVar48 < uVar47) && (param_4 < puVar62)) {
            while( true ) {
              puVar28 = (uint64_t *)((int64_t)puVar62 + -1);
              puVar25 = (uint64_t *)((int64_t)puVar52 + -1);
              if (*(char *)puVar28 != *(char *)puVar25) break;
              uVar61 = uVar61 + 1;
              puVar62 = puVar28;
              puVar52 = puVar25;
              if ((puVar25 <= puVar42) || (puVar28 <= param_4)) break;
            }
          }
          uVar47 = iVar69 + uVar34;
          uStack_1b0._0_4_ = uVar38;
LAB_7fffa4ab5390:
          puVar25 = (uint64_t *)((int64_t)puVar62 + uVar61);
          puVar52 = (uint64_t *)((int64_t)puVar52 + uVar61);
          if (puVar25 < puVar57) {
            if (*puVar52 == *puVar25) {
              lVar63 = 8;
LAB_7fffa4ab53e3:
              puVar28 = (uint64_t *)((int64_t)puVar25 + lVar63);
              if (puVar28 < puVar57) {
                if (*(uint64_t *)((int64_t)puVar52 + lVar63) == *puVar28)
                goto code_r0x7fffa4ab53ff;
                uVar38 = 0;
                for (uVar39 = *puVar28 ^ *(uint64_t *)((int64_t)puVar52 + lVar63);
                    (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                  uVar38 = uVar38 + 1;
                }
                uVar39 = (uint64_t)(uVar38 >> 3) + lVar63;
                goto LAB_7fffa4ab54dc;
              }
              puVar52 = (uint64_t *)((int64_t)puVar52 + lVar63);
              goto LAB_7fffa4ab5420;
            }
            uVar38 = 0;
            for (uVar39 = *puVar25 ^ *puVar52; (uVar39 & 1) == 0;
                uVar39 = uVar39 >> 1 | 0x8000000000000000) {
              uVar38 = uVar38 + 1;
            }
            uVar39 = (uint64_t)(uVar38 >> 3);
          }
          else {
            puVar28 = puVar25;
LAB_7fffa4ab5420:
            if (puVar28 < (uint64_t *)((int64_t)puVar2 - 3U)) {
              bVar70 = (uint32_t)*puVar52 <= (uint32_t)*puVar28;
              if (0x9509f58c - uVar66 < 0xb34ebaaa - uVar66) {
                bVar70 = (uint32_t)*puVar52 == (uint32_t)*puVar28;
              }
              if (bVar70) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
                puVar52 = (uint64_t *)((int64_t)puVar52 + 4);
              }
            }
            if ((puVar28 < puVar30) && ((short)*puVar52 == (short)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              puVar52 = (uint64_t *)((int64_t)puVar52 + 2);
            }
            if (puVar28 < puVar2) {
              puVar28 = (uint64_t *)
                        ((int64_t)puVar28 + (uint64_t)((char)*puVar52 == (char)*puVar28));
            }
            uVar39 = (int64_t)puVar28 - (int64_t)puVar25;
          }
LAB_7fffa4ab54dc:
          puVar52 = (uint64_t *)param_2[3];
          uVar67 = (int64_t)puVar62 - (int64_t)param_4;
          if (puVar58 < puVar62) {
            if (puVar58 < param_4) {
              puStack_78 = param_4;
              puVar25 = puVar52;
            }
            else {
              uVar40 = param_4[1];
              puVar25 = (uint64_t *)(((int64_t)puVar58 - (int64_t)param_4) + (int64_t)puVar52);
              *puVar52 = *param_4;
              puVar52[1] = uVar40;
              puStack_78 = puVar58;
              if (0x10 < (int64_t)puVar58 - (int64_t)param_4) {
                lVar63 = 0x10;
                while( true ) {
                  uVar10 = ((uint64_t *)((int64_t)param_4 + lVar63))[1];
                  *(uint64_t *)((int64_t)puVar52 + lVar63) =
                       *(uint64_t *)((int64_t)param_4 + lVar63);
                  ((uint64_t *)((int64_t)puVar52 + lVar63))[1] = uVar10;
                  puVar4 = (uint64_t *)((int64_t)param_4 + lVar63 + 0x10);
                  uVar10 = puVar4[1];
                  puVar5 = (uint64_t *)((int64_t)puVar52 + lVar63 + 0x10);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar10;
                  if (puVar25 <= (uint64_t *)((int64_t)puVar52 + lVar63 + 0x20)) break;
                  lVar63 = lVar63 + 0x20;
                }
              }
            }
            if (puStack_78 < puVar62) {
              uVar40 = (int64_t)puVar62 - (int64_t)puStack_78;
              puVar52 = puVar25;
              if (!(uVar40 < 4 || (uint64_t)((int64_t)puVar25 - (int64_t)puStack_78) < 0x20)) {
                if (uVar40 < 0x20) {
                  uVar53 = 0;
                }
                else {
                  uVar53 = uVar40 & 0xffffffffffffffe0;
                  lVar63 = 0;
                  while( true ) {
                    uVar10 = ((uint64_t *)((int64_t)puStack_78 + lVar63))[1];
                    puVar4 = (uint64_t *)((int64_t)puStack_78 + lVar63 + 0x10);
                    uVar11 = *puVar4;
                    uVar12 = puVar4[1];
                    *(uint64_t *)((int64_t)puVar25 + lVar63) =
                         *(uint64_t *)((int64_t)puStack_78 + lVar63);
                    ((uint64_t *)((int64_t)puVar25 + lVar63))[1] = uVar10;
                    puVar4 = (uint64_t *)((int64_t)puVar25 + lVar63 + 0x10);
                    *puVar4 = uVar11;
                    puVar4[1] = uVar12;
                    if (uVar53 - 0x20 == lVar63) break;
                    lVar63 = lVar63 + 0x20;
                  }
                  if (uVar40 == uVar53) goto LAB_7fffa4ab5d4d;
                  if ((uVar40 & 0x1c) == 0) {
                    puVar52 = (uint64_t *)((int64_t)puVar25 + uVar53);
                    puStack_78 = (uint64_t *)((int64_t)puStack_78 + uVar53);
                    goto LAB_7fffa4ab5c8f;
                  }
                }
                uVar26 = uVar40 ^ 0xfffffffffffffffc;
                uVar38 = (uint32_t)uVar40 & 3;
                uVar32 = ~uVar14;
                uVar34 = (uint32_t)uVar32 & uVar38;
                uVar71 = -uVar14;
                if ((0xb90c1e84U >> (bVar15 & 0x1f) | -0x46f3e17c << 0x20 - (bVar15 & 0x1f)) !=
                    0x55714733) {
                  uVar71 = uVar32;
                }
                uVar22 = (uVar60 ^ 0xc304e54521c55342) * 0xab8da07;
                uVar55 = uVar22 ^ 0xd0109ca3;
                uVar56 = ~uVar40;
                uVar41 = uVar14 ^ (uVar56 | 0xfffffffffffffffc);
                uVar20 = ~uVar19;
                uVar24 = uVar40 | 0xfffffffffffffffc;
                uVar29 = uVar37 & (uint32_t)uVar20;
                uVar33 = -uVar19;
                if ((uint64_t)
                    (-0x7fd9f582 << (bVar15 & 0x1f) | 0x80260a7eU >> 0x20 - (bVar15 & 0x1f)) <=
                    (uint64_t)
                    (int64_t)
                    (int)(0x4b7bdac2U >> (bVar15 & 0x1f) | 0x4b7bdac2 << 0x20 - (bVar15 & 0x1f))) {
                  uVar33 = uVar20;
                }
                uVar65 = (uVar33 ^ uVar41) * 0x192d4934 +
                         ((uVar40 | 3) & uVar14 ^ uVar19) * -0xa40ea27 +
                         (uVar19 | uVar32 & uVar26) * 0xfe24d844;
                uVar33 = (uVar56 | 0xfffffffffffffffc | uVar32) & uVar19;
                uVar22 = (uVar33 & 0xffffffff) * (uVar55 & 0xffffffff) +
                         ((uVar33 >> 0x20) * (uVar55 & 0xffffffff) +
                          (uVar22 >> 0x20) * (uVar33 & 0xffffffff) << 0x20);
                uVar33 = uVar65 ^ uVar22;
                if (uVar66 + 0xf8b100b4 <
                    ((uVar66 + 0xc5c50779) * 0x2000 | uVar66 + 0xc5c50779 >> 0x13) * -0x5978753d) {
                  uVar33 = uVar22 + uVar65;
                }
                uVar22 = uVar20 | uVar41;
                if ((0x8df14d7 << (bVar15 & 0x1f) | 0x8df14d7U >> 0x20 - (bVar15 & 0x1f)) !=
                    0x3daa1ebc) {
                  uVar22 = uVar20 ^ uVar41;
                }
                uVar71 = (uVar20 & (uVar26 ^ uVar14)) * 0xa40ea28 +
                         (uint64_t)(uVar38 & uVar29) * -0xfe24d843 +
                         (((uVar56 & 0x3ffffffffffffffc | uVar14) ^ uVar19) * 0x10865c26c -
                         (uVar14 & uVar24 ^ uVar19)) +
                         ((uVar40 & 0xfffffffffffffffc | uVar14) ^ uVar19) * 0x10865c26b +
                         (uVar34 & uVar19) * -0x210cb84d6 +
                         (uVar32 & uVar26 & uVar20) * -0x10865c26e +
                         ((~(uVar14 | uVar19) & uVar24) - (uint64_t)((uint32_t)uVar56 & uVar29 & 3)) *
                         2 + ((uVar71 | uVar26) & uVar19) * 0xa40ea26 + uVar22 * -0x121930b9e +
                         ((uVar24 | uVar14) ^ uVar19) *
                         ((-0x180afa3f40001 << (bVar15 & 0x3f) |
                          0xfffe7f505c0bffffU >> 0x40 - (bVar15 & 0x3f)) ^ 0x88ca619f) + uVar33 +
                         (uint64_t)(uVar34 & (uint32_t)uVar20) *
                         (0x84d60000000210cbU >> (bVar15 & 0x3f) |
                         -0x7b29fffffffdef35 << 0x40 - (bVar15 & 0x3f));
                puVar52 = (uint64_t *)(uVar71 + (int64_t)puVar25);
                for (; *(uint32_t *)((int64_t)puVar25 + uVar53) =
                            *(uint32_t *)((int64_t)puStack_78 + uVar53), uVar71 - 4 != uVar53;
                    uVar53 = uVar53 + 4) {
                }
                if (uVar40 == uVar71) goto LAB_7fffa4ab5d4d;
                puStack_78 = (uint64_t *)((int64_t)puStack_78 + uVar71);
              }
LAB_7fffa4ab5c8f:
              uVar38 = (int)puVar62 - (int)puStack_78 & 7;
              uVar40 = (uint64_t)uVar38;
              puVar25 = puStack_78;
              if (uVar38 != 0) {
                do {
                  uVar53 = *puVar25;
                  puVar25 = (uint64_t *)((int64_t)puVar25 + 1);
                  *(char *)puVar52 = (char)uVar53;
                  puVar52 = (uint64_t *)((int64_t)puVar52 + 1);
                  uVar40 = uVar40 - 1;
                } while (uVar40 != 0);
              }
              if ((uint64_t)((int64_t)puStack_78 - (int64_t)puVar62) < 0xfffffffffffffff9) {
                while( true ) {
                  *(char *)puVar52 = (char)*puVar25;
                  *(uint8_t *)((int64_t)puVar52 + 1) = *(uint8_t *)((int64_t)puVar25 + 1);
                  *(uint8_t *)((int64_t)puVar52 + 2) = *(uint8_t *)((int64_t)puVar25 + 2);
                  *(uint8_t *)((int64_t)puVar52 + 3) = *(uint8_t *)((int64_t)puVar25 + 3);
                  *(uint8_t *)((int64_t)puVar52 + 4) = *(uint8_t *)((int64_t)puVar25 + 4);
                  *(uint8_t *)((int64_t)puVar52 + 5) = *(uint8_t *)((int64_t)puVar25 + 5);
                  *(uint8_t *)((int64_t)puVar52 + 6) = *(uint8_t *)((int64_t)puVar25 + 6);
                  *(uint8_t *)((int64_t)puVar52 + 7) = *(uint8_t *)((int64_t)puVar25 + 7);
                  if (puVar25 + 1 == puVar62) break;
                  puVar52 = puVar52 + 1;
                  puVar25 = puVar25 + 1;
                }
              }
            }
LAB_7fffa4ab5d4d:
            lVar63 = param_2[1];
            param_2[3] = param_2[3] + uVar67;
            if (0xffff < uVar67) {
              *(uint32_t *)(param_2 + 9) = 1;
              uVar38 = (uint32_t)((uint64_t)(lVar63 - *param_2) >> 3);
              if (~((uVar66 | 1) * 0x198a1ac7) <= ~(uVar66 ^ 0xfb5d64cb)) {
                uVar38 = (uint32_t)(lVar63 - *param_2) | 3;
              }
              *(uint32_t *)((int64_t)param_2 + 0x4c) = uVar38;
            }
          }
          else {
            uVar40 = param_4[1];
            *puVar52 = *param_4;
            puVar52[1] = uVar40;
            if (0x10 < uVar67) {
              lVar63 = param_2[3];
              uVar40 = param_4[3];
              *(uint64_t *)(lVar63 + 0x10) = param_4[2];
              *(uint64_t *)(lVar63 + 0x18) = uVar40;
              bVar70 = (int64_t)uVar67 < 0x21;
              if ((0x493b97cfU >> (bVar15 & 0x1f) | 0x493b97cf << 0x20 - (bVar15 & 0x1f)) <
                  uVar66 + 0x110d0522) {
                bVar70 = (int64_t)uVar67 <= (int64_t)(uint64_t)(0x41926f51 - uVar66);
              }
              if (!bVar70) {
                lVar43 = 0;
                do {
                  puVar5 = (uint64_t *)((int64_t)param_4 + lVar43 + 0x20);
                  uVar10 = puVar5[1];
                  puVar4 = (uint64_t *)(lVar63 + 0x20 + lVar43);
                  *puVar4 = *puVar5;
                  puVar4[1] = uVar10;
                  puVar4 = (uint64_t *)((int64_t)param_4 + lVar43 + 0x30);
                  uVar10 = puVar4[1];
                  puVar5 = (uint64_t *)(lVar63 + 0x30 + lVar43);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar10;
                  lVar51 = lVar63 + 0x20 + lVar43;
                  lVar43 = lVar43 + 0x20;
                } while (lVar51 + 0x20U < uVar67 + lVar63);
              }
              goto LAB_7fffa4ab5d4d;
            }
            param_2[3] = param_2[3] + uVar67;
            lVar63 = param_2[1];
          }
          uVar40 = (uVar39 + uVar61) - 3;
          *(short *)(lVar63 + 4) = (short)uVar67;
          *(int *)param_2[1] = iVar45;
          if (0xffff < uVar40) {
            *(uint32_t *)(param_2 + 9) = 2;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
          }
          puVar62 = (uint64_t *)((int64_t)puVar62 + uVar39 + uVar61);
          *(short *)(param_2[1] + 6) = (short)uVar40;
          param_2[1] = param_2[1] + 8;
          uVar38 = uVar47;
          if (puVar36 < puVar62) {
          }
          else {
            *(uint32_t *)(uVar19 + ((-0x6adb1f6482ff34ff << (bVar15 & 0x3f) |
                                0x9524e09b7d00cb01U >> 0x40 - (bVar15 & 0x3f)) *
                                *(int64_t *)(lVar9 + 2 + (uint64_t)uVar35) * 0x766c5a5f >>
                               (bVar17 & 0x3f)) * 4) = uVar35 + 2;
            *(int *)(uVar19 + ((uint64_t)
                               (*(int64_t *)((int64_t)puVar62 + -2) * -0x30e44323405a9d00) >>
                              (bVar17 & 0x3f)) * 4) = ((int)puVar62 + -2) - iVar13;
            if ((uint32_t)uStack_1b0 == 0) {
              uStack_1b0._0_4_ = 0;
            }
            else {
              uVar39 = (uint64_t)(uint32_t)uStack_1b0;
              uVar61 = (uint64_t)uVar47;
              do {
                uVar67 = uVar39;
                uVar47 = (uint32_t)uVar61;
                uStack_1b0._0_4_ = (uint32_t)uVar67;
                if ((uint32_t)*puVar62 != *(uint32_t *)((int64_t)puVar62 - uVar67)) {
                  uVar38 = uVar47;
                  break;
                }
                lVar63 = -uVar67;
                puVar52 = (uint64_t *)((int64_t)puVar62 + 4);
                puVar28 = (uint64_t *)((int64_t)puVar62 + lVar63 + 4);
                puVar25 = puVar52;
                if (puVar52 < puVar57) {
                  if (*puVar28 == *puVar52) {
                    lVar43 = 0;
                    do {
                      puVar25 = (uint64_t *)((int64_t)puVar62 + lVar43 + 0xc);
                      if (puVar57 <= puVar25) {
                        puVar28 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 0xc);
                        puVar25 = (uint64_t *)((int64_t)puVar62 + lVar43 + 0xc);
                        goto joined_r0x7fffa4ab5ff9;
                      }
                      uVar39 = *(uint64_t *)((int64_t)puVar62 + lVar43 + lVar63 + 0xc);
                      uVar40 = *puVar25;
                      lVar43 = lVar43 + 8;
                    } while (uVar39 == uVar40);
                    uVar38 = 0;
                    for (uVar39 = uVar39 ^ uVar40; (uVar39 & 1) == 0;
                        uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                      uVar38 = uVar38 + 1;
                    }
                    uVar39 = (uint64_t)(uVar38 >> 3) + lVar43;
                  }
                  else {
                    uVar38 = 0;
                    for (uVar39 = *puVar28 ^ *puVar52; (uVar39 & 1) == 0;
                        uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                      uVar38 = uVar38 + 1;
                    }
                    uVar39 = (uint64_t)(uVar38 >> 3);
                  }
                }
                else {
joined_r0x7fffa4ab5ff9:
                  if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
                     ((uint32_t)*puVar28 == (uint32_t)*puVar25)) {
                    puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
                  }
                  bVar70 = puVar25 < puVar30;
                  if (((uVar66 | 1) * 0x6cc00000 | (uVar66 | 1) * 0x2bbd76cc >> 0xc) < 0x2703346) {
                    bVar70 = (int64_t)puVar25 < (int64_t)puVar30;
                  }
                  if ((bVar70) && ((short)*puVar28 == (short)*puVar25)) {
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
                    puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
                  }
                  if (puVar25 < puVar2) {
                    puVar25 = (uint64_t *)
                              ((int64_t)puVar25 + (uint64_t)((char)*puVar28 == (char)*puVar25));
                  }
                  uVar39 = (int64_t)puVar25 - (int64_t)puVar52;
                }
                *(int *)(uVar19 + (~((uVar60 | 1) * 0x2abc98d4f8628000 |
                                    (uVar60 | 1) * -0xe9baa86ce560f3b >> 0x31) * *puVar62 >>
                                  (bVar17 & 0x3f)) * 4) = (int)puVar62 - iVar13;
                if (puVar62 <= puVar58) {
                  uVar40 = puVar62[1];
                  puVar52 = (uint64_t *)param_2[3];
                  *puVar52 = *puVar62;
                  puVar52[1] = uVar40;
                }
                *(uint16_t *)(param_2[1] + 4) = 0;
                *(uint32_t *)param_2[1] = 1;
                uVar40 = uVar39 ^ 1;
                if ((uVar66 | 1) * 0x6798a824 == 0xda7cae4) {
                  uVar40 = uVar39 + 1;
                }
                if (0xffff < uVar40) {
                  *(uint32_t *)(param_2 + 9) = 2;
                  *(int *)((int64_t)param_2 + 0x4c) =
                       (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                }
                *(short *)(param_2[1] + 6) = (short)uVar40;
                param_2[1] = param_2[1] + 8;
                puVar62 = (uint64_t *)((int64_t)puVar62 + uVar39 + 4);
                uVar39 = uVar61;
                uVar61 = uVar67;
                uVar38 = (uint32_t)uStack_1b0;
                uStack_1b0._0_4_ = uVar47;
              } while (puVar62 <= puVar36);
            }
          }
          puVar52 = (uint64_t *)((int64_t)puVar62 + 3);
          param_4 = puVar62;
        } while (puVar52 < puVar36);
      }
      else {
        puVar62 = param_4;
      }
LAB_7fffa4abab27:
      uVar37 = 0;
      if (uVar18 < uVar46) {
        uVar37 = uVar46;
      }
      uVar47 = 0;
      if (uVar18 < uVar50) {
        uVar47 = uVar50;
      }
      uVar48 = uVar47;
      if (uVar38 != 0) {
        uVar48 = uVar46;
        uVar37 = uVar38;
      }
      if (uVar46 <= uVar18) {
        uVar48 = uVar47;
      }
      *param_3 = uVar37;
    }
  }
  else {
    iVar21 = (uVar46 + uVar18) - iVar13;
    uVar18 = iVar21 - uVar50;
    if (iVar21 - uVar38 <= uVar50) {
      uVar18 = uVar38;
    }
    if (iVar69 != 0) {
      uVar18 = uVar38;
    }
    puVar42 = (uint64_t *)((uint64_t)uVar18 + lVar9);
    puVar62 = (uint64_t *)((uint64_t)(param_4 == puVar42) + (int64_t)param_4);
    iVar21 = (int)puVar62 - iVar13;
    uVar46 = iVar21 - uVar50;
    if (iVar21 - uVar38 <= uVar50) {
      uVar46 = uVar38;
    }
    if (iVar69 != 0) {
      uVar46 = uVar38;
    }
    uVar14 = (uint64_t)(uVar34 + 1);
    uVar46 = iVar21 - uVar46;
    uVar50 = *param_3;
    uVar38 = param_3[1];
    uVar47 = uVar50;
    if (uVar46 < uVar50) {
      uVar47 = 0;
    }
    uStack_b0 = (uint64_t)uVar47;
    uStack_1b0._0_4_ = 0;
    if (uVar38 <= uVar46) {
      uStack_1b0._0_4_ = uVar38;
    }
    puVar52 = (uint64_t *)((int64_t)puVar62 + uVar14);
    puVar30 = (uint64_t *)((int64_t)puVar62 + uVar14 + 1);
    if ((int)uVar37 < 6) {
      if ((uVar37 ^ 0x8a5c1c9d) - uVar66 == 0x48c9ad68) {
        bVar15 = (uint8_t)uVar37;
        if (puVar30 < puVar36) {
          puVar58 = puVar2 + -4;
          bVar17 = 0x40 - cVar7;
          puVar57 = (uint64_t *)((int64_t)puVar2 - 7);
          do {
            uVar60 = *(uint64_t *)((int64_t)puVar62 + 1);
            uVar47 = (uint32_t)uStack_b0;
            uVar61 = *puVar62 * -0x30e4432345000000 >> (bVar17 & 0x3f);
            lVar63 = -uStack_b0;
            uVar48 = *(uint32_t *)(uVar19 + uVar61 * 4);
            puVar25 = puVar62 + 0x10;
            uVar39 = uVar14;
            puVar28 = (uint64_t *)((int64_t)puVar62 + 1);
            while( true ) {
              puVar27 = puVar30;
              uVar67 = (uint64_t)uVar48;
              uVar35 = (int)puVar62 - iVar13;
              uVar60 = uVar60 * -0x30e4432345000000 >> (bVar17 & 0x3f);
              uVar34 = *(uint32_t *)((int64_t)puVar52 + lVar63);
              *(uint32_t *)(uVar19 + uVar61 * 4) = uVar35;
              if (((uint32_t)*puVar52 == uVar34) && (uVar47 != 0)) {
                uVar39 = (uint64_t)
                         (*(char *)((int64_t)puVar52 - 1) ==
                         *(char *)((int64_t)puVar52 + lVar63 + -1));
                lVar43 = uVar39 + 4;
                puVar30 = (uint64_t *)((int64_t)puVar52 + (lVar63 - uVar39));
                puVar62 = (uint64_t *)((int64_t)puVar52 - uVar39);
                *(int *)(uVar19 + uVar60 * 4) = (int)puVar28 - iVar13;
                iVar45 = 1;
                goto LAB_7fffa4ab657c;
              }
              if ((uVar18 <= uVar48) && ((uint32_t)*puVar62 == *(uint32_t *)(lVar9 + uVar67)))
              goto LAB_7fffa4ab64a9;
              uVar48 = *(uint32_t *)(uVar19 + uVar60 * 4);
              uVar67 = (uint64_t)uVar48;
              uVar61 = *puVar52 * -0x30e4432345000000 >> (bVar17 & 0x3f);
              uVar35 = (int)puVar28 - iVar13;
              *(uint32_t *)(uVar19 + uVar60 * 4) = uVar35;
              if ((uVar18 <= uVar48) && ((uint32_t)*puVar28 == *(uint32_t *)(lVar9 + uVar67))) break;
              puVar28 = (uint64_t *)((int64_t)puVar52 + uVar39);
              uVar48 = *(uint32_t *)(uVar19 + uVar61 * 4);
              if (puVar28 < puVar25) {
                uVar67 = uVar39;
              }
              else {
                puVar25 = puVar25 + 0x10;
                uVar67 = uVar39 + 1;
              }
              uVar60 = *puVar27;
              puVar30 = (uint64_t *)(uVar39 + (int64_t)puVar27);
              uVar39 = uVar67;
              puVar62 = puVar52;
              puVar52 = puVar28;
              puVar28 = puVar27;
              if (puVar36 <= puVar30) {
                puVar62 = param_4;
                goto LAB_7fffa4aba974;
              }
            }
            puVar62 = puVar28;
            uVar60 = uVar61;
            puVar28 = puVar52;
            if (uVar39 < 5) {
LAB_7fffa4ab64a9:
              *(int *)(uVar19 + uVar60 * 4) = (int)puVar28 - iVar13;
            }
            puVar30 = (uint64_t *)(uVar67 + lVar9);
            uVar34 = (int)puVar62 - (int)puVar30;
            uStack_b0 = (uint64_t)uVar34;
            iVar45 = uVar34 + 3;
            lVar43 = 4;
            if ((uVar18 < uVar48) && (param_4 < puVar62)) {
              for (lVar63 = 0;
                  *(char *)((int64_t)puVar62 + lVar63 + -1) ==
                  *(char *)((int64_t)puVar30 + lVar63 + -1); lVar63 = lVar63 + -1) {
                puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + -1);
                puVar52 = (uint64_t *)((int64_t)puVar30 + lVar63 + -1);
                if ((puVar52 <= puVar42) || (puVar25 <= param_4)) {
                  lVar43 = 5 - lVar63;
                  puVar30 = puVar52;
                  puVar62 = puVar25;
                  goto LAB_7fffa4ab656f;
                }
              }
              puVar62 = (uint64_t *)((int64_t)puVar62 + lVar63);
              lVar43 = 4 - lVar63;
              puVar30 = (uint64_t *)((int64_t)puVar30 + lVar63);
            }
LAB_7fffa4ab656f:
            uStack_1b0._0_4_ = uVar47;
LAB_7fffa4ab657c:
            puVar30 = (uint64_t *)((int64_t)puVar30 + lVar43);
            puVar52 = (uint64_t *)((int64_t)puVar62 + lVar43);
            puVar25 = puVar52;
            if (puVar52 < puVar57) {
              if (*puVar30 == *puVar52) {
                lVar63 = 8;
LAB_7fffa4ab65d0:
                puVar25 = (uint64_t *)((int64_t)puVar52 + lVar63);
                if (puVar25 < puVar57) {
                  if (*(uint64_t *)((int64_t)puVar30 + lVar63) == *puVar25)
                  goto code_r0x7fffa4ab65eb;
                  uVar48 = 0;
                  for (uVar60 = *puVar25 ^ *(uint64_t *)((int64_t)puVar30 + lVar63);
                      (uVar60 & 1) == 0; uVar60 = uVar60 >> 1 | 0x8000000000000000) {
                    uVar48 = uVar48 + 1;
                  }
                  uVar60 = (uint64_t)(uVar48 >> 3) + lVar63;
                  goto LAB_7fffa4ab666c;
                }
                puVar30 = (uint64_t *)((int64_t)puVar30 + lVar63);
                goto joined_r0x7fffa4ab6609;
              }
              uVar48 = 0;
              for (uVar60 = *puVar52 ^ *puVar30; (uVar60 & 1) == 0;
                  uVar60 = uVar60 >> 1 | 0x8000000000000000) {
                uVar48 = uVar48 + 1;
              }
              uVar60 = (uint64_t)(uVar48 >> 3);
            }
            else {
joined_r0x7fffa4ab6609:
              if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
                 ((uint32_t)*puVar30 == (uint32_t)*puVar25)) {
                puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
                puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
              }
              if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
                 ((short)*puVar30 == (short)*puVar25)) {
                puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
                puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
              }
              if (puVar25 < puVar2) {
                puVar25 = (uint64_t *)
                          ((int64_t)puVar25 + (uint64_t)((char)*puVar30 == (char)*puVar25));
              }
              uVar60 = (int64_t)puVar25 - (int64_t)puVar52;
            }
LAB_7fffa4ab666c:
            uVar39 = (int64_t)puVar62 - (int64_t)param_4;
            puVar52 = (uint64_t *)param_2[3];
            if (puVar58 < puVar62) {
              puVar30 = puVar52;
              if (param_4 <= puVar58) {
                uVar61 = param_4[1];
                puVar30 = (uint64_t *)((int64_t)puVar52 + ((int64_t)puVar58 - (int64_t)param_4))
                ;
                *puVar52 = *param_4;
                puVar52[1] = uVar61;
                if (0x10 < (int64_t)puVar58 - (int64_t)param_4) {
                  puVar52 = puVar52 + 6;
                  while( true ) {
                    uVar61 = param_4[3];
                    puVar52[-4] = param_4[2];
                    puVar52[-3] = uVar61;
                    uVar61 = param_4[5];
                    puVar52[-2] = param_4[4];
                    puVar52[-1] = uVar61;
                    if (puVar30 <= puVar52) break;
                    puVar52 = puVar52 + 4;
                    param_4 = param_4 + 4;
                  }
                }
                param_4 = puVar58;
              }
              if (param_4 < puVar62) {
                uVar61 = (int64_t)puVar62 - (int64_t)param_4;
                puVar52 = puVar30;
                if (((uint16_t)(((uVar44 + 0x4dda << (bVar15 & 0xf) |
                               (uint16_t)(uVar44 + 0x4dda) >> 0x10 - (bVar15 & 0xf)) ^ 1) + 0x5eae) <=
                     uVar61) && (0x1f < (uint64_t)((int64_t)puVar30 - (int64_t)param_4))) {
                  if (uVar61 < 0x20) {
                    uVar67 = 0;
                  }
                  else {
                    uVar67 = uVar61 & 0xffffffffffffffe0;
                    lVar63 = 0;
                    while( true ) {
                      uVar10 = ((uint64_t *)((int64_t)param_4 + lVar63))[1];
                      puVar4 = (uint64_t *)((int64_t)param_4 + lVar63 + 0x10);
                      uVar11 = *puVar4;
                      uVar12 = puVar4[1];
                      *(uint64_t *)((int64_t)puVar30 + lVar63) =
                           *(uint64_t *)((int64_t)param_4 + lVar63);
                      ((uint64_t *)((int64_t)puVar30 + lVar63))[1] = uVar10;
                      puVar4 = (uint64_t *)((int64_t)puVar30 + lVar63 + 0x10);
                      *puVar4 = uVar11;
                      puVar4[1] = uVar12;
                      if (uVar67 - 0x20 == lVar63) break;
                      lVar63 = lVar63 + 0x20;
                    }
                    if (uVar61 == uVar67) goto LAB_7fffa4ab6886;
                    if ((uVar61 & 0x1c) == 0) {
                      param_4 = (uint64_t *)((int64_t)param_4 + uVar67);
                      puVar52 = (uint64_t *)((int64_t)puVar30 + uVar67);
                      goto LAB_7fffa4ab6848;
                    }
                  }
                  uVar40 = uVar61 & 0xfffffffffffffffc;
                  puVar52 = (uint64_t *)((int64_t)puVar30 + uVar40);
                  for (; *(uint32_t *)((int64_t)puVar30 + uVar67) =
                              *(uint32_t *)((int64_t)param_4 + uVar67), uVar40 - 4 != uVar67;
                      uVar67 = uVar67 + 4) {
                  }
                  if (uVar61 == uVar40) goto LAB_7fffa4ab6886;
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar40);
                }
LAB_7fffa4ab6848:
                uVar48 = (int)puVar62 - (int)param_4 & 7;
                uVar61 = (uint64_t)uVar48;
                puVar25 = puVar52;
                puVar30 = param_4;
                if (uVar48 == 0) {
                  puVar28 = param_4;
                }
                else {
                  do {
                    uVar61 = uVar61 - 1;
                    puVar52 = (uint64_t *)((int64_t)puVar25 + 1);
                    *(char *)puVar25 = (char)*puVar30;
                    puVar28 = (uint64_t *)((int64_t)puVar30 + 1);
                    puVar25 = puVar52;
                    puVar30 = (uint64_t *)((int64_t)puVar30 + 1);
                  } while (uVar61 != 0);
                }
                if ((uint64_t)((int64_t)param_4 - (int64_t)puVar62) < 0xfffffffffffffff9) {
                  while( true ) {
                    *(char *)puVar52 = (char)*puVar28;
                    *(uint8_t *)((int64_t)puVar52 + 1) = *(uint8_t *)((int64_t)puVar28 + 1);
                    *(uint8_t *)((int64_t)puVar52 + 2) = *(uint8_t *)((int64_t)puVar28 + 2);
                    *(uint8_t *)((int64_t)puVar52 + 3) = *(uint8_t *)((int64_t)puVar28 + 3);
                    *(uint8_t *)((int64_t)puVar52 + 4) = *(uint8_t *)((int64_t)puVar28 + 4);
                    *(uint8_t *)((int64_t)puVar52 + 5) = *(uint8_t *)((int64_t)puVar28 + 5);
                    *(uint8_t *)((int64_t)puVar52 + 6) = *(uint8_t *)((int64_t)puVar28 + 6);
                    *(uint8_t *)((int64_t)puVar52 + 7) = *(uint8_t *)((int64_t)puVar28 + 7);
                    if (puVar28 + 1 == puVar62) break;
                    puVar52 = puVar52 + 1;
                    puVar28 = puVar28 + 1;
                  }
                }
              }
LAB_7fffa4ab6886:
              lVar51 = param_2[1];
              param_2[3] = param_2[3] + uVar39;
              if (0xffff < uVar39) {
                *(uint32_t *)(param_2 + 9) = 1;
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar51 - *param_2) >> 3);
              }
            }
            else {
              uVar61 = param_4[1];
              *puVar52 = *param_4;
              puVar52[1] = uVar61;
              lVar63 = param_2[3];
              if (0x10 < uVar39) {
                uVar61 = param_4[3];
                *(uint64_t *)(lVar63 + 0x10) = param_4[2];
                *(uint64_t *)(lVar63 + 0x18) = uVar61;
                if (0x20 < (int64_t)uVar39) {
                  lVar51 = 0;
                  do {
                    puVar5 = (uint64_t *)((int64_t)param_4 + lVar51 + 0x20);
                    uVar10 = puVar5[1];
                    puVar4 = (uint64_t *)(lVar63 + 0x20 + lVar51);
                    *puVar4 = *puVar5;
                    puVar4[1] = uVar10;
                    puVar4 = (uint64_t *)((int64_t)param_4 + lVar51 + 0x30);
                    uVar10 = puVar4[1];
                    puVar5 = (uint64_t *)(lVar63 + 0x30 + lVar51);
                    *puVar5 = *puVar4;
                    puVar5[1] = uVar10;
                    lVar1 = lVar63 + 0x20 + lVar51;
                    lVar51 = lVar51 + 0x20;
                  } while (lVar1 + 0x20U < lVar63 + uVar39);
                }
                goto LAB_7fffa4ab6886;
              }
              lVar51 = param_2[1];
              param_2[3] = lVar63 + uVar39;
            }
            uVar61 = (lVar43 + uVar60) - 3;
            *(short *)(lVar51 + 4) = (short)uVar39;
            *(int *)param_2[1] = iVar45;
            if (0xffff < uVar61) {
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
              *(uint32_t *)(param_2 + 9) = 2;
            }
            *(short *)(param_2[1] + 6) = (short)uVar61;
            param_2[1] = param_2[1] + 8;
            puVar62 = (uint64_t *)((int64_t)puVar62 + lVar43 + uVar60);
            if (puVar36 < puVar62) {
LAB_7fffa4ab6b82:
            }
            else {
              *(uint32_t *)(uVar19 + ((uint64_t)
                                  (*(int64_t *)(lVar9 + 2 + (uint64_t)uVar35) *
                                  -0x30e4432345000000) >> (bVar17 & 0x3f)) * 4) = uVar35 + 2;
              *(int *)(uVar19 + ((uint64_t)
                                 (*(int64_t *)((int64_t)puVar62 + -2) * -0x30e4432345000000) >>
                                (bVar17 & 0x3f)) * 4) = ((int)puVar62 + -2) - iVar13;
              if ((uint32_t)uStack_1b0 == 0) {
                uStack_1b0._0_4_ = 0;
                goto LAB_7fffa4ab6b82;
              }
              do {
                uVar48 = (uint32_t)uStack_b0;
                if ((uint32_t)*puVar62 != *(uint32_t *)((int64_t)puVar62 - (uint64_t)(uint32_t)uStack_1b0))
                break;
                lVar63 = -(uint64_t)(uint32_t)uStack_1b0;
                puVar52 = (uint64_t *)((int64_t)puVar62 + 4);
                puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + 4);
                puVar30 = puVar52;
                if (puVar52 < puVar57) {
                  if (*puVar25 == *puVar52) {
                    lVar43 = 0;
                    do {
                      puVar30 = (uint64_t *)((int64_t)puVar62 + lVar43 + 0xc);
                      if (puVar57 <= puVar30) {
                        puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 0xc);
                        puVar30 = (uint64_t *)((int64_t)puVar62 + lVar43 + 0xc);
                        goto joined_r0x7fffa4ab6a6d;
                      }
                      uVar60 = *puVar30;
                      uVar39 = *(uint64_t *)((int64_t)puVar62 + lVar43 + lVar63 + 0xc);
                      lVar43 = lVar43 + 8;
                    } while (uVar39 == uVar60);
                    uVar47 = 0;
                    for (uVar60 = uVar60 ^ uVar39; (uVar60 & 1) == 0;
                        uVar60 = uVar60 >> 1 | 0x8000000000000000) {
                      uVar47 = uVar47 + 1;
                    }
                    uVar60 = (uint64_t)(uVar47 >> 3) + lVar43;
                  }
                  else {
                    uVar47 = 0;
                    for (uVar60 = *puVar25 ^ *puVar52; (uVar60 & 1) == 0;
                        uVar60 = uVar60 >> 1 | 0x8000000000000000) {
                      uVar47 = uVar47 + 1;
                    }
                    uVar60 = (uint64_t)(uVar47 >> 3);
                  }
                }
                else {
joined_r0x7fffa4ab6a6d:
                  if ((puVar30 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
                     ((uint32_t)*puVar25 == (uint32_t)*puVar30)) {
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
                    puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
                  }
                  if ((puVar30 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
                     ((short)*puVar25 == (short)*puVar30)) {
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
                    puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
                  }
                  if (puVar30 < puVar2) {
                    puVar30 = (uint64_t *)
                              ((int64_t)puVar30 + (uint64_t)((char)*puVar25 == (char)*puVar30));
                  }
                  uVar60 = (int64_t)puVar30 - (int64_t)puVar52;
                }
                *(int *)(uVar19 + (*puVar62 * -0x30e4432345000000 >> (bVar17 & 0x3f)) * 4) =
                     (int)puVar62 - iVar13;
                if (puVar62 <= puVar58) {
                  uVar39 = puVar62[1];
                  puVar52 = (uint64_t *)param_2[3];
                  *puVar52 = *puVar62;
                  puVar52[1] = uVar39;
                }
                *(uint16_t *)(param_2[1] + 4) = 0;
                *(uint32_t *)param_2[1] = 1;
                if (0xffff < uVar60 + 1) {
                  *(uint32_t *)(param_2 + 9) = 2;
                  *(int *)((int64_t)param_2 + 0x4c) =
                       (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                }
                *(short *)(param_2[1] + 6) = (short)(uVar60 + 1);
                param_2[1] = param_2[1] + 8;
                puVar62 = (uint64_t *)((int64_t)puVar62 + uVar60 + 4);
                uStack_b0 = (uint64_t)(uint32_t)uStack_1b0;
                uStack_1b0._0_4_ = uVar48;
              } while (puVar62 <= puVar36);
            }
            uVar47 = (uint32_t)uStack_b0;
            puVar52 = (uint64_t *)((int64_t)puVar62 + uVar14);
            puVar30 = (uint64_t *)((int64_t)puVar62 + uVar14 + 1);
            param_4 = puVar62;
          } while (puVar30 < puVar36);
        }
        else {
          puVar62 = param_4;
        }
LAB_7fffa4aba974:
        if (uVar38 <= uVar46) {
          uVar38 = 0;
        }
        uVar44 = (uVar44 | 1) * -0x2b5f;
        uVar18 = (uint32_t)(uint16_t)((uVar44 << (bVar15 & 0xf) | uVar44 >> 0x10 - (bVar15 & 0xf)) +
                               0xc5d0);
        uVar48 = uVar38;
        if (uVar47 != uVar18) {
          uVar48 = uVar50;
        }
        if (uVar50 <= uVar46) {
          uVar48 = uVar38;
          uVar50 = 0;
        }
        if (uVar47 != uVar18) {
          uVar50 = uVar47;
        }
        *param_3 = uVar50;
        if (~(uVar37 + 0x7f55a59d) * (uVar66 | 1) + 0x6e0410a8 <
            (0x2eb8808eU >> (bVar15 & 0x1f) | 0x2eb8808e << 0x20 - (bVar15 & 0x1f)) - uVar66 ==
            ((uint32_t)uStack_1b0 != 0)) {
          uVar48 = (uint32_t)uStack_1b0;
        }
        goto LAB_7fffa4abac45;
      }
LAB_7fffa4ab835d:
      if (puVar30 < puVar36) {
        puVar58 = puVar2 + -4;
        puVar57 = (uint64_t *)((int64_t)puVar2 - 7);
        puVar25 = param_4;
LAB_7fffa4ab83e0:
        bVar17 = (uint8_t)(0x20 - iVar45);
        uVar39 = (uint64_t)((uint32_t)*puVar62 * -0x61c8864f >> (bVar17 & 0x1f));
        puVar28 = puVar62 + 0x10;
        uVar48 = *(uint32_t *)(uVar19 + uVar39 * 4);
        uVar47 = (uint32_t)uStack_b0;
        lVar63 = -uStack_b0;
        uVar37 = *(uint32_t *)((int64_t)puVar62 + 1);
        puVar27 = (uint64_t *)((int64_t)puVar62 + 1);
        uVar60 = uVar14;
        do {
          uVar61 = (uint64_t)uVar48;
          uVar67 = (uint64_t)(uVar37 * -0x61c8864f >> (bVar17 & 0x1f));
          uVar34 = (int)puVar62 - iVar13;
          uVar37 = *(uint32_t *)((int64_t)puVar52 + lVar63);
          *(uint32_t *)(uVar19 + uVar39 * 4) = uVar34;
          if (((uint32_t)*puVar52 == uVar37) && (uVar47 != 0)) {
            uVar60 = (uint64_t)
                     (*(char *)((int64_t)puVar52 - 1) == *(char *)((int64_t)puVar52 + lVar63 + -1)
                     );
            lVar43 = uVar60 + 4;
            puVar62 = (uint64_t *)((int64_t)puVar52 - uVar60);
            puVar52 = (uint64_t *)((int64_t)puVar52 + (lVar63 - uVar60));
            *(int *)(uVar19 + uVar67 * 4) = (int)puVar27 - iVar13;
            iVar69 = 1;
            uStack_1b0 = (uint64_t)(uint32_t)uStack_1b0;
            uStack_1d0 = uStack_b0;
            goto LAB_7fffa4ab8703;
          }
          if ((uVar18 <= uVar48) && ((uint32_t)*puVar62 == *(uint32_t *)(lVar9 + uVar61))) {
            puVar52 = puVar27;
            goto LAB_7fffa4ab85ed;
          }
          uVar39 = (uint64_t)((uint32_t)*puVar52 * -0x61c8864f >> (bVar17 & 0x1f));
          uVar48 = *(uint32_t *)(uVar19 + uVar67 * 4);
          uVar34 = (int)puVar27 - iVar13;
          *(uint32_t *)(uVar19 + uVar67 * 4) = uVar34;
          if (uVar18 <= uVar48) {
            uVar61 = (uint64_t)uVar48;
            if ((uint64_t)(int64_t)(int)(uVar66 + 0x473c3d7f) < (uint64_t)(uVar66 ^ 0xccf5d260))
            {
              uVar61 = (int64_t)(int)uVar48;
            }
            if ((uint32_t)*puVar27 == *(uint32_t *)(lVar9 + uVar61)) goto LAB_7fffa4ab85e1;
          }
          uVar48 = *(uint32_t *)(uVar19 + uVar39 * 4);
          if ((uint64_t *)((int64_t)puVar52 + uVar60) < puVar28) {
            uVar61 = uVar60;
          }
          else {
            uVar61 = uVar60 + 1;
            puVar28 = puVar28 + 0x10;
          }
          puVar31 = (uint64_t *)(uVar60 + (int64_t)puVar30);
          uVar37 = (uint32_t)*puVar30;
          puVar27 = puVar30;
          puVar30 = puVar31;
          puVar62 = puVar52;
          puVar52 = (uint64_t *)((int64_t)puVar52 + uVar60);
          uVar60 = uVar61;
          if (puVar36 <= puVar31) {
            puVar62 = puVar25;
            goto LAB_7fffa4ab9d73;
          }
        } while( true );
      }
      puVar62 = param_4;
LAB_7fffa4ab9d73:
      if (uVar38 <= uVar46) {
        uVar38 = 0;
      }
      uVar37 = (uVar66 ^ 0x6f30) & 0xffff;
      uVar48 = uVar38;
      if (uVar47 != uVar37) {
        uVar48 = uVar50;
      }
      if (uVar50 <= uVar46) {
        uVar48 = uVar38;
        uVar50 = 0;
      }
      bVar70 = uVar47 == uVar37;
    }
    else {
      if (uVar37 == 6) {
        if (puVar30 < puVar36) {
          puVar58 = (uint64_t *)((int64_t)puVar2 - 7);
          puVar57 = puVar2 + -4;
          do {
            puVar25 = puVar62 + 0x10;
            uVar47 = (uint32_t)uStack_b0;
            lVar63 = -uStack_b0;
            bVar17 = (uint8_t)(0x40U - iVar45);
            uVar67 = *puVar62 * -0x30e4432340650000 >> (bVar17 & 0x3f);
            uVar39 = *(uint64_t *)((int64_t)puVar62 + 1);
            uVar37 = *(uint32_t *)(uVar19 + uVar67 * 4);
            puVar28 = (uint64_t *)((int64_t)puVar62 + 1);
            uVar61 = uVar14;
            while( true ) {
              uVar39 = uVar39 * -0x30e4432340650000 >> (bVar17 & 0x3f);
              uVar48 = *(uint32_t *)((int64_t)puVar52 + lVar63);
              uVar34 = (int)puVar62 - iVar13;
              *(uint32_t *)(uVar19 + uVar67 * 4) = uVar34;
              if (((uint32_t)*puVar52 == uVar48) && (uVar47 != 0)) {
                uVar61 = (uint64_t)
                         (*(char *)((int64_t)puVar52 - 1) ==
                         *(char *)((int64_t)puVar52 + lVar63 + -1));
                lVar43 = uVar61 + 4;
                *(int *)(uVar19 + uVar39 * 4) = (int)puVar28 - iVar13;
                puVar62 = (uint64_t *)((int64_t)puVar52 - uVar61);
                puVar52 = (uint64_t *)((int64_t)puVar52 + (lVar63 - uVar61));
                iVar69 = 1;
                uStack_1b0 = (uint64_t)(uint32_t)uStack_1b0;
                goto LAB_7fffa4ab9482;
              }
              if ((uVar18 <= uVar37) &&
                 (uVar40 = (uint64_t)uVar37, (uint32_t)*puVar62 == *(uint32_t *)(lVar9 + uVar40))) {
                puVar52 = puVar28;
                goto LAB_7fffa4ab93e8;
              }
              uVar67 = *puVar52 * -0x30e4432340650000 >> (bVar17 & 0x3f);
              uVar34 = (int)puVar28 - iVar13;
              uVar37 = *(uint32_t *)(uVar19 + uVar39 * 4);
              uVar40 = (uint64_t)uVar37;
              *(uint32_t *)(uVar19 + uVar39 * 4) = uVar34;
              if ((uVar18 <= uVar37) && ((uint32_t)*puVar28 == *(uint32_t *)(lVar9 + uVar40))) break;
              puVar27 = (uint64_t *)((int64_t)puVar52 + uVar61);
              uVar37 = *(uint32_t *)(uVar19 + uVar67 * 4);
              if (puVar27 < puVar25) {
                uVar40 = uVar61;
              }
              else {
                uVar40 = uVar61 + 1;
                puVar25 = puVar25 + 0x10;
              }
              puVar31 = (uint64_t *)(uVar61 + (int64_t)puVar30);
              uVar39 = *puVar30;
              puVar62 = puVar52;
              puVar28 = puVar30;
              puVar30 = puVar31;
              uVar61 = uVar40;
              puVar52 = puVar27;
              if (puVar36 <= puVar31) {
                puVar62 = param_4;
                goto LAB_7fffa4abaab6;
              }
            }
            uVar48 = 0x632d5112 << (bVar15 & 0x1f) | 0x632d5112U >> 0x20 - (bVar15 & 0x1f);
            uVar39 = uVar67;
            puVar62 = puVar28;
            if ((uVar48 << 3 | uVar48 >> 0x1d) < (uVar66 | 1) * -0x2548873a != 4 < uVar61) {
LAB_7fffa4ab93e8:
              *(int *)(uVar19 + uVar39 * 4) = (int)puVar52 - iVar13;
            }
            puVar52 = (uint64_t *)(uVar40 + lVar9);
            uVar47 = (int)puVar62 - (int)puVar52;
            iVar69 = uVar47 + 3;
            lVar43 = 4;
            uStack_1b0 = uStack_b0;
            if ((uVar18 < uVar37) && (param_4 < puVar62)) {
              puVar30 = (uint64_t *)(uVar40 + lVar9 + -1);
              while( true ) {
                puVar52 = puVar30;
                puVar30 = (uint64_t *)((int64_t)puVar62 + -1);
                if (*(char *)puVar30 != (char)*puVar52) break;
                lVar43 = lVar43 + 1;
                puVar62 = puVar30;
                if ((puVar30 <= param_4) ||
                   (puVar30 = (uint64_t *)((int64_t)puVar52 + -1), puVar52 <= puVar42))
                goto LAB_7fffa4ab9482;
              }
              puVar52 = (uint64_t *)((int64_t)puVar52 + 1);
            }
LAB_7fffa4ab9482:
            puVar30 = (uint64_t *)((int64_t)puVar52 + lVar43);
            puVar25 = (uint64_t *)((int64_t)puVar62 + lVar43);
            puVar28 = puVar25;
            if (puVar25 < puVar58) {
              uVar39 = *puVar30;
              uVar61 = *puVar25;
              bVar70 = uVar39 < uVar61;
              if ((uVar66 | 1) * 0x338b948c < 0xd52edadf) {
                bVar70 = uVar39 == uVar61;
              }
              if (bVar70) {
                lVar63 = 0;
                do {
                  puVar30 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 8);
                  if (puVar58 <= puVar30) {
                    puVar30 = (uint64_t *)((int64_t)puVar52 + lVar63 + lVar43 + 8);
                    puVar28 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 8);
                    goto joined_r0x7fffa4ab95d1;
                  }
                  uVar39 = *(uint64_t *)((int64_t)puVar52 + lVar63 + lVar43 + 8);
                  uVar61 = *puVar30;
                  lVar63 = lVar63 + 8;
                } while (uVar39 == uVar61);
                uVar37 = 0;
                for (uVar39 = uVar39 ^ uVar61; (uVar39 & 1) == 0;
                    uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                  uVar37 = uVar37 + 1;
                }
                uVar61 = (uint64_t)(uVar37 >> 3) + lVar63;
                uVar39 = uVar61 + (int64_t)puVar25 | (uint64_t)puVar25;
                if ((int)((0x4afa709b << (bVar15 & 0x1f) | 0x4afa709bU >> 0x20 - (bVar15 & 0x1f)) +
                         0x1aff9531) < -0x5785d1aa) {
                  uVar39 = uVar61;
                }
              }
              else {
                uVar37 = 0;
                for (uVar61 = uVar61 ^ uVar39; (uVar61 & 1) == 0;
                    uVar61 = uVar61 >> 1 | 0x8000000000000000) {
                  uVar37 = uVar37 + 1;
                }
                uVar39 = (uint64_t)(uVar37 >> 3);
              }
            }
            else {
joined_r0x7fffa4ab95d1:
              if (puVar28 < (uint64_t *)((int64_t)puVar2 - 3U)) {
                bVar70 = (uint32_t)*puVar28 < (uint32_t)*puVar30;
                if ((uint64_t)
                    (((0x140f3f9d - uVar66) * 0x80000 | 0x140f3f9d - uVar66 >> 0xd) + 0xc9adaea6) <
                    uVar60 + 0x3ffbe6d9541) {
                  bVar70 = (uint32_t)*puVar30 == (uint32_t)*puVar28;
                }
                if (bVar70) {
                  puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
                  puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
                }
              }
              if ((puVar28 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
                 ((short)*puVar30 == (short)*puVar28)) {
                puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
                puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
              }
              if (puVar28 < puVar2) {
                puVar28 = (uint64_t *)
                          ((int64_t)puVar28 + (uint64_t)((char)*puVar30 == (char)*puVar28));
              }
              uVar39 = (int64_t)puVar28 - (int64_t)puVar25;
            }
            uVar61 = (int64_t)puVar62 - (int64_t)param_4;
            puVar52 = (uint64_t *)param_2[3];
            if (puVar57 < puVar62) {
              if (puVar57 < param_4) {
                puVar30 = puVar52;
              }
              else {
                uVar67 = param_4[1];
                *puVar52 = *param_4;
                puVar52[1] = uVar67;
                uVar67 = (int64_t)puVar57 - (int64_t)param_4;
                if ((uVar66 ^ 0xe5a5e498) <=
                    ((uVar66 + 0x91f43bfa) * 0x400 | uVar66 + 0x91f43bfa >> 0x16)) {
                  uVar67 = (uint64_t)puVar57 | (uint64_t)param_4;
                }
                puVar30 = (uint64_t *)((int64_t)puVar52 + uVar67);
                if ((int64_t)uVar67 < 0x11) {
                  param_4 = puVar57;
                }
                else {
                  lVar63 = 0x10;
                  while( true ) {
                    uVar10 = ((uint64_t *)((int64_t)param_4 + lVar63))[1];
                    *(uint64_t *)((int64_t)puVar52 + lVar63) =
                         *(uint64_t *)((int64_t)param_4 + lVar63);
                    ((uint64_t *)((int64_t)puVar52 + lVar63))[1] = uVar10;
                    puVar4 = (uint64_t *)((int64_t)param_4 + lVar63 + 0x10);
                    uVar10 = puVar4[1];
                    puVar5 = (uint64_t *)((int64_t)puVar52 + lVar63 + 0x10);
                    *puVar5 = *puVar4;
                    puVar5[1] = uVar10;
                    if (puVar30 <= (uint64_t *)((int64_t)puVar52 + lVar63 + 0x20)) break;
                    lVar63 = lVar63 + 0x20;
                  }
                  param_4 = puVar57;
                }
              }
              if (param_4 < puVar62) {
                uVar67 = (int64_t)puVar62 - (int64_t)param_4;
                puVar52 = puVar30;
                if (!((uint64_t)((int64_t)puVar30 - (int64_t)param_4) < 0x20 ||
                     uVar67 < (uint16_t)(4 << (bVar15 & 0xf) | 4U >> 0x10 - (bVar15 & 0xf)))) {
                  if (uVar67 < 0x20) {
                    uVar40 = 0;
                  }
                  else {
                    uVar40 = uVar67 & 0xffffffffffffffe0;
                    lVar63 = 0;
                    while( true ) {
                      uVar10 = *(uint64_t *)((int64_t)param_4 + lVar63);
                      uVar11 = ((uint64_t *)((int64_t)param_4 + lVar63))[1];
                      puVar4 = (uint64_t *)((int64_t)param_4 + lVar63 + 0x10);
                      uVar12 = puVar4[1];
                      puVar5 = (uint64_t *)((int64_t)puVar30 + lVar63 + 0x10);
                      *puVar5 = *puVar4;
                      puVar5[1] = uVar12;
                      *(uint64_t *)((int64_t)puVar30 + lVar63) = uVar10;
                      ((uint64_t *)((int64_t)puVar30 + lVar63))[1] = uVar11;
                      if (uVar40 - 0x20 == lVar63) break;
                      lVar63 = lVar63 + 0x20;
                    }
                    if (uVar67 == uVar40) goto LAB_7fffa4ab993c;
                    if ((uVar67 & 0x1c) == 0) {
                      param_4 = (uint64_t *)((int64_t)param_4 + uVar40);
                      puVar52 = (uint64_t *)((int64_t)puVar30 + uVar40);
                      goto LAB_7fffa4ab98e5;
                    }
                  }
                  uVar53 = uVar67 & 0xfffffffffffffffc;
                  puVar52 = (uint64_t *)((int64_t)puVar30 + uVar53);
                  do {
                    *(uint32_t *)((int64_t)puVar30 + uVar40) =
                         *(uint32_t *)((int64_t)param_4 + uVar40);
                    uVar40 = uVar40 + 4;
                  } while (uVar53 != uVar40);
                  if (uVar67 == uVar53) goto LAB_7fffa4ab993c;
                  param_4 = (uint64_t *)((int64_t)param_4 + uVar53);
                }
LAB_7fffa4ab98e5:
                uVar37 = (int)puVar62 - (int)param_4 & 7;
                uVar67 = (uint64_t)uVar37;
                puVar25 = puVar52;
                puVar30 = param_4;
                if (uVar37 == 0) {
                  puVar28 = param_4;
                }
                else {
                  do {
                    uVar67 = uVar67 - 1;
                    puVar52 = (uint64_t *)((int64_t)puVar25 + 1);
                    *(char *)puVar25 = (char)*puVar30;
                    puVar28 = (uint64_t *)((int64_t)puVar30 + 1);
                    puVar25 = puVar52;
                    puVar30 = (uint64_t *)((int64_t)puVar30 + 1);
                  } while (uVar67 != 0);
                }
                if ((uint64_t)((int64_t)param_4 - (int64_t)puVar62) <=
                    (uint64_t)(int64_t)(short)((uVar44 ^ 0x6ef7) - 0x1cf)) {
                  lVar63 = 0;
                  while( true ) {
                    *(uint8_t *)((int64_t)puVar52 + lVar63) =
                         *(uint8_t *)((int64_t)puVar28 + lVar63);
                    *(uint8_t *)((int64_t)puVar52 + lVar63 + 1) =
                         *(uint8_t *)((int64_t)puVar28 + lVar63 + 1);
                    *(uint8_t *)((int64_t)puVar52 + lVar63 + 2) =
                         *(uint8_t *)((int64_t)puVar28 + lVar63 + 2);
                    *(uint8_t *)((int64_t)puVar52 + lVar63 + 3) =
                         *(uint8_t *)((int64_t)puVar28 + lVar63 + 3);
                    *(uint8_t *)((int64_t)puVar52 + lVar63 + 4) =
                         *(uint8_t *)((int64_t)puVar28 + lVar63 + 4);
                    *(uint8_t *)((int64_t)puVar52 + lVar63 + 5) =
                         *(uint8_t *)((int64_t)puVar28 + lVar63 + 5);
                    *(uint8_t *)((int64_t)puVar52 + lVar63 + 6) =
                         *(uint8_t *)((int64_t)puVar28 + lVar63 + 6);
                    *(uint8_t *)((int64_t)puVar52 + lVar63 + 7) =
                         *(uint8_t *)((int64_t)puVar28 + lVar63 + 7);
                    if ((uint64_t *)((int64_t)puVar28 + lVar63 + 8) == puVar62) break;
                    lVar63 = lVar63 + 8;
                  }
                }
              }
LAB_7fffa4ab993c:
              lVar63 = param_2[1];
              param_2[3] = param_2[3] + uVar61;
              if ((-0x10000 << (bVar15 & 0x1f) | 0xffff0000U >> 0x20 - (bVar15 & 0x1f)) < uVar61) {
                *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar63 - *param_2) >> 3);
                *(uint32_t *)(param_2 + 9) = 1;
              }
            }
            else {
              uVar67 = param_4[1];
              *puVar52 = *param_4;
              puVar52[1] = uVar67;
              if ((-uVar66 - 0x90c0 & 0xffff) < uVar61) {
                lVar63 = param_2[3];
                uVar67 = param_4[3];
                *(uint64_t *)(lVar63 + 0x10) = param_4[2];
                *(uint64_t *)(lVar63 + 0x18) = uVar67;
                if (0x20 < (int64_t)uVar61) {
                  lVar51 = 0;
                  do {
                    puVar5 = (uint64_t *)((int64_t)param_4 + lVar51 + 0x20);
                    uVar10 = puVar5[1];
                    puVar4 = (uint64_t *)(lVar63 + 0x20 + lVar51);
                    *puVar4 = *puVar5;
                    puVar4[1] = uVar10;
                    puVar4 = (uint64_t *)((int64_t)param_4 + lVar51 + 0x30);
                    uVar10 = puVar4[1];
                    puVar5 = (uint64_t *)(lVar63 + 0x30 + lVar51);
                    *puVar5 = *puVar4;
                    puVar5[1] = uVar10;
                    lVar1 = lVar63 + 0x20 + lVar51;
                    lVar51 = lVar51 + 0x20;
                  } while (lVar1 + 0x20U < lVar63 + uVar61);
                }
                goto LAB_7fffa4ab993c;
              }
              param_2[3] = param_2[3] + uVar61;
              lVar63 = param_2[1];
            }
            uVar67 = (uVar39 + lVar43) - 3;
            *(short *)(lVar63 + 4) = (short)uVar61;
            *(int *)param_2[1] = iVar69;
            if (0xffff < uVar67) {
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
              *(uint32_t *)(param_2 + 9) = 2;
            }
            puVar62 = (uint64_t *)((int64_t)puVar62 + uVar39 + lVar43);
            *(short *)(param_2[1] + 6) = (short)uVar67;
            param_2[1] = param_2[1] + 8;
            if (puVar62 <= puVar36) {
              uVar61 = *(int64_t *)(lVar9 + 2 + (uint64_t)uVar34) * -0x30e4432340650000;
              uVar39 = uVar61 >> (bVar17 & 0x3f);
              if ((int64_t)(uint64_t)((uVar66 | 1) * -0x180e406f) <=
                  (int64_t)(int)~(uVar66 + 0x1dc922b9)) {
                uVar39 = (0x40U - iVar45) + uVar61;
              }
              *(uint32_t *)(uVar19 + uVar39 * 4) = uVar34 + 2;
              *(int *)(uVar19 + ((uint64_t)
                                 (*(int64_t *)((int64_t)puVar62 + -2) * -0x30e4432340650000) >>
                                (bVar17 & 0x3f)) * 4) = ((int)puVar62 + -2) - iVar13;
              if ((uint32_t)uStack_1b0 == 0) {
                uStack_1b0._0_4_ = 0;
              }
              else {
                do {
                  uVar37 = uVar47;
                  if ((uint32_t)*puVar62 != *(uint32_t *)((int64_t)puVar62 - (uint64_t)(uint32_t)uStack_1b0))
                  {
                    uVar47 = uVar37;
                    break;
                  }
                  lVar63 = -(uint64_t)(uint32_t)uStack_1b0;
                  puVar52 = (uint64_t *)((int64_t)puVar62 + 4);
                  puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + 4);
                  puVar30 = puVar52;
                  if (puVar52 < puVar58) {
                    if (*puVar25 == *puVar52) {
                      lVar43 = 0;
                      do {
                        puVar30 = (uint64_t *)((int64_t)puVar62 + lVar43 + 0xc);
                        if (puVar58 <= puVar30) {
                          puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 0xc);
                          puVar30 = (uint64_t *)((int64_t)puVar62 + lVar43 + 0xc);
                          goto joined_r0x7fffa4ab9b51;
                        }
                        uVar39 = *puVar30;
                        uVar61 = *(uint64_t *)((int64_t)puVar62 + lVar43 + lVar63 + 0xc);
                        lVar43 = lVar43 + 8;
                      } while (uVar61 == uVar39);
                      uVar48 = 0;
                      for (uVar61 = uVar61 ^ uVar39; (uVar61 & 1) == 0;
                          uVar61 = uVar61 >> 1 | 0x8000000000000000) {
                        uVar48 = uVar48 + 1;
                      }
                      uVar39 = (uint64_t)(uVar48 >> 3) + lVar43;
                    }
                    else {
                      uVar48 = 0;
                      for (uVar39 = *puVar25 ^ *puVar52; (uVar39 & 1) == 0;
                          uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                        uVar48 = uVar48 + 1;
                      }
                      uVar39 = (uint64_t)(uVar48 >> 3);
                    }
                  }
                  else {
joined_r0x7fffa4ab9b51:
                    if ((puVar30 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
                       ((uint32_t)*puVar25 == (uint32_t)*puVar30)) {
                      puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
                      puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
                    }
                    if ((puVar30 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
                       ((short)*puVar25 == (short)*puVar30)) {
                      puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
                      puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
                    }
                    if (puVar30 < puVar2) {
                      puVar30 = (uint64_t *)
                                ((int64_t)puVar30 + (uint64_t)((char)*puVar25 == (char)*puVar30));
                    }
                    uVar39 = (int64_t)puVar30 - (int64_t)puVar52;
                  }
                  *(int *)(uVar19 + (*puVar62 * -0x30e4432340650000 >> (bVar17 & 0x3f)) * 4) =
                       (int)puVar62 - iVar13;
                  if (puVar62 <= puVar57) {
                    uVar61 = puVar62[1];
                    puVar52 = (uint64_t *)param_2[3];
                    *puVar52 = *puVar62;
                    puVar52[1] = uVar61;
                  }
                  *(uint16_t *)(param_2[1] + 4) = 0;
                  *(uint32_t *)param_2[1] = 1;
                  if (0xffff < uVar39 + 1) {
                    *(uint32_t *)(param_2 + 9) = 2;
                    *(int *)((int64_t)param_2 + 0x4c) =
                         (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                  }
                  *(short *)(param_2[1] + 6) = (short)(uVar39 + 1);
                  param_2[1] = param_2[1] + 8;
                  puVar62 = (uint64_t *)((int64_t)puVar62 + uVar39 + 4);
                  uVar47 = (uint32_t)uStack_1b0;
                  uStack_1b0._0_4_ = uVar37;
                } while (puVar62 <= puVar36);
              }
            }
            puVar52 = (uint64_t *)((int64_t)puVar62 + uVar14);
            puVar30 = (uint64_t *)((int64_t)puVar62 + uVar14 + 1);
            uStack_b0 = (uint64_t)uVar47;
            param_4 = puVar62;
          } while (puVar30 < puVar36);
        }
        else {
          puVar62 = param_4;
        }
LAB_7fffa4abaab6:
        if (uVar38 <= uVar46) {
          uVar38 = 0;
        }
        uVar48 = uVar38;
        if (uVar47 != 0) {
          uVar48 = uVar50;
        }
        if (uVar50 <= uVar46) {
          uVar48 = uVar38;
        }
        uVar37 = 0;
        if (uVar46 < uVar50) {
          uVar37 = uVar50;
        }
        if (uVar47 != 0) {
          uVar37 = uVar47;
        }
        if ((uint32_t)uStack_1b0 != 0) {
          uVar48 = (uint32_t)uStack_1b0;
        }
        *param_3 = uVar37;
        goto LAB_7fffa4abac45;
      }
      if (uVar37 != ((uVar66 - 0x24f8 ^ 0x4a3f) & 0xffff)) goto LAB_7fffa4ab835d;
      if (puVar30 < puVar36) {
        puVar58 = (uint64_t *)((int64_t)puVar2 - 7);
        bVar15 = 0x40 - cVar7;
        puVar57 = puVar2 + -4;
        do {
          uVar47 = (uint32_t)uStack_b0;
          lVar63 = -uStack_b0;
          uVar67 = *puVar62 * -0x30e44323405a9d00 >> (bVar15 & 0x3f);
          puVar25 = puVar62 + 0x10;
          uVar37 = *(uint32_t *)(uVar19 + uVar67 * 4);
          uVar39 = *(uint64_t *)((int64_t)puVar62 + 1);
          uVar61 = uVar14;
          puVar28 = (uint64_t *)((int64_t)puVar62 + 1);
          while( true ) {
            puVar27 = puVar52;
            uVar39 = uVar39 * -0x30e44323405a9d00 >> (bVar15 & 0x3f);
            uVar34 = (int)puVar62 - iVar13;
            uVar48 = *(uint32_t *)((int64_t)puVar27 + lVar63);
            *(uint32_t *)(uVar19 + uVar67 * 4) = uVar34;
            if ((uVar47 != 0) && ((uint32_t)*puVar27 == uVar48)) {
              uVar61 = (uint64_t)
                       (*(char *)((int64_t)puVar27 - 1) ==
                       *(char *)((int64_t)puVar27 + lVar63 + -1));
              lVar43 = uVar61 + 4;
              puVar62 = (uint64_t *)((int64_t)puVar27 - uVar61);
              lVar63 = (int64_t)puVar27 + (lVar63 - uVar61);
              *(int *)(uVar19 + uVar39 * 4) = (int)puVar28 - iVar13;
              iVar45 = 1;
              uStack_1b0 = (uint64_t)(uint32_t)uStack_1b0;
              goto LAB_7fffa4ab3019;
            }
            if ((uVar18 <= uVar37) &&
               (uVar40 = (uint64_t)uVar37, (uint32_t)*puVar62 == *(uint32_t *)(lVar9 + uVar40))) {
              puVar27 = puVar28;
              goto LAB_7fffa4ab3107;
            }
            uVar37 = *(uint32_t *)(uVar19 + uVar39 * 4);
            uVar40 = (uint64_t)uVar37;
            uVar67 = *puVar27 * -0x30e44323405a9d00 >> (bVar15 & 0x3f);
            uVar34 = (int)puVar28 - iVar13;
            *(uint32_t *)(uVar19 + uVar39 * 4) = uVar34;
            if ((uVar18 <= uVar37) && ((uint32_t)*puVar28 == *(uint32_t *)(lVar9 + uVar40))) break;
            uVar37 = *(uint32_t *)(uVar19 + uVar67 * 4);
            puVar52 = (uint64_t *)((int64_t)puVar27 + uVar61);
            if (puVar52 < puVar25) {
              uVar40 = uVar61;
            }
            else {
              uVar40 = uVar61 + 1;
              puVar25 = puVar25 + 0x10;
            }
            puVar31 = (uint64_t *)(uVar61 + (int64_t)puVar30);
            uVar39 = *puVar30;
            uVar61 = uVar40;
            puVar28 = puVar30;
            puVar30 = puVar31;
            puVar62 = puVar27;
            if (puVar36 <= puVar31) {
              puVar62 = param_4;
              goto LAB_7fffa4ababf2;
            }
          }
          puVar62 = puVar28;
          uVar39 = uVar67;
          if (uVar61 < 5) {
LAB_7fffa4ab3107:
            *(int *)(uVar19 + uVar39 * 4) = (int)puVar27 - iVar13;
          }
          lVar63 = uVar40 + lVar9;
          uVar47 = (int)puVar62 - (int)lVar63;
          iVar45 = uVar47 + 3;
          lVar43 = 4;
          uStack_1b0 = uStack_b0;
          if ((param_4 < puVar62) && (uVar18 < uVar37)) {
            lVar51 = 0;
            do {
              if (*(char *)((int64_t)puVar62 + lVar51 + -1) != *(char *)(lVar63 + -1 + lVar51)) {
                puVar62 = (uint64_t *)((int64_t)puVar62 + lVar51);
                lVar43 = 4 - lVar51;
                lVar63 = lVar63 + lVar51;
                goto LAB_7fffa4ab3019;
              }
              lVar1 = lVar51 + -1;
            } while ((param_4 < (uint64_t *)((int64_t)puVar62 + lVar51 + -1)) &&
                    (lVar43 = lVar63 + lVar51, lVar51 = lVar1, puVar42 < (uint64_t *)(lVar43 + -1))
                    );
            puVar62 = (uint64_t *)((int64_t)puVar62 + lVar1);
            lVar43 = 4 - lVar1;
            lVar63 = lVar63 + lVar1;
          }
LAB_7fffa4ab3019:
          puVar52 = (uint64_t *)(lVar63 + lVar43);
          puVar30 = (uint64_t *)((int64_t)puVar62 + lVar43);
          if (puVar30 < puVar58) {
            if (*puVar52 == *puVar30) {
              lVar51 = 0;
              do {
                puVar52 = (uint64_t *)((int64_t)puVar62 + lVar51 + lVar43 + 8);
                if (puVar58 <= puVar52) {
                  puVar25 = (uint64_t *)((int64_t)puVar62 + lVar51 + lVar43 + 8);
                  puVar52 = (uint64_t *)(lVar51 + lVar63 + lVar43 + 8);
                  goto LAB_7fffa4ab31c7;
                }
                uVar39 = *puVar52;
                uVar61 = *(uint64_t *)(lVar63 + lVar43 + 8 + lVar51);
                lVar51 = lVar51 + 8;
              } while (uVar61 == uVar39);
              uVar37 = 0;
              for (uVar39 = uVar39 ^ uVar61; (uVar39 & 1) == 0;
                  uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              uVar39 = (uint64_t)(uVar37 >> 3) + lVar51;
            }
            else {
              uVar37 = 0;
              for (uVar39 = *puVar52 ^ *puVar30; (uVar39 & 1) == 0;
                  uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              uVar39 = (uint64_t)(uVar37 >> 3);
            }
          }
          else {
            puVar25 = puVar30;
LAB_7fffa4ab31c7:
            if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
               ((uint32_t)*puVar52 == (uint32_t)*puVar25)) {
              puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
              puVar52 = (uint64_t *)((int64_t)puVar52 + 4);
            }
            if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
               ((short)*puVar52 == (short)*puVar25)) {
              puVar52 = (uint64_t *)((int64_t)puVar52 + 2);
              puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
            }
            if (puVar25 < puVar2) {
              puVar25 = (uint64_t *)
                        ((int64_t)puVar25 + (uint64_t)((char)*puVar52 == (char)*puVar25));
            }
            uVar39 = (int64_t)puVar25 - (int64_t)puVar30;
          }
          puVar52 = (uint64_t *)param_2[3];
          uVar61 = (int64_t)puVar62 - (int64_t)param_4;
          bVar70 = puVar57 < puVar62;
          if ((uVar66 + 0x9175541b ^ 0x3c98da02) + 0xf5be00b2 <
              ((uVar66 | 1) * -0x58000000 | (uVar66 | 1) * -0x503d2cac >> 7)) {
            bVar70 = puVar62 == puVar57;
          }
          if (bVar70) {
            if (param_4 <= puVar57) {
              uVar67 = param_4[1];
              *puVar52 = *param_4;
              puVar52[1] = uVar67;
              puVar30 = (uint64_t *)((int64_t)puVar52 + ((int64_t)puVar57 - (int64_t)param_4));
              if (0x10 < (int64_t)puVar57 - (int64_t)param_4) {
                puVar52 = puVar52 + 6;
                while( true ) {
                  uVar67 = param_4[3];
                  puVar52[-4] = param_4[2];
                  puVar52[-3] = uVar67;
                  uVar67 = param_4[5];
                  puVar52[-2] = param_4[4];
                  puVar52[-1] = uVar67;
                  if (puVar30 <= puVar52) break;
                  puVar52 = puVar52 + 4;
                  param_4 = param_4 + 4;
                }
              }
              puVar52 = puVar30;
              param_4 = puVar57;
            }
            if (param_4 < puVar62) {
              uVar67 = (int64_t)puVar62 - (int64_t)param_4;
              if ((3 < uVar67) && (0x1f < (uint64_t)((int64_t)puVar52 - (int64_t)param_4))) {
                if (uVar67 < 0x20) {
                  uVar53 = 0;
                }
                else {
                  uVar53 = uVar67 & 0xffffffffffffffe0;
                  uVar40 = 0;
                  do {
                    uVar10 = *(uint64_t *)((int64_t)param_4 + uVar40);
                    uVar11 = ((uint64_t *)((int64_t)param_4 + uVar40))[1];
                    puVar4 = (uint64_t *)((int64_t)param_4 + uVar40 + 0x10);
                    uVar12 = puVar4[1];
                    puVar5 = (uint64_t *)((int64_t)puVar52 + uVar40 + 0x10);
                    *puVar5 = *puVar4;
                    puVar5[1] = uVar12;
                    *(uint64_t *)((int64_t)puVar52 + uVar40) = uVar10;
                    ((uint64_t *)((int64_t)puVar52 + uVar40))[1] = uVar11;
                    uVar40 = uVar40 + 0x20;
                  } while (uVar53 != uVar40);
                  if (uVar67 == uVar53) goto LAB_7fffa4ab356a;
                  if ((uVar67 & 0x1c) == 0) {
                    param_4 = (uint64_t *)((int64_t)param_4 + uVar53);
                    puVar52 = (uint64_t *)((int64_t)puVar52 + uVar53);
                    goto LAB_7fffa4ab3496;
                  }
                }
                uVar40 = uVar67 & 0xfffffffffffffffc;
                for (; *(uint32_t *)((int64_t)puVar52 + uVar53) =
                            *(uint32_t *)((int64_t)param_4 + uVar53), uVar40 - 4 != uVar53;
                    uVar53 = uVar53 + 4) {
                }
                if (uVar67 == uVar40) goto LAB_7fffa4ab356a;
                param_4 = (uint64_t *)((int64_t)param_4 + uVar40);
                puVar52 = (uint64_t *)((int64_t)puVar52 + uVar40);
              }
LAB_7fffa4ab3496:
              uVar37 = (int)puVar62 - (int)param_4 & 7;
              uVar67 = (uint64_t)uVar37;
              puVar30 = param_4;
              if (uVar37 != 0) {
                do {
                  uVar40 = *puVar30;
                  puVar30 = (uint64_t *)((int64_t)puVar30 + 1);
                  *(char *)puVar52 = (char)uVar40;
                  puVar52 = (uint64_t *)((int64_t)puVar52 + 1);
                  uVar67 = uVar67 - 1;
                } while (uVar67 != 0);
              }
              if ((uint64_t)((int64_t)param_4 - (int64_t)puVar62) < 0xfffffffffffffff9) {
                while( true ) {
                  if ((int64_t)(uint64_t)(uVar66 ^ 0xf2512af8) < -0x12442df9) {
                    uVar6 = *(uint8_t *)((int64_t)puVar30 + 1);
                    *(char *)puVar52 = (char)*puVar30;
                    uVar49 = *(uint8_t *)((int64_t)puVar30 + 2);
                    *(uint8_t *)((int64_t)puVar52 + 1) = uVar6;
                  }
                  else {
                    *(char *)puVar52 = (char)*puVar30;
                    *(uint8_t *)((int64_t)puVar52 + 1) = *(uint8_t *)((int64_t)puVar30 + 1);
                    uVar49 = *(uint8_t *)((int64_t)puVar30 + 2);
                  }
                  *(uint8_t *)((int64_t)puVar52 + 2) = uVar49;
                  *(uint8_t *)((int64_t)puVar52 + 3) = *(uint8_t *)((int64_t)puVar30 + 3);
                  *(uint8_t *)((int64_t)puVar52 + 4) = *(uint8_t *)((int64_t)puVar30 + 4);
                  *(uint8_t *)((int64_t)puVar52 + 5) = *(uint8_t *)((int64_t)puVar30 + 5);
                  *(uint8_t *)((int64_t)puVar52 + 6) = *(uint8_t *)((int64_t)puVar30 + 6);
                  *(uint8_t *)((int64_t)puVar52 + 7) = *(uint8_t *)((int64_t)puVar30 + 7);
                  if (puVar30 + 1 == puVar62) break;
                  puVar52 = puVar52 + 1;
                  puVar30 = puVar30 + 1;
                }
              }
            }
LAB_7fffa4ab356a:
            lVar63 = param_2[1];
            param_2[3] = param_2[3] + uVar61;
            if (0xffff < uVar61) {
              *(uint32_t *)(param_2 + 9) = 1;
              *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar63 - *param_2) >> 3);
            }
          }
          else {
            uVar67 = param_4[1];
            *puVar52 = *param_4;
            puVar52[1] = uVar67;
            bVar70 = 0x10 < uVar61;
            if (uVar66 == 0x3a77f50d) {
              bVar70 = uVar61 < 0x10;
            }
            if (bVar70) {
              uVar67 = param_4[3];
              lVar63 = param_2[3];
              *(uint64_t *)(lVar63 + 0x10) = param_4[2];
              *(uint64_t *)(lVar63 + 0x18) = uVar67;
              if (0x20 < (int64_t)uVar61) {
                uVar67 = lVar63 + 0x40;
                param_4 = param_4 + 6;
                while( true ) {
                  uVar40 = param_4[-1];
                  *(uint64_t *)(uVar67 - 0x20) = param_4[-2];
                  *(uint64_t *)(uVar67 - 0x18) = uVar40;
                  uVar40 = param_4[1];
                  *(uint64_t *)(uVar67 - 0x10) = *param_4;
                  *(uint64_t *)(uVar67 - 8) = uVar40;
                  if (lVar63 + uVar61 <= uVar67) break;
                  uVar67 = uVar67 + 0x20;
                  param_4 = param_4 + 4;
                }
              }
              goto LAB_7fffa4ab356a;
            }
            lVar63 = param_2[1];
            param_2[3] = param_2[3] + uVar61;
          }
          uVar67 = (uVar39 + lVar43) - 3;
          *(short *)(lVar63 + 4) = (short)uVar61;
          *(int *)param_2[1] = iVar45;
          if (0xffff < uVar67) {
            *(uint32_t *)(param_2 + 9) = 2;
            *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
          }
          puVar62 = (uint64_t *)((int64_t)puVar62 + uVar39 + lVar43);
          *(short *)(param_2[1] + 6) = (short)uVar67;
          param_2[1] = param_2[1] + 8;
          if (puVar36 < puVar62) {
          }
          else {
            uVar37 = (uVar66 ^ 0x6f30) * -0x3449;
            *(uint32_t *)(uVar19 + ((uint64_t)
                                (*(int64_t *)(lVar9 + 2 + (uint64_t)uVar34) * -0x30e44323405a9d00)
                               >> (bVar15 & 0x3f)) * 4) = uVar34 + 2;
            *(int *)(uVar19 + ((uVar60 + 0xcf1bbcdc7e12f3d0) * *(int64_t *)((int64_t)puVar62 + -2)
                              >> (bVar15 & 0x3f)) * 4) = ((int)puVar62 + -2) - iVar13;
            if ((uint32_t)uStack_1b0 ==
                (uint16_t)((uint16_t)uVar37 >> 1 | (uint16_t)((uVar37 & 1) != 0) << 0xf)) {
              uStack_1b0._0_4_ = 0;
            }
            else {
              do {
                uVar37 = uVar47;
                if ((uint32_t)*puVar62 != *(uint32_t *)((int64_t)puVar62 - (uint64_t)(uint32_t)uStack_1b0)) {
                  uVar47 = uVar37;
                  break;
                }
                lVar63 = -(uint64_t)(uint32_t)uStack_1b0;
                puVar30 = (uint64_t *)((int64_t)puVar62 + 4);
                puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + 4);
                puVar52 = puVar30;
                if (puVar30 < puVar58) {
                  if (*puVar25 == *puVar30) {
                    lVar43 = 0xc;
LAB_7fffa4ab3710:
                    puVar52 = (uint64_t *)((int64_t)puVar62 + lVar43);
                    if (puVar52 < puVar58) {
                      uVar39 = *(uint64_t *)((int64_t)puVar62 + lVar43 + lVar63);
                      uVar61 = *puVar52;
                      if (uVar39 == uVar61) goto code_r0x7fffa4ab3729;
                      uVar67 = uVar39 ^ uVar61;
                      if ((int64_t)((uVar60 ^ 0x1fff439c4fa) + 0x4a5455a7) <=
                          (int64_t)(uint64_t)((uVar66 ^ 0x34abba5c) + 0x59845b0)) {
                        uVar67 = uVar61 + uVar39;
                      }
                      uVar48 = 0;
                      for (; (uVar67 & 1) == 0; uVar67 = uVar67 >> 1 | 0x8000000000000000) {
                        uVar48 = uVar48 + 1;
                      }
                      uVar39 = ((uint64_t)(uVar48 >> 3) + lVar43) - 4;
                      goto LAB_7fffa4ab37ae;
                    }
                    puVar25 = (uint64_t *)(lVar63 + (int64_t)puVar52);
                    goto joined_r0x7fffa4ab3753;
                  }
                  uVar48 = 0;
                  for (uVar39 = *puVar30 ^ *puVar25; (uVar39 & 1) == 0;
                      uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                    uVar48 = uVar48 + 1;
                  }
                  uVar39 = (uint64_t)(uVar48 >> 3);
                }
                else {
joined_r0x7fffa4ab3753:
                  if ((puVar52 < (uint64_t *)((int64_t)puVar2 - 3U)) &&
                     ((uint32_t)*puVar25 == (uint32_t)*puVar52)) {
                    puVar52 = (uint64_t *)((int64_t)puVar52 + 4);
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
                  }
                  if ((puVar52 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
                     ((short)*puVar25 == (short)*puVar52)) {
                    puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
                    puVar52 = (uint64_t *)((int64_t)puVar52 + 2);
                  }
                  if (puVar52 < puVar2) {
                    puVar52 = (uint64_t *)
                              ((int64_t)puVar52 + (uint64_t)((char)*puVar25 == (char)*puVar52));
                  }
                  uVar39 = (int64_t)puVar52 - (int64_t)puVar30;
                }
LAB_7fffa4ab37ae:
                *(int *)(uVar19 + (*puVar62 * -0x30e44323405a9d00 >> (bVar15 & 0x3f)) * 4) =
                     (int)puVar62 - iVar13;
                if (puVar62 <= puVar57) {
                  puVar52 = (uint64_t *)param_2[3];
                  uVar61 = puVar62[1];
                  *puVar52 = *puVar62;
                  puVar52[1] = uVar61;
                }
                *(uint16_t *)(param_2[1] + 4) = 0;
                *(uint32_t *)param_2[1] = 1;
                if (0xffff < uVar39 + 1) {
                  *(uint32_t *)(param_2 + 9) = 2;
                  *(int *)((int64_t)param_2 + 0x4c) =
                       (int)((uint64_t)(param_2[1] - *param_2) >> 3);
                }
                *(short *)(param_2[1] + 6) = (short)(uVar39 + 1);
                param_2[1] = param_2[1] + 8;
                puVar62 = (uint64_t *)((int64_t)puVar62 + uVar39 + 4);
                uVar47 = (uint32_t)uStack_1b0;
                uStack_1b0._0_4_ = uVar37;
              } while (puVar62 <= puVar36);
            }
          }
          puVar52 = (uint64_t *)((int64_t)puVar62 + uVar14);
          puVar30 = (uint64_t *)((int64_t)puVar62 + uVar14 + 1);
          uStack_b0 = (uint64_t)uVar47;
          param_4 = puVar62;
        } while (puVar30 < puVar36);
      }
      else {
        puVar62 = param_4;
      }
LAB_7fffa4ababf2:
      if (uVar38 <= uVar46) {
        uVar38 = 0;
      }
      uVar48 = uVar38;
      if (uVar47 != 0) {
        uVar48 = uVar50;
      }
      if (uVar50 <= uVar46) {
        uVar48 = uVar38;
        uVar50 = 0;
      }
      bVar70 = uVar47 == 0;
    }
    if (!bVar70) {
      uVar50 = uVar47;
    }
    *param_3 = uVar50;
  }
  if ((uint32_t)uStack_1b0 != 0) {
    uVar48 = (uint32_t)uStack_1b0;
  }
LAB_7fffa4abac45:
  param_3[1] = uVar48;
  return (int64_t)puVar2 - (int64_t)puVar62;
LAB_7fffa4ab3f5c:
  puVar28 = puStack_d8;
  uVar39 = uVar61;
  puStack_d8 = puVar31;
LAB_7fffa4ab3f62:
  puVar27 = (uint64_t *)(uVar53 + lVar43);
  puVar25 = puVar52;
  if (uVar35 < uVar38) {
    puVar62 = puVar30;
    puVar25 = (uint64_t *)((uint64_t)uVar47 + lVar63);
  }
  iVar45 = (uVar59 - uVar35) + 3;
  uVar61 = 4;
  puVar57 = puVar27;
  if ((puVar25 < puVar27) && (param_4 < puVar28)) {
    for (lVar43 = 0;
        *(char *)((int64_t)puVar28 + lVar43 + -1) == *(char *)((int64_t)puVar27 + lVar43 + -1);
        lVar43 = lVar43 + -1) {
      puVar31 = (uint64_t *)((int64_t)puVar28 + lVar43 + -1);
      puVar57 = (uint64_t *)((int64_t)puVar27 + lVar43 + -1);
      if ((puVar57 <= puVar25) || (puVar31 <= param_4)) {
        uVar61 = 5 - lVar43;
        puVar28 = puVar31;
        goto LAB_7fffa4ab4018;
      }
    }
    puVar28 = (uint64_t *)((int64_t)puVar28 + lVar43);
    uVar61 = 4 - lVar43;
    puVar57 = (uint64_t *)((int64_t)puVar27 + lVar43);
  }
LAB_7fffa4ab4018:
  uVar46 = uVar59 - uVar35;
  uVar18 = uVar34;
LAB_7fffa4ab402b:
  puVar25 = (uint64_t *)((int64_t)puVar57 + uVar61);
  puVar27 = (uint64_t *)((int64_t)puVar28 + uVar61);
  puVar31 = (uint64_t *)(((int64_t)puVar62 - (int64_t)puVar25) + (int64_t)puVar27);
  if (puVar2 <= puVar31) {
    puVar31 = puVar2;
  }
  puVar68 = (uint64_t *)((int64_t)puVar31 - 7);
  bVar70 = puVar27 == puVar68;
  if ((int64_t)(int)(-0x7a6228d4 << (bVar15 & 0x1f) | 0x859dd72cU >> 0x20 - (bVar15 & 0x1f)) <=
      (int64_t)(uint64_t)((uVar66 ^ 0x2ab713cb) + 0x4e30ee3a)) {
    bVar70 = puVar27 < puVar68;
  }
  puVar54 = puVar27;
  puVar64 = puVar25;
  if (bVar70) {
    uVar40 = *puVar25;
    uVar53 = *puVar27;
    bVar70 = uVar40 == uVar53;
    if ((int64_t)(uint64_t)((uVar66 ^ 0x583203d0) << 0xd | (uVar66 ^ 0x583203d0) >> 0x13) <=
        (int64_t)(int)(((uVar66 + 0x8eae102b) * 0x10 | uVar66 + 0x8eae102b >> 0x1c) ^ 0xddbd3674))
    {
      bVar70 = (int64_t)uVar40 <= (int64_t)uVar53;
    }
    if (bVar70) {
      lVar43 = 0;
      do {
        puVar54 = (uint64_t *)((int64_t)puVar28 + lVar43 + uVar61 + 8);
        if (puVar68 <= puVar54) {
          puVar54 = (uint64_t *)((int64_t)puVar28 + lVar43 + uVar61 + 8);
          puVar64 = (uint64_t *)((int64_t)puVar57 + lVar43 + uVar61 + 8);
          goto LAB_7fffa4ab41b0;
        }
        uVar40 = *puVar54;
        uVar53 = *(uint64_t *)((int64_t)puVar57 + lVar43 + uVar61 + 8);
        lVar43 = lVar43 + 8;
      } while (uVar53 == uVar40);
      uVar34 = 0;
      for (uVar40 = uVar40 ^ uVar53; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x8000000000000000) {
        uVar34 = uVar34 + 1;
      }
      uVar40 = (uint64_t)(uVar34 >> 3) + lVar43;
    }
    else {
      uVar34 = 0;
      for (uVar40 = uVar40 ^ uVar53; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x8000000000000000) {
        uVar34 = uVar34 + 1;
      }
      uVar40 = (uint64_t)(uVar34 >> 3);
    }
  }
  else {
LAB_7fffa4ab41b0:
    if ((puVar54 < (uint64_t *)((int64_t)puVar31 - 3U)) && ((uint32_t)*puVar64 == (uint32_t)*puVar54)) {
      puVar54 = (uint64_t *)((int64_t)puVar54 + 4);
      puVar64 = (uint64_t *)((int64_t)puVar64 + 4);
    }
    if ((puVar54 < (uint64_t *)((int64_t)puVar31 - 1U)) && ((short)*puVar64 == (short)*puVar54)) {
      puVar64 = (uint64_t *)((int64_t)puVar64 + 2);
      puVar54 = (uint64_t *)((int64_t)puVar54 + 2);
    }
    if (puVar54 < puVar31) {
      puVar54 = (uint64_t *)((int64_t)puVar54 + (uint64_t)((char)*puVar64 == (char)*puVar54));
    }
    uVar40 = (int64_t)puVar54 - (int64_t)puVar27;
  }
  if ((uint64_t *)((int64_t)puVar25 + uVar40) == puVar62) {
    puVar27 = (uint64_t *)((int64_t)puVar27 + uVar40);
    puVar57 = puVar52;
    puVar62 = puVar27;
    if (puVar27 < puVar42) {
      if (*puVar52 == *puVar27) {
        lVar43 = 8;
LAB_7fffa4ab42c0:
        puVar62 = (uint64_t *)((int64_t)puVar27 + lVar43);
        if (puVar62 < puVar42) {
          if (*(uint64_t *)((int64_t)puVar52 + lVar43) == *puVar62) goto code_r0x7fffa4ab42de;
          uVar34 = 0;
          for (uVar53 = *(uint64_t *)((int64_t)puVar52 + lVar43) ^ *puVar62; (uVar53 & 1) == 0;
              uVar53 = uVar53 >> 1 | 0x8000000000000000) {
            uVar34 = uVar34 + 1;
          }
          uVar53 = (uint64_t)(uVar34 >> 3) + lVar43;
          goto LAB_7fffa4ab4353;
        }
        puVar57 = (uint64_t *)(lVar43 + (int64_t)puVar52);
        goto LAB_7fffa4ab42f5;
      }
      uVar34 = 0;
      for (uVar53 = *puVar52 ^ *puVar27; (uVar53 & 1) == 0;
          uVar53 = uVar53 >> 1 | 0x8000000000000000) {
        uVar34 = uVar34 + 1;
      }
      uVar53 = (uint64_t)(uVar34 >> 3);
    }
    else {
LAB_7fffa4ab42f5:
      if ((puVar62 < (uint64_t *)((int64_t)puVar2 - 3U)) && ((uint32_t)*puVar57 == (uint32_t)*puVar62)) {
        puVar57 = (uint64_t *)((int64_t)puVar57 + 4);
        puVar62 = (uint64_t *)((int64_t)puVar62 + 4);
      }
      if ((puVar62 < (uint64_t *)((int64_t)puVar2 - 1U)) && ((short)*puVar57 == (short)*puVar62))
      {
        puVar62 = (uint64_t *)((int64_t)puVar62 + 2);
        puVar57 = (uint64_t *)((int64_t)puVar57 + 2);
      }
      if (puVar62 < puVar2) {
        puVar62 = (uint64_t *)((int64_t)puVar62 + (uint64_t)((char)*puVar57 == (char)*puVar62));
      }
      uVar53 = (int64_t)puVar62 - (int64_t)puVar27;
    }
LAB_7fffa4ab4353:
    uVar40 = uVar40 + uVar53;
  }
  puVar62 = (uint64_t *)param_2[3];
  uVar53 = (int64_t)puVar28 - (int64_t)param_4;
  if (puVar58 < puVar28) {
    puVar57 = puVar62;
    if (param_4 <= puVar58) {
      puVar57 = (uint64_t *)((int64_t)puVar62 + ((int64_t)puVar58 - (int64_t)param_4));
      uVar71 = param_4[1];
      *puVar62 = *param_4;
      puVar62[1] = uVar71;
      if (0x10 < (int64_t)puVar58 - (int64_t)param_4) {
        lVar43 = 0x10;
        while( true ) {
          uVar10 = ((uint64_t *)((int64_t)param_4 + lVar43))[1];
          *(uint64_t *)((int64_t)puVar62 + lVar43) = *(uint64_t *)((int64_t)param_4 + lVar43);
          ((uint64_t *)((int64_t)puVar62 + lVar43))[1] = uVar10;
          puVar4 = (uint64_t *)((int64_t)param_4 + lVar43 + 0x10);
          uVar10 = puVar4[1];
          puVar5 = (uint64_t *)((int64_t)puVar62 + lVar43 + 0x10);
          *puVar5 = *puVar4;
          puVar5[1] = uVar10;
          if (puVar57 <= (uint64_t *)((int64_t)puVar62 + lVar43 + 0x20)) break;
          lVar43 = lVar43 + 0x20;
        }
      }
      param_4 = puVar58;
    }
    if (param_4 < puVar28) {
      uVar71 = (int64_t)puVar28 - (int64_t)param_4;
      uVar34 = (uVar66 ^ 0x8bdfb257) + 0x35b22319;
      if (((uVar34 * 0x8000000 | uVar34 >> 5) <= uVar71) &&
         (0x1f < (uint64_t)((int64_t)puVar57 - (int64_t)param_4))) {
        if (uVar71 < 0x20) {
          uVar32 = 0;
LAB_7fffa4ab4476:
          uVar26 = uVar71 & 0xfffffffffffffffc;
          for (; *(uint32_t *)((int64_t)puVar57 + uVar32) =
                      *(uint32_t *)((int64_t)param_4 + uVar32), uVar26 - 4 != uVar32;
              uVar32 = uVar32 + 4) {
          }
          if (uVar71 == uVar26) goto LAB_7fffa4ab4650;
        }
        else {
          uVar32 = uVar71 & 0xffffffffffffffe0;
          uVar26 = 0;
          do {
            uVar10 = ((uint64_t *)((int64_t)param_4 + uVar26))[1];
            puVar4 = (uint64_t *)((int64_t)param_4 + uVar26 + 0x10);
            uVar11 = *puVar4;
            uVar12 = puVar4[1];
            *(uint64_t *)((int64_t)puVar57 + uVar26) =
                 *(uint64_t *)((int64_t)param_4 + uVar26);
            ((uint64_t *)((int64_t)puVar57 + uVar26))[1] = uVar10;
            puVar4 = (uint64_t *)((int64_t)puVar57 + uVar26 + 0x10);
            *puVar4 = uVar11;
            puVar4[1] = uVar12;
            uVar26 = uVar26 + 0x20;
          } while (uVar32 != uVar26);
          if (uVar71 == uVar32) goto LAB_7fffa4ab4650;
          if ((uVar66 + 0x2ba51ae < (uVar66 | 1) * 0x4aa60e78) ||
             (uVar26 = uVar32, (uVar71 & 0x1c) != 0)) goto LAB_7fffa4ab4476;
        }
        puVar57 = (uint64_t *)((int64_t)puVar57 + uVar26);
        param_4 = (uint64_t *)((int64_t)param_4 + uVar26);
      }
      uVar34 = (int)puVar28 - (int)param_4 & 7;
      uVar71 = (uint64_t)uVar34;
      puVar62 = param_4;
      puVar25 = param_4;
      if (uVar34 != 0) {
        do {
          puVar62 = (uint64_t *)((int64_t)puVar25 + 1);
          *(char *)puVar57 = (char)*puVar25;
          puVar57 = (uint64_t *)((int64_t)puVar57 + 1);
          uVar71 = uVar71 - 1;
          puVar25 = puVar62;
        } while (uVar71 != 0);
      }
      if ((uint64_t)((int64_t)param_4 - (int64_t)puVar28) < 0xfffffffffffffff9) {
        while( true ) {
          *(char *)puVar57 = (char)*puVar62;
          *(uint8_t *)((int64_t)puVar57 + 1) = *(uint8_t *)((int64_t)puVar62 + 1);
          *(uint8_t *)((int64_t)puVar57 + 2) = *(uint8_t *)((int64_t)puVar62 + 2);
          *(uint8_t *)((int64_t)puVar57 + 3) = *(uint8_t *)((int64_t)puVar62 + 3);
          *(uint8_t *)((int64_t)puVar57 + 4) = *(uint8_t *)((int64_t)puVar62 + 4);
          *(uint8_t *)((int64_t)puVar57 + 5) = *(uint8_t *)((int64_t)puVar62 + 5);
          *(uint8_t *)((int64_t)puVar57 + 6) = *(uint8_t *)((int64_t)puVar62 + 6);
          *(uint8_t *)((int64_t)puVar57 + 7) = *(uint8_t *)((int64_t)puVar62 + 7);
          if (puVar62 + 1 == puVar28) break;
          puVar57 = puVar57 + 1;
          puVar62 = puVar62 + 1;
        }
      }
    }
LAB_7fffa4ab4650:
    lVar43 = param_2[1];
    param_2[3] = param_2[3] + uVar53;
    if (0xffff < uVar53) {
      *(uint32_t *)(param_2 + 9) = 1;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar43 - *param_2) >> 3);
    }
  }
  else {
    uVar71 = param_4[1];
    *puVar62 = *param_4;
    puVar62[1] = uVar71;
    if (0x10 < uVar53) {
      lVar43 = param_2[3];
      uVar71 = param_4[3];
      *(uint64_t *)(lVar43 + 0x10) = param_4[2];
      *(uint64_t *)(lVar43 + 0x18) = uVar71;
      if (0x20 < (int64_t)uVar53) {
        lVar51 = 0;
        do {
          puVar5 = (uint64_t *)((int64_t)param_4 + lVar51 + 0x20);
          uVar10 = puVar5[1];
          puVar4 = (uint64_t *)(lVar43 + 0x20 + lVar51);
          *puVar4 = *puVar5;
          puVar4[1] = uVar10;
          puVar4 = (uint64_t *)((int64_t)param_4 + lVar51 + 0x30);
          uVar10 = puVar4[1];
          puVar5 = (uint64_t *)(lVar43 + 0x30 + lVar51);
          *puVar5 = *puVar4;
          puVar5[1] = uVar10;
          lVar1 = lVar43 + 0x20 + lVar51;
          lVar51 = lVar51 + 0x20;
        } while (lVar1 + 0x20U < lVar43 + uVar53);
      }
      goto LAB_7fffa4ab4650;
    }
    lVar43 = param_2[1];
    param_2[3] = param_2[3] + uVar53;
  }
  uVar71 = (uVar61 + uVar40) - 3;
  *(short *)(lVar43 + 4) = (short)uVar53;
  *(int *)param_2[1] = iVar45;
  if (0xffff < uVar71) {
    *(uint32_t *)(param_2 + 9) = 2;
    uVar53 = param_2[1] - *param_2;
    iVar45 = (int)(uVar53 >> 3);
    if ((0x305efad4 << (bVar15 & 0x1f) | 0x305efad4U >> 0x20 - (bVar15 & 0x1f)) <
        (0x9b9f5f75U >> (bVar15 & 0x1f) | -0x6460a08b << 0x20 - (bVar15 & 0x1f))) {
      iVar45 = (int)uVar53 + 3;
    }
    *(int *)((int64_t)param_2 + 0x4c) = iVar45;
  }
  param_4 = (uint64_t *)((int64_t)puVar28 + uVar61 + uVar40);
  *(short *)(param_2[1] + 6) = (short)uVar71;
  param_2[1] = param_2[1] + 8;
  if (puStack_d8 < param_4) {
    *(int *)(uVar19 + uVar39 * 4) = (int)puStack_d8 - iVar13;
  }
  if (puVar36 < param_4) goto LAB_7fffa4ab4d90;
  uVar34 = uVar59 + 2;
  if ((int)((0x83392ecb - uVar66) * 0x400000 | 0x83392ecb - uVar66 >> 10) <
      (int)((0xe29ce328 - uVar66 ^ 0x40e38c50) + 0xb4a97ba0)) {
    uVar34 = uVar59 ^ 2;
  }
  uVar39 = (uint64_t)uVar59;
  if ((int)uVar48 < 6) {
    if (uVar48 == 5) {
      lVar43 = -0x30e4432345000000;
      goto LAB_7fffa4ab4824;
    }
    *(uint32_t *)(uVar19 + (uint64_t)
                       ((uint32_t)(*(int *)(lVar9 + 2 + uVar39) * -0x61c8864f) >> (bVar17 & 0x1f)) * 4)
         = uVar34;
    uVar39 = (uint64_t)((uint32_t)(*(int *)((int64_t)param_4 + -2) * -0x61c8864f) >> (bVar17 & 0x1f));
  }
  else {
    if (uVar48 == 6) {
      *(uint32_t *)(uVar19 + ((uint64_t)(*(int64_t *)(lVar9 + 2 + uVar39) * -0x30e4432340650000) >>
                         (bVar16 & 0x3f)) * 4) = uVar34;
      uVar39 = *(int64_t *)((int64_t)param_4 + -2) * -0x30e4432340650000;
    }
    else {
      lVar43 = -0x30e44323405a9d00;
LAB_7fffa4ab4824:
      *(uint32_t *)(uVar19 + ((uint64_t)(*(int64_t *)(lVar9 + 2 + uVar39) * lVar43) >> (bVar16 & 0x3f)
                         ) * 4) = uVar34;
      uVar39 = lVar43 * *(int64_t *)((int64_t)param_4 + -2);
    }
    uVar39 = uVar39 >> (bVar16 & 0x3f);
  }
  *(int *)(uVar19 + uVar39 * 4) = ((int)param_4 + -2) - iVar13;
  do {
    uVar35 = uVar46;
    iVar45 = (int)param_4 - iVar13;
    uVar34 = iVar45 - uVar18;
    lVar43 = lVar9;
    if (uVar34 < uStack_70) {
      lVar43 = lVar63;
    }
    uVar46 = uVar35;
    if ((((uint32_t)(int)(short)(uVar44 ^ 0x90cd) <= uVar34 - uStack_70) || (uVar18 == 0)) ||
       (puVar3 = (uint32_t *)((uint64_t)uVar34 + lVar43), *puVar3 != (uint32_t)*param_4)) break;
    puVar62 = (uint64_t *)((int64_t)param_4 + 4);
    puVar57 = (uint64_t *)(puVar3 + 1);
    puVar25 = puVar2;
    if (uVar34 < uStack_70) {
      puVar25 = puVar30;
    }
    puVar28 = (uint64_t *)((int64_t)param_4 + (int64_t)puVar25 + (4 - (int64_t)puVar57));
    if (puVar2 <= puVar28) {
      puVar28 = puVar2;
    }
    puVar27 = puVar57;
    puVar31 = puVar62;
    if (puVar62 < (uint64_t *)((int64_t)puVar28 - 7U)) {
      if (*puVar57 == *puVar62) {
        lVar51 = 0;
        do {
          puVar27 = (uint64_t *)((int64_t)param_4 + lVar51 + 0xc);
          if ((uint64_t *)((int64_t)puVar28 - 7U) <= puVar27) {
            puVar31 = (uint64_t *)((int64_t)param_4 + lVar51 + 0xc);
            puVar27 = (uint64_t *)((int64_t)puVar3 + lVar51 + 0xc);
            goto LAB_7fffa4ab4a00;
          }
          uVar39 = *(uint64_t *)((uint64_t)uVar34 + lVar43 + 0xc + lVar51);
          uVar61 = *puVar27;
          lVar51 = lVar51 + 8;
        } while (uVar39 == uVar61);
        uVar46 = 0;
        for (uVar61 = uVar61 ^ uVar39; (uVar61 & 1) == 0; uVar61 = uVar61 >> 1 | 0x8000000000000000)
        {
          uVar46 = uVar46 + 1;
        }
        uVar39 = (uint64_t)(uVar46 >> 3) + lVar51;
      }
      else {
        uVar46 = 0;
        for (uVar39 = *puVar62 ^ *puVar57; (uVar39 & 1) == 0;
            uVar39 = uVar39 >> 1 | 0x8000000000000000) {
          uVar46 = uVar46 + 1;
        }
        uVar39 = (uint64_t)(uVar46 >> 3);
      }
    }
    else {
LAB_7fffa4ab4a00:
      if ((puVar31 < (uint64_t *)((int64_t)puVar28 - 3U)) && ((uint32_t)*puVar27 == (uint32_t)*puVar31)) {
        puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
        puVar31 = (uint64_t *)((int64_t)puVar31 + 4);
      }
      if ((puVar31 < (uint64_t *)((int64_t)puVar28 - 1U)) && ((short)*puVar27 == (short)*puVar31))
      {
        puVar31 = (uint64_t *)((int64_t)puVar31 + 2);
        puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
      }
      if (puVar31 < puVar28) {
        puVar31 = (uint64_t *)((int64_t)puVar31 + (uint64_t)((char)*puVar27 == (char)*puVar31));
      }
      uVar39 = (int64_t)puVar31 - (int64_t)puVar62;
    }
    if ((uint64_t *)((int64_t)puVar57 + uVar39) == puVar25) {
      puVar62 = (uint64_t *)((int64_t)puVar62 + uVar39);
      puVar57 = puVar52;
      puVar25 = puVar62;
      if (puVar62 < puVar42) {
        if (*puVar52 == *puVar62) {
          puVar28 = (uint64_t *)((int64_t)param_4 + uVar39 + 0xc);
          puVar25 = puVar28;
          puVar57 = (uint64_t *)(uVar14 + lVar9);
code_r0x7fffa4ab4c02:
          puVar57 = puVar57 + 1;
          if (puVar25 < puVar42) {
            if (*puVar57 == *puVar25) goto code_r0x7fffa4ab4c29;
            uVar46 = 0;
            for (uVar61 = *puVar25 ^ *puVar57; (uVar61 & 1) == 0;
                uVar61 = uVar61 >> 1 | 0x8000000000000000) {
              uVar46 = uVar46 + 1;
            }
            puVar57 = (uint64_t *)-(int64_t)puVar62;
            if ((uVar66 + 0x23a3ca74) * 0x3b774e2f != -0x4e3f72e4) {
              puVar57 = puVar62;
            }
            uVar61 = (int64_t)puVar57 + (uint64_t)(uVar46 >> 3) + (int64_t)puVar28;
            goto LAB_7fffa4ab4d58;
          }
          goto LAB_7fffa4ab4c47;
        }
        uVar46 = 0;
        for (uVar61 = *puVar52 ^ *puVar62; (uVar61 & 1) == 0;
            uVar61 = uVar61 >> 1 | 0x8000000000000000) {
          uVar46 = uVar46 + 1;
        }
        uVar61 = (uint64_t)(uVar46 >> 3);
      }
      else {
LAB_7fffa4ab4c47:
        if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 3U)) && ((uint32_t)*puVar57 == (uint32_t)*puVar25))
        {
          puVar57 = (uint64_t *)((int64_t)puVar57 + 4);
          puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
        }
        if ((puVar25 < (uint64_t *)((int64_t)puVar2 - 1U)) && ((short)*puVar57 == (short)*puVar25)
           ) {
          puVar57 = (uint64_t *)((int64_t)puVar57 + 2);
          puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
        }
        if (puVar25 < puVar2) {
          bVar70 = (uint8_t)*puVar57 == (uint8_t)*puVar25;
          if ((int64_t)
              (uint64_t)
              ((uVar66 + 0x812c8ad) * -0x7876a100 | (uVar66 + 0x812c8ad) * -0x5f7876a1 >> 0x18) <=
              (int64_t)(int)(uVar66 + 0x9ef8b1d0 ^ 0x79497167)) {
            bVar70 = (uint8_t)*puVar57 <= (uint8_t)*puVar25;
          }
          puVar25 = (uint64_t *)((int64_t)puVar25 + (uint64_t)bVar70);
        }
        uVar61 = (int64_t)puVar25 - (int64_t)puVar62;
      }
LAB_7fffa4ab4d58:
      uVar39 = uVar39 + uVar61;
    }
    if (param_4 <= puVar58) {
      uVar61 = param_4[1];
      puVar62 = (uint64_t *)param_2[3];
      *puVar62 = *param_4;
      puVar62[1] = uVar61;
    }
    *(uint16_t *)(param_2[1] + 4) = 0;
    *(uint32_t *)param_2[1] = 1;
    if ((uint64_t)((uVar66 | 1) * 0x3c98 + 0x7ee7 & 0xffff) < uVar39 + 1) {
      *(uint32_t *)(param_2 + 9) = 2;
      *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
    }
    *(short *)(param_2[1] + 6) = (short)(uVar39 + 1);
    param_2[1] = param_2[1] + 8;
    if ((int)uVar48 < 6) {
      if (uVar48 == 5) {
        uVar61 = *param_4 * -0x30e4432345000000 >> (bVar16 & 0x3f);
      }
      else {
        uVar61 = (uint64_t)((uint32_t)*param_4 * -0x61c8864f >> (bVar17 & 0x1f));
      }
    }
    else {
      if (uVar48 == 6) {
        uVar61 = *param_4 * -0x30e4432340650000;
      }
      else {
        uVar61 = *param_4 * -0x30e44323405a9d00;
      }
      uVar61 = uVar61 >> (bVar16 & 0x3f);
    }
    *(int *)(uVar19 + uVar61 * 4) = iVar45;
    param_4 = (uint64_t *)((int64_t)param_4 + uVar39 + 4);
    uVar46 = uVar18;
    uVar18 = uVar35;
  } while (param_4 <= puVar36);
LAB_7fffa4ab4d90:
  puVar62 = (uint64_t *)((int64_t)param_4 + uVar67 + 1);
  uVar34 = uVar46;
  if (puVar36 <= puVar62) goto LAB_7fffa4ab61bf;
  goto LAB_7fffa4ab39df;
code_r0x7fffa4ab42de:
  lVar43 = lVar43 + 8;
  goto LAB_7fffa4ab42c0;
code_r0x7fffa4ab4c29:
  puVar25 = puVar25 + 1;
  puVar28 = puVar28 + 1;
  goto code_r0x7fffa4ab4c02;
code_r0x7fffa4ab7b4e:
  lVar63 = lVar63 + 8;
  goto LAB_7fffa4ab7b30;
code_r0x7fffa4ab8109:
  lVar43 = lVar43 + 8;
  goto LAB_7fffa4ab80f0;
code_r0x7fffa4ab53ff:
  lVar63 = lVar63 + 8;
  goto LAB_7fffa4ab53e3;
code_r0x7fffa4ab65eb:
  lVar63 = lVar63 + 8;
  goto LAB_7fffa4ab65d0;
LAB_7fffa4ab85e1:
  puVar62 = puVar27;
  uVar67 = uVar39;
  if (uVar60 < 5) {
LAB_7fffa4ab85ed:
    *(int *)(uVar19 + uVar67 * 4) = (int)puVar52 - iVar13;
  }
  puVar52 = (uint64_t *)(uVar61 + lVar9);
  uVar37 = (int)puVar62 - (int)puVar52;
  uStack_1d0 = (uint64_t)uVar37;
  iVar69 = uVar37 + 3;
  bVar70 = (int64_t)puVar25 < (int64_t)puVar62;
  if ((((uVar66 + 0xa2c4ed03) * 0x8000 | uVar66 + 0xa2c4ed03 >> 0x11) ^ 0x8ea230be) <=
      (uVar66 ^ 0x65cb7999) * 0x71b523c3) {
    bVar70 = puVar25 < puVar62;
  }
  lVar43 = 4;
  uStack_1b0 = uStack_b0;
  if ((uVar48 <= uVar18) || (!bVar70)) {
  }
  else {
    puVar30 = (uint64_t *)(uVar61 + lVar9 + -1);
    do {
      puVar52 = puVar30;
      puVar30 = (uint64_t *)((int64_t)puVar62 + -1);
      if (*(char *)puVar30 != (char)*puVar52) {
        puVar52 = (uint64_t *)((int64_t)puVar52 + 1);
        goto LAB_7fffa4ab8703;
      }
      lVar43 = lVar43 + 1;
      puVar62 = puVar30;
    } while ((puVar25 < puVar30) &&
            (puVar30 = (uint64_t *)((int64_t)puVar52 + -1), puVar42 < puVar52));
  }
LAB_7fffa4ab8703:
  puVar30 = (uint64_t *)((int64_t)puVar52 + lVar43);
  puVar28 = (uint64_t *)((int64_t)puVar62 + lVar43);
  puVar27 = puVar28;
  if (puVar28 < puVar57) {
    if (*puVar30 == *puVar28) {
      lVar63 = 0;
      do {
        puVar30 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 8);
        if (puVar57 <= puVar30) {
          puVar30 = (uint64_t *)((int64_t)puVar52 + lVar63 + lVar43 + 8);
          puVar27 = (uint64_t *)((int64_t)puVar62 + lVar63 + lVar43 + 8);
          goto joined_r0x7fffa4ab8776;
        }
        uVar60 = *(uint64_t *)((int64_t)puVar52 + lVar63 + lVar43 + 8);
        uVar39 = *puVar30;
        lVar63 = lVar63 + 8;
      } while (uVar60 == uVar39);
      uVar37 = 0;
      for (uVar39 = uVar39 ^ uVar60; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x8000000000000000) {
        uVar37 = uVar37 + 1;
      }
      uVar60 = (uint64_t)(uVar37 >> 3) + lVar63;
    }
    else {
      uVar37 = 0;
      for (uVar60 = *puVar28 ^ *puVar30; (uVar60 & 1) == 0;
          uVar60 = uVar60 >> 1 | 0x8000000000000000) {
        uVar37 = uVar37 + 1;
      }
      uVar60 = (uint64_t)(uVar37 >> 3);
    }
  }
  else {
joined_r0x7fffa4ab8776:
    if ((puVar27 < (uint64_t *)((int64_t)puVar2 - 3U)) && ((uint32_t)*puVar30 == (uint32_t)*puVar27)) {
      puVar30 = (uint64_t *)((int64_t)puVar30 + 4);
      puVar27 = (uint64_t *)((int64_t)puVar27 + 4);
    }
    if ((puVar27 < (uint64_t *)((int64_t)puVar2 - 1U)) && ((short)*puVar30 == (short)*puVar27)) {
      puVar30 = (uint64_t *)((int64_t)puVar30 + 2);
      puVar27 = (uint64_t *)((int64_t)puVar27 + 2);
    }
    if (puVar27 < puVar2) {
      puVar27 = (uint64_t *)((int64_t)puVar27 + (uint64_t)((char)*puVar30 == (char)*puVar27));
    }
    uVar60 = (int64_t)puVar27 - (int64_t)puVar28;
  }
  puVar52 = (uint64_t *)param_2[3];
  uVar39 = (int64_t)puVar62 - (int64_t)puVar25;
  if (puVar58 < puVar62) {
    puVar30 = puVar52;
    if (puVar25 <= puVar58) {
      puVar30 = (uint64_t *)((int64_t)puVar52 + ((int64_t)puVar58 - (int64_t)puVar25));
      uVar61 = puVar25[1];
      *puVar52 = *puVar25;
      puVar52[1] = uVar61;
      if (0x10 < (int64_t)puVar58 - (int64_t)puVar25) {
        lVar63 = 0x10;
        do {
          uVar10 = ((uint64_t *)((int64_t)puVar25 + lVar63))[1];
          *(uint64_t *)((int64_t)puVar52 + lVar63) = *(uint64_t *)((int64_t)puVar25 + lVar63);
          ((uint64_t *)((int64_t)puVar52 + lVar63))[1] = uVar10;
          puVar4 = (uint64_t *)((int64_t)puVar25 + lVar63 + 0x10);
          uVar10 = puVar4[1];
          puVar5 = (uint64_t *)((int64_t)puVar52 + lVar63 + 0x10);
          *puVar5 = *puVar4;
          puVar5[1] = uVar10;
          lVar51 = lVar63 + 0x20;
          lVar63 = lVar63 + 0x20;
        } while ((uint64_t *)((int64_t)puVar52 + lVar51) < puVar30);
      }
      puVar25 = puVar58;
    }
    if (puVar25 < puVar62) {
      uVar61 = (int64_t)puVar62 - (int64_t)puVar25;
      if ((uVar61 < 4) || ((uint64_t)((int64_t)puVar30 - (int64_t)puVar25) < 0x20)) {
LAB_7fffa4ab8a39:
        puVar52 = puVar30;
      }
      else {
        if (uVar61 < 0x20) {
          uVar67 = 0;
        }
        else {
          uVar67 = uVar61 & 0xffffffffffffffe0;
          lVar63 = 0;
          while( true ) {
            uVar10 = *(uint64_t *)((int64_t)puVar25 + lVar63);
            uVar11 = ((uint64_t *)((int64_t)puVar25 + lVar63))[1];
            puVar4 = (uint64_t *)((int64_t)puVar25 + lVar63 + 0x10);
            uVar12 = puVar4[1];
            puVar5 = (uint64_t *)((int64_t)puVar30 + lVar63 + 0x10);
            *puVar5 = *puVar4;
            puVar5[1] = uVar12;
            *(uint64_t *)((int64_t)puVar30 + lVar63) = uVar10;
            ((uint64_t *)((int64_t)puVar30 + lVar63))[1] = uVar11;
            if (uVar67 - 0x20 == lVar63) break;
            lVar63 = lVar63 + 0x20;
          }
          if (uVar61 == uVar67) goto LAB_7fffa4ab8b2e;
          if (((uint32_t)uVar61 & 0x1c) == (uVar66 + 0x90d0 & 0xffff)) {
            puVar25 = (uint64_t *)((int64_t)puVar25 + uVar67);
            puVar30 = (uint64_t *)((int64_t)puVar30 + uVar67);
            goto LAB_7fffa4ab8a39;
          }
        }
        uVar40 = uVar61 & 0xfffffffffffffffc;
        puVar52 = (uint64_t *)((int64_t)puVar30 + uVar40);
        do {
          *(uint32_t *)((int64_t)puVar30 + uVar67) = *(uint32_t *)((int64_t)puVar25 + uVar67);
          uVar67 = uVar67 + 4;
        } while (uVar40 != uVar67);
        if (uVar61 == uVar40) goto LAB_7fffa4ab8b2e;
        puVar25 = (uint64_t *)((int64_t)puVar25 + uVar40);
      }
      uVar48 = (uint32_t)puVar62;
      uVar37 = (uint32_t)puVar25;
      uVar61 = (uint64_t)
               ((~uVar48 | uVar37) *
                (0x53b091ff << (bVar15 & 0x1f) | 0x53b091ffU >> 0x20 - (bVar15 & 0x1f)) +
                ((~uVar37 & uVar48) * 2 - (uVar48 ^ uVar37)) & 7);
      puVar30 = puVar25;
      if (uVar61 != (uVar66 + 0xbd67690d ^ 0xfef9d83d)) {
        puVar28 = puVar52;
        do {
          puVar52 = (uint64_t *)((int64_t)puVar28 + 1);
          uVar67 = *puVar30;
          puVar30 = (uint64_t *)((int64_t)puVar30 + 1);
          *(char *)puVar28 = (char)uVar67;
          uVar61 = uVar61 - 1;
          puVar28 = puVar52;
        } while (uVar61 != 0);
      }
      if ((uint64_t)((int64_t)puVar25 - (int64_t)puVar62) < 0xfffffffffffffff9) {
        while( true ) {
          *(char *)puVar52 = (char)*puVar30;
          *(uint8_t *)((int64_t)puVar52 + 1) = *(uint8_t *)((int64_t)puVar30 + 1);
          *(uint8_t *)((int64_t)puVar52 + 2) = *(uint8_t *)((int64_t)puVar30 + 2);
          *(uint8_t *)((int64_t)puVar52 + 3) = *(uint8_t *)((int64_t)puVar30 + 3);
          *(uint8_t *)((int64_t)puVar52 + 4) = *(uint8_t *)((int64_t)puVar30 + 4);
          *(uint8_t *)((int64_t)puVar52 + 5) = *(uint8_t *)((int64_t)puVar30 + 5);
          *(uint8_t *)((int64_t)puVar52 + 6) = *(uint8_t *)((int64_t)puVar30 + 6);
          *(uint8_t *)((int64_t)puVar52 + 7) = *(uint8_t *)((int64_t)puVar30 + 7);
          if (puVar30 + 1 == puVar62) break;
          puVar52 = puVar52 + 1;
          puVar30 = puVar30 + 1;
        }
      }
    }
  }
  else {
    uVar61 = puVar25[1];
    *puVar52 = *puVar25;
    puVar52[1] = uVar61;
    if (uVar39 < 0x11) {
      lVar63 = param_2[1];
      param_2[3] = param_2[3] + uVar39;
      goto LAB_7fffa4ab8b65;
    }
    lVar63 = param_2[3];
    uVar61 = puVar25[3];
    *(uint64_t *)(lVar63 + 0x10) = puVar25[2];
    *(uint64_t *)(lVar63 + 0x18) = uVar61;
    if (0x20 < (int64_t)uVar39) {
      uVar61 = lVar63 + 0x40;
      puVar25 = puVar25 + 6;
      while( true ) {
        bVar70 = uVar61 < lVar63 + uVar39;
        if ((uVar66 | 1) * -0x3b5aad51 != -0x16b34b81) {
          bVar70 = (int64_t)uVar61 < (int64_t)(lVar63 + uVar39);
        }
        uVar67 = puVar25[-1];
        *(uint64_t *)(uVar61 - 0x20) = puVar25[-2];
        *(uint64_t *)(uVar61 - 0x18) = uVar67;
        uVar67 = puVar25[1];
        *(uint64_t *)(uVar61 - 0x10) = *puVar25;
        *(uint64_t *)(uVar61 - 8) = uVar67;
        if (!bVar70) break;
        uVar61 = uVar61 + 0x20;
        puVar25 = puVar25 + 4;
      }
    }
  }
LAB_7fffa4ab8b2e:
  lVar63 = param_2[1];
  param_2[3] = param_2[3] + uVar39;
  if ((-0xe8e84bf - uVar66) * -0x2f6e64f1 < uVar39) {
    *(uint32_t *)(param_2 + 9) = 1;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(lVar63 - *param_2) >> 3);
  }
LAB_7fffa4ab8b65:
  uVar61 = (lVar43 + uVar60) - 3;
  *(short *)(lVar63 + 4) = (short)uVar39;
  *(int *)param_2[1] = iVar69;
  if (0xffff < uVar61) {
    *(uint32_t *)(param_2 + 9) = 2;
    *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
  }
  puVar62 = (uint64_t *)((int64_t)puVar62 + lVar43 + uVar60);
  *(short *)(param_2[1] + 6) = (short)uVar61;
  param_2[1] = param_2[1] + 8;
  uVar47 = (uint32_t)uStack_1d0;
  if (puVar62 <= puVar36) {
    uVar48 = *(int *)(lVar9 + 2 + (uint64_t)uVar34) * -0x61c8864f;
    uVar37 = uVar48 >> (bVar17 & 0x1f);
    if (((0xbb8f7ec3 - uVar66) * 0x400000 | 0xbb8f7ec3 - uVar66 >> 10) < 0x77d3f191) {
      uVar37 = (0x20 - iVar45) * uVar48;
    }
    *(uint32_t *)(uVar19 + (uint64_t)uVar37 * 4) = uVar34 + 2;
    *(int *)(uVar19 + (uint64_t)
                      ((uint32_t)(*(int *)((int64_t)puVar62 + -2) * -0x61c8864f) >> (bVar17 & 0x1f)) *
                      4) = ((int)puVar62 + -2) - iVar13;
    if ((uint32_t)uStack_1b0 == (uVar66 - 0x6f30 & 0xffff)) {
      uStack_1b0._0_4_ = 0;
    }
    else {
      do {
        uVar60 = (uint64_t)(uint32_t)uStack_1b0;
        uVar37 = (uint32_t)uStack_1d0;
        if ((uint32_t)*puVar62 != *(uint32_t *)((int64_t)puVar62 - uVar60)) {
          uVar47 = uVar37;
          break;
        }
        lVar63 = -uVar60;
        puVar30 = (uint64_t *)((int64_t)puVar62 + 4);
        puVar25 = (uint64_t *)((int64_t)puVar62 + lVar63 + 4);
        puVar52 = puVar30;
        if (puVar30 < puVar57) {
          if (*puVar25 == *puVar30) {
            lVar43 = 0xc;
LAB_7fffa4ab8d20:
            puVar52 = (uint64_t *)((int64_t)puVar62 + lVar43);
            if (puVar52 < puVar57) {
              uVar39 = *(uint64_t *)((int64_t)puVar62 + lVar43 + lVar63);
              uVar61 = *puVar52;
              if (uVar39 == uVar61) goto code_r0x7fffa4ab8d41;
              uVar40 = ~uVar39;
              uVar53 = (uint64_t)param_4 & uVar61 & uVar40;
              uVar67 = (uVar61 | uVar39) - (int64_t)param_4;
              if ((int)((0x51c3c1d6 - uVar66) * 0x77b971d5 + 0x6041a5f5) <=
                  (int)((-0x292e775a - uVar66) * -0x3984909b)) {
                uVar67 = (uint64_t)param_4 ^ (uVar61 | uVar39);
              }
              uVar71 = uVar53 | 0x5a5bbb48;
              if ((0x47ffe << (bVar15 & 0x1f) | 0x47ffeU >> 0x20 - (bVar15 & 0x1f)) ==
                  0xc1906f34 - uVar66) {
                uVar71 = uVar53 * 0x5a5bbb48;
              }
              uVar53 = uVar71 + ((uVar39 ^ uVar61 | (uint64_t)param_4) ^ ~(uint64_t)param_4) *
                                (int64_t)(int)((uVar66 | 1) * 0x7c838d9b) +
                                ((~uVar61 | uVar40) ^ ~(uint64_t)param_4 | ~(uint64_t)param_4) +
                                uVar53 * -0x5a5bbb48 +
                       ((uVar61 & uVar39 | (uint64_t)param_4) & (uint64_t)param_4) * 0x305b055;
              uVar39 = uVar53 ^ -(uVar67 & (uint64_t)param_4);
              if ((uVar66 | 1) * -0x691cbf44 <=
                  (0x9dfa2217U >> (bVar15 & 0x1f) | -0x6205dde9 << 0x20 - (bVar15 & 0x1f)) *
                  -0x34cb3f09) {
                uVar39 = uVar53 - (uVar67 & (uint64_t)param_4);
              }
              uVar48 = 0;
              for (uVar39 = uVar39 + (~(uint64_t)param_4 & (uVar40 ^ uVar61)) * 0x305b054;
                  (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x8000000000000000) {
                uVar48 = uVar48 + 1;
              }
              uVar39 = ((uint64_t)(uVar48 >> 3) + lVar43) - 4;
              goto LAB_7fffa4ab8df0;
            }
            puVar25 = (uint64_t *)(lVar63 + (int64_t)puVar52);
            goto joined_r0x7fffa4ab8d5a;
          }
          uVar48 = 0;
          for (uVar39 = *puVar25 ^ *puVar30; (uVar39 & 1) == 0;
              uVar39 = uVar39 >> 1 | 0x8000000000000000) {
            uVar48 = uVar48 + 1;
          }
          uVar39 = (uint64_t)(uVar48 >> 3);
        }
        else {
joined_r0x7fffa4ab8d5a:
          if ((puVar52 < (uint64_t *)((int64_t)puVar2 - 3U)) && ((uint32_t)*puVar25 == (uint32_t)*puVar52)
             ) {
            puVar52 = (uint64_t *)((int64_t)puVar52 + 4);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 4);
          }
          if ((puVar52 < (uint64_t *)((int64_t)puVar2 - 1U)) &&
             ((short)*puVar25 == (short)*puVar52)) {
            puVar52 = (uint64_t *)((int64_t)puVar52 + 2);
            puVar25 = (uint64_t *)((int64_t)puVar25 + 2);
          }
          if (puVar52 < puVar2) {
            puVar52 = (uint64_t *)
                      ((int64_t)puVar52 + (uint64_t)((char)*puVar25 == (char)*puVar52));
          }
          uVar39 = (int64_t)puVar52 - (int64_t)puVar30;
        }
LAB_7fffa4ab8df0:
        *(int *)(uVar19 + (uint64_t)((uint32_t)*puVar62 * -0x61c8864f >> (bVar17 & 0x1f)) * 4) =
             (int)puVar62 - iVar13;
        if (puVar62 <= puVar58) {
          uVar61 = puVar62[1];
          puVar52 = (uint64_t *)param_2[3];
          *puVar52 = *puVar62;
          puVar52[1] = uVar61;
        }
        *(uint16_t *)(param_2[1] + 4) = 0;
        *(uint32_t *)param_2[1] = 1;
        if (0xffff < uVar39 + 1) {
          *(uint32_t *)(param_2 + 9) = 2;
          *(int *)((int64_t)param_2 + 0x4c) = (int)((uint64_t)(param_2[1] - *param_2) >> 3);
        }
        puVar62 = (uint64_t *)((int64_t)puVar62 + uVar39 + 4);
        *(short *)(param_2[1] + 6) = (short)(uVar39 + 1);
        param_2[1] = param_2[1] + 8;
        uStack_1d0 = uVar60;
        uVar47 = (uint32_t)uStack_1b0;
        uStack_1b0._0_4_ = uVar37;
      } while (((uVar66 + 0x5096847) * 0x800000 | uVar66 + 0x5096847 >> 9) < 0x911ff760 ==
               puVar36 < puVar62);
    }
  }
  puVar52 = (uint64_t *)((int64_t)puVar62 + uVar14);
  puVar30 = (uint64_t *)((int64_t)puVar62 + uVar14 + 1);
  uStack_b0 = (uint64_t)uVar47;
  puVar25 = puVar62;
  if (puVar36 <= puVar30) goto LAB_7fffa4ab9d73;
  goto LAB_7fffa4ab83e0;
code_r0x7fffa4ab8d41:
  lVar43 = lVar43 + 8;
  goto LAB_7fffa4ab8d20;
code_r0x7fffa4ab3729:
  lVar43 = lVar43 + 8;
  goto LAB_7fffa4ab3710;
}


// ============================================================================
// Function : FUN_7fffa4abac80  |  RVA: 0x34ac80  |  Size: 302 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t (*) [32]
FUN_7fffa4abac80(uint8_t (*param_1) [32],uint8_t (*param_2) [32],short param_3)

{
  uint16_t uVar1;
  uint8_t auVar2 [32];
  uint8_t (*pauVar3) [32];
  uint8_t (*pauVar4) [32];
  uint8_t (*pauVar5) [32];
  uint8_t (*pauVar6) [32];
  uint8_t (*pauVar7) [32];
  uint8_t (*pauVar8) [32];
  uint8_t (*pauVar9) [32];
  uint8_t (*pauVar10) [32];
  uint32_t uVar11;
  uint8_t (*pauVar12) [32];
  uint64_t uVar13;
  uint64_t uVar14;
  uint8_t auVar15 [16];
  uint8_t auVar16 [32];
  
  uVar13 = (int64_t)param_2 - (int64_t)param_1;
  pauVar12 = param_2;
  if (((uVar13 & 0xffffffffffffffe0) == 0) || ((_DAT_7fffa47800e4 & 0x20) == 0)) {
    if (((uVar13 & 0xfffffffffffffff0) != 0) && ((_DAT_7fffa47800e4 & 4) != 0)) {
      do {
        pauVar3 = pauVar12 + -1;
        pauVar4 = pauVar12 + -1;
        pauVar5 = pauVar12 + -1;
        pauVar6 = pauVar12 + -1;
        pauVar7 = pauVar12 + -1;
        pauVar8 = pauVar12 + -1;
        pauVar9 = pauVar12 + -1;
        pauVar10 = pauVar12 + -1;
        pauVar12 = (uint8_t (*) [32])(pauVar12[-1] + 0x10);
        auVar15._0_2_ = -(uint16_t)(*(short *)(*pauVar3 + 0x10) == param_3);
        auVar15._2_2_ = -(uint16_t)(*(short *)(*pauVar4 + 0x12) == param_3);
        auVar15._4_2_ = -(uint16_t)(*(short *)(*pauVar5 + 0x14) == param_3);
        auVar15._6_2_ = -(uint16_t)(*(short *)(*pauVar6 + 0x16) == param_3);
        auVar15._8_2_ = -(uint16_t)(*(short *)(*pauVar7 + 0x18) == param_3);
        auVar15._10_2_ = -(uint16_t)(*(short *)(*pauVar8 + 0x1a) == param_3);
        auVar15._12_2_ = -(uint16_t)(*(short *)(*pauVar9 + 0x1c) == param_3);
        auVar15._14_2_ = -(uint16_t)(*(short *)(*pauVar10 + 0x1e) == param_3);
        uVar1 = (uint16_t)(SUB161(auVar15 >> 7,0) & 1) | (uint16_t)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (uint16_t)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                (uint16_t)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                (uint16_t)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                (uint16_t)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                (uint16_t)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (uint16_t)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                (uint16_t)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                (uint16_t)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                (uint16_t)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                (uint16_t)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                (uint16_t)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                (uint16_t)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                (uint16_t)((uint8_t)(auVar15._14_2_ >> 7) & 1) << 0xe | auVar15._14_2_ & 0x8000;
        if (uVar1 != 0) {
          uVar11 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> uVar11 == 0; uVar11 = uVar11 - 1) {
            }
          }
          return (uint8_t (*) [32])(pauVar12[-1] + (uint64_t)uVar11 + 0x1f);
        }
      } while (pauVar12 != (uint8_t (*) [32])((int64_t)param_2 - (uVar13 & 0xfffffffffffffff0)))
      ;
    }
  }
  else {
    auVar15 = vpunpcklwd_avx(ZEXT416((uint32_t)(int)param_3),ZEXT416((uint32_t)(int)param_3));
    auVar15 = vpshufd_avx(auVar15,0);
    auVar16._16_16_ = auVar15;
    auVar16._0_16_ = auVar15;
    do {
      auVar2 = vpcmpeqw_avx2(auVar16,pauVar12[-1]);
      pauVar12 = pauVar12 + -1;
      uVar11 = (uint32_t)(SUB321(auVar2 >> 7,0) & 1) | (uint32_t)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
               (uint32_t)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint32_t)(uint8_t)(auVar2[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) goto LAB_7fffa4abad3b;
    } while (pauVar12 != (uint8_t (*) [32])((int64_t)param_2 - (uVar13 & 0xffffffffffffffe0)));
    uVar14 = (uint64_t)((uint32_t)uVar13 & 0x1c);
    if ((uVar13 & 0x1c) != 0) {
      pauVar12 = (uint8_t (*) [32])((int64_t)pauVar12 - uVar14);
      auVar2 = vpmaskmovd_avx2(*(uint8_t (*) [32])(&UNK_7fffa56b2630 + -uVar14),*pauVar12);
      auVar16 = vpcmpeqw_avx2(auVar2,auVar16);
      auVar16 = vpand_avx2(auVar16,*(uint8_t (*) [32])(&UNK_7fffa56b2630 + -uVar14));
      uVar11 = (uint32_t)(SUB321(auVar16 >> 7,0) & 1) | (uint32_t)(SUB321(auVar16 >> 0xf,0) & 1) << 1 |
               (uint32_t)(SUB321(auVar16 >> 0x17,0) & 1) << 2 |
               (uint32_t)(SUB321(auVar16 >> 0x1f,0) & 1) << 3 |
               (uint32_t)(SUB321(auVar16 >> 0x27,0) & 1) << 4 |
               (uint32_t)(SUB321(auVar16 >> 0x2f,0) & 1) << 5 |
               (uint32_t)(SUB321(auVar16 >> 0x37,0) & 1) << 6 |
               (uint32_t)(SUB321(auVar16 >> 0x3f,0) & 1) << 7 |
               (uint32_t)(SUB321(auVar16 >> 0x47,0) & 1) << 8 |
               (uint32_t)(SUB321(auVar16 >> 0x4f,0) & 1) << 9 |
               (uint32_t)(SUB321(auVar16 >> 0x57,0) & 1) << 10 |
               (uint32_t)(SUB321(auVar16 >> 0x5f,0) & 1) << 0xb |
               (uint32_t)(SUB321(auVar16 >> 0x67,0) & 1) << 0xc |
               (uint32_t)(SUB321(auVar16 >> 0x6f,0) & 1) << 0xd |
               (uint32_t)(SUB321(auVar16 >> 0x77,0) & 1) << 0xe | (uint32_t)SUB321(auVar16 >> 0x7f,0) << 0xf
               | (uint32_t)(SUB321(auVar16 >> 0x87,0) & 1) << 0x10 |
               (uint32_t)(SUB321(auVar16 >> 0x8f,0) & 1) << 0x11 |
               (uint32_t)(SUB321(auVar16 >> 0x97,0) & 1) << 0x12 |
               (uint32_t)(SUB321(auVar16 >> 0x9f,0) & 1) << 0x13 |
               (uint32_t)(SUB321(auVar16 >> 0xa7,0) & 1) << 0x14 |
               (uint32_t)(SUB321(auVar16 >> 0xaf,0) & 1) << 0x15 |
               (uint32_t)(SUB321(auVar16 >> 0xb7,0) & 1) << 0x16 |
               (uint32_t)SUB321(auVar16 >> 0xbf,0) << 0x17 |
               (uint32_t)(SUB321(auVar16 >> 199,0) & 1) << 0x18 |
               (uint32_t)(SUB321(auVar16 >> 0xcf,0) & 1) << 0x19 |
               (uint32_t)(SUB321(auVar16 >> 0xd7,0) & 1) << 0x1a |
               (uint32_t)(SUB321(auVar16 >> 0xdf,0) & 1) << 0x1b |
               (uint32_t)(SUB321(auVar16 >> 0xe7,0) & 1) << 0x1c |
               (uint32_t)(SUB321(auVar16 >> 0xef,0) & 1) << 0x1d |
               (uint32_t)(SUB321(auVar16 >> 0xf7,0) & 1) << 0x1e |
               (uint32_t)(uint8_t)(auVar16[0x1f] >> 7) << 0x1f;
      if (uVar11 != 0) {
LAB_7fffa4abad3b:
        return (uint8_t (*) [32])(pauVar12[-1] + (uint64_t)(0x1f - LZCOUNT(uVar11)) + 0x1f);
      }
    }
  }
  do {
    if (pauVar12 == param_1) {
      return param_2;
    }
    pauVar12 = (uint8_t (*) [32])(pauVar12[-1] + 0x1e);
  } while (*(short *)*pauVar12 != param_3);
  return pauVar12;
}


// ============================================================================
// Function : FUN_7fffa4abadb0  |  RVA: 0x34adb0  |  Size: 517 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
void FUN_7fffa4abadb0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4,
                     uint64_t param_5)

{
  int64_t in_RAX;
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint8_t (*in_R10) [16];
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  
  uVar1 = in_RAX + 0x2c60ad85;
  uVar5 = -(param_5 << 6 | param_5 >> 0x3a) - 0x4dd97f5b;
  uVar1 = (uVar1 << 0x32 | uVar1 >> 0xe) ^ (uVar1 << 0x39 | uVar1 >> 7) ^ uVar1;
  uVar1 = (uVar1 << 0x24 | uVar1 >> 0x1c) ^ (uVar1 << 0x32 | uVar1 >> 0xe) ^ uVar1;
  uVar1 = (uVar1 << 0x24 | uVar1 >> 0x1c) ^ (uVar1 << 8 | uVar1 >> 0x38) ^ uVar1;
  uVar1 = (uVar1 << 8 | uVar1 >> 0x38) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) ^ (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar1;
  uVar3 = 0;
  if ((((0x6879b9fb - param_3) * 0x800000 | 0x6879b9fb - param_3 >> 9) ^ 0x15e602c9) <
      (param_3 ^ 0x9c9f9f1e)) {
    uVar3 = uVar1;
  }
  in_R10[1] = (uint8_t  [16])0x0;
  *in_R10 = (uint8_t  [16])0x0;
  if (uVar5 < ((param_3 ^ 0x6e24) & 0xffff)) {
    *(uint64_t *)in_R10[1] = uVar5;
    *(uint64_t *)(in_R10[1] + 8) = 7;
    FUN_7fffa56a5f20();
    *(uint16_t *)((int64_t)in_R10 + uVar5 * 2) = 0;
  }
  else {
    uVar2 = 0x7fffa5270a9a;
    uVar4 = 10;
    if (10 < (uVar5 | 7)) {
      uVar4 = uVar5 | 7;
    }
    (*(code *)((int64_t)(short)(0xe42 - (short)param_3) + 0x7fffa5270a9a))();
    lVar6 = (uVar2 << 0x2c | uVar2 >> 0x14) - ((uVar2 >> 0x14) << 0x36);
    *(uint64_t *)in_R10[1] = uVar5;
    *(int64_t *)*in_R10 = lVar6;
    *(uint64_t *)(in_R10[1] + 8) = uVar4;
    FUN_7fffa56a5f20(lVar6,uVar3 | uVar1 << 0x20 | uVar1 >> 0x20,uVar5 * 2);
    *(uint16_t *)(lVar6 + uVar5 * 2) = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4abafc0  |  RVA: 0x34afc0  |  Size: 198 bytes
// Callers  : none
// Callees  : none
// ============================================================================
int FUN_7fffa4abafc0(uint64_t *param_1,int64_t param_2,uint64_t param_3)

{
  uint32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  bool bVar4;
  
  param_2 = param_2 - (int64_t)param_1;
  if (7 < param_3) {
    for (; ((uint64_t)param_1 & 7) != 0; param_1 = (uint64_t *)((int64_t)param_1 + 1)) {
      bVar4 = (uint8_t)*param_1 < *(uint8_t *)((int64_t)param_1 + param_2);
      if ((uint8_t)*param_1 != *(uint8_t *)((int64_t)param_1 + param_2)) goto LAB_7fffa4abb003;
      param_3 = param_3 - 1;
    }
    if (param_3 >> 3 != 0) {
      uVar3 = param_3 >> 5;
      if (uVar3 != 0) {
        do {
          uVar2 = *param_1;
          if (uVar2 != *(uint64_t *)((int64_t)param_1 + param_2)) goto LAB_7fffa4abb074;
          uVar2 = param_1[1];
          if (uVar2 != *(uint64_t *)((int64_t)param_1 + param_2 + 8)) {
LAB_7fffa4abb070:
            param_1 = param_1 + 1;
            goto LAB_7fffa4abb074;
          }
          uVar2 = param_1[2];
          if (uVar2 != *(uint64_t *)((int64_t)param_1 + param_2 + 0x10)) {
LAB_7fffa4abb06c:
            param_1 = param_1 + 1;
            goto LAB_7fffa4abb070;
          }
          uVar2 = param_1[3];
          if (uVar2 != *(uint64_t *)((int64_t)param_1 + param_2 + 0x18)) {
            param_1 = param_1 + 1;
            goto LAB_7fffa4abb06c;
          }
          param_1 = param_1 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        param_3 = param_3 & 0x1f;
      }
      uVar3 = param_3 >> 3;
      if (uVar3 != 0) {
        do {
          uVar2 = *param_1;
          if (uVar2 != *(uint64_t *)((int64_t)param_1 + param_2)) {
LAB_7fffa4abb074:
            uVar3 = *(uint64_t *)(param_2 + (int64_t)param_1);
            uVar1 = (uint32_t)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                            (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                            (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                          (uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                           (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                           (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                           (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38));
            return (1 - uVar1) - (uint32_t)(uVar1 != 0);
          }
          param_1 = param_1 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        param_3 = param_3 & 7;
      }
    }
  }
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar4 = (uint8_t)*param_1 < *(uint8_t *)((int64_t)param_1 + param_2);
    if ((uint8_t)*param_1 != *(uint8_t *)((int64_t)param_1 + param_2)) break;
    param_1 = (uint64_t *)((int64_t)param_1 + 1);
    param_3 = param_3 - 1;
  }
LAB_7fffa4abb003:
  return (1 - (uint32_t)bVar4) - (uint32_t)(bVar4 != 0);
}


// ============================================================================
// Function : FUN_7fffa4abb090  |  RVA: 0x34b090  |  Size: 1050 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0
// ============================================================================
void FUN_7fffa4abb090(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint8_t bVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  code *pcVar10;
  uint64_t *puVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint16_t uVar15;
  int64_t lVar16;
  uint64_t *puVar17;
  short sVar18;
  uint32_t in_R10D;
  uint32_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  
  param_4 = (param_4 << 0x24 | param_4 >> 0x1c) ^ (param_4 << 7 | param_4 >> 0x39) ^ param_4;
  param_4 = (param_4 << 8 | param_4 >> 0x38) ^ (param_4 << 0xe | param_4 >> 0x32) ^ param_4;
  param_4 = (param_4 << 0x1c | param_4 >> 0x24) ^ (param_4 << 0x10 | param_4 >> 0x30) ^ param_4;
  param_4 = (param_4 << 0x38 | param_4 >> 8) ^ (param_4 << 0x20 | param_4 >> 0x20) ^ param_4;
  uVar24 = param_4 << 0x10 | param_4 >> 0x30;
  uVar23 = *(uint64_t *)(uVar24 + 0x10);
  lVar20 = *(int64_t *)(uVar24 + 0x20);
  if (lVar20 + 1U < uVar23) {
    lVar8 = *(int64_t *)(uVar24 + 8);
  }
  else {
    uVar14 = uVar23 + (uVar23 == 0);
    do {
      uVar21 = uVar14;
      if (0x7ffffffffffffff - uVar21 < uVar21) {
        sVar18 = (short)in_R10D + 0x5a53;
        (*(code *)(&UNK_7fffa528caf2 + (short)(sVar18 * 2 | (uint16_t)(sVar18 < 0))))
                  ((in_R10D ^ 0x9903fff4) << 0xd | (in_R10D ^ 0x9903fff4) >> 0x13);
        pcVar10 = (code *)__debugbreak();
        (*pcVar10)();
        return;
      }
      uVar14 = uVar21 * 2;
    } while (uVar14 == uVar23 || uVar14 < 8);
    uVar12 = in_R10D | 1;
    lVar8 = uVar21 * 0x10 + 0x6195d80f;
    uVar19 = (uVar12 * -0x369a0000 | uVar12 * -0x21fcda68 >> 0x12) + 0x90809e4f;
    uVar2 = *(uint64_t *)(uVar24 + 0x18);
    uVar13 = (uint64_t)in_R10D;
    bVar4 = (uint8_t)in_R10D & 0x1f;
    lVar9 = lVar8 * 0x4000;
    if ((int64_t)(uint64_t)(0xffe00047U >> bVar4 | -0x1fffb9 << 0x20 - bVar4) <=
        (int64_t)(int)(uVar19 >> 0x1f | uVar19 * 2)) {
      lVar9 = uVar21 * -0x10 + lVar8 * 0xf + -0x6195d80f;
    }
    (*(code *)((int64_t)(int)(~(uVar12 * -0x66516f80) << 0x19 | ~(uVar12 * -0x66516f80) >> 7) +
              0x7fffa5277c56))(uVar13,lVar9);
    lVar8 = (uVar13 << 0x2c | uVar13 >> 0x14) - ((uVar13 >> 0x14) << 0x36);
    do {
      uVar13 = uVar14;
      uVar14 = uVar13 * 2;
    } while (uVar13 <= (uVar21 & 0x7fffffffffffffff));
    lVar9 = lVar8 + uVar2 * 8;
    uVar13 = uVar13 - uVar23;
    lVar22 = uVar2 * 8;
    lVar3 = *(int64_t *)(uVar24 + 8);
    lVar1 = lVar9 + (uVar23 - uVar2) * 8;
    FUN_7fffa56a5f20(lVar9,lVar3 + uVar2 * 8,(uVar23 - uVar2) * 8);
    if (uVar13 < uVar2) {
      lVar16 = uVar13 * 8;
      FUN_7fffa56a5f20(lVar1,lVar3,lVar16);
      lVar22 = lVar22 + uVar13 * -8;
      lVar9 = lVar8 + lVar22;
      FUN_7fffa56a5f20(lVar8,lVar3 + uVar13 * 8,lVar22);
    }
    else {
      FUN_7fffa56a5f20(lVar1,lVar3,lVar22);
      FUN_7fffa4ecf8e0(lVar1 + lVar22,0,(uVar13 - uVar2) * 8);
      lVar9 = lVar8;
      lVar16 = lVar22;
    }
    FUN_7fffa4ecf8e0(lVar9,0,lVar16);
    if (lVar3 != 0) {
      (*(code *)((int64_t)(int)((in_R10D ^ 0xff5b66c7) + 0x80a418af) + 0x7fffa568fcbe))();
      uVar23 = *(uint64_t *)(uVar24 + 0x10);
      lVar20 = *(int64_t *)(uVar24 + 0x20);
    }
    param_2 = 0;
    *(int64_t *)(uVar24 + 8) = lVar8;
    uVar23 = uVar23 + uVar13;
    *(uint64_t *)(uVar24 + 0x10) = uVar23;
  }
  uVar14 = *(uint64_t *)(uVar24 + 0x18) & uVar23 - 1;
  *(uint64_t *)(uVar24 + 0x18) = uVar14;
  uVar14 = uVar14 + lVar20;
  uVar23 = uVar23 - 1 & uVar14;
  puVar17 = *(uint64_t **)(lVar8 + uVar23 * 8);
  if (puVar17 == (uint64_t *)0x0) {
    uVar15 = (uint16_t)(0x3f6c - in_R10D);
    pcVar10 = (code *)((int64_t)(short)~(uVar15 << 0xf | uVar15 >> 1) + 0x7fffa526ca65);
    (*pcVar10)(pcVar10,param_2);
    *(uint64_t *)(lVar8 + uVar23 * 8) =
         ((int64_t)pcVar10 << 0x2c | (uint64_t)pcVar10 >> 0x14) -
         (((uint64_t)pcVar10 >> 0x14) << 0x36);
    puVar17 = *(uint64_t **)
               (*(int64_t *)(uVar24 + 8) + (*(int64_t *)(uVar24 + 0x10) - 1U & uVar14) * 8);
  }
  puVar11 = (uint64_t *)(param_1 * 0x10000004000001);
  uVar5 = *puVar11;
  uVar6 = puVar11[1];
  uVar7 = puVar11[3];
  puVar17[2] = puVar11[2];
  puVar17[3] = uVar7;
  *puVar17 = uVar5;
  puVar17[1] = uVar6;
  *(int64_t *)(uVar24 + 0x20) = *(int64_t *)(uVar24 + 0x20) + 1;
  return;
}


// ============================================================================
// Function : FUN_7fffa4abb4b0  |  RVA: 0x34b4b0  |  Size: 488 bytes
// Callers  : FUN_7fffa5251710@0xae1710, FUN_7fffa5251835@0xae1835
// Callees  : none
// ============================================================================
void FUN_7fffa4abb4b0(int64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uint8_t *pbVar7;
  int64_t lVar8;
  uint8_t *pbVar9;
  
  pbVar9 = *(uint8_t **)(param_1 + 0x10);
  iVar3 = *(int *)(param_2 + 8);
  *(uint8_t **)(param_1 + 8) = pbVar9;
  iVar6 = 0;
  pbVar7 = pbVar9 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar9 & 0xf];
  *(uint32_t *)(param_1 + 0x18) = *(uint32_t *)(pbVar7 + -4) >> ((&UNK_7fffa56b3160)[*pbVar9 & 0xf] & 0x1f);
  *(uint8_t **)(param_1 + 8) = pbVar7;
  bVar1 = (&UNK_7fffa56b3160)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar7 & 0xf];
  uVar4 = *(uint32_t *)(pbVar7 + -4);
  *(uint8_t **)(param_1 + 8) = pbVar7;
  *(uint32_t *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
  bVar1 = (&UNK_7fffa56b3160)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(int64_t)(char)(&UNK_7fffa56b3150)[*pbVar7 & 0xf];
  uVar4 = *(uint32_t *)(pbVar7 + -4);
  pbVar9 = pbVar7 + 4;
  *(uint8_t **)(param_1 + 8) = pbVar7;
  *(uint32_t *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
  uVar5 = *(uint32_t *)pbVar7;
  *(uint8_t **)(param_1 + 8) = pbVar9;
  *(uint32_t *)(param_1 + 0x24) = uVar5;
  if (iVar3 != 0) {
    do {
      iVar6 = iVar6 + 1;
      lVar8 = (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar9 & 0xf];
      bVar1 = (&UNK_7fffa56b3160)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint32_t *)(pbVar7 + -4);
      *(uint8_t **)(param_1 + 8) = pbVar7;
      *(uint32_t *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&UNK_7fffa56b3150)[*pbVar7 & 0xf];
      bVar1 = (&UNK_7fffa56b3160)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (int64_t)cVar2);
      uVar4 = *(uint32_t *)(pbVar7 + -4);
      *(uint8_t **)(param_1 + 8) = pbVar7;
      *(uint32_t *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&UNK_7fffa56b3160)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(int64_t)cVar2 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint32_t *)(pbVar9 + -4);
      *(uint8_t **)(param_1 + 8) = pbVar9;
      *(uint32_t *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(uint32_t *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(uint8_t **)(param_1 + 8) = pbVar9;
      *(uint32_t *)(param_1 + 0x24) = uVar5;
      lVar8 = (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar9 & 0xf];
      bVar1 = (&UNK_7fffa56b3160)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar4 = *(uint32_t *)(pbVar7 + -4);
      *(uint8_t **)(param_1 + 8) = pbVar7;
      *(uint32_t *)(param_1 + 0x18) = uVar4 >> (bVar1 & 0x1f);
      cVar2 = (&UNK_7fffa56b3150)[*pbVar7 & 0xf];
      bVar1 = (&UNK_7fffa56b3160)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (int64_t)cVar2);
      uVar4 = *(uint32_t *)(pbVar7 + -4);
      *(uint8_t **)(param_1 + 8) = pbVar7;
      *(uint32_t *)(param_1 + 0x1c) = uVar4 >> (bVar1 & 0x1f);
      bVar1 = (&UNK_7fffa56b3160)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(int64_t)cVar2 - (int64_t)(char)(&UNK_7fffa56b3150)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar4 = *(uint32_t *)(pbVar9 + -4);
      *(uint8_t **)(param_1 + 8) = pbVar9;
      *(uint32_t *)(param_1 + 0x20) = uVar4 >> (bVar1 & 0x1f);
      uVar5 = *(uint32_t *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(uint8_t **)(param_1 + 8) = pbVar9;
      *(uint32_t *)(param_1 + 0x24) = uVar5;
    } while (iVar6 != iVar3);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4abb6a0  |  RVA: 0x34b6a0  |  Size: 866062 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa565caf0@0xeecaf0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4abb6a0(void) {
    /* +0x34b6a0 */ __asm { PUSH RBP }
    /* +0x34b6a1 */ __asm { PUSH R14 }
    /* +0x34b6a3 */ __asm { PUSH R12 }
    /* +0x34b6a5 */ __asm { PUSH RBX }
    /* +0x34b6a6 */ __asm { PUSH R15 }
    /* +0x34b6a8 */ __asm { PUSH RDI }
    /* +0x34b6a9 */ __asm { PUSH RSI }
    /* +0x34b6aa */ __asm { PUSH R13 }
    /* +0x34b6ac */ __asm { MOV EAX,0x2398 }
    /* +0x34b6b1 */ __asm { CALL 0x7fffa565caf0 }
    /* +0x34b6b6 */ __asm { SUB RSP,RAX }
    /* +0x34b6b9 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x34b6c1 */ __asm { MOVAPS xmmword ptr [RBP + 0x2300],XMM14 }
    /* +0x34b6c9 */ __asm { MOVAPD xmmword ptr [RBP + 0x22f0],XMM7 }
    /* +0x34b6d1 */ __asm { MOVAPS xmmword ptr [RBP + 0x22e0],XMM8 }
    /* +0x34b6d9 */ __asm { MOVAPS xmmword ptr [RBP + 0x22d0],XMM10 }
    /* +0x34b6e1 */ __asm { MOVDQA xmmword ptr [RBP + 0x22c0],XMM6 }
    /* +0x34b6e9 */ __asm { MOVAPS xmmword ptr [RBP + 0x22b0],XMM13 }
    /* +0x34b6f1 */ __asm { MOVAPD xmmword ptr [RBP + 0x22a0],XMM12 }
    /* +0x34b6fa */ __asm { MOVAPD xmmword ptr [RBP + 0x2290],XMM15 }
    /* +0x34b703 */ __asm { MOVAPD xmmword ptr [RBP + 0x2280],XMM9 }
    /* +0x34b70c */ __asm { MOVAPD xmmword ptr [RBP + 0x2270],XMM11 }
    /* +0x34b715 */ __asm { MOV qword ptr [RBP + 0x2268],-0x2 }
    /* +0x34b720 */ __asm { MOV qword ptr [RBP + 0x1258],R8 }
    /* +0x34b727 */ __asm { MOV R11D,0xa690641b }
    /* +0x34b72d */ __asm { MOV EDX,0x7226659 }
    /* +0x34b732 */ __asm { MOV EAX,0xfc870ef6 }
    /* +0x34b737 */ __asm { ADD EAX,0xb2b432bd }
    /* +0x34b73c */ __asm { ROL EAX,0x3 }
    /* +0x34b73f */ __asm { XOR EDX,0x2cd2e438 }
    /* +0x34b745 */ __asm { ROL EDX,0x18 }
    /* +0x34b748 */ __asm { MOV R10D,0x41706881 }
    /* +0x34b74e */ __asm { IMUL R10D,R10D,-0x436d739 }
    /* +0x34b755 */ __asm { MOVSXD R9,R10D }
    /* +0x34b758 */ __asm { XOR R11D,0xa86978b0 }
    /* +0x34b75f */ __asm { ADD R11D,0x7104e359 }
    /* +0x34b766 */ __asm { MOV R10,-0x1a56511db }
    /* +0x34b770 */ __asm { ADD R10,R11 }
    /* +0x34b773 */ __asm { CMP RDX,R9 }
    /* +0x34b776 */ __asm { MOV R11,R9 }
    /* +0x34b779 */ __asm { MOV R8,R11 }
    /* +0x34b77c */ __asm { NOT R8 }
    /* +0x34b77f */ __asm { MOV RDX,-0x1 }
    /* +0x34b786 */ __asm { CMOVC RDX,R8 }
    /* +0x34b78a */ __asm { MOV qword ptr [RBP + 0x1320],RCX }
    /* +0x34b791 */ __asm { MOVQ XMM5,RDX }
    /* +0x34b796 */ __asm { MOV R15,R12 }
    /* +0x34b799 */ __asm { MOV RCX,R15 }
    /* +0x34b79c */ __asm { NOT RCX }
    /* +0x34b79f */ __asm { MOV R9,R15 }
    /* +0x34b7a2 */ __asm { AND R9,R11 }
    /* +0x34b7a5 */ __asm { MOV RDX,-0x1256711d7 }
    /* +0x34b7af */ __asm { IMUL RDX,R9 }
    /* +0x34b7b3 */ __asm { MOV qword ptr [RBP + 0xcd8],RCX }
    /* +0x34b7ba */ __asm { MOV R9,RCX }
    /* +0x34b7bd */ __asm { AND R9,R8 }
    /* +0x34b7c0 */ __asm { MOV RCX,-0xf61f083d }
    /* +0x34b7ca */ __asm { IMUL RCX,R9 }
    /* +0x34b7ce */ __asm { MOV R9,R15 }
    /* +0x34b7d1 */ __asm { MOV qword ptr [RBP + 0x2120],R8 }
    /* +0x34b7d8 */ __asm { AND R9,R8 }
    /* +0x34b7db */ __asm { IMUL R9,RAX }
    /* +0x34b7df */ __asm { MOVQ XMM2,R9 }
    /* +0x34b7e4 */ __asm { MOV R9,R11 }
    /* +0x34b7e7 */ __asm { OR R9,R15 }
    /* +0x34b7ea */ __asm { IMUL RAX,R9,0x2f48099a }
    /* +0x34b7f1 */ __asm { ADD RAX,RDX }
    /* +0x34b7f4 */ __asm { MOV R8,R15 }
    /* +0x34b7f7 */ __asm { MOV qword ptr [RBP + 0x948],R11 }
    /* +0x34b7fe */ __asm { XOR R8,R11 }
    /* +0x34b801 */ __asm { MOV qword ptr [RBP + 0x4a8],R15 }
    /* +0x34b808 */ __asm { MOVQ XMM1,R15 }
    /* +0x34b80d */ __asm { MOVDQA xmmword ptr [RBP + 0x510],XMM1 }
    /* +0x34b815 */ __asm { PAND XMM5,XMM1 }
    /* +0x34b819 */ __asm { ADD RAX,RCX }
    /* +0x34b81c */ __asm { MOVQ RDX,XMM5 }
    /* +0x34b821 */ __asm { IMUL R9,RDX,-0x79da0d9d }
    /* +0x34b828 */ __asm { MOV qword ptr [RBP + 0xd18],R8 }
    /* +0x34b82f */ __asm { IMUL R10,R8 }
    /* +0x34b833 */ __asm { MOVQ XMM5,RAX }
    /* +0x34b838 */ __asm { PADDQ XMM5,XMM2 }
    /* +0x34b83c */ __asm { MOVQ RDX,XMM5 }
    /* +0x34b841 */ __asm { ADD RDX,R10 }
    /* +0x34b844 */ __asm { MOV qword ptr [RBP + 0xd80],RDX }
    /* +0x34b84b */ __asm { MOV dword ptr [RBP + 0x1360],0xcd1f626e }
    /* +0x34b855 */ __asm { MOV EAX,dword ptr [RBP + 0x1360] }
    /* +0x34b85b */ __asm { AND EAX,0x1 }
    /* +0x34b85e */ __asm { MOV qword ptr [RBP + 0x170],RAX }
    /* +0x34b865 */ __asm { NOP }
    /* +0x34b866 */ __asm { NOP }
    /* +0x34b867 */ __asm { NOP }
    /* +0x34b868 */ __asm { NOP }
    /* +0x34b869 */ __asm { NOP }
    /* +0x34b86a */ __asm { XOR ECX,ECX }
    /* +0x34b86c */ __asm { MOV EAX,0x1 }
    /* +0x34b871 */ __asm { XCHG RBX,R8 }
    /* +0x34b874 */ __asm { CPUID }
    /* +0x34b876 */ __asm { XCHG RBX,R8 }
    /* +0x34b879 */ __asm { ADD qword ptr [RBP + 0xd80],R9 }
    /* +0x34b880 */ __asm { MOV dword ptr [RBP + 0x530],0x0 }
    /* +0x34b88a */ __asm { MOV dword ptr [RBP + 0x206c],0x0 }
    /* +0x34b894 */ __asm { MOV dword ptr [RBP + 0xd28],0x0 }
    /* +0x34b89e */ __asm { MOV dword ptr [RBP + 0xcc4],0x0 }
    /* +0x34b8a8 */ __asm { MOV dword ptr [RBP + 0x206c],R8D }
    /* +0x34b8af */ __asm { MOV dword ptr [RBP + 0xcc4],EDX }
    /* +0x34b8b5 */ __asm { MOV RDX,qword ptr [RBP + 0x2358] }
    /* +0x34b8bc */ __asm { MOV dword ptr [RBP + 0x530],EAX }
    /* +0x34b8c2 */ __asm { MOV dword ptr [RBP + 0xd28],ECX }
    /* +0x34b8c8 */ __asm { MOV qword ptr [RBP + 0x9a0],RDX }
    /* +0x34b8cf */ __asm { MOV R10,qword ptr [RDX + -0xe78] }
    /* +0x34b8d6 */ __asm { MOV RDX,-0x646d93c0a210befb }
    /* +0x34b8e0 */ __asm { MOV qword ptr [RBP + 0x1e88],R10 }
    /* +0x34b8e7 */ __asm { CMP R10,RDX }
    /* +0x34b8ea */ __asm { NOP }
    /* +0x34b8eb */ __asm { NOP }
    /* +0x34b8ec */ __asm { NOP }
    /* +0x34b8ed */ __asm { NOP }
    /* +0x34b8ee */ __asm { MOV R10W,0x3c3 }
    /* +0x34b8f3 */ __asm { MOV R9,0x0 }
    /* +0x34b8fa */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x34b901 */ __asm { NOP }
    /* +0x34b902 */ __asm { MOV RCX,qword ptr [RBP + 0xd80] }
    /* +0x34b909 */ __asm { ADD R10D,ECX }
    /* +0x34b90c */ __asm { ROL R10W,0xa }
    /* +0x34b911 */ __asm { MOVZX EAX,R10W }
    /* +0x34b915 */ __asm { MOV R10,qword ptr GS:[RAX] }
    /* +0x34b919 */ __asm { MOV qword ptr [RBP + 0x1250],R10 }
    /* +0x34b920 */ __asm { MOV R10W,0x8a7 }
    /* +0x34b925 */ __asm { IMUL R10D,R10D,-0x36e5 }
    /* +0x34b92c */ __asm { SUB R10D,ECX }
    /* +0x34b92f */ __asm { MOVZX EAX,R10W }
    /* +0x34b933 */ __asm { MOV R10,qword ptr GS:[RAX] }
    /* +0x34b937 */ __asm { MOV RDX,qword ptr [R10 + 0x30] }
    /* +0x34b93b */ __asm { MOV R10,0x2a2c74ed05c28483 }
    /* +0x34b945 */ __asm { MOV EAX,0x92673ac7 }
    /* +0x34b94a */ __asm { MOV R8D,0xd80b655b }
    /* +0x34b950 */ __asm { ADD EAX,0xaa3080a0 }
    /* +0x34b955 */ __asm { ROL EAX,CL }
    /* +0x34b957 */ __asm { XOR R8D,ECX }
    /* +0x34b95a */ __asm { XOR EAX,0x15c694eb }
    /* +0x34b95f */ __asm { IMUL R11D,R8D,0x3bdc0829 }
    /* +0x34b966 */ __asm { AND R10,RDX }
    /* +0x34b969 */ __asm { ROL R10,0x13 }
    /* +0x34b96d */ __asm { ADD R10,-0xdfcd381 }
    /* +0x34b974 */ __asm { MOV RDX,0x20ef2315b36b485e }
    /* +0x34b97e */ __asm { XOR R8D,R8D }
    /* +0x34b981 */ __asm { XOR R9D,R9D }
    /* +0x34b984 */ __asm { CMP R10,RDX }
    /* +0x34b987 */ __asm { SETG R8B }
    /* +0x34b98b */ __asm { SETZ R9B }
    /* +0x34b98f */ __asm { CMP RAX,R11 }
    /* +0x34b992 */ __asm { CMOVNC R8D,R9D }
    /* +0x34b996 */ __asm { CMP R8B,0x1 }
    /* +0x34b99a */ __asm { NOP }
    /* +0x34b99b */ __asm { NOP }
    /* +0x34b99c */ __asm { NOP }
    /* +0x34b99d */ __asm { NOP }
    /* +0x34b99e */ __asm { NOP }
    /* +0x34b99f */ __asm { NOP }
    /* +0x34b9a0 */ __asm { NOP }
    /* +0x34b9a1 */ __asm { NOP }
    /* +0x34b9a2 */ __asm { NOP }
    /* +0x34b9a3 */ __asm { NOP }
    /* +0x34b9a4 */ __asm { NOP }
    /* +0x34b9a5 */ __asm { NOP }
    /* +0x34b9a6 */ __asm { NOP }
    /* +0x34b9a7 */ __asm { NOP }
    /* +0x34b9a8 */ __asm { NOP }
    /* +0x34b9a9 */ __asm { PXOR XMM5,XMM5 }
    /* +0x34b9ad */ __asm { MOVDQA xmmword ptr [RBP + 0xe80],XMM5 }
    /* +0x34b9b5 */ __asm { CMP qword ptr [RBP + 0x1320],0x0 }
    /* +0x34b9bd */ __asm { NOP }
    /* +0x34b9be */ __asm { NOP }
    /* +0x34b9bf */ __asm { NOP }
    /* +0x34b9c0 */ __asm { MOV R10D,0x86227f33 }
    /* +0x34b9c6 */ __asm { MOV dword ptr [RBP + 0x1ba0],R10D }
    /* +0x34b9cd */ __asm { LEA R10,[0x7fffa56fdbf7] }
    /* +0x34b9d4 */ __asm { MOV qword ptr [RBP + 0x390],R10 }
    /* +0x34b9db */ __asm { MOV EAX,0xfda85256 }
    /* +0x34b9e0 */ __asm { MOV qword ptr [RBP + 0x410],RAX }
    /* +0x34b9e7 */ __asm { MOV R10D,0xb08b15fe }
    /* +0x34b9ed */ __asm { MOV dword ptr [RBP + 0xb20],R10D }
    /* +0x34b9f4 */ __asm { MOV EAX,0xe2f32033 }
    /* +0x34b9f9 */ __asm { MOV qword ptr [RBP + 0x2040],RAX }
    /* +0x34ba00 */ __asm { LEA R10,[0x7fffa5861448] }
    /* +0x34ba07 */ __asm { MOV RDX,0x267c4ef1ebf174ec }
    /* +0x34ba11 */ __asm { ADD RDX,R10 }
    /* +0x34ba14 */ __asm { BSWAP RDX }
    /* +0x34ba17 */ __asm { MOV R10,RDX }
    /* +0x34ba1a */ __asm { SHR R10,0x4 }
    /* +0x34ba1e */ __asm { MOV RAX,0xf0f0f0f0f0f0f0f }
    /* +0x34ba28 */ __asm { AND R10,RAX }
    /* +0x34ba2b */ __asm { AND RDX,RAX }
    /* +0x34ba2e */ __asm { SHL RDX,0x4 }
    /* +0x34ba32 */ __asm { OR RDX,R10 }
    /* +0x34ba35 */ __asm { MOV R9,0x3333333333333333 }
    /* +0x34ba3f */ __asm { MOV RCX,RDX }
    /* +0x34ba42 */ __asm { AND RCX,R9 }
    /* +0x34ba45 */ __asm { SHR RDX,0x2 }
    /* +0x34ba49 */ __asm { AND RDX,R9 }
    /* +0x34ba4c */ __asm { LEA R10,[RDX + RCX*0x4] }
    /* +0x34ba50 */ __asm { MOV RBX,0x5555555555555555 }
    /* +0x34ba5a */ __asm { MOV RCX,R10 }
    /* +0x34ba5d */ __asm { AND RCX,RBX }
    /* +0x34ba60 */ __asm { SHR R10,0x1 }
    /* +0x34ba63 */ __asm { AND R10,RBX }
    /* +0x34ba66 */ __asm { LEA R10,[R10 + RCX*0x2] }
    /* +0x34ba6a */ __asm { MOV qword ptr [RBP + 0x1d28],R10 }
    /* +0x34ba71 */ __asm { LEA R10,[0x7fffa56f5198] }
    /* +0x34ba78 */ __asm { MOV RDX,0x400000800001 }
    /* +0x34ba82 */ __asm { IMUL R10,RDX }
    /* +0x34ba86 */ __asm { MOV RDX,0x627dd5627ecf800e }
    /* +0x34ba90 */ __asm { ADD RDX,R10 }
    /* +0x34ba93 */ __asm { BSWAP RDX }
    /* +0x34ba96 */ __asm { MOV R10,RDX }
    /* +0x34ba99 */ __asm { SHR R10,0x4 }
    /* +0x34ba9d */ __asm { AND R10,RAX }
    /* +0x34baa0 */ __asm { AND RDX,RAX }
    /* +0x34baa3 */ __asm { SHL RDX,0x4 }
    /* +0x34baa7 */ __asm { OR RDX,R10 }
    /* +0x34baaa */ __asm { MOV RCX,RDX }
    /* +0x34baad */ __asm { AND RCX,R9 }
    /* +0x34bab0 */ __asm { SHR RDX,0x2 }
    /* +0x34bab4 */ __asm { AND RDX,R9 }
    /* +0x34bab7 */ __asm { LEA R10,[RDX + RCX*0x4] }
    /* +0x34babb */ __asm { MOV RCX,R10 }
    /* +0x34babe */ __asm { AND RCX,RBX }
    /* +0x34bac1 */ __asm { SHR R10,0x1 }
    /* +0x34bac4 */ __asm { AND R10,RBX }
    /* +0x34bac7 */ __asm { LEA R10,[R10 + RCX*0x2] }
    /* +0x34bacb */ __asm { MOV qword ptr [RBP + 0xa90],R10 }
    /* +0x34bad2 */ __asm { MOV ECX,0xaab1619b }
    /* +0x34bad7 */ __asm { MOV R10W,0x7a8e }
    /* +0x34badc */ __asm { MOV dword ptr [RBP + 0xa50],R10D }
    /* +0x34bae3 */ __asm { MOV R10D,0x59e1e4e0 }
    /* +0x34bae9 */ __asm { MOV dword ptr [RBP + 0x1ef0],R10D }
    /* +0x34baf0 */ __asm { LEA R10,[0x7fffa5863eea] }
    /* +0x34baf7 */ __asm { MOV qword ptr [RBP + 0xd0],R10 }
    /* +0x34bafe */ __asm { MOV R10W,0xa06e }
    /* +0x34bb03 */ __asm { MOV dword ptr [RBP + 0x920],R10D }
    /* +0x34bb0a */ __asm { LEA R10,[0x7fffa57904ba] }
    /* +0x34bb11 */ __asm { MOV qword ptr [RBP + 0x1f60],R10 }
    /* +0x34bb18 */ __asm { LEA R10,[0x7fffa5790840] }
    /* +0x34bb1f */ __asm { MOV qword ptr [RBP + 0x1ae0],R10 }
    /* +0x34bb26 */ __asm { MOV AX,0x61fb }
    /* +0x34bb2a */ __asm { MOV qword ptr [RBP + 0x1e60],RAX }
    /* +0x34bb31 */ __asm { LEA R10,[0x7fffa5745327] }
    /* +0x34bb38 */ __asm { MOV qword ptr [RBP + 0x100],R10 }
    /* +0x34bb3f */ __asm { LEA R10,[0x7fffa5863b38] }
    /* +0x34bb46 */ __asm { MOV qword ptr [RBP + 0x12e8],R10 }
    /* +0x34bb4d */ __asm { MOV R10D,0x87af0832 }
    /* +0x34bb53 */ __asm { MOV dword ptr [RBP + 0x1f20],R10D }
    /* +0x34bb5a */ __asm { MOV R10D,0xf25618d5 }
    /* +0x34bb60 */ __asm { MOV dword ptr [RBP + 0xc40],R10D }
    /* +0x34bb67 */ __asm { LEA R10,[0x7fffa578962a] }
    /* +0x34bb6e */ __asm { MOV qword ptr [RBP + 0x1bb8],R10 }
    /* +0x34bb75 */ __asm { MOV R10D,0x2a36452b }
    /* +0x34bb7b */ __asm { MOV dword ptr [RBP + 0xe08],R10D }
    /* +0x34bb82 */ __asm { LEA R10,[0x7fffa5866c2d] }
    /* +0x34bb89 */ __asm { MOV qword ptr [RBP + 0x1100],R10 }
    /* +0x34bb90 */ __asm { LEA R10,[0x7fffa586b814] }
    /* +0x34bb97 */ __asm { MOV qword ptr [RBP + 0x1bc0],R10 }
    /* +0x34bb9e */ __asm { MOV R10D,0xda5b0d38 }
    /* +0x34bba4 */ __asm { MOV dword ptr [RBP + 0x1fb0],R10D }
    /* +0x34bbab */ __asm { LEA R10,[0x7fffa586e528] }
    /* +0x34bbb2 */ __asm { MOV qword ptr [RBP + 0x1de0],R10 }
    /* +0x34bbb9 */ __asm { MOV R10W,0x1963 }
    /* +0x34bbbe */ __asm { MOV dword ptr [RBP + 0x1bc],R10D }
    /* +0x34bbc5 */ __asm { MOV R10D,0xe2686d9 }
    /* +0x34bbcb */ __asm { MOV dword ptr [RBP + 0x1fd0],R10D }
    /* +0x34bbd2 */ __asm { LEA R10,[0x7fffa56f42c6] }
    /* +0x34bbd9 */ __asm { MOV qword ptr [RBP + 0xe90],R10 }
    /* +0x34bbe0 */ __asm { LEA R10,[0x7fffa5789c8c] }
    /* +0x34bbe7 */ __asm { MOV qword ptr [RBP + 0x280],R10 }
    /* +0x34bbee */ __asm { MOV R10,0x41d5b1d2d87bb143 }
    /* +0x34bbf8 */ __asm { MOV qword ptr [RBP + 0x950],R10 }
    /* +0x34bbff */ __asm { MOV R10W,0x9519 }
    /* +0x34bc04 */ __asm { MOV dword ptr [RBP + 0x1d30],R10D }
    /* +0x34bc0b */ __asm { MOV R10W,0x2ae3 }
    /* +0x34bc10 */ __asm { MOV dword ptr [RBP + 0x1c50],R10D }
    /* +0x34bc17 */ __asm { LEA R10,[0x7fffa56f0e69] }
    /* +0x34bc1e */ __asm { MOV qword ptr [RBP + 0x1b20],R10 }
    /* +0x34bc25 */ __asm { LEA R10,[0x7fffa5862a08] }
    /* +0x34bc2c */ __asm { MOV qword ptr [RBP + 0x1f80],R10 }
    /* +0x34bc33 */ __asm { MOV AX,0x43c2 }
    /* +0x34bc37 */ __asm { MOV qword ptr [RBP + 0x1c60],RAX }
    /* +0x34bc3e */ __asm { LEA R10,[0x7fffa586c5c5] }
    /* +0x34bc45 */ __asm { MOV qword ptr [RBP + 0x1b90],R10 }
    /* +0x34bc4c */ __asm { MOV R11D,0x6ab9281d }
    /* +0x34bc52 */ __asm { MOV R10D,0x2903f332 }
    /* +0x34bc58 */ __asm { MOV dword ptr [RBP + 0x980],R10D }
    /* +0x34bc5f */ __asm { LEA R12,[0x7fffa47c5792] }
    /* +0x34bc66 */ __asm { LEA R10,[0x7fffa57963c3] }
    /* +0x34bc6d */ __asm { MOV qword ptr [RBP + 0x5f0],R10 }
    /* +0x34bc74 */ __asm { MOV R14D,0x26dd15b6 }
    /* +0x34bc7a */ __asm { MOV EAX,0xefa0ff55 }
    /* +0x34bc7f */ __asm { MOV qword ptr [RBP + 0x830],RAX }
    /* +0x34bc86 */ __asm { LEA R10,[0x7fffa56f77fc] }
    /* +0x34bc8d */ __asm { MOV qword ptr [RBP + 0x11c0],R10 }
    /* +0x34bc94 */ __asm { LEA RDX,[0x7fffa5788959] }
    /* +0x34bc9b */ __asm { MOV R10D,0x1a981e14 }
    /* +0x34bca1 */ __asm { MOV dword ptr [RBP + 0x21e8],R10D }
    /* +0x34bca8 */ __asm { LEA R10,[0x7fffa578db90] }
    /* +0x34bcaf */ __asm { MOV qword ptr [RBP + 0x1150],R10 }
    /* +0x34bcb6 */ __asm { MOV AX,0x71e4 }
    /* +0x34bcba */ __asm { MOV qword ptr [RBP + 0x1b10],RAX }
    /* +0x34bcc1 */ __asm { LEA R10,[0x7fffa578333f] }
    /* +0x34bcc8 */ __asm { MOV qword ptr [RBP + 0xd20],R10 }
    /* +0x34bccf */ __asm { MOV R10D,0x32163568 }
    /* +0x34bcd5 */ __asm { MOV dword ptr [RBP + 0xd00],R10D }
    /* +0x34bcdc */ __asm { LEA R10,[0x7fffa5866110] }
    /* +0x34bce3 */ __asm { MOV qword ptr [RBP + 0x880],R10 }
    /* +0x34bcea */ __asm { MOV R10D,0x125ec627 }
    /* +0x34bcf0 */ __asm { MOV dword ptr [RBP + 0x140],R10D }
    /* +0x34bcf7 */ __asm { LEA R10,[0x7fffa58702a5] }
    /* +0x34bcfe */ __asm { MOV qword ptr [RBP + 0x9d0],R10 }
    /* +0x34bd05 */ __asm { MOV R10D,0x22d75142 }
    /* +0x34bd0b */ __asm { MOV dword ptr [RBP + 0x1070],R10D }
    /* +0x34bd12 */ __asm { MOV R10D,0xb9e0dc37 }
    /* +0x34bd18 */ __asm { MOV dword ptr [RBP + 0xaf0],R10D }
    /* +0x34bd1f */ __asm { MOV R10D,0x11d7e6c9 }
    /* +0x34bd25 */ __asm { MOV dword ptr [RBP + 0x1a8],R10D }
    /* +0x34bd2c */ __asm { LEA R10,[0x7fffa5702584] }
    /* +0x34bd33 */ __asm { MOV qword ptr [RBP + 0x1bd0],R10 }
    /* +0x34bd3a */ __asm { MOV R8W,0xb7c5 }
    /* +0x34bd3f */ __asm { LEA R10,[0x7fffa586595f] }
    /* +0x34bd46 */ __asm { MOV qword ptr [RBP + 0x870],R10 }
    /* +0x34bd4d */ __asm { MOV AX,0xa62e }
    /* +0x34bd51 */ __asm { MOV qword ptr [RBP + 0x500],RAX }
    /* +0x34bd58 */ __asm { MOV R10D,0xb0e2a7fe }
    /* +0x34bd5e */ __asm { MOV dword ptr [RBP + 0x1d98],R10D }
    /* +0x34bd65 */ __asm { LEA R10,[0x7fffa56f0322] }
    /* +0x34bd6c */ __asm { MOV qword ptr [RBP],R10 }
    /* +0x34bd70 */ __asm { LEA R10,[0x7fffa574ba8a] }
    /* +0x34bd77 */ __asm { MOV qword ptr [RBP + 0xe50],R10 }
    /* +0x34bd7e */ __asm { MOV R9D,0xbd89a971 }
    /* +0x34bd84 */ __asm { MOV EAX,0x8c43d829 }
    /* +0x34bd89 */ __asm { LEA R10,[0x7fffa56f526d] }
    /* +0x34bd90 */ __asm { MOV qword ptr [RBP + 0x1cc8],R10 }
    /* +0x34bd97 */ __asm { MOV R10W,0x5d64 }
    /* +0x34bd9c */ __asm { MOV dword ptr [RBP + 0x310],R10D }
    /* +0x34bda3 */ __asm { LEA R10,[0x7fffa57413e5] }
    /* +0x34bdaa */ __asm { MOV qword ptr [RBP + 0x12f0],R10 }
    /* +0x34bdb1 */ __asm { MOV R10,-0x69b6354396d3e0a4 }
    /* +0x34bdbb */ __asm { MOV qword ptr [RBP + 0x2020],R10 }
    /* +0x34bdc2 */ __asm { LEA R10,[0x7fffa578bd22] }
    /* +0x34bdc9 */ __asm { MOV qword ptr [RBP + 0x1200],R10 }
    /* +0x34bdd0 */ __asm { MOV R15D,0x42c5043e }
    /* +0x34bdd6 */ __asm { LEA R10,[0x7fffa56f43d0] }
    /* +0x34bddd */ __asm { MOV qword ptr [RBP + 0xdd0],R10 }
    /* +0x34bde4 */ __asm { LEA R10,[0x7fffa5784948] }
    /* +0x34bdeb */ __asm { MOV qword ptr [RBP + 0x8e0],R10 }
    /* +0x34bdf2 */ __asm { LEA R10,[0x7fffa5869e36] }
    /* +0x34bdf9 */ __asm { MOV qword ptr [RBP + 0x2c0],R10 }
    /* +0x34be00 */ __asm { MOV R10W,0x42c4 }
    /* +0x34be05 */ __asm { MOV EDI,R10D }
    /* +0x34be08 */ __asm { LEA R10,[0x7fffa570025a] }
    /* +0x34be0f */ __asm { MOV qword ptr [RBP + 0x1030],R10 }
    /* +0x34be16 */ __asm { MOV R10D,0xd40ed83d }
    /* +0x34be1c */ __asm { MOV dword ptr [RBP + 0x5c0],R10D }
    /* +0x34be23 */ __asm { MOV R10D,0xbc224be4 }
    /* +0x34be29 */ __asm { MOV RSI,qword ptr [RBP + 0xd80] }
    /* +0x34be30 */ __asm { ADD R10D,ESI }
    /* +0x34be33 */ __asm { MOV R13D,ESI }
    /* +0x34be36 */ __asm { OR R13D,0x1 }
    /* +0x34be3a */ __asm { MOV qword ptr [RBP + 0x1b48],R13 }
    /* +0x34be41 */ __asm { IMUL R9D,R13D }
    /* +0x34be45 */ __asm { NOT R9D }
    /* +0x34be48 */ __asm { IMUL R13D,R9D,0x79a4e957 }
    /* +0x34be4f */ __asm { MOV R9D,R13D }
    /* +0x34be52 */ __asm { OR R9D,0x1 }
    /* +0x34be56 */ __asm { MOV qword ptr [RBP + 0xf0],R9 }
    /* +0x34be5d */ __asm { IMUL R10D,R9D }
    /* +0x34be61 */ __asm { ROL R10D,0x12 }
    /* +0x34be65 */ __asm { MOVSXD R10,R10D }
    /* +0x34be68 */ __asm { ADD R10,R12 }
    /* +0x34be6b */ __asm { MOV qword ptr [RBP + 0x4f0],R10 }
    /* +0x34be72 */ __asm { XOR ECX,R13D }
    /* +0x34be75 */ __asm { MOV R10D,0xda310f3d }
    /* +0x34be7b */ __asm { SUB R10D,ECX }
    /* +0x34be7e */ __asm { MOV dword ptr [RBP + 0x80],R10D }
    /* +0x34be85 */ __asm { ADD R14D,R13D }
    /* +0x34be88 */ __asm { MOV R9D,0xc3fdb068 }
    /* +0x34be8e */ __asm { SUB R9D,R14D }
    /* +0x34be91 */ __asm { MOV qword ptr [RBP + 0xeb0],R9 }
    /* +0x34be98 */ __asm { LEA R10,[0x7fffa585e0d8] }
    /* +0x34be9f */ __asm { MOV RCX,-0x77299b7d81ed2372 }
    /* +0x34bea9 */ __asm { ADD RCX,R10 }
    /* +0x34beac */ __asm { BSWAP RCX }
    /* +0x34beaf */ __asm { MOV R10,RCX }
    /* +0x34beb2 */ __asm { SHR R10,0x4 }
    /* +0x34beb6 */ __asm { MOV R9,0xf0f0f0f0f0f0f0f }
    /* +0x34bec0 */ __asm { AND R10,R9 }
    /* +0x34bec3 */ __asm { AND RCX,R9 }
    /* +0x34bec6 */ __asm { SHL RCX,0x4 }
    /* +0x34beca */ __asm { OR RCX,R10 }
    /* +0x34becd */ __asm { MOV R9,RCX }
    /* +0x34bed0 */ __asm { MOV R10,0x3333333333333333 }
    /* +0x34beda */ __asm { AND R9,R10 }
    /* +0x34bedd */ __asm { SHR RCX,0x2 }
    /* +0x34bee1 */ __asm { AND RCX,R10 }
    /* +0x34bee4 */ __asm { LEA R10,[RCX + R9*0x4] }
    /* +0x34bee8 */ __asm { MOV RCX,R10 }
    /* +0x34beeb */ __asm { AND RCX,RBX }
    /* +0x34beee */ __asm { SHR R10,0x1 }
    /* +0x34bef1 */ __asm { AND R10,RBX }
    /* +0x34bef4 */ __asm { LEA R10,[R10 + RCX*0x2] }
    /* +0x34bef8 */ __asm { MOV qword ptr [RBP + 0xe10],R10 }
    /* +0x34beff */ __asm { XOR R15D,0xe8f9822f }
    /* +0x34bf06 */ __asm { MOV ECX,ESI }
    /* +0x34bf08 */ __asm { ROL R15D,CL }
    /* +0x34bf0b */ __asm { SUB R11D,R13D }
    /* +0x34bf0e */ __asm { ROL R11D,0x12 }
    /* +0x34bf12 */ __asm { ROR R11D,CL }
    /* +0x34bf15 */ __asm { LEA R10,[0x7fffa5791b7f] }
    /* +0x34bf1c */ __asm { MOV qword ptr [RBP + 0xda0],R10 }
    /* +0x34bf23 */ __asm { LEA R10,[0x7fffa5788bfc] }
    /* +0x34bf2a */ __asm { MOV qword ptr [RBP + 0xee8],R10 }
    /* +0x34bf31 */ __asm { MOV R10W,0x1268 }
    /* +0x34bf36 */ __asm { MOV dword ptr [RBP + 0x1040],R10D }
    /* +0x34bf3d */ __asm { MOV R10D,0x2dcd82b4 }
    /* +0x34bf43 */ __asm { XOR R10D,0xd2324255 }
    /* +0x34bf4a */ __asm { MOV ECX,R13D }
    /* +0x34bf4d */ __asm { ROR R10D,CL }
    /* +0x34bf50 */ __asm { MOV dword ptr [RBP + 0x9b0],R10D }
    /* +0x34bf57 */ __asm { MOV R9,0x6958190ea91336de }
    /* +0x34bf61 */ __asm { ADD R9,RDX }
    /* +0x34bf64 */ __asm { ADD R8D,ESI }
    /* +0x34bf67 */ __asm { ROR R8W,CL }
    /* +0x34bf6b */ __asm { XOR R8D,0xcc4c }
    /* +0x34bf72 */ __asm { MOVSX R10,R8W }
    /* +0x34bf76 */ __asm { ADD R9,R10 }
    /* +0x34bf79 */ __asm { SUB EAX,R13D }
    /* +0x34bf7c */ __asm { ADD EAX,0xfce84d64 }
    /* +0x34bf81 */ __asm { MOVD XMM5,EAX }
    /* +0x34bf85 */ __asm { MOV AX,0x92cd }
    /* +0x34bf89 */ __asm { MOV qword ptr [RBP + 0xce0],RAX }
    /* +0x34bf90 */ __asm { MOV AX,0x6e23 }
    /* +0x34bf94 */ __asm { MOV qword ptr [RBP + 0x1cf0],RAX }
    /* +0x34bf9b */ __asm { MOV EBX,0xd0b31a6d }
    /* +0x34bfa0 */ __asm { MOV R10D,0xa68f365b }
    /* +0x34bfa6 */ __asm { MOV dword ptr [RBP + 0xd60],R10D }
    /* +0x34bfad */ __asm { LEA R10,[0x7fffa47ca67c] }
    /* +0x34bfb4 */ __asm { MOV AX,0x4392 }
    /* +0x34bfb8 */ __asm { MOV dword ptr [RBP + 0x10f8],EAX }
    /* +0x34bfbe */ __asm { MOV R12D,0xeed32a3b }
    /* +0x34bfc4 */ __asm { MOV RDX,-0x609504728fe9dc4 }
    /* +0x34bfce */ __asm { LEA RAX,[0x7fffa56f6c26] }
    /* +0x34bfd5 */ __asm { MOV qword ptr [RBP + 0x1e38],RAX }
    /* +0x34bfdc */ __asm { MOV EAX,0xaf5f2617 }
    /* +0x34bfe1 */ __asm { MOV dword ptr [RBP + 0x330],EAX }
    /* +0x34bfe7 */ __asm { MOV RAX,-0x2e9f5446342dad46 }
    /* +0x34bff1 */ __asm { MOV qword ptr [RBP + 0x1230],RAX }
    /* +0x34bff8 */ __asm { ADD R15D,0x5c650400 }
    /* +0x34bfff */ __asm { ROL R15D,CL }
    /* +0x34c002 */ __asm { MOV qword ptr [RBP + 0xd10],R15 }
    /* +0x34c009 */ __asm { MOV R8D,0x93de2f0e }
    /* +0x34c00f */ __asm { MOV AX,0xb7e2 }
    /* +0x34c013 */ __asm { MOV qword ptr [RBP + 0x2210],RAX }
    /* +0x34c01a */ __asm { LEA RAX,[0x7fffa574b29e] }
    /* +0x34c021 */ __asm { MOV qword ptr [RBP + 0xbb0],RAX }
    /* +0x34c028 */ __asm { LEA RCX,[0x7fffa57937b0] }
    /* +0x34c02f */ __asm { MOV qword ptr [RBP + 0x5e0],RCX }
    /* +0x34c036 */ __asm { MOV R14W,0x44c7 }
    /* +0x34c03b */ __asm { MOV ECX,0xf61fb568 }
    /* +0x34c040 */ __asm { NOT ECX }
    /* +0x34c042 */ __asm { ADD ECX,ESI }
    /* +0x34c044 */ __asm { MOVSXD RCX,ECX }
    /* +0x34c047 */ __asm { ADD RCX,R10 }
    /* +0x34c04a */ __asm { MOV qword ptr [RBP + 0x2130],RCX }
    /* +0x34c051 */ __asm { LEA R10,[0x7fffa579275d] }
    /* +0x34c058 */ __asm { MOV qword ptr [RBP + 0x1330],R10 }
    /* +0x34c05f */ __asm { LEA RCX,[0x7fffa5790e8e] }
    /* +0x34c066 */ __asm { LEA EAX,[RCX + R11*0x1] }
    /* +0x34c06a */ __asm { ADD EAX,0x6de }
    /* +0x34c06f */ __asm { SHLD RAX,R9,0x35 }
    /* +0x34c074 */ __asm { MOV qword ptr [RBP + 0x21d8],RAX }
    /* +0x34c07b */ __asm { MOV R15,qword ptr [RBP + 0x1b48] }
    /* +0x34c082 */ __asm { MOVD XMM0,R15D }
    /* +0x34c087 */ __asm { PMULUDQ XMM5,XMM0 }
    /* +0x34c08b */ __asm { MOVD R10D,XMM5 }
    /* +0x34c090 */ __asm { MOVSXD RCX,R10D }
    /* +0x34c093 */ __asm { MOV R10D,dword ptr [RBP + 0x1bc] }
    /* +0x34c09a */ __asm { SUB R10D,ESI }
    /* +0x34c09d */ __asm { ROL R10W,0xe }
    /* +0x34c0a2 */ __asm { ADD RCX,qword ptr [RBP + 0x9d0] }
    /* +0x34c0a9 */ __asm { MOV qword ptr [RBP + 0xc80],RCX }
    /* +0x34c0b0 */ __asm { MOV R11D,0x7599 }
    /* +0x34c0b6 */ __asm { SUB R11D,R10D }
    /* +0x34c0b9 */ __asm { MOV qword ptr [RBP + 0x1e90],R11 }
    /* +0x34c0c0 */ __asm { MOV RAX,qword ptr [RBP + 0x170] }
    /* +0x34c0c7 */ __asm { MOV R9D,EAX }
    /* +0x34c0ca */ __asm { MOV qword ptr [RBP + 0xcb0],R9 }
    /* +0x34c0d1 */ __asm { NOT R9 }
    /* +0x34c0d4 */ __asm { MOV qword ptr [RBP + 0xb90],R9 }
    /* +0x34c0db */ __asm { MOV RCX,qword ptr [RBP + 0x9a0] }
    /* +0x34c0e2 */ __asm { AND RCX,R9 }
    /* +0x34c0e5 */ __asm { MOV qword ptr [RBP + 0xb30],RCX }
    /* +0x34c0ec */ __asm { MOV R10,qword ptr [RBP + 0x948] }
    /* +0x34c0f3 */ __asm { AND R10,RCX }
}


// ============================================================================
// Function : Catch@7fffa4ceb840  |  RVA: 0x57b840  |  Size: 278 bytes
// Callers  : none
// Callees  : none
// ============================================================================
uint64_t Catch_7fffa4ceb840(uint64_t param_1,int64_t param_2)

{
  *(uint32_t *)(param_2 + 0xa50) = 0xc000009a;
  *(uint64_t *)(param_2 + 0x10c0) = (uint64_t)*(uint32_t *)(param_2 + 0x10c0);
  *(uint64_t *)(param_2 + 0x660) = *(uint64_t *)(param_2 + 0x2050);
  return 0x7fffa4c23f08;
}


// ============================================================================
// Function : Unwind@7fffa4ceb960  |  RVA: 0x57b960  |  Size: 345 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ceb960(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = (int)*(uint64_t *)(param_2 + 0x170) *
          ((int)*(uint64_t *)(param_2 + 0xe00) + 0x55908944);
  *(uint32_t *)((int64_t)(int)((uVar1 * 0x800000 | uVar1 >> 9) * *(int *)(param_2 + 0x920)) +
           0x7fffa47946e9) =
       *(uint32_t *)((int64_t)
                 (short)((short)*(uint64_t *)(param_2 + 0x530) * -0x6852 +
                        ((short)*(uint64_t *)(param_2 + 800) -
                        (short)*(uint64_t *)(param_2 + 0xe00))) + 0x7fffa478ca69) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cebac0  |  RVA: 0x57bac0  |  Size: 344 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cebac0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  short sVar2;
  short sVar3;
  uint16_t uVar4;
  
  uVar4 = (short)*(uint64_t *)(param_2 + 0xe00) + 0xdffe;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x1e20) & 0xf;
  sVar3 = (short)*(uint64_t *)(param_2 + 0x170);
  sVar2 = (short)*(uint64_t *)(param_2 + 0x2268);
  *(uint32_t *)((int64_t)
            (short)(((short)*(uint64_t *)(param_2 + 0x1f70) +
                    (sVar2 * 0x4000 | (uint16_t)(sVar2 * -0x241f) >> 2)) * sVar3) + 0x7fffa478dcbb) =
       *(uint32_t *)((int64_t)(short)((uVar4 >> bVar1 | uVar4 << 0x10 - bVar1) * sVar3 + 0x7b5f) +
                0x7fffa478938c) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cebc20  |  RVA: 0x57bc20  |  Size: 341 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cebc20(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  short sVar2;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x8b0) & 0xf;
  sVar2 = (short)*(uint64_t *)(param_2 + 800);
  *(uint32_t *)((int64_t)
            (short)(((short)*(uint64_t *)(param_2 + 0x530) * 0x79d2 +
                     (short)*(uint64_t *)(param_2 + 0xe00) ^ 0xff66U) - sVar2) + 0x7fffa478799d) =
       *(uint32_t *)(((int64_t)(short)((-0x7a2d << bVar1 | 0x85d3U >> 0x10 - bVar1) - sVar2) ^
                 0xffffffffffffbb56U) + 0x7fffa478cd0c) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cebd80  |  RVA: 0x57bd80  |  Size: 282 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cebd80(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  short sVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  
  uVar6 = (short)*(uint32_t *)(param_2 + 0x8b0) + 0xe327;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0xf;
  sVar4 = (short)*(uint64_t *)(param_2 + 800);
  uVar7 = sVar4 - 0x1aa;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x13b0) & 0xf;
  uVar5 = (uint16_t)*(uint64_t *)(param_2 + 0xe00);
  *(uint32_t *)((int64_t)
            (short)(((uint16_t)*(uint64_t *)(param_2 + 0x1e20) ^ (-0x3dd8 - sVar4) * -0x7a1) + uVar5
                   ) + 0x7fffa47c586d) =
       *(uint32_t *)((int64_t)(short)~((uVar6 >> bVar2 | uVar6 << 0x10 - bVar2) * 0x3d53 ^ uVar5) +
                0x7fffa47c00e5) & 0xfffffffd;
  (*(code *)((int64_t)(short)(((uVar7 >> bVar3 | uVar7 << 0x10 - bVar3) ^ 0xbcb6) - uVar5 ^ 0xe0d7)
            + 0x7fffa562caa3))();
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cebea0  |  RVA: 0x57bea0  |  Size: 3800 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void Unwind@7fffa4cebea0(void) {
    /* +0x57bea0 */ __asm { MOV qword ptr [RSP + 0x10],RDX }
    /* +0x57bea5 */ __asm { PUSH RBP }
    /* +0x57bea6 */ __asm { PUSH R14 }
    /* +0x57bea8 */ __asm { PUSH R12 }
    /* +0x57beaa */ __asm { PUSH RBX }
    /* +0x57beab */ __asm { PUSH R15 }
    /* +0x57bead */ __asm { PUSH RDI }
    /* +0x57beae */ __asm { PUSH RSI }
    /* +0x57beaf */ __asm { PUSH R13 }
    /* +0x57beb1 */ __asm { SUB RSP,0x108 }
    /* +0x57beb8 */ __asm { LEA RBP,[RDX + 0x80] }
    /* +0x57bebf */ __asm { MOVDQA xmmword ptr [RSP + 0x60],XMM14 }
    /* +0x57bec6 */ __asm { MOVDQA xmmword ptr [RSP + 0x70],XMM7 }
    /* +0x57becc */ __asm { MOVDQA xmmword ptr [RSP + 0x80],XMM8 }
    /* +0x57bed6 */ __asm { MOVDQA xmmword ptr [RSP + 0x90],XMM10 }
    /* +0x57bee0 */ __asm { MOVDQA xmmword ptr [RSP + 0xa0],XMM6 }
    /* +0x57bee9 */ __asm { MOVDQA xmmword ptr [RSP + 0xb0],XMM13 }
    /* +0x57bef3 */ __asm { MOVDQA xmmword ptr [RSP + 0xc0],XMM12 }
    /* +0x57befd */ __asm { MOVAPS xmmword ptr [RSP + 0xd0],XMM15 }
    /* +0x57bf06 */ __asm { MOVDQA xmmword ptr [RSP + 0xe0],XMM9 }
    /* +0x57bf10 */ __asm { MOVDQA xmmword ptr [RSP + 0xf0],XMM11 }
    /* +0x57bf1a */ __asm { MOV EAX,0x75b8712c }
    /* +0x57bf1f */ __asm { MOV R9,qword ptr [RBP + 0x5f0] }
    /* +0x57bf26 */ __asm { MOV ESI,0xe7c1abe4 }
    /* +0x57bf2b */ __asm { MOV R11,qword ptr [RBP + 0xd80] }
    /* +0x57bf32 */ __asm { ADD ESI,R11D }
    /* +0x57bf35 */ __asm { SUB EAX,R11D }
    /* +0x57bf38 */ __asm { MOV R11D,0x5a24f275 }
    /* +0x57bf3e */ __asm { SUB R11D,dword ptr [RBP + 0x330] }
    /* +0x57bf45 */ __asm { IMUL R11D,dword ptr [RBP + 0x1b48] }
    /* +0x57bf4d */ __asm { ROL R11D,0x13 }
    /* +0x57bf51 */ __asm { NOT R11D }
    /* +0x57bf54 */ __asm { MOV R8,R9 }
    /* +0x57bf57 */ __asm { SHR R8,0x3d }
    /* +0x57bf5b */ __asm { MOV EDX,R8D }
    /* +0x57bf5e */ __asm { AND EDX,R9D }
    /* +0x57bf61 */ __asm { XOR R8,R9 }
    /* +0x57bf64 */ __asm { MOV R10D,0xbec4e96 }
    /* +0x57bf6a */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x57bf71 */ __asm { XOR R10D,ECX }
    /* +0x57bf74 */ __asm { ADD R10D,dword ptr [RBP + 0x1ef0] }
    /* +0x57bf7b */ __asm { ROL R10D,0x6 }
    /* +0x57bf7f */ __asm { MOVD XMM5,R10D }
    /* +0x57bf84 */ __asm { PSUBD XMM5,xmmword ptr [RBP + 0xcb0] }
    /* +0x57bf8c */ __asm { MOVD R13D,XMM5 }
    /* +0x57bf91 */ __asm { ROL R13D,0x9 }
    /* +0x57bf95 */ __asm { NOT ESI }
    /* +0x57bf97 */ __asm { ADD ESI,ECX }
    /* +0x57bf99 */ __asm { XOR EAX,0x97b98922 }
    /* +0x57bf9e */ __asm { ROL EAX,CL }
    /* +0x57bfa0 */ __asm { XOR ESI,0x8a009306 }
    /* +0x57bfa6 */ __asm { XOR EAX,dword ptr [RBP + 0xeb0] }
    /* +0x57bfac */ __asm { CMP R11,RAX }
    /* +0x57bfaf */ __asm { CMOVGE R8,RDX }
    /* +0x57bfb3 */ __asm { MOV R10W,0x43e1 }
    /* +0x57bfb8 */ __asm { MOV RDX,qword ptr [RBP + 0xf0] }
    /* +0x57bfbf */ __asm { MOV EAX,EDX }
    /* +0x57bfc1 */ __asm { IMUL EAX,R10D }
    /* +0x57bfc5 */ __asm { ADD EAX,0x8f }
    /* +0x57bfca */ __asm { MOV R11,qword ptr [RBP + 0x21e8] }
    /* +0x57bfd1 */ __asm { IMUL R11D,EAX }
    /* +0x57bfd5 */ __asm { XOR R11D,dword ptr [RBP + 0x8a0] }
    /* +0x57bfdc */ __asm { NOT R11D }
    /* +0x57bfdf */ __asm { MOVSX R10,R11W }
    /* +0x57bfe3 */ __asm { LEA RDX,[0x7fffa568a562] }
    /* +0x57bfea */ __asm { ADD RDX,R10 }
    /* +0x57bfed */ __asm { MOV R11D,0xb943c165 }
    /* +0x57bff3 */ __asm { CALL RDX }
    /* +0x57bff5 */ __asm { MOV R14,qword ptr [RBP + 0xc10] }
    /* +0x57bffc */ __asm { RDTSC }
    /* +0x57bffe */ __asm { SHL RDX,0x20 }
    /* +0x57c002 */ __asm { OR RDX,RAX }
    /* +0x57c005 */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0x57c00f */ __asm { IMUL RDX,R10 }
    /* +0x57c013 */ __asm { MOV R10,-0x22b18422c4a9c65e }
    /* +0x57c01d */ __asm { ADD RDX,R10 }
    /* +0x57c020 */ __asm { MOV RCX,RDX }
    /* +0x57c023 */ __asm { SHR RCX,0x3b }
    /* +0x57c027 */ __asm { MOV RAX,RDX }
    /* +0x57c02a */ __asm { SHR RAX,0x1b }
    /* +0x57c02e */ __asm { SHR RDX,0x2d }
    /* +0x57c032 */ __asm { XOR EAX,EDX }
    /* +0x57c034 */ __asm { ROR EAX,CL }
    /* +0x57c036 */ __asm { MOV R10D,EAX }
    /* +0x57c039 */ __asm { OR R10D,0x3 }
    /* +0x57c03d */ __asm { AND EAX,0x3 }
    /* +0x57c040 */ __asm { CMP R13,RSI }
    /* +0x57c043 */ __asm { CMOVNZ EAX,R10D }
    /* +0x57c047 */ __asm { CMP EAX,0x2 }
    /* +0x57c04a */ __asm { JGE 0x7fffa4cec1de }
    /* +0x57c050 */ __asm { CMP EAX,0x1 }
    /* +0x57c053 */ __asm { JNZ 0x7fffa4cec247 }
    /* +0x57c059 */ __asm { MOV R10D,0x135b5b60 }
    /* +0x57c05f */ __asm { MOV R9,0x0 }
    /* +0x57c066 */ __asm { NOP }
    /* +0x57c067 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x57c06e */ __asm { MOV RAX,0x3dcb7b6edf67370d }
    /* +0x57c078 */ __asm { CMP R10,RAX }
    /* +0x57c07b */ __asm { NOP }
    /* +0x57c07c */ __asm { NOP }
    /* +0x57c07d */ __asm { NOP }
    /* +0x57c07e */ __asm { MOV EAX,0xb99d2d40 }
    /* +0x57c083 */ __asm { MOV RDX,qword ptr [RBP + 0xd80] }
    /* +0x57c08a */ __asm { XOR EAX,EDX }
    /* +0x57c08c */ __asm { MOV R11D,0x80000003 }
    /* +0x57c092 */ __asm { SUB R11D,EAX }
    /* +0x57c095 */ __asm { ROL R11D,0x9 }
    /* +0x57c099 */ __asm { MOV AX,0xd4c9 }
    /* +0x57c09d */ __asm { IMUL EAX,EAX,0x7a87 }
    /* +0x57c0a3 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x57c0aa */ __asm { ROL AX,CL }
    /* +0x57c0ad */ __asm { MOV ECX,EDX }
    /* +0x57c0af */ __asm { ROR AX,CL }
    /* +0x57c0b2 */ __asm { MOV RCX,qword ptr [RBP + 0x1fb0] }
    /* +0x57c0b9 */ __asm { ROL AX,CL }
    /* +0x57c0bc */ __asm { IMUL R11D,dword ptr [RBP + 0x1d30] }
    /* +0x57c0c4 */ __asm { NOT EAX }
    /* +0x57c0c6 */ __asm { MOVZX R8D,AX }
    /* +0x57c0ca */ __asm { MOV R10D,dword ptr [R10 + R11*0x1 + 0x240] }
    /* +0x57c0d2 */ __asm { RDTSC }
    /* +0x57c0d4 */ __asm { SHL RDX,0x20 }
    /* +0x57c0d8 */ __asm { OR RDX,RAX }
    /* +0x57c0db */ __asm { AND R10D,0x1 }
    /* +0x57c0df */ __asm { CMP R10D,R8D }
    /* +0x57c0e2 */ __asm { JNZ 0x7fffa4cec72c }
    /* +0x57c0e8 */ __asm { MOV R10,0x5851f42d4c957f2d }
    /* +0x57c0f2 */ __asm { IMUL RDX,R10 }
    /* +0x57c0f6 */ __asm { MOV R10,0x42fe8908f2ae81c6 }
    /* +0x57c100 */ __asm { ADD RDX,R10 }
    /* +0x57c103 */ __asm { MOV RAX,RDX }
    /* +0x57c106 */ __asm { SHR RAX,0x1b }
    /* +0x57c10a */ __asm { MOV RCX,RDX }
    /* +0x57c10d */ __asm { SHR RCX,0x3b }
    /* +0x57c111 */ __asm { SHR RDX,0x2d }
    /* +0x57c115 */ __asm { MOV R10D,0x70e02b14 }
    /* +0x57c11b */ __asm { XOR R10D,dword ptr [RBP + 0x2a0] }
    /* +0x57c122 */ __asm { SUB R10D,dword ptr [RBP + 0xd80] }
    /* +0x57c129 */ __asm { MOV R8D,dword ptr [RBP + 0x1d30] }
    /* +0x57c130 */ __asm { IMUL R8D,R10D }
    /* +0x57c134 */ __asm { ADD R8D,0xc000000d }
    /* +0x57c13b */ __asm { ROL R8D,0x15 }
    /* +0x57c13f */ __asm { XOR EAX,EDX }
    /* +0x57c141 */ __asm { ROR EAX,CL }
    /* +0x57c143 */ __asm { MOV dword ptr [RBP + 0x1360],R8D }
    /* +0x57c14a */ __asm { MOV R10D,dword ptr [RBP + 0x1360] }
    /* +0x57c151 */ __asm { CMP R10D,0x7962b2bb }
    /* +0x57c158 */ __asm { NOP }
    /* +0x57c159 */ __asm { NOP }
    /* +0x57c15a */ __asm { NOP }
    /* +0x57c15b */ __asm { NOP }
    /* +0x57c15c */ __asm { NOP }
    /* +0x57c15d */ __asm { NOP }
    /* +0x57c15e */ __asm { NOP }
    /* +0x57c15f */ __asm { NOP }
    /* +0x57c160 */ __asm { NOP }
    /* +0x57c161 */ __asm { NOP }
    /* +0x57c162 */ __asm { NOP }
    /* +0x57c163 */ __asm { NOP }
    /* +0x57c164 */ __asm { NOP }
    /* +0x57c165 */ __asm { NOP }
    /* +0x57c166 */ __asm { NOP }
    /* +0x57c167 */ __asm { NOP }
    /* +0x57c168 */ __asm { NOP }
    /* +0x57c1de */ __asm { JZ 0x7fffa4cec5c8 }
    /* +0x57c1e4 */ __asm { MOV R10D,0x9f13a816 }
    /* +0x57c1ea */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x57c1f1 */ __asm { NOP }
    /* +0x57c1f2 */ __asm { MOV R9,0x0 }
    /* +0x57c1f9 */ __asm { MOV RDX,-0x52e9baea65df855b }
    /* +0x57c203 */ __asm { CMP R10,RDX }
    /* +0x57c206 */ __asm { JZ 0x7fffa4cecacd }
    /* +0x57c20c */ __asm { CMP dword ptr [R10 + -0x1f15a456],0xd }
    /* +0x57c214 */ __asm { JNC 0x7fffa4cecade }
    /* +0x57c21a */ __asm { LEA R10,[0x7fffa47c4b6c] }
    /* +0x57c221 */ __asm { MOV RDX,-0x21515689b1bc4aca }
    /* +0x57c22b */ __asm { CMP R10,RDX }
    /* +0x57c22e */ __asm { JZ 0x7fffa4cecdd4 }
    /* +0x57c234 */ __asm { MOV qword ptr [RBP + 0x1360],R9 }
    /* +0x57c23b */ __asm { MOV EAX,dword ptr [R10 + -0x7b34] }
    /* +0x57c242 */ __asm { JMP 0x7fffa4cecd69 }
    /* +0x57c247 */ __asm { NOP }
    /* +0x57c249 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x57c250 */ __asm { MOV R10,0x0 }
    /* +0x57c257 */ __asm { RDTSC }
    /* +0x57c259 */ __asm { SHL RDX,0x20 }
    /* +0x57c25d */ __asm { OR RDX,RAX }
    /* +0x57c260 */ __asm { MOV RCX,-0x30ebf64fafbc6efb }
    /* +0x57c26a */ __asm { IMUL RCX,RDX }
    /* +0x57c26e */ __asm { MOV R10,0x5eebb758f05d2a9a }
    /* +0x57c278 */ __asm { ADD RCX,R10 }
    /* +0x57c27b */ __asm { MOV RAX,RCX }
    /* +0x57c27e */ __asm { SHR RAX,0x1b }
    /* +0x57c282 */ __asm { MOV R11,RCX }
    /* +0x57c285 */ __asm { SHR R11,0x2d }
    /* +0x57c289 */ __asm { XOR EAX,R11D }
    /* +0x57c28c */ __asm { SHR RCX,0x3b }
    /* +0x57c290 */ __asm { ROR EAX,CL }
    /* +0x57c292 */ __asm { PUSHFQ }
    /* +0x57c293 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x57c29b */ __asm { POPFQ }
    /* +0x57c29c */ __asm { MOV dword ptr [RBP + 0x1360],0xb40cfc3c }
    /* +0x57c2a6 */ __asm { MOV R10D,dword ptr [RBP + 0x1360] }
    /* +0x57c2ad */ __asm { CMP R10D,0x45739538 }
    /* +0x57c2b4 */ __asm { NOP }
    /* +0x57c2b5 */ __asm { NOP }
    /* +0x57c2b6 */ __asm { NOP }
    /* +0x57c2b7 */ __asm { NOP }
    /* +0x57c2b8 */ __asm { NOP }
    /* +0x57c2b9 */ __asm { CMP EAX,0x4613623 }
    /* +0x57c2be */ __asm { JA 0x7fffa4cec589 }
    /* +0x57c2c4 */ __asm { MOV dword ptr [RBP + 0x1360],0xdde596e4 }
    /* +0x57c2ce */ __asm { MOV R10D,dword ptr [RBP + 0x1360] }
    /* +0x57c2d5 */ __asm { MOV RCX,-0x2b6af80dc7c52348 }
    /* +0x57c2df */ __asm { MOV EAX,0x14f036e6 }
    /* +0x57c2e4 */ __asm { XOR EAX,dword ptr [RBP + 0xeb0] }
    /* +0x57c2ea */ __asm { IMUL EAX,dword ptr [RBP + 0xf0] }
    /* +0x57c2f1 */ __asm { MOV R10,qword ptr [RBP + 0x2a0] }
    /* +0x57c2f8 */ __asm { ADD R10,RCX }
    /* +0x57c2fb */ __asm { ADD R10,0x1f88202d }
    /* +0x57c302 */ __asm { MOV R11,qword ptr [RBP + 0x170] }
    /* +0x57c309 */ __asm { XOR R11,R10 }
    /* +0x57c30c */ __asm { SUB R11,qword ptr [RBP + 0xd80] }
    /* +0x57c313 */ __asm { ADD EAX,0xad4e68e0 }
    /* +0x57c318 */ __asm { IMUL EAX,dword ptr [RBP + 0x1b48] }
    /* +0x57c31f */ __asm { MOV R10D,0xbfb3e253 }
    /* +0x57c325 */ __asm { MOV R9,R10 }
    /* +0x57c328 */ __asm { NOT R9 }
    /* +0x57c32b */ __asm { MOV RDX,-0x414ae4f702eadcc7 }
    /* +0x57c335 */ __asm { IMUL RDX,R9 }
    /* +0x57c339 */ __asm { XOR RDX,RAX }
    /* +0x57c33c */ __asm { CMP R11,RDX }
    /* +0x57c33f */ __asm { JZ 0x7fffa4cecddc }
    /* +0x57c345 */ __asm { MOV EAX,dword ptr [R10 + -0x3fb5df8f] }
    /* +0x57c34c */ __asm { MOV R10,0x5555555555555556 }
    /* +0x57c356 */ __asm { IMUL RAX,R10 }
    /* +0x57c35a */ __asm { MOV R10,0x5555555555555555 }
    /* +0x57c364 */ __asm { CMP RAX,R10 }
    /* +0x57c367 */ __asm { JA 0x7fffa4cec589 }
    /* +0x57c36d */ __asm { PXOR XMM5,XMM5 }
    /* +0x57c371 */ __asm { MOVDQA xmmword ptr [RBP + 0x1360],XMM5 }
    /* +0x57c379 */ __asm { MOV R10W,0xcafa }
    /* +0x57c37e */ __asm { XOR R10D,0x7819 }
    /* +0x57c385 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x57c38c */ __asm { ADD R10D,ECX }
    /* +0x57c38f */ __asm { ROL R10W,0x2 }
    /* +0x57c394 */ __asm { XOR R10D,dword ptr [RBP + 0xd80] }
    /* +0x57c39b */ __asm { MOV R11,qword ptr [RBP + 0x170] }
    /* +0x57c3a2 */ __asm { SUB R10D,R11D }
    /* +0x57c3a5 */ __asm { MOVZX EAX,R10W }
    /* +0x57c3a9 */ __asm { MOV R10,qword ptr GS:[RAX] }
    /* +0x57c3ad */ __asm { MOV EAX,0xc2e55096 }
    /* +0x57c3b2 */ __asm { MOV RDX,qword ptr [RBP + 0x1b48] }
    /* +0x57c3b9 */ __asm { IMUL EAX,EDX }
    /* +0x57c3bc */ __asm { ROR EAX,CL }
    /* +0x57c3be */ __asm { ADD EAX,0x7ab078a0 }
    /* +0x57c3c3 */ __asm { ROR EAX,0x1 }
    /* +0x57c3c5 */ __asm { XOR EAX,R11D }
    /* +0x57c3c8 */ __asm { MOV R10,qword ptr [R10 + 0x18] }
    /* +0x57c3cc */ __asm { MOV R11D,0x75eb290c }
    /* +0x57c3d2 */ __asm { SUB R11D,ECX }
    /* +0x57c3d5 */ __asm { ROL R11D,0x1b }
    /* +0x57c3d9 */ __asm { MOV RCX,qword ptr [RBP + 0x1ef0] }
    /* +0x57c3e0 */ __asm { ROR R11D,CL }
    /* +0x57c3e3 */ __asm { IMUL R11D,EDX }
    /* +0x57c3e7 */ __asm { SUB R10,qword ptr [R11] }
    /* +0x57c3ea */ __asm { MOV RDX,0x12320f23e734fa45 }
    /* +0x57c3f4 */ __asm { IMUL RDX,R10 }
    /* +0x57c3f8 */ __asm { SUB RDX,RAX }
    /* +0x57c3fb */ __asm { MOV R10,0x390bc0f3e0a4eac6 }
    /* +0x57c405 */ __asm { CMP RDX,R10 }
    /* +0x57c408 */ __asm { NOP }
    /* +0x57c409 */ __asm { NOP }
    /* +0x57c40a */ __asm { NOP }
    /* +0x57c40b */ __asm { NOP }
    /* +0x57c40c */ __asm { NOP }
    /* +0x57c40d */ __asm { MOV dword ptr [RBP + 0x1360],0x0 }
    /* +0x57c417 */ __asm { MOV dword ptr [RBP + 0x630],0x525f263f }
    /* +0x57c421 */ __asm { MOV R10D,dword ptr [RBP + 0x630] }
    /* +0x57c428 */ __asm { CMP R10D,0xb31abe76 }
    /* +0x57c42f */ __asm { SETNC DL }
    /* +0x57c432 */ __asm { MOV EAX,0x96c357ff }
    /* +0x57c437 */ __asm { SUB EAX,dword ptr [RBP + 0xd80] }
    /* +0x57c43d */ __asm { MOV RCX,qword ptr [RBP + 0x830] }
    /* +0x57c444 */ __asm { ROL EAX,CL }
    /* +0x57c446 */ __asm { ADD EAX,dword ptr [RBP + 0x2a0] }
    /* +0x57c44c */ __asm { XOR EAX,0xd978ecd0 }
    /* +0x57c451 */ __asm { CMP RAX,0x76f3fe7f }
    /* +0x57c457 */ __asm { SETZ R11B }
    /* +0x57c45b */ __asm { XOR R11B,DL }
    /* +0x57c45e */ __asm { NOP }
    /* +0x57c45f */ __asm { NOP }
    /* +0x57c460 */ __asm { NOP }
    /* +0x57c461 */ __asm { NOP }
    /* +0x57c462 */ __asm { NOP }
    /* +0x57c463 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x57c46a */ __asm { MOV R10,0x0 }
    /* +0x57c471 */ __asm { NOP }
    /* +0x57c473 */ __asm { PUSHFQ }
    /* +0x57c474 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x57c47c */ __asm { POPFQ }
    /* +0x57c47d */ __asm { MOV R10D,0xca4bdecd }
    /* +0x57c483 */ __asm { MOV RAX,qword ptr [RBP + 0x2210] }
    /* +0x57c48a */ __asm { IMUL EAX,R10D }
    /* +0x57c48e */ __asm { XOR EAX,dword ptr [RBP + 0xd80] }
    /* +0x57c494 */ __asm { NOT EAX }
    /* +0x57c496 */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x57c49d */ __asm { ROL EAX,CL }
    /* +0x57c49f */ __asm { MOV dword ptr [RBP + 0x630],EAX }
    /* +0x57c4a5 */ __asm { MOV R10D,dword ptr [RBP + 0x630] }
    /* +0x57c4ac */ __asm { CMP R10D,0xd8046760 }
    /* +0x57c4b3 */ __asm { NOP }
    /* +0x57c4b4 */ __asm { NOP }
    /* +0x57c4b5 */ __asm { NOP }
    /* +0x57c4b6 */ __asm { NOP }
    /* +0x57c4b7 */ __asm { NOP }
    /* +0x57c4b8 */ __asm { MOV R10,0x5f534863fc940719 }
    /* +0x57c4c2 */ __asm { XOR R10,qword ptr [RBP + 0xd80] }
    /* +0x57c4c9 */ __asm { LEA RDX,[0x7fffa4770000] }
    /* +0x57c4d0 */ __asm { NOP }
    /* +0x57c4d1 */ __asm { MOV R9,0x0 }
    /* +0x57c4d8 */ __asm { ADD R10,qword ptr [RBP + 0x830] }
    /* +0x57c4df */ __asm { XOR R10,-0x2fe741f6 }
    /* +0x57c4e6 */ __asm { MOV RDX,qword ptr [RBP + 0x1a8] }
    /* +0x57c4ed */ __asm { IMUL RDX,R10 }
    /* +0x57c4f1 */ __asm { ADD RDX,0x214c61c5 }
    /* +0x57c4f8 */ __asm { LEA R9,[0x7fffa47c17ea] }
    /* +0x57c4ff */ __asm { CMP R9,RDX }
    /* +0x57c502 */ __asm { NOP }
    /* +0x57c503 */ __asm { NOP }
    /* +0x57c504 */ __asm { NOP }
    /* +0x57c505 */ __asm { NOP }
    /* +0x57c506 */ __asm { NOP }
    /* +0x57c507 */ __asm { MOV AX,0xafee }
    /* +0x57c50b */ __asm { MOV R10D,0x73031880 }
    /* +0x57c511 */ __asm { MOV R11,qword ptr [RBP + 0xd80] }
    /* +0x57c518 */ __asm { SUB EAX,R11D }
    /* +0x57c51b */ __asm { ROR AX,0x1 }
    /* +0x57c51e */ __asm { MOV R8W,0x71b4 }
    /* +0x57c523 */ __asm { SUB R11D,dword ptr [RBP + 0x500] }
    /* +0x57c52a */ __asm { IMUL ECX,R10D,0xe818d3d }
    /* +0x57c531 */ __asm { LEA R10D,[R11 + RCX*0x1] }
    /* +0x57c535 */ __asm { ADD R10D,0x30dcc1ef }
    /* +0x57c53c */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x57c543 */ __asm { ROR R10D,CL }
    /* +0x57c546 */ __asm { XOR R8D,0xfffff997 }
    /* +0x57c54d */ __asm { MOV R11,qword ptr [RBP + 0x830] }
    /* +0x57c554 */ __asm { XOR EAX,R11D }
    /* +0x57c557 */ __asm { ROR AX,CL }
    /* +0x57c55a */ __asm { MOV qword ptr [RBP + 0x630],RDX }
    /* +0x57c561 */ __asm { MOVSXD R10,R10D }
    /* +0x57c564 */ __asm { MOVZX EDX,AX }
    /* +0x57c567 */ __asm { MOV EAX,dword ptr [R9 + -0x5322] }
    /* +0x57c56e */ __asm { IMUL R8D,dword ptr [RBP + 0xf0] }
    /* +0x57c576 */ __asm { XOR R8D,R11D }
    /* +0x57c579 */ __asm { NOT R8D }
    /* +0x57c57c */ __asm { MOVZX R9D,R8W }
    /* +0x57c580 */ __asm { LEA R8,[RBP + 0x1360] }
    /* +0x57c587 */ __asm { SYSCALL }
    /* +0x57c589 */ __asm { LEA R10,[0x7fffa4784a93] }
    /* +0x57c590 */ __asm { MOV RDX,-0x51afb7997d83465d }
    /* +0x57c59a */ __asm { CMP R10,RDX }
    /* +0x57c59d */ __asm { NOP }
    /* +0x57c59e */ __asm { NOP }
    /* +0x57c59f */ __asm { NOP }
    /* +0x57c5a0 */ __asm { NOP }
    /* +0x57c5a1 */ __asm { NOP }
    /* +0x57c5a2 */ __asm { NOP }
    /* +0x57c5a3 */ __asm { NOP }
    /* +0x57c5a4 */ __asm { NOP }
    /* +0x57c5a5 */ __asm { NOP }
    /* +0x57c5a6 */ __asm { NOP }
    /* +0x57c5a7 */ __asm { NOP }
    /* +0x57c5a8 */ __asm { NOP }
    /* +0x57c5a9 */ __asm { NOP }
    /* +0x57c5aa */ __asm { NOP }
    /* +0x57c5ab */ __asm { NOP }
    /* +0x57c5ac */ __asm { NOP }
    /* +0x57c5ad */ __asm { NOP }
    /* +0x57c5c8 */ __asm { MOV R10,0x0 }
    /* +0x57c5cf */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x57c5d6 */ __asm { NOP }
    /* +0x57c5d8 */ __asm { LEA R10,[0x7fffa47b8de9] }
    /* +0x57c5df */ __asm { MOV RDX,-0x136f07d87f87b8e6 }
    /* +0x57c5e9 */ __asm { CMP R10,RDX }
    /* +0x57c5ec */ __asm { NOP }
    /* +0x57c5ed */ __asm { NOP }
    /* +0x57c5ee */ __asm { NOP }
    /* +0x57c5ef */ __asm { NOP }
    /* +0x57c5f0 */ __asm { NOP }
    /* +0x57c5f1 */ __asm { MOV R11D,0xdc1ac6ba }
    /* +0x57c5f7 */ __asm { XOR R11D,dword ptr [RBP + 0xd80] }
    /* +0x57c5fe */ __asm { MOV RCX,qword ptr [RBP + 0x2a0] }
    /* +0x57c605 */ __asm { ROL R11D,CL }
    /* +0x57c608 */ __asm { MOVZX ECX,uint8_t ptr [R10 + 0x38a4] }
    /* +0x57c610 */ __asm { MOVZX EDX,uint8_t ptr [R10 + RCX*0x4 + 0x38b4] }
    /* +0x57c619 */ __asm { ROL DL,0x4 }
    /* +0x57c61c */ __asm { MOV uint8_t ptr [RBP + 0x1360],DL }
    /* +0x57c622 */ __asm { MOVZX EDX,uint8_t ptr [R10 + RCX*0x4 + 0x38b5] }
    /* +0x57c62b */ __asm { ROL DL,0x4 }
    /* +0x57c62e */ __asm { MOV uint8_t ptr [RBP + 0x1361],DL }
    /* +0x57c634 */ __asm { MOVZX EDX,uint8_t ptr [R10 + RCX*0x4 + 0x38b6] }
    /* +0x57c63d */ __asm { ROL DL,0x4 }
    /* +0x57c640 */ __asm { MOV uint8_t ptr [RBP + 0x1362],DL }
    /* +0x57c646 */ __asm { MOVZX EDX,uint8_t ptr [R10 + RCX*0x4 + 0x38b7] }
    /* +0x57c64f */ __asm { ROL DL,0x4 }
    /* +0x57c652 */ __asm { MOV R10,qword ptr [RBP + 0x8a0] }
    /* +0x57c659 */ __asm { LEA EAX,[R10 + R11*0x1] }
    /* +0x57c65d */ __asm { ADD EAX,0xbcb82c4c }
    /* +0x57c662 */ __asm { MOV uint8_t ptr [RBP + 0x1363],DL }
    /* +0x57c668 */ __asm { MOV R10D,0x65e8ce72 }
    /* +0x57c66e */ __asm { XOR R10D,dword ptr [RBP + 0x1360] }
    /* +0x57c675 */ __asm { MOV EAX,dword ptr [RAX] }
    /* +0x57c677 */ __asm { BT R10D,EAX }
    /* +0x57c67b */ __asm { JNC 0x7fffa4ceca75 }
    /* +0x57c681 */ __asm { MOV EAX,0xba6d717d }
    /* +0x57c686 */ __asm { XOR EAX,dword ptr [RBP + 0x2a0] }
    /* +0x57c68c */ __asm { ADD EAX,0xc671cb8 }
    /* +0x57c691 */ __asm { LEA R10,[0x7fffa47b6136] }
    /* +0x57c698 */ __asm { MOV R9,R10 }
    /* +0x57c69b */ __asm { ROL R9,0x3 }
    /* +0x57c69f */ __asm { MOV RDX,-0x501d44296cb229b5 }
    /* +0x57c6a9 */ __asm { IMUL RDX,R9 }
    /* +0x57c6ad */ __asm { MOV R8D,0x4ff9c0e1 }
    /* +0x57c6b3 */ __asm { MOV RSI,qword ptr [RBP + 0x2210] }
    /* +0x57c6ba */ __asm { IMUL ESI,R8D }
    /* +0x57c6be */ __asm { MOV R11,qword ptr [RBP + 0xd80] }
    /* +0x57c6c5 */ __asm { ADD ESI,R11D }
    /* +0x57c6c8 */ __asm { ROL ESI,0x1b }
    /* +0x57c6cb */ __asm { XOR RDX,-0x7638b0c }
    /* +0x57c6d2 */ __asm { MOV RCX,0x4fe3ac6316a34d9 }
    /* +0x57c6dc */ __asm { XOR R8D,R8D }
    /* +0x57c6df */ __asm { CMP RDX,RCX }
    /* +0x57c6e2 */ __asm { SETC R8B }
    /* +0x57c6e6 */ __asm { MOV RCX,0x4fe3ac6316a34d8 }
    /* +0x57c6f0 */ __asm { XOR R9D,R9D }
    /* +0x57c6f3 */ __asm { CMP RDX,RCX }
    /* +0x57c6f6 */ __asm { SETZ R9B }
    /* +0x57c6fa */ __asm { XOR EAX,dword ptr [RBP + 0x1ef0] }
    /* +0x57c700 */ __asm { SUB EAX,R11D }
    /* +0x57c703 */ __asm { NOT ESI }
    /* +0x57c705 */ __asm { MOVSXD RDX,ESI }
    /* +0x57c708 */ __asm { CMP RDX,RAX }
    /* +0x57c70b */ __asm { CMOVC R9D,R8D }
    /* +0x57c70f */ __asm { CMP R9B,0x1 }
    /* +0x57c713 */ __asm { JZ 0x7fffa4cecdf3 }
    /* +0x57c719 */ __asm { MOV qword ptr [RBP + 0x1360],R9 }
    /* +0x57c720 */ __asm { MOV EAX,dword ptr [R10 + 0x6f02] }
    /* +0x57c727 */ __asm { JMP 0x7fffa4cecd69 }
    /* +0x57c72c */ __asm { MOV R10,-0x30ebf64fafbc6efb }
    /* +0x57c736 */ __asm { IMUL RDX,R10 }
    /* +0x57c73a */ __asm { MOV R10,0x48b458a5bbfc449e }
    /* +0x57c744 */ __asm { ADD RDX,R10 }
    /* +0x57c747 */ __asm { MOV RCX,RDX }
    /* +0x57c74a */ __asm { SHR RCX,0x3b }
    /* +0x57c74e */ __asm { MOV RAX,RDX }
    /* +0x57c751 */ __asm { SHR RAX,0x1b }
    /* +0x57c755 */ __asm { SHR RDX,0x2d }
    /* +0x57c759 */ __asm { XOR EAX,EDX }
    /* +0x57c75b */ __asm { ROR EAX,CL }
    /* +0x57c75d */ __asm { MOV dword ptr [RBP + 0x1360],0xfe57f3ff }
    /* +0x57c767 */ __asm { MOV R10D,dword ptr [RBP + 0x1360] }
    /* +0x57c76e */ __asm { CMP R10D,0x98a940aa }
    /* +0x57c775 */ __asm { JA 0x7fffa4cec789 }
    /* +0x57c777 */ __asm { NOP }
    /* +0x57c779 */ __asm { MOV R10,0x0 }
    /* +0x57c780 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x57c787 */ __asm { ADC uint8_t ptr [RDI],CL }
    /* +0x57c789 */ __asm { CMP EAX,0x110632 }
    /* +0x57c78e */ __asm { JA 0x7fffa4ceca17 }
    /* +0x57c794 */ __asm { MOV dword ptr [RBP + 0x1360],0x65ad9d2c }
    /* +0x57c79e */ __asm { MOV R10D,dword ptr [RBP + 0x1360] }
    /* +0x57c7a5 */ __asm { CMP R10D,0x99659ea9 }
    /* +0x57c7ac */ __asm { JC 0x7fffa4cec7b1 }
    /* +0x57c7ae */ __asm { AND AH,uint8_t ptr [RDX] }
    /* +0x57c7b0 */ __asm { OUTSD DX,RSI }
    /* +0x57c7b1 */ __asm { PUSHFQ }
    /* +0x57c7b2 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x57c7ba */ __asm { POPFQ }
    /* +0x57c7bb */ __asm { MOV R10D,0x7a9896d5 }
    /* +0x57c7c1 */ __asm { MOV RDX,-0x61c719fa3cc7d1c3 }
    /* +0x57c7cb */ __asm { CMP R10,RDX }
    /* +0x57c7ce */ __asm { JZ 0x7fffa4cecdfd }
    /* +0x57c7d4 */ __asm { TEST uint8_t ptr [R10 + 0x5656b6b],0x1 }
    /* +0x57c7dc */ __asm { JNZ 0x7fffa4ceca17 }
    /* +0x57c7e2 */ __asm { PXOR XMM5,XMM5 }
    /* +0x57c7e6 */ __asm { MOVDQA xmmword ptr [RBP + 0x1360],XMM5 }
    /* +0x57c7ee */ __asm { MOV R10W,0x3383 }
    /* +0x57c7f3 */ __asm { XOR R10D,0xffffec61 }
    /* +0x57c7fa */ __asm { MOV RBX,qword ptr [RBP + 0x2a0] }
    /* +0x57c801 */ __asm { ADD R10D,EBX }
    /* +0x57c804 */ __asm { IMUL R10D,R10D,-0x7c1b }
    /* +0x57c80b */ __asm { MOV RSI,qword ptr [RBP + 0xd80] }
    /* +0x57c812 */ __asm { MOV ECX,ESI }
    /* +0x57c814 */ __asm { ROL R10W,CL }
    /* +0x57c818 */ __asm { MOV RCX,qword ptr [RBP + 0x1fb0] }
    /* +0x57c81f */ __asm { ROR R10W,CL }
    /* +0x57c823 */ __asm { MOVZX EAX,R10W }
    /* +0x57c827 */ __asm { MOV R10,qword ptr GS:[RAX] }
    /* +0x57c82b */ __asm { MOV EAX,0x70867277 }
    /* +0x57c830 */ __asm { MOV R8D,0x1981b1f2 }
}


// ============================================================================
// Function : Unwind@7fffa4cece30  |  RVA: 0x57ce30  |  Size: 337 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cece30(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 0xc23d92e9 - (int)*(uint64_t *)(param_2 + 800);
  uVar2 = 0xe303 - (short)*(uint32_t *)(param_2 + 0x1e20);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0xf;
  uVar2 = (uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) * -0x5437;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0xf;
  uVar2 = uVar2 >> bVar1 | uVar2 << 0x10 - bVar1;
  *(uint32_t *)((int64_t)(short)(uVar2 << 3 | uVar2 >> 0xd) + 0x7fffa47872d3) =
       *(uint32_t *)((int64_t)
                 (int)(~(uVar3 * 0x4000 | uVar3 >> 0x12) + *(int *)(param_2 + 0x9a0) +
                      (int)*(uint64_t *)(param_2 + 0xe00)) + 0x7fffa479278e) & 0xfffffffd;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cecf90  |  RVA: 0x57cf90  |  Size: 293 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cecf90(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  code *pcVar4;
  uint8_t bVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  
  uVar7 = ~((short)*(uint64_t *)(param_2 + 0x2268) * -0x1c74);
  uVar1 = *(uint64_t *)(param_2 + 0x1320);
  uVar2 = *(uint64_t *)(param_2 + 0x170);
  uVar3 = *(uint64_t *)(param_2 + 0xe00);
  uVar6 = 0x9ea5 - ((short)*(uint64_t *)(param_2 + 0x2030) + (short)*(uint32_t *)(param_2 + 800)
                   );
  bVar5 = (uint8_t)uVar3 & 0xf;
  *(uint32_t *)((int64_t)(short)(uVar6 >> bVar5 | uVar6 << 0x10 - bVar5) + 0x7fffa47c15af) =
       *(uint32_t *)((int64_t)
                 (short)~((uint16_t)*(uint64_t *)(param_2 + 0x9a0) ^ (uVar7 << 4 | uVar7 >> 0xc)) +
                0x7fffa47c6e74) & 0xfffffffd;
  (*(code *)(&UNK_7fffa56346a4 +
            (int)(~((int)uVar2 * -0x3ed5a2be ^ (uint32_t)uVar3) * ((uint32_t)uVar1 | 1))))();
  pcVar4 = (code *)__debugbreak();
  (*pcVar4)();
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ced0c0  |  RVA: 0x57d0c0  |  Size: 1944 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ced0c0(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint16_t uVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int iVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int iVar20;
  uint32_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint32_t uVar24;
  
  if ((uint64_t)
      (uint32_t)(((int)*(uint64_t *)(param_2 + 0x1320) - *(int *)(param_2 + 800)) +
            *(int *)(param_2 + 0xe00) + 0x580825d2) < *(uint64_t *)(param_2 + 0x13f8)) {
    *(uint32_t *)(param_2 + 0xf30) = 0xc6def85c;
    *(uint64_t *)(param_2 + 0x1f0) = 0x7fffa568da26;
    lVar1 = *(int64_t *)(param_2 + 0xe00);
    uVar11 = *(int64_t *)(param_2 + 0x228) * (0x1abc73a8e8bf838a - lVar1);
    uVar21 = (uint32_t)lVar1;
    iVar20 = (int)*(uint64_t *)(param_2 + 0x170);
    *(uint64_t *)(param_2 + 0x1ce0) =
         (uint64_t)
         (((int)CONCAT62((int6)((uint64_t)(0x1abc73a8e8bf838a - lVar1) >> 0x10),0x15a3) + uVar21) *
         iVar20);
    uVar24 = (uint32_t)*(int64_t *)(param_2 + 0x1320);
    *(uint32_t *)(param_2 + 0x920) = uVar24 | 1;
    *(uint64_t *)(param_2 + 0x670) = ~(param_2 + 0x13e0U);
    *(uint64_t *)(param_2 + 0x580) = ~(param_2 + 0x13e0U) & *(uint64_t *)(param_2 + 0x8d8);
    iVar15 = (int)*(uint64_t *)(param_2 + 0xe20);
    *(uint32_t *)(param_2 + 0x490) = iVar15 - uVar21;
    uVar13 = ~*(uint64_t *)(param_2 + 0xc28);
    *(uint32_t *)(param_2 + 0xa00) = 0x70628f67;
    *(uint32_t *)(param_2 + 0x20c0) = uVar24 - uVar21;
    *(uint64_t *)(param_2 + 0x228) =
         (uVar11 * 0x80 | uVar11 >> 0x39) + *(int64_t *)(param_2 + 0x1320);
    bVar5 = (uint8_t)*(uint64_t *)(param_2 + 0xe20) & 0x1f;
    *(uint32_t *)(param_2 + 0xe90) = 0x65e79a8b;
    uVar16 = (uint32_t)*(uint64_t *)(param_2 + 800);
    uVar17 = uVar24 + 0xf177f46 ^ uVar16;
    iVar8 = (int)*(uint64_t *)(param_2 + 0x1bc8);
    *(int64_t *)(param_2 + 0x1c20) =
         (int64_t)(int)((uVar17 << 3 | uVar17 >> 0x1d) * iVar8 + -0x379bc7a8);
    *(uint64_t *)(param_2 + 0x170) =
         (uint64_t)(~(iVar8 * -0x5b000000 | (uint32_t)(iVar8 * 0x4034694a) >> 9) + uVar16);
    *(uint64_t *)(param_2 + 0x2030) = *(uint64_t *)(param_2 + 0x13e0);
    uVar17 = ((uVar21 ^ 0xb1748b4f) << bVar5 | (uVar21 ^ 0xb1748b4f) >> 0x20 - bVar5) + 0x3c49f8a7;
    bVar6 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0x1f;
    uVar18 = param_2 + 0x13e0U & *(uint64_t *)(param_2 + 0x3f0);
    uVar16 = 0xc8117832 - iVar15;
    uVar21 = iVar20 * 0x74f83b5e ^ 0x315f2c42;
    bVar5 = (uint8_t)lVar1 & 0x1f;
    uVar11 = *(uint64_t *)(param_2 + 0x670);
    *(uint64_t *)(param_2 + 0xad0) = (uVar18 | uVar13) & *(uint64_t *)(param_2 + 0x8d8) ^ uVar11;
    uVar9 = uVar18 & uVar13;
    *(uint64_t *)(param_2 + 0x1be0) = uVar9;
    *(uint64_t *)(param_2 + 0xf68) = uVar13;
    uVar2 = *(uint64_t *)(param_2 + 0x580);
    *(uint64_t *)(param_2 + 0x1c50) = uVar9 & uVar2;
    *(uint64_t *)(param_2 + 0x280) = (uVar13 ^ uVar18) * 0x7f43b2c0;
    uVar22 = uVar9 ^ 0xffffffff736d552e;
    if ((uint64_t)(uVar17 >> bVar6 | uVar17 << 0x20 - bVar6) <
        (uint64_t)(int64_t)(int)((uVar21 << bVar5 | uVar21 >> 0x20 - bVar5) - uVar24)) {
      uVar22 = uVar9 * -0x8c92aad2;
    }
    *(uint64_t *)(param_2 + 0x1f90) = uVar22;
    uVar14 = uVar18 ^ 0xffffffffffffffff;
    *(uint64_t *)(param_2 + 0xcc0) = uVar14;
    uVar22 = *(uint64_t *)(param_2 + 0xc28);
    *(uint64_t *)(param_2 + 0x1ee0) = uVar2 & uVar14 & uVar22;
    *(uint64_t *)(param_2 + 0x1f70) = (uVar14 & uVar22) * -0xdfab6247;
    *(uint64_t *)(param_2 + 0x8b0) = uVar2 & uVar14 & uVar13;
    uVar19 = uVar22 | uVar18;
    *(uint64_t *)(param_2 + 0x2050) = uVar18;
    *(uint64_t *)(param_2 + 0x3b0) = uVar19;
    uVar2 = param_2 + 0x13e0;
    iVar15 = *(int *)(param_2 + 0x490);
    uVar9 = *(uint64_t *)(param_2 + 0x8d8);
    iVar20 = (int)*(uint64_t *)(param_2 + 0x1bc8);
    uVar16 = (uVar16 * 0x800 | uVar16 >> 0x15) * iVar20;
    bVar5 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0x1f;
    *(uint64_t *)(param_2 + 0xc08) = uVar9 ^ uVar2;
    *(uint64_t *)(param_2 + 0x490) = (uint64_t)(uVar16 >> bVar5 | uVar16 << 0x20 - bVar5);
    uVar16 = (*(int *)(param_2 + 0xe90) * 0x423d0711 + 0x2ffe54c4) * iVar20;
    bVar5 = (uint8_t)*(uint64_t *)(param_2 + 0x1320) & 0x1f;
    *(uint64_t *)(param_2 + 0x4b0) = (uVar22 & uVar18 ^ uVar9 | uVar11) * -0x6c27d8f9;
    uVar23 = (uVar18 ^ uVar22) & *(uint64_t *)(param_2 + 0x3f0);
    uVar3 = *(uint64_t *)(param_2 + 0x1be0);
    uVar12 = *(uint64_t *)(param_2 + 0x3f0) & uVar3;
    uVar10 = uVar11 & uVar23;
    if (((uint32_t)*(uint64_t *)(param_2 + 800) ^ 0xcc63526e) + iVar15 <=
        ~(((0x2145df27 - uVar24) * 0x1000000 | 0x2145df27 - uVar24 >> 8) * iVar8) * -0x5f7c9e43) {
      uVar10 = uVar11 * uVar23;
    }
    *(uint64_t *)(param_2 + 0xe90) = uVar10;
    uVar21 = (int)*(uint64_t *)(param_2 + 0xe00) + 0x835a25fe;
    bVar6 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0x1f;
    uVar21 = uVar21 >> bVar6 | uVar21 << 0x20 - bVar6;
    iVar8 = *(int *)(param_2 + 0x10c0);
    uVar17 = (uint32_t)*(uint64_t *)(param_2 + 800);
    *(uint64_t *)(param_2 + 0x10c0) = uVar3 * -0x5318b775 + *(int64_t *)(param_2 + 0x280);
    uVar10 = *(int64_t *)(param_2 + 0x2050) - 1;
    if (*(int64_t *)(param_2 + 0x1c20) <
        (int64_t)(uint64_t)((uVar16 >> bVar5 | uVar16 << 0x20 - bVar5) ^ uVar17)) {
      uVar10 = *(uint64_t *)(param_2 + 0xcc0);
    }
    iVar15 = *(int *)(param_2 + 0xf30);
    iVar20 = *(int *)(param_2 + 0x920);
    *(uint64_t *)(param_2 + 0xf30) =
         (((uVar12 & param_2 + 0x13e0U) + ((*(uint64_t *)(param_2 + 0x3f0) ^ uVar19) & uVar2)) -
         *(int64_t *)(param_2 + 0xad0)) * 0x480993aa;
    *(uint64_t *)(param_2 + 0x920) =
         ((*(uint64_t *)(param_2 + 0xc08) ^ uVar3) - (uVar11 & uVar12)) * 0x64c0d8a4;
    uVar11 = 0xffffffffffffffff;
    if ((int)*(uint64_t *)(param_2 + 0x1e18) + iVar15 * iVar20 != -0x1b292b9a) {
      uVar11 = *(uint64_t *)(param_2 + 0x670);
    }
    uVar3 = *(uint64_t *)(param_2 + 0xc28);
    uVar7 = ~(uint16_t)*(uint64_t *)(param_2 + 0x1ce0);
    uVar4 = *(uint64_t *)(param_2 + 0xe20);
    bVar5 = (uint8_t)uVar4 & 0xf;
    uVar12 = *(uint64_t *)(param_2 + 0xf68);
    if ((((int)uVar4 + 0x40fa5718U ^ *(uint32_t *)(param_2 + 800)) * -0x72330db7 ^
        *(uint32_t *)(param_2 + 0xe00)) < (uVar21 << 4 | uVar21 >> 0x1c) * iVar8) {
      uVar12 = uVar3 - 1;
    }
    uVar11 = (uVar12 ^ *(uint64_t *)(param_2 + 0x2050)) * *(int64_t *)(param_2 + 0x228) +
             *(int64_t *)(param_2 + 0x10c0) +
             (((((uVar14 | uVar3) ^ *(uint64_t *)(param_2 + 0x8d8)) & param_2 + 0x13e0U) +
              *(int64_t *)(param_2 + 0x8b0)) * -0x1cb744fa +
              (((uVar19 | *(uint64_t *)(param_2 + 0x3f0)) ^ uVar2) - (uVar14 & uVar13 & uVar18)) *
              0xb4316ca3 + *(int64_t *)(param_2 + 0x920) + *(int64_t *)(param_2 + 0xf30) +
              (*(uint64_t *)(param_2 + 0x3b0) & *(uint64_t *)(param_2 + 0x580)) * -0xd0e8b19d +
              (*(int64_t *)(param_2 + 0x4b0) - ((uVar9 | uVar18 ^ uVar22) ^ param_2 + 0x13e0U)) +
              (*(uint64_t *)(param_2 + 0x1ee0) & 0xffffffff) * 0x6c27d8fb +
              ((*(uint64_t *)(param_2 + 0x1ee0) >> 0x20) * 0x6c27d8fb << 0x20) +
              (int64_t)(int)((uVar17 ^ 0xfb3c8260) + *(int *)(param_2 + 0x20c0)) *
              (uVar23 & param_2 + 0x13e0U) +
              (uint64_t)
              (0x8b1b7f68U - (*(int *)(param_2 + 0xa00) + (int)*(uint64_t *)(param_2 + 0x1320)) ^
              uVar17) * *(int64_t *)(param_2 + 0x1c50) +
              (uVar11 ^ uVar3 ^ *(uint64_t *)(param_2 + 0x8d8) ^ uVar10) * 0x241e4550 +
             *(int64_t *)(param_2 + 0xe90) * -0x241e454e) * 0x2667a0e2;
    (*(code *)((int64_t)(short)((uVar7 << bVar5 | uVar7 >> 0x10 - bVar5) ^ 0x5417) +
              *(int64_t *)(param_2 + 0x1f0)))
              (uVar4,*(uint64_t *)(param_2 + 0x1f70) ^ uVar11,
               uVar11 + *(uint64_t *)(param_2 + 0x1f70));
  }
  *(uint64_t *)(param_2 + 0x13f0) = 0;
  *(uint16_t *)(param_2 + 0x13e0) = 0;
  *(uint64_t *)(param_2 + 0x13f8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ced860  |  RVA: 0x57d860  |  Size: 347 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ced860(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0xb48)) {
    pcVar1 = (code *)((int64_t)
                      (short)~((short)*(uint64_t *)(param_2 + 0x2268) *
                              ~((short)*(uint32_t *)(param_2 + 0x170) * -0x2193)) + 0x7fffa568cccd
                     );
    (*pcVar1)(param_1,pcVar1,
              *(uint64_t *)(param_2 + 0xb30) >> 0x3d ^ *(uint64_t *)(param_2 + 0xb30));
  }
  *(uint64_t *)(param_2 + 0xb40) = 0;
  *(uint16_t *)(param_2 + 0xb30) = 0;
  *(uint64_t *)(param_2 + 0xb48) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ced9c0  |  RVA: 0x57d9c0  |  Size: 576 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ced9c0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  if (*(int64_t *)(param_2 + 0x2030) != 0) {
    uVar4 = (uint16_t)*(uint64_t *)(param_2 + 0xe90) ^ 0x2f18;
    uVar1 = *(uint64_t *)(param_2 + 0xe00);
    bVar2 = (uint8_t)uVar1 & 0xf;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0x3f;
    uVar5 = 0x50f - *(int64_t *)(param_2 + 0xa20);
    uVar6 = ((uVar1 + 0x9f7ccdd2191cb7c2 << bVar3 | uVar1 + 0x9f7ccdd2191cb7c2 >> 0x40 - bVar3) -
            *(int64_t *)(param_2 + 0x280)) + 0x3a4a568d;
    (*(code *)((int64_t)
               (short)((uVar4 << bVar2 | uVar4 >> 0x10 - bVar2) + 0x17d2 ^
                      (uint16_t)*(uint64_t *)(param_2 + 800)) + 0x7fffa568d7d1))
              (uVar5,~(uVar1 | *(uint64_t *)(param_2 + 0x4b0)) & uVar5,
               *(uint64_t *)(param_2 + 0x2030) >> 0x3d ^ *(uint64_t *)(param_2 + 0x2030),
               (uVar6 * 0x100000 | uVar6 >> 0x2c) *
               (*(uint64_t *)(param_2 + 0x4b0) | *(uint64_t *)(param_2 + 0x22e0) | uVar1));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cedc00  |  RVA: 0x57dc00  |  Size: 620 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cedc00(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  int64_t lVar3;
  code *pcVar4;
  uint64_t unaff_RBX;
  
  if (7 < *(uint64_t *)(param_2 + 0x13f8)) {
    *(uint8_t **)(param_2 + 0x2050) = &UNK_7fffa5690b52;
    uVar2 = (uint32_t)*(uint64_t *)(param_2 + 800) ^ 0x90f87317;
    uVar1 = *(uint64_t *)(param_2 + 0x198);
    lVar3 = (~unaff_RBX & uVar1) * -0x22783969 +
            (unaff_RBX & 0x87U - *(int64_t *)(param_2 + 0xa20)) * 0x616bc7ab +
            (~unaff_RBX | uVar1) * -0x13943c169;
    pcVar4 = (code *)((int64_t)
                      (int)((uVar2 << 0x18 | uVar2 >> 8) ^ (uint32_t)*(uint64_t *)(param_2 + 0xe00)) +
                     *(int64_t *)(param_2 + 0x2050));
    (*pcVar4)(lVar3,pcVar4,
              lVar3 + ((uVar1 ^ unaff_RBX) & 0xffffffff) * 0xa278396d +
              (((uVar1 ^ unaff_RBX) >> 0x20) * 0xa278396d << 0x20));
  }
  *(uint16_t *)(param_2 + 0x13e0) = 0;
  *(uint64_t *)(param_2 + 0x13f8) = 7;
  *(uint64_t *)(param_2 + 0x13f0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cede70  |  RVA: 0x57de70  |  Size: 261 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cede70(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t *puVar2;
  
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x1c20) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar2 = *(uint32_t **)(param_2 + 0x1c20);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cedf80  |  RVA: 0x57df80  |  Size: 306 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cedf80(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (0xf < *(uint64_t *)(param_2 + 0x6c8)) {
    pcVar1 = (code *)((int64_t)
                      (int)((0x490c9c80 - (*(uint32_t *)(param_2 + 800) ^ 0xe7d30c5d) ^
                            *(uint32_t *)(param_2 + 0xe00)) * *(int *)(param_2 + 0x1b60)) +
                     0x7fffa5694430);
    (*pcVar1)(param_1,pcVar1,
              *(uint64_t *)(param_2 + 0x6b0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x6b0));
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cee0c0  |  RVA: 0x57e0c0  |  Size: 319 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cee0c0(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t *puVar2;
  uint8_t bVar3;
  uint32_t uVar4;
  
  if (*(int64_t *)(param_2 + 0x1390) != 0) {
    uVar4 = *(int *)(param_2 + 0x390) * 0x1f9c47cc;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0x1f;
    uVar4 = uVar4 >> bVar3 | uVar4 << 0x20 - bVar3;
    (*(code *)(&UNK_7fffa508e7fd + (int)((uVar4 << 6 | uVar4 >> 0x1a) - *(int *)(param_2 + 800))))
              (*(int64_t *)(param_2 + 0x1390));
  }
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x670) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar2 = *(uint32_t **)(param_2 + 0x670);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cee200  |  RVA: 0x57e200  |  Size: 395 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cee200(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0xb48)) {
    uVar2 = ~((short)*(uint32_t *)(param_2 + 0x170) * -0x3b);
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0xf;
    (*(code *)(&UNK_7fffa568a532 +
              (short)((short)*(uint64_t *)(param_2 + 0x2050) +
                      (uVar2 >> bVar1 | uVar2 << 0x10 - bVar1) + -0x443)))
              (*(uint64_t *)(param_2 + 0xe00),&UNK_7fffa568a532,
               *(uint64_t *)(param_2 + 0xb30) >> 0x3d ^ *(uint64_t *)(param_2 + 0xb30),
               (uint32_t)*(uint64_t *)(param_2 + 0x2050) | 1);
  }
  *(uint64_t *)(param_2 + 0xb48) = 7;
  *(uint16_t *)(param_2 + 0xb30) = 0;
  *(uint64_t *)(param_2 + 0xb40) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cee390  |  RVA: 0x57e390  |  Size: 240 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cee390(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x2050) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cee480  |  RVA: 0x57e480  |  Size: 323 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cee480(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint64_t in_RAX;
  uint16_t uVar3;
  int iVar4;
  
  iVar4 = (int)*(uint64_t *)(param_2 + 0x2268) *
          (int)CONCAT62((int6)((uint64_t)in_RAX >> 0x10),0xf51e);
  iVar4 = CONCAT22((short)((uint32_t)iVar4 >> 0x10),(uint16_t)iVar4 >> 1) - *(int *)(param_2 + 800);
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x9a0) & 0xf;
  uVar3 = (uint16_t)iVar4;
  uVar3 = uVar3 >> bVar2 | uVar3 << 0x10 - bVar2;
  uVar1 = param_2 + 0x1cf0;
  (*(code *)((int64_t)(short)uVar3 + 0x7fffa52d8fa1))
            (*(uint64_t *)(param_2 + 0x9a0),0x3b67e846,
             CONCAT22((short)((uint32_t)iVar4 >> 0x10),uVar3),
             (uVar1 * 0x8000 | uVar1 >> 0x31) ^ (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cee5d0  |  RVA: 0x57e5d0  |  Size: 358 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cee5d0(uint64_t param_1,int64_t param_2)

{
  if (7 < *(uint64_t *)(param_2 + 0x13f8)) {
    (*(code *)((int64_t)
               (int)((((*(uint32_t *)(param_2 + 0xe00) ^ 0x50b51f5d) - *(int *)(param_2 + 800)) +
                     -0x14e8dbea) * ((uint32_t)*(uint64_t *)(param_2 + 0x1320) | 1)) + 0x7fffa5696748)
    )(param_1,0x7fffa5696748,
      *(uint64_t *)(param_2 + 0x13e0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13e0));
  }
  *(uint64_t *)(param_2 + 0x13f0) = 0;
  *(uint16_t *)(param_2 + 0x13e0) = 0;
  *(uint64_t *)(param_2 + 0x13f8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cee740  |  RVA: 0x57e740  |  Size: 408 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cee740(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  code *pcVar4;
  
  if ((uint64_t)
      (~(0xc1b0c498U - *(int *)(param_2 + 800) ^ *(uint32_t *)(param_2 + 0x1320)) *
      *(int *)(param_2 + 0x1bc8)) < *(uint64_t *)(param_2 + 0x6c8)) {
    uVar2 = (int)*(uint64_t *)(param_2 + 800) + 0x8f787a59;
    uVar3 = *(uint64_t *)(param_2 + 0xe00) & 0xffffffff;
    bVar1 = (uint8_t)uVar3 & 0x1f;
    pcVar4 = (code *)((int64_t)(int)(uVar2 << bVar1 | uVar2 >> 0x20 - bVar1) + 0x7fffa5695ae2);
    (*pcVar4)(uVar3,pcVar4,*(uint64_t *)(param_2 + 0x6b0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x6b0)
             );
  }
  *(uint64_t *)(param_2 + 0x558) = *(uint64_t *)(param_2 + 0x1cd0);
  *(uint64_t *)(param_2 + 0x420) = *(uint64_t *)(param_2 + 0xa50);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cee8e0  |  RVA: 0x57e8e0  |  Size: 453 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cee8e0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  uVar4 = (int)*(uint64_t *)(param_2 + 0x170) * 0x765e89be + 0xea1f681c;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x1e20) & 0x1f;
  iVar3 = *(int *)(((int64_t)
                    (short)((short)*(uint64_t *)(param_2 + 0x470) *
                            (((uint16_t)*(uint32_t *)(param_2 + 800) ^ 0x4acd) -
                            (short)*(uint64_t *)(param_2 + 0xe00)) + 0x186c) ^ 0x2834U) +
                  0x7fffa47c4d9e) + -1;
  *(int *)((int64_t)
           (int)((uVar4 >> bVar2 | uVar4 << 0x20 - bVar2) - (int)*(uint64_t *)(param_2 + 0xe00)) +
          0x7fffa47c9165) = iVar3;
  if (iVar3 == 0) {
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0xe00);
    uVar4 = uVar5 ^ 0x588b5910;
    iVar3 = (int)*(uint64_t *)(param_2 + 0x8b0);
    uVar4 = (uVar4 << 8 | uVar4 >> 0x18) + iVar3;
    uVar1 = *(uint64_t *)(param_2 + 800);
    bVar2 = (uint8_t)uVar1 & 0x1f;
    LOCK();
    *(uint32_t *)((int64_t)(int)(uVar4 << bVar2 | uVar4 >> 0x20 - bVar2) + 0x7fffa47cac90) = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(int)((((uVar5 + (int)uVar1) - iVar3) + 0x21748146) * -0x9172745) +
               0x7fffa47cf434);
  }
  *(uint64_t *)(param_2 + 0x1eb0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ceeab0  |  RVA: 0x57eab0  |  Size: 322 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ceeab0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = ~(*(int *)(param_2 + 0x920) * -0x57b5cfad) + *(int *)(param_2 + 0xe00);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0x1f;
  (*(code *)((int64_t)(int)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x7fffa56943cb))
            (*(uint64_t *)(param_2 + 800),0x7fffa56943cb,
             *(uint64_t *)(param_2 + 0x1d68) >> 0x3d ^ *(uint64_t *)(param_2 + 0x1d68));
  *(uint64_t *)(param_2 + 0xca0) = *(uint64_t *)(param_2 + 0x1320);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ceec00  |  RVA: 0x57ec00  |  Size: 535 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ceec00(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint32_t uVar3;
  
  uVar2 = *(uint64_t *)(param_2 + 0xca0);
  if (uVar2 != 0) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xcc0) & 0xf;
    (*(code *)((int64_t)
               (short)~((uint16_t)*(uint64_t *)(param_2 + 0xe00) ^
                       (0x2868 << bVar1 | 0x2868U >> 0x10 - bVar1)) + 0x7fffa568b85a))
              (*(uint64_t *)(param_2 + 0xcc0),0x7fffa568b85a,uVar2 >> 0x3d ^ uVar2,
               (*(uint64_t *)(param_2 + 0x1380) | *(uint64_t *)(param_2 + 0x980)) * -0x135ad5171);
  }
  uVar2 = *(uint64_t *)(param_2 + 0xbf8) ^ 0xc0151a4d;
  uVar3 = (int)*(uint64_t *)(param_2 + 0x170) * (*(int *)(param_2 + 0xe00) + 0x4bb44eb0);
  (*(code *)(&UNK_7fffa51888c4 + (int)(uVar3 * 0x40000000 | uVar3 >> 2)))
            (0xe20fc805,uVar2 << 6 ^ uVar2);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ceee20  |  RVA: 0x57ee20  |  Size: 261 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ceee20(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  uint32_t *puVar2;
  
  piVar1 = (int *)(*(int64_t *)(param_2 + 0x3b0) + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar2 = *(uint32_t **)(param_2 + 0x3b0);
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)(puVar2 + 2);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ceef30  |  RVA: 0x57ef30  |  Size: 473 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ceef30(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0xf;
  uVar2 = (uint16_t)*(uint64_t *)(param_2 + 800);
  uVar3 = ((0x68e0U >> bVar1 | 0x68e0 << 0x10 - bVar1) ^ uVar2) -
          (short)*(uint32_t *)(param_2 + 0x1c0);
  uVar4 = *(int *)((int64_t)(short)(((short)*(uint64_t *)(param_2 + 0xe00) - uVar2) + 0x40ef) +
                  0x7fffa478a50e) - 1;
  *(uint32_t *)((int64_t)
            (short)((uint16_t)*(uint64_t *)(param_2 + 0x1d70) ^
                   (short)*(uint64_t *)(param_2 + 0x2268) * -0x6dec) + 0x7fffa478d94e) = uVar4;
  if (uVar4 == (uint16_t)(uVar3 * 0x100 | uVar3 >> 8)) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x9a0) & 0x1f;
    LOCK();
    *(uint32_t *)
     ((int64_t)
      (int)((0xb3f6676 << bVar1 | 0xb3f6676U >> 0x20 - bVar1) * *(int *)(param_2 + 0x170) +
           *(int *)(param_2 + 0xe00)) + 0x7fffa4790047) = 0;
    UNLOCK();
    uVar4 = (*(int *)(param_2 + 0x1bc8) * -0x13eef0fb + 0x581e6c17U ^ *(uint32_t *)(param_2 + 0x1320)) *
            -0xbf9ae35;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0x1f;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(int)(uVar4 >> bVar1 | uVar4 << 0x20 - bVar1) + 0x7fffa4790294);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cef110  |  RVA: 0x57f110  |  Size: 313 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cef110(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint8_t bVar2;
  
  uVar1 = param_2 + 0x1c80;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x3b0) & 0x1f;
  (*(code *)(&UNK_7fffa52dc10d +
            (int)(((0x5878da1eU >> bVar2 | 0x5878da1e << 0x20 - bVar2) ^ *(uint32_t *)(param_2 + 0xe00))
                 + *(int *)(param_2 + 800))))
            (*(uint64_t *)(param_2 + 0x3b0),0x3b67e846,param_3,
             (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cef250  |  RVA: 0x57f250  |  Size: 323 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cef250(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  int64_t lVar2;
  
  if (0xf < *(uint64_t *)(param_2 + 0x6c8)) {
    uVar1 = *(uint32_t *)(param_2 + 0xcc0) ^ 0x9d81c6af;
    lVar2 = (int64_t)(int)~((uVar1 << 0xb | uVar1 >> 0x15) ^ *(uint32_t *)(param_2 + 800));
    (*(code *)(lVar2 + 0x7fffa5694e3f))
              (param_1,lVar2,
               *(uint64_t *)(param_2 + 0x6b0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x6b0));
  }
  *(uint64_t *)(param_2 + 0x6c8) = 0xf;
  *(uint64_t *)(param_2 + 0x6c0) = 0;
  *(uint8_t *)(param_2 + 0x6b0) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cef3a0  |  RVA: 0x57f3a0  |  Size: 372 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cef3a0(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  code *pcVar3;
  
  if ((uint64_t)
      ((*(int *)(param_2 + 800) + 0xc1d3978fU ^ 0xae412727) * -0x47d328df +
      *(int *)(param_2 + 0xe00)) < *(uint64_t *)(param_2 + 0x13f8)) {
    uVar2 = *(int *)(param_2 + 0x170) * 0x109219c6;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0x1f;
    pcVar3 = (code *)((int64_t)(int)((uVar2 >> bVar1 | uVar2 << 0x20 - bVar1) + 0x667b4e6d) +
                     0x7fffa56935ee);
    (*pcVar3)(*(uint64_t *)(param_2 + 0xe00),pcVar3,
              *(uint64_t *)(param_2 + 0x13e0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x13e0));
  }
  *(uint16_t *)(param_2 + 0x13e0) = 0;
  *(uint64_t *)(param_2 + 0x13f0) = 0;
  *(uint64_t *)(param_2 + 0x13f8) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cef520  |  RVA: 0x57f520  |  Size: 1190 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cef520(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  uint8_t bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint64_t uVar12;
  uint16_t uVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  int iVar22;
  
  if (7 < *(uint64_t *)(param_2 + 0x6c8)) {
    *(uint32_t *)(param_2 + 0x580) = 0x8c4badb;
    *(uint32_t *)(param_2 + 0x10c0) = 0x9a0a4873;
    lVar9 = *(int64_t *)(param_2 + 0xe00);
    *(uint64_t *)(param_2 + 0x670) = 0x7fffa5688f8d;
    *(uint64_t *)(param_2 + 0x2050) = (uint64_t)(uint32_t)(*(int *)(param_2 + 0x170) * -0x220e3c4a);
    *(uint32_t *)(param_2 + 0x920) = 0x815e9eeb;
    uVar14 = (uint32_t)*(uint64_t *)(param_2 + 800);
    *(uint64_t *)(param_2 + 0xe20) = 0x9fa38385;
    *(uint64_t *)(param_2 + 0x170) = (uint64_t)((0x2a81776b - (int)lVar9) * -0x75bf8f01 - uVar14);
    *(uint64_t *)(param_2 + 0x1f0) =
         *(uint64_t *)(param_2 + 0x6b0) >> 0x3d ^ *(uint64_t *)(param_2 + 0x6b0);
    *(uint32_t *)(param_2 + 0x1f90) = uVar14 ^ (uint32_t)CONCAT62((int6)((uint64_t)lVar9 >> 0x10),0xc5f9);
    uVar7 = ~*(uint64_t *)(param_2 + 0x6a0);
    uVar8 = *(uint64_t *)(param_2 + 0x300);
    uVar1 = *(uint64_t *)(param_2 + 0x2210);
    uVar12 = (uVar8 ^ uVar1) & uVar7;
    uVar15 = ~uVar8;
    *(uint64_t *)(param_2 + 0x1f70) = uVar1 ^ uVar15;
    bVar3 = (uint8_t)lVar9 & 0x1f;
    *(uint64_t *)(param_2 + 0x1ce0) =
         (uVar1 ^ uVar15 | *(uint64_t *)(param_2 + 0x6a0)) * -0x12c776819;
    uVar16 = ~(lVar9 + 0x638d0fd497ccdb23U) * 0x7ffe0325;
    bVar4 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0x3f;
    *(uint64_t *)(param_2 + 0xf30) = uVar12 * -0x12c776819;
    *(uint64_t *)(param_2 + 0x580) = (uint64_t)(uint32_t)(*(int *)(param_2 + 0x580) * -0x1076ef57);
    uVar17 = *(uint32_t *)(param_2 + 0x920);
    uVar21 = (uint32_t)uVar1;
    uVar5 = uVar21 | (uint32_t)uVar8;
    *(uint32_t *)(param_2 + 0x920) = uVar5;
    *(uint32_t *)(param_2 + 0x10c0) = *(uint32_t *)(param_2 + 0x10c0) ^ uVar14;
    uVar10 = (uint32_t)*(uint64_t *)(param_2 + 0x6a0);
    *(uint64_t *)(param_2 + 0x1320) = (uint64_t)(~uVar5 & uVar10);
    *(uint64_t *)(param_2 + 0x2030) = (uint64_t)((uint32_t)uVar8 & uVar21);
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x2050);
    *(uint64_t *)(param_2 + 0x2050) = (uint64_t)(uVar5 << 0x14 | uVar5 >> 0xc);
    uVar2 = *(uint64_t *)(param_2 + 0xe00);
    uVar11 = (uint32_t)uVar2;
    uVar5 = ~(uVar14 ^ 0xf5949fb5 ^ uVar11);
    uVar18 = 0xffffffffffffffff;
    if ((0x4590ced1 << bVar3 | 0x4590ced1U >> 0x20 - bVar3) <= (uVar5 << 6 | uVar5 >> 0x1a)) {
      uVar18 = uVar15;
    }
    uVar5 = (uVar14 ^ 0xd2d668ac) * 0x42f80000 | (uVar14 ^ 0xd2d668ac) * 0x5a19a85f >> 0xd;
    bVar6 = (uint8_t)uVar2;
    uVar5 = uVar5 << (bVar6 & 0x1f) | uVar5 >> 0x20 - (bVar6 & 0x1f);
    iVar22 = (int)*(uint64_t *)(param_2 + 0x1bc8);
    uVar14 = (uint32_t)*(uint64_t *)(param_2 + 800);
    *(uint64_t *)(param_2 + 0x580) =
         (uint64_t)(((uint32_t)*(uint64_t *)(param_2 + 0x580) ^ uVar5) * iVar22 + uVar14) *
         (~uVar1 & uVar7 & uVar8);
    bVar3 = (uint8_t)uVar5 & 0x1f;
    uVar19 = (uint32_t)*(uint64_t *)(param_2 + 0x2050);
    uVar20 = (uVar5 ^ 0x1a6969e5) + 0xf71a3f1b;
    uVar20 = ~(uVar20 * 0x20000000 | uVar20 >> 3);
    uVar8 = uVar15 | uVar1;
    if ((((uVar5 | 1) * 0x72d4a28c + 0xc73c2a8) * iVar22 - uVar14 ^ 0xc0000005) <=
        (~uVar17 + uVar11) * 0xf35f8d1 - uVar5) {
      uVar8 = *(uint64_t *)(param_2 + 0x1f70);
    }
    uVar13 = ~((short)(uVar5 | 1) * ~(uint16_t)*(uint32_t *)(param_2 + 0x1f90));
    uVar7 = *(uint64_t *)(param_2 + 0x6a0);
    lVar9 = (uVar8 ^ uVar7) * 0x4548ba4e;
    uVar14 = (int)*(uint64_t *)(param_2 + 0xe20) + 0xb8e8097dU ^ uVar14;
    uVar17 = (uint32_t)*(uint64_t *)(param_2 + 0x2030);
    if ((uint64_t)(uVar14 << (bVar6 & 0x1f) | uVar14 >> 0x20 - (bVar6 & 0x1f)) <=
        *(uint64_t *)(param_2 + 0x170)) {
      uVar17 = *(uint32_t *)(param_2 + 0x920);
    }
    uVar8 = (uVar16 << bVar4 | uVar16 >> 0x40 - bVar4) & uVar12;
    if ((uVar20 >> (bVar6 & 0x1f) | uVar20 << 0x20 - (bVar6 & 0x1f)) <
        ~(0x51daf07a - uVar5 >> (bVar6 & 0x1f) | 0x51daf07a - uVar5 << 0x20 - (bVar6 & 0x1f))) {
      uVar8 = *(uint64_t *)(param_2 + 0xf30);
    }
    (*(code *)((int64_t)(short)(uVar13 >> 1 | (uint16_t)((uVar13 & 1) != 0) << 0xf) +
              *(int64_t *)(param_2 + 0x670)))
              (uVar2,lVar9,*(uint64_t *)(param_2 + 0x1f0),
               uVar8 + ((uVar18 | uVar1) ^ uVar7) * 0x2deaec66 +
                       (uint64_t)(uVar17 & (uint32_t)uVar7) * 0x7333a6b4 +
                       *(int64_t *)(param_2 + 0x1ce0) +
                       ((uint64_t)((*(int *)(param_2 + 0x10c0) - uVar5 ^ uVar11) * -0x2f365a6b) +
                       0x632d0c03) * (uint64_t)(uVar21 & uVar10 & (uint32_t)uVar15) +
                       (uint64_t)((uVar19 >> bVar3 | uVar19 << 0x20 - bVar3) ^ uVar11) *
                       *(int64_t *)(param_2 + 0x1320) + *(int64_t *)(param_2 + 0x580) + lVar9);
  }
  *(uint64_t *)(param_2 + 0x558) = *(uint64_t *)(param_2 + 0x1cd0);
  *(uint64_t *)(param_2 + 0x420) = *(uint64_t *)(param_2 + 0xa50);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cef9d0  |  RVA: 0x57f9d0  |  Size: 723 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cef9d0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint64_t uVar6;
  code *pcVar7;
  int iVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t unaff_RDI;
  uint32_t uVar12;
  int64_t lVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  
  uVar2 = *(uint32_t *)(param_2 + 0x610);
  *(uint8_t **)(param_2 + 0x2050) = &UNK_7fffa52dbf22;
  uVar1 = param_2 + 0x1cf0;
  uVar10 = (uint32_t)*(uint64_t *)(param_2 + 0xe00);
  iVar8 = (int)*(uint64_t *)(param_2 + 0x170);
  uVar12 = (uint32_t)*(uint64_t *)(param_2 + 800);
  uVar9 = uVar12 ^ 0xc81be46f;
  uVar12 = ((0xfbef1a20 - uVar10) * 8 | 0xfbef1a20 - uVar10 >> 0x1d) - uVar12;
  uVar9 = (uVar9 << 4 | uVar9 >> 0x1c) * 0x61a99ff1;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x1ee0);
  bVar3 = bVar4 & 0x1f;
  uVar15 = uVar9 << bVar3 | uVar9 >> 0x20 - bVar3;
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0x1f;
  uVar9 = (-0x7387d027 - *(int *)(param_2 + 0x2030)) * iVar8;
  uVar17 = ~(uint64_t)uVar2;
  uVar16 = ~(uVar9 * 0x2000000 | uVar9 >> 7);
  bVar4 = bVar4 & 0x1f;
  uVar14 = ~(~(uVar10 + 0xd07c44bb) >> bVar4 | ~(uVar10 + 0xd07c44bb) << 0x20 - bVar4);
  uVar18 = ~unaff_RDI;
  uVar9 = (uint32_t)unaff_RDI;
  *(uint64_t *)(param_2 + 0x580) = unaff_RDI ^ uVar17;
  uVar6 = uVar2 ^ unaff_RDI;
  if ((uVar16 << 0x17 | uVar16 >> 9) != 0x12198300) {
    uVar6 = uVar18 | uVar17;
  }
  uVar16 = ~((0x7efa047d - uVar10) * *(int *)(param_2 + 0x170));
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x1c0) & 0x1f;
  bVar5 = (uint8_t)*(uint64_t *)(param_2 + 0xe90) & 0x1f;
  pcVar7 = (code *)((int64_t)(int)(uVar12 >> bVar5 | uVar12 << 0x20 - bVar5) +
                   *(int64_t *)(param_2 + 0x2050));
  lVar13 = ((uint64_t)
            ((uVar10 ^ 0x46368d60) * iVar8 * -0x226b25db + 0x80629264 ^ *(uint32_t *)(param_2 + 0x1be0))
           - 0xa1074c63) * (uint64_t)((uint32_t)uVar18 & uVar2 & uVar9);
  uVar11 = (uint64_t)-uVar9;
  if ((uint64_t)((uVar16 << bVar4 | uVar16 >> 0x20 - bVar4) + 0x8001fd3c) <
      (uint64_t)(int64_t)(int)(uVar14 << 0x12 | uVar14 >> 0xe)) {
    uVar11 = uVar18;
  }
  (*pcVar7)(pcVar7,(*(uint64_t *)(param_2 + 0x580) & ~unaff_RDI) * 0x56ba686b +
                   ((uint64_t)((uint32_t)*(uint64_t *)(param_2 + 0x610) & uVar9) | ~unaff_RDI) *
                   -0x922250b1 + ((uVar18 | uVar17) & unaff_RDI) * -0x290aa512 + lVar13 +
                   (uVar6 | unaff_RDI) * (uint64_t)(uVar15 >> bVar3 | uVar15 << 0x20 - bVar3) +
                   ((uVar11 | uVar17) & unaff_RDI) * -0x6917ab9f,lVar13,
            (uVar1 * 0x1000000 | uVar1 >> 0x28) ^ (uVar1 * 0x8000 | uVar1 >> 0x31) ^ uVar1);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cefcb0  |  RVA: 0x57fcb0  |  Size: 249 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cefcb0(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x490) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cefdb0  |  RVA: 0x57fdb0  |  Size: 249 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cefdb0(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x490) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cefeb0  |  RVA: 0x57feb0  |  Size: 249 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cefeb0(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x490) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4ceffb0  |  RVA: 0x57ffb0  |  Size: 249 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4ceffb0(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  
  pbVar1 = (uint8_t *)(*(int64_t *)(param_2 + 0x2030) + 0x2ec);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf00b0  |  RVA: 0x5800b0  |  Size: 395 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf00b0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  
  uVar2 = ~(uint32_t)CONCAT62((int6)((uint64_t)param_1 >> 0x10),0xbacb);
  uVar1 = (int64_t)
          (int)((0x7ea4678c -
                (((uint32_t)*(uint64_t *)(param_2 + 800) ^ 0x3de8e042) + *(int *)(param_2 + 0xe00))) *
               0x1385937d) + (param_2 + 0x13e0 << 0x23) + param_2 + 0x13e0;
  (*(code *)(&UNK_7fffa558a916 +
            (short)((short)*(uint64_t *)(param_2 + 0x2268) *
                    ((short)*(uint64_t *)(param_2 + 800) + (short)uVar2) + 0x61f0)))
            (uVar2,uVar1 * 8 | uVar1 >> 0x3d);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf0240  |  RVA: 0x580240  |  Size: 1051 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf0240(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint8_t bVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint16_t uVar10;
  int iVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  
  uVar13 = param_2 + 0x1c80;
  *(uint64_t *)(param_2 + 0x580) = uVar13;
  uVar1 = *(uint64_t *)(param_2 + 0x2198);
  uVar2 = *(uint64_t *)(param_2 + 0x1f38);
  *(uint64_t *)(param_2 + 0x1bc8) =
       (uVar13 * 0x1000000 | uVar13 >> 0x28) ^ (uVar13 * 0x8000 | uVar13 >> 0x31);
  iVar11 = (int)CONCAT62((int6)((uint64_t)param_3 >> 0x10),0xd662) * 0x450f;
  bVar5 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0xf;
  uVar10 = (uint16_t)iVar11;
  *(uint64_t *)(param_2 + 0x2050) = 0x7fffa52df00d;
  iVar11 = CONCAT22((short)((uint32_t)iVar11 >> 0x10),uVar10 << bVar5 | uVar10 >> 0x10 - bVar5) + 0x6c1a
  ;
  uVar6 = (int)*(uint64_t *)(param_2 + 0x9a0) + 0x238d5f1a;
  uVar3 = *(uint64_t *)(param_2 + 0xe00);
  bVar5 = (uint8_t)uVar3 & 0x1f;
  uVar6 = (uVar6 << bVar5 | uVar6 >> 0x20 - bVar5) - (int)*(uint64_t *)(param_2 + 800);
  *(int64_t *)(param_2 + 0x670) = (int64_t)(int)(uVar6 * 0x8000000 | uVar6 >> 5);
  uVar8 = ~uVar2;
  *(uint64_t *)(param_2 + 0x10c0) = uVar8 ^ uVar1;
  *(uint64_t *)(param_2 + 0xa50) = (uVar1 | uVar8) * -0x8f51166f + (uVar8 ^ uVar1) * 0x53e92e29;
  uVar13 = param_2 + 0xce0;
  *(int *)(param_2 + 0x1f90) = (int)*(uint64_t *)(param_2 + 0x8b0) - (int)uVar3;
  *(uint64_t *)(param_2 + 0xf30) = uVar2 | uVar1;
  uVar7 = ~uVar1;
  *(uint32_t *)(param_2 + 0x1cd0) = 0xc2e140e3;
  *(uint64_t *)(param_2 + 0x1f0) =
       (uint64_t)
       (((0x51e16f00 - (int)uVar3) * 0x7f14c777 + 0x51b90de5U ^ *(uint32_t *)(param_2 + 0x2030)) -
       *(int *)(param_2 + 800));
  uVar4 = *(uint64_t *)(param_2 + 0x1da0);
  *(uint64_t *)(param_2 + 0xe20) = (uVar2 ^ uVar1) * 0x19353d91;
  *(uint64_t *)(param_2 + 0x1ce0) = uVar1 & uVar2 & *(uint64_t *)(param_2 + 0x1da0);
  (*(code *)(&UNK_7fffa52dab0a +
            (short)~(((uint16_t)*(uint64_t *)(param_2 + 0x1320) | 1) * (short)iVar11)))
            (uVar3,0x3b67e846,iVar11,
             (uVar13 * 0x8000 | uVar13 >> 0x31) ^ (uVar13 * 0x1000000 | uVar13 >> 0x28) ^ uVar13);
  uVar3 = *(uint64_t *)(param_2 + 800);
  uVar13 = uVar1 * uVar2;
  if ((uint64_t)
      (((*(int *)(param_2 + 0x1f90) + -0x250719) * 0x787d4985 ^ (uint32_t)uVar3) + 0x390f21fb) <=
      *(uint64_t *)(param_2 + 0x670)) {
    uVar13 = *(uint64_t *)(param_2 + 0xf30);
  }
  uVar12 = ~*(uint64_t *)(param_2 + 0x1da0);
  uVar9 = uVar8 & *(uint64_t *)(param_2 + 0x2198);
  uVar6 = ((uint32_t)*(uint64_t *)(param_2 + 0x1320) | 1) * *(int *)(param_2 + 0x1cd0);
  bVar5 = (uint8_t)uVar3 & 0x1f;
  (*(code *)((int64_t)(int)~(uVar6 >> bVar5 | uVar6 << 0x20 - bVar5) +
            *(int64_t *)(param_2 + 0x2050)))
            (uVar3,(*(uint64_t *)(param_2 + 0x10c0) & uVar12) * 0x7a420ac1 +
                   uVar9 * 0x3ab3f098 + *(int64_t *)(param_2 + 0xe20) +
                   *(int64_t *)(param_2 + 0xa50) +
                   (uVar8 & uVar7 | uVar12) * 0xfaf38c80 + (uVar7 & uVar2 | uVar12) * 0x1101fdb +
                   ((uVar2 ^ uVar1) & uVar12 | uVar4 & uVar7 & uVar2) * -0x55ad45b2 +
                   ((uVar7 ^ uVar2 ^ uVar12) - *(int64_t *)(param_2 + 0x1ce0)) * 0x7b522a9c +
                   (uVar9 & uVar12) * *(int64_t *)(param_2 + 0x1f0) +
                   ((uVar12 & uVar8 & uVar7) + (uVar13 ^ *(uint64_t *)(param_2 + 0x1da0))) *
                   -0x17645b71c,uVar12,
             *(uint64_t *)(param_2 + 0x1bc8) ^ *(uint64_t *)(param_2 + 0x580));
  uVar13 = *(uint64_t *)(param_2 + 0x1b90);
  if (uVar13 != 0) {
    uVar6 = *(int *)(param_2 + 800) + 0x2500efbd;
    uVar6 = (uVar6 * 0x400000 | uVar6 >> 10) * ((uint32_t)*(uint64_t *)(param_2 + 0x9a0) | 1);
    bVar5 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0x1f;
    (*(code *)((int64_t)(int)((uVar6 << bVar5 | uVar6 >> 0x20 - bVar5) * 0xc407ce5) +
              0x7fffa5692317))
              (*(uint64_t *)(param_2 + 0xe00),0x7fffa5692317,uVar13 >> 0x3d ^ uVar13);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf0660  |  RVA: 0x580660  |  Size: 436 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf0660(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  
  iVar2 = *(int *)((int64_t)
                   (int)(((*(int *)(param_2 + 0x8b0) + -0x3da967d7) * 0x16d81473 ^ 0xd8068b30U) -
                        *(int *)(param_2 + 800)) + 0x7fffa47ce028) + -1;
  *(int *)((int64_t)
           (short)~((short)*(uint32_t *)(param_2 + 0x170) * 0x3162 +
                   ((short)*(uint64_t *)(param_2 + 0xe00) -
                   (short)*(uint32_t *)(param_2 + 0x1e20))) + 0x7fffa47c4360) = iVar2;
  if (iVar2 == 0) {
    LOCK();
    *(uint32_t *)
     ((int64_t)
      (int)(((*(uint32_t *)(param_2 + 800) ^ 0xe9c6c430) * -0x28b17b7d ^ 0x403829af) -
           *(int *)(param_2 + 0x1e20)) + 0x7fffa47ce7fb) = 0;
    UNLOCK();
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xcc0) & 0x1f;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)
               (int)~(((-0x4eb58a0 << bVar1 | 0xfb14a760U >> 0x20 - bVar1) ^
                      *(uint32_t *)(param_2 + 0xe00)) * -0x491b4173) + 0x7fffa47cf079);
  }
  *(uint64_t *)(param_2 + 0x1eb0) = *(uint64_t *)(param_2 + 0x1ca0);
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf0820  |  RVA: 0x580820  |  Size: 288 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf0820(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  
  uVar1 = *(uint64_t *)(param_2 + 0x1eb0);
  if (uVar1 != 0) {
    uVar3 = 0x830f3169 - *(int *)(param_2 + 800);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0x1f;
    uVar3 = (uVar3 << bVar2 | uVar3 >> 0x20 - bVar2) - *(int *)(param_2 + 0x1e20);
    (*(code *)((int64_t)(int)(uVar3 * 0x100 | uVar3 >> 0x18) + 0x7fffa5694289))
              (*(uint64_t *)(param_2 + 0xe00),0x7fffa5694289,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf0940  |  RVA: 0x580940  |  Size: 282 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf0940(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  uint32_t uVar2;
  
  uVar2 = *(uint32_t *)(param_2 + 0x1e20) ^ 0x7e2bbef1;
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0x1f;
  (*(code *)(&UNK_7fffa5435006 + (int)(0x23d279f8 - (uVar2 >> bVar1 | uVar2 << 0x20 - bVar1))))
            (*(uint64_t *)(param_2 + 0xe00),
             &UNK_7fffa5435006 + (int)(0x23d279f8 - (uVar2 >> bVar1 | uVar2 << 0x20 - bVar1)),
             *(int64_t *)(param_2 + 0xbf8) - (*(int64_t *)(param_2 + 0xbf8) << 0x21));
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf0a60  |  RVA: 0x580a60  |  Size: 429 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf0a60(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint16_t uVar4;
  int iVar5;
  uint32_t uVar6;
  uint16_t uVar7;
  
  uVar4 = 0x3c04 - (short)*(uint64_t *)(param_2 + 800);
  uVar1 = *(uint64_t *)(param_2 + 0x1cd0);
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0xf;
  uVar7 = (uint16_t)((int)uVar1 + -0x1b98 + (int)*(uint64_t *)(param_2 + 0xe00));
  iVar5 = *(int *)((int64_t)
                   (short)((uVar4 * 0x800 | uVar4 >> 5) + (short)*(uint32_t *)(param_2 + 0x2050) ^
                          (uint16_t)*(uint64_t *)(param_2 + 0xe00)) + 0x7fffa478654a) + -1;
  *(int *)((int64_t)(short)(uVar7 << bVar3 | uVar7 >> 0x10 - bVar3) + 0x7fffa4789f37) = iVar5;
  if (iVar5 == 0) {
    uVar2 = *(uint64_t *)(param_2 + 800);
    bVar3 = (uint8_t)uVar2 & 0xf;
    uVar4 = ~(0x6c70 << bVar3 | 0x6c70U >> 0x10 - bVar3);
    bVar3 = (uint8_t)uVar1 & 0xf;
    LOCK();
    *(uint32_t *)((int64_t)(short)(uVar4 << bVar3 | uVar4 >> 0x10 - bVar3) + 0x7fffa4789451) = 0;
    UNLOCK();
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0x1f;
    uVar6 = (0x59a40accU >> bVar3 | 0x59a40acc << 0x20 - bVar3) * *(int *)(param_2 + 0x490);
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(int)((uVar6 * 0x40000000 | uVar6 >> 2) ^ (uint32_t)uVar2) + 0x7fffa4793ef4);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf0c10  |  RVA: 0x580c10  |  Size: 450 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf0c10(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)*(uint64_t *)(param_2 + 0xe00);
  bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0x1f;
  uVar1 = *(uint64_t *)(param_2 + 0x580);
  iVar7 = (int)*(uint64_t *)(param_2 + 800);
  uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x1cd0);
  iVar4 = *(int *)((int64_t)
                   (int)(((int)uVar1 - iVar7) + (0x7fc58900 << bVar3 | 0x7fc58900U >> 0x20 - bVar3))
                  + 0x7fffa4790ba5) + -1;
  *(int *)((int64_t)(int)(((iVar6 << 0x1e | iVar6 + 0xc958ea04U >> 2) + uVar5 ^ 0xd037bca) + iVar7)
          + 0x7fffa4795db3) = iVar4;
  if (iVar4 == 0) {
    uVar5 = (uVar5 ^ 0x4a3f6be) * *(int *)(param_2 + 0x170) + 0x4b6be696;
    uVar2 = *(uint64_t *)(param_2 + 0xe00);
    bVar3 = (uint8_t)uVar2 & 0x1f;
    LOCK();
    *(uint32_t *)((int64_t)(int)(uVar5 << bVar3 | uVar5 >> 0x20 - bVar3) + 0x7fffa4791114) = 0;
    UNLOCK();
    uVar5 = *(uint32_t *)(param_2 + 800) ^ 0x56090e82;
    bVar3 = (uint8_t)uVar1 & 0x1f;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(int)(((uVar5 << bVar3 | uVar5 >> 0x20 - bVar3) - (int)uVar2) + 0x22997ec7)
               + 0x7fffa4791663);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf0de0  |  RVA: 0x580de0  |  Size: 454 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf0de0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t bVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  int iVar6;
  
  uVar3 = (uint16_t)*(uint64_t *)(param_2 + 0xa50);
  uVar5 = 0xa310 - uVar3;
  bVar2 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0xf;
  iVar6 = *(int *)((int64_t)
                   (int)((*(int *)(param_2 + 0x1bc8) * 0x1aa7b8f8 + 0x6dcc5492) *
                         ((uint32_t)*(uint64_t *)(param_2 + 0x580) | 1) +
                        (int)*(uint64_t *)(param_2 + 800)) + 0x7fffa479234c) + -1;
  *(int *)((int64_t)
           (short)((uint16_t)*(uint64_t *)(param_2 + 0xe00) ^
                  (uVar5 >> bVar2 | uVar5 << 0x10 - bVar2)) + 0x7fffa478820a) = iVar6;
  if (iVar6 == 0) {
    uVar3 = uVar3 ^ 0xe68a;
    uVar1 = *(uint64_t *)(param_2 + 0xe00);
    bVar2 = (uint8_t)uVar1 & 0xf;
    uVar3 = uVar3 >> bVar2 | uVar3 << 0x10 - bVar2;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 800) & 0xf;
    uVar3 = uVar3 << bVar2 | uVar3 >> 0x10 - bVar2;
    LOCK();
    *(uint32_t *)((int64_t)(short)(uVar3 << 0xe | uVar3 >> 2) + 0x7fffa478b9d1) = 0;
    UNLOCK();
    uVar4 = (uint32_t)uVar1 ^ 0xbeea4212;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)
               (int)((int)*(uint64_t *)(param_2 + 0x2050) +
                     (~uVar4 << 1 | (uint32_t)(-1 < (int)uVar4)) + 0x208f3a3a) + 0x7fffa478fcb5);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf0fb0  |  RVA: 0x580fb0  |  Size: 506 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf0fb0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint16_t uVar6;
  uint32_t uVar7;
  uint16_t uVar8;
  
  uVar7 = *(int *)(param_2 + 800) + 0x1c2c1175;
  uVar8 = (short)*(uint64_t *)(param_2 + 0x170) *
          ((uint16_t)*(uint32_t *)(param_2 + 0xa50) ^ 0xe64f) ^ 0x60f6;
  bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0xe00);
  bVar3 = bVar4 & 0xf;
  uVar1 = *(uint64_t *)(param_2 + 0x580);
  bVar5 = (uint8_t)uVar1 & 0x1f;
  uVar8 = (uVar8 << bVar3 | uVar8 >> 0x10 - bVar3) * -0x27c1;
  uVar7 = (uVar7 >> bVar5 | uVar7 << 0x20 - bVar5) ^ 0x9af6339a;
  bVar4 = bVar4 & 0x1f;
  uVar7 = *(int *)((int64_t)(int)(uVar7 << bVar4 | uVar7 >> 0x20 - bVar4) + 0x7fffa479081d) - 1;
  *(uint32_t *)((int64_t)
            (int)(((int)*(uint64_t *)(param_2 + 0x170) * 0x1f4b66d9 + 0x4ced0d97U ^
                  (uint32_t)*(uint64_t *)(param_2 + 0xe00)) * *(int *)(param_2 + 0x1f70)) +
           0x7fffa4791569) = uVar7;
  if (uVar7 == uVar8) {
    uVar7 = (uint32_t)*(uint64_t *)(param_2 + 0xe00);
    uVar2 = *(uint64_t *)(param_2 + 800);
    bVar3 = (uint8_t)uVar2 & 0xf;
    uVar6 = (uint16_t)(0x5b54 - uVar7);
    uVar6 = (uVar6 << bVar3 | uVar6 >> 0x10 - bVar3) + 0xdb86;
    bVar3 = (uint8_t)*(uint64_t *)(param_2 + 0x2050) & 0xf;
    LOCK();
    *(uint32_t *)((int64_t)(short)(uVar6 << bVar3 | uVar6 >> 0x10 - bVar3) + 0x7fffa478adcd) = 0;
    UNLOCK();
    uVar7 = ((uVar7 ^ 0x3b595695) - (int)uVar2) + (int)uVar1;
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)(int)(uVar7 * 0x20000 | uVar7 >> 0xf) + 0x7fffa478e387,0x7fffa478e37f,uVar8
               ,0);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf11b0  |  RVA: 0x5811b0  |  Size: 302 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf11b0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = *(uint64_t *)(param_2 + 0x420);
  if (*(int64_t *)(param_2 + 0x558) != 0) {
    (*(code *)(&UNK_7fffa5091ec3 +
              (*(int *)(param_2 + 800) + 0x65272ce3) * *(int *)(param_2 + 0x1bc8)))();
  }
  *(uint64_t *)(param_2 + 0x1f60) = uVar1;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf12e0  |  RVA: 0x5812e0  |  Size: 289 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf12e0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  code *pcVar2;
  
  uVar1 = *(uint64_t *)(param_2 + 0x1f60);
  if (uVar1 != 0) {
    pcVar2 = (code *)((int64_t)(0x1602ba22 - (*(int *)(param_2 + 800) + -0x5a7cfb00)) +
                     0x7fffa569572c);
    (*pcVar2)(param_1,pcVar2,uVar1 >> 0x3d ^ uVar1);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4cf1410  |  RVA: 0x581410  |  Size: 436 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4cf1410(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  int iVar2;
  uint16_t uVar3;
  
  uVar3 = 0x6f5a - (short)*(uint64_t *)(param_2 + 800);
  bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xe00) & 0xf;
  iVar2 = *(int *)((int64_t)
                   (short)((short)*(uint64_t *)(param_2 + 0x920) *
                          (uVar3 >> bVar1 | uVar3 << 0x10 - bVar1)) + 0x7fffa478d0d6) + -1;
  *(int *)((int64_t)
           (int)(((uint32_t)*(uint64_t *)(param_2 + 0x580) | 1) *
                (((uint32_t)*(uint64_t *)(param_2 + 0xe00) ^ 0xc0afc143) +
                 (int)*(uint64_t *)(param_2 + 800) ^ 0xfbd3d2de)) + 0x7fffa47916f2) = iVar2;
  if (iVar2 == 0) {
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0x2050) & 0xf;
    uVar3 = (uint16_t)((*(uint32_t *)(param_2 + 0xe00) ^ 0x103f5) - *(int *)(param_2 + 800));
    LOCK();
    *(uint32_t *)((int64_t)(short)~(uVar3 >> bVar1 | uVar3 << 0x10 - bVar1) + 0x7fffa478d9c3) = 0
    ;
    UNLOCK();
    (*(code *)&DAT_7ff8504eba90)
              ((int64_t)
               ~(~((int)*(uint64_t *)(param_2 + 0x1f0) * 0x45970365) * *(int *)(param_2 + 0x170))
               + 0x7fffa4794a97);
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf15d0  |  RVA: 0x5815d0  |  Size: 1262 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf15d0(void)

{
  uint16_t uVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint32_t uVar5;
  uint8_t bVar6;
  int64_t lVar7;
  uint32_t unaff_EBX;
  int64_t lVar8;
  uint8_t bVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint8_t bVar14;
  uint8_t bVar15;
  uint32_t unaff_R15D;
  
  uVar5 = (unaff_EBX ^ unaff_R15D) * -0x53d98b74 + (~unaff_EBX ^ unaff_R15D) * 0x3d0789a5 +
          (unaff_R15D ^ ~unaff_EBX) * 0x6f1eeae7;
  bVar3 = (uint8_t)uVar5;
  *(uint8_t *)((int64_t)(int)(0x53d88e09 - uVar5) + 0x7fffa47cca5c) =
       '\0' << (bVar3 & 7) | 0U >> 8 - (bVar3 & 7);
  lVar8 = (int64_t)(int)(((uVar5 ^ 0x3b6d9ca6) << 0x1d | (uVar5 ^ 0x3b6d9ca6) >> 3) + 0xb2e8f2fc);
  *(uint8_t (*) [16])(lVar8 + 0x7fffa47c5715) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar8 + 0x7fffa47c5705) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar8 + 0x7fffa47c5725) = 0;
  *(uint64_t *)((int64_t)(int)(0x53d8c2b3 - uVar5) + 0x7fffa47c95ed) =
       (uint64_t)((uVar5 ^ 0x53d98b74) * 0x367da4b8 | (uVar5 ^ 0x53d98b74) * -0x59304b69 >> 0x1d);
  lVar8 = rdtsc();
  lVar8 = lVar8 * 0x82e40e7d43dd8c9 + 1;
  lVar12 = 3;
  while( true ) {
    lVar8 = lVar8 * 0x82e40e7d43dd8c9 + 1;
    *(char *)(lVar12 + 0x7fffa47bcce5) = (char)((uint64_t)lVar8 >> 0x20);
    if (lVar12 == 0x4f) break;
    lVar7 = lVar8 * 0x82e40e7d43dd8c9 + 1;
    lVar8 = lVar7 * 0x82e40e7d43dd8c9 + 1;
    *(char *)(lVar12 + (int64_t)(int)((-0x22dd7f5a - uVar5) * -0x49dcf0a9) + 0x7fffa47c8ae9) =
         (char)((uint64_t)lVar8 >> 0x20);
    lVar8 = lVar8 * 0x82e40e7d43dd8c9 + 1;
    *(char *)(lVar12 + (int64_t)
                       (short)((0x42bc << (bVar3 & 0xf) | 0x42bcU >> 0x10 - (bVar3 & 0xf)) * 0x2865)
                       + 0x7fffa47be894) = (char)((uint64_t)lVar8 >> 0x20);
    *(char *)(lVar12 + ((int64_t)(int)((uVar5 | 1) * 0x612472c0) ^ 0x4b498c9eU) + 0x7fffa47c8f88) =
         (char)((uint64_t)lVar7 >> 0x20);
    lVar12 = lVar12 + 4;
  }
  uVar1 = (uint16_t)uVar5;
  lVar8 = (int64_t)(short)(0x27b9 - uVar1);
  uVar10 = (uint32_t)*(uint8_t *)((int64_t)(short)((uVar1 | 1) * -0x697) + 0x7fffa47bccf4) * 0x33333334;
  uVar11 = uVar10 | 0x33333334;
  if ((-0x41c8f164 - uVar5) * 0xf8572d1 == -0x9781c58) {
    uVar11 = uVar10 + 0x33333334;
  }
  uVar13 = (uint64_t)uVar11 * 5 >> 0x20;
  bVar6 = *(uint8_t *)((int64_t)(int)((-0x3cdc1bc - uVar5) * 0x5f76d5e5) + 0x7fffa47cc91d);
  bVar9 = *(uint8_t *)(((int64_t)(int)(uVar5 + 0x7d8f039f) ^ 0x2e97ad2dU) + 0x7fffa47caaf4);
  bVar4 = *(uint8_t *)((int64_t)(int)((uVar5 | 1) * 0x14993212 + 0x2089c267) + 0x7fffa47c6290);
  bVar2 = ~*(uint8_t *)((int64_t)(int)(uVar5 + 0xac25c215) + 0x7fffa47c7fa6);
  bVar15 = *(uint8_t *)((int64_t)(int)((uVar5 ^ 0x6c2640d1) << 2 | (uVar5 ^ 0x6c2640d1) >> 0x1e) +
                    0x7fffa47c9e9c);
  bVar14 = ~*(uint8_t *)(((int64_t)(short)((uVar1 + 0x151c) * -0x5a35) ^ 0xfffffffffffff722U) +
                     0x7fffa47bf81c);
  *(uint8_t *)(lVar8 + 0x7fffa47c30b9 + uVar13 * 8) = bVar2 << 3 | bVar2 >> 5;
  *(uint8_t *)(lVar8 + 0x7fffa47c30b8 + uVar13 * 8) = bVar14 << 3 | bVar14 >> 5;
  bVar2 = bRam00007fffa47bcd2c;
  bVar6 = ~bVar6;
  *(uint8_t *)(lVar8 + 0x7fffa47c30b7 + uVar13 * 8) = bVar6 << 3 | bVar6 >> 5;
  *(uint8_t *)(lVar8 + 0x7fffa47c30b6 + uVar13 * 8) = ~bVar2 << 3 | (uint8_t)~bVar2 >> 5;
  bVar9 = ~bVar9;
  bVar6 = *(uint8_t *)((int64_t)(short)(0x15ab - uVar1) + 0x7fffa47c42fc);
  bVar15 = ~bVar15;
  *(uint8_t *)(lVar8 + 0x7fffa47c30ba + uVar13 * 8) = bVar15 << 3 | bVar15 >> 5;
  bVar4 = ~bVar4;
  *(uint8_t *)(lVar8 + 0x7fffa47c30bc + uVar13 * 8) = bVar9 << 3 | bVar9 >> 5;
  bVar6 = ~bVar6;
  *(uint8_t *)(lVar8 + 0x7fffa47c30bd + uVar13 * 8) = bVar6 << 3 | bVar6 >> 5;
  *(uint8_t *)(lVar8 + 0x7fffa47c30bb + uVar13 * 8) = bVar4 << 3 | bVar4 >> 5;
  *(char *)(((int64_t)(short)(0x429c << (bVar3 & 0xf) | 0x429cU >> 0x10 - (bVar3 & 0xf)) ^
            0xffffffffffffa73eU) + 0x7fffa47c3df7) = (char)((uint64_t)uVar11 * 5 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf1ac0  |  RVA: 0x581ac0  |  Size: 715 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf1ac0(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  
  bRam00007fffa47bbc1e = 0;
  uRam00007fffa47bbc3f = 0;
  uRam00007fffa47bbc47 = 0;
  uRam00007fffa47bbc2f = 0;
  uRam00007fffa47bbc37 = 0;
  uRam00007fffa47bbc4f = 0;
  uRam00007fffa47bbc61 = 0;
  uVar3 = rdtsc();
  lVar5 = (CONCAT44(0x7fff,(int)(uVar3 >> 0x20)) << 0x20 | uVar3 & 0xffffffff) * 0x534301a0b09d278;
  lVar6 = 0;
  do {
    lVar4 = lVar5 * 0x534301a0b09d278 + 0x534301a0b09d278;
    lVar7 = lVar4 * 0x534301a0b09d278 + 0x534301a0b09d278;
    lVar5 = lVar7 * 0x34301a0b09d278 + 0x534301a0b09d278;
    lVar1 = lVar6 + 3;
    *(char *)(lVar6 + 0x7fffa47bbc11) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bbc10) = (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47bbc0f) = (char)((uint64_t)lVar4 >> 0x20);
    lVar6 = lVar1;
  } while (lVar1 != 0x5a);
  uVar2 = (uint32_t)bRam00007fffa47bbc1e * 0x33333334 + 0x33333334;
  uVar8 = (uint64_t)uVar2 * 4 + (uint64_t)uVar2;
  uVar3 = uVar8 >> 0x20;
  *(uint32_t *)(uVar3 * 8 + 0x7fffa47bbc2f) = ~(uint32_t)uRam00007fffa47bbc61;
  *(uint32_t *)(uVar3 * 8 + 0x7fffa47bbc33) = ~uRam00007fffa47bbc61._4_4_;
  bRam00007fffa47bbc1e = (char)(uVar8 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf1df0  |  RVA: 0x581df0  |  Size: 5998 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa4cf1df0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
                         uint64_t param_5,uint64_t param_6,uint8_t param_7)

{
  int64_t *plVar1;
  char *pcVar2;
  uint8_t bVar3;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  uint16_t uVar7;
  uint8_t auVar8 [15];
  uint8_t auVar9 [15];
  uint8_t auVar10 [15];
  uint8_t auVar11 [15];
  uint8_t auVar12 [15];
  uint32_t in_EAX;
  uint32_t uVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint8_t bVar17;
  int iVar18;
  uint64_t *puVar19;
  uint8_t bVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  int64_t lVar23;
  uint32_t uVar24;
  int iVar25;
  uint64_t uVar26;
  int64_t unaff_RBP;
  uint32_t unaff_ESI;
  uint64_t uVar27;
  uint64_t *puVar28;
  uint32_t uVar29;
  uint64_t uVar30;
  short sVar31;
  uint64_t *puVar32;
  uint16_t uVar33;
  int64_t in_R10;
  int64_t lVar34;
  char cVar35;
  uint64_t uVar36;
  uint64_t *puVar37;
  uint64_t *puVar38;
  uint16_t uVar39;
  uint32_t unaff_R12D;
  int64_t lVar40;
  uint32_t uVar41;
  int iVar42;
  uint8_t bVar43;
  uint32_t uVar44;
  uint32_t uVar45;
  uint64_t *puVar46;
  uint64_t uVar47;
  float10 in_ST0;
  char cVar48;
  uint8_t uVar51;
  uint8_t uVar52;
  char cVar53;
  uint8_t uVar54;
  char cVar55;
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar56 [16];
  uint64_t *puStackX_20;
  int64_t lStack0000000000000140;
  uint64_t uStack0000000000000148;
  uint64_t in_stack_00000150;
  int iStack000000000000015c;
  int64_t lStack0000000000000160;
  uint64_t uStack0000000000000168;
  uint64_t *puStack0000000000000170;
  uint64_t *puStack0000000000000180;
  uint64_t *puStack0000000000000190;
  uint64_t *puStack0000000000000198;
  int64_t lStack00000000000001a0;
  uint64_t uStack_8;
  
  **(uint8_t **)(param_1 * -0x7ffffc00001fffff) =
       *(uint8_t *)(*(int64_t *)((uint64_t *)(param_1 * -0x7ffffc00001fffff))[1] + -1);
  uStack_8 = CONCAT44(0xa9002380,in_EAX);
  puStack0000000000000180 =
       (uint64_t *)((uint64_t)~(uint32_t)(uint16_t)((short)in_R10 + 0xb828) & 0xffff);
  uVar15 = puStack0000000000000180[0x1fe0000000];
  if (*(int64_t *)(uVar15 + 0x30) != -0x604146b14853d) {
                    /* WARNING: Read-only address (ram,0x7fffa56b8670) is written */
    return uStack_8;
  }
  *(short *)(unaff_RBP + -0x295a3fc) = (short)in_ST0;
  puStack0000000000000190 = param_4;
  bVar43 = (uint8_t)unaff_R12D;
  bVar3 = (uint8_t)unaff_ESI;
  uVar33 = (uint16_t)unaff_R12D;
  if (((uVar15 - 0x185ded6d) * 0x2000000 | uVar15 - 0x185ded6d >> 0x27) == 0xfffbb17f9fffffff) {
    uVar44 = (int)uVar15 + 0x19f05dc5;
    uVar29 = *(uint32_t *)(in_R10 + 0x10c);
    uVar45 = 4;
    if (uVar29 < 4) {
      uVar45 = uVar29;
    }
    bVar20 = (uint8_t)uVar45;
    bVar6 = 4 < uVar29;
    uVar45 = ~(uVar44 >> (bVar43 & 0x1f) | uVar44 << 0x20 - (bVar43 & 0x1f)) + unaff_ESI;
    uVar45 = uVar45 * 0x800 | uVar45 >> 0x15;
  }
  else {
    uVar29 = (unaff_R12D + 0x9cc502bb) * 8 | unaff_R12D + 0x9cc502bb >> 0x1d;
    uVar44 = uVar29 >> (bVar3 & 0x1f) | uVar29 << 0x20 - (bVar3 & 0x1f);
    uVar29 = *(uint32_t *)(in_R10 + 0x10c);
    uVar45 = 4;
    if (uVar29 < 4) {
      uVar45 = uVar29;
    }
    bVar20 = (uint8_t)uVar45;
    uVar45 = uVar44 << 5 | uVar44 >> 0x1b;
    bVar6 = (uint16_t)~((uVar33 ^ 0x8be6) << (bVar3 & 0xf) | (uVar33 ^ 0x8be6) >> 0x10 - (bVar3 & 0xf)
                     ) < uVar29;
  }
  uVar15 = *puStack0000000000000180;
  iStack000000000000015c = 0;
  if (bVar6) {
    iStack000000000000015c = 1 << ((char)uVar29 - 4U & 0x1f);
  }
  uStack0000000000000168 =
       uVar15 * -0x30e4432345000000 >>
       (0x42U - *(char *)(*(uint64_t **)(in_R10 + 0xf8) + 0x21) & 0x3f);
  uVar13 = 1 << (*(uint8_t *)(in_R10 + 0x100) & 0x1f);
  uVar24 = 1 << (bVar20 & 0x1f);
  lStack0000000000000160 = *(int64_t *)(in_R10 + 8);
  uStack0000000000000148 = (int64_t)puStack0000000000000180 - lStack0000000000000160;
  uVar14 = (uint32_t)uStack0000000000000148;
  uVar29 = *(uint32_t *)(in_R10 + 0x1c);
  uVar44 = uVar14 - uVar13;
  if (uVar14 - uVar29 <= uVar13) {
    uVar44 = uVar29;
  }
  lVar4 = *(int64_t *)(in_R10 + 0x70);
  lVar34 = *(int64_t *)(in_R10 + 0x38);
  lStack00000000000001a0 = lVar34;
  if (*(int *)(in_R10 + 0x28) != 0) {
    uVar44 = uVar29;
  }
  uVar29 = *(uint32_t *)(in_R10 + 0x18);
  puStack0000000000000198 = *(uint64_t **)(in_R10 + 0xf8);
  uVar47 = *(uint64_t *)(in_R10 + 0x60);
  bVar20 = (uint8_t)uVar45;
  uVar7 = (uint16_t)unaff_ESI;
  cVar48 = (char)*(uint32_t *)(in_R10 + 0x34);
  if (*(int *)(in_R10 + 300) == 0) {
    uVar13 = *(uint32_t *)(in_R10 + 0x2c);
    uVar15 = (uint64_t)uVar13;
    in_stack_00000150 = CONCAT44(in_stack_00000150._4_4_,uVar24);
    lVar23 = lVar34;
    lVar40 = lVar4;
    if (0x180 < uVar14 - uVar13) {
      if (uVar13 < 0xffffffa0 !=
          ((int64_t)
           (int)((0x34d87388 - unaff_R12D >> (bVar3 & 0x1f) |
                 0x34d87388 - unaff_R12D << 0x20 - (bVar3 & 0x1f)) ^ 0xdf44beff) ==
          (uint64_t)(unaff_R12D + unaff_ESI + 0x865c10c1))) {
        do {
          uVar36 = (uint64_t)((uint32_t)uVar15 & 7);
          cVar35 = (((bVar43 ^ 0x37) >> (bVar20 & 7) | (bVar43 ^ 0x37) << 8 - (bVar20 & 7)) - bVar3)
                   + -0x5b;
          uVar22 = *(uint32_t *)(in_R10 + 0x40 + uVar36 * 4);
          *(int *)(in_R10 + 0x40 + uVar36 * 4) =
               (int)((*(int64_t *)(lStack0000000000000160 + 8 + uVar15) * -0x30e4432345000000 ^
                     *(uint64_t *)(in_R10 + 0x60)) >> (0x38U - cVar48 & 0x3f));
          uVar36 = (uint64_t)(uVar22 >> 4 & 0xfffffff0);
          lVar23 = 0xf;
          if ((uint8_t)(*(uint8_t *)(lVar34 + uVar36) & 0xf) != (uint8_t)(cVar35 * '\x02' | cVar35 < '\0')) {
            lVar23 = 0;
          }
          lVar23 = lVar23 + (uint64_t)(*(uint8_t *)(lVar34 + uVar36) - 1 & 0xf);
          *(char *)(lVar34 + uVar36) = (char)lVar23;
          *(char *)(lVar34 + uVar36 + lVar23) = (char)uVar22;
          *(uint32_t *)(lVar4 + uVar36 * 4 + lVar23 * 4) = (uint32_t)uVar15;
          uVar15 = uVar15 + 1;
        } while (uVar13 + 0x60 != uVar15);
        lVar23 = *(int64_t *)(in_R10 + 0x38);
        lVar40 = *(int64_t *)(in_R10 + 0x70);
      }
      uVar22 = (unaff_ESI | 1) * (-0x7934f539 - uVar45) ^ unaff_R12D;
      uVar13 = uVar14 - 0x20;
      if (~(((uVar45 - unaff_R12D) + 0x28c17cc2) * (unaff_ESI | 1)) <=
          (uVar22 << 0xf | uVar22 >> 0x11)) {
        uVar13 = uVar14 | 0xffffffe0;
      }
      uVar15 = (uint64_t)uVar13;
      plVar1 = (int64_t *)(lStack0000000000000160 + uVar15);
      uVar21 = ((int)(int64_t *)((int64_t)puStack0000000000000180 + 1U) - (int)plVar1) + 1;
      uVar22 = 8;
      if (uVar21 < 8) {
        uVar22 = uVar21;
      }
      uVar21 = 0;
      if (plVar1 <= (int64_t *)((int64_t)puStack0000000000000180 + 1U)) {
        uVar21 = uVar22;
      }
      uVar22 = uVar21 | uVar13;
      if ((int64_t)(int)(((unaff_R12D + 0x629ab721) * 0x1b78ebc7 ^ unaff_ESI) - uVar45) <
          (int64_t)
          (uint64_t)
          (((0x9322ed5 - unaff_ESI) * 0x20000000 | 0x9322ed5 - unaff_ESI >> 3) +
          (uVar45 - unaff_R12D))) {
        uVar22 = uVar13 + uVar21;
      }
      if (uVar13 < uVar22) {
        uVar36 = *(uint64_t *)(in_R10 + 0x60);
        bVar17 = 0x38 - (char)*(uint32_t *)(in_R10 + 0x34);
        uVar39 = ~((uVar7 | 1) * 0xed4);
        if ((uVar21 & 1) !=
            ((uint16_t)(uVar39 >> (bVar20 & 0xf) | uVar39 << 0x10 - (bVar20 & 0xf)) + unaff_R12D &
            0xffff)) {
          uVar15 = uVar15 + 1;
          *(int *)(in_R10 + 0x40 + (uint64_t)(uVar13 & 7) * 4) =
               (int)((*plVar1 * -0x30e4432345000000 ^ uVar36) >> (bVar17 & 0x3f));
        }
        if (uVar21 != 1) {
          do {
            uVar21 = (uint32_t)uVar15;
            *(int *)(in_R10 + 0x40 + (uint64_t)(uVar21 & 7) * 4) =
                 (int)((*(int64_t *)(lStack0000000000000160 + uVar15) * -0x30e4432345000000 ^
                       uVar36) >> (bVar17 & 0x3f));
            uVar30 = *(uint64_t *)(lStack0000000000000160 + 1 + uVar15);
            uVar15 = uVar15 + 2;
            *(int *)(in_R10 + 0x40 + (uint64_t)(uVar21 + 1 & 7) * 4) =
                 (int)(((uVar30 & 0xffffffff) * 0xbb000000 +
                        ((uVar30 & 0xffffffff) * 0xcf1bbcdc + (uVar30 >> 0x20) * 0xbb000000 << 0x20)
                       ^ uVar36) >> (bVar17 & 0x3f));
          } while (uVar22 != (uint32_t)uVar15);
        }
      }
    }
    auVar49 = _DAT_7fffa56b8670;
    if (uVar13 < uVar14) {
      lVar5 = *(int64_t *)(in_R10 + 8);
      uVar22 = (unaff_R12D ^ 0xe481edb3) * (unaff_ESI | 1);
      uVar36 = (uint64_t)uVar13;
      bVar17 = 0x38 - (char)*(uint32_t *)(in_R10 + 0x34);
      uVar15 = (uStack0000000000000148 << 0x20) - uStack0000000000000148;
      if ((int64_t)(int)(((unaff_ESI | 1) * 0x7ed8a09c - uVar45 ^ 0xdf7768db) * -0x48c49d65) <
          (int64_t)(uint64_t)((uVar22 * 4 | uVar22 >> 0x1e) * -0x749bac11 ^ uVar45)) {
        uVar15 = uStack0000000000000148 & 0xffffffff;
      }
      while( true ) {
        if ((unaff_R12D - unaff_ESI) + uVar45 + 0x81e830ef <
            ((0x8516ca60U >> (bVar3 & 0x1f) | -0x7ae935a0 << 0x20 - (bVar3 & 0x1f)) - unaff_R12D ^
            uVar45)) {
          uVar30 = *(int64_t *)(lVar5 + 8 + uVar36) * -0x30e4432345000000 ^
                   *(uint64_t *)(in_R10 + 0x60);
          uVar13 = ((unaff_ESI ^ 0x1cca99b7) - uVar45) + 0x296e048e;
          uVar41 = (int)(uVar30 >> (bVar17 & 0x3f));
          if ((int64_t)(uint64_t)((unaff_ESI + 0xf3b61064 ^ unaff_R12D) + 0xbc929df5 ^ uVar45) <
              (int64_t)(int)(uVar13 << (bVar43 & 0x1f) | uVar13 >> 0x20 - (bVar43 & 0x1f))) {
            uVar41 = (int)((int64_t)uVar30 >> (bVar17 & 0x3f));
          }
        }
        else {
          uVar41 = (uint32_t)
                   ((*(int64_t *)(lVar5 + 8 + uVar36) * -0x30e4432345000000 ^
                    *(uint64_t *)(in_R10 + 0x60)) >> (bVar17 & 0x3f));
        }
        uVar30 = (uint64_t)((uint32_t)uVar36 & 7);
        uVar13 = *(uint32_t *)(in_R10 + 0x40 + uVar30 * 4);
        uVar26 = (uint64_t)(uVar13 >> 4 & 0xfffffff0);
        *(uint32_t *)(in_R10 + 0x40 + uVar30 * 4) = uVar41;
        iVar42 = 0xf;
        if ((*(uint8_t *)(lVar23 + uVar26) & 0xf) != 1) {
          iVar42 = 0;
        }
        auVar9._9_6_ = 0;
        auVar9._0_9_ = SUB159(ZEXT815(0),6);
        auVar10._10_5_ = 0;
        auVar10._0_10_ = SUB1510(auVar9 << 0x30,5);
        auVar11._11_4_ = 0;
        auVar11._0_11_ = SUB1511(auVar10 << 0x28,4);
        auVar12._12_3_ = 0;
        auVar12._0_12_ = SUB1512(auVar11 << 0x20,3);
        auVar8._2_13_ = SUB1513(auVar12 << 0x18,2);
        auVar8._0_2_ = (uint16_t)(uint8_t)(*(uint8_t *)(lVar23 + uVar26) - 1) & auVar49._0_2_;
        uVar22 = auVar8._0_4_ + iVar42;
        *(char *)(lVar23 + uVar26) = (char)uVar22;
        *(char *)((uint64_t)uVar22 + lVar23 + uVar26) = (char)uVar13;
        *(uint32_t *)(lVar40 + uVar26 * 4 + (uint64_t)uVar22 * 4) = (uint32_t)uVar36;
        if (uVar15 - 1 == uVar36) break;
        uVar36 = uVar36 + 1;
      }
    }
    else {
      uVar15 = uStack0000000000000148 & 0xffffffff;
    }
    *(uint32_t *)(in_R10 + 0x2c) = uVar14;
    uVar13 = *(uint32_t *)(in_R10 + 0x40 + (uint64_t)(uVar14 & 7) * 4);
    *(int *)(in_R10 + 0x40 + (uint64_t)(uVar14 & 7) * 4) =
         (int)((uVar47 ^ *(int64_t *)(lStack0000000000000160 + 8 + uVar15) * -0x30e4432345000000)
              >> (0x38U - cVar48 & 0x3f));
  }
  else {
    *(uint32_t *)(in_R10 + 0x2c) = uVar14;
    uVar13 = (uint32_t)((uVar47 ^ uVar15 * -0x30e4432345000000) >> (0x38U - cVar48 & 0x3f));
  }
  uVar54 = (uint8_t)(uVar13 >> 0x18);
  uVar52 = (uint8_t)(uVar13 >> 0x10);
  uVar51 = (uint8_t)(uVar13 >> 8);
  auVar49._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar54,uVar54),uVar52),CONCAT14(uVar52,uVar13)) >> 0x20);
  auVar49[3] = uVar51;
  auVar49[2] = uVar51;
  auVar49[0] = (uint8_t)uVar13;
  auVar49[1] = auVar49[0];
  auVar49._8_8_ = 0;
  auVar50 = pshuflw(auVar49,auVar49,0);
  uVar15 = (uint64_t)(uVar13 >> 4 & 0xfffffff0);
  *(int *)(in_R10 + 0x68) = *(int *)(in_R10 + 0x68) + uVar13;
  bVar3 = *(uint8_t *)(lVar34 + uVar15);
  pcVar2 = (char *)(lVar34 + uVar15);
  cVar48 = auVar50[0];
  auVar56[0] = -(*pcVar2 == cVar48);
  cVar35 = auVar50[1];
  auVar56[1] = -(pcVar2[1] == cVar35);
  cVar53 = auVar50[2];
  auVar56[2] = -(pcVar2[2] == cVar53);
  cVar55 = auVar50[3];
  auVar56[3] = -(pcVar2[3] == cVar55);
  auVar56[4] = -(pcVar2[4] == cVar48);
  auVar56[5] = -(pcVar2[5] == cVar35);
  auVar56[6] = -(pcVar2[6] == cVar53);
  auVar56[7] = -(pcVar2[7] == cVar55);
  auVar56[8] = -(pcVar2[8] == cVar48);
  auVar56[9] = -(pcVar2[9] == cVar35);
  auVar56[10] = -(pcVar2[10] == cVar53);
  auVar56[0xb] = -(pcVar2[0xb] == cVar55);
  auVar56[0xc] = -(pcVar2[0xc] == cVar48);
  auVar56[0xd] = -(pcVar2[0xd] == cVar35);
  auVar56[0xe] = -(pcVar2[0xe] == cVar53);
  auVar56[0xf] = -(pcVar2[0xf] == cVar55);
  uVar39 = (uint16_t)(SUB161(auVar56 >> 7,0) & 1) | (uint16_t)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
           (uint16_t)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
           (uint16_t)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
           (uint16_t)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
           (uint16_t)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
           (uint16_t)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
           (uint16_t)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
           (uint16_t)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
           (uint16_t)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
           (uint16_t)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
           (uint16_t)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
           (uint16_t)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
           (uint16_t)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
           (uint16_t)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar56[0xf] >> 7) << 0xf;
  lVar4 = lVar4 + uVar15 * 4;
  if (uVar39 != 0) {
    uVar36 = (uint64_t)(uint16_t)(uVar39 >> (bVar3 & 0xf) | uVar39 << 0x10 - (bVar3 & 0xf));
    uVar47 = 0;
    do {
      iVar42 = 0;
      for (uVar30 = uVar36; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x8000000000000000) {
        iVar42 = iVar42 + 1;
      }
      uVar13 = iVar42 + (uint32_t)bVar3 & 0xf;
      if (uVar13 != 0) {
        uVar13 = *(uint32_t *)(lVar4 + (uint64_t)uVar13 * 4);
        if (uVar13 < uVar44) goto LAB_7fffa4cf29da;
        *(uint32_t *)(&param_7 + uVar47 * 4) = uVar13;
        uVar47 = uVar47 + 1;
        uVar24 = uVar24 - 1;
      }
      uVar36 = uVar36 & uVar36 - 1;
      if ((uVar36 == 0) ||
         (sVar31 = ((0x7f4c << (bVar20 & 0xf) | 0x7f4cU >> 0x10 - (bVar20 & 0xf)) ^ uVar33) - uVar7,
         uVar24 == (uint16_t)(sVar31 * 2 | (uint16_t)(sVar31 < 0)))) goto LAB_7fffa4cf29da;
    } while( true );
  }
  uVar47 = 0;
LAB_7fffa4cf29da:
  uVar36 = uStack0000000000000168;
  in_stack_00000150 = CONCAT44(in_stack_00000150._4_4_,uVar24);
  uStack0000000000000168 = uStack0000000000000168 << 2;
  lVar23 = 0xf;
  if ((bVar3 & 0xf) != 1) {
    lVar23 = 0;
  }
  lVar23 = lVar23 + (uint64_t)(bVar3 - 1 & 0xf);
  *(uint8_t *)(lVar34 + uVar15) = (char)lVar23;
  ((uint8_t *)(lVar34 + uVar15))[lVar23] = auVar49[0];
  iVar42 = *(int *)(in_R10 + 0x2c);
  *(int *)(in_R10 + 0x2c) = iVar42 + 1;
  *(int *)(lVar4 + lVar23 * 4) = iVar42;
  uVar15 = 3;
  iVar42 = (int)uStack0000000000000148;
  if (uVar47 != ((uint32_t)(uint16_t)(0x5b7d - uVar33 << (bVar20 & 0xf) |
                               (uint16_t)(0x5b7d - uVar33) >> 0x10 - (bVar20 & 0xf)) * 0x7b3b +
                 unaff_ESI & 0xffff)) {
    puStack0000000000000170 = puStack0000000000000180 + 1;
    lStack0000000000000140 = lStack0000000000000160 + 8;
    uVar26 = 0;
    uVar30 = 3;
    do {
      uVar44 = *(uint32_t *)(&param_7 + uVar26 * 4);
      puVar19 = (uint64_t *)(lStack0000000000000160 + (uint64_t)uVar44);
      if (*(int *)((uVar30 - 3) + (int64_t)puVar19) ==
          *(int *)((int64_t)puStack0000000000000180 + (uVar30 - 3))) {
        if (puStack0000000000000180 < (uint64_t *)((int64_t)puStackX_20 - 7U)) {
          if (*puVar19 == *puStack0000000000000180) {
            puVar19 = (uint64_t *)(lStack0000000000000160 + 8 + (uint64_t)uVar44);
            puVar16 = puStack0000000000000180 + 1;
            puVar32 = puStack0000000000000180;
            do {
              if ((uint64_t *)((int64_t)puStackX_20 - 7U) <= puVar16) {
                if (puVar16 < (uint64_t *)((int64_t)puStackX_20 - 3U)) goto LAB_7fffa4cf2c7e;
                goto LAB_7fffa4cf2c8c;
              }
              uVar15 = *puVar19;
              uVar27 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar32 = puVar32 + 1;
              puVar19 = puVar19 + 1;
            } while (uVar15 == uVar27);
            uVar13 = 0;
            for (uVar27 = uVar27 ^ uVar15; (uVar27 & 1) == 0;
                uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            iVar25 = ((unaff_ESI | 1) * -0x6bafbea6 >> 1) + uVar45;
            uVar14 = iVar25 * 2 | (uint32_t)(iVar25 < 0);
            puVar19 = (uint64_t *)-(int64_t)puStack0000000000000180;
            if ((int64_t)
                (uint64_t)
                ((uVar45 + 0x5eb8d9a2 >> (bVar43 & 0x1f) |
                 uVar45 + 0x5eb8d9a2 << 0x20 - (bVar43 & 0x1f)) * (unaff_ESI | 1) * 0x4a761e39 +
                0x24fc50d3) <=
                (int64_t)(int)(uVar14 >> (bVar43 & 0x1f) | uVar14 << 0x20 - (bVar43 & 0x1f))) {
              puVar19 = puStack0000000000000180;
            }
            uVar15 = (uint64_t)(uVar13 >> 3) + (int64_t)puVar32 + (int64_t)puVar19;
          }
          else {
            uVar13 = 0;
            for (uVar15 = *puVar19 ^ *puStack0000000000000180; (uVar15 & 1) == 0;
                uVar15 = uVar15 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar15 = (uint64_t)(uVar13 >> 3);
          }
        }
        else {
          puVar16 = puStack0000000000000180;
          if (puStack0000000000000180 < (uint64_t *)((int64_t)puStackX_20 - 3U)) {
LAB_7fffa4cf2c7e:
            if ((int)*puVar19 == (int)*puVar16) {
              puVar19 = (uint64_t *)((int64_t)puVar19 + 4);
              puVar16 = (uint64_t *)((int64_t)puVar16 + 4);
            }
          }
LAB_7fffa4cf2c8c:
          if ((puVar16 < (uint64_t *)((int64_t)puStackX_20 - 1U)) &&
             ((short)*puVar19 == (short)*puVar16)) {
            puVar16 = (uint64_t *)((int64_t)puVar16 + 2);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 2);
          }
          if (puVar16 < puStackX_20) {
            puVar16 = (uint64_t *)
                      ((int64_t)puVar16 + (uint64_t)((char)*puVar19 == (char)*puVar16));
          }
          uVar15 = (int64_t)puVar16 - (int64_t)puStack0000000000000180;
        }
        if (uVar30 < uVar15) {
          *puStack0000000000000190 = (uint64_t)((iVar42 + 3) - uVar44);
          uVar30 = uVar15;
          if ((uint64_t *)((int64_t)puStack0000000000000180 + uVar15) == puStackX_20) break;
        }
      }
      uVar15 = uVar30;
      uVar26 = uVar26 + 1;
      uVar30 = uVar15;
    } while (uVar26 != uVar47);
  }
  puVar19 = (uint64_t *)(lStack0000000000000160 + (uint64_t)uVar29);
  pcVar2 = (char *)*puStack0000000000000198;
  lVar4 = puStack0000000000000198[1];
  uVar33 = (uint16_t)(uVar45 + 0x249f);
  uVar24 = iStack000000000000015c + uVar24;
  iVar25 = ((int)pcVar2 - (int)lVar4) - uVar29;
  uVar44 = *(uint32_t *)(puStack0000000000000198[0xe] + 0xc + uVar36 * 0x10);
  uVar47 = 0;
  if (uVar24 != (~(unaff_ESI ^ (uint16_t)(uVar33 >> (bVar43 & 0xf) | uVar33 << 0x10 - (bVar43 & 0xf)))
                & 0xffff)) {
    puVar16 = (uint64_t *)((int64_t)puStack0000000000000180 + 4);
    uVar47 = 3;
    if (uVar24 < 3) {
      uVar47 = (uint64_t)uVar24;
    }
    puVar32 = (uint64_t *)((int64_t)puStackX_20 - 7);
    uVar30 = 0;
    do {
      uVar44 = *(uint32_t *)(uVar36 * 0x10 + puStack0000000000000198[0xe] + uVar30 * 4);
      uVar26 = (uint64_t)uVar44;
      if (uVar26 == 0) {
        uVar26 = uVar15;
        goto LAB_7fffa4cf356c;
      }
      if (*(int *)(uVar26 + lVar4) == (int)*puStack0000000000000180) {
        puVar38 = (uint64_t *)((int *)(uVar26 + lVar4) + 1);
        puVar28 = (uint64_t *)(((int64_t)pcVar2 - (int64_t)puVar38) + (int64_t)puVar16);
        if (puStackX_20 <= puVar28) {
          puVar28 = puStackX_20;
        }
        puVar46 = puVar16;
        puVar37 = puVar38;
        if (puVar16 < (uint64_t *)((int64_t)puVar28 - 7U)) {
          if (*puVar38 == *puVar16) {
            lVar34 = lVar4 + 0xc + uVar26;
            lVar23 = 0;
            do {
              puVar46 = (uint64_t *)((int64_t)puStack0000000000000180 + lVar23 + 0xc);
              if ((uint64_t *)((int64_t)puVar28 - 7U) <= puVar46) {
                puVar37 = (uint64_t *)(lVar34 + lVar23);
                goto LAB_7fffa4cf2e8d;
              }
              uVar26 = *(uint64_t *)(lVar34 + lVar23);
              lVar23 = lVar23 + 8;
            } while (uVar26 == *puVar46);
            uVar13 = 0;
            for (uVar26 = uVar26 ^ *puVar46; (uVar26 & 1) == 0;
                uVar26 = uVar26 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar26 = (uint64_t)(uVar13 >> 3) + lVar23;
          }
          else {
            uVar13 = 0;
            for (uVar26 = *puVar38 ^ *puVar16; (uVar26 & 1) == 0;
                uVar26 = uVar26 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar26 = (uint64_t)(uVar13 >> 3);
          }
        }
        else {
LAB_7fffa4cf2e8d:
          if ((puVar46 < (uint64_t *)((int64_t)puVar28 - 3U)) && ((int)*puVar37 == (int)*puVar46))
          {
            puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
            puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
          }
          if ((puVar46 < (uint64_t *)((int64_t)puVar28 - 1U)) &&
             ((short)*puVar37 == (short)*puVar46)) {
            puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
            puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
          }
          if (puVar46 < puVar28) {
            puVar46 = (uint64_t *)
                      ((int64_t)puVar46 + (uint64_t)((char)*puVar37 == (char)*puVar46));
          }
          uVar26 = (int64_t)puVar46 - (int64_t)puVar16;
        }
        if ((char *)((int64_t)puVar38 + uVar26) == pcVar2) {
          puVar28 = (uint64_t *)((int64_t)puVar16 + uVar26);
          puVar38 = puVar28;
          puVar46 = puVar19;
          if (puVar28 < puVar32) {
            if (*puVar19 == *puVar28) {
              puVar38 = (uint64_t *)((int64_t)puStack0000000000000180 + uVar26 + 0xc);
              lVar34 = 8;
              if (puVar38 < puVar32) {
LAB_7fffa4cf2f60:
                if (*(uint64_t *)((int64_t)puVar19 + lVar34) == *puVar38)
                goto code_r0x7fffa4cf2f74;
                uVar13 = 0;
                for (uVar27 = *(uint64_t *)((int64_t)puVar19 + lVar34) ^ *puVar38;
                    (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
                  uVar13 = uVar13 + 1;
                }
                uVar27 = (uint64_t)(uVar13 >> 3) + lVar34;
                goto LAB_7fffa4cf2ff7;
              }
LAB_7fffa4cf2f81:
              puVar46 = (uint64_t *)(lVar34 + (int64_t)puVar19);
              goto LAB_7fffa4cf2f89;
            }
            uVar13 = 0;
            for (uVar27 = *puVar19 ^ *puVar28; (uVar27 & 1) == 0;
                uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar27 = (uint64_t)(uVar13 >> 3);
          }
          else {
LAB_7fffa4cf2f89:
            if ((puVar38 < (uint64_t *)((int64_t)puStackX_20 - 3U)) &&
               ((int)*puVar46 == (int)*puVar38)) {
              puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
              puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            }
            if ((puVar38 < (uint64_t *)((int64_t)puStackX_20 - 1U)) &&
               ((short)*puVar46 == (short)*puVar38)) {
              puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
              puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
            }
            if (puVar38 < puStackX_20) {
              puVar38 = (uint64_t *)
                        ((int64_t)puVar38 + (uint64_t)((char)*puVar46 == (char)*puVar38));
            }
            uVar27 = (int64_t)puVar38 - (int64_t)puVar28;
          }
LAB_7fffa4cf2ff7:
          uVar26 = uVar26 + uVar27;
        }
        uVar26 = uVar26 + 4;
        if (uVar15 < uVar26) {
          *puStack0000000000000190 = (uint64_t)((iVar42 + 3 + iVar25) - uVar44);
          uVar15 = uVar26;
          if ((uint64_t *)((int64_t)puStack0000000000000180 + uVar26) == puStackX_20)
          goto LAB_7fffa4cf356c;
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar47);
    uVar44 = *(uint32_t *)(puStack0000000000000198[0xe] + (uStack0000000000000168 | 3) * 4);
  }
  uVar24 = uVar24 - (int)uVar47;
  if ((uVar44 & 0xff) <= uVar24) {
    uVar24 = uVar44 & 0xff;
  }
  uVar33 = (uint16_t)(0x8d95 - uVar7) >> (bVar20 & 0xf) | 0x8d95 - uVar7 << 0x10 - (bVar20 & 0xf);
  uVar26 = uVar15;
  if (uVar24 != (uint16_t)~(uVar33 << (bVar43 & 0xf) | uVar33 >> 0x10 - (bVar43 & 0xf))) {
    if (7 < uVar24) {
      uVar47 = 0;
      do {
        uVar47 = uVar47 + 8;
      } while (uVar47 != (uVar24 & 0xf8));
    }
    if ((uint64_t)(uVar24 & 7) != 0) {
      for (lVar34 = 0; (uint64_t)(uVar24 & 7) * 4 + -4 != lVar34; lVar34 = lVar34 + 4) {
      }
    }
    iVar18 = (int)*puStack0000000000000180;
    uVar47 = (uint64_t)(uVar44 >> 8);
    puVar16 = (uint64_t *)((int64_t)puStack0000000000000180 + 4);
    lVar34 = (uint64_t)uVar29 + lStack0000000000000160 + 8;
    uVar29 = 0;
    do {
      uVar44 = *(uint32_t *)(puStack0000000000000198[0x10] + uVar47 * 4);
      uVar36 = (uint64_t)uVar44;
      if (*(int *)(lVar4 + uVar36) == iVar18) {
        puVar28 = (uint64_t *)(uVar36 + lVar4 + 4);
        puVar32 = (uint64_t *)(((int64_t)pcVar2 - (int64_t)puVar28) + (int64_t)puVar16);
        if (puStackX_20 <= puVar32) {
          puVar32 = puStackX_20;
        }
        puVar38 = puVar16;
        puVar46 = puVar28;
        if (puVar16 < (uint64_t *)((int64_t)puVar32 - 7U)) {
          if (*puVar28 == *puVar16) {
            lVar23 = lVar4 + 0xc + uVar36;
            lVar40 = 0;
            do {
              puVar38 = (uint64_t *)((int64_t)puStack0000000000000180 + lVar40 + 0xc);
              if ((uint64_t *)((int64_t)puVar32 - 7U) <= puVar38) {
                puVar46 = (uint64_t *)(lVar23 + lVar40);
                goto LAB_7fffa4cf3341;
              }
              uVar36 = *(uint64_t *)(lVar23 + lVar40);
              lVar40 = lVar40 + 8;
            } while (uVar36 == *puVar38);
            uVar13 = 0;
            for (uVar36 = uVar36 ^ *puVar38; (uVar36 & 1) == 0;
                uVar36 = uVar36 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar26 = (uint64_t)(uVar13 >> 3) + lVar40;
          }
          else {
            uVar13 = 0;
            for (uVar36 = *puVar28 ^ *puVar16; (uVar36 & 1) == 0;
                uVar36 = uVar36 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar26 = (uint64_t)(uVar13 >> 3);
          }
        }
        else {
LAB_7fffa4cf3341:
          if ((puVar38 < (uint64_t *)((int64_t)puVar32 - 3U)) && ((int)*puVar46 == (int)*puVar38))
          {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
            puVar46 = (uint64_t *)((int64_t)puVar46 + 4);
          }
          if ((puVar38 < (uint64_t *)((int64_t)puVar32 - 1U)) &&
             ((short)*puVar46 == (short)*puVar38)) {
            puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
            puVar46 = (uint64_t *)((int64_t)puVar46 + 2);
          }
          if (puVar38 < puVar32) {
            puVar38 = (uint64_t *)
                      ((int64_t)puVar38 + (uint64_t)((char)*puVar46 == (char)*puVar38));
          }
          uVar26 = (int64_t)puVar38 - (int64_t)puVar16;
        }
        uVar13 = uVar45 | 1;
        if (((uVar13 * 0x40000000 | uVar13 * 0x4826fe82 >> 3) * (unaff_R12D | 1) == -0x341c56ff) !=
            ((char *)((int64_t)puVar28 + uVar26) == pcVar2)) {
          puVar32 = (uint64_t *)((int64_t)puVar16 + uVar26);
          puVar38 = puVar19;
          puVar28 = puVar32;
          if (puVar32 < (uint64_t *)((int64_t)puStackX_20 - 7U)) {
            if (*puVar19 == *puVar32) {
              lVar23 = 0;
              do {
                puVar28 = (uint64_t *)((int64_t)puStack0000000000000180 + lVar23 + uVar26 + 0xc);
                if ((uint64_t *)((int64_t)puStackX_20 - 7U) <= puVar28) {
                  puVar38 = (uint64_t *)(lVar23 + lVar34);
                  goto LAB_7fffa4cf348d;
                }
                uVar36 = *(uint64_t *)(lVar34 + lVar23);
                lVar23 = lVar23 + 8;
              } while (uVar36 == *puVar28);
              uVar14 = 0;
              for (uVar36 = uVar36 ^ *puVar28; (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar36 = (uint64_t)(uVar14 >> 3) + lVar23;
            }
            else {
              uVar14 = 0;
              for (uVar36 = *puVar19 ^ *puVar32; (uVar36 & 1) == 0;
                  uVar36 = uVar36 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar36 = (uint64_t)(uVar14 >> 3);
            }
          }
          else {
LAB_7fffa4cf348d:
            if ((puVar28 < (uint64_t *)((int64_t)puStackX_20 + -3)) &&
               ((int)*puVar38 == (int)*puVar28)) {
              puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
              puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
            }
            if ((puVar28 < (uint64_t *)((int64_t)puStackX_20 - 1U)) &&
               ((short)*puVar38 == (short)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
            }
            if (puVar28 < puStackX_20) {
              puVar28 = (uint64_t *)
                        ((int64_t)puVar28 + (uint64_t)((char)*puVar38 == (char)*puVar28));
            }
            uVar36 = (int64_t)puVar28 - (int64_t)puVar32;
          }
          uVar26 = uVar26 + uVar36;
        }
        uVar26 = uVar26 + 4;
        if (uVar15 < uVar26) {
          uVar14 = (0x9f74ddd4 - unaff_ESI) * 0x800000 | 0x9f74ddd4 - unaff_ESI >> 9;
          uVar44 = (iVar42 + 3 + iVar25) - uVar44;
          uVar15 = (int64_t)(int)uVar44;
          if (~((-0x2916aaaf - unaff_ESI) * uVar13 ^ unaff_R12D) <=
              (uVar14 << (bVar20 & 0x1f) | uVar14 >> 0x20 - (bVar20 & 0x1f)) - unaff_R12D) {
            uVar15 = (uint64_t)uVar44;
          }
          *puStack0000000000000190 = uVar15;
          if ((uint64_t *)((int64_t)puStack0000000000000180 + uVar26) == puStackX_20) {
            break;
          }
          iVar18 = (int)*puStack0000000000000180;
          uVar15 = uVar26;
        }
      }
      uVar29 = uVar29 + 1;
      uVar47 = uVar47 + 1;
      uVar26 = uVar15;
    } while (uVar29 != uVar24);
  }
LAB_7fffa4cf356c:
  return (uVar26 + 0x9d74a442 >> 0x19 ^ uVar26 + 0x9d74a442) * 3;
code_r0x7fffa4cf2f74:
  puVar38 = puVar38 + 1;
  lVar34 = lVar34 + 8;
  if (puVar32 <= puVar38) goto LAB_7fffa4cf2f81;
  goto LAB_7fffa4cf2f60;
}


// ============================================================================
// Function : FUN_7fffa4cf1f40  |  RVA: 0x581f40  |  Size: 86 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int64_t FUN_7fffa4cf1f40(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4
                         )

{
  int64_t *plVar1;
  char *pcVar2;
  int64_t lVar3;
  bool bVar4;
  uint16_t uVar5;
  uint8_t auVar6 [15];
  uint8_t auVar7 [15];
  uint8_t auVar8 [15];
  uint8_t auVar9 [15];
  uint8_t auVar10 [15];
  uint32_t uVar11;
  uint64_t in_RAX;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  uint8_t bVar15;
  uint8_t bVar16;
  int iVar17;
  uint64_t *puVar18;
  uint8_t bVar19;
  uint32_t uVar20;
  int64_t lVar21;
  uint32_t uVar22;
  int iVar23;
  uint64_t uVar24;
  uint32_t uVar25;
  uint32_t uVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  uint64_t uVar29;
  short sVar30;
  uint32_t uVar31;
  uint32_t uVar32;
  uint64_t *puVar33;
  uint16_t uVar34;
  int64_t in_R10;
  int64_t lVar35;
  char cVar36;
  uint32_t in_R11D;
  uint64_t uVar37;
  uint64_t *puVar38;
  uint64_t *puVar39;
  uint8_t bVar40;
  uint16_t uVar41;
  uint32_t uVar42;
  uint32_t uVar43;
  int64_t lVar44;
  uint32_t uVar45;
  uint32_t uVar46;
  int iVar47;
  uint64_t *puVar48;
  uint64_t uVar49;
  char cVar50;
  uint8_t uVar53;
  uint8_t uVar54;
  char cVar55;
  uint8_t uVar56;
  char cVar57;
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar58 [16];
  uint32_t auStack_1b8 [66];
  int64_t lStack_b0;
  uint64_t uStack_a8;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  int iStack_94;
  int64_t lStack_90;
  uint64_t uStack_88;
  uint64_t *puStack_80;
  uint64_t uStack_78;
  uint64_t *puStack_70;
  int64_t lStack_68;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  int64_t lStack_50;
  uint32_t uStack_48;
  uint32_t uStack_44;
  
  uVar12 = in_RAX << 0x32 | in_RAX >> 0xe;
  param_4 = param_4 >> 9 ^ param_4;
  uVar42 = in_R11D ^ 0xaa713c2a;
  uVar43 = uVar42 + 0xce27b25d;
  uVar49 = (uint64_t)uVar43;
  uVar31 = (uVar43 ^ 0xa419ea32) - in_R11D;
  param_4 = param_4 >> 0x12 ^ param_4;
  puStack_60 = (uint64_t *)(param_4 >> 0x24 ^ param_4);
  uVar13 = (uint64_t)uVar31 - 0x185ded6d;
  puStack_70 = (uint64_t *)(uVar12 >> 0x22 ^ uVar12);
  bVar15 = (uint8_t)uVar43;
  bVar40 = (uint8_t)in_R11D;
  uVar34 = (uint16_t)uVar43;
  if ((uVar13 * 0x2000000 | uVar13 >> 0x27) == 0xfffbb17f9fffffff) {
    uVar31 = uVar31 + 0x19f05dc5;
    uVar32 = *(uint32_t *)(in_R10 + 0x10c);
    uVar26 = 4;
    if (uVar32 < 4) {
      uVar26 = uVar32;
    }
    bVar19 = (uint8_t)uVar26;
    bVar4 = 4 < uVar32;
    uVar31 = ~(uVar31 >> (bVar15 & 0x1f) | uVar31 << 0x20 - (bVar15 & 0x1f)) + in_R11D;
    uVar31 = uVar31 * 0x800 | uVar31 >> 0x15;
  }
  else {
    uVar31 = (uVar42 + 0x6aecb518) * 8 | uVar42 + 0x6aecb518 >> 0x1d;
    uVar26 = uVar31 >> (bVar40 & 0x1f) | uVar31 << 0x20 - (bVar40 & 0x1f);
    uVar32 = *(uint32_t *)(in_R10 + 0x10c);
    uVar31 = 4;
    if (uVar32 < 4) {
      uVar31 = uVar32;
    }
    bVar19 = (uint8_t)uVar31;
    uVar31 = uVar26 << 5 | uVar26 >> 0x1b;
    bVar4 = (uint16_t)~((uVar34 ^ 0x8be6) << (bVar40 & 0xf) |
                     (uVar34 ^ 0x8be6) >> 0x10 - (bVar40 & 0xf)) < uVar32;
  }
  uVar13 = *puStack_70;
  iStack_94 = 0;
  if (bVar4) {
    iStack_94 = 1 << ((char)uVar32 - 4U & 0x1f);
  }
  uStack_88 = uVar13 * -0x30e4432345000000 >>
              (0x42U - *(char *)(*(uint64_t **)(in_R10 + 0xf8) + 0x21) & 0x3f);
  uVar11 = 1 << (*(uint8_t *)(in_R10 + 0x100) & 0x1f);
  uVar22 = 1 << (bVar19 & 0x1f);
  lStack_90 = *(int64_t *)(in_R10 + 8);
  uStack_a8 = (int64_t)puStack_70 - lStack_90;
  uVar25 = (uint32_t)uStack_a8;
  uVar32 = *(uint32_t *)(in_R10 + 0x1c);
  uVar26 = uVar25 - uVar11;
  if (uVar25 - uVar32 <= uVar11) {
    uVar26 = uVar32;
  }
  lVar3 = *(int64_t *)(in_R10 + 0x70);
  lVar35 = *(int64_t *)(in_R10 + 0x38);
  lStack_50 = lVar35;
  if (*(int *)(in_R10 + 0x28) != 0) {
    uVar26 = uVar32;
  }
  uVar32 = *(uint32_t *)(in_R10 + 0x18);
  puStack_58 = *(uint64_t **)(in_R10 + 0xf8);
  uVar12 = *(uint64_t *)(in_R10 + 0x60);
  uStack_78 = uVar49;
  bVar19 = (uint8_t)uVar31;
  uVar5 = (uint16_t)in_R11D;
  cVar50 = (char)*(uint32_t *)(in_R10 + 0x34);
  if (*(int *)(in_R10 + 300) == 0) {
    _uStack_48 = CONCAT44(uStack_44,*(uint32_t *)(in_R10 + 0x34));
    uVar11 = *(uint32_t *)(in_R10 + 0x2c);
    uVar13 = (uint64_t)uVar11;
    _uStack_a0 = CONCAT44(uStack_9c,uVar22);
    lVar21 = lVar35;
    lVar44 = lVar3;
    if (0x180 < uVar25 - uVar11) {
      if (uVar11 < 0xffffffa0 !=
          ((int64_t)
           (int)((0x34d87388 - uVar43 >> (bVar40 & 0x1f) |
                 0x34d87388 - uVar43 << 0x20 - (bVar40 & 0x1f)) ^ 0xdf44beff) ==
          (uint64_t)(uVar43 + in_R11D + 0x865c10c1))) {
        lStack_68 = 0;
        do {
          uVar37 = (uint64_t)((uint32_t)uVar13 & 7);
          cVar36 = (((bVar15 ^ 0x37) >> (bVar19 & 7) | (bVar15 ^ 0x37) << 8 - (bVar19 & 7)) - bVar40
                   ) + -0x5b;
          uVar45 = *(uint32_t *)(in_R10 + 0x40 + uVar37 * 4);
          *(int *)(in_R10 + 0x40 + uVar37 * 4) =
               (int)((*(int64_t *)(lStack_90 + 8 + uVar13) * -0x30e4432345000000 ^
                     *(uint64_t *)(in_R10 + 0x60)) >> (0x38U - cVar50 & 0x3f));
          uVar37 = (uint64_t)(uVar45 >> 4 & 0xfffffff0);
          lVar21 = 0xf;
          if ((uint8_t)(*(uint8_t *)(lVar35 + uVar37) & 0xf) != (uint8_t)(cVar36 * '\x02' | cVar36 < '\0')) {
            lVar21 = 0;
          }
          lVar21 = lVar21 + (uint64_t)(*(uint8_t *)(lVar35 + uVar37) - 1 & 0xf);
          *(char *)(lVar35 + uVar37) = (char)lVar21;
          *(char *)(lVar35 + uVar37 + lVar21) = (char)uVar45;
          *(uint32_t *)(lVar3 + uVar37 * 4 + lVar21 * 4) = (uint32_t)uVar13;
          uVar13 = uVar13 + 1;
        } while (uVar11 + 0x60 != uVar13);
        lVar21 = *(int64_t *)(in_R10 + 0x38);
        lVar44 = *(int64_t *)(in_R10 + 0x70);
      }
      uVar45 = (in_R11D | 1) * (-0x7934f539 - uVar31) ^ uVar43;
      uVar11 = uVar25 - 0x20;
      if (~(((uVar31 - uVar43) + 0x28c17cc2) * (in_R11D | 1)) <= (uVar45 << 0xf | uVar45 >> 0x11)) {
        uVar11 = uVar25 | 0xffffffe0;
      }
      uVar13 = (uint64_t)uVar11;
      plVar1 = (int64_t *)(lStack_90 + uVar13);
      uVar20 = ((int)(int64_t *)((int64_t)puStack_70 + 1U) - (int)plVar1) + 1;
      uVar45 = 8;
      if (uVar20 < 8) {
        uVar45 = uVar20;
      }
      uVar20 = 0;
      if (plVar1 <= (int64_t *)((int64_t)puStack_70 + 1U)) {
        uVar20 = uVar45;
      }
      uVar45 = uVar20 | uVar11;
      if ((int64_t)(int)(((uVar42 + 0x30c2697e) * 0x1b78ebc7 ^ in_R11D) - uVar31) <
          (int64_t)
          (uint64_t)
          (((0x9322ed5 - in_R11D) * 0x20000000 | 0x9322ed5 - in_R11D >> 3) + (uVar31 - uVar43))) {
        uVar45 = uVar11 + uVar20;
      }
      if (uVar11 < uVar45) {
        uVar37 = *(uint64_t *)(in_R10 + 0x60);
        bVar16 = 0x38 - (char)*(uint32_t *)(in_R10 + 0x34);
        uVar41 = ~((uVar5 | 1) * 0xed4);
        if ((uVar20 & 1) !=
            ((uint16_t)(uVar41 >> (bVar19 & 0xf) | uVar41 << 0x10 - (bVar19 & 0xf)) + uVar43 & 0xffff)
           ) {
          uVar13 = uVar13 + 1;
          *(int *)(in_R10 + 0x40 + (uint64_t)(uVar11 & 7) * 4) =
               (int)((*plVar1 * -0x30e4432345000000 ^ uVar37) >> (bVar16 & 0x3f));
        }
        if (uVar20 != 1) {
          do {
            uVar42 = (uint32_t)uVar13;
            *(int *)(in_R10 + 0x40 + (uint64_t)(uVar42 & 7) * 4) =
                 (int)((*(int64_t *)(lStack_90 + uVar13) * -0x30e4432345000000 ^ uVar37) >>
                      (bVar16 & 0x3f));
            uVar29 = *(uint64_t *)(lStack_90 + 1 + uVar13);
            uVar13 = uVar13 + 2;
            *(int *)(in_R10 + 0x40 + (uint64_t)(uVar42 + 1 & 7) * 4) =
                 (int)(((uVar29 & 0xffffffff) * 0xbb000000 +
                        ((uVar29 & 0xffffffff) * 0xcf1bbcdc + (uVar29 >> 0x20) * 0xbb000000 << 0x20)
                       ^ uVar37) >> (bVar16 & 0x3f));
          } while (uVar45 != (uint32_t)uVar13);
        }
      }
    }
    auVar51 = _DAT_7fffa56b8670;
    if (uVar11 < uVar25) {
      lStack_68 = *(int64_t *)(in_R10 + 8);
      uVar42 = (uVar43 ^ 0xe481edb3) * (in_R11D | 1);
      uVar37 = (uint64_t)uVar11;
      bVar16 = 0x38 - (char)*(uint32_t *)(in_R10 + 0x34);
      uVar13 = (uStack_a8 << 0x20) - uStack_a8;
      if ((int64_t)(int)(((in_R11D | 1) * 0x7ed8a09c - uVar31 ^ 0xdf7768db) * -0x48c49d65) <
          (int64_t)(uint64_t)((uVar42 * 4 | uVar42 >> 0x1e) * -0x749bac11 ^ uVar31)) {
        uVar13 = uStack_a8 & 0xffffffff;
      }
      while( true ) {
        if ((uVar43 - in_R11D) + uVar31 + 0x81e830ef <
            ((0x8516ca60U >> (bVar40 & 0x1f) | -0x7ae935a0 << 0x20 - (bVar40 & 0x1f)) - uVar43 ^
            uVar31)) {
          uVar29 = *(int64_t *)(lStack_68 + 8 + uVar37) * -0x30e4432345000000 ^
                   *(uint64_t *)(in_R10 + 0x60);
          uVar42 = ((in_R11D ^ 0x1cca99b7) - uVar31) + 0x296e048e;
          uVar46 = (int)(uVar29 >> (bVar16 & 0x3f));
          if ((int64_t)(uint64_t)((in_R11D + 0xf3b61064 ^ uVar43) + 0xbc929df5 ^ uVar31) <
              (int64_t)(int)(uVar42 << (bVar15 & 0x1f) | uVar42 >> 0x20 - (bVar15 & 0x1f))) {
            uVar46 = (int)((int64_t)uVar29 >> (bVar16 & 0x3f));
          }
        }
        else {
          uVar46 = (uint32_t)
                   ((*(int64_t *)(lStack_68 + 8 + uVar37) * -0x30e4432345000000 ^
                    *(uint64_t *)(in_R10 + 0x60)) >> (bVar16 & 0x3f));
        }
        uVar29 = (uint64_t)((uint32_t)uVar37 & 7);
        uVar42 = *(uint32_t *)(in_R10 + 0x40 + uVar29 * 4);
        uVar24 = (uint64_t)(uVar42 >> 4 & 0xfffffff0);
        *(uint32_t *)(in_R10 + 0x40 + uVar29 * 4) = uVar46;
        iVar47 = 0xf;
        if ((*(uint8_t *)(lVar21 + uVar24) & 0xf) != 1) {
          iVar47 = 0;
        }
        auVar7._9_6_ = 0;
        auVar7._0_9_ = SUB159(ZEXT815(0),6);
        auVar8._10_5_ = 0;
        auVar8._0_10_ = SUB1510(auVar7 << 0x30,5);
        auVar9._11_4_ = 0;
        auVar9._0_11_ = SUB1511(auVar8 << 0x28,4);
        auVar10._12_3_ = 0;
        auVar10._0_12_ = SUB1512(auVar9 << 0x20,3);
        auVar6._2_13_ = SUB1513(auVar10 << 0x18,2);
        auVar6._0_2_ = (uint16_t)(uint8_t)(*(uint8_t *)(lVar21 + uVar24) - 1) & auVar51._0_2_;
        uVar11 = auVar6._0_4_ + iVar47;
        *(char *)(lVar21 + uVar24) = (char)uVar11;
        *(char *)((uint64_t)uVar11 + lVar21 + uVar24) = (char)uVar42;
        *(uint32_t *)(lVar44 + uVar24 * 4 + (uint64_t)uVar11 * 4) = (uint32_t)uVar37;
        if (uVar13 - 1 == uVar37) break;
        uVar37 = uVar37 + 1;
      }
    }
    else {
      uVar13 = uStack_a8 & 0xffffffff;
    }
    *(uint32_t *)(in_R10 + 0x2c) = uVar25;
    uVar42 = *(uint32_t *)(in_R10 + 0x40 + (uint64_t)(uVar25 & 7) * 4);
    *(int *)(in_R10 + 0x40 + (uint64_t)(uVar25 & 7) * 4) =
         (int)((uVar12 ^ *(int64_t *)(lStack_90 + 8 + uVar13) * -0x30e4432345000000) >>
              (0x38U - cVar50 & 0x3f));
  }
  else {
    *(uint32_t *)(in_R10 + 0x2c) = uVar25;
    uVar42 = (uint32_t)((uVar12 ^ uVar13 * -0x30e4432345000000) >> (0x38U - cVar50 & 0x3f));
  }
  uVar56 = (uint8_t)(uVar42 >> 0x18);
  uVar54 = (uint8_t)(uVar42 >> 0x10);
  uVar53 = (uint8_t)(uVar42 >> 8);
  auVar51._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar56,uVar56),uVar54),CONCAT14(uVar54,uVar42)) >> 0x20);
  auVar51[3] = uVar53;
  auVar51[2] = uVar53;
  auVar51[0] = (uint8_t)uVar42;
  auVar51[1] = auVar51[0];
  auVar51._8_8_ = 0;
  auVar52 = pshuflw(auVar51,auVar51,0);
  uVar13 = (uint64_t)(uVar42 >> 4 & 0xfffffff0);
  *(int *)(in_R10 + 0x68) = *(int *)(in_R10 + 0x68) + uVar42;
  bVar40 = *(uint8_t *)(lVar35 + uVar13);
  pcVar2 = (char *)(lVar35 + uVar13);
  cVar50 = auVar52[0];
  auVar58[0] = -(*pcVar2 == cVar50);
  cVar36 = auVar52[1];
  auVar58[1] = -(pcVar2[1] == cVar36);
  cVar55 = auVar52[2];
  auVar58[2] = -(pcVar2[2] == cVar55);
  cVar57 = auVar52[3];
  auVar58[3] = -(pcVar2[3] == cVar57);
  auVar58[4] = -(pcVar2[4] == cVar50);
  auVar58[5] = -(pcVar2[5] == cVar36);
  auVar58[6] = -(pcVar2[6] == cVar55);
  auVar58[7] = -(pcVar2[7] == cVar57);
  auVar58[8] = -(pcVar2[8] == cVar50);
  auVar58[9] = -(pcVar2[9] == cVar36);
  auVar58[10] = -(pcVar2[10] == cVar55);
  auVar58[0xb] = -(pcVar2[0xb] == cVar57);
  auVar58[0xc] = -(pcVar2[0xc] == cVar50);
  auVar58[0xd] = -(pcVar2[0xd] == cVar36);
  auVar58[0xe] = -(pcVar2[0xe] == cVar55);
  auVar58[0xf] = -(pcVar2[0xf] == cVar57);
  uVar41 = (uint16_t)(SUB161(auVar58 >> 7,0) & 1) | (uint16_t)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
           (uint16_t)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
           (uint16_t)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
           (uint16_t)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
           (uint16_t)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
           (uint16_t)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
           (uint16_t)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
           (uint16_t)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
           (uint16_t)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
           (uint16_t)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
           (uint16_t)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
           (uint16_t)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
           (uint16_t)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
           (uint16_t)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (uint16_t)(auVar58[0xf] >> 7) << 0xf;
  lVar3 = lVar3 + uVar13 * 4;
  if (uVar41 != 0) {
    uVar37 = (uint64_t)(uint16_t)(uVar41 >> (bVar40 & 0xf) | uVar41 << 0x10 - (bVar40 & 0xf));
    uVar12 = 0;
    do {
      iVar47 = 0;
      for (uVar29 = uVar37; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x8000000000000000) {
        iVar47 = iVar47 + 1;
      }
      uVar42 = iVar47 + (uint32_t)bVar40 & 0xf;
      if (uVar42 != 0) {
        uVar42 = *(uint32_t *)(lVar3 + (uint64_t)uVar42 * 4);
        if (uVar42 < uVar26) goto LAB_7fffa4cf29da;
        auStack_1b8[uVar12] = uVar42;
        uVar12 = uVar12 + 1;
        uVar22 = uVar22 - 1;
      }
      uVar37 = uVar37 & uVar37 - 1;
      if ((uVar37 == 0) ||
         (sVar30 = ((0x7f4c << (bVar19 & 0xf) | 0x7f4cU >> 0x10 - (bVar19 & 0xf)) ^ uVar34) - uVar5,
         uVar22 == (uint16_t)(sVar30 * 2 | (uint16_t)(sVar30 < 0)))) goto LAB_7fffa4cf29da;
    } while( true );
  }
  uVar12 = 0;
LAB_7fffa4cf29da:
  uVar37 = uStack_88;
  _uStack_a0 = CONCAT44(uStack_9c,uVar22);
  uStack_88 = uStack_88 << 2;
  lVar21 = 0xf;
  if ((bVar40 & 0xf) != 1) {
    lVar21 = 0;
  }
  lVar21 = lVar21 + (uint64_t)(bVar40 - 1 & 0xf);
  *(uint8_t *)(lVar35 + uVar13) = (char)lVar21;
  ((uint8_t *)(lVar35 + uVar13))[lVar21] = auVar51[0];
  iVar47 = *(int *)(in_R10 + 0x2c);
  *(int *)(in_R10 + 0x2c) = iVar47 + 1;
  *(int *)(lVar3 + lVar21 * 4) = iVar47;
  uVar13 = 3;
  iVar47 = (int)uStack_a8;
  if (uVar12 != ((uint32_t)(uint16_t)(0x5b7d - uVar34 << (bVar19 & 0xf) |
                               (uint16_t)(0x5b7d - uVar34) >> 0x10 - (bVar19 & 0xf)) * 0x7b3b +
                 in_R11D & 0xffff)) {
    lStack_68 = CONCAT44(lStack_68._4_4_,iVar47 + 3);
    puStack_80 = puStack_70 + 1;
    lStack_b0 = lStack_90 + 8;
    uVar24 = 0;
    uVar29 = 3;
    do {
      uVar42 = auStack_1b8[uVar24];
      puVar18 = (uint64_t *)(lStack_90 + (uint64_t)uVar42);
      if (*(int *)((uVar29 - 3) + (int64_t)puVar18) ==
          *(int *)((int64_t)puStack_70 + (uVar29 - 3))) {
        puVar14 = puStack_70;
        if (puStack_70 < (uint64_t *)((int64_t)param_1 - 7U)) {
          if (*puVar18 == *puStack_70) {
            puVar18 = (uint64_t *)(lStack_90 + 8 + (uint64_t)uVar42);
            puVar14 = puStack_70 + 1;
            puVar33 = puStack_70;
            do {
              if ((uint64_t *)((int64_t)param_1 - 7U) <= puVar14) goto joined_r0x7fffa4cf2c7c;
              uVar13 = *puVar18;
              uVar27 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar33 = puVar33 + 1;
              puVar18 = puVar18 + 1;
            } while (uVar13 == uVar27);
            uVar43 = 0;
            for (uVar27 = uVar27 ^ uVar13; (uVar27 & 1) == 0;
                uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar43 = uVar43 + 1;
            }
            iVar23 = ((in_R11D | 1) * -0x6bafbea6 >> 1) + uVar31;
            uVar26 = iVar23 * 2 | (uint32_t)(iVar23 < 0);
            bVar40 = (uint8_t)uStack_78 & 0x1f;
            bVar15 = (uint8_t)uStack_78 & 0x1f;
            puVar18 = (uint64_t *)-(int64_t)puStack_70;
            if ((int64_t)
                (uint64_t)
                ((uVar31 + 0x5eb8d9a2 >> bVar15 | uVar31 + 0x5eb8d9a2 << 0x20 - bVar15) *
                 (in_R11D | 1) * 0x4a761e39 + 0x24fc50d3) <=
                (int64_t)(int)(uVar26 >> bVar40 | uVar26 << 0x20 - bVar40)) {
              puVar18 = puStack_70;
            }
            uVar13 = (uint64_t)(uVar43 >> 3) + (int64_t)puVar33 + (int64_t)puVar18;
            uVar49 = uStack_78;
          }
          else {
            uVar43 = 0;
            for (uVar13 = *puVar18 ^ *puStack_70; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar43 = uVar43 + 1;
            }
            uVar13 = (uint64_t)(uVar43 >> 3);
          }
        }
        else {
joined_r0x7fffa4cf2c7c:
          if ((puVar14 < (uint64_t *)((int64_t)param_1 - 3U)) && ((int)*puVar18 == (int)*puVar14))
          {
            puVar18 = (uint64_t *)((int64_t)puVar18 + 4);
            puVar14 = (uint64_t *)((int64_t)puVar14 + 4);
          }
          if ((puVar14 < (uint64_t *)((int64_t)param_1 - 1U)) &&
             ((short)*puVar18 == (short)*puVar14)) {
            puVar14 = (uint64_t *)((int64_t)puVar14 + 2);
            puVar18 = (uint64_t *)((int64_t)puVar18 + 2);
          }
          if (puVar14 < param_1) {
            puVar14 = (uint64_t *)
                      ((int64_t)puVar14 + (uint64_t)((char)*puVar18 == (char)*puVar14));
          }
          uVar13 = (int64_t)puVar14 - (int64_t)puStack_70;
        }
        if (uVar29 < uVar13) {
          *puStack_60 = (uint64_t)((iVar47 + 3) - uVar42);
          uVar29 = uVar13;
          if ((uint64_t *)((int64_t)puStack_70 + uVar13) == param_1) break;
        }
      }
      uVar13 = uVar29;
      uVar24 = uVar24 + 1;
      uVar29 = uVar13;
    } while (uVar24 != uVar12);
  }
  bVar40 = (uint8_t)uVar49;
  puVar18 = (uint64_t *)(lStack_90 + (uint64_t)uVar32);
  pcVar2 = (char *)*puStack_58;
  lVar3 = puStack_58[1];
  uVar34 = (uint16_t)(uVar31 + 0x249f);
  uVar22 = iStack_94 + uVar22;
  iVar23 = ((int)pcVar2 - (int)lVar3) - uVar32;
  uVar42 = *(uint32_t *)(puStack_58[0xe] + 0xc + uVar37 * 0x10);
  uVar12 = 0;
  if (uVar22 != (~(in_R11D ^ (uint16_t)(uVar34 >> (bVar40 & 0xf) | uVar34 << 0x10 - (bVar40 & 0xf))) &
                0xffff)) {
    puVar14 = (uint64_t *)((int64_t)puStack_70 + 4);
    uVar12 = 3;
    if (uVar22 < 3) {
      uVar12 = (uint64_t)uVar22;
    }
    puVar33 = (uint64_t *)((int64_t)param_1 - 7);
    uVar29 = 0;
    do {
      uVar42 = *(uint32_t *)(uVar37 * 0x10 + puStack_58[0xe] + uVar29 * 4);
      uVar24 = (uint64_t)uVar42;
      if (uVar24 == 0) {
        uVar24 = uVar13;
        goto LAB_7fffa4cf356c;
      }
      if (*(int *)(uVar24 + lVar3) == (int)*puStack_70) {
        puVar39 = (uint64_t *)((int *)(uVar24 + lVar3) + 1);
        puVar28 = (uint64_t *)(((int64_t)pcVar2 - (int64_t)puVar39) + (int64_t)puVar14);
        if (param_1 <= puVar28) {
          puVar28 = param_1;
        }
        puVar48 = puVar14;
        puVar38 = puVar39;
        if (puVar14 < (uint64_t *)((int64_t)puVar28 - 7U)) {
          if (*puVar39 == *puVar14) {
            lVar35 = lVar3 + 0xc + uVar24;
            lVar21 = 0;
            do {
              puVar48 = (uint64_t *)((int64_t)puStack_70 + lVar21 + 0xc);
              if ((uint64_t *)((int64_t)puVar28 - 7U) <= puVar48) {
                puVar38 = (uint64_t *)(lVar35 + lVar21);
                goto LAB_7fffa4cf2e8d;
              }
              uVar49 = *(uint64_t *)(lVar35 + lVar21);
              lVar21 = lVar21 + 8;
            } while (uVar49 == *puVar48);
            uVar43 = 0;
            for (uVar49 = uVar49 ^ *puVar48; (uVar49 & 1) == 0;
                uVar49 = uVar49 >> 1 | 0x8000000000000000) {
              uVar43 = uVar43 + 1;
            }
            uVar24 = (uint64_t)(uVar43 >> 3) + lVar21;
            uVar49 = uStack_78;
          }
          else {
            uVar43 = 0;
            for (uVar24 = *puVar39 ^ *puVar14; (uVar24 & 1) == 0;
                uVar24 = uVar24 >> 1 | 0x8000000000000000) {
              uVar43 = uVar43 + 1;
            }
            uVar24 = (uint64_t)(uVar43 >> 3);
          }
        }
        else {
LAB_7fffa4cf2e8d:
          if ((puVar48 < (uint64_t *)((int64_t)puVar28 - 3U)) && ((int)*puVar38 == (int)*puVar48))
          {
            puVar48 = (uint64_t *)((int64_t)puVar48 + 4);
            puVar38 = (uint64_t *)((int64_t)puVar38 + 4);
          }
          if ((puVar48 < (uint64_t *)((int64_t)puVar28 - 1U)) &&
             ((short)*puVar38 == (short)*puVar48)) {
            puVar48 = (uint64_t *)((int64_t)puVar48 + 2);
            puVar38 = (uint64_t *)((int64_t)puVar38 + 2);
          }
          if (puVar48 < puVar28) {
            puVar48 = (uint64_t *)
                      ((int64_t)puVar48 + (uint64_t)((char)*puVar38 == (char)*puVar48));
          }
          uVar24 = (int64_t)puVar48 - (int64_t)puVar14;
          uVar49 = uStack_78;
        }
        if ((char *)((int64_t)puVar39 + uVar24) == pcVar2) {
          puVar28 = (uint64_t *)((int64_t)puVar14 + uVar24);
          puVar39 = puVar28;
          puVar48 = puVar18;
          if (puVar28 < puVar33) {
            if (*puVar18 == *puVar28) {
              puVar39 = (uint64_t *)((int64_t)puStack_70 + uVar24 + 0xc);
              lVar35 = 8;
              if (puVar39 < puVar33) {
LAB_7fffa4cf2f60:
                if (*(uint64_t *)((int64_t)puVar18 + lVar35) == *puVar39)
                goto code_r0x7fffa4cf2f74;
                uVar43 = 0;
                for (uVar27 = *(uint64_t *)((int64_t)puVar18 + lVar35) ^ *puVar39;
                    (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
                  uVar43 = uVar43 + 1;
                }
                uVar27 = (uint64_t)(uVar43 >> 3) + lVar35;
                goto LAB_7fffa4cf2ff7;
              }
LAB_7fffa4cf2f81:
              puVar48 = (uint64_t *)(lVar35 + (int64_t)puVar18);
              goto LAB_7fffa4cf2f89;
            }
            uVar43 = 0;
            for (uVar27 = *puVar18 ^ *puVar28; (uVar27 & 1) == 0;
                uVar27 = uVar27 >> 1 | 0x8000000000000000) {
              uVar43 = uVar43 + 1;
            }
            uVar27 = (uint64_t)(uVar43 >> 3);
          }
          else {
LAB_7fffa4cf2f89:
            if ((puVar39 < (uint64_t *)((int64_t)param_1 - 3U)) &&
               ((int)*puVar48 == (int)*puVar39)) {
              puVar48 = (uint64_t *)((int64_t)puVar48 + 4);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
            }
            if ((puVar39 < (uint64_t *)((int64_t)param_1 - 1U)) &&
               ((short)*puVar48 == (short)*puVar39)) {
              puVar48 = (uint64_t *)((int64_t)puVar48 + 2);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
            }
            if (puVar39 < param_1) {
              puVar39 = (uint64_t *)
                        ((int64_t)puVar39 + (uint64_t)((char)*puVar48 == (char)*puVar39));
            }
            uVar27 = (int64_t)puVar39 - (int64_t)puVar28;
          }
LAB_7fffa4cf2ff7:
          uVar24 = uVar24 + uVar27;
        }
        uVar24 = uVar24 + 4;
        if (uVar13 < uVar24) {
          *puStack_60 = (uint64_t)((iVar47 + 3 + iVar23) - uVar42);
          uVar13 = uVar24;
          if ((uint64_t *)((int64_t)puStack_70 + uVar24) == param_1) goto LAB_7fffa4cf356c;
        }
      }
      bVar40 = (uint8_t)uVar49;
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar12);
    uVar42 = *(uint32_t *)(puStack_58[0xe] + (uStack_88 | 3) * 4);
  }
  uVar22 = uVar22 - (int)uVar12;
  if ((uVar42 & 0xff) <= uVar22) {
    uVar22 = uVar42 & 0xff;
  }
  uVar34 = (uint16_t)(0x8d95 - uVar5) >> (bVar19 & 0xf) | 0x8d95 - uVar5 << 0x10 - (bVar19 & 0xf);
  uVar24 = uVar13;
  if (uVar22 != (uint16_t)~(uVar34 << (bVar40 & 0xf) | uVar34 >> 0x10 - (bVar40 & 0xf))) {
    if (7 < uVar22) {
      uVar49 = 0;
      do {
        uVar49 = uVar49 + 8;
      } while (uVar49 != (uVar22 & 0xf8));
    }
    if ((uint64_t)(uVar22 & 7) != 0) {
      for (lVar35 = 0; (uint64_t)(uVar22 & 7) * 4 + -4 != lVar35; lVar35 = lVar35 + 4) {
      }
    }
    iVar17 = (int)*puStack_70;
    uVar43 = (uint32_t)uStack_78;
    uVar49 = (uint64_t)(uVar42 >> 8);
    puVar14 = (uint64_t *)((int64_t)puStack_70 + 4);
    lVar35 = (uint64_t)uVar32 + lStack_90 + 8;
    uVar42 = 0;
    do {
      uVar32 = *(uint32_t *)(puStack_58[0x10] + uVar49 * 4);
      uVar12 = (uint64_t)uVar32;
      if (*(int *)(lVar3 + uVar12) == iVar17) {
        puVar28 = (uint64_t *)(uVar12 + lVar3 + 4);
        puVar33 = (uint64_t *)(((int64_t)pcVar2 - (int64_t)puVar28) + (int64_t)puVar14);
        if (param_1 <= puVar33) {
          puVar33 = param_1;
        }
        puVar39 = puVar14;
        puVar48 = puVar28;
        if (puVar14 < (uint64_t *)((int64_t)puVar33 - 7U)) {
          if (*puVar28 == *puVar14) {
            lVar21 = lVar3 + 0xc + uVar12;
            lVar44 = 0;
            do {
              puVar39 = (uint64_t *)((int64_t)puStack_70 + lVar44 + 0xc);
              if ((uint64_t *)((int64_t)puVar33 - 7U) <= puVar39) {
                puVar48 = (uint64_t *)(lVar21 + lVar44);
                goto LAB_7fffa4cf3341;
              }
              uVar12 = *(uint64_t *)(lVar21 + lVar44);
              lVar44 = lVar44 + 8;
            } while (uVar12 == *puVar39);
            uVar26 = 0;
            for (uVar12 = uVar12 ^ *puVar39; (uVar12 & 1) == 0;
                uVar12 = uVar12 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar24 = (uint64_t)(uVar26 >> 3) + lVar44;
          }
          else {
            uVar26 = 0;
            for (uVar12 = *puVar28 ^ *puVar14; (uVar12 & 1) == 0;
                uVar12 = uVar12 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            uVar24 = (uint64_t)(uVar26 >> 3);
          }
        }
        else {
LAB_7fffa4cf3341:
          if ((puVar39 < (uint64_t *)((int64_t)puVar33 - 3U)) && ((int)*puVar48 == (int)*puVar39))
          {
            puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
            puVar48 = (uint64_t *)((int64_t)puVar48 + 4);
          }
          if ((puVar39 < (uint64_t *)((int64_t)puVar33 - 1U)) &&
             ((short)*puVar48 == (short)*puVar39)) {
            puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
            puVar48 = (uint64_t *)((int64_t)puVar48 + 2);
          }
          if (puVar39 < puVar33) {
            puVar39 = (uint64_t *)
                      ((int64_t)puVar39 + (uint64_t)((char)*puVar48 == (char)*puVar39));
          }
          uVar24 = (int64_t)puVar39 - (int64_t)puVar14;
        }
        uVar26 = uVar31 | 1;
        if (((uVar26 * 0x40000000 | uVar26 * 0x4826fe82 >> 3) * (uVar43 | 1) == -0x341c56ff) !=
            ((char *)((int64_t)puVar28 + uVar24) == pcVar2)) {
          puVar33 = (uint64_t *)((int64_t)puVar14 + uVar24);
          puVar39 = puVar18;
          puVar28 = puVar33;
          if (puVar33 < (uint64_t *)((int64_t)param_1 - 7U)) {
            if (*puVar18 == *puVar33) {
              lVar21 = 0;
              do {
                puVar28 = (uint64_t *)((int64_t)puStack_70 + lVar21 + uVar24 + 0xc);
                if ((uint64_t *)((int64_t)param_1 - 7U) <= puVar28) {
                  puVar39 = (uint64_t *)(lVar21 + lVar35);
                  goto LAB_7fffa4cf348d;
                }
                uVar12 = *(uint64_t *)(lVar35 + lVar21);
                lVar21 = lVar21 + 8;
              } while (uVar12 == *puVar28);
              uVar11 = 0;
              for (uVar12 = uVar12 ^ *puVar28; (uVar12 & 1) == 0;
                  uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                uVar11 = uVar11 + 1;
              }
              uVar12 = (uint64_t)(uVar11 >> 3) + lVar21;
            }
            else {
              uVar11 = 0;
              for (uVar12 = *puVar18 ^ *puVar33; (uVar12 & 1) == 0;
                  uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                uVar11 = uVar11 + 1;
              }
              uVar12 = (uint64_t)(uVar11 >> 3);
            }
          }
          else {
LAB_7fffa4cf348d:
            if ((puVar28 < (uint64_t *)((int64_t)param_1 + -3)) &&
               ((int)*puVar39 == (int)*puVar28)) {
              puVar39 = (uint64_t *)((int64_t)puVar39 + 4);
              puVar28 = (uint64_t *)((int64_t)puVar28 + 4);
            }
            if ((puVar28 < (uint64_t *)((int64_t)param_1 - 1U)) &&
               ((short)*puVar39 == (short)*puVar28)) {
              puVar28 = (uint64_t *)((int64_t)puVar28 + 2);
              puVar39 = (uint64_t *)((int64_t)puVar39 + 2);
            }
            if (puVar28 < param_1) {
              puVar28 = (uint64_t *)
                        ((int64_t)puVar28 + (uint64_t)((char)*puVar39 == (char)*puVar28));
            }
            uVar12 = (int64_t)puVar28 - (int64_t)puVar33;
          }
          uVar24 = uVar24 + uVar12;
        }
        uVar24 = uVar24 + 4;
        if (uVar13 < uVar24) {
          uVar11 = (0x9f74ddd4 - in_R11D) * 0x800000 | 0x9f74ddd4 - in_R11D >> 9;
          uVar32 = (iVar47 + 3 + iVar23) - uVar32;
          uVar13 = (int64_t)(int)uVar32;
          if (~((-0x2916aaaf - in_R11D) * uVar26 ^ uVar43) <=
              (uVar11 << (bVar19 & 0x1f) | uVar11 >> 0x20 - (bVar19 & 0x1f)) - uVar43) {
            uVar13 = (uint64_t)uVar32;
          }
          *puStack_60 = uVar13;
          if ((uint64_t *)((int64_t)puStack_70 + uVar24) == param_1) {
            break;
          }
          iVar17 = (int)*puStack_70;
          uVar13 = uVar24;
        }
      }
      uVar42 = uVar42 + 1;
      uVar49 = uVar49 + 1;
      uVar24 = uVar13;
    } while (uVar42 != uVar22);
  }
LAB_7fffa4cf356c:
  return (uVar24 + 0x9d74a442 >> 0x19 ^ uVar24 + 0x9d74a442) * 3;
code_r0x7fffa4cf2f74:
  puVar39 = puVar39 + 1;
  lVar35 = lVar35 + 8;
  if (puVar33 <= puVar39) goto LAB_7fffa4cf2f81;
  goto LAB_7fffa4cf2f60;
}


// ============================================================================
// Function : FUN_7fffa4cf35f0  |  RVA: 0x5835f0  |  Size: 507 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf35f0(void)

{
  uint8_t *pbVar1;
  uint8_t *pbVar2;
  uint8_t *pbVar3;
  uint8_t *pbVar4;
  uint8_t bVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t in_R10;
  uint64_t uVar8;
  uint64_t *puVar9;
  int64_t in_stack_00000028;
  uint8_t auStack_38 [8];
  
  uVar8 = in_R10 * 0xfffc000fffc001;
  uVar8 = (in_R10 * 0x1fff8001fff8002 | (uint64_t)((int64_t)uVar8 < 0)) ^
          (uVar8 << 0x3a | uVar8 >> 6) ^ uVar8;
  bVar5 = (uint8_t)in_stack_00000028 & 0xf;
  uVar8 = (uVar8 << 2 | uVar8 >> 0x3e) ^ (uVar8 << 0x34 | uVar8 >> 0xc) ^ uVar8;
  uVar8 = (uVar8 << 0x28 | uVar8 >> 0x18) ^ (uVar8 << 4 | uVar8 >> 0x3c) ^ uVar8;
  uVar8 = (uVar8 << 0x10 | uVar8 >> 0x30) ^ (uVar8 << 8 | uVar8 >> 0x38) ^ uVar8;
  uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) ^ (uVar8 << 0x10 | uVar8 >> 0x30) ^ uVar8;
  puVar9 = (uint64_t *)(uVar8 << 0x20 | uVar8 >> 0x20);
  pbVar4 = (uint8_t *)*puVar9;
  uVar8 = puVar9[1];
  if (*(int64_t *)
       (*(int64_t *)((uint64_t)(uint16_t)(0x300U >> bVar5 | 0x300 << 0x10 - bVar5) + 0xff00000000) +
       0x30) * 0x34a955a51894e389 == -0x51d5bb944840087) {
    uRam051d5bb8ef1e64fd = SUB84(auStack_38,0);
  }
  do {
    if (uVar8 < 5) {
      return;
    }
    uVar8 = uVar8 - 1;
    iVar6 = 0x3ec95b36 - (int)in_stack_00000028;
    if ((iVar6 * 2 | (uint32_t)(iVar6 < 0)) * 0x53813753 == -0x28fd3974) {
      uVar7 = (((uint64_t)*pbVar4 ^ 0xaa292fb2547a59cf) * 0x1000000041b ^ (uint64_t)pbVar4[1]) *
              0x1000000041b;
    }
    else {
      bVar5 = (uint8_t)in_stack_00000028 & 0x1f;
      uVar7 = ((uint64_t)*pbVar4 ^ 0xaa292fb2547a59cf) + 0x1000000041b;
      if ((0x75751431U >> bVar5 | 0x75751431 << 0x20 - bVar5) != 0x5fb4f4db) {
        uVar7 = ((uint64_t)*pbVar4 ^ 0xaa292fb2547a59cf) * 0x1000000041b;
      }
      uVar7 = (uVar7 ^ pbVar4[1]) *
              (0x1066d6a9733U - in_stack_00000028 << 0x22 |
              0x1066d6a9733U - in_stack_00000028 >> 0x1e);
    }
    pbVar1 = pbVar4 + 3;
    pbVar2 = pbVar4 + 2;
    pbVar3 = pbVar4 + 4;
    pbVar4 = pbVar4 + 1;
  } while (((uint64_t)*pbVar3 ^
           ((*pbVar2 ^ uVar7) * 0x1000000041b ^ (uint64_t)*pbVar1) * 0x1000000041b) * 0x1000000041b
           != -0xb1bfa7300354b51);
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf3800  |  RVA: 0x583800  |  Size: 615 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf3800(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  bRam00007fffa47bf4d2 = 0;
  uRam00007fffa47bf500 = 0;
  uRam00007fffa47bf508 = 0;
  uRam00007fffa47bf4f0 = 0;
  uRam00007fffa47bf4f8 = 0;
  uRam00007fffa47bf4e0 = 0;
  uRam00007fffa47bf4e8 = 0;
  uRam00007fffa47bf51b = 0;
  uVar1 = rdtsc();
  lVar4 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0x785eadbc811cda3 + 1;
  lVar3 = 3;
  do {
    lVar5 = lVar4 * 0x785eadbc811cda3 + 1;
    lVar6 = lVar5 * 0x785eadbc811cda3 + 1;
    lVar4 = lVar6 * 0x785eadbc811cda3 + 1;
    *(char *)(lVar3 + 0x7fffa47bf4cf) = (char)((uint64_t)lVar4 >> 0x20);
    lVar4 = lVar4 * 0x785eadbc811cda3 + 1;
    *(char *)(lVar3 + 0x7fffa47bf4d0) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bf4ce) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bf4cd) = (char)((uint64_t)lVar5 >> 0x20);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x5b);
  uVar2 = (uint64_t)((uint32_t)bRam00007fffa47bf4d2 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint64_t *)((uVar2 >> 0x20) * 8 + 0x7fffa47bf4e0) = uRam00007fffa47bf51b;
  bRam00007fffa47bf4d2 = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf3a70  |  RVA: 0x583a70  |  Size: 2760 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x7fffa4cf4521) overlaps instruction at (ram,0x7fffa4cf451e)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa4cf4516) */
/* WARNING: Removing unreachable block (ram,0x7fffa4cf451e) */

void FUN_7fffa4cf3a70(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  char *pcVar1;
  int64_t lVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  code *pcVar10;
  uint64_t *puVar11;
  uint32_t **ppuVar12;
  uint32_t *puVar13;
  uint32_t uVar14;
  uint16_t uVar15;
  uint32_t uVar16;
  uint64_t in_R10;
  uint8_t in_AF;
  uint8_t in_TF;
  uint8_t in_IF;
  uint8_t in_NT;
  uint8_t in_AC;
  uint8_t in_VIF;
  uint8_t in_VIP;
  uint8_t in_ID;
  uint8_t auVar17 [16];
  char cVar18;
  char cVar21;
  char cVar22;
  uint8_t bVar23;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar24 [16];
  uint32_t *puStack_110;
  uint8_t auStack_108 [64];
  uint64_t uStack_c8;
  uint32_t uStack_bc;
  uint64_t uStack_b8;
  uint8_t auStack_b0 [8];
  int64_t *plStack_a8;
  uint64_t uStack_98;
  uint64_t uStack_90;
  char cStack_88;
  char cStack_87;
  char cStack_86;
  uint8_t bStack_85;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  uint8_t bStack_81;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  uint8_t bStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  uint8_t bStack_79;
  uint8_t (*pauStack_70) [16];
  uint64_t uStack_68;
  uint32_t uStack_60;
  int64_t lStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uVar4 = uStack_68;
  ppuVar12 = (uint32_t **)auStack_108;
  uVar8 = (param_3 << 0x2c | param_3 >> 0x14) ^ (param_3 << 0x22 | param_3 >> 0x1e) ^
          (param_3 << 0x17 | param_3 >> 0x29);
  uVar8 = (uVar8 << 0x2a | uVar8 >> 0x16) ^ (uVar8 << 0x16 | uVar8 >> 0x2a) ^ uVar8;
  uVar8 = (uVar8 << 0x14 | uVar8 >> 0x2c) ^ (uVar8 << 0x2c | uVar8 >> 0x14) ^ uVar8;
  uVar8 = (uVar8 << 0x18 | uVar8 >> 0x28) ^ (uVar8 << 0x28 | uVar8 >> 0x18) ^ uVar8;
  uVar8 = (uVar8 << 0x30 | uVar8 >> 0x10) ^ (uVar8 << 0x10 | uVar8 >> 0x30) ^ uVar8;
  uVar6 = uVar8 << 0x20 | uVar8 >> 0x20;
  param_1 = param_1 << 8 ^ param_1;
  uVar14 = (uint32_t)in_R10;
  uStack_bc = uVar14 | 1;
  uVar9 = uVar8 ^ uVar6;
  if ((int)(uStack_bc * -0x647bff00) <= (int)~((-0x5b49e0d3 - uVar14) * -0x7978110b)) {
    uVar9 = uVar8 & uVar6;
  }
  puVar11 = (uint64_t *)(uVar9 ^ uVar6);
  param_1 = param_1 << 0x10 ^ param_1;
  pauStack_70 = (uint8_t (*) [16])(param_1 << 0x20 ^ param_1 ^ 0xffffffffbb64dcd7);
  *pauStack_70 = (uint8_t  [16])0x0;
  *(uint64_t *)pauStack_70[1] = 0;
  lVar7 = (int64_t)(short)(((short)in_R10 + 0x4441) * 0x57d);
  uVar9 = (uint64_t)*(uint8_t *)(lVar7 + 0x7fffa47bf875);
  bVar23 = (uint8_t)in_R10 & 0x1f;
  puVar13 = (uint32_t *)((uint64_t)(0x63c5433a - uVar14) ^ 0x8001fd8f);
  uStack_68._4_4_ = SUB84(uVar4,4);
  uStack_68._0_4_ =
       CONCAT13(~(*(uint8_t *)(lVar7 + 0x7fffa47bf8a0) ^ *(uint8_t *)(lVar7 + 0x7fffa47bf87d + uVar9 * 4))
                ,CONCAT12(*(uint8_t *)(lVar7 + 0x7fffa47bf89f) ^
                          *(uint8_t *)(lVar7 + 0x7fffa47bf87c + uVar9 * 4) ^
                          -((0x1dfe5c5e << bVar23 | 0x1dfe5c5eU >> 0x20 - bVar23) <
                           (uVar14 ^ 0x2d9b6bf7)),
                          CONCAT11(~(*(uint8_t *)(lVar7 + 0x7fffa47bf89e) ^
                                    *(uint8_t *)(lVar7 + 0x7fffa47bf87b + uVar9 * 4)),
                                   ~(*(uint8_t *)(lVar7 + 0x7fffa47bf89d) ^
                                    *(uint8_t *)(lVar7 + 0x7fffa47bf87a + uVar9 * 4)))));
  if ((((uint32_t)uStack_68 ^ 0x50a5d4fe) >> (*puVar13 & 0x1f) & 1) != 0) {
    ppuVar12 = &puStack_110;
    puStack_110 = puVar13;
  }
  uStack_68._0_4_ = 0x8c0b28d;
  *(uint64_t *)((int64_t)ppuVar12 + -8) = 0x7fffa4cf3d11;
  uStack_98 = in_R10;
  FUN_7fffa4ed2020();
  uVar9 = ((int64_t)puVar11 << 0x1e | (uint64_t)puVar11 >> 0x22) ^
          ((int64_t)puVar11 << 0x23 | (uint64_t)puVar11 >> 0x1d) ^ (uint64_t)puVar11;
  uVar9 = uVar9 << 9 ^ uVar9;
  *(uint64_t *)((int64_t)ppuVar12 + -8) = 0x7fffa4cf3dbc;
  uVar5 = (*(code *)((int64_t)(0x63c496dc - (int)uStack_98) + 0x7fffa4fee7e3))
                    (0x7fffa4fee7e3,uVar9 >> 0x1d ^ uVar9,0x62046c95);
  uVar16 = uVar5 >> 0xd ^ uVar5;
  uVar14 = uVar16 ^ 0x1a;
  if (uStack_bc * 0x7f08f473 != 0x651756df) {
    uVar14 = uVar5 >> 0x1a;
  }
  uVar14 = uVar14 ^ uVar16;
  *(uint32_t *)(puVar11 + 2) = uVar14;
  *(uint64_t *)((int64_t)ppuVar12 + -8) =
       (uint64_t)(in_NT & 1) * 0x4000 | (uint64_t)(in_IF & 1) * 0x200 |
       (uint64_t)(in_TF & 1) * 0x100 | (uint64_t)((int)uVar14 < 0) * 0x80 |
       (uint64_t)(uVar14 == 0) * 0x40 | (uint64_t)(in_AF & 1) * 0x10 |
       (uint64_t)((POPCOUNT(uVar14 & 0xff) & 1U) == 0) * 4 | (uint64_t)(in_ID & 1) * 0x200000 |
       (uint64_t)(in_VIP & 1) * 0x100000 | (uint64_t)(in_VIF & 1) * 0x80000 |
       (uint64_t)(in_AC & 1) * 0x40000;
  *(uint64_t *)((int64_t)ppuVar12 + -8) =
       *(uint64_t *)((int64_t)ppuVar12 + -8) & 0xfffffffffffffeff;
  if ((int)puVar11[2] != 0) {
    uStack_68 = CONCAT44(uStack_68._4_4_,0x3ace7fbb);
    uStack_c8 = *puVar11;
    bVar23 = (uint8_t)uStack_98 & 0x1f;
    uVar6 = uStack_c8 >> 0x13 ^ (uStack_c8 << 4 | uStack_c8 >> 0x3c) ^ uStack_c8;
    uVar9 = uVar6 >> 0x2a;
    if ((int)uStack_98 != 0x63c5459f) {
      uVar9 = uVar6 - 0x2a;
    }
    uVar9 = (uVar9 ^ uVar6) << 0x3f;
    *(uint64_t *)((int64_t)ppuVar12 + 0x20) =
         (uint64_t)(-0x38923366 << bVar23 | 0xc76dcc9aU >> 0x20 - bVar23);
    *(uint64_t *)((int64_t)ppuVar12 + -8) = 0x7fffa4cf3f19;
    (*(code *)&UNK_7fffa56aaa30)();
    uVar14 = (uint32_t)uStack_98;
    uVar15 = (uint16_t)uStack_98;
    uVar8 = (uVar9 << 0x35 | uVar9 >> 0xb) ^ (uVar9 << 0x19 | uVar9 >> 0x27) ^
            (uVar9 << 0x1c | uVar9 >> 0x24);
    uVar8 = (uVar8 << 0x32 | uVar8 >> 0xe) ^ (uVar8 << 0x3a | uVar8 >> 6) ^ uVar8;
    uVar8 = (uVar8 << 0x34 | uVar8 >> 0xc) ^ (uVar8 << 0x24 | uVar8 >> 0x1c) ^ uVar8;
    uVar8 = (uVar8 << 8 | uVar8 >> 0x38) ^ (uVar8 << 0x28 | uVar8 >> 0x18) ^ uVar8;
    uVar3 = *(uint32_t *)
             (&UNK_7fffa583fb98 +
             (uVar8 & 0xff) * 4 + (int64_t)(int)((uVar14 ^ 0x971fdb97) * -0x270e854f));
    uStack_50 = uVar8 >> (*(uint8_t *)((int64_t)(short)((uVar15 | 1) * -0x67d7) + 0x7fffa4788519) &
                         0x3f);
    uStack_48 = *(uint64_t *)
                 ((int64_t)(int)((uVar14 + 0x4d2f3a60) * 0x20000 | uVar14 + 0x4d2f3a60 >> 0xf) +
                 0x7fffa478b1b0);
    lVar7 = *(int64_t *)
             ((int64_t)(short)((0xe026 - uVar15) * 0x4000 | (uint16_t)(0xe026 - uVar15 ^ 0x380) >> 2)
             + 0x7fffa4782d5f);
    uVar9 = uStack_50;
    uVar6 = 0;
    do {
      uStack_b8 = uVar6;
      pcVar1 = (char *)(lVar7 + uVar9 * 0x10);
      cStack_88 = *pcVar1;
      cStack_87 = pcVar1[1];
      cStack_86 = pcVar1[2];
      bStack_85 = pcVar1[3];
      cStack_84 = pcVar1[4];
      cStack_83 = pcVar1[5];
      cStack_82 = pcVar1[6];
      bStack_81 = pcVar1[7];
      cStack_80 = pcVar1[8];
      cStack_7f = pcVar1[9];
      cStack_7e = pcVar1[10];
      bStack_7d = pcVar1[0xb];
      cStack_7c = pcVar1[0xc];
      cStack_7b = pcVar1[0xd];
      cStack_7a = pcVar1[0xe];
      bStack_79 = pcVar1[0xf];
      cVar18 = (char)uVar3;
      auVar17[0] = -(cStack_88 == cVar18);
      cVar21 = (char)((uint32_t)uVar3 >> 8);
      auVar17[1] = -(cStack_87 == cVar21);
      cVar22 = (char)((uint32_t)uVar3 >> 0x10);
      auVar17[2] = -(cStack_86 == cVar22);
      bVar23 = (uint8_t)((uint32_t)uVar3 >> 0x18);
      auVar17[3] = -(bStack_85 == bVar23);
      auVar17[4] = -(cStack_84 == cVar18);
      auVar17[5] = -(cStack_83 == cVar21);
      auVar17[6] = -(cStack_82 == cVar22);
      auVar17[7] = -(bStack_81 == bVar23);
      auVar17[8] = -(cStack_80 == cVar18);
      auVar17[9] = -(cStack_7f == cVar21);
      auVar17[10] = -(cStack_7e == cVar22);
      auVar17[0xb] = -(bStack_7d == bVar23);
      auVar17[0xc] = -(cStack_7c == cVar18);
      auVar17[0xd] = -(cStack_7b == cVar21);
      auVar17[0xe] = -(cStack_7a == cVar22);
      auVar17[0xf] = -(bStack_79 == bVar23);
      uVar5 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar17 >> 7,0) & 1) |
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
      if (uVar5 != 0) {
        uStack_90 = (uint64_t)uVar5;
        lVar2 = *(int64_t *)((int64_t)(short)((uVar15 | 1) * 0x6a58) + 0x7fffa4784f00) +
                uVar9 * 0x78;
        do {
          uVar5 = 0;
          for (uVar16 = (uint32_t)uStack_90; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (uStack_c8 == **(uint64_t **)(lVar2 + (uint64_t)uVar5 * 8)) {
            lStack_58 = lVar2 + (uint64_t)uVar5 * 8;
            uVar8 = ~((int64_t)&uStack_68 * 0x3b1f38cf);
            bVar23 = (uint8_t)uStack_98 & 0x1f;
            uVar14 = (0x8dcdfbebU >> bVar23 | -0x72320415 << 0x20 - bVar23) * 0x40a0ac21;
            uStack_98 = (uint64_t)uVar14;
            pcVar10 = (code *)((int64_t)(int)uVar14 + 0x7fffa561d879);
            uVar6 = uVar8;
            uStack_68 = uVar9 * 0x10 + lVar7;
            uStack_60 = uVar5;
            goto LAB_7fffa4cf4353;
          }
          uVar5 = (uint32_t)uStack_90 - 1 & (uint32_t)uStack_90;
          uStack_90 = (uint64_t)uVar5;
        } while (uVar5 != 0);
      }
      if ((*(uint8_t *)(((int64_t)(int)(-0x5c3b544d - uVar14) ^ 0xffffffffc0000028U) + 0x7fffa58789ec
                    + (uint64_t)((uint32_t)uVar8 & 7)) & bStack_79) == 0) break;
      uVar6 = uVar9 + uStack_b8 + 1;
      bVar23 = (uint8_t)uStack_98 & 0x1f;
      uVar9 = uVar6 & uStack_48;
      if ((uint64_t)(int64_t)(int)(0xd8910295U >> bVar23 | -0x276efd6b << 0x20 - bVar23) <
          (uint64_t)~((uVar14 ^ 0xd4f0cfcd) << 0xf | (uVar14 ^ 0xd4f0cfcd) >> 0x11)) {
        uVar9 = uStack_48 - uVar6;
      }
      uVar6 = uStack_b8 + 1;
    } while (uStack_b8 + 1 <= uStack_48);
    if (*(uint64_t *)((int64_t)(short)((short)(uVar14 - 2) + -0x5e09) + 0x7fffa4782c24) <
        *(uint64_t *)
         ((int64_t)(int)((0x53c54142 - uVar14) * 0x20 | 0x53c54142 - uVar14 >> 0x1b) +
         0x7fffa4789f33)) {
      pcVar10 = (code *)((int64_t)
                         (short)((0x5cba - uVar15) * 0x1000 | (uint16_t)(0x5cba - uVar15) >> 4) +
                        0x7fffa4fe638f);
      *(uint64_t *)((int64_t)ppuVar12 + -8) = 0x7fffa4cf425a;
      (*pcVar10)(uStack_98,pcVar10,uStack_50,uVar14 + 0x1d4e0b1f);
      uVar9 = (uint64_t)(0xae75913 - (int)uStack_98);
      bVar23 = (uint8_t)uStack_98 & 0xf;
      *(uint64_t *)((int64_t)ppuVar12 + -8) = 0x7fffa4cf42c3;
      (*(code *)((int64_t)(short)(0x3fa1 << bVar23 | 0x3fa1U >> 0x10 - bVar23) + 0x7fffa5619f60))
                (~((int64_t)&uStack_68 * 0x3b1f38cf),uVar9,(uint64_t)auStack_b0 ^ uVar9);
    }
    else {
      uVar6 = uVar8 << 0x14 | uVar8 >> 0x2c;
      uVar8 = (uVar8 << 0x21 | uVar8 >> 0x1f) ^ uVar8;
      pcVar10 = (code *)((int64_t)(int)((uVar14 ^ 0x9c1ad6a0) << 0x1a | (uVar14 ^ 0x9c1ad6a0) >> 6)
                        + 0x7fffa524ea64);
      uVar9 = uVar8 | uVar6;
      if (uVar14 + 0xfe3b2590 < 0x9ec1c2cc) {
        uVar9 = uVar8 ^ uVar6;
      }
      uVar9 = (uVar9 << 9 | uVar9 >> 0x37) ^ uVar9 ^ (uVar9 << 0x1c | uVar9 >> 0x24);
      auVar19._8_4_ = (int)uVar9;
      auVar19._0_8_ = uVar9;
      auVar19._12_4_ = (int)(uVar9 >> 0x20);
      auVar20._0_8_ = (uVar9 & 0xffffffff) * 0xbef3cf63 + ((uVar9 >> 0x20) * 0xbef3cf63 << 0x20);
      auVar20._8_8_ =
           (auVar19._8_8_ & 0xffffffff) * 0xc2aa9b1f +
           ((uVar9 & 0xffffffff) * 0xffffffff + (auVar19._8_8_ >> 0x20) * 0xc2aa9b1f << 0x20);
      auVar24._8_4_ = 0xffffffff;
      auVar24._0_8_ = 0xffffffffffffffff;
      auVar24._12_4_ = 0xffffffff;
      *(uint8_t (*) [16])((int64_t)ppuVar12 + 0x20) = auVar24 ^ auVar20;
      *(uint64_t *)((int64_t)ppuVar12 + -8) = 0x7fffa4cf44be;
      (*pcVar10)(uStack_98,uVar9,pcVar10,&uStack_68);
      uVar15 = (short)uStack_98 + 0xb310;
      uVar8 = ~((int64_t)&uStack_68 * 0x3b1f38cf);
      pcVar10 = (code *)((int64_t)(short)(uVar15 * 0x100 | uVar15 >> 8) + 0x7fffa5618f38);
      uVar6 = (uint64_t)auStack_b0 ^ 0xffffffffa7221374;
LAB_7fffa4cf4353:
      *(uint64_t *)((int64_t)ppuVar12 + -8) = 0x7fffa4cf4356;
      (*pcVar10)(uVar8,uStack_98,pcVar10,uVar6);
    }
    lVar7 = *plStack_a8;
    uVar9 = puVar11[3];
    uVar6 = puVar11[4];
    uVar8 = puVar11[6];
    *(uint64_t *)(lVar7 + 0x18) = puVar11[5];
    *(uint64_t *)(lVar7 + 0x20) = uVar8;
    *(uint64_t *)(lVar7 + 8) = uVar9;
    *(uint64_t *)(lVar7 + 0x10) = uVar6;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf4590  |  RVA: 0x584590  |  Size: 143 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf4590(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint8_t (*pauVar2) [16];
  code *pcVar3;
  
  uVar1 = **(uint64_t **)(param_2 + 0x98);
  if (uVar1 != 0) {
    pcVar3 = (code *)((int64_t)(short)(0x148d - (short)*(uint64_t *)(param_2 + 0x70)) +
                     0x7fffa568ad42);
    (*pcVar3)(pcVar3,param_2,uVar1 >> 0x3d ^ uVar1,~(*(int *)(param_2 + 0x4c) * -0xb0c1338));
    pauVar2 = *(uint8_t (**) [16])(param_2 + 0x98);
    *pauVar2 = (uint8_t  [16])0x0;
    *(uint64_t *)pauVar2[1] = 0;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf4620  |  RVA: 0x584620  |  Size: 714 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf4620(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint16_t uVar3;
  uint8_t bVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t in_R10;
  int64_t lVar8;
  uint64_t unaff_R15;
  
  lVar5 = (~unaff_R15 | in_R10) * -0x8d35017 +
          (in_R10 & ~unaff_R15) * 0x5f73f2da + (~in_R10 ^ unaff_R15) * -0x12a882d8 +
          (~in_R10 & unaff_R15) * 0x56a0a2c3 + (in_R10 ^ unaff_R15) * -0x721c75b2;
  bVar4 = (uint8_t)lVar5;
  lVar8 = (int64_t)(int)(((uint32_t)lVar5 | 1) * 0x65f17ce1);
  uVar3 = (uint16_t)lVar5;
  *(uint8_t *)((int64_t)(short)((uVar3 ^ 0xbe19) << 4 | (uVar3 ^ 0xbe19) >> 0xc) + 0x7fffa47bdc98) =
       -0x11 - bVar4;
  *(uint64_t *)(lVar8 + 0x7fffa47c841f) = 0;
  *(uint64_t *)(lVar8 + 0x7fffa47c8427) = 0;
  *(uint64_t *)(lVar8 + 0x7fffa47c840f) = 0;
  *(uint64_t *)(lVar8 + 0x7fffa47c8417) = 0;
  *(uint64_t *)(lVar8 + 0x7fffa47c83ff) = 0;
  *(uint64_t *)(lVar8 + 0x7fffa47c8407) = 0;
  *(uint64_t *)(lVar8 + 0x7fffa47c842f) = 0;
  *(uint64_t *)
   ((int64_t)(short)((0x102U >> (bVar4 & 0xf) | 0x102 << 0x10 - (bVar4 & 0xf)) + 0x973b) +
   0x7fffa47c130d) = (uint64_t)(uint16_t)(0U >> (bVar4 & 0xf) | 0 << 0x10 - (bVar4 & 0xf));
  uVar1 = rdtsc();
  lVar6 = (CONCAT44(0x7fff,(int)((uint64_t)uVar1 >> 0x20)) << 0x20 | CONCAT44(0x7fff,(int)uVar1)) *
          0xa2250ab6f4d7b5 + 1;
  lVar8 = 3;
  while( true ) {
    lVar6 = lVar6 * 0xa2250ab6f4d7b5 + 1;
    lVar7 = lVar6 * 0xa2250ab6f4d7b5 + 1;
    *(char *)(lVar8 + (int64_t)(short)((uVar3 - 0xc0d) * -0x6429) + 0x7fffa47bce28) =
         (char)((uint64_t)lVar7 >> 0x20);
    lVar7 = lVar7 * 0xa2250ab6f4d7b5 + 1;
    *(char *)(lVar8 + (int64_t)
                      (short)((uVar3 | 1) * -0x5904 | (uint16_t)((short)((uVar3 | 1) * -0x2c82) < 0))
                      + 0x7fffa47c0eb2) = (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar8 + (int64_t)(short)((uVar3 + 0x7f0c) * 8 | (uint16_t)(uVar3 + 0x7f0c) >> 0xd) +
                      0x7fffa47c1c1b) = (char)((uint64_t)lVar6 >> 0x20);
    if (lVar8 == 0x5f) break;
    lVar6 = (0xa2250ad270aaa4 - lVar5) * lVar7 + 1;
    *(char *)(lVar8 + 0x7fffa47babf8) = (char)((uint64_t)lVar6 >> 0x20);
    lVar8 = lVar8 + 4;
  }
  uVar2 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)
                           (int)((0x6cb6ec86U >> (bVar4 & 0x1f) |
                                 0x6cb6ec86 << 0x20 - (bVar4 & 0x1f)) + 0x26f29c71) + 0x7fffa47c3620
                          ) * 0x24924925 + 0x24924925) * 7;
  *(uint64_t *)
   ((int64_t)(short)((0xa5b6U >> (bVar4 & 0xf) | -0x5a4a << 0x10 - (bVar4 & 0xf)) + 0x8dfa) +
    0x7fffa47bd2a7 + (uVar2 >> 0x20) * 8) = 0;
  uRam00007fffa47babfe = (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf48ec  |  RVA: 0x5848ec  |  Size: 1 bytes
// Callers  : FUN_7fffa52bbf48@0xb4bf48, FUN_7fffa4ecf55c@0x75f55c
// Callees  : none
// ============================================================================
void FUN_7fffa4cf48ec(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf48f3  |  RVA: 0x5848f3  |  Size: 25 bytes
// Callers  : none
// Callees  : FUN_7fffa4f54478@0x7e4478
// ============================================================================
void FUN_7fffa4cf48f3(uint64_t param_1,int64_t param_2)

{
  FUN_7fffa4f54478(**(uint32_t **)(param_2 + 0x48));
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf4910  |  RVA: 0x584910  |  Size: 1222 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Instruction at (ram,0x7fffa4cf4e9b) overlaps instruction at (ram,0x7fffa4cf4e93)
    */
/* WARNING: Removing unreachable block (ram,0x7fffa4cf4eb9) */
/* WARNING: Removing unreachable block (ram,0x7fffa4cf4ebd) */
/* WARNING: Removing unreachable block (ram,0x7fffa4cf4e9b) */

void FUN_7fffa4cf4910(void)

{
  uint16_t uVar1;
  uint8_t bVar2;
  int64_t lVar3;
  uint64_t unaff_RSI;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t unaff_R12;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar7 = ~unaff_RSI & 0x8150a06f;
  uVar6 = unaff_RSI ^ 0x8150a06f;
  uVar4 = ~unaff_R12;
  uVar6 = (((unaff_RSI | 0xffffffff7eaf5f90) ^ unaff_R12) + ((uVar7 & uVar4) - (unaff_R12 & uVar7)))
          * 0xd6c1160 + ((unaff_RSI ^ 0xffffffff7eaf5f90) & uVar4) * 0xfdc88b13 +
          (~unaff_RSI ^ 0x8150a06f | uVar4) * -0x89e3fc04 +
          (uVar4 ^ uVar6) * -0xfb9ec8e7 + (unaff_R12 | uVar6) * 0x8150a06f +
          (uVar4 | uVar6) * 0x71bacce3 + (uVar4 & uVar6) * -0x7f26de43;
  uVar1 = (uint16_t)uVar6;
  lVar3 = (int64_t)(short)((0x5ee1 - uVar1) * 0x3a71);
  *(uint8_t (*) [16])(lVar3 + 0x7fffa47c0cfc) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar3 + 0x7fffa47c0cec) = (uint8_t  [16])0x0;
  *(uint8_t (*) [16])(lVar3 + 0x7fffa47c0cdc) = (uint8_t  [16])0x0;
  *(uint64_t *)(lVar3 + 0x7fffa47c0d0c) = 0;
  bVar2 = (uint8_t)uVar6;
  *(uint64_t *)
   ((int64_t)(short)~((uVar1 + 0x1aaf) * 0x400 | (uint16_t)(uVar1 + 0x1aaf) >> 6) + 0x7fffa47bcb3a) =
       (0x90bf3ec46b3babaeU >> (bVar2 & 0x3f) | -0x6f40c13b94c45452 << 0x40 - (bVar2 & 0x3f)) *
       0xe888f41;
  uVar7 = uVar6 | 1;
  uVar4 = -lRam00007fffa4781658;
  *(uint64_t *)
   ((int64_t)(short)(0xb576U >> (bVar2 & 0xf) | -0x4a8a << 0x10 - (bVar2 & 0xf)) + 0x7fffa47c03c5)
       = (uint64_t)
         (&UNK_7fffa56fc761 +
         (int)(0xb8ffffecU >> (bVar2 & 0x1f) | -0x47000014 << 0x20 - (bVar2 & 0x1f))) ^
         0x730f504fc3c7da03;
  *(uint64_t *)((int64_t)(int)(0x892b853 - (uint32_t)uVar6) + 0x7fffa47c5caa) =
       (uVar4 << 0x25 | uVar4 >> 0x1b) ^ uVar7 * 0x1917c0236742aa48 - 0x2000000404d;
  uVar5 = lRam00007fffa4781138 + 0x12d03d911f95d8f3;
  *(uint64_t *)((int64_t)(int)(((uint32_t)uVar6 ^ 0x81eb3315) * -0x5813db2f) + 0x7fffa47c6900) =
       0xadbdbed5ea431354;
  *(uint64_t *)
   ((int64_t)(short)(0x9b5aU >> (bVar2 & 0xf) | -0x64a6 << 0x10 - (bVar2 & 0xf)) + 0x7fffa47be4b6)
       = 0x3302922618dba128U >> (bVar2 & 0x3f) | 0x3302922618dba128 << 0x40 - (bVar2 & 0x3f);
  uVar4 = uVar5 >> 0x21;
  uVar6 = uVar5 * 0x80000000 | uVar4;
  uVar6 = uVar6 << 0xf ^ uVar6;
  uVar4 = uVar6 << 0x1e ^ uVar4 << 0x3c ^ uVar6;
  uRam00007fffa47bb978 = (uVar4 >> 0x1f ^ uVar4 >> 0x3e ^ uVar4) + uVar7 * -0xb3c0a0e228a299c;
  uRam00007fffa47bb978 =
       uRam00007fffa47bb978 >> 0x3e ^ uRam00007fffa47bb978 >> 0x1f ^ uRam00007fffa47bb978;
  *(uint64_t *)((int64_t)(short)(uVar1 ^ 0xfe68) + 0x7fffa47c138b) =
       ~(uVar7 * -0x454ef7ffbb9ea959);
  uVar4 = (uRam00007fffa4780f38 << 7 | uRam00007fffa4780f38 >> 0x39) ^
          (uRam00007fffa4780f38 << 3 | uRam00007fffa4780f38 >> 0x3d) ^ uRam00007fffa4780f38;
  uVar4 = (uVar4 << 6 | uVar4 >> 0x3a) ^ (uVar4 << 0xe | uVar4 >> 0x32) ^ uVar4;
  uVar4 = (uVar4 << 0x1c | uVar4 >> 0x24) ^ (uVar4 << 0xc | uVar4 >> 0x34) ^ uVar4;
  uVar6 = ~((uVar4 << 0x38 | uVar4 >> 8) ^ (uVar4 << 0x18 | uVar4 >> 0x28) ^ uVar4);
  uVar4 = uVar6 << 0xb;
  uVar4 = (uVar6 & 0x1fffffffffffff) >> 0x2d | (uVar4 & 0xff000000000000) >> 0x28 |
          (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8
          | (uVar4 & 0xff0000) << 0x18 | ((uVar4 | uVar6 >> 0x35) & 0xff00) << 0x28 |
          (uVar6 >> 0x35) << 0x38;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f) << 4 | uVar4 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333) * 4;
  *(uint64_t *)
   ((int64_t)(int)(0xfc5fffe6U >> (bVar2 & 0x1f) | -0x3a0001a << 0x20 - (bVar2 & 0x1f)) +
   0x7fffa47c81b6) =
       (((uVar4 >> 1 & 0x5555555555555555) + (uVar4 & 0x5555555555555555) * 2) -
       lRam00007fffa4780cc8) * 0x80100200400801 + -0x44b48686b863bb4e;
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf4ed0  |  RVA: 0x584ed0  |  Size: 468 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf4ed0(uint32_t *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                     int64_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint32_t in_R10D;
  uint64_t uVar7;
  uint32_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  
  uVar5 = param_5 - 0xb3134fd1;
  uVar5 = (uVar5 << 0x23 | uVar5 >> 0x1d) ^ (uVar5 << 0x35 | uVar5 >> 0xb) ^ uVar5;
  uVar5 = (uVar5 << 6 | uVar5 >> 0x3a) ^ (uVar5 << 0x2a | uVar5 >> 0x16) ^ uVar5;
  uVar7 = param_4 - (int)((in_R10D | 1) * -0x5c000000 | (in_R10D | 1) * -0x18c55197 >> 6) ^
          0xc9fc4e64;
  uVar7 = uVar7 << 0x10 ^ uVar7;
  puVar8 = (uint32_t *)(uVar7 << 0x20 ^ uVar7);
  uVar10 = (uint64_t)puVar8[1] * (uint64_t)*param_1;
  uVar4 = (uint64_t)param_1[1] * (uint64_t)*puVar8;
  uVar2 = (uint64_t)*param_1 * (uint64_t)*puVar8;
  uVar5 = (uVar5 << 0xc | uVar5 >> 0x34) ^ (uVar5 << 0x14 | uVar5 >> 0x2c) ^ uVar5;
  uVar5 = (uVar5 << 0x18 | uVar5 >> 0x28) ^ (uVar5 << 0x28 | uVar5 >> 0x18) ^ uVar5;
  uVar5 = (uVar5 << 0x30 | uVar5 >> 0x10) ^ (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar5;
  uVar6 = uVar5 << 0x20 | uVar5 >> 0x20;
  lVar9 = (uVar4 >> 0x20) + (uint64_t)puVar8[1] * (uint64_t)param_1[1] + (uVar10 >> 0x20) +
          ((uVar4 & 0xffffffff) + (uVar2 >> 0x20) + (uVar10 & 0xffffffff) >> 0x20);
  uVar7 = uVar5 ^ uVar6;
  if (in_R10D + 0xd51a14f9 <= (in_R10D + 0x4670384d ^ 0xb9a0fe5a)) {
    uVar7 = uVar6 | uVar5;
  }
  plVar3 = (int64_t *)(uVar7 ^ uVar6);
  plVar3[1] = lVar9;
  *plVar3 = ((uint64_t)(uint32_t)((int)uVar4 + (int)uVar10) << 0x20) + uVar2;
  if (*(int64_t *)param_1 < 0) {
    lVar9 = lVar9 - *(int64_t *)puVar8;
    plVar3[1] = lVar9;
    lVar1 = *(int64_t *)puVar8;
  }
  else {
    lVar1 = *(int64_t *)puVar8;
  }
  if (lVar1 < 0) {
    plVar3[1] = lVar9 - *(int64_t *)param_1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf50b0  |  RVA: 0x5850b0  |  Size: 979 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4cf5406) */

void FUN_7fffa4cf50b0(void)

{
  uint8_t bVar1;
  int64_t lVar2;
  uint8_t bVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint8_t bVar6;
  uint8_t bVar7;
  
  bRam00007fffa47bf468 = '\0';
  uRam00007fffa47bf4a9 = 0;
  uRam00007fffa47bf4b1 = 0;
  uRam00007fffa47bf499 = 0;
  uRam00007fffa47bf4a1 = 0;
  uRam00007fffa47bf489 = 0;
  uRam00007fffa47bf491 = 0;
  uRam00007fffa47bf479 = 0;
  uRam00007fffa47bf481 = 0;
  _uRam00007fffa47bf4c1 = 0;
  uVar5 = rdtsc();
  lVar4 = (CONCAT44(0x7fff,(int)(uVar5 >> 0x20)) << 0x20 | uVar5 & 0xffffffff) * 0xaaf6419eabf8316 +
          0xb;
  lVar2 = 3;
  while( true ) {
    lVar4 = lVar4 * 0xaaf6419eabf8316 + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf456) = (char)((uint64_t)lVar4 >> 0x20);
    lVar4 = lVar4 * 0xaaf6419eabf8316 + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf457) = (char)((uint64_t)lVar4 >> 0x20);
    lVar4 = lVar4 * 0xaaf6419eabf8316 + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf458) = (char)((uint64_t)lVar4 >> 0x20);
    lVar4 = lVar4 * 0xaaf6419eabf8316 + 0xb;
    *(char *)(lVar2 + 0x7fffa47bf459) = (char)((uint64_t)lVar4 >> 0x20);
    if (lVar2 == 0x73) break;
    lVar2 = lVar2 + 4;
  }
  bRam00007fffa47bf468 = bRam00007fffa47bf468 + 1 & 7;
  uVar5 = (uint64_t)bRam00007fffa47bf468;
  bVar3 = ~bRam00007fffa47bf4c7;
  bVar7 = ~bRam00007fffa47bf4c6;
  *(uint8_t *)(uVar5 * 8 + 0x7fffa47bf47d) =
       ~bRam00007fffa47bf4c5 << 5 | (uint8_t)~bRam00007fffa47bf4c5 >> 3;
  bVar1 = bRam00007fffa47bf4c3;
  bVar6 = ~bRam00007fffa47bf4c8;
  *(uint8_t *)(uVar5 * 8 + 0x7fffa47bf47f) = bVar3 << 5 | bVar3 >> 3;
  bVar3 = uRam00007fffa47bf4c1._1_1_;
  *(uint8_t *)(uVar5 * 8 + 0x7fffa47bf47b) = ~bVar1 << 5 | (uint8_t)~bVar1 >> 3;
  bVar1 = (uint8_t)uRam00007fffa47bf4c1;
  *(uint8_t *)(uVar5 * 8 + 0x7fffa47bf47e) = bVar7 << 5 | bVar7 >> 3;
  *(uint8_t *)(uVar5 * 8 + 0x7fffa47bf480) = bVar6 << 5 | bVar6 >> 3;
  *(uint8_t *)(uVar5 * 8 + 0x7fffa47bf479) = ~bVar1 << 5 | (uint8_t)~bVar1 >> 3;
  *(uint8_t *)(uVar5 * 8 + 0x7fffa47bf47a) = ~bVar3 << 5 | (uint8_t)~bVar3 >> 3;
  *(uint8_t *)(uVar5 * 8 + 0x7fffa47bf47c) =
       ~bRam00007fffa47bf4c4 << 5 | (uint8_t)~bRam00007fffa47bf4c4 >> 3;
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf5490  |  RVA: 0x585490  |  Size: 58 bytes
// Callers  : FUN_7fffa517b810@0xa0b810, FUN_7fffa4a8ff50@0x31ff50, FUN_7fffa4cf5cf0@0x585cf0, FUN_7fffa5102405@0x992405
// Callees  : FUN_7fffa4e90ae0@0x720ae0
// ============================================================================
int64_t *
FUN_7fffa4cf5490(int64_t *param_1,uint64_t *param_2,int64_t param_3,int64_t *param_4)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lStackX_8;
  
  uVar7 = *(uint32_t *)(param_3 + 0xc);
  uVar8 = (uint64_t)uVar7;
  iVar2 = FUN_7fffa4e90ae0(param_3);
  *param_4 = *param_1;
  if (uVar7 == 0) {
    return param_4;
  }
  do {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (uint64_t)uVar7;
    lVar6 = (int64_t)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    if ((*(int *)(lVar6 + 4) < iVar2) && (iVar2 <= *(int *)(lVar6 + 8))) {
      puVar4 = (uint32_t *)(*(code *)&DAT_7ff8504cd6c0)(*param_2,&lStackX_8,0);
      lVar9 = *(int *)(lVar6 + 0x10) + lStackX_8;
      uVar1 = *(uint32_t *)(lVar6 + 0xc);
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          if ((int64_t)*(int *)(lVar9 + 0xc + uVar5 * 0x14) == (uint64_t)*puVar4)
          goto LAB_7fffa4cf5540;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (uint64_t)uVar3;
        } while (uVar3 < uVar1);
      }
      if ((uint32_t)uVar5 < uVar1) {
LAB_7fffa4cf5540:
        *param_4 = *(int64_t *)((int64_t)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
        return param_4;
      }
    }
    if (uVar7 == 0) {
      return param_4;
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa4cf54ca  |  RVA: 0x5854ca  |  Size: 164 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf54ca(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t unaff_RBP;
  int unaff_ESI;
  uint32_t uVar6;
  uint64_t unaff_RDI;
  int64_t lVar7;
  int64_t *unaff_R12;
  uint64_t *unaff_R14;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000050;
  
  do {
    uVar6 = (int)unaff_RDI - 1;
    unaff_RDI = (uint64_t)uVar6;
    lVar5 = (int64_t)*(int *)(unaff_RBP + 0x10) + unaff_RDI * 0x14 + unaff_R15[1];
    if ((*(int *)(lVar5 + 4) < unaff_ESI) && (unaff_ESI <= *(int *)(lVar5 + 8))) {
      puVar3 = (uint32_t *)(*(code *)&DAT_7ff8504cd6c0)(*unaff_R15,&uStack0000000000000050,0);
      lVar7 = *(int *)(lVar5 + 0x10) + uStack0000000000000050;
      uVar1 = *(uint32_t *)(lVar5 + 0xc);
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          if ((int64_t)*(int *)(lVar7 + 0xc + uVar4 * 0x14) == (uint64_t)*puVar3)
          goto LAB_7fffa4cf5540;
          uVar2 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar2;
        } while (uVar2 < uVar1);
      }
      if ((uint32_t)uVar4 < uVar1) {
LAB_7fffa4cf5540:
        *unaff_R14 = *(uint64_t *)((int64_t)*(int *)(lVar7 + 0x10 + uVar4 * 0x14) + *unaff_R12);
        return;
      }
    }
    if (uVar6 == 0) {
      return;
    }
  } while( true );
}


// ============================================================================
// Function : FUN_7fffa4cf556e  |  RVA: 0x58556e  |  Size: 21 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf556e(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf5590  |  RVA: 0x585590  |  Size: 851 bytes
// Callers  : none
// Callees  : FUN_7fffa4cf593e@0x58593e, FUN_7fffa56a5f20@0xf35f20
// ============================================================================
int64_t * FUN_7fffa4cf5590(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint16_t uVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint32_t uVar9;
  int64_t in_R10;
  uint64_t in_R11;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  
  plVar13 = (int64_t *)(in_R10 + -0x93ca27fc);
  uVar14 = *(uint64_t *)(in_R10 + -0x93ca27ec);
  lVar12 = uVar14 - param_1;
  uVar9 = (uint32_t)param_3;
  uVar3 = (uint16_t)param_3;
  if (uVar14 < param_1) {
    (*(code *)((int64_t)(short)(uVar3 + 0x7212) + 0x7fffa5182e34))
              (param_3,param_3 ^ 0xfffff7ffa075537d);
    plVar13 = (int64_t *)FUN_7fffa4cf593e();
    return plVar13;
  }
  uVar11 = param_2 * -0xf0f0f0f0f0f0f0f;
  uVar7 = *(uint64_t *)(in_R10 + -0x93ca27e4);
  if (uVar7 - uVar14 < uVar11) {
    uVar8 = 0x7fffffffffffffff;
    if (0x7fffffffffffffff - uVar14 < uVar11) {
      (*(code *)((int64_t)(int)((0x29c66c9d - uVar9 ^ 0x8797d76d) * -0x2e6859c7) + 0x7fffa51a8d02))
                ();
      pcVar5 = (code *)__debugbreak();
      plVar13 = (int64_t *)(*pcVar5)();
      return plVar13;
    }
    uVar14 = uVar14 + uVar11;
    if ((-1 < (int64_t)uVar14) && (uVar7 <= (uVar7 >> 1 ^ 0x7fffffffffffffff))) {
      uVar8 = (uVar7 >> 1) + uVar7;
      if (uVar8 < (uVar14 | 0xf)) {
        uVar8 = uVar14 | 0xf;
      }
    }
    uVar10 = uVar8 + 1 << 0x3c ^ uVar8 + 1;
    pcVar5 = (code *)((int64_t)(short)((uVar3 ^ 0xe00c) << 0xb | (uVar3 ^ 0xe00c) >> 5) +
                     0x7fffa526f598);
    lVar1 = uVar10 + 0x6195d80f;
    lVar6 = (lVar1 * 0xf - uVar10) + -0x6195d80f;
    if (uVar9 == 0xa075431a) {
      lVar6 = lVar1 * 0x4000;
    }
    (*pcVar5)(pcVar5,lVar6);
    lVar6 = ((int64_t)pcVar5 << 0x2c | (uint64_t)pcVar5 >> 0x14) -
            (((uint64_t)pcVar5 >> 0x14) << 0x36);
    lVar1 = lVar6 + param_1;
    *(uint64_t *)(in_R10 + -0x93ca27ec) = uVar14;
    *(uint64_t *)(in_R10 + -0x93ca27e4) = uVar8;
    if (uVar7 < 0x10) {
      FUN_7fffa56a5f20(lVar6,plVar13,param_1);
      FUN_7fffa56a5f20(lVar1,in_R11,uVar11);
      FUN_7fffa56a5f20(lVar1 + uVar11,(int64_t)plVar13 + param_1,lVar12 + 1);
    }
    else {
      lVar2 = *plVar13;
      FUN_7fffa56a5f20(lVar6,lVar2,param_1);
      FUN_7fffa56a5f20(lVar1,in_R11,uVar11);
      FUN_7fffa56a5f20(lVar1 + uVar11,lVar2 + param_1,lVar12 + 1);
      (*(code *)((int64_t)(short)(0x5d49 - (uVar3 + 0x36c3)) + 0x7fffa56898c4))();
    }
    *plVar13 = lVar6;
  }
  else {
    *(uint64_t *)(in_R10 + -0x93ca27ec) = uVar14 + uVar11;
    plVar4 = plVar13;
    if ((uVar9 ^ 0x9ac2e97b) + 0xc54855ae < uVar7) {
      plVar4 = (int64_t *)*plVar13;
    }
    param_1 = param_1 + (int64_t)plVar4;
    uVar7 = uVar11;
    if (((param_1 < in_R11 + uVar11) && (in_R11 <= (int64_t)plVar4 + uVar14)) &&
       (uVar7 = param_1 - in_R11, param_1 < in_R11 || uVar7 == 0)) {
      uVar7 = 0;
    }
    FUN_7fffa56a5f20(uVar11 + param_1,param_1,lVar12 + 1);
    FUN_7fffa56a5f20(param_1);
    FUN_7fffa56a5f20(uVar7 + param_1,in_R11 + uVar11 + uVar7,uVar11 - uVar7);
  }
  return plVar13;
}


// ============================================================================
// Function : FUN_7fffa4cf58f0  |  RVA: 0x5858f0  |  Size: 77 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf58f0(void)

{
  uint8_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  
  bRam00007fffa47bacd0 = 0;
  uRam00007fffa47bace6 = 0;
  uRam00007fffa47bacee = 0;
  uRam00007fffa47bacd6 = 0;
  uRam00007fffa47bacde = 0;
  uRam00007fffa47bacf6 = 0;
  _uRam00007fffa47bad04 = 0;
  uVar3 = rdtsc();
  lVar5 = (uVar3 & 0xffffffff) * 0xa14f3e07 +
          ((uVar3 >> 0x20) * 0xa14f3e07 + (uVar3 & 0xffffffff) * 0x6f86cc7 << 0x20) + 0xb;
  lVar7 = 0;
  while( true ) {
    lVar5 = lVar5 * 0x6f86cc7a14f3e07 + 0xb;
    *(char *)(lVar7 + 0x7fffa47baccb) = (char)((uint64_t)lVar5 >> 0x20);
    if (lVar7 == 0x40) break;
    lVar6 = lVar5 * 0x6f86cc7a14f3e07 + 0xb;
    lVar2 = lVar6 * 0x6f86cc7a14f3e07 + 0xb;
    lVar5 = lVar2 * 0x6f86cc7a14f3e07 + 0xb;
    *(char *)(lVar7 + 0x7fffa47bacce) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar7 + 0x7fffa47baccc) = (char)((uint64_t)lVar6 >> 0x20);
    *(char *)(lVar7 + 0x7fffa47baccd) = (char)((uint64_t)lVar2 >> 0x20);
    lVar7 = lVar7 + 4;
  }
  uVar4 = (uint32_t)bRam00007fffa47bacd0 * 0x33333334 + 0x33333334;
  uVar8 = (uint64_t)uVar4 * 4 + (uint64_t)uVar4;
  uVar3 = uVar8 >> 0x20;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacd6) = (uint8_t)uRam00007fffa47bad04;
  uVar1 = uRam00007fffa47bad06;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacd7) = uRam00007fffa47bad04._1_1_;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacd9) = uRam00007fffa47bad07;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacdb) = uRam00007fffa47bad09;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacdd) = uRam00007fffa47bad0b;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacd8) = uVar1;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacda) = uRam00007fffa47bad08;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacdc) = uRam00007fffa47bad0a;
  bRam00007fffa47bacd0 = (char)(uVar8 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf593e  |  RVA: 0x58593e  |  Size: 943 bytes
// Callers  : FUN_7fffa4cf5590@0x585590
// Callees  : none
// ============================================================================
void FUN_7fffa4cf593e(uint32_t param_1,short param_2,int64_t param_3,int64_t param_4)

{
  uint8_t uVar1;
  uint16_t in_AX;
  uint32_t unaff_EBX;
  int64_t lVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  int64_t in_R10;
  int64_t lVar6;
  int in_R11D;
  int64_t lVar7;
  uint64_t uVar8;
  
  lVar7 = (int64_t)(in_R11D + -0x77ab3673);
  *(uint8_t *)(in_R10 + 0x7fffa47c8aaf) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47c4472) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47c447a) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47c4462) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47c446a) = 0;
  *(uint64_t *)(lVar7 + 0x7fffa47c4482) = 0;
  *(uint64_t *)
   (param_4 + 0x39 +
   (int64_t)(short)((in_AX ^ 0xa6af) << 1 | (uint16_t)((short)(in_AX ^ 0xa6af) < 0))) =
       (uint64_t)(uint16_t)(param_2 + 0x56ed);
  uVar3 = rdtsc();
  lVar7 = (uint64_t)(unaff_EBX ^ param_1) * (uVar3 & 0xffffffff) +
          ((uVar3 >> 0x20) * (uint64_t)(unaff_EBX ^ param_1) << 0x20) + 0xb;
  lVar6 = 0;
  while( true ) {
    lVar7 = lVar7 * param_3 + 0xb;
    *(char *)(lVar6 + 0x7fffa47baccb) = (char)((uint64_t)lVar7 >> 0x20);
    if (lVar6 == 0x40) break;
    lVar5 = lVar7 * 0x6f86cc7a14f3e07 + 0xb;
    lVar2 = lVar5 * 0x6f86cc7a14f3e07 + 0xb;
    lVar7 = lVar2 * param_3 + 0xb;
    *(char *)(lVar6 + 0x7fffa47bacce) = (char)((uint64_t)lVar7 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47baccc) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar6 + 0x7fffa47baccd) = (char)((uint64_t)lVar2 >> 0x20);
    lVar6 = lVar6 + 4;
  }
  uVar4 = (uint32_t)bRam00007fffa47bacd0 * 0x33333334 + 0x33333334;
  uVar8 = (uint64_t)uVar4 * 4 + (uint64_t)uVar4;
  uVar3 = uVar8 >> 0x20;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacd6) = uRam00007fffa47bad04;
  uVar1 = uRam00007fffa47bad06;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacd7) = uRam00007fffa47bad05;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacd9) = uRam00007fffa47bad07;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacdb) = uRam00007fffa47bad09;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacdd) = uRam00007fffa47bad0b;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacd8) = uVar1;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacda) = uRam00007fffa47bad08;
  *(uint8_t *)(uVar3 * 8 + 0x7fffa47bacdc) = uRam00007fffa47bad0a;
  bRam00007fffa47bacd0 = (char)(uVar8 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf5cf0  |  RVA: 0x585cf0  |  Size: 41 bytes
// Callers  : FUN_7fffa517b810@0xa0b810
// Callees  : FUN_7fffa4cf5490@0x585490
// ============================================================================
uint32_t FUN_7fffa4cf5cf0(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)FUN_7fffa4cf5490();
  return *(uint32_t *)((int64_t)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}


// ============================================================================
// Function : FUN_7fffa4cf5d1c  |  RVA: 0x585d1c  |  Size: 16 bytes
// Callers  : none
// Callees  : FUN_7fffa549cd74@0xd2cd74
// ============================================================================
uint8_t FUN_7fffa4cf5d1c(void)

{
  FUN_7fffa549cd74();
  return 1;
}


// ============================================================================
// Function : FUN_7fffa4cf5d30  |  RVA: 0x585d30  |  Size: 541 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4cf5d30(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  bRam00007fffa47bf54f = 0;
  uRam00007fffa47bf55d = 0;
  uRam00007fffa47bf565 = 0;
  uRam00007fffa47bf56d = 0;
  uRam00007fffa47bf578 = 0;
  uVar1 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)(uVar1 >> 0x20)) << 0x20 | uVar1 & 0xffffffff) * 0x9f2dd31bd5eca3f +
          1;
  lVar3 = 3;
  do {
    lVar2 = lVar2 * 0x9f2dd31bd5eca3f + 1;
    lVar4 = lVar2 * 0x9f2dd31bd5eca3f + 1;
    *(char *)(lVar3 + 0x7fffa47bf53d) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar4 * 0x9f2dd31bd5eca3f + 1;
    *(char *)(lVar3 + 0x7fffa47bf53f) = (char)((uint64_t)lVar2 >> 0x20);
    lVar2 = lVar2 * 0x9f2dd31bd5eca3f + 1;
    *(char *)(lVar3 + 0x7fffa47bf540) = (char)((uint64_t)lVar2 >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bf53e) = (char)((uint64_t)lVar4 >> 0x20);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x43);
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47bf54f * 0x55555556 + 0x55555556) * 3;
  *(uint64_t *)((uVar1 >> 0x20) * 8 + 0x7fffa47bf55d) = 0xffffffffffffffff;
  bRam00007fffa47bf54f = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf5f50  |  RVA: 0x585f50  |  Size: 712 bytes
// Callers  : FUN_7fffa52d242c@0xb6242c
// Callees  : FUN_7fffa54511cc@0xce11cc, FUN_7fffa5513504@0xda3504, FUN_7fffa5488850@0xd18850, FUN_7fffa4ecf8e0@0x75f8e0, FUN_7fffa56a15d8@0xf315d8
// ============================================================================
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7fffa4cf5f50(uint64_t param_1,int64_t param_2)

{
  uint8_t *pbVar1;
  uint8_t bVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t *puVar5;
  wchar_t *pwVar6;
  int64_t lVar7;
  uint8_t *pbVar8;
  uint64_t uVar9;
  uint8_t *pbVar10;
  uint16_t *puVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint8_t *pbVar16;
  uint8_t auStack_68 [32];
  uint64_t uStack_48;
  uint8_t abStack_40 [16];
  uint64_t uStack_30;
  
  uStack_30 = _DAT_7fffa4780040 ^ (uint64_t)auStack_68;
  uStack_48 = 0;
  abStack_40[0] = 0;
  abStack_40[1] = 0;
  abStack_40[2] = 0;
  abStack_40[3] = 0;
  abStack_40[4] = 0;
  abStack_40[5] = 0;
  abStack_40[6] = 0;
  abStack_40[7] = 0;
  abStack_40[8] = 0;
  abStack_40[9] = 0;
  abStack_40[10] = 0;
  abStack_40[0xb] = 0;
  uVar3 = FUN_7fffa54511cc();
  pwVar6 = (wchar_t *)0x0;
  if (uVar3 != 0) {
    uVar15 = 0;
    puVar5 = (uint32_t *)0x7fffa47806a0;
    uVar12 = 1;
LAB_7fffa4cf5fa7:
    if (*puVar5 != uVar3) goto code_r0x7fffa4cf5faf;
    FUN_7fffa4ecf8e0(param_2 + 0x18,0,0x101);
    pbVar16 = (uint8_t *)0x7fffa4780690;
    lVar7 = 4;
    pbVar8 = (uint8_t *)((uint64_t)uVar15 * 0x30 + 0x7fffa47806b0);
    do {
      bVar2 = *pbVar8;
      pbVar10 = pbVar8;
      while ((bVar2 != 0 && (pbVar10[1] != 0))) {
        bVar2 = *pbVar10;
        uVar13 = (uint32_t)bVar2;
        if (bVar2 <= pbVar10[1]) {
          uVar14 = (uint32_t)bVar2;
          do {
            uVar14 = uVar14 + 1;
            if (0x100 < uVar14) break;
            uVar13 = uVar13 + 1;
            pbVar1 = (uint8_t *)((uint64_t)uVar14 + 0x18 + param_2);
            *pbVar1 = *pbVar1 | *pbVar16;
          } while (uVar13 <= pbVar10[1]);
        }
        pbVar10 = pbVar10 + 2;
        bVar2 = *pbVar10;
      }
      pbVar8 = pbVar8 + 8;
      pbVar16 = pbVar16 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(uint32_t *)(param_2 + 4) = uVar3;
    *(uint32_t *)(param_2 + 8) = 1;
    if (uVar3 == 0x3a4) {
      pwVar6 = L"ja-JP";
    }
    else if (uVar3 == 0x3a8) {
      pwVar6 = L"zh-CN";
    }
    else if (uVar3 == 0x3b5) {
      pwVar6 = L"ko-KR";
    }
    else if (uVar3 == 0x3b6) {
      pwVar6 = L"zh-TW";
    }
    *(wchar_t **)(param_2 + 0x220) = pwVar6;
    puVar11 = (uint16_t *)(param_2 + 0xc);
    lVar7 = 6;
    do {
      *puVar11 = *(uint16_t *)
                  (((uint64_t)uVar15 * 0x30 - param_2) + 0x7fffa4780698 + (int64_t)puVar11);
      puVar11 = puVar11 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    goto LAB_7fffa4cf61de;
  }
LAB_7fffa4cf61e8:
  FUN_7fffa56a15d8(param_2);
LAB_7fffa4cf61f2:
  FUN_7fffa5488850(uStack_30 ^ (uint64_t)auStack_68);
  return;
code_r0x7fffa4cf5faf:
  uVar15 = uVar15 + 1;
  puVar5 = puVar5 + 0xc;
  if (4 < uVar15) goto code_r0x7fffa4cf5fbc;
  goto LAB_7fffa4cf5fa7;
code_r0x7fffa4cf5fbc:
  if ((uVar3 == 65000) || (iVar4 = (*(code *)&DAT_7ff84ea35300)(uVar3 & 0xffff), iVar4 == 0))
  goto LAB_7fffa4cf61f2;
  if (uVar3 == 0xfde9) {
    *(uint64_t *)(param_2 + 4) = 0xfde9;
    *(uint64_t *)(param_2 + 0x220) = 0;
    *(uint32_t *)(param_2 + 0x18) = 0;
    *(uint16_t *)(param_2 + 0x1c) = 0;
  }
  else {
    iVar4 = (*(code *)&DAT_7ff84ea417e0)(uVar3,&uStack_48);
    if (iVar4 == 0) {
      if (_DAT_7fffa47825d0 == 0) goto LAB_7fffa4cf61f2;
      goto LAB_7fffa4cf61e8;
    }
    FUN_7fffa4ecf8e0(param_2 + 0x18,0,0x101);
    *(uint32_t *)(param_2 + 4) = uVar3;
    *(uint64_t *)(param_2 + 0x220) = 0;
    if ((int)uStack_48 == 2) {
      pbVar8 = (uint8_t *)((int64_t)&uStack_48 + 6);
      bVar2 = uStack_48._6_1_;
      while ((bVar2 != 0 && (pbVar8[1] != 0))) {
        bVar2 = *pbVar8;
        if ((uint32_t)bVar2 <= (uint32_t)pbVar8[1]) {
          uVar3 = (uint32_t)bVar2;
          uVar9 = (uint64_t)(((uint32_t)pbVar8[1] - (uint32_t)bVar2) + 1);
          do {
            uVar3 = uVar3 + 1;
            pbVar16 = (uint8_t *)((uint64_t)uVar3 + 0x18 + param_2);
            *pbVar16 = *pbVar16 | 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        pbVar8 = pbVar8 + 2;
        bVar2 = *pbVar8;
      }
      pbVar8 = (uint8_t *)(param_2 + 0x1a);
      lVar7 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      iVar4 = *(int *)(param_2 + 4);
      if (iVar4 == 0x3a4) {
        pwVar6 = L"ja-JP";
      }
      else if (iVar4 == 0x3a8) {
        pwVar6 = L"zh-CN";
      }
      else if (iVar4 == 0x3b5) {
        pwVar6 = L"ko-KR";
      }
      else if (iVar4 == 0x3b6) {
        pwVar6 = L"zh-TW";
      }
      else {
        pwVar6 = (wchar_t *)0x0;
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar6;
    }
    else {
      uVar12 = 0;
    }
    *(uint32_t *)(param_2 + 8) = uVar12;
  }
  puVar11 = (uint16_t *)(param_2 + 0xc);
  for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
LAB_7fffa4cf61de:
  FUN_7fffa5513504(param_2);
  goto LAB_7fffa4cf61f2;
}


// ============================================================================
// Function : FUN_7fffa4cf6220  |  RVA: 0x586220  |  Size: 696 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4cf6391) */
/* WARNING: Removing unreachable block (ram,0x7fffa4cf6495) */

void FUN_7fffa4cf6220(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint32_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  bRam00007fffa47bf2f0 = 0;
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[3] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[4] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[5] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[6] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[7] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[8] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[9] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[10] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0xb] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0xc] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0xd] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0xe] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0xf] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x10] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x11] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x12] = '\0';
  uRam00007fffa47bf311 = 0;
  uRam00007fffa47bf319 = 0;
  uRam00007fffa47bf301 = 0;
  uRam00007fffa47bf309 = 0;
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x13] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x14] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x15] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x16] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x17] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x18] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x19] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x1a] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x29] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x2a] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x2b] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x2c] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x2d] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x2e] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x2f] = '\0';
  s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e[0x30] = '\0';
  uVar6 = rdtsc();
  lVar2 = (CONCAT44(0x7fff,(int)(uVar6 >> 0x20)) << 0x20 | uVar6 & 0xffffffff) * 0x576560c9d1601a8 +
          0xb;
  lVar1 = 3;
  while( true ) {
    lVar2 = lVar2 * 0x576560c9d1601a8 + 0xb;
    *(char *)(lVar1 + 0x7fffa47bf2ec) = (char)((uint64_t)lVar2 >> 0x20);
    if (lVar1 == 0x67) break;
    lVar3 = lVar2 * 0x576560c9d1601a8 + 0xb;
    lVar5 = lVar3 * 0x576560c9d1601a8 + 0xb;
    lVar2 = lVar5 * 0x576560c9d1601a8 + 0xb;
    *(char *)(lVar1 + 0x7fffa47bf2ed) = (char)((uint64_t)lVar3 >> 0x20);
    *(char *)(lVar1 + 0x7fffa47bf2ee) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar1 + 0x7fffa47bf2ef) = (char)((uint64_t)lVar2 >> 0x20);
    lVar1 = lVar1 + 4;
  }
  uVar4 = (uint32_t)bRam00007fffa47bf2f0 * 0x24924925 + 0x24924925;
  uVar6 = (uint64_t)uVar4 * 8 - (uint64_t)uVar4;
  *(uint64_t *)((uVar6 >> 0x20) * 8 + 0x7fffa47bf301) =
       s__PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP_7fffa47bf31e._41_8_;
  bRam00007fffa47bf2f0 = (char)(uVar6 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf64e0  |  RVA: 0x5864e0  |  Size: 1081 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x7fffa4cf690e) */

void FUN_7fffa4cf64e0(void)

{
  uint64_t uVar1;
  
  uRam00007fffa4786650 = 0xd19566faf7741186;
  uRam00007fffa4786668 = 0xd7884a8b91c56c89;
  uRam00007fffa4786670 = 0x8a69a3478c5c4eb7;
  uRam00007fffa4786648 = 0x5ffc2260b44c02e8;
  uRam00007fffa4786660 = 0x8ed91c6234866f5b;
  uRam00007fffa4786658 = 0x687e13a9c27d6d00;
  uVar1 = 0x5a70b0f2c2cf3ed2U - lRam00007fffa4781108 ^ uRam00007fffa4780b48;
  uVar1 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333) * 4;
  lRam00007fffa4786678 = (uVar1 >> 1 & 0x5555555555555555) + (uVar1 & 0x5555555555555555) * 2;
  uRam00007fffa4786680 = 0x27dd621414071b6b;
  return;
}


// ============================================================================
// Function : FUN_7fffa4cf6930  |  RVA: 0x586930  |  Size: 31724 bytes
// Callers  : none
// Callees  : FUN_7fffa56a5f20@0xf35f20
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4cf6930(void) {
    /* +0x586930 */ __asm { PUSH RBP }
    /* +0x586931 */ __asm { PUSH R12 }
    /* +0x586933 */ __asm { PUSH RBX }
    /* +0x586934 */ __asm { PUSH R15 }
    /* +0x586936 */ __asm { PUSH R13 }
    /* +0x586938 */ __asm { PUSH RSI }
    /* +0x586939 */ __asm { PUSH RDI }
    /* +0x58693a */ __asm { PUSH R14 }
    /* +0x58693c */ __asm { SUB RSP,0x2c8 }
    /* +0x586943 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x58694b */ __asm { MOVDQA xmmword ptr [RBP + 0x230],XMM10 }
    /* +0x586954 */ __asm { MOVAPS xmmword ptr [RBP + 0x220],XMM11 }
    /* +0x58695c */ __asm { MOVDQA xmmword ptr [RBP + 0x210],XMM15 }
    /* +0x586965 */ __asm { MOVDQA xmmword ptr [RBP + 0x200],XMM14 }
    /* +0x58696e */ __asm { MOVDQA xmmword ptr [RBP + 0x1f0],XMM9 }
    /* +0x586977 */ __asm { MOVDQA xmmword ptr [RBP + 0x1e0],XMM12 }
    /* +0x586980 */ __asm { MOVDQA xmmword ptr [RBP + 0x1d0],XMM7 }
    /* +0x586988 */ __asm { MOVDQA xmmword ptr [RBP + 0x1c0],XMM13 }
    /* +0x586991 */ __asm { MOVDQA xmmword ptr [RBP + 0x1b0],XMM6 }
    /* +0x586999 */ __asm { MOV qword ptr [RBP + 0x1a8],-0x2 }
    /* +0x5869a4 */ __asm { MOV qword ptr [RBP + -0x38],R9 }
    /* +0x5869a8 */ __asm { MOV qword ptr [RBP + 0xa8],RCX }
    /* +0x5869af */ __asm { MOV R10D,0xd595b261 }
    /* +0x5869b5 */ __asm { MOV EDX,0x84952ade }
    /* +0x5869ba */ __asm { MOV qword ptr [RBP + -0x50],RDX }
    /* +0x5869be */ __asm { MOV EAX,0x874dbd4c }
    /* +0x5869c3 */ __asm { MOV dword ptr [RBP + 0x90],EAX }
    /* +0x5869c9 */ __asm { LEA R9,[0x7fffa47901dd] }
    /* +0x5869d0 */ __asm { MOV qword ptr [RBP + 0x38],R9 }
    /* +0x5869d4 */ __asm { LEA R9,[0x7fffa4785439] }
    /* +0x5869db */ __asm { MOV qword ptr [RBP + 0x30],R9 }
    /* +0x5869df */ __asm { MOV R8D,0xfd7121b0 }
    /* +0x5869e5 */ __asm { MOV EDI,0xa927b1ff }
    /* +0x5869ea */ __asm { MOV EAX,0x7f45e415 }
    /* +0x5869ef */ __asm { MOV EBX,EAX }
    /* +0x5869f1 */ __asm { MOV R14D,0x3001a5b4 }
    /* +0x5869f7 */ __asm { XOR R14D,0x30537d23 }
    /* +0x5869fe */ __asm { ADD R14D,0xe21599f5 }
    /* +0x586a05 */ __asm { MOV EDX,0x55e57fdf }
    /* +0x586a0a */ __asm { MOV R12,RDX }
    /* +0x586a0d */ __asm { MOV AX,0x994c }
    /* +0x586a11 */ __asm { MOV R9W,0x5b3e }
    /* +0x586a16 */ __asm { MOV EDX,0x80bb9815 }
    /* +0x586a1b */ __asm { MOV qword ptr [RBP + 0xb0],RDX }
    /* +0x586a22 */ __asm { MOV R15D,0x47f3bdff }
    /* +0x586a28 */ __asm { LEA RCX,[0x7fffa4785307] }
    /* +0x586a2f */ __asm { MOV qword ptr [RBP + 0x128],RCX }
    /* +0x586a36 */ __asm { MOV ECX,0xfbf1584a }
    /* +0x586a3b */ __asm { MOV EDX,0x7278607d }
    /* +0x586a40 */ __asm { MOV R11D,0x2268791c }
    /* +0x586a46 */ __asm { MOV dword ptr [RBP + 0x140],R11D }
    /* +0x586a4d */ __asm { MOVSXD R13,R14D }
    /* +0x586a50 */ __asm { MOV ESI,R13D }
    /* +0x586a53 */ __asm { OR ESI,0x1 }
    /* +0x586a56 */ __asm { IMUL R9D,ESI }
    /* +0x586a5a */ __asm { MOV dword ptr [RBP + 0x5c],ESI }
    /* +0x586a5d */ __asm { MOV R11D,0xffffd1bd }
    /* +0x586a63 */ __asm { SUB R11D,R9D }
    /* +0x586a66 */ __asm { MOV qword ptr [RBP + 0x1a0],R11 }
    /* +0x586a6d */ __asm { ADD EBX,0x94f2532b }
    /* +0x586a73 */ __asm { MOV dword ptr [RBP + 0x48],EBX }
    /* +0x586a76 */ __asm { MOV R14,RDI }
    /* +0x586a79 */ __asm { MOV R11,R14 }
    /* +0x586a7c */ __asm { NOT R11 }
    /* +0x586a7f */ __asm { XOR R12D,0xd291c307 }
    /* +0x586a86 */ __asm { MOV qword ptr [RBP + 0x138],R12 }
    /* +0x586a8d */ __asm { IMUL EAX,EAX,0x1895 }
    /* +0x586a93 */ __asm { MOV qword ptr [RBP + -0x28],RAX }
    /* +0x586a97 */ __asm { IMUL EAX,R8D,-0x776d2727 }
    /* +0x586a9e */ __asm { ADD ECX,0xf0dee4c3 }
    /* +0x586aa4 */ __asm { ADD EDX,0x6bb8d85a }
    /* +0x586aaa */ __asm { MOV RBX,R10 }
    /* +0x586aad */ __asm { MOVQ XMM1,RBX }
    /* +0x586ab2 */ __asm { MOV R8,RBX }
    /* +0x586ab5 */ __asm { NOT R8 }
    /* +0x586ab8 */ __asm { MOV R9,RBX }
    /* +0x586abb */ __asm { XOR R9,R14 }
    /* +0x586abe */ __asm { MOV qword ptr [RBP + 0xd8],R9 }
    /* +0x586ac5 */ __asm { MOV R9,R11 }
    /* +0x586ac8 */ __asm { OR R9,RBX }
    /* +0x586acb */ __asm { MOV qword ptr [RBP + 0x20],R9 }
    /* +0x586acf */ __asm { XOR RBX,R11 }
    /* +0x586ad2 */ __asm { MOV R12,R8 }
    /* +0x586ad5 */ __asm { AND R12,R14 }
    /* +0x586ad8 */ __asm { XOR R8,R14 }
    /* +0x586adb */ __asm { MOV R9,qword ptr [RBP + -0x50] }
    /* +0x586adf */ __asm { XOR R9D,R13D }
    /* +0x586ae2 */ __asm { ROL R9D,0x10 }
    /* +0x586ae6 */ __asm { MOV qword ptr [RBP + -0x50],R9 }
    /* +0x586aea */ __asm { MOV R9,qword ptr [RBP + 0xb0] }
    /* +0x586af1 */ __asm { ADD R9D,R13D }
    /* +0x586af4 */ __asm { XOR R9D,0xc2a1f81a }
    /* +0x586afb */ __asm { MOV qword ptr [RBP + 0xb0],R9 }
    /* +0x586b02 */ __asm { XOR EDX,R13D }
    /* +0x586b05 */ __asm { IMUL ECX,ESI }
    /* +0x586b08 */ __asm { SUB R15D,R13D }
    /* +0x586b0b */ __asm { ROL R15D,0x12 }
    /* +0x586b0f */ __asm { ADD ECX,0xc67c6dd7 }
    /* +0x586b15 */ __asm { ADD R15D,0x931839d7 }
    /* +0x586b1c */ __asm { ADD EDI,R13D }
    /* +0x586b1f */ __asm { NOT EDI }
    /* +0x586b21 */ __asm { IMUL R9D,EDI,0x70ad4ca5 }
    /* +0x586b28 */ __asm { MOV qword ptr [RBP + 0x18],R9 }
    /* +0x586b2c */ __asm { ADD EAX,R13D }
    /* +0x586b2f */ __asm { MOVSXD R9,EAX }
    /* +0x586b32 */ __asm { MOV qword ptr [RBP + 0x98],R9 }
    /* +0x586b39 */ __asm { ROL EDX,0x1 }
    /* +0x586b3b */ __asm { MOV EAX,0xf9df8e }
    /* +0x586b40 */ __asm { XOR EAX,R13D }
    /* +0x586b43 */ __asm { ADD EAX,0xb8cf760c }
    /* +0x586b48 */ __asm { ADD R8,qword ptr [RBP + 0xd8] }
    /* +0x586b4f */ __asm { IMUL R9,R8,-0x52b2efd }
    /* +0x586b56 */ __asm { MOV qword ptr [RBP + 0x188],R9 }
    /* +0x586b5d */ __asm { MOV EDI,dword ptr [RBP + 0x48] }
    /* +0x586b60 */ __asm { XOR EDI,0xbd01c1db }
    /* +0x586b66 */ __asm { ADD EDI,R13D }
    /* +0x586b69 */ __asm { MOV R8D,0x460daf4a }
    /* +0x586b6f */ __asm { XOR R8D,R13D }
    /* +0x586b72 */ __asm { IMUL R8D,R8D,-0x31d09efd }
    /* +0x586b79 */ __asm { CMP R8,RAX }
    /* +0x586b7c */ __asm { MOV R8,qword ptr [RBP + 0x20] }
    /* +0x586b80 */ __asm { CMOVGE R8,RBX }
    /* +0x586b84 */ __asm { MOV qword ptr [RBP + 0x48],R8 }
    /* +0x586b88 */ __asm { MOV R9D,dword ptr [RBP + 0x140] }
    /* +0x586b8f */ __asm { XOR R9D,R13D }
    /* +0x586b92 */ __asm { MOV R8D,0x855d162 }
    /* +0x586b98 */ __asm { ADD R8D,R13D }
    /* +0x586b9b */ __asm { ADD R8D,0xed936528 }
    /* +0x586ba2 */ __asm { ROL R8D,0x9 }
    /* +0x586ba6 */ __asm { NOT R9D }
    /* +0x586ba9 */ __asm { MOV RAX,qword ptr [RBP + 0x138] }
    /* +0x586bb0 */ __asm { ADD EAX,R13D }
    /* +0x586bb3 */ __asm { ROL R9D,0x4 }
    /* +0x586bb7 */ __asm { MOV dword ptr [RBP + 0x140],R9D }
    /* +0x586bbe */ __asm { CMP RDX,RCX }
    /* +0x586bc1 */ __asm { MOV qword ptr [RBP + 0x130],R11 }
    /* +0x586bc8 */ __asm { MOVQ XMM3,R11 }
    /* +0x586bcd */ __asm { PAND XMM3,XMM1 }
    /* +0x586bd1 */ __asm { MOVQ RDX,XMM3 }
    /* +0x586bd6 */ __asm { CMOVBE RBX,RDX }
    /* +0x586bda */ __asm { MOV R11D,dword ptr [RBP + 0x90] }
    /* +0x586be1 */ __asm { XOR R11D,0x44759f26 }
    /* +0x586be8 */ __asm { MOV ECX,R13D }
    /* +0x586beb */ __asm { ROL R11D,CL }
    /* +0x586bee */ __asm { MOVSXD RSI,R11D }
    /* +0x586bf1 */ __asm { ADD RSI,R15 }
    /* +0x586bf4 */ __asm { MOV RCX,RAX }
    /* +0x586bf7 */ __asm { MOV R9,RCX }
    /* +0x586bfa */ __asm { NOT R9 }
    /* +0x586bfd */ __asm { MOV qword ptr [RBP + 0x60],R14 }
    /* +0x586c01 */ __asm { MOVQ XMM11,R14 }
    /* +0x586c06 */ __asm { MOVDQA XMM3,XMM11 }
    /* +0x586c0b */ __asm { PXOR XMM3,XMM1 }
    /* +0x586c0f */ __asm { MOVSXD R11,EDI }
    /* +0x586c12 */ __asm { MOV qword ptr [RBP + 0x90],R11 }
    /* +0x586c19 */ __asm { MOVSXD R11,R8D }
    /* +0x586c1c */ __asm { MOV qword ptr [RBP + -0x48],R11 }
    /* +0x586c20 */ __asm { MOV qword ptr [RBP + 0x138],RAX }
    /* +0x586c27 */ __asm { MOV R14,qword ptr [RBP + 0x18] }
    /* +0x586c2b */ __asm { IMUL RSI,R12 }
    /* +0x586c2f */ __asm { IMUL R10D,dword ptr [RBP + 0x5c] }
    /* +0x586c34 */ __asm { ROL R10D,0x1c }
    /* +0x586c38 */ __asm { XOR R10D,0xe25fde2f }
    /* +0x586c3f */ __asm { MOV R8,qword ptr [RBP + 0xd8] }
    /* +0x586c46 */ __asm { AND R8,R10 }
    /* +0x586c49 */ __asm { OR R8,R9 }
    /* +0x586c4c */ __asm { MOV R11,R8 }
    /* +0x586c4f */ __asm { MOV RAX,R10 }
    /* +0x586c52 */ __asm { XOR RAX,R12 }
    /* +0x586c55 */ __asm { MOVQ R8,XMM3 }
    /* +0x586c5a */ __asm { OR R8,R10 }
    /* +0x586c5d */ __asm { XOR RDX,R10 }
    /* +0x586c60 */ __asm { MOV R15,RCX }
    /* +0x586c63 */ __asm { OR R15,R10 }
    /* +0x586c66 */ __asm { MOV RDI,R10 }
    /* +0x586c69 */ __asm { NEG RDI }
    /* +0x586c6c */ __asm { CMP R14,0x4ea2e1c4 }
    /* +0x586c73 */ __asm { MOV R14,R10 }
    /* +0x586c76 */ __asm { NOT R14 }
    /* +0x586c79 */ __asm { CMOVNZ R14,RDI }
    /* +0x586c7d */ __asm { MOVQ XMM1,R8 }
    /* +0x586c82 */ __asm { AND RDX,RCX }
    /* +0x586c85 */ __asm { ADD RDX,R11 }
    /* +0x586c88 */ __asm { NOT R15 }
    /* +0x586c8b */ __asm { AND R15,RBX }
    /* +0x586c8e */ __asm { ADD R15,RDX }
    /* +0x586c91 */ __asm { MOVQ XMM3,RCX }
    /* +0x586c96 */ __asm { PXOR XMM1,XMM3 }
    /* +0x586c9a */ __asm { MOVQ R11,XMM1 }
    /* +0x586c9f */ __asm { ADD R15,R11 }
    /* +0x586ca2 */ __asm { OR R14,qword ptr [RBP + 0x48] }
    /* +0x586ca6 */ __asm { IMUL RDI,R15,-0x512abee1 }
    /* +0x586cad */ __asm { AND R12,R10 }
    /* +0x586cb0 */ __asm { MOV R11,qword ptr [RBP + 0x138] }
    /* +0x586cb7 */ __asm { CMP qword ptr [RBP + 0x98],R11 }
    /* +0x586cbe */ __asm { MOVSXD RDX,dword ptr [RBP + 0x140] }
    /* +0x586cc5 */ __asm { MOV R11,qword ptr [RBP + 0x38] }
    /* +0x586cc9 */ __asm { MOVZX EDX,uint8_t ptr [R11 + RDX*0x1 + 0xe] }
    /* +0x586ccf */ __asm { CMOVC R12,RAX }
    /* +0x586cd3 */ __asm { OR R10,qword ptr [RBP + 0x20] }
    /* +0x586cd7 */ __asm { AND R12,R9 }
    /* +0x586cda */ __asm { IMUL R12,R12,-0x34ee398d }
    /* +0x586ce1 */ __asm { MOV R11,R10 }
    /* +0x586ce4 */ __asm { AND R11,R9 }
    /* +0x586ce7 */ __asm { MOV RAX,R10 }
    /* +0x586cea */ __asm { SUB RAX,R9 }
    /* +0x586ced */ __asm { MOV R8,qword ptr [RBP + -0x48] }
    /* +0x586cf1 */ __asm { CMP R8,qword ptr [RBP + 0xb0] }
    /* +0x586cf8 */ __asm { MOVQ XMM1,R10 }
    /* +0x586cfd */ __asm { CMOVL RAX,R11 }
    /* +0x586d01 */ __asm { MOV R10D,0xd743b74f }
    /* +0x586d07 */ __asm { IMUL R10,RAX }
    /* +0x586d0b */ __asm { MOV qword ptr [RBP + 0x148],R9 }
    /* +0x586d12 */ __asm { MOVQ XMM3,R9 }
    /* +0x586d17 */ __asm { PXOR XMM1,XMM3 }
    /* +0x586d1b */ __asm { MOVQ R11,XMM1 }
    /* +0x586d20 */ __asm { MOV EAX,0x94373b18 }
    /* +0x586d25 */ __asm { IMUL RAX,R11 }
    /* +0x586d29 */ __asm { MOV R9,qword ptr [RBP + -0x50] }
    /* +0x586d2d */ __asm { MOV qword ptr [RBP + 0xa0],RCX }
    /* +0x586d34 */ __asm { XOR R14,RCX }
    /* +0x586d37 */ __asm { IMUL R8,R14,0xe1e42aa }
    /* +0x586d3e */ __asm { OR R14,0xe1e42aa }
    /* +0x586d45 */ __asm { CMP R9,qword ptr [RBP + 0x90] }
    /* +0x586d4c */ __asm { MOVSX R11,word ptr [RBP + 0x1a0] }
    /* +0x586d54 */ __asm { MOV R9,qword ptr [RBP + 0x30] }
    /* +0x586d58 */ __asm { MOV R11,qword ptr [R9 + R11*0x1 + 0x50] }
    /* +0x586d5d */ __asm { CMOVGE R14,R8 }
    /* +0x586d61 */ __asm { ADD RAX,R10 }
    /* +0x586d64 */ __asm { ADD RAX,R12 }
    /* +0x586d67 */ __asm { ADD RAX,R14 }
    /* +0x586d6a */ __asm { MOV R14,R13 }
    /* +0x586d6d */ __asm { ADD RDI,RSI }
    /* +0x586d70 */ __asm { ADD RDI,qword ptr [RBP + 0x188] }
    /* +0x586d77 */ __asm { ADD RDI,RAX }
    /* +0x586d7a */ __asm { MOV R9,qword ptr [RBP + -0x28] }
    /* +0x586d7e */ __asm { LEA ECX,[RDI + R9*0x1] }
    /* +0x586d82 */ __asm { XOR ECX,0xffff8f3f }
    /* +0x586d88 */ __asm { ADD ECX,R14D }
    /* +0x586d8b */ __asm { MOVSX R9,CX }
    /* +0x586d8f */ __asm { ADD R9,qword ptr [RBP + 0x128] }
    /* +0x586d96 */ __asm { MOVZX R10D,DL }
    /* +0x586d9a */ __asm { MOV qword ptr [RBP + 0x50],R10 }
    /* +0x586d9e */ __asm { XOR R11,qword ptr [R9 + R10*0x8 + 0xf] }
    /* +0x586da3 */ __asm { MOVQ XMM1,R11 }
    /* +0x586da8 */ __asm { PCMPEQD XMM3,XMM3 }
    /* +0x586dac */ __asm { PXOR XMM3,XMM1 }
    /* +0x586db0 */ __asm { MOVQ qword ptr [RBP + -0x20],XMM3 }
    /* +0x586db5 */ __asm { MOV RCX,qword ptr [RBP + -0x20] }
    /* +0x586db9 */ __asm { MOV R15,RCX }
    /* +0x586dbc */ __asm { TEST RCX,RCX }
    /* +0x586dbf */ __asm { MOV qword ptr [RBP + 0x28],R13 }
    /* +0x586dc3 */ __asm { MOV qword ptr [RBP + -0x50],RDI }
    /* +0x586dc7 */ __asm { MOV R9,qword ptr [RBP + -0x38] }
    /* +0x586dcb */ __asm { JZ 0x7fffa4cfccea }
    /* +0x586dd1 */ __asm { MOV qword ptr [RBP + 0x30],R15 }
    /* +0x586dd5 */ __asm { MOVD XMM12,R14D }
    /* +0x586dda */ __asm { TEST R9,R9 }
    /* +0x586ddd */ __asm { JZ 0x7fffa4cf711e }
    /* +0x586de3 */ __asm { MOV R15,R9 }
    /* +0x586de6 */ __asm { MOV qword ptr [RBP + 0x128],RCX }
    /* +0x586ded */ __asm { MOV AX,0x41ff }
    /* +0x586df1 */ __asm { MOV EDX,dword ptr [RBP + 0x5c] }
    /* +0x586df4 */ __asm { IMUL EDX,EAX }
    /* +0x586df7 */ __asm { XOR EDX,0x5de5 }
    /* +0x586dfd */ __asm { LEA R9,[0x7fffa562a29a] }
    /* +0x586e04 */ __asm { MOVSX R11,DX }
    /* +0x586e08 */ __asm { ADD R11,R9 }
    /* +0x586e0b */ __asm { MOV RCX,R15 }
    /* +0x586e0e */ __asm { CALL R11 }
    /* +0x586e11 */ __asm { PXOR XMM1,XMM1 }
    /* +0x586e15 */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM1 }
    /* +0x586e1a */ __asm { MOV qword ptr [RBP + 0x80],0x0 }
    /* +0x586e25 */ __asm { MOV qword ptr [RBP + 0x88],0x7 }
    /* +0x586e30 */ __asm { XOR R10D,R10D }
    /* +0x586e33 */ __asm { MOV R8D,EDI }
    /* +0x586e36 */ __asm { OR R8D,0x1 }
    /* +0x586e3a */ __asm { MOV dword ptr [RBP + 0x20],R8D }
    /* +0x586e3e */ __asm { MOV qword ptr [RBP + 0x138],RAX }
    /* +0x586e45 */ __asm { JMP 0x7fffa4cf6e6c }
    /* +0x586e50 */ __asm { LEA RCX,[R12 + 0x1] }
    /* +0x586e55 */ __asm { MOV qword ptr [RBP + 0x80],RCX }
    /* +0x586e5c */ __asm { MOV word ptr [R9 + R12*0x2 + 0x2],0x0 }
    /* +0x586e64 */ __asm { MOV word ptr [R9 + R12*0x2],R8W }
    /* +0x586e69 */ __asm { INC R10 }
    /* +0x586e6c */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x586e73 */ __asm { MOV R8,0x0 }
    /* +0x586e7a */ __asm { NOP }
    /* +0x586e7c */ __asm { CMP RAX,R10 }
    /* +0x586e7f */ __asm { JZ 0x7fffa4cf718b }
    /* +0x586e85 */ __asm { MOV R8,0x0 }
    /* +0x586e8c */ __asm { NOP }
    /* +0x586e8e */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x586e95 */ __asm { MOVSX R8D,uint8_t ptr [R15 + R10*0x1] }
    /* +0x586e9a */ __asm { MOV RBX,qword ptr [RBP + 0x88] }
    /* +0x586ea1 */ __asm { TEST R8W,R8W }
    /* +0x586ea5 */ __asm { JS 0x7fffa4cf71a8 }
    /* +0x586eab */ __asm { MOV R12,qword ptr [RBP + 0x80] }
    /* +0x586eb2 */ __asm { CMP R12,RBX }
    /* +0x586eb5 */ __asm { JC 0x7fffa4cf6fd0 }
    /* +0x586ebb */ __asm { MOV R9,0x5ffffff5d978cd6 }
    /* +0x586ec5 */ __asm { MOV ECX,0xc000009d }
    /* +0x586eca */ __asm { ADD R9,RCX }
    /* +0x586ecd */ __asm { XOR R9,R14 }
    /* +0x586ed0 */ __asm { MOV ECX,EDI }
    /* +0x586ed2 */ __asm { ROL R9,CL }
    /* +0x586ed5 */ __asm { CMP R12,R9 }
    /* +0x586ed8 */ __asm { JZ 0x7fffa4cfcbc4 }
    /* +0x586ede */ __asm { MOV dword ptr [RBP + 0x140],R8D }
    /* +0x586ee5 */ __asm { MOV qword ptr [RBP + 0xb0],R10 }
    /* +0x586eec */ __asm { LEA R15,[R12 + 0x1] }
    /* +0x586ef1 */ __asm { MOV R9,R15 }
    /* +0x586ef4 */ __asm { OR R9,0x7 }
    /* +0x586ef8 */ __asm { MOV RCX,0x7ffffffffffffffe }
    /* +0x586f02 */ __asm { MOV R13,RCX }
    /* +0x586f05 */ __asm { CMP R9,RCX }
    /* +0x586f08 */ __asm { JA 0x7fffa4cf6f32 }
    /* +0x586f0a */ __asm { MOV RCX,RBX }
    /* +0x586f0d */ __asm { SHR RCX,0x1 }
    /* +0x586f10 */ __asm { MOV R13,0x7ffffffffffffffe }
    /* +0x586f1a */ __asm { MOV R11,R13 }
    /* +0x586f1d */ __asm { SUB R11,RCX }
    /* +0x586f20 */ __asm { CMP RBX,R11 }
    /* +0x586f23 */ __asm { JA 0x7fffa4cf6f32 }
    /* +0x586f25 */ __asm { ADD RCX,RBX }
    /* +0x586f28 */ __asm { CMP R9,RCX }
    /* +0x586f2b */ __asm { CMOVA RCX,R9 }
    /* +0x586f2f */ __asm { MOV R13,RCX }
    /* +0x586f32 */ __asm { MOV AX,0xb09 }
    /* +0x586f36 */ __asm { LEA R9,[0x7fffa526f8f7] }
    /* +0x586f3d */ __asm { IMUL EAX,dword ptr [RBP + 0x20] }
    /* +0x586f41 */ __asm { SUB EAX,R14D }
    /* +0x586f44 */ __asm { ROR AX,0x1 }
    /* +0x586f47 */ __asm { MOVSX RCX,AX }
    /* +0x586f4b */ __asm { ADD RCX,R9 }
    /* +0x586f4e */ __asm { LEA R10,[0x2 + R13*0x2] }
    /* +0x586f56 */ __asm { MOV RDI,RBX }
    /* +0x586f59 */ __asm { MOV RBX,R10 }
    /* +0x586f5c */ __asm { SHL RBX,0x3c }
    /* +0x586f60 */ __asm { XOR RBX,R10 }
    /* +0x586f63 */ __asm { SHL R10,0xe }
    /* +0x586f67 */ __asm { MOV R9,0x1865d799980f }
    /* +0x586f71 */ __asm { ADD R10,R9 }
    /* +0x586f74 */ __asm { ADD R10,RBX }
    /* +0x586f77 */ __asm { MOV RAX,-0x398970f2 }
    /* +0x586f7e */ __asm { CALL RCX }
    /* +0x586f80 */ __asm { MOV RSI,RCX }
    /* +0x586f83 */ __asm { ROL RSI,0x2c }
    /* +0x586f87 */ __asm { MOV R9,RSI }
    /* +0x586f8a */ __asm { SHL R9,0x36 }
    /* +0x586f8e */ __asm { SUB RSI,R9 }
    /* +0x586f91 */ __asm { MOV qword ptr [RBP + 0x80],R15 }
    /* +0x586f98 */ __asm { MOV qword ptr [RBP + 0x88],R13 }
    /* +0x586f9f */ __asm { CMP RDI,0x8 }
    /* +0x586fa3 */ __asm { JNC 0x7fffa4cf6ff0 }
    /* +0x586fa5 */ __asm { LEA R8,[R12 + R12*0x1] }
    /* +0x586fa9 */ __asm { LEA RDX,[RBP + 0x70] }
    /* +0x586fad */ __asm { MOV RCX,RSI }
    /* +0x586fb0 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x586fb5 */ __asm { MOV EAX,dword ptr [RBP + 0x140] }
    /* +0x586fbb */ __asm { MOV word ptr [RSI + R12*0x2],AX }
    /* +0x586fc0 */ __asm { MOV word ptr [RSI + R12*0x2 + 0x2],0x0 }
    /* +0x586fc8 */ __asm { JMP 0x7fffa4cf70fc }
    /* +0x586fd0 */ __asm { LEA R9,[RBP + 0x70] }
    /* +0x586fd4 */ __asm { CMP RBX,0x8 }
    /* +0x586fd8 */ __asm { JC 0x7fffa4cf6e50 }
    /* +0x586fde */ __asm { MOV R9,qword ptr [RBP + 0x70] }
    /* +0x586fe2 */ __asm { JMP 0x7fffa4cf6e50 }
    /* +0x586ff0 */ __asm { MOV EAX,0x66f7447c }
    /* +0x586ff5 */ __asm { LEA R9,[0x7fffa5694eba] }
    /* +0x586ffc */ __asm { MOV R8D,0xb9329a71 }
    /* +0x587002 */ __asm { ADD R8D,0x35433982 }
    /* +0x587009 */ __asm { MOV R15D,0xf8dd81b3 }
    /* +0x58700f */ __asm { SUB R15D,R14D }
    /* +0x587012 */ __asm { XOR R15D,0x7a493372 }
    /* +0x587019 */ __asm { ROL R15D,0x3 }
    /* +0x58701d */ __asm { IMUL R8D,dword ptr [RBP + 0x5c] }
    /* +0x587022 */ __asm { NOP }
    /* +0x587024 */ __asm { MOV R11,0x0 }
    /* +0x58702b */ __asm { LEA R10,[0x7fffa4770000] }
    /* +0x587032 */ __asm { MOV RDX,qword ptr [RBP + 0x70] }
    /* +0x587036 */ __asm { MOV RCX,RDX }
    /* +0x587039 */ __asm { MOV R13,RCX }
    /* +0x58703c */ __asm { SHR R13,0x3d }
    /* +0x587040 */ __asm { XOR R13,RCX }
    /* +0x587043 */ __asm { ROL R8D,0xa }
    /* +0x587047 */ __asm { MOV RCX,qword ptr [RBP + -0x50] }
    /* +0x58704b */ __asm { ROR R8D,CL }
    /* +0x58704e */ __asm { MOV R10D,ECX }
    /* +0x587051 */ __asm { OR R10D,0x1 }
    /* +0x587055 */ __asm { MOVSXD R11,R8D }
    /* +0x587058 */ __asm { ADD R11,R9 }
    /* +0x58705b */ __asm { MOV qword ptr [RBP + 0xd8],R11 }
    /* +0x587062 */ __asm { IMUL R10D,EAX }
    /* +0x587066 */ __asm { MOV EAX,0x71e5b172 }
    /* +0x58706b */ __asm { MOV EDI,0x4b6c2243 }
    /* +0x587070 */ __asm { SUB EDI,EAX }
    /* +0x587072 */ __asm { MOV R14,RBX }
    /* +0x587075 */ __asm { NOT R14 }
    /* +0x587078 */ __asm { ROR EDI,CL }
    /* +0x58707a */ __asm { MOV R9,-0x100a9db28 }
    /* +0x587084 */ __asm { ADD RDI,R9 }
    /* +0x587087 */ __asm { IMUL RDI,RBX }
    /* +0x58708b */ __asm { IMUL RBX,R14,-0x3820e65a }
    /* +0x587092 */ __asm { ROL R10D,0x1a }
    /* +0x587096 */ __asm { MOV R9,-0x8122db0b }
    /* +0x5870a0 */ __asm { IMUL R14,R9 }
    /* +0x5870a4 */ __asm { XOR R10D,0xc0000026 }
    /* +0x5870ab */ __asm { MOVD XMM14,R10D }
    /* +0x5870b0 */ __asm { LEA R8,[R12 + R12*0x1] }
    /* +0x5870b4 */ __asm { MOV RCX,RSI }
    /* +0x5870b7 */ __asm { CALL 0x7fffa56a5f20 }
    /* +0x5870bc */ __asm { MOV word ptr [RSI + R12*0x2 + 0x2],0x0 }
    /* +0x5870c4 */ __asm { MOV EAX,dword ptr [RBP + 0x140] }
    /* +0x5870ca */ __asm { MOV word ptr [RSI + R12*0x2],AX }
    /* +0x5870cf */ __asm { PADDD XMM14,XMM12 }
    /* +0x5870d4 */ __asm { MOVD EDX,XMM14 }
    /* +0x5870d9 */ __asm { CMP R15,RDX }
    /* +0x5870dc */ __asm { MOV R9D,0x8122db0b }
    /* +0x5870e2 */ __asm { CMOVBE R14,R9 }
    /* +0x5870e6 */ __asm { ADD RDI,RBX }
    /* +0x5870e9 */ __asm { ADD RDI,R14 }
    /* +0x5870ec */ __asm { MOV R14,qword ptr [RBP + 0x28] }
    /* +0x5870f0 */ __asm { MOV R11,RDI }
    /* +0x5870f3 */ __asm { MOV R8,R13 }
    /* +0x5870f6 */ __asm { CALL qword ptr [RBP + 0xd8] }
    /* +0x5870fc */ __asm { MOV R15,qword ptr [RBP + -0x38] }
    /* +0x587100 */ __asm { MOV qword ptr [RBP + 0x70],RSI }
    /* +0x587104 */ __asm { MOV R10,qword ptr [RBP + 0xb0] }
    /* +0x58710b */ __asm { INC R10 }
    /* +0x58710e */ __asm { MOV RDI,qword ptr [RBP + -0x50] }
    /* +0x587112 */ __asm { MOV RAX,qword ptr [RBP + 0x138] }
    /* +0x587119 */ __asm { JMP 0x7fffa4cf6e6c }
    /* +0x58711e */ __asm { MOV EAX,0xcc8843d9 }
    /* +0x587123 */ __asm { ADD EAX,0x7814274c }
    /* +0x587128 */ __asm { XOR EAX,R14D }
    /* +0x58712b */ __asm { MOV EDX,0x657b36b7 }
    /* +0x587130 */ __asm { SUB EDX,EAX }
    /* +0x587132 */ __asm { MOV EAX,0x4a4bf7c3 }
    /* +0x587137 */ __asm { ADD EAX,R14D }
    /* +0x58713a */ __asm { XOR EAX,EDI }
    /* +0x58713c */ __asm { MOV ECX,0xaeaad923 }
    /* +0x587141 */ __asm { SUB ECX,EAX }
    /* +0x587143 */ __asm { CMP RCX,RDX }
    /* +0x587146 */ __asm { JGE 0x7fffa4cf74d2 }
    /* +0x58714c */ __asm { MOV R8,0x1f1bb4d50d63e482 }
    /* +0x587156 */ __asm { MOV dword ptr [RBP + -0x20],0x490a5108 }
    /* +0x58715d */ __asm { MOV EAX,dword ptr [RBP + -0x20] }
    /* +0x587160 */ __asm { MOV R12,-0x7c9a946e51875990 }
    /* +0x58716a */ __asm { MOV EDX,0xca2c59dc }
    /* +0x58716f */ __asm { XOR EDX,R14D }
    /* +0x587172 */ __asm { MOV ECX,EDI }
    /* +0x587174 */ __asm { ROR EDX,CL }
    /* +0x587176 */ __asm { ADD EDX,0x4f9da0a7 }
    /* +0x58717c */ __asm { ROL EDX,0x1a }
    /* +0x58717f */ __asm { MOV qword ptr [RBP + 0xb0],RDX }
    /* +0x587186 */ __asm { JMP 0x7fffa4cf7505 }
    /* +0x58718b */ __asm { MOVDQA XMM1,xmmword ptr [RBP + 0x70] }
    /* +0x587190 */ __asm { MOVDQA XMM3,xmmword ptr [RBP + 0x80] }
    /* +0x587198 */ __asm { MOVDQA xmmword ptr [RBP + -0x10],XMM3 }
    /* +0x58719d */ __asm { MOVDQA xmmword ptr [RBP + -0x20],XMM1 }
    /* +0x5871a2 */ __asm { MOV uint8_t ptr [RBP],0x1 }
    /* +0x5871a6 */ __asm { JMP 0x7fffa4cf721c }
    /* +0x5871a8 */ __asm { MOV AX,0x867d }
    /* +0x5871ac */ __asm { MOV R8D,dword ptr [RBP + 0x5c] }
    /* +0x5871b0 */ __asm { IMUL R8D,EAX }
    /* +0x5871b4 */ __asm { MOV EAX,EDI }
    /* +0x5871b6 */ __asm { XOR EAX,R8D }
    /* +0x5871b9 */ __asm { IMUL EAX,EAX,-0x7ee7 }
    /* +0x5871bf */ __asm { MOVZX EDX,AX }
    /* +0x5871c2 */ __asm { MOV uint8_t ptr [RBP],0x0 }
    /* +0x5871c6 */ __asm { CMP RBX,RDX }
    /* +0x5871c9 */ __asm { JBE 0x7fffa4cfd03b }
    /* +0x5871cf */ __asm { MOV AX,0xf70a }
    /* +0x5871d3 */ __asm { XOR EAX,0x554 }
    /* +0x5871d8 */ __asm { MOV R9,qword ptr [RBP + 0x70] }
    /* +0x5871dc */ __asm { MOV R8,R9 }
    /* +0x5871df */ __asm { SHR R8,0x3d }
    /* +0x5871e3 */ __asm { XOR R8,R9 }
    /* +0x5871e6 */ __asm { ADD EAX,R14D }
    /* +0x5871e9 */ __asm { ROL AX,0x8 }
    /* +0x5871ed */ __asm { MOVSX R9,AX }
    /* +0x5871f1 */ __asm { LEA RCX,[0x7fffa56891cc] }
    /* +0x5871f8 */ __asm { ADD RCX,R9 }
    /* +0x5871fb */ __asm { MOV R11D,0xb943c165 }
    /* +0x587201 */ __asm { CALL RCX }
    /* +0x587203 */ __asm { MOVZX R10D,uint8_t ptr [RBP] }
    /* +0x587208 */ __asm { TEST R10B,0x1 }
    /* +0x58720c */ __asm { JZ 0x7fffa4cfd04b }
    /* +0x587212 */ __asm { TEST R10B,0x1 }
    /* +0x587216 */ __asm { JZ 0x7fffa4cfd187 }
    /* +0x58721c */ __asm { CMP qword ptr [RBP + -0x8],0x8 }
    /* +0x587221 */ __asm { JC 0x7fffa4cf7229 }
    /* +0x587223 */ __asm { MOV R12,qword ptr [RBP + -0x20] }
    /* +0x587227 */ __asm { JMP 0x7fffa4cf722d }
    /* +0x587229 */ __asm { LEA R12,[RBP + -0x20] }
    /* +0x58722d */ __asm { MOV dword ptr [RBP + 0x70],0x490a5108 }
    /* +0x587234 */ __asm { MOV R15D,dword ptr [RBP + 0x70] }
    /* +0x587238 */ __asm { PXOR XMM1,XMM1 }
    /* +0x58723c */ __asm { MOVDQA xmmword ptr [RBP + 0x70],XMM1 }
}


// ============================================================================
// Function : Unwind@7fffa4d01ff0  |  RVA: 0x591ff0  |  Size: 1326 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4d01ff0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  uint32_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  uint64_t unaff_R12;
  uint64_t uVar17;
  uint64_t unaff_R14;
  uint64_t uVar18;
  uint32_t uVar19;
  uint64_t unaff_R15;
  
  uVar10 = (uint32_t)*(uint64_t *)(param_2 + 0x30) | 1;
  if ((uint64_t)(0xb035a8bc - (*(int *)(param_2 + 0x130) + 0x1e3b11a1) * uVar10) <
      *(uint64_t *)(param_2 + 0x198)) {
    iVar8 = (int)*(uint64_t *)(param_2 + 0xa8) - *(int *)(param_2 + 0x30);
    uVar7 = iVar8 + 0x3cea403c;
    (*(code *)(&UNK_7fffa569137e + (int)~(uVar7 * 0x4000 | uVar7 >> 0x12)))
              (&UNK_7fffa569137e + (int)~(uVar7 * 0x4000 | uVar7 >> 0x12),iVar8,
               *(uint64_t *)(param_2 + 0x180) >> 0x3d ^ *(uint64_t *)(param_2 + 0x180));
  }
  *(uint16_t *)(param_2 + 0x180) = 0;
  *(uint64_t *)(param_2 + 0x198) = 7;
  *(uint64_t *)(param_2 + 400) = 0;
  if (7 < *(uint64_t *)(param_2 + 0x108)) {
    *(uint64_t *)(param_2 + 0x48) = 0x47ea7604;
    *(uint32_t *)(param_2 + 0x1c0) = 0xd24747e1;
    *(uint64_t *)(param_2 + 0xa0) = 0x570f4d20be7a122d;
    uVar16 = ~unaff_R12;
    uVar13 = uVar16 & unaff_R15;
    *(uint64_t *)(param_2 + 0xb0) = (~unaff_R14 & uVar13) * -0xcd3aa480;
    uVar18 = ~unaff_R15;
    *(uint64_t *)(param_2 + 0x220) = uVar16 & uVar18;
    *(uint64_t *)(param_2 + 0x1b8) = unaff_R14;
    *(uint64_t *)(param_2 + 0xb8) =
         (~unaff_R14 & (uVar18 | unaff_R12)) * -0x88d1c300 +
         (unaff_R14 ^ uVar16 & uVar18) * -0x74dadfe5;
    uVar17 = ~unaff_R14;
    *(uint64_t *)(param_2 + 0x208) = unaff_R14 ^ unaff_R12 ^ unaff_R15;
    *(uint64_t *)(param_2 + 0x1a8) = ((unaff_R12 ^ unaff_R15) & uVar17) * -0x1cdb4474f;
    *(uint64_t *)(param_2 + 0x158) = uVar18 ^ unaff_R12;
    *(uint64_t *)(param_2 + 0x58) = unaff_R15 & unaff_R12;
    *(uint64_t *)(param_2 + 0x118) = unaff_R14 ^ (unaff_R15 | uVar16);
    uVar12 = (unaff_R15 | uVar16) ^ unaff_R14;
    *(uint64_t *)(param_2 + 0x110) = unaff_R14;
    *(uint64_t *)(param_2 + 200) = uVar12 * 0xd0ca1fec;
    uVar19 = (uint32_t)*(int64_t *)(param_2 + 0x30);
    uVar16 = *(uint64_t *)(param_2 + 0xa8);
    iVar8 = (int)uVar16;
    uVar1 = *(uint64_t *)(param_2 + 0x130);
    bVar5 = (uint8_t)uVar1 & 0x1f;
    uVar10 = (*(uint32_t *)(param_2 + 0x130) ^ 0xf830801f) * uVar10 + iVar8;
    uVar14 = uVar10 * 0x8000000 | uVar10 >> 5;
    uVar2 = *(uint64_t *)(param_2 + 0x220);
    *(uint64_t *)(param_2 + 0x220) =
         ((uVar13 & unaff_R14) * 0xc21f5716 + uVar12 * 0x161003bc) -
         ((unaff_R12 | unaff_R15) ^ unaff_R14);
    *(uint64_t *)(param_2 + 0x130) = uVar1;
    uVar7 = (uint32_t)uVar1 | 1;
    uVar10 = *(int *)(param_2 + 0x1c0) * uVar7;
    bVar4 = (uint8_t)uVar16 & 0x1f;
    *(uint32_t *)(param_2 + 0x1c0) = uVar10 << bVar4 | uVar10 >> 0x20 - bVar4;
    uVar15 = (uVar19 ^ 0xe373ff) << 4 | uVar19 >> 0x1c;
    bVar6 = (uint8_t)uVar16 & 0x1f;
    *(uint64_t *)(param_2 + 0x48) =
         (uint64_t)
         (((int)*(uint64_t *)(param_2 + 0x48) + (uint32_t)uVar1) * *(int *)(param_2 + 0xdc) +
          0xcb0230cb ^ uVar19);
    lVar3 = *(int64_t *)(param_2 + 0x208);
    lVar9 = (int64_t)(int)((0x8123c914U >> bVar5 | -0x7edc36ec << 0x20 - bVar5) + (uVar19 - iVar8))
            + 0x7fffa56949b1;
    *(int64_t *)(param_2 + 0x208) = lVar9;
    uVar12 = (uVar18 | unaff_R12) & *(uint64_t *)(param_2 + 0x1b8);
    uVar10 = *(int *)(param_2 + 0xdc) * 0x5ae33f69 - uVar19;
    bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x130) & 0x1f;
    lVar11 = (uVar13 | uVar17) - 0x24bacc92;
    if ((uint64_t)(uVar10 << bVar4 | uVar10 >> 0x20 - bVar4) <
        (uint64_t)(int64_t)(int)(*(int *)(param_2 + 0x1c0) + 0xeb4d8296U ^ uVar19)) {
      lVar11 = (uVar13 | uVar17) * 0x24bacc92;
    }
    uVar13 = lVar11 + (uint64_t)((uVar19 ^ 0xb5c24f2) - iVar8) * lVar3 +
                      *(int64_t *)(param_2 + 200);
    uVar18 = (*(uint64_t *)(param_2 + 0x158) | *(uint64_t *)(param_2 + 0x110)) *
             ((*(int64_t *)(param_2 + 0xa0) * 0xaf9e6bf ^ uVar16) - *(int64_t *)(param_2 + 0x30));
    uVar16 = uVar18 + uVar13;
    if (*(uint64_t *)(param_2 + 0x48) <=
        (uint64_t)((uVar15 >> bVar6 | uVar15 << 0x20 - bVar6) * uVar7)) {
      uVar16 = uVar13 & uVar18;
    }
    (**(code **)(param_2 + 0x208))
              ((uint64_t)(uint32_t)((int)uVar14 >> 0x1f) * (uVar12 & 0xffffffff) +
               (uVar12 >> 0x20) * (uint64_t)uVar14 << 0x20,lVar9,
               *(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0),
               uVar16 + (~(unaff_R15 | unaff_R14) & unaff_R12) * 0xe6da23a8 +
                        (uVar17 & (unaff_R12 | unaff_R15)) * -0x24bacc91 +
                        *(int64_t *)(param_2 + 0x1a8) + (uVar2 & uVar17) * -0x24bacc93 +
                        *(int64_t *)(param_2 + 0x220) ^ *(uint64_t *)(param_2 + 0x1b8));
  }
  *(uint64_t *)(param_2 + 0x108) = 7;
  *(uint16_t *)(param_2 + 0xf0) = 0;
  *(uint64_t *)(param_2 + 0x100) = 0;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4d02520  |  RVA: 0x592520  |  Size: 1966 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4d02520(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint8_t bVar2;
  uint8_t bVar3;
  uint8_t bVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  code *pcVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  uint16_t uVar19;
  int iVar20;
  uint64_t uVar21;
  uint64_t unaff_R14;
  uint32_t uVar22;
  uint64_t uVar23;
  bool bVar24;
  uint64_t uVar25;
  short sVar26;
  
  if (7 < *(uint64_t *)(param_2 + 0x178)) {
    bVar24 = *(uint64_t *)(param_2 + 0x118) < 0x10;
    uVar23 = (uint64_t)bVar24;
    uVar14 = ~unaff_R14;
    *(uint64_t *)(param_2 + 0x130) = uVar14;
    uVar18 = ~uVar23;
    *(uint64_t *)(param_2 + 0x1b8) = uVar18;
    uVar8 = unaff_R14 | uVar18;
    uVar11 = uVar18 & unaff_R14;
    uVar18 = uVar18 & uVar14;
    *(uint64_t *)(param_2 + 0xe0) = uVar8;
    uVar25 = *(uint64_t *)(param_2 + 0x1c8);
    *(uint64_t *)(param_2 + 0x118) = (uVar8 & uVar25) * 0x31c263ef0;
    *(uint64_t *)(param_2 + 0xb0) = -2 - (uVar23 + unaff_R14);
    uVar10 = uVar11 * 0x7d06ad40;
    uVar15 = *(uint64_t *)(param_2 + 0x120);
    uVar21 = uVar10 ^ uVar15;
    *(uint64_t *)(param_2 + 0xb8) = (uVar21 ^ uVar18) * 0x150cda69b;
    *(uint64_t *)(param_2 + 0x38) = unaff_R14;
    *(uint64_t *)(param_2 + 0x158) = uVar10;
    *(uint64_t *)(param_2 + 0x110) = ((unaff_R14 ^ uVar23 | uVar10) ^ uVar15) * -0x14c764492;
    uVar10 = ~uVar10;
    *(uint64_t *)(param_2 + 0xa0) = uVar10;
    *(uint64_t *)(param_2 + 200) = (uVar10 & uVar11 ^ uVar25) * -0x17a75c05c;
    *(uint64_t *)(param_2 + 0x98) = ((uVar10 ^ (uVar14 | uVar23)) & uVar15) * -0xca6bee84;
    lVar1 = *(int64_t *)(param_2 + 0x30);
    *(uint32_t *)(param_2 + 0xc0) = 0xe8feea8b;
    *(uint64_t *)(param_2 + 0x138) = 0xd7f6c7a2;
    *(uint64_t *)(param_2 + 0x1c0) = 0xeb765dae;
    *(uint64_t *)(param_2 + 0x1b0) = 0xeb769e78;
    *(uint64_t *)(param_2 + 0x48) = 0x3c7e6e86;
    *(uint64_t *)(param_2 + 0x208) = (uVar8 ^ uVar15) * -0x26c1c6d17;
    uVar15 = (uint64_t)((uint32_t)*(uint64_t *)(param_2 + 0x130) & (uint32_t)bVar24);
    *(uint64_t *)(param_2 + 0x128) = uVar15;
    *(uint64_t *)(param_2 + 0x1a8) =
         *(uint64_t *)(param_2 + 0x160) >> 0x3d ^ *(uint64_t *)(param_2 + 0x160);
    *(uint64_t *)(param_2 + 0x118) =
         uVar11 * -0x7d06ad40 + uVar15 * -0xb943c165 + *(int64_t *)(param_2 + 0x118) +
         (uVar25 & uVar10 & uVar11) * 0xf5fe0ec3;
    uVar7 = (uint32_t)lVar1;
    uVar17 = (uint32_t)*(uint64_t *)(param_2 + 0xa8);
    *(uint64_t *)(param_2 + 0x200) = uVar11 ^ uVar21;
    *(uint64_t *)(param_2 + 0x1d0) = uVar21 * 0x9c6c72bb;
    uVar22 = (uint32_t)*(uint64_t *)(param_2 + 0x58);
    bVar4 = (uint8_t)*(uint64_t *)(param_2 + 0x58);
    bVar2 = bVar4 & 0x1f;
    iVar20 = uVar17 + (int)*(uint64_t *)(param_2 + 0x1b0) + 0x42dc;
    bVar6 = (uint8_t)lVar1;
    uVar19 = (uint16_t)iVar20;
    *(uint32_t *)(param_2 + 0x1b0) =
         CONCAT22((short)((uint32_t)iVar20 >> 0x10),
                  uVar19 << (bVar6 & 0xf) | uVar19 >> 0x10 - (bVar6 & 0xf));
    uVar13 = (int)*(uint64_t *)(param_2 + 0x48) * *(int *)(param_2 + 0x90);
    bVar5 = (uint8_t)*(uint64_t *)(param_2 + 0xa8);
    bVar3 = bVar5 & 0x1f;
    *(uint64_t *)(param_2 + 0x48) = (uint64_t)(uVar13 >> bVar3 | uVar13 << 0x20 - bVar3);
    uVar16 = (uVar17 ^ 0xb7f8ab41) << (bVar6 & 0x1f) |
             (uVar17 ^ 0xb7f8ab41) >> 0x20 - (bVar6 & 0x1f);
    bVar4 = bVar4 & 0x1f;
    *(uint64_t *)(param_2 + 0x50) =
         (uint64_t)
         ((0x4e60783c - uVar17 << bVar2 | 0x4e60783c - uVar17 >> 0x20 - bVar2) * 0x51cee4c1 + uVar7)
    ;
    bVar5 = bVar5 & 0x1f;
    uVar13 = (uVar7 + 0xa99f6efa >> bVar5 | uVar7 + 0xa99f6efa << 0x20 - bVar5) *
             *(int *)(param_2 + 0x220);
    uVar12 = uVar22 ^ 0xc274cf78;
    *(int64_t *)(param_2 + 0xd0) = (int64_t)(int)(uVar13 * 0x10000000 | uVar13 >> 4);
    *(uint64_t *)(param_2 + 0xe8) =
         (uint64_t)((uVar12 >> (bVar6 & 0x1f) | uVar12 << 0x20 - (bVar6 & 0x1f)) - uVar17);
    *(uint64_t *)(param_2 + 0x40) =
         (uint64_t)((uVar16 >> bVar4 | uVar16 << 0x20 - bVar4) * -0x444b0703 ^ 0xbca753ef);
    uVar13 = ~((int)*(uint64_t *)(param_2 + 0x1c0) + uVar22 ^ uVar7);
    *(uint64_t *)(param_2 + 0x1c0) = (uint64_t)(uVar13 << 0x15 | uVar13 >> 0xb);
    *(uint64_t *)(param_2 + 0x138) = uVar18;
    *(uint64_t *)(param_2 + 0xc0) =
         *(uint64_t *)(param_2 + 0x1c8) + (uVar18 & *(uint64_t *)(param_2 + 0xa0));
    *(uint64_t *)(param_2 + 0x38) =
         (~(*(uint64_t *)(param_2 + 0x158) | *(uint64_t *)(param_2 + 0x120)) &
         (*(uint64_t *)(param_2 + 0x38) ^ *(uint64_t *)(param_2 + 0x1b8))) * 0x59919c09;
    *(uint64_t *)(param_2 + 0x90) =
         *(uint64_t *)(param_2 + 0x1c8) & *(uint64_t *)(param_2 + 0x130) &
         *(uint64_t *)(param_2 + 0x158);
    *(uint64_t *)(param_2 + 0x1d8) =
         (uint64_t)((*(int *)(param_2 + 0x220) * 0x3cc8b138 + (uVar7 - uVar17)) * -0x3ffffffb);
    uVar25 = (lVar1 - *(int64_t *)(param_2 + 0xa8)) + 0x32a2603546;
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x58) & 0x3f;
    *(uint64_t *)(param_2 + 0xe0) =
         ((uVar25 >> bVar2 | uVar25 << 0x40 - bVar2) ^ 0xffffffffcf173a60) *
         *(int64_t *)(param_2 + 0xe0);
    sVar26 = (short)*(uint32_t *)(param_2 + 0x1b0) - (short)*(uint64_t *)(param_2 + 0x58);
    (*(code *)(&UNK_7fffa5688422 + sVar26))
              (&UNK_7fffa5688422 + sVar26,
               CONCAT22((short)((uint32_t)*(uint32_t *)(param_2 + 0x1b0) >> 0x10) -
                        (short)((uint64_t)*(uint64_t *)(param_2 + 0x58) >> 0x10),sVar26),
               *(uint64_t *)(param_2 + 0x1a8));
  }
  *(uint64_t *)(param_2 + 0x170) = 0;
  *(uint64_t *)(param_2 + 0x178) = 7;
  *(uint16_t *)(param_2 + 0x160) = 0;
  if (7 < *(uint64_t *)(param_2 + 0x198)) {
    iVar20 = (int)*(uint64_t *)(param_2 + 0xa8);
    uVar13 = 0x40916a3b - (iVar20 + -0x6fd19e4);
    bVar2 = (uint8_t)*(uint64_t *)(param_2 + 0x58) & 0x1f;
    uVar25 = *(uint64_t *)(param_2 + 0x180);
    uVar12 = (uint32_t)*(uint64_t *)(param_2 + 0x30);
    uVar7 = (uint32_t)*(uint64_t *)(param_2 + 0x58);
    uVar13 = ~(uVar13 << bVar2 | uVar13 >> 0x20 - bVar2);
    uVar15 = uVar25 >> 0x3d | uVar25;
    if (~(iVar20 + 0x999b77c6U ^ uVar12 ^ uVar7) < uVar13) {
      uVar15 = uVar25 ^ uVar25 >> 0x3d;
    }
    pcVar9 = (code *)((int64_t)(int)((iVar20 + 0x13809012U ^ uVar12) * -0x1ee7b7c7 - uVar7) +
                     0x7fffa569789e);
    (*pcVar9)(pcVar9,uVar13,uVar15);
  }
  *(uint16_t *)(param_2 + 0x180) = 0;
  *(uint64_t *)(param_2 + 400) = 0;
  *(uint64_t *)(param_2 + 0x198) = 7;
  return;
}


// ============================================================================
// Function : Unwind@7fffa4d02cd0  |  RVA: 0x592cd0  |  Size: 352 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4d02cd0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int64_t lVar5;
  
  if (*(int64_t *)(param_2 + 0x130) != 0) {
    iVar2 = (int)*(uint64_t *)(param_2 + 0x30);
    uVar3 = iVar2 + 0x50475d81;
    uVar4 = iVar2 + 0x1b78c08eU ^ (uint32_t)*(uint64_t *)(param_2 + 0xa8);
    plVar1 = *(int64_t **)
              ((int64_t)
               (short)(((uint16_t)*(uint64_t *)(param_2 + 0xa8) ^
                       (short)*(uint64_t *)(param_2 + 0x30) + 0x2cc9U) * -0xf1b) + 0x7fffa478d3f1)
    ;
    if (plVar1 == (int64_t *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    LOCK();
    plVar1 = (int64_t *)
             ((int64_t)(int)((*(int *)(param_2 + 0x1c0) * -0x19bafbde ^ 0x38b00e9U) + 0xc0f461e8) +
             0x7fffa47cb7b9);
    *plVar1 = *plVar1 + (*(int64_t *)
                          (uint64_t)
                          (((uVar3 * 0x100 | uVar3 >> 0x18) ^ 0xfdb3453a) * *(int *)(param_2 + 0xdc)
                          ) - (*(int64_t *)(uint64_t)(uVar4 << 1 | (uint32_t)((int)uVar4 < 0)) +
                               *(int64_t *)(param_2 + 0x130) + lVar5));
    UNLOCK();
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4d02e30  |  RVA: 0x592e30  |  Size: 530 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4d02e30(uint64_t param_1,int64_t param_2)

{
  uint8_t bVar1;
  code *pcVar2;
  uint32_t uVar3;
  uint64_t unaff_RBX;
  uint32_t uVar4;
  uint32_t uVar5;
  
  if (7 < *(uint64_t *)(param_2 + 0x78)) {
    *(uint64_t *)(param_2 + 0x1c0) = 0x7fffa56950f0;
    uVar4 = (uint32_t)*(uint64_t *)(param_2 + 0x130);
    uVar5 = (uint32_t)*(uint64_t *)(param_2 + 0x30) | 1;
    uVar3 = (*(int *)(param_2 + 0xdc) * -0x5b12bd76 + uVar4 ^ 0xb51363cd) * uVar5;
    uVar4 = uVar5 * 0x6395faee ^ uVar4;
    bVar1 = (uint8_t)*(uint64_t *)(param_2 + 0xa8) & 0x1f;
    pcVar2 = (code *)((int64_t)(int)~(uVar4 >> bVar1 | uVar4 << 0x20 - bVar1) +
                     *(int64_t *)(param_2 + 0x1c0));
    (*pcVar2)(pcVar2,uVar3 * 0x2000000 | uVar3 >> 7,
              *(uint64_t *)(param_2 + 0x60) >> 0x3d ^ *(uint64_t *)(param_2 + 0x60),
              unaff_RBX & ~(uint64_t)uVar5);
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4d03050  |  RVA: 0x593050  |  Size: 262 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4d03050(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if (7 < *(uint64_t *)(param_2 + 0x108)) {
    pcVar1 = (code *)((int64_t)~(*(int *)(param_2 + 0xdc) * -0x64ac21d4) + 0x7fffa569726d);
    (*pcVar1)(pcVar1,param_2,*(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0)
             );
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4d03160  |  RVA: 0x593160  |  Size: 252 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4d03160(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  
  if ((*(char *)(param_2 + 0x80) == '\x01') && (7 < *(uint64_t *)(param_2 + 0x78))) {
    pcVar1 = (code *)((int64_t)((*(int *)(param_2 + 0xa8) + -0x2acbc81b) * -0x36ed0f11) +
                     0x7fffa5696cb1);
    (*pcVar1)(pcVar1,param_2,*(uint64_t *)(param_2 + 0x60) >> 0x3d ^ *(uint64_t *)(param_2 + 0x60)
             );
  }
  return;
}


// ============================================================================
// Function : Unwind@7fffa4d03260  |  RVA: 0x593260  |  Size: 250 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void Unwind_7fffa4d03260(uint64_t param_1,int64_t param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (7 < *(uint64_t *)(param_2 + 0x130)) {
    iVar2 = ((int)CONCAT62((int6)((uint64_t)param_2 >> 0x10),0xc69b) - *(int *)(param_2 + 0x30) ^
            0x45c1U) - *(int *)(param_2 + 0xa8);
    pcVar1 = (code *)((int64_t)(short)iVar2 + 0x7fffa56898a8);
    (*pcVar1)(pcVar1,iVar2,*(uint64_t *)(param_2 + 0xf0) >> 0x3d ^ *(uint64_t *)(param_2 + 0xf0));
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4d03360  |  RVA: 0x593360  |  Size: 705 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4d03360(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  bool bVar4;
  uint32_t in_EAX;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint32_t uVar9;
  
  param_2 = param_2 * -0x7fffc0001ffff;
  lVar1 = *(int64_t *)(param_2 + 0x18);
  if (lVar1 != 0) {
    uVar6 = *(int64_t *)(param_2 + 0x28) - lVar1;
    lVar5 = lVar1;
    if ((in_EAX + 0xfb2ad49f & 0xffff) < uVar6) {
      lVar5 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (uint64_t)((lVar1 + -8) - lVar5)) {
LAB_7fffa4d0362a:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_7fffa55eeda0(lVar5,uVar6);
    *(uint64_t *)(param_2 + 0x18) = 0;
    *(uint64_t *)(param_2 + 0x20) = 0;
    *(uint64_t *)(param_2 + 0x28) = 0;
  }
  plVar8 = *(int64_t **)(param_2 + 8);
  *(uint64_t *)plVar8[1] = 0;
  plVar8 = (int64_t *)*plVar8;
  bVar4 = plVar8 == (int64_t *)0x0;
  if ((uint64_t)(int64_t)(int)(0x6a549bf8 - in_EAX ^ 0x76bcd251) <=
      (uint64_t)((in_EAX ^ 0x72b98741) + 0x8001fd94 ^ 0x3ceaa53d)) {
    bVar4 = 0 < (int64_t)plVar8;
  }
  if (!bVar4) {
    uVar9 = in_EAX | 1;
    do {
      plVar2 = (int64_t *)*plVar8;
      uVar6 = plVar8[9];
      if (0xf < uVar6) {
        lVar1 = plVar8[6];
        uVar7 = uVar6 + 1;
        lVar5 = lVar1;
        if (~(uVar9 * -0x1a8a1000) < uVar7) {
          lVar5 = *(int64_t *)(lVar1 + -8);
          if (0x1f < (uint64_t)((lVar1 + -8) - lVar5)) goto LAB_7fffa4d0362a;
          uVar7 = uVar6 + 0x28;
        }
        (*(code *)(&UNK_7fffa508c25d + (int)(uVar9 * 0x5d7c0000 | uVar9 * 0x5177575f >> 0xe)))
                  (lVar5,uVar7,0);
      }
      *(uint8_t *)(plVar8 + 6) = 0;
      plVar8[9] = 0xf;
      plVar8[8] = 0;
      uVar6 = plVar8[5];
      bVar4 = 0xf < uVar6;
      if ((int64_t)(uint64_t)(0xcd992e16 - in_EAX ^ 0x492383b6) <
          (int64_t)(int)(uVar9 * 0x2f2dc000 | uVar9 * -0x71d0d24 >> 0x14)) {
        bVar4 = (int64_t)uVar6 < 0xf;
      }
      if (bVar4) {
        lVar1 = plVar8[2];
        uVar7 = uVar6 + 1;
        lVar5 = lVar1;
        if (0xfff < uVar7) {
          lVar5 = *(int64_t *)(lVar1 + -8);
          if (0x1f < (uint64_t)((lVar1 + -8) - lVar5)) goto LAB_7fffa4d0362a;
          uVar7 = uVar6 + 0x28;
        }
        (*(code *)((int64_t)(short)~(((uint16_t)in_EAX | 1) * 0x5cd4) + 0x7fffa5083855))(lVar5,uVar7)
        ;
      }
      *(uint8_t *)(plVar8 + 2) = 0;
      plVar8[4] = 0;
      plVar8[5] = 0xf;
      (*(code *)((int64_t)(short)((uint16_t)in_EAX + 0x6ac3) + 0x7fffa50889dd))(plVar8,0x50);
      plVar8 = plVar2;
    } while (plVar2 != (int64_t *)0x0);
  }
  (*(code *)(&UNK_7fffa508d2c7 + (int)((0x94b23649 - in_EAX) * 0x20 | 0x94b23649 - in_EAX >> 0x1b)))
            (*(uint64_t *)(param_2 + 8),0x50);
  return;
}


// ============================================================================
// Function : FUN_7fffa4d03630  |  RVA: 0x593630  |  Size: 874 bytes
// Callers  : none
// Callees  : none
// ============================================================================
/* WARNING: Removing unreachable block (ram,0x7fffa4d037d5) */

void FUN_7fffa4d03630(void)

{
  uint8_t bVar1;
  uint64_t uVar2;
  uint16_t uVar3;
  uint8_t bVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint8_t bVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  uRam00007fffa478498f = 0;
  uRam00007fffa47849a6 = 0;
  uRam00007fffa47849aa = 0;
  uRam00007fffa4784996 = 0;
  uRam00007fffa478499e = 0;
  uRam00007fffa47849a2 = 0;
  uRam00007fffa47849b3 = 0;
  uVar8 = rdtsc();
  lVar5 = (uVar8 & 0xffffffff00000000 | CONCAT44(0x7fff,(int)uVar8)) * 0x8e8d6d9a4f06d20;
  uVar8 = 0;
  while( true ) {
    lVar5 = lVar5 * 0x8e8d6d9a4f06d20 + 0x62013b5a1654b060;
    lVar6 = lVar5 * 0x8e8d6d9a4f06d20 + 0x62013b5a1654b060;
    *(char *)(uVar8 + 0x7fffa4784980) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(uVar8 + 0x7fffa4784981) = (char)((uint64_t)lVar6 >> 0x20);
    lVar5 = lVar6 * 0x8e8d6d9a4f06d20 + 0x62013b5a1654b060;
    *(char *)(uVar8 + 0x7fffa4784982) = (char)((uint64_t)lVar5 >> 0x20);
    if ((uVar8 << 0x27 | uVar8 >> 0x19) == 0x1a0000000000) break;
    lVar5 = lVar5 * 0x8e8d6d9a4f06d20 + 0x62013b5a1654b060;
    *(char *)(uVar8 + 0x7fffa4784983) = (char)((uint64_t)lVar5 >> 0x20);
    uVar8 = uVar8 + 4;
  }
  bVar1 = (uint8_t)uVar8 & 0xf;
  uVar3 = (uint16_t)uVar8;
  uVar2 = (uint64_t)
          ((uint32_t)*(uint8_t *)((int64_t)(short)((uVar3 | 1) * -0x4ae + -0xec2) + 0x7fffa4785057) *
           0x24924925 + 0x24924925) * 7;
  lVar5 = (int64_t)(short)(uVar3 + 0x9ed2);
  uVar9 = uVar2 >> 0x20;
  bVar7 = *(uint8_t *)((int64_t)(short)(uVar3 + 0xa347) + 0x7fffa478a639);
  bVar4 = *(uint8_t *)(((int64_t)(((int)uVar8 + 1) * 0x53ea3bfd) ^ 0xffffffffa0813a65U) +
                   0x7fffa478f8af) ^ 0x4f;
  *(uint8_t *)(lVar5 + 0x7fffa478aa90 + uVar9 * 4) = bVar4 << 2 | bVar4 >> 6;
  bVar4 = (uint8_t)uVar8 & 0xf;
  bVar4 = *(uint8_t *)((int64_t)(short)((-0x4453 << bVar4 | 0xbbadU >> 0x10 - bVar4) + 0xe20b) +
                   0x7fffa478acd0);
  *(uint8_t *)(lVar5 + 0x7fffa478aa91 + uVar9 * 4) = (bVar7 ^ 8) << 2 | bVar7 >> 6;
  bVar7 = *(uint8_t *)((int64_t)(-0xb667 - (int)uVar8) + 0x7fffa4790050) ^ 0xae;
  *(uint8_t *)(lVar5 + 0x7fffa478aa92 + uVar9 * 4) = bVar7 << 2 | bVar7 >> 6;
  *(uint8_t *)(lVar5 + 0x7fffa478aa93 + uVar9 * 4) = (bVar4 ^ 0xb) << 2 | bVar4 >> 6;
  *(char *)((int64_t)(short)(0x4968U >> bVar1 | 0x4968 << 0x10 - bVar1) + 0x7fffa478c4f9) =
       (char)(uVar2 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4d039a0  |  RVA: 0x5939a0  |  Size: 1559 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4d039a0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  char *pcVar1;
  uint8_t uVar2;
  uint8_t auVar3 [16];
  uint32_t uVar4;
  uint8_t bVar5;
  uint8_t bVar6;
  uint64_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint8_t bVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  int64_t in_RAX;
  int64_t lVar14;
  char *pcVar15;
  char cVar16;
  code *pcVar17;
  uint16_t uVar18;
  int iVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t *puVar22;
  int64_t lVar23;
  int64_t lVar24;
  uint32_t in_R10D;
  uint32_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  char *pcVar29;
  uint64_t uVar30;
  uint32_t uVar31;
  bool bVar32;
  float fVar33;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  
  uVar26 = ~param_3;
  uVar28 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ (uVar26 << 0x3d | uVar26 >> 3) ^ uVar26;
  uVar28 = (uVar28 << 6 | uVar28 >> 0x3a) ^ (uVar28 << 0x28 | uVar28 >> 0x18) ^ uVar28;
  uVar28 = (uVar28 << 0xc | uVar28 >> 0x34) ^ (uVar28 << 0x10 | uVar28 >> 0x30) ^ uVar28;
  uVar28 = (uVar28 << 0x20 | uVar28 >> 0x20) ^ (uVar28 << 0x18 | uVar28 >> 0x28) ^ uVar28;
  uVar21 = uVar28 << 0x10 | uVar28 >> 0x30;
  uVar28 = *(uint64_t *)(uVar21 - 0x67c7be26);
  if (uVar28 == 0) goto LAB_7fffa4d03efd;
  pcVar29 = *(char **)(uVar21 - 0x67c7be2e);
  lVar14 = *(int64_t *)(uVar21 - 0x67c7be36) * 0x10;
  if (pcVar29 == pcVar29 + lVar14 + 0x10) {
    lVar14 = 0;
  }
  else {
    pcVar15 = pcVar29 + lVar14;
    lVar14 = 0;
    uVar20 = uVar26;
    while( true ) {
      auVar34[0] = -(*pcVar29 == '\0');
      auVar34[1] = -(pcVar29[1] == '\0');
      auVar34[2] = -(pcVar29[2] == '\0');
      auVar34[3] = -(pcVar29[3] == '\0');
      auVar34[4] = -(pcVar29[4] == '\0');
      auVar34[5] = -(pcVar29[5] == '\0');
      auVar34[6] = -(pcVar29[6] == '\0');
      auVar34[7] = -(pcVar29[7] == '\0');
      auVar34[8] = -(pcVar29[8] == '\0');
      auVar34[9] = -(pcVar29[9] == '\0');
      auVar34[10] = -(pcVar29[10] == '\0');
      auVar34[0xb] = -(pcVar29[0xb] == '\0');
      auVar34[0xc] = -(pcVar29[0xc] == '\0');
      auVar34[0xd] = -(pcVar29[0xd] == '\0');
      auVar34[0xe] = -(pcVar29[0xe] == '\0');
      auVar34[0xf] = -(pcVar29[0xf] == '\0');
      uVar31 = ((uint32_t)(pcVar29 != pcVar15) << 0xe | 0x3fff) &
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
      while (uVar31 != 0) {
        uVar25 = 0;
        for (uVar4 = uVar31; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        uVar30 = (uint64_t)uVar25;
        puVar22 = *(uint64_t **)(uVar28 + uVar30 * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *puVar22;
        uVar20 = SUB168(ZEXT816(0x9e3779b97f4a7c15) * auVar3,8) ^
                 SUB168(ZEXT816(0x9e3779b97f4a7c15) * auVar3,0);
        uVar27 = uVar20 >> (*(uint8_t *)(in_RAX + -0x3d07185b) & 0x3f);
        lVar24 = *(int64_t *)(in_RAX + -0x3d07184b) + uVar27 * 0x10;
        pcVar1 = (char *)(*(int64_t *)(in_RAX + -0x3d07184b) + uVar27 * 0x10);
        auVar35[0] = -(*pcVar1 == '\0');
        auVar35[1] = -(pcVar1[1] == '\0');
        auVar35[2] = -(pcVar1[2] == '\0');
        auVar35[3] = -(pcVar1[3] == '\0');
        auVar35[4] = -(pcVar1[4] == '\0');
        auVar35[5] = -(pcVar1[5] == '\0');
        auVar35[6] = -(pcVar1[6] == '\0');
        auVar35[7] = -(pcVar1[7] == '\0');
        auVar35[8] = -(pcVar1[8] == '\0');
        auVar35[9] = -(pcVar1[9] == '\0');
        auVar35[10] = -(pcVar1[10] == '\0');
        auVar35[0xb] = -(pcVar1[0xb] == '\0');
        auVar35[0xc] = -(pcVar1[0xc] == '\0');
        auVar35[0xd] = -(pcVar1[0xd] == '\0');
        auVar35[0xe] = -(pcVar1[0xe] == '\0');
        auVar35[0xf] = -(pcVar1[0xf] == '\0');
        uVar25 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar35 >> 7,0) & 1) |
                                (uint16_t)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                (uint16_t)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                (uint16_t)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                (uint16_t)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                (uint16_t)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                (uint16_t)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                (uint16_t)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                (uint16_t)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                (uint16_t)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                (uint16_t)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                (uint16_t)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                (uint16_t)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                (uint16_t)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                               (uint16_t)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe);
        bVar5 = (uint8_t)in_R10D;
        if (uVar25 == 0) {
          bVar13 = (uint8_t)uVar20;
          bVar12 = (uint8_t)param_3;
          bVar11 = bVar12 & bVar13 & 0xf8;
          bVar6 = (uint8_t)uVar26;
          cVar16 = ((uint8_t)(0xb580 >> (bVar5 & 0x1f)) | (uint8_t)(0xb580 << 0x20 - (bVar5 & 0x1f))) +
                   bVar11;
          if ((in_R10D ^ 0x70a1080d) * -0x22ebfcb <=
              ((in_R10D + 0xc72733ce) * 0x10000000 | in_R10D + 0xc72733ce >> 4)) {
            cVar16 = (0x8e - bVar5 ^ 0x3f) * bVar11;
          }
          lVar23 = 1;
          do {
            *(uint8_t *)(lVar24 + 0xf) =
                 *(uint8_t *)(lVar24 + 0xf) |
                 '\x01' << (cVar16 + (((bVar13 | 7 | bVar6) + (bVar6 & (bVar13 | 7))) -
                                     ((bVar13 | 0xf8 | bVar6) + (bVar13 & 0xf8 | bVar12) * 'Y' +
                                      ((bVar13 ^ 0xf8) & bVar12) * -3 + ((bVar13 | 0xf8) ^ bVar6)))
                                     + (-0x7f - bVar5) * ((~bVar13 | 7) ^ bVar6) & 0x1f);
            uVar27 = uVar27 + lVar23 & *(uint64_t *)(in_RAX + -0x3d071853);
            lVar24 = *(int64_t *)(in_RAX + -0x3d07184b) + uVar27 * 0x10;
            pcVar1 = (char *)(*(int64_t *)(in_RAX + -0x3d07184b) + uVar27 * 0x10);
            auVar36[0] = -(*pcVar1 == '\0');
            auVar36[1] = -(pcVar1[1] == '\0');
            auVar36[2] = -(pcVar1[2] == '\0');
            auVar36[3] = -(pcVar1[3] == '\0');
            auVar36[4] = -(pcVar1[4] == '\0');
            auVar36[5] = -(pcVar1[5] == '\0');
            auVar36[6] = -(pcVar1[6] == '\0');
            auVar36[7] = -(pcVar1[7] == '\0');
            auVar36[8] = -(pcVar1[8] == '\0');
            auVar36[9] = -(pcVar1[9] == '\0');
            auVar36[10] = -(pcVar1[10] == '\0');
            auVar36[0xb] = -(pcVar1[0xb] == '\0');
            auVar36[0xc] = -(pcVar1[0xc] == '\0');
            auVar36[0xd] = -(pcVar1[0xd] == '\0');
            auVar36[0xe] = -(pcVar1[0xe] == '\0');
            auVar36[0xf] = -(pcVar1[0xf] == '\0');
            uVar25 = (uint32_t)(uint16_t)((uint16_t)(SUB161(auVar36 >> 7,0) & 1) |
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
                                   (uint16_t)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe);
            lVar23 = lVar23 + 1;
          } while (uVar25 == 0);
          puVar22 = *(uint64_t **)(uVar28 + uVar30 * 8);
        }
        uVar4 = 0;
        for (; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar2 = (&UNK_7fffa583cd9c)
                [(uVar20 & 0xff) * 4 + (int64_t)(int)((-0xb1f41cb - in_R10D) * 0x4ae6584b)];
        *(uint64_t **)(uVar27 * 0x78 + *(int64_t *)(in_RAX + -0x3d071843) + (uint64_t)uVar4 * 8)
             = puVar22;
        *(uint64_t *)(uVar28 + uVar30 * 8) = 0;
        *(uint8_t *)(lVar24 + (uint64_t)uVar4) = uVar2;
        uVar20 = *(uint64_t *)(uVar28 + uVar30 * 8);
        if (uVar20 != 0) {
          iVar19 = (int)CONCAT62((int6)((uint64_t)lVar24 >> 0x10),0x4fe3) * -0x746f;
          uVar18 = (uint16_t)iVar19;
          iVar19 = CONCAT22((short)((uint32_t)iVar19 >> 0x10),uVar18 << 8 | uVar18 >> 8) + in_R10D;
          (*(code *)((int64_t)(short)iVar19 + 0x7fffa568c487))
                    (0x7fffa568c487,iVar19,uVar20 >> 0x3d ^ uVar20);
        }
        lVar14 = lVar14 + 1;
        uVar25 = uVar31 - 1 & uVar31;
        uVar20 = (uint64_t)uVar25;
        uVar31 = (uVar31 - 1) * uVar31;
        if (0xe11f0d48 - in_R10D <=
            ~(0x88441e83U >> (bVar5 & 0x1f) | -0x77bbe17d << 0x20 - (bVar5 & 0x1f))) {
          uVar31 = uVar25;
        }
      }
      if (pcVar29 == pcVar15) break;
      pcVar29 = pcVar29 + 0x10;
      uVar28 = uVar28 + 0x78;
    }
    uVar28 = *(uint64_t *)(uVar21 - 0x67c7be26);
    uVar26 = uVar20;
  }
  if (lVar14 == *(int64_t *)(uVar21 - 0x67c7be16)) {
LAB_7fffa4d03eb5:
    if (uVar28 == 0) goto LAB_7fffa4d03efd;
  }
  else {
    if (uVar28 == 0) goto LAB_7fffa4d03efd;
    pcVar29 = *(char **)(uVar21 - 0x67c7be2e);
    lVar14 = *(int64_t *)(uVar21 - 0x67c7be36) * 0x10;
    if (pcVar29 != pcVar29 + lVar14 + 0x10) {
      pcVar15 = pcVar29;
      do {
        auVar37[0] = -(*pcVar15 == '\0');
        auVar37[1] = -(pcVar15[1] == '\0');
        auVar37[2] = -(pcVar15[2] == '\0');
        auVar37[3] = -(pcVar15[3] == '\0');
        auVar37[4] = -(pcVar15[4] == '\0');
        auVar37[5] = -(pcVar15[5] == '\0');
        auVar37[6] = -(pcVar15[6] == '\0');
        auVar37[7] = -(pcVar15[7] == '\0');
        auVar37[8] = -(pcVar15[8] == '\0');
        auVar37[9] = -(pcVar15[9] == '\0');
        auVar37[10] = -(pcVar15[10] == '\0');
        auVar37[0xb] = -(pcVar15[0xb] == '\0');
        auVar37[0xc] = -(pcVar15[0xc] == '\0');
        auVar37[0xd] = -(pcVar15[0xd] == '\0');
        auVar37[0xe] = -(pcVar15[0xe] == '\0');
        auVar37[0xf] = -(pcVar15[0xf] == '\0');
        for (uVar31 = ((uint32_t)(pcVar15 != pcVar29 + lVar14) << 0xe | 0x3fff) &
                      ~(uint32_t)(uint16_t)((uint16_t)(SUB161(auVar37 >> 7,0) & 1) |
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
                                     (uint16_t)(auVar37[0xf] >> 7) << 0xf); uVar31 != 0;
            uVar31 = uVar31 - 1 & uVar31) {
          uVar25 = 0;
          for (uVar4 = uVar31; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar25 = uVar25 + 1;
          }
          uVar20 = *(uint64_t *)(uVar28 + (uint64_t)uVar25 * 8);
          if (uVar20 != 0) {
            uVar26 = CONCAT62((int6)(uVar26 >> 0x10),0x16b7);
            iVar19 = (in_R10D | 1) * (int)uVar26 + 0x6fd4;
            pcVar17 = (code *)((int64_t)(short)iVar19 + 0x7fffa568ad0d);
            (*pcVar17)(pcVar17,iVar19,uVar20 >> 0x3d ^ uVar20);
          }
        }
        uVar28 = uVar28 + 0x78;
        bVar32 = pcVar15 != pcVar29 + lVar14;
        pcVar15 = pcVar15 + 0x10;
      } while (bVar32);
      uVar28 = *(uint64_t *)(uVar21 - 0x67c7be26);
      goto LAB_7fffa4d03eb5;
    }
  }
  FUN_7fffa5687c30(0x7fffa5693f33,0,uVar28 >> 0x3d ^ uVar28);
LAB_7fffa4d03efd:
  uVar7 = *(uint64_t *)(in_RAX + -0x3d07185b);
  uVar8 = *(uint32_t *)(in_RAX + -0x3d071853);
  uVar9 = *(uint32_t *)(in_RAX + -0x3d07184f);
  uVar10 = *(uint64_t *)(in_RAX + -0x3d071843);
  *(uint64_t *)(uVar21 - 0x67c7be2e) = *(uint64_t *)(in_RAX + -0x3d07184b);
  *(uint64_t *)(uVar21 - 0x67c7be26) = uVar10;
  *(uint64_t *)(uVar21 - 0x67c7be3e) = uVar7;
  *(uint32_t *)(uVar21 - 0x67c7be36) = uVar8;
  *(uint32_t *)(uVar21 - 0x67c7be32) = uVar9;
  uVar28 = *(int64_t *)(uVar21 - 0x67c7be36) * 0xf + 0xe;
  if (*(int64_t *)(uVar21 - 0x67c7be26) == 0) {
    uVar28 = 0;
  }
  fVar33 = (float)(int64_t)uVar28;
  if ((in_R10D ^ 0xcc02d38b) * -0x622200bf <= ~((in_R10D | 1) * 0x193b45bf)) {
    fVar33 = (float)uVar28;
  }
  uVar26 = (uint64_t)(fVar33 * 0.875);
  uVar26 = (int64_t)(fVar33 * 0.875 - 9.223372e+18) & (int64_t)uVar26 >> 0x3f | uVar26;
  if (uVar28 < 0x1e) {
    uVar26 = uVar28;
  }
  *(uint64_t *)(uVar21 - 0x67c7be1e) = uVar26;
  return;
}


// ============================================================================
// Function : FUN_7fffa4d03fd8  |  RVA: 0x593fd8  |  Size: 604 bytes
// Callers  : FUN_7fffa524fccc@0xadfccc
// Callees  : _guard_dispatch_icall@0xf30810, FUN_7fffa55f0140@0xe80140, FUN_7fffa55c8ce0@0xe58ce0, FUN_7fffa5476b88@0xd06b88, FUN_7fffa4ed9184@0x769184, FUN_7fffa56266a0@0xeb66a0, FUN_7fffa4f54478@0x7e4478, FUN_7fffa4f5c658@0x7ec658
// ============================================================================
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t FUN_7fffa4d03fd8(uint32_t param_1)

{
  bool bVar1;
  int64_t *plVar2;
  uint32_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint8_t bVar8;
  code *pcVar9;
  uint64_t *puVar10;
  uint32_t uStackX_10;
  
  plVar2 = (int64_t *)0x0;
  uStackX_10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_7fffa4d0402f:
    if (param_1 == 2) {
      puVar10 = (uint64_t *)0x7fffa47825e0;
    }
    else if (param_1 == 6) {
LAB_7fffa4d040d1:
      puVar10 = (uint64_t *)&DAT_7fffa47825f0;
    }
    else if (param_1 == 0xf) {
      puVar10 = (uint64_t *)0x7fffa47825f8;
    }
    else if (param_1 == 0x15) {
      puVar10 = (uint64_t *)0x7fffa47825e8;
    }
    else {
      if (param_1 == 0x16) goto LAB_7fffa4d040d1;
      puVar10 = (uint64_t *)0x0;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_7fffa4d0405f;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_7fffa4d040b1;
      }
      goto LAB_7fffa4d0402f;
    }
LAB_7fffa4d0405f:
    plVar2 = (int64_t *)FUN_7fffa4f5c658();
    if (plVar2 == (int64_t *)0x0) {
      return 0xffffffff;
    }
    lVar6 = *plVar2;
    lVar4 = lVar6 + 0xc0;
    for (; lVar6 != lVar4; lVar6 = lVar6 + 0x10) {
      if (*(uint32_t *)(lVar6 + 4) == param_1) goto LAB_7fffa4d040ac;
    }
    lVar6 = 0;
LAB_7fffa4d040ac:
    if (lVar6 == 0) {
LAB_7fffa4d040b1:
      puVar3 = (uint32_t *)FUN_7fffa4ed9184();
      *puVar3 = 0x16;
      FUN_7fffa55c8ce0();
      return 0xffffffff;
    }
    puVar10 = (uint64_t *)(lVar6 + 8);
    bVar1 = false;
  }
  lVar6 = 0;
  if (bVar1) {
    FUN_7fffa5476b88(3);
  }
  pcVar9 = (code *)*puVar10;
  if (bVar1) {
    bVar8 = (uint8_t)_DAT_7fffa4780040 & 0x3f;
    pcVar9 = (code *)(((uint64_t)pcVar9 ^ _DAT_7fffa4780040) >> bVar8 |
                     ((uint64_t)pcVar9 ^ _DAT_7fffa4780040) << 0x40 - bVar8);
  }
  if (pcVar9 == (code *)0x1) goto LAB_7fffa4d041ba;
  if (pcVar9 == (code *)0x0) {
    if (bVar1) {
      FUN_7fffa4f54478(3);
    }
    FUN_7fffa55f0140(3);
    pcVar9 = (code *)__debugbreak();
    uVar7 = (*pcVar9)();
    return uVar7;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar6 = plVar2[1];
    plVar2[1] = 0;
    if (param_1 == 8) {
      lVar4 = FUN_7fffa56266a0();
      uStackX_10 = *(uint32_t *)(lVar4 + 0x10);
      lVar4 = FUN_7fffa56266a0();
      *(uint32_t *)(lVar4 + 0x10) = 0x8c;
      goto LAB_7fffa4d04172;
    }
  }
  else {
LAB_7fffa4d04172:
    if (param_1 == 8) {
      lVar4 = *plVar2;
      for (lVar5 = lVar4 + 0x30; lVar5 != lVar4 + 0xc0; lVar5 = lVar5 + 0x10) {
        *(uint64_t *)(lVar5 + 8) = 0;
      }
      goto LAB_7fffa4d041ba;
    }
  }
  *puVar10 = _DAT_7fffa4780040;
LAB_7fffa4d041ba:
  if (bVar1) {
    FUN_7fffa4f54478(3);
  }
  if (pcVar9 != (code *)0x1) {
    if (param_1 == 8) {
      lVar4 = FUN_7fffa56266a0();
      (*pcVar9)(8,*(uint32_t *)(lVar4 + 0x10));
    }
    else {
      (*pcVar9)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar2[1] = lVar6, param_1 == 8)) {
      lVar6 = FUN_7fffa56266a0();
      *(uint32_t *)(lVar6 + 0x10) = uStackX_10;
    }
  }
  return 0;
}


// ============================================================================
// Function : FUN_7fffa4d04240  |  RVA: 0x594240  |  Size: 545 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4d04240(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  bRam00007fffa47bd141 = 0;
  uRam00007fffa47bd14e = 0;
  uRam00007fffa47bd156 = 0;
  uRam00007fffa47bd15e = 0;
  uRam00007fffa47bd176 = 0;
  uVar1 = rdtsc();
  lVar2 = (uVar1 & 0xffffffff00000000 | CONCAT44(0xffffffff,(int)uVar1)) * 0xb4c247f898f8c9e;
  lVar3 = 2;
  while( true ) {
    lVar4 = lVar2 * 0xb4c247f898f8c9e + 0x47f898f8c9e;
    lVar5 = lVar4 * 0xb4c247f898f8c9e + 0xb4c247f898f8c9e;
    lVar2 = lVar5 * 0xb4c247f898f8c9e + 0xb4c247f898f8c9e;
    *(char *)(lVar3 + 0x7fffa47bd137) = (char)((uint64_t)lVar5 >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bd136) = (char)((uint64_t)lVar4 >> 0x20);
    *(char *)(lVar3 + 0x7fffa47bd138) = (char)((uint64_t)lVar2 >> 0x20);
    if (lVar3 == 0x44) break;
    lVar3 = lVar3 + 3;
  }
  uVar1 = (uint64_t)((uint32_t)bRam00007fffa47bd141 * 0x2aaaaaab + 0x2aaaaaab) * 6;
  *(uint32_t *)((uVar1 >> 0x20) * 4 + 0x7fffa47bd14e) = uRam00007fffa47bd176 ^ 0x99c8509c;
  bRam00007fffa47bd141 = (char)(uVar1 >> 0x20);
  return;
}


// ============================================================================
// Function : FUN_7fffa4d04470  |  RVA: 0x594470  |  Size: 5392 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4d04470(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t *param_4)

{
  uint32_t *puVar1;
  uint8_t bVar2;
  char cVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  uint32_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  bool bVar11;
  uint8_t bVar12;
  uint8_t bVar13;
  uint32_t uVar14;
  uint64_t in_RAX;
  uint8_t bVar15;
  uint32_t uVar16;
  uint64_t *puVar17;
  uint32_t uVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  int64_t lVar24;
  int64_t lVar25;
  uint32_t uVar26;
  uint32_t uVar27;
  uint32_t uVar28;
  uint32_t uVar29;
  uint32_t uVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  uint64_t uVar33;
  uint32_t uVar34;
  uint64_t *puVar35;
  uint64_t *puVar36;
  uint64_t *puVar37;
  uint32_t uVar38;
  uint32_t uVar39;
  uint32_t uVar40;
  uint32_t uVar41;
  uint32_t uVar42;
  uint64_t *puVar43;
  uint64_t uVar44;
  uint32_t uVar45;
  uint32_t uVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint64_t *puVar49;
  uint64_t *puVar50;
  uint64_t *puVar51;
  uint64_t uStack_108;
  
  param_1 = param_1 * (param_2 | 1);
  uVar48 = param_1 * -0x6dc48990230e3dd;
  bVar2 = *(uint8_t *)(param_3 + 0x104);
  uVar19 = 1 << (bVar2 & 0x1f);
  uVar31 = param_1 * -0x4c811871ee800000 ^ uVar48;
  uVar20 = (uint32_t)param_2;
  uVar48 = uVar48 << 0x2e;
  bVar12 = (uint8_t)param_2;
  puVar32 = (uint64_t *)(~in_RAX * 0x736642867b741411);
  uVar33 = uVar48 * uVar31;
  if (((uVar20 + 0xe51685e3) * 0x20000000 | uVar20 + 0xe51685e3 >> 3) <=
      ((uVar20 ^ 0xb89e9bd9) << 0x12 | (uVar20 ^ 0xb89e9bd9) >> 0xe)) {
    uVar33 = uVar48 ^ uVar31;
  }
  puVar49 = (uint64_t *)
            (uVar33 * ((param_2 + 0x342c896eb3fd7bda) * 0x16798c5cc000 |
                      (param_2 + 0x342c896eb3fd7bda) * 0x59e63173 >> 0x32));
  if ((0x70240881U >> (bVar12 & 0x1f) | 0x70240881 << 0x20 - (bVar12 & 0x1f)) <
      (-0x3e78a043 << (bVar12 & 0x1f) | 0xc1875fbdU >> 0x20 - (bVar12 & 0x1f))) {
    uVar33 = (uint64_t)(int)(0x16993015 << (bVar12 & 0x1f) | 0x16993015U >> 0x20 - (bVar12 & 0x1f))
    ;
  }
  else {
    uVar33 = (uint64_t)((uVar20 ^ 0x68ecdcea) << 8 | (uVar20 ^ 0x68ecdcea) >> 0x18);
  }
  lVar8 = *(int64_t *)(param_3 + 0x80);
  uVar18 = *(uint32_t *)(param_3 + 0x1c);
  plVar9 = *(int64_t **)(param_3 + 0xf8);
  uVar26 = (uint32_t)uVar33;
  uVar38 = 1 << (*(uint8_t *)(param_3 + 0x10c) & 0x1f);
  uVar39 = uVar20 | 1;
  uVar45 = *(uint32_t *)(param_3 + 0x18);
  uVar5 = *(uint32_t *)(param_3 + 0x28);
  uVar21 = 1 << (*(uint8_t *)(param_3 + 0x100) & 0x1f);
  uVar48 = *puVar32 * -0x30e4432345000000 >> (uint64_t)(0x42 - (int)plVar9[0x21]);
  bVar13 = (uint8_t)uVar33;
  uVar31 = (uint64_t)uVar45;
  if ((uVar39 * -0x536ed90b >> (bVar13 & 0x1f) | uVar39 * -0x536ed90b << 0x20 - (bVar13 & 0x1f)) <
      ~((uVar20 + 0x1e7d9830) * (uVar26 | 1))) {
    uVar31 = (int64_t)(int)uVar45;
  }
  lVar10 = *(int64_t *)(param_3 + 8);
  bVar15 = 0x40 - (char)*(uint32_t *)(param_3 + 0x108);
  puVar43 = (uint64_t *)(uVar31 + lVar10);
  uVar14 = (uint32_t)((int64_t)puVar32 - lVar10);
  uVar27 = uVar14 - uVar19;
  if (uVar14 < uVar19) {
    uVar27 = 0;
  }
  uVar28 = *(uint32_t *)(param_3 + 0x2c);
  uVar47 = (uint64_t)uVar28;
  uVar31 = (int64_t)puVar32 - lVar10 & 0xffffffff;
  if (uVar14 < uVar28) {
    uVar31 = (uint64_t)uVar28;
  }
  uVar28 = uVar14 - uVar21;
  if (uVar14 - uVar18 <= uVar21) {
    uVar28 = uVar18;
  }
  if (uVar5 != 0) {
    uVar28 = uVar18;
  }
  iVar6 = *(int *)(param_3 + 300);
  lVar24 = *(int64_t *)(param_3 + 0x70);
  do {
    if (uVar31 == uVar47) break;
    uVar44 = (uint64_t)(*(int64_t *)(lVar10 + uVar47) * -0x30e4432345000000) >> (bVar15 & 0x3f);
    *(uint32_t *)(lVar8 + (uint64_t)((uint32_t)uVar47 & ~(-1 << (bVar2 & 0x1f))) * 4) =
         *(uint32_t *)(lVar24 + uVar44 * 4);
    *(uint32_t *)(lVar24 + uVar44 * 4) = (uint32_t)uVar47;
    uVar47 = uVar47 + 1;
  } while (iVar6 == 0);
  *(uint32_t *)(param_3 + 0x2c) = uVar14;
  uVar18 = *(uint32_t *)(lVar24 + (*puVar32 * -0x30e4432345000000 >> (bVar15 & 0x3f)) * 4);
  uStack_108 = 3;
  if (uVar28 <= uVar18) {
    do {
      puVar35 = (uint64_t *)(lVar10 + (uint64_t)uVar18);
      if (*(int *)((uStack_108 - 3) + (int64_t)puVar35) ==
          *(int *)((int64_t)puVar32 + (uStack_108 - 3))) {
        puVar50 = puVar32;
        if (puVar32 < (uint64_t *)((int64_t)puVar49 - 7U)) {
          if (*puVar35 == *puVar32) {
            puVar35 = (uint64_t *)(lVar10 + 8 + (uint64_t)uVar18);
            lVar24 = 0;
            do {
              puVar50 = puVar50 + 1;
              if ((uint64_t *)((int64_t)puVar49 - 7U) <= puVar50) goto joined_r0x7fffa4d04920;
              uVar31 = *puVar35;
              lVar24 = lVar24 + 8;
              puVar35 = puVar35 + 1;
            } while (uVar31 == *puVar50);
            uVar21 = 0;
            for (uVar31 = *puVar50 ^ uVar31; (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar31 = (uint64_t)(uVar21 >> 3) + lVar24;
          }
          else {
            uVar21 = 0;
            for (uVar31 = *puVar35 ^ *puVar32; (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar31 = (uint64_t)(uVar21 >> 3);
          }
        }
        else {
joined_r0x7fffa4d04920:
          if ((puVar50 < (uint64_t *)((int64_t)puVar49 - 3U)) &&
             ((uint32_t)*puVar35 == (uint32_t)*puVar50)) {
            puVar35 = (uint64_t *)((int64_t)puVar35 + 4);
            puVar50 = (uint64_t *)((int64_t)puVar50 + 4);
          }
          if ((puVar50 < (uint64_t *)((int64_t)puVar49 - 1U)) &&
             ((short)*puVar35 == (short)*puVar50)) {
            puVar50 = (uint64_t *)((int64_t)puVar50 + 2);
            puVar35 = (uint64_t *)((int64_t)puVar35 + 2);
          }
          if (puVar50 < puVar49) {
            puVar50 = (uint64_t *)
                      ((int64_t)puVar50 + (uint64_t)((char)*puVar35 == (char)*puVar50));
          }
          uVar31 = (int64_t)puVar50 + ~in_RAX * -0x736642867b741411;
        }
        if (uStack_108 < uVar31) {
          *param_4 = (uint64_t)((uVar14 + 3) - uVar18);
          uStack_108 = uVar31;
          if ((uint64_t *)((int64_t)puVar32 + uVar31) == puVar49) break;
        }
      }
      if (uVar18 <= uVar27) break;
      uVar38 = uVar38 - 1;
      uVar18 = *(uint32_t *)(lVar8 + (uint64_t)(uVar18 & uVar19 - 1) * 4);
      if (((uVar18 < uVar28) ||
          (0xb0b46d96 - (uVar20 + uVar26 + -0x14cc439c) <=
           0x8075f44a - ((uVar26 + 0xa2019eaa) * 0x20000000 | uVar26 + 0xa2019eaa >> 3))) ||
         (uVar38 == 0)) break;
    } while( true );
  }
  lVar8 = *plVar9;
  lVar10 = plVar9[1];
  uVar19 = 3;
  if (uVar38 < 3) {
    uVar19 = uVar38;
  }
  uVar45 = ((int)lVar8 - (int)lVar10) - uVar45;
  uVar18 = *(uint32_t *)(plVar9[0xe] + 0xc + uVar48 * 0x10);
  if (uVar38 == 0) {
    uVar19 = 0;
  }
  else {
    puVar35 = (uint64_t *)((int64_t)puVar32 + 4);
    puVar50 = (uint64_t *)((int64_t)puVar49 - 7);
    uVar31 = 0;
    do {
      uVar18 = *(uint32_t *)(plVar9[0xe] + uVar48 * 0x10 + uVar31 * 4);
      if ((uint64_t)uVar18 == 0) {
        return;
      }
      puVar1 = (uint32_t *)(lVar10 + (uint64_t)uVar18);
      if (*puVar1 == (uint32_t)*puVar32) {
        puVar17 = (uint64_t *)(puVar1 + 1);
        puVar51 = (uint64_t *)((lVar8 - (int64_t)puVar17) + (int64_t)puVar35);
        if (puVar49 <= puVar51) {
          puVar51 = puVar49;
        }
        puVar36 = puVar17;
        puVar37 = puVar35;
        if (puVar35 < (uint64_t *)((int64_t)puVar51 - 7U)) {
          if (*puVar17 == *puVar35) {
            lVar24 = 0xc;
LAB_7fffa4d04b80:
            puVar37 = (uint64_t *)((int64_t)puVar32 + lVar24);
            if (puVar37 < (uint64_t *)((int64_t)puVar51 - 7U)) {
              if ((int64_t)
                  (uint64_t)
                  ((0x3a68fc58 - uVar20 >> (bVar13 & 0x1f) |
                   0x3a68fc58 - uVar20 << 0x20 - (bVar13 & 0x1f)) ^ 0x47e12caa) <
                  (int64_t)(int)((uVar26 + 0x2b92f4bf) * uVar39) !=
                  (*(uint64_t *)((int64_t)puVar1 + lVar24) == *puVar37))
              goto code_r0x7fffa4d04bd8;
              uVar21 = 0;
              for (uVar47 = *(uint64_t *)((int64_t)puVar1 + lVar24) ^ *puVar37; (uVar47 & 1) == 0;
                  uVar47 = uVar47 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar47 = ((uint64_t)(uVar21 >> 3) + lVar24) - 4;
              goto LAB_7fffa4d04c82;
            }
            puVar36 = (uint64_t *)((int64_t)puVar1 + lVar24);
            goto LAB_7fffa4d04c14;
          }
          uVar21 = 0;
          for (uVar47 = *puVar35 ^ *puVar17; (uVar47 & 1) == 0;
              uVar47 = uVar47 >> 1 | 0x8000000000000000) {
            uVar21 = uVar21 + 1;
          }
          uVar47 = (uint64_t)(uVar21 >> 3);
        }
        else {
LAB_7fffa4d04c14:
          if ((puVar37 < (uint64_t *)((int64_t)puVar51 - 3U)) &&
             ((uint32_t)*puVar36 == (uint32_t)*puVar37)) {
            puVar36 = (uint64_t *)((int64_t)puVar36 + 4);
            puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
          }
          if ((puVar37 < (uint64_t *)((int64_t)puVar51 - 1U)) &&
             ((short)*puVar36 == (short)*puVar37)) {
            puVar36 = (uint64_t *)((int64_t)puVar36 + 2);
            puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
          }
          if (puVar37 < puVar51) {
            puVar37 = (uint64_t *)
                      ((int64_t)puVar37 + (uint64_t)((char)*puVar36 == (char)*puVar37));
          }
          uVar47 = (int64_t)puVar37 - (int64_t)puVar35;
        }
LAB_7fffa4d04c82:
        lVar24 = (int64_t)puVar17 + uVar47;
        bVar11 = lVar24 != lVar8 && lVar8 <= lVar24;
        if ((0xf039a5f3U >> (bVar13 & 0x1f) | -0xfc65a0d << 0x20 - (bVar13 & 0x1f)) - uVar20 ==
            0x677f4909) {
          bVar11 = lVar24 == lVar8;
        }
        if (bVar11) {
          puVar17 = (uint64_t *)((int64_t)puVar35 + uVar47);
          puVar51 = puVar17;
          puVar37 = puVar43;
          if (puVar17 < puVar50) {
            if (*puVar43 == *puVar17) {
              puVar51 = (uint64_t *)((int64_t)puVar32 + uVar47 + 0xc);
              lVar24 = 8;
              if (puVar51 < puVar50) {
LAB_7fffa4d04d10:
                if (*(uint64_t *)((int64_t)puVar43 + lVar24) == *puVar51)
                goto code_r0x7fffa4d04d20;
                uVar21 = 0;
                for (uVar44 = *puVar51 ^ *(uint64_t *)((int64_t)puVar43 + lVar24);
                    (uVar44 & 1) == 0; uVar44 = uVar44 >> 1 | 0x8000000000000000) {
                  uVar21 = uVar21 + 1;
                }
                uVar44 = (uint64_t)(uVar21 >> 3) + lVar24;
                goto LAB_7fffa4d04e40;
              }
LAB_7fffa4d04d2d:
              puVar37 = (uint64_t *)(lVar24 + (int64_t)puVar43);
              goto LAB_7fffa4d04d30;
            }
            uVar21 = 0;
            for (uVar44 = *puVar43 ^ *puVar17; (uVar44 & 1) == 0;
                uVar44 = uVar44 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            uVar44 = (uint64_t)(uVar21 >> 3);
          }
          else {
LAB_7fffa4d04d30:
            if ((puVar51 < (uint64_t *)((int64_t)puVar49 - 3U)) &&
               ((uint32_t)*puVar37 == (uint32_t)*puVar51)) {
              puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
              puVar51 = (uint64_t *)((int64_t)puVar51 + 4);
            }
            if ((puVar51 < (uint64_t *)((int64_t)puVar49 - 1U)) &&
               ((short)*puVar37 == (short)*puVar51)) {
              puVar51 = (uint64_t *)((int64_t)puVar51 + 2);
              puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
            }
            if (puVar51 < puVar49) {
              cVar3 = (char)*puVar37;
              cVar4 = (char)*puVar51;
              uVar21 = 0xc0000241 - (uVar20 ^ 0x93c60613);
              bVar11 = cVar3 != cVar4 && cVar4 <= cVar3;
              if ((uVar20 + 0x7b4837ae << (bVar13 & 0x1f) |
                  uVar20 + 0x7b4837ae >> 0x20 - (bVar13 & 0x1f)) <=
                  (uVar21 * 0x8000 | uVar21 >> 0x11)) {
                bVar11 = cVar3 == cVar4;
              }
              puVar51 = (uint64_t *)((int64_t)puVar51 + (uint64_t)bVar11);
            }
            uVar44 = (int64_t)puVar51 - (int64_t)puVar17;
          }
LAB_7fffa4d04e40:
          uVar47 = uVar47 + uVar44;
        }
        uVar47 = uVar47 + 4;
        if (uStack_108 < uVar47) {
          *param_4 = (uint64_t)((uVar14 + 3 + uVar45) - uVar18);
          uStack_108 = uVar47;
          if ((uint64_t *)((int64_t)puVar32 + uVar47) == puVar49) {
            return;
          }
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar19);
    uVar18 = *(uint32_t *)(plVar9[0xe] + (uVar48 * 4 | 3) * 4);
  }
  uVar21 = uVar38 - uVar19;
  if ((uVar18 & 0xff) <= uVar38 - uVar19) {
    uVar21 = uVar18 & 0xff;
  }
  if (uVar21 == 0) {
    return;
  }
  if (7 < uVar21) {
    for (lVar24 = 0; (uint64_t)(uVar21 & 0xf8) - 8 != lVar24; lVar24 = lVar24 + 8) {
    }
  }
  uVar19 = (uVar26 ^ 0xa64c0545) << (bVar12 & 0x1f) |
           (uVar26 ^ 0xa64c0545) >> 0x20 - (bVar12 & 0x1f);
  if ((uVar21 & 7) != (uVar19 << 0x19 | uVar19 >> 7)) {
    uVar31 = 0;
    do {
      uVar31 = uVar31 + 1;
    } while ((uVar21 & 7) != uVar31);
  }
  uVar19 = (uint32_t)*puVar32;
  uVar40 = uVar14 | 3;
  uVar27 = ~uVar5;
  uVar28 = uVar39 * 0x1cb20949 + 0x12248b01;
  uVar38 = uVar45 | uVar40;
  uVar34 = ~uVar45;
  uVar31 = (uint64_t)(uVar18 >> 8);
  uVar41 = uVar14 ^ 3;
  uVar42 = uVar14 ^ 0xfffffffc;
  uVar18 = uVar41 ^ uVar45 ^ uVar5;
  if ((0x8ec00c69 - uVar26 << (bVar12 & 0x1f) | 0x8ec00c69 - uVar26 >> 0x20 - (bVar12 & 0x1f)) *
      -0x299b1b0d <= (uVar28 << (bVar13 & 0x1f) | uVar28 >> 0x20 - (bVar13 & 0x1f))) {
    uVar18 = uVar5 & (uVar41 ^ uVar45);
  }
  uVar46 = ~uVar5;
  uVar16 = uVar14 & 3;
  uVar28 = uVar46 & (uVar14 & 0xfffffffc | uVar34);
  uVar23 = (uVar41 ^ uVar5 ^ uVar34) & uVar27;
  iVar6 = uVar23 * -0x2e32a767 *
          (((uint32_t)(uVar33 + 0xcce62d378b8d321c << (bVar12 & 0x3f)) |
           (uint32_t)(uVar33 + 0xcce62d378b8d321c >> 0x40 - (bVar12 & 0x3f))) + 0x2a7d1b6e);
  if ((uVar20 + 0x687454 ^ uVar26) == 0x9e31f7d) {
    iVar6 = uVar23 + 0x4aa4d3aa;
  }
  uVar23 = ~uVar14 & 0xfffffffc;
  uVar29 = ~uVar14 | 3;
  puVar35 = (uint64_t *)((int64_t)puVar32 + 4);
  uVar22 = 0;
  do {
    uVar7 = *(uint32_t *)(plVar9[0x10] + uVar31 * 4);
    uVar48 = (uint64_t)uVar7;
    bVar11 = *(uint32_t *)(lVar10 + uVar48) == uVar19;
    if ((int64_t)(uint64_t)((uVar39 * 0x5c2e4da0 >> 3) - uVar26) <
        (int64_t)(int)(uVar39 * -0x49f28f7a + uVar26)) {
      bVar11 = uVar19 <= *(uint32_t *)(lVar10 + uVar48);
    }
    if (bVar11) {
      puVar17 = (uint64_t *)(lVar10 + uVar48 + 4);
      puVar50 = (uint64_t *)((lVar8 - (int64_t)puVar17) + (int64_t)puVar35);
      if (puVar49 <= puVar50) {
        puVar50 = puVar49;
      }
      puVar51 = puVar35;
      puVar37 = puVar17;
      if (puVar35 < (uint64_t *)((int64_t)puVar50 - 7U)) {
        if (*puVar17 == *puVar35) {
          lVar24 = lVar10 + 0xc + uVar48;
          lVar25 = 0;
          do {
            puVar51 = (uint64_t *)((int64_t)puVar32 + lVar25 + 0xc);
            if ((uint64_t *)((int64_t)puVar50 - 7U) <= puVar51) {
              puVar37 = (uint64_t *)(lVar24 + lVar25);
              goto LAB_7fffa4d056fe;
            }
            uVar48 = *(uint64_t *)(lVar24 + lVar25);
            lVar25 = lVar25 + 8;
          } while (uVar48 == *puVar51);
          uVar30 = 0;
          for (uVar48 = *puVar51 ^ uVar48; (uVar48 & 1) == 0;
              uVar48 = uVar48 >> 1 | 0x8000000000000000) {
            uVar30 = uVar30 + 1;
          }
          uVar48 = (uint64_t)(uVar30 >> 3) + lVar25;
        }
        else {
          uVar30 = 0;
          for (uVar48 = *puVar17 ^ *puVar35; (uVar48 & 1) == 0;
              uVar48 = uVar48 >> 1 | 0x8000000000000000) {
            uVar30 = uVar30 + 1;
          }
          uVar48 = (uint64_t)(uVar30 >> 3);
        }
      }
      else {
LAB_7fffa4d056fe:
        if ((puVar51 < (uint64_t *)((int64_t)puVar50 - 3U)) && ((uint32_t)*puVar37 == (uint32_t)*puVar51))
        {
          puVar51 = (uint64_t *)((int64_t)puVar51 + 4);
          puVar37 = (uint64_t *)((int64_t)puVar37 + 4);
        }
        if ((puVar51 < (uint64_t *)((int64_t)puVar50 - 1U)) &&
           ((short)*puVar37 == (short)*puVar51)) {
          puVar37 = (uint64_t *)((int64_t)puVar37 + 2);
          puVar51 = (uint64_t *)((int64_t)puVar51 + 2);
        }
        if (puVar51 < puVar50) {
          puVar51 = (uint64_t *)((int64_t)puVar51 + (uint64_t)((char)*puVar37 == (char)*puVar51))
          ;
        }
        uVar48 = (int64_t)puVar51 - (int64_t)puVar35;
      }
      if ((int64_t)puVar17 + uVar48 == lVar8) {
        puVar50 = (uint64_t *)((int64_t)puVar35 + uVar48);
        puVar17 = puVar50;
        puVar51 = puVar43;
        if (puVar50 < (uint64_t *)((int64_t)puVar49 - 7U)) {
          if (*puVar43 == *puVar50) {
            puVar17 = (uint64_t *)((int64_t)puVar32 + uVar48 + 0xc);
            lVar24 = 8;
code_r0x7fffa4d057b2:
            if (puVar17 < (uint64_t *)((int64_t)puVar49 - 7U)) {
              if (*(uint64_t *)((int64_t)puVar43 + lVar24) == *puVar17) goto code_r0x7fffa4d057e2;
              uVar30 = 0;
              for (uVar47 = *(uint64_t *)((int64_t)puVar43 + lVar24) ^ *puVar17; (uVar47 & 1) == 0
                  ; uVar47 = uVar47 >> 1 | 0x8000000000000000) {
                uVar30 = uVar30 + 1;
              }
              uVar47 = (uint64_t)(uVar30 >> 3) + lVar24;
              goto LAB_7fffa4d058a2;
            }
            puVar51 = (uint64_t *)(lVar24 + (int64_t)puVar43);
            goto LAB_7fffa4d05805;
          }
          uVar30 = 0;
          for (uVar47 = *puVar43 ^ *puVar50; (uVar47 & 1) == 0;
              uVar47 = uVar47 >> 1 | 0x8000000000000000) {
            uVar30 = uVar30 + 1;
          }
          uVar47 = (uint64_t)(uVar30 >> 3);
        }
        else {
LAB_7fffa4d05805:
          if (puVar17 < (uint64_t *)((int64_t)puVar49 - 3U)) {
            uVar30 = uVar20 + 0x2cb1a265 ^ 0xf8ef678f;
            bVar11 = (uint32_t)*puVar17 <= (uint32_t)*puVar51;
            if (~(uVar39 * -0x80000000 | uVar39 * 0x7b8ace40 >> 7) <
                (uVar30 << (bVar13 & 0x1f) | uVar30 >> 0x20 - (bVar13 & 0x1f))) {
              bVar11 = (uint32_t)*puVar51 == (uint32_t)*puVar17;
            }
            if (bVar11) {
              puVar17 = (uint64_t *)((int64_t)puVar17 + 4);
              puVar51 = (uint64_t *)((int64_t)puVar51 + 4);
            }
          }
          if ((puVar17 < (uint64_t *)((int64_t)puVar49 - 1U)) &&
             ((short)*puVar51 == (short)*puVar17)) {
            puVar51 = (uint64_t *)((int64_t)puVar51 + 2);
            puVar17 = (uint64_t *)((int64_t)puVar17 + 2);
          }
          if (puVar17 < puVar49) {
            puVar17 = (uint64_t *)
                      ((int64_t)puVar17 + (uint64_t)((char)*puVar51 == (char)*puVar17));
          }
          uVar47 = (int64_t)puVar17 - (int64_t)puVar50;
        }
LAB_7fffa4d058a2:
        uVar48 = uVar48 + uVar47;
      }
      uVar48 = uVar48 + 4;
      if (uStack_108 < uVar48) {
        *param_4 = (uint64_t)
                   (((uVar46 & uVar38) * -0x7005b370 +
                     (((uVar42 | uVar45) ^ uVar5) & uVar27) * 0x7005b37a +
                     (((uVar45 | uVar40) ^ uVar5) & uVar27) * 0x6a3cd1f +
                     (uVar23 & uVar45 & uVar27) * -0x2bf636fa +
                     (uVar27 & uVar41 & uVar34) * 0xd479a37 +
                     ((uVar5 | uVar38) ^ uVar5) * 0x1eae9cae +
                     ((uVar46 | uVar16 ^ uVar45) & uVar27) * 0x2bf636f4 +
                     (uVar42 & uVar45 ^ uVar5 | uVar5) * 0x6aa7e2b1 +
                     (uVar45 & uVar41) * -0x1eae9cb2 + (uVar16 & uVar34) * 0x6a3cd21 +
                     ((uVar41 ^ uVar5 ^ uVar45) & uVar5) * -0x4bf945fd +
                     (uVar38 & uVar5 ^ uVar5) * -0x1eae9cb4 +
                     (((uVar40 | uVar34) ^ uVar5) & uVar27) * -0x2bf636f8 +
                     (uVar23 & uVar34 & uVar46) * -0x440f7c86 +
                     (((uVar40 | uVar34 | uVar5) ^ uVar5) + (uVar40 ^ uVar45)) * -2 +
                     ((uVar5 & uVar45 & uVar29 ^ uVar5) +
                     (((((uVar34 | uVar29) ^ uVar5) & uVar27) + (uVar28 & uVar27)) -
                     ((uVar28 & uVar5) + (((uVar16 | uVar45) ^ uVar5) & uVar5)))) * -0x255269d1 +
                     (uVar18 ^ uVar5) * -0x6aa7e2ae +
                     ((uVar14 & 0xfffffffc & uVar45 ^ uVar46) & uVar5) *
                     (((int)(0x7dffffffa6235a80 - uVar33) * 0x400 |
                      (uint32_t)(0x7dffffffa6235a80 - uVar33 >> 0x36)) - uVar20) +
                     ((uVar42 | uVar45) & uVar46 ^ uVar27) *
                     ((int)((uVar33 ^ 0xbc8cfa11264c0545) * -0x7b950655 >> 0x1f) + uVar20) + iVar6 +
                    (~uVar5 & (uVar45 ^ uVar42)) *
                    (~(uint32_t)((param_2 | 1) * 0x6ce5845b929d8e69 >> 8) + 0xc2b209e0)) - uVar7);
        if ((uint64_t *)((int64_t)puVar32 + uVar48) == puVar49) {
          return;
        }
        uVar19 = (uint32_t)*puVar32;
        uStack_108 = uVar48;
      }
    }
    uVar22 = uVar22 + 1;
    if (uVar22 == uVar21) {
      return;
    }
    uVar31 = uVar31 + 1;
  } while( true );
code_r0x7fffa4d04bd8:
  lVar24 = lVar24 + 8;
  goto LAB_7fffa4d04b80;
code_r0x7fffa4d04d20:
  puVar51 = puVar51 + 1;
  lVar24 = lVar24 + 8;
  if (puVar50 <= puVar51) goto LAB_7fffa4d04d2d;
  goto LAB_7fffa4d04d10;
code_r0x7fffa4d057e2:
  puVar17 = puVar17 + 1;
  lVar24 = lVar24 + 8;
  goto code_r0x7fffa4d057b2;
}


// ============================================================================
// Function : FUN_7fffa4d059b0  |  RVA: 0x5959b0  |  Size: 5484 bytes
// Callers  : none
// Callees  : none
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4d059b0(void) {
    /* +0x5959b0 */ __asm { PUSH R15 }
    /* +0x5959b2 */ __asm { PUSH RBX }
    /* +0x5959b3 */ __asm { PUSH R12 }
    /* +0x5959b5 */ __asm { PUSH RBP }
    /* +0x5959b6 */ __asm { PUSH R14 }
    /* +0x5959b8 */ __asm { PUSH RDI }
    /* +0x5959b9 */ __asm { PUSH R13 }
    /* +0x5959bb */ __asm { PUSH RSI }
    /* +0x5959bc */ __asm { SUB RSP,0x368 }
    /* +0x5959c3 */ __asm { MOVDQA xmmword ptr [RSP + 0x350],XMM10 }
    /* +0x5959cd */ __asm { MOVDQA xmmword ptr [RSP + 0x340],XMM6 }
    /* +0x5959d6 */ __asm { MOVDQA xmmword ptr [RSP + 0x330],XMM14 }
    /* +0x5959e0 */ __asm { MOVDQA xmmword ptr [RSP + 0x320],XMM11 }
    /* +0x5959ea */ __asm { MOVAPD xmmword ptr [RSP + 0x310],XMM15 }
    /* +0x5959f4 */ __asm { MOVAPS xmmword ptr [RSP + 0x300],XMM8 }
    /* +0x5959fd */ __asm { MOVDQA xmmword ptr [RSP + 0x2f0],XMM13 }
    /* +0x595a07 */ __asm { MOVDQA xmmword ptr [RSP + 0x2e0],XMM9 }
    /* +0x595a11 */ __asm { MOVDQA xmmword ptr [RSP + 0x2d0],XMM12 }
    /* +0x595a1b */ __asm { MOVDQA xmmword ptr [RSP + 0x2c0],XMM7 }
    /* +0x595a24 */ __asm { MOV RCX,RAX }
    /* +0x595a27 */ __asm { MOV R11D,0x79588a72 }
    /* +0x595a2d */ __asm { MOV R8,-0x36b7c63f85bf2898 }
    /* +0x595a37 */ __asm { ADD R8,-0x7ffe0014 }
    /* +0x595a3e */ __asm { ROR R8,CL }
    /* +0x595a41 */ __asm { MOVQ XMM3,RDX }
    /* +0x595a46 */ __asm { ROL R8,0x2a }
    /* +0x595a4a */ __asm { XOR R11D,0xc71add16 }
    /* +0x595a51 */ __asm { ADD R11D,0xfe53a5f9 }
    /* +0x595a58 */ __asm { MOVDQA XMM5,XMM3 }
    /* +0x595a5c */ __asm { PSLLQ XMM5,0x2a }
    /* +0x595a61 */ __asm { PSUBQ XMM3,XMM5 }
    /* +0x595a65 */ __asm { XOR R11D,ECX }
    /* +0x595a68 */ __asm { MOVQ RDX,XMM3 }
    /* +0x595a6d */ __asm { NOT RDX }
    /* +0x595a70 */ __asm { MOV R9D,0x20803a26 }
    /* +0x595a76 */ __asm { SUB R9D,ECX }
    /* +0x595a79 */ __asm { XOR R9D,0x38c45679 }
    /* +0x595a80 */ __asm { MOVSXD RAX,R9D }
    /* +0x595a83 */ __asm { CMP RAX,R11 }
    /* +0x595a86 */ __asm { MOV RAX,-0x1 }
    /* +0x595a8d */ __asm { CMOVL RAX,RDX }
    /* +0x595a91 */ __asm { IMUL RAX,R8 }
    /* +0x595a95 */ __asm { MOV qword ptr [RSP + 0x198],RAX }
    /* +0x595a9d */ __asm { MOV dword ptr [RSP + 0x1e0],0xc80aec90 }
    /* +0x595aa8 */ __asm { MOV R9D,dword ptr [RSP + 0x1e0] }
    /* +0x595ab0 */ __asm { LEA RAX,[0x7fffa477ce18] }
    /* +0x595ab7 */ __asm { LEA R8,[0x7fffa477c9a9] }
    /* +0x595abe */ __asm { MOV R9D,0xbd48de21 }
    /* +0x595ac4 */ __asm { MOV EDX,0x38220bec }
    /* +0x595ac9 */ __asm { SUB EDX,ECX }
    /* +0x595acb */ __asm { XOR R9D,0x42b15166 }
    /* +0x595ad2 */ __asm { ROR R9D,CL }
    /* +0x595ad5 */ __asm { ADD EDX,0x47dd2a6e }
    /* +0x595adb */ __asm { MOVSXD RDX,EDX }
    /* +0x595ade */ __asm { MOVSXD R9,R9D }
    /* +0x595ae1 */ __asm { MOV R11D,dword ptr [RAX + R9*0x1 + 0x3c] }
    /* +0x595ae6 */ __asm { MOV qword ptr [RSP + 0x68],R11 }
    /* +0x595aeb */ __asm { PUSHFQ }
    /* +0x595aec */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x595af4 */ __asm { POPFQ }
    /* +0x595af5 */ __asm { MOV dword ptr [RSP + 0x1e0],0x51405cfb }
    /* +0x595b00 */ __asm { MOV R9D,dword ptr [RSP + 0x1e0] }
    /* +0x595b08 */ __asm { MOV EAX,0xd69c2f4f }
    /* +0x595b0d */ __asm { MOV R11D,0x3a1c88e9 }
    /* +0x595b13 */ __asm { SUB R11D,EAX }
    /* +0x595b16 */ __asm { CMP R9D,R11D }
    /* +0x595b19 */ __asm { JNC 0x7fffa4d0778e }
    /* +0x595b1f */ __asm { ADD R8,RDX }
    /* +0x595b22 */ __asm { MOV uint8_t ptr [RSP + 0x1ec],0x0 }
    /* +0x595b2a */ __asm { PXOR XMM3,XMM3 }
    /* +0x595b2e */ __asm { MOVDQU xmmword ptr [RSP + 0x1f7],XMM3 }
    /* +0x595b37 */ __asm { MOVDQU xmmword ptr [RSP + 0x207],XMM3 }
    /* +0x595b40 */ __asm { MOVDQU xmmword ptr [RSP + 0x217],XMM3 }
    /* +0x595b49 */ __asm { MOV qword ptr [RSP + 0x22b],0x0 }
    /* +0x595b55 */ __asm { RDTSC }
    /* +0x595b57 */ __asm { SHL RDX,0x20 }
    /* +0x595b5b */ __asm { OR RDX,RAX }
    /* +0x595b5e */ __asm { MOV R11,0xad50be56de5398e }
    /* +0x595b68 */ __asm { IMUL R11,RDX }
    /* +0x595b6c */ __asm { MOV EDX,0x3 }
    /* +0x595b71 */ __asm { MOV qword ptr [RSP + 0x150],RCX }
    /* +0x595b79 */ __asm { MOVQ XMM8,RCX }
    /* +0x595b7e */ __asm { MOV RCX,0x6858b3c29609b327 }
    /* +0x595b88 */ __asm { MOVDQA XMM3,xmmword ptr [0x7fffa56bbf10] }
    /* +0x595b90 */ __asm { MOV EAX,0x9f77924b }
    /* +0x595b95 */ __asm { MOV R9,-0x796d933f02e819f0 }
    /* +0x595b9f */ __asm { MOV R10,0x4ef0fc8ac4 }
    /* +0x595ba9 */ __asm { MOV RBX,0xc37c4e9cb8 }
    /* +0x595bb3 */ __asm { NOP dword ptr CS:[RAX + RAX*0x1] }
    /* +0x595bc0 */ __asm { MOV R14,RCX }
    /* +0x595bc3 */ __asm { MOVQ XMM5,R14 }
    /* +0x595bc8 */ __asm { MOVDQA XMM0,XMM5 }
    /* +0x595bcc */ __asm { PMULUDQ XMM0,XMM3 }
    /* +0x595bd0 */ __asm { PSRLQ XMM5,0x20 }
    /* +0x595bd5 */ __asm { PMULUDQ XMM5,XMM3 }
    /* +0x595bd9 */ __asm { PSLLQ XMM5,0x20 }
    /* +0x595bde */ __asm { PADDQ XMM5,XMM0 }
    /* +0x595be2 */ __asm { PXOR XMM5,XMM8 }
    /* +0x595be7 */ __asm { MOVQ R14,XMM5 }
    /* +0x595bec */ __asm { MOV R12,R11 }
    /* +0x595bef */ __asm { IMUL R12,RAX }
    /* +0x595bf3 */ __asm { IMUL R12,R14 }
    /* +0x595bf7 */ __asm { SHR R12,0x20 }
    /* +0x595bfb */ __asm { MOV uint8_t ptr [RSP + RDX*0x1 + 0x1dd],R12B }
    /* +0x595c03 */ __asm { CMP RDX,0x63 }
    /* +0x595c07 */ __asm { JZ 0x7fffa4d05c4e }
    /* +0x595c09 */ __asm { MOV R14,R11 }
    /* +0x595c0c */ __asm { IMUL R14,R9 }
    /* +0x595c10 */ __asm { MOV R12,R14 }
    /* +0x595c13 */ __asm { SHR R12,0x20 }
    /* +0x595c17 */ __asm { MOV R13,R11 }
    /* +0x595c1a */ __asm { IMUL R13,R10 }
    /* +0x595c1e */ __asm { IMUL R11,RBX }
    /* +0x595c22 */ __asm { SHR R11,0x20 }
    /* +0x595c26 */ __asm { MOV uint8_t ptr [RSP + RDX*0x1 + 0x1e0],R12B }
    /* +0x595c2e */ __asm { MOV uint8_t ptr [RSP + RDX*0x1 + 0x1df],R11B }
    /* +0x595c36 */ __asm { SHR R13,0x20 }
    /* +0x595c3a */ __asm { MOV uint8_t ptr [RSP + RDX*0x1 + 0x1de],R13B }
    /* +0x595c42 */ __asm { ADD RDX,0x4 }
    /* +0x595c46 */ __asm { MOV R11,R14 }
    /* +0x595c49 */ __asm { JMP 0x7fffa4d05bc0 }
    /* +0x595c4e */ __asm { MOV EAX,0x459fffef }
    /* +0x595c53 */ __asm { MOV DI,0x603e }
    /* +0x595c57 */ __asm { LEA R11,[0x7fffa477443d] }
    /* +0x595c5e */ __asm { LEA RCX,[0x7fffa4770000] }
    /* +0x595c65 */ __asm { MOV R9,0x0 }
    /* +0x595c6c */ __asm { NOP }
    /* +0x595c6d */ __asm { LEA R10,[0x7fffa477f8ac] }
    /* +0x595c74 */ __asm { MOV CX,0x5b4f }
    /* +0x595c78 */ __asm { LEA R12,[0x7fffa477a804] }
    /* +0x595c7f */ __asm { LEA RDX,[0x7fffa47c8d47] }
    /* +0x595c86 */ __asm { MOVZX R9D,uint8_t ptr [RSP + 0x1ec] }
    /* +0x595c8f */ __asm { MOV dword ptr [RSP + 0x1c0],R9D }
    /* +0x595c97 */ __asm { MOV R13,qword ptr [RSP + 0x150] }
    /* +0x595c9f */ __asm { MOV EBX,R13D }
    /* +0x595ca2 */ __asm { MOV R15W,0xe318 }
    /* +0x595ca7 */ __asm { ADD R15D,0xffffbf38 }
    /* +0x595cae */ __asm { ROL R15W,0x5 }
    /* +0x595cb3 */ __asm { OR EBX,0x1 }
    /* +0x595cb6 */ __asm { LEA R9,[0x7fffa477e665] }
    /* +0x595cbd */ __asm { MOV qword ptr [RSP + 0xd8],R9 }
    /* +0x595cc5 */ __asm { LEA R14,[0x7fffa477ecf5] }
    /* +0x595ccc */ __asm { MOV R9D,0x9144241d }
    /* +0x595cd2 */ __asm { DEC R9D }
    /* +0x595cd5 */ __asm { IMUL R9D,EBX }
    /* +0x595cd9 */ __asm { ADD R12D,R9D }
    /* +0x595cdc */ __asm { MOV R9W,0x67da }
    /* +0x595ce1 */ __asm { MOV qword ptr [RSP + 0x1a0],R8 }
    /* +0x595ce9 */ __asm { MOV R8D,R13D }
    /* +0x595cec */ __asm { OR R8D,0x1 }
    /* +0x595cf0 */ __asm { IMUL R15D,R8D }
    /* +0x595cf4 */ __asm { MOV ESI,0x9206bc7e }
    /* +0x595cf9 */ __asm { LEA RBP,[0x7fffa47721c4] }
    /* +0x595d00 */ __asm { MOVSX R15D,R15W }
    /* +0x595d04 */ __asm { ADD EBP,R15D }
    /* +0x595d07 */ __asm { MOV R15D,0x748794a7 }
    /* +0x595d0d */ __asm { SUB R14D,R15D }
    /* +0x595d10 */ __asm { MOV qword ptr [RSP + 0x170],R8 }
    /* +0x595d18 */ __asm { MOV R15D,R8D }
    /* +0x595d1b */ __asm { IMUL R15D,R9D }
    /* +0x595d1f */ __asm { LEA R9,[0x7fffa47771c9] }
    /* +0x595d26 */ __asm { ROL R15W,0x8 }
    /* +0x595d2b */ __asm { MOVSX R15,R15W }
    /* +0x595d2f */ __asm { ADD R15,R9 }
    /* +0x595d32 */ __asm { MOV R9W,0xf458 }
    /* +0x595d37 */ __asm { ADD R9D,0xffffc768 }
    /* +0x595d3e */ __asm { XOR R9D,R13D }
    /* +0x595d41 */ __asm { ADD R11D,R9D }
    /* +0x595d44 */ __asm { SHL R12B,0x5 }
    /* +0x595d48 */ __asm { SHR R11B,0x3 }
    /* +0x595d4c */ __asm { OR R11B,R12B }
    /* +0x595d4f */ __asm { MOV R9D,0x2c0aa04 }
    /* +0x595d55 */ __asm { XOR R9D,0x7d3fad53 }
    /* +0x595d5c */ __asm { SUB R9D,R13D }
    /* +0x595d5f */ __asm { ADD R10D,R9D }
    /* +0x595d62 */ __asm { IMUL R9D,EDI,0xbad }
    /* +0x595d69 */ __asm { SUB R9D,R13D }
    /* +0x595d6c */ __asm { MOVSX R9,R9W }
    /* +0x595d70 */ __asm { LEA R12,[0x7fffa4774c1d] }
    /* +0x595d77 */ __asm { ADD R12,R9 }
    /* +0x595d7a */ __asm { IMUL R9D,dword ptr [RSP + 0x1c0],0x2aaaaaab }
    /* +0x595d86 */ __asm { SHR R15,0x30 }
    /* +0x595d8a */ __asm { ROL R15B,0x5 }
    /* +0x595d8e */ __asm { ADD R9D,0x2aaaaaab }
    /* +0x595d95 */ __asm { ADD R9,R9 }
    /* +0x595d98 */ __asm { LEA R9,[R9 + R9*0x2] }
    /* +0x595d9c */ __asm { SHR R9,0x20 }
    /* +0x595da0 */ __asm { MOV uint8_t ptr [RSP + R9*0x8 + 0x1fd],R15B }
    /* +0x595da8 */ __asm { SHR R12,0x20 }
    /* +0x595dac */ __asm { ROL R12B,0x5 }
    /* +0x595db0 */ __asm { MOV uint8_t ptr [RSP + R9*0x8 + 0x1fb],R12B }
    /* +0x595db8 */ __asm { SHR EBP,0x10 }
    /* +0x595dbb */ __asm { ROL BPL,0x5 }
    /* +0x595dbf */ __asm { MOV uint8_t ptr [RSP + R9*0x8 + 0x1f7],R11B }
    /* +0x595dc7 */ __asm { SHR R10D,0x18 }
    /* +0x595dcb */ __asm { ROL R10B,0x5 }
    /* +0x595dcf */ __asm { MOV uint8_t ptr [RSP + R9*0x8 + 0x1f9],BPL }
    /* +0x595dd7 */ __asm { MOV uint8_t ptr [RSP + R9*0x8 + 0x1fa],R10B }
    /* +0x595ddf */ __asm { ADD ECX,R13D }
    /* +0x595de2 */ __asm { XOR ECX,0x575 }
    /* +0x595de8 */ __asm { ROL CX,0x4 }
    /* +0x595dec */ __asm { MOVSX RCX,CX }
    /* +0x595df0 */ __asm { ADD R14D,0x7486a7b2 }
    /* +0x595df7 */ __asm { SHR R14D,0x8 }
    /* +0x595dfb */ __asm { ROL R14B,0x5 }
    /* +0x595dff */ __asm { MOV uint8_t ptr [RSP + R9*0x8 + 0x1f8],R14B }
    /* +0x595e07 */ __asm { LEA R11,[0x7fffa4771d8b] }
    /* +0x595e0e */ __asm { ADD R11,RCX }
    /* +0x595e11 */ __asm { SHR R11,0x28 }
    /* +0x595e15 */ __asm { ROL R11B,0x5 }
    /* +0x595e19 */ __asm { MOV uint8_t ptr [RSP + R9*0x8 + 0x1fc],R11B }
    /* +0x595e21 */ __asm { ADD EAX,R13D }
    /* +0x595e24 */ __asm { ROL EAX,0xc }
    /* +0x595e27 */ __asm { IMUL ESI,EBX }
    /* +0x595e2a */ __asm { ADD ESI,0xc19b6d32 }
    /* +0x595e30 */ __asm { CDQE }
    /* +0x595e32 */ __asm { XOR ESI,0x8850bb37 }
    /* +0x595e38 */ __asm { MOVSXD R11,ESI }
    /* +0x595e3b */ __asm { MOV RSI,RBX }
    /* +0x595e3e */ __asm { ADD R11,qword ptr [RSP + 0xd8] }
    /* +0x595e46 */ __asm { SHR R11,0x38 }
    /* +0x595e4a */ __asm { ROL R11B,0x5 }
    /* +0x595e4e */ __asm { MOV uint8_t ptr [RSP + R9*0x8 + 0x1fe],R11B }
    /* +0x595e56 */ __asm { MOV uint8_t ptr [RSP + 0x1ec],R9B }
    /* +0x595e5e */ __asm { MOVZX R11D,word ptr [RSP + 0x240] }
    /* +0x595e67 */ __asm { MOV word ptr [RDX + RAX*0x1 + 0x60],R11W }
    /* +0x595e6d */ __asm { MOVUPS XMM3,xmmword ptr [RSP + 0x230] }
    /* +0x595e75 */ __asm { MOVUPS xmmword ptr [RDX + RAX*0x1 + 0x50],XMM3 }
    /* +0x595e7a */ __asm { MOVUPS XMM3,xmmword ptr [RSP + 0x1f0] }
    /* +0x595e82 */ __asm { MOVUPS XMM5,xmmword ptr [RSP + 0x200] }
    /* +0x595e8a */ __asm { MOVUPS XMM0,xmmword ptr [RSP + 0x210] }
    /* +0x595e92 */ __asm { MOVDQU XMM4,xmmword ptr [RSP + 0x220] }
    /* +0x595e9b */ __asm { MOVDQU xmmword ptr [RDX + RAX*0x1 + 0x40],XMM4 }
    /* +0x595ea1 */ __asm { MOVUPS xmmword ptr [RDX + RAX*0x1 + 0x30],XMM0 }
    /* +0x595ea6 */ __asm { MOVUPS xmmword ptr [RDX + RAX*0x1 + 0x20],XMM5 }
    /* +0x595eab */ __asm { MOVUPS xmmword ptr [RDX + RAX*0x1 + 0x10],XMM3 }
    /* +0x595eb0 */ __asm { MOVUPS XMM3,xmmword ptr [RSP + 0x1e0] }
    /* +0x595eb8 */ __asm { MOVUPS xmmword ptr [RDX + RAX*0x1],XMM3 }
    /* +0x595ebc */ __asm { MOV RDX,qword ptr [RSP + 0x68] }
    /* +0x595ec1 */ __asm { MOV R8,qword ptr [RSP + 0x1a0] }
    /* +0x595ec9 */ __asm { MOV R8D,dword ptr [R8 + RDX*0x1 + 0x50] }
    /* +0x595ece */ __asm { MOV qword ptr [RSP + 0x1a0],R8 }
    /* +0x595ed6 */ __asm { MOV uint8_t ptr [RSP + 0x1e8],0x0 }
    /* +0x595ede */ __asm { XORPS XMM3,XMM3 }
    /* +0x595ee1 */ __asm { MOVUPS xmmword ptr [RSP + 0x1ed],XMM3 }
    /* +0x595ee9 */ __asm { MOV qword ptr [RSP + 0x1fd],0x0 }
    /* +0x595ef5 */ __asm { MOV qword ptr [RSP + 0x20b],0x0 }
    /* +0x595f01 */ __asm { RDTSC }
    /* +0x595f03 */ __asm { SHL RDX,0x20 }
    /* +0x595f07 */ __asm { OR RDX,RAX }
    /* +0x595f0a */ __asm { MOV RCX,0x4b515d776114b18 }
    /* +0x595f14 */ __asm { IMUL RDX,RCX }
    /* +0x595f18 */ __asm { XOR R9D,R9D }
    /* +0x595f1b */ __asm { MOVD XMM11,R13D }
    /* +0x595f20 */ __asm { MOVDQA XMM3,xmmword ptr [0x7fffa56bbf20] }
    /* +0x595f28 */ __asm { MOV RAX,0x751404f70f306213 }
    /* +0x595f32 */ __asm { MOV R10,0x1ffffffff557b }
    /* +0x595f3c */ __asm { MOV R11,-0x4b515d7f6114b1c }
    /* +0x595f46 */ __asm { MOVDQA XMM5,xmmword ptr [0x7fffa56bbf30] }
    /* +0x595f4e */ __asm { MOV qword ptr [RSP + 0x168],RBX }
    /* +0x595f56 */ __asm { JMP 0x7fffa4d06075 }
    /* +0x595f60 */ __asm { MOV EDI,0x471880fe }
    /* +0x595f65 */ __asm { MOV R13D,0x56726dc7 }
    /* +0x595f6b */ __asm { MOV EBX,0x44643e03 }
    /* +0x595f70 */ __asm { MOVD XMM0,R13D }
    /* +0x595f75 */ __asm { MOV R14,RAX }
    /* +0x595f78 */ __asm { IMUL RDX,RCX }
    /* +0x595f7c */ __asm { MOV R13D,0x9ac0ae6e }
    /* +0x595f82 */ __asm { SHR R14,0xf }
    /* +0x595f86 */ __asm { XOR R14,R10 }
    /* +0x595f89 */ __asm { SUB R14,R8 }
    /* +0x595f8c */ __asm { MOV R15,R11 }
    /* +0x595f8f */ __asm { XOR R15,R8 }
    /* +0x595f92 */ __asm { NOT R15 }
    /* +0x595f95 */ __asm { SUB R13D,R8D }
    /* +0x595f98 */ __asm { IMUL EBP,R13D,-0x36231101 }
    /* +0x595f9f */ __asm { ROL EBP,0x14 }
    /* +0x595fa2 */ __asm { ADD R14,RDX }
    /* +0x595fa5 */ __asm { MOV RDX,R14 }
    /* +0x595fa8 */ __asm { IMUL RDX,RCX }
    /* +0x595fac */ __asm { ADD RDX,RCX }
    /* +0x595faf */ __asm { MOV R13,RDX }
    /* +0x595fb2 */ __asm { SHR R13,0x20 }
    /* +0x595fb6 */ __asm { IMUL RDX,RCX }
    /* +0x595fba */ __asm { ADD RDX,R15 }
    /* +0x595fbd */ __asm { MOV R15,RDX }
    /* +0x595fc0 */ __asm { IMUL EBX,ESI }
    /* +0x595fc3 */ __asm { ROL EBX,0x10 }
    /* +0x595fc6 */ __asm { SHR R15,0x20 }
    /* +0x595fca */ __asm { MOVSXD RBX,EBX }
    /* +0x595fcd */ __asm { MOV ESI,0xe61bebc9 }
    /* +0x595fd2 */ __asm { SUB ESI,EDI }
    /* +0x595fd4 */ __asm { PADDD XMM0,XMM5 }
    /* +0x595fd8 */ __asm { ROL ESI,0x12 }
    /* +0x595fdb */ __asm { MOVSXD RDI,ESI }
    /* +0x595fde */ __asm { MOV ESI,0x5de90b0e }
    /* +0x595fe3 */ __asm { XOR ESI,0xf5dd06f6 }
    /* +0x595fe9 */ __asm { ADD ESI,0x6f5012d0 }
    /* +0x595fef */ __asm { PXOR XMM0,XMM11 }
    /* +0x595ff4 */ __asm { MOVD R8D,XMM0 }
    /* +0x595ff9 */ __asm { ADD R8D,0x14c4b71d }
    /* +0x596000 */ __asm { CMP RSI,RBP }
    /* +0x596003 */ __asm { LEA ESI,[RDX + -0x20] }
    /* +0x596006 */ __asm { MOVZX ESI,SIL }
    /* +0x59600a */ __asm { CMOVC ESI,R15D }
    /* +0x59600e */ __asm { MOV EBP,R9D }
    /* +0x596011 */ __asm { AND EBP,0x2 }
    /* +0x596014 */ __asm { CMP RBX,RDI }
    /* +0x596017 */ __asm { MOVSXD R8,R8D }
    /* +0x59601a */ __asm { MOV qword ptr [RSP + 0x68],R8 }
    /* +0x59601f */ __asm { MOV uint8_t ptr [RSP + R9*0x1 + 0x1e1],R13B }
    /* +0x596027 */ __asm { CMOVLE R12,RBP }
    /* +0x59602b */ __asm { MOV uint8_t ptr [RSP + R12*0x1 + 0x1e0],SIL }
    /* +0x596033 */ __asm { MOV RSI,qword ptr [RSP + 0x168] }
    /* +0x59603b */ __asm { IMUL RDX,RCX }
    /* +0x59603f */ __asm { SHR R14,0x20 }
    /* +0x596043 */ __asm { MOV R8,R9 }
    /* +0x596046 */ __asm { OR R8,0x3 }
    /* +0x59604a */ __asm { ADD RDX,RCX }
    /* +0x59604d */ __asm { MOV R12,RDX }
    /* +0x596050 */ __asm { SHR R12,0x20 }
    /* +0x596054 */ __asm { MOV uint8_t ptr [RSP + R8*0x1 + 0x1e0],R12B }
    /* +0x59605c */ __asm { MOV uint8_t ptr [RSP + R9*0x1 + 0x1e0],R14B }
    /* +0x596064 */ __asm { LEA R8,[R9 + 0x4] }
    /* +0x596068 */ __asm { MOV R9,R8 }
    /* +0x59606b */ __asm { CMP R8,0x34 }
    /* +0x59606f */ __asm { JZ 0x7fffa4d0610f }
    /* +0x596075 */ __asm { MOV EDI,0xef0d1127 }
    /* +0x59607a */ __asm { MOV EBX,0x2dd3052d }
    /* +0x59607f */ __asm { MOV R8,qword ptr [RSP + 0x150] }
    /* +0x596087 */ __asm { ADD EDI,R8D }
    /* +0x59608a */ __asm { XOR EDI,0xff63c32e }
    /* +0x596090 */ __asm { MOVSXD R14,EDI }
    /* +0x596093 */ __asm { MOV R12,R9 }
    /* +0x596096 */ __asm { OR R12,0x2 }
    /* +0x59609a */ __asm { MOVD XMM0,EBX }
    /* +0x59609e */ __asm { PMULUDQ XMM0,XMM3 }
    /* +0x5960a2 */ __asm { PADDD XMM0,XMM11 }
    /* +0x5960a7 */ __asm { MOVD EDI,XMM0 }
    /* +0x5960ab */ __asm { MOVSXD RBX,EDI }
    /* +0x5960ae */ __asm { CMP RBX,R14 }
    /* +0x5960b1 */ __asm { JNC 0x7fffa4d05f60 }
    /* +0x5960b7 */ __asm { MOV EDI,0x24096c7a }
    /* +0x5960bc */ __asm { IMUL RDX,RCX }
    /* +0x5960c0 */ __asm { MOV R14,RDX }
    /* +0x5960c3 */ __asm { ADD R14,RCX }
    /* +0x5960c6 */ __asm { MOV R13,R14 }
    /* +0x5960c9 */ __asm { IMUL R13,RCX }
    /* +0x5960cd */ __asm { ADD R13,RCX }
    /* +0x5960d0 */ __asm { MOV RDX,R13 }
    /* +0x5960d3 */ __asm { IMUL RDX,RCX }
    /* +0x5960d7 */ __asm { SHR R13,0x20 }
    /* +0x5960db */ __asm { ADD RDX,RCX }
    /* +0x5960de */ __asm { MOV RBP,RDX }
    /* +0x5960e1 */ __asm { SHR RBP,0x20 }
    /* +0x5960e5 */ __asm { MOV uint8_t ptr [RSP + R12*0x1 + 0x1e0],BPL }
    /* +0x5960ed */ __asm { MOV uint8_t ptr [RSP + R9*0x1 + 0x1e1],R13B }
    /* +0x5960f5 */ __asm { XOR EDI,0x7ffe02f0 }
    /* +0x5960fb */ __asm { IMUL R12D,EDI,0x7c27b2fb }
    /* +0x596102 */ __asm { XOR R12D,R8D }
    /* +0x596105 */ __asm { MOV qword ptr [RSP + 0x68],R12 }
    /* +0x59610a */ __asm { JMP 0x7fffa4d0603b }
    /* +0x59610f */ __asm { MOV RCX,qword ptr [RSP + 0x68] }
    /* +0x596114 */ __asm { MOV R11,RSI }
    /* +0x596117 */ __asm { MOV ESI,ECX }
    /* +0x596119 */ __asm { OR ESI,0x1 }
    /* +0x59611c */ __asm { MOVZX R8D,uint8_t ptr [RSP + 0x1e8] }
    /* +0x596125 */ __asm { MOV R9D,0xb665e83c }
    /* +0x59612b */ __asm { IMUL R9D,R11D }
    /* +0x59612f */ __asm { LEA R11,[0x7fffa477c16b] }
    /* +0x596136 */ __asm { IMUL EDX,R8D,0x55555556 }
    /* +0x59613d */ __asm { MOV R8D,0xb9c4bf50 }
    /* +0x596143 */ __asm { MOV R12,qword ptr [RSP + 0x150] }
    /* +0x59614b */ __asm { SUB R8D,R12D }
    /* +0x59614e */ __asm { XOR R8D,0x510af226 }
    /* +0x596155 */ __asm { ADD EDX,0x55555556 }
    /* +0x59615b */ __asm { ADD R8D,0x367cb294 }
    /* +0x596162 */ __asm { ROR R8D,CL }
    /* +0x596165 */ __asm { LEA RDX,[RDX + RDX*0x2] }
    /* +0x596169 */ __asm { SHR RDX,0x20 }
    /* +0x59616d */ __asm { MOVSXD R8,R8D }
    /* +0x596170 */ __asm { ADD R11,qword ptr [RSP + 0x1a0] }
    /* +0x596178 */ __asm { ADD R11,R8 }
    /* +0x59617b */ __asm { MOV R8,R11 }
    /* +0x59617e */ __asm { SHR R8,0x30 }
    /* +0x596182 */ __asm { MOV R14,R11 }
    /* +0x596185 */ __asm { SHR R14,0x28 }
    /* +0x596189 */ __asm { MOV R10,R11 }
    /* +0x59618c */ __asm { SHR R10,0x38 }
    /* +0x596190 */ __asm { MOV RAX,R11 }
    /* +0x596193 */ __asm { SHR RAX,0x20 }
    /* +0x596197 */ __asm { MOV EBX,R11D }
    /* +0x59619a */ __asm { SHR EBX,0x18 }
    /* +0x59619d */ __asm { MOV EDI,R11D }
    /* +0x5961a0 */ __asm { SHR EDI,0x8 }
    /* +0x5961a3 */ __asm { MOV R13D,R11D }
    /* +0x5961a6 */ __asm { LEA R15,[0x7fffa47904a9] }
    /* +0x5961ad */ __asm { XOR R11B,uint8_t ptr [RSP + 0x20b] }
    /* +0x5961b5 */ __asm { MOV uint8_t ptr [RSP + RDX*0x8 + 0x1ed],R11B }
    /* +0x5961bd */ __asm { XOR R14B,uint8_t ptr [RSP + 0x210] }
    /* +0x5961c5 */ __asm { XOR R8B,uint8_t ptr [RSP + 0x211] }
    /* +0x5961cd */ __asm { SHR R13D,0x10 }
    /* +0x5961d1 */ __asm { MOV uint8_t ptr [RSP + RDX*0x8 + 0x1f2],R14B }
    /* +0x5961d9 */ __asm { XOR BL,uint8_t ptr [RSP + 0x20e] }
    /* +0x5961e0 */ __asm { XOR R13B,uint8_t ptr [RSP + 0x20d] }
    /* +0x5961e8 */ __asm { XOR R10B,uint8_t ptr [RSP + 0x212] }
    /* +0x5961f0 */ __asm { MOV uint8_t ptr [RSP + RDX*0x8 + 0x1f0],BL }
    /* +0x5961f7 */ __asm { XOR AL,uint8_t ptr [RSP + 0x20f] }
    /* +0x5961fe */ __asm { MOV uint8_t ptr [RSP + RDX*0x8 + 0x1f1],AL }
    /* +0x596205 */ __asm { XOR DIL,uint8_t ptr [RSP + 0x20c] }
    /* +0x59620d */ __asm { MOV uint8_t ptr [RSP + RDX*0x8 + 0x1f3],R8B }
    /* +0x596215 */ __asm { MOV uint8_t ptr [RSP + RDX*0x8 + 0x1ef],R13B }
    /* +0x59621d */ __asm { MOV uint8_t ptr [RSP + RDX*0x8 + 0x1f4],R10B }
    /* +0x596225 */ __asm { MOV EAX,ESI }
    /* +0x596227 */ __asm { MOV uint8_t ptr [RSP + RDX*0x8 + 0x1ee],DIL }
    /* +0x59622f */ __asm { MOV uint8_t ptr [RSP + 0x1e8],DL }
    /* +0x596236 */ __asm { XOR R9D,0x6f46480c }
    /* +0x59623d */ __asm { IMUL R9D,ESI }
    /* +0x596241 */ __asm { MOVSXD RDX,R9D }
    /* +0x596244 */ __asm { MOV R8,qword ptr [RSP + 0x210] }
    /* +0x59624c */ __asm { MOV qword ptr [R15 + RDX*0x1 + 0x30],R8 }
    /* +0x596251 */ __asm { MOVUPS XMM3,xmmword ptr [RSP + 0x1f0] }
    /* +0x596259 */ __asm { MOVUPS XMM5,xmmword ptr [RSP + 0x200] }
    /* +0x596261 */ __asm { MOVUPS xmmword ptr [R15 + RDX*0x1 + 0x20],XMM5 }
    /* +0x596267 */ __asm { MOVUPS xmmword ptr [R15 + RDX*0x1 + 0x10],XMM3 }
    /* +0x59626d */ __asm { MOVUPS XMM3,xmmword ptr [RSP + 0x1e0] }
    /* +0x596275 */ __asm { MOVUPS xmmword ptr [R15 + RDX*0x1],XMM3 }
    /* +0x59627a */ __asm { MOV dword ptr [RSP + 0x1e0],0xee37f9ab }
    /* +0x596285 */ __asm { MOV R9D,dword ptr [RSP + 0x1e0] }
    /* +0x59628d */ __asm { MOV R9W,0x1a5b }
    /* +0x596292 */ __asm { SUB R9D,R12D }
    /* +0x596295 */ __asm { MOV ESI,ECX }
    /* +0x596297 */ __asm { OR ESI,0x1 }
    /* +0x59629a */ __asm { IMUL R9D,ESI }
    /* +0x59629e */ __asm { MOVZX R8D,R9W }
    /* +0x5962a2 */ __asm { XOR R8,0xcc48 }
    /* +0x5962a9 */ __asm { MOV RDX,qword ptr GS:[R8] }
    /* +0x5962ad */ __asm { MOV R9W,0x623e }
    /* +0x5962b2 */ __asm { XOR R9D,R12D }
    /* +0x5962b5 */ __asm { IMUL R9D,R9D,0x1a3f }
    /* +0x5962bc */ __asm { XOR R9D,0xffffaaa3 }
    /* +0x5962c3 */ __asm { IMUL R9D,ESI }
    /* +0x5962c7 */ __asm { MOVZX R8D,R9W }
    /* +0x5962cb */ __asm { MOV ECX,0xf18 }
    /* +0x5962d0 */ __asm { ADD RCX,qword ptr GS:[R8] }
    /* +0x5962d4 */ __asm { MOV R8,-0x74ce8a07f8494a39 }
    /* +0x5962de */ __asm { MOVQ XMM3,R8 }
    /* +0x5962e3 */ __asm { MOVQ XMM5,RCX }
    /* +0x5962e8 */ __asm { PXOR XMM5,XMM3 }
    /* +0x5962ec */ __asm { MOVQ R8,XMM5 }
    /* +0x5962f1 */ __asm { MOV RCX,0x6f3c555262288359 }
    /* +0x5962fb */ __asm { CMP R8,RCX }
    /* +0x5962fe */ __asm { NOP }
    /* +0x5962ff */ __asm { NOP }
    /* +0x596300 */ __asm { NOP }
    /* +0x596301 */ __asm { NOP }
    /* +0x596303 */ __asm { LEA R9,[0x7fffa4770000] }
    /* +0x59630a */ __asm { MOV R8,0x0 }
    /* +0x596311 */ __asm { MOV RDX,qword ptr [RDX + 0x18] }
    /* +0x596315 */ __asm { PUSHFQ }
    /* +0x596316 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x59631e */ __asm { POPFQ }
    /* +0x59631f */ __asm { MOV dword ptr [RSP + 0x1e0],0x5e58e6f5 }
    /* +0x59632a */ __asm { MOV R9D,dword ptr [RSP + 0x1e0] }
    /* +0x596332 */ __asm { TEST R9D,R9D }
    /* +0x596335 */ __asm { JNS 0x7fffa4d06343 }
    /* +0x596337 */ __asm { CALL 0x8000177302ed }
    /* +0x59633c */ __asm { LOOP 0x7fffa4d06323 }
    /* +0x596343 */ __asm { MOV dword ptr [RSP + 0x180],EAX }
    /* +0x59634a */ __asm { MOV R14,qword ptr [RDX + 0x10] }
    /* +0x59634e */ __asm { ADD RDX,0x10 }
    /* +0x596352 */ __asm { TEST R14,R14 }
    /* +0x596355 */ __asm { SETZ R8B }
    /* +0x596359 */ __asm { CMP R14,RDX }
    /* +0x59635c */ __asm { SETZ R9B }
    /* +0x596360 */ __asm { OR R9B,R8B }
    /* +0x596363 */ __asm { MOV dword ptr [RSP + 0x194],ESI }
    /* +0x59636a */ __asm { JZ 0x7fffa4d0637d }
    /* +0x59636c */ __asm { MOV qword ptr [RSP + 0x1a0],0x0 }
    /* +0x596378 */ __asm { JMP 0x7fffa4d0655b }
    /* +0x59637d */ __asm { MOV qword ptr [RSP + 0x1a0],0x0 }
    /* +0x596389 */ __asm { MOV RAX,0x4000000025b }
    /* +0x596393 */ __asm { MOV RBX,-0x5150ea1e82a398e9 }
    /* +0x59639d */ __asm { MOV R15,0x6bbb180eca8e4774 }
    /* +0x5963a7 */ __asm { NOP word ptr [RAX + RAX*0x1] }
    /* +0x5963b0 */ __asm { MOV dword ptr [RSP + 0x1e0],0xc9b8b1c }
    /* +0x5963bb */ __asm { MOV ECX,dword ptr [RSP + 0x1e0] }
    /* +0x5963c2 */ __asm { MOV CX,0x4e57 }
    /* +0x5963c6 */ __asm { IMUL EDI,ECX,-0x49c3 }
    /* +0x5963cc */ __asm { MOV RCX,qword ptr [RSP + 0x68] }
    /* +0x5963d1 */ __asm { ROL DI,CL }
    /* +0x5963d4 */ __asm { MOVZX R10D,word ptr [R14 + 0x58] }
    /* +0x5963d9 */ __asm { XOR EDI,0xc25f }
    /* +0x5963df */ __asm { CMP R10W,DI }
    /* +0x5963e3 */ __asm { JNC 0x7fffa4d06410 }
    /* +0x5963e5 */ __asm { MOV EDI,0xc5160fff }
    /* +0x5963ea */ __asm { ADD EDI,ECX }
    /* +0x5963ec */ __asm { ROL EDI,0x8 }
    /* +0x5963ef */ __asm { MOV RCX,qword ptr [RSP + 0x150] }
    /* +0x5963f7 */ __asm { ROL EDI,CL }
}


// ============================================================================
// Function : FUN_7fffa4d25b50  |  RVA: 0x5b5b50  |  Size: 105 bytes
// Callers  : FUN_7fffa507cf70@0x90cf70
// Callees  : FUN_7fffa524fccc@0xadfccc
// ============================================================================
uint64_t FUN_7fffa4d25b50(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  
  if (param_1 != 0) {
    lVar2 = *(int64_t *)(param_2 + 8);
    lVar1 = lVar2 + *(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint32_t *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (param_3 < (uint64_t)(*(int *)(lVar1 + uVar4 * 8) + lVar2)) break;
          uVar5 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar5;
        } while (uVar5 < *(uint32_t *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return (uint64_t)
                 *(uint32_t *)(lVar2 + (uint64_t)((int)uVar4 - 1) * 8 + 4 +
                          (int64_t)*(int *)(param_1 + 0x18));
        }
      }
      return 0xffffffff;
    }
  }
  FUN_7fffa524fccc();
  pcVar3 = (code *)__debugbreak();
  uVar4 = (*pcVar3)();
  return uVar4;
}


// ============================================================================
// Function : FUN_7fffa4d25bbc  |  RVA: 0x5b5bbc  |  Size: 1 bytes
// Callers  : FUN_7fffa55f0084@0xe80084
// Callees  : none
// ============================================================================
void FUN_7fffa4d25bbc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__debugbreak();
  (*pcVar1)();
  return;
}


// ============================================================================
// Function : FUN_7fffa4d25bd0  |  RVA: 0x5b5bd0  |  Size: 15 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4d25bd0(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)(*(code *)&DAT_7ff85059bba0)();
  while (puVar2 != (uint64_t *)0x0) {
    puVar1 = (uint64_t *)*puVar2;
    FUN_7fffa52c3bf0(puVar2);
    puVar2 = puVar1;
  }
  return;
}


// ============================================================================
// Function : FUN_7fffa4d25bdf  |  RVA: 0x5b5bdf  |  Size: 29 bytes
// Callers  : none
// Callees  : FUN_7fffa52c3bf0@0xb53bf0
// ============================================================================
void FUN_7fffa4d25bdf(void)

{
  int64_t *plVar1;
  int64_t *in_RAX;
  
  do {
    plVar1 = (int64_t *)*in_RAX;
    FUN_7fffa52c3bf0(in_RAX);
    in_RAX = plVar1;
  } while (plVar1 != (int64_t *)0x0);
  return;
}


// ============================================================================
// Function : FUN_7fffa4d25bfc  |  RVA: 0x5b5bfc  |  Size: 5 bytes
// Callers  : none
// Callees  : none
// ============================================================================
void FUN_7fffa4d25bfc(void)

{
  return;
}


// ============================================================================
// Function : FUN_7fffa4d25c20  |  RVA: 0x5b5c20  |  Size: 130636 bytes
// Callers  : none
// Callees  : FUN_7fffa565caf0@0xeecaf0
// ============================================================================
// [Structured Disassembly Fallback]
void FUN_7fffa4d25c20(void) {
    /* +0x5b5c20 */ __asm { PUSH RBP }
    /* +0x5b5c21 */ __asm { PUSH R14 }
    /* +0x5b5c23 */ __asm { PUSH R13 }
    /* +0x5b5c25 */ __asm { PUSH R12 }
    /* +0x5b5c27 */ __asm { PUSH RDI }
    /* +0x5b5c28 */ __asm { PUSH RBX }
    /* +0x5b5c29 */ __asm { PUSH R15 }
    /* +0x5b5c2b */ __asm { PUSH RSI }
    /* +0x5b5c2c */ __asm { MOV EAX,0x25b8 }
    /* +0x5b5c31 */ __asm { CALL 0x7fffa565caf0 }
    /* +0x5b5c36 */ __asm { SUB RSP,RAX }
    /* +0x5b5c39 */ __asm { LEA RBP,[RSP + 0x80] }
    /* +0x5b5c41 */ __asm { MOVDQA xmmword ptr [RBP + 0x2520],XMM12 }
    /* +0x5b5c4a */ __asm { MOVDQA xmmword ptr [RBP + 0x2510],XMM8 }
    /* +0x5b5c53 */ __asm { MOVDQA xmmword ptr [RBP + 0x2500],XMM15 }
    /* +0x5b5c5c */ __asm { MOVDQA xmmword ptr [RBP + 0x24f0],XMM11 }
    /* +0x5b5c65 */ __asm { MOVAPS xmmword ptr [RBP + 0x24e0],XMM6 }
    /* +0x5b5c6c */ __asm { MOVAPS xmmword ptr [RBP + 0x24d0],XMM9 }
    /* +0x5b5c74 */ __asm { MOVDQA xmmword ptr [RBP + 0x24c0],XMM7 }
    /* +0x5b5c7c */ __asm { MOVAPS xmmword ptr [RBP + 0x24b0],XMM14 }
    /* +0x5b5c84 */ __asm { MOVDQA xmmword ptr [RBP + 0x24a0],XMM13 }
    /* +0x5b5c8d */ __asm { MOVDQA xmmword ptr [RBP + 0x2490],XMM10 }
    /* +0x5b5c96 */ __asm { MOV qword ptr [RBP + 0x2488],-0x2 }
    /* +0x5b5ca1 */ __asm { MOV EAX,R9D }
    /* +0x5b5ca4 */ __asm { OR EAX,0x1 }
    /* +0x5b5ca7 */ __asm { PUSHFQ }
    /* +0x5b5ca8 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x5b5cb0 */ __asm { POPFQ }
    /* +0x5b5cb1 */ __asm { MOV ECX,0x43e5f751 }
    /* +0x5b5cb6 */ __asm { XOR ECX,0xc0000095 }
    /* +0x5b5cbc */ __asm { ADD ECX,0x5c7b84f }
    /* +0x5b5cc2 */ __asm { MOV qword ptr [RBP + 0x4c8],RAX }
    /* +0x5b5cc9 */ __asm { IMUL ECX,EAX }
    /* +0x5b5ccc */ __asm { MOV dword ptr [RBP + 0x1a40],ECX }
    /* +0x5b5cd2 */ __asm { MOV ECX,dword ptr [RBP + 0x1a40] }
    /* +0x5b5cd8 */ __asm { MOV R8W,0xd22f }
    /* +0x5b5cdd */ __asm { MOV qword ptr [RBP + 0x1638],R9 }
    /* +0x5b5ce4 */ __asm { SUB R8D,R9D }
    /* +0x5b5ce7 */ __asm { IMUL R8D,R8D,0x535b }
    /* +0x5b5cee */ __asm { MOVSX R8D,R8W }
    /* +0x5b5cf2 */ __asm { CMP ECX,R8D }
    /* +0x5b5cf5 */ __asm { NOP }
    /* +0x5b5cf6 */ __asm { NOP }
    /* +0x5b5cf7 */ __asm { NOP }
    /* +0x5b5cf8 */ __asm { NOP }
    /* +0x5b5cf9 */ __asm { NOP }
    /* +0x5b5cfa */ __asm { NOP }
    /* +0x5b5cfb */ __asm { MOV EAX,0x19 }
    /* +0x5b5d00 */ __asm { XOR ECX,ECX }
    /* +0x5b5d02 */ __asm { XCHG RBX,R11 }
    /* +0x5b5d05 */ __asm { CPUID }
    /* +0x5b5d07 */ __asm { XCHG RBX,R11 }
    /* +0x5b5d0a */ __asm { MOV dword ptr [RBP + 0x7c0],0x0 }
    /* +0x5b5d14 */ __asm { MOV dword ptr [RBP + 0x162c],0x0 }
    /* +0x5b5d1e */ __asm { MOV dword ptr [RBP + 0xb98],0x0 }
    /* +0x5b5d28 */ __asm { MOV dword ptr [RBP + 0x40c],0x0 }
    /* +0x5b5d32 */ __asm { MOV dword ptr [RBP + 0x40c],EDX }
    /* +0x5b5d38 */ __asm { MOV dword ptr [RBP + 0x7c0],EAX }
    /* +0x5b5d3e */ __asm { MOV dword ptr [RBP + 0xb98],ECX }
    /* +0x5b5d44 */ __asm { MOV DX,0x2f1d }
    /* +0x5b5d48 */ __asm { MOV R10,qword ptr [RBP + 0x1638] }
    /* +0x5b5d4f */ __asm { LEA ECX,[R10 + RDX*0x1] }
    /* +0x5b5d53 */ __asm { ADD ECX,0x5ad4 }
    /* +0x5b5d59 */ __asm { MOVZX EAX,CX }
    /* +0x5b5d5c */ __asm { XOR RAX,0x93 }
    /* +0x5b5d62 */ __asm { MOV dword ptr [RBP + 0x162c],R11D }
    /* +0x5b5d69 */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0x5b5d6d */ __asm { MOV R8D,0x3a843039 }
    /* +0x5b5d73 */ __asm { MOV RCX,qword ptr [RCX + 0x30] }
    /* +0x5b5d77 */ __asm { MOV R11,-0x4c984aa1a165e985 }
    /* +0x5b5d81 */ __asm { IMUL R11,RCX }
    /* +0x5b5d85 */ __asm { MOVQ XMM0,R11 }
    /* +0x5b5d8a */ __asm { MOVD XMM5,R10D }
    /* +0x5b5d8f */ __asm { MOV ECX,0x5c54b08a }
    /* +0x5b5d94 */ __asm { IMUL EAX,ECX,0x11e7cc43 }
    /* +0x5b5d9a */ __asm { ADD EAX,R10D }
    /* +0x5b5d9d */ __asm { MOVD XMM4,R8D }
    /* +0x5b5da2 */ __asm { MOVDQA xmmword ptr [RBP + 0x3e0],XMM5 }
    /* +0x5b5daa */ __asm { PSUBD XMM4,XMM5 }
    /* +0x5b5dae */ __asm { PXOR XMM4,xmmword ptr [0x7fffa56baa80] }
    /* +0x5b5db6 */ __asm { PXOR XMM5,XMM5 }
    /* +0x5b5dba */ __asm { MOVSS XMM5,XMM4 }
    /* +0x5b5dbe */ __asm { XORPS XMM5,XMM0 }
    /* +0x5b5dc1 */ __asm { MOVQ RCX,XMM5 }
    /* +0x5b5dc6 */ __asm { ROL EAX,0x4 }
    /* +0x5b5dc9 */ __asm { ADD RAX,RCX }
    /* +0x5b5dcc */ __asm { MOV RCX,0x5650d3029c2ecde8 }
    /* +0x5b5dd6 */ __asm { CMP RAX,RCX }
    /* +0x5b5dd9 */ __asm { NOP }
    /* +0x5b5dda */ __asm { NOP }
    /* +0x5b5ddb */ __asm { NOP }
    /* +0x5b5ddc */ __asm { NOP }
    /* +0x5b5ddd */ __asm { NOP }
    /* +0x5b5dde */ __asm { MOV RCX,0x0 }
    /* +0x5b5de5 */ __asm { NOP }
    /* +0x5b5de6 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x5b5ded */ __asm { MOV CX,0x1f16 }
    /* +0x5b5df1 */ __asm { IMUL EDX,ECX,-0x3a15 }
    /* +0x5b5df7 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x5b5dfe */ __asm { MOV R8D,ECX }
    /* +0x5b5e01 */ __asm { XOR R8D,EDX }
    /* +0x5b5e04 */ __asm { MOVZX EAX,R8W }
    /* +0x5b5e08 */ __asm { MOV RAX,qword ptr GS:[RAX] }
    /* +0x5b5e0c */ __asm { MOV EDX,0x84edc9d9 }
    /* +0x5b5e11 */ __asm { LEA R11,[0x7fffa478f9f2] }
    /* +0x5b5e18 */ __asm { MOV R8D,0xba06c860 }
    /* +0x5b5e1e */ __asm { LEA R10,[0x7fffa4794733] }
    /* +0x5b5e25 */ __asm { ADD R8D,0x2de8b665 }
    /* +0x5b5e2c */ __asm { MOVD XMM0,R8D }
    /* +0x5b5e31 */ __asm { MOV R8D,0x15e17158 }
    /* +0x5b5e37 */ __asm { XOR R8D,0xb343534b }
    /* +0x5b5e3e */ __asm { ROL R8D,CL }
    /* +0x5b5e41 */ __asm { ADD EDX,0x5c323611 }
    /* +0x5b5e47 */ __asm { ROR EDX,CL }
    /* +0x5b5e49 */ __asm { LEA R9,[0x7fffa478c0d3] }
    /* +0x5b5e50 */ __asm { MOV R14W,0xce6b }
    /* +0x5b5e55 */ __asm { XOR R14D,0xca99 }
    /* +0x5b5e5c */ __asm { ROL R14W,0xd }
    /* +0x5b5e61 */ __asm { ROR R14W,CL }
    /* +0x5b5e65 */ __asm { MOVSX RCX,R14W }
    /* +0x5b5e69 */ __asm { MOVZX R9D,uint8_t ptr [R9 + RCX*0x1 + 0x10] }
    /* +0x5b5e6f */ __asm { INC R9B }
    /* +0x5b5e72 */ __asm { ROL EDX,0xd }
    /* +0x5b5e75 */ __asm { AND R9B,0x7 }
    /* +0x5b5e79 */ __asm { MOVSXD RCX,EDX }
    /* +0x5b5e7c */ __asm { ADD RCX,R11 }
    /* +0x5b5e7f */ __asm { MOVZX EDX,R9B }
    /* +0x5b5e83 */ __asm { MOV RAX,qword ptr [RAX + 0x48] }
    /* +0x5b5e87 */ __asm { MOV R11D,EAX }
    /* +0x5b5e8a */ __asm { SHR R11D,0x18 }
    /* +0x5b5e8e */ __asm { MOV R9,RAX }
    /* +0x5b5e91 */ __asm { SHR R9,0x20 }
    /* +0x5b5e95 */ __asm { NOT R9B }
    /* +0x5b5e98 */ __asm { ROR R9B,0x1 }
    /* +0x5b5e9b */ __asm { NOT R11B }
    /* +0x5b5e9e */ __asm { ROR R11B,0x1 }
    /* +0x5b5ea1 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x1f],R11B }
    /* +0x5b5ea6 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x20],R9B }
    /* +0x5b5eab */ __asm { MOV R11,RAX }
    /* +0x5b5eae */ __asm { SHR R11,0x30 }
    /* +0x5b5eb2 */ __asm { NOT R11B }
    /* +0x5b5eb5 */ __asm { ROR R11B,0x1 }
    /* +0x5b5eb8 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x22],R11B }
    /* +0x5b5ebd */ __asm { MOV R9D,EAX }
    /* +0x5b5ec0 */ __asm { NOT R9B }
    /* +0x5b5ec3 */ __asm { ROR R9B,0x1 }
    /* +0x5b5ec6 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x1c],R9B }
    /* +0x5b5ecb */ __asm { MOV R11D,EAX }
    /* +0x5b5ece */ __asm { SHR R11D,0x8 }
    /* +0x5b5ed2 */ __asm { NOT R11B }
    /* +0x5b5ed5 */ __asm { ROR R11B,0x1 }
    /* +0x5b5ed8 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x1d],R11B }
    /* +0x5b5edd */ __asm { MOV R11,RAX }
    /* +0x5b5ee0 */ __asm { SHR R11,0x28 }
    /* +0x5b5ee4 */ __asm { NOT R11B }
    /* +0x5b5ee7 */ __asm { ROR R11B,0x1 }
    /* +0x5b5eea */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x21],R11B }
    /* +0x5b5eef */ __asm { MOV R11D,EAX }
    /* +0x5b5ef2 */ __asm { SHR RAX,0x38 }
    /* +0x5b5ef6 */ __asm { NOT AL }
    /* +0x5b5ef8 */ __asm { ROR AL,0x1 }
    /* +0x5b5efa */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x23],AL }
    /* +0x5b5efe */ __asm { SHR R11D,0x10 }
    /* +0x5b5f02 */ __asm { NOT R11B }
    /* +0x5b5f05 */ __asm { ROR R11B,0x1 }
    /* +0x5b5f08 */ __asm { MOV uint8_t ptr [RCX + RDX*0x8 + 0x1e],R11B }
    /* +0x5b5f0d */ __asm { PXOR XMM0,xmmword ptr [RBP + 0x3e0] }
    /* +0x5b5f15 */ __asm { MOVD ECX,XMM0 }
    /* +0x5b5f19 */ __asm { MOVSXD R11,ECX }
    /* +0x5b5f1c */ __asm { MOV uint8_t ptr [R10 + R11*0x1 + 0x10],DL }
    /* +0x5b5f21 */ __asm { MOV dword ptr [RBP + 0x1a40],R8D }
    /* +0x5b5f28 */ __asm { MOV ECX,dword ptr [RBP + 0x1a40] }
    /* +0x5b5f2e */ __asm { TEST CL,0x1 }
    /* +0x5b5f31 */ __asm { NOP }
    /* +0x5b5f32 */ __asm { NOP }
    /* +0x5b5f33 */ __asm { NOP }
    /* +0x5b5f34 */ __asm { NOP }
    /* +0x5b5f35 */ __asm { NOP }
    /* +0x5b5f36 */ __asm { MOV EAX,0xb28aa000 }
    /* +0x5b5f3b */ __asm { IMUL EAX,dword ptr [RBP + 0x4c8] }
    /* +0x5b5f42 */ __asm { ROL EAX,0x4 }
    /* +0x5b5f45 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x5b5f4c */ __asm { NOP }
    /* +0x5b5f4d */ __asm { MOV RCX,0x0 }
    /* +0x5b5f54 */ __asm { MOV R10,qword ptr [RAX] }
    /* +0x5b5f57 */ __asm { MOV EAX,0xe7909b1d }
    /* +0x5b5f5c */ __asm { MOV R11,qword ptr [RBP + 0x1638] }
    /* +0x5b5f63 */ __asm { XOR EAX,R11D }
    /* +0x5b5f66 */ __asm { ROL EAX,0x1a }
    /* +0x5b5f69 */ __asm { MOV R8,qword ptr [RAX] }
    /* +0x5b5f6c */ __asm { MOV ECX,0x53e475ce }
    /* +0x5b5f71 */ __asm { XOR ECX,0xb40aba32 }
    /* +0x5b5f77 */ __asm { ADD ECX,R11D }
    /* +0x5b5f7a */ __asm { MOVSXD RDX,ECX }
    /* +0x5b5f7d */ __asm { LEA RCX,[0x7fffa47920a2] }
    /* +0x5b5f84 */ __asm { MOV RCX,qword ptr [RCX + RDX*0x1] }
    /* +0x5b5f88 */ __asm { TEST RCX,RCX }
    /* +0x5b5f8b */ __asm { JZ 0x7fffa4d25f92 }
    /* +0x5b5f8d */ __asm { MOV RAX,qword ptr [RCX] }
    /* +0x5b5f90 */ __asm { JMP 0x7fffa4d25f94 }
    /* +0x5b5f92 */ __asm { XOR EAX,EAX }
    /* +0x5b5f94 */ __asm { MOV R11D,0xc6f711af }
    /* +0x5b5f9a */ __asm { MOV EDX,0xacbe8457 }
    /* +0x5b5f9f */ __asm { XOR EDX,0xe804eeea }
    /* +0x5b5fa5 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x5b5fac */ __asm { ROL EDX,CL }
    /* +0x5b5fae */ __asm { IMUL R11D,dword ptr [RBP + 0x4c8] }
    /* +0x5b5fb6 */ __asm { NOT R11D }
    /* +0x5b5fb9 */ __asm { CMP RDX,R11 }
    /* +0x5b5fbc */ __asm { JC 0x7fffa4d2606a }
    /* +0x5b5fc2 */ __asm { MOVAPS XMM0,xmmword ptr [RBP + 0x30] }
    /* +0x5b5fc6 */ __asm { ADD RAX,R8 }
    /* +0x5b5fc9 */ __asm { SUB R10,RAX }
    /* +0x5b5fcc */ __asm { MOV R14,0x1f36b4bc0d13e4e3 }
    /* +0x5b5fd6 */ __asm { MOV ECX,0x24c5d1ab }
    /* +0x5b5fdb */ __asm { MOV RAX,qword ptr [RBP + 0x1638] }
    /* +0x5b5fe2 */ __asm { SUB ECX,EAX }
    /* +0x5b5fe4 */ __asm { XOR ECX,0xb73aa556 }
    /* +0x5b5fea */ __asm { ROL ECX,0x11 }
    /* +0x5b5fed */ __asm { MOVSXD RDX,ECX }
    /* +0x5b5ff0 */ __asm { LEA RCX,[0x7fffa47c5139] }
    /* +0x5b5ff7 */ __asm { MOV RSI,-0x7c9a946e51eb35ec }
    /* +0x5b6001 */ __asm { MOV RBX,-0x7c9a946e51875990 }
    /* +0x5b600b */ __asm { MOV R8D,0x94a53aab }
    /* +0x5b6011 */ __asm { XOR R8D,EAX }
    /* +0x5b6014 */ __asm { MOV R11,0x3146d8d965748687 }
    /* +0x5b601e */ __asm { LEA RAX,[RBP + 0x1a40] }
    /* +0x5b6025 */ __asm { ADD R8D,0x1c5589f }
    /* +0x5b602c */ __asm { ROL R8D,0x15 }
    /* +0x5b6030 */ __asm { MOVAPS XMM4,xmmword ptr [RAX] }
    /* +0x5b6033 */ __asm { MOVSXD R9,R8D }
    /* +0x5b6036 */ __asm { MOV qword ptr [RCX + RDX*0x1],R10 }
    /* +0x5b603a */ __asm { MOV qword ptr [RBP + 0x23e0],RBX }
    /* +0x5b6041 */ __asm { MOV qword ptr [RBP + 0x1a48],RBX }
    /* +0x5b6048 */ __asm { MOV qword ptr [RBP + 0x16f8],RSI }
    /* +0x5b604f */ __asm { MOV qword ptr [RBP + 0x38],RSI }
    /* +0x5b6053 */ __asm { MOV qword ptr [RBP + 0x19d8],R14 }
    /* +0x5b605a */ __asm { MOV qword ptr [RBP + 0x1a40],R14 }
    /* +0x5b6061 */ __asm { MOV qword ptr [RBP + 0x30],R11 }
    /* +0x5b6065 */ __asm { JMP 0x7fffa4d26119 }
    /* +0x5b606a */ __asm { MOV R9D,0x3166bc27 }
    /* +0x5b6070 */ __asm { MOV R11,qword ptr [RBP + 0x1638] }
    /* +0x5b6077 */ __asm { MOV EDX,R11D }
    /* +0x5b607a */ __asm { OR EDX,0x1 }
    /* +0x5b607d */ __asm { MOV RCX,0x3146d8d965748687 }
    /* +0x5b6087 */ __asm { MOVD XMM0,EDX }
    /* +0x5b608b */ __asm { ADD RAX,R8 }
    /* +0x5b608e */ __asm { XOR R9D,R11D }
    /* +0x5b6091 */ __asm { LEA R11,[RBP + 0x1a40] }
    /* +0x5b6098 */ __asm { ADD R9D,0xe98540f4 }
    /* +0x5b609f */ __asm { MOV R14,0x1f36b4bc0d13e4e3 }
    /* +0x5b60a9 */ __asm { SUB R10,RAX }
    /* +0x5b60ac */ __asm { LEA R8,[0x7fffa47c0aac] }
    /* +0x5b60b3 */ __asm { MOV DX,0x213b }
    /* +0x5b60b7 */ __asm { MOVD XMM4,EDX }
    /* +0x5b60bb */ __asm { PMULLW XMM4,XMM0 }
    /* +0x5b60bf */ __asm { MOV RSI,-0x7c9a946e51eb35ec }
    /* +0x5b60c9 */ __asm { MOV RBX,-0x7c9a946e51875990 }
    /* +0x5b60d3 */ __asm { MOVD EAX,XMM4 }
    /* +0x5b60d7 */ __asm { MOVSX RDX,AX }
    /* +0x5b60db */ __asm { XOR RDX,0x6d1d }
    /* +0x5b60e2 */ __asm { MOV qword ptr [R8 + RDX*0x1],R10 }
    /* +0x5b60e6 */ __asm { MOV qword ptr [RBP + 0x30],RCX }
    /* +0x5b60ea */ __asm { MOV qword ptr [RBP + 0x16f8],RSI }
    /* +0x5b60f1 */ __asm { MOV qword ptr [RBP + 0x38],RSI }
    /* +0x5b60f5 */ __asm { MOV qword ptr [RBP + 0x19d8],R14 }
    /* +0x5b60fc */ __asm { MOV qword ptr [RBP + 0x1a40],R14 }
    /* +0x5b6103 */ __asm { MOVAPS XMM0,xmmword ptr [RBP + 0x30] }
    /* +0x5b6107 */ __asm { MOV qword ptr [RBP + 0x23e0],RBX }
    /* +0x5b610e */ __asm { MOV qword ptr [RBP + 0x1a48],RBX }
    /* +0x5b6115 */ __asm { MOVAPS XMM4,xmmword ptr [R11] }
    /* +0x5b6119 */ __asm { XORPS XMM4,XMM0 }
    /* +0x5b611c */ __asm { MOV R10,qword ptr [RBP + 0x1638] }
    /* +0x5b6123 */ __asm { MOVD XMM0,R10D }
    /* +0x5b6128 */ __asm { MOVAPS xmmword ptr [RBP + 0x30],XMM4 }
    /* +0x5b612c */ __asm { MOV CX,0x612c }
    /* +0x5b6130 */ __asm { MOVD XMM4,ECX }
    /* +0x5b6134 */ __asm { PADDW XMM4,XMM0 }
    /* +0x5b6138 */ __asm { MOVD R8D,XMM4 }
    /* +0x5b613d */ __asm { MOV ECX,R9D }
    /* +0x5b6140 */ __asm { ROL R8W,CL }
    /* +0x5b6144 */ __asm { MOV R14D,R9D }
    /* +0x5b6147 */ __asm { IMUL ECX,R8D,-0x5507 }
    /* +0x5b614e */ __asm { MOVZX EAX,CX }
    /* +0x5b6151 */ __asm { MOV RCX,qword ptr GS:[RAX] }
    /* +0x5b6155 */ __asm { MOV R8D,0x67c66835 }
    /* +0x5b615b */ __asm { XOR R8D,R10D }
    /* +0x5b615e */ __asm { MOV R10,qword ptr [RCX + 0x48] }
    /* +0x5b6162 */ __asm { LEA RDX,[0x7fffa4788ff7] }
    /* +0x5b6169 */ __asm { MOV ECX,R9D }
    /* +0x5b616c */ __asm { ROR R8D,CL }
    /* +0x5b616f */ __asm { IMUL ECX,R8D,-0x77a8739f }
    /* +0x5b6176 */ __asm { MOV AX,0xa08f }
    /* +0x5b617a */ __asm { MOVSXD R8,ECX }
    /* +0x5b617d */ __asm { XOR EAX,0x1465 }
    /* +0x5b6182 */ __asm { MOV qword ptr [RBP + 0xb20],R9 }
    /* +0x5b6189 */ __asm { ADD EAX,R9D }
    /* +0x5b618c */ __asm { MOVSX R11,AX }
    /* +0x5b6190 */ __asm { LEA RCX,[0x7fffa478d99b] }
    /* +0x5b6197 */ __asm { ADD RCX,R8 }
    /* +0x5b619a */ __asm { MOVZX EDX,uint8_t ptr [RDX + R11*0x1 + 0x10] }
    /* +0x5b61a0 */ __asm { MOVZX EAX,uint8_t ptr [RCX + RDX*0x8 + 0x1f] }
    /* +0x5b61a5 */ __asm { MOVZX R9D,uint8_t ptr [RCX + RDX*0x8 + 0x22] }
    /* +0x5b61ab */ __asm { NOT AL }
    /* +0x5b61ad */ __asm { MOVZX R8D,uint8_t ptr [RCX + RDX*0x8 + 0x23] }
    /* +0x5b61b3 */ __asm { NOT R8B }
    /* +0x5b61b6 */ __asm { ROL R8B,0x1 }
    /* +0x5b61b9 */ __asm { ROL AL,0x1 }
    /* +0x5b61bb */ __asm { NOT R9B }
    /* +0x5b61be */ __asm { ROL R9B,0x1 }
    /* +0x5b61c1 */ __asm { MOV uint8_t ptr [RBP + 0x1a47],R8B }
    /* +0x5b61c8 */ __asm { MOVZX R8D,uint8_t ptr [RCX + RDX*0x8 + 0x1c] }
    /* +0x5b61ce */ __asm { NOT R8B }
    /* +0x5b61d1 */ __asm { ROL R8B,0x1 }
    /* +0x5b61d4 */ __asm { MOVZX R11D,uint8_t ptr [RCX + RDX*0x8 + 0x20] }
    /* +0x5b61da */ __asm { NOT R11B }
    /* +0x5b61dd */ __asm { ROL R11B,0x1 }
    /* +0x5b61e0 */ __asm { OR R14D,0x1 }
    /* +0x5b61e4 */ __asm { MOV uint8_t ptr [RBP + 0x1a40],R8B }
    /* +0x5b61eb */ __asm { MOVZX R8D,uint8_t ptr [RCX + RDX*0x8 + 0x1e] }
    /* +0x5b61f1 */ __asm { MOV uint8_t ptr [RBP + 0x1a43],AL }
    /* +0x5b61f7 */ __asm { MOV EAX,R8D }
    /* +0x5b61fa */ __asm { NOT AL }
    /* +0x5b61fc */ __asm { ROL AL,0x1 }
    /* +0x5b61fe */ __asm { MOV uint8_t ptr [RBP + 0x1a42],AL }
    /* +0x5b6204 */ __asm { MOV uint8_t ptr [RBP + 0x1a44],R11B }
    /* +0x5b620b */ __asm { MOVZX EAX,uint8_t ptr [RCX + RDX*0x8 + 0x1d] }
    /* +0x5b6210 */ __asm { MOV uint8_t ptr [RBP + 0x1a46],R9B }
    /* +0x5b6217 */ __asm { NOT AL }
    /* +0x5b6219 */ __asm { ROL AL,0x1 }
    /* +0x5b621b */ __asm { MOV uint8_t ptr [RBP + 0x1a41],AL }
    /* +0x5b6221 */ __asm { MOVZX ECX,uint8_t ptr [RCX + RDX*0x8 + 0x21] }
    /* +0x5b6226 */ __asm { NOT CL }
    /* +0x5b6228 */ __asm { ROL CL,0x1 }
    /* +0x5b622a */ __asm { MOV uint8_t ptr [RBP + 0x1a45],CL }
    /* +0x5b6230 */ __asm { CMP R10,qword ptr [RBP + 0x1a40] }
    /* +0x5b6237 */ __asm { MOV uint8_t ptr [RBP + 0x500],R8B }
    /* +0x5b623e */ __asm { JZ 0x7fffa4d26250 }
    /* +0x5b6240 */ __asm { MOV qword ptr [RBP + 0x430],0x0 }
    /* +0x5b624b */ __asm { JMP 0x7fffa4d262d1 }
    /* +0x5b6250 */ __asm { MOV ECX,0x8f3a676d }
    /* +0x5b6255 */ __asm { IMUL EAX,ECX,0x7ffe0005 }
    /* +0x5b625b */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x5b6262 */ __asm { ROR EAX,CL }
    /* +0x5b6264 */ __asm { IMUL EAX,R14D }
    /* +0x5b6268 */ __asm { MOV R10,qword ptr [RAX] }
    /* +0x5b626b */ __asm { MOV EAX,0x55faecf9 }
    /* +0x5b6270 */ __asm { XOR EAX,0xc0000010 }
    /* +0x5b6275 */ __asm { IMUL EAX,R14D }
    /* +0x5b6279 */ __asm { ROR EAX,CL }
    /* +0x5b627b */ __asm { MOV R9,qword ptr [RAX] }
    /* +0x5b627e */ __asm { MOV R8W,0xa449 }
    /* +0x5b6283 */ __asm { IMUL R8D,R8D,-0x555 }
    /* +0x5b628a */ __asm { LEA RDX,[0x7fffa478e566] }
    /* +0x5b6291 */ __asm { MOVD XMM0,ECX }
    /* +0x5b6295 */ __asm { MOVD XMM4,R8D }
    /* +0x5b629a */ __asm { PADDW XMM4,XMM0 }
    /* +0x5b629e */ __asm { MOVD EAX,XMM4 }
    /* +0x5b62a2 */ __asm { NOT EAX }
    /* +0x5b62a4 */ __asm { MOVSX R11,AX }
    /* +0x5b62a8 */ __asm { MOV R8,qword ptr [RDX + R11*0x1] }
    /* +0x5b62ac */ __asm { TEST R8,R8 }
    /* +0x5b62af */ __asm { JZ 0x7fffa4d262b6 }
    /* +0x5b62b1 */ __asm { MOV RAX,qword ptr [R8] }
    /* +0x5b62b4 */ __asm { JMP 0x7fffa4d262b8 }
    /* +0x5b62b6 */ __asm { XOR EAX,EAX }
    /* +0x5b62b8 */ __asm { ADD RAX,R9 }
    /* +0x5b62bb */ __asm { MOVQ XMM0,RAX }
    /* +0x5b62c0 */ __asm { MOVQ XMM4,R10 }
    /* +0x5b62c5 */ __asm { PSUBQ XMM4,XMM0 }
    /* +0x5b62c9 */ __asm { MOVQ qword ptr [RBP + 0x430],XMM4 }
    /* +0x5b62d1 */ __asm { MOV dword ptr [RBP + 0x1260],R14D }
    /* +0x5b62d8 */ __asm { MOV ECX,0xc5134c7d }
    /* +0x5b62dd */ __asm { MOV R9,qword ptr [RBP + 0xb20] }
    /* +0x5b62e4 */ __asm { ADD ECX,R9D }
    /* +0x5b62e7 */ __asm { MOV DX,0x202d }
    /* +0x5b62eb */ __asm { MOV qword ptr [RBP + 0x22f0],RDX }
    /* +0x5b62f2 */ __asm { LEA R8D,[R9 + RDX*0x1] }
    /* +0x5b62f6 */ __asm { ROL R8W,0x4 }
    /* +0x5b62fb */ __asm { MOV EDX,0xd80f324b }
    /* +0x5b6300 */ __asm { SUB EDX,ECX }
    /* +0x5b6302 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x5b6309 */ __asm { ROL EDX,CL }
    /* +0x5b630b */ __asm { MOVSXD RDX,EDX }
    /* +0x5b630e */ __asm { LEA R11,[0x7fffa47c54de] }
    /* +0x5b6315 */ __asm { MOV EAX,0x6726 }
    /* +0x5b631a */ __asm { SUB EAX,R8D }
    /* +0x5b631d */ __asm { MOVSX R10,AX }
    /* +0x5b6321 */ __asm { ADD R10,R11 }
    /* +0x5b6324 */ __asm { LEA RAX,[0x7fffa47c90cb] }
    /* +0x5b632b */ __asm { MOV R8D,0x5b76d81f }
    /* +0x5b6331 */ __asm { NOT R8D }
    /* +0x5b6334 */ __asm { ADD R8D,ECX }
    /* +0x5b6337 */ __asm { SUB R8D,R9D }
    /* +0x5b633a */ __asm { ADD R8D,0x5661ae68 }
    /* +0x5b6341 */ __asm { MOVSXD R11,R8D }
    /* +0x5b6344 */ __asm { LEA R8,[0x7fffa47cb671] }
    /* +0x5b634b */ __asm { MOVZX R11D,uint8_t ptr [R8 + R11*0x1 + 0x5] }
    /* +0x5b6351 */ __asm { MOV RCX,qword ptr [RAX + RDX*0x1 + 0x3e] }
    /* +0x5b6356 */ __asm { XOR RCX,qword ptr [R10 + R11*0x8 + 0xf] }
    /* +0x5b635b */ __asm { MOV qword ptr [RBP + 0x1a40],RCX }
    /* +0x5b6362 */ __asm { MOV RDI,qword ptr [RBP + 0x1a40] }
    /* +0x5b6369 */ __asm { MOVD XMM0,dword ptr [RBP + 0x4c8] }
    /* +0x5b6371 */ __asm { MOVDQA xmmword ptr [RBP + 0xbb0],XMM0 }
    /* +0x5b6379 */ __asm { TEST RDI,RDI }
    /* +0x5b637c */ __asm { JZ 0x7fffa4d37d7b }
    /* +0x5b6382 */ __asm { LEA RCX,[RBP + 0x30] }
    /* +0x5b6386 */ __asm { MOV R8D,0x800 }
    /* +0x5b638c */ __asm { XOR EDX,EDX }
    /* +0x5b638e */ __asm { CALL RDI }
    /* +0x5b6390 */ __asm { MOV RSI,RAX }
    /* +0x5b6393 */ __asm { TEST RAX,RAX }
    /* +0x5b6396 */ __asm { JNZ 0x7fffa4d263b2 }
    /* +0x5b6398 */ __asm { LEA RCX,[RBP + 0x30] }
    /* +0x5b639c */ __asm { MOV R8D,0x1000 }
    /* +0x5b63a2 */ __asm { XOR EDX,EDX }
    /* +0x5b63a4 */ __asm { CALL RDI }
    /* +0x5b63a6 */ __asm { MOV RSI,RAX }
    /* +0x5b63a9 */ __asm { TEST RAX,RAX }
    /* +0x5b63ac */ __asm { JZ 0x7fffa4d26b9b }
    /* +0x5b63b2 */ __asm { MOV CX,0x5820 }
    /* +0x5b63b6 */ __asm { MOV R8W,0x66ad }
    /* +0x5b63bb */ __asm { MOVD XMM0,R8D }
    /* +0x5b63c0 */ __asm { LEA R8,[0x7fffa47c0392] }
    /* +0x5b63c7 */ __asm { ADD ECX,0x4a43 }
    /* +0x5b63cd */ __asm { MOV R11,qword ptr [RBP + 0xb20] }
    /* +0x5b63d4 */ __asm { MOV EDX,R11D }
    /* +0x5b63d7 */ __asm { XOR EDX,ECX }
    /* +0x5b63d9 */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x5b63e0 */ __asm { ROR DX,CL }
    /* +0x5b63e3 */ __asm { MOVSX R10,DX }
    /* +0x5b63e7 */ __asm { ADD R10,R8 }
    /* +0x5b63ea */ __asm { MOVD XMM4,ECX }
    /* +0x5b63ee */ __asm { PXOR XMM4,XMM0 }
    /* +0x5b63f2 */ __asm { MOVD EAX,XMM4 }
    /* +0x5b63f6 */ __asm { MOV ECX,R11D }
    /* +0x5b63f9 */ __asm { ROL AX,CL }
    /* +0x5b63fc */ __asm { NOT EAX }
    /* +0x5b63fe */ __asm { MOVSX RDX,AX }
    /* +0x5b6402 */ __asm { LEA RCX,[0x7fffa47c0d54] }
    /* +0x5b6409 */ __asm { MOVZX EDX,uint8_t ptr [RCX + RDX*0x1 + 0x9] }
    /* +0x5b640e */ __asm { MOVZX ECX,uint8_t ptr [R10 + RDX*0x8 + 0x11] }
    /* +0x5b6414 */ __asm { MOVZX R9D,uint8_t ptr [R10 + RDX*0x8 + 0x12] }
    /* +0x5b641a */ __asm { ROL R9B,0x3 }
    /* +0x5b641e */ __asm { MOV uint8_t ptr [RBP + 0x1a43],R9B }
    /* +0x5b6425 */ __asm { MOVZX R9D,uint8_t ptr [R10 + RDX*0x8 + 0x10] }
    /* +0x5b642b */ __asm { MOVZX EAX,uint8_t ptr [R10 + RDX*0x8 + 0x15] }
    /* +0x5b6431 */ __asm { ROL R9B,0x3 }
    /* +0x5b6435 */ __asm { MOVZX R8D,uint8_t ptr [R10 + RDX*0x8 + 0x16] }
    /* +0x5b643b */ __asm { ROL R8B,0x3 }
    /* +0x5b643f */ __asm { ROL CL,0x3 }
    /* +0x5b6442 */ __asm { MOV uint8_t ptr [RBP + 0x1a41],R9B }
    /* +0x5b6449 */ __asm { ROL AL,0x3 }
    /* +0x5b644c */ __asm { MOV uint8_t ptr [RBP + 0x1a42],CL }
    /* +0x5b6452 */ __asm { MOVZX ECX,uint8_t ptr [R10 + RDX*0x8 + 0x13] }
    /* +0x5b6458 */ __asm { MOVZX R9D,uint8_t ptr [R10 + RDX*0x8 + 0x14] }
    /* +0x5b645e */ __asm { ROL CL,0x3 }
    /* +0x5b6461 */ __asm { ROL R9B,0x3 }
    /* +0x5b6465 */ __asm { MOV uint8_t ptr [RBP + 0x1a44],CL }
    /* +0x5b646b */ __asm { MOVZX ECX,uint8_t ptr [R10 + RDX*0x8 + 0xf] }
    /* +0x5b6471 */ __asm { MOV uint8_t ptr [RBP + 0x1a47],R8B }
    /* +0x5b6478 */ __asm { MOV uint8_t ptr [RBP + 0x1a45],R9B }
    /* +0x5b647f */ __asm { ROL CL,0x3 }
    /* +0x5b6482 */ __asm { MOV uint8_t ptr [RBP + 0x1a46],AL }
    /* +0x5b6488 */ __asm { MOV uint8_t ptr [RBP + 0x1a40],CL }
    /* +0x5b648e */ __asm { MOV RAX,qword ptr [RBP + 0x1a40] }
    /* +0x5b6495 */ __asm { PUSHFQ }
    /* +0x5b6496 */ __asm { AND qword ptr [RSP],-0x101 }
    /* +0x5b649e */ __asm { POPFQ }
    /* +0x5b649f */ __asm { MOV dword ptr [RBP + 0x1a40],0x1b264a56 }
    /* +0x5b64a9 */ __asm { MOV ECX,dword ptr [RBP + 0x1a40] }
    /* +0x5b64af */ __asm { CMP ECX,0x90dba0a2 }
    /* +0x5b64b5 */ __asm { NOP }
    /* +0x5b64b6 */ __asm { NOP }
    /* +0x5b64b7 */ __asm { NOP }
    /* +0x5b64b8 */ __asm { NOP }
    /* +0x5b64b9 */ __asm { NOP }
    /* +0x5b64ba */ __asm { TEST RAX,RAX }
    /* +0x5b64bd */ __asm { JZ 0x7fffa4d483e6 }
    /* +0x5b64c3 */ __asm { LEA R11,[0x7fffa4770000] }
    /* +0x5b64ca */ __asm { MOV RCX,0x0 }
    /* +0x5b64d1 */ __asm { NOP }
    /* +0x5b64d2 */ __asm { MOV RDX,RSI }
    /* +0x5b64d5 */ __asm { MOV ECX,0x1 }
    /* +0x5b64da */ __asm { CALL RAX }
    /* +0x5b64dc */ __asm { MOV R9,qword ptr [RBP + 0x430] }
    /* +0x5b64e3 */ __asm { TEST R9,R9 }
    /* +0x5b64e6 */ __asm { MOV RDI,qword ptr [RBP + 0xb20] }
    /* +0x5b64ed */ __asm { MOV R15D,dword ptr [RBP + 0x1260] }
    /* +0x5b64f4 */ __asm { JZ 0x7fffa4d265b9 }
    /* +0x5b64fa */ __asm { MOV EAX,0x7a5d4121 }
    /* +0x5b64ff */ __asm { MOV RCX,qword ptr [RBP + 0x1638] }
    /* +0x5b6506 */ __asm { ADD EAX,ECX }
    /* +0x5b6508 */ __asm { ROL EAX,0x11 }
    /* +0x5b650b */ __asm { XOR RAX,0xfb924d3 }
    /* +0x5b6511 */ __asm { MOV R10,qword ptr [RAX] }
    /* +0x5b6514 */ __asm { MOV EAX,0xb421204 }
    /* +0x5b6519 */ __asm { XOR EAX,0x40b5d35e }
    /* +0x5b651e */ __asm { ROR EAX,CL }
    /* +0x5b6520 */ __asm { XOR EAX,EDI }
}

